// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<OnBeforeEnterCoroutine>d__24

// ============================================================
// RVA: 0x155cf8c | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<OnBeforeEnterCoroutine>d__24..ctor
// ============================================================

void Atlas_UI_Screens_LeagueWeeklyScheduleScreen__OnBeforeEnterCoroutine_d__24___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x155cfb8 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<OnBeforeEnterCoroutine>d__24.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_LeagueWeeklyScheduleScreen__OnBeforeEnterCoroutine_d__24__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x155cfbc | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<OnBeforeEnterCoroutine>d__24.MoveNext
// ============================================================

ulong Atlas_UI_Screens_LeagueWeeklyScheduleScreen__OnBeforeEnterCoroutine_d__24__MoveNext
                (long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000003eb4fb5 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d2c7a0);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d59f20);
    func_0x00f78a20(0x3d59f28);
    func_0x00f78a20(0x3d59f30);
    func_0x00f78a20(0x3d59f38);
    func_0x00f78a20(0x3d41140);
    func_0x00f78a20(0x3d41150);
    bRam0000000003eb4fb5 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar8 != 0) && (lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d41150), lVar4 != 0)) {
      *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(lVar4 + 0x20);
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d41150);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar8 + 0x78) = *(undefined8 *)(lVar4 + 0x38);
        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d41150);
        if (lVar4 != 0) {
          *(undefined8 *)(lVar8 + 0x80) = *(undefined8 *)(lVar4 + 0x88);
          lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d41150);
          if (lVar4 != 0) {
            *(undefined8 *)(lVar8 + 0x88) = *(undefined8 *)(lVar4 + 0x48);
            lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d41150);
            if (lVar4 != 0) {
              *(undefined8 *)(lVar8 + 0xb0) = *(undefined8 *)(lVar4 + 0x50);
              lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d41150);
              if (lVar4 != 0) {
                *(undefined8 *)(lVar8 + 200) = *(undefined8 *)(lVar4 + 0xe8);
                lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d41150);
                if (lVar4 != 0) {
                  *(undefined8 *)(lVar8 + 0xd0) = *(undefined8 *)(lVar4 + 0x98);
                  if (*(long *)(lVar8 + 200) != 0) {
                    iVar3 = /*Atlas.League.LeagueManager$$CheckForDemotionAndApply*/ func_0x015f4618(*(long *)(lVar8 + 200),0);
                    if (iVar3 == 2) {
                      Atlas_UI_Screens_LeagueWeeklyScheduleScreen__ShowDemotionToolTip(lVar8,0);
                    }
                    else if (iVar3 == 1) {
                      Atlas_UI_Screens_LeagueWeeklyScheduleScreen__ShowDemotionWarningToolTip
                                (lVar8,0);
                    }
                    if (*(long *)(lVar8 + 200) != 0) {
                      /*Atlas.League.LeagueManager$$UpdateEventPlacementData*/ func_0x015ee9e4(*(long *)(lVar8 + 200),0);
                      if (*(long *)(lVar8 + 200) != 0) {
                        /*Atlas.League.LeagueManager$$UpdateLeagueStats*/ func_0x015f472c(*(long *)(lVar8 + 200),0);
                        Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData___ClearSelectedIfGamepad
                                  (lVar8,uRam0000000003d2c7a0);
                        lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41140);
                        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x80) != 0)) {
                          param_3 = (undefined8 *)0x0;
                          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar4 + 0x80),0);
                          lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar8,uRam0000000003d41150);
                          if (lVar4 != 0) {
                            lVar4 = *(long *)(lVar4 + 0xb8);
                            puVar5 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
                            puVar2 = puRam0000000003d59f20;
                            puVar5[2] = *puRam0000000003d59f20;
                            puVar5[4] = lVar8;
                            puVar5[5] = puVar2;
                            if (lVar4 != 0) {
                              /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar4,6,puVar5,0);
                              lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41140);
                              param_3 = puVar5;
                              if (lVar4 != 0) {
                                lVar4 = *(long *)(lVar4 + 0x90);
                                uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                param_3 = puRam0000000003d59f38;
                                /*System.Action$$.ctor*/ func_0x02924c80(uVar6,lVar8,puRam0000000003d59f38,0);
                                if (lVar4 != 0) {
                                  param_3 = (undefined8 *)0x0;
                                  /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar4,uVar6);
                                  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41140);
                                  if (lVar4 != 0) {
                                    lVar4 = *(long *)(lVar4 + 0x90);
                                    uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                    param_3 = puRam0000000003d59f28;
                                    /*System.Action$$.ctor*/ func_0x02924c80(uVar6,lVar8,puRam0000000003d59f28,0);
                                    if (lVar4 != 0) {
                                      param_3 = (undefined8 *)0x0;
                                      /*Atlas.UI.UIAtlasButton$$add_Selected*/ func_0x015141a0(lVar4,uVar6);
                                      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41140);
                                      if (lVar4 != 0) {
                                        lVar4 = *(long *)(lVar4 + 0x98);
                                        uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                        param_3 = puRam0000000003d59f30;
                                        /*System.Action$$.ctor*/ func_0x02924c80(uVar6,lVar8,puRam0000000003d59f30,0);
                                        if (lVar4 != 0) {
                                          param_3 = (undefined8 *)0x0;
                                          /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar4,uVar6);
                                          lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41140);
                                          if (lVar4 != 0) {
                                            lVar4 = *(long *)(lVar4 + 0x98);
                                            uVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                            param_3 = puRam0000000003d59f28;
                                            /*System.Action$$.ctor*/ func_0x02924c80(uVar6,lVar8,puRam0000000003d59f28,0);
                                            if (lVar4 != 0) {
                                              /*Atlas.UI.UIAtlasButton$$add_Selected*/ func_0x015141a0(lVar4,uVar6,0);
                                              uVar6 = 
                                                  Atlas_UI_Screens_LeagueWeeklyScheduleScreen__BuildOptions
                                                            (lVar8,0);
                                              *(undefined8 *)(param_1 + 0x18) = uVar6;
                                              *(undefined4 *)(param_1 + 0x10) = 1;
                                              goto LAB_0155d3b4;
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
  else {
    if (iVar1 != 1) {
LAB_0155d3b4:
      return (ulong)(iVar1 == 0);
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((lVar8 != 0) && (lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar8,uRam0000000003d41140), lVar8 != 0)) &&
       (*(long *)(lVar8 + 0x98) != 0)) {
      lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar8 + 0x98),0);
      /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      if (lVar8 != 0) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar8,0);
        goto LAB_0155d3b4;
      }
    }
  }
  auVar9 = func_0x00f78af4();
  uVar7 = auVar9._0_8_;
  *(undefined8 *)(uVar7 + 0x10) = *param_3;
  *(long *)(uVar7 + 0x20) = auVar9._8_8_;
  *(undefined8 **)(uVar7 + 0x28) = param_3;
  return uVar7;
}



// ============================================================
// RVA: 0x155d3e8 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<OnBeforeEnterCoroutine>d__24.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_LeagueWeeklyScheduleScreen__OnBeforeEnterCoroutine_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x155d3f0 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<OnBeforeEnterCoroutine>d__24.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_LeagueWeeklyScheduleScreen__OnBeforeEnterCoroutine_d__24__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d635c0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x155d430 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<OnBeforeEnterCoroutine>d__24.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_LeagueWeeklyScheduleScreen__OnBeforeEnterCoroutine_d__24__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



