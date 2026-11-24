// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SingleplayerChapterScreen

// ============================================================
// RVA: 0x14f7c28 | Atlas.UI.Screens.SingleplayerChapterScreen.OnBeforeEnter
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_SingleplayerChapterScreen__OnBeforeEnter(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  int aiStack_a0 [4];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if ((bRam0000000003eb4cb1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d2dbf8);
    func_0x00f78a20(0x3d2dc78);
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57268);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5d0f0);
    func_0x00f78a20(0x3d5d0f8);
    func_0x00f78a20(0x3d5d100);
    func_0x00f78a20(0x3d5d108);
    func_0x00f78a20(0x3d24a80);
    func_0x00f78a20(0x3d642f0);
    func_0x00f78a20(0x3d28ed8);
    func_0x00f78a20(0x3d412f8);
    func_0x00f78a20(0x3d41300);
    func_0x00f78a20(0x3d41308);
    func_0x00f78a20(0x3d25740);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4cb1 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  aiStack_a0[2] = 0;
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x78) != 0)) {
    /*Atlas.UI.SlantFillBar$$Init*/ func_0x014fc998(*(long *)(lVar5 + 0x78),0);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
    if (lVar5 != 0) {
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar5 + 0x50);
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
      if (lVar5 != 0) {
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar5 + 0x20);
        lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41300);
        if (lVar5 != 0) {
          *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar5 + 0x40);
          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
          if (lVar5 != 0) {
            *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar5 + 0xb0);
            if (*(long *)(param_1 + 0x78) != 0) {
              lVar10 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
              lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41300);
              if ((((lVar5 != 0) && (lVar10 != 0)) &&
                  (lVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,*(undefined8 *)(lVar5 + 0x10),uRam0000000003d57268
                                          ), lVar5 != 0)) && (*(long *)(param_1 + 0x78) != 0)) {
                lVar10 = /*Atlas.Definitions.AtlasDefinitions$$GetIPDefinitionForChapter*/ func_0x014687d4(*(long *)(param_1 + 0x78),*(undefined8 *)(lVar5 + 0x18),0);
                lVar11 = *(long *)(param_1 + 0x78);
                lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41300);
                if ((lVar6 != 0) && (lVar11 != 0)) {
                  lVar6 = /*Atlas.Definitions.AtlasDefinitions$$GetFirstCampaignWithChapter*/ func_0x01468068(lVar11,*(undefined8 *)(lVar6 + 0x10),0);
                  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
                  if ((lVar11 != 0) &&
                     ((*(long *)(lVar11 + 0x90) != 0 &&
                      (lVar11 = *(long *)(*(long *)(lVar11 + 0x90) + 0x20), lVar11 != 0)))) {
                    /*Atlas.Audio.MusicManager$$PlayFrontEndMusic*/ func_0x0149d1c8(lVar11,lVar6,0);
                    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
                    if ((lVar11 != 0) && (lVar6 != 0)) {
                      lVar12 = *(long *)(lVar11 + 0x68);
                      uVar13 = *(undefined8 *)(lVar6 + 0x18);
                      uVar14 = *(undefined8 *)(param_1 + 0x78);
                      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
                      if (((lVar11 != 0) && (*(long *)(lVar11 + 0x48) != 0)) &&
                         (uVar7 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(), lVar12 != 0)) {
                        /*Atlas.Stats.AchievementManager$$UpdateCampaignChallengesCompleted*/ func_0x01447ff4(lVar12,uVar13,uVar14,uVar7,0);
                        lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
                        if (((lVar11 != 0) && (*(long *)(lVar6 + 0x90) != 0)) &&
                           (*(long *)(lVar11 + 0xb8) != 0)) {
                          /*Atlas.UI.TopBarManager$$SetNextTitle*/ func_0x0150bdd4(*(long *)(lVar11 + 0xb8),*(undefined8 *)(lVar6 + 0x30),
                                          *(undefined8 *)(*(long *)(lVar6 + 0x90) + 0x18),0);
                          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
                          if (iVar2 == 0) {
LAB_014f8000:
                            if (*(long *)(param_1 + 0x70) != 0) {
                              uVar3 = /*Atlas.Stats.UnlockManager$$GetChallengesCompletedCountForChapter*/ func_0x015208b8(*(long *)(param_1 + 0x70),lVar5,0);
                              *(undefined4 *)(param_1 + 0xa8) = uVar3;
                              if (*(long *)(param_1 + 0x70) != 0) {
                                iVar2 = /*Atlas.Stats.UnlockManager$$GetSeenCompletedChallengesCountForChapter*/ func_0x01520a38(*(long *)(param_1 + 0x70),lVar5,0);
                                *(int *)(param_1 + 0xac) = iVar2;
                                if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
                                   (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
                                  func_0x00f78ad0();
                                }
                                iVar16 = *(int *)(*(long *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xb8) + 0x10);
                                lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
                                if ((lVar10 != 0) && (*(long *)(lVar10 + 0x78) != 0)) {
                                  /*Atlas.UI.SlantFillBar$$SetProgress*/ func_0x014fcd88((float)iVar2 / (float)iVar16,
                                                  *(long *)(lVar10 + 0x78),0);
                                  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
                                  if ((lVar10 != 0) && (*(long *)(lVar10 + 0x78) != 0)) {
                                    /*Atlas.UI.SlantFillBar$$ClearThresholdEvents*/ func_0x014fcf48(*(long *)(lVar10 + 0x78),0);
                                    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
                                    if (lVar10 != 0) {
                                      lVar10 = *(long *)(lVar10 + 0x78);
                                      uVar13 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
                                      /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(uVar13,param_1,uRam0000000003d5d0f8,0);
                                      if (lVar10 != 0) {
                                        /*Atlas.UI.SlantFillBar$$AddThresholdEvent*/ func_0x014fce8c(_UNK_033f85ac,lVar10,uVar13,0);
                                        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
                                        if (lVar10 != 0) {
                                          lVar10 = *(long *)(lVar10 + 0x78);
                                          uVar13 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
                                          /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(uVar13,param_1,uRam0000000003d5d100,0);
                                          if (lVar10 != 0) {
                                            /*Atlas.UI.SlantFillBar$$AddThresholdEvent*/ func_0x014fce8c(_UNK_033f85b0,lVar10,uVar13,0);
                                            lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
                                            if (lVar10 != 0) {
                                              lVar10 = *(long *)(lVar10 + 0x78);
                                              uVar13 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
                                              /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(uVar13,param_1,uRam0000000003d5d108,0)
                                              ;
                                              if (lVar10 != 0) {
                                                /*Atlas.UI.SlantFillBar$$AddThresholdEvent*/ func_0x014fce8c(_UNK_033f85b4,lVar10,uVar13,0);
                                                lVar10 = *(long *)(lVar5 + 0x50);
                                                if (((lVar10 != 0) &&
                                                    (lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,
                                                  uRam0000000003d412f8), lVar6 != 0)) &&
                                                  (*(long *)(lVar6 + 0x70) != 0)) {
                                                  uVar4 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(*(undefined4 *)
                                                                           (lVar10 + 0x18),
                                                                          *(undefined4 *)
                                                                           (*(long *)(lVar6 + 0x70)
                                                                           + 0x18),0);
                                                  if (0 < (int)uVar4) {
                                                    uVar15 = 0;
                                                    do {
                                                      lVar6 = func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerChapterScreen.<>c__DisplayClass22_0_TypeInfo*/ uRam0000000003d28ed8);
                                                      /*Atlas.UI.Screens.SingleplayerChapterScreen.<>c__DisplayClass22_0$$.ctor*/ func_0x0156a4e0(lVar6,0);
                                                      if (lVar6 == 0) goto LAB_014f8828;
                                                      *(long *)(lVar6 + 0x20) = param_1;
                                                      if (*(uint *)(lVar10 + 0x18) <= uVar15)
                                                      goto LAB_014f85e0;
                                                      lVar11 = *(long *)(lVar10 + (long)(int)uVar15
                                                                                  * 0x10 + 0x28);
                                                      if (lVar11 == 0) goto LAB_014f8828;
                                                      lVar12 = /*Atlas.Definitions.EventDefinition$$get_MapDefinitionRef*/ func_0x0158369c(lVar11,0);
                                                      lVar12 = *(long *)(lVar12 + 8);
                                                      *(uint *)(lVar6 + 0x18) = uVar15;
                                                      *(undefined8 *)(lVar6 + 0x10) =
                                                           *(undefined8 *)(lVar11 + 0x18);
                                                      if (*(long *)(param_1 + 0x70) == 0)
                                                      goto LAB_014f8828;
                                                      uVar13 = /*Atlas.Stats.UnlockManager$$HaveAllChallengesBeenCompletedForEvent*/ func_0x015204a4(*(long *)(param_1 +
                                                                                        0x70),
                                                                               *(undefined8 *)
                                                                                (lVar11 + 0x18),0);
                                                      if (*(long *)(param_1 + 0x70) == 0)
                                                      goto LAB_014f8828;
                                                      uVar14 = /*Atlas.Stats.UnlockManager$$GetChallengesCompletedCountForEvent*/ func_0x015201f4(*(long *)(param_1 +
                                                                                        0x70),
                                                                               *(undefined8 *)
                                                                                (lVar11 + 0x18),0);
                                                      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,
                                                  uRam0000000003d412f8);
                                                  if ((lVar11 == 0) ||
                                                     (lVar11 = *(long *)(lVar11 + 0x70), lVar11 == 0
                                                     )) goto LAB_014f8828;
                                                  if (*(uint *)(lVar11 + 0x18) <= uVar15)
                                                  goto LAB_014f85e0;
                                                  lVar11 = *(long *)(lVar11 + (long)(int)uVar15 * 8
                                                                    + 0x20);
                                                  if (((lVar11 == 0) || (lVar12 == 0)) ||
                                                     ((*(long *)(lVar12 + 0x70) == 0 ||
                                                      (*(long *)(lVar11 + 0x20) == 0))))
                                                  goto LAB_014f8828;
                                                  /*Core.UI2.UIIrregularElement$$set_sprite*/ func_0x02f83e84(*(long *)(lVar11 + 0x20),
                                                                  *(undefined8 *)
                                                                   (*(long *)(lVar12 + 0x70) + 0x18)
                                                                  ,0);
                                                  if ((*(long *)(lVar12 + 0x78) == 0) ||
                                                     (*(long *)(lVar11 + 0x28) == 0))
                                                  goto LAB_014f8828;
                                                  /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar11 + 0x28),
                                                                  *(undefined8 *)
                                                                   (*(long *)(lVar12 + 0x78) + 0x18)
                                                                  ,0);
                                                  lVar12 = *(long *)(lVar11 + 0x18);
                                                  uVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                                  /*System.Action$$.ctor*/ func_0x02924c80(uVar7,lVar6,uRam0000000003d642f0,0
                                                                 );
                                                  if (lVar12 == 0) goto LAB_014f8828;
                                                  /*Atlas.UI.UIAtlasButton$$add_SelectedOrPressed*/ func_0x01514578(lVar12,uVar7,0);
                                                  if ((int)uVar13 != 0) {
                                                    plVar8 = *(long **)(lVar11 + 0x38);
                                                    if (plVar8 == (long *)0x0) goto LAB_014f8828;
                                                    (**(code **)(*plVar8 + 0x2a8))
                                                              (*(undefined4 *)(lVar11 + 0x48),
                                                               *(undefined4 *)(lVar11 + 0x4c),
                                                               *(undefined4 *)(lVar11 + 0x50),
                                                               *(undefined4 *)(lVar11 + 0x54),plVar8
                                                               ,*(undefined8 *)(*plVar8 + 0x2b0));
                                                  }
                                                  if (*(long *)(lVar11 + 0x40) == 0)
                                                  goto LAB_014f8828;
                                                  /*Atlas.UI.UIFlagsBehaviour$$Set*/ func_0x0151aba8(*(long *)(lVar11 + 0x40),uVar14,3,
                                                                  0);
                                                  if (*(long *)(lVar11 + 0x30) == 0)
                                                  goto LAB_014f8828;
                                                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar11 + 0x30),uVar13,0)
                                                  ;
                                                  uVar15 = uVar15 + 1;
                                                  } while (uVar4 != uVar15);
                                                  }
                                                  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,
                                                  uRam0000000003d412f8);
                                                  if ((lVar10 != 0) &&
                                                     (lVar10 = *(long *)(lVar10 + 0x88), lVar10 != 0
                                                     )) {
                                                    if (*(int *)(lVar10 + 0x18) == 0) {
LAB_014f85e0:
                                                      uVar13 = func_0x00f78b24();
                                                      func_0x00f78ac0(uVar13,0);
LAB_014f85ec:
                                                      func_0x00f78af4();
                                                      goto code_r0x014f8838;
                                                    }
                                                    /*Atlas.UI.Screens.SingleplayerChapterScreen$$SetReward*/ func_0x014f889c(param_1,*(undefined8 *)
                                                                             (lVar10 + 0x20),
                                                                    *(undefined8 *)(lVar5 + 0x58));
                                                    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,
                                                  uRam0000000003d412f8);
                                                  if ((lVar10 != 0) &&
                                                     (lVar10 = *(long *)(lVar10 + 0x88), lVar10 != 0
                                                     )) {
                                                    if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0
                                                       ) goto LAB_014f85e0;
                                                    /*Atlas.UI.Screens.SingleplayerChapterScreen$$SetReward*/ func_0x014f889c(param_1,*(undefined8 *)
                                                                             (lVar10 + 0x28),
                                                                    *(undefined8 *)(lVar5 + 0x60));
                                                    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,
                                                  uRam0000000003d412f8);
                                                  if ((lVar10 != 0) &&
                                                     (lVar10 = *(long *)(lVar10 + 0x88), lVar10 != 0
                                                     )) {
                                                    if (*(uint *)(lVar10 + 0x18) < 3)
                                                    goto LAB_014f85e0;
                                                    /*Atlas.UI.Screens.SingleplayerChapterScreen$$SetReward*/ func_0x014f889c(param_1,*(undefined8 *)
                                                                             (lVar10 + 0x30),
                                                                    *(undefined8 *)(lVar5 + 0x68));
                                                    if (*(long *)(param_1 + 0x78) != 0) {
                                                      lVar5 = *(long *)(*(long *)(param_1 + 0x78) +
                                                                       0x10);
                                                      if (((*(ushort *)
                                                             (/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0x132) >> 10 &
                                                           1) != 0) &&
                                                         (*(int *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xe0) == 0
                                                         )) {
                                                        func_0x00f78ad0();
                                                      }
                                                      if (lVar5 != 0) {
                                                        uVar13 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,*(undefined8
                                                                                         *)(*(long *
                                                  )(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8) + 0x10),
                                                  uRam0000000003d57280);
                                                  *(undefined8 *)(param_1 + 0xa0) = uVar13;
                                                  if ((*(long *)(param_1 + 0x78) != 0) &&
                                                     (lVar5 = *(long *)(*(long *)(param_1 + 0x78) +
                                                                       0x10), lVar5 != 0)) {
                                                    lVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,**(undefined8 **)
                                                                                    (
                                                  /*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8),uRam0000000003d57280)
                                                  ;
                                                  if ((*(long *)(param_1 + 0x78) != 0) &&
                                                     (lVar10 = *(long *)(*(long *)(param_1 + 0x78) +
                                                                        0x10), lVar10 != 0)) {
                                                    lVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,*(undefined8 *)
                                                                                     (*(long *)(
                                                  /*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8) + 8),
                                                  uRam0000000003d57280);
                                                  if (*(long *)(param_1 + 0x98) != 0) {
                                                    iVar2 = 
                                                  Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                                            (*(long *)(param_1 + 0x98),lVar5,0);
                                                  if (iVar2 == 0) {
                                                    if (*(long *)(param_1 + 0x98) != 0) {
                                                      iVar2 = 
                                                  Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                                            (*(long *)(param_1 + 0x98),lVar10,0);
                                                  if (iVar2 != 0) {
                                                    if ((lVar10 == 0) ||
                                                       (*(long *)(lVar10 + 0x58) == 0))
                                                    goto LAB_014f8828;
                                                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_b8,
                                                                    *(long *)(lVar10 + 0x58),
                                                                    uRam0000000003d3dc70);
                                                    uStack_88 = uStack_b0;
                                                    uStack_90 = uStack_b8;
                                                    uStack_80 = uStack_a8;
                                                    while (uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_90,
                                                                                                                                                                      
                                                  uRam0000000003d337d0), uVar13 = uStack_80,
                                                  iVar2 = aiStack_a0[2], (uVar9 & 1) != 0) {
                                                    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,
                                                  uRam0000000003d41308);
                                                  if (lVar5 == 0) goto code_r0x014f882c;
                                                  if (*(long *)(lVar5 + 0x98) == 0) {
                                                    func_0x00f78af4();
                                                    goto code_r0x014f8838;
                                                  }
                                                  /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar5 + 0x98),uVar13,
                                                                  uRam0000000003d3e188);
                                                  }
                                                  iVar16 = aiStack_a0[2] + 1;
                                                  aiStack_a0[0] = 0x460;
                                                  aiStack_a0[2] = iVar16;
                                                  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_90,uRam0000000003d337c8);
                                                  if ((iVar16 != 0) && (aiStack_a0[iVar2] == 0x460))
                                                  {
                                                    aiStack_a0[2] = iVar2;
                                                  }
                                                  }
code_r0x014f8718:
                                                  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,
                                                  uRam0000000003d41308);
                                                  if (lVar5 != 0) {
                                                    lVar5 = *(long *)(lVar5 + 0xb8);
                                                    uVar13 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
                                                    /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(uVar13,param_1,
                                                                    uRam0000000003d5d0f0,0);
                                                    if (lVar5 != 0) {
                                                      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar5,6,uVar13,0);
                                                      if ((*(int *)(param_1 + 0xa8) ==
                                                           *(int *)(param_1 + 0xac)) &&
                                                         (iVar2 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$AreAnyFTUEStageUnlockedButNotComplete*/ func_0x014f9588(param_1),
                                                         iVar2 == 0)) {
                                                        lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,
                                                  uRam0000000003d41308);
                                                  if ((lVar5 != 0) && (*(long *)(lVar5 + 0xb8) != 0)
                                                     ) {
                                                    /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar5 + 0xb8),0,1,1,0)
                                                    ;
                                                    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,
                                                  uRam0000000003d41308);
                                                  if ((lVar5 != 0) && (*(long *)(lVar5 + 0xb8) != 0)
                                                     ) {
                                                    /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar5 + 0xb8),6,1,1,0)
                                                    ;
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,
                                                  uRam0000000003d41308);
                                                  if ((lVar5 != 0) && (*(long *)(lVar5 + 0xb8) != 0)
                                                     ) {
                                                    /*Atlas.UI.TopBarManager$$RequestHideBackAndNextAndPanels*/ func_0x0150bbcc(*(long *)(lVar5 + 0xb8),0);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else if ((lVar5 != 0) &&
                                                          (*(long *)(lVar5 + 0x58) != 0)) {
                                                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_b8,
                                                                    *(long *)(lVar5 + 0x58),
                                                                    uRam0000000003d3dc70);
                                                    uStack_88 = uStack_b0;
                                                    uStack_90 = uStack_b8;
                                                    uStack_80 = uStack_a8;
                                                    while (uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_90,
                                                                                                                                                                      
                                                  uRam0000000003d337d0), uVar13 = uStack_80,
                                                  (uVar9 & 1) != 0) {
                                                    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,
                                                  uRam0000000003d41308);
                                                  if (lVar5 == 0) goto LAB_014f85ec;
                                                  if (*(long *)(lVar5 + 0x98) == 0) {
                                                    func_0x00f78af4();
                                                    goto code_r0x014f8838;
                                                  }
                                                  /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar5 + 0x98),uVar13,
                                                                  uRam0000000003d3e188);
                                                  }
                                                  aiStack_a0[0] = 0x460;
                                                  aiStack_a0[2] = 1;
                                                  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_90,uRam0000000003d337c8);
                                                  goto code_r0x014f8718;
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
                                    }
                                  }
                                }
                              }
                            }
                          }
                          else {
                            lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
                            if ((((lVar6 != 0) && (lVar10 != 0)) && (*(long *)(lVar10 + 0x40) != 0))
                               && (*(long *)(lVar6 + 0x68) != 0)) {
                              /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar6 + 0x68),
                                              *(undefined8 *)(*(long *)(lVar10 + 0x40) + 0x18),0);
                              lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
                              if (((lVar6 != 0) && (*(long *)(lVar10 + 0x50) != 0)) &&
                                 (*(long *)(lVar6 + 0xb8) != 0)) {
                                /*Core.UI2.UIIrregularElement$$set_sprite*/ func_0x02f83e84(*(long *)(lVar6 + 0xb8),
                                                *(undefined8 *)(*(long *)(lVar10 + 0x50) + 0x18),0);
                                goto LAB_014f8000;
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
LAB_014f8828:
  func_0x00f78af4();
code_r0x014f882c:
  func_0x00f78af4();
code_r0x014f8838:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x14f883c);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14f889c | Atlas.UI.Screens.SingleplayerChapterScreen.SetReward
// ============================================================

ulong Atlas_UI_Screens_SingleplayerChapterScreen__SetReward
                (long param_1,long *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *extraout_x1;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined4 uStack_b4;
  
  plVar9 = param_2;
  uVar15 = param_3;
  if ((bRam0000000003eb4cb9 & 1) == 0) {
    func_0x00f78a20(0x3d1fd98);
    bRam0000000003eb4cb9 = 1;
    plVar9 = extraout_x1;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = plVar9;
  auVar17 = auVar2 << 0x40;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar15 = 0;
    auVar17 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(param_1 + 0x70),param_3);
    if (auVar17._0_4_ == 0) {
      uVar4 = 0;
    }
    else {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar17._8_8_;
      auVar17 = auVar3 << 0x40;
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_014f8994;
      uVar15 = 0;
      auVar17 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(param_1 + 0x70),param_3);
      uVar4 = auVar17._0_4_ ^ 1;
    }
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), auVar1._8_8_ = 0,
       auVar1._0_8_ = auVar17._8_8_, auVar17 = auVar1 << 0x40, lVar8 == 0)) goto LAB_014f8994;
    uVar15 = 0;
    plVar9 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinitionById*/ func_0x01645ed0(lVar8,param_3);
    if (plVar9 != (long *)0x0) {
      if (*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) <= *(byte *)(*plVar9 + 300)) {
        plVar14 = plVar9;
        if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98 + 300) * 8 +
                     -8) != /*Atlas.Definitions.AssetDefinition_TypeInfo*/ lRam0000000003d1fd98) {
          plVar14 = (long *)0x0;
        }
        auVar17._8_8_ = plVar14;
        auVar17._0_8_ = plVar9;
        if (param_2 == (long *)0x0) goto LAB_014f8994;
        goto code_r0x014f8958;
      }
    }
    plVar14 = (long *)0x0;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = plVar9;
    if (param_2 != (long *)0x0) {
code_r0x014f8958:
                    /* WARNING: Could not recover jumptable at 0x014f8978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)(*param_2 + 0x178))
                         (param_2,plVar14,uVar4,0,*(undefined8 *)(*param_2 + 0x180));
      return uVar10;
    }
  }
LAB_014f8994:
  lVar8 = func_0x00f78af4(auVar17._0_8_,auVar17._8_8_);
  if (*(int *)(lVar8 + 0xa8) != *(int *)(lVar8 + 0xac)) {
    return 1;
  }
  if ((bRam0000000003eb4cb8 & 1) == 0) {
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d24a80);
    bRam0000000003eb4cb8 = 1;
  }
  if (*(long *)(lVar8 + 0x78) != 0) {
    lVar16 = *(long *)(*(long *)(lVar8 + 0x78) + 0x10);
    if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar16 != 0) {
      uVar15 = uRam0000000003d57280;
      uVar11 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar16,**(undefined8 **)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8));
      if ((*(long *)(lVar8 + 0x78) != 0) &&
         (lVar16 = *(long *)(*(long *)(lVar8 + 0x78) + 0x10), lVar16 != 0)) {
        uVar15 = uRam0000000003d57280;
        uVar12 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar16,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8) + 8))
        ;
        if ((*(long *)(lVar8 + 0x78) != 0) &&
           (lVar16 = *(long *)(*(long *)(lVar8 + 0x78) + 0x10), lVar16 != 0)) {
          uVar15 = uRam0000000003d57280;
          uVar13 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar16,*(undefined8 *)
                                           (*(long *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8) + 0x18));
          if (*(long *)(lVar8 + 0x98) != 0) {
            uVar15 = 0;
            uVar4 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                              (*(long *)(lVar8 + 0x98),*(undefined8 *)(lVar8 + 0xa0));
            if (*(long *)(lVar8 + 0x98) != 0) {
              uVar15 = 0;
              uVar5 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                (*(long *)(lVar8 + 0x98),uVar11);
              if (*(long *)(lVar8 + 0x98) != 0) {
                uVar15 = 0;
                uVar6 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                  (*(long *)(lVar8 + 0x98),uVar12);
                if (*(long *)(lVar8 + 0x98) != 0) {
                  uVar7 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                    (*(long *)(lVar8 + 0x98),uVar13,0);
                  return (ulong)(uVar4 | uVar5 | uVar6 | uVar7);
                }
              }
            }
          }
        }
      }
    }
  }
  auVar17 = func_0x00f78af4();
  uStack_b4 = (undefined4)uVar15;
  if ((bRam0000000003eb4cbc & 1) == 0) {
    func_0x00f78a20(0x3d79070);
    bRam0000000003eb4cbc = 1;
  }
  /*Atlas.UI.Screens.SingleplayerChapterScreen$$SelectEvent*/ func_0x014f978c(auVar17._0_8_,auVar17._8_8_,uVar15);
  uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_b4,0);
  uVar15 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('event:/UI/Front_End/Prologue_')*/ uRam0000000003d79070,uVar15,0);
  uVar10 = /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(uVar15,0);
  return uVar10;
}



// ============================================================
// RVA: 0x14f8998 | Atlas.UI.Screens.SingleplayerChapterScreen.ShouldDisableInput
// ============================================================

ulong Atlas_UI_Screens_SingleplayerChapterScreen__ShouldDisableInput
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined4 uStack_84;
  
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xac)) {
    return 1;
  }
  if ((bRam0000000003eb4cb8 & 1) == 0) {
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d24a80);
    bRam0000000003eb4cb8 = 1;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar9 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
    if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar9 != 0) {
      param_3 = uRam0000000003d57280;
      uVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar9,**(undefined8 **)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8));
      if ((*(long *)(param_1 + 0x78) != 0) &&
         (lVar9 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar9 != 0)) {
        param_3 = uRam0000000003d57280;
        uVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar9,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8) + 8));
        if ((*(long *)(param_1 + 0x78) != 0) &&
           (lVar9 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar9 != 0)) {
          param_3 = uRam0000000003d57280;
          uVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar9,*(undefined8 *)
                                         (*(long *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8) + 0x18));
          if (*(long *)(param_1 + 0x98) != 0) {
            param_3 = 0;
            uVar1 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                              (*(long *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0));
            if (*(long *)(param_1 + 0x98) != 0) {
              param_3 = 0;
              uVar2 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                (*(long *)(param_1 + 0x98),uVar5);
              if (*(long *)(param_1 + 0x98) != 0) {
                param_3 = 0;
                uVar3 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                  (*(long *)(param_1 + 0x98),uVar6);
                if (*(long *)(param_1 + 0x98) != 0) {
                  uVar4 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                    (*(long *)(param_1 + 0x98),uVar7,0);
                  return (ulong)(uVar1 | uVar2 | uVar3 | uVar4);
                }
              }
            }
          }
        }
      }
    }
  }
  auVar10 = func_0x00f78af4();
  uStack_84 = (undefined4)param_3;
  if ((bRam0000000003eb4cbc & 1) == 0) {
    func_0x00f78a20(0x3d79070);
    bRam0000000003eb4cbc = 1;
  }
  /*Atlas.UI.Screens.SingleplayerChapterScreen$$SelectEvent*/ func_0x014f978c(auVar10._0_8_,auVar10._8_8_,param_3);
  uVar5 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_84,0);
  uVar5 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('event:/UI/Front_End/Prologue_')*/ uRam0000000003d79070,uVar5,0);
  uVar8 = /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(uVar5,0);
  return uVar8;
}



// ============================================================
// RVA: 0x14f89b0 | Atlas.UI.Screens.SingleplayerChapterScreen.OnStartEnter
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
/* WARNING: Possible PIC construction at 0x015945d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014f8e3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015945d4) */
/* WARNING: Removing unreachable block (ram,0x015945f8) */
/* WARNING: Removing unreachable block (ram,0x015945d8) */
/* WARNING: Removing unreachable block (ram,0x01594608) */
/* WARNING: Removing unreachable block (ram,0x01594638) */
/* WARNING: Removing unreachable block (ram,0x01594670) */
/* WARNING: Removing unreachable block (ram,0x01594674) */
/* WARNING: Removing unreachable block (ram,0x0159468c) */
/* WARNING: Removing unreachable block (ram,0x01594694) */
/* WARNING: Removing unreachable block (ram,0x015946b0) */
/* WARNING: Removing unreachable block (ram,0x015946bc) */
/* WARNING: Removing unreachable block (ram,0x015946c8) */
/* WARNING: Removing unreachable block (ram,0x015946d0) */
/* WARNING: Removing unreachable block (ram,0x015946d4) */
/* WARNING: Removing unreachable block (ram,0x015946e8) */
/* WARNING: Removing unreachable block (ram,0x015946ec) */
/* WARNING: Removing unreachable block (ram,0x01594700) */
/* WARNING: Removing unreachable block (ram,0x01594714) */
/* WARNING: Removing unreachable block (ram,0x01594720) */
/* WARNING: Removing unreachable block (ram,0x0159472c) */
/* WARNING: Removing unreachable block (ram,0x0159473c) */
/* WARNING: Removing unreachable block (ram,0x01594748) */
/* WARNING: Removing unreachable block (ram,0x01594754) */
/* WARNING: Removing unreachable block (ram,0x01594764) */
/* WARNING: Removing unreachable block (ram,0x015947cc) */
/* WARNING: Removing unreachable block (ram,0x015947d8) */
/* WARNING: Removing unreachable block (ram,0x01594770) */
/* WARNING: Removing unreachable block (ram,0x0159477c) */
/* WARNING: Removing unreachable block (ram,0x01594788) */
/* WARNING: Removing unreachable block (ram,0x01594794) */
/* WARNING: Removing unreachable block (ram,0x015947b0) */
/* WARNING: Removing unreachable block (ram,0x015947b4) */
/* WARNING: Removing unreachable block (ram,0x015945e0) */
/* WARNING: Removing unreachable block (ram,0x01595b44) */
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
/* WARNING: Removing unreachable block (ram,0x014f8e40) */
/* WARNING: Removing unreachable block (ram,0x014f8e50) */
/* WARNING: Removing unreachable block (ram,0x014f8e58) */
/* WARNING: Removing unreachable block (ram,0x014f8e7c) */
/* WARNING: Removing unreachable block (ram,0x014f8e84) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */

long * Atlas_UI_Screens_SingleplayerChapterScreen__OnStartEnter(long *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long *extraout_x1;
  undefined1 uVar17;
  undefined8 *puVar18;
  long ****pppplVar19;
  long *plVar20;
  undefined8 uVar21;
  long lVar22;
  long unaff_x22;
  undefined1 *puVar23;
  long ****pppplVar24;
  undefined *puVar25;
  long *plVar26;
  float extraout_s0;
  float extraout_s0_00;
  float fVar27;
  undefined1 auVar28 [12];
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long ***ppplStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long **pplStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  long *plStack_58;
  long ****pppplStack_50;
  long *plStack_48;
  
  pppplVar24 = (long ****)&stack0xfffffffffffffff0;
  pppplVar19 = (long ****)0x3eb4000;
  if ((bRam0000000003eb4cb2 & 1) == 0) {
    func_0x00f78a20(0x3d2c960);
    func_0x00f78a20(0x3d412f8);
    func_0x00f78a20(0x3d41300);
    bRam0000000003eb4cb2 = 1;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41300);
  uVar14 = 0x3d41300;
  if (lVar9 == 0) {
LAB_014f8aec:
    func_0x00f78af4();
  }
  else {
    uVar11 = 0x3d412f8;
    uVar21 = 0x3d412f8;
    pppplVar19 = (long ****)(ulong)*(uint *)(lVar9 + 0x18);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
    uVar14 = uVar11;
    if ((lVar9 == 0) || (uVar14 = uVar21, *(long *)(lVar9 + 0x70) == 0)) goto LAB_014f8aec;
    pppplVar19 = (long ****)
                 /*UnityEngine.Mathf$$Clamp*/ func_0x0323d32c(pppplVar19,0,*(undefined4 *)(*(long *)(lVar9 + 0x70) + 0x18),0);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
    if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x70), lVar9 == 0)) goto LAB_014f8aec;
    uVar8 = (uint)pppplVar19;
    uVar14 = uVar11;
    if (uVar8 < *(uint *)(lVar9 + 0x18)) {
      unaff_x22 = (long)(int)uVar8;
      lVar9 = *(long *)(lVar9 + unaff_x22 * 8 + 0x20);
      uVar14 = uVar21;
      if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x18), lVar9 != 0)) {
        /*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(lVar9,0,0,0,0);
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
        lVar9 = lRam0000000003d2c960;
        if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x70), lVar10 != 0)) {
          uVar14 = uVar11;
          if (uVar8 < *(uint *)(lVar10 + 0x18)) {
            plVar16 = *(long **)(lVar10 + unaff_x22 * 8 + 0x20);
            if ((bRam0000000003eb70f7 & 1) == 0) {
              func_0x00f78a20(0x3d23990);
              bRam0000000003eb70f7 = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uStack_70 = 0x3eb7000;
            lStack_68 = lVar9;
            plStack_48 = (long *)0x1cb55a4;
            plStack_60 = plVar16;
            plStack_58 = param_1;
            pppplStack_50 = (long ****)&stack0xfffffffffffffff0;
            if ((bRam0000000003ec027b & 1) == 0) {
              func_0x00f78a20(0x3d23990,0,0);
              bRam0000000003ec027b = 1;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar5 = (long *)&stack0xffffffffffffffc0;
            plVar15 = plStack_58;
            plVar20 = plStack_60;
            lVar9 = lStack_68;
            uVar14 = uStack_70;
            pppplVar24 = pppplStack_50;
            plVar26 = plStack_48;
            goto code_r0x03248740;
          }
          goto LAB_014f8af0;
        }
      }
      goto LAB_014f8aec;
    }
  }
LAB_014f8af0:
  uVar11 = func_0x00f78b24();
  lVar9 = func_0x00f78ac0(uVar11,0);
  pppplStack_50 = pppplVar19;
  plStack_48 = param_1;
  if ((bRam0000000003eb4cb3 & 1) == 0) {
    func_0x00f78a20(0x3d41308);
    bRam0000000003eb4cb3 = 1;
  }
  if ((*(int *)(lVar9 + 0xa8) == *(int *)(lVar9 + 0xac)) &&
     (plVar16 = (long *)/*Atlas.UI.Screens.SingleplayerChapterScreen$$AreAnyFTUEStageUnlockedButNotComplete*/ func_0x014f9588(lVar9), (int)plVar16 == 0)) {
    return plVar16;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d41308);
  if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0xa8), lVar10 == 0)) {
    uVar11 = func_0x00f78af4();
    uStack_70 = 0x3eb4000;
    plStack_58 = (long *)&Atlas_UI_Screens_SingleplayerChapterScreen__OnBeforeExit;
    lStack_80 = unaff_x22;
    uStack_78 = uVar14;
    lStack_68 = lVar9;
    plStack_60 = (long *)&stack0xffffffffffffffc0;
    if ((bRam0000000003eb4cb4 & 1) == 0) {
      func_0x00f78a20(0x3d412f8);
      bRam0000000003eb4cb4 = 1;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d412f8);
    if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x78), lVar9 != 0)) {
      if ((bRam0000000003eb4ccf & 1) == 0) {
        func_0x00f78a20(0x3d3d9f0,0);
        bRam0000000003eb4ccf = 1;
      }
      plVar16 = *(long **)(lVar9 + 0xc0);
      if (plVar16 == (long *)0x0) {
        return (long *)0x0;
      }
      plVar15 = plVar16;
      if (0 < (int)plVar16[3]) {
        plVar15 = (long *)/*System.Array$$Clear*/ func_0x02920164(plVar16[2],0,(int)plVar16[3],0);
        *(undefined4 *)(plVar16 + 3) = 0;
      }
      *(int *)((long)plVar16 + 0x1c) = *(int *)((long)plVar16 + 0x1c) + 1;
      return plVar15;
    }
    lVar9 = func_0x00f78af4();
    uStack_a8 = 0x3d412f8;
    uStack_a0 = 0x3eb4000;
    puStack_88 = &Atlas_UI_Screens_SingleplayerChapterScreen__OnAfterExit;
    uVar21 = 0x3eb4000;
    uVar14 = 0x3d41308;
    lStack_b0 = unaff_x22;
    uStack_98 = uVar11;
    pplStack_90 = &plStack_60;
    if ((bRam0000000003eb4cb5 & 1) == 0) {
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d41308);
      bRam0000000003eb4cb5 = 1;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d41308);
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0xb8) != 0)) {
      uVar21 = 0x3d20000;
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar10 + 0xb8),6,0,0);
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar16 = (long *)/*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(lVar9,0,0);
      if (*(char *)(lVar9 + 0xb0) != '\0') {
        return plVar16;
      }
      lVar10 = *(long *)(lVar9 + 0x80);
      if (lVar10 != 0) {
        if ((bRam0000000003eb516d & 1) == 0) {
          func_0x00f78a20(0x3d21270,0);
          bRam0000000003eb516d = 1;
        }
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)(lVar10 + 0xc0) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
        uVar14 = Atlas_FrontEnd_FrontEndScene__get_CurrentIP(lVar10);
        if ((bRam0000000003eb516e & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb516e = 1;
        }
        uStack_d0 = Atlas_FrontEnd_FrontEndScene__GetIPDefinitionFromIDOrGeneric(lVar10,uVar14);
        plVar16 = *(long **)(lVar10 + 200);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar5 = &lStack_e0;
        lStack_e0 = 0x3d23990;
        puStack_b8 = (undefined *)0x15945d4;
        plStack_d8 = plVar16;
        lStack_c8 = lVar10;
        ppplStack_c0 = &pplStack_90;
        if ((bRam0000000003ec021a & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ec021a = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar15 = plVar16;
        plVar20 = (long *)0x3ec0000;
        lVar9 = 0x3d23990;
        uVar14 = 0x3d23990;
        pppplVar24 = &ppplStack_c0;
        plVar26 = (long *)&UNK_03236658;
code_r0x03248740:
        *(undefined8 *)((long)plVar5 + -0x30) = uVar14;
        *(long *)((long)plVar5 + -0x28) = lVar9;
        *(long **)((long)plVar5 + -0x20) = plVar20;
        *(long **)((long)plVar5 + -0x18) = plVar15;
        *(long *****)((long)plVar5 + -0x10) = pppplVar24;
        *(long **)((long)plVar5 + -8) = plVar26;
        if ((bRam0000000003ec021b & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003ec021b = 1;
        }
        if (plVar16 == (long *)0x0) {
          plVar16 = (long *)((long)&MACH_HEADER.magic + 1);
        }
        else {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar8 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(plVar16);
          plVar16 = (long *)(ulong)(uVar8 ^ 1);
        }
        return plVar16;
      }
    }
    plVar15 = (long *)func_0x00f78af4();
    puVar3 = auStack_130;
    plStack_d8 = (long *)0x3d41308;
    puStack_b8 = &Atlas_UI_Screens_SingleplayerChapterScreen__OnUpdate;
    pppplVar24 = &ppplStack_c0;
    pppplVar19 = (long ****)0x3eb4000;
    plVar16 = plVar15;
    lStack_e0 = unaff_x22;
    uStack_d0 = uVar21;
    lStack_c8 = lVar9;
    ppplStack_c0 = &pplStack_90;
    if ((bRam0000000003eb4cb6 & 1) == 0) {
      func_0x00f78a20(0x3d337c8);
      func_0x00f78a20(0x3d337d0);
      func_0x00f78a20(0x3d337d8);
      func_0x00f78a20(0x3d57268);
      func_0x00f78a20(0x3d57280);
      func_0x00f78a20(0x3d3dc70);
      func_0x00f78a20(0x3d3e178);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d5d110);
      func_0x00f78a20(0x3d24a80);
      func_0x00f78a20(0x3d289a8);
      func_0x00f78a20(0x3d412f8);
      func_0x00f78a20(0x3d41300);
      func_0x00f78a20(0x3d41308);
      func_0x00f78a20(0x3d25740);
      plVar16 = (long *)func_0x00f78a20(0x3d257d8);
      bRam0000000003eb4cb6 = 1;
    }
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    if (*(int *)((long)plVar15 + 0x4c) != 2) {
      return plVar16;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(plVar15,uRam0000000003d41308);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x98) == 0)) goto code_r0x014f92c0;
    plVar16 = (long *)/*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar9 + 0x98),uRam0000000003d3e178);
    if (((ulong)plVar16 & 1) != 0) {
      return plVar16;
    }
    if (*(char *)((long)plVar15 + 0x91) == '\0') {
      if ((char)plVar15[0x12] != '\0') {
        return plVar16;
      }
      plVar16 = (long *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(plVar15,uRam0000000003d412f8);
      if ((plVar16 == (long *)0x0) || (plVar16[0xf] == 0)) goto code_r0x014f92c0;
      if (*(char *)(plVar16[0xf] + 0x90) == '\0') {
        fVar27 = *(float *)((long)plVar15 + 0xb4);
        plVar16 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
        fVar27 = fVar27 + extraout_s0;
        *(float *)((long)plVar15 + 0xb4) = fVar27;
        if (0.5 <= fVar27) {
          fVar27 = *(float *)(plVar15 + 0x17);
          plVar16 = (long *)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
          *(float *)(plVar15 + 0x17) = fVar27 + extraout_s0_00;
          lVar9 = plVar15[0x15];
          if ((int)lVar9 == *(int *)((long)plVar15 + 0xac)) {
            if (fVar27 + extraout_s0_00 <= 0.5) {
              return plVar16;
            }
            if (plVar15[0x13] != 0) {
              plVar16 = (long *)Atlas_FrontEnd_FTUEManager__IsStageUnlocked
                                          (plVar15[0x13],plVar15[0x14],0);
              if ((int)plVar16 == 0) goto code_r0x014f9298;
              if (plVar15[0xf] != 0) {
                lVar10 = *(long *)(plVar15[0xf] + 0x10);
                lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(plVar15,uRam0000000003d41300);
                if ((lVar9 != 0) && (lVar10 != 0)) {
                  lVar9 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,*(undefined8 *)(lVar9 + 0x10),uRam0000000003d57268)
                  ;
                  *(undefined1 *)(plVar15 + 0x12) = 1;
                  lVar22 = plVar15[0xf];
                  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(plVar15,uRam0000000003d41300);
                  if ((lVar10 != 0) &&
                     ((lVar22 != 0 &&
                      (lVar10 = /*Atlas.Definitions.AtlasDefinitions$$GetFirstCampaignWithChapter*/ func_0x01468068(lVar22,*(undefined8 *)(lVar10 + 0x10),0), lVar9 != 0
                      )))) {
                    plVar16 = (long *)/*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f9320(plVar15,*(undefined8 *)(lVar9 + 0x58));
                    if (((ulong)plVar16 & 1) != 0) {
                      return plVar16;
                    }
                    if (plVar15[0xe] != 0) {
                      iVar6 = /*Atlas.Stats.UnlockManager$$HasNextCampaignBeenUnlockedAndNotSeenAndIsValidContent*/ func_0x015223e4(plVar15[0xe],lVar10,0);
                      if (iVar6 != 0) {
                        lVar22 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
                        Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar22,0);
                        if (lVar22 == 0) goto code_r0x014f92c0;
                        *(long *)(lVar22 + 0x38) = plVar15[0x10];
                        *(undefined8 *)(lVar22 + 0x30) = *(undefined8 *)(lVar9 + 0x60);
                        lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(plVar15,uRam0000000003d41300);
                        if (lVar12 == 0) goto code_r0x014f92c0;
                        *(undefined8 *)(lVar22 + 0x10) = *(undefined8 *)(lVar12 + 0x38);
                        plVar16 = (long *)/*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f93b8(plVar15,lVar22);
                        if (((ulong)plVar16 & 1) != 0) {
                          return plVar16;
                        }
                      }
                      plVar16 = (long *)/*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f9320(plVar15,*(undefined8 *)(lVar9 + 0x60));
                      if (((ulong)plVar16 & 1) != 0) {
                        return plVar16;
                      }
                      if (((plVar15[0xe] != 0) &&
                          (iVar6 = /*Atlas.Stats.UnlockManager$$GetChallengesCompletedCountForCampaign*/ func_0x0151efcc(plVar15[0xe],lVar10,0), lVar10 != 0)) &&
                         (plVar15[0xf] != 0)) {
                        iVar7 = /*Atlas.Definitions.AtlasDefinitions$$GetChallengeCountForCampaign*/ func_0x01468d24(plVar15[0xf],*(undefined8 *)(lVar10 + 0x18),0);
                        lVar10 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
                        Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar10,0);
                        if (lVar10 != 0) {
                          *(long *)(lVar10 + 0x38) = plVar15[0x10];
                          *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)(lVar9 + 0x68);
                          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(plVar15,uRam0000000003d41300);
                          if (iVar6 < iVar7) {
                            if (lVar9 == 0) goto code_r0x014f92c0;
                            puVar18 = (undefined8 *)(lVar9 + 0x28);
                          }
                          else {
                            if (lVar9 == 0) goto code_r0x014f92c0;
                            puVar18 = (undefined8 *)(lVar9 + 0x30);
                          }
                          *(undefined8 *)(lVar10 + 0x10) = *puVar18;
                          plVar16 = (long *)/*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f93b8(plVar15,lVar10);
                          if (((ulong)plVar16 & 1) != 0) {
                            return plVar16;
                          }
                          if (plVar15[0xf] != 0) {
                            lVar9 = *(long *)(plVar15[0xf] + 0x10);
                            if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            if (lVar9 != 0) {
                              lVar9 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar9,*(undefined8 *)
                                                             (*(long *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8)
                                                             + 0x18),uRam0000000003d57280);
                              if (plVar15[0x13] != 0) {
                                plVar16 = (long *)Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                                            (plVar15[0x13],lVar9,0);
                                if ((int)plVar16 != 0) {
                                  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x58) == 0))
                                  goto code_r0x014f92c0;
                                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_128,*(long *)(lVar9 + 0x58),
                                                  uRam0000000003d3dc70);
                                  while (uVar13 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_128,uRam0000000003d337d0),
                                        uVar14 = uStack_118, (uVar13 & 1) != 0) {
                                    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(plVar15,uRam0000000003d41308);
                                    if (lVar9 == 0) goto code_r0x014f92c4;
                                    if (*(long *)(lVar9 + 0x98) == 0) {
                                      func_0x00f78af4();
                                      goto code_r0x014f92d0;
                                    }
                                    /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar9 + 0x98),uVar14,
                                                    uRam0000000003d3e188);
                                  }
                                  plVar16 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_128,uRam0000000003d337c8
                                                                   );
                                }
code_r0x014f9298:
                                *(undefined1 *)((long)plVar15 + 0x91) = 1;
                                return plVar16;
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
          else {
            if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar6 = *(int *)(*(long *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xb8) + 0x10);
            lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(plVar15,uRam0000000003d412f8);
            if (lVar10 != 0) {
              lVar10 = *(long *)(lVar10 + 0x78);
              uVar14 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
              /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(uVar14,plVar15,uRam0000000003d5d110,0);
              if (lVar10 != 0) {
                /*Atlas.UI.SlantFillBar$$SetTargetProgress*/ func_0x014fce4c((float)(int)lVar9 / (float)iVar6,lVar10,uVar14,0);
                lVar10 = plVar15[0xe];
                lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(plVar15,uRam0000000003d41300);
                if ((lVar9 != 0) && (lVar10 != 0)) {
                  plVar16 = (long *)/*Atlas.Stats.UnlockManager$$SetAllCompletedChallengesAsSeenForChapter*/ func_0x01520654(lVar10,*(undefined8 *)(lVar9 + 0x10),0);
                  *(undefined4 *)(plVar15 + 0x15) = *(undefined4 *)((long)plVar15 + 0xac);
                  *(undefined4 *)(plVar15 + 0x17) = 0;
                  return plVar16;
                }
              }
            }
          }
code_r0x014f92c0:
          func_0x00f78af4();
code_r0x014f92c4:
          func_0x00f78af4();
code_r0x014f92d0:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x14f92d4);
          (*pcVar2)();
        }
      }
      return plVar16;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(plVar15,uRam0000000003d41308);
    if ((lVar9 == 0) || (lVar10 = *(long *)(lVar9 + 0xa8), lVar10 == 0)) goto code_r0x014f92c0;
    uVar8 = *(uint *)(plVar15 + 9);
    uVar17 = 0;
    puVar25 = &UNK_014f8e40;
  }
  else {
    uVar8 = *(uint *)(lVar9 + 0x48);
    uVar17 = 1;
    puVar25 = &Atlas_UI_Screens_SingleplayerChapterScreen__OnAfterEnter;
    puVar3 = &stack0xffffffffffffffd0;
    plVar15 = plStack_48;
    pppplVar19 = pppplStack_50;
  }
  *(long *****)(puVar3 + -0x10) = pppplVar24;
  *(undefined **)(puVar3 + -8) = puVar25;
  lVar9 = *(long *)(lVar10 + 0x38);
  if (lVar9 == 0) {
    func_0x00f78af4();
code_r0x0164b040:
    uVar11 = func_0x00f78b24();
    auVar28 = func_0x00f78ac0(uVar11,0);
    lVar10 = auVar28._0_8_;
    *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x18) = &Core_Input_InputManager__SetScreenLayerInputExclusive;
    lVar9 = *(long *)(lVar10 + 0x38);
    if (lVar9 == 0) {
      func_0x00f78af4();
    }
    else if (auVar28._8_4_ < *(uint *)(lVar9 + 0x18)) {
      *(undefined1 *)(lVar9 + (long)(int)auVar28._8_4_ * 0x10 + 0x29) = uVar17;
      puVar4 = puVar3 + -0x10;
      puVar23 = *(undefined1 **)(puVar3 + -0x20);
      puVar25 = *(undefined **)(puVar3 + -0x18);
      goto Core_Input_InputManager__ReselectTopmostActiveLayer;
    }
    uVar11 = func_0x00f78b24();
    func_0x00f78ac0(uVar11,0);
    puVar4 = puVar3 + -0x50;
    *(long *)(puVar3 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x48) = uVar14;
    *(long *****)(puVar3 + -0x40) = pppplVar19;
    *(long **)(puVar3 + -0x38) = plVar15;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x20;
    *(undefined **)(puVar3 + -0x28) = &Core_Input_InputManager__SetMultiTouchEnabled;
    puVar23 = puVar3 + -0x30;
    pppplVar19 = (long ****)0x3eb5000;
    uVar14 = 0x3d216c0;
    if ((bRam0000000003eb5795 & 1) == 0) {
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d22880);
      bRam0000000003eb5795 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar9 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (lVar9 == 0) {
code_r0x0164b158:
      func_0x00f78af4();
    }
    else {
      plVar16 = *(long **)(lVar9 + 0x20);
      if (plVar16 == (long *)0x0) {
code_r0x0164b130:
        if (plVar16 != (long *)0x0) {
          *(uint *)((long)plVar16 + 0xbc) = (uint)(((ulong)extraout_x1 & 1) == 0);
          return plVar16;
        }
        goto code_r0x0164b158;
      }
      if ((*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) <= *(byte *)(*plVar16 + 300)) &&
         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) * 8 +
                   -8) == /*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880)) goto code_r0x0164b130;
    }
    puVar25 = &Core_Input_InputManager__SetActiveLayer;
    auVar28 = func_0x00f78e5c();
    lVar10 = auVar28._0_8_;
    *(int *)(lVar10 + 0x40) = auVar28._8_4_;
    plVar15 = extraout_x1;
  }
  else {
    if (*(uint *)(lVar9 + 0x18) <= uVar8) goto code_r0x0164b040;
    *(undefined1 *)(lVar9 + (long)(int)uVar8 * 0x10 + 0x28) = uVar17;
    puVar23 = *(undefined1 **)(puVar3 + -0x10);
    puVar25 = *(undefined **)(puVar3 + -8);
    puVar4 = puVar3;
  }
Core_Input_InputManager__ReselectTopmostActiveLayer:
  *(long *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = uVar14;
  *(long *****)(puVar4 + -0x20) = pppplVar19;
  *(long **)(puVar4 + -0x18) = plVar15;
  *(undefined1 **)(puVar4 + -0x10) = puVar23;
  *(undefined **)(puVar4 + -8) = puVar25;
  if ((bRam0000000003eb5797 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d232c0);
    bRam0000000003eb5797 = 1;
  }
  uVar1 = *(undefined4 *)(lVar10 + 0x40);
  uVar14 = /*Core.Input.InputManager$$FindTopmostExclusiveLayer*/ func_0x0164a6a0(lVar10);
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar16 = (long *)/*System.Math$$Max*/ func_0x02b01f40(uVar1,uVar14,0);
  uVar8 = (uint)plVar16;
  if (uVar8 == 0xffffffff) {
    return plVar16;
  }
  lVar9 = *(long *)(lVar10 + 0x38);
  if (lVar9 != 0) {
    if (*(uint *)(lVar9 + 0x18) <= uVar8) goto code_r0x0164a30c;
    if (*(char *)(lVar9 + (long)(int)uVar8 * 0x10 + 0x28) != '\0') {
      return plVar16;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
      *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar9 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      lVar10 = *(long *)(lVar10 + 0x38);
      if (lVar10 != 0) {
        if (*(uint *)(lVar10 + 0x18) <= uVar8) goto code_r0x0164a30c;
        if (lVar9 != 0) {
          plVar16 = (long *)/*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar9,*(undefined8 *)
                                                   (lVar10 + (long)(int)uVar8 * 0x10 + 0x20),0);
          if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
            *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
            return plVar16;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x0164a30c:
  uVar14 = func_0x00f78b24();
  plVar16 = (long *)func_0x00f78ac0(uVar14,0);
  return plVar16;
}



// ============================================================
// RVA: 0x14f8afc | Atlas.UI.Screens.SingleplayerChapterScreen.OnAfterEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x014f8e3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014f8e40) */
/* WARNING: Removing unreachable block (ram,0x014f8e50) */
/* WARNING: Removing unreachable block (ram,0x014f8e58) */
/* WARNING: Removing unreachable block (ram,0x014f8e7c) */
/* WARNING: Removing unreachable block (ram,0x014f8e84) */

void Atlas_UI_Screens_SingleplayerChapterScreen__OnAfterEnter(long param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong extraout_x1;
  undefined1 uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar15;
  long lVar16;
  undefined8 unaff_x22;
  long lVar17;
  undefined1 ****unaff_x29;
  undefined1 *puVar18;
  undefined *unaff_x30;
  undefined *puVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 ***pppuStack_90;
  code *pcStack_88;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb4cb3 & 1) == 0) {
    func_0x00f78a20(0x3d41308);
    bRam0000000003eb4cb3 = 1;
  }
  if ((*(int *)(param_1 + 0xa8) == *(int *)(param_1 + 0xac)) &&
     (iVar5 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$AreAnyFTUEStageUnlockedButNotComplete*/ func_0x014f9588(param_1), iVar5 == 0)) {
    return;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
  if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0xa8), lVar8 == 0)) {
    uVar10 = func_0x00f78af4();
    puStack_28 = &Atlas_UI_Screens_SingleplayerChapterScreen__OnBeforeExit;
    puStack_30 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4cb4 & 1) == 0) {
      func_0x00f78a20(0x3d412f8);
      bRam0000000003eb4cb4 = 1;
    }
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar10,uRam0000000003d412f8);
    if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x78), lVar8 != 0)) {
      if ((bRam0000000003eb4ccf & 1) == 0) {
        func_0x00f78a20(0x3d3d9f0,0);
        bRam0000000003eb4ccf = 1;
      }
      lVar8 = *(long *)(lVar8 + 0xc0);
      if (lVar8 != 0) {
        if (0 < *(int *)(lVar8 + 0x18)) {
          /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar8 + 0x10),0,*(int *)(lVar8 + 0x18),0);
          *(undefined4 *)(lVar8 + 0x18) = 0;
        }
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        return;
      }
      return;
    }
    lVar8 = func_0x00f78af4();
    puStack_58 = &Atlas_UI_Screens_SingleplayerChapterScreen__OnAfterExit;
    unaff_x21 = 0x3d41308;
    ppuStack_60 = &puStack_30;
    if ((bRam0000000003eb4cb5 & 1) == 0) {
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d41308);
      bRam0000000003eb4cb5 = 1;
    }
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d41308);
    if ((lVar14 != 0) && (*(long *)(lVar14 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar14 + 0xb8),6,0,0);
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(lVar8,0,0);
      if (*(char *)(lVar8 + 0xb0) != '\0') {
        return;
      }
      lVar8 = *(long *)(lVar8 + 0x80);
      if (lVar8 != 0) {
        if ((bRam0000000003eb516d & 1) == 0) {
          func_0x00f78a20(0x3d21270,0);
          bRam0000000003eb516d = 1;
        }
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)(lVar8 + 0xc0) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
        uVar10 = Atlas_FrontEnd_FrontEndScene__get_CurrentIP(lVar8);
        if ((bRam0000000003eb516e & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb516e = 1;
        }
        uVar10 = Atlas_FrontEnd_FrontEndScene__GetIPDefinitionFromIDOrGeneric(lVar8,uVar10);
        uVar15 = *(undefined8 *)(lVar8 + 200);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar15,0);
        if (iVar5 == 0) {
          return;
        }
        plVar11 = *(long **)(lVar8 + 200);
        if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar11 + 0x198))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x1a0));
          return;
        }
        auVar23 = func_0x00f78af4();
        plVar11 = auVar23._8_8_;
        lVar8 = auVar23._0_8_;
        pcStack_88 = Atlas_FrontEnd_FrontEndScene__OnPedestalLoadedSuccessfully;
        pppuStack_90 = &ppuStack_60;
        if ((bRam0000000003eb5170 & 1) == 0) {
          func_0x00f78a20(0x3d578b8);
          func_0x00f78a20(0x3d21b60);
          func_0x00f78a20(0x3d5b098);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb5170 = 1;
        }
        if ((plVar11 != (long *)0x0) && (*plVar11 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
LAB_015947d8:
          func_0x00f78e5c(plVar11);
          return;
        }
        lVar14 = *(long *)(lVar8 + 0x90);
        if (lVar14 != 0) {
          uVar7 = 0;
          while( true ) {
            if (*(int *)(lVar14 + 0x18) <= (int)uVar7) {
              return;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar14 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar11,uRam0000000003d5b098);
            lVar16 = *(long *)(lVar8 + 0x90);
            if ((lVar16 == 0) || (lVar14 == 0)) break;
            uVar10 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar14,uRam0000000003d578b8);
            if (*(uint *)(lVar16 + 0x18) <= uVar7) {
LAB_015947cc:
              uVar10 = func_0x00f78b24();
              func_0x00f78ac0(uVar10,0);
              goto LAB_015947d8;
            }
            lVar17 = (long)(int)uVar7;
            *(undefined8 *)(lVar16 + lVar17 * 0x40 + 0x40) = uVar10;
            lVar14 = *(long *)(lVar8 + 0x90);
            if (lVar14 == 0) break;
            if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_015947cc;
            lVar14 = *(long *)(lVar14 + lVar17 * 0x40 + 0x40);
            if (lVar14 == 0) break;
            Atlas_FrontEnd_PedestalBehaviour__Init(lVar14,0);
            lVar14 = *(long *)(lVar8 + 0x90);
            if (lVar14 == 0) break;
            if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_015947cc;
            lVar14 = *(long *)(lVar14 + lVar17 * 0x40 + 0x40);
            if (lVar14 == 0) break;
            uVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar14,0);
            lVar14 = *(long *)(lVar8 + 0x90);
            if (lVar14 == 0) break;
            if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_015947cc;
            lVar14 = *(long *)(lVar14 + lVar17 * 0x40 + 0x20);
            if (((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x18), lVar14 == 0)) ||
               (lVar14 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar14,0), lVar14 == 0)) break;
            uVar7 = uVar7 + 1;
            /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar14,uVar10,0,0);
            lVar14 = *(long *)(lVar8 + 0x90);
            if (lVar14 == 0) break;
          }
        }
        func_0x00f78af4();
        return;
      }
    }
    unaff_x19 = func_0x00f78af4();
    puVar3 = auStack_100;
    pcStack_88 = (code *)&Atlas_UI_Screens_SingleplayerChapterScreen__OnUpdate;
    unaff_x29 = &pppuStack_90;
    unaff_x20 = 0x3eb4000;
    pppuStack_90 = &ppuStack_60;
    if ((bRam0000000003eb4cb6 & 1) == 0) {
      func_0x00f78a20(0x3d337c8);
      func_0x00f78a20(0x3d337d0);
      func_0x00f78a20(0x3d337d8);
      func_0x00f78a20(0x3d57268);
      func_0x00f78a20(0x3d57280);
      func_0x00f78a20(0x3d3dc70);
      func_0x00f78a20(0x3d3e178);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d5d110);
      func_0x00f78a20(0x3d24a80);
      func_0x00f78a20(0x3d289a8);
      func_0x00f78a20(0x3d412f8);
      func_0x00f78a20(0x3d41300);
      func_0x00f78a20(0x3d41308);
      func_0x00f78a20(0x3d25740);
      func_0x00f78a20(0x3d257d8);
      bRam0000000003eb4cb6 = 1;
    }
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    if (*(int *)(unaff_x19 + 0x4c) != 2) {
      return;
    }
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(unaff_x19,uRam0000000003d41308);
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0x98) == 0)) goto code_r0x014f92c0;
    uVar9 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar8 + 0x98),uRam0000000003d3e178);
    if ((uVar9 & 1) != 0) {
      return;
    }
    if (*(char *)(unaff_x19 + 0x91) == '\0') {
      if (*(char *)(unaff_x19 + 0x90) != '\0') {
        return;
      }
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(unaff_x19,uRam0000000003d412f8);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x78) == 0)) goto code_r0x014f92c0;
      if (*(char *)(*(long *)(lVar8 + 0x78) + 0x90) == '\0') {
        fVar21 = *(float *)(unaff_x19 + 0xb4);
        fVar20 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
        fVar21 = fVar21 + fVar20;
        *(float *)(unaff_x19 + 0xb4) = fVar21;
        if (0.5 <= fVar21) {
          fVar21 = *(float *)(unaff_x19 + 0xb8);
          fVar20 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
          fVar21 = fVar21 + fVar20;
          *(float *)(unaff_x19 + 0xb8) = fVar21;
          iVar5 = *(int *)(unaff_x19 + 0xa8);
          if (iVar5 == *(int *)(unaff_x19 + 0xac)) {
            if (fVar21 <= 0.5) {
              return;
            }
            if (*(long *)(unaff_x19 + 0x98) != 0) {
              iVar5 = Atlas_FrontEnd_FTUEManager__IsStageUnlocked
                                (*(long *)(unaff_x19 + 0x98),*(undefined8 *)(unaff_x19 + 0xa0),0);
              if (iVar5 == 0) goto code_r0x014f9298;
              if (*(long *)(unaff_x19 + 0x78) != 0) {
                lVar14 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x10);
                lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(unaff_x19,uRam0000000003d41300);
                if ((lVar8 != 0) && (lVar14 != 0)) {
                  lVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar14,*(undefined8 *)(lVar8 + 0x10),uRam0000000003d57268)
                  ;
                  *(undefined1 *)(unaff_x19 + 0x90) = 1;
                  lVar16 = *(long *)(unaff_x19 + 0x78);
                  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(unaff_x19,uRam0000000003d41300);
                  if ((lVar14 != 0) &&
                     ((lVar16 != 0 &&
                      (lVar14 = /*Atlas.Definitions.AtlasDefinitions$$GetFirstCampaignWithChapter*/ func_0x01468068(lVar16,*(undefined8 *)(lVar14 + 0x10),0), lVar8 != 0
                      )))) {
                    uVar9 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f9320(unaff_x19,*(undefined8 *)(lVar8 + 0x58));
                    if ((uVar9 & 1) != 0) {
                      return;
                    }
                    if (*(long *)(unaff_x19 + 0x70) != 0) {
                      iVar5 = /*Atlas.Stats.UnlockManager$$HasNextCampaignBeenUnlockedAndNotSeenAndIsValidContent*/ func_0x015223e4(*(long *)(unaff_x19 + 0x70),lVar14,0);
                      if (iVar5 != 0) {
                        lVar16 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
                        Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar16,0);
                        if (lVar16 == 0) goto code_r0x014f92c0;
                        *(undefined8 *)(lVar16 + 0x38) = *(undefined8 *)(unaff_x19 + 0x80);
                        *(undefined8 *)(lVar16 + 0x30) = *(undefined8 *)(lVar8 + 0x60);
                        lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(unaff_x19,uRam0000000003d41300);
                        if (lVar17 == 0) goto code_r0x014f92c0;
                        *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar17 + 0x38);
                        uVar9 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f93b8(unaff_x19,lVar16);
                        if ((uVar9 & 1) != 0) {
                          return;
                        }
                      }
                      uVar9 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f9320(unaff_x19,*(undefined8 *)(lVar8 + 0x60));
                      if ((uVar9 & 1) != 0) {
                        return;
                      }
                      if (((*(long *)(unaff_x19 + 0x70) != 0) &&
                          (iVar5 = /*Atlas.Stats.UnlockManager$$GetChallengesCompletedCountForCampaign*/ func_0x0151efcc(*(long *)(unaff_x19 + 0x70),lVar14,0),
                          lVar14 != 0)) && (*(long *)(unaff_x19 + 0x78) != 0)) {
                        iVar6 = /*Atlas.Definitions.AtlasDefinitions$$GetChallengeCountForCampaign*/ func_0x01468d24(*(long *)(unaff_x19 + 0x78),
                                                *(undefined8 *)(lVar14 + 0x18),0);
                        lVar14 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
                        Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar14,0);
                        if (lVar14 != 0) {
                          *(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)(unaff_x19 + 0x80);
                          *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)(lVar8 + 0x68);
                          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(unaff_x19,uRam0000000003d41300);
                          if (iVar5 < iVar6) {
                            if (lVar8 == 0) goto code_r0x014f92c0;
                            puVar13 = (undefined8 *)(lVar8 + 0x28);
                          }
                          else {
                            if (lVar8 == 0) goto code_r0x014f92c0;
                            puVar13 = (undefined8 *)(lVar8 + 0x30);
                          }
                          *(undefined8 *)(lVar14 + 0x10) = *puVar13;
                          uVar9 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f93b8(unaff_x19,lVar14);
                          if ((uVar9 & 1) != 0) {
                            return;
                          }
                          if (*(long *)(unaff_x19 + 0x78) != 0) {
                            lVar8 = *(long *)(*(long *)(unaff_x19 + 0x78) + 0x10);
                            if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            if (lVar8 != 0) {
                              lVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar8,*(undefined8 *)
                                                             (*(long *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8)
                                                             + 0x18),uRam0000000003d57280);
                              if (*(long *)(unaff_x19 + 0x98) != 0) {
                                iVar5 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                                  (*(long *)(unaff_x19 + 0x98),lVar8,0);
                                if (iVar5 != 0) {
                                  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x58) == 0))
                                  goto code_r0x014f92c0;
                                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_f8,*(long *)(lVar8 + 0x58),
                                                  uRam0000000003d3dc70);
                                  while (uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_f8,uRam0000000003d337d0),
                                        uVar10 = uStack_e8, (uVar9 & 1) != 0) {
                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(unaff_x19,uRam0000000003d41308);
                                    if (lVar8 == 0) goto code_r0x014f92c4;
                                    if (*(long *)(lVar8 + 0x98) == 0) {
                                      func_0x00f78af4();
                                      goto code_r0x014f92d0;
                                    }
                                    /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar8 + 0x98),uVar10,
                                                    uRam0000000003d3e188);
                                  }
                                  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_f8,uRam0000000003d337c8);
                                }
code_r0x014f9298:
                                *(undefined1 *)(unaff_x19 + 0x91) = 1;
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
            }
          }
          else {
            if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar6 = *(int *)(*(long *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xb8) + 0x10);
            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(unaff_x19,uRam0000000003d412f8);
            if (lVar8 != 0) {
              lVar8 = *(long *)(lVar8 + 0x78);
              uVar10 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
              /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(uVar10,unaff_x19,uRam0000000003d5d110,0);
              if (lVar8 != 0) {
                /*Atlas.UI.SlantFillBar$$SetTargetProgress*/ func_0x014fce4c((float)iVar5 / (float)iVar6,lVar8,uVar10,0);
                lVar14 = *(long *)(unaff_x19 + 0x70);
                lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(unaff_x19,uRam0000000003d41300);
                if ((lVar8 != 0) && (lVar14 != 0)) {
                  /*Atlas.Stats.UnlockManager$$SetAllCompletedChallengesAsSeenForChapter*/ func_0x01520654(lVar14,*(undefined8 *)(lVar8 + 0x10),0);
                  *(undefined4 *)(unaff_x19 + 0xa8) = *(undefined4 *)(unaff_x19 + 0xac);
                  *(undefined4 *)(unaff_x19 + 0xb8) = 0;
                  return;
                }
              }
            }
          }
code_r0x014f92c0:
          func_0x00f78af4();
code_r0x014f92c4:
          func_0x00f78af4();
code_r0x014f92d0:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x14f92d4);
          (*pcVar2)();
        }
      }
      return;
    }
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(unaff_x19,uRam0000000003d41308);
    if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0xa8), lVar8 == 0)) goto code_r0x014f92c0;
    uVar7 = *(uint *)(unaff_x19 + 0x48);
    uVar12 = 0;
    unaff_x30 = &UNK_014f8e40;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x48);
    uVar12 = 1;
    puVar3 = (undefined1 *)register0x00000008;
  }
  *(undefined1 *****)(puVar3 + -0x10) = unaff_x29;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  lVar14 = *(long *)(lVar8 + 0x38);
  if (lVar14 == 0) {
    func_0x00f78af4();
code_r0x0164b040:
    uVar10 = func_0x00f78b24();
    auVar22 = func_0x00f78ac0(uVar10,0);
    lVar8 = auVar22._0_8_;
    *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x18) = &Core_Input_InputManager__SetScreenLayerInputExclusive;
    lVar14 = *(long *)(lVar8 + 0x38);
    if (lVar14 == 0) {
      func_0x00f78af4();
    }
    else if (auVar22._8_4_ < *(uint *)(lVar14 + 0x18)) {
      *(undefined1 *)(lVar14 + (long)(int)auVar22._8_4_ * 0x10 + 0x29) = uVar12;
      puVar4 = puVar3 + -0x10;
      puVar18 = *(undefined1 **)(puVar3 + -0x20);
      puVar19 = *(undefined **)(puVar3 + -0x18);
      goto Core_Input_InputManager__ReselectTopmostActiveLayer;
    }
    uVar10 = func_0x00f78b24();
    func_0x00f78ac0(uVar10,0);
    puVar4 = puVar3 + -0x50;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x48) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x20;
    *(ulong *)(puVar3 + -0x38) = unaff_x19;
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
    lVar8 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (lVar8 == 0) {
code_r0x0164b158:
      func_0x00f78af4();
    }
    else {
      plVar11 = *(long **)(lVar8 + 0x20);
      if (plVar11 == (long *)0x0) {
code_r0x0164b130:
        if (plVar11 != (long *)0x0) {
          *(uint *)((long)plVar11 + 0xbc) = (uint)((extraout_x1 & 1) == 0);
          return;
        }
        goto code_r0x0164b158;
      }
      if ((*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) <= *(byte *)(*plVar11 + 300)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) * 8 +
                   -8) == /*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880)) goto code_r0x0164b130;
    }
    puVar19 = &Core_Input_InputManager__SetActiveLayer;
    auVar22 = func_0x00f78e5c();
    lVar8 = auVar22._0_8_;
    *(int *)(lVar8 + 0x40) = auVar22._8_4_;
    unaff_x19 = extraout_x1;
  }
  else {
    if (*(uint *)(lVar14 + 0x18) <= uVar7) goto code_r0x0164b040;
    *(undefined1 *)(lVar14 + (long)(int)uVar7 * 0x10 + 0x28) = uVar12;
    puVar18 = *(undefined1 **)(puVar3 + -0x10);
    puVar19 = *(undefined **)(puVar3 + -8);
    puVar4 = puVar3;
  }
Core_Input_InputManager__ReselectTopmostActiveLayer:
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
  *(ulong *)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = puVar18;
  *(undefined **)(puVar4 + -8) = puVar19;
  if ((bRam0000000003eb5797 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d232c0);
    bRam0000000003eb5797 = 1;
  }
  uVar1 = *(undefined4 *)(lVar8 + 0x40);
  uVar10 = /*Core.Input.InputManager$$FindTopmostExclusiveLayer*/ func_0x0164a6a0(lVar8);
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*System.Math$$Max*/ func_0x02b01f40(uVar1,uVar10,0);
  if (uVar7 == 0xffffffff) {
    return;
  }
  lVar14 = *(long *)(lVar8 + 0x38);
  if (lVar14 != 0) {
    if (*(uint *)(lVar14 + 0x18) <= uVar7) goto code_r0x0164a30c;
    if (*(char *)(lVar14 + (long)(int)uVar7 * 0x10 + 0x28) != '\0') {
      return;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
      *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar14 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      lVar8 = *(long *)(lVar8 + 0x38);
      if (lVar8 != 0) {
        if (*(uint *)(lVar8 + 0x18) <= uVar7) goto code_r0x0164a30c;
        if (lVar14 != 0) {
          /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar14,*(undefined8 *)(lVar8 + (long)(int)uVar7 * 0x10 + 0x20),0);
          if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
            *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
            return;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x0164a30c:
  uVar10 = func_0x00f78b24();
  func_0x00f78ac0(uVar10,0);
  return;
}



// ============================================================
// RVA: 0x14f8b8c | Atlas.UI.Screens.SingleplayerChapterScreen.OnBeforeExit
// ============================================================

void Atlas_UI_Screens_SingleplayerChapterScreen__OnBeforeExit(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  if ((bRam0000000003eb4cb4 & 1) == 0) {
    func_0x00f78a20(0x3d412f8);
    bRam0000000003eb4cb4 = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x78), lVar4 != 0)) {
    if ((bRam0000000003eb4ccf & 1) == 0) {
      func_0x00f78a20(0x3d3d9f0,0);
      bRam0000000003eb4ccf = 1;
    }
    lVar4 = *(long *)(lVar4 + 0xc0);
    if (lVar4 != 0) {
      if (0 < *(int *)(lVar4 + 0x18)) {
        /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar4 + 0x10),0,*(int *)(lVar4 + 0x18),0);
        *(undefined4 *)(lVar4 + 0x18) = 0;
      }
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      return;
    }
    return;
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4cb5 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d41308);
    bRam0000000003eb4cb5 = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41308);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0xb8) != 0)) {
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar5 + 0xb8),6,0,0);
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(lVar4,0,0);
    if (*(char *)(lVar4 + 0xb0) != '\0') {
      return;
    }
    lVar4 = *(long *)(lVar4 + 0x80);
    if (lVar4 != 0) {
      if ((bRam0000000003eb516d & 1) == 0) {
        func_0x00f78a20(0x3d21270,0);
        bRam0000000003eb516d = 1;
      }
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)(lVar4 + 0xc0) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
      uVar8 = Atlas_FrontEnd_FrontEndScene__get_CurrentIP(lVar4);
      if ((bRam0000000003eb516e & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb516e = 1;
      }
      uVar8 = Atlas_FrontEnd_FrontEndScene__GetIPDefinitionFromIDOrGeneric(lVar4,uVar8);
      uVar11 = *(undefined8 *)(lVar4 + 200);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar11,0);
      if (iVar3 == 0) {
        return;
      }
      plVar9 = *(long **)(lVar4 + 200);
      if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x198))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x1a0));
        return;
      }
      auVar17 = func_0x00f78af4();
      plVar9 = auVar17._8_8_;
      lVar4 = auVar17._0_8_;
      if ((bRam0000000003eb5170 & 1) == 0) {
        func_0x00f78a20(0x3d578b8);
        func_0x00f78a20(0x3d21b60);
        func_0x00f78a20(0x3d5b098);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb5170 = 1;
      }
      if ((plVar9 != (long *)0x0) && (*plVar9 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
LAB_015947d8:
        func_0x00f78e5c(plVar9);
        return;
      }
      lVar5 = *(long *)(lVar4 + 0x90);
      if (lVar5 != 0) {
        uVar13 = 0;
        while( true ) {
          if (*(int *)(lVar5 + 0x18) <= (int)uVar13) {
            return;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar5 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar9,uRam0000000003d5b098);
          lVar12 = *(long *)(lVar4 + 0x90);
          if ((lVar12 == 0) || (lVar5 == 0)) break;
          uVar8 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar5,uRam0000000003d578b8);
          if (*(uint *)(lVar12 + 0x18) <= uVar13) {
LAB_015947cc:
            uVar8 = func_0x00f78b24();
            func_0x00f78ac0(uVar8,0);
            goto LAB_015947d8;
          }
          lVar14 = (long)(int)uVar13;
          *(undefined8 *)(lVar12 + lVar14 * 0x40 + 0x40) = uVar8;
          lVar5 = *(long *)(lVar4 + 0x90);
          if (lVar5 == 0) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar13) goto LAB_015947cc;
          lVar5 = *(long *)(lVar5 + lVar14 * 0x40 + 0x40);
          if (lVar5 == 0) break;
          Atlas_FrontEnd_PedestalBehaviour__Init(lVar5,0);
          lVar5 = *(long *)(lVar4 + 0x90);
          if (lVar5 == 0) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar13) goto LAB_015947cc;
          lVar5 = *(long *)(lVar5 + lVar14 * 0x40 + 0x40);
          if (lVar5 == 0) break;
          uVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
          lVar5 = *(long *)(lVar4 + 0x90);
          if (lVar5 == 0) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar13) goto LAB_015947cc;
          lVar5 = *(long *)(lVar5 + lVar14 * 0x40 + 0x20);
          if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0)) ||
             (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0), lVar5 == 0)) break;
          uVar13 = uVar13 + 1;
          /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar5,uVar8,0,0);
          lVar5 = *(long *)(lVar4 + 0x90);
          if (lVar5 == 0) break;
        }
      }
      func_0x00f78af4();
      return;
    }
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4cb6 & 1) == 0) {
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57268);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e178);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d5d110);
    func_0x00f78a20(0x3d24a80);
    func_0x00f78a20(0x3d289a8);
    func_0x00f78a20(0x3d412f8);
    func_0x00f78a20(0x3d41300);
    func_0x00f78a20(0x3d41308);
    func_0x00f78a20(0x3d25740);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4cb6 = 1;
  }
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  if (*(int *)(lVar4 + 0x4c) == 2) {
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41308);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x98) == 0)) goto code_r0x014f92c0;
    uVar6 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar5 + 0x98),uRam0000000003d3e178);
    if ((uVar6 & 1) != 0) {
      return;
    }
    if (*(char *)(lVar4 + 0x91) != '\0') {
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41308);
      if ((lVar5 == 0) || (*(long *)(lVar5 + 0xa8) == 0)) goto code_r0x014f92c0;
      /*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(lVar5 + 0xa8),*(undefined4 *)(lVar4 + 0x48),0,0);
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41308);
      if ((lVar5 == 0) || (*(long *)(lVar5 + 0xb8) == 0)) goto code_r0x014f92c0;
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar5 + 0xb8),6,1,1,0);
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41308);
      if ((lVar5 == 0) || (*(long *)(lVar5 + 0xb8) == 0)) goto code_r0x014f92c0;
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar5 + 0xb8),0,1,1,0);
      *(undefined1 *)(lVar4 + 0x91) = 0;
    }
    if (*(char *)(lVar4 + 0x90) == '\0') {
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d412f8);
      if ((lVar5 == 0) || (*(long *)(lVar5 + 0x78) == 0)) goto code_r0x014f92c0;
      if (*(char *)(*(long *)(lVar5 + 0x78) + 0x90) == '\0') {
        fVar16 = *(float *)(lVar4 + 0xb4);
        fVar15 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
        fVar16 = fVar16 + fVar15;
        *(float *)(lVar4 + 0xb4) = fVar16;
        if (0.5 <= fVar16) {
          fVar16 = *(float *)(lVar4 + 0xb8);
          fVar15 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
          fVar16 = fVar16 + fVar15;
          *(float *)(lVar4 + 0xb8) = fVar16;
          iVar3 = *(int *)(lVar4 + 0xa8);
          if (iVar3 == *(int *)(lVar4 + 0xac)) {
            if (fVar16 <= 0.5) {
              return;
            }
            if (*(long *)(lVar4 + 0x98) != 0) {
              iVar3 = Atlas_FrontEnd_FTUEManager__IsStageUnlocked
                                (*(long *)(lVar4 + 0x98),*(undefined8 *)(lVar4 + 0xa0),0);
              if (iVar3 == 0) goto code_r0x014f9298;
              if (*(long *)(lVar4 + 0x78) != 0) {
                lVar12 = *(long *)(*(long *)(lVar4 + 0x78) + 0x10);
                lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41300);
                if ((lVar5 != 0) && (lVar12 != 0)) {
                  lVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar12,*(undefined8 *)(lVar5 + 0x10),uRam0000000003d57268)
                  ;
                  *(undefined1 *)(lVar4 + 0x90) = 1;
                  lVar14 = *(long *)(lVar4 + 0x78);
                  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41300);
                  if ((lVar12 != 0) &&
                     ((lVar14 != 0 &&
                      (lVar12 = /*Atlas.Definitions.AtlasDefinitions$$GetFirstCampaignWithChapter*/ func_0x01468068(lVar14,*(undefined8 *)(lVar12 + 0x10),0), lVar5 != 0
                      )))) {
                    uVar6 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f9320(lVar4,*(undefined8 *)(lVar5 + 0x58));
                    if ((uVar6 & 1) != 0) {
                      return;
                    }
                    if (*(long *)(lVar4 + 0x70) != 0) {
                      iVar3 = /*Atlas.Stats.UnlockManager$$HasNextCampaignBeenUnlockedAndNotSeenAndIsValidContent*/ func_0x015223e4(*(long *)(lVar4 + 0x70),lVar12,0);
                      if (iVar3 != 0) {
                        lVar14 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
                        Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar14,0);
                        if (lVar14 == 0) goto code_r0x014f92c0;
                        *(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)(lVar4 + 0x80);
                        *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)(lVar5 + 0x60);
                        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41300);
                        if (lVar7 == 0) goto code_r0x014f92c0;
                        *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(lVar7 + 0x38);
                        uVar6 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f93b8(lVar4,lVar14);
                        if ((uVar6 & 1) != 0) {
                          return;
                        }
                      }
                      uVar6 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f9320(lVar4,*(undefined8 *)(lVar5 + 0x60));
                      if ((uVar6 & 1) != 0) {
                        return;
                      }
                      if (((*(long *)(lVar4 + 0x70) != 0) &&
                          (iVar3 = /*Atlas.Stats.UnlockManager$$GetChallengesCompletedCountForCampaign*/ func_0x0151efcc(*(long *)(lVar4 + 0x70),lVar12,0), lVar12 != 0))
                         && (*(long *)(lVar4 + 0x78) != 0)) {
                        iVar2 = /*Atlas.Definitions.AtlasDefinitions$$GetChallengeCountForCampaign*/ func_0x01468d24(*(long *)(lVar4 + 0x78),
                                                *(undefined8 *)(lVar12 + 0x18),0);
                        lVar12 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
                        Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar12,0);
                        if (lVar12 != 0) {
                          *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(lVar4 + 0x80);
                          *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(lVar5 + 0x68);
                          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41300);
                          if (iVar3 < iVar2) {
                            if (lVar5 == 0) goto code_r0x014f92c0;
                            puVar10 = (undefined8 *)(lVar5 + 0x28);
                          }
                          else {
                            if (lVar5 == 0) goto code_r0x014f92c0;
                            puVar10 = (undefined8 *)(lVar5 + 0x30);
                          }
                          *(undefined8 *)(lVar12 + 0x10) = *puVar10;
                          uVar6 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f93b8(lVar4,lVar12);
                          if ((uVar6 & 1) != 0) {
                            return;
                          }
                          if (*(long *)(lVar4 + 0x78) != 0) {
                            lVar5 = *(long *)(*(long *)(lVar4 + 0x78) + 0x10);
                            if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            if (lVar5 != 0) {
                              lVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,*(undefined8 *)
                                                             (*(long *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8)
                                                             + 0x18),uRam0000000003d57280);
                              if (*(long *)(lVar4 + 0x98) != 0) {
                                iVar3 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                                  (*(long *)(lVar4 + 0x98),lVar5,0);
                                if (iVar3 != 0) {
                                  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x58) == 0))
                                  goto code_r0x014f92c0;
                                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_d8,*(long *)(lVar5 + 0x58),
                                                  uRam0000000003d3dc70);
                                  while (uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_d8,uRam0000000003d337d0),
                                        uVar8 = uStack_c8, (uVar6 & 1) != 0) {
                                    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41308);
                                    if (lVar5 == 0) goto code_r0x014f92c4;
                                    if (*(long *)(lVar5 + 0x98) == 0) {
                                      func_0x00f78af4();
                                      goto code_r0x014f92d0;
                                    }
                                    /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar5 + 0x98),uVar8,
                                                    uRam0000000003d3e188);
                                  }
                                  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_d8,uRam0000000003d337c8);
                                }
code_r0x014f9298:
                                *(undefined1 *)(lVar4 + 0x91) = 1;
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
            }
          }
          else {
            if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar2 = *(int *)(*(long *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xb8) + 0x10);
            lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d412f8);
            if (lVar5 != 0) {
              lVar5 = *(long *)(lVar5 + 0x78);
              uVar8 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
              /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(uVar8,lVar4,uRam0000000003d5d110,0);
              if (lVar5 != 0) {
                /*Atlas.UI.SlantFillBar$$SetTargetProgress*/ func_0x014fce4c((float)iVar3 / (float)iVar2,lVar5,uVar8,0);
                lVar12 = *(long *)(lVar4 + 0x70);
                lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41300);
                if ((lVar5 != 0) && (lVar12 != 0)) {
                  /*Atlas.Stats.UnlockManager$$SetAllCompletedChallengesAsSeenForChapter*/ func_0x01520654(lVar12,*(undefined8 *)(lVar5 + 0x10),0);
                  *(undefined4 *)(lVar4 + 0xa8) = *(undefined4 *)(lVar4 + 0xac);
                  *(undefined4 *)(lVar4 + 0xb8) = 0;
                  return;
                }
              }
            }
          }
code_r0x014f92c0:
          func_0x00f78af4();
code_r0x014f92c4:
          func_0x00f78af4();
code_r0x014f92d0:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x14f92d4);
          (*pcVar1)();
        }
      }
    }
  }
  return;
}



// ============================================================
// RVA: 0x14f8bf8 | Atlas.UI.Screens.SingleplayerChapterScreen.OnAfterExit
// ============================================================

void Atlas_UI_Screens_SingleplayerChapterScreen__OnAfterExit(long param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam0000000003eb4cb5 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d41308);
    bRam0000000003eb4cb5 = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0xb8) != 0)) {
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar4 + 0xb8),6,0,0);
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(param_1,0,0);
    if (*(char *)(param_1 + 0xb0) != '\0') {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x80);
    if (lVar4 != 0) {
      if ((bRam0000000003eb516d & 1) == 0) {
        func_0x00f78a20(0x3d21270,0);
        bRam0000000003eb516d = 1;
      }
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)(lVar4 + 0xc0) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
      uVar7 = Atlas_FrontEnd_FrontEndScene__get_CurrentIP(lVar4);
      if ((bRam0000000003eb516e & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb516e = 1;
      }
      uVar7 = Atlas_FrontEnd_FrontEndScene__GetIPDefinitionFromIDOrGeneric(lVar4,uVar7);
      uVar11 = *(undefined8 *)(lVar4 + 200);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar11,0);
      if (iVar3 == 0) {
        return;
      }
      plVar8 = *(long **)(lVar4 + 200);
      if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x198))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x1a0));
        return;
      }
      auVar17 = func_0x00f78af4();
      plVar8 = auVar17._8_8_;
      lVar4 = auVar17._0_8_;
      if ((bRam0000000003eb5170 & 1) == 0) {
        func_0x00f78a20(0x3d578b8);
        func_0x00f78a20(0x3d21b60);
        func_0x00f78a20(0x3d5b098);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb5170 = 1;
      }
      if ((plVar8 != (long *)0x0) && (*plVar8 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60)) {
LAB_015947d8:
        func_0x00f78e5c(plVar8);
        return;
      }
      lVar10 = *(long *)(lVar4 + 0x90);
      if (lVar10 != 0) {
        uVar13 = 0;
        while( true ) {
          if (*(int *)(lVar10 + 0x18) <= (int)uVar13) {
            return;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar10 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar8,uRam0000000003d5b098);
          lVar12 = *(long *)(lVar4 + 0x90);
          if ((lVar12 == 0) || (lVar10 == 0)) break;
          uVar7 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar10,uRam0000000003d578b8);
          if (*(uint *)(lVar12 + 0x18) <= uVar13) {
LAB_015947cc:
            uVar7 = func_0x00f78b24();
            func_0x00f78ac0(uVar7,0);
            goto LAB_015947d8;
          }
          lVar14 = (long)(int)uVar13;
          *(undefined8 *)(lVar12 + lVar14 * 0x40 + 0x40) = uVar7;
          lVar10 = *(long *)(lVar4 + 0x90);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_015947cc;
          lVar10 = *(long *)(lVar10 + lVar14 * 0x40 + 0x40);
          if (lVar10 == 0) break;
          Atlas_FrontEnd_PedestalBehaviour__Init(lVar10,0);
          lVar10 = *(long *)(lVar4 + 0x90);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_015947cc;
          lVar10 = *(long *)(lVar10 + lVar14 * 0x40 + 0x40);
          if (lVar10 == 0) break;
          uVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0);
          lVar10 = *(long *)(lVar4 + 0x90);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_015947cc;
          lVar10 = *(long *)(lVar10 + lVar14 * 0x40 + 0x20);
          if (((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0)) ||
             (lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0), lVar10 == 0)) break;
          uVar13 = uVar13 + 1;
          /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar10,uVar7,0,0);
          lVar10 = *(long *)(lVar4 + 0x90);
          if (lVar10 == 0) break;
        }
      }
      func_0x00f78af4();
      return;
    }
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4cb6 & 1) == 0) {
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57268);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e178);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d5d110);
    func_0x00f78a20(0x3d24a80);
    func_0x00f78a20(0x3d289a8);
    func_0x00f78a20(0x3d412f8);
    func_0x00f78a20(0x3d41300);
    func_0x00f78a20(0x3d41308);
    func_0x00f78a20(0x3d25740);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4cb6 = 1;
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  if (*(int *)(lVar4 + 0x4c) == 2) {
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41308);
    if ((lVar10 == 0) || (*(long *)(lVar10 + 0x98) == 0)) goto code_r0x014f92c0;
    uVar5 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar10 + 0x98),uRam0000000003d3e178);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (*(char *)(lVar4 + 0x91) != '\0') {
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41308);
      if ((lVar10 == 0) || (*(long *)(lVar10 + 0xa8) == 0)) goto code_r0x014f92c0;
      /*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(lVar10 + 0xa8),*(undefined4 *)(lVar4 + 0x48),0,0);
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41308);
      if ((lVar10 == 0) || (*(long *)(lVar10 + 0xb8) == 0)) goto code_r0x014f92c0;
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar10 + 0xb8),6,1,1,0);
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41308);
      if ((lVar10 == 0) || (*(long *)(lVar10 + 0xb8) == 0)) goto code_r0x014f92c0;
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar10 + 0xb8),0,1,1,0);
      *(undefined1 *)(lVar4 + 0x91) = 0;
    }
    if (*(char *)(lVar4 + 0x90) == '\0') {
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d412f8);
      if ((lVar10 == 0) || (*(long *)(lVar10 + 0x78) == 0)) goto code_r0x014f92c0;
      if (*(char *)(*(long *)(lVar10 + 0x78) + 0x90) == '\0') {
        fVar16 = *(float *)(lVar4 + 0xb4);
        fVar15 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
        fVar16 = fVar16 + fVar15;
        *(float *)(lVar4 + 0xb4) = fVar16;
        if (0.5 <= fVar16) {
          fVar16 = *(float *)(lVar4 + 0xb8);
          fVar15 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
          fVar16 = fVar16 + fVar15;
          *(float *)(lVar4 + 0xb8) = fVar16;
          iVar3 = *(int *)(lVar4 + 0xa8);
          if (iVar3 == *(int *)(lVar4 + 0xac)) {
            if (fVar16 <= 0.5) {
              return;
            }
            if (*(long *)(lVar4 + 0x98) != 0) {
              iVar3 = Atlas_FrontEnd_FTUEManager__IsStageUnlocked
                                (*(long *)(lVar4 + 0x98),*(undefined8 *)(lVar4 + 0xa0),0);
              if (iVar3 == 0) goto code_r0x014f9298;
              if (*(long *)(lVar4 + 0x78) != 0) {
                lVar12 = *(long *)(*(long *)(lVar4 + 0x78) + 0x10);
                lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41300);
                if ((lVar10 != 0) && (lVar12 != 0)) {
                  lVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar12,*(undefined8 *)(lVar10 + 0x10),
                                           uRam0000000003d57268);
                  *(undefined1 *)(lVar4 + 0x90) = 1;
                  lVar14 = *(long *)(lVar4 + 0x78);
                  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41300);
                  if ((lVar12 != 0) &&
                     ((lVar14 != 0 &&
                      (lVar12 = /*Atlas.Definitions.AtlasDefinitions$$GetFirstCampaignWithChapter*/ func_0x01468068(lVar14,*(undefined8 *)(lVar12 + 0x10),0),
                      lVar10 != 0)))) {
                    uVar5 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f9320(lVar4,*(undefined8 *)(lVar10 + 0x58));
                    if ((uVar5 & 1) != 0) {
                      return;
                    }
                    if (*(long *)(lVar4 + 0x70) != 0) {
                      iVar3 = /*Atlas.Stats.UnlockManager$$HasNextCampaignBeenUnlockedAndNotSeenAndIsValidContent*/ func_0x015223e4(*(long *)(lVar4 + 0x70),lVar12,0);
                      if (iVar3 != 0) {
                        lVar14 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
                        Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar14,0);
                        if (lVar14 == 0) goto code_r0x014f92c0;
                        *(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)(lVar4 + 0x80);
                        *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)(lVar10 + 0x60);
                        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41300);
                        if (lVar6 == 0) goto code_r0x014f92c0;
                        *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(lVar6 + 0x38);
                        uVar5 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f93b8(lVar4,lVar14);
                        if ((uVar5 & 1) != 0) {
                          return;
                        }
                      }
                      uVar5 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f9320(lVar4,*(undefined8 *)(lVar10 + 0x60));
                      if ((uVar5 & 1) != 0) {
                        return;
                      }
                      if (((*(long *)(lVar4 + 0x70) != 0) &&
                          (iVar3 = /*Atlas.Stats.UnlockManager$$GetChallengesCompletedCountForCampaign*/ func_0x0151efcc(*(long *)(lVar4 + 0x70),lVar12,0), lVar12 != 0))
                         && (*(long *)(lVar4 + 0x78) != 0)) {
                        iVar2 = /*Atlas.Definitions.AtlasDefinitions$$GetChallengeCountForCampaign*/ func_0x01468d24(*(long *)(lVar4 + 0x78),
                                                *(undefined8 *)(lVar12 + 0x18),0);
                        lVar12 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
                        Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar12,0);
                        if (lVar12 != 0) {
                          *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(lVar4 + 0x80);
                          *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(lVar10 + 0x68);
                          lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41300);
                          if (iVar3 < iVar2) {
                            if (lVar10 == 0) goto code_r0x014f92c0;
                            puVar9 = (undefined8 *)(lVar10 + 0x28);
                          }
                          else {
                            if (lVar10 == 0) goto code_r0x014f92c0;
                            puVar9 = (undefined8 *)(lVar10 + 0x30);
                          }
                          *(undefined8 *)(lVar12 + 0x10) = *puVar9;
                          uVar5 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f93b8(lVar4,lVar12);
                          if ((uVar5 & 1) != 0) {
                            return;
                          }
                          if (*(long *)(lVar4 + 0x78) != 0) {
                            lVar10 = *(long *)(*(long *)(lVar4 + 0x78) + 0x10);
                            if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            if (lVar10 != 0) {
                              lVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,*(undefined8 *)
                                                               (*(long *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 +
                                                                         0xb8) + 0x18),
                                                       uRam0000000003d57280);
                              if (*(long *)(lVar4 + 0x98) != 0) {
                                iVar3 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                                  (*(long *)(lVar4 + 0x98),lVar10,0);
                                if (iVar3 != 0) {
                                  if ((lVar10 == 0) || (*(long *)(lVar10 + 0x58) == 0))
                                  goto code_r0x014f92c0;
                                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(lVar10 + 0x58),
                                                  uRam0000000003d3dc70);
                                  while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_a8,uRam0000000003d337d0),
                                        uVar7 = uStack_98, (uVar5 & 1) != 0) {
                                    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41308);
                                    if (lVar10 == 0) goto code_r0x014f92c4;
                                    if (*(long *)(lVar10 + 0x98) == 0) {
                                      func_0x00f78af4();
                                      goto code_r0x014f92d0;
                                    }
                                    /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar10 + 0x98),uVar7,
                                                    uRam0000000003d3e188);
                                  }
                                  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a8,uRam0000000003d337c8);
                                }
code_r0x014f9298:
                                *(undefined1 *)(lVar4 + 0x91) = 1;
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
            }
          }
          else {
            if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar2 = *(int *)(*(long *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xb8) + 0x10);
            lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d412f8);
            if (lVar10 != 0) {
              lVar10 = *(long *)(lVar10 + 0x78);
              uVar7 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
              /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(uVar7,lVar4,uRam0000000003d5d110,0);
              if (lVar10 != 0) {
                /*Atlas.UI.SlantFillBar$$SetTargetProgress*/ func_0x014fce4c((float)iVar3 / (float)iVar2,lVar10,uVar7,0);
                lVar12 = *(long *)(lVar4 + 0x70);
                lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41300);
                if ((lVar10 != 0) && (lVar12 != 0)) {
                  /*Atlas.Stats.UnlockManager$$SetAllCompletedChallengesAsSeenForChapter*/ func_0x01520654(lVar12,*(undefined8 *)(lVar10 + 0x10),0);
                  *(undefined4 *)(lVar4 + 0xa8) = *(undefined4 *)(lVar4 + 0xac);
                  *(undefined4 *)(lVar4 + 0xb8) = 0;
                  return;
                }
              }
            }
          }
code_r0x014f92c0:
          func_0x00f78af4();
code_r0x014f92c4:
          func_0x00f78af4();
code_r0x014f92d0:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x14f92d4);
          (*pcVar1)();
        }
      }
    }
  }
  return;
}



// ============================================================
// RVA: 0x14f8cd0 | Atlas.UI.Screens.SingleplayerChapterScreen.OnUpdate
// ============================================================

void Atlas_UI_Screens_SingleplayerChapterScreen__OnUpdate(long param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb4cb6 & 1) == 0) {
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57268);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e178);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d5d110);
    func_0x00f78a20(0x3d24a80);
    func_0x00f78a20(0x3d289a8);
    func_0x00f78a20(0x3d412f8);
    func_0x00f78a20(0x3d41300);
    func_0x00f78a20(0x3d41308);
    func_0x00f78a20(0x3d25740);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4cb6 = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (*(int *)(param_1 + 0x4c) == 2) {
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x98) == 0)) goto LAB_014f92c0;
    uVar5 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar4 + 0x98),uRam0000000003d3e178);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (*(char *)(param_1 + 0x91) != '\0') {
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0xa8) == 0)) goto LAB_014f92c0;
      /*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(lVar4 + 0xa8),*(undefined4 *)(param_1 + 0x48),0,0);
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0xb8) == 0)) goto LAB_014f92c0;
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar4 + 0xb8),6,1,1,0);
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0xb8) == 0)) goto LAB_014f92c0;
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar4 + 0xb8),0,1,1,0);
      *(undefined1 *)(param_1 + 0x91) = 0;
    }
    if (*(char *)(param_1 + 0x90) == '\0') {
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x78) == 0)) goto LAB_014f92c0;
      if (*(char *)(*(long *)(lVar4 + 0x78) + 0x90) == '\0') {
        fVar12 = *(float *)(param_1 + 0xb4);
        fVar11 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
        fVar12 = fVar12 + fVar11;
        *(float *)(param_1 + 0xb4) = fVar12;
        if (0.5 <= fVar12) {
          fVar12 = *(float *)(param_1 + 0xb8);
          fVar11 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
          fVar12 = fVar12 + fVar11;
          *(float *)(param_1 + 0xb8) = fVar12;
          iVar2 = *(int *)(param_1 + 0xa8);
          if (iVar2 == *(int *)(param_1 + 0xac)) {
            if (fVar12 <= 0.5) {
              return;
            }
            if (*(long *)(param_1 + 0x98) != 0) {
              iVar2 = Atlas_FrontEnd_FTUEManager__IsStageUnlocked
                                (*(long *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),0);
              if (iVar2 == 0) goto LAB_014f9298;
              if (*(long *)(param_1 + 0x78) != 0) {
                lVar9 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
                lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41300);
                if ((lVar4 != 0) && (lVar9 != 0)) {
                  lVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar9,*(undefined8 *)(lVar4 + 0x10),uRam0000000003d57268);
                  *(undefined1 *)(param_1 + 0x90) = 1;
                  lVar10 = *(long *)(param_1 + 0x78);
                  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41300);
                  if ((lVar9 != 0) &&
                     ((lVar10 != 0 &&
                      (lVar9 = /*Atlas.Definitions.AtlasDefinitions$$GetFirstCampaignWithChapter*/ func_0x01468068(lVar10,*(undefined8 *)(lVar9 + 0x10),0), lVar4 != 0))
                     )) {
                    uVar5 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f9320(param_1,*(undefined8 *)(lVar4 + 0x58));
                    if ((uVar5 & 1) != 0) {
                      return;
                    }
                    if (*(long *)(param_1 + 0x70) != 0) {
                      iVar2 = /*Atlas.Stats.UnlockManager$$HasNextCampaignBeenUnlockedAndNotSeenAndIsValidContent*/ func_0x015223e4(*(long *)(param_1 + 0x70),lVar9,0);
                      if (iVar2 != 0) {
                        lVar10 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
                        Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar10,0);
                        if (lVar10 == 0) goto LAB_014f92c0;
                        *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(param_1 + 0x80);
                        *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)(lVar4 + 0x60);
                        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41300);
                        if (lVar6 == 0) goto LAB_014f92c0;
                        *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar6 + 0x38);
                        uVar5 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f93b8(param_1,lVar10);
                        if ((uVar5 & 1) != 0) {
                          return;
                        }
                      }
                      uVar5 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f9320(param_1,*(undefined8 *)(lVar4 + 0x60));
                      if ((uVar5 & 1) != 0) {
                        return;
                      }
                      if (((*(long *)(param_1 + 0x70) != 0) &&
                          (iVar2 = /*Atlas.Stats.UnlockManager$$GetChallengesCompletedCountForCampaign*/ func_0x0151efcc(*(long *)(param_1 + 0x70),lVar9,0), lVar9 != 0))
                         && (*(long *)(param_1 + 0x78) != 0)) {
                        iVar3 = /*Atlas.Definitions.AtlasDefinitions$$GetChallengeCountForCampaign*/ func_0x01468d24(*(long *)(param_1 + 0x78),
                                                *(undefined8 *)(lVar9 + 0x18),0);
                        lVar9 = func_0x00f78aec(/*Atlas.UI.Screens.RewardScreen.TransitionData_TypeInfo*/ uRam0000000003d289a8);
                        Atlas_UI_Screens_RewardScreen_TransitionData___ctor(lVar9,0);
                        if (lVar9 != 0) {
                          *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)(param_1 + 0x80);
                          *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(lVar4 + 0x68);
                          lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41300);
                          if (iVar2 < iVar3) {
                            if (lVar4 == 0) goto LAB_014f92c0;
                            puVar8 = (undefined8 *)(lVar4 + 0x28);
                          }
                          else {
                            if (lVar4 == 0) goto LAB_014f92c0;
                            puVar8 = (undefined8 *)(lVar4 + 0x30);
                          }
                          *(undefined8 *)(lVar9 + 0x10) = *puVar8;
                          uVar5 = /*Atlas.UI.Screens.SingleplayerChapterScreen$$RunRewardSequenceIfRewardUnseen*/ func_0x014f93b8(param_1,lVar9);
                          if ((uVar5 & 1) != 0) {
                            return;
                          }
                          if (*(long *)(param_1 + 0x78) != 0) {
                            lVar4 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
                            if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            if (lVar4 != 0) {
                              lVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar4,*(undefined8 *)
                                                             (*(long *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8)
                                                             + 0x18),uRam0000000003d57280);
                              if (*(long *)(param_1 + 0x98) != 0) {
                                iVar2 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                                  (*(long *)(param_1 + 0x98),lVar4,0);
                                if (iVar2 != 0) {
                                  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x58) == 0))
                                  goto LAB_014f92c0;
                                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_78,*(long *)(lVar4 + 0x58),
                                                  uRam0000000003d3dc70);
                                  while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_78,uRam0000000003d337d0),
                                        uVar7 = uStack_68, (uVar5 & 1) != 0) {
                                    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
                                    if (lVar4 == 0) goto code_r0x014f92c4;
                                    if (*(long *)(lVar4 + 0x98) == 0) {
                                      func_0x00f78af4();
                                      goto code_r0x014f92d0;
                                    }
                                    /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar4 + 0x98),uVar7,
                                                    uRam0000000003d3e188);
                                  }
                                  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,uRam0000000003d337c8);
                                }
LAB_014f9298:
                                *(undefined1 *)(param_1 + 0x91) = 1;
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
            }
          }
          else {
            if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar3 = *(int *)(*(long *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xb8) + 0x10);
            lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
            if (lVar4 != 0) {
              lVar4 = *(long *)(lVar4 + 0x78);
              uVar7 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
              /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(uVar7,param_1,uRam0000000003d5d110,0);
              if (lVar4 != 0) {
                /*Atlas.UI.SlantFillBar$$SetTargetProgress*/ func_0x014fce4c((float)iVar2 / (float)iVar3,lVar4,uVar7,0);
                lVar9 = *(long *)(param_1 + 0x70);
                lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41300);
                if ((lVar4 != 0) && (lVar9 != 0)) {
                  /*Atlas.Stats.UnlockManager$$SetAllCompletedChallengesAsSeenForChapter*/ func_0x01520654(lVar9,*(undefined8 *)(lVar4 + 0x10),0);
                  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xac);
                  *(undefined4 *)(param_1 + 0xb8) = 0;
                  return;
                }
              }
            }
          }
LAB_014f92c0:
          func_0x00f78af4();
code_r0x014f92c4:
          func_0x00f78af4();
code_r0x014f92d0:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x14f92d4);
          (*pcVar1)();
        }
      }
    }
  }
  return;
}



// ============================================================
// RVA: 0x14f9320 | Atlas.UI.Screens.SingleplayerChapterScreen.RunRewardSequenceIfRewardUnseen
// ============================================================

void Atlas_UI_Screens_SingleplayerChapterScreen__RunRewardSequenceIfRewardUnseen
               (long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb4cbb & 1) == 0) {
    func_0x00f78a20(0x3d5c7b8);
    func_0x00f78a20(0x3d41308);
    bRam0000000003eb4cbb = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
  uVar1 = Atlas_UI_Screens_RewardScreenExtensions__RunRewardSequenceIfRewardUnseen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData_
                    (uVar3,param_2,param_1,uVar2,uRam0000000003d5c7b8);
  *(undefined1 *)(param_1 + 0xb0) = uVar1;
  return;
}



// ============================================================
// RVA: 0x14f93b8 | Atlas.UI.Screens.SingleplayerChapterScreen.RunRewardSequenceIfRewardUnseen
// ============================================================

void Atlas_UI_Screens_SingleplayerChapterScreen__RunRewardSequenceIfRewardUnseen
               (long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb4cba & 1) == 0) {
    func_0x00f78a20(0x3d41308);
    bRam0000000003eb4cba = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
  uVar1 = Atlas_UI_Screens_RewardScreenExtensions__RunRewardSequenceIfRewardUnseen
                    (uVar3,uVar2,param_2,0);
  *(undefined1 *)(param_1 + 0xb0) = uVar1;
  return;
}



// ============================================================
// RVA: 0x14f9430 | Atlas.UI.Screens.SingleplayerChapterScreen.FillBarPassedFirstReward
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_SingleplayerChapterScreen__FillBarPassedFirstReward
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar14;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar15;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined8 unaff_d9;
  undefined1 auVar16 [16];
  
  uVar13 = 0;
  puVar2 = (undefined1 *)register0x00000008;
Atlas_UI_Screens_SingleplayerChapterScreen__FillBarPassedReward:
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(long *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  unaff_x29 = puVar2 + -0x10;
  unaff_x23 = 0x3d28ee0;
  unaff_x22 = 0x3d412f8;
  if ((bRam0000000003eb4cb7 & 1) == 0) {
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d642f8);
    func_0x00f78a20(0x3d28ee0);
    func_0x00f78a20(0x3d412f8);
    func_0x00f78a20(0x3d79110);
    bRam0000000003eb4cb7 = 1;
  }
  unaff_x21 = func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerChapterScreen.<>c__DisplayClass31_0_TypeInfo*/ uRam0000000003d28ee0);
  /*Atlas.UI.Screens.SingleplayerChapterScreen.<>c__DisplayClass31_0$$.ctor*/ func_0x0156a514(unaff_x21,0);
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d412f8);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x88), lVar4 != 0)) {
    unaff_x19 = uVar13;
    unaff_x20 = param_4;
    if (*(uint *)(lVar4 + 0x18) <= (uint)uVar13) goto code_r0x014f9568;
    unaff_x22 = 0x3d412f8;
    if (unaff_x21 == 0) goto code_r0x014f9564;
    unaff_x22 = 0x3d64000;
    lVar4 = *(long *)(lVar4 + (long)(int)(uint)uVar13 * 8 + 0x20);
    *(long *)(unaff_x21 + 0x10) = lVar4;
    param_4 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(param_4,unaff_x21,uRam0000000003d642f8,0);
    uVar13 = 0;
    if (lVar4 != 0) goto code_r0x014f952c;
  }
code_r0x014f9564:
  func_0x00f78af4();
  unaff_x19 = uVar13;
  unaff_x20 = param_4;
code_r0x014f9568:
  uVar13 = func_0x00f78b24();
  unaff_x30 = &Atlas_UI_Screens_SingleplayerChapterScreen__FillBarPassedSecondReward;
  param_4 = func_0x00f78ac0(uVar13,0);
  uVar13 = 1;
  puVar2 = puVar2 + -0x40;
  goto Atlas_UI_Screens_SingleplayerChapterScreen__FillBarPassedReward;
code_r0x014f952c:
  /*Atlas.UI.UIRewardBehaviour$$Wiggle*/ func_0x0151d394(0,lVar4,param_4,0);
  lVar4 = /*STR('event:/UI/ProgressBarComplete')*/ lRam0000000003d79110;
  uVar13 = *(undefined8 *)(puVar2 + -0x30);
  *(undefined8 *)(puVar2 + -0x30) = uVar13;
  *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
  *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
  *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
  *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  uVar14 = 0x3eb4000;
  lVar5 = /*STR('event:/UI/ProgressBarComplete')*/ lRam0000000003d79110;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    lVar5 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return lVar5;
  }
  lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar5 != 0) {
    lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar5,lVar4,uRam0000000003d2faf8);
    if ((int)lVar5 == 0) {
      return lVar5;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar5 != 0)) &&
       (lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,lVar4,uRam0000000003d2fb00), lVar5 != 0)) {
      *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
      *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
      *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar5,0,0);
      return lVar5;
    }
  }
  plVar6 = (long *)func_0x00f78af4();
  *(undefined8 *)(puVar2 + -0x70) = unaff_d9;
  *(ulong *)(puVar2 + -0x68) = CONCAT44(unaff_00005104,unaff_s8);
  *(undefined8 *)(puVar2 + -0x60) = uVar13;
  *(undefined8 *)(puVar2 + -0x58) = 0x3eb4000;
  *(undefined8 *)(puVar2 + -0x50) = 0x3d25580;
  *(long *)(puVar2 + -0x48) = lVar4;
  *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar7 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar6,0);
  if ((plVar7 != (long *)0x0) && (*plVar7 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar8 = func_0x00f78e5c(plVar7);
    *(long **)(puVar2 + -0x90) = plVar7;
    *(long **)(puVar2 + -0x88) = plVar6;
    *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x40;
    *(undefined **)(puVar2 + -0x78) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
    lVar4 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    uVar12 = *(undefined8 *)(puVar2 + -0x90);
    *(undefined8 *)(puVar2 + -0xa0) = uVar13;
    *(undefined8 *)(puVar2 + -0x98) = 0x3eb4000;
    *(undefined8 *)(puVar2 + -0x90) = uVar12;
    *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(puVar2 + -0x88);
    *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0x80);
    *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x78);
    if (lVar4 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar11 = func_0x00f78aec();
      uVar8 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar11,uVar8,0);
    }
    else {
      uVar14 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar9 = (*pcRam0000000003ec01d0)(uVar8);
      if ((uVar9 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar4 = (*pcRam0000000003ec01e0)(uVar8,lVar4);
        return lVar4;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar11 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar11,uVar12,0);
      uVar12 = uVar8;
    }
    uVar8 = func_0x00f78a24(0x3d5a8a8);
    auVar16 = func_0x00f78ac0(uVar11,uVar8);
    *(undefined8 *)(puVar2 + -0xd0) = uVar13;
    *(undefined8 *)(puVar2 + -200) = uVar14;
    *(undefined8 *)(puVar2 + -0xc0) = uVar12;
    *(undefined8 *)(puVar2 + -0xb8) = uVar11;
    *(undefined1 **)(puVar2 + -0xb0) = puVar2 + -0x80;
    *(undefined **)(puVar2 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar4 = (*pcRam0000000003ec01e0)(auVar16._0_8_,auVar16._8_8_);
    return lVar4;
  }
  fVar15 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar13 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar15 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                           plVar7,4,0);
  lVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar13,uRam0000000003d5e780);
  *(undefined8 *)(puVar2 + -0xa0) = 0x3d5e780;
  *(undefined8 *)(puVar2 + -0x98) = 0x3d5e868;
  *(long **)(puVar2 + -0x90) = plVar7;
  *(long **)(puVar2 + -0x88) = plVar6;
  *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x40;
  *(undefined **)(puVar2 + -0x78) = &UNK_01513b44;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar6,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar3 != 0) {
      lVar5 = func_0x00f78adc(plVar6,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
      if ((uVar9 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto code_r0x018eef34;
        uVar13 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      }
      else {
        if (lVar5 == 0) {
code_r0x018eef34:
          auVar16 = func_0x00f78af4();
          lVar10 = auVar16._0_8_;
          *(undefined8 *)(puVar2 + -0xd0) = 0x3d5e780;
          *(long *)(puVar2 + -200) = lVar5;
          *(long **)(puVar2 + -0xc0) = plVar6;
          *(long *)(puVar2 + -0xb8) = lVar4;
          *(undefined1 **)(puVar2 + -0xb0) = puVar2 + -0x80;
          *(undefined **)(puVar2 + -0xa8) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar10 != 0) && (*(char *)(lVar10 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar10,auVar16._8_8_,cVar1 != '\0',0);
          }
          return lVar10;
        }
        uVar13 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar5,0);
      }
      *(undefined8 *)(lVar4 + 200) = uVar13;
    }
    *(long **)(lVar4 + 0x48) = plVar6;
  }
  return lVar4;
}



// ============================================================
// RVA: 0x14f9438 | Atlas.UI.Screens.SingleplayerChapterScreen.FillBarPassedReward
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_SingleplayerChapterScreen__FillBarPassedReward
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
               undefined8 param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar13;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar14;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined8 unaff_d9;
  undefined1 auVar15 [16];
  
code_r0x014f9438:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  unaff_x23 = 0x3d28ee0;
  unaff_x22 = 0x3d412f8;
  if ((bRam0000000003eb4cb7 & 1) == 0) {
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d642f8);
    func_0x00f78a20(0x3d28ee0);
    func_0x00f78a20(0x3d412f8);
    func_0x00f78a20(0x3d79110);
    bRam0000000003eb4cb7 = 1;
  }
  unaff_x21 = func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerChapterScreen.<>c__DisplayClass31_0_TypeInfo*/ uRam0000000003d28ee0);
  /*Atlas.UI.Screens.SingleplayerChapterScreen.<>c__DisplayClass31_0$$.ctor*/ func_0x0156a514(unaff_x21,0);
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d412f8);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x88), lVar3 != 0)) {
    unaff_x19 = param_5;
    unaff_x20 = param_4;
    if (*(uint *)(lVar3 + 0x18) <= (uint)param_5) goto LAB_014f9568;
    unaff_x22 = 0x3d412f8;
    if (unaff_x21 == 0) goto LAB_014f9564;
    unaff_x22 = 0x3d64000;
    lVar3 = *(long *)(lVar3 + (long)(int)(uint)param_5 * 8 + 0x20);
    *(long *)(unaff_x21 + 0x10) = lVar3;
    param_4 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(param_4,unaff_x21,uRam0000000003d642f8,0);
    param_5 = 0;
    if (lVar3 != 0) goto code_r0x014f952c;
  }
LAB_014f9564:
  func_0x00f78af4();
  unaff_x19 = param_5;
  unaff_x20 = param_4;
LAB_014f9568:
  uVar7 = func_0x00f78b24();
  unaff_x30 = &Atlas_UI_Screens_SingleplayerChapterScreen__FillBarPassedSecondReward;
  param_4 = func_0x00f78ac0(uVar7,0);
  param_5 = 1;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
  goto code_r0x014f9438;
code_r0x014f952c:
  /*Atlas.UI.UIRewardBehaviour$$Wiggle*/ func_0x0151d394(0,lVar3,param_4,0);
  lVar3 = /*STR('event:/UI/ProgressBarComplete')*/ lRam0000000003d79110;
  uVar7 = *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar7;
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  uVar13 = 0x3eb4000;
  lVar4 = /*STR('event:/UI/ProgressBarComplete')*/ lRam0000000003d79110;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    lVar4 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return lVar4;
  }
  lVar4 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar4 != 0) {
    lVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar4,lVar3,uRam0000000003d2faf8);
    if ((int)lVar4 == 0) {
      return lVar4;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar4 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar4 != 0)) &&
       (lVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar4,lVar3,uRam0000000003d2fb00), lVar4 != 0)) {
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar4,0,0);
      return lVar4;
    }
  }
  plVar5 = (long *)func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x68) = CONCAT44(unaff_00005104,unaff_s8);
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar7;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0x3d25580;
  *(long *)((long)register0x00000008 + -0x48) = lVar3;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar6 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar5,0);
  if ((plVar6 != (long *)0x0) && (*plVar6 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar8 = func_0x00f78e5c(plVar6);
    *(long **)((long)register0x00000008 + -0x90) = plVar6;
    *(long **)((long)register0x00000008 + -0x88) = plVar5;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x78) =
         &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
    lVar3 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar7;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar12;
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)((long)register0x00000008 + -0x88);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    if (lVar3 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar11 = func_0x00f78aec();
      uVar8 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar11,uVar8,0);
    }
    else {
      uVar13 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar9 = (*pcRam0000000003ec01d0)(uVar8);
      if ((uVar9 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar3 = (*pcRam0000000003ec01e0)(uVar8,lVar3);
        return lVar3;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar11 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar11,uVar12,0);
      uVar12 = uVar8;
    }
    uVar8 = func_0x00f78a24(0x3d5a8a8);
    auVar15 = func_0x00f78ac0(uVar11,uVar8);
    *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar7;
    *(undefined8 *)((long)register0x00000008 + -200) = uVar13;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar12;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar11;
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined **)((long)register0x00000008 + -0xa8) =
         &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*pcRam0000000003ec01e0)(auVar15._0_8_,auVar15._8_8_);
    return lVar3;
  }
  fVar14 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar7 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar14 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                          plVar6,4,0);
  lVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar7,uRam0000000003d5e780);
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3d5e780;
  *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3d5e868;
  *(long **)((long)register0x00000008 + -0x90) = plVar6;
  *(long **)((long)register0x00000008 + -0x88) = plVar5;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x78) = &UNK_01513b44;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar5,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar2 != 0) {
      lVar4 = func_0x00f78adc(plVar5,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
      if ((uVar9 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto code_r0x018eef34;
        uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      }
      else {
        if (lVar4 == 0) {
code_r0x018eef34:
          auVar15 = func_0x00f78af4();
          lVar10 = auVar15._0_8_;
          *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x3d5e780;
          *(long *)((long)register0x00000008 + -200) = lVar4;
          *(long **)((long)register0x00000008 + -0xc0) = plVar5;
          *(long *)((long)register0x00000008 + -0xb8) = lVar3;
          *(undefined1 **)((long)register0x00000008 + -0xb0) =
               (undefined1 *)((long)register0x00000008 + -0x80);
          *(undefined **)((long)register0x00000008 + -0xa8) =
               &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar10 != 0) && (*(char *)(lVar10 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar10,auVar15._8_8_,cVar1 != '\0',0);
          }
          return lVar10;
        }
        uVar7 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar4,0);
      }
      *(undefined8 *)(lVar3 + 200) = uVar7;
    }
    *(long **)(lVar3 + 0x48) = plVar5;
  }
  return lVar3;
}



// ============================================================
// RVA: 0x14f9574 | Atlas.UI.Screens.SingleplayerChapterScreen.FillBarPassedSecondReward
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_SingleplayerChapterScreen__FillBarPassedSecondReward
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar13;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar14;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined8 unaff_d9;
  undefined1 auVar15 [16];
  
Atlas_UI_Screens_SingleplayerChapterScreen__FillBarPassedReward:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  unaff_x19 = 1;
  unaff_x23 = 0x3d28ee0;
  unaff_x22 = 0x3d412f8;
  if ((bRam0000000003eb4cb7 & 1) == 0) {
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d642f8);
    func_0x00f78a20(0x3d28ee0);
    func_0x00f78a20(0x3d412f8);
    func_0x00f78a20(0x3d79110);
    bRam0000000003eb4cb7 = 1;
  }
  unaff_x21 = func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerChapterScreen.<>c__DisplayClass31_0_TypeInfo*/ uRam0000000003d28ee0);
  /*Atlas.UI.Screens.SingleplayerChapterScreen.<>c__DisplayClass31_0$$.ctor*/ func_0x0156a514(unaff_x21,0);
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d412f8);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x88), lVar3 != 0)) {
    unaff_x20 = param_4;
    if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_014f9568;
    unaff_x22 = 0x3d412f8;
    if (unaff_x21 == 0) goto LAB_014f9564;
    unaff_x22 = 0x3d64000;
    lVar3 = *(long *)(lVar3 + 0x28);
    *(long *)(unaff_x21 + 0x10) = lVar3;
    param_4 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(param_4,unaff_x21,uRam0000000003d642f8,0);
    unaff_x19 = 0;
    if (lVar3 != 0) goto code_r0x014f952c;
  }
LAB_014f9564:
  func_0x00f78af4();
  unaff_x20 = param_4;
LAB_014f9568:
  uVar7 = func_0x00f78b24();
  unaff_x30 = Atlas_UI_Screens_SingleplayerChapterScreen__FillBarPassedSecondReward;
  param_4 = func_0x00f78ac0(uVar7,0);
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
  goto Atlas_UI_Screens_SingleplayerChapterScreen__FillBarPassedReward;
code_r0x014f952c:
  /*Atlas.UI.UIRewardBehaviour$$Wiggle*/ func_0x0151d394(0,lVar3,param_4,0);
  lVar3 = /*STR('event:/UI/ProgressBarComplete')*/ lRam0000000003d79110;
  uVar7 = *(undefined8 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar7;
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  uVar13 = 0x3eb4000;
  lVar4 = /*STR('event:/UI/ProgressBarComplete')*/ lRam0000000003d79110;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    lVar4 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return lVar4;
  }
  lVar4 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar4 != 0) {
    lVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar4,lVar3,uRam0000000003d2faf8);
    if ((int)lVar4 == 0) {
      return lVar4;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar4 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar4 != 0)) &&
       (lVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar4,lVar3,uRam0000000003d2fb00), lVar4 != 0)) {
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar4,0,0);
      return lVar4;
    }
  }
  plVar5 = (long *)func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x68) = CONCAT44(unaff_00005104,unaff_s8);
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar7;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0x3d25580;
  *(long *)((long)register0x00000008 + -0x48) = lVar3;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar6 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar5,0);
  if ((plVar6 != (long *)0x0) && (*plVar6 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar8 = func_0x00f78e5c(plVar6);
    *(long **)((long)register0x00000008 + -0x90) = plVar6;
    *(long **)((long)register0x00000008 + -0x88) = plVar5;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x78) =
         &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
    lVar3 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar7;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar12;
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)((long)register0x00000008 + -0x88);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    if (lVar3 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar11 = func_0x00f78aec();
      uVar8 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar11,uVar8,0);
    }
    else {
      uVar13 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar9 = (*pcRam0000000003ec01d0)(uVar8);
      if ((uVar9 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar3 = (*pcRam0000000003ec01e0)(uVar8,lVar3);
        return lVar3;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar11 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar11,uVar12,0);
      uVar12 = uVar8;
    }
    uVar8 = func_0x00f78a24(0x3d5a8a8);
    auVar15 = func_0x00f78ac0(uVar11,uVar8);
    *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar7;
    *(undefined8 *)((long)register0x00000008 + -200) = uVar13;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar12;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar11;
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined **)((long)register0x00000008 + -0xa8) =
         &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*pcRam0000000003ec01e0)(auVar15._0_8_,auVar15._8_8_);
    return lVar3;
  }
  fVar14 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar7 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar14 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                          plVar6,4,0);
  lVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar7,uRam0000000003d5e780);
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3d5e780;
  *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3d5e868;
  *(long **)((long)register0x00000008 + -0x90) = plVar6;
  *(long **)((long)register0x00000008 + -0x88) = plVar5;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x78) = &UNK_01513b44;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar5,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar2 != 0) {
      lVar4 = func_0x00f78adc(plVar5,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
      if ((uVar9 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto code_r0x018eef34;
        uVar7 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      }
      else {
        if (lVar4 == 0) {
code_r0x018eef34:
          auVar15 = func_0x00f78af4();
          lVar10 = auVar15._0_8_;
          *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x3d5e780;
          *(long *)((long)register0x00000008 + -200) = lVar4;
          *(long **)((long)register0x00000008 + -0xc0) = plVar5;
          *(long *)((long)register0x00000008 + -0xb8) = lVar3;
          *(undefined1 **)((long)register0x00000008 + -0xb0) =
               (undefined1 *)((long)register0x00000008 + -0x80);
          *(undefined **)((long)register0x00000008 + -0xa8) =
               &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar10 != 0) && (*(char *)(lVar10 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar10,auVar15._8_8_,cVar1 != '\0',0);
          }
          return lVar10;
        }
        uVar7 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar4,0);
      }
      *(undefined8 *)(lVar3 + 200) = uVar7;
    }
    *(long **)(lVar3 + 0x48) = plVar5;
  }
  return lVar3;
}



// ============================================================
// RVA: 0x14f957c | Atlas.UI.Screens.SingleplayerChapterScreen.FillBarPassedThirdReward
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_SingleplayerChapterScreen__FillBarPassedThirdReward
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar14;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar15;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined8 unaff_d9;
  undefined1 auVar16 [16];
  
  uVar13 = 2;
  puVar2 = (undefined1 *)register0x00000008;
Atlas_UI_Screens_SingleplayerChapterScreen__FillBarPassedReward:
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(long *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(code **)(puVar2 + -8) = unaff_x30;
  unaff_x29 = puVar2 + -0x10;
  unaff_x23 = 0x3d28ee0;
  unaff_x22 = 0x3d412f8;
  if ((bRam0000000003eb4cb7 & 1) == 0) {
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d642f8);
    func_0x00f78a20(0x3d28ee0);
    func_0x00f78a20(0x3d412f8);
    func_0x00f78a20(0x3d79110);
    bRam0000000003eb4cb7 = 1;
  }
  unaff_x21 = func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerChapterScreen.<>c__DisplayClass31_0_TypeInfo*/ uRam0000000003d28ee0);
  /*Atlas.UI.Screens.SingleplayerChapterScreen.<>c__DisplayClass31_0$$.ctor*/ func_0x0156a514(unaff_x21,0);
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d412f8);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x88), lVar4 != 0)) {
    unaff_x19 = uVar13;
    unaff_x20 = param_4;
    if (*(uint *)(lVar4 + 0x18) <= (uint)uVar13) goto LAB_014f9568;
    unaff_x22 = 0x3d412f8;
    if (unaff_x21 == 0) goto LAB_014f9564;
    unaff_x22 = 0x3d64000;
    lVar4 = *(long *)(lVar4 + (long)(int)(uint)uVar13 * 8 + 0x20);
    *(long *)(unaff_x21 + 0x10) = lVar4;
    param_4 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(param_4,unaff_x21,uRam0000000003d642f8,0);
    uVar13 = 0;
    if (lVar4 != 0) goto code_r0x014f952c;
  }
LAB_014f9564:
  func_0x00f78af4();
  unaff_x19 = uVar13;
  unaff_x20 = param_4;
LAB_014f9568:
  uVar13 = func_0x00f78b24();
  unaff_x30 = Atlas_UI_Screens_SingleplayerChapterScreen__FillBarPassedSecondReward;
  param_4 = func_0x00f78ac0(uVar13,0);
  uVar13 = 1;
  puVar2 = puVar2 + -0x40;
  goto Atlas_UI_Screens_SingleplayerChapterScreen__FillBarPassedReward;
code_r0x014f952c:
  /*Atlas.UI.UIRewardBehaviour$$Wiggle*/ func_0x0151d394(0,lVar4,param_4,0);
  lVar4 = /*STR('event:/UI/ProgressBarComplete')*/ lRam0000000003d79110;
  uVar13 = *(undefined8 *)(puVar2 + -0x30);
  *(undefined8 *)(puVar2 + -0x30) = uVar13;
  *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
  *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
  *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
  *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  uVar14 = 0x3eb4000;
  lVar5 = /*STR('event:/UI/ProgressBarComplete')*/ lRam0000000003d79110;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    lVar5 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return lVar5;
  }
  lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar5 != 0) {
    lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar5,lVar4,uRam0000000003d2faf8);
    if ((int)lVar5 == 0) {
      return lVar5;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar5 != 0)) &&
       (lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,lVar4,uRam0000000003d2fb00), lVar5 != 0)) {
      *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
      *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
      *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar5,0,0);
      return lVar5;
    }
  }
  plVar6 = (long *)func_0x00f78af4();
  *(undefined8 *)(puVar2 + -0x70) = unaff_d9;
  *(ulong *)(puVar2 + -0x68) = CONCAT44(unaff_00005104,unaff_s8);
  *(undefined8 *)(puVar2 + -0x60) = uVar13;
  *(undefined8 *)(puVar2 + -0x58) = 0x3eb4000;
  *(undefined8 *)(puVar2 + -0x50) = 0x3d25580;
  *(long *)(puVar2 + -0x48) = lVar4;
  *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar7 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar6,0);
  if ((plVar7 != (long *)0x0) && (*plVar7 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar8 = func_0x00f78e5c(plVar7);
    *(long **)(puVar2 + -0x90) = plVar7;
    *(long **)(puVar2 + -0x88) = plVar6;
    *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x40;
    *(undefined **)(puVar2 + -0x78) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
    lVar4 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    uVar12 = *(undefined8 *)(puVar2 + -0x90);
    *(undefined8 *)(puVar2 + -0xa0) = uVar13;
    *(undefined8 *)(puVar2 + -0x98) = 0x3eb4000;
    *(undefined8 *)(puVar2 + -0x90) = uVar12;
    *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(puVar2 + -0x88);
    *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0x80);
    *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x78);
    if (lVar4 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar11 = func_0x00f78aec();
      uVar8 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar11,uVar8,0);
    }
    else {
      uVar14 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar9 = (*pcRam0000000003ec01d0)(uVar8);
      if ((uVar9 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar4 = (*pcRam0000000003ec01e0)(uVar8,lVar4);
        return lVar4;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar11 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar11,uVar12,0);
      uVar12 = uVar8;
    }
    uVar8 = func_0x00f78a24(0x3d5a8a8);
    auVar16 = func_0x00f78ac0(uVar11,uVar8);
    *(undefined8 *)(puVar2 + -0xd0) = uVar13;
    *(undefined8 *)(puVar2 + -200) = uVar14;
    *(undefined8 *)(puVar2 + -0xc0) = uVar12;
    *(undefined8 *)(puVar2 + -0xb8) = uVar11;
    *(undefined1 **)(puVar2 + -0xb0) = puVar2 + -0x80;
    *(undefined **)(puVar2 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar4 = (*pcRam0000000003ec01e0)(auVar16._0_8_,auVar16._8_8_);
    return lVar4;
  }
  fVar15 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar13 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar15 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                           plVar7,4,0);
  lVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar13,uRam0000000003d5e780);
  *(undefined8 *)(puVar2 + -0xa0) = 0x3d5e780;
  *(undefined8 *)(puVar2 + -0x98) = 0x3d5e868;
  *(long **)(puVar2 + -0x90) = plVar7;
  *(long **)(puVar2 + -0x88) = plVar6;
  *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x40;
  *(undefined **)(puVar2 + -0x78) = &UNK_01513b44;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar6,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar3 != 0) {
      lVar5 = func_0x00f78adc(plVar6,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
      if ((uVar9 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto code_r0x018eef34;
        uVar13 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      }
      else {
        if (lVar5 == 0) {
code_r0x018eef34:
          auVar16 = func_0x00f78af4();
          lVar10 = auVar16._0_8_;
          *(undefined8 *)(puVar2 + -0xd0) = 0x3d5e780;
          *(long *)(puVar2 + -200) = lVar5;
          *(long **)(puVar2 + -0xc0) = plVar6;
          *(long *)(puVar2 + -0xb8) = lVar4;
          *(undefined1 **)(puVar2 + -0xb0) = puVar2 + -0x80;
          *(undefined **)(puVar2 + -0xa8) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar10 != 0) && (*(char *)(lVar10 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar10,auVar16._8_8_,cVar1 != '\0',0);
          }
          return lVar10;
        }
        uVar13 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar5,0);
      }
      *(undefined8 *)(lVar4 + 200) = uVar13;
    }
    *(long **)(lVar4 + 0x48) = plVar6;
  }
  return lVar4;
}



// ============================================================
// RVA: 0x14f9584 | Atlas.UI.Screens.SingleplayerChapterScreen.ProgressBarAnimationFinished
// ============================================================

void Atlas_UI_Screens_SingleplayerChapterScreen__ProgressBarAnimationFinished(void)

{
  return;
}



// ============================================================
// RVA: 0x14f9588 | Atlas.UI.Screens.SingleplayerChapterScreen.AreAnyFTUEStageUnlockedButNotComplete
// ============================================================

ulong Atlas_UI_Screens_SingleplayerChapterScreen__AreAnyFTUEStageUnlockedButNotComplete
                (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined4 uStack_84;
  
  if ((bRam0000000003eb4cb8 & 1) == 0) {
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d24a80);
    bRam0000000003eb4cb8 = 1;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar9 = *(long *)(*(long *)(param_1 + 0x78) + 0x10);
    if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar9 != 0) {
      param_3 = uRam0000000003d57280;
      uVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar9,**(undefined8 **)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8));
      if ((*(long *)(param_1 + 0x78) != 0) &&
         (lVar9 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar9 != 0)) {
        param_3 = uRam0000000003d57280;
        uVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar9,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8) + 8));
        if ((*(long *)(param_1 + 0x78) != 0) &&
           (lVar9 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar9 != 0)) {
          param_3 = uRam0000000003d57280;
          uVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar9,*(undefined8 *)
                                         (*(long *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8) + 0x18));
          if (*(long *)(param_1 + 0x98) != 0) {
            param_3 = 0;
            uVar1 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                              (*(long *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0));
            if (*(long *)(param_1 + 0x98) != 0) {
              param_3 = 0;
              uVar2 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                (*(long *)(param_1 + 0x98),uVar5);
              if (*(long *)(param_1 + 0x98) != 0) {
                param_3 = 0;
                uVar3 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                  (*(long *)(param_1 + 0x98),uVar6);
                if (*(long *)(param_1 + 0x98) != 0) {
                  uVar4 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                    (*(long *)(param_1 + 0x98),uVar7,0);
                  return (ulong)(uVar1 | uVar2 | uVar3 | uVar4);
                }
              }
            }
          }
        }
      }
    }
  }
  auVar10 = func_0x00f78af4();
  uStack_84 = (undefined4)param_3;
  if ((bRam0000000003eb4cbc & 1) == 0) {
    func_0x00f78a20(0x3d79070);
    bRam0000000003eb4cbc = 1;
  }
  /*Atlas.UI.Screens.SingleplayerChapterScreen$$SelectEvent*/ func_0x014f978c(auVar10._0_8_,auVar10._8_8_,param_3);
  uVar5 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_84,0);
  uVar5 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('event:/UI/Front_End/Prologue_')*/ uRam0000000003d79070,uVar5,0);
  uVar8 = /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(uVar5,0);
  return uVar8;
}



// ============================================================
// RVA: 0x14f96f0 | Atlas.UI.Screens.SingleplayerChapterScreen.EventButtonPressed
// ============================================================

void Atlas_UI_Screens_SingleplayerChapterScreen__EventButtonPressed
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uStack_44;
  
  uStack_44 = (undefined4)param_3;
  if ((bRam0000000003eb4cbc & 1) == 0) {
    func_0x00f78a20(0x3d79070);
    bRam0000000003eb4cbc = 1;
  }
  /*Atlas.UI.Screens.SingleplayerChapterScreen$$SelectEvent*/ func_0x014f978c(param_1,param_2,param_3);
  uVar1 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_44,0);
  uVar1 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('event:/UI/Front_End/Prologue_')*/ uRam0000000003d79070,uVar1,0);
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(uVar1,0);
  return;
}



// ============================================================
// RVA: 0x14f978c | Atlas.UI.Screens.SingleplayerChapterScreen.SelectEvent
// ============================================================

undefined8 *
Atlas_UI_Screens_SingleplayerChapterScreen__SelectEvent(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_88;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb4cbd & 1) == 0) {
    func_0x00f78a20(0x3d2dc20);
    func_0x00f78a20(0x3d21b30);
    func_0x00f78a20(0x3d57278);
    func_0x00f78a20(0x3d572e0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23c28);
    func_0x00f78a20(0x3d412f8);
    func_0x00f78a20(0x3d41308);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4cbd = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = param_2;
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x78) + 0x10), lVar6 != 0)) {
      lVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,param_2,uRam0000000003d57278);
      if (*(long *)(param_1 + 0x70) != 0) {
        uVar7 = /*Atlas.Stats.UnlockManager$$GetChallengesCompletedBitFieldForEvent*/ func_0x01518cf0(*(long *)(param_1 + 0x70),param_2,0);
        if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*Atlas.Stats.UnlockManager$$ChallengeCompleted*/ func_0x01518d78(uVar7,1,0);
        iVar3 = /*Atlas.Stats.UnlockManager$$ChallengeCompleted*/ func_0x01518d78(uVar7,2,0);
        iVar4 = /*Atlas.Stats.UnlockManager$$ChallengeCompleted*/ func_0x01518d78(uVar7,4,0);
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
        if (lVar8 != 0) {
          plVar14 = *(long **)(lVar8 + 0x90);
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41308);
          if ((((lVar8 != 0) && (lVar6 != 0)) && (*(long *)(lVar8 + 0x88) != 0)) &&
             (uVar7 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar8 + 0x88),*(undefined8 *)(lVar6 + 0x20),0),
             plVar14 != (long *)0x0)) {
            (**(code **)(*plVar14 + 0x558))(plVar14,uVar7,*(undefined8 *)(*plVar14 + 0x560));
            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
            if (lVar8 != 0) {
              plVar14 = *(long **)(lVar8 + 0x98);
              iStack_7c = param_3 + 1;
              uVar7 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_7c,0);
              if (plVar14 != (long *)0x0) {
                (**(code **)(*plVar14 + 0x558))(plVar14,uVar7,*(undefined8 *)(*plVar14 + 0x560));
                lVar8 = /*Atlas.Definitions.EventDefinition$$get_Challenge1*/ func_0x015836d4(lVar6,0);
                if (lVar5 != 0) {
                  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar5,*(undefined8 *)(lVar8 + 0x18),&uStack_68,0);
                  lVar8 = /*Atlas.Definitions.EventDefinition$$get_Challenge2*/ func_0x015836dc(lVar6,0);
                  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar5,*(undefined8 *)(lVar8 + 0x18),&uStack_70,0);
                  lVar8 = /*Atlas.Definitions.EventDefinition$$get_Challenge3*/ func_0x015836e4(lVar6,0);
                  /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar5,*(undefined8 *)(lVar8 + 0x18),&uStack_78,0);
                  lVar8 = /*Atlas.Definitions.EventDefinition$$get_Challenge1*/ func_0x015836d4(lVar6,0);
                  if (*(long *)(lVar8 + 0x28) != 0) {
                    lVar8 = /*Atlas.Definitions.EventDefinition$$get_Challenge1*/ func_0x015836d4(lVar6,0);
                    uVar7 = uStack_68;
                    if (*(long *)(lVar8 + 0x28) == 0) goto LAB_014f9ff4;
                    if (*(long *)(*(long *)(lVar8 + 0x28) + 0x18) != 0) {
                      lVar8 = /*Atlas.Definitions.EventDefinition$$get_Challenge1*/ func_0x015836d4(lVar6,0);
                      uStack_68 = /*System.String$$Format*/ func_0x029cf564(uVar7,*(undefined8 *)(lVar8 + 0x28),0);
                    }
                  }
                  lVar8 = /*Atlas.Definitions.EventDefinition$$get_Challenge2*/ func_0x015836dc(lVar6,0);
                  if (*(long *)(lVar8 + 0x28) != 0) {
                    lVar8 = /*Atlas.Definitions.EventDefinition$$get_Challenge2*/ func_0x015836dc(lVar6,0);
                    uVar7 = uStack_70;
                    if (*(long *)(lVar8 + 0x28) == 0) goto LAB_014f9ff4;
                    if (*(long *)(*(long *)(lVar8 + 0x28) + 0x18) != 0) {
                      lVar8 = /*Atlas.Definitions.EventDefinition$$get_Challenge2*/ func_0x015836dc(lVar6,0);
                      uStack_70 = /*System.String$$Format*/ func_0x029cf564(uVar7,*(undefined8 *)(lVar8 + 0x28),0);
                    }
                  }
                  lVar8 = /*Atlas.Definitions.EventDefinition$$get_Challenge3*/ func_0x015836e4(lVar6,0);
                  if (*(long *)(lVar8 + 0x28) != 0) {
                    lVar8 = /*Atlas.Definitions.EventDefinition$$get_Challenge3*/ func_0x015836e4(lVar6,0);
                    uVar7 = uStack_78;
                    if (*(long *)(lVar8 + 0x28) == 0) goto LAB_014f9ff4;
                    if (*(long *)(*(long *)(lVar8 + 0x28) + 0x18) != 0) {
                      lVar8 = /*Atlas.Definitions.EventDefinition$$get_Challenge3*/ func_0x015836e4(lVar6,0);
                      uStack_78 = /*System.String$$Format*/ func_0x029cf564(uVar7,*(undefined8 *)(lVar8 + 0x28),0);
                    }
                  }
                  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
                  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0xa0), lVar8 != 0)) {
                    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_014f9ff8;
                    if ((*(long *)(lVar8 + 0x20) != 0) &&
                       (plVar14 = *(long **)(*(long *)(lVar8 + 0x20) + 0x18), plVar14 != (long *)0x0
                       )) {
                      (**(code **)(*plVar14 + 0x558))
                                (plVar14,uStack_68,*(undefined8 *)(*plVar14 + 0x560));
                      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
                      if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0xa0), lVar8 != 0)) {
                        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_014f9ff8;
                        if ((*(long *)(lVar8 + 0x28) != 0) &&
                           (plVar14 = *(long **)(*(long *)(lVar8 + 0x28) + 0x18),
                           plVar14 != (long *)0x0)) {
                          (**(code **)(*plVar14 + 0x558))
                                    (plVar14,uStack_70,*(undefined8 *)(*plVar14 + 0x560));
                          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
                          if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0xa0), lVar8 != 0)) {
                            if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_014f9ff8;
                            if ((*(long *)(lVar8 + 0x30) != 0) &&
                               (plVar14 = *(long **)(*(long *)(lVar8 + 0x30) + 0x18),
                               plVar14 != (long *)0x0)) {
                              (**(code **)(*plVar14 + 0x558))
                                        (plVar14,uStack_78,*(undefined8 *)(*plVar14 + 0x560));
                              lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
                              if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0xa0), lVar8 != 0)) {
                                if (*(int *)(lVar8 + 0x18) == 0) goto LAB_014f9ff8;
                                if (*(long *)(lVar8 + 0x20) != 0) {
                                  /*Core.Localisation.LocalisationManager$$FixForMultilineIfArabic*/ func_0x0164ff98(lVar5,*(undefined8 *)
                                                         (*(long *)(lVar8 + 0x20) + 0x18),0);
                                  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
                                  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0xa0), lVar8 != 0))
                                  {
                                    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0)
                                    goto LAB_014f9ff8;
                                    if (*(long *)(lVar8 + 0x28) != 0) {
                                      /*Core.Localisation.LocalisationManager$$FixForMultilineIfArabic*/ func_0x0164ff98(lVar5,*(undefined8 *)
                                                             (*(long *)(lVar8 + 0x28) + 0x18),0);
                                      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
                                      if ((lVar8 != 0) &&
                                         (lVar8 = *(long *)(lVar8 + 0xa0), lVar8 != 0)) {
                                        if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_014f9ff8;
                                        if (*(long *)(lVar8 + 0x30) != 0) {
                                          /*Core.Localisation.LocalisationManager$$FixForMultilineIfArabic*/ func_0x0164ff98(lVar5,*(undefined8 *)
                                                                 (*(long *)(lVar8 + 0x30) + 0x18),0)
                                          ;
                                          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
                                          if (iVar2 == 0) {
                                            if ((lVar5 != 0) &&
                                               (lVar5 = *(long *)(lVar5 + 0xa0), lVar5 != 0)) {
                                              if (*(int *)(lVar5 + 0x18) == 0) goto LAB_014f9ff8;
                                              if (*(long *)(lVar5 + 0x20) != 0) {
                                                /*Atlas.UI.UIAnimatingFlagsBehaviour$$Reset*/ func_0x0151250c(*(long *)(lVar5 + 0x20),0);
                                                goto LAB_014f9ce4;
                                              }
                                            }
                                          }
                                          else if ((lVar5 != 0) &&
                                                  (lVar5 = *(long *)(lVar5 + 0xa0), lVar5 != 0)) {
                                            if (*(int *)(lVar5 + 0x18) == 0) goto LAB_014f9ff8;
                                            if (*(long *)(lVar5 + 0x20) != 0) {
                                              /*Atlas.UI.UIAnimatingFlagsBehaviour$$SetCompleted*/ func_0x0151243c(*(long *)(lVar5 + 0x20),0);
LAB_014f9ce4:
                                              lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
                                              if (iVar3 == 0) {
                                                if ((lVar5 != 0) &&
                                                   (lVar5 = *(long *)(lVar5 + 0xa0), lVar5 != 0)) {
                                                  if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0)
                                                  goto LAB_014f9ff8;
                                                  if (*(long *)(lVar5 + 0x28) != 0) {
                                                    /*Atlas.UI.UIAnimatingFlagsBehaviour$$Reset*/ func_0x0151250c(*(long *)(lVar5 + 0x28),0);
                                                    goto code_r0x014f9d48;
                                                  }
                                                }
                                              }
                                              else if ((lVar5 != 0) &&
                                                      (lVar5 = *(long *)(lVar5 + 0xa0), lVar5 != 0))
                                              {
                                                if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0)
                                                goto LAB_014f9ff8;
                                                if (*(long *)(lVar5 + 0x28) != 0) {
                                                  /*Atlas.UI.UIAnimatingFlagsBehaviour$$SetCompleted*/ func_0x0151243c(*(long *)(lVar5 + 0x28),0);
code_r0x014f9d48:
                                                  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,
                                                  uRam0000000003d412f8);
                                                  if (iVar4 == 0) {
                                                    if ((lVar5 != 0) &&
                                                       (lVar5 = *(long *)(lVar5 + 0xa0), lVar5 != 0)
                                                       ) {
                                                      if (*(uint *)(lVar5 + 0x18) < 3)
                                                      goto LAB_014f9ff8;
                                                      if (*(long *)(lVar5 + 0x30) != 0) {
                                                        /*Atlas.UI.UIAnimatingFlagsBehaviour$$Reset*/ func_0x0151250c(*(long *)(lVar5 + 0x30),0);
                                                        goto code_r0x014f9dac;
                                                      }
                                                    }
                                                  }
                                                  else if ((lVar5 != 0) &&
                                                          (lVar5 = *(long *)(lVar5 + 0xa0),
                                                          lVar5 != 0)) {
                                                    if (*(uint *)(lVar5 + 0x18) < 3)
                                                    goto LAB_014f9ff8;
                                                    if (*(long *)(lVar5 + 0x30) != 0) {
                                                      /*Atlas.UI.UIAnimatingFlagsBehaviour$$SetCompleted*/ func_0x0151243c(*(long *)(lVar5 + 0x30),0);
code_r0x014f9dac:
                                                      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,
                                                  uRam0000000003d412f8);
                                                  if ((lVar5 != 0) && (*(long *)(lVar5 + 0xa8) != 0)
                                                     ) {
                                                    uVar1 = *(uint *)(*(long *)(lVar5 + 0xa8) + 0x18
                                                                     );
                                                    if (0 < (int)uVar1) {
                                                      uVar12 = 0;
                                                      do {
                                                        lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,
                                                  uRam0000000003d412f8);
                                                  if ((lVar5 == 0) ||
                                                     (lVar5 = *(long *)(lVar5 + 0xa8), lVar5 == 0))
                                                  goto LAB_014f9ff4;
                                                  if (*(uint *)(lVar5 + 0x18) <= uVar12)
                                                  goto LAB_014f9ff8;
                                                  lVar5 = *(long *)(lVar5 + (long)(int)uVar12 * 8 +
                                                                   0x20);
                                                  if ((lVar5 == 0) ||
                                                     (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0), lVar5 == 0))
                                                  goto LAB_014f9ff4;
                                                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,0,0);
                                                  uVar12 = uVar12 + 1;
                                                  } while (uVar1 != uVar12);
                                                  }
                                                  lVar5 = /*Atlas.Definitions.EventDefinition$$get_GameContextDefinitionRef*/ func_0x01583694(lVar6,0);
                                                  uVar7 = *(undefined8 *)(lVar5 + 8);
                                                  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,
                                                  uRam0000000003d412f8);
                                                  if (lVar5 != 0) {
                                                    plVar14 = *(long **)(lVar5 + 0xb0);
                                                    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,
                                                  uRam0000000003d41308);
                                                  if (lVar5 != 0) {
                                                    uVar13 = *(undefined8 *)(lVar5 + 0x88);
                                                    uVar9 = func_0x00f78aec(/*Atlas.UI.GameContextMetagameData_TypeInfo*/ uRam0000000003d21b30);
                                                    /*Atlas.UI.GameContextMetagameData$$.ctor*/ func_0x015a4fcc(uVar9,uVar7,uVar13,0,0);
                                                    if (plVar14 != (long *)0x0) {
                                                      (**(code **)(*plVar14 + 0x188))
                                                                (plVar14,uVar9,
                                                                 *(undefined8 *)(*plVar14 + 400));
                                                      uStack_88 = *(undefined8 *)(lVar6 + 0x70);
                                                      iVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_88,0);
                                                      if (iVar2 == 0) {
code_r0x014f9f90:
                                                        lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,
                                                  uRam0000000003d412f8);
                                                  if (((lVar5 != 0) &&
                                                      (*(long *)(lVar5 + 0xc0) != 0)) &&
                                                     (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar5 + 0xc0
                                                                                       ),0),
                                                     lVar5 != 0)) {
                                                    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,0,0);
code_r0x014f9fc0:
                                                    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,
                                                  uRam0000000003d412f8);
                                                  if (lVar5 != 0) {
                                                    puVar10 = (undefined8 *)
                                                                                                                            
                                                  Atlas_UI_Screens_SingleplayerChapterBehaviour__RebuildEventLayout
                                                            ();
                                                  return puVar10;
                                                  }
                                                  }
                                                  }
                                                  else if ((*(long *)(param_1 + 0x78) != 0) &&
                                                          (lVar5 = *(long *)(*(long *)(param_1 +
                                                                                      0x78) + 0x10),
                                                          lVar5 != 0)) {
                                                    lVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,*(undefined8 *)
                                                                                   (lVar6 + 0x70),
                                                                            uRam0000000003d572e0);
                                                    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132)
                                                          >> 10 & 1) != 0) &&
                                                       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0))
                                                    {
                                                      func_0x00f78ad0();
                                                    }
                                                    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
                                                    if (iVar2 == 0) goto code_r0x014f9f90;
                                                    if (lVar5 == 0) goto LAB_014f9ff4;
                                                    iVar2 = /*Atlas.Definitions.PickupBoxDefinition$$get_HasLocKeyAndSprite*/ func_0x014b8c18(lVar5,0);
                                                    if (iVar2 == 0) goto code_r0x014f9f90;
                                                    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,
                                                  uRam0000000003d412f8);
                                                  if (lVar6 != 0) {
                                                    plVar14 = *(long **)(lVar6 + 0xc0);
                                                    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,
                                                  uRam0000000003d41308);
                                                  if (lVar6 != 0) {
                                                    uVar9 = *(undefined8 *)(lVar6 + 0x88);
                                                    uVar7 = func_0x00f78aec(/*Atlas.UI.PickupBoxMetagameData_TypeInfo*/ uRam0000000003d23c28);
                                                    /*Atlas.UI.PickupBoxMetagameData$$.ctor*/ func_0x014b8cb8(uVar7,lVar5,uVar9,0);
                                                    if (plVar14 != (long *)0x0) {
                                                      (**(code **)(*plVar14 + 0x188))
                                                                (plVar14,uVar7,
                                                                 *(undefined8 *)(*plVar14 + 400));
                                                      goto code_r0x014f9fc0;
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
        }
      }
    }
  }
LAB_014f9ff4:
  func_0x00f78af4();
LAB_014f9ff8:
  uVar7 = func_0x00f78b24();
  uVar7 = func_0x00f78ac0(uVar7,0);
  if ((bRam0000000003eb4cbe & 1) == 0) {
    func_0x00f78a20(0x3d412f8);
    bRam0000000003eb4cbe = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar7,uRam0000000003d412f8);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x78) != 0)) {
    return (undefined8 *)(ulong)(*(char *)(*(long *)(lVar5 + 0x78) + 0x90) == '\0');
  }
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb4cbf & 1) == 0) {
    func_0x00f78a20(0x3d41300);
    bRam0000000003eb4cbf = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar5,uRam0000000003d41300);
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x20) != 0) {
      /*Atlas.UI.Screens.SingleplayerChapterScreen.ContinueSelected$$Invoke*/ func_0x0156a54c(*(long *)(lVar6 + 0x20),*(undefined8 *)(lVar5 + 0x88),0);
    }
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb4cc0 & 1) == 0) {
    func_0x00f78a20(0x3d2c958);
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4cc0 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar5 + 0x88) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar10 = (undefined8 *)
              (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(lRam0000000003d2c958 + 0x18) + 0xc0) + 0x38))();
    return puVar10;
  }
  auVar15 = func_0x00f78af4();
  puVar11 = auVar15._8_8_;
  puVar10 = auVar15._0_8_;
  uVar9 = puVar11[1];
  uVar7 = *puVar11;
  puVar10[2] = puVar11[2];
  puVar10[1] = uVar9;
  *puVar10 = uVar7;
  return puVar10;
}



// ============================================================
// RVA: 0x14fa004 | Atlas.UI.Screens.SingleplayerChapterScreen.CanProgressToNextScreen
// ============================================================

undefined8 * Atlas_UI_Screens_SingleplayerChapterScreen__CanProgressToNextScreen(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4cbe & 1) == 0) {
    func_0x00f78a20(0x3d412f8);
    bRam0000000003eb4cbe = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d412f8);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x78) != 0)) {
    return (undefined8 *)(ulong)(*(char *)(*(long *)(lVar1 + 0x78) + 0x90) == '\0');
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4cbf & 1) == 0) {
    func_0x00f78a20(0x3d41300);
    bRam0000000003eb4cbf = 1;
  }
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar1,uRam0000000003d41300);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x20) != 0) {
      /*Atlas.UI.Screens.SingleplayerChapterScreen.ContinueSelected$$Invoke*/ func_0x0156a54c(*(long *)(lVar2 + 0x20),*(undefined8 *)(lVar1 + 0x88),0);
    }
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4cc0 & 1) == 0) {
    func_0x00f78a20(0x3d2c958);
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4cc0 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar1 + 0x88) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar3 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c958 + 0x18) + 0xc0) + 0x38))();
    return puVar3;
  }
  auVar7 = func_0x00f78af4();
  puVar4 = auVar7._8_8_;
  puVar3 = auVar7._0_8_;
  uVar6 = puVar4[1];
  uVar5 = *puVar4;
  puVar3[2] = puVar4[2];
  puVar3[1] = uVar6;
  *puVar3 = uVar5;
  return puVar3;
}



// ============================================================
// RVA: 0x14fa078 | Atlas.UI.Screens.SingleplayerChapterScreen.ContinuePressed
// ============================================================

undefined8 * Atlas_UI_Screens_SingleplayerChapterScreen__ContinuePressed(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4cbf & 1) == 0) {
    func_0x00f78a20(0x3d41300);
    bRam0000000003eb4cbf = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41300);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x20) != 0) {
      /*Atlas.UI.Screens.SingleplayerChapterScreen.ContinueSelected$$Invoke*/ func_0x0156a54c(*(long *)(lVar1 + 0x20),*(undefined8 *)(param_1 + 0x88),0);
    }
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4cc0 & 1) == 0) {
    func_0x00f78a20(0x3d2c958);
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4cc0 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar1 + 0x88) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c958 + 0x18) + 0xc0) + 0x38))();
    return puVar2;
  }
  auVar6 = func_0x00f78af4();
  puVar3 = auVar6._8_8_;
  puVar2 = auVar6._0_8_;
  uVar5 = puVar3[1];
  uVar4 = *puVar3;
  puVar2[2] = puVar3[2];
  puVar2[1] = uVar5;
  *puVar2 = uVar4;
  return puVar2;
}



// ============================================================
// RVA: 0x14fa0f0 | Atlas.UI.Screens.SingleplayerChapterScreen..ctor
// ============================================================

void Atlas_UI_Screens_SingleplayerChapterScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4cc0 & 1) == 0) {
    func_0x00f78a20(0x3d2c958);
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4cc0 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(param_1 + 0x88) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c958 + 0x18) + 0xc0) + 0x38))();
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



// ============================================================
// RVA: 0x14fa180 | Atlas.UI.Screens.SingleplayerChapterScreen..cctor
// ============================================================

void Atlas_UI_Screens_SingleplayerChapterScreen___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4cc1 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d24a80);
    func_0x00f78a20(0x3d6a8d8);
    func_0x00f78a20(0x3d6cbb0);
    func_0x00f78a20(0x3d6cba8);
    func_0x00f78a20(0x3d6cb38);
    func_0x00f78a20(0x3d6cbb8);
    bRam0000000003eb4cc1 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_3_SinglePlayerProgress_1')*/ uRam0000000003d6cba8,0);
  **(undefined8 **)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8) = uVar1;
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_5_SinglePlayerProgress_2')*/ uRam0000000003d6cbb8,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8) + 8) = uVar1;
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_4_SinglePlayerRewards')*/ uRam0000000003d6cbb0,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8) + 0x10) = uVar1;
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_16_UnlockingTheGameChapterScreen')*/ uRam0000000003d6cb38,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8) + 0x18) = uVar1;
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Chapter_Prologue_1')*/ uRam0000000003d6a8d8,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.SingleplayerChapterScreen_TypeInfo*/ lRam0000000003d24a80 + 0xb8) + 0x20) = uVar1;
  return;
}



