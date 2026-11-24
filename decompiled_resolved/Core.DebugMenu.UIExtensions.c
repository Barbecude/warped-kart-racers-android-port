// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.DebugMenu.UIExtensions

// ============================================================
// RVA: 0x1643758 | Core.DebugMenu.UIExtensions.IsTransformADescendentOf
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0163f3e4) */
/* WARNING: Removing unreachable block (ram,0x0163f3fc) */
/* WARNING: Removing unreachable block (ram,0x0163f410) */
/* WARNING: Removing unreachable block (ram,0x0163f418) */
/* WARNING: Removing unreachable block (ram,0x0163f430) */
/* WARNING: Removing unreachable block (ram,0x0163f43c) */
/* WARNING: Removing unreachable block (ram,0x0163f458) */
/* WARNING: Removing unreachable block (ram,0x0163f464) */
/* WARNING: Removing unreachable block (ram,0x0163f6e8) */
/* WARNING: Removing unreachable block (ram,0x0163f708) */
/* WARNING: Removing unreachable block (ram,0x0163f71c) */
/* WARNING: Removing unreachable block (ram,0x0163f724) */
/* WARNING: Removing unreachable block (ram,0x0163f730) */
/* WARNING: Removing unreachable block (ram,0x0163f748) */
/* WARNING: Removing unreachable block (ram,0x0163f76c) */
/* WARNING: Removing unreachable block (ram,0x0163f770) */
/* WARNING: Removing unreachable block (ram,0x0163f78c) */
/* WARNING: Removing unreachable block (ram,0x0163f7a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_DebugMenu_UIExtensions__IsTransformADescendentOf
                (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
                long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 ***pppuVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  code *pcVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  long **pplVar17;
  long lVar18;
  int *piVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 uVar23;
  long lVar24;
  code *pcVar25;
  long *unaff_x22;
  undefined8 uVar26;
  undefined8 unaff_x24;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
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
  float fVar27;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long *plStack_180;
  long *plStack_178;
  undefined1 auStack_170 [16];
  undefined1 **ppuStack_160;
  undefined *puStack_158;
  undefined1 *puStack_130;
  undefined *puStack_128;
  undefined1 ***pppuStack_120;
  code *pcStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  code *pcStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar14 = 0x3d23990;
  if ((bRam0000000003eb5740 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5740 = 1;
  }
  while( true ) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_5,0,0);
    if ((uVar10 & 1) == 0) {
      return uVar10;
    }
    if (param_5 == 0) break;
    unaff_x22 = (long *)/*UnityEngine.Transform$$get_parent*/ func_0x03275c98(param_5,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x22,param_6,0);
    if ((uVar9 & 1) != 0) {
      return uVar10;
    }
    param_5 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(param_5,0);
  }
  auVar28 = func_0x00f78af4();
  plVar15 = auVar28._8_8_;
  lVar18 = auVar28._0_8_;
  puStack_48 = &Core_DebugMenu_UIExtensions__ScrollToCentre;
  plVar22 = (long *)0x3eb5000;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb573f & 1) == 0) {
    func_0x00f78a20(0x3d53528);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25598);
    bRam0000000003eb573f = 1;
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  if (lVar18 != 0) {
    uVar23 = *(undefined8 *)(lVar18 + 0x38);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar23,0,0);
    if ((uVar10 & 1) == 0) {
      lVar24 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar18,uRam0000000003d53528);
    }
    else {
      lVar24 = *(long *)(lVar18 + 0x38);
    }
    plVar22 = (long *)0x0;
    if (lVar24 != 0) {
      /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar24,0);
      uStack_90 = CONCAT13(extraout_var_08,
                           CONCAT12(extraout_var_04,CONCAT11(extraout_var_00,extraout_b0_00)));
      fStack_8c = param_2;
      uStack_88 = param_3;
      uStack_84 = param_4;
      if (((*(byte *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Core.DebugMenu.UIExtensions$$TransformBoundsTo*/ func_0x016440bc(&uStack_a8,plVar15,lVar24);
      /*UnityEngine.Rect$$get_center*/ func_0x032534e8(&uStack_90,0);
      fVar27 = param_2;
      /*UnityEngine.Bounds$$get_center*/ func_0x0321b3d8(&uStack_a8,0);
      /*UnityEngine.UI.ScrollRect$$get_verticalNormalizedPosition*/ func_0x032e0560(lVar18,0);
      /*Core.DebugMenu.UIExtensions$$NormalizeScrollDistance*/ func_0x01644350(SUB41(param_2 - fVar27,0),lVar18,1);
      /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(SUB41((float)CONCAT13(extraout_var_09,
                                            CONCAT12(extraout_var_05,
                                                     CONCAT11(extraout_var_01,extraout_b0_01))) -
                            (float)CONCAT13(extraout_var_10,
                                            CONCAT12(extraout_var_06,
                                                     CONCAT11(extraout_var_02,extraout_b0_02))),0),0
                      ,0x3f800000,0);
      uVar10 = /*UnityEngine.UI.ScrollRect$$set_verticalNormalizedPosition*/ func_0x032e06c8(lVar18,0);
      return uVar10;
    }
  }
  lVar24 = func_0x00f78af4();
  pcStack_b8 = Core_DebugMenu_DebugMenuControllerInputSupport__HandleGoBack;
  uVar10 = *(ulong *)(lVar24 + 0x10);
  ppuStack_c0 = &puStack_50;
  if (uVar10 != 0) {
    uVar9 = uVar10;
    if ((bRam0000000003eb5706 & 1) == 0) {
      plStack_d0 = plVar15;
      pcStack_c8 = (code *)lVar18;
      func_0x00f78a20(0x3d3cfc8);
      uVar9 = func_0x00f78a20(0x3d3cfd0);
      auVar28._8_8_ = plStack_d0;
      auVar28._0_8_ = pcStack_c8;
      bRam0000000003eb5706 = 1;
    }
    plStack_d0 = auVar28._8_8_;
    pcStack_c8 = auVar28._0_8_;
    lVar18 = *(long *)(uVar10 + 0x50);
    if ((lVar18 == 0) || (*(int *)(lVar18 + 0x18) < 1)) {
      return uVar9;
    }
    puVar12 = (undefined1 *)
              (ulong)*(uint *)(*(long *)(lVar18 + 0x10) + (ulong)(*(int *)(lVar18 + 0x18) - 1) * 8 +
                              0x24);
    pplVar17 = &plStack_110;
    plStack_e0 = unaff_x22;
    plStack_d8 = plVar22;
    if ((bRam0000000003eb5725 & 1) == 0) {
      func_0x00f78a20(0x3d21150);
      func_0x00f78a20(0x3d403d0);
      func_0x00f78a20(0x3d403d8);
      func_0x00f78a20(0x3d403e8);
      auVar28._8_8_ = plStack_d0;
      auVar28._0_8_ = pcStack_c8;
      bRam0000000003eb5725 = 1;
    }
    plStack_d0 = auVar28._8_8_;
    pcStack_c8 = auVar28._0_8_;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uVar14 = 1;
    uVar9 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar10,puVar12,1,&plStack_110);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    auVar28 = func_0x00f78af4();
    pcStack_118 = Core_DebugMenu_DebugMenu__AddButtonAndPanel;
    puStack_130 = puVar12;
    puStack_128 = (undefined *)uVar10;
    pppuStack_120 = &ppuStack_c0;
    uVar10 = Core_DebugMenu_DebugMenu__AddPanel
                       (0,0,(float)CONCAT13(extraout_var_07,
                                            CONCAT12(extraout_var_03,
                                                     CONCAT11(extraout_var,extraout_b0))) * 1000.0 *
                            _UNK_033f7d80,auVar28._0_8_,1);
    ppuStack_160 = (undefined1 **)0x0;
    Core_DebugMenu_DebugMenu__AddButton
              (0,auVar28._0_8_,auVar28._8_8_,uVar14,1,0,pplVar17,uVar10,0xffffffff);
    return uVar10;
  }
  lVar24 = func_0x00f78af4();
  pcStack_c8 = Core_DebugMenu_DebugMenuControllerInputSupport__HandleShowHide;
  uVar10 = *(ulong *)(lVar24 + 0x10);
  if (uVar10 == 0) {
    plStack_d0 = (long *)&ppuStack_c0;
    uVar10 = func_0x00f78af4();
    return uVar10;
  }
  uVar2 = *(uint *)(uVar10 + 0x3c);
  pcVar13 = (code *)(ulong)uVar2;
  if (uVar2 == 0xffffffff) {
    return uVar10;
  }
  plVar20 = (long *)0xffffffff;
  plStack_d0 = (long *)&ppuStack_c0;
  if ((bRam0000000003eb5724 & 1) == 0) {
    plStack_e0 = plVar15;
    plStack_d8 = (long *)lVar18;
    plStack_d0 = (long *)&ppuStack_c0;
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403e0);
    func_0x00f78a20(0x3d403c8);
    func_0x00f78a20(0x3d1e880);
    auVar28._8_8_ = plStack_e0;
    auVar28._0_8_ = plStack_d8;
    bRam0000000003eb5724 = 1;
  }
  plStack_e0 = auVar28._8_8_;
  plStack_d8 = auVar28._0_8_;
  plStack_110 = (long *)0x0;
  puStack_128 = (undefined *)0x0;
  puStack_130 = (undefined1 *)0x0;
  pcStack_118 = (code *)0x0;
  pppuStack_120 = (undefined1 ***)0x0;
  puStack_158 = (undefined *)0x0;
  ppuStack_160 = (undefined1 **)0x0;
  plVar15 = (long *)((long)&MACH_HEADER.magic + 1);
  uVar9 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar10,pcVar13,1,&puStack_130);
  pcVar25 = pcStack_118;
  if ((int)uVar9 == 0) {
    return uVar9;
  }
  uVar23 = unaff_x24;
  if (pcStack_118 == (code *)0x0) {
LAB_0163f550:
    unaff_x24 = uVar23;
    func_0x00f78af4();
    uVar7 = func_0x00f78e5c(uVar14);
    pppuVar5 = (undefined1 ***)&plStack_180;
    auStack_170._8_8_ = Core_DebugMenu_DebugMenu__HideAllPanels;
    pplVar17 = (long **)auStack_170;
    auVar3._8_8_ = uVar7;
    auVar3._0_8_ = 0x3eb5000;
    uVar9 = uVar7;
    plStack_180 = (long *)pcVar13;
    plStack_178 = (long *)uVar10;
    auStack_170._0_8_ = &plStack_d0;
    if ((bRam0000000003eb5705 & 1) == 0) {
      func_0x00f78a20(0x3d3cfc8);
      uVar9 = func_0x00f78a20(0x3d3cfd0);
      bRam0000000003eb5705 = 1;
    }
    auVar4._8_8_ = plStack_178;
    auVar4._0_8_ = plStack_180;
    lVar18 = *(long *)(uVar7 + 0x50);
    if (lVar18 == 0) {
      pcVar13 = Core_DebugMenu_DebugMenu__PopAll;
      auVar29 = func_0x00f78af4();
      plVar15 = (long *)0x0;
    }
    else {
      if (*(int *)(lVar18 + 0x18) < 1) {
        return uVar9;
      }
      auVar29._8_4_ =
           *(undefined4 *)
            (*(long *)(lVar18 + 0x10) + (ulong)(*(int *)(lVar18 + 0x18) - 1) * 8 + 0x24);
      auVar29._0_8_ = uVar7;
      auVar29._12_4_ = 0;
      plVar15 = (long *)0x0;
      pppuVar5 = &ppuStack_160;
      pplVar17 = (long **)auStack_170._0_8_;
      pcVar13 = (code *)auStack_170._8_8_;
      auVar3 = auVar4;
    }
  }
  else {
    uVar23 = 0x3d21150;
    if ((*(byte *)(*(long *)pcStack_118 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*(long *)pcStack_118 + 200) +
                  (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) {
      func_0x00f78e5c(pcStack_118);
      uVar14 = 0x3d23990;
      goto LAB_0163f550;
    }
    if (*(long *)((long)pcStack_118 + 0x78) == 0) {
      iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar10,0xffffffff,1,&ppuStack_160);
      if (iVar6 == 0) {
        plVar20 = (long *)func_0x00f78aec(/*System.Collections.Generic.Stack<int>_TypeInfo*/ uRam0000000003d1e880);
        /*System.Collections.Generic.Stack<int>$$.ctor*/ func_0x028641f8(plVar20,uRam0000000003d403c8);
        *(long **)((long)pcVar25 + 0x78) = plVar20;
        if (plVar20 != (long *)0x0) {
          /*System.Collections.Generic.Stack<int>$$Push*/ func_0x028648f0(plVar20,pcVar13,uRam0000000003d403e0);
          if ((*(long *)((long)pcVar25 + 0x28) != 0) &&
             (lVar18 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)((long)pcVar25 + 0x28),0), uVar14 = 0x3d23990,
             lVar18 != 0)) {
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar18,0,0);
            uVar9 = uVar10;
            if ((bRam0000000003eb5727 & 1) == 0) {
              func_0x00f78a20(0x3d535c0);
              func_0x00f78a20(0x3d3acd0);
              uVar9 = func_0x00f78a20(0x3d3acd8);
              bRam0000000003eb5727 = 1;
            }
            plStack_110 = (long *)0x0;
            puStack_128 = (undefined *)0x0;
            puStack_130 = (undefined1 *)0x0;
            pcStack_118 = (code *)0x0;
            pppuStack_120 = (undefined1 ***)0x0;
            if (uVar2 == 0xffffffff) {
              return uVar9;
            }
            Core_DebugMenu_DebugMenu__RemoveFromFirstListAndAddToSecond
                      (0,uVar9,*(undefined8 *)(uVar10 + 0x58),*(undefined8 *)(uVar10 + 0x50),pcVar13
                      );
            plVar15 = (long *)((long)&MACH_HEADER.magic + 1);
            uVar9 = Core_DebugMenu_DebugMenu__TryGetElementCopy(uVar10,pcVar13,1,&puStack_130);
            if ((int)uVar9 == 0) {
              return uVar9;
            }
            if (pppuStack_120 != (undefined1 ***)0x0) {
              pcVar13 = (code *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(pppuStack_120,uRam0000000003d535c0);
              if (*(long *)(uVar10 + 0x78) == 0) {
                if (pcVar13 != (code *)0x0) goto LAB_016428ec;
              }
              else if (pcVar13 != (code *)0x0) {
                plVar15 = (long *)0x0;
                /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(pcVar13,1);
LAB_016428ec:
                lVar18 = *(long *)((long)pcVar13 + 0x80);
                if (lVar18 == 0) goto Core_DebugMenu_DebugUIPanelBehaviour__TryFocusFirstChild;
                uVar9 = 0;
                do {
                  if ((long)(int)*(uint *)(lVar18 + 0x18) <= (long)uVar9)
                  goto Core_DebugMenu_DebugUIPanelBehaviour__TryFocusFirstChild;
                  if (*(uint *)(lVar18 + 0x18) <= uVar9) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  Core_DebugMenu_DebugMenu__ShowPanel
                            (0,uVar10,*(undefined4 *)(*(long *)(lVar18 + 0x10) + uVar9 * 4 + 0x20));
                  uVar9 = uVar9 + 1;
                  lVar18 = *(long *)((long)pcVar13 + 0x80);
                } while (lVar18 != 0);
              }
            }
            func_0x00f78af4();
            goto Core_DebugMenu_DebugUIPanelBehaviour__TryFocusFirstChild;
          }
        }
      }
      else {
        uVar14 = 0;
        uVar23 = 0x3d21150;
      }
      goto LAB_0163f550;
    }
    pcVar13 = pcStack_118;
    if (*(long *)(uVar10 + 0x78) == 0) {
      return uVar9;
    }
Core_DebugMenu_DebugUIPanelBehaviour__TryFocusFirstChild:
    uVar14 = 0x3d23990;
    uVar23 = 0x3eb5000;
    if ((bRam0000000003eb5734 & 1) == 0) {
      func_0x00f78a20(0x3d535e8);
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5734 = 1;
    }
    if (*(long *)((long)pcVar13 + 0x40) != 0) {
      uVar23 = 0x3d23000;
      pcVar13 = (code *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)((long)pcVar13 + 0x40),uRam0000000003d535e8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(pcVar13,0);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      if (pcVar13 != (code *)0x0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(pcVar13,1,0);
        plVar15 = *(long **)(*(long *)pcVar13 + 0x380);
        (**(code **)(*(long *)pcVar13 + 0x378))(pcVar13,0);
        if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar18 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
        plVar20 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(pcVar13,0);
        uVar23 = 0;
        if (lVar18 != 0) {
          uVar14 = /*UnityEngine.EventSystems.EventSystem$$get_baseEventDataCache*/ func_0x032b7c44(lVar18,plVar20,0);
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
          uVar23 = /*STR('Attempting to select ')*/ uRam0000000003d69450;
          if (*(char *)(lVar18 + 0x41) == '\0') {
            *(undefined1 *)(lVar18 + 0x41) = 1;
            uVar23 = *(undefined8 *)(lVar18 + 0x38);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar20,uVar23,0);
            if ((int)uVar10 == 0) {
              uVar23 = *(undefined8 *)(lVar18 + 0x38);
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
              /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(uVar23,uVar14,
                              *(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x68),
                              uRam0000000003d560a8);
              *(long **)(lVar18 + 0x38) = plVar20;
              if (cRam0000000003e85072 == '\0') {
                func_0x00f78a20(0x3d21718);
                cRam0000000003e85072 = '\x01';
              }
              if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar10 = /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(plVar20,uVar14,
                                       *(undefined8 *)
                                        (*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x60),
                                       uRam0000000003d560f0);
            }
            *(undefined1 *)(lVar18 + 0x41) = 0;
            return uVar10;
          }
          if (plVar20 == (long *)0x0) {
            uVar14 = 0;
          }
          else {
            uVar14 = (**(code **)(*plVar20 + 0x168))(plVar20,*(undefined8 *)(*plVar20 + 0x170));
          }
          uVar16 = /*STR('while already selecting an object.')*/ uRam0000000003d7c748;
          uVar14 = /*System.String$$Concat*/ func_0x029be39c(uVar23,uVar14,/*STR('while already selecting an object.')*/ uRam0000000003d7c748,0);
          if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar23 = 0;
          if ((bRam0000000003ebf392 & 1) == 0) {
            func_0x00f78a20(0x3d210d8,0);
            func_0x00f78a20(0x3d22300);
            bRam0000000003ebf392 = 1;
            uVar23 = extraout_x1;
          }
          if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
            uVar23 = extraout_x1_00;
          }
          if (cRam0000000003ca34ff == '\0') {
            func_0x00f78a20(0x3d210d8,uVar23);
            cRam0000000003ca34ff = '\x01';
          }
          if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar22 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
          if (plVar22 == (long *)0x0) {
            auVar28 = func_0x00f78af4();
            pcStack_118 = (code *)0x3ca3000;
            pppuStack_120 = (undefined1 ***)unaff_x22;
            plStack_110 = plVar22;
            uStack_108 = uVar14;
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
            plVar22 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
            if (plVar22 == (long *)0x0) {
              auVar28 = func_0x00f78af4();
              puStack_128 = &UnityEngine_Debug__LogErrorFormat;
              puStack_130 = &stack0xffffffffffffff00;
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
              plVar22 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
              if (plVar22 == (long *)0x0) {
                auVar29 = func_0x00f78af4();
                plStack_180 = (long *)0x3ca3000;
                puStack_158 = &UnityEngine_Debug__LogErrorFormat;
                uVar14 = uVar16;
                plStack_178 = plVar22;
                ppuStack_160 = &puStack_130;
                auStack_170 = auVar28;
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
                plVar22 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                if (plVar22 == (long *)0x0) {
                  auVar28 = func_0x00f78af4();
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
                  plVar22 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                  if (plVar22 == (long *)0x0) {
                    auVar28 = func_0x00f78af4();
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
                    plVar22 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                    if (plVar22 == (long *)0x0) {
                      auVar28 = func_0x00f78af4();
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
                      plVar22 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                      if (plVar22 == (long *)0x0) {
                        auVar28 = func_0x00f78af4();
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
                        plVar22 = *(long **)(*(long *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xb8) + 8);
                        if (plVar22 == (long *)0x0) {
                          func_0x00f78af4();
                          if (pcRam0000000003ebf3a0 == (code *)0x0) {
                            pcRam0000000003ebf3a0 =
                                 (code *)func_0x00f789d4("UnityEngine.Debug::get_isDebugBuild()");
                          }
                    /* WARNING: Could not recover jumptable at 0x0322c124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          uVar10 = (*pcRam0000000003ebf3a0)();
                          return uVar10;
                        }
                        lVar18 = *plVar22;
                        uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
                        if (uVar10 != 0) {
                          piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar19 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                              puVar11 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
                              goto code_r0x0322c0c4;
                            }
                            piVar19 = piVar19 + 4;
                            uVar10 = uVar10 - 1;
                          } while (uVar10 != 0);
                        }
                        puVar11 = (undefined8 *)func_0x00fac1f0(plVar22,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322c0c4:
                    /* WARNING: Could not recover jumptable at 0x0322c0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        uVar10 = (*(code *)*puVar11)(plVar22,2,auVar28._0_8_,auVar28._8_8_,uVar14,
                                                     puVar11[1]);
                        return uVar10;
                      }
                      lVar18 = *plVar22;
                      uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
                      if (uVar10 != 0) {
                        piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar19 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                            puVar11 = (undefined8 *)(lVar18 + (long)(*piVar19 + 7) * 0x10 + 0x138);
                            goto code_r0x0322bf94;
                          }
                          piVar19 = piVar19 + 4;
                          uVar10 = uVar10 - 1;
                        } while (uVar10 != 0);
                      }
                      puVar11 = (undefined8 *)func_0x00fac1f0(plVar22,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322bf94:
                    /* WARNING: Could not recover jumptable at 0x0322bfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      uVar10 = (*(code *)*puVar11)(plVar22,2,auVar28._0_8_,auVar28._8_8_,puVar11[1])
                      ;
                      return uVar10;
                    }
                    lVar18 = *plVar22;
                    uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
                    if (uVar10 != 0) {
                      piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                          puVar11 = (undefined8 *)(lVar18 + (long)(*piVar19 + 5) * 0x10 + 0x138);
                          goto code_r0x0322be68;
                        }
                        piVar19 = piVar19 + 4;
                        uVar10 = uVar10 - 1;
                      } while (uVar10 != 0);
                    }
                    puVar11 = (undefined8 *)func_0x00fac1f0(plVar22,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322be68:
                    /* WARNING: Could not recover jumptable at 0x0322be88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar10 = (*(code *)*puVar11)(plVar22,2,auVar28._0_8_,auVar28._8_8_,puVar11[1]);
                    return uVar10;
                  }
                  lVar18 = *plVar22;
                  uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
                  if (uVar10 != 0) {
                    piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                        puVar11 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                        goto code_r0x0322bd40;
                      }
                      piVar19 = piVar19 + 4;
                      uVar10 = uVar10 - 1;
                    } while (uVar10 != 0);
                  }
                  puVar11 = (undefined8 *)func_0x00fac1f0(plVar22,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,1);
code_r0x0322bd40:
                    /* WARNING: Could not recover jumptable at 0x0322bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar10 = (*(code *)*puVar11)(plVar22,auVar28._0_8_,auVar28._8_8_,puVar11[1]);
                  return uVar10;
                }
                lVar18 = *plVar22;
                uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
                if (uVar10 != 0) {
                  piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) == /*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8) {
                      puVar11 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
                      goto code_r0x0322bc0c;
                    }
                    piVar19 = piVar19 + 4;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                puVar11 = (undefined8 *)func_0x00fac1f0(plVar22,/*UnityEngine.ILogHandler_TypeInfo*/ lRam0000000003d222f8,0);
code_r0x0322bc0c:
                    /* WARNING: Could not recover jumptable at 0x0322bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar10 = (*(code *)*puVar11)(plVar22,0,auVar29._0_8_,auVar29._8_8_,uVar16,puVar11[1]
                                            );
                return uVar10;
              }
              lVar18 = *plVar22;
              uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
              if (uVar10 != 0) {
                piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                    puVar11 = (undefined8 *)(lVar18 + (long)(*piVar19 + 7) * 0x10 + 0x138);
                    goto code_r0x0322badc;
                  }
                  piVar19 = piVar19 + 4;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              puVar11 = (undefined8 *)func_0x00fac1f0(plVar22,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,7);
code_r0x0322badc:
                    /* WARNING: Could not recover jumptable at 0x0322bafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar10 = (*(code *)*puVar11)(plVar22,0,auVar28._0_8_,auVar28._8_8_,puVar11[1]);
              return uVar10;
            }
            lVar18 = *plVar22;
            uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
            if (uVar10 != 0) {
              piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                  puVar11 = (undefined8 *)(lVar18 + (long)(*piVar19 + 5) * 0x10 + 0x138);
                  goto code_r0x0322b9b0;
                }
                piVar19 = piVar19 + 4;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            puVar11 = (undefined8 *)func_0x00fac1f0(plVar22,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,5);
code_r0x0322b9b0:
                    /* WARNING: Could not recover jumptable at 0x0322b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar10 = (*(code *)*puVar11)(plVar22,0,auVar28._0_8_,auVar28._8_8_,puVar11[1]);
            return uVar10;
          }
          lVar18 = *plVar22;
          uVar10 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar10 != 0) {
            piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == /*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300) {
                puVar11 = (undefined8 *)(lVar18 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                goto code_r0x0322b888;
              }
              piVar19 = piVar19 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar22,/*UnityEngine.ILogger_TypeInfo*/ lRam0000000003d22300,4);
code_r0x0322b888:
                    /* WARNING: Could not recover jumptable at 0x0322b8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar10 = (*(code *)*puVar11)(plVar22,0,uVar14,puVar11[1]);
          return uVar10;
        }
      }
    }
    auVar3._8_8_ = pcVar13;
    auVar3._0_8_ = uVar23;
    auVar29 = func_0x00f78af4();
    pppuVar5 = (undefined1 ***)&plStack_e0;
    plVar20 = plVar22;
    pcVar25 = (code *)unaff_x22;
    pplVar17 = &plStack_d0;
    pcVar13 = Core_DebugMenu_DebugMenu__PopPanels;
  }
code_r0x01642bc4:
  auVar28 = auVar29;
  uVar23 = auVar28._8_8_;
  uVar10 = auVar28._0_8_;
  *(undefined8 *)((long)pppuVar5 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pppuVar5 + -0x38) = uVar14;
  *(code **)((long)pppuVar5 + -0x30) = pcVar25;
  *(long **)((long)pppuVar5 + -0x28) = plVar20;
  *(undefined1 (*) [16])((long)pppuVar5 + -0x20) = auVar3;
  *(long ***)((long)pppuVar5 + -0x10) = pplVar17;
  *(code **)((long)pppuVar5 + -8) = pcVar13;
  pplVar17 = (long **)((long)pppuVar5 + -0x10);
  if ((bRam0000000003eb5726 & 1) == 0) {
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d403d0);
    func_0x00f78a20(0x3d403d8);
    func_0x00f78a20(0x3d403e8);
    bRam0000000003eb5726 = 1;
  }
  *(undefined8 *)((long)pppuVar5 + -0x50) = 0;
  *(undefined8 *)((long)pppuVar5 + -0x68) = 0;
  *(undefined8 *)((long)pppuVar5 + -0x70) = 0;
  *(undefined8 *)((long)pppuVar5 + -0x58) = 0;
  *(undefined8 *)((long)pppuVar5 + -0x60) = 0;
  *(undefined8 *)((long)pppuVar5 + -0x80) = 0;
  *(undefined8 *)((long)pppuVar5 + -0x98) = 0;
  *(undefined8 *)((long)pppuVar5 + -0xa0) = 0;
  *(undefined8 *)((long)pppuVar5 + -0x88) = 0;
  *(undefined8 *)((long)pppuVar5 + -0x90) = 0;
  uVar9 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                    (uVar10,uVar23,1,(undefined1 *)((long)pppuVar5 + -0x70));
  if ((int)uVar9 == 0) {
    return uVar9;
  }
  plVar20 = *(long **)((long)pppuVar5 + -0x58);
  plVar22 = plVar20;
  if (plVar20 != (long *)0x0) {
    uVar16 = 0x3d21150;
    uVar26 = 0x3d21150;
    pcVar25 = (code *)plVar15;
    uVar14 = uVar16;
    if ((*(byte *)(*plVar20 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
       (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 + -8)
        != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
    if (plVar20[0xf] == 0) goto LAB_01642da0;
    uVar1 = 0x3d403d8;
    /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(plVar20[0xf],uRam0000000003d403d8);
    lVar18 = plVar20[0xf];
    unaff_x24 = uVar1;
    if (lVar18 != 0) {
      uVar2 = *(int *)(lVar18 + 0x18) - (int)plVar15;
      plVar15 = (long *)(ulong)uVar2;
      if ((int)uVar2 < 1) goto LAB_01642d30;
      do {
        uVar14 = uVar26;
        unaff_x24 = uVar1;
        if (lVar18 == 0) goto LAB_01642da0;
        uVar8 = /*System.Collections.Generic.Stack<int>$$Pop*/ func_0x02864874(lVar18,uRam0000000003d403d8);
        iVar6 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                          (uVar10,uVar8,1,(undefined1 *)((long)pppuVar5 + -0xa0));
        if (iVar6 != 0) {
          plVar22 = *(long **)((long)pppuVar5 + -0x88);
          unaff_x24 = 0x3d403d8;
          if (plVar22 == (long *)0x0) goto LAB_01642da0;
          pcVar25 = (code *)plVar15;
          uVar14 = uVar16;
          unaff_x24 = uVar1;
          if ((*(byte *)(*plVar22 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
             (*(long *)(*(long *)(*plVar22 + 200) + (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8
                       + -8) != /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto LAB_01642da8;
          plVar22[0xf] = 0;
        }
        lVar18 = plVar20[0xf];
        uVar2 = (int)plVar15 - 1;
        plVar15 = (long *)(ulong)uVar2;
      } while (uVar2 != 0);
      uVar14 = uVar26;
      unaff_x24 = 0x3d403d8;
      if (lVar18 != 0) goto LAB_01642d30;
    }
  }
LAB_01642da0:
  func_0x00f78af4();
  plVar22 = plVar20;
  pcVar25 = (code *)plVar15;
LAB_01642da8:
  auVar29 = func_0x00f78e5c(plVar22);
  plVar15 = (long *)((long)&MACH_HEADER.magic + 1);
  pppuVar5 = (undefined1 ***)((long)pppuVar5 + -0xa0);
  pcVar13 = Core_DebugMenu_DebugMenu__PopPanelToFirst;
  auVar3 = auVar28;
  goto code_r0x01642bc4;
LAB_01642d30:
  if (0 < *(int *)(lVar18 + 0x18)) {
    uVar14 = /*System.Collections.Generic.Stack<int>$$Peek*/ func_0x02864804(lVar18,uRam0000000003d403d0);
    Core_DebugMenu_DebugMenu__ShowPanel((char)_UNK_033f8144,uVar10,uVar14);
  }
  plVar20[0xf] = 0;
  *(undefined8 *)((long)pppuVar5 + -0x40) = unaff_d9;
  *(undefined8 *)((long)pppuVar5 + -0x38) = unaff_d8;
  *(undefined8 *)((long)pppuVar5 + -0x30) = *(undefined8 *)((long)pppuVar5 + -0x30);
  *(undefined8 *)((long)pppuVar5 + -0x28) = *(undefined8 *)((long)pppuVar5 + -0x28);
  *(undefined8 *)((long)pppuVar5 + -0x20) = *(undefined8 *)((long)pppuVar5 + -0x20);
  *(undefined8 *)((long)pppuVar5 + -0x18) = *(undefined8 *)((long)pppuVar5 + -0x18);
  *(undefined8 *)((long)pppuVar5 + -0x10) = *(undefined8 *)((long)pppuVar5 + -0x10);
  *(undefined8 *)((long)pppuVar5 + -8) = *(undefined8 *)((long)pppuVar5 + -8);
  uVar9 = uVar10;
  if ((bRam0000000003eb5728 & 1) == 0) {
    func_0x00f78a20(0x3d535c0);
    func_0x00f78a20(0x3d3acd0);
    uVar9 = func_0x00f78a20(0x3d3acd8);
    bRam0000000003eb5728 = 1;
  }
  *(undefined8 *)((long)pppuVar5 + -0x50) = 0;
  *(undefined8 *)((long)pppuVar5 + -0x68) = 0;
  *(undefined8 *)((long)pppuVar5 + -0x70) = 0;
  *(undefined8 *)((long)pppuVar5 + -0x58) = 0;
  *(undefined8 *)((long)pppuVar5 + -0x60) = 0;
  if (auVar28._8_4_ == -1) {
    return uVar9;
  }
  Core_DebugMenu_DebugMenu__RemoveFromFirstListAndAddToSecond
            (0,uVar9,*(undefined8 *)(uVar10 + 0x50),*(undefined8 *)(uVar10 + 0x58),uVar23);
  uVar9 = Core_DebugMenu_DebugMenu__TryGetElementCopy
                    (uVar10,uVar23,1,(undefined1 *)((long)pppuVar5 + -0x70));
  if ((int)uVar9 == 0) {
    return uVar9;
  }
  if (*(long *)((long)pppuVar5 + -0x60) != 0) {
    uVar9 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(*(long *)((long)pppuVar5 + -0x60),uRam0000000003d535c0);
    if (*(long *)(uVar10 + 0x78) == 0) {
      uVar7 = uVar9;
      if (uVar9 == 0) goto LAB_01642a84;
    }
    else {
      if (uVar9 == 0) goto LAB_01642a84;
      uVar7 = /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(uVar9,0,0);
    }
    lVar18 = *(long *)(uVar9 + 0x80);
    if (lVar18 == 0) {
      return uVar7;
    }
    uVar21 = 0;
    do {
      if ((long)(int)*(uint *)(lVar18 + 0x18) <= (long)uVar21) {
        return uVar7;
      }
      if (*(uint *)(lVar18 + 0x18) <= uVar21) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      uVar7 = Core_DebugMenu_DebugMenu__HidePanel
                        (0,uVar10,*(undefined4 *)(*(long *)(lVar18 + 0x10) + uVar21 * 4 + 0x20));
      uVar21 = uVar21 + 1;
      lVar18 = *(long *)(uVar9 + 0x80);
    } while (lVar18 != 0);
  }
LAB_01642a84:
  uVar10 = func_0x00f78af4();
  return uVar10;
}



// ============================================================
// RVA: 0x164383c | Core.DebugMenu.UIExtensions.ScrollToCentre
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x16440bc | Core.DebugMenu.UIExtensions.TransformBoundsTo
// ============================================================

undefined1  [16]
Core_DebugMenu_UIExtensions__TransformBoundsTo
          (undefined8 *param_1,undefined1 param_2 [16],undefined4 param_3,uint param_4,
          undefined4 param_5,ulong param_6,long param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  float extraout_s0;
  float fVar9;
  float fVar10;
  undefined8 extraout_d0;
  ulong uVar11;
  undefined8 extraout_d0_00;
  undefined8 extraout_var;
  undefined1 auVar12 [16];
  undefined8 extraout_var_00;
  undefined1 auVar13 [16];
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  long lStack_110;
  undefined8 *puStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000003eb573d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25598);
    bRam0000000003eb573d = 1;
  }
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_6,0,0);
  if (iVar1 == 0) {
    if (((*(ushort *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((param_6 == 0) ||
       (/*UnityEngine.RectTransform$$GetWorldCorners*/ func_0x032556ac(param_6,**(undefined8 **)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xb8),0), param_7 == 0)) {
code_r0x01644340:
      func_0x00f78af4();
code_r0x01644344:
      uVar2 = func_0x00f78b24();
      lVar3 = func_0x00f78ac0(uVar2,0);
      uStack_120 = 0x3d25598;
      puStack_f8 = &Core_DebugMenu_UIExtensions__NormalizeScrollDistance;
      uStack_140 = unaff_d11;
      uStack_138 = unaff_d10;
      uStack_130 = unaff_d9;
      uStack_128 = unaff_d8;
      uStack_118 = param_6;
      lStack_110 = param_7;
      puStack_108 = param_1;
      puStack_100 = &stack0xfffffffffffffff0;
      if ((bRam0000000003eb573e & 1) == 0) {
        func_0x00f78a20(0x3d53528);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d25598);
        bRam0000000003eb573e = 1;
      }
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_188 = 0;
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x38);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
        if ((uVar11 & 1) == 0) {
          lVar4 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar3,uRam0000000003d53528);
        }
        if (lVar4 != 0) {
          uStack_180 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar4,0);
          uStack_17c = param_3;
          uStack_178 = param_4;
          uStack_174 = param_5;
          uVar6 = /*UnityEngine.Rect$$get_center*/ func_0x032534e8(&uStack_180,0);
          uVar5 = param_3;
          uStack_180 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar4,0);
          uStack_17c = uVar5;
          uStack_178 = param_4;
          uStack_174 = param_5;
          uVar14 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_180,0);
          uVar16 = 0;
          /*UnityEngine.Bounds$$.ctor*/ func_0x0321b354(uVar6,param_3,0,uVar14,uVar5,0,&uStack_158,0);
          uVar2 = *(undefined8 *)(lVar3 + 0x18);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
          if ((uVar11 & 1) == 0) {
            uStack_1a8 = 0;
            uStack_1a0 = 0;
            uStack_198 = 0;
          }
          else {
            if (((*(ushort *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            Core_DebugMenu_UIExtensions__TransformBoundsTo(&uStack_1a8,uVar2,lVar4);
          }
          uStack_168 = uStack_1a0;
          uStack_170 = uStack_1a8;
          uStack_160 = uStack_198;
          uVar5 = /*UnityEngine.Bounds$$get_size*/ func_0x0321b508(&uStack_170,0);
          uStack_190 = CONCAT44(param_3,uVar5);
          uStack_188 = uVar16;
          fVar9 = (float)/*UnityEngine.Vector3$$get_Item*/ func_0x0327b458(&uStack_190,extraout_x1,0);
          uVar5 = /*UnityEngine.Bounds$$get_size*/ func_0x0321b508(&uStack_158,0);
          uStack_190 = CONCAT44(param_3,uVar5);
          uStack_188 = uVar16;
          fVar10 = (float)/*UnityEngine.Vector3$$get_Item*/ func_0x0327b458(&uStack_190,extraout_x1,0);
          return ZEXT416((uint)(extraout_s0 / (fVar9 - fVar10)));
        }
      }
      func_0x00f78af4();
      if ((bRam0000000003eb5741 & 1) == 0) {
        func_0x00f78a20(0x3d25598);
        func_0x00f78a20(0x3d1f5e0);
        bRam0000000003eb5741 = 1;
      }
      uVar2 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,4);
      **(undefined8 **)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xb8) = uVar2;
      auVar13._8_8_ = extraout_var_00;
      auVar13._0_8_ = extraout_d0_00;
      return auVar13;
    }
    /*UnityEngine.Transform$$get_worldToLocalMatrix*/ func_0x03275f38(&uStack_e0,param_7,0);
    param_7 = 0;
    param_6 = 0;
    uVar6 = 0x7f7fffff;
    unaff_d11 = 0x7f7fffff;
    unaff_d9 = 0xff7fffff;
    unaff_d10 = 0xff7fffff;
    uStack_e4 = 0xff7fffff;
    uVar5 = uVar6;
    do {
      if (((*(ushort *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar3 = **(long **)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xb8);
      if (lVar3 == 0) goto code_r0x01644340;
      if (*(uint *)(lVar3 + 0x18) <= param_6) goto code_r0x01644344;
      lVar3 = lVar3 + param_7;
      uVar14 = *(undefined4 *)(lVar3 + 0x24);
      uVar15 = *(uint *)(lVar3 + 0x28);
      uVar11 = /*UnityEngine.Matrix4x4$$MultiplyPoint3x4*/ func_0x0323e604(*(undefined4 *)(lVar3 + 0x20),uVar14,&uStack_e0,0);
      unaff_d8 = (ulong)uVar15;
      param_4 = uVar15;
      uVar5 = /*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar11,uVar5,0);
      uVar6 = /*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar14,uVar6,0);
      uVar7 = /*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar15,(int)unaff_d11,0);
      unaff_d11 = (ulong)uVar7;
      uStack_e4 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(uVar11 & 0xffffffff,uStack_e4,0);
      uVar8 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(uVar14,(int)unaff_d10,0);
      unaff_d10 = (ulong)uVar8;
      param_3 = (undefined4)unaff_d9;
      uVar15 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(uVar15,0);
      unaff_d9 = (ulong)uVar15;
      param_6 = param_6 + 1;
      param_7 = param_7 + 0xc;
    } while (param_6 != 4);
    uVar14 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    /*UnityEngine.Bounds$$.ctor*/ func_0x0321b354(uVar5,uVar6,uVar7,uVar14,param_3,param_4,&uStack_98,0);
    /*UnityEngine.Bounds$$Encapsulate*/ func_0x0321b704(uStack_e4,uVar8,uVar15,&uStack_98,0);
    param_1[1] = uStack_90;
    *param_1 = uStack_98;
    param_1[2] = uStack_88;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uStack_98 = extraout_d0;
    uStack_90 = extraout_var;
  }
  auVar12._8_8_ = uStack_90;
  auVar12._0_8_ = uStack_98;
  return auVar12;
}



// ============================================================
// RVA: 0x1644350 | Core.DebugMenu.UIExtensions.NormalizeScrollDistance
// ============================================================

undefined1  [16]
Core_DebugMenu_UIExtensions__NormalizeScrollDistance
          (float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5,
          undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined8 extraout_d0;
  undefined8 extraout_var;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb573e & 1) == 0) {
    func_0x00f78a20(0x3d53528);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25598);
    bRam0000000003eb573e = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  if (param_5 != 0) {
    lVar3 = *(long *)(param_5 + 0x38);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0,0);
    if ((uVar1 & 1) == 0) {
      lVar3 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_5,uRam0000000003d53528);
    }
    if (lVar3 != 0) {
      uStack_90 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar3,0);
      uStack_8c = param_2;
      uStack_88 = param_3;
      uStack_84 = param_4;
      uVar4 = /*UnityEngine.Rect$$get_center*/ func_0x032534e8(&uStack_90,0);
      uVar6 = param_2;
      uStack_90 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar3,0);
      uStack_8c = uVar6;
      uStack_88 = param_3;
      uStack_84 = param_4;
      uVar5 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_90,0);
      uVar10 = 0;
      /*UnityEngine.Bounds$$.ctor*/ func_0x0321b354(uVar4,param_2,0,uVar5,uVar6,0,&uStack_68,0);
      uVar2 = *(undefined8 *)(param_5 + 0x18);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
      if ((uVar1 & 1) == 0) {
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
      }
      else {
        if (((*(ushort *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        Core_DebugMenu_UIExtensions__TransformBoundsTo(&uStack_b8,uVar2,lVar3);
      }
      uStack_78 = uStack_b0;
      uStack_80 = uStack_b8;
      uStack_70 = uStack_a8;
      uVar6 = /*UnityEngine.Bounds$$get_size*/ func_0x0321b508(&uStack_80,0);
      uStack_a0 = CONCAT44(param_2,uVar6);
      uStack_98 = uVar10;
      fVar7 = (float)/*UnityEngine.Vector3$$get_Item*/ func_0x0327b458(&uStack_a0,param_6,0);
      uVar6 = /*UnityEngine.Bounds$$get_size*/ func_0x0321b508(&uStack_68,0);
      uStack_a0 = CONCAT44(param_2,uVar6);
      uStack_98 = uVar10;
      fVar8 = (float)/*UnityEngine.Vector3$$get_Item*/ func_0x0327b458(&uStack_a0,param_6,0);
      return ZEXT416((uint)(param_1 / (fVar7 - fVar8)));
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb5741 & 1) == 0) {
    func_0x00f78a20(0x3d25598);
    func_0x00f78a20(0x3d1f5e0);
    bRam0000000003eb5741 = 1;
  }
  uVar2 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,4);
  **(undefined8 **)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xb8) = uVar2;
  auVar9._8_8_ = extraout_var;
  auVar9._0_8_ = extraout_d0;
  return auVar9;
}



// ============================================================
// RVA: 0x1644580 | Core.DebugMenu.UIExtensions..cctor
// ============================================================

void Core_DebugMenu_UIExtensions___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5741 & 1) == 0) {
    func_0x00f78a20(0x3d25598);
    func_0x00f78a20(0x3d1f5e0);
    bRam0000000003eb5741 = 1;
  }
  uVar1 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,4);
  **(undefined8 **)(/*Core.DebugMenu.UIExtensions_TypeInfo*/ lRam0000000003d25598 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1a39154 | Core.DebugMenu.UIExtensions.TryFindComponentInParentChain<ScrollRect>
// ============================================================

ulong Core_DebugMenu_UIExtensions__TryFindComponentInParentChain_ScrollRect_
                (long param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_48;
  
  uVar3 = 0x3eb6000;
  if ((bRam0000000003eb6a7c & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb6a7c = 1;
  }
  uStack_48 = 0;
  if (param_1 != 0) {
    for (lVar2 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(param_1,0); lVar2 != 0; lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar2,0)) {
      lVar2 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar2,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar2,0,0);
      if ((uVar3 & 1) == 0) goto LAB_01a39228;
      if (lVar2 == 0) break;
      iVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))(lVar2,&uStack_48);
      if (iVar1 != 0) {
        *param_2 = uStack_48;
        return uVar3;
      }
    }
  }
  func_0x00f78af4();
LAB_01a39228:
  *param_2 = 0;
  return uVar3;
}



// ============================================================
// RVA: 0x1a39154 | Core.DebugMenu.UIExtensions.TryFindComponentInParentChain<object>
// ============================================================

ulong Core_DebugMenu_UIExtensions__TryFindComponentInParentChain_ScrollRect_
                (long param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_48;
  
  uVar3 = 0x3eb6000;
  if ((bRam0000000003eb6a7c & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb6a7c = 1;
  }
  uStack_48 = 0;
  if (param_1 != 0) {
    for (lVar2 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(param_1,0); lVar2 != 0; lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar2,0)) {
      lVar2 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar2,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar2,0,0);
      if ((uVar3 & 1) == 0) goto LAB_01a39228;
      if (lVar2 == 0) break;
      iVar1 = (**(code **)**(undefined8 **)(param_3 + 0x30))(lVar2,&uStack_48);
      if (iVar1 != 0) {
        *param_2 = uStack_48;
        return uVar3;
      }
    }
  }
  func_0x00f78af4();
LAB_01a39228:
  *param_2 = 0;
  return uVar3;
}



