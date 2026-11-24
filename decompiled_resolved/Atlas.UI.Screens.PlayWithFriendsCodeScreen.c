// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.PlayWithFriendsCodeScreen

// ============================================================
// RVA: 0x14bec04 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.OnBeforeEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x014bed84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bedf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bf0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bf108: Changing call to branch */
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
/* WARNING: Possible PIC construction at 0x014bf224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150c794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bf398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bf468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bffec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c0150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bfff0) */
/* WARNING: Removing unreachable block (ram,0x014bf46c) */
/* WARNING: Removing unreachable block (ram,0x014bff6c) */
/* WARNING: Removing unreachable block (ram,0x014bff98) */
/* WARNING: Removing unreachable block (ram,0x014bffac) */
/* WARNING: Removing unreachable block (ram,0x014bffbc) */
/* WARNING: Removing unreachable block (ram,0x014bffc4) */
/* WARNING: Removing unreachable block (ram,0x014c0000) */
/* WARNING: Removing unreachable block (ram,0x014bffd0) */
/* WARNING: Removing unreachable block (ram,0x014bffdc) */
/* WARNING: Removing unreachable block (ram,0x014c0010) */
/* WARNING: Removing unreachable block (ram,0x014c001c) */
/* WARNING: Removing unreachable block (ram,0x014bffe4) */
/* WARNING: Removing unreachable block (ram,0x014bf39c) */
/* WARNING: Removing unreachable block (ram,0x014bf3fc) */
/* WARNING: Removing unreachable block (ram,0x014bf3a0) */
/* WARNING: Removing unreachable block (ram,0x014bf3ac) */
/* WARNING: Removing unreachable block (ram,0x014bf3b0) */
/* WARNING: Removing unreachable block (ram,0x014bf3cc) */
/* WARNING: Removing unreachable block (ram,0x014bf3d8) */
/* WARNING: Removing unreachable block (ram,0x014bf3e8) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150c798) */
/* WARNING: Removing unreachable block (ram,0x0150c79c) */
/* WARNING: Removing unreachable block (ram,0x0150c7a0) */
/* WARNING: Removing unreachable block (ram,0x0150c7b4) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x014bf228) */
/* WARNING: Removing unreachable block (ram,0x014bf27c) */
/* WARNING: Removing unreachable block (ram,0x014bf22c) */
/* WARNING: Removing unreachable block (ram,0x014bf23c) */
/* WARNING: Removing unreachable block (ram,0x014bf244) */
/* WARNING: Removing unreachable block (ram,0x014bf254) */
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
/* WARNING: Removing unreachable block (ram,0x014bf10c) */
/* WARNING: Removing unreachable block (ram,0x014bf11c) */
/* WARNING: Removing unreachable block (ram,0x014bf124) */
/* WARNING: Removing unreachable block (ram,0x014bf130) */
/* WARNING: Removing unreachable block (ram,0x01cb5390) */
/* WARNING: Removing unreachable block (ram,0x01cb53b4) */
/* WARNING: Removing unreachable block (ram,0x01cb53d4) */
/* WARNING: Removing unreachable block (ram,0x01cb53d8) */
/* WARNING: Removing unreachable block (ram,0x01cb53f4) */
/* WARNING: Removing unreachable block (ram,0x01cb53fc) */
/* WARNING: Removing unreachable block (ram,0x01cb5430) */
/* WARNING: Removing unreachable block (ram,0x01cb545c) */
/* WARNING: Removing unreachable block (ram,0x01cb547c) */
/* WARNING: Removing unreachable block (ram,0x01cb5480) */
/* WARNING: Removing unreachable block (ram,0x01cb549c) */
/* WARNING: Removing unreachable block (ram,0x01cb54a4) */
/* WARNING: Removing unreachable block (ram,0x01cb54d8) */
/* WARNING: Removing unreachable block (ram,0x01cb5530) */
/* WARNING: Removing unreachable block (ram,0x01cb5534) */
/* WARNING: Removing unreachable block (ram,0x01cb5568) */
/* WARNING: Removing unreachable block (ram,0x01cb557c) */
/* WARNING: Removing unreachable block (ram,0x01cb5588) */
/* WARNING: Removing unreachable block (ram,0x01cb5590) */
/* WARNING: Removing unreachable block (ram,0x01cb5594) */
/* WARNING: Removing unreachable block (ram,0x032441e0) */
/* WARNING: Removing unreachable block (ram,0x0324420c) */
/* WARNING: Removing unreachable block (ram,0x03244220) */
/* WARNING: Removing unreachable block (ram,0x0324422c) */
/* WARNING: Removing unreachable block (ram,0x03244234) */
/* WARNING: Removing unreachable block (ram,0x03244238) */
/* WARNING: Removing unreachable block (ram,0x01cb54ec) */
/* WARNING: Removing unreachable block (ram,0x01cb5520) */
/* WARNING: Removing unreachable block (ram,0x01cb550c) */
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
/* WARNING: Removing unreachable block (ram,0x01cb54c4) */
/* WARNING: Removing unreachable block (ram,0x01cb541c) */
/* WARNING: Removing unreachable block (ram,0x01461604) */
/* WARNING: Removing unreachable block (ram,0x014bedf8) */
/* WARNING: Removing unreachable block (ram,0x014bee08) */
/* WARNING: Removing unreachable block (ram,0x014bee3c) */
/* WARNING: Removing unreachable block (ram,0x014bee60) */
/* WARNING: Removing unreachable block (ram,0x014bee7c) */
/* WARNING: Removing unreachable block (ram,0x014bee84) */
/* WARNING: Removing unreachable block (ram,0x014bee90) */
/* WARNING: Removing unreachable block (ram,0x014beea8) */
/* WARNING: Removing unreachable block (ram,0x014beec0) */
/* WARNING: Removing unreachable block (ram,0x014beec8) */
/* WARNING: Removing unreachable block (ram,0x014bf174) */
/* WARNING: Removing unreachable block (ram,0x014beed4) */
/* WARNING: Removing unreachable block (ram,0x014beefc) */
/* WARNING: Removing unreachable block (ram,0x014bed88) */
/* WARNING: Removing unreachable block (ram,0x014bed98) */
/* WARNING: Removing unreachable block (ram,0x014beda0) */
/* WARNING: Removing unreachable block (ram,0x014bedd4) */
/* WARNING: Removing unreachable block (ram,0x014c0154) */
/* WARNING: Removing unreachable block (ram,0x014c0158) */
/* WARNING: Removing unreachable block (ram,0x014c015c) */
/* WARNING: Removing unreachable block (ram,0x014c0178) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
Atlas_UI_Screens_PlayWithFriendsCodeScreen__OnBeforeEnter
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined4 param_4,
          ulong param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined4 uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *unaff_x23;
  undefined8 *puVar25;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar26;
  undefined8 *unaff_x28;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  puVar2 = &stack0xffffffffffffffa0;
  puVar3 = &stack0xffffffffffffffa0;
  puVar14 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b03 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d2c880);
    func_0x00f78a20(0x3d2c888);
    func_0x00f78a20(0x3d2c890);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d5b5b0);
    func_0x00f78a20(0x3d5b5b8);
    func_0x00f78a20(0x3d5b5c8);
    func_0x00f78a20(0x3d5b5d0);
    func_0x00f78a20(0x3d5b5d8);
    func_0x00f78a20(0x3d5b5e0);
    func_0x00f78a20(0x3d639c0);
    func_0x00f78a20(0x3d28618);
    func_0x00f78a20(0x3d41220);
    func_0x00f78a20(0x3d41228);
    func_0x00f78a20(0x3d41230);
    func_0x00f78a20(0x3d25740);
    bRam0000000003eb4b03 = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_5,uRam0000000003d41228);
  puVar13 = unaff_x23;
  uVar11 = param_5;
  uVar15 = param_5;
  if (lVar8 != 0) {
    lVar24 = 0x3d5b000;
    uVar22 = *(ulong *)(lVar8 + 0x18);
    uVar9 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
    /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(uVar9,param_5,uRam0000000003d5b5b0,0);
    if (uVar22 != 0) {
      unaff_x24 = (undefined8 *)0x3d41220;
      uVar16 = 0;
      /*UnityEngine.Events.UnityEvent$$AddListener*/ func_0x03277f74(uVar22,uVar9);
      puVar27 = (undefined *)0x14bed88;
      puVar2 = &stack0xffffffffffffffa0;
      param_5 = uVar22;
      goto code_r0x014bf184;
    }
  }
  do {
    while( true ) {
      do {
        do {
          do {
            do {
              do {
                do {
                  func_0x00f78af4();
                  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,*unaff_x24);
                } while (lVar8 == 0);
                lVar8 = *(long *)(lVar8 + 0x88);
                uVar9 = func_0x00f78aec(*unaff_x28);
                /*System.Action$$.ctor*/ func_0x02924c80(uVar9,param_5,*puVar13,0);
              } while (lVar8 == 0);
              /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar8,uVar9,0);
              lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,*unaff_x24);
              unaff_x23 = (undefined8 *)0x3d41228;
              puVar25 = (undefined8 *)0x3d41228;
              puVar13 = unaff_x23;
            } while (lVar8 == 0);
            lVar8 = *(long *)(lVar8 + 0x90);
            uVar9 = func_0x00f78aec(*unaff_x28);
            /*System.Action$$.ctor*/ func_0x02924c80(uVar9,param_5,uRam0000000003d5b5d0,0);
          } while (lVar8 == 0);
          /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar8,uVar9,0);
          Atlas_UI_Screens_AtlasScreen_ModeSelectScreenBehaviour__ModeSelectScreen_TransitionData___SetScreenHandlePartyInvite
                    (param_5,1,uRam0000000003d2c890);
          unaff_x25 = 0x3d41230;
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41230);
          unaff_x26 = 0x3d1b598;
        } while ((lVar8 == 0) || (lVar24 = *(long *)(lVar8 + 0x28), puVar13 = puVar25, lVar24 == 0))
        ;
        uVar22 = *(ulong *)(lVar24 + 0x48);
        uVar9 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar9,param_5,uRam0000000003d5b5e0,uRam0000000003d2a320);
        uVar16 = 0;
        plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar22,uVar9);
        if ((plVar10 != (long *)0x0) && (*plVar10 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
          puVar27 = &Atlas_UI_Screens_PlayWithFriendsCodeScreen__RemoveAllDigits;
          uVar11 = func_0x00f78e5c();
          param_5 = uVar22;
          goto code_r0x014bf184;
        }
        *(long **)(lVar24 + 0x48) = plVar10;
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_5,uRam0000000003d41228);
      } while (lVar8 == 0);
      uVar16 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar8 + 0x20),0);
      if ((uVar16 & 1) == 0) break;
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41230);
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x28) != 0)) {
        uVar22 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)(lVar8 + 0x28) + 0x20),0);
        if ((uVar22 & 1) == 0) {
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41230);
          if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x28), lVar8 != 0)) goto LAB_014bf0d4;
        }
        else {
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41230);
          uVar30 = (undefined4)param_3;
          uVar20 = (undefined4)param_2;
          if ((lVar8 != 0) && (*(long *)(lVar8 + 0x28) != 0)) {
            /*Core.Services.ServicesManager$$ClearLastReceivedPartyCode*/ func_0x01685a4c(*(long *)(lVar8 + 0x28),0);
            puVar27 = &UNK_014bf10c;
            uVar15 = uVar16;
            goto code_r0x014bf400;
          }
        }
      }
    }
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_5,uRam0000000003d41228);
  } while (lVar8 == 0);
LAB_014bf0d4:
  uVar15 = *(ulong *)(lVar8 + 0x20);
  puVar27 = &LAB_014bf0e4;
  uVar22 = param_5;
  uVar23 = uVar16;
  puVar12 = (undefined1 *)register0x00000008;
  do {
    puVar2 = puVar12 + -0x90;
    *(long *)(puVar12 + -0x90) = lVar24;
    *(undefined8 *)(puVar12 + -0x88) = uVar9;
    *(ulong *)(puVar12 + -0x80) = uVar23;
    *(ulong *)(puVar12 + -0x78) = uVar22;
    *(undefined1 **)(puVar12 + -0x70) = puVar14;
    *(undefined **)(puVar12 + -0x68) = puVar27;
    puVar14 = puVar12 + -0x70;
    if (((int)uVar16 != 0) &&
       (puVar12 = (undefined1 *)/*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$IsCodeFormatValid*/ func_0x014bf9a0(param_5,uVar15), (int)puVar12 == 0)) {
      return puVar12;
    }
    puVar27 = &UNK_014bf39c;
    uVar11 = param_5;
code_r0x014bf184:
    puVar3 = puVar2 + -0x30;
    *(long *)(puVar2 + -0x30) = lVar24;
    *(undefined8 *)(puVar2 + -0x28) = uVar9;
    *(ulong *)(puVar2 + -0x20) = param_5;
    *(ulong *)(puVar2 + -0x18) = uVar15;
    *(undefined1 **)(puVar2 + -0x10) = puVar14;
    *(undefined **)(puVar2 + -8) = puVar27;
    puVar14 = puVar2 + -0x10;
    uVar9 = 0x3d41220;
    if ((bRam0000000003eb4b0a & 1) == 0) {
      func_0x00f78a20(0x3d2c888);
      func_0x00f78a20(0x3d24dd0);
      func_0x00f78a20(0x3d41220);
      bRam0000000003eb4b0a = 1;
    }
    uVar15 = /*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$AreAllDigitsFilled*/ func_0x014bfcf0(uVar11);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d41220);
    uVar30 = (undefined4)param_3;
    uVar20 = (undefined4)param_2;
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
      lVar24 = 0x3d24000;
      /*Atlas.UI.UICodePanelBehaviour$$HideAllDigits*/ func_0x0151a2dc(*(long *)(lVar8 + 0x68),0);
      uVar18 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
      *(undefined8 *)(uVar11 + 0x78) = 0x3f80000000000000;
      *(undefined8 *)(uVar11 + 0x80) = uVar18;
      puVar27 = &UNK_014bf228;
code_r0x014bf400:
      *(long *)(puVar3 + -0x30) = lVar24;
      *(undefined8 *)(puVar3 + -0x28) = uVar9;
      *(ulong *)(puVar3 + -0x20) = uVar15;
      *(ulong *)(puVar3 + -0x18) = uVar11;
      *(undefined1 **)(puVar3 + -0x10) = puVar14;
      *(undefined **)(puVar3 + -8) = puVar27;
      if ((bRam0000000003eb4b11 & 1) == 0) {
        func_0x00f78a20(0x3d41220);
        bRam0000000003eb4b11 = 1;
      }
      uVar9 = /*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$AreAllDigitsFilled*/ func_0x014bfcf0(uVar11);
      uVar7 = *(uint *)(uVar11 + 0x78);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d41220);
      if (lVar8 == 0) {
        puVar14 = (undefined1 *)func_0x00f78af4();
        return puVar14;
      }
      bVar6 = uVar7 != 0;
      lVar8 = *(long *)(lVar8 + 0x90);
      puVar5 = puVar3 + -0x70;
      *(ulong *)(puVar3 + -0x60) = (ulong)uVar7;
      *(undefined8 *)(puVar3 + -0x58) = 0x3d41220;
      *(undefined8 *)(puVar3 + -0x50) = uVar9;
      *(ulong *)(puVar3 + -0x48) = uVar11;
      *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
      *(undefined **)(puVar3 + -0x38) = &UNK_014bf46c;
      puVar14 = puVar3 + -0x40;
      if ((bRam0000000003eb4b10 & 1) == 0) {
        func_0x00f78a20(0x3d535f0);
        func_0x00f78a20(0x3d53590);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b10 = 1;
      }
      if (lVar8 == 0) {
code_r0x014c018c:
        lVar8 = func_0x00f78af4();
        return (undefined1 *)(ulong)(*(int *)(lVar8 + 0x78) == 0);
      }
      /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar8,bVar6,0);
      if (((*(long *)(lVar8 + 0xd8) == 0) ||
          (lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar8 + 0xd8),0), lVar8 == 0)) ||
         (lVar8 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar8,0,0), lVar8 == 0)) goto code_r0x014c018c;
      plVar10 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar8,uRam0000000003d53590);
      auVar32[8] = bVar6;
      auVar32._0_8_ = plVar10;
      auVar32._9_7_ = 0;
      if (plVar10 == (long *)0x0) goto code_r0x014c018c;
      lVar8 = 0x3d23990;
      lVar24 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar10,uRam0000000003d535f0);
      uVar11 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
      *(int *)(puVar3 + -0x70) = (int)uVar11;
      *(undefined4 *)(puVar3 + -0x6c) = uVar20;
      *(undefined4 *)(puVar3 + -0x68) = uVar30;
      *(undefined4 *)(puVar3 + -100) = param_4;
      if (!bVar6) {
        /*UnityEngine.Color$$.ctor*/ func_0x03222f90(_UNK_033f84b8,_UNK_033f84b8,_UNK_033f84b8,puVar3 + -0x70,0);
        uVar11 = (ulong)*(uint *)(puVar3 + -0x70);
      }
      (**(code **)(*plVar10 + 0x2a8))(uVar11,plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar27 = &UNK_014c0154;
      goto code_r0x03249a9c;
    }
    func_0x00f78af4();
    uVar9 = func_0x00f78b24();
    auVar32 = func_0x00f78ac0(uVar9,0);
    uVar22 = auVar32._8_8_;
    uVar23 = auVar32._0_8_;
    *(long *)(puVar2 + -0x60) = lVar24;
    *(undefined8 *)(puVar2 + -0x58) = 0x3d41220;
    *(ulong *)(puVar2 + -0x50) = uVar15;
    *(ulong *)(puVar2 + -0x48) = uVar11;
    *(undefined1 **)(puVar2 + -0x40) = puVar14;
    *(undefined **)(puVar2 + -0x38) = &Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNextButton;
    puVar14 = puVar2 + -0x40;
    lVar24 = 0x3eb4000;
    uVar9 = 0x3d41230;
    if ((bRam0000000003eb4b06 & 1) == 0) {
      func_0x00f78a20(0x3d41230);
      bRam0000000003eb4b06 = 1;
    }
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar23,uRam0000000003d41230);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0xb8) != 0)) {
      uVar16 = uVar22;
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar8 + 0xb8),6,uVar22,1,0);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar23,uRam0000000003d41230);
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0xb8) != 0)) {
        uVar16 = (ulong)(auVar32._8_4_ ^ 1);
        uVar18 = 1;
        /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar8 + 0xb8),8,uVar16,1,0);
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar23,uRam0000000003d41230);
        if ((lVar8 != 0) && (puVar12 = *(undefined1 **)(lVar8 + 0xb8), puVar12 != (undefined1 *)0x0)
           ) break;
      }
    }
    puVar27 = &Atlas_UI_Screens_PlayWithFriendsCodeScreen__TryCode;
    auVar32 = func_0x00f78af4();
    uVar15 = auVar32._8_8_;
    param_5 = auVar32._0_8_;
    puVar12 = puVar2;
  } while( true );
  uVar17 = 0;
  uVar9 = *(undefined8 *)(puVar2 + -0x50);
  uVar28 = *(undefined8 *)(puVar2 + -0x48);
  lVar8 = *(long *)(puVar2 + -0x60);
  uVar29 = *(undefined8 *)(puVar2 + -0x58);
  *(undefined8 *)(puVar2 + -0x40) = *(undefined8 *)(puVar2 + -0x40);
  *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(puVar2 + -0x38);
  if (*(long *)(puVar12 + 0x28) != 0) {
    *(char *)(*(long *)(puVar12 + 0x28) + 0x80) = auVar32[8];
    return puVar12;
  }
  lVar24 = func_0x00f78af4();
  puVar12 = puVar2 + -0x60;
  *(undefined8 *)(puVar2 + -0x60) = uVar9;
  *(undefined8 *)(puVar2 + -0x58) = uVar28;
  *(undefined1 **)(puVar2 + -0x50) = puVar2 + -0x40;
  *(undefined **)(puVar2 + -0x48) = &Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
  puVar14 = puVar2 + -0x50;
  if (*(ulong *)(lVar24 + 0x28) == 0) {
    puVar27 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
    auVar32 = func_0x00f78af4();
    auVar33._8_8_ = uVar18;
    auVar33._0_8_ = uVar9;
  }
  else {
    auVar32._8_8_ = 0;
    auVar32._0_8_ = *(ulong *)(lVar24 + 0x28);
    uVar17 = 0;
    auVar33._8_8_ = 1;
    auVar33._0_8_ = uVar9;
    puVar27 = &UNK_0150bbf4;
    puVar12 = puVar2 + -0x60;
  }
  do {
    puVar2 = auVar32._0_8_;
    *(long *)(puVar12 + -0x20) = auVar33._0_8_;
    *(long *)(puVar12 + -0x18) = lVar24;
    *(undefined1 **)(puVar12 + -0x10) = puVar14;
    *(undefined **)(puVar12 + -8) = puVar27;
    uVar7 = auVar32._8_4_;
    if (uVar7 == 0xffffffff) {
      return puVar2;
    }
    lVar19 = *(long *)(puVar2 + 0x70);
    if (lVar19 == 0) {
      func_0x00f78af4();
      lVar21 = lVar24;
    }
    else {
      lVar21 = auVar32._8_8_;
      if (uVar7 < *(uint *)(lVar19 + 0x18)) {
        uVar20 = 2;
        if ((int)uVar17 == 0) {
          uVar20 = 0;
        }
        *(undefined4 *)(lVar19 + (long)(int)uVar7 * 0x60 + 0x5c) = uVar20;
        if ((auVar33._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(puVar2,auVar32._8_8_);
        }
        puVar5 = puVar12 + -0x130;
        *(undefined8 **)(puVar12 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar12 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar12 + -0x50) = unaff_x26;
        *(long *)(puVar12 + -0x48) = unaff_x25;
        *(undefined8 **)(puVar12 + -0x40) = unaff_x24;
        *(undefined8 **)(puVar12 + -0x38) = unaff_x23;
        *(long *)(puVar12 + -0x30) = lVar8;
        *(undefined8 *)(puVar12 + -0x28) = uVar29;
        *(undefined8 *)(puVar12 + -0x20) = *(undefined8 *)(puVar12 + -0x20);
        *(undefined8 *)(puVar12 + -0x18) = *(undefined8 *)(puVar12 + -0x18);
        *(undefined8 *)(puVar12 + -0x10) = *(undefined8 *)(puVar12 + -0x10);
        *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
        puVar14 = puVar12 + -0x10;
        lVar24 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar19 = *(long *)(puVar2 + 0x70);
        if (lVar19 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar19 + 0x18) <= uVar7) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar7;
        lVar19 = lVar19 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar19 + 0x20);
        lVar8 = *(long *)(lVar19 + 0x28);
        uVar9 = *(undefined8 *)(lVar19 + 0x30);
        uVar28 = *(undefined8 *)(lVar19 + 0x48);
        uVar18 = *(undefined8 *)(lVar19 + 0x40);
        *(undefined8 *)(puVar12 + -0xe8) = *(undefined8 *)(lVar19 + 0x38);
        *(undefined8 *)(puVar12 + -0xf0) = uVar9;
        *(undefined8 *)(puVar12 + -0xd8) = uVar28;
        *(undefined8 *)(puVar12 + -0xe0) = uVar18;
        lVar24 = *(long *)(lVar19 + 0x50);
        iVar26 = *(int *)(lVar19 + 0x58);
        iVar1 = *(int *)(lVar19 + 0x5c);
        unaff_x23 = *(undefined8 **)(lVar19 + 0x60);
        unaff_x24 = *(undefined8 **)(lVar19 + 0x68);
        uVar9 = *(undefined8 *)(lVar19 + 0x70);
        *(undefined8 *)(puVar12 + -0xf8) = *(undefined8 *)(lVar19 + 0x78);
        *(undefined8 *)(puVar12 + -0x100) = uVar9;
        if (iVar1 == iVar26) goto code_r0x0150c768;
        if (iVar26 == 2) {
          if (iVar1 == 0) {
            if (unaff_x24 == (undefined8 *)0x0) goto code_r0x0150c7d4;
            uVar18 = *(undefined8 *)(lVar19 + 0x38);
            uVar9 = *(undefined8 *)(lVar19 + 0x30);
            uVar29 = *(undefined8 *)(lVar19 + 0x48);
            uVar28 = *(undefined8 *)(lVar19 + 0x40);
            *(undefined8 *)(puVar12 + -0x118) = uVar18;
            *(undefined8 *)(puVar12 + -0x120) = uVar9;
            *(undefined8 *)(puVar12 + -0x108) = uVar29;
            *(undefined8 *)(puVar12 + -0x110) = uVar28;
            uVar31 = *(undefined8 *)(lVar19 + 0x78);
            uVar17 = *(undefined8 *)(lVar19 + 0x70);
            *(undefined8 *)(puVar12 + -0x128) = uVar31;
            *(undefined8 *)(puVar12 + -0x130) = uVar17;
            *(undefined8 *)(puVar12 + -200) = unaff_x26;
            *(long *)(puVar12 + -0xc0) = lVar8;
            *(undefined8 *)(puVar12 + -0xb0) = uVar18;
            *(undefined8 *)(puVar12 + -0xb8) = uVar9;
            *(undefined8 *)(puVar12 + -0xa0) = uVar29;
            *(undefined8 *)(puVar12 + -0xa8) = uVar28;
            *(long *)(puVar12 + -0x98) = lVar24;
            *(undefined8 *)(puVar12 + -0x90) = _UNK_033f8620;
            *(undefined8 **)(puVar12 + -0x88) = unaff_x23;
            *(undefined8 **)(puVar12 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar12 + -0x70) = uVar31;
            *(undefined8 *)(puVar12 + -0x78) = uVar17;
            puVar13 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(puVar13,puVar12 + -200,uRam0000000003d2a408);
            iVar26 = 1;
          }
          else {
            iVar26 = 2;
          }
code_r0x0150c72c:
          lVar19 = *(long *)(puVar2 + 0x70);
          if (lVar19 != 0) {
            if (uVar7 < *(uint *)(lVar19 + 0x18)) {
              lVar19 = lVar19 + unaff_x25 * 0x60;
              *(undefined8 *)(lVar19 + 0x20) = unaff_x26;
              *(long *)(lVar19 + 0x28) = lVar8;
              uVar9 = *(undefined8 *)(puVar12 + -0xf0);
              uVar28 = *(undefined8 *)(puVar12 + -0xd8);
              uVar18 = *(undefined8 *)(puVar12 + -0xe0);
              *(undefined8 *)(lVar19 + 0x38) = *(undefined8 *)(puVar12 + -0xe8);
              *(undefined8 *)(lVar19 + 0x30) = uVar9;
              *(undefined8 *)(lVar19 + 0x48) = uVar28;
              *(undefined8 *)(lVar19 + 0x40) = uVar18;
              *(long *)(lVar19 + 0x50) = lVar24;
              *(int *)(lVar19 + 0x58) = iVar26;
              *(int *)(lVar19 + 0x5c) = iVar1;
              *(undefined8 **)(lVar19 + 0x60) = unaff_x23;
              *(undefined8 **)(lVar19 + 0x68) = unaff_x24;
              uVar9 = *(undefined8 *)(puVar12 + -0x100);
              *(undefined8 *)(lVar19 + 0x78) = *(undefined8 *)(puVar12 + -0xf8);
              *(undefined8 *)(lVar19 + 0x70) = uVar9;
code_r0x0150c768:
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              puVar27 = &UNK_0150c798;
code_r0x03249a9c:
              *(long *)(puVar5 + -0x30) = lVar8;
              *(undefined1 (*) [16])(puVar5 + -0x28) = auVar32;
              *(long *)(puVar5 + -0x18) = lVar24;
              *(undefined1 **)(puVar5 + -0x10) = puVar14;
              *(undefined **)(puVar5 + -8) = puVar27;
              if ((bRam0000000003ec027c & 1) == 0) {
                func_0x00f78a20(0x3d23990,0,0);
                bRam0000000003ec027c = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              *(undefined8 *)(puVar5 + -0x60) = 0x3d23990;
              *(undefined8 *)(puVar5 + -0x58) = 0x3ec0000;
              *(long *)(puVar5 + -0x50) = lVar24;
              *(undefined8 *)(puVar5 + -0x48) = 0;
              *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
              *(undefined **)(puVar5 + -0x38) = &UNK_03249b00;
              if ((bRam0000000003ec021b & 1) == 0) {
                func_0x00f78a20(0x3d23990);
                bRam0000000003ec021b = 1;
              }
              if (lVar24 == 0) {
                puVar14 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
              }
              else {
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar7 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar24);
                puVar14 = (undefined1 *)(ulong)(uVar7 ^ 1);
              }
              return puVar14;
            }
            goto code_r0x0150c7d8;
          }
        }
        else {
          if (iVar26 != 0) goto code_r0x0150c72c;
          if (iVar1 != 2) {
            iVar26 = 0;
            goto code_r0x0150c72c;
          }
          if (((lVar8 != 0) && (lVar19 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0), lVar19 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar19,1,0), unaff_x23 != (undefined8 *)0x0)) {
            *(undefined8 *)(puVar12 + -200) = unaff_x26;
            *(long *)(puVar12 + -0xc0) = lVar8;
            *(undefined8 *)(puVar12 + -0xb0) = *(undefined8 *)(puVar12 + -0xe8);
            *(undefined8 *)(puVar12 + -0xb8) = *(undefined8 *)(puVar12 + -0xf0);
            *(undefined8 *)(puVar12 + -0xa0) = *(undefined8 *)(puVar12 + -0xd8);
            *(undefined8 *)(puVar12 + -0xa8) = *(undefined8 *)(puVar12 + -0xe0);
            *(long *)(puVar12 + -0x98) = lVar24;
            *(undefined8 *)(puVar12 + -0x90) = _UNK_033f8628;
            *(undefined8 **)(puVar12 + -0x88) = unaff_x23;
            *(undefined8 **)(puVar12 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar12 + -0x70) = *(undefined8 *)(puVar12 + -0xf8);
            *(undefined8 *)(puVar12 + -0x78) = *(undefined8 *)(puVar12 + -0x100);
            puVar13 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar9 = func_0x00f78b24();
        auVar33 = func_0x00f78ac0(uVar9,0);
        lVar19 = auVar33._8_8_;
        *(undefined8 *)(puVar12 + -0x180) = unaff_x26;
        *(long *)(puVar12 + -0x178) = unaff_x25;
        *(undefined8 **)(puVar12 + -0x170) = unaff_x24;
        *(undefined8 **)(puVar12 + -0x168) = unaff_x23;
        *(long *)(puVar12 + -0x160) = lVar8;
        *(undefined1 (*) [16])(puVar12 + -0x158) = auVar32;
        *(long *)(puVar12 + -0x148) = lVar24;
        *(undefined1 **)(puVar12 + -0x140) = puVar14;
        *(undefined **)(puVar12 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar9 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar19 + 0x18),*(undefined4 *)(lVar19 + 0x1c),
                                *(undefined4 *)(lVar19 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar19 + 0x10),0,0);
        uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar9,10,uRam0000000003d5e7a8);
        uVar9 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar9,*(undefined8 *)(lVar19 + 0x58),uRam0000000003d5e6e0);
        uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar9,1,uRam0000000003d5e888);
        puVar14 = (undefined1 *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar9,auVar33._0_8_,uRam0000000003d5e850);
        if ((puVar14 != (undefined1 *)0x0) && (puVar14[0xe8] != '\0')) {
          *(undefined8 *)(puVar14 + 0x30) = *(undefined8 *)(lVar19 + 0x10);
        }
        return puVar14;
      }
    }
    uVar9 = func_0x00f78b24();
    auVar32 = func_0x00f78ac0(uVar9,0);
    puVar4 = puVar12 + -0x30;
    puVar14 = puVar12 + -0x30;
    *(undefined1 **)(puVar12 + -0x30) = puVar12 + -0x10;
    *(undefined **)(puVar12 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar24 = *(long *)(auVar32._0_8_ + 0x28);
    auVar33._8_8_ = auVar32._8_8_;
    auVar33._0_8_ = lVar24;
    if (lVar24 == 0) {
      puVar27 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar33 = func_0x00f78af4();
    }
    else {
      puVar4 = puVar12 + -0x20;
      puVar14 = *(undefined1 **)(puVar12 + -0x30);
      puVar27 = *(undefined **)(puVar12 + -0x28);
    }
    lVar24 = auVar33._8_8_;
    puVar12 = puVar4 + -0x20;
    *(undefined1 **)(puVar4 + -0x20) = puVar2;
    *(long *)(puVar4 + -0x18) = lVar21;
    *(undefined1 **)(puVar4 + -0x10) = puVar14;
    *(undefined **)(puVar4 + -8) = puVar27;
    puVar14 = puVar4 + -0x10;
    auVar32._8_8_ = 4;
    auVar32._0_8_ = auVar33._0_8_;
    uVar17 = 0;
    puVar27 = &UNK_0150bd10;
  } while( true );
}



// ============================================================
// RVA: 0x14bf184 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.RemoveAllDigits
// ============================================================

/* WARNING: Possible PIC construction at 0x014bf224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb55a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb55e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150c794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bf468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bffec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c0150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bfff0) */
/* WARNING: Removing unreachable block (ram,0x014bf46c) */
/* WARNING: Removing unreachable block (ram,0x014bff6c) */
/* WARNING: Removing unreachable block (ram,0x014bff98) */
/* WARNING: Removing unreachable block (ram,0x014bffac) */
/* WARNING: Removing unreachable block (ram,0x014bffbc) */
/* WARNING: Removing unreachable block (ram,0x014bffc4) */
/* WARNING: Removing unreachable block (ram,0x014c0000) */
/* WARNING: Removing unreachable block (ram,0x014bffd0) */
/* WARNING: Removing unreachable block (ram,0x014bffdc) */
/* WARNING: Removing unreachable block (ram,0x014c0010) */
/* WARNING: Removing unreachable block (ram,0x014c001c) */
/* WARNING: Removing unreachable block (ram,0x014bffe4) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150c798) */
/* WARNING: Removing unreachable block (ram,0x0150c79c) */
/* WARNING: Removing unreachable block (ram,0x0150c7a0) */
/* WARNING: Removing unreachable block (ram,0x0150c7b4) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
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
/* WARNING: Removing unreachable block (ram,0x014bf228) */
/* WARNING: Removing unreachable block (ram,0x014bf27c) */
/* WARNING: Removing unreachable block (ram,0x014bf22c) */
/* WARNING: Removing unreachable block (ram,0x014bf23c) */
/* WARNING: Removing unreachable block (ram,0x014bf244) */
/* WARNING: Removing unreachable block (ram,0x014bf254) */
/* WARNING: Removing unreachable block (ram,0x01cb5534) */
/* WARNING: Removing unreachable block (ram,0x01cb5568) */
/* WARNING: Removing unreachable block (ram,0x01cb557c) */
/* WARNING: Removing unreachable block (ram,0x01cb5588) */
/* WARNING: Removing unreachable block (ram,0x01cb5590) */
/* WARNING: Removing unreachable block (ram,0x01cb5594) */
/* WARNING: Removing unreachable block (ram,0x032441e0) */
/* WARNING: Removing unreachable block (ram,0x0324420c) */
/* WARNING: Removing unreachable block (ram,0x03244220) */
/* WARNING: Removing unreachable block (ram,0x0324422c) */
/* WARNING: Removing unreachable block (ram,0x03244234) */
/* WARNING: Removing unreachable block (ram,0x03244238) */
/* WARNING: Removing unreachable block (ram,0x014c0154) */
/* WARNING: Removing unreachable block (ram,0x014c0158) */
/* WARNING: Removing unreachable block (ram,0x014c015c) */
/* WARNING: Removing unreachable block (ram,0x014c0178) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
Atlas_UI_Screens_PlayWithFriendsCodeScreen__RemoveAllDigits
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined *param_5,undefined8 param_6,uint param_7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 uVar15;
  long lVar16;
  long unaff_x22;
  undefined8 uVar17;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar18;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar19;
  long **pplVar20;
  undefined1 *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  long *plStack_50;
  undefined *puStack_48;
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  puVar2 = (undefined8 *)&stack0xffffffffffffffd0;
  ppppuVar19 = (undefined8 ****)&stack0xfffffffffffffff0;
  uVar9 = 0x3d41220;
  if ((bRam0000000003eb4b0a & 1) == 0) {
    func_0x00f78a20(0x3d2c888);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d41220);
    bRam0000000003eb4b0a = 1;
  }
  plVar7 = (long *)/*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$AreAllDigitsFilled*/ func_0x014bfcf0(param_5);
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41220);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
    uVar17 = 0x3d24000;
    /*Atlas.UI.UICodePanelBehaviour$$HideAllDigits*/ func_0x0151a2dc(*(long *)(lVar8 + 0x68),0);
    uVar13 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    *(undefined8 *)(param_5 + 0x78) = 0x3f80000000000000;
    *(undefined8 *)(param_5 + 0x80) = uVar13;
    puVar22 = (undefined *)0x14bf228;
    puVar23 = param_5;
code_r0x014bf400:
    *(undefined8 *)((long)puVar2 + -0x30) = uVar17;
    *(undefined8 *)((long)puVar2 + -0x28) = uVar9;
    *(long **)((long)puVar2 + -0x20) = plVar7;
    *(undefined **)((long)puVar2 + -0x18) = puVar23;
    *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar19;
    *(undefined **)((long)puVar2 + -8) = puVar22;
    if ((bRam0000000003eb4b11 & 1) == 0) {
      func_0x00f78a20(0x3d41220);
      bRam0000000003eb4b11 = 1;
    }
    uVar9 = /*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$AreAllDigitsFilled*/ func_0x014bfcf0(param_5);
    uVar6 = *(uint *)(param_5 + 0x78);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41220);
    if (lVar8 == 0) {
      puVar11 = (undefined1 *)func_0x00f78af4();
      return puVar11;
    }
    bVar5 = uVar6 != 0;
    lVar8 = *(long *)(lVar8 + 0x90);
    puVar4 = (undefined1 *)((long)puVar2 + -0x70);
    *(ulong *)((long)puVar2 + -0x60) = (ulong)uVar6;
    *(undefined8 *)((long)puVar2 + -0x58) = 0x3d41220;
    *(undefined8 *)((long)puVar2 + -0x50) = uVar9;
    *(undefined **)((long)puVar2 + -0x48) = param_5;
    *(undefined1 **)((long)puVar2 + -0x40) = (undefined1 *)((long)puVar2 + -0x10);
    *(undefined **)((long)puVar2 + -0x38) = &UNK_014bf46c;
    puVar21 = (undefined1 *)((long)puVar2 + -0x40);
    if ((bRam0000000003eb4b10 & 1) == 0) {
      func_0x00f78a20(0x3d535f0);
      func_0x00f78a20(0x3d53590);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4b10 = 1;
    }
    if (lVar8 != 0) {
      /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar8,bVar5,0);
      if ((((*(long *)(lVar8 + 0xd8) != 0) &&
           (lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar8 + 0xd8),0), lVar8 != 0)) &&
          (lVar8 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar8,0,0), lVar8 != 0)) &&
         (plVar7 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar8,uRam0000000003d53590), auVar27[8] = bVar5,
         auVar27._0_8_ = plVar7, auVar27._9_7_ = 0, plVar7 != (long *)0x0)) {
        unaff_x22 = 0x3d23990;
        lVar8 = /*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar7,uRam0000000003d535f0);
        uVar24 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
        *(int *)((long)puVar2 + -0x70) = (int)uVar24;
        *(undefined4 *)((long)puVar2 + -0x6c) = param_2;
        *(undefined4 *)((long)puVar2 + -0x68) = param_3;
        *(undefined4 *)((long)puVar2 + -100) = param_4;
        if (!bVar5) {
          /*UnityEngine.Color$$.ctor*/ func_0x03222f90(_UNK_033f84b8,_UNK_033f84b8,_UNK_033f84b8,
                          (undefined1 *)((long)puVar2 + -0x70),0);
          uVar24 = (ulong)*(uint *)((long)puVar2 + -0x70);
        }
        (**(code **)(*plVar7 + 0x2a8))(uVar24,plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar23 = &UNK_014c0154;
code_r0x03249a9c:
        *(long *)(puVar4 + -0x30) = unaff_x22;
        *(undefined1 (*) [16])(puVar4 + -0x28) = auVar27;
        *(long *)(puVar4 + -0x18) = lVar8;
        *(undefined1 **)(puVar4 + -0x10) = puVar21;
        *(undefined **)(puVar4 + -8) = puVar23;
        if ((bRam0000000003ec027c & 1) == 0) {
          func_0x00f78a20(0x3d23990,0,0);
          bRam0000000003ec027c = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)(puVar4 + -0x60) = 0x3d23990;
        *(undefined8 *)(puVar4 + -0x58) = 0x3ec0000;
        *(long *)(puVar4 + -0x50) = lVar8;
        *(undefined8 *)(puVar4 + -0x48) = 0;
        *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
        *(undefined **)(puVar4 + -0x38) = &UNK_03249b00;
        if ((bRam0000000003ec021b & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003ec021b = 1;
        }
        if (lVar8 == 0) {
          puVar11 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        }
        else {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar6 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar8);
          puVar11 = (undefined1 *)(ulong)(uVar6 ^ 1);
        }
        return puVar11;
      }
    }
    lVar8 = func_0x00f78af4();
    return (undefined1 *)(ulong)(*(int *)(lVar8 + 0x78) == 0);
  }
  func_0x00f78af4();
  uVar9 = func_0x00f78b24();
  auVar27 = func_0x00f78ac0(uVar9,0);
  uVar12 = auVar27._8_8_;
  uVar13 = auVar27._0_8_;
  puStack_38 = &Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNextButton;
  uVar17 = 0x3eb4000;
  uVar9 = 0x3d41230;
  plStack_50 = plVar7;
  puStack_48 = param_5;
  pppuStack_40 = ppppuVar19;
  if ((bRam0000000003eb4b06 & 1) == 0) {
    func_0x00f78a20(0x3d41230);
    bRam0000000003eb4b06 = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar13,uRam0000000003d41230);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0xb8) != 0)) {
    /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar8 + 0xb8),6,uVar12,1,0);
    param_7 = (uint)uVar12;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar13,uRam0000000003d41230);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0xb8) != 0)) {
      param_7 = auVar27._8_4_ ^ 1;
      uVar12 = 1;
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar8 + 0xb8),8,param_7,1,0);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar13,uRam0000000003d41230);
      plVar7 = plStack_50;
      if ((lVar8 != 0) && (puVar11 = *(undefined1 **)(lVar8 + 0xb8), puVar11 != (undefined1 *)0x0))
      {
        uVar9 = 0;
        if (*(long *)(puVar11 + 0x28) != 0) {
          *(char *)(*(long *)(puVar11 + 0x28) + 0x80) = auVar27[8];
          return puVar11;
        }
        lVar8 = func_0x00f78af4();
        puVar11 = &stack0xffffffffffffffa0;
        puStack_48 = &Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
        pplVar20 = &plStack_50;
        if (*(ulong *)(lVar8 + 0x28) == 0) {
          puVar23 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
          plStack_50 = (long *)&pppuStack_40;
          auVar27 = func_0x00f78af4();
          auVar28._8_8_ = uVar12;
          auVar28._0_8_ = plVar7;
        }
        else {
          auVar27._8_8_ = 0;
          auVar27._0_8_ = *(ulong *)(lVar8 + 0x28);
          uVar9 = 0;
          auVar28._8_8_ = 1;
          auVar28._0_8_ = plVar7;
          puVar23 = &UNK_0150bbf4;
          puVar11 = &stack0xffffffffffffffa0;
          plStack_50 = (long *)&pppuStack_40;
        }
        do {
          puVar10 = auVar27._0_8_;
          *(long *)(puVar11 + -0x20) = auVar28._0_8_;
          *(long *)(puVar11 + -0x18) = lVar8;
          *(long ***)(puVar11 + -0x10) = pplVar20;
          *(undefined **)(puVar11 + -8) = puVar23;
          uVar6 = auVar27._8_4_;
          if (uVar6 == 0xffffffff) {
            return puVar10;
          }
          lVar14 = *(long *)(puVar10 + 0x70);
          if (lVar14 == 0) {
            func_0x00f78af4();
            lVar16 = lVar8;
          }
          else {
            lVar16 = auVar27._8_8_;
            if (uVar6 < *(uint *)(lVar14 + 0x18)) {
              uVar15 = 2;
              if ((int)uVar9 == 0) {
                uVar15 = 0;
              }
              *(undefined4 *)(lVar14 + (long)(int)uVar6 * 0x60 + 0x5c) = uVar15;
              if ((auVar28._8_8_ & 1) == 0) {
                /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(puVar10,auVar27._8_8_);
              }
              puVar4 = puVar11 + -0x130;
              *(undefined8 *)(puVar11 + -0x60) = unaff_x28;
              *(undefined8 *)(puVar11 + -0x58) = unaff_x27;
              *(undefined8 *)(puVar11 + -0x50) = unaff_x26;
              *(long *)(puVar11 + -0x48) = unaff_x25;
              *(long *)(puVar11 + -0x40) = unaff_x24;
              *(long *)(puVar11 + -0x38) = unaff_x23;
              *(long *)(puVar11 + -0x30) = unaff_x22;
              *(undefined8 *)(puVar11 + -0x28) = 0x3d41220;
              *(undefined8 *)(puVar11 + -0x20) = *(undefined8 *)(puVar11 + -0x20);
              *(undefined8 *)(puVar11 + -0x18) = *(undefined8 *)(puVar11 + -0x18);
              *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
              *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
              puVar21 = puVar11 + -0x10;
              lVar8 = 0x3eb4000;
              if ((bRam0000000003eb4d5b & 1) == 0) {
                func_0x00f78a20(0x3d2a408);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb4d5b = 1;
              }
              lVar14 = *(long *)(puVar10 + 0x70);
              if (lVar14 == 0) goto code_r0x0150c7d4;
              if (*(uint *)(lVar14 + 0x18) <= uVar6) goto code_r0x0150c7d8;
              unaff_x25 = (long)(int)uVar6;
              lVar14 = lVar14 + unaff_x25 * 0x60;
              unaff_x26 = *(undefined8 *)(lVar14 + 0x20);
              unaff_x22 = *(long *)(lVar14 + 0x28);
              uVar9 = *(undefined8 *)(lVar14 + 0x30);
              uVar12 = *(undefined8 *)(lVar14 + 0x48);
              uVar13 = *(undefined8 *)(lVar14 + 0x40);
              *(undefined8 *)(puVar11 + -0xe8) = *(undefined8 *)(lVar14 + 0x38);
              *(undefined8 *)(puVar11 + -0xf0) = uVar9;
              *(undefined8 *)(puVar11 + -0xd8) = uVar12;
              *(undefined8 *)(puVar11 + -0xe0) = uVar13;
              lVar8 = *(long *)(lVar14 + 0x50);
              iVar18 = *(int *)(lVar14 + 0x58);
              iVar1 = *(int *)(lVar14 + 0x5c);
              unaff_x23 = *(long *)(lVar14 + 0x60);
              unaff_x24 = *(long *)(lVar14 + 0x68);
              uVar9 = *(undefined8 *)(lVar14 + 0x70);
              *(undefined8 *)(puVar11 + -0xf8) = *(undefined8 *)(lVar14 + 0x78);
              *(undefined8 *)(puVar11 + -0x100) = uVar9;
              if (iVar1 != iVar18) {
                if (iVar18 == 2) {
                  if (iVar1 == 0) {
                    if (unaff_x24 == 0) goto code_r0x0150c7d4;
                    uVar13 = *(undefined8 *)(lVar14 + 0x38);
                    uVar9 = *(undefined8 *)(lVar14 + 0x30);
                    uVar17 = *(undefined8 *)(lVar14 + 0x48);
                    uVar12 = *(undefined8 *)(lVar14 + 0x40);
                    *(undefined8 *)(puVar11 + -0x118) = uVar13;
                    *(undefined8 *)(puVar11 + -0x120) = uVar9;
                    *(undefined8 *)(puVar11 + -0x108) = uVar17;
                    *(undefined8 *)(puVar11 + -0x110) = uVar12;
                    uVar26 = *(undefined8 *)(lVar14 + 0x78);
                    uVar25 = *(undefined8 *)(lVar14 + 0x70);
                    *(undefined8 *)(puVar11 + -0x128) = uVar26;
                    *(undefined8 *)(puVar11 + -0x130) = uVar25;
                    *(undefined8 *)(puVar11 + -200) = unaff_x26;
                    *(long *)(puVar11 + -0xc0) = unaff_x22;
                    *(undefined8 *)(puVar11 + -0xb0) = uVar13;
                    *(undefined8 *)(puVar11 + -0xb8) = uVar9;
                    *(undefined8 *)(puVar11 + -0xa0) = uVar17;
                    *(undefined8 *)(puVar11 + -0xa8) = uVar12;
                    *(long *)(puVar11 + -0x98) = lVar8;
                    *(undefined8 *)(puVar11 + -0x90) = _UNK_033f8620;
                    *(long *)(puVar11 + -0x88) = unaff_x23;
                    *(long *)(puVar11 + -0x80) = unaff_x24;
                    *(undefined8 *)(puVar11 + -0x70) = uVar26;
                    *(undefined8 *)(puVar11 + -0x78) = uVar25;
                    lVar14 = unaff_x24;
code_r0x0150c724:
                    /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar14,puVar11 + -200,uRam0000000003d2a408);
                    iVar18 = 1;
                  }
                  else {
                    iVar18 = 2;
                  }
code_r0x0150c72c:
                  lVar14 = *(long *)(puVar10 + 0x70);
                  if (lVar14 != 0) {
                    if (*(uint *)(lVar14 + 0x18) <= uVar6) goto code_r0x0150c7d8;
                    lVar14 = lVar14 + unaff_x25 * 0x60;
                    *(undefined8 *)(lVar14 + 0x20) = unaff_x26;
                    *(long *)(lVar14 + 0x28) = unaff_x22;
                    uVar9 = *(undefined8 *)(puVar11 + -0xf0);
                    uVar12 = *(undefined8 *)(puVar11 + -0xd8);
                    uVar13 = *(undefined8 *)(puVar11 + -0xe0);
                    *(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)(puVar11 + -0xe8);
                    *(undefined8 *)(lVar14 + 0x30) = uVar9;
                    *(undefined8 *)(lVar14 + 0x48) = uVar12;
                    *(undefined8 *)(lVar14 + 0x40) = uVar13;
                    *(long *)(lVar14 + 0x50) = lVar8;
                    *(int *)(lVar14 + 0x58) = iVar18;
                    *(int *)(lVar14 + 0x5c) = iVar1;
                    *(long *)(lVar14 + 0x60) = unaff_x23;
                    *(long *)(lVar14 + 0x68) = unaff_x24;
                    uVar9 = *(undefined8 *)(puVar11 + -0x100);
                    *(undefined8 *)(lVar14 + 0x78) = *(undefined8 *)(puVar11 + -0xf8);
                    *(undefined8 *)(lVar14 + 0x70) = uVar9;
                    goto code_r0x0150c768;
                  }
                }
                else {
                  if (iVar18 != 0) goto code_r0x0150c72c;
                  if (iVar1 != 2) {
                    iVar18 = 0;
                    goto code_r0x0150c72c;
                  }
                  if (((unaff_x22 != 0) && (lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar14 != 0)) &&
                     (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar14,1,0), unaff_x23 != 0)) {
                    *(undefined8 *)(puVar11 + -200) = unaff_x26;
                    *(long *)(puVar11 + -0xc0) = unaff_x22;
                    *(undefined8 *)(puVar11 + -0xb0) = *(undefined8 *)(puVar11 + -0xe8);
                    *(undefined8 *)(puVar11 + -0xb8) = *(undefined8 *)(puVar11 + -0xf0);
                    *(undefined8 *)(puVar11 + -0xa0) = *(undefined8 *)(puVar11 + -0xd8);
                    *(undefined8 *)(puVar11 + -0xa8) = *(undefined8 *)(puVar11 + -0xe0);
                    *(long *)(puVar11 + -0x98) = lVar8;
                    *(undefined8 *)(puVar11 + -0x90) = _UNK_033f8628;
                    *(long *)(puVar11 + -0x88) = unaff_x23;
                    *(long *)(puVar11 + -0x80) = unaff_x24;
                    *(undefined8 *)(puVar11 + -0x70) = *(undefined8 *)(puVar11 + -0xf8);
                    *(undefined8 *)(puVar11 + -0x78) = *(undefined8 *)(puVar11 + -0x100);
                    lVar14 = unaff_x23;
                    goto code_r0x0150c724;
                  }
                }
code_r0x0150c7d4:
                func_0x00f78af4();
code_r0x0150c7d8:
                uVar9 = func_0x00f78b24();
                auVar28 = func_0x00f78ac0(uVar9,0);
                lVar14 = auVar28._8_8_;
                *(undefined8 *)(puVar11 + -0x180) = unaff_x26;
                *(long *)(puVar11 + -0x178) = unaff_x25;
                *(long *)(puVar11 + -0x170) = unaff_x24;
                *(long *)(puVar11 + -0x168) = unaff_x23;
                *(long *)(puVar11 + -0x160) = unaff_x22;
                *(undefined1 (*) [16])(puVar11 + -0x158) = auVar27;
                *(long *)(puVar11 + -0x148) = lVar8;
                *(undefined1 **)(puVar11 + -0x140) = puVar21;
                *(undefined **)(puVar11 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
                if ((bRam0000000003eb4d55 & 1) == 0) {
                  func_0x00f78a20(0x3d5e6e0);
                  func_0x00f78a20(0x3d5e7a8);
                  func_0x00f78a20(0x3d5e7d0);
                  func_0x00f78a20(0x3d5e850);
                  func_0x00f78a20(0x3d5e888);
                  bRam0000000003eb4d55 = 1;
                }
                uVar9 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar14 + 0x18),
                                        *(undefined4 *)(lVar14 + 0x1c),
                                        *(undefined4 *)(lVar14 + 0x20),_UNK_033f8144,
                                        *(undefined8 *)(lVar14 + 0x10),0,0);
                uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar9,10,uRam0000000003d5e7a8);
                uVar9 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar9,*(undefined8 *)(lVar14 + 0x58),uRam0000000003d5e6e0);
                uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar9,1,uRam0000000003d5e888);
                puVar11 = (undefined1 *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar9,auVar28._0_8_,uRam0000000003d5e850);
                if ((puVar11 != (undefined1 *)0x0) && (puVar11[0xe8] != '\0')) {
                  *(undefined8 *)(puVar11 + 0x30) = *(undefined8 *)(lVar14 + 0x10);
                }
                return puVar11;
              }
code_r0x0150c768:
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              puVar23 = &UNK_0150c798;
              goto code_r0x03249a9c;
            }
          }
          uVar9 = func_0x00f78b24();
          auVar27 = func_0x00f78ac0(uVar9,0);
          puVar3 = puVar11 + -0x30;
          puVar21 = puVar11 + -0x30;
          *(undefined1 **)(puVar11 + -0x30) = puVar11 + -0x10;
          *(undefined **)(puVar11 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
          lVar8 = *(long *)(auVar27._0_8_ + 0x28);
          auVar28._8_8_ = auVar27._8_8_;
          auVar28._0_8_ = lVar8;
          if (lVar8 == 0) {
            puVar23 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
            auVar28 = func_0x00f78af4();
          }
          else {
            puVar3 = puVar11 + -0x20;
            puVar21 = *(undefined1 **)(puVar11 + -0x30);
            puVar23 = *(undefined **)(puVar11 + -0x28);
          }
          lVar8 = auVar28._8_8_;
          puVar11 = puVar3 + -0x20;
          *(undefined1 **)(puVar3 + -0x20) = puVar10;
          *(long *)(puVar3 + -0x18) = lVar16;
          *(undefined1 **)(puVar3 + -0x10) = puVar21;
          *(undefined **)(puVar3 + -8) = puVar23;
          pplVar20 = (long **)(puVar3 + -0x10);
          auVar27._8_8_ = 4;
          auVar27._0_8_ = auVar28._0_8_;
          uVar9 = 0;
          puVar23 = &UNK_0150bd10;
        } while( true );
      }
    }
  }
  auVar28 = func_0x00f78af4();
  lVar8 = auVar28._8_8_;
  plVar7 = auVar28._0_8_;
  puVar2 = &uStack_90;
  uStack_90 = 0x3eb4000;
  uStack_88 = 0x3d41230;
  puStack_68 = &Atlas_UI_Screens_PlayWithFriendsCodeScreen__TryCode;
  ppppuVar19 = &pppuStack_70;
  pppuStack_70 = &pppuStack_40;
  auStack_80 = auVar27;
  if ((param_7 == 0) || (puVar11 = (undefined1 *)/*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$IsCodeFormatValid*/ func_0x014bf9a0(plVar7,lVar8), (int)puVar11 != 0))
  {
    Atlas_UI_Screens_PlayWithFriendsCodeScreen__RemoveAllDigits(plVar7);
    if (lVar8 == 0) {
      puVar22 = &Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNumPadState;
      param_5 = (undefined *)func_0x00f78af4();
      puVar23 = (undefined *)0x0;
      goto code_r0x014bf400;
    }
    if (0 < *(int *)(lVar8 + 0x10)) {
      iVar18 = 0;
      do {
        uVar9 = /*System.String$$get_Chars*/ func_0x029c5420(lVar8,iVar18,0);
        if ((int)uVar9 - 0x30U < 10) {
          /*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$AddNewDigit*/ func_0x014bfbfc(plVar7,uVar9);
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)(lVar8 + 0x10));
    }
    puVar11 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  return puVar11;
}



// ============================================================
// RVA: 0x14bf29c | Atlas.UI.Screens.PlayWithFriendsCodeScreen.UpdateNextButton
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bf468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bffec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bf46c) */
/* WARNING: Removing unreachable block (ram,0x014bff6c) */
/* WARNING: Removing unreachable block (ram,0x014bff98) */
/* WARNING: Removing unreachable block (ram,0x014bffac) */
/* WARNING: Removing unreachable block (ram,0x014bffbc) */
/* WARNING: Removing unreachable block (ram,0x014bffc4) */
/* WARNING: Removing unreachable block (ram,0x014bffd0) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x014bfff0) */
/* WARNING: Removing unreachable block (ram,0x014bffdc) */
/* WARNING: Removing unreachable block (ram,0x014c0010) */
/* WARNING: Removing unreachable block (ram,0x014c001c) */
/* WARNING: Removing unreachable block (ram,0x014bffe4) */
/* WARNING: Removing unreachable block (ram,0x014c0000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNextButton
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined8 param_5,undefined8 param_6,uint param_7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar15;
  undefined8 unaff_x28;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4b06 & 1) == 0) {
    func_0x00f78a20(0x3d41230);
    bRam0000000003eb4b06 = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41230);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0xb8) != 0)) {
    uVar11 = param_6;
    /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar4 + 0xb8),6,param_6,1,0);
    param_7 = (uint)uVar11;
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41230);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0xb8) != 0)) {
      param_7 = (uint)param_6 ^ 1;
      uVar12 = 1;
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar4 + 0xb8),8,param_7,1,0);
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41230);
      if ((lVar4 != 0) && (uVar5 = *(ulong *)(lVar4 + 0xb8), uVar5 != 0)) {
        uVar11 = 0;
        if (*(long *)(uVar5 + 0x28) != 0) {
          *(char *)(*(long *)(uVar5 + 0x28) + 0x80) = (char)param_6;
          return uVar5;
        }
        uVar5 = func_0x00f78af4();
        puVar2 = &stack0xffffffffffffffd0;
        puVar16 = &stack0xffffffffffffffe0;
        if (*(ulong *)(uVar5 + 0x28) == 0) {
          puVar17 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
          auVar22 = func_0x00f78af4();
        }
        else {
          auVar22._8_8_ = 0;
          auVar22._0_8_ = *(ulong *)(uVar5 + 0x28);
          uVar11 = 0;
          uVar12 = 1;
          puVar17 = &UNK_0150bbf4;
          puVar2 = &stack0xffffffffffffffd0;
        }
        do {
          uVar9 = auVar22._0_8_;
          *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
          *(ulong *)(puVar2 + -0x18) = uVar5;
          *(undefined1 **)(puVar2 + -0x10) = puVar16;
          *(undefined **)(puVar2 + -8) = puVar17;
          uVar10 = auVar22._8_4_;
          if (uVar10 == 0xffffffff) {
            return uVar9;
          }
          lVar4 = *(long *)(uVar9 + 0x70);
          if (lVar4 == 0) {
            func_0x00f78af4();
          }
          else {
            uVar5 = auVar22._8_8_;
            if (uVar10 < *(uint *)(lVar4 + 0x18)) {
              uVar14 = 2;
              if ((int)uVar11 == 0) {
                uVar14 = 0;
              }
              *(undefined4 *)(lVar4 + (long)(int)uVar10 * 0x60 + 0x5c) = uVar14;
              if ((uVar12 & 1) == 0) {
                /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(uVar9,auVar22._8_8_);
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
              lVar4 = 0x3eb4000;
              if ((bRam0000000003eb4d5b & 1) == 0) {
                func_0x00f78a20(0x3d2a408);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb4d5b = 1;
              }
              lVar13 = *(long *)(uVar9 + 0x70);
              if (lVar13 == 0) goto code_r0x0150c7d4;
              if (*(uint *)(lVar13 + 0x18) <= uVar10) goto code_r0x0150c7d8;
              unaff_x25 = (long)(int)uVar10;
              lVar13 = lVar13 + unaff_x25 * 0x60;
              unaff_x26 = *(undefined8 *)(lVar13 + 0x20);
              unaff_x22 = *(long *)(lVar13 + 0x28);
              uVar11 = *(undefined8 *)(lVar13 + 0x30);
              uVar18 = *(undefined8 *)(lVar13 + 0x48);
              uVar6 = *(undefined8 *)(lVar13 + 0x40);
              *(undefined8 *)(puVar2 + -0xe8) = *(undefined8 *)(lVar13 + 0x38);
              *(undefined8 *)(puVar2 + -0xf0) = uVar11;
              *(undefined8 *)(puVar2 + -0xd8) = uVar18;
              *(undefined8 *)(puVar2 + -0xe0) = uVar6;
              lVar4 = *(long *)(lVar13 + 0x50);
              iVar15 = *(int *)(lVar13 + 0x58);
              iVar1 = *(int *)(lVar13 + 0x5c);
              unaff_x23 = *(long *)(lVar13 + 0x60);
              unaff_x24 = *(long *)(lVar13 + 0x68);
              uVar11 = *(undefined8 *)(lVar13 + 0x70);
              *(undefined8 *)(puVar2 + -0xf8) = *(undefined8 *)(lVar13 + 0x78);
              *(undefined8 *)(puVar2 + -0x100) = uVar11;
              if (iVar1 == iVar15) {
code_r0x0150c768:
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
                if ((int)uVar12 == 0) {
                  return uVar12;
                }
                if (lVar4 != 0) {
                  uVar12 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar4,iVar15 == 2,0);
                  return uVar12;
                }
              }
              else if (iVar15 == 2) {
                if (iVar1 == 0) {
                  if (unaff_x24 == 0) goto code_r0x0150c7d4;
                  uVar6 = *(undefined8 *)(lVar13 + 0x38);
                  uVar11 = *(undefined8 *)(lVar13 + 0x30);
                  uVar19 = *(undefined8 *)(lVar13 + 0x48);
                  uVar18 = *(undefined8 *)(lVar13 + 0x40);
                  *(undefined8 *)(puVar2 + -0x118) = uVar6;
                  *(undefined8 *)(puVar2 + -0x120) = uVar11;
                  *(undefined8 *)(puVar2 + -0x108) = uVar19;
                  *(undefined8 *)(puVar2 + -0x110) = uVar18;
                  uVar21 = *(undefined8 *)(lVar13 + 0x78);
                  uVar20 = *(undefined8 *)(lVar13 + 0x70);
                  *(undefined8 *)(puVar2 + -0x128) = uVar21;
                  *(undefined8 *)(puVar2 + -0x130) = uVar20;
                  *(undefined8 *)(puVar2 + -200) = unaff_x26;
                  *(long *)(puVar2 + -0xc0) = unaff_x22;
                  *(undefined8 *)(puVar2 + -0xb0) = uVar6;
                  *(undefined8 *)(puVar2 + -0xb8) = uVar11;
                  *(undefined8 *)(puVar2 + -0xa0) = uVar19;
                  *(undefined8 *)(puVar2 + -0xa8) = uVar18;
                  *(long *)(puVar2 + -0x98) = lVar4;
                  *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8620;
                  *(long *)(puVar2 + -0x88) = unaff_x23;
                  *(long *)(puVar2 + -0x80) = unaff_x24;
                  *(undefined8 *)(puVar2 + -0x70) = uVar21;
                  *(undefined8 *)(puVar2 + -0x78) = uVar20;
                  lVar13 = unaff_x24;
code_r0x0150c724:
                  /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar13,puVar2 + -200,uRam0000000003d2a408);
                  iVar15 = 1;
                }
                else {
                  iVar15 = 2;
                }
code_r0x0150c72c:
                lVar13 = *(long *)(uVar9 + 0x70);
                if (lVar13 != 0) {
                  if (*(uint *)(lVar13 + 0x18) <= uVar10) goto code_r0x0150c7d8;
                  lVar13 = lVar13 + unaff_x25 * 0x60;
                  *(undefined8 *)(lVar13 + 0x20) = unaff_x26;
                  *(long *)(lVar13 + 0x28) = unaff_x22;
                  uVar11 = *(undefined8 *)(puVar2 + -0xf0);
                  uVar18 = *(undefined8 *)(puVar2 + -0xd8);
                  uVar6 = *(undefined8 *)(puVar2 + -0xe0);
                  *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(puVar2 + -0xe8);
                  *(undefined8 *)(lVar13 + 0x30) = uVar11;
                  *(undefined8 *)(lVar13 + 0x48) = uVar18;
                  *(undefined8 *)(lVar13 + 0x40) = uVar6;
                  *(long *)(lVar13 + 0x50) = lVar4;
                  *(int *)(lVar13 + 0x58) = iVar15;
                  *(int *)(lVar13 + 0x5c) = iVar1;
                  *(long *)(lVar13 + 0x60) = unaff_x23;
                  *(long *)(lVar13 + 0x68) = unaff_x24;
                  uVar11 = *(undefined8 *)(puVar2 + -0x100);
                  *(undefined8 *)(lVar13 + 0x78) = *(undefined8 *)(puVar2 + -0xf8);
                  *(undefined8 *)(lVar13 + 0x70) = uVar11;
                  goto code_r0x0150c768;
                }
              }
              else {
                if (iVar15 != 0) goto code_r0x0150c72c;
                if (iVar1 != 2) {
                  iVar15 = 0;
                  goto code_r0x0150c72c;
                }
                if (((unaff_x22 != 0) && (lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar13 != 0)) &&
                   (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,1,0), unaff_x23 != 0)) {
                  *(undefined8 *)(puVar2 + -200) = unaff_x26;
                  *(long *)(puVar2 + -0xc0) = unaff_x22;
                  *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0xe8);
                  *(undefined8 *)(puVar2 + -0xb8) = *(undefined8 *)(puVar2 + -0xf0);
                  *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xd8);
                  *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0xe0);
                  *(long *)(puVar2 + -0x98) = lVar4;
                  *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8628;
                  *(long *)(puVar2 + -0x88) = unaff_x23;
                  *(long *)(puVar2 + -0x80) = unaff_x24;
                  *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0xf8);
                  *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x100);
                  lVar13 = unaff_x23;
                  goto code_r0x0150c724;
                }
              }
code_r0x0150c7d4:
              func_0x00f78af4();
code_r0x0150c7d8:
              uVar11 = func_0x00f78b24();
              auVar23 = func_0x00f78ac0(uVar11,0);
              lVar13 = auVar23._8_8_;
              *(undefined8 *)(puVar2 + -0x180) = unaff_x26;
              *(long *)(puVar2 + -0x178) = unaff_x25;
              *(long *)(puVar2 + -0x170) = unaff_x24;
              *(long *)(puVar2 + -0x168) = unaff_x23;
              *(long *)(puVar2 + -0x160) = unaff_x22;
              *(undefined1 (*) [16])(puVar2 + -0x158) = auVar22;
              *(long *)(puVar2 + -0x148) = lVar4;
              *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0x10;
              *(undefined **)(puVar2 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
              if ((bRam0000000003eb4d55 & 1) == 0) {
                func_0x00f78a20(0x3d5e6e0);
                func_0x00f78a20(0x3d5e7a8);
                func_0x00f78a20(0x3d5e7d0);
                func_0x00f78a20(0x3d5e850);
                func_0x00f78a20(0x3d5e888);
                bRam0000000003eb4d55 = 1;
              }
              uVar11 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar13 + 0x18),*(undefined4 *)(lVar13 + 0x1c)
                                       ,*(undefined4 *)(lVar13 + 0x20),_UNK_033f8144,
                                       *(undefined8 *)(lVar13 + 0x10),0,0);
              uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar11,10,uRam0000000003d5e7a8);
              uVar11 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar11,*(undefined8 *)(lVar13 + 0x58),uRam0000000003d5e6e0);
              uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar11,1,uRam0000000003d5e888);
              uVar12 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar11,auVar23._0_8_,uRam0000000003d5e850);
              if ((uVar12 != 0) && (*(char *)(uVar12 + 0xe8) != '\0')) {
                *(undefined8 *)(uVar12 + 0x30) = *(undefined8 *)(lVar13 + 0x10);
              }
              return uVar12;
            }
          }
          uVar11 = func_0x00f78b24();
          auVar22 = func_0x00f78ac0(uVar11,0);
          puVar3 = puVar2 + -0x30;
          puVar16 = puVar2 + -0x30;
          *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
          lVar4 = *(long *)(auVar22._0_8_ + 0x28);
          auVar23._8_8_ = auVar22._8_8_;
          auVar23._0_8_ = lVar4;
          if (lVar4 == 0) {
            puVar17 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
            auVar23 = func_0x00f78af4();
          }
          else {
            puVar3 = puVar2 + -0x20;
            puVar16 = *(undefined1 **)(puVar2 + -0x30);
            puVar17 = *(undefined **)(puVar2 + -0x28);
          }
          uVar12 = auVar23._8_8_;
          unaff_x20 = auVar23._0_8_;
          puVar2 = puVar3 + -0x20;
          *(ulong *)(puVar3 + -0x20) = uVar9;
          *(ulong *)(puVar3 + -0x18) = uVar5;
          *(undefined1 **)(puVar3 + -0x10) = puVar16;
          *(undefined **)(puVar3 + -8) = puVar17;
          puVar16 = puVar3 + -0x10;
          auVar22._8_8_ = 4;
          auVar22._0_8_ = unaff_x20;
          uVar11 = 0;
          puVar17 = &UNK_0150bd10;
          uVar5 = uVar12;
        } while( true );
      }
    }
  }
  auVar22 = func_0x00f78af4();
  lVar4 = auVar22._8_8_;
  uVar11 = auVar22._0_8_;
  uStack_60 = 0x3eb4000;
  uStack_58 = 0x3d41230;
  puStack_38 = &Atlas_UI_Screens_PlayWithFriendsCodeScreen__TryCode;
  uStack_50 = param_5;
  uStack_48 = param_6;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((param_7 == 0) || (uVar12 = /*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$IsCodeFormatValid*/ func_0x014bf9a0(uVar11,lVar4), (int)uVar12 != 0)) {
    Atlas_UI_Screens_PlayWithFriendsCodeScreen__RemoveAllDigits(uVar11);
    if (lVar4 == 0) {
      lVar4 = func_0x00f78af4();
      uStack_90 = 0x3eb4000;
      uStack_88 = 0x3d41230;
      puStack_68 = &Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNumPadState;
      ppuStack_70 = &puStack_40;
      auStack_80 = auVar22;
      if ((bRam0000000003eb4b11 & 1) == 0) {
        func_0x00f78a20(0x3d41220);
        bRam0000000003eb4b11 = 1;
      }
      uVar11 = /*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$AreAllDigitsFilled*/ func_0x014bfcf0(lVar4);
      uVar10 = *(uint *)(lVar4 + 0x78);
      lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d41220);
      if (lVar13 == 0) {
        uVar12 = func_0x00f78af4();
        return uVar12;
      }
      lVar13 = *(long *)(lVar13 + 0x90);
      uStack_b8 = 0x3d41220;
      puStack_98 = &UNK_014bf46c;
      uStack_c0 = (ulong)uVar10;
      uStack_b0 = uVar11;
      lStack_a8 = lVar4;
      ppuStack_a0 = &ppuStack_70;
      if ((bRam0000000003eb4b10 & 1) == 0) {
        func_0x00f78a20(0x3d535f0);
        func_0x00f78a20(0x3d53590);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b10 = 1;
      }
      if (lVar13 != 0) {
        /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar13,uVar10 != 0,0);
        if (*(long *)(lVar13 + 0xd8) != 0) {
          lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar13 + 0xd8),0);
          if (lVar4 != 0) {
            lVar4 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar4,0,0);
            if (lVar4 != 0) {
              plVar7 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar4,uRam0000000003d53590);
              if (plVar7 != (long *)0x0) {
                plVar8 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar7,uRam0000000003d535f0);
                uVar12 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
                uStack_d0 = (uint)uVar12;
                uStack_cc = param_2;
                uStack_c8 = param_3;
                uStack_c4 = param_4;
                if (uVar10 == 0) {
                  /*UnityEngine.Color$$.ctor*/ func_0x03222f90(_UNK_033f84b8,_UNK_033f84b8,_UNK_033f84b8,&uStack_d0,0);
                  uVar12 = (ulong)uStack_d0;
                }
                (**(code **)(*plVar7 + 0x2a8))(uVar12,plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar8,0,0);
                if ((int)uVar12 != 0) {
                  if (plVar8 == (long *)0x0) goto code_r0x014c018c;
                  uVar12 = (**(code **)(*plVar8 + 0x2a8))
                                     (uStack_d0,uStack_cc,uStack_c8,uStack_c4,plVar8,
                                      *(undefined8 *)(*plVar8 + 0x2b0));
                }
                return uVar12;
              }
            }
          }
        }
      }
code_r0x014c018c:
      lVar4 = func_0x00f78af4();
      return (ulong)(*(int *)(lVar4 + 0x78) == 0);
    }
    if (0 < *(int *)(lVar4 + 0x10)) {
      iVar15 = 0;
      do {
        uVar6 = /*System.String$$get_Chars*/ func_0x029c5420(lVar4,iVar15,0);
        if ((int)uVar6 - 0x30U < 10) {
          /*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$AddNewDigit*/ func_0x014bfbfc(uVar11,uVar6);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(lVar4 + 0x10));
    }
    uVar12 = 1;
  }
  return uVar12;
}



// ============================================================
// RVA: 0x14bf368 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.TryCode
// ============================================================

/* WARNING: Possible PIC construction at 0x014bf468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bffec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bf46c) */
/* WARNING: Removing unreachable block (ram,0x014bff6c) */
/* WARNING: Removing unreachable block (ram,0x014bff98) */
/* WARNING: Removing unreachable block (ram,0x014bffac) */
/* WARNING: Removing unreachable block (ram,0x014bffbc) */
/* WARNING: Removing unreachable block (ram,0x014bffc4) */
/* WARNING: Removing unreachable block (ram,0x014bffd0) */
/* WARNING: Removing unreachable block (ram,0x014bfff0) */
/* WARNING: Removing unreachable block (ram,0x014bffdc) */
/* WARNING: Removing unreachable block (ram,0x014c0010) */
/* WARNING: Removing unreachable block (ram,0x014c001c) */
/* WARNING: Removing unreachable block (ram,0x014bffe4) */
/* WARNING: Removing unreachable block (ram,0x014c0000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_PlayWithFriendsCodeScreen__TryCode
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined8 param_5,long param_6,int param_7)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((param_7 == 0) || (uVar2 = /*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$IsCodeFormatValid*/ func_0x014bf9a0(param_5,param_6), (int)uVar2 != 0)) {
    Atlas_UI_Screens_PlayWithFriendsCodeScreen__RemoveAllDigits(param_5);
    if (param_6 == 0) {
      lVar4 = func_0x00f78af4();
      puStack_38 = &Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNumPadState;
      puStack_40 = &stack0xfffffffffffffff0;
      if ((bRam0000000003eb4b11 & 1) == 0) {
        func_0x00f78a20(0x3d41220);
        bRam0000000003eb4b11 = 1;
      }
      uVar3 = /*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$AreAllDigitsFilled*/ func_0x014bfcf0(lVar4);
      uVar1 = *(uint *)(lVar4 + 0x78);
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d41220);
      if (lVar5 == 0) {
        uVar2 = func_0x00f78af4();
        return uVar2;
      }
      lVar5 = *(long *)(lVar5 + 0x90);
      uStack_88 = 0x3d41220;
      puStack_68 = &UNK_014bf46c;
      uStack_90 = (ulong)uVar1;
      uStack_80 = uVar3;
      lStack_78 = lVar4;
      ppuStack_70 = &puStack_40;
      if ((bRam0000000003eb4b10 & 1) == 0) {
        func_0x00f78a20(0x3d535f0);
        func_0x00f78a20(0x3d53590);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b10 = 1;
      }
      if (lVar5 != 0) {
        /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar5,uVar1 != 0,0);
        if ((((*(long *)(lVar5 + 0xd8) != 0) &&
             (lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar5 + 0xd8),0), lVar4 != 0)) &&
            (lVar4 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar4,0,0), lVar4 != 0)) &&
           (plVar6 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar4,uRam0000000003d53590), plVar6 != (long *)0x0)) {
          plVar7 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar6,uRam0000000003d535f0);
          uStack_a0 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
          uStack_9c = param_2;
          uStack_98 = param_3;
          uStack_94 = param_4;
          if (uVar1 == 0) {
            /*UnityEngine.Color$$.ctor*/ func_0x03222f90(_UNK_033f84b8,_UNK_033f84b8,_UNK_033f84b8,&uStack_a0,0);
          }
          (**(code **)(*plVar6 + 0x2a8))(uStack_a0,plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar7,0,0);
          if ((int)uVar2 != 0) {
            if (plVar7 == (long *)0x0) goto code_r0x014c018c;
            uVar2 = (**(code **)(*plVar7 + 0x2a8))
                              (uStack_a0,uStack_9c,uStack_98,uStack_94,plVar7,
                               *(undefined8 *)(*plVar7 + 0x2b0));
          }
          return uVar2;
        }
      }
code_r0x014c018c:
      lVar4 = func_0x00f78af4();
      return (ulong)(*(int *)(lVar4 + 0x78) == 0);
    }
    if (0 < *(int *)(param_6 + 0x10)) {
      iVar8 = 0;
      do {
        uVar3 = /*System.String$$get_Chars*/ func_0x029c5420(param_6,iVar8,0);
        if ((int)uVar3 - 0x30U < 10) {
          /*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$AddNewDigit*/ func_0x014bfbfc(param_5,uVar3);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_6 + 0x10));
    }
    uVar2 = 1;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x14bf400 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.UpdateNumPadState
// ============================================================

/* WARNING: Possible PIC construction at 0x014bf468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bffec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bf46c) */
/* WARNING: Removing unreachable block (ram,0x014bff6c) */
/* WARNING: Removing unreachable block (ram,0x014bff98) */
/* WARNING: Removing unreachable block (ram,0x014bffac) */
/* WARNING: Removing unreachable block (ram,0x014bffbc) */
/* WARNING: Removing unreachable block (ram,0x014bffc4) */
/* WARNING: Removing unreachable block (ram,0x014bffd0) */
/* WARNING: Removing unreachable block (ram,0x014bfff0) */
/* WARNING: Removing unreachable block (ram,0x014bffdc) */
/* WARNING: Removing unreachable block (ram,0x014c0010) */
/* WARNING: Removing unreachable block (ram,0x014c001c) */
/* WARNING: Removing unreachable block (ram,0x014bffe4) */
/* WARNING: Removing unreachable block (ram,0x014c0000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNumPadState
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                long param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4b11 & 1) == 0) {
    func_0x00f78a20(0x3d41220);
    bRam0000000003eb4b11 = 1;
  }
  uVar2 = /*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$AreAllDigitsFilled*/ func_0x014bfcf0(param_5);
  uVar1 = *(uint *)(param_5 + 0x78);
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41220);
  if (lVar3 == 0) {
    uVar6 = func_0x00f78af4();
    return uVar6;
  }
  lVar3 = *(long *)(lVar3 + 0x90);
  uStack_58 = 0x3d41220;
  uStack_38 = 0x14bf46c;
  uStack_60 = (ulong)uVar1;
  uStack_50 = uVar2;
  lStack_48 = param_5;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b10 & 1) == 0) {
    func_0x00f78a20(0x3d535f0);
    func_0x00f78a20(0x3d53590);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b10 = 1;
  }
  if (lVar3 != 0) {
    /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar3,uVar1 != 0,0);
    if ((((*(long *)(lVar3 + 0xd8) != 0) &&
         (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar3 + 0xd8),0), lVar3 != 0)) &&
        (lVar3 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar3,0,0), lVar3 != 0)) &&
       (plVar4 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar3,uRam0000000003d53590), plVar4 != (long *)0x0)) {
      plVar5 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar4,uRam0000000003d535f0);
      uStack_70 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
      uStack_6c = param_2;
      uStack_68 = param_3;
      uStack_64 = param_4;
      if (uVar1 == 0) {
        /*UnityEngine.Color$$.ctor*/ func_0x03222f90(_UNK_033f84b8,_UNK_033f84b8,_UNK_033f84b8,&uStack_70,0);
      }
      (**(code **)(*plVar4 + 0x2a8))(uStack_70,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar5,0,0);
      if ((int)uVar6 != 0) {
        if (plVar5 == (long *)0x0) goto code_r0x014c018c;
        uVar6 = (**(code **)(*plVar5 + 0x2a8))
                          (uStack_70,uStack_6c,uStack_68,uStack_64,plVar5,
                           *(undefined8 *)(*plVar5 + 0x2b0));
      }
      return uVar6;
    }
  }
code_r0x014c018c:
  lVar3 = func_0x00f78af4();
  return (ulong)(*(int *)(lVar3 + 0x78) == 0);
}



// ============================================================
// RVA: 0x14bf488 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.OnAfterEnter
// ============================================================

void Atlas_UI_Screens_PlayWithFriendsCodeScreen__OnAfterEnter(void)

{
  return;
}



// ============================================================
// RVA: 0x14bf48c | Atlas.UI.Screens.PlayWithFriendsCodeScreen.ShowVirtualKeyboardIfAvailable
// ============================================================

void Atlas_UI_Screens_PlayWithFriendsCodeScreen__ShowVirtualKeyboardIfAvailable(void)

{
  return;
}



// ============================================================
// RVA: 0x14bf490 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.OnBeforeExit
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014bf710) */

long * Atlas_UI_Screens_PlayWithFriendsCodeScreen__OnBeforeExit(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  uint uVar11;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long lVar12;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  uint uVar13;
  undefined8 unaff_x28;
  long lVar14;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar15 [16];
  
  if ((bRam0000000003eb4b04 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d2c890);
    func_0x00f78a20(0x3d5b5b0);
    func_0x00f78a20(0x3d5b5e0);
    func_0x00f78a20(0x3d41228);
    func_0x00f78a20(0x3d41230);
    func_0x00f78a20(0x3d25740);
    bRam0000000003eb4b04 = 1;
  }
  /*Core.UI2.UIScreen$$OnBeforeExit*/ func_0x02f8a62c(param_1,0);
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41230);
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_014bf634;
  uVar9 = *(undefined8 *)(lVar4 + 0x48);
  uVar5 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar5,param_1,uRam0000000003d5b5e0,uRam0000000003d2a320);
  plVar6 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar5,0);
  if ((plVar6 != (long *)0x0) && (*plVar6 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) goto LAB_014bf638;
  *(long **)(lVar4 + 0x48) = plVar6;
  Atlas_UI_Screens_AtlasScreen_ModeSelectScreenBehaviour__ModeSelectScreen_TransitionData___SetScreenHandlePartyInvite
            (param_1,0,uRam0000000003d2c890);
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41228);
  if (lVar4 != 0) {
    lVar10 = *(long *)(lVar4 + 0x18);
    lVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
    /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(lVar4,param_1,uRam0000000003d5b5b0,0);
    if (lVar10 != 0) {
      plVar6 = (long *)0x0;
      puVar1 = &stack0xfffffffffffffff0;
      uVar5 = unaff_x19;
      lVar14 = unaff_x20;
      if (lVar4 == 0) {
code_r0x03278078:
        unaff_x20 = lVar14;
        unaff_x19 = uVar5;
        auVar15 = func_0x00f78af4();
        uVar5 = auVar15._8_8_;
        lVar4 = *(long *)(auVar15._0_8_ + 0x10);
        if (lVar4 == 0) {
          func_0x00f78af4();
          if ((bRam0000000003ec1a30 & 1) == 0) {
            func_0x00f78a20(0x3d1f578);
            bRam0000000003ec1a30 = 1;
          }
          lVar4 = func_0x00f78a34(/*System.Type[]_TypeInfo*/ uRam0000000003d1f578,0);
          if ((bRam0000000003ec1a38 & 1) == 0) {
            func_0x00f78a20(0x3d19b78);
            func_0x00f78a20(0x3d25458);
            bRam0000000003ec1a38 = 1;
          }
          do {
            uVar5 = /*object_var*/ uRam0000000003d19b78;
            if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar5,0);
            if (plVar6 == (long *)0x0) {
              return (long *)0x0;
            }
            if (plVar6 == plVar7) {
              return (long *)0x0;
            }
            uVar5 = 0x3c;
            plVar7 = (long *)/*System.Type$$GetMethod*/ func_0x02a0304c(plVar6,extraout_x1,0x3c,0,lVar4,0,0);
            if (plVar7 != (long *)0x0) {
              lVar10 = (**(code **)(*plVar7 + 600))(plVar7,*(undefined8 *)(*plVar7 + 0x260));
              if (lVar10 == 0) {
code_r0x032782ac:
                func_0x00f78af4();
code_r0x032782b0:
                uVar9 = func_0x00f78b24();
                func_0x00f78ac0(uVar9,0);
                if ((bRam0000000003ec1a31 & 1) == 0) {
                  func_0x00f78a20(0x3d22a90);
                  bRam0000000003ec1a31 = 1;
                }
                plVar6 = (long *)func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
                /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x03231308(plVar6,extraout_x1_00,uVar5,0);
                return plVar6;
              }
              uVar11 = *(uint *)(lVar10 + 0x18);
              if ((int)uVar11 < 1) {
                return plVar7;
              }
              uVar13 = 0;
              while( true ) {
                if (uVar11 <= uVar13) goto code_r0x032782b0;
                if (lVar4 == 0) goto code_r0x032782ac;
                if (*(uint *)(lVar4 + 0x18) <= uVar13) goto code_r0x032782b0;
                plVar8 = *(long **)(lVar10 + (long)(int)uVar13 * 8 + 0x20);
                if (plVar8 == (long *)0x0) goto code_r0x032782ac;
                lVar12 = *(long *)(lVar4 + (long)(int)uVar13 * 8 + 0x20);
                lVar14 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
                if ((lVar12 == 0) || (iVar2 = /*System.Type$$get_IsPrimitive*/ func_0x02a040ac(lVar12,0), lVar14 == 0))
                goto code_r0x032782ac;
                iVar3 = /*System.Type$$get_IsPrimitive*/ func_0x02a040ac(lVar14,0);
                if (iVar2 != iVar3) break;
                uVar13 = uVar13 + 1;
                uVar11 = *(uint *)(lVar10 + 0x18);
                if ((int)uVar11 <= (int)uVar13) {
                  return plVar7;
                }
              }
            }
            plVar6 = (long *)(**(code **)(*plVar6 + 0x328))(plVar6,*(undefined8 *)(*plVar6 + 0x330))
            ;
          } while( true );
        }
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
        unaff_x30 = &UnityEngine_Events_UnityEventBase__RemoveListener;
        unaff_x29 = puVar1;
      }
      else {
        uVar5 = *(undefined8 *)(lVar4 + 0x20);
        plVar6 = (long *)/*System.Delegate$$get_Method*/ func_0x02aaf9e8(lVar4,0);
        lVar4 = *(long *)(lVar10 + 0x10);
        lVar14 = lVar10;
        if (lVar4 == 0) goto code_r0x03278078;
      }
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
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
      plVar7 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1d7f8);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(plVar7,uRam0000000003d39e28);
      lVar10 = *(long *)(lVar4 + 0x18);
      if (lVar10 != 0) {
        lVar14 = 4;
        do {
          uVar11 = (int)lVar14 - 4;
          if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar11) {
            uVar9 = func_0x00f78aec(/*System.Predicate<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1e548);
            if (plVar7 != (long *)0x0) {
              /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(uVar9,plVar7,*(undefined8 *)(*plVar7 + 0x210),uRam0000000003d3f3d8);
              plVar6 = (long *)/*System.Collections.Generic.List<AddressablesImpl.ResourceLocatorInfo>$$RemoveAll*/ func_0x0242879c(lVar10,uVar9,uRam0000000003d39e48);
              *(undefined1 *)(lVar4 + 0x28) = 1;
              return plVar6;
            }
            break;
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar11) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar8 = *(long **)(*(long *)(lVar10 + 0x10) + lVar14 * 8);
          if (plVar8 == (long *)0x0) break;
          iVar2 = (**(code **)(*plVar8 + 0x188))(plVar8,uVar5,plVar6,*(undefined8 *)(*plVar8 + 400))
          ;
          if (iVar2 != 0) {
            lVar10 = *(long *)(lVar4 + 0x18);
            if (lVar10 == 0) break;
            if (*(uint *)(lVar10 + 0x18) <= uVar11) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if (plVar7 == (long *)0x0) break;
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar7,*(undefined8 *)(*(long *)(lVar10 + 0x10) + lVar14 * 8),
                            uRam0000000003d39e30);
          }
          lVar10 = *(long *)(lVar4 + 0x18);
          lVar14 = lVar14 + 1;
        } while (lVar10 != 0);
      }
      lVar10 = func_0x00f78af4();
      *(long **)((long)register0x00000008 + -0x80) = plVar6;
      *(long *)((long)register0x00000008 + -0x78) = lVar4;
      *(undefined1 **)((long)register0x00000008 + -0x70) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x68) =
           &UnityEngine_Events_InvokableCallList__Clear;
      if ((bRam0000000003ebf6c0 & 1) == 0) {
        func_0x00f78a20(0x3d39e40);
        bRam0000000003ebf6c0 = 1;
      }
      if (*(long *)(lVar10 + 0x18) != 0) {
        plVar6 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar10 + 0x18),uRam0000000003d39e40);
        *(undefined1 *)(lVar10 + 0x28) = 1;
        return plVar6;
      }
      lVar4 = func_0x00f78af4();
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3ebf000;
      *(long *)((long)register0x00000008 + -0x98) = lVar10;
      *(undefined1 **)((long)register0x00000008 + -0x90) =
           (undefined1 *)((long)register0x00000008 + -0x70);
      *(undefined **)((long)register0x00000008 + -0x88) =
           &UnityEngine_Events_InvokableCallList__ClearPersistent;
      if ((bRam0000000003ebf6c1 & 1) == 0) {
        func_0x00f78a20(0x3d39e40);
        bRam0000000003ebf6c1 = 1;
      }
      if (*(long *)(lVar4 + 0x10) != 0) {
        plVar6 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar4 + 0x10),uRam0000000003d39e40);
        *(undefined1 *)(lVar4 + 0x28) = 1;
        return plVar6;
      }
      lVar10 = func_0x00f78af4();
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3ebf000;
      *(long *)((long)register0x00000008 + -0xb8) = lVar4;
      *(undefined1 **)((long)register0x00000008 + -0xb0) =
           (undefined1 *)((long)register0x00000008 + -0x90);
      *(undefined **)((long)register0x00000008 + -0xa8) =
           &UnityEngine_Events_InvokableCallList__PrepareInvoke;
      uVar9 = 0x3ebf000;
      if ((bRam0000000003ebf6c2 & 1) == 0) {
        func_0x00f78a20(0x3d39e38);
        func_0x00f78a20(0x3d39e40);
        bRam0000000003ebf6c2 = 1;
      }
      if (*(char *)(lVar10 + 0x28) == '\0') {
code_r0x03231910:
        return *(long **)(lVar10 + 0x20);
      }
      if (*(long *)(lVar10 + 0x20) != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(lVar10 + 0x20),uRam0000000003d39e40);
        if (*(long *)(lVar10 + 0x20) != 0) {
          uVar9 = 0x3d39e38;
          /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$AddRange*/ func_0x02427364(*(long *)(lVar10 + 0x20),*(undefined8 *)(lVar10 + 0x10),
                          uRam0000000003d39e38);
          if (*(long *)(lVar10 + 0x20) != 0) {
            /*System.Collections.Generic.List<TimeZoneInfo.AdjustmentRule>$$AddRange*/ func_0x02427364(*(long *)(lVar10 + 0x20),*(undefined8 *)(lVar10 + 0x18),
                            uRam0000000003d39e38);
            *(undefined1 *)(lVar10 + 0x28) = 0;
            goto code_r0x03231910;
          }
        }
      }
      plVar6 = (long *)func_0x00f78af4();
      *(long **)((long)register0x00000008 + -0xf0) = plVar7;
      *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar5;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar9;
      *(long *)((long)register0x00000008 + -0xd8) = lVar10;
      *(undefined1 **)((long)register0x00000008 + -0xd0) =
           (undefined1 *)((long)register0x00000008 + -0xb0);
      *(undefined **)((long)register0x00000008 + -200) =
           &UnityEngine_Events_InvokableCallList___ctor;
      if ((bRam0000000003ebf6c3 & 1) == 0) {
        func_0x00f78a20(0x3d39e28);
        func_0x00f78a20(0x3d1d7f8);
        bRam0000000003ebf6c3 = 1;
      }
      lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1d7f8);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar4,uRam0000000003d39e28);
      plVar6[2] = lVar4;
      lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1d7f8);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar4,uRam0000000003d39e28);
      plVar6[3] = lVar4;
      lVar4 = func_0x00f78aec(/*System.Collections.Generic.List<BaseInvokableCall>_TypeInfo*/ uRam0000000003d1d7f8);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar4,uRam0000000003d39e28);
      plVar6[4] = lVar4;
      *(undefined1 *)(plVar6 + 5) = 1;
      return plVar6;
    }
  }
LAB_014bf634:
  func_0x00f78af4();
LAB_014bf638:
  plVar7 = (long *)func_0x00f78e5c();
  /*Core.UI2.UIScreen$$OnAfterExit*/ func_0x02f8a630(plVar7,0);
  plVar6 = plVar7;
  if ((bRam0000000003eb4b07 & 1) == 0) {
    func_0x00f78a20(0x3d29fb0);
    func_0x00f78a20(0x3d1b3e0);
    plVar6 = (long *)func_0x00f78a20(0x3d5b5c0);
    bRam0000000003eb4b07 = 1;
  }
  lVar4 = plVar7[0xe];
  if (lVar4 != 0) {
    if (lVar4 != 0) {
      uVar5 = func_0x00f78aec(/*System.Action<char>_TypeInfo*/ uRam0000000003d1b3e0);
      /*System.Action<char>$$.ctor*/ func_0x01b43328(uVar5,plVar7,uRam0000000003d5b5c0,uRam0000000003d29fb0);
      plVar6 = (long *)/*UnityEngine.InputSystem.Keyboard$$remove_onTextInput*/ func_0x03078720(lVar4,uVar5,0);
    }
    plVar7[0xe] = 0;
  }
  return plVar6;
}



// ============================================================
// RVA: 0x14bf63c | Atlas.UI.Screens.PlayWithFriendsCodeScreen.OnAfterExit
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014bf710) */

void Atlas_UI_Screens_PlayWithFriendsCodeScreen__OnAfterExit(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  /*Core.UI2.UIScreen$$OnAfterExit*/ func_0x02f8a630(param_1,0);
  if ((bRam0000000003eb4b07 & 1) == 0) {
    func_0x00f78a20(0x3d29fb0);
    func_0x00f78a20(0x3d1b3e0);
    func_0x00f78a20(0x3d5b5c0);
    bRam0000000003eb4b07 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 != 0) {
    if (lVar2 != 0) {
      uVar1 = func_0x00f78aec(/*System.Action<char>_TypeInfo*/ uRam0000000003d1b3e0);
      /*System.Action<char>$$.ctor*/ func_0x01b43328(uVar1,param_1,uRam0000000003d5b5c0,uRam0000000003d29fb0);
      /*UnityEngine.InputSystem.Keyboard$$remove_onTextInput*/ func_0x03078720(lVar2,uVar1,0);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x14bf668 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.UpdateKeyboard
// ============================================================

void Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateKeyboard(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb4b07 & 1) == 0) {
    func_0x00f78a20(0x3d29fb0);
    func_0x00f78a20(0x3d1b3e0);
    func_0x00f78a20(0x3d5b5c0);
    bRam0000000003eb4b07 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 != param_2) {
    if (lVar2 != 0) {
      uVar1 = func_0x00f78aec(/*System.Action<char>_TypeInfo*/ uRam0000000003d1b3e0);
      /*System.Action<char>$$.ctor*/ func_0x01b43328(uVar1,param_1,uRam0000000003d5b5c0,uRam0000000003d29fb0);
      /*UnityEngine.InputSystem.Keyboard$$remove_onTextInput*/ func_0x03078720(lVar2,uVar1,0);
    }
    if (param_2 != 0) {
      uVar1 = func_0x00f78aec(/*System.Action<char>_TypeInfo*/ uRam0000000003d1b3e0);
      /*System.Action<char>$$.ctor*/ func_0x01b43328(uVar1,param_1,uRam0000000003d5b5c0,uRam0000000003d29fb0);
      /*UnityEngine.InputSystem.Keyboard$$add_onTextInput*/ func_0x03078634(param_2,uVar1,0);
    }
    *(long *)(param_1 + 0x70) = param_2;
  }
  return;
}



// ============================================================
// RVA: 0x14bf768 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.HideVirtualKeyboardIfAvailable
// ============================================================

void Atlas_UI_Screens_PlayWithFriendsCodeScreen__HideVirtualKeyboardIfAvailable(void)

{
  return;
}



// ============================================================
// RVA: 0x14bf76c | Atlas.UI.Screens.PlayWithFriendsCodeScreen.IsPlatformThatNeedsPhysicalKeyboard
// ============================================================

undefined8 Atlas_UI_Screens_PlayWithFriendsCodeScreen__IsPlatformThatNeedsPhysicalKeyboard(void)

{
  return 0;
}



// ============================================================
// RVA: 0x14bf774 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bf468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bffec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bf46c) */
/* WARNING: Removing unreachable block (ram,0x014bff6c) */
/* WARNING: Removing unreachable block (ram,0x014bff98) */
/* WARNING: Removing unreachable block (ram,0x014bffac) */
/* WARNING: Removing unreachable block (ram,0x014bffbc) */
/* WARNING: Removing unreachable block (ram,0x014bffc4) */
/* WARNING: Removing unreachable block (ram,0x014bffd0) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x014bfff0) */
/* WARNING: Removing unreachable block (ram,0x014bffdc) */
/* WARNING: Removing unreachable block (ram,0x014c0010) */
/* WARNING: Removing unreachable block (ram,0x014c001c) */
/* WARNING: Removing unreachable block (ram,0x014bffe4) */
/* WARNING: Removing unreachable block (ram,0x014c0000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_PlayWithFriendsCodeScreen__OnUpdate
                (float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                ulong param_5,undefined8 param_6,ulong param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar15;
  undefined8 unaff_x28;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  uVar5 = param_5;
  if ((bRam0000000003eb4b05 & 1) == 0) {
    uVar5 = func_0x00f78a20(0x3d41220);
    bRam0000000003eb4b05 = 1;
  }
  if (*(char *)(param_5 + 0x88) != '\0') {
    return uVar5;
  }
  if (cRam0000000003ca3500 == '\0') {
    func_0x00f78a20(0x3d22d90);
    cRam0000000003ca3500 = '\x01';
  }
  Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateKeyboard
            (param_5,**(undefined8 **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8));
  fVar23 = *(float *)(param_5 + 0x7c);
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41220);
  uVar11 = (uint)param_7;
  if (lVar6 != 0) {
    fVar23 = fVar23 + *(float *)(lVar6 + 0x78) * param_1;
    uVar5 = (ulong)(uint)(fVar23 + -2.0);
    uVar7 = 0x40000000;
    fVar22 = fVar23 + -2.0;
    if (fVar23 <= 2.0) {
      fVar22 = fVar23;
    }
    *(float *)(param_5 + 0x7c) = fVar22;
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41220);
    param_3 = (undefined4)uVar7;
    param_2 = (undefined4)uVar5;
    uVar11 = (uint)param_7;
    if (lVar6 != 0) {
      iVar15 = 0;
      while( true ) {
        param_3 = (undefined4)uVar7;
        param_2 = (undefined4)uVar5;
        uVar11 = (uint)param_7;
        if (*(long *)(lVar6 + 0x68) == 0) break;
        iVar3 = /*Atlas.UI.UICodePanelBehaviour$$get_DigitCount*/ func_0x0151a1bc(*(long *)(lVar6 + 0x68),0);
        param_3 = (undefined4)uVar7;
        param_2 = (undefined4)uVar5;
        if (iVar3 <= iVar15) goto Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNextButton;
        param_7 = (ulong)(fVar22 < 1.0 && iVar15 == *(int *)(param_5 + 0x78));
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41220);
        param_3 = (undefined4)uVar7;
        param_2 = (undefined4)uVar5;
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x68) == 0)) break;
        /*Atlas.UI.UICodePanelBehaviour$$SetCursorVisible*/ func_0x0151a54c(*(long *)(lVar6 + 0x68),iVar15,param_7,0);
        iVar15 = iVar15 + 1;
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41220);
        param_3 = (undefined4)uVar7;
        param_2 = (undefined4)uVar5;
        uVar11 = (uint)param_7;
        if (lVar6 == 0) break;
      }
    }
  }
  func_0x00f78af4();
Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNextButton:
  uVar7 = /*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$IsCodeFormatValid*/ func_0x014bf9a0(param_5,*(undefined8 *)(param_5 + 0x80));
  if ((bRam0000000003eb4b06 & 1) == 0) {
    func_0x00f78a20(0x3d41230);
    bRam0000000003eb4b06 = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41230);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0xb8) != 0)) {
    uVar12 = uVar7;
    /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar6 + 0xb8),6,uVar7,1,0);
    uVar11 = (uint)uVar12;
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41230);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0xb8) != 0)) {
      uVar11 = (uint)uVar7 ^ 1;
      uVar5 = 1;
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar6 + 0xb8),8,uVar11,1,0);
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_5,uRam0000000003d41230);
      if ((lVar6 != 0) && (uVar4 = *(ulong *)(lVar6 + 0xb8), uVar4 != 0)) {
        uVar12 = 0;
        if (*(long *)(uVar4 + 0x28) != 0) {
          *(char *)(*(long *)(uVar4 + 0x28) + 0x80) = (char)uVar7;
          return uVar4;
        }
        uVar4 = func_0x00f78af4();
        puVar1 = &stack0xffffffffffffffd0;
        puVar16 = &stack0xffffffffffffffe0;
        if (*(ulong *)(uVar4 + 0x28) == 0) {
          puVar17 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
          auVar24 = func_0x00f78af4();
        }
        else {
          auVar24._8_8_ = 0;
          auVar24._0_8_ = *(ulong *)(uVar4 + 0x28);
          uVar12 = 0;
          uVar5 = 1;
          puVar17 = &UNK_0150bbf4;
          puVar1 = &stack0xffffffffffffffd0;
        }
        do {
          uVar10 = auVar24._0_8_;
          *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
          *(ulong *)(puVar1 + -0x18) = uVar4;
          *(undefined1 **)(puVar1 + -0x10) = puVar16;
          *(undefined **)(puVar1 + -8) = puVar17;
          uVar11 = auVar24._8_4_;
          if (uVar11 == 0xffffffff) {
            return uVar10;
          }
          lVar6 = *(long *)(uVar10 + 0x70);
          if (lVar6 == 0) {
            func_0x00f78af4();
          }
          else {
            uVar4 = auVar24._8_8_;
            if (uVar11 < *(uint *)(lVar6 + 0x18)) {
              uVar14 = 2;
              if ((int)uVar12 == 0) {
                uVar14 = 0;
              }
              *(undefined4 *)(lVar6 + (long)(int)uVar11 * 0x60 + 0x5c) = uVar14;
              if ((uVar5 & 1) == 0) {
                /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(uVar10,auVar24._8_8_);
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
              lVar6 = 0x3eb4000;
              if ((bRam0000000003eb4d5b & 1) == 0) {
                func_0x00f78a20(0x3d2a408);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb4d5b = 1;
              }
              lVar13 = *(long *)(uVar10 + 0x70);
              if (lVar13 == 0) goto code_r0x0150c7d4;
              if (*(uint *)(lVar13 + 0x18) <= uVar11) goto code_r0x0150c7d8;
              unaff_x25 = (long)(int)uVar11;
              lVar13 = lVar13 + unaff_x25 * 0x60;
              unaff_x26 = *(undefined8 *)(lVar13 + 0x20);
              unaff_x22 = *(long *)(lVar13 + 0x28);
              uVar7 = *(undefined8 *)(lVar13 + 0x30);
              uVar18 = *(undefined8 *)(lVar13 + 0x48);
              uVar12 = *(undefined8 *)(lVar13 + 0x40);
              *(undefined8 *)(puVar1 + -0xe8) = *(undefined8 *)(lVar13 + 0x38);
              *(undefined8 *)(puVar1 + -0xf0) = uVar7;
              *(undefined8 *)(puVar1 + -0xd8) = uVar18;
              *(undefined8 *)(puVar1 + -0xe0) = uVar12;
              lVar6 = *(long *)(lVar13 + 0x50);
              iVar15 = *(int *)(lVar13 + 0x58);
              iVar3 = *(int *)(lVar13 + 0x5c);
              unaff_x23 = *(long *)(lVar13 + 0x60);
              unaff_x24 = *(long *)(lVar13 + 0x68);
              uVar7 = *(undefined8 *)(lVar13 + 0x70);
              *(undefined8 *)(puVar1 + -0xf8) = *(undefined8 *)(lVar13 + 0x78);
              *(undefined8 *)(puVar1 + -0x100) = uVar7;
              if (iVar3 == iVar15) {
code_r0x0150c768:
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
                if ((int)uVar5 == 0) {
                  return uVar5;
                }
                if (lVar6 != 0) {
                  uVar5 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar6,iVar15 == 2,0);
                  return uVar5;
                }
              }
              else if (iVar15 == 2) {
                if (iVar3 == 0) {
                  if (unaff_x24 == 0) goto code_r0x0150c7d4;
                  uVar12 = *(undefined8 *)(lVar13 + 0x38);
                  uVar7 = *(undefined8 *)(lVar13 + 0x30);
                  uVar19 = *(undefined8 *)(lVar13 + 0x48);
                  uVar18 = *(undefined8 *)(lVar13 + 0x40);
                  *(undefined8 *)(puVar1 + -0x118) = uVar12;
                  *(undefined8 *)(puVar1 + -0x120) = uVar7;
                  *(undefined8 *)(puVar1 + -0x108) = uVar19;
                  *(undefined8 *)(puVar1 + -0x110) = uVar18;
                  uVar21 = *(undefined8 *)(lVar13 + 0x78);
                  uVar20 = *(undefined8 *)(lVar13 + 0x70);
                  *(undefined8 *)(puVar1 + -0x128) = uVar21;
                  *(undefined8 *)(puVar1 + -0x130) = uVar20;
                  *(undefined8 *)(puVar1 + -200) = unaff_x26;
                  *(long *)(puVar1 + -0xc0) = unaff_x22;
                  *(undefined8 *)(puVar1 + -0xb0) = uVar12;
                  *(undefined8 *)(puVar1 + -0xb8) = uVar7;
                  *(undefined8 *)(puVar1 + -0xa0) = uVar19;
                  *(undefined8 *)(puVar1 + -0xa8) = uVar18;
                  *(long *)(puVar1 + -0x98) = lVar6;
                  *(undefined8 *)(puVar1 + -0x90) = _UNK_033f8620;
                  *(long *)(puVar1 + -0x88) = unaff_x23;
                  *(long *)(puVar1 + -0x80) = unaff_x24;
                  *(undefined8 *)(puVar1 + -0x70) = uVar21;
                  *(undefined8 *)(puVar1 + -0x78) = uVar20;
                  lVar13 = unaff_x24;
code_r0x0150c724:
                  /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar13,puVar1 + -200,uRam0000000003d2a408);
                  iVar15 = 1;
                }
                else {
                  iVar15 = 2;
                }
code_r0x0150c72c:
                lVar13 = *(long *)(uVar10 + 0x70);
                if (lVar13 != 0) {
                  if (*(uint *)(lVar13 + 0x18) <= uVar11) goto code_r0x0150c7d8;
                  lVar13 = lVar13 + unaff_x25 * 0x60;
                  *(undefined8 *)(lVar13 + 0x20) = unaff_x26;
                  *(long *)(lVar13 + 0x28) = unaff_x22;
                  uVar7 = *(undefined8 *)(puVar1 + -0xf0);
                  uVar18 = *(undefined8 *)(puVar1 + -0xd8);
                  uVar12 = *(undefined8 *)(puVar1 + -0xe0);
                  *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(puVar1 + -0xe8);
                  *(undefined8 *)(lVar13 + 0x30) = uVar7;
                  *(undefined8 *)(lVar13 + 0x48) = uVar18;
                  *(undefined8 *)(lVar13 + 0x40) = uVar12;
                  *(long *)(lVar13 + 0x50) = lVar6;
                  *(int *)(lVar13 + 0x58) = iVar15;
                  *(int *)(lVar13 + 0x5c) = iVar3;
                  *(long *)(lVar13 + 0x60) = unaff_x23;
                  *(long *)(lVar13 + 0x68) = unaff_x24;
                  uVar7 = *(undefined8 *)(puVar1 + -0x100);
                  *(undefined8 *)(lVar13 + 0x78) = *(undefined8 *)(puVar1 + -0xf8);
                  *(undefined8 *)(lVar13 + 0x70) = uVar7;
                  goto code_r0x0150c768;
                }
              }
              else {
                if (iVar15 != 0) goto code_r0x0150c72c;
                if (iVar3 != 2) {
                  iVar15 = 0;
                  goto code_r0x0150c72c;
                }
                if (((unaff_x22 != 0) && (lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar13 != 0)) &&
                   (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,1,0), unaff_x23 != 0)) {
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
                  lVar13 = unaff_x23;
                  goto code_r0x0150c724;
                }
              }
code_r0x0150c7d4:
              func_0x00f78af4();
code_r0x0150c7d8:
              uVar7 = func_0x00f78b24();
              auVar25 = func_0x00f78ac0(uVar7,0);
              lVar13 = auVar25._8_8_;
              *(undefined8 *)(puVar1 + -0x180) = unaff_x26;
              *(long *)(puVar1 + -0x178) = unaff_x25;
              *(long *)(puVar1 + -0x170) = unaff_x24;
              *(long *)(puVar1 + -0x168) = unaff_x23;
              *(long *)(puVar1 + -0x160) = unaff_x22;
              *(undefined1 (*) [16])(puVar1 + -0x158) = auVar24;
              *(long *)(puVar1 + -0x148) = lVar6;
              *(undefined1 **)(puVar1 + -0x140) = puVar1 + -0x10;
              *(undefined **)(puVar1 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
              if ((bRam0000000003eb4d55 & 1) == 0) {
                func_0x00f78a20(0x3d5e6e0);
                func_0x00f78a20(0x3d5e7a8);
                func_0x00f78a20(0x3d5e7d0);
                func_0x00f78a20(0x3d5e850);
                func_0x00f78a20(0x3d5e888);
                bRam0000000003eb4d55 = 1;
              }
              uVar7 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar13 + 0x18),*(undefined4 *)(lVar13 + 0x1c),
                                      *(undefined4 *)(lVar13 + 0x20),_UNK_033f8144,
                                      *(undefined8 *)(lVar13 + 0x10),0,0);
              uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar7,10,uRam0000000003d5e7a8);
              uVar7 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar7,*(undefined8 *)(lVar13 + 0x58),uRam0000000003d5e6e0);
              uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar7,1,uRam0000000003d5e888);
              uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar7,auVar25._0_8_,uRam0000000003d5e850);
              if ((uVar5 != 0) && (*(char *)(uVar5 + 0xe8) != '\0')) {
                *(undefined8 *)(uVar5 + 0x30) = *(undefined8 *)(lVar13 + 0x10);
              }
              return uVar5;
            }
          }
          uVar7 = func_0x00f78b24();
          auVar24 = func_0x00f78ac0(uVar7,0);
          puVar2 = puVar1 + -0x30;
          puVar16 = puVar1 + -0x30;
          *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
          *(undefined **)(puVar1 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
          lVar6 = *(long *)(auVar24._0_8_ + 0x28);
          auVar25._8_8_ = auVar24._8_8_;
          auVar25._0_8_ = lVar6;
          if (lVar6 == 0) {
            puVar17 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
            auVar25 = func_0x00f78af4();
          }
          else {
            puVar2 = puVar1 + -0x20;
            puVar16 = *(undefined1 **)(puVar1 + -0x30);
            puVar17 = *(undefined **)(puVar1 + -0x28);
          }
          uVar5 = auVar25._8_8_;
          unaff_x20 = auVar25._0_8_;
          puVar1 = puVar2 + -0x20;
          *(ulong *)(puVar2 + -0x20) = uVar10;
          *(ulong *)(puVar2 + -0x18) = uVar4;
          *(undefined1 **)(puVar2 + -0x10) = puVar16;
          *(undefined **)(puVar2 + -8) = puVar17;
          puVar16 = puVar2 + -0x10;
          auVar24._8_8_ = 4;
          auVar24._0_8_ = unaff_x20;
          uVar12 = 0;
          puVar17 = &UNK_0150bd10;
          uVar4 = uVar5;
        } while( true );
      }
    }
  }
  auVar24 = func_0x00f78af4();
  lVar6 = auVar24._8_8_;
  uVar12 = auVar24._0_8_;
  uStack_60 = 0x3eb4000;
  uStack_58 = 0x3d41230;
  uStack_50 = param_5;
  uStack_48 = uVar7;
  if ((uVar11 == 0) || (uVar5 = /*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$IsCodeFormatValid*/ func_0x014bf9a0(uVar12,lVar6), (int)uVar5 != 0)) {
    Atlas_UI_Screens_PlayWithFriendsCodeScreen__RemoveAllDigits(uVar12);
    if (lVar6 == 0) {
      lVar6 = func_0x00f78af4();
      uStack_90 = 0x3eb4000;
      uStack_88 = 0x3d41230;
      pcStack_68 = Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNumPadState;
      puStack_70 = &stack0xffffffffffffffc0;
      auStack_80 = auVar24;
      if ((bRam0000000003eb4b11 & 1) == 0) {
        func_0x00f78a20(0x3d41220);
        bRam0000000003eb4b11 = 1;
      }
      uVar7 = /*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$AreAllDigitsFilled*/ func_0x014bfcf0(lVar6);
      uVar11 = *(uint *)(lVar6 + 0x78);
      lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41220);
      if (lVar13 == 0) {
        uVar5 = func_0x00f78af4();
        return uVar5;
      }
      lVar13 = *(long *)(lVar13 + 0x90);
      uStack_b8 = 0x3d41220;
      uStack_98 = 0x14bf46c;
      uStack_c0 = (ulong)uVar11;
      uStack_b0 = uVar7;
      lStack_a8 = lVar6;
      ppuStack_a0 = &puStack_70;
      if ((bRam0000000003eb4b10 & 1) == 0) {
        func_0x00f78a20(0x3d535f0);
        func_0x00f78a20(0x3d53590);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4b10 = 1;
      }
      if (lVar13 != 0) {
        /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar13,uVar11 != 0,0);
        if (*(long *)(lVar13 + 0xd8) != 0) {
          lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar13 + 0xd8),0);
          if (lVar6 != 0) {
            lVar6 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar6,0,0);
            if (lVar6 != 0) {
              plVar8 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar6,uRam0000000003d53590);
              if (plVar8 != (long *)0x0) {
                plVar9 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar8,uRam0000000003d535f0);
                uVar5 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
                uStack_d0 = (uint)uVar5;
                uStack_cc = param_2;
                uStack_c8 = param_3;
                uStack_c4 = param_4;
                if (uVar11 == 0) {
                  /*UnityEngine.Color$$.ctor*/ func_0x03222f90(_UNK_033f84b8,_UNK_033f84b8,_UNK_033f84b8,&uStack_d0,0);
                  uVar5 = (ulong)uStack_d0;
                }
                (**(code **)(*plVar8 + 0x2a8))(uVar5,plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar9,0,0);
                if ((int)uVar5 != 0) {
                  if (plVar9 == (long *)0x0) goto code_r0x014c018c;
                  uVar5 = (**(code **)(*plVar9 + 0x2a8))
                                    (uStack_d0,uStack_cc,uStack_c8,uStack_c4,plVar9,
                                     *(undefined8 *)(*plVar9 + 0x2b0));
                }
                return uVar5;
              }
            }
          }
        }
      }
code_r0x014c018c:
      lVar6 = func_0x00f78af4();
      return (ulong)(*(int *)(lVar6 + 0x78) == 0);
    }
    if (0 < *(int *)(lVar6 + 0x10)) {
      iVar15 = 0;
      do {
        uVar7 = /*System.String$$get_Chars*/ func_0x029c5420(lVar6,iVar15,0);
        if ((int)uVar7 - 0x30U < 10) {
          /*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$AddNewDigit*/ func_0x014bfbfc(uVar12,uVar7);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(lVar6 + 0x10));
    }
    uVar5 = 1;
  }
  return uVar5;
}



// ============================================================
// RVA: 0x14bf8f0 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.UpdateVirtualKeyboard
// ============================================================

void Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateVirtualKeyboard(void)

{
  return;
}



// ============================================================
// RVA: 0x14bf8f4 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.IsVirtualKeyboardActive
// ============================================================

undefined8 Atlas_UI_Screens_PlayWithFriendsCodeScreen__IsVirtualKeyboardActive(void)

{
  return 0;
}



// ============================================================
// RVA: 0x14bf8fc | Atlas.UI.Screens.PlayWithFriendsCodeScreen.TryPaste
// ============================================================

/* WARNING: Possible PIC construction at 0x014bf38c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bf3d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bf440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bf468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bffec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c0150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bfb10: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x014bfb14) */
/* WARNING: Removing unreachable block (ram,0x014bfb34) */
/* WARNING: Removing unreachable block (ram,0x014bfb3c) */
/* WARNING: Removing unreachable block (ram,0x014bfb50) */
/* WARNING: Removing unreachable block (ram,0x014bfb7c) */
/* WARNING: Removing unreachable block (ram,0x014bfb8c) */
/* WARNING: Removing unreachable block (ram,0x014bfbdc) */
/* WARNING: Removing unreachable block (ram,0x014bfb94) */
/* WARNING: Removing unreachable block (ram,0x014bfbe0) */
/* WARNING: Removing unreachable block (ram,0x014bfba4) */
/* WARNING: Removing unreachable block (ram,0x01cb5534) */
/* WARNING: Removing unreachable block (ram,0x01cb5568) */
/* WARNING: Removing unreachable block (ram,0x01cb557c) */
/* WARNING: Removing unreachable block (ram,0x01cb5588) */
/* WARNING: Removing unreachable block (ram,0x01cb5590) */
/* WARNING: Removing unreachable block (ram,0x01cb5594) */
/* WARNING: Removing unreachable block (ram,0x032441e0) */
/* WARNING: Removing unreachable block (ram,0x0324420c) */
/* WARNING: Removing unreachable block (ram,0x03244220) */
/* WARNING: Removing unreachable block (ram,0x0324422c) */
/* WARNING: Removing unreachable block (ram,0x03244234) */
/* WARNING: Removing unreachable block (ram,0x03244238) */
/* WARNING: Removing unreachable block (ram,0x014c0154) */
/* WARNING: Removing unreachable block (ram,0x014c0158) */
/* WARNING: Removing unreachable block (ram,0x014c015c) */
/* WARNING: Removing unreachable block (ram,0x014c0178) */
/* WARNING: Removing unreachable block (ram,0x014bfff0) */
/* WARNING: Removing unreachable block (ram,0x014bf46c) */
/* WARNING: Removing unreachable block (ram,0x014bff6c) */
/* WARNING: Removing unreachable block (ram,0x014bff98) */
/* WARNING: Removing unreachable block (ram,0x014bffac) */
/* WARNING: Removing unreachable block (ram,0x014bffbc) */
/* WARNING: Removing unreachable block (ram,0x014bffc4) */
/* WARNING: Removing unreachable block (ram,0x014c0000) */
/* WARNING: Removing unreachable block (ram,0x014bffd0) */
/* WARNING: Removing unreachable block (ram,0x014bffdc) */
/* WARNING: Removing unreachable block (ram,0x014c0010) */
/* WARNING: Removing unreachable block (ram,0x014c001c) */
/* WARNING: Removing unreachable block (ram,0x014bffe4) */
/* WARNING: Removing unreachable block (ram,0x014bf444) */
/* WARNING: Removing unreachable block (ram,0x014bf484) */
/* WARNING: Removing unreachable block (ram,0x014bf45c) */
/* WARNING: Removing unreachable block (ram,0x014c0020) */
/* WARNING: Removing unreachable block (ram,0x014c0048) */
/* WARNING: Removing unreachable block (ram,0x014c0074) */
/* WARNING: Removing unreachable block (ram,0x014c0078) */
/* WARNING: Removing unreachable block (ram,0x014c0090) */
/* WARNING: Removing unreachable block (ram,0x014c009c) */
/* WARNING: Removing unreachable block (ram,0x014c00ac) */
/* WARNING: Removing unreachable block (ram,0x014c018c) */
/* WARNING: Removing unreachable block (ram,0x014c00c0) */
/* WARNING: Removing unreachable block (ram,0x014c00f4) */
/* WARNING: Removing unreachable block (ram,0x014c0118) */
/* WARNING: Removing unreachable block (ram,0x014c0138) */
/* WARNING: Removing unreachable block (ram,0x014c0140) */
/* WARNING: Removing unreachable block (ram,0x014c0144) */
/* WARNING: Removing unreachable block (ram,0x03249a9c) */
/* WARNING: Removing unreachable block (ram,0x03249ac8) */
/* WARNING: Removing unreachable block (ram,0x03249adc) */
/* WARNING: Removing unreachable block (ram,0x03249ae8) */
/* WARNING: Removing unreachable block (ram,0x03249af0) */
/* WARNING: Removing unreachable block (ram,0x03249af4) */
/* WARNING: Removing unreachable block (ram,0x03248740) */
/* WARNING: Removing unreachable block (ram,0x03248764) */
/* WARNING: Removing unreachable block (ram,0x03248778) */
/* WARNING: Removing unreachable block (ram,0x03248788) */
/* WARNING: Removing unreachable block (ram,0x0324879c) */
/* WARNING: Removing unreachable block (ram,0x032487b0) */
/* WARNING: Removing unreachable block (ram,0x032487b8) */
/* WARNING: Removing unreachable block (ram,0x032487bc) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */
/* WARNING: Removing unreachable block (ram,0x032487e8) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x03248780) */
/* WARNING: Removing unreachable block (ram,0x032487f0) */
/* WARNING: Removing unreachable block (ram,0x014bf390) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x014bf384) */

code * Atlas_UI_Screens_PlayWithFriendsCodeScreen__TryPaste(code *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong unaff_x22;
  undefined1 *puVar15;
  undefined1 **ppuVar16;
  undefined *puVar17;
  undefined1 auVar18 [16];
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 *puVar3;
  
  if ((bRam0000000003eb4b0e & 1) == 0) {
    func_0x00f78a20(0x3d65ed8);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4b0e = 1;
  }
  lVar8 = /*UniClipboard$$GetText*/ func_0x02f91c5c(0);
  pcVar9 = (code *)/*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(lVar8,0);
  if (((ulong)pcVar9 & 1) != 0) {
    return pcVar9;
  }
  if (lVar8 == 0) {
    auVar18 = func_0x00f78af4();
    lVar8 = auVar18._8_8_;
    pcVar9 = auVar18._0_8_;
    puVar3 = &stack0xffffffffffffffb0;
    puStack_40 = (undefined1 *)0x0;
    puVar15 = &stack0xffffffffffffffd0;
    uVar14 = 0x3eb4000;
    pcStack_38 = param_1;
    if ((bRam0000000003eb4b0b & 1) == 0) {
      func_0x00f78a20(0x3d41220);
      bRam0000000003eb4b0b = 1;
    }
    uVar10 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(lVar8,0);
    if ((uVar10 & 1) != 0) {
      return (code *)0x0;
    }
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x10);
      uVar14 = (ulong)uVar1;
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(pcVar9,uRam0000000003d41220);
      if ((lVar11 != 0) && (*(long *)(lVar11 + 0x68) != 0)) {
        uVar4 = /*Atlas.UI.UICodePanelBehaviour$$get_DigitCount*/ func_0x0151a1bc(*(long *)(lVar11 + 0x68),0);
        if (uVar1 != uVar4) {
          return (code *)0x0;
        }
        if (0 < *(int *)(lVar8 + 0x10)) {
          iVar12 = 0;
          do {
            iVar5 = /*System.String$$get_Chars*/ func_0x029c5420(lVar8,iVar12,0);
            pcVar9 = (code *)(ulong)(iVar5 - 0x30U < 10);
            if (9 < iVar5 - 0x30U) {
              return pcVar9;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(lVar8 + 0x10));
          return pcVar9;
        }
        return (code *)((long)&MACH_HEADER.magic + 1);
      }
    }
    puVar17 = &Atlas_UI_Screens_PlayWithFriendsCodeScreen__OnKeyReceived;
    auVar18 = func_0x00f78af4();
    uVar6 = auVar18._8_8_;
    pcVar7 = auVar18._0_8_;
    if (pcVar7[0x88] != (code)0x0) {
      return pcVar7;
    }
    iVar12 = auVar18._8_4_;
    param_1 = pcVar7;
    if ((iVar12 == 0x7f) || (iVar12 == 8)) {
      puVar2 = &stack0xffffffffffffff80;
      ppuVar16 = (undefined1 **)&stack0xffffffffffffffa0;
      uVar6 = 0x3eb4000;
      pcVar9 = pcVar7;
      if ((bRam0000000003eb4b09 & 1) == 0) {
        func_0x00f78a20(0x3d2c888);
        pcVar9 = (code *)func_0x00f78a20(0x3d41220);
        bRam0000000003eb4b09 = 1;
      }
      if (*(int *)(pcVar7 + 0x78) < 1) {
        return pcVar9;
      }
      puVar17 = &UNK_014bfb14;
    }
    else {
      if (9 < iVar12 - 0x30U) {
        return pcVar7;
      }
code_r0x014bfbfc:
      puVar2 = puVar3 + -0x40;
      *(ulong *)(puVar3 + -0x30) = unaff_x22;
      *(ulong *)(puVar3 + -0x28) = uVar14;
      *(code **)(puVar3 + -0x20) = pcVar9;
      *(long *)(puVar3 + -0x18) = lVar8;
      *(undefined1 **)(puVar3 + -0x10) = puVar15;
      *(undefined **)(puVar3 + -8) = puVar17;
      ppuVar16 = (undefined1 **)(puVar3 + -0x10);
      *(short *)(puVar3 + -0x32) = (short)uVar6;
      if ((bRam0000000003eb4b08 & 1) == 0) {
        func_0x00f78a20(0x3d41220);
        bRam0000000003eb4b08 = 1;
      }
      uVar1 = *(uint *)(param_1 + 0x78);
      unaff_x22 = (ulong)uVar1;
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41220);
      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
        pcVar9 = (code *)/*Atlas.UI.UICodePanelBehaviour$$get_DigitCount*/ func_0x0151a1bc(*(long *)(lVar8 + 0x68),0);
        if ((int)pcVar9 <= (int)uVar1) {
          return pcVar9;
        }
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41220);
        if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
          /*Atlas.UI.UICodePanelBehaviour$$SetDigit*/ func_0x0151a390(*(long *)(lVar8 + 0x68),*(undefined4 *)(param_1 + 0x78),uVar6,0);
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
          uVar13 = *(undefined8 *)(param_1 + 0x80);
          uVar6 = /*System.Char$$ToString*/ func_0x02a2dcd0(puVar3 + -0x32,0);
          uVar6 = /*System.String$$Concat*/ func_0x029bdb88(uVar13,uVar6,0);
          *(undefined8 *)(param_1 + 0x80) = uVar6;
          *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
          pcVar9 = (code *)Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNumPadState(param_1);
          return pcVar9;
        }
      }
      puVar17 = &Atlas_UI_Screens_PlayWithFriendsCodeScreen__AreAllDigitsFilled;
      pcVar7 = (code *)func_0x00f78af4();
    }
  }
  else {
    lVar8 = /*System.String$$Replace*/ func_0x029bf62c(lVar8,/*STR(' ')*/ uRam0000000003d65ed8,/*STR('')*/ uRam0000000003d65d08,0);
    puVar3 = &stack0xffffffffffffffd0;
    puVar15 = &stack0xfffffffffffffff0;
    Atlas_UI_Screens_PlayWithFriendsCodeScreen__RemoveAllDigits(param_1);
    if (lVar8 != 0) {
      if (0 < *(int *)(lVar8 + 0x10)) {
        uVar14 = 0;
        do {
          uVar6 = /*System.String$$get_Chars*/ func_0x029c5420(lVar8,uVar14,0);
          if ((int)uVar6 - 0x30U < 10) {
            puVar17 = (undefined *)0x14bf3d8;
            pcVar9 = param_1;
            goto code_r0x014bfbfc;
          }
          uVar1 = (int)uVar14 + 1;
          uVar14 = (ulong)uVar1;
        } while ((int)uVar1 < *(int *)(lVar8 + 0x10));
      }
      return (code *)0x1;
    }
    pcVar7 = (code *)func_0x00f78af4();
    puVar2 = &stack0xffffffffffffffa0;
    pcStack_38 = Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNumPadState;
    ppuVar16 = &puStack_40;
    uVar6 = 0x3eb4000;
    puStack_40 = puVar15;
    if ((bRam0000000003eb4b11 & 1) == 0) {
      func_0x00f78a20(0x3d41220);
      bRam0000000003eb4b11 = 1;
    }
    puVar17 = (undefined *)0x14bf444;
    param_1 = pcVar7;
  }
  *(ulong *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = 0x3d41220;
  *(undefined8 *)(puVar2 + -0x20) = uVar6;
  *(code **)(puVar2 + -0x18) = param_1;
  *(undefined1 ***)(puVar2 + -0x10) = ppuVar16;
  *(undefined **)(puVar2 + -8) = puVar17;
  if ((bRam0000000003eb4b12 & 1) == 0) {
    func_0x00f78a20(0x3d41220);
    bRam0000000003eb4b12 = 1;
  }
  iVar12 = *(int *)(pcVar7 + 0x78);
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(pcVar7,uRam0000000003d41220);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
    iVar5 = /*Atlas.UI.UICodePanelBehaviour$$get_DigitCount*/ func_0x0151a1bc(*(long *)(lVar8 + 0x68),0);
    return (code *)(ulong)(iVar12 == iVar5);
  }
  pcVar9 = (code *)func_0x00f78af4();
  return pcVar9;
}



// ============================================================
// RVA: 0x14bf9a0 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.IsCodeFormatValid
// ============================================================

/* WARNING: Possible PIC construction at 0x014bfb10: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x014bfb14) */
/* WARNING: Removing unreachable block (ram,0x014bfb34) */
/* WARNING: Removing unreachable block (ram,0x014bfb3c) */
/* WARNING: Removing unreachable block (ram,0x014bfb50) */
/* WARNING: Removing unreachable block (ram,0x014bfb7c) */
/* WARNING: Removing unreachable block (ram,0x014bfb8c) */
/* WARNING: Removing unreachable block (ram,0x014bfbdc) */
/* WARNING: Removing unreachable block (ram,0x014bfb94) */
/* WARNING: Removing unreachable block (ram,0x014bfbe0) */
/* WARNING: Removing unreachable block (ram,0x014bfba4) */
/* WARNING: Removing unreachable block (ram,0x01cb5534) */
/* WARNING: Removing unreachable block (ram,0x01cb5568) */
/* WARNING: Removing unreachable block (ram,0x01cb557c) */
/* WARNING: Removing unreachable block (ram,0x01cb5588) */
/* WARNING: Removing unreachable block (ram,0x01cb5590) */
/* WARNING: Removing unreachable block (ram,0x01cb5594) */
/* WARNING: Removing unreachable block (ram,0x032441e0) */
/* WARNING: Removing unreachable block (ram,0x0324420c) */
/* WARNING: Removing unreachable block (ram,0x03244220) */
/* WARNING: Removing unreachable block (ram,0x0324422c) */
/* WARNING: Removing unreachable block (ram,0x03244234) */
/* WARNING: Removing unreachable block (ram,0x03244238) */
/* WARNING: Removing unreachable block (ram,0x03248740) */
/* WARNING: Removing unreachable block (ram,0x03248764) */
/* WARNING: Removing unreachable block (ram,0x03248778) */
/* WARNING: Removing unreachable block (ram,0x03248788) */
/* WARNING: Removing unreachable block (ram,0x0324879c) */
/* WARNING: Removing unreachable block (ram,0x032487b0) */
/* WARNING: Removing unreachable block (ram,0x032487b8) */
/* WARNING: Removing unreachable block (ram,0x032487bc) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */
/* WARNING: Removing unreachable block (ram,0x032487e8) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x03248780) */
/* WARNING: Removing unreachable block (ram,0x032487f0) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */

ulong Atlas_UI_Screens_PlayWithFriendsCodeScreen__IsCodeFormatValid(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong unaff_x22;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_70 [14];
  undefined2 uStack_62;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4b0b & 1) == 0) {
    func_0x00f78a20(0x3d41220);
    bRam0000000003eb4b0b = 1;
  }
  uVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_2,0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  if (param_2 != 0) {
    iVar7 = *(int *)(param_2 + 0x10);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41220);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x68) != 0)) {
      iVar3 = /*Atlas.UI.UICodePanelBehaviour$$get_DigitCount*/ func_0x0151a1bc(*(long *)(lVar5 + 0x68),0);
      if (iVar7 != iVar3) {
        return 0;
      }
      if (0 < *(int *)(param_2 + 0x10)) {
        iVar7 = 0;
        do {
          iVar3 = /*System.String$$get_Chars*/ func_0x029c5420(param_2,iVar7,0);
          uVar4 = (ulong)(iVar3 - 0x30U < 10);
          if (9 < iVar3 - 0x30U) {
            return uVar4;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(param_2 + 0x10));
        return uVar4;
      }
      return 1;
    }
  }
  auVar11 = func_0x00f78af4();
  uVar8 = auVar11._8_8_;
  uVar4 = auVar11._0_8_;
  if (*(char *)(uVar4 + 0x88) != '\0') {
    return uVar4;
  }
  iVar7 = auVar11._8_4_;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((iVar7 == 0x7f) || (iVar7 == 8)) {
    puVar2 = &stack0xffffffffffffffa0;
    puStack_38 = &Atlas_UI_Screens_PlayWithFriendsCodeScreen__OnKeyReceived;
    uVar8 = 0x3eb4000;
    uVar6 = uVar4;
    if ((bRam0000000003eb4b09 & 1) == 0) {
      func_0x00f78a20(0x3d2c888);
      uVar6 = func_0x00f78a20(0x3d41220);
      bRam0000000003eb4b09 = 1;
    }
    if (*(int *)(uVar4 + 0x78) < 1) {
      return uVar6;
    }
    puVar10 = &UNK_014bfb14;
    uVar6 = uVar4;
  }
  else {
    if (9 < iVar7 - 0x30U) {
      return uVar4;
    }
    puVar2 = auStack_70;
    puStack_38 = &Atlas_UI_Screens_PlayWithFriendsCodeScreen__OnKeyReceived;
    uStack_62 = auVar11._8_2_;
    if ((bRam0000000003eb4b08 & 1) == 0) {
      func_0x00f78a20(0x3d41220);
      bRam0000000003eb4b08 = 1;
    }
    uVar1 = *(uint *)(uVar4 + 0x78);
    unaff_x22 = (ulong)uVar1;
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar4,uRam0000000003d41220);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x68) != 0)) {
      uVar6 = /*Atlas.UI.UICodePanelBehaviour$$get_DigitCount*/ func_0x0151a1bc(*(long *)(lVar5 + 0x68),0);
      if ((int)uVar6 <= (int)uVar1) {
        return uVar6;
      }
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar4,uRam0000000003d41220);
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x68) != 0)) {
        /*Atlas.UI.UICodePanelBehaviour$$SetDigit*/ func_0x0151a390(*(long *)(lVar5 + 0x68),*(undefined4 *)(uVar4 + 0x78),uVar8,0);
        *(int *)(uVar4 + 0x78) = *(int *)(uVar4 + 0x78) + 1;
        uVar9 = *(undefined8 *)(uVar4 + 0x80);
        uVar8 = /*System.Char$$ToString*/ func_0x02a2dcd0(&uStack_62,0);
        uVar8 = /*System.String$$Concat*/ func_0x029bdb88(uVar9,uVar8,0);
        *(undefined8 *)(uVar4 + 0x80) = uVar8;
        *(undefined4 *)(uVar4 + 0x7c) = 0x3f800000;
        uVar4 = Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNumPadState(uVar4);
        return uVar4;
      }
    }
    puVar10 = &Atlas_UI_Screens_PlayWithFriendsCodeScreen__AreAllDigitsFilled;
    uVar6 = func_0x00f78af4();
  }
  *(ulong *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = 0x3d41220;
  *(undefined8 *)(puVar2 + -0x20) = uVar8;
  *(ulong *)(puVar2 + -0x18) = uVar4;
  *(undefined1 ***)(puVar2 + -0x10) = &puStack_40;
  *(undefined **)(puVar2 + -8) = puVar10;
  if ((bRam0000000003eb4b12 & 1) == 0) {
    func_0x00f78a20(0x3d41220);
    bRam0000000003eb4b12 = 1;
  }
  iVar7 = *(int *)(uVar6 + 0x78);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar6,uRam0000000003d41220);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x68) != 0)) {
    iVar3 = /*Atlas.UI.UICodePanelBehaviour$$get_DigitCount*/ func_0x0151a1bc(*(long *)(lVar5 + 0x68),0);
    return (ulong)(iVar7 == iVar3);
  }
  uVar4 = func_0x00f78af4();
  return uVar4;
}



// ============================================================
// RVA: 0x14bfa88 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.OnKeyReceived
// ============================================================

/* WARNING: Possible PIC construction at 0x014bfb10: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x014bfb14) */
/* WARNING: Removing unreachable block (ram,0x014bfb34) */
/* WARNING: Removing unreachable block (ram,0x014bfb3c) */
/* WARNING: Removing unreachable block (ram,0x014bfb50) */
/* WARNING: Removing unreachable block (ram,0x014bfb7c) */
/* WARNING: Removing unreachable block (ram,0x014bfb8c) */
/* WARNING: Removing unreachable block (ram,0x014bfbdc) */
/* WARNING: Removing unreachable block (ram,0x014bfb94) */
/* WARNING: Removing unreachable block (ram,0x014bfbe0) */
/* WARNING: Removing unreachable block (ram,0x014bfba4) */
/* WARNING: Removing unreachable block (ram,0x01cb5534) */
/* WARNING: Removing unreachable block (ram,0x01cb5568) */
/* WARNING: Removing unreachable block (ram,0x01cb557c) */
/* WARNING: Removing unreachable block (ram,0x01cb5588) */
/* WARNING: Removing unreachable block (ram,0x01cb5590) */
/* WARNING: Removing unreachable block (ram,0x01cb5594) */
/* WARNING: Removing unreachable block (ram,0x032441e0) */
/* WARNING: Removing unreachable block (ram,0x0324420c) */
/* WARNING: Removing unreachable block (ram,0x03244220) */
/* WARNING: Removing unreachable block (ram,0x0324422c) */
/* WARNING: Removing unreachable block (ram,0x03244234) */
/* WARNING: Removing unreachable block (ram,0x03244238) */
/* WARNING: Removing unreachable block (ram,0x03248740) */
/* WARNING: Removing unreachable block (ram,0x03248764) */
/* WARNING: Removing unreachable block (ram,0x03248778) */
/* WARNING: Removing unreachable block (ram,0x03248788) */
/* WARNING: Removing unreachable block (ram,0x0324879c) */
/* WARNING: Removing unreachable block (ram,0x032487b0) */
/* WARNING: Removing unreachable block (ram,0x032487b8) */
/* WARNING: Removing unreachable block (ram,0x032487bc) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */
/* WARNING: Removing unreachable block (ram,0x032487e8) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x03248780) */
/* WARNING: Removing unreachable block (ram,0x032487f0) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */

ulong Atlas_UI_Screens_PlayWithFriendsCodeScreen__OnKeyReceived(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong unaff_x22;
  undefined *puVar9;
  undefined1 auStack_40 [14];
  undefined2 uStack_32;
  
  if (*(char *)(param_1 + 0x88) != '\0') {
    return param_1;
  }
  iVar7 = (int)param_2;
  if ((iVar7 == 0x7f) || (iVar7 == 8)) {
    puVar2 = &stack0xffffffffffffffd0;
    param_2 = 0x3eb4000;
    uVar4 = param_1;
    if ((bRam0000000003eb4b09 & 1) == 0) {
      func_0x00f78a20(0x3d2c888);
      uVar4 = func_0x00f78a20(0x3d41220);
      bRam0000000003eb4b09 = 1;
    }
    if (*(int *)(param_1 + 0x78) < 1) {
      return uVar4;
    }
    puVar9 = &UNK_014bfb14;
    uVar4 = param_1;
  }
  else {
    if (9 < iVar7 - 0x30U) {
      return param_1;
    }
    puVar2 = auStack_40;
    uStack_32 = (undefined2)param_2;
    if ((bRam0000000003eb4b08 & 1) == 0) {
      func_0x00f78a20(0x3d41220);
      bRam0000000003eb4b08 = 1;
    }
    uVar1 = *(uint *)(param_1 + 0x78);
    unaff_x22 = (ulong)uVar1;
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41220);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x68) != 0)) {
      uVar4 = /*Atlas.UI.UICodePanelBehaviour$$get_DigitCount*/ func_0x0151a1bc(*(long *)(lVar5 + 0x68),0);
      if ((int)uVar4 <= (int)uVar1) {
        return uVar4;
      }
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41220);
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x68) != 0)) {
        /*Atlas.UI.UICodePanelBehaviour$$SetDigit*/ func_0x0151a390(*(long *)(lVar5 + 0x68),*(undefined4 *)(param_1 + 0x78),param_2,0);
        *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
        uVar8 = *(undefined8 *)(param_1 + 0x80);
        uVar6 = /*System.Char$$ToString*/ func_0x02a2dcd0(&uStack_32,0);
        uVar6 = /*System.String$$Concat*/ func_0x029bdb88(uVar8,uVar6,0);
        *(undefined8 *)(param_1 + 0x80) = uVar6;
        *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
        uVar4 = Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNumPadState(param_1);
        return uVar4;
      }
    }
    puVar9 = &Atlas_UI_Screens_PlayWithFriendsCodeScreen__AreAllDigitsFilled;
    uVar4 = func_0x00f78af4();
  }
  *(ulong *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = 0x3d41220;
  *(undefined8 *)(puVar2 + -0x20) = param_2;
  *(ulong *)(puVar2 + -0x18) = param_1;
  *(undefined1 **)(puVar2 + -0x10) = &stack0xfffffffffffffff0;
  *(undefined **)(puVar2 + -8) = puVar9;
  if ((bRam0000000003eb4b12 & 1) == 0) {
    func_0x00f78a20(0x3d41220);
    bRam0000000003eb4b12 = 1;
  }
  iVar7 = *(int *)(uVar4 + 0x78);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar4,uRam0000000003d41220);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x68) != 0)) {
    iVar3 = /*Atlas.UI.UICodePanelBehaviour$$get_DigitCount*/ func_0x0151a1bc(*(long *)(lVar5 + 0x68),0);
    return (ulong)(iVar7 == iVar3);
  }
  uVar4 = func_0x00f78af4();
  return uVar4;
}



// ============================================================
// RVA: 0x14bfab8 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.RemoveLastDigit
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

ulong Atlas_UI_Screens_PlayWithFriendsCodeScreen__RemoveLastDigit(ulong param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int extraout_w1;
  
  uVar3 = param_1;
  if ((bRam0000000003eb4b09 & 1) == 0) {
    func_0x00f78a20(0x3d2c888);
    uVar3 = func_0x00f78a20(0x3d41220);
    bRam0000000003eb4b09 = 1;
  }
  if (*(int *)(param_1 + 0x78) < 1) {
    return uVar3;
  }
  iVar1 = /*Atlas.UI.Screens.PlayWithFriendsCodeScreen$$AreAllDigitsFilled*/ func_0x014bfcf0(param_1);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41220);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x68) != 0)) {
    /*Atlas.UI.UICodePanelBehaviour$$HideDigit*/ func_0x0151a49c(*(long *)(lVar4 + 0x68),*(undefined4 *)(param_1 + 0x78),0);
    lVar4 = *(long *)(param_1 + 0x80);
    if (lVar4 != 0) {
      uVar5 = /*System.String$$Substring*/ func_0x029cbbf0(lVar4,0,*(int *)(lVar4 + 0x10) + -1,0);
      *(undefined8 *)(param_1 + 0x80) = uVar5;
      *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
      uVar3 = Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNumPadState(param_1);
      if (iVar1 == 0) {
        return uVar3;
      }
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41220);
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x80), lVar4 != 0)) {
        if (*(uint *)(param_1 + 0x8c) < *(uint *)(lVar4 + 0x18)) {
          lVar4 = *(long *)(lVar4 + (long)(int)*(uint *)(param_1 + 0x8c) * 8 + 0x20);
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
          if (lVar4 == 0) {
            uVar3 = 1;
          }
          else {
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar2 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar4);
            uVar3 = (ulong)(uVar2 ^ 1);
          }
          return uVar3;
        }
        goto LAB_014bfbe0;
      }
    }
  }
  func_0x00f78af4();
LAB_014bfbe0:
  uVar5 = func_0x00f78b24();
  func_0x00f78ac0(uVar5,0);
  return (ulong)(extraout_w1 - 0x30U < 10);
}



// ============================================================
// RVA: 0x14bfbec | Atlas.UI.Screens.PlayWithFriendsCodeScreen.IsDigit
// ============================================================

bool Atlas_UI_Screens_PlayWithFriendsCodeScreen__IsDigit(undefined8 param_1,int param_2)

{
  return param_2 - 0x30U < 10;
}



// ============================================================
// RVA: 0x14bfbfc | Atlas.UI.Screens.PlayWithFriendsCodeScreen.AddNewDigit
// ============================================================

ulong Atlas_UI_Screens_PlayWithFriendsCodeScreen__AddNewDigit(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 uStack_32;
  
  uStack_32 = (undefined2)param_2;
  if ((bRam0000000003eb4b08 & 1) == 0) {
    func_0x00f78a20(0x3d41220);
    bRam0000000003eb4b08 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x78);
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41220);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x68) != 0)) {
    uVar4 = /*Atlas.UI.UICodePanelBehaviour$$get_DigitCount*/ func_0x0151a1bc(*(long *)(lVar3 + 0x68),0);
    if (iVar1 < (int)uVar4) {
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41220);
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x68) == 0)) goto LAB_014bfcec;
      /*Atlas.UI.UICodePanelBehaviour$$SetDigit*/ func_0x0151a390(*(long *)(lVar3 + 0x68),*(undefined4 *)(param_1 + 0x78),param_2,0);
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
      uVar6 = *(undefined8 *)(param_1 + 0x80);
      uVar5 = /*System.Char$$ToString*/ func_0x02a2dcd0(&uStack_32,0);
      uVar5 = /*System.String$$Concat*/ func_0x029bdb88(uVar6,uVar5,0);
      *(undefined8 *)(param_1 + 0x80) = uVar5;
      *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
      uVar4 = Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNumPadState(param_1);
    }
    return uVar4;
  }
LAB_014bfcec:
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4b12 & 1) == 0) {
    func_0x00f78a20(0x3d41220);
    bRam0000000003eb4b12 = 1;
  }
  iVar1 = *(int *)(lVar3 + 0x78);
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar3,uRam0000000003d41220);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x68) != 0)) {
    iVar2 = /*Atlas.UI.UICodePanelBehaviour$$get_DigitCount*/ func_0x0151a1bc(*(long *)(lVar3 + 0x68),0);
    return (ulong)(iVar1 == iVar2);
  }
  uVar4 = func_0x00f78af4();
  return uVar4;
}



// ============================================================
// RVA: 0x14bfcf0 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.AreAllDigitsFilled
// ============================================================

ulong Atlas_UI_Screens_PlayWithFriendsCodeScreen__AreAllDigitsFilled(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  if ((bRam0000000003eb4b12 & 1) == 0) {
    func_0x00f78a20(0x3d41220);
    bRam0000000003eb4b12 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x78);
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41220);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x68) != 0)) {
    iVar2 = /*Atlas.UI.UICodePanelBehaviour$$get_DigitCount*/ func_0x0151a1bc(*(long *)(lVar3 + 0x68),0);
    return (ulong)(iVar1 == iVar2);
  }
  uVar4 = func_0x00f78af4();
  return uVar4;
}



// ============================================================
// RVA: 0x14bfd6c | Atlas.UI.Screens.PlayWithFriendsCodeScreen.OnDigitsButtonPressed
// ============================================================

void Atlas_UI_Screens_PlayWithFriendsCodeScreen__OnDigitsButtonPressed(void)

{
  return;
}



// ============================================================
// RVA: 0x14bfd70 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.OnNextButtonPressed
// ============================================================

undefined8 Atlas_UI_Screens_PlayWithFriendsCodeScreen__OnNextButtonPressed(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [12];
  
  if ((bRam0000000003eb4b0c & 1) == 0) {
    func_0x00f78a20(0x3d41228);
    func_0x00f78a20(0x3d41230);
    bRam0000000003eb4b0c = 1;
  }
  if (*(char *)(param_1 + 0x88) == '\0') {
    uVar1 = Atlas_UI_Screens_PlayWithFriendsCodeScreen__IsCodeFormatValid
                      (param_1,*(undefined8 *)(param_1 + 0x80));
    if ((int)uVar1 != 0) {
      lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41230);
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0xb8) != 0)) {
        /*Atlas.UI.TopBarManager$$RequestHideBackAndNextAndPanels*/ func_0x0150bbcc(*(long *)(lVar2 + 0xb8),0);
        lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41228);
        if (lVar2 != 0) {
          if (*(long *)(lVar2 + 0x10) != 0) {
            /*Atlas.UI.Screens.PlayWithFriendsCodeScreen.JoinRoomSelected$$Invoke*/ func_0x015621b0(*(long *)(lVar2 + 0x10),*(undefined8 *)(param_1 + 0x80),0);
          }
          *(undefined1 *)(param_1 + 0x88) = 1;
          return 1;
        }
      }
      lVar2 = func_0x00f78af4();
      if ((bRam0000000003eb4b0d & 1) == 0) {
        func_0x00f78a20(0x3d29bc0);
        func_0x00f78a20(0x3d5b5c8);
        func_0x00f78a20(0x3d41230);
        bRam0000000003eb4b0d = 1;
      }
      Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNextButton(lVar2,0);
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar2,uRam0000000003d41230);
      if ((lVar3 != 0) && (*(long *)(lVar3 + 0xb8) != 0)) {
        /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar3 + 0xb8),0,1,1,0);
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar2,uRam0000000003d41230);
        if (lVar3 != 0) {
          lVar3 = *(long *)(lVar3 + 0xb8);
          uVar1 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
          /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(uVar1,lVar2,uRam0000000003d5b5c8,0);
          if (lVar3 != 0) {
            uVar1 = /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar3,6,uVar1,0);
            *(undefined1 *)(lVar2 + 0x88) = 0;
            return uVar1;
          }
        }
      }
      auVar4 = func_0x00f78af4();
      uVar1 = Atlas_UI_Screens_PlayWithFriendsCodeScreen__AddNewDigit
                        (auVar4._0_8_,auVar4._8_4_ + 0x30U & 0xffff);
      *(int *)(auVar4._0_8_ + 0x8c) = auVar4._8_4_;
      return uVar1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x14bfe38 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.JoinGroupFailed
// ============================================================

void Atlas_UI_Screens_PlayWithFriendsCodeScreen__JoinGroupFailed(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [12];
  
  if ((bRam0000000003eb4b0d & 1) == 0) {
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d5b5c8);
    func_0x00f78a20(0x3d41230);
    bRam0000000003eb4b0d = 1;
  }
  Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNextButton(param_1,0);
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41230);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0xb8) != 0)) {
    /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar1 + 0xb8),0,1,1,0);
    lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41230);
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0xb8);
      uVar2 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
      /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(uVar2,param_1,uRam0000000003d5b5c8,0);
      if (lVar1 != 0) {
        /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar1,6,uVar2,0);
        *(undefined1 *)(param_1 + 0x88) = 0;
        return;
      }
    }
  }
  auVar3 = func_0x00f78af4();
  Atlas_UI_Screens_PlayWithFriendsCodeScreen__AddNewDigit
            (auVar3._0_8_,auVar3._8_4_ + 0x30U & 0xffff);
  *(int *)(auVar3._0_8_ + 0x8c) = auVar3._8_4_;
  return;
}



// ============================================================
// RVA: 0x14bff34 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.OnNumPadDigitPressed
// ============================================================

void Atlas_UI_Screens_PlayWithFriendsCodeScreen__OnNumPadDigitPressed(long param_1,int param_2)

{
  Atlas_UI_Screens_PlayWithFriendsCodeScreen__AddNewDigit(param_1,param_2 + 0x30U & 0xffff);
  *(int *)(param_1 + 0x8c) = param_2;
  return;
}



// ============================================================
// RVA: 0x14bff64 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.OnNumPadPastePressed
// ============================================================

/* WARNING: Possible PIC construction at 0x014bf468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014bffec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c0150: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x014c0154) */
/* WARNING: Removing unreachable block (ram,0x014c0158) */
/* WARNING: Removing unreachable block (ram,0x014c015c) */
/* WARNING: Removing unreachable block (ram,0x014c0178) */
/* WARNING: Removing unreachable block (ram,0x014bfff0) */
/* WARNING: Removing unreachable block (ram,0x014bf46c) */
/* WARNING: Removing unreachable block (ram,0x014bff6c) */
/* WARNING: Removing unreachable block (ram,0x014bff98) */
/* WARNING: Removing unreachable block (ram,0x014bffac) */
/* WARNING: Removing unreachable block (ram,0x014bffbc) */
/* WARNING: Removing unreachable block (ram,0x014bffc4) */
/* WARNING: Removing unreachable block (ram,0x014c0000) */
/* WARNING: Removing unreachable block (ram,0x014bffd0) */
/* WARNING: Removing unreachable block (ram,0x014bffdc) */
/* WARNING: Removing unreachable block (ram,0x014c0010) */
/* WARNING: Removing unreachable block (ram,0x014c001c) */
/* WARNING: Removing unreachable block (ram,0x014bffe4) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x014bf384) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
Atlas_UI_Screens_PlayWithFriendsCodeScreen__OnNumPadPastePressed
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          code *param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  int iVar4;
  undefined *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  int extraout_w1;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 **ppuVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_70 [16];
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb4b0e & 1) == 0) {
    func_0x00f78a20(0x3d65ed8);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb4b0e = 1;
  }
  puVar7 = (undefined1 *)/*UniClipboard$$GetText*/ func_0x02f91c5c(0);
  puVar8 = (undefined *)/*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(puVar7,0);
  if (((ulong)puVar8 & 1) != 0) {
    return puVar8;
  }
  if (puVar7 != (undefined1 *)0x0) {
    lVar9 = /*System.String$$Replace*/ func_0x029bf62c(puVar7,/*STR(' ')*/ uRam0000000003d65ed8,/*STR('')*/ uRam0000000003d65d08,0);
    Atlas_UI_Screens_PlayWithFriendsCodeScreen__RemoveAllDigits(param_5);
    if (lVar9 != 0) {
      if (0 < *(int *)(lVar9 + 0x10)) {
        iVar4 = 0;
        do {
          uVar6 = /*System.String$$get_Chars*/ func_0x029c5420(lVar9,iVar4,0);
          if ((int)uVar6 - 0x30U < 10) {
            Atlas_UI_Screens_PlayWithFriendsCodeScreen__AddNewDigit(param_5,uVar6);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(lVar9 + 0x10));
      }
      return (undefined *)0x1;
    }
    lVar9 = func_0x00f78af4();
    pcStack_38 = Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNumPadState;
    puStack_40 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4b11 & 1) == 0) {
      func_0x00f78a20(0x3d41220);
      bRam0000000003eb4b11 = 1;
    }
    Atlas_UI_Screens_PlayWithFriendsCodeScreen__AreAllDigitsFilled(lVar9);
    iVar4 = *(int *)(lVar9 + 0x78);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41220);
    if (lVar9 == 0) {
      puVar8 = (undefined *)func_0x00f78af4();
      return puVar8;
    }
    bVar2 = iVar4 != 0;
    uVar14 = (ulong)bVar2;
    lVar9 = *(long *)(lVar9 + 0x90);
    auStack_70._8_8_ = 0x14bf46c;
    auStack_70._0_8_ = &puStack_40;
    if ((bRam0000000003eb4b10 & 1) == 0) {
      func_0x00f78a20(0x3d535f0);
      func_0x00f78a20(0x3d53590);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4b10 = 1;
    }
    if (lVar9 != 0) {
      /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar9,uVar14,0);
      if ((((*(long *)(lVar9 + 0xd8) != 0) &&
           (lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar9 + 0xd8),0), lVar9 != 0)) &&
          (lVar9 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar9,0,0), lVar9 != 0)) &&
         (plVar12 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar9,uRam0000000003d53590), plVar12 != (long *)0x0)) {
        puVar13 = (undefined8 *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar12,uRam0000000003d535f0);
        uVar19 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
        uStack_a0 = (undefined8 **)CONCAT44(param_2,uVar19);
        uStack_98 = (code *)CONCAT44(param_4,param_3);
        if (!bVar2) {
          /*UnityEngine.Color$$.ctor*/ func_0x03222f90(_UNK_033f84b8,_UNK_033f84b8,_UNK_033f84b8,&uStack_a0,0);
          uVar19 = (undefined4)uStack_a0;
        }
        (**(code **)(*plVar12 + 0x2a8))(uVar19,plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar1 = &uStack_d0;
        uStack_d0 = 0x3d23990;
        puStack_a8 = &UNK_014c0154;
        plStack_c8 = plVar12;
        uStack_c0 = uVar14;
        puStack_b8 = puVar13;
        puStack_b0 = (undefined8 *)auStack_70;
        if ((bRam0000000003ec027c & 1) == 0) {
          func_0x00f78a20(0x3d23990,0,0);
          bRam0000000003ec027c = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar8 = (undefined *)0x0;
        puVar16 = puVar13;
        puVar17 = (undefined8 *)0x3ec0000;
        uVar14 = 0x3d23990;
        ppuVar18 = &puStack_b0;
        puVar11 = &UNK_03249b00;
code_r0x03248740:
        *(ulong *)((long)puVar1 + -0x30) = uVar14;
        *(undefined8 **)((long)puVar1 + -0x28) = puVar17;
        *(undefined8 **)((long)puVar1 + -0x20) = puVar16;
        *(undefined **)((long)puVar1 + -0x18) = puVar8;
        *(undefined8 ***)((long)puVar1 + -0x10) = ppuVar18;
        *(undefined **)((long)puVar1 + -8) = puVar11;
        if ((bRam0000000003ec021b & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003ec021b = 1;
        }
        if (puVar13 == (undefined8 *)0x0) {
          puVar8 = (undefined *)0x1;
        }
        else {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(puVar13);
          puVar8 = (undefined *)(ulong)(uVar5 ^ 1);
        }
        return puVar8;
      }
    }
    lVar9 = func_0x00f78af4();
    return (undefined *)(ulong)(*(int *)(lVar9 + 0x78) == 0);
  }
  auVar20 = func_0x00f78af4();
  lVar9 = auVar20._8_8_;
  puStack_40 = puVar7;
  pcStack_38 = param_5;
  if ((bRam0000000003eb4b0b & 1) == 0) {
    func_0x00f78a20(0x3d41220);
    bRam0000000003eb4b0b = 1;
  }
  uVar14 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(lVar9,0);
  if ((uVar14 & 1) != 0) {
    return (undefined *)0x0;
  }
  if (lVar9 != 0) {
    iVar4 = *(int *)(lVar9 + 0x10);
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(auVar20._0_8_,uRam0000000003d41220);
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x68) != 0)) {
      iVar3 = /*Atlas.UI.UICodePanelBehaviour$$get_DigitCount*/ func_0x0151a1bc(*(long *)(lVar10 + 0x68),0);
      if (iVar4 != iVar3) {
        return (undefined *)0x0;
      }
      if (0 < *(int *)(lVar9 + 0x10)) {
        iVar4 = 0;
        do {
          iVar3 = /*System.String$$get_Chars*/ func_0x029c5420(lVar9,iVar4,0);
          puVar8 = (undefined *)(ulong)(iVar3 - 0x30U < 10);
          if (9 < iVar3 - 0x30U) {
            return puVar8;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(lVar9 + 0x10));
        return puVar8;
      }
      return (undefined *)((long)&MACH_HEADER.magic + 1);
    }
  }
  auVar21 = func_0x00f78af4();
  puVar8 = auVar21._0_8_;
  if (puVar8[0x88] != '\0') {
    return puVar8;
  }
  iVar4 = auVar21._8_4_;
  puStack_a8 = puVar8;
  auStack_70 = auVar20;
  if ((iVar4 != 0x7f) && (iVar4 != 8)) {
    if (9 < iVar4 - 0x30U) {
      return puVar8;
    }
    if ((bRam0000000003eb4b08 & 1) == 0) {
      func_0x00f78a20(0x3d41220);
      bRam0000000003eb4b08 = 1;
    }
    uVar5 = *(uint *)(puVar8 + 0x78);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41220);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) {
      puVar11 = (undefined *)/*Atlas.UI.UICodePanelBehaviour$$get_DigitCount*/ func_0x0151a1bc(*(long *)(lVar9 + 0x68),0);
      if ((int)uVar5 < (int)puVar11) {
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41220);
        if ((lVar9 == 0) || (*(long *)(lVar9 + 0x68) == 0)) goto LAB_014bfcec;
        /*Atlas.UI.UICodePanelBehaviour$$SetDigit*/ func_0x0151a390(*(long *)(lVar9 + 0x68),*(undefined4 *)(puVar8 + 0x78),auVar21._8_8_,0);
        *(int *)(puVar8 + 0x78) = *(int *)(puVar8 + 0x78) + 1;
        uVar15 = *(undefined8 *)(puVar8 + 0x80);
        uVar6 = /*System.Char$$ToString*/ func_0x02a2dcd0(&stack0xffffffffffffff7e,0);
        uVar6 = /*System.String$$Concat*/ func_0x029bdb88(uVar15,uVar6,0);
        *(undefined8 *)(puVar8 + 0x80) = uVar6;
        *(undefined4 *)(puVar8 + 0x7c) = 0x3f800000;
        puVar11 = (undefined *)Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNumPadState(puVar8)
        ;
      }
      return puVar11;
    }
LAB_014bfcec:
    lVar9 = func_0x00f78af4();
    puStack_b8 = (undefined8 *)0x3d41220;
    uStack_98 = Atlas_UI_Screens_PlayWithFriendsCodeScreen__AreAllDigitsFilled;
    uStack_c0 = (ulong)uVar5;
    uStack_a0 = (undefined8 **)&stack0xffffffffffffffa0;
    if ((bRam0000000003eb4b12 & 1) == 0) {
      puStack_b0 = auVar21._8_8_;
      func_0x00f78a20(0x3d41220);
      auVar21._8_8_ = puStack_b0;
      auVar21._0_8_ = puStack_a8;
      bRam0000000003eb4b12 = 1;
    }
    puStack_b0 = auVar21._8_8_;
    puStack_a8 = auVar21._0_8_;
    iVar4 = *(int *)(lVar9 + 0x78);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41220);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) {
      iVar3 = /*Atlas.UI.UICodePanelBehaviour$$get_DigitCount*/ func_0x0151a1bc(*(long *)(lVar9 + 0x68),0);
      return (undefined *)(ulong)(iVar4 == iVar3);
    }
    puVar8 = (undefined *)func_0x00f78af4();
    return puVar8;
  }
  puVar11 = puVar8;
  if ((bRam0000000003eb4b09 & 1) == 0) {
    func_0x00f78a20(0x3d2c888);
    puVar11 = (undefined *)func_0x00f78a20(0x3d41220);
    bRam0000000003eb4b09 = 1;
  }
  if (*(int *)(puVar8 + 0x78) < 1) {
    return puVar11;
  }
  iVar4 = Atlas_UI_Screens_PlayWithFriendsCodeScreen__AreAllDigitsFilled(puVar8);
  *(int *)(puVar8 + 0x78) = *(int *)(puVar8 + 0x78) + -1;
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41220);
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) {
    /*Atlas.UI.UICodePanelBehaviour$$HideDigit*/ func_0x0151a49c(*(long *)(lVar9 + 0x68),*(undefined4 *)(puVar8 + 0x78),0);
    lVar9 = *(long *)(puVar8 + 0x80);
    if (lVar9 != 0) {
      uVar6 = /*System.String$$Substring*/ func_0x029cbbf0(lVar9,0,*(int *)(lVar9 + 0x10) + -1,0);
      *(undefined8 *)(puVar8 + 0x80) = uVar6;
      *(undefined4 *)(puVar8 + 0x7c) = 0x3f800000;
      puVar11 = (undefined *)Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNumPadState(puVar8);
      if (iVar4 == 0) {
        return puVar11;
      }
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41220);
      puVar16 = puRam0000000003d2c888;
      if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x80), lVar9 != 0)) {
        if (*(uint *)(puVar8 + 0x8c) < *(uint *)(lVar9 + 0x18)) {
          puVar13 = *(undefined8 **)(lVar9 + (long)(int)*(uint *)(puVar8 + 0x8c) * 8 + 0x20);
          if ((bRam0000000003eb70f7 & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb70f7 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uStack_c0 = 0x3eb7000;
          puStack_b8 = puVar16;
          uStack_98 = (code *)0x1cb55a4;
          puStack_b0 = puVar13;
          uStack_a0 = (undefined8 **)&stack0xffffffffffffffa0;
          if ((bRam0000000003ec027b & 1) == 0) {
            func_0x00f78a20(0x3d23990,0,0);
            bRam0000000003ec027b = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar1 = (undefined8 *)&stack0xffffffffffffff70;
          puVar8 = puStack_a8;
          puVar16 = puStack_b0;
          puVar17 = puStack_b8;
          uVar14 = uStack_c0;
          ppuVar18 = uStack_a0;
          puVar11 = uStack_98;
          goto code_r0x03248740;
        }
        goto LAB_014bfbe0;
      }
    }
  }
  func_0x00f78af4();
LAB_014bfbe0:
  uVar6 = func_0x00f78b24();
  func_0x00f78ac0(uVar6,0);
  return (undefined *)(ulong)(extraout_w1 - 0x30U < 10);
}



// ============================================================
// RVA: 0x14bff68 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.OnNumPadBackSpacePressed
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

ulong Atlas_UI_Screens_PlayWithFriendsCodeScreen__OnNumPadBackSpacePressed(ulong param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int extraout_w1;
  
  uVar3 = param_1;
  if ((bRam0000000003eb4b09 & 1) == 0) {
    func_0x00f78a20(0x3d2c888);
    uVar3 = func_0x00f78a20(0x3d41220);
    bRam0000000003eb4b09 = 1;
  }
  if (*(int *)(param_1 + 0x78) < 1) {
    return uVar3;
  }
  iVar1 = Atlas_UI_Screens_PlayWithFriendsCodeScreen__AreAllDigitsFilled(param_1);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41220);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x68) != 0)) {
    /*Atlas.UI.UICodePanelBehaviour$$HideDigit*/ func_0x0151a49c(*(long *)(lVar4 + 0x68),*(undefined4 *)(param_1 + 0x78),0);
    lVar4 = *(long *)(param_1 + 0x80);
    if (lVar4 != 0) {
      uVar5 = /*System.String$$Substring*/ func_0x029cbbf0(lVar4,0,*(int *)(lVar4 + 0x10) + -1,0);
      *(undefined8 *)(param_1 + 0x80) = uVar5;
      *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
      uVar3 = Atlas_UI_Screens_PlayWithFriendsCodeScreen__UpdateNumPadState(param_1);
      if (iVar1 == 0) {
        return uVar3;
      }
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41220);
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x80), lVar4 != 0)) {
        if (*(uint *)(param_1 + 0x8c) < *(uint *)(lVar4 + 0x18)) {
          lVar4 = *(long *)(lVar4 + (long)(int)*(uint *)(param_1 + 0x8c) * 8 + 0x20);
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
          if (lVar4 == 0) {
            uVar3 = 1;
          }
          else {
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar2 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar4);
            uVar3 = (ulong)(uVar2 ^ 1);
          }
          return uVar3;
        }
        goto LAB_014bfbe0;
      }
    }
  }
  func_0x00f78af4();
LAB_014bfbe0:
  uVar5 = func_0x00f78b24();
  func_0x00f78ac0(uVar5,0);
  return (ulong)(extraout_w1 - 0x30U < 10);
}



// ============================================================
// RVA: 0x14bff6c | Atlas.UI.Screens.PlayWithFriendsCodeScreen.SetNumPadButtonsEnabled
// ============================================================

/* WARNING: Possible PIC construction at 0x014bffec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bfff0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_PlayWithFriendsCodeScreen__SetNumPadButtonsEnabled
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                long param_5,ulong param_6,ulong param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long extraout_x1;
  undefined8 uVar6;
  undefined *puVar7;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  uVar6 = 0x3eb4000;
  plVar3 = (long *)0x3d41220;
  if ((bRam0000000003eb4b0f & 1) == 0) {
    func_0x00f78a20(0x3d41220);
    bRam0000000003eb4b0f = 1;
  }
  uVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_5,uRam0000000003d41220);
  if ((uVar1 == 0) || (param_5 = *(long *)(uVar1 + 0x80), param_5 == 0)) {
LAB_014c001c:
    puVar7 = &Atlas_UI_Screens_PlayWithFriendsCodeScreen__SetButtonEnabled;
    func_0x00f78af4();
    lVar5 = extraout_x1;
  }
  else {
    if ((int)*(ulong *)(param_5 + 0x18) < 1) {
      return uVar1;
    }
    uVar6 = 0;
    plVar3 = (long *)(param_5 + 0x20);
    if ((*(ulong *)(param_5 + 0x18) & 0xffffffff) == 0) {
      uVar2 = func_0x00f78b24();
      func_0x00f78ac0(uVar2,0);
      goto LAB_014c001c;
    }
    lVar5 = *plVar3;
    puVar7 = (undefined *)0x14bfff0;
    param_7 = param_6;
  }
  plStack_60 = plVar3;
  uStack_58 = uVar6;
  lStack_50 = param_5;
  uStack_48 = param_6;
  puStack_40 = &stack0xfffffffffffffff0;
  puStack_38 = puVar7;
  if ((bRam0000000003eb4b10 & 1) == 0) {
    func_0x00f78a20(0x3d535f0);
    func_0x00f78a20(0x3d53590);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b10 = 1;
  }
  if (lVar5 != 0) {
    /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar5,param_7,0);
    if ((((*(long *)(lVar5 + 0xd8) != 0) &&
         (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar5 + 0xd8),0), lVar5 != 0)) &&
        (lVar5 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar5,0,0), lVar5 != 0)) &&
       (plVar3 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar5,uRam0000000003d53590), plVar3 != (long *)0x0)) {
      plVar4 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar3,uRam0000000003d535f0);
      uStack_70 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
      uStack_6c = param_2;
      uStack_68 = param_3;
      uStack_64 = param_4;
      if ((param_7 & 1) == 0) {
        /*UnityEngine.Color$$.ctor*/ func_0x03222f90(_UNK_033f84b8,_UNK_033f84b8,_UNK_033f84b8,&uStack_70,0);
      }
      (**(code **)(*plVar3 + 0x2a8))(uStack_70,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar4,0,0);
      if ((int)uVar1 != 0) {
        if (plVar4 == (long *)0x0) goto code_r0x014c018c;
        uVar1 = (**(code **)(*plVar4 + 0x2a8))
                          (uStack_70,uStack_6c,uStack_68,uStack_64,plVar4,
                           *(undefined8 *)(*plVar4 + 0x2b0));
      }
      return uVar1;
    }
  }
code_r0x014c018c:
  lVar5 = func_0x00f78af4();
  return (ulong)(*(int *)(lVar5 + 0x78) == 0);
}



// ============================================================
// RVA: 0x14c0020 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.SetButtonEnabled
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_PlayWithFriendsCodeScreen__SetButtonEnabled
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined8 param_5,long param_6,ulong param_7)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000003eb4b10 & 1) == 0) {
    func_0x00f78a20(0x3d535f0);
    func_0x00f78a20(0x3d53590);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4b10 = 1;
  }
  if (param_6 != 0) {
    /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(param_6,param_7,0);
    if ((((*(long *)(param_6 + 0xd8) != 0) &&
         (lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_6 + 0xd8),0), lVar1 != 0)) &&
        (lVar1 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar1,0,0), lVar1 != 0)) &&
       (plVar2 = (long *)/*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar1,uRam0000000003d53590), plVar2 != (long *)0x0)) {
      plVar3 = (long *)/*UnityEngine.Component$$GetComponentInChildren<Toggle>*/ func_0x018390e0(plVar2,uRam0000000003d535f0);
      uStack_40 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
      uStack_3c = param_2;
      uStack_38 = param_3;
      uStack_34 = param_4;
      if ((param_7 & 1) == 0) {
        /*UnityEngine.Color$$.ctor*/ func_0x03222f90(_UNK_033f84b8,_UNK_033f84b8,_UNK_033f84b8,&uStack_40,0);
      }
      (**(code **)(*plVar2 + 0x2a8))(uStack_40,plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar3,0,0);
      if ((int)uVar4 != 0) {
        if (plVar3 == (long *)0x0) goto LAB_014c018c;
        uVar4 = (**(code **)(*plVar3 + 0x2a8))
                          (uStack_40,uStack_3c,uStack_38,uStack_34,plVar3,
                           *(undefined8 *)(*plVar3 + 0x2b0));
      }
      return uVar4;
    }
  }
LAB_014c018c:
  lVar1 = func_0x00f78af4();
  return (ulong)(*(int *)(lVar1 + 0x78) == 0);
}



// ============================================================
// RVA: 0x14c0190 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.AreNoDigitsFilled
// ============================================================

bool Atlas_UI_Screens_PlayWithFriendsCodeScreen__AreNoDigitsFilled(long param_1)

{
  return *(int *)(param_1 + 0x78) == 0;
}



// ============================================================
// RVA: 0x14c01a0 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.OnPartyInvite
// ============================================================

void Atlas_UI_Screens_PlayWithFriendsCodeScreen__OnPartyInvite
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4b13 & 1) == 0) {
    func_0x00f78a20(0x3d41230);
    bRam0000000003eb4b13 = 1;
  }
  Atlas_UI_Screens_PlayWithFriendsCodeScreen__TryCode(param_1,param_2,0);
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41230);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) {
    if ((bRam0000000003eb5a20 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0,0);
      bRam0000000003eb5a20 = 1;
    }
    *(undefined8 *)(lVar1 + 0x20) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    return;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4b14 & 1) == 0) {
    func_0x00f78a20(0x3d2c878);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4b14 = 1;
  }
  *(undefined8 *)(lVar1 + 0x80) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c878 + 0x18) + 0xc0) + 0x38))();
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
// RVA: 0x14c0220 | Atlas.UI.Screens.PlayWithFriendsCodeScreen..ctor
// ============================================================

void Atlas_UI_Screens_PlayWithFriendsCodeScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4b14 & 1) == 0) {
    func_0x00f78a20(0x3d2c878);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4b14 = 1;
  }
  *(undefined8 *)(param_1 + 0x80) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c878 + 0x18) + 0xc0) + 0x38))();
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



