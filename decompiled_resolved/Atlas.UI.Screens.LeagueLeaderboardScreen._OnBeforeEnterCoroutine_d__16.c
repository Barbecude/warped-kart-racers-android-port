// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeagueLeaderboardScreen.<OnBeforeEnterCoroutine>d__16

// ============================================================
// RVA: 0x155af98 | Atlas.UI.Screens.LeagueLeaderboardScreen.<OnBeforeEnterCoroutine>d__16..ctor
// ============================================================

void Atlas_UI_Screens_LeagueLeaderboardScreen__OnBeforeEnterCoroutine_d__16___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x155afc4 | Atlas.UI.Screens.LeagueLeaderboardScreen.<OnBeforeEnterCoroutine>d__16.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_LeagueLeaderboardScreen__OnBeforeEnterCoroutine_d__16__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x155afc8 | Atlas.UI.Screens.LeagueLeaderboardScreen.<OnBeforeEnterCoroutine>d__16.MoveNext
// ============================================================

ulong Atlas_UI_Screens_LeagueLeaderboardScreen__OnBeforeEnterCoroutine_d__16__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  if ((bRam0000000003eb4fa9 & 1) == 0) {
    func_0x00f78a20(0x3d2c758);
    func_0x00f78a20(0x3d410f0);
    bRam0000000003eb4fa9 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar5 == 0) || (lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d410f0), lVar2 == 0)) {
      lVar5 = func_0x00f78af4();
      return *(ulong *)(lVar5 + 0x18);
    }
    *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar2 + 0xe8);
    Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData___ClearSelectedIfGamepad
              (lVar5,uRam0000000003d2c758);
    uVar3 = Atlas_UI_Screens_LeagueLeaderboardScreen__BuildOptions(lVar5,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar4 = 1;
  }
  else {
    if (iVar1 != 1) goto LAB_0155b07c;
    uVar4 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
LAB_0155b07c:
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x155b098 | Atlas.UI.Screens.LeagueLeaderboardScreen.<OnBeforeEnterCoroutine>d__16.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_LeagueLeaderboardScreen__OnBeforeEnterCoroutine_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x155b0a0 | Atlas.UI.Screens.LeagueLeaderboardScreen.<OnBeforeEnterCoroutine>d__16.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_LeagueLeaderboardScreen__OnBeforeEnterCoroutine_d__16__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63558);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x155b0e0 | Atlas.UI.Screens.LeagueLeaderboardScreen.<OnBeforeEnterCoroutine>d__16.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_LeagueLeaderboardScreen__OnBeforeEnterCoroutine_d__16__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



