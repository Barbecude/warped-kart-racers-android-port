// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.FreeplayDifficultyScreen

// ============================================================
// RVA: 0x15865f8 | Atlas.UI.Screens.FreeplayDifficultyScreen.OnBeforeEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x015867d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150c794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01586a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cb570c) */
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
/* WARNING: Removing unreachable block (ram,0x01cb5730) */
/* WARNING: Removing unreachable block (ram,0x01cb5760) */
/* WARNING: Removing unreachable block (ram,0x01cb574c) */
/* WARNING: Removing unreachable block (ram,0x01cb56f4) */
/* WARNING: Removing unreachable block (ram,0x01cb56b0) */
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
/* WARNING: Removing unreachable block (ram,0x01586a64) */
/* WARNING: Removing unreachable block (ram,0x01586a7c) */
/* WARNING: Removing unreachable block (ram,0x01586a84) */
/* WARNING: Removing unreachable block (ram,0x01586a90) */
/* WARNING: Removing unreachable block (ram,0x01586aa0) */
/* WARNING: Removing unreachable block (ram,0x01586aa4) */
/* WARNING: Removing unreachable block (ram,0x01586ab8) */
/* WARNING: Removing unreachable block (ram,0x01586ac0) */
/* WARNING: Removing unreachable block (ram,0x01586acc) */
/* WARNING: Removing unreachable block (ram,0x01586ad8) */
/* WARNING: Removing unreachable block (ram,0x01586ae0) */
/* WARNING: Removing unreachable block (ram,0x01cb5640) */
/* WARNING: Removing unreachable block (ram,0x01cb566c) */
/* WARNING: Removing unreachable block (ram,0x01cb5680) */
/* WARNING: Removing unreachable block (ram,0x01cb568c) */
/* WARNING: Removing unreachable block (ram,0x01cb5694) */
/* WARNING: Removing unreachable block (ram,0x01cb5698) */
/* WARNING: Removing unreachable block (ram,0x032441e0) */
/* WARNING: Removing unreachable block (ram,0x0324420c) */
/* WARNING: Removing unreachable block (ram,0x03244220) */
/* WARNING: Removing unreachable block (ram,0x0324422c) */
/* WARNING: Removing unreachable block (ram,0x03244234) */
/* WARNING: Removing unreachable block (ram,0x03244238) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150c798) */
/* WARNING: Removing unreachable block (ram,0x0150c79c) */
/* WARNING: Removing unreachable block (ram,0x0150c7a0) */
/* WARNING: Removing unreachable block (ram,0x0150c7b4) */
/* WARNING: Removing unreachable block (ram,0x015867d4) */
/* WARNING: Removing unreachable block (ram,0x015867d8) */
/* WARNING: Removing unreachable block (ram,0x015867f0) */
/* WARNING: Removing unreachable block (ram,0x0158682c) */
/* WARNING: Removing unreachable block (ram,0x01586834) */
/* WARNING: Removing unreachable block (ram,0x01586844) */
/* WARNING: Removing unreachable block (ram,0x01586854) */
/* WARNING: Removing unreachable block (ram,0x0158685c) */
/* WARNING: Removing unreachable block (ram,0x0158686c) */
/* WARNING: Removing unreachable block (ram,0x0158687c) */
/* WARNING: Removing unreachable block (ram,0x0158689c) */
/* WARNING: Removing unreachable block (ram,0x015868a8) */
/* WARNING: Removing unreachable block (ram,0x015868b0) */
/* WARNING: Removing unreachable block (ram,0x015868bc) */
/* WARNING: Removing unreachable block (ram,0x015868c4) */
/* WARNING: Removing unreachable block (ram,0x015868f4) */
/* WARNING: Removing unreachable block (ram,0x015868fc) */
/* WARNING: Removing unreachable block (ram,0x01586908) */
/* WARNING: Removing unreachable block (ram,0x01586914) */
/* WARNING: Removing unreachable block (ram,0x01586930) */
/* WARNING: Removing unreachable block (ram,0x01586934) */
/* WARNING: Removing unreachable block (ram,0x0158693c) */
/* WARNING: Removing unreachable block (ram,0x0158694c) */
/* WARNING: Removing unreachable block (ram,0x01586974) */
/* WARNING: Removing unreachable block (ram,0x01586968) */
/* WARNING: Removing unreachable block (ram,0x0158697c) */
/* WARNING: Removing unreachable block (ram,0x01586988) */
/* WARNING: Removing unreachable block (ram,0x015869a8) */
/* WARNING: Removing unreachable block (ram,0x015869b0) */
/* WARNING: Removing unreachable block (ram,0x015869bc) */
/* WARNING: Removing unreachable block (ram,0x015869c8) */
/* WARNING: Removing unreachable block (ram,0x015869ec) */
/* WARNING: Removing unreachable block (ram,0x01586a04) */
/* WARNING: Removing unreachable block (ram,0x01586a1c) */
/* WARNING: Removing unreachable block (ram,0x01586a50) */
/* WARNING: Removing unreachable block (ram,0x01586970) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Atlas_UI_Screens_FreeplayDifficultyScreen__OnBeforeEnter
          (undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 ******ppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined1 *puVar8;
  undefined8 *******pppppppuVar9;
  int iVar10;
  uint uVar12;
  undefined8 uVar13;
  int iVar11;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *******pppppppuVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  undefined4 uVar25;
  int *piVar26;
  ulong uVar27;
  undefined8 *******pppppppuVar28;
  undefined *puVar29;
  long unaff_x21;
  undefined8 ******unaff_x22;
  undefined8 ******ppppppuVar30;
  undefined8 uVar31;
  code *pcVar32;
  long unaff_x23;
  long lVar33;
  long unaff_x24;
  undefined1 *puVar34;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined *puVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined1 auVar40 [12];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 uStack_138;
  undefined1 auStack_130 [16];
  undefined8 ******ppppppuStack_a0;
  undefined *puStack_98;
  undefined8 ******ppppppuStack_90;
  undefined *puStack_88;
  undefined8 *****pppppuStack_80;
  undefined *puStack_78;
  
  pppppppuVar28 = (undefined8 *******)0x3eb5000;
  if ((bRam0000000003eb50da & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d2c6f8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d56b58);
    func_0x00f78a20(0x3d57260);
    func_0x00f78a20(0x3d572d8);
    func_0x00f78a20(0x3d231f8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d62e08);
    func_0x00f78a20(0x3d27588);
    func_0x00f78a20(0x3d41038);
    func_0x00f78a20(0x3d41040);
    func_0x00f78a20(0x3d41048);
    bRam0000000003eb50da = 1;
  }
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41048);
  puStack_88 = param_1;
  pppppuStack_80 = (undefined8 *****)&stack0xfffffffffffffff0;
  if (lVar16 != 0) {
    ppppppuVar30 = (undefined8 ******)0x3d41040;
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar16 + 0x20);
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41040);
    unaff_x22 = (undefined8 ******)0x3d41040;
    if ((lVar16 != 0) && (*(long *)(lVar16 + 0x20) != 0)) {
      param_3 = 0;
      pppppppuVar17 =
           (undefined8 *******)
           /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(*(long *)(lVar16 + 0x20) + 0x18),
                           *(undefined8 *)(param_1 + 0x90));
      unaff_x22 = ppppppuVar30;
      if (*(long *)(param_1 + 0x70) != 0) {
        unaff_x21 = *(long *)(*(long *)(param_1 + 0x70) + 0x10);
        lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41040);
        pppppppuVar28 = pppppppuVar17;
        if ((lVar16 != 0) && (*(long *)(lVar16 + 0x20) != 0)) {
          unaff_x22 = *(undefined8 *******)(*(long *)(lVar16 + 0x20) + 0x20);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x22,0);
          if (unaff_x21 != 0) {
            uVar31 = 0x3d23000;
            puVar19 = (undefined *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(unaff_x21,uVar18,uRam0000000003d572d8);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            pppppppuVar9 = &ppppppuStack_a0;
            ppppppuStack_a0 = (undefined8 *******)0x3d23000;
            puStack_78 = (undefined *)0x15867d4;
            ppppppuVar30 = &pppppuStack_80;
            uVar18 = 0x3d23990;
            puStack_98 = puVar19;
            ppppppuStack_90 = pppppppuVar17;
            if ((bRam0000000003ec021a & 1) == 0) {
              func_0x00f78a20(0x3d23990,0);
              bRam0000000003ec021a = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            puVar36 = &UNK_03236658;
            puVar35 = puVar19;
            puVar29 = (undefined *)0x3ec0000;
code_r0x03248740:
            *(undefined8 *)((long)pppppppuVar9 + -0x30) = uVar31;
            *(undefined8 *)((long)pppppppuVar9 + -0x28) = uVar18;
            *(undefined **)((long)pppppppuVar9 + -0x20) = puVar29;
            *(undefined **)((long)pppppppuVar9 + -0x18) = puVar35;
            *(undefined8 *******)((long)pppppppuVar9 + -0x10) = ppppppuVar30;
            *(undefined **)((long)pppppppuVar9 + -8) = puVar36;
            if ((bRam0000000003ec021b & 1) == 0) {
              func_0x00f78a20(0x3d23990);
              bRam0000000003ec021b = 1;
            }
            if (puVar19 == (undefined *)0x0) {
              puVar20 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
            else {
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar12 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(puVar19);
              puVar20 = (undefined8 *)(ulong)(uVar12 ^ 1);
            }
            return puVar20;
          }
        }
      }
    }
  }
  func_0x00f78af4();
  uVar18 = func_0x00f78b24();
  uVar18 = func_0x00f78ac0(uVar18,0);
  pppppppuVar7 = &ppppppuStack_a0;
  puStack_78 = &Atlas_UI_Screens_FreeplayDifficultyScreen__OnAfterExit;
  ppppppuStack_a0 = unaff_x22;
  puStack_98 = (undefined *)unaff_x21;
  ppppppuStack_90 = pppppppuVar28;
  if ((bRam0000000003eb50db & 1) == 0) {
    func_0x00f78a20(0x3d41048);
    bRam0000000003eb50db = 1;
  }
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar18,uRam0000000003d41048);
  puVar35 = puStack_88;
  ppppppuVar6 = ppppppuStack_90;
  puVar19 = puStack_98;
  ppppppuVar30 = ppppppuStack_a0;
  auVar42._8_8_ = puStack_88;
  auVar42._0_8_ = ppppppuStack_90;
  if ((lVar16 == 0) || (puVar20 = *(undefined8 **)(lVar16 + 0xb8), puVar20 == (undefined8 *)0x0)) {
    uVar18 = func_0x00f78af4();
    if ((bRam0000000003eb50dc & 1) == 0) {
      func_0x00f78a20(0x3d41040);
      bRam0000000003eb50dc = 1;
    }
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar18,uRam0000000003d41040);
    if (lVar16 != 0) {
      if (*(long *)(lVar16 + 0x10) != 0) {
        /*Atlas.UI.Screens.FreeplayDifficultyScreen.ContinueSelected$$Invoke*/ func_0x0154c028(*(long *)(lVar16 + 0x10),0);
      }
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    auVar42 = func_0x00f78af4();
    uVar18 = auVar42._0_8_;
    if ((bRam0000000003eb50dd & 1) == 0) {
      func_0x00f78a20(0x3d41040);
      func_0x00f78a20(0x3d41048);
      bRam0000000003eb50dd = 1;
    }
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar18,uRam0000000003d41048);
    if (((lVar16 != 0) && (*(long *)(lVar16 + 0x48) != 0)) &&
       (lVar16 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar16 + 0x48),0), lVar16 != 0)) {
      if (*(int *)(lVar16 + 0xd8) == (int)param_3) {
code_r0x01586d04:
        lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar18,uRam0000000003d41040);
        if (lVar16 != 0) {
          puVar20 = *(undefined8 **)(lVar16 + 0x18);
          if (puVar20 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar34 = auStack_130;
          auStack_130._0_8_ = puVar20;
          auStack_130._8_8_ = auVar42._8_8_;
          lVar16 = puVar20[0xd];
          if (lVar16 == 0) {
            lVar33 = 1;
          }
          else {
            lVar33 = *(long *)(lVar16 + 0x18);
            if (lVar33 == 0) {
              return puVar20;
            }
            puVar34 = (undefined1 *)(lVar16 + 0x20);
          }
          lVar16 = 0;
          do {
            lVar22 = *(long *)(puVar34 + lVar16 * 8);
            pcVar32 = *(code **)(lVar22 + 0x10);
            plVar1 = *(long **)(lVar22 + 0x20);
            lVar22 = *(long *)(lVar22 + 0x28);
            if (*(short *)(lVar22 + 0x48) == -1) {
              func_0x00f78ad8(lVar22);
            }
            iVar10 = func_0x00f78a4c(lVar22);
            if (iVar10 == 0) {
              puVar14 = &uStack_138;
              if (plVar1 == (long *)0x0) goto code_r0x0154c3cc;
              if (((*(short *)(lVar22 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
                 (puVar20[3] == 0)) goto code_r0x0154c3b4;
              iVar10 = func_0x00f78a44(lVar22);
              iVar11 = func_0x00f78ec0(lVar22);
              puVar14 = (undefined8 *)auStack_130._8_8_;
              if (iVar10 == 0) {
                uVar2 = *(ushort *)(lVar22 + 0x48);
                if (iVar11 == 0) {
                  lVar22 = *plVar1 + (ulong)uVar2 * 0x10;
                  puVar14 = (undefined8 *)
                            (**(code **)(lVar22 + 0x138))
                                      (plVar1,auStack_130._8_8_,*(undefined8 *)(lVar22 + 0x140));
                  goto code_r0x0154c3d4;
                }
                lVar22 = func_0x00f78a48(lVar22);
                puVar14 = (undefined8 *)auStack_130._8_8_;
                lVar23 = *plVar1;
                uVar21 = (ulong)*(ushort *)(lVar23 + 0x12a);
                if (uVar21 != 0) {
                  piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == lVar22) {
                      puVar15 = (undefined8 *)
                                (lVar23 + (long)(int)(*piVar26 + (uint)uVar2) * 0x10 + 0x138);
                      goto code_r0x0154c4a8;
                    }
                    piVar26 = piVar26 + 4;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
                puVar15 = (undefined8 *)func_0x00fac1f0(plVar1,lVar22,(ulong)uVar2);
code_r0x0154c4a8:
                pcVar32 = (code *)*puVar15;
                puVar15 = (undefined8 *)puVar15[1];
              }
              else {
                if (iVar11 == 0) {
                  uVar18 = *(undefined8 *)
                            (*plVar1 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar23 = *plVar1;
                  uVar21 = (ulong)*(ushort *)(lVar23 + 0x12a);
                  if (uVar21 != 0) {
                    piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == *(long *)(lVar22 + 0x18)) {
                        lVar23 = lVar23 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar22 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x0154c478;
                      }
                      piVar26 = piVar26 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  lVar23 = func_0x00fac1f0(plVar1);
code_r0x0154c478:
                  uVar18 = *(undefined8 *)(lVar23 + 8);
                }
                puVar15 = (undefined8 *)func_0x00f78acc(uVar18,lVar22);
                pcVar32 = (code *)*puVar15;
              }
              puVar14 = (undefined8 *)(*pcVar32)(plVar1,puVar14,puVar15);
            }
            else {
              puVar14 = (undefined8 *)auStack_130._8_8_;
              if (*(char *)(lVar22 + 0x4a) == '\x01') {
code_r0x0154c3cc:
                puVar14 = (undefined8 *)(*pcVar32)(puVar14,lVar22);
              }
              else {
code_r0x0154c3b4:
                puVar14 = (undefined8 *)(*pcVar32)(plVar1,auStack_130._8_8_,lVar22);
              }
            }
code_r0x0154c3d4:
            lVar16 = lVar16 + 1;
            if (lVar16 == lVar33) {
              return puVar14;
            }
          } while( true );
        }
      }
      else {
        lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar18,uRam0000000003d41048);
        if (((lVar16 != 0) && (*(long *)(lVar16 + 0x48) != 0)) &&
           (lVar16 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar16 + 0x48),0), lVar16 != 0)) {
          *(int *)(lVar16 + 0xd8) = (int)param_3;
          lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar18,uRam0000000003d41048);
          if ((lVar16 != 0) && (*(long *)(lVar16 + 0x48) != 0)) {
            /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(*(long *)(lVar16 + 0x48),0);
            goto code_r0x01586d04;
          }
        }
      }
    }
    lVar16 = func_0x00f78af4();
    uStack_138 = param_3;
    auStack_130 = auVar42;
    if ((bRam0000000003eb50de & 1) == 0) {
      func_0x00f78a20(0x3d2c6f0);
      func_0x00f78a20(0x3d1ef00);
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d6c680);
      func_0x00f78a20(0x3d69c00);
      func_0x00f78a20(0x3d69c10);
      func_0x00f78a20(0x3d6c678);
      func_0x00f78a20(0x3d6c658);
      func_0x00f78a20(0x3d71920);
      func_0x00f78a20(0x3d6c648);
      func_0x00f78a20(0x3d69c28);
      func_0x00f78a20(0x3d6c660);
      func_0x00f78a20(0x3d69c20);
      func_0x00f78a20(0x3d6c670);
      func_0x00f78a20(0x3d6c668);
      func_0x00f78a20(0x3d6c650);
      bRam0000000003eb50de = 1;
    }
    lVar33 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_1')*/ uRam0000000003d6c648,0);
    if (lVar33 != 0) {
      if (*(int *)(lVar33 + 0x18) != 0) {
        *(undefined8 *)(lVar33 + 0x20) = uVar18;
        uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_2')*/ uRam0000000003d6c650,0);
        if ((*(uint *)(lVar33 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar33 + 0x28) = uVar18;
          uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_3')*/ uRam0000000003d6c658,0);
          if (2 < *(uint *)(lVar33 + 0x18)) {
            *(undefined8 *)(lVar33 + 0x30) = uVar18;
            uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_4')*/ uRam0000000003d6c660,0);
            if ((*(uint *)(lVar33 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar33 + 0x38) = uVar18;
              *(long *)(lVar16 + 0x78) = lVar33;
              lVar33 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
              uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_1')*/ uRam0000000003d6c668,0);
              if (lVar33 == 0) goto code_r0x01587094;
              if (*(int *)(lVar33 + 0x18) != 0) {
                *(undefined8 *)(lVar33 + 0x20) = uVar18;
                uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_2')*/ uRam0000000003d6c670,0);
                if ((*(uint *)(lVar33 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar33 + 0x28) = uVar18;
                  uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_3')*/ uRam0000000003d6c678,0);
                  if (2 < *(uint *)(lVar33 + 0x18)) {
                    *(undefined8 *)(lVar33 + 0x30) = uVar18;
                    uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_4')*/ uRam0000000003d6c680,0);
                    if ((*(uint *)(lVar33 + 0x18) & 0xfffffffc) != 0) {
                      *(undefined8 *)(lVar33 + 0x38) = uVar18;
                      *(long *)(lVar16 + 0x80) = lVar33;
                      lVar33 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
                      uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Easy')*/ uRam0000000003d69c00,0);
                      if (lVar33 == 0) goto code_r0x01587094;
                      if (*(int *)(lVar33 + 0x18) != 0) {
                        *(undefined8 *)(lVar33 + 0x20) = uVar18;
                        uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,0);
                        if ((*(uint *)(lVar33 + 0x18) & 0xfffffffe) != 0) {
                          *(undefined8 *)(lVar33 + 0x28) = uVar18;
                          uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Hard')*/ uRam0000000003d69c10,0);
                          if (2 < *(uint *)(lVar33 + 0x18)) {
                            *(undefined8 *)(lVar33 + 0x30) = uVar18;
                            uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Legend')*/ uRam0000000003d69c20,0);
                            if ((*(uint *)(lVar33 + 0x18) & 0xfffffffc) != 0) {
                              *(undefined8 *)(lVar33 + 0x38) = uVar18;
                              uVar18 = /*STR('RaceGameContext')*/ uRam0000000003d71920;
                              *(long *)(lVar16 + 0x88) = lVar33;
                              *(undefined8 *)(lVar16 + 0x90) = uVar18;
                              if (lVar16 == 0) {
                                auVar42 = func_0x00f78af4();
                                puVar14 = auVar42._8_8_;
                                puVar20 = auVar42._0_8_;
                                uVar31 = puVar14[1];
                                uVar18 = *puVar14;
                                puVar20[2] = puVar14[2];
                                puVar20[1] = uVar31;
                                *puVar20 = uVar18;
                                return puVar20;
                              }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              puVar20 = (undefined8 *)
                                        (*(code *)**(undefined8 **)
                                                    (*(long *)(*(long *)(lRam0000000003d2c6f0 + 0x18
                                                                        ) + 0xc0) + 0x38))();
                              return puVar20;
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
      uVar18 = func_0x00f78b24();
      func_0x00f78ac0(uVar18,0);
    }
code_r0x01587094:
    lVar16 = func_0x00f78af4();
    return *(undefined8 **)(lVar16 + 0x68);
  }
  uVar18 = 0;
  uVar31 = 0;
  lVar16 = puVar20[6];
  if (lVar16 == 0) {
    func_0x00f78af4();
  }
  else if (6 < *(uint *)(lVar16 + 0x18)) {
    *(undefined8 *)(lVar16 + 0x50) = 0;
    return puVar20;
  }
  uVar13 = func_0x00f78b24();
  auVar41 = func_0x00f78ac0(uVar13,0);
  auVar3._8_8_ = auVar41._8_8_;
  auVar3._0_8_ = ppppppuVar6;
  ppppppuStack_a0 = ppppppuVar6;
  puStack_98 = puVar35;
  ppppppuStack_90 = &pppppuStack_80;
  puStack_88 = &Atlas_UI_TopBarManager__ButtonPressed;
  pppppppuVar28 = &ppppppuStack_90;
  lVar16 = *(long *)(auVar41._0_8_ + 0x30);
  if (lVar16 == 0) {
code_r0x0150b5a8:
    func_0x00f78af4();
  }
  else {
    uVar12 = auVar41._8_4_;
    auVar42 = auVar3;
    if (uVar12 < *(uint *)(lVar16 + 0x18)) {
      lVar16 = *(long *)(lVar16 + (long)(int)uVar12 * 8 + 0x20);
      if (lVar16 == 0) {
        puVar20 = (undefined8 *)0x0;
        if (8 < uVar12) {
          return (undefined8 *)0x0;
        }
        uVar24 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar12 & 0x1f) & uVar24) == 0) {
          return puVar20;
        }
      }
      else {
        puVar20 = (undefined8 *)/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar16,0);
        if ((uVar12 != 0) || (((ulong)puVar20 & 1) == 0)) {
          if (8 < uVar12) {
            return puVar20;
          }
          uVar24 = 0x142;
          goto code_r0x0150b574;
        }
      }
      auVar4._8_8_ = puStack_98;
      auVar4._0_8_ = ppppppuStack_a0;
      lVar16 = *(long *)(auVar41._0_8_ + 0x28);
      auVar40._8_4_ = uVar12;
      auVar40._0_8_ = lVar16;
      auVar42 = auVar41;
      if (lVar16 != 0) {
        uVar18 = 0;
        uVar31 = 1;
        pppppppuVar7 = (undefined8 *******)&pppppuStack_80;
        pppppppuVar28 = (undefined8 *******)ppppppuStack_90;
        puVar35 = puStack_88;
        auVar42 = auVar4;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  uVar13 = func_0x00f78b24();
  puVar35 = &Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar40 = func_0x00f78ac0(uVar13,0);
code_r0x0150b5b8:
  auVar41._8_8_ = uVar31;
  auVar41._0_8_ = auVar40._0_8_;
  auVar5._8_8_ = uVar31;
  auVar5._0_8_ = auVar40._0_8_;
  if (auVar40._8_4_ < 9) {
    uVar21 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar40._8_4_ * 4);
    auVar41 = auVar5;
  }
  else {
    uVar21 = 0xffffffff;
  }
  do {
    puVar20 = auVar41._0_8_;
    uVar27 = auVar42._8_8_;
    *(undefined1 (*) [16])((long)pppppppuVar7 + -0x20) = auVar42;
    *(undefined8 ********)((long)pppppppuVar7 + -0x10) = pppppppuVar28;
    *(undefined **)((long)pppppppuVar7 + -8) = puVar35;
    uVar12 = (uint)uVar21;
    if (uVar12 == 0xffffffff) {
      return puVar20;
    }
    lVar16 = puVar20[0xe];
    if (lVar16 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar27 = uVar21;
      if (uVar12 < *(uint *)(lVar16 + 0x18)) {
        uVar25 = 2;
        if ((int)uVar18 == 0) {
          uVar25 = 0;
        }
        *(undefined4 *)(lVar16 + (long)(int)uVar12 * 0x60 + 0x5c) = uVar25;
        if ((auVar41._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(puVar20,uVar21);
        }
        *(undefined8 *)((long)pppppppuVar7 + -0x60) = unaff_x28;
        *(undefined8 *)((long)pppppppuVar7 + -0x58) = unaff_x27;
        *(undefined8 *)((long)pppppppuVar7 + -0x50) = unaff_x26;
        *(long *)((long)pppppppuVar7 + -0x48) = unaff_x25;
        *(long *)((long)pppppppuVar7 + -0x40) = unaff_x24;
        *(long *)((long)pppppppuVar7 + -0x38) = unaff_x23;
        *(undefined8 *******)((long)pppppppuVar7 + -0x30) = ppppppuVar30;
        *(undefined **)((long)pppppppuVar7 + -0x28) = puVar19;
        *(undefined8 *)((long)pppppppuVar7 + -0x20) = *(undefined8 *)((long)pppppppuVar7 + -0x20);
        *(undefined8 *)((long)pppppppuVar7 + -0x18) = *(undefined8 *)((long)pppppppuVar7 + -0x18);
        *(undefined8 *)((long)pppppppuVar7 + -0x10) = *(undefined8 *)((long)pppppppuVar7 + -0x10);
        *(undefined8 *)((long)pppppppuVar7 + -8) = *(undefined8 *)((long)pppppppuVar7 + -8);
        puVar19 = (undefined *)0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar16 = puVar20[0xe];
        if (lVar16 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar16 + 0x18) <= uVar12) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar12;
        lVar16 = lVar16 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar16 + 0x20);
        ppppppuVar30 = *(undefined8 *******)(lVar16 + 0x28);
        uVar18 = *(undefined8 *)(lVar16 + 0x30);
        uVar13 = *(undefined8 *)(lVar16 + 0x48);
        uVar31 = *(undefined8 *)(lVar16 + 0x40);
        *(undefined8 *)((long)pppppppuVar7 + -0xe8) = *(undefined8 *)(lVar16 + 0x38);
        *(undefined8 *)((long)pppppppuVar7 + -0xf0) = uVar18;
        *(undefined8 *)((long)pppppppuVar7 + -0xd8) = uVar13;
        *(undefined8 *)((long)pppppppuVar7 + -0xe0) = uVar31;
        puVar19 = *(undefined **)(lVar16 + 0x50);
        iVar10 = *(int *)(lVar16 + 0x58);
        iVar11 = *(int *)(lVar16 + 0x5c);
        unaff_x23 = *(long *)(lVar16 + 0x60);
        unaff_x24 = *(long *)(lVar16 + 0x68);
        uVar18 = *(undefined8 *)(lVar16 + 0x70);
        *(undefined8 *)((long)pppppppuVar7 + -0xf8) = *(undefined8 *)(lVar16 + 0x78);
        *(undefined8 *)((long)pppppppuVar7 + -0x100) = uVar18;
        if (iVar11 != iVar10) {
          if (iVar10 == 2) {
            if (iVar11 == 0) {
              if (unaff_x24 == 0) goto code_r0x0150c7d4;
              uVar31 = *(undefined8 *)(lVar16 + 0x38);
              uVar18 = *(undefined8 *)(lVar16 + 0x30);
              uVar37 = *(undefined8 *)(lVar16 + 0x48);
              uVar13 = *(undefined8 *)(lVar16 + 0x40);
              *(undefined8 *)((long)pppppppuVar7 + -0x118) = uVar31;
              *(undefined8 *)((long)pppppppuVar7 + -0x120) = uVar18;
              *(undefined8 *)((long)pppppppuVar7 + -0x108) = uVar37;
              *(undefined8 *)((long)pppppppuVar7 + -0x110) = uVar13;
              uVar39 = *(undefined8 *)(lVar16 + 0x78);
              uVar38 = *(undefined8 *)(lVar16 + 0x70);
              *(undefined8 *)((long)pppppppuVar7 + -0x128) = uVar39;
              *(undefined8 *)((long)pppppppuVar7 + -0x130) = uVar38;
              *(undefined8 *)((long)pppppppuVar7 + -200) = unaff_x26;
              *(undefined8 *******)((long)pppppppuVar7 + -0xc0) = ppppppuVar30;
              *(undefined8 *)((long)pppppppuVar7 + -0xb0) = uVar31;
              *(undefined8 *)((long)pppppppuVar7 + -0xb8) = uVar18;
              *(undefined8 *)((long)pppppppuVar7 + -0xa0) = uVar37;
              *(undefined8 *)((long)pppppppuVar7 + -0xa8) = uVar13;
              *(undefined **)((long)pppppppuVar7 + -0x98) = puVar19;
              *(undefined8 *)((long)pppppppuVar7 + -0x90) = _UNK_033f8620;
              *(long *)((long)pppppppuVar7 + -0x88) = unaff_x23;
              *(long *)((long)pppppppuVar7 + -0x80) = unaff_x24;
              *(undefined8 *)((long)pppppppuVar7 + -0x70) = uVar39;
              *(undefined8 *)((long)pppppppuVar7 + -0x78) = uVar38;
              lVar16 = unaff_x24;
code_r0x0150c724:
              /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar16,(undefined1 *)((long)pppppppuVar7 + -200),uRam0000000003d2a408)
              ;
              iVar10 = 1;
            }
            else {
              iVar10 = 2;
            }
code_r0x0150c72c:
            lVar16 = puVar20[0xe];
            if (lVar16 != 0) {
              if (*(uint *)(lVar16 + 0x18) <= uVar12) goto code_r0x0150c7d8;
              lVar16 = lVar16 + unaff_x25 * 0x60;
              *(undefined8 *)(lVar16 + 0x20) = unaff_x26;
              *(undefined8 *******)(lVar16 + 0x28) = ppppppuVar30;
              uVar18 = *(undefined8 *)((long)pppppppuVar7 + -0xf0);
              uVar13 = *(undefined8 *)((long)pppppppuVar7 + -0xd8);
              uVar31 = *(undefined8 *)((long)pppppppuVar7 + -0xe0);
              *(undefined8 *)(lVar16 + 0x38) = *(undefined8 *)((long)pppppppuVar7 + -0xe8);
              *(undefined8 *)(lVar16 + 0x30) = uVar18;
              *(undefined8 *)(lVar16 + 0x48) = uVar13;
              *(undefined8 *)(lVar16 + 0x40) = uVar31;
              *(undefined **)(lVar16 + 0x50) = puVar19;
              *(int *)(lVar16 + 0x58) = iVar10;
              *(int *)(lVar16 + 0x5c) = iVar11;
              *(long *)(lVar16 + 0x60) = unaff_x23;
              *(long *)(lVar16 + 0x68) = unaff_x24;
              uVar18 = *(undefined8 *)((long)pppppppuVar7 + -0x100);
              *(undefined8 *)(lVar16 + 0x78) = *(undefined8 *)((long)pppppppuVar7 + -0xf8);
              *(undefined8 *)(lVar16 + 0x70) = uVar18;
              goto code_r0x0150c768;
            }
          }
          else {
            if (iVar10 != 0) goto code_r0x0150c72c;
            if (iVar11 != 2) {
              iVar10 = 0;
              goto code_r0x0150c72c;
            }
            if (((ppppppuVar30 != (undefined8 ******)0x0) &&
                (lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(ppppppuVar30,0), lVar16 != 0)) &&
               (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar16,1,0), unaff_x23 != 0)) {
              *(undefined8 *)((long)pppppppuVar7 + -200) = unaff_x26;
              *(undefined8 *******)((long)pppppppuVar7 + -0xc0) = ppppppuVar30;
              *(undefined8 *)((long)pppppppuVar7 + -0xb0) =
                   *(undefined8 *)((long)pppppppuVar7 + -0xe8);
              *(undefined8 *)((long)pppppppuVar7 + -0xb8) =
                   *(undefined8 *)((long)pppppppuVar7 + -0xf0);
              *(undefined8 *)((long)pppppppuVar7 + -0xa0) =
                   *(undefined8 *)((long)pppppppuVar7 + -0xd8);
              *(undefined8 *)((long)pppppppuVar7 + -0xa8) =
                   *(undefined8 *)((long)pppppppuVar7 + -0xe0);
              *(undefined **)((long)pppppppuVar7 + -0x98) = puVar19;
              *(undefined8 *)((long)pppppppuVar7 + -0x90) = _UNK_033f8628;
              *(long *)((long)pppppppuVar7 + -0x88) = unaff_x23;
              *(long *)((long)pppppppuVar7 + -0x80) = unaff_x24;
              *(undefined8 *)((long)pppppppuVar7 + -0x70) =
                   *(undefined8 *)((long)pppppppuVar7 + -0xf8);
              *(undefined8 *)((long)pppppppuVar7 + -0x78) =
                   *(undefined8 *)((long)pppppppuVar7 + -0x100);
              lVar16 = unaff_x23;
              goto code_r0x0150c724;
            }
          }
code_r0x0150c7d4:
          func_0x00f78af4();
code_r0x0150c7d8:
          uVar18 = func_0x00f78b24();
          auVar42 = func_0x00f78ac0(uVar18,0);
          lVar16 = auVar42._8_8_;
          *(undefined8 *)((long)pppppppuVar7 + -0x180) = unaff_x26;
          *(long *)((long)pppppppuVar7 + -0x178) = unaff_x25;
          *(long *)((long)pppppppuVar7 + -0x170) = unaff_x24;
          *(long *)((long)pppppppuVar7 + -0x168) = unaff_x23;
          *(undefined8 *******)((long)pppppppuVar7 + -0x160) = ppppppuVar30;
          *(undefined8 **)((long)pppppppuVar7 + -0x158) = puVar20;
          *(ulong *)((long)pppppppuVar7 + -0x150) = uVar21;
          *(undefined **)((long)pppppppuVar7 + -0x148) = puVar19;
          *(undefined1 **)((long)pppppppuVar7 + -0x140) = (undefined1 *)((long)pppppppuVar7 + -0x10)
          ;
          *(undefined **)((long)pppppppuVar7 + -0x138) =
               &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
          if ((bRam0000000003eb4d55 & 1) == 0) {
            func_0x00f78a20(0x3d5e6e0);
            func_0x00f78a20(0x3d5e7a8);
            func_0x00f78a20(0x3d5e7d0);
            func_0x00f78a20(0x3d5e850);
            func_0x00f78a20(0x3d5e888);
            bRam0000000003eb4d55 = 1;
          }
          uVar18 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar16 + 0x18),*(undefined4 *)(lVar16 + 0x1c),
                                   *(undefined4 *)(lVar16 + 0x20),_UNK_033f8144,
                                   *(undefined8 *)(lVar16 + 0x10),0,0);
          uVar18 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar18,10,uRam0000000003d5e7a8);
          uVar18 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar18,*(undefined8 *)(lVar16 + 0x58),uRam0000000003d5e6e0);
          uVar18 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar18,1,uRam0000000003d5e888);
          puVar20 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar18,auVar42._0_8_,uRam0000000003d5e850);
          if ((puVar20 != (undefined8 *)0x0) && (*(char *)(puVar20 + 0x1d) != '\0')) {
            puVar20[6] = *(undefined8 *)(lVar16 + 0x10);
          }
          return puVar20;
        }
code_r0x0150c768:
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pppppppuVar9 = (undefined8 *******)((long)pppppppuVar7 + -0x160);
        *(undefined8 *******)((long)pppppppuVar7 + -0x160) = ppppppuVar30;
        *(undefined8 **)((long)pppppppuVar7 + -0x158) = puVar20;
        *(ulong *)((long)pppppppuVar7 + -0x150) = uVar21;
        *(undefined **)((long)pppppppuVar7 + -0x148) = puVar19;
        *(undefined1 **)((long)pppppppuVar7 + -0x140) = (undefined1 *)((long)pppppppuVar7 + -0x10);
        *(undefined **)((long)pppppppuVar7 + -0x138) = &UNK_0150c798;
        ppppppuVar30 = (undefined8 ******)((long)pppppppuVar7 + -0x140);
        puVar35 = (undefined *)0x0;
        uVar18 = 0x3ec0000;
        uVar31 = 0x3d23990;
        if ((bRam0000000003ec027c & 1) == 0) {
          func_0x00f78a20(0x3d23990,0,0);
          bRam0000000003ec027c = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar36 = &UNK_03249b00;
        puVar29 = puVar19;
        goto code_r0x03248740;
      }
    }
    uVar18 = func_0x00f78b24();
    auVar42 = func_0x00f78ac0(uVar18,0);
    puVar8 = (undefined1 *)((long)pppppppuVar7 + -0x30);
    puVar34 = (undefined1 *)((long)pppppppuVar7 + -0x30);
    *(undefined1 **)((long)pppppppuVar7 + -0x30) = (undefined1 *)((long)pppppppuVar7 + -0x10);
    *(undefined **)((long)pppppppuVar7 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar16 = *(long *)(auVar42._0_8_ + 0x28);
    auVar42._8_8_ = auVar42._8_8_;
    auVar42._0_8_ = lVar16;
    if (lVar16 == 0) {
      puVar35 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar42 = func_0x00f78af4();
    }
    else {
      puVar8 = (undefined1 *)((long)pppppppuVar7 + -0x20);
      puVar34 = *(undefined1 **)((long)pppppppuVar7 + -0x30);
      puVar35 = *(undefined **)((long)pppppppuVar7 + -0x28);
    }
    pppppppuVar7 = (undefined8 *******)(puVar8 + -0x20);
    *(undefined8 **)(puVar8 + -0x20) = puVar20;
    *(ulong *)(puVar8 + -0x18) = uVar27;
    *(undefined1 **)(puVar8 + -0x10) = puVar34;
    *(undefined **)(puVar8 + -8) = puVar35;
    pppppppuVar28 = (undefined8 *******)(puVar8 + -0x10);
    uVar21 = 4;
    uVar18 = 0;
    puVar35 = &UNK_0150bd10;
    auVar41 = auVar42;
  } while( true );
}



// ============================================================
// RVA: 0x1586b50 | Atlas.UI.Screens.FreeplayDifficultyScreen.OnAfterExit
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Atlas_UI_Screens_FreeplayDifficultyScreen__OnAfterExit
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar9;
  undefined8 *puVar12;
  uint uVar15;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  undefined4 uVar23;
  int *piVar24;
  ulong uVar25;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  code *pcVar26;
  long unaff_x23;
  long unaff_x24;
  undefined1 *puVar27;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [12];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  
  auVar34._8_8_ = unaff_x19;
  auVar34._0_8_ = unaff_x20;
  puVar6 = &stack0xffffffffffffffd0;
  if ((bRam0000000003eb50db & 1) == 0) {
    func_0x00f78a20(0x3d41048);
    bRam0000000003eb50db = 1;
  }
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41048);
  if ((lVar13 == 0) || (puVar14 = *(undefined8 **)(lVar13 + 0xb8), puVar14 == (undefined8 *)0x0)) {
    uVar17 = func_0x00f78af4();
    if ((bRam0000000003eb50dc & 1) == 0) {
      func_0x00f78a20(0x3d41040);
      bRam0000000003eb50dc = 1;
    }
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar17,uRam0000000003d41040);
    if (lVar13 != 0) {
      if (*(long *)(lVar13 + 0x10) != 0) {
        /*Atlas.UI.Screens.FreeplayDifficultyScreen.ContinueSelected$$Invoke*/ func_0x0154c028(*(long *)(lVar13 + 0x10),0);
      }
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    auVar34 = func_0x00f78af4();
    uVar17 = auVar34._0_8_;
    if ((bRam0000000003eb50dd & 1) == 0) {
      func_0x00f78a20(0x3d41040);
      func_0x00f78a20(0x3d41048);
      bRam0000000003eb50dd = 1;
    }
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar17,uRam0000000003d41048);
    if (((lVar13 != 0) && (*(long *)(lVar13 + 0x48) != 0)) &&
       (lVar13 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar13 + 0x48),0), lVar13 != 0)) {
      if (*(int *)(lVar13 + 0xd8) == (int)param_3) {
code_r0x01586d04:
        lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar17,uRam0000000003d41040);
        if (lVar13 != 0) {
          puVar14 = *(undefined8 **)(lVar13 + 0x18);
          if (puVar14 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar27 = auStack_c0;
          auStack_c0._0_8_ = puVar14;
          auStack_c0._8_8_ = auVar34._8_8_;
          lVar13 = puVar14[0xd];
          if (lVar13 == 0) {
            lVar19 = 1;
          }
          else {
            lVar19 = *(long *)(lVar13 + 0x18);
            if (lVar19 == 0) {
              return puVar14;
            }
            puVar27 = (undefined1 *)(lVar13 + 0x20);
          }
          lVar13 = 0;
          do {
            lVar20 = *(long *)(puVar27 + lVar13 * 8);
            pcVar26 = *(code **)(lVar20 + 0x10);
            plVar1 = *(long **)(lVar20 + 0x20);
            lVar20 = *(long *)(lVar20 + 0x28);
            if (*(short *)(lVar20 + 0x48) == -1) {
              func_0x00f78ad8(lVar20);
            }
            iVar8 = func_0x00f78a4c(lVar20);
            if (iVar8 == 0) {
              puVar11 = &uStack_c8;
              if (plVar1 == (long *)0x0) goto code_r0x0154c3cc;
              if (((*(short *)(lVar20 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
                 (puVar14[3] == 0)) goto code_r0x0154c3b4;
              iVar8 = func_0x00f78a44(lVar20);
              iVar9 = func_0x00f78ec0(lVar20);
              puVar11 = (undefined8 *)auStack_c0._8_8_;
              if (iVar8 == 0) {
                uVar2 = *(ushort *)(lVar20 + 0x48);
                if (iVar9 == 0) {
                  lVar20 = *plVar1 + (ulong)uVar2 * 0x10;
                  puVar11 = (undefined8 *)
                            (**(code **)(lVar20 + 0x138))
                                      (plVar1,auStack_c0._8_8_,*(undefined8 *)(lVar20 + 0x140));
                  goto code_r0x0154c3d4;
                }
                lVar20 = func_0x00f78a48(lVar20);
                puVar11 = (undefined8 *)auStack_c0._8_8_;
                lVar21 = *plVar1;
                uVar16 = (ulong)*(ushort *)(lVar21 + 0x12a);
                if (uVar16 != 0) {
                  piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == lVar20) {
                      puVar12 = (undefined8 *)
                                (lVar21 + (long)(int)(*piVar24 + (uint)uVar2) * 0x10 + 0x138);
                      goto code_r0x0154c4a8;
                    }
                    piVar24 = piVar24 + 4;
                    uVar16 = uVar16 - 1;
                  } while (uVar16 != 0);
                }
                puVar12 = (undefined8 *)func_0x00fac1f0(plVar1,lVar20,(ulong)uVar2);
code_r0x0154c4a8:
                pcVar26 = (code *)*puVar12;
                puVar12 = (undefined8 *)puVar12[1];
              }
              else {
                if (iVar9 == 0) {
                  uVar17 = *(undefined8 *)
                            (*plVar1 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar21 = *plVar1;
                  uVar16 = (ulong)*(ushort *)(lVar21 + 0x12a);
                  if (uVar16 != 0) {
                    piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar24 + -2) == *(long *)(lVar20 + 0x18)) {
                        lVar21 = lVar21 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar20 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x0154c478;
                      }
                      piVar24 = piVar24 + 4;
                      uVar16 = uVar16 - 1;
                    } while (uVar16 != 0);
                  }
                  lVar21 = func_0x00fac1f0(plVar1);
code_r0x0154c478:
                  uVar17 = *(undefined8 *)(lVar21 + 8);
                }
                puVar12 = (undefined8 *)func_0x00f78acc(uVar17,lVar20);
                pcVar26 = (code *)*puVar12;
              }
              puVar11 = (undefined8 *)(*pcVar26)(plVar1,puVar11,puVar12);
            }
            else {
              puVar11 = (undefined8 *)auStack_c0._8_8_;
              if (*(char *)(lVar20 + 0x4a) == '\x01') {
code_r0x0154c3cc:
                puVar11 = (undefined8 *)(*pcVar26)(puVar11,lVar20);
              }
              else {
code_r0x0154c3b4:
                puVar11 = (undefined8 *)(*pcVar26)(plVar1,auStack_c0._8_8_,lVar20);
              }
            }
code_r0x0154c3d4:
            lVar13 = lVar13 + 1;
            if (lVar13 == lVar19) {
              return puVar11;
            }
          } while( true );
        }
      }
      else {
        lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar17,uRam0000000003d41048);
        if (((lVar13 != 0) && (*(long *)(lVar13 + 0x48) != 0)) &&
           (lVar13 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar13 + 0x48),0), lVar13 != 0)) {
          *(int *)(lVar13 + 0xd8) = (int)param_3;
          lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar17,uRam0000000003d41048);
          if ((lVar13 != 0) && (*(long *)(lVar13 + 0x48) != 0)) {
            /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(*(long *)(lVar13 + 0x48),0);
            goto code_r0x01586d04;
          }
        }
      }
    }
    lVar13 = func_0x00f78af4();
    uStack_c8 = param_3;
    auStack_c0 = auVar34;
    if ((bRam0000000003eb50de & 1) == 0) {
      func_0x00f78a20(0x3d2c6f0);
      func_0x00f78a20(0x3d1ef00);
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d6c680);
      func_0x00f78a20(0x3d69c00);
      func_0x00f78a20(0x3d69c10);
      func_0x00f78a20(0x3d6c678);
      func_0x00f78a20(0x3d6c658);
      func_0x00f78a20(0x3d71920);
      func_0x00f78a20(0x3d6c648);
      func_0x00f78a20(0x3d69c28);
      func_0x00f78a20(0x3d6c660);
      func_0x00f78a20(0x3d69c20);
      func_0x00f78a20(0x3d6c670);
      func_0x00f78a20(0x3d6c668);
      func_0x00f78a20(0x3d6c650);
      bRam0000000003eb50de = 1;
    }
    lVar19 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_1')*/ uRam0000000003d6c648,0);
    if (lVar19 != 0) {
      if (*(int *)(lVar19 + 0x18) != 0) {
        *(undefined8 *)(lVar19 + 0x20) = uVar17;
        uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_2')*/ uRam0000000003d6c650,0);
        if ((*(uint *)(lVar19 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar19 + 0x28) = uVar17;
          uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_3')*/ uRam0000000003d6c658,0);
          if (2 < *(uint *)(lVar19 + 0x18)) {
            *(undefined8 *)(lVar19 + 0x30) = uVar17;
            uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_4')*/ uRam0000000003d6c660,0);
            if ((*(uint *)(lVar19 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar19 + 0x38) = uVar17;
              *(long *)(lVar13 + 0x78) = lVar19;
              lVar19 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
              uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_1')*/ uRam0000000003d6c668,0);
              if (lVar19 == 0) goto code_r0x01587094;
              if (*(int *)(lVar19 + 0x18) != 0) {
                *(undefined8 *)(lVar19 + 0x20) = uVar17;
                uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_2')*/ uRam0000000003d6c670,0);
                if ((*(uint *)(lVar19 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar19 + 0x28) = uVar17;
                  uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_3')*/ uRam0000000003d6c678,0);
                  if (2 < *(uint *)(lVar19 + 0x18)) {
                    *(undefined8 *)(lVar19 + 0x30) = uVar17;
                    uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_4')*/ uRam0000000003d6c680,0);
                    if ((*(uint *)(lVar19 + 0x18) & 0xfffffffc) != 0) {
                      *(undefined8 *)(lVar19 + 0x38) = uVar17;
                      *(long *)(lVar13 + 0x80) = lVar19;
                      lVar19 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
                      uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Easy')*/ uRam0000000003d69c00,0);
                      if (lVar19 == 0) goto code_r0x01587094;
                      if (*(int *)(lVar19 + 0x18) != 0) {
                        *(undefined8 *)(lVar19 + 0x20) = uVar17;
                        uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,0);
                        if ((*(uint *)(lVar19 + 0x18) & 0xfffffffe) != 0) {
                          *(undefined8 *)(lVar19 + 0x28) = uVar17;
                          uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Hard')*/ uRam0000000003d69c10,0);
                          if (2 < *(uint *)(lVar19 + 0x18)) {
                            *(undefined8 *)(lVar19 + 0x30) = uVar17;
                            uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Legend')*/ uRam0000000003d69c20,0);
                            if ((*(uint *)(lVar19 + 0x18) & 0xfffffffc) != 0) {
                              *(undefined8 *)(lVar19 + 0x38) = uVar17;
                              uVar17 = /*STR('RaceGameContext')*/ uRam0000000003d71920;
                              *(long *)(lVar13 + 0x88) = lVar19;
                              *(undefined8 *)(lVar13 + 0x90) = uVar17;
                              if (lVar13 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                puVar14 = (undefined8 *)
                                          (*(code *)**(undefined8 **)
                                                      (*(long *)(*(long *)(lRam0000000003d2c6f0 +
                                                                          0x18) + 0xc0) + 0x38))();
                                return puVar14;
                              }
                              auVar34 = func_0x00f78af4();
                              puVar11 = auVar34._8_8_;
                              puVar14 = auVar34._0_8_;
                              uVar18 = puVar11[1];
                              uVar17 = *puVar11;
                              puVar14[2] = puVar11[2];
                              puVar14[1] = uVar18;
                              *puVar14 = uVar17;
                              return puVar14;
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
      uVar17 = func_0x00f78b24();
      func_0x00f78ac0(uVar17,0);
    }
code_r0x01587094:
    lVar13 = func_0x00f78af4();
    return *(undefined8 **)(lVar13 + 0x68);
  }
  uVar17 = 0;
  uVar18 = 0;
  lVar13 = puVar14[6];
  if (lVar13 == 0) {
    func_0x00f78af4();
  }
  else if (6 < *(uint *)(lVar13 + 0x18)) {
    *(undefined8 *)(lVar13 + 0x50) = 0;
    return puVar14;
  }
  uVar10 = func_0x00f78b24();
  auVar33 = func_0x00f78ac0(uVar10,0);
  puVar27 = &stack0xffffffffffffffe0;
  lVar13 = *(long *)(auVar33._0_8_ + 0x30);
  if (lVar13 == 0) {
code_r0x0150b5a8:
    unaff_x20 = auVar34._0_8_;
    func_0x00f78af4();
    uVar10 = auVar34._8_8_;
  }
  else {
    uVar15 = auVar33._8_4_;
    uVar10 = auVar33._8_8_;
    if (uVar15 < *(uint *)(lVar13 + 0x18)) {
      lVar13 = *(long *)(lVar13 + (long)(int)uVar15 * 8 + 0x20);
      if (lVar13 == 0) {
        puVar14 = (undefined8 *)0x0;
        if (8 < uVar15) {
          return (undefined8 *)0x0;
        }
        uVar22 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar15 & 0x1f) & uVar22) == 0) {
          return puVar14;
        }
      }
      else {
        puVar14 = (undefined8 *)/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar13,0);
        if ((uVar15 != 0) || (((ulong)puVar14 & 1) == 0)) {
          if (8 < uVar15) {
            return puVar14;
          }
          uVar22 = 0x142;
          goto code_r0x0150b574;
        }
      }
      lVar13 = *(long *)(auVar33._0_8_ + 0x28);
      auVar32._8_4_ = uVar15;
      auVar32._0_8_ = lVar13;
      auVar34 = auVar33;
      if (lVar13 != 0) {
        uVar17 = 0;
        uVar18 = 1;
        puVar28 = &Atlas_UI_TopBarManager__ButtonPressed;
        puVar6 = &stack0xfffffffffffffff0;
        puVar27 = &stack0xfffffffffffffff0;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  unaff_x19 = uVar10;
  uVar10 = func_0x00f78b24();
  puVar28 = &Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar32 = func_0x00f78ac0(uVar10,0);
code_r0x0150b5b8:
  auVar5._8_8_ = uVar18;
  auVar5._0_8_ = unaff_x20;
  auVar4._8_8_ = uVar18;
  auVar4._0_8_ = unaff_x20;
  auVar33._8_8_ = unaff_x19;
  auVar33._0_8_ = auVar32._0_8_;
  auVar3._8_8_ = unaff_x19;
  auVar3._0_8_ = auVar32._0_8_;
  if (auVar32._8_4_ < 9) {
    uVar16 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar32._8_4_ * 4);
    auVar33 = auVar3;
    auVar5 = auVar4;
  }
  else {
    uVar16 = 0xffffffff;
  }
  do {
    uVar25 = auVar33._8_8_;
    puVar14 = auVar33._0_8_;
    *(long *)(puVar6 + -0x20) = auVar5._0_8_;
    *(ulong *)(puVar6 + -0x18) = uVar25;
    *(undefined1 **)(puVar6 + -0x10) = puVar27;
    *(undefined **)(puVar6 + -8) = puVar28;
    uVar15 = (uint)uVar16;
    if (uVar15 == 0xffffffff) {
      return puVar14;
    }
    lVar13 = puVar14[0xe];
    if (lVar13 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar25 = uVar16;
      if (uVar15 < *(uint *)(lVar13 + 0x18)) {
        uVar23 = 2;
        if ((int)uVar17 == 0) {
          uVar23 = 0;
        }
        *(undefined4 *)(lVar13 + (long)(int)uVar15 * 0x60 + 0x5c) = uVar23;
        if ((auVar5._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(puVar14,uVar16);
        }
        *(undefined8 *)(puVar6 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar6 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
        *(long *)(puVar6 + -0x48) = unaff_x25;
        *(long *)(puVar6 + -0x40) = unaff_x24;
        *(long *)(puVar6 + -0x38) = unaff_x23;
        *(long *)(puVar6 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar6 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
        *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
        *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
        *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
        lVar13 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar19 = puVar14[0xe];
        if (lVar19 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar19 + 0x18) <= uVar15) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar15;
        lVar19 = lVar19 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar19 + 0x20);
        unaff_x22 = *(long *)(lVar19 + 0x28);
        uVar17 = *(undefined8 *)(lVar19 + 0x30);
        uVar10 = *(undefined8 *)(lVar19 + 0x48);
        uVar18 = *(undefined8 *)(lVar19 + 0x40);
        *(undefined8 *)(puVar6 + -0xe8) = *(undefined8 *)(lVar19 + 0x38);
        *(undefined8 *)(puVar6 + -0xf0) = uVar17;
        *(undefined8 *)(puVar6 + -0xd8) = uVar10;
        *(undefined8 *)(puVar6 + -0xe0) = uVar18;
        lVar13 = *(long *)(lVar19 + 0x50);
        iVar8 = *(int *)(lVar19 + 0x58);
        iVar9 = *(int *)(lVar19 + 0x5c);
        unaff_x23 = *(long *)(lVar19 + 0x60);
        unaff_x24 = *(long *)(lVar19 + 0x68);
        uVar17 = *(undefined8 *)(lVar19 + 0x70);
        *(undefined8 *)(puVar6 + -0xf8) = *(undefined8 *)(lVar19 + 0x78);
        *(undefined8 *)(puVar6 + -0x100) = uVar17;
        if (iVar9 == iVar8) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar11 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar13,0,0);
          if ((int)puVar11 == 0) {
            return puVar11;
          }
          if (lVar13 != 0) {
            puVar14 = (undefined8 *)/*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar13,iVar8 == 2,0);
            return puVar14;
          }
        }
        else if (iVar8 == 2) {
          if (iVar9 == 0) {
            if (unaff_x24 == 0) goto code_r0x0150c7d4;
            uVar18 = *(undefined8 *)(lVar19 + 0x38);
            uVar17 = *(undefined8 *)(lVar19 + 0x30);
            uVar29 = *(undefined8 *)(lVar19 + 0x48);
            uVar10 = *(undefined8 *)(lVar19 + 0x40);
            *(undefined8 *)(puVar6 + -0x118) = uVar18;
            *(undefined8 *)(puVar6 + -0x120) = uVar17;
            *(undefined8 *)(puVar6 + -0x108) = uVar29;
            *(undefined8 *)(puVar6 + -0x110) = uVar10;
            uVar31 = *(undefined8 *)(lVar19 + 0x78);
            uVar30 = *(undefined8 *)(lVar19 + 0x70);
            *(undefined8 *)(puVar6 + -0x128) = uVar31;
            *(undefined8 *)(puVar6 + -0x130) = uVar30;
            *(undefined8 *)(puVar6 + -200) = unaff_x26;
            *(long *)(puVar6 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar6 + -0xb0) = uVar18;
            *(undefined8 *)(puVar6 + -0xb8) = uVar17;
            *(undefined8 *)(puVar6 + -0xa0) = uVar29;
            *(undefined8 *)(puVar6 + -0xa8) = uVar10;
            *(long *)(puVar6 + -0x98) = lVar13;
            *(undefined8 *)(puVar6 + -0x90) = _UNK_033f8620;
            *(long *)(puVar6 + -0x88) = unaff_x23;
            *(long *)(puVar6 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar6 + -0x70) = uVar31;
            *(undefined8 *)(puVar6 + -0x78) = uVar30;
            lVar19 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar19,puVar6 + -200,uRam0000000003d2a408);
            iVar8 = 1;
          }
          else {
            iVar8 = 2;
          }
code_r0x0150c72c:
          lVar19 = puVar14[0xe];
          if (lVar19 != 0) {
            if (*(uint *)(lVar19 + 0x18) <= uVar15) goto code_r0x0150c7d8;
            lVar19 = lVar19 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar19 + 0x20) = unaff_x26;
            *(long *)(lVar19 + 0x28) = unaff_x22;
            uVar17 = *(undefined8 *)(puVar6 + -0xf0);
            uVar10 = *(undefined8 *)(puVar6 + -0xd8);
            uVar18 = *(undefined8 *)(puVar6 + -0xe0);
            *(undefined8 *)(lVar19 + 0x38) = *(undefined8 *)(puVar6 + -0xe8);
            *(undefined8 *)(lVar19 + 0x30) = uVar17;
            *(undefined8 *)(lVar19 + 0x48) = uVar10;
            *(undefined8 *)(lVar19 + 0x40) = uVar18;
            *(long *)(lVar19 + 0x50) = lVar13;
            *(int *)(lVar19 + 0x58) = iVar8;
            *(int *)(lVar19 + 0x5c) = iVar9;
            *(long *)(lVar19 + 0x60) = unaff_x23;
            *(long *)(lVar19 + 0x68) = unaff_x24;
            uVar17 = *(undefined8 *)(puVar6 + -0x100);
            *(undefined8 *)(lVar19 + 0x78) = *(undefined8 *)(puVar6 + -0xf8);
            *(undefined8 *)(lVar19 + 0x70) = uVar17;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar8 != 0) goto code_r0x0150c72c;
          if (iVar9 != 2) {
            iVar8 = 0;
            goto code_r0x0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar19 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar19 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar19,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar6 + -200) = unaff_x26;
            *(long *)(puVar6 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar6 + -0xb0) = *(undefined8 *)(puVar6 + -0xe8);
            *(undefined8 *)(puVar6 + -0xb8) = *(undefined8 *)(puVar6 + -0xf0);
            *(undefined8 *)(puVar6 + -0xa0) = *(undefined8 *)(puVar6 + -0xd8);
            *(undefined8 *)(puVar6 + -0xa8) = *(undefined8 *)(puVar6 + -0xe0);
            *(long *)(puVar6 + -0x98) = lVar13;
            *(undefined8 *)(puVar6 + -0x90) = _UNK_033f8628;
            *(long *)(puVar6 + -0x88) = unaff_x23;
            *(long *)(puVar6 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0xf8);
            *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x100);
            lVar19 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar17 = func_0x00f78b24();
        auVar34 = func_0x00f78ac0(uVar17,0);
        lVar19 = auVar34._8_8_;
        *(undefined8 *)(puVar6 + -0x180) = unaff_x26;
        *(long *)(puVar6 + -0x178) = unaff_x25;
        *(long *)(puVar6 + -0x170) = unaff_x24;
        *(long *)(puVar6 + -0x168) = unaff_x23;
        *(long *)(puVar6 + -0x160) = unaff_x22;
        *(undefined8 **)(puVar6 + -0x158) = puVar14;
        *(ulong *)(puVar6 + -0x150) = uVar16;
        *(long *)(puVar6 + -0x148) = lVar13;
        *(undefined1 **)(puVar6 + -0x140) = puVar6 + -0x10;
        *(undefined **)(puVar6 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar17 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar19 + 0x18),*(undefined4 *)(lVar19 + 0x1c),
                                 *(undefined4 *)(lVar19 + 0x20),_UNK_033f8144,
                                 *(undefined8 *)(lVar19 + 0x10),0,0);
        uVar17 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar17,10,uRam0000000003d5e7a8);
        uVar17 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar17,*(undefined8 *)(lVar19 + 0x58),uRam0000000003d5e6e0);
        uVar17 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar17,1,uRam0000000003d5e888);
        puVar14 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar17,auVar34._0_8_,uRam0000000003d5e850);
        if ((puVar14 != (undefined8 *)0x0) && (*(char *)(puVar14 + 0x1d) != '\0')) {
          puVar14[6] = *(undefined8 *)(lVar19 + 0x10);
        }
        return puVar14;
      }
    }
    uVar17 = func_0x00f78b24();
    auVar34 = func_0x00f78ac0(uVar17,0);
    puVar7 = puVar6 + -0x30;
    puVar27 = puVar6 + -0x30;
    *(undefined1 **)(puVar6 + -0x30) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar13 = *(long *)(auVar34._0_8_ + 0x28);
    auVar33._8_8_ = auVar34._8_8_;
    auVar33._0_8_ = lVar13;
    if (lVar13 == 0) {
      puVar28 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar33 = func_0x00f78af4();
    }
    else {
      puVar7 = puVar6 + -0x20;
      puVar27 = *(undefined1 **)(puVar6 + -0x30);
      puVar28 = *(undefined **)(puVar6 + -0x28);
    }
    puVar6 = puVar7 + -0x20;
    *(undefined8 **)(puVar7 + -0x20) = puVar14;
    *(ulong *)(puVar7 + -0x18) = uVar25;
    *(undefined1 **)(puVar7 + -0x10) = puVar27;
    *(undefined **)(puVar7 + -8) = puVar28;
    puVar27 = puVar7 + -0x10;
    uVar16 = 4;
    uVar17 = 0;
    puVar28 = &UNK_0150bd10;
    auVar5 = auVar33;
  } while( true );
}



// ============================================================
// RVA: 0x1586bc4 | Atlas.UI.Screens.FreeplayDifficultyScreen.ContinuePressed
// ============================================================

undefined8 *
Atlas_UI_Screens_FreeplayDifficultyScreen__ContinuePressed
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  
  if ((bRam0000000003eb50dc & 1) == 0) {
    func_0x00f78a20(0x3d41040);
    bRam0000000003eb50dc = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41040);
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x10) != 0) {
      /*Atlas.UI.Screens.FreeplayDifficultyScreen.ContinueSelected$$Invoke*/ func_0x0154c028(*(long *)(lVar8 + 0x10),0);
    }
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  auVar18 = func_0x00f78af4();
  uVar6 = auVar18._0_8_;
  if ((bRam0000000003eb50dd & 1) == 0) {
    func_0x00f78a20(0x3d41040);
    func_0x00f78a20(0x3d41048);
    bRam0000000003eb50dd = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar6,uRam0000000003d41048);
  if (((lVar8 != 0) && (*(long *)(lVar8 + 0x48) != 0)) &&
     (lVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar8 + 0x48),0), lVar8 != 0)) {
    if (*(int *)(lVar8 + 0xd8) == (int)param_3) {
code_r0x01586d04:
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar6,uRam0000000003d41040);
      if (lVar8 != 0) {
        puVar9 = *(undefined8 **)(lVar8 + 0x18);
        if (puVar9 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar16 = auStack_90;
        auStack_90._0_8_ = puVar9;
        auStack_90._8_8_ = auVar18._8_8_;
        lVar8 = puVar9[0xd];
        if (lVar8 == 0) {
          lVar15 = 1;
        }
        else {
          lVar15 = *(long *)(lVar8 + 0x18);
          if (lVar15 == 0) {
            return puVar9;
          }
          puVar16 = (undefined1 *)(lVar8 + 0x20);
        }
        lVar8 = 0;
        do {
          lVar10 = *(long *)(puVar16 + lVar8 * 8);
          pcVar14 = *(code **)(lVar10 + 0x10);
          plVar1 = *(long **)(lVar10 + 0x20);
          lVar10 = *(long *)(lVar10 + 0x28);
          if (*(short *)(lVar10 + 0x48) == -1) {
            func_0x00f78ad8(lVar10);
          }
          iVar3 = func_0x00f78a4c(lVar10);
          if (iVar3 == 0) {
            puVar5 = &uStack_98;
            if (plVar1 == (long *)0x0) goto code_r0x0154c3cc;
            if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
               (puVar9[3] == 0)) goto code_r0x0154c3b4;
            iVar3 = func_0x00f78a44(lVar10);
            iVar4 = func_0x00f78ec0(lVar10);
            puVar5 = (undefined8 *)auStack_90._8_8_;
            if (iVar3 == 0) {
              uVar2 = *(ushort *)(lVar10 + 0x48);
              if (iVar4 == 0) {
                lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
                puVar5 = (undefined8 *)
                         (**(code **)(lVar10 + 0x138))
                                   (plVar1,auStack_90._8_8_,*(undefined8 *)(lVar10 + 0x140));
                goto code_r0x0154c3d4;
              }
              lVar10 = func_0x00f78a48(lVar10);
              puVar5 = (undefined8 *)auStack_90._8_8_;
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar10) {
                    puVar7 = (undefined8 *)
                             (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x0154c4a8;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x0154c4a8:
              pcVar14 = (code *)*puVar7;
              puVar7 = (undefined8 *)puVar7[1];
            }
            else {
              if (iVar4 == 0) {
                uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar11 = *plVar1;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                      lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0154c478;
                    }
                    piVar13 = piVar13 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                lVar11 = func_0x00fac1f0(plVar1);
code_r0x0154c478:
                uVar6 = *(undefined8 *)(lVar11 + 8);
              }
              puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
              pcVar14 = (code *)*puVar7;
            }
            puVar5 = (undefined8 *)(*pcVar14)(plVar1,puVar5,puVar7);
          }
          else {
            puVar5 = (undefined8 *)auStack_90._8_8_;
            if (*(char *)(lVar10 + 0x4a) == '\x01') {
code_r0x0154c3cc:
              puVar5 = (undefined8 *)(*pcVar14)(puVar5,lVar10);
            }
            else {
code_r0x0154c3b4:
              puVar5 = (undefined8 *)(*pcVar14)(plVar1,auStack_90._8_8_,lVar10);
            }
          }
code_r0x0154c3d4:
          lVar8 = lVar8 + 1;
          if (lVar8 == lVar15) {
            return puVar5;
          }
        } while( true );
      }
    }
    else {
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar6,uRam0000000003d41048);
      if (((lVar8 != 0) && (*(long *)(lVar8 + 0x48) != 0)) &&
         (lVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar8 + 0x48),0), lVar8 != 0)) {
        *(int *)(lVar8 + 0xd8) = (int)param_3;
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar6,uRam0000000003d41048);
        if ((lVar8 != 0) && (*(long *)(lVar8 + 0x48) != 0)) {
          /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(*(long *)(lVar8 + 0x48),0);
          goto code_r0x01586d04;
        }
      }
    }
  }
  lVar8 = func_0x00f78af4();
  uStack_98 = param_3;
  auStack_90 = auVar18;
  if ((bRam0000000003eb50de & 1) == 0) {
    func_0x00f78a20(0x3d2c6f0);
    func_0x00f78a20(0x3d1ef00);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d6c680);
    func_0x00f78a20(0x3d69c00);
    func_0x00f78a20(0x3d69c10);
    func_0x00f78a20(0x3d6c678);
    func_0x00f78a20(0x3d6c658);
    func_0x00f78a20(0x3d71920);
    func_0x00f78a20(0x3d6c648);
    func_0x00f78a20(0x3d69c28);
    func_0x00f78a20(0x3d6c660);
    func_0x00f78a20(0x3d69c20);
    func_0x00f78a20(0x3d6c670);
    func_0x00f78a20(0x3d6c668);
    func_0x00f78a20(0x3d6c650);
    bRam0000000003eb50de = 1;
  }
  lVar15 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_1')*/ uRam0000000003d6c648,0);
  if (lVar15 != 0) {
    if (*(int *)(lVar15 + 0x18) != 0) {
      *(undefined8 *)(lVar15 + 0x20) = uVar6;
      uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_2')*/ uRam0000000003d6c650,0);
      if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar15 + 0x28) = uVar6;
        uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_3')*/ uRam0000000003d6c658,0);
        if (2 < *(uint *)(lVar15 + 0x18)) {
          *(undefined8 *)(lVar15 + 0x30) = uVar6;
          uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_4')*/ uRam0000000003d6c660,0);
          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar15 + 0x38) = uVar6;
            *(long *)(lVar8 + 0x78) = lVar15;
            lVar15 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
            uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_1')*/ uRam0000000003d6c668,0);
            if (lVar15 == 0) goto code_r0x01587094;
            if (*(int *)(lVar15 + 0x18) != 0) {
              *(undefined8 *)(lVar15 + 0x20) = uVar6;
              uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_2')*/ uRam0000000003d6c670,0);
              if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar15 + 0x28) = uVar6;
                uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_3')*/ uRam0000000003d6c678,0);
                if (2 < *(uint *)(lVar15 + 0x18)) {
                  *(undefined8 *)(lVar15 + 0x30) = uVar6;
                  uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_4')*/ uRam0000000003d6c680,0);
                  if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar15 + 0x38) = uVar6;
                    *(long *)(lVar8 + 0x80) = lVar15;
                    lVar15 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
                    uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Easy')*/ uRam0000000003d69c00,0);
                    if (lVar15 == 0) goto code_r0x01587094;
                    if (*(int *)(lVar15 + 0x18) != 0) {
                      *(undefined8 *)(lVar15 + 0x20) = uVar6;
                      uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,0);
                      if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) != 0) {
                        *(undefined8 *)(lVar15 + 0x28) = uVar6;
                        uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Hard')*/ uRam0000000003d69c10,0);
                        if (2 < *(uint *)(lVar15 + 0x18)) {
                          *(undefined8 *)(lVar15 + 0x30) = uVar6;
                          uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Legend')*/ uRam0000000003d69c20,0);
                          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) != 0) {
                            *(undefined8 *)(lVar15 + 0x38) = uVar6;
                            uVar6 = /*STR('RaceGameContext')*/ uRam0000000003d71920;
                            *(long *)(lVar8 + 0x88) = lVar15;
                            *(undefined8 *)(lVar8 + 0x90) = uVar6;
                            if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              puVar9 = (undefined8 *)
                                       (*(code *)**(undefined8 **)
                                                   (*(long *)(*(long *)(lRam0000000003d2c6f0 + 0x18)
                                                             + 0xc0) + 0x38))();
                              return puVar9;
                            }
                            auVar18 = func_0x00f78af4();
                            puVar5 = auVar18._8_8_;
                            puVar9 = auVar18._0_8_;
                            uVar17 = puVar5[1];
                            uVar6 = *puVar5;
                            puVar9[2] = puVar5[2];
                            puVar9[1] = uVar17;
                            *puVar9 = uVar6;
                            return puVar9;
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
    uVar6 = func_0x00f78b24();
    func_0x00f78ac0(uVar6,0);
  }
code_r0x01587094:
  lVar8 = func_0x00f78af4();
  return *(undefined8 **)(lVar8 + 0x68);
}



// ============================================================
// RVA: 0x1586c38 | Atlas.UI.Screens.FreeplayDifficultyScreen.OnDifficultySelected
// ============================================================

undefined8 *
Atlas_UI_Screens_FreeplayDifficultyScreen__OnDifficultySelected
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  undefined8 **ppuVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if ((bRam0000000003eb50dd & 1) == 0) {
    func_0x00f78a20(0x3d41040);
    func_0x00f78a20(0x3d41048);
    bRam0000000003eb50dd = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41048);
  if (((lVar8 != 0) && (*(long *)(lVar8 + 0x48) != 0)) &&
     (lVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar8 + 0x48),0), lVar8 != 0)) {
    if (*(int *)(lVar8 + 0xd8) == (int)param_3) {
LAB_01586d04:
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41040);
      if (lVar8 != 0) {
        puVar9 = *(undefined8 **)(lVar8 + 0x18);
        if (puVar9 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        ppuVar16 = &puStack_60;
        puStack_60 = puVar9;
        puStack_58 = param_2;
        lVar8 = puVar9[0xd];
        if (lVar8 == 0) {
          lVar15 = 1;
        }
        else {
          lVar15 = *(long *)(lVar8 + 0x18);
          if (lVar15 == 0) {
            return puVar9;
          }
          ppuVar16 = (undefined8 **)(lVar8 + 0x20);
        }
        lVar8 = 0;
        do {
          lVar10 = *(long *)((long)ppuVar16 + lVar8 * 8);
          pcVar14 = *(code **)(lVar10 + 0x10);
          plVar1 = *(long **)(lVar10 + 0x20);
          lVar10 = *(long *)(lVar10 + 0x28);
          if (*(short *)(lVar10 + 0x48) == -1) {
            func_0x00f78ad8(lVar10);
          }
          iVar3 = func_0x00f78a4c(lVar10);
          if (iVar3 == 0) {
            puVar5 = &uStack_68;
            if (plVar1 == (long *)0x0) goto code_r0x0154c3cc;
            if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
               (puVar9[3] == 0)) goto code_r0x0154c3b4;
            iVar3 = func_0x00f78a44(lVar10);
            iVar4 = func_0x00f78ec0(lVar10);
            puVar5 = puStack_58;
            if (iVar3 == 0) {
              uVar2 = *(ushort *)(lVar10 + 0x48);
              if (iVar4 == 0) {
                lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
                puVar5 = (undefined8 *)
                         (**(code **)(lVar10 + 0x138))
                                   (plVar1,puStack_58,*(undefined8 *)(lVar10 + 0x140));
                goto code_r0x0154c3d4;
              }
              lVar10 = func_0x00f78a48(lVar10);
              puVar5 = puStack_58;
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar10) {
                    puVar7 = (undefined8 *)
                             (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x0154c4a8;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x0154c4a8:
              pcVar14 = (code *)*puVar7;
              puVar7 = (undefined8 *)puVar7[1];
            }
            else {
              if (iVar4 == 0) {
                uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar11 = *plVar1;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                      lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0154c478;
                    }
                    piVar13 = piVar13 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                lVar11 = func_0x00fac1f0(plVar1);
code_r0x0154c478:
                uVar6 = *(undefined8 *)(lVar11 + 8);
              }
              puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar10);
              pcVar14 = (code *)*puVar7;
            }
            puVar5 = (undefined8 *)(*pcVar14)(plVar1,puVar5,puVar7);
          }
          else {
            puVar5 = puStack_58;
            if (*(char *)(lVar10 + 0x4a) == '\x01') {
code_r0x0154c3cc:
              puVar5 = (undefined8 *)(*pcVar14)(puVar5,lVar10);
            }
            else {
code_r0x0154c3b4:
              puVar5 = (undefined8 *)(*pcVar14)(plVar1,puStack_58,lVar10);
            }
          }
code_r0x0154c3d4:
          lVar8 = lVar8 + 1;
          if (lVar8 == lVar15) {
            return puVar5;
          }
        } while( true );
      }
    }
    else {
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41048);
      if (((lVar8 != 0) && (*(long *)(lVar8 + 0x48) != 0)) &&
         (lVar8 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar8 + 0x48),0), lVar8 != 0)) {
        *(int *)(lVar8 + 0xd8) = (int)param_3;
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41048);
        if ((lVar8 != 0) && (*(long *)(lVar8 + 0x48) != 0)) {
          /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(*(long *)(lVar8 + 0x48),0);
          goto LAB_01586d04;
        }
      }
    }
  }
  lVar8 = func_0x00f78af4();
  uStack_68 = param_3;
  puStack_60 = param_1;
  puStack_58 = param_2;
  if ((bRam0000000003eb50de & 1) == 0) {
    func_0x00f78a20(0x3d2c6f0);
    func_0x00f78a20(0x3d1ef00);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d6c680);
    func_0x00f78a20(0x3d69c00);
    func_0x00f78a20(0x3d69c10);
    func_0x00f78a20(0x3d6c678);
    func_0x00f78a20(0x3d6c658);
    func_0x00f78a20(0x3d71920);
    func_0x00f78a20(0x3d6c648);
    func_0x00f78a20(0x3d69c28);
    func_0x00f78a20(0x3d6c660);
    func_0x00f78a20(0x3d69c20);
    func_0x00f78a20(0x3d6c670);
    func_0x00f78a20(0x3d6c668);
    func_0x00f78a20(0x3d6c650);
    bRam0000000003eb50de = 1;
  }
  lVar15 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_1')*/ uRam0000000003d6c648,0);
  if (lVar15 != 0) {
    if (*(int *)(lVar15 + 0x18) != 0) {
      *(undefined8 *)(lVar15 + 0x20) = uVar6;
      uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_2')*/ uRam0000000003d6c650,0);
      if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar15 + 0x28) = uVar6;
        uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_3')*/ uRam0000000003d6c658,0);
        if (2 < *(uint *)(lVar15 + 0x18)) {
          *(undefined8 *)(lVar15 + 0x30) = uVar6;
          uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_4')*/ uRam0000000003d6c660,0);
          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar15 + 0x38) = uVar6;
            *(long *)(lVar8 + 0x78) = lVar15;
            lVar15 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
            uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_1')*/ uRam0000000003d6c668,0);
            if (lVar15 == 0) goto code_r0x01587094;
            if (*(int *)(lVar15 + 0x18) != 0) {
              *(undefined8 *)(lVar15 + 0x20) = uVar6;
              uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_2')*/ uRam0000000003d6c670,0);
              if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar15 + 0x28) = uVar6;
                uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_3')*/ uRam0000000003d6c678,0);
                if (2 < *(uint *)(lVar15 + 0x18)) {
                  *(undefined8 *)(lVar15 + 0x30) = uVar6;
                  uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_4')*/ uRam0000000003d6c680,0);
                  if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar15 + 0x38) = uVar6;
                    *(long *)(lVar8 + 0x80) = lVar15;
                    lVar15 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
                    uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Easy')*/ uRam0000000003d69c00,0);
                    if (lVar15 == 0) goto code_r0x01587094;
                    if (*(int *)(lVar15 + 0x18) != 0) {
                      *(undefined8 *)(lVar15 + 0x20) = uVar6;
                      uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,0);
                      if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) != 0) {
                        *(undefined8 *)(lVar15 + 0x28) = uVar6;
                        uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Hard')*/ uRam0000000003d69c10,0);
                        if (2 < *(uint *)(lVar15 + 0x18)) {
                          *(undefined8 *)(lVar15 + 0x30) = uVar6;
                          uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Legend')*/ uRam0000000003d69c20,0);
                          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffc) != 0) {
                            *(undefined8 *)(lVar15 + 0x38) = uVar6;
                            uVar6 = /*STR('RaceGameContext')*/ uRam0000000003d71920;
                            *(long *)(lVar8 + 0x88) = lVar15;
                            *(undefined8 *)(lVar8 + 0x90) = uVar6;
                            if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              puVar9 = (undefined8 *)
                                       (*(code *)**(undefined8 **)
                                                   (*(long *)(*(long *)(lRam0000000003d2c6f0 + 0x18)
                                                             + 0xc0) + 0x38))();
                              return puVar9;
                            }
                            auVar18 = func_0x00f78af4();
                            puVar5 = auVar18._8_8_;
                            puVar9 = auVar18._0_8_;
                            uVar17 = puVar5[1];
                            uVar6 = *puVar5;
                            puVar9[2] = puVar5[2];
                            puVar9[1] = uVar17;
                            *puVar9 = uVar6;
                            return puVar9;
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
    uVar6 = func_0x00f78b24();
    func_0x00f78ac0(uVar6,0);
  }
code_r0x01587094:
  lVar8 = func_0x00f78af4();
  return *(undefined8 **)(lVar8 + 0x68);
}



// ============================================================
// RVA: 0x1586d58 | Atlas.UI.Screens.FreeplayDifficultyScreen..ctor
// ============================================================

undefined8 * Atlas_UI_Screens_FreeplayDifficultyScreen___ctor(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb50de & 1) == 0) {
    func_0x00f78a20(0x3d2c6f0);
    func_0x00f78a20(0x3d1ef00);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d6c680);
    func_0x00f78a20(0x3d69c00);
    func_0x00f78a20(0x3d69c10);
    func_0x00f78a20(0x3d6c678);
    func_0x00f78a20(0x3d6c658);
    func_0x00f78a20(0x3d71920);
    func_0x00f78a20(0x3d6c648);
    func_0x00f78a20(0x3d69c28);
    func_0x00f78a20(0x3d6c660);
    func_0x00f78a20(0x3d69c20);
    func_0x00f78a20(0x3d6c670);
    func_0x00f78a20(0x3d6c668);
    func_0x00f78a20(0x3d6c650);
    bRam0000000003eb50de = 1;
  }
  lVar1 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_1')*/ uRam0000000003d6c648,0);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_2')*/ uRam0000000003d6c650,0);
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar1 + 0x28) = uVar2;
        uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_3')*/ uRam0000000003d6c658,0);
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x30) = uVar2;
          uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_1_4')*/ uRam0000000003d6c660,0);
          if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar1 + 0x38) = uVar2;
            *(long *)(param_1 + 0x78) = lVar1;
            lVar1 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
            uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_1')*/ uRam0000000003d6c668,0);
            if (lVar1 == 0) goto LAB_01587094;
            if (*(int *)(lVar1 + 0x18) != 0) {
              *(undefined8 *)(lVar1 + 0x20) = uVar2;
              uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_2')*/ uRam0000000003d6c670,0);
              if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar1 + 0x28) = uVar2;
                uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_3')*/ uRam0000000003d6c678,0);
                if (2 < *(uint *)(lVar1 + 0x18)) {
                  *(undefined8 *)(lVar1 + 0x30) = uVar2;
                  uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Event_Freeplay_2_4')*/ uRam0000000003d6c680,0);
                  if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar1 + 0x38) = uVar2;
                    *(long *)(param_1 + 0x80) = lVar1;
                    lVar1 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,4);
                    uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Easy')*/ uRam0000000003d69c00,0);
                    if (lVar1 == 0) goto LAB_01587094;
                    if (*(int *)(lVar1 + 0x18) != 0) {
                      *(undefined8 *)(lVar1 + 0x20) = uVar2;
                      uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Medium')*/ uRam0000000003d69c28,0);
                      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
                        *(undefined8 *)(lVar1 + 0x28) = uVar2;
                        uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Hard')*/ uRam0000000003d69c10,0);
                        if (2 < *(uint *)(lVar1 + 0x18)) {
                          *(undefined8 *)(lVar1 + 0x30) = uVar2;
                          uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Campaign_Legend')*/ uRam0000000003d69c20,0);
                          if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
                            *(undefined8 *)(lVar1 + 0x38) = uVar2;
                            uVar2 = /*STR('RaceGameContext')*/ uRam0000000003d71920;
                            *(long *)(param_1 + 0x88) = lVar1;
                            *(undefined8 *)(param_1 + 0x90) = uVar2;
                            if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                              puVar3 = (undefined8 *)
                                       (*(code *)**(undefined8 **)
                                                   (*(long *)(*(long *)(lRam0000000003d2c6f0 + 0x18)
                                                             + 0xc0) + 0x38))();
                              return puVar3;
                            }
                            auVar6 = func_0x00f78af4();
                            puVar4 = auVar6._8_8_;
                            puVar3 = auVar6._0_8_;
                            uVar5 = puVar4[1];
                            uVar2 = *puVar4;
                            puVar3[2] = puVar4[2];
                            puVar3[1] = uVar5;
                            *puVar3 = uVar2;
                            return puVar3;
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
    uVar2 = func_0x00f78b24();
    func_0x00f78ac0(uVar2,0);
  }
LAB_01587094:
  lVar1 = func_0x00f78af4();
  return *(undefined8 **)(lVar1 + 0x68);
}



