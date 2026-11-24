// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.MultiplayerModeSelectScreen

// ============================================================
// RVA: 0x149b498 | Atlas.UI.Screens.MultiplayerModeSelectScreen.OnBeforeEnter
// ============================================================

void Atlas_UI_Screens_MultiplayerModeSelectScreen__OnBeforeEnter(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int aiStack_90 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000003eb4a01 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d2c828);
    func_0x00f78a20(0x3d2c830);
    func_0x00f78a20(0x3d2c838);
    func_0x00f78a20(0x3d2c840);
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d5a9d8);
    func_0x00f78a20(0x3d5a9e0);
    func_0x00f78a20(0x3d5a9c8);
    func_0x00f78a20(0x3d5a9d0);
    func_0x00f78a20(0x3d235f8);
    func_0x00f78a20(0x3d247f8);
    func_0x00f78a20(0x3d411d8);
    func_0x00f78a20(0x3d411e8);
    bRam0000000003eb4a01 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  aiStack_90[3] = 0;
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0xd0) == 0)) goto LAB_0149bed0;
  /*Atlas.Stats.SeasonsManager$$UpdateCurrentDateTime*/ func_0x014f30a0(*(long *)(lVar5 + 0xd0),0);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
  if ((lVar5 == 0) ||
     ((*(long *)(lVar5 + 0x90) == 0 || (*(long *)(*(long *)(lVar5 + 0x90) + 0x20) == 0))))
  goto LAB_0149bed0;
  /*Atlas.Audio.MusicManager$$PlayFrontEndMusicForMultiplayer*/ func_0x0149bff8();
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
  if (lVar5 == 0) goto LAB_0149bed0;
  lVar5 = *(long *)(lVar5 + 0x68);
  uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar6,param_1,uRam0000000003d5a9c8,0);
  if (lVar5 == 0) goto LAB_0149bed0;
  /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar5,uVar6,0);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
  if (lVar5 == 0) goto LAB_0149bed0;
  lVar5 = *(long *)(lVar5 + 0x78);
  uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar6,param_1,uRam0000000003d5a9d0,0);
  if (lVar5 == 0) goto LAB_0149bed0;
  /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar5,uVar6,0);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
  if (lVar5 == 0) goto LAB_0149bed0;
  lVar5 = *(long *)(lVar5 + 0x98);
  uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar6,param_1,uRam0000000003d5a9d8,0);
  if (lVar5 == 0) goto LAB_0149bed0;
  /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar5,uVar6,0);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
  if (lVar5 == 0) goto LAB_0149bed0;
  lVar5 = *(long *)(lVar5 + 0xa0);
  uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar6,param_1,uRam0000000003d5a9e0,0);
  if (lVar5 == 0) goto LAB_0149bed0;
  /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar5,uVar6,0);
  Atlas_UI_Screens_AtlasScreen_ModeSelectScreenBehaviour__ModeSelectScreen_TransitionData___SetScreenHandlePartyInvite
            (param_1,1,uRam0000000003d2c840);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
  if (lVar5 == 0) goto LAB_0149bed0;
  plVar9 = *(long **)(lVar5 + 0x90);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0xd0) == 0)) goto LAB_0149bed0;
  uVar6 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(*(long *)(lVar5 + 0xd0),0);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
  if (lVar5 == 0) goto LAB_0149bed0;
  uVar11 = *(undefined8 *)(lVar5 + 0x50);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x20) == 0)) goto LAB_0149bed0;
  uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x10);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
  if (lVar5 == 0) goto LAB_0149bed0;
  uVar15 = *(undefined8 *)(lVar5 + 0x88);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
  if (lVar5 == 0) goto LAB_0149bed0;
  uVar13 = *(undefined8 *)(lVar5 + 0xd0);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
  if (lVar5 == 0) goto LAB_0149bed0;
  lVar14 = *(long *)(lVar5 + 0xd0);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0xd0) == 0)) goto LAB_0149bed0;
  uVar7 = /*Atlas.Stats.SeasonsManager$$GetCurrentSeason*/ func_0x014f0414(*(long *)(lVar5 + 0xd0),0);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
  if ((lVar5 == 0) || ((*(long *)(lVar5 + 0xd0) == 0 || (lVar14 == 0)))) goto LAB_0149bed0;
  uVar3 = /*Atlas.Stats.SeasonsManager$$IsSeasonActive*/ func_0x014efe8c(lVar14,uVar7,*(undefined8 *)(*(long *)(lVar5 + 0xd0) + 0x38),0);
  uVar7 = func_0x00f78aec(/*Atlas.UI.SeasonMetagameData_TypeInfo*/ uRam0000000003d247f8);
  /*Atlas.UI.SeasonMetagameData$$.ctor*/ func_0x014ef3cc(uVar7,uVar6,uVar11,uVar12,uVar15,uVar13,uVar3 ^ 1,0);
  if (plVar9 == (long *)0x0) goto LAB_0149bed0;
  (**(code **)(*plVar9 + 0x188))(plVar9,uVar7,*(undefined8 *)(*plVar9 + 400));
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
  if (lVar5 == 0) goto LAB_0149bed0;
  Atlas_UI_Screens_AtlasScreen_ArcadeModeSelectScreenBehaviour__ArcadeModeSelectScreen_TransitionData___ReLayoutLayoutAndContentSizeFitters
            (param_1,*(undefined8 *)(lVar5 + 0x70),uRam0000000003d2c828);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
  if (lVar5 == 0) goto LAB_0149bed0;
  Atlas_UI_Screens_AtlasScreen_ArcadeModeSelectScreenBehaviour__ArcadeModeSelectScreen_TransitionData___ReLayoutLayoutAndContentSizeFitters
            (param_1,*(undefined8 *)(lVar5 + 0x80),uRam0000000003d2c828);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
  if (lVar5 == 0) goto LAB_0149bed0;
  Atlas_UI_Screens_AtlasScreen_ArcadeModeSelectScreenBehaviour__ArcadeModeSelectScreen_TransitionData___ReLayoutLayoutAndContentSizeFitters
            (param_1,*(undefined8 *)(lVar5 + 0x88),uRam0000000003d2c828);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
  if (lVar5 == 0) goto LAB_0149bed0;
  Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
            (param_1,*(undefined8 *)(lVar5 + 0x68),uRam0000000003d2c838);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x20) == 0)) goto LAB_0149bed0;
  lVar5 = *(long *)(*(long *)(lVar5 + 0x20) + 0x10);
  if (((*(ushort *)(/*Atlas.UI.Screens.MultiplayerModeSelectScreen_TypeInfo*/ lRam0000000003d235f8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.MultiplayerModeSelectScreen_TypeInfo*/ lRam0000000003d235f8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar5 == 0) goto LAB_0149bed0;
  lVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,**(undefined8 **)(/*Atlas.UI.Screens.MultiplayerModeSelectScreen_TypeInfo*/ lRam0000000003d235f8 + 0xb8),uRam0000000003d57280)
  ;
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
  if ((lVar14 == 0) || (*(long *)(lVar14 + 0xb0) == 0)) goto LAB_0149bed0;
  iVar4 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                    (*(long *)(lVar14 + 0xb0),lVar5,0);
  if (iVar4 != 0) {
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x58) == 0)) goto LAB_0149bed0;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(lVar5 + 0x58),uRam0000000003d3dc70);
    uStack_78 = uStack_a0;
    uStack_80 = uStack_a8;
    uStack_70 = uStack_98;
    while (uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d337d0), uVar6 = uStack_70,
          (uVar8 & 1) != 0) {
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
      if (lVar5 == 0) goto LAB_0149bed4;
      if (*(long *)(lVar5 + 0x98) == 0) {
        func_0x00f78af4();
        goto code_r0x0149bf00;
      }
      /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar5 + 0x98),uVar6,uRam0000000003d3e188);
    }
    aiStack_90[0] = 0x1d7;
    aiStack_90[3] = 1;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d337c8);
    aiStack_90[3] = 0;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0xd0) == 0)) goto LAB_0149bed0;
  iVar4 = /*Atlas.Stats.SeasonsManager$$IsCurrentSeasonActive*/ func_0x014f2774(*(long *)(lVar5 + 0xd0),0);
  if (iVar4 == 0) {
    iVar4 = 0;
code_r0x0149bba4:
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0xb8) == 0)) goto LAB_0149bed0;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar5 + 0xb8),0,0);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
    if (lVar5 == 0) goto LAB_0149bed0;
    lVar14 = *(long *)(lVar5 + 0xb0);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
    if (((lVar5 == 0) || (*(long *)(lVar5 + 0xa8) == 0)) ||
       (/*UnityEngine.RectTransform$$get_anchorMin*/ func_0x032549c8(*(long *)(lVar5 + 0xa8),0), lVar14 == 0)) goto LAB_0149bed0;
    /*UnityEngine.RectTransform$$set_anchorMin*/ func_0x03254a70(lVar14,0);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
    if (lVar5 == 0) goto LAB_0149bed0;
    lVar14 = *(long *)(lVar5 + 0xb0);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
    if (((lVar5 == 0) || (*(long *)(lVar5 + 0xa8) == 0)) ||
       (/*UnityEngine.RectTransform$$get_anchorMax*/ func_0x03254b14(*(long *)(lVar5 + 0xa8),0), lVar14 == 0)) goto LAB_0149bed0;
    /*UnityEngine.RectTransform$$set_anchorMax*/ func_0x03254bbc(lVar14,0);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
    if (lVar5 == 0) goto LAB_0149bed0;
    lVar14 = *(long *)(lVar5 + 0xb0);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
    if (((lVar5 == 0) || (*(long *)(lVar5 + 0xa8) == 0)) ||
       (/*UnityEngine.RectTransform$$get_anchoredPosition*/ func_0x03254c60(*(long *)(lVar5 + 0xa8),0), lVar14 == 0)) goto LAB_0149bed0;
    /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(lVar14,0);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
    if (lVar5 == 0) goto LAB_0149bed0;
    lVar14 = *(long *)(lVar5 + 0xb0);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
    if (((lVar5 == 0) || (*(long *)(lVar5 + 0xa8) == 0)) ||
       (/*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(*(long *)(lVar5 + 0xa8),0), lVar14 == 0)) goto LAB_0149bed0;
    /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(lVar14,0);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
    if (lVar5 == 0) goto LAB_0149bed0;
    lVar14 = *(long *)(lVar5 + 0xb0);
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d411d8);
    if (((lVar5 == 0) || (*(long *)(lVar5 + 0xa8) == 0)) ||
       (/*UnityEngine.RectTransform$$get_pivot*/ func_0x03254ef8(*(long *)(lVar5 + 0xa8),0), lVar14 == 0)) goto LAB_0149bed0;
    /*UnityEngine.RectTransform$$set_pivot*/ func_0x03254fa0(lVar14,0);
    iVar10 = iVar4;
    iVar1 = aiStack_90[3];
  }
  else {
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x20) == 0)) goto LAB_0149bed0;
    lVar5 = *(long *)(*(long *)(lVar5 + 0x20) + 0x10);
    if (((*(ushort *)(/*Atlas.UI.Screens.MultiplayerModeSelectScreen_TypeInfo*/ lRam0000000003d235f8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.MultiplayerModeSelectScreen_TypeInfo*/ lRam0000000003d235f8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar5 == 0) goto LAB_0149bed0;
    lVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.MultiplayerModeSelectScreen_TypeInfo*/ lRam0000000003d235f8 + 0xb8) + 8),
                            uRam0000000003d57280);
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
    if ((lVar14 == 0) || (*(long *)(lVar14 + 0xb0) == 0)) goto LAB_0149bed0;
    iVar4 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                      (*(long *)(lVar14 + 0xb0),lVar5,0);
    if (iVar4 == 0) {
      iVar10 = 0;
      iVar1 = aiStack_90[3];
    }
    else {
      if ((lVar5 == 0) || (*(long *)(lVar5 + 0x58) == 0)) goto LAB_0149bed0;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(lVar5 + 0x58),uRam0000000003d3dc70);
      uStack_78 = uStack_a0;
      uStack_80 = uStack_a8;
      uStack_70 = uStack_98;
      while (uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d337d0), uVar6 = uStack_70,
            iVar10 = aiStack_90[3], (uVar8 & 1) != 0) {
        lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x0149bf00;
        }
        if (*(long *)(lVar5 + 0x98) == 0) {
          func_0x00f78af4();
          goto code_r0x0149bf00;
        }
        /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar5 + 0x98),uVar6,uRam0000000003d3e188);
      }
      iVar4 = aiStack_90[3] + 1;
      aiStack_90[0] = 0x30e;
      aiStack_90[3] = iVar4;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d337c8);
      if ((iVar4 == 0) || (iVar1 = iVar10, aiStack_90[iVar10] != 0x30e)) goto code_r0x0149bba4;
    }
  }
  aiStack_90[3] = iVar1;
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x20) + 0x10);
    if (((*(ushort *)(/*Atlas.UI.Screens.MultiplayerModeSelectScreen_TypeInfo*/ lRam0000000003d235f8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.MultiplayerModeSelectScreen_TypeInfo*/ lRam0000000003d235f8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar5 != 0) {
      lVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.MultiplayerModeSelectScreen_TypeInfo*/ lRam0000000003d235f8 + 0xb8) + 0x10),
                              uRam0000000003d57280);
      lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
      if ((lVar14 != 0) && (*(long *)(lVar14 + 0xb0) != 0)) {
        iVar4 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                          (*(long *)(lVar14 + 0xb0),lVar5,0);
        if (iVar4 != 0) {
          if ((lVar5 == 0) || (*(long *)(lVar5 + 0x58) == 0)) goto LAB_0149bed0;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(lVar5 + 0x58),uRam0000000003d3dc70);
          uStack_78 = uStack_a0;
          uStack_80 = uStack_a8;
          uStack_70 = uStack_98;
          while (uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d337d0), uVar6 = uStack_70,
                (uVar8 & 1) != 0) {
            lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d411e8);
            if (lVar5 == 0) {
              func_0x00f78af4();
              goto code_r0x0149bf00;
            }
            if (*(long *)(lVar5 + 0x98) == 0) {
              func_0x00f78af4();
              goto code_r0x0149bf00;
            }
            /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar5 + 0x98),uVar6,uRam0000000003d3e188);
          }
          aiStack_90[iVar10] = 0x37e;
          aiStack_90[3] = aiStack_90[3] + 1;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d337c8);
        }
        /*Atlas.UI.Screens.MultiplayerModeSelectScreen$$LoopingEpisodesTooltips*/ func_0x0149c0b0(param_1);
        Atlas_UI_Screens_AtlasScreen_LeaguePodiumScreenBehaviour__LeaguePodiumScreen_TransitionData___ReadyToHideLoadingScreenAfterInit
                  (param_1,uRam0000000003d2c830);
        return;
      }
    }
  }
LAB_0149bed0:
  func_0x00f78af4();
LAB_0149bed4:
  func_0x00f78af4();
code_r0x0149bf00:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x149bf04);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x149c0b0 | Atlas.UI.Screens.MultiplayerModeSelectScreen.LoopingEpisodesTooltips
// ============================================================

/* WARNING: Possible PIC construction at 0x0149c260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149c49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149c4e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149c554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149ca90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01514864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01515350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cb98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149ccdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149c6b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149c5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014eceb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0149c5d8) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01515354) */
/* WARNING: Removing unreachable block (ram,0x0149cad4) */
/* WARNING: Removing unreachable block (ram,0x0149cae4) */
/* WARNING: Removing unreachable block (ram,0x0149caec) */
/* WARNING: Removing unreachable block (ram,0x0149cab4) */
/* WARNING: Removing unreachable block (ram,0x0149cac4) */
/* WARNING: Removing unreachable block (ram,0x0149cacc) */
/* WARNING: Removing unreachable block (ram,0x0149ca94) */
/* WARNING: Removing unreachable block (ram,0x0149caa4) */
/* WARNING: Removing unreachable block (ram,0x0149caac) */
/* WARNING: Removing unreachable block (ram,0x0149c558) */
/* WARNING: Removing unreachable block (ram,0x0149c568) */
/* WARNING: Removing unreachable block (ram,0x0149c570) */
/* WARNING: Removing unreachable block (ram,0x0149c58c) */
/* WARNING: Removing unreachable block (ram,0x0149c594) */
/* WARNING: Removing unreachable block (ram,0x0149c59c) */
/* WARNING: Removing unreachable block (ram,0x0149c4a0) */
/* WARNING: Removing unreachable block (ram,0x0149c264) */
/* WARNING: Removing unreachable block (ram,0x0149c274) */
/* WARNING: Removing unreachable block (ram,0x0149c27c) */
/* WARNING: Removing unreachable block (ram,0x0149c2a0) */
/* WARNING: Removing unreachable block (ram,0x0149c2a8) */
/* WARNING: Removing unreachable block (ram,0x014ecebc) */
/* WARNING: Removing unreachable block (ram,0x014ecf34) */
/* WARNING: Removing unreachable block (ram,0x014ecf38) */
/* WARNING: Removing unreachable block (ram,0x014ecf40) */
/* WARNING: Removing unreachable block (ram,0x014ececc) */
/* WARNING: Removing unreachable block (ram,0x014eced0) */
/* WARNING: Removing unreachable block (ram,0x014eced8) */
/* WARNING: Removing unreachable block (ram,0x014ecee4) */
/* WARNING: Removing unreachable block (ram,0x014eceec) */
/* WARNING: Removing unreachable block (ram,0x014ecf00) */
/* WARNING: Removing unreachable block (ram,0x014ecf0c) */
/* WARNING: Removing unreachable block (ram,0x014ecf74) */
/* WARNING: Removing unreachable block (ram,0x014ecf14) */
/* WARNING: Removing unreachable block (ram,0x014ecf58) */
/* WARNING: Removing unreachable block (ram,0x014ecf60) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_Screens_MultiplayerModeSelectScreen__LoopingEpisodesTooltips
                 (undefined1 param_1 [16],float param_2,float param_3,long param_4,
                 undefined8 param_5,ulong param_6)

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long *plVar25;
  long *extraout_x1;
  undefined8 uVar26;
  uint extraout_w8;
  long extraout_x8;
  long extraout_x9;
  int *piVar27;
  long lVar28;
  undefined8 uVar29;
  uint uVar30;
  long unaff_x21;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  long *unaff_x22;
  code *pcVar34;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar35;
  undefined1 *puVar36;
  undefined *puVar37;
  float fVar38;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined8 unaff_d9;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  ulong uStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = (ulong *)auStack_70;
  lVar28 = 0x3eb4000;
  if ((bRam0000000003eb4a08 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d57300);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d235f8);
    func_0x00f78a20(0x3d411e8);
    func_0x00f78a20(0x3d71a80);
    func_0x00f78a20(0x3d76278);
    func_0x00f78a20(0x3d72578);
    func_0x00f78a20(0x3d72580);
    func_0x00f78a20(0x3d65d08);
    func_0x00f78a20(0x3d71a78);
    bRam0000000003eb4a08 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
  lStack_90 = param_4;
  pppppppuStack_80 = (undefined8 *******)&stack0xfffffffffffffff0;
  if (lVar10 != 0) {
    lVar28 = *(long *)(lVar10 + 0x48);
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x20) != 0)) {
      lVar10 = *(long *)(*(long *)(lVar10 + 0x20) + 0x10);
      if (((*(ushort *)(/*Atlas.UI.Screens.MultiplayerModeSelectScreen_TypeInfo*/ lRam0000000003d235f8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.MultiplayerModeSelectScreen_TypeInfo*/ lRam0000000003d235f8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      unaff_x21 = 0;
      unaff_x22 = (long *)0x3d235f8;
      if (lVar10 != 0) {
        param_6 = uRam0000000003d57300;
        unaff_x21 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,*(undefined8 *)
                                            (*(long *)(/*Atlas.UI.Screens.MultiplayerModeSelectScreen_TypeInfo*/ lRam0000000003d235f8 + 0xb8) + 0x18));
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
        if (((lVar10 != 0) && (unaff_x22 = (long *)0x3d235f8, *(long *)(lVar10 + 0xd0) != 0)) &&
           (unaff_x21 != 0)) {
          unaff_x22 = *(long **)(*(long *)(lVar10 + 0xd0) + 0x38);
          uVar11 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4(unaff_x21,0);
          param_6 = 0;
          uVar12 = /*Atlas.Definitions.SeasonRotationHelper$$IsRotationActive*/ func_0x014f18ec(unaff_x22,uVar11);
          if ((uVar12 & 1) == 0) {
            if (lVar28 != 0) {
              uVar26 = 0;
              puStack_78 = &UNK_0149c5d8;
              uVar11 = /*STR('RecentSeasonStage')*/ uRam0000000003d71a80;
              goto code_r0x014ece54;
            }
          }
          else if (lVar28 != 0) {
            param_6 = 0;
            iVar8 = /*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecb54(lVar28,/*STR('SeasonRotationShown')*/ uRam0000000003d72578,0,0);
            if (iVar8 == 0) {
              uVar26 = 1;
              puStack_78 = (undefined *)0x149c264;
              uVar11 = /*STR('SeasonRotationShown')*/ uRam0000000003d72578;
              unaff_x22 = (long *)0x3d72578;
              goto code_r0x014ece54;
            }
            unaff_x22 = (long *)/*Atlas.Definitions.SeasonRotationHelper$$GetSeasonDefinitions*/ func_0x014f1e2c(*(undefined8 *)(unaff_x21 + 0x30),0);
            unaff_x23 = (ulong)*(uint *)(unaff_x21 + 0x20);
            lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
            if ((lVar10 != 0) && (*(long *)(lVar10 + 0xd0) != 0)) {
              unaff_x24 = *(ulong *)(*(long *)(lVar10 + 0xd0) + 0x38);
              uVar11 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4(unaff_x21,0);
              param_6 = unaff_x24;
              auVar39 = /*Atlas.Definitions.SeasonRotationHelper$$GetEpisodeDateRange*/ func_0x014f1968(unaff_x22,unaff_x23,unaff_x24,uVar11,0,0);
              lVar10 = auVar39._8_8_;
              uVar12 = auVar39._0_8_;
              if (lVar10 != 0) {
                param_6 = (ulong)*(uint *)(lVar10 + 0x14);
                uStack_68 = 0;
                /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_68,*(undefined4 *)(lVar10 + 0x18),param_6,
                                *(undefined4 *)(lVar10 + 0x10),0);
                lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
                unaff_x24 = uVar12;
                if ((lVar10 != 0) && (*(long *)(lVar10 + 0xd0) != 0)) {
                  unaff_x23 = *(ulong *)(*(long *)(lVar10 + 0xd0) + 0x38);
                  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  param_6 = 0;
                  uStack_58 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uStack_68,unaff_x23);
                  uVar13 = /*System.TimeSpan$$get_Days*/ func_0x029f02d8(&uStack_58,0);
                  if (uVar12 != 0) {
                    param_6 = (ulong)*(uint *)(uVar12 + 0x14);
                    /*System.DateTime$$.ctor*/ func_0x02a8c93c(&uStack_60,*(undefined4 *)(uVar12 + 0x18),param_6,
                                    *(undefined4 *)(uVar12 + 0x10),0);
                    unaff_x24 = (ulong)*(uint *)(unaff_x21 + 0x20);
                    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
                    unaff_x23 = uVar13;
                    if ((lVar10 != 0) && (*(long *)(lVar10 + 0xd0) != 0)) {
                      unaff_x25 = *(ulong *)(*(long *)(lVar10 + 0xd0) + 0x38);
                      uVar11 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4(unaff_x21,0);
                      param_6 = unaff_x25;
                      lVar10 = /*Atlas.Definitions.SeasonRotationHelper$$GetCurrentEpisode*/ func_0x014f14b8(unaff_x22,unaff_x24,unaff_x25,uVar11,
                                               *(undefined8 *)(unaff_x21 + 0x28),0,0);
                      if (lVar10 != 0) {
                        unaff_x22 = *(long **)(lVar10 + 0x18);
                        unaff_x25 = 0x3d71a78;
                        unaff_x24 = 0x3d65d08;
                        uVar11 = /*Atlas.Save.SaveManager$$GetStringData*/ func_0x014eca00(lVar28,/*STR('RecentSeason')*/ uRam0000000003d71a78,/*STR('')*/ uRam0000000003d65d08,0)
                        ;
                        uVar12 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar11,unaff_x22,0);
                        if ((uVar12 & 1) == 0) {
                          unaff_x24 = /*Atlas.Save.SaveManager$$GetStringData*/ func_0x014eca00(lVar28,/*STR('SeasonStartDate')*/ uRam0000000003d72580,
                                                      /*STR('')*/ uRam0000000003d65d08,0);
                          uVar11 = /*System.DateTime$$ToString*/ func_0x02a8f234(&uStack_60,0);
                          iVar8 = /*System.String$$op_Inequality*/ func_0x029bd9d4(unaff_x24,uVar11,0);
                          if (iVar8 == 0) {
                            if ((int)(uint)uVar13 < 2) {
                              plVar14 = (long *)0x3d71a80;
                              unaff_x22 = (long *)0x3d71a80;
                              param_6 = 0;
                              iVar8 = /*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecb54(lVar28,/*STR('RecentSeasonStage')*/ uRam0000000003d71a80,0,0);
                              if (iVar8 == 3) goto code_r0x0149c6b4;
                              lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
                              if ((lVar10 != 0) && (*(long *)(lVar10 + 0x98) != 0)) {
                                /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar10 + 0x98),
                                                *(undefined8 *)(unaff_x21 + 0x68),
                                                uRam0000000003d3e188);
                                uVar26 = 3;
code_r0x0149c6ac:
                                puStack_78 = &LAB_0149c6b4;
                                uVar11 = /*STR('RecentSeasonStage')*/ uRam0000000003d71a80;
                                unaff_x22 = plVar14;
                                goto code_r0x014ece54;
                              }
                            }
                            else {
                              unaff_x24 = 0x3d71a80;
                              param_6 = 0;
                              iVar8 = /*Atlas.Save.SaveManager$$GetIntData*/ func_0x014ecb54(lVar28,/*STR('RecentSeasonStage')*/ uRam0000000003d71a80,0,0);
                              if ((uint)uVar13 < 7) {
                                if (iVar8 == 2) goto code_r0x0149c6b4;
                                lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
                                if ((lVar10 != 0) && (*(long *)(lVar10 + 0x98) != 0)) {
                                  /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar10 + 0x98),
                                                  *(undefined8 *)(unaff_x21 + 0x60),
                                                  uRam0000000003d3e188);
                                  uVar26 = 2;
                                  plVar14 = unaff_x22;
                                  unaff_x24 = 0x3d71a80;
                                  goto code_r0x0149c6ac;
                                }
                              }
                              else {
                                if (iVar8 == 1) {
code_r0x0149c6b4:
                                  plVar14 = (long *)/*Atlas.Save.SaveManager$$StartSave*/ func_0x014eb4e0(lVar28,0);
                                  return plVar14;
                                }
                                lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
                                unaff_x25 = 0x3d71a78;
                                if ((lVar10 != 0) && (*(long *)(lVar10 + 0x98) != 0)) {
                                  /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar10 + 0x98),
                                                  *(undefined8 *)(unaff_x21 + 0x58),
                                                  uRam0000000003d3e188);
                                  uVar26 = 1;
                                  puStack_78 = (undefined *)0x149c558;
                                  uVar11 = /*STR('RecentSeasonStage')*/ uRam0000000003d71a80;
                                  unaff_x24 = 0x3d71a80;
                                  goto code_r0x014ece54;
                                }
                              }
                            }
                            goto LAB_0149c6dc;
                          }
                        }
                        /*Atlas.Save.SaveManager$$SetStringData*/ func_0x014ecca8(lVar28,/*STR('RecentSeason')*/ uRam0000000003d71a78,unaff_x22,0);
                        uVar26 = 0;
                        puStack_78 = (undefined *)0x149c4a0;
                        uVar11 = /*STR('RecentSeasonStage')*/ uRam0000000003d71a80;
code_r0x014ece54:
                        uStack_b0 = unaff_x24;
                        uStack_a8 = unaff_x23;
                        plStack_a0 = unaff_x22;
                        lStack_98 = unaff_x21;
                        lStack_88 = lVar28;
                        if ((bRam0000000003eb4c47 & 1) == 0) {
                          func_0x00f78a20(0x3d3d8f0,uVar11,uVar26,0);
                          func_0x00f78a20(0x3d3d900);
                          func_0x00f78a20(0x3d3d908);
                          bRam0000000003eb4c47 = 1;
                        }
                        if ((bRam0000000003eb4c49 & 1) == 0) {
                          func_0x00f78a20(0x3d246e0);
                          bRam0000000003eb4c49 = 1;
                        }
                        lVar28 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(lVar28);
                        if (((*(ushort *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*Atlas.Save.SaveManager_TypeInfo*/ lRam0000000003d246e0 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        if ((bRam0000000003eb4c4d & 1) == 0) {
                          func_0x00f78a20(0x3d3d8f8);
                          func_0x00f78a20(0x3d3d900);
                          bRam0000000003eb4c4d = 1;
                        }
                        if ((lVar28 != 0) && (lVar10 = *(long *)(lVar28 + 0x110), lVar10 != 0)) {
                          plVar14 = (long *)0x0;
                          do {
                            uVar30 = (uint)plVar14;
                            if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar30) {
                              return (long *)0xffffffff;
                            }
                            if (*(uint *)(lVar10 + 0x18) <= uVar30) {
                              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                            }
                            lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + (long)(int)uVar30 * 0x10 +
                                              0x20);
                            if (lVar10 == 0) break;
                            uVar12 = /*System.String$$Equals*/ func_0x029caa48(lVar10,uVar11,5,0);
                            if ((uVar12 & 1) != 0) {
                              return plVar14;
                            }
                            plVar14 = (long *)(ulong)(uVar30 + 1);
                            lVar10 = *(long *)(lVar28 + 0x110);
                          } while (lVar10 != 0);
                        }
                        func_0x00f78af4();
                        return (long *)0xffffffff;
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
LAB_0149c6dc:
  lVar15 = func_0x00f78af4();
  puStack_78 = &Atlas_UI_Screens_MultiplayerModeSelectScreen__OnAfterEnter;
  lVar31 = 0x3eb4000;
  lVar10 = 0x3d411e8;
  uStack_b0 = unaff_x24;
  uStack_a8 = unaff_x23;
  plStack_a0 = unaff_x22;
  lStack_98 = unaff_x21;
  lStack_88 = lVar28;
  if ((bRam0000000003eb4a02 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d5a9e8);
    func_0x00f78a20(0x3d411e8);
    bRam0000000003eb4a02 = 1;
  }
  /*Core.UI2.UIScreen$$OnAfterEnter*/ func_0x02f8a620(lVar15,0);
  lVar28 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar15,uRam0000000003d411e8);
  if ((lVar28 == 0) || (*(long *)(lVar28 + 0x28) == 0)) {
code_r0x0149c81c:
    func_0x00f78af4();
  }
  else {
    uVar16 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)(lVar28 + 0x28) + 0x20),0);
    lVar17 = lVar15;
    lVar20 = lStack_88;
    lVar28 = lStack_90;
    lVar32 = lStack_98;
    plVar14 = plStack_a0;
    uVar12 = uStack_a8;
    uVar13 = uStack_b0;
    pppppppuVar35 = pppppppuStack_80;
    puVar37 = puStack_78;
    if ((uVar16 & 1) == 0) goto code_r0x0149c824;
    lVar28 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar15,uRam0000000003d411e8);
    if ((lVar28 == 0) || (unaff_x22 = *(long **)(lVar28 + 0x28), unaff_x22 == (long *)0x0))
    goto code_r0x0149c81c;
    lVar10 = unaff_x22[9];
    unaff_x23 = 0x3d1b598;
    lVar31 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar31,lVar15,uRam0000000003d5a9e8,uRam0000000003d2a320);
    param_6 = 0;
    plVar14 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar10,lVar31);
    if ((plVar14 == (long *)0x0) || (*plVar14 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
      unaff_x22[9] = (long)plVar14;
      return plVar14;
    }
  }
  lVar17 = func_0x00f78e5c();
  puVar4 = &uStack_b0;
  lVar20 = lVar15;
  lVar28 = lVar10;
  lVar32 = lVar31;
  plVar14 = unaff_x22;
  uVar12 = unaff_x23;
  uVar13 = unaff_x24;
  pppppppuVar35 = &pppppppuStack_80;
  puVar37 = &Atlas_UI_Screens_MultiplayerModeSelectScreen__JumpToJoinRoomIfPossible;
code_r0x0149c824:
  do {
    *(long **)((long)puVar4 + -0x30) = plVar14;
    *(long *)((long)puVar4 + -0x28) = lVar32;
    *(long *)((long)puVar4 + -0x20) = lVar28;
    *(long *)((long)puVar4 + -0x18) = lVar20;
    *(undefined8 ********)((long)puVar4 + -0x10) = pppppppuVar35;
    *(undefined **)((long)puVar4 + -8) = puVar37;
    uVar16 = param_6;
    if ((bRam0000000003eb4a07 & 1) == 0) {
      func_0x00f78a20(0x3d3e0d8);
      func_0x00f78a20(0x3d3e130);
      func_0x00f78a20(0x3d3e178);
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d411e8);
      bRam0000000003eb4a07 = 1;
      uVar16 = param_6;
    }
    lVar28 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar17,uRam0000000003d411e8);
    if ((lVar28 != 0) && (*(long *)(lVar28 + 0xa0) != 0)) {
      plVar18 = (long *)/*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar28 + 0xa0),uRam0000000003d3e0d8);
      if (((ulong)plVar18 & 1) != 0) {
        return plVar18;
      }
      lVar28 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar17,uRam0000000003d411e8);
      if ((lVar28 != 0) && (*(long *)(lVar28 + 0xe0) != 0)) {
        plVar18 = (long *)/*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar28 + 0xe0),uRam0000000003d3e130);
        if (((ulong)plVar18 & 1) != 0) {
          return plVar18;
        }
        lVar28 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar17,uRam0000000003d411e8);
        if ((lVar28 != 0) && (*(long *)(lVar28 + 0x98) != 0)) {
          plVar18 = (long *)/*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar28 + 0x98),uRam0000000003d3e178);
          if (((ulong)plVar18 & 1) != 0) {
            return plVar18;
          }
          lVar28 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar17,uRam0000000003d411e0);
          if (lVar28 != 0) {
            plVar18 = *(long **)(lVar28 + 0x20);
            if (plVar18 == (long *)0x0) {
              return (long *)0x0;
            }
            pppppppuVar35 = *(undefined8 ********)((long)puVar4 + -0x10);
            puVar37 = *(undefined **)((long)puVar4 + -8);
            lVar28 = *(long *)((long)puVar4 + -0x20);
            uVar26 = *(undefined8 *)((long)puVar4 + -0x18);
            uVar11 = *(undefined8 *)((long)puVar4 + -0x28);
            puVar6 = (undefined1 *)puVar4;
            plVar21 = *(long **)((long)puVar4 + -0x30);
            goto code_r0x015609bc;
          }
        }
      }
    }
    uVar11 = func_0x00f78af4();
    *(undefined8 *)((long)puVar4 + -0x80) = 0x3d411e8;
    *(ulong *)((long)puVar4 + -0x78) = unaff_x25;
    *(ulong *)((long)puVar4 + -0x70) = uVar13;
    *(ulong *)((long)puVar4 + -0x68) = uVar12;
    *(long **)((long)puVar4 + -0x60) = plVar14;
    *(undefined8 *)((long)puVar4 + -0x58) = 0x3eb4000;
    *(undefined8 *)((long)puVar4 + -0x50) = 0x3d411e8;
    *(long *)((long)puVar4 + -0x48) = lVar17;
    *(undefined1 **)((long)puVar4 + -0x40) = (undefined1 *)((long)puVar4 + -0x10);
    *(undefined **)((long)puVar4 + -0x38) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__OnBeforeExit;
    lVar28 = 0x3eb4000;
    uVar19 = 0x3d411e8;
    if ((bRam0000000003eb4a03 & 1) == 0) {
      func_0x00f78a20(0x3d2a320);
      func_0x00f78a20(0x3d1b598);
      func_0x00f78a20(0x3d2c840);
      func_0x00f78a20(0x3d5a9e8);
      func_0x00f78a20(0x3d411d8);
      func_0x00f78a20(0x3d411e8);
      bRam0000000003eb4a03 = 1;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d411e8);
    if ((lVar10 == 0) || (plVar14 = *(long **)(lVar10 + 0x28), plVar14 == (long *)0x0)) {
code_r0x0149cb08:
      func_0x00f78af4();
    }
    else {
      uVar12 = 0x3d1b598;
      uVar13 = 0x3d5a000;
      unaff_x25 = 0x3d2a000;
      lVar28 = plVar14[9];
      uVar19 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar19,uVar11,uRam0000000003d5a9e8,uRam0000000003d2a320);
      uVar16 = 0;
      plVar18 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar28,uVar19);
      if ((plVar18 == (long *)0x0) || (*plVar18 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
        lVar28 = 0x3d411d8;
        plVar14[9] = (long)plVar18;
        uVar16 = uRam0000000003d2c840;
        Atlas_UI_Screens_AtlasScreen_ModeSelectScreenBehaviour__ModeSelectScreen_TransitionData___SetScreenHandlePartyInvite
                  (uVar11,0);
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d411d8);
        if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x68), lVar10 == 0))
        goto code_r0x0149cb08;
        *(undefined8 *)((long)puVar4 + -0xc0) = 0x3d5a000;
        *(undefined8 *)((long)puVar4 + -0xb8) = 0x3d1b598;
        *(long **)((long)puVar4 + -0xb0) = plVar14;
        *(ulong *)((long)puVar4 + -0xa8) = uVar19;
        *(undefined8 *)((long)puVar4 + -0xa0) = 0x3d411d8;
        *(undefined8 *)((long)puVar4 + -0x98) = uVar11;
        *(undefined1 **)((long)puVar4 + -0x90) = (undefined1 *)((long)puVar4 + -0x40);
        *(undefined **)((long)puVar4 + -0x88) = &UNK_0149ca94;
        if ((bRam0000000003eb4d9b & 1) == 0) {
          func_0x00f78a20(0x3d1fa78,0);
          bRam0000000003eb4d9b = 1;
        }
        plVar21 = *(long **)(lVar10 + 0x148);
        plVar18 = (long *)0x3eb4000;
        if (plVar21 == (long *)0x0) goto code_r0x01514e70;
        plVar21 = (long *)(**(code **)(*plVar21 + 0x1d8))(plVar21,*(undefined8 *)(*plVar21 + 0x1e0))
        ;
        if (plVar21 == (long *)0x0) goto code_r0x01514ff8;
        plVar18 = plVar21;
        if ((int)plVar21[3] < 1) goto code_r0x01514e70;
        uVar19 = 0;
        uVar13 = plVar21[3] & 0xffffffff;
        plVar14 = plVar21 + 4;
        uVar12 = 0x3d1fa78;
        break;
      }
    }
    auVar39 = func_0x00f78e5c();
    puVar5 = (undefined1 *)((long)puVar4 + -0xb0);
    *(long **)((long)puVar4 + -0xb0) = plVar14;
    *(ulong *)((long)puVar4 + -0xa8) = uVar19;
    *(long *)((long)puVar4 + -0xa0) = lVar28;
    *(undefined8 *)((long)puVar4 + -0x98) = uVar11;
    *(undefined1 **)((long)puVar4 + -0x90) = (undefined1 *)((long)puVar4 + -0x40);
    *(undefined **)((long)puVar4 + -0x88) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__GameTypePressed;
    puVar36 = (undefined1 *)((long)puVar4 + -0x90);
    param_6 = uVar16;
    if ((bRam0000000003eb4a04 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79018);
      func_0x00f78a20(0x3d79020);
      bRam0000000003eb4a04 = 1;
    }
    plVar14 = (long *)0x3d411e0;
    plVar21 = (long *)0x3d411e0;
    iVar8 = auVar39._8_4_;
    if (iVar8 == 1) {
      puVar22 = (undefined8 *)0x3d79018;
code_r0x0149cb90:
      puVar37 = &UNK_0149cb9c;
      plVar18 = (long *)*puVar22;
      goto code_r0x0151398c;
    }
    if (iVar8 == 2) {
      puVar22 = (undefined8 *)0x3d79020;
      goto code_r0x0149cb90;
    }
    lVar28 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(auVar39._0_8_,uRam0000000003d411e0);
    if (lVar28 != 0) {
      plVar14 = *(long **)(lVar28 + 0x10);
      if (plVar14 == (long *)0x0) {
        return (long *)0x0;
      }
      *(undefined8 *)((long)puVar4 + -0xe0) = unaff_x28;
      *(undefined8 *)((long)puVar4 + -0xd8) = unaff_x27;
      *(undefined8 *)((long)puVar4 + -0xd0) = 0x3d411e8;
      *(ulong *)((long)puVar4 + -200) = unaff_x25;
      *(ulong *)((long)puVar4 + -0xc0) = uVar13;
      *(ulong *)((long)puVar4 + -0xb8) = uVar12;
      *(undefined8 *)((long)puVar4 + -0xb0) = *(undefined8 *)((long)puVar4 + -0xb0);
      *(undefined8 *)((long)puVar4 + -0xa8) = *(undefined8 *)((long)puVar4 + -0xa8);
      *(undefined8 *)((long)puVar4 + -0xa0) = *(undefined8 *)((long)puVar4 + -0xa0);
      *(undefined8 *)((long)puVar4 + -0x98) = *(undefined8 *)((long)puVar4 + -0x98);
      *(undefined8 *)((long)puVar4 + -0x90) = *(undefined8 *)((long)puVar4 + -0x90);
      *(undefined8 *)((long)puVar4 + -0x88) = *(undefined8 *)((long)puVar4 + -0x88);
      *(long **)((long)puVar4 + -0xe8) = plVar14;
      *(int *)((long)puVar4 + -0xec) = iVar8;
      lVar28 = plVar14[0xd];
      if (lVar28 == 0) {
        puVar6 = (undefined1 *)((long)puVar4 + -0xe8);
        lVar10 = 1;
      }
      else {
        lVar10 = *(long *)(lVar28 + 0x18);
        if (lVar10 == 0) {
          return plVar14;
        }
        puVar6 = (undefined1 *)(lVar28 + 0x20);
      }
      lVar28 = 0;
      goto code_r0x015606b4;
    }
    uVar26 = func_0x00f78af4();
    puVar6 = (undefined1 *)((long)puVar4 + -0xe0);
    *(undefined8 *)((long)puVar4 + -0xe0) = 0x3d411e0;
    *(undefined1 (*) [16])((long)puVar4 + -0xd8) = auVar39;
    *(ulong *)((long)puVar4 + -200) = uVar16;
    *(undefined1 **)((long)puVar4 + -0xc0) = puVar36;
    *(undefined **)((long)puVar4 + -0xb8) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__CreateRoomPressed;
    pppppppuVar35 = (undefined8 *******)((long)puVar4 + -0xc0);
    lVar28 = 0x3eb4000;
    uVar11 = 0x3d411e0;
    if ((bRam0000000003eb4a05 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79018);
      bRam0000000003eb4a05 = 1;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar26,uRam0000000003d411e0);
    if (lVar10 != 0) {
      uVar26 = 0x3d79018;
      plVar18 = *(long **)(lVar10 + 0x18);
      if (plVar18 == (long *)0x0) {
        puVar36 = *(undefined1 **)((long)puVar4 + -0xc0);
        puVar37 = *(undefined **)((long)puVar4 + -0xb8);
        uVar16 = *(ulong *)((long)puVar4 + -200);
        puVar5 = (undefined1 *)((long)puVar4 + -0xb0);
        plVar14 = *(long **)((long)puVar4 + -0xe0);
        auVar39 = *(undefined1 (*) [16])((long)puVar4 + -0xd8);
        plVar18 = /*STR('event:/UI/Front_End/GeneralButton3')*/ plRam0000000003d79018;
        goto code_r0x0151398c;
      }
      puVar37 = &UNK_0149cc54;
      plVar21 = plVar14;
      goto code_r0x015609bc;
    }
    lVar20 = func_0x00f78af4();
    puVar6 = (undefined1 *)((long)puVar4 + -0x110);
    *(undefined8 *)((long)puVar4 + -0x110) = 0x3d411e0;
    *(undefined8 *)((long)puVar4 + -0x108) = 0x3d411e0;
    *(undefined8 *)((long)puVar4 + -0x100) = 0x3eb4000;
    *(undefined8 *)((long)puVar4 + -0xf8) = uVar26;
    *(undefined8 ********)((long)puVar4 + -0xf0) = pppppppuVar35;
    *(undefined **)((long)puVar4 + -0xe8) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__JoinRoomPressed;
    pppppppuVar35 = (undefined8 *******)((long)puVar4 + -0xf0);
    lVar28 = 0x3eb4000;
    uVar11 = 0x3d411e0;
    if ((bRam0000000003eb4a06 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79020);
      bRam0000000003eb4a06 = 1;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar20,uRam0000000003d411e0);
    if (lVar10 != 0) goto code_r0x0149ccc8;
    lVar17 = func_0x00f78af4();
    puVar4 = (ulong *)((long)puVar4 + -0x110);
    lVar32 = 0x3d411e0;
    puVar37 = &Atlas_UI_Screens_MultiplayerModeSelectScreen__OnPartyInvite;
  } while( true );
  while( true ) {
    plVar25 = (long *)plVar14[uVar19];
    if ((plVar25 != (long *)0x0) &&
       (lVar28 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar25 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x01514fec;
    /*Atlas.UI.UIAtlasButton$$remove_Selected*/ func_0x01514244(lVar10);
    uVar19 = uVar19 + 1;
    uVar13 = (ulong)*(uint *)(plVar21 + 3);
    if ((long)(int)*(uint *)(plVar21 + 3) <= (long)uVar19) break;
    if (uVar13 <= uVar19) goto code_r0x01514fe0;
  }
code_r0x01514e70:
  plVar21 = *(long **)(lVar10 + 0x150);
  if (plVar21 == (long *)0x0) {
code_r0x01514ee4:
    plVar21 = *(long **)(lVar10 + 0x158);
    if (plVar21 != (long *)0x0) {
      plVar21 = (long *)(**(code **)(*plVar21 + 0x1d8))(plVar21,*(undefined8 *)(*plVar21 + 0x1e0));
      if (plVar21 == (long *)0x0) goto code_r0x01514ff8;
      plVar18 = plVar21;
      if (0 < (int)plVar21[3]) {
        uVar19 = 0;
        uVar13 = plVar21[3] & 0xffffffff;
        plVar14 = plVar21 + 4;
        uVar12 = 0x3d1fa78;
        do {
          if (uVar13 <= uVar19) goto code_r0x01514fe0;
          plVar25 = (long *)plVar14[uVar19];
          if ((plVar25 != (long *)0x0) &&
             (lVar28 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar25 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Pressed*/ func_0x015144d4(lVar10);
          uVar19 = uVar19 + 1;
          uVar13 = (ulong)*(uint *)(plVar21 + 3);
        } while ((long)uVar19 < (long)(int)*(uint *)(plVar21 + 3));
      }
    }
    plVar21 = *(long **)(lVar10 + 0x160);
    if (plVar21 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar21 = (long *)(**(code **)(*plVar21 + 0x1d8))(plVar21,*(undefined8 *)(*plVar21 + 0x1e0));
    if (plVar21 != (long *)0x0) {
      if ((int)plVar21[3] < 1) {
        return plVar21;
      }
      uVar19 = 0;
      uVar12 = plVar21[3] & 0xffffffff;
      plVar14 = plVar21 + 4;
      while (uVar19 < uVar12) {
        plVar25 = (long *)plVar14[uVar19];
        if ((plVar25 != (long *)0x0) &&
           (lVar28 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar25 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x01514fec;
        plVar18 = (long *)/*Atlas.UI.UIAtlasButton$$remove_SelectedOrPressed*/ func_0x0151461c(lVar10);
        uVar19 = uVar19 + 1;
        uVar12 = (ulong)*(uint *)(plVar21 + 3);
        if ((long)(int)*(uint *)(plVar21 + 3) <= (long)uVar19) {
          return plVar18;
        }
      }
code_r0x01514fe0:
      uVar11 = func_0x00f78b24();
      func_0x00f78ac0(uVar11,0);
      plVar25 = extraout_x1;
      lVar28 = extraout_x8;
code_r0x01514fec:
      uVar12 = 0x3d1fa78;
      func_0x00f78e5c(plVar25,lVar28);
      plVar18 = plVar21;
    }
  }
  else {
    plVar21 = (long *)(**(code **)(*plVar21 + 0x1d8))(plVar21,*(undefined8 *)(*plVar21 + 0x1e0));
    if (plVar21 != (long *)0x0) {
      plVar18 = plVar21;
      if (0 < (int)plVar21[3]) {
        uVar19 = 0;
        uVar13 = plVar21[3] & 0xffffffff;
        plVar14 = plVar21 + 4;
        uVar12 = 0x3d1fa78;
        do {
          if (uVar13 <= uVar19) goto code_r0x01514fe0;
          plVar25 = (long *)plVar14[uVar19];
          if ((plVar25 != (long *)0x0) &&
             (lVar28 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar25 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Deselected*/ func_0x0151438c(lVar10);
          uVar19 = uVar19 + 1;
          uVar13 = (ulong)*(uint *)(plVar21 + 3);
        } while ((long)uVar19 < (long)(int)*(uint *)(plVar21 + 3));
      }
      goto code_r0x01514ee4;
    }
  }
code_r0x01514ff8:
  auVar39 = func_0x00f78af4();
  uVar11 = auVar39._8_8_;
  *(long **)((long)puVar4 + -0xf0) = plVar14;
  *(ulong *)((long)puVar4 + -0xe8) = uVar19;
  *(long **)((long)puVar4 + -0xe0) = plVar18;
  *(long *)((long)puVar4 + -0xd8) = lVar10;
  *(undefined1 **)((long)puVar4 + -0xd0) = (undefined1 *)((long)puVar4 + -0x90);
  *(undefined **)((long)puVar4 + -200) = &Atlas_UI_UIAtlasButtonGroup__Subscribe;
  if ((bRam0000000003eb4da9 & 1) == 0) {
    func_0x00f78a20(0x3d3c5b8);
    func_0x00f78a20(0x3d3c5c0);
    bRam0000000003eb4da9 = 1;
  }
  lVar28 = *(long *)(auVar39._0_8_ + 0x40);
  if (lVar28 != 0) {
    plVar18 = (long *)/*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar28,uVar11,uRam0000000003d3c5c0);
    if (((ulong)plVar18 & 1) != 0) {
      return plVar18;
    }
    plVar18 = *(long **)(auVar39._0_8_ + 0x40);
    if (plVar18 != (long *)0x0) {
      uVar26 = *(undefined8 *)((long)puVar4 + -0xe0);
      plVar14 = *(long **)((long)puVar4 + -0xd8);
      uVar24 = *(undefined8 *)((long)puVar4 + -0xf0);
      uVar23 = *(undefined8 *)((long)puVar4 + -0xe8);
      *(undefined8 *)((long)puVar4 + -0xe0) = uVar26;
      *(long **)((long)puVar4 + -0xd8) = plVar14;
      *(undefined8 *)((long)puVar4 + -0xd0) = *(undefined8 *)((long)puVar4 + -0xd0);
      *(undefined8 *)((long)puVar4 + -200) = *(undefined8 *)((long)puVar4 + -200);
      lVar28 = plVar18[2];
      puVar22 = puRam0000000003d3c5b8;
      if (lVar28 == 0) {
code_r0x0242716c:
        uVar11 = uVar26;
        plVar18 = plVar14;
        plVar21 = (long *)func_0x00f78af4();
        lVar28 = extraout_x9;
        uVar30 = extraout_w8;
code_r0x02427170:
        *(uint *)(plVar18 + 3) = uVar30 + 1;
      }
      else {
        uVar30 = *(uint *)(plVar18 + 3);
        plVar21 = plVar18;
        if (uVar30 != *(uint *)(lVar28 + 0x18)) goto code_r0x02427170;
        puVar22 = *(undefined8 **)(*(long *)(puRam0000000003d3c5b8[3] + 0xc0) + 0x60);
        plVar21 = (long *)(*(code *)*puVar22)(plVar18,uVar30 + 1);
        lVar28 = plVar18[2];
        uVar30 = *(uint *)(plVar18 + 3);
        *(uint *)(plVar18 + 3) = uVar30 + 1;
        plVar14 = plVar18;
        uVar26 = uVar11;
        if (lVar28 == 0) goto code_r0x0242716c;
      }
      if (uVar30 < *(uint *)(lVar28 + 0x18)) {
        *(undefined8 *)(lVar28 + (long)(int)uVar30 * 8 + 0x20) = uVar11;
        *(int *)((long)plVar18 + 0x1c) = *(int *)((long)plVar18 + 0x1c) + 1;
        return plVar21;
      }
      uVar26 = func_0x00f78b24();
      auVar39 = func_0x00f78ac0(uVar26,0);
      lVar10 = auVar39._8_8_;
      lVar28 = auVar39._0_8_;
      *(undefined8 *)((long)puVar4 + -0x120) = 0x3d5a000;
      *(ulong *)((long)puVar4 + -0x118) = uVar12;
      *(undefined8 *)((long)puVar4 + -0x110) = uVar24;
      *(undefined8 *)((long)puVar4 + -0x108) = uVar23;
      *(undefined8 *)((long)puVar4 + -0x100) = uVar11;
      *(long **)((long)puVar4 + -0xf8) = plVar18;
      *(undefined1 **)((long)puVar4 + -0xf0) = (undefined1 *)((long)puVar4 + -0xd0);
      *(undefined **)((long)puVar4 + -0xe8) =
           &System_Collections_Generic_List_object___System_Collections_IList_Add;
      (*(code *)**(undefined8 **)(*(long *)(puVar22[3] + 0xc0) + 0x48))(lVar10,0x14);
      if (lVar28 == 0) {
        func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
        pcVar34 = (code *)SoftwareBreakpoint(1,0x2427350);
        (*pcVar34)();
      }
      pcVar34 = (code *)**(undefined8 **)(*(long *)(puVar22[3] + 0xc0) + 0x28);
      lVar15 = *(long *)(*(long *)(puVar22[3] + 0xc0) + 0x38);
      if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar15);
      }
      if (lVar10 == 0) {
        lVar31 = 0;
      }
      else {
        lVar31 = func_0x00f78adc(lVar10,lVar15);
        if (lVar31 == 0) {
          func_0x00f78e5c(lVar10,lVar15);
          goto code_r0x0242734c;
        }
      }
      (*pcVar34)(lVar28,lVar31,*(undefined8 *)(*(long *)(puVar22[3] + 0xc0) + 0x28));
      iVar8 = (*(code *)**(undefined8 **)(*(long *)(puVar22[3] + 0xc0) + 0x68))(lVar28);
      return (long *)(ulong)(iVar8 - 1);
    }
  }
  auVar40 = func_0x00f78af4();
  lVar10 = auVar40._8_8_;
  lVar28 = auVar40._0_8_;
  *(long **)((long)puVar4 + -0x120) = plVar14;
  *(undefined8 *)((long)puVar4 + -0x118) = 0x3eb4000;
  *(undefined1 (*) [16])((long)puVar4 + -0x110) = auVar39;
  *(undefined1 **)((long)puVar4 + -0x100) = (undefined1 *)((long)puVar4 + -0xd0);
  *(undefined **)((long)puVar4 + -0xf8) = &Atlas_UI_UIAtlasButton__OnPointerClick;
  if ((bRam0000000003eb4d9d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d9d = 1;
  }
  plVar18 = (long *)/*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(lVar28 + 0x16c),0);
  if ((int)plVar18 == 0) {
    return plVar18;
  }
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x134) != 0) {
      return plVar18;
    }
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(lVar28);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar28,lVar10,0);
    uVar11 = *(undefined8 *)(lVar28 + 0x118);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar14 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar11,0,0);
    if ((int)plVar14 == 0) {
      return plVar14;
    }
    bVar7 = false;
    uVar11 = *(undefined8 *)((long)puVar4 + -0x100);
    uVar23 = *(undefined8 *)((long)puVar4 + -0xf8);
    uVar26 = *(undefined8 *)((long)puVar4 + -0x110);
    uVar29 = *(undefined8 *)((long)puVar4 + -0x108);
    puVar6 = (undefined1 *)((long)puVar4 + -0xf0);
    uVar24 = *(undefined8 *)((long)puVar4 + -0x120);
    uVar33 = *(undefined8 *)((long)puVar4 + -0x118);
    goto Atlas_UI_UIAtlasButton__SelectButton;
  }
  auVar39 = func_0x00f78af4();
  plVar21 = auVar39._8_8_;
  plVar18 = auVar39._0_8_;
  *(undefined8 *)((long)puVar4 + -0x160) = 0x3d5a000;
  *(ulong *)((long)puVar4 + -0x158) = uVar12;
  *(long **)((long)puVar4 + -0x150) = plVar14;
  *(undefined8 *)((long)puVar4 + -0x148) = 0x3eb4000;
  *(long *)((long)puVar4 + -0x140) = lVar28;
  *(undefined8 *)((long)puVar4 + -0x138) = 0;
  *(undefined1 **)((long)puVar4 + -0x130) = (undefined1 *)((long)puVar4 + -0x100);
  *(undefined **)((long)puVar4 + -0x128) = &Atlas_UI_UIAtlasButton__OnSubmit;
  if ((bRam0000000003eb4d9e & 1) == 0) {
    func_0x00f78a20(0x3d21bd8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9e = 1;
  }
  plVar14 = (long *)/*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)((long)plVar18 + 0x16c),0);
  if ((int)plVar14 == 0) {
    return plVar14;
  }
  if (plVar21 == (long *)0x0) {
    lVar28 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    uVar12 = 1;
  }
  else {
    if (*(byte *)(*plVar21 + 300) < *(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300)) {
      uVar12 = 1;
    }
    else {
      uVar12 = (ulong)(*(long *)(*(long *)(*plVar21 + 200) +
                                 (ulong)*(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300) * 8 + -8) !=
                      /*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8);
    }
    lVar28 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    if (*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) <= *(byte *)(*plVar21 + 300)) {
      uVar12 = (ulong)((uint)(*(long *)(*(long *)(*plVar21 + 200) +
                                        (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 + -8) !=
                             /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0) & (uint)uVar12);
    }
  }
  if ((int)uVar12 == 0) {
code_r0x015152e8:
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(plVar18);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(plVar18,plVar21,0);
    plVar14 = (long *)(**(code **)(*plVar18 + 0x1c8))(plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
    if (((int)plVar14 == 0) ||
       (plVar14 = (long *)(**(code **)(*plVar18 + 0x2b8))(plVar18,*(undefined8 *)(*plVar18 + 0x2c0))
       , (int)plVar14 == 0)) {
      return plVar14;
    }
    (**(code **)(*plVar18 + 0x2d8))(plVar18,2,0,*(undefined8 *)(*plVar18 + 0x2e0));
    puVar37 = &UNK_01515354;
    plVar14 = plVar18;
  }
  else {
    uVar12 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar28,0);
    if (iVar8 == 0) goto code_r0x015152e8;
    if (lVar28 != 0) {
      lVar28 = *(long *)(lVar28 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar14 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar28,plVar18,0);
      if (((ulong)plVar14 & 1) != 0) {
        return plVar14;
      }
      goto code_r0x015152e8;
    }
    puVar37 = &Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0;
    plVar14 = (long *)func_0x00f78af4();
  }
  *(long *)((long)puVar4 + -400) = lVar28;
  *(undefined8 *)((long)puVar4 + -0x188) = 1;
  *(long **)((long)puVar4 + -0x180) = plVar21;
  *(long **)((long)puVar4 + -0x178) = plVar18;
  *(undefined1 **)((long)puVar4 + -0x170) = (undefined1 *)((long)puVar4 + -0x130);
  *(undefined **)((long)puVar4 + -0x168) = puVar37;
  if ((bRam0000000003eb4da6 & 1) == 0) {
    func_0x00f78a20(0x3d29448);
    bRam0000000003eb4da6 = 1;
  }
  plVar18 = (long *)func_0x00f78aec(/*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d_TypeInfo*/ uRam0000000003d29448);
  /*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d$$.ctor*/ func_0x0156c5e4(plVar18,0,0);
  if (plVar18 != (long *)0x0) {
    plVar18[4] = (long)plVar14;
    return plVar18;
  }
  auVar40 = func_0x00f78af4();
  *(long *)((long)puVar4 + -0x1c0) = lVar28;
  *(undefined8 *)((long)puVar4 + -0x1b8) = 0x3d29448;
  *(undefined8 *)((long)puVar4 + -0x1b0) = 0;
  *(long **)((long)puVar4 + -0x1a8) = plVar14;
  *(undefined1 **)((long)puVar4 + -0x1a0) = (undefined1 *)((long)puVar4 + -0x170);
  *(undefined **)((long)puVar4 + -0x198) = &Atlas_UI_UIAtlasButton__OnSelect;
  if ((bRam0000000003eb4d9f & 1) == 0) {
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9f = 1;
  }
  plVar14 = (long *)/*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(auVar40._0_8_ + 0x16c),0);
  if ((int)plVar14 == 0) {
    return plVar14;
  }
  if (auVar40._8_8_ == (long *)0x0) {
code_r0x0151546c:
    bVar7 = false;
  }
  else {
    lVar28 = *auVar40._8_8_;
    if (*(byte *)(lVar28 + 300) < *(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300)) goto code_r0x0151546c;
    bVar7 = *(long *)(*(long *)(lVar28 + 200) + (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 +
                     -8) == /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0;
  }
  iVar8 = /*Core.Input.InputManager$$get_IsCurrentSelectionFromUser*/ func_0x0164ad7c(0);
  if ((iVar8 != 0) && (!bVar7)) {
    /*Atlas.UI.UIAtlasButton$$PlayButtonSelectSound*/ func_0x01514cec(auVar40._0_8_);
  }
  uVar11 = *(undefined8 *)((long)puVar4 + -0x1a0);
  uVar23 = *(undefined8 *)((long)puVar4 + -0x198);
  uVar26 = *(undefined8 *)((long)puVar4 + -0x1b0);
  uVar29 = *(undefined8 *)((long)puVar4 + -0x1a8);
  puVar6 = (undefined1 *)((long)puVar4 + -400);
  uVar24 = *(undefined8 *)((long)puVar4 + -0x1c0);
  uVar33 = *(undefined8 *)((long)puVar4 + -0x1b8);
Atlas_UI_UIAtlasButton__SelectButton:
  plVar14 = auVar40._0_8_;
  *(undefined8 *)(puVar6 + -0x30) = uVar24;
  *(undefined8 *)(puVar6 + -0x28) = uVar33;
  *(undefined8 *)(puVar6 + -0x20) = uVar26;
  *(undefined8 *)(puVar6 + -0x18) = uVar29;
  *(undefined8 *)(puVar6 + -0x10) = uVar11;
  *(undefined8 *)(puVar6 + -8) = uVar23;
  puVar36 = puVar6 + -0x10;
  uVar11 = 0;
  if (((char)plVar14[0x28] != '\0') && (bVar7)) {
    return plVar14;
  }
  /*UnityEngine.UI.Selectable$$OnSelect*/ func_0x032e4efc(plVar14,auVar40._8_8_,0);
  if (plVar14[0x23] != 0) {
    /*Atlas.UI.UIAtlasButtonGroup$$OnButtonSelected*/ func_0x01514894(plVar14[0x23],plVar14,auVar40._8_8_);
  }
  plVar18 = (long *)plVar14[0x29];
  if (plVar18 == (long *)0x0) {
    plVar18 = (long *)plVar14[0x2c];
    if (plVar18 == (long *)0x0) {
      return (long *)0x0;
    }
    puVar36 = *(undefined1 **)(puVar6 + -0x10);
    puVar37 = *(undefined **)(puVar6 + -8);
    uVar11 = *(undefined8 *)(puVar6 + -0x20);
    uVar24 = *(undefined8 *)(puVar6 + -0x30);
    auVar40._8_8_ = *(undefined8 *)(puVar6 + -0x28);
    auVar40._0_8_ = *(undefined8 *)(puVar6 + -0x18);
  }
  else {
    puVar37 = &UNK_01514868;
    puVar6 = puVar6 + -0x30;
  }
  uVar26 = 0;
  *(undefined8 *)(puVar6 + -0x50) = 0x3d411e8;
  *(undefined8 *)(puVar6 + -0x48) = 0x3d2a000;
  *(undefined8 *)(puVar6 + -0x40) = 0x3d5a000;
  *(ulong *)(puVar6 + -0x38) = uVar12;
  *(undefined8 *)(puVar6 + -0x30) = uVar24;
  *(long *)(puVar6 + -0x28) = auVar40._8_8_;
  *(undefined8 *)(puVar6 + -0x20) = uVar11;
  *(long *)(puVar6 + -0x18) = auVar40._0_8_;
  *(undefined1 **)(puVar6 + -0x10) = puVar36;
  *(undefined **)(puVar6 + -8) = puVar37;
  *(long **)(puVar6 + -0x58) = plVar18;
  lVar28 = plVar18[0xd];
  if (lVar28 == 0) {
    puVar6 = puVar6 + -0x58;
    lVar10 = 1;
  }
  else {
    lVar10 = *(long *)(lVar28 + 0x18);
    if (lVar10 == 0) {
      return plVar18;
    }
    puVar6 = (undefined1 *)(lVar28 + 0x20);
  }
  lVar28 = 0;
  do {
    lVar15 = *(long *)(puVar6 + lVar28 * 8);
    pcVar34 = *(code **)(lVar15 + 0x10);
    plVar14 = *(long **)(lVar15 + 0x20);
    lVar15 = *(long *)(lVar15 + 0x28);
    if (*(short *)(lVar15 + 0x48) == -1) {
      func_0x00f78ad8(lVar15,uVar26);
    }
    iVar8 = func_0x00f78a4c(lVar15);
    if (iVar8 == 0) {
      if ((((plVar14 == (long *)0x0) || (*(short *)(lVar15 + 0x48) == -1)) ||
          ((*(byte *)(*plVar14 + 0x115) & 1) != 0)) || (plVar18[3] == 0)) goto code_r0x02924d98;
      iVar8 = func_0x00f78a44(lVar15);
      iVar9 = func_0x00f78ec0(lVar15);
      if (iVar8 == 0) {
        uVar3 = *(ushort *)(lVar15 + 0x48);
        if (iVar9 == 0) {
          lVar15 = *plVar14 + (ulong)uVar3 * 0x10;
          auVar39 = (**(code **)(lVar15 + 0x138))(plVar14,*(undefined8 *)(lVar15 + 0x140));
          goto code_r0x02924da4;
        }
        lVar15 = func_0x00f78a48(lVar15);
        lVar31 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar31 + 0x12a);
        if (uVar12 != 0) {
          piVar27 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar15) {
              puVar22 = (undefined8 *)(lVar31 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar27 = piVar27 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar22 = (undefined8 *)func_0x00fac1f0(plVar14,lVar15,(ulong)uVar3);
code_r0x02924e68:
        pcVar34 = (code *)*puVar22;
        puVar22 = (undefined8 *)puVar22[1];
      }
      else {
        if (iVar9 == 0) {
          uVar11 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar31 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar31 + 0x12a);
          if (uVar12 != 0) {
            piVar27 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)(lVar15 + 0x18)) {
                lVar31 = lVar31 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar15 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar27 = piVar27 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          lVar31 = func_0x00fac1f0(plVar14);
code_r0x02924e40:
          uVar11 = *(undefined8 *)(lVar31 + 8);
        }
        puVar22 = (undefined8 *)func_0x00f78acc(uVar11,lVar15);
        pcVar34 = (code *)*puVar22;
      }
      auVar39 = (*pcVar34)(plVar14,puVar22);
    }
    else if (*(char *)(lVar15 + 0x4a) == '\0') {
      auVar39 = (*pcVar34)(lVar15);
    }
    else {
code_r0x02924d98:
      auVar39 = (*pcVar34)(plVar14,lVar15);
    }
code_r0x02924da4:
    uVar26 = auVar39._8_8_;
    lVar28 = lVar28 + 1;
    if (lVar28 == lVar10) {
      return auVar39._0_8_;
    }
  } while( true );
code_r0x015606b4:
  lVar15 = *(long *)(puVar6 + lVar28 * 8);
  pcVar34 = *(code **)(lVar15 + 0x10);
  plVar18 = *(long **)(lVar15 + 0x20);
  lVar15 = *(long *)(lVar15 + 0x28);
  if (*(short *)(lVar15 + 0x48) == -1) {
    func_0x00f78ad8(lVar15);
  }
  iVar8 = func_0x00f78a4c(lVar15);
  if (iVar8 == 0) {
    if (plVar18 == (long *)0x0) {
      plVar18 = (long *)(*pcVar34)((undefined1 *)((long)puVar4 + -0xfc),uVar16,lVar15);
    }
    else {
      if (((*(short *)(lVar15 + 0x48) == -1) || ((*(byte *)(*plVar18 + 0x115) & 1) != 0)) ||
         (plVar14[3] == 0)) goto code_r0x01560784;
      iVar8 = func_0x00f78a44(lVar15);
      iVar9 = func_0x00f78ec0(lVar15);
      if (iVar8 == 0) {
        uVar3 = *(ushort *)(lVar15 + 0x48);
        if (iVar9 == 0) {
          lVar15 = *plVar18 + (ulong)uVar3 * 0x10;
          plVar18 = (long *)(**(code **)(lVar15 + 0x138))
                                      (plVar18,*(undefined4 *)((long)puVar4 + -0xec),uVar16,
                                       *(undefined8 *)(lVar15 + 0x140));
          goto code_r0x015607ac;
        }
        lVar15 = func_0x00f78a48(lVar15);
        uVar1 = *(undefined4 *)((long)puVar4 + -0xec);
        lVar31 = *plVar18;
        uVar12 = (ulong)*(ushort *)(lVar31 + 0x12a);
        if (uVar12 != 0) {
          piVar27 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar15) {
              puVar22 = (undefined8 *)(lVar31 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x01560884;
            }
            piVar27 = piVar27 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar22 = (undefined8 *)func_0x00fac1f0(plVar18,lVar15,(ulong)uVar3);
code_r0x01560884:
        pcVar34 = (code *)*puVar22;
        puVar22 = (undefined8 *)puVar22[1];
      }
      else {
        uVar1 = *(undefined4 *)((long)puVar4 + -0xec);
        if (iVar9 == 0) {
          uVar11 = *(undefined8 *)(*plVar18 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar31 = *plVar18;
          uVar12 = (ulong)*(ushort *)(lVar31 + 0x12a);
          if (uVar12 != 0) {
            piVar27 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)(lVar15 + 0x18)) {
                lVar31 = lVar31 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar15 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01560854;
              }
              piVar27 = piVar27 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          lVar31 = func_0x00fac1f0(plVar18);
code_r0x01560854:
          uVar11 = *(undefined8 *)(lVar31 + 8);
        }
        puVar22 = (undefined8 *)func_0x00f78acc(uVar11,lVar15);
        pcVar34 = (code *)*puVar22;
      }
      plVar18 = (long *)(*pcVar34)(plVar18,uVar1,uVar16,puVar22);
    }
  }
  else if (*(char *)(lVar15 + 0x4a) == '\x02') {
    plVar18 = (long *)(*pcVar34)(*(undefined4 *)((long)puVar4 + -0xec),uVar16,lVar15);
  }
  else {
code_r0x01560784:
    plVar18 = (long *)(*pcVar34)(plVar18,*(undefined4 *)((long)puVar4 + -0xec),uVar16,lVar15);
  }
code_r0x015607ac:
  lVar28 = lVar28 + 1;
  if (lVar28 == lVar10) {
    return plVar18;
  }
  goto code_r0x015606b4;
code_r0x0149ccc8:
  uVar26 = 0x3d79020;
  plVar18 = *(long **)(lVar10 + 0x20);
  if (plVar18 != (long *)0x0) {
    puVar37 = &UNK_0149cce0;
code_r0x015609bc:
    uVar24 = 0;
    *(undefined8 *)(puVar6 + -0x50) = 0x3d411e8;
    *(ulong *)(puVar6 + -0x48) = unaff_x25;
    *(ulong *)(puVar6 + -0x40) = uVar13;
    *(ulong *)(puVar6 + -0x38) = uVar12;
    *(long **)(puVar6 + -0x30) = plVar21;
    *(undefined8 *)(puVar6 + -0x28) = uVar11;
    *(long *)(puVar6 + -0x20) = lVar28;
    *(undefined8 *)(puVar6 + -0x18) = uVar26;
    *(undefined8 ********)(puVar6 + -0x10) = pppppppuVar35;
    *(undefined **)(puVar6 + -8) = puVar37;
    *(long **)(puVar6 + -0x58) = plVar18;
    lVar28 = plVar18[0xd];
    if (lVar28 == 0) {
      puVar6 = puVar6 + -0x58;
      lVar10 = 1;
    }
    else {
      lVar10 = *(long *)(lVar28 + 0x18);
      if (lVar10 == 0) {
        return plVar18;
      }
      puVar6 = (undefined1 *)(lVar28 + 0x20);
    }
    lVar28 = 0;
    do {
      lVar15 = *(long *)(puVar6 + lVar28 * 8);
      pcVar34 = *(code **)(lVar15 + 0x10);
      plVar14 = *(long **)(lVar15 + 0x20);
      lVar15 = *(long *)(lVar15 + 0x28);
      if (*(short *)(lVar15 + 0x48) == -1) {
        func_0x00f78ad8(lVar15,uVar24);
      }
      iVar8 = func_0x00f78a4c(lVar15);
      if (iVar8 == 0) {
        if (((plVar14 == (long *)0x0) || (*(short *)(lVar15 + 0x48) == -1)) ||
           (((*(byte *)(*plVar14 + 0x115) & 1) != 0 || (plVar18[3] == 0)))) goto code_r0x01560ac4;
        iVar8 = func_0x00f78a44(lVar15);
        iVar9 = func_0x00f78ec0(lVar15);
        if (iVar8 == 0) {
          uVar3 = *(ushort *)(lVar15 + 0x48);
          if (iVar9 == 0) {
            lVar15 = *plVar14 + (ulong)uVar3 * 0x10;
            auVar39 = (**(code **)(lVar15 + 0x138))(plVar14,*(undefined8 *)(lVar15 + 0x140));
            goto code_r0x01560ad0;
          }
          lVar15 = func_0x00f78a48(lVar15);
          lVar31 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar31 + 0x12a);
          if (uVar12 != 0) {
            piVar27 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == lVar15) {
                puVar22 = (undefined8 *)
                          (lVar31 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                goto code_r0x01560b94;
              }
              piVar27 = piVar27 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar22 = (undefined8 *)func_0x00fac1f0(plVar14,lVar15,(ulong)uVar3);
code_r0x01560b94:
          pcVar34 = (code *)*puVar22;
          puVar22 = (undefined8 *)puVar22[1];
        }
        else {
          if (iVar9 == 0) {
            uVar11 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar31 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar31 + 0x12a);
            if (uVar12 != 0) {
              piVar27 = (int *)(*(long *)(lVar31 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == *(long *)(lVar15 + 0x18)) {
                  lVar31 = lVar31 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar15 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01560b6c;
                }
                piVar27 = piVar27 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar31 = func_0x00fac1f0(plVar14);
code_r0x01560b6c:
            uVar11 = *(undefined8 *)(lVar31 + 8);
          }
          puVar22 = (undefined8 *)func_0x00f78acc(uVar11,lVar15);
          pcVar34 = (code *)*puVar22;
        }
        auVar39 = (*pcVar34)(plVar14,puVar22);
      }
      else if (*(char *)(lVar15 + 0x4a) == '\0') {
        auVar39 = (*pcVar34)(lVar15);
      }
      else {
code_r0x01560ac4:
        auVar39 = (*pcVar34)(plVar14,lVar15);
      }
code_r0x01560ad0:
      uVar24 = auVar39._8_8_;
      lVar28 = lVar28 + 1;
      if (lVar28 == lVar10) {
        return auVar39._0_8_;
      }
    } while( true );
  }
  puVar36 = *(undefined1 **)((long)puVar4 + -0xf0);
  puVar37 = *(undefined **)((long)puVar4 + -0xe8);
  uVar16 = *(ulong *)((long)puVar4 + -0xf8);
  puVar5 = (undefined1 *)((long)puVar4 + -0xe0);
  plVar14 = *(long **)((long)puVar4 + -0x110);
  auVar39 = *(undefined1 (*) [16])((long)puVar4 + -0x108);
  plVar18 = /*STR('event:/UI/Front_End/GeneralButton4')*/ plRam0000000003d79020;
code_r0x0151398c:
  *(long **)(puVar5 + -0x30) = plVar14;
  *(undefined1 (*) [16])(puVar5 + -0x28) = auVar39;
  *(ulong *)(puVar5 + -0x18) = uVar16;
  *(undefined1 **)(puVar5 + -0x10) = puVar36;
  *(undefined **)(puVar5 + -8) = puVar37;
  uVar11 = 0x3eb4000;
  plVar21 = plVar18;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    plVar21 = (long *)func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return plVar21;
  }
  lVar28 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar28 != 0) {
    plVar21 = (long *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar28,plVar18,uRam0000000003d2faf8);
    if ((int)plVar21 == 0) {
      return plVar21;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar28 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar28 != 0)) &&
       (plVar21 = (long *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar28,plVar18,uRam0000000003d2fb00),
       plVar21 != (long *)0x0)) {
      *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
      *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
      *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,plVar21,0,0);
      return plVar21;
    }
  }
  plVar21 = (long *)func_0x00f78af4();
  *(undefined8 *)(puVar5 + -0x70) = unaff_d9;
  *(ulong *)(puVar5 + -0x68) = CONCAT44(unaff_00005104,unaff_s8);
  *(long **)(puVar5 + -0x60) = plVar14;
  *(undefined8 *)(puVar5 + -0x58) = 0x3eb4000;
  *(undefined8 *)(puVar5 + -0x50) = 0x3d25580;
  *(long **)(puVar5 + -0x48) = plVar18;
  *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar18 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar21,0);
  if ((plVar18 != (long *)0x0) && (*plVar18 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar24 = func_0x00f78e5c(plVar18);
    *(long **)(puVar5 + -0x90) = plVar18;
    *(long **)(puVar5 + -0x88) = plVar21;
    *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x40;
    *(undefined **)(puVar5 + -0x78) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
    lVar28 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    uVar26 = *(undefined8 *)(puVar5 + -0x90);
    *(long **)(puVar5 + -0xa0) = plVar14;
    *(undefined8 *)(puVar5 + -0x98) = 0x3eb4000;
    *(undefined8 *)(puVar5 + -0x90) = uVar26;
    *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(puVar5 + -0x88);
    *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x80);
    *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x78);
    if (lVar28 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar23 = func_0x00f78aec();
      uVar24 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar23,uVar24,0);
    }
    else {
      uVar11 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar12 = (*pcRam0000000003ec01d0)(uVar24);
      if ((uVar12 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar14 = (long *)(*pcRam0000000003ec01e0)(uVar24,lVar28);
        return plVar14;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar23 = func_0x00f78aec();
      uVar26 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar23,uVar26,0);
      uVar26 = uVar24;
    }
    uVar24 = func_0x00f78a24(0x3d5a8a8);
    auVar39 = func_0x00f78ac0(uVar23,uVar24);
    *(long **)(puVar5 + -0xd0) = plVar14;
    *(undefined8 *)(puVar5 + -200) = uVar11;
    *(undefined8 *)(puVar5 + -0xc0) = uVar26;
    *(undefined8 *)(puVar5 + -0xb8) = uVar23;
    *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0x80;
    *(undefined **)(puVar5 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar14 = (long *)(*pcRam0000000003ec01e0)(auVar39._0_8_,auVar39._8_8_);
    return plVar14;
  }
  fVar38 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar11 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar38 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                           plVar18,4,0);
  plVar14 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar11,uRam0000000003d5e780);
  *(undefined8 *)(puVar5 + -0xa0) = 0x3d5e780;
  *(undefined8 *)(puVar5 + -0x98) = 0x3d5e868;
  *(long **)(puVar5 + -0x90) = plVar18;
  *(long **)(puVar5 + -0x88) = plVar21;
  *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x40;
  *(undefined **)(puVar5 + -0x78) = &UNK_01513b44;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar21,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((plVar14 != (long *)0x0) && ((char)plVar14[0x1d] != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar8 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar8 != 0) {
      lVar28 = func_0x00f78adc(plVar21,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar28,0,0);
      if ((uVar12 & 1) == 0) {
        if (plVar21 == (long *)0x0) goto code_r0x018eef34;
        lVar28 = (**(code **)(*plVar21 + 0x168))(plVar21,*(undefined8 *)(*plVar21 + 0x170));
      }
      else {
        if (lVar28 == 0) {
code_r0x018eef34:
          auVar39 = func_0x00f78af4();
          plVar18 = auVar39._0_8_;
          *(undefined8 *)(puVar5 + -0xd0) = 0x3d5e780;
          *(long *)(puVar5 + -200) = lVar28;
          *(long **)(puVar5 + -0xc0) = plVar21;
          *(long **)(puVar5 + -0xb8) = plVar14;
          *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0x80;
          *(undefined **)(puVar5 + -0xa8) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((plVar18 != (long *)0x0) && ((char)plVar18[0x1d] != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(plVar18,auVar39._8_8_,cVar2 != '\0',0);
          }
          return plVar18;
        }
        lVar28 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar28,0);
      }
      plVar14[0x19] = lVar28;
    }
    plVar14[9] = (long)plVar21;
  }
  return plVar14;
}



// ============================================================
// RVA: 0x149c6e0 | Atlas.UI.Screens.MultiplayerModeSelectScreen.OnAfterEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x0149ca90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01514864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01515350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cb98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149ccdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01515354) */
/* WARNING: Removing unreachable block (ram,0x0149cad4) */
/* WARNING: Removing unreachable block (ram,0x0149cae4) */
/* WARNING: Removing unreachable block (ram,0x0149caec) */
/* WARNING: Removing unreachable block (ram,0x0149cab4) */
/* WARNING: Removing unreachable block (ram,0x0149cac4) */
/* WARNING: Removing unreachable block (ram,0x0149cacc) */
/* WARNING: Removing unreachable block (ram,0x0149ca94) */
/* WARNING: Removing unreachable block (ram,0x0149caa4) */
/* WARNING: Removing unreachable block (ram,0x0149caac) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_Screens_MultiplayerModeSelectScreen__OnAfterEnter
                 (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  long *extraout_x1;
  undefined8 uVar18;
  uint extraout_w8;
  uint uVar19;
  ulong uVar20;
  long extraout_x8;
  long lVar21;
  long lVar22;
  long extraout_x9;
  int *piVar23;
  undefined8 unaff_x19;
  undefined8 uVar24;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar25;
  long *unaff_x22;
  code *pcVar26;
  ulong unaff_x23;
  long lVar27;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar28;
  undefined *unaff_x30;
  undefined *puVar29;
  float fVar30;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined8 unaff_d9;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  puVar5 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a02 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d5a9e8);
    func_0x00f78a20(0x3d411e8);
    bRam0000000003eb4a02 = 1;
  }
  /*Core.UI2.UIScreen$$OnAfterEnter*/ func_0x02f8a620(param_4,0);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) {
LAB_0149c81c:
    func_0x00f78af4();
    unaff_x20 = 0x3d411e8;
    unaff_x21 = 0x3eb4000;
  }
  else {
    uVar10 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)(lVar9 + 0x28) + 0x20),0);
    uVar12 = param_4;
    if ((uVar10 & 1) == 0) goto code_r0x0149c824;
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
    if ((lVar9 == 0) || (unaff_x22 = *(long **)(lVar9 + 0x28), unaff_x22 == (long *)0x0))
    goto LAB_0149c81c;
    unaff_x20 = unaff_x22[9];
    unaff_x23 = 0x3d1b598;
    unaff_x21 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,param_4,uRam0000000003d5a9e8,uRam0000000003d2a320);
    param_6 = 0;
    plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(unaff_x20,unaff_x21);
    if ((plVar11 == (long *)0x0) || (*plVar11 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
      unaff_x22[9] = (long)plVar11;
      return plVar11;
    }
  }
  unaff_x30 = &Atlas_UI_Screens_MultiplayerModeSelectScreen__JumpToJoinRoomIfPossible;
  uVar12 = func_0x00f78e5c();
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
  unaff_x19 = param_4;
  unaff_x29 = puVar5;
code_r0x0149c824:
  do {
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    uVar18 = param_6;
    if ((bRam0000000003eb4a07 & 1) == 0) {
      func_0x00f78a20(0x3d3e0d8);
      func_0x00f78a20(0x3d3e130);
      func_0x00f78a20(0x3d3e178);
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d411e8);
      bRam0000000003eb4a07 = 1;
      uVar18 = param_6;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar12,uRam0000000003d411e8);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0xa0) != 0)) {
      plVar11 = (long *)/*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar9 + 0xa0),uRam0000000003d3e0d8);
      if (((ulong)plVar11 & 1) != 0) {
        return plVar11;
      }
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar12,uRam0000000003d411e8);
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0xe0) != 0)) {
        plVar11 = (long *)/*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar9 + 0xe0),uRam0000000003d3e130);
        if (((ulong)plVar11 & 1) != 0) {
          return plVar11;
        }
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar12,uRam0000000003d411e8);
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0x98) != 0)) {
          plVar11 = (long *)/*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar9 + 0x98),uRam0000000003d3e178);
          if (((ulong)plVar11 & 1) != 0) {
            return plVar11;
          }
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar12,uRam0000000003d411e0);
          if (lVar9 != 0) {
            plVar11 = *(long **)(lVar9 + 0x20);
            if (plVar11 == (long *)0x0) {
              return (long *)0x0;
            }
            unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
            puVar29 = *(undefined **)((long)register0x00000008 + -8);
            unaff_x20 = *(long *)((long)register0x00000008 + -0x20);
            uVar18 = *(undefined8 *)((long)register0x00000008 + -0x18);
            uVar12 = *(undefined8 *)((long)register0x00000008 + -0x28);
            puVar5 = (undefined1 *)register0x00000008;
            plVar14 = *(long **)((long)register0x00000008 + -0x30);
            goto code_r0x015609bc;
          }
        }
      }
    }
    uVar13 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0x3d411e8;
    *(undefined8 *)((long)register0x00000008 + -0x48) = uVar12;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__OnBeforeExit;
    lVar9 = 0x3eb4000;
    uVar10 = 0x3d411e8;
    if ((bRam0000000003eb4a03 & 1) == 0) {
      func_0x00f78a20(0x3d2a320);
      func_0x00f78a20(0x3d1b598);
      func_0x00f78a20(0x3d2c840);
      func_0x00f78a20(0x3d5a9e8);
      func_0x00f78a20(0x3d411d8);
      func_0x00f78a20(0x3d411e8);
      bRam0000000003eb4a03 = 1;
    }
    lVar27 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar13,uRam0000000003d411e8);
    if ((lVar27 == 0) || (unaff_x22 = *(long **)(lVar27 + 0x28), unaff_x22 == (long *)0x0)) {
code_r0x0149cb08:
      func_0x00f78af4();
    }
    else {
      unaff_x23 = 0x3d1b598;
      unaff_x24 = 0x3d5a000;
      unaff_x25 = 0x3d2a000;
      lVar9 = unaff_x22[9];
      uVar10 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar10,uVar13,uRam0000000003d5a9e8,uRam0000000003d2a320);
      uVar18 = 0;
      plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,uVar10);
      if ((plVar11 == (long *)0x0) || (*plVar11 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
        lVar9 = 0x3d411d8;
        unaff_x22[9] = (long)plVar11;
        uVar18 = uRam0000000003d2c840;
        Atlas_UI_Screens_AtlasScreen_ModeSelectScreenBehaviour__ModeSelectScreen_TransitionData___SetScreenHandlePartyInvite
                  (uVar13,0);
        lVar27 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar13,uRam0000000003d411d8);
        if ((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0x68), lVar27 == 0))
        goto code_r0x0149cb08;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3d5a000;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3d1b598;
        *(long **)((long)register0x00000008 + -0xb0) = unaff_x22;
        *(ulong *)((long)register0x00000008 + -0xa8) = uVar10;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3d411d8;
        *(undefined8 *)((long)register0x00000008 + -0x98) = uVar13;
        *(undefined1 **)((long)register0x00000008 + -0x90) =
             (undefined1 *)((long)register0x00000008 + -0x40);
        *(undefined **)((long)register0x00000008 + -0x88) = &UNK_0149ca94;
        if ((bRam0000000003eb4d9b & 1) == 0) {
          func_0x00f78a20(0x3d1fa78,0);
          bRam0000000003eb4d9b = 1;
        }
        plVar14 = *(long **)(lVar27 + 0x148);
        plVar11 = (long *)0x3eb4000;
        if (plVar14 == (long *)0x0) goto code_r0x01514e70;
        plVar14 = (long *)(**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0))
        ;
        if (plVar14 == (long *)0x0) goto code_r0x01514ff8;
        plVar11 = plVar14;
        if ((int)plVar14[3] < 1) goto code_r0x01514e70;
        uVar10 = 0;
        uVar20 = plVar14[3] & 0xffffffff;
        unaff_x22 = plVar14 + 4;
        unaff_x23 = 0x3d1fa78;
        break;
      }
    }
    auVar32 = func_0x00f78e5c();
    puVar4 = (undefined1 *)((long)register0x00000008 + -0xb0);
    *(long **)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0xa8) = uVar10;
    *(long *)((long)register0x00000008 + -0xa0) = lVar9;
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar13;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x88) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__GameTypePressed;
    puVar28 = (undefined1 *)((long)register0x00000008 + -0x90);
    param_6 = uVar18;
    if ((bRam0000000003eb4a04 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79018);
      func_0x00f78a20(0x3d79020);
      bRam0000000003eb4a04 = 1;
    }
    unaff_x22 = (long *)0x3d411e0;
    plVar14 = (long *)0x3d411e0;
    iVar7 = auVar32._8_4_;
    if (iVar7 == 1) {
      puVar15 = (undefined8 *)0x3d79018;
code_r0x0149cb90:
      puVar29 = &UNK_0149cb9c;
      plVar11 = (long *)*puVar15;
      goto code_r0x0151398c;
    }
    if (iVar7 == 2) {
      puVar15 = (undefined8 *)0x3d79020;
      goto code_r0x0149cb90;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(auVar32._0_8_,uRam0000000003d411e0);
    if (lVar9 != 0) {
      plVar11 = *(long **)(lVar9 + 0x10);
      if (plVar11 == (long *)0x0) {
        return (long *)0x0;
      }
      *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -200) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0xb8) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xa0) =
           *(undefined8 *)((long)register0x00000008 + -0xa0);
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0x98);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(long **)((long)register0x00000008 + -0xe8) = plVar11;
      *(int *)((long)register0x00000008 + -0xec) = iVar7;
      lVar9 = plVar11[0xd];
      if (lVar9 == 0) {
        puVar5 = (undefined1 *)((long)register0x00000008 + -0xe8);
        lVar27 = 1;
      }
      else {
        lVar27 = *(long *)(lVar9 + 0x18);
        if (lVar27 == 0) {
          return plVar11;
        }
        puVar5 = (undefined1 *)(lVar9 + 0x20);
      }
      lVar9 = 0;
      goto code_r0x015606b4;
    }
    uVar13 = func_0x00f78af4();
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3d411e0;
    *(undefined1 (*) [16])((long)register0x00000008 + -0xd8) = auVar32;
    *(undefined8 *)((long)register0x00000008 + -200) = uVar18;
    *(undefined1 **)((long)register0x00000008 + -0xc0) = puVar28;
    *(undefined **)((long)register0x00000008 + -0xb8) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__CreateRoomPressed;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xc0);
    unaff_x20 = 0x3eb4000;
    uVar12 = 0x3d411e0;
    if ((bRam0000000003eb4a05 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79018);
      bRam0000000003eb4a05 = 1;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar13,uRam0000000003d411e0);
    if (lVar9 != 0) {
      uVar18 = 0x3d79018;
      plVar11 = *(long **)(lVar9 + 0x18);
      if (plVar11 != (long *)0x0) {
        puVar29 = &UNK_0149cc54;
        plVar14 = unaff_x22;
        goto code_r0x015609bc;
      }
      puVar28 = *(undefined1 **)((long)register0x00000008 + -0xc0);
      puVar29 = *(undefined **)((long)register0x00000008 + -0xb8);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -200);
      puVar4 = (undefined1 *)((long)register0x00000008 + -0xb0);
      unaff_x22 = *(long **)((long)register0x00000008 + -0xe0);
      auVar32 = *(undefined1 (*) [16])((long)register0x00000008 + -0xd8);
      plVar11 = /*STR('event:/UI/Front_End/GeneralButton3')*/ plRam0000000003d79018;
      goto code_r0x0151398c;
    }
    unaff_x19 = func_0x00f78af4();
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0x3d411e0;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0x3d411e0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar13;
    *(undefined1 **)((long)register0x00000008 + -0xf0) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -0xe8) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__JoinRoomPressed;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xf0);
    unaff_x20 = 0x3eb4000;
    unaff_x21 = 0x3d411e0;
    uVar12 = 0x3d411e0;
    if ((bRam0000000003eb4a06 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79020);
      bRam0000000003eb4a06 = 1;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(unaff_x19,uRam0000000003d411e0);
    if (lVar9 != 0) goto code_r0x0149ccc8;
    unaff_x30 = &Atlas_UI_Screens_MultiplayerModeSelectScreen__OnPartyInvite;
    uVar12 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  } while( true );
  while( true ) {
    plVar17 = (long *)unaff_x22[uVar10];
    if ((plVar17 != (long *)0x0) && (lVar9 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar17 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)
       ) goto code_r0x01514fec;
    /*Atlas.UI.UIAtlasButton$$remove_Selected*/ func_0x01514244(lVar27);
    uVar10 = uVar10 + 1;
    uVar20 = (ulong)*(uint *)(plVar14 + 3);
    if ((long)(int)*(uint *)(plVar14 + 3) <= (long)uVar10) break;
    if (uVar20 <= uVar10) goto code_r0x01514fe0;
  }
code_r0x01514e70:
  plVar14 = *(long **)(lVar27 + 0x150);
  if (plVar14 == (long *)0x0) {
code_r0x01514ee4:
    plVar14 = *(long **)(lVar27 + 0x158);
    if (plVar14 != (long *)0x0) {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
      if (plVar14 == (long *)0x0) goto code_r0x01514ff8;
      plVar11 = plVar14;
      if (0 < (int)plVar14[3]) {
        uVar10 = 0;
        uVar20 = plVar14[3] & 0xffffffff;
        unaff_x22 = plVar14 + 4;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar20 <= uVar10) goto code_r0x01514fe0;
          plVar17 = (long *)unaff_x22[uVar10];
          if ((plVar17 != (long *)0x0) &&
             (lVar9 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar17 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Pressed*/ func_0x015144d4(lVar27);
          uVar10 = uVar10 + 1;
          uVar20 = (ulong)*(uint *)(plVar14 + 3);
        } while ((long)uVar10 < (long)(int)*(uint *)(plVar14 + 3));
      }
    }
    plVar14 = *(long **)(lVar27 + 0x160);
    if (plVar14 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar14 = (long *)(**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
    if (plVar14 != (long *)0x0) {
      if ((int)plVar14[3] < 1) {
        return plVar14;
      }
      uVar10 = 0;
      uVar20 = plVar14[3] & 0xffffffff;
      unaff_x22 = plVar14 + 4;
      while (uVar10 < uVar20) {
        plVar17 = (long *)unaff_x22[uVar10];
        if ((plVar17 != (long *)0x0) &&
           (lVar9 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar17 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x01514fec;
        plVar11 = (long *)/*Atlas.UI.UIAtlasButton$$remove_SelectedOrPressed*/ func_0x0151461c(lVar27);
        uVar10 = uVar10 + 1;
        uVar20 = (ulong)*(uint *)(plVar14 + 3);
        if ((long)(int)*(uint *)(plVar14 + 3) <= (long)uVar10) {
          return plVar11;
        }
      }
code_r0x01514fe0:
      uVar12 = func_0x00f78b24();
      func_0x00f78ac0(uVar12,0);
      plVar17 = extraout_x1;
      lVar9 = extraout_x8;
code_r0x01514fec:
      unaff_x23 = 0x3d1fa78;
      func_0x00f78e5c(plVar17,lVar9);
      plVar11 = plVar14;
    }
  }
  else {
    plVar14 = (long *)(**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
    if (plVar14 != (long *)0x0) {
      plVar11 = plVar14;
      if (0 < (int)plVar14[3]) {
        uVar10 = 0;
        uVar20 = plVar14[3] & 0xffffffff;
        unaff_x22 = plVar14 + 4;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar20 <= uVar10) goto code_r0x01514fe0;
          plVar17 = (long *)unaff_x22[uVar10];
          if ((plVar17 != (long *)0x0) &&
             (lVar9 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar17 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Deselected*/ func_0x0151438c(lVar27);
          uVar10 = uVar10 + 1;
          uVar20 = (ulong)*(uint *)(plVar14 + 3);
        } while ((long)uVar10 < (long)(int)*(uint *)(plVar14 + 3));
      }
      goto code_r0x01514ee4;
    }
  }
code_r0x01514ff8:
  auVar32 = func_0x00f78af4();
  uVar12 = auVar32._8_8_;
  *(long **)((long)register0x00000008 + -0xf0) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0xe8) = uVar10;
  *(long **)((long)register0x00000008 + -0xe0) = plVar11;
  *(long *)((long)register0x00000008 + -0xd8) = lVar27;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined **)((long)register0x00000008 + -200) = &Atlas_UI_UIAtlasButtonGroup__Subscribe;
  if ((bRam0000000003eb4da9 & 1) == 0) {
    func_0x00f78a20(0x3d3c5b8);
    func_0x00f78a20(0x3d3c5c0);
    bRam0000000003eb4da9 = 1;
  }
  lVar9 = *(long *)(auVar32._0_8_ + 0x40);
  if (lVar9 != 0) {
    plVar11 = (long *)/*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar9,uVar12,uRam0000000003d3c5c0);
    if (((ulong)plVar11 & 1) != 0) {
      return plVar11;
    }
    plVar11 = *(long **)(auVar32._0_8_ + 0x40);
    if (plVar11 != (long *)0x0) {
      uVar18 = *(undefined8 *)((long)register0x00000008 + -0xe0);
      plVar14 = *(long **)((long)register0x00000008 + -0xd8);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0xf0);
      uVar16 = *(undefined8 *)((long)register0x00000008 + -0xe8);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar18;
      *(long **)((long)register0x00000008 + -0xd8) = plVar14;
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -200);
      lVar9 = plVar11[2];
      puVar15 = puRam0000000003d3c5b8;
      if (lVar9 == 0) {
code_r0x0242716c:
        uVar12 = uVar18;
        plVar11 = plVar14;
        plVar17 = (long *)func_0x00f78af4();
        lVar9 = extraout_x9;
        uVar19 = extraout_w8;
code_r0x02427170:
        *(uint *)(plVar11 + 3) = uVar19 + 1;
      }
      else {
        uVar19 = *(uint *)(plVar11 + 3);
        plVar17 = plVar11;
        if (uVar19 != *(uint *)(lVar9 + 0x18)) goto code_r0x02427170;
        puVar15 = *(undefined8 **)(*(long *)(puRam0000000003d3c5b8[3] + 0xc0) + 0x60);
        plVar17 = (long *)(*(code *)*puVar15)(plVar11,uVar19 + 1);
        lVar9 = plVar11[2];
        uVar19 = *(uint *)(plVar11 + 3);
        *(uint *)(plVar11 + 3) = uVar19 + 1;
        plVar14 = plVar11;
        uVar18 = uVar12;
        if (lVar9 == 0) goto code_r0x0242716c;
      }
      if (uVar19 < *(uint *)(lVar9 + 0x18)) {
        *(undefined8 *)(lVar9 + (long)(int)uVar19 * 8 + 0x20) = uVar12;
        *(int *)((long)plVar11 + 0x1c) = *(int *)((long)plVar11 + 0x1c) + 1;
        return plVar17;
      }
      uVar18 = func_0x00f78b24();
      auVar32 = func_0x00f78ac0(uVar18,0);
      lVar27 = auVar32._8_8_;
      lVar9 = auVar32._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3d5a000;
      *(ulong *)((long)register0x00000008 + -0x118) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x110) = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0x108) = uVar16;
      *(undefined8 *)((long)register0x00000008 + -0x100) = uVar12;
      *(long **)((long)register0x00000008 + -0xf8) = plVar11;
      *(undefined1 **)((long)register0x00000008 + -0xf0) =
           (undefined1 *)((long)register0x00000008 + -0xd0);
      *(undefined **)((long)register0x00000008 + -0xe8) =
           &System_Collections_Generic_List_object___System_Collections_IList_Add;
      (*(code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x48))(lVar27,0x14);
      if (lVar9 != 0) {
        pcVar26 = (code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x28);
        lVar21 = *(long *)(*(long *)(puVar15[3] + 0xc0) + 0x38);
        if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar21);
        }
        if (lVar27 == 0) {
          lVar22 = 0;
        }
        else {
          lVar22 = func_0x00f78adc(lVar27,lVar21);
          if (lVar22 == 0) {
            func_0x00f78e5c(lVar27,lVar21);
            goto code_r0x0242734c;
          }
        }
        (*pcVar26)(lVar9,lVar22,*(undefined8 *)(*(long *)(puVar15[3] + 0xc0) + 0x28));
        iVar7 = (*(code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x68))(lVar9);
        return (long *)(ulong)(iVar7 - 1);
      }
      func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
      pcVar26 = (code *)SoftwareBreakpoint(1,0x2427350);
      (*pcVar26)();
    }
  }
  auVar31 = func_0x00f78af4();
  lVar27 = auVar31._8_8_;
  lVar9 = auVar31._0_8_;
  *(long **)((long)register0x00000008 + -0x120) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x118) = 0x3eb4000;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x110) = auVar32;
  *(undefined1 **)((long)register0x00000008 + -0x100) =
       (undefined1 *)((long)register0x00000008 + -0xd0);
  *(undefined **)((long)register0x00000008 + -0xf8) = &Atlas_UI_UIAtlasButton__OnPointerClick;
  if ((bRam0000000003eb4d9d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d9d = 1;
  }
  plVar11 = (long *)/*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(lVar9 + 0x16c),0);
  if ((int)plVar11 == 0) {
    return plVar11;
  }
  if (lVar27 != 0) {
    if (*(int *)(lVar27 + 0x134) != 0) {
      return plVar11;
    }
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(lVar9);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar9,lVar27,0);
    uVar12 = *(undefined8 *)(lVar9 + 0x118);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar11 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar12,0,0);
    if ((int)plVar11 == 0) {
      return plVar11;
    }
    bVar6 = false;
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x100);
    uVar16 = *(undefined8 *)((long)register0x00000008 + -0xf8);
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x110);
    uVar24 = *(undefined8 *)((long)register0x00000008 + -0x108);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xf0);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x120);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x118);
    goto Atlas_UI_UIAtlasButton__SelectButton;
  }
  auVar32 = func_0x00f78af4();
  plVar14 = auVar32._8_8_;
  plVar11 = auVar32._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x160) = 0x3d5a000;
  *(ulong *)((long)register0x00000008 + -0x158) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x150) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x148) = 0x3eb4000;
  *(long *)((long)register0x00000008 + -0x140) = lVar9;
  *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x130) =
       (undefined1 *)((long)register0x00000008 + -0x100);
  *(undefined **)((long)register0x00000008 + -0x128) = &Atlas_UI_UIAtlasButton__OnSubmit;
  if ((bRam0000000003eb4d9e & 1) == 0) {
    func_0x00f78a20(0x3d21bd8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9e = 1;
  }
  plVar17 = (long *)/*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)((long)plVar11 + 0x16c),0);
  if ((int)plVar17 == 0) {
    return plVar17;
  }
  if (plVar14 == (long *)0x0) {
    lVar9 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    unaff_x23 = 1;
  }
  else {
    if (*(byte *)(*plVar14 + 300) < *(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300)) {
      unaff_x23 = 1;
    }
    else {
      unaff_x23 = (ulong)(*(long *)(*(long *)(*plVar14 + 200) +
                                    (ulong)*(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300) * 8 + -8) !=
                         /*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8);
    }
    lVar9 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    if (*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) <= *(byte *)(*plVar14 + 300)) {
      unaff_x23 = (ulong)((uint)(*(long *)(*(long *)(*plVar14 + 200) +
                                           (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 + -8) !=
                                /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0) & (uint)unaff_x23);
    }
  }
  if ((int)unaff_x23 == 0) {
code_r0x015152e8:
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(plVar11);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(plVar11,plVar14,0);
    plVar17 = (long *)(**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
    if (((int)plVar17 == 0) ||
       (plVar17 = (long *)(**(code **)(*plVar11 + 0x2b8))(plVar11,*(undefined8 *)(*plVar11 + 0x2c0))
       , (int)plVar17 == 0)) {
      return plVar17;
    }
    (**(code **)(*plVar11 + 0x2d8))(plVar11,2,0,*(undefined8 *)(*plVar11 + 0x2e0));
    puVar29 = &UNK_01515354;
    plVar17 = plVar11;
  }
  else {
    unaff_x23 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar9,0);
    if (iVar7 == 0) goto code_r0x015152e8;
    if (lVar9 != 0) {
      lVar9 = *(long *)(lVar9 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar17 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,plVar11,0);
      if (((ulong)plVar17 & 1) != 0) {
        return plVar17;
      }
      goto code_r0x015152e8;
    }
    puVar29 = &Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0;
    plVar17 = (long *)func_0x00f78af4();
  }
  *(long *)((long)register0x00000008 + -400) = lVar9;
  *(undefined8 *)((long)register0x00000008 + -0x188) = 1;
  *(long **)((long)register0x00000008 + -0x180) = plVar14;
  *(long **)((long)register0x00000008 + -0x178) = plVar11;
  *(undefined1 **)((long)register0x00000008 + -0x170) =
       (undefined1 *)((long)register0x00000008 + -0x130);
  *(undefined **)((long)register0x00000008 + -0x168) = puVar29;
  if ((bRam0000000003eb4da6 & 1) == 0) {
    func_0x00f78a20(0x3d29448);
    bRam0000000003eb4da6 = 1;
  }
  plVar11 = (long *)func_0x00f78aec(/*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d_TypeInfo*/ uRam0000000003d29448);
  /*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d$$.ctor*/ func_0x0156c5e4(plVar11,0,0);
  if (plVar11 != (long *)0x0) {
    plVar11[4] = (long)plVar17;
    return plVar11;
  }
  auVar31 = func_0x00f78af4();
  *(long *)((long)register0x00000008 + -0x1c0) = lVar9;
  *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0x3d29448;
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
  *(long **)((long)register0x00000008 + -0x1a8) = plVar17;
  *(undefined1 **)((long)register0x00000008 + -0x1a0) =
       (undefined1 *)((long)register0x00000008 + -0x170);
  *(undefined **)((long)register0x00000008 + -0x198) = &Atlas_UI_UIAtlasButton__OnSelect;
  if ((bRam0000000003eb4d9f & 1) == 0) {
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9f = 1;
  }
  plVar11 = (long *)/*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(auVar31._0_8_ + 0x16c),0);
  if ((int)plVar11 == 0) {
    return plVar11;
  }
  if (auVar31._8_8_ == (long *)0x0) {
code_r0x0151546c:
    bVar6 = false;
  }
  else {
    lVar9 = *auVar31._8_8_;
    if (*(byte *)(lVar9 + 300) < *(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300)) goto code_r0x0151546c;
    bVar6 = *(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 + -8
                     ) == /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0;
  }
  iVar7 = /*Core.Input.InputManager$$get_IsCurrentSelectionFromUser*/ func_0x0164ad7c(0);
  if ((iVar7 != 0) && (!bVar6)) {
    /*Atlas.UI.UIAtlasButton$$PlayButtonSelectSound*/ func_0x01514cec(auVar31._0_8_);
  }
  uVar12 = *(undefined8 *)((long)register0x00000008 + -0x1a0);
  uVar16 = *(undefined8 *)((long)register0x00000008 + -0x198);
  uVar18 = *(undefined8 *)((long)register0x00000008 + -0x1b0);
  uVar24 = *(undefined8 *)((long)register0x00000008 + -0x1a8);
  puVar5 = (undefined1 *)((long)register0x00000008 + -400);
  uVar13 = *(undefined8 *)((long)register0x00000008 + -0x1c0);
  uVar25 = *(undefined8 *)((long)register0x00000008 + -0x1b8);
Atlas_UI_UIAtlasButton__SelectButton:
  plVar11 = auVar31._0_8_;
  *(undefined8 *)(puVar5 + -0x30) = uVar13;
  *(undefined8 *)(puVar5 + -0x28) = uVar25;
  *(undefined8 *)(puVar5 + -0x20) = uVar18;
  *(undefined8 *)(puVar5 + -0x18) = uVar24;
  *(undefined8 *)(puVar5 + -0x10) = uVar12;
  *(undefined8 *)(puVar5 + -8) = uVar16;
  puVar28 = puVar5 + -0x10;
  uVar12 = 0;
  if (((char)plVar11[0x28] != '\0') && (bVar6)) {
    return plVar11;
  }
  /*UnityEngine.UI.Selectable$$OnSelect*/ func_0x032e4efc(plVar11,auVar31._8_8_,0);
  if (plVar11[0x23] != 0) {
    /*Atlas.UI.UIAtlasButtonGroup$$OnButtonSelected*/ func_0x01514894(plVar11[0x23],plVar11,auVar31._8_8_);
  }
  plVar14 = (long *)plVar11[0x29];
  if (plVar14 == (long *)0x0) {
    plVar14 = (long *)plVar11[0x2c];
    if (plVar14 == (long *)0x0) {
      return (long *)0x0;
    }
    puVar28 = *(undefined1 **)(puVar5 + -0x10);
    puVar29 = *(undefined **)(puVar5 + -8);
    uVar12 = *(undefined8 *)(puVar5 + -0x20);
    uVar13 = *(undefined8 *)(puVar5 + -0x30);
    auVar31._8_8_ = *(undefined8 *)(puVar5 + -0x28);
    auVar31._0_8_ = *(undefined8 *)(puVar5 + -0x18);
  }
  else {
    puVar29 = &UNK_01514868;
    puVar5 = puVar5 + -0x30;
  }
  uVar18 = 0;
  *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x48) = 0x3d2a000;
  *(undefined8 *)(puVar5 + -0x40) = 0x3d5a000;
  *(ulong *)(puVar5 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x30) = uVar13;
  *(long *)(puVar5 + -0x28) = auVar31._8_8_;
  *(undefined8 *)(puVar5 + -0x20) = uVar12;
  *(long *)(puVar5 + -0x18) = auVar31._0_8_;
  *(undefined1 **)(puVar5 + -0x10) = puVar28;
  *(undefined **)(puVar5 + -8) = puVar29;
  *(long **)(puVar5 + -0x58) = plVar14;
  lVar9 = plVar14[0xd];
  if (lVar9 == 0) {
    puVar5 = puVar5 + -0x58;
    lVar27 = 1;
  }
  else {
    lVar27 = *(long *)(lVar9 + 0x18);
    if (lVar27 == 0) {
      return plVar14;
    }
    puVar5 = (undefined1 *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar21 = *(long *)(puVar5 + lVar9 * 8);
    pcVar26 = *(code **)(lVar21 + 0x10);
    plVar11 = *(long **)(lVar21 + 0x20);
    lVar21 = *(long *)(lVar21 + 0x28);
    if (*(short *)(lVar21 + 0x48) == -1) {
      func_0x00f78ad8(lVar21,uVar18);
    }
    iVar7 = func_0x00f78a4c(lVar21);
    if (iVar7 == 0) {
      if ((((plVar11 == (long *)0x0) || (*(short *)(lVar21 + 0x48) == -1)) ||
          ((*(byte *)(*plVar11 + 0x115) & 1) != 0)) || (plVar14[3] == 0)) goto code_r0x02924d98;
      iVar7 = func_0x00f78a44(lVar21);
      iVar8 = func_0x00f78ec0(lVar21);
      if (iVar7 == 0) {
        uVar3 = *(ushort *)(lVar21 + 0x48);
        if (iVar8 == 0) {
          lVar21 = *plVar11 + (ulong)uVar3 * 0x10;
          auVar32 = (**(code **)(lVar21 + 0x138))(plVar11,*(undefined8 *)(lVar21 + 0x140));
          goto code_r0x02924da4;
        }
        lVar21 = func_0x00f78a48(lVar21);
        lVar22 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar22 + 0x12a);
        if (uVar10 != 0) {
          piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == lVar21) {
              puVar15 = (undefined8 *)(lVar22 + (long)(int)(*piVar23 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar23 = piVar23 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar15 = (undefined8 *)func_0x00fac1f0(plVar11,lVar21,(ulong)uVar3);
code_r0x02924e68:
        pcVar26 = (code *)*puVar15;
        puVar15 = (undefined8 *)puVar15[1];
      }
      else {
        if (iVar8 == 0) {
          uVar12 = *(undefined8 *)(*plVar11 + (ulong)*(ushort *)(lVar21 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar22 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar22 + 0x12a);
          if (uVar10 != 0) {
            piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)(lVar21 + 0x18)) {
                lVar22 = lVar22 + (long)(int)(*piVar23 + (uint)*(ushort *)(lVar21 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar23 = piVar23 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          lVar22 = func_0x00fac1f0(plVar11);
code_r0x02924e40:
          uVar12 = *(undefined8 *)(lVar22 + 8);
        }
        puVar15 = (undefined8 *)func_0x00f78acc(uVar12,lVar21);
        pcVar26 = (code *)*puVar15;
      }
      auVar32 = (*pcVar26)(plVar11,puVar15);
    }
    else if (*(char *)(lVar21 + 0x4a) == '\0') {
      auVar32 = (*pcVar26)(lVar21);
    }
    else {
code_r0x02924d98:
      auVar32 = (*pcVar26)(plVar11,lVar21);
    }
code_r0x02924da4:
    uVar18 = auVar32._8_8_;
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar27) {
      return auVar32._0_8_;
    }
  } while( true );
code_r0x015606b4:
  lVar21 = *(long *)(puVar5 + lVar9 * 8);
  pcVar26 = *(code **)(lVar21 + 0x10);
  plVar14 = *(long **)(lVar21 + 0x20);
  lVar21 = *(long *)(lVar21 + 0x28);
  if (*(short *)(lVar21 + 0x48) == -1) {
    func_0x00f78ad8(lVar21);
  }
  iVar7 = func_0x00f78a4c(lVar21);
  if (iVar7 == 0) {
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)(*pcVar26)((undefined1 *)((long)register0x00000008 + -0xfc),uVar18,lVar21);
    }
    else {
      if (((*(short *)(lVar21 + 0x48) == -1) || ((*(byte *)(*plVar14 + 0x115) & 1) != 0)) ||
         (plVar11[3] == 0)) goto code_r0x01560784;
      iVar7 = func_0x00f78a44(lVar21);
      iVar8 = func_0x00f78ec0(lVar21);
      if (iVar7 == 0) {
        uVar3 = *(ushort *)(lVar21 + 0x48);
        if (iVar8 == 0) {
          lVar21 = *plVar14 + (ulong)uVar3 * 0x10;
          plVar14 = (long *)(**(code **)(lVar21 + 0x138))
                                      (plVar14,*(undefined4 *)((long)register0x00000008 + -0xec),
                                       uVar18,*(undefined8 *)(lVar21 + 0x140));
          goto code_r0x015607ac;
        }
        lVar21 = func_0x00f78a48(lVar21);
        uVar1 = *(undefined4 *)((long)register0x00000008 + -0xec);
        lVar22 = *plVar14;
        uVar10 = (ulong)*(ushort *)(lVar22 + 0x12a);
        if (uVar10 != 0) {
          piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar23 + -2) == lVar21) {
              puVar15 = (undefined8 *)(lVar22 + (long)(int)(*piVar23 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x01560884;
            }
            piVar23 = piVar23 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar15 = (undefined8 *)func_0x00fac1f0(plVar14,lVar21,(ulong)uVar3);
code_r0x01560884:
        pcVar26 = (code *)*puVar15;
        puVar15 = (undefined8 *)puVar15[1];
      }
      else {
        uVar1 = *(undefined4 *)((long)register0x00000008 + -0xec);
        if (iVar8 == 0) {
          uVar12 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar21 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar22 = *plVar14;
          uVar10 = (ulong)*(ushort *)(lVar22 + 0x12a);
          if (uVar10 != 0) {
            piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)(lVar21 + 0x18)) {
                lVar22 = lVar22 + (long)(int)(*piVar23 + (uint)*(ushort *)(lVar21 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01560854;
              }
              piVar23 = piVar23 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          lVar22 = func_0x00fac1f0(plVar14);
code_r0x01560854:
          uVar12 = *(undefined8 *)(lVar22 + 8);
        }
        puVar15 = (undefined8 *)func_0x00f78acc(uVar12,lVar21);
        pcVar26 = (code *)*puVar15;
      }
      plVar14 = (long *)(*pcVar26)(plVar14,uVar1,uVar18,puVar15);
    }
  }
  else if (*(char *)(lVar21 + 0x4a) == '\x02') {
    plVar14 = (long *)(*pcVar26)(*(undefined4 *)((long)register0x00000008 + -0xec),uVar18,lVar21);
  }
  else {
code_r0x01560784:
    plVar14 = (long *)(*pcVar26)(plVar14,*(undefined4 *)((long)register0x00000008 + -0xec),uVar18,
                                 lVar21);
  }
code_r0x015607ac:
  lVar9 = lVar9 + 1;
  if (lVar9 == lVar27) {
    return plVar14;
  }
  goto code_r0x015606b4;
code_r0x0149ccc8:
  uVar18 = 0x3d79020;
  plVar11 = *(long **)(lVar9 + 0x20);
  if (plVar11 != (long *)0x0) {
    puVar29 = &UNK_0149cce0;
code_r0x015609bc:
    uVar13 = 0;
    *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
    *(ulong *)(puVar5 + -0x38) = unaff_x23;
    *(long **)(puVar5 + -0x30) = plVar14;
    *(undefined8 *)(puVar5 + -0x28) = uVar12;
    *(long *)(puVar5 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar5 + -0x18) = uVar18;
    *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
    *(undefined **)(puVar5 + -8) = puVar29;
    *(long **)(puVar5 + -0x58) = plVar11;
    lVar9 = plVar11[0xd];
    if (lVar9 == 0) {
      puVar5 = puVar5 + -0x58;
      lVar27 = 1;
    }
    else {
      lVar27 = *(long *)(lVar9 + 0x18);
      if (lVar27 == 0) {
        return plVar11;
      }
      puVar5 = (undefined1 *)(lVar9 + 0x20);
    }
    lVar9 = 0;
    do {
      lVar21 = *(long *)(puVar5 + lVar9 * 8);
      pcVar26 = *(code **)(lVar21 + 0x10);
      plVar14 = *(long **)(lVar21 + 0x20);
      lVar21 = *(long *)(lVar21 + 0x28);
      if (*(short *)(lVar21 + 0x48) == -1) {
        func_0x00f78ad8(lVar21,uVar13);
      }
      iVar7 = func_0x00f78a4c(lVar21);
      if (iVar7 == 0) {
        if ((((plVar14 == (long *)0x0) || (*(short *)(lVar21 + 0x48) == -1)) ||
            ((*(byte *)(*plVar14 + 0x115) & 1) != 0)) || (plVar11[3] == 0)) goto code_r0x01560ac4;
        iVar7 = func_0x00f78a44(lVar21);
        iVar8 = func_0x00f78ec0(lVar21);
        if (iVar7 == 0) {
          uVar3 = *(ushort *)(lVar21 + 0x48);
          if (iVar8 == 0) {
            lVar21 = *plVar14 + (ulong)uVar3 * 0x10;
            auVar32 = (**(code **)(lVar21 + 0x138))(plVar14,*(undefined8 *)(lVar21 + 0x140));
            goto code_r0x01560ad0;
          }
          lVar21 = func_0x00f78a48(lVar21);
          lVar22 = *plVar14;
          uVar10 = (ulong)*(ushort *)(lVar22 + 0x12a);
          if (uVar10 != 0) {
            piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == lVar21) {
                puVar15 = (undefined8 *)
                          (lVar22 + (long)(int)(*piVar23 + (uint)uVar3) * 0x10 + 0x138);
                goto code_r0x01560b94;
              }
              piVar23 = piVar23 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          puVar15 = (undefined8 *)func_0x00fac1f0(plVar14,lVar21,(ulong)uVar3);
code_r0x01560b94:
          pcVar26 = (code *)*puVar15;
          puVar15 = (undefined8 *)puVar15[1];
        }
        else {
          if (iVar8 == 0) {
            uVar12 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar21 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar22 = *plVar14;
            uVar10 = (ulong)*(ushort *)(lVar22 + 0x12a);
            if (uVar10 != 0) {
              piVar23 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar23 + -2) == *(long *)(lVar21 + 0x18)) {
                  lVar22 = lVar22 + (long)(int)(*piVar23 + (uint)*(ushort *)(lVar21 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01560b6c;
                }
                piVar23 = piVar23 + 4;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            lVar22 = func_0x00fac1f0(plVar14);
code_r0x01560b6c:
            uVar12 = *(undefined8 *)(lVar22 + 8);
          }
          puVar15 = (undefined8 *)func_0x00f78acc(uVar12,lVar21);
          pcVar26 = (code *)*puVar15;
        }
        auVar32 = (*pcVar26)(plVar14,puVar15);
      }
      else if (*(char *)(lVar21 + 0x4a) == '\0') {
        auVar32 = (*pcVar26)(lVar21);
      }
      else {
code_r0x01560ac4:
        auVar32 = (*pcVar26)(plVar14,lVar21);
      }
code_r0x01560ad0:
      uVar13 = auVar32._8_8_;
      lVar9 = lVar9 + 1;
      if (lVar9 == lVar27) {
        return auVar32._0_8_;
      }
    } while( true );
  }
  puVar28 = *(undefined1 **)((long)register0x00000008 + -0xf0);
  puVar29 = *(undefined **)((long)register0x00000008 + -0xe8);
  uVar18 = *(undefined8 *)((long)register0x00000008 + -0xf8);
  puVar4 = (undefined1 *)((long)register0x00000008 + -0xe0);
  unaff_x22 = *(long **)((long)register0x00000008 + -0x110);
  auVar32 = *(undefined1 (*) [16])((long)register0x00000008 + -0x108);
  plVar11 = /*STR('event:/UI/Front_End/GeneralButton4')*/ plRam0000000003d79020;
code_r0x0151398c:
  *(long **)(puVar4 + -0x30) = unaff_x22;
  *(undefined1 (*) [16])(puVar4 + -0x28) = auVar32;
  *(undefined8 *)(puVar4 + -0x18) = uVar18;
  *(undefined1 **)(puVar4 + -0x10) = puVar28;
  *(undefined **)(puVar4 + -8) = puVar29;
  uVar12 = 0x3eb4000;
  plVar14 = plVar11;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    plVar14 = (long *)func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return plVar14;
  }
  lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar9 != 0) {
    plVar14 = (long *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar9,plVar11,uRam0000000003d2faf8);
    if ((int)plVar14 == 0) {
      return plVar14;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar9 != 0)) &&
       (plVar14 = (long *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar9,plVar11,uRam0000000003d2fb00),
       plVar14 != (long *)0x0)) {
      *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
      *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
      *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,plVar14,0,0);
      return plVar14;
    }
  }
  plVar14 = (long *)func_0x00f78af4();
  *(undefined8 *)(puVar4 + -0x70) = unaff_d9;
  *(ulong *)(puVar4 + -0x68) = CONCAT44(unaff_00005104,unaff_s8);
  *(long **)(puVar4 + -0x60) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x58) = 0x3eb4000;
  *(undefined8 *)(puVar4 + -0x50) = 0x3d25580;
  *(long **)(puVar4 + -0x48) = plVar11;
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar11 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar14,0);
  if ((plVar11 != (long *)0x0) && (*plVar11 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar13 = func_0x00f78e5c(plVar11);
    *(long **)(puVar4 + -0x90) = plVar11;
    *(long **)(puVar4 + -0x88) = plVar14;
    *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x40;
    *(undefined **)(puVar4 + -0x78) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
    lVar9 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    uVar18 = *(undefined8 *)(puVar4 + -0x90);
    *(long **)(puVar4 + -0xa0) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x98) = 0x3eb4000;
    *(undefined8 *)(puVar4 + -0x90) = uVar18;
    *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(puVar4 + -0x88);
    *(undefined8 *)(puVar4 + -0x80) = *(undefined8 *)(puVar4 + -0x80);
    *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x78);
    if (lVar9 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar16 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar16,uVar13,0);
    }
    else {
      uVar12 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar10 = (*pcRam0000000003ec01d0)(uVar13);
      if ((uVar10 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar11 = (long *)(*pcRam0000000003ec01e0)(uVar13,lVar9);
        return plVar11;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar16 = func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar16,uVar18,0);
      uVar18 = uVar13;
    }
    uVar13 = func_0x00f78a24(0x3d5a8a8);
    auVar32 = func_0x00f78ac0(uVar16,uVar13);
    *(long **)(puVar4 + -0xd0) = unaff_x22;
    *(undefined8 *)(puVar4 + -200) = uVar12;
    *(undefined8 *)(puVar4 + -0xc0) = uVar18;
    *(undefined8 *)(puVar4 + -0xb8) = uVar16;
    *(undefined1 **)(puVar4 + -0xb0) = puVar4 + -0x80;
    *(undefined **)(puVar4 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar11 = (long *)(*pcRam0000000003ec01e0)(auVar32._0_8_,auVar32._8_8_);
    return plVar11;
  }
  fVar30 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar12 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar30 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                           plVar11,4,0);
  plVar17 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar12,uRam0000000003d5e780);
  *(undefined8 *)(puVar4 + -0xa0) = 0x3d5e780;
  *(undefined8 *)(puVar4 + -0x98) = 0x3d5e868;
  *(long **)(puVar4 + -0x90) = plVar11;
  *(long **)(puVar4 + -0x88) = plVar14;
  *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x40;
  *(undefined **)(puVar4 + -0x78) = &UNK_01513b44;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar14,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((plVar17 != (long *)0x0) && ((char)plVar17[0x1d] != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar7 != 0) {
      lVar9 = func_0x00f78adc(plVar14,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
      if ((uVar10 & 1) == 0) {
        if (plVar14 == (long *)0x0) goto code_r0x018eef34;
        lVar9 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
      }
      else {
        if (lVar9 == 0) {
code_r0x018eef34:
          auVar32 = func_0x00f78af4();
          plVar11 = auVar32._0_8_;
          *(undefined8 *)(puVar4 + -0xd0) = 0x3d5e780;
          *(long *)(puVar4 + -200) = lVar9;
          *(long **)(puVar4 + -0xc0) = plVar14;
          *(long **)(puVar4 + -0xb8) = plVar17;
          *(undefined1 **)(puVar4 + -0xb0) = puVar4 + -0x80;
          *(undefined **)(puVar4 + -0xa8) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((plVar11 != (long *)0x0) && ((char)plVar11[0x1d] != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(plVar11,auVar32._8_8_,cVar2 != '\0',0);
          }
          return plVar11;
        }
        lVar9 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar9,0);
      }
      plVar17[0x19] = lVar9;
    }
    plVar17[9] = (long)plVar14;
  }
  return plVar17;
}



// ============================================================
// RVA: 0x149c824 | Atlas.UI.Screens.MultiplayerModeSelectScreen.JumpToJoinRoomIfPossible
// ============================================================

/* WARNING: Possible PIC construction at 0x0149ca90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01514864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01515350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cb98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149ccdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01515354) */
/* WARNING: Removing unreachable block (ram,0x0149cad4) */
/* WARNING: Removing unreachable block (ram,0x0149cae4) */
/* WARNING: Removing unreachable block (ram,0x0149caec) */
/* WARNING: Removing unreachable block (ram,0x0149cab4) */
/* WARNING: Removing unreachable block (ram,0x0149cac4) */
/* WARNING: Removing unreachable block (ram,0x0149cacc) */
/* WARNING: Removing unreachable block (ram,0x0149ca94) */
/* WARNING: Removing unreachable block (ram,0x0149caa4) */
/* WARNING: Removing unreachable block (ram,0x0149caac) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_MultiplayerModeSelectScreen__JumpToJoinRoomIfPossible
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long *extraout_x1;
  uint extraout_w8;
  uint uVar19;
  ulong *puVar20;
  ulong uVar21;
  long extraout_x8;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long extraout_x9;
  int *piVar25;
  undefined8 unaff_x19;
  undefined8 uVar26;
  undefined8 unaff_x20;
  undefined8 uVar27;
  undefined8 unaff_x21;
  undefined8 uVar28;
  long unaff_x22;
  code *pcVar29;
  ulong unaff_x23;
  long lVar30;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar31;
  undefined *unaff_x30;
  undefined *puVar32;
  float fVar33;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined8 unaff_d9;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  do {
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    uVar16 = param_6;
    if ((bRam0000000003eb4a07 & 1) == 0) {
      func_0x00f78a20(0x3d3e0d8);
      func_0x00f78a20(0x3d3e130);
      func_0x00f78a20(0x3d3e178);
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d411e8);
      bRam0000000003eb4a07 = 1;
      uVar16 = param_6;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0xa0) != 0)) {
      uVar10 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar9 + 0xa0),uRam0000000003d3e0d8);
      if ((uVar10 & 1) != 0) {
        return uVar10;
      }
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0xe0) != 0)) {
        uVar10 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar9 + 0xe0),uRam0000000003d3e130);
        if ((uVar10 & 1) != 0) {
          return uVar10;
        }
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0x98) != 0)) {
          uVar10 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar9 + 0x98),uRam0000000003d3e178);
          if ((uVar10 & 1) != 0) {
            return uVar10;
          }
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d411e0);
          if (lVar9 != 0) {
            uVar10 = *(ulong *)(lVar9 + 0x20);
            if (uVar10 == 0) {
              return 0;
            }
            unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
            puVar32 = *(undefined **)((long)register0x00000008 + -8);
            unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
            uVar27 = *(undefined8 *)((long)register0x00000008 + -0x18);
            uVar16 = *(undefined8 *)((long)register0x00000008 + -0x28);
            puVar5 = (undefined1 *)register0x00000008;
            lVar9 = *(long *)((long)register0x00000008 + -0x30);
            goto code_r0x015609bc;
          }
        }
      }
    }
    uVar11 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0x3d411e8;
    *(undefined8 *)((long)register0x00000008 + -0x48) = param_4;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__OnBeforeExit;
    uVar27 = 0x3eb4000;
    uVar10 = 0x3d411e8;
    if ((bRam0000000003eb4a03 & 1) == 0) {
      func_0x00f78a20(0x3d2a320);
      func_0x00f78a20(0x3d1b598);
      func_0x00f78a20(0x3d2c840);
      func_0x00f78a20(0x3d5a9e8);
      func_0x00f78a20(0x3d411d8);
      func_0x00f78a20(0x3d411e8);
      bRam0000000003eb4a03 = 1;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d411e8);
    if ((lVar9 == 0) || (unaff_x22 = *(long *)(lVar9 + 0x28), unaff_x22 == 0)) {
code_r0x0149cb08:
      func_0x00f78af4();
    }
    else {
      unaff_x23 = 0x3d1b598;
      unaff_x24 = 0x3d5a000;
      unaff_x25 = 0x3d2a000;
      uVar27 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar10 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar10,uVar11,uRam0000000003d5a9e8,uRam0000000003d2a320);
      uVar16 = 0;
      plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar27,uVar10);
      if ((plVar12 == (long *)0x0) || (*plVar12 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
        uVar27 = 0x3d411d8;
        *(long **)(unaff_x22 + 0x48) = plVar12;
        uVar16 = uRam0000000003d2c840;
        Atlas_UI_Screens_AtlasScreen_ModeSelectScreenBehaviour__ModeSelectScreen_TransitionData___SetScreenHandlePartyInvite
                  (uVar11,0);
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d411d8);
        if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x68), lVar9 == 0)) goto code_r0x0149cb08;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3d5a000;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3d1b598;
        *(long *)((long)register0x00000008 + -0xb0) = unaff_x22;
        *(ulong *)((long)register0x00000008 + -0xa8) = uVar10;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3d411d8;
        *(undefined8 *)((long)register0x00000008 + -0x98) = uVar11;
        *(undefined1 **)((long)register0x00000008 + -0x90) =
             (undefined1 *)((long)register0x00000008 + -0x40);
        *(undefined **)((long)register0x00000008 + -0x88) = &UNK_0149ca94;
        if ((bRam0000000003eb4d9b & 1) == 0) {
          func_0x00f78a20(0x3d1fa78,0);
          bRam0000000003eb4d9b = 1;
        }
        plVar12 = *(long **)(lVar9 + 0x148);
        uVar24 = 0x3eb4000;
        if (plVar12 == (long *)0x0) goto code_r0x01514e70;
        uVar14 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
        if (uVar14 == 0) goto code_r0x01514ff8;
        uVar24 = uVar14;
        if ((int)*(ulong *)(uVar14 + 0x18) < 1) goto code_r0x01514e70;
        uVar10 = 0;
        uVar21 = *(ulong *)(uVar14 + 0x18) & 0xffffffff;
        unaff_x22 = uVar14 + 0x20;
        unaff_x23 = 0x3d1fa78;
        break;
      }
    }
    auVar35 = func_0x00f78e5c();
    puVar4 = (undefined1 *)((long)register0x00000008 + -0xb0);
    *(long *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0xa8) = uVar10;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar27;
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar11;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x88) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__GameTypePressed;
    puVar31 = (undefined1 *)((long)register0x00000008 + -0x90);
    param_6 = uVar16;
    if ((bRam0000000003eb4a04 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79018);
      func_0x00f78a20(0x3d79020);
      bRam0000000003eb4a04 = 1;
    }
    unaff_x22 = 0x3d411e0;
    lVar9 = 0x3d411e0;
    iVar7 = auVar35._8_4_;
    if (iVar7 == 1) {
      puVar20 = (ulong *)0x3d79018;
code_r0x0149cb90:
      puVar32 = &UNK_0149cb9c;
      uVar10 = *puVar20;
      goto code_r0x0151398c;
    }
    if (iVar7 == 2) {
      puVar20 = (ulong *)0x3d79020;
      goto code_r0x0149cb90;
    }
    lVar30 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(auVar35._0_8_,uRam0000000003d411e0);
    if (lVar30 != 0) {
      uVar10 = *(ulong *)(lVar30 + 0x10);
      if (uVar10 == 0) {
        return 0;
      }
      *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -200) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0xb8) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xa0) =
           *(undefined8 *)((long)register0x00000008 + -0xa0);
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0x98);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(ulong *)((long)register0x00000008 + -0xe8) = uVar10;
      *(int *)((long)register0x00000008 + -0xec) = iVar7;
      lVar9 = *(long *)(uVar10 + 0x68);
      if (lVar9 == 0) {
        puVar5 = (undefined1 *)((long)register0x00000008 + -0xe8);
        lVar30 = 1;
      }
      else {
        lVar30 = *(long *)(lVar9 + 0x18);
        if (lVar30 == 0) {
          return uVar10;
        }
        puVar5 = (undefined1 *)(lVar9 + 0x20);
      }
      lVar9 = 0;
      goto code_r0x015606b4;
    }
    uVar27 = func_0x00f78af4();
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3d411e0;
    *(undefined1 (*) [16])((long)register0x00000008 + -0xd8) = auVar35;
    *(undefined8 *)((long)register0x00000008 + -200) = uVar16;
    *(undefined1 **)((long)register0x00000008 + -0xc0) = puVar31;
    *(undefined **)((long)register0x00000008 + -0xb8) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__CreateRoomPressed;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xc0);
    unaff_x20 = 0x3eb4000;
    uVar16 = 0x3d411e0;
    if ((bRam0000000003eb4a05 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79018);
      bRam0000000003eb4a05 = 1;
    }
    lVar30 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar27,uRam0000000003d411e0);
    if (lVar30 != 0) {
      uVar27 = 0x3d79018;
      uVar10 = *(ulong *)(lVar30 + 0x18);
      if (uVar10 != 0) {
        puVar32 = &UNK_0149cc54;
        lVar9 = unaff_x22;
        goto code_r0x015609bc;
      }
      puVar31 = *(undefined1 **)((long)register0x00000008 + -0xc0);
      puVar32 = *(undefined **)((long)register0x00000008 + -0xb8);
      uVar16 = *(undefined8 *)((long)register0x00000008 + -200);
      puVar4 = (undefined1 *)((long)register0x00000008 + -0xb0);
      unaff_x22 = *(long *)((long)register0x00000008 + -0xe0);
      auVar35 = *(undefined1 (*) [16])((long)register0x00000008 + -0xd8);
      uVar10 = /*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018;
      goto code_r0x0151398c;
    }
    unaff_x19 = func_0x00f78af4();
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0x3d411e0;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0x3d411e0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar27;
    *(undefined1 **)((long)register0x00000008 + -0xf0) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -0xe8) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__JoinRoomPressed;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xf0);
    unaff_x20 = 0x3eb4000;
    unaff_x21 = 0x3d411e0;
    uVar16 = 0x3d411e0;
    if ((bRam0000000003eb4a06 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79020);
      bRam0000000003eb4a06 = 1;
    }
    lVar30 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(unaff_x19,uRam0000000003d411e0);
    if (lVar30 != 0) goto code_r0x0149ccc8;
    unaff_x30 = &Atlas_UI_Screens_MultiplayerModeSelectScreen__OnPartyInvite;
    param_4 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  } while( true );
  while( true ) {
    plVar12 = *(long **)(unaff_x22 + uVar10 * 8);
    if ((plVar12 != (long *)0x0) &&
       (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar12 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x01514fec;
    /*Atlas.UI.UIAtlasButton$$remove_Selected*/ func_0x01514244(lVar9);
    uVar10 = uVar10 + 1;
    uVar21 = (ulong)*(uint *)(uVar14 + 0x18);
    if ((long)(int)*(uint *)(uVar14 + 0x18) <= (long)uVar10) break;
    if (uVar21 <= uVar10) goto code_r0x01514fe0;
  }
code_r0x01514e70:
  plVar12 = *(long **)(lVar9 + 0x150);
  if (plVar12 == (long *)0x0) {
code_r0x01514ee4:
    plVar12 = *(long **)(lVar9 + 0x158);
    if (plVar12 != (long *)0x0) {
      uVar14 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
      if (uVar14 == 0) goto code_r0x01514ff8;
      uVar24 = uVar14;
      if (0 < (int)*(ulong *)(uVar14 + 0x18)) {
        uVar10 = 0;
        uVar21 = *(ulong *)(uVar14 + 0x18) & 0xffffffff;
        unaff_x22 = uVar14 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar21 <= uVar10) goto code_r0x01514fe0;
          plVar12 = *(long **)(unaff_x22 + uVar10 * 8);
          if ((plVar12 != (long *)0x0) &&
             (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar12 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Pressed*/ func_0x015144d4(lVar9);
          uVar10 = uVar10 + 1;
          uVar21 = (ulong)*(uint *)(uVar14 + 0x18);
        } while ((long)uVar10 < (long)(int)*(uint *)(uVar14 + 0x18));
      }
    }
    plVar12 = *(long **)(lVar9 + 0x160);
    if (plVar12 == (long *)0x0) {
      return 0;
    }
    uVar14 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
    if (uVar14 != 0) {
      if ((int)*(ulong *)(uVar14 + 0x18) < 1) {
        return uVar14;
      }
      uVar10 = 0;
      uVar24 = *(ulong *)(uVar14 + 0x18) & 0xffffffff;
      unaff_x22 = uVar14 + 0x20;
      while (uVar10 < uVar24) {
        plVar12 = *(long **)(unaff_x22 + uVar10 * 8);
        if ((plVar12 != (long *)0x0) &&
           (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar12 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x01514fec;
        uVar21 = /*Atlas.UI.UIAtlasButton$$remove_SelectedOrPressed*/ func_0x0151461c(lVar9);
        uVar10 = uVar10 + 1;
        uVar24 = (ulong)*(uint *)(uVar14 + 0x18);
        if ((long)(int)*(uint *)(uVar14 + 0x18) <= (long)uVar10) {
          return uVar21;
        }
      }
code_r0x01514fe0:
      uVar16 = func_0x00f78b24();
      func_0x00f78ac0(uVar16,0);
      plVar12 = extraout_x1;
      lVar30 = extraout_x8;
code_r0x01514fec:
      unaff_x23 = 0x3d1fa78;
      func_0x00f78e5c(plVar12,lVar30);
      uVar24 = uVar14;
    }
  }
  else {
    uVar14 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
    if (uVar14 != 0) {
      uVar24 = uVar14;
      if (0 < (int)*(ulong *)(uVar14 + 0x18)) {
        uVar10 = 0;
        uVar21 = *(ulong *)(uVar14 + 0x18) & 0xffffffff;
        unaff_x22 = uVar14 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar21 <= uVar10) goto code_r0x01514fe0;
          plVar12 = *(long **)(unaff_x22 + uVar10 * 8);
          if ((plVar12 != (long *)0x0) &&
             (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar12 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Deselected*/ func_0x0151438c(lVar9);
          uVar10 = uVar10 + 1;
          uVar21 = (ulong)*(uint *)(uVar14 + 0x18);
        } while ((long)uVar10 < (long)(int)*(uint *)(uVar14 + 0x18));
      }
      goto code_r0x01514ee4;
    }
  }
code_r0x01514ff8:
  auVar35 = func_0x00f78af4();
  uVar16 = auVar35._8_8_;
  *(long *)((long)register0x00000008 + -0xf0) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0xe8) = uVar10;
  *(ulong *)((long)register0x00000008 + -0xe0) = uVar24;
  *(long *)((long)register0x00000008 + -0xd8) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined **)((long)register0x00000008 + -200) = &Atlas_UI_UIAtlasButtonGroup__Subscribe;
  if ((bRam0000000003eb4da9 & 1) == 0) {
    func_0x00f78a20(0x3d3c5b8);
    func_0x00f78a20(0x3d3c5c0);
    bRam0000000003eb4da9 = 1;
  }
  lVar9 = *(long *)(auVar35._0_8_ + 0x40);
  if (lVar9 != 0) {
    uVar10 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar9,uVar16,uRam0000000003d3c5c0);
    if ((uVar10 & 1) != 0) {
      return uVar10;
    }
    uVar10 = *(ulong *)(auVar35._0_8_ + 0x40);
    if (uVar10 != 0) {
      uVar27 = *(undefined8 *)((long)register0x00000008 + -0xe0);
      uVar24 = *(ulong *)((long)register0x00000008 + -0xd8);
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0xf0);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -0xe8);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar27;
      *(ulong *)((long)register0x00000008 + -0xd8) = uVar24;
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -200);
      lVar9 = *(long *)(uVar10 + 0x10);
      puVar17 = puRam0000000003d3c5b8;
      if (lVar9 == 0) {
code_r0x0242716c:
        uVar16 = uVar27;
        uVar10 = uVar24;
        uVar14 = func_0x00f78af4();
        lVar9 = extraout_x9;
        uVar19 = extraout_w8;
code_r0x02427170:
        *(uint *)(uVar10 + 0x18) = uVar19 + 1;
      }
      else {
        uVar19 = *(uint *)(uVar10 + 0x18);
        uVar14 = uVar10;
        if (uVar19 != *(uint *)(lVar9 + 0x18)) goto code_r0x02427170;
        puVar17 = *(undefined8 **)(*(long *)(puRam0000000003d3c5b8[3] + 0xc0) + 0x60);
        uVar14 = (*(code *)*puVar17)(uVar10,uVar19 + 1);
        lVar9 = *(long *)(uVar10 + 0x10);
        uVar19 = *(uint *)(uVar10 + 0x18);
        *(uint *)(uVar10 + 0x18) = uVar19 + 1;
        uVar24 = uVar10;
        uVar27 = uVar16;
        if (lVar9 == 0) goto code_r0x0242716c;
      }
      if (uVar19 < *(uint *)(lVar9 + 0x18)) {
        *(undefined8 *)(lVar9 + (long)(int)uVar19 * 8 + 0x20) = uVar16;
        *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
        return uVar14;
      }
      uVar27 = func_0x00f78b24();
      auVar35 = func_0x00f78ac0(uVar27,0);
      lVar30 = auVar35._8_8_;
      lVar9 = auVar35._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3d5a000;
      *(ulong *)((long)register0x00000008 + -0x118) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x110) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0x108) = uVar18;
      *(undefined8 *)((long)register0x00000008 + -0x100) = uVar16;
      *(ulong *)((long)register0x00000008 + -0xf8) = uVar10;
      *(undefined1 **)((long)register0x00000008 + -0xf0) =
           (undefined1 *)((long)register0x00000008 + -0xd0);
      *(undefined **)((long)register0x00000008 + -0xe8) =
           &System_Collections_Generic_List_object___System_Collections_IList_Add;
      (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x48))(lVar30,0x14);
      if (lVar9 != 0) {
        pcVar29 = (code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x28);
        lVar22 = *(long *)(*(long *)(puVar17[3] + 0xc0) + 0x38);
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
        }
        if (lVar30 == 0) {
          lVar23 = 0;
        }
        else {
          lVar23 = func_0x00f78adc(lVar30,lVar22);
          if (lVar23 == 0) {
            func_0x00f78e5c(lVar30,lVar22);
            goto code_r0x0242734c;
          }
        }
        (*pcVar29)(lVar9,lVar23,*(undefined8 *)(*(long *)(puVar17[3] + 0xc0) + 0x28));
        iVar7 = (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x68))(lVar9);
        return (ulong)(iVar7 - 1);
      }
      func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x2427350);
      (*pcVar29)();
    }
  }
  auVar34 = func_0x00f78af4();
  lVar30 = auVar34._8_8_;
  lVar9 = auVar34._0_8_;
  *(long *)((long)register0x00000008 + -0x120) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x118) = 0x3eb4000;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x110) = auVar35;
  *(undefined1 **)((long)register0x00000008 + -0x100) =
       (undefined1 *)((long)register0x00000008 + -0xd0);
  *(undefined **)((long)register0x00000008 + -0xf8) = &Atlas_UI_UIAtlasButton__OnPointerClick;
  if ((bRam0000000003eb4d9d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d9d = 1;
  }
  uVar10 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(lVar9 + 0x16c),0);
  if ((int)uVar10 == 0) {
    return uVar10;
  }
  if (lVar30 != 0) {
    if (*(int *)(lVar30 + 0x134) != 0) {
      return uVar10;
    }
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(lVar9);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar9,lVar30,0);
    uVar16 = *(undefined8 *)(lVar9 + 0x118);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,0,0);
    if ((int)uVar10 == 0) {
      return uVar10;
    }
    bVar6 = false;
    uVar16 = *(undefined8 *)((long)register0x00000008 + -0x100);
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0xf8);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x110);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x108);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xf0);
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0x120);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x118);
    goto Atlas_UI_UIAtlasButton__SelectButton;
  }
  auVar35 = func_0x00f78af4();
  plVar13 = auVar35._8_8_;
  plVar12 = auVar35._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x160) = 0x3d5a000;
  *(ulong *)((long)register0x00000008 + -0x158) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x150) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x148) = 0x3eb4000;
  *(long *)((long)register0x00000008 + -0x140) = lVar9;
  *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x130) =
       (undefined1 *)((long)register0x00000008 + -0x100);
  *(undefined **)((long)register0x00000008 + -0x128) = &Atlas_UI_UIAtlasButton__OnSubmit;
  if ((bRam0000000003eb4d9e & 1) == 0) {
    func_0x00f78a20(0x3d21bd8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9e = 1;
  }
  uVar10 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)((long)plVar12 + 0x16c),0);
  if ((int)uVar10 == 0) {
    return uVar10;
  }
  if (plVar13 == (long *)0x0) {
    lVar9 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    unaff_x23 = 1;
  }
  else {
    if (*(byte *)(*plVar13 + 300) < *(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300)) {
      unaff_x23 = 1;
    }
    else {
      unaff_x23 = (ulong)(*(long *)(*(long *)(*plVar13 + 200) +
                                    (ulong)*(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300) * 8 + -8) !=
                         /*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8);
    }
    lVar9 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    if (*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) <= *(byte *)(*plVar13 + 300)) {
      unaff_x23 = (ulong)((uint)(*(long *)(*(long *)(*plVar13 + 200) +
                                           (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 + -8) !=
                                /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0) & (uint)unaff_x23);
    }
  }
  if ((int)unaff_x23 == 0) {
code_r0x015152e8:
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(plVar12);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(plVar12,plVar13,0);
    uVar10 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
    if (((int)uVar10 == 0) ||
       (uVar10 = (**(code **)(*plVar12 + 0x2b8))(plVar12,*(undefined8 *)(*plVar12 + 0x2c0)),
       (int)uVar10 == 0)) {
      return uVar10;
    }
    (**(code **)(*plVar12 + 0x2d8))(plVar12,2,0,*(undefined8 *)(*plVar12 + 0x2e0));
    puVar32 = &UNK_01515354;
    plVar15 = plVar12;
  }
  else {
    unaff_x23 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar9,0);
    if (iVar7 == 0) goto code_r0x015152e8;
    if (lVar9 != 0) {
      lVar9 = *(long *)(lVar9 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,plVar12,0);
      if ((uVar10 & 1) != 0) {
        return uVar10;
      }
      goto code_r0x015152e8;
    }
    puVar32 = &Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0;
    plVar15 = (long *)func_0x00f78af4();
  }
  *(long *)((long)register0x00000008 + -400) = lVar9;
  *(undefined8 *)((long)register0x00000008 + -0x188) = 1;
  *(long **)((long)register0x00000008 + -0x180) = plVar13;
  *(long **)((long)register0x00000008 + -0x178) = plVar12;
  *(undefined1 **)((long)register0x00000008 + -0x170) =
       (undefined1 *)((long)register0x00000008 + -0x130);
  *(undefined **)((long)register0x00000008 + -0x168) = puVar32;
  if ((bRam0000000003eb4da6 & 1) == 0) {
    func_0x00f78a20(0x3d29448);
    bRam0000000003eb4da6 = 1;
  }
  uVar10 = func_0x00f78aec(/*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d_TypeInfo*/ uRam0000000003d29448);
  /*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d$$.ctor*/ func_0x0156c5e4(uVar10,0,0);
  if (uVar10 != 0) {
    *(long **)(uVar10 + 0x20) = plVar15;
    return uVar10;
  }
  auVar34 = func_0x00f78af4();
  *(long *)((long)register0x00000008 + -0x1c0) = lVar9;
  *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0x3d29448;
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
  *(long **)((long)register0x00000008 + -0x1a8) = plVar15;
  *(undefined1 **)((long)register0x00000008 + -0x1a0) =
       (undefined1 *)((long)register0x00000008 + -0x170);
  *(undefined **)((long)register0x00000008 + -0x198) = &Atlas_UI_UIAtlasButton__OnSelect;
  if ((bRam0000000003eb4d9f & 1) == 0) {
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9f = 1;
  }
  uVar10 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(auVar34._0_8_ + 0x16c),0);
  if ((int)uVar10 == 0) {
    return uVar10;
  }
  if (auVar34._8_8_ == (long *)0x0) {
code_r0x0151546c:
    bVar6 = false;
  }
  else {
    lVar9 = *auVar34._8_8_;
    if (*(byte *)(lVar9 + 300) < *(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300)) goto code_r0x0151546c;
    bVar6 = *(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 + -8
                     ) == /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0;
  }
  iVar7 = /*Core.Input.InputManager$$get_IsCurrentSelectionFromUser*/ func_0x0164ad7c(0);
  if ((iVar7 != 0) && (!bVar6)) {
    /*Atlas.UI.UIAtlasButton$$PlayButtonSelectSound*/ func_0x01514cec(auVar34._0_8_);
  }
  uVar16 = *(undefined8 *)((long)register0x00000008 + -0x1a0);
  uVar18 = *(undefined8 *)((long)register0x00000008 + -0x198);
  uVar27 = *(undefined8 *)((long)register0x00000008 + -0x1b0);
  uVar26 = *(undefined8 *)((long)register0x00000008 + -0x1a8);
  puVar5 = (undefined1 *)((long)register0x00000008 + -400);
  uVar11 = *(undefined8 *)((long)register0x00000008 + -0x1c0);
  uVar28 = *(undefined8 *)((long)register0x00000008 + -0x1b8);
Atlas_UI_UIAtlasButton__SelectButton:
  uVar10 = auVar34._0_8_;
  *(undefined8 *)(puVar5 + -0x30) = uVar11;
  *(undefined8 *)(puVar5 + -0x28) = uVar28;
  *(undefined8 *)(puVar5 + -0x20) = uVar27;
  *(undefined8 *)(puVar5 + -0x18) = uVar26;
  *(undefined8 *)(puVar5 + -0x10) = uVar16;
  *(undefined8 *)(puVar5 + -8) = uVar18;
  puVar31 = puVar5 + -0x10;
  uVar16 = 0;
  if ((*(char *)(uVar10 + 0x140) != '\0') && (bVar6)) {
    return uVar10;
  }
  /*UnityEngine.UI.Selectable$$OnSelect*/ func_0x032e4efc(uVar10,auVar34._8_8_,0);
  if (*(long *)(uVar10 + 0x118) != 0) {
    /*Atlas.UI.UIAtlasButtonGroup$$OnButtonSelected*/ func_0x01514894(*(long *)(uVar10 + 0x118),uVar10,auVar34._8_8_);
  }
  uVar24 = *(ulong *)(uVar10 + 0x148);
  if (uVar24 == 0) {
    uVar24 = *(ulong *)(uVar10 + 0x160);
    if (uVar24 == 0) {
      return 0;
    }
    puVar31 = *(undefined1 **)(puVar5 + -0x10);
    puVar32 = *(undefined **)(puVar5 + -8);
    uVar16 = *(undefined8 *)(puVar5 + -0x20);
    uVar11 = *(undefined8 *)(puVar5 + -0x30);
    auVar34._8_8_ = *(undefined8 *)(puVar5 + -0x28);
    auVar34._0_8_ = *(undefined8 *)(puVar5 + -0x18);
  }
  else {
    puVar32 = &UNK_01514868;
    puVar5 = puVar5 + -0x30;
  }
  uVar27 = 0;
  *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x48) = 0x3d2a000;
  *(undefined8 *)(puVar5 + -0x40) = 0x3d5a000;
  *(ulong *)(puVar5 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x30) = uVar11;
  *(long *)(puVar5 + -0x28) = auVar34._8_8_;
  *(undefined8 *)(puVar5 + -0x20) = uVar16;
  *(long *)(puVar5 + -0x18) = auVar34._0_8_;
  *(undefined1 **)(puVar5 + -0x10) = puVar31;
  *(undefined **)(puVar5 + -8) = puVar32;
  *(ulong *)(puVar5 + -0x58) = uVar24;
  lVar9 = *(long *)(uVar24 + 0x68);
  if (lVar9 == 0) {
    puVar5 = puVar5 + -0x58;
    lVar30 = 1;
  }
  else {
    lVar30 = *(long *)(lVar9 + 0x18);
    if (lVar30 == 0) {
      return uVar24;
    }
    puVar5 = (undefined1 *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar22 = *(long *)(puVar5 + lVar9 * 8);
    pcVar29 = *(code **)(lVar22 + 0x10);
    plVar12 = *(long **)(lVar22 + 0x20);
    lVar22 = *(long *)(lVar22 + 0x28);
    if (*(short *)(lVar22 + 0x48) == -1) {
      func_0x00f78ad8(lVar22,uVar27);
    }
    iVar7 = func_0x00f78a4c(lVar22);
    if (iVar7 == 0) {
      if ((((plVar12 == (long *)0x0) || (*(short *)(lVar22 + 0x48) == -1)) ||
          ((*(byte *)(*plVar12 + 0x115) & 1) != 0)) || (*(long *)(uVar24 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar7 = func_0x00f78a44(lVar22);
      iVar8 = func_0x00f78ec0(lVar22);
      if (iVar7 == 0) {
        uVar3 = *(ushort *)(lVar22 + 0x48);
        if (iVar8 == 0) {
          lVar22 = *plVar12 + (ulong)uVar3 * 0x10;
          auVar35 = (**(code **)(lVar22 + 0x138))(plVar12,*(undefined8 *)(lVar22 + 0x140));
          goto code_r0x02924da4;
        }
        lVar22 = func_0x00f78a48(lVar22);
        lVar23 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar23 + 0x12a);
        if (uVar10 != 0) {
          piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == lVar22) {
              puVar17 = (undefined8 *)(lVar23 + (long)(int)(*piVar25 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar25 = piVar25 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar17 = (undefined8 *)func_0x00fac1f0(plVar12,lVar22,(ulong)uVar3);
code_r0x02924e68:
        pcVar29 = (code *)*puVar17;
        puVar17 = (undefined8 *)puVar17[1];
      }
      else {
        if (iVar8 == 0) {
          uVar16 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar23 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar23 + 0x12a);
          if (uVar10 != 0) {
            piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)(lVar22 + 0x18)) {
                lVar23 = lVar23 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar22 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar25 = piVar25 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          lVar23 = func_0x00fac1f0(plVar12);
code_r0x02924e40:
          uVar16 = *(undefined8 *)(lVar23 + 8);
        }
        puVar17 = (undefined8 *)func_0x00f78acc(uVar16,lVar22);
        pcVar29 = (code *)*puVar17;
      }
      auVar35 = (*pcVar29)(plVar12,puVar17);
    }
    else if (*(char *)(lVar22 + 0x4a) == '\0') {
      auVar35 = (*pcVar29)(lVar22);
    }
    else {
code_r0x02924d98:
      auVar35 = (*pcVar29)(plVar12,lVar22);
    }
code_r0x02924da4:
    uVar27 = auVar35._8_8_;
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar30) {
      return auVar35._0_8_;
    }
  } while( true );
code_r0x015606b4:
  lVar22 = *(long *)(puVar5 + lVar9 * 8);
  pcVar29 = *(code **)(lVar22 + 0x10);
  plVar12 = *(long **)(lVar22 + 0x20);
  lVar22 = *(long *)(lVar22 + 0x28);
  if (*(short *)(lVar22 + 0x48) == -1) {
    func_0x00f78ad8(lVar22);
  }
  iVar7 = func_0x00f78a4c(lVar22);
  if (iVar7 == 0) {
    if (plVar12 == (long *)0x0) {
      uVar24 = (*pcVar29)((undefined1 *)((long)register0x00000008 + -0xfc),uVar16,lVar22);
    }
    else {
      if (((*(short *)(lVar22 + 0x48) == -1) || ((*(byte *)(*plVar12 + 0x115) & 1) != 0)) ||
         (*(long *)(uVar10 + 0x18) == 0)) goto code_r0x01560784;
      iVar7 = func_0x00f78a44(lVar22);
      iVar8 = func_0x00f78ec0(lVar22);
      if (iVar7 == 0) {
        uVar3 = *(ushort *)(lVar22 + 0x48);
        if (iVar8 == 0) {
          lVar22 = *plVar12 + (ulong)uVar3 * 0x10;
          uVar24 = (**(code **)(lVar22 + 0x138))
                             (plVar12,*(undefined4 *)((long)register0x00000008 + -0xec),uVar16,
                              *(undefined8 *)(lVar22 + 0x140));
          goto code_r0x015607ac;
        }
        lVar22 = func_0x00f78a48(lVar22);
        uVar1 = *(undefined4 *)((long)register0x00000008 + -0xec);
        lVar23 = *plVar12;
        uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == lVar22) {
              puVar17 = (undefined8 *)(lVar23 + (long)(int)(*piVar25 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x01560884;
            }
            piVar25 = piVar25 + 4;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
        puVar17 = (undefined8 *)func_0x00fac1f0(plVar12,lVar22,(ulong)uVar3);
code_r0x01560884:
        pcVar29 = (code *)*puVar17;
        puVar17 = (undefined8 *)puVar17[1];
      }
      else {
        uVar1 = *(undefined4 *)((long)register0x00000008 + -0xec);
        if (iVar8 == 0) {
          uVar27 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar23 = *plVar12;
          uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
          if (uVar24 != 0) {
            piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)(lVar22 + 0x18)) {
                lVar23 = lVar23 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar22 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01560854;
              }
              piVar25 = piVar25 + 4;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          lVar23 = func_0x00fac1f0(plVar12);
code_r0x01560854:
          uVar27 = *(undefined8 *)(lVar23 + 8);
        }
        puVar17 = (undefined8 *)func_0x00f78acc(uVar27,lVar22);
        pcVar29 = (code *)*puVar17;
      }
      uVar24 = (*pcVar29)(plVar12,uVar1,uVar16,puVar17);
    }
  }
  else if (*(char *)(lVar22 + 0x4a) == '\x02') {
    uVar24 = (*pcVar29)(*(undefined4 *)((long)register0x00000008 + -0xec),uVar16,lVar22);
  }
  else {
code_r0x01560784:
    uVar24 = (*pcVar29)(plVar12,*(undefined4 *)((long)register0x00000008 + -0xec),uVar16,lVar22);
  }
code_r0x015607ac:
  lVar9 = lVar9 + 1;
  if (lVar9 == lVar30) {
    return uVar24;
  }
  goto code_r0x015606b4;
code_r0x0149ccc8:
  uVar27 = 0x3d79020;
  uVar10 = *(ulong *)(lVar30 + 0x20);
  if (uVar10 != 0) {
    puVar32 = &UNK_0149cce0;
code_r0x015609bc:
    uVar11 = 0;
    *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
    *(ulong *)(puVar5 + -0x38) = unaff_x23;
    *(long *)(puVar5 + -0x30) = lVar9;
    *(undefined8 *)(puVar5 + -0x28) = uVar16;
    *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar5 + -0x18) = uVar27;
    *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
    *(undefined **)(puVar5 + -8) = puVar32;
    *(ulong *)(puVar5 + -0x58) = uVar10;
    lVar9 = *(long *)(uVar10 + 0x68);
    if (lVar9 == 0) {
      puVar5 = puVar5 + -0x58;
      lVar30 = 1;
    }
    else {
      lVar30 = *(long *)(lVar9 + 0x18);
      if (lVar30 == 0) {
        return uVar10;
      }
      puVar5 = (undefined1 *)(lVar9 + 0x20);
    }
    lVar9 = 0;
    do {
      lVar22 = *(long *)(puVar5 + lVar9 * 8);
      pcVar29 = *(code **)(lVar22 + 0x10);
      plVar12 = *(long **)(lVar22 + 0x20);
      lVar22 = *(long *)(lVar22 + 0x28);
      if (*(short *)(lVar22 + 0x48) == -1) {
        func_0x00f78ad8(lVar22,uVar11);
      }
      iVar7 = func_0x00f78a4c(lVar22);
      if (iVar7 == 0) {
        if ((((plVar12 == (long *)0x0) || (*(short *)(lVar22 + 0x48) == -1)) ||
            ((*(byte *)(*plVar12 + 0x115) & 1) != 0)) || (*(long *)(uVar10 + 0x18) == 0))
        goto code_r0x01560ac4;
        iVar7 = func_0x00f78a44(lVar22);
        iVar8 = func_0x00f78ec0(lVar22);
        if (iVar7 == 0) {
          uVar3 = *(ushort *)(lVar22 + 0x48);
          if (iVar8 == 0) {
            lVar22 = *plVar12 + (ulong)uVar3 * 0x10;
            auVar35 = (**(code **)(lVar22 + 0x138))(plVar12,*(undefined8 *)(lVar22 + 0x140));
            goto code_r0x01560ad0;
          }
          lVar22 = func_0x00f78a48(lVar22);
          lVar23 = *plVar12;
          uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
          if (uVar24 != 0) {
            piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == lVar22) {
                puVar17 = (undefined8 *)
                          (lVar23 + (long)(int)(*piVar25 + (uint)uVar3) * 0x10 + 0x138);
                goto code_r0x01560b94;
              }
              piVar25 = piVar25 + 4;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          puVar17 = (undefined8 *)func_0x00fac1f0(plVar12,lVar22,(ulong)uVar3);
code_r0x01560b94:
          pcVar29 = (code *)*puVar17;
          puVar17 = (undefined8 *)puVar17[1];
        }
        else {
          if (iVar8 == 0) {
            uVar16 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar23 = *plVar12;
            uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
            if (uVar24 != 0) {
              piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == *(long *)(lVar22 + 0x18)) {
                  lVar23 = lVar23 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar22 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01560b6c;
                }
                piVar25 = piVar25 + 4;
                uVar24 = uVar24 - 1;
              } while (uVar24 != 0);
            }
            lVar23 = func_0x00fac1f0(plVar12);
code_r0x01560b6c:
            uVar16 = *(undefined8 *)(lVar23 + 8);
          }
          puVar17 = (undefined8 *)func_0x00f78acc(uVar16,lVar22);
          pcVar29 = (code *)*puVar17;
        }
        auVar35 = (*pcVar29)(plVar12,puVar17);
      }
      else if (*(char *)(lVar22 + 0x4a) == '\0') {
        auVar35 = (*pcVar29)(lVar22);
      }
      else {
code_r0x01560ac4:
        auVar35 = (*pcVar29)(plVar12,lVar22);
      }
code_r0x01560ad0:
      uVar11 = auVar35._8_8_;
      lVar9 = lVar9 + 1;
      if (lVar9 == lVar30) {
        return auVar35._0_8_;
      }
    } while( true );
  }
  puVar31 = *(undefined1 **)((long)register0x00000008 + -0xf0);
  puVar32 = *(undefined **)((long)register0x00000008 + -0xe8);
  uVar16 = *(undefined8 *)((long)register0x00000008 + -0xf8);
  puVar4 = (undefined1 *)((long)register0x00000008 + -0xe0);
  unaff_x22 = *(long *)((long)register0x00000008 + -0x110);
  auVar35 = *(undefined1 (*) [16])((long)register0x00000008 + -0x108);
  uVar10 = /*STR('event:/UI/Front_End/GeneralButton4')*/ uRam0000000003d79020;
code_r0x0151398c:
  *(long *)(puVar4 + -0x30) = unaff_x22;
  *(undefined1 (*) [16])(puVar4 + -0x28) = auVar35;
  *(undefined8 *)(puVar4 + -0x18) = uVar16;
  *(undefined1 **)(puVar4 + -0x10) = puVar31;
  *(undefined **)(puVar4 + -8) = puVar32;
  uVar16 = 0x3eb4000;
  uVar24 = uVar10;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    uVar24 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar24;
  }
  lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar9 != 0) {
    uVar24 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar9,uVar10,uRam0000000003d2faf8);
    if ((int)uVar24 == 0) {
      return uVar24;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar9 != 0)) &&
       (uVar24 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar9,uVar10,uRam0000000003d2fb00), uVar24 != 0)) {
      *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
      *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
      *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar24,0,0);
      return uVar24;
    }
  }
  plVar12 = (long *)func_0x00f78af4();
  *(undefined8 *)(puVar4 + -0x70) = unaff_d9;
  *(ulong *)(puVar4 + -0x68) = CONCAT44(unaff_00005104,unaff_s8);
  *(long *)(puVar4 + -0x60) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x58) = 0x3eb4000;
  *(undefined8 *)(puVar4 + -0x50) = 0x3d25580;
  *(ulong *)(puVar4 + -0x48) = uVar10;
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar13 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar12,0);
  if ((plVar13 != (long *)0x0) && (*plVar13 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar11 = func_0x00f78e5c(plVar13);
    *(long **)(puVar4 + -0x90) = plVar13;
    *(long **)(puVar4 + -0x88) = plVar12;
    *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x40;
    *(undefined **)(puVar4 + -0x78) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
    lVar9 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    uVar27 = *(undefined8 *)(puVar4 + -0x90);
    *(long *)(puVar4 + -0xa0) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x98) = 0x3eb4000;
    *(undefined8 *)(puVar4 + -0x90) = uVar27;
    *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(puVar4 + -0x88);
    *(undefined8 *)(puVar4 + -0x80) = *(undefined8 *)(puVar4 + -0x80);
    *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x78);
    if (lVar9 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar18 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar18,uVar11,0);
    }
    else {
      uVar16 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar10 = (*pcRam0000000003ec01d0)(uVar11);
      if ((uVar10 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (*pcRam0000000003ec01e0)(uVar11,lVar9);
        return uVar10;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar18 = func_0x00f78aec();
      uVar27 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar18,uVar27,0);
      uVar27 = uVar11;
    }
    uVar11 = func_0x00f78a24(0x3d5a8a8);
    auVar35 = func_0x00f78ac0(uVar18,uVar11);
    *(long *)(puVar4 + -0xd0) = unaff_x22;
    *(undefined8 *)(puVar4 + -200) = uVar16;
    *(undefined8 *)(puVar4 + -0xc0) = uVar27;
    *(undefined8 *)(puVar4 + -0xb8) = uVar18;
    *(undefined1 **)(puVar4 + -0xb0) = puVar4 + -0x80;
    *(undefined **)(puVar4 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*pcRam0000000003ec01e0)(auVar35._0_8_,auVar35._8_8_);
    return uVar10;
  }
  fVar33 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar16 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar33 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                           plVar13,4,0);
  uVar10 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar16,uRam0000000003d5e780);
  *(undefined8 *)(puVar4 + -0xa0) = 0x3d5e780;
  *(undefined8 *)(puVar4 + -0x98) = 0x3d5e868;
  *(long **)(puVar4 + -0x90) = plVar13;
  *(long **)(puVar4 + -0x88) = plVar12;
  *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x40;
  *(undefined **)(puVar4 + -0x78) = &UNK_01513b44;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar12,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((uVar10 != 0) && (*(char *)(uVar10 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar7 != 0) {
      lVar9 = func_0x00f78adc(plVar12,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
      if ((uVar24 & 1) == 0) {
        if (plVar12 == (long *)0x0) goto code_r0x018eef34;
        uVar16 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
      }
      else {
        if (lVar9 == 0) {
code_r0x018eef34:
          auVar35 = func_0x00f78af4();
          uVar24 = auVar35._0_8_;
          *(undefined8 *)(puVar4 + -0xd0) = 0x3d5e780;
          *(long *)(puVar4 + -200) = lVar9;
          *(long **)(puVar4 + -0xc0) = plVar12;
          *(ulong *)(puVar4 + -0xb8) = uVar10;
          *(undefined1 **)(puVar4 + -0xb0) = puVar4 + -0x80;
          *(undefined **)(puVar4 + -0xa8) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((uVar24 != 0) && (*(char *)(uVar24 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar24,auVar35._8_8_,cVar2 != '\0',0);
          }
          return uVar24;
        }
        uVar16 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar9,0);
      }
      *(undefined8 *)(uVar10 + 200) = uVar16;
    }
    *(long **)(uVar10 + 0x48) = plVar12;
  }
  return uVar10;
}



// ============================================================
// RVA: 0x149c95c | Atlas.UI.Screens.MultiplayerModeSelectScreen.OnBeforeExit
// ============================================================

/* WARNING: Possible PIC construction at 0x0149ca90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01514864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01515350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cb98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149ccdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01515354) */
/* WARNING: Removing unreachable block (ram,0x0149cad4) */
/* WARNING: Removing unreachable block (ram,0x0149cae4) */
/* WARNING: Removing unreachable block (ram,0x0149caec) */
/* WARNING: Removing unreachable block (ram,0x0149cab4) */
/* WARNING: Removing unreachable block (ram,0x0149cac4) */
/* WARNING: Removing unreachable block (ram,0x0149cacc) */
/* WARNING: Removing unreachable block (ram,0x0149ca94) */
/* WARNING: Removing unreachable block (ram,0x0149caa4) */
/* WARNING: Removing unreachable block (ram,0x0149caac) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_MultiplayerModeSelectScreen__OnBeforeExit
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *extraout_x1;
  undefined8 uVar19;
  undefined8 *puVar20;
  uint extraout_w8;
  uint uVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  long extraout_x8;
  long extraout_x9;
  int *piVar25;
  undefined8 unaff_x19;
  undefined8 uVar26;
  undefined8 unaff_x20;
  undefined8 uVar27;
  undefined8 unaff_x21;
  undefined8 uVar28;
  long unaff_x22;
  long lVar29;
  ulong unaff_x23;
  code *pcVar30;
  long lVar31;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar32;
  code *unaff_x30;
  undefined *puVar33;
  float fVar34;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined8 unaff_d9;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar27 = 0x3eb4000;
    uVar11 = 0x3d411e8;
    uVar19 = param_6;
    if ((bRam0000000003eb4a03 & 1) == 0) {
      func_0x00f78a20(0x3d2a320);
      func_0x00f78a20(0x3d1b598);
      func_0x00f78a20(0x3d2c840);
      func_0x00f78a20(0x3d5a9e8);
      func_0x00f78a20(0x3d411d8);
      func_0x00f78a20(0x3d411e8);
      bRam0000000003eb4a03 = 1;
      uVar19 = param_6;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
    if ((lVar10 == 0) || (unaff_x22 = *(long *)(lVar10 + 0x28), unaff_x22 == 0)) {
LAB_0149cb08:
      func_0x00f78af4();
    }
    else {
      unaff_x23 = 0x3d1b598;
      unaff_x24 = 0x3d5a000;
      unaff_x25 = 0x3d2a000;
      uVar27 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar11 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar11,param_4,uRam0000000003d5a9e8,uRam0000000003d2a320);
      uVar19 = 0;
      plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar27,uVar11);
      if ((plVar12 == (long *)0x0) || (*plVar12 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
        uVar27 = 0x3d411d8;
        *(long **)(unaff_x22 + 0x48) = plVar12;
        uVar19 = uRam0000000003d2c840;
        Atlas_UI_Screens_AtlasScreen_ModeSelectScreenBehaviour__ModeSelectScreen_TransitionData___SetScreenHandlePartyInvite
                  (param_4,0);
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d411d8);
        if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x68), lVar10 == 0)) goto LAB_0149cb08;
        *(undefined8 *)((long)register0x00000008 + -0x90) = 0x3d5a000;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3d1b598;
        *(long *)((long)register0x00000008 + -0x80) = unaff_x22;
        *(ulong *)((long)register0x00000008 + -0x78) = uVar11;
        *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3d411d8;
        *(undefined8 *)((long)register0x00000008 + -0x68) = param_4;
        *(undefined1 **)((long)register0x00000008 + -0x60) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -0x58) = 0x149ca94;
        if ((bRam0000000003eb4d9b & 1) == 0) {
          func_0x00f78a20(0x3d1fa78,0);
          bRam0000000003eb4d9b = 1;
        }
        plVar12 = *(long **)(lVar10 + 0x148);
        uVar24 = 0x3eb4000;
        if (plVar12 == (long *)0x0) goto code_r0x01514e70;
        uVar14 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
        if (uVar14 == 0) goto code_r0x01514ff8;
        uVar24 = uVar14;
        if ((int)*(ulong *)(uVar14 + 0x18) < 1) goto code_r0x01514e70;
        uVar11 = 0;
        uVar23 = *(ulong *)(uVar14 + 0x18) & 0xffffffff;
        unaff_x22 = uVar14 + 0x20;
        unaff_x23 = 0x3d1fa78;
        break;
      }
    }
    auVar35 = func_0x00f78e5c();
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x80);
    *(long *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x78) = uVar11;
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar27;
    *(undefined8 *)((long)register0x00000008 + -0x68) = param_4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x58) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__GameTypePressed;
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x60);
    param_6 = uVar19;
    if ((bRam0000000003eb4a04 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79018);
      func_0x00f78a20(0x3d79020);
      bRam0000000003eb4a04 = 1;
    }
    unaff_x22 = 0x3d411e0;
    iVar8 = auVar35._8_4_;
    if (iVar8 == 1) {
      puVar22 = (ulong *)0x3d79018;
code_r0x0149cb90:
      puVar33 = &UNK_0149cb9c;
      uVar11 = *puVar22;
code_r0x0151398c:
      *(long *)(puVar5 + -0x30) = unaff_x22;
      *(undefined1 (*) [16])(puVar5 + -0x28) = auVar35;
      *(undefined8 *)(puVar5 + -0x18) = uVar19;
      *(undefined1 **)(puVar5 + -0x10) = puVar6;
      *(undefined **)(puVar5 + -8) = puVar33;
      uVar27 = 0x3eb4000;
      uVar24 = uVar11;
      if ((bRam0000000003eb4db6 & 1) == 0) {
        func_0x00f78a20(0x3d2faf8,0);
        func_0x00f78a20(0x3d2fb00);
        uVar24 = func_0x00f78a20(0x3d25580);
        bRam0000000003eb4db6 = 1;
      }
      if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
        return uVar24;
      }
      lVar10 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
      if (lVar10 != 0) {
        uVar24 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar10,uVar11,uRam0000000003d2faf8);
        if ((int)uVar24 == 0) {
          return uVar24;
        }
        if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
            (lVar10 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar10 != 0)) &&
           (uVar24 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar10,uVar11,uRam0000000003d2fb00), uVar24 != 0)) {
          *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
          *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
          *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
          *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar24,0,0);
          return uVar24;
        }
      }
      plVar12 = (long *)func_0x00f78af4();
      *(undefined8 *)(puVar5 + -0x70) = unaff_d9;
      *(ulong *)(puVar5 + -0x68) = CONCAT44(unaff_00005104,unaff_s8);
      *(long *)(puVar5 + -0x60) = unaff_x22;
      *(undefined8 *)(puVar5 + -0x58) = 0x3eb4000;
      *(undefined8 *)(puVar5 + -0x50) = 0x3d25580;
      *(ulong *)(puVar5 + -0x48) = uVar11;
      *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
      *(undefined **)(puVar5 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
      if ((bRam0000000003eb4d8b & 1) == 0) {
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb4d8b = 1;
      }
      plVar13 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar12,0);
      if ((plVar13 != (long *)0x0) && (*plVar13 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
        uVar18 = func_0x00f78e5c(plVar13);
        *(long **)(puVar5 + -0x90) = plVar13;
        *(long **)(puVar5 + -0x88) = plVar12;
        *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x40;
        *(undefined **)(puVar5 + -0x78) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
        lVar10 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
        uVar19 = *(undefined8 *)(puVar5 + -0x90);
        *(long *)(puVar5 + -0xa0) = unaff_x22;
        *(undefined8 *)(puVar5 + -0x98) = 0x3eb4000;
        *(undefined8 *)(puVar5 + -0x90) = uVar19;
        *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(puVar5 + -0x88);
        *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x80);
        *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x78);
        if (lVar10 == 0) {
          func_0x00f78a24(0x3d23938,0,0);
          uVar17 = func_0x00f78aec();
          uVar18 = func_0x00f78a24(0x3d7b500);
          /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar17,uVar18,0);
        }
        else {
          uVar27 = 0x3ec0000;
          if (pcRam0000000003ec01d0 == (code *)0x0) {
            pcRam0000000003ec01d0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                        );
          }
          uVar11 = (*pcRam0000000003ec01d0)(uVar18);
          if ((uVar11 & 1) != 0) {
            if (pcRam0000000003ec01e0 == (code *)0x0) {
              pcRam0000000003ec01e0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar11 = (*pcRam0000000003ec01e0)(uVar18,lVar10);
            return uVar11;
          }
          func_0x00f78a24(0x3d1fce8);
          uVar17 = func_0x00f78aec();
          uVar19 = func_0x00f78a24(0x3d6af80);
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar17,uVar19,0);
          uVar19 = uVar18;
        }
        uVar18 = func_0x00f78a24(0x3d5a8a8);
        auVar35 = func_0x00f78ac0(uVar17,uVar18);
        *(long *)(puVar5 + -0xd0) = unaff_x22;
        *(undefined8 *)(puVar5 + -200) = uVar27;
        *(undefined8 *)(puVar5 + -0xc0) = uVar19;
        *(undefined8 *)(puVar5 + -0xb8) = uVar17;
        *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0x80;
        *(undefined **)(puVar5 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (*pcRam0000000003ec01e0)(auVar35._0_8_,auVar35._8_8_);
        return uVar11;
      }
      fVar34 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar27 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar34 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                               plVar13,4,0);
      uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar27,uRam0000000003d5e780);
      *(undefined8 *)(puVar5 + -0xa0) = 0x3d5e780;
      *(undefined8 *)(puVar5 + -0x98) = 0x3d5e868;
      *(long **)(puVar5 + -0x90) = plVar13;
      *(long **)(puVar5 + -0x88) = plVar12;
      *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x40;
      *(undefined **)(puVar5 + -0x78) = &UNK_01513b44;
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,plVar12,uRam0000000003d5e868);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((uVar11 != 0) && (*(char *)(uVar11 + 0xe8) != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar8 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar8 != 0) {
          lVar10 = func_0x00f78adc(plVar12,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
          if ((uVar24 & 1) == 0) {
            if (plVar12 == (long *)0x0) goto code_r0x018eef34;
            uVar27 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
          }
          else {
            if (lVar10 == 0) {
code_r0x018eef34:
              auVar35 = func_0x00f78af4();
              uVar24 = auVar35._0_8_;
              *(undefined8 *)(puVar5 + -0xd0) = 0x3d5e780;
              *(long *)(puVar5 + -200) = lVar10;
              *(long **)(puVar5 + -0xc0) = plVar12;
              *(ulong *)(puVar5 + -0xb8) = uVar11;
              *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0x80;
              *(undefined **)(puVar5 + -0xa8) =
                   &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((uVar24 != 0) && (*(char *)(uVar24 + 0xe8) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar24,auVar35._8_8_,cVar2 != '\0',0);
              }
              return uVar24;
            }
            uVar27 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar10,0);
          }
          *(undefined8 *)(uVar11 + 200) = uVar27;
        }
        *(long **)(uVar11 + 0x48) = plVar12;
      }
      return uVar11;
    }
    if (iVar8 == 2) {
      puVar22 = (ulong *)0x3d79020;
      goto code_r0x0149cb90;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(auVar35._0_8_,uRam0000000003d411e0);
    if (lVar10 != 0) {
      uVar11 = *(ulong *)(lVar10 + 0x10);
      if (uVar11 == 0) {
        return 0;
      }
      *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0x88) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)((long)register0x00000008 + -0x70);
      *(undefined8 *)((long)register0x00000008 + -0x68) =
           *(undefined8 *)((long)register0x00000008 + -0x68);
      *(undefined8 *)((long)register0x00000008 + -0x60) =
           *(undefined8 *)((long)register0x00000008 + -0x60);
      *(undefined8 *)((long)register0x00000008 + -0x58) =
           *(undefined8 *)((long)register0x00000008 + -0x58);
      *(ulong *)((long)register0x00000008 + -0xb8) = uVar11;
      *(int *)((long)register0x00000008 + -0xbc) = iVar8;
      lVar10 = *(long *)(uVar11 + 0x68);
      if (lVar10 == 0) {
        puVar6 = (undefined1 *)((long)register0x00000008 + -0xb8);
        lVar31 = 1;
      }
      else {
        lVar31 = *(long *)(lVar10 + 0x18);
        if (lVar31 == 0) {
          return uVar11;
        }
        puVar6 = (undefined1 *)(lVar10 + 0x20);
      }
      lVar10 = 0;
      goto code_r0x015606b4;
    }
    uVar18 = func_0x00f78af4();
    puVar4 = (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x3d411e0;
    *(undefined1 (*) [16])((long)register0x00000008 + -0xa8) = auVar35;
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar19;
    *(undefined1 **)((long)register0x00000008 + -0x90) = puVar6;
    *(undefined **)((long)register0x00000008 + -0x88) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__CreateRoomPressed;
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x90);
    uVar19 = 0x3eb4000;
    uVar27 = 0x3d411e0;
    if ((bRam0000000003eb4a05 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79018);
      bRam0000000003eb4a05 = 1;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar18,uRam0000000003d411e0);
    if (lVar10 != 0) {
      uVar18 = 0x3d79018;
      uVar11 = *(ulong *)(lVar10 + 0x18);
      if (uVar11 == 0) {
        puVar6 = *(undefined1 **)((long)register0x00000008 + -0x90);
        puVar33 = *(undefined **)((long)register0x00000008 + -0x88);
        uVar19 = *(undefined8 *)((long)register0x00000008 + -0x98);
        puVar5 = (undefined1 *)((long)register0x00000008 + -0x80);
        unaff_x22 = *(long *)((long)register0x00000008 + -0xb0);
        auVar35 = *(undefined1 (*) [16])((long)register0x00000008 + -0xa8);
        uVar11 = /*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018;
        goto code_r0x0151398c;
      }
      puVar33 = &UNK_0149cc54;
      goto code_r0x015609bc;
    }
    uVar17 = func_0x00f78af4();
    puVar4 = (undefined1 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3d411e0;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0x3d411e0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -200) = uVar18;
    *(undefined1 **)((long)register0x00000008 + -0xc0) = puVar6;
    *(undefined **)((long)register0x00000008 + -0xb8) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__JoinRoomPressed;
    puVar6 = (undefined1 *)((long)register0x00000008 + -0xc0);
    uVar19 = 0x3eb4000;
    uVar27 = 0x3d411e0;
    if ((bRam0000000003eb4a06 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79020);
      bRam0000000003eb4a06 = 1;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar17,uRam0000000003d411e0);
    if (lVar10 != 0) {
      uVar18 = 0x3d79020;
      uVar11 = *(ulong *)(lVar10 + 0x20);
      if (uVar11 == 0) {
        puVar6 = *(undefined1 **)((long)register0x00000008 + -0xc0);
        puVar33 = *(undefined **)((long)register0x00000008 + -0xb8);
        uVar19 = *(undefined8 *)((long)register0x00000008 + -200);
        puVar5 = (undefined1 *)((long)register0x00000008 + -0xb0);
        unaff_x22 = *(long *)((long)register0x00000008 + -0xe0);
        auVar35 = *(undefined1 (*) [16])((long)register0x00000008 + -0xd8);
        uVar11 = /*STR('event:/UI/Front_End/GeneralButton4')*/ uRam0000000003d79020;
        goto code_r0x0151398c;
      }
      puVar33 = &UNK_0149cce0;
      goto code_r0x015609bc;
    }
    unaff_x19 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0x3d411e0;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0x3d411e0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar17;
    *(undefined1 **)((long)register0x00000008 + -0xf0) = puVar6;
    *(undefined **)((long)register0x00000008 + -0xe8) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__OnPartyInvite;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xf0);
    unaff_x21 = 0x3eb4000;
    unaff_x20 = 0x3d411e8;
    if ((bRam0000000003eb4a07 & 1) == 0) {
      func_0x00f78a20(0x3d3e0d8);
      func_0x00f78a20(0x3d3e130);
      func_0x00f78a20(0x3d3e178);
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d411e8);
      bRam0000000003eb4a07 = 1;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(unaff_x19,uRam0000000003d411e8);
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0xa0) != 0)) {
      uVar11 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar10 + 0xa0),uRam0000000003d3e0d8);
      if ((uVar11 & 1) != 0) {
        return uVar11;
      }
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(unaff_x19,uRam0000000003d411e8);
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0xe0) != 0)) {
        uVar11 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar10 + 0xe0),uRam0000000003d3e130);
        if ((uVar11 & 1) != 0) {
          return uVar11;
        }
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(unaff_x19,uRam0000000003d411e8);
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0x98) != 0)) {
          uVar11 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar10 + 0x98),uRam0000000003d3e178);
          if ((uVar11 & 1) != 0) {
            return uVar11;
          }
          lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(unaff_x19,uRam0000000003d411e0);
          if (lVar10 != 0) goto code_r0x0149c92c;
        }
      }
    }
    unaff_x30 = Atlas_UI_Screens_MultiplayerModeSelectScreen__OnBeforeExit;
    param_4 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  } while( true );
  while( true ) {
    plVar12 = *(long **)(unaff_x22 + uVar11 * 8);
    if ((plVar12 != (long *)0x0) &&
       (lVar31 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar12 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x01514fec;
    /*Atlas.UI.UIAtlasButton$$remove_Selected*/ func_0x01514244(lVar10);
    uVar11 = uVar11 + 1;
    uVar23 = (ulong)*(uint *)(uVar14 + 0x18);
    if ((long)(int)*(uint *)(uVar14 + 0x18) <= (long)uVar11) break;
    if (uVar23 <= uVar11) goto code_r0x01514fe0;
  }
code_r0x01514e70:
  plVar12 = *(long **)(lVar10 + 0x150);
  if (plVar12 == (long *)0x0) {
code_r0x01514ee4:
    plVar12 = *(long **)(lVar10 + 0x158);
    if (plVar12 != (long *)0x0) {
      uVar14 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
      if (uVar14 == 0) goto code_r0x01514ff8;
      uVar24 = uVar14;
      if (0 < (int)*(ulong *)(uVar14 + 0x18)) {
        uVar11 = 0;
        uVar23 = *(ulong *)(uVar14 + 0x18) & 0xffffffff;
        unaff_x22 = uVar14 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar23 <= uVar11) goto code_r0x01514fe0;
          plVar12 = *(long **)(unaff_x22 + uVar11 * 8);
          if ((plVar12 != (long *)0x0) &&
             (lVar31 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar12 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Pressed*/ func_0x015144d4(lVar10);
          uVar11 = uVar11 + 1;
          uVar23 = (ulong)*(uint *)(uVar14 + 0x18);
        } while ((long)uVar11 < (long)(int)*(uint *)(uVar14 + 0x18));
      }
    }
    plVar12 = *(long **)(lVar10 + 0x160);
    if (plVar12 == (long *)0x0) {
      return 0;
    }
    uVar14 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
    if (uVar14 != 0) {
      if ((int)*(ulong *)(uVar14 + 0x18) < 1) {
        return uVar14;
      }
      uVar11 = 0;
      uVar24 = *(ulong *)(uVar14 + 0x18) & 0xffffffff;
      unaff_x22 = uVar14 + 0x20;
      while (uVar11 < uVar24) {
        plVar12 = *(long **)(unaff_x22 + uVar11 * 8);
        if ((plVar12 != (long *)0x0) &&
           (lVar31 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar12 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x01514fec;
        uVar23 = /*Atlas.UI.UIAtlasButton$$remove_SelectedOrPressed*/ func_0x0151461c(lVar10);
        uVar11 = uVar11 + 1;
        uVar24 = (ulong)*(uint *)(uVar14 + 0x18);
        if ((long)(int)*(uint *)(uVar14 + 0x18) <= (long)uVar11) {
          return uVar23;
        }
      }
code_r0x01514fe0:
      uVar27 = func_0x00f78b24();
      func_0x00f78ac0(uVar27,0);
      plVar12 = extraout_x1;
      lVar31 = extraout_x8;
code_r0x01514fec:
      unaff_x23 = 0x3d1fa78;
      func_0x00f78e5c(plVar12,lVar31);
      uVar24 = uVar14;
    }
  }
  else {
    uVar14 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
    if (uVar14 != 0) {
      uVar24 = uVar14;
      if (0 < (int)*(ulong *)(uVar14 + 0x18)) {
        uVar11 = 0;
        uVar23 = *(ulong *)(uVar14 + 0x18) & 0xffffffff;
        unaff_x22 = uVar14 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar23 <= uVar11) goto code_r0x01514fe0;
          plVar12 = *(long **)(unaff_x22 + uVar11 * 8);
          if ((plVar12 != (long *)0x0) &&
             (lVar31 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar12 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Deselected*/ func_0x0151438c(lVar10);
          uVar11 = uVar11 + 1;
          uVar23 = (ulong)*(uint *)(uVar14 + 0x18);
        } while ((long)uVar11 < (long)(int)*(uint *)(uVar14 + 0x18));
      }
      goto code_r0x01514ee4;
    }
  }
code_r0x01514ff8:
  auVar35 = func_0x00f78af4();
  uVar27 = auVar35._8_8_;
  *(long *)((long)register0x00000008 + -0xc0) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0xb8) = uVar11;
  *(ulong *)((long)register0x00000008 + -0xb0) = uVar24;
  *(long *)((long)register0x00000008 + -0xa8) = lVar10;
  *(undefined1 **)((long)register0x00000008 + -0xa0) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined **)((long)register0x00000008 + -0x98) = &Atlas_UI_UIAtlasButtonGroup__Subscribe;
  if ((bRam0000000003eb4da9 & 1) == 0) {
    func_0x00f78a20(0x3d3c5b8);
    func_0x00f78a20(0x3d3c5c0);
    bRam0000000003eb4da9 = 1;
  }
  lVar10 = *(long *)(auVar35._0_8_ + 0x40);
  if (lVar10 != 0) {
    uVar11 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar10,uVar27,uRam0000000003d3c5c0);
    if ((uVar11 & 1) != 0) {
      return uVar11;
    }
    uVar11 = *(ulong *)(auVar35._0_8_ + 0x40);
    if (uVar11 != 0) {
      uVar19 = *(undefined8 *)((long)register0x00000008 + -0xb0);
      uVar24 = *(ulong *)((long)register0x00000008 + -0xa8);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -0xc0);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0xb8);
      *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar19;
      *(ulong *)((long)register0x00000008 + -0xa8) = uVar24;
      *(undefined8 *)((long)register0x00000008 + -0xa0) =
           *(undefined8 *)((long)register0x00000008 + -0xa0);
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0x98);
      lVar10 = *(long *)(uVar11 + 0x10);
      puVar20 = puRam0000000003d3c5b8;
      if (lVar10 == 0) {
code_r0x0242716c:
        uVar27 = uVar19;
        uVar11 = uVar24;
        uVar14 = func_0x00f78af4();
        lVar10 = extraout_x9;
        uVar21 = extraout_w8;
code_r0x02427170:
        *(uint *)(uVar11 + 0x18) = uVar21 + 1;
      }
      else {
        uVar21 = *(uint *)(uVar11 + 0x18);
        uVar14 = uVar11;
        if (uVar21 != *(uint *)(lVar10 + 0x18)) goto code_r0x02427170;
        puVar20 = *(undefined8 **)(*(long *)(puRam0000000003d3c5b8[3] + 0xc0) + 0x60);
        uVar14 = (*(code *)*puVar20)(uVar11,uVar21 + 1);
        lVar10 = *(long *)(uVar11 + 0x10);
        uVar21 = *(uint *)(uVar11 + 0x18);
        *(uint *)(uVar11 + 0x18) = uVar21 + 1;
        uVar24 = uVar11;
        uVar19 = uVar27;
        if (lVar10 == 0) goto code_r0x0242716c;
      }
      if (uVar21 < *(uint *)(lVar10 + 0x18)) {
        *(undefined8 *)(lVar10 + (long)(int)uVar21 * 8 + 0x20) = uVar27;
        *(int *)(uVar11 + 0x1c) = *(int *)(uVar11 + 0x1c) + 1;
        return uVar14;
      }
      uVar19 = func_0x00f78b24();
      auVar35 = func_0x00f78ac0(uVar19,0);
      lVar31 = auVar35._8_8_;
      lVar10 = auVar35._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0x3d5a000;
      *(ulong *)((long)register0x00000008 + -0xe8) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar18;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar17;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar27;
      *(ulong *)((long)register0x00000008 + -200) = uVar11;
      *(undefined1 **)((long)register0x00000008 + -0xc0) =
           (undefined1 *)((long)register0x00000008 + -0xa0);
      *(undefined **)((long)register0x00000008 + -0xb8) =
           &System_Collections_Generic_List_object___System_Collections_IList_Add;
      (*(code *)**(undefined8 **)(*(long *)(puVar20[3] + 0xc0) + 0x48))(lVar31,0x14);
      if (lVar10 != 0) {
        pcVar30 = (code *)**(undefined8 **)(*(long *)(puVar20[3] + 0xc0) + 0x28);
        lVar29 = *(long *)(*(long *)(puVar20[3] + 0xc0) + 0x38);
        if ((*(ushort *)(lVar29 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar29);
        }
        if (lVar31 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = func_0x00f78adc(lVar31,lVar29);
          if (lVar16 == 0) {
            func_0x00f78e5c(lVar31,lVar29);
            goto code_r0x0242734c;
          }
        }
        (*pcVar30)(lVar10,lVar16,*(undefined8 *)(*(long *)(puVar20[3] + 0xc0) + 0x28));
        iVar8 = (*(code *)**(undefined8 **)(*(long *)(puVar20[3] + 0xc0) + 0x68))(lVar10);
        return (ulong)(iVar8 - 1);
      }
      func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
      pcVar30 = (code *)SoftwareBreakpoint(1,0x2427350);
      (*pcVar30)();
    }
  }
  auVar36 = func_0x00f78af4();
  lVar31 = auVar36._8_8_;
  lVar10 = auVar36._0_8_;
  *(long *)((long)register0x00000008 + -0xf0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0x3eb4000;
  *(undefined1 (*) [16])((long)register0x00000008 + -0xe0) = auVar35;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0xa0);
  *(undefined **)((long)register0x00000008 + -200) = &Atlas_UI_UIAtlasButton__OnPointerClick;
  if ((bRam0000000003eb4d9d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d9d = 1;
  }
  uVar11 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(lVar10 + 0x16c),0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (lVar31 != 0) {
    if (*(int *)(lVar31 + 0x134) != 0) {
      return uVar11;
    }
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(lVar10);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar10,lVar31,0);
    uVar27 = *(undefined8 *)(lVar10 + 0x118);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar27,0,0);
    if ((int)uVar11 == 0) {
      return uVar11;
    }
    bVar7 = false;
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0xd0);
    uVar17 = *(undefined8 *)((long)register0x00000008 + -200);
    uVar19 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0xd8);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0xc0);
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0xf0);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0xe8);
    goto Atlas_UI_UIAtlasButton__SelectButton;
  }
  auVar35 = func_0x00f78af4();
  plVar13 = auVar35._8_8_;
  plVar12 = auVar35._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x130) = 0x3d5a000;
  *(ulong *)((long)register0x00000008 + -0x128) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x120) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x118) = 0x3eb4000;
  *(long *)((long)register0x00000008 + -0x110) = lVar10;
  *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x100) =
       (undefined1 *)((long)register0x00000008 + -0xd0);
  *(undefined **)((long)register0x00000008 + -0xf8) = &Atlas_UI_UIAtlasButton__OnSubmit;
  if ((bRam0000000003eb4d9e & 1) == 0) {
    func_0x00f78a20(0x3d21bd8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9e = 1;
  }
  uVar11 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)((long)plVar12 + 0x16c),0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (plVar13 == (long *)0x0) {
    lVar10 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    unaff_x23 = 1;
  }
  else {
    if (*(byte *)(*plVar13 + 300) < *(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300)) {
      unaff_x23 = 1;
    }
    else {
      unaff_x23 = (ulong)(*(long *)(*(long *)(*plVar13 + 200) +
                                    (ulong)*(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300) * 8 + -8) !=
                         /*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8);
    }
    lVar10 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    if (*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) <= *(byte *)(*plVar13 + 300)) {
      unaff_x23 = (ulong)((uint)(*(long *)(*(long *)(*plVar13 + 200) +
                                           (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 + -8) !=
                                /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0) & (uint)unaff_x23);
    }
  }
  if ((int)unaff_x23 == 0) {
code_r0x015152e8:
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(plVar12);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(plVar12,plVar13,0);
    uVar11 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
    if (((int)uVar11 == 0) ||
       (uVar11 = (**(code **)(*plVar12 + 0x2b8))(plVar12,*(undefined8 *)(*plVar12 + 0x2c0)),
       (int)uVar11 == 0)) {
      return uVar11;
    }
    (**(code **)(*plVar12 + 0x2d8))(plVar12,2,0,*(undefined8 *)(*plVar12 + 0x2e0));
    puVar33 = &UNK_01515354;
    plVar15 = plVar12;
  }
  else {
    unaff_x23 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar10,0);
    if (iVar8 == 0) goto code_r0x015152e8;
    if (lVar10 != 0) {
      lVar10 = *(long *)(lVar10 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,plVar12,0);
      if ((uVar11 & 1) != 0) {
        return uVar11;
      }
      goto code_r0x015152e8;
    }
    puVar33 = &Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0;
    plVar15 = (long *)func_0x00f78af4();
  }
  *(long *)((long)register0x00000008 + -0x160) = lVar10;
  *(undefined8 *)((long)register0x00000008 + -0x158) = 1;
  *(long **)((long)register0x00000008 + -0x150) = plVar13;
  *(long **)((long)register0x00000008 + -0x148) = plVar12;
  *(undefined1 **)((long)register0x00000008 + -0x140) =
       (undefined1 *)((long)register0x00000008 + -0x100);
  *(undefined **)((long)register0x00000008 + -0x138) = puVar33;
  if ((bRam0000000003eb4da6 & 1) == 0) {
    func_0x00f78a20(0x3d29448);
    bRam0000000003eb4da6 = 1;
  }
  uVar11 = func_0x00f78aec(/*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d_TypeInfo*/ uRam0000000003d29448);
  /*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d$$.ctor*/ func_0x0156c5e4(uVar11,0,0);
  if (uVar11 != 0) {
    *(long **)(uVar11 + 0x20) = plVar15;
    return uVar11;
  }
  auVar36 = func_0x00f78af4();
  *(long *)((long)register0x00000008 + -400) = lVar10;
  *(undefined8 *)((long)register0x00000008 + -0x188) = 0x3d29448;
  *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
  *(long **)((long)register0x00000008 + -0x178) = plVar15;
  *(undefined1 **)((long)register0x00000008 + -0x170) =
       (undefined1 *)((long)register0x00000008 + -0x140);
  *(undefined **)((long)register0x00000008 + -0x168) = &Atlas_UI_UIAtlasButton__OnSelect;
  if ((bRam0000000003eb4d9f & 1) == 0) {
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9f = 1;
  }
  uVar11 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(auVar36._0_8_ + 0x16c),0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (auVar36._8_8_ == (long *)0x0) {
code_r0x0151546c:
    bVar7 = false;
  }
  else {
    lVar10 = *auVar36._8_8_;
    if (*(byte *)(lVar10 + 300) < *(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300)) goto code_r0x0151546c;
    bVar7 = *(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 +
                     -8) == /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0;
  }
  iVar8 = /*Core.Input.InputManager$$get_IsCurrentSelectionFromUser*/ func_0x0164ad7c(0);
  if ((iVar8 != 0) && (!bVar7)) {
    /*Atlas.UI.UIAtlasButton$$PlayButtonSelectSound*/ func_0x01514cec(auVar36._0_8_);
  }
  uVar27 = *(undefined8 *)((long)register0x00000008 + -0x170);
  uVar17 = *(undefined8 *)((long)register0x00000008 + -0x168);
  uVar19 = *(undefined8 *)((long)register0x00000008 + -0x180);
  uVar26 = *(undefined8 *)((long)register0x00000008 + -0x178);
  puVar6 = (undefined1 *)((long)register0x00000008 + -0x160);
  uVar18 = *(undefined8 *)((long)register0x00000008 + -400);
  uVar28 = *(undefined8 *)((long)register0x00000008 + -0x188);
Atlas_UI_UIAtlasButton__SelectButton:
  uVar11 = auVar36._0_8_;
  *(undefined8 *)(puVar6 + -0x30) = uVar18;
  *(undefined8 *)(puVar6 + -0x28) = uVar28;
  *(undefined8 *)(puVar6 + -0x20) = uVar19;
  *(undefined8 *)(puVar6 + -0x18) = uVar26;
  *(undefined8 *)(puVar6 + -0x10) = uVar27;
  *(undefined8 *)(puVar6 + -8) = uVar17;
  puVar32 = puVar6 + -0x10;
  uVar27 = 0;
  if ((*(char *)(uVar11 + 0x140) != '\0') && (bVar7)) {
    return uVar11;
  }
  /*UnityEngine.UI.Selectable$$OnSelect*/ func_0x032e4efc(uVar11,auVar36._8_8_,0);
  if (*(long *)(uVar11 + 0x118) != 0) {
    /*Atlas.UI.UIAtlasButtonGroup$$OnButtonSelected*/ func_0x01514894(*(long *)(uVar11 + 0x118),uVar11,auVar36._8_8_);
  }
  uVar24 = *(ulong *)(uVar11 + 0x148);
  if (uVar24 == 0) {
    uVar24 = *(ulong *)(uVar11 + 0x160);
    if (uVar24 == 0) {
      return 0;
    }
    puVar32 = *(undefined1 **)(puVar6 + -0x10);
    puVar33 = *(undefined **)(puVar6 + -8);
    uVar27 = *(undefined8 *)(puVar6 + -0x20);
    uVar18 = *(undefined8 *)(puVar6 + -0x30);
    auVar36._8_8_ = *(undefined8 *)(puVar6 + -0x28);
    auVar36._0_8_ = *(undefined8 *)(puVar6 + -0x18);
  }
  else {
    puVar33 = &UNK_01514868;
    puVar6 = puVar6 + -0x30;
  }
  uVar19 = 0;
  *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar6 + -0x48) = 0x3d2a000;
  *(undefined8 *)(puVar6 + -0x40) = 0x3d5a000;
  *(ulong *)(puVar6 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar6 + -0x30) = uVar18;
  *(long *)(puVar6 + -0x28) = auVar36._8_8_;
  *(undefined8 *)(puVar6 + -0x20) = uVar27;
  *(long *)(puVar6 + -0x18) = auVar36._0_8_;
  *(undefined1 **)(puVar6 + -0x10) = puVar32;
  *(undefined **)(puVar6 + -8) = puVar33;
  *(ulong *)(puVar6 + -0x58) = uVar24;
  lVar10 = *(long *)(uVar24 + 0x68);
  if (lVar10 == 0) {
    puVar6 = puVar6 + -0x58;
    lVar31 = 1;
  }
  else {
    lVar31 = *(long *)(lVar10 + 0x18);
    if (lVar31 == 0) {
      return uVar24;
    }
    puVar6 = (undefined1 *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar29 = *(long *)(puVar6 + lVar10 * 8);
    pcVar30 = *(code **)(lVar29 + 0x10);
    plVar12 = *(long **)(lVar29 + 0x20);
    lVar29 = *(long *)(lVar29 + 0x28);
    if (*(short *)(lVar29 + 0x48) == -1) {
      func_0x00f78ad8(lVar29,uVar19);
    }
    iVar8 = func_0x00f78a4c(lVar29);
    if (iVar8 == 0) {
      if ((((plVar12 == (long *)0x0) || (*(short *)(lVar29 + 0x48) == -1)) ||
          ((*(byte *)(*plVar12 + 0x115) & 1) != 0)) || (*(long *)(uVar24 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar8 = func_0x00f78a44(lVar29);
      iVar9 = func_0x00f78ec0(lVar29);
      if (iVar8 == 0) {
        uVar3 = *(ushort *)(lVar29 + 0x48);
        if (iVar9 == 0) {
          lVar29 = *plVar12 + (ulong)uVar3 * 0x10;
          auVar35 = (**(code **)(lVar29 + 0x138))(plVar12,*(undefined8 *)(lVar29 + 0x140));
          goto code_r0x02924da4;
        }
        lVar29 = func_0x00f78a48(lVar29);
        lVar16 = *plVar12;
        uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar11 != 0) {
          piVar25 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == lVar29) {
              puVar20 = (undefined8 *)(lVar16 + (long)(int)(*piVar25 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar25 = piVar25 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar20 = (undefined8 *)func_0x00fac1f0(plVar12,lVar29,(ulong)uVar3);
code_r0x02924e68:
        pcVar30 = (code *)*puVar20;
        puVar20 = (undefined8 *)puVar20[1];
      }
      else {
        if (iVar9 == 0) {
          uVar27 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar29 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar16 = *plVar12;
          uVar11 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar11 != 0) {
            piVar25 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)(lVar29 + 0x18)) {
                lVar16 = lVar16 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar29 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar25 = piVar25 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar16 = func_0x00fac1f0(plVar12);
code_r0x02924e40:
          uVar27 = *(undefined8 *)(lVar16 + 8);
        }
        puVar20 = (undefined8 *)func_0x00f78acc(uVar27,lVar29);
        pcVar30 = (code *)*puVar20;
      }
      auVar35 = (*pcVar30)(plVar12,puVar20);
    }
    else if (*(char *)(lVar29 + 0x4a) == '\0') {
      auVar35 = (*pcVar30)(lVar29);
    }
    else {
code_r0x02924d98:
      auVar35 = (*pcVar30)(plVar12,lVar29);
    }
code_r0x02924da4:
    uVar19 = auVar35._8_8_;
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar31) {
      return auVar35._0_8_;
    }
  } while( true );
code_r0x015606b4:
  lVar29 = *(long *)(puVar6 + lVar10 * 8);
  pcVar30 = *(code **)(lVar29 + 0x10);
  plVar12 = *(long **)(lVar29 + 0x20);
  lVar29 = *(long *)(lVar29 + 0x28);
  if (*(short *)(lVar29 + 0x48) == -1) {
    func_0x00f78ad8(lVar29);
  }
  iVar8 = func_0x00f78a4c(lVar29);
  if (iVar8 == 0) {
    if (plVar12 == (long *)0x0) {
      uVar24 = (*pcVar30)((undefined1 *)((long)register0x00000008 + -0xcc),uVar19,lVar29);
    }
    else {
      if (((*(short *)(lVar29 + 0x48) == -1) || ((*(byte *)(*plVar12 + 0x115) & 1) != 0)) ||
         (*(long *)(uVar11 + 0x18) == 0)) goto code_r0x01560784;
      iVar8 = func_0x00f78a44(lVar29);
      iVar9 = func_0x00f78ec0(lVar29);
      if (iVar8 == 0) {
        uVar3 = *(ushort *)(lVar29 + 0x48);
        if (iVar9 == 0) {
          lVar29 = *plVar12 + (ulong)uVar3 * 0x10;
          uVar24 = (**(code **)(lVar29 + 0x138))
                             (plVar12,*(undefined4 *)((long)register0x00000008 + -0xbc),uVar19,
                              *(undefined8 *)(lVar29 + 0x140));
          goto code_r0x015607ac;
        }
        lVar29 = func_0x00f78a48(lVar29);
        uVar1 = *(undefined4 *)((long)register0x00000008 + -0xbc);
        lVar16 = *plVar12;
        uVar24 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == lVar29) {
              puVar20 = (undefined8 *)(lVar16 + (long)(int)(*piVar25 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x01560884;
            }
            piVar25 = piVar25 + 4;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
        puVar20 = (undefined8 *)func_0x00fac1f0(plVar12,lVar29,(ulong)uVar3);
code_r0x01560884:
        pcVar30 = (code *)*puVar20;
        puVar20 = (undefined8 *)puVar20[1];
      }
      else {
        uVar1 = *(undefined4 *)((long)register0x00000008 + -0xbc);
        if (iVar9 == 0) {
          uVar27 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar29 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar16 = *plVar12;
          uVar24 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar24 != 0) {
            piVar25 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)(lVar29 + 0x18)) {
                lVar16 = lVar16 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar29 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01560854;
              }
              piVar25 = piVar25 + 4;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          lVar16 = func_0x00fac1f0(plVar12);
code_r0x01560854:
          uVar27 = *(undefined8 *)(lVar16 + 8);
        }
        puVar20 = (undefined8 *)func_0x00f78acc(uVar27,lVar29);
        pcVar30 = (code *)*puVar20;
      }
      uVar24 = (*pcVar30)(plVar12,uVar1,uVar19,puVar20);
    }
  }
  else if (*(char *)(lVar29 + 0x4a) == '\x02') {
    uVar24 = (*pcVar30)(*(undefined4 *)((long)register0x00000008 + -0xbc),uVar19,lVar29);
  }
  else {
code_r0x01560784:
    uVar24 = (*pcVar30)(plVar12,*(undefined4 *)((long)register0x00000008 + -0xbc),uVar19,lVar29);
  }
code_r0x015607ac:
  lVar10 = lVar10 + 1;
  if (lVar10 == lVar31) {
    return uVar24;
  }
  goto code_r0x015606b4;
code_r0x0149c92c:
  uVar11 = *(ulong *)(lVar10 + 0x20);
  if (uVar11 == 0) {
    return 0;
  }
  puVar6 = *(undefined1 **)((long)register0x00000008 + -0xf0);
  puVar33 = *(undefined **)((long)register0x00000008 + -0xe8);
  uVar19 = *(undefined8 *)((long)register0x00000008 + -0x100);
  uVar18 = *(undefined8 *)((long)register0x00000008 + -0xf8);
  puVar4 = (undefined1 *)((long)register0x00000008 + -0xe0);
  unaff_x22 = *(long *)((long)register0x00000008 + -0x110);
  uVar27 = *(undefined8 *)((long)register0x00000008 + -0x108);
code_r0x015609bc:
  uVar17 = 0;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(ulong *)(puVar4 + -0x38) = unaff_x23;
  *(long *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = uVar27;
  *(undefined8 *)(puVar4 + -0x20) = uVar19;
  *(undefined8 *)(puVar4 + -0x18) = uVar18;
  *(undefined1 **)(puVar4 + -0x10) = puVar6;
  *(undefined **)(puVar4 + -8) = puVar33;
  *(ulong *)(puVar4 + -0x58) = uVar11;
  lVar10 = *(long *)(uVar11 + 0x68);
  if (lVar10 == 0) {
    puVar6 = puVar4 + -0x58;
    lVar31 = 1;
  }
  else {
    lVar31 = *(long *)(lVar10 + 0x18);
    if (lVar31 == 0) {
      return uVar11;
    }
    puVar6 = (undefined1 *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar29 = *(long *)(puVar6 + lVar10 * 8);
    pcVar30 = *(code **)(lVar29 + 0x10);
    plVar12 = *(long **)(lVar29 + 0x20);
    lVar29 = *(long *)(lVar29 + 0x28);
    if (*(short *)(lVar29 + 0x48) == -1) {
      func_0x00f78ad8(lVar29,uVar17);
    }
    iVar8 = func_0x00f78a4c(lVar29);
    if (iVar8 == 0) {
      if ((((plVar12 == (long *)0x0) || (*(short *)(lVar29 + 0x48) == -1)) ||
          ((*(byte *)(*plVar12 + 0x115) & 1) != 0)) || (*(long *)(uVar11 + 0x18) == 0))
      goto code_r0x01560ac4;
      iVar8 = func_0x00f78a44(lVar29);
      iVar9 = func_0x00f78ec0(lVar29);
      if (iVar8 == 0) {
        uVar3 = *(ushort *)(lVar29 + 0x48);
        if (iVar9 == 0) {
          lVar29 = *plVar12 + (ulong)uVar3 * 0x10;
          auVar35 = (**(code **)(lVar29 + 0x138))(plVar12,*(undefined8 *)(lVar29 + 0x140));
          goto code_r0x01560ad0;
        }
        lVar29 = func_0x00f78a48(lVar29);
        lVar16 = *plVar12;
        uVar24 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == lVar29) {
              puVar20 = (undefined8 *)(lVar16 + (long)(int)(*piVar25 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x01560b94;
            }
            piVar25 = piVar25 + 4;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
        puVar20 = (undefined8 *)func_0x00fac1f0(plVar12,lVar29,(ulong)uVar3);
code_r0x01560b94:
        pcVar30 = (code *)*puVar20;
        puVar20 = (undefined8 *)puVar20[1];
      }
      else {
        if (iVar9 == 0) {
          uVar27 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar29 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar16 = *plVar12;
          uVar24 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar24 != 0) {
            piVar25 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)(lVar29 + 0x18)) {
                lVar16 = lVar16 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar29 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01560b6c;
              }
              piVar25 = piVar25 + 4;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          lVar16 = func_0x00fac1f0(plVar12);
code_r0x01560b6c:
          uVar27 = *(undefined8 *)(lVar16 + 8);
        }
        puVar20 = (undefined8 *)func_0x00f78acc(uVar27,lVar29);
        pcVar30 = (code *)*puVar20;
      }
      auVar35 = (*pcVar30)(plVar12,puVar20);
    }
    else if (*(char *)(lVar29 + 0x4a) == '\0') {
      auVar35 = (*pcVar30)(lVar29);
    }
    else {
code_r0x01560ac4:
      auVar35 = (*pcVar30)(plVar12,lVar29);
    }
code_r0x01560ad0:
    uVar17 = auVar35._8_8_;
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar31) {
      return auVar35._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x149cb10 | Atlas.UI.Screens.MultiplayerModeSelectScreen.GameTypePressed
// ============================================================

/* WARNING: Possible PIC construction at 0x0149cb98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149ccdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149ca90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01514864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01515350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0149cad4) */
/* WARNING: Removing unreachable block (ram,0x0149cae4) */
/* WARNING: Removing unreachable block (ram,0x0149caec) */
/* WARNING: Removing unreachable block (ram,0x0149cab4) */
/* WARNING: Removing unreachable block (ram,0x0149cac4) */
/* WARNING: Removing unreachable block (ram,0x0149cacc) */
/* WARNING: Removing unreachable block (ram,0x0149ca94) */
/* WARNING: Removing unreachable block (ram,0x0149caa4) */
/* WARNING: Removing unreachable block (ram,0x0149caac) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01515354) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_MultiplayerModeSelectScreen__GameTypePressed
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  int iVar9;
  long *plVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long *extraout_x1;
  uint extraout_w8;
  uint uVar20;
  ulong *puVar21;
  ulong uVar22;
  long extraout_x8;
  long lVar23;
  long lVar24;
  long extraout_x9;
  int *piVar25;
  undefined8 unaff_x19;
  undefined8 uVar26;
  undefined8 unaff_x20;
  undefined8 uVar27;
  ulong unaff_x21;
  undefined8 uVar28;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  code *pcVar29;
  undefined8 unaff_x25;
  long lVar30;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar31;
  code *unaff_x30;
  undefined *puVar32;
  float fVar33;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined8 unaff_d9;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  auVar35._8_8_ = param_5;
  auVar35._0_8_ = param_4;
code_r0x0149cb10:
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x30);
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar6 = (undefined1 *)((long)register0x00000008 + -0x10);
  uVar17 = param_6;
  if ((bRam0000000003eb4a04 & 1) == 0) {
    func_0x00f78a20(0x3d411e0);
    func_0x00f78a20(0x3d79018);
    func_0x00f78a20(0x3d79020);
    bRam0000000003eb4a04 = 1;
  }
  unaff_x22 = 0x3d411e0;
  iVar8 = auVar35._8_4_;
  if (iVar8 == 1) {
    puVar21 = (ulong *)0x3d79018;
LAB_0149cb90:
    puVar32 = &LAB_0149cb9c;
    uVar11 = *puVar21;
code_r0x0151398c:
    *(long *)(puVar5 + -0x30) = unaff_x22;
    *(undefined1 (*) [16])(puVar5 + -0x28) = auVar35;
    *(undefined8 *)(puVar5 + -0x18) = param_6;
    *(undefined1 **)(puVar5 + -0x10) = puVar6;
    *(undefined **)(puVar5 + -8) = puVar32;
    uVar17 = 0x3eb4000;
    uVar16 = uVar11;
    if ((bRam0000000003eb4db6 & 1) == 0) {
      func_0x00f78a20(0x3d2faf8,0);
      func_0x00f78a20(0x3d2fb00);
      uVar16 = func_0x00f78a20(0x3d25580);
      bRam0000000003eb4db6 = 1;
    }
    if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
      return uVar16;
    }
    lVar10 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
    if (lVar10 != 0) {
      uVar16 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar10,uVar11,uRam0000000003d2faf8);
      if ((int)uVar16 == 0) {
        return uVar16;
      }
      if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
          (lVar10 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar10 != 0)) &&
         (uVar16 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar10,uVar11,uRam0000000003d2fb00), uVar16 != 0)) {
        *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
        *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
        *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
        *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
        /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar16,0,0);
        return uVar16;
      }
    }
    plVar13 = (long *)func_0x00f78af4();
    *(undefined8 *)(puVar5 + -0x70) = unaff_d9;
    *(ulong *)(puVar5 + -0x68) = CONCAT44(unaff_00005104,unaff_s8);
    *(long *)(puVar5 + -0x60) = unaff_x22;
    *(undefined8 *)(puVar5 + -0x58) = 0x3eb4000;
    *(undefined8 *)(puVar5 + -0x50) = 0x3d25580;
    *(ulong *)(puVar5 + -0x48) = uVar11;
    *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
    *(undefined **)(puVar5 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
    if ((bRam0000000003eb4d8b & 1) == 0) {
      func_0x00f78a20(0x3d24188);
      func_0x00f78a20(0x3d5e780);
      func_0x00f78a20(0x3d5e868);
      bRam0000000003eb4d8b = 1;
    }
    plVar14 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar13,0);
    if ((plVar14 != (long *)0x0) && (*plVar14 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
      uVar27 = func_0x00f78e5c(plVar14);
      *(long **)(puVar5 + -0x90) = plVar14;
      *(long **)(puVar5 + -0x88) = plVar13;
      *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x40;
      *(undefined **)(puVar5 + -0x78) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
      lVar10 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
      uVar19 = *(undefined8 *)(puVar5 + -0x90);
      *(long *)(puVar5 + -0xa0) = unaff_x22;
      *(undefined8 *)(puVar5 + -0x98) = 0x3eb4000;
      *(undefined8 *)(puVar5 + -0x90) = uVar19;
      *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(puVar5 + -0x88);
      *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x80);
      *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x78);
      if (lVar10 == 0) {
        func_0x00f78a24(0x3d23938,0,0);
        uVar12 = func_0x00f78aec();
        uVar27 = func_0x00f78a24(0x3d7b500);
        /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar12,uVar27,0);
      }
      else {
        uVar17 = 0x3ec0000;
        if (pcRam0000000003ec01d0 == (code *)0x0) {
          pcRam0000000003ec01d0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                      );
        }
        uVar11 = (*pcRam0000000003ec01d0)(uVar27);
        if ((uVar11 & 1) != 0) {
          if (pcRam0000000003ec01e0 == (code *)0x0) {
            pcRam0000000003ec01e0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar11 = (*pcRam0000000003ec01e0)(uVar27,lVar10);
          return uVar11;
        }
        func_0x00f78a24(0x3d1fce8);
        uVar12 = func_0x00f78aec();
        uVar19 = func_0x00f78a24(0x3d6af80);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar12,uVar19,0);
        uVar19 = uVar27;
      }
      uVar27 = func_0x00f78a24(0x3d5a8a8);
      auVar35 = func_0x00f78ac0(uVar12,uVar27);
      *(long *)(puVar5 + -0xd0) = unaff_x22;
      *(undefined8 *)(puVar5 + -200) = uVar17;
      *(undefined8 *)(puVar5 + -0xc0) = uVar19;
      *(undefined8 *)(puVar5 + -0xb8) = uVar12;
      *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0x80;
      *(undefined **)(puVar5 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (*pcRam0000000003ec01e0)(auVar35._0_8_,auVar35._8_8_);
      return uVar11;
    }
    fVar33 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    uVar17 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar33 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                             plVar14,4,0);
    uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar17,uRam0000000003d5e780);
    *(undefined8 *)(puVar5 + -0xa0) = 0x3d5e780;
    *(undefined8 *)(puVar5 + -0x98) = 0x3d5e868;
    *(long **)(puVar5 + -0x90) = plVar14;
    *(long **)(puVar5 + -0x88) = plVar13;
    *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x40;
    *(undefined **)(puVar5 + -0x78) = &UNK_01513b44;
    if ((bRam0000000003eb66c1 & 1) == 0) {
      func_0x00f78a20(0x3d208f0,plVar13,uRam0000000003d5e868);
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb66c1 = 1;
    }
    if ((uVar11 != 0) && (*(char *)(uVar11 + 0xe8) != '\0')) {
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar8 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
      if (iVar8 != 0) {
        lVar10 = func_0x00f78adc(plVar13,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar16 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
        if ((uVar16 & 1) == 0) {
          if (plVar13 == (long *)0x0) goto code_r0x018eef34;
          uVar17 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
        }
        else {
          if (lVar10 == 0) {
code_r0x018eef34:
            auVar35 = func_0x00f78af4();
            uVar16 = auVar35._0_8_;
            *(undefined8 *)(puVar5 + -0xd0) = 0x3d5e780;
            *(long *)(puVar5 + -200) = lVar10;
            *(long **)(puVar5 + -0xc0) = plVar13;
            *(ulong *)(puVar5 + -0xb8) = uVar11;
            *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0x80;
            *(undefined **)(puVar5 + -0xa8) =
                 &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
            if ((bRam0000000003eb66c2 & 1) == 0) {
              func_0x00f78a20(0x3d20bc0);
              func_0x00f78a20(0x3d25440);
              bRam0000000003eb66c2 = 1;
            }
            if ((uVar16 != 0) && (*(char *)(uVar16 + 0xe8) != '\0')) {
              if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
              if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar16,auVar35._8_8_,cVar2 != '\0',0);
            }
            return uVar16;
          }
          uVar17 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar10,0);
        }
        *(undefined8 *)(uVar11 + 200) = uVar17;
      }
      *(long **)(uVar11 + 0x48) = plVar13;
    }
    return uVar11;
  }
  if (iVar8 == 2) {
    puVar21 = (ulong *)0x3d79020;
    goto LAB_0149cb90;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(auVar35._0_8_,uRam0000000003d411e0);
  if (lVar10 != 0) {
    uVar11 = *(ulong *)(lVar10 + 0x10);
    if (uVar11 == 0) {
      return 0;
    }
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
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
    *(ulong *)((long)register0x00000008 + -0x68) = uVar11;
    *(int *)((long)register0x00000008 + -0x6c) = iVar8;
    lVar10 = *(long *)(uVar11 + 0x68);
    if (lVar10 == 0) {
      puVar6 = (undefined1 *)((long)register0x00000008 + -0x68);
      lVar30 = 1;
    }
    else {
      lVar30 = *(long *)(lVar10 + 0x18);
      if (lVar30 == 0) {
        return uVar11;
      }
      puVar6 = (undefined1 *)(lVar10 + 0x20);
    }
    lVar10 = 0;
    goto code_r0x015606b4;
  }
  uVar12 = func_0x00f78af4();
  puVar4 = (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3d411e0;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x58) = auVar35;
  *(undefined8 *)((long)register0x00000008 + -0x48) = param_6;
  *(undefined1 **)((long)register0x00000008 + -0x40) = puVar6;
  *(undefined **)((long)register0x00000008 + -0x38) =
       &Atlas_UI_Screens_MultiplayerModeSelectScreen__CreateRoomPressed;
  puVar6 = (undefined1 *)((long)register0x00000008 + -0x40);
  uVar27 = 0x3eb4000;
  uVar19 = 0x3d411e0;
  param_6 = uVar17;
  if ((bRam0000000003eb4a05 & 1) == 0) {
    func_0x00f78a20(0x3d411e0);
    func_0x00f78a20(0x3d79018);
    bRam0000000003eb4a05 = 1;
    param_6 = uVar17;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar12,uRam0000000003d411e0);
  if (lVar10 != 0) {
    uVar17 = 0x3d79018;
    uVar11 = *(ulong *)(lVar10 + 0x18);
    if (uVar11 != 0) {
      puVar32 = &UNK_0149cc54;
      goto code_r0x015609bc;
    }
    puVar6 = *(undefined1 **)((long)register0x00000008 + -0x40);
    puVar32 = *(undefined **)((long)register0x00000008 + -0x38);
    param_6 = *(undefined8 *)((long)register0x00000008 + -0x48);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x30);
    unaff_x22 = *(long *)((long)register0x00000008 + -0x60);
    auVar35 = *(undefined1 (*) [16])((long)register0x00000008 + -0x58);
    uVar11 = /*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018;
    goto code_r0x0151398c;
  }
  uVar17 = func_0x00f78af4();
  puVar4 = (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0x3d411e0;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3d411e0;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x78) = uVar12;
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar6;
  *(undefined **)((long)register0x00000008 + -0x68) =
       &Atlas_UI_Screens_MultiplayerModeSelectScreen__JoinRoomPressed;
  puVar6 = (undefined1 *)((long)register0x00000008 + -0x70);
  uVar27 = 0x3eb4000;
  uVar19 = 0x3d411e0;
  if ((bRam0000000003eb4a06 & 1) == 0) {
    func_0x00f78a20(0x3d411e0);
    func_0x00f78a20(0x3d79020);
    bRam0000000003eb4a06 = 1;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar17,uRam0000000003d411e0);
  if (lVar10 != 0) {
    uVar17 = 0x3d79020;
    uVar11 = *(ulong *)(lVar10 + 0x20);
    if (uVar11 == 0) {
      puVar6 = *(undefined1 **)((long)register0x00000008 + -0x70);
      puVar32 = *(undefined **)((long)register0x00000008 + -0x68);
      param_6 = *(undefined8 *)((long)register0x00000008 + -0x78);
      puVar5 = (undefined1 *)((long)register0x00000008 + -0x60);
      unaff_x22 = *(long *)((long)register0x00000008 + -0x90);
      auVar35 = *(undefined1 (*) [16])((long)register0x00000008 + -0x88);
      uVar11 = /*STR('event:/UI/Front_End/GeneralButton4')*/ uRam0000000003d79020;
      goto code_r0x0151398c;
    }
    puVar32 = &UNK_0149cce0;
code_r0x015609bc:
    uVar12 = 0;
    *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
    *(ulong *)(puVar4 + -0x38) = unaff_x23;
    *(long *)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = uVar19;
    *(undefined8 *)(puVar4 + -0x20) = uVar27;
    *(undefined8 *)(puVar4 + -0x18) = uVar17;
    *(undefined1 **)(puVar4 + -0x10) = puVar6;
    *(undefined **)(puVar4 + -8) = puVar32;
    *(ulong *)(puVar4 + -0x58) = uVar11;
    lVar10 = *(long *)(uVar11 + 0x68);
    if (lVar10 == 0) {
      puVar6 = puVar4 + -0x58;
      lVar30 = 1;
    }
    else {
      lVar30 = *(long *)(lVar10 + 0x18);
      if (lVar30 == 0) {
        return uVar11;
      }
      puVar6 = (undefined1 *)(lVar10 + 0x20);
    }
    lVar10 = 0;
    goto code_r0x01560a04;
  }
  uVar19 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3d411e0;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3d411e0;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar17;
  *(undefined1 **)((long)register0x00000008 + -0xa0) = puVar6;
  *(undefined **)((long)register0x00000008 + -0x98) =
       &Atlas_UI_Screens_MultiplayerModeSelectScreen__OnPartyInvite;
  if ((bRam0000000003eb4a07 & 1) == 0) {
    func_0x00f78a20(0x3d3e0d8);
    func_0x00f78a20(0x3d3e130);
    func_0x00f78a20(0x3d3e178);
    func_0x00f78a20(0x3d411e0);
    func_0x00f78a20(0x3d411e8);
    bRam0000000003eb4a07 = 1;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar19,uRam0000000003d411e8);
  if ((lVar10 != 0) && (*(long *)(lVar10 + 0xa0) != 0)) {
    uVar11 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar10 + 0xa0),uRam0000000003d3e0d8);
    if ((uVar11 & 1) != 0) {
      return uVar11;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar19,uRam0000000003d411e8);
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0xe0) != 0)) {
      uVar11 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar10 + 0xe0),uRam0000000003d3e130);
      if ((uVar11 & 1) != 0) {
        return uVar11;
      }
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar19,uRam0000000003d411e8);
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x98) != 0)) {
        uVar11 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar10 + 0x98),uRam0000000003d3e178);
        if ((uVar11 & 1) != 0) {
          return uVar11;
        }
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar19,uRam0000000003d411e0);
        if (lVar10 != 0) {
          uVar11 = *(ulong *)(lVar10 + 0x20);
          if (uVar11 == 0) {
            return 0;
          }
          puVar6 = *(undefined1 **)((long)register0x00000008 + -0xa0);
          puVar32 = *(undefined **)((long)register0x00000008 + -0x98);
          uVar27 = *(undefined8 *)((long)register0x00000008 + -0xb0);
          uVar17 = *(undefined8 *)((long)register0x00000008 + -0xa8);
          puVar4 = (undefined1 *)((long)register0x00000008 + -0x90);
          unaff_x22 = *(long *)((long)register0x00000008 + -0xc0);
          uVar19 = *(undefined8 *)((long)register0x00000008 + -0xb8);
          goto code_r0x015609bc;
        }
      }
    }
  }
  unaff_x19 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x108) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0xf8) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0xf0) = 0x3d411e0;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3d411e8;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar19;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0xa0);
  *(code **)((long)register0x00000008 + -200) =
       Atlas_UI_Screens_MultiplayerModeSelectScreen__OnBeforeExit;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xd0);
  unaff_x20 = 0x3eb4000;
  unaff_x21 = 0x3d411e8;
  if ((bRam0000000003eb4a03 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d2c840);
    func_0x00f78a20(0x3d5a9e8);
    func_0x00f78a20(0x3d411d8);
    func_0x00f78a20(0x3d411e8);
    bRam0000000003eb4a03 = 1;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(unaff_x19,uRam0000000003d411e8);
  if ((lVar10 == 0) || (unaff_x22 = *(long *)(lVar10 + 0x28), unaff_x22 == 0)) {
LAB_0149cb08:
    func_0x00f78af4();
LAB_0149cb0c:
    unaff_x30 = Atlas_UI_Screens_MultiplayerModeSelectScreen__GameTypePressed;
    auVar35 = func_0x00f78e5c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
    goto code_r0x0149cb10;
  }
  unaff_x23 = 0x3d1b598;
  unaff_x24 = 0x3d5a000;
  unaff_x25 = 0x3d2a000;
  unaff_x20 = *(undefined8 *)(unaff_x22 + 0x48);
  unaff_x21 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,unaff_x19,uRam0000000003d5a9e8,uRam0000000003d2a320);
  param_6 = 0;
  plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x20,unaff_x21);
  if ((plVar13 != (long *)0x0) && (*plVar13 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) goto LAB_0149cb0c;
  unaff_x20 = 0x3d411d8;
  *(long **)(unaff_x22 + 0x48) = plVar13;
  param_6 = uRam0000000003d2c840;
  Atlas_UI_Screens_AtlasScreen_ModeSelectScreenBehaviour__ModeSelectScreen_TransitionData___SetScreenHandlePartyInvite
            (unaff_x19,0);
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(unaff_x19,uRam0000000003d411d8);
  if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x68), lVar10 == 0)) goto LAB_0149cb08;
  *(undefined8 *)((long)register0x00000008 + -0x150) = 0x3d5a000;
  *(undefined8 *)((long)register0x00000008 + -0x148) = 0x3d1b598;
  *(long *)((long)register0x00000008 + -0x140) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x138) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x130) = 0x3d411d8;
  *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x120) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -0x118) = 0x149ca94;
  if ((bRam0000000003eb4d9b & 1) == 0) {
    func_0x00f78a20(0x3d1fa78,0);
    bRam0000000003eb4d9b = 1;
  }
  plVar13 = *(long **)(lVar10 + 0x148);
  uVar11 = 0x3eb4000;
  if (plVar13 == (long *)0x0) {
code_r0x01514e70:
    plVar13 = *(long **)(lVar10 + 0x150);
    if (plVar13 != (long *)0x0) {
      uVar16 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
      if (uVar16 == 0) goto code_r0x01514ff8;
      uVar11 = uVar16;
      if (0 < (int)*(ulong *)(uVar16 + 0x18)) {
        unaff_x21 = 0;
        uVar22 = *(ulong *)(uVar16 + 0x18) & 0xffffffff;
        unaff_x22 = uVar16 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar22 <= unaff_x21) goto code_r0x01514fe0;
          plVar13 = *(long **)(unaff_x22 + unaff_x21 * 8);
          if ((plVar13 != (long *)0x0) &&
             (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar13 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Deselected*/ func_0x0151438c(lVar10);
          unaff_x21 = unaff_x21 + 1;
          uVar22 = (ulong)*(uint *)(uVar16 + 0x18);
        } while ((long)unaff_x21 < (long)(int)*(uint *)(uVar16 + 0x18));
      }
    }
    plVar13 = *(long **)(lVar10 + 0x158);
    if (plVar13 != (long *)0x0) {
      uVar16 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
      if (uVar16 == 0) goto code_r0x01514ff8;
      uVar11 = uVar16;
      if (0 < (int)*(ulong *)(uVar16 + 0x18)) {
        unaff_x21 = 0;
        uVar22 = *(ulong *)(uVar16 + 0x18) & 0xffffffff;
        unaff_x22 = uVar16 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar22 <= unaff_x21) goto code_r0x01514fe0;
          plVar13 = *(long **)(unaff_x22 + unaff_x21 * 8);
          if ((plVar13 != (long *)0x0) &&
             (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar13 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Pressed*/ func_0x015144d4(lVar10);
          unaff_x21 = unaff_x21 + 1;
          uVar22 = (ulong)*(uint *)(uVar16 + 0x18);
        } while ((long)unaff_x21 < (long)(int)*(uint *)(uVar16 + 0x18));
      }
    }
    plVar13 = *(long **)(lVar10 + 0x160);
    if (plVar13 == (long *)0x0) {
      return 0;
    }
    uVar16 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
    if (uVar16 != 0) {
      if ((int)*(ulong *)(uVar16 + 0x18) < 1) {
        return uVar16;
      }
      unaff_x21 = 0;
      uVar11 = *(ulong *)(uVar16 + 0x18) & 0xffffffff;
      unaff_x22 = uVar16 + 0x20;
      while (unaff_x21 < uVar11) {
        plVar13 = *(long **)(unaff_x22 + unaff_x21 * 8);
        if ((plVar13 != (long *)0x0) &&
           (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar13 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x01514fec;
        uVar22 = /*Atlas.UI.UIAtlasButton$$remove_SelectedOrPressed*/ func_0x0151461c(lVar10);
        unaff_x21 = unaff_x21 + 1;
        uVar11 = (ulong)*(uint *)(uVar16 + 0x18);
        if ((long)(int)*(uint *)(uVar16 + 0x18) <= (long)unaff_x21) {
          return uVar22;
        }
      }
code_r0x01514fe0:
      uVar17 = func_0x00f78b24();
      func_0x00f78ac0(uVar17,0);
      plVar13 = extraout_x1;
      lVar30 = extraout_x8;
code_r0x01514fec:
      unaff_x23 = 0x3d1fa78;
      func_0x00f78e5c(plVar13,lVar30);
      uVar11 = uVar16;
    }
  }
  else {
    uVar16 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
    if (uVar16 != 0) {
      uVar11 = uVar16;
      if (0 < (int)*(ulong *)(uVar16 + 0x18)) {
        unaff_x21 = 0;
        uVar22 = *(ulong *)(uVar16 + 0x18) & 0xffffffff;
        unaff_x22 = uVar16 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar22 <= unaff_x21) goto code_r0x01514fe0;
          plVar13 = *(long **)(unaff_x22 + unaff_x21 * 8);
          if ((plVar13 != (long *)0x0) &&
             (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar13 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Selected*/ func_0x01514244(lVar10);
          unaff_x21 = unaff_x21 + 1;
          uVar22 = (ulong)*(uint *)(uVar16 + 0x18);
        } while ((long)unaff_x21 < (long)(int)*(uint *)(uVar16 + 0x18));
      }
      goto code_r0x01514e70;
    }
  }
code_r0x01514ff8:
  auVar35 = func_0x00f78af4();
  uVar17 = auVar35._8_8_;
  *(long *)((long)register0x00000008 + -0x180) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x178) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x170) = uVar11;
  *(long *)((long)register0x00000008 + -0x168) = lVar10;
  *(undefined1 **)((long)register0x00000008 + -0x160) =
       (undefined1 *)((long)register0x00000008 + -0x120);
  *(undefined **)((long)register0x00000008 + -0x158) = &Atlas_UI_UIAtlasButtonGroup__Subscribe;
  if ((bRam0000000003eb4da9 & 1) == 0) {
    func_0x00f78a20(0x3d3c5b8);
    func_0x00f78a20(0x3d3c5c0);
    bRam0000000003eb4da9 = 1;
  }
  lVar10 = *(long *)(auVar35._0_8_ + 0x40);
  if (lVar10 != 0) {
    uVar11 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar10,uVar17,uRam0000000003d3c5c0);
    if ((uVar11 & 1) != 0) {
      return uVar11;
    }
    uVar11 = *(ulong *)(auVar35._0_8_ + 0x40);
    if (uVar11 != 0) {
      uVar19 = *(undefined8 *)((long)register0x00000008 + -0x170);
      uVar16 = *(ulong *)((long)register0x00000008 + -0x168);
      uVar27 = *(undefined8 *)((long)register0x00000008 + -0x180);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x178);
      *(undefined8 *)((long)register0x00000008 + -0x170) = uVar19;
      *(ulong *)((long)register0x00000008 + -0x168) = uVar16;
      *(undefined8 *)((long)register0x00000008 + -0x160) =
           *(undefined8 *)((long)register0x00000008 + -0x160);
      *(undefined8 *)((long)register0x00000008 + -0x158) =
           *(undefined8 *)((long)register0x00000008 + -0x158);
      lVar10 = *(long *)(uVar11 + 0x10);
      puVar18 = puRam0000000003d3c5b8;
      if (lVar10 == 0) {
code_r0x0242716c:
        uVar17 = uVar19;
        uVar11 = uVar16;
        uVar22 = func_0x00f78af4();
        lVar10 = extraout_x9;
        uVar20 = extraout_w8;
code_r0x02427170:
        *(uint *)(uVar11 + 0x18) = uVar20 + 1;
      }
      else {
        uVar20 = *(uint *)(uVar11 + 0x18);
        uVar22 = uVar11;
        if (uVar20 != *(uint *)(lVar10 + 0x18)) goto code_r0x02427170;
        puVar18 = *(undefined8 **)(*(long *)(puRam0000000003d3c5b8[3] + 0xc0) + 0x60);
        uVar22 = (*(code *)*puVar18)(uVar11,uVar20 + 1);
        lVar10 = *(long *)(uVar11 + 0x10);
        uVar20 = *(uint *)(uVar11 + 0x18);
        *(uint *)(uVar11 + 0x18) = uVar20 + 1;
        uVar16 = uVar11;
        uVar19 = uVar17;
        if (lVar10 == 0) goto code_r0x0242716c;
      }
      if (uVar20 < *(uint *)(lVar10 + 0x18)) {
        *(undefined8 *)(lVar10 + (long)(int)uVar20 * 8 + 0x20) = uVar17;
        *(int *)(uVar11 + 0x1c) = *(int *)(uVar11 + 0x1c) + 1;
        return uVar22;
      }
      uVar19 = func_0x00f78b24();
      auVar35 = func_0x00f78ac0(uVar19,0);
      lVar30 = auVar35._8_8_;
      lVar10 = auVar35._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0x3d5a000;
      *(ulong *)((long)register0x00000008 + -0x1a8) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar27;
      *(undefined8 *)((long)register0x00000008 + -0x198) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -400) = uVar17;
      *(ulong *)((long)register0x00000008 + -0x188) = uVar11;
      *(undefined1 **)((long)register0x00000008 + -0x180) =
           (undefined1 *)((long)register0x00000008 + -0x160);
      *(undefined **)((long)register0x00000008 + -0x178) =
           &System_Collections_Generic_List_object___System_Collections_IList_Add;
      (*(code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x48))(lVar30,0x14);
      if (lVar10 == 0) {
        func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
        pcVar29 = (code *)SoftwareBreakpoint(1,0x2427350);
        (*pcVar29)();
      }
      pcVar29 = (code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x28);
      lVar23 = *(long *)(*(long *)(puVar18[3] + 0xc0) + 0x38);
      if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar23);
      }
      if (lVar30 == 0) {
        lVar24 = 0;
      }
      else {
        lVar24 = func_0x00f78adc(lVar30,lVar23);
        if (lVar24 == 0) {
          func_0x00f78e5c(lVar30,lVar23);
          goto code_r0x0242734c;
        }
      }
      (*pcVar29)(lVar10,lVar24,*(undefined8 *)(*(long *)(puVar18[3] + 0xc0) + 0x28));
      iVar8 = (*(code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x68))(lVar10);
      return (ulong)(iVar8 - 1);
    }
  }
  auVar34 = func_0x00f78af4();
  lVar30 = auVar34._8_8_;
  lVar10 = auVar34._0_8_;
  *(long *)((long)register0x00000008 + -0x1b0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0x3eb4000;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x1a0) = auVar35;
  *(undefined1 **)((long)register0x00000008 + -400) =
       (undefined1 *)((long)register0x00000008 + -0x160);
  *(undefined **)((long)register0x00000008 + -0x188) = &Atlas_UI_UIAtlasButton__OnPointerClick;
  if ((bRam0000000003eb4d9d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d9d = 1;
  }
  uVar11 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(lVar10 + 0x16c),0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (lVar30 != 0) {
    if (*(int *)(lVar30 + 0x134) != 0) {
      return uVar11;
    }
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(lVar10);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar10,lVar30,0);
    uVar17 = *(undefined8 *)(lVar10 + 0x118);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
    if ((int)uVar11 == 0) {
      return uVar11;
    }
    bVar7 = false;
    uVar17 = *(undefined8 *)((long)register0x00000008 + -400);
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x188);
    uVar19 = *(undefined8 *)((long)register0x00000008 + -0x1a0);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x198);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x180);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x1b0);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x1a8);
    goto Atlas_UI_UIAtlasButton__SelectButton;
  }
  auVar35 = func_0x00f78af4();
  plVar14 = auVar35._8_8_;
  plVar13 = auVar35._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0x3d5a000;
  *(ulong *)((long)register0x00000008 + -0x1e8) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x1e0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0x3eb4000;
  *(long *)((long)register0x00000008 + -0x1d0) = lVar10;
  *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x1c0) =
       (undefined1 *)((long)register0x00000008 + -400);
  *(undefined **)((long)register0x00000008 + -0x1b8) = &Atlas_UI_UIAtlasButton__OnSubmit;
  if ((bRam0000000003eb4d9e & 1) == 0) {
    func_0x00f78a20(0x3d21bd8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9e = 1;
  }
  uVar11 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)((long)plVar13 + 0x16c),0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (plVar14 == (long *)0x0) {
    lVar10 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    unaff_x23 = 1;
  }
  else {
    if (*(byte *)(*plVar14 + 300) < *(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300)) {
      unaff_x23 = 1;
    }
    else {
      unaff_x23 = (ulong)(*(long *)(*(long *)(*plVar14 + 200) +
                                    (ulong)*(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300) * 8 + -8) !=
                         /*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8);
    }
    lVar10 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    if (*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) <= *(byte *)(*plVar14 + 300)) {
      unaff_x23 = (ulong)((uint)(*(long *)(*(long *)(*plVar14 + 200) +
                                           (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 + -8) !=
                                /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0) & (uint)unaff_x23);
    }
  }
  if ((int)unaff_x23 == 0) {
code_r0x015152e8:
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(plVar13);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(plVar13,plVar14,0);
    uVar11 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
    if (((int)uVar11 == 0) ||
       (uVar11 = (**(code **)(*plVar13 + 0x2b8))(plVar13,*(undefined8 *)(*plVar13 + 0x2c0)),
       (int)uVar11 == 0)) {
      return uVar11;
    }
    (**(code **)(*plVar13 + 0x2d8))(plVar13,2,0,*(undefined8 *)(*plVar13 + 0x2e0));
    puVar32 = &UNK_01515354;
    plVar15 = plVar13;
  }
  else {
    unaff_x23 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar10,0);
    if (iVar8 == 0) goto code_r0x015152e8;
    if (lVar10 != 0) {
      lVar10 = *(long *)(lVar10 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,plVar13,0);
      if ((uVar11 & 1) != 0) {
        return uVar11;
      }
      goto code_r0x015152e8;
    }
    puVar32 = &Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0;
    plVar15 = (long *)func_0x00f78af4();
  }
  *(long *)((long)register0x00000008 + -0x220) = lVar10;
  *(undefined8 *)((long)register0x00000008 + -0x218) = 1;
  *(long **)((long)register0x00000008 + -0x210) = plVar14;
  *(long **)((long)register0x00000008 + -0x208) = plVar13;
  *(undefined1 **)((long)register0x00000008 + -0x200) =
       (undefined1 *)((long)register0x00000008 + -0x1c0);
  *(undefined **)((long)register0x00000008 + -0x1f8) = puVar32;
  if ((bRam0000000003eb4da6 & 1) == 0) {
    func_0x00f78a20(0x3d29448);
    bRam0000000003eb4da6 = 1;
  }
  uVar11 = func_0x00f78aec(/*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d_TypeInfo*/ uRam0000000003d29448);
  /*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d$$.ctor*/ func_0x0156c5e4(uVar11,0,0);
  if (uVar11 != 0) {
    *(long **)(uVar11 + 0x20) = plVar15;
    return uVar11;
  }
  auVar34 = func_0x00f78af4();
  *(long *)((long)register0x00000008 + -0x250) = lVar10;
  *(undefined8 *)((long)register0x00000008 + -0x248) = 0x3d29448;
  *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
  *(long **)((long)register0x00000008 + -0x238) = plVar15;
  *(undefined1 **)((long)register0x00000008 + -0x230) =
       (undefined1 *)((long)register0x00000008 + -0x200);
  *(undefined **)((long)register0x00000008 + -0x228) = &Atlas_UI_UIAtlasButton__OnSelect;
  if ((bRam0000000003eb4d9f & 1) == 0) {
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9f = 1;
  }
  uVar11 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(auVar34._0_8_ + 0x16c),0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (auVar34._8_8_ == (long *)0x0) {
code_r0x0151546c:
    bVar7 = false;
  }
  else {
    lVar10 = *auVar34._8_8_;
    if (*(byte *)(lVar10 + 300) < *(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300)) goto code_r0x0151546c;
    bVar7 = *(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 +
                     -8) == /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0;
  }
  iVar8 = /*Core.Input.InputManager$$get_IsCurrentSelectionFromUser*/ func_0x0164ad7c(0);
  if ((iVar8 != 0) && (!bVar7)) {
    /*Atlas.UI.UIAtlasButton$$PlayButtonSelectSound*/ func_0x01514cec(auVar34._0_8_);
  }
  uVar17 = *(undefined8 *)((long)register0x00000008 + -0x230);
  uVar12 = *(undefined8 *)((long)register0x00000008 + -0x228);
  uVar19 = *(undefined8 *)((long)register0x00000008 + -0x240);
  uVar26 = *(undefined8 *)((long)register0x00000008 + -0x238);
  puVar6 = (undefined1 *)((long)register0x00000008 + -0x220);
  uVar27 = *(undefined8 *)((long)register0x00000008 + -0x250);
  uVar28 = *(undefined8 *)((long)register0x00000008 + -0x248);
Atlas_UI_UIAtlasButton__SelectButton:
  uVar11 = auVar34._0_8_;
  *(undefined8 *)(puVar6 + -0x30) = uVar27;
  *(undefined8 *)(puVar6 + -0x28) = uVar28;
  *(undefined8 *)(puVar6 + -0x20) = uVar19;
  *(undefined8 *)(puVar6 + -0x18) = uVar26;
  *(undefined8 *)(puVar6 + -0x10) = uVar17;
  *(undefined8 *)(puVar6 + -8) = uVar12;
  puVar31 = puVar6 + -0x10;
  uVar17 = 0;
  if ((*(char *)(uVar11 + 0x140) != '\0') && (bVar7)) {
    return uVar11;
  }
  /*UnityEngine.UI.Selectable$$OnSelect*/ func_0x032e4efc(uVar11,auVar34._8_8_,0);
  if (*(long *)(uVar11 + 0x118) != 0) {
    /*Atlas.UI.UIAtlasButtonGroup$$OnButtonSelected*/ func_0x01514894(*(long *)(uVar11 + 0x118),uVar11,auVar34._8_8_);
  }
  uVar16 = *(ulong *)(uVar11 + 0x148);
  if (uVar16 == 0) {
    uVar16 = *(ulong *)(uVar11 + 0x160);
    if (uVar16 == 0) {
      return 0;
    }
    puVar31 = *(undefined1 **)(puVar6 + -0x10);
    puVar32 = *(undefined **)(puVar6 + -8);
    uVar17 = *(undefined8 *)(puVar6 + -0x20);
    uVar27 = *(undefined8 *)(puVar6 + -0x30);
    auVar34._8_8_ = *(undefined8 *)(puVar6 + -0x28);
    auVar34._0_8_ = *(undefined8 *)(puVar6 + -0x18);
  }
  else {
    puVar32 = &UNK_01514868;
    puVar6 = puVar6 + -0x30;
  }
  uVar19 = 0;
  *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar6 + -0x48) = 0x3d2a000;
  *(undefined8 *)(puVar6 + -0x40) = 0x3d5a000;
  *(ulong *)(puVar6 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar6 + -0x30) = uVar27;
  *(long *)(puVar6 + -0x28) = auVar34._8_8_;
  *(undefined8 *)(puVar6 + -0x20) = uVar17;
  *(long *)(puVar6 + -0x18) = auVar34._0_8_;
  *(undefined1 **)(puVar6 + -0x10) = puVar31;
  *(undefined **)(puVar6 + -8) = puVar32;
  *(ulong *)(puVar6 + -0x58) = uVar16;
  lVar10 = *(long *)(uVar16 + 0x68);
  if (lVar10 == 0) {
    puVar6 = puVar6 + -0x58;
    lVar30 = 1;
  }
  else {
    lVar30 = *(long *)(lVar10 + 0x18);
    if (lVar30 == 0) {
      return uVar16;
    }
    puVar6 = (undefined1 *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar23 = *(long *)(puVar6 + lVar10 * 8);
    pcVar29 = *(code **)(lVar23 + 0x10);
    plVar13 = *(long **)(lVar23 + 0x20);
    lVar23 = *(long *)(lVar23 + 0x28);
    if (*(short *)(lVar23 + 0x48) == -1) {
      func_0x00f78ad8(lVar23,uVar19);
    }
    iVar8 = func_0x00f78a4c(lVar23);
    if (iVar8 == 0) {
      if ((((plVar13 == (long *)0x0) || (*(short *)(lVar23 + 0x48) == -1)) ||
          ((*(byte *)(*plVar13 + 0x115) & 1) != 0)) || (*(long *)(uVar16 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar8 = func_0x00f78a44(lVar23);
      iVar9 = func_0x00f78ec0(lVar23);
      if (iVar8 == 0) {
        uVar3 = *(ushort *)(lVar23 + 0x48);
        if (iVar9 == 0) {
          lVar23 = *plVar13 + (ulong)uVar3 * 0x10;
          auVar35 = (**(code **)(lVar23 + 0x138))(plVar13,*(undefined8 *)(lVar23 + 0x140));
          goto code_r0x02924da4;
        }
        lVar23 = func_0x00f78a48(lVar23);
        lVar24 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar24 + 0x12a);
        if (uVar11 != 0) {
          piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == lVar23) {
              puVar18 = (undefined8 *)(lVar24 + (long)(int)(*piVar25 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar25 = piVar25 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar18 = (undefined8 *)func_0x00fac1f0(plVar13,lVar23,(ulong)uVar3);
code_r0x02924e68:
        pcVar29 = (code *)*puVar18;
        puVar18 = (undefined8 *)puVar18[1];
      }
      else {
        if (iVar9 == 0) {
          uVar17 = *(undefined8 *)(*plVar13 + (ulong)*(ushort *)(lVar23 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar24 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar24 + 0x12a);
          if (uVar11 != 0) {
            piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)(lVar23 + 0x18)) {
                lVar24 = lVar24 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar23 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar25 = piVar25 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar24 = func_0x00fac1f0(plVar13);
code_r0x02924e40:
          uVar17 = *(undefined8 *)(lVar24 + 8);
        }
        puVar18 = (undefined8 *)func_0x00f78acc(uVar17,lVar23);
        pcVar29 = (code *)*puVar18;
      }
      auVar35 = (*pcVar29)(plVar13,puVar18);
    }
    else if (*(char *)(lVar23 + 0x4a) == '\0') {
      auVar35 = (*pcVar29)(lVar23);
    }
    else {
code_r0x02924d98:
      auVar35 = (*pcVar29)(plVar13,lVar23);
    }
code_r0x02924da4:
    uVar19 = auVar35._8_8_;
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar30) {
      return auVar35._0_8_;
    }
  } while( true );
code_r0x015606b4:
  lVar23 = *(long *)(puVar6 + lVar10 * 8);
  pcVar29 = *(code **)(lVar23 + 0x10);
  plVar13 = *(long **)(lVar23 + 0x20);
  lVar23 = *(long *)(lVar23 + 0x28);
  if (*(short *)(lVar23 + 0x48) == -1) {
    func_0x00f78ad8(lVar23);
  }
  iVar8 = func_0x00f78a4c(lVar23);
  if (iVar8 == 0) {
    if (plVar13 == (long *)0x0) {
      uVar16 = (*pcVar29)((undefined1 *)((long)register0x00000008 + -0x7c),param_6,lVar23);
    }
    else {
      if (((*(short *)(lVar23 + 0x48) == -1) || ((*(byte *)(*plVar13 + 0x115) & 1) != 0)) ||
         (*(long *)(uVar11 + 0x18) == 0)) goto code_r0x01560784;
      iVar8 = func_0x00f78a44(lVar23);
      iVar9 = func_0x00f78ec0(lVar23);
      if (iVar8 == 0) {
        uVar3 = *(ushort *)(lVar23 + 0x48);
        if (iVar9 == 0) {
          lVar23 = *plVar13 + (ulong)uVar3 * 0x10;
          uVar16 = (**(code **)(lVar23 + 0x138))
                             (plVar13,*(undefined4 *)((long)register0x00000008 + -0x6c),param_6,
                              *(undefined8 *)(lVar23 + 0x140));
          goto code_r0x015607ac;
        }
        lVar23 = func_0x00f78a48(lVar23);
        uVar1 = *(undefined4 *)((long)register0x00000008 + -0x6c);
        lVar24 = *plVar13;
        uVar16 = (ulong)*(ushort *)(lVar24 + 0x12a);
        if (uVar16 != 0) {
          piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == lVar23) {
              puVar18 = (undefined8 *)(lVar24 + (long)(int)(*piVar25 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x01560884;
            }
            piVar25 = piVar25 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar18 = (undefined8 *)func_0x00fac1f0(plVar13,lVar23,(ulong)uVar3);
code_r0x01560884:
        pcVar29 = (code *)*puVar18;
        puVar18 = (undefined8 *)puVar18[1];
      }
      else {
        uVar1 = *(undefined4 *)((long)register0x00000008 + -0x6c);
        if (iVar9 == 0) {
          uVar17 = *(undefined8 *)(*plVar13 + (ulong)*(ushort *)(lVar23 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar24 = *plVar13;
          uVar16 = (ulong)*(ushort *)(lVar24 + 0x12a);
          if (uVar16 != 0) {
            piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)(lVar23 + 0x18)) {
                lVar24 = lVar24 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar23 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01560854;
              }
              piVar25 = piVar25 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          lVar24 = func_0x00fac1f0(plVar13);
code_r0x01560854:
          uVar17 = *(undefined8 *)(lVar24 + 8);
        }
        puVar18 = (undefined8 *)func_0x00f78acc(uVar17,lVar23);
        pcVar29 = (code *)*puVar18;
      }
      uVar16 = (*pcVar29)(plVar13,uVar1,param_6,puVar18);
    }
  }
  else if (*(char *)(lVar23 + 0x4a) == '\x02') {
    uVar16 = (*pcVar29)(*(undefined4 *)((long)register0x00000008 + -0x6c),param_6,lVar23);
  }
  else {
code_r0x01560784:
    uVar16 = (*pcVar29)(plVar13,*(undefined4 *)((long)register0x00000008 + -0x6c),param_6,lVar23);
  }
code_r0x015607ac:
  lVar10 = lVar10 + 1;
  if (lVar10 == lVar30) {
    return uVar16;
  }
  goto code_r0x015606b4;
code_r0x01560a04:
  lVar23 = *(long *)(puVar6 + lVar10 * 8);
  pcVar29 = *(code **)(lVar23 + 0x10);
  plVar13 = *(long **)(lVar23 + 0x20);
  lVar23 = *(long *)(lVar23 + 0x28);
  if (*(short *)(lVar23 + 0x48) == -1) {
    func_0x00f78ad8(lVar23,uVar12);
  }
  iVar8 = func_0x00f78a4c(lVar23);
  if (iVar8 == 0) {
    if ((((plVar13 == (long *)0x0) || (*(short *)(lVar23 + 0x48) == -1)) ||
        ((*(byte *)(*plVar13 + 0x115) & 1) != 0)) || (*(long *)(uVar11 + 0x18) == 0))
    goto code_r0x01560ac4;
    iVar8 = func_0x00f78a44(lVar23);
    iVar9 = func_0x00f78ec0(lVar23);
    if (iVar8 == 0) {
      uVar3 = *(ushort *)(lVar23 + 0x48);
      if (iVar9 == 0) {
        lVar23 = *plVar13 + (ulong)uVar3 * 0x10;
        auVar35 = (**(code **)(lVar23 + 0x138))(plVar13,*(undefined8 *)(lVar23 + 0x140));
        goto code_r0x01560ad0;
      }
      lVar23 = func_0x00f78a48(lVar23);
      lVar24 = *plVar13;
      uVar16 = (ulong)*(ushort *)(lVar24 + 0x12a);
      if (uVar16 != 0) {
        piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar25 + -2) == lVar23) {
            puVar18 = (undefined8 *)(lVar24 + (long)(int)(*piVar25 + (uint)uVar3) * 0x10 + 0x138);
            goto code_r0x01560b94;
          }
          piVar25 = piVar25 + 4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      puVar18 = (undefined8 *)func_0x00fac1f0(plVar13,lVar23,(ulong)uVar3);
code_r0x01560b94:
      pcVar29 = (code *)*puVar18;
      puVar18 = (undefined8 *)puVar18[1];
    }
    else {
      if (iVar9 == 0) {
        uVar17 = *(undefined8 *)(*plVar13 + (ulong)*(ushort *)(lVar23 + 0x48) * 0x10 + 0x140);
      }
      else {
        lVar24 = *plVar13;
        uVar16 = (ulong)*(ushort *)(lVar24 + 0x12a);
        if (uVar16 != 0) {
          piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == *(long *)(lVar23 + 0x18)) {
              lVar24 = lVar24 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar23 + 0x48)) * 0x10 +
                       0x138;
              goto code_r0x01560b6c;
            }
            piVar25 = piVar25 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        lVar24 = func_0x00fac1f0(plVar13);
code_r0x01560b6c:
        uVar17 = *(undefined8 *)(lVar24 + 8);
      }
      puVar18 = (undefined8 *)func_0x00f78acc(uVar17,lVar23);
      pcVar29 = (code *)*puVar18;
    }
    auVar35 = (*pcVar29)(plVar13,puVar18);
  }
  else if (*(char *)(lVar23 + 0x4a) == '\0') {
    auVar35 = (*pcVar29)(lVar23);
  }
  else {
code_r0x01560ac4:
    auVar35 = (*pcVar29)(plVar13,lVar23);
  }
code_r0x01560ad0:
  uVar12 = auVar35._8_8_;
  lVar10 = lVar10 + 1;
  if (lVar10 == lVar30) {
    return auVar35._0_8_;
  }
  goto code_r0x01560a04;
}



// ============================================================
// RVA: 0x149cbe4 | Atlas.UI.Screens.MultiplayerModeSelectScreen.CreateRoomPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x0149cc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149ccdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149ca90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01514864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01515350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cb98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0149cad4) */
/* WARNING: Removing unreachable block (ram,0x0149cae4) */
/* WARNING: Removing unreachable block (ram,0x0149caec) */
/* WARNING: Removing unreachable block (ram,0x0149cab4) */
/* WARNING: Removing unreachable block (ram,0x0149cac4) */
/* WARNING: Removing unreachable block (ram,0x0149cacc) */
/* WARNING: Removing unreachable block (ram,0x0149ca94) */
/* WARNING: Removing unreachable block (ram,0x0149caa4) */
/* WARNING: Removing unreachable block (ram,0x0149caac) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01515354) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_MultiplayerModeSelectScreen__CreateRoomPressed
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  int iVar8;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *extraout_x1;
  uint extraout_w8;
  uint uVar21;
  ulong *puVar22;
  ulong uVar23;
  long extraout_x8;
  long lVar24;
  long lVar25;
  long extraout_x9;
  int *piVar26;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar27;
  undefined8 unaff_x21;
  undefined8 uVar28;
  long unaff_x22;
  code *pcVar29;
  ulong unaff_x23;
  long lVar30;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar31;
  code *unaff_x30;
  undefined *puVar32;
  float fVar33;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined8 unaff_d9;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  auVar35._8_8_ = unaff_x20;
  auVar35._0_8_ = unaff_x21;
  do {
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x28) = auVar35;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar27 = 0x3eb4000;
    uVar14 = 0x3d411e0;
    unaff_x19 = param_6;
    if ((bRam0000000003eb4a05 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79018);
      bRam0000000003eb4a05 = 1;
      unaff_x19 = param_6;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d411e0);
    if (lVar9 != 0) {
      uVar20 = 0x3d79018;
      uVar10 = *(ulong *)(lVar9 + 0x18);
      if (uVar10 == 0) {
        unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
        puVar32 = *(undefined **)((long)register0x00000008 + -8);
        unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
        uVar14 = *(undefined8 *)((long)register0x00000008 + -0x30);
        auVar35 = *(undefined1 (*) [16])((long)register0x00000008 + -0x28);
        puVar5 = (undefined1 *)register0x00000008;
        uVar10 = /*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018;
code_r0x0151398c:
        *(undefined8 *)(puVar5 + -0x30) = uVar14;
        *(undefined1 (*) [16])(puVar5 + -0x28) = auVar35;
        *(undefined8 *)(puVar5 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
        *(undefined **)(puVar5 + -8) = puVar32;
        uVar27 = 0x3eb4000;
        uVar11 = uVar10;
        if ((bRam0000000003eb4db6 & 1) == 0) {
          func_0x00f78a20(0x3d2faf8,0);
          func_0x00f78a20(0x3d2fb00);
          uVar11 = func_0x00f78a20(0x3d25580);
          bRam0000000003eb4db6 = 1;
        }
        if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
          return uVar11;
        }
        lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
        if (lVar9 != 0) {
          uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar9,uVar10,uRam0000000003d2faf8);
          if ((int)uVar11 == 0) {
            return uVar11;
          }
          if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
              (lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar9 != 0)) &&
             (uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar9,uVar10,uRam0000000003d2fb00), uVar11 != 0)) {
            *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
            *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
            *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
            *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
            /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar11,0,0);
            return uVar11;
          }
        }
        plVar12 = (long *)func_0x00f78af4();
        *(undefined8 *)(puVar5 + -0x70) = unaff_d9;
        *(ulong *)(puVar5 + -0x68) = CONCAT44(unaff_00005104,unaff_s8);
        *(undefined8 *)(puVar5 + -0x60) = uVar14;
        *(undefined8 *)(puVar5 + -0x58) = 0x3eb4000;
        *(undefined8 *)(puVar5 + -0x50) = 0x3d25580;
        *(ulong *)(puVar5 + -0x48) = uVar10;
        *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
        *(undefined **)(puVar5 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
        if ((bRam0000000003eb4d8b & 1) == 0) {
          func_0x00f78a20(0x3d24188);
          func_0x00f78a20(0x3d5e780);
          func_0x00f78a20(0x3d5e868);
          bRam0000000003eb4d8b = 1;
        }
        plVar13 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar12,0);
        if ((plVar13 != (long *)0x0) && (*plVar13 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
          uVar15 = func_0x00f78e5c(plVar13);
          *(long **)(puVar5 + -0x90) = plVar13;
          *(long **)(puVar5 + -0x88) = plVar12;
          *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x40;
          *(undefined **)(puVar5 + -0x78) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
          lVar9 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
          uVar20 = *(undefined8 *)(puVar5 + -0x90);
          *(undefined8 *)(puVar5 + -0xa0) = uVar14;
          *(undefined8 *)(puVar5 + -0x98) = 0x3eb4000;
          *(undefined8 *)(puVar5 + -0x90) = uVar20;
          *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(puVar5 + -0x88);
          *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x80);
          *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x78);
          if (lVar9 == 0) {
            func_0x00f78a24(0x3d23938,0,0);
            uVar19 = func_0x00f78aec();
            uVar15 = func_0x00f78a24(0x3d7b500);
            /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar19,uVar15,0);
          }
          else {
            uVar27 = 0x3ec0000;
            if (pcRam0000000003ec01d0 == (code *)0x0) {
              pcRam0000000003ec01d0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                          );
            }
            uVar10 = (*pcRam0000000003ec01d0)(uVar15);
            if ((uVar10 & 1) != 0) {
              if (pcRam0000000003ec01e0 == (code *)0x0) {
                pcRam0000000003ec01e0 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                            );
              }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar10 = (*pcRam0000000003ec01e0)(uVar15,lVar9);
              return uVar10;
            }
            func_0x00f78a24(0x3d1fce8);
            uVar19 = func_0x00f78aec();
            uVar20 = func_0x00f78a24(0x3d6af80);
            /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar19,uVar20,0);
            uVar20 = uVar15;
          }
          uVar15 = func_0x00f78a24(0x3d5a8a8);
          auVar35 = func_0x00f78ac0(uVar19,uVar15);
          *(undefined8 *)(puVar5 + -0xd0) = uVar14;
          *(undefined8 *)(puVar5 + -200) = uVar27;
          *(undefined8 *)(puVar5 + -0xc0) = uVar20;
          *(undefined8 *)(puVar5 + -0xb8) = uVar19;
          *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0x80;
          *(undefined **)(puVar5 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
          if (pcRam0000000003ec01e0 == (code *)0x0) {
            pcRam0000000003ec01e0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar10 = (*pcRam0000000003ec01e0)(auVar35._0_8_,auVar35._8_8_);
          return uVar10;
        }
        fVar33 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
        uVar14 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar33 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,
                                 0x40a00000,plVar13,4,0);
        uVar10 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar14,uRam0000000003d5e780);
        *(undefined8 *)(puVar5 + -0xa0) = 0x3d5e780;
        *(undefined8 *)(puVar5 + -0x98) = 0x3d5e868;
        *(long **)(puVar5 + -0x90) = plVar13;
        *(long **)(puVar5 + -0x88) = plVar12;
        *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x40;
        *(undefined **)(puVar5 + -0x78) = &UNK_01513b44;
        if ((bRam0000000003eb66c1 & 1) == 0) {
          func_0x00f78a20(0x3d208f0,plVar12,uRam0000000003d5e868);
          func_0x00f78a20(0x3d20bc0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb66c1 = 1;
        }
        if ((uVar10 != 0) && (*(char *)(uVar10 + 0xe8) != '\0')) {
          if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar8 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
          if (iVar8 != 0) {
            lVar9 = func_0x00f78adc(plVar12,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
            if ((uVar11 & 1) == 0) {
              if (plVar12 == (long *)0x0) goto code_r0x018eef34;
              uVar14 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
            }
            else {
              if (lVar9 == 0) {
code_r0x018eef34:
                auVar35 = func_0x00f78af4();
                uVar11 = auVar35._0_8_;
                *(undefined8 *)(puVar5 + -0xd0) = 0x3d5e780;
                *(long *)(puVar5 + -200) = lVar9;
                *(long **)(puVar5 + -0xc0) = plVar12;
                *(ulong *)(puVar5 + -0xb8) = uVar10;
                *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0x80;
                *(undefined **)(puVar5 + -0xa8) =
                     &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
                if ((bRam0000000003eb66c2 & 1) == 0) {
                  func_0x00f78a20(0x3d20bc0);
                  func_0x00f78a20(0x3d25440);
                  bRam0000000003eb66c2 = 1;
                }
                if ((uVar11 != 0) && (*(char *)(uVar11 + 0xe8) != '\0')) {
                  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                  if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar11,auVar35._8_8_,cVar2 != '\0',0);
                }
                return uVar11;
              }
              uVar14 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar9,0);
            }
            *(undefined8 *)(uVar10 + 200) = uVar14;
          }
          *(long **)(uVar10 + 0x48) = plVar12;
        }
        return uVar10;
      }
      puVar32 = (undefined *)0x149cc54;
code_r0x015609bc:
      uVar15 = 0;
      *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
      *(ulong *)(puVar4 + -0x38) = unaff_x23;
      *(long *)(puVar4 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar4 + -0x28) = uVar14;
      *(undefined8 *)(puVar4 + -0x20) = uVar27;
      *(undefined8 *)(puVar4 + -0x18) = uVar20;
      *(undefined1 **)(puVar4 + -0x10) = puVar5;
      *(undefined **)(puVar4 + -8) = puVar32;
      *(ulong *)(puVar4 + -0x58) = uVar10;
      lVar9 = *(long *)(uVar10 + 0x68);
      if (lVar9 == 0) {
        puVar5 = puVar4 + -0x58;
        lVar30 = 1;
      }
      else {
        lVar30 = *(long *)(lVar9 + 0x18);
        if (lVar30 == 0) {
          return uVar10;
        }
        puVar5 = (undefined1 *)(lVar9 + 0x20);
      }
      lVar9 = 0;
      break;
    }
    uVar20 = func_0x00f78af4();
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(long *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3d411e0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x48) = param_4;
    *(undefined1 **)((long)register0x00000008 + -0x40) = puVar5;
    *(undefined **)((long)register0x00000008 + -0x38) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__JoinRoomPressed;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x40);
    uVar27 = 0x3eb4000;
    uVar14 = 0x3d411e0;
    if ((bRam0000000003eb4a06 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79020);
      bRam0000000003eb4a06 = 1;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar20,uRam0000000003d411e0);
    if (lVar9 != 0) {
      uVar20 = 0x3d79020;
      uVar10 = *(ulong *)(lVar9 + 0x20);
      if (uVar10 != 0) {
        puVar32 = &UNK_0149cce0;
        goto code_r0x015609bc;
      }
      unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x40);
      puVar32 = *(undefined **)((long)register0x00000008 + -0x38);
      unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x48);
      puVar5 = (undefined1 *)((long)register0x00000008 + -0x30);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -0x60);
      auVar35 = *(undefined1 (*) [16])((long)register0x00000008 + -0x58);
      uVar10 = /*STR('event:/UI/Front_End/GeneralButton4')*/ uRam0000000003d79020;
      goto code_r0x0151398c;
    }
    uVar14 = func_0x00f78af4();
    *(long *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3d411e0;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x78) = uVar20;
    *(undefined1 **)((long)register0x00000008 + -0x70) = puVar5;
    *(undefined **)((long)register0x00000008 + -0x68) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__OnPartyInvite;
    if ((bRam0000000003eb4a07 & 1) == 0) {
      func_0x00f78a20(0x3d3e0d8);
      func_0x00f78a20(0x3d3e130);
      func_0x00f78a20(0x3d3e178);
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d411e8);
      bRam0000000003eb4a07 = 1;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar14,uRam0000000003d411e8);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0xa0) != 0)) {
      uVar10 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar9 + 0xa0),uRam0000000003d3e0d8);
      if ((uVar10 & 1) != 0) {
        return uVar10;
      }
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar14,uRam0000000003d411e8);
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0xe0) != 0)) {
        uVar10 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar9 + 0xe0),uRam0000000003d3e130);
        if ((uVar10 & 1) != 0) {
          return uVar10;
        }
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar14,uRam0000000003d411e8);
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0x98) != 0)) {
          uVar10 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar9 + 0x98),uRam0000000003d3e178);
          if ((uVar10 & 1) != 0) {
            return uVar10;
          }
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar14,uRam0000000003d411e0);
          if (lVar9 != 0) {
            uVar10 = *(ulong *)(lVar9 + 0x20);
            if (uVar10 == 0) {
              return 0;
            }
            puVar5 = *(undefined1 **)((long)register0x00000008 + -0x70);
            puVar32 = *(undefined **)((long)register0x00000008 + -0x68);
            uVar27 = *(undefined8 *)((long)register0x00000008 + -0x80);
            uVar20 = *(undefined8 *)((long)register0x00000008 + -0x78);
            puVar4 = (undefined1 *)((long)register0x00000008 + -0x60);
            unaff_x22 = *(long *)((long)register0x00000008 + -0x90);
            uVar14 = *(undefined8 *)((long)register0x00000008 + -0x88);
            goto code_r0x015609bc;
          }
        }
      }
    }
    uVar27 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -200) = unaff_x23;
    *(long *)((long)register0x00000008 + -0xc0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x3d411e8;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar14;
    *(undefined1 **)((long)register0x00000008 + -0xa0) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(code **)((long)register0x00000008 + -0x98) =
         Atlas_UI_Screens_MultiplayerModeSelectScreen__OnBeforeExit;
    uVar14 = 0x3eb4000;
    uVar10 = 0x3d411e8;
    if ((bRam0000000003eb4a03 & 1) == 0) {
      func_0x00f78a20(0x3d2a320);
      func_0x00f78a20(0x3d1b598);
      func_0x00f78a20(0x3d2c840);
      func_0x00f78a20(0x3d5a9e8);
      func_0x00f78a20(0x3d411d8);
      func_0x00f78a20(0x3d411e8);
      bRam0000000003eb4a03 = 1;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar27,uRam0000000003d411e8);
    if ((lVar9 == 0) || (unaff_x22 = *(long *)(lVar9 + 0x28), unaff_x22 == 0)) {
LAB_0149cb08:
      func_0x00f78af4();
    }
    else {
      unaff_x23 = 0x3d1b598;
      unaff_x24 = 0x3d5a000;
      unaff_x25 = 0x3d2a000;
      uVar14 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar10 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar10,uVar27,uRam0000000003d5a9e8,uRam0000000003d2a320);
      unaff_x19 = 0;
      plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar14,uVar10);
      if ((plVar12 == (long *)0x0) || (*plVar12 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
        uVar14 = 0x3d411d8;
        *(long **)(unaff_x22 + 0x48) = plVar12;
        unaff_x19 = uRam0000000003d2c840;
        Atlas_UI_Screens_AtlasScreen_ModeSelectScreenBehaviour__ModeSelectScreen_TransitionData___SetScreenHandlePartyInvite
                  (uVar27,0);
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar27,uRam0000000003d411d8);
        if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x68), lVar9 == 0)) goto LAB_0149cb08;
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3d5a000;
        *(undefined8 *)((long)register0x00000008 + -0x118) = 0x3d1b598;
        *(long *)((long)register0x00000008 + -0x110) = unaff_x22;
        *(ulong *)((long)register0x00000008 + -0x108) = uVar10;
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0x3d411d8;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar27;
        *(undefined1 **)((long)register0x00000008 + -0xf0) =
             (undefined1 *)((long)register0x00000008 + -0xa0);
        *(undefined8 *)((long)register0x00000008 + -0xe8) = 0x149ca94;
        if ((bRam0000000003eb4d9b & 1) == 0) {
          func_0x00f78a20(0x3d1fa78,0);
          bRam0000000003eb4d9b = 1;
        }
        plVar12 = *(long **)(lVar9 + 0x148);
        uVar11 = 0x3eb4000;
        if (plVar12 == (long *)0x0) goto code_r0x01514e70;
        uVar16 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
        if (uVar16 == 0) goto code_r0x01514ff8;
        uVar11 = uVar16;
        if ((int)*(ulong *)(uVar16 + 0x18) < 1) goto code_r0x01514e70;
        uVar10 = 0;
        uVar23 = *(ulong *)(uVar16 + 0x18) & 0xffffffff;
        unaff_x22 = uVar16 + 0x20;
        unaff_x23 = 0x3d1fa78;
        goto code_r0x01514e38;
      }
    }
    auVar35 = func_0x00f78e5c();
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x110);
    *(long *)((long)register0x00000008 + -0x110) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x108) = uVar10;
    *(undefined8 *)((long)register0x00000008 + -0x100) = uVar14;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar27;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0xa0);
    *(code **)((long)register0x00000008 + -0xe8) =
         Atlas_UI_Screens_MultiplayerModeSelectScreen__GameTypePressed;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xf0);
    param_6 = unaff_x19;
    if ((bRam0000000003eb4a04 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79018);
      func_0x00f78a20(0x3d79020);
      bRam0000000003eb4a04 = 1;
    }
    unaff_x22 = 0x3d411e0;
    uVar14 = 0x3d411e0;
    iVar8 = auVar35._8_4_;
    if (iVar8 == 1) {
      puVar22 = (ulong *)0x3d79018;
LAB_0149cb90:
      uVar10 = *puVar22;
      puVar32 = &LAB_0149cb9c;
      goto code_r0x0151398c;
    }
    if (iVar8 == 2) {
      puVar22 = (ulong *)0x3d79020;
      goto LAB_0149cb90;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(auVar35._0_8_,uRam0000000003d411e0);
    if (lVar9 != 0) goto code_r0x0149cbac;
    unaff_x30 = Atlas_UI_Screens_MultiplayerModeSelectScreen__CreateRoomPressed;
    param_4 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  } while( true );
code_r0x01560a04:
  lVar24 = *(long *)(puVar5 + lVar9 * 8);
  pcVar29 = *(code **)(lVar24 + 0x10);
  plVar12 = *(long **)(lVar24 + 0x20);
  lVar24 = *(long *)(lVar24 + 0x28);
  if (*(short *)(lVar24 + 0x48) == -1) {
    func_0x00f78ad8(lVar24,uVar15);
  }
  iVar8 = func_0x00f78a4c(lVar24);
  if (iVar8 == 0) {
    if ((((plVar12 == (long *)0x0) || (*(short *)(lVar24 + 0x48) == -1)) ||
        ((*(byte *)(*plVar12 + 0x115) & 1) != 0)) || (*(long *)(uVar10 + 0x18) == 0))
    goto code_r0x01560ac4;
    iVar8 = func_0x00f78a44(lVar24);
    iVar7 = func_0x00f78ec0(lVar24);
    if (iVar8 == 0) {
      uVar3 = *(ushort *)(lVar24 + 0x48);
      if (iVar7 == 0) {
        lVar24 = *plVar12 + (ulong)uVar3 * 0x10;
        auVar35 = (**(code **)(lVar24 + 0x138))(plVar12,*(undefined8 *)(lVar24 + 0x140));
        goto code_r0x01560ad0;
      }
      lVar24 = func_0x00f78a48(lVar24);
      lVar25 = *plVar12;
      uVar11 = (ulong)*(ushort *)(lVar25 + 0x12a);
      if (uVar11 != 0) {
        piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == lVar24) {
            puVar18 = (undefined8 *)(lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
            goto code_r0x01560b94;
          }
          piVar26 = piVar26 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar18 = (undefined8 *)func_0x00fac1f0(plVar12,lVar24,(ulong)uVar3);
code_r0x01560b94:
      pcVar29 = (code *)*puVar18;
      puVar18 = (undefined8 *)puVar18[1];
    }
    else {
      if (iVar7 == 0) {
        uVar14 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
      }
      else {
        lVar25 = *plVar12;
        uVar11 = (ulong)*(ushort *)(lVar25 + 0x12a);
        if (uVar11 != 0) {
          piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)(lVar24 + 0x18)) {
              lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar24 + 0x48)) * 0x10 +
                       0x138;
              goto code_r0x01560b6c;
            }
            piVar26 = piVar26 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        lVar25 = func_0x00fac1f0(plVar12);
code_r0x01560b6c:
        uVar14 = *(undefined8 *)(lVar25 + 8);
      }
      puVar18 = (undefined8 *)func_0x00f78acc(uVar14,lVar24);
      pcVar29 = (code *)*puVar18;
    }
    auVar35 = (*pcVar29)(plVar12,puVar18);
  }
  else if (*(char *)(lVar24 + 0x4a) == '\0') {
    auVar35 = (*pcVar29)(lVar24);
  }
  else {
code_r0x01560ac4:
    auVar35 = (*pcVar29)(plVar12,lVar24);
  }
code_r0x01560ad0:
  uVar15 = auVar35._8_8_;
  lVar9 = lVar9 + 1;
  if (lVar9 == lVar30) {
    return auVar35._0_8_;
  }
  goto code_r0x01560a04;
  while( true ) {
    plVar12 = *(long **)(unaff_x22 + uVar10 * 8);
    if ((plVar12 != (long *)0x0) &&
       (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar12 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x01514fec;
    /*Atlas.UI.UIAtlasButton$$remove_Selected*/ func_0x01514244(lVar9);
    uVar10 = uVar10 + 1;
    uVar23 = (ulong)*(uint *)(uVar16 + 0x18);
    if ((long)(int)*(uint *)(uVar16 + 0x18) <= (long)uVar10) break;
code_r0x01514e38:
    if (uVar23 <= uVar10) goto code_r0x01514fe0;
  }
code_r0x01514e70:
  plVar12 = *(long **)(lVar9 + 0x150);
  if (plVar12 == (long *)0x0) {
code_r0x01514ee4:
    plVar12 = *(long **)(lVar9 + 0x158);
    if (plVar12 != (long *)0x0) {
      uVar16 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
      if (uVar16 == 0) goto code_r0x01514ff8;
      uVar11 = uVar16;
      if (0 < (int)*(ulong *)(uVar16 + 0x18)) {
        uVar10 = 0;
        uVar23 = *(ulong *)(uVar16 + 0x18) & 0xffffffff;
        unaff_x22 = uVar16 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar23 <= uVar10) goto code_r0x01514fe0;
          plVar12 = *(long **)(unaff_x22 + uVar10 * 8);
          if ((plVar12 != (long *)0x0) &&
             (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar12 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Pressed*/ func_0x015144d4(lVar9);
          uVar10 = uVar10 + 1;
          uVar23 = (ulong)*(uint *)(uVar16 + 0x18);
        } while ((long)uVar10 < (long)(int)*(uint *)(uVar16 + 0x18));
      }
    }
    plVar12 = *(long **)(lVar9 + 0x160);
    if (plVar12 == (long *)0x0) {
      return 0;
    }
    uVar16 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
    if (uVar16 != 0) {
      if ((int)*(ulong *)(uVar16 + 0x18) < 1) {
        return uVar16;
      }
      uVar10 = 0;
      uVar11 = *(ulong *)(uVar16 + 0x18) & 0xffffffff;
      unaff_x22 = uVar16 + 0x20;
      while (uVar10 < uVar11) {
        plVar12 = *(long **)(unaff_x22 + uVar10 * 8);
        if ((plVar12 != (long *)0x0) &&
           (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar12 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x01514fec;
        uVar23 = /*Atlas.UI.UIAtlasButton$$remove_SelectedOrPressed*/ func_0x0151461c(lVar9);
        uVar10 = uVar10 + 1;
        uVar11 = (ulong)*(uint *)(uVar16 + 0x18);
        if ((long)(int)*(uint *)(uVar16 + 0x18) <= (long)uVar10) {
          return uVar23;
        }
      }
code_r0x01514fe0:
      uVar14 = func_0x00f78b24();
      func_0x00f78ac0(uVar14,0);
      plVar12 = extraout_x1;
      lVar30 = extraout_x8;
code_r0x01514fec:
      unaff_x23 = 0x3d1fa78;
      func_0x00f78e5c(plVar12,lVar30);
      uVar11 = uVar16;
    }
  }
  else {
    uVar16 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
    if (uVar16 != 0) {
      uVar11 = uVar16;
      if (0 < (int)*(ulong *)(uVar16 + 0x18)) {
        uVar10 = 0;
        uVar23 = *(ulong *)(uVar16 + 0x18) & 0xffffffff;
        unaff_x22 = uVar16 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar23 <= uVar10) goto code_r0x01514fe0;
          plVar12 = *(long **)(unaff_x22 + uVar10 * 8);
          if ((plVar12 != (long *)0x0) &&
             (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar12 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Deselected*/ func_0x0151438c(lVar9);
          uVar10 = uVar10 + 1;
          uVar23 = (ulong)*(uint *)(uVar16 + 0x18);
        } while ((long)uVar10 < (long)(int)*(uint *)(uVar16 + 0x18));
      }
      goto code_r0x01514ee4;
    }
  }
code_r0x01514ff8:
  auVar35 = func_0x00f78af4();
  uVar14 = auVar35._8_8_;
  *(long *)((long)register0x00000008 + -0x150) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x148) = uVar10;
  *(ulong *)((long)register0x00000008 + -0x140) = uVar11;
  *(long *)((long)register0x00000008 + -0x138) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x130) =
       (undefined1 *)((long)register0x00000008 + -0xf0);
  *(undefined **)((long)register0x00000008 + -0x128) = &Atlas_UI_UIAtlasButtonGroup__Subscribe;
  if ((bRam0000000003eb4da9 & 1) == 0) {
    func_0x00f78a20(0x3d3c5b8);
    func_0x00f78a20(0x3d3c5c0);
    bRam0000000003eb4da9 = 1;
  }
  lVar9 = *(long *)(auVar35._0_8_ + 0x40);
  if (lVar9 != 0) {
    uVar10 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar9,uVar14,uRam0000000003d3c5c0);
    if ((uVar10 & 1) != 0) {
      return uVar10;
    }
    uVar10 = *(ulong *)(auVar35._0_8_ + 0x40);
    if (uVar10 != 0) {
      uVar27 = *(undefined8 *)((long)register0x00000008 + -0x140);
      uVar11 = *(ulong *)((long)register0x00000008 + -0x138);
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x150);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0x148);
      *(undefined8 *)((long)register0x00000008 + -0x140) = uVar27;
      *(ulong *)((long)register0x00000008 + -0x138) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0x130) =
           *(undefined8 *)((long)register0x00000008 + -0x130);
      *(undefined8 *)((long)register0x00000008 + -0x128) =
           *(undefined8 *)((long)register0x00000008 + -0x128);
      lVar9 = *(long *)(uVar10 + 0x10);
      puVar18 = puRam0000000003d3c5b8;
      if (lVar9 == 0) {
code_r0x0242716c:
        uVar14 = uVar27;
        uVar10 = uVar11;
        uVar16 = func_0x00f78af4();
        lVar9 = extraout_x9;
        uVar21 = extraout_w8;
code_r0x02427170:
        *(uint *)(uVar10 + 0x18) = uVar21 + 1;
      }
      else {
        uVar21 = *(uint *)(uVar10 + 0x18);
        uVar16 = uVar10;
        if (uVar21 != *(uint *)(lVar9 + 0x18)) goto code_r0x02427170;
        puVar18 = *(undefined8 **)(*(long *)(puRam0000000003d3c5b8[3] + 0xc0) + 0x60);
        uVar16 = (*(code *)*puVar18)(uVar10,uVar21 + 1);
        lVar9 = *(long *)(uVar10 + 0x10);
        uVar21 = *(uint *)(uVar10 + 0x18);
        *(uint *)(uVar10 + 0x18) = uVar21 + 1;
        uVar11 = uVar10;
        uVar27 = uVar14;
        if (lVar9 == 0) goto code_r0x0242716c;
      }
      if (uVar21 < *(uint *)(lVar9 + 0x18)) {
        *(undefined8 *)(lVar9 + (long)(int)uVar21 * 8 + 0x20) = uVar14;
        *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
        return uVar16;
      }
      uVar27 = func_0x00f78b24();
      auVar35 = func_0x00f78ac0(uVar27,0);
      lVar30 = auVar35._8_8_;
      lVar9 = auVar35._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0x180) = 0x3d5a000;
      *(ulong *)((long)register0x00000008 + -0x178) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x170) = uVar20;
      *(undefined8 *)((long)register0x00000008 + -0x168) = uVar15;
      *(undefined8 *)((long)register0x00000008 + -0x160) = uVar14;
      *(ulong *)((long)register0x00000008 + -0x158) = uVar10;
      *(undefined1 **)((long)register0x00000008 + -0x150) =
           (undefined1 *)((long)register0x00000008 + -0x130);
      *(undefined **)((long)register0x00000008 + -0x148) =
           &System_Collections_Generic_List_object___System_Collections_IList_Add;
      (*(code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x48))(lVar30,0x14);
      if (lVar9 == 0) {
        func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
        pcVar29 = (code *)SoftwareBreakpoint(1,0x2427350);
        (*pcVar29)();
      }
      pcVar29 = (code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x28);
      lVar24 = *(long *)(*(long *)(puVar18[3] + 0xc0) + 0x38);
      if ((*(ushort *)(lVar24 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar24);
      }
      if (lVar30 == 0) {
        lVar25 = 0;
      }
      else {
        lVar25 = func_0x00f78adc(lVar30,lVar24);
        if (lVar25 == 0) {
          func_0x00f78e5c(lVar30,lVar24);
          goto code_r0x0242734c;
        }
      }
      (*pcVar29)(lVar9,lVar25,*(undefined8 *)(*(long *)(puVar18[3] + 0xc0) + 0x28));
      iVar8 = (*(code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x68))(lVar9);
      return (ulong)(iVar8 - 1);
    }
  }
  auVar34 = func_0x00f78af4();
  lVar30 = auVar34._8_8_;
  lVar9 = auVar34._0_8_;
  *(long *)((long)register0x00000008 + -0x180) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x178) = 0x3eb4000;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x170) = auVar35;
  *(undefined1 **)((long)register0x00000008 + -0x160) =
       (undefined1 *)((long)register0x00000008 + -0x130);
  *(undefined **)((long)register0x00000008 + -0x158) = &Atlas_UI_UIAtlasButton__OnPointerClick;
  if ((bRam0000000003eb4d9d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d9d = 1;
  }
  uVar10 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(lVar9 + 0x16c),0);
  if ((int)uVar10 == 0) {
    return uVar10;
  }
  if (lVar30 != 0) {
    if (*(int *)(lVar30 + 0x134) != 0) {
      return uVar10;
    }
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(lVar9);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar9,lVar30,0);
    uVar14 = *(undefined8 *)(lVar9 + 0x118);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar14,0,0);
    if ((int)uVar10 == 0) {
      return uVar10;
    }
    bVar6 = false;
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x160);
    uVar15 = *(undefined8 *)((long)register0x00000008 + -0x158);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x170);
    uVar19 = *(undefined8 *)((long)register0x00000008 + -0x168);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x150);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x180);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x178);
    goto Atlas_UI_UIAtlasButton__SelectButton;
  }
  auVar35 = func_0x00f78af4();
  plVar13 = auVar35._8_8_;
  plVar12 = auVar35._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0x3d5a000;
  *(ulong *)((long)register0x00000008 + -0x1b8) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x1b0) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0x3eb4000;
  *(long *)((long)register0x00000008 + -0x1a0) = lVar9;
  *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
  *(undefined1 **)((long)register0x00000008 + -400) =
       (undefined1 *)((long)register0x00000008 + -0x160);
  *(undefined **)((long)register0x00000008 + -0x188) = &Atlas_UI_UIAtlasButton__OnSubmit;
  if ((bRam0000000003eb4d9e & 1) == 0) {
    func_0x00f78a20(0x3d21bd8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9e = 1;
  }
  uVar10 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)((long)plVar12 + 0x16c),0);
  if ((int)uVar10 == 0) {
    return uVar10;
  }
  if (plVar13 == (long *)0x0) {
    lVar9 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    unaff_x23 = 1;
  }
  else {
    if (*(byte *)(*plVar13 + 300) < *(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300)) {
      unaff_x23 = 1;
    }
    else {
      unaff_x23 = (ulong)(*(long *)(*(long *)(*plVar13 + 200) +
                                    (ulong)*(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300) * 8 + -8) !=
                         /*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8);
    }
    lVar9 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    if (*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) <= *(byte *)(*plVar13 + 300)) {
      unaff_x23 = (ulong)((uint)(*(long *)(*(long *)(*plVar13 + 200) +
                                           (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 + -8) !=
                                /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0) & (uint)unaff_x23);
    }
  }
  if ((int)unaff_x23 == 0) {
code_r0x015152e8:
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(plVar12);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(plVar12,plVar13,0);
    uVar10 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
    if (((int)uVar10 == 0) ||
       (uVar10 = (**(code **)(*plVar12 + 0x2b8))(plVar12,*(undefined8 *)(*plVar12 + 0x2c0)),
       (int)uVar10 == 0)) {
      return uVar10;
    }
    (**(code **)(*plVar12 + 0x2d8))(plVar12,2,0,*(undefined8 *)(*plVar12 + 0x2e0));
    puVar32 = &UNK_01515354;
    plVar17 = plVar12;
  }
  else {
    unaff_x23 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar9,0);
    if (iVar8 == 0) goto code_r0x015152e8;
    if (lVar9 != 0) {
      lVar9 = *(long *)(lVar9 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,plVar12,0);
      if ((uVar10 & 1) != 0) {
        return uVar10;
      }
      goto code_r0x015152e8;
    }
    puVar32 = &Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0;
    plVar17 = (long *)func_0x00f78af4();
  }
  *(long *)((long)register0x00000008 + -0x1f0) = lVar9;
  *(undefined8 *)((long)register0x00000008 + -0x1e8) = 1;
  *(long **)((long)register0x00000008 + -0x1e0) = plVar13;
  *(long **)((long)register0x00000008 + -0x1d8) = plVar12;
  *(undefined1 **)((long)register0x00000008 + -0x1d0) =
       (undefined1 *)((long)register0x00000008 + -400);
  *(undefined **)((long)register0x00000008 + -0x1c8) = puVar32;
  if ((bRam0000000003eb4da6 & 1) == 0) {
    func_0x00f78a20(0x3d29448);
    bRam0000000003eb4da6 = 1;
  }
  uVar10 = func_0x00f78aec(/*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d_TypeInfo*/ uRam0000000003d29448);
  /*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d$$.ctor*/ func_0x0156c5e4(uVar10,0,0);
  if (uVar10 != 0) {
    *(long **)(uVar10 + 0x20) = plVar17;
    return uVar10;
  }
  auVar34 = func_0x00f78af4();
  *(long *)((long)register0x00000008 + -0x220) = lVar9;
  *(undefined8 *)((long)register0x00000008 + -0x218) = 0x3d29448;
  *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
  *(long **)((long)register0x00000008 + -0x208) = plVar17;
  *(undefined1 **)((long)register0x00000008 + -0x200) =
       (undefined1 *)((long)register0x00000008 + -0x1d0);
  *(undefined **)((long)register0x00000008 + -0x1f8) = &Atlas_UI_UIAtlasButton__OnSelect;
  if ((bRam0000000003eb4d9f & 1) == 0) {
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9f = 1;
  }
  uVar10 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(auVar34._0_8_ + 0x16c),0);
  if ((int)uVar10 == 0) {
    return uVar10;
  }
  if (auVar34._8_8_ == (long *)0x0) {
code_r0x0151546c:
    bVar6 = false;
  }
  else {
    lVar9 = *auVar34._8_8_;
    if (*(byte *)(lVar9 + 300) < *(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300)) goto code_r0x0151546c;
    bVar6 = *(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 + -8
                     ) == /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0;
  }
  iVar8 = /*Core.Input.InputManager$$get_IsCurrentSelectionFromUser*/ func_0x0164ad7c(0);
  if ((iVar8 != 0) && (!bVar6)) {
    /*Atlas.UI.UIAtlasButton$$PlayButtonSelectSound*/ func_0x01514cec(auVar34._0_8_);
  }
  uVar14 = *(undefined8 *)((long)register0x00000008 + -0x200);
  uVar15 = *(undefined8 *)((long)register0x00000008 + -0x1f8);
  uVar27 = *(undefined8 *)((long)register0x00000008 + -0x210);
  uVar19 = *(undefined8 *)((long)register0x00000008 + -0x208);
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x1f0);
  uVar20 = *(undefined8 *)((long)register0x00000008 + -0x220);
  uVar28 = *(undefined8 *)((long)register0x00000008 + -0x218);
Atlas_UI_UIAtlasButton__SelectButton:
  uVar10 = auVar34._0_8_;
  *(undefined8 *)(puVar5 + -0x30) = uVar20;
  *(undefined8 *)(puVar5 + -0x28) = uVar28;
  *(undefined8 *)(puVar5 + -0x20) = uVar27;
  *(undefined8 *)(puVar5 + -0x18) = uVar19;
  *(undefined8 *)(puVar5 + -0x10) = uVar14;
  *(undefined8 *)(puVar5 + -8) = uVar15;
  puVar31 = puVar5 + -0x10;
  uVar14 = 0;
  if ((*(char *)(uVar10 + 0x140) != '\0') && (bVar6)) {
    return uVar10;
  }
  /*UnityEngine.UI.Selectable$$OnSelect*/ func_0x032e4efc(uVar10,auVar34._8_8_,0);
  if (*(long *)(uVar10 + 0x118) != 0) {
    /*Atlas.UI.UIAtlasButtonGroup$$OnButtonSelected*/ func_0x01514894(*(long *)(uVar10 + 0x118),uVar10,auVar34._8_8_);
  }
  uVar11 = *(ulong *)(uVar10 + 0x148);
  if (uVar11 == 0) {
    uVar11 = *(ulong *)(uVar10 + 0x160);
    if (uVar11 == 0) {
      return 0;
    }
    puVar31 = *(undefined1 **)(puVar5 + -0x10);
    puVar32 = *(undefined **)(puVar5 + -8);
    uVar14 = *(undefined8 *)(puVar5 + -0x20);
    uVar20 = *(undefined8 *)(puVar5 + -0x30);
    auVar34._8_8_ = *(undefined8 *)(puVar5 + -0x28);
    auVar34._0_8_ = *(undefined8 *)(puVar5 + -0x18);
  }
  else {
    puVar32 = &UNK_01514868;
    puVar5 = puVar5 + -0x30;
  }
  uVar27 = 0;
  *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x48) = 0x3d2a000;
  *(undefined8 *)(puVar5 + -0x40) = 0x3d5a000;
  *(ulong *)(puVar5 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x30) = uVar20;
  *(long *)(puVar5 + -0x28) = auVar34._8_8_;
  *(undefined8 *)(puVar5 + -0x20) = uVar14;
  *(long *)(puVar5 + -0x18) = auVar34._0_8_;
  *(undefined1 **)(puVar5 + -0x10) = puVar31;
  *(undefined **)(puVar5 + -8) = puVar32;
  *(ulong *)(puVar5 + -0x58) = uVar11;
  lVar9 = *(long *)(uVar11 + 0x68);
  if (lVar9 == 0) {
    puVar5 = puVar5 + -0x58;
    lVar30 = 1;
  }
  else {
    lVar30 = *(long *)(lVar9 + 0x18);
    if (lVar30 == 0) {
      return uVar11;
    }
    puVar5 = (undefined1 *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar24 = *(long *)(puVar5 + lVar9 * 8);
    pcVar29 = *(code **)(lVar24 + 0x10);
    plVar12 = *(long **)(lVar24 + 0x20);
    lVar24 = *(long *)(lVar24 + 0x28);
    if (*(short *)(lVar24 + 0x48) == -1) {
      func_0x00f78ad8(lVar24,uVar27);
    }
    iVar8 = func_0x00f78a4c(lVar24);
    if (iVar8 == 0) {
      if ((((plVar12 == (long *)0x0) || (*(short *)(lVar24 + 0x48) == -1)) ||
          ((*(byte *)(*plVar12 + 0x115) & 1) != 0)) || (*(long *)(uVar11 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar8 = func_0x00f78a44(lVar24);
      iVar7 = func_0x00f78ec0(lVar24);
      if (iVar8 == 0) {
        uVar3 = *(ushort *)(lVar24 + 0x48);
        if (iVar7 == 0) {
          lVar24 = *plVar12 + (ulong)uVar3 * 0x10;
          auVar35 = (**(code **)(lVar24 + 0x138))(plVar12,*(undefined8 *)(lVar24 + 0x140));
          goto code_r0x02924da4;
        }
        lVar24 = func_0x00f78a48(lVar24);
        lVar25 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar25 + 0x12a);
        if (uVar10 != 0) {
          piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar24) {
              puVar18 = (undefined8 *)(lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar26 = piVar26 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar18 = (undefined8 *)func_0x00fac1f0(plVar12,lVar24,(ulong)uVar3);
code_r0x02924e68:
        pcVar29 = (code *)*puVar18;
        puVar18 = (undefined8 *)puVar18[1];
      }
      else {
        if (iVar7 == 0) {
          uVar14 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar25 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar25 + 0x12a);
          if (uVar10 != 0) {
            piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)(lVar24 + 0x18)) {
                lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar24 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar26 = piVar26 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          lVar25 = func_0x00fac1f0(plVar12);
code_r0x02924e40:
          uVar14 = *(undefined8 *)(lVar25 + 8);
        }
        puVar18 = (undefined8 *)func_0x00f78acc(uVar14,lVar24);
        pcVar29 = (code *)*puVar18;
      }
      auVar35 = (*pcVar29)(plVar12,puVar18);
    }
    else if (*(char *)(lVar24 + 0x4a) == '\0') {
      auVar35 = (*pcVar29)(lVar24);
    }
    else {
code_r0x02924d98:
      auVar35 = (*pcVar29)(plVar12,lVar24);
    }
code_r0x02924da4:
    uVar27 = auVar35._8_8_;
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar30) {
      return auVar35._0_8_;
    }
  } while( true );
code_r0x0149cbac:
  uVar10 = *(ulong *)(lVar9 + 0x10);
  if (uVar10 == 0) {
    return 0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x138) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x118) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x110) =
       *(undefined8 *)((long)register0x00000008 + -0x110);
  *(undefined8 *)((long)register0x00000008 + -0x108) =
       *(undefined8 *)((long)register0x00000008 + -0x108);
  *(undefined8 *)((long)register0x00000008 + -0x100) =
       *(undefined8 *)((long)register0x00000008 + -0x100);
  *(undefined8 *)((long)register0x00000008 + -0xf8) =
       *(undefined8 *)((long)register0x00000008 + -0xf8);
  *(undefined8 *)((long)register0x00000008 + -0xf0) =
       *(undefined8 *)((long)register0x00000008 + -0xf0);
  *(undefined8 *)((long)register0x00000008 + -0xe8) =
       *(undefined8 *)((long)register0x00000008 + -0xe8);
  *(ulong *)((long)register0x00000008 + -0x148) = uVar10;
  *(int *)((long)register0x00000008 + -0x14c) = iVar8;
  lVar9 = *(long *)(uVar10 + 0x68);
  if (lVar9 == 0) {
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x148);
    lVar30 = 1;
  }
  else {
    lVar30 = *(long *)(lVar9 + 0x18);
    if (lVar30 == 0) {
      return uVar10;
    }
    puVar5 = (undefined1 *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar24 = *(long *)(puVar5 + lVar9 * 8);
    pcVar29 = *(code **)(lVar24 + 0x10);
    plVar12 = *(long **)(lVar24 + 0x20);
    lVar24 = *(long *)(lVar24 + 0x28);
    if (*(short *)(lVar24 + 0x48) == -1) {
      func_0x00f78ad8(lVar24);
    }
    iVar8 = func_0x00f78a4c(lVar24);
    if (iVar8 == 0) {
      if (plVar12 == (long *)0x0) {
        uVar11 = (*pcVar29)((undefined1 *)((long)register0x00000008 + -0x15c),unaff_x19,lVar24);
      }
      else {
        if (((*(short *)(lVar24 + 0x48) == -1) || ((*(byte *)(*plVar12 + 0x115) & 1) != 0)) ||
           (*(long *)(uVar10 + 0x18) == 0)) goto code_r0x01560784;
        iVar8 = func_0x00f78a44(lVar24);
        iVar7 = func_0x00f78ec0(lVar24);
        if (iVar8 == 0) {
          uVar3 = *(ushort *)(lVar24 + 0x48);
          if (iVar7 == 0) {
            lVar24 = *plVar12 + (ulong)uVar3 * 0x10;
            uVar11 = (**(code **)(lVar24 + 0x138))
                               (plVar12,*(undefined4 *)((long)register0x00000008 + -0x14c),unaff_x19
                                ,*(undefined8 *)(lVar24 + 0x140));
            goto code_r0x015607ac;
          }
          lVar24 = func_0x00f78a48(lVar24);
          uVar1 = *(undefined4 *)((long)register0x00000008 + -0x14c);
          lVar25 = *plVar12;
          uVar11 = (ulong)*(ushort *)(lVar25 + 0x12a);
          if (uVar11 != 0) {
            piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == lVar24) {
                puVar18 = (undefined8 *)
                          (lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
                goto code_r0x01560884;
              }
              piVar26 = piVar26 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar18 = (undefined8 *)func_0x00fac1f0(plVar12,lVar24,(ulong)uVar3);
code_r0x01560884:
          pcVar29 = (code *)*puVar18;
          puVar18 = (undefined8 *)puVar18[1];
        }
        else {
          uVar1 = *(undefined4 *)((long)register0x00000008 + -0x14c);
          if (iVar7 == 0) {
            uVar14 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar25 = *plVar12;
            uVar11 = (ulong)*(ushort *)(lVar25 + 0x12a);
            if (uVar11 != 0) {
              piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == *(long *)(lVar24 + 0x18)) {
                  lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar24 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01560854;
                }
                piVar26 = piVar26 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            lVar25 = func_0x00fac1f0(plVar12);
code_r0x01560854:
            uVar14 = *(undefined8 *)(lVar25 + 8);
          }
          puVar18 = (undefined8 *)func_0x00f78acc(uVar14,lVar24);
          pcVar29 = (code *)*puVar18;
        }
        uVar11 = (*pcVar29)(plVar12,uVar1,unaff_x19,puVar18);
      }
    }
    else if (*(char *)(lVar24 + 0x4a) == '\x02') {
      uVar11 = (*pcVar29)(*(undefined4 *)((long)register0x00000008 + -0x14c),unaff_x19,lVar24);
    }
    else {
code_r0x01560784:
      uVar11 = (*pcVar29)(plVar12,*(undefined4 *)((long)register0x00000008 + -0x14c),unaff_x19,
                          lVar24);
    }
code_r0x015607ac:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar30) {
      return uVar11;
    }
  } while( true );
}



// ============================================================
// RVA: 0x149cc70 | Atlas.UI.Screens.MultiplayerModeSelectScreen.JoinRoomPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x0149ccdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149ca90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01514864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01515350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cb98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cc50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0149cad4) */
/* WARNING: Removing unreachable block (ram,0x0149cae4) */
/* WARNING: Removing unreachable block (ram,0x0149caec) */
/* WARNING: Removing unreachable block (ram,0x0149cab4) */
/* WARNING: Removing unreachable block (ram,0x0149cac4) */
/* WARNING: Removing unreachable block (ram,0x0149cacc) */
/* WARNING: Removing unreachable block (ram,0x0149ca94) */
/* WARNING: Removing unreachable block (ram,0x0149caa4) */
/* WARNING: Removing unreachable block (ram,0x0149caac) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01515354) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_MultiplayerModeSelectScreen__JoinRoomPressed
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *extraout_x1;
  uint extraout_w8;
  uint uVar20;
  ulong *puVar21;
  ulong uVar22;
  long extraout_x8;
  long lVar23;
  long lVar24;
  long extraout_x9;
  int *piVar25;
  undefined8 unaff_x19;
  undefined8 uVar26;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar27;
  undefined8 uVar28;
  long unaff_x22;
  code *pcVar29;
  ulong unaff_x23;
  long lVar30;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar31;
  undefined *puVar32;
  float fVar33;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined8 unaff_d9;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  do {
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = 0x3eb4000;
    uVar27 = 0x3d411e0;
    uVar19 = param_6;
    if ((bRam0000000003eb4a06 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79020);
      bRam0000000003eb4a06 = 1;
      uVar19 = param_6;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d411e0);
    if (lVar10 != 0) {
      uVar19 = 0x3d79020;
      uVar11 = *(ulong *)(lVar10 + 0x20);
      if (uVar11 != 0) {
        uVar31 = 0x149cce0;
        goto code_r0x015609bc;
      }
      puVar6 = *(undefined1 **)((long)register0x00000008 + -0x10);
      puVar32 = *(undefined **)((long)register0x00000008 + -8);
      uVar19 = *(undefined8 *)((long)register0x00000008 + -0x18);
      unaff_x22 = *(long *)((long)register0x00000008 + -0x30);
      auVar35 = *(undefined1 (*) [16])((long)register0x00000008 + -0x28);
      puVar5 = (undefined1 *)register0x00000008;
      uVar11 = /*STR('event:/UI/Front_End/GeneralButton4')*/ uRam0000000003d79020;
      goto code_r0x0151398c;
    }
    uVar27 = func_0x00f78af4();
    *(long *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3d411e0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x48) = param_4;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -0x38) =
         &Atlas_UI_Screens_MultiplayerModeSelectScreen__OnPartyInvite;
    if ((bRam0000000003eb4a07 & 1) == 0) {
      func_0x00f78a20(0x3d3e0d8);
      func_0x00f78a20(0x3d3e130);
      func_0x00f78a20(0x3d3e178);
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d411e8);
      bRam0000000003eb4a07 = 1;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar27,uRam0000000003d411e8);
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0xa0) != 0)) {
      uVar11 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar10 + 0xa0),uRam0000000003d3e0d8);
      if ((uVar11 & 1) != 0) {
        return uVar11;
      }
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar27,uRam0000000003d411e8);
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0xe0) != 0)) {
        uVar11 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar10 + 0xe0),uRam0000000003d3e130);
        if ((uVar11 & 1) != 0) {
          return uVar11;
        }
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar27,uRam0000000003d411e8);
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0x98) != 0)) {
          uVar11 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar10 + 0x98),uRam0000000003d3e178);
          if ((uVar11 & 1) != 0) {
            return uVar11;
          }
          lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar27,uRam0000000003d411e0);
          if (lVar10 != 0) {
            uVar11 = *(ulong *)(lVar10 + 0x20);
            if (uVar11 == 0) {
              return 0;
            }
            unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x40);
            uVar31 = *(undefined8 *)((long)register0x00000008 + -0x38);
            unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x50);
            uVar19 = *(undefined8 *)((long)register0x00000008 + -0x48);
            puVar4 = (undefined1 *)((long)register0x00000008 + -0x30);
            unaff_x22 = *(long *)((long)register0x00000008 + -0x60);
            uVar27 = *(undefined8 *)((long)register0x00000008 + -0x58);
            goto code_r0x015609bc;
          }
        }
      }
    }
    uVar31 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x98) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3d411e8;
    *(undefined8 *)((long)register0x00000008 + -0x78) = uVar27;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(code **)((long)register0x00000008 + -0x68) =
         Atlas_UI_Screens_MultiplayerModeSelectScreen__OnBeforeExit;
    uVar27 = 0x3eb4000;
    uVar11 = 0x3d411e8;
    if ((bRam0000000003eb4a03 & 1) == 0) {
      func_0x00f78a20(0x3d2a320);
      func_0x00f78a20(0x3d1b598);
      func_0x00f78a20(0x3d2c840);
      func_0x00f78a20(0x3d5a9e8);
      func_0x00f78a20(0x3d411d8);
      func_0x00f78a20(0x3d411e8);
      bRam0000000003eb4a03 = 1;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar31,uRam0000000003d411e8);
    if ((lVar10 == 0) || (unaff_x22 = *(long *)(lVar10 + 0x28), unaff_x22 == 0)) {
LAB_0149cb08:
      func_0x00f78af4();
    }
    else {
      unaff_x23 = 0x3d1b598;
      unaff_x24 = 0x3d5a000;
      unaff_x25 = 0x3d2a000;
      uVar27 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar11 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar11,uVar31,uRam0000000003d5a9e8,uRam0000000003d2a320);
      uVar19 = 0;
      plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar27,uVar11);
      if ((plVar13 == (long *)0x0) || (*plVar13 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
        uVar27 = 0x3d411d8;
        *(long **)(unaff_x22 + 0x48) = plVar13;
        uVar19 = uRam0000000003d2c840;
        Atlas_UI_Screens_AtlasScreen_ModeSelectScreenBehaviour__ModeSelectScreen_TransitionData___SetScreenHandlePartyInvite
                  (uVar31,0);
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar31,uRam0000000003d411d8);
        if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x68), lVar10 == 0)) goto LAB_0149cb08;
        *(undefined8 *)((long)register0x00000008 + -0xf0) = 0x3d5a000;
        *(undefined8 *)((long)register0x00000008 + -0xe8) = 0x3d1b598;
        *(long *)((long)register0x00000008 + -0xe0) = unaff_x22;
        *(ulong *)((long)register0x00000008 + -0xd8) = uVar11;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x3d411d8;
        *(undefined8 *)((long)register0x00000008 + -200) = uVar31;
        *(undefined1 **)((long)register0x00000008 + -0xc0) =
             (undefined1 *)((long)register0x00000008 + -0x70);
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x149ca94;
        if ((bRam0000000003eb4d9b & 1) == 0) {
          func_0x00f78a20(0x3d1fa78,0);
          bRam0000000003eb4d9b = 1;
        }
        plVar13 = *(long **)(lVar10 + 0x148);
        uVar12 = 0x3eb4000;
        if (plVar13 == (long *)0x0) goto code_r0x01514e70;
        uVar15 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
        if (uVar15 == 0) goto code_r0x01514ff8;
        uVar12 = uVar15;
        if ((int)*(ulong *)(uVar15 + 0x18) < 1) goto code_r0x01514e70;
        uVar11 = 0;
        uVar22 = *(ulong *)(uVar15 + 0x18) & 0xffffffff;
        unaff_x22 = uVar15 + 0x20;
        unaff_x23 = 0x3d1fa78;
        break;
      }
    }
    auVar35 = func_0x00f78e5c();
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xe0);
    *(long *)((long)register0x00000008 + -0xe0) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0xd8) = uVar11;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar27;
    *(undefined8 *)((long)register0x00000008 + -200) = uVar31;
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(code **)((long)register0x00000008 + -0xb8) =
         Atlas_UI_Screens_MultiplayerModeSelectScreen__GameTypePressed;
    puVar6 = (undefined1 *)((long)register0x00000008 + -0xc0);
    param_6 = uVar19;
    if ((bRam0000000003eb4a04 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79018);
      func_0x00f78a20(0x3d79020);
      bRam0000000003eb4a04 = 1;
    }
    unaff_x22 = 0x3d411e0;
    iVar9 = auVar35._8_4_;
    if (iVar9 == 1) {
      puVar21 = (ulong *)0x3d79018;
LAB_0149cb90:
      uVar11 = *puVar21;
      puVar32 = &LAB_0149cb9c;
      goto code_r0x0151398c;
    }
    if (iVar9 == 2) {
      puVar21 = (ulong *)0x3d79020;
      goto LAB_0149cb90;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(auVar35._0_8_,uRam0000000003d411e0);
    if (lVar10 != 0) {
      uVar11 = *(ulong *)(lVar10 + 0x10);
      if (uVar11 == 0) {
        return 0;
      }
      *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x108) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0xf8) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0xe8) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0xe0) =
           *(undefined8 *)((long)register0x00000008 + -0xe0);
      *(undefined8 *)((long)register0x00000008 + -0xd8) =
           *(undefined8 *)((long)register0x00000008 + -0xd8);
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -200);
      *(undefined8 *)((long)register0x00000008 + -0xc0) =
           *(undefined8 *)((long)register0x00000008 + -0xc0);
      *(undefined8 *)((long)register0x00000008 + -0xb8) =
           *(undefined8 *)((long)register0x00000008 + -0xb8);
      *(ulong *)((long)register0x00000008 + -0x118) = uVar11;
      *(int *)((long)register0x00000008 + -0x11c) = iVar9;
      lVar10 = *(long *)(uVar11 + 0x68);
      if (lVar10 == 0) {
        puVar6 = (undefined1 *)((long)register0x00000008 + -0x118);
        lVar30 = 1;
      }
      else {
        lVar30 = *(long *)(lVar10 + 0x18);
        if (lVar30 == 0) {
          return uVar11;
        }
        puVar6 = (undefined1 *)(lVar10 + 0x20);
      }
      lVar10 = 0;
      goto code_r0x015606b4;
    }
    unaff_x19 = func_0x00f78af4();
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0x3d411e0;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x108) = auVar35;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar19;
    *(undefined1 **)((long)register0x00000008 + -0xf0) = puVar6;
    *(code **)((long)register0x00000008 + -0xe8) =
         Atlas_UI_Screens_MultiplayerModeSelectScreen__CreateRoomPressed;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xf0);
    unaff_x20 = 0x3eb4000;
    unaff_x21 = 0x3d411e0;
    uVar27 = 0x3d411e0;
    if ((bRam0000000003eb4a05 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79018);
      bRam0000000003eb4a05 = 1;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(unaff_x19,uRam0000000003d411e0);
    if (lVar10 != 0) goto code_r0x0149cc3c;
    unaff_x30 = Atlas_UI_Screens_MultiplayerModeSelectScreen__JoinRoomPressed;
    param_4 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  } while( true );
  while( true ) {
    plVar13 = *(long **)(unaff_x22 + uVar11 * 8);
    if ((plVar13 != (long *)0x0) &&
       (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar13 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x01514fec;
    /*Atlas.UI.UIAtlasButton$$remove_Selected*/ func_0x01514244(lVar10);
    uVar11 = uVar11 + 1;
    uVar22 = (ulong)*(uint *)(uVar15 + 0x18);
    if ((long)(int)*(uint *)(uVar15 + 0x18) <= (long)uVar11) break;
    if (uVar22 <= uVar11) goto code_r0x01514fe0;
  }
code_r0x01514e70:
  plVar13 = *(long **)(lVar10 + 0x150);
  if (plVar13 == (long *)0x0) {
code_r0x01514ee4:
    plVar13 = *(long **)(lVar10 + 0x158);
    if (plVar13 != (long *)0x0) {
      uVar15 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
      if (uVar15 == 0) goto code_r0x01514ff8;
      uVar12 = uVar15;
      if (0 < (int)*(ulong *)(uVar15 + 0x18)) {
        uVar11 = 0;
        uVar22 = *(ulong *)(uVar15 + 0x18) & 0xffffffff;
        unaff_x22 = uVar15 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar22 <= uVar11) goto code_r0x01514fe0;
          plVar13 = *(long **)(unaff_x22 + uVar11 * 8);
          if ((plVar13 != (long *)0x0) &&
             (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar13 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Pressed*/ func_0x015144d4(lVar10);
          uVar11 = uVar11 + 1;
          uVar22 = (ulong)*(uint *)(uVar15 + 0x18);
        } while ((long)uVar11 < (long)(int)*(uint *)(uVar15 + 0x18));
      }
    }
    plVar13 = *(long **)(lVar10 + 0x160);
    if (plVar13 == (long *)0x0) {
      return 0;
    }
    uVar15 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
    if (uVar15 != 0) {
      if ((int)*(ulong *)(uVar15 + 0x18) < 1) {
        return uVar15;
      }
      uVar11 = 0;
      uVar12 = *(ulong *)(uVar15 + 0x18) & 0xffffffff;
      unaff_x22 = uVar15 + 0x20;
      while (uVar11 < uVar12) {
        plVar13 = *(long **)(unaff_x22 + uVar11 * 8);
        if ((plVar13 != (long *)0x0) &&
           (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar13 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x01514fec;
        uVar22 = /*Atlas.UI.UIAtlasButton$$remove_SelectedOrPressed*/ func_0x0151461c(lVar10);
        uVar11 = uVar11 + 1;
        uVar12 = (ulong)*(uint *)(uVar15 + 0x18);
        if ((long)(int)*(uint *)(uVar15 + 0x18) <= (long)uVar11) {
          return uVar22;
        }
      }
code_r0x01514fe0:
      uVar27 = func_0x00f78b24();
      func_0x00f78ac0(uVar27,0);
      plVar13 = extraout_x1;
      lVar30 = extraout_x8;
code_r0x01514fec:
      unaff_x23 = 0x3d1fa78;
      func_0x00f78e5c(plVar13,lVar30);
      uVar12 = uVar15;
    }
  }
  else {
    uVar15 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
    if (uVar15 != 0) {
      uVar12 = uVar15;
      if (0 < (int)*(ulong *)(uVar15 + 0x18)) {
        uVar11 = 0;
        uVar22 = *(ulong *)(uVar15 + 0x18) & 0xffffffff;
        unaff_x22 = uVar15 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar22 <= uVar11) goto code_r0x01514fe0;
          plVar13 = *(long **)(unaff_x22 + uVar11 * 8);
          if ((plVar13 != (long *)0x0) &&
             (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar13 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Deselected*/ func_0x0151438c(lVar10);
          uVar11 = uVar11 + 1;
          uVar22 = (ulong)*(uint *)(uVar15 + 0x18);
        } while ((long)uVar11 < (long)(int)*(uint *)(uVar15 + 0x18));
      }
      goto code_r0x01514ee4;
    }
  }
code_r0x01514ff8:
  auVar35 = func_0x00f78af4();
  uVar27 = auVar35._8_8_;
  *(long *)((long)register0x00000008 + -0x120) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x118) = uVar11;
  *(ulong *)((long)register0x00000008 + -0x110) = uVar12;
  *(long *)((long)register0x00000008 + -0x108) = lVar10;
  *(undefined1 **)((long)register0x00000008 + -0x100) =
       (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined **)((long)register0x00000008 + -0xf8) = &Atlas_UI_UIAtlasButtonGroup__Subscribe;
  if ((bRam0000000003eb4da9 & 1) == 0) {
    func_0x00f78a20(0x3d3c5b8);
    func_0x00f78a20(0x3d3c5c0);
    bRam0000000003eb4da9 = 1;
  }
  lVar10 = *(long *)(auVar35._0_8_ + 0x40);
  if (lVar10 != 0) {
    uVar11 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar10,uVar27,uRam0000000003d3c5c0);
    if ((uVar11 & 1) != 0) {
      return uVar11;
    }
    uVar11 = *(ulong *)(auVar35._0_8_ + 0x40);
    if (uVar11 != 0) {
      uVar19 = *(undefined8 *)((long)register0x00000008 + -0x110);
      uVar12 = *(ulong *)((long)register0x00000008 + -0x108);
      uVar31 = *(undefined8 *)((long)register0x00000008 + -0x120);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -0x118);
      *(undefined8 *)((long)register0x00000008 + -0x110) = uVar19;
      *(ulong *)((long)register0x00000008 + -0x108) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0x100) =
           *(undefined8 *)((long)register0x00000008 + -0x100);
      *(undefined8 *)((long)register0x00000008 + -0xf8) =
           *(undefined8 *)((long)register0x00000008 + -0xf8);
      lVar10 = *(long *)(uVar11 + 0x10);
      puVar17 = puRam0000000003d3c5b8;
      if (lVar10 == 0) {
code_r0x0242716c:
        uVar27 = uVar19;
        uVar11 = uVar12;
        uVar15 = func_0x00f78af4();
        lVar10 = extraout_x9;
        uVar20 = extraout_w8;
code_r0x02427170:
        *(uint *)(uVar11 + 0x18) = uVar20 + 1;
      }
      else {
        uVar20 = *(uint *)(uVar11 + 0x18);
        uVar15 = uVar11;
        if (uVar20 != *(uint *)(lVar10 + 0x18)) goto code_r0x02427170;
        puVar17 = *(undefined8 **)(*(long *)(puRam0000000003d3c5b8[3] + 0xc0) + 0x60);
        uVar15 = (*(code *)*puVar17)(uVar11,uVar20 + 1);
        lVar10 = *(long *)(uVar11 + 0x10);
        uVar20 = *(uint *)(uVar11 + 0x18);
        *(uint *)(uVar11 + 0x18) = uVar20 + 1;
        uVar12 = uVar11;
        uVar19 = uVar27;
        if (lVar10 == 0) goto code_r0x0242716c;
      }
      if (uVar20 < *(uint *)(lVar10 + 0x18)) {
        *(undefined8 *)(lVar10 + (long)(int)uVar20 * 8 + 0x20) = uVar27;
        *(int *)(uVar11 + 0x1c) = *(int *)(uVar11 + 0x1c) + 1;
        return uVar15;
      }
      uVar19 = func_0x00f78b24();
      auVar35 = func_0x00f78ac0(uVar19,0);
      lVar30 = auVar35._8_8_;
      lVar10 = auVar35._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0x150) = 0x3d5a000;
      *(ulong *)((long)register0x00000008 + -0x148) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x140) = uVar31;
      *(undefined8 *)((long)register0x00000008 + -0x138) = uVar18;
      *(undefined8 *)((long)register0x00000008 + -0x130) = uVar27;
      *(ulong *)((long)register0x00000008 + -0x128) = uVar11;
      *(undefined1 **)((long)register0x00000008 + -0x120) =
           (undefined1 *)((long)register0x00000008 + -0x100);
      *(undefined **)((long)register0x00000008 + -0x118) =
           &System_Collections_Generic_List_object___System_Collections_IList_Add;
      (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x48))(lVar30,0x14);
      if (lVar10 != 0) {
        pcVar29 = (code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x28);
        lVar23 = *(long *)(*(long *)(puVar17[3] + 0xc0) + 0x38);
        if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar23);
        }
        if (lVar30 == 0) {
          lVar24 = 0;
        }
        else {
          lVar24 = func_0x00f78adc(lVar30,lVar23);
          if (lVar24 == 0) {
            func_0x00f78e5c(lVar30,lVar23);
            goto code_r0x0242734c;
          }
        }
        (*pcVar29)(lVar10,lVar24,*(undefined8 *)(*(long *)(puVar17[3] + 0xc0) + 0x28));
        iVar9 = (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x68))(lVar10);
        return (ulong)(iVar9 - 1);
      }
      func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x2427350);
      (*pcVar29)();
    }
  }
  auVar34 = func_0x00f78af4();
  lVar30 = auVar34._8_8_;
  lVar10 = auVar34._0_8_;
  *(long *)((long)register0x00000008 + -0x150) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x148) = 0x3eb4000;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x140) = auVar35;
  *(undefined1 **)((long)register0x00000008 + -0x130) =
       (undefined1 *)((long)register0x00000008 + -0x100);
  *(undefined **)((long)register0x00000008 + -0x128) = &Atlas_UI_UIAtlasButton__OnPointerClick;
  if ((bRam0000000003eb4d9d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d9d = 1;
  }
  uVar11 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(lVar10 + 0x16c),0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (lVar30 != 0) {
    if (*(int *)(lVar30 + 0x134) != 0) {
      return uVar11;
    }
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(lVar10);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar10,lVar30,0);
    uVar27 = *(undefined8 *)(lVar10 + 0x118);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar27,0,0);
    if ((int)uVar11 == 0) {
      return uVar11;
    }
    bVar7 = false;
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x130);
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x128);
    uVar19 = *(undefined8 *)((long)register0x00000008 + -0x140);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x138);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x120);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x150);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x148);
    goto Atlas_UI_UIAtlasButton__SelectButton;
  }
  auVar35 = func_0x00f78af4();
  plVar14 = auVar35._8_8_;
  plVar13 = auVar35._0_8_;
  *(undefined8 *)((long)register0x00000008 + -400) = 0x3d5a000;
  *(ulong *)((long)register0x00000008 + -0x188) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x180) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x178) = 0x3eb4000;
  *(long *)((long)register0x00000008 + -0x170) = lVar10;
  *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x160) =
       (undefined1 *)((long)register0x00000008 + -0x130);
  *(undefined **)((long)register0x00000008 + -0x158) = &Atlas_UI_UIAtlasButton__OnSubmit;
  if ((bRam0000000003eb4d9e & 1) == 0) {
    func_0x00f78a20(0x3d21bd8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9e = 1;
  }
  uVar11 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)((long)plVar13 + 0x16c),0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (plVar14 == (long *)0x0) {
    lVar10 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    unaff_x23 = 1;
  }
  else {
    if (*(byte *)(*plVar14 + 300) < *(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300)) {
      unaff_x23 = 1;
    }
    else {
      unaff_x23 = (ulong)(*(long *)(*(long *)(*plVar14 + 200) +
                                    (ulong)*(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300) * 8 + -8) !=
                         /*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8);
    }
    lVar10 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    if (*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) <= *(byte *)(*plVar14 + 300)) {
      unaff_x23 = (ulong)((uint)(*(long *)(*(long *)(*plVar14 + 200) +
                                           (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 + -8) !=
                                /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0) & (uint)unaff_x23);
    }
  }
  if ((int)unaff_x23 == 0) {
code_r0x015152e8:
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(plVar13);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(plVar13,plVar14,0);
    uVar11 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
    if (((int)uVar11 == 0) ||
       (uVar11 = (**(code **)(*plVar13 + 0x2b8))(plVar13,*(undefined8 *)(*plVar13 + 0x2c0)),
       (int)uVar11 == 0)) {
      return uVar11;
    }
    (**(code **)(*plVar13 + 0x2d8))(plVar13,2,0,*(undefined8 *)(*plVar13 + 0x2e0));
    puVar32 = &UNK_01515354;
    plVar16 = plVar13;
  }
  else {
    unaff_x23 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar9 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar10,0);
    if (iVar9 == 0) goto code_r0x015152e8;
    if (lVar10 != 0) {
      lVar10 = *(long *)(lVar10 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,plVar13,0);
      if ((uVar11 & 1) != 0) {
        return uVar11;
      }
      goto code_r0x015152e8;
    }
    puVar32 = &Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0;
    plVar16 = (long *)func_0x00f78af4();
  }
  *(long *)((long)register0x00000008 + -0x1c0) = lVar10;
  *(undefined8 *)((long)register0x00000008 + -0x1b8) = 1;
  *(long **)((long)register0x00000008 + -0x1b0) = plVar14;
  *(long **)((long)register0x00000008 + -0x1a8) = plVar13;
  *(undefined1 **)((long)register0x00000008 + -0x1a0) =
       (undefined1 *)((long)register0x00000008 + -0x160);
  *(undefined **)((long)register0x00000008 + -0x198) = puVar32;
  if ((bRam0000000003eb4da6 & 1) == 0) {
    func_0x00f78a20(0x3d29448);
    bRam0000000003eb4da6 = 1;
  }
  uVar11 = func_0x00f78aec(/*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d_TypeInfo*/ uRam0000000003d29448);
  /*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d$$.ctor*/ func_0x0156c5e4(uVar11,0,0);
  if (uVar11 != 0) {
    *(long **)(uVar11 + 0x20) = plVar16;
    return uVar11;
  }
  auVar34 = func_0x00f78af4();
  *(long *)((long)register0x00000008 + -0x1f0) = lVar10;
  *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0x3d29448;
  *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
  *(long **)((long)register0x00000008 + -0x1d8) = plVar16;
  *(undefined1 **)((long)register0x00000008 + -0x1d0) =
       (undefined1 *)((long)register0x00000008 + -0x1a0);
  *(undefined **)((long)register0x00000008 + -0x1c8) = &Atlas_UI_UIAtlasButton__OnSelect;
  if ((bRam0000000003eb4d9f & 1) == 0) {
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9f = 1;
  }
  uVar11 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(auVar34._0_8_ + 0x16c),0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (auVar34._8_8_ == (long *)0x0) {
code_r0x0151546c:
    bVar7 = false;
  }
  else {
    lVar10 = *auVar34._8_8_;
    if (*(byte *)(lVar10 + 300) < *(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300)) goto code_r0x0151546c;
    bVar7 = *(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 +
                     -8) == /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0;
  }
  iVar9 = /*Core.Input.InputManager$$get_IsCurrentSelectionFromUser*/ func_0x0164ad7c(0);
  if ((iVar9 != 0) && (!bVar7)) {
    /*Atlas.UI.UIAtlasButton$$PlayButtonSelectSound*/ func_0x01514cec(auVar34._0_8_);
  }
  uVar27 = *(undefined8 *)((long)register0x00000008 + -0x1d0);
  uVar18 = *(undefined8 *)((long)register0x00000008 + -0x1c8);
  uVar19 = *(undefined8 *)((long)register0x00000008 + -0x1e0);
  uVar26 = *(undefined8 *)((long)register0x00000008 + -0x1d8);
  puVar6 = (undefined1 *)((long)register0x00000008 + -0x1c0);
  uVar31 = *(undefined8 *)((long)register0x00000008 + -0x1f0);
  uVar28 = *(undefined8 *)((long)register0x00000008 + -0x1e8);
Atlas_UI_UIAtlasButton__SelectButton:
  uVar11 = auVar34._0_8_;
  *(undefined8 *)(puVar6 + -0x30) = uVar31;
  *(undefined8 *)(puVar6 + -0x28) = uVar28;
  *(undefined8 *)(puVar6 + -0x20) = uVar19;
  *(undefined8 *)(puVar6 + -0x18) = uVar26;
  *(undefined8 *)(puVar6 + -0x10) = uVar27;
  *(undefined8 *)(puVar6 + -8) = uVar18;
  puVar5 = puVar6 + -0x10;
  uVar27 = 0;
  if ((*(char *)(uVar11 + 0x140) != '\0') && (bVar7)) {
    return uVar11;
  }
  /*UnityEngine.UI.Selectable$$OnSelect*/ func_0x032e4efc(uVar11,auVar34._8_8_,0);
  if (*(long *)(uVar11 + 0x118) != 0) {
    /*Atlas.UI.UIAtlasButtonGroup$$OnButtonSelected*/ func_0x01514894(*(long *)(uVar11 + 0x118),uVar11,auVar34._8_8_);
  }
  uVar12 = *(ulong *)(uVar11 + 0x148);
  if (uVar12 == 0) {
    uVar12 = *(ulong *)(uVar11 + 0x160);
    if (uVar12 == 0) {
      return 0;
    }
    puVar5 = *(undefined1 **)(puVar6 + -0x10);
    puVar32 = *(undefined **)(puVar6 + -8);
    uVar27 = *(undefined8 *)(puVar6 + -0x20);
    uVar31 = *(undefined8 *)(puVar6 + -0x30);
    auVar34._8_8_ = *(undefined8 *)(puVar6 + -0x28);
    auVar34._0_8_ = *(undefined8 *)(puVar6 + -0x18);
  }
  else {
    puVar32 = &UNK_01514868;
    puVar6 = puVar6 + -0x30;
  }
  uVar19 = 0;
  *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar6 + -0x48) = 0x3d2a000;
  *(undefined8 *)(puVar6 + -0x40) = 0x3d5a000;
  *(ulong *)(puVar6 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar6 + -0x30) = uVar31;
  *(long *)(puVar6 + -0x28) = auVar34._8_8_;
  *(undefined8 *)(puVar6 + -0x20) = uVar27;
  *(long *)(puVar6 + -0x18) = auVar34._0_8_;
  *(undefined1 **)(puVar6 + -0x10) = puVar5;
  *(undefined **)(puVar6 + -8) = puVar32;
  *(ulong *)(puVar6 + -0x58) = uVar12;
  lVar10 = *(long *)(uVar12 + 0x68);
  if (lVar10 == 0) {
    puVar6 = puVar6 + -0x58;
    lVar30 = 1;
  }
  else {
    lVar30 = *(long *)(lVar10 + 0x18);
    if (lVar30 == 0) {
      return uVar12;
    }
    puVar6 = (undefined1 *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar23 = *(long *)(puVar6 + lVar10 * 8);
    pcVar29 = *(code **)(lVar23 + 0x10);
    plVar13 = *(long **)(lVar23 + 0x20);
    lVar23 = *(long *)(lVar23 + 0x28);
    if (*(short *)(lVar23 + 0x48) == -1) {
      func_0x00f78ad8(lVar23,uVar19);
    }
    iVar9 = func_0x00f78a4c(lVar23);
    if (iVar9 == 0) {
      if ((((plVar13 == (long *)0x0) || (*(short *)(lVar23 + 0x48) == -1)) ||
          ((*(byte *)(*plVar13 + 0x115) & 1) != 0)) || (*(long *)(uVar12 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar9 = func_0x00f78a44(lVar23);
      iVar8 = func_0x00f78ec0(lVar23);
      if (iVar9 == 0) {
        uVar3 = *(ushort *)(lVar23 + 0x48);
        if (iVar8 == 0) {
          lVar23 = *plVar13 + (ulong)uVar3 * 0x10;
          auVar35 = (**(code **)(lVar23 + 0x138))(plVar13,*(undefined8 *)(lVar23 + 0x140));
          goto code_r0x02924da4;
        }
        lVar23 = func_0x00f78a48(lVar23);
        lVar24 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar24 + 0x12a);
        if (uVar11 != 0) {
          piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == lVar23) {
              puVar17 = (undefined8 *)(lVar24 + (long)(int)(*piVar25 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar25 = piVar25 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar17 = (undefined8 *)func_0x00fac1f0(plVar13,lVar23,(ulong)uVar3);
code_r0x02924e68:
        pcVar29 = (code *)*puVar17;
        puVar17 = (undefined8 *)puVar17[1];
      }
      else {
        if (iVar8 == 0) {
          uVar27 = *(undefined8 *)(*plVar13 + (ulong)*(ushort *)(lVar23 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar24 = *plVar13;
          uVar11 = (ulong)*(ushort *)(lVar24 + 0x12a);
          if (uVar11 != 0) {
            piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)(lVar23 + 0x18)) {
                lVar24 = lVar24 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar23 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar25 = piVar25 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar24 = func_0x00fac1f0(plVar13);
code_r0x02924e40:
          uVar27 = *(undefined8 *)(lVar24 + 8);
        }
        puVar17 = (undefined8 *)func_0x00f78acc(uVar27,lVar23);
        pcVar29 = (code *)*puVar17;
      }
      auVar35 = (*pcVar29)(plVar13,puVar17);
    }
    else if (*(char *)(lVar23 + 0x4a) == '\0') {
      auVar35 = (*pcVar29)(lVar23);
    }
    else {
code_r0x02924d98:
      auVar35 = (*pcVar29)(plVar13,lVar23);
    }
code_r0x02924da4:
    uVar19 = auVar35._8_8_;
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar30) {
      return auVar35._0_8_;
    }
  } while( true );
code_r0x015606b4:
  lVar23 = *(long *)(puVar6 + lVar10 * 8);
  pcVar29 = *(code **)(lVar23 + 0x10);
  plVar13 = *(long **)(lVar23 + 0x20);
  lVar23 = *(long *)(lVar23 + 0x28);
  if (*(short *)(lVar23 + 0x48) == -1) {
    func_0x00f78ad8(lVar23);
  }
  iVar9 = func_0x00f78a4c(lVar23);
  if (iVar9 == 0) {
    if (plVar13 == (long *)0x0) {
      uVar12 = (*pcVar29)((undefined1 *)((long)register0x00000008 + -300),uVar19,lVar23);
    }
    else {
      if (((*(short *)(lVar23 + 0x48) == -1) || ((*(byte *)(*plVar13 + 0x115) & 1) != 0)) ||
         (*(long *)(uVar11 + 0x18) == 0)) goto code_r0x01560784;
      iVar9 = func_0x00f78a44(lVar23);
      iVar8 = func_0x00f78ec0(lVar23);
      if (iVar9 == 0) {
        uVar3 = *(ushort *)(lVar23 + 0x48);
        if (iVar8 == 0) {
          lVar23 = *plVar13 + (ulong)uVar3 * 0x10;
          uVar12 = (**(code **)(lVar23 + 0x138))
                             (plVar13,*(undefined4 *)((long)register0x00000008 + -0x11c),uVar19,
                              *(undefined8 *)(lVar23 + 0x140));
          goto code_r0x015607ac;
        }
        lVar23 = func_0x00f78a48(lVar23);
        uVar1 = *(undefined4 *)((long)register0x00000008 + -0x11c);
        lVar24 = *plVar13;
        uVar12 = (ulong)*(ushort *)(lVar24 + 0x12a);
        if (uVar12 != 0) {
          piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == lVar23) {
              puVar17 = (undefined8 *)(lVar24 + (long)(int)(*piVar25 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x01560884;
            }
            piVar25 = piVar25 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar17 = (undefined8 *)func_0x00fac1f0(plVar13,lVar23,(ulong)uVar3);
code_r0x01560884:
        pcVar29 = (code *)*puVar17;
        puVar17 = (undefined8 *)puVar17[1];
      }
      else {
        uVar1 = *(undefined4 *)((long)register0x00000008 + -0x11c);
        if (iVar8 == 0) {
          uVar27 = *(undefined8 *)(*plVar13 + (ulong)*(ushort *)(lVar23 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar24 = *plVar13;
          uVar12 = (ulong)*(ushort *)(lVar24 + 0x12a);
          if (uVar12 != 0) {
            piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)(lVar23 + 0x18)) {
                lVar24 = lVar24 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar23 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01560854;
              }
              piVar25 = piVar25 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          lVar24 = func_0x00fac1f0(plVar13);
code_r0x01560854:
          uVar27 = *(undefined8 *)(lVar24 + 8);
        }
        puVar17 = (undefined8 *)func_0x00f78acc(uVar27,lVar23);
        pcVar29 = (code *)*puVar17;
      }
      uVar12 = (*pcVar29)(plVar13,uVar1,uVar19,puVar17);
    }
  }
  else if (*(char *)(lVar23 + 0x4a) == '\x02') {
    uVar12 = (*pcVar29)(*(undefined4 *)((long)register0x00000008 + -0x11c),uVar19,lVar23);
  }
  else {
code_r0x01560784:
    uVar12 = (*pcVar29)(plVar13,*(undefined4 *)((long)register0x00000008 + -0x11c),uVar19,lVar23);
  }
code_r0x015607ac:
  lVar10 = lVar10 + 1;
  if (lVar10 == lVar30) {
    return uVar12;
  }
  goto code_r0x015606b4;
code_r0x0149cc3c:
  uVar19 = 0x3d79018;
  uVar11 = *(ulong *)(lVar10 + 0x18);
  if (uVar11 != 0) {
    uVar31 = 0x149cc54;
code_r0x015609bc:
    uVar18 = 0;
    *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
    *(ulong *)(puVar4 + -0x38) = unaff_x23;
    *(long *)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = uVar27;
    *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar4 + -0x18) = uVar19;
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar4 + -8) = uVar31;
    *(ulong *)(puVar4 + -0x58) = uVar11;
    lVar10 = *(long *)(uVar11 + 0x68);
    if (lVar10 == 0) {
      puVar6 = puVar4 + -0x58;
      lVar30 = 1;
    }
    else {
      lVar30 = *(long *)(lVar10 + 0x18);
      if (lVar30 == 0) {
        return uVar11;
      }
      puVar6 = (undefined1 *)(lVar10 + 0x20);
    }
    lVar10 = 0;
    do {
      lVar23 = *(long *)(puVar6 + lVar10 * 8);
      pcVar29 = *(code **)(lVar23 + 0x10);
      plVar13 = *(long **)(lVar23 + 0x20);
      lVar23 = *(long *)(lVar23 + 0x28);
      if (*(short *)(lVar23 + 0x48) == -1) {
        func_0x00f78ad8(lVar23,uVar18);
      }
      iVar9 = func_0x00f78a4c(lVar23);
      if (iVar9 == 0) {
        if ((((plVar13 == (long *)0x0) || (*(short *)(lVar23 + 0x48) == -1)) ||
            ((*(byte *)(*plVar13 + 0x115) & 1) != 0)) || (*(long *)(uVar11 + 0x18) == 0))
        goto code_r0x01560ac4;
        iVar9 = func_0x00f78a44(lVar23);
        iVar8 = func_0x00f78ec0(lVar23);
        if (iVar9 == 0) {
          uVar3 = *(ushort *)(lVar23 + 0x48);
          if (iVar8 == 0) {
            lVar23 = *plVar13 + (ulong)uVar3 * 0x10;
            auVar35 = (**(code **)(lVar23 + 0x138))(plVar13,*(undefined8 *)(lVar23 + 0x140));
            goto code_r0x01560ad0;
          }
          lVar23 = func_0x00f78a48(lVar23);
          lVar24 = *plVar13;
          uVar12 = (ulong)*(ushort *)(lVar24 + 0x12a);
          if (uVar12 != 0) {
            piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == lVar23) {
                puVar17 = (undefined8 *)
                          (lVar24 + (long)(int)(*piVar25 + (uint)uVar3) * 0x10 + 0x138);
                goto code_r0x01560b94;
              }
              piVar25 = piVar25 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar17 = (undefined8 *)func_0x00fac1f0(plVar13,lVar23,(ulong)uVar3);
code_r0x01560b94:
          pcVar29 = (code *)*puVar17;
          puVar17 = (undefined8 *)puVar17[1];
        }
        else {
          if (iVar8 == 0) {
            uVar27 = *(undefined8 *)(*plVar13 + (ulong)*(ushort *)(lVar23 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar24 = *plVar13;
            uVar12 = (ulong)*(ushort *)(lVar24 + 0x12a);
            if (uVar12 != 0) {
              piVar25 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == *(long *)(lVar23 + 0x18)) {
                  lVar24 = lVar24 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar23 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01560b6c;
                }
                piVar25 = piVar25 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar24 = func_0x00fac1f0(plVar13);
code_r0x01560b6c:
            uVar27 = *(undefined8 *)(lVar24 + 8);
          }
          puVar17 = (undefined8 *)func_0x00f78acc(uVar27,lVar23);
          pcVar29 = (code *)*puVar17;
        }
        auVar35 = (*pcVar29)(plVar13,puVar17);
      }
      else if (*(char *)(lVar23 + 0x4a) == '\0') {
        auVar35 = (*pcVar29)(lVar23);
      }
      else {
code_r0x01560ac4:
        auVar35 = (*pcVar29)(plVar13,lVar23);
      }
code_r0x01560ad0:
      uVar18 = auVar35._8_8_;
      lVar10 = lVar10 + 1;
      if (lVar10 == lVar30) {
        return auVar35._0_8_;
      }
    } while( true );
  }
  puVar6 = *(undefined1 **)((long)register0x00000008 + -0xf0);
  puVar32 = *(undefined **)((long)register0x00000008 + -0xe8);
  uVar19 = *(undefined8 *)((long)register0x00000008 + -0xf8);
  puVar5 = (undefined1 *)((long)register0x00000008 + -0xe0);
  unaff_x22 = *(long *)((long)register0x00000008 + -0x110);
  auVar35 = *(undefined1 (*) [16])((long)register0x00000008 + -0x108);
  uVar11 = /*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018;
code_r0x0151398c:
  *(long *)(puVar5 + -0x30) = unaff_x22;
  *(undefined1 (*) [16])(puVar5 + -0x28) = auVar35;
  *(undefined8 *)(puVar5 + -0x18) = uVar19;
  *(undefined1 **)(puVar5 + -0x10) = puVar6;
  *(undefined **)(puVar5 + -8) = puVar32;
  uVar27 = 0x3eb4000;
  uVar12 = uVar11;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    uVar12 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar12;
  }
  lVar10 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar10 != 0) {
    uVar12 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar10,uVar11,uRam0000000003d2faf8);
    if ((int)uVar12 == 0) {
      return uVar12;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar10 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar10 != 0)) &&
       (uVar12 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar10,uVar11,uRam0000000003d2fb00), uVar12 != 0)) {
      *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
      *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
      *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar12,0,0);
      return uVar12;
    }
  }
  plVar13 = (long *)func_0x00f78af4();
  *(undefined8 *)(puVar5 + -0x70) = unaff_d9;
  *(ulong *)(puVar5 + -0x68) = CONCAT44(unaff_00005104,unaff_s8);
  *(long *)(puVar5 + -0x60) = unaff_x22;
  *(undefined8 *)(puVar5 + -0x58) = 0x3eb4000;
  *(undefined8 *)(puVar5 + -0x50) = 0x3d25580;
  *(ulong *)(puVar5 + -0x48) = uVar11;
  *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar14 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar13,0);
  if ((plVar14 != (long *)0x0) && (*plVar14 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar31 = func_0x00f78e5c(plVar14);
    *(long **)(puVar5 + -0x90) = plVar14;
    *(long **)(puVar5 + -0x88) = plVar13;
    *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x40;
    *(undefined **)(puVar5 + -0x78) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
    lVar10 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    uVar19 = *(undefined8 *)(puVar5 + -0x90);
    *(long *)(puVar5 + -0xa0) = unaff_x22;
    *(undefined8 *)(puVar5 + -0x98) = 0x3eb4000;
    *(undefined8 *)(puVar5 + -0x90) = uVar19;
    *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(puVar5 + -0x88);
    *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x80);
    *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x78);
    if (lVar10 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar18 = func_0x00f78aec();
      uVar31 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar18,uVar31,0);
    }
    else {
      uVar27 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar11 = (*pcRam0000000003ec01d0)(uVar31);
      if ((uVar11 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (*pcRam0000000003ec01e0)(uVar31,lVar10);
        return uVar11;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar18 = func_0x00f78aec();
      uVar19 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar18,uVar19,0);
      uVar19 = uVar31;
    }
    uVar31 = func_0x00f78a24(0x3d5a8a8);
    auVar35 = func_0x00f78ac0(uVar18,uVar31);
    *(long *)(puVar5 + -0xd0) = unaff_x22;
    *(undefined8 *)(puVar5 + -200) = uVar27;
    *(undefined8 *)(puVar5 + -0xc0) = uVar19;
    *(undefined8 *)(puVar5 + -0xb8) = uVar18;
    *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0x80;
    *(undefined **)(puVar5 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (*pcRam0000000003ec01e0)(auVar35._0_8_,auVar35._8_8_);
    return uVar11;
  }
  fVar33 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar27 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar33 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                           plVar14,4,0);
  uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar27,uRam0000000003d5e780);
  *(undefined8 *)(puVar5 + -0xa0) = 0x3d5e780;
  *(undefined8 *)(puVar5 + -0x98) = 0x3d5e868;
  *(long **)(puVar5 + -0x90) = plVar14;
  *(long **)(puVar5 + -0x88) = plVar13;
  *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x40;
  *(undefined **)(puVar5 + -0x78) = &UNK_01513b44;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar13,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((uVar11 != 0) && (*(char *)(uVar11 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar9 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar9 != 0) {
      lVar10 = func_0x00f78adc(plVar13,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
      if ((uVar12 & 1) == 0) {
        if (plVar13 == (long *)0x0) goto code_r0x018eef34;
        uVar27 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
      }
      else {
        if (lVar10 == 0) {
code_r0x018eef34:
          auVar35 = func_0x00f78af4();
          uVar12 = auVar35._0_8_;
          *(undefined8 *)(puVar5 + -0xd0) = 0x3d5e780;
          *(long *)(puVar5 + -200) = lVar10;
          *(long **)(puVar5 + -0xc0) = plVar13;
          *(ulong *)(puVar5 + -0xb8) = uVar11;
          *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0x80;
          *(undefined **)(puVar5 + -0xa8) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((uVar12 != 0) && (*(char *)(uVar12 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar12,auVar35._8_8_,cVar2 != '\0',0);
          }
          return uVar12;
        }
        uVar27 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar10,0);
      }
      *(undefined8 *)(uVar11 + 200) = uVar27;
    }
    *(long **)(uVar11 + 0x48) = plVar13;
  }
  return uVar11;
}



// ============================================================
// RVA: 0x149ccfc | Atlas.UI.Screens.MultiplayerModeSelectScreen.OnPartyInvite
// ============================================================

/* WARNING: Possible PIC construction at 0x0149ca90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01514864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01515350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cb98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149ccdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01515354) */
/* WARNING: Removing unreachable block (ram,0x0149cad4) */
/* WARNING: Removing unreachable block (ram,0x0149cae4) */
/* WARNING: Removing unreachable block (ram,0x0149caec) */
/* WARNING: Removing unreachable block (ram,0x0149cab4) */
/* WARNING: Removing unreachable block (ram,0x0149cac4) */
/* WARNING: Removing unreachable block (ram,0x0149cacc) */
/* WARNING: Removing unreachable block (ram,0x0149ca94) */
/* WARNING: Removing unreachable block (ram,0x0149caa4) */
/* WARNING: Removing unreachable block (ram,0x0149caac) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_MultiplayerModeSelectScreen__OnPartyInvite
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long *extraout_x1;
  uint extraout_w8;
  uint uVar19;
  ulong *puVar20;
  ulong uVar21;
  long extraout_x8;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long extraout_x9;
  int *piVar25;
  undefined8 unaff_x19;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar28;
  long unaff_x22;
  code *pcVar29;
  ulong unaff_x23;
  long lVar30;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar31;
  code *unaff_x30;
  undefined *puVar32;
  float fVar33;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined8 unaff_d9;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  do {
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar16 = param_6;
    if ((bRam0000000003eb4a07 & 1) == 0) {
      func_0x00f78a20(0x3d3e0d8);
      func_0x00f78a20(0x3d3e130);
      func_0x00f78a20(0x3d3e178);
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d411e8);
      bRam0000000003eb4a07 = 1;
      uVar16 = param_6;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0xa0) != 0)) {
      uVar10 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar9 + 0xa0),uRam0000000003d3e0d8);
      if ((uVar10 & 1) != 0) {
        return uVar10;
      }
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0xe0) != 0)) {
        uVar10 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar9 + 0xe0),uRam0000000003d3e130);
        if ((uVar10 & 1) != 0) {
          return uVar10;
        }
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d411e8);
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0x98) != 0)) {
          uVar10 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar9 + 0x98),uRam0000000003d3e178);
          if ((uVar10 & 1) != 0) {
            return uVar10;
          }
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d411e0);
          if (lVar9 != 0) {
            uVar10 = *(ulong *)(lVar9 + 0x20);
            if (uVar10 == 0) {
              return 0;
            }
            unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
            uVar11 = *(undefined8 *)((long)register0x00000008 + -8);
            unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
            uVar27 = *(undefined8 *)((long)register0x00000008 + -0x18);
            uVar16 = *(undefined8 *)((long)register0x00000008 + -0x28);
            puVar5 = (undefined1 *)register0x00000008;
            lVar9 = *(long *)((long)register0x00000008 + -0x30);
            goto code_r0x015609bc;
          }
        }
      }
    }
    uVar11 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0x3d411e8;
    *(undefined8 *)((long)register0x00000008 + -0x48) = param_4;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) =
         Atlas_UI_Screens_MultiplayerModeSelectScreen__OnBeforeExit;
    uVar27 = 0x3eb4000;
    uVar10 = 0x3d411e8;
    if ((bRam0000000003eb4a03 & 1) == 0) {
      func_0x00f78a20(0x3d2a320);
      func_0x00f78a20(0x3d1b598);
      func_0x00f78a20(0x3d2c840);
      func_0x00f78a20(0x3d5a9e8);
      func_0x00f78a20(0x3d411d8);
      func_0x00f78a20(0x3d411e8);
      bRam0000000003eb4a03 = 1;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d411e8);
    if ((lVar9 == 0) || (unaff_x22 = *(long *)(lVar9 + 0x28), unaff_x22 == 0)) {
LAB_0149cb08:
      func_0x00f78af4();
    }
    else {
      unaff_x23 = 0x3d1b598;
      unaff_x24 = 0x3d5a000;
      unaff_x25 = 0x3d2a000;
      uVar27 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar10 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar10,uVar11,uRam0000000003d5a9e8,uRam0000000003d2a320);
      uVar16 = 0;
      plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar27,uVar10);
      if ((plVar12 == (long *)0x0) || (*plVar12 == /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) {
        uVar27 = 0x3d411d8;
        *(long **)(unaff_x22 + 0x48) = plVar12;
        uVar16 = uRam0000000003d2c840;
        Atlas_UI_Screens_AtlasScreen_ModeSelectScreenBehaviour__ModeSelectScreen_TransitionData___SetScreenHandlePartyInvite
                  (uVar11,0);
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d411d8);
        if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x68), lVar9 == 0)) goto LAB_0149cb08;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3d5a000;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3d1b598;
        *(long *)((long)register0x00000008 + -0xb0) = unaff_x22;
        *(ulong *)((long)register0x00000008 + -0xa8) = uVar10;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3d411d8;
        *(undefined8 *)((long)register0x00000008 + -0x98) = uVar11;
        *(undefined1 **)((long)register0x00000008 + -0x90) =
             (undefined1 *)((long)register0x00000008 + -0x40);
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0x149ca94;
        if ((bRam0000000003eb4d9b & 1) == 0) {
          func_0x00f78a20(0x3d1fa78,0);
          bRam0000000003eb4d9b = 1;
        }
        plVar12 = *(long **)(lVar9 + 0x148);
        uVar24 = 0x3eb4000;
        if (plVar12 == (long *)0x0) goto code_r0x01514e70;
        uVar14 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
        if (uVar14 == 0) goto code_r0x01514ff8;
        uVar24 = uVar14;
        if ((int)*(ulong *)(uVar14 + 0x18) < 1) goto code_r0x01514e70;
        uVar10 = 0;
        uVar21 = *(ulong *)(uVar14 + 0x18) & 0xffffffff;
        unaff_x22 = uVar14 + 0x20;
        unaff_x23 = 0x3d1fa78;
        break;
      }
    }
    auVar35 = func_0x00f78e5c();
    puVar4 = (undefined1 *)((long)register0x00000008 + -0xb0);
    *(long *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0xa8) = uVar10;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar27;
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar11;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(code **)((long)register0x00000008 + -0x88) =
         Atlas_UI_Screens_MultiplayerModeSelectScreen__GameTypePressed;
    puVar31 = (undefined1 *)((long)register0x00000008 + -0x90);
    param_6 = uVar16;
    if ((bRam0000000003eb4a04 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79018);
      func_0x00f78a20(0x3d79020);
      bRam0000000003eb4a04 = 1;
    }
    unaff_x22 = 0x3d411e0;
    lVar9 = 0x3d411e0;
    iVar7 = auVar35._8_4_;
    if (iVar7 == 1) {
      puVar20 = (ulong *)0x3d79018;
LAB_0149cb90:
      puVar32 = &LAB_0149cb9c;
      uVar10 = *puVar20;
      goto code_r0x0151398c;
    }
    if (iVar7 == 2) {
      puVar20 = (ulong *)0x3d79020;
      goto LAB_0149cb90;
    }
    lVar30 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(auVar35._0_8_,uRam0000000003d411e0);
    if (lVar30 != 0) {
      uVar10 = *(ulong *)(lVar30 + 0x10);
      if (uVar10 == 0) {
        return 0;
      }
      *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -200) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0xb8) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xa0) =
           *(undefined8 *)((long)register0x00000008 + -0xa0);
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0x98);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(ulong *)((long)register0x00000008 + -0xe8) = uVar10;
      *(int *)((long)register0x00000008 + -0xec) = iVar7;
      lVar9 = *(long *)(uVar10 + 0x68);
      if (lVar9 == 0) {
        puVar5 = (undefined1 *)((long)register0x00000008 + -0xe8);
        lVar30 = 1;
      }
      else {
        lVar30 = *(long *)(lVar9 + 0x18);
        if (lVar30 == 0) {
          return uVar10;
        }
        puVar5 = (undefined1 *)(lVar9 + 0x20);
      }
      lVar9 = 0;
      goto code_r0x015606b4;
    }
    uVar27 = func_0x00f78af4();
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3d411e0;
    *(undefined1 (*) [16])((long)register0x00000008 + -0xd8) = auVar35;
    *(undefined8 *)((long)register0x00000008 + -200) = uVar16;
    *(undefined1 **)((long)register0x00000008 + -0xc0) = puVar31;
    *(code **)((long)register0x00000008 + -0xb8) =
         Atlas_UI_Screens_MultiplayerModeSelectScreen__CreateRoomPressed;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xc0);
    unaff_x20 = 0x3eb4000;
    uVar16 = 0x3d411e0;
    if ((bRam0000000003eb4a05 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79018);
      bRam0000000003eb4a05 = 1;
    }
    lVar30 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar27,uRam0000000003d411e0);
    if (lVar30 != 0) {
      uVar27 = 0x3d79018;
      uVar10 = *(ulong *)(lVar30 + 0x18);
      if (uVar10 != 0) {
        uVar11 = 0x149cc54;
        lVar9 = unaff_x22;
        goto code_r0x015609bc;
      }
      puVar31 = *(undefined1 **)((long)register0x00000008 + -0xc0);
      puVar32 = *(undefined **)((long)register0x00000008 + -0xb8);
      uVar16 = *(undefined8 *)((long)register0x00000008 + -200);
      puVar4 = (undefined1 *)((long)register0x00000008 + -0xb0);
      unaff_x22 = *(long *)((long)register0x00000008 + -0xe0);
      auVar35 = *(undefined1 (*) [16])((long)register0x00000008 + -0xd8);
      uVar10 = /*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018;
      goto code_r0x0151398c;
    }
    unaff_x19 = func_0x00f78af4();
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0x3d411e0;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0x3d411e0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar27;
    *(undefined1 **)((long)register0x00000008 + -0xf0) = unaff_x29;
    *(code **)((long)register0x00000008 + -0xe8) =
         Atlas_UI_Screens_MultiplayerModeSelectScreen__JoinRoomPressed;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xf0);
    unaff_x20 = 0x3eb4000;
    unaff_x21 = 0x3d411e0;
    uVar16 = 0x3d411e0;
    if ((bRam0000000003eb4a06 & 1) == 0) {
      func_0x00f78a20(0x3d411e0);
      func_0x00f78a20(0x3d79020);
      bRam0000000003eb4a06 = 1;
    }
    lVar30 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(unaff_x19,uRam0000000003d411e0);
    if (lVar30 != 0) goto code_r0x0149ccc8;
    unaff_x30 = Atlas_UI_Screens_MultiplayerModeSelectScreen__OnPartyInvite;
    param_4 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
  } while( true );
  while( true ) {
    plVar12 = *(long **)(unaff_x22 + uVar10 * 8);
    if ((plVar12 != (long *)0x0) &&
       (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar12 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x01514fec;
    /*Atlas.UI.UIAtlasButton$$remove_Selected*/ func_0x01514244(lVar9);
    uVar10 = uVar10 + 1;
    uVar21 = (ulong)*(uint *)(uVar14 + 0x18);
    if ((long)(int)*(uint *)(uVar14 + 0x18) <= (long)uVar10) break;
    if (uVar21 <= uVar10) goto code_r0x01514fe0;
  }
code_r0x01514e70:
  plVar12 = *(long **)(lVar9 + 0x150);
  if (plVar12 == (long *)0x0) {
code_r0x01514ee4:
    plVar12 = *(long **)(lVar9 + 0x158);
    if (plVar12 != (long *)0x0) {
      uVar14 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
      if (uVar14 == 0) goto code_r0x01514ff8;
      uVar24 = uVar14;
      if (0 < (int)*(ulong *)(uVar14 + 0x18)) {
        uVar10 = 0;
        uVar21 = *(ulong *)(uVar14 + 0x18) & 0xffffffff;
        unaff_x22 = uVar14 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar21 <= uVar10) goto code_r0x01514fe0;
          plVar12 = *(long **)(unaff_x22 + uVar10 * 8);
          if ((plVar12 != (long *)0x0) &&
             (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar12 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Pressed*/ func_0x015144d4(lVar9);
          uVar10 = uVar10 + 1;
          uVar21 = (ulong)*(uint *)(uVar14 + 0x18);
        } while ((long)uVar10 < (long)(int)*(uint *)(uVar14 + 0x18));
      }
    }
    plVar12 = *(long **)(lVar9 + 0x160);
    if (plVar12 == (long *)0x0) {
      return 0;
    }
    uVar14 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
    if (uVar14 != 0) {
      if ((int)*(ulong *)(uVar14 + 0x18) < 1) {
        return uVar14;
      }
      uVar10 = 0;
      uVar24 = *(ulong *)(uVar14 + 0x18) & 0xffffffff;
      unaff_x22 = uVar14 + 0x20;
      while (uVar10 < uVar24) {
        plVar12 = *(long **)(unaff_x22 + uVar10 * 8);
        if ((plVar12 != (long *)0x0) &&
           (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar12 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x01514fec;
        uVar21 = /*Atlas.UI.UIAtlasButton$$remove_SelectedOrPressed*/ func_0x0151461c(lVar9);
        uVar10 = uVar10 + 1;
        uVar24 = (ulong)*(uint *)(uVar14 + 0x18);
        if ((long)(int)*(uint *)(uVar14 + 0x18) <= (long)uVar10) {
          return uVar21;
        }
      }
code_r0x01514fe0:
      uVar16 = func_0x00f78b24();
      func_0x00f78ac0(uVar16,0);
      plVar12 = extraout_x1;
      lVar30 = extraout_x8;
code_r0x01514fec:
      unaff_x23 = 0x3d1fa78;
      func_0x00f78e5c(plVar12,lVar30);
      uVar24 = uVar14;
    }
  }
  else {
    uVar14 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0));
    if (uVar14 != 0) {
      uVar24 = uVar14;
      if (0 < (int)*(ulong *)(uVar14 + 0x18)) {
        uVar10 = 0;
        uVar21 = *(ulong *)(uVar14 + 0x18) & 0xffffffff;
        unaff_x22 = uVar14 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar21 <= uVar10) goto code_r0x01514fe0;
          plVar12 = *(long **)(unaff_x22 + uVar10 * 8);
          if ((plVar12 != (long *)0x0) &&
             (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar12 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Deselected*/ func_0x0151438c(lVar9);
          uVar10 = uVar10 + 1;
          uVar21 = (ulong)*(uint *)(uVar14 + 0x18);
        } while ((long)uVar10 < (long)(int)*(uint *)(uVar14 + 0x18));
      }
      goto code_r0x01514ee4;
    }
  }
code_r0x01514ff8:
  auVar35 = func_0x00f78af4();
  uVar16 = auVar35._8_8_;
  *(long *)((long)register0x00000008 + -0xf0) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0xe8) = uVar10;
  *(ulong *)((long)register0x00000008 + -0xe0) = uVar24;
  *(long *)((long)register0x00000008 + -0xd8) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined **)((long)register0x00000008 + -200) = &Atlas_UI_UIAtlasButtonGroup__Subscribe;
  if ((bRam0000000003eb4da9 & 1) == 0) {
    func_0x00f78a20(0x3d3c5b8);
    func_0x00f78a20(0x3d3c5c0);
    bRam0000000003eb4da9 = 1;
  }
  lVar9 = *(long *)(auVar35._0_8_ + 0x40);
  if (lVar9 != 0) {
    uVar10 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar9,uVar16,uRam0000000003d3c5c0);
    if ((uVar10 & 1) != 0) {
      return uVar10;
    }
    uVar10 = *(ulong *)(auVar35._0_8_ + 0x40);
    if (uVar10 != 0) {
      uVar27 = *(undefined8 *)((long)register0x00000008 + -0xe0);
      uVar24 = *(ulong *)((long)register0x00000008 + -0xd8);
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0xf0);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -0xe8);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar27;
      *(ulong *)((long)register0x00000008 + -0xd8) = uVar24;
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -200);
      lVar9 = *(long *)(uVar10 + 0x10);
      puVar17 = puRam0000000003d3c5b8;
      if (lVar9 == 0) {
code_r0x0242716c:
        uVar16 = uVar27;
        uVar10 = uVar24;
        uVar14 = func_0x00f78af4();
        lVar9 = extraout_x9;
        uVar19 = extraout_w8;
code_r0x02427170:
        *(uint *)(uVar10 + 0x18) = uVar19 + 1;
      }
      else {
        uVar19 = *(uint *)(uVar10 + 0x18);
        uVar14 = uVar10;
        if (uVar19 != *(uint *)(lVar9 + 0x18)) goto code_r0x02427170;
        puVar17 = *(undefined8 **)(*(long *)(puRam0000000003d3c5b8[3] + 0xc0) + 0x60);
        uVar14 = (*(code *)*puVar17)(uVar10,uVar19 + 1);
        lVar9 = *(long *)(uVar10 + 0x10);
        uVar19 = *(uint *)(uVar10 + 0x18);
        *(uint *)(uVar10 + 0x18) = uVar19 + 1;
        uVar24 = uVar10;
        uVar27 = uVar16;
        if (lVar9 == 0) goto code_r0x0242716c;
      }
      if (uVar19 < *(uint *)(lVar9 + 0x18)) {
        *(undefined8 *)(lVar9 + (long)(int)uVar19 * 8 + 0x20) = uVar16;
        *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
        return uVar14;
      }
      uVar27 = func_0x00f78b24();
      auVar35 = func_0x00f78ac0(uVar27,0);
      lVar30 = auVar35._8_8_;
      lVar9 = auVar35._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3d5a000;
      *(ulong *)((long)register0x00000008 + -0x118) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x110) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0x108) = uVar18;
      *(undefined8 *)((long)register0x00000008 + -0x100) = uVar16;
      *(ulong *)((long)register0x00000008 + -0xf8) = uVar10;
      *(undefined1 **)((long)register0x00000008 + -0xf0) =
           (undefined1 *)((long)register0x00000008 + -0xd0);
      *(undefined **)((long)register0x00000008 + -0xe8) =
           &System_Collections_Generic_List_object___System_Collections_IList_Add;
      (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x48))(lVar30,0x14);
      if (lVar9 != 0) {
        pcVar29 = (code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x28);
        lVar22 = *(long *)(*(long *)(puVar17[3] + 0xc0) + 0x38);
        if ((*(ushort *)(lVar22 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar22);
        }
        if (lVar30 == 0) {
          lVar23 = 0;
        }
        else {
          lVar23 = func_0x00f78adc(lVar30,lVar22);
          if (lVar23 == 0) {
            func_0x00f78e5c(lVar30,lVar22);
            goto code_r0x0242734c;
          }
        }
        (*pcVar29)(lVar9,lVar23,*(undefined8 *)(*(long *)(puVar17[3] + 0xc0) + 0x28));
        iVar7 = (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x68))(lVar9);
        return (ulong)(iVar7 - 1);
      }
      func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x2427350);
      (*pcVar29)();
    }
  }
  auVar34 = func_0x00f78af4();
  lVar30 = auVar34._8_8_;
  lVar9 = auVar34._0_8_;
  *(long *)((long)register0x00000008 + -0x120) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x118) = 0x3eb4000;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x110) = auVar35;
  *(undefined1 **)((long)register0x00000008 + -0x100) =
       (undefined1 *)((long)register0x00000008 + -0xd0);
  *(undefined **)((long)register0x00000008 + -0xf8) = &Atlas_UI_UIAtlasButton__OnPointerClick;
  if ((bRam0000000003eb4d9d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d9d = 1;
  }
  uVar10 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(lVar9 + 0x16c),0);
  if ((int)uVar10 == 0) {
    return uVar10;
  }
  if (lVar30 != 0) {
    if (*(int *)(lVar30 + 0x134) != 0) {
      return uVar10;
    }
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(lVar9);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar9,lVar30,0);
    uVar16 = *(undefined8 *)(lVar9 + 0x118);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,0,0);
    if ((int)uVar10 == 0) {
      return uVar10;
    }
    bVar6 = false;
    uVar16 = *(undefined8 *)((long)register0x00000008 + -0x100);
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0xf8);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x110);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x108);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xf0);
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0x120);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x118);
    goto Atlas_UI_UIAtlasButton__SelectButton;
  }
  auVar35 = func_0x00f78af4();
  plVar13 = auVar35._8_8_;
  plVar12 = auVar35._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x160) = 0x3d5a000;
  *(ulong *)((long)register0x00000008 + -0x158) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x150) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x148) = 0x3eb4000;
  *(long *)((long)register0x00000008 + -0x140) = lVar9;
  *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x130) =
       (undefined1 *)((long)register0x00000008 + -0x100);
  *(undefined **)((long)register0x00000008 + -0x128) = &Atlas_UI_UIAtlasButton__OnSubmit;
  if ((bRam0000000003eb4d9e & 1) == 0) {
    func_0x00f78a20(0x3d21bd8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9e = 1;
  }
  uVar10 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)((long)plVar12 + 0x16c),0);
  if ((int)uVar10 == 0) {
    return uVar10;
  }
  if (plVar13 == (long *)0x0) {
    lVar9 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    unaff_x23 = 1;
  }
  else {
    if (*(byte *)(*plVar13 + 300) < *(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300)) {
      unaff_x23 = 1;
    }
    else {
      unaff_x23 = (ulong)(*(long *)(*(long *)(*plVar13 + 200) +
                                    (ulong)*(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300) * 8 + -8) !=
                         /*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8);
    }
    lVar9 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    if (*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) <= *(byte *)(*plVar13 + 300)) {
      unaff_x23 = (ulong)((uint)(*(long *)(*(long *)(*plVar13 + 200) +
                                           (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 + -8) !=
                                /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0) & (uint)unaff_x23);
    }
  }
  if ((int)unaff_x23 == 0) {
code_r0x015152e8:
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(plVar12);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(plVar12,plVar13,0);
    uVar10 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
    if (((int)uVar10 == 0) ||
       (uVar10 = (**(code **)(*plVar12 + 0x2b8))(plVar12,*(undefined8 *)(*plVar12 + 0x2c0)),
       (int)uVar10 == 0)) {
      return uVar10;
    }
    (**(code **)(*plVar12 + 0x2d8))(plVar12,2,0,*(undefined8 *)(*plVar12 + 0x2e0));
    puVar32 = &UNK_01515354;
    plVar15 = plVar12;
  }
  else {
    unaff_x23 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar9,0);
    if (iVar7 == 0) goto code_r0x015152e8;
    if (lVar9 != 0) {
      lVar9 = *(long *)(lVar9 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,plVar12,0);
      if ((uVar10 & 1) != 0) {
        return uVar10;
      }
      goto code_r0x015152e8;
    }
    puVar32 = &Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0;
    plVar15 = (long *)func_0x00f78af4();
  }
  *(long *)((long)register0x00000008 + -400) = lVar9;
  *(undefined8 *)((long)register0x00000008 + -0x188) = 1;
  *(long **)((long)register0x00000008 + -0x180) = plVar13;
  *(long **)((long)register0x00000008 + -0x178) = plVar12;
  *(undefined1 **)((long)register0x00000008 + -0x170) =
       (undefined1 *)((long)register0x00000008 + -0x130);
  *(undefined **)((long)register0x00000008 + -0x168) = puVar32;
  if ((bRam0000000003eb4da6 & 1) == 0) {
    func_0x00f78a20(0x3d29448);
    bRam0000000003eb4da6 = 1;
  }
  uVar10 = func_0x00f78aec(/*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d_TypeInfo*/ uRam0000000003d29448);
  /*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d$$.ctor*/ func_0x0156c5e4(uVar10,0,0);
  if (uVar10 != 0) {
    *(long **)(uVar10 + 0x20) = plVar15;
    return uVar10;
  }
  auVar34 = func_0x00f78af4();
  *(long *)((long)register0x00000008 + -0x1c0) = lVar9;
  *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0x3d29448;
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
  *(long **)((long)register0x00000008 + -0x1a8) = plVar15;
  *(undefined1 **)((long)register0x00000008 + -0x1a0) =
       (undefined1 *)((long)register0x00000008 + -0x170);
  *(undefined **)((long)register0x00000008 + -0x198) = &Atlas_UI_UIAtlasButton__OnSelect;
  if ((bRam0000000003eb4d9f & 1) == 0) {
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9f = 1;
  }
  uVar10 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(auVar34._0_8_ + 0x16c),0);
  if ((int)uVar10 == 0) {
    return uVar10;
  }
  if (auVar34._8_8_ == (long *)0x0) {
code_r0x0151546c:
    bVar6 = false;
  }
  else {
    lVar9 = *auVar34._8_8_;
    if (*(byte *)(lVar9 + 300) < *(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300)) goto code_r0x0151546c;
    bVar6 = *(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 + -8
                     ) == /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0;
  }
  iVar7 = /*Core.Input.InputManager$$get_IsCurrentSelectionFromUser*/ func_0x0164ad7c(0);
  if ((iVar7 != 0) && (!bVar6)) {
    /*Atlas.UI.UIAtlasButton$$PlayButtonSelectSound*/ func_0x01514cec(auVar34._0_8_);
  }
  uVar16 = *(undefined8 *)((long)register0x00000008 + -0x1a0);
  uVar18 = *(undefined8 *)((long)register0x00000008 + -0x198);
  uVar27 = *(undefined8 *)((long)register0x00000008 + -0x1b0);
  uVar26 = *(undefined8 *)((long)register0x00000008 + -0x1a8);
  puVar5 = (undefined1 *)((long)register0x00000008 + -400);
  uVar11 = *(undefined8 *)((long)register0x00000008 + -0x1c0);
  uVar28 = *(undefined8 *)((long)register0x00000008 + -0x1b8);
Atlas_UI_UIAtlasButton__SelectButton:
  uVar10 = auVar34._0_8_;
  *(undefined8 *)(puVar5 + -0x30) = uVar11;
  *(undefined8 *)(puVar5 + -0x28) = uVar28;
  *(undefined8 *)(puVar5 + -0x20) = uVar27;
  *(undefined8 *)(puVar5 + -0x18) = uVar26;
  *(undefined8 *)(puVar5 + -0x10) = uVar16;
  *(undefined8 *)(puVar5 + -8) = uVar18;
  puVar31 = puVar5 + -0x10;
  uVar16 = 0;
  if ((*(char *)(uVar10 + 0x140) != '\0') && (bVar6)) {
    return uVar10;
  }
  /*UnityEngine.UI.Selectable$$OnSelect*/ func_0x032e4efc(uVar10,auVar34._8_8_,0);
  if (*(long *)(uVar10 + 0x118) != 0) {
    /*Atlas.UI.UIAtlasButtonGroup$$OnButtonSelected*/ func_0x01514894(*(long *)(uVar10 + 0x118),uVar10,auVar34._8_8_);
  }
  uVar24 = *(ulong *)(uVar10 + 0x148);
  if (uVar24 == 0) {
    uVar24 = *(ulong *)(uVar10 + 0x160);
    if (uVar24 == 0) {
      return 0;
    }
    puVar31 = *(undefined1 **)(puVar5 + -0x10);
    puVar32 = *(undefined **)(puVar5 + -8);
    uVar16 = *(undefined8 *)(puVar5 + -0x20);
    uVar11 = *(undefined8 *)(puVar5 + -0x30);
    auVar34._8_8_ = *(undefined8 *)(puVar5 + -0x28);
    auVar34._0_8_ = *(undefined8 *)(puVar5 + -0x18);
  }
  else {
    puVar32 = &UNK_01514868;
    puVar5 = puVar5 + -0x30;
  }
  uVar27 = 0;
  *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x48) = 0x3d2a000;
  *(undefined8 *)(puVar5 + -0x40) = 0x3d5a000;
  *(ulong *)(puVar5 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x30) = uVar11;
  *(long *)(puVar5 + -0x28) = auVar34._8_8_;
  *(undefined8 *)(puVar5 + -0x20) = uVar16;
  *(long *)(puVar5 + -0x18) = auVar34._0_8_;
  *(undefined1 **)(puVar5 + -0x10) = puVar31;
  *(undefined **)(puVar5 + -8) = puVar32;
  *(ulong *)(puVar5 + -0x58) = uVar24;
  lVar9 = *(long *)(uVar24 + 0x68);
  if (lVar9 == 0) {
    puVar5 = puVar5 + -0x58;
    lVar30 = 1;
  }
  else {
    lVar30 = *(long *)(lVar9 + 0x18);
    if (lVar30 == 0) {
      return uVar24;
    }
    puVar5 = (undefined1 *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar22 = *(long *)(puVar5 + lVar9 * 8);
    pcVar29 = *(code **)(lVar22 + 0x10);
    plVar12 = *(long **)(lVar22 + 0x20);
    lVar22 = *(long *)(lVar22 + 0x28);
    if (*(short *)(lVar22 + 0x48) == -1) {
      func_0x00f78ad8(lVar22,uVar27);
    }
    iVar7 = func_0x00f78a4c(lVar22);
    if (iVar7 == 0) {
      if ((((plVar12 == (long *)0x0) || (*(short *)(lVar22 + 0x48) == -1)) ||
          ((*(byte *)(*plVar12 + 0x115) & 1) != 0)) || (*(long *)(uVar24 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar7 = func_0x00f78a44(lVar22);
      iVar8 = func_0x00f78ec0(lVar22);
      if (iVar7 == 0) {
        uVar3 = *(ushort *)(lVar22 + 0x48);
        if (iVar8 == 0) {
          lVar22 = *plVar12 + (ulong)uVar3 * 0x10;
          auVar35 = (**(code **)(lVar22 + 0x138))(plVar12,*(undefined8 *)(lVar22 + 0x140));
          goto code_r0x02924da4;
        }
        lVar22 = func_0x00f78a48(lVar22);
        lVar23 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar23 + 0x12a);
        if (uVar10 != 0) {
          piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == lVar22) {
              puVar17 = (undefined8 *)(lVar23 + (long)(int)(*piVar25 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar25 = piVar25 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar17 = (undefined8 *)func_0x00fac1f0(plVar12,lVar22,(ulong)uVar3);
code_r0x02924e68:
        pcVar29 = (code *)*puVar17;
        puVar17 = (undefined8 *)puVar17[1];
      }
      else {
        if (iVar8 == 0) {
          uVar16 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar23 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar23 + 0x12a);
          if (uVar10 != 0) {
            piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)(lVar22 + 0x18)) {
                lVar23 = lVar23 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar22 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar25 = piVar25 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          lVar23 = func_0x00fac1f0(plVar12);
code_r0x02924e40:
          uVar16 = *(undefined8 *)(lVar23 + 8);
        }
        puVar17 = (undefined8 *)func_0x00f78acc(uVar16,lVar22);
        pcVar29 = (code *)*puVar17;
      }
      auVar35 = (*pcVar29)(plVar12,puVar17);
    }
    else if (*(char *)(lVar22 + 0x4a) == '\0') {
      auVar35 = (*pcVar29)(lVar22);
    }
    else {
code_r0x02924d98:
      auVar35 = (*pcVar29)(plVar12,lVar22);
    }
code_r0x02924da4:
    uVar27 = auVar35._8_8_;
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar30) {
      return auVar35._0_8_;
    }
  } while( true );
code_r0x015606b4:
  lVar22 = *(long *)(puVar5 + lVar9 * 8);
  pcVar29 = *(code **)(lVar22 + 0x10);
  plVar12 = *(long **)(lVar22 + 0x20);
  lVar22 = *(long *)(lVar22 + 0x28);
  if (*(short *)(lVar22 + 0x48) == -1) {
    func_0x00f78ad8(lVar22);
  }
  iVar7 = func_0x00f78a4c(lVar22);
  if (iVar7 == 0) {
    if (plVar12 == (long *)0x0) {
      uVar24 = (*pcVar29)((undefined1 *)((long)register0x00000008 + -0xfc),uVar16,lVar22);
    }
    else {
      if (((*(short *)(lVar22 + 0x48) == -1) || ((*(byte *)(*plVar12 + 0x115) & 1) != 0)) ||
         (*(long *)(uVar10 + 0x18) == 0)) goto code_r0x01560784;
      iVar7 = func_0x00f78a44(lVar22);
      iVar8 = func_0x00f78ec0(lVar22);
      if (iVar7 == 0) {
        uVar3 = *(ushort *)(lVar22 + 0x48);
        if (iVar8 == 0) {
          lVar22 = *plVar12 + (ulong)uVar3 * 0x10;
          uVar24 = (**(code **)(lVar22 + 0x138))
                             (plVar12,*(undefined4 *)((long)register0x00000008 + -0xec),uVar16,
                              *(undefined8 *)(lVar22 + 0x140));
          goto code_r0x015607ac;
        }
        lVar22 = func_0x00f78a48(lVar22);
        uVar1 = *(undefined4 *)((long)register0x00000008 + -0xec);
        lVar23 = *plVar12;
        uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
        if (uVar24 != 0) {
          piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == lVar22) {
              puVar17 = (undefined8 *)(lVar23 + (long)(int)(*piVar25 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x01560884;
            }
            piVar25 = piVar25 + 4;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
        puVar17 = (undefined8 *)func_0x00fac1f0(plVar12,lVar22,(ulong)uVar3);
code_r0x01560884:
        pcVar29 = (code *)*puVar17;
        puVar17 = (undefined8 *)puVar17[1];
      }
      else {
        uVar1 = *(undefined4 *)((long)register0x00000008 + -0xec);
        if (iVar8 == 0) {
          uVar27 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar23 = *plVar12;
          uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
          if (uVar24 != 0) {
            piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)(lVar22 + 0x18)) {
                lVar23 = lVar23 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar22 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01560854;
              }
              piVar25 = piVar25 + 4;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          lVar23 = func_0x00fac1f0(plVar12);
code_r0x01560854:
          uVar27 = *(undefined8 *)(lVar23 + 8);
        }
        puVar17 = (undefined8 *)func_0x00f78acc(uVar27,lVar22);
        pcVar29 = (code *)*puVar17;
      }
      uVar24 = (*pcVar29)(plVar12,uVar1,uVar16,puVar17);
    }
  }
  else if (*(char *)(lVar22 + 0x4a) == '\x02') {
    uVar24 = (*pcVar29)(*(undefined4 *)((long)register0x00000008 + -0xec),uVar16,lVar22);
  }
  else {
code_r0x01560784:
    uVar24 = (*pcVar29)(plVar12,*(undefined4 *)((long)register0x00000008 + -0xec),uVar16,lVar22);
  }
code_r0x015607ac:
  lVar9 = lVar9 + 1;
  if (lVar9 == lVar30) {
    return uVar24;
  }
  goto code_r0x015606b4;
code_r0x0149ccc8:
  uVar27 = 0x3d79020;
  uVar10 = *(ulong *)(lVar30 + 0x20);
  if (uVar10 != 0) {
    uVar11 = 0x149cce0;
code_r0x015609bc:
    uVar18 = 0;
    *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
    *(ulong *)(puVar5 + -0x38) = unaff_x23;
    *(long *)(puVar5 + -0x30) = lVar9;
    *(undefined8 *)(puVar5 + -0x28) = uVar16;
    *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar5 + -0x18) = uVar27;
    *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar5 + -8) = uVar11;
    *(ulong *)(puVar5 + -0x58) = uVar10;
    lVar9 = *(long *)(uVar10 + 0x68);
    if (lVar9 == 0) {
      puVar5 = puVar5 + -0x58;
      lVar30 = 1;
    }
    else {
      lVar30 = *(long *)(lVar9 + 0x18);
      if (lVar30 == 0) {
        return uVar10;
      }
      puVar5 = (undefined1 *)(lVar9 + 0x20);
    }
    lVar9 = 0;
    do {
      lVar22 = *(long *)(puVar5 + lVar9 * 8);
      pcVar29 = *(code **)(lVar22 + 0x10);
      plVar12 = *(long **)(lVar22 + 0x20);
      lVar22 = *(long *)(lVar22 + 0x28);
      if (*(short *)(lVar22 + 0x48) == -1) {
        func_0x00f78ad8(lVar22,uVar18);
      }
      iVar7 = func_0x00f78a4c(lVar22);
      if (iVar7 == 0) {
        if ((((plVar12 == (long *)0x0) || (*(short *)(lVar22 + 0x48) == -1)) ||
            ((*(byte *)(*plVar12 + 0x115) & 1) != 0)) || (*(long *)(uVar10 + 0x18) == 0))
        goto code_r0x01560ac4;
        iVar7 = func_0x00f78a44(lVar22);
        iVar8 = func_0x00f78ec0(lVar22);
        if (iVar7 == 0) {
          uVar3 = *(ushort *)(lVar22 + 0x48);
          if (iVar8 == 0) {
            lVar22 = *plVar12 + (ulong)uVar3 * 0x10;
            auVar35 = (**(code **)(lVar22 + 0x138))(plVar12,*(undefined8 *)(lVar22 + 0x140));
            goto code_r0x01560ad0;
          }
          lVar22 = func_0x00f78a48(lVar22);
          lVar23 = *plVar12;
          uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
          if (uVar24 != 0) {
            piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == lVar22) {
                puVar17 = (undefined8 *)
                          (lVar23 + (long)(int)(*piVar25 + (uint)uVar3) * 0x10 + 0x138);
                goto code_r0x01560b94;
              }
              piVar25 = piVar25 + 4;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          puVar17 = (undefined8 *)func_0x00fac1f0(plVar12,lVar22,(ulong)uVar3);
code_r0x01560b94:
          pcVar29 = (code *)*puVar17;
          puVar17 = (undefined8 *)puVar17[1];
        }
        else {
          if (iVar8 == 0) {
            uVar16 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar23 = *plVar12;
            uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
            if (uVar24 != 0) {
              piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == *(long *)(lVar22 + 0x18)) {
                  lVar23 = lVar23 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar22 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01560b6c;
                }
                piVar25 = piVar25 + 4;
                uVar24 = uVar24 - 1;
              } while (uVar24 != 0);
            }
            lVar23 = func_0x00fac1f0(plVar12);
code_r0x01560b6c:
            uVar16 = *(undefined8 *)(lVar23 + 8);
          }
          puVar17 = (undefined8 *)func_0x00f78acc(uVar16,lVar22);
          pcVar29 = (code *)*puVar17;
        }
        auVar35 = (*pcVar29)(plVar12,puVar17);
      }
      else if (*(char *)(lVar22 + 0x4a) == '\0') {
        auVar35 = (*pcVar29)(lVar22);
      }
      else {
code_r0x01560ac4:
        auVar35 = (*pcVar29)(plVar12,lVar22);
      }
code_r0x01560ad0:
      uVar18 = auVar35._8_8_;
      lVar9 = lVar9 + 1;
      if (lVar9 == lVar30) {
        return auVar35._0_8_;
      }
    } while( true );
  }
  puVar31 = *(undefined1 **)((long)register0x00000008 + -0xf0);
  puVar32 = *(undefined **)((long)register0x00000008 + -0xe8);
  uVar16 = *(undefined8 *)((long)register0x00000008 + -0xf8);
  puVar4 = (undefined1 *)((long)register0x00000008 + -0xe0);
  unaff_x22 = *(long *)((long)register0x00000008 + -0x110);
  auVar35 = *(undefined1 (*) [16])((long)register0x00000008 + -0x108);
  uVar10 = /*STR('event:/UI/Front_End/GeneralButton4')*/ uRam0000000003d79020;
code_r0x0151398c:
  *(long *)(puVar4 + -0x30) = unaff_x22;
  *(undefined1 (*) [16])(puVar4 + -0x28) = auVar35;
  *(undefined8 *)(puVar4 + -0x18) = uVar16;
  *(undefined1 **)(puVar4 + -0x10) = puVar31;
  *(undefined **)(puVar4 + -8) = puVar32;
  uVar16 = 0x3eb4000;
  uVar24 = uVar10;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    uVar24 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar24;
  }
  lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar9 != 0) {
    uVar24 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar9,uVar10,uRam0000000003d2faf8);
    if ((int)uVar24 == 0) {
      return uVar24;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar9 != 0)) &&
       (uVar24 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar9,uVar10,uRam0000000003d2fb00), uVar24 != 0)) {
      *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
      *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
      *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar24,0,0);
      return uVar24;
    }
  }
  plVar12 = (long *)func_0x00f78af4();
  *(undefined8 *)(puVar4 + -0x70) = unaff_d9;
  *(ulong *)(puVar4 + -0x68) = CONCAT44(unaff_00005104,unaff_s8);
  *(long *)(puVar4 + -0x60) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x58) = 0x3eb4000;
  *(undefined8 *)(puVar4 + -0x50) = 0x3d25580;
  *(ulong *)(puVar4 + -0x48) = uVar10;
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar13 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar12,0);
  if ((plVar13 != (long *)0x0) && (*plVar13 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar11 = func_0x00f78e5c(plVar13);
    *(long **)(puVar4 + -0x90) = plVar13;
    *(long **)(puVar4 + -0x88) = plVar12;
    *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x40;
    *(undefined **)(puVar4 + -0x78) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
    lVar9 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    uVar27 = *(undefined8 *)(puVar4 + -0x90);
    *(long *)(puVar4 + -0xa0) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x98) = 0x3eb4000;
    *(undefined8 *)(puVar4 + -0x90) = uVar27;
    *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(puVar4 + -0x88);
    *(undefined8 *)(puVar4 + -0x80) = *(undefined8 *)(puVar4 + -0x80);
    *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x78);
    if (lVar9 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar18 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar18,uVar11,0);
    }
    else {
      uVar16 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar10 = (*pcRam0000000003ec01d0)(uVar11);
      if ((uVar10 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (*pcRam0000000003ec01e0)(uVar11,lVar9);
        return uVar10;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar18 = func_0x00f78aec();
      uVar27 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar18,uVar27,0);
      uVar27 = uVar11;
    }
    uVar11 = func_0x00f78a24(0x3d5a8a8);
    auVar35 = func_0x00f78ac0(uVar18,uVar11);
    *(long *)(puVar4 + -0xd0) = unaff_x22;
    *(undefined8 *)(puVar4 + -200) = uVar16;
    *(undefined8 *)(puVar4 + -0xc0) = uVar27;
    *(undefined8 *)(puVar4 + -0xb8) = uVar18;
    *(undefined1 **)(puVar4 + -0xb0) = puVar4 + -0x80;
    *(undefined **)(puVar4 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*pcRam0000000003ec01e0)(auVar35._0_8_,auVar35._8_8_);
    return uVar10;
  }
  fVar33 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar16 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar33 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                           plVar13,4,0);
  uVar10 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar16,uRam0000000003d5e780);
  *(undefined8 *)(puVar4 + -0xa0) = 0x3d5e780;
  *(undefined8 *)(puVar4 + -0x98) = 0x3d5e868;
  *(long **)(puVar4 + -0x90) = plVar13;
  *(long **)(puVar4 + -0x88) = plVar12;
  *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x40;
  *(undefined **)(puVar4 + -0x78) = &UNK_01513b44;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar12,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((uVar10 != 0) && (*(char *)(uVar10 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar7 != 0) {
      lVar9 = func_0x00f78adc(plVar12,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
      if ((uVar24 & 1) == 0) {
        if (plVar12 == (long *)0x0) goto code_r0x018eef34;
        uVar16 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
      }
      else {
        if (lVar9 == 0) {
code_r0x018eef34:
          auVar35 = func_0x00f78af4();
          uVar24 = auVar35._0_8_;
          *(undefined8 *)(puVar4 + -0xd0) = 0x3d5e780;
          *(long *)(puVar4 + -200) = lVar9;
          *(long **)(puVar4 + -0xc0) = plVar12;
          *(ulong *)(puVar4 + -0xb8) = uVar10;
          *(undefined1 **)(puVar4 + -0xb0) = puVar4 + -0x80;
          *(undefined **)(puVar4 + -0xa8) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((uVar24 != 0) && (*(char *)(uVar24 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar24,auVar35._8_8_,cVar2 != '\0',0);
          }
          return uVar24;
        }
        uVar16 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar9,0);
      }
      *(undefined8 *)(uVar10 + 200) = uVar16;
    }
    *(long **)(uVar10 + 0x48) = plVar12;
  }
  return uVar10;
}



// ============================================================
// RVA: 0x149cd00 | Atlas.UI.Screens.MultiplayerModeSelectScreen..ctor
// ============================================================

void Atlas_UI_Screens_MultiplayerModeSelectScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4a09 & 1) == 0) {
    func_0x00f78a20(0x3d2c820);
    bRam0000000003eb4a09 = 1;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c820 + 0x18) + 0xc0) + 0x38))();
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
// RVA: 0x149cd54 | Atlas.UI.Screens.MultiplayerModeSelectScreen..cctor
// ============================================================

void Atlas_UI_Screens_MultiplayerModeSelectScreen___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4a0a & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d235f8);
    func_0x00f78a20(0x3d6cb30);
    func_0x00f78a20(0x3d6cb50);
    func_0x00f78a20(0x3d6cb70);
    func_0x00f78a20(0x3d72588);
    bRam0000000003eb4a0a = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_15_MultiplayerMenu')*/ uRam0000000003d6cb30,0);
  **(undefined8 **)(/*Atlas.UI.Screens.MultiplayerModeSelectScreen_TypeInfo*/ lRam0000000003d235f8 + 0xb8) = uVar1;
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_19_MultiplayerMenu_Season')*/ uRam0000000003d6cb50,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.MultiplayerModeSelectScreen_TypeInfo*/ lRam0000000003d235f8 + 0xb8) + 8) = uVar1;
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_22_MultiplayerMenu_PWF')*/ uRam0000000003d6cb70,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.MultiplayerModeSelectScreen_TypeInfo*/ lRam0000000003d235f8 + 0xb8) + 0x10) = uVar1;
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Season_Rotation')*/ uRam0000000003d72588,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.MultiplayerModeSelectScreen_TypeInfo*/ lRam0000000003d235f8 + 0xb8) + 0x18) = uVar1;
  return;
}



// ============================================================
// RVA: 0x149ce80 | Atlas.UI.Screens.MultiplayerModeSelectScreen.<OnBeforeEnter>b__8_0
// ============================================================

/* WARNING: Possible PIC construction at 0x0149cb98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149ccdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149ca90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01514864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01515350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0149cad4) */
/* WARNING: Removing unreachable block (ram,0x0149cae4) */
/* WARNING: Removing unreachable block (ram,0x0149caec) */
/* WARNING: Removing unreachable block (ram,0x0149cab4) */
/* WARNING: Removing unreachable block (ram,0x0149cac4) */
/* WARNING: Removing unreachable block (ram,0x0149cacc) */
/* WARNING: Removing unreachable block (ram,0x0149ca94) */
/* WARNING: Removing unreachable block (ram,0x0149caa4) */
/* WARNING: Removing unreachable block (ram,0x0149caac) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01515354) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_MultiplayerModeSelectScreen___OnBeforeEnter_b__8_0
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long *extraout_x1;
  undefined8 uVar20;
  uint extraout_w8;
  uint uVar21;
  ulong *puVar22;
  ulong uVar23;
  long extraout_x8;
  long lVar24;
  long lVar25;
  long extraout_x9;
  int *piVar26;
  undefined8 unaff_x19;
  undefined8 uVar27;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 uVar28;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  code *pcVar29;
  undefined8 unaff_x25;
  long lVar30;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *puVar31;
  undefined8 uVar32;
  code *unaff_x30;
  float fVar33;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined8 unaff_d9;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  if ((bRam0000000003eb4a0b & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4a0b = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar20 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  uVar19 = 1;
  puVar5 = (undefined1 *)register0x00000008;
code_r0x0149cb10:
  puVar6 = puVar5 + -0x30;
  *(long *)(puVar5 + -0x30) = unaff_x22;
  *(ulong *)(puVar5 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
  *(code **)(puVar5 + -8) = unaff_x30;
  puVar7 = puVar5 + -0x10;
  uVar32 = uVar20;
  if ((bRam0000000003eb4a04 & 1) == 0) {
    func_0x00f78a20(0x3d411e0);
    func_0x00f78a20(0x3d79018);
    func_0x00f78a20(0x3d79020);
    bRam0000000003eb4a04 = 1;
  }
  unaff_x22 = 0x3d411e0;
  iVar9 = (int)uVar19;
  if (iVar9 == 1) {
    puVar22 = (ulong *)0x3d79018;
LAB_0149cb90:
    puVar31 = &LAB_0149cb9c;
    uVar12 = *puVar22;
code_r0x0151398c:
    *(long *)(puVar6 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar6 + -0x28) = param_4;
    *(undefined8 *)(puVar6 + -0x20) = uVar19;
    *(undefined8 *)(puVar6 + -0x18) = uVar20;
    *(undefined1 **)(puVar6 + -0x10) = puVar7;
    *(undefined **)(puVar6 + -8) = puVar31;
    uVar19 = 0x3eb4000;
    uVar17 = uVar12;
    if ((bRam0000000003eb4db6 & 1) == 0) {
      func_0x00f78a20(0x3d2faf8,0);
      func_0x00f78a20(0x3d2fb00);
      uVar17 = func_0x00f78a20(0x3d25580);
      bRam0000000003eb4db6 = 1;
    }
    if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
      return uVar17;
    }
    lVar11 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
    if (lVar11 != 0) {
      uVar17 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar11,uVar12,uRam0000000003d2faf8);
      if ((int)uVar17 == 0) {
        return uVar17;
      }
      if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
          (lVar11 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar11 != 0)) &&
         (uVar17 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar11,uVar12,uRam0000000003d2fb00), uVar17 != 0)) {
        *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
        *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
        *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
        *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
        /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar17,0,0);
        return uVar17;
      }
    }
    plVar14 = (long *)func_0x00f78af4();
    *(undefined8 *)(puVar6 + -0x70) = unaff_d9;
    *(ulong *)(puVar6 + -0x68) = CONCAT44(unaff_00005104,unaff_s8);
    *(long *)(puVar6 + -0x60) = unaff_x22;
    *(undefined8 *)(puVar6 + -0x58) = 0x3eb4000;
    *(undefined8 *)(puVar6 + -0x50) = 0x3d25580;
    *(ulong *)(puVar6 + -0x48) = uVar12;
    *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
    if ((bRam0000000003eb4d8b & 1) == 0) {
      func_0x00f78a20(0x3d24188);
      func_0x00f78a20(0x3d5e780);
      func_0x00f78a20(0x3d5e868);
      bRam0000000003eb4d8b = 1;
    }
    plVar15 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar14,0);
    if ((plVar15 != (long *)0x0) && (*plVar15 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
      uVar32 = func_0x00f78e5c(plVar15);
      *(long **)(puVar6 + -0x90) = plVar15;
      *(long **)(puVar6 + -0x88) = plVar14;
      *(undefined1 **)(puVar6 + -0x80) = puVar6 + -0x40;
      *(undefined **)(puVar6 + -0x78) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
      lVar11 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
      uVar20 = *(undefined8 *)(puVar6 + -0x90);
      *(long *)(puVar6 + -0xa0) = unaff_x22;
      *(undefined8 *)(puVar6 + -0x98) = 0x3eb4000;
      *(undefined8 *)(puVar6 + -0x90) = uVar20;
      *(undefined8 *)(puVar6 + -0x88) = *(undefined8 *)(puVar6 + -0x88);
      *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x80);
      *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x78);
      if (lVar11 == 0) {
        func_0x00f78a24(0x3d23938,0,0);
        uVar27 = func_0x00f78aec();
        uVar32 = func_0x00f78a24(0x3d7b500);
        /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar27,uVar32,0);
      }
      else {
        uVar19 = 0x3ec0000;
        if (pcRam0000000003ec01d0 == (code *)0x0) {
          pcRam0000000003ec01d0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                      );
        }
        uVar12 = (*pcRam0000000003ec01d0)(uVar32);
        if ((uVar12 & 1) != 0) {
          if (pcRam0000000003ec01e0 == (code *)0x0) {
            pcRam0000000003ec01e0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar12 = (*pcRam0000000003ec01e0)(uVar32,lVar11);
          return uVar12;
        }
        func_0x00f78a24(0x3d1fce8);
        uVar27 = func_0x00f78aec();
        uVar20 = func_0x00f78a24(0x3d6af80);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar27,uVar20,0);
        uVar20 = uVar32;
      }
      uVar32 = func_0x00f78a24(0x3d5a8a8);
      auVar35 = func_0x00f78ac0(uVar27,uVar32);
      *(long *)(puVar6 + -0xd0) = unaff_x22;
      *(undefined8 *)(puVar6 + -200) = uVar19;
      *(undefined8 *)(puVar6 + -0xc0) = uVar20;
      *(undefined8 *)(puVar6 + -0xb8) = uVar27;
      *(undefined1 **)(puVar6 + -0xb0) = puVar6 + -0x80;
      *(undefined **)(puVar6 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (*pcRam0000000003ec01e0)(auVar35._0_8_,auVar35._8_8_);
      return uVar12;
    }
    fVar33 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    uVar19 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar33 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                             plVar15,4,0);
    uVar12 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar19,uRam0000000003d5e780);
    *(undefined8 *)(puVar6 + -0xa0) = 0x3d5e780;
    *(undefined8 *)(puVar6 + -0x98) = 0x3d5e868;
    *(long **)(puVar6 + -0x90) = plVar15;
    *(long **)(puVar6 + -0x88) = plVar14;
    *(undefined1 **)(puVar6 + -0x80) = puVar6 + -0x40;
    *(undefined **)(puVar6 + -0x78) = &UNK_01513b44;
    if ((bRam0000000003eb66c1 & 1) == 0) {
      func_0x00f78a20(0x3d208f0,plVar14,uRam0000000003d5e868);
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb66c1 = 1;
    }
    if ((uVar12 != 0) && (*(char *)(uVar12 + 0xe8) != '\0')) {
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar9 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
      if (iVar9 != 0) {
        lVar11 = func_0x00f78adc(plVar14,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar17 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0,0);
        if ((uVar17 & 1) == 0) {
          if (plVar14 == (long *)0x0) goto code_r0x018eef34;
          uVar19 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
        }
        else {
          if (lVar11 == 0) {
code_r0x018eef34:
            auVar35 = func_0x00f78af4();
            uVar17 = auVar35._0_8_;
            *(undefined8 *)(puVar6 + -0xd0) = 0x3d5e780;
            *(long *)(puVar6 + -200) = lVar11;
            *(long **)(puVar6 + -0xc0) = plVar14;
            *(ulong *)(puVar6 + -0xb8) = uVar12;
            *(undefined1 **)(puVar6 + -0xb0) = puVar6 + -0x80;
            *(undefined **)(puVar6 + -0xa8) =
                 &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
            if ((bRam0000000003eb66c2 & 1) == 0) {
              func_0x00f78a20(0x3d20bc0);
              func_0x00f78a20(0x3d25440);
              bRam0000000003eb66c2 = 1;
            }
            if ((uVar17 != 0) && (*(char *)(uVar17 + 0xe8) != '\0')) {
              if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
              if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar17,auVar35._8_8_,cVar2 != '\0',0);
            }
            return uVar17;
          }
          uVar19 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar11,0);
        }
        *(undefined8 *)(uVar12 + 200) = uVar19;
      }
      *(long **)(uVar12 + 0x48) = plVar14;
    }
    return uVar12;
  }
  if (iVar9 == 2) {
    puVar22 = (ulong *)0x3d79020;
    goto LAB_0149cb90;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d411e0);
  if (lVar11 != 0) {
    uVar12 = *(ulong *)(lVar11 + 0x10);
    if (uVar12 == 0) {
      return 0;
    }
    *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
    *(ulong *)(puVar5 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x30);
    *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar5 + -0x28);
    *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
    *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
    *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
    *(ulong *)(puVar5 + -0x68) = uVar12;
    *(int *)(puVar5 + -0x6c) = iVar9;
    lVar11 = *(long *)(uVar12 + 0x68);
    if (lVar11 == 0) {
      puVar7 = puVar5 + -0x68;
      lVar30 = 1;
    }
    else {
      lVar30 = *(long *)(lVar11 + 0x18);
      if (lVar30 == 0) {
        return uVar12;
      }
      puVar7 = (undefined1 *)(lVar11 + 0x20);
    }
    lVar11 = 0;
    goto code_r0x015606b4;
  }
  uVar13 = func_0x00f78af4();
  puVar4 = puVar5 + -0x60;
  *(undefined8 *)(puVar5 + -0x60) = 0x3d411e0;
  *(undefined8 *)(puVar5 + -0x58) = param_4;
  *(undefined8 *)(puVar5 + -0x50) = uVar19;
  *(undefined8 *)(puVar5 + -0x48) = uVar20;
  *(undefined1 **)(puVar5 + -0x40) = puVar7;
  *(code **)(puVar5 + -0x38) = Atlas_UI_Screens_MultiplayerModeSelectScreen__CreateRoomPressed;
  puVar7 = puVar5 + -0x40;
  uVar27 = 0x3eb4000;
  uVar19 = 0x3d411e0;
  uVar20 = uVar32;
  if ((bRam0000000003eb4a05 & 1) == 0) {
    func_0x00f78a20(0x3d411e0);
    func_0x00f78a20(0x3d79018);
    bRam0000000003eb4a05 = 1;
    uVar20 = uVar32;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar13,uRam0000000003d411e0);
  if (lVar11 != 0) {
    uVar20 = 0x3d79018;
    uVar12 = *(ulong *)(lVar11 + 0x18);
    if (uVar12 != 0) {
      uVar32 = 0x149cc54;
      goto code_r0x015609bc;
    }
    puVar7 = *(undefined1 **)(puVar5 + -0x40);
    puVar31 = *(undefined **)(puVar5 + -0x38);
    uVar19 = *(undefined8 *)(puVar5 + -0x50);
    uVar20 = *(undefined8 *)(puVar5 + -0x48);
    puVar6 = puVar5 + -0x30;
    unaff_x22 = *(long *)(puVar5 + -0x60);
    param_4 = *(undefined8 *)(puVar5 + -0x58);
    uVar12 = /*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018;
    goto code_r0x0151398c;
  }
  uVar32 = func_0x00f78af4();
  puVar4 = puVar5 + -0x90;
  *(undefined8 *)(puVar5 + -0x90) = 0x3d411e0;
  *(undefined8 *)(puVar5 + -0x88) = 0x3d411e0;
  *(undefined8 *)(puVar5 + -0x80) = 0x3eb4000;
  *(undefined8 *)(puVar5 + -0x78) = uVar13;
  *(undefined1 **)(puVar5 + -0x70) = puVar7;
  *(code **)(puVar5 + -0x68) = Atlas_UI_Screens_MultiplayerModeSelectScreen__JoinRoomPressed;
  puVar7 = puVar5 + -0x70;
  uVar27 = 0x3eb4000;
  uVar19 = 0x3d411e0;
  if ((bRam0000000003eb4a06 & 1) == 0) {
    func_0x00f78a20(0x3d411e0);
    func_0x00f78a20(0x3d79020);
    bRam0000000003eb4a06 = 1;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar32,uRam0000000003d411e0);
  if (lVar11 != 0) {
    uVar20 = 0x3d79020;
    uVar12 = *(ulong *)(lVar11 + 0x20);
    if (uVar12 == 0) {
      puVar7 = *(undefined1 **)(puVar5 + -0x70);
      puVar31 = *(undefined **)(puVar5 + -0x68);
      uVar19 = *(undefined8 *)(puVar5 + -0x80);
      uVar20 = *(undefined8 *)(puVar5 + -0x78);
      puVar6 = puVar5 + -0x60;
      unaff_x22 = *(long *)(puVar5 + -0x90);
      param_4 = *(undefined8 *)(puVar5 + -0x88);
      uVar12 = /*STR('event:/UI/Front_End/GeneralButton4')*/ uRam0000000003d79020;
      goto code_r0x0151398c;
    }
    uVar32 = 0x149cce0;
code_r0x015609bc:
    uVar13 = 0;
    *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
    *(ulong *)(puVar4 + -0x38) = unaff_x23;
    *(long *)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = uVar19;
    *(undefined8 *)(puVar4 + -0x20) = uVar27;
    *(undefined8 *)(puVar4 + -0x18) = uVar20;
    *(undefined1 **)(puVar4 + -0x10) = puVar7;
    *(undefined8 *)(puVar4 + -8) = uVar32;
    *(ulong *)(puVar4 + -0x58) = uVar12;
    lVar11 = *(long *)(uVar12 + 0x68);
    if (lVar11 == 0) {
      puVar5 = puVar4 + -0x58;
      lVar30 = 1;
    }
    else {
      lVar30 = *(long *)(lVar11 + 0x18);
      if (lVar30 == 0) {
        return uVar12;
      }
      puVar5 = (undefined1 *)(lVar11 + 0x20);
    }
    lVar11 = 0;
    goto code_r0x01560a04;
  }
  uVar19 = func_0x00f78af4();
  *(undefined8 *)(puVar5 + -0xc0) = 0x3d411e0;
  *(undefined8 *)(puVar5 + -0xb8) = 0x3d411e0;
  *(undefined8 *)(puVar5 + -0xb0) = 0x3eb4000;
  *(undefined8 *)(puVar5 + -0xa8) = uVar32;
  *(undefined1 **)(puVar5 + -0xa0) = puVar7;
  *(code **)(puVar5 + -0x98) = Atlas_UI_Screens_MultiplayerModeSelectScreen__OnPartyInvite;
  if ((bRam0000000003eb4a07 & 1) == 0) {
    func_0x00f78a20(0x3d3e0d8);
    func_0x00f78a20(0x3d3e130);
    func_0x00f78a20(0x3d3e178);
    func_0x00f78a20(0x3d411e0);
    func_0x00f78a20(0x3d411e8);
    bRam0000000003eb4a07 = 1;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar19,uRam0000000003d411e8);
  if ((lVar11 != 0) && (*(long *)(lVar11 + 0xa0) != 0)) {
    uVar12 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar11 + 0xa0),uRam0000000003d3e0d8);
    if ((uVar12 & 1) != 0) {
      return uVar12;
    }
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar19,uRam0000000003d411e8);
    if ((lVar11 != 0) && (*(long *)(lVar11 + 0xe0) != 0)) {
      uVar12 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar11 + 0xe0),uRam0000000003d3e130);
      if ((uVar12 & 1) != 0) {
        return uVar12;
      }
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar19,uRam0000000003d411e8);
      if ((lVar11 != 0) && (*(long *)(lVar11 + 0x98) != 0)) {
        uVar12 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar11 + 0x98),uRam0000000003d3e178);
        if ((uVar12 & 1) != 0) {
          return uVar12;
        }
        lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar19,uRam0000000003d411e0);
        if (lVar11 != 0) {
          uVar12 = *(ulong *)(lVar11 + 0x20);
          if (uVar12 == 0) {
            return 0;
          }
          puVar7 = *(undefined1 **)(puVar5 + -0xa0);
          uVar32 = *(undefined8 *)(puVar5 + -0x98);
          uVar27 = *(undefined8 *)(puVar5 + -0xb0);
          uVar20 = *(undefined8 *)(puVar5 + -0xa8);
          puVar4 = puVar5 + -0x90;
          unaff_x22 = *(long *)(puVar5 + -0xc0);
          uVar19 = *(undefined8 *)(puVar5 + -0xb8);
          goto code_r0x015609bc;
        }
      }
    }
  }
  unaff_x19 = func_0x00f78af4();
  *(undefined8 *)(puVar5 + -0x110) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x108) = unaff_x25;
  *(undefined8 *)(puVar5 + -0x100) = unaff_x24;
  *(ulong *)(puVar5 + -0xf8) = unaff_x23;
  *(undefined8 *)(puVar5 + -0xf0) = 0x3d411e0;
  *(undefined8 *)(puVar5 + -0xe8) = 0x3eb4000;
  *(undefined8 *)(puVar5 + -0xe0) = 0x3d411e8;
  *(undefined8 *)(puVar5 + -0xd8) = uVar19;
  *(undefined1 **)(puVar5 + -0xd0) = puVar5 + -0xa0;
  *(code **)(puVar5 + -200) = Atlas_UI_Screens_MultiplayerModeSelectScreen__OnBeforeExit;
  unaff_x29 = puVar5 + -0xd0;
  unaff_x20 = 0x3eb4000;
  unaff_x21 = 0x3d411e8;
  if ((bRam0000000003eb4a03 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d2c840);
    func_0x00f78a20(0x3d5a9e8);
    func_0x00f78a20(0x3d411d8);
    func_0x00f78a20(0x3d411e8);
    bRam0000000003eb4a03 = 1;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(unaff_x19,uRam0000000003d411e8);
  if ((lVar11 == 0) || (unaff_x22 = *(long *)(lVar11 + 0x28), unaff_x22 == 0)) {
LAB_0149cb08:
    func_0x00f78af4();
LAB_0149cb0c:
    unaff_x30 = Atlas_UI_Screens_MultiplayerModeSelectScreen__GameTypePressed;
    auVar35 = func_0x00f78e5c();
    uVar19 = auVar35._8_8_;
    param_4 = auVar35._0_8_;
    puVar5 = puVar5 + -0x110;
    goto code_r0x0149cb10;
  }
  unaff_x23 = 0x3d1b598;
  unaff_x24 = 0x3d5a000;
  unaff_x25 = 0x3d2a000;
  unaff_x20 = *(undefined8 *)(unaff_x22 + 0x48);
  unaff_x21 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,unaff_x19,uRam0000000003d5a9e8,uRam0000000003d2a320);
  uVar20 = 0;
  plVar14 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x20,unaff_x21);
  if ((plVar14 != (long *)0x0) && (*plVar14 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) goto LAB_0149cb0c;
  unaff_x20 = 0x3d411d8;
  *(long **)(unaff_x22 + 0x48) = plVar14;
  uVar20 = uRam0000000003d2c840;
  Atlas_UI_Screens_AtlasScreen_ModeSelectScreenBehaviour__ModeSelectScreen_TransitionData___SetScreenHandlePartyInvite
            (unaff_x19,0);
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(unaff_x19,uRam0000000003d411d8);
  if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x68), lVar11 == 0)) goto LAB_0149cb08;
  *(undefined8 *)(puVar5 + -0x150) = 0x3d5a000;
  *(undefined8 *)(puVar5 + -0x148) = 0x3d1b598;
  *(long *)(puVar5 + -0x140) = unaff_x22;
  *(ulong *)(puVar5 + -0x138) = unaff_x21;
  *(undefined8 *)(puVar5 + -0x130) = 0x3d411d8;
  *(undefined8 *)(puVar5 + -0x128) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x120) = unaff_x29;
  *(undefined8 *)(puVar5 + -0x118) = 0x149ca94;
  if ((bRam0000000003eb4d9b & 1) == 0) {
    func_0x00f78a20(0x3d1fa78,0);
    bRam0000000003eb4d9b = 1;
  }
  plVar14 = *(long **)(lVar11 + 0x148);
  uVar12 = 0x3eb4000;
  if (plVar14 == (long *)0x0) {
code_r0x01514e70:
    plVar14 = *(long **)(lVar11 + 0x150);
    if (plVar14 != (long *)0x0) {
      uVar17 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
      if (uVar17 == 0) goto code_r0x01514ff8;
      uVar12 = uVar17;
      if (0 < (int)*(ulong *)(uVar17 + 0x18)) {
        unaff_x21 = 0;
        uVar23 = *(ulong *)(uVar17 + 0x18) & 0xffffffff;
        unaff_x22 = uVar17 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar23 <= unaff_x21) goto code_r0x01514fe0;
          plVar14 = *(long **)(unaff_x22 + unaff_x21 * 8);
          if ((plVar14 != (long *)0x0) &&
             (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar14 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Deselected*/ func_0x0151438c(lVar11);
          unaff_x21 = unaff_x21 + 1;
          uVar23 = (ulong)*(uint *)(uVar17 + 0x18);
        } while ((long)unaff_x21 < (long)(int)*(uint *)(uVar17 + 0x18));
      }
    }
    plVar14 = *(long **)(lVar11 + 0x158);
    if (plVar14 != (long *)0x0) {
      uVar17 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
      if (uVar17 == 0) goto code_r0x01514ff8;
      uVar12 = uVar17;
      if (0 < (int)*(ulong *)(uVar17 + 0x18)) {
        unaff_x21 = 0;
        uVar23 = *(ulong *)(uVar17 + 0x18) & 0xffffffff;
        unaff_x22 = uVar17 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar23 <= unaff_x21) goto code_r0x01514fe0;
          plVar14 = *(long **)(unaff_x22 + unaff_x21 * 8);
          if ((plVar14 != (long *)0x0) &&
             (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar14 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Pressed*/ func_0x015144d4(lVar11);
          unaff_x21 = unaff_x21 + 1;
          uVar23 = (ulong)*(uint *)(uVar17 + 0x18);
        } while ((long)unaff_x21 < (long)(int)*(uint *)(uVar17 + 0x18));
      }
    }
    plVar14 = *(long **)(lVar11 + 0x160);
    if (plVar14 == (long *)0x0) {
      return 0;
    }
    uVar17 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
    if (uVar17 != 0) {
      if ((int)*(ulong *)(uVar17 + 0x18) < 1) {
        return uVar17;
      }
      unaff_x21 = 0;
      uVar12 = *(ulong *)(uVar17 + 0x18) & 0xffffffff;
      unaff_x22 = uVar17 + 0x20;
      while (unaff_x21 < uVar12) {
        plVar14 = *(long **)(unaff_x22 + unaff_x21 * 8);
        if ((plVar14 != (long *)0x0) &&
           (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar14 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x01514fec;
        uVar23 = /*Atlas.UI.UIAtlasButton$$remove_SelectedOrPressed*/ func_0x0151461c(lVar11);
        unaff_x21 = unaff_x21 + 1;
        uVar12 = (ulong)*(uint *)(uVar17 + 0x18);
        if ((long)(int)*(uint *)(uVar17 + 0x18) <= (long)unaff_x21) {
          return uVar23;
        }
      }
code_r0x01514fe0:
      uVar19 = func_0x00f78b24();
      func_0x00f78ac0(uVar19,0);
      plVar14 = extraout_x1;
      lVar30 = extraout_x8;
code_r0x01514fec:
      unaff_x23 = 0x3d1fa78;
      func_0x00f78e5c(plVar14,lVar30);
      uVar12 = uVar17;
    }
  }
  else {
    uVar17 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
    if (uVar17 != 0) {
      uVar12 = uVar17;
      if (0 < (int)*(ulong *)(uVar17 + 0x18)) {
        unaff_x21 = 0;
        uVar23 = *(ulong *)(uVar17 + 0x18) & 0xffffffff;
        unaff_x22 = uVar17 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar23 <= unaff_x21) goto code_r0x01514fe0;
          plVar14 = *(long **)(unaff_x22 + unaff_x21 * 8);
          if ((plVar14 != (long *)0x0) &&
             (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar14 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Selected*/ func_0x01514244(lVar11);
          unaff_x21 = unaff_x21 + 1;
          uVar23 = (ulong)*(uint *)(uVar17 + 0x18);
        } while ((long)unaff_x21 < (long)(int)*(uint *)(uVar17 + 0x18));
      }
      goto code_r0x01514e70;
    }
  }
code_r0x01514ff8:
  auVar35 = func_0x00f78af4();
  uVar19 = auVar35._8_8_;
  *(long *)(puVar5 + -0x180) = unaff_x22;
  *(ulong *)(puVar5 + -0x178) = unaff_x21;
  *(ulong *)(puVar5 + -0x170) = uVar12;
  *(long *)(puVar5 + -0x168) = lVar11;
  *(undefined1 **)(puVar5 + -0x160) = puVar5 + -0x120;
  *(undefined **)(puVar5 + -0x158) = &Atlas_UI_UIAtlasButtonGroup__Subscribe;
  if ((bRam0000000003eb4da9 & 1) == 0) {
    func_0x00f78a20(0x3d3c5b8);
    func_0x00f78a20(0x3d3c5c0);
    bRam0000000003eb4da9 = 1;
  }
  lVar11 = *(long *)(auVar35._0_8_ + 0x40);
  if (lVar11 != 0) {
    uVar12 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar11,uVar19,uRam0000000003d3c5c0);
    if ((uVar12 & 1) != 0) {
      return uVar12;
    }
    uVar12 = *(ulong *)(auVar35._0_8_ + 0x40);
    if (uVar12 != 0) {
      uVar20 = *(undefined8 *)(puVar5 + -0x170);
      uVar17 = *(ulong *)(puVar5 + -0x168);
      uVar32 = *(undefined8 *)(puVar5 + -0x180);
      uVar27 = *(undefined8 *)(puVar5 + -0x178);
      *(undefined8 *)(puVar5 + -0x170) = uVar20;
      *(ulong *)(puVar5 + -0x168) = uVar17;
      *(undefined8 *)(puVar5 + -0x160) = *(undefined8 *)(puVar5 + -0x160);
      *(undefined8 *)(puVar5 + -0x158) = *(undefined8 *)(puVar5 + -0x158);
      lVar11 = *(long *)(uVar12 + 0x10);
      puVar18 = puRam0000000003d3c5b8;
      if (lVar11 == 0) {
code_r0x0242716c:
        uVar19 = uVar20;
        uVar12 = uVar17;
        uVar23 = func_0x00f78af4();
        lVar11 = extraout_x9;
        uVar21 = extraout_w8;
code_r0x02427170:
        *(uint *)(uVar12 + 0x18) = uVar21 + 1;
      }
      else {
        uVar21 = *(uint *)(uVar12 + 0x18);
        uVar23 = uVar12;
        if (uVar21 != *(uint *)(lVar11 + 0x18)) goto code_r0x02427170;
        puVar18 = *(undefined8 **)(*(long *)(puRam0000000003d3c5b8[3] + 0xc0) + 0x60);
        uVar23 = (*(code *)*puVar18)(uVar12,uVar21 + 1);
        lVar11 = *(long *)(uVar12 + 0x10);
        uVar21 = *(uint *)(uVar12 + 0x18);
        *(uint *)(uVar12 + 0x18) = uVar21 + 1;
        uVar17 = uVar12;
        uVar20 = uVar19;
        if (lVar11 == 0) goto code_r0x0242716c;
      }
      if (uVar21 < *(uint *)(lVar11 + 0x18)) {
        *(undefined8 *)(lVar11 + (long)(int)uVar21 * 8 + 0x20) = uVar19;
        *(int *)(uVar12 + 0x1c) = *(int *)(uVar12 + 0x1c) + 1;
        return uVar23;
      }
      uVar20 = func_0x00f78b24();
      auVar35 = func_0x00f78ac0(uVar20,0);
      lVar30 = auVar35._8_8_;
      lVar11 = auVar35._0_8_;
      *(undefined8 *)(puVar5 + -0x1b0) = 0x3d5a000;
      *(ulong *)(puVar5 + -0x1a8) = unaff_x23;
      *(undefined8 *)(puVar5 + -0x1a0) = uVar32;
      *(undefined8 *)(puVar5 + -0x198) = uVar27;
      *(undefined8 *)(puVar5 + -400) = uVar19;
      *(ulong *)(puVar5 + -0x188) = uVar12;
      *(undefined1 **)(puVar5 + -0x180) = puVar5 + -0x160;
      *(undefined **)(puVar5 + -0x178) =
           &System_Collections_Generic_List_object___System_Collections_IList_Add;
      (*(code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x48))(lVar30,0x14);
      if (lVar11 == 0) {
        func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
        pcVar29 = (code *)SoftwareBreakpoint(1,0x2427350);
        (*pcVar29)();
      }
      pcVar29 = (code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x28);
      lVar24 = *(long *)(*(long *)(puVar18[3] + 0xc0) + 0x38);
      if ((*(ushort *)(lVar24 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar24);
      }
      if (lVar30 == 0) {
        lVar25 = 0;
      }
      else {
        lVar25 = func_0x00f78adc(lVar30,lVar24);
        if (lVar25 == 0) {
          func_0x00f78e5c(lVar30,lVar24);
          goto code_r0x0242734c;
        }
      }
      (*pcVar29)(lVar11,lVar25,*(undefined8 *)(*(long *)(puVar18[3] + 0xc0) + 0x28));
      iVar9 = (*(code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x68))(lVar11);
      return (ulong)(iVar9 - 1);
    }
  }
  auVar34 = func_0x00f78af4();
  lVar30 = auVar34._8_8_;
  lVar11 = auVar34._0_8_;
  *(long *)(puVar5 + -0x1b0) = unaff_x22;
  *(undefined8 *)(puVar5 + -0x1a8) = 0x3eb4000;
  *(undefined1 (*) [16])(puVar5 + -0x1a0) = auVar35;
  *(undefined1 **)(puVar5 + -400) = puVar5 + -0x160;
  *(undefined **)(puVar5 + -0x188) = &Atlas_UI_UIAtlasButton__OnPointerClick;
  if ((bRam0000000003eb4d9d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d9d = 1;
  }
  uVar12 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(lVar11 + 0x16c),0);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  if (lVar30 != 0) {
    if (*(int *)(lVar30 + 0x134) != 0) {
      return uVar12;
    }
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(lVar11);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar11,lVar30,0);
    uVar19 = *(undefined8 *)(lVar11 + 0x118);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar19,0,0);
    if ((int)uVar12 == 0) {
      return uVar12;
    }
    bVar8 = false;
    uVar19 = *(undefined8 *)(puVar5 + -400);
    uVar27 = *(undefined8 *)(puVar5 + -0x188);
    uVar20 = *(undefined8 *)(puVar5 + -0x1a0);
    uVar13 = *(undefined8 *)(puVar5 + -0x198);
    puVar7 = puVar5 + -0x180;
    uVar32 = *(undefined8 *)(puVar5 + -0x1b0);
    uVar28 = *(undefined8 *)(puVar5 + -0x1a8);
    goto Atlas_UI_UIAtlasButton__SelectButton;
  }
  auVar35 = func_0x00f78af4();
  plVar15 = auVar35._8_8_;
  plVar14 = auVar35._0_8_;
  *(undefined8 *)(puVar5 + -0x1f0) = 0x3d5a000;
  *(ulong *)(puVar5 + -0x1e8) = unaff_x23;
  *(long *)(puVar5 + -0x1e0) = unaff_x22;
  *(undefined8 *)(puVar5 + -0x1d8) = 0x3eb4000;
  *(long *)(puVar5 + -0x1d0) = lVar11;
  *(undefined8 *)(puVar5 + -0x1c8) = 0;
  *(undefined1 **)(puVar5 + -0x1c0) = puVar5 + -400;
  *(undefined **)(puVar5 + -0x1b8) = &Atlas_UI_UIAtlasButton__OnSubmit;
  if ((bRam0000000003eb4d9e & 1) == 0) {
    func_0x00f78a20(0x3d21bd8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9e = 1;
  }
  uVar12 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)((long)plVar14 + 0x16c),0);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  if (plVar15 == (long *)0x0) {
    lVar11 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    unaff_x23 = 1;
  }
  else {
    if (*(byte *)(*plVar15 + 300) < *(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300)) {
      unaff_x23 = 1;
    }
    else {
      unaff_x23 = (ulong)(*(long *)(*(long *)(*plVar15 + 200) +
                                    (ulong)*(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300) * 8 + -8) !=
                         /*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8);
    }
    lVar11 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    if (*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) <= *(byte *)(*plVar15 + 300)) {
      unaff_x23 = (ulong)((uint)(*(long *)(*(long *)(*plVar15 + 200) +
                                           (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 + -8) !=
                                /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0) & (uint)unaff_x23);
    }
  }
  if ((int)unaff_x23 == 0) {
code_r0x015152e8:
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(plVar14);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(plVar14,plVar15,0);
    uVar12 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
    if (((int)uVar12 == 0) ||
       (uVar12 = (**(code **)(*plVar14 + 0x2b8))(plVar14,*(undefined8 *)(*plVar14 + 0x2c0)),
       (int)uVar12 == 0)) {
      return uVar12;
    }
    (**(code **)(*plVar14 + 0x2d8))(plVar14,2,0,*(undefined8 *)(*plVar14 + 0x2e0));
    puVar31 = &UNK_01515354;
    plVar16 = plVar14;
  }
  else {
    unaff_x23 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar9 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar11,0);
    if (iVar9 == 0) goto code_r0x015152e8;
    if (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,plVar14,0);
      if ((uVar12 & 1) != 0) {
        return uVar12;
      }
      goto code_r0x015152e8;
    }
    puVar31 = &Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0;
    plVar16 = (long *)func_0x00f78af4();
  }
  *(long *)(puVar5 + -0x220) = lVar11;
  *(undefined8 *)(puVar5 + -0x218) = 1;
  *(long **)(puVar5 + -0x210) = plVar15;
  *(long **)(puVar5 + -0x208) = plVar14;
  *(undefined1 **)(puVar5 + -0x200) = puVar5 + -0x1c0;
  *(undefined **)(puVar5 + -0x1f8) = puVar31;
  if ((bRam0000000003eb4da6 & 1) == 0) {
    func_0x00f78a20(0x3d29448);
    bRam0000000003eb4da6 = 1;
  }
  uVar12 = func_0x00f78aec(/*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d_TypeInfo*/ uRam0000000003d29448);
  /*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d$$.ctor*/ func_0x0156c5e4(uVar12,0,0);
  if (uVar12 != 0) {
    *(long **)(uVar12 + 0x20) = plVar16;
    return uVar12;
  }
  auVar34 = func_0x00f78af4();
  *(long *)(puVar5 + -0x250) = lVar11;
  *(undefined8 *)(puVar5 + -0x248) = 0x3d29448;
  *(undefined8 *)(puVar5 + -0x240) = 0;
  *(long **)(puVar5 + -0x238) = plVar16;
  *(undefined1 **)(puVar5 + -0x230) = puVar5 + -0x200;
  *(undefined **)(puVar5 + -0x228) = &Atlas_UI_UIAtlasButton__OnSelect;
  if ((bRam0000000003eb4d9f & 1) == 0) {
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9f = 1;
  }
  uVar12 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(auVar34._0_8_ + 0x16c),0);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  if (auVar34._8_8_ == (long *)0x0) {
code_r0x0151546c:
    bVar8 = false;
  }
  else {
    lVar11 = *auVar34._8_8_;
    if (*(byte *)(lVar11 + 300) < *(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300)) goto code_r0x0151546c;
    bVar8 = *(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 +
                     -8) == /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0;
  }
  iVar9 = /*Core.Input.InputManager$$get_IsCurrentSelectionFromUser*/ func_0x0164ad7c(0);
  if ((iVar9 != 0) && (!bVar8)) {
    /*Atlas.UI.UIAtlasButton$$PlayButtonSelectSound*/ func_0x01514cec(auVar34._0_8_);
  }
  uVar19 = *(undefined8 *)(puVar5 + -0x230);
  uVar27 = *(undefined8 *)(puVar5 + -0x228);
  uVar20 = *(undefined8 *)(puVar5 + -0x240);
  uVar13 = *(undefined8 *)(puVar5 + -0x238);
  puVar7 = puVar5 + -0x220;
  uVar32 = *(undefined8 *)(puVar5 + -0x250);
  uVar28 = *(undefined8 *)(puVar5 + -0x248);
Atlas_UI_UIAtlasButton__SelectButton:
  uVar12 = auVar34._0_8_;
  *(undefined8 *)(puVar7 + -0x30) = uVar32;
  *(undefined8 *)(puVar7 + -0x28) = uVar28;
  *(undefined8 *)(puVar7 + -0x20) = uVar20;
  *(undefined8 *)(puVar7 + -0x18) = uVar13;
  *(undefined8 *)(puVar7 + -0x10) = uVar19;
  *(undefined8 *)(puVar7 + -8) = uVar27;
  puVar5 = puVar7 + -0x10;
  uVar19 = 0;
  if ((*(char *)(uVar12 + 0x140) != '\0') && (bVar8)) {
    return uVar12;
  }
  /*UnityEngine.UI.Selectable$$OnSelect*/ func_0x032e4efc(uVar12,auVar34._8_8_,0);
  if (*(long *)(uVar12 + 0x118) != 0) {
    /*Atlas.UI.UIAtlasButtonGroup$$OnButtonSelected*/ func_0x01514894(*(long *)(uVar12 + 0x118),uVar12,auVar34._8_8_);
  }
  uVar17 = *(ulong *)(uVar12 + 0x148);
  if (uVar17 == 0) {
    uVar17 = *(ulong *)(uVar12 + 0x160);
    if (uVar17 == 0) {
      return 0;
    }
    puVar5 = *(undefined1 **)(puVar7 + -0x10);
    puVar31 = *(undefined **)(puVar7 + -8);
    uVar19 = *(undefined8 *)(puVar7 + -0x20);
    uVar32 = *(undefined8 *)(puVar7 + -0x30);
    auVar34._8_8_ = *(undefined8 *)(puVar7 + -0x28);
    auVar34._0_8_ = *(undefined8 *)(puVar7 + -0x18);
  }
  else {
    puVar31 = &UNK_01514868;
    puVar7 = puVar7 + -0x30;
  }
  uVar20 = 0;
  *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar7 + -0x48) = 0x3d2a000;
  *(undefined8 *)(puVar7 + -0x40) = 0x3d5a000;
  *(ulong *)(puVar7 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar7 + -0x30) = uVar32;
  *(long *)(puVar7 + -0x28) = auVar34._8_8_;
  *(undefined8 *)(puVar7 + -0x20) = uVar19;
  *(long *)(puVar7 + -0x18) = auVar34._0_8_;
  *(undefined1 **)(puVar7 + -0x10) = puVar5;
  *(undefined **)(puVar7 + -8) = puVar31;
  *(ulong *)(puVar7 + -0x58) = uVar17;
  lVar11 = *(long *)(uVar17 + 0x68);
  if (lVar11 == 0) {
    puVar5 = puVar7 + -0x58;
    lVar30 = 1;
  }
  else {
    lVar30 = *(long *)(lVar11 + 0x18);
    if (lVar30 == 0) {
      return uVar17;
    }
    puVar5 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar24 = *(long *)(puVar5 + lVar11 * 8);
    pcVar29 = *(code **)(lVar24 + 0x10);
    plVar14 = *(long **)(lVar24 + 0x20);
    lVar24 = *(long *)(lVar24 + 0x28);
    if (*(short *)(lVar24 + 0x48) == -1) {
      func_0x00f78ad8(lVar24,uVar20);
    }
    iVar9 = func_0x00f78a4c(lVar24);
    if (iVar9 == 0) {
      if ((((plVar14 == (long *)0x0) || (*(short *)(lVar24 + 0x48) == -1)) ||
          ((*(byte *)(*plVar14 + 0x115) & 1) != 0)) || (*(long *)(uVar17 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar9 = func_0x00f78a44(lVar24);
      iVar10 = func_0x00f78ec0(lVar24);
      if (iVar9 == 0) {
        uVar3 = *(ushort *)(lVar24 + 0x48);
        if (iVar10 == 0) {
          lVar24 = *plVar14 + (ulong)uVar3 * 0x10;
          auVar35 = (**(code **)(lVar24 + 0x138))(plVar14,*(undefined8 *)(lVar24 + 0x140));
          goto code_r0x02924da4;
        }
        lVar24 = func_0x00f78a48(lVar24);
        lVar25 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar25 + 0x12a);
        if (uVar12 != 0) {
          piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar24) {
              puVar18 = (undefined8 *)(lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar26 = piVar26 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar18 = (undefined8 *)func_0x00fac1f0(plVar14,lVar24,(ulong)uVar3);
code_r0x02924e68:
        pcVar29 = (code *)*puVar18;
        puVar18 = (undefined8 *)puVar18[1];
      }
      else {
        if (iVar10 == 0) {
          uVar19 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar25 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar25 + 0x12a);
          if (uVar12 != 0) {
            piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)(lVar24 + 0x18)) {
                lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar24 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar26 = piVar26 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          lVar25 = func_0x00fac1f0(plVar14);
code_r0x02924e40:
          uVar19 = *(undefined8 *)(lVar25 + 8);
        }
        puVar18 = (undefined8 *)func_0x00f78acc(uVar19,lVar24);
        pcVar29 = (code *)*puVar18;
      }
      auVar35 = (*pcVar29)(plVar14,puVar18);
    }
    else if (*(char *)(lVar24 + 0x4a) == '\0') {
      auVar35 = (*pcVar29)(lVar24);
    }
    else {
code_r0x02924d98:
      auVar35 = (*pcVar29)(plVar14,lVar24);
    }
code_r0x02924da4:
    uVar20 = auVar35._8_8_;
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar30) {
      return auVar35._0_8_;
    }
  } while( true );
code_r0x015606b4:
  lVar24 = *(long *)(puVar7 + lVar11 * 8);
  pcVar29 = *(code **)(lVar24 + 0x10);
  plVar14 = *(long **)(lVar24 + 0x20);
  lVar24 = *(long *)(lVar24 + 0x28);
  if (*(short *)(lVar24 + 0x48) == -1) {
    func_0x00f78ad8(lVar24);
  }
  iVar9 = func_0x00f78a4c(lVar24);
  if (iVar9 == 0) {
    if (plVar14 == (long *)0x0) {
      uVar17 = (*pcVar29)(puVar5 + -0x7c,uVar20,lVar24);
    }
    else {
      if (((*(short *)(lVar24 + 0x48) == -1) || ((*(byte *)(*plVar14 + 0x115) & 1) != 0)) ||
         (*(long *)(uVar12 + 0x18) == 0)) goto code_r0x01560784;
      iVar9 = func_0x00f78a44(lVar24);
      iVar10 = func_0x00f78ec0(lVar24);
      if (iVar9 == 0) {
        uVar3 = *(ushort *)(lVar24 + 0x48);
        if (iVar10 == 0) {
          lVar24 = *plVar14 + (ulong)uVar3 * 0x10;
          uVar17 = (**(code **)(lVar24 + 0x138))
                             (plVar14,*(undefined4 *)(puVar5 + -0x6c),uVar20,
                              *(undefined8 *)(lVar24 + 0x140));
          goto code_r0x015607ac;
        }
        lVar24 = func_0x00f78a48(lVar24);
        uVar1 = *(undefined4 *)(puVar5 + -0x6c);
        lVar25 = *plVar14;
        uVar17 = (ulong)*(ushort *)(lVar25 + 0x12a);
        if (uVar17 != 0) {
          piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar24) {
              puVar18 = (undefined8 *)(lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x01560884;
            }
            piVar26 = piVar26 + 4;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        puVar18 = (undefined8 *)func_0x00fac1f0(plVar14,lVar24,(ulong)uVar3);
code_r0x01560884:
        pcVar29 = (code *)*puVar18;
        puVar18 = (undefined8 *)puVar18[1];
      }
      else {
        uVar1 = *(undefined4 *)(puVar5 + -0x6c);
        if (iVar10 == 0) {
          uVar19 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar25 = *plVar14;
          uVar17 = (ulong)*(ushort *)(lVar25 + 0x12a);
          if (uVar17 != 0) {
            piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)(lVar24 + 0x18)) {
                lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar24 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01560854;
              }
              piVar26 = piVar26 + 4;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          lVar25 = func_0x00fac1f0(plVar14);
code_r0x01560854:
          uVar19 = *(undefined8 *)(lVar25 + 8);
        }
        puVar18 = (undefined8 *)func_0x00f78acc(uVar19,lVar24);
        pcVar29 = (code *)*puVar18;
      }
      uVar17 = (*pcVar29)(plVar14,uVar1,uVar20,puVar18);
    }
  }
  else if (*(char *)(lVar24 + 0x4a) == '\x02') {
    uVar17 = (*pcVar29)(*(undefined4 *)(puVar5 + -0x6c),uVar20,lVar24);
  }
  else {
code_r0x01560784:
    uVar17 = (*pcVar29)(plVar14,*(undefined4 *)(puVar5 + -0x6c),uVar20,lVar24);
  }
code_r0x015607ac:
  lVar11 = lVar11 + 1;
  if (lVar11 == lVar30) {
    return uVar17;
  }
  goto code_r0x015606b4;
code_r0x01560a04:
  lVar24 = *(long *)(puVar5 + lVar11 * 8);
  pcVar29 = *(code **)(lVar24 + 0x10);
  plVar14 = *(long **)(lVar24 + 0x20);
  lVar24 = *(long *)(lVar24 + 0x28);
  if (*(short *)(lVar24 + 0x48) == -1) {
    func_0x00f78ad8(lVar24,uVar13);
  }
  iVar9 = func_0x00f78a4c(lVar24);
  if (iVar9 == 0) {
    if ((((plVar14 == (long *)0x0) || (*(short *)(lVar24 + 0x48) == -1)) ||
        ((*(byte *)(*plVar14 + 0x115) & 1) != 0)) || (*(long *)(uVar12 + 0x18) == 0))
    goto code_r0x01560ac4;
    iVar9 = func_0x00f78a44(lVar24);
    iVar10 = func_0x00f78ec0(lVar24);
    if (iVar9 == 0) {
      uVar3 = *(ushort *)(lVar24 + 0x48);
      if (iVar10 == 0) {
        lVar24 = *plVar14 + (ulong)uVar3 * 0x10;
        auVar35 = (**(code **)(lVar24 + 0x138))(plVar14,*(undefined8 *)(lVar24 + 0x140));
        goto code_r0x01560ad0;
      }
      lVar24 = func_0x00f78a48(lVar24);
      lVar25 = *plVar14;
      uVar17 = (ulong)*(ushort *)(lVar25 + 0x12a);
      if (uVar17 != 0) {
        piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == lVar24) {
            puVar18 = (undefined8 *)(lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
            goto code_r0x01560b94;
          }
          piVar26 = piVar26 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      puVar18 = (undefined8 *)func_0x00fac1f0(plVar14,lVar24,(ulong)uVar3);
code_r0x01560b94:
      pcVar29 = (code *)*puVar18;
      puVar18 = (undefined8 *)puVar18[1];
    }
    else {
      if (iVar10 == 0) {
        uVar19 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
      }
      else {
        lVar25 = *plVar14;
        uVar17 = (ulong)*(ushort *)(lVar25 + 0x12a);
        if (uVar17 != 0) {
          piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)(lVar24 + 0x18)) {
              lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar24 + 0x48)) * 0x10 +
                       0x138;
              goto code_r0x01560b6c;
            }
            piVar26 = piVar26 + 4;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        lVar25 = func_0x00fac1f0(plVar14);
code_r0x01560b6c:
        uVar19 = *(undefined8 *)(lVar25 + 8);
      }
      puVar18 = (undefined8 *)func_0x00f78acc(uVar19,lVar24);
      pcVar29 = (code *)*puVar18;
    }
    auVar35 = (*pcVar29)(plVar14,puVar18);
  }
  else if (*(char *)(lVar24 + 0x4a) == '\0') {
    auVar35 = (*pcVar29)(lVar24);
  }
  else {
code_r0x01560ac4:
    auVar35 = (*pcVar29)(plVar14,lVar24);
  }
code_r0x01560ad0:
  uVar13 = auVar35._8_8_;
  lVar11 = lVar11 + 1;
  if (lVar11 == lVar30) {
    return auVar35._0_8_;
  }
  goto code_r0x01560a04;
}



// ============================================================
// RVA: 0x149cef8 | Atlas.UI.Screens.MultiplayerModeSelectScreen.<OnBeforeEnter>b__8_1
// ============================================================

/* WARNING: Possible PIC construction at 0x0149cb98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149ccdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149ca90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149cad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01514864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01515350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0149cad4) */
/* WARNING: Removing unreachable block (ram,0x0149cae4) */
/* WARNING: Removing unreachable block (ram,0x0149caec) */
/* WARNING: Removing unreachable block (ram,0x0149cab4) */
/* WARNING: Removing unreachable block (ram,0x0149cac4) */
/* WARNING: Removing unreachable block (ram,0x0149cacc) */
/* WARNING: Removing unreachable block (ram,0x0149ca94) */
/* WARNING: Removing unreachable block (ram,0x0149caa4) */
/* WARNING: Removing unreachable block (ram,0x0149caac) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01515354) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_MultiplayerModeSelectScreen___OnBeforeEnter_b__8_1
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long *extraout_x1;
  undefined8 uVar20;
  uint extraout_w8;
  uint uVar21;
  ulong *puVar22;
  ulong uVar23;
  long extraout_x8;
  long lVar24;
  long lVar25;
  long extraout_x9;
  int *piVar26;
  undefined8 unaff_x19;
  undefined8 uVar27;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 uVar28;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  code *pcVar29;
  undefined8 unaff_x25;
  long lVar30;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *puVar31;
  undefined8 uVar32;
  code *unaff_x30;
  float fVar33;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined8 unaff_d9;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  if ((bRam0000000003eb4a0c & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4a0c = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar20 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  uVar19 = 2;
  puVar5 = (undefined1 *)register0x00000008;
code_r0x0149cb10:
  puVar6 = puVar5 + -0x30;
  *(long *)(puVar5 + -0x30) = unaff_x22;
  *(ulong *)(puVar5 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
  *(code **)(puVar5 + -8) = unaff_x30;
  puVar7 = puVar5 + -0x10;
  uVar32 = uVar20;
  if ((bRam0000000003eb4a04 & 1) == 0) {
    func_0x00f78a20(0x3d411e0);
    func_0x00f78a20(0x3d79018);
    func_0x00f78a20(0x3d79020);
    bRam0000000003eb4a04 = 1;
  }
  unaff_x22 = 0x3d411e0;
  iVar9 = (int)uVar19;
  if (iVar9 == 1) {
    puVar22 = (ulong *)0x3d79018;
LAB_0149cb90:
    puVar31 = &LAB_0149cb9c;
    uVar12 = *puVar22;
code_r0x0151398c:
    *(long *)(puVar6 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar6 + -0x28) = param_4;
    *(undefined8 *)(puVar6 + -0x20) = uVar19;
    *(undefined8 *)(puVar6 + -0x18) = uVar20;
    *(undefined1 **)(puVar6 + -0x10) = puVar7;
    *(undefined **)(puVar6 + -8) = puVar31;
    uVar19 = 0x3eb4000;
    uVar17 = uVar12;
    if ((bRam0000000003eb4db6 & 1) == 0) {
      func_0x00f78a20(0x3d2faf8,0);
      func_0x00f78a20(0x3d2fb00);
      uVar17 = func_0x00f78a20(0x3d25580);
      bRam0000000003eb4db6 = 1;
    }
    if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
      return uVar17;
    }
    lVar11 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
    if (lVar11 != 0) {
      uVar17 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar11,uVar12,uRam0000000003d2faf8);
      if ((int)uVar17 == 0) {
        return uVar17;
      }
      if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
          (lVar11 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar11 != 0)) &&
         (uVar17 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar11,uVar12,uRam0000000003d2fb00), uVar17 != 0)) {
        *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
        *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
        *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
        *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
        /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar17,0,0);
        return uVar17;
      }
    }
    plVar14 = (long *)func_0x00f78af4();
    *(undefined8 *)(puVar6 + -0x70) = unaff_d9;
    *(ulong *)(puVar6 + -0x68) = CONCAT44(unaff_00005104,unaff_s8);
    *(long *)(puVar6 + -0x60) = unaff_x22;
    *(undefined8 *)(puVar6 + -0x58) = 0x3eb4000;
    *(undefined8 *)(puVar6 + -0x50) = 0x3d25580;
    *(ulong *)(puVar6 + -0x48) = uVar12;
    *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
    if ((bRam0000000003eb4d8b & 1) == 0) {
      func_0x00f78a20(0x3d24188);
      func_0x00f78a20(0x3d5e780);
      func_0x00f78a20(0x3d5e868);
      bRam0000000003eb4d8b = 1;
    }
    plVar15 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar14,0);
    if ((plVar15 != (long *)0x0) && (*plVar15 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
      uVar32 = func_0x00f78e5c(plVar15);
      *(long **)(puVar6 + -0x90) = plVar15;
      *(long **)(puVar6 + -0x88) = plVar14;
      *(undefined1 **)(puVar6 + -0x80) = puVar6 + -0x40;
      *(undefined **)(puVar6 + -0x78) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
      lVar11 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
      uVar20 = *(undefined8 *)(puVar6 + -0x90);
      *(long *)(puVar6 + -0xa0) = unaff_x22;
      *(undefined8 *)(puVar6 + -0x98) = 0x3eb4000;
      *(undefined8 *)(puVar6 + -0x90) = uVar20;
      *(undefined8 *)(puVar6 + -0x88) = *(undefined8 *)(puVar6 + -0x88);
      *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x80);
      *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x78);
      if (lVar11 == 0) {
        func_0x00f78a24(0x3d23938,0,0);
        uVar27 = func_0x00f78aec();
        uVar32 = func_0x00f78a24(0x3d7b500);
        /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar27,uVar32,0);
      }
      else {
        uVar19 = 0x3ec0000;
        if (pcRam0000000003ec01d0 == (code *)0x0) {
          pcRam0000000003ec01d0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                      );
        }
        uVar12 = (*pcRam0000000003ec01d0)(uVar32);
        if ((uVar12 & 1) != 0) {
          if (pcRam0000000003ec01e0 == (code *)0x0) {
            pcRam0000000003ec01e0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar12 = (*pcRam0000000003ec01e0)(uVar32,lVar11);
          return uVar12;
        }
        func_0x00f78a24(0x3d1fce8);
        uVar27 = func_0x00f78aec();
        uVar20 = func_0x00f78a24(0x3d6af80);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar27,uVar20,0);
        uVar20 = uVar32;
      }
      uVar32 = func_0x00f78a24(0x3d5a8a8);
      auVar35 = func_0x00f78ac0(uVar27,uVar32);
      *(long *)(puVar6 + -0xd0) = unaff_x22;
      *(undefined8 *)(puVar6 + -200) = uVar19;
      *(undefined8 *)(puVar6 + -0xc0) = uVar20;
      *(undefined8 *)(puVar6 + -0xb8) = uVar27;
      *(undefined1 **)(puVar6 + -0xb0) = puVar6 + -0x80;
      *(undefined **)(puVar6 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (*pcRam0000000003ec01e0)(auVar35._0_8_,auVar35._8_8_);
      return uVar12;
    }
    fVar33 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    uVar19 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar33 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                             plVar15,4,0);
    uVar12 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar19,uRam0000000003d5e780);
    *(undefined8 *)(puVar6 + -0xa0) = 0x3d5e780;
    *(undefined8 *)(puVar6 + -0x98) = 0x3d5e868;
    *(long **)(puVar6 + -0x90) = plVar15;
    *(long **)(puVar6 + -0x88) = plVar14;
    *(undefined1 **)(puVar6 + -0x80) = puVar6 + -0x40;
    *(undefined **)(puVar6 + -0x78) = &UNK_01513b44;
    if ((bRam0000000003eb66c1 & 1) == 0) {
      func_0x00f78a20(0x3d208f0,plVar14,uRam0000000003d5e868);
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb66c1 = 1;
    }
    if ((uVar12 != 0) && (*(char *)(uVar12 + 0xe8) != '\0')) {
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar9 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
      if (iVar9 != 0) {
        lVar11 = func_0x00f78adc(plVar14,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar17 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0,0);
        if ((uVar17 & 1) == 0) {
          if (plVar14 == (long *)0x0) goto code_r0x018eef34;
          uVar19 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
        }
        else {
          if (lVar11 == 0) {
code_r0x018eef34:
            auVar35 = func_0x00f78af4();
            uVar17 = auVar35._0_8_;
            *(undefined8 *)(puVar6 + -0xd0) = 0x3d5e780;
            *(long *)(puVar6 + -200) = lVar11;
            *(long **)(puVar6 + -0xc0) = plVar14;
            *(ulong *)(puVar6 + -0xb8) = uVar12;
            *(undefined1 **)(puVar6 + -0xb0) = puVar6 + -0x80;
            *(undefined **)(puVar6 + -0xa8) =
                 &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
            if ((bRam0000000003eb66c2 & 1) == 0) {
              func_0x00f78a20(0x3d20bc0);
              func_0x00f78a20(0x3d25440);
              bRam0000000003eb66c2 = 1;
            }
            if ((uVar17 != 0) && (*(char *)(uVar17 + 0xe8) != '\0')) {
              if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
              if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar17,auVar35._8_8_,cVar2 != '\0',0);
            }
            return uVar17;
          }
          uVar19 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar11,0);
        }
        *(undefined8 *)(uVar12 + 200) = uVar19;
      }
      *(long **)(uVar12 + 0x48) = plVar14;
    }
    return uVar12;
  }
  if (iVar9 == 2) {
    puVar22 = (ulong *)0x3d79020;
    goto LAB_0149cb90;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d411e0);
  if (lVar11 != 0) {
    uVar12 = *(ulong *)(lVar11 + 0x10);
    if (uVar12 == 0) {
      return 0;
    }
    *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
    *(ulong *)(puVar5 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x30);
    *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar5 + -0x28);
    *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
    *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
    *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
    *(ulong *)(puVar5 + -0x68) = uVar12;
    *(int *)(puVar5 + -0x6c) = iVar9;
    lVar11 = *(long *)(uVar12 + 0x68);
    if (lVar11 == 0) {
      puVar7 = puVar5 + -0x68;
      lVar30 = 1;
    }
    else {
      lVar30 = *(long *)(lVar11 + 0x18);
      if (lVar30 == 0) {
        return uVar12;
      }
      puVar7 = (undefined1 *)(lVar11 + 0x20);
    }
    lVar11 = 0;
    goto code_r0x015606b4;
  }
  uVar13 = func_0x00f78af4();
  puVar4 = puVar5 + -0x60;
  *(undefined8 *)(puVar5 + -0x60) = 0x3d411e0;
  *(undefined8 *)(puVar5 + -0x58) = param_4;
  *(undefined8 *)(puVar5 + -0x50) = uVar19;
  *(undefined8 *)(puVar5 + -0x48) = uVar20;
  *(undefined1 **)(puVar5 + -0x40) = puVar7;
  *(code **)(puVar5 + -0x38) = Atlas_UI_Screens_MultiplayerModeSelectScreen__CreateRoomPressed;
  puVar7 = puVar5 + -0x40;
  uVar27 = 0x3eb4000;
  uVar19 = 0x3d411e0;
  uVar20 = uVar32;
  if ((bRam0000000003eb4a05 & 1) == 0) {
    func_0x00f78a20(0x3d411e0);
    func_0x00f78a20(0x3d79018);
    bRam0000000003eb4a05 = 1;
    uVar20 = uVar32;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar13,uRam0000000003d411e0);
  if (lVar11 != 0) {
    uVar20 = 0x3d79018;
    uVar12 = *(ulong *)(lVar11 + 0x18);
    if (uVar12 != 0) {
      uVar32 = 0x149cc54;
      goto code_r0x015609bc;
    }
    puVar7 = *(undefined1 **)(puVar5 + -0x40);
    puVar31 = *(undefined **)(puVar5 + -0x38);
    uVar19 = *(undefined8 *)(puVar5 + -0x50);
    uVar20 = *(undefined8 *)(puVar5 + -0x48);
    puVar6 = puVar5 + -0x30;
    unaff_x22 = *(long *)(puVar5 + -0x60);
    param_4 = *(undefined8 *)(puVar5 + -0x58);
    uVar12 = /*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018;
    goto code_r0x0151398c;
  }
  uVar32 = func_0x00f78af4();
  puVar4 = puVar5 + -0x90;
  *(undefined8 *)(puVar5 + -0x90) = 0x3d411e0;
  *(undefined8 *)(puVar5 + -0x88) = 0x3d411e0;
  *(undefined8 *)(puVar5 + -0x80) = 0x3eb4000;
  *(undefined8 *)(puVar5 + -0x78) = uVar13;
  *(undefined1 **)(puVar5 + -0x70) = puVar7;
  *(code **)(puVar5 + -0x68) = Atlas_UI_Screens_MultiplayerModeSelectScreen__JoinRoomPressed;
  puVar7 = puVar5 + -0x70;
  uVar27 = 0x3eb4000;
  uVar19 = 0x3d411e0;
  if ((bRam0000000003eb4a06 & 1) == 0) {
    func_0x00f78a20(0x3d411e0);
    func_0x00f78a20(0x3d79020);
    bRam0000000003eb4a06 = 1;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar32,uRam0000000003d411e0);
  if (lVar11 != 0) {
    uVar20 = 0x3d79020;
    uVar12 = *(ulong *)(lVar11 + 0x20);
    if (uVar12 == 0) {
      puVar7 = *(undefined1 **)(puVar5 + -0x70);
      puVar31 = *(undefined **)(puVar5 + -0x68);
      uVar19 = *(undefined8 *)(puVar5 + -0x80);
      uVar20 = *(undefined8 *)(puVar5 + -0x78);
      puVar6 = puVar5 + -0x60;
      unaff_x22 = *(long *)(puVar5 + -0x90);
      param_4 = *(undefined8 *)(puVar5 + -0x88);
      uVar12 = /*STR('event:/UI/Front_End/GeneralButton4')*/ uRam0000000003d79020;
      goto code_r0x0151398c;
    }
    uVar32 = 0x149cce0;
code_r0x015609bc:
    uVar13 = 0;
    *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
    *(ulong *)(puVar4 + -0x38) = unaff_x23;
    *(long *)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = uVar19;
    *(undefined8 *)(puVar4 + -0x20) = uVar27;
    *(undefined8 *)(puVar4 + -0x18) = uVar20;
    *(undefined1 **)(puVar4 + -0x10) = puVar7;
    *(undefined8 *)(puVar4 + -8) = uVar32;
    *(ulong *)(puVar4 + -0x58) = uVar12;
    lVar11 = *(long *)(uVar12 + 0x68);
    if (lVar11 == 0) {
      puVar5 = puVar4 + -0x58;
      lVar30 = 1;
    }
    else {
      lVar30 = *(long *)(lVar11 + 0x18);
      if (lVar30 == 0) {
        return uVar12;
      }
      puVar5 = (undefined1 *)(lVar11 + 0x20);
    }
    lVar11 = 0;
    goto code_r0x01560a04;
  }
  uVar19 = func_0x00f78af4();
  *(undefined8 *)(puVar5 + -0xc0) = 0x3d411e0;
  *(undefined8 *)(puVar5 + -0xb8) = 0x3d411e0;
  *(undefined8 *)(puVar5 + -0xb0) = 0x3eb4000;
  *(undefined8 *)(puVar5 + -0xa8) = uVar32;
  *(undefined1 **)(puVar5 + -0xa0) = puVar7;
  *(code **)(puVar5 + -0x98) = Atlas_UI_Screens_MultiplayerModeSelectScreen__OnPartyInvite;
  if ((bRam0000000003eb4a07 & 1) == 0) {
    func_0x00f78a20(0x3d3e0d8);
    func_0x00f78a20(0x3d3e130);
    func_0x00f78a20(0x3d3e178);
    func_0x00f78a20(0x3d411e0);
    func_0x00f78a20(0x3d411e8);
    bRam0000000003eb4a07 = 1;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar19,uRam0000000003d411e8);
  if ((lVar11 != 0) && (*(long *)(lVar11 + 0xa0) != 0)) {
    uVar12 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar11 + 0xa0),uRam0000000003d3e0d8);
    if ((uVar12 & 1) != 0) {
      return uVar12;
    }
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar19,uRam0000000003d411e8);
    if ((lVar11 != 0) && (*(long *)(lVar11 + 0xe0) != 0)) {
      uVar12 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar11 + 0xe0),uRam0000000003d3e130);
      if ((uVar12 & 1) != 0) {
        return uVar12;
      }
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar19,uRam0000000003d411e8);
      if ((lVar11 != 0) && (*(long *)(lVar11 + 0x98) != 0)) {
        uVar12 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar11 + 0x98),uRam0000000003d3e178);
        if ((uVar12 & 1) != 0) {
          return uVar12;
        }
        lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar19,uRam0000000003d411e0);
        if (lVar11 != 0) {
          uVar12 = *(ulong *)(lVar11 + 0x20);
          if (uVar12 == 0) {
            return 0;
          }
          puVar7 = *(undefined1 **)(puVar5 + -0xa0);
          uVar32 = *(undefined8 *)(puVar5 + -0x98);
          uVar27 = *(undefined8 *)(puVar5 + -0xb0);
          uVar20 = *(undefined8 *)(puVar5 + -0xa8);
          puVar4 = puVar5 + -0x90;
          unaff_x22 = *(long *)(puVar5 + -0xc0);
          uVar19 = *(undefined8 *)(puVar5 + -0xb8);
          goto code_r0x015609bc;
        }
      }
    }
  }
  unaff_x19 = func_0x00f78af4();
  *(undefined8 *)(puVar5 + -0x110) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x108) = unaff_x25;
  *(undefined8 *)(puVar5 + -0x100) = unaff_x24;
  *(ulong *)(puVar5 + -0xf8) = unaff_x23;
  *(undefined8 *)(puVar5 + -0xf0) = 0x3d411e0;
  *(undefined8 *)(puVar5 + -0xe8) = 0x3eb4000;
  *(undefined8 *)(puVar5 + -0xe0) = 0x3d411e8;
  *(undefined8 *)(puVar5 + -0xd8) = uVar19;
  *(undefined1 **)(puVar5 + -0xd0) = puVar5 + -0xa0;
  *(code **)(puVar5 + -200) = Atlas_UI_Screens_MultiplayerModeSelectScreen__OnBeforeExit;
  unaff_x29 = puVar5 + -0xd0;
  unaff_x20 = 0x3eb4000;
  unaff_x21 = 0x3d411e8;
  if ((bRam0000000003eb4a03 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d2c840);
    func_0x00f78a20(0x3d5a9e8);
    func_0x00f78a20(0x3d411d8);
    func_0x00f78a20(0x3d411e8);
    bRam0000000003eb4a03 = 1;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(unaff_x19,uRam0000000003d411e8);
  if ((lVar11 == 0) || (unaff_x22 = *(long *)(lVar11 + 0x28), unaff_x22 == 0)) {
LAB_0149cb08:
    func_0x00f78af4();
LAB_0149cb0c:
    unaff_x30 = Atlas_UI_Screens_MultiplayerModeSelectScreen__GameTypePressed;
    auVar35 = func_0x00f78e5c();
    uVar19 = auVar35._8_8_;
    param_4 = auVar35._0_8_;
    puVar5 = puVar5 + -0x110;
    goto code_r0x0149cb10;
  }
  unaff_x23 = 0x3d1b598;
  unaff_x24 = 0x3d5a000;
  unaff_x25 = 0x3d2a000;
  unaff_x20 = *(undefined8 *)(unaff_x22 + 0x48);
  unaff_x21 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,unaff_x19,uRam0000000003d5a9e8,uRam0000000003d2a320);
  uVar20 = 0;
  plVar14 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x20,unaff_x21);
  if ((plVar14 != (long *)0x0) && (*plVar14 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598)) goto LAB_0149cb0c;
  unaff_x20 = 0x3d411d8;
  *(long **)(unaff_x22 + 0x48) = plVar14;
  uVar20 = uRam0000000003d2c840;
  Atlas_UI_Screens_AtlasScreen_ModeSelectScreenBehaviour__ModeSelectScreen_TransitionData___SetScreenHandlePartyInvite
            (unaff_x19,0);
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(unaff_x19,uRam0000000003d411d8);
  if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x68), lVar11 == 0)) goto LAB_0149cb08;
  *(undefined8 *)(puVar5 + -0x150) = 0x3d5a000;
  *(undefined8 *)(puVar5 + -0x148) = 0x3d1b598;
  *(long *)(puVar5 + -0x140) = unaff_x22;
  *(ulong *)(puVar5 + -0x138) = unaff_x21;
  *(undefined8 *)(puVar5 + -0x130) = 0x3d411d8;
  *(undefined8 *)(puVar5 + -0x128) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x120) = unaff_x29;
  *(undefined8 *)(puVar5 + -0x118) = 0x149ca94;
  if ((bRam0000000003eb4d9b & 1) == 0) {
    func_0x00f78a20(0x3d1fa78,0);
    bRam0000000003eb4d9b = 1;
  }
  plVar14 = *(long **)(lVar11 + 0x148);
  uVar12 = 0x3eb4000;
  if (plVar14 == (long *)0x0) {
code_r0x01514e70:
    plVar14 = *(long **)(lVar11 + 0x150);
    if (plVar14 != (long *)0x0) {
      uVar17 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
      if (uVar17 == 0) goto code_r0x01514ff8;
      uVar12 = uVar17;
      if (0 < (int)*(ulong *)(uVar17 + 0x18)) {
        unaff_x21 = 0;
        uVar23 = *(ulong *)(uVar17 + 0x18) & 0xffffffff;
        unaff_x22 = uVar17 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar23 <= unaff_x21) goto code_r0x01514fe0;
          plVar14 = *(long **)(unaff_x22 + unaff_x21 * 8);
          if ((plVar14 != (long *)0x0) &&
             (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar14 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Deselected*/ func_0x0151438c(lVar11);
          unaff_x21 = unaff_x21 + 1;
          uVar23 = (ulong)*(uint *)(uVar17 + 0x18);
        } while ((long)unaff_x21 < (long)(int)*(uint *)(uVar17 + 0x18));
      }
    }
    plVar14 = *(long **)(lVar11 + 0x158);
    if (plVar14 != (long *)0x0) {
      uVar17 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
      if (uVar17 == 0) goto code_r0x01514ff8;
      uVar12 = uVar17;
      if (0 < (int)*(ulong *)(uVar17 + 0x18)) {
        unaff_x21 = 0;
        uVar23 = *(ulong *)(uVar17 + 0x18) & 0xffffffff;
        unaff_x22 = uVar17 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar23 <= unaff_x21) goto code_r0x01514fe0;
          plVar14 = *(long **)(unaff_x22 + unaff_x21 * 8);
          if ((plVar14 != (long *)0x0) &&
             (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar14 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Pressed*/ func_0x015144d4(lVar11);
          unaff_x21 = unaff_x21 + 1;
          uVar23 = (ulong)*(uint *)(uVar17 + 0x18);
        } while ((long)unaff_x21 < (long)(int)*(uint *)(uVar17 + 0x18));
      }
    }
    plVar14 = *(long **)(lVar11 + 0x160);
    if (plVar14 == (long *)0x0) {
      return 0;
    }
    uVar17 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
    if (uVar17 != 0) {
      if ((int)*(ulong *)(uVar17 + 0x18) < 1) {
        return uVar17;
      }
      unaff_x21 = 0;
      uVar12 = *(ulong *)(uVar17 + 0x18) & 0xffffffff;
      unaff_x22 = uVar17 + 0x20;
      while (unaff_x21 < uVar12) {
        plVar14 = *(long **)(unaff_x22 + unaff_x21 * 8);
        if ((plVar14 != (long *)0x0) &&
           (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar14 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x01514fec;
        uVar23 = /*Atlas.UI.UIAtlasButton$$remove_SelectedOrPressed*/ func_0x0151461c(lVar11);
        unaff_x21 = unaff_x21 + 1;
        uVar12 = (ulong)*(uint *)(uVar17 + 0x18);
        if ((long)(int)*(uint *)(uVar17 + 0x18) <= (long)unaff_x21) {
          return uVar23;
        }
      }
code_r0x01514fe0:
      uVar19 = func_0x00f78b24();
      func_0x00f78ac0(uVar19,0);
      plVar14 = extraout_x1;
      lVar30 = extraout_x8;
code_r0x01514fec:
      unaff_x23 = 0x3d1fa78;
      func_0x00f78e5c(plVar14,lVar30);
      uVar12 = uVar17;
    }
  }
  else {
    uVar17 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
    if (uVar17 != 0) {
      uVar12 = uVar17;
      if (0 < (int)*(ulong *)(uVar17 + 0x18)) {
        unaff_x21 = 0;
        uVar23 = *(ulong *)(uVar17 + 0x18) & 0xffffffff;
        unaff_x22 = uVar17 + 0x20;
        unaff_x23 = 0x3d1fa78;
        do {
          if (uVar23 <= unaff_x21) goto code_r0x01514fe0;
          plVar14 = *(long **)(unaff_x22 + unaff_x21 * 8);
          if ((plVar14 != (long *)0x0) &&
             (lVar30 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78, *plVar14 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
          goto code_r0x01514fec;
          /*Atlas.UI.UIAtlasButton$$remove_Selected*/ func_0x01514244(lVar11);
          unaff_x21 = unaff_x21 + 1;
          uVar23 = (ulong)*(uint *)(uVar17 + 0x18);
        } while ((long)unaff_x21 < (long)(int)*(uint *)(uVar17 + 0x18));
      }
      goto code_r0x01514e70;
    }
  }
code_r0x01514ff8:
  auVar35 = func_0x00f78af4();
  uVar19 = auVar35._8_8_;
  *(long *)(puVar5 + -0x180) = unaff_x22;
  *(ulong *)(puVar5 + -0x178) = unaff_x21;
  *(ulong *)(puVar5 + -0x170) = uVar12;
  *(long *)(puVar5 + -0x168) = lVar11;
  *(undefined1 **)(puVar5 + -0x160) = puVar5 + -0x120;
  *(undefined **)(puVar5 + -0x158) = &Atlas_UI_UIAtlasButtonGroup__Subscribe;
  if ((bRam0000000003eb4da9 & 1) == 0) {
    func_0x00f78a20(0x3d3c5b8);
    func_0x00f78a20(0x3d3c5c0);
    bRam0000000003eb4da9 = 1;
  }
  lVar11 = *(long *)(auVar35._0_8_ + 0x40);
  if (lVar11 != 0) {
    uVar12 = /*System.Collections.Generic.List<XmlQualifiedName>$$Contains*/ func_0x02427438(lVar11,uVar19,uRam0000000003d3c5c0);
    if ((uVar12 & 1) != 0) {
      return uVar12;
    }
    uVar12 = *(ulong *)(auVar35._0_8_ + 0x40);
    if (uVar12 != 0) {
      uVar20 = *(undefined8 *)(puVar5 + -0x170);
      uVar17 = *(ulong *)(puVar5 + -0x168);
      uVar32 = *(undefined8 *)(puVar5 + -0x180);
      uVar27 = *(undefined8 *)(puVar5 + -0x178);
      *(undefined8 *)(puVar5 + -0x170) = uVar20;
      *(ulong *)(puVar5 + -0x168) = uVar17;
      *(undefined8 *)(puVar5 + -0x160) = *(undefined8 *)(puVar5 + -0x160);
      *(undefined8 *)(puVar5 + -0x158) = *(undefined8 *)(puVar5 + -0x158);
      lVar11 = *(long *)(uVar12 + 0x10);
      puVar18 = puRam0000000003d3c5b8;
      if (lVar11 == 0) {
code_r0x0242716c:
        uVar19 = uVar20;
        uVar12 = uVar17;
        uVar23 = func_0x00f78af4();
        lVar11 = extraout_x9;
        uVar21 = extraout_w8;
code_r0x02427170:
        *(uint *)(uVar12 + 0x18) = uVar21 + 1;
      }
      else {
        uVar21 = *(uint *)(uVar12 + 0x18);
        uVar23 = uVar12;
        if (uVar21 != *(uint *)(lVar11 + 0x18)) goto code_r0x02427170;
        puVar18 = *(undefined8 **)(*(long *)(puRam0000000003d3c5b8[3] + 0xc0) + 0x60);
        uVar23 = (*(code *)*puVar18)(uVar12,uVar21 + 1);
        lVar11 = *(long *)(uVar12 + 0x10);
        uVar21 = *(uint *)(uVar12 + 0x18);
        *(uint *)(uVar12 + 0x18) = uVar21 + 1;
        uVar17 = uVar12;
        uVar20 = uVar19;
        if (lVar11 == 0) goto code_r0x0242716c;
      }
      if (uVar21 < *(uint *)(lVar11 + 0x18)) {
        *(undefined8 *)(lVar11 + (long)(int)uVar21 * 8 + 0x20) = uVar19;
        *(int *)(uVar12 + 0x1c) = *(int *)(uVar12 + 0x1c) + 1;
        return uVar23;
      }
      uVar20 = func_0x00f78b24();
      auVar35 = func_0x00f78ac0(uVar20,0);
      lVar30 = auVar35._8_8_;
      lVar11 = auVar35._0_8_;
      *(undefined8 *)(puVar5 + -0x1b0) = 0x3d5a000;
      *(ulong *)(puVar5 + -0x1a8) = unaff_x23;
      *(undefined8 *)(puVar5 + -0x1a0) = uVar32;
      *(undefined8 *)(puVar5 + -0x198) = uVar27;
      *(undefined8 *)(puVar5 + -400) = uVar19;
      *(ulong *)(puVar5 + -0x188) = uVar12;
      *(undefined1 **)(puVar5 + -0x180) = puVar5 + -0x160;
      *(undefined **)(puVar5 + -0x178) =
           &System_Collections_Generic_List_object___System_Collections_IList_Add;
      (*(code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x48))(lVar30,0x14);
      if (lVar11 == 0) {
        func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
        pcVar29 = (code *)SoftwareBreakpoint(1,0x2427350);
        (*pcVar29)();
      }
      pcVar29 = (code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x28);
      lVar24 = *(long *)(*(long *)(puVar18[3] + 0xc0) + 0x38);
      if ((*(ushort *)(lVar24 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar24);
      }
      if (lVar30 == 0) {
        lVar25 = 0;
      }
      else {
        lVar25 = func_0x00f78adc(lVar30,lVar24);
        if (lVar25 == 0) {
          func_0x00f78e5c(lVar30,lVar24);
          goto code_r0x0242734c;
        }
      }
      (*pcVar29)(lVar11,lVar25,*(undefined8 *)(*(long *)(puVar18[3] + 0xc0) + 0x28));
      iVar9 = (*(code *)**(undefined8 **)(*(long *)(puVar18[3] + 0xc0) + 0x68))(lVar11);
      return (ulong)(iVar9 - 1);
    }
  }
  auVar34 = func_0x00f78af4();
  lVar30 = auVar34._8_8_;
  lVar11 = auVar34._0_8_;
  *(long *)(puVar5 + -0x1b0) = unaff_x22;
  *(undefined8 *)(puVar5 + -0x1a8) = 0x3eb4000;
  *(undefined1 (*) [16])(puVar5 + -0x1a0) = auVar35;
  *(undefined1 **)(puVar5 + -400) = puVar5 + -0x160;
  *(undefined **)(puVar5 + -0x188) = &Atlas_UI_UIAtlasButton__OnPointerClick;
  if ((bRam0000000003eb4d9d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d9d = 1;
  }
  uVar12 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(lVar11 + 0x16c),0);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  if (lVar30 != 0) {
    if (*(int *)(lVar30 + 0x134) != 0) {
      return uVar12;
    }
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(lVar11);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar11,lVar30,0);
    uVar19 = *(undefined8 *)(lVar11 + 0x118);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar19,0,0);
    if ((int)uVar12 == 0) {
      return uVar12;
    }
    bVar8 = false;
    uVar19 = *(undefined8 *)(puVar5 + -400);
    uVar27 = *(undefined8 *)(puVar5 + -0x188);
    uVar20 = *(undefined8 *)(puVar5 + -0x1a0);
    uVar13 = *(undefined8 *)(puVar5 + -0x198);
    puVar7 = puVar5 + -0x180;
    uVar32 = *(undefined8 *)(puVar5 + -0x1b0);
    uVar28 = *(undefined8 *)(puVar5 + -0x1a8);
    goto Atlas_UI_UIAtlasButton__SelectButton;
  }
  auVar35 = func_0x00f78af4();
  plVar15 = auVar35._8_8_;
  plVar14 = auVar35._0_8_;
  *(undefined8 *)(puVar5 + -0x1f0) = 0x3d5a000;
  *(ulong *)(puVar5 + -0x1e8) = unaff_x23;
  *(long *)(puVar5 + -0x1e0) = unaff_x22;
  *(undefined8 *)(puVar5 + -0x1d8) = 0x3eb4000;
  *(long *)(puVar5 + -0x1d0) = lVar11;
  *(undefined8 *)(puVar5 + -0x1c8) = 0;
  *(undefined1 **)(puVar5 + -0x1c0) = puVar5 + -400;
  *(undefined **)(puVar5 + -0x1b8) = &Atlas_UI_UIAtlasButton__OnSubmit;
  if ((bRam0000000003eb4d9e & 1) == 0) {
    func_0x00f78a20(0x3d21bd8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9e = 1;
  }
  uVar12 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)((long)plVar14 + 0x16c),0);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  if (plVar15 == (long *)0x0) {
    lVar11 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    unaff_x23 = 1;
  }
  else {
    if (*(byte *)(*plVar15 + 300) < *(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300)) {
      unaff_x23 = 1;
    }
    else {
      unaff_x23 = (ulong)(*(long *)(*(long *)(*plVar15 + 200) +
                                    (ulong)*(byte *)(/*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8 + 300) * 8 + -8) !=
                         /*Core.Input.GlyphEventData_TypeInfo*/ lRam0000000003d21bd8);
    }
    lVar11 = /*Core.Input.InputManager$$GetGlyphCurrentlyHandlingSubmit*/ func_0x0164a31c(0);
    if (*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) <= *(byte *)(*plVar15 + 300)) {
      unaff_x23 = (ulong)((uint)(*(long *)(*(long *)(*plVar15 + 200) +
                                           (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 + -8) !=
                                /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0) & (uint)unaff_x23);
    }
  }
  if ((int)unaff_x23 == 0) {
code_r0x015152e8:
    /*Atlas.UI.UIAtlasButton$$PlayButtonPressSound*/ func_0x01514d3c(plVar14);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(plVar14,plVar15,0);
    uVar12 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
    if (((int)uVar12 == 0) ||
       (uVar12 = (**(code **)(*plVar14 + 0x2b8))(plVar14,*(undefined8 *)(*plVar14 + 0x2c0)),
       (int)uVar12 == 0)) {
      return uVar12;
    }
    (**(code **)(*plVar14 + 0x2d8))(plVar14,2,0,*(undefined8 *)(*plVar14 + 0x2e0));
    puVar31 = &UNK_01515354;
    plVar16 = plVar14;
  }
  else {
    unaff_x23 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar9 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar11,0);
    if (iVar9 == 0) goto code_r0x015152e8;
    if (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,plVar14,0);
      if ((uVar12 & 1) != 0) {
        return uVar12;
      }
      goto code_r0x015152e8;
    }
    puVar31 = &Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0;
    plVar16 = (long *)func_0x00f78af4();
  }
  *(long *)(puVar5 + -0x220) = lVar11;
  *(undefined8 *)(puVar5 + -0x218) = 1;
  *(long **)(puVar5 + -0x210) = plVar15;
  *(long **)(puVar5 + -0x208) = plVar14;
  *(undefined1 **)(puVar5 + -0x200) = puVar5 + -0x1c0;
  *(undefined **)(puVar5 + -0x1f8) = puVar31;
  if ((bRam0000000003eb4da6 & 1) == 0) {
    func_0x00f78a20(0x3d29448);
    bRam0000000003eb4da6 = 1;
  }
  uVar12 = func_0x00f78aec(/*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d_TypeInfo*/ uRam0000000003d29448);
  /*Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d$$.ctor*/ func_0x0156c5e4(uVar12,0,0);
  if (uVar12 != 0) {
    *(long **)(uVar12 + 0x20) = plVar16;
    return uVar12;
  }
  auVar34 = func_0x00f78af4();
  *(long *)(puVar5 + -0x250) = lVar11;
  *(undefined8 *)(puVar5 + -0x248) = 0x3d29448;
  *(undefined8 *)(puVar5 + -0x240) = 0;
  *(long **)(puVar5 + -0x238) = plVar16;
  *(undefined1 **)(puVar5 + -0x230) = puVar5 + -0x200;
  *(undefined **)(puVar5 + -0x228) = &Atlas_UI_UIAtlasButton__OnSelect;
  if ((bRam0000000003eb4d9f & 1) == 0) {
    func_0x00f78a20(0x3d23da0);
    bRam0000000003eb4d9f = 1;
  }
  uVar12 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(*(undefined4 *)(auVar34._0_8_ + 0x16c),0);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  if (auVar34._8_8_ == (long *)0x0) {
code_r0x0151546c:
    bVar8 = false;
  }
  else {
    lVar11 = *auVar34._8_8_;
    if (*(byte *)(lVar11 + 300) < *(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300)) goto code_r0x0151546c;
    bVar8 = *(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(/*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0 + 300) * 8 +
                     -8) == /*UnityEngine.EventSystems.PointerEventData_TypeInfo*/ lRam0000000003d23da0;
  }
  iVar9 = /*Core.Input.InputManager$$get_IsCurrentSelectionFromUser*/ func_0x0164ad7c(0);
  if ((iVar9 != 0) && (!bVar8)) {
    /*Atlas.UI.UIAtlasButton$$PlayButtonSelectSound*/ func_0x01514cec(auVar34._0_8_);
  }
  uVar19 = *(undefined8 *)(puVar5 + -0x230);
  uVar27 = *(undefined8 *)(puVar5 + -0x228);
  uVar20 = *(undefined8 *)(puVar5 + -0x240);
  uVar13 = *(undefined8 *)(puVar5 + -0x238);
  puVar7 = puVar5 + -0x220;
  uVar32 = *(undefined8 *)(puVar5 + -0x250);
  uVar28 = *(undefined8 *)(puVar5 + -0x248);
Atlas_UI_UIAtlasButton__SelectButton:
  uVar12 = auVar34._0_8_;
  *(undefined8 *)(puVar7 + -0x30) = uVar32;
  *(undefined8 *)(puVar7 + -0x28) = uVar28;
  *(undefined8 *)(puVar7 + -0x20) = uVar20;
  *(undefined8 *)(puVar7 + -0x18) = uVar13;
  *(undefined8 *)(puVar7 + -0x10) = uVar19;
  *(undefined8 *)(puVar7 + -8) = uVar27;
  puVar5 = puVar7 + -0x10;
  uVar19 = 0;
  if ((*(char *)(uVar12 + 0x140) != '\0') && (bVar8)) {
    return uVar12;
  }
  /*UnityEngine.UI.Selectable$$OnSelect*/ func_0x032e4efc(uVar12,auVar34._8_8_,0);
  if (*(long *)(uVar12 + 0x118) != 0) {
    /*Atlas.UI.UIAtlasButtonGroup$$OnButtonSelected*/ func_0x01514894(*(long *)(uVar12 + 0x118),uVar12,auVar34._8_8_);
  }
  uVar17 = *(ulong *)(uVar12 + 0x148);
  if (uVar17 == 0) {
    uVar17 = *(ulong *)(uVar12 + 0x160);
    if (uVar17 == 0) {
      return 0;
    }
    puVar5 = *(undefined1 **)(puVar7 + -0x10);
    puVar31 = *(undefined **)(puVar7 + -8);
    uVar19 = *(undefined8 *)(puVar7 + -0x20);
    uVar32 = *(undefined8 *)(puVar7 + -0x30);
    auVar34._8_8_ = *(undefined8 *)(puVar7 + -0x28);
    auVar34._0_8_ = *(undefined8 *)(puVar7 + -0x18);
  }
  else {
    puVar31 = &UNK_01514868;
    puVar7 = puVar7 + -0x30;
  }
  uVar20 = 0;
  *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar7 + -0x48) = 0x3d2a000;
  *(undefined8 *)(puVar7 + -0x40) = 0x3d5a000;
  *(ulong *)(puVar7 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar7 + -0x30) = uVar32;
  *(long *)(puVar7 + -0x28) = auVar34._8_8_;
  *(undefined8 *)(puVar7 + -0x20) = uVar19;
  *(long *)(puVar7 + -0x18) = auVar34._0_8_;
  *(undefined1 **)(puVar7 + -0x10) = puVar5;
  *(undefined **)(puVar7 + -8) = puVar31;
  *(ulong *)(puVar7 + -0x58) = uVar17;
  lVar11 = *(long *)(uVar17 + 0x68);
  if (lVar11 == 0) {
    puVar5 = puVar7 + -0x58;
    lVar30 = 1;
  }
  else {
    lVar30 = *(long *)(lVar11 + 0x18);
    if (lVar30 == 0) {
      return uVar17;
    }
    puVar5 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar24 = *(long *)(puVar5 + lVar11 * 8);
    pcVar29 = *(code **)(lVar24 + 0x10);
    plVar14 = *(long **)(lVar24 + 0x20);
    lVar24 = *(long *)(lVar24 + 0x28);
    if (*(short *)(lVar24 + 0x48) == -1) {
      func_0x00f78ad8(lVar24,uVar20);
    }
    iVar9 = func_0x00f78a4c(lVar24);
    if (iVar9 == 0) {
      if ((((plVar14 == (long *)0x0) || (*(short *)(lVar24 + 0x48) == -1)) ||
          ((*(byte *)(*plVar14 + 0x115) & 1) != 0)) || (*(long *)(uVar17 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar9 = func_0x00f78a44(lVar24);
      iVar10 = func_0x00f78ec0(lVar24);
      if (iVar9 == 0) {
        uVar3 = *(ushort *)(lVar24 + 0x48);
        if (iVar10 == 0) {
          lVar24 = *plVar14 + (ulong)uVar3 * 0x10;
          auVar35 = (**(code **)(lVar24 + 0x138))(plVar14,*(undefined8 *)(lVar24 + 0x140));
          goto code_r0x02924da4;
        }
        lVar24 = func_0x00f78a48(lVar24);
        lVar25 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar25 + 0x12a);
        if (uVar12 != 0) {
          piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar24) {
              puVar18 = (undefined8 *)(lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar26 = piVar26 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar18 = (undefined8 *)func_0x00fac1f0(plVar14,lVar24,(ulong)uVar3);
code_r0x02924e68:
        pcVar29 = (code *)*puVar18;
        puVar18 = (undefined8 *)puVar18[1];
      }
      else {
        if (iVar10 == 0) {
          uVar19 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar25 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar25 + 0x12a);
          if (uVar12 != 0) {
            piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)(lVar24 + 0x18)) {
                lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar24 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar26 = piVar26 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          lVar25 = func_0x00fac1f0(plVar14);
code_r0x02924e40:
          uVar19 = *(undefined8 *)(lVar25 + 8);
        }
        puVar18 = (undefined8 *)func_0x00f78acc(uVar19,lVar24);
        pcVar29 = (code *)*puVar18;
      }
      auVar35 = (*pcVar29)(plVar14,puVar18);
    }
    else if (*(char *)(lVar24 + 0x4a) == '\0') {
      auVar35 = (*pcVar29)(lVar24);
    }
    else {
code_r0x02924d98:
      auVar35 = (*pcVar29)(plVar14,lVar24);
    }
code_r0x02924da4:
    uVar20 = auVar35._8_8_;
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar30) {
      return auVar35._0_8_;
    }
  } while( true );
code_r0x015606b4:
  lVar24 = *(long *)(puVar7 + lVar11 * 8);
  pcVar29 = *(code **)(lVar24 + 0x10);
  plVar14 = *(long **)(lVar24 + 0x20);
  lVar24 = *(long *)(lVar24 + 0x28);
  if (*(short *)(lVar24 + 0x48) == -1) {
    func_0x00f78ad8(lVar24);
  }
  iVar9 = func_0x00f78a4c(lVar24);
  if (iVar9 == 0) {
    if (plVar14 == (long *)0x0) {
      uVar17 = (*pcVar29)(puVar5 + -0x7c,uVar20,lVar24);
    }
    else {
      if (((*(short *)(lVar24 + 0x48) == -1) || ((*(byte *)(*plVar14 + 0x115) & 1) != 0)) ||
         (*(long *)(uVar12 + 0x18) == 0)) goto code_r0x01560784;
      iVar9 = func_0x00f78a44(lVar24);
      iVar10 = func_0x00f78ec0(lVar24);
      if (iVar9 == 0) {
        uVar3 = *(ushort *)(lVar24 + 0x48);
        if (iVar10 == 0) {
          lVar24 = *plVar14 + (ulong)uVar3 * 0x10;
          uVar17 = (**(code **)(lVar24 + 0x138))
                             (plVar14,*(undefined4 *)(puVar5 + -0x6c),uVar20,
                              *(undefined8 *)(lVar24 + 0x140));
          goto code_r0x015607ac;
        }
        lVar24 = func_0x00f78a48(lVar24);
        uVar1 = *(undefined4 *)(puVar5 + -0x6c);
        lVar25 = *plVar14;
        uVar17 = (ulong)*(ushort *)(lVar25 + 0x12a);
        if (uVar17 != 0) {
          piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar24) {
              puVar18 = (undefined8 *)(lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x01560884;
            }
            piVar26 = piVar26 + 4;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        puVar18 = (undefined8 *)func_0x00fac1f0(plVar14,lVar24,(ulong)uVar3);
code_r0x01560884:
        pcVar29 = (code *)*puVar18;
        puVar18 = (undefined8 *)puVar18[1];
      }
      else {
        uVar1 = *(undefined4 *)(puVar5 + -0x6c);
        if (iVar10 == 0) {
          uVar19 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar25 = *plVar14;
          uVar17 = (ulong)*(ushort *)(lVar25 + 0x12a);
          if (uVar17 != 0) {
            piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar26 + -2) == *(long *)(lVar24 + 0x18)) {
                lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar24 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x01560854;
              }
              piVar26 = piVar26 + 4;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          lVar25 = func_0x00fac1f0(plVar14);
code_r0x01560854:
          uVar19 = *(undefined8 *)(lVar25 + 8);
        }
        puVar18 = (undefined8 *)func_0x00f78acc(uVar19,lVar24);
        pcVar29 = (code *)*puVar18;
      }
      uVar17 = (*pcVar29)(plVar14,uVar1,uVar20,puVar18);
    }
  }
  else if (*(char *)(lVar24 + 0x4a) == '\x02') {
    uVar17 = (*pcVar29)(*(undefined4 *)(puVar5 + -0x6c),uVar20,lVar24);
  }
  else {
code_r0x01560784:
    uVar17 = (*pcVar29)(plVar14,*(undefined4 *)(puVar5 + -0x6c),uVar20,lVar24);
  }
code_r0x015607ac:
  lVar11 = lVar11 + 1;
  if (lVar11 == lVar30) {
    return uVar17;
  }
  goto code_r0x015606b4;
code_r0x01560a04:
  lVar24 = *(long *)(puVar5 + lVar11 * 8);
  pcVar29 = *(code **)(lVar24 + 0x10);
  plVar14 = *(long **)(lVar24 + 0x20);
  lVar24 = *(long *)(lVar24 + 0x28);
  if (*(short *)(lVar24 + 0x48) == -1) {
    func_0x00f78ad8(lVar24,uVar13);
  }
  iVar9 = func_0x00f78a4c(lVar24);
  if (iVar9 == 0) {
    if ((((plVar14 == (long *)0x0) || (*(short *)(lVar24 + 0x48) == -1)) ||
        ((*(byte *)(*plVar14 + 0x115) & 1) != 0)) || (*(long *)(uVar12 + 0x18) == 0))
    goto code_r0x01560ac4;
    iVar9 = func_0x00f78a44(lVar24);
    iVar10 = func_0x00f78ec0(lVar24);
    if (iVar9 == 0) {
      uVar3 = *(ushort *)(lVar24 + 0x48);
      if (iVar10 == 0) {
        lVar24 = *plVar14 + (ulong)uVar3 * 0x10;
        auVar35 = (**(code **)(lVar24 + 0x138))(plVar14,*(undefined8 *)(lVar24 + 0x140));
        goto code_r0x01560ad0;
      }
      lVar24 = func_0x00f78a48(lVar24);
      lVar25 = *plVar14;
      uVar17 = (ulong)*(ushort *)(lVar25 + 0x12a);
      if (uVar17 != 0) {
        piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == lVar24) {
            puVar18 = (undefined8 *)(lVar25 + (long)(int)(*piVar26 + (uint)uVar3) * 0x10 + 0x138);
            goto code_r0x01560b94;
          }
          piVar26 = piVar26 + 4;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      puVar18 = (undefined8 *)func_0x00fac1f0(plVar14,lVar24,(ulong)uVar3);
code_r0x01560b94:
      pcVar29 = (code *)*puVar18;
      puVar18 = (undefined8 *)puVar18[1];
    }
    else {
      if (iVar10 == 0) {
        uVar19 = *(undefined8 *)(*plVar14 + (ulong)*(ushort *)(lVar24 + 0x48) * 0x10 + 0x140);
      }
      else {
        lVar25 = *plVar14;
        uVar17 = (ulong)*(ushort *)(lVar25 + 0x12a);
        if (uVar17 != 0) {
          piVar26 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)(lVar24 + 0x18)) {
              lVar25 = lVar25 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar24 + 0x48)) * 0x10 +
                       0x138;
              goto code_r0x01560b6c;
            }
            piVar26 = piVar26 + 4;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        lVar25 = func_0x00fac1f0(plVar14);
code_r0x01560b6c:
        uVar19 = *(undefined8 *)(lVar25 + 8);
      }
      puVar18 = (undefined8 *)func_0x00f78acc(uVar19,lVar24);
      pcVar29 = (code *)*puVar18;
    }
    auVar35 = (*pcVar29)(plVar14,puVar18);
  }
  else if (*(char *)(lVar24 + 0x4a) == '\0') {
    auVar35 = (*pcVar29)(lVar24);
  }
  else {
code_r0x01560ac4:
    auVar35 = (*pcVar29)(plVar14,lVar24);
  }
code_r0x01560ad0:
  uVar13 = auVar35._8_8_;
  lVar11 = lVar11 + 1;
  if (lVar11 == lVar30) {
    return auVar35._0_8_;
  }
  goto code_r0x01560a04;
}



