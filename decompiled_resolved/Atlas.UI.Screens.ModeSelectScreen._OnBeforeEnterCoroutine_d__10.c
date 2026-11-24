// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.ModeSelectScreen.<OnBeforeEnterCoroutine>d__10

// ============================================================
// RVA: 0x155f3c4 | Atlas.UI.Screens.ModeSelectScreen.<OnBeforeEnterCoroutine>d__10..ctor
// ============================================================

void Atlas_UI_Screens_ModeSelectScreen__OnBeforeEnterCoroutine_d__10___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x155f3f0 | Atlas.UI.Screens.ModeSelectScreen.<OnBeforeEnterCoroutine>d__10.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_ModeSelectScreen__OnBeforeEnterCoroutine_d__10__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x155f3f4 | Atlas.UI.Screens.ModeSelectScreen.<OnBeforeEnterCoroutine>d__10.MoveNext
// ============================================================

undefined8 Atlas_UI_Screens_ModeSelectScreen__OnBeforeEnterCoroutine_d__10__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000003eb4fbf & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d2c7f0);
    func_0x00f78a20(0x3d2c7f8);
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d223e0);
    func_0x00f78a20(0x3d5a7e0);
    func_0x00f78a20(0x3d5a7e8);
    func_0x00f78a20(0x3d5a7f0);
    func_0x00f78a20(0x3d234d8);
    func_0x00f78a20(0x3d411a8);
    func_0x00f78a20(0x3d411b0);
    func_0x00f78a20(0x3d411b8);
    bRam0000000003eb4fbf = 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) goto LAB_0155fa98;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar5 == 0) || (lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar5,uRam0000000003d411b0), lVar2 == 0))
    goto LAB_0155fa98;
    *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(lVar2 + 0x30);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar5,uRam0000000003d411b0);
    if (lVar2 == 0) goto LAB_0155fa98;
    *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar2 + 0x38);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d411b8);
    if (lVar2 == 0) goto LAB_0155fa98;
    *(undefined8 *)(lVar5 + 0x80) = *(undefined8 *)(lVar2 + 0x48);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d411b8);
    if (lVar2 == 0) goto LAB_0155fa98;
    *(undefined8 *)(lVar5 + 0x88) = *(undefined8 *)(lVar2 + 0xd8);
    uVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d411a8);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d411b8);
    if (lVar2 == 0) goto LAB_0155fa98;
    Atlas_UI_Screens_AtlasGameCenterExtensions__SetGameCenterButtonShownInTopBar
              (uVar3,1,*(undefined8 *)(lVar2 + 0x28),0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d411b8);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x48) == 0)) goto LAB_0155fa98;
    uVar3 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar2 + 0x48),0);
    Atlas_Gameplay_KartLoadout__FromSaveGame(&uStack_e0,uVar3,0);
    uStack_98 = uStack_d0;
    uStack_a0 = uStack_d8;
    uStack_88 = uStack_c0;
    uStack_90 = uStack_c8;
    uStack_78 = uStack_b0;
    uStack_80 = uStack_b8;
    uStack_70 = uStack_a8;
    if (*(long *)(lVar5 + 0x70) == 0) goto LAB_0155fa98;
    uStack_120 = uStack_e0;
    uStack_110 = uStack_d0;
    uStack_118 = uStack_d8;
    uStack_100 = uStack_c0;
    uStack_108 = uStack_c8;
    uStack_f0 = uStack_b0;
    uStack_f8 = uStack_b8;
    uStack_e8 = uStack_a8;
    Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
              (*(long *)(lVar5 + 0x70),0,&uStack_120,0);
    if ((*(long *)(lVar5 + 0x70) == 0) ||
       (lVar2 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(lVar5 + 0x70),0,0),
       lVar2 == 0)) goto LAB_0155fa98;
    Atlas_Gameplay_Kart_KartFEAnimator__PlayHomeScreen(lVar2,0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d411b8);
    if ((lVar2 == 0) ||
       (((*(long *)(lVar2 + 0x20) == 0 ||
         (lVar2 = *(long *)(*(long *)(lVar2 + 0x20) + 0x10), lVar2 == 0)) ||
        (lVar2 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar2,uStack_e0,uRam0000000003d57270), lVar2 == 0))))
    goto LAB_0155fa98;
    lVar2 = /*Atlas.Definitions.ContentDefinition$$get_IPDefinitionRef*/ func_0x015711b0(lVar2,0);
    uVar3 = *(undefined8 *)(lVar2 + 8);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d411a8);
    if (lVar2 == 0) goto LAB_0155fa98;
    plVar7 = *(long **)(lVar2 + 0x88);
    uVar4 = func_0x00f78aec(/*Atlas.UI.IPMetagameData_TypeInfo*/ uRam0000000003d223e0);
    /*Atlas.UI.IPMetagameData$$.ctor*/ func_0x015b716c(uVar4,uVar3,0);
    if (plVar7 == (long *)0x0) goto LAB_0155fa98;
    (**(code **)(*plVar7 + 0x188))(plVar7,uVar4,*(undefined8 *)(*plVar7 + 400));
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d411a8);
    if (lVar2 == 0) goto LAB_0155fa98;
    lVar2 = *(long *)(lVar2 + 0x70);
    uVar3 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar3,lVar5,uRam0000000003d5a7e8,0);
    if (lVar2 == 0) goto LAB_0155fa98;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar2,uVar3,0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d411a8);
    if (lVar2 == 0) goto LAB_0155fa98;
    lVar2 = *(long *)(lVar2 + 0x80);
    uVar3 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar3,lVar5,uRam0000000003d5a7f0,0);
    if (lVar2 == 0) goto LAB_0155fa98;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar2,uVar3,0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d411a8);
    if (lVar2 == 0) goto LAB_0155fa98;
    lVar2 = *(long *)(lVar2 + 0x78);
    uVar3 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar3,lVar5,uRam0000000003d5a7e0,0);
    if (lVar2 == 0) goto LAB_0155fa98;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar2,uVar3,0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d411a8);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x90) == 0)) goto LAB_0155fa98;
    /*Atlas.UI.SupportedInputIconsBehaviour$$Init*/ func_0x015074ec(*(long *)(lVar2 + 0x90),0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d411a8);
    if (lVar2 == 0) goto LAB_0155fa98;
    Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
              (lVar5,*(undefined8 *)(lVar2 + 0x80),uRam0000000003d2c7f8);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d411b8);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x70) == 0)) goto LAB_0155fa98;
    iVar1 = /*Atlas.Stats.DailyChallengeManager$$PollForChallengeRefresh*/ func_0x01574644(*(long *)(lVar2 + 0x70),0);
    if (iVar1 != 0) {
      lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d411b8);
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0x48) == 0)) goto LAB_0155fa98;
      /*Atlas.Save.SaveManager$$StartSave*/ func_0x014eb4e0(*(long *)(lVar2 + 0x48),0);
    }
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d411b8);
    if (lVar2 == 0) goto LAB_0155fa98;
    lVar6 = *(long *)(lVar2 + 0x68);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d411b8);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x70) == 0)) goto LAB_0155fa98;
    uVar3 = /*Atlas.Stats.DailyChallengeManager$$AreAllChallengesComplete*/ func_0x01574d48(*(long *)(lVar2 + 0x70),0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d411b8);
    if ((lVar2 == 0) ||
       (((*(long *)(lVar2 + 0x48) == 0 ||
         (lVar2 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar2 + 0x48),0), lVar2 == 0)) || (lVar6 == 0))))
    goto LAB_0155fa98;
    /*Atlas.Stats.AchievementManager$$CheckDailyChallengeBespokeAchievements*/ func_0x014482c8(lVar6,uVar3,*(undefined2 *)(lVar2 + 0x108),0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d411b8);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) goto LAB_0155fa98;
    lVar2 = *(long *)(*(long *)(lVar2 + 0x20) + 0x10);
    if (((*(ushort *)(/*Atlas.UI.Screens.ModeSelectScreen_TypeInfo*/ lRam0000000003d234d8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.ModeSelectScreen_TypeInfo*/ lRam0000000003d234d8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar2 == 0) goto LAB_0155fa98;
    uVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar2,**(undefined8 **)(/*Atlas.UI.Screens.ModeSelectScreen_TypeInfo*/ lRam0000000003d234d8 + 0xb8),
                            uRam0000000003d57280);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d411b8);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0xb0) == 0)) goto LAB_0155fa98;
    iVar1 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedAndComplete(*(long *)(lVar2 + 0xb0),uVar3,0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d411a8);
    if (iVar1 == 0) {
      if (((lVar2 == 0) || (*(long *)(lVar2 + 0x98) == 0)) ||
         (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar2 + 0x98),0), lVar2 == 0)) goto LAB_0155fa98;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar2,0,0);
    }
    else {
      if (lVar2 == 0) goto LAB_0155fa98;
      lVar6 = *(long *)(lVar2 + 0x98);
      lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d411b8);
      if (lVar2 == 0) goto LAB_0155fa98;
      uVar3 = *(undefined8 *)(lVar2 + 0x70);
      lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d411b8);
      if (lVar2 == 0) goto LAB_0155fa98;
      uVar4 = *(undefined8 *)(lVar2 + 0x48);
      lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d411b8);
      if (lVar2 == 0) goto LAB_0155fa98;
      uVar8 = *(undefined8 *)(lVar2 + 0x88);
      lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d411b8);
      if ((lVar2 == 0) || (lVar6 == 0)) goto LAB_0155fa98;
      /*Atlas.UI.DailyChallengesWidgetBehaviour$$Init*/ func_0x01577a80(lVar6,uVar3,uVar4,uVar8,*(undefined8 *)(lVar2 + 0x20),0,0);
    }
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d411a8);
    if (((lVar2 == 0) || (*(long *)(lVar2 + 0x68) == 0)) ||
       (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar2 + 0x68),0), lVar2 == 0)) goto LAB_0155fa98;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar2,0,0);
  }
  if (*(long *)(lVar5 + 0x70) != 0) {
    iVar1 = Atlas_FrontEnd_FrontEndScene__AreAllRequestPartsLoadedAndInstantiated
                      (*(long *)(lVar5 + 0x70),0);
    if (iVar1 != 0) {
      Atlas_UI_Screens_AtlasScreen_LeaguePodiumScreenBehaviour__LeaguePodiumScreen_TransitionData___ReadyToHideLoadingScreenAfterInit
                (lVar5,uRam0000000003d2c7f0);
      return 0;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
LAB_0155fa98:
  lVar5 = func_0x00f78af4();
  return *(undefined8 *)(lVar5 + 0x18);
}



// ============================================================
// RVA: 0x155fa9c | Atlas.UI.Screens.ModeSelectScreen.<OnBeforeEnterCoroutine>d__10.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_ModeSelectScreen__OnBeforeEnterCoroutine_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x155faa4 | Atlas.UI.Screens.ModeSelectScreen.<OnBeforeEnterCoroutine>d__10.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_ModeSelectScreen__OnBeforeEnterCoroutine_d__10__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63720);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x155fae4 | Atlas.UI.Screens.ModeSelectScreen.<OnBeforeEnterCoroutine>d__10.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_ModeSelectScreen__OnBeforeEnterCoroutine_d__10__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



