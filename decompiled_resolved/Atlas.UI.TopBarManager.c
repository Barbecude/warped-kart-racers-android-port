// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.TopBarManager

// ============================================================
// RVA: 0x150ac50 | Atlas.UI.TopBarManager.get_HasScreen
// ============================================================

bool Atlas_UI_TopBarManager__get_HasScreen(long param_1)

{
  return *(long *)(param_1 + 0x28) != 0;
}



// ============================================================
// RVA: 0x150ac60 | Atlas.UI.TopBarManager.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x0150adbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150af58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150adc0) */
/* WARNING: Removing unreachable block (ram,0x0150adc8) */
/* WARNING: Removing unreachable block (ram,0x0150adf4) */
/* WARNING: Removing unreachable block (ram,0x02f86ccc) */
/* WARNING: Removing unreachable block (ram,0x02f86cf0) */
/* WARNING: Removing unreachable block (ram,0x02f86d04) */
/* WARNING: Removing unreachable block (ram,0x02f86d10) */
/* WARNING: Removing unreachable block (ram,0x02f86d28) */
/* WARNING: Removing unreachable block (ram,0x02f86d64) */
/* WARNING: Removing unreachable block (ram,0x02f86d38) */
/* WARNING: Removing unreachable block (ram,0x02f86d54) */
/* WARNING: Removing unreachable block (ram,0x0150bcb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_TopBarManager__Init(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined8 ****ppppuVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 uVar17;
  int extraout_w1;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  ulong *puVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar29;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar30;
  undefined1 *puVar31;
  undefined *puVar32;
  code *pcVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 ***pppuStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  
  ppppuVar2 = (undefined8 ****)&stack0xffffffffffffffc0;
  ppppuVar30 = (undefined8 ****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d4b & 1) == 0) {
    func_0x00f78a20(0x3d2a558);
    func_0x00f78a20(0x3d1b6b8);
    func_0x00f78a20(0x3d5e4c0);
    func_0x00f78a20(0x3d5e4c8);
    func_0x00f78a20(0x3d5e4d0);
    func_0x00f78a20(0x3d5e4d8);
    bRam0000000003eb4d4b = 1;
  }
  *(long *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(ulong *)(param_1 + 0x20) = param_4;
  lVar22 = 0;
  uVar11 = 0x3eb4000;
  if (param_2 != 0) {
    uVar27 = 0x3d1b6b8;
    unaff_x24 = 0x3d5e000;
    uVar20 = 0x3d2a558;
    uVar25 = 0x3d2a558;
    lVar22 = *(long *)(param_2 + 0x10);
    param_4 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
    /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(param_4,param_1,lRam0000000003d5e4c8,uRam0000000003d2a558);
    param_3 = uVar20;
    uVar11 = 0x3d1b6b8;
    if (lVar22 != 0) {
      /*Core.UI2.UIManager$$add_StartBeforeEnterScreenEvent*/ func_0x02f86a4c(lVar22,param_4,0);
      param_3 = uVar25;
      if (*(long *)(param_1 + 0x10) != 0) {
        unaff_x24 = 0x3d5e000;
        lVar22 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
        param_4 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
        /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(param_4,param_1,lRam0000000003d5e4d0,uRam0000000003d2a558);
        uVar11 = uVar27;
        if (lVar22 != 0) {
          /*Core.UI2.UIManager$$add_StartEnterScreenEvent*/ func_0x02f86b8c(lVar22,param_4,0);
          if (*(long *)(param_1 + 0x10) != 0) {
            unaff_x24 = 0x3d5e000;
            puVar23 = *(ulong **)(*(long *)(param_1 + 0x10) + 0x10);
            param_4 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
            auVar36._8_8_ = param_4;
            auVar36._0_8_ = puVar23;
            /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(param_4,param_1,uRam0000000003d5e4c0,uRam0000000003d2a558);
            lVar22 = 0;
            if (puVar23 != (ulong *)0x0) {
              puVar32 = (undefined *)0x150adc0;
              goto code_r0x02f86e0c;
            }
          }
        }
      }
    }
  }
  uVar15 = func_0x00f78af4();
  puStack_48 = &Atlas_UI_TopBarManager__DeInit;
  uVar16 = uVar15;
  uStack_80 = unaff_x24;
  uStack_78 = uVar11;
  uStack_70 = param_3;
  uStack_68 = param_4;
  lStack_60 = lVar22;
  lStack_58 = param_1;
  pppuStack_50 = ppppuVar30;
  if ((bRam0000000003eb4d4c & 1) == 0) {
    func_0x00f78a20(0x3d2a558);
    func_0x00f78a20(0x3d1b6b8);
    func_0x00f78a20(0x3d5e4c8);
    func_0x00f78a20(0x3d5e4d0);
    uVar16 = func_0x00f78a20(0x3d5e4d8);
    bRam0000000003eb4d4c = 1;
  }
  if (*(long *)(uVar15 + 0x10) == 0) {
    *(undefined8 *)(uVar15 + 0x18) = 0;
    return uVar16;
  }
  puVar28 = (undefined8 *)0x3d1b6b8;
  lVar22 = *(long *)(*(long *)(uVar15 + 0x10) + 0x10);
  param_1 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
  lVar18 = lRam0000000003d5e4c8;
  /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(param_1,uVar15,lRam0000000003d5e4c8,uRam0000000003d2a558);
  uStack_98 = uVar15;
  pppuStack_90 = &pppuStack_50;
  if (lVar22 != 0) {
    lVar18 = 0;
    /*Core.UI2.UIManager$$remove_StartBeforeEnterScreenEvent*/ func_0x02f86aec(lVar22,param_1);
    if (*(long *)(uVar15 + 0x10) != 0) {
      lVar22 = *(long *)(*(long *)(uVar15 + 0x10) + 0x10);
      param_1 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
      lVar18 = lRam0000000003d5e4d0;
      /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(param_1,uVar15,lRam0000000003d5e4d0,uRam0000000003d2a558);
      if (lVar22 != 0) {
        lVar18 = 0;
        /*Core.UI2.UIManager$$remove_StartEnterScreenEvent*/ func_0x02f86c2c(lVar22,param_1);
        if (*(long *)(uVar15 + 0x10) != 0) {
          lVar24 = *(long *)(*(long *)(uVar15 + 0x10) + 0x10);
          param_1 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8);
          lVar18 = lRam0000000003d5e4d8;
          /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(param_1,uVar15,lRam0000000003d5e4d8,uRam0000000003d2a558);
          lVar22 = 0;
          if (lVar24 != 0) {
            ppppuVar2 = &pppuStack_b0;
            pppuStack_b0 = (undefined8 ***)0x3d2a558;
            puStack_88 = &UNK_0150af5c;
            ppppuVar30 = &pppuStack_90;
            pcStack_a8 = (code *)param_1;
            lStack_a0 = lVar24;
            if ((bRam0000000003ebc640 & 1) == 0) {
              func_0x00f78a20(0x3d1b6b8,param_1,0);
              bRam0000000003ebc640 = 1;
            }
            uVar20 = 0x3d1b6b8;
            puVar23 = (ulong *)(lVar24 + 0x20);
            param_4 = *puVar23;
            while ((plVar14 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(param_4,param_1,0), plVar14 == (long *)0x0 ||
                   (*plVar14 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
              uVar15 = func_0x00ff0f44(puVar23,plVar14,param_4);
              bVar3 = param_4 == uVar15;
              param_4 = uVar15;
              if (bVar3) {
                return uVar15;
              }
            }
            puVar32 = &Core_UI2_UIManager__add_FinishEnterScreenEvent;
            auVar36 = func_0x00f78e5c(plVar14);
code_r0x02f86e0c:
            *(undefined8 *)((long)ppppuVar2 + -0x30) = uVar20;
            *(ulong *)((long)ppppuVar2 + -0x28) = param_4;
            *(ulong **)((long)ppppuVar2 + -0x20) = puVar23;
            *(long *)((long)ppppuVar2 + -0x18) = param_1;
            *(undefined8 *****)((long)ppppuVar2 + -0x10) = ppppuVar30;
            *(undefined **)((long)ppppuVar2 + -8) = puVar32;
            if ((bRam0000000003ebc641 & 1) == 0) {
              func_0x00f78a20(0x3d1b6b8);
              bRam0000000003ebc641 = 1;
            }
            puVar23 = (ulong *)(auVar36._0_8_ + 0x28);
            uVar15 = *puVar23;
            while ((plVar14 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar15,auVar36._8_8_,0),
                   plVar14 == (long *)0x0 || (*plVar14 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
              uVar16 = func_0x00ff0f44(puVar23,plVar14,uVar15);
              bVar3 = uVar15 == uVar16;
              uVar15 = uVar16;
              if (bVar3) {
                return uVar16;
              }
            }
            auVar37 = func_0x00f78e5c(plVar14);
            *(undefined8 *)((long)ppppuVar2 + -0x60) = 0x3d1b6b8;
            *(ulong *)((long)ppppuVar2 + -0x58) = uVar15;
            *(ulong **)((long)ppppuVar2 + -0x50) = puVar23;
            *(long *)((long)ppppuVar2 + -0x48) = auVar36._8_8_;
            *(undefined1 **)((long)ppppuVar2 + -0x40) = (undefined1 *)((long)ppppuVar2 + -0x10);
            *(undefined **)((long)ppppuVar2 + -0x38) =
                 &Core_UI2_UIManager__remove_FinishEnterScreenEvent;
            if ((bRam0000000003ebc642 & 1) == 0) {
              func_0x00f78a20(0x3d1b6b8);
              bRam0000000003ebc642 = 1;
            }
            puVar23 = (ulong *)(auVar37._0_8_ + 0x28);
            uVar15 = *puVar23;
            while ((plVar14 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar15,auVar37._8_8_,0),
                   plVar14 == (long *)0x0 || (*plVar14 == /*System.Action<UIScreen, int>_TypeInfo*/ lRam0000000003d1b6b8))) {
              uVar16 = func_0x00ff0f44(puVar23,plVar14,uVar15);
              bVar3 = uVar15 == uVar16;
              uVar15 = uVar16;
              if (bVar3) {
                return uVar16;
              }
            }
            auVar36 = func_0x00f78e5c(plVar14);
            *(undefined8 *)((long)ppppuVar2 + -0x90) = 0x3d1b6b8;
            *(ulong *)((long)ppppuVar2 + -0x88) = uVar15;
            *(ulong **)((long)ppppuVar2 + -0x80) = puVar23;
            *(long *)((long)ppppuVar2 + -0x78) = auVar37._8_8_;
            *(undefined1 **)((long)ppppuVar2 + -0x70) = (undefined1 *)((long)ppppuVar2 + -0x40);
            *(undefined **)((long)ppppuVar2 + -0x68) =
                 &Core_UI2_UIManager__add_InputEnabledScreenEvent;
            if ((bRam0000000003ebc643 & 1) == 0) {
              func_0x00f78a20(0x3d1b6e8);
              bRam0000000003ebc643 = 1;
            }
            puVar23 = (ulong *)(auVar36._0_8_ + 0x30);
            uVar15 = *puVar23;
            while ((plVar14 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar15,auVar36._8_8_,0),
                   plVar14 == (long *)0x0 || (*plVar14 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
              uVar16 = func_0x00ff0f44(puVar23,plVar14,uVar15);
              bVar3 = uVar15 == uVar16;
              uVar15 = uVar16;
              if (bVar3) {
                return uVar16;
              }
            }
            auVar37 = func_0x00f78e5c(plVar14);
            *(undefined8 *)((long)ppppuVar2 + -0xc0) = 0x3d1b6e8;
            *(ulong *)((long)ppppuVar2 + -0xb8) = uVar15;
            *(ulong **)((long)ppppuVar2 + -0xb0) = puVar23;
            *(long *)((long)ppppuVar2 + -0xa8) = auVar36._8_8_;
            *(undefined1 **)((long)ppppuVar2 + -0xa0) = (undefined1 *)((long)ppppuVar2 + -0x70);
            *(undefined **)((long)ppppuVar2 + -0x98) =
                 &Core_UI2_UIManager__remove_InputEnabledScreenEvent;
            if ((bRam0000000003ebc644 & 1) == 0) {
              func_0x00f78a20(0x3d1b6e8);
              bRam0000000003ebc644 = 1;
            }
            puVar23 = (ulong *)(auVar37._0_8_ + 0x30);
            uVar15 = *puVar23;
            while ((plVar14 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar15,auVar37._8_8_,0),
                   plVar14 == (long *)0x0 || (*plVar14 == /*System.Action<UIScreen, int, bool>_TypeInfo*/ lRam0000000003d1b6e8))) {
              uVar16 = func_0x00ff0f44(puVar23,plVar14,uVar15);
              bVar3 = uVar15 == uVar16;
              uVar15 = uVar16;
              if (bVar3) {
                return uVar16;
              }
            }
            lVar22 = func_0x00f78e5c(plVar14);
            *(undefined1 **)((long)ppppuVar2 + -0xd0) = (undefined1 *)((long)ppppuVar2 + -0xa0);
            *(undefined **)((long)ppppuVar2 + -200) = &Core_UI2_UIManager__get_Canvas;
            if (*(long *)(lVar22 + 0x38) != 0) {
              return *(ulong *)(*(long *)(lVar22 + 0x38) + 0x18);
            }
            lVar22 = func_0x00f78af4();
            *(undefined1 **)((long)ppppuVar2 + -0xe0) = (undefined1 *)((long)ppppuVar2 + -0xd0);
            *(undefined **)((long)ppppuVar2 + -0xd8) = &Core_UI2_UIManager__get_CanvasScaler;
            if (*(long *)(lVar22 + 0x38) != 0) {
              return *(ulong *)(*(long *)(lVar22 + 0x38) + 0x20);
            }
            lVar22 = func_0x00f78af4();
            return (ulong)*(byte *)(lVar22 + 0x60);
          }
        }
      }
    }
  }
  uVar16 = func_0x00f78af4();
  puStack_88 = &Atlas_UI_TopBarManager__Update;
  lVar24 = *(long *)(uVar16 + 0x38);
  lStack_a0 = lVar22;
  if (lVar24 == 0) {
code_r0x0150afe0:
    auVar36 = func_0x00f78af4();
    lVar24 = auVar36._8_8_;
    uVar20 = auVar36._0_8_;
    pcStack_a8 = Atlas_UI_Screens_TopBarScreen__HideButtonsNotRequired;
    uVar11 = uVar20;
    pppuStack_b0 = &pppuStack_90;
    if ((bRam0000000003eb4d5e & 1) == 0) {
      uVar11 = func_0x00f78a20(0x3d3dca0);
      bRam0000000003eb4d5e = 1;
    }
    uVar16 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar11,0,lVar24);
    if (((uVar16 & 1) == 0) &&
       (uVar16 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar16,0,lVar18),
       (uVar16 & 1) == 0)) {
      uVar16 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar20,0,0,1);
    }
    uVar16 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar16,1,lVar24);
    if (((uVar16 & 1) == 0) &&
       (uVar16 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar16,1,lVar18),
       (uVar16 & 1) == 0)) {
      uVar16 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar20,1,0,1);
    }
    uVar16 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar16,2,lVar24);
    if (((uVar16 & 1) == 0) &&
       (uVar16 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar16,2,lVar18),
       (uVar16 & 1) == 0)) {
      uVar16 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar20,2,0,1);
    }
    uVar16 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar16,3,lVar24);
    if (((uVar16 & 1) == 0) &&
       (uVar16 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar16,3,lVar18),
       (uVar16 & 1) == 0)) {
      uVar16 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar20,3,0,1);
    }
    uVar16 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar16,4,lVar24);
    if (((uVar16 & 1) == 0) &&
       (uVar16 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar16,4,lVar18),
       (uVar16 & 1) == 0)) {
      uVar16 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar20,4,0,1);
    }
    uVar16 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar16,5,lVar24);
    if (((uVar16 & 1) == 0) &&
       (uVar16 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar16,5,lVar18),
       (uVar16 & 1) == 0)) {
      uVar16 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar20,5,0,1);
    }
    lVar19 = lVar24;
    uVar16 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar16,8);
    if (((uVar16 & 1) == 0) &&
       (lVar19 = lVar18, uVar16 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar16,8),
       (uVar16 & 1) == 0)) {
      lVar19 = 0;
      Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar20,8,0,1);
    }
    uVar11 = unaff_x26;
    if (lVar24 != 0) {
      uVar11 = 0x3d3dca0;
      uVar4 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar24,0,lRam0000000003d3dca0);
      lVar19 = lRam0000000003d3dca0;
      uVar5 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar24,1);
      if (lVar18 != 0) {
        uVar16 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar18,0,lRam0000000003d3dca0);
        uVar10 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar18,1,lRam0000000003d3dca0);
        uVar6 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar24,6,lRam0000000003d3dca0);
        uVar7 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar18,6,lRam0000000003d3dca0);
        uVar8 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar24,8,lRam0000000003d3dca0);
        uVar12 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar18,8,lRam0000000003d3dca0);
        uVar9 = (uint)uVar12;
        if (((((uVar4 | uVar5) & 1) == 0) && ((uVar16 & 1) == 0)) && ((uVar10 & 1) == 0)) {
          uVar12 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar20,6,0,1);
        }
        if (((uVar6 | uVar7 | uVar8 | uVar9) & 1) != 0) {
          return uVar12;
        }
        auVar37._8_8_ = 1;
        auVar37._0_8_ = uVar20;
        lVar18 = 0x3d2a558;
        lVar24 = 0x3d5e000;
        lVar19 = 0x3d1b6b8;
        plVar14 = &lStack_a0;
        ppppuVar30 = (undefined8 ****)pppuStack_b0;
        pcVar33 = pcStack_a8;
        do {
          lVar13 = auVar37._0_8_;
          *(long *)((long)plVar14 + -0x20) = lVar22;
          *(ulong *)((long)plVar14 + -0x18) = uVar15;
          *(undefined8 *****)((long)plVar14 + -0x10) = ppppuVar30;
          *(code **)((long)plVar14 + -8) = pcVar33;
          lVar22 = *(long *)(lVar13 + 0x70);
          if (lVar22 == 0) {
            func_0x00f78af4();
          }
          else {
            uVar15 = 7;
            if (7 < *(uint *)(lVar22 + 0x18)) goto code_r0x0150bc78;
          }
          uVar11 = func_0x00f78b24();
          auVar36 = func_0x00f78ac0(uVar11,0);
          puVar31 = (undefined1 *)((long)plVar14 + -0x30);
          *(undefined1 **)((long)plVar14 + -0x30) = (undefined1 *)((long)plVar14 + -0x10);
          *(undefined **)((long)plVar14 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
          lVar22 = *(long *)(auVar36._0_8_ + 0x28);
          auVar37._8_8_ = auVar36._8_8_;
          auVar37._0_8_ = lVar22;
          if (lVar22 == 0) {
            pcVar33 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
            auVar37 = func_0x00f78af4();
            plVar14 = (long *)((long)plVar14 + -0x30);
          }
          else {
            puVar31 = *(undefined1 **)((long)plVar14 + -0x30);
            pcVar33 = *(code **)((long)plVar14 + -0x28);
            plVar14 = (long *)((long)plVar14 + -0x20);
          }
          *(long *)((long)plVar14 + -0x20) = lVar13;
          *(ulong *)((long)plVar14 + -0x18) = uVar15;
          *(undefined1 **)((long)plVar14 + -0x10) = puVar31;
          *(code **)((long)plVar14 + -8) = pcVar33;
          Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar37._0_8_,4,0,auVar37._8_8_);
          Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar37._0_8_,5,0,auVar37._8_8_);
          ppppuVar30 = *(undefined8 *****)((long)plVar14 + -0x10);
          pcVar33 = *(code **)((long)plVar14 + -8);
          lVar22 = *(long *)((long)plVar14 + -0x20);
          uVar15 = *(ulong *)((long)plVar14 + -0x18);
        } while( true );
      }
    }
    auVar36 = func_0x00f78af4();
    lVar22 = auVar36._0_8_;
    puVar26 = (undefined8 *)0x3eb4000;
    uStack_150 = uVar11;
    if ((bRam0000000003eb4d5d & 1) == 0) {
      func_0x00f78a20(0x3d337e0);
      func_0x00f78a20(0x3d337e8);
      func_0x00f78a20(0x3d337f0);
      func_0x00f78a20(0x3d3dca0);
      func_0x00f78a20(0x3d3dca8);
      bRam0000000003eb4d5d = 1;
    }
    if (auVar36._8_8_ == 0) goto LAB_0150b47c;
    puVar26 = (undefined8 *)0x3d3dca0;
    puVar28 = (undefined8 *)0x3d337e0;
    /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$GetEnumerator*/ func_0x023df1f8(&uStack_188,auVar36._8_8_,uRam0000000003d3dca8);
    uStack_168 = uStack_180;
    uStack_170 = uStack_188;
    uStack_160 = uStack_178;
    while (uVar15 = /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$MoveNext*/ func_0x01f694e8(&uStack_170,uRam0000000003d337e8), (uVar15 & 1) != 0) {
      if (lVar19 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar33 = (code *)SoftwareBreakpoint(1,0x150b47c);
        (*pcVar33)();
      }
      uVar4 = (uint)uStack_160;
      lVar18 = (long)(int)(uint)uStack_160;
      uVar15 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar19,lVar18,lRam0000000003d3dca0);
      if ((uVar15 & 1) == 0) {
        if (uVar4 < 9) {
          uVar17 = *(undefined4 *)(&UNK_033f869c + lVar18 * 4);
        }
        else {
          uVar17 = 0xffffffff;
        }
        Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar22,uVar17,1,1);
      }
    }
    /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_170,uRam0000000003d337e0);
    do {
      if (lVar19 != 0) {
        uVar15 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar19,0,*puVar26);
        if ((uVar15 & 1) == 0) {
          uVar11 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar19,1,*puVar26);
        }
        else {
          uVar11 = 1;
        }
        uVar15 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar19,6,*puVar26);
        if ((uVar15 & 1) == 0) {
          uVar20 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar19,8,*puVar26);
        }
        else {
          uVar20 = 1;
        }
        if (lVar22 != 0) {
          uVar15 = Atlas_UI_Screens_TopBarScreen__ShowBackingPanelsIfRequired(lVar22,uVar11,uVar20);
          return uVar15;
        }
      }
LAB_0150b47c:
      func_0x00f78af4();
      if (extraout_w1 != 1) goto code_r0x0150b4bc;
      plVar14 = (long *)___cxa_begin_catch();
      lVar18 = *plVar14;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_170,*puVar28);
    } while (lVar18 == 0);
    func_0x00f78ac0(lVar18,0);
code_r0x0150b4bc:
    auVar36 = __Unwind_Resume();
    *(long *)(auVar36._0_8_ + 0x28) = auVar36._8_8_;
    return auVar36._0_8_;
  }
  uVar15 = uVar16;
  if (*(int *)(lVar24 + 0x10) != -1) {
    uVar15 = 0;
    if (*(long *)(uVar16 + 0x28) != 0) {
      lVar18 = *(long *)(lVar24 + 0x20);
      Atlas_UI_Screens_TopBarScreen__HideButtonsNotRequired
                (*(long *)(uVar16 + 0x28),*(undefined8 *)(lVar24 + 0x18));
      lVar24 = *(long *)(uVar16 + 0x38);
      uVar15 = uVar16;
      if ((lVar24 != 0) && (*(long *)(uVar16 + 0x28) != 0)) {
        lVar18 = *(long *)(lVar24 + 0x20);
        uVar10 = Atlas_UI_Screens_TopBarScreen__ShowButtons
                           (*(long *)(uVar16 + 0x28),*(undefined8 *)(lVar24 + 0x18));
        if (*(long *)(uVar16 + 0x38) != 0) {
          *(undefined4 *)(*(long *)(uVar16 + 0x38) + 0x10) = 0xffffffff;
          return uVar10;
        }
      }
      goto code_r0x0150afe0;
    }
  }
  return uVar15;
code_r0x0150bc78:
  *(undefined4 *)(lVar22 + 0x2fc) = 0;
  if ((auVar37._8_8_ & 1) == 0) {
    Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar13,7);
  }
  *(undefined8 *)((long)plVar14 + -0x60) = unaff_x28;
  *(undefined8 *)((long)plVar14 + -0x58) = unaff_x27;
  *(undefined8 *)((long)plVar14 + -0x50) = unaff_x26;
  *(undefined8 *)((long)plVar14 + -0x48) = unaff_x25;
  *(undefined8 *)((long)plVar14 + -0x40) = 0x3d5e000;
  *(undefined8 *)((long)plVar14 + -0x38) = 0x3d1b6b8;
  *(undefined8 *)((long)plVar14 + -0x30) = 0x3d2a558;
  *(long *)((long)plVar14 + -0x28) = param_1;
  *(undefined8 *)((long)plVar14 + -0x20) = *(undefined8 *)((long)plVar14 + -0x20);
  *(undefined8 *)((long)plVar14 + -0x18) = *(undefined8 *)((long)plVar14 + -0x18);
  *(undefined8 *)((long)plVar14 + -0x10) = *(undefined8 *)((long)plVar14 + -0x10);
  *(undefined8 *)((long)plVar14 + -8) = *(undefined8 *)((long)plVar14 + -8);
  lVar22 = 0x3eb4000;
  if ((bRam0000000003eb4d5b & 1) == 0) {
    func_0x00f78a20(0x3d2a408);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d5b = 1;
  }
  lVar21 = *(long *)(lVar13 + 0x70);
  if (lVar21 == 0) goto LAB_0150c7d4;
  if (*(uint *)(lVar21 + 0x18) < 8) goto LAB_0150c7d8;
  unaff_x25 = 7;
  unaff_x26 = *(undefined8 *)(lVar21 + 0x2c0);
  lVar18 = *(long *)(lVar21 + 0x2c8);
  uVar11 = *(undefined8 *)(lVar21 + 0x2d0);
  uVar25 = *(undefined8 *)(lVar21 + 0x2e8);
  uVar20 = *(undefined8 *)(lVar21 + 0x2e0);
  *(undefined8 *)((long)plVar14 + -0xe8) = *(undefined8 *)(lVar21 + 0x2d8);
  *(undefined8 *)((long)plVar14 + -0xf0) = uVar11;
  *(undefined8 *)((long)plVar14 + -0xd8) = uVar25;
  *(undefined8 *)((long)plVar14 + -0xe0) = uVar20;
  lVar22 = *(long *)(lVar21 + 0x2f0);
  iVar29 = *(int *)(lVar21 + 0x2f8);
  iVar1 = *(int *)(lVar21 + 0x2fc);
  lVar19 = *(long *)(lVar21 + 0x300);
  lVar24 = *(long *)(lVar21 + 0x308);
  uVar11 = *(undefined8 *)(lVar21 + 0x310);
  *(undefined8 *)((long)plVar14 + -0xf8) = *(undefined8 *)(lVar21 + 0x318);
  *(undefined8 *)((long)plVar14 + -0x100) = uVar11;
  if (iVar1 == iVar29) {
LAB_0150c768:
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar22,0,0);
    if ((int)uVar15 == 0) {
      return uVar15;
    }
    if (lVar22 != 0) {
      uVar15 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar22,iVar29 == 2,0);
      return uVar15;
    }
  }
  else if (iVar29 == 2) {
    if (iVar1 == 0) {
      if (lVar24 == 0) goto LAB_0150c7d4;
      uVar20 = *(undefined8 *)(lVar21 + 0x2d8);
      uVar11 = *(undefined8 *)(lVar21 + 0x2d0);
      uVar27 = *(undefined8 *)(lVar21 + 0x2e8);
      uVar25 = *(undefined8 *)(lVar21 + 0x2e0);
      *(undefined8 *)((long)plVar14 + -0x118) = uVar20;
      *(undefined8 *)((long)plVar14 + -0x120) = uVar11;
      *(undefined8 *)((long)plVar14 + -0x108) = uVar27;
      *(undefined8 *)((long)plVar14 + -0x110) = uVar25;
      uVar35 = *(undefined8 *)(lVar21 + 0x318);
      uVar34 = *(undefined8 *)(lVar21 + 0x310);
      *(undefined8 *)((long)plVar14 + -0x128) = uVar35;
      *(undefined8 *)((long)plVar14 + -0x130) = uVar34;
      *(undefined8 *)((long)plVar14 + -200) = unaff_x26;
      *(long *)((long)plVar14 + -0xc0) = lVar18;
      *(undefined8 *)((long)plVar14 + -0xb0) = uVar20;
      *(undefined8 *)((long)plVar14 + -0xb8) = uVar11;
      *(undefined8 *)((long)plVar14 + -0xa0) = uVar27;
      *(undefined8 *)((long)plVar14 + -0xa8) = uVar25;
      *(long *)((long)plVar14 + -0x98) = lVar22;
      *(undefined8 *)((long)plVar14 + -0x90) = _UNK_033f8620;
      *(long *)((long)plVar14 + -0x88) = lVar19;
      *(long *)((long)plVar14 + -0x80) = lVar24;
      *(undefined8 *)((long)plVar14 + -0x70) = uVar35;
      *(undefined8 *)((long)plVar14 + -0x78) = uVar34;
      lVar21 = lVar24;
LAB_0150c724:
      /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar21,(undefined1 *)((long)plVar14 + -200),uRam0000000003d2a408);
      iVar29 = 1;
    }
    else {
      iVar29 = 2;
    }
LAB_0150c72c:
    lVar21 = *(long *)(lVar13 + 0x70);
    if (lVar21 != 0) {
      if (*(uint *)(lVar21 + 0x18) < 8) goto LAB_0150c7d8;
      *(undefined8 *)(lVar21 + 0x2c0) = unaff_x26;
      *(long *)(lVar21 + 0x2c8) = lVar18;
      uVar11 = *(undefined8 *)((long)plVar14 + -0xf0);
      uVar25 = *(undefined8 *)((long)plVar14 + -0xd8);
      uVar20 = *(undefined8 *)((long)plVar14 + -0xe0);
      *(undefined8 *)(lVar21 + 0x2d8) = *(undefined8 *)((long)plVar14 + -0xe8);
      *(undefined8 *)(lVar21 + 0x2d0) = uVar11;
      *(undefined8 *)(lVar21 + 0x2e8) = uVar25;
      *(undefined8 *)(lVar21 + 0x2e0) = uVar20;
      *(long *)(lVar21 + 0x2f0) = lVar22;
      *(int *)(lVar21 + 0x2f8) = iVar29;
      *(int *)(lVar21 + 0x2fc) = iVar1;
      *(long *)(lVar21 + 0x300) = lVar19;
      *(long *)(lVar21 + 0x308) = lVar24;
      uVar11 = *(undefined8 *)((long)plVar14 + -0x100);
      *(undefined8 *)(lVar21 + 0x318) = *(undefined8 *)((long)plVar14 + -0xf8);
      *(undefined8 *)(lVar21 + 0x310) = uVar11;
      goto LAB_0150c768;
    }
  }
  else {
    if (iVar29 != 0) goto LAB_0150c72c;
    if (iVar1 != 2) {
      iVar29 = 0;
      goto LAB_0150c72c;
    }
    if (((lVar18 != 0) && (lVar21 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar18,0), lVar21 != 0)) &&
       (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar21,1,0), lVar19 != 0)) {
      *(undefined8 *)((long)plVar14 + -200) = unaff_x26;
      *(long *)((long)plVar14 + -0xc0) = lVar18;
      *(undefined8 *)((long)plVar14 + -0xb0) = *(undefined8 *)((long)plVar14 + -0xe8);
      *(undefined8 *)((long)plVar14 + -0xb8) = *(undefined8 *)((long)plVar14 + -0xf0);
      *(undefined8 *)((long)plVar14 + -0xa0) = *(undefined8 *)((long)plVar14 + -0xd8);
      *(undefined8 *)((long)plVar14 + -0xa8) = *(undefined8 *)((long)plVar14 + -0xe0);
      *(long *)((long)plVar14 + -0x98) = lVar22;
      *(undefined8 *)((long)plVar14 + -0x90) = _UNK_033f8628;
      *(long *)((long)plVar14 + -0x88) = lVar19;
      *(long *)((long)plVar14 + -0x80) = lVar24;
      *(undefined8 *)((long)plVar14 + -0x70) = *(undefined8 *)((long)plVar14 + -0xf8);
      *(undefined8 *)((long)plVar14 + -0x78) = *(undefined8 *)((long)plVar14 + -0x100);
      lVar21 = lVar19;
      goto LAB_0150c724;
    }
  }
LAB_0150c7d4:
  func_0x00f78af4();
LAB_0150c7d8:
  uVar11 = func_0x00f78b24();
  auVar36 = func_0x00f78ac0(uVar11,0);
  lVar21 = auVar36._8_8_;
  *(undefined8 *)((long)plVar14 + -0x180) = unaff_x26;
  *(undefined8 *)((long)plVar14 + -0x178) = unaff_x25;
  *(long *)((long)plVar14 + -0x170) = lVar24;
  *(long *)((long)plVar14 + -0x168) = lVar19;
  *(long *)((long)plVar14 + -0x160) = lVar18;
  *(long *)((long)plVar14 + -0x158) = lVar13;
  *(undefined8 *)((long)plVar14 + -0x150) = 7;
  *(long *)((long)plVar14 + -0x148) = lVar22;
  *(undefined1 **)((long)plVar14 + -0x140) = (undefined1 *)((long)plVar14 + -0x10);
  *(code **)((long)plVar14 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
  if ((bRam0000000003eb4d55 & 1) == 0) {
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e7d0);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d5e888);
    bRam0000000003eb4d55 = 1;
  }
  uVar11 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar21 + 0x18),*(undefined4 *)(lVar21 + 0x1c),
                           *(undefined4 *)(lVar21 + 0x20),_UNK_033f8144,
                           *(undefined8 *)(lVar21 + 0x10),0,0);
  uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar11,10,uRam0000000003d5e7a8);
  uVar11 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar11,*(undefined8 *)(lVar21 + 0x58),uRam0000000003d5e6e0);
  uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar11,1,uRam0000000003d5e888);
  uVar15 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar11,auVar36._0_8_,uRam0000000003d5e850);
  if ((uVar15 != 0) && (*(char *)(uVar15 + 0xe8) != '\0')) {
    *(undefined8 *)(uVar15 + 0x30) = *(undefined8 *)(lVar21 + 0x10);
  }
  return uVar15;
}



// ============================================================
// RVA: 0x150ae18 | Atlas.UI.TopBarManager.DeInit
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0150bcb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_TopBarManager__DeInit(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined4 uVar14;
  int extraout_w1;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar22;
  undefined8 unaff_x28;
  undefined1 **ppuVar23;
  undefined1 *puVar24;
  code *pcVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  code *pcStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb4d4c & 1) == 0) {
    func_0x00f78a20(0x3d2a558);
    func_0x00f78a20(0x3d1b6b8);
    func_0x00f78a20(0x3d5e4c8);
    func_0x00f78a20(0x3d5e4d0);
    func_0x00f78a20(0x3d5e4d8);
    bRam0000000003eb4d4c = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar21 = (undefined8 *)0x3d1b6b8;
    lVar18 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    uVar8 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ uRam0000000003d1b6b8);
    lVar15 = lRam0000000003d5e4c8;
    /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(uVar8,param_1,lRam0000000003d5e4c8,uRam0000000003d2a558);
    if (lVar18 != 0) {
      lVar15 = 0;
      /*Core.UI2.UIManager$$remove_StartBeforeEnterScreenEvent*/ func_0x02f86aec(lVar18,uVar8);
      if (*(long *)(param_1 + 0x10) != 0) {
        lVar18 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
        uVar8 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ uRam0000000003d1b6b8);
        lVar15 = lRam0000000003d5e4d0;
        /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(uVar8,param_1,lRam0000000003d5e4d0,uRam0000000003d2a558);
        if (lVar18 != 0) {
          lVar15 = 0;
          /*Core.UI2.UIManager$$remove_StartEnterScreenEvent*/ func_0x02f86c2c(lVar18,uVar8);
          if (*(long *)(param_1 + 0x10) != 0) {
            lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
            uVar8 = func_0x00f78aec(/*System.Action<UIScreen, int>_TypeInfo*/ uRam0000000003d1b6b8);
            lVar15 = lRam0000000003d5e4d8;
            /*System.Action<UIScreen, int>$$.ctor*/ func_0x01e6e270(uVar8,param_1,lRam0000000003d5e4d8,uRam0000000003d2a558);
            lVar18 = 0;
            if (lVar19 != 0) {
              /*Core.UI2.UIManager$$remove_StartExitScreenEvent*/ func_0x02f86d6c(lVar19,uVar8,0);
              goto LAB_0150af5c;
            }
          }
        }
      }
    }
    lVar19 = func_0x00f78af4();
    puStack_48 = &Atlas_UI_TopBarManager__Update;
    ppuVar23 = &puStack_50;
    lVar16 = *(long *)(lVar19 + 0x38);
    lStack_60 = lVar18;
    lStack_58 = param_1;
    puStack_50 = &stack0xfffffffffffffff0;
    if (lVar16 != 0) {
      if ((*(int *)(lVar16 + 0x10) == -1) || (*(long *)(lVar19 + 0x28) == 0)) {
        return;
      }
      lVar15 = *(long *)(lVar16 + 0x20);
      Atlas_UI_Screens_TopBarScreen__HideButtonsNotRequired
                (*(long *)(lVar19 + 0x28),*(undefined8 *)(lVar16 + 0x18));
      lVar16 = *(long *)(lVar19 + 0x38);
      param_1 = lVar19;
      if ((lVar16 != 0) && (*(long *)(lVar19 + 0x28) != 0)) {
        lVar15 = *(long *)(lVar16 + 0x20);
        Atlas_UI_Screens_TopBarScreen__ShowButtons
                  (*(long *)(lVar19 + 0x28),*(undefined8 *)(lVar16 + 0x18));
        if (*(long *)(lVar19 + 0x38) != 0) {
          *(undefined4 *)(*(long *)(lVar19 + 0x38) + 0x10) = 0xffffffff;
          return;
        }
      }
    }
    auVar30 = func_0x00f78af4();
    lVar19 = auVar30._8_8_;
    uVar26 = auVar30._0_8_;
    pcStack_68 = Atlas_UI_Screens_TopBarScreen__HideButtonsNotRequired;
    uVar9 = uVar26;
    if ((bRam0000000003eb4d5e & 1) == 0) {
      uVar9 = func_0x00f78a20(0x3d3dca0);
      bRam0000000003eb4d5e = 1;
    }
    uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar9,0,lVar19);
    if (((uVar10 & 1) == 0) &&
       (uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,0,lVar15),
       (uVar10 & 1) == 0)) {
      uVar10 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar26,0,0,1);
    }
    uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,1,lVar19);
    if (((uVar10 & 1) == 0) &&
       (uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,1,lVar15),
       (uVar10 & 1) == 0)) {
      uVar10 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar26,1,0,1);
    }
    uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,2,lVar19);
    if (((uVar10 & 1) == 0) &&
       (uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,2,lVar15),
       (uVar10 & 1) == 0)) {
      uVar10 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar26,2,0,1);
    }
    uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,3,lVar19);
    if (((uVar10 & 1) == 0) &&
       (uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,3,lVar15),
       (uVar10 & 1) == 0)) {
      uVar10 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar26,3,0,1);
    }
    uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,4,lVar19);
    if (((uVar10 & 1) == 0) &&
       (uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,4,lVar15),
       (uVar10 & 1) == 0)) {
      uVar10 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar26,4,0,1);
    }
    uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,5,lVar19);
    if (((uVar10 & 1) == 0) &&
       (uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,5,lVar15),
       (uVar10 & 1) == 0)) {
      uVar10 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar26,5,0,1);
    }
    lVar16 = lVar19;
    uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,8);
    if (((uVar10 & 1) == 0) &&
       (lVar16 = lVar15, uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,8),
       (uVar10 & 1) == 0)) {
      lVar16 = 0;
      Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar26,8,0,1);
    }
    uVar9 = unaff_x26;
    if (lVar19 != 0) {
      uVar9 = 0x3d3dca0;
      uVar1 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar19,0,lRam0000000003d3dca0);
      lVar16 = lRam0000000003d3dca0;
      uVar2 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar19,1);
      if (lVar15 != 0) {
        uVar10 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar15,0,lRam0000000003d3dca0);
        uVar11 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar15,1,lRam0000000003d3dca0);
        uVar3 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar19,6,lRam0000000003d3dca0);
        uVar4 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar15,6,lRam0000000003d3dca0);
        uVar5 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar19,8,lRam0000000003d3dca0);
        uVar6 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar15,8,lRam0000000003d3dca0);
        if (((((uVar1 | uVar2) & 1) == 0) && ((uVar10 & 1) == 0)) && ((uVar11 & 1) == 0)) {
          Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar26,6,0,1);
        }
        if (((uVar3 | uVar4 | uVar5 | uVar6) & 1) != 0) {
          return;
        }
        auVar30._8_8_ = 1;
        auVar30._0_8_ = uVar26;
        lVar15 = 0x3d2a558;
        lVar19 = 0x3d5e000;
        lVar16 = 0x3d1b6b8;
        plVar12 = &lStack_60;
        do {
          lVar13 = auVar30._0_8_;
          *(long *)((long)plVar12 + -0x20) = lVar18;
          *(long *)((long)plVar12 + -0x18) = param_1;
          *(undefined1 ***)((long)plVar12 + -0x10) = ppuVar23;
          *(code **)((long)plVar12 + -8) = pcStack_68;
          lVar18 = *(long *)(lVar13 + 0x70);
          if (lVar18 == 0) {
            func_0x00f78af4();
          }
          else {
            param_1 = 7;
            if (7 < *(uint *)(lVar18 + 0x18)) goto code_r0x0150bc78;
          }
          uVar9 = func_0x00f78b24();
          auVar30 = func_0x00f78ac0(uVar9,0);
          puVar24 = (undefined1 *)((long)plVar12 + -0x30);
          *(undefined1 **)((long)plVar12 + -0x30) = (undefined1 *)((long)plVar12 + -0x10);
          *(undefined **)((long)plVar12 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
          lVar18 = *(long *)(auVar30._0_8_ + 0x28);
          auVar30._8_8_ = auVar30._8_8_;
          auVar30._0_8_ = lVar18;
          if (lVar18 == 0) {
            pcVar25 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
            auVar30 = func_0x00f78af4();
            plVar12 = (long *)((long)plVar12 + -0x30);
          }
          else {
            puVar24 = *(undefined1 **)((long)plVar12 + -0x30);
            pcVar25 = *(code **)((long)plVar12 + -0x28);
            plVar12 = (long *)((long)plVar12 + -0x20);
          }
          *(long *)((long)plVar12 + -0x20) = lVar13;
          *(long *)((long)plVar12 + -0x18) = param_1;
          *(undefined1 **)((long)plVar12 + -0x10) = puVar24;
          *(code **)((long)plVar12 + -8) = pcVar25;
          Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar30._0_8_,4,0,auVar30._8_8_);
          Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar30._0_8_,5,0,auVar30._8_8_);
          ppuVar23 = *(undefined1 ***)((long)plVar12 + -0x10);
          pcStack_68 = *(code **)((long)plVar12 + -8);
          lVar18 = *(long *)((long)plVar12 + -0x20);
          param_1 = *(long *)((long)plVar12 + -0x18);
        } while( true );
      }
    }
    auVar30 = func_0x00f78af4();
    lVar18 = auVar30._0_8_;
    puVar20 = (undefined8 *)0x3eb4000;
    uStack_110 = uVar9;
    if ((bRam0000000003eb4d5d & 1) == 0) {
      func_0x00f78a20(0x3d337e0);
      func_0x00f78a20(0x3d337e8);
      func_0x00f78a20(0x3d337f0);
      func_0x00f78a20(0x3d3dca0);
      func_0x00f78a20(0x3d3dca8);
      bRam0000000003eb4d5d = 1;
    }
    if (auVar30._8_8_ == 0) goto LAB_0150b47c;
    puVar20 = (undefined8 *)0x3d3dca0;
    puVar21 = (undefined8 *)0x3d337e0;
    /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$GetEnumerator*/ func_0x023df1f8(&uStack_148,auVar30._8_8_,uRam0000000003d3dca8);
    uStack_128 = uStack_140;
    uStack_130 = uStack_148;
    uStack_120 = uStack_138;
    while (uVar10 = /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$MoveNext*/ func_0x01f694e8(&uStack_130,uRam0000000003d337e8), (uVar10 & 1) != 0) {
      if (lVar16 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x150b47c);
        (*pcVar25)();
      }
      uVar1 = (uint)uStack_120;
      lVar15 = (long)(int)(uint)uStack_120;
      uVar10 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar16,lVar15,lRam0000000003d3dca0);
      if ((uVar10 & 1) == 0) {
        if (uVar1 < 9) {
          uVar14 = *(undefined4 *)(&UNK_033f869c + lVar15 * 4);
        }
        else {
          uVar14 = 0xffffffff;
        }
        Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar18,uVar14,1,1);
      }
    }
    /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_130,uRam0000000003d337e0);
    do {
      if (lVar16 != 0) {
        uVar10 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar16,0,*puVar20);
        if ((uVar10 & 1) == 0) {
          uVar8 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar16,1,*puVar20);
        }
        else {
          uVar8 = 1;
        }
        uVar10 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar16,6,*puVar20);
        if ((uVar10 & 1) == 0) {
          uVar9 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar16,8,*puVar20);
        }
        else {
          uVar9 = 1;
        }
        if (lVar18 != 0) {
          Atlas_UI_Screens_TopBarScreen__ShowBackingPanelsIfRequired(lVar18,uVar8,uVar9);
          return;
        }
      }
LAB_0150b47c:
      func_0x00f78af4();
      if (extraout_w1 != 1) goto code_r0x0150b4bc;
      plVar12 = (long *)___cxa_begin_catch();
      lVar15 = *plVar12;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_130,*puVar21);
    } while (lVar15 == 0);
    func_0x00f78ac0(lVar15,0);
code_r0x0150b4bc:
    auVar30 = __Unwind_Resume();
    *(long *)(auVar30._0_8_ + 0x28) = auVar30._8_8_;
    return;
  }
LAB_0150af5c:
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
code_r0x0150bc78:
  *(undefined4 *)(lVar18 + 0x2fc) = 0;
  if ((auVar30._8_8_ & 1) == 0) {
    Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar13,7);
  }
  *(undefined8 *)((long)plVar12 + -0x60) = unaff_x28;
  *(undefined8 *)((long)plVar12 + -0x58) = unaff_x27;
  *(undefined8 *)((long)plVar12 + -0x50) = unaff_x26;
  *(undefined8 *)((long)plVar12 + -0x48) = unaff_x25;
  *(undefined8 *)((long)plVar12 + -0x40) = 0x3d5e000;
  *(undefined8 *)((long)plVar12 + -0x38) = 0x3d1b6b8;
  *(undefined8 *)((long)plVar12 + -0x30) = 0x3d2a558;
  *(undefined8 *)((long)plVar12 + -0x28) = uVar8;
  *(undefined8 *)((long)plVar12 + -0x20) = *(undefined8 *)((long)plVar12 + -0x20);
  *(undefined8 *)((long)plVar12 + -0x18) = *(undefined8 *)((long)plVar12 + -0x18);
  *(undefined8 *)((long)plVar12 + -0x10) = *(undefined8 *)((long)plVar12 + -0x10);
  *(undefined8 *)((long)plVar12 + -8) = *(undefined8 *)((long)plVar12 + -8);
  lVar18 = 0x3eb4000;
  if ((bRam0000000003eb4d5b & 1) == 0) {
    func_0x00f78a20(0x3d2a408);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d5b = 1;
  }
  lVar17 = *(long *)(lVar13 + 0x70);
  if (lVar17 == 0) goto LAB_0150c7d4;
  if (*(uint *)(lVar17 + 0x18) < 8) goto LAB_0150c7d8;
  unaff_x25 = 7;
  unaff_x26 = *(undefined8 *)(lVar17 + 0x2c0);
  lVar15 = *(long *)(lVar17 + 0x2c8);
  uVar8 = *(undefined8 *)(lVar17 + 0x2d0);
  uVar26 = *(undefined8 *)(lVar17 + 0x2e8);
  uVar9 = *(undefined8 *)(lVar17 + 0x2e0);
  *(undefined8 *)((long)plVar12 + -0xe8) = *(undefined8 *)(lVar17 + 0x2d8);
  *(undefined8 *)((long)plVar12 + -0xf0) = uVar8;
  *(undefined8 *)((long)plVar12 + -0xd8) = uVar26;
  *(undefined8 *)((long)plVar12 + -0xe0) = uVar9;
  lVar18 = *(long *)(lVar17 + 0x2f0);
  iVar22 = *(int *)(lVar17 + 0x2f8);
  iVar7 = *(int *)(lVar17 + 0x2fc);
  lVar16 = *(long *)(lVar17 + 0x300);
  lVar19 = *(long *)(lVar17 + 0x308);
  uVar8 = *(undefined8 *)(lVar17 + 0x310);
  *(undefined8 *)((long)plVar12 + -0xf8) = *(undefined8 *)(lVar17 + 0x318);
  *(undefined8 *)((long)plVar12 + -0x100) = uVar8;
  if (iVar7 == iVar22) {
LAB_0150c768:
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar18,0,0);
    if (iVar7 == 0) {
      return;
    }
    if (lVar18 != 0) {
      /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar18,iVar22 == 2,0);
      return;
    }
  }
  else if (iVar22 == 2) {
    if (iVar7 == 0) {
      if (lVar19 == 0) goto LAB_0150c7d4;
      uVar9 = *(undefined8 *)(lVar17 + 0x2d8);
      uVar8 = *(undefined8 *)(lVar17 + 0x2d0);
      uVar27 = *(undefined8 *)(lVar17 + 0x2e8);
      uVar26 = *(undefined8 *)(lVar17 + 0x2e0);
      *(undefined8 *)((long)plVar12 + -0x118) = uVar9;
      *(undefined8 *)((long)plVar12 + -0x120) = uVar8;
      *(undefined8 *)((long)plVar12 + -0x108) = uVar27;
      *(undefined8 *)((long)plVar12 + -0x110) = uVar26;
      uVar29 = *(undefined8 *)(lVar17 + 0x318);
      uVar28 = *(undefined8 *)(lVar17 + 0x310);
      *(undefined8 *)((long)plVar12 + -0x128) = uVar29;
      *(undefined8 *)((long)plVar12 + -0x130) = uVar28;
      *(undefined8 *)((long)plVar12 + -200) = unaff_x26;
      *(long *)((long)plVar12 + -0xc0) = lVar15;
      *(undefined8 *)((long)plVar12 + -0xb0) = uVar9;
      *(undefined8 *)((long)plVar12 + -0xb8) = uVar8;
      *(undefined8 *)((long)plVar12 + -0xa0) = uVar27;
      *(undefined8 *)((long)plVar12 + -0xa8) = uVar26;
      *(long *)((long)plVar12 + -0x98) = lVar18;
      *(undefined8 *)((long)plVar12 + -0x90) = _UNK_033f8620;
      *(long *)((long)plVar12 + -0x88) = lVar16;
      *(long *)((long)plVar12 + -0x80) = lVar19;
      *(undefined8 *)((long)plVar12 + -0x70) = uVar29;
      *(undefined8 *)((long)plVar12 + -0x78) = uVar28;
      lVar17 = lVar19;
LAB_0150c724:
      /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar17,(undefined1 *)((long)plVar12 + -200),uRam0000000003d2a408);
      iVar22 = 1;
    }
    else {
      iVar22 = 2;
    }
LAB_0150c72c:
    lVar17 = *(long *)(lVar13 + 0x70);
    if (lVar17 != 0) {
      if (*(uint *)(lVar17 + 0x18) < 8) goto LAB_0150c7d8;
      *(undefined8 *)(lVar17 + 0x2c0) = unaff_x26;
      *(long *)(lVar17 + 0x2c8) = lVar15;
      uVar8 = *(undefined8 *)((long)plVar12 + -0xf0);
      uVar26 = *(undefined8 *)((long)plVar12 + -0xd8);
      uVar9 = *(undefined8 *)((long)plVar12 + -0xe0);
      *(undefined8 *)(lVar17 + 0x2d8) = *(undefined8 *)((long)plVar12 + -0xe8);
      *(undefined8 *)(lVar17 + 0x2d0) = uVar8;
      *(undefined8 *)(lVar17 + 0x2e8) = uVar26;
      *(undefined8 *)(lVar17 + 0x2e0) = uVar9;
      *(long *)(lVar17 + 0x2f0) = lVar18;
      *(int *)(lVar17 + 0x2f8) = iVar22;
      *(int *)(lVar17 + 0x2fc) = iVar7;
      *(long *)(lVar17 + 0x300) = lVar16;
      *(long *)(lVar17 + 0x308) = lVar19;
      uVar8 = *(undefined8 *)((long)plVar12 + -0x100);
      *(undefined8 *)(lVar17 + 0x318) = *(undefined8 *)((long)plVar12 + -0xf8);
      *(undefined8 *)(lVar17 + 0x310) = uVar8;
      goto LAB_0150c768;
    }
  }
  else {
    if (iVar22 != 0) goto LAB_0150c72c;
    if (iVar7 != 2) {
      iVar22 = 0;
      goto LAB_0150c72c;
    }
    if (((lVar15 != 0) && (lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar15,0), lVar17 != 0)) &&
       (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar17,1,0), lVar16 != 0)) {
      *(undefined8 *)((long)plVar12 + -200) = unaff_x26;
      *(long *)((long)plVar12 + -0xc0) = lVar15;
      *(undefined8 *)((long)plVar12 + -0xb0) = *(undefined8 *)((long)plVar12 + -0xe8);
      *(undefined8 *)((long)plVar12 + -0xb8) = *(undefined8 *)((long)plVar12 + -0xf0);
      *(undefined8 *)((long)plVar12 + -0xa0) = *(undefined8 *)((long)plVar12 + -0xd8);
      *(undefined8 *)((long)plVar12 + -0xa8) = *(undefined8 *)((long)plVar12 + -0xe0);
      *(long *)((long)plVar12 + -0x98) = lVar18;
      *(undefined8 *)((long)plVar12 + -0x90) = _UNK_033f8628;
      *(long *)((long)plVar12 + -0x88) = lVar16;
      *(long *)((long)plVar12 + -0x80) = lVar19;
      *(undefined8 *)((long)plVar12 + -0x70) = *(undefined8 *)((long)plVar12 + -0xf8);
      *(undefined8 *)((long)plVar12 + -0x78) = *(undefined8 *)((long)plVar12 + -0x100);
      lVar17 = lVar16;
      goto LAB_0150c724;
    }
  }
LAB_0150c7d4:
  func_0x00f78af4();
LAB_0150c7d8:
  uVar8 = func_0x00f78b24();
  auVar30 = func_0x00f78ac0(uVar8,0);
  lVar17 = auVar30._8_8_;
  *(undefined8 *)((long)plVar12 + -0x180) = unaff_x26;
  *(undefined8 *)((long)plVar12 + -0x178) = unaff_x25;
  *(long *)((long)plVar12 + -0x170) = lVar19;
  *(long *)((long)plVar12 + -0x168) = lVar16;
  *(long *)((long)plVar12 + -0x160) = lVar15;
  *(long *)((long)plVar12 + -0x158) = lVar13;
  *(undefined8 *)((long)plVar12 + -0x150) = 7;
  *(long *)((long)plVar12 + -0x148) = lVar18;
  *(undefined1 **)((long)plVar12 + -0x140) = (undefined1 *)((long)plVar12 + -0x10);
  *(code **)((long)plVar12 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
  if ((bRam0000000003eb4d55 & 1) == 0) {
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e7d0);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d5e888);
    bRam0000000003eb4d55 = 1;
  }
  uVar8 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar17 + 0x18),*(undefined4 *)(lVar17 + 0x1c),
                          *(undefined4 *)(lVar17 + 0x20),_UNK_033f8144,
                          *(undefined8 *)(lVar17 + 0x10),0,0);
  uVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar8,10,uRam0000000003d5e7a8);
  uVar8 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar8,*(undefined8 *)(lVar17 + 0x58),uRam0000000003d5e6e0);
  uVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar8,1,uRam0000000003d5e888);
  lVar18 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar8,auVar30._0_8_,uRam0000000003d5e850);
  if ((lVar18 != 0) && (*(char *)(lVar18 + 0xe8) != '\0')) {
    *(undefined8 *)(lVar18 + 0x30) = *(undefined8 *)(lVar17 + 0x10);
  }
  return;
}



// ============================================================
// RVA: 0x150af78 | Atlas.UI.TopBarManager.Update
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0150bcb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_TopBarManager__Update(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 uVar13;
  int extraout_w1;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 *puVar18;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar19;
  undefined8 unaff_x28;
  undefined1 *puVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  code *pcStack_28;
  
  puVar20 = &stack0xfffffffffffffff0;
  lVar16 = *(long *)(param_1 + 0x38);
  if (lVar16 != 0) {
    if ((*(int *)(lVar16 + 0x10) == -1) || (*(long *)(param_1 + 0x28) == 0)) {
      return;
    }
    param_3 = *(long *)(lVar16 + 0x20);
    Atlas_UI_Screens_TopBarScreen__HideButtonsNotRequired
              (*(long *)(param_1 + 0x28),*(undefined8 *)(lVar16 + 0x18));
    lVar16 = *(long *)(param_1 + 0x38);
    unaff_x19 = param_1;
    if ((lVar16 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
      param_3 = *(long *)(lVar16 + 0x20);
      Atlas_UI_Screens_TopBarScreen__ShowButtons
                (*(long *)(param_1 + 0x28),*(undefined8 *)(lVar16 + 0x18));
      if (*(long *)(param_1 + 0x38) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x10) = 0xffffffff;
        return;
      }
    }
  }
  auVar26 = func_0x00f78af4();
  lVar16 = auVar26._8_8_;
  uVar15 = auVar26._0_8_;
  pcStack_28 = Atlas_UI_Screens_TopBarScreen__HideButtonsNotRequired;
  uVar9 = uVar15;
  if ((bRam0000000003eb4d5e & 1) == 0) {
    uVar9 = func_0x00f78a20(0x3d3dca0);
    bRam0000000003eb4d5e = 1;
  }
  uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar9,0,lVar16);
  if (((uVar10 & 1) == 0) &&
     (uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,0,param_3),
     (uVar10 & 1) == 0)) {
    uVar10 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar15,0,0,1);
  }
  uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,1,lVar16);
  if (((uVar10 & 1) == 0) &&
     (uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,1,param_3),
     (uVar10 & 1) == 0)) {
    uVar10 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar15,1,0,1);
  }
  uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,2,lVar16);
  if (((uVar10 & 1) == 0) &&
     (uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,2,param_3),
     (uVar10 & 1) == 0)) {
    uVar10 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar15,2,0,1);
  }
  uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,3,lVar16);
  if (((uVar10 & 1) == 0) &&
     (uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,3,param_3),
     (uVar10 & 1) == 0)) {
    uVar10 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar15,3,0,1);
  }
  uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,4,lVar16);
  if (((uVar10 & 1) == 0) &&
     (uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,4,param_3),
     (uVar10 & 1) == 0)) {
    uVar10 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar15,4,0,1);
  }
  uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,5,lVar16);
  if (((uVar10 & 1) == 0) &&
     (uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,5,param_3),
     (uVar10 & 1) == 0)) {
    uVar10 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar15,5,0,1);
  }
  lVar14 = lVar16;
  uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,8);
  if (((uVar10 & 1) == 0) &&
     (lVar14 = param_3, uVar10 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar10,8),
     (uVar10 & 1) == 0)) {
    lVar14 = 0;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar15,8,0,1);
  }
  uVar9 = unaff_x26;
  if (lVar16 != 0) {
    uVar9 = 0x3d3dca0;
    uVar2 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar16,0,lRam0000000003d3dca0);
    lVar14 = lRam0000000003d3dca0;
    uVar3 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar16,1);
    if (param_3 != 0) {
      uVar10 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(param_3,0,lRam0000000003d3dca0);
      uVar11 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(param_3,1,lRam0000000003d3dca0);
      uVar4 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar16,6,lRam0000000003d3dca0);
      uVar5 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(param_3,6,lRam0000000003d3dca0);
      uVar6 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar16,8,lRam0000000003d3dca0);
      uVar7 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(param_3,8,lRam0000000003d3dca0);
      if (((((uVar2 | uVar3) & 1) == 0) && ((uVar10 & 1) == 0)) && ((uVar11 & 1) == 0)) {
        Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar15,6,0,1);
      }
      if (((uVar4 | uVar5 | uVar6 | uVar7) & 1) != 0) {
        return;
      }
      auVar26._8_8_ = 1;
      auVar26._0_8_ = uVar15;
      puVar1 = &stack0xffffffffffffffe0;
      do {
        lVar16 = auVar26._0_8_;
        *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
        *(long *)(puVar1 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar1 + -0x10) = puVar20;
        *(code **)(puVar1 + -8) = pcStack_28;
        lVar14 = *(long *)(lVar16 + 0x70);
        if (lVar14 == 0) {
          func_0x00f78af4();
        }
        else {
          unaff_x19 = 7;
          if (7 < *(uint *)(lVar14 + 0x18)) goto code_r0x0150bc78;
        }
        uVar9 = func_0x00f78b24();
        auVar26 = func_0x00f78ac0(uVar9,0);
        puVar20 = puVar1 + -0x30;
        *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
        *(undefined **)(puVar1 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
        lVar14 = *(long *)(auVar26._0_8_ + 0x28);
        auVar26._8_8_ = auVar26._8_8_;
        auVar26._0_8_ = lVar14;
        if (lVar14 == 0) {
          pcVar21 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
          auVar26 = func_0x00f78af4();
          puVar1 = puVar1 + -0x30;
        }
        else {
          puVar20 = *(undefined1 **)(puVar1 + -0x30);
          pcVar21 = *(code **)(puVar1 + -0x28);
          puVar1 = puVar1 + -0x20;
        }
        *(long *)(puVar1 + -0x20) = lVar16;
        *(long *)(puVar1 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar1 + -0x10) = puVar20;
        *(code **)(puVar1 + -8) = pcVar21;
        Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar26._0_8_,4,0,auVar26._8_8_);
        Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar26._0_8_,5,0,auVar26._8_8_);
        puVar20 = *(undefined1 **)(puVar1 + -0x10);
        pcStack_28 = *(code **)(puVar1 + -8);
        unaff_x20 = *(undefined8 *)(puVar1 + -0x20);
        unaff_x19 = *(long *)(puVar1 + -0x18);
      } while( true );
    }
  }
  auVar26 = func_0x00f78af4();
  lVar16 = auVar26._0_8_;
  puVar18 = (undefined8 *)0x3eb4000;
  uStack_d0 = uVar9;
  if ((bRam0000000003eb4d5d & 1) == 0) {
    func_0x00f78a20(0x3d337e0);
    func_0x00f78a20(0x3d337e8);
    func_0x00f78a20(0x3d337f0);
    func_0x00f78a20(0x3d3dca0);
    func_0x00f78a20(0x3d3dca8);
    bRam0000000003eb4d5d = 1;
  }
  if (auVar26._8_8_ == 0) goto LAB_0150b47c;
  puVar18 = (undefined8 *)0x3d3dca0;
  unaff_x23 = (undefined8 *)0x3d337e0;
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$GetEnumerator*/ func_0x023df1f8(&uStack_108,auVar26._8_8_,uRam0000000003d3dca8);
  uStack_e8 = uStack_100;
  uStack_f0 = uStack_108;
  uStack_e0 = uStack_f8;
  while (uVar10 = /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$MoveNext*/ func_0x01f694e8(&uStack_f0,uRam0000000003d337e8), (uVar10 & 1) != 0) {
    if (lVar14 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x150b47c);
      (*pcVar21)();
    }
    uVar2 = (uint)uStack_e0;
    lVar17 = (long)(int)(uint)uStack_e0;
    uVar10 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar14,lVar17,lRam0000000003d3dca0);
    if ((uVar10 & 1) == 0) {
      if (uVar2 < 9) {
        uVar13 = *(undefined4 *)(&UNK_033f869c + lVar17 * 4);
      }
      else {
        uVar13 = 0xffffffff;
      }
      Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar16,uVar13,1,1);
    }
  }
  /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_f0,uRam0000000003d337e0);
  do {
    if (lVar14 != 0) {
      uVar10 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar14,0,*puVar18);
      if ((uVar10 & 1) == 0) {
        uVar9 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar14,1,*puVar18);
      }
      else {
        uVar9 = 1;
      }
      uVar10 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar14,6,*puVar18);
      if ((uVar10 & 1) == 0) {
        uVar15 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar14,8,*puVar18);
      }
      else {
        uVar15 = 1;
      }
      if (lVar16 != 0) {
        Atlas_UI_Screens_TopBarScreen__ShowBackingPanelsIfRequired(lVar16,uVar9,uVar15);
        return;
      }
    }
LAB_0150b47c:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x0150b4bc;
    plVar12 = (long *)___cxa_begin_catch();
    lVar17 = *plVar12;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_f0,*unaff_x23);
  } while (lVar17 == 0);
  func_0x00f78ac0(lVar17,0);
code_r0x0150b4bc:
  auVar26 = __Unwind_Resume();
  *(long *)(auVar26._0_8_ + 0x28) = auVar26._8_8_;
  return;
code_r0x0150bc78:
  *(undefined4 *)(lVar14 + 0x2fc) = 0;
  if ((auVar26._8_8_ & 1) == 0) {
    Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar16,7);
  }
  *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar1 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
  *(undefined8 **)(puVar1 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar1 + -0x38) = unaff_x23;
  *(long *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
  *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
  *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  lVar14 = 0x3eb4000;
  if ((bRam0000000003eb4d5b & 1) == 0) {
    func_0x00f78a20(0x3d2a408);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d5b = 1;
  }
  lVar17 = *(long *)(lVar16 + 0x70);
  if (lVar17 == 0) goto LAB_0150c7d4;
  if (*(uint *)(lVar17 + 0x18) < 8) goto LAB_0150c7d8;
  unaff_x25 = 7;
  unaff_x26 = *(undefined8 *)(lVar17 + 0x2c0);
  unaff_x22 = *(long *)(lVar17 + 0x2c8);
  uVar9 = *(undefined8 *)(lVar17 + 0x2d0);
  uVar22 = *(undefined8 *)(lVar17 + 0x2e8);
  uVar15 = *(undefined8 *)(lVar17 + 0x2e0);
  *(undefined8 *)(puVar1 + -0xe8) = *(undefined8 *)(lVar17 + 0x2d8);
  *(undefined8 *)(puVar1 + -0xf0) = uVar9;
  *(undefined8 *)(puVar1 + -0xd8) = uVar22;
  *(undefined8 *)(puVar1 + -0xe0) = uVar15;
  lVar14 = *(long *)(lVar17 + 0x2f0);
  iVar19 = *(int *)(lVar17 + 0x2f8);
  iVar8 = *(int *)(lVar17 + 0x2fc);
  unaff_x23 = *(undefined8 **)(lVar17 + 0x300);
  unaff_x24 = *(undefined8 **)(lVar17 + 0x308);
  uVar9 = *(undefined8 *)(lVar17 + 0x310);
  *(undefined8 *)(puVar1 + -0xf8) = *(undefined8 *)(lVar17 + 0x318);
  *(undefined8 *)(puVar1 + -0x100) = uVar9;
  if (iVar8 == iVar19) {
LAB_0150c768:
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar14,0,0);
    if (iVar8 == 0) {
      return;
    }
    if (lVar14 != 0) {
      /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar14,iVar19 == 2,0);
      return;
    }
  }
  else if (iVar19 == 2) {
    if (iVar8 == 0) {
      if (unaff_x24 == (undefined8 *)0x0) goto LAB_0150c7d4;
      uVar15 = *(undefined8 *)(lVar17 + 0x2d8);
      uVar9 = *(undefined8 *)(lVar17 + 0x2d0);
      uVar23 = *(undefined8 *)(lVar17 + 0x2e8);
      uVar22 = *(undefined8 *)(lVar17 + 0x2e0);
      *(undefined8 *)(puVar1 + -0x118) = uVar15;
      *(undefined8 *)(puVar1 + -0x120) = uVar9;
      *(undefined8 *)(puVar1 + -0x108) = uVar23;
      *(undefined8 *)(puVar1 + -0x110) = uVar22;
      uVar25 = *(undefined8 *)(lVar17 + 0x318);
      uVar24 = *(undefined8 *)(lVar17 + 0x310);
      *(undefined8 *)(puVar1 + -0x128) = uVar25;
      *(undefined8 *)(puVar1 + -0x130) = uVar24;
      *(undefined8 *)(puVar1 + -200) = unaff_x26;
      *(long *)(puVar1 + -0xc0) = unaff_x22;
      *(undefined8 *)(puVar1 + -0xb0) = uVar15;
      *(undefined8 *)(puVar1 + -0xb8) = uVar9;
      *(undefined8 *)(puVar1 + -0xa0) = uVar23;
      *(undefined8 *)(puVar1 + -0xa8) = uVar22;
      *(long *)(puVar1 + -0x98) = lVar14;
      *(undefined8 *)(puVar1 + -0x90) = _UNK_033f8620;
      *(undefined8 **)(puVar1 + -0x88) = unaff_x23;
      *(undefined8 **)(puVar1 + -0x80) = unaff_x24;
      *(undefined8 *)(puVar1 + -0x70) = uVar25;
      *(undefined8 *)(puVar1 + -0x78) = uVar24;
      puVar18 = unaff_x24;
LAB_0150c724:
      /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(puVar18,puVar1 + -200,uRam0000000003d2a408);
      iVar19 = 1;
    }
    else {
      iVar19 = 2;
    }
LAB_0150c72c:
    lVar17 = *(long *)(lVar16 + 0x70);
    if (lVar17 != 0) {
      if (*(uint *)(lVar17 + 0x18) < 8) goto LAB_0150c7d8;
      *(undefined8 *)(lVar17 + 0x2c0) = unaff_x26;
      *(long *)(lVar17 + 0x2c8) = unaff_x22;
      uVar9 = *(undefined8 *)(puVar1 + -0xf0);
      uVar22 = *(undefined8 *)(puVar1 + -0xd8);
      uVar15 = *(undefined8 *)(puVar1 + -0xe0);
      *(undefined8 *)(lVar17 + 0x2d8) = *(undefined8 *)(puVar1 + -0xe8);
      *(undefined8 *)(lVar17 + 0x2d0) = uVar9;
      *(undefined8 *)(lVar17 + 0x2e8) = uVar22;
      *(undefined8 *)(lVar17 + 0x2e0) = uVar15;
      *(long *)(lVar17 + 0x2f0) = lVar14;
      *(int *)(lVar17 + 0x2f8) = iVar19;
      *(int *)(lVar17 + 0x2fc) = iVar8;
      *(undefined8 **)(lVar17 + 0x300) = unaff_x23;
      *(undefined8 **)(lVar17 + 0x308) = unaff_x24;
      uVar9 = *(undefined8 *)(puVar1 + -0x100);
      *(undefined8 *)(lVar17 + 0x318) = *(undefined8 *)(puVar1 + -0xf8);
      *(undefined8 *)(lVar17 + 0x310) = uVar9;
      goto LAB_0150c768;
    }
  }
  else {
    if (iVar19 != 0) goto LAB_0150c72c;
    if (iVar8 != 2) {
      iVar19 = 0;
      goto LAB_0150c72c;
    }
    if (((unaff_x22 != 0) && (lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar17 != 0)) &&
       (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar17,1,0), unaff_x23 != (undefined8 *)0x0)) {
      *(undefined8 *)(puVar1 + -200) = unaff_x26;
      *(long *)(puVar1 + -0xc0) = unaff_x22;
      *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -0xe8);
      *(undefined8 *)(puVar1 + -0xb8) = *(undefined8 *)(puVar1 + -0xf0);
      *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar1 + -0xd8);
      *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(puVar1 + -0xe0);
      *(long *)(puVar1 + -0x98) = lVar14;
      *(undefined8 *)(puVar1 + -0x90) = _UNK_033f8628;
      *(undefined8 **)(puVar1 + -0x88) = unaff_x23;
      *(undefined8 **)(puVar1 + -0x80) = unaff_x24;
      *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)(puVar1 + -0xf8);
      *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0x100);
      puVar18 = unaff_x23;
      goto LAB_0150c724;
    }
  }
LAB_0150c7d4:
  func_0x00f78af4();
LAB_0150c7d8:
  uVar9 = func_0x00f78b24();
  auVar26 = func_0x00f78ac0(uVar9,0);
  lVar17 = auVar26._8_8_;
  *(undefined8 *)(puVar1 + -0x180) = unaff_x26;
  *(undefined8 *)(puVar1 + -0x178) = unaff_x25;
  *(undefined8 **)(puVar1 + -0x170) = unaff_x24;
  *(undefined8 **)(puVar1 + -0x168) = unaff_x23;
  *(long *)(puVar1 + -0x160) = unaff_x22;
  *(long *)(puVar1 + -0x158) = lVar16;
  *(undefined8 *)(puVar1 + -0x150) = 7;
  *(long *)(puVar1 + -0x148) = lVar14;
  *(undefined1 **)(puVar1 + -0x140) = puVar1 + -0x10;
  *(code **)(puVar1 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
  if ((bRam0000000003eb4d55 & 1) == 0) {
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e7d0);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d5e888);
    bRam0000000003eb4d55 = 1;
  }
  uVar9 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar17 + 0x18),*(undefined4 *)(lVar17 + 0x1c),
                          *(undefined4 *)(lVar17 + 0x20),_UNK_033f8144,
                          *(undefined8 *)(lVar17 + 0x10),0,0);
  uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar9,10,uRam0000000003d5e7a8);
  uVar9 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar9,*(undefined8 *)(lVar17 + 0x58),uRam0000000003d5e6e0);
  uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar9,1,uRam0000000003d5e888);
  lVar16 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar9,auVar26._0_8_,uRam0000000003d5e850);
  if ((lVar16 != 0) && (*(char *)(lVar16 + 0xe8) != '\0')) {
    *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)(lVar17 + 0x10);
  }
  return;
}



// ============================================================
// RVA: 0x150b4c0 | Atlas.UI.TopBarManager.SetScreen
// ============================================================

void Atlas_UI_TopBarManager__SetScreen(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}



// ============================================================
// RVA: 0x150b4c8 | Atlas.UI.TopBarManager.SetButtonFunc
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_TopBarManager__SetButtonFunc
               (long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar12;
  undefined8 unaff_x28;
  undefined8 ***pppuVar13;
  undefined1 *puVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined8 **ppuStack_20;
  code *pcStack_18;
  
  auVar22._8_8_ = unaff_x19;
  auVar22._0_8_ = unaff_x20;
  lVar7 = *(long *)(param_1 + 0x30);
  if (lVar7 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar7 + 0x18)) {
    *(undefined8 *)(lVar7 + (long)(int)param_2 * 8 + 0x20) = param_3;
    return;
  }
  uVar4 = func_0x00f78b24();
  auVar21 = func_0x00f78ac0(uVar4,0);
  puVar2 = &stack0xffffffffffffffd0;
  ppuStack_20 = (undefined8 **)&stack0xfffffffffffffff0;
  pcStack_18 = (code *)&Atlas_UI_TopBarManager__ButtonPressed;
  pppuVar13 = &ppuStack_20;
  lVar7 = *(long *)(auVar21._0_8_ + 0x30);
  if (lVar7 == 0) {
code_r0x0150b5a8:
    unaff_x20 = auVar22._0_8_;
    func_0x00f78af4();
    uVar5 = auVar22._8_8_;
  }
  else {
    uVar6 = auVar21._8_4_;
    uVar5 = auVar21._8_8_;
    if (uVar6 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = *(long *)(lVar7 + (long)(int)uVar6 * 8 + 0x20);
      if (lVar7 == 0) {
        if (8 < uVar6) {
          return;
        }
        uVar10 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar6 & 0x1f) & uVar10) == 0) {
          return;
        }
      }
      else {
        uVar5 = /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar7,0);
        if ((uVar6 != 0) || ((uVar5 & 1) == 0)) {
          if (8 < uVar6) {
            return;
          }
          uVar10 = 0x142;
          goto code_r0x0150b574;
        }
      }
      lVar7 = *(long *)(auVar21._0_8_ + 0x28);
      auVar23._8_4_ = uVar6;
      auVar23._0_8_ = lVar7;
      auVar22 = auVar21;
      if (lVar7 != 0) {
        param_3 = 0;
        param_4 = 1;
        puVar2 = &stack0xfffffffffffffff0;
        pppuVar13 = (undefined8 ***)ppuStack_20;
        pcVar15 = pcStack_18;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  unaff_x19 = uVar5;
  uVar4 = func_0x00f78b24();
  pcVar15 = Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar23 = func_0x00f78ac0(uVar4,0);
code_r0x0150b5b8:
  auVar21._8_8_ = param_4;
  auVar21._0_8_ = auVar23._0_8_;
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = auVar23._0_8_;
  if (auVar23._8_4_ < 9) {
    uVar5 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar23._8_4_ * 4);
    auVar21 = auVar1;
  }
  else {
    uVar5 = 0xffffffff;
  }
  do {
    lVar7 = auVar21._0_8_;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(ulong *)(puVar2 + -0x18) = unaff_x19;
    *(undefined8 ****)(puVar2 + -0x10) = pppuVar13;
    *(code **)(puVar2 + -8) = pcVar15;
    uVar6 = (uint)uVar5;
    if (uVar6 == 0xffffffff) {
      return;
    }
    lVar8 = *(long *)(lVar7 + 0x70);
    if (lVar8 == 0) {
      func_0x00f78af4();
    }
    else {
      unaff_x19 = uVar5;
      if (uVar6 < *(uint *)(lVar8 + 0x18)) {
        uVar11 = 2;
        if ((int)param_3 == 0) {
          uVar11 = 0;
        }
        *(undefined4 *)(lVar8 + (long)(int)uVar6 * 0x60 + 0x5c) = uVar11;
        if ((auVar21._8_8_ & 1) == 0) {
          Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar7,uVar5);
        }
        *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
        *(long *)(puVar2 + -0x48) = unaff_x25;
        *(long *)(puVar2 + -0x40) = unaff_x24;
        *(long *)(puVar2 + -0x38) = unaff_x23;
        *(long *)(puVar2 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        lVar8 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar9 = *(long *)(lVar7 + 0x70);
        if (lVar9 == 0) goto LAB_0150c7d4;
        if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_0150c7d8;
        unaff_x25 = (long)(int)uVar6;
        lVar9 = lVar9 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar9 + 0x20);
        unaff_x22 = *(long *)(lVar9 + 0x28);
        uVar4 = *(undefined8 *)(lVar9 + 0x30);
        uVar17 = *(undefined8 *)(lVar9 + 0x48);
        uVar16 = *(undefined8 *)(lVar9 + 0x40);
        *(undefined8 *)(puVar2 + -0xe8) = *(undefined8 *)(lVar9 + 0x38);
        *(undefined8 *)(puVar2 + -0xf0) = uVar4;
        *(undefined8 *)(puVar2 + -0xd8) = uVar17;
        *(undefined8 *)(puVar2 + -0xe0) = uVar16;
        lVar8 = *(long *)(lVar9 + 0x50);
        iVar12 = *(int *)(lVar9 + 0x58);
        iVar3 = *(int *)(lVar9 + 0x5c);
        unaff_x23 = *(long *)(lVar9 + 0x60);
        unaff_x24 = *(long *)(lVar9 + 0x68);
        uVar4 = *(undefined8 *)(lVar9 + 0x70);
        *(undefined8 *)(puVar2 + -0xf8) = *(undefined8 *)(lVar9 + 0x78);
        *(undefined8 *)(puVar2 + -0x100) = uVar4;
        if (iVar3 == iVar12) {
LAB_0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
          if (iVar3 == 0) {
            return;
          }
          if (lVar8 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar8,iVar12 == 2,0);
            return;
          }
        }
        else if (iVar12 == 2) {
          if (iVar3 == 0) {
            if (unaff_x24 == 0) goto LAB_0150c7d4;
            uVar16 = *(undefined8 *)(lVar9 + 0x38);
            uVar4 = *(undefined8 *)(lVar9 + 0x30);
            uVar18 = *(undefined8 *)(lVar9 + 0x48);
            uVar17 = *(undefined8 *)(lVar9 + 0x40);
            *(undefined8 *)(puVar2 + -0x118) = uVar16;
            *(undefined8 *)(puVar2 + -0x120) = uVar4;
            *(undefined8 *)(puVar2 + -0x108) = uVar18;
            *(undefined8 *)(puVar2 + -0x110) = uVar17;
            uVar20 = *(undefined8 *)(lVar9 + 0x78);
            uVar19 = *(undefined8 *)(lVar9 + 0x70);
            *(undefined8 *)(puVar2 + -0x128) = uVar20;
            *(undefined8 *)(puVar2 + -0x130) = uVar19;
            *(undefined8 *)(puVar2 + -200) = unaff_x26;
            *(long *)(puVar2 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar2 + -0xb0) = uVar16;
            *(undefined8 *)(puVar2 + -0xb8) = uVar4;
            *(undefined8 *)(puVar2 + -0xa0) = uVar18;
            *(undefined8 *)(puVar2 + -0xa8) = uVar17;
            *(long *)(puVar2 + -0x98) = lVar8;
            *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8620;
            *(long *)(puVar2 + -0x88) = unaff_x23;
            *(long *)(puVar2 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x70) = uVar20;
            *(undefined8 *)(puVar2 + -0x78) = uVar19;
            lVar9 = unaff_x24;
LAB_0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar9,puVar2 + -200,uRam0000000003d2a408);
            iVar12 = 1;
          }
          else {
            iVar12 = 2;
          }
LAB_0150c72c:
          lVar9 = *(long *)(lVar7 + 0x70);
          if (lVar9 != 0) {
            if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_0150c7d8;
            lVar9 = lVar9 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar9 + 0x20) = unaff_x26;
            *(long *)(lVar9 + 0x28) = unaff_x22;
            uVar4 = *(undefined8 *)(puVar2 + -0xf0);
            uVar17 = *(undefined8 *)(puVar2 + -0xd8);
            uVar16 = *(undefined8 *)(puVar2 + -0xe0);
            *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)(puVar2 + -0xe8);
            *(undefined8 *)(lVar9 + 0x30) = uVar4;
            *(undefined8 *)(lVar9 + 0x48) = uVar17;
            *(undefined8 *)(lVar9 + 0x40) = uVar16;
            *(long *)(lVar9 + 0x50) = lVar8;
            *(int *)(lVar9 + 0x58) = iVar12;
            *(int *)(lVar9 + 0x5c) = iVar3;
            *(long *)(lVar9 + 0x60) = unaff_x23;
            *(long *)(lVar9 + 0x68) = unaff_x24;
            uVar4 = *(undefined8 *)(puVar2 + -0x100);
            *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(puVar2 + -0xf8);
            *(undefined8 *)(lVar9 + 0x70) = uVar4;
            goto LAB_0150c768;
          }
        }
        else {
          if (iVar12 != 0) goto LAB_0150c72c;
          if (iVar3 != 2) {
            iVar12 = 0;
            goto LAB_0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar9 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar2 + -200) = unaff_x26;
            *(long *)(puVar2 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0xe8);
            *(undefined8 *)(puVar2 + -0xb8) = *(undefined8 *)(puVar2 + -0xf0);
            *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xd8);
            *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0xe0);
            *(long *)(puVar2 + -0x98) = lVar8;
            *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8628;
            *(long *)(puVar2 + -0x88) = unaff_x23;
            *(long *)(puVar2 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0xf8);
            *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x100);
            lVar9 = unaff_x23;
            goto LAB_0150c724;
          }
        }
LAB_0150c7d4:
        func_0x00f78af4();
LAB_0150c7d8:
        uVar4 = func_0x00f78b24();
        auVar22 = func_0x00f78ac0(uVar4,0);
        lVar9 = auVar22._8_8_;
        *(undefined8 *)(puVar2 + -0x180) = unaff_x26;
        *(long *)(puVar2 + -0x178) = unaff_x25;
        *(long *)(puVar2 + -0x170) = unaff_x24;
        *(long *)(puVar2 + -0x168) = unaff_x23;
        *(long *)(puVar2 + -0x160) = unaff_x22;
        *(long *)(puVar2 + -0x158) = lVar7;
        *(ulong *)(puVar2 + -0x150) = uVar5;
        *(long *)(puVar2 + -0x148) = lVar8;
        *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0x10;
        *(code **)(puVar2 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar4 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x1c),
                                *(undefined4 *)(lVar9 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar9 + 0x10),0,0);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,10,uRam0000000003d5e7a8);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar4,*(undefined8 *)(lVar9 + 0x58),uRam0000000003d5e6e0);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar4,1,uRam0000000003d5e888);
        lVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar4,auVar22._0_8_,uRam0000000003d5e850);
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar9 + 0x10);
        }
        return;
      }
    }
    uVar4 = func_0x00f78b24();
    auVar22 = func_0x00f78ac0(uVar4,0);
    puVar14 = puVar2 + -0x30;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar8 = *(long *)(auVar22._0_8_ + 0x28);
    auVar21._8_8_ = auVar22._8_8_;
    auVar21._0_8_ = lVar8;
    if (lVar8 == 0) {
      pcVar15 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar21 = func_0x00f78af4();
      puVar2 = puVar2 + -0x30;
    }
    else {
      puVar14 = *(undefined1 **)(puVar2 + -0x30);
      pcVar15 = *(code **)(puVar2 + -0x28);
      puVar2 = puVar2 + -0x20;
    }
    *(long *)(puVar2 + -0x20) = lVar7;
    *(ulong *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar14;
    *(code **)(puVar2 + -8) = pcVar15;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar21._0_8_,4,0,auVar21._8_8_);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar21._0_8_,5,0,auVar21._8_8_);
    uVar5 = 7;
    param_3 = 0;
    pppuVar13 = *(undefined8 ****)(puVar2 + -0x10);
    pcVar15 = *(code **)(puVar2 + -8);
    unaff_x20 = *(undefined8 *)(puVar2 + -0x20);
    unaff_x19 = *(ulong *)(puVar2 + -0x18);
  } while( true );
}



// ============================================================
// RVA: 0x150b504 | Atlas.UI.TopBarManager.ButtonPressed
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_TopBarManager__ButtonPressed
               (long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar7;
  undefined8 uVar6;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar12;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar13;
  code *unaff_x30;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  
  puVar2 = &stack0xffffffffffffffe0;
  puVar13 = &stack0xfffffffffffffff0;
  lVar8 = *(long *)(param_1 + 0x30);
  uVar5 = unaff_x19;
  lVar4 = unaff_x20;
  if (lVar8 == 0) {
LAB_0150b5a8:
    func_0x00f78af4();
    param_2 = uVar5;
    unaff_x20 = lVar4;
  }
  else {
    uVar7 = (uint)param_2;
    if (uVar7 < *(uint *)(lVar8 + 0x18)) {
      lVar4 = *(long *)(lVar8 + (long)(int)uVar7 * 8 + 0x20);
      if (lVar4 == 0) {
        if (8 < uVar7) {
          return;
        }
        uVar10 = 0x143;
LAB_0150b574:
        if ((1 << (ulong)(uVar7 & 0x1f) & uVar10) == 0) {
          return;
        }
      }
      else {
        uVar5 = /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar4,0);
        if ((uVar7 != 0) || ((uVar5 & 1) == 0)) {
          if (8 < uVar7) {
            return;
          }
          uVar10 = 0x142;
          goto LAB_0150b574;
        }
      }
      auVar21._8_4_ = uVar7;
      auVar21._0_8_ = *(long *)(param_1 + 0x28);
      uVar5 = param_2;
      lVar4 = param_1;
      if (*(long *)(param_1 + 0x28) != 0) {
        param_3 = 0;
        param_4 = 1;
        puVar2 = (undefined1 *)register0x00000008;
        puVar13 = unaff_x29;
        goto code_r0x0150b5b8;
      }
      goto LAB_0150b5a8;
    }
  }
  unaff_x19 = param_2;
  uVar6 = func_0x00f78b24();
  unaff_x30 = Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar21 = func_0x00f78ac0(uVar6,0);
code_r0x0150b5b8:
  auVar20._8_8_ = param_4;
  auVar20._0_8_ = auVar21._0_8_;
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = auVar21._0_8_;
  if (auVar21._8_4_ < 9) {
    uVar5 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar21._8_4_ * 4);
    auVar20 = auVar1;
  }
  else {
    uVar5 = 0xffffffff;
  }
  do {
    lVar4 = auVar20._0_8_;
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(ulong *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar13;
    *(code **)(puVar2 + -8) = unaff_x30;
    uVar7 = (uint)uVar5;
    if (uVar7 == 0xffffffff) {
      return;
    }
    lVar8 = *(long *)(lVar4 + 0x70);
    if (lVar8 == 0) {
      func_0x00f78af4();
    }
    else {
      unaff_x19 = uVar5;
      if (uVar7 < *(uint *)(lVar8 + 0x18)) {
        uVar11 = 2;
        if ((int)param_3 == 0) {
          uVar11 = 0;
        }
        *(undefined4 *)(lVar8 + (long)(int)uVar7 * 0x60 + 0x5c) = uVar11;
        if ((auVar20._8_8_ & 1) == 0) {
          Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar4,uVar5);
        }
        *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
        *(long *)(puVar2 + -0x48) = unaff_x25;
        *(long *)(puVar2 + -0x40) = unaff_x24;
        *(long *)(puVar2 + -0x38) = unaff_x23;
        *(long *)(puVar2 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        lVar8 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar9 = *(long *)(lVar4 + 0x70);
        if (lVar9 == 0) goto LAB_0150c7d4;
        if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_0150c7d8;
        unaff_x25 = (long)(int)uVar7;
        lVar9 = lVar9 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar9 + 0x20);
        unaff_x22 = *(long *)(lVar9 + 0x28);
        uVar6 = *(undefined8 *)(lVar9 + 0x30);
        uVar16 = *(undefined8 *)(lVar9 + 0x48);
        uVar15 = *(undefined8 *)(lVar9 + 0x40);
        *(undefined8 *)(puVar2 + -0xe8) = *(undefined8 *)(lVar9 + 0x38);
        *(undefined8 *)(puVar2 + -0xf0) = uVar6;
        *(undefined8 *)(puVar2 + -0xd8) = uVar16;
        *(undefined8 *)(puVar2 + -0xe0) = uVar15;
        lVar8 = *(long *)(lVar9 + 0x50);
        iVar12 = *(int *)(lVar9 + 0x58);
        iVar3 = *(int *)(lVar9 + 0x5c);
        unaff_x23 = *(long *)(lVar9 + 0x60);
        unaff_x24 = *(long *)(lVar9 + 0x68);
        uVar6 = *(undefined8 *)(lVar9 + 0x70);
        *(undefined8 *)(puVar2 + -0xf8) = *(undefined8 *)(lVar9 + 0x78);
        *(undefined8 *)(puVar2 + -0x100) = uVar6;
        if (iVar3 == iVar12) {
LAB_0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
          if (iVar3 == 0) {
            return;
          }
          if (lVar8 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar8,iVar12 == 2,0);
            return;
          }
        }
        else if (iVar12 == 2) {
          if (iVar3 == 0) {
            if (unaff_x24 == 0) goto LAB_0150c7d4;
            uVar15 = *(undefined8 *)(lVar9 + 0x38);
            uVar6 = *(undefined8 *)(lVar9 + 0x30);
            uVar17 = *(undefined8 *)(lVar9 + 0x48);
            uVar16 = *(undefined8 *)(lVar9 + 0x40);
            *(undefined8 *)(puVar2 + -0x118) = uVar15;
            *(undefined8 *)(puVar2 + -0x120) = uVar6;
            *(undefined8 *)(puVar2 + -0x108) = uVar17;
            *(undefined8 *)(puVar2 + -0x110) = uVar16;
            uVar19 = *(undefined8 *)(lVar9 + 0x78);
            uVar18 = *(undefined8 *)(lVar9 + 0x70);
            *(undefined8 *)(puVar2 + -0x128) = uVar19;
            *(undefined8 *)(puVar2 + -0x130) = uVar18;
            *(undefined8 *)(puVar2 + -200) = unaff_x26;
            *(long *)(puVar2 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar2 + -0xb0) = uVar15;
            *(undefined8 *)(puVar2 + -0xb8) = uVar6;
            *(undefined8 *)(puVar2 + -0xa0) = uVar17;
            *(undefined8 *)(puVar2 + -0xa8) = uVar16;
            *(long *)(puVar2 + -0x98) = lVar8;
            *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8620;
            *(long *)(puVar2 + -0x88) = unaff_x23;
            *(long *)(puVar2 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x70) = uVar19;
            *(undefined8 *)(puVar2 + -0x78) = uVar18;
            lVar9 = unaff_x24;
LAB_0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar9,puVar2 + -200,uRam0000000003d2a408);
            iVar12 = 1;
          }
          else {
            iVar12 = 2;
          }
LAB_0150c72c:
          lVar9 = *(long *)(lVar4 + 0x70);
          if (lVar9 != 0) {
            if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_0150c7d8;
            lVar9 = lVar9 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar9 + 0x20) = unaff_x26;
            *(long *)(lVar9 + 0x28) = unaff_x22;
            uVar6 = *(undefined8 *)(puVar2 + -0xf0);
            uVar16 = *(undefined8 *)(puVar2 + -0xd8);
            uVar15 = *(undefined8 *)(puVar2 + -0xe0);
            *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)(puVar2 + -0xe8);
            *(undefined8 *)(lVar9 + 0x30) = uVar6;
            *(undefined8 *)(lVar9 + 0x48) = uVar16;
            *(undefined8 *)(lVar9 + 0x40) = uVar15;
            *(long *)(lVar9 + 0x50) = lVar8;
            *(int *)(lVar9 + 0x58) = iVar12;
            *(int *)(lVar9 + 0x5c) = iVar3;
            *(long *)(lVar9 + 0x60) = unaff_x23;
            *(long *)(lVar9 + 0x68) = unaff_x24;
            uVar6 = *(undefined8 *)(puVar2 + -0x100);
            *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(puVar2 + -0xf8);
            *(undefined8 *)(lVar9 + 0x70) = uVar6;
            goto LAB_0150c768;
          }
        }
        else {
          if (iVar12 != 0) goto LAB_0150c72c;
          if (iVar3 != 2) {
            iVar12 = 0;
            goto LAB_0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar9 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar2 + -200) = unaff_x26;
            *(long *)(puVar2 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0xe8);
            *(undefined8 *)(puVar2 + -0xb8) = *(undefined8 *)(puVar2 + -0xf0);
            *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xd8);
            *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0xe0);
            *(long *)(puVar2 + -0x98) = lVar8;
            *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8628;
            *(long *)(puVar2 + -0x88) = unaff_x23;
            *(long *)(puVar2 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0xf8);
            *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x100);
            lVar9 = unaff_x23;
            goto LAB_0150c724;
          }
        }
LAB_0150c7d4:
        func_0x00f78af4();
LAB_0150c7d8:
        uVar6 = func_0x00f78b24();
        auVar20 = func_0x00f78ac0(uVar6,0);
        lVar9 = auVar20._8_8_;
        *(undefined8 *)(puVar2 + -0x180) = unaff_x26;
        *(long *)(puVar2 + -0x178) = unaff_x25;
        *(long *)(puVar2 + -0x170) = unaff_x24;
        *(long *)(puVar2 + -0x168) = unaff_x23;
        *(long *)(puVar2 + -0x160) = unaff_x22;
        *(long *)(puVar2 + -0x158) = lVar4;
        *(ulong *)(puVar2 + -0x150) = uVar5;
        *(long *)(puVar2 + -0x148) = lVar8;
        *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0x10;
        *(code **)(puVar2 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar6 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x1c),
                                *(undefined4 *)(lVar9 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar9 + 0x10),0,0);
        uVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar6,10,uRam0000000003d5e7a8);
        uVar6 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar6,*(undefined8 *)(lVar9 + 0x58),uRam0000000003d5e6e0);
        uVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar6,1,uRam0000000003d5e888);
        lVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar6,auVar20._0_8_,uRam0000000003d5e850);
        if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar9 + 0x10);
        }
        return;
      }
    }
    uVar6 = func_0x00f78b24();
    auVar20 = func_0x00f78ac0(uVar6,0);
    puVar13 = puVar2 + -0x30;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar8 = *(long *)(auVar20._0_8_ + 0x28);
    auVar20._8_8_ = auVar20._8_8_;
    auVar20._0_8_ = lVar8;
    if (lVar8 == 0) {
      pcVar14 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar20 = func_0x00f78af4();
      puVar2 = puVar2 + -0x30;
    }
    else {
      puVar13 = *(undefined1 **)(puVar2 + -0x30);
      pcVar14 = *(code **)(puVar2 + -0x28);
      puVar2 = puVar2 + -0x20;
    }
    *(long *)(puVar2 + -0x20) = lVar4;
    *(ulong *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar13;
    *(code **)(puVar2 + -8) = pcVar14;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar20._0_8_,4,0,auVar20._8_8_);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar20._0_8_,5,0,auVar20._8_8_);
    uVar5 = 7;
    param_3 = 0;
    puVar13 = *(undefined1 **)(puVar2 + -0x10);
    unaff_x30 = *(code **)(puVar2 + -8);
    unaff_x20 = *(long *)(puVar2 + -0x20);
    unaff_x19 = *(ulong *)(puVar2 + -0x18);
  } while( true );
}



// ============================================================
// RVA: 0x150b5d8 | Atlas.UI.TopBarManager.OnStartBeforeEnterScreen
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0150bcb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_TopBarManager__OnStartBeforeEnterScreen(ulong param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  int extraout_w1;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 *puVar19;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar20;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined1 *puVar21;
  undefined8 unaff_x30;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  
  uVar11 = param_1;
  if ((bRam0000000003eb4d4d & 1) == 0) {
    func_0x00f78a20(0x3d1fee0);
    uVar11 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d4d = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    if (3 < param_3) {
      return uVar11;
    }
    iVar20 = 4;
  }
  else {
    iVar20 = *(int *)(*(long *)(param_1 + 0x28) + 0x48);
    if (iVar20 <= param_3) {
      return uVar11;
    }
  }
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(param_1 + 0x18),iVar20,1,0), param_2 == 0)) goto code_r0x0150b71c;
  plVar16 = *(long **)(param_2 + 0x28);
  if (plVar16 == (long *)0x0) {
code_r0x0150b684:
    plVar16 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar16 + 300) < *(byte *)(/*Atlas.UI.Screens.AtlasUIScreenBehaviour_TypeInfo*/ lRam0000000003d1fee0 + 300)) goto code_r0x0150b684;
    if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(/*Atlas.UI.Screens.AtlasUIScreenBehaviour_TypeInfo*/ lRam0000000003d1fee0 + 300) * 8 + -8)
        != /*Atlas.UI.Screens.AtlasUIScreenBehaviour_TypeInfo*/ lRam0000000003d1fee0) {
      plVar16 = (long *)0x0;
    }
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar16,0,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar12 = *(long *)(param_1 + 0x28);
  if (lVar12 == 0) {
    if ((plVar16 != (long *)0x0) && (lVar12 = *(long *)(param_1 + 0x38), lVar12 != 0)) {
      lVar17 = plVar16[8];
      lVar18 = plVar16[9];
      *(int *)(lVar12 + 0x10) = param_3;
      *(long *)(lVar12 + 0x18) = lVar17;
      *(long *)(lVar12 + 0x20) = lVar18;
      return 0;
    }
  }
  else if (plVar16 != (long *)0x0) {
    lVar17 = plVar16[8];
    lVar18 = plVar16[9];
    lVar8 = lVar12;
    if ((bRam0000000003eb4d5e & 1) == 0) {
      lVar8 = func_0x00f78a20(0x3d3dca0);
      bRam0000000003eb4d5e = 1;
    }
    uVar11 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(lVar8,0,lVar17);
    if (((uVar11 & 1) == 0) &&
       (uVar11 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar11,0,lVar18),
       (uVar11 & 1) == 0)) {
      uVar11 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar12,0,0,1);
    }
    uVar11 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar11,1,lVar17);
    if (((uVar11 & 1) == 0) &&
       (uVar11 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar11,1,lVar18),
       (uVar11 & 1) == 0)) {
      uVar11 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar12,1,0,1);
    }
    uVar11 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar11,2,lVar17);
    if (((uVar11 & 1) == 0) &&
       (uVar11 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar11,2,lVar18),
       (uVar11 & 1) == 0)) {
      uVar11 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar12,2,0,1);
    }
    uVar11 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar11,3,lVar17);
    if (((uVar11 & 1) == 0) &&
       (uVar11 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar11,3,lVar18),
       (uVar11 & 1) == 0)) {
      uVar11 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar12,3,0,1);
    }
    uVar11 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar11,4,lVar17);
    if (((uVar11 & 1) == 0) &&
       (uVar11 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar11,4,lVar18),
       (uVar11 & 1) == 0)) {
      uVar11 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar12,4,0,1);
    }
    uVar11 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar11,5,lVar17);
    if (((uVar11 & 1) == 0) &&
       (uVar11 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar11,5,lVar18),
       (uVar11 & 1) == 0)) {
      uVar11 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar12,5,0,1);
    }
    lVar8 = lVar17;
    uVar11 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar11,8);
    if (((uVar11 & 1) == 0) &&
       (lVar8 = lVar18, uVar11 = Atlas_UI_Screens_TopBarScreen__IsElementTypeListed(uVar11,8),
       (uVar11 & 1) == 0)) {
      lVar8 = 0;
      Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar12,8,0,1);
    }
    uVar13 = unaff_x26;
    if (lVar17 != 0) {
      uVar13 = 0x3d3dca0;
      uVar2 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar17,0,lRam0000000003d3dca0);
      lVar8 = lRam0000000003d3dca0;
      uVar3 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar17,1);
      if (lVar18 != 0) {
        uVar11 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar18,0,lRam0000000003d3dca0);
        uVar9 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar18,1,lRam0000000003d3dca0);
        uVar4 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar17,6,lRam0000000003d3dca0);
        uVar5 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar18,6,lRam0000000003d3dca0);
        uVar6 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar17,8,lRam0000000003d3dca0);
        uVar10 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar18,8,lRam0000000003d3dca0);
        uVar7 = (uint)uVar10;
        if (((((uVar2 | uVar3) & 1) == 0) && ((uVar11 & 1) == 0)) && ((uVar9 & 1) == 0)) {
          uVar10 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar12,6,0,1);
        }
        if (((uVar4 | uVar5 | uVar6 | uVar7) & 1) != 0) {
          return uVar10;
        }
        auVar27._8_8_ = 1;
        auVar27._0_8_ = lVar12;
        do {
          lVar12 = auVar27._0_8_;
          *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
          *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          lVar17 = *(long *)(lVar12 + 0x70);
          if (lVar17 == 0) {
            func_0x00f78af4();
          }
          else {
            unaff_x19 = 7;
            if (7 < *(uint *)(lVar17 + 0x18)) goto code_r0x0150bc78;
          }
          uVar13 = func_0x00f78b24();
          auVar27 = func_0x00f78ac0(uVar13,0);
          puVar21 = (undefined1 *)((long)register0x00000008 + -0x30);
          *(undefined1 **)((long)register0x00000008 + -0x30) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined **)((long)register0x00000008 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel
          ;
          lVar17 = *(long *)(auVar27._0_8_ + 0x28);
          auVar27._8_8_ = auVar27._8_8_;
          auVar27._0_8_ = lVar17;
          if (lVar17 == 0) {
            pcVar22 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
            auVar27 = func_0x00f78af4();
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
          }
          else {
            puVar21 = *(undefined1 **)((long)register0x00000008 + -0x30);
            pcVar22 = *(code **)((long)register0x00000008 + -0x28);
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
          }
          *(long *)((long)register0x00000008 + -0x20) = lVar12;
          *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = puVar21;
          *(code **)((long)register0x00000008 + -8) = pcVar22;
          Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar27._0_8_,4,0,auVar27._8_8_);
          Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar27._0_8_,5,0,auVar27._8_8_);
          unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x10);
          unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
          unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
          unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
        } while( true );
      }
    }
    auVar27 = func_0x00f78af4();
    lVar12 = auVar27._0_8_;
    puVar19 = (undefined8 *)0x3eb4000;
    uStack_b0 = uVar13;
    if ((bRam0000000003eb4d5d & 1) == 0) {
      func_0x00f78a20(0x3d337e0);
      func_0x00f78a20(0x3d337e8);
      func_0x00f78a20(0x3d337f0);
      func_0x00f78a20(0x3d3dca0);
      func_0x00f78a20(0x3d3dca8);
      bRam0000000003eb4d5d = 1;
    }
    if (auVar27._8_8_ == 0) goto LAB_0150b47c;
    puVar19 = (undefined8 *)0x3d3dca0;
    unaff_x23 = (undefined8 *)0x3d337e0;
    /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$GetEnumerator*/ func_0x023df1f8(&uStack_e8,auVar27._8_8_,uRam0000000003d3dca8);
    uStack_c8 = uStack_e0;
    uStack_d0 = uStack_e8;
    uStack_c0 = uStack_d8;
    while (uVar11 = /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$MoveNext*/ func_0x01f694e8(&uStack_d0,uRam0000000003d337e8), (uVar11 & 1) != 0) {
      if (lVar8 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x150b47c);
        (*pcVar22)();
      }
      uVar2 = (uint)uStack_c0;
      lVar17 = (long)(int)(uint)uStack_c0;
      uVar11 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar8,lVar17,lRam0000000003d3dca0);
      if ((uVar11 & 1) == 0) {
        if (uVar2 < 9) {
          uVar14 = *(undefined4 *)(&UNK_033f869c + lVar17 * 4);
        }
        else {
          uVar14 = 0xffffffff;
        }
        Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar12,uVar14,1,1);
      }
    }
    /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_d0,uRam0000000003d337e0);
    do {
      if (lVar8 != 0) {
        uVar11 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar8,0,*puVar19);
        if ((uVar11 & 1) == 0) {
          uVar13 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar8,1,*puVar19);
        }
        else {
          uVar13 = 1;
        }
        uVar11 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar8,6,*puVar19);
        if ((uVar11 & 1) == 0) {
          uVar15 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar8,8,*puVar19);
        }
        else {
          uVar15 = 1;
        }
        if (lVar12 != 0) {
          uVar11 = Atlas_UI_Screens_TopBarScreen__ShowBackingPanelsIfRequired(lVar12,uVar13,uVar15);
          return uVar11;
        }
      }
LAB_0150b47c:
      func_0x00f78af4();
      if (extraout_w1 != 1) goto code_r0x0150b4bc;
      plVar16 = (long *)___cxa_begin_catch();
      lVar17 = *plVar16;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_d0,*unaff_x23);
    } while (lVar17 == 0);
    func_0x00f78ac0(lVar17,0);
code_r0x0150b4bc:
    auVar27 = __Unwind_Resume();
    *(long *)(auVar27._0_8_ + 0x28) = auVar27._8_8_;
    return auVar27._0_8_;
  }
code_r0x0150b71c:
  lVar12 = func_0x00f78af4();
  if (*(long *)(lVar12 + 0x28) != 0) {
    return (ulong)*(uint *)(*(long *)(lVar12 + 0x28) + 0x48);
  }
  return 4;
code_r0x0150bc78:
  *(undefined4 *)(lVar17 + 0x2fc) = 0;
  if ((auVar27._8_8_ & 1) == 0) {
    Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar12,7);
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar17 = 0x3eb4000;
  if ((bRam0000000003eb4d5b & 1) == 0) {
    func_0x00f78a20(0x3d2a408);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d5b = 1;
  }
  lVar18 = *(long *)(lVar12 + 0x70);
  if (lVar18 == 0) goto LAB_0150c7d4;
  if (*(uint *)(lVar18 + 0x18) < 8) goto LAB_0150c7d8;
  unaff_x25 = 7;
  unaff_x26 = *(undefined8 *)(lVar18 + 0x2c0);
  unaff_x22 = *(long *)(lVar18 + 0x2c8);
  uVar13 = *(undefined8 *)(lVar18 + 0x2d0);
  uVar23 = *(undefined8 *)(lVar18 + 0x2e8);
  uVar15 = *(undefined8 *)(lVar18 + 0x2e0);
  *(undefined8 *)((long)register0x00000008 + -0xe8) = *(undefined8 *)(lVar18 + 0x2d8);
  *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar13;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar23;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar15;
  lVar17 = *(long *)(lVar18 + 0x2f0);
  iVar20 = *(int *)(lVar18 + 0x2f8);
  iVar1 = *(int *)(lVar18 + 0x2fc);
  unaff_x23 = *(undefined8 **)(lVar18 + 0x300);
  unaff_x24 = *(undefined8 **)(lVar18 + 0x308);
  uVar13 = *(undefined8 *)(lVar18 + 0x310);
  *(undefined8 *)((long)register0x00000008 + -0xf8) = *(undefined8 *)(lVar18 + 0x318);
  *(undefined8 *)((long)register0x00000008 + -0x100) = uVar13;
  if (iVar1 == iVar20) {
LAB_0150c768:
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar17,0,0);
    if ((int)uVar11 == 0) {
      return uVar11;
    }
    if (lVar17 != 0) {
      uVar11 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar17,iVar20 == 2,0);
      return uVar11;
    }
  }
  else if (iVar20 == 2) {
    if (iVar1 == 0) {
      if (unaff_x24 == (undefined8 *)0x0) goto LAB_0150c7d4;
      uVar15 = *(undefined8 *)(lVar18 + 0x2d8);
      uVar13 = *(undefined8 *)(lVar18 + 0x2d0);
      uVar24 = *(undefined8 *)(lVar18 + 0x2e8);
      uVar23 = *(undefined8 *)(lVar18 + 0x2e0);
      *(undefined8 *)((long)register0x00000008 + -0x118) = uVar15;
      *(undefined8 *)((long)register0x00000008 + -0x120) = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0x108) = uVar24;
      *(undefined8 *)((long)register0x00000008 + -0x110) = uVar23;
      uVar26 = *(undefined8 *)(lVar18 + 0x318);
      uVar25 = *(undefined8 *)(lVar18 + 0x310);
      *(undefined8 *)((long)register0x00000008 + -0x128) = uVar26;
      *(undefined8 *)((long)register0x00000008 + -0x130) = uVar25;
      *(undefined8 *)((long)register0x00000008 + -200) = unaff_x26;
      *(long *)((long)register0x00000008 + -0xc0) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar15;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar24;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar23;
      *(long *)((long)register0x00000008 + -0x98) = lVar17;
      *(undefined8 *)((long)register0x00000008 + -0x90) = _UNK_033f8620;
      *(undefined8 **)((long)register0x00000008 + -0x88) = unaff_x23;
      *(undefined8 **)((long)register0x00000008 + -0x80) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar26;
      *(undefined8 *)((long)register0x00000008 + -0x78) = uVar25;
      puVar19 = unaff_x24;
LAB_0150c724:
      /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(puVar19,(undefined1 *)((long)register0x00000008 + -200),uRam0000000003d2a408);
      iVar20 = 1;
    }
    else {
      iVar20 = 2;
    }
LAB_0150c72c:
    lVar18 = *(long *)(lVar12 + 0x70);
    if (lVar18 != 0) {
      if (*(uint *)(lVar18 + 0x18) < 8) goto LAB_0150c7d8;
      *(undefined8 *)(lVar18 + 0x2c0) = unaff_x26;
      *(long *)(lVar18 + 0x2c8) = unaff_x22;
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0xf0);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0xd8);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0xe0);
      *(undefined8 *)(lVar18 + 0x2d8) = *(undefined8 *)((long)register0x00000008 + -0xe8);
      *(undefined8 *)(lVar18 + 0x2d0) = uVar13;
      *(undefined8 *)(lVar18 + 0x2e8) = uVar23;
      *(undefined8 *)(lVar18 + 0x2e0) = uVar15;
      *(long *)(lVar18 + 0x2f0) = lVar17;
      *(int *)(lVar18 + 0x2f8) = iVar20;
      *(int *)(lVar18 + 0x2fc) = iVar1;
      *(undefined8 **)(lVar18 + 0x300) = unaff_x23;
      *(undefined8 **)(lVar18 + 0x308) = unaff_x24;
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x100);
      *(undefined8 *)(lVar18 + 0x318) = *(undefined8 *)((long)register0x00000008 + -0xf8);
      *(undefined8 *)(lVar18 + 0x310) = uVar13;
      goto LAB_0150c768;
    }
  }
  else {
    if (iVar20 != 0) goto LAB_0150c72c;
    if (iVar1 != 2) {
      iVar20 = 0;
      goto LAB_0150c72c;
    }
    if (((unaff_x22 != 0) && (lVar18 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar18 != 0)) &&
       (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar18,1,0), unaff_x23 != (undefined8 *)0x0)) {
      *(undefined8 *)((long)register0x00000008 + -200) = unaff_x26;
      *(long *)((long)register0x00000008 + -0xc0) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)((long)register0x00000008 + -0xe8);
      *(undefined8 *)((long)register0x00000008 + -0xb8) =
           *(undefined8 *)((long)register0x00000008 + -0xf0);
      *(undefined8 *)((long)register0x00000008 + -0xa0) =
           *(undefined8 *)((long)register0x00000008 + -0xd8);
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0xe0);
      *(long *)((long)register0x00000008 + -0x98) = lVar17;
      *(undefined8 *)((long)register0x00000008 + -0x90) = _UNK_033f8628;
      *(undefined8 **)((long)register0x00000008 + -0x88) = unaff_x23;
      *(undefined8 **)((long)register0x00000008 + -0x80) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)((long)register0x00000008 + -0xf8);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x100);
      puVar19 = unaff_x23;
      goto LAB_0150c724;
    }
  }
LAB_0150c7d4:
  func_0x00f78af4();
LAB_0150c7d8:
  uVar13 = func_0x00f78b24();
  auVar27 = func_0x00f78ac0(uVar13,0);
  lVar18 = auVar27._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x180) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x178) = unaff_x25;
  *(undefined8 **)((long)register0x00000008 + -0x170) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x168) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x160) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x158) = lVar12;
  *(undefined8 *)((long)register0x00000008 + -0x150) = 7;
  *(long *)((long)register0x00000008 + -0x148) = lVar17;
  *(undefined1 **)((long)register0x00000008 + -0x140) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
  if ((bRam0000000003eb4d55 & 1) == 0) {
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e7d0);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d5e888);
    bRam0000000003eb4d55 = 1;
  }
  uVar13 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar18 + 0x18),*(undefined4 *)(lVar18 + 0x1c),
                           *(undefined4 *)(lVar18 + 0x20),_UNK_033f8144,
                           *(undefined8 *)(lVar18 + 0x10),0,0);
  uVar13 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar13,10,uRam0000000003d5e7a8);
  uVar13 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar13,*(undefined8 *)(lVar18 + 0x58),uRam0000000003d5e6e0);
  uVar13 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar13,1,uRam0000000003d5e888);
  uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar13,auVar27._0_8_,uRam0000000003d5e850);
  if ((uVar11 != 0) && (*(char *)(uVar11 + 0xe8) != '\0')) {
    *(undefined8 *)(uVar11 + 0x30) = *(undefined8 *)(lVar18 + 0x10);
  }
  return uVar11;
}



// ============================================================
// RVA: 0x150b720 | Atlas.UI.TopBarManager.get_TopBarLayer
// ============================================================

undefined4 Atlas_UI_TopBarManager__get_TopBarLayer(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x48);
  }
  return 4;
}



// ============================================================
// RVA: 0x150b738 | Atlas.UI.TopBarManager.RequestDeferredTopBarState
// ============================================================

void Atlas_UI_TopBarManager__RequestDeferredTopBarState
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  undefined4 uVar6;
  int extraout_w1;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined1 auVar13 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar9 = *(long *)(param_1 + 0x38);
  if (lVar9 != 0) {
    *(undefined4 *)(lVar9 + 0x10) = param_2;
    *(undefined8 *)(lVar9 + 0x18) = param_3;
    *(undefined8 *)(lVar9 + 0x20) = param_4;
    return;
  }
  auVar13 = func_0x00f78af4();
  lVar9 = auVar13._0_8_;
  uVar8 = param_3;
  if ((bRam0000000003eb4d4e & 1) == 0) {
    func_0x00f78a20(0x3d1fee0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d4e = 1;
  }
  if (*(long *)(lVar9 + 0x28) == 0) {
    iVar4 = 4;
  }
  else {
    iVar4 = *(int *)(*(long *)(lVar9 + 0x28) + 0x48);
  }
  if (iVar4 <= (int)param_3) {
    return;
  }
  if (auVar13._8_8_ == 0) goto code_r0x0150b8a4;
  plVar10 = *(long **)(auVar13._8_8_ + 0x28);
  if (plVar10 == (long *)0x0) {
code_r0x0150b7ec:
    plVar10 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.UI.Screens.AtlasUIScreenBehaviour_TypeInfo*/ lRam0000000003d1fee0 + 300)) goto code_r0x0150b7ec;
    if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.UI.Screens.AtlasUIScreenBehaviour_TypeInfo*/ lRam0000000003d1fee0 + 300) * 8 + -8)
        != /*Atlas.UI.Screens.AtlasUIScreenBehaviour_TypeInfo*/ lRam0000000003d1fee0) {
      plVar10 = (long *)0x0;
    }
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = 0;
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar10,0);
  if (iVar4 == 0) {
    return;
  }
  if (*(long *)(lVar9 + 0x38) != 0) {
    if (*(int *)(*(long *)(lVar9 + 0x38) + 0x10) != -1) {
      return;
    }
    if (plVar10 != (long *)0x0) {
      uVar5 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(plVar10[10],0);
      lVar9 = *(long *)(lVar9 + 0x28);
      if ((uVar5 & 1) == 0) {
        if (lVar9 != 0) {
          lVar11 = plVar10[0xb];
          *(long *)(lVar9 + 0x88) = plVar10[10];
          *(long *)(lVar9 + 0x90) = lVar11;
          goto Atlas_UI_Screens_TopBarScreen__ShowButtons;
        }
      }
      else if (lVar9 != 0) {
Atlas_UI_Screens_TopBarScreen__ShowButtons:
        lVar11 = plVar10[8];
        lVar1 = plVar10[9];
        puVar12 = (undefined8 *)0x3eb4000;
        if ((bRam0000000003eb4d5d & 1) == 0) {
          func_0x00f78a20(0x3d337e0);
          func_0x00f78a20(0x3d337e8);
          func_0x00f78a20(0x3d337f0);
          func_0x00f78a20(0x3d3dca0);
          func_0x00f78a20(0x3d3dca8);
          bRam0000000003eb4d5d = 1;
        }
        if (lVar11 == 0) goto LAB_0150b47c;
        puVar12 = (undefined8 *)0x3d3dca0;
        unaff_x23 = (undefined8 *)0x3d337e0;
        /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$GetEnumerator*/ func_0x023df1f8(&uStack_98,lVar11,uRam0000000003d3dca8);
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        uStack_70 = uStack_88;
        while (uVar5 = /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$MoveNext*/ func_0x01f694e8(&uStack_80,uRam0000000003d337e8), (uVar5 & 1) != 0) {
          if (lVar1 == 0) {
            func_0x00f78af4();
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x150b47c);
            (*pcVar3)();
          }
          uVar2 = (uint)uStack_70;
          lVar11 = (long)(int)(uint)uStack_70;
          uVar5 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar1,lVar11,uRam0000000003d3dca0);
          if ((uVar5 & 1) == 0) {
            if (uVar2 < 9) {
              uVar6 = *(undefined4 *)(&UNK_033f869c + lVar11 * 4);
            }
            else {
              uVar6 = 0xffffffff;
            }
            Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar9,uVar6,1,1);
          }
        }
        /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_80,uRam0000000003d337e0);
        do {
          if (lVar1 != 0) {
            uVar5 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar1,0,*puVar12);
            if ((uVar5 & 1) == 0) {
              uVar8 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar1,1,*puVar12);
            }
            else {
              uVar8 = 1;
            }
            uVar5 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar1,6,*puVar12);
            if ((uVar5 & 1) == 0) {
              uVar7 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar1,8,*puVar12);
            }
            else {
              uVar7 = 1;
            }
            if (lVar9 != 0) {
              Atlas_UI_Screens_TopBarScreen__ShowBackingPanelsIfRequired(lVar9,uVar8,uVar7);
              return;
            }
          }
LAB_0150b47c:
          func_0x00f78af4();
          if (extraout_w1 != 1) goto code_r0x0150b4bc;
          plVar10 = (long *)___cxa_begin_catch();
          lVar11 = *plVar10;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_80,*unaff_x23);
        } while (lVar11 == 0);
        func_0x00f78ac0(lVar11,0);
code_r0x0150b4bc:
        auVar13 = __Unwind_Resume();
        *(long *)(auVar13._0_8_ + 0x28) = auVar13._8_8_;
        return;
      }
    }
  }
code_r0x0150b8a4:
  auVar13 = func_0x00f78af4();
  *(long *)(auVar13._0_8_ + 0x88) = auVar13._8_8_;
  *(undefined8 *)(auVar13._0_8_ + 0x90) = uVar8;
  return;
}



// ============================================================
// RVA: 0x150b75c | Atlas.UI.TopBarManager.OnStartEnterScreen
// ============================================================

void Atlas_UI_TopBarManager__OnStartEnterScreen(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  int extraout_w1;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined1 auVar13 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar9 = param_3;
  if ((bRam0000000003eb4d4e & 1) == 0) {
    func_0x00f78a20(0x3d1fee0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d4e = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    iVar4 = 4;
  }
  else {
    iVar4 = *(int *)(*(long *)(param_1 + 0x28) + 0x48);
  }
  if (iVar4 <= (int)param_3) {
    return;
  }
  if (param_2 == 0) goto code_r0x0150b8a4;
  plVar10 = *(long **)(param_2 + 0x28);
  if (plVar10 == (long *)0x0) {
code_r0x0150b7ec:
    plVar10 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.UI.Screens.AtlasUIScreenBehaviour_TypeInfo*/ lRam0000000003d1fee0 + 300)) goto code_r0x0150b7ec;
    if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.UI.Screens.AtlasUIScreenBehaviour_TypeInfo*/ lRam0000000003d1fee0 + 300) * 8 + -8)
        != /*Atlas.UI.Screens.AtlasUIScreenBehaviour_TypeInfo*/ lRam0000000003d1fee0) {
      plVar10 = (long *)0x0;
    }
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = 0;
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar10,0);
  if (iVar4 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x38) + 0x10) != -1) {
      return;
    }
    if (plVar10 != (long *)0x0) {
      uVar5 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(plVar10[10],0);
      lVar6 = *(long *)(param_1 + 0x28);
      if ((uVar5 & 1) == 0) {
        if (lVar6 != 0) {
          lVar11 = plVar10[0xb];
          *(long *)(lVar6 + 0x88) = plVar10[10];
          *(long *)(lVar6 + 0x90) = lVar11;
          goto Atlas_UI_Screens_TopBarScreen__ShowButtons;
        }
      }
      else if (lVar6 != 0) {
Atlas_UI_Screens_TopBarScreen__ShowButtons:
        lVar11 = plVar10[8];
        lVar1 = plVar10[9];
        puVar12 = (undefined8 *)0x3eb4000;
        if ((bRam0000000003eb4d5d & 1) == 0) {
          func_0x00f78a20(0x3d337e0);
          func_0x00f78a20(0x3d337e8);
          func_0x00f78a20(0x3d337f0);
          func_0x00f78a20(0x3d3dca0);
          func_0x00f78a20(0x3d3dca8);
          bRam0000000003eb4d5d = 1;
        }
        if (lVar11 == 0) goto LAB_0150b47c;
        puVar12 = (undefined8 *)0x3d3dca0;
        unaff_x23 = (undefined8 *)0x3d337e0;
        /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$GetEnumerator*/ func_0x023df1f8(&uStack_88,lVar11,uRam0000000003d3dca8);
        uStack_68 = uStack_80;
        uStack_70 = uStack_88;
        uStack_60 = uStack_78;
        while (uVar5 = /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$MoveNext*/ func_0x01f694e8(&uStack_70,uRam0000000003d337e8), (uVar5 & 1) != 0) {
          if (lVar1 == 0) {
            func_0x00f78af4();
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x150b47c);
            (*pcVar3)();
          }
          uVar2 = (uint)uStack_60;
          lVar11 = (long)(int)(uint)uStack_60;
          uVar5 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar1,lVar11,uRam0000000003d3dca0);
          if ((uVar5 & 1) == 0) {
            if (uVar2 < 9) {
              uVar7 = *(undefined4 *)(&UNK_033f869c + lVar11 * 4);
            }
            else {
              uVar7 = 0xffffffff;
            }
            Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar6,uVar7,1,1);
          }
        }
        /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_70,uRam0000000003d337e0);
        do {
          if (lVar1 != 0) {
            uVar5 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar1,0,*puVar12);
            if ((uVar5 & 1) == 0) {
              uVar9 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar1,1,*puVar12);
            }
            else {
              uVar9 = 1;
            }
            uVar5 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar1,6,*puVar12);
            if ((uVar5 & 1) == 0) {
              uVar8 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(lVar1,8,*puVar12);
            }
            else {
              uVar8 = 1;
            }
            if (lVar6 != 0) {
              Atlas_UI_Screens_TopBarScreen__ShowBackingPanelsIfRequired(lVar6,uVar9,uVar8);
              return;
            }
          }
LAB_0150b47c:
          func_0x00f78af4();
          if (extraout_w1 != 1) goto code_r0x0150b4bc;
          plVar10 = (long *)___cxa_begin_catch();
          lVar11 = *plVar10;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_70,*unaff_x23);
        } while (lVar11 == 0);
        func_0x00f78ac0(lVar11,0);
code_r0x0150b4bc:
        auVar13 = __Unwind_Resume();
        *(long *)(auVar13._0_8_ + 0x28) = auVar13._8_8_;
        return;
      }
    }
  }
code_r0x0150b8a4:
  auVar13 = func_0x00f78af4();
  *(long *)(auVar13._0_8_ + 0x88) = auVar13._8_8_;
  *(undefined8 *)(auVar13._0_8_ + 0x90) = uVar9;
  return;
}



// ============================================================
// RVA: 0x150b8b0 | Atlas.UI.TopBarManager.OnFinishEnterScreenEvent
// ============================================================

/* WARNING: Possible PIC construction at 0x0150b944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150b948) */
/* WARNING: Removing unreachable block (ram,0x0150b950) */
/* WARNING: Removing unreachable block (ram,0x0150b968) */
/* WARNING: Removing unreachable block (ram,0x0150b980) */
/* WARNING: Removing unreachable block (ram,0x0150b998) */
/* WARNING: Removing unreachable block (ram,0x0150b9b0) */
/* WARNING: Removing unreachable block (ram,0x0150b9c8) */
/* WARNING: Removing unreachable block (ram,0x0150b9e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_TopBarManager__OnFinishEnterScreenEvent
                 (long *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 extraout_w1;
  long *extraout_x1;
  undefined1 uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  long *unaff_x19;
  ulong unaff_x20;
  uint uVar15;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar16;
  undefined8 unaff_x28;
  undefined8 ******unaff_x29;
  undefined8 ******ppppppuVar17;
  undefined1 *puVar18;
  undefined *unaff_x30;
  code *pcVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined8 *****pppppuStack_40;
  code *pcStack_38;
  undefined8 ****ppppuStack_20;
  undefined *puStack_18;
  
  if (param_1[5] == 0) {
    if (3 < (int)param_3) {
      return param_1;
    }
    uVar6 = 4;
  }
  else {
    uVar6 = *(uint *)(param_1[5] + 0x48);
    if ((int)uVar6 <= (int)param_3) {
      return param_1;
    }
  }
  lVar7 = param_1[3];
  if (lVar7 == 0) {
    unaff_x19 = (long *)func_0x00f78af4();
    puVar3 = &stack0xffffffffffffffd0;
    ppppuStack_20 = (undefined8 ****)&stack0xfffffffffffffff0;
    puStack_18 = &Atlas_UI_TopBarManager__OnStartExitScreen;
    unaff_x29 = (undefined8 ******)&ppppuStack_20;
    if (unaff_x19[5] == 0) {
      if (3 < (int)param_3) {
        return unaff_x19;
      }
      uVar6 = 4;
    }
    else {
      uVar6 = *(uint *)(unaff_x19[5] + 0x48);
      if ((int)uVar6 <= (int)param_3) {
        return unaff_x19;
      }
    }
    lVar7 = unaff_x19[3];
    if (lVar7 == 0) {
      plVar10 = (long *)func_0x00f78af4();
      puVar3 = &stack0xffffffffffffffb0;
      pcStack_38 = (code *)&Atlas_UI_TopBarManager__RequestButtonVisible;
      ppppppuVar17 = &pppppuStack_40;
      pppppuStack_40 = unaff_x29;
      if (plVar10[5] == 0) {
code_r0x0150ba34:
        pcVar19 = Atlas_UI_Screens_TopBarScreen__ShowBackingPanelsIfRequired;
        auVar28 = func_0x00f78af4();
      }
      else {
        Atlas_UI_Screens_TopBarScreen__RequestButtonVisible();
        if (plVar10[5] == 0) goto code_r0x0150ba34;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = plVar10[5];
        param_3 = 0;
        puVar3 = &stack0xffffffffffffffd0;
        plVar10 = unaff_x19;
        ppppppuVar17 = (undefined8 ******)pppppuStack_40;
        pcVar19 = pcStack_38;
      }
      plVar8 = auVar28._0_8_;
      *(long *)(puVar3 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
      *(ulong *)(puVar3 + -0x20) = unaff_x20;
      *(long **)(puVar3 + -0x18) = plVar10;
      *(undefined8 *******)(puVar3 + -0x10) = ppppppuVar17;
      *(code **)(puVar3 + -8) = pcVar19;
      lVar7 = plVar8[0xe];
      uVar12 = param_3;
      if (lVar7 != 0) {
        uVar6 = *(uint *)(lVar7 + 0x18);
        if (uVar6 != 0) {
          plVar10 = plVar8;
          unaff_x20 = param_3;
          if (*(int *)(lVar7 + 0x5c) - 1U < 2) {
            uVar12 = 1;
          }
          else {
            if (uVar6 < 2) goto LAB_0150bb24;
            uVar12 = (ulong)(*(int *)(lVar7 + 0xbc) - 1U < 2);
          }
          if (4 < uVar6) {
            if (*(int *)(lVar7 + 0x1dc) - 1U < 2) {
              uVar15 = 1;
              uVar6 = 1;
            }
            else {
              if (uVar6 < 6) goto LAB_0150bb24;
              bVar5 = *(int *)(lVar7 + 0x23c) - 1U < 2;
              uVar15 = (uint)bVar5;
              uVar6 = (uint)bVar5;
            }
            if (((int)uVar12 != 0) && (uVar6 = uVar15, (auVar28._8_8_ & 1) == 0)) {
              plVar10 = (long *)Atlas_UI_Screens_TopBarScreen__RequestElementVisible
                                          (plVar8,6,uVar12,1);
            }
            if ((uVar6 & ((uint)param_3 ^ 1)) != 1) {
              return plVar10;
            }
            auVar26._8_8_ = 7;
            auVar26._0_8_ = plVar8;
            uVar12 = 1;
            param_4 = 1;
            puVar18 = *(undefined1 **)(puVar3 + -0x10);
            pcVar19 = *(code **)(puVar3 + -8);
            unaff_x20 = *(ulong *)(puVar3 + -0x20);
            lVar7 = *(long *)(puVar3 + -0x18);
            unaff_x22 = *(long *)(puVar3 + -0x30);
            unaff_x21 = *(undefined8 *)(puVar3 + -0x28);
            goto code_r0x0150bc48;
          }
        }
LAB_0150bb24:
        uVar9 = func_0x00f78b24();
        func_0x00f78ac0(uVar9,0);
      }
      auVar29 = func_0x00f78af4();
      puVar2 = puVar3 + -0x40;
      puVar18 = puVar3 + -0x40;
      *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
      *(undefined **)(puVar3 + -0x38) = &Atlas_UI_TopBarManager__GetButtonElementState;
      lVar7 = *(long *)(auVar29._0_8_ + 0x28);
      auVar29._8_4_ = auVar29._8_4_;
      auVar29._0_8_ = lVar7;
      if (lVar7 == 0) {
        pcVar19 = Atlas_UI_Screens_TopBarScreen__GetElementState;
        auVar29 = func_0x00f78af4();
      }
      else {
        puVar2 = puVar3 + -0x30;
        puVar18 = *(undefined1 **)(puVar3 + -0x40);
        pcVar19 = *(code **)(puVar3 + -0x38);
      }
      *(undefined1 **)(puVar2 + -0x10) = puVar18;
      *(code **)(puVar2 + -8) = pcVar19;
      lVar7 = *(long *)(auVar29._0_8_ + 0x70);
      if (auVar29._8_4_ < 9) {
        uVar6 = *(uint *)(&UNK_033f869c + (long)(int)auVar29._8_4_ * 4);
      }
      else {
        uVar6 = 0xffffffff;
      }
      if (lVar7 == 0) {
        func_0x00f78af4();
      }
      else if (uVar6 < *(uint *)(lVar7 + 0x18)) {
        return (long *)(ulong)*(uint *)(lVar7 + (ulong)uVar6 * 0x60 + 0x58);
      }
      uVar9 = func_0x00f78b24();
      plVar8 = (long *)func_0x00f78ac0(uVar9,0);
      *(undefined1 **)(puVar2 + -0x20) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x18) = &Atlas_UI_TopBarManager__SetNextPanelEnabledVisuals;
      if (plVar8[5] != 0) {
        *(undefined1 *)(plVar8[5] + 0x80) = extraout_w1;
        return plVar8;
      }
      lVar7 = func_0x00f78af4();
      puVar3 = puVar2 + -0x40;
      *(ulong *)(puVar2 + -0x40) = unaff_x20;
      *(long **)(puVar2 + -0x38) = plVar10;
      *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x20;
      *(undefined **)(puVar2 + -0x28) = &Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
      puVar18 = puVar2 + -0x30;
      if (*(long *)(lVar7 + 0x28) != 0) {
        uVar12 = 0;
        param_4 = 1;
        Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(lVar7 + 0x28),0);
        if (*(long *)(lVar7 + 0x28) != 0) {
          uVar12 = 0;
          param_4 = 1;
          Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(lVar7 + 0x28),4);
          if (*(long *)(lVar7 + 0x28) != 0) {
            uVar12 = 0;
            param_4 = 1;
            Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(lVar7 + 0x28),6);
            if (*(long *)(lVar7 + 0x28) != 0) {
              auVar26._8_8_ = 7;
              auVar26._0_8_ = *(long *)(lVar7 + 0x28);
              uVar12 = 0;
              param_4 = 1;
              puVar18 = *(undefined1 **)(puVar2 + -0x30);
              pcVar19 = *(code **)(puVar2 + -0x28);
              puVar3 = puVar2 + -0x20;
              unaff_x20 = *(ulong *)(puVar2 + -0x40);
              lVar7 = *(long *)(puVar2 + -0x38);
              goto code_r0x0150bc48;
            }
          }
        }
      }
      pcVar19 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
      auVar26 = func_0x00f78af4();
code_r0x0150bc48:
      do {
        plVar10 = auVar26._0_8_;
        *(ulong *)(puVar3 + -0x20) = unaff_x20;
        *(long *)(puVar3 + -0x18) = lVar7;
        *(undefined1 **)(puVar3 + -0x10) = puVar18;
        *(code **)(puVar3 + -8) = pcVar19;
        uVar6 = auVar26._8_4_;
        if (uVar6 == 0xffffffff) {
          return plVar10;
        }
        lVar13 = plVar10[0xe];
        if (lVar13 == 0) {
          func_0x00f78af4();
        }
        else {
          lVar7 = auVar26._8_8_;
          if (uVar6 < *(uint *)(lVar13 + 0x18)) {
            uVar14 = 2;
            if ((int)uVar12 == 0) {
              uVar14 = 0;
            }
            *(undefined4 *)(lVar13 + (long)(int)uVar6 * 0x60 + 0x5c) = uVar14;
            if ((param_4 & 1) == 0) {
              Atlas_UI_Screens_TopBarScreen__ForceButtonState(plVar10,auVar26._8_8_);
            }
            *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
            *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
            *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
            *(long *)(puVar3 + -0x48) = unaff_x25;
            *(long *)(puVar3 + -0x40) = unaff_x24;
            *(long *)(puVar3 + -0x38) = unaff_x23;
            *(long *)(puVar3 + -0x30) = unaff_x22;
            *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
            *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
            *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
            *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
            *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
            lVar7 = 0x3eb4000;
            if ((bRam0000000003eb4d5b & 1) == 0) {
              func_0x00f78a20(0x3d2a408);
              func_0x00f78a20(0x3d23990);
              bRam0000000003eb4d5b = 1;
            }
            lVar13 = plVar10[0xe];
            if (lVar13 == 0) goto LAB_0150c7d4;
            if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_0150c7d8;
            unaff_x25 = (long)(int)uVar6;
            lVar13 = lVar13 + unaff_x25 * 0x60;
            unaff_x26 = *(undefined8 *)(lVar13 + 0x20);
            unaff_x22 = *(long *)(lVar13 + 0x28);
            uVar9 = *(undefined8 *)(lVar13 + 0x30);
            uVar22 = *(undefined8 *)(lVar13 + 0x48);
            uVar21 = *(undefined8 *)(lVar13 + 0x40);
            *(undefined8 *)(puVar3 + -0xe8) = *(undefined8 *)(lVar13 + 0x38);
            *(undefined8 *)(puVar3 + -0xf0) = uVar9;
            *(undefined8 *)(puVar3 + -0xd8) = uVar22;
            *(undefined8 *)(puVar3 + -0xe0) = uVar21;
            lVar7 = *(long *)(lVar13 + 0x50);
            iVar16 = *(int *)(lVar13 + 0x58);
            iVar1 = *(int *)(lVar13 + 0x5c);
            unaff_x23 = *(long *)(lVar13 + 0x60);
            unaff_x24 = *(long *)(lVar13 + 0x68);
            uVar9 = *(undefined8 *)(lVar13 + 0x70);
            *(undefined8 *)(puVar3 + -0xf8) = *(undefined8 *)(lVar13 + 0x78);
            *(undefined8 *)(puVar3 + -0x100) = uVar9;
            if (iVar1 == iVar16) {
LAB_0150c768:
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              plVar10 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
              if ((int)plVar10 == 0) {
                return plVar10;
              }
              if (lVar7 != 0) {
                plVar10 = (long *)/*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar7,iVar16 == 2,0);
                return plVar10;
              }
            }
            else if (iVar16 == 2) {
              if (iVar1 == 0) {
                if (unaff_x24 == 0) goto LAB_0150c7d4;
                uVar21 = *(undefined8 *)(lVar13 + 0x38);
                uVar9 = *(undefined8 *)(lVar13 + 0x30);
                uVar23 = *(undefined8 *)(lVar13 + 0x48);
                uVar22 = *(undefined8 *)(lVar13 + 0x40);
                *(undefined8 *)(puVar3 + -0x118) = uVar21;
                *(undefined8 *)(puVar3 + -0x120) = uVar9;
                *(undefined8 *)(puVar3 + -0x108) = uVar23;
                *(undefined8 *)(puVar3 + -0x110) = uVar22;
                uVar25 = *(undefined8 *)(lVar13 + 0x78);
                uVar24 = *(undefined8 *)(lVar13 + 0x70);
                *(undefined8 *)(puVar3 + -0x128) = uVar25;
                *(undefined8 *)(puVar3 + -0x130) = uVar24;
                *(undefined8 *)(puVar3 + -200) = unaff_x26;
                *(long *)(puVar3 + -0xc0) = unaff_x22;
                *(undefined8 *)(puVar3 + -0xb0) = uVar21;
                *(undefined8 *)(puVar3 + -0xb8) = uVar9;
                *(undefined8 *)(puVar3 + -0xa0) = uVar23;
                *(undefined8 *)(puVar3 + -0xa8) = uVar22;
                *(long *)(puVar3 + -0x98) = lVar7;
                *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8620;
                *(long *)(puVar3 + -0x88) = unaff_x23;
                *(long *)(puVar3 + -0x80) = unaff_x24;
                *(undefined8 *)(puVar3 + -0x70) = uVar25;
                *(undefined8 *)(puVar3 + -0x78) = uVar24;
                lVar13 = unaff_x24;
LAB_0150c724:
                /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar13,puVar3 + -200,uRam0000000003d2a408);
                iVar16 = 1;
              }
              else {
                iVar16 = 2;
              }
LAB_0150c72c:
              lVar13 = plVar10[0xe];
              if (lVar13 != 0) {
                if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_0150c7d8;
                lVar13 = lVar13 + unaff_x25 * 0x60;
                *(undefined8 *)(lVar13 + 0x20) = unaff_x26;
                *(long *)(lVar13 + 0x28) = unaff_x22;
                uVar9 = *(undefined8 *)(puVar3 + -0xf0);
                uVar22 = *(undefined8 *)(puVar3 + -0xd8);
                uVar21 = *(undefined8 *)(puVar3 + -0xe0);
                *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(puVar3 + -0xe8);
                *(undefined8 *)(lVar13 + 0x30) = uVar9;
                *(undefined8 *)(lVar13 + 0x48) = uVar22;
                *(undefined8 *)(lVar13 + 0x40) = uVar21;
                *(long *)(lVar13 + 0x50) = lVar7;
                *(int *)(lVar13 + 0x58) = iVar16;
                *(int *)(lVar13 + 0x5c) = iVar1;
                *(long *)(lVar13 + 0x60) = unaff_x23;
                *(long *)(lVar13 + 0x68) = unaff_x24;
                uVar9 = *(undefined8 *)(puVar3 + -0x100);
                *(undefined8 *)(lVar13 + 0x78) = *(undefined8 *)(puVar3 + -0xf8);
                *(undefined8 *)(lVar13 + 0x70) = uVar9;
                goto LAB_0150c768;
              }
            }
            else {
              if (iVar16 != 0) goto LAB_0150c72c;
              if (iVar1 != 2) {
                iVar16 = 0;
                goto LAB_0150c72c;
              }
              if (((unaff_x22 != 0) && (lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar13 != 0)) &&
                 (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,1,0), unaff_x23 != 0)) {
                *(undefined8 *)(puVar3 + -200) = unaff_x26;
                *(long *)(puVar3 + -0xc0) = unaff_x22;
                *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xe8);
                *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0xf0);
                *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xd8);
                *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xe0);
                *(long *)(puVar3 + -0x98) = lVar7;
                *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8628;
                *(long *)(puVar3 + -0x88) = unaff_x23;
                *(long *)(puVar3 + -0x80) = unaff_x24;
                *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0xf8);
                *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x100);
                lVar13 = unaff_x23;
                goto LAB_0150c724;
              }
            }
LAB_0150c7d4:
            func_0x00f78af4();
LAB_0150c7d8:
            uVar9 = func_0x00f78b24();
            auVar28 = func_0x00f78ac0(uVar9,0);
            lVar13 = auVar28._8_8_;
            *(undefined8 *)(puVar3 + -0x180) = unaff_x26;
            *(long *)(puVar3 + -0x178) = unaff_x25;
            *(long *)(puVar3 + -0x170) = unaff_x24;
            *(long *)(puVar3 + -0x168) = unaff_x23;
            *(long *)(puVar3 + -0x160) = unaff_x22;
            *(undefined1 (*) [16])(puVar3 + -0x158) = auVar26;
            *(long *)(puVar3 + -0x148) = lVar7;
            *(undefined1 **)(puVar3 + -0x140) = puVar3 + -0x10;
            *(code **)(puVar3 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
            if ((bRam0000000003eb4d55 & 1) == 0) {
              func_0x00f78a20(0x3d5e6e0);
              func_0x00f78a20(0x3d5e7a8);
              func_0x00f78a20(0x3d5e7d0);
              func_0x00f78a20(0x3d5e850);
              func_0x00f78a20(0x3d5e888);
              bRam0000000003eb4d55 = 1;
            }
            uVar9 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar13 + 0x18),*(undefined4 *)(lVar13 + 0x1c),
                                    *(undefined4 *)(lVar13 + 0x20),_UNK_033f8144,
                                    *(undefined8 *)(lVar13 + 0x10),0,0);
            uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar9,10,uRam0000000003d5e7a8);
            uVar9 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar9,*(undefined8 *)(lVar13 + 0x58),uRam0000000003d5e6e0);
            uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar9,1,uRam0000000003d5e888);
            plVar10 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar9,auVar28._0_8_,uRam0000000003d5e850);
            if ((plVar10 != (long *)0x0) && ((char)plVar10[0x1d] != '\0')) {
              plVar10[6] = *(long *)(lVar13 + 0x10);
            }
            return plVar10;
          }
        }
        uVar9 = func_0x00f78b24();
        auVar28 = func_0x00f78ac0(uVar9,0);
        puVar18 = puVar3 + -0x30;
        *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
        *(undefined **)(puVar3 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
        lVar13 = *(long *)(auVar28._0_8_ + 0x28);
        auVar27._8_8_ = auVar28._8_8_;
        auVar27._0_8_ = lVar13;
        if (lVar13 == 0) {
          pcVar19 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
          auVar27 = func_0x00f78af4();
          puVar3 = puVar3 + -0x30;
        }
        else {
          puVar18 = *(undefined1 **)(puVar3 + -0x30);
          pcVar19 = *(code **)(puVar3 + -0x28);
          puVar3 = puVar3 + -0x20;
        }
        param_4 = auVar27._8_8_;
        uVar9 = auVar27._0_8_;
        *(long **)(puVar3 + -0x20) = plVar10;
        *(long *)(puVar3 + -0x18) = lVar7;
        *(undefined1 **)(puVar3 + -0x10) = puVar18;
        *(code **)(puVar3 + -8) = pcVar19;
        Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar9,4,0,param_4);
        Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar9,5,0,param_4);
        auVar26._8_8_ = 7;
        auVar26._0_8_ = uVar9;
        uVar12 = 0;
        puVar18 = *(undefined1 **)(puVar3 + -0x10);
        pcVar19 = *(code **)(puVar3 + -8);
        unaff_x20 = *(ulong *)(puVar3 + -0x20);
        lVar7 = *(long *)(puVar3 + -0x18);
      } while( true );
    }
    uVar11 = 1;
    unaff_x30 = &UNK_0150b948;
  }
  else {
    uVar11 = 0;
    puVar3 = (undefined1 *)register0x00000008;
  }
  *(undefined8 *******)(puVar3 + -0x10) = unaff_x29;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  lVar13 = *(long *)(lVar7 + 0x38);
  if (lVar13 == 0) {
    func_0x00f78af4();
code_r0x0164b040:
    uVar9 = func_0x00f78b24();
    auVar29 = func_0x00f78ac0(uVar9,0);
    lVar7 = auVar29._0_8_;
    *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x18) = &Core_Input_InputManager__SetScreenLayerInputExclusive;
    lVar13 = *(long *)(lVar7 + 0x38);
    if (lVar13 == 0) {
      func_0x00f78af4();
    }
    else if (auVar29._8_4_ < *(uint *)(lVar13 + 0x18)) {
      *(undefined1 *)(lVar13 + (long)(int)auVar29._8_4_ * 0x10 + 0x29) = uVar11;
      puVar4 = puVar3 + -0x10;
      puVar18 = *(undefined1 **)(puVar3 + -0x20);
      puVar20 = *(undefined **)(puVar3 + -0x18);
      goto Core_Input_InputManager__ReselectTopmostActiveLayer;
    }
    uVar9 = func_0x00f78b24();
    func_0x00f78ac0(uVar9,0);
    puVar4 = puVar3 + -0x50;
    *(long *)(puVar3 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x48) = unaff_x21;
    *(ulong *)(puVar3 + -0x40) = unaff_x20;
    *(long **)(puVar3 + -0x38) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x20;
    *(undefined **)(puVar3 + -0x28) = &Core_Input_InputManager__SetMultiTouchEnabled;
    puVar18 = puVar3 + -0x30;
    unaff_x20 = 0x3eb5000;
    unaff_x21 = 0x3d216c0;
    if ((bRam0000000003eb5795 & 1) == 0) {
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d22880);
      bRam0000000003eb5795 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (lVar7 == 0) {
code_r0x0164b158:
      func_0x00f78af4();
    }
    else {
      plVar10 = *(long **)(lVar7 + 0x20);
      if (plVar10 == (long *)0x0) {
code_r0x0164b130:
        if (plVar10 != (long *)0x0) {
          *(uint *)((long)plVar10 + 0xbc) = (uint)(((ulong)extraout_x1 & 1) == 0);
          return plVar10;
        }
        goto code_r0x0164b158;
      }
      if ((*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) <= *(byte *)(*plVar10 + 300)) &&
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) * 8 +
                   -8) == /*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880)) goto code_r0x0164b130;
    }
    puVar20 = &Core_Input_InputManager__SetActiveLayer;
    auVar29 = func_0x00f78e5c();
    lVar7 = auVar29._0_8_;
    *(int *)(lVar7 + 0x40) = auVar29._8_4_;
    unaff_x19 = extraout_x1;
  }
  else {
    if (*(uint *)(lVar13 + 0x18) <= uVar6) goto code_r0x0164b040;
    *(undefined1 *)(lVar13 + (long)(int)uVar6 * 0x10 + 0x28) = uVar11;
    puVar18 = *(undefined1 **)(puVar3 + -0x10);
    puVar20 = *(undefined **)(puVar3 + -8);
    puVar4 = puVar3;
  }
Core_Input_InputManager__ReselectTopmostActiveLayer:
  *(long *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
  *(ulong *)(puVar4 + -0x20) = unaff_x20;
  *(long **)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = puVar18;
  *(undefined **)(puVar4 + -8) = puVar20;
  if ((bRam0000000003eb5797 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d232c0);
    bRam0000000003eb5797 = 1;
  }
  uVar14 = *(undefined4 *)(lVar7 + 0x40);
  uVar9 = /*Core.Input.InputManager$$FindTopmostExclusiveLayer*/ func_0x0164a6a0(lVar7);
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar10 = (long *)/*System.Math$$Max*/ func_0x02b01f40(uVar14,uVar9,0);
  uVar6 = (uint)plVar10;
  if (uVar6 == 0xffffffff) {
    return plVar10;
  }
  lVar13 = *(long *)(lVar7 + 0x38);
  if (lVar13 != 0) {
    if (*(uint *)(lVar13 + 0x18) <= uVar6) goto code_r0x0164a30c;
    if (*(char *)(lVar13 + (long)(int)uVar6 * 0x10 + 0x28) != '\0') {
      return plVar10;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
      *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar13 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      lVar7 = *(long *)(lVar7 + 0x38);
      if (lVar7 != 0) {
        if (*(uint *)(lVar7 + 0x18) <= uVar6) goto code_r0x0164a30c;
        if (lVar13 != 0) {
          plVar10 = (long *)/*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar13,*(undefined8 *)
                                                    (lVar7 + (long)(int)uVar6 * 0x10 + 0x20),0);
          if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
            *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
            return plVar10;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x0164a30c:
  uVar9 = func_0x00f78b24();
  plVar10 = (long *)func_0x00f78ac0(uVar9,0);
  return plVar10;
}



// ============================================================
// RVA: 0x150b900 | Atlas.UI.TopBarManager.OnStartExitScreen
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_TopBarManager__OnStartExitScreen
                (ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 extraout_w1;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  ulong unaff_x20;
  uint uVar13;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar14;
  undefined8 unaff_x28;
  undefined8 ******ppppppuVar15;
  undefined1 *puVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  ulong uStack_40;
  ulong uStack_38;
  undefined8 *****pppppuStack_30;
  code *pcStack_28;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    if (3 < (int)param_3) {
      return param_1;
    }
    iVar14 = 4;
  }
  else {
    iVar14 = *(int *)(*(long *)(param_1 + 0x28) + 0x48);
    if (iVar14 <= (int)param_3) {
      return param_1;
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    param_3 = 1;
    param_4 = 0;
    /*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(param_1 + 0x18),iVar14);
    if (*(long *)(param_1 + 0x28) != 0) {
      param_3 = 0;
      param_4 = 1;
      Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(param_1 + 0x28),0);
      if (*(long *)(param_1 + 0x28) != 0) {
        param_3 = 0;
        param_4 = 1;
        Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(param_1 + 0x28),1);
        if (*(long *)(param_1 + 0x28) != 0) {
          param_3 = 0;
          param_4 = 1;
          Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(param_1 + 0x28),2);
          if (*(long *)(param_1 + 0x28) != 0) {
            param_3 = 0;
            param_4 = 1;
            Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(param_1 + 0x28),4);
            if (*(long *)(param_1 + 0x28) != 0) {
              param_3 = 0;
              param_4 = 1;
              Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(param_1 + 0x28),5);
              if (*(long *)(param_1 + 0x28) != 0) {
                unaff_x20 = 1;
                param_3 = 0;
                param_4 = 1;
                uVar5 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible
                                  (*(long *)(param_1 + 0x28),8);
                lVar10 = *(long *)(param_1 + 0x28);
                if (lVar10 != 0) {
                  *(undefined8 *)(lVar10 + 0x88) = 0;
                  *(undefined8 *)(lVar10 + 0x90) = 0;
                  *(undefined1 *)(lVar10 + 0x80) = 1;
                  return uVar5;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar5 = func_0x00f78af4();
  puVar3 = &uStack_40;
  pcStack_28 = (code *)&Atlas_UI_TopBarManager__RequestButtonVisible;
  ppppppuVar15 = &pppppuStack_30;
  uStack_40 = unaff_x20;
  uStack_38 = param_1;
  pppppuStack_30 = (undefined8 *****)&stack0xfffffffffffffff0;
  if (*(long *)(uVar5 + 0x28) == 0) {
code_r0x0150ba34:
    pcVar17 = Atlas_UI_Screens_TopBarScreen__ShowBackingPanelsIfRequired;
    auVar25 = func_0x00f78af4();
  }
  else {
    Atlas_UI_Screens_TopBarScreen__RequestButtonVisible();
    if (*(ulong *)(uVar5 + 0x28) == 0) goto code_r0x0150ba34;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = *(ulong *)(uVar5 + 0x28);
    param_3 = 0;
    puVar3 = (ulong *)&stack0xffffffffffffffe0;
    uVar5 = uStack_38;
    unaff_x20 = uStack_40;
    ppppppuVar15 = (undefined8 ******)pppppuStack_30;
    pcVar17 = pcStack_28;
  }
  uVar6 = auVar25._0_8_;
  *(long *)((long)puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar3 + -0x28) = unaff_x21;
  *(ulong *)((long)puVar3 + -0x20) = unaff_x20;
  *(ulong *)((long)puVar3 + -0x18) = uVar5;
  *(undefined8 *******)((long)puVar3 + -0x10) = ppppppuVar15;
  *(code **)((long)puVar3 + -8) = pcVar17;
  lVar10 = *(long *)(uVar6 + 0x70);
  uVar9 = param_3;
  if (lVar10 != 0) {
    uVar8 = *(uint *)(lVar10 + 0x18);
    if (uVar8 != 0) {
      uVar5 = uVar6;
      unaff_x20 = param_3;
      if (*(int *)(lVar10 + 0x5c) - 1U < 2) {
        uVar9 = 1;
      }
      else {
        if (uVar8 < 2) goto LAB_0150bb24;
        uVar9 = (ulong)(*(int *)(lVar10 + 0xbc) - 1U < 2);
      }
      if (4 < uVar8) {
        if (*(int *)(lVar10 + 0x1dc) - 1U < 2) {
          uVar13 = 1;
          uVar8 = 1;
        }
        else {
          if (uVar8 < 6) goto LAB_0150bb24;
          bVar4 = *(int *)(lVar10 + 0x23c) - 1U < 2;
          uVar13 = (uint)bVar4;
          uVar8 = (uint)bVar4;
        }
        if (((int)uVar9 != 0) && (uVar8 = uVar13, (auVar25._8_8_ & 1) == 0)) {
          uVar5 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar6,6,uVar9,1);
        }
        if ((uVar8 & ((uint)param_3 ^ 1)) != 1) {
          return uVar5;
        }
        auVar23._8_8_ = 7;
        auVar23._0_8_ = uVar6;
        uVar9 = 1;
        param_4 = 1;
        puVar16 = *(undefined1 **)((long)puVar3 + -0x10);
        pcVar17 = *(code **)((long)puVar3 + -8);
        unaff_x20 = *(ulong *)((long)puVar3 + -0x20);
        lVar10 = *(long *)((long)puVar3 + -0x18);
        unaff_x22 = *(long *)((long)puVar3 + -0x30);
        unaff_x21 = *(undefined8 *)((long)puVar3 + -0x28);
        goto code_r0x0150bc48;
      }
    }
LAB_0150bb24:
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
  }
  auVar26 = func_0x00f78af4();
  puVar2 = (undefined1 *)((long)puVar3 + -0x40);
  puVar16 = (undefined1 *)((long)puVar3 + -0x40);
  *(undefined1 **)((long)puVar3 + -0x40) = (undefined1 *)((long)puVar3 + -0x10);
  *(undefined **)((long)puVar3 + -0x38) = &Atlas_UI_TopBarManager__GetButtonElementState;
  lVar10 = *(long *)(auVar26._0_8_ + 0x28);
  auVar26._8_4_ = auVar26._8_4_;
  auVar26._0_8_ = lVar10;
  if (lVar10 == 0) {
    pcVar17 = Atlas_UI_Screens_TopBarScreen__GetElementState;
    auVar26 = func_0x00f78af4();
  }
  else {
    puVar2 = (undefined1 *)((long)puVar3 + -0x30);
    puVar16 = *(undefined1 **)((long)puVar3 + -0x40);
    pcVar17 = *(code **)((long)puVar3 + -0x38);
  }
  *(undefined1 **)(puVar2 + -0x10) = puVar16;
  *(code **)(puVar2 + -8) = pcVar17;
  lVar10 = *(long *)(auVar26._0_8_ + 0x70);
  if (auVar26._8_4_ < 9) {
    uVar8 = *(uint *)(&UNK_033f869c + (long)(int)auVar26._8_4_ * 4);
  }
  else {
    uVar8 = 0xffffffff;
  }
  if (lVar10 == 0) {
    func_0x00f78af4();
  }
  else if (uVar8 < *(uint *)(lVar10 + 0x18)) {
    return (ulong)*(uint *)(lVar10 + (ulong)uVar8 * 0x60 + 0x58);
  }
  uVar7 = func_0x00f78b24();
  uVar6 = func_0x00f78ac0(uVar7,0);
  *(undefined1 **)(puVar2 + -0x20) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x18) = &Atlas_UI_TopBarManager__SetNextPanelEnabledVisuals;
  if (*(long *)(uVar6 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(uVar6 + 0x28) + 0x80) = extraout_w1;
    return uVar6;
  }
  lVar10 = func_0x00f78af4();
  puVar3 = (ulong *)(puVar2 + -0x40);
  *(ulong *)(puVar2 + -0x40) = unaff_x20;
  *(ulong *)(puVar2 + -0x38) = uVar5;
  *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x20;
  *(undefined **)(puVar2 + -0x28) = &Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
  puVar16 = puVar2 + -0x30;
  if (*(long *)(lVar10 + 0x28) != 0) {
    uVar9 = 0;
    param_4 = 1;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(lVar10 + 0x28),0);
    if (*(long *)(lVar10 + 0x28) != 0) {
      uVar9 = 0;
      param_4 = 1;
      Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(lVar10 + 0x28),4);
      if (*(long *)(lVar10 + 0x28) != 0) {
        uVar9 = 0;
        param_4 = 1;
        Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(lVar10 + 0x28),6);
        if (*(long *)(lVar10 + 0x28) != 0) {
          auVar23._8_8_ = 7;
          auVar23._0_8_ = *(long *)(lVar10 + 0x28);
          uVar9 = 0;
          param_4 = 1;
          puVar16 = *(undefined1 **)(puVar2 + -0x30);
          pcVar17 = *(code **)(puVar2 + -0x28);
          puVar3 = (ulong *)(puVar2 + -0x20);
          unaff_x20 = *(ulong *)(puVar2 + -0x40);
          lVar10 = *(long *)(puVar2 + -0x38);
          goto code_r0x0150bc48;
        }
      }
    }
  }
  pcVar17 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
  auVar23 = func_0x00f78af4();
code_r0x0150bc48:
  do {
    uVar5 = auVar23._0_8_;
    *(ulong *)((long)puVar3 + -0x20) = unaff_x20;
    *(long *)((long)puVar3 + -0x18) = lVar10;
    *(undefined1 **)((long)puVar3 + -0x10) = puVar16;
    *(code **)((long)puVar3 + -8) = pcVar17;
    uVar8 = auVar23._8_4_;
    if (uVar8 == 0xffffffff) {
      return uVar5;
    }
    lVar11 = *(long *)(uVar5 + 0x70);
    if (lVar11 == 0) {
      func_0x00f78af4();
    }
    else {
      lVar10 = auVar23._8_8_;
      if (uVar8 < *(uint *)(lVar11 + 0x18)) {
        uVar12 = 2;
        if ((int)uVar9 == 0) {
          uVar12 = 0;
        }
        *(undefined4 *)(lVar11 + (long)(int)uVar8 * 0x60 + 0x5c) = uVar12;
        if ((param_4 & 1) == 0) {
          Atlas_UI_Screens_TopBarScreen__ForceButtonState(uVar5,auVar23._8_8_);
        }
        *(undefined8 *)((long)puVar3 + -0x60) = unaff_x28;
        *(undefined8 *)((long)puVar3 + -0x58) = unaff_x27;
        *(undefined8 *)((long)puVar3 + -0x50) = unaff_x26;
        *(long *)((long)puVar3 + -0x48) = unaff_x25;
        *(long *)((long)puVar3 + -0x40) = unaff_x24;
        *(long *)((long)puVar3 + -0x38) = unaff_x23;
        *(long *)((long)puVar3 + -0x30) = unaff_x22;
        *(undefined8 *)((long)puVar3 + -0x28) = unaff_x21;
        *(undefined8 *)((long)puVar3 + -0x20) = *(undefined8 *)((long)puVar3 + -0x20);
        *(undefined8 *)((long)puVar3 + -0x18) = *(undefined8 *)((long)puVar3 + -0x18);
        *(undefined8 *)((long)puVar3 + -0x10) = *(undefined8 *)((long)puVar3 + -0x10);
        *(undefined8 *)((long)puVar3 + -8) = *(undefined8 *)((long)puVar3 + -8);
        lVar10 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar11 = *(long *)(uVar5 + 0x70);
        if (lVar11 == 0) goto LAB_0150c7d4;
        if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_0150c7d8;
        unaff_x25 = (long)(int)uVar8;
        lVar11 = lVar11 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar11 + 0x20);
        unaff_x22 = *(long *)(lVar11 + 0x28);
        uVar7 = *(undefined8 *)(lVar11 + 0x30);
        uVar19 = *(undefined8 *)(lVar11 + 0x48);
        uVar18 = *(undefined8 *)(lVar11 + 0x40);
        *(undefined8 *)((long)puVar3 + -0xe8) = *(undefined8 *)(lVar11 + 0x38);
        *(undefined8 *)((long)puVar3 + -0xf0) = uVar7;
        *(undefined8 *)((long)puVar3 + -0xd8) = uVar19;
        *(undefined8 *)((long)puVar3 + -0xe0) = uVar18;
        lVar10 = *(long *)(lVar11 + 0x50);
        iVar14 = *(int *)(lVar11 + 0x58);
        iVar1 = *(int *)(lVar11 + 0x5c);
        unaff_x23 = *(long *)(lVar11 + 0x60);
        unaff_x24 = *(long *)(lVar11 + 0x68);
        uVar7 = *(undefined8 *)(lVar11 + 0x70);
        *(undefined8 *)((long)puVar3 + -0xf8) = *(undefined8 *)(lVar11 + 0x78);
        *(undefined8 *)((long)puVar3 + -0x100) = uVar7;
        if (iVar1 == iVar14) {
LAB_0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          if (lVar10 != 0) {
            uVar5 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar10,iVar14 == 2,0);
            return uVar5;
          }
        }
        else if (iVar14 == 2) {
          if (iVar1 == 0) {
            if (unaff_x24 == 0) goto LAB_0150c7d4;
            uVar18 = *(undefined8 *)(lVar11 + 0x38);
            uVar7 = *(undefined8 *)(lVar11 + 0x30);
            uVar20 = *(undefined8 *)(lVar11 + 0x48);
            uVar19 = *(undefined8 *)(lVar11 + 0x40);
            *(undefined8 *)((long)puVar3 + -0x118) = uVar18;
            *(undefined8 *)((long)puVar3 + -0x120) = uVar7;
            *(undefined8 *)((long)puVar3 + -0x108) = uVar20;
            *(undefined8 *)((long)puVar3 + -0x110) = uVar19;
            uVar22 = *(undefined8 *)(lVar11 + 0x78);
            uVar21 = *(undefined8 *)(lVar11 + 0x70);
            *(undefined8 *)((long)puVar3 + -0x128) = uVar22;
            *(undefined8 *)((long)puVar3 + -0x130) = uVar21;
            *(undefined8 *)((long)puVar3 + -200) = unaff_x26;
            *(long *)((long)puVar3 + -0xc0) = unaff_x22;
            *(undefined8 *)((long)puVar3 + -0xb0) = uVar18;
            *(undefined8 *)((long)puVar3 + -0xb8) = uVar7;
            *(undefined8 *)((long)puVar3 + -0xa0) = uVar20;
            *(undefined8 *)((long)puVar3 + -0xa8) = uVar19;
            *(long *)((long)puVar3 + -0x98) = lVar10;
            *(undefined8 *)((long)puVar3 + -0x90) = _UNK_033f8620;
            *(long *)((long)puVar3 + -0x88) = unaff_x23;
            *(long *)((long)puVar3 + -0x80) = unaff_x24;
            *(undefined8 *)((long)puVar3 + -0x70) = uVar22;
            *(undefined8 *)((long)puVar3 + -0x78) = uVar21;
            lVar11 = unaff_x24;
LAB_0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar11,(undefined1 *)((long)puVar3 + -200),uRam0000000003d2a408);
            iVar14 = 1;
          }
          else {
            iVar14 = 2;
          }
LAB_0150c72c:
          lVar11 = *(long *)(uVar5 + 0x70);
          if (lVar11 != 0) {
            if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_0150c7d8;
            lVar11 = lVar11 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar11 + 0x20) = unaff_x26;
            *(long *)(lVar11 + 0x28) = unaff_x22;
            uVar7 = *(undefined8 *)((long)puVar3 + -0xf0);
            uVar19 = *(undefined8 *)((long)puVar3 + -0xd8);
            uVar18 = *(undefined8 *)((long)puVar3 + -0xe0);
            *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)((long)puVar3 + -0xe8);
            *(undefined8 *)(lVar11 + 0x30) = uVar7;
            *(undefined8 *)(lVar11 + 0x48) = uVar19;
            *(undefined8 *)(lVar11 + 0x40) = uVar18;
            *(long *)(lVar11 + 0x50) = lVar10;
            *(int *)(lVar11 + 0x58) = iVar14;
            *(int *)(lVar11 + 0x5c) = iVar1;
            *(long *)(lVar11 + 0x60) = unaff_x23;
            *(long *)(lVar11 + 0x68) = unaff_x24;
            uVar7 = *(undefined8 *)((long)puVar3 + -0x100);
            *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)((long)puVar3 + -0xf8);
            *(undefined8 *)(lVar11 + 0x70) = uVar7;
            goto LAB_0150c768;
          }
        }
        else {
          if (iVar14 != 0) goto LAB_0150c72c;
          if (iVar1 != 2) {
            iVar14 = 0;
            goto LAB_0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar11 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar11,1,0), unaff_x23 != 0)) {
            *(undefined8 *)((long)puVar3 + -200) = unaff_x26;
            *(long *)((long)puVar3 + -0xc0) = unaff_x22;
            *(undefined8 *)((long)puVar3 + -0xb0) = *(undefined8 *)((long)puVar3 + -0xe8);
            *(undefined8 *)((long)puVar3 + -0xb8) = *(undefined8 *)((long)puVar3 + -0xf0);
            *(undefined8 *)((long)puVar3 + -0xa0) = *(undefined8 *)((long)puVar3 + -0xd8);
            *(undefined8 *)((long)puVar3 + -0xa8) = *(undefined8 *)((long)puVar3 + -0xe0);
            *(long *)((long)puVar3 + -0x98) = lVar10;
            *(undefined8 *)((long)puVar3 + -0x90) = _UNK_033f8628;
            *(long *)((long)puVar3 + -0x88) = unaff_x23;
            *(long *)((long)puVar3 + -0x80) = unaff_x24;
            *(undefined8 *)((long)puVar3 + -0x70) = *(undefined8 *)((long)puVar3 + -0xf8);
            *(undefined8 *)((long)puVar3 + -0x78) = *(undefined8 *)((long)puVar3 + -0x100);
            lVar11 = unaff_x23;
            goto LAB_0150c724;
          }
        }
LAB_0150c7d4:
        func_0x00f78af4();
LAB_0150c7d8:
        uVar7 = func_0x00f78b24();
        auVar25 = func_0x00f78ac0(uVar7,0);
        lVar11 = auVar25._8_8_;
        *(undefined8 *)((long)puVar3 + -0x180) = unaff_x26;
        *(long *)((long)puVar3 + -0x178) = unaff_x25;
        *(long *)((long)puVar3 + -0x170) = unaff_x24;
        *(long *)((long)puVar3 + -0x168) = unaff_x23;
        *(long *)((long)puVar3 + -0x160) = unaff_x22;
        *(undefined1 (*) [16])((long)puVar3 + -0x158) = auVar23;
        *(long *)((long)puVar3 + -0x148) = lVar10;
        *(undefined1 **)((long)puVar3 + -0x140) = (undefined1 *)((long)puVar3 + -0x10);
        *(code **)((long)puVar3 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar7 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x1c),
                                *(undefined4 *)(lVar11 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar11 + 0x10),0,0);
        uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar7,10,uRam0000000003d5e7a8);
        uVar7 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar7,*(undefined8 *)(lVar11 + 0x58),uRam0000000003d5e6e0);
        uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar7,1,uRam0000000003d5e888);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar7,auVar25._0_8_,uRam0000000003d5e850);
        if ((uVar5 != 0) && (*(char *)(uVar5 + 0xe8) != '\0')) {
          *(undefined8 *)(uVar5 + 0x30) = *(undefined8 *)(lVar11 + 0x10);
        }
        return uVar5;
      }
    }
    uVar7 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar7,0);
    puVar16 = (undefined1 *)((long)puVar3 + -0x30);
    *(undefined1 **)((long)puVar3 + -0x30) = (undefined1 *)((long)puVar3 + -0x10);
    *(undefined **)((long)puVar3 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar11 = *(long *)(auVar25._0_8_ + 0x28);
    auVar24._8_8_ = auVar25._8_8_;
    auVar24._0_8_ = lVar11;
    if (lVar11 == 0) {
      pcVar17 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar24 = func_0x00f78af4();
      puVar3 = (ulong *)((long)puVar3 + -0x30);
    }
    else {
      puVar16 = *(undefined1 **)((long)puVar3 + -0x30);
      pcVar17 = *(code **)((long)puVar3 + -0x28);
      puVar3 = (ulong *)((long)puVar3 + -0x20);
    }
    param_4 = auVar24._8_8_;
    uVar7 = auVar24._0_8_;
    *(ulong *)((long)puVar3 + -0x20) = uVar5;
    *(long *)((long)puVar3 + -0x18) = lVar10;
    *(undefined1 **)((long)puVar3 + -0x10) = puVar16;
    *(code **)((long)puVar3 + -8) = pcVar17;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar7,4,0,param_4);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar7,5,0,param_4);
    auVar23._8_8_ = 7;
    auVar23._0_8_ = uVar7;
    uVar9 = 0;
    puVar16 = *(undefined1 **)((long)puVar3 + -0x10);
    pcVar17 = *(code **)((long)puVar3 + -8);
    unaff_x20 = *(ulong *)((long)puVar3 + -0x20);
    lVar10 = *(long *)((long)puVar3 + -0x18);
  } while( true );
}



// ============================================================
// RVA: 0x150b9fc | Atlas.UI.TopBarManager.RequestButtonVisible
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_TopBarManager__RequestButtonVisible
                (ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 extraout_w1;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  ulong unaff_x19;
  ulong unaff_x20;
  uint uVar13;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar14;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar15;
  code *unaff_x30;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  
  puVar3 = &stack0xffffffffffffffe0;
  puVar15 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0x28) == 0) {
LAB_0150ba34:
    unaff_x30 = Atlas_UI_Screens_TopBarScreen__ShowBackingPanelsIfRequired;
    auVar24 = func_0x00f78af4();
  }
  else {
    Atlas_UI_Screens_TopBarScreen__RequestButtonVisible();
    if (*(ulong *)(param_1 + 0x28) == 0) goto LAB_0150ba34;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = *(ulong *)(param_1 + 0x28);
    param_3 = 0;
    puVar3 = (undefined1 *)register0x00000008;
    param_1 = unaff_x19;
    puVar15 = unaff_x29;
  }
  uVar6 = auVar24._0_8_;
  *(long *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
  *(ulong *)(puVar3 + -0x20) = unaff_x20;
  *(ulong *)(puVar3 + -0x18) = param_1;
  *(undefined1 **)(puVar3 + -0x10) = puVar15;
  *(code **)(puVar3 + -8) = unaff_x30;
  lVar10 = *(long *)(uVar6 + 0x70);
  uVar9 = param_3;
  if (lVar10 != 0) {
    uVar8 = *(uint *)(lVar10 + 0x18);
    if (uVar8 != 0) {
      param_1 = uVar6;
      unaff_x20 = param_3;
      if (*(int *)(lVar10 + 0x5c) - 1U < 2) {
        uVar9 = 1;
      }
      else {
        if (uVar8 < 2) goto LAB_0150bb24;
        uVar9 = (ulong)(*(int *)(lVar10 + 0xbc) - 1U < 2);
      }
      if (4 < uVar8) {
        if (*(int *)(lVar10 + 0x1dc) - 1U < 2) {
          uVar13 = 1;
          uVar8 = 1;
        }
        else {
          if (uVar8 < 6) goto LAB_0150bb24;
          bVar4 = *(int *)(lVar10 + 0x23c) - 1U < 2;
          uVar13 = (uint)bVar4;
          uVar8 = (uint)bVar4;
        }
        uVar5 = uVar6;
        if (((int)uVar9 != 0) && (uVar8 = uVar13, (auVar24._8_8_ & 1) == 0)) {
          uVar5 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar6,6,uVar9,1);
        }
        if ((uVar8 & ((uint)param_3 ^ 1)) != 1) {
          return uVar5;
        }
        auVar22._8_8_ = 7;
        auVar22._0_8_ = uVar6;
        uVar9 = 1;
        param_4 = 1;
        puVar15 = *(undefined1 **)(puVar3 + -0x10);
        pcVar16 = *(code **)(puVar3 + -8);
        unaff_x20 = *(ulong *)(puVar3 + -0x20);
        lVar10 = *(long *)(puVar3 + -0x18);
        unaff_x22 = *(long *)(puVar3 + -0x30);
        unaff_x21 = *(undefined8 *)(puVar3 + -0x28);
        goto code_r0x0150bc48;
      }
    }
LAB_0150bb24:
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
  }
  auVar25 = func_0x00f78af4();
  puVar2 = puVar3 + -0x40;
  puVar15 = puVar3 + -0x40;
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x38) = &Atlas_UI_TopBarManager__GetButtonElementState;
  lVar10 = *(long *)(auVar25._0_8_ + 0x28);
  auVar25._8_4_ = auVar25._8_4_;
  auVar25._0_8_ = lVar10;
  if (lVar10 == 0) {
    pcVar16 = Atlas_UI_Screens_TopBarScreen__GetElementState;
    auVar25 = func_0x00f78af4();
  }
  else {
    puVar2 = puVar3 + -0x30;
    puVar15 = *(undefined1 **)(puVar3 + -0x40);
    pcVar16 = *(code **)(puVar3 + -0x38);
  }
  *(undefined1 **)(puVar2 + -0x10) = puVar15;
  *(code **)(puVar2 + -8) = pcVar16;
  lVar10 = *(long *)(auVar25._0_8_ + 0x70);
  if (auVar25._8_4_ < 9) {
    uVar8 = *(uint *)(&UNK_033f869c + (long)(int)auVar25._8_4_ * 4);
  }
  else {
    uVar8 = 0xffffffff;
  }
  if (lVar10 == 0) {
    func_0x00f78af4();
  }
  else if (uVar8 < *(uint *)(lVar10 + 0x18)) {
    return (ulong)*(uint *)(lVar10 + (ulong)uVar8 * 0x60 + 0x58);
  }
  uVar7 = func_0x00f78b24();
  uVar6 = func_0x00f78ac0(uVar7,0);
  *(undefined1 **)(puVar2 + -0x20) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x18) = &Atlas_UI_TopBarManager__SetNextPanelEnabledVisuals;
  if (*(long *)(uVar6 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(uVar6 + 0x28) + 0x80) = extraout_w1;
    return uVar6;
  }
  lVar10 = func_0x00f78af4();
  puVar3 = puVar2 + -0x40;
  *(ulong *)(puVar2 + -0x40) = unaff_x20;
  *(ulong *)(puVar2 + -0x38) = param_1;
  *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x20;
  *(undefined **)(puVar2 + -0x28) = &Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
  puVar15 = puVar2 + -0x30;
  if (*(long *)(lVar10 + 0x28) != 0) {
    uVar9 = 0;
    param_4 = 1;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(lVar10 + 0x28),0);
    if (*(long *)(lVar10 + 0x28) != 0) {
      uVar9 = 0;
      param_4 = 1;
      Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(lVar10 + 0x28),4);
      if (*(long *)(lVar10 + 0x28) != 0) {
        uVar9 = 0;
        param_4 = 1;
        Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(lVar10 + 0x28),6);
        if (*(long *)(lVar10 + 0x28) != 0) {
          auVar22._8_8_ = 7;
          auVar22._0_8_ = *(long *)(lVar10 + 0x28);
          uVar9 = 0;
          param_4 = 1;
          puVar15 = *(undefined1 **)(puVar2 + -0x30);
          pcVar16 = *(code **)(puVar2 + -0x28);
          puVar3 = puVar2 + -0x20;
          unaff_x20 = *(ulong *)(puVar2 + -0x40);
          lVar10 = *(long *)(puVar2 + -0x38);
          goto code_r0x0150bc48;
        }
      }
    }
  }
  pcVar16 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
  auVar22 = func_0x00f78af4();
code_r0x0150bc48:
  do {
    uVar6 = auVar22._0_8_;
    *(ulong *)(puVar3 + -0x20) = unaff_x20;
    *(long *)(puVar3 + -0x18) = lVar10;
    *(undefined1 **)(puVar3 + -0x10) = puVar15;
    *(code **)(puVar3 + -8) = pcVar16;
    uVar8 = auVar22._8_4_;
    if (uVar8 == 0xffffffff) {
      return uVar6;
    }
    lVar11 = *(long *)(uVar6 + 0x70);
    if (lVar11 == 0) {
      func_0x00f78af4();
    }
    else {
      lVar10 = auVar22._8_8_;
      if (uVar8 < *(uint *)(lVar11 + 0x18)) {
        uVar12 = 2;
        if ((int)uVar9 == 0) {
          uVar12 = 0;
        }
        *(undefined4 *)(lVar11 + (long)(int)uVar8 * 0x60 + 0x5c) = uVar12;
        if ((param_4 & 1) == 0) {
          Atlas_UI_Screens_TopBarScreen__ForceButtonState(uVar6,auVar22._8_8_);
        }
        *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
        *(long *)(puVar3 + -0x48) = unaff_x25;
        *(long *)(puVar3 + -0x40) = unaff_x24;
        *(long *)(puVar3 + -0x38) = unaff_x23;
        *(long *)(puVar3 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
        *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        lVar10 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar11 = *(long *)(uVar6 + 0x70);
        if (lVar11 == 0) goto LAB_0150c7d4;
        if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_0150c7d8;
        unaff_x25 = (long)(int)uVar8;
        lVar11 = lVar11 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar11 + 0x20);
        unaff_x22 = *(long *)(lVar11 + 0x28);
        uVar7 = *(undefined8 *)(lVar11 + 0x30);
        uVar18 = *(undefined8 *)(lVar11 + 0x48);
        uVar17 = *(undefined8 *)(lVar11 + 0x40);
        *(undefined8 *)(puVar3 + -0xe8) = *(undefined8 *)(lVar11 + 0x38);
        *(undefined8 *)(puVar3 + -0xf0) = uVar7;
        *(undefined8 *)(puVar3 + -0xd8) = uVar18;
        *(undefined8 *)(puVar3 + -0xe0) = uVar17;
        lVar10 = *(long *)(lVar11 + 0x50);
        iVar14 = *(int *)(lVar11 + 0x58);
        iVar1 = *(int *)(lVar11 + 0x5c);
        unaff_x23 = *(long *)(lVar11 + 0x60);
        unaff_x24 = *(long *)(lVar11 + 0x68);
        uVar7 = *(undefined8 *)(lVar11 + 0x70);
        *(undefined8 *)(puVar3 + -0xf8) = *(undefined8 *)(lVar11 + 0x78);
        *(undefined8 *)(puVar3 + -0x100) = uVar7;
        if (iVar1 == iVar14) {
LAB_0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
          if ((int)uVar9 == 0) {
            return uVar9;
          }
          if (lVar10 != 0) {
            uVar9 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar10,iVar14 == 2,0);
            return uVar9;
          }
        }
        else if (iVar14 == 2) {
          if (iVar1 == 0) {
            if (unaff_x24 == 0) goto LAB_0150c7d4;
            uVar17 = *(undefined8 *)(lVar11 + 0x38);
            uVar7 = *(undefined8 *)(lVar11 + 0x30);
            uVar19 = *(undefined8 *)(lVar11 + 0x48);
            uVar18 = *(undefined8 *)(lVar11 + 0x40);
            *(undefined8 *)(puVar3 + -0x118) = uVar17;
            *(undefined8 *)(puVar3 + -0x120) = uVar7;
            *(undefined8 *)(puVar3 + -0x108) = uVar19;
            *(undefined8 *)(puVar3 + -0x110) = uVar18;
            uVar21 = *(undefined8 *)(lVar11 + 0x78);
            uVar20 = *(undefined8 *)(lVar11 + 0x70);
            *(undefined8 *)(puVar3 + -0x128) = uVar21;
            *(undefined8 *)(puVar3 + -0x130) = uVar20;
            *(undefined8 *)(puVar3 + -200) = unaff_x26;
            *(long *)(puVar3 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar3 + -0xb0) = uVar17;
            *(undefined8 *)(puVar3 + -0xb8) = uVar7;
            *(undefined8 *)(puVar3 + -0xa0) = uVar19;
            *(undefined8 *)(puVar3 + -0xa8) = uVar18;
            *(long *)(puVar3 + -0x98) = lVar10;
            *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8620;
            *(long *)(puVar3 + -0x88) = unaff_x23;
            *(long *)(puVar3 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar3 + -0x70) = uVar21;
            *(undefined8 *)(puVar3 + -0x78) = uVar20;
            lVar11 = unaff_x24;
LAB_0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar11,puVar3 + -200,uRam0000000003d2a408);
            iVar14 = 1;
          }
          else {
            iVar14 = 2;
          }
LAB_0150c72c:
          lVar11 = *(long *)(uVar6 + 0x70);
          if (lVar11 != 0) {
            if (*(uint *)(lVar11 + 0x18) <= uVar8) goto LAB_0150c7d8;
            lVar11 = lVar11 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar11 + 0x20) = unaff_x26;
            *(long *)(lVar11 + 0x28) = unaff_x22;
            uVar7 = *(undefined8 *)(puVar3 + -0xf0);
            uVar18 = *(undefined8 *)(puVar3 + -0xd8);
            uVar17 = *(undefined8 *)(puVar3 + -0xe0);
            *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(puVar3 + -0xe8);
            *(undefined8 *)(lVar11 + 0x30) = uVar7;
            *(undefined8 *)(lVar11 + 0x48) = uVar18;
            *(undefined8 *)(lVar11 + 0x40) = uVar17;
            *(long *)(lVar11 + 0x50) = lVar10;
            *(int *)(lVar11 + 0x58) = iVar14;
            *(int *)(lVar11 + 0x5c) = iVar1;
            *(long *)(lVar11 + 0x60) = unaff_x23;
            *(long *)(lVar11 + 0x68) = unaff_x24;
            uVar7 = *(undefined8 *)(puVar3 + -0x100);
            *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(puVar3 + -0xf8);
            *(undefined8 *)(lVar11 + 0x70) = uVar7;
            goto LAB_0150c768;
          }
        }
        else {
          if (iVar14 != 0) goto LAB_0150c72c;
          if (iVar1 != 2) {
            iVar14 = 0;
            goto LAB_0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar11 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar11,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar3 + -200) = unaff_x26;
            *(long *)(puVar3 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xe8);
            *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0xf0);
            *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xd8);
            *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xe0);
            *(long *)(puVar3 + -0x98) = lVar10;
            *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8628;
            *(long *)(puVar3 + -0x88) = unaff_x23;
            *(long *)(puVar3 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0xf8);
            *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x100);
            lVar11 = unaff_x23;
            goto LAB_0150c724;
          }
        }
LAB_0150c7d4:
        func_0x00f78af4();
LAB_0150c7d8:
        uVar7 = func_0x00f78b24();
        auVar24 = func_0x00f78ac0(uVar7,0);
        lVar11 = auVar24._8_8_;
        *(undefined8 *)(puVar3 + -0x180) = unaff_x26;
        *(long *)(puVar3 + -0x178) = unaff_x25;
        *(long *)(puVar3 + -0x170) = unaff_x24;
        *(long *)(puVar3 + -0x168) = unaff_x23;
        *(long *)(puVar3 + -0x160) = unaff_x22;
        *(undefined1 (*) [16])(puVar3 + -0x158) = auVar22;
        *(long *)(puVar3 + -0x148) = lVar10;
        *(undefined1 **)(puVar3 + -0x140) = puVar3 + -0x10;
        *(code **)(puVar3 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar7 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x1c),
                                *(undefined4 *)(lVar11 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar11 + 0x10),0,0);
        uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar7,10,uRam0000000003d5e7a8);
        uVar7 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar7,*(undefined8 *)(lVar11 + 0x58),uRam0000000003d5e6e0);
        uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar7,1,uRam0000000003d5e888);
        uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar7,auVar24._0_8_,uRam0000000003d5e850);
        if ((uVar9 != 0) && (*(char *)(uVar9 + 0xe8) != '\0')) {
          *(undefined8 *)(uVar9 + 0x30) = *(undefined8 *)(lVar11 + 0x10);
        }
        return uVar9;
      }
    }
    uVar7 = func_0x00f78b24();
    auVar24 = func_0x00f78ac0(uVar7,0);
    puVar15 = puVar3 + -0x30;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar11 = *(long *)(auVar24._0_8_ + 0x28);
    auVar23._8_8_ = auVar24._8_8_;
    auVar23._0_8_ = lVar11;
    if (lVar11 == 0) {
      pcVar16 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar23 = func_0x00f78af4();
      puVar3 = puVar3 + -0x30;
    }
    else {
      puVar15 = *(undefined1 **)(puVar3 + -0x30);
      pcVar16 = *(code **)(puVar3 + -0x28);
      puVar3 = puVar3 + -0x20;
    }
    param_4 = auVar23._8_8_;
    uVar7 = auVar23._0_8_;
    *(ulong *)(puVar3 + -0x20) = uVar6;
    *(long *)(puVar3 + -0x18) = lVar10;
    *(undefined1 **)(puVar3 + -0x10) = puVar15;
    *(code **)(puVar3 + -8) = pcVar16;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar7,4,0,param_4);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar7,5,0,param_4);
    auVar22._8_8_ = 7;
    auVar22._0_8_ = uVar7;
    uVar9 = 0;
    puVar15 = *(undefined1 **)(puVar3 + -0x10);
    pcVar16 = *(code **)(puVar3 + -8);
    unaff_x20 = *(ulong *)(puVar3 + -0x20);
    lVar10 = *(long *)(puVar3 + -0x18);
  } while( true );
}



// ============================================================
// RVA: 0x150bb34 | Atlas.UI.TopBarManager.GetButtonElementState
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_TopBarManager__GetButtonElementState
                (long param_1,uint param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 extraout_w1;
  uint uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar10;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar11;
  code *unaff_x30;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  
  puVar2 = &stack0xfffffffffffffff0;
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
    unaff_x30 = Atlas_UI_Screens_TopBarScreen__GetElementState;
    auVar20 = func_0x00f78af4();
    param_2 = auVar20._8_4_;
    lVar4 = auVar20._0_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar2;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  lVar4 = *(long *)(lVar4 + 0x70);
  if (param_2 < 9) {
    uVar7 = *(uint *)(&UNK_033f869c + (long)(int)param_2 * 4);
  }
  else {
    uVar7 = 0xffffffff;
  }
  if (lVar4 == 0) {
    func_0x00f78af4();
  }
  else if (uVar7 < *(uint *)(lVar4 + 0x18)) {
    return (ulong)*(uint *)(lVar4 + (ulong)uVar7 * 0x60 + 0x58);
  }
  uVar5 = func_0x00f78b24();
  uVar6 = func_0x00f78ac0(uVar5,0);
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x18) =
       &Atlas_UI_TopBarManager__SetNextPanelEnabledVisuals;
  if (*(long *)(uVar6 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(uVar6 + 0x28) + 0x80) = extraout_w1;
    return uVar6;
  }
  lVar4 = func_0x00f78af4();
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(undefined **)((long)register0x00000008 + -0x28) =
       &Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
  puVar11 = (undefined1 *)((long)register0x00000008 + -0x30);
  if (*(long *)(lVar4 + 0x28) != 0) {
    param_3 = 0;
    param_4 = 1;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(lVar4 + 0x28),0);
    if (*(long *)(lVar4 + 0x28) != 0) {
      param_3 = 0;
      param_4 = 1;
      Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(lVar4 + 0x28),4);
      if (*(long *)(lVar4 + 0x28) != 0) {
        param_3 = 0;
        param_4 = 1;
        Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(lVar4 + 0x28),6);
        if (*(long *)(lVar4 + 0x28) != 0) {
          auVar18._8_8_ = 7;
          auVar18._0_8_ = *(long *)(lVar4 + 0x28);
          param_3 = 0;
          param_4 = 1;
          puVar11 = *(undefined1 **)((long)register0x00000008 + -0x30);
          pcVar12 = *(code **)((long)register0x00000008 + -0x28);
          puVar3 = (undefined1 *)((long)register0x00000008 + -0x20);
          unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x40);
          lVar4 = *(long *)((long)register0x00000008 + -0x38);
          goto code_r0x0150bc48;
        }
      }
    }
  }
  pcVar12 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
  auVar18 = func_0x00f78af4();
code_r0x0150bc48:
  do {
    uVar6 = auVar18._0_8_;
    *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
    *(long *)(puVar3 + -0x18) = lVar4;
    *(undefined1 **)(puVar3 + -0x10) = puVar11;
    *(code **)(puVar3 + -8) = pcVar12;
    uVar7 = auVar18._8_4_;
    if (uVar7 == 0xffffffff) {
      return uVar6;
    }
    lVar8 = *(long *)(uVar6 + 0x70);
    if (lVar8 == 0) {
      func_0x00f78af4();
    }
    else {
      lVar4 = auVar18._8_8_;
      if (uVar7 < *(uint *)(lVar8 + 0x18)) {
        uVar9 = 2;
        if ((int)param_3 == 0) {
          uVar9 = 0;
        }
        *(undefined4 *)(lVar8 + (long)(int)uVar7 * 0x60 + 0x5c) = uVar9;
        if ((param_4 & 1) == 0) {
          Atlas_UI_Screens_TopBarScreen__ForceButtonState(uVar6,auVar18._8_8_);
        }
        *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
        *(long *)(puVar3 + -0x48) = unaff_x25;
        *(long *)(puVar3 + -0x40) = unaff_x24;
        *(long *)(puVar3 + -0x38) = unaff_x23;
        *(long *)(puVar3 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
        *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        lVar4 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar8 = *(long *)(uVar6 + 0x70);
        if (lVar8 == 0) goto LAB_0150c7d4;
        if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_0150c7d8;
        unaff_x25 = (long)(int)uVar7;
        lVar8 = lVar8 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar8 + 0x20);
        unaff_x22 = *(long *)(lVar8 + 0x28);
        uVar5 = *(undefined8 *)(lVar8 + 0x30);
        uVar14 = *(undefined8 *)(lVar8 + 0x48);
        uVar13 = *(undefined8 *)(lVar8 + 0x40);
        *(undefined8 *)(puVar3 + -0xe8) = *(undefined8 *)(lVar8 + 0x38);
        *(undefined8 *)(puVar3 + -0xf0) = uVar5;
        *(undefined8 *)(puVar3 + -0xd8) = uVar14;
        *(undefined8 *)(puVar3 + -0xe0) = uVar13;
        lVar4 = *(long *)(lVar8 + 0x50);
        iVar10 = *(int *)(lVar8 + 0x58);
        iVar1 = *(int *)(lVar8 + 0x5c);
        unaff_x23 = *(long *)(lVar8 + 0x60);
        unaff_x24 = *(long *)(lVar8 + 0x68);
        uVar5 = *(undefined8 *)(lVar8 + 0x70);
        *(undefined8 *)(puVar3 + -0xf8) = *(undefined8 *)(lVar8 + 0x78);
        *(undefined8 *)(puVar3 + -0x100) = uVar5;
        if (iVar1 == iVar10) {
LAB_0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          if (lVar4 != 0) {
            uVar6 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar4,iVar10 == 2,0);
            return uVar6;
          }
        }
        else if (iVar10 == 2) {
          if (iVar1 == 0) {
            if (unaff_x24 == 0) goto LAB_0150c7d4;
            uVar13 = *(undefined8 *)(lVar8 + 0x38);
            uVar5 = *(undefined8 *)(lVar8 + 0x30);
            uVar15 = *(undefined8 *)(lVar8 + 0x48);
            uVar14 = *(undefined8 *)(lVar8 + 0x40);
            *(undefined8 *)(puVar3 + -0x118) = uVar13;
            *(undefined8 *)(puVar3 + -0x120) = uVar5;
            *(undefined8 *)(puVar3 + -0x108) = uVar15;
            *(undefined8 *)(puVar3 + -0x110) = uVar14;
            uVar17 = *(undefined8 *)(lVar8 + 0x78);
            uVar16 = *(undefined8 *)(lVar8 + 0x70);
            *(undefined8 *)(puVar3 + -0x128) = uVar17;
            *(undefined8 *)(puVar3 + -0x130) = uVar16;
            *(undefined8 *)(puVar3 + -200) = unaff_x26;
            *(long *)(puVar3 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar3 + -0xb0) = uVar13;
            *(undefined8 *)(puVar3 + -0xb8) = uVar5;
            *(undefined8 *)(puVar3 + -0xa0) = uVar15;
            *(undefined8 *)(puVar3 + -0xa8) = uVar14;
            *(long *)(puVar3 + -0x98) = lVar4;
            *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8620;
            *(long *)(puVar3 + -0x88) = unaff_x23;
            *(long *)(puVar3 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar3 + -0x70) = uVar17;
            *(undefined8 *)(puVar3 + -0x78) = uVar16;
            lVar8 = unaff_x24;
LAB_0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar8,puVar3 + -200,uRam0000000003d2a408);
            iVar10 = 1;
          }
          else {
            iVar10 = 2;
          }
LAB_0150c72c:
          lVar8 = *(long *)(uVar6 + 0x70);
          if (lVar8 != 0) {
            if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_0150c7d8;
            lVar8 = lVar8 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar8 + 0x20) = unaff_x26;
            *(long *)(lVar8 + 0x28) = unaff_x22;
            uVar5 = *(undefined8 *)(puVar3 + -0xf0);
            uVar14 = *(undefined8 *)(puVar3 + -0xd8);
            uVar13 = *(undefined8 *)(puVar3 + -0xe0);
            *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(puVar3 + -0xe8);
            *(undefined8 *)(lVar8 + 0x30) = uVar5;
            *(undefined8 *)(lVar8 + 0x48) = uVar14;
            *(undefined8 *)(lVar8 + 0x40) = uVar13;
            *(long *)(lVar8 + 0x50) = lVar4;
            *(int *)(lVar8 + 0x58) = iVar10;
            *(int *)(lVar8 + 0x5c) = iVar1;
            *(long *)(lVar8 + 0x60) = unaff_x23;
            *(long *)(lVar8 + 0x68) = unaff_x24;
            uVar5 = *(undefined8 *)(puVar3 + -0x100);
            *(undefined8 *)(lVar8 + 0x78) = *(undefined8 *)(puVar3 + -0xf8);
            *(undefined8 *)(lVar8 + 0x70) = uVar5;
            goto LAB_0150c768;
          }
        }
        else {
          if (iVar10 != 0) goto LAB_0150c72c;
          if (iVar1 != 2) {
            iVar10 = 0;
            goto LAB_0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar8 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar3 + -200) = unaff_x26;
            *(long *)(puVar3 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xe8);
            *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0xf0);
            *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xd8);
            *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xe0);
            *(long *)(puVar3 + -0x98) = lVar4;
            *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8628;
            *(long *)(puVar3 + -0x88) = unaff_x23;
            *(long *)(puVar3 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0xf8);
            *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x100);
            lVar8 = unaff_x23;
            goto LAB_0150c724;
          }
        }
LAB_0150c7d4:
        func_0x00f78af4();
LAB_0150c7d8:
        uVar5 = func_0x00f78b24();
        auVar19 = func_0x00f78ac0(uVar5,0);
        lVar8 = auVar19._8_8_;
        *(undefined8 *)(puVar3 + -0x180) = unaff_x26;
        *(long *)(puVar3 + -0x178) = unaff_x25;
        *(long *)(puVar3 + -0x170) = unaff_x24;
        *(long *)(puVar3 + -0x168) = unaff_x23;
        *(long *)(puVar3 + -0x160) = unaff_x22;
        *(undefined1 (*) [16])(puVar3 + -0x158) = auVar18;
        *(long *)(puVar3 + -0x148) = lVar4;
        *(undefined1 **)(puVar3 + -0x140) = puVar3 + -0x10;
        *(code **)(puVar3 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar5 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x1c),
                                *(undefined4 *)(lVar8 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar8 + 0x10),0,0);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,10,uRam0000000003d5e7a8);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar5,*(undefined8 *)(lVar8 + 0x58),uRam0000000003d5e6e0);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar5,1,uRam0000000003d5e888);
        uVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar5,auVar19._0_8_,uRam0000000003d5e850);
        if ((uVar6 != 0) && (*(char *)(uVar6 + 0xe8) != '\0')) {
          *(undefined8 *)(uVar6 + 0x30) = *(undefined8 *)(lVar8 + 0x10);
        }
        return uVar6;
      }
    }
    uVar5 = func_0x00f78b24();
    auVar18 = func_0x00f78ac0(uVar5,0);
    puVar11 = puVar3 + -0x30;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar8 = *(long *)(auVar18._0_8_ + 0x28);
    auVar19._8_8_ = auVar18._8_8_;
    auVar19._0_8_ = lVar8;
    if (lVar8 == 0) {
      pcVar12 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar19 = func_0x00f78af4();
      puVar3 = puVar3 + -0x30;
    }
    else {
      puVar11 = *(undefined1 **)(puVar3 + -0x30);
      pcVar12 = *(code **)(puVar3 + -0x28);
      puVar3 = puVar3 + -0x20;
    }
    param_4 = auVar19._8_8_;
    uVar5 = auVar19._0_8_;
    *(ulong *)(puVar3 + -0x20) = uVar6;
    *(long *)(puVar3 + -0x18) = lVar4;
    *(undefined1 **)(puVar3 + -0x10) = puVar11;
    *(code **)(puVar3 + -8) = pcVar12;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar5,4,0,param_4);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar5,5,0,param_4);
    auVar18._8_8_ = 7;
    auVar18._0_8_ = uVar5;
    param_3 = 0;
    puVar11 = *(undefined1 **)(puVar3 + -0x10);
    pcVar12 = *(code **)(puVar3 + -8);
    unaff_x20 = *(undefined8 *)(puVar3 + -0x20);
    lVar4 = *(long *)(puVar3 + -0x18);
  } while( true );
}



// ============================================================
// RVA: 0x150bbac | Atlas.UI.TopBarManager.SetNextPanelEnabledVisuals
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_TopBarManager__SetNextPanelEnabledVisuals
               (long param_1,undefined1 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar9;
  undefined8 unaff_x28;
  undefined8 ***pppuVar10;
  undefined1 *puVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 **ppuStack_20;
  code *pcStack_18;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x80) = param_2;
    return;
  }
  lVar3 = func_0x00f78af4();
  puVar1 = &stack0xffffffffffffffd0;
  pcStack_18 = (code *)&Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
  pppuVar10 = &ppuStack_20;
  ppuStack_20 = (undefined8 **)&stack0xfffffffffffffff0;
  if (*(long *)(lVar3 + 0x28) != 0) {
    param_3 = 0;
    param_4 = 1;
    ppuStack_20 = (undefined8 **)&stack0xfffffffffffffff0;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(lVar3 + 0x28),0);
    if (*(long *)(lVar3 + 0x28) != 0) {
      param_3 = 0;
      param_4 = 1;
      Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(lVar3 + 0x28),4);
      if (*(long *)(lVar3 + 0x28) != 0) {
        param_3 = 0;
        param_4 = 1;
        Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(lVar3 + 0x28),6);
        if (*(long *)(lVar3 + 0x28) != 0) {
          auVar18._8_8_ = 7;
          auVar18._0_8_ = *(long *)(lVar3 + 0x28);
          param_3 = 0;
          param_4 = 1;
          puVar1 = &stack0xfffffffffffffff0;
          lVar3 = unaff_x19;
          pppuVar10 = (undefined8 ***)ppuStack_20;
          pcVar12 = pcStack_18;
          goto code_r0x0150bc48;
        }
      }
    }
  }
  pcVar12 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
  auVar18 = func_0x00f78af4();
code_r0x0150bc48:
  do {
    lVar7 = auVar18._0_8_;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = lVar3;
    *(undefined8 ****)(puVar1 + -0x10) = pppuVar10;
    *(code **)(puVar1 + -8) = pcVar12;
    uVar5 = auVar18._8_4_;
    if (uVar5 == 0xffffffff) {
      return;
    }
    lVar6 = *(long *)(lVar7 + 0x70);
    if (lVar6 == 0) {
      func_0x00f78af4();
    }
    else {
      lVar3 = auVar18._8_8_;
      if (uVar5 < *(uint *)(lVar6 + 0x18)) {
        uVar8 = 2;
        if ((int)param_3 == 0) {
          uVar8 = 0;
        }
        *(undefined4 *)(lVar6 + (long)(int)uVar5 * 0x60 + 0x5c) = uVar8;
        if ((param_4 & 1) == 0) {
          Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar7,auVar18._8_8_);
        }
        *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar1 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
        *(long *)(puVar1 + -0x48) = unaff_x25;
        *(long *)(puVar1 + -0x40) = unaff_x24;
        *(long *)(puVar1 + -0x38) = unaff_x23;
        *(long *)(puVar1 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
        *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
        *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
        *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
        lVar3 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar6 = *(long *)(lVar7 + 0x70);
        if (lVar6 == 0) goto LAB_0150c7d4;
        if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_0150c7d8;
        unaff_x25 = (long)(int)uVar5;
        lVar6 = lVar6 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar6 + 0x20);
        unaff_x22 = *(long *)(lVar6 + 0x28);
        uVar4 = *(undefined8 *)(lVar6 + 0x30);
        uVar14 = *(undefined8 *)(lVar6 + 0x48);
        uVar13 = *(undefined8 *)(lVar6 + 0x40);
        *(undefined8 *)(puVar1 + -0xe8) = *(undefined8 *)(lVar6 + 0x38);
        *(undefined8 *)(puVar1 + -0xf0) = uVar4;
        *(undefined8 *)(puVar1 + -0xd8) = uVar14;
        *(undefined8 *)(puVar1 + -0xe0) = uVar13;
        lVar3 = *(long *)(lVar6 + 0x50);
        iVar9 = *(int *)(lVar6 + 0x58);
        iVar2 = *(int *)(lVar6 + 0x5c);
        unaff_x23 = *(long *)(lVar6 + 0x60);
        unaff_x24 = *(long *)(lVar6 + 0x68);
        uVar4 = *(undefined8 *)(lVar6 + 0x70);
        *(undefined8 *)(puVar1 + -0xf8) = *(undefined8 *)(lVar6 + 0x78);
        *(undefined8 *)(puVar1 + -0x100) = uVar4;
        if (iVar2 == iVar9) {
LAB_0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0,0);
          if (iVar2 == 0) {
            return;
          }
          if (lVar3 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar3,iVar9 == 2,0);
            return;
          }
        }
        else if (iVar9 == 2) {
          if (iVar2 == 0) {
            if (unaff_x24 == 0) goto LAB_0150c7d4;
            uVar13 = *(undefined8 *)(lVar6 + 0x38);
            uVar4 = *(undefined8 *)(lVar6 + 0x30);
            uVar15 = *(undefined8 *)(lVar6 + 0x48);
            uVar14 = *(undefined8 *)(lVar6 + 0x40);
            *(undefined8 *)(puVar1 + -0x118) = uVar13;
            *(undefined8 *)(puVar1 + -0x120) = uVar4;
            *(undefined8 *)(puVar1 + -0x108) = uVar15;
            *(undefined8 *)(puVar1 + -0x110) = uVar14;
            uVar17 = *(undefined8 *)(lVar6 + 0x78);
            uVar16 = *(undefined8 *)(lVar6 + 0x70);
            *(undefined8 *)(puVar1 + -0x128) = uVar17;
            *(undefined8 *)(puVar1 + -0x130) = uVar16;
            *(undefined8 *)(puVar1 + -200) = unaff_x26;
            *(long *)(puVar1 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar1 + -0xb0) = uVar13;
            *(undefined8 *)(puVar1 + -0xb8) = uVar4;
            *(undefined8 *)(puVar1 + -0xa0) = uVar15;
            *(undefined8 *)(puVar1 + -0xa8) = uVar14;
            *(long *)(puVar1 + -0x98) = lVar3;
            *(undefined8 *)(puVar1 + -0x90) = _UNK_033f8620;
            *(long *)(puVar1 + -0x88) = unaff_x23;
            *(long *)(puVar1 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar1 + -0x70) = uVar17;
            *(undefined8 *)(puVar1 + -0x78) = uVar16;
            lVar6 = unaff_x24;
LAB_0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar6,puVar1 + -200,uRam0000000003d2a408);
            iVar9 = 1;
          }
          else {
            iVar9 = 2;
          }
LAB_0150c72c:
          lVar7 = *(long *)(lVar7 + 0x70);
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_0150c7d8;
            lVar7 = lVar7 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar7 + 0x20) = unaff_x26;
            *(long *)(lVar7 + 0x28) = unaff_x22;
            uVar4 = *(undefined8 *)(puVar1 + -0xf0);
            uVar14 = *(undefined8 *)(puVar1 + -0xd8);
            uVar13 = *(undefined8 *)(puVar1 + -0xe0);
            *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(puVar1 + -0xe8);
            *(undefined8 *)(lVar7 + 0x30) = uVar4;
            *(undefined8 *)(lVar7 + 0x48) = uVar14;
            *(undefined8 *)(lVar7 + 0x40) = uVar13;
            *(long *)(lVar7 + 0x50) = lVar3;
            *(int *)(lVar7 + 0x58) = iVar9;
            *(int *)(lVar7 + 0x5c) = iVar2;
            *(long *)(lVar7 + 0x60) = unaff_x23;
            *(long *)(lVar7 + 0x68) = unaff_x24;
            uVar4 = *(undefined8 *)(puVar1 + -0x100);
            *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(puVar1 + -0xf8);
            *(undefined8 *)(lVar7 + 0x70) = uVar4;
            goto LAB_0150c768;
          }
        }
        else {
          if (iVar9 != 0) goto LAB_0150c72c;
          if (iVar2 != 2) {
            iVar9 = 0;
            goto LAB_0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar6 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar1 + -200) = unaff_x26;
            *(long *)(puVar1 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -0xe8);
            *(undefined8 *)(puVar1 + -0xb8) = *(undefined8 *)(puVar1 + -0xf0);
            *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar1 + -0xd8);
            *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(puVar1 + -0xe0);
            *(long *)(puVar1 + -0x98) = lVar3;
            *(undefined8 *)(puVar1 + -0x90) = _UNK_033f8628;
            *(long *)(puVar1 + -0x88) = unaff_x23;
            *(long *)(puVar1 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)(puVar1 + -0xf8);
            *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0x100);
            lVar6 = unaff_x23;
            goto LAB_0150c724;
          }
        }
LAB_0150c7d4:
        func_0x00f78af4();
LAB_0150c7d8:
        uVar4 = func_0x00f78b24();
        auVar19 = func_0x00f78ac0(uVar4,0);
        lVar7 = auVar19._8_8_;
        *(undefined8 *)(puVar1 + -0x180) = unaff_x26;
        *(long *)(puVar1 + -0x178) = unaff_x25;
        *(long *)(puVar1 + -0x170) = unaff_x24;
        *(long *)(puVar1 + -0x168) = unaff_x23;
        *(long *)(puVar1 + -0x160) = unaff_x22;
        *(undefined1 (*) [16])(puVar1 + -0x158) = auVar18;
        *(long *)(puVar1 + -0x148) = lVar3;
        *(undefined1 **)(puVar1 + -0x140) = puVar1 + -0x10;
        *(code **)(puVar1 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar4 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c),
                                *(undefined4 *)(lVar7 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar7 + 0x10),0,0);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,10,uRam0000000003d5e7a8);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar4,*(undefined8 *)(lVar7 + 0x58),uRam0000000003d5e6e0);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar4,1,uRam0000000003d5e888);
        lVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar4,auVar19._0_8_,uRam0000000003d5e850);
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar7 + 0x10);
        }
        return;
      }
    }
    uVar4 = func_0x00f78b24();
    auVar18 = func_0x00f78ac0(uVar4,0);
    puVar11 = puVar1 + -0x30;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar6 = *(long *)(auVar18._0_8_ + 0x28);
    auVar19._8_8_ = auVar18._8_8_;
    auVar19._0_8_ = lVar6;
    if (lVar6 == 0) {
      pcVar12 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar19 = func_0x00f78af4();
      puVar1 = puVar1 + -0x30;
    }
    else {
      puVar11 = *(undefined1 **)(puVar1 + -0x30);
      pcVar12 = *(code **)(puVar1 + -0x28);
      puVar1 = puVar1 + -0x20;
    }
    param_4 = auVar19._8_8_;
    uVar4 = auVar19._0_8_;
    *(long *)(puVar1 + -0x20) = lVar7;
    *(long *)(puVar1 + -0x18) = lVar3;
    *(undefined1 **)(puVar1 + -0x10) = puVar11;
    *(code **)(puVar1 + -8) = pcVar12;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar4,4,0,param_4);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar4,5,0,param_4);
    auVar18._8_8_ = 7;
    auVar18._0_8_ = uVar4;
    param_3 = 0;
    pppuVar10 = *(undefined8 ****)(puVar1 + -0x10);
    pcVar12 = *(code **)(puVar1 + -8);
    unaff_x20 = *(undefined8 *)(puVar1 + -0x20);
    lVar3 = *(long *)(puVar1 + -0x18);
  } while( true );
}



// ============================================================
// RVA: 0x150bbcc | Atlas.UI.TopBarManager.RequestHideBackAndNextAndPanels
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels
               (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar9;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar10;
  code *unaff_x30;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar10 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0x28) != 0) {
    param_3 = 0;
    param_4 = 1;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(param_1 + 0x28),0);
    if (*(long *)(param_1 + 0x28) != 0) {
      param_3 = 0;
      param_4 = 1;
      Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(param_1 + 0x28),4);
      if (*(long *)(param_1 + 0x28) != 0) {
        param_3 = 0;
        param_4 = 1;
        Atlas_UI_Screens_TopBarScreen__RequestElementVisible(*(long *)(param_1 + 0x28),6);
        if (*(long *)(param_1 + 0x28) != 0) {
          auVar17._8_8_ = 7;
          auVar17._0_8_ = *(long *)(param_1 + 0x28);
          param_3 = 0;
          param_4 = 1;
          puVar1 = (undefined1 *)register0x00000008;
          param_1 = unaff_x19;
          puVar10 = unaff_x29;
          goto code_r0x0150bc48;
        }
      }
    }
  }
  unaff_x30 = Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
  auVar17 = func_0x00f78af4();
code_r0x0150bc48:
  do {
    lVar7 = auVar17._0_8_;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar10;
    *(code **)(puVar1 + -8) = unaff_x30;
    uVar4 = auVar17._8_4_;
    if (uVar4 == 0xffffffff) {
      return;
    }
    lVar5 = *(long *)(lVar7 + 0x70);
    if (lVar5 == 0) {
      func_0x00f78af4();
    }
    else {
      param_1 = auVar17._8_8_;
      if (uVar4 < *(uint *)(lVar5 + 0x18)) {
        uVar8 = 2;
        if ((int)param_3 == 0) {
          uVar8 = 0;
        }
        *(undefined4 *)(lVar5 + (long)(int)uVar4 * 0x60 + 0x5c) = uVar8;
        if ((param_4 & 1) == 0) {
          Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar7,auVar17._8_8_);
        }
        *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar1 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
        *(long *)(puVar1 + -0x48) = unaff_x25;
        *(long *)(puVar1 + -0x40) = unaff_x24;
        *(long *)(puVar1 + -0x38) = unaff_x23;
        *(long *)(puVar1 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
        *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
        *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
        *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
        lVar5 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar6 = *(long *)(lVar7 + 0x70);
        if (lVar6 == 0) goto LAB_0150c7d4;
        if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_0150c7d8;
        unaff_x25 = (long)(int)uVar4;
        lVar6 = lVar6 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar6 + 0x20);
        unaff_x22 = *(long *)(lVar6 + 0x28);
        uVar3 = *(undefined8 *)(lVar6 + 0x30);
        uVar13 = *(undefined8 *)(lVar6 + 0x48);
        uVar12 = *(undefined8 *)(lVar6 + 0x40);
        *(undefined8 *)(puVar1 + -0xe8) = *(undefined8 *)(lVar6 + 0x38);
        *(undefined8 *)(puVar1 + -0xf0) = uVar3;
        *(undefined8 *)(puVar1 + -0xd8) = uVar13;
        *(undefined8 *)(puVar1 + -0xe0) = uVar12;
        lVar5 = *(long *)(lVar6 + 0x50);
        iVar9 = *(int *)(lVar6 + 0x58);
        iVar2 = *(int *)(lVar6 + 0x5c);
        unaff_x23 = *(long *)(lVar6 + 0x60);
        unaff_x24 = *(long *)(lVar6 + 0x68);
        uVar3 = *(undefined8 *)(lVar6 + 0x70);
        *(undefined8 *)(puVar1 + -0xf8) = *(undefined8 *)(lVar6 + 0x78);
        *(undefined8 *)(puVar1 + -0x100) = uVar3;
        if (iVar2 == iVar9) {
LAB_0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
          if (iVar2 == 0) {
            return;
          }
          if (lVar5 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar5,iVar9 == 2,0);
            return;
          }
        }
        else if (iVar9 == 2) {
          if (iVar2 == 0) {
            if (unaff_x24 == 0) goto LAB_0150c7d4;
            uVar12 = *(undefined8 *)(lVar6 + 0x38);
            uVar3 = *(undefined8 *)(lVar6 + 0x30);
            uVar14 = *(undefined8 *)(lVar6 + 0x48);
            uVar13 = *(undefined8 *)(lVar6 + 0x40);
            *(undefined8 *)(puVar1 + -0x118) = uVar12;
            *(undefined8 *)(puVar1 + -0x120) = uVar3;
            *(undefined8 *)(puVar1 + -0x108) = uVar14;
            *(undefined8 *)(puVar1 + -0x110) = uVar13;
            uVar16 = *(undefined8 *)(lVar6 + 0x78);
            uVar15 = *(undefined8 *)(lVar6 + 0x70);
            *(undefined8 *)(puVar1 + -0x128) = uVar16;
            *(undefined8 *)(puVar1 + -0x130) = uVar15;
            *(undefined8 *)(puVar1 + -200) = unaff_x26;
            *(long *)(puVar1 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar1 + -0xb0) = uVar12;
            *(undefined8 *)(puVar1 + -0xb8) = uVar3;
            *(undefined8 *)(puVar1 + -0xa0) = uVar14;
            *(undefined8 *)(puVar1 + -0xa8) = uVar13;
            *(long *)(puVar1 + -0x98) = lVar5;
            *(undefined8 *)(puVar1 + -0x90) = _UNK_033f8620;
            *(long *)(puVar1 + -0x88) = unaff_x23;
            *(long *)(puVar1 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar1 + -0x70) = uVar16;
            *(undefined8 *)(puVar1 + -0x78) = uVar15;
            lVar6 = unaff_x24;
LAB_0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar6,puVar1 + -200,uRam0000000003d2a408);
            iVar9 = 1;
          }
          else {
            iVar9 = 2;
          }
LAB_0150c72c:
          lVar7 = *(long *)(lVar7 + 0x70);
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_0150c7d8;
            lVar7 = lVar7 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar7 + 0x20) = unaff_x26;
            *(long *)(lVar7 + 0x28) = unaff_x22;
            uVar3 = *(undefined8 *)(puVar1 + -0xf0);
            uVar13 = *(undefined8 *)(puVar1 + -0xd8);
            uVar12 = *(undefined8 *)(puVar1 + -0xe0);
            *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(puVar1 + -0xe8);
            *(undefined8 *)(lVar7 + 0x30) = uVar3;
            *(undefined8 *)(lVar7 + 0x48) = uVar13;
            *(undefined8 *)(lVar7 + 0x40) = uVar12;
            *(long *)(lVar7 + 0x50) = lVar5;
            *(int *)(lVar7 + 0x58) = iVar9;
            *(int *)(lVar7 + 0x5c) = iVar2;
            *(long *)(lVar7 + 0x60) = unaff_x23;
            *(long *)(lVar7 + 0x68) = unaff_x24;
            uVar3 = *(undefined8 *)(puVar1 + -0x100);
            *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(puVar1 + -0xf8);
            *(undefined8 *)(lVar7 + 0x70) = uVar3;
            goto LAB_0150c768;
          }
        }
        else {
          if (iVar9 != 0) goto LAB_0150c72c;
          if (iVar2 != 2) {
            iVar9 = 0;
            goto LAB_0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar6 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar1 + -200) = unaff_x26;
            *(long *)(puVar1 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -0xe8);
            *(undefined8 *)(puVar1 + -0xb8) = *(undefined8 *)(puVar1 + -0xf0);
            *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar1 + -0xd8);
            *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(puVar1 + -0xe0);
            *(long *)(puVar1 + -0x98) = lVar5;
            *(undefined8 *)(puVar1 + -0x90) = _UNK_033f8628;
            *(long *)(puVar1 + -0x88) = unaff_x23;
            *(long *)(puVar1 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)(puVar1 + -0xf8);
            *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0x100);
            lVar6 = unaff_x23;
            goto LAB_0150c724;
          }
        }
LAB_0150c7d4:
        func_0x00f78af4();
LAB_0150c7d8:
        uVar3 = func_0x00f78b24();
        auVar18 = func_0x00f78ac0(uVar3,0);
        lVar7 = auVar18._8_8_;
        *(undefined8 *)(puVar1 + -0x180) = unaff_x26;
        *(long *)(puVar1 + -0x178) = unaff_x25;
        *(long *)(puVar1 + -0x170) = unaff_x24;
        *(long *)(puVar1 + -0x168) = unaff_x23;
        *(long *)(puVar1 + -0x160) = unaff_x22;
        *(undefined1 (*) [16])(puVar1 + -0x158) = auVar17;
        *(long *)(puVar1 + -0x148) = lVar5;
        *(undefined1 **)(puVar1 + -0x140) = puVar1 + -0x10;
        *(code **)(puVar1 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar3 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c),
                                *(undefined4 *)(lVar7 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar7 + 0x10),0,0);
        uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar3,10,uRam0000000003d5e7a8);
        uVar3 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar3,*(undefined8 *)(lVar7 + 0x58),uRam0000000003d5e6e0);
        uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar3,1,uRam0000000003d5e888);
        lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar3,auVar18._0_8_,uRam0000000003d5e850);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar7 + 0x10);
        }
        return;
      }
    }
    uVar3 = func_0x00f78b24();
    auVar17 = func_0x00f78ac0(uVar3,0);
    puVar10 = puVar1 + -0x30;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar5 = *(long *)(auVar17._0_8_ + 0x28);
    auVar18._8_8_ = auVar17._8_8_;
    auVar18._0_8_ = lVar5;
    if (lVar5 == 0) {
      pcVar11 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar18 = func_0x00f78af4();
      puVar1 = puVar1 + -0x30;
    }
    else {
      puVar10 = *(undefined1 **)(puVar1 + -0x30);
      pcVar11 = *(code **)(puVar1 + -0x28);
      puVar1 = puVar1 + -0x20;
    }
    param_4 = auVar18._8_8_;
    uVar3 = auVar18._0_8_;
    *(long *)(puVar1 + -0x20) = lVar7;
    *(long *)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar10;
    *(code **)(puVar1 + -8) = pcVar11;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar3,4,0,param_4);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(uVar3,5,0,param_4);
    auVar17._8_8_ = 7;
    auVar17._0_8_ = uVar3;
    param_3 = 0;
    puVar10 = *(undefined1 **)(puVar1 + -0x10);
    unaff_x30 = *(code **)(puVar1 + -8);
    unaff_x20 = *(undefined8 *)(puVar1 + -0x20);
    param_1 = *(long *)(puVar1 + -0x18);
  } while( true );
}



// ============================================================
// RVA: 0x150bcd0 | Atlas.UI.TopBarManager.HideNextPanel
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0150bcb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_TopBarManager__HideNextPanel(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar8;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar9;
  code *unaff_x30;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = param_1;
  do {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar3 = *(long *)(auVar17._0_8_ + 0x28);
    auVar16._8_8_ = auVar17._8_8_;
    auVar16._0_8_ = lVar3;
    if (lVar3 == 0) {
      pcVar10 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar16 = func_0x00f78af4();
    }
    else {
      puVar9 = *(undefined1 **)((long)register0x00000008 + -0x10);
      pcVar10 = *(code **)((long)register0x00000008 + -8);
      puVar1 = (undefined1 *)register0x00000008;
    }
    uVar5 = auVar16._8_8_;
    lVar3 = auVar16._0_8_;
    register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x20);
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = puVar9;
    *(code **)(puVar1 + -8) = pcVar10;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar3,4,0,uVar5);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar3,5,0,uVar5);
    unaff_x19 = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    unaff_x29 = puVar1 + -0x10;
    lVar6 = *(long *)(lVar3 + 0x70);
    if (lVar6 == 0) {
      func_0x00f78af4();
    }
    else {
      unaff_x19 = 7;
      if (7 < *(uint *)(lVar6 + 0x18)) break;
    }
    uVar4 = func_0x00f78b24();
    unaff_x30 = Atlas_UI_TopBarManager__HideNextPanel;
    auVar17 = func_0x00f78ac0(uVar4,0);
    unaff_x20 = lVar3;
  } while( true );
  *(undefined4 *)(lVar6 + 0x2fc) = 0;
  if ((uVar5 & 1) == 0) {
    Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar3,7);
  }
  *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar1 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
  *(long *)(puVar1 + -0x40) = unaff_x24;
  *(long *)(puVar1 + -0x38) = unaff_x23;
  *(long *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
  *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
  *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  lVar6 = 0x3eb4000;
  if ((bRam0000000003eb4d5b & 1) == 0) {
    func_0x00f78a20(0x3d2a408);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d5b = 1;
  }
  lVar7 = *(long *)(lVar3 + 0x70);
  if (lVar7 == 0) goto LAB_0150c7d4;
  if (*(uint *)(lVar7 + 0x18) < 8) goto LAB_0150c7d8;
  unaff_x25 = 7;
  unaff_x26 = *(undefined8 *)(lVar7 + 0x2c0);
  unaff_x22 = *(long *)(lVar7 + 0x2c8);
  uVar4 = *(undefined8 *)(lVar7 + 0x2d0);
  uVar12 = *(undefined8 *)(lVar7 + 0x2e8);
  uVar11 = *(undefined8 *)(lVar7 + 0x2e0);
  *(undefined8 *)(puVar1 + -0xe8) = *(undefined8 *)(lVar7 + 0x2d8);
  *(undefined8 *)(puVar1 + -0xf0) = uVar4;
  *(undefined8 *)(puVar1 + -0xd8) = uVar12;
  *(undefined8 *)(puVar1 + -0xe0) = uVar11;
  lVar6 = *(long *)(lVar7 + 0x2f0);
  iVar8 = *(int *)(lVar7 + 0x2f8);
  iVar2 = *(int *)(lVar7 + 0x2fc);
  unaff_x23 = *(long *)(lVar7 + 0x300);
  unaff_x24 = *(long *)(lVar7 + 0x308);
  uVar4 = *(undefined8 *)(lVar7 + 0x310);
  *(undefined8 *)(puVar1 + -0xf8) = *(undefined8 *)(lVar7 + 0x318);
  *(undefined8 *)(puVar1 + -0x100) = uVar4;
  if (iVar2 == iVar8) {
LAB_0150c768:
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
    if (iVar2 == 0) {
      return;
    }
    if (lVar6 != 0) {
      /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar6,iVar8 == 2,0);
      return;
    }
  }
  else if (iVar8 == 2) {
    if (iVar2 == 0) {
      if (unaff_x24 == 0) goto LAB_0150c7d4;
      uVar11 = *(undefined8 *)(lVar7 + 0x2d8);
      uVar4 = *(undefined8 *)(lVar7 + 0x2d0);
      uVar13 = *(undefined8 *)(lVar7 + 0x2e8);
      uVar12 = *(undefined8 *)(lVar7 + 0x2e0);
      *(undefined8 *)(puVar1 + -0x118) = uVar11;
      *(undefined8 *)(puVar1 + -0x120) = uVar4;
      *(undefined8 *)(puVar1 + -0x108) = uVar13;
      *(undefined8 *)(puVar1 + -0x110) = uVar12;
      uVar15 = *(undefined8 *)(lVar7 + 0x318);
      uVar14 = *(undefined8 *)(lVar7 + 0x310);
      *(undefined8 *)(puVar1 + -0x128) = uVar15;
      *(undefined8 *)(puVar1 + -0x130) = uVar14;
      *(undefined8 *)(puVar1 + -200) = unaff_x26;
      *(long *)(puVar1 + -0xc0) = unaff_x22;
      *(undefined8 *)(puVar1 + -0xb0) = uVar11;
      *(undefined8 *)(puVar1 + -0xb8) = uVar4;
      *(undefined8 *)(puVar1 + -0xa0) = uVar13;
      *(undefined8 *)(puVar1 + -0xa8) = uVar12;
      *(long *)(puVar1 + -0x98) = lVar6;
      *(undefined8 *)(puVar1 + -0x90) = _UNK_033f8620;
      *(long *)(puVar1 + -0x88) = unaff_x23;
      *(long *)(puVar1 + -0x80) = unaff_x24;
      *(undefined8 *)(puVar1 + -0x70) = uVar15;
      *(undefined8 *)(puVar1 + -0x78) = uVar14;
      lVar7 = unaff_x24;
LAB_0150c724:
      /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar7,puVar1 + -200,uRam0000000003d2a408);
      iVar8 = 1;
    }
    else {
      iVar8 = 2;
    }
LAB_0150c72c:
    lVar7 = *(long *)(lVar3 + 0x70);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) < 8) goto LAB_0150c7d8;
      *(undefined8 *)(lVar7 + 0x2c0) = unaff_x26;
      *(long *)(lVar7 + 0x2c8) = unaff_x22;
      uVar4 = *(undefined8 *)(puVar1 + -0xf0);
      uVar12 = *(undefined8 *)(puVar1 + -0xd8);
      uVar11 = *(undefined8 *)(puVar1 + -0xe0);
      *(undefined8 *)(lVar7 + 0x2d8) = *(undefined8 *)(puVar1 + -0xe8);
      *(undefined8 *)(lVar7 + 0x2d0) = uVar4;
      *(undefined8 *)(lVar7 + 0x2e8) = uVar12;
      *(undefined8 *)(lVar7 + 0x2e0) = uVar11;
      *(long *)(lVar7 + 0x2f0) = lVar6;
      *(int *)(lVar7 + 0x2f8) = iVar8;
      *(int *)(lVar7 + 0x2fc) = iVar2;
      *(long *)(lVar7 + 0x300) = unaff_x23;
      *(long *)(lVar7 + 0x308) = unaff_x24;
      uVar4 = *(undefined8 *)(puVar1 + -0x100);
      *(undefined8 *)(lVar7 + 0x318) = *(undefined8 *)(puVar1 + -0xf8);
      *(undefined8 *)(lVar7 + 0x310) = uVar4;
      goto LAB_0150c768;
    }
  }
  else {
    if (iVar8 != 0) goto LAB_0150c72c;
    if (iVar2 != 2) {
      iVar8 = 0;
      goto LAB_0150c72c;
    }
    if (((unaff_x22 != 0) && (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar7 != 0)) &&
       (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,1,0), unaff_x23 != 0)) {
      *(undefined8 *)(puVar1 + -200) = unaff_x26;
      *(long *)(puVar1 + -0xc0) = unaff_x22;
      *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -0xe8);
      *(undefined8 *)(puVar1 + -0xb8) = *(undefined8 *)(puVar1 + -0xf0);
      *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar1 + -0xd8);
      *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(puVar1 + -0xe0);
      *(long *)(puVar1 + -0x98) = lVar6;
      *(undefined8 *)(puVar1 + -0x90) = _UNK_033f8628;
      *(long *)(puVar1 + -0x88) = unaff_x23;
      *(long *)(puVar1 + -0x80) = unaff_x24;
      *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)(puVar1 + -0xf8);
      *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0x100);
      lVar7 = unaff_x23;
      goto LAB_0150c724;
    }
  }
LAB_0150c7d4:
  func_0x00f78af4();
LAB_0150c7d8:
  uVar4 = func_0x00f78b24();
  auVar17 = func_0x00f78ac0(uVar4,0);
  lVar7 = auVar17._8_8_;
  *(undefined8 *)(puVar1 + -0x180) = unaff_x26;
  *(undefined8 *)(puVar1 + -0x178) = unaff_x25;
  *(long *)(puVar1 + -0x170) = unaff_x24;
  *(long *)(puVar1 + -0x168) = unaff_x23;
  *(long *)(puVar1 + -0x160) = unaff_x22;
  *(long *)(puVar1 + -0x158) = lVar3;
  *(undefined8 *)(puVar1 + -0x150) = 7;
  *(long *)(puVar1 + -0x148) = lVar6;
  *(undefined1 **)(puVar1 + -0x140) = puVar1 + -0x10;
  *(code **)(puVar1 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
  if ((bRam0000000003eb4d55 & 1) == 0) {
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e7d0);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d5e888);
    bRam0000000003eb4d55 = 1;
  }
  uVar4 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c),
                          *(undefined4 *)(lVar7 + 0x20),_UNK_033f8144,*(undefined8 *)(lVar7 + 0x10),
                          0,0);
  uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,10,uRam0000000003d5e7a8);
  uVar4 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar4,*(undefined8 *)(lVar7 + 0x58),uRam0000000003d5e6e0);
  uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar4,1,uRam0000000003d5e888);
  lVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar4,auVar17._0_8_,uRam0000000003d5e850);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
    *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar7 + 0x10);
  }
  return;
}



// ============================================================
// RVA: 0x150bd40 | Atlas.UI.TopBarManager.HideAll
// ============================================================

void Atlas_UI_TopBarManager__HideAll(long param_1)

{
  long lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    iVar2 = 0;
    do {
      Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar1,iVar2,0,1);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 9);
    return;
  }
  auVar3 = func_0x00f78af4();
  iVar2 = 0;
  do {
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar3._0_8_,iVar2,0,auVar3._8_8_);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 9);
  return;
}



// ============================================================
// RVA: 0x150bdd4 | Atlas.UI.TopBarManager.SetNextTitle
// ============================================================

/* WARNING: Possible PIC construction at 0x032d2ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d30d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d3978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x032d30dc) */
/* WARNING: Removing unreachable block (ram,0x032d30ec) */
/* WARNING: Removing unreachable block (ram,0x032d30f4) */
/* WARNING: Removing unreachable block (ram,0x032d30fc) */
/* WARNING: Removing unreachable block (ram,0x032d3108) */
/* WARNING: Removing unreachable block (ram,0x032d3110) */
/* WARNING: Removing unreachable block (ram,0x032d3118) */
/* WARNING: Removing unreachable block (ram,0x032d3124) */
/* WARNING: Removing unreachable block (ram,0x032d3168) */
/* WARNING: Removing unreachable block (ram,0x032d3188) */
/* WARNING: Removing unreachable block (ram,0x032d3190) */
/* WARNING: Removing unreachable block (ram,0x032d3198) */
/* WARNING: Removing unreachable block (ram,0x032d31a4) */
/* WARNING: Removing unreachable block (ram,0x032d31ac) */
/* WARNING: Removing unreachable block (ram,0x032d31b4) */
/* WARNING: Removing unreachable block (ram,0x032d31c0) */
/* WARNING: Removing unreachable block (ram,0x032d3204) */
/* WARNING: Removing unreachable block (ram,0x032d2edc) */
/* WARNING: Removing unreachable block (ram,0x032d2eec) */
/* WARNING: Removing unreachable block (ram,0x026f609c) */
/* WARNING: Removing unreachable block (ram,0x026f60c4) */
/* WARNING: Removing unreachable block (ram,0x026f60e4) */
/* WARNING: Removing unreachable block (ram,0x026f60ec) */
/* WARNING: Removing unreachable block (ram,0x026f6108) */
/* WARNING: Removing unreachable block (ram,0x026f6110) */
/* WARNING: Removing unreachable block (ram,0x026f612c) */
/* WARNING: Removing unreachable block (ram,0x026f6140) */
/* WARNING: Removing unreachable block (ram,0x026f6148) */
/* WARNING: Removing unreachable block (ram,0x026f614c) */
/* WARNING: Removing unreachable block (ram,0x026f6160) */
/* WARNING: Removing unreachable block (ram,0x026f6168) */
/* WARNING: Removing unreachable block (ram,0x026f6180) */
/* WARNING: Removing unreachable block (ram,0x026f61ac) */
/* WARNING: Removing unreachable block (ram,0x026f61d4) */
/* WARNING: Removing unreachable block (ram,0x026f61fc) */
/* WARNING: Removing unreachable block (ram,0x026f6204) */
/* WARNING: Removing unreachable block (ram,0x026f6220) */
/* WARNING: Removing unreachable block (ram,0x026f6208) */
/* WARNING: Removing unreachable block (ram,0x026f6224) */
/* WARNING: Removing unreachable block (ram,0x026f623c) */
/* WARNING: Removing unreachable block (ram,0x026f621c) */
/* WARNING: Removing unreachable block (ram,0x026f6250) */
/* WARNING: Removing unreachable block (ram,0x026f6280) */
/* WARNING: Removing unreachable block (ram,0x026f62a8) */
/* WARNING: Removing unreachable block (ram,0x026f62b0) */
/* WARNING: Removing unreachable block (ram,0x026f62cc) */
/* WARNING: Removing unreachable block (ram,0x026f62b4) */
/* WARNING: Removing unreachable block (ram,0x026f62d0) */
/* WARNING: Removing unreachable block (ram,0x026f62e8) */
/* WARNING: Removing unreachable block (ram,0x026f62c8) */
/* WARNING: Removing unreachable block (ram,0x026f62fc) */
/* WARNING: Removing unreachable block (ram,0x026f632c) */
/* WARNING: Removing unreachable block (ram,0x026f6354) */
/* WARNING: Removing unreachable block (ram,0x026f635c) */
/* WARNING: Removing unreachable block (ram,0x026f6378) */
/* WARNING: Removing unreachable block (ram,0x026f6360) */
/* WARNING: Removing unreachable block (ram,0x026f637c) */
/* WARNING: Removing unreachable block (ram,0x026f6394) */
/* WARNING: Removing unreachable block (ram,0x026f6374) */
/* WARNING: Removing unreachable block (ram,0x026f63a8) */
/* WARNING: Removing unreachable block (ram,0x026f63d8) */
/* WARNING: Removing unreachable block (ram,0x026f6400) */
/* WARNING: Removing unreachable block (ram,0x026f6408) */
/* WARNING: Removing unreachable block (ram,0x026f6424) */
/* WARNING: Removing unreachable block (ram,0x026f640c) */
/* WARNING: Removing unreachable block (ram,0x026f6428) */
/* WARNING: Removing unreachable block (ram,0x026f6440) */
/* WARNING: Removing unreachable block (ram,0x026f6420) */
/* WARNING: Removing unreachable block (ram,0x026f6454) */
/* WARNING: Removing unreachable block (ram,0x026f6500) */
/* WARNING: Removing unreachable block (ram,0x026f6524) */
/* WARNING: Removing unreachable block (ram,0x026f654c) */
/* WARNING: Removing unreachable block (ram,0x026f6554) */
/* WARNING: Removing unreachable block (ram,0x026f6560) */
/* WARNING: Removing unreachable block (ram,0x026f6568) */
/* WARNING: Removing unreachable block (ram,0x026f6594) */
/* WARNING: Removing unreachable block (ram,0x026f6574) */
/* WARNING: Removing unreachable block (ram,0x026f6580) */
/* WARNING: Removing unreachable block (ram,0x026f65a0) */
/* WARNING: Removing unreachable block (ram,0x026f65b4) */
/* WARNING: Removing unreachable block (ram,0x026f6698) */
/* WARNING: Removing unreachable block (ram,0x026f672c) */
/* WARNING: Removing unreachable block (ram,0x026f66b0) */
/* WARNING: Removing unreachable block (ram,0x026f66c4) */
/* WARNING: Removing unreachable block (ram,0x026f66cc) */
/* WARNING: Removing unreachable block (ram,0x026f66d8) */
/* WARNING: Removing unreachable block (ram,0x026f66e0) */
/* WARNING: Removing unreachable block (ram,0x026f670c) */
/* WARNING: Removing unreachable block (ram,0x026f66ec) */
/* WARNING: Removing unreachable block (ram,0x026f66f8) */
/* WARNING: Removing unreachable block (ram,0x026f6718) */
/* WARNING: Removing unreachable block (ram,0x026f65e0) */
/* WARNING: Removing unreachable block (ram,0x026f65f4) */
/* WARNING: Removing unreachable block (ram,0x026f65fc) */
/* WARNING: Removing unreachable block (ram,0x026f6608) */
/* WARNING: Removing unreachable block (ram,0x026f6610) */
/* WARNING: Removing unreachable block (ram,0x026f663c) */
/* WARNING: Removing unreachable block (ram,0x026f661c) */
/* WARNING: Removing unreachable block (ram,0x026f6628) */
/* WARNING: Removing unreachable block (ram,0x026f664c) */
/* WARNING: Removing unreachable block (ram,0x026f6478) */
/* WARNING: Removing unreachable block (ram,0x026f6490) */
/* WARNING: Removing unreachable block (ram,0x026f6498) */
/* WARNING: Removing unreachable block (ram,0x026f64a4) */
/* WARNING: Removing unreachable block (ram,0x026f64ac) */
/* WARNING: Removing unreachable block (ram,0x026f64d8) */
/* WARNING: Removing unreachable block (ram,0x026f64b8) */
/* WARNING: Removing unreachable block (ram,0x026f64c4) */
/* WARNING: Removing unreachable block (ram,0x026f64e4) */
/* WARNING: Removing unreachable block (ram,0x026f6188) */
/* WARNING: Removing unreachable block (ram,0x032d397c) */

ulong Atlas_UI_TopBarManager__SetNextTitle(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  code *UNRECOVERED_JUMPTABLE;
  long lVar14;
  long *plVar15;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar16;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar17;
  undefined8 unaff_x23;
  long lVar18;
  undefined8 uVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar20;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 **ppuVar21;
  undefined1 *puVar22;
  undefined *puVar23;
  undefined1 auVar24 [12];
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  lVar14 = *(long *)(param_1 + 0x28);
  if (lVar14 != 0) {
    *(undefined8 *)(lVar14 + 0x88) = param_2;
    *(undefined8 *)(lVar14 + 0x90) = param_3;
    return param_1;
  }
  lVar14 = func_0x00f78af4();
  ppuVar2 = &puStack_20;
  ppuVar21 = &puStack_20;
  puStack_18 = &Atlas_UI_TopBarManager__ReLayoutTitle;
  lVar14 = *(long *)(lVar14 + 0x28);
  if (lVar14 == 0) {
    UNRECOVERED_JUMPTABLE = Atlas_UI_Screens_TopBarScreen__ReLayoutTitle;
    puStack_20 = &stack0xfffffffffffffff0;
    lVar14 = func_0x00f78af4();
  }
  else {
    ppuVar2 = (undefined1 **)&stack0xfffffffffffffff0;
    UNRECOVERED_JUMPTABLE = (code *)&Atlas_UI_TopBarManager__ReLayoutTitle;
    ppuVar21 = (undefined1 **)&stack0xfffffffffffffff0;
    puStack_20 = &stack0xfffffffffffffff0;
  }
  *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(undefined8 *)((long)ppuVar2 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar21;
  *(code **)((long)ppuVar2 + -8) = UNRECOVERED_JUMPTABLE;
  if ((bRam0000000003eb4d52 & 1) == 0) {
    func_0x00f78a20(0x3d2c9a8);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d41340);
    bRam0000000003eb4d52 = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar14,uRam0000000003d41340);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) {
    uVar10 = func_0x00f78af4();
    *(undefined8 *)((long)ppuVar2 + -0x60) = unaff_x22;
    *(undefined8 *)((long)ppuVar2 + -0x58) = 0x3d41340;
    *(undefined8 *)((long)ppuVar2 + -0x50) = 0x3eb4000;
    *(long *)((long)ppuVar2 + -0x48) = lVar14;
    *(undefined1 **)((long)ppuVar2 + -0x40) = (undefined1 *)((long)ppuVar2 + -0x10);
    *(undefined **)((long)ppuVar2 + -0x38) = &Atlas_UI_TopBarManager___ctor;
    if ((bRam0000000003eb4d4f & 1) == 0) {
      func_0x00f78a20(0x3d29338);
      func_0x00f78a20(0x3d1f8d0);
      func_0x00f78a20(0x3d25320);
      bRam0000000003eb4d4f = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.TopBarManager_TypeInfo*/ lRam0000000003d25320 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.TopBarManager_TypeInfo*/ lRam0000000003d25320 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar19 = func_0x00f78a34(/*Atlas.UI.TopBarManager.TopBarDelegate[]_TypeInfo*/ uRam0000000003d1f8d0,**(undefined4 **)(/*Atlas.UI.TopBarManager_TypeInfo*/ lRam0000000003d25320 + 0xb8));
    *(undefined8 *)(uVar10 + 0x30) = uVar19;
    uVar19 = func_0x00f78aec(/*Atlas.UI.TopBarManager.ScreenButtonRequest_TypeInfo*/ uRam0000000003d29338);
    /*Atlas.UI.TopBarManager.ScreenButtonRequest$$.ctor*/ func_0x0156b598(uVar19,0);
    *(undefined8 *)(uVar10 + 0x38) = uVar19;
    return uVar10;
  }
  plVar7 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar6 + 0x80),0);
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
  }
  else if (*plVar7 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
    plVar7 = (long *)0x0;
  }
  *(undefined8 *)((long)ppuVar2 + -0x30) = *(undefined8 *)((long)ppuVar2 + -0x30);
  *(undefined8 *)((long)ppuVar2 + -0x28) = *(undefined8 *)((long)ppuVar2 + -0x28);
  *(undefined8 *)((long)ppuVar2 + -0x20) = *(undefined8 *)((long)ppuVar2 + -0x20);
  *(undefined8 *)((long)ppuVar2 + -0x18) = *(undefined8 *)((long)ppuVar2 + -0x18);
  *(undefined8 *)((long)ppuVar2 + -0x10) = *(undefined8 *)((long)ppuVar2 + -0x10);
  *(undefined8 *)((long)ppuVar2 + -8) = *(undefined8 *)((long)ppuVar2 + -8);
  if ((bRam0000000003eb70f3 & 1) == 0) {
    func_0x00f78a20(0x3d22df0,plVar7,uRam0000000003d2c9a8);
    bRam0000000003eb70f3 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar14 = *(long *)((long)ppuVar2 + -0x30);
  *(long *)((long)ppuVar2 + -0x30) = lVar14;
  *(undefined8 *)((long)ppuVar2 + -0x28) = *(undefined8 *)((long)ppuVar2 + -0x28);
  *(undefined8 *)((long)ppuVar2 + -0x20) = *(undefined8 *)((long)ppuVar2 + -0x20);
  *(undefined8 *)((long)ppuVar2 + -0x18) = *(undefined8 *)((long)ppuVar2 + -0x18);
  *(undefined8 *)((long)ppuVar2 + -0x10) = *(undefined8 *)((long)ppuVar2 + -0x10);
  *(undefined8 *)((long)ppuVar2 + -8) = *(undefined8 *)((long)ppuVar2 + -8);
  if ((bRam0000000003ec2d40 & 1) == 0) {
    func_0x00f78a20(0x3d22df0,0);
    func_0x00f78a20(0x3d3ef80);
    func_0x00f78a20(0x3d3ef88);
    bRam0000000003ec2d40 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = 0x3ec2000;
  if (((**(long **)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xb8) == 0) ||
      (lVar8 = /*UnityEngine.UI.ObjectPool<object>$$Get*/ func_0x026f5fbc(**(long **)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xb8),uRam0000000003d3ef80),
      lVar8 == 0)) || (*(long **)(lVar8 + 0x10) = plVar7, lVar6 = lVar8, plVar7 == (long *)0x0)) {
    puVar23 = &UnityEngine_UI_LayoutRebuilder__Rebuild;
    auVar24 = func_0x00f78af4();
  }
  else {
    uVar4 = (**(code **)(*plVar7 + 0x158))(plVar7,*(undefined8 *)(*plVar7 + 0x160));
    *(undefined4 *)(lVar8 + 0x18) = uVar4;
    auVar24._8_4_ = 1;
    auVar24._0_8_ = lVar8;
    puVar23 = &UNK_032d2edc;
  }
  uVar9 = auVar24._0_8_;
  *(undefined8 *)((long)ppuVar2 + -0x70) = unaff_x24;
  *(undefined8 *)((long)ppuVar2 + -0x68) = unaff_x23;
  *(long *)((long)ppuVar2 + -0x60) = lVar14;
  *(undefined8 *)((long)ppuVar2 + -0x58) = 0x3d22df0;
  *(long *)((long)ppuVar2 + -0x50) = lVar6;
  *(long **)((long)ppuVar2 + -0x48) = plVar7;
  *(undefined1 **)((long)ppuVar2 + -0x40) = (undefined1 *)((long)ppuVar2 + -0x10);
  *(undefined **)((long)ppuVar2 + -0x38) = puVar23;
  puVar22 = (undefined1 *)((long)ppuVar2 + -0x40);
  uVar10 = uVar9;
  if ((bRam0000000003ec2d41 & 1) == 0) {
    func_0x00f78a20(0x3d634d8);
    func_0x00f78a20(0x3d634e0);
    func_0x00f78a20(0x3d634e8);
    func_0x00f78a20(0x3d634f0);
    func_0x00f78a20(0x3d27de0);
    func_0x00f78a20(0x3d41588);
    uVar10 = func_0x00f78a20(0x3d1eaf0);
    bRam0000000003ec2d41 = 1;
  }
  if (auVar24._8_4_ != 1) {
    return uVar10;
  }
  uVar16 = *(undefined8 *)(uVar9 + 0x10);
  uVar19 = 0x3d27de0;
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar7 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
  lVar6 = plVar7[2];
  if (lVar6 == 0) {
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      plVar7 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
    }
    lVar14 = *plVar7;
    lVar6 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Component>_TypeInfo*/ uRam0000000003d1eaf0);
    /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(lVar6,lVar14,uRam0000000003d634d8,uRam0000000003d41588);
    *(long *)(*(long *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8) + 0x10) = lVar6;
  }
  /*UnityEngine.UI.LayoutRebuilder$$PerformLayoutCalculation*/ func_0x032d3238(uVar9,uVar16,lVar6);
  plVar7 = *(long **)(uVar9 + 0x10);
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar15 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
  uVar10 = plVar15[3];
  if (uVar10 == 0) {
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      plVar15 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
    }
    lVar14 = *plVar15;
    uVar10 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Component>_TypeInfo*/ uRam0000000003d1eaf0);
    /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(uVar10,lVar14,uRam0000000003d634e0,uRam0000000003d41588);
    *(ulong *)(*(long *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8) + 0x18) = uVar10;
  }
  puVar23 = &UNK_032d30dc;
  puVar3 = (undefined1 *)((long)ppuVar2 + -0x70);
  uVar11 = uVar9;
  plVar15 = plVar7;
  uVar20 = uVar10;
  do {
    plVar13 = plVar7;
    *(long *)(puVar3 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = uVar19;
    *(long *)(puVar3 + -0x30) = lVar14;
    *(ulong *)(puVar3 + -0x28) = uVar20;
    *(long **)(puVar3 + -0x20) = plVar15;
    *(ulong *)(puVar3 + -0x18) = uVar11;
    *(undefined1 **)(puVar3 + -0x10) = puVar22;
    *(undefined **)(puVar3 + -8) = puVar23;
    puVar22 = puVar3 + -0x10;
    if ((bRam0000000003ec2d42 & 1) == 0) {
      func_0x00f78a20(0x3d19778);
      func_0x00f78a20(0x3d222b0);
      func_0x00f78a20(0x3d22df0);
      func_0x00f78a20(0x3d398f8);
      func_0x00f78a20(0x3d39900);
      func_0x00f78a20(0x3d1d6c0);
      func_0x00f78a20(0x3d3a1c0);
      func_0x00f78a20(0x3d3a1c8);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d24188);
      func_0x00f78a20(0x3d247e0);
      func_0x00f78a20(0x3d25458);
      func_0x00f78a20(0x3d41590);
      bRam0000000003ec2d42 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar13,0,0);
    if ((uVar11 & 1) != 0) {
      return uVar11;
    }
    if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar14 = /*UnityEngine.UI.ListPool<RectMask2D>$$Get*/ func_0x0233df3c(uRam0000000003d398f8);
    uVar19 = /*UnityEngine.UI.ILayoutController_var*/ uRam0000000003d19778;
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar12 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
    uVar19 = unaff_x26;
    uVar16 = unaff_x27;
    if (plVar13 == (long *)0x0) {
code_r0x032d3918:
      func_0x00f78af4();
      unaff_x26 = uVar19;
      unaff_x27 = uVar16;
    }
    else {
      /*UnityEngine.Component$$GetComponents*/ func_0x03227d78(plVar13,uVar12,lVar14,0);
      if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.UI.LayoutRebuilder$$StripDisabledBehavioursFromList*/ func_0x032d2d00(lVar14);
      if (lVar14 == 0) goto code_r0x032d3918;
      uVar11 = (ulong)*(uint *)(lVar14 + 0x18);
      if ((int)*(uint *)(lVar14 + 0x18) < 1) {
code_r0x032d3994:
        if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar6 = lRam0000000003d39900;
        uVar19 = *(undefined8 *)(puVar3 + -0x30);
        uVar16 = *(undefined8 *)(puVar3 + -0x40);
        uVar12 = *(undefined8 *)(puVar3 + -0x38);
        *(undefined8 *)(puVar3 + -0x40) = uVar16;
        *(undefined8 *)(puVar3 + -0x38) = uVar12;
        *(undefined8 *)(puVar3 + -0x30) = uVar19;
        *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
        *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
        *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        lVar8 = *(long *)(lRam0000000003d39900 + 0x18);
        if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar8);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        uVar1 = *(ushort *)(lVar8 + 0x132);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar8);
          uVar1 = *(ushort *)(lVar8 + 0x132);
        }
        if ((uVar1 >> 10 & 1) != 0) {
          lVar8 = *(long *)(lVar6 + 0x18);
          if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar8);
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
          if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar8);
          }
          if (*(int *)(lVar8 + 0xe0) == 0) {
            lVar8 = *(long *)(lVar6 + 0x18);
            if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar8);
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
            if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar8);
            }
            func_0x00f78ad0(lVar8);
          }
        }
        lVar8 = *(long *)(lVar6 + 0x18);
        if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar8);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar8);
        }
        lVar8 = **(long **)(lVar8 + 0xb8);
        if (lVar8 != 0) {
          lVar18 = *(long *)(lVar6 + 0x18);
          uVar1 = *(ushort *)(lVar18 + 0x132);
          lVar17 = lVar18;
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar18);
            lVar17 = *(long *)(lVar6 + 0x18);
            uVar1 = *(ushort *)(lVar17 + 0x132);
          }
          UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x18);
          if ((uVar1 & 1) == 0) {
            *(code **)(puVar3 + -0x48) = UNRECOVERED_JUMPTABLE;
            func_0x00fac028(lVar17);
            UNRECOVERED_JUMPTABLE = *(code **)(puVar3 + -0x48);
          }
                    /* WARNING: Could not recover jumptable at 0x0233e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar10 = (*UNRECOVERED_JUMPTABLE)
                             (lVar8,lVar14,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18));
          return uVar10;
        }
        lVar8 = func_0x00f78af4();
        *(undefined8 *)(puVar3 + -0x90) = uVar16;
        *(undefined8 *)(puVar3 + -0x88) = uVar12;
        *(undefined8 *)(puVar3 + -0x80) = uVar19;
        *(undefined8 *)(puVar3 + -0x78) = 0;
        *(long *)(puVar3 + -0x70) = lVar6;
        *(long *)(puVar3 + -0x68) = lVar14;
        *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x10;
        *(undefined **)(puVar3 + -0x58) = &UnityEngine_UI_ListPool_object____cctor;
        lVar14 = *(long *)(lVar8 + 0x18);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        uVar19 = func_0x00f78aec(lVar14);
        lVar6 = *(long *)(lVar8 + 0x18);
        uVar1 = *(ushort *)(lVar6 + 0x132);
        lVar14 = lVar6;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar6);
          lVar14 = *(long *)(lVar8 + 0x18);
          uVar1 = *(ushort *)(lVar14 + 0x132);
        }
        UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x30);
        lVar6 = lVar14;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar14);
          lVar6 = *(long *)(lVar8 + 0x18);
          uVar1 = *(ushort *)(lVar6 + 0x132);
        }
        uVar16 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x20);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar6);
        }
        (*UNRECOVERED_JUMPTABLE)(uVar19,0,uVar16,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x30));
        lVar14 = *(long *)(lVar8 + 0x18);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 0x38);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        uVar16 = func_0x00f78aec(lVar14);
        lVar6 = *(long *)(lVar8 + 0x18);
        uVar1 = *(ushort *)(lVar6 + 0x132);
        lVar14 = lVar6;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar6);
          lVar14 = *(long *)(lVar8 + 0x18);
          uVar1 = *(ushort *)(lVar14 + 0x132);
        }
        UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar14);
        }
        uVar10 = (*UNRECOVERED_JUMPTABLE)
                           (uVar16,0,uVar19,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x40));
        lVar14 = *(long *)(lVar8 + 0x18);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          uVar10 = func_0x00fac028(lVar14);
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xc0) + 8);
        if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
          uVar10 = func_0x00fac028(lVar14);
        }
        **(undefined8 **)(lVar14 + 0xb8) = uVar16;
        return uVar10;
      }
      lVar6 = 4;
      unaff_x26 = 0x3d222b0;
      unaff_x27 = 0x3d41590;
      do {
        if ((uVar11 & 0xffffffff) <= lVar6 - 4U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar8 = func_0x00f78adc(*(undefined8 *)(*(long *)(lVar14 + 0x10) + lVar6 * 8),
                                /*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
        if (lVar8 != 0) {
          if ((ulong)*(uint *)(lVar14 + 0x18) <= lVar6 - 4U) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar19 = unaff_x26;
          uVar16 = unaff_x27;
          if (uVar10 == 0) goto code_r0x032d3918;
          /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(uVar10,*(undefined8 *)(*(long *)(lVar14 + 0x10) + lVar6 * 8),
                          uRam0000000003d41590);
        }
        uVar11 = (ulong)*(int *)(lVar14 + 0x18);
        lVar8 = lVar6 + -3;
        lVar6 = lVar6 + 1;
      } while (lVar8 < (long)uVar11);
      if (0 < *(int *)(lVar14 + 0x18)) {
        unaff_x28 = 4;
        do {
          uVar20 = unaff_x28 - 4;
          if ((uVar11 & 0xffffffff) <= uVar20) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar6 = func_0x00f78adc(*(undefined8 *)(*(long *)(lVar14 + 0x10) + unaff_x28 * 8),
                                  /*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
          if (lVar6 == 0) {
            if (*(uint *)(lVar14 + 0x18) <= uVar20) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar7 = *(long **)(*(long *)(lVar14 + 0x10) + unaff_x28 * 8);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar7,0);
            if ((iVar5 == 0) || (plVar7 == (long *)0x0)) {
code_r0x032d388c:
              if (*(uint *)(lVar14 + 0x18) <= uVar20) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
            }
            else {
              if ((*(byte *)(*plVar7 + 300) < *(byte *)(/*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0 + 300)) ||
                 (*(long *)(*(long *)(*plVar7 + 200) +
                            (ulong)*(byte *)(/*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0 + 300) * 8 + -8) !=
                  /*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0)) goto code_r0x032d388c;
              lVar6 = plVar7[3];
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,plVar13,0);
              if (iVar5 == 0) goto code_r0x032d38b8;
              if (*(uint *)(lVar14 + 0x18) <= uVar20) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
            }
            uVar16 = 0x3d41590;
            uVar19 = 0x3d222b0;
            if (uVar10 == 0) goto code_r0x032d3918;
            /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(uVar10,*(undefined8 *)(*(long *)(lVar14 + 0x10) + unaff_x28 * 8),
                            uRam0000000003d41590);
          }
code_r0x032d38b8:
          uVar11 = (ulong)*(int *)(lVar14 + 0x18);
          lVar6 = unaff_x28 + -3;
          unaff_x28 = unaff_x28 + 1;
        } while (lVar6 < (long)uVar11);
      }
    }
    iVar5 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(plVar13,0);
    unaff_x25 = 0x3d1d6c0;
    if (iVar5 < 1) goto code_r0x032d3994;
    uVar19 = 0;
    unaff_x24 = 0x3d24188;
    plVar7 = (long *)/*UnityEngine.Transform$$GetChild*/ func_0x03277648(plVar13,0,0);
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else if (*plVar7 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
      plVar7 = (long *)0x0;
    }
    puVar23 = &UNK_032d397c;
    puVar3 = puVar3 + -0x60;
    uVar11 = uVar10;
    plVar15 = plVar13;
    uVar20 = uVar9;
  } while( true );
}



// ============================================================
// RVA: 0x150bdf4 | Atlas.UI.TopBarManager.ReLayoutTitle
// ============================================================

/* WARNING: Possible PIC construction at 0x032d2ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d30d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d3978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x032d30dc) */
/* WARNING: Removing unreachable block (ram,0x032d30ec) */
/* WARNING: Removing unreachable block (ram,0x032d30f4) */
/* WARNING: Removing unreachable block (ram,0x032d30fc) */
/* WARNING: Removing unreachable block (ram,0x032d3108) */
/* WARNING: Removing unreachable block (ram,0x032d3110) */
/* WARNING: Removing unreachable block (ram,0x032d3118) */
/* WARNING: Removing unreachable block (ram,0x032d3124) */
/* WARNING: Removing unreachable block (ram,0x032d3168) */
/* WARNING: Removing unreachable block (ram,0x032d3188) */
/* WARNING: Removing unreachable block (ram,0x032d3190) */
/* WARNING: Removing unreachable block (ram,0x032d3198) */
/* WARNING: Removing unreachable block (ram,0x032d31a4) */
/* WARNING: Removing unreachable block (ram,0x032d31ac) */
/* WARNING: Removing unreachable block (ram,0x032d31b4) */
/* WARNING: Removing unreachable block (ram,0x032d31c0) */
/* WARNING: Removing unreachable block (ram,0x032d3204) */
/* WARNING: Removing unreachable block (ram,0x032d2edc) */
/* WARNING: Removing unreachable block (ram,0x032d2eec) */
/* WARNING: Removing unreachable block (ram,0x026f609c) */
/* WARNING: Removing unreachable block (ram,0x026f60c4) */
/* WARNING: Removing unreachable block (ram,0x026f60e4) */
/* WARNING: Removing unreachable block (ram,0x026f60ec) */
/* WARNING: Removing unreachable block (ram,0x026f6108) */
/* WARNING: Removing unreachable block (ram,0x026f6110) */
/* WARNING: Removing unreachable block (ram,0x026f612c) */
/* WARNING: Removing unreachable block (ram,0x026f6140) */
/* WARNING: Removing unreachable block (ram,0x026f6148) */
/* WARNING: Removing unreachable block (ram,0x026f614c) */
/* WARNING: Removing unreachable block (ram,0x026f6160) */
/* WARNING: Removing unreachable block (ram,0x026f6168) */
/* WARNING: Removing unreachable block (ram,0x026f6180) */
/* WARNING: Removing unreachable block (ram,0x026f61ac) */
/* WARNING: Removing unreachable block (ram,0x026f61d4) */
/* WARNING: Removing unreachable block (ram,0x026f61fc) */
/* WARNING: Removing unreachable block (ram,0x026f6204) */
/* WARNING: Removing unreachable block (ram,0x026f6220) */
/* WARNING: Removing unreachable block (ram,0x026f6208) */
/* WARNING: Removing unreachable block (ram,0x026f6224) */
/* WARNING: Removing unreachable block (ram,0x026f623c) */
/* WARNING: Removing unreachable block (ram,0x026f621c) */
/* WARNING: Removing unreachable block (ram,0x026f6250) */
/* WARNING: Removing unreachable block (ram,0x026f6280) */
/* WARNING: Removing unreachable block (ram,0x026f62a8) */
/* WARNING: Removing unreachable block (ram,0x026f62b0) */
/* WARNING: Removing unreachable block (ram,0x026f62cc) */
/* WARNING: Removing unreachable block (ram,0x026f62b4) */
/* WARNING: Removing unreachable block (ram,0x026f62d0) */
/* WARNING: Removing unreachable block (ram,0x026f62e8) */
/* WARNING: Removing unreachable block (ram,0x026f62c8) */
/* WARNING: Removing unreachable block (ram,0x026f62fc) */
/* WARNING: Removing unreachable block (ram,0x026f632c) */
/* WARNING: Removing unreachable block (ram,0x026f6354) */
/* WARNING: Removing unreachable block (ram,0x026f635c) */
/* WARNING: Removing unreachable block (ram,0x026f6378) */
/* WARNING: Removing unreachable block (ram,0x026f6360) */
/* WARNING: Removing unreachable block (ram,0x026f637c) */
/* WARNING: Removing unreachable block (ram,0x026f6394) */
/* WARNING: Removing unreachable block (ram,0x026f6374) */
/* WARNING: Removing unreachable block (ram,0x026f63a8) */
/* WARNING: Removing unreachable block (ram,0x026f63d8) */
/* WARNING: Removing unreachable block (ram,0x026f6400) */
/* WARNING: Removing unreachable block (ram,0x026f6408) */
/* WARNING: Removing unreachable block (ram,0x026f6424) */
/* WARNING: Removing unreachable block (ram,0x026f640c) */
/* WARNING: Removing unreachable block (ram,0x026f6428) */
/* WARNING: Removing unreachable block (ram,0x026f6440) */
/* WARNING: Removing unreachable block (ram,0x026f6420) */
/* WARNING: Removing unreachable block (ram,0x026f6454) */
/* WARNING: Removing unreachable block (ram,0x026f6500) */
/* WARNING: Removing unreachable block (ram,0x026f6524) */
/* WARNING: Removing unreachable block (ram,0x026f654c) */
/* WARNING: Removing unreachable block (ram,0x026f6554) */
/* WARNING: Removing unreachable block (ram,0x026f6560) */
/* WARNING: Removing unreachable block (ram,0x026f6568) */
/* WARNING: Removing unreachable block (ram,0x026f6594) */
/* WARNING: Removing unreachable block (ram,0x026f6574) */
/* WARNING: Removing unreachable block (ram,0x026f6580) */
/* WARNING: Removing unreachable block (ram,0x026f65a0) */
/* WARNING: Removing unreachable block (ram,0x026f65b4) */
/* WARNING: Removing unreachable block (ram,0x026f6698) */
/* WARNING: Removing unreachable block (ram,0x026f672c) */
/* WARNING: Removing unreachable block (ram,0x026f66b0) */
/* WARNING: Removing unreachable block (ram,0x026f66c4) */
/* WARNING: Removing unreachable block (ram,0x026f66cc) */
/* WARNING: Removing unreachable block (ram,0x026f66d8) */
/* WARNING: Removing unreachable block (ram,0x026f66e0) */
/* WARNING: Removing unreachable block (ram,0x026f670c) */
/* WARNING: Removing unreachable block (ram,0x026f66ec) */
/* WARNING: Removing unreachable block (ram,0x026f66f8) */
/* WARNING: Removing unreachable block (ram,0x026f6718) */
/* WARNING: Removing unreachable block (ram,0x026f65e0) */
/* WARNING: Removing unreachable block (ram,0x026f65f4) */
/* WARNING: Removing unreachable block (ram,0x026f65fc) */
/* WARNING: Removing unreachable block (ram,0x026f6608) */
/* WARNING: Removing unreachable block (ram,0x026f6610) */
/* WARNING: Removing unreachable block (ram,0x026f663c) */
/* WARNING: Removing unreachable block (ram,0x026f661c) */
/* WARNING: Removing unreachable block (ram,0x026f6628) */
/* WARNING: Removing unreachable block (ram,0x026f664c) */
/* WARNING: Removing unreachable block (ram,0x026f6478) */
/* WARNING: Removing unreachable block (ram,0x026f6490) */
/* WARNING: Removing unreachable block (ram,0x026f6498) */
/* WARNING: Removing unreachable block (ram,0x026f64a4) */
/* WARNING: Removing unreachable block (ram,0x026f64ac) */
/* WARNING: Removing unreachable block (ram,0x026f64d8) */
/* WARNING: Removing unreachable block (ram,0x026f64b8) */
/* WARNING: Removing unreachable block (ram,0x026f64c4) */
/* WARNING: Removing unreachable block (ram,0x026f64e4) */
/* WARNING: Removing unreachable block (ram,0x026f6188) */
/* WARNING: Removing unreachable block (ram,0x032d397c) */

ulong Atlas_UI_TopBarManager__ReLayoutTitle(long param_1)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar15;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar16;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar17;
  undefined8 unaff_x23;
  long lVar18;
  undefined8 uVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar20;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar21;
  code *unaff_x30;
  undefined *puVar22;
  undefined1 auVar23 [12];
  
  puVar2 = &stack0xfffffffffffffff0;
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 == 0) {
    unaff_x30 = Atlas_UI_Screens_TopBarScreen__ReLayoutTitle;
    lVar6 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4d52 & 1) == 0) {
    func_0x00f78a20(0x3d2c9a8);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d41340);
    bRam0000000003eb4d52 = 1;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41340);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) {
    uVar11 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3d41340;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0x3eb4000;
    *(long *)((long)register0x00000008 + -0x48) = lVar6;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &Atlas_UI_TopBarManager___ctor;
    if ((bRam0000000003eb4d4f & 1) == 0) {
      func_0x00f78a20(0x3d29338);
      func_0x00f78a20(0x3d1f8d0);
      func_0x00f78a20(0x3d25320);
      bRam0000000003eb4d4f = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.TopBarManager_TypeInfo*/ lRam0000000003d25320 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.TopBarManager_TypeInfo*/ lRam0000000003d25320 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar19 = func_0x00f78a34(/*Atlas.UI.TopBarManager.TopBarDelegate[]_TypeInfo*/ uRam0000000003d1f8d0,**(undefined4 **)(/*Atlas.UI.TopBarManager_TypeInfo*/ lRam0000000003d25320 + 0xb8));
    *(undefined8 *)(uVar11 + 0x30) = uVar19;
    uVar19 = func_0x00f78aec(/*Atlas.UI.TopBarManager.ScreenButtonRequest_TypeInfo*/ uRam0000000003d29338);
    /*Atlas.UI.TopBarManager.ScreenButtonRequest$$.ctor*/ func_0x0156b598(uVar19,0);
    *(undefined8 *)(uVar11 + 0x38) = uVar19;
    return uVar11;
  }
  plVar8 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar7 + 0x80),0);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else if (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
    plVar8 = (long *)0x0;
  }
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
  if ((bRam0000000003eb70f3 & 1) == 0) {
    func_0x00f78a20(0x3d22df0,plVar8,uRam0000000003d2c9a8);
    bRam0000000003eb70f3 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = *(long *)((long)register0x00000008 + -0x30);
  *(long *)((long)register0x00000008 + -0x30) = lVar6;
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  if ((bRam0000000003ec2d40 & 1) == 0) {
    func_0x00f78a20(0x3d22df0,0);
    func_0x00f78a20(0x3d3ef80);
    func_0x00f78a20(0x3d3ef88);
    bRam0000000003ec2d40 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = 0x3ec2000;
  if (((**(long **)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xb8) == 0) ||
      (lVar9 = /*UnityEngine.UI.ObjectPool<object>$$Get*/ func_0x026f5fbc(**(long **)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xb8),uRam0000000003d3ef80),
      lVar9 == 0)) || (*(long **)(lVar9 + 0x10) = plVar8, lVar7 = lVar9, plVar8 == (long *)0x0)) {
    puVar22 = &UnityEngine_UI_LayoutRebuilder__Rebuild;
    auVar23 = func_0x00f78af4();
  }
  else {
    uVar4 = (**(code **)(*plVar8 + 0x158))(plVar8,*(undefined8 *)(*plVar8 + 0x160));
    *(undefined4 *)(lVar9 + 0x18) = uVar4;
    auVar23._8_4_ = 1;
    auVar23._0_8_ = lVar9;
    puVar22 = &UNK_032d2edc;
  }
  uVar10 = auVar23._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x60) = lVar6;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3d22df0;
  *(long *)((long)register0x00000008 + -0x50) = lVar7;
  *(long **)((long)register0x00000008 + -0x48) = plVar8;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) = puVar22;
  puVar21 = (undefined1 *)((long)register0x00000008 + -0x40);
  uVar11 = uVar10;
  if ((bRam0000000003ec2d41 & 1) == 0) {
    func_0x00f78a20(0x3d634d8);
    func_0x00f78a20(0x3d634e0);
    func_0x00f78a20(0x3d634e8);
    func_0x00f78a20(0x3d634f0);
    func_0x00f78a20(0x3d27de0);
    func_0x00f78a20(0x3d41588);
    uVar11 = func_0x00f78a20(0x3d1eaf0);
    bRam0000000003ec2d41 = 1;
  }
  if (auVar23._8_4_ != 1) {
    return uVar11;
  }
  uVar16 = *(undefined8 *)(uVar10 + 0x10);
  uVar19 = 0x3d27de0;
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar8 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
  lVar7 = plVar8[2];
  if (lVar7 == 0) {
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      plVar8 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
    }
    lVar6 = *plVar8;
    lVar7 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Component>_TypeInfo*/ uRam0000000003d1eaf0);
    /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(lVar7,lVar6,uRam0000000003d634d8,uRam0000000003d41588);
    *(long *)(*(long *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8) + 0x10) = lVar7;
  }
  /*UnityEngine.UI.LayoutRebuilder$$PerformLayoutCalculation*/ func_0x032d3238(uVar10,uVar16,lVar7);
  plVar8 = *(long **)(uVar10 + 0x10);
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar15 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
  uVar11 = plVar15[3];
  if (uVar11 == 0) {
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      plVar15 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
    }
    lVar6 = *plVar15;
    uVar11 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Component>_TypeInfo*/ uRam0000000003d1eaf0);
    /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(uVar11,lVar6,uRam0000000003d634e0,uRam0000000003d41588);
    *(ulong *)(*(long *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8) + 0x18) = uVar11;
  }
  puVar22 = &UNK_032d30dc;
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x70);
  uVar12 = uVar10;
  plVar15 = plVar8;
  uVar20 = uVar11;
  do {
    plVar14 = plVar8;
    *(long *)(puVar3 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = uVar19;
    *(long *)(puVar3 + -0x30) = lVar6;
    *(ulong *)(puVar3 + -0x28) = uVar20;
    *(long **)(puVar3 + -0x20) = plVar15;
    *(ulong *)(puVar3 + -0x18) = uVar12;
    *(undefined1 **)(puVar3 + -0x10) = puVar21;
    *(undefined **)(puVar3 + -8) = puVar22;
    puVar21 = puVar3 + -0x10;
    if ((bRam0000000003ec2d42 & 1) == 0) {
      func_0x00f78a20(0x3d19778);
      func_0x00f78a20(0x3d222b0);
      func_0x00f78a20(0x3d22df0);
      func_0x00f78a20(0x3d398f8);
      func_0x00f78a20(0x3d39900);
      func_0x00f78a20(0x3d1d6c0);
      func_0x00f78a20(0x3d3a1c0);
      func_0x00f78a20(0x3d3a1c8);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d24188);
      func_0x00f78a20(0x3d247e0);
      func_0x00f78a20(0x3d25458);
      func_0x00f78a20(0x3d41590);
      bRam0000000003ec2d42 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar12 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar14,0,0);
    if ((uVar12 & 1) != 0) {
      return uVar12;
    }
    if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = /*UnityEngine.UI.ListPool<RectMask2D>$$Get*/ func_0x0233df3c(uRam0000000003d398f8);
    uVar19 = /*UnityEngine.UI.ILayoutController_var*/ uRam0000000003d19778;
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
    uVar19 = unaff_x26;
    uVar16 = unaff_x27;
    if (plVar14 == (long *)0x0) {
code_r0x032d3918:
      func_0x00f78af4();
      unaff_x26 = uVar19;
      unaff_x27 = uVar16;
    }
    else {
      /*UnityEngine.Component$$GetComponents*/ func_0x03227d78(plVar14,uVar13,lVar6,0);
      if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.UI.LayoutRebuilder$$StripDisabledBehavioursFromList*/ func_0x032d2d00(lVar6);
      if (lVar6 == 0) goto code_r0x032d3918;
      uVar12 = (ulong)*(uint *)(lVar6 + 0x18);
      if ((int)*(uint *)(lVar6 + 0x18) < 1) {
code_r0x032d3994:
        if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = lRam0000000003d39900;
        uVar19 = *(undefined8 *)(puVar3 + -0x30);
        uVar16 = *(undefined8 *)(puVar3 + -0x40);
        uVar13 = *(undefined8 *)(puVar3 + -0x38);
        *(undefined8 *)(puVar3 + -0x40) = uVar16;
        *(undefined8 *)(puVar3 + -0x38) = uVar13;
        *(undefined8 *)(puVar3 + -0x30) = uVar19;
        *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
        *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
        *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        lVar9 = *(long *)(lRam0000000003d39900 + 0x18);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
        uVar1 = *(ushort *)(lVar9 + 0x132);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar9);
          uVar1 = *(ushort *)(lVar9 + 0x132);
        }
        if ((uVar1 >> 10 & 1) != 0) {
          lVar9 = *(long *)(lVar7 + 0x18);
          if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar9);
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
          if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar9);
          }
          if (*(int *)(lVar9 + 0xe0) == 0) {
            lVar9 = *(long *)(lVar7 + 0x18);
            if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar9);
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
            if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar9);
            }
            func_0x00f78ad0(lVar9);
          }
        }
        lVar9 = *(long *)(lVar7 + 0x18);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar9 = **(long **)(lVar9 + 0xb8);
        if (lVar9 != 0) {
          lVar18 = *(long *)(lVar7 + 0x18);
          uVar1 = *(ushort *)(lVar18 + 0x132);
          lVar17 = lVar18;
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar18);
            lVar17 = *(long *)(lVar7 + 0x18);
            uVar1 = *(ushort *)(lVar17 + 0x132);
          }
          UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar18 + 0xc0) + 0x18);
          if ((uVar1 & 1) == 0) {
            *(code **)(puVar3 + -0x48) = UNRECOVERED_JUMPTABLE;
            func_0x00fac028(lVar17);
            UNRECOVERED_JUMPTABLE = *(code **)(puVar3 + -0x48);
          }
                    /* WARNING: Could not recover jumptable at 0x0233e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar11 = (*UNRECOVERED_JUMPTABLE)
                             (lVar9,lVar6,*(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x18));
          return uVar11;
        }
        lVar9 = func_0x00f78af4();
        *(undefined8 *)(puVar3 + -0x90) = uVar16;
        *(undefined8 *)(puVar3 + -0x88) = uVar13;
        *(undefined8 *)(puVar3 + -0x80) = uVar19;
        *(undefined8 *)(puVar3 + -0x78) = 0;
        *(long *)(puVar3 + -0x70) = lVar7;
        *(long *)(puVar3 + -0x68) = lVar6;
        *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x10;
        *(undefined **)(puVar3 + -0x58) = &UnityEngine_UI_ListPool_object____cctor;
        lVar6 = *(long *)(lVar9 + 0x18);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
        }
        uVar19 = func_0x00f78aec(lVar6);
        lVar7 = *(long *)(lVar9 + 0x18);
        uVar1 = *(ushort *)(lVar7 + 0x132);
        lVar6 = lVar7;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar7);
          lVar6 = *(long *)(lVar9 + 0x18);
          uVar1 = *(ushort *)(lVar6 + 0x132);
        }
        UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x30);
        lVar7 = lVar6;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar6);
          lVar7 = *(long *)(lVar9 + 0x18);
          uVar1 = *(ushort *)(lVar7 + 0x132);
        }
        uVar16 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        (*UNRECOVERED_JUMPTABLE)(uVar19,0,uVar16,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x30));
        lVar6 = *(long *)(lVar9 + 0x18);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x38);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
        }
        uVar16 = func_0x00f78aec(lVar6);
        lVar7 = *(long *)(lVar9 + 0x18);
        uVar1 = *(ushort *)(lVar7 + 0x132);
        lVar6 = lVar7;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar7);
          lVar6 = *(long *)(lVar9 + 0x18);
          uVar1 = *(ushort *)(lVar6 + 0x132);
        }
        UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar6);
        }
        uVar11 = (*UNRECOVERED_JUMPTABLE)
                           (uVar16,0,uVar19,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40));
        lVar6 = *(long *)(lVar9 + 0x18);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          uVar11 = func_0x00fac028(lVar6);
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          uVar11 = func_0x00fac028(lVar6);
        }
        **(undefined8 **)(lVar6 + 0xb8) = uVar16;
        return uVar11;
      }
      lVar7 = 4;
      unaff_x26 = 0x3d222b0;
      unaff_x27 = 0x3d41590;
      do {
        if ((uVar12 & 0xffffffff) <= lVar7 - 4U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar9 = func_0x00f78adc(*(undefined8 *)(*(long *)(lVar6 + 0x10) + lVar7 * 8),
                                /*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
        if (lVar9 != 0) {
          if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar7 - 4U) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar19 = unaff_x26;
          uVar16 = unaff_x27;
          if (uVar11 == 0) goto code_r0x032d3918;
          /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(uVar11,*(undefined8 *)(*(long *)(lVar6 + 0x10) + lVar7 * 8),
                          uRam0000000003d41590);
        }
        uVar12 = (ulong)*(int *)(lVar6 + 0x18);
        lVar9 = lVar7 + -3;
        lVar7 = lVar7 + 1;
      } while (lVar9 < (long)uVar12);
      if (0 < *(int *)(lVar6 + 0x18)) {
        unaff_x28 = 4;
        do {
          uVar20 = unaff_x28 - 4;
          if ((uVar12 & 0xffffffff) <= uVar20) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar7 = func_0x00f78adc(*(undefined8 *)(*(long *)(lVar6 + 0x10) + unaff_x28 * 8),
                                  /*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
          if (lVar7 == 0) {
            if (*(uint *)(lVar6 + 0x18) <= uVar20) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar8 = *(long **)(*(long *)(lVar6 + 0x10) + unaff_x28 * 8);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar8,0);
            if ((iVar5 == 0) || (plVar8 == (long *)0x0)) {
code_r0x032d388c:
              if (*(uint *)(lVar6 + 0x18) <= uVar20) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
            }
            else {
              if ((*(byte *)(*plVar8 + 300) < *(byte *)(/*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0 + 300)) ||
                 (*(long *)(*(long *)(*plVar8 + 200) +
                            (ulong)*(byte *)(/*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0 + 300) * 8 + -8) !=
                  /*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0)) goto code_r0x032d388c;
              lVar7 = plVar8[3];
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,plVar14,0);
              if (iVar5 == 0) goto code_r0x032d38b8;
              if (*(uint *)(lVar6 + 0x18) <= uVar20) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
            }
            uVar16 = 0x3d41590;
            uVar19 = 0x3d222b0;
            if (uVar11 == 0) goto code_r0x032d3918;
            /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(uVar11,*(undefined8 *)(*(long *)(lVar6 + 0x10) + unaff_x28 * 8),
                            uRam0000000003d41590);
          }
code_r0x032d38b8:
          uVar12 = (ulong)*(int *)(lVar6 + 0x18);
          lVar7 = unaff_x28 + -3;
          unaff_x28 = unaff_x28 + 1;
        } while (lVar7 < (long)uVar12);
      }
    }
    iVar5 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(plVar14,0);
    unaff_x25 = 0x3d1d6c0;
    if (iVar5 < 1) goto code_r0x032d3994;
    uVar19 = 0;
    unaff_x24 = 0x3d24188;
    plVar8 = (long *)/*UnityEngine.Transform$$GetChild*/ func_0x03277648(plVar14,0,0);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else if (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
      plVar8 = (long *)0x0;
    }
    puVar22 = &UNK_032d397c;
    puVar3 = puVar3 + -0x60;
    uVar12 = uVar11;
    plVar15 = plVar14;
    uVar20 = uVar10;
  } while( true );
}



// ============================================================
// RVA: 0x150becc | Atlas.UI.TopBarManager..ctor
// ============================================================

undefined1  [16] Atlas_UI_TopBarManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4d4f & 1) == 0) {
    func_0x00f78a20(0x3d29338);
    func_0x00f78a20(0x3d1f8d0);
    func_0x00f78a20(0x3d25320);
    bRam0000000003eb4d4f = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.TopBarManager_TypeInfo*/ lRam0000000003d25320 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.TopBarManager_TypeInfo*/ lRam0000000003d25320 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = func_0x00f78a34(/*Atlas.UI.TopBarManager.TopBarDelegate[]_TypeInfo*/ uRam0000000003d1f8d0,**(undefined4 **)(/*Atlas.UI.TopBarManager_TypeInfo*/ lRam0000000003d25320 + 0xb8));
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = func_0x00f78aec(/*Atlas.UI.TopBarManager.ScreenButtonRequest_TypeInfo*/ uRam0000000003d29338);
  /*Atlas.UI.TopBarManager.ScreenButtonRequest$$.ctor*/ func_0x0156b598(uVar1,0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ============================================================
// RVA: 0x150bf90 | Atlas.UI.TopBarManager..cctor
// ============================================================

void Atlas_UI_TopBarManager___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 extraout_w1;
  
  if ((bRam0000000003eb4d50 & 1) == 0) {
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1acb0);
    func_0x00f78a20(0x3d25320);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4d50 = 1;
  }
  uVar1 = /*Atlas.UI.TopBarManager.TopBarButton_var*/ uRam0000000003d1acb0;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar1,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar2 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar1,0);
  if (lVar2 != 0) {
    **(undefined4 **)(/*Atlas.UI.TopBarManager_TypeInfo*/ lRam0000000003d25320 + 0xb8) = (int)*(undefined8 *)(lVar2 + 0x18);
    return;
  }
  lVar2 = func_0x00f78af4();
  *(undefined1 *)(lVar2 + 0x80) = extraout_w1;
  return;
}



