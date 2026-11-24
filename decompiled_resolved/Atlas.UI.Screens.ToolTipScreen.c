// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.ToolTipScreen

// ============================================================
// RVA: 0x1509d00 | Atlas.UI.Screens.ToolTipScreen.OnBeforeEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x01cb55a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb55e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb551c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150a018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x01cb570c) */
/* WARNING: Removing unreachable block (ram,0x01cb56a8) */
/* WARNING: Removing unreachable block (ram,0x01cb56ac) */
/* WARNING: Removing unreachable block (ram,0x01cb56e0) */
/* WARNING: Removing unreachable block (ram,0x01cb571c) */
/* WARNING: Removing unreachable block (ram,0x01cb5770) */
/* WARNING: Removing unreachable block (ram,0x01cb5798) */
/* WARNING: Removing unreachable block (ram,0x01cb57ac) */
/* WARNING: Removing unreachable block (ram,0x01cb5834) */
/* WARNING: Removing unreachable block (ram,0x01cb5854) */
/* WARNING: Removing unreachable block (ram,0x01cb5880) */
/* WARNING: Removing unreachable block (ram,0x01cb5894) */
/* WARNING: Removing unreachable block (ram,0x01cb591c) */
/* WARNING: Removing unreachable block (ram,0x01cb5898) */
/* WARNING: Removing unreachable block (ram,0x01cb590c) */
/* WARNING: Removing unreachable block (ram,0x01cb58b4) */
/* WARNING: Removing unreachable block (ram,0x01cb58e4) */
/* WARNING: Removing unreachable block (ram,0x01cb58ec) */
/* WARNING: Removing unreachable block (ram,0x01cb58f0) */
/* WARNING: Removing unreachable block (ram,0x01cb5844) */
/* WARNING: Removing unreachable block (ram,0x01cb57b0) */
/* WARNING: Removing unreachable block (ram,0x01cb5824) */
/* WARNING: Removing unreachable block (ram,0x01cb57cc) */
/* WARNING: Removing unreachable block (ram,0x01cb57fc) */
/* WARNING: Removing unreachable block (ram,0x01cb5804) */
/* WARNING: Removing unreachable block (ram,0x01cb5808) */
/* WARNING: Removing unreachable block (ram,0x03249a9c) */
/* WARNING: Removing unreachable block (ram,0x03249ac8) */
/* WARNING: Removing unreachable block (ram,0x03249adc) */
/* WARNING: Removing unreachable block (ram,0x03249ae8) */
/* WARNING: Removing unreachable block (ram,0x03249af0) */
/* WARNING: Removing unreachable block (ram,0x03249af4) */
/* WARNING: Removing unreachable block (ram,0x01cb5730) */
/* WARNING: Removing unreachable block (ram,0x01cb5760) */
/* WARNING: Removing unreachable block (ram,0x01cb574c) */
/* WARNING: Removing unreachable block (ram,0x01cb56f4) */
/* WARNING: Removing unreachable block (ram,0x01cb56b0) */
/* WARNING: Removing unreachable block (ram,0x03236658) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x01cb55ec) */
/* WARNING: Removing unreachable block (ram,0x01cb55a4) */
/* WARNING: Removing unreachable block (ram,0x01cb55a8) */
/* WARNING: Removing unreachable block (ram,0x01cb55f0) */
/* WARNING: Removing unreachable block (ram,0x01cb55f4) */
/* WARNING: Removing unreachable block (ram,0x01cb55c4) */
/* WARNING: Removing unreachable block (ram,0x01cb5618) */
/* WARNING: Removing unreachable block (ram,0x01cb563c) */
/* WARNING: Removing unreachable block (ram,0x01cb566c) */
/* WARNING: Removing unreachable block (ram,0x01cb5680) */
/* WARNING: Removing unreachable block (ram,0x01cb568c) */
/* WARNING: Removing unreachable block (ram,0x01cb5694) */
/* WARNING: Removing unreachable block (ram,0x01cb5698) */
/* WARNING: Removing unreachable block (ram,0x01cb5628) */
/* WARNING: Removing unreachable block (ram,0x01cb55c8) */
/* WARNING: Removing unreachable block (ram,0x0150a01c) */
/* WARNING: Removing unreachable block (ram,0x0150a02c) */
/* WARNING: Removing unreachable block (ram,0x0150a034) */
/* WARNING: Removing unreachable block (ram,0x025dfb34) */
/* WARNING: Removing unreachable block (ram,0x025dfb44) */
/* WARNING: Removing unreachable block (ram,0x025dfb9c) */
/* WARNING: Removing unreachable block (ram,0x025dfb64) */
/* WARNING: Removing unreachable block (ram,0x025dfb80) */
/* WARNING: Removing unreachable block (ram,0x025dfba8) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Removing unreachable block (ram,0x025dfb88) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */

undefined8 * Atlas_UI_Screens_ToolTipScreen__OnBeforeEnter(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  long unaff_x19;
  undefined1 *puVar13;
  long unaff_x20;
  long lVar14;
  undefined8 unaff_x21;
  undefined8 uVar15;
  undefined8 ***unaff_x22;
  undefined8 ***pppuVar16;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ***unaff_x29;
  undefined8 ****ppppuVar17;
  undefined1 *puVar18;
  code *unaff_x30;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined8 **ppuStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined8 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  undefined *puStack_48;
  
  uVar15 = 0x3d41330;
  if ((bRam0000000003eb4d40 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d2c988);
    func_0x00f78a20(0x3d2c990);
    func_0x00f78a20(0x3d3e1a8);
    func_0x00f78a20(0x3d5e4b8);
    func_0x00f78a20(0x3d41328);
    func_0x00f78a20(0x3d41330);
    func_0x00f78a20(0x3d41338);
    bRam0000000003eb4d40 = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41330);
  lVar14 = 0x3eb4000;
  uVar6 = 0x3d41330;
  pppuVar16 = unaff_x22;
  uVar9 = unaff_x23;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$set_Screen*/ func_0x025df580(*(long *)(lVar5 + 0x10),param_1,uRam0000000003d3e1a8);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41338);
    lVar14 = 0x3d41338;
    uVar6 = uVar15;
    if (lVar5 == 0) goto LAB_01509ea4;
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar5 + 0x20);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41338);
    if (lVar5 == 0) goto LAB_01509ea4;
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar5 + 0x88);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41328);
    lVar14 = 0x3d41338;
    pppuVar16 = (undefined8 ***)0x3d41328;
    if (lVar5 == 0) goto LAB_01509ea4;
    lVar14 = *(long *)(lVar5 + 0x70);
    uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar6,param_1,uRam0000000003d5e4b8,0);
    uVar9 = 0x3d5e000;
    if (lVar14 == 0) goto LAB_01509ea4;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar14,uVar6,0);
    uVar15 = Atlas_UI_Screens_AtlasScreen_LeagueStarsBoxScreenViewBehaviour__LeagueStarsBoxScreen_TransitionData___GetCurrentlySelectedObject
                       (param_1,uRam0000000003d2c988);
    *(undefined8 *)(param_1 + 0x80) = uVar15;
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41328);
    pppuVar16 = (undefined8 ***)0x3d41328;
    uVar9 = 0x3d2c000;
    if (lVar5 == 0) goto LAB_01509ea4;
    puVar11 = *(undefined1 **)(lVar5 + 0x70);
    plVar1 = (long *)register0x00000008;
    lVar14 = lRam0000000003d2c990;
code_r0x01cb5534:
    *(undefined8 *)((long)plVar1 + -0x40) = unaff_x24;
    *(undefined8 *)((long)plVar1 + -0x38) = unaff_x23;
    *(undefined8 ****)((long)plVar1 + -0x30) = unaff_x22;
    *(undefined8 *)((long)plVar1 + -0x28) = unaff_x21;
    *(long *)((long)plVar1 + -0x20) = unaff_x20;
    *(long *)((long)plVar1 + -0x18) = unaff_x19;
    *(undefined8 ****)((long)plVar1 + -0x10) = unaff_x29;
    *(code **)((long)plVar1 + -8) = unaff_x30;
    if ((bRam0000000003eb70f7 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb70f7 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)((long)plVar1 + -0x70) = 0x3eb7000;
    *(long *)((long)plVar1 + -0x68) = lVar14;
    *(undefined1 **)((long)plVar1 + -0x60) = puVar11;
    *(long *)((long)plVar1 + -0x58) = param_1;
    *(undefined1 **)((long)plVar1 + -0x50) = (undefined1 *)((long)plVar1 + -0x10);
    *(undefined8 *)((long)plVar1 + -0x48) = 0x1cb55a4;
    if ((bRam0000000003ec027b & 1) == 0) {
      func_0x00f78a20(0x3d23990,0,0);
      bRam0000000003ec027b = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar18 = *(undefined1 **)((long)plVar1 + -0x50);
    puVar19 = *(undefined **)((long)plVar1 + -0x48);
    uVar9 = *(undefined8 *)((long)plVar1 + -0x60);
    puVar13 = *(undefined1 **)((long)plVar1 + -0x58);
    puVar3 = (undefined1 *)((long)plVar1 + -0x40);
    uVar15 = *(undefined8 *)((long)plVar1 + -0x70);
    uVar6 = *(undefined8 *)((long)plVar1 + -0x68);
    goto code_r0x03248740;
  }
LAB_01509ea4:
  unaff_x23 = uVar9;
  ppuVar7 = (undefined1 **)func_0x00f78af4();
  puStack_48 = &Atlas_UI_Screens_ToolTipScreen__OnAfterExit;
  ppuStack_70 = pppuVar16;
  uStack_68 = uVar6;
  lStack_60 = lVar14;
  lStack_58 = param_1;
  puStack_50 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d41 & 1) == 0) {
    func_0x00f78a20(0x3d2c998);
    func_0x00f78a20(0x3d3e1a8);
    func_0x00f78a20(0x3d41330);
    bRam0000000003eb4d41 = 1;
  }
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(ppuVar7,uRam0000000003d41330);
  if ((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) {
    uVar15 = func_0x00f78af4();
    puStack_78 = &Atlas_UI_Screens_ToolTipScreen__TryDismissToolTip;
    ppuStack_80 = (undefined1 **)&puStack_50;
    if ((bRam0000000003eb4d42 & 1) == 0) {
      func_0x00f78a20(0x3d3e168);
      func_0x00f78a20(0x3d3e180);
      func_0x00f78a20(0x3d41328);
      func_0x00f78a20(0x3d41330);
      bRam0000000003eb4d42 = 1;
    }
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar15,uRam0000000003d41330);
    uVar6 = 0x3eb4000;
    if ((lVar14 != 0) && (*(long *)(lVar14 + 0x10) != 0)) {
      puVar8 = (undefined8 *)/*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalShowing*/ func_0x025e0180(*(long *)(lVar14 + 0x10),uRam0000000003d3e180);
      if ((int)puVar8 == 0) {
        return puVar8;
      }
      uVar9 = 0x3d41328;
      lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar15,uRam0000000003d41328);
      uVar6 = uVar9;
      if ((lVar14 != 0) && (*(long *)(lVar14 + 0x70) != 0)) {
        puVar8 = (undefined8 *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(*(long *)(lVar14 + 0x70),0);
        if ((int)puVar8 == 0) {
          return puVar8;
        }
        lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar15,uRam0000000003d41328);
        uVar6 = 0x3d41328;
        if (lVar14 != 0) {
          puVar19 = &UNK_0150a01c;
          uVar6 = uVar9;
          goto code_r0x0150a064;
        }
      }
    }
    puVar19 = &Atlas_UI_Screens_ToolTipScreenBehaviour__DisableDismissButton;
    lVar14 = func_0x00f78af4();
code_r0x0150a064:
    lVar14 = *(long *)(lVar14 + 0x70);
    pppuStack_b0 = (undefined8 ***)&ppuStack_80;
    puStack_a8 = puVar19;
    if (lVar14 != 0) {
      puStack_c0 = (undefined1 *)0x3d41330;
      ppuStack_d0 = pppuVar16;
      uStack_c8 = uVar6;
      puStack_b8 = (undefined *)uVar15;
      if (pcRam0000000003ebe9d8 == (code *)0x0) {
        pcRam0000000003ebe9d8 =
             (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar8 = (undefined8 *)(*pcRam0000000003ebe9d8)(lVar14,0);
      return puVar8;
    }
    lVar14 = func_0x00f78af4();
    ppuStack_d0 = (undefined8 **)0x3d41330;
    puStack_b8 = &Atlas_UI_Screens_ToolTipScreen___ctor;
    pppuStack_e0 = pppuVar16;
    puStack_d8 = (undefined *)uVar6;
    uStack_c8 = uVar15;
    puStack_c0 = (undefined1 *)&pppuStack_b0;
    if ((bRam0000000003eb4d43 & 1) == 0) {
      puStack_c0 = (undefined1 *)&pppuStack_b0;
      func_0x00f78a20(0x3d2c980);
      bRam0000000003eb4d43 = 1;
    }
    if (lVar14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar8 = (undefined8 *)
               (*(code *)**(undefined8 **)
                           (*(long *)(*(long *)(lRam0000000003d2c980 + 0x18) + 0xc0) + 0x38))();
      return puVar8;
    }
    auVar20 = func_0x00f78af4();
    puVar12 = auVar20._8_8_;
    puVar8 = auVar20._0_8_;
    uVar6 = puVar12[1];
    uVar15 = *puVar12;
    puVar8[2] = puVar12[2];
    puVar8[1] = uVar6;
    *puVar8 = uVar15;
    return puVar8;
  }
  /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$set_Screen*/ func_0x025df580(*(long *)(lVar14 + 0x10),0,uRam0000000003d3e1a8);
  unaff_x19 = lStack_58;
  unaff_x20 = lStack_60;
  unaff_x21 = uStack_68;
  unaff_x22 = (undefined8 ***)ppuStack_70;
  puVar11 = ppuVar7[0x10];
  plVar1 = &lStack_60;
  unaff_x29 = (undefined8 ***)&puStack_50;
  if (ppuVar7 == (undefined1 **)0x0) {
    unaff_x30 = 
    Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
    ;
    lVar14 = lRam0000000003d2c998;
    auVar20 = func_0x00f78af4();
    puVar11 = auVar20._8_8_;
    param_1 = auVar20._0_8_;
    goto code_r0x01cb5534;
  }
  puVar8 = (undefined8 *)
           (*(code *)**(undefined8 **)
                       (*(long *)(*(long *)(lRam0000000003d2c998 + 0x18) + 0xc0) + 0x28))();
  if ((int)puVar8 == 0) {
    ppuVar7[0xc] = puVar11;
    return puVar8;
  }
  uVar4 = *(uint *)(ppuVar7 + 9);
  uVar10 = (ulong)uVar4;
  puVar2 = (undefined8 *)&stack0xffffffffffffff60;
  uStack_68 = 0x1cb5520;
  ppppuVar17 = (undefined8 ****)&ppuStack_70;
  uVar6 = 1;
  uVar15 = 0x3d22848;
  ppuStack_80 = ppuVar7;
  puStack_78 = puVar11;
  ppuStack_70 = unaff_x29;
  if ((bRam0000000003eb578a & 1) == 0) {
    func_0x00f78a20(0x3d216c0,puVar11,1,0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb578a = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (lVar14 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar14 == 0))
  goto code_r0x0164abe0;
  if (uVar4 < *(uint *)(lVar14 + 0x18)) {
    *(undefined1 **)(lVar14 + (long)(int)uVar4 * 0x10 + 0x20) = puVar11;
    puVar8 = (undefined8 *)/*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(uVar10);
    if ((int)puVar8 == 0) {
      return puVar8;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
code_r0x0164abe0:
      func_0x00f78af4();
      goto code_r0x0164abe4;
    }
    *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar14 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (lVar14 == 0) goto code_r0x0164abe0;
    /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar14,puVar11,0);
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) goto code_r0x0164abe0;
    *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar19 = &UNK_0164aba4;
  }
  else {
code_r0x0164abe4:
    uVar6 = func_0x00f78b24();
    uVar6 = func_0x00f78ac0(uVar6,0);
    ppuStack_d0 = (undefined8 **)0x3d22848;
    puStack_c0 = (undefined1 *)0x1;
    puStack_a8 = &Core_Input_InputManager__GetSelectedObject;
    uStack_c8 = uVar10;
    puStack_b8 = puVar11;
    pppuStack_b0 = ppppuVar17;
    if ((bRam0000000003eb578b & 1) == 0) {
      func_0x00f78a20(0x3d22848);
      bRam0000000003eb578b = 1;
    }
    if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
       (lVar14 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar14 == 0)) {
      func_0x00f78af4();
    }
    else if ((uint)uVar6 < *(uint *)(lVar14 + 0x18)) {
      return *(undefined8 **)(lVar14 + (long)(int)(uint)uVar6 * 0x10 + 0x20);
    }
    uVar9 = func_0x00f78b24();
    func_0x00f78ac0(uVar9,0);
    puVar2 = &uStack_100;
    uStack_100 = 0x3d22848;
    uStack_f8 = 0x3d22848;
    uStack_f0 = 0x3eb5000;
    puStack_d8 = &Core_Input_InputManager__IsAnythingSelected;
    ppppuVar17 = &pppuStack_e0;
    uVar10 = 0x3d216c0;
    uStack_e8 = uVar6;
    pppuStack_e0 = &pppuStack_b0;
    if ((bRam0000000003eb578c & 1) == 0) {
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb578c = 1;
    }
    uVar6 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar11 = (undefined1 *)/*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar19 = &UNK_0164ad0c;
  }
  puVar3 = (undefined1 *)((long)puVar2 + -0x30);
  *(undefined8 *)((long)puVar2 + -0x30) = 0x3d22848;
  *(ulong *)((long)puVar2 + -0x28) = uVar10;
  *(undefined8 *)((long)puVar2 + -0x20) = uVar6;
  *(undefined1 **)((long)puVar2 + -0x18) = puVar11;
  *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar17;
  *(undefined **)((long)puVar2 + -8) = puVar19;
  puVar18 = (undefined1 *)((long)puVar2 + -0x10);
  uVar9 = 0x3ec0000;
  uVar6 = 0x3d23990;
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar19 = &UNK_03236658;
  puVar13 = puVar11;
code_r0x03248740:
  *(undefined8 *)(puVar3 + -0x30) = uVar15;
  *(undefined8 *)(puVar3 + -0x28) = uVar6;
  *(undefined8 *)(puVar3 + -0x20) = uVar9;
  *(undefined1 **)(puVar3 + -0x18) = puVar13;
  *(undefined1 **)(puVar3 + -0x10) = puVar18;
  *(undefined **)(puVar3 + -8) = puVar19;
  if ((bRam0000000003ec021b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec021b = 1;
  }
  if (puVar11 == (undefined1 *)0x0) {
    puVar8 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(puVar11);
    puVar8 = (undefined8 *)(ulong)(uVar4 ^ 1);
  }
  return puVar8;
}



// ============================================================
// RVA: 0x1509ea8 | Atlas.UI.Screens.ToolTipScreen.OnAfterExit
// ============================================================

/* WARNING: Possible PIC construction at 0x01cb551c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb55a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb55e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150a018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x01cb570c) */
/* WARNING: Removing unreachable block (ram,0x01cb56a8) */
/* WARNING: Removing unreachable block (ram,0x01cb56ac) */
/* WARNING: Removing unreachable block (ram,0x01cb56e0) */
/* WARNING: Removing unreachable block (ram,0x01cb571c) */
/* WARNING: Removing unreachable block (ram,0x01cb5770) */
/* WARNING: Removing unreachable block (ram,0x01cb5798) */
/* WARNING: Removing unreachable block (ram,0x01cb57ac) */
/* WARNING: Removing unreachable block (ram,0x01cb5834) */
/* WARNING: Removing unreachable block (ram,0x01cb5854) */
/* WARNING: Removing unreachable block (ram,0x01cb5880) */
/* WARNING: Removing unreachable block (ram,0x01cb5894) */
/* WARNING: Removing unreachable block (ram,0x01cb591c) */
/* WARNING: Removing unreachable block (ram,0x01cb5898) */
/* WARNING: Removing unreachable block (ram,0x01cb590c) */
/* WARNING: Removing unreachable block (ram,0x01cb58b4) */
/* WARNING: Removing unreachable block (ram,0x01cb58e4) */
/* WARNING: Removing unreachable block (ram,0x01cb58ec) */
/* WARNING: Removing unreachable block (ram,0x01cb58f0) */
/* WARNING: Removing unreachable block (ram,0x01cb5844) */
/* WARNING: Removing unreachable block (ram,0x01cb57b0) */
/* WARNING: Removing unreachable block (ram,0x01cb5824) */
/* WARNING: Removing unreachable block (ram,0x01cb57cc) */
/* WARNING: Removing unreachable block (ram,0x01cb57fc) */
/* WARNING: Removing unreachable block (ram,0x01cb5804) */
/* WARNING: Removing unreachable block (ram,0x01cb5808) */
/* WARNING: Removing unreachable block (ram,0x03249a9c) */
/* WARNING: Removing unreachable block (ram,0x03249ac8) */
/* WARNING: Removing unreachable block (ram,0x03249adc) */
/* WARNING: Removing unreachable block (ram,0x03249ae8) */
/* WARNING: Removing unreachable block (ram,0x03249af0) */
/* WARNING: Removing unreachable block (ram,0x03249af4) */
/* WARNING: Removing unreachable block (ram,0x01cb5730) */
/* WARNING: Removing unreachable block (ram,0x01cb5760) */
/* WARNING: Removing unreachable block (ram,0x01cb574c) */
/* WARNING: Removing unreachable block (ram,0x01cb56f4) */
/* WARNING: Removing unreachable block (ram,0x01cb56b0) */
/* WARNING: Removing unreachable block (ram,0x03236658) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x01cb55ec) */
/* WARNING: Removing unreachable block (ram,0x01cb55a4) */
/* WARNING: Removing unreachable block (ram,0x01cb55a8) */
/* WARNING: Removing unreachable block (ram,0x01cb55f0) */
/* WARNING: Removing unreachable block (ram,0x01cb55f4) */
/* WARNING: Removing unreachable block (ram,0x01cb55c4) */
/* WARNING: Removing unreachable block (ram,0x01cb5618) */
/* WARNING: Removing unreachable block (ram,0x01cb563c) */
/* WARNING: Removing unreachable block (ram,0x01cb566c) */
/* WARNING: Removing unreachable block (ram,0x01cb5680) */
/* WARNING: Removing unreachable block (ram,0x01cb568c) */
/* WARNING: Removing unreachable block (ram,0x01cb5694) */
/* WARNING: Removing unreachable block (ram,0x01cb5698) */
/* WARNING: Removing unreachable block (ram,0x01cb5628) */
/* WARNING: Removing unreachable block (ram,0x01cb55c8) */
/* WARNING: Removing unreachable block (ram,0x0150a01c) */
/* WARNING: Removing unreachable block (ram,0x0150a02c) */
/* WARNING: Removing unreachable block (ram,0x0150a034) */
/* WARNING: Removing unreachable block (ram,0x025dfb34) */
/* WARNING: Removing unreachable block (ram,0x025dfb44) */
/* WARNING: Removing unreachable block (ram,0x025dfb9c) */
/* WARNING: Removing unreachable block (ram,0x025dfb64) */
/* WARNING: Removing unreachable block (ram,0x025dfb80) */
/* WARNING: Removing unreachable block (ram,0x025dfba8) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Removing unreachable block (ram,0x025dfb88) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */

undefined8 * Atlas_UI_Screens_ToolTipScreen__OnAfterExit(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_68;
  
  if ((bRam0000000003eb4d41 & 1) == 0) {
    func_0x00f78a20(0x3d2c998);
    func_0x00f78a20(0x3d3e1a8);
    func_0x00f78a20(0x3d41330);
    bRam0000000003eb4d41 = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41330);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) {
    uVar7 = func_0x00f78af4();
    if ((bRam0000000003eb4d42 & 1) == 0) {
      func_0x00f78a20(0x3d3e168);
      func_0x00f78a20(0x3d3e180);
      func_0x00f78a20(0x3d41328);
      func_0x00f78a20(0x3d41330);
      bRam0000000003eb4d42 = 1;
    }
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar7,uRam0000000003d41330);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
      puVar5 = (undefined8 *)/*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalShowing*/ func_0x025e0180(*(long *)(lVar4 + 0x10),uRam0000000003d3e180);
      if ((int)puVar5 == 0) {
        return puVar5;
      }
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar7,uRam0000000003d41328);
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x70) != 0)) {
        puVar5 = (undefined8 *)/*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(*(long *)(lVar4 + 0x70),0);
        if ((int)puVar5 == 0) {
          return puVar5;
        }
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar7,uRam0000000003d41328);
        if (lVar4 != 0) goto code_r0x0150a064;
      }
    }
    lVar4 = func_0x00f78af4();
code_r0x0150a064:
    lVar4 = *(long *)(lVar4 + 0x70);
    if (lVar4 != 0) {
      if (pcRam0000000003ebe9d8 == (code *)0x0) {
        pcRam0000000003ebe9d8 =
             (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar5 = (undefined8 *)(*pcRam0000000003ebe9d8)(lVar4,0);
      return puVar5;
    }
    lVar4 = func_0x00f78af4();
    if ((bRam0000000003eb4d43 & 1) == 0) {
      func_0x00f78a20(0x3d2c980);
      bRam0000000003eb4d43 = 1;
    }
    if (lVar4 == 0) {
      auVar13 = func_0x00f78af4();
      puVar8 = auVar13._8_8_;
      puVar5 = auVar13._0_8_;
      uVar12 = puVar8[1];
      uVar7 = *puVar8;
      puVar5[2] = puVar8[2];
      puVar5[1] = uVar12;
      *puVar5 = uVar7;
      return puVar5;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c980 + 0x18) + 0xc0) + 0x38))();
    return puVar5;
  }
  /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$set_Screen*/ func_0x025df580(*(long *)(lVar4 + 0x10),0,uRam0000000003d3e1a8);
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  if (param_1 == 0) {
    lVar4 = lRam0000000003d2c998;
    auVar13 = func_0x00f78af4();
    uVar7 = auVar13._8_8_;
    puVar10 = &stack0xffffffffffffffd0;
    if ((bRam0000000003eb70f7 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb70f7 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puStack_68 = (undefined *)0x1cb55a4;
    if ((bRam0000000003ec027b & 1) == 0) {
      func_0x00f78a20(0x3d23990,0,0);
      bRam0000000003ec027b = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar2 = &stack0xffffffffffffffa0;
    uVar12 = 0x3eb7000;
    goto code_r0x03248740;
  }
  puVar5 = (undefined8 *)
           (*(code *)**(undefined8 **)
                       (*(long *)(*(long *)(lRam0000000003d2c998 + 0x18) + 0xc0) + 0x28))();
  if ((int)puVar5 == 0) {
    *(undefined8 *)(param_1 + 0x60) = uVar7;
    return puVar5;
  }
  uVar3 = *(uint *)(param_1 + 0x48);
  uVar6 = (ulong)uVar3;
  puVar1 = (undefined8 *)&stack0xffffffffffffffa0;
  puVar10 = &stack0xffffffffffffffd0;
  uVar9 = 1;
  uVar12 = 0x3d22848;
  if ((bRam0000000003eb578a & 1) == 0) {
    func_0x00f78a20(0x3d216c0,uVar7,1,0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb578a = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (lVar4 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar4 == 0))
  goto code_r0x0164abe0;
  if (uVar3 < *(uint *)(lVar4 + 0x18)) {
    *(undefined8 *)(lVar4 + (long)(int)uVar3 * 0x10 + 0x20) = uVar7;
    puVar5 = (undefined8 *)/*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(uVar6);
    if ((int)puVar5 == 0) {
      return puVar5;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
code_r0x0164abe0:
      func_0x00f78af4();
      goto code_r0x0164abe4;
    }
    *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (lVar4 == 0) goto code_r0x0164abe0;
    /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar4,uVar7,0);
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) goto code_r0x0164abe0;
    *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar11 = &UNK_0164aba4;
  }
  else {
code_r0x0164abe4:
    uVar7 = func_0x00f78b24();
    uVar7 = func_0x00f78ac0(uVar7,0);
    if ((bRam0000000003eb578b & 1) == 0) {
      func_0x00f78a20(0x3d22848);
      bRam0000000003eb578b = 1;
    }
    if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
       (lVar4 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar4 == 0)) {
      func_0x00f78af4();
    }
    else if ((uint)uVar7 < *(uint *)(lVar4 + 0x18)) {
      return *(undefined8 **)(lVar4 + (long)(int)(uint)uVar7 * 0x10 + 0x20);
    }
    uVar9 = func_0x00f78b24();
    func_0x00f78ac0(uVar9,0);
    puVar1 = &uStack_c0;
    uStack_c0 = 0x3d22848;
    uStack_b8 = 0x3d22848;
    uStack_b0 = 0x3eb5000;
    puVar10 = &stack0xffffffffffffff60;
    uVar6 = 0x3d216c0;
    uStack_a8 = uVar7;
    if ((bRam0000000003eb578c & 1) == 0) {
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb578c = 1;
    }
    uVar9 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar11 = &UNK_0164ad0c;
  }
  auVar13._8_8_ = uVar7;
  auVar13._0_8_ = uVar7;
  puVar2 = (undefined1 *)((long)puVar1 + -0x30);
  *(undefined8 *)((long)puVar1 + -0x30) = 0x3d22848;
  *(ulong *)((long)puVar1 + -0x28) = uVar6;
  *(undefined8 *)((long)puVar1 + -0x20) = uVar9;
  *(undefined8 *)((long)puVar1 + -0x18) = uVar7;
  *(undefined1 **)((long)puVar1 + -0x10) = puVar10;
  *(undefined **)((long)puVar1 + -8) = puVar11;
  puVar10 = (undefined1 *)((long)puVar1 + -0x10);
  uVar7 = 0x3ec0000;
  lVar4 = 0x3d23990;
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puStack_68 = &UNK_03236658;
code_r0x03248740:
  *(undefined8 *)(puVar2 + -0x30) = uVar12;
  *(long *)(puVar2 + -0x28) = lVar4;
  *(undefined8 *)(puVar2 + -0x20) = uVar7;
  *(long *)(puVar2 + -0x18) = auVar13._0_8_;
  *(undefined1 **)(puVar2 + -0x10) = puVar10;
  *(undefined **)(puVar2 + -8) = puStack_68;
  if ((bRam0000000003ec021b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec021b = 1;
  }
  if (auVar13._8_8_ == 0) {
    puVar5 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(auVar13._8_8_);
    puVar5 = (undefined8 *)(ulong)(uVar3 ^ 1);
  }
  return puVar5;
}



// ============================================================
// RVA: 0x1509f50 | Atlas.UI.Screens.ToolTipScreen.TryDismissToolTip
// ============================================================

/* WARNING: Possible PIC construction at 0x0150a018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150a01c) */
/* WARNING: Removing unreachable block (ram,0x0150a02c) */
/* WARNING: Removing unreachable block (ram,0x0150a034) */
/* WARNING: Removing unreachable block (ram,0x025dfb34) */
/* WARNING: Removing unreachable block (ram,0x025dfb44) */
/* WARNING: Removing unreachable block (ram,0x025dfb9c) */
/* WARNING: Removing unreachable block (ram,0x025dfb64) */
/* WARNING: Removing unreachable block (ram,0x025dfb80) */
/* WARNING: Removing unreachable block (ram,0x025dfba8) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Removing unreachable block (ram,0x025dfb88) */

void Atlas_UI_Screens_ToolTipScreen__TryDismissToolTip(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4d42 & 1) == 0) {
    func_0x00f78a20(0x3d3e168);
    func_0x00f78a20(0x3d3e180);
    func_0x00f78a20(0x3d41328);
    func_0x00f78a20(0x3d41330);
    bRam0000000003eb4d42 = 1;
  }
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41330);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
    iVar1 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalShowing*/ func_0x025e0180(*(long *)(lVar2 + 0x10),uRam0000000003d3e180);
    if (iVar1 == 0) {
      return;
    }
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41328);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x70) != 0)) {
      iVar1 = /*UnityEngine.Behaviour$$get_enabled*/ func_0x0321a8f0(*(long *)(lVar2 + 0x70),0);
      if (iVar1 == 0) {
        return;
      }
      lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41328);
      if (lVar2 != 0) goto code_r0x0150a064;
    }
  }
  lVar2 = func_0x00f78af4();
code_r0x0150a064:
  lVar2 = *(long *)(lVar2 + 0x70);
  if (lVar2 != 0) {
    if (pcRam0000000003ebe9d8 == (code *)0x0) {
      pcRam0000000003ebe9d8 =
           (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebe9d8)(lVar2,0);
    return;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4d43 & 1) == 0) {
    func_0x00f78a20(0x3d2c980);
    bRam0000000003eb4d43 = 1;
  }
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c980 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar7 = func_0x00f78af4();
  puVar4 = auVar7._8_8_;
  puVar3 = auVar7._0_8_;
  uVar6 = puVar4[1];
  uVar5 = *puVar4;
  puVar3[2] = puVar4[2];
  puVar3[1] = uVar6;
  *puVar3 = uVar5;
  return;
}



// ============================================================
// RVA: 0x150a088 | Atlas.UI.Screens.ToolTipScreen..ctor
// ============================================================

void Atlas_UI_Screens_ToolTipScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4d43 & 1) == 0) {
    func_0x00f78a20(0x3d2c980);
    bRam0000000003eb4d43 = 1;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c980 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar5 = func_0x00f78af4();
  puVar2 = auVar5._8_8_;
  puVar1 = auVar5._0_8_;
  uVar4 = puVar2[1];
  uVar3 = *puVar2;
  puVar1[2] = puVar2[2];
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  return;
}



