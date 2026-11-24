// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SaveGameScreen

// ============================================================
// RVA: 0x14e7e7c | Atlas.UI.Screens.SaveGameScreen.OnBeforeEnter
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
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164abf0) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x032365f8) */
/* WARNING: Removing unreachable block (ram,0x03236620) */
/* WARNING: Removing unreachable block (ram,0x03236634) */
/* WARNING: Removing unreachable block (ram,0x03236640) */
/* WARNING: Removing unreachable block (ram,0x03236648) */
/* WARNING: Removing unreachable block (ram,0x0323664c) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */

ulong Atlas_UI_Screens_SaveGameScreen__OnBeforeEnter(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  
  if ((bRam0000000003eb4c1d & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d2c8e0);
    func_0x00f78a20(0x3d2c900);
    func_0x00f78a20(0x3d5caf0);
    func_0x00f78a20(0x3d5caf8);
    func_0x00f78a20(0x3d41298);
    func_0x00f78a20(0x3d412a8);
    bRam0000000003eb4c1d = 1;
  }
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d412a8);
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar2 + 0x20);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d412a8);
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar2 + 0x48);
      lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d412a8);
      if (lVar2 != 0) {
        *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar2 + 0x80);
        lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d412a8);
        if (lVar2 != 0) {
          *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar2 + 0x28);
          lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d412a8);
          if (lVar2 != 0) {
            *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar2 + 0xe8);
            lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d412a8);
            if ((lVar2 != 0) && (*(long *)(lVar2 + 0xd8) != 0)) {
              /*Atlas.Analytics.AtlasAnalyticsManager$$RequestSendNextBatchOfQueuedEvents*/ func_0x01457d6c(*(long *)(lVar2 + 0xd8),0);
              Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData___ClearSelectedIfGamepad
                        (param_1,uRam0000000003d2c8e0);
              iVar5 = 0;
              do {
                /*Atlas.UI.Screens.SaveGameScreen$$SetSlotData*/ func_0x014e8534(param_1,iVar5);
                iVar5 = iVar5 + 1;
              } while (iVar5 != 3);
              lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41298);
              if (lVar2 != 0) {
                lVar2 = *(long *)(lVar2 + 0x70);
                uVar3 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                /*System.Action$$.ctor*/ func_0x02924c80(uVar3,param_1,uRam0000000003d5caf0,0);
                if (lVar2 != 0) {
                  /*Core.Input.InputGlyphBehaviour$$add_OnBoundInputPressed*/ func_0x016484e8(lVar2,uVar3,0);
                  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d412a8);
                  if (lVar2 != 0) {
                    lVar2 = *(long *)(lVar2 + 0x88);
                    uVar3 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
                    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar3,param_1,uRam0000000003d5caf8,uRam0000000003d2a320);
                    if (lVar2 != 0) {
                      /*Core.Localisation.LocalisationManager$$RegisterOnLanguageChanged*/ func_0x0164fb38(lVar2,uVar3,0);
                      uVar1 = /*Atlas.UI.Screens.SaveGameScreen$$FindCurrentlySelectedSaveSlotIndex*/ func_0x014e816c(param_1);
                      if (uVar1 == 0xffffffff) {
                        if (*(long *)(param_1 + 0x70) == 0) goto LAB_014e8124;
                        uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + 0xf8);
                      }
                      lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41298);
                      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x68), lVar2 != 0)) {
                        if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_014e8128;
                        lVar2 = *(long *)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
                        if (lVar2 != 0) {
                          lVar2 = *(long *)(lVar2 + 0x20);
                          if ((bRam0000000003eb70f7 & 1) == 0) {
                            func_0x00f78a20(0x3d23990);
                            bRam0000000003eb70f7 = 1;
                          }
                          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          if ((bRam0000000003ec027b & 1) == 0) {
                            func_0x00f78a20(0x3d23990,0,0);
                            bRam0000000003ec027b = 1;
                          }
                          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          if ((bRam0000000003ec021b & 1) == 0) {
                            func_0x00f78a20(0x3d23990);
                            bRam0000000003ec021b = 1;
                          }
                          if (lVar2 == 0) {
                            uVar4 = 1;
                          }
                          else {
                            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            uVar1 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar2);
                            uVar4 = (ulong)(uVar1 ^ 1);
                          }
                          return uVar4;
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
LAB_014e8124:
  func_0x00f78af4();
LAB_014e8128:
  uVar3 = func_0x00f78b24();
  uVar3 = func_0x00f78ac0(uVar3,0);
  iVar5 = 0;
  do {
    uVar4 = /*Atlas.UI.Screens.SaveGameScreen$$SetSlotData*/ func_0x014e8534(uVar3,iVar5);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  return uVar4;
}



// ============================================================
// RVA: 0x14e8134 | Atlas.UI.Screens.SaveGameScreen.RefreshSlots
// ============================================================

void Atlas_UI_Screens_SaveGameScreen__RefreshSlots(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    /*Atlas.UI.Screens.SaveGameScreen$$SetSlotData*/ func_0x014e8534(param_1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 3);
  return;
}



// ============================================================
// RVA: 0x14e816c | Atlas.UI.Screens.SaveGameScreen.FindCurrentlySelectedSaveSlotIndex
// ============================================================

/* WARNING: Possible PIC construction at 0x016486d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016486e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016488d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016486ec) */
/* WARNING: Removing unreachable block (ram,0x016486fc) */
/* WARNING: Removing unreachable block (ram,0x01648704) */
/* WARNING: Removing unreachable block (ram,0x01648708) */
/* WARNING: Removing unreachable block (ram,0x01648720) */
/* WARNING: Removing unreachable block (ram,0x01648728) */
/* WARNING: Removing unreachable block (ram,0x0164872c) */
/* WARNING: Removing unreachable block (ram,0x0164873c) */
/* WARNING: Removing unreachable block (ram,0x01648748) */
/* WARNING: Removing unreachable block (ram,0x01648750) */
/* WARNING: Removing unreachable block (ram,0x01648754) */
/* WARNING: Removing unreachable block (ram,0x01648760) */
/* WARNING: Removing unreachable block (ram,0x01648770) */
/* WARNING: Removing unreachable block (ram,0x01648778) */
/* WARNING: Removing unreachable block (ram,0x0164877c) */
/* WARNING: Removing unreachable block (ram,0x0164878c) */
/* WARNING: Removing unreachable block (ram,0x01648798) */
/* WARNING: Removing unreachable block (ram,0x016487a0) */
/* WARNING: Removing unreachable block (ram,0x016487a4) */
/* WARNING: Removing unreachable block (ram,0x016487b0) */
/* WARNING: Removing unreachable block (ram,0x016487b8) */
/* WARNING: Removing unreachable block (ram,0x016487d8) */
/* WARNING: Removing unreachable block (ram,0x016487ec) */
/* WARNING: Removing unreachable block (ram,0x016487f4) */
/* WARNING: Removing unreachable block (ram,0x016488f8) */
/* WARNING: Removing unreachable block (ram,0x016488fc) */
/* WARNING: Removing unreachable block (ram,0x01648918) */
/* WARNING: Removing unreachable block (ram,0x01648920) */
/* WARNING: Removing unreachable block (ram,0x01648944) */
/* WARNING: Removing unreachable block (ram,0x01648950) */
/* WARNING: Removing unreachable block (ram,0x01648800) */
/* WARNING: Removing unreachable block (ram,0x01648838) */
/* WARNING: Removing unreachable block (ram,0x016488b0) */
/* WARNING: Removing unreachable block (ram,0x016488c4) */
/* WARNING: Removing unreachable block (ram,0x01648848) */
/* WARNING: Removing unreachable block (ram,0x016488f0) */
/* WARNING: Removing unreachable block (ram,0x0164885c) */
/* WARNING: Removing unreachable block (ram,0x01648880) */
/* WARNING: Removing unreachable block (ram,0x01648884) */
/* WARNING: Removing unreachable block (ram,0x016488a8) */
/* WARNING: Removing unreachable block (ram,0x016486d8) */
/* WARNING: Removing unreachable block (ram,0x016488d4) */

ulong Atlas_UI_Screens_SaveGameScreen__FindCurrentlySelectedSaveSlotIndex(undefined8 param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 ***pppuVar4;
  bool bVar5;
  int iVar6;
  uint uVar8;
  int iVar7;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  uint extraout_w8;
  uint uVar23;
  long lVar24;
  long extraout_x9;
  int iVar25;
  int *piVar26;
  undefined8 uVar27;
  ulong *puVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 unaff_x23;
  code *pcVar31;
  undefined8 unaff_x24;
  long *plVar32;
  undefined1 **ppuVar33;
  undefined1 *puVar34;
  undefined *puVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  long lStack_188;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_a0;
  ulong uStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4c20 & 1) == 0) {
    func_0x00f78a20(0x3d438c0);
    func_0x00f78a20(0x3d2c8e8);
    func_0x00f78a20(0x3d57a60);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41298);
    bRam0000000003eb4c20 = 1;
  }
  uStack_38 = 0;
  lVar9 = Atlas_UI_Screens_AtlasScreen_LeagueStarsBoxScreenViewBehaviour__LeagueStarsBoxScreen_TransitionData___GetCurrentlySelectedObject
                    (param_1,uRam0000000003d2c8e8);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar9,0);
  if (iVar6 == 0) {
    return 0xffffffff;
  }
  if (lVar9 != 0) {
    iVar6 = /*UnityEngine.GameObject$$TryGetComponent<UniversalAdditionalLightData>*/ func_0x0185d9a8(lVar9,&uStack_38,uRam0000000003d57a60);
    if (iVar6 == 0) {
      return 0xffffffff;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41298);
    if (lVar9 != 0) {
      uVar10 = /*System.Array$$IndexOf<TabController.TabPanel>*/ func_0x01724eec(*(undefined8 *)(lVar9 + 0x68),uStack_38,uRam0000000003d438c0);
      return uVar10;
    }
  }
  uVar11 = func_0x00f78af4();
  puStack_48 = &Atlas_UI_Screens_SaveGameScreen__OnBeforeExit;
  lVar9 = 0x3eb4000;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4c1e & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5caf0);
    func_0x00f78a20(0x3d5caf8);
    func_0x00f78a20(0x3d41298);
    func_0x00f78a20(0x3d412a8);
    bRam0000000003eb4c1e = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d412a8);
  if (lVar12 == 0) {
code_r0x014e83e0:
    lVar12 = func_0x00f78af4();
    puStack_88 = &Atlas_UI_Screens_SaveGameScreen__CanProgressToNextScreen;
    if (((*(long *)(lVar12 + 0x90) == 0) ||
        (plVar14 = *(long **)(*(long *)(lVar12 + 0x90) + 0x30), plVar14 == (long *)0x0)) ||
       (lStack_a0 = lVar9, uStack_98 = uVar11, ppuStack_90 = &puStack_50,
       uVar10 = (**(code **)(*plVar14 + 0x228))(plVar14,*(undefined8 *)(*plVar14 + 0x230)),
       (uVar10 & 1) == 0)) {
      uVar10 = (ulong)(*(long *)(lVar12 + 0x88) == 0);
    }
    else {
      uVar10 = 0;
    }
    return uVar10;
  }
  lVar9 = *(long *)(lVar12 + 0x88);
  uVar13 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar13,uVar11,uRam0000000003d5caf8,uRam0000000003d2a320);
  if (lVar9 == 0) goto code_r0x014e83e0;
  /*Core.Localisation.LocalisationManager$$UnRegisterOnLanguageChanged*/ func_0x0164fbb4(lVar9,uVar13,0);
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d41298);
  if (lVar12 == 0) goto code_r0x014e83e0;
  lVar12 = *(long *)(lVar12 + 0x70);
  uVar13 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar13,uVar11,uRam0000000003d5caf0,0);
  lVar9 = 0;
  if (lVar12 == 0) goto code_r0x014e83e0;
  if ((bRam0000000003eb5773 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78,uVar13,0);
    bRam0000000003eb5773 = 1;
  }
  puVar28 = (ulong *)(lVar12 + 0x40);
  uVar10 = *puVar28;
  while ((plVar14 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,uVar13,0), plVar14 == (long *)0x0 ||
         (*plVar14 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar15 = func_0x00ff0f44(puVar28,plVar14,uVar10);
    bVar5 = uVar10 == uVar15;
    uVar10 = uVar15;
    if (bVar5) {
      return uVar15;
    }
  }
  uVar15 = func_0x00f78e5c(plVar14);
  lStack_a0 = 0x3d1fa78;
  uStack_98 = uVar10;
  ppuStack_90 = (undefined1 **)puVar28;
  puStack_88 = (undefined *)uVar13;
  if ((bRam0000000003eb5774 & 1) == 0) {
    func_0x00f78a20(0x3d32768);
    func_0x00f78a20(0x3d32770);
    func_0x00f78a20(0x3d32778);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22880);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3fb20);
    bRam0000000003eb5774 = 1;
  }
  uVar11 = 0x3d23990;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  /*Core.Input.InputManager$$RegisterListener*/ func_0x01648164(uVar15);
  ppuStack_110 = (undefined1 **)0x3d23990;
  puStack_108 = (undefined *)0x3d216c0;
  uStack_100 = 0x3eb5000;
  puStack_e8 = &UNK_016486d8;
  ppuVar33 = &puStack_f0;
  uStack_f8 = uVar15;
  puStack_f0 = &stack0xffffffffffffff80;
  if ((bRam0000000003eb5783 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d3ac00);
    bRam0000000003eb5783 = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (uVar10 = *(ulong *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x60), uVar10 == 0)) {
    lVar9 = func_0x00f78af4();
    puStack_118 = &Core_Input_InputGlyphBehaviour__GetLastInputPathComponent;
    if (lVar9 != 0) {
      iVar6 = /*System.String$$LastIndexOf*/ func_0x029ce0f0(lVar9,0x2f,0);
      auVar36._8_4_ = iVar6 + 1;
      auVar36._0_8_ = lVar9;
      auVar36._12_4_ = 0;
      uVar13 = 0x3eb5000;
      pppuVar4 = &ppuStack_110;
      uVar18 = 0x3d22848;
      do {
        uVar20 = auVar36._8_8_;
        uVar10 = auVar36._0_8_;
        iVar6 = auVar36._8_4_;
        uVar23 = *(int *)(uVar10 + 0x10) - iVar6;
        *(undefined8 *)((long)pppuVar4 + -0x30) = uVar11;
        *(undefined8 *)((long)pppuVar4 + -0x28) = uVar18;
        *(undefined8 *)((long)pppuVar4 + -0x20) = uVar13;
        *(ulong *)((long)pppuVar4 + -0x18) = uVar15;
        *(undefined1 ***)((long)pppuVar4 + -0x10) = ppuVar33;
        *(undefined **)((long)pppuVar4 + -8) = puStack_118;
        ppuVar33 = (undefined1 **)((long)pppuVar4 + -0x10);
        uVar11 = 0x3eb9000;
        if ((bRam0000000003eb944b & 1) == 0) {
          func_0x00f78a20(0x3d24dd0);
          bRam0000000003eb944b = 1;
        }
        if (iVar6 < 0) {
          uVar13 = 0x3d72d20;
code_r0x029cbcb4:
          uVar13 = func_0x00f78a24(uVar13);
          uVar15 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar13,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar13 = func_0x00f78aec();
          uVar18 = 0x3d7b9d0;
        }
        else {
          uVar8 = *(uint *)(uVar10 + 0x10);
          if ((int)uVar8 < iVar6) {
            uVar13 = 0x3d7b9e8;
            goto code_r0x029cbcb4;
          }
          if ((int)uVar23 < 0) {
            uVar13 = 0x3d6f480;
          }
          else {
            if (iVar6 <= (int)(uVar8 - uVar23)) goto code_r0x029cbc4c;
            uVar13 = 0x3d6ddc8;
          }
          uVar13 = func_0x00f78a24(uVar13);
          uVar15 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar13,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar13 = func_0x00f78aec();
          uVar18 = 0x3d7a280;
        }
        uVar18 = func_0x00f78a24(uVar18);
        /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar13,uVar18,uVar15,0);
        uVar18 = func_0x00f78a24(0x3d5dbb0);
        puStack_118 = &System_String__Substring;
        auVar36 = func_0x00f78ac0(uVar13,uVar18);
        pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x30);
        uVar18 = uVar20;
      } while( true );
    }
    plVar14 = (long *)func_0x00f78af4();
    if ((bRam0000000003eb5789 & 1) == 0) {
      func_0x00f78a20(0x3d22848);
      bRam0000000003eb5789 = 1;
    }
    if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
       (lVar9 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x48), lVar9 == 0)) {
      return 0;
    }
    lStack_188 = lVar9;
    lVar12 = *(long *)(lVar9 + 0x68);
    if (lVar12 == 0) {
      plVar32 = &lStack_188;
      lVar30 = 1;
    }
    else {
      lVar30 = *(long *)(lVar12 + 0x18);
      if (lVar30 == 0) {
        return 0;
      }
      plVar32 = (long *)(lVar12 + 0x20);
    }
    lVar12 = 0;
    do {
      lVar17 = plVar32[lVar12];
      pcVar31 = *(code **)(lVar17 + 0x10);
      plVar1 = *(long **)(lVar17 + 0x20);
      lVar17 = *(long *)(lVar17 + 0x28);
      if (*(short *)(lVar17 + 0x48) == -1) {
        func_0x00f78ad8(lVar17);
      }
      iVar6 = func_0x00f78a4c(lVar17);
      bVar5 = *(char *)(lVar17 + 0x4a) == '\x01';
      if (iVar6 == 0) {
        if (bVar5) {
          if (plVar1 == (long *)0x0) {
code_r0x0164a8ac:
            uVar10 = (*pcVar31)(plVar14,lVar17);
          }
          else {
            if (((*(short *)(lVar17 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
               (*(long *)(lVar9 + 0x18) == 0)) goto code_r0x0164a7a4;
            iVar6 = func_0x00f78a44(lVar17);
            iVar7 = func_0x00f78ec0(lVar17);
            if (iVar6 == 0) {
              uVar2 = *(ushort *)(lVar17 + 0x48);
              if (iVar7 == 0) {
                lVar17 = *plVar1 + (ulong)uVar2 * 0x10;
                uVar10 = (**(code **)(lVar17 + 0x138))
                                   (plVar1,plVar14,*(undefined8 *)(lVar17 + 0x140));
                goto code_r0x0164a8b8;
              }
              lVar17 = func_0x00f78a48(lVar17);
              lVar24 = *plVar1;
              uVar10 = (ulong)*(ushort *)(lVar24 + 0x12a);
              if (uVar10 != 0) {
                piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == lVar17) {
                    puVar21 = (undefined8 *)
                              (lVar24 + (long)(int)(*piVar26 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x0164aa44;
                  }
                  piVar26 = piVar26 + 4;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              puVar21 = (undefined8 *)func_0x00fac1f0(plVar1,lVar17,(ulong)uVar2);
code_r0x0164aa44:
              pcVar31 = (code *)*puVar21;
              puVar21 = (undefined8 *)puVar21[1];
            }
            else {
              if (iVar7 == 0) {
                uVar11 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar17 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar24 = *plVar1;
                uVar10 = (ulong)*(ushort *)(lVar24 + 0x12a);
                if (uVar10 != 0) {
                  piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == *(long *)(lVar17 + 0x18)) {
                      lVar24 = lVar24 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar17 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0164aa1c;
                    }
                    piVar26 = piVar26 + 4;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                lVar24 = func_0x00fac1f0(plVar1);
code_r0x0164aa1c:
                uVar11 = *(undefined8 *)(lVar24 + 8);
              }
              puVar21 = (undefined8 *)func_0x00f78acc(uVar11,lVar17);
              pcVar31 = (code *)*puVar21;
            }
            uVar10 = (*pcVar31)(plVar1,plVar14,puVar21);
          }
        }
        else {
          if ((*(short *)(lVar17 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0))
          goto code_r0x0164a8ac;
          iVar6 = func_0x00f78a44(lVar17);
          iVar7 = func_0x00f78ec0(lVar17);
          if (iVar6 == 0) {
            uVar2 = *(ushort *)(lVar17 + 0x48);
            if (iVar7 == 0) {
              lVar17 = *plVar14 + (ulong)uVar2 * 0x10;
              uVar10 = (**(code **)(lVar17 + 0x138))(plVar14,*(undefined8 *)(lVar17 + 0x140));
              goto code_r0x0164a8b8;
            }
            lVar17 = func_0x00f78a48(lVar17);
            lVar24 = *plVar14;
            uVar10 = (ulong)*(ushort *)(lVar24 + 0x12a);
            if (uVar10 != 0) {
              piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == lVar17) {
                  puVar21 = (undefined8 *)
                            (lVar24 + (long)(int)(*piVar26 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x0164a9e0;
                }
                piVar26 = piVar26 + 4;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            puVar21 = (undefined8 *)func_0x00fac1f0(plVar14,lVar17,(ulong)uVar2);
code_r0x0164a9e0:
            pcVar31 = (code *)*puVar21;
            puVar21 = (undefined8 *)puVar21[1];
          }
          else {
            if (iVar7 == 0) {
              uVar11 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar17 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar24 = *plVar14;
              uVar10 = (ulong)*(ushort *)(lVar24 + 0x12a);
              if (uVar10 != 0) {
                piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == *(long *)(lVar17 + 0x18)) {
                    lVar24 = lVar24 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar17 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x0164a9b8;
                  }
                  piVar26 = piVar26 + 4;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              lVar24 = func_0x00fac1f0(plVar14);
code_r0x0164a9b8:
              uVar11 = *(undefined8 *)(lVar24 + 8);
            }
            puVar21 = (undefined8 *)func_0x00f78acc(uVar11,lVar17);
            pcVar31 = (code *)*puVar21;
          }
          uVar10 = (*pcVar31)(plVar14,puVar21);
        }
      }
      else {
        if (bVar5) goto code_r0x0164a8ac;
code_r0x0164a7a4:
        uVar10 = (*pcVar31)(plVar1,plVar14,lVar17);
      }
code_r0x0164a8b8:
      lVar12 = lVar12 + 1;
      if (lVar12 == lVar30) {
        return uVar10;
      }
    } while( true );
  }
  lVar9 = *(long *)(uVar10 + 0x10);
  puVar21 = puRam0000000003d3ac00;
  uVar19 = uStack_f8;
  uVar22 = uStack_100;
  if (lVar9 == 0) {
code_r0x0242716c:
    uVar15 = uVar22;
    uVar10 = uVar19;
    uVar16 = func_0x00f78af4();
    lVar9 = extraout_x9;
    uVar23 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar10 + 0x18) = uVar23 + 1;
  }
  else {
    uVar23 = *(uint *)(uVar10 + 0x18);
    uVar16 = uVar10;
    if (uVar23 != *(uint *)(lVar9 + 0x18)) goto code_r0x02427170;
    puVar21 = *(undefined8 **)(*(long *)(puRam0000000003d3ac00[3] + 0xc0) + 0x60);
    uVar16 = (*(code *)*puVar21)(uVar10,uVar23 + 1);
    lVar9 = *(long *)(uVar10 + 0x10);
    uVar23 = *(uint *)(uVar10 + 0x18);
    *(uint *)(uVar10 + 0x18) = uVar23 + 1;
    uVar19 = uVar10;
    uVar22 = uVar15;
    if (lVar9 == 0) goto code_r0x0242716c;
  }
  if (uVar23 < *(uint *)(lVar9 + 0x18)) {
    *(ulong *)(lVar9 + (long)(int)uVar23 * 8 + 0x20) = uVar15;
    *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
    return uVar16;
  }
  uVar11 = func_0x00f78b24();
  auVar36 = func_0x00f78ac0(uVar11,0);
  lVar12 = auVar36._8_8_;
  lVar9 = auVar36._0_8_;
  puStack_108 = &System_Collections_Generic_List_object___System_Collections_IList_Add;
  ppuStack_110 = &puStack_f0;
  (*(code *)**(undefined8 **)(*(long *)(puVar21[3] + 0xc0) + 0x48))(lVar12,0x14);
  if (lVar9 != 0) {
    pcVar31 = (code *)**(undefined8 **)(*(long *)(puVar21[3] + 0xc0) + 0x28);
    lVar30 = *(long *)(*(long *)(puVar21[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar30);
    }
    if (lVar12 == 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = func_0x00f78adc(lVar12,lVar30);
      if (lVar17 == 0) {
        func_0x00f78e5c(lVar12,lVar30);
        goto code_r0x0242734c;
      }
    }
    (*pcVar31)(lVar9,lVar17,*(undefined8 *)(*(long *)(puVar21[3] + 0xc0) + 0x28));
    iVar6 = (*(code *)**(undefined8 **)(*(long *)(puVar21[3] + 0xc0) + 0x68))(lVar9);
    return (ulong)(iVar6 - 1);
  }
  func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
  pcVar31 = (code *)SoftwareBreakpoint(1,0x2427350);
  (*pcVar31)();
code_r0x029cc070:
  uVar13 = func_0x00f78b24();
  func_0x00f78ac0(uVar13,0);
  unaff_x23 = uVar11;
code_r0x029cc07c:
  auVar36._8_8_ = lVar9;
  auVar36._0_8_ = uVar15;
  puVar35 = &System_String__TrimStart;
  auVar37 = func_0x00f78af4();
  uVar19 = auVar37._0_8_;
  if ((auVar37._8_8_ == 0) || (*(long *)(auVar37._8_8_ + 0x18) == 0)) goto code_r0x029cc094;
  uVar11 = 0;
  pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x40);
  uVar10 = uVar16;
  auVar3 = auVar37;
  goto System_String__TrimHelper;
code_r0x029cbc4c:
  if (uVar23 == 0) {
    uVar10 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else if ((iVar6 != 0) || (uVar8 != uVar23)) {
    uVar11 = *(undefined8 *)((long)pppuVar4 + -0x10);
    uVar20 = *(undefined8 *)((long)pppuVar4 + -8);
    uVar13 = *(undefined8 *)((long)pppuVar4 + -0x20);
    uVar10 = *(ulong *)((long)pppuVar4 + -0x18);
    uVar18 = *(undefined8 *)((long)pppuVar4 + -0x30);
    uVar27 = *(undefined8 *)((long)pppuVar4 + -0x28);
System_String__InternalSubString:
    auVar3._8_8_ = auVar36._8_8_;
    auVar3._0_8_ = uVar10;
    uVar15 = auVar36._0_8_;
    uVar22 = (ulong)uVar23;
    *(undefined8 *)((long)pppuVar4 + -0x30) = uVar18;
    *(undefined8 *)((long)pppuVar4 + -0x28) = uVar27;
    *(undefined8 *)((long)pppuVar4 + -0x20) = uVar13;
    *(ulong *)((long)pppuVar4 + -0x18) = uVar10;
    *(undefined8 *)((long)pppuVar4 + -0x10) = uVar11;
    *(undefined8 *)((long)pppuVar4 + -8) = uVar20;
    puVar34 = (undefined1 *)((long)pppuVar4 + -0x10);
    uVar19 = func_0x00f834ac(uVar22);
    if (uVar19 != 0) {
      /*System.Buffer$$Memcpy*/ func_0x029426bc(uVar19 + 0x14,uVar15 + (long)auVar36._8_4_ * 2 + 0x14,uVar23 << 1,0);
      return uVar19;
    }
    puVar35 = &System_String__Trim;
    auVar37 = func_0x00f78af4();
    uVar19 = auVar37._0_8_;
    if ((auVar37._8_8_ != 0) && (*(long *)(auVar37._8_8_ + 0x18) != 0)) {
      uVar11 = 2;
      pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x30);
      auVar3 = auVar37;
System_String__TrimHelper:
      lVar9 = auVar3._8_8_;
      uVar16 = auVar3._0_8_;
      *(undefined8 *)((long)pppuVar4 + -0x40) = unaff_x24;
      *(undefined8 *)((long)pppuVar4 + -0x38) = unaff_x23;
      *(undefined1 (*) [16])((long)pppuVar4 + -0x30) = auVar36;
      *(ulong *)((long)pppuVar4 + -0x20) = uVar22;
      *(ulong *)((long)pppuVar4 + -0x18) = uVar10;
      *(undefined1 **)((long)pppuVar4 + -0x10) = puVar34;
      *(undefined **)((long)pppuVar4 + -8) = puVar35;
      puVar34 = (undefined1 *)((long)pppuVar4 + -0x10);
      uVar23 = *(uint *)(uVar16 + 0x10);
      uVar22 = (ulong)uVar23;
      if ((int)uVar11 == 1) {
        uVar15 = 0;
        uVar11 = unaff_x23;
code_r0x029cbfd8:
        do {
          uVar23 = (int)uVar22 - 1;
          uVar22 = (ulong)uVar23;
          if ((int)uVar23 < (int)uVar15) break;
          uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar22);
          unaff_x23 = uVar11;
          if (lVar9 == 0) goto code_r0x029cc07c;
          iVar6 = *(int *)(lVar9 + 0x18);
          if (iVar6 < 1) {
            iVar7 = 0;
          }
          else {
            iVar25 = 0;
            do {
              if (iVar6 == iVar25) goto code_r0x029cc070;
              iVar7 = iVar25;
            } while ((*(ushort *)(lVar9 + (long)iVar25 * 2 + 0x20) != uVar8) &&
                    (iVar25 = iVar25 + 1, iVar7 = iVar6, iVar6 != iVar25));
          }
        } while (iVar7 != iVar6);
      }
      else {
        if ((int)uVar23 < 1) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          do {
            uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar15);
            unaff_x23 = uVar11;
            if (lVar9 == 0) goto code_r0x029cc07c;
            iVar6 = *(int *)(lVar9 + 0x18);
            if (iVar6 < 1) {
              iVar7 = 0;
            }
            else {
              iVar25 = 0;
              do {
                if (iVar6 == iVar25) goto code_r0x029cc070;
                iVar7 = iVar25;
              } while ((*(ushort *)(lVar9 + (long)iVar25 * 2 + 0x20) != uVar8) &&
                      (iVar25 = iVar25 + 1, iVar7 = iVar6, iVar6 != iVar25));
            }
          } while ((iVar7 != iVar6) &&
                  (uVar8 = (int)uVar15 + 1, uVar15 = (ulong)uVar8,
                  (int)uVar8 < *(int *)(uVar16 + 0x10)));
        }
        if ((int)uVar11 != 0) {
          uVar22 = (ulong)*(uint *)(uVar16 + 0x10);
          goto code_r0x029cbfd8;
        }
        uVar23 = uVar23 - 1;
      }
      uVar11 = *(undefined8 *)((long)pppuVar4 + -0x10);
      uVar20 = *(undefined8 *)((long)pppuVar4 + -8);
      uVar13 = *(undefined8 *)((long)pppuVar4 + -0x20);
      uVar27 = *(undefined8 *)((long)pppuVar4 + -0x18);
      uVar18 = *(undefined8 *)((long)pppuVar4 + -0x30);
      uVar29 = *(undefined8 *)((long)pppuVar4 + -0x28);
      unaff_x24 = *(undefined8 *)((long)pppuVar4 + -0x40);
      unaff_x23 = *(undefined8 *)((long)pppuVar4 + -0x38);
      uVar19 = uVar16;
      goto System_String__CreateTrimmedString;
    }
    iVar6 = 2;
    pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x30);
    goto System_String__TrimHelper;
  }
  return uVar10;
code_r0x029cc094:
  iVar6 = 0;
  pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x40);
System_String__TrimHelper:
  *(undefined8 *)((long)pppuVar4 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pppuVar4 + -0x38) = unaff_x23;
  *(ulong *)((long)pppuVar4 + -0x30) = uVar15;
  *(long *)((long)pppuVar4 + -0x28) = auVar3._8_8_;
  *(ulong *)((long)pppuVar4 + -0x20) = uVar22;
  *(long *)((long)pppuVar4 + -0x18) = auVar3._0_8_;
  *(undefined1 **)((long)pppuVar4 + -0x10) = puVar34;
  *(undefined **)((long)pppuVar4 + -8) = puVar35;
  if ((bRam0000000003eb9460 & 1) == 0) {
    func_0x00f78a20(0x3d20620);
    bRam0000000003eb9460 = 1;
  }
  uVar23 = *(uint *)(uVar19 + 0x10);
  if (iVar6 == 1) {
    uVar15 = 0;
  }
  else {
    if ((int)uVar23 < 1) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      do {
        uVar11 = /*System.String$$get_Chars*/ func_0x029c5420(uVar19,uVar15);
        if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar10 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar11,0);
        if ((uVar10 & 1) == 0) {
          /*System.String$$get_Chars*/ func_0x029c5420(uVar19,uVar15);
          break;
        }
        uVar8 = (int)uVar15 + 1;
        uVar15 = (ulong)uVar8;
      } while ((int)uVar8 < *(int *)(uVar19 + 0x10));
    }
    if (iVar6 == 0) {
      uVar23 = uVar23 - 1;
      goto code_r0x029cbf04;
    }
    uVar23 = *(uint *)(uVar19 + 0x10);
  }
  do {
    uVar23 = uVar23 - 1;
    if ((int)uVar23 < (int)uVar15) goto code_r0x029cbf04;
    uVar11 = /*System.String$$get_Chars*/ func_0x029c5420(uVar19,uVar23);
    if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar11,0);
  } while ((uVar10 & 1) != 0);
  /*System.String$$get_Chars*/ func_0x029c5420(uVar19,uVar15);
code_r0x029cbf04:
  uVar11 = *(undefined8 *)((long)pppuVar4 + -0x10);
  uVar20 = *(undefined8 *)((long)pppuVar4 + -8);
  uVar13 = *(undefined8 *)((long)pppuVar4 + -0x20);
  uVar27 = *(undefined8 *)((long)pppuVar4 + -0x18);
  uVar18 = *(undefined8 *)((long)pppuVar4 + -0x30);
  uVar29 = *(undefined8 *)((long)pppuVar4 + -0x28);
  unaff_x24 = *(undefined8 *)((long)pppuVar4 + -0x40);
  unaff_x23 = *(undefined8 *)((long)pppuVar4 + -0x38);
System_String__CreateTrimmedString:
  auVar36._8_8_ = uVar15;
  auVar36._0_8_ = uVar19;
  *(undefined8 *)((long)pppuVar4 + -0x30) = uVar18;
  *(undefined8 *)((long)pppuVar4 + -0x28) = uVar29;
  *(undefined8 *)((long)pppuVar4 + -0x20) = uVar13;
  *(undefined8 *)((long)pppuVar4 + -0x18) = uVar27;
  *(undefined8 *)((long)pppuVar4 + -0x10) = uVar11;
  *(undefined8 *)((long)pppuVar4 + -8) = uVar20;
  if ((bRam0000000003eb9461 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9461 = 1;
  }
  uVar23 = (uVar23 - (int)uVar15) + 1;
  if (uVar23 != *(uint *)(uVar19 + 0x10)) {
    if (uVar23 != 0) {
      uVar11 = *(undefined8 *)((long)pppuVar4 + -0x10);
      uVar20 = *(undefined8 *)((long)pppuVar4 + -8);
      uVar13 = *(undefined8 *)((long)pppuVar4 + -0x20);
      uVar10 = *(ulong *)((long)pppuVar4 + -0x18);
      uVar18 = *(undefined8 *)((long)pppuVar4 + -0x30);
      uVar27 = *(undefined8 *)((long)pppuVar4 + -0x28);
      goto System_String__InternalSubString;
    }
    uVar19 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  return uVar19;
}



// ============================================================
// RVA: 0x14e8290 | Atlas.UI.Screens.SaveGameScreen.OnBeforeExit
// ============================================================

/* WARNING: Possible PIC construction at 0x016486d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016486e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016488d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016486ec) */
/* WARNING: Removing unreachable block (ram,0x016486fc) */
/* WARNING: Removing unreachable block (ram,0x01648704) */
/* WARNING: Removing unreachable block (ram,0x01648708) */
/* WARNING: Removing unreachable block (ram,0x01648720) */
/* WARNING: Removing unreachable block (ram,0x01648728) */
/* WARNING: Removing unreachable block (ram,0x0164872c) */
/* WARNING: Removing unreachable block (ram,0x0164873c) */
/* WARNING: Removing unreachable block (ram,0x01648748) */
/* WARNING: Removing unreachable block (ram,0x01648750) */
/* WARNING: Removing unreachable block (ram,0x01648754) */
/* WARNING: Removing unreachable block (ram,0x01648760) */
/* WARNING: Removing unreachable block (ram,0x01648770) */
/* WARNING: Removing unreachable block (ram,0x01648778) */
/* WARNING: Removing unreachable block (ram,0x0164877c) */
/* WARNING: Removing unreachable block (ram,0x0164878c) */
/* WARNING: Removing unreachable block (ram,0x01648798) */
/* WARNING: Removing unreachable block (ram,0x016487a0) */
/* WARNING: Removing unreachable block (ram,0x016487a4) */
/* WARNING: Removing unreachable block (ram,0x016487b0) */
/* WARNING: Removing unreachable block (ram,0x016487b8) */
/* WARNING: Removing unreachable block (ram,0x016487d8) */
/* WARNING: Removing unreachable block (ram,0x016487ec) */
/* WARNING: Removing unreachable block (ram,0x016487f4) */
/* WARNING: Removing unreachable block (ram,0x016488f8) */
/* WARNING: Removing unreachable block (ram,0x016488fc) */
/* WARNING: Removing unreachable block (ram,0x01648918) */
/* WARNING: Removing unreachable block (ram,0x01648920) */
/* WARNING: Removing unreachable block (ram,0x01648944) */
/* WARNING: Removing unreachable block (ram,0x01648950) */
/* WARNING: Removing unreachable block (ram,0x01648800) */
/* WARNING: Removing unreachable block (ram,0x01648838) */
/* WARNING: Removing unreachable block (ram,0x016488b0) */
/* WARNING: Removing unreachable block (ram,0x016488c4) */
/* WARNING: Removing unreachable block (ram,0x01648848) */
/* WARNING: Removing unreachable block (ram,0x016488f0) */
/* WARNING: Removing unreachable block (ram,0x0164885c) */
/* WARNING: Removing unreachable block (ram,0x01648880) */
/* WARNING: Removing unreachable block (ram,0x01648884) */
/* WARNING: Removing unreachable block (ram,0x016488a8) */
/* WARNING: Removing unreachable block (ram,0x016486d8) */
/* WARNING: Removing unreachable block (ram,0x016488d4) */

ulong Atlas_UI_Screens_SaveGameScreen__OnBeforeExit(undefined8 param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 ***pppuVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  uint extraout_w8;
  uint uVar22;
  long lVar23;
  long extraout_x9;
  int iVar24;
  int *piVar25;
  undefined8 uVar26;
  long lVar27;
  ulong *puVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 unaff_x23;
  code *pcVar31;
  undefined8 unaff_x24;
  long *plVar32;
  undefined1 **ppuVar33;
  undefined1 *puVar34;
  undefined *puVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  long lStack_148;
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  undefined *puStack_48;
  
  lVar27 = 0x3eb4000;
  if ((bRam0000000003eb4c1e & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5caf0);
    func_0x00f78a20(0x3d5caf8);
    func_0x00f78a20(0x3d41298);
    func_0x00f78a20(0x3d412a8);
    bRam0000000003eb4c1e = 1;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d412a8);
  if (lVar9 == 0) {
LAB_014e83e0:
    lVar9 = func_0x00f78af4();
    puStack_48 = &Atlas_UI_Screens_SaveGameScreen__CanProgressToNextScreen;
    if (((*(long *)(lVar9 + 0x90) == 0) ||
        (plVar11 = *(long **)(*(long *)(lVar9 + 0x90) + 0x30), plVar11 == (long *)0x0)) ||
       (lStack_60 = lVar27, uStack_58 = param_1, puStack_50 = (ulong *)&stack0xfffffffffffffff0,
       uVar13 = (**(code **)(*plVar11 + 0x228))(plVar11,*(undefined8 *)(*plVar11 + 0x230)),
       (uVar13 & 1) == 0)) {
      uVar13 = (ulong)(*(long *)(lVar9 + 0x88) == 0);
    }
    else {
      uVar13 = 0;
    }
    return uVar13;
  }
  lVar27 = *(long *)(lVar9 + 0x88);
  uVar10 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ uRam0000000003d1b598);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar10,param_1,uRam0000000003d5caf8,uRam0000000003d2a320);
  if (lVar27 == 0) goto LAB_014e83e0;
  /*Core.Localisation.LocalisationManager$$UnRegisterOnLanguageChanged*/ func_0x0164fbb4(lVar27,uVar10,0);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41298);
  if (lVar9 == 0) goto LAB_014e83e0;
  lVar9 = *(long *)(lVar9 + 0x70);
  uVar10 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar10,param_1,uRam0000000003d5caf0,0);
  lVar27 = 0;
  if (lVar9 == 0) goto LAB_014e83e0;
  if ((bRam0000000003eb5773 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78,uVar10,0);
    bRam0000000003eb5773 = 1;
  }
  puVar28 = (ulong *)(lVar9 + 0x40);
  uVar13 = *puVar28;
  while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar13,uVar10,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar12 = func_0x00ff0f44(puVar28,plVar11,uVar13);
    bVar5 = uVar13 == uVar12;
    uVar13 = uVar12;
    if (bVar5) {
      return uVar12;
    }
  }
  uVar12 = func_0x00f78e5c(plVar11);
  lStack_60 = 0x3d1fa78;
  uStack_58 = uVar13;
  puStack_50 = puVar28;
  puStack_48 = (undefined *)uVar10;
  if ((bRam0000000003eb5774 & 1) == 0) {
    func_0x00f78a20(0x3d32768);
    func_0x00f78a20(0x3d32770);
    func_0x00f78a20(0x3d32778);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22880);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3fb20);
    bRam0000000003eb5774 = 1;
  }
  uVar10 = 0x3d23990;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  /*Core.Input.InputManager$$RegisterListener*/ func_0x01648164(uVar12);
  ppuStack_d0 = (undefined1 **)0x3d23990;
  puStack_c8 = (undefined *)0x3d216c0;
  uStack_c0 = 0x3eb5000;
  puStack_a8 = &UNK_016486d8;
  ppuVar33 = &puStack_b0;
  uStack_b8 = uVar12;
  puStack_b0 = &stack0xffffffffffffffc0;
  if ((bRam0000000003eb5783 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d3ac00);
    bRam0000000003eb5783 = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (uVar13 = *(ulong *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x60), uVar13 == 0)) {
    lVar27 = func_0x00f78af4();
    puStack_d8 = &Core_Input_InputGlyphBehaviour__GetLastInputPathComponent;
    if (lVar27 != 0) {
      iVar7 = /*System.String$$LastIndexOf*/ func_0x029ce0f0(lVar27,0x2f,0);
      auVar36._8_4_ = iVar7 + 1;
      auVar36._0_8_ = lVar27;
      auVar36._12_4_ = 0;
      uVar18 = 0x3eb5000;
      pppuVar4 = &ppuStack_d0;
      uVar16 = 0x3d22848;
      do {
        uVar19 = auVar36._8_8_;
        uVar13 = auVar36._0_8_;
        iVar7 = auVar36._8_4_;
        uVar22 = *(int *)(uVar13 + 0x10) - iVar7;
        *(undefined8 *)((long)pppuVar4 + -0x30) = uVar10;
        *(undefined8 *)((long)pppuVar4 + -0x28) = uVar16;
        *(undefined8 *)((long)pppuVar4 + -0x20) = uVar18;
        *(ulong *)((long)pppuVar4 + -0x18) = uVar12;
        *(undefined1 ***)((long)pppuVar4 + -0x10) = ppuVar33;
        *(undefined **)((long)pppuVar4 + -8) = puStack_d8;
        ppuVar33 = (undefined1 **)((long)pppuVar4 + -0x10);
        uVar10 = 0x3eb9000;
        if ((bRam0000000003eb944b & 1) == 0) {
          func_0x00f78a20(0x3d24dd0);
          bRam0000000003eb944b = 1;
        }
        if (iVar7 < 0) {
          uVar18 = 0x3d72d20;
code_r0x029cbcb4:
          uVar18 = func_0x00f78a24(uVar18);
          uVar12 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar18,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar18 = func_0x00f78aec();
          uVar16 = 0x3d7b9d0;
        }
        else {
          uVar8 = *(uint *)(uVar13 + 0x10);
          if ((int)uVar8 < iVar7) {
            uVar18 = 0x3d7b9e8;
            goto code_r0x029cbcb4;
          }
          if ((int)uVar22 < 0) {
            uVar18 = 0x3d6f480;
          }
          else {
            if (iVar7 <= (int)(uVar8 - uVar22)) goto code_r0x029cbc4c;
            uVar18 = 0x3d6ddc8;
          }
          uVar18 = func_0x00f78a24(uVar18);
          uVar12 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar18,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar18 = func_0x00f78aec();
          uVar16 = 0x3d7a280;
        }
        uVar16 = func_0x00f78a24(uVar16);
        /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar18,uVar16,uVar12,0);
        uVar16 = func_0x00f78a24(0x3d5dbb0);
        puStack_d8 = &System_String__Substring;
        auVar36 = func_0x00f78ac0(uVar18,uVar16);
        pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x30);
        uVar16 = uVar19;
      } while( true );
    }
    plVar11 = (long *)func_0x00f78af4();
    if ((bRam0000000003eb5789 & 1) == 0) {
      func_0x00f78a20(0x3d22848);
      bRam0000000003eb5789 = 1;
    }
    if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
       (lVar27 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x48), lVar27 == 0)) {
      return 0;
    }
    lStack_148 = lVar27;
    lVar9 = *(long *)(lVar27 + 0x68);
    if (lVar9 == 0) {
      plVar32 = &lStack_148;
      lVar30 = 1;
    }
    else {
      lVar30 = *(long *)(lVar9 + 0x18);
      if (lVar30 == 0) {
        return 0;
      }
      plVar32 = (long *)(lVar9 + 0x20);
    }
    lVar9 = 0;
    do {
      lVar15 = plVar32[lVar9];
      pcVar31 = *(code **)(lVar15 + 0x10);
      plVar1 = *(long **)(lVar15 + 0x20);
      lVar15 = *(long *)(lVar15 + 0x28);
      if (*(short *)(lVar15 + 0x48) == -1) {
        func_0x00f78ad8(lVar15);
      }
      iVar7 = func_0x00f78a4c(lVar15);
      bVar5 = *(char *)(lVar15 + 0x4a) == '\x01';
      if (iVar7 == 0) {
        if (bVar5) {
          if (plVar1 == (long *)0x0) {
code_r0x0164a8ac:
            uVar13 = (*pcVar31)(plVar11,lVar15);
          }
          else {
            if (((*(short *)(lVar15 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
               (*(long *)(lVar27 + 0x18) == 0)) goto code_r0x0164a7a4;
            iVar7 = func_0x00f78a44(lVar15);
            iVar6 = func_0x00f78ec0(lVar15);
            if (iVar7 == 0) {
              uVar2 = *(ushort *)(lVar15 + 0x48);
              if (iVar6 == 0) {
                lVar15 = *plVar1 + (ulong)uVar2 * 0x10;
                uVar13 = (**(code **)(lVar15 + 0x138))
                                   (plVar1,plVar11,*(undefined8 *)(lVar15 + 0x140));
                goto code_r0x0164a8b8;
              }
              lVar15 = func_0x00f78a48(lVar15);
              lVar23 = *plVar1;
              uVar13 = (ulong)*(ushort *)(lVar23 + 0x12a);
              if (uVar13 != 0) {
                piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == lVar15) {
                    puVar20 = (undefined8 *)
                              (lVar23 + (long)(int)(*piVar25 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x0164aa44;
                  }
                  piVar25 = piVar25 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              puVar20 = (undefined8 *)func_0x00fac1f0(plVar1,lVar15,(ulong)uVar2);
code_r0x0164aa44:
              pcVar31 = (code *)*puVar20;
              puVar20 = (undefined8 *)puVar20[1];
            }
            else {
              if (iVar6 == 0) {
                uVar10 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar23 = *plVar1;
                uVar13 = (ulong)*(ushort *)(lVar23 + 0x12a);
                if (uVar13 != 0) {
                  piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == *(long *)(lVar15 + 0x18)) {
                      lVar23 = lVar23 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar15 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0164aa1c;
                    }
                    piVar25 = piVar25 + 4;
                    uVar13 = uVar13 - 1;
                  } while (uVar13 != 0);
                }
                lVar23 = func_0x00fac1f0(plVar1);
code_r0x0164aa1c:
                uVar10 = *(undefined8 *)(lVar23 + 8);
              }
              puVar20 = (undefined8 *)func_0x00f78acc(uVar10,lVar15);
              pcVar31 = (code *)*puVar20;
            }
            uVar13 = (*pcVar31)(plVar1,plVar11,puVar20);
          }
        }
        else {
          if ((*(short *)(lVar15 + 0x48) == -1) || (*(long *)(lVar27 + 0x18) == 0))
          goto code_r0x0164a8ac;
          iVar7 = func_0x00f78a44(lVar15);
          iVar6 = func_0x00f78ec0(lVar15);
          if (iVar7 == 0) {
            uVar2 = *(ushort *)(lVar15 + 0x48);
            if (iVar6 == 0) {
              lVar15 = *plVar11 + (ulong)uVar2 * 0x10;
              uVar13 = (**(code **)(lVar15 + 0x138))(plVar11,*(undefined8 *)(lVar15 + 0x140));
              goto code_r0x0164a8b8;
            }
            lVar15 = func_0x00f78a48(lVar15);
            lVar23 = *plVar11;
            uVar13 = (ulong)*(ushort *)(lVar23 + 0x12a);
            if (uVar13 != 0) {
              piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == lVar15) {
                  puVar20 = (undefined8 *)
                            (lVar23 + (long)(int)(*piVar25 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x0164a9e0;
                }
                piVar25 = piVar25 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            puVar20 = (undefined8 *)func_0x00fac1f0(plVar11,lVar15,(ulong)uVar2);
code_r0x0164a9e0:
            pcVar31 = (code *)*puVar20;
            puVar20 = (undefined8 *)puVar20[1];
          }
          else {
            if (iVar6 == 0) {
              uVar10 = *(undefined8 *)(*plVar11 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar23 = *plVar11;
              uVar13 = (ulong)*(ushort *)(lVar23 + 0x12a);
              if (uVar13 != 0) {
                piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == *(long *)(lVar15 + 0x18)) {
                    lVar23 = lVar23 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar15 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x0164a9b8;
                  }
                  piVar25 = piVar25 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              lVar23 = func_0x00fac1f0(plVar11);
code_r0x0164a9b8:
              uVar10 = *(undefined8 *)(lVar23 + 8);
            }
            puVar20 = (undefined8 *)func_0x00f78acc(uVar10,lVar15);
            pcVar31 = (code *)*puVar20;
          }
          uVar13 = (*pcVar31)(plVar11,puVar20);
        }
      }
      else {
        if (bVar5) goto code_r0x0164a8ac;
code_r0x0164a7a4:
        uVar13 = (*pcVar31)(plVar1,plVar11,lVar15);
      }
code_r0x0164a8b8:
      lVar9 = lVar9 + 1;
      if (lVar9 == lVar30) {
        return uVar13;
      }
    } while( true );
  }
  lVar27 = *(long *)(uVar13 + 0x10);
  puVar20 = puRam0000000003d3ac00;
  uVar17 = uStack_b8;
  uVar21 = uStack_c0;
  if (lVar27 == 0) {
code_r0x0242716c:
    uVar12 = uVar21;
    uVar13 = uVar17;
    uVar14 = func_0x00f78af4();
    lVar27 = extraout_x9;
    uVar22 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar13 + 0x18) = uVar22 + 1;
  }
  else {
    uVar22 = *(uint *)(uVar13 + 0x18);
    uVar14 = uVar13;
    if (uVar22 != *(uint *)(lVar27 + 0x18)) goto code_r0x02427170;
    puVar20 = *(undefined8 **)(*(long *)(puRam0000000003d3ac00[3] + 0xc0) + 0x60);
    uVar14 = (*(code *)*puVar20)(uVar13,uVar22 + 1);
    lVar27 = *(long *)(uVar13 + 0x10);
    uVar22 = *(uint *)(uVar13 + 0x18);
    *(uint *)(uVar13 + 0x18) = uVar22 + 1;
    uVar17 = uVar13;
    uVar21 = uVar12;
    if (lVar27 == 0) goto code_r0x0242716c;
  }
  if (uVar22 < *(uint *)(lVar27 + 0x18)) {
    *(ulong *)(lVar27 + (long)(int)uVar22 * 8 + 0x20) = uVar12;
    *(int *)(uVar13 + 0x1c) = *(int *)(uVar13 + 0x1c) + 1;
    return uVar14;
  }
  uVar10 = func_0x00f78b24();
  auVar36 = func_0x00f78ac0(uVar10,0);
  lVar9 = auVar36._8_8_;
  lVar27 = auVar36._0_8_;
  puStack_c8 = &System_Collections_Generic_List_object___System_Collections_IList_Add;
  ppuStack_d0 = &puStack_b0;
  (*(code *)**(undefined8 **)(*(long *)(puVar20[3] + 0xc0) + 0x48))(lVar9,0x14);
  if (lVar27 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar31 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar31)();
  }
  pcVar31 = (code *)**(undefined8 **)(*(long *)(puVar20[3] + 0xc0) + 0x28);
  lVar30 = *(long *)(*(long *)(puVar20[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar30);
  }
  if (lVar9 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = func_0x00f78adc(lVar9,lVar30);
    if (lVar15 == 0) {
      func_0x00f78e5c(lVar9,lVar30);
      goto code_r0x0242734c;
    }
  }
  (*pcVar31)(lVar27,lVar15,*(undefined8 *)(*(long *)(puVar20[3] + 0xc0) + 0x28));
  iVar7 = (*(code *)**(undefined8 **)(*(long *)(puVar20[3] + 0xc0) + 0x68))(lVar27);
  return (ulong)(iVar7 - 1);
code_r0x029cc070:
  uVar18 = func_0x00f78b24();
  func_0x00f78ac0(uVar18,0);
  unaff_x23 = uVar10;
code_r0x029cc07c:
  auVar36._8_8_ = lVar27;
  auVar36._0_8_ = uVar12;
  puVar35 = &System_String__TrimStart;
  auVar37 = func_0x00f78af4();
  uVar17 = auVar37._0_8_;
  if ((auVar37._8_8_ == 0) || (*(long *)(auVar37._8_8_ + 0x18) == 0)) goto code_r0x029cc094;
  uVar10 = 0;
  pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x40);
  uVar13 = uVar14;
  auVar3 = auVar37;
  goto System_String__TrimHelper;
code_r0x029cbc4c:
  if (uVar22 == 0) {
    uVar13 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else if ((iVar7 != 0) || (uVar8 != uVar22)) {
    uVar10 = *(undefined8 *)((long)pppuVar4 + -0x10);
    uVar19 = *(undefined8 *)((long)pppuVar4 + -8);
    uVar18 = *(undefined8 *)((long)pppuVar4 + -0x20);
    uVar13 = *(ulong *)((long)pppuVar4 + -0x18);
    uVar16 = *(undefined8 *)((long)pppuVar4 + -0x30);
    uVar26 = *(undefined8 *)((long)pppuVar4 + -0x28);
System_String__InternalSubString:
    auVar3._8_8_ = auVar36._8_8_;
    auVar3._0_8_ = uVar13;
    uVar12 = auVar36._0_8_;
    uVar21 = (ulong)uVar22;
    *(undefined8 *)((long)pppuVar4 + -0x30) = uVar16;
    *(undefined8 *)((long)pppuVar4 + -0x28) = uVar26;
    *(undefined8 *)((long)pppuVar4 + -0x20) = uVar18;
    *(ulong *)((long)pppuVar4 + -0x18) = uVar13;
    *(undefined8 *)((long)pppuVar4 + -0x10) = uVar10;
    *(undefined8 *)((long)pppuVar4 + -8) = uVar19;
    puVar34 = (undefined1 *)((long)pppuVar4 + -0x10);
    uVar17 = func_0x00f834ac(uVar21);
    if (uVar17 != 0) {
      /*System.Buffer$$Memcpy*/ func_0x029426bc(uVar17 + 0x14,uVar12 + (long)auVar36._8_4_ * 2 + 0x14,uVar22 << 1,0);
      return uVar17;
    }
    puVar35 = &System_String__Trim;
    auVar37 = func_0x00f78af4();
    uVar17 = auVar37._0_8_;
    if ((auVar37._8_8_ != 0) && (*(long *)(auVar37._8_8_ + 0x18) != 0)) {
      uVar10 = 2;
      pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x30);
      auVar3 = auVar37;
System_String__TrimHelper:
      lVar27 = auVar3._8_8_;
      uVar14 = auVar3._0_8_;
      *(undefined8 *)((long)pppuVar4 + -0x40) = unaff_x24;
      *(undefined8 *)((long)pppuVar4 + -0x38) = unaff_x23;
      *(undefined1 (*) [16])((long)pppuVar4 + -0x30) = auVar36;
      *(ulong *)((long)pppuVar4 + -0x20) = uVar21;
      *(ulong *)((long)pppuVar4 + -0x18) = uVar13;
      *(undefined1 **)((long)pppuVar4 + -0x10) = puVar34;
      *(undefined **)((long)pppuVar4 + -8) = puVar35;
      puVar34 = (undefined1 *)((long)pppuVar4 + -0x10);
      uVar22 = *(uint *)(uVar14 + 0x10);
      uVar21 = (ulong)uVar22;
      if ((int)uVar10 == 1) {
        uVar12 = 0;
        uVar10 = unaff_x23;
code_r0x029cbfd8:
        do {
          uVar22 = (int)uVar21 - 1;
          uVar21 = (ulong)uVar22;
          if ((int)uVar22 < (int)uVar12) break;
          uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(uVar14,uVar21);
          unaff_x23 = uVar10;
          if (lVar27 == 0) goto code_r0x029cc07c;
          iVar7 = *(int *)(lVar27 + 0x18);
          if (iVar7 < 1) {
            iVar6 = 0;
          }
          else {
            iVar24 = 0;
            do {
              if (iVar7 == iVar24) goto code_r0x029cc070;
              iVar6 = iVar24;
            } while ((*(ushort *)(lVar27 + (long)iVar24 * 2 + 0x20) != uVar8) &&
                    (iVar24 = iVar24 + 1, iVar6 = iVar7, iVar7 != iVar24));
          }
        } while (iVar6 != iVar7);
      }
      else {
        if ((int)uVar22 < 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          do {
            uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(uVar14,uVar12);
            unaff_x23 = uVar10;
            if (lVar27 == 0) goto code_r0x029cc07c;
            iVar7 = *(int *)(lVar27 + 0x18);
            if (iVar7 < 1) {
              iVar6 = 0;
            }
            else {
              iVar24 = 0;
              do {
                if (iVar7 == iVar24) goto code_r0x029cc070;
                iVar6 = iVar24;
              } while ((*(ushort *)(lVar27 + (long)iVar24 * 2 + 0x20) != uVar8) &&
                      (iVar24 = iVar24 + 1, iVar6 = iVar7, iVar7 != iVar24));
            }
          } while ((iVar6 != iVar7) &&
                  (uVar8 = (int)uVar12 + 1, uVar12 = (ulong)uVar8,
                  (int)uVar8 < *(int *)(uVar14 + 0x10)));
        }
        if ((int)uVar10 != 0) {
          uVar21 = (ulong)*(uint *)(uVar14 + 0x10);
          goto code_r0x029cbfd8;
        }
        uVar22 = uVar22 - 1;
      }
      uVar10 = *(undefined8 *)((long)pppuVar4 + -0x10);
      uVar19 = *(undefined8 *)((long)pppuVar4 + -8);
      uVar18 = *(undefined8 *)((long)pppuVar4 + -0x20);
      uVar26 = *(undefined8 *)((long)pppuVar4 + -0x18);
      uVar16 = *(undefined8 *)((long)pppuVar4 + -0x30);
      uVar29 = *(undefined8 *)((long)pppuVar4 + -0x28);
      unaff_x24 = *(undefined8 *)((long)pppuVar4 + -0x40);
      unaff_x23 = *(undefined8 *)((long)pppuVar4 + -0x38);
      uVar17 = uVar14;
      goto System_String__CreateTrimmedString;
    }
    iVar7 = 2;
    pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x30);
    goto System_String__TrimHelper;
  }
  return uVar13;
code_r0x029cc094:
  iVar7 = 0;
  pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x40);
System_String__TrimHelper:
  *(undefined8 *)((long)pppuVar4 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pppuVar4 + -0x38) = unaff_x23;
  *(ulong *)((long)pppuVar4 + -0x30) = uVar12;
  *(long *)((long)pppuVar4 + -0x28) = auVar3._8_8_;
  *(ulong *)((long)pppuVar4 + -0x20) = uVar21;
  *(long *)((long)pppuVar4 + -0x18) = auVar3._0_8_;
  *(undefined1 **)((long)pppuVar4 + -0x10) = puVar34;
  *(undefined **)((long)pppuVar4 + -8) = puVar35;
  if ((bRam0000000003eb9460 & 1) == 0) {
    func_0x00f78a20(0x3d20620);
    bRam0000000003eb9460 = 1;
  }
  uVar22 = *(uint *)(uVar17 + 0x10);
  if (iVar7 == 1) {
    uVar12 = 0;
  }
  else {
    if ((int)uVar22 < 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      do {
        uVar10 = /*System.String$$get_Chars*/ func_0x029c5420(uVar17,uVar12);
        if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar13 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar10,0);
        if ((uVar13 & 1) == 0) {
          /*System.String$$get_Chars*/ func_0x029c5420(uVar17,uVar12);
          break;
        }
        uVar8 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar8;
      } while ((int)uVar8 < *(int *)(uVar17 + 0x10));
    }
    if (iVar7 == 0) {
      uVar22 = uVar22 - 1;
      goto code_r0x029cbf04;
    }
    uVar22 = *(uint *)(uVar17 + 0x10);
  }
  do {
    uVar22 = uVar22 - 1;
    if ((int)uVar22 < (int)uVar12) goto code_r0x029cbf04;
    uVar10 = /*System.String$$get_Chars*/ func_0x029c5420(uVar17,uVar22);
    if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar10,0);
  } while ((uVar13 & 1) != 0);
  /*System.String$$get_Chars*/ func_0x029c5420(uVar17,uVar12);
code_r0x029cbf04:
  uVar10 = *(undefined8 *)((long)pppuVar4 + -0x10);
  uVar19 = *(undefined8 *)((long)pppuVar4 + -8);
  uVar18 = *(undefined8 *)((long)pppuVar4 + -0x20);
  uVar26 = *(undefined8 *)((long)pppuVar4 + -0x18);
  uVar16 = *(undefined8 *)((long)pppuVar4 + -0x30);
  uVar29 = *(undefined8 *)((long)pppuVar4 + -0x28);
  unaff_x24 = *(undefined8 *)((long)pppuVar4 + -0x40);
  unaff_x23 = *(undefined8 *)((long)pppuVar4 + -0x38);
System_String__CreateTrimmedString:
  auVar36._8_8_ = uVar12;
  auVar36._0_8_ = uVar17;
  *(undefined8 *)((long)pppuVar4 + -0x30) = uVar16;
  *(undefined8 *)((long)pppuVar4 + -0x28) = uVar29;
  *(undefined8 *)((long)pppuVar4 + -0x20) = uVar18;
  *(undefined8 *)((long)pppuVar4 + -0x18) = uVar26;
  *(undefined8 *)((long)pppuVar4 + -0x10) = uVar10;
  *(undefined8 *)((long)pppuVar4 + -8) = uVar19;
  if ((bRam0000000003eb9461 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9461 = 1;
  }
  uVar22 = (uVar22 - (int)uVar12) + 1;
  if (uVar22 != *(uint *)(uVar17 + 0x10)) {
    if (uVar22 != 0) {
      uVar10 = *(undefined8 *)((long)pppuVar4 + -0x10);
      uVar19 = *(undefined8 *)((long)pppuVar4 + -8);
      uVar18 = *(undefined8 *)((long)pppuVar4 + -0x20);
      uVar13 = *(ulong *)((long)pppuVar4 + -0x18);
      uVar16 = *(undefined8 *)((long)pppuVar4 + -0x30);
      uVar26 = *(undefined8 *)((long)pppuVar4 + -0x28);
      goto System_String__InternalSubString;
    }
    uVar17 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  return uVar17;
}



// ============================================================
// RVA: 0x14e83e4 | Atlas.UI.Screens.SaveGameScreen.CanProgressToNextScreen
// ============================================================

bool Atlas_UI_Screens_SaveGameScreen__CanProgressToNextScreen(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (((*(long *)(param_1 + 0x90) != 0) &&
      (plVar1 = *(long **)(*(long *)(param_1 + 0x90) + 0x30), plVar1 != (long *)0x0)) &&
     (uVar2 = (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230)),
     (uVar2 & 1) != 0)) {
    return false;
  }
  return *(long *)(param_1 + 0x88) == 0;
}



// ============================================================
// RVA: 0x14e8438 | Atlas.UI.Screens.SaveGameScreen.CanStartNewTask
// ============================================================

bool Atlas_UI_Screens_SaveGameScreen__CanStartNewTask(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (((*(long *)(param_1 + 0x90) != 0) &&
      (plVar1 = *(long **)(*(long *)(param_1 + 0x90) + 0x30), plVar1 != (long *)0x0)) &&
     (uVar2 = (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230)),
     (uVar2 & 1) != 0)) {
    return false;
  }
  return *(long *)(param_1 + 0x88) == 0;
}



// ============================================================
// RVA: 0x14e848c | Atlas.UI.Screens.SaveGameScreen.NumValidSlots
// ============================================================

/* WARNING: Possible PIC construction at 0x014e84b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e874c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e84b8) */
/* WARNING: Removing unreachable block (ram,0x014e84bc) */
/* WARNING: Removing unreachable block (ram,0x014e84d0) */
/* WARNING: Removing unreachable block (ram,0x014e8750) */
/* WARNING: Removing unreachable block (ram,0x014e8754) */
/* WARNING: Removing unreachable block (ram,0x014e8760) */
/* WARNING: Removing unreachable block (ram,0x014e8770) */
/* WARNING: Removing unreachable block (ram,0x014e877c) */
/* WARNING: Removing unreachable block (ram,0x014e8b58) */
/* WARNING: Removing unreachable block (ram,0x014e8b5c) */
/* WARNING: Removing unreachable block (ram,0x014e8b70) */
/* WARNING: Removing unreachable block (ram,0x014e8b84) */
/* WARNING: Removing unreachable block (ram,0x014e8798) */
/* WARNING: Removing unreachable block (ram,0x014e879c) */
/* WARNING: Removing unreachable block (ram,0x014e87cc) */
/* WARNING: Removing unreachable block (ram,0x014e91dc) */
/* WARNING: Removing unreachable block (ram,0x014e87d4) */
/* WARNING: Removing unreachable block (ram,0x014e8824) */
/* WARNING: Removing unreachable block (ram,0x014e8840) */
/* WARNING: Removing unreachable block (ram,0x014e8860) */
/* WARNING: Removing unreachable block (ram,0x014e8868) */
/* WARNING: Removing unreachable block (ram,0x014e889c) */
/* WARNING: Removing unreachable block (ram,0x014e88a4) */
/* WARNING: Removing unreachable block (ram,0x014e88d8) */
/* WARNING: Removing unreachable block (ram,0x014e88e0) */
/* WARNING: Removing unreachable block (ram,0x014e8914) */
/* WARNING: Removing unreachable block (ram,0x014e891c) */
/* WARNING: Removing unreachable block (ram,0x014e8950) */
/* WARNING: Removing unreachable block (ram,0x014e8958) */
/* WARNING: Removing unreachable block (ram,0x014e8998) */
/* WARNING: Removing unreachable block (ram,0x014e89bc) */
/* WARNING: Removing unreachable block (ram,0x014e89c4) */
/* WARNING: Removing unreachable block (ram,0x014e89e0) */
/* WARNING: Removing unreachable block (ram,0x014e91e4) */
/* WARNING: Removing unreachable block (ram,0x014e8a00) */
/* WARNING: Removing unreachable block (ram,0x014e8a28) */
/* WARNING: Removing unreachable block (ram,0x014e8a38) */
/* WARNING: Removing unreachable block (ram,0x014e8a40) */
/* WARNING: Removing unreachable block (ram,0x014e8a68) */
/* WARNING: Removing unreachable block (ram,0x014e8a4c) */
/* WARNING: Removing unreachable block (ram,0x014e8a58) */
/* WARNING: Removing unreachable block (ram,0x014e8a74) */
/* WARNING: Removing unreachable block (ram,0x014e8bc0) */
/* WARNING: Removing unreachable block (ram,0x014e8bdc) */
/* WARNING: Removing unreachable block (ram,0x014e8bf4) */
/* WARNING: Removing unreachable block (ram,0x014e8bfc) */
/* WARNING: Removing unreachable block (ram,0x014e8c24) */
/* WARNING: Removing unreachable block (ram,0x014e8c08) */
/* WARNING: Removing unreachable block (ram,0x014e8c14) */
/* WARNING: Removing unreachable block (ram,0x014e8c30) */
/* WARNING: Removing unreachable block (ram,0x014e8c3c) */
/* WARNING: Removing unreachable block (ram,0x014e8c40) */
/* WARNING: Removing unreachable block (ram,0x014e8c4c) */
/* WARNING: Removing unreachable block (ram,0x014e8c64) */
/* WARNING: Removing unreachable block (ram,0x014e8c44) */
/* WARNING: Removing unreachable block (ram,0x014e8c6c) */
/* WARNING: Removing unreachable block (ram,0x014e8c7c) */
/* WARNING: Removing unreachable block (ram,0x014e8c84) */
/* WARNING: Removing unreachable block (ram,0x014e8ca0) */
/* WARNING: Removing unreachable block (ram,0x014e91ec) */
/* WARNING: Removing unreachable block (ram,0x014e8cbc) */
/* WARNING: Removing unreachable block (ram,0x014e8ce4) */
/* WARNING: Removing unreachable block (ram,0x014e8cf4) */
/* WARNING: Removing unreachable block (ram,0x014e8cfc) */
/* WARNING: Removing unreachable block (ram,0x014e8d24) */
/* WARNING: Removing unreachable block (ram,0x014e8d08) */
/* WARNING: Removing unreachable block (ram,0x014e8d14) */
/* WARNING: Removing unreachable block (ram,0x014e8d30) */
/* WARNING: Removing unreachable block (ram,0x014e8e0c) */
/* WARNING: Removing unreachable block (ram,0x014e8e3c) */
/* WARNING: Removing unreachable block (ram,0x014e8e54) */
/* WARNING: Removing unreachable block (ram,0x014e8e5c) */
/* WARNING: Removing unreachable block (ram,0x014e8e84) */
/* WARNING: Removing unreachable block (ram,0x014e8e68) */
/* WARNING: Removing unreachable block (ram,0x014e8e74) */
/* WARNING: Removing unreachable block (ram,0x014e8e90) */
/* WARNING: Removing unreachable block (ram,0x014e8e9c) */
/* WARNING: Removing unreachable block (ram,0x014e91c8) */
/* WARNING: Removing unreachable block (ram,0x014e8ea0) */
/* WARNING: Removing unreachable block (ram,0x014e8ea4) */
/* WARNING: Removing unreachable block (ram,0x014e8eb8) */
/* WARNING: Removing unreachable block (ram,0x014e8ebc) */
/* WARNING: Removing unreachable block (ram,0x014e8f08) */
/* WARNING: Removing unreachable block (ram,0x014e8f58) */
/* WARNING: Removing unreachable block (ram,0x014e8fa8) */
/* WARNING: Removing unreachable block (ram,0x014e8fb0) */
/* WARNING: Removing unreachable block (ram,0x014e9064) */
/* WARNING: Removing unreachable block (ram,0x014e90b4) */
/* WARNING: Removing unreachable block (ram,0x014e90cc) */
/* WARNING: Removing unreachable block (ram,0x014e90f4) */
/* WARNING: Removing unreachable block (ram,0x014e90e0) */
/* WARNING: Removing unreachable block (ram,0x014e9104) */
/* WARNING: Removing unreachable block (ram,0x014e9108) */
/* WARNING: Removing unreachable block (ram,0x014e9130) */
/* WARNING: Removing unreachable block (ram,0x014e9154) */
/* WARNING: Removing unreachable block (ram,0x014e9168) */
/* WARNING: Removing unreachable block (ram,0x014e8d40) */
/* WARNING: Removing unreachable block (ram,0x014e8d50) */
/* WARNING: Removing unreachable block (ram,0x014e8d58) */
/* WARNING: Removing unreachable block (ram,0x014e8d80) */
/* WARNING: Removing unreachable block (ram,0x014e8d64) */
/* WARNING: Removing unreachable block (ram,0x014e8d70) */
/* WARNING: Removing unreachable block (ram,0x014e8d8c) */
/* WARNING: Removing unreachable block (ram,0x014e8da8) */
/* WARNING: Removing unreachable block (ram,0x014e8db0) */
/* WARNING: Removing unreachable block (ram,0x014e8db4) */
/* WARNING: Removing unreachable block (ram,0x014e8db8) */
/* WARNING: Removing unreachable block (ram,0x014e8dd0) */
/* WARNING: Removing unreachable block (ram,0x014e91a8) */
/* WARNING: Removing unreachable block (ram,0x014e8de4) */
/* WARNING: Removing unreachable block (ram,0x014e8df8) */
/* WARNING: Removing unreachable block (ram,0x014e8e00) */
/* WARNING: Removing unreachable block (ram,0x014e8a84) */
/* WARNING: Removing unreachable block (ram,0x014e8a94) */
/* WARNING: Removing unreachable block (ram,0x014e8a9c) */
/* WARNING: Removing unreachable block (ram,0x014e8ac4) */
/* WARNING: Removing unreachable block (ram,0x014e8aa8) */
/* WARNING: Removing unreachable block (ram,0x014e8ab4) */
/* WARNING: Removing unreachable block (ram,0x014e8ad0) */
/* WARNING: Removing unreachable block (ram,0x014e8ae4) */
/* WARNING: Removing unreachable block (ram,0x014e8afc) */
/* WARNING: Removing unreachable block (ram,0x014e91b4) */
/* WARNING: Removing unreachable block (ram,0x014e8b10) */
/* WARNING: Removing unreachable block (ram,0x014e8b1c) */
/* WARNING: Removing unreachable block (ram,0x014e8b24) */
/* WARNING: Removing unreachable block (ram,0x014e8b28) */

undefined8 Atlas_UI_Screens_SaveGameScreen__NumValidSlots(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  puVar10 = &stack0xfffffffffffffff0;
  lVar9 = 0;
  uVar6 = 0;
  if (*(ulong *)(param_1 + 0x70) == 0) {
    puVar11 = &Atlas_Save_SaveManager__SlotSaveData;
    auVar12 = func_0x00f78af4();
    puVar3 = &stack0xffffffffffffffd0;
  }
  else {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulong *)(param_1 + 0x70);
    puVar11 = (undefined *)0x14e84b8;
    puVar3 = &stack0xffffffffffffffd0;
  }
  while( true ) {
    *(undefined1 **)(puVar3 + -0x10) = puVar10;
    *(undefined **)(puVar3 + -8) = puVar11;
    if (2 < auVar12._8_4_) {
      return 0;
    }
    lVar8 = *(long *)(auVar12._0_8_ + 0xf0);
    if (lVar8 == 0) {
      func_0x00f78af4();
    }
    else if (auVar12._8_4_ < *(uint *)(lVar8 + 0x18)) {
      return *(undefined8 *)(lVar8 + (auVar12._8_8_ & 0xffffffff) * 8 + 0x20);
    }
    uVar4 = func_0x00f78b24();
    auVar13 = func_0x00f78ac0(uVar4,0);
    lVar8 = auVar13._0_8_;
    *(undefined8 *)(puVar3 + -0x70) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x68) = unaff_x27;
    *(undefined8 *)(puVar3 + -0x60) = unaff_x26;
    *(long *)(puVar3 + -0x58) = unaff_x25;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x48) = unaff_x23;
    *(undefined8 **)(puVar3 + -0x40) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x38) = uVar6;
    *(long *)(puVar3 + -0x30) = lVar9;
    *(long *)(puVar3 + -0x28) = param_1;
    *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x18) = &Atlas_UI_Screens_SaveGameScreen__SetSlotData;
    puVar10 = puVar3 + -0x20;
    param_1 = 0x3d28a70;
    if ((bRam0000000003eb4c1f & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d1fc78);
      func_0x00f78a20(0x3d1fcc0);
      func_0x00f78a20(0x3d2c8f8);
      func_0x00f78a20(0x3d20618);
      func_0x00f78a20(0x3d57520);
      func_0x00f78a20(0x3d57528);
      func_0x00f78a20(0x3d57548);
      func_0x00f78a20(0x3d57550);
      func_0x00f78a20(0x3d57570);
      func_0x00f78a20(0x3d57588);
      func_0x00f78a20(0x3d575c0);
      func_0x00f78a20(0x3d220f0);
      func_0x00f78a20(0x3d1d270);
      func_0x00f78a20(0x3d22180);
      func_0x00f78a20(0x3d22910);
      func_0x00f78a20(0x3d3fe40);
      func_0x00f78a20(0x3d24dd0);
      func_0x00f78a20(0x3d63be8);
      func_0x00f78a20(0x3d63bf0);
      func_0x00f78a20(0x3d63bf8);
      func_0x00f78a20(0x3d28a70);
      func_0x00f78a20(0x3d41298);
      func_0x00f78a20(0x3d412a8);
      func_0x00f78a20(0x3d257d8);
      func_0x00f78a20(0x3d7cca0);
      func_0x00f78a20(0x3d72130);
      func_0x00f78a20(0x3d673c0);
      bRam0000000003eb4c1f = 1;
    }
    *(undefined8 *)(puVar3 + -0x80) = 0;
    *(undefined8 *)(puVar3 + -0x78) = 0;
    *(undefined8 *)(puVar3 + -0x88) = 0;
    *(undefined4 *)(puVar3 + -0x8c) = 0;
    *(undefined4 *)(puVar3 + -0x90) = 0;
    *(undefined8 *)(puVar3 + -0xa0) = 0;
    *(undefined8 *)(puVar3 + -0x98) = 0;
    *(undefined8 *)(puVar3 + -0xb0) = 0;
    *(undefined8 *)(puVar3 + -0xa8) = 0;
    *(undefined4 *)(puVar3 + -0xb4) = 0;
    *(undefined8 *)(puVar3 + -0xc0) = 0;
    *(undefined4 *)(puVar3 + -200) = 0;
    lVar9 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass13_0_TypeInfo*/ uRam0000000003d28a70);
    /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass13_0$$.ctor*/ func_0x0156608c(lVar9,0);
    if (lVar9 == 0) break;
    *(long *)(lVar9 + 0x10) = lVar8;
    *(int *)(lVar9 + 0x18) = auVar13._8_4_;
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41298);
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x68), lVar5 == 0)) break;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (*(uint *)(lVar5 + 0x18) <= uVar1) {
      uVar6 = func_0x00f78b24();
      func_0x00f78ac0(uVar6,0);
      func_0x00f78af4();
      goto code_r0x014e9384;
    }
    auVar12._8_4_ = uVar1;
    auVar12._0_8_ = *(long *)(lVar8 + 0x70);
    auVar12._12_4_ = 0;
    if (*(long *)(lVar8 + 0x70) == 0) break;
    unaff_x26 = *(undefined8 *)(lVar5 + (ulong)uVar1 * 8 + 0x20);
    puVar11 = &UNK_014e8750;
    puVar3 = puVar3 + -0x100;
    uVar6 = auVar13._8_8_;
    unaff_x25 = lVar8;
  }
  func_0x00f78af4();
  puVar7 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar7 = *unaff_x22;
  ___cxa_throw(puVar7,&DAT_03a5ed38,0);
code_r0x014e9384:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x14e9388);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x14e8534 | Atlas.UI.Screens.SaveGameScreen.SetSlotData
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014e91c8) */
/* WARNING: Removing unreachable block (ram,0x014e8c44) */

void Atlas_UI_Screens_SaveGameScreen__SetSlotData(long param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  long *unaff_x22;
  int iVar20;
  long lVar21;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int aiStack_c8 [4];
  int iStack_b8;
  undefined8 uStack_b0;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((bRam0000000003eb4c1f & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d1fc78);
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d2c8f8);
    func_0x00f78a20(0x3d20618);
    func_0x00f78a20(0x3d57520);
    func_0x00f78a20(0x3d57528);
    func_0x00f78a20(0x3d57548);
    func_0x00f78a20(0x3d57550);
    func_0x00f78a20(0x3d57570);
    func_0x00f78a20(0x3d57588);
    func_0x00f78a20(0x3d575c0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d63be8);
    func_0x00f78a20(0x3d63bf0);
    func_0x00f78a20(0x3d63bf8);
    func_0x00f78a20(0x3d28a70);
    func_0x00f78a20(0x3d41298);
    func_0x00f78a20(0x3d412a8);
    func_0x00f78a20(0x3d257d8);
    func_0x00f78a20(0x3d7cca0);
    func_0x00f78a20(0x3d72130);
    func_0x00f78a20(0x3d673c0);
    bRam0000000003eb4c1f = 1;
  }
  uStack_70 = 0;
  lStack_68 = 0;
  iStack_78 = 0;
  iStack_74 = 0;
  iStack_7c = 0;
  iStack_80 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  iStack_a4 = 0;
  uStack_b0 = 0;
  iStack_b8 = 0;
  lVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass13_0_TypeInfo*/ uRam0000000003d28a70);
  /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass13_0$$.ctor*/ func_0x0156608c(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = param_1;
    *(undefined4 *)(lVar5 + 0x18) = param_2;
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41298);
    if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x68), lVar6 != 0)) {
      if (*(uint *)(lVar6 + 0x18) <= *(uint *)(lVar5 + 0x18)) {
        uVar8 = func_0x00f78b24();
        func_0x00f78ac0(uVar8,0);
LAB_014e91d4:
        func_0x00f78af4();
        goto code_r0x014e9384;
      }
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar21 = *(long *)(lVar6 + (ulong)*(uint *)(lVar5 + 0x18) * 8 + 0x20);
        lVar6 = /*Atlas.Save.SaveManager$$SlotSaveData*/ func_0x014e84e8();
        if ((lVar21 != 0) && (*(long *)(lVar21 + 0x18) != 0)) {
          /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(*(long *)(lVar21 + 0x18),0);
          if ((*(long *)(lVar21 + 0x20) != 0) &&
             (/*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(*(long *)(lVar21 + 0x20),0), lVar6 != 0)) {
            iVar3 = /*Atlas.Save.SaveData$$get_IsValidSaveData*/ func_0x014e7a58(lVar6);
            lVar7 = *(long *)(lVar21 + 0x58);
            if (iVar3 == 0) {
              if (lVar7 != 0) {
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,0,0);
                if (*(long *)(lVar21 + 0x60) != 0) {
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar21 + 0x60),1,0);
                  plVar9 = *(long **)(lVar21 + 0x68);
                  if (plVar9 != (long *)0x0) {
                    (**(code **)(*plVar9 + 0x2a8))
                              (*(undefined4 *)(lVar21 + 0x80),*(undefined4 *)(lVar21 + 0x84),
                               *(undefined4 *)(lVar21 + 0x88),*(undefined4 *)(lVar21 + 0x8c),plVar9,
                               *(undefined8 *)(*plVar9 + 0x2b0));
                    lVar6 = *(long *)(lVar21 + 0x20);
                    unaff_x22 = (long *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                    puVar10 = (undefined8 *)0x3d63be8;
                    goto code_r0x014e9154;
                  }
                }
              }
            }
            else if (lVar7 != 0) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,1,0);
              uStack_70 = *(undefined8 *)(lVar6 + 0x18);
              lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d412a8);
              if (lVar7 == 0) goto LAB_014e91d4;
              if (*(long *)(lVar7 + 0x88) == 0) {
                func_0x00f78af4();
                goto code_r0x014e9384;
              }
              /*Core.Localisation.LocalisationManager$$TryGetTimeFormatOverrideString*/ func_0x016504e8(*(long *)(lVar7 + 0x88),&uStack_90,&uStack_98,0);
              uStack_a0 = /*System.DateTime$$get_Date*/ func_0x02a8e25c(&uStack_70,0);
              unaff_x22 = (long *)/*System.DateTime$$ToString*/ func_0x02a8f2dc(&uStack_a0,uStack_98,0);
              uVar8 = /*System.DateTime$$ToString*/ func_0x02a8f2dc(&uStack_70,uStack_90,0);
              plVar9 = *(long **)(lVar21 + 0x28);
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 0x558))(plVar9,unaff_x22,*(undefined8 *)(*plVar9 + 0x560));
                plVar9 = *(long **)(lVar21 + 0x30);
                if (plVar9 != (long *)0x0) {
                  (**(code **)(*plVar9 + 0x558))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x560));
                  iStack_74 = 0;
                  if ((*(long *)(param_1 + 0x78) != 0) &&
                     (lVar7 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar7 != 0)) {
                    uVar8 = /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar7,&lStack_68,uRam0000000003d57550);
                    iVar3 = iStack_74;
                    iStack_74 = /*Atlas.UI.Screens.SaveGameScreen$$GetUnlockedLoadoutAmount*/ func_0x014e9418(uVar8,lStack_68,lVar6);
                    iStack_74 = iStack_74 + iVar3;
                    if ((*(long *)(param_1 + 0x78) != 0) &&
                       (lVar7 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar7 != 0)) {
                      uVar8 = /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar7,&lStack_68,uRam0000000003d57588);
                      iVar3 = iStack_74;
                      iStack_74 = /*Atlas.UI.Screens.SaveGameScreen$$GetUnlockedLoadoutAmount*/ func_0x014e9418(uVar8,lStack_68,lVar6);
                      iStack_74 = iStack_74 + iVar3;
                      if ((*(long *)(param_1 + 0x78) != 0) &&
                         (lVar7 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar7 != 0)) {
                        uVar8 = /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar7,&lStack_68,uRam0000000003d575c0);
                        iVar3 = iStack_74;
                        iStack_74 = /*Atlas.UI.Screens.SaveGameScreen$$GetUnlockedLoadoutAmount*/ func_0x014e9418(uVar8,lStack_68,lVar6);
                        iStack_74 = iStack_74 + iVar3;
                        if ((*(long *)(param_1 + 0x78) != 0) &&
                           (lVar7 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar7 != 0)) {
                          uVar8 = /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar7,&lStack_68,uRam0000000003d57570);
                          iVar3 = iStack_74;
                          iStack_74 = /*Atlas.UI.Screens.SaveGameScreen$$GetUnlockedLoadoutAmount*/ func_0x014e9418(uVar8,lStack_68,lVar6);
                          iStack_74 = iStack_74 + iVar3;
                          if ((*(long *)(param_1 + 0x78) != 0) &&
                             (lVar7 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar7 != 0)) {
                            uVar8 = /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar7,&lStack_68,uRam0000000003d57520);
                            iVar3 = iStack_74;
                            iStack_74 = /*Atlas.UI.Screens.SaveGameScreen$$GetUnlockedLoadoutAmount*/ func_0x014e9418(uVar8,lStack_68,lVar6);
                            iStack_74 = iStack_74 + iVar3;
                            unaff_x22 = *(long **)(lVar21 + 0x38);
                            uVar8 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_74,0);
                            if (unaff_x22 != (long *)0x0) {
                              (**(code **)(*unaff_x22 + 0x558))
                                        (unaff_x22,uVar8,*(undefined8 *)(*unaff_x22 + 0x560));
                              iStack_78 = 0;
                              if (((*(long *)(param_1 + 0x78) != 0) &&
                                  (lVar7 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar7 != 0))
                                 && (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar7,&lStack_68,uRam0000000003d57548),
                                    lStack_68 != 0)) {
                                unaff_x22 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_68,uRam0000000003d3fe40);
                                if (unaff_x22 != (long *)0x0) {
                                  iVar3 = 0;
                                  iVar20 = 0;
                                  do {
                                    lVar7 = *unaff_x22;
                                    uVar15 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                    if (uVar15 != 0) {
                                      piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                                          puVar10 = (undefined8 *)
                                                    (lVar7 + (long)*piVar17 * 0x10 + 0x138);
                                          goto LAB_014e8a74;
                                        }
                                        piVar17 = piVar17 + 4;
                                        uVar15 = uVar15 - 1;
                                      } while (uVar15 != 0);
                                    }
                                    puVar10 = (undefined8 *)
                                              func_0x00fac1f0(unaff_x22,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_014e8a74:
                                    uVar15 = (*(code *)*puVar10)(unaff_x22,puVar10[1]);
                                    if ((uVar15 & 1) == 0) {
                                      aiStack_c8[0] = 0x235;
                                      iStack_b8 = 1;
                                      if (unaff_x22 == (long *)0x0) goto code_r0x014e8c3c;
                                      lVar7 = *unaff_x22;
                                      uVar15 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                      if (uVar15 == 0) goto code_r0x014e8c14;
                                      piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                      goto code_r0x014e8bfc;
                                    }
                                    lVar7 = *unaff_x22;
                                    uVar15 = (ulong)*(ushort *)(lVar7 + 0x12a);
                                    if (uVar15 != 0) {
                                      piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar17 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
                                          puVar10 = (undefined8 *)
                                                    (lVar7 + (long)*piVar17 * 0x10 + 0x138);
                                          goto code_r0x014e8ad0;
                                        }
                                        piVar17 = piVar17 + 4;
                                        uVar15 = uVar15 - 1;
                                      } while (uVar15 != 0);
                                    }
                                    puVar10 = (undefined8 *)
                                              func_0x00fac1f0(unaff_x22,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x014e8ad0:
                                    plVar9 = (long *)(*(code *)*puVar10)(unaff_x22,puVar10[1]);
                                    if (plVar9 != (long *)0x0) {
                                      if ((*(byte *)(*plVar9 + 300) <
                                           *(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300)) ||
                                         (*(long *)(*(long *)(*plVar9 + 200) +
                                                    (ulong)*(byte *)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 300) * 8
                                                   + -8) != /*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618))
                                      goto code_r0x014e91b4;
                                    }
                                    if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0)
                                       && (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
                                      func_0x00f78ad0();
                                    }
                                    iVar4 = /*Atlas.Stats.UnlockManager$$GetChallengesCompletedCountForChapter*/ func_0x01520940(plVar9,lVar6,0);
                                    iVar3 = iVar4 + iVar3;
                                    iStack_78 = iVar3;
                                    iVar4 = /*Atlas.Stats.UnlockManager$$GetChallengesNotCompletedCountForChapter*/ func_0x01520b7c(plVar9,lVar6,0);
                                    iVar20 = iVar4 + iVar20;
                                  } while( true );
                                }
                                func_0x00f78af4();
                                goto code_r0x014e9384;
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
  }
  goto LAB_014e9360;
  while( true ) {
    piVar17 = piVar17 + 4;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) break;
code_r0x014e8bfc:
    if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
      goto code_r0x014e8c30;
    }
  }
code_r0x014e8c14:
  puVar10 = (undefined8 *)func_0x00fac1f0(unaff_x22,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014e8c30:
  (*(code *)*puVar10)(unaff_x22,puVar10[1]);
code_r0x014e8c3c:
  bVar2 = aiStack_c8[0] == 0x235;
  if (bVar2) {
    iStack_b8 = 0;
  }
  iStack_7c = 0;
  iStack_80 = 0;
  if (((*(long *)(param_1 + 0x78) != 0) &&
      (lVar7 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar7 != 0)) &&
     (/*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar7,&lStack_68,uRam0000000003d57528), lStack_68 != 0)) {
    plVar9 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_68,uRam0000000003d3fe40);
    if (plVar9 != (long *)0x0) {
      iVar4 = 0;
      iVar3 = 0;
      do {
        lVar7 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x014e8d30;
            }
            piVar17 = piVar17 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x014e8d30:
        uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar15 & 1) == 0) {
          aiStack_c8[(int)(uint)!bVar2] = 0x28f;
          iVar4 = iStack_b8;
          iVar3 = iStack_b8 + 1;
          iStack_b8 = iVar3;
          if (plVar9 == (long *)0x0) goto code_r0x014e8e9c;
          lVar7 = *plVar9;
          uVar15 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar15 == 0) goto code_r0x014e8e74;
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto code_r0x014e8e5c;
        }
        lVar7 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x014e8d8c;
            }
            piVar17 = piVar17 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x014e8d8c:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (plVar11 != (long *)0x0) {
          if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.Definitions.ArcadeEventDefinition_TypeInfo*/ lRam0000000003d1fc78 + 300)) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ArcadeEventDefinition_TypeInfo*/ lRam0000000003d1fc78 + 300) * 8
                       + -8) != /*Atlas.Definitions.ArcadeEventDefinition_TypeInfo*/ lRam0000000003d1fc78)) goto code_r0x014e91a8;
        }
        uVar15 = /*Atlas.Arcade.ArcadeSave$$HasGoldMedal*/ func_0x01454848(plVar11,lVar6,0);
        if ((uVar15 & 1) != 0) {
          iVar3 = iVar3 + 1;
          iStack_7c = iVar3;
        }
        iVar4 = iVar4 + 1;
        iStack_80 = iVar4;
      } while( true );
    }
    func_0x00f78af4();
    goto code_r0x014e9384;
  }
  goto LAB_014e9360;
code_r0x014e91a8:
  func_0x00f78e5c(plVar11);
  goto code_r0x014e9384;
code_r0x014e91b4:
  func_0x00f78e5c(plVar9);
  goto code_r0x014e9384;
  while( true ) {
    piVar17 = piVar17 + 4;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) break;
code_r0x014e8e5c:
    if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
      goto code_r0x014e8e90;
    }
  }
code_r0x014e8e74:
  puVar10 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014e8e90:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
code_r0x014e8e9c:
  if ((iVar3 != 0) && (aiStack_c8[iVar4] == 0x28f)) {
    iStack_b8 = iVar4;
  }
  plVar9 = *(long **)(lVar21 + 0x40);
  uVar8 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_78,0);
  iStack_a4 = iStack_78 + iVar20;
  uVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_a4,0);
  uVar8 = /*System.String$$Concat*/ func_0x029be39c(uVar8,/*STR('/')*/ uRam0000000003d673c0,uVar12,0);
  unaff_x22 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x558))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x560));
    unaff_x22 = *(long **)(lVar21 + 0x48);
    uVar8 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_7c,0);
    uVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_80,0);
    uVar8 = /*System.String$$Concat*/ func_0x029be39c(uVar8,/*STR('/')*/ uRam0000000003d673c0,uVar12,0);
    if (unaff_x22 != (long *)0x0) {
      (**(code **)(*unaff_x22 + 0x558))(unaff_x22,uVar8,*(undefined8 *)(*unaff_x22 + 0x560));
      Atlas_UI_Screens_AtlasScreen_ArcadeModeSelectScreenBehaviour__ArcadeModeSelectScreen_TransitionData___ReLayoutLayoutAndContentSizeFitters
                (param_1,*(undefined8 *)(lVar21 + 0x90),uRam0000000003d2c8f8);
      Atlas_UI_Screens_AtlasScreen_ArcadeModeSelectScreenBehaviour__ArcadeModeSelectScreen_TransitionData___ReLayoutLayoutAndContentSizeFitters
                (param_1,*(undefined8 *)(lVar21 + 0x98),uRam0000000003d2c8f8);
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d412a8);
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0x88) != 0)) {
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(lVar7 + 0x88),/*STR('SETTINGS_SCREEN_PLAY_TIME_FORMAT')*/ uRam0000000003d72130,&uStack_88,0);
        uVar8 = uStack_88;
        plVar9 = *(long **)(lVar21 + 0x50);
        uStack_b0 = *(undefined8 *)(lVar6 + 0xd0);
        uStack_cc = /*System.TimeSpan$$get_Hours*/ func_0x029f0304(&uStack_b0,0);
        uVar12 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_cc);
        uVar12 = /*System.String$$Format*/ func_0x029bc688(/*STR('{0:D2}')*/ uRam0000000003d7cca0,uVar12,0);
        uStack_b0 = *(undefined8 *)(lVar6 + 0xd0);
        uStack_d0 = /*System.TimeSpan$$get_Minutes*/ func_0x029f0348(&uStack_b0,0);
        uVar13 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_d0);
        uVar13 = /*System.String$$Format*/ func_0x029bc688(/*STR('{0:D2}')*/ uRam0000000003d7cca0,uVar13,0);
        uVar8 = /*System.String$$Format*/ func_0x029bcac4(uVar8,uVar12,uVar13,0);
        unaff_x22 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x558))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x560));
          lVar6 = *(long *)(lVar21 + 0x18);
          unaff_x22 = (long *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(unaff_x22,lVar5,uRam0000000003d63bf0,0);
          if (lVar6 != 0) {
            /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar6,unaff_x22,0);
            if (*(long *)(param_1 + 0x70) != 0) {
              plVar9 = *(long **)(lVar21 + 0x68);
              if (*(int *)(lVar5 + 0x18) == *(int *)(*(long *)(param_1 + 0x70) + 0xf8)) {
                puVar14 = (undefined4 *)(lVar21 + 0x70);
                puVar16 = (undefined4 *)(lVar21 + 0x74);
                puVar18 = (undefined4 *)(lVar21 + 0x78);
                puVar19 = (undefined4 *)(lVar21 + 0x7c);
              }
              else {
                puVar14 = (undefined4 *)(lVar21 + 0x80);
                puVar16 = (undefined4 *)(lVar21 + 0x84);
                puVar18 = (undefined4 *)(lVar21 + 0x88);
                puVar19 = (undefined4 *)(lVar21 + 0x8c);
              }
              if (plVar9 != (long *)0x0) {
                (**(code **)(*plVar9 + 0x2a8))
                          (*puVar14,*puVar16,*puVar18,*puVar19,plVar9,
                           *(undefined8 *)(*plVar9 + 0x2b0));
                if (*(long *)(lVar21 + 0x60) != 0) {
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar21 + 0x60),0,0);
                  lVar6 = *(long *)(lVar21 + 0x20);
                  unaff_x22 = (long *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                  puVar10 = (undefined8 *)0x3d63bf8;
code_r0x014e9154:
                  /*System.Action$$.ctor*/ func_0x02924c80(unaff_x22,lVar5,*puVar10,0);
                  if (lVar6 != 0) {
                    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar6,unaff_x22,0);
                    Atlas_UI_Screens_AtlasScreen_ArcadeModeSelectScreenBehaviour__ArcadeModeSelectScreen_TransitionData___ReLayoutLayoutAndContentSizeFitters
                              (param_1,*(undefined8 *)(lVar21 + 0xa0),uRam0000000003d2c8f8);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_014e9360:
  func_0x00f78af4();
  plVar9 = (long *)___cxa_allocate_exception(8);
  *plVar9 = *unaff_x22;
  ___cxa_throw(plVar9,&DAT_03a5ed38,0);
code_r0x014e9384:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14e9388);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14e9418 | Atlas.UI.Screens.SaveGameScreen.GetUnlockedLoadoutAmount
// ============================================================

/* WARNING: Type propagation algorithm not settling */

long * Atlas_UI_Screens_SaveGameScreen__GetUnlockedLoadoutAmount
                 (undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long **pplVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  int extraout_w1;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined8 uVar23;
  uint uVar24;
  uint uVar25;
  long *unaff_x22;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  int iVar29;
  undefined8 *******pppppppuVar30;
  undefined *puVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  long *plStack_80;
  long *plStack_78;
  undefined8 *******pppppppuStack_70;
  undefined *puStack_68;
  long *plVar15;
  
  if ((bRam0000000003eb4c21 & 1) == 0) {
    func_0x00f78a20(0x3d1fd98);
    func_0x00f78a20(0x3d220b0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d257d8);
    func_0x00f78a20(0x3d25b48);
    bRam0000000003eb4c21 = 1;
  }
  if (param_2 == 0) {
    func_0x00f78af4();
  }
  else {
    plVar8 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(param_2,uRam0000000003d3fe40);
    if (plVar8 != (long *)0x0) {
      plVar22 = (long *)0x0;
      uVar12 = 0x3d22180;
      uVar28 = 0x3d1d270;
code_r0x014e9504:
      lVar17 = *plVar8;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_014e9550;
          }
          piVar20 = piVar20 + 4;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
LAB_014e9550:
      uVar19 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar19 & 1) != 0) {
        lVar17 = *plVar8;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar9 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto code_r0x014e95ac;
            }
            piVar20 = piVar20 + 4;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x014e95ac:
        unaff_x22 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (unaff_x22 != (long *)0x0) {
          lVar17 = *unaff_x22;
          if ((*(byte *)(lVar17 + 300) < *(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300)) ||
             (*(long *)(*(long *)(lVar17 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48 + 300) * 8 +
                       -8) != /*Atlas.Definitions.WheelsDefinition_TypeInfo*/ lRam0000000003d25b48)) {
            if ((*(byte *)(lVar17 + 300) < *(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300)) ||
               ((*(long *)(*(long *)(lVar17 + 200) +
                           (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 + -8) !=
                 /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 || ((char)unaff_x22[0xc] != '\0')))) goto code_r0x014e9504;
            uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar19 != 0) {
              piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == /*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0) {
                  puVar9 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                  goto code_r0x014e96a0;
                }
                piVar20 = piVar20 + 4;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(unaff_x22,/*Core.Definitions.IDefinition_TypeInfo*/ lRam0000000003d220b0,0);
code_r0x014e96a0:
            unaff_x22 = (long *)(*(code *)*puVar9)(unaff_x22,puVar9[1]);
            if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar6 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(unaff_x22,param_3,0);
          }
          else {
            if (((char)unaff_x22[0xe] != '\0') || ((char)unaff_x22[0xc] != '\0'))
            goto code_r0x014e9504;
            unaff_x22 = (long *)unaff_x22[3];
            if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar6 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0152164c(unaff_x22,param_3,0);
          }
          plVar22 = (long *)(ulong)(uint)((int)plVar22 + iVar6);
        }
        goto code_r0x014e9504;
      }
      lVar17 = 0;
      do {
        if (plVar8 != (long *)0x0) {
          lVar18 = *plVar8;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar9 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                goto code_r0x014e973c;
              }
              piVar20 = piVar20 + 4;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x014e973c:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
        if (lVar17 == 0) {
          return plVar22;
        }
        func_0x00f78ac0(lVar17,0);
        if (extraout_w1 != 1) goto code_r0x014e97c0;
        plVar10 = (long *)___cxa_begin_catch();
        lVar17 = *plVar10;
        ___cxa_end_catch();
      } while( true );
    }
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x14e9778);
  (*pcVar3)();
code_r0x014e97c0:
  plVar10 = (long *)__Unwind_Resume();
  pplVar4 = &plStack_80;
  puStack_68 = &Atlas_UI_Screens_SaveGameScreen__OnControllerDeletePressed;
  pppppppuVar30 = &pppppppuStack_70;
  plStack_80 = plVar22;
  plStack_78 = plVar8;
  pppppppuStack_70 = (undefined8 *******)&stack0xfffffffffffffff0;
  plVar8 = (long *)Atlas_UI_Screens_SaveGameScreen__FindCurrentlySelectedSaveSlotIndex();
  auVar34._8_8_ = plVar8;
  auVar34._0_8_ = plVar10;
  if ((int)plVar8 == -1) {
    return plVar8;
  }
  if ((plVar10[0xe] == 0) || (lVar18 = /*Atlas.Save.SaveManager$$SlotSaveData*/ func_0x014e84e8(plVar10[0xe],plVar8), lVar18 == 0)) {
    puVar31 = &Atlas_UI_Screens_SaveGameScreen__OnDeleteButtonPressed;
    auVar34 = func_0x00f78af4();
  }
  else {
    uVar19 = /*Atlas.Save.SaveData$$get_IsValidSaveData*/ func_0x014e7a58();
    if ((int)uVar19 == 0) {
      return (long *)uVar19;
    }
    pplVar4 = (long **)&stack0xffffffffffffffa0;
    plVar10 = plStack_78;
    plVar8 = plStack_80;
    pppppppuVar30 = pppppppuStack_70;
    puVar31 = puStack_68;
  }
  lVar18 = auVar34._0_8_;
  *(undefined8 *)((long)pplVar4 + -0x40) = 0x3d1d270;
  *(undefined8 *)((long)pplVar4 + -0x38) = 0x3d22180;
  *(long **)((long)pplVar4 + -0x30) = unaff_x22;
  *(long *)((long)pplVar4 + -0x28) = lVar17;
  *(long **)((long)pplVar4 + -0x20) = plVar8;
  *(long **)((long)pplVar4 + -0x18) = plVar10;
  *(undefined8 ********)((long)pplVar4 + -0x10) = pppppppuVar30;
  *(undefined **)((long)pplVar4 + -8) = puVar31;
  if ((bRam0000000003eb4c22 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d63c00);
    func_0x00f78a20(0x3d63c08);
    func_0x00f78a20(0x3d63c10);
    func_0x00f78a20(0x3d28a78);
    func_0x00f78a20(0x3d412a8);
    func_0x00f78a20(0x3d6d128);
    func_0x00f78a20(0x3d720f0);
    func_0x00f78a20(0x3d6d108);
    func_0x00f78a20(0x3d720e8);
    func_0x00f78a20(0x3d720f8);
    bRam0000000003eb4c22 = 1;
  }
  lVar11 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass18_0_TypeInfo*/ uRam0000000003d28a78);
  uVar19 = /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass18_0$$.ctor*/ func_0x0156610c(lVar11,0);
  plVar8 = auVar34._8_8_;
  lVar17 = 0x3d28a78;
  uVar27 = uVar12;
  if (lVar11 == 0) {
code_r0x014e9ab8:
    auVar34 = func_0x00f78af4();
    plVar22 = auVar34._8_8_;
    lVar13 = auVar34._0_8_;
    *(long *)((long)pplVar4 + -0x70) = lVar17;
    *(long **)((long)pplVar4 + -0x68) = plVar8;
    *(long *)((long)pplVar4 + -0x60) = lVar11;
    *(long *)((long)pplVar4 + -0x58) = lVar18;
    *(undefined1 **)((long)pplVar4 + -0x50) = (undefined1 *)((long)pplVar4 + -0x10);
    *(undefined **)((long)pplVar4 + -0x48) =
         &Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteUnusedPrompt;
    lVar17 = 0x3d28a80;
    if ((bRam0000000003eb4c23 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
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
    lVar18 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass19_0_TypeInfo*/ uRam0000000003d28a80);
    uVar19 = /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass19_0$$.ctor*/ func_0x0156618c(lVar18,0);
    if (lVar18 != 0) {
      *(long *)(lVar18 + 0x10) = lVar13;
      *(int *)(lVar18 + 0x18) = auVar34._8_4_;
      if (*(long *)(lVar13 + 0x90) != 0) {
        plVar8 = *(long **)(*(long *)(lVar13 + 0x90) + 0x30);
        uVar19 = 0;
        if ((plVar8 != (long *)0x0) &&
           (uVar19 = (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230)),
           (uVar19 & 1) != 0)) {
          return (long *)uVar19;
        }
      }
      if (*(long *)(lVar13 + 0x88) != 0) {
        return (long *)uVar19;
      }
      plVar22 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar22,0);
      lVar11 = /*STR('SETTINGS_SCREEN_CONFIRMATION_BODY')*/ lRam0000000003d720d0;
      if (plVar22 != (long *)0x0) {
        plVar22[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
        plVar22[6] = lVar11;
        lVar17 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar22[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar22[8] = lVar17;
        lVar17 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar17,lVar18,uRam0000000003d63c18,0);
        plVar22[0xb] = lVar17;
        lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar13,uRam0000000003d412a8);
        if ((lVar11 != 0) && (plVar10 = *(long **)(lVar11 + 0xa0), plVar10 != (long *)0x0)) {
          uVar12 = *(undefined8 *)((long)pplVar4 + -0x50);
          uVar32 = *(undefined8 *)((long)pplVar4 + -0x48);
          uVar14 = *(undefined8 *)((long)pplVar4 + -0x60);
          uVar21 = *(undefined8 *)((long)pplVar4 + -0x58);
          puVar5 = (undefined1 *)((long)pplVar4 + -0x40);
          uVar26 = *(undefined8 *)((long)pplVar4 + -0x70);
          uVar23 = *(undefined8 *)((long)pplVar4 + -0x68);
          uVar28 = 0x3d1d270;
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar34 = func_0x00f78af4();
    lVar11 = auVar34._0_8_;
    *(long *)((long)pplVar4 + -0xa0) = lVar17;
    *(long **)((long)pplVar4 + -0x98) = plVar22;
    *(long *)((long)pplVar4 + -0x90) = lVar18;
    *(long *)((long)pplVar4 + -0x88) = lVar13;
    *(undefined1 **)((long)pplVar4 + -0x80) = (undefined1 *)((long)pplVar4 + -0x50);
    *(undefined **)((long)pplVar4 + -0x78) =
         &Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteCurrentPrompt;
    lVar17 = 0x3d28a88;
    if ((bRam0000000003eb4c24 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
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
    lVar18 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass20_0_TypeInfo*/ uRam0000000003d28a88);
    uVar19 = /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass20_0$$.ctor*/ func_0x015661e4(lVar18,0);
    plVar8 = auVar34._8_8_;
    if (lVar18 != 0) {
      *(long *)(lVar18 + 0x10) = lVar11;
      *(int *)(lVar18 + 0x18) = auVar34._8_4_;
      if (*(long *)(lVar11 + 0x90) != 0) {
        plVar8 = *(long **)(*(long *)(lVar11 + 0x90) + 0x30);
        uVar19 = 0;
        if ((plVar8 != (long *)0x0) &&
           (uVar19 = (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230)),
           (uVar19 & 1) != 0)) {
          return (long *)uVar19;
        }
      }
      if (*(long *)(lVar11 + 0x88) != 0) {
        return (long *)uVar19;
      }
      plVar22 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar22,0);
      lVar13 = /*STR('SETTINGS_SCREEN_CONFIRMATION_DELETE_CURRENT')*/ lRam0000000003d720d8;
      plVar8 = plVar22;
      if (plVar22 != (long *)0x0) {
        plVar22[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
        plVar22[6] = lVar13;
        lVar17 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar22[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar22[8] = lVar17;
        lVar17 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar17,lVar18,uRam0000000003d63c20,0);
        plVar22[0xb] = lVar17;
        lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d412a8);
        if ((lVar13 != 0) && (plVar10 = *(long **)(lVar13 + 0xa0), plVar10 != (long *)0x0)) {
          uVar12 = *(undefined8 *)((long)pplVar4 + -0x80);
          uVar32 = *(undefined8 *)((long)pplVar4 + -0x78);
          uVar14 = *(undefined8 *)((long)pplVar4 + -0x90);
          uVar21 = *(undefined8 *)((long)pplVar4 + -0x88);
          puVar5 = (undefined1 *)((long)pplVar4 + -0x70);
          uVar26 = *(undefined8 *)((long)pplVar4 + -0xa0);
          uVar23 = *(undefined8 *)((long)pplVar4 + -0x98);
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar34 = func_0x00f78af4();
    plVar22 = auVar34._8_8_;
    lVar13 = auVar34._0_8_;
    *(long *)((long)pplVar4 + -0xd0) = lVar17;
    *(long **)((long)pplVar4 + -200) = plVar8;
    *(long *)((long)pplVar4 + -0xc0) = lVar18;
    *(long *)((long)pplVar4 + -0xb8) = lVar11;
    *(undefined1 **)((long)pplVar4 + -0xb0) = (undefined1 *)((long)pplVar4 + -0x80);
    *(undefined **)((long)pplVar4 + -0xa8) =
         &Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteLastPrompt;
    lVar17 = 0x3d28a90;
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
    lVar18 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0_TypeInfo*/ uRam0000000003d28a90);
    uVar19 = /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0$$.ctor*/ func_0x0156623c(lVar18,0);
    if (lVar18 != 0) {
      *(long *)(lVar18 + 0x10) = lVar13;
      *(int *)(lVar18 + 0x18) = auVar34._8_4_;
      if (*(long *)(lVar13 + 0x90) != 0) {
        plVar8 = *(long **)(*(long *)(lVar13 + 0x90) + 0x30);
        uVar19 = 0;
        if ((plVar8 != (long *)0x0) &&
           (uVar19 = (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230)),
           (uVar19 & 1) != 0)) {
          return (long *)uVar19;
        }
      }
      if (*(long *)(lVar13 + 0x88) != 0) {
        return (long *)uVar19;
      }
      plVar22 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar22,0);
      lVar11 = /*STR('SETTINGS_SCREEN_CONFIRMATION_DELETE_LAST')*/ lRam0000000003d720e0;
      if (plVar22 != (long *)0x0) {
        plVar22[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
        plVar22[6] = lVar11;
        lVar17 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar22[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar22[8] = lVar17;
        lVar17 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar17,lVar18,uRam0000000003d63c28,0);
        plVar22[0xb] = lVar17;
        lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar13,uRam0000000003d412a8);
        if ((lVar11 != 0) && (plVar10 = *(long **)(lVar11 + 0xa0), plVar10 != (long *)0x0)) {
          uVar12 = *(undefined8 *)((long)pplVar4 + -0xb0);
          uVar32 = *(undefined8 *)((long)pplVar4 + -0xa8);
          uVar14 = *(undefined8 *)((long)pplVar4 + -0xc0);
          uVar21 = *(undefined8 *)((long)pplVar4 + -0xb8);
          puVar5 = (undefined1 *)((long)pplVar4 + -0xa0);
          uVar26 = *(undefined8 *)((long)pplVar4 + -0xd0);
          uVar23 = *(undefined8 *)((long)pplVar4 + -200);
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar34 = func_0x00f78af4();
    *(long *)((long)pplVar4 + -0x100) = lVar17;
    *(long **)((long)pplVar4 + -0xf8) = plVar22;
    *(long *)((long)pplVar4 + -0xf0) = lVar18;
    *(long *)((long)pplVar4 + -0xe8) = lVar13;
    *(undefined1 **)((long)pplVar4 + -0xe0) = (undefined1 *)((long)pplVar4 + -0xb0);
    *(undefined **)((long)pplVar4 + -0xd8) = &Atlas_UI_Screens_SaveGameScreen__DeleteUnusedSlot;
    if ((bRam0000000003eb4c26 & 1) == 0) {
      func_0x00f78a20(0x3d28ab8);
      bRam0000000003eb4c26 = 1;
    }
    uVar19 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22_TypeInfo*/ uRam0000000003d28ab8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22$$.ctor*/ func_0x01566918(uVar19,0,0);
    if (uVar19 != 0) {
      *(long *)(uVar19 + 0x20) = auVar34._0_8_;
      *(int *)(uVar19 + 0x28) = auVar34._8_4_;
      return (long *)uVar19;
    }
    auVar33 = func_0x00f78af4();
    *(undefined8 *)((long)pplVar4 + -0x130) = 0x3d28ab8;
    *(undefined8 *)((long)pplVar4 + -0x128) = 0;
    *(undefined1 (*) [16])((long)pplVar4 + -0x120) = auVar34;
    *(undefined1 **)((long)pplVar4 + -0x110) = (undefined1 *)((long)pplVar4 + -0xe0);
    *(undefined **)((long)pplVar4 + -0x108) = &Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot;
    if ((bRam0000000003eb4c27 & 1) == 0) {
      func_0x00f78a20(0x3d28ab0);
      bRam0000000003eb4c27 = 1;
    }
    uVar19 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23_TypeInfo*/ uRam0000000003d28ab0);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23$$.ctor*/ func_0x01566514(uVar19,0,0);
    if (uVar19 != 0) {
      *(long *)(uVar19 + 0x20) = auVar33._0_8_;
      *(int *)(uVar19 + 0x28) = auVar33._8_4_;
      return (long *)uVar19;
    }
    auVar34 = func_0x00f78af4();
    *(undefined8 *)((long)pplVar4 + -0x160) = 0x3d28ab0;
    *(undefined8 *)((long)pplVar4 + -0x158) = 0;
    *(undefined1 (*) [16])((long)pplVar4 + -0x150) = auVar33;
    *(undefined1 **)((long)pplVar4 + -0x140) = (undefined1 *)((long)pplVar4 + -0x110);
    *(undefined **)((long)pplVar4 + -0x138) = &Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot;
    if ((bRam0000000003eb4c28 & 1) == 0) {
      func_0x00f78a20(0x3d28aa8);
      bRam0000000003eb4c28 = 1;
    }
    uVar19 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24_TypeInfo*/ uRam0000000003d28aa8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24$$.ctor*/ func_0x01566344(uVar19,0,0);
    if (uVar19 != 0) {
      *(long *)(uVar19 + 0x20) = auVar34._0_8_;
      *(int *)(uVar19 + 0x28) = auVar34._8_4_;
      return (long *)uVar19;
    }
    auVar33 = func_0x00f78af4();
    lVar18 = auVar33._0_8_;
    *(undefined8 *)((long)pplVar4 + -400) = 0x3d28aa8;
    *(undefined8 *)((long)pplVar4 + -0x188) = 0;
    *(undefined1 (*) [16])((long)pplVar4 + -0x180) = auVar34;
    *(undefined1 **)((long)pplVar4 + -0x170) = (undefined1 *)((long)pplVar4 + -0x140);
    *(undefined **)((long)pplVar4 + -0x168) = &Atlas_UI_Screens_SaveGameScreen__OnUnUsedSlotSelected
    ;
    lVar17 = 0x3d28a98;
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
    lVar11 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0_TypeInfo*/ uRam0000000003d28a98);
    uVar19 = /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0$$.ctor*/ func_0x01566294(lVar11,0);
    plVar8 = auVar33._8_8_;
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x10) = lVar18;
      *(int *)(lVar11 + 0x18) = auVar33._8_4_;
      if (*(long *)(lVar18 + 0x90) != 0) {
        plVar8 = *(long **)(*(long *)(lVar18 + 0x90) + 0x30);
        uVar19 = 0;
        if ((plVar8 != (long *)0x0) &&
           (uVar19 = (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230)),
           (uVar19 & 1) != 0)) {
          return (long *)uVar19;
        }
      }
      if (*(long *)(lVar18 + 0x88) != 0) {
        return (long *)uVar19;
      }
      plVar22 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar22,0);
      lVar13 = /*STR('SETTINGS_SCREEN_START_NEW_GAME_BODY')*/ lRam0000000003d72140;
      plVar8 = plVar22;
      if (plVar22 != (long *)0x0) {
        plVar22[5] = /*STR('SETTINGS_SCREEN_START_NEW_GAME')*/ lRam0000000003d72138;
        plVar22[6] = lVar13;
        lVar17 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar22[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar22[8] = lVar17;
        lVar17 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar17,lVar11,uRam0000000003d63c30,0);
        plVar22[10] = lVar17;
        lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar18,uRam0000000003d412a8);
        if ((lVar13 != 0) && (plVar10 = *(long **)(lVar13 + 0xa0), plVar10 != (long *)0x0)) {
          uVar12 = *(undefined8 *)((long)pplVar4 + -0x170);
          uVar32 = *(undefined8 *)((long)pplVar4 + -0x168);
          uVar14 = *(undefined8 *)((long)pplVar4 + -0x180);
          uVar21 = *(undefined8 *)((long)pplVar4 + -0x178);
          puVar5 = (undefined1 *)((long)pplVar4 + -0x160);
          uVar26 = *(undefined8 *)((long)pplVar4 + -400);
          uVar23 = *(undefined8 *)((long)pplVar4 + -0x188);
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar34 = func_0x00f78af4();
    plVar22 = auVar34._8_8_;
    lVar13 = auVar34._0_8_;
    *(long *)((long)pplVar4 + -0x1c0) = lVar17;
    *(long **)((long)pplVar4 + -0x1b8) = plVar8;
    *(long *)((long)pplVar4 + -0x1b0) = lVar11;
    *(long *)((long)pplVar4 + -0x1a8) = lVar18;
    *(undefined1 **)((long)pplVar4 + -0x1a0) = (undefined1 *)((long)pplVar4 + -0x170);
    *(undefined **)((long)pplVar4 + -0x198) = &Atlas_UI_Screens_SaveGameScreen__OnUsedSlotSelected;
    lVar17 = 0x3d28aa0;
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
    lVar18 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0_TypeInfo*/ uRam0000000003d28aa0);
    uVar19 = /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0$$.ctor*/ func_0x015662ec(lVar18,0);
    if (lVar18 == 0) {
code_r0x014ea550:
      auVar34 = func_0x00f78af4();
      *(long *)((long)pplVar4 + -0x1f0) = lVar17;
      *(long **)((long)pplVar4 + -0x1e8) = plVar22;
      *(long *)((long)pplVar4 + -0x1e0) = lVar18;
      *(long *)((long)pplVar4 + -0x1d8) = lVar13;
      *(undefined1 **)((long)pplVar4 + -0x1d0) = (undefined1 *)((long)pplVar4 + -0x1a0);
      *(undefined **)((long)pplVar4 + -0x1c8) = &Atlas_UI_Screens_SaveGameScreen__OnLoadSlotSelected
      ;
      if ((bRam0000000003eb4c2b & 1) == 0) {
        func_0x00f78a20(0x3d28ac8);
        bRam0000000003eb4c2b = 1;
      }
      uVar19 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27_TypeInfo*/ uRam0000000003d28ac8);
      /*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27$$.ctor*/ func_0x01566c9c(uVar19,0,0);
      if (uVar19 != 0) {
        *(long *)(uVar19 + 0x20) = auVar34._0_8_;
        *(int *)(uVar19 + 0x28) = auVar34._8_4_;
        return (long *)uVar19;
      }
      auVar33 = func_0x00f78af4();
      *(undefined8 *)((long)pplVar4 + -0x220) = 0x3d28ac8;
      *(undefined8 *)((long)pplVar4 + -0x218) = 0;
      *(undefined1 (*) [16])((long)pplVar4 + -0x210) = auVar34;
      *(undefined1 **)((long)pplVar4 + -0x200) = (undefined1 *)((long)pplVar4 + -0x1d0);
      *(undefined **)((long)pplVar4 + -0x1f8) =
           &Atlas_UI_Screens_SaveGameScreen__OnStartNewSlotSelected;
      if ((bRam0000000003eb4c2c & 1) == 0) {
        func_0x00f78a20(0x3d28ad0);
        bRam0000000003eb4c2c = 1;
      }
      uVar19 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28_TypeInfo*/ uRam0000000003d28ad0);
      /*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28$$.ctor*/ func_0x01566e2c(uVar19,0,0);
      if (uVar19 == 0) {
        auVar35 = func_0x00f78af4();
        *(undefined8 *)((long)pplVar4 + -0x250) = 0x3d28ad0;
        *(undefined8 *)((long)pplVar4 + -0x248) = 0;
        *(undefined1 (*) [16])((long)pplVar4 + -0x240) = auVar33;
        *(undefined1 **)((long)pplVar4 + -0x230) = (undefined1 *)((long)pplVar4 + -0x200);
        *(undefined **)((long)pplVar4 + -0x228) = &Atlas_UI_Screens_SaveGameScreen__EndTask;
        if ((bRam0000000003eb4c2d & 1) == 0) {
          func_0x00f78a20(0x3d28ac0);
          bRam0000000003eb4c2d = 1;
        }
        uVar19 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29_TypeInfo*/ uRam0000000003d28ac0);
        /*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29$$.ctor*/ func_0x01566ab4(uVar19,0,0);
        if (uVar19 == 0) {
          lVar17 = func_0x00f78af4();
          if ((*(long *)(lVar17 + 0x90) != 0) &&
             (plVar8 = *(long **)(*(long *)(lVar17 + 0x90) + 0x30), plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar19 = (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230));
            return (long *)uVar19;
          }
          return (long *)0;
        }
        *(undefined1 (*) [12])(uVar19 + 0x20) = auVar35;
        return (long *)uVar19;
      }
      *(long *)(uVar19 + 0x20) = auVar33._0_8_;
      *(int *)(uVar19 + 0x28) = auVar33._8_4_;
      return (long *)uVar19;
    }
    *(long *)(lVar18 + 0x10) = lVar13;
    *(int *)(lVar18 + 0x18) = auVar34._8_4_;
    if (*(long *)(lVar13 + 0x90) != 0) {
      plVar8 = *(long **)(*(long *)(lVar13 + 0x90) + 0x30);
      uVar19 = 0;
      if ((plVar8 != (long *)0x0) &&
         (uVar19 = (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230)),
         (uVar19 & 1) != 0)) {
        return (long *)uVar19;
      }
    }
    if (*(long *)(lVar13 + 0x88) != 0) {
      return (long *)uVar19;
    }
    plVar22 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar22,0);
    lVar11 = /*STR('SETTINGS_SCREEN_LOAD_GAME_BODY')*/ lRam0000000003d72128;
    if (plVar22 == (long *)0x0) goto code_r0x014ea550;
    plVar22[5] = /*STR('SETTINGS_SCREEN_LOAD_GAME')*/ lRam0000000003d72120;
    plVar22[6] = lVar11;
    lVar17 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar22[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar22[8] = lVar17;
    lVar17 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar17,lVar18,uRam0000000003d63c38,0);
    plVar22[10] = lVar17;
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar13,uRam0000000003d412a8);
    if ((lVar11 == 0) || (plVar10 = *(long **)(lVar11 + 0xa0), plVar10 == (long *)0x0))
    goto code_r0x014ea550;
    uVar12 = *(undefined8 *)((long)pplVar4 + -0x1a0);
    uVar32 = *(undefined8 *)((long)pplVar4 + -0x198);
    uVar14 = *(undefined8 *)((long)pplVar4 + -0x1b0);
    uVar21 = *(undefined8 *)((long)pplVar4 + -0x1a8);
    puVar5 = (undefined1 *)((long)pplVar4 + -400);
    uVar26 = *(undefined8 *)((long)pplVar4 + -0x1c0);
    uVar23 = *(undefined8 *)((long)pplVar4 + -0x1b8);
  }
  else {
    *(long *)(lVar11 + 0x10) = lVar18;
    *(int *)(lVar11 + 0x18) = auVar34._8_4_;
    if (*(long *)(lVar18 + 0x90) != 0) {
      plVar8 = *(long **)(*(long *)(lVar18 + 0x90) + 0x30);
      uVar19 = 0;
      if ((plVar8 != (long *)0x0) &&
         (uVar19 = (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230)),
         (uVar19 & 1) != 0)) {
        return (long *)uVar19;
      }
    }
    if (*(long *)(lVar18 + 0x88) != 0) {
      return (long *)uVar19;
    }
    plVar22 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar22,0);
    lVar2 = /*STR('SETTINGS_SCREEN_DELETE_GAME_BODY')*/ lRam0000000003d720f8;
    lVar13 = /*STR('SETTINGS_SCREEN_DELETE_CURRENT_GAME_BODY')*/ lRam0000000003d720e8;
    plVar8 = plVar22;
    if (*(long *)(lVar18 + 0x70) == 0) goto code_r0x014e9ab8;
    lVar17 = 0x3d28a78;
    uVar27 = 0x3d22180;
    if (*(int *)(lVar11 + 0x18) != *(int *)(*(long *)(lVar18 + 0x70) + 0xf8)) {
      if (plVar22 != (long *)0x0) {
        plVar22[5] = /*STR('SETTINGS_SCREEN_DELETE_GAME')*/ lRam0000000003d720f0;
        plVar22[6] = lVar2;
        lVar17 = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar22[7] = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar22[8] = lVar17;
        lVar17 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        puVar9 = (undefined8 *)0x3d63c00;
        goto code_r0x014e9a5c;
      }
      goto code_r0x014e9ab8;
    }
    if (plVar22 == (long *)0x0) goto code_r0x014e9ab8;
    plVar22[5] = /*STR('SETTINGS_SCREEN_DELETE_GAME')*/ lRam0000000003d720f0;
    plVar22[6] = lVar13;
    lVar17 = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar22[7] = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar22[8] = lVar17;
    uVar12 = Atlas_UI_Screens_SaveGameScreen__NumValidSlots(lVar18);
    lVar17 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    puVar9 = (undefined8 *)0x3d63c08;
    if (1 < (uint)uVar12) {
      puVar9 = (undefined8 *)0x3d63c10;
    }
code_r0x014e9a5c:
    /*System.Action$$.ctor*/ func_0x02924c80(lVar17,lVar11,*puVar9,0);
    plVar22[0xb] = lVar17;
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar18,uRam0000000003d412a8);
    uVar27 = uVar12;
    if ((lVar13 == 0) || (plVar10 = *(long **)(lVar13 + 0xa0), plVar10 == (long *)0x0))
    goto code_r0x014e9ab8;
    uVar12 = *(undefined8 *)((long)pplVar4 + -0x10);
    uVar32 = *(undefined8 *)((long)pplVar4 + -8);
    uVar14 = *(undefined8 *)((long)pplVar4 + -0x20);
    uVar21 = *(undefined8 *)((long)pplVar4 + -0x18);
    uVar26 = *(undefined8 *)((long)pplVar4 + -0x30);
    uVar23 = *(undefined8 *)((long)pplVar4 + -0x28);
    uVar27 = *(undefined8 *)((long)pplVar4 + -0x38);
    puVar5 = (undefined1 *)pplVar4;
    uVar28 = *(undefined8 *)((long)pplVar4 + -0x40);
  }
Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal:
  plVar8 = plRam0000000003d3e0e8;
  *(undefined8 *)(puVar5 + -0x30) = uVar26;
  *(undefined8 *)(puVar5 + -0x28) = uVar23;
  *(undefined8 *)(puVar5 + -0x20) = uVar14;
  *(undefined8 *)(puVar5 + -0x18) = uVar21;
  *(undefined8 *)(puVar5 + -0x10) = uVar12;
  *(undefined8 *)(puVar5 + -8) = uVar32;
  uVar12 = 0x3eb8000;
  plVar16 = plRam0000000003d3e0e8;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar22 != (long *)0x0) {
    uVar12 = 0x3d71000;
    uVar14 = (**(code **)(*plVar22 + 0x178))(plVar22,*(undefined8 *)(*plVar22 + 0x180));
    plVar16 = (long *)0x0;
    uVar14 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar14);
    if (plVar10 != (long *)0x0) {
      plVar16 = *(long **)(*(long *)(plVar8[3] + 0xc0) + 8);
      (*(code *)*plVar16)(plVar10,uVar14);
      if (plVar10[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar10[7],plVar22,uRam0000000003d3b330);
        plVar16 = (long *)plVar10[8];
        if ((plVar16 == (long *)0x0) || ((int)plVar22[2] <= (int)plVar16[2])) {
code_r0x025dfcb4:
          uVar19 = (*(code *)**(undefined8 **)(*(long *)(plVar8[3] + 0xc0) + 0x30))(plVar10);
          if ((uVar19 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar19 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
            return (long *)uVar19;
          }
          return (long *)uVar19;
        }
        if (plVar10[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar10[7],0,plVar16,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(plVar8[3] + 0xc0) + 0x60))(plVar10);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar34 = func_0x00f78af4();
  plVar15 = auVar34._8_8_;
  lVar17 = auVar34._0_8_;
  *(undefined8 *)(puVar5 + -0x60) = uVar12;
  *(long **)(puVar5 + -0x58) = plVar22;
  *(long **)(puVar5 + -0x50) = plVar8;
  *(long **)(puVar5 + -0x48) = plVar10;
  *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x38) = &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
  if (plVar15 != (long *)0x0) {
    uVar14 = (**(code **)(*plVar15 + 0x178))(plVar15,*(undefined8 *)(*plVar15 + 0x180));
    plVar8 = (long *)0x0;
    plVar10 = plVar15;
    plVar22 = plVar16;
    if (lVar17 != 0) {
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(plVar16[3] + 0xc0) + 0x70))(lVar17,uVar14);
      if ((uVar7 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(plVar16[3] + 0xc0) + 0x78))(lVar17,plVar15);
      }
      return (long *)(ulong)(uVar7 ^ 1);
    }
  }
  auVar34 = func_0x00f78af4();
  *(undefined8 *)(puVar5 + -0xb0) = 0x3d1fd98;
  *(undefined8 *)(puVar5 + -0xa8) = 0x3d25b48;
  *(undefined8 *)(puVar5 + -0xa0) = uVar28;
  *(undefined8 *)(puVar5 + -0x98) = uVar27;
  *(undefined8 *)(puVar5 + -0x90) = uVar12;
  *(long **)(puVar5 + -0x88) = plVar22;
  *(long **)(puVar5 + -0x80) = plVar8;
  *(long **)(puVar5 + -0x78) = plVar10;
  *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x40;
  *(undefined **)(puVar5 + -0x68) =
       &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
  iVar6 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar17 = *(long *)(auVar34._0_8_ + 0x38);
  if (lVar17 != 0) {
    iVar6 = *(int *)(lVar17 + 0x18);
    if (iVar6 < 1) goto code_r0x025dfe48;
    uVar7 = 0;
    iVar29 = -0x80000000;
    uVar24 = 0;
    do {
      if (*(uint *)(lVar17 + 0x18) <= uVar7) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
      if (lVar17 == 0) break;
      iVar1 = *(int *)(lVar17 + 0x10);
      uVar25 = uVar7;
      if (iVar1 <= iVar29) {
        uVar25 = uVar24;
      }
      if (iVar6 - 1U == uVar7) goto code_r0x025dfe4c;
      if (iVar1 <= iVar29) {
        iVar1 = iVar29;
      }
      lVar17 = *(long *)(auVar34._0_8_ + 0x38);
      uVar7 = uVar7 + 1;
      iVar29 = iVar1;
      uVar24 = uVar25;
    } while (lVar17 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar25 = 0;
code_r0x025dfe4c:
  *auVar34._8_8_ = uVar25;
  return (long *)(ulong)(0 < iVar6);
}



// ============================================================
// RVA: 0x14e97c4 | Atlas.UI.Screens.SaveGameScreen.OnControllerDeletePressed
// ============================================================

long * Atlas_UI_Screens_SaveGameScreen__OnControllerDeletePressed(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long unaff_x19;
  undefined8 uVar16;
  long *unaff_x20;
  int iVar17;
  undefined8 unaff_x21;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  int iVar23;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  
  puVar3 = &stack0xfffffffffffffff0;
  plVar5 = (long *)Atlas_UI_Screens_SaveGameScreen__FindCurrentlySelectedSaveSlotIndex();
  if ((int)plVar5 == -1) {
    return plVar5;
  }
  if ((*(long *)(param_1 + 0x70) == 0) ||
     (lVar6 = /*Atlas.Save.SaveManager$$SlotSaveData*/ func_0x014e84e8(*(long *)(param_1 + 0x70),plVar5), lVar6 == 0)) {
    unaff_x30 = &Atlas_UI_Screens_SaveGameScreen__OnDeleteButtonPressed;
    auVar26 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    lVar6 = auVar26._0_8_;
    plVar9 = auVar26._8_8_;
    unaff_x19 = param_1;
    unaff_x20 = plVar5;
    unaff_x29 = puVar3;
  }
  else {
    plVar7 = (long *)/*Atlas.Save.SaveData$$get_IsValidSaveData*/ func_0x014e7a58();
    lVar6 = param_1;
    plVar9 = plVar5;
    if ((int)plVar7 == 0) {
      return plVar7;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4c22 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d63c00);
    func_0x00f78a20(0x3d63c08);
    func_0x00f78a20(0x3d63c10);
    func_0x00f78a20(0x3d28a78);
    func_0x00f78a20(0x3d412a8);
    func_0x00f78a20(0x3d6d128);
    func_0x00f78a20(0x3d720f0);
    func_0x00f78a20(0x3d6d108);
    func_0x00f78a20(0x3d720e8);
    func_0x00f78a20(0x3d720f8);
    bRam0000000003eb4c22 = 1;
  }
  lVar8 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass18_0_TypeInfo*/ uRam0000000003d28a78);
  plVar5 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass18_0$$.ctor*/ func_0x0156610c(lVar8,0);
  lVar10 = 0x3d28a78;
  if (lVar8 == 0) {
code_r0x014e9ab8:
    auVar26 = func_0x00f78af4();
    plVar5 = auVar26._8_8_;
    lVar11 = auVar26._0_8_;
    *(long *)((long)register0x00000008 + -0x70) = lVar10;
    *(long **)((long)register0x00000008 + -0x68) = plVar9;
    *(long *)((long)register0x00000008 + -0x60) = lVar8;
    *(long *)((long)register0x00000008 + -0x58) = lVar6;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) =
         &Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteUnusedPrompt;
    lVar6 = 0x3d28a80;
    if ((bRam0000000003eb4c23 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
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
    lVar10 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass19_0_TypeInfo*/ uRam0000000003d28a80);
    plVar9 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass19_0$$.ctor*/ func_0x0156618c(lVar10,0);
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar11;
      *(int *)(lVar10 + 0x18) = auVar26._8_4_;
      if (*(long *)(lVar11 + 0x90) != 0) {
        plVar5 = *(long **)(*(long *)(lVar11 + 0x90) + 0x30);
        plVar9 = (long *)0x0;
        if ((plVar5 != (long *)0x0) &&
           (plVar9 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230))
           , ((ulong)plVar9 & 1) != 0)) {
          return plVar9;
        }
      }
      if (*(long *)(lVar11 + 0x88) != 0) {
        return plVar9;
      }
      plVar5 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar5,0);
      lVar8 = /*STR('SETTINGS_SCREEN_CONFIRMATION_BODY')*/ lRam0000000003d720d0;
      if (plVar5 != (long *)0x0) {
        plVar5[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
        plVar5[6] = lVar8;
        lVar6 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar5[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar5[8] = lVar6;
        lVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar6,lVar10,uRam0000000003d63c18,0);
        plVar5[0xb] = lVar6;
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d412a8);
        if ((lVar8 != 0) && (plVar7 = *(long **)(lVar8 + 0xa0), plVar7 != (long *)0x0)) {
          uVar22 = *(undefined8 *)((long)register0x00000008 + -0x50);
          uVar24 = *(undefined8 *)((long)register0x00000008 + -0x48);
          uVar12 = *(undefined8 *)((long)register0x00000008 + -0x60);
          uVar16 = *(undefined8 *)((long)register0x00000008 + -0x58);
          puVar3 = (undefined1 *)((long)register0x00000008 + -0x40);
          uVar21 = *(undefined8 *)((long)register0x00000008 + -0x70);
          uVar18 = *(undefined8 *)((long)register0x00000008 + -0x68);
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar26 = func_0x00f78af4();
    lVar8 = auVar26._0_8_;
    *(long *)((long)register0x00000008 + -0xa0) = lVar6;
    *(long **)((long)register0x00000008 + -0x98) = plVar5;
    *(long *)((long)register0x00000008 + -0x90) = lVar10;
    *(long *)((long)register0x00000008 + -0x88) = lVar11;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x50);
    *(undefined **)((long)register0x00000008 + -0x78) =
         &Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteCurrentPrompt;
    lVar6 = 0x3d28a88;
    if ((bRam0000000003eb4c24 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
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
    lVar10 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass20_0_TypeInfo*/ uRam0000000003d28a88);
    plVar5 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass20_0$$.ctor*/ func_0x015661e4(lVar10,0);
    plVar9 = auVar26._8_8_;
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar8;
      *(int *)(lVar10 + 0x18) = auVar26._8_4_;
      if (*(long *)(lVar8 + 0x90) != 0) {
        plVar9 = *(long **)(*(long *)(lVar8 + 0x90) + 0x30);
        plVar5 = (long *)0x0;
        if ((plVar9 != (long *)0x0) &&
           (plVar5 = (long *)(**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230))
           , ((ulong)plVar5 & 1) != 0)) {
          return plVar5;
        }
      }
      if (*(long *)(lVar8 + 0x88) != 0) {
        return plVar5;
      }
      plVar5 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar5,0);
      lVar11 = /*STR('SETTINGS_SCREEN_CONFIRMATION_DELETE_CURRENT')*/ lRam0000000003d720d8;
      plVar9 = plVar5;
      if (plVar5 != (long *)0x0) {
        plVar5[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
        plVar5[6] = lVar11;
        lVar6 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar5[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar5[8] = lVar6;
        lVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar6,lVar10,uRam0000000003d63c20,0);
        plVar5[0xb] = lVar6;
        lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d412a8);
        if ((lVar11 != 0) && (plVar7 = *(long **)(lVar11 + 0xa0), plVar7 != (long *)0x0)) {
          uVar22 = *(undefined8 *)((long)register0x00000008 + -0x80);
          uVar24 = *(undefined8 *)((long)register0x00000008 + -0x78);
          uVar12 = *(undefined8 *)((long)register0x00000008 + -0x90);
          uVar16 = *(undefined8 *)((long)register0x00000008 + -0x88);
          puVar3 = (undefined1 *)((long)register0x00000008 + -0x70);
          uVar21 = *(undefined8 *)((long)register0x00000008 + -0xa0);
          uVar18 = *(undefined8 *)((long)register0x00000008 + -0x98);
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar26 = func_0x00f78af4();
    plVar5 = auVar26._8_8_;
    lVar11 = auVar26._0_8_;
    *(long *)((long)register0x00000008 + -0xd0) = lVar6;
    *(long **)((long)register0x00000008 + -200) = plVar9;
    *(long *)((long)register0x00000008 + -0xc0) = lVar10;
    *(long *)((long)register0x00000008 + -0xb8) = lVar8;
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined **)((long)register0x00000008 + -0xa8) =
         &Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteLastPrompt;
    lVar6 = 0x3d28a90;
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
    plVar9 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0$$.ctor*/ func_0x0156623c(lVar10,0);
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x10) = lVar11;
      *(int *)(lVar10 + 0x18) = auVar26._8_4_;
      if (*(long *)(lVar11 + 0x90) != 0) {
        plVar5 = *(long **)(*(long *)(lVar11 + 0x90) + 0x30);
        plVar9 = (long *)0x0;
        if ((plVar5 != (long *)0x0) &&
           (plVar9 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230))
           , ((ulong)plVar9 & 1) != 0)) {
          return plVar9;
        }
      }
      if (*(long *)(lVar11 + 0x88) != 0) {
        return plVar9;
      }
      plVar5 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar5,0);
      lVar8 = /*STR('SETTINGS_SCREEN_CONFIRMATION_DELETE_LAST')*/ lRam0000000003d720e0;
      if (plVar5 != (long *)0x0) {
        plVar5[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
        plVar5[6] = lVar8;
        lVar6 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar5[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar5[8] = lVar6;
        lVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar6,lVar10,uRam0000000003d63c28,0);
        plVar5[0xb] = lVar6;
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d412a8);
        if ((lVar8 != 0) && (plVar7 = *(long **)(lVar8 + 0xa0), plVar7 != (long *)0x0)) {
          uVar22 = *(undefined8 *)((long)register0x00000008 + -0xb0);
          uVar24 = *(undefined8 *)((long)register0x00000008 + -0xa8);
          uVar12 = *(undefined8 *)((long)register0x00000008 + -0xc0);
          uVar16 = *(undefined8 *)((long)register0x00000008 + -0xb8);
          puVar3 = (undefined1 *)((long)register0x00000008 + -0xa0);
          uVar21 = *(undefined8 *)((long)register0x00000008 + -0xd0);
          uVar18 = *(undefined8 *)((long)register0x00000008 + -200);
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar26 = func_0x00f78af4();
    *(long *)((long)register0x00000008 + -0x100) = lVar6;
    *(long **)((long)register0x00000008 + -0xf8) = plVar5;
    *(long *)((long)register0x00000008 + -0xf0) = lVar10;
    *(long *)((long)register0x00000008 + -0xe8) = lVar11;
    *(undefined1 **)((long)register0x00000008 + -0xe0) =
         (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined **)((long)register0x00000008 + -0xd8) =
         &Atlas_UI_Screens_SaveGameScreen__DeleteUnusedSlot;
    if ((bRam0000000003eb4c26 & 1) == 0) {
      func_0x00f78a20(0x3d28ab8);
      bRam0000000003eb4c26 = 1;
    }
    plVar5 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22_TypeInfo*/ uRam0000000003d28ab8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22$$.ctor*/ func_0x01566918(plVar5,0,0);
    if (plVar5 != (long *)0x0) {
      plVar5[4] = auVar26._0_8_;
      *(int *)(plVar5 + 5) = auVar26._8_4_;
      return plVar5;
    }
    auVar25 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x130) = 0x3d28ab8;
    *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x120) = auVar26;
    *(undefined1 **)((long)register0x00000008 + -0x110) =
         (undefined1 *)((long)register0x00000008 + -0xe0);
    *(undefined **)((long)register0x00000008 + -0x108) =
         &Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot;
    if ((bRam0000000003eb4c27 & 1) == 0) {
      func_0x00f78a20(0x3d28ab0);
      bRam0000000003eb4c27 = 1;
    }
    plVar5 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23_TypeInfo*/ uRam0000000003d28ab0);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23$$.ctor*/ func_0x01566514(plVar5,0,0);
    if (plVar5 != (long *)0x0) {
      plVar5[4] = auVar25._0_8_;
      *(int *)(plVar5 + 5) = auVar25._8_4_;
      return plVar5;
    }
    auVar26 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x160) = 0x3d28ab0;
    *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x150) = auVar25;
    *(undefined1 **)((long)register0x00000008 + -0x140) =
         (undefined1 *)((long)register0x00000008 + -0x110);
    *(undefined **)((long)register0x00000008 + -0x138) =
         &Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot;
    if ((bRam0000000003eb4c28 & 1) == 0) {
      func_0x00f78a20(0x3d28aa8);
      bRam0000000003eb4c28 = 1;
    }
    plVar5 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24_TypeInfo*/ uRam0000000003d28aa8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24$$.ctor*/ func_0x01566344(plVar5,0,0);
    if (plVar5 != (long *)0x0) {
      plVar5[4] = auVar26._0_8_;
      *(int *)(plVar5 + 5) = auVar26._8_4_;
      return plVar5;
    }
    auVar25 = func_0x00f78af4();
    lVar10 = auVar25._0_8_;
    *(undefined8 *)((long)register0x00000008 + -400) = 0x3d28aa8;
    *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x180) = auVar26;
    *(undefined1 **)((long)register0x00000008 + -0x170) =
         (undefined1 *)((long)register0x00000008 + -0x140);
    *(undefined **)((long)register0x00000008 + -0x168) =
         &Atlas_UI_Screens_SaveGameScreen__OnUnUsedSlotSelected;
    lVar6 = 0x3d28a98;
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
    lVar8 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0_TypeInfo*/ uRam0000000003d28a98);
    plVar5 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0$$.ctor*/ func_0x01566294(lVar8,0);
    plVar9 = auVar25._8_8_;
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x10) = lVar10;
      *(int *)(lVar8 + 0x18) = auVar25._8_4_;
      if (*(long *)(lVar10 + 0x90) != 0) {
        plVar9 = *(long **)(*(long *)(lVar10 + 0x90) + 0x30);
        plVar5 = (long *)0x0;
        if ((plVar9 != (long *)0x0) &&
           (plVar5 = (long *)(**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230))
           , ((ulong)plVar5 & 1) != 0)) {
          return plVar5;
        }
      }
      if (*(long *)(lVar10 + 0x88) != 0) {
        return plVar5;
      }
      plVar5 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar5,0);
      lVar11 = /*STR('SETTINGS_SCREEN_START_NEW_GAME_BODY')*/ lRam0000000003d72140;
      plVar9 = plVar5;
      if (plVar5 != (long *)0x0) {
        plVar5[5] = /*STR('SETTINGS_SCREEN_START_NEW_GAME')*/ lRam0000000003d72138;
        plVar5[6] = lVar11;
        lVar6 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar5[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar5[8] = lVar6;
        lVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar6,lVar8,uRam0000000003d63c30,0);
        plVar5[10] = lVar6;
        lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar10,uRam0000000003d412a8);
        if ((lVar11 != 0) && (plVar7 = *(long **)(lVar11 + 0xa0), plVar7 != (long *)0x0)) {
          uVar22 = *(undefined8 *)((long)register0x00000008 + -0x170);
          uVar24 = *(undefined8 *)((long)register0x00000008 + -0x168);
          uVar12 = *(undefined8 *)((long)register0x00000008 + -0x180);
          uVar16 = *(undefined8 *)((long)register0x00000008 + -0x178);
          puVar3 = (undefined1 *)((long)register0x00000008 + -0x160);
          uVar21 = *(undefined8 *)((long)register0x00000008 + -400);
          uVar18 = *(undefined8 *)((long)register0x00000008 + -0x188);
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar26 = func_0x00f78af4();
    plVar5 = auVar26._8_8_;
    lVar11 = auVar26._0_8_;
    *(long *)((long)register0x00000008 + -0x1c0) = lVar6;
    *(long **)((long)register0x00000008 + -0x1b8) = plVar9;
    *(long *)((long)register0x00000008 + -0x1b0) = lVar8;
    *(long *)((long)register0x00000008 + -0x1a8) = lVar10;
    *(undefined1 **)((long)register0x00000008 + -0x1a0) =
         (undefined1 *)((long)register0x00000008 + -0x170);
    *(undefined **)((long)register0x00000008 + -0x198) =
         &Atlas_UI_Screens_SaveGameScreen__OnUsedSlotSelected;
    lVar6 = 0x3d28aa0;
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
    plVar9 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0$$.ctor*/ func_0x015662ec(lVar10,0);
    if (lVar10 == 0) {
code_r0x014ea550:
      auVar26 = func_0x00f78af4();
      *(long *)((long)register0x00000008 + -0x1f0) = lVar6;
      *(long **)((long)register0x00000008 + -0x1e8) = plVar5;
      *(long *)((long)register0x00000008 + -0x1e0) = lVar10;
      *(long *)((long)register0x00000008 + -0x1d8) = lVar11;
      *(undefined1 **)((long)register0x00000008 + -0x1d0) =
           (undefined1 *)((long)register0x00000008 + -0x1a0);
      *(undefined **)((long)register0x00000008 + -0x1c8) =
           &Atlas_UI_Screens_SaveGameScreen__OnLoadSlotSelected;
      if ((bRam0000000003eb4c2b & 1) == 0) {
        func_0x00f78a20(0x3d28ac8);
        bRam0000000003eb4c2b = 1;
      }
      plVar5 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27_TypeInfo*/ uRam0000000003d28ac8);
      /*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27$$.ctor*/ func_0x01566c9c(plVar5,0,0);
      if (plVar5 != (long *)0x0) {
        plVar5[4] = auVar26._0_8_;
        *(int *)(plVar5 + 5) = auVar26._8_4_;
        return plVar5;
      }
      auVar25 = func_0x00f78af4();
      *(undefined8 *)((long)register0x00000008 + -0x220) = 0x3d28ac8;
      *(undefined8 *)((long)register0x00000008 + -0x218) = 0;
      *(undefined1 (*) [16])((long)register0x00000008 + -0x210) = auVar26;
      *(undefined1 **)((long)register0x00000008 + -0x200) =
           (undefined1 *)((long)register0x00000008 + -0x1d0);
      *(undefined **)((long)register0x00000008 + -0x1f8) =
           &Atlas_UI_Screens_SaveGameScreen__OnStartNewSlotSelected;
      if ((bRam0000000003eb4c2c & 1) == 0) {
        func_0x00f78a20(0x3d28ad0);
        bRam0000000003eb4c2c = 1;
      }
      plVar5 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28_TypeInfo*/ uRam0000000003d28ad0);
      /*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28$$.ctor*/ func_0x01566e2c(plVar5,0,0);
      if (plVar5 != (long *)0x0) {
        plVar5[4] = auVar25._0_8_;
        *(int *)(plVar5 + 5) = auVar25._8_4_;
        return plVar5;
      }
      auVar27 = func_0x00f78af4();
      *(undefined8 *)((long)register0x00000008 + -0x250) = 0x3d28ad0;
      *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
      *(undefined1 (*) [16])((long)register0x00000008 + -0x240) = auVar25;
      *(undefined1 **)((long)register0x00000008 + -0x230) =
           (undefined1 *)((long)register0x00000008 + -0x200);
      *(undefined **)((long)register0x00000008 + -0x228) = &Atlas_UI_Screens_SaveGameScreen__EndTask
      ;
      if ((bRam0000000003eb4c2d & 1) == 0) {
        func_0x00f78a20(0x3d28ac0);
        bRam0000000003eb4c2d = 1;
      }
      plVar5 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29_TypeInfo*/ uRam0000000003d28ac0);
      /*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29$$.ctor*/ func_0x01566ab4(plVar5,0,0);
      if (plVar5 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar5 + 4) = auVar27;
        return plVar5;
      }
      lVar6 = func_0x00f78af4();
      if ((*(long *)(lVar6 + 0x90) != 0) &&
         (plVar5 = *(long **)(*(long *)(lVar6 + 0x90) + 0x30), plVar5 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar5 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
        return plVar5;
      }
      return (long *)0x0;
    }
    *(long *)(lVar10 + 0x10) = lVar11;
    *(int *)(lVar10 + 0x18) = auVar26._8_4_;
    if (*(long *)(lVar11 + 0x90) != 0) {
      plVar5 = *(long **)(*(long *)(lVar11 + 0x90) + 0x30);
      plVar9 = (long *)0x0;
      if ((plVar5 != (long *)0x0) &&
         (plVar9 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230)),
         ((ulong)plVar9 & 1) != 0)) {
        return plVar9;
      }
    }
    if (*(long *)(lVar11 + 0x88) != 0) {
      return plVar9;
    }
    plVar5 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar5,0);
    lVar8 = /*STR('SETTINGS_SCREEN_LOAD_GAME_BODY')*/ lRam0000000003d72128;
    if (plVar5 == (long *)0x0) goto code_r0x014ea550;
    plVar5[5] = /*STR('SETTINGS_SCREEN_LOAD_GAME')*/ lRam0000000003d72120;
    plVar5[6] = lVar8;
    lVar6 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar5[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar5[8] = lVar6;
    lVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar6,lVar10,uRam0000000003d63c38,0);
    plVar5[10] = lVar6;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar11,uRam0000000003d412a8);
    if ((lVar8 == 0) || (plVar7 = *(long **)(lVar8 + 0xa0), plVar7 == (long *)0x0))
    goto code_r0x014ea550;
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x1a0);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x198);
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x1b0);
    uVar16 = *(undefined8 *)((long)register0x00000008 + -0x1a8);
    puVar3 = (undefined1 *)((long)register0x00000008 + -400);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x1c0);
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x1b8);
  }
  else {
    *(long *)(lVar8 + 0x10) = lVar6;
    *(int *)(lVar8 + 0x18) = (int)plVar9;
    if (*(long *)(lVar6 + 0x90) != 0) {
      plVar9 = *(long **)(*(long *)(lVar6 + 0x90) + 0x30);
      plVar5 = (long *)0x0;
      if ((plVar9 != (long *)0x0) &&
         (plVar5 = (long *)(**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230)),
         ((ulong)plVar5 & 1) != 0)) {
        return plVar5;
      }
    }
    if (*(long *)(lVar6 + 0x88) != 0) {
      return plVar5;
    }
    plVar5 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar5,0);
    lVar2 = /*STR('SETTINGS_SCREEN_DELETE_GAME_BODY')*/ lRam0000000003d720f8;
    lVar11 = /*STR('SETTINGS_SCREEN_DELETE_CURRENT_GAME_BODY')*/ lRam0000000003d720e8;
    plVar9 = plVar5;
    if (*(long *)(lVar6 + 0x70) == 0) goto code_r0x014e9ab8;
    lVar10 = 0x3d28a78;
    if (*(int *)(lVar8 + 0x18) != *(int *)(*(long *)(lVar6 + 0x70) + 0xf8)) {
      if (plVar5 != (long *)0x0) {
        plVar5[5] = /*STR('SETTINGS_SCREEN_DELETE_GAME')*/ lRam0000000003d720f0;
        plVar5[6] = lVar2;
        lVar10 = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar5[7] = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar5[8] = lVar10;
        lVar10 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        puVar15 = (undefined8 *)0x3d63c00;
        goto code_r0x014e9a5c;
      }
      goto code_r0x014e9ab8;
    }
    if (plVar5 == (long *)0x0) goto code_r0x014e9ab8;
    plVar5[5] = /*STR('SETTINGS_SCREEN_DELETE_GAME')*/ lRam0000000003d720f0;
    plVar5[6] = lVar11;
    lVar10 = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar5[7] = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar5[8] = lVar10;
    unaff_x23 = Atlas_UI_Screens_SaveGameScreen__NumValidSlots(lVar6);
    lVar10 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    puVar15 = (undefined8 *)0x3d63c08;
    if (1 < (uint)unaff_x23) {
      puVar15 = (undefined8 *)0x3d63c10;
    }
code_r0x014e9a5c:
    /*System.Action$$.ctor*/ func_0x02924c80(lVar10,lVar8,*puVar15,0);
    plVar5[0xb] = lVar10;
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d412a8);
    if ((lVar11 == 0) || (plVar7 = *(long **)(lVar11 + 0xa0), plVar7 == (long *)0x0))
    goto code_r0x014e9ab8;
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar16 = *(undefined8 *)((long)register0x00000008 + -0x18);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x38);
    puVar3 = (undefined1 *)register0x00000008;
  }
Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal:
  plVar9 = plRam0000000003d3e0e8;
  *(undefined8 *)(puVar3 + -0x30) = uVar21;
  *(undefined8 *)(puVar3 + -0x28) = uVar18;
  *(undefined8 *)(puVar3 + -0x20) = uVar12;
  *(undefined8 *)(puVar3 + -0x18) = uVar16;
  *(undefined8 *)(puVar3 + -0x10) = uVar22;
  *(undefined8 *)(puVar3 + -8) = uVar24;
  uVar22 = 0x3eb8000;
  plVar14 = plRam0000000003d3e0e8;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar5 != (long *)0x0) {
    uVar22 = 0x3d71000;
    uVar12 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    plVar14 = (long *)0x0;
    uVar12 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar12);
    if (plVar7 != (long *)0x0) {
      plVar14 = *(long **)(*(long *)(plVar9[3] + 0xc0) + 8);
      (*(code *)*plVar14)(plVar7,uVar12);
      if (plVar7[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar7[7],plVar5,uRam0000000003d3b330);
        plVar14 = (long *)plVar7[8];
        if ((plVar14 == (long *)0x0) || ((int)plVar5[2] <= (int)plVar14[2])) {
code_r0x025dfcb4:
          plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(plVar9[3] + 0xc0) + 0x30))(plVar7);
          if (((ulong)plVar5 & 1) != 0) {
            return plVar5;
          }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar5 = (long *)(**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
          return plVar5;
        }
        if (plVar7[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar7[7],0,plVar14,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(plVar9[3] + 0xc0) + 0x60))(plVar7);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar26 = func_0x00f78af4();
  plVar13 = auVar26._8_8_;
  lVar6 = auVar26._0_8_;
  *(undefined8 *)(puVar3 + -0x60) = uVar22;
  *(long **)(puVar3 + -0x58) = plVar5;
  *(long **)(puVar3 + -0x50) = plVar9;
  *(long **)(puVar3 + -0x48) = plVar7;
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x38) = &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
  if (plVar13 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
    plVar9 = (long *)0x0;
    plVar7 = plVar13;
    plVar5 = plVar14;
    if (lVar6 != 0) {
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(plVar14[3] + 0xc0) + 0x70))(lVar6,uVar12);
      if ((uVar4 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(plVar14[3] + 0xc0) + 0x78))(lVar6,plVar13);
      }
      return (long *)(ulong)(uVar4 ^ 1);
    }
  }
  auVar26 = func_0x00f78af4();
  *(undefined8 *)(puVar3 + -0xb0) = unaff_x26;
  *(undefined8 *)(puVar3 + -0xa8) = unaff_x25;
  *(undefined8 *)(puVar3 + -0xa0) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x98) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x90) = uVar22;
  *(long **)(puVar3 + -0x88) = plVar5;
  *(long **)(puVar3 + -0x80) = plVar9;
  *(long **)(puVar3 + -0x78) = plVar7;
  *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
  *(undefined **)(puVar3 + -0x68) =
       &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
  iVar17 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar6 = *(long *)(auVar26._0_8_ + 0x38);
  if (lVar6 != 0) {
    iVar17 = *(int *)(lVar6 + 0x18);
    if (iVar17 < 1) goto code_r0x025dfe48;
    uVar4 = 0;
    iVar23 = -0x80000000;
    uVar19 = 0;
    do {
      if (*(uint *)(lVar6 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar4 * 8 + 0x20);
      if (lVar6 == 0) break;
      iVar1 = *(int *)(lVar6 + 0x10);
      uVar20 = uVar4;
      if (iVar1 <= iVar23) {
        uVar20 = uVar19;
      }
      if (iVar17 - 1U == uVar4) goto code_r0x025dfe4c;
      if (iVar1 <= iVar23) {
        iVar1 = iVar23;
      }
      lVar6 = *(long *)(auVar26._0_8_ + 0x38);
      uVar4 = uVar4 + 1;
      iVar23 = iVar1;
      uVar19 = uVar20;
    } while (lVar6 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar20 = 0;
code_r0x025dfe4c:
  *auVar26._8_8_ = uVar20;
  return (long *)(ulong)(0 < iVar17);
}



// ============================================================
// RVA: 0x14e9824 | Atlas.UI.Screens.SaveGameScreen.OnDeleteButtonPressed
// ============================================================

long * Atlas_UI_Screens_SaveGameScreen__OnDeleteButtonPressed(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *plVar15;
  int iVar16;
  long *unaff_x21;
  uint uVar17;
  uint uVar18;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  int iVar19;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined *puStack_198;
  long lStack_190;
  long *plStack_188;
  undefined1 auStack_180 [16];
  undefined8 ******ppppppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  undefined1 auStack_150 [16];
  undefined8 ******ppppppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined1 auStack_120 [16];
  undefined8 ******ppppppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 ******ppppppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 ******ppppppuStack_50;
  undefined *puStack_48;
  long *plVar12;
  
  auVar21._8_8_ = unaff_x19;
  auVar21._0_8_ = unaff_x20;
  if ((bRam0000000003eb4c22 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d63c00);
    func_0x00f78a20(0x3d63c08);
    func_0x00f78a20(0x3d63c10);
    func_0x00f78a20(0x3d28a78);
    func_0x00f78a20(0x3d412a8);
    func_0x00f78a20(0x3d6d128);
    func_0x00f78a20(0x3d720f0);
    func_0x00f78a20(0x3d6d108);
    func_0x00f78a20(0x3d720e8);
    func_0x00f78a20(0x3d720f8);
    bRam0000000003eb4c22 = 1;
  }
  lVar3 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass18_0_TypeInfo*/ uRam0000000003d28a78);
  plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass18_0$$.ctor*/ func_0x0156610c(lVar3,0);
  lVar7 = 0x3d28a78;
  uVar6 = unaff_x23;
  if (lVar3 == 0) {
LAB_014e9ab8:
    unaff_x23 = uVar6;
    auVar21 = func_0x00f78af4();
    plVar4 = auVar21._8_8_;
    lVar9 = auVar21._0_8_;
    puStack_48 = &Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteUnusedPrompt;
    lVar8 = 0x3d28a80;
    lStack_70 = lVar7;
    plStack_68 = param_2;
    lStack_60 = lVar3;
    lStack_58 = param_1;
    ppppppuStack_50 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4c23 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
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
    lVar7 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass19_0_TypeInfo*/ uRam0000000003d28a80);
    plVar5 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass19_0$$.ctor*/ func_0x0156618c(lVar7,0);
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x10) = lVar9;
      *(int *)(lVar7 + 0x18) = auVar21._8_4_;
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
      lVar3 = /*STR('SETTINGS_SCREEN_CONFIRMATION_BODY')*/ lRam0000000003d720d0;
      if (plVar4 != (long *)0x0) {
        plVar4[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
        plVar4[6] = lVar3;
        lVar3 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar4[8] = lVar3;
        lVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar8,lVar7,uRam0000000003d63c18,0);
        plVar4[0xb] = lVar8;
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d412a8);
        auVar21._8_8_ = lStack_58;
        auVar21._0_8_ = lStack_60;
        if ((lVar3 != 0) && (plVar5 = *(long **)(lVar3 + 0xa0), plVar5 != (long *)0x0)) {
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
          unaff_x21 = plStack_68;
          unaff_x22 = lStack_70;
          unaff_x29 = (undefined8 *******)ppppppuStack_50;
          unaff_x30 = puStack_48;
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar21 = func_0x00f78af4();
    lVar10 = auVar21._0_8_;
    puStack_78 = &Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteCurrentPrompt;
    lVar3 = 0x3d28a88;
    lStack_a0 = lVar8;
    plStack_98 = plVar4;
    lStack_90 = lVar7;
    lStack_88 = lVar9;
    ppppppuStack_80 = &ppppppuStack_50;
    if ((bRam0000000003eb4c24 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
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
    lVar7 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass20_0_TypeInfo*/ uRam0000000003d28a88);
    plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass20_0$$.ctor*/ func_0x015661e4(lVar7,0);
    plVar15 = auVar21._8_8_;
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x10) = lVar10;
      *(int *)(lVar7 + 0x18) = auVar21._8_4_;
      if (*(long *)(lVar10 + 0x90) != 0) {
        plVar5 = *(long **)(*(long *)(lVar10 + 0x90) + 0x30);
        plVar4 = (long *)0x0;
        if ((plVar5 != (long *)0x0) &&
           (plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230))
           , ((ulong)plVar4 & 1) != 0)) {
          return plVar4;
        }
      }
      if (*(long *)(lVar10 + 0x88) != 0) {
        return plVar4;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
      lVar8 = /*STR('SETTINGS_SCREEN_CONFIRMATION_DELETE_CURRENT')*/ lRam0000000003d720d8;
      plVar15 = plVar4;
      if (plVar4 != (long *)0x0) {
        plVar4[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
        plVar4[6] = lVar8;
        lVar3 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar4[8] = lVar3;
        lVar3 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar3,lVar7,uRam0000000003d63c20,0);
        plVar4[0xb] = lVar3;
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar10,uRam0000000003d412a8);
        auVar21._8_8_ = lStack_88;
        auVar21._0_8_ = lStack_90;
        if ((lVar8 != 0) && (plVar5 = *(long **)(lVar8 + 0xa0), plVar5 != (long *)0x0)) {
          register0x00000008 = (BADSPACEBASE *)&lStack_70;
          unaff_x21 = plStack_98;
          unaff_x22 = lStack_a0;
          unaff_x29 = (undefined8 *******)ppppppuStack_80;
          unaff_x30 = puStack_78;
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar21 = func_0x00f78af4();
    plVar4 = auVar21._8_8_;
    lVar9 = auVar21._0_8_;
    puStack_a8 = &Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteLastPrompt;
    lVar8 = 0x3d28a90;
    lStack_d0 = lVar3;
    plStack_c8 = plVar15;
    lStack_c0 = lVar7;
    lStack_b8 = lVar10;
    ppppppuStack_b0 = &ppppppuStack_80;
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
    lVar7 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0_TypeInfo*/ uRam0000000003d28a90);
    plVar5 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0$$.ctor*/ func_0x0156623c(lVar7,0);
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x10) = lVar9;
      *(int *)(lVar7 + 0x18) = auVar21._8_4_;
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
      lVar3 = /*STR('SETTINGS_SCREEN_CONFIRMATION_DELETE_LAST')*/ lRam0000000003d720e0;
      if (plVar4 != (long *)0x0) {
        plVar4[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
        plVar4[6] = lVar3;
        lVar3 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar4[8] = lVar3;
        lVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar8,lVar7,uRam0000000003d63c28,0);
        plVar4[0xb] = lVar8;
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d412a8);
        auVar21._8_8_ = lStack_b8;
        auVar21._0_8_ = lStack_c0;
        if ((lVar3 != 0) && (plVar5 = *(long **)(lVar3 + 0xa0), plVar5 != (long *)0x0)) {
          register0x00000008 = (BADSPACEBASE *)&lStack_a0;
          unaff_x21 = plStack_c8;
          unaff_x22 = lStack_d0;
          unaff_x29 = (undefined8 *******)ppppppuStack_b0;
          unaff_x30 = puStack_a8;
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar21 = func_0x00f78af4();
    puStack_d8 = &Atlas_UI_Screens_SaveGameScreen__DeleteUnusedSlot;
    lStack_100 = lVar8;
    plStack_f8 = plVar4;
    lStack_f0 = lVar7;
    lStack_e8 = lVar9;
    ppppppuStack_e0 = &ppppppuStack_b0;
    if ((bRam0000000003eb4c26 & 1) == 0) {
      func_0x00f78a20(0x3d28ab8);
      bRam0000000003eb4c26 = 1;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22_TypeInfo*/ uRam0000000003d28ab8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22$$.ctor*/ func_0x01566918(plVar4,0,0);
    if (plVar4 != (long *)0x0) {
      plVar4[4] = auVar21._0_8_;
      *(int *)(plVar4 + 5) = auVar21._8_4_;
      return plVar4;
    }
    auVar20 = func_0x00f78af4();
    uStack_130 = 0x3d28ab8;
    puStack_108 = &Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot;
    plStack_128 = plVar4;
    ppppppuStack_110 = &ppppppuStack_e0;
    auStack_120 = auVar21;
    if ((bRam0000000003eb4c27 & 1) == 0) {
      func_0x00f78a20(0x3d28ab0);
      bRam0000000003eb4c27 = 1;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23_TypeInfo*/ uRam0000000003d28ab0);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23$$.ctor*/ func_0x01566514(plVar4,0,0);
    if (plVar4 != (long *)0x0) {
      plVar4[4] = auVar20._0_8_;
      *(int *)(plVar4 + 5) = auVar20._8_4_;
      return plVar4;
    }
    auVar21 = func_0x00f78af4();
    uStack_160 = 0x3d28ab0;
    puStack_138 = &Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot;
    plStack_158 = plVar4;
    ppppppuStack_140 = &ppppppuStack_110;
    auStack_150 = auVar20;
    if ((bRam0000000003eb4c28 & 1) == 0) {
      func_0x00f78a20(0x3d28aa8);
      bRam0000000003eb4c28 = 1;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24_TypeInfo*/ uRam0000000003d28aa8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24$$.ctor*/ func_0x01566344(plVar4,0,0);
    if (plVar4 != (long *)0x0) {
      plVar4[4] = auVar21._0_8_;
      *(int *)(plVar4 + 5) = auVar21._8_4_;
      return plVar4;
    }
    auVar20 = func_0x00f78af4();
    lVar7 = auVar20._0_8_;
    lStack_190 = 0x3d28aa8;
    puStack_168 = &Atlas_UI_Screens_SaveGameScreen__OnUnUsedSlotSelected;
    unaff_x29 = &ppppppuStack_170;
    unaff_x22 = 0x3d28a98;
    plStack_188 = plVar4;
    ppppppuStack_170 = &ppppppuStack_140;
    auStack_180 = auVar21;
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
    lVar3 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0_TypeInfo*/ uRam0000000003d28a98);
    auVar21._8_8_ = lVar7;
    auVar21._0_8_ = lVar3;
    plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0$$.ctor*/ func_0x01566294(lVar3,0);
    unaff_x21 = auVar20._8_8_;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar7;
      *(int *)(lVar3 + 0x18) = auVar20._8_4_;
      if (*(long *)(lVar7 + 0x90) != 0) {
        plVar5 = *(long **)(*(long *)(lVar7 + 0x90) + 0x30);
        plVar4 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
          if (((ulong)plVar4 & 1) != 0) {
            return plVar4;
          }
        }
      }
      if (*(long *)(lVar7 + 0x88) != 0) {
        return plVar4;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
      lVar8 = /*STR('SETTINGS_SCREEN_START_NEW_GAME_BODY')*/ lRam0000000003d72140;
      unaff_x21 = plVar4;
      if (plVar4 != (long *)0x0) {
        plVar4[5] = /*STR('SETTINGS_SCREEN_START_NEW_GAME')*/ lRam0000000003d72138;
        plVar4[6] = lVar8;
        lVar8 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar4[8] = lVar8;
        unaff_x22 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(unaff_x22,lVar3,uRam0000000003d63c30,0);
        plVar4[10] = unaff_x22;
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar7,uRam0000000003d412a8);
        if ((lVar7 != 0) && (plVar5 = *(long **)(lVar7 + 0xa0), plVar5 != (long *)0x0)) {
          register0x00000008 = (BADSPACEBASE *)&uStack_160;
          unaff_x21 = plStack_188;
          unaff_x22 = lStack_190;
          unaff_x29 = (undefined8 *******)ppppppuStack_170;
          unaff_x30 = puStack_168;
          auVar21 = auStack_180;
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar22 = func_0x00f78af4();
    lVar7 = auVar22._0_8_;
    puStack_198 = &Atlas_UI_Screens_SaveGameScreen__OnUsedSlotSelected;
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
    lVar3 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0_TypeInfo*/ uRam0000000003d28aa0);
    plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0$$.ctor*/ func_0x015662ec(lVar3,0);
    if (lVar3 == 0) {
code_r0x014ea550:
      auVar22 = func_0x00f78af4();
      if ((bRam0000000003eb4c2b & 1) == 0) {
        func_0x00f78a20(0x3d28ac8);
        bRam0000000003eb4c2b = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27_TypeInfo*/ uRam0000000003d28ac8);
      /*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27$$.ctor*/ func_0x01566c9c(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar22;
        return plVar4;
      }
      auVar22 = func_0x00f78af4();
      if ((bRam0000000003eb4c2c & 1) == 0) {
        func_0x00f78a20(0x3d28ad0);
        bRam0000000003eb4c2c = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28_TypeInfo*/ uRam0000000003d28ad0);
      /*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28$$.ctor*/ func_0x01566e2c(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar22;
        return plVar4;
      }
      auVar22 = func_0x00f78af4();
      if ((bRam0000000003eb4c2d & 1) == 0) {
        func_0x00f78a20(0x3d28ac0);
        bRam0000000003eb4c2d = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29_TypeInfo*/ uRam0000000003d28ac0);
      /*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29$$.ctor*/ func_0x01566ab4(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar22;
        return plVar4;
      }
      lVar7 = func_0x00f78af4();
      if ((*(long *)(lVar7 + 0x90) != 0) &&
         (plVar4 = *(long **)(*(long *)(lVar7 + 0x90) + 0x30), plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar4 = (long *)(**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
        return plVar4;
      }
      return (long *)0x0;
    }
    *(undefined1 (*) [12])(lVar3 + 0x10) = auVar22;
    if (*(long *)(lVar7 + 0x90) != 0) {
      plVar5 = *(long **)(*(long *)(lVar7 + 0x90) + 0x30);
      plVar4 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
        if (((ulong)plVar4 & 1) != 0) {
          return plVar4;
        }
      }
    }
    if (*(long *)(lVar7 + 0x88) != 0) {
      return plVar4;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
    lVar8 = /*STR('SETTINGS_SCREEN_LOAD_GAME_BODY')*/ lRam0000000003d72128;
    if (plVar4 == (long *)0x0) goto code_r0x014ea550;
    plVar4[5] = /*STR('SETTINGS_SCREEN_LOAD_GAME')*/ lRam0000000003d72120;
    plVar4[6] = lVar8;
    lVar8 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar4[8] = lVar8;
    lVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar8,lVar3,uRam0000000003d63c38,0);
    plVar4[10] = lVar8;
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar7,uRam0000000003d412a8);
    if ((lVar7 == 0) || (plVar5 = *(long **)(lVar7 + 0xa0), plVar5 == (long *)0x0))
    goto code_r0x014ea550;
    register0x00000008 = (BADSPACEBASE *)&lStack_190;
    unaff_x30 = puStack_198;
  }
  else {
    *(long *)(lVar3 + 0x10) = param_1;
    *(int *)(lVar3 + 0x18) = (int)param_2;
    if (*(long *)(param_1 + 0x90) != 0) {
      plVar5 = *(long **)(*(long *)(param_1 + 0x90) + 0x30);
      plVar4 = (long *)0x0;
      if ((plVar5 != (long *)0x0) &&
         (plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230)),
         ((ulong)plVar4 & 1) != 0)) {
        return plVar4;
      }
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      return plVar4;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
    lVar9 = /*STR('SETTINGS_SCREEN_DELETE_GAME_BODY')*/ lRam0000000003d720f8;
    lVar8 = /*STR('SETTINGS_SCREEN_DELETE_CURRENT_GAME_BODY')*/ lRam0000000003d720e8;
    param_2 = plVar4;
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_014e9ab8;
    lVar7 = 0x3d28a78;
    if (*(int *)(lVar3 + 0x18) != *(int *)(*(long *)(param_1 + 0x70) + 0xf8)) {
      if (plVar4 != (long *)0x0) {
        plVar4[5] = /*STR('SETTINGS_SCREEN_DELETE_GAME')*/ lRam0000000003d720f0;
        plVar4[6] = lVar9;
        lVar7 = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar4[7] = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar4[8] = lVar7;
        lVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        puVar14 = (undefined8 *)0x3d63c00;
        goto code_r0x014e9a5c;
      }
      goto LAB_014e9ab8;
    }
    if (plVar4 == (long *)0x0) goto LAB_014e9ab8;
    plVar4[5] = /*STR('SETTINGS_SCREEN_DELETE_GAME')*/ lRam0000000003d720f0;
    plVar4[6] = lVar8;
    lVar7 = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar4[7] = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar4[8] = lVar7;
    uVar6 = Atlas_UI_Screens_SaveGameScreen__NumValidSlots(param_1);
    lVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    puVar14 = (undefined8 *)0x3d63c08;
    if (1 < (uint)uVar6) {
      puVar14 = (undefined8 *)0x3d63c10;
    }
code_r0x014e9a5c:
    /*System.Action$$.ctor*/ func_0x02924c80(lVar7,lVar3,*puVar14,0);
    plVar4[0xb] = lVar7;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d412a8);
    if ((lVar8 == 0) || (plVar5 = *(long **)(lVar8 + 0xa0), plVar5 == (long *)0x0))
    goto LAB_014e9ab8;
  }
Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal:
  plVar15 = plRam0000000003d3e0e8;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar21;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar6 = 0x3eb8000;
  plVar13 = plRam0000000003d3e0e8;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar4 != (long *)0x0) {
    uVar6 = 0x3d71000;
    uVar11 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
    plVar13 = (long *)0x0;
    uVar11 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar11);
    if (plVar5 != (long *)0x0) {
      plVar13 = *(long **)(*(long *)(plVar15[3] + 0xc0) + 8);
      (*(code *)*plVar13)(plVar5,uVar11);
      if (plVar5[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar5[7],plVar4,uRam0000000003d3b330);
        plVar13 = (long *)plVar5[8];
        if ((plVar13 == (long *)0x0) || ((int)plVar4[2] <= (int)plVar13[2])) {
code_r0x025dfcb4:
          plVar4 = (long *)(*(code *)**(undefined8 **)(*(long *)(plVar15[3] + 0xc0) + 0x30))(plVar5)
          ;
          if (((ulong)plVar4 & 1) != 0) {
            return plVar4;
          }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar4 = (long *)(**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
          return plVar4;
        }
        if (plVar5[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar5[7],0,plVar13,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(plVar15[3] + 0xc0) + 0x60))(plVar5);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar21 = func_0x00f78af4();
  plVar12 = auVar21._8_8_;
  lVar7 = auVar21._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar6;
  *(long **)((long)register0x00000008 + -0x58) = plVar4;
  *(long **)((long)register0x00000008 + -0x50) = plVar15;
  *(long **)((long)register0x00000008 + -0x48) = plVar5;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
  if (plVar12 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
    plVar15 = (long *)0x0;
    plVar5 = plVar12;
    plVar4 = plVar13;
    if (lVar7 != 0) {
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(plVar13[3] + 0xc0) + 0x70))(lVar7,uVar11);
      if ((uVar2 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(plVar13[3] + 0xc0) + 0x78))(lVar7,plVar12);
      }
      return (long *)(ulong)(uVar2 ^ 1);
    }
  }
  auVar21 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar6;
  *(long **)((long)register0x00000008 + -0x88) = plVar4;
  *(long **)((long)register0x00000008 + -0x80) = plVar15;
  *(long **)((long)register0x00000008 + -0x78) = plVar5;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x68) =
       &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
  iVar16 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar7 = *(long *)(auVar21._0_8_ + 0x38);
  if (lVar7 != 0) {
    iVar16 = *(int *)(lVar7 + 0x18);
    if (iVar16 < 1) goto code_r0x025dfe48;
    uVar2 = 0;
    iVar19 = -0x80000000;
    uVar17 = 0;
    do {
      if (*(uint *)(lVar7 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
      if (lVar7 == 0) break;
      iVar1 = *(int *)(lVar7 + 0x10);
      uVar18 = uVar2;
      if (iVar1 <= iVar19) {
        uVar18 = uVar17;
      }
      if (iVar16 - 1U == uVar2) goto code_r0x025dfe4c;
      if (iVar1 <= iVar19) {
        iVar1 = iVar19;
      }
      lVar7 = *(long *)(auVar21._0_8_ + 0x38);
      uVar2 = uVar2 + 1;
      iVar19 = iVar1;
      uVar17 = uVar18;
    } while (lVar7 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar18 = 0;
code_r0x025dfe4c:
  *auVar21._8_8_ = uVar18;
  return (long *)(ulong)(0 < iVar16);
}



// ============================================================
// RVA: 0x14e9abc | Atlas.UI.Screens.SaveGameScreen.ConfirmDeleteUnusedPrompt
// ============================================================

long * Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteUnusedPrompt(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  int iVar13;
  long *unaff_x21;
  uint uVar14;
  uint uVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  int iVar17;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined *puStack_158;
  long lStack_150;
  long *plStack_148;
  undefined1 auStack_140 [16];
  undefined8 ******ppppppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined1 auStack_110 [16];
  undefined8 ******ppppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  long *plVar11;
  
  auVar19._8_8_ = unaff_x19;
  auVar19._0_8_ = unaff_x20;
  lVar6 = 0x3d28a80;
  if ((bRam0000000003eb4c23 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
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
  lVar3 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass19_0_TypeInfo*/ uRam0000000003d28a80);
  plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass19_0$$.ctor*/ func_0x0156618c(lVar3,0);
  if (lVar3 == 0) {
LAB_014e9c8c:
    auVar19 = func_0x00f78af4();
    lVar8 = auVar19._0_8_;
    puStack_38 = &Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteCurrentPrompt;
    lVar7 = 0x3d28a88;
    lStack_60 = lVar6;
    plStack_58 = param_2;
    lStack_50 = lVar3;
    lStack_48 = param_1;
    ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4c24 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
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
    plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass20_0$$.ctor*/ func_0x015661e4(lVar6,0);
    plVar5 = auVar19._8_8_;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x10) = lVar8;
      *(int *)(lVar6 + 0x18) = auVar19._8_4_;
      if (*(long *)(lVar8 + 0x90) != 0) {
        plVar5 = *(long **)(*(long *)(lVar8 + 0x90) + 0x30);
        plVar4 = (long *)0x0;
        if ((plVar5 != (long *)0x0) &&
           (plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230))
           , ((ulong)plVar4 & 1) != 0)) {
          return plVar4;
        }
      }
      if (*(long *)(lVar8 + 0x88) != 0) {
        return plVar4;
      }
      param_2 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(param_2,0);
      lVar3 = /*STR('SETTINGS_SCREEN_CONFIRMATION_DELETE_CURRENT')*/ lRam0000000003d720d8;
      plVar5 = param_2;
      if (param_2 != (long *)0x0) {
        param_2[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
        param_2[6] = lVar3;
        lVar3 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        param_2[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        param_2[8] = lVar3;
        lVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar7,lVar6,uRam0000000003d63c20,0);
        param_2[0xb] = lVar7;
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d412a8);
        auVar19._8_8_ = lStack_48;
        auVar19._0_8_ = lStack_50;
        if ((lVar3 != 0) && (plVar4 = *(long **)(lVar3 + 0xa0), plVar4 != (long *)0x0)) {
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
          unaff_x21 = plStack_58;
          unaff_x22 = lStack_60;
          unaff_x29 = (undefined8 *******)ppppppuStack_40;
          unaff_x30 = puStack_38;
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar19 = func_0x00f78af4();
    param_2 = auVar19._8_8_;
    lVar9 = auVar19._0_8_;
    puStack_68 = &Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteLastPrompt;
    lVar3 = 0x3d28a90;
    lStack_90 = lVar7;
    plStack_88 = plVar5;
    lStack_80 = lVar6;
    lStack_78 = lVar8;
    ppppppuStack_70 = &ppppppuStack_40;
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
    plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0$$.ctor*/ func_0x0156623c(lVar6,0);
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x10) = lVar9;
      *(int *)(lVar6 + 0x18) = auVar19._8_4_;
      if (*(long *)(lVar9 + 0x90) != 0) {
        plVar5 = *(long **)(*(long *)(lVar9 + 0x90) + 0x30);
        plVar4 = (long *)0x0;
        if ((plVar5 != (long *)0x0) &&
           (plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230))
           , ((ulong)plVar4 & 1) != 0)) {
          return plVar4;
        }
      }
      if (*(long *)(lVar9 + 0x88) != 0) {
        return plVar4;
      }
      param_2 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(param_2,0);
      lVar7 = /*STR('SETTINGS_SCREEN_CONFIRMATION_DELETE_LAST')*/ lRam0000000003d720e0;
      if (param_2 != (long *)0x0) {
        param_2[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
        param_2[6] = lVar7;
        lVar3 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        param_2[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        param_2[8] = lVar3;
        lVar3 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar3,lVar6,uRam0000000003d63c28,0);
        param_2[0xb] = lVar3;
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d412a8);
        auVar19._8_8_ = lStack_78;
        auVar19._0_8_ = lStack_80;
        if ((lVar7 != 0) && (plVar4 = *(long **)(lVar7 + 0xa0), plVar4 != (long *)0x0)) {
          register0x00000008 = (BADSPACEBASE *)&lStack_60;
          unaff_x21 = plStack_88;
          unaff_x22 = lStack_90;
          unaff_x29 = (undefined8 *******)ppppppuStack_70;
          unaff_x30 = puStack_68;
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar19 = func_0x00f78af4();
    puStack_98 = &Atlas_UI_Screens_SaveGameScreen__DeleteUnusedSlot;
    lStack_c0 = lVar3;
    plStack_b8 = param_2;
    lStack_b0 = lVar6;
    lStack_a8 = lVar9;
    ppppppuStack_a0 = &ppppppuStack_70;
    if ((bRam0000000003eb4c26 & 1) == 0) {
      func_0x00f78a20(0x3d28ab8);
      bRam0000000003eb4c26 = 1;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22_TypeInfo*/ uRam0000000003d28ab8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22$$.ctor*/ func_0x01566918(plVar4,0,0);
    if (plVar4 != (long *)0x0) {
      plVar4[4] = auVar19._0_8_;
      *(int *)(plVar4 + 5) = auVar19._8_4_;
      return plVar4;
    }
    auVar18 = func_0x00f78af4();
    uStack_f0 = 0x3d28ab8;
    puStack_c8 = &Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot;
    plStack_e8 = plVar4;
    ppppppuStack_d0 = &ppppppuStack_a0;
    auStack_e0 = auVar19;
    if ((bRam0000000003eb4c27 & 1) == 0) {
      func_0x00f78a20(0x3d28ab0);
      bRam0000000003eb4c27 = 1;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23_TypeInfo*/ uRam0000000003d28ab0);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23$$.ctor*/ func_0x01566514(plVar4,0,0);
    if (plVar4 != (long *)0x0) {
      plVar4[4] = auVar18._0_8_;
      *(int *)(plVar4 + 5) = auVar18._8_4_;
      return plVar4;
    }
    auVar19 = func_0x00f78af4();
    uStack_120 = 0x3d28ab0;
    puStack_f8 = &Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot;
    plStack_118 = plVar4;
    ppppppuStack_100 = &ppppppuStack_d0;
    auStack_110 = auVar18;
    if ((bRam0000000003eb4c28 & 1) == 0) {
      func_0x00f78a20(0x3d28aa8);
      bRam0000000003eb4c28 = 1;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24_TypeInfo*/ uRam0000000003d28aa8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24$$.ctor*/ func_0x01566344(plVar4,0,0);
    if (plVar4 != (long *)0x0) {
      plVar4[4] = auVar19._0_8_;
      *(int *)(plVar4 + 5) = auVar19._8_4_;
      return plVar4;
    }
    auVar18 = func_0x00f78af4();
    lVar6 = auVar18._0_8_;
    lStack_150 = 0x3d28aa8;
    puStack_128 = &Atlas_UI_Screens_SaveGameScreen__OnUnUsedSlotSelected;
    unaff_x29 = &ppppppuStack_130;
    unaff_x22 = 0x3d28a98;
    plStack_148 = plVar4;
    ppppppuStack_130 = &ppppppuStack_100;
    auStack_140 = auVar19;
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
    lVar3 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0_TypeInfo*/ uRam0000000003d28a98);
    auVar19._8_8_ = lVar6;
    auVar19._0_8_ = lVar3;
    plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0$$.ctor*/ func_0x01566294(lVar3,0);
    unaff_x21 = auVar18._8_8_;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar6;
      *(int *)(lVar3 + 0x18) = auVar18._8_4_;
      if (*(long *)(lVar6 + 0x90) != 0) {
        plVar5 = *(long **)(*(long *)(lVar6 + 0x90) + 0x30);
        plVar4 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
          if (((ulong)plVar4 & 1) != 0) {
            return plVar4;
          }
        }
      }
      if (*(long *)(lVar6 + 0x88) != 0) {
        return plVar4;
      }
      param_2 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(param_2,0);
      lVar7 = /*STR('SETTINGS_SCREEN_START_NEW_GAME_BODY')*/ lRam0000000003d72140;
      unaff_x21 = param_2;
      if (param_2 != (long *)0x0) {
        param_2[5] = /*STR('SETTINGS_SCREEN_START_NEW_GAME')*/ lRam0000000003d72138;
        param_2[6] = lVar7;
        lVar7 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        param_2[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        param_2[8] = lVar7;
        unaff_x22 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(unaff_x22,lVar3,uRam0000000003d63c30,0);
        param_2[10] = unaff_x22;
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d412a8);
        if ((lVar6 != 0) && (plVar4 = *(long **)(lVar6 + 0xa0), plVar4 != (long *)0x0)) {
          register0x00000008 = (BADSPACEBASE *)&uStack_120;
          unaff_x21 = plStack_148;
          unaff_x22 = lStack_150;
          unaff_x29 = (undefined8 *******)ppppppuStack_130;
          unaff_x30 = puStack_128;
          auVar19 = auStack_140;
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar20 = func_0x00f78af4();
    lVar6 = auVar20._0_8_;
    puStack_158 = &Atlas_UI_Screens_SaveGameScreen__OnUsedSlotSelected;
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
    lVar3 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0_TypeInfo*/ uRam0000000003d28aa0);
    plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0$$.ctor*/ func_0x015662ec(lVar3,0);
    if (lVar3 == 0) {
code_r0x014ea550:
      auVar20 = func_0x00f78af4();
      if ((bRam0000000003eb4c2b & 1) == 0) {
        func_0x00f78a20(0x3d28ac8);
        bRam0000000003eb4c2b = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27_TypeInfo*/ uRam0000000003d28ac8);
      /*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27$$.ctor*/ func_0x01566c9c(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar20;
        return plVar4;
      }
      auVar20 = func_0x00f78af4();
      if ((bRam0000000003eb4c2c & 1) == 0) {
        func_0x00f78a20(0x3d28ad0);
        bRam0000000003eb4c2c = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28_TypeInfo*/ uRam0000000003d28ad0);
      /*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28$$.ctor*/ func_0x01566e2c(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar20;
        return plVar4;
      }
      auVar20 = func_0x00f78af4();
      if ((bRam0000000003eb4c2d & 1) == 0) {
        func_0x00f78a20(0x3d28ac0);
        bRam0000000003eb4c2d = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29_TypeInfo*/ uRam0000000003d28ac0);
      /*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29$$.ctor*/ func_0x01566ab4(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar20;
        return plVar4;
      }
      lVar6 = func_0x00f78af4();
      if ((*(long *)(lVar6 + 0x90) != 0) &&
         (plVar4 = *(long **)(*(long *)(lVar6 + 0x90) + 0x30), plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar4 = (long *)(**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
        return plVar4;
      }
      return (long *)0x0;
    }
    *(undefined1 (*) [12])(lVar3 + 0x10) = auVar20;
    if (*(long *)(lVar6 + 0x90) != 0) {
      plVar5 = *(long **)(*(long *)(lVar6 + 0x90) + 0x30);
      plVar4 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
        if (((ulong)plVar4 & 1) != 0) {
          return plVar4;
        }
      }
    }
    if (*(long *)(lVar6 + 0x88) != 0) {
      return plVar4;
    }
    param_2 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(param_2,0);
    lVar7 = /*STR('SETTINGS_SCREEN_LOAD_GAME_BODY')*/ lRam0000000003d72128;
    if (param_2 == (long *)0x0) goto code_r0x014ea550;
    param_2[5] = /*STR('SETTINGS_SCREEN_LOAD_GAME')*/ lRam0000000003d72120;
    param_2[6] = lVar7;
    lVar7 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    param_2[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    param_2[8] = lVar7;
    lVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar7,lVar3,uRam0000000003d63c38,0);
    param_2[10] = lVar7;
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d412a8);
    if ((lVar6 == 0) || (plVar4 = *(long **)(lVar6 + 0xa0), plVar4 == (long *)0x0))
    goto code_r0x014ea550;
    register0x00000008 = (BADSPACEBASE *)&lStack_150;
    unaff_x30 = puStack_158;
  }
  else {
    *(long *)(lVar3 + 0x10) = param_1;
    *(int *)(lVar3 + 0x18) = (int)param_2;
    if (*(long *)(param_1 + 0x90) != 0) {
      plVar5 = *(long **)(*(long *)(param_1 + 0x90) + 0x30);
      plVar4 = (long *)0x0;
      if ((plVar5 != (long *)0x0) &&
         (plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230)),
         ((ulong)plVar4 & 1) != 0)) {
        return plVar4;
      }
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      return plVar4;
    }
    param_2 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(param_2,0);
    lVar7 = /*STR('SETTINGS_SCREEN_CONFIRMATION_BODY')*/ lRam0000000003d720d0;
    if (param_2 == (long *)0x0) goto LAB_014e9c8c;
    param_2[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
    param_2[6] = lVar7;
    lVar6 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    param_2[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    param_2[8] = lVar6;
    lVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar6,lVar3,uRam0000000003d63c18,0);
    param_2[0xb] = lVar6;
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d412a8);
    if ((lVar7 == 0) || (plVar4 = *(long **)(lVar7 + 0xa0), plVar4 == (long *)0x0))
    goto LAB_014e9c8c;
  }
Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal:
  plVar5 = plRam0000000003d3e0e8;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar16 = 0x3eb8000;
  plVar12 = plRam0000000003d3e0e8;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar16 = 0x3d71000;
    uVar10 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    plVar12 = (long *)0x0;
    uVar10 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar10);
    if (plVar4 != (long *)0x0) {
      plVar12 = *(long **)(*(long *)(plVar5[3] + 0xc0) + 8);
      (*(code *)*plVar12)(plVar4,uVar10);
      if (plVar4[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar4[7],param_2,uRam0000000003d3b330);
        plVar12 = (long *)plVar4[8];
        if ((plVar12 == (long *)0x0) || ((int)param_2[2] <= (int)plVar12[2])) {
code_r0x025dfcb4:
          plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(plVar5[3] + 0xc0) + 0x30))(plVar4);
          if (((ulong)plVar5 & 1) != 0) {
            return plVar5;
          }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
          return plVar4;
        }
        if (plVar4[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar4[7],0,plVar12,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(plVar5[3] + 0xc0) + 0x60))(plVar4);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar19 = func_0x00f78af4();
  plVar11 = auVar19._8_8_;
  lVar6 = auVar19._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar16;
  *(long **)((long)register0x00000008 + -0x58) = param_2;
  *(long **)((long)register0x00000008 + -0x50) = plVar5;
  *(long **)((long)register0x00000008 + -0x48) = plVar4;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
  if (plVar11 != (long *)0x0) {
    uVar10 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
    plVar5 = (long *)0x0;
    plVar4 = plVar11;
    param_2 = plVar12;
    if (lVar6 != 0) {
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(plVar12[3] + 0xc0) + 0x70))(lVar6,uVar10);
      if ((uVar2 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(plVar12[3] + 0xc0) + 0x78))(lVar6,plVar11);
      }
      return (long *)(ulong)(uVar2 ^ 1);
    }
  }
  auVar19 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar16;
  *(long **)((long)register0x00000008 + -0x88) = param_2;
  *(long **)((long)register0x00000008 + -0x80) = plVar5;
  *(long **)((long)register0x00000008 + -0x78) = plVar4;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x68) =
       &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
  iVar13 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar6 = *(long *)(auVar19._0_8_ + 0x38);
  if (lVar6 != 0) {
    iVar13 = *(int *)(lVar6 + 0x18);
    if (iVar13 < 1) goto code_r0x025dfe48;
    uVar2 = 0;
    iVar17 = -0x80000000;
    uVar14 = 0;
    do {
      if (*(uint *)(lVar6 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
      if (lVar6 == 0) break;
      iVar1 = *(int *)(lVar6 + 0x10);
      uVar15 = uVar2;
      if (iVar1 <= iVar17) {
        uVar15 = uVar14;
      }
      if (iVar13 - 1U == uVar2) goto code_r0x025dfe4c;
      if (iVar1 <= iVar17) {
        iVar1 = iVar17;
      }
      lVar6 = *(long *)(auVar19._0_8_ + 0x38);
      uVar2 = uVar2 + 1;
      iVar17 = iVar1;
      uVar14 = uVar15;
    } while (lVar6 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar15 = 0;
code_r0x025dfe4c:
  *auVar19._8_8_ = uVar15;
  return (long *)(ulong)(0 < iVar13);
}



// ============================================================
// RVA: 0x14e9c90 | Atlas.UI.Screens.SaveGameScreen.ConfirmDeleteCurrentPrompt
// ============================================================

long * Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteCurrentPrompt(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *plVar12;
  int iVar13;
  long *unaff_x21;
  uint uVar14;
  uint uVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  int iVar17;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined *puStack_128;
  long lStack_120;
  long *plStack_118;
  undefined1 auStack_110 [16];
  undefined8 ******ppppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 ******ppppppuStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  long *plVar10;
  
  auVar19._8_8_ = unaff_x19;
  auVar19._0_8_ = unaff_x20;
  lVar6 = 0x3d28a88;
  if ((bRam0000000003eb4c24 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
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
  if (lVar3 == 0) {
LAB_014e9e60:
    auVar19 = func_0x00f78af4();
    plVar4 = auVar19._8_8_;
    lVar8 = auVar19._0_8_;
    puStack_38 = &Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteLastPrompt;
    lVar7 = 0x3d28a90;
    lStack_60 = lVar6;
    plStack_58 = param_2;
    lStack_50 = lVar3;
    lStack_48 = param_1;
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
    lVar6 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0_TypeInfo*/ uRam0000000003d28a90);
    plVar5 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0$$.ctor*/ func_0x0156623c(lVar6,0);
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x10) = lVar8;
      *(int *)(lVar6 + 0x18) = auVar19._8_4_;
      if (*(long *)(lVar8 + 0x90) != 0) {
        plVar4 = *(long **)(*(long *)(lVar8 + 0x90) + 0x30);
        plVar5 = (long *)0x0;
        if ((plVar4 != (long *)0x0) &&
           (plVar5 = (long *)(**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230))
           , ((ulong)plVar5 & 1) != 0)) {
          return plVar5;
        }
      }
      if (*(long *)(lVar8 + 0x88) != 0) {
        return plVar5;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
      lVar3 = /*STR('SETTINGS_SCREEN_CONFIRMATION_DELETE_LAST')*/ lRam0000000003d720e0;
      if (plVar4 != (long *)0x0) {
        plVar4[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
        plVar4[6] = lVar3;
        lVar3 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar4[8] = lVar3;
        lVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(lVar7,lVar6,uRam0000000003d63c28,0);
        plVar4[0xb] = lVar7;
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d412a8);
        auVar19._8_8_ = lStack_48;
        auVar19._0_8_ = lStack_50;
        if ((lVar3 != 0) && (plVar5 = *(long **)(lVar3 + 0xa0), plVar5 != (long *)0x0)) {
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
          unaff_x21 = plStack_58;
          unaff_x22 = lStack_60;
          unaff_x29 = (undefined8 *******)ppppppuStack_40;
          unaff_x30 = puStack_38;
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar19 = func_0x00f78af4();
    puStack_68 = &Atlas_UI_Screens_SaveGameScreen__DeleteUnusedSlot;
    lStack_90 = lVar7;
    plStack_88 = plVar4;
    lStack_80 = lVar6;
    lStack_78 = lVar8;
    ppppppuStack_70 = &ppppppuStack_40;
    if ((bRam0000000003eb4c26 & 1) == 0) {
      func_0x00f78a20(0x3d28ab8);
      bRam0000000003eb4c26 = 1;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22_TypeInfo*/ uRam0000000003d28ab8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22$$.ctor*/ func_0x01566918(plVar4,0,0);
    if (plVar4 != (long *)0x0) {
      plVar4[4] = auVar19._0_8_;
      *(int *)(plVar4 + 5) = auVar19._8_4_;
      return plVar4;
    }
    auVar18 = func_0x00f78af4();
    uStack_c0 = 0x3d28ab8;
    puStack_98 = &Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot;
    plStack_b8 = plVar4;
    ppppppuStack_a0 = &ppppppuStack_70;
    auStack_b0 = auVar19;
    if ((bRam0000000003eb4c27 & 1) == 0) {
      func_0x00f78a20(0x3d28ab0);
      bRam0000000003eb4c27 = 1;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23_TypeInfo*/ uRam0000000003d28ab0);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23$$.ctor*/ func_0x01566514(plVar4,0,0);
    if (plVar4 != (long *)0x0) {
      plVar4[4] = auVar18._0_8_;
      *(int *)(plVar4 + 5) = auVar18._8_4_;
      return plVar4;
    }
    auVar19 = func_0x00f78af4();
    uStack_f0 = 0x3d28ab0;
    puStack_c8 = &Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot;
    plStack_e8 = plVar4;
    ppppppuStack_d0 = &ppppppuStack_a0;
    auStack_e0 = auVar18;
    if ((bRam0000000003eb4c28 & 1) == 0) {
      func_0x00f78a20(0x3d28aa8);
      bRam0000000003eb4c28 = 1;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24_TypeInfo*/ uRam0000000003d28aa8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24$$.ctor*/ func_0x01566344(plVar4,0,0);
    if (plVar4 != (long *)0x0) {
      plVar4[4] = auVar19._0_8_;
      *(int *)(plVar4 + 5) = auVar19._8_4_;
      return plVar4;
    }
    auVar18 = func_0x00f78af4();
    lVar6 = auVar18._0_8_;
    lStack_120 = 0x3d28aa8;
    puStack_f8 = &Atlas_UI_Screens_SaveGameScreen__OnUnUsedSlotSelected;
    unaff_x29 = &ppppppuStack_100;
    unaff_x22 = 0x3d28a98;
    plStack_118 = plVar4;
    ppppppuStack_100 = &ppppppuStack_d0;
    auStack_110 = auVar19;
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
    lVar3 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0_TypeInfo*/ uRam0000000003d28a98);
    auVar19._8_8_ = lVar6;
    auVar19._0_8_ = lVar3;
    plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0$$.ctor*/ func_0x01566294(lVar3,0);
    unaff_x21 = auVar18._8_8_;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar6;
      *(int *)(lVar3 + 0x18) = auVar18._8_4_;
      if (*(long *)(lVar6 + 0x90) != 0) {
        plVar5 = *(long **)(*(long *)(lVar6 + 0x90) + 0x30);
        plVar4 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
          if (((ulong)plVar4 & 1) != 0) {
            return plVar4;
          }
        }
      }
      if (*(long *)(lVar6 + 0x88) != 0) {
        return plVar4;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
      lVar7 = /*STR('SETTINGS_SCREEN_START_NEW_GAME_BODY')*/ lRam0000000003d72140;
      unaff_x21 = plVar4;
      if (plVar4 != (long *)0x0) {
        plVar4[5] = /*STR('SETTINGS_SCREEN_START_NEW_GAME')*/ lRam0000000003d72138;
        plVar4[6] = lVar7;
        lVar7 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        plVar4[8] = lVar7;
        unaff_x22 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(unaff_x22,lVar3,uRam0000000003d63c30,0);
        plVar4[10] = unaff_x22;
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d412a8);
        if ((lVar6 != 0) && (plVar5 = *(long **)(lVar6 + 0xa0), plVar5 != (long *)0x0)) {
          register0x00000008 = (BADSPACEBASE *)&uStack_f0;
          unaff_x21 = plStack_118;
          unaff_x22 = lStack_120;
          unaff_x29 = (undefined8 *******)ppppppuStack_100;
          unaff_x30 = puStack_f8;
          auVar19 = auStack_110;
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar20 = func_0x00f78af4();
    lVar6 = auVar20._0_8_;
    puStack_128 = &Atlas_UI_Screens_SaveGameScreen__OnUsedSlotSelected;
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
    lVar3 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0_TypeInfo*/ uRam0000000003d28aa0);
    plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0$$.ctor*/ func_0x015662ec(lVar3,0);
    if (lVar3 == 0) {
code_r0x014ea550:
      auVar20 = func_0x00f78af4();
      if ((bRam0000000003eb4c2b & 1) == 0) {
        func_0x00f78a20(0x3d28ac8);
        bRam0000000003eb4c2b = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27_TypeInfo*/ uRam0000000003d28ac8);
      /*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27$$.ctor*/ func_0x01566c9c(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar20;
        return plVar4;
      }
      auVar20 = func_0x00f78af4();
      if ((bRam0000000003eb4c2c & 1) == 0) {
        func_0x00f78a20(0x3d28ad0);
        bRam0000000003eb4c2c = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28_TypeInfo*/ uRam0000000003d28ad0);
      /*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28$$.ctor*/ func_0x01566e2c(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar20;
        return plVar4;
      }
      auVar20 = func_0x00f78af4();
      if ((bRam0000000003eb4c2d & 1) == 0) {
        func_0x00f78a20(0x3d28ac0);
        bRam0000000003eb4c2d = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29_TypeInfo*/ uRam0000000003d28ac0);
      /*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29$$.ctor*/ func_0x01566ab4(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar20;
        return plVar4;
      }
      lVar6 = func_0x00f78af4();
      if ((*(long *)(lVar6 + 0x90) != 0) &&
         (plVar4 = *(long **)(*(long *)(lVar6 + 0x90) + 0x30), plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar4 = (long *)(**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
        return plVar4;
      }
      return (long *)0x0;
    }
    *(undefined1 (*) [12])(lVar3 + 0x10) = auVar20;
    if (*(long *)(lVar6 + 0x90) != 0) {
      plVar5 = *(long **)(*(long *)(lVar6 + 0x90) + 0x30);
      plVar4 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
        if (((ulong)plVar4 & 1) != 0) {
          return plVar4;
        }
      }
    }
    if (*(long *)(lVar6 + 0x88) != 0) {
      return plVar4;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
    lVar7 = /*STR('SETTINGS_SCREEN_LOAD_GAME_BODY')*/ lRam0000000003d72128;
    if (plVar4 == (long *)0x0) goto code_r0x014ea550;
    plVar4[5] = /*STR('SETTINGS_SCREEN_LOAD_GAME')*/ lRam0000000003d72120;
    plVar4[6] = lVar7;
    lVar7 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar4[8] = lVar7;
    lVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar7,lVar3,uRam0000000003d63c38,0);
    plVar4[10] = lVar7;
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d412a8);
    if ((lVar6 == 0) || (plVar5 = *(long **)(lVar6 + 0xa0), plVar5 == (long *)0x0))
    goto code_r0x014ea550;
    register0x00000008 = (BADSPACEBASE *)&lStack_120;
    unaff_x30 = puStack_128;
  }
  else {
    *(long *)(lVar3 + 0x10) = param_1;
    *(int *)(lVar3 + 0x18) = (int)param_2;
    if (*(long *)(param_1 + 0x90) != 0) {
      plVar5 = *(long **)(*(long *)(param_1 + 0x90) + 0x30);
      plVar4 = (long *)0x0;
      if ((plVar5 != (long *)0x0) &&
         (plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230)),
         ((ulong)plVar4 & 1) != 0)) {
        return plVar4;
      }
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      return plVar4;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
    lVar7 = /*STR('SETTINGS_SCREEN_CONFIRMATION_DELETE_CURRENT')*/ lRam0000000003d720d8;
    param_2 = plVar4;
    if (plVar4 == (long *)0x0) goto LAB_014e9e60;
    plVar4[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
    plVar4[6] = lVar7;
    lVar6 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar4[8] = lVar6;
    lVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar6,lVar3,uRam0000000003d63c20,0);
    plVar4[0xb] = lVar6;
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d412a8);
    if ((lVar7 == 0) || (plVar5 = *(long **)(lVar7 + 0xa0), plVar5 == (long *)0x0))
    goto LAB_014e9e60;
  }
Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal:
  plVar12 = plRam0000000003d3e0e8;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar19;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar16 = 0x3eb8000;
  plVar11 = plRam0000000003d3e0e8;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar4 != (long *)0x0) {
    uVar16 = 0x3d71000;
    uVar9 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
    plVar11 = (long *)0x0;
    uVar9 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar9);
    if (plVar5 != (long *)0x0) {
      plVar11 = *(long **)(*(long *)(plVar12[3] + 0xc0) + 8);
      (*(code *)*plVar11)(plVar5,uVar9);
      if (plVar5[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar5[7],plVar4,uRam0000000003d3b330);
        plVar11 = (long *)plVar5[8];
        if ((plVar11 == (long *)0x0) || ((int)plVar4[2] <= (int)plVar11[2])) {
code_r0x025dfcb4:
          plVar4 = (long *)(*(code *)**(undefined8 **)(*(long *)(plVar12[3] + 0xc0) + 0x30))(plVar5)
          ;
          if (((ulong)plVar4 & 1) != 0) {
            return plVar4;
          }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar4 = (long *)(**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
          return plVar4;
        }
        if (plVar5[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar5[7],0,plVar11,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(plVar12[3] + 0xc0) + 0x60))(plVar5);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar19 = func_0x00f78af4();
  plVar10 = auVar19._8_8_;
  lVar6 = auVar19._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar16;
  *(long **)((long)register0x00000008 + -0x58) = plVar4;
  *(long **)((long)register0x00000008 + -0x50) = plVar12;
  *(long **)((long)register0x00000008 + -0x48) = plVar5;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
  if (plVar10 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
    plVar12 = (long *)0x0;
    plVar5 = plVar10;
    plVar4 = plVar11;
    if (lVar6 != 0) {
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(plVar11[3] + 0xc0) + 0x70))(lVar6,uVar9);
      if ((uVar2 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(plVar11[3] + 0xc0) + 0x78))(lVar6,plVar10);
      }
      return (long *)(ulong)(uVar2 ^ 1);
    }
  }
  auVar19 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar16;
  *(long **)((long)register0x00000008 + -0x88) = plVar4;
  *(long **)((long)register0x00000008 + -0x80) = plVar12;
  *(long **)((long)register0x00000008 + -0x78) = plVar5;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x68) =
       &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
  iVar13 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar6 = *(long *)(auVar19._0_8_ + 0x38);
  if (lVar6 != 0) {
    iVar13 = *(int *)(lVar6 + 0x18);
    if (iVar13 < 1) goto code_r0x025dfe48;
    uVar2 = 0;
    iVar17 = -0x80000000;
    uVar14 = 0;
    do {
      if (*(uint *)(lVar6 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
      if (lVar6 == 0) break;
      iVar1 = *(int *)(lVar6 + 0x10);
      uVar15 = uVar2;
      if (iVar1 <= iVar17) {
        uVar15 = uVar14;
      }
      if (iVar13 - 1U == uVar2) goto code_r0x025dfe4c;
      if (iVar1 <= iVar17) {
        iVar1 = iVar17;
      }
      lVar6 = *(long *)(auVar19._0_8_ + 0x38);
      uVar2 = uVar2 + 1;
      iVar17 = iVar1;
      uVar14 = uVar15;
    } while (lVar6 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar15 = 0;
code_r0x025dfe4c:
  *auVar19._8_8_ = uVar15;
  return (long *)(ulong)(0 < iVar13);
}



// ============================================================
// RVA: 0x14e9e64 | Atlas.UI.Screens.SaveGameScreen.ConfirmDeleteLastPrompt
// ============================================================

long * Atlas_UI_Screens_SaveGameScreen__ConfirmDeleteLastPrompt(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar10;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  int iVar11;
  long *unaff_x21;
  uint uVar12;
  uint uVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  int iVar15;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined *puStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 *****pppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined1 auStack_80 [16];
  undefined8 ****ppppuStack_70;
  undefined *puStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  long *plVar9;
  
  auVar17._8_8_ = unaff_x19;
  auVar17._0_8_ = unaff_x20;
  lVar6 = 0x3d28a90;
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
  lVar3 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0_TypeInfo*/ uRam0000000003d28a90);
  plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0$$.ctor*/ func_0x0156623c(lVar3,0);
  if (lVar3 == 0) {
LAB_014ea034:
    auVar17 = func_0x00f78af4();
    puStack_38 = &Atlas_UI_Screens_SaveGameScreen__DeleteUnusedSlot;
    lStack_60 = lVar6;
    plStack_58 = param_2;
    lStack_50 = lVar3;
    lStack_48 = param_1;
    ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4c26 & 1) == 0) {
      func_0x00f78a20(0x3d28ab8);
      bRam0000000003eb4c26 = 1;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22_TypeInfo*/ uRam0000000003d28ab8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22$$.ctor*/ func_0x01566918(plVar4,0,0);
    if (plVar4 != (long *)0x0) {
      plVar4[4] = auVar17._0_8_;
      *(int *)(plVar4 + 5) = auVar17._8_4_;
      return plVar4;
    }
    auVar16 = func_0x00f78af4();
    uStack_90 = 0x3d28ab8;
    puStack_68 = &Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot;
    plStack_88 = plVar4;
    ppppuStack_70 = (undefined8 ****)&ppuStack_40;
    auStack_80 = auVar17;
    if ((bRam0000000003eb4c27 & 1) == 0) {
      func_0x00f78a20(0x3d28ab0);
      bRam0000000003eb4c27 = 1;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23_TypeInfo*/ uRam0000000003d28ab0);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23$$.ctor*/ func_0x01566514(plVar4,0,0);
    if (plVar4 != (long *)0x0) {
      plVar4[4] = auVar16._0_8_;
      *(int *)(plVar4 + 5) = auVar16._8_4_;
      return plVar4;
    }
    auVar17 = func_0x00f78af4();
    uStack_c0 = 0x3d28ab0;
    puStack_98 = &Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot;
    plStack_b8 = plVar4;
    pppppuStack_a0 = &ppppuStack_70;
    auStack_b0 = auVar16;
    if ((bRam0000000003eb4c28 & 1) == 0) {
      func_0x00f78a20(0x3d28aa8);
      bRam0000000003eb4c28 = 1;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24_TypeInfo*/ uRam0000000003d28aa8);
    /*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24$$.ctor*/ func_0x01566344(plVar4,0,0);
    if (plVar4 != (long *)0x0) {
      plVar4[4] = auVar17._0_8_;
      *(int *)(plVar4 + 5) = auVar17._8_4_;
      return plVar4;
    }
    auVar16 = func_0x00f78af4();
    lVar6 = auVar16._0_8_;
    lStack_f0 = 0x3d28aa8;
    puStack_c8 = &Atlas_UI_Screens_SaveGameScreen__OnUnUsedSlotSelected;
    unaff_x29 = &ppppppuStack_d0;
    unaff_x22 = 0x3d28a98;
    plStack_e8 = plVar4;
    ppppppuStack_d0 = &pppppuStack_a0;
    auStack_e0 = auVar17;
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
    lVar3 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0_TypeInfo*/ uRam0000000003d28a98);
    auVar17._8_8_ = lVar6;
    auVar17._0_8_ = lVar3;
    plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0$$.ctor*/ func_0x01566294(lVar3,0);
    unaff_x21 = auVar16._8_8_;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x10) = lVar6;
      *(int *)(lVar3 + 0x18) = auVar16._8_4_;
      if (*(long *)(lVar6 + 0x90) != 0) {
        plVar5 = *(long **)(*(long *)(lVar6 + 0x90) + 0x30);
        plVar4 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
          if (((ulong)plVar4 & 1) != 0) {
            return plVar4;
          }
        }
      }
      if (*(long *)(lVar6 + 0x88) != 0) {
        return plVar4;
      }
      param_2 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
      /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(param_2,0);
      lVar7 = /*STR('SETTINGS_SCREEN_START_NEW_GAME_BODY')*/ lRam0000000003d72140;
      unaff_x21 = param_2;
      if (param_2 != (long *)0x0) {
        param_2[5] = /*STR('SETTINGS_SCREEN_START_NEW_GAME')*/ lRam0000000003d72138;
        param_2[6] = lVar7;
        lVar7 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
        param_2[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
        param_2[8] = lVar7;
        unaff_x22 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        /*System.Action$$.ctor*/ func_0x02924c80(unaff_x22,lVar3,uRam0000000003d63c30,0);
        param_2[10] = unaff_x22;
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d412a8);
        if ((lVar6 != 0) && (plVar4 = *(long **)(lVar6 + 0xa0), plVar4 != (long *)0x0)) {
          register0x00000008 = (BADSPACEBASE *)&uStack_c0;
          unaff_x21 = plStack_e8;
          unaff_x22 = lStack_f0;
          unaff_x29 = (undefined8 *******)ppppppuStack_d0;
          unaff_x30 = puStack_c8;
          auVar17 = auStack_e0;
          goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
        }
      }
    }
    auVar18 = func_0x00f78af4();
    lVar6 = auVar18._0_8_;
    puStack_f8 = &Atlas_UI_Screens_SaveGameScreen__OnUsedSlotSelected;
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
    lVar3 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0_TypeInfo*/ uRam0000000003d28aa0);
    plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0$$.ctor*/ func_0x015662ec(lVar3,0);
    if (lVar3 == 0) {
code_r0x014ea550:
      auVar18 = func_0x00f78af4();
      if ((bRam0000000003eb4c2b & 1) == 0) {
        func_0x00f78a20(0x3d28ac8);
        bRam0000000003eb4c2b = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27_TypeInfo*/ uRam0000000003d28ac8);
      /*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27$$.ctor*/ func_0x01566c9c(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar18;
        return plVar4;
      }
      auVar18 = func_0x00f78af4();
      if ((bRam0000000003eb4c2c & 1) == 0) {
        func_0x00f78a20(0x3d28ad0);
        bRam0000000003eb4c2c = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28_TypeInfo*/ uRam0000000003d28ad0);
      /*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28$$.ctor*/ func_0x01566e2c(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar18;
        return plVar4;
      }
      auVar18 = func_0x00f78af4();
      if ((bRam0000000003eb4c2d & 1) == 0) {
        func_0x00f78a20(0x3d28ac0);
        bRam0000000003eb4c2d = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29_TypeInfo*/ uRam0000000003d28ac0);
      /*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29$$.ctor*/ func_0x01566ab4(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar18;
        return plVar4;
      }
      lVar6 = func_0x00f78af4();
      if ((*(long *)(lVar6 + 0x90) != 0) &&
         (plVar4 = *(long **)(*(long *)(lVar6 + 0x90) + 0x30), plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar4 = (long *)(**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
        return plVar4;
      }
      return (long *)0x0;
    }
    *(undefined1 (*) [12])(lVar3 + 0x10) = auVar18;
    if (*(long *)(lVar6 + 0x90) != 0) {
      plVar5 = *(long **)(*(long *)(lVar6 + 0x90) + 0x30);
      plVar4 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
        if (((ulong)plVar4 & 1) != 0) {
          return plVar4;
        }
      }
    }
    if (*(long *)(lVar6 + 0x88) != 0) {
      return plVar4;
    }
    param_2 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(param_2,0);
    lVar7 = /*STR('SETTINGS_SCREEN_LOAD_GAME_BODY')*/ lRam0000000003d72128;
    if (param_2 == (long *)0x0) goto code_r0x014ea550;
    param_2[5] = /*STR('SETTINGS_SCREEN_LOAD_GAME')*/ lRam0000000003d72120;
    param_2[6] = lVar7;
    lVar7 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    param_2[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    param_2[8] = lVar7;
    lVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar7,lVar3,uRam0000000003d63c38,0);
    param_2[10] = lVar7;
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d412a8);
    if ((lVar6 == 0) || (plVar4 = *(long **)(lVar6 + 0xa0), plVar4 == (long *)0x0))
    goto code_r0x014ea550;
    register0x00000008 = (BADSPACEBASE *)&lStack_f0;
    unaff_x30 = puStack_f8;
  }
  else {
    *(long *)(lVar3 + 0x10) = param_1;
    *(int *)(lVar3 + 0x18) = (int)param_2;
    if (*(long *)(param_1 + 0x90) != 0) {
      plVar5 = *(long **)(*(long *)(param_1 + 0x90) + 0x30);
      plVar4 = (long *)0x0;
      if ((plVar5 != (long *)0x0) &&
         (plVar4 = (long *)(**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230)),
         ((ulong)plVar4 & 1) != 0)) {
        return plVar4;
      }
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      return plVar4;
    }
    param_2 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(param_2,0);
    lVar7 = /*STR('SETTINGS_SCREEN_CONFIRMATION_DELETE_LAST')*/ lRam0000000003d720e0;
    if (param_2 == (long *)0x0) goto LAB_014ea034;
    param_2[5] = /*STR('SETTINGS_SCREEN_CONFIRMATION')*/ lRam0000000003d720c8;
    param_2[6] = lVar7;
    lVar6 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    param_2[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    param_2[8] = lVar6;
    lVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar6,lVar3,uRam0000000003d63c28,0);
    param_2[0xb] = lVar6;
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d412a8);
    if ((lVar7 == 0) || (plVar4 = *(long **)(lVar7 + 0xa0), plVar4 == (long *)0x0))
    goto LAB_014ea034;
  }
Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal:
  plVar5 = plRam0000000003d3e0e8;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar17;
  *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar14 = 0x3eb8000;
  plVar10 = plRam0000000003d3e0e8;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar14 = 0x3d71000;
    uVar8 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    plVar10 = (long *)0x0;
    uVar8 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar8);
    if (plVar4 != (long *)0x0) {
      plVar10 = *(long **)(*(long *)(plVar5[3] + 0xc0) + 8);
      (*(code *)*plVar10)(plVar4,uVar8);
      if (plVar4[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar4[7],param_2,uRam0000000003d3b330);
        plVar10 = (long *)plVar4[8];
        if ((plVar10 == (long *)0x0) || ((int)param_2[2] <= (int)plVar10[2])) {
code_r0x025dfcb4:
          plVar5 = (long *)(*(code *)**(undefined8 **)(*(long *)(plVar5[3] + 0xc0) + 0x30))(plVar4);
          if (((ulong)plVar5 & 1) != 0) {
            return plVar5;
          }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
          return plVar4;
        }
        if (plVar4[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar4[7],0,plVar10,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(plVar5[3] + 0xc0) + 0x60))(plVar4);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar17 = func_0x00f78af4();
  plVar9 = auVar17._8_8_;
  lVar6 = auVar17._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar14;
  *(long **)((long)register0x00000008 + -0x58) = param_2;
  *(long **)((long)register0x00000008 + -0x50) = plVar5;
  *(long **)((long)register0x00000008 + -0x48) = plVar4;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
  if (plVar9 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
    plVar5 = (long *)0x0;
    plVar4 = plVar9;
    param_2 = plVar10;
    if (lVar6 != 0) {
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(plVar10[3] + 0xc0) + 0x70))(lVar6,uVar8);
      if ((uVar2 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(plVar10[3] + 0xc0) + 0x78))(lVar6,plVar9);
      }
      return (long *)(ulong)(uVar2 ^ 1);
    }
  }
  auVar17 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar14;
  *(long **)((long)register0x00000008 + -0x88) = param_2;
  *(long **)((long)register0x00000008 + -0x80) = plVar5;
  *(long **)((long)register0x00000008 + -0x78) = plVar4;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x68) =
       &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
  iVar11 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar6 = *(long *)(auVar17._0_8_ + 0x38);
  if (lVar6 != 0) {
    iVar11 = *(int *)(lVar6 + 0x18);
    if (iVar11 < 1) goto code_r0x025dfe48;
    uVar2 = 0;
    iVar15 = -0x80000000;
    uVar12 = 0;
    do {
      if (*(uint *)(lVar6 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
      if (lVar6 == 0) break;
      iVar1 = *(int *)(lVar6 + 0x10);
      uVar13 = uVar2;
      if (iVar1 <= iVar15) {
        uVar13 = uVar12;
      }
      if (iVar11 - 1U == uVar2) goto code_r0x025dfe4c;
      if (iVar1 <= iVar15) {
        iVar1 = iVar15;
      }
      lVar6 = *(long *)(auVar17._0_8_ + 0x38);
      uVar2 = uVar2 + 1;
      iVar15 = iVar1;
      uVar12 = uVar13;
    } while (lVar6 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar13 = 0;
code_r0x025dfe4c:
  *auVar17._8_8_ = uVar13;
  return (long *)(ulong)(0 < iVar11);
}



// ============================================================
// RVA: 0x14ea038 | Atlas.UI.Screens.SaveGameScreen.DeleteUnusedSlot
// ============================================================

long * Atlas_UI_Screens_SaveGameScreen__DeleteUnusedSlot(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  int iVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ****ppppuVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined *puStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined1 auStack_80 [16];
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4c26 & 1) == 0) {
    func_0x00f78a20(0x3d28ab8);
    bRam0000000003eb4c26 = 1;
  }
  plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22_TypeInfo*/ uRam0000000003d28ab8);
  /*Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22$$.ctor*/ func_0x01566918(plVar4,0,0);
  if (plVar4 != (long *)0x0) {
    plVar4[4] = param_1;
    *(int *)(plVar4 + 5) = (int)param_2;
    return plVar4;
  }
  auVar20 = func_0x00f78af4();
  uStack_60 = 0x3d28ab8;
  puStack_38 = &Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot;
  plStack_58 = plVar4;
  lStack_50 = param_1;
  uStack_48 = param_2;
  puStack_40 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4c27 & 1) == 0) {
    func_0x00f78a20(0x3d28ab0);
    bRam0000000003eb4c27 = 1;
  }
  plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23_TypeInfo*/ uRam0000000003d28ab0);
  /*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23$$.ctor*/ func_0x01566514(plVar4,0,0);
  if (plVar4 != (long *)0x0) {
    plVar4[4] = auVar20._0_8_;
    *(int *)(plVar4 + 5) = auVar20._8_4_;
    return plVar4;
  }
  auVar21 = func_0x00f78af4();
  uStack_90 = 0x3d28ab0;
  puStack_68 = &Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot;
  plStack_88 = plVar4;
  ppuStack_70 = &puStack_40;
  auStack_80 = auVar20;
  if ((bRam0000000003eb4c28 & 1) == 0) {
    func_0x00f78a20(0x3d28aa8);
    bRam0000000003eb4c28 = 1;
  }
  plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24_TypeInfo*/ uRam0000000003d28aa8);
  /*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24$$.ctor*/ func_0x01566344(plVar4,0,0);
  if (plVar4 != (long *)0x0) {
    plVar4[4] = auVar21._0_8_;
    *(int *)(plVar4 + 5) = auVar21._8_4_;
    return plVar4;
  }
  auVar20 = func_0x00f78af4();
  lVar8 = auVar20._0_8_;
  lStack_c0 = 0x3d28aa8;
  puStack_98 = &Atlas_UI_Screens_SaveGameScreen__OnUnUsedSlotSelected;
  ppppuVar19 = &pppuStack_a0;
  lVar7 = 0x3d28a98;
  plStack_b8 = plVar4;
  pppuStack_a0 = &ppuStack_70;
  auStack_b0 = auVar21;
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
  lVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0_TypeInfo*/ uRam0000000003d28a98);
  auVar21._8_8_ = lVar8;
  auVar21._0_8_ = lVar5;
  plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0$$.ctor*/ func_0x01566294(lVar5,0);
  plVar6 = auVar20._8_8_;
  if (lVar5 == 0) {
code_r0x014ea37c:
    auVar22 = func_0x00f78af4();
    lVar8 = auVar22._0_8_;
    puStack_c8 = &Atlas_UI_Screens_SaveGameScreen__OnUsedSlotSelected;
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
    plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0$$.ctor*/ func_0x015662ec(lVar5,0);
    if (lVar5 == 0) {
code_r0x014ea550:
      auVar22 = func_0x00f78af4();
      if ((bRam0000000003eb4c2b & 1) == 0) {
        func_0x00f78a20(0x3d28ac8);
        bRam0000000003eb4c2b = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27_TypeInfo*/ uRam0000000003d28ac8);
      /*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27$$.ctor*/ func_0x01566c9c(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar22;
        return plVar4;
      }
      auVar22 = func_0x00f78af4();
      if ((bRam0000000003eb4c2c & 1) == 0) {
        func_0x00f78a20(0x3d28ad0);
        bRam0000000003eb4c2c = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28_TypeInfo*/ uRam0000000003d28ad0);
      /*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28$$.ctor*/ func_0x01566e2c(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar22;
        return plVar4;
      }
      auVar22 = func_0x00f78af4();
      if ((bRam0000000003eb4c2d & 1) == 0) {
        func_0x00f78a20(0x3d28ac0);
        bRam0000000003eb4c2d = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29_TypeInfo*/ uRam0000000003d28ac0);
      /*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29$$.ctor*/ func_0x01566ab4(plVar4,0,0);
      if (plVar4 == (long *)0x0) {
        lVar7 = func_0x00f78af4();
        if ((*(long *)(lVar7 + 0x90) != 0) &&
           (plVar4 = *(long **)(*(long *)(lVar7 + 0x90) + 0x30), plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar4 = (long *)(**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
          return plVar4;
        }
        return (long *)0x0;
      }
      *(undefined1 (*) [12])(plVar4 + 4) = auVar22;
      return plVar4;
    }
    *(undefined1 (*) [12])(lVar5 + 0x10) = auVar22;
    if (*(long *)(lVar8 + 0x90) != 0) {
      plVar9 = *(long **)(*(long *)(lVar8 + 0x90) + 0x30);
      plVar4 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
        if (((ulong)plVar4 & 1) != 0) {
          return plVar4;
        }
      }
    }
    if (*(long *)(lVar8 + 0x88) != 0) {
      return plVar4;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
    lVar10 = /*STR('SETTINGS_SCREEN_LOAD_GAME_BODY')*/ lRam0000000003d72128;
    if (plVar4 == (long *)0x0) goto code_r0x014ea550;
    plVar4[5] = /*STR('SETTINGS_SCREEN_LOAD_GAME')*/ lRam0000000003d72120;
    plVar4[6] = lVar10;
    lVar10 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar4[8] = lVar10;
    lVar10 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar10,lVar5,uRam0000000003d63c38,0);
    plVar4[10] = lVar10;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d412a8);
    if ((lVar8 == 0) || (plVar9 = *(long **)(lVar8 + 0xa0), plVar9 == (long *)0x0))
    goto code_r0x014ea550;
    plVar2 = &lStack_c0;
  }
  else {
    *(long *)(lVar5 + 0x10) = lVar8;
    *(int *)(lVar5 + 0x18) = auVar20._8_4_;
    if (*(long *)(lVar8 + 0x90) != 0) {
      plVar6 = *(long **)(*(long *)(lVar8 + 0x90) + 0x30);
      plVar4 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
        if (((ulong)plVar4 & 1) != 0) {
          return plVar4;
        }
      }
    }
    if (*(long *)(lVar8 + 0x88) != 0) {
      return plVar4;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
    lVar10 = /*STR('SETTINGS_SCREEN_START_NEW_GAME_BODY')*/ lRam0000000003d72140;
    plVar6 = plVar4;
    if (plVar4 == (long *)0x0) goto code_r0x014ea37c;
    plVar4[5] = /*STR('SETTINGS_SCREEN_START_NEW_GAME')*/ lRam0000000003d72138;
    plVar4[6] = lVar10;
    lVar7 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar4[8] = lVar7;
    lVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar7,lVar5,uRam0000000003d63c30,0);
    plVar4[10] = lVar7;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d412a8);
    if ((lVar8 == 0) || (plVar9 = *(long **)(lVar8 + 0xa0), plVar9 == (long *)0x0))
    goto code_r0x014ea37c;
    plVar2 = &uStack_90;
    plVar6 = plStack_b8;
    lVar7 = lStack_c0;
    ppppuVar19 = (undefined8 ****)pppuStack_a0;
    puStack_c8 = puStack_98;
    auVar21 = auStack_b0;
  }
  plVar13 = plRam0000000003d3e0e8;
  *(long *)((long)plVar2 + -0x30) = lVar7;
  *(long **)((long)plVar2 + -0x28) = plVar6;
  *(undefined1 (*) [16])((long)plVar2 + -0x20) = auVar21;
  *(undefined8 *****)((long)plVar2 + -0x10) = ppppuVar19;
  *(undefined **)((long)plVar2 + -8) = puStack_c8;
  uVar17 = 0x3eb8000;
  plVar6 = plRam0000000003d3e0e8;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar4 != (long *)0x0) {
    uVar17 = 0x3d71000;
    uVar11 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
    plVar6 = (long *)0x0;
    uVar11 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar11);
    if (plVar9 != (long *)0x0) {
      plVar6 = *(long **)(*(long *)(plVar13[3] + 0xc0) + 8);
      (*(code *)*plVar6)(plVar9,uVar11);
      if (plVar9[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar9[7],plVar4,uRam0000000003d3b330);
        plVar6 = (long *)plVar9[8];
        if ((plVar6 == (long *)0x0) || ((int)plVar4[2] <= (int)plVar6[2])) {
code_r0x025dfcb4:
          plVar4 = (long *)(*(code *)**(undefined8 **)(*(long *)(plVar13[3] + 0xc0) + 0x30))(plVar9)
          ;
          if (((ulong)plVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar4 = (long *)(**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0))
            ;
            return plVar4;
          }
          return plVar4;
        }
        if (plVar9[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar9[7],0,plVar6,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(plVar13[3] + 0xc0) + 0x60))(plVar9);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar20 = func_0x00f78af4();
  plVar12 = auVar20._8_8_;
  lVar7 = auVar20._0_8_;
  *(undefined8 *)((long)plVar2 + -0x60) = uVar17;
  *(long **)((long)plVar2 + -0x58) = plVar4;
  *(long **)((long)plVar2 + -0x50) = plVar13;
  *(long **)((long)plVar2 + -0x48) = plVar9;
  *(undefined1 **)((long)plVar2 + -0x40) = (undefined1 *)((long)plVar2 + -0x10);
  *(undefined **)((long)plVar2 + -0x38) =
       &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
  if (plVar12 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
    plVar13 = (long *)0x0;
    plVar9 = plVar12;
    plVar4 = plVar6;
    if (lVar7 != 0) {
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(plVar6[3] + 0xc0) + 0x70))(lVar7,uVar11);
      if ((uVar3 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(plVar6[3] + 0xc0) + 0x78))(lVar7,plVar12);
      }
      return (long *)(ulong)(uVar3 ^ 1);
    }
  }
  auVar20 = func_0x00f78af4();
  *(undefined8 *)((long)plVar2 + -0xb0) = unaff_x26;
  *(undefined8 *)((long)plVar2 + -0xa8) = unaff_x25;
  *(undefined8 *)((long)plVar2 + -0xa0) = unaff_x24;
  *(undefined8 *)((long)plVar2 + -0x98) = unaff_x23;
  *(undefined8 *)((long)plVar2 + -0x90) = uVar17;
  *(long **)((long)plVar2 + -0x88) = plVar4;
  *(long **)((long)plVar2 + -0x80) = plVar13;
  *(long **)((long)plVar2 + -0x78) = plVar9;
  *(undefined1 **)((long)plVar2 + -0x70) = (undefined1 *)((long)plVar2 + -0x40);
  *(undefined **)((long)plVar2 + -0x68) =
       &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
  iVar14 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar7 = *(long *)(auVar20._0_8_ + 0x38);
  if (lVar7 != 0) {
    iVar14 = *(int *)(lVar7 + 0x18);
    if (iVar14 < 1) goto code_r0x025dfe48;
    uVar3 = 0;
    iVar18 = -0x80000000;
    uVar15 = 0;
    do {
      if (*(uint *)(lVar7 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
      if (lVar7 == 0) break;
      iVar1 = *(int *)(lVar7 + 0x10);
      uVar16 = uVar3;
      if (iVar1 <= iVar18) {
        uVar16 = uVar15;
      }
      if (iVar14 - 1U == uVar3) goto code_r0x025dfe4c;
      if (iVar1 <= iVar18) {
        iVar1 = iVar18;
      }
      lVar7 = *(long *)(auVar20._0_8_ + 0x38);
      uVar3 = uVar3 + 1;
      iVar18 = iVar1;
      uVar15 = uVar16;
    } while (lVar7 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar16 = 0;
code_r0x025dfe4c:
  *auVar20._8_8_ = uVar16;
  return (long *)(ulong)(0 < iVar14);
}



// ============================================================
// RVA: 0x14ea0b4 | Atlas.UI.Screens.SaveGameScreen.DeleteLastSlot
// ============================================================

long * Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  int iVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ****ppppuVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined *puStack_98;
  long lStack_90;
  long *plStack_88;
  undefined1 auStack_80 [16];
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4c27 & 1) == 0) {
    func_0x00f78a20(0x3d28ab0);
    bRam0000000003eb4c27 = 1;
  }
  plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23_TypeInfo*/ uRam0000000003d28ab0);
  /*Atlas.UI.Screens.SaveGameScreen.<DeleteLastSlot>d__23$$.ctor*/ func_0x01566514(plVar4,0,0);
  if (plVar4 != (long *)0x0) {
    plVar4[4] = param_1;
    *(int *)(plVar4 + 5) = (int)param_2;
    return plVar4;
  }
  auVar20 = func_0x00f78af4();
  uStack_60 = 0x3d28ab0;
  puStack_38 = &Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot;
  plStack_58 = plVar4;
  lStack_50 = param_1;
  uStack_48 = param_2;
  ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
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
  auVar21 = func_0x00f78af4();
  lVar8 = auVar21._0_8_;
  lStack_90 = 0x3d28aa8;
  puStack_68 = &Atlas_UI_Screens_SaveGameScreen__OnUnUsedSlotSelected;
  ppppuVar19 = &pppuStack_70;
  lVar7 = 0x3d28a98;
  plStack_88 = plVar4;
  pppuStack_70 = &ppuStack_40;
  auStack_80 = auVar20;
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
  lVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0_TypeInfo*/ uRam0000000003d28a98);
  auVar20._8_8_ = lVar8;
  auVar20._0_8_ = lVar5;
  plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0$$.ctor*/ func_0x01566294(lVar5,0);
  plVar6 = auVar21._8_8_;
  if (lVar5 == 0) {
code_r0x014ea37c:
    auVar22 = func_0x00f78af4();
    lVar8 = auVar22._0_8_;
    puStack_98 = &Atlas_UI_Screens_SaveGameScreen__OnUsedSlotSelected;
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
    plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0$$.ctor*/ func_0x015662ec(lVar5,0);
    if (lVar5 == 0) {
code_r0x014ea550:
      auVar22 = func_0x00f78af4();
      if ((bRam0000000003eb4c2b & 1) == 0) {
        func_0x00f78a20(0x3d28ac8);
        bRam0000000003eb4c2b = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27_TypeInfo*/ uRam0000000003d28ac8);
      /*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27$$.ctor*/ func_0x01566c9c(plVar4,0,0);
      if (plVar4 == (long *)0x0) {
        auVar22 = func_0x00f78af4();
        if ((bRam0000000003eb4c2c & 1) == 0) {
          func_0x00f78a20(0x3d28ad0);
          bRam0000000003eb4c2c = 1;
        }
        plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28_TypeInfo*/ uRam0000000003d28ad0);
        /*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28$$.ctor*/ func_0x01566e2c(plVar4,0,0);
        if (plVar4 == (long *)0x0) {
          auVar22 = func_0x00f78af4();
          if ((bRam0000000003eb4c2d & 1) == 0) {
            func_0x00f78a20(0x3d28ac0);
            bRam0000000003eb4c2d = 1;
          }
          plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29_TypeInfo*/ uRam0000000003d28ac0);
          /*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29$$.ctor*/ func_0x01566ab4(plVar4,0,0);
          if (plVar4 == (long *)0x0) {
            lVar7 = func_0x00f78af4();
            if ((*(long *)(lVar7 + 0x90) != 0) &&
               (plVar4 = *(long **)(*(long *)(lVar7 + 0x90) + 0x30), plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar4 = (long *)(**(code **)(*plVar4 + 0x228))
                                         (plVar4,*(undefined8 *)(*plVar4 + 0x230));
              return plVar4;
            }
            return (long *)0x0;
          }
          *(undefined1 (*) [12])(plVar4 + 4) = auVar22;
          return plVar4;
        }
        *(undefined1 (*) [12])(plVar4 + 4) = auVar22;
        return plVar4;
      }
      *(undefined1 (*) [12])(plVar4 + 4) = auVar22;
      return plVar4;
    }
    *(undefined1 (*) [12])(lVar5 + 0x10) = auVar22;
    if (*(long *)(lVar8 + 0x90) != 0) {
      plVar9 = *(long **)(*(long *)(lVar8 + 0x90) + 0x30);
      plVar4 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
        if (((ulong)plVar4 & 1) != 0) {
          return plVar4;
        }
      }
    }
    if (*(long *)(lVar8 + 0x88) != 0) {
      return plVar4;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
    lVar10 = /*STR('SETTINGS_SCREEN_LOAD_GAME_BODY')*/ lRam0000000003d72128;
    if (plVar4 == (long *)0x0) goto code_r0x014ea550;
    plVar4[5] = /*STR('SETTINGS_SCREEN_LOAD_GAME')*/ lRam0000000003d72120;
    plVar4[6] = lVar10;
    lVar10 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar4[8] = lVar10;
    lVar10 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar10,lVar5,uRam0000000003d63c38,0);
    plVar4[10] = lVar10;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d412a8);
    if ((lVar8 == 0) || (plVar9 = *(long **)(lVar8 + 0xa0), plVar9 == (long *)0x0))
    goto code_r0x014ea550;
    plVar2 = &lStack_90;
  }
  else {
    *(long *)(lVar5 + 0x10) = lVar8;
    *(int *)(lVar5 + 0x18) = auVar21._8_4_;
    if (*(long *)(lVar8 + 0x90) != 0) {
      plVar6 = *(long **)(*(long *)(lVar8 + 0x90) + 0x30);
      plVar4 = (long *)0x0;
      if (plVar6 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
        if (((ulong)plVar4 & 1) != 0) {
          return plVar4;
        }
      }
    }
    if (*(long *)(lVar8 + 0x88) != 0) {
      return plVar4;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
    lVar10 = /*STR('SETTINGS_SCREEN_START_NEW_GAME_BODY')*/ lRam0000000003d72140;
    plVar6 = plVar4;
    if (plVar4 == (long *)0x0) goto code_r0x014ea37c;
    plVar4[5] = /*STR('SETTINGS_SCREEN_START_NEW_GAME')*/ lRam0000000003d72138;
    plVar4[6] = lVar10;
    lVar7 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar4[8] = lVar7;
    lVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar7,lVar5,uRam0000000003d63c30,0);
    plVar4[10] = lVar7;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d412a8);
    if ((lVar8 == 0) || (plVar9 = *(long **)(lVar8 + 0xa0), plVar9 == (long *)0x0))
    goto code_r0x014ea37c;
    plVar2 = &uStack_60;
    plVar6 = plStack_88;
    lVar7 = lStack_90;
    ppppuVar19 = (undefined8 ****)pppuStack_70;
    puStack_98 = puStack_68;
    auVar20 = auStack_80;
  }
  plVar13 = plRam0000000003d3e0e8;
  *(long *)((long)plVar2 + -0x30) = lVar7;
  *(long **)((long)plVar2 + -0x28) = plVar6;
  *(undefined1 (*) [16])((long)plVar2 + -0x20) = auVar20;
  *(undefined8 *****)((long)plVar2 + -0x10) = ppppuVar19;
  *(undefined **)((long)plVar2 + -8) = puStack_98;
  uVar17 = 0x3eb8000;
  plVar6 = plRam0000000003d3e0e8;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar4 != (long *)0x0) {
    uVar17 = 0x3d71000;
    uVar11 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
    plVar6 = (long *)0x0;
    uVar11 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar11);
    if (plVar9 != (long *)0x0) {
      plVar6 = *(long **)(*(long *)(plVar13[3] + 0xc0) + 8);
      (*(code *)*plVar6)(plVar9,uVar11);
      if (plVar9[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar9[7],plVar4,uRam0000000003d3b330);
        plVar6 = (long *)plVar9[8];
        if ((plVar6 == (long *)0x0) || ((int)plVar4[2] <= (int)plVar6[2])) {
code_r0x025dfcb4:
          plVar4 = (long *)(*(code *)**(undefined8 **)(*(long *)(plVar13[3] + 0xc0) + 0x30))(plVar9)
          ;
          if (((ulong)plVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar4 = (long *)(**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0))
            ;
            return plVar4;
          }
          return plVar4;
        }
        if (plVar9[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar9[7],0,plVar6,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(plVar13[3] + 0xc0) + 0x60))(plVar9);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar20 = func_0x00f78af4();
  plVar12 = auVar20._8_8_;
  lVar7 = auVar20._0_8_;
  *(undefined8 *)((long)plVar2 + -0x60) = uVar17;
  *(long **)((long)plVar2 + -0x58) = plVar4;
  *(long **)((long)plVar2 + -0x50) = plVar13;
  *(long **)((long)plVar2 + -0x48) = plVar9;
  *(undefined1 **)((long)plVar2 + -0x40) = (undefined1 *)((long)plVar2 + -0x10);
  *(undefined **)((long)plVar2 + -0x38) =
       &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
  if (plVar12 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
    plVar13 = (long *)0x0;
    plVar9 = plVar12;
    plVar4 = plVar6;
    if (lVar7 != 0) {
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(plVar6[3] + 0xc0) + 0x70))(lVar7,uVar11);
      if ((uVar3 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(plVar6[3] + 0xc0) + 0x78))(lVar7,plVar12);
      }
      return (long *)(ulong)(uVar3 ^ 1);
    }
  }
  auVar20 = func_0x00f78af4();
  *(undefined8 *)((long)plVar2 + -0xb0) = unaff_x26;
  *(undefined8 *)((long)plVar2 + -0xa8) = unaff_x25;
  *(undefined8 *)((long)plVar2 + -0xa0) = unaff_x24;
  *(undefined8 *)((long)plVar2 + -0x98) = unaff_x23;
  *(undefined8 *)((long)plVar2 + -0x90) = uVar17;
  *(long **)((long)plVar2 + -0x88) = plVar4;
  *(long **)((long)plVar2 + -0x80) = plVar13;
  *(long **)((long)plVar2 + -0x78) = plVar9;
  *(undefined1 **)((long)plVar2 + -0x70) = (undefined1 *)((long)plVar2 + -0x40);
  *(undefined **)((long)plVar2 + -0x68) =
       &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
  iVar14 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar7 = *(long *)(auVar20._0_8_ + 0x38);
  if (lVar7 != 0) {
    iVar14 = *(int *)(lVar7 + 0x18);
    if (iVar14 < 1) goto code_r0x025dfe48;
    uVar3 = 0;
    iVar18 = -0x80000000;
    uVar15 = 0;
    do {
      if (*(uint *)(lVar7 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
      if (lVar7 == 0) break;
      iVar1 = *(int *)(lVar7 + 0x10);
      uVar16 = uVar3;
      if (iVar1 <= iVar18) {
        uVar16 = uVar15;
      }
      if (iVar14 - 1U == uVar3) goto code_r0x025dfe4c;
      if (iVar1 <= iVar18) {
        iVar1 = iVar18;
      }
      lVar7 = *(long *)(auVar20._0_8_ + 0x38);
      uVar3 = uVar3 + 1;
      iVar18 = iVar1;
      uVar15 = uVar16;
    } while (lVar7 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar16 = 0;
code_r0x025dfe4c:
  *auVar20._8_8_ = uVar16;
  return (long *)(ulong)(0 < iVar14);
}



// ============================================================
// RVA: 0x14ea130 | Atlas.UI.Screens.SaveGameScreen.DeleteCurrentSlot
// ============================================================

long * Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  int iVar20;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ****ppppuVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  undefined *puStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4c28 & 1) == 0) {
    func_0x00f78a20(0x3d28aa8);
    bRam0000000003eb4c28 = 1;
  }
  plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24_TypeInfo*/ uRam0000000003d28aa8);
  /*Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24$$.ctor*/ func_0x01566344(plVar4,0,0);
  if (plVar4 != (long *)0x0) {
    plVar4[4] = param_1;
    *(int *)(plVar4 + 5) = (int)param_2;
    return plVar4;
  }
  auVar22 = func_0x00f78af4();
  lVar14 = auVar22._0_8_;
  lStack_60 = 0x3d28aa8;
  puStack_38 = &Atlas_UI_Screens_SaveGameScreen__OnUnUsedSlotSelected;
  ppppuVar21 = &pppuStack_40;
  lVar7 = 0x3d28a98;
  plStack_58 = plVar4;
  lStack_50 = param_1;
  lStack_48 = param_2;
  pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
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
  lVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0_TypeInfo*/ uRam0000000003d28a98);
  plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0$$.ctor*/ func_0x01566294(lVar5,0);
  plVar6 = auVar22._8_8_;
  if (lVar5 == 0) {
code_r0x014ea37c:
    auVar23 = func_0x00f78af4();
    lVar8 = auVar23._0_8_;
    puStack_68 = &Atlas_UI_Screens_SaveGameScreen__OnUsedSlotSelected;
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
    plVar4 = (long *)/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0$$.ctor*/ func_0x015662ec(lVar10,0);
    if (lVar10 == 0) {
code_r0x014ea550:
      auVar23 = func_0x00f78af4();
      if ((bRam0000000003eb4c2b & 1) == 0) {
        func_0x00f78a20(0x3d28ac8);
        bRam0000000003eb4c2b = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27_TypeInfo*/ uRam0000000003d28ac8);
      /*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27$$.ctor*/ func_0x01566c9c(plVar4,0,0);
      if (plVar4 != (long *)0x0) {
        *(undefined1 (*) [12])(plVar4 + 4) = auVar23;
        return plVar4;
      }
      auVar23 = func_0x00f78af4();
      if ((bRam0000000003eb4c2c & 1) == 0) {
        func_0x00f78a20(0x3d28ad0);
        bRam0000000003eb4c2c = 1;
      }
      plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28_TypeInfo*/ uRam0000000003d28ad0);
      /*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28$$.ctor*/ func_0x01566e2c(plVar4,0,0);
      if (plVar4 == (long *)0x0) {
        auVar23 = func_0x00f78af4();
        if ((bRam0000000003eb4c2d & 1) == 0) {
          func_0x00f78a20(0x3d28ac0);
          bRam0000000003eb4c2d = 1;
        }
        plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29_TypeInfo*/ uRam0000000003d28ac0);
        /*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29$$.ctor*/ func_0x01566ab4(plVar4,0,0);
        if (plVar4 == (long *)0x0) {
          lVar7 = func_0x00f78af4();
          if ((*(long *)(lVar7 + 0x90) != 0) &&
             (plVar4 = *(long **)(*(long *)(lVar7 + 0x90) + 0x30), plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar4 = (long *)(**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230))
            ;
            return plVar4;
          }
          return (long *)0x0;
        }
        *(undefined1 (*) [12])(plVar4 + 4) = auVar23;
        return plVar4;
      }
      *(undefined1 (*) [12])(plVar4 + 4) = auVar23;
      return plVar4;
    }
    *(undefined1 (*) [12])(lVar10 + 0x10) = auVar23;
    if (*(long *)(lVar8 + 0x90) != 0) {
      plVar9 = *(long **)(*(long *)(lVar8 + 0x90) + 0x30);
      plVar4 = (long *)0x0;
      if ((plVar9 != (long *)0x0) &&
         (plVar4 = (long *)(**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230)),
         ((ulong)plVar4 & 1) != 0)) {
        return plVar4;
      }
    }
    if (*(long *)(lVar8 + 0x88) != 0) {
      return plVar4;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
    lVar11 = /*STR('SETTINGS_SCREEN_LOAD_GAME_BODY')*/ lRam0000000003d72128;
    if (plVar4 == (long *)0x0) goto code_r0x014ea550;
    plVar4[5] = /*STR('SETTINGS_SCREEN_LOAD_GAME')*/ lRam0000000003d72120;
    plVar4[6] = lVar11;
    lVar11 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar4[8] = lVar11;
    lVar11 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar11,lVar10,uRam0000000003d63c38,0);
    plVar4[10] = lVar11;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d412a8);
    if ((lVar8 == 0) || (plVar9 = *(long **)(lVar8 + 0xa0), plVar9 == (long *)0x0))
    goto code_r0x014ea550;
    plVar2 = &lStack_60;
  }
  else {
    *(long *)(lVar5 + 0x10) = lVar14;
    *(int *)(lVar5 + 0x18) = auVar22._8_4_;
    if (*(long *)(lVar14 + 0x90) != 0) {
      plVar6 = *(long **)(*(long *)(lVar14 + 0x90) + 0x30);
      plVar4 = (long *)0x0;
      if ((plVar6 != (long *)0x0) &&
         (plVar4 = (long *)(**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230)),
         ((ulong)plVar4 & 1) != 0)) {
        return plVar4;
      }
    }
    if (*(long *)(lVar14 + 0x88) != 0) {
      return plVar4;
    }
    plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar4,0);
    lVar8 = /*STR('SETTINGS_SCREEN_START_NEW_GAME_BODY')*/ lRam0000000003d72140;
    plVar6 = plVar4;
    if (plVar4 == (long *)0x0) goto code_r0x014ea37c;
    plVar4[5] = /*STR('SETTINGS_SCREEN_START_NEW_GAME')*/ lRam0000000003d72138;
    plVar4[6] = lVar8;
    lVar7 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    plVar4[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    plVar4[8] = lVar7;
    lVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar7,lVar5,uRam0000000003d63c30,0);
    plVar4[10] = lVar7;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar14,uRam0000000003d412a8);
    if ((lVar8 == 0) || (plVar9 = *(long **)(lVar8 + 0xa0), plVar9 == (long *)0x0))
    goto code_r0x014ea37c;
    plVar2 = (long *)&stack0xffffffffffffffd0;
    lVar14 = lStack_48;
    lVar5 = lStack_50;
    plVar6 = plStack_58;
    lVar7 = lStack_60;
    ppppuVar21 = (undefined8 ****)pppuStack_40;
    puStack_68 = puStack_38;
  }
  plVar15 = plRam0000000003d3e0e8;
  *(long *)((long)plVar2 + -0x30) = lVar7;
  *(long **)((long)plVar2 + -0x28) = plVar6;
  *(long *)((long)plVar2 + -0x20) = lVar5;
  *(long *)((long)plVar2 + -0x18) = lVar14;
  *(undefined8 *****)((long)plVar2 + -0x10) = ppppuVar21;
  *(undefined **)((long)plVar2 + -8) = puStack_68;
  uVar19 = 0x3eb8000;
  plVar6 = plRam0000000003d3e0e8;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar4 != (long *)0x0) {
    uVar19 = 0x3d71000;
    uVar12 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
    plVar6 = (long *)0x0;
    uVar12 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar12);
    if (plVar9 != (long *)0x0) {
      plVar6 = *(long **)(*(long *)(plVar15[3] + 0xc0) + 8);
      (*(code *)*plVar6)(plVar9,uVar12);
      if (plVar9[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar9[7],plVar4,uRam0000000003d3b330);
        plVar6 = (long *)plVar9[8];
        if ((plVar6 == (long *)0x0) || ((int)plVar4[2] <= (int)plVar6[2])) {
code_r0x025dfcb4:
          plVar4 = (long *)(*(code *)**(undefined8 **)(*(long *)(plVar15[3] + 0xc0) + 0x30))(plVar9)
          ;
          if (((ulong)plVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar4 = (long *)(**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0))
            ;
            return plVar4;
          }
          return plVar4;
        }
        if (plVar9[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar9[7],0,plVar6,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(plVar15[3] + 0xc0) + 0x60))(plVar9);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar22 = func_0x00f78af4();
  plVar13 = auVar22._8_8_;
  lVar7 = auVar22._0_8_;
  *(undefined8 *)((long)plVar2 + -0x60) = uVar19;
  *(long **)((long)plVar2 + -0x58) = plVar4;
  *(long **)((long)plVar2 + -0x50) = plVar15;
  *(long **)((long)plVar2 + -0x48) = plVar9;
  *(undefined1 **)((long)plVar2 + -0x40) = (undefined1 *)((long)plVar2 + -0x10);
  *(undefined **)((long)plVar2 + -0x38) =
       &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
  if (plVar13 != (long *)0x0) {
    uVar12 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
    plVar15 = (long *)0x0;
    plVar9 = plVar13;
    plVar4 = plVar6;
    if (lVar7 != 0) {
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(plVar6[3] + 0xc0) + 0x70))(lVar7,uVar12);
      if ((uVar3 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(plVar6[3] + 0xc0) + 0x78))(lVar7,plVar13);
      }
      return (long *)(ulong)(uVar3 ^ 1);
    }
  }
  auVar22 = func_0x00f78af4();
  *(undefined8 *)((long)plVar2 + -0xb0) = unaff_x26;
  *(undefined8 *)((long)plVar2 + -0xa8) = unaff_x25;
  *(undefined8 *)((long)plVar2 + -0xa0) = unaff_x24;
  *(undefined8 *)((long)plVar2 + -0x98) = unaff_x23;
  *(undefined8 *)((long)plVar2 + -0x90) = uVar19;
  *(long **)((long)plVar2 + -0x88) = plVar4;
  *(long **)((long)plVar2 + -0x80) = plVar15;
  *(long **)((long)plVar2 + -0x78) = plVar9;
  *(undefined1 **)((long)plVar2 + -0x70) = (undefined1 *)((long)plVar2 + -0x40);
  *(undefined **)((long)plVar2 + -0x68) =
       &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
  iVar16 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar7 = *(long *)(auVar22._0_8_ + 0x38);
  if (lVar7 != 0) {
    iVar16 = *(int *)(lVar7 + 0x18);
    if (iVar16 < 1) goto code_r0x025dfe48;
    uVar3 = 0;
    iVar20 = -0x80000000;
    uVar17 = 0;
    do {
      if (*(uint *)(lVar7 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
      if (lVar7 == 0) break;
      iVar1 = *(int *)(lVar7 + 0x10);
      uVar18 = uVar3;
      if (iVar1 <= iVar20) {
        uVar18 = uVar17;
      }
      if (iVar16 - 1U == uVar3) goto code_r0x025dfe4c;
      if (iVar1 <= iVar20) {
        iVar1 = iVar20;
      }
      lVar7 = *(long *)(auVar22._0_8_ + 0x38);
      uVar3 = uVar3 + 1;
      iVar20 = iVar1;
      uVar17 = uVar18;
    } while (lVar7 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar18 = 0;
code_r0x025dfe4c:
  *auVar22._8_8_ = uVar18;
  return (long *)(ulong)(0 < iVar16);
}



// ============================================================
// RVA: 0x14ea1ac | Atlas.UI.Screens.SaveGameScreen.OnUnUsedSlotSelected
// ============================================================

ulong Atlas_UI_Screens_SaveGameScreen__OnUnUsedSlotSelected(long param_1,long *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long unaff_x19;
  long unaff_x20;
  long *plVar13;
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
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined *puStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
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
  lVar4 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0_TypeInfo*/ uRam0000000003d28a98);
  uVar5 = /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass25_0$$.ctor*/ func_0x01566294(lVar4,0);
  lVar7 = 0x3d28a98;
  if (lVar4 == 0) {
LAB_014ea37c:
    unaff_x22 = lVar7;
    unaff_x21 = param_2;
    auVar20 = func_0x00f78af4();
    lVar7 = auVar20._0_8_;
    puStack_38 = &Atlas_UI_Screens_SaveGameScreen__OnUsedSlotSelected;
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
    lVar8 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0_TypeInfo*/ uRam0000000003d28aa0);
    uVar5 = /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0$$.ctor*/ func_0x015662ec(lVar8,0);
    if (lVar8 == 0) {
code_r0x014ea550:
      auVar20 = func_0x00f78af4();
      if ((bRam0000000003eb4c2b & 1) == 0) {
        func_0x00f78a20(0x3d28ac8);
        bRam0000000003eb4c2b = 1;
      }
      uVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27_TypeInfo*/ uRam0000000003d28ac8);
      /*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27$$.ctor*/ func_0x01566c9c(uVar5,0,0);
      if (uVar5 != 0) {
        *(undefined1 (*) [12])(uVar5 + 0x20) = auVar20;
        return uVar5;
      }
      auVar20 = func_0x00f78af4();
      if ((bRam0000000003eb4c2c & 1) == 0) {
        func_0x00f78a20(0x3d28ad0);
        bRam0000000003eb4c2c = 1;
      }
      uVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28_TypeInfo*/ uRam0000000003d28ad0);
      /*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28$$.ctor*/ func_0x01566e2c(uVar5,0,0);
      if (uVar5 != 0) {
        *(undefined1 (*) [12])(uVar5 + 0x20) = auVar20;
        return uVar5;
      }
      auVar20 = func_0x00f78af4();
      if ((bRam0000000003eb4c2d & 1) == 0) {
        func_0x00f78a20(0x3d28ac0);
        bRam0000000003eb4c2d = 1;
      }
      uVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29_TypeInfo*/ uRam0000000003d28ac0);
      /*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29$$.ctor*/ func_0x01566ab4(uVar5,0,0);
      if (uVar5 != 0) {
        *(undefined1 (*) [12])(uVar5 + 0x20) = auVar20;
        return uVar5;
      }
      lVar7 = func_0x00f78af4();
      if ((*(long *)(lVar7 + 0x90) != 0) &&
         (plVar6 = *(long **)(*(long *)(lVar7 + 0x90) + 0x30), plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
        return uVar5;
      }
      return 0;
    }
    *(undefined1 (*) [12])(lVar8 + 0x10) = auVar20;
    if (*(long *)(lVar7 + 0x90) != 0) {
      plVar6 = *(long **)(*(long *)(lVar7 + 0x90) + 0x30);
      uVar5 = 0;
      if ((plVar6 != (long *)0x0) &&
         (uVar5 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230)),
         (uVar5 & 1) != 0)) {
        return uVar5;
      }
    }
    if (*(long *)(lVar7 + 0x88) != 0) {
      return uVar5;
    }
    param_2 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(param_2,0);
    lVar9 = /*STR('SETTINGS_SCREEN_LOAD_GAME_BODY')*/ lRam0000000003d72128;
    if (param_2 == (long *)0x0) goto code_r0x014ea550;
    param_2[5] = /*STR('SETTINGS_SCREEN_LOAD_GAME')*/ lRam0000000003d72120;
    param_2[6] = lVar9;
    lVar9 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    param_2[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    param_2[8] = lVar9;
    lVar9 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar9,lVar8,uRam0000000003d63c38,0);
    param_2[10] = lVar9;
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar7,uRam0000000003d412a8);
    if ((lVar7 == 0) || (plVar6 = *(long **)(lVar7 + 0xa0), plVar6 == (long *)0x0))
    goto code_r0x014ea550;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x20 = lVar4;
    unaff_x29 = puVar1;
  }
  else {
    *(long *)(lVar4 + 0x10) = param_1;
    *(int *)(lVar4 + 0x18) = (int)param_2;
    if (*(long *)(param_1 + 0x90) != 0) {
      plVar6 = *(long **)(*(long *)(param_1 + 0x90) + 0x30);
      uVar5 = 0;
      if ((plVar6 != (long *)0x0) &&
         (uVar5 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230)),
         (uVar5 & 1) != 0)) {
        return uVar5;
      }
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      return uVar5;
    }
    param_2 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(param_2,0);
    lVar8 = /*STR('SETTINGS_SCREEN_START_NEW_GAME_BODY')*/ lRam0000000003d72140;
    if (param_2 == (long *)0x0) goto LAB_014ea37c;
    param_2[5] = /*STR('SETTINGS_SCREEN_START_NEW_GAME')*/ lRam0000000003d72138;
    param_2[6] = lVar8;
    lVar7 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
    param_2[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
    param_2[8] = lVar7;
    lVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(lVar7,lVar4,uRam0000000003d63c30,0);
    param_2[10] = lVar7;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d412a8);
    if ((lVar8 == 0) ||
       (plVar6 = *(long **)(lVar8 + 0xa0), puStack_38 = unaff_x30, plVar6 == (long *)0x0))
    goto LAB_014ea37c;
  }
  plVar13 = plRam0000000003d3e0e8;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = puStack_38;
  uVar17 = 0x3eb8000;
  plVar12 = plRam0000000003d3e0e8;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar17 = 0x3d71000;
    uVar10 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    plVar12 = (long *)0x0;
    uVar10 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar10);
    if (plVar6 != (long *)0x0) {
      plVar12 = *(long **)(*(long *)(plVar13[3] + 0xc0) + 8);
      (*(code *)*plVar12)(plVar6,uVar10);
      if (plVar6[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar6[7],param_2,uRam0000000003d3b330);
        plVar12 = (long *)plVar6[8];
        if ((plVar12 == (long *)0x0) || ((int)param_2[2] <= (int)plVar12[2])) {
code_r0x025dfcb4:
          uVar5 = (*(code *)**(undefined8 **)(*(long *)(plVar13[3] + 0xc0) + 0x30))(plVar6);
          if ((uVar5 & 1) != 0) {
            return uVar5;
          }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
          return uVar5;
        }
        if (plVar6[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar6[7],0,plVar12,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(plVar13[3] + 0xc0) + 0x60))(plVar6);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar19 = func_0x00f78af4();
  plVar11 = auVar19._8_8_;
  lVar7 = auVar19._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar17;
  *(long **)((long)register0x00000008 + -0x58) = param_2;
  *(long **)((long)register0x00000008 + -0x50) = plVar13;
  *(long **)((long)register0x00000008 + -0x48) = plVar6;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
  if (plVar11 != (long *)0x0) {
    uVar10 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
    plVar13 = (long *)0x0;
    plVar6 = plVar11;
    param_2 = plVar12;
    if (lVar7 != 0) {
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(plVar12[3] + 0xc0) + 0x70))(lVar7,uVar10);
      if ((uVar3 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(plVar12[3] + 0xc0) + 0x78))(lVar7,plVar11);
      }
      return (ulong)(uVar3 ^ 1);
    }
  }
  auVar19 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar17;
  *(long **)((long)register0x00000008 + -0x88) = param_2;
  *(long **)((long)register0x00000008 + -0x80) = plVar13;
  *(long **)((long)register0x00000008 + -0x78) = plVar6;
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
  lVar7 = *(long *)(auVar19._0_8_ + 0x38);
  if (lVar7 != 0) {
    iVar14 = *(int *)(lVar7 + 0x18);
    if (iVar14 < 1) goto code_r0x025dfe48;
    uVar3 = 0;
    iVar18 = -0x80000000;
    uVar15 = 0;
    do {
      if (*(uint *)(lVar7 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
      if (lVar7 == 0) break;
      iVar2 = *(int *)(lVar7 + 0x10);
      uVar16 = uVar3;
      if (iVar2 <= iVar18) {
        uVar16 = uVar15;
      }
      if (iVar14 - 1U == uVar3) goto code_r0x025dfe4c;
      if (iVar2 <= iVar18) {
        iVar2 = iVar18;
      }
      lVar7 = *(long *)(auVar19._0_8_ + 0x38);
      uVar3 = uVar3 + 1;
      iVar18 = iVar2;
      uVar15 = uVar16;
    } while (lVar7 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar16 = 0;
code_r0x025dfe4c:
  *auVar19._8_8_ = uVar16;
  return (ulong)(0 < iVar14);
}



// ============================================================
// RVA: 0x14ea380 | Atlas.UI.Screens.SaveGameScreen.OnUsedSlotSelected
// ============================================================

ulong Atlas_UI_Screens_SaveGameScreen__OnUsedSlotSelected(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  
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
  lVar4 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0_TypeInfo*/ uRam0000000003d28aa0);
  uVar5 = /*Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass26_0$$.ctor*/ func_0x015662ec(lVar4,0);
  if (lVar4 == 0) {
LAB_014ea550:
    auVar16 = func_0x00f78af4();
    if ((bRam0000000003eb4c2b & 1) == 0) {
      func_0x00f78a20(0x3d28ac8);
      bRam0000000003eb4c2b = 1;
    }
    uVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27_TypeInfo*/ uRam0000000003d28ac8);
    /*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27$$.ctor*/ func_0x01566c9c(uVar5,0,0);
    if (uVar5 != 0) {
      *(undefined1 (*) [12])(uVar5 + 0x20) = auVar16;
      return uVar5;
    }
    auVar16 = func_0x00f78af4();
    if ((bRam0000000003eb4c2c & 1) == 0) {
      func_0x00f78a20(0x3d28ad0);
      bRam0000000003eb4c2c = 1;
    }
    uVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28_TypeInfo*/ uRam0000000003d28ad0);
    /*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28$$.ctor*/ func_0x01566e2c(uVar5,0,0);
    if (uVar5 == 0) {
      auVar16 = func_0x00f78af4();
      if ((bRam0000000003eb4c2d & 1) == 0) {
        func_0x00f78a20(0x3d28ac0);
        bRam0000000003eb4c2d = 1;
      }
      uVar5 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29_TypeInfo*/ uRam0000000003d28ac0);
      /*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29$$.ctor*/ func_0x01566ab4(uVar5,0,0);
      if (uVar5 == 0) {
        lVar4 = func_0x00f78af4();
        if ((*(long *)(lVar4 + 0x90) != 0) &&
           (plVar6 = *(long **)(*(long *)(lVar4 + 0x90) + 0x30), plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230));
          return uVar5;
        }
        return 0;
      }
      *(undefined1 (*) [12])(uVar5 + 0x20) = auVar16;
      return uVar5;
    }
    *(undefined1 (*) [12])(uVar5 + 0x20) = auVar16;
    return uVar5;
  }
  *(long *)(lVar4 + 0x10) = param_1;
  *(undefined4 *)(lVar4 + 0x18) = param_2;
  if (*(long *)(param_1 + 0x90) != 0) {
    plVar6 = *(long **)(*(long *)(param_1 + 0x90) + 0x30);
    uVar5 = 0;
    if ((plVar6 != (long *)0x0) &&
       (uVar5 = (**(code **)(*plVar6 + 0x228))(plVar6,*(undefined8 *)(*plVar6 + 0x230)),
       (uVar5 & 1) != 0)) {
      return uVar5;
    }
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    return uVar5;
  }
  plVar6 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
  /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar6,0);
  lVar7 = /*STR('SETTINGS_SCREEN_LOAD_GAME_BODY')*/ lRam0000000003d72128;
  if (plVar6 == (long *)0x0) goto LAB_014ea550;
  plVar6[5] = /*STR('SETTINGS_SCREEN_LOAD_GAME')*/ lRam0000000003d72120;
  plVar6[6] = lVar7;
  lVar7 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
  plVar6[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
  plVar6[8] = lVar7;
  lVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(lVar7,lVar4,uRam0000000003d63c38,0);
  plVar6[10] = lVar7;
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d412a8);
  puVar2 = puRam0000000003d3e0e8;
  if ((lVar4 == 0) || (plVar8 = *(long **)(lVar4 + 0xa0), plVar8 == (long *)0x0)) goto LAB_014ea550;
  puVar10 = puRam0000000003d3e0e8;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar6 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
    puVar10 = (undefined8 *)0x0;
    uVar9 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar9);
    if (plVar8 != (long *)0x0) {
      puVar10 = *(undefined8 **)(*(long *)(puVar2[3] + 0xc0) + 8);
      (*(code *)*puVar10)(plVar8,uVar9);
      if (plVar8[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar8[7],plVar6,uRam0000000003d3b330);
        puVar10 = (undefined8 *)plVar8[8];
        if ((puVar10 == (undefined8 *)0x0) || ((int)plVar6[2] <= *(int *)(puVar10 + 2))) {
code_r0x025dfcb4:
          uVar5 = (*(code *)**(undefined8 **)(*(long *)(puVar2[3] + 0xc0) + 0x30))(plVar8);
          if ((uVar5 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
            return uVar5;
          }
          return uVar5;
        }
        if (plVar8[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar8[7],0,puVar10,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(puVar2[3] + 0xc0) + 0x60))(plVar8);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar15 = func_0x00f78af4();
  plVar6 = auVar15._8_8_;
  lVar4 = auVar15._0_8_;
  if ((plVar6 != (long *)0x0) &&
     (uVar9 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180)), lVar4 != 0))
  {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x70))(lVar4,uVar9);
    if ((uVar3 & 1) == 0) {
      (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x78))(lVar4,plVar6);
    }
    return (ulong)(uVar3 ^ 1);
  }
  auVar15 = func_0x00f78af4();
  iVar11 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar4 = *(long *)(auVar15._0_8_ + 0x38);
  if (lVar4 != 0) {
    iVar11 = *(int *)(lVar4 + 0x18);
    if (iVar11 < 1) goto code_r0x025dfe48;
    uVar3 = 0;
    iVar14 = -0x80000000;
    uVar12 = 0;
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
      if (lVar4 == 0) break;
      iVar1 = *(int *)(lVar4 + 0x10);
      uVar13 = uVar3;
      if (iVar1 <= iVar14) {
        uVar13 = uVar12;
      }
      if (iVar11 - 1U == uVar3) goto code_r0x025dfe4c;
      if (iVar1 <= iVar14) {
        iVar1 = iVar14;
      }
      lVar4 = *(long *)(auVar15._0_8_ + 0x38);
      uVar3 = uVar3 + 1;
      iVar14 = iVar1;
      uVar12 = uVar13;
    } while (lVar4 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar13 = 0;
code_r0x025dfe4c:
  *auVar15._8_8_ = uVar13;
  return (ulong)(0 < iVar11);
}



// ============================================================
// RVA: 0x14ea554 | Atlas.UI.Screens.SaveGameScreen.OnLoadSlotSelected
// ============================================================

long Atlas_UI_Screens_SaveGameScreen__OnLoadSlotSelected(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [12];
  
  if ((bRam0000000003eb4c2b & 1) == 0) {
    func_0x00f78a20(0x3d28ac8);
    bRam0000000003eb4c2b = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27_TypeInfo*/ uRam0000000003d28ac8);
  /*Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27$$.ctor*/ func_0x01566c9c(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    *(undefined4 *)(lVar1 + 0x28) = param_2;
    return lVar1;
  }
  auVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4c2c & 1) == 0) {
    func_0x00f78a20(0x3d28ad0);
    bRam0000000003eb4c2c = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28_TypeInfo*/ uRam0000000003d28ad0);
  /*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28$$.ctor*/ func_0x01566e2c(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined1 (*) [12])(lVar1 + 0x20) = auVar3;
    return lVar1;
  }
  auVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4c2d & 1) == 0) {
    func_0x00f78a20(0x3d28ac0);
    bRam0000000003eb4c2d = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29_TypeInfo*/ uRam0000000003d28ac0);
  /*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29$$.ctor*/ func_0x01566ab4(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined1 (*) [12])(lVar1 + 0x20) = auVar3;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if ((*(long *)(lVar1 + 0x90) != 0) &&
     (plVar2 = *(long **)(*(long *)(lVar1 + 0x90) + 0x30), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
    return lVar1;
  }
  return 0;
}



// ============================================================
// RVA: 0x14ea5d0 | Atlas.UI.Screens.SaveGameScreen.OnStartNewSlotSelected
// ============================================================

long Atlas_UI_Screens_SaveGameScreen__OnStartNewSlotSelected(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [12];
  
  if ((bRam0000000003eb4c2c & 1) == 0) {
    func_0x00f78a20(0x3d28ad0);
    bRam0000000003eb4c2c = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28_TypeInfo*/ uRam0000000003d28ad0);
  /*Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28$$.ctor*/ func_0x01566e2c(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    *(undefined4 *)(lVar1 + 0x28) = param_2;
    return lVar1;
  }
  auVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4c2d & 1) == 0) {
    func_0x00f78a20(0x3d28ac0);
    bRam0000000003eb4c2d = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29_TypeInfo*/ uRam0000000003d28ac0);
  /*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29$$.ctor*/ func_0x01566ab4(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined1 (*) [12])(lVar1 + 0x20) = auVar3;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if ((*(long *)(lVar1 + 0x90) != 0) &&
     (plVar2 = *(long **)(*(long *)(lVar1 + 0x90) + 0x30), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
    return lVar1;
  }
  return 0;
}



// ============================================================
// RVA: 0x14ea64c | Atlas.UI.Screens.SaveGameScreen.EndTask
// ============================================================

long Atlas_UI_Screens_SaveGameScreen__EndTask(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((bRam0000000003eb4c2d & 1) == 0) {
    func_0x00f78a20(0x3d28ac0);
    bRam0000000003eb4c2d = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29_TypeInfo*/ uRam0000000003d28ac0);
  /*Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29$$.ctor*/ func_0x01566ab4(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    *(undefined4 *)(lVar1 + 0x28) = param_2;
    return lVar1;
  }
  lVar1 = func_0x00f78af4();
  if ((*(long *)(lVar1 + 0x90) != 0) &&
     (plVar2 = *(long **)(*(long *)(lVar1 + 0x90) + 0x30), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
    return lVar1;
  }
  return 0;
}



// ============================================================
// RVA: 0x14ea6c8 | Atlas.UI.Screens.SaveGameScreen.IsBlockingSaveTaskPending
// ============================================================

undefined8 Atlas_UI_Screens_SaveGameScreen__IsBlockingSaveTaskPending(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x90) != 0) &&
     (plVar1 = *(long **)(*(long *)(param_1 + 0x90) + 0x30), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x014ea6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
    return uVar2;
  }
  return 0;
}



// ============================================================
// RVA: 0x14ea6f0 | Atlas.UI.Screens.SaveGameScreen.OnLanguageChanged
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

undefined8 * Atlas_UI_Screens_SaveGameScreen__OnLanguageChanged(undefined8 param_1)

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
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar15;
  ulong uVar16;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar17;
  undefined8 unaff_x21;
  undefined8 *puVar18;
  undefined8 unaff_x22;
  long lVar19;
  undefined8 unaff_x23;
  long lVar20;
  undefined8 uVar21;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar22;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar23;
  undefined *unaff_x30;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  
  if ((bRam0000000003eb4c2e & 1) == 0) {
    func_0x00f78a20(0x3d412a8);
    bRam0000000003eb4c2e = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d412a8);
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0xb8) == 0)) {
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4c2f & 1) == 0) {
      func_0x00f78a20(0x3d2c8d8);
      bRam0000000003eb4c2f = 1;
    }
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar11 = (undefined8 *)
                (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(lRam0000000003d2c8d8 + 0x18) + 0xc0) + 0x38))();
      return puVar11;
    }
    auVar25 = func_0x00f78af4();
    puVar10 = auVar25._8_8_;
    puVar11 = auVar25._0_8_;
    uVar17 = puVar10[1];
    uVar21 = *puVar10;
    puVar11[2] = puVar10[2];
    puVar11[1] = uVar17;
    *puVar11 = uVar21;
    return puVar11;
  }
  puVar2 = &stack0xfffffffffffffff0;
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
  if (lVar6 == 0) {
    unaff_x30 = &Atlas_UI_Screens_TopBarScreen__ReLayoutTitle;
    lVar6 = func_0x00f78af4(0,0);
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4d52 & 1) == 0) {
    func_0x00f78a20(0x3d2c9a8);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d41340);
    bRam0000000003eb4d52 = 1;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41340);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) {
    puVar11 = (undefined8 *)func_0x00f78af4();
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
    uVar21 = func_0x00f78a34(/*Atlas.UI.TopBarManager.TopBarDelegate[]_TypeInfo*/ uRam0000000003d1f8d0,**(undefined4 **)(/*Atlas.UI.TopBarManager_TypeInfo*/ lRam0000000003d25320 + 0xb8));
    puVar11[6] = uVar21;
    uVar21 = func_0x00f78aec(/*Atlas.UI.TopBarManager.ScreenButtonRequest_TypeInfo*/ uRam0000000003d29338);
    /*Atlas.UI.TopBarManager.ScreenButtonRequest$$.ctor*/ func_0x0156b598(uVar21,0);
    puVar11[7] = uVar21;
    return puVar11;
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
    puVar24 = &UnityEngine_UI_LayoutRebuilder__Rebuild;
    auVar26 = func_0x00f78af4();
  }
  else {
    uVar4 = (**(code **)(*plVar8 + 0x158))(plVar8,*(undefined8 *)(*plVar8 + 0x160));
    *(undefined4 *)(lVar9 + 0x18) = uVar4;
    auVar26._8_4_ = 1;
    auVar26._0_8_ = lVar9;
    puVar24 = &UNK_032d2edc;
  }
  puVar10 = auVar26._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x60) = lVar6;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3d22df0;
  *(long *)((long)register0x00000008 + -0x50) = lVar7;
  *(long **)((long)register0x00000008 + -0x48) = plVar8;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) = puVar24;
  puVar23 = (undefined1 *)((long)register0x00000008 + -0x40);
  puVar11 = puVar10;
  if ((bRam0000000003ec2d41 & 1) == 0) {
    func_0x00f78a20(0x3d634d8);
    func_0x00f78a20(0x3d634e0);
    func_0x00f78a20(0x3d634e8);
    func_0x00f78a20(0x3d634f0);
    func_0x00f78a20(0x3d27de0);
    func_0x00f78a20(0x3d41588);
    puVar11 = (undefined8 *)func_0x00f78a20(0x3d1eaf0);
    bRam0000000003ec2d41 = 1;
  }
  if (auVar26._8_4_ != 1) {
    return puVar11;
  }
  uVar17 = puVar10[2];
  uVar21 = 0x3d27de0;
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
  /*UnityEngine.UI.LayoutRebuilder$$PerformLayoutCalculation*/ func_0x032d3238(puVar10,uVar17,lVar7);
  plVar8 = (long *)puVar10[2];
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar15 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
  puVar11 = (undefined8 *)plVar15[3];
  if (puVar11 == (undefined8 *)0x0) {
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      plVar15 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
    }
    lVar6 = *plVar15;
    puVar11 = (undefined8 *)func_0x00f78aec(/*UnityEngine.Events.UnityAction<Component>_TypeInfo*/ uRam0000000003d1eaf0);
    /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(puVar11,lVar6,uRam0000000003d634e0,uRam0000000003d41588);
    *(undefined8 **)(*(long *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8) + 0x18) = puVar11;
  }
  puVar24 = &UNK_032d30dc;
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x70);
  puVar12 = puVar10;
  plVar15 = plVar8;
  puVar18 = puVar11;
  do {
    plVar14 = plVar8;
    *(long *)(puVar3 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = uVar21;
    *(long *)(puVar3 + -0x30) = lVar6;
    *(undefined8 **)(puVar3 + -0x28) = puVar18;
    *(long **)(puVar3 + -0x20) = plVar15;
    *(undefined8 **)(puVar3 + -0x18) = puVar12;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(undefined **)(puVar3 + -8) = puVar24;
    puVar23 = puVar3 + -0x10;
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
    puVar12 = (undefined8 *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar14,0,0);
    if (((ulong)puVar12 & 1) != 0) {
      return puVar12;
    }
    if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = /*UnityEngine.UI.ListPool<RectMask2D>$$Get*/ func_0x0233df3c(uRam0000000003d398f8);
    uVar21 = /*UnityEngine.UI.ILayoutController_var*/ uRam0000000003d19778;
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar21,0);
    uVar21 = unaff_x26;
    uVar17 = unaff_x27;
    if (plVar14 == (long *)0x0) {
code_r0x032d3918:
      func_0x00f78af4();
      unaff_x26 = uVar21;
      unaff_x27 = uVar17;
    }
    else {
      /*UnityEngine.Component$$GetComponents*/ func_0x03227d78(plVar14,uVar13,lVar6,0);
      if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.UI.LayoutRebuilder$$StripDisabledBehavioursFromList*/ func_0x032d2d00(lVar6);
      if (lVar6 == 0) goto code_r0x032d3918;
      uVar16 = (ulong)*(uint *)(lVar6 + 0x18);
      if ((int)*(uint *)(lVar6 + 0x18) < 1) {
code_r0x032d3994:
        if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = lRam0000000003d39900;
        uVar21 = *(undefined8 *)(puVar3 + -0x30);
        uVar17 = *(undefined8 *)(puVar3 + -0x40);
        uVar13 = *(undefined8 *)(puVar3 + -0x38);
        *(undefined8 *)(puVar3 + -0x40) = uVar17;
        *(undefined8 *)(puVar3 + -0x38) = uVar13;
        *(undefined8 *)(puVar3 + -0x30) = uVar21;
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
          lVar20 = *(long *)(lVar7 + 0x18);
          uVar1 = *(ushort *)(lVar20 + 0x132);
          lVar19 = lVar20;
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar20);
            lVar19 = *(long *)(lVar7 + 0x18);
            uVar1 = *(ushort *)(lVar19 + 0x132);
          }
          UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar20 + 0xc0) + 0x18);
          if ((uVar1 & 1) == 0) {
            *(code **)(puVar3 + -0x48) = UNRECOVERED_JUMPTABLE;
            func_0x00fac028(lVar19);
            UNRECOVERED_JUMPTABLE = *(code **)(puVar3 + -0x48);
          }
                    /* WARNING: Could not recover jumptable at 0x0233e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar11 = (undefined8 *)
                    (*UNRECOVERED_JUMPTABLE)
                              (lVar9,lVar6,*(undefined8 *)(*(long *)(lVar19 + 0xc0) + 0x18));
          return puVar11;
        }
        lVar9 = func_0x00f78af4();
        *(undefined8 *)(puVar3 + -0x90) = uVar17;
        *(undefined8 *)(puVar3 + -0x88) = uVar13;
        *(undefined8 *)(puVar3 + -0x80) = uVar21;
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
        uVar21 = func_0x00f78aec(lVar6);
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
        uVar17 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar7);
        }
        (*UNRECOVERED_JUMPTABLE)(uVar21,0,uVar17,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x30));
        lVar6 = *(long *)(lVar9 + 0x18);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x38);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar6);
        }
        uVar17 = func_0x00f78aec(lVar6);
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
        puVar11 = (undefined8 *)
                  (*UNRECOVERED_JUMPTABLE)
                            (uVar17,0,uVar21,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x40));
        lVar6 = *(long *)(lVar9 + 0x18);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          puVar11 = (undefined8 *)func_0x00fac028(lVar6);
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
          puVar11 = (undefined8 *)func_0x00fac028(lVar6);
        }
        **(undefined8 **)(lVar6 + 0xb8) = uVar17;
        return puVar11;
      }
      lVar7 = 4;
      unaff_x26 = 0x3d222b0;
      unaff_x27 = 0x3d41590;
      do {
        if ((uVar16 & 0xffffffff) <= lVar7 - 4U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar9 = func_0x00f78adc(*(undefined8 *)(*(long *)(lVar6 + 0x10) + lVar7 * 8),
                                /*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
        if (lVar9 != 0) {
          if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar7 - 4U) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar21 = unaff_x26;
          uVar17 = unaff_x27;
          if (puVar11 == (undefined8 *)0x0) goto code_r0x032d3918;
          /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(puVar11,*(undefined8 *)(*(long *)(lVar6 + 0x10) + lVar7 * 8),
                          uRam0000000003d41590);
        }
        uVar16 = (ulong)*(int *)(lVar6 + 0x18);
        lVar9 = lVar7 + -3;
        lVar7 = lVar7 + 1;
      } while (lVar9 < (long)uVar16);
      if (0 < *(int *)(lVar6 + 0x18)) {
        unaff_x28 = 4;
        do {
          uVar22 = unaff_x28 - 4;
          if ((uVar16 & 0xffffffff) <= uVar22) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar7 = func_0x00f78adc(*(undefined8 *)(*(long *)(lVar6 + 0x10) + unaff_x28 * 8),
                                  /*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
          if (lVar7 == 0) {
            if (*(uint *)(lVar6 + 0x18) <= uVar22) {
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
              if (*(uint *)(lVar6 + 0x18) <= uVar22) {
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
              if (*(uint *)(lVar6 + 0x18) <= uVar22) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
            }
            uVar17 = 0x3d41590;
            uVar21 = 0x3d222b0;
            if (puVar11 == (undefined8 *)0x0) goto code_r0x032d3918;
            /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(puVar11,*(undefined8 *)(*(long *)(lVar6 + 0x10) + unaff_x28 * 8),
                            uRam0000000003d41590);
          }
code_r0x032d38b8:
          uVar16 = (ulong)*(int *)(lVar6 + 0x18);
          lVar7 = unaff_x28 + -3;
          unaff_x28 = unaff_x28 + 1;
        } while (lVar7 < (long)uVar16);
      }
    }
    iVar5 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(plVar14,0);
    unaff_x25 = 0x3d1d6c0;
    if (iVar5 < 1) goto code_r0x032d3994;
    uVar21 = 0;
    unaff_x24 = 0x3d24188;
    plVar8 = (long *)/*UnityEngine.Transform$$GetChild*/ func_0x03277648(plVar14,0,0);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else if (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
      plVar8 = (long *)0x0;
    }
    puVar24 = &UNK_032d397c;
    puVar3 = puVar3 + -0x60;
    puVar12 = puVar11;
    plVar15 = plVar14;
    puVar18 = puVar10;
  } while( true );
}



// ============================================================
// RVA: 0x14ea75c | Atlas.UI.Screens.SaveGameScreen..ctor
// ============================================================

void Atlas_UI_Screens_SaveGameScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4c2f & 1) == 0) {
    func_0x00f78a20(0x3d2c8d8);
    bRam0000000003eb4c2f = 1;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c8d8 + 0x18) + 0xc0) + 0x38))();
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



