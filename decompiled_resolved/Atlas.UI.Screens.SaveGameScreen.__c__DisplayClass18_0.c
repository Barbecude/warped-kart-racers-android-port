// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass18_0

// ============================================================
// RVA: 0x156610c | Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass18_0..ctor
// ============================================================

void Atlas_UI_Screens_SaveGameScreen___c__DisplayClass18_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1566114 | Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass18_0.<OnDeleteButtonPressed>b__0
// ============================================================

/* WARNING: Possible PIC construction at 0x014e9b78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e9b7c) */
/* WARNING: Removing unreachable block (ram,0x014e9b80) */
/* WARNING: Removing unreachable block (ram,0x014e9b90) */
/* WARNING: Removing unreachable block (ram,0x014e9b98) */
/* WARNING: Removing unreachable block (ram,0x014e9bac) */
/* WARNING: Removing unreachable block (ram,0x014e9bc4) */
/* WARNING: Removing unreachable block (ram,0x014e9be4) */
/* WARNING: Removing unreachable block (ram,0x014e9c64) */
/* WARNING: Removing unreachable block (ram,0x014e9c8c) */
/* WARNING: Removing unreachable block (ram,0x014e9c6c) */
/* WARNING: Removing unreachable block (ram,0x014e9bb4) */

ulong Atlas_UI_Screens_SaveGameScreen___c__DisplayClass18_0___OnDeleteButtonPressed_b__0
                (long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar13;
  long unaff_x19;
  long unaff_x20;
  long *plVar14;
  int iVar15;
  long *unaff_x21;
  uint uVar16;
  uint uVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  int iVar19;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long lVar20;
  undefined1 *puVar21;
  code *pcVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  undefined *puVar26;
  long *plVar12;
  
  puVar3 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0x10) != 0) {
    if ((bRam0000000003eb4c23 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78,*(undefined4 *)(param_1 + 0x18),0);
      func_0x00f78a20(0x3d280d0);
      func_0x00f78a20(0x3d3e0e8);
      func_0x00f78a20(0x3d63c18);
      func_0x00f78a20(0x3d28a80);
      func_0x00f78a20(0x3d412a8);
      func_0x00f78a20(0x3d6d128);
      func_0x00f78a20(0x3d6d108);
      func_0x00f78a20(0x3d720c8);
      func_0x00f78a20(0x3d720d0);
      bRam0000000003eb4c23 = 1;
    }
    uVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass19_0_TypeInfo*/ uRam0000000003d28a80);
    return uVar5;
  }
  lVar20 = func_0x00f78af4();
  puVar21 = &stack0xffffffffffffffe0;
  pcVar22 = (code *)&
                    Atlas_UI_Screens_SaveGameScreen___c__DisplayClass18_0___OnDeleteButtonPressed_b__1
  ;
  if (*(long *)(lVar20 + 0x10) == 0) {
    lVar20 = func_0x00f78af4();
    puVar26 = &Atlas_UI_Screens_SaveGameScreen___c__DisplayClass18_0___OnDeleteButtonPressed_b__2;
    lVar10 = *(long *)(lVar20 + 0x10);
    if (lVar10 == 0) {
      uVar5 = func_0x00f78af4();
      return uVar5;
    }
    uVar4 = *(uint *)(lVar20 + 0x18);
    plVar7 = (long *)(ulong)uVar4;
    puVar2 = &stack0xffffffffffffffb0;
    puVar3 = &stack0xffffffffffffffd0;
    lVar20 = 0x3d28a88;
    if ((bRam0000000003eb4c24 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78,plVar7,0);
      func_0x00f78a20(0x3d280d0);
      func_0x00f78a20(0x3d3e0e8);
      func_0x00f78a20(0x3d63c20);
      func_0x00f78a20(0x3d28a88);
      func_0x00f78a20(0x3d412a8);
      func_0x00f78a20(0x3d6d128);
      func_0x00f78a20(0x3d6d108);
      func_0x00f78a20(0x3d720c8);
      func_0x00f78a20(0x3d720d8);
      bRam0000000003eb4c24 = 1;
    }
    lVar6 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass20_0_TypeInfo*/ uRam0000000003d28a88);
    uVar5 = /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass20_0$$.ctor*/ func_0x015661e4(lVar6,0);
    if (lVar6 == 0) {
LAB_014e9e60:
      pcVar22 = Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteLastPrompt;
      auVar24 = func_0x00f78af4();
      unaff_x19 = lVar10;
      unaff_x20 = lVar6;
      unaff_x21 = plVar7;
      unaff_x22 = lVar20;
      goto code_r0x014e9e64;
    }
    *(long *)(lVar6 + 0x10) = lVar10;
    *(uint *)(lVar6 + 0x18) = uVar4;
    if (*(long *)(lVar10 + 0x90) != 0) {
      plVar7 = *(long **)(*(long *)(lVar10 + 0x90) + 0x30);
      uVar5 = 0;
      if ((plVar7 != (long *)0x0) &&
         (uVar5 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230)),
         (uVar5 & 1) != 0)) {
        return uVar5;
      }
    }
    if (*(long *)(lVar10 + 0x88) != 0) {
      return uVar5;
    }
    plVar7 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar7,0);
    lVar8 = /*STR('SETTINGS_SCREEN_CONFIRMATION_DELETE_CURRENT')*/ lRam0000000003d720d8;
    if (plVar7 == (long *)0x0) goto LAB_014e9e60;
    plVar7[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
    plVar7[6] = lVar8;
    lVar20 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar7[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar7[8] = lVar20;
    lVar20 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar20,lVar6,uRam0000000003d63c20,0);
    plVar7[0xb] = lVar20;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar10,uRam0000000003d412a8);
    if ((lVar8 == 0) || (plVar9 = *(long **)(lVar8 + 0xa0), plVar9 == (long *)0x0))
    goto LAB_014e9e60;
    puVar3 = &stack0xffffffffffffffe0;
  }
  else {
    auVar24._8_4_ = *(undefined4 *)(lVar20 + 0x18);
    auVar24._0_8_ = *(long *)(lVar20 + 0x10);
    auVar24._12_4_ = 0;
    puVar2 = &stack0xfffffffffffffff0;
code_r0x014e9e64:
    plVar7 = auVar24._8_8_;
    lVar10 = auVar24._0_8_;
    *(long *)(puVar2 + -0x30) = unaff_x22;
    *(long **)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar3;
    *(code **)(puVar2 + -8) = pcVar22;
    lVar20 = 0x3d28a90;
    if ((bRam0000000003eb4c25 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d280d0);
      func_0x00f78a20(0x3d3e0e8);
      func_0x00f78a20(0x3d63c28);
      func_0x00f78a20(0x3d28a90);
      func_0x00f78a20(0x3d412a8);
      func_0x00f78a20(0x3d6d128);
      func_0x00f78a20(0x3d6d108);
      func_0x00f78a20(0x3d720c8);
      func_0x00f78a20(0x3d720e0);
      bRam0000000003eb4c25 = 1;
    }
    lVar6 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0_TypeInfo*/ uRam0000000003d28a90);
    uVar5 = /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0$$.ctor*/ func_0x0156623c(lVar6,0);
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x10) = lVar10;
      *(int *)(lVar6 + 0x18) = auVar24._8_4_;
      if (*(long *)(lVar10 + 0x90) != 0) {
        plVar7 = *(long **)(*(long *)(lVar10 + 0x90) + 0x30);
        uVar5 = 0;
        if ((plVar7 != (long *)0x0) &&
           (uVar5 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230)),
           (uVar5 & 1) != 0)) {
          return uVar5;
        }
      }
      if (*(long *)(lVar10 + 0x88) != 0) {
        return uVar5;
      }
      plVar7 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar7,0);
      lVar8 = /*STR('SETTINGS_SCREEN_CONFIRMATION_DELETE_LAST')*/ lRam0000000003d720e0;
      if (plVar7 != (long *)0x0) {
        plVar7[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
        plVar7[6] = lVar8;
        lVar20 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar7[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar7[8] = lVar20;
        lVar20 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar20,lVar6,uRam0000000003d63c28,0);
        plVar7[0xb] = lVar20;
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar10,uRam0000000003d412a8);
        if ((lVar8 != 0) && (plVar9 = *(long **)(lVar8 + 0xa0), plVar9 != (long *)0x0)) {
          puVar21 = *(undefined1 **)(puVar2 + -0x10);
          puVar26 = *(undefined **)(puVar2 + -8);
          unaff_x20 = *(long *)(puVar2 + -0x20);
          unaff_x19 = *(long *)(puVar2 + -0x18);
          unaff_x22 = *(long *)(puVar2 + -0x30);
          unaff_x21 = *(long **)(puVar2 + -0x28);
          puVar3 = puVar2;
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar24 = func_0x00f78af4();
    *(long *)(puVar2 + -0x60) = lVar20;
    *(long **)(puVar2 + -0x58) = plVar7;
    *(long *)(puVar2 + -0x50) = lVar6;
    *(long *)(puVar2 + -0x48) = lVar10;
    *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
    *(code **)(puVar2 + -0x38) = Atlas_UI_Screens_SaveGameScreen__DeleteUnusedSlot;
    if ((bRam0000000003eb4c26 & 1) == 0) {
      func_0x00f78a20(0x3d28ab8);
      bRam0000000003eb4c26 = 1;
    }
    uVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22_TypeInfo*/ uRam0000000003d28ab8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22$$.ctor*/ func_0x01566918(uVar5,0,0);
    if (uVar5 != 0) {
      *(long *)(uVar5 + 0x20) = auVar24._0_8_;
      *(int *)(uVar5 + 0x28) = auVar24._8_4_;
      return uVar5;
    }
    auVar23 = func_0x00f78af4();
    *(undefined8 *)(puVar2 + -0x90) = 0x3d28ab8;
    *(undefined8 *)(puVar2 + -0x88) = 0;
    *(undefined1 (*) [16])(puVar2 + -0x80) = auVar24;
    *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x40;
    *(code **)(puVar2 + -0x68) = Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot;
    if ((bRam0000000003eb4c27 & 1) == 0) {
      func_0x00f78a20(0x3d28ab0);
      bRam0000000003eb4c27 = 1;
    }
    uVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23_TypeInfo*/ uRam0000000003d28ab0);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23$$.ctor*/ func_0x01566514(uVar5,0,0);
    if (uVar5 != 0) {
      *(long *)(uVar5 + 0x20) = auVar23._0_8_;
      *(int *)(uVar5 + 0x28) = auVar23._8_4_;
      return uVar5;
    }
    auVar24 = func_0x00f78af4();
    *(undefined8 *)(puVar2 + -0xc0) = 0x3d28ab0;
    *(undefined8 *)(puVar2 + -0xb8) = 0;
    *(undefined1 (*) [16])(puVar2 + -0xb0) = auVar23;
    *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
    *(code **)(puVar2 + -0x98) = Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot;
    if ((bRam0000000003eb4c28 & 1) == 0) {
      func_0x00f78a20(0x3d28aa8);
      bRam0000000003eb4c28 = 1;
    }
    uVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24_TypeInfo*/ uRam0000000003d28aa8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24$$.ctor*/ func_0x01566344(uVar5,0,0);
    if (uVar5 != 0) {
      *(long *)(uVar5 + 0x20) = auVar24._0_8_;
      *(int *)(uVar5 + 0x28) = auVar24._8_4_;
      return uVar5;
    }
    auVar23 = func_0x00f78af4();
    lVar10 = auVar23._0_8_;
    *(undefined8 *)(puVar2 + -0xf0) = 0x3d28aa8;
    *(undefined8 *)(puVar2 + -0xe8) = 0;
    *(undefined1 (*) [16])(puVar2 + -0xe0) = auVar24;
    *(undefined1 **)(puVar2 + -0xd0) = puVar2 + -0xa0;
    *(code **)(puVar2 + -200) = Atlas_UI_Screens_SaveGameScreen__OnUnUsedSlotSelected;
    lVar20 = 0x3d28a98;
    if ((bRam0000000003eb4c29 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d280d0);
      func_0x00f78a20(0x3d3e0e8);
      func_0x00f78a20(0x3d63c30);
      func_0x00f78a20(0x3d28a98);
      func_0x00f78a20(0x3d412a8);
      func_0x00f78a20(0x3d6d128);
      func_0x00f78a20(0x3d6d108);
      func_0x00f78a20(0x3d72138);
      func_0x00f78a20(0x3d72140);
      bRam0000000003eb4c29 = 1;
    }
    lVar6 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0_TypeInfo*/ uRam0000000003d28a98);
    uVar5 = /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0$$.ctor*/ func_0x01566294(lVar6,0);
    plVar14 = auVar23._8_8_;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x10) = lVar10;
      *(int *)(lVar6 + 0x18) = auVar23._8_4_;
      if (*(long *)(lVar10 + 0x90) != 0) {
        plVar7 = *(long **)(*(long *)(lVar10 + 0x90) + 0x30);
        uVar5 = 0;
        if ((plVar7 != (long *)0x0) &&
           (uVar5 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230)),
           (uVar5 & 1) != 0)) {
          return uVar5;
        }
      }
      if (*(long *)(lVar10 + 0x88) != 0) {
        return uVar5;
      }
      plVar7 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar7,0);
      lVar8 = /*STR('SETTINGS_SCREEN_START_NEW_GAME_BODY')*/ lRam0000000003d72140;
      plVar14 = plVar7;
      if (plVar7 != (long *)0x0) {
        plVar7[5] = /*STR('SETTINGS_SCREEN_START_NEW_GAME')*/ lRam0000000003d72138;
        plVar7[6] = lVar8;
        lVar20 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar7[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar7[8] = lVar20;
        lVar20 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar20,lVar6,uRam0000000003d63c30,0);
        plVar7[10] = lVar20;
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar10,uRam0000000003d412a8);
        if ((lVar8 != 0) && (plVar9 = *(long **)(lVar8 + 0xa0), plVar9 != (long *)0x0)) {
          puVar21 = *(undefined1 **)(puVar2 + -0xd0);
          puVar26 = *(undefined **)(puVar2 + -200);
          unaff_x20 = *(long *)(puVar2 + -0xe0);
          unaff_x19 = *(long *)(puVar2 + -0xd8);
          puVar3 = puVar2 + -0xc0;
          unaff_x22 = *(long *)(puVar2 + -0xf0);
          unaff_x21 = *(long **)(puVar2 + -0xe8);
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar24 = func_0x00f78af4();
    plVar7 = auVar24._8_8_;
    lVar8 = auVar24._0_8_;
    *(long *)(puVar2 + -0x120) = lVar20;
    *(long **)(puVar2 + -0x118) = plVar14;
    *(long *)(puVar2 + -0x110) = lVar6;
    *(long *)(puVar2 + -0x108) = lVar10;
    *(undefined1 **)(puVar2 + -0x100) = puVar2 + -0xd0;
    *(code **)(puVar2 + -0xf8) = Atlas_UI_Screens_SaveGameScreen__OnUsedSlotSelected;
    lVar20 = 0x3d28aa0;
    if ((bRam0000000003eb4c2a & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d280d0);
      func_0x00f78a20(0x3d3e0e8);
      func_0x00f78a20(0x3d63c38);
      func_0x00f78a20(0x3d28aa0);
      func_0x00f78a20(0x3d412a8);
      func_0x00f78a20(0x3d6d128);
      func_0x00f78a20(0x3d6d108);
      func_0x00f78a20(0x3d72128);
      func_0x00f78a20(0x3d72120);
      bRam0000000003eb4c2a = 1;
    }
    lVar10 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0_TypeInfo*/ uRam0000000003d28aa0);
    uVar5 = /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0$$.ctor*/ func_0x015662ec(lVar10,0);
    if (lVar10 == 0) {
LAB_014ea550:
      auVar24 = func_0x00f78af4();
      *(long *)(puVar2 + -0x150) = lVar20;
      *(long **)(puVar2 + -0x148) = plVar7;
      *(long *)(puVar2 + -0x140) = lVar10;
      *(long *)(puVar2 + -0x138) = lVar8;
      *(undefined1 **)(puVar2 + -0x130) = puVar2 + -0x100;
      *(code **)(puVar2 + -0x128) = Atlas_UI_Screens_SaveGameScreen__OnLoadSlotSelected;
      if ((bRam0000000003eb4c2b & 1) == 0) {
        func_0x00f78a20(0x3d28ac8);
        bRam0000000003eb4c2b = 1;
      }
      uVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27_TypeInfo*/ uRam0000000003d28ac8);
      /*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27$$.ctor*/ func_0x01566c9c(uVar5,0,0);
      if (uVar5 != 0) {
        *(long *)(uVar5 + 0x20) = auVar24._0_8_;
        *(int *)(uVar5 + 0x28) = auVar24._8_4_;
        return uVar5;
      }
      auVar23 = func_0x00f78af4();
      *(undefined8 *)(puVar2 + -0x180) = 0x3d28ac8;
      *(undefined8 *)(puVar2 + -0x178) = 0;
      *(undefined1 (*) [16])(puVar2 + -0x170) = auVar24;
      *(undefined1 **)(puVar2 + -0x160) = puVar2 + -0x130;
      *(code **)(puVar2 + -0x158) = Atlas_UI_Screens_SaveGameScreen__OnStartNewSlotSelected;
      if ((bRam0000000003eb4c2c & 1) == 0) {
        func_0x00f78a20(0x3d28ad0);
        bRam0000000003eb4c2c = 1;
      }
      uVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28_TypeInfo*/ uRam0000000003d28ad0);
      /*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28$$.ctor*/ func_0x01566e2c(uVar5,0,0);
      if (uVar5 != 0) {
        *(long *)(uVar5 + 0x20) = auVar23._0_8_;
        *(int *)(uVar5 + 0x28) = auVar23._8_4_;
        return uVar5;
      }
      auVar25 = func_0x00f78af4();
      *(undefined8 *)(puVar2 + -0x1b0) = 0x3d28ad0;
      *(undefined8 *)(puVar2 + -0x1a8) = 0;
      *(undefined1 (*) [16])(puVar2 + -0x1a0) = auVar23;
      *(undefined1 **)(puVar2 + -400) = puVar2 + -0x160;
      *(code **)(puVar2 + -0x188) = Atlas_UI_Screens_SaveGameScreen__EndTask;
      if ((bRam0000000003eb4c2d & 1) == 0) {
        func_0x00f78a20(0x3d28ac0);
        bRam0000000003eb4c2d = 1;
      }
      uVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29_TypeInfo*/ uRam0000000003d28ac0);
      /*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29$$.ctor*/ func_0x01566ab4(uVar5,0,0);
      if (uVar5 == 0) {
        lVar20 = func_0x00f78af4();
        if ((*(long *)(lVar20 + 0x90) != 0) &&
           (plVar7 = *(long **)(*(long *)(lVar20 + 0x90) + 0x30), plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
          return uVar5;
        }
        return 0;
      }
      *(undefined1 (*) [12])(uVar5 + 0x20) = auVar25;
      return uVar5;
    }
    *(long *)(lVar10 + 0x10) = lVar8;
    *(int *)(lVar10 + 0x18) = auVar24._8_4_;
    if (*(long *)(lVar8 + 0x90) != 0) {
      plVar7 = *(long **)(*(long *)(lVar8 + 0x90) + 0x30);
      uVar5 = 0;
      if ((plVar7 != (long *)0x0) &&
         (uVar5 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230)),
         (uVar5 & 1) != 0)) {
        return uVar5;
      }
    }
    if (*(long *)(lVar8 + 0x88) != 0) {
      return uVar5;
    }
    plVar7 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar7,0);
    lVar6 = /*STR('SETTINGS_SCREEN_LOAD_GAME_BODY')*/ lRam0000000003d72128;
    if (plVar7 == (long *)0x0) goto LAB_014ea550;
    plVar7[5] = /*STR('SETTINGS_SCREEN_LOAD_GAME')*/ lRam0000000003d72120;
    plVar7[6] = lVar6;
    lVar20 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar7[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar7[8] = lVar20;
    lVar20 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar20,lVar10,uRam0000000003d63c38,0);
    plVar7[10] = lVar20;
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d412a8);
    if ((lVar6 == 0) || (plVar9 = *(long **)(lVar6 + 0xa0), plVar9 == (long *)0x0))
    goto LAB_014ea550;
    puVar21 = *(undefined1 **)(puVar2 + -0x100);
    puVar26 = *(undefined **)(puVar2 + -0xf8);
    unaff_x20 = *(long *)(puVar2 + -0x110);
    unaff_x19 = *(long *)(puVar2 + -0x108);
    puVar3 = puVar2 + -0xf0;
    unaff_x22 = *(long *)(puVar2 + -0x120);
    unaff_x21 = *(long **)(puVar2 + -0x118);
  }
Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal:
  plVar14 = plRam0000000003d3e0e8;
  *(long *)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = unaff_x21;
  *(long *)(puVar3 + -0x20) = unaff_x20;
  *(long *)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar21;
  *(undefined **)(puVar3 + -8) = puVar26;
  uVar18 = 0x3eb8000;
  plVar13 = plRam0000000003d3e0e8;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar7 != (long *)0x0) {
    uVar18 = 0x3d71000;
    uVar11 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
    plVar13 = (long *)0x0;
    uVar11 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar11);
    if (plVar9 != (long *)0x0) {
      plVar13 = *(long **)(*(long *)(plVar14[3] + 0xc0) + 8);
      (*(code *)*plVar13)(plVar9,uVar11);
      if (plVar9[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar9[7],plVar7,uRam0000000003d3b330);
        plVar13 = (long *)plVar9[8];
        if ((plVar13 == (long *)0x0) || ((int)plVar7[2] <= (int)plVar13[2])) {
code_r0x025dfcb4:
          uVar5 = (*(code *)**(undefined8 **)(*(long *)(plVar14[3] + 0xc0) + 0x30))(plVar9);
          if ((uVar5 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
            return uVar5;
          }
          return uVar5;
        }
        if (plVar9[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar9[7],0,plVar13,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(plVar14[3] + 0xc0) + 0x60))(plVar9);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar24 = func_0x00f78af4();
  plVar12 = auVar24._8_8_;
  lVar20 = auVar24._0_8_;
  *(undefined8 *)(puVar3 + -0x60) = uVar18;
  *(long **)(puVar3 + -0x58) = plVar7;
  *(long **)(puVar3 + -0x50) = plVar14;
  *(long **)(puVar3 + -0x48) = plVar9;
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x38) = &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
  if (plVar12 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
    plVar14 = (long *)0x0;
    plVar9 = plVar12;
    plVar7 = plVar13;
    if (lVar20 != 0) {
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(plVar13[3] + 0xc0) + 0x70))(lVar20,uVar11);
      if ((uVar4 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(plVar13[3] + 0xc0) + 0x78))(lVar20,plVar12);
      }
      return (ulong)(uVar4 ^ 1);
    }
  }
  auVar24 = func_0x00f78af4();
  *(undefined8 *)(puVar3 + -0xb0) = unaff_x26;
  *(undefined8 *)(puVar3 + -0xa8) = unaff_x25;
  *(undefined8 *)(puVar3 + -0xa0) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x98) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x90) = uVar18;
  *(long **)(puVar3 + -0x88) = plVar7;
  *(long **)(puVar3 + -0x80) = plVar14;
  *(long **)(puVar3 + -0x78) = plVar9;
  *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
  *(undefined **)(puVar3 + -0x68) =
       &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
  iVar15 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar20 = *(long *)(auVar24._0_8_ + 0x38);
  if (lVar20 != 0) {
    iVar15 = *(int *)(lVar20 + 0x18);
    if (iVar15 < 1) goto code_r0x025dfe48;
    uVar4 = 0;
    iVar19 = -0x80000000;
    uVar16 = 0;
    do {
      if (*(uint *)(lVar20 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar20 = *(long *)(*(long *)(lVar20 + 0x10) + (long)(int)uVar4 * 8 + 0x20);
      if (lVar20 == 0) break;
      iVar1 = *(int *)(lVar20 + 0x10);
      uVar17 = uVar4;
      if (iVar1 <= iVar19) {
        uVar17 = uVar16;
      }
      if (iVar15 - 1U == uVar4) goto code_r0x025dfe4c;
      if (iVar1 <= iVar19) {
        iVar1 = iVar19;
      }
      lVar20 = *(long *)(auVar24._0_8_ + 0x38);
      uVar4 = uVar4 + 1;
      iVar19 = iVar1;
      uVar16 = uVar17;
    } while (lVar20 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar17 = 0;
code_r0x025dfe4c:
  *auVar24._8_8_ = uVar17;
  return (ulong)(0 < iVar15);
}



// ============================================================
// RVA: 0x156613c | Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass18_0.<OnDeleteButtonPressed>b__1
// ============================================================

ulong Atlas_UI_Screens_SaveGameScreen___c__DisplayClass18_0___OnDeleteButtonPressed_b__1
                (long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar14;
  long unaff_x19;
  long unaff_x20;
  long *plVar15;
  int iVar16;
  long *unaff_x21;
  uint uVar17;
  uint uVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  int iVar20;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **unaff_x29;
  undefined1 *puVar21;
  code *unaff_x30;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  undefined1 *puStack_20;
  undefined *puStack_18;
  long *plVar13;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar5 = func_0x00f78af4();
    puStack_18 = &Atlas_UI_Screens_SaveGameScreen___c__DisplayClass18_0___OnDeleteButtonPressed_b__2
    ;
    lVar8 = *(long *)(lVar5 + 0x10);
    if (lVar8 == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      uVar6 = func_0x00f78af4();
      return uVar6;
    }
    uVar4 = *(uint *)(lVar5 + 0x18);
    plVar7 = (long *)(ulong)uVar4;
    puVar2 = &stack0xffffffffffffffc0;
    unaff_x29 = &puStack_20;
    lVar5 = 0x3d28a88;
    puStack_20 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4c24 & 1) == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      func_0x00f78a20(0x3d1fa78,plVar7,0);
      func_0x00f78a20(0x3d280d0);
      func_0x00f78a20(0x3d3e0e8);
      func_0x00f78a20(0x3d63c20);
      func_0x00f78a20(0x3d28a88);
      func_0x00f78a20(0x3d412a8);
      func_0x00f78a20(0x3d6d128);
      func_0x00f78a20(0x3d6d108);
      func_0x00f78a20(0x3d720c8);
      func_0x00f78a20(0x3d720d8);
      bRam0000000003eb4c24 = 1;
    }
    lVar9 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass20_0_TypeInfo*/ uRam0000000003d28a88);
    uVar6 = /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass20_0$$.ctor*/ func_0x015661e4(lVar9,0);
    if (lVar9 == 0) {
LAB_014e9e60:
      unaff_x30 = Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteLastPrompt;
      auVar24 = func_0x00f78af4();
      goto code_r0x014e9e64;
    }
    *(long *)(lVar9 + 0x10) = lVar8;
    *(uint *)(lVar9 + 0x18) = uVar4;
    if (*(long *)(lVar8 + 0x90) != 0) {
      plVar7 = *(long **)(*(long *)(lVar8 + 0x90) + 0x30);
      uVar6 = 0;
      if ((plVar7 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230)),
         (uVar6 & 1) != 0)) {
        return uVar6;
      }
    }
    if (*(long *)(lVar8 + 0x88) != 0) {
      return uVar6;
    }
    plVar7 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar7,0);
    lVar11 = /*STR('SETTINGS_SCREEN_CONFIRMATION_DELETE_CURRENT')*/ lRam0000000003d720d8;
    if (plVar7 == (long *)0x0) goto LAB_014e9e60;
    plVar7[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
    plVar7[6] = lVar11;
    lVar5 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar7[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar7[8] = lVar5;
    lVar5 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar5,lVar9,uRam0000000003d63c20,0);
    plVar7[0xb] = lVar5;
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d412a8);
    if ((lVar11 == 0) || (plVar10 = *(long **)(lVar11 + 0xa0), plVar10 == (long *)0x0))
    goto LAB_014e9e60;
    puVar3 = &stack0xfffffffffffffff0;
    puVar21 = puStack_20;
    puVar22 = puStack_18;
  }
  else {
    auVar24._8_4_ = *(undefined4 *)(param_1 + 0x18);
    auVar24._0_8_ = *(long *)(param_1 + 0x10);
    auVar24._12_4_ = 0;
    puVar2 = (undefined1 *)register0x00000008;
    lVar8 = unaff_x19;
    lVar9 = unaff_x20;
    plVar7 = unaff_x21;
    lVar5 = unaff_x22;
code_r0x014e9e64:
    lVar11 = auVar24._0_8_;
    *(long *)(puVar2 + -0x30) = lVar5;
    *(long **)(puVar2 + -0x28) = plVar7;
    *(long *)(puVar2 + -0x20) = lVar9;
    *(long *)(puVar2 + -0x18) = lVar8;
    *(undefined1 ***)(puVar2 + -0x10) = unaff_x29;
    *(code **)(puVar2 + -8) = unaff_x30;
    lVar8 = 0x3d28a90;
    if ((bRam0000000003eb4c25 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d280d0);
      func_0x00f78a20(0x3d3e0e8);
      func_0x00f78a20(0x3d63c28);
      func_0x00f78a20(0x3d28a90);
      func_0x00f78a20(0x3d412a8);
      func_0x00f78a20(0x3d6d128);
      func_0x00f78a20(0x3d6d108);
      func_0x00f78a20(0x3d720c8);
      func_0x00f78a20(0x3d720e0);
      bRam0000000003eb4c25 = 1;
    }
    lVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0_TypeInfo*/ uRam0000000003d28a90);
    uVar6 = /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0$$.ctor*/ func_0x0156623c(lVar5,0);
    plVar7 = auVar24._8_8_;
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x10) = lVar11;
      *(int *)(lVar5 + 0x18) = auVar24._8_4_;
      if (*(long *)(lVar11 + 0x90) != 0) {
        plVar7 = *(long **)(*(long *)(lVar11 + 0x90) + 0x30);
        uVar6 = 0;
        if ((plVar7 != (long *)0x0) &&
           (uVar6 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230)),
           (uVar6 & 1) != 0)) {
          return uVar6;
        }
      }
      if (*(long *)(lVar11 + 0x88) != 0) {
        return uVar6;
      }
      plVar7 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar7,0);
      lVar9 = /*STR('SETTINGS_SCREEN_CONFIRMATION_DELETE_LAST')*/ lRam0000000003d720e0;
      if (plVar7 != (long *)0x0) {
        plVar7[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
        plVar7[6] = lVar9;
        lVar8 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar7[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar7[8] = lVar8;
        lVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar8,lVar5,uRam0000000003d63c28,0);
        plVar7[0xb] = lVar8;
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d412a8);
        if ((lVar9 != 0) && (plVar10 = *(long **)(lVar9 + 0xa0), plVar10 != (long *)0x0)) {
          unaff_x20 = *(long *)(puVar2 + -0x20);
          unaff_x19 = *(long *)(puVar2 + -0x18);
          unaff_x22 = *(long *)(puVar2 + -0x30);
          unaff_x21 = *(long **)(puVar2 + -0x28);
          puVar3 = puVar2;
          puVar21 = *(undefined1 **)(puVar2 + -0x10);
          puVar22 = *(undefined **)(puVar2 + -8);
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar24 = func_0x00f78af4();
    *(long *)(puVar2 + -0x60) = lVar8;
    *(long **)(puVar2 + -0x58) = plVar7;
    *(long *)(puVar2 + -0x50) = lVar5;
    *(long *)(puVar2 + -0x48) = lVar11;
    *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
    *(code **)(puVar2 + -0x38) = Atlas_UI_Screens_SaveGameScreen__DeleteUnusedSlot;
    if ((bRam0000000003eb4c26 & 1) == 0) {
      func_0x00f78a20(0x3d28ab8);
      bRam0000000003eb4c26 = 1;
    }
    uVar6 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22_TypeInfo*/ uRam0000000003d28ab8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22$$.ctor*/ func_0x01566918(uVar6,0,0);
    if (uVar6 != 0) {
      *(long *)(uVar6 + 0x20) = auVar24._0_8_;
      *(int *)(uVar6 + 0x28) = auVar24._8_4_;
      return uVar6;
    }
    auVar23 = func_0x00f78af4();
    *(undefined8 *)(puVar2 + -0x90) = 0x3d28ab8;
    *(undefined8 *)(puVar2 + -0x88) = 0;
    *(undefined1 (*) [16])(puVar2 + -0x80) = auVar24;
    *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x40;
    *(code **)(puVar2 + -0x68) = Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot;
    if ((bRam0000000003eb4c27 & 1) == 0) {
      func_0x00f78a20(0x3d28ab0);
      bRam0000000003eb4c27 = 1;
    }
    uVar6 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23_TypeInfo*/ uRam0000000003d28ab0);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23$$.ctor*/ func_0x01566514(uVar6,0,0);
    if (uVar6 != 0) {
      *(long *)(uVar6 + 0x20) = auVar23._0_8_;
      *(int *)(uVar6 + 0x28) = auVar23._8_4_;
      return uVar6;
    }
    auVar24 = func_0x00f78af4();
    *(undefined8 *)(puVar2 + -0xc0) = 0x3d28ab0;
    *(undefined8 *)(puVar2 + -0xb8) = 0;
    *(undefined1 (*) [16])(puVar2 + -0xb0) = auVar23;
    *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
    *(code **)(puVar2 + -0x98) = Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot;
    if ((bRam0000000003eb4c28 & 1) == 0) {
      func_0x00f78a20(0x3d28aa8);
      bRam0000000003eb4c28 = 1;
    }
    uVar6 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24_TypeInfo*/ uRam0000000003d28aa8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24$$.ctor*/ func_0x01566344(uVar6,0,0);
    if (uVar6 != 0) {
      *(long *)(uVar6 + 0x20) = auVar24._0_8_;
      *(int *)(uVar6 + 0x28) = auVar24._8_4_;
      return uVar6;
    }
    auVar23 = func_0x00f78af4();
    lVar5 = auVar23._0_8_;
    *(undefined8 *)(puVar2 + -0xf0) = 0x3d28aa8;
    *(undefined8 *)(puVar2 + -0xe8) = 0;
    *(undefined1 (*) [16])(puVar2 + -0xe0) = auVar24;
    *(undefined1 **)(puVar2 + -0xd0) = puVar2 + -0xa0;
    *(code **)(puVar2 + -200) = Atlas_UI_Screens_SaveGameScreen__OnUnUsedSlotSelected;
    lVar8 = 0x3d28a98;
    if ((bRam0000000003eb4c29 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d280d0);
      func_0x00f78a20(0x3d3e0e8);
      func_0x00f78a20(0x3d63c30);
      func_0x00f78a20(0x3d28a98);
      func_0x00f78a20(0x3d412a8);
      func_0x00f78a20(0x3d6d128);
      func_0x00f78a20(0x3d6d108);
      func_0x00f78a20(0x3d72138);
      func_0x00f78a20(0x3d72140);
      bRam0000000003eb4c29 = 1;
    }
    lVar9 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0_TypeInfo*/ uRam0000000003d28a98);
    uVar6 = /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0$$.ctor*/ func_0x01566294(lVar9,0);
    plVar15 = auVar23._8_8_;
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x10) = lVar5;
      *(int *)(lVar9 + 0x18) = auVar23._8_4_;
      if (*(long *)(lVar5 + 0x90) != 0) {
        plVar7 = *(long **)(*(long *)(lVar5 + 0x90) + 0x30);
        uVar6 = 0;
        if ((plVar7 != (long *)0x0) &&
           (uVar6 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230)),
           (uVar6 & 1) != 0)) {
          return uVar6;
        }
      }
      if (*(long *)(lVar5 + 0x88) != 0) {
        return uVar6;
      }
      plVar7 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar7,0);
      lVar11 = /*STR('SETTINGS_SCREEN_START_NEW_GAME_BODY')*/ lRam0000000003d72140;
      plVar15 = plVar7;
      if (plVar7 != (long *)0x0) {
        plVar7[5] = /*STR('SETTINGS_SCREEN_START_NEW_GAME')*/ lRam0000000003d72138;
        plVar7[6] = lVar11;
        lVar8 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar7[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar7[8] = lVar8;
        lVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar8,lVar9,uRam0000000003d63c30,0);
        plVar7[10] = lVar8;
        lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d412a8);
        if ((lVar11 != 0) && (plVar10 = *(long **)(lVar11 + 0xa0), plVar10 != (long *)0x0)) {
          unaff_x20 = *(long *)(puVar2 + -0xe0);
          unaff_x19 = *(long *)(puVar2 + -0xd8);
          puVar3 = puVar2 + -0xc0;
          unaff_x22 = *(long *)(puVar2 + -0xf0);
          unaff_x21 = *(long **)(puVar2 + -0xe8);
          puVar21 = *(undefined1 **)(puVar2 + -0xd0);
          puVar22 = *(undefined **)(puVar2 + -200);
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar24 = func_0x00f78af4();
    plVar7 = auVar24._8_8_;
    lVar11 = auVar24._0_8_;
    *(long *)(puVar2 + -0x120) = lVar8;
    *(long **)(puVar2 + -0x118) = plVar15;
    *(long *)(puVar2 + -0x110) = lVar9;
    *(long *)(puVar2 + -0x108) = lVar5;
    *(undefined1 **)(puVar2 + -0x100) = puVar2 + -0xd0;
    *(code **)(puVar2 + -0xf8) = Atlas_UI_Screens_SaveGameScreen__OnUsedSlotSelected;
    lVar8 = 0x3d28aa0;
    if ((bRam0000000003eb4c2a & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d280d0);
      func_0x00f78a20(0x3d3e0e8);
      func_0x00f78a20(0x3d63c38);
      func_0x00f78a20(0x3d28aa0);
      func_0x00f78a20(0x3d412a8);
      func_0x00f78a20(0x3d6d128);
      func_0x00f78a20(0x3d6d108);
      func_0x00f78a20(0x3d72128);
      func_0x00f78a20(0x3d72120);
      bRam0000000003eb4c2a = 1;
    }
    lVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0_TypeInfo*/ uRam0000000003d28aa0);
    uVar6 = /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0$$.ctor*/ func_0x015662ec(lVar5,0);
    if (lVar5 == 0) {
LAB_014ea550:
      auVar24 = func_0x00f78af4();
      *(long *)(puVar2 + -0x150) = lVar8;
      *(long **)(puVar2 + -0x148) = plVar7;
      *(long *)(puVar2 + -0x140) = lVar5;
      *(long *)(puVar2 + -0x138) = lVar11;
      *(undefined1 **)(puVar2 + -0x130) = puVar2 + -0x100;
      *(code **)(puVar2 + -0x128) = Atlas_UI_Screens_SaveGameScreen__OnLoadSlotSelected;
      if ((bRam0000000003eb4c2b & 1) == 0) {
        func_0x00f78a20(0x3d28ac8);
        bRam0000000003eb4c2b = 1;
      }
      uVar6 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27_TypeInfo*/ uRam0000000003d28ac8);
      /*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27$$.ctor*/ func_0x01566c9c(uVar6,0,0);
      if (uVar6 == 0) {
        auVar23 = func_0x00f78af4();
        *(undefined8 *)(puVar2 + -0x180) = 0x3d28ac8;
        *(undefined8 *)(puVar2 + -0x178) = 0;
        *(undefined1 (*) [16])(puVar2 + -0x170) = auVar24;
        *(undefined1 **)(puVar2 + -0x160) = puVar2 + -0x130;
        *(code **)(puVar2 + -0x158) = Atlas_UI_Screens_SaveGameScreen__OnStartNewSlotSelected;
        if ((bRam0000000003eb4c2c & 1) == 0) {
          func_0x00f78a20(0x3d28ad0);
          bRam0000000003eb4c2c = 1;
        }
        uVar6 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28_TypeInfo*/ uRam0000000003d28ad0);
        /*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28$$.ctor*/ func_0x01566e2c(uVar6,0,0);
        if (uVar6 == 0) {
          auVar25 = func_0x00f78af4();
          *(undefined8 *)(puVar2 + -0x1b0) = 0x3d28ad0;
          *(undefined8 *)(puVar2 + -0x1a8) = 0;
          *(undefined1 (*) [16])(puVar2 + -0x1a0) = auVar23;
          *(undefined1 **)(puVar2 + -400) = puVar2 + -0x160;
          *(code **)(puVar2 + -0x188) = Atlas_UI_Screens_SaveGameScreen__EndTask;
          if ((bRam0000000003eb4c2d & 1) == 0) {
            func_0x00f78a20(0x3d28ac0);
            bRam0000000003eb4c2d = 1;
          }
          uVar6 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29_TypeInfo*/ uRam0000000003d28ac0);
          /*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29$$.ctor*/ func_0x01566ab4(uVar6,0,0);
          if (uVar6 == 0) {
            lVar8 = func_0x00f78af4();
            if ((*(long *)(lVar8 + 0x90) != 0) &&
               (plVar7 = *(long **)(*(long *)(lVar8 + 0x90) + 0x30), plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar6 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230));
              return uVar6;
            }
            return 0;
          }
          *(undefined1 (*) [12])(uVar6 + 0x20) = auVar25;
          return uVar6;
        }
        *(long *)(uVar6 + 0x20) = auVar23._0_8_;
        *(int *)(uVar6 + 0x28) = auVar23._8_4_;
        return uVar6;
      }
      *(long *)(uVar6 + 0x20) = auVar24._0_8_;
      *(int *)(uVar6 + 0x28) = auVar24._8_4_;
      return uVar6;
    }
    *(long *)(lVar5 + 0x10) = lVar11;
    *(int *)(lVar5 + 0x18) = auVar24._8_4_;
    if (*(long *)(lVar11 + 0x90) != 0) {
      plVar7 = *(long **)(*(long *)(lVar11 + 0x90) + 0x30);
      uVar6 = 0;
      if ((plVar7 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230)),
         (uVar6 & 1) != 0)) {
        return uVar6;
      }
    }
    if (*(long *)(lVar11 + 0x88) != 0) {
      return uVar6;
    }
    plVar7 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar7,0);
    lVar9 = /*STR('SETTINGS_SCREEN_LOAD_GAME_BODY')*/ lRam0000000003d72128;
    if (plVar7 == (long *)0x0) goto LAB_014ea550;
    plVar7[5] = /*STR('SETTINGS_SCREEN_LOAD_GAME')*/ lRam0000000003d72120;
    plVar7[6] = lVar9;
    lVar8 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar7[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar7[8] = lVar8;
    lVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar8,lVar5,uRam0000000003d63c38,0);
    plVar7[10] = lVar8;
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d412a8);
    if ((lVar9 == 0) || (plVar10 = *(long **)(lVar9 + 0xa0), plVar10 == (long *)0x0))
    goto LAB_014ea550;
    unaff_x20 = *(long *)(puVar2 + -0x110);
    unaff_x19 = *(long *)(puVar2 + -0x108);
    puVar3 = puVar2 + -0xf0;
    unaff_x22 = *(long *)(puVar2 + -0x120);
    unaff_x21 = *(long **)(puVar2 + -0x118);
    puVar21 = *(undefined1 **)(puVar2 + -0x100);
    puVar22 = *(undefined **)(puVar2 + -0xf8);
  }
Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal:
  plVar15 = plRam0000000003d3e0e8;
  *(long *)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = unaff_x21;
  *(long *)(puVar3 + -0x20) = unaff_x20;
  *(long *)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar21;
  *(undefined **)(puVar3 + -8) = puVar22;
  uVar19 = 0x3eb8000;
  plVar14 = plRam0000000003d3e0e8;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar7 != (long *)0x0) {
    uVar19 = 0x3d71000;
    uVar12 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
    plVar14 = (long *)0x0;
    uVar12 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar12);
    if (plVar10 != (long *)0x0) {
      plVar14 = *(long **)(*(long *)(plVar15[3] + 0xc0) + 8);
      (*(code *)*plVar14)(plVar10,uVar12);
      if (plVar10[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar10[7],plVar7,uRam0000000003d3b330);
        plVar14 = (long *)plVar10[8];
        if ((plVar14 == (long *)0x0) || ((int)plVar7[2] <= (int)plVar14[2])) {
code_r0x025dfcb4:
          uVar6 = (*(code *)**(undefined8 **)(*(long *)(plVar15[3] + 0xc0) + 0x30))(plVar10);
          if ((uVar6 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar6 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
            return uVar6;
          }
          return uVar6;
        }
        if (plVar10[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar10[7],0,plVar14,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(plVar15[3] + 0xc0) + 0x60))(plVar10);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar24 = func_0x00f78af4();
  plVar13 = auVar24._8_8_;
  lVar8 = auVar24._0_8_;
  *(undefined8 *)(puVar3 + -0x60) = uVar19;
  *(long **)(puVar3 + -0x58) = plVar7;
  *(long **)(puVar3 + -0x50) = plVar15;
  *(long **)(puVar3 + -0x48) = plVar10;
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x38) = &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
  if (plVar13 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
    plVar15 = (long *)0x0;
    plVar10 = plVar13;
    plVar7 = plVar14;
    if (lVar8 != 0) {
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(plVar14[3] + 0xc0) + 0x70))(lVar8,uVar12);
      if ((uVar4 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(plVar14[3] + 0xc0) + 0x78))(lVar8,plVar13);
      }
      return (ulong)(uVar4 ^ 1);
    }
  }
  auVar24 = func_0x00f78af4();
  *(undefined8 *)(puVar3 + -0xb0) = unaff_x26;
  *(undefined8 *)(puVar3 + -0xa8) = unaff_x25;
  *(undefined8 *)(puVar3 + -0xa0) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x98) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x90) = uVar19;
  *(long **)(puVar3 + -0x88) = plVar7;
  *(long **)(puVar3 + -0x80) = plVar15;
  *(long **)(puVar3 + -0x78) = plVar10;
  *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
  *(undefined **)(puVar3 + -0x68) =
       &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
  iVar16 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar8 = *(long *)(auVar24._0_8_ + 0x38);
  if (lVar8 != 0) {
    iVar16 = *(int *)(lVar8 + 0x18);
    if (iVar16 < 1) goto code_r0x025dfe48;
    uVar4 = 0;
    iVar20 = -0x80000000;
    uVar17 = 0;
    do {
      if (*(uint *)(lVar8 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar4 * 8 + 0x20);
      if (lVar8 == 0) break;
      iVar1 = *(int *)(lVar8 + 0x10);
      uVar18 = uVar4;
      if (iVar1 <= iVar20) {
        uVar18 = uVar17;
      }
      if (iVar16 - 1U == uVar4) goto code_r0x025dfe4c;
      if (iVar1 <= iVar20) {
        iVar1 = iVar20;
      }
      lVar8 = *(long *)(auVar24._0_8_ + 0x38);
      uVar4 = uVar4 + 1;
      iVar20 = iVar1;
      uVar17 = uVar18;
    } while (lVar8 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar18 = 0;
code_r0x025dfe4c:
  *auVar24._8_8_ = uVar18;
  return (ulong)(0 < iVar16);
}



// ============================================================
// RVA: 0x1566164 | Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass18_0.<OnDeleteButtonPressed>b__2
// ============================================================

long * Atlas_UI_Screens_SaveGameScreen___c__DisplayClass18_0___OnDeleteButtonPressed_b__2
                 (long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  int iVar14;
  long *unaff_x21;
  uint uVar15;
  uint uVar16;
  long unaff_x22;
  undefined8 uVar17;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  int iVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******unaff_x29;
  code *unaff_x30;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  code *pcStack_128;
  long lStack_120;
  long *plStack_118;
  undefined1 auStack_110 [16];
  undefined8 ******ppppppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 ******ppppppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 ******ppppppuStack_a0;
  code *pcStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 ******ppppppuStack_70;
  code *pcStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 ******ppppppuStack_40;
  code *pcStack_38;
  long *plVar12;
  
  auVar20._8_8_ = unaff_x19;
  auVar20._0_8_ = unaff_x20;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == 0) {
    plVar4 = (long *)func_0x00f78af4();
    return plVar4;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  lVar6 = 0x3d28a88;
  if ((bRam0000000003eb4c24 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78,(long *)(ulong)uVar2,0);
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d63c20);
    func_0x00f78a20(0x3d28a88);
    func_0x00f78a20(0x3d412a8);
    func_0x00f78a20(0x3d6d128);
    func_0x00f78a20(0x3d6d108);
    func_0x00f78a20(0x3d720c8);
    func_0x00f78a20(0x3d720d8);
    bRam0000000003eb4c24 = 1;
  }
  lVar3 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass20_0_TypeInfo*/ uRam0000000003d28a88);
  plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass20_0$$.ctor*/ func_0x015661e4(lVar3,0);
  plVar5 = (long *)(ulong)uVar2;
  if (lVar3 == 0) {
LAB_014e9e60:
    auVar20 = func_0x00f78af4();
    plVar4 = auVar20._8_8_;
    lVar9 = auVar20._0_8_;
    pcStack_38 = Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteLastPrompt;
    lVar7 = 0x3d28a90;
    lStack_60 = lVar6;
    plStack_58 = plVar5;
    lStack_50 = lVar3;
    lStack_48 = lVar10;
    ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4c25 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d280d0);
      func_0x00f78a20(0x3d3e0e8);
      func_0x00f78a20(0x3d63c28);
      func_0x00f78a20(0x3d28a90);
      func_0x00f78a20(0x3d412a8);
      func_0x00f78a20(0x3d6d128);
      func_0x00f78a20(0x3d6d108);
      func_0x00f78a20(0x3d720c8);
      func_0x00f78a20(0x3d720e0);
      bRam0000000003eb4c25 = 1;
    }
    lVar10 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0_TypeInfo*/ uRam0000000003d28a90);
    plVar5 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0$$.ctor*/ func_0x0156623c(lVar10,0);
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar9;
      *(int *)(lVar10 + 0x18) = auVar20._8_4_;
      if (*(long *)(lVar9 + 0x90) != 0) {
        plVar4 = *(long **)(*(long *)(lVar9 + 0x90) + 0x30);
        plVar5 = (long *)0x0;
        if ((plVar4 != (long *)0x0) &&
           (plVar5 = (long *)(**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230))
           , ((ulong)plVar5 & 1) != 0)) {
          return plVar5;
        }
      }
      if (*(long *)(lVar9 + 0x88) != 0) {
        return plVar5;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
      lVar6 = /*STR('SETTINGS_SCREEN_CONFIRMATION_DELETE_LAST')*/ lRam0000000003d720e0;
      if (plVar4 != (long *)0x0) {
        plVar4[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
        plVar4[6] = lVar6;
        lVar6 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar4[8] = lVar6;
        lVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar7,lVar10,uRam0000000003d63c28,0);
        plVar4[0xb] = lVar7;
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d412a8);
        auVar20._8_8_ = lStack_48;
        auVar20._0_8_ = lStack_50;
        if ((lVar6 != 0) && (plVar8 = *(long **)(lVar6 + 0xa0), plVar8 != (long *)0x0)) {
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
          unaff_x21 = plStack_58;
          unaff_x22 = lStack_60;
          unaff_x29 = (undefined8 *******)ppppppuStack_40;
          unaff_x30 = pcStack_38;
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar20 = func_0x00f78af4();
    pcStack_68 = Atlas_UI_Screens_SaveGameScreen__DeleteUnusedSlot;
    lStack_90 = lVar7;
    plStack_88 = plVar4;
    lStack_80 = lVar10;
    lStack_78 = lVar9;
    ppppppuStack_70 = &ppppppuStack_40;
    if ((bRam0000000003eb4c26 & 1) == 0) {
      func_0x00f78a20(0x3d28ab8);
      bRam0000000003eb4c26 = 1;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22_TypeInfo*/ uRam0000000003d28ab8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22$$.ctor*/ func_0x01566918(plVar4,0,0);
    if (plVar4 != (long *)0x0) {
      plVar4[4] = auVar20._0_8_;
      *(int *)(plVar4 + 5) = auVar20._8_4_;
      return plVar4;
    }
    auVar19 = func_0x00f78af4();
    uStack_c0 = 0x3d28ab8;
    pcStack_98 = Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot;
    plStack_b8 = plVar4;
    ppppppuStack_a0 = &ppppppuStack_70;
    auStack_b0 = auVar20;
    if ((bRam0000000003eb4c27 & 1) == 0) {
      func_0x00f78a20(0x3d28ab0);
      bRam0000000003eb4c27 = 1;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23_TypeInfo*/ uRam0000000003d28ab0);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23$$.ctor*/ func_0x01566514(plVar4,0,0);
    if (plVar4 != (long *)0x0) {
      plVar4[4] = auVar19._0_8_;
      *(int *)(plVar4 + 5) = auVar19._8_4_;
      return plVar4;
    }
    auVar20 = func_0x00f78af4();
    uStack_f0 = 0x3d28ab0;
    pcStack_c8 = Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot;
    plStack_e8 = plVar4;
    ppppppuStack_d0 = &ppppppuStack_a0;
    auStack_e0 = auVar19;
    if ((bRam0000000003eb4c28 & 1) == 0) {
      func_0x00f78a20(0x3d28aa8);
      bRam0000000003eb4c28 = 1;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24_TypeInfo*/ uRam0000000003d28aa8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24$$.ctor*/ func_0x01566344(plVar4,0,0);
    if (plVar4 != (long *)0x0) {
      plVar4[4] = auVar20._0_8_;
      *(int *)(plVar4 + 5) = auVar20._8_4_;
      return plVar4;
    }
    auVar19 = func_0x00f78af4();
    lVar10 = auVar19._0_8_;
    lStack_120 = 0x3d28aa8;
    pcStack_f8 = Atlas_UI_Screens_SaveGameScreen__OnUnUsedSlotSelected;
    unaff_x29 = &ppppppuStack_100;
    unaff_x22 = 0x3d28a98;
    plStack_118 = plVar4;
    ppppppuStack_100 = &ppppppuStack_d0;
    auStack_110 = auVar20;
    if ((bRam0000000003eb4c29 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d280d0);
      func_0x00f78a20(0x3d3e0e8);
      func_0x00f78a20(0x3d63c30);
      func_0x00f78a20(0x3d28a98);
      func_0x00f78a20(0x3d412a8);
      func_0x00f78a20(0x3d6d128);
      func_0x00f78a20(0x3d6d108);
      func_0x00f78a20(0x3d72138);
      func_0x00f78a20(0x3d72140);
      bRam0000000003eb4c29 = 1;
    }
    lVar6 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0_TypeInfo*/ uRam0000000003d28a98);
    auVar20._8_8_ = lVar10;
    auVar20._0_8_ = lVar6;
    plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0$$.ctor*/ func_0x01566294(lVar6,0);
    unaff_x21 = auVar19._8_8_;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x10) = lVar10;
      *(int *)(lVar6 + 0x18) = auVar19._8_4_;
      if (*(long *)(lVar10 + 0x90) != 0) {
        plVar5 = *(long **)(*(long *)(lVar10 + 0x90) + 0x30);
        plVar4 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
          if (((ulong)plVar4 & 1) != 0) {
            return plVar4;
          }
        }
      }
      if (*(long *)(lVar10 + 0x88) != 0) {
        return plVar4;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
      lVar3 = /*STR('SETTINGS_SCREEN_START_NEW_GAME_BODY')*/ lRam0000000003d72140;
      unaff_x21 = plVar4;
      if (plVar4 != (long *)0x0) {
        plVar4[5] = /*STR('SETTINGS_SCREEN_START_NEW_GAME')*/ lRam0000000003d72138;
        plVar4[6] = lVar3;
        lVar3 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar4[8] = lVar3;
        unaff_x22 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(unaff_x22,lVar6,uRam0000000003d63c30,0);
        plVar4[10] = unaff_x22;
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar10,uRam0000000003d412a8);
        if ((lVar10 != 0) && (plVar8 = *(long **)(lVar10 + 0xa0), plVar8 != (long *)0x0)) {
          register0x00000008 = (BADSPACEBASE *)&uStack_f0;
          unaff_x21 = plStack_118;
          unaff_x22 = lStack_120;
          unaff_x29 = (undefined8 *******)ppppppuStack_100;
          unaff_x30 = pcStack_f8;
          auVar20 = auStack_110;
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar21 = func_0x00f78af4();
    lVar10 = auVar21._0_8_;
    pcStack_128 = Atlas_UI_Screens_SaveGameScreen__OnUsedSlotSelected;
    if ((bRam0000000003eb4c2a & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d280d0);
      func_0x00f78a20(0x3d3e0e8);
      func_0x00f78a20(0x3d63c38);
      func_0x00f78a20(0x3d28aa0);
      func_0x00f78a20(0x3d412a8);
      func_0x00f78a20(0x3d6d128);
      func_0x00f78a20(0x3d6d108);
      func_0x00f78a20(0x3d72128);
      func_0x00f78a20(0x3d72120);
      bRam0000000003eb4c2a = 1;
    }
    lVar6 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0_TypeInfo*/ uRam0000000003d28aa0);
    plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0$$.ctor*/ func_0x015662ec(lVar6,0);
    if (lVar6 == 0) {
LAB_014ea550:
      auVar21 = func_0x00f78af4();
      if ((bRam0000000003eb4c2b & 1) == 0) {
        func_0x00f78a20(0x3d28ac8);
        bRam0000000003eb4c2b = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27_TypeInfo*/ uRam0000000003d28ac8);
      /*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27$$.ctor*/ func_0x01566c9c(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar21;
        return plVar4;
      }
      auVar21 = func_0x00f78af4();
      if ((bRam0000000003eb4c2c & 1) == 0) {
        func_0x00f78a20(0x3d28ad0);
        bRam0000000003eb4c2c = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28_TypeInfo*/ uRam0000000003d28ad0);
      /*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28$$.ctor*/ func_0x01566e2c(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar21;
        return plVar4;
      }
      auVar21 = func_0x00f78af4();
      if ((bRam0000000003eb4c2d & 1) == 0) {
        func_0x00f78a20(0x3d28ac0);
        bRam0000000003eb4c2d = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29_TypeInfo*/ uRam0000000003d28ac0);
      /*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29$$.ctor*/ func_0x01566ab4(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar21;
        return plVar4;
      }
      lVar10 = func_0x00f78af4();
      if ((*(long *)(lVar10 + 0x90) != 0) &&
         (plVar4 = *(long **)(*(long *)(lVar10 + 0x90) + 0x30), plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar4 = (long *)(**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
        return plVar4;
      }
      return (long *)0x0;
    }
    *(undefined1 (*) [12])(lVar6 + 0x10) = auVar21;
    if (*(long *)(lVar10 + 0x90) != 0) {
      plVar5 = *(long **)(*(long *)(lVar10 + 0x90) + 0x30);
      plVar4 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
        if (((ulong)plVar4 & 1) != 0) {
          return plVar4;
        }
      }
    }
    if (*(long *)(lVar10 + 0x88) != 0) {
      return plVar4;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
    lVar3 = /*STR('SETTINGS_SCREEN_LOAD_GAME_BODY')*/ lRam0000000003d72128;
    if (plVar4 == (long *)0x0) goto LAB_014ea550;
    plVar4[5] = /*STR('SETTINGS_SCREEN_LOAD_GAME')*/ lRam0000000003d72120;
    plVar4[6] = lVar3;
    lVar3 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar4[8] = lVar3;
    lVar3 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar3,lVar6,uRam0000000003d63c38,0);
    plVar4[10] = lVar3;
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar10,uRam0000000003d412a8);
    if ((lVar10 == 0) || (plVar8 = *(long **)(lVar10 + 0xa0), plVar8 == (long *)0x0))
    goto LAB_014ea550;
    register0x00000008 = (BADSPACEBASE *)&lStack_120;
    unaff_x30 = pcStack_128;
  }
  else {
    *(long *)(lVar3 + 0x10) = lVar10;
    *(uint *)(lVar3 + 0x18) = uVar2;
    if (*(long *)(lVar10 + 0x90) != 0) {
      plVar5 = *(long **)(*(long *)(lVar10 + 0x90) + 0x30);
      plVar4 = (long *)0x0;
      if ((plVar5 != (long *)0x0) &&
         (plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230)),
         ((ulong)plVar4 & 1) != 0)) {
        return plVar4;
      }
    }
    if (*(long *)(lVar10 + 0x88) != 0) {
      return plVar4;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
    lVar7 = /*STR('SETTINGS_SCREEN_CONFIRMATION_DELETE_CURRENT')*/ lRam0000000003d720d8;
    plVar5 = plVar4;
    if (plVar4 == (long *)0x0) goto LAB_014e9e60;
    plVar4[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
    plVar4[6] = lVar7;
    lVar6 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar4[8] = lVar6;
    lVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar6,lVar3,uRam0000000003d63c20,0);
    plVar4[0xb] = lVar6;
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar10,uRam0000000003d412a8);
    if ((lVar7 == 0) || (plVar8 = *(long **)(lVar7 + 0xa0), plVar8 == (long *)0x0))
    goto LAB_014e9e60;
  }
Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal:
  plVar5 = plRam0000000003d3e0e8;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar20;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  uVar17 = 0x3eb8000;
  plVar13 = plRam0000000003d3e0e8;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar4 != (long *)0x0) {
    uVar17 = 0x3d71000;
    uVar11 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
    plVar13 = (long *)0x0;
    uVar11 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar11);
    if (plVar8 != (long *)0x0) {
      plVar13 = *(long **)(*(long *)(plVar5[3] + 0xc0) + 8);
      (*(code *)*plVar13)(plVar8,uVar11);
      if (plVar8[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar8[7],plVar4,uRam0000000003d3b330);
        plVar13 = (long *)plVar8[8];
        if ((plVar13 == (long *)0x0) || ((int)plVar4[2] <= (int)plVar13[2])) {
code_r0x025dfcb4:
          plVar4 = (long *)(*(code *)**(undefined8 **)(*(long *)(plVar5[3] + 0xc0) + 0x30))(plVar8);
          if (((ulong)plVar4 & 1) != 0) {
            return plVar4;
          }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar4 = (long *)(**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
          return plVar4;
        }
        if (plVar8[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar8[7],0,plVar13,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(plVar5[3] + 0xc0) + 0x60))(plVar8);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar20 = func_0x00f78af4();
  plVar12 = auVar20._8_8_;
  lVar10 = auVar20._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar17;
  *(long **)((long)register0x00000008 + -0x58) = plVar4;
  *(long **)((long)register0x00000008 + -0x50) = plVar5;
  *(long **)((long)register0x00000008 + -0x48) = plVar8;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
  if (plVar12 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
    plVar5 = (long *)0x0;
    plVar8 = plVar12;
    plVar4 = plVar13;
    if (lVar10 != 0) {
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(plVar13[3] + 0xc0) + 0x70))(lVar10,uVar11);
      if ((uVar2 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(plVar13[3] + 0xc0) + 0x78))(lVar10,plVar12);
      }
      return (long *)(ulong)(uVar2 ^ 1);
    }
  }
  auVar20 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar17;
  *(long **)((long)register0x00000008 + -0x88) = plVar4;
  *(long **)((long)register0x00000008 + -0x80) = plVar5;
  *(long **)((long)register0x00000008 + -0x78) = plVar8;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x68) =
       &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
  iVar14 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar10 = *(long *)(auVar20._0_8_ + 0x38);
  if (lVar10 != 0) {
    iVar14 = *(int *)(lVar10 + 0x18);
    if (iVar14 < 1) goto code_r0x025dfe48;
    uVar2 = 0;
    iVar18 = -0x80000000;
    uVar15 = 0;
    do {
      if (*(uint *)(lVar10 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
      if (lVar10 == 0) break;
      iVar1 = *(int *)(lVar10 + 0x10);
      uVar16 = uVar2;
      if (iVar1 <= iVar18) {
        uVar16 = uVar15;
      }
      if (iVar14 - 1U == uVar2) goto code_r0x025dfe4c;
      if (iVar1 <= iVar18) {
        iVar1 = iVar18;
      }
      lVar10 = *(long *)(auVar20._0_8_ + 0x38);
      uVar2 = uVar2 + 1;
      iVar18 = iVar1;
      uVar15 = uVar16;
    } while (lVar10 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar16 = 0;
code_r0x025dfe4c:
  *auVar20._8_8_ = uVar16;
  return (long *)(ulong)(0 < iVar14);
}



