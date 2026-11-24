// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeagueLeaderboardScreen.<BuildOptions>d__19

// ============================================================
// RVA: 0x155ae6c | Atlas.UI.Screens.LeagueLeaderboardScreen.<BuildOptions>d__19..ctor
// ============================================================

void Atlas_UI_Screens_LeagueLeaderboardScreen__BuildOptions_d__19___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x155ae98 | Atlas.UI.Screens.LeagueLeaderboardScreen.<BuildOptions>d__19.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_LeagueLeaderboardScreen__BuildOptions_d__19__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x155ae9c | Atlas.UI.Screens.LeagueLeaderboardScreen.<BuildOptions>d__19.MoveNext
// ============================================================

ulong Atlas_UI_Screens_LeagueLeaderboardScreen__BuildOptions_d__19__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((bRam0000000003eb4fa8 & 1) == 0) {
    func_0x00f78a20(0x3d410e0);
    bRam0000000003eb4fa8 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((*(long *)(param_1 + 0x20) == 0) ||
        (lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(*(long *)(param_1 + 0x20),uRam0000000003d410e0), lVar2 == 0)) ||
       (*(long *)(lVar2 + 0x80) == 0)) {
      lVar2 = func_0x00f78af4();
      return *(ulong *)(lVar2 + 0x18);
    }
    uVar3 = 1;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x80),1,0);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    if (iVar1 != 1) goto LAB_0155af2c;
    uVar3 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar3;
LAB_0155af2c:
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x155af48 | Atlas.UI.Screens.LeagueLeaderboardScreen.<BuildOptions>d__19.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_LeagueLeaderboardScreen__BuildOptions_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x155af50 | Atlas.UI.Screens.LeagueLeaderboardScreen.<BuildOptions>d__19.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_LeagueLeaderboardScreen__BuildOptions_d__19__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63550);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x155af90 | Atlas.UI.Screens.LeagueLeaderboardScreen.<BuildOptions>d__19.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_LeagueLeaderboardScreen__BuildOptions_d__19__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



