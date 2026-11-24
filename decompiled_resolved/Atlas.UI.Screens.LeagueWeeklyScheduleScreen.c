// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeagueWeeklyScheduleScreen

// ============================================================
// RVA: 0x14821d4 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.OnBeforeEnter
// ============================================================

long Atlas_UI_Screens_LeagueWeeklyScheduleScreen__OnBeforeEnter(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  int extraout_w1;
  uint uVar10;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  
  if ((bRam0000000003eb491a & 1) == 0) {
    func_0x00f78a20(0x3d41148);
    bRam0000000003eb491a = 1;
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41148);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar3 + 0x38);
    return lVar3;
  }
  uVar4 = func_0x00f78af4();
  if ((bRam0000000003eb491b & 1) == 0) {
    func_0x00f78a20(0x3d41140);
    bRam0000000003eb491b = 1;
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar4,uRam0000000003d41140);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0xa0), lVar3 != 0)) {
    if (pcRam0000000003ec2fc0 == (code *)0x0) {
      pcRam0000000003ec2fc0 =
           (code *)func_0x00f789d4("UnityEngine.CanvasGroup::set_alpha(System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x032f4548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*pcRam0000000003ec2fc0)(0x3f800000,lVar3);
    return lVar3;
  }
  uVar4 = func_0x00f78af4();
  if ((bRam0000000003eb491c & 1) == 0) {
    func_0x00f78a20(0x3d27eb8);
    bRam0000000003eb491c = 1;
  }
  lVar3 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<OnBeforeEnterCoroutine>d__24_TypeInfo*/ uRam0000000003d27eb8);
  /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<OnBeforeEnterCoroutine>d__24$$.ctor*/ func_0x0155cf8c(lVar3,0,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    return lVar3;
  }
  uVar4 = func_0x00f78af4();
  if ((bRam0000000003eb491d & 1) == 0) {
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d22ea8);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d41150);
    bRam0000000003eb491d = 1;
  }
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
  if (lVar3 == 0) goto code_r0x01482514;
  if (*(long *)(lVar3 + 0x20) == 0) goto code_r0x01482514;
  lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10);
  if (((*(ushort *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar3 == 0) goto code_r0x01482514;
  lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,**(undefined8 **)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8),uRam0000000003d57280)
  ;
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
  if (lVar5 == 0) goto code_r0x01482514;
  if (*(long *)(lVar5 + 0xb0) == 0) goto code_r0x01482514;
  iVar2 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete(*(long *)(lVar5 + 0xb0),lVar3,0)
  ;
  if (iVar2 != 0) {
    if (lVar3 == 0) goto code_r0x01482514;
    if (*(long *)(lVar3 + 0x58) == 0) goto code_r0x01482514;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_e8,*(long *)(lVar3 + 0x58),uRam0000000003d3dc70);
    while (uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_e8,uRam0000000003d337d0), uVar8 = uStack_d8,
          (uVar6 & 1) != 0) {
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
      if (lVar3 == 0) {
        func_0x00f78af4();
code_r0x01482510:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1482514);
        (*pcVar1)();
      }
      if (*(long *)(lVar3 + 0x98) == 0) {
        func_0x00f78af4();
        goto code_r0x01482510;
      }
      /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar3 + 0x98),uVar8,uRam0000000003d3e188);
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e8,uRam0000000003d337c8);
  }
  do {
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x48) != 0)) {
      lVar3 = /*Atlas.Save.SaveManager$$StartSave*/ func_0x014eb4e0(*(long *)(lVar3 + 0x48),0);
      return lVar3;
    }
code_r0x01482514:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01482560;
    plVar7 = (long *)___cxa_begin_catch();
    lVar3 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e8,uRam0000000003d337c8);
  } while (lVar3 == 0);
  func_0x00f78ac0(lVar3,0);
code_r0x01482560:
  uVar4 = __Unwind_Resume();
  if ((bRam0000000003eb491e & 1) == 0) {
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d22ea8);
    func_0x00f78a20(0x3d3dc78);
    func_0x00f78a20(0x3d3dc80);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d41150);
    bRam0000000003eb491e = 1;
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10);
    if (((*(ushort *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (((lVar3 != 0) &&
        (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,**(undefined8 **)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8),
                                 uRam0000000003d57280), lVar3 != 0)) &&
       (lVar5 = *(long *)(lVar3 + 0x58), lVar5 != 0)) {
      uVar10 = 0;
      lVar9 = lVar3;
      do {
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar10) {
          return lVar9;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar10) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar7 = *(long **)(*(long *)(lVar5 + 0x10) + (long)(int)uVar10 * 8 + 0x20);
        if (plVar7 == (long *)0x0) break;
        uVar8 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
        if (((*(ushort *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar9 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar8,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8) + 0x10)
                                ,0);
        if ((int)lVar9 != 0) {
          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
          if ((lVar5 == 0) || (lVar9 = *(long *)(lVar3 + 0x58), lVar9 == 0)) break;
          lVar5 = *(long *)(lVar5 + 0x98);
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (lVar5 == 0) break;
          lVar9 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(lVar5,*(undefined8 *)
                                         (*(long *)(lVar9 + 0x10) + (long)(int)uVar10 * 8 + 0x20),
                                  uRam0000000003d3e188);
        }
        uVar10 = uVar10 + 1;
        lVar5 = *(long *)(lVar3 + 0x58);
      } while (lVar5 != 0);
    }
  }
  lVar3 = func_0x00f78af4();
  return lVar3;
}



// ============================================================
// RVA: 0x148223c | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.OnStartEnter
// ============================================================

long Atlas_UI_Screens_LeagueWeeklyScheduleScreen__OnStartEnter(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  int extraout_w1;
  uint uVar10;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((bRam0000000003eb491b & 1) == 0) {
    func_0x00f78a20(0x3d41140);
    bRam0000000003eb491b = 1;
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41140);
  if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0xa0), lVar3 != 0)) {
    if (pcRam0000000003ec2fc0 == (code *)0x0) {
      pcRam0000000003ec2fc0 =
           (code *)func_0x00f789d4("UnityEngine.CanvasGroup::set_alpha(System.Single)");
    }
                    /* WARNING: Could not recover jumptable at 0x032f4548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*pcRam0000000003ec2fc0)(0x3f800000,lVar3);
    return lVar3;
  }
  uVar4 = func_0x00f78af4();
  if ((bRam0000000003eb491c & 1) == 0) {
    func_0x00f78a20(0x3d27eb8);
    bRam0000000003eb491c = 1;
  }
  lVar3 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<OnBeforeEnterCoroutine>d__24_TypeInfo*/ uRam0000000003d27eb8);
  /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<OnBeforeEnterCoroutine>d__24$$.ctor*/ func_0x0155cf8c(lVar3,0,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    return lVar3;
  }
  uVar4 = func_0x00f78af4();
  if ((bRam0000000003eb491d & 1) == 0) {
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d22ea8);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d41150);
    bRam0000000003eb491d = 1;
  }
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
  if (lVar3 == 0) goto code_r0x01482514;
  if (*(long *)(lVar3 + 0x20) == 0) goto code_r0x01482514;
  lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10);
  if (((*(ushort *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar3 == 0) goto code_r0x01482514;
  lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,**(undefined8 **)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8),uRam0000000003d57280)
  ;
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
  if (lVar5 == 0) goto code_r0x01482514;
  if (*(long *)(lVar5 + 0xb0) == 0) goto code_r0x01482514;
  iVar2 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete(*(long *)(lVar5 + 0xb0),lVar3,0)
  ;
  if (iVar2 != 0) {
    if (lVar3 == 0) goto code_r0x01482514;
    if (*(long *)(lVar3 + 0x58) == 0) goto code_r0x01482514;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_b8,*(long *)(lVar3 + 0x58),uRam0000000003d3dc70);
    while (uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_b8,uRam0000000003d337d0), uVar8 = uStack_a8,
          (uVar6 & 1) != 0) {
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
      if (lVar3 == 0) {
        func_0x00f78af4();
code_r0x01482510:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1482514);
        (*pcVar1)();
      }
      if (*(long *)(lVar3 + 0x98) == 0) {
        func_0x00f78af4();
        goto code_r0x01482510;
      }
      /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar3 + 0x98),uVar8,uRam0000000003d3e188);
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_b8,uRam0000000003d337c8);
  }
  do {
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x48) != 0)) {
      lVar3 = /*Atlas.Save.SaveManager$$StartSave*/ func_0x014eb4e0(*(long *)(lVar3 + 0x48),0);
      return lVar3;
    }
code_r0x01482514:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01482560;
    plVar7 = (long *)___cxa_begin_catch();
    lVar3 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_b8,uRam0000000003d337c8);
  } while (lVar3 == 0);
  func_0x00f78ac0(lVar3,0);
code_r0x01482560:
  uVar4 = __Unwind_Resume();
  if ((bRam0000000003eb491e & 1) == 0) {
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d22ea8);
    func_0x00f78a20(0x3d3dc78);
    func_0x00f78a20(0x3d3dc80);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d41150);
    bRam0000000003eb491e = 1;
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10);
    if (((*(ushort *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (((lVar3 != 0) &&
        (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,**(undefined8 **)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8),
                                 uRam0000000003d57280), lVar3 != 0)) &&
       (lVar5 = *(long *)(lVar3 + 0x58), lVar5 != 0)) {
      uVar10 = 0;
      lVar9 = lVar3;
      do {
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar10) {
          return lVar9;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar10) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar7 = *(long **)(*(long *)(lVar5 + 0x10) + (long)(int)uVar10 * 8 + 0x20);
        if (plVar7 == (long *)0x0) break;
        uVar8 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
        if (((*(ushort *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar9 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar8,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8) + 0x10)
                                ,0);
        if ((int)lVar9 != 0) {
          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
          if ((lVar5 == 0) || (lVar9 = *(long *)(lVar3 + 0x58), lVar9 == 0)) break;
          lVar5 = *(long *)(lVar5 + 0x98);
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (lVar5 == 0) break;
          lVar9 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(lVar5,*(undefined8 *)
                                         (*(long *)(lVar9 + 0x10) + (long)(int)uVar10 * 8 + 0x20),
                                  uRam0000000003d3e188);
        }
        uVar10 = uVar10 + 1;
        lVar5 = *(long *)(lVar3 + 0x58);
      } while (lVar5 != 0);
    }
  }
  lVar3 = func_0x00f78af4();
  return lVar3;
}



// ============================================================
// RVA: 0x14822ac | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.OnBeforeEnterCoroutine
// ============================================================

long Atlas_UI_Screens_LeagueWeeklyScheduleScreen__OnBeforeEnterCoroutine(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  int extraout_w1;
  uint uVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000003eb491c & 1) == 0) {
    func_0x00f78a20(0x3d27eb8);
    bRam0000000003eb491c = 1;
  }
  lVar3 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<OnBeforeEnterCoroutine>d__24_TypeInfo*/ uRam0000000003d27eb8);
  /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<OnBeforeEnterCoroutine>d__24$$.ctor*/ func_0x0155cf8c(lVar3,0,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x20) = param_1;
    return lVar3;
  }
  uVar4 = func_0x00f78af4();
  if ((bRam0000000003eb491d & 1) == 0) {
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d22ea8);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d41150);
    bRam0000000003eb491d = 1;
  }
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
  if (lVar3 == 0) goto code_r0x01482514;
  if (*(long *)(lVar3 + 0x20) == 0) goto code_r0x01482514;
  lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10);
  if (((*(ushort *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar3 == 0) goto code_r0x01482514;
  lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,**(undefined8 **)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8),uRam0000000003d57280)
  ;
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
  if (lVar5 == 0) goto code_r0x01482514;
  if (*(long *)(lVar5 + 0xb0) == 0) goto code_r0x01482514;
  iVar2 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete(*(long *)(lVar5 + 0xb0),lVar3,0)
  ;
  if (iVar2 != 0) {
    if (lVar3 == 0) goto code_r0x01482514;
    if (*(long *)(lVar3 + 0x58) == 0) goto code_r0x01482514;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_88,*(long *)(lVar3 + 0x58),uRam0000000003d3dc70);
    while (uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_88,uRam0000000003d337d0), uVar8 = uStack_78,
          (uVar6 & 1) != 0) {
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
      if (lVar3 == 0) {
        func_0x00f78af4();
code_r0x01482510:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1482514);
        (*pcVar1)();
      }
      if (*(long *)(lVar3 + 0x98) == 0) {
        func_0x00f78af4();
        goto code_r0x01482510;
      }
      /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar3 + 0x98),uVar8,uRam0000000003d3e188);
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,uRam0000000003d337c8);
  }
  do {
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x48) != 0)) {
      lVar3 = /*Atlas.Save.SaveManager$$StartSave*/ func_0x014eb4e0(*(long *)(lVar3 + 0x48),0);
      return lVar3;
    }
code_r0x01482514:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01482560;
    plVar7 = (long *)___cxa_begin_catch();
    lVar3 = *plVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,uRam0000000003d337c8);
  } while (lVar3 == 0);
  func_0x00f78ac0(lVar3,0);
code_r0x01482560:
  uVar4 = __Unwind_Resume();
  if ((bRam0000000003eb491e & 1) == 0) {
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d22ea8);
    func_0x00f78a20(0x3d3dc78);
    func_0x00f78a20(0x3d3dc80);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d41150);
    bRam0000000003eb491e = 1;
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10);
    if (((*(ushort *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (((lVar3 != 0) &&
        (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,**(undefined8 **)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8),
                                 uRam0000000003d57280), lVar3 != 0)) &&
       (lVar5 = *(long *)(lVar3 + 0x58), lVar5 != 0)) {
      uVar10 = 0;
      lVar9 = lVar3;
      do {
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar10) {
          return lVar9;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar10) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar7 = *(long **)(*(long *)(lVar5 + 0x10) + (long)(int)uVar10 * 8 + 0x20);
        if (plVar7 == (long *)0x0) break;
        uVar8 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
        if (((*(ushort *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar9 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar8,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8) + 0x10)
                                ,0);
        if ((int)lVar9 != 0) {
          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar4,uRam0000000003d41150);
          if ((lVar5 == 0) || (lVar9 = *(long *)(lVar3 + 0x58), lVar9 == 0)) break;
          lVar5 = *(long *)(lVar5 + 0x98);
          if (*(uint *)(lVar9 + 0x18) <= uVar10) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (lVar5 == 0) break;
          lVar9 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(lVar5,*(undefined8 *)
                                         (*(long *)(lVar9 + 0x10) + (long)(int)uVar10 * 8 + 0x20),
                                  uRam0000000003d3e188);
        }
        uVar10 = uVar10 + 1;
        lVar5 = *(long *)(lVar3 + 0x58);
      } while (lVar5 != 0);
    }
  }
  lVar3 = func_0x00f78af4();
  return lVar3;
}



// ============================================================
// RVA: 0x1482320 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.ShowToolTips
// ============================================================

void Atlas_UI_Screens_LeagueWeeklyScheduleScreen__ShowToolTips(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int extraout_w1;
  uint uVar9;
  long lVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb491d & 1) == 0) {
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d22ea8);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d41150);
    bRam0000000003eb491d = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41150);
  if (lVar3 == 0) goto LAB_01482514;
  if (*(long *)(lVar3 + 0x20) == 0) goto LAB_01482514;
  lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10);
  if (((*(ushort *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar3 == 0) goto LAB_01482514;
  lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,**(undefined8 **)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8),uRam0000000003d57280)
  ;
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41150);
  if (lVar4 == 0) goto LAB_01482514;
  if (*(long *)(lVar4 + 0xb0) == 0) goto LAB_01482514;
  iVar2 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete(*(long *)(lVar4 + 0xb0),lVar3,0)
  ;
  if (iVar2 != 0) {
    if (lVar3 == 0) goto LAB_01482514;
    if (*(long *)(lVar3 + 0x58) == 0) goto LAB_01482514;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_58,*(long *)(lVar3 + 0x58),uRam0000000003d3dc70);
    while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_58,uRam0000000003d337d0), uVar7 = uStack_48,
          (uVar5 & 1) != 0) {
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41150);
      if (lVar3 == 0) {
        func_0x00f78af4();
code_r0x01482510:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1482514);
        (*pcVar1)();
      }
      if (*(long *)(lVar3 + 0x98) == 0) {
        func_0x00f78af4();
        goto code_r0x01482510;
      }
      /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar3 + 0x98),uVar7,uRam0000000003d3e188);
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d337c8);
  }
  do {
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41150);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x48) != 0)) {
      /*Atlas.Save.SaveManager$$StartSave*/ func_0x014eb4e0(*(long *)(lVar3 + 0x48),0);
      return;
    }
LAB_01482514:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01482560;
    plVar6 = (long *)___cxa_begin_catch();
    lVar3 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d337c8);
  } while (lVar3 == 0);
  func_0x00f78ac0(lVar3,0);
code_r0x01482560:
  uVar7 = __Unwind_Resume();
  if ((bRam0000000003eb491e & 1) == 0) {
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d22ea8);
    func_0x00f78a20(0x3d3dc78);
    func_0x00f78a20(0x3d3dc80);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d41150);
    bRam0000000003eb491e = 1;
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar7,uRam0000000003d41150);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10);
    if (((*(ushort *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (((lVar3 != 0) &&
        (lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,**(undefined8 **)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8),
                                 uRam0000000003d57280), lVar3 != 0)) &&
       (lVar4 = *(long *)(lVar3 + 0x58), lVar4 != 0)) {
      uVar9 = 0;
      do {
        if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar9) {
          return;
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar9) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar6 = *(long **)(*(long *)(lVar4 + 0x10) + (long)(int)uVar9 * 8 + 0x20);
        if (plVar6 == (long *)0x0) break;
        uVar8 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
        if (((*(ushort *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar8,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8) + 0x10)
                                ,0);
        if (iVar2 != 0) {
          lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar7,uRam0000000003d41150);
          if ((lVar4 == 0) || (lVar10 = *(long *)(lVar3 + 0x58), lVar10 == 0)) break;
          lVar4 = *(long *)(lVar4 + 0x98);
          if (*(uint *)(lVar10 + 0x18) <= uVar9) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (lVar4 == 0) break;
          /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(lVar4,*(undefined8 *)
                                 (*(long *)(lVar10 + 0x10) + (long)(int)uVar9 * 8 + 0x20),
                          uRam0000000003d3e188);
        }
        uVar9 = uVar9 + 1;
        lVar4 = *(long *)(lVar3 + 0x58);
      } while (lVar4 != 0);
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1482564 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.ShowInfoToolTips
// ============================================================

void Atlas_UI_Screens_LeagueWeeklyScheduleScreen__ShowInfoToolTips(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  if ((bRam0000000003eb491e & 1) == 0) {
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d22ea8);
    func_0x00f78a20(0x3d3dc78);
    func_0x00f78a20(0x3d3dc80);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d41150);
    bRam0000000003eb491e = 1;
  }
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41150);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x20) != 0)) {
    lVar2 = *(long *)(*(long *)(lVar2 + 0x20) + 0x10);
    if (((*(ushort *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (((lVar2 != 0) &&
        (lVar2 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar2,**(undefined8 **)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8),
                                 uRam0000000003d57280), lVar2 != 0)) &&
       (lVar5 = *(long *)(lVar2 + 0x58), lVar5 != 0)) {
      uVar6 = 0;
      do {
        if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar6) {
          return;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar6) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar3 = *(long **)(*(long *)(lVar5 + 0x10) + (long)(int)uVar6 * 8 + 0x20);
        if (plVar3 == (long *)0x0) break;
        uVar4 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
        if (((*(ushort *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar1 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar4,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8) + 0x10)
                                ,0);
        if (iVar1 != 0) {
          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41150);
          if ((lVar5 == 0) || (lVar7 = *(long *)(lVar2 + 0x58), lVar7 == 0)) break;
          lVar5 = *(long *)(lVar5 + 0x98);
          if (*(uint *)(lVar7 + 0x18) <= uVar6) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (lVar5 == 0) break;
          /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(lVar5,*(undefined8 *)
                                 (*(long *)(lVar7 + 0x10) + (long)(int)uVar6 * 8 + 0x20),
                          uRam0000000003d3e188);
        }
        uVar6 = uVar6 + 1;
        lVar5 = *(long *)(lVar2 + 0x58);
      } while (lVar5 != 0);
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1482748 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.ShowDemotionWarningToolTip
// ============================================================

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

ulong Atlas_UI_Screens_LeagueWeeklyScheduleScreen__ShowDemotionWarningToolTip(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar10;
  long lVar11;
  undefined8 unaff_x19;
  long *plVar12;
  long unaff_x20;
  long lVar13;
  long *plVar14;
  int iVar15;
  undefined8 unaff_x21;
  uint uVar16;
  uint uVar17;
  long unaff_x22;
  long lVar18;
  undefined8 uVar19;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar20;
  int iVar21;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long lVar22;
  undefined8 **unaff_x29;
  undefined8 ***pppuVar23;
  undefined *unaff_x30;
  undefined *puVar24;
  undefined1 auVar25 [16];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  undefined8 *puStack_40;
  undefined *puStack_38;
  long *plVar9;
  
  lVar22 = 0x3d41150;
  if ((bRam0000000003eb491f & 1) == 0) {
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d22ea8);
    func_0x00f78a20(0x3d3dc80);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d41150);
    bRam0000000003eb491f = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41150);
  lVar5 = 0x3eb4000;
  lVar13 = unaff_x22;
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x20) == 0)) {
LAB_01482874:
    unaff_x22 = lVar13;
    unaff_x20 = lVar5;
    unaff_x19 = param_1;
    lVar5 = func_0x00f78af4();
    puStack_38 = &Atlas_UI_Screens_LeagueWeeklyScheduleScreen__ShowDemotionToolTip;
    puStack_40 = (undefined8 *)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4920 & 1) == 0) {
      func_0x00f78a20(0x3d57280);
      func_0x00f78a20(0x3d22ea8);
      func_0x00f78a20(0x3d3dc80);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d41150);
      bRam0000000003eb4920 = 1;
    }
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d41150);
    lVar13 = 0x3eb4000;
    lVar4 = unaff_x22;
    if ((lVar18 != 0) && (*(long *)(lVar18 + 0x20) != 0)) {
      lVar22 = 0x3d22ea8;
      lVar13 = *(long *)(*(long *)(lVar18 + 0x20) + 0x10);
      if (((*(ushort *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (((lVar13 != 0) &&
          (lVar18 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar13,*(undefined8 *)
                                            (*(long *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8) + 8),
                                    uRam0000000003d57280), lVar18 != 0)) &&
         (lVar22 = *(long *)(lVar18 + 0x58), lVar13 = lVar18, lVar22 != 0)) {
        lVar4 = lVar22;
        if (*(uint *)(lVar22 + 0x18) < 2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          lVar4 = *(long *)(lVar18 + 0x58);
          if (lVar4 == 0) goto code_r0x01482a60;
        }
        lVar20 = *(long *)(*(long *)(lVar22 + 0x10) + 0x28);
        lVar22 = *(long *)(lVar5 + 0x80);
        if (*(uint *)(lVar4 + 0x18) < 2) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar11 = *(long *)(*(long *)(lVar4 + 0x10) + 0x28);
        if ((lVar11 != 0) && (lVar22 != 0)) {
          lVar22 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar22,*(undefined8 *)(lVar11 + 0x28),0);
          if (*(long *)(lVar5 + 200) != 0) {
            lVar4 = *(long *)(lVar5 + 0x80);
            lVar11 = /*Atlas.League.LeagueManager$$GetCurrentLeagueDefinition*/ func_0x015f12e4(*(long *)(lVar5 + 200),0);
            if ((lVar11 != 0) && (lVar4 != 0)) {
              uVar19 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar4,*(undefined8 *)(lVar11 + 0x38),0);
              uVar19 = /*System.String$$Format*/ func_0x029bc688(lVar22,uVar19,0);
              if (lVar20 != 0) {
                *(undefined8 *)(lVar20 + 0x30) = uVar19;
                lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d41150);
                if ((lVar20 != 0) && (lVar13 = *(long *)(lVar18 + 0x58), lVar13 != 0)) {
                  plVar12 = *(long **)(lVar20 + 0x98);
                  if (*(uint *)(lVar13 + 0x18) < 2) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar5 = 0;
                  if (plVar12 != (long *)0x0) {
                    plVar8 = *(long **)(*(long *)(lVar13 + 0x10) + 0x28);
                    unaff_x21 = 0x3d41150;
                    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
                    unaff_x29 = (undefined8 **)puStack_40;
                    unaff_x30 = puStack_38;
                    goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
                  }
                }
              }
            }
          }
        }
      }
    }
code_r0x01482a60:
    lVar20 = func_0x00f78af4();
    plVar2 = &lStack_a0;
    puStack_78 = &Atlas_UI_Screens_LeagueWeeklyScheduleScreen__OnAfterEnter;
    pppuVar23 = &ppuStack_80;
    lVar11 = 0x3eb4000;
    lVar18 = 0x3d41140;
    lStack_a0 = lVar4;
    lStack_98 = lVar22;
    lStack_90 = lVar13;
    lStack_88 = lVar5;
    ppuStack_80 = &puStack_40;
    if ((bRam0000000003eb4921 & 1) == 0) {
      func_0x00f78a20(0x3d41140);
      bRam0000000003eb4921 = 1;
    }
    lVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar20,uRam0000000003d41140);
    if (lVar22 != 0) {
      lVar11 = *(long *)(lVar22 + 0x90);
      lVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar20,uRam0000000003d41140);
      if ((lVar22 != 0) && (lVar11 != 0)) {
        /*Atlas.UI.UIAtlasButton$$SubscribeToGroup*/ func_0x01514768(lVar11,*(undefined8 *)(lVar22 + 0x88),0);
        lVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar20,uRam0000000003d41140);
        if (lVar22 != 0) {
          lVar11 = *(long *)(lVar22 + 0x98);
          lVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar20,uRam0000000003d41140);
          if ((lVar22 != 0) && (lVar11 != 0)) {
            /*Atlas.UI.UIAtlasButton$$SubscribeToGroup*/ func_0x01514768(lVar11,*(undefined8 *)(lVar22 + 0x88),0);
            Atlas_UI_Screens_LeagueWeeklyScheduleScreen__ShowToolTips(lVar20);
            auVar25._8_8_ = *(undefined8 *)(lVar20 + 0xa0);
            auVar25._0_8_ = lVar20;
            plVar2 = (long *)&stack0xffffffffffffff90;
            lVar20 = lStack_88;
            lVar11 = lStack_90;
            lVar18 = lStack_98;
            lVar4 = lStack_a0;
            pppuVar23 = (undefined8 ***)ppuStack_80;
            puVar24 = puStack_78;
            goto code_r0x01482b34;
          }
        }
      }
    }
    puVar24 = &Atlas_UI_Screens_LeagueWeeklyScheduleScreen__SelectButton;
    auVar25 = func_0x00f78af4();
code_r0x01482b34:
    lVar22 = auVar25._8_8_;
    *(long *)((long)plVar2 + -0x30) = lVar4;
    *(long *)((long)plVar2 + -0x28) = lVar18;
    *(long *)((long)plVar2 + -0x20) = lVar11;
    *(long *)((long)plVar2 + -0x18) = lVar20;
    *(undefined8 ****)((long)plVar2 + -0x10) = pppuVar23;
    *(undefined **)((long)plVar2 + -8) = puVar24;
    if ((bRam0000000003eb4922 & 1) == 0) {
      func_0x00f78a20(0x3d2c7a8);
      bRam0000000003eb4922 = 1;
    }
    if (lVar22 != 0) {
      /*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(lVar22,0,0,0,0);
      /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar22,0,0,0);
      *(undefined8 *)((long)plVar2 + -0x30) = *(undefined8 *)((long)plVar2 + -0x30);
      *(undefined8 *)((long)plVar2 + -0x28) = *(undefined8 *)((long)plVar2 + -0x28);
      *(undefined8 *)((long)plVar2 + -0x20) = *(undefined8 *)((long)plVar2 + -0x20);
      *(undefined8 *)((long)plVar2 + -0x18) = *(undefined8 *)((long)plVar2 + -0x18);
      *(undefined8 *)((long)plVar2 + -0x10) = *(undefined8 *)((long)plVar2 + -0x10);
      *(undefined8 *)((long)plVar2 + -8) = *(undefined8 *)((long)plVar2 + -8);
      if ((bRam0000000003eb70f8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,lVar22,uRam0000000003d2c7a8);
        bRam0000000003eb70f8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)((long)plVar2 + -0x60) = 0x3d23990;
      *(undefined8 *)((long)plVar2 + -0x58) = 0x3eb7000;
      *(undefined1 (*) [16])((long)plVar2 + -0x50) = auVar25;
      *(undefined1 **)((long)plVar2 + -0x40) = (undefined1 *)((long)plVar2 + -0x10);
      *(undefined8 *)((long)plVar2 + -0x38) = 0x1cb56a8;
      if ((bRam0000000003ec027b & 1) == 0) {
        func_0x00f78a20(0x3d23990,0,0);
        bRam0000000003ec027b = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)((long)plVar2 + -0x60) = *(undefined8 *)((long)plVar2 + -0x60);
      *(undefined8 *)((long)plVar2 + -0x58) = *(undefined8 *)((long)plVar2 + -0x58);
      *(undefined8 *)((long)plVar2 + -0x50) = *(undefined8 *)((long)plVar2 + -0x50);
      *(undefined8 *)((long)plVar2 + -0x48) = *(undefined8 *)((long)plVar2 + -0x48);
      *(undefined8 *)((long)plVar2 + -0x40) = *(undefined8 *)((long)plVar2 + -0x40);
      *(undefined8 *)((long)plVar2 + -0x38) = *(undefined8 *)((long)plVar2 + -0x38);
      if ((bRam0000000003ec021b & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003ec021b = 1;
      }
      if (lVar22 == 0) {
        uVar7 = 1;
      }
      else {
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar3 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar22);
        uVar7 = (ulong)(uVar3 ^ 1);
      }
      return uVar7;
    }
    func_0x00f78af4();
    return 1;
  }
  lVar18 = 0x3d22ea8;
  lVar4 = *(long *)(*(long *)(lVar4 + 0x20) + 0x10);
  if (((*(ushort *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = 0;
  lVar13 = 0x3d22ea8;
  if (lVar4 == 0) goto LAB_01482874;
  lVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar4,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8) + 8),
                          uRam0000000003d57280);
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41150);
  if (((lVar4 == 0) || (lVar13 = lVar18, lVar5 == 0)) ||
     (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) goto LAB_01482874;
  plVar12 = *(long **)(lVar4 + 0x98);
  if (*(int *)(lVar5 + 0x18) == 0) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  param_1 = 0;
  if (plVar12 == (long *)0x0) goto LAB_01482874;
  plVar8 = *(long **)(*(long *)(lVar5 + 0x10) + 0x20);
Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal:
  plVar14 = plRam0000000003d3e188;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar19 = 0x3eb8000;
  plVar10 = plRam0000000003d3e188;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar8 != (long *)0x0) {
    uVar19 = 0x3d71000;
    uVar6 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    plVar10 = (long *)0x0;
    uVar6 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar6);
    if (plVar12 != (long *)0x0) {
      plVar10 = *(long **)(*(long *)(plVar14[3] + 0xc0) + 8);
      (*(code *)*plVar10)(plVar12,uVar6);
      if (plVar12[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar12[7],plVar8,uRam0000000003d3b330);
        plVar10 = (long *)plVar12[8];
        if ((plVar10 == (long *)0x0) || ((int)plVar8[2] <= (int)plVar10[2])) {
code_r0x025dfcb4:
          uVar7 = (*(code *)**(undefined8 **)(*(long *)(plVar14[3] + 0xc0) + 0x30))(plVar12);
          if ((uVar7 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
            return uVar7;
          }
          return uVar7;
        }
        if (plVar12[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar12[7],0,plVar10,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(plVar14[3] + 0xc0) + 0x60))(plVar12);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar25 = func_0x00f78af4();
  plVar9 = auVar25._8_8_;
  lVar22 = auVar25._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar19;
  *(long **)((long)register0x00000008 + -0x58) = plVar8;
  *(long **)((long)register0x00000008 + -0x50) = plVar14;
  *(long **)((long)register0x00000008 + -0x48) = plVar12;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
  if ((plVar9 != (long *)0x0) &&
     (uVar6 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180)),
     plVar14 = (long *)0x0, plVar12 = plVar9, plVar8 = plVar10, lVar22 != 0)) {
    uVar3 = (*(code *)**(undefined8 **)(*(long *)(plVar10[3] + 0xc0) + 0x70))(lVar22,uVar6);
    if ((uVar3 & 1) == 0) {
      (*(code *)**(undefined8 **)(*(long *)(plVar10[3] + 0xc0) + 0x78))(lVar22,plVar9);
    }
    return (ulong)(uVar3 ^ 1);
  }
  auVar25 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar19;
  *(long **)((long)register0x00000008 + -0x88) = plVar8;
  *(long **)((long)register0x00000008 + -0x80) = plVar14;
  *(long **)((long)register0x00000008 + -0x78) = plVar12;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x68) =
       &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
  iVar15 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar22 = *(long *)(auVar25._0_8_ + 0x38);
  if (lVar22 != 0) {
    iVar15 = *(int *)(lVar22 + 0x18);
    if (iVar15 < 1) goto code_r0x025dfe48;
    uVar3 = 0;
    iVar21 = -0x80000000;
    uVar16 = 0;
    do {
      if (*(uint *)(lVar22 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar22 = *(long *)(*(long *)(lVar22 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
      if (lVar22 == 0) break;
      iVar1 = *(int *)(lVar22 + 0x10);
      uVar17 = uVar3;
      if (iVar1 <= iVar21) {
        uVar17 = uVar16;
      }
      if (iVar15 - 1U == uVar3) goto code_r0x025dfe4c;
      if (iVar1 <= iVar21) {
        iVar1 = iVar21;
      }
      lVar22 = *(long *)(auVar25._0_8_ + 0x38);
      uVar3 = uVar3 + 1;
      iVar21 = iVar1;
      uVar16 = uVar17;
    } while (lVar22 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar17 = 0;
code_r0x025dfe4c:
  *auVar25._8_8_ = uVar17;
  return (ulong)(0 < iVar15);
}



// ============================================================
// RVA: 0x1482878 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.ShowDemotionToolTip
// ============================================================

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

ulong Atlas_UI_Screens_LeagueWeeklyScheduleScreen__ShowDemotionToolTip(long param_1)

{
  int iVar1;
  undefined8 *****pppppuVar2;
  undefined1 **ppuVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *****pppppuVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  undefined1 *unaff_x21;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *unaff_x22;
  long lVar19;
  int iVar20;
  undefined8 ******ppppppuVar21;
  undefined1 auVar22 [16];
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  long lStack_60;
  long *plStack_58;
  undefined8 *****pppppuStack_50;
  long *plStack_48;
  long *plVar11;
  
  if ((bRam0000000003eb4920 & 1) == 0) {
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d22ea8);
    func_0x00f78a20(0x3d3dc80);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d41150);
    bRam0000000003eb4920 = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41150);
  lVar14 = 0x3eb4000;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
    unaff_x21 = (undefined1 *)0x3d22ea8;
    lVar14 = *(long *)(*(long *)(lVar5 + 0x20) + 0x10);
    if (((*(ushort *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (((lVar14 != 0) &&
        (lVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar14,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8) + 8),
                                 uRam0000000003d57280), lVar5 != 0)) &&
       (unaff_x21 = *(undefined1 **)(lVar5 + 0x58), lVar14 = lVar5, unaff_x21 != (undefined1 *)0x0))
    {
      unaff_x22 = unaff_x21;
      if (*(uint *)(unaff_x21 + 0x18) < 2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        unaff_x22 = *(undefined1 **)(lVar5 + 0x58);
        if (unaff_x22 == (undefined1 *)0x0) goto LAB_01482a60;
      }
      lVar19 = *(long *)(*(long *)(unaff_x21 + 0x10) + 0x28);
      unaff_x21 = *(undefined1 **)(param_1 + 0x80);
      if (*(uint *)(unaff_x22 + 0x18) < 2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(unaff_x22 + 0x10) + 0x28) != 0) && (unaff_x21 != (undefined1 *)0x0))
      {
        unaff_x21 = (undefined1 *)
                    /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(unaff_x21,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x22 + 0x10) + 0x28) + 0x28),0);
        if (*(long *)(param_1 + 200) != 0) {
          unaff_x22 = *(undefined1 **)(param_1 + 0x80);
          lVar6 = /*Atlas.League.LeagueManager$$GetCurrentLeagueDefinition*/ func_0x015f12e4(*(long *)(param_1 + 200),0);
          if ((lVar6 != 0) && (unaff_x22 != (undefined1 *)0x0)) {
            uVar7 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(unaff_x22,*(undefined8 *)(lVar6 + 0x38),0);
            uVar7 = /*System.String$$Format*/ func_0x029bc688(unaff_x21,uVar7,0);
            if (lVar19 != 0) {
              *(undefined8 *)(lVar19 + 0x30) = uVar7;
              lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41150);
              if ((lVar19 != 0) && (lVar14 = *(long *)(lVar5 + 0x58), lVar14 != 0)) {
                plVar13 = *(long **)(lVar19 + 0x98);
                if (*(uint *)(lVar14 + 0x18) < 2) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                pppppuVar2 = pppppuRam0000000003d3e188;
                param_1 = 0;
                if (plVar13 != (long *)0x0) {
                  plVar10 = *(long **)(*(long *)(lVar14 + 0x10) + 0x28);
                  uVar7 = 0x3eb8000;
                  pppppuVar12 = pppppuRam0000000003d3e188;
                  if ((bRam0000000003eb832a & 1) == 0) {
                    func_0x00f78a20(0x3d3b330);
                    func_0x00f78a20(0x3d3b348);
                    func_0x00f78a20(0x3d717e8);
                    bRam0000000003eb832a = 1;
                  }
                  if (plVar10 != (long *)0x0) {
                    uVar7 = 0x3d71000;
                    uVar8 = (**(code **)(*plVar10 + 0x178))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x180));
                    pppppuVar12 = (undefined8 *****)0x0;
                    uVar8 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar8);
                    if (plVar13 != (long *)0x0) {
                      pppppuVar12 = (undefined8 *****)pppppuVar2[3][0x18][1];
                      (*(code *)*pppppuVar12)(plVar13,uVar8);
                      if (plVar13[7] != 0) {
                        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar13[7],plVar10,uRam0000000003d3b330);
                        pppppuVar12 = (undefined8 *****)plVar13[8];
                        if ((pppppuVar12 == (undefined8 *****)0x0) ||
                           ((int)plVar10[2] <= *(int *)(pppppuVar12 + 2))) {
code_r0x025dfcb4:
                          uVar9 = (*(code *)*pppppuVar2[3][0x18][6])(plVar13);
                          if ((uVar9 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            uVar9 = (**(code **)(*plVar13 + 0x1a8))
                                              (plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
                            return uVar9;
                          }
                          return uVar9;
                        }
                        if (plVar13[7] != 0) {
                          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar13[7],0,pppppuVar12,uRam0000000003d3b348);
                          (*(code *)*pppppuVar2[3][0x18][0xc])(plVar13);
                          goto code_r0x025dfcb4;
                        }
                      }
                    }
                  }
                  auVar22 = func_0x00f78af4();
                  plVar11 = auVar22._8_8_;
                  lVar14 = auVar22._0_8_;
                  pppppuStack_50 = pppppuVar2;
                  lStack_60 = uVar7;
                  plStack_58 = plVar10;
                  plStack_48 = plVar13;
                  if ((plVar11 != (long *)0x0) &&
                     (uVar7 = (**(code **)(*plVar11 + 0x178))
                                        (plVar11,*(undefined8 *)(*plVar11 + 0x180)), lVar14 != 0)) {
                    uVar4 = (*(code *)*pppppuVar12[3][0x18][0xe])(lVar14,uVar7);
                    if ((uVar4 & 1) == 0) {
                      (*(code *)*pppppuVar12[3][0x18][0xf])(lVar14,plVar11);
                    }
                    return (ulong)(uVar4 ^ 1);
                  }
                  auVar22 = func_0x00f78af4();
                  puStack_68 = &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex
                  ;
                  iVar15 = 0x3eb8000;
                  puStack_70 = &stack0xffffffffffffffc0;
                  if ((bRam0000000003eb832b & 1) == 0) {
                    func_0x00f78a20(0x3d3b358);
                    func_0x00f78a20(0x3d3b360);
                    bRam0000000003eb832b = 1;
                  }
                  lVar14 = *(long *)(auVar22._0_8_ + 0x38);
                  if (lVar14 != 0) {
                    iVar15 = *(int *)(lVar14 + 0x18);
                    if (iVar15 < 1) goto code_r0x025dfe48;
                    uVar4 = 0;
                    iVar20 = -0x80000000;
                    uVar17 = 0;
                    do {
                      if (*(uint *)(lVar14 + 0x18) <= uVar4) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + (long)(int)uVar4 * 8 + 0x20);
                      if (lVar14 == 0) break;
                      iVar1 = *(int *)(lVar14 + 0x10);
                      uVar18 = uVar4;
                      if (iVar1 <= iVar20) {
                        uVar18 = uVar17;
                      }
                      if (iVar15 - 1U == uVar4) goto code_r0x025dfe4c;
                      if (iVar1 <= iVar20) {
                        iVar1 = iVar20;
                      }
                      lVar14 = *(long *)(auVar22._0_8_ + 0x38);
                      uVar4 = uVar4 + 1;
                      iVar20 = iVar1;
                      uVar17 = uVar18;
                    } while (lVar14 != 0);
                  }
                  func_0x00f78af4();
code_r0x025dfe48:
                  uVar18 = 0;
code_r0x025dfe4c:
                  *auVar22._8_8_ = uVar18;
                  return (ulong)(0 < iVar15);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_01482a60:
  plVar13 = (long *)func_0x00f78af4();
  ppuVar3 = &puStack_70;
  plStack_48 = (long *)&Atlas_UI_Screens_LeagueWeeklyScheduleScreen__OnAfterEnter;
  ppppppuVar21 = &pppppuStack_50;
  lVar5 = 0x3eb4000;
  puVar16 = (undefined1 *)0x3d41140;
  puStack_70 = unaff_x22;
  puStack_68 = unaff_x21;
  lStack_60 = lVar14;
  plStack_58 = (long *)param_1;
  pppppuStack_50 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4921 & 1) == 0) {
    func_0x00f78a20(0x3d41140);
    bRam0000000003eb4921 = 1;
  }
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(plVar13,uRam0000000003d41140);
  if (lVar14 != 0) {
    lVar5 = *(long *)(lVar14 + 0x90);
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(plVar13,uRam0000000003d41140);
    if ((lVar14 != 0) && (lVar5 != 0)) {
      /*Atlas.UI.UIAtlasButton$$SubscribeToGroup*/ func_0x01514768(lVar5,*(undefined8 *)(lVar14 + 0x88),0);
      lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(plVar13,uRam0000000003d41140);
      if (lVar14 != 0) {
        lVar5 = *(long *)(lVar14 + 0x98);
        lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(plVar13,uRam0000000003d41140);
        if ((lVar14 != 0) && (lVar5 != 0)) {
          /*Atlas.UI.UIAtlasButton$$SubscribeToGroup*/ func_0x01514768(lVar5,*(undefined8 *)(lVar14 + 0x88),0);
          Atlas_UI_Screens_LeagueWeeklyScheduleScreen__ShowToolTips(plVar13);
          auVar22._8_8_ = *(undefined8 *)((long)plVar13 + 0xa0);
          auVar22._0_8_ = plVar13;
          ppuVar3 = (undefined1 **)&stack0xffffffffffffffc0;
          plVar13 = plStack_58;
          lVar5 = lStack_60;
          puVar16 = puStack_68;
          unaff_x22 = puStack_70;
          ppppppuVar21 = (undefined8 ******)pppppuStack_50;
          plVar10 = plStack_48;
          goto code_r0x01482b34;
        }
      }
    }
  }
  plVar10 = (long *)&Atlas_UI_Screens_LeagueWeeklyScheduleScreen__SelectButton;
  auVar22 = func_0x00f78af4();
code_r0x01482b34:
  lVar14 = auVar22._8_8_;
  *(undefined1 **)((long)ppuVar3 + -0x30) = unaff_x22;
  *(undefined1 **)((long)ppuVar3 + -0x28) = puVar16;
  *(long *)((long)ppuVar3 + -0x20) = lVar5;
  *(long **)((long)ppuVar3 + -0x18) = plVar13;
  *(undefined8 *******)((long)ppuVar3 + -0x10) = ppppppuVar21;
  *(long **)((long)ppuVar3 + -8) = plVar10;
  if ((bRam0000000003eb4922 & 1) == 0) {
    func_0x00f78a20(0x3d2c7a8);
    bRam0000000003eb4922 = 1;
  }
  if (lVar14 != 0) {
    /*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(lVar14,0,0,0,0);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar14,0,0,0);
    *(undefined8 *)((long)ppuVar3 + -0x30) = *(undefined8 *)((long)ppuVar3 + -0x30);
    *(undefined8 *)((long)ppuVar3 + -0x28) = *(undefined8 *)((long)ppuVar3 + -0x28);
    *(undefined8 *)((long)ppuVar3 + -0x20) = *(undefined8 *)((long)ppuVar3 + -0x20);
    *(undefined8 *)((long)ppuVar3 + -0x18) = *(undefined8 *)((long)ppuVar3 + -0x18);
    *(undefined8 *)((long)ppuVar3 + -0x10) = *(undefined8 *)((long)ppuVar3 + -0x10);
    *(undefined8 *)((long)ppuVar3 + -8) = *(undefined8 *)((long)ppuVar3 + -8);
    if ((bRam0000000003eb70f8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,lVar14,uRam0000000003d2c7a8);
      bRam0000000003eb70f8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)((long)ppuVar3 + -0x60) = 0x3d23990;
    *(undefined8 *)((long)ppuVar3 + -0x58) = 0x3eb7000;
    *(undefined1 (*) [16])((long)ppuVar3 + -0x50) = auVar22;
    *(undefined1 **)((long)ppuVar3 + -0x40) = (undefined1 *)((long)ppuVar3 + -0x10);
    *(undefined8 *)((long)ppuVar3 + -0x38) = 0x1cb56a8;
    if ((bRam0000000003ec027b & 1) == 0) {
      func_0x00f78a20(0x3d23990,0,0);
      bRam0000000003ec027b = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)((long)ppuVar3 + -0x60) = *(undefined8 *)((long)ppuVar3 + -0x60);
    *(undefined8 *)((long)ppuVar3 + -0x58) = *(undefined8 *)((long)ppuVar3 + -0x58);
    *(undefined8 *)((long)ppuVar3 + -0x50) = *(undefined8 *)((long)ppuVar3 + -0x50);
    *(undefined8 *)((long)ppuVar3 + -0x48) = *(undefined8 *)((long)ppuVar3 + -0x48);
    *(undefined8 *)((long)ppuVar3 + -0x40) = *(undefined8 *)((long)ppuVar3 + -0x40);
    *(undefined8 *)((long)ppuVar3 + -0x38) = *(undefined8 *)((long)ppuVar3 + -0x38);
    if ((bRam0000000003ec021b & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003ec021b = 1;
    }
    if (lVar14 == 0) {
      uVar9 = 1;
    }
    else {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar14);
      uVar9 = (ulong)(uVar4 ^ 1);
    }
    return uVar9;
  }
  func_0x00f78af4();
  return 1;
}



// ============================================================
// RVA: 0x1482a64 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.OnAfterEnter
// ============================================================

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

uint Atlas_UI_Screens_LeagueWeeklyScheduleScreen__OnAfterEnter(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 unaff_x21;
  undefined8 uVar5;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  undefined *unaff_x30;
  undefined1 auVar7 [16];
  
  puVar1 = &stack0xffffffffffffffd0;
  puVar6 = &stack0xfffffffffffffff0;
  uVar5 = 0x3d41140;
  if ((bRam0000000003eb4921 & 1) == 0) {
    func_0x00f78a20(0x3d41140);
    bRam0000000003eb4921 = 1;
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41140);
  lVar4 = 0x3eb4000;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x90);
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41140);
    if ((lVar3 != 0) && (lVar4 != 0)) {
      /*Atlas.UI.UIAtlasButton$$SubscribeToGroup*/ func_0x01514768(lVar4,*(undefined8 *)(lVar3 + 0x88),0);
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41140);
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x98);
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41140);
        if ((lVar3 != 0) && (lVar4 != 0)) {
          /*Atlas.UI.UIAtlasButton$$SubscribeToGroup*/ func_0x01514768(lVar4,*(undefined8 *)(lVar3 + 0x88),0);
          Atlas_UI_Screens_LeagueWeeklyScheduleScreen__ShowToolTips(param_1);
          lVar3 = *(long *)(param_1 + 0xa0);
          puVar1 = (undefined1 *)register0x00000008;
          lVar4 = param_1;
          param_1 = unaff_x19;
          uVar5 = unaff_x21;
          puVar6 = unaff_x29;
          goto code_r0x01482b34;
        }
      }
    }
  }
  unaff_x20 = lVar4;
  unaff_x30 = &Atlas_UI_Screens_LeagueWeeklyScheduleScreen__SelectButton;
  auVar7 = func_0x00f78af4();
  lVar3 = auVar7._8_8_;
  lVar4 = auVar7._0_8_;
code_r0x01482b34:
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = uVar5;
  *(long *)(puVar1 + -0x20) = unaff_x20;
  *(long *)(puVar1 + -0x18) = param_1;
  *(undefined1 **)(puVar1 + -0x10) = puVar6;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  if ((bRam0000000003eb4922 & 1) == 0) {
    func_0x00f78a20(0x3d2c7a8);
    bRam0000000003eb4922 = 1;
  }
  if (lVar3 != 0) {
    /*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(lVar3,0,0,0,0);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar3,0,0,0);
    *(undefined8 *)(puVar1 + -0x30) = *(undefined8 *)(puVar1 + -0x30);
    *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + -0x28);
    *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
    *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
    *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
    if ((bRam0000000003eb70f8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,lVar3,uRam0000000003d2c7a8);
      bRam0000000003eb70f8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(puVar1 + -0x60) = 0x3d23990;
    *(undefined8 *)(puVar1 + -0x58) = 0x3eb7000;
    *(long *)(puVar1 + -0x50) = lVar4;
    *(long *)(puVar1 + -0x48) = lVar3;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
    *(undefined8 *)(puVar1 + -0x38) = 0x1cb56a8;
    if ((bRam0000000003ec027b & 1) == 0) {
      func_0x00f78a20(0x3d23990,0,0);
      bRam0000000003ec027b = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(puVar1 + -0x60) = *(undefined8 *)(puVar1 + -0x60);
    *(undefined8 *)(puVar1 + -0x58) = *(undefined8 *)(puVar1 + -0x58);
    *(undefined8 *)(puVar1 + -0x50) = *(undefined8 *)(puVar1 + -0x50);
    *(undefined8 *)(puVar1 + -0x48) = *(undefined8 *)(puVar1 + -0x48);
    *(undefined8 *)(puVar1 + -0x40) = *(undefined8 *)(puVar1 + -0x40);
    *(undefined8 *)(puVar1 + -0x38) = *(undefined8 *)(puVar1 + -0x38);
    if ((bRam0000000003ec021b & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003ec021b = 1;
    }
    if (lVar3 == 0) {
      uVar2 = 1;
    }
    else {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar3);
      uVar2 = uVar2 ^ 1;
    }
    return uVar2;
  }
  func_0x00f78af4();
  return 1;
}



// ============================================================
// RVA: 0x1482b34 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.SelectButton
// ============================================================

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

uint Atlas_UI_Screens_LeagueWeeklyScheduleScreen__SelectButton(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  if ((bRam0000000003eb4922 & 1) == 0) {
    func_0x00f78a20(0x3d2c7a8);
    bRam0000000003eb4922 = 1;
  }
  if (param_2 != 0) {
    /*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(param_2,0,0,0,0);
    /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(param_2,0,0,0);
    if ((bRam0000000003eb70f8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,param_2,uRam0000000003d2c7a8);
      bRam0000000003eb70f8 = 1;
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
    if (param_2 == 0) {
      uVar1 = 1;
    }
    else {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar1 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(param_2);
      uVar1 = uVar1 ^ 1;
    }
    return uVar1;
  }
  func_0x00f78af4();
  return 1;
}



// ============================================================
// RVA: 0x1482bc4 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.RequiresBeforeEnterCoroutine
// ============================================================

undefined8 Atlas_UI_Screens_LeagueWeeklyScheduleScreen__RequiresBeforeEnterCoroutine(void)

{
  return 1;
}



// ============================================================
// RVA: 0x1482bcc | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.BuildOptions
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1482c40 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.PreSelectMap
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1482d84 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.BuildMapPanels
// ============================================================

/* WARNING: Possible PIC construction at 0x014835d0: Changing call to branch */

ulong Atlas_UI_Screens_LeagueWeeklyScheduleScreen__BuildMapPanels(long param_1)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar6;
  uint uVar7;
  uint uVar5;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  uint uVar23;
  long lVar24;
  code *pcVar25;
  ulong unaff_x23;
  undefined1 ***unaff_x24;
  ulong *puVar26;
  undefined8 unaff_x25;
  long unaff_x26;
  long lVar27;
  undefined *puVar28;
  undefined1 auVar29 [16];
  ulong uStack_1f8;
  long lStack_1f0;
  long *plStack_1e8;
  undefined1 ***pppuStack_1e0;
  long *plStack_1d8;
  undefined1 ****ppppuStack_1d0;
  undefined *puStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined1 ***pppuStack_1b0;
  long *plStack_1a8;
  undefined1 ***pppuStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined8 *puStack_188;
  ulong uStack_180;
  long lStack_178;
  undefined1 **ppuStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  undefined4 uStack_138;
  uint uStack_134;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar24 = 0x3eb4000;
  puVar22 = (undefined8 *)0x3d2f2e0;
  if ((bRam0000000003eb4925 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2f2e8);
    func_0x00f78a20(0x3d2f2e0);
    func_0x00f78a20(0x3d1c400);
    func_0x00f78a20(0x3d579a8);
    func_0x00f78a20(0x3d3c628);
    func_0x00f78a20(0x3d3c630);
    func_0x00f78a20(0x3d231f8);
    func_0x00f78a20(0x3d5b0d0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d635a0);
    func_0x00f78a20(0x3d635a8);
    func_0x00f78a20(0x3d635b0);
    func_0x00f78a20(0x3d27ea8);
    func_0x00f78a20(0x3d41140);
    func_0x00f78a20(0x3d41148);
    bRam0000000003eb4925 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  lVar8 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<MapDefinition, UILeagueDayPanelBehaviour>_TypeInfo*/ uRam0000000003d1c400);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(lVar8,uRam0000000003d2f2e0);
  *(long *)(param_1 + 0xb8) = lVar8;
  lVar16 = *(long *)(param_1 + 200);
  if (lVar16 != 0) {
    uStack_140 = 0;
    puVar22 = (undefined8 *)0x0;
    lVar18 = 0x3d23990;
    lVar20 = 0x3d23990;
    while (lVar8 = lVar18, *(long *)(lVar16 + 0x38) != 0) {
      uVar7 = (uint)puVar22;
      lVar8 = lVar20;
      if (*(int *)(*(long *)(lVar16 + 0x38) + 0x18) <= (int)uVar7) {
        lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41140);
        if (lVar16 != 0) {
          lVar16 = *(long *)(lVar16 + 0x90);
          puVar22 = &uStack_b0;
          if (lVar16 != 0) {
            uStack_78 = *(undefined8 *)(lVar16 + 0x28);
            uStack_80 = *(undefined8 *)(lVar16 + 0x20);
            uStack_88 = *(undefined8 *)(lVar16 + 0x40);
            uStack_90 = *(undefined8 *)(lVar16 + 0x38);
            lVar8 = *(long *)(param_1 + 0xc0);
            if (lVar8 != 0) {
              if (*(uint *)(lVar8 + 0x18) < 4) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              lVar16 = *(long *)(*(long *)(lVar8 + 0x10) + 0x38);
              if (lVar16 != 0) {
                lVar8 = *(long *)(lVar16 + 0x20);
                lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41140);
                if ((lVar16 != 0) && (*(long *)(lVar16 + 0x90) != 0)) {
                  uStack_d8 = uStack_78;
                  uStack_e0 = uStack_80;
                  uStack_c0 = uStack_88;
                  uStack_c8 = uStack_90;
                  lStack_d0 = lVar8;
                  /*UnityEngine.UI.Selectable$$set_navigation*/ func_0x032e3820(*(long *)(lVar16 + 0x90),&uStack_e0,0);
                  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41140);
                  if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x98), lVar16 != 0)) {
                    uStack_98 = *(undefined8 *)(lVar16 + 0x28);
                    uStack_a0 = *(undefined8 *)(lVar16 + 0x20);
                    uStack_a8 = *(undefined8 *)(lVar16 + 0x40);
                    uStack_b0 = *(undefined8 *)(lVar16 + 0x38);
                    lVar8 = *(long *)(param_1 + 0xc0);
                    if (lVar8 != 0) {
                      if (*(uint *)(lVar8 + 0x18) < 3) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar16 = *(long *)(*(long *)(lVar8 + 0x10) + 0x30);
                      if (lVar16 != 0) {
                        lVar8 = *(long *)(lVar16 + 0x20);
                        lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41140);
                        if ((lVar16 != 0) && (*(long *)(lVar16 + 0x98) != 0)) {
                          uStack_108 = uStack_98;
                          uStack_110 = uStack_a0;
                          uStack_f0 = uStack_a8;
                          uStack_f8 = uStack_b0;
                          lStack_100 = lVar8;
                          /*UnityEngine.UI.Selectable$$set_navigation*/ func_0x032e3820(*(long *)(lVar16 + 0x98),&uStack_110,0);
                          lVar8 = *(long *)(param_1 + 0xc0);
                          if (lVar8 != 0) {
                            if (*(uint *)(lVar8 + 0x18) < 4) {
                              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                            }
                            lVar16 = *(long *)(*(long *)(lVar8 + 0x10) + 0x38);
                            if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x20), lVar16 != 0))
                               && (lVar24 = *(long *)(param_1 + 0xc0), lVar24 != 0)) {
                              uVar7 = *(uint *)(lVar16 + 0x24);
                              puVar22 = (undefined8 *)(ulong)uVar7;
                              lVar8 = *(long *)(lVar16 + 0x40);
                              if (*(uint *)(lVar24 + 0x18) < 7) {
                                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                              }
                              lVar16 = *(long *)(*(long *)(lVar24 + 0x10) + 0x50);
                              if ((lVar16 != 0) &&
                                 (unaff_x23 = *(ulong *)(param_1 + 0xc0), unaff_x23 != 0)) {
                                lVar24 = *(long *)(lVar16 + 0x20);
                                if (*(uint *)(unaff_x23 + 0x18) < 3) {
                                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                                }
                                lVar16 = *(long *)(*(long *)(unaff_x23 + 0x10) + 0x30);
                                if (lVar16 != 0) {
                                  unaff_x23 = *(ulong *)(lVar16 + 0x20);
                                  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41140);
                                  if ((lVar16 != 0) &&
                                     (unaff_x24 = *(undefined1 ****)(param_1 + 0xc0),
                                     unaff_x24 != (undefined1 ***)0x0)) {
                                    param_1 = *(long *)(lVar16 + 0x90);
                                    if (*(uint *)(unaff_x24 + 3) < 4) {
                                      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                                    }
                                    if ((unaff_x24[2][7] != (undefined1 *)0x0) &&
                                       (lVar16 = *(long *)(unaff_x24[2][7] + 0x20), lVar16 != 0)) {
                                      uStack_138 = 4;
                                      uStack_134 = uVar7;
                                      lStack_130 = param_1;
                                      lStack_128 = lVar24;
                                      uStack_120 = unaff_x23;
                                      lStack_118 = lVar8;
                                      /*UnityEngine.UI.Selectable$$set_navigation*/ func_0x032e3820(lVar16,&uStack_138,0);
                                      return uStack_140;
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
        break;
      }
      lVar24 = func_0x00f78aec(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<>c__DisplayClass34_0_TypeInfo*/ uRam0000000003d27ea8);
      /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<>c__DisplayClass34_0$$.ctor*/ func_0x0155ccb4(lVar24,0);
      if (lVar24 == 0) break;
      *(long *)(lVar24 + 0x30) = param_1;
      if ((*(long *)(param_1 + 200) == 0) ||
         (lVar16 = *(long *)(*(long *)(param_1 + 200) + 0x38), lVar16 == 0)) break;
      lVar8 = lVar18;
      if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_01483558;
      lVar27 = (long)(int)uVar7;
      *(undefined8 *)(lVar24 + 0x20) = *(undefined8 *)(lVar16 + lVar27 * 8 + 0x20);
      lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41140);
      lVar8 = lVar20;
      if ((lVar16 == 0) || (*(long *)(lVar16 + 0x70) == 0)) break;
      uVar9 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar16 + 0x70),0);
      if (3 < uVar7) {
        lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41140);
        if ((lVar16 == 0) || (*(long *)(lVar16 + 0x78) == 0)) break;
        uVar9 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar16 + 0x78),0);
      }
      unaff_x24 = *(undefined1 ****)(param_1 + 0x90);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar16 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(unaff_x24,uVar9,uRam0000000003d5b0d0);
      unaff_x23 = uVar9;
      if (lVar16 == 0) break;
      unaff_x23 = /*UnityEngine.GameObject$$GetComponentInChildren<TMP_Dropdown.DropdownItem>*/ func_0x0185d228(lVar16,uRam0000000003d579a8);
      unaff_x25 = *(undefined8 *)(lVar24 + 0x20);
      unaff_x26 = *(long *)(param_1 + 0x80);
      unaff_x24 = (undefined1 ***)func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
      /*Atlas.UI.MapMetagameData$$.ctor*/ func_0x0148d608(unaff_x24,unaff_x25,unaff_x26,0,0);
      *(undefined1 ****)(lVar24 + 0x18) = unaff_x24;
      if ((unaff_x23 == 0) || (plVar10 = *(long **)(unaff_x23 + 0x18), plVar10 == (long *)0x0))
      break;
      (**(code **)(*plVar10 + 0x188))(plVar10,unaff_x24,*(undefined8 *)(*plVar10 + 400));
      if (*(long *)(param_1 + 200) == 0) break;
      unaff_x24 = (undefined1 ***)/*Atlas.League.LeagueManager$$IsEventPlayable*/ func_0x015f3bf4(*(long *)(param_1 + 200),puVar22,0);
      if (*(long *)(param_1 + 200) == 0) break;
      unaff_x25 = /*Atlas.League.LeagueManager$$HasPlayedEvent*/ func_0x015f3c44(*(long *)(param_1 + 200),puVar22,0);
      if (*(long *)(param_1 + 200) == 0) break;
      unaff_x26 = *(long *)(param_1 + 0x80);
      lVar16 = /*Atlas.League.LeagueManager$$get_WeeklySchedule*/ func_0x015f17b4(*(long *)(param_1 + 200),0);
      if (lVar16 == 0) break;
      lVar8 = lVar18;
      if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_01483558;
      lVar16 = *(long *)(lVar16 + lVar27 * 8 + 0x20);
      lVar8 = lVar20;
      if ((lVar16 == 0) || (unaff_x26 == 0)) break;
      uVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(unaff_x26,*(undefined8 *)(lVar16 + 0x30),0);
      /*Atlas.UI.League.UILeagueDayPanelBehaviour$$SetData*/ func_0x0151bdd4(unaff_x23,unaff_x24,unaff_x25,uVar11,0);
      if ((*(long *)(param_1 + 200) == 0) ||
         ((lVar16 = *(long *)(*(long *)(param_1 + 200) + 0x50), lVar16 == 0 ||
          (lVar16 = *(long *)(lVar16 + 0x10), lVar16 == 0)))) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_01483558;
      if (*(long *)(unaff_x23 + 0x58) == 0) break;
      iVar4 = *(int *)(lVar16 + lVar27 * 4 + 0x20);
      if (0xc < iVar4) {
        iVar4 = 0xd;
      }
      /*Atlas.UI.League.LeagueDayBestPlacementBehaviour$$Setup*/ func_0x015eda44(*(long *)(unaff_x23 + 0x58),iVar4,*(undefined8 *)(param_1 + 0x80),0);
      unaff_x24 = *(undefined1 ****)(unaff_x23 + 0x20);
      *(undefined1 ****)(lVar24 + 0x10) = unaff_x24;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x24,0,0);
      if (iVar4 != 0) {
        unaff_x24 = *(undefined1 ****)(lVar24 + 0x10);
        lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41140);
        if ((lVar16 == 0) || (unaff_x24 == (undefined1 ***)0x0)) break;
        /*Atlas.UI.UIAtlasButton$$SubscribeToGroup*/ func_0x01514768(unaff_x24,*(undefined8 *)(lVar16 + 0x88),0);
        *(uint *)(lVar24 + 0x28) = uVar7;
        if (*(long *)(param_1 + 200) == 0) break;
        unaff_x26 = /*Atlas.League.LeagueManager$$IsEventPlayable*/ func_0x015f3bf4(*(long *)(param_1 + 200),puVar22,0);
        unaff_x24 = *(undefined1 ****)(lVar24 + 0x10);
        unaff_x25 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        if ((int)unaff_x26 == 0) {
          /*System.Action$$.ctor*/ func_0x02924c80(unaff_x25,lVar24,uRam0000000003d635a8,0);
          if (unaff_x24 == (undefined1 ***)0x0) break;
          /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(unaff_x24,unaff_x25,0);
          unaff_x24 = *(undefined1 ****)(lVar24 + 0x10);
          unaff_x25 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(unaff_x25,lVar24,uRam0000000003d635b0,0);
          if (unaff_x24 == (undefined1 ***)0x0) break;
          /*Atlas.UI.UIAtlasButton$$add_Selected*/ func_0x015141a0(unaff_x24,unaff_x25,0);
        }
        else {
          /*System.Action$$.ctor*/ func_0x02924c80(unaff_x25,lVar24,uRam0000000003d635a0,0);
          if (unaff_x24 == (undefined1 ***)0x0) break;
          /*Atlas.UI.UIAtlasButton$$add_SelectedOrPressed*/ func_0x01514578(unaff_x24,unaff_x25,0);
          if (*(long *)(lVar24 + 0x20) == 0) break;
          unaff_x24 = *(undefined1 ****)(*(long *)(lVar24 + 0x20) + 0x18);
          lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41148);
          if (lVar16 == 0) break;
          unaff_x25 = *(undefined8 *)(lVar16 + 0x20);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar9 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(unaff_x24,unaff_x25,0);
          if ((uVar9 & 1) == 0) {
            lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41148);
            if (lVar16 == 0) break;
            uVar9 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(lVar16 + 0x20,0);
            if ((uVar9 & 1) == 0) {
              if (*(long *)(param_1 + 200) == 0) break;
              uVar23 = *(uint *)(lVar24 + 0x28);
              unaff_x24 = (undefined1 ***)(ulong)uVar23;
              uVar5 = /*Atlas.League.LeagueManager$$GetTodayIndex*/ func_0x015f3c20(*(long *)(param_1 + 200),0);
              if (uVar23 == uVar5) goto LAB_01483268;
            }
          }
          else {
LAB_01483268:
            uStack_140 = *(ulong *)(lVar24 + 0x10);
          }
        }
      }
      if (*(long *)(param_1 + 0xb8) == 0) break;
      /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(*(long *)(param_1 + 0xb8),*(undefined8 *)(lVar24 + 0x20),unaff_x23,
                      uRam0000000003d2f2e8);
      if (*(long *)(param_1 + 0xc0) == 0) break;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0xc0),unaff_x23,uRam0000000003d3c628);
      puVar22 = (undefined8 *)(ulong)(uVar7 + 1);
      lVar16 = *(long *)(param_1 + 200);
      if (lVar16 == 0) break;
    }
  }
  func_0x00f78af4();
LAB_01483558:
  uVar11 = func_0x00f78b24();
  lVar16 = func_0x00f78ac0(uVar11,0);
  puStack_148 = &Atlas_UI_Screens_LeagueWeeklyScheduleScreen__ContinuePressed;
  lStack_160 = lVar8;
  lStack_158 = param_1;
  puStack_150 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4926 & 1) == 0) {
    func_0x00f78a20(0x3d41148);
    bRam0000000003eb4926 = 1;
  }
  bVar2 = *(byte *)(lVar16 + 0xd8);
  if (bVar2 == 0) {
    auVar29._8_4_ = *(undefined4 *)(lVar16 + 0xdc);
    auVar29._0_8_ = lVar16;
    auVar29._12_4_ = 0;
    puVar28 = &UNK_014835d4;
  }
  else {
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar16,uRam0000000003d41148);
    if (lVar8 != 0) {
      if (*(long *)(lVar8 + 0x28) != 0) {
        /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.NextSelected$$Invoke*/ func_0x0155d6c0(*(long *)(lVar8 + 0x28),0);
      }
      return (ulong)(bVar2 != 0);
    }
    puVar28 = &Atlas_UI_Screens_LeagueWeeklyScheduleScreen__LockedButtonPressed;
    auVar29 = func_0x00f78af4();
  }
  lVar8 = auVar29._0_8_;
  uVar11 = 0x3d29328;
  pppuStack_1a0 = unaff_x24;
  puStack_198 = (undefined *)unaff_x23;
  lStack_190 = lVar24;
  puStack_188 = puVar22;
  uStack_180 = (ulong)bVar2;
  lStack_178 = lVar16;
  ppuStack_170 = &puStack_150;
  puStack_168 = puVar28;
  if ((bRam0000000003eb4929 & 1) == 0) {
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d29328);
    func_0x00f78a20(0x3d6f148);
    bRam0000000003eb4929 = 1;
  }
  plVar10 = (long *)func_0x00f78aec(/*Atlas.UI.ToolTipManager.ToolTipData_TypeInfo*/ uRam0000000003d29328);
  /*Atlas.UI.ToolTipManager.ToolTipData$$.ctor*/ func_0x0156b580(plVar10,0);
  lVar24 = /*STR('LEAGUE_LOCKED_DAY_TOOLTIP')*/ lRam0000000003d6f148;
  if (plVar10 != (long *)0x0) {
    plVar10[5] = /*STR('LEAGUE_LOCKED_DAY_TOOLTIP')*/ lRam0000000003d6f148;
    if (*(long *)(lVar8 + 0x80) != 0) {
      uVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar8 + 0x80),lVar24,0);
      if (*(long *)(lVar8 + 200) != 0) {
        unaff_x23 = *(ulong *)(lVar8 + 0x80);
        lVar24 = /*Atlas.League.LeagueManager$$get_WeeklySchedule*/ func_0x015f17b4(*(long *)(lVar8 + 200),0);
        if (lVar24 != 0) {
          if (*(uint *)(lVar24 + 0x18) <= auVar29._8_4_) goto code_r0x0148371c;
          lVar24 = *(long *)(lVar24 + (long)(int)auVar29._8_4_ * 8 + 0x20);
          if ((lVar24 != 0) && (unaff_x23 != 0)) {
            uVar12 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(unaff_x23,*(undefined8 *)(lVar24 + 0x30),0);
            lVar24 = /*System.String$$Format*/ func_0x029bc688(uVar11,uVar12,0);
            puVar28 = puStack_198;
            plVar10[6] = lVar24;
            *(undefined4 *)(plVar10 + 7) = 4;
            *(undefined1 *)((long)plVar10 + 0x3c) = 1;
            plVar21 = plRam0000000003d3e188;
            plVar13 = *(long **)(lVar8 + 0xd0);
            if (plVar13 != (long *)0x0) {
              uVar11 = 0x3eb8000;
              plVar15 = plRam0000000003d3e188;
              if ((bRam0000000003eb832a & 1) == 0) {
                func_0x00f78a20(0x3d3b330);
                func_0x00f78a20(0x3d3b348);
                func_0x00f78a20(0x3d717e8);
                bRam0000000003eb832a = 1;
              }
              if (plVar10 != (long *)0x0) {
                uVar11 = 0x3d71000;
                uVar12 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
                plVar15 = (long *)0x0;
                uVar12 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar12);
                if (plVar13 != (long *)0x0) {
                  plVar15 = *(long **)(*(long *)(plVar21[3] + 0xc0) + 8);
                  (*(code *)*plVar15)(plVar13,uVar12);
                  if (plVar13[7] != 0) {
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar13[7],plVar10,uRam0000000003d3b330);
                    plVar15 = (long *)plVar13[8];
                    if ((plVar15 == (long *)0x0) || ((int)plVar10[2] <= (int)plVar15[2])) {
code_r0x025dfcb4:
                      uVar9 = (*(code *)**(undefined8 **)(*(long *)(plVar21[3] + 0xc0) + 0x30))
                                        (plVar13);
                      if ((uVar9 & 1) != 0) {
                        return uVar9;
                      }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      uVar9 = (**(code **)(*plVar13 + 0x1a8))
                                        (plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
                      return uVar9;
                    }
                    if (plVar13[7] != 0) {
                      /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar13[7],0,plVar15,uRam0000000003d3b348);
                      (*(code *)**(undefined8 **)(*(long *)(plVar21[3] + 0xc0) + 0x60))(plVar13);
                      goto code_r0x025dfcb4;
                    }
                  }
                }
              }
              auVar29 = func_0x00f78af4();
              plVar14 = auVar29._8_8_;
              lVar24 = auVar29._0_8_;
              pppuStack_1b0 = (undefined1 ***)plVar21;
              puStack_198 = &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
              plStack_1c0 = (long *)uVar11;
              plStack_1b8 = plVar10;
              plStack_1a8 = plVar13;
              pppuStack_1a0 = &ppuStack_170;
              if (plVar14 != (long *)0x0) {
                uVar12 = (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
                plVar21 = (long *)0x0;
                plVar13 = plVar14;
                plVar10 = plVar15;
                if (lVar24 != 0) {
                  uVar7 = (*(code *)**(undefined8 **)(*(long *)(plVar15[3] + 0xc0) + 0x70))
                                    (lVar24,uVar12);
                  if ((uVar7 & 1) == 0) {
                    (*(code *)**(undefined8 **)(*(long *)(plVar15[3] + 0xc0) + 0x78))
                              (lVar24,plVar14);
                  }
                  return (ulong)(uVar7 ^ 1);
                }
              }
              auVar29 = func_0x00f78af4();
              uStack_1f8 = (ulong)puVar28;
              puStack_1c8 = &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
              iVar4 = 0x3eb8000;
              lStack_1f0 = uVar11;
              plStack_1e8 = plVar10;
              pppuStack_1e0 = (undefined1 ***)plVar21;
              plStack_1d8 = plVar13;
              ppppuStack_1d0 = &pppuStack_1a0;
              if ((bRam0000000003eb832b & 1) == 0) {
                func_0x00f78a20(0x3d3b358);
                func_0x00f78a20(0x3d3b360);
                bRam0000000003eb832b = 1;
              }
              lVar24 = *(long *)(auVar29._0_8_ + 0x38);
              if (lVar24 != 0) {
                iVar4 = *(int *)(lVar24 + 0x18);
                if (iVar4 < 1) goto code_r0x025dfe48;
                uVar7 = 0;
                iVar6 = -0x80000000;
                uVar23 = 0;
                do {
                  if (*(uint *)(lVar24 + 0x18) <= uVar7) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar24 = *(long *)(*(long *)(lVar24 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
                  if (lVar24 == 0) break;
                  iVar1 = *(int *)(lVar24 + 0x10);
                  uVar5 = uVar7;
                  if (iVar1 <= iVar6) {
                    uVar5 = uVar23;
                  }
                  if (iVar4 - 1U == uVar7) goto code_r0x025dfe4c;
                  if (iVar1 <= iVar6) {
                    iVar1 = iVar6;
                  }
                  lVar24 = *(long *)(auVar29._0_8_ + 0x38);
                  uVar7 = uVar7 + 1;
                  iVar6 = iVar1;
                  uVar23 = uVar5;
                } while (lVar24 != 0);
              }
              func_0x00f78af4();
code_r0x025dfe48:
              uVar5 = 0;
code_r0x025dfe4c:
              *auVar29._8_8_ = uVar5;
              return (ulong)(0 < iVar4);
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x0148371c:
  uVar12 = func_0x00f78b24();
  uVar12 = func_0x00f78ac0(uVar12,0);
  plStack_1a8 = (long *)&Atlas_UI_Screens_LeagueWeeklyScheduleScreen__LeaderboardPressed;
  ppppuStack_1d0 = (undefined1 ****)uVar11;
  plStack_1c0 = plVar10;
  pppuStack_1b0 = &ppuStack_170;
  if ((bRam0000000003eb4927 & 1) == 0) {
    puStack_1c8 = (undefined *)auVar29._8_8_;
    plStack_1b8 = (long *)lVar8;
    func_0x00f78a20(0x3d41148);
    auVar29._8_8_ = puStack_1c8;
    auVar29._0_8_ = plStack_1b8;
    bRam0000000003eb4927 = 1;
  }
  puStack_1c8 = auVar29._8_8_;
  plStack_1b8 = auVar29._0_8_;
  lVar24 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar12,uRam0000000003d41148);
  if (lVar24 == 0) {
    lVar24 = func_0x00f78af4();
    return (ulong)*(byte *)(lVar24 + 0xd8);
  }
  uVar9 = *(ulong *)(lVar24 + 0x30);
  if (uVar9 == 0) {
    return 0;
  }
  uVar11 = 0;
  lStack_1f0 = unaff_x26;
  plStack_1e8 = (long *)unaff_x25;
  pppuStack_1e0 = unaff_x24;
  plStack_1d8 = (long *)unaff_x23;
  uStack_1f8 = uVar9;
  lVar24 = *(long *)(uVar9 + 0x68);
  if (lVar24 == 0) {
    puVar26 = &uStack_1f8;
    lVar8 = 1;
  }
  else {
    lVar8 = *(long *)(lVar24 + 0x18);
    if (lVar8 == 0) {
      return uVar9;
    }
    puVar26 = (ulong *)(lVar24 + 0x20);
  }
  lVar24 = 0;
  do {
    uVar17 = puVar26[lVar24];
    pcVar25 = *(code **)(uVar17 + 0x10);
    plVar10 = *(long **)(uVar17 + 0x20);
    lVar16 = *(long *)(uVar17 + 0x28);
    if (*(short *)(lVar16 + 0x48) == -1) {
      func_0x00f78ad8(lVar16,uVar11);
    }
    iVar4 = func_0x00f78a4c(lVar16);
    if (iVar4 == 0) {
      if ((((plVar10 == (long *)0x0) || (*(short *)(lVar16 + 0x48) == -1)) ||
          ((*(byte *)(*plVar10 + 0x115) & 1) != 0)) || (*(long *)(uVar9 + 0x18) == 0))
      goto code_r0x0155d550;
      iVar4 = func_0x00f78a44(lVar16);
      iVar6 = func_0x00f78ec0(lVar16);
      if (iVar4 == 0) {
        uVar3 = *(ushort *)(lVar16 + 0x48);
        if (iVar6 == 0) {
          lVar16 = *plVar10 + (ulong)uVar3 * 0x10;
          auVar29 = (**(code **)(lVar16 + 0x138))(plVar10,*(undefined8 *)(lVar16 + 0x140));
          goto code_r0x0155d55c;
        }
        lVar16 = func_0x00f78a48(lVar16);
        lVar18 = *plVar10;
        uVar17 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar17 != 0) {
          piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar16) {
              puVar22 = (undefined8 *)(lVar18 + (long)(int)(*piVar19 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x0155d620;
            }
            piVar19 = piVar19 + 4;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        puVar22 = (undefined8 *)func_0x00fac1f0(plVar10,lVar16,(ulong)uVar3);
code_r0x0155d620:
        pcVar25 = (code *)*puVar22;
        puVar22 = (undefined8 *)puVar22[1];
      }
      else {
        if (iVar6 == 0) {
          uVar11 = *(undefined8 *)(*plVar10 + (ulong)*(ushort *)(lVar16 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar18 = *plVar10;
          uVar17 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)(lVar16 + 0x18)) {
                lVar18 = lVar18 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar16 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0155d5f8;
              }
              piVar19 = piVar19 + 4;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          lVar18 = func_0x00fac1f0(plVar10);
code_r0x0155d5f8:
          uVar11 = *(undefined8 *)(lVar18 + 8);
        }
        puVar22 = (undefined8 *)func_0x00f78acc(uVar11,lVar16);
        pcVar25 = (code *)*puVar22;
      }
      auVar29 = (*pcVar25)(plVar10,puVar22);
    }
    else if (*(char *)(lVar16 + 0x4a) == '\0') {
      auVar29 = (*pcVar25)(lVar16);
    }
    else {
code_r0x0155d550:
      auVar29 = (*pcVar25)(plVar10,lVar16);
    }
code_r0x0155d55c:
    uVar11 = auVar29._8_8_;
    lVar24 = lVar24 + 1;
    if (lVar24 == lVar8) {
      return auVar29._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1483564 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.ContinuePressed
// ============================================================

/* WARNING: Possible PIC construction at 0x014835d0: Changing call to branch */

ulong Atlas_UI_Screens_LeagueWeeklyScheduleScreen__ContinuePressed(long param_1)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  code *pcVar21;
  long lVar22;
  ulong *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  ulong uStack_b8;
  
  if ((bRam0000000003eb4926 & 1) == 0) {
    func_0x00f78a20(0x3d41148);
    bRam0000000003eb4926 = 1;
  }
  cVar2 = *(char *)(param_1 + 0xd8);
  if (cVar2 == '\0') {
    uVar6 = *(uint *)(param_1 + 0xdc);
  }
  else {
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41148);
    if (lVar7 != 0) {
      if (*(long *)(lVar7 + 0x28) != 0) {
        /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen.NextSelected$$Invoke*/ func_0x0155d6c0(*(long *)(lVar7 + 0x28),0);
      }
      return (ulong)(cVar2 != '\0');
    }
    auVar25 = func_0x00f78af4();
    uVar6 = auVar25._8_4_;
    param_1 = auVar25._0_8_;
  }
  if ((bRam0000000003eb4929 & 1) == 0) {
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d29328);
    func_0x00f78a20(0x3d6f148);
    bRam0000000003eb4929 = 1;
  }
  plVar8 = (long *)func_0x00f78aec(/*Atlas.UI.ToolTipManager.ToolTipData_TypeInfo*/ uRam0000000003d29328);
  /*Atlas.UI.ToolTipManager.ToolTipData$$.ctor*/ func_0x0156b580(plVar8,0);
  lVar7 = /*STR('LEAGUE_LOCKED_DAY_TOOLTIP')*/ lRam0000000003d6f148;
  if (plVar8 != (long *)0x0) {
    plVar8[5] = /*STR('LEAGUE_LOCKED_DAY_TOOLTIP')*/ lRam0000000003d6f148;
    if (*(long *)(param_1 + 0x80) != 0) {
      uVar9 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(param_1 + 0x80),lVar7,0);
      if (*(long *)(param_1 + 200) != 0) {
        lVar22 = *(long *)(param_1 + 0x80);
        lVar7 = /*Atlas.League.LeagueManager$$get_WeeklySchedule*/ func_0x015f17b4(*(long *)(param_1 + 200),0);
        if (lVar7 != 0) {
          if (*(uint *)(lVar7 + 0x18) <= uVar6) goto code_r0x0148371c;
          lVar7 = *(long *)(lVar7 + (long)(int)uVar6 * 8 + 0x20);
          if ((lVar7 != 0) && (lVar22 != 0)) {
            uVar10 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar22,*(undefined8 *)(lVar7 + 0x30),0);
            lVar7 = /*System.String$$Format*/ func_0x029bc688(uVar9,uVar10,0);
            plVar8[6] = lVar7;
            *(undefined4 *)(plVar8 + 7) = 4;
            *(undefined1 *)((long)plVar8 + 0x3c) = 1;
            puVar13 = puRam0000000003d3e188;
            plVar11 = *(long **)(param_1 + 0xd0);
            if (plVar11 != (long *)0x0) {
              puVar15 = puRam0000000003d3e188;
              if ((bRam0000000003eb832a & 1) == 0) {
                func_0x00f78a20(0x3d3b330);
                func_0x00f78a20(0x3d3b348);
                func_0x00f78a20(0x3d717e8);
                bRam0000000003eb832a = 1;
              }
              if (plVar8 != (long *)0x0) {
                uVar9 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
                puVar15 = (undefined8 *)0x0;
                uVar9 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar9);
                if (plVar11 != (long *)0x0) {
                  puVar15 = *(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 8);
                  (*(code *)*puVar15)(plVar11,uVar9);
                  if (plVar11[7] != 0) {
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar11[7],plVar8,uRam0000000003d3b330);
                    puVar15 = (undefined8 *)plVar11[8];
                    if ((puVar15 == (undefined8 *)0x0) || ((int)plVar8[2] <= *(int *)(puVar15 + 2)))
                    {
code_r0x025dfcb4:
                      uVar14 = (*(code *)**(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 0x30))
                                         (plVar11);
                      if ((uVar14 & 1) != 0) {
                        return uVar14;
                      }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      uVar14 = (**(code **)(*plVar11 + 0x1a8))
                                         (plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
                      return uVar14;
                    }
                    if (plVar11[7] != 0) {
                      /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar11[7],0,puVar15,uRam0000000003d3b348);
                      (*(code *)**(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 0x60))(plVar11);
                      goto code_r0x025dfcb4;
                    }
                  }
                }
              }
              auVar24 = func_0x00f78af4();
              plVar8 = auVar24._8_8_;
              lVar7 = auVar24._0_8_;
              if ((plVar8 != (long *)0x0) &&
                 (uVar9 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180)),
                 lVar7 != 0)) {
                uVar6 = (*(code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x70))
                                  (lVar7,uVar9);
                if ((uVar6 & 1) == 0) {
                  (*(code *)**(undefined8 **)(*(long *)(puVar15[3] + 0xc0) + 0x78))(lVar7,plVar8);
                }
                return (ulong)(uVar6 ^ 1);
              }
              auVar24 = func_0x00f78af4();
              iVar4 = 0x3eb8000;
              if ((bRam0000000003eb832b & 1) == 0) {
                func_0x00f78a20(0x3d3b358);
                func_0x00f78a20(0x3d3b360);
                bRam0000000003eb832b = 1;
              }
              lVar7 = *(long *)(auVar24._0_8_ + 0x38);
              if (lVar7 != 0) {
                iVar4 = *(int *)(lVar7 + 0x18);
                if (iVar4 < 1) goto code_r0x025dfe48;
                uVar6 = 0;
                iVar5 = -0x80000000;
                uVar19 = 0;
                do {
                  if (*(uint *)(lVar7 + 0x18) <= uVar6) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar6 * 8 + 0x20);
                  if (lVar7 == 0) break;
                  iVar1 = *(int *)(lVar7 + 0x10);
                  uVar20 = uVar6;
                  if (iVar1 <= iVar5) {
                    uVar20 = uVar19;
                  }
                  if (iVar4 - 1U == uVar6) goto code_r0x025dfe4c;
                  if (iVar1 <= iVar5) {
                    iVar1 = iVar5;
                  }
                  lVar7 = *(long *)(auVar24._0_8_ + 0x38);
                  uVar6 = uVar6 + 1;
                  iVar5 = iVar1;
                  uVar19 = uVar20;
                } while (lVar7 != 0);
              }
              func_0x00f78af4();
code_r0x025dfe48:
              uVar20 = 0;
code_r0x025dfe4c:
              *auVar24._8_8_ = uVar20;
              return (ulong)(0 < iVar4);
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x0148371c:
  uVar9 = func_0x00f78b24();
  uVar9 = func_0x00f78ac0(uVar9,0);
  if ((bRam0000000003eb4927 & 1) == 0) {
    func_0x00f78a20(0x3d41148);
    bRam0000000003eb4927 = 1;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar9,uRam0000000003d41148);
  if (lVar7 == 0) {
    lVar7 = func_0x00f78af4();
    return (ulong)*(byte *)(lVar7 + 0xd8);
  }
  uVar14 = *(ulong *)(lVar7 + 0x30);
  if (uVar14 == 0) {
    return 0;
  }
  uVar9 = 0;
  uStack_b8 = uVar14;
  lVar7 = *(long *)(uVar14 + 0x68);
  if (lVar7 == 0) {
    puVar23 = &uStack_b8;
    lVar22 = 1;
  }
  else {
    lVar22 = *(long *)(lVar7 + 0x18);
    if (lVar22 == 0) {
      return uVar14;
    }
    puVar23 = (ulong *)(lVar7 + 0x20);
  }
  lVar7 = 0;
  do {
    uVar16 = puVar23[lVar7];
    pcVar21 = *(code **)(uVar16 + 0x10);
    plVar8 = *(long **)(uVar16 + 0x20);
    lVar12 = *(long *)(uVar16 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar9);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    if (iVar4 == 0) {
      if ((((plVar8 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar8 + 0x115) & 1) != 0)) || (*(long *)(uVar14 + 0x18) == 0))
      goto code_r0x0155d550;
      iVar4 = func_0x00f78a44(lVar12);
      iVar5 = func_0x00f78ec0(lVar12);
      if (iVar4 == 0) {
        uVar3 = *(ushort *)(lVar12 + 0x48);
        if (iVar5 == 0) {
          lVar12 = *plVar8 + (ulong)uVar3 * 0x10;
          auVar24 = (**(code **)(lVar12 + 0x138))(plVar8,*(undefined8 *)(lVar12 + 0x140));
          goto code_r0x0155d55c;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar17 = *plVar8;
        uVar16 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar12) {
              puVar13 = (undefined8 *)(lVar17 + (long)(int)(*piVar18 + (uint)uVar3) * 0x10 + 0x138);
              goto code_r0x0155d620;
            }
            piVar18 = piVar18 + 4;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)func_0x00fac1f0(plVar8,lVar12,(ulong)uVar3);
code_r0x0155d620:
        pcVar21 = (code *)*puVar13;
        puVar13 = (undefined8 *)puVar13[1];
      }
      else {
        if (iVar5 == 0) {
          uVar9 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar17 = *plVar8;
          uVar16 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar16 != 0) {
            piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar17 = lVar17 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0155d5f8;
              }
              piVar18 = piVar18 + 4;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
          }
          lVar17 = func_0x00fac1f0(plVar8);
code_r0x0155d5f8:
          uVar9 = *(undefined8 *)(lVar17 + 8);
        }
        puVar13 = (undefined8 *)func_0x00f78acc(uVar9,lVar12);
        pcVar21 = (code *)*puVar13;
      }
      auVar24 = (*pcVar21)(plVar8,puVar13);
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      auVar24 = (*pcVar21)(lVar12);
    }
    else {
code_r0x0155d550:
      auVar24 = (*pcVar21)(plVar8,lVar12);
    }
code_r0x0155d55c:
    uVar9 = auVar24._8_8_;
    lVar7 = lVar7 + 1;
    if (lVar7 == lVar22) {
      return auVar24._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x14835ec | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.LockedButtonPressed
// ============================================================

ulong Atlas_UI_Screens_LeagueWeeklyScheduleScreen__LockedButtonPressed(long param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  code *pcVar20;
  long lVar21;
  ulong *puVar22;
  undefined1 auVar23 [16];
  ulong uStack_98;
  
  if ((bRam0000000003eb4929 & 1) == 0) {
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d29328);
    func_0x00f78a20(0x3d6f148);
    bRam0000000003eb4929 = 1;
  }
  plVar6 = (long *)func_0x00f78aec(/*Atlas.UI.ToolTipManager.ToolTipData_TypeInfo*/ uRam0000000003d29328);
  /*Atlas.UI.ToolTipManager.ToolTipData$$.ctor*/ func_0x0156b580(plVar6,0);
  lVar8 = /*STR('LEAGUE_LOCKED_DAY_TOOLTIP')*/ lRam0000000003d6f148;
  if (plVar6 != (long *)0x0) {
    plVar6[5] = /*STR('LEAGUE_LOCKED_DAY_TOOLTIP')*/ lRam0000000003d6f148;
    if (*(long *)(param_1 + 0x80) != 0) {
      uVar7 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(param_1 + 0x80),lVar8,0);
      if (*(long *)(param_1 + 200) != 0) {
        lVar21 = *(long *)(param_1 + 0x80);
        lVar8 = /*Atlas.League.LeagueManager$$get_WeeklySchedule*/ func_0x015f17b4(*(long *)(param_1 + 200),0);
        if (lVar8 != 0) {
          if (*(uint *)(lVar8 + 0x18) <= param_2) goto LAB_0148371c;
          lVar8 = *(long *)(lVar8 + (long)(int)param_2 * 8 + 0x20);
          if ((lVar8 != 0) && (lVar21 != 0)) {
            uVar9 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar21,*(undefined8 *)(lVar8 + 0x30),0);
            lVar8 = /*System.String$$Format*/ func_0x029bc688(uVar7,uVar9,0);
            plVar6[6] = lVar8;
            *(undefined4 *)(plVar6 + 7) = 4;
            *(undefined1 *)((long)plVar6 + 0x3c) = 1;
            puVar12 = puRam0000000003d3e188;
            plVar10 = *(long **)(param_1 + 0xd0);
            if (plVar10 != (long *)0x0) {
              puVar14 = puRam0000000003d3e188;
              if ((bRam0000000003eb832a & 1) == 0) {
                func_0x00f78a20(0x3d3b330);
                func_0x00f78a20(0x3d3b348);
                func_0x00f78a20(0x3d717e8);
                bRam0000000003eb832a = 1;
              }
              if (plVar6 != (long *)0x0) {
                uVar7 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
                puVar14 = (undefined8 *)0x0;
                uVar7 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar7);
                if (plVar10 != (long *)0x0) {
                  puVar14 = *(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 8);
                  (*(code *)*puVar14)(plVar10,uVar7);
                  if (plVar10[7] != 0) {
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar10[7],plVar6,uRam0000000003d3b330);
                    puVar14 = (undefined8 *)plVar10[8];
                    if ((puVar14 == (undefined8 *)0x0) || ((int)plVar6[2] <= *(int *)(puVar14 + 2)))
                    {
code_r0x025dfcb4:
                      uVar13 = (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x30))
                                         (plVar10);
                      if ((uVar13 & 1) != 0) {
                        return uVar13;
                      }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      uVar13 = (**(code **)(*plVar10 + 0x1a8))
                                         (plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                      return uVar13;
                    }
                    if (plVar10[7] != 0) {
                      /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar10[7],0,puVar14,uRam0000000003d3b348);
                      (*(code *)**(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 0x60))(plVar10);
                      goto code_r0x025dfcb4;
                    }
                  }
                }
              }
              auVar23 = func_0x00f78af4();
              plVar6 = auVar23._8_8_;
              lVar8 = auVar23._0_8_;
              if ((plVar6 != (long *)0x0) &&
                 (uVar7 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180)),
                 lVar8 != 0)) {
                uVar5 = (*(code *)**(undefined8 **)(*(long *)(puVar14[3] + 0xc0) + 0x70))
                                  (lVar8,uVar7);
                if ((uVar5 & 1) == 0) {
                  (*(code *)**(undefined8 **)(*(long *)(puVar14[3] + 0xc0) + 0x78))(lVar8,plVar6);
                }
                return (ulong)(uVar5 ^ 1);
              }
              auVar23 = func_0x00f78af4();
              iVar3 = 0x3eb8000;
              if ((bRam0000000003eb832b & 1) == 0) {
                func_0x00f78a20(0x3d3b358);
                func_0x00f78a20(0x3d3b360);
                bRam0000000003eb832b = 1;
              }
              lVar8 = *(long *)(auVar23._0_8_ + 0x38);
              if (lVar8 != 0) {
                iVar3 = *(int *)(lVar8 + 0x18);
                if (iVar3 < 1) goto code_r0x025dfe48;
                uVar5 = 0;
                iVar4 = -0x80000000;
                uVar18 = 0;
                do {
                  if (*(uint *)(lVar8 + 0x18) <= uVar5) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar5 * 8 + 0x20);
                  if (lVar8 == 0) break;
                  iVar1 = *(int *)(lVar8 + 0x10);
                  uVar19 = uVar5;
                  if (iVar1 <= iVar4) {
                    uVar19 = uVar18;
                  }
                  if (iVar3 - 1U == uVar5) goto code_r0x025dfe4c;
                  if (iVar1 <= iVar4) {
                    iVar1 = iVar4;
                  }
                  lVar8 = *(long *)(auVar23._0_8_ + 0x38);
                  uVar5 = uVar5 + 1;
                  iVar4 = iVar1;
                  uVar18 = uVar19;
                } while (lVar8 != 0);
              }
              func_0x00f78af4();
code_r0x025dfe48:
              uVar19 = 0;
code_r0x025dfe4c:
              *auVar23._8_8_ = uVar19;
              return (ulong)(0 < iVar3);
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_0148371c:
  uVar7 = func_0x00f78b24();
  uVar7 = func_0x00f78ac0(uVar7,0);
  if ((bRam0000000003eb4927 & 1) == 0) {
    func_0x00f78a20(0x3d41148);
    bRam0000000003eb4927 = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar7,uRam0000000003d41148);
  if (lVar8 == 0) {
    lVar8 = func_0x00f78af4();
    return (ulong)*(byte *)(lVar8 + 0xd8);
  }
  uVar13 = *(ulong *)(lVar8 + 0x30);
  if (uVar13 == 0) {
    return 0;
  }
  uVar7 = 0;
  uStack_98 = uVar13;
  lVar8 = *(long *)(uVar13 + 0x68);
  if (lVar8 == 0) {
    puVar22 = &uStack_98;
    lVar21 = 1;
  }
  else {
    lVar21 = *(long *)(lVar8 + 0x18);
    if (lVar21 == 0) {
      return uVar13;
    }
    puVar22 = (ulong *)(lVar8 + 0x20);
  }
  lVar8 = 0;
  do {
    uVar15 = puVar22[lVar8];
    pcVar20 = *(code **)(uVar15 + 0x10);
    plVar6 = *(long **)(uVar15 + 0x20);
    lVar11 = *(long *)(uVar15 + 0x28);
    if (*(short *)(lVar11 + 0x48) == -1) {
      func_0x00f78ad8(lVar11,uVar7);
    }
    iVar3 = func_0x00f78a4c(lVar11);
    if (iVar3 == 0) {
      if ((((plVar6 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
          ((*(byte *)(*plVar6 + 0x115) & 1) != 0)) || (*(long *)(uVar13 + 0x18) == 0))
      goto code_r0x0155d550;
      iVar3 = func_0x00f78a44(lVar11);
      iVar4 = func_0x00f78ec0(lVar11);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar11 + 0x48);
        if (iVar4 == 0) {
          lVar11 = *plVar6 + (ulong)uVar2 * 0x10;
          auVar23 = (**(code **)(lVar11 + 0x138))(plVar6,*(undefined8 *)(lVar11 + 0x140));
          goto code_r0x0155d55c;
        }
        lVar11 = func_0x00f78a48(lVar11);
        lVar16 = *plVar6;
        uVar15 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar11) {
              puVar12 = (undefined8 *)(lVar16 + (long)(int)(*piVar17 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x0155d620;
            }
            piVar17 = piVar17 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar6,lVar11,(ulong)uVar2);
code_r0x0155d620:
        pcVar20 = (code *)*puVar12;
        puVar12 = (undefined8 *)puVar12[1];
      }
      else {
        if (iVar4 == 0) {
          uVar7 = *(undefined8 *)(*plVar6 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar16 = *plVar6;
          uVar15 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)(lVar11 + 0x18)) {
                lVar16 = lVar16 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0155d5f8;
              }
              piVar17 = piVar17 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          lVar16 = func_0x00fac1f0(plVar6);
code_r0x0155d5f8:
          uVar7 = *(undefined8 *)(lVar16 + 8);
        }
        puVar12 = (undefined8 *)func_0x00f78acc(uVar7,lVar11);
        pcVar20 = (code *)*puVar12;
      }
      auVar23 = (*pcVar20)(plVar6,puVar12);
    }
    else if (*(char *)(lVar11 + 0x4a) == '\0') {
      auVar23 = (*pcVar20)(lVar11);
    }
    else {
code_r0x0155d550:
      auVar23 = (*pcVar20)(plVar6,lVar11);
    }
code_r0x0155d55c:
    uVar7 = auVar23._8_8_;
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar21) {
      return auVar23._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1483728 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.LeaderboardPressed
// ============================================================

ulong Atlas_UI_Screens_LeagueWeeklyScheduleScreen__LeaderboardPressed(undefined8 param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  ulong *puVar15;
  undefined1 auVar16 [16];
  ulong uStack_58;
  
  if ((bRam0000000003eb4927 & 1) == 0) {
    func_0x00f78a20(0x3d41148);
    bRam0000000003eb4927 = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41148);
  if (lVar5 == 0) {
    lVar5 = func_0x00f78af4();
    return (ulong)*(byte *)(lVar5 + 0xd8);
  }
  uVar6 = *(ulong *)(lVar5 + 0x30);
  if (uVar6 == 0) {
    return 0;
  }
  uVar9 = 0;
  uStack_58 = uVar6;
  lVar5 = *(long *)(uVar6 + 0x68);
  if (lVar5 == 0) {
    puVar15 = &uStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar5 + 0x18);
    if (lVar14 == 0) {
      return uVar6;
    }
    puVar15 = (ulong *)(lVar5 + 0x20);
  }
  lVar5 = 0;
  do {
    uVar10 = puVar15[lVar5];
    pcVar13 = *(code **)(uVar10 + 0x10);
    plVar1 = *(long **)(uVar10 + 0x20);
    lVar7 = *(long *)(uVar10 + 0x28);
    if (*(short *)(lVar7 + 0x48) == -1) {
      func_0x00f78ad8(lVar7,uVar9);
    }
    iVar3 = func_0x00f78a4c(lVar7);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar7 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(uVar6 + 0x18) == 0))
      goto code_r0x0155d550;
      iVar3 = func_0x00f78a44(lVar7);
      iVar4 = func_0x00f78ec0(lVar7);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar7 + 0x48);
        if (iVar4 == 0) {
          lVar7 = *plVar1 + (ulong)uVar2 * 0x10;
          auVar16 = (**(code **)(lVar7 + 0x138))(plVar1,*(undefined8 *)(lVar7 + 0x140));
          goto code_r0x0155d55c;
        }
        lVar7 = func_0x00f78a48(lVar7);
        lVar11 = *plVar1;
        uVar10 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar7) {
              puVar8 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x0155d620;
            }
            piVar12 = piVar12 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar7,(ulong)uVar2);
code_r0x0155d620:
        pcVar13 = (code *)*puVar8;
        puVar8 = (undefined8 *)puVar8[1];
      }
      else {
        if (iVar4 == 0) {
          uVar9 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar7 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar11 = *plVar1;
          uVar10 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar7 + 0x18)) {
                lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar7 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0155d5f8;
              }
              piVar12 = piVar12 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          lVar11 = func_0x00fac1f0(plVar1);
code_r0x0155d5f8:
          uVar9 = *(undefined8 *)(lVar11 + 8);
        }
        puVar8 = (undefined8 *)func_0x00f78acc(uVar9,lVar7);
        pcVar13 = (code *)*puVar8;
      }
      auVar16 = (*pcVar13)(plVar1,puVar8);
    }
    else if (*(char *)(lVar7 + 0x4a) == '\0') {
      auVar16 = (*pcVar13)(lVar7);
    }
    else {
code_r0x0155d550:
      auVar16 = (*pcVar13)(plVar1,lVar7);
    }
code_r0x0155d55c:
    uVar9 = auVar16._8_8_;
    lVar5 = lVar5 + 1;
    if (lVar5 == lVar14) {
      return auVar16._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x14837a4 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.CanProgressToNextScreen
// ============================================================

undefined1 Atlas_UI_Screens_LeagueWeeklyScheduleScreen__CanProgressToNextScreen(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd8);
}



// ============================================================
// RVA: 0x14837ac | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.LockedButtonSelected
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_LeagueWeeklyScheduleScreen__LockedButtonSelected
               (long param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 unaff_x19;
  long lVar13;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar14;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar15;
  undefined *unaff_x30;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = param_2;
  puVar1 = (undefined1 *)register0x00000008;
  do {
    lVar6 = param_1;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    unaff_x22 = 0x3eb4000;
    unaff_x21 = 0x3d41150;
    if ((bRam0000000003eb4928 & 1) == 0) {
      func_0x00f78a20(0x3d41150);
      bRam0000000003eb4928 = 1;
    }
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d41150);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar5 + 0xb8),6,0,1,0);
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d41150);
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0xb8) != 0)) {
        uVar9 = 1;
        /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar5 + 0xb8),8,1,1,0);
        lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d41150);
        if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0xb8), lVar5 != 0)) break;
      }
    }
    unaff_x30 = &Atlas_UI_Screens_LeagueWeeklyScheduleScreen__LeaderboardOrTooltipSelected;
    param_1 = func_0x00f78af4();
    *(undefined1 *)(param_1 + 0xd8) = 0;
    puVar1 = puVar1 + -0x30;
    unaff_x19 = 0;
    unaff_x20 = lVar6;
  } while( true );
  uVar8 = 0;
  uVar17 = *(undefined8 *)(puVar1 + -0x20);
  uVar18 = *(undefined8 *)(puVar1 + -0x18);
  lVar6 = *(long *)(puVar1 + -0x30);
  uVar19 = *(undefined8 *)(puVar1 + -0x28);
  *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  lVar5 = *(long *)(lVar5 + 0x28);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x80) = 0;
    return;
  }
  lVar5 = func_0x00f78af4();
  puVar2 = puVar1 + -0x30;
  *(undefined8 *)(puVar1 + -0x30) = uVar17;
  *(undefined8 *)(puVar1 + -0x28) = uVar18;
  *(undefined1 **)(puVar1 + -0x20) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -0x18) = &Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
  puVar15 = puVar1 + -0x20;
  if (*(ulong *)(lVar5 + 0x28) == 0) {
    puVar16 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
    auVar21 = func_0x00f78af4();
    auVar22._8_8_ = uVar9;
    auVar22._0_8_ = uVar17;
  }
  else {
    auVar21._8_8_ = 0;
    auVar21._0_8_ = *(ulong *)(lVar5 + 0x28);
    uVar8 = 0;
    auVar22._8_8_ = 1;
    auVar22._0_8_ = uVar17;
    puVar16 = &UNK_0150bbf4;
    puVar2 = puVar1 + -0x30;
  }
  do {
    lVar11 = auVar21._0_8_;
    *(long *)(puVar2 + -0x20) = auVar22._0_8_;
    *(long *)(puVar2 + -0x18) = lVar5;
    *(undefined1 **)(puVar2 + -0x10) = puVar15;
    *(undefined **)(puVar2 + -8) = puVar16;
    uVar7 = auVar21._8_4_;
    if (uVar7 == 0xffffffff) {
      return;
    }
    lVar10 = *(long *)(lVar11 + 0x70);
    if (lVar10 == 0) {
      func_0x00f78af4();
      lVar13 = lVar5;
    }
    else {
      lVar13 = auVar21._8_8_;
      if (uVar7 < *(uint *)(lVar10 + 0x18)) {
        uVar12 = 2;
        if ((int)uVar8 == 0) {
          uVar12 = 0;
        }
        *(undefined4 *)(lVar10 + (long)(int)uVar7 * 0x60 + 0x5c) = uVar12;
        if ((auVar22._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(lVar11,auVar21._8_8_);
        }
        *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
        *(long *)(puVar2 + -0x48) = unaff_x25;
        *(long *)(puVar2 + -0x40) = unaff_x24;
        *(long *)(puVar2 + -0x38) = unaff_x23;
        *(long *)(puVar2 + -0x30) = lVar6;
        *(undefined8 *)(puVar2 + -0x28) = uVar19;
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        lVar5 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar10 = *(long *)(lVar11 + 0x70);
        if (lVar10 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar10 + 0x18) <= uVar7) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar7;
        lVar10 = lVar10 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar10 + 0x20);
        lVar6 = *(long *)(lVar10 + 0x28);
        uVar9 = *(undefined8 *)(lVar10 + 0x30);
        uVar18 = *(undefined8 *)(lVar10 + 0x48);
        uVar17 = *(undefined8 *)(lVar10 + 0x40);
        *(undefined8 *)(puVar2 + -0xe8) = *(undefined8 *)(lVar10 + 0x38);
        *(undefined8 *)(puVar2 + -0xf0) = uVar9;
        *(undefined8 *)(puVar2 + -0xd8) = uVar18;
        *(undefined8 *)(puVar2 + -0xe0) = uVar17;
        lVar5 = *(long *)(lVar10 + 0x50);
        iVar14 = *(int *)(lVar10 + 0x58);
        iVar4 = *(int *)(lVar10 + 0x5c);
        unaff_x23 = *(long *)(lVar10 + 0x60);
        unaff_x24 = *(long *)(lVar10 + 0x68);
        uVar9 = *(undefined8 *)(lVar10 + 0x70);
        *(undefined8 *)(puVar2 + -0xf8) = *(undefined8 *)(lVar10 + 0x78);
        *(undefined8 *)(puVar2 + -0x100) = uVar9;
        if (iVar4 == iVar14) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
          if (iVar4 == 0) {
            return;
          }
          if (lVar5 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar5,iVar14 == 2,0);
            return;
          }
        }
        else if (iVar14 == 2) {
          if (iVar4 == 0) {
            if (unaff_x24 == 0) goto code_r0x0150c7d4;
            uVar17 = *(undefined8 *)(lVar10 + 0x38);
            uVar9 = *(undefined8 *)(lVar10 + 0x30);
            uVar19 = *(undefined8 *)(lVar10 + 0x48);
            uVar18 = *(undefined8 *)(lVar10 + 0x40);
            *(undefined8 *)(puVar2 + -0x118) = uVar17;
            *(undefined8 *)(puVar2 + -0x120) = uVar9;
            *(undefined8 *)(puVar2 + -0x108) = uVar19;
            *(undefined8 *)(puVar2 + -0x110) = uVar18;
            uVar20 = *(undefined8 *)(lVar10 + 0x78);
            uVar8 = *(undefined8 *)(lVar10 + 0x70);
            *(undefined8 *)(puVar2 + -0x128) = uVar20;
            *(undefined8 *)(puVar2 + -0x130) = uVar8;
            *(undefined8 *)(puVar2 + -200) = unaff_x26;
            *(long *)(puVar2 + -0xc0) = lVar6;
            *(undefined8 *)(puVar2 + -0xb0) = uVar17;
            *(undefined8 *)(puVar2 + -0xb8) = uVar9;
            *(undefined8 *)(puVar2 + -0xa0) = uVar19;
            *(undefined8 *)(puVar2 + -0xa8) = uVar18;
            *(long *)(puVar2 + -0x98) = lVar5;
            *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8620;
            *(long *)(puVar2 + -0x88) = unaff_x23;
            *(long *)(puVar2 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x70) = uVar20;
            *(undefined8 *)(puVar2 + -0x78) = uVar8;
            lVar10 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar10,puVar2 + -200,uRam0000000003d2a408);
            iVar14 = 1;
          }
          else {
            iVar14 = 2;
          }
code_r0x0150c72c:
          lVar11 = *(long *)(lVar11 + 0x70);
          if (lVar11 != 0) {
            if (*(uint *)(lVar11 + 0x18) <= uVar7) goto code_r0x0150c7d8;
            lVar11 = lVar11 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar11 + 0x20) = unaff_x26;
            *(long *)(lVar11 + 0x28) = lVar6;
            uVar9 = *(undefined8 *)(puVar2 + -0xf0);
            uVar18 = *(undefined8 *)(puVar2 + -0xd8);
            uVar17 = *(undefined8 *)(puVar2 + -0xe0);
            *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(puVar2 + -0xe8);
            *(undefined8 *)(lVar11 + 0x30) = uVar9;
            *(undefined8 *)(lVar11 + 0x48) = uVar18;
            *(undefined8 *)(lVar11 + 0x40) = uVar17;
            *(long *)(lVar11 + 0x50) = lVar5;
            *(int *)(lVar11 + 0x58) = iVar14;
            *(int *)(lVar11 + 0x5c) = iVar4;
            *(long *)(lVar11 + 0x60) = unaff_x23;
            *(long *)(lVar11 + 0x68) = unaff_x24;
            uVar9 = *(undefined8 *)(puVar2 + -0x100);
            *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(puVar2 + -0xf8);
            *(undefined8 *)(lVar11 + 0x70) = uVar9;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar14 != 0) goto code_r0x0150c72c;
          if (iVar4 != 2) {
            iVar14 = 0;
            goto code_r0x0150c72c;
          }
          if (((lVar6 != 0) && (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar6,0), lVar10 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar2 + -200) = unaff_x26;
            *(long *)(puVar2 + -0xc0) = lVar6;
            *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0xe8);
            *(undefined8 *)(puVar2 + -0xb8) = *(undefined8 *)(puVar2 + -0xf0);
            *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xd8);
            *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0xe0);
            *(long *)(puVar2 + -0x98) = lVar5;
            *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8628;
            *(long *)(puVar2 + -0x88) = unaff_x23;
            *(long *)(puVar2 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0xf8);
            *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x100);
            lVar10 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar9 = func_0x00f78b24();
        auVar22 = func_0x00f78ac0(uVar9,0);
        lVar11 = auVar22._8_8_;
        *(undefined8 *)(puVar2 + -0x180) = unaff_x26;
        *(long *)(puVar2 + -0x178) = unaff_x25;
        *(long *)(puVar2 + -0x170) = unaff_x24;
        *(long *)(puVar2 + -0x168) = unaff_x23;
        *(long *)(puVar2 + -0x160) = lVar6;
        *(undefined1 (*) [16])(puVar2 + -0x158) = auVar21;
        *(long *)(puVar2 + -0x148) = lVar5;
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
        uVar9 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x1c),
                                *(undefined4 *)(lVar11 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar11 + 0x10),0,0);
        uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar9,10,uRam0000000003d5e7a8);
        uVar9 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar9,*(undefined8 *)(lVar11 + 0x58),uRam0000000003d5e6e0);
        uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar9,1,uRam0000000003d5e888);
        lVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar9,auVar22._0_8_,uRam0000000003d5e850);
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar11 + 0x10);
        }
        return;
      }
    }
    uVar9 = func_0x00f78b24();
    auVar21 = func_0x00f78ac0(uVar9,0);
    puVar3 = puVar2 + -0x30;
    puVar1 = puVar2 + -0x30;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar5 = *(long *)(auVar21._0_8_ + 0x28);
    auVar22._8_8_ = auVar21._8_8_;
    auVar22._0_8_ = lVar5;
    if (lVar5 == 0) {
      puVar16 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar22 = func_0x00f78af4();
    }
    else {
      puVar3 = puVar2 + -0x20;
      puVar1 = *(undefined1 **)(puVar2 + -0x30);
      puVar16 = *(undefined **)(puVar2 + -0x28);
    }
    lVar5 = auVar22._8_8_;
    puVar2 = puVar3 + -0x20;
    *(long *)(puVar3 + -0x20) = lVar11;
    *(long *)(puVar3 + -0x18) = lVar13;
    *(undefined1 **)(puVar3 + -0x10) = puVar1;
    *(undefined **)(puVar3 + -8) = puVar16;
    puVar15 = puVar3 + -0x10;
    auVar21._8_8_ = 4;
    auVar21._0_8_ = auVar22._0_8_;
    uVar8 = 0;
    puVar16 = &UNK_0150bd10;
  } while( true );
}



// ============================================================
// RVA: 0x14837bc | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.ToggleProgressionToNextScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_LeagueWeeklyScheduleScreen__ToggleProgressionToNextScreen
               (long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 unaff_x19;
  long lVar13;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar14;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar15;
  undefined *unaff_x30;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  do {
    uVar5 = param_2;
    lVar6 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x22 = 0x3eb4000;
    unaff_x21 = 0x3d41150;
    if ((bRam0000000003eb4928 & 1) == 0) {
      func_0x00f78a20(0x3d41150);
      bRam0000000003eb4928 = 1;
    }
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d41150);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar4 + 0xb8),6,uVar5,1,0);
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d41150);
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0xb8) != 0)) {
        uVar9 = 1;
        /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar4 + 0xb8),8,(uint)uVar5 ^ 1,1,0);
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d41150);
        if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0xb8), lVar4 != 0)) break;
      }
    }
    unaff_x30 = &Atlas_UI_Screens_LeagueWeeklyScheduleScreen__LeaderboardOrTooltipSelected;
    param_1 = func_0x00f78af4();
    *(undefined1 *)(param_1 + 0xd8) = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_2 = 0;
    unaff_x19 = uVar5;
    unaff_x20 = lVar6;
  } while( true );
  uVar8 = 0;
  uVar17 = *(undefined8 *)((long)register0x00000008 + -0x20);
  uVar18 = *(undefined8 *)((long)register0x00000008 + -0x18);
  lVar6 = *(long *)((long)register0x00000008 + -0x30);
  uVar19 = *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar4 = *(long *)(lVar4 + 0x28);
  if (lVar4 != 0) {
    *(char *)(lVar4 + 0x80) = (char)uVar5;
    return;
  }
  lVar4 = func_0x00f78af4();
  puVar1 = (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar18;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x18) =
       &Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
  puVar15 = (undefined1 *)((long)register0x00000008 + -0x20);
  if (*(ulong *)(lVar4 + 0x28) == 0) {
    puVar16 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
    auVar20 = func_0x00f78af4();
    auVar21._8_8_ = uVar9;
    auVar21._0_8_ = uVar17;
  }
  else {
    auVar20._8_8_ = 0;
    auVar20._0_8_ = *(ulong *)(lVar4 + 0x28);
    uVar8 = 0;
    auVar21._8_8_ = 1;
    auVar21._0_8_ = uVar17;
    puVar16 = &UNK_0150bbf4;
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x30);
  }
  do {
    lVar11 = auVar20._0_8_;
    *(long *)(puVar1 + -0x20) = auVar21._0_8_;
    *(long *)(puVar1 + -0x18) = lVar4;
    *(undefined1 **)(puVar1 + -0x10) = puVar15;
    *(undefined **)(puVar1 + -8) = puVar16;
    uVar7 = auVar20._8_4_;
    if (uVar7 == 0xffffffff) {
      return;
    }
    lVar10 = *(long *)(lVar11 + 0x70);
    if (lVar10 == 0) {
      func_0x00f78af4();
      lVar13 = lVar4;
    }
    else {
      lVar13 = auVar20._8_8_;
      if (uVar7 < *(uint *)(lVar10 + 0x18)) {
        uVar12 = 2;
        if ((int)uVar8 == 0) {
          uVar12 = 0;
        }
        *(undefined4 *)(lVar10 + (long)(int)uVar7 * 0x60 + 0x5c) = uVar12;
        if ((auVar21._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(lVar11,auVar20._8_8_);
        }
        *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar1 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
        *(long *)(puVar1 + -0x48) = unaff_x25;
        *(long *)(puVar1 + -0x40) = unaff_x24;
        *(long *)(puVar1 + -0x38) = unaff_x23;
        *(long *)(puVar1 + -0x30) = lVar6;
        *(undefined8 *)(puVar1 + -0x28) = uVar19;
        *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
        *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
        *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
        *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
        lVar4 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar10 = *(long *)(lVar11 + 0x70);
        if (lVar10 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar10 + 0x18) <= uVar7) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar7;
        lVar10 = lVar10 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar10 + 0x20);
        lVar6 = *(long *)(lVar10 + 0x28);
        uVar5 = *(undefined8 *)(lVar10 + 0x30);
        uVar17 = *(undefined8 *)(lVar10 + 0x48);
        uVar9 = *(undefined8 *)(lVar10 + 0x40);
        *(undefined8 *)(puVar1 + -0xe8) = *(undefined8 *)(lVar10 + 0x38);
        *(undefined8 *)(puVar1 + -0xf0) = uVar5;
        *(undefined8 *)(puVar1 + -0xd8) = uVar17;
        *(undefined8 *)(puVar1 + -0xe0) = uVar9;
        lVar4 = *(long *)(lVar10 + 0x50);
        iVar14 = *(int *)(lVar10 + 0x58);
        iVar3 = *(int *)(lVar10 + 0x5c);
        unaff_x23 = *(long *)(lVar10 + 0x60);
        unaff_x24 = *(long *)(lVar10 + 0x68);
        uVar5 = *(undefined8 *)(lVar10 + 0x70);
        *(undefined8 *)(puVar1 + -0xf8) = *(undefined8 *)(lVar10 + 0x78);
        *(undefined8 *)(puVar1 + -0x100) = uVar5;
        if (iVar3 == iVar14) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
          if (iVar3 == 0) {
            return;
          }
          if (lVar4 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar4,iVar14 == 2,0);
            return;
          }
        }
        else if (iVar14 == 2) {
          if (iVar3 == 0) {
            if (unaff_x24 == 0) goto code_r0x0150c7d4;
            uVar9 = *(undefined8 *)(lVar10 + 0x38);
            uVar5 = *(undefined8 *)(lVar10 + 0x30);
            uVar18 = *(undefined8 *)(lVar10 + 0x48);
            uVar17 = *(undefined8 *)(lVar10 + 0x40);
            *(undefined8 *)(puVar1 + -0x118) = uVar9;
            *(undefined8 *)(puVar1 + -0x120) = uVar5;
            *(undefined8 *)(puVar1 + -0x108) = uVar18;
            *(undefined8 *)(puVar1 + -0x110) = uVar17;
            uVar8 = *(undefined8 *)(lVar10 + 0x78);
            uVar19 = *(undefined8 *)(lVar10 + 0x70);
            *(undefined8 *)(puVar1 + -0x128) = uVar8;
            *(undefined8 *)(puVar1 + -0x130) = uVar19;
            *(undefined8 *)(puVar1 + -200) = unaff_x26;
            *(long *)(puVar1 + -0xc0) = lVar6;
            *(undefined8 *)(puVar1 + -0xb0) = uVar9;
            *(undefined8 *)(puVar1 + -0xb8) = uVar5;
            *(undefined8 *)(puVar1 + -0xa0) = uVar18;
            *(undefined8 *)(puVar1 + -0xa8) = uVar17;
            *(long *)(puVar1 + -0x98) = lVar4;
            *(undefined8 *)(puVar1 + -0x90) = _UNK_033f8620;
            *(long *)(puVar1 + -0x88) = unaff_x23;
            *(long *)(puVar1 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar1 + -0x70) = uVar8;
            *(undefined8 *)(puVar1 + -0x78) = uVar19;
            lVar10 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar10,puVar1 + -200,uRam0000000003d2a408);
            iVar14 = 1;
          }
          else {
            iVar14 = 2;
          }
code_r0x0150c72c:
          lVar11 = *(long *)(lVar11 + 0x70);
          if (lVar11 != 0) {
            if (*(uint *)(lVar11 + 0x18) <= uVar7) goto code_r0x0150c7d8;
            lVar11 = lVar11 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar11 + 0x20) = unaff_x26;
            *(long *)(lVar11 + 0x28) = lVar6;
            uVar5 = *(undefined8 *)(puVar1 + -0xf0);
            uVar17 = *(undefined8 *)(puVar1 + -0xd8);
            uVar9 = *(undefined8 *)(puVar1 + -0xe0);
            *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(puVar1 + -0xe8);
            *(undefined8 *)(lVar11 + 0x30) = uVar5;
            *(undefined8 *)(lVar11 + 0x48) = uVar17;
            *(undefined8 *)(lVar11 + 0x40) = uVar9;
            *(long *)(lVar11 + 0x50) = lVar4;
            *(int *)(lVar11 + 0x58) = iVar14;
            *(int *)(lVar11 + 0x5c) = iVar3;
            *(long *)(lVar11 + 0x60) = unaff_x23;
            *(long *)(lVar11 + 0x68) = unaff_x24;
            uVar5 = *(undefined8 *)(puVar1 + -0x100);
            *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(puVar1 + -0xf8);
            *(undefined8 *)(lVar11 + 0x70) = uVar5;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar14 != 0) goto code_r0x0150c72c;
          if (iVar3 != 2) {
            iVar14 = 0;
            goto code_r0x0150c72c;
          }
          if (((lVar6 != 0) && (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar6,0), lVar10 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar1 + -200) = unaff_x26;
            *(long *)(puVar1 + -0xc0) = lVar6;
            *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -0xe8);
            *(undefined8 *)(puVar1 + -0xb8) = *(undefined8 *)(puVar1 + -0xf0);
            *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar1 + -0xd8);
            *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(puVar1 + -0xe0);
            *(long *)(puVar1 + -0x98) = lVar4;
            *(undefined8 *)(puVar1 + -0x90) = _UNK_033f8628;
            *(long *)(puVar1 + -0x88) = unaff_x23;
            *(long *)(puVar1 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)(puVar1 + -0xf8);
            *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0x100);
            lVar10 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar5 = func_0x00f78b24();
        auVar21 = func_0x00f78ac0(uVar5,0);
        lVar11 = auVar21._8_8_;
        *(undefined8 *)(puVar1 + -0x180) = unaff_x26;
        *(long *)(puVar1 + -0x178) = unaff_x25;
        *(long *)(puVar1 + -0x170) = unaff_x24;
        *(long *)(puVar1 + -0x168) = unaff_x23;
        *(long *)(puVar1 + -0x160) = lVar6;
        *(undefined1 (*) [16])(puVar1 + -0x158) = auVar20;
        *(long *)(puVar1 + -0x148) = lVar4;
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
        uVar5 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x1c),
                                *(undefined4 *)(lVar11 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar11 + 0x10),0,0);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,10,uRam0000000003d5e7a8);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar5,*(undefined8 *)(lVar11 + 0x58),uRam0000000003d5e6e0);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar5,1,uRam0000000003d5e888);
        lVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar5,auVar21._0_8_,uRam0000000003d5e850);
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar11 + 0x10);
        }
        return;
      }
    }
    uVar5 = func_0x00f78b24();
    auVar20 = func_0x00f78ac0(uVar5,0);
    puVar2 = puVar1 + -0x30;
    puVar15 = puVar1 + -0x30;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar4 = *(long *)(auVar20._0_8_ + 0x28);
    auVar21._8_8_ = auVar20._8_8_;
    auVar21._0_8_ = lVar4;
    if (lVar4 == 0) {
      puVar16 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar21 = func_0x00f78af4();
    }
    else {
      puVar2 = puVar1 + -0x20;
      puVar15 = *(undefined1 **)(puVar1 + -0x30);
      puVar16 = *(undefined **)(puVar1 + -0x28);
    }
    lVar4 = auVar21._8_8_;
    puVar1 = puVar2 + -0x20;
    *(long *)(puVar2 + -0x20) = lVar11;
    *(long *)(puVar2 + -0x18) = lVar13;
    *(undefined1 **)(puVar2 + -0x10) = puVar15;
    *(undefined **)(puVar2 + -8) = puVar16;
    puVar15 = puVar2 + -0x10;
    auVar20._8_8_ = 4;
    auVar20._0_8_ = auVar21._0_8_;
    uVar8 = 0;
    puVar16 = &UNK_0150bd10;
  } while( true );
}



// ============================================================
// RVA: 0x1483888 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.LeaderboardOrTooltipSelected
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_LeagueWeeklyScheduleScreen__LeaderboardOrTooltipSelected(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 unaff_x19;
  long lVar12;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar13;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar14;
  code *unaff_x30;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  do {
    lVar5 = param_1;
    *(undefined1 *)(lVar5 + 0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x19 = 0;
    unaff_x22 = 0x3eb4000;
    unaff_x21 = 0x3d41150;
    if ((bRam0000000003eb4928 & 1) == 0) {
      func_0x00f78a20(0x3d41150);
      bRam0000000003eb4928 = 1;
    }
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d41150);
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar4 + 0xb8),6,0,1,0);
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d41150);
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0xb8) != 0)) {
        uVar8 = 1;
        /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar4 + 0xb8),8,1,1,0);
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d41150);
        if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0xb8), lVar4 != 0)) break;
      }
    }
    unaff_x30 = Atlas_UI_Screens_LeagueWeeklyScheduleScreen__LeaderboardOrTooltipSelected;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x20 = lVar5;
  } while( true );
  uVar7 = 0;
  uVar16 = *(undefined8 *)((long)register0x00000008 + -0x20);
  uVar17 = *(undefined8 *)((long)register0x00000008 + -0x18);
  lVar5 = *(long *)((long)register0x00000008 + -0x30);
  uVar18 = *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar4 = *(long *)(lVar4 + 0x28);
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x80) = 0;
    return;
  }
  lVar4 = func_0x00f78af4();
  puVar1 = (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar17;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x18) =
       &Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
  puVar14 = (undefined1 *)((long)register0x00000008 + -0x20);
  if (*(ulong *)(lVar4 + 0x28) == 0) {
    puVar15 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
    auVar20 = func_0x00f78af4();
    auVar21._8_8_ = uVar8;
    auVar21._0_8_ = uVar16;
  }
  else {
    auVar20._8_8_ = 0;
    auVar20._0_8_ = *(ulong *)(lVar4 + 0x28);
    uVar7 = 0;
    auVar21._8_8_ = 1;
    auVar21._0_8_ = uVar16;
    puVar15 = &UNK_0150bbf4;
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x30);
  }
  do {
    lVar10 = auVar20._0_8_;
    *(long *)(puVar1 + -0x20) = auVar21._0_8_;
    *(long *)(puVar1 + -0x18) = lVar4;
    *(undefined1 **)(puVar1 + -0x10) = puVar14;
    *(undefined **)(puVar1 + -8) = puVar15;
    uVar6 = auVar20._8_4_;
    if (uVar6 == 0xffffffff) {
      return;
    }
    lVar9 = *(long *)(lVar10 + 0x70);
    if (lVar9 == 0) {
      func_0x00f78af4();
      lVar12 = lVar4;
    }
    else {
      lVar12 = auVar20._8_8_;
      if (uVar6 < *(uint *)(lVar9 + 0x18)) {
        uVar11 = 2;
        if ((int)uVar7 == 0) {
          uVar11 = 0;
        }
        *(undefined4 *)(lVar9 + (long)(int)uVar6 * 0x60 + 0x5c) = uVar11;
        if ((auVar21._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(lVar10,auVar20._8_8_);
        }
        *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar1 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
        *(long *)(puVar1 + -0x48) = unaff_x25;
        *(long *)(puVar1 + -0x40) = unaff_x24;
        *(long *)(puVar1 + -0x38) = unaff_x23;
        *(long *)(puVar1 + -0x30) = lVar5;
        *(undefined8 *)(puVar1 + -0x28) = uVar18;
        *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
        *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
        *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
        *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
        lVar4 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar9 = *(long *)(lVar10 + 0x70);
        if (lVar9 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar9 + 0x18) <= uVar6) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar6;
        lVar9 = lVar9 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar9 + 0x20);
        lVar5 = *(long *)(lVar9 + 0x28);
        uVar8 = *(undefined8 *)(lVar9 + 0x30);
        uVar17 = *(undefined8 *)(lVar9 + 0x48);
        uVar16 = *(undefined8 *)(lVar9 + 0x40);
        *(undefined8 *)(puVar1 + -0xe8) = *(undefined8 *)(lVar9 + 0x38);
        *(undefined8 *)(puVar1 + -0xf0) = uVar8;
        *(undefined8 *)(puVar1 + -0xd8) = uVar17;
        *(undefined8 *)(puVar1 + -0xe0) = uVar16;
        lVar4 = *(long *)(lVar9 + 0x50);
        iVar13 = *(int *)(lVar9 + 0x58);
        iVar3 = *(int *)(lVar9 + 0x5c);
        unaff_x23 = *(long *)(lVar9 + 0x60);
        unaff_x24 = *(long *)(lVar9 + 0x68);
        uVar8 = *(undefined8 *)(lVar9 + 0x70);
        *(undefined8 *)(puVar1 + -0xf8) = *(undefined8 *)(lVar9 + 0x78);
        *(undefined8 *)(puVar1 + -0x100) = uVar8;
        if (iVar3 == iVar13) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
          if (iVar3 == 0) {
            return;
          }
          if (lVar4 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar4,iVar13 == 2,0);
            return;
          }
        }
        else if (iVar13 == 2) {
          if (iVar3 == 0) {
            if (unaff_x24 == 0) goto code_r0x0150c7d4;
            uVar16 = *(undefined8 *)(lVar9 + 0x38);
            uVar8 = *(undefined8 *)(lVar9 + 0x30);
            uVar18 = *(undefined8 *)(lVar9 + 0x48);
            uVar17 = *(undefined8 *)(lVar9 + 0x40);
            *(undefined8 *)(puVar1 + -0x118) = uVar16;
            *(undefined8 *)(puVar1 + -0x120) = uVar8;
            *(undefined8 *)(puVar1 + -0x108) = uVar18;
            *(undefined8 *)(puVar1 + -0x110) = uVar17;
            uVar19 = *(undefined8 *)(lVar9 + 0x78);
            uVar7 = *(undefined8 *)(lVar9 + 0x70);
            *(undefined8 *)(puVar1 + -0x128) = uVar19;
            *(undefined8 *)(puVar1 + -0x130) = uVar7;
            *(undefined8 *)(puVar1 + -200) = unaff_x26;
            *(long *)(puVar1 + -0xc0) = lVar5;
            *(undefined8 *)(puVar1 + -0xb0) = uVar16;
            *(undefined8 *)(puVar1 + -0xb8) = uVar8;
            *(undefined8 *)(puVar1 + -0xa0) = uVar18;
            *(undefined8 *)(puVar1 + -0xa8) = uVar17;
            *(long *)(puVar1 + -0x98) = lVar4;
            *(undefined8 *)(puVar1 + -0x90) = _UNK_033f8620;
            *(long *)(puVar1 + -0x88) = unaff_x23;
            *(long *)(puVar1 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar1 + -0x70) = uVar19;
            *(undefined8 *)(puVar1 + -0x78) = uVar7;
            lVar9 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar9,puVar1 + -200,uRam0000000003d2a408);
            iVar13 = 1;
          }
          else {
            iVar13 = 2;
          }
code_r0x0150c72c:
          lVar10 = *(long *)(lVar10 + 0x70);
          if (lVar10 != 0) {
            if (*(uint *)(lVar10 + 0x18) <= uVar6) goto code_r0x0150c7d8;
            lVar10 = lVar10 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar10 + 0x20) = unaff_x26;
            *(long *)(lVar10 + 0x28) = lVar5;
            uVar8 = *(undefined8 *)(puVar1 + -0xf0);
            uVar17 = *(undefined8 *)(puVar1 + -0xd8);
            uVar16 = *(undefined8 *)(puVar1 + -0xe0);
            *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(puVar1 + -0xe8);
            *(undefined8 *)(lVar10 + 0x30) = uVar8;
            *(undefined8 *)(lVar10 + 0x48) = uVar17;
            *(undefined8 *)(lVar10 + 0x40) = uVar16;
            *(long *)(lVar10 + 0x50) = lVar4;
            *(int *)(lVar10 + 0x58) = iVar13;
            *(int *)(lVar10 + 0x5c) = iVar3;
            *(long *)(lVar10 + 0x60) = unaff_x23;
            *(long *)(lVar10 + 0x68) = unaff_x24;
            uVar8 = *(undefined8 *)(puVar1 + -0x100);
            *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(puVar1 + -0xf8);
            *(undefined8 *)(lVar10 + 0x70) = uVar8;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar13 != 0) goto code_r0x0150c72c;
          if (iVar3 != 2) {
            iVar13 = 0;
            goto code_r0x0150c72c;
          }
          if (((lVar5 != 0) && (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0), lVar9 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar1 + -200) = unaff_x26;
            *(long *)(puVar1 + -0xc0) = lVar5;
            *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -0xe8);
            *(undefined8 *)(puVar1 + -0xb8) = *(undefined8 *)(puVar1 + -0xf0);
            *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar1 + -0xd8);
            *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(puVar1 + -0xe0);
            *(long *)(puVar1 + -0x98) = lVar4;
            *(undefined8 *)(puVar1 + -0x90) = _UNK_033f8628;
            *(long *)(puVar1 + -0x88) = unaff_x23;
            *(long *)(puVar1 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)(puVar1 + -0xf8);
            *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0x100);
            lVar9 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar8 = func_0x00f78b24();
        auVar21 = func_0x00f78ac0(uVar8,0);
        lVar10 = auVar21._8_8_;
        *(undefined8 *)(puVar1 + -0x180) = unaff_x26;
        *(long *)(puVar1 + -0x178) = unaff_x25;
        *(long *)(puVar1 + -0x170) = unaff_x24;
        *(long *)(puVar1 + -0x168) = unaff_x23;
        *(long *)(puVar1 + -0x160) = lVar5;
        *(undefined1 (*) [16])(puVar1 + -0x158) = auVar20;
        *(long *)(puVar1 + -0x148) = lVar4;
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
        uVar8 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar10 + 0x18),*(undefined4 *)(lVar10 + 0x1c),
                                *(undefined4 *)(lVar10 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar10 + 0x10),0,0);
        uVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar8,10,uRam0000000003d5e7a8);
        uVar8 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar8,*(undefined8 *)(lVar10 + 0x58),uRam0000000003d5e6e0);
        uVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar8,1,uRam0000000003d5e888);
        lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar8,auVar21._0_8_,uRam0000000003d5e850);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar10 + 0x10);
        }
        return;
      }
    }
    uVar8 = func_0x00f78b24();
    auVar20 = func_0x00f78ac0(uVar8,0);
    puVar2 = puVar1 + -0x30;
    puVar14 = puVar1 + -0x30;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar4 = *(long *)(auVar20._0_8_ + 0x28);
    auVar21._8_8_ = auVar20._8_8_;
    auVar21._0_8_ = lVar4;
    if (lVar4 == 0) {
      puVar15 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar21 = func_0x00f78af4();
    }
    else {
      puVar2 = puVar1 + -0x20;
      puVar14 = *(undefined1 **)(puVar1 + -0x30);
      puVar15 = *(undefined **)(puVar1 + -0x28);
    }
    lVar4 = auVar21._8_8_;
    puVar1 = puVar2 + -0x20;
    *(long *)(puVar2 + -0x20) = lVar10;
    *(long *)(puVar2 + -0x18) = lVar12;
    *(undefined1 **)(puVar2 + -0x10) = puVar14;
    *(undefined **)(puVar2 + -8) = puVar15;
    puVar14 = puVar2 + -0x10;
    auVar20._8_8_ = 4;
    auVar20._0_8_ = auVar21._0_8_;
    uVar7 = 0;
    puVar15 = &UNK_0150bd10;
  } while( true );
}



// ============================================================
// RVA: 0x1483894 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.OnOptionSelected
// ============================================================

/* WARNING: Possible PIC construction at 0x01635710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01635714) */
/* WARNING: Removing unreachable block (ram,0x01635718) */
/* WARNING: Removing unreachable block (ram,0x0163577c) */
/* WARNING: Removing unreachable block (ram,0x01635750) */
/* WARNING: Removing unreachable block (ram,0x01ed77c0) */
/* WARNING: Removing unreachable block (ram,0x01ed77e8) */
/* WARNING: Removing unreachable block (ram,0x01ed7810) */
/* WARNING: Removing unreachable block (ram,0x01ed7828) */
/* WARNING: Removing unreachable block (ram,0x01ed784c) */
/* WARNING: Removing unreachable block (ram,0x01ed786c) */
/* WARNING: Removing unreachable block (ram,0x01ed7878) */
/* WARNING: Removing unreachable block (ram,0x01ed78b8) */
/* WARNING: Removing unreachable block (ram,0x01ed78bc) */
/* WARNING: Removing unreachable block (ram,0x01ed78e0) */
/* WARNING: Removing unreachable block (ram,0x01ed797c) */
/* WARNING: Removing unreachable block (ram,0x01ed7908) */
/* WARNING: Removing unreachable block (ram,0x01ed7928) */
/* WARNING: Removing unreachable block (ram,0x01ed7934) */
/* WARNING: Removing unreachable block (ram,0x01ed7994) */
/* WARNING: Removing unreachable block (ram,0x01ed7998) */
/* WARNING: Removing unreachable block (ram,0x01ed79bc) */
/* WARNING: Removing unreachable block (ram,0x01ed79c8) */
/* WARNING: Removing unreachable block (ram,0x01ed79d4) */
/* WARNING: Removing unreachable block (ram,0x01ed79e4) */
/* WARNING: Removing unreachable block (ram,0x01ed79ec) */
/* WARNING: Removing unreachable block (ram,0x01ed7a34) */
/* WARNING: Removing unreachable block (ram,0x01ed7a40) */
/* WARNING: Removing unreachable block (ram,0x01ed7a74) */
/* WARNING: Removing unreachable block (ram,0x01ed7b20) */
/* WARNING: Removing unreachable block (ram,0x01ed7b2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b34) */
/* WARNING: Removing unreachable block (ram,0x01ed7b3c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b40) */
/* WARNING: Removing unreachable block (ram,0x01ed7b48) */
/* WARNING: Removing unreachable block (ram,0x01ed7b50) */
/* WARNING: Removing unreachable block (ram,0x01ed7a94) */
/* WARNING: Removing unreachable block (ram,0x01ed7ab8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ac4) */
/* WARNING: Removing unreachable block (ram,0x01ed7acc) */
/* WARNING: Removing unreachable block (ram,0x01ed7ad8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae4) */
/* WARNING: Removing unreachable block (ram,0x01ed7b80) */
/* WARNING: Removing unreachable block (ram,0x01ed7b84) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb0) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bc8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bd0) */
/* WARNING: Removing unreachable block (ram,0x01ed7d50) */
/* WARNING: Removing unreachable block (ram,0x01ed7bfc) */
/* WARNING: Removing unreachable block (ram,0x01ed7c08) */
/* WARNING: Removing unreachable block (ram,0x01ed7c10) */
/* WARNING: Removing unreachable block (ram,0x01ed7c18) */
/* WARNING: Removing unreachable block (ram,0x01ed7c24) */
/* WARNING: Removing unreachable block (ram,0x01ed7c2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7c90) */
/* WARNING: Removing unreachable block (ram,0x01ed7c9c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d18) */
/* WARNING: Removing unreachable block (ram,0x01ed7d1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d80) */
/* WARNING: Removing unreachable block (ram,0x01ed7c54) */
/* WARNING: Removing unreachable block (ram,0x01ed7c64) */
/* WARNING: Removing unreachable block (ram,0x01ed7c74) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae8) */
/* WARNING: Removing unreachable block (ram,0x01ed7b68) */
/* WARNING: Removing unreachable block (ram,0x01ed7b08) */
/* WARNING: Removing unreachable block (ram,0x01ed7b0c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b60) */
/* WARNING: Removing unreachable block (ram,0x01ed7b6c) */
/* WARNING: Removing unreachable block (ram,0x01ed7a50) */
/* WARNING: Removing unreachable block (ram,0x01ed79f0) */
/* WARNING: Removing unreachable block (ram,0x01ed7a00) */
/* WARNING: Removing unreachable block (ram,0x01ed7a28) */
/* WARNING: Removing unreachable block (ram,0x01ed7938) */
/* WARNING: Removing unreachable block (ram,0x01ed7958) */
/* WARNING: Removing unreachable block (ram,0x01ed7980) */
/* WARNING: Removing unreachable block (ram,0x01ed787c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a4) */
/* WARNING: Removing unreachable block (ram,0x01ed789c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a8) */
/* WARNING: Removing unreachable block (ram,0x01ed77f8) */
/* WARNING: Removing unreachable block (ram,0x01ed77cc) */

undefined8 *
Atlas_UI_Screens_LeagueWeeklyScheduleScreen__OnOptionSelected
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
          undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  int extraout_w1;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  uint uVar18;
  undefined *puVar19;
  code *pcVar20;
  long lVar21;
  undefined8 **ppuVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  long lStack_148;
  int iStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
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
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  
  if ((bRam0000000003eb492a & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41148);
    bRam0000000003eb492a = 1;
  }
  *(undefined1 *)(param_1 + 0x1b) = 1;
  Atlas_UI_Screens_LeagueWeeklyScheduleScreen__ToggleProgressionToNextScreen(param_1,1);
  puVar19 = (undefined *)param_1[0x14];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(puVar19,param_2,0);
  if (iVar7 != 0) {
    param_1[0x14] = param_2;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41148);
  if (lVar10 == 0) {
    return (undefined8 *)0x0;
  }
  puVar11 = *(undefined8 **)(lVar10 + 0x18);
  if (puVar11 != (undefined8 *)0x0) {
    puStack_68 = puVar11;
    lVar10 = puVar11[0xd];
    if (lVar10 == 0) {
      ppuVar22 = &puStack_68;
      lVar21 = 1;
    }
    else {
      lVar21 = *(long *)(lVar10 + 0x18);
      if (lVar21 == 0) {
        return puVar11;
      }
      ppuVar22 = (undefined8 **)(lVar10 + 0x20);
    }
    lVar10 = 0;
    do {
      puVar14 = ppuVar22[lVar10];
      pcVar20 = (code *)puVar14[2];
      plVar1 = (long *)puVar14[4];
      lVar12 = puVar14[5];
      if (*(short *)(lVar12 + 0x48) == -1) {
        func_0x00f78ad8(lVar12);
      }
      iVar7 = func_0x00f78a4c(lVar12);
      bVar6 = *(char *)(lVar12 + 0x4a) == '\x02';
      if (iVar7 == 0) {
        if (bVar6) {
          if (plVar1 == (long *)0x0) {
code_r0x0155dad0:
            puVar14 = (undefined8 *)(*pcVar20)(param_4,param_5,lVar12);
          }
          else {
            if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
               (puVar11[3] == 0)) goto code_r0x0155d9c4;
            iVar7 = func_0x00f78a44(lVar12);
            iVar8 = func_0x00f78ec0(lVar12);
            if (iVar7 == 0) {
              uVar5 = *(ushort *)(lVar12 + 0x48);
              if (iVar8 == 0) {
                lVar12 = *plVar1 + (ulong)uVar5 * 0x10;
                puVar14 = (undefined8 *)
                          (**(code **)(lVar12 + 0x138))
                                    (plVar1,param_4,param_5,*(undefined8 *)(lVar12 + 0x140));
                goto code_r0x0155dae0;
              }
              lVar12 = func_0x00f78a48(lVar12);
              lVar15 = *plVar1;
              uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar12) {
                    puVar14 = (undefined8 *)
                              (lVar15 + (long)(int)(*piVar17 + (uint)uVar5) * 0x10 + 0x138);
                    goto code_r0x0155dc78;
                  }
                  piVar17 = piVar17 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar14 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar5);
code_r0x0155dc78:
              pcVar20 = (code *)*puVar14;
              puVar14 = (undefined8 *)puVar14[1];
            }
            else {
              if (iVar8 == 0) {
                uVar13 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar15 = *plVar1;
                uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
                if (uVar16 != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)(lVar12 + 0x18)) {
                      lVar15 = lVar15 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0155dc50;
                    }
                    piVar17 = piVar17 + 4;
                    uVar16 = uVar16 - 1;
                  } while (uVar16 != 0);
                }
                lVar15 = func_0x00fac1f0(plVar1);
code_r0x0155dc50:
                uVar13 = *(undefined8 *)(lVar15 + 8);
              }
              puVar14 = (undefined8 *)func_0x00f78acc(uVar13,lVar12);
              pcVar20 = (code *)*puVar14;
            }
            puVar14 = (undefined8 *)(*pcVar20)(plVar1,param_4,param_5,puVar14);
          }
        }
        else {
          if ((*(short *)(lVar12 + 0x48) == -1) || (puVar11[3] == 0)) goto code_r0x0155dad0;
          iVar7 = func_0x00f78a44(lVar12);
          iVar8 = func_0x00f78ec0(lVar12);
          if (iVar7 == 0) {
            uVar5 = *(ushort *)(lVar12 + 0x48);
            if (iVar8 == 0) {
              lVar12 = *param_4 + (ulong)uVar5 * 0x10;
              puVar14 = (undefined8 *)
                        (**(code **)(lVar12 + 0x138))
                                  (param_4,param_5,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x0155dae0;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar15 = *param_4;
            uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar12) {
                  puVar14 = (undefined8 *)
                            (lVar15 + (long)(int)(*piVar17 + (uint)uVar5) * 0x10 + 0x138);
                  goto code_r0x0155dc0c;
                }
                piVar17 = piVar17 + 4;
                uVar16 = uVar16 - 1;
              } while (uVar16 != 0);
            }
            puVar14 = (undefined8 *)func_0x00fac1f0(param_4,lVar12,(ulong)uVar5);
code_r0x0155dc0c:
            pcVar20 = (code *)*puVar14;
            puVar14 = (undefined8 *)puVar14[1];
          }
          else {
            if (iVar8 == 0) {
              uVar13 = *(undefined8 *)(*param_4 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar15 = *param_4;
              uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar15 = lVar15 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x0155dbe4;
                  }
                  piVar17 = piVar17 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              lVar15 = func_0x00fac1f0(param_4);
code_r0x0155dbe4:
              uVar13 = *(undefined8 *)(lVar15 + 8);
            }
            puVar14 = (undefined8 *)func_0x00f78acc(uVar13,lVar12);
            pcVar20 = (code *)*puVar14;
          }
          puVar14 = (undefined8 *)(*pcVar20)(param_4,param_5,puVar14);
        }
      }
      else {
        if (bVar6) goto code_r0x0155dad0;
code_r0x0155d9c4:
        puVar14 = (undefined8 *)(*pcVar20)(plVar1,param_4,param_5,lVar12);
      }
code_r0x0155dae0:
      lVar10 = lVar10 + 1;
      if (lVar10 == lVar21) {
        return puVar14;
      }
    } while( true );
  }
  lVar10 = func_0x00f78af4();
  uStack_70 = param_2;
  puStack_68 = param_1;
  if ((bRam0000000003eb492b & 1) == 0) {
    func_0x00f78a20(0x3d41150);
    bRam0000000003eb492b = 1;
  }
  lVar21 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar10,uRam0000000003d41150);
  if ((lVar21 == 0) || (*(long *)(lVar21 + 0xb8) == 0)) {
code_r0x01483a10:
    lVar10 = func_0x00f78af4();
    puStack_78 = &Atlas_UI_Screens_LeagueWeeklyScheduleScreen___ctor;
    if ((bRam0000000003eb492c & 1) == 0) {
      func_0x00f78a20(0x3d2c798);
      func_0x00f78a20(0x3d2f2e0);
      func_0x00f78a20(0x3d1c400);
      func_0x00f78a20(0x3d3c620);
      func_0x00f78a20(0x3d1df60);
      bRam0000000003eb492c = 1;
    }
    uVar13 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<MapDefinition, UILeagueDayPanelBehaviour>_TypeInfo*/ uRam0000000003d1c400);
    /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar13,uRam0000000003d2f2e0);
    *(undefined8 *)(lVar10 + 0xb8) = uVar13;
    uVar13 = func_0x00f78aec(/*System.Collections.Generic.List<UILeagueDayPanelBehaviour>_TypeInfo*/ uRam0000000003d1df60);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar13,uRam0000000003d3c620);
    *(undefined8 *)(lVar10 + 0xc0) = uVar13;
    if (lVar10 == 0) {
      auVar24 = func_0x00f78af4();
      puVar14 = auVar24._8_8_;
      puVar11 = auVar24._0_8_;
      uVar23 = puVar14[1];
      uVar13 = *puVar14;
      puVar11[2] = puVar14[2];
      puVar11[1] = uVar23;
      *puVar11 = uVar13;
      return puVar11;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar11 = (undefined8 *)
              (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(lRam0000000003d2c798 + 0x18) + 0xc0) + 0x38))();
    return puVar11;
  }
  /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar21 + 0xb8),6,0,0);
  lVar21 = *(long *)(lVar10 + 0x78);
  if (lVar21 == 0) goto code_r0x01483a10;
  iVar7 = *(int *)(lVar10 + 0x98);
  lVar10 = *(long *)PTR_03a5d648;
  puStack_78 = puVar19;
  if ((bRam0000000003eb567f & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0,iVar7,0);
    func_0x00f78a20(0x3d2e030);
    func_0x00f78a20(0x3d2dfc8);
    func_0x00f78a20(0x3d3cce0);
    func_0x00f78a20(0x3d3cce8);
    func_0x00f78a20(0x3d3ccf0);
    bRam0000000003eb567f = 1;
  }
  lVar12 = *(long *)(lVar21 + 0x10);
  if (lVar12 == 0) {
code_r0x016364d0:
    func_0x00f78af4();
  }
  else {
    iVar8 = *(int *)(lVar12 + 0x18);
    if (0 < iVar8) {
      uVar18 = 0;
      do {
        if (*(uint *)(lVar12 + 0x18) <= uVar18) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar12 = *(long *)(lVar12 + 0x10) + (long)(int)uVar18 * 0x20;
        iVar2 = *(int *)(lVar12 + 0x20);
        uVar23 = *(undefined8 *)(lVar12 + 0x2c);
        uVar13 = *(undefined8 *)(lVar12 + 0x24);
        uVar9 = *(undefined4 *)(lVar12 + 0x34);
        uVar4 = *(undefined4 *)(lVar12 + 0x39);
        uVar3 = *(undefined4 *)(lVar12 + 0x3c);
        if (((*(byte *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (iVar2 == iVar7) {
          if (*(long *)(lVar21 + 0x10) != 0) {
            uStack_134 = (undefined4)uVar23;
            uStack_130 = (undefined4)((ulong)uVar23 >> 0x20);
            uStack_13c = (undefined4)uVar13;
            uStack_138 = (undefined4)((ulong)uVar13 >> 0x20);
            uStack_128._0_5_ = CONCAT41((int)CONCAT43(uVar3,(int3)uVar4),1);
            uStack_128 = CONCAT44(uVar3,(undefined4)uStack_128);
            iStack_140 = iVar7;
            uStack_12c = uVar9;
            /*System.Collections.Generic.List<AssetManager.AssetRequest>$$set_Item*/ func_0x024afabc(*(long *)(lVar21 + 0x10),uVar18,&iStack_140,uRam0000000003d3ccf0);
            if (*(long *)(lVar21 + 0x28) != 0) {
              lVar12 = *(long *)(lVar21 + 0x18);
              uVar9 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$get_Item*/ func_0x01e2ca80(*(long *)(lVar21 + 0x28),iVar7,uRam0000000003d2dfc8);
              lVar21 = 0;
              if (lVar12 != 0) {
                puVar11 = (undefined8 *)
                          /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(&iStack_140,lVar12,uVar9,uRam0000000003d2e030);
                if (*(long *)PTR_03a5d648 == lVar10) {
                  return puVar11;
                }
                goto code_r0x016365d0;
              }
            }
          }
          break;
        }
        if (iVar8 - 1U == uVar18) goto code_r0x016364d4;
        lVar12 = *(long *)(lVar21 + 0x10);
        uVar18 = uVar18 + 1;
      } while (lVar12 != 0);
      goto code_r0x016364d0;
    }
  }
code_r0x016364d4:
  if (*(long *)PTR_03a5d648 != lVar10) {
code_r0x016365d0:
    iVar7 = ___stack_chk_fail();
    return (undefined8 *)(ulong)(iVar7 == extraout_w1);
  }
  if ((bRam0000000003eb568e & 1) == 0) {
    func_0x00f78a20(0x3d2dfa0);
    func_0x00f78a20(0x3d2dfb8);
    bRam0000000003eb568e = 1;
  }
  puStack_78 = (undefined *)((ulong)puStack_78 & 0xffffffff00000000);
  if (*(long *)(lVar21 + 0x28) != 0) {
    puVar11 = (undefined8 *)
              /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$TryGetValue*/ func_0x01e2e668(*(long *)(lVar21 + 0x28),iVar7,&puStack_78,uRam0000000003d2dfb8);
    if ((int)puVar11 == 0) {
      return puVar11;
    }
    if (*(long *)(lVar21 + 0x28) != 0) {
      /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$Remove*/ func_0x01e2e39c(*(long *)(lVar21 + 0x28),iVar7,uRam0000000003d2dfa0);
      puVar11 = (undefined8 *)/*Core.Assets.AssetManager$$RemoveAssetReference*/ func_0x016373f0(lVar21,(ulong)puStack_78 & 0xffffffff);
      return puVar11;
    }
  }
  auVar24 = func_0x00f78af4();
  lVar10 = auVar24._0_8_;
  if ((bRam0000000003eb5690 & 1) == 0) {
    func_0x00f78a20(0x3d433e8);
    func_0x00f78a20(0x3d43408);
    func_0x00f78a20(0x3d43420);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d2c050);
    func_0x00f78a20(0x3d2be18);
    func_0x00f78a20(0x3d2bfa0);
    func_0x00f78a20(0x3d2fac8);
    func_0x00f78a20(0x3d2e008);
    func_0x00f78a20(0x3d2fec0);
    func_0x00f78a20(0x3d2e020);
    func_0x00f78a20(0x3d35c80);
    bRam0000000003eb5690 = 1;
  }
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  iStack_140 = 0;
  uStack_13c = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  lStack_148 = 0;
  if (*(long *)(lVar10 + 0x18) == 0) goto code_r0x01635688;
  uVar16 = auVar24._8_8_ & 0xffffffff;
  puVar11 = (undefined8 *)
            /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(lVar10 + 0x18),uVar16,&iStack_140,uRam0000000003d2e020);
  if ((int)puVar11 == 0) {
    return puVar11;
  }
  if (*(long *)(lVar10 + 0x30) == 0) goto code_r0x01635688;
  puVar11 = (undefined8 *)
            /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar10 + 0x30),CONCAT44(uStack_12c,uStack_130),&lStack_148,
                            uRam0000000003d2fec0);
  if ((int)puVar11 == 0) {
    return puVar11;
  }
  if ((char)uStack_128 == '\0') {
    if (uStack_128._1_1_ == '\0') {
      uVar13 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_120,uRam0000000003d2bfa0);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
        iVar7 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar11 = (undefined8 *)0x3d43408;
        goto joined_r0x01635680;
      }
      puVar11 = (undefined8 *)0x3d43408;
    }
    else {
      uVar13 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_100,uRam0000000003d2c050);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) == 0) {
        puVar11 = (undefined8 *)0x3d43420;
      }
      else {
        iVar7 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar11 = (undefined8 *)0x3d43420;
joined_r0x01635680:
        if (iVar7 == 0) {
          func_0x00f78ad0();
        }
      }
    }
  }
  else {
    uVar13 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_e0,uRam0000000003d2be18);
    if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
      iVar7 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
      puVar11 = (undefined8 *)0x3d433e8;
      goto joined_r0x01635680;
    }
    puVar11 = (undefined8 *)0x3d433e8;
  }
  /*UnityEngine.AddressableAssets.Addressables$$Release<Sprite>*/ func_0x0171fc38(uVar13,*puVar11);
  if (*(long *)(lVar10 + 0x18) != 0) {
    /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$Remove*/ func_0x01e3174c(*(long *)(lVar10 + 0x18),uVar16,uRam0000000003d2e008);
    if (((*(long *)(lVar10 + 0x20) != 0) &&
        (/*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$Remove*/ func_0x01ec0ba4(*(long *)(lVar10 + 0x20),CONCAT44(uStack_134,uStack_138),
                         uRam0000000003d2fac8), lStack_148 != 0)) &&
       (*(long *)(lStack_148 + 0x20) != 0)) {
      puVar11 = (undefined8 *)
                /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Remove*/ func_0x021cefec(*(long *)(lStack_148 + 0x20),uVar16,uRam0000000003d35c80);
      return puVar11;
    }
  }
code_r0x01635688:
  func_0x00f78af4();
  if ((bRam0000000003eb567a & 1) == 0) {
    func_0x00f78a20(0x3d26978);
    func_0x00f78a20(0x3d2feb0);
    func_0x00f78a20(0x3d35c68);
    func_0x00f78a20(0x3d1cdf8);
    bRam0000000003eb567a = 1;
  }
  puVar11 = (undefined8 *)func_0x00f78aec(/*Core.Assets.AssetManager.BucketInstance_TypeInfo*/ uRam0000000003d26978);
  return puVar11;
}



// ============================================================
// RVA: 0x148398c | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.OnAfterExit
// ============================================================

/* WARNING: Possible PIC construction at 0x01635710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01635714) */
/* WARNING: Removing unreachable block (ram,0x01635718) */
/* WARNING: Removing unreachable block (ram,0x0163577c) */
/* WARNING: Removing unreachable block (ram,0x01635750) */
/* WARNING: Removing unreachable block (ram,0x01ed77c0) */
/* WARNING: Removing unreachable block (ram,0x01ed77e8) */
/* WARNING: Removing unreachable block (ram,0x01ed7810) */
/* WARNING: Removing unreachable block (ram,0x01ed7828) */
/* WARNING: Removing unreachable block (ram,0x01ed784c) */
/* WARNING: Removing unreachable block (ram,0x01ed786c) */
/* WARNING: Removing unreachable block (ram,0x01ed7878) */
/* WARNING: Removing unreachable block (ram,0x01ed78b8) */
/* WARNING: Removing unreachable block (ram,0x01ed78bc) */
/* WARNING: Removing unreachable block (ram,0x01ed78e0) */
/* WARNING: Removing unreachable block (ram,0x01ed797c) */
/* WARNING: Removing unreachable block (ram,0x01ed7908) */
/* WARNING: Removing unreachable block (ram,0x01ed7928) */
/* WARNING: Removing unreachable block (ram,0x01ed7934) */
/* WARNING: Removing unreachable block (ram,0x01ed7994) */
/* WARNING: Removing unreachable block (ram,0x01ed7998) */
/* WARNING: Removing unreachable block (ram,0x01ed79bc) */
/* WARNING: Removing unreachable block (ram,0x01ed79c8) */
/* WARNING: Removing unreachable block (ram,0x01ed79d4) */
/* WARNING: Removing unreachable block (ram,0x01ed79e4) */
/* WARNING: Removing unreachable block (ram,0x01ed79ec) */
/* WARNING: Removing unreachable block (ram,0x01ed7a34) */
/* WARNING: Removing unreachable block (ram,0x01ed7a40) */
/* WARNING: Removing unreachable block (ram,0x01ed7a74) */
/* WARNING: Removing unreachable block (ram,0x01ed7b20) */
/* WARNING: Removing unreachable block (ram,0x01ed7b2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b34) */
/* WARNING: Removing unreachable block (ram,0x01ed7b3c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b40) */
/* WARNING: Removing unreachable block (ram,0x01ed7b48) */
/* WARNING: Removing unreachable block (ram,0x01ed7b50) */
/* WARNING: Removing unreachable block (ram,0x01ed7a94) */
/* WARNING: Removing unreachable block (ram,0x01ed7ab8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ac4) */
/* WARNING: Removing unreachable block (ram,0x01ed7acc) */
/* WARNING: Removing unreachable block (ram,0x01ed7ad8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae4) */
/* WARNING: Removing unreachable block (ram,0x01ed7b80) */
/* WARNING: Removing unreachable block (ram,0x01ed7b84) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb0) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bc8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bd0) */
/* WARNING: Removing unreachable block (ram,0x01ed7d50) */
/* WARNING: Removing unreachable block (ram,0x01ed7bfc) */
/* WARNING: Removing unreachable block (ram,0x01ed7c08) */
/* WARNING: Removing unreachable block (ram,0x01ed7c10) */
/* WARNING: Removing unreachable block (ram,0x01ed7c18) */
/* WARNING: Removing unreachable block (ram,0x01ed7c24) */
/* WARNING: Removing unreachable block (ram,0x01ed7c2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7c90) */
/* WARNING: Removing unreachable block (ram,0x01ed7c9c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d18) */
/* WARNING: Removing unreachable block (ram,0x01ed7d1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d80) */
/* WARNING: Removing unreachable block (ram,0x01ed7c54) */
/* WARNING: Removing unreachable block (ram,0x01ed7c64) */
/* WARNING: Removing unreachable block (ram,0x01ed7c74) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae8) */
/* WARNING: Removing unreachable block (ram,0x01ed7b68) */
/* WARNING: Removing unreachable block (ram,0x01ed7b08) */
/* WARNING: Removing unreachable block (ram,0x01ed7b0c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b60) */
/* WARNING: Removing unreachable block (ram,0x01ed7b6c) */
/* WARNING: Removing unreachable block (ram,0x01ed7a50) */
/* WARNING: Removing unreachable block (ram,0x01ed79f0) */
/* WARNING: Removing unreachable block (ram,0x01ed7a00) */
/* WARNING: Removing unreachable block (ram,0x01ed7a28) */
/* WARNING: Removing unreachable block (ram,0x01ed7938) */
/* WARNING: Removing unreachable block (ram,0x01ed7958) */
/* WARNING: Removing unreachable block (ram,0x01ed7980) */
/* WARNING: Removing unreachable block (ram,0x01ed787c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a4) */
/* WARNING: Removing unreachable block (ram,0x01ed789c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a8) */
/* WARNING: Removing unreachable block (ram,0x01ed77f8) */
/* WARNING: Removing unreachable block (ram,0x01ed77cc) */

undefined8 * Atlas_UI_Screens_LeagueWeeklyScheduleScreen__OnAfterExit(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int extraout_w1;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long lStack_108;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
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
  
  if ((bRam0000000003eb492b & 1) == 0) {
    func_0x00f78a20(0x3d41150);
    bRam0000000003eb492b = 1;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41150);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0xb8) == 0)) {
LAB_01483a10:
    lVar7 = func_0x00f78af4();
    if ((bRam0000000003eb492c & 1) == 0) {
      func_0x00f78a20(0x3d2c798);
      func_0x00f78a20(0x3d2f2e0);
      func_0x00f78a20(0x3d1c400);
      func_0x00f78a20(0x3d3c620);
      func_0x00f78a20(0x3d1df60);
      bRam0000000003eb492c = 1;
    }
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<MapDefinition, UILeagueDayPanelBehaviour>_TypeInfo*/ uRam0000000003d1c400);
    /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar9,uRam0000000003d2f2e0);
    *(undefined8 *)(lVar7 + 0xb8) = uVar9;
    uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<UILeagueDayPanelBehaviour>_TypeInfo*/ uRam0000000003d1df60);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d3c620);
    *(undefined8 *)(lVar7 + 0xc0) = uVar9;
    if (lVar7 == 0) {
      auVar16 = func_0x00f78af4();
      puVar10 = auVar16._8_8_;
      puVar8 = auVar16._0_8_;
      uVar15 = puVar10[1];
      uVar9 = *puVar10;
      puVar8[2] = puVar10[2];
      puVar8[1] = uVar15;
      *puVar8 = uVar9;
      return puVar8;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar8 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c798 + 0x18) + 0xc0) + 0x38))();
    return puVar8;
  }
  /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar7 + 0xb8),6,0,0);
  lVar7 = *(long *)(param_1 + 0x78);
  if (lVar7 == 0) goto LAB_01483a10;
  iVar6 = *(int *)(param_1 + 0x98);
  lVar11 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb567f & 1) == 0) {
    func_0x00f78a20(0x3d1fdb0,iVar6,0);
    func_0x00f78a20(0x3d2e030);
    func_0x00f78a20(0x3d2dfc8);
    func_0x00f78a20(0x3d3cce0);
    func_0x00f78a20(0x3d3cce8);
    func_0x00f78a20(0x3d3ccf0);
    bRam0000000003eb567f = 1;
  }
  lVar14 = *(long *)(lVar7 + 0x10);
  if (lVar14 == 0) {
code_r0x016364d0:
    func_0x00f78af4();
  }
  else {
    iVar1 = *(int *)(lVar14 + 0x18);
    if (0 < iVar1) {
      uVar13 = 0;
      do {
        if (*(uint *)(lVar14 + 0x18) <= uVar13) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar14 = *(long *)(lVar14 + 0x10) + (long)(int)uVar13 * 0x20;
        iVar2 = *(int *)(lVar14 + 0x20);
        uVar15 = *(undefined8 *)(lVar14 + 0x2c);
        uVar9 = *(undefined8 *)(lVar14 + 0x24);
        uVar5 = *(undefined4 *)(lVar14 + 0x34);
        uVar4 = *(undefined4 *)(lVar14 + 0x39);
        uVar3 = *(undefined4 *)(lVar14 + 0x3c);
        if (((*(byte *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (iVar2 == iVar6) {
          if (*(long *)(lVar7 + 0x10) != 0) {
            uStack_f4 = (undefined4)uVar15;
            uStack_f0 = (undefined4)((ulong)uVar15 >> 0x20);
            uStack_fc = (undefined4)uVar9;
            uStack_f8 = (undefined4)((ulong)uVar9 >> 0x20);
            uStack_e8._0_5_ = CONCAT41((int)CONCAT43(uVar3,(int3)uVar4),1);
            uStack_e8 = CONCAT44(uVar3,(undefined4)uStack_e8);
            iStack_100 = iVar6;
            uStack_ec = uVar5;
            /*System.Collections.Generic.List<AssetManager.AssetRequest>$$set_Item*/ func_0x024afabc(*(long *)(lVar7 + 0x10),uVar13,&iStack_100,uRam0000000003d3ccf0);
            if (*(long *)(lVar7 + 0x28) != 0) {
              lVar14 = *(long *)(lVar7 + 0x18);
              uVar5 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$get_Item*/ func_0x01e2ca80(*(long *)(lVar7 + 0x28),iVar6,uRam0000000003d2dfc8);
              lVar7 = 0;
              if (lVar14 != 0) {
                puVar8 = (undefined8 *)
                         /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(&iStack_100,lVar14,uVar5,uRam0000000003d2e030);
                if (*(long *)PTR_03a5d648 == lVar11) {
                  return puVar8;
                }
                goto code_r0x016365d0;
              }
            }
          }
          break;
        }
        if (iVar1 - 1U == uVar13) goto code_r0x016364d4;
        lVar14 = *(long *)(lVar7 + 0x10);
        uVar13 = uVar13 + 1;
      } while (lVar14 != 0);
      goto code_r0x016364d0;
    }
  }
code_r0x016364d4:
  if (*(long *)PTR_03a5d648 != lVar11) {
code_r0x016365d0:
    iVar6 = ___stack_chk_fail();
    return (undefined8 *)(ulong)(iVar6 == extraout_w1);
  }
  if ((bRam0000000003eb568e & 1) == 0) {
    func_0x00f78a20(0x3d2dfa0);
    func_0x00f78a20(0x3d2dfb8);
    bRam0000000003eb568e = 1;
  }
  if (*(long *)(lVar7 + 0x28) != 0) {
    puVar8 = (undefined8 *)
             /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$TryGetValue*/ func_0x01e2e668(*(long *)(lVar7 + 0x28),iVar6,&stack0xffffffffffffffc8,
                             uRam0000000003d2dfb8);
    if ((int)puVar8 == 0) {
      return puVar8;
    }
    if (*(long *)(lVar7 + 0x28) != 0) {
      /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$Remove*/ func_0x01e2e39c(*(long *)(lVar7 + 0x28),iVar6,uRam0000000003d2dfa0);
      puVar8 = (undefined8 *)/*Core.Assets.AssetManager$$RemoveAssetReference*/ func_0x016373f0(lVar7,0);
      return puVar8;
    }
  }
  auVar16 = func_0x00f78af4();
  lVar7 = auVar16._0_8_;
  if ((bRam0000000003eb5690 & 1) == 0) {
    func_0x00f78a20(0x3d433e8);
    func_0x00f78a20(0x3d43408);
    func_0x00f78a20(0x3d43420);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d2c050);
    func_0x00f78a20(0x3d2be18);
    func_0x00f78a20(0x3d2bfa0);
    func_0x00f78a20(0x3d2fac8);
    func_0x00f78a20(0x3d2e008);
    func_0x00f78a20(0x3d2fec0);
    func_0x00f78a20(0x3d2e020);
    func_0x00f78a20(0x3d35c80);
    bRam0000000003eb5690 = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  iStack_100 = 0;
  uStack_fc = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  lStack_108 = 0;
  if (*(long *)(lVar7 + 0x18) == 0) goto code_r0x01635688;
  uVar12 = auVar16._8_8_ & 0xffffffff;
  puVar8 = (undefined8 *)
           /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(*(long *)(lVar7 + 0x18),uVar12,&iStack_100,uRam0000000003d2e020);
  if ((int)puVar8 == 0) {
    return puVar8;
  }
  if (*(long *)(lVar7 + 0x30) == 0) goto code_r0x01635688;
  puVar8 = (undefined8 *)
           /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar7 + 0x30),CONCAT44(uStack_ec,uStack_f0),&lStack_108,
                           uRam0000000003d2fec0);
  if ((int)puVar8 == 0) {
    return puVar8;
  }
  if ((char)uStack_e8 == '\0') {
    if (uStack_e8._1_1_ == '\0') {
      uVar9 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_e0,uRam0000000003d2bfa0);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
        iVar6 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar8 = (undefined8 *)0x3d43408;
        goto joined_r0x01635680;
      }
      puVar8 = (undefined8 *)0x3d43408;
    }
    else {
      uVar9 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_c0,uRam0000000003d2c050);
      if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) == 0) {
        puVar8 = (undefined8 *)0x3d43420;
      }
      else {
        iVar6 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
        puVar8 = (undefined8 *)0x3d43420;
joined_r0x01635680:
        if (iVar6 == 0) {
          func_0x00f78ad0();
        }
      }
    }
  }
  else {
    uVar9 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_a0,uRam0000000003d2be18);
    if ((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) {
      iVar6 = *(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0);
      puVar8 = (undefined8 *)0x3d433e8;
      goto joined_r0x01635680;
    }
    puVar8 = (undefined8 *)0x3d433e8;
  }
  /*UnityEngine.AddressableAssets.Addressables$$Release<Sprite>*/ func_0x0171fc38(uVar9,*puVar8);
  if (*(long *)(lVar7 + 0x18) != 0) {
    /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$Remove*/ func_0x01e3174c(*(long *)(lVar7 + 0x18),uVar12,uRam0000000003d2e008);
    if (((*(long *)(lVar7 + 0x20) != 0) &&
        (/*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$Remove*/ func_0x01ec0ba4(*(long *)(lVar7 + 0x20),CONCAT44(uStack_f4,uStack_f8),uRam0000000003d2fac8)
        , lStack_108 != 0)) && (*(long *)(lStack_108 + 0x20) != 0)) {
      puVar8 = (undefined8 *)
               /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Remove*/ func_0x021cefec(*(long *)(lStack_108 + 0x20),uVar12,uRam0000000003d35c80);
      return puVar8;
    }
  }
code_r0x01635688:
  func_0x00f78af4();
  if ((bRam0000000003eb567a & 1) == 0) {
    func_0x00f78a20(0x3d26978);
    func_0x00f78a20(0x3d2feb0);
    func_0x00f78a20(0x3d35c68);
    func_0x00f78a20(0x3d1cdf8);
    bRam0000000003eb567a = 1;
  }
  puVar8 = (undefined8 *)func_0x00f78aec(/*Core.Assets.AssetManager.BucketInstance_TypeInfo*/ uRam0000000003d26978);
  return puVar8;
}



// ============================================================
// RVA: 0x1483a14 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen..ctor
// ============================================================

void Atlas_UI_Screens_LeagueWeeklyScheduleScreen___ctor(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb492c & 1) == 0) {
    func_0x00f78a20(0x3d2c798);
    func_0x00f78a20(0x3d2f2e0);
    func_0x00f78a20(0x3d1c400);
    func_0x00f78a20(0x3d3c620);
    func_0x00f78a20(0x3d1df60);
    bRam0000000003eb492c = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<MapDefinition, UILeagueDayPanelBehaviour>_TypeInfo*/ uRam0000000003d1c400);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar1,uRam0000000003d2f2e0);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<UILeagueDayPanelBehaviour>_TypeInfo*/ uRam0000000003d1df60);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3c620);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c798 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar5 = func_0x00f78af4();
  puVar3 = auVar5._8_8_;
  puVar2 = auVar5._0_8_;
  uVar4 = puVar3[1];
  uVar1 = *puVar3;
  puVar2[2] = puVar3[2];
  puVar2[1] = uVar4;
  *puVar2 = uVar1;
  return;
}



// ============================================================
// RVA: 0x1483af8 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen..cctor
// ============================================================

void Atlas_UI_Screens_LeagueWeeklyScheduleScreen___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb492d & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d22ea8);
    func_0x00f78a20(0x3d74f48);
    func_0x00f78a20(0x3d6cb98);
    func_0x00f78a20(0x3d6cb90);
    bRam0000000003eb492d = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_26_LeagueMode')*/ uRam0000000003d6cb90,0);
  **(undefined8 **)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8) = uVar2;
  uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_27_LeagueModeDemotion')*/ uRam0000000003d6cb98,0);
  lVar1 = /*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8;
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.LeagueWeeklyScheduleScreen_TypeInfo*/ lRam0000000003d22ea8 + 0xb8) + 8) = uVar2;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10) = /*STR('ToolTipData_FTUE_TOOLTIP_RETENTION_LEAGUE_06')*/ uRam0000000003d74f48;
  return;
}



