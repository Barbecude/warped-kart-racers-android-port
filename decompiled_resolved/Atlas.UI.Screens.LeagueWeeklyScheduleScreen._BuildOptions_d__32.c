// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<BuildOptions>d__32

// ============================================================
// RVA: 0x155cd88 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<BuildOptions>d__32..ctor
// ============================================================

void Atlas_UI_Screens_LeagueWeeklyScheduleScreen__BuildOptions_d__32___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x155cdb4 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<BuildOptions>d__32.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_LeagueWeeklyScheduleScreen__BuildOptions_d__32__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x155cdb8 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<BuildOptions>d__32.MoveNext
// ============================================================

long Atlas_UI_Screens_LeagueWeeklyScheduleScreen__BuildOptions_d__32__MoveNext(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000003eb4fb4 & 1) == 0) {
    func_0x00f78a20(0x3d51bd0);
    func_0x00f78a20(0x3d41140);
    func_0x00f78a20(0x3d6ba50);
    bRam0000000003eb4fb4 = 1;
  }
  lVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    uVar2 = 0xffffffff;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar5 == 0) goto LAB_0155cf38;
      lVar3 = 0;
      if (*(long *)(lVar5 + 0x78) == 0) goto LAB_0155cf38;
      /*Core.Assets.AssetManager$$TryGetLoadedAsset<object>*/ func_0x01818904(*(long *)(lVar5 + 0x78),*(undefined4 *)(lVar5 + 0x98),lVar5 + 0x90,
                      uRam0000000003d51bd0);
      uVar4 = Atlas_UI_Screens_LeagueWeeklyScheduleScreen__BuildMapPanels(lVar5,0);
      *(undefined8 *)(lVar5 + 0xa0) = uVar4;
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41140);
      lVar3 = 0;
      if (lVar5 == 0) goto LAB_0155cf38;
      lVar3 = 0;
      if (*(long *)(lVar5 + 0x80) == 0) goto LAB_0155cf38;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar5 + 0x80),1,0);
      uVar4 = 0;
      uVar2 = 2;
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar5 == 0) {
LAB_0155cf38:
        lVar3 = func_0x00f78af4(lVar3);
        return *(long *)(lVar3 + 0x18);
      }
      Atlas_UI_Screens_LeagueWeeklyScheduleScreen__PreSelectMap(lVar5,0);
      lVar6 = *(long *)(lVar5 + 0x78);
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41140);
      if ((lVar3 == 0) || (lVar6 == 0)) goto LAB_0155cf38;
      uVar2 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635f34(lVar6,*(undefined8 *)(lVar3 + 0x68),/*STR('Default')*/ uRam0000000003d6ba50,0,0,0);
      *(undefined4 *)(lVar5 + 0x98) = uVar2;
      lVar3 = 0;
      if (*(long *)(lVar5 + 0x78) == 0) goto LAB_0155cf38;
      uVar4 = /*Core.Assets.AssetManager$$WaitForAsset*/ func_0x01636f40(*(long *)(lVar5 + 0x78),uVar2,0);
      uVar2 = 1;
    }
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    lVar3 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  return lVar3;
}



// ============================================================
// RVA: 0x155cf3c | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<BuildOptions>d__32.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_LeagueWeeklyScheduleScreen__BuildOptions_d__32__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x155cf44 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<BuildOptions>d__32.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_LeagueWeeklyScheduleScreen__BuildOptions_d__32__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d635b8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x155cf84 | Atlas.UI.Screens.LeagueWeeklyScheduleScreen.<BuildOptions>d__32.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_LeagueWeeklyScheduleScreen__BuildOptions_d__32__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



