// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.ArcadeModeSelectScreen.<>c__DisplayClass8_0

// ============================================================
// RVA: 0x1534a9c | Atlas.UI.Screens.ArcadeModeSelectScreen.<>c__DisplayClass8_0..ctor
// ============================================================

void Atlas_UI_Screens_ArcadeModeSelectScreen___c__DisplayClass8_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1534aa4 | Atlas.UI.Screens.ArcadeModeSelectScreen.<>c__DisplayClass8_0.<OnBeforeEnter>b__1
// ============================================================

void Atlas_UI_Screens_ArcadeModeSelectScreen___c__DisplayClass8_0___OnBeforeEnter_b__1
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 **ppuVar3;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 unaff_x19;
  long *plVar11;
  undefined8 unaff_x20;
  long *plVar12;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar14 [16];
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  undefined1 *puVar2;
  undefined1 **ppuVar4;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar2 = &stack0xfffffffffffffff0;
  if ((*(long *)(param_1 + 0x10) == 0) || (lVar7 = *(long *)(param_1 + 0x20), lVar7 == 0)) {
    lVar5 = func_0x00f78af4();
    ppuVar3 = &puStack_20;
    ppuVar4 = &puStack_20;
    puStack_18 = &Atlas_UI_Screens_ArcadeModeSelectScreen___c__DisplayClass8_0___OnBeforeEnter_b__2;
    if ((*(long *)(lVar5 + 0x10) == 0) || (lVar7 = *(long *)(lVar5 + 0x20), lVar7 == 0)) {
      puStack_20 = &stack0xfffffffffffffff0;
      lVar5 = func_0x00f78af4();
      unaff_x29 = &puStack_30;
      puStack_28 = &
                   Atlas_UI_Screens_ArcadeModeSelectScreen___c__DisplayClass8_0___OnBeforeEnter_b__3
      ;
      if ((*(long *)(lVar5 + 0x18) == 0) || (lVar7 = *(long *)(lVar5 + 0x20), lVar7 == 0)) {
        puStack_30 = (undefined1 *)&puStack_20;
        lVar5 = func_0x00f78af4();
        if ((*(long *)(lVar5 + 0x18) == 0) || (lVar7 = *(long *)(lVar5 + 0x20), lVar7 == 0)) {
          auVar14 = func_0x00f78af4();
          lVar7 = auVar14._0_8_;
          *(undefined8 *)(lVar7 + 0x10) = *param_3;
          *(long *)(lVar7 + 0x20) = auVar14._8_8_;
          *(undefined8 **)(lVar7 + 0x28) = param_3;
          return;
        }
        uVar9 = (ulong)*(uint *)(*(long *)(lVar5 + 0x18) + 0x28);
        register0x00000008 = (BADSPACEBASE *)&puStack_30;
        unaff_x30 = &
                    Atlas_UI_Screens_ArcadeModeSelectScreen___c__DisplayClass8_0___OnBeforeEnter_b__4
        ;
      }
      else {
        uVar9 = (ulong)*(uint *)(*(long *)(lVar5 + 0x18) + 0x28);
        register0x00000008 = (BADSPACEBASE *)&puStack_20;
        unaff_x30 = &
                    Atlas_UI_Screens_ArcadeModeSelectScreen___c__DisplayClass8_0___OnBeforeEnter_b__3
        ;
        unaff_x29 = ppuVar4;
        puStack_30 = (undefined1 *)ppuVar3;
      }
    }
    else {
      uVar9 = (ulong)*(uint *)(*(long *)(lVar5 + 0x10) + 0x28);
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x30 = &Atlas_UI_Screens_ArcadeModeSelectScreen___c__DisplayClass8_0___OnBeforeEnter_b__2
      ;
      unaff_x29 = (undefined1 **)puVar2;
      puStack_20 = puVar1;
    }
  }
  else {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x28);
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  plVar12 = (long *)0x3eb4000;
  if ((bRam0000000003eb478d & 1) == 0) {
    func_0x00f78a20(0x3d2e488,uVar9,0);
    func_0x00f78a20(0x3d2e470);
    func_0x00f78a20(0x3d40fb8);
    func_0x00f78a20(0x3d40fc0);
    bRam0000000003eb478d = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar7,uRam0000000003d40fc0);
  uVar6 = 0x3d40fc0;
  if (lVar5 != 0) {
    uVar13 = 0x3d40fb8;
    if (*(long *)(lVar5 + 0x18) != 0) {
      /*Atlas.UI.Screens.ArcadeModeSelectScreen.ArcadeModeSelected$$Invoke*/ func_0x01534b64(*(long *)(lVar5 + 0x18),uVar9,0);
    }
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d40fb8);
    uVar6 = 0x3d40fb8;
    if ((lVar5 != 0) && (uVar6 = uVar13, *(long *)(lVar7 + 0x80) != 0)) {
      plVar12 = *(long **)(lVar5 + 0x88);
      uVar13 = /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$get_Item*/ func_0x01ea70e4(*(long *)(lVar7 + 0x80),uVar9,uRam0000000003d2e470);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x188))(plVar12,uVar13,*(undefined8 *)(*plVar12 + 400));
        lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d40fb8);
        if ((lVar5 != 0) && (*(long *)(lVar7 + 0x88) != 0)) {
          plVar11 = *(long **)(lVar5 + 0x90);
          uVar13 = /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$get_Item*/ func_0x01ea70e4(*(long *)(lVar7 + 0x88),uVar9,uRam0000000003d2e488);
          lVar7 = 0;
          if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01454608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar11 + 0x188))(plVar11,uVar13,*(undefined8 *)(*plVar11 + 400));
            return;
          }
        }
      }
    }
  }
  lVar5 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar6;
  *(long **)((long)register0x00000008 + -0x58) = plVar12;
  *(long *)((long)register0x00000008 + -0x50) = lVar7;
  *(ulong *)((long)register0x00000008 + -0x48) = uVar9;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x38) = Atlas_UI_Screens_ArcadeModeSelectScreen___ctor;
  if ((bRam0000000003eb478e & 1) == 0) {
    func_0x00f78a20(0x3d2c698);
    func_0x00f78a20(0x3d2e478);
    func_0x00f78a20(0x3d2e460);
    func_0x00f78a20(0x3d1c220);
    func_0x00f78a20(0x3d1c228);
    bRam0000000003eb478e = 1;
  }
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, ArcadeEventMetagameData>_TypeInfo*/ uRam0000000003d1c220);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar6,uRam0000000003d2e460);
  *(undefined8 *)(lVar5 + 0x80) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, ArcadeModeMetagameData>_TypeInfo*/ uRam0000000003d1c228);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar6,uRam0000000003d2e478);
  *(undefined8 *)(lVar5 + 0x88) = uVar6;
  *(undefined8 *)((long)register0x00000008 + -0x40) =
       *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c698 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar14 = func_0x00f78af4();
  puVar10 = auVar14._8_8_;
  puVar8 = auVar14._0_8_;
  uVar13 = puVar10[1];
  uVar6 = *puVar10;
  puVar8[2] = puVar10[2];
  puVar8[1] = uVar13;
  *puVar8 = uVar6;
  return;
}



// ============================================================
// RVA: 0x1534ad0 | Atlas.UI.Screens.ArcadeModeSelectScreen.<>c__DisplayClass8_0.<OnBeforeEnter>b__2
// ============================================================

void Atlas_UI_Screens_ArcadeModeSelectScreen___c__DisplayClass8_0___OnBeforeEnter_b__2
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 unaff_x19;
  long *plVar9;
  undefined8 unaff_x20;
  long *plVar10;
  undefined8 unaff_x21;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar12 [16];
  undefined1 *puStack_20;
  undefined *puStack_18;
  undefined1 *puVar2;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar2 = &stack0xfffffffffffffff0;
  if ((*(long *)(param_1 + 0x10) == 0) || (lVar5 = *(long *)(param_1 + 0x20), lVar5 == 0)) {
    lVar3 = func_0x00f78af4();
    unaff_x29 = &puStack_20;
    puStack_18 = &Atlas_UI_Screens_ArcadeModeSelectScreen___c__DisplayClass8_0___OnBeforeEnter_b__3;
    if ((*(long *)(lVar3 + 0x18) == 0) || (lVar5 = *(long *)(lVar3 + 0x20), lVar5 == 0)) {
      puStack_20 = &stack0xfffffffffffffff0;
      lVar3 = func_0x00f78af4();
      if ((*(long *)(lVar3 + 0x18) == 0) || (lVar5 = *(long *)(lVar3 + 0x20), lVar5 == 0)) {
        auVar12 = func_0x00f78af4();
        lVar5 = auVar12._0_8_;
        *(undefined8 *)(lVar5 + 0x10) = *param_3;
        *(long *)(lVar5 + 0x20) = auVar12._8_8_;
        *(undefined8 **)(lVar5 + 0x28) = param_3;
        return;
      }
      uVar7 = (ulong)*(uint *)(*(long *)(lVar3 + 0x18) + 0x28);
      register0x00000008 = (BADSPACEBASE *)&puStack_20;
      unaff_x30 = &Atlas_UI_Screens_ArcadeModeSelectScreen___c__DisplayClass8_0___OnBeforeEnter_b__4
      ;
    }
    else {
      uVar7 = (ulong)*(uint *)(*(long *)(lVar3 + 0x18) + 0x28);
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x30 = &Atlas_UI_Screens_ArcadeModeSelectScreen___c__DisplayClass8_0___OnBeforeEnter_b__3
      ;
      unaff_x29 = (undefined1 **)puVar2;
      puStack_20 = puVar1;
    }
  }
  else {
    uVar7 = (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x28);
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  plVar10 = (long *)0x3eb4000;
  if ((bRam0000000003eb478d & 1) == 0) {
    func_0x00f78a20(0x3d2e488,uVar7,0);
    func_0x00f78a20(0x3d2e470);
    func_0x00f78a20(0x3d40fb8);
    func_0x00f78a20(0x3d40fc0);
    bRam0000000003eb478d = 1;
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar5,uRam0000000003d40fc0);
  uVar4 = 0x3d40fc0;
  if (lVar3 != 0) {
    uVar11 = 0x3d40fb8;
    if (*(long *)(lVar3 + 0x18) != 0) {
      /*Atlas.UI.Screens.ArcadeModeSelectScreen.ArcadeModeSelected$$Invoke*/ func_0x01534b64(*(long *)(lVar3 + 0x18),uVar7,0);
    }
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d40fb8);
    uVar4 = 0x3d40fb8;
    if ((lVar3 != 0) && (uVar4 = uVar11, *(long *)(lVar5 + 0x80) != 0)) {
      plVar10 = *(long **)(lVar3 + 0x88);
      uVar11 = /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$get_Item*/ func_0x01ea70e4(*(long *)(lVar5 + 0x80),uVar7,uRam0000000003d2e470);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x188))(plVar10,uVar11,*(undefined8 *)(*plVar10 + 400));
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d40fb8);
        if ((lVar3 != 0) && (*(long *)(lVar5 + 0x88) != 0)) {
          plVar9 = *(long **)(lVar3 + 0x90);
          uVar11 = /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$get_Item*/ func_0x01ea70e4(*(long *)(lVar5 + 0x88),uVar7,uRam0000000003d2e488);
          lVar5 = 0;
          if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01454608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar9 + 0x188))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 400));
            return;
          }
        }
      }
    }
  }
  lVar3 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar4;
  *(long **)((long)register0x00000008 + -0x58) = plVar10;
  *(long *)((long)register0x00000008 + -0x50) = lVar5;
  *(ulong *)((long)register0x00000008 + -0x48) = uVar7;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x38) = Atlas_UI_Screens_ArcadeModeSelectScreen___ctor;
  if ((bRam0000000003eb478e & 1) == 0) {
    func_0x00f78a20(0x3d2c698);
    func_0x00f78a20(0x3d2e478);
    func_0x00f78a20(0x3d2e460);
    func_0x00f78a20(0x3d1c220);
    func_0x00f78a20(0x3d1c228);
    bRam0000000003eb478e = 1;
  }
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, ArcadeEventMetagameData>_TypeInfo*/ uRam0000000003d1c220);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar4,uRam0000000003d2e460);
  *(undefined8 *)(lVar3 + 0x80) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, ArcadeModeMetagameData>_TypeInfo*/ uRam0000000003d1c228);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar4,uRam0000000003d2e478);
  *(undefined8 *)(lVar3 + 0x88) = uVar4;
  *(undefined8 *)((long)register0x00000008 + -0x40) =
       *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c698 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar12 = func_0x00f78af4();
  puVar8 = auVar12._8_8_;
  puVar6 = auVar12._0_8_;
  uVar11 = puVar8[1];
  uVar4 = *puVar8;
  puVar6[2] = puVar8[2];
  puVar6[1] = uVar11;
  *puVar6 = uVar4;
  return;
}



// ============================================================
// RVA: 0x1534afc | Atlas.UI.Screens.ArcadeModeSelectScreen.<>c__DisplayClass8_0.<OnBeforeEnter>b__3
// ============================================================

void Atlas_UI_Screens_ArcadeModeSelectScreen___c__DisplayClass8_0___OnBeforeEnter_b__3
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 unaff_x19;
  long *plVar8;
  undefined8 unaff_x20;
  long *plVar9;
  undefined8 unaff_x21;
  undefined8 uVar10;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar11;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar12 [16];
  
  puVar11 = &stack0xfffffffffffffff0;
  if ((*(long *)(param_1 + 0x18) == 0) || (lVar4 = *(long *)(param_1 + 0x20), lVar4 == 0)) {
    lVar2 = func_0x00f78af4();
    if ((*(long *)(lVar2 + 0x18) == 0) || (lVar4 = *(long *)(lVar2 + 0x20), lVar4 == 0)) {
      auVar12 = func_0x00f78af4();
      lVar4 = auVar12._0_8_;
      *(undefined8 *)(lVar4 + 0x10) = *param_3;
      *(long *)(lVar4 + 0x20) = auVar12._8_8_;
      *(undefined8 **)(lVar4 + 0x28) = param_3;
      return;
    }
    uVar1 = *(uint *)(*(long *)(lVar2 + 0x18) + 0x28);
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x30 = &Atlas_UI_Screens_ArcadeModeSelectScreen___c__DisplayClass8_0___OnBeforeEnter_b__4;
  }
  else {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + 0x28);
    puVar11 = unaff_x29;
  }
  uVar6 = (ulong)uVar1;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar11;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  plVar9 = (long *)0x3eb4000;
  if ((bRam0000000003eb478d & 1) == 0) {
    func_0x00f78a20(0x3d2e488,uVar6,0);
    func_0x00f78a20(0x3d2e470);
    func_0x00f78a20(0x3d40fb8);
    func_0x00f78a20(0x3d40fc0);
    bRam0000000003eb478d = 1;
  }
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d40fc0);
  uVar3 = 0x3d40fc0;
  if (lVar2 != 0) {
    uVar10 = 0x3d40fb8;
    if (*(long *)(lVar2 + 0x18) != 0) {
      /*Atlas.UI.Screens.ArcadeModeSelectScreen.ArcadeModeSelected$$Invoke*/ func_0x01534b64(*(long *)(lVar2 + 0x18),uVar6,0);
    }
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d40fb8);
    uVar3 = 0x3d40fb8;
    if ((lVar2 != 0) && (uVar3 = uVar10, *(long *)(lVar4 + 0x80) != 0)) {
      plVar9 = *(long **)(lVar2 + 0x88);
      uVar10 = /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$get_Item*/ func_0x01ea70e4(*(long *)(lVar4 + 0x80),uVar6,uRam0000000003d2e470);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x188))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 400));
        lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d40fb8);
        if ((lVar2 != 0) && (*(long *)(lVar4 + 0x88) != 0)) {
          plVar8 = *(long **)(lVar2 + 0x90);
          uVar10 = /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$get_Item*/ func_0x01ea70e4(*(long *)(lVar4 + 0x88),uVar6,uRam0000000003d2e488);
          lVar4 = 0;
          if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01454608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar8 + 0x188))(plVar8,uVar10,*(undefined8 *)(*plVar8 + 400));
            return;
          }
        }
      }
    }
  }
  lVar2 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar3;
  *(long **)((long)register0x00000008 + -0x58) = plVar9;
  *(long *)((long)register0x00000008 + -0x50) = lVar4;
  *(ulong *)((long)register0x00000008 + -0x48) = uVar6;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x38) = Atlas_UI_Screens_ArcadeModeSelectScreen___ctor;
  if ((bRam0000000003eb478e & 1) == 0) {
    func_0x00f78a20(0x3d2c698);
    func_0x00f78a20(0x3d2e478);
    func_0x00f78a20(0x3d2e460);
    func_0x00f78a20(0x3d1c220);
    func_0x00f78a20(0x3d1c228);
    bRam0000000003eb478e = 1;
  }
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, ArcadeEventMetagameData>_TypeInfo*/ uRam0000000003d1c220);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar3,uRam0000000003d2e460);
  *(undefined8 *)(lVar2 + 0x80) = uVar3;
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, ArcadeModeMetagameData>_TypeInfo*/ uRam0000000003d1c228);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar3,uRam0000000003d2e478);
  *(undefined8 *)(lVar2 + 0x88) = uVar3;
  *(undefined8 *)((long)register0x00000008 + -0x40) =
       *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c698 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar12 = func_0x00f78af4();
  puVar7 = auVar12._8_8_;
  puVar5 = auVar12._0_8_;
  uVar10 = puVar7[1];
  uVar3 = *puVar7;
  puVar5[2] = puVar7[2];
  puVar5[1] = uVar10;
  *puVar5 = uVar3;
  return;
}



// ============================================================
// RVA: 0x1534b28 | Atlas.UI.Screens.ArcadeModeSelectScreen.<>c__DisplayClass8_0.<OnBeforeEnter>b__4
// ============================================================

void Atlas_UI_Screens_ArcadeModeSelectScreen___c__DisplayClass8_0___OnBeforeEnter_b__4
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  if ((*(long *)(param_1 + 0x18) == 0) || (lVar4 = *(long *)(param_1 + 0x20), lVar4 == 0)) {
    auVar9 = func_0x00f78af4();
    lVar4 = auVar9._0_8_;
    *(undefined8 *)(lVar4 + 0x10) = *param_3;
    *(long *)(lVar4 + 0x20) = auVar9._8_8_;
    *(undefined8 **)(lVar4 + 0x28) = param_3;
    return;
  }
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x28);
  if ((bRam0000000003eb478d & 1) == 0) {
    func_0x00f78a20(0x3d2e488,uVar1,0);
    func_0x00f78a20(0x3d2e470);
    func_0x00f78a20(0x3d40fb8);
    func_0x00f78a20(0x3d40fc0);
    bRam0000000003eb478d = 1;
  }
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d40fc0);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x18) != 0) {
      /*Atlas.UI.Screens.ArcadeModeSelectScreen.ArcadeModeSelected$$Invoke*/ func_0x01534b64(*(long *)(lVar2 + 0x18),uVar1,0);
    }
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d40fb8);
    if ((lVar2 != 0) && (*(long *)(lVar4 + 0x80) != 0)) {
      plVar7 = *(long **)(lVar2 + 0x88);
      uVar3 = /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$get_Item*/ func_0x01ea70e4(*(long *)(lVar4 + 0x80),uVar1,uRam0000000003d2e470);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x188))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 400));
        lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d40fb8);
        if ((lVar2 != 0) && (*(long *)(lVar4 + 0x88) != 0)) {
          plVar7 = *(long **)(lVar2 + 0x90);
          uVar3 = /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$get_Item*/ func_0x01ea70e4(*(long *)(lVar4 + 0x88),uVar1,uRam0000000003d2e488);
          if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01454608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar7 + 0x188))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 400));
            return;
          }
        }
      }
    }
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb478e & 1) == 0) {
    func_0x00f78a20(0x3d2c698);
    func_0x00f78a20(0x3d2e478);
    func_0x00f78a20(0x3d2e460);
    func_0x00f78a20(0x3d1c220);
    func_0x00f78a20(0x3d1c228);
    bRam0000000003eb478e = 1;
  }
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, ArcadeEventMetagameData>_TypeInfo*/ uRam0000000003d1c220);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar3,uRam0000000003d2e460);
  *(undefined8 *)(lVar4 + 0x80) = uVar3;
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, ArcadeModeMetagameData>_TypeInfo*/ uRam0000000003d1c228);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar3,uRam0000000003d2e478);
  *(undefined8 *)(lVar4 + 0x88) = uVar3;
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c698 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar9 = func_0x00f78af4();
  puVar6 = auVar9._8_8_;
  puVar5 = auVar9._0_8_;
  uVar8 = puVar6[1];
  uVar3 = *puVar6;
  puVar5[2] = puVar6[2];
  puVar5[1] = uVar8;
  *puVar5 = uVar3;
  return;
}



