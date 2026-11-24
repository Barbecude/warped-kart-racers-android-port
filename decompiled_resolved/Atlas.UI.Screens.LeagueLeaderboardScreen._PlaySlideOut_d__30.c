// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30

// ============================================================
// RVA: 0x155b2e8 | Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30..ctor
// ============================================================

void Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideOut_d__30___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x155b314 | Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideOut_d__30__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x155b318 | Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30.MoveNext
// ============================================================

ulong Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideOut_d__30__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if ((bRam0000000003eb4fab & 1) == 0) {
    func_0x00f78a20(0x3d59df8);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d410e0);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d25a68);
    func_0x00f78a20(0x3d7b870);
    bRam0000000003eb4fab = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar7 = *(undefined4 *)(param_1 + 0x20);
    uVar3 = func_0x00f78aec(/*UnityEngine.WaitForSeconds_TypeInfo*/ uRam0000000003d25a68);
    /*UnityEngine.WaitForSeconds$$.ctor*/ func_0x0327dcd0(uVar7,uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    lVar5 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar5 == 0) || (lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d410e0), lVar2 == 0)) {
      lVar5 = func_0x00f78af4();
      return *(ulong *)(lVar5 + 0x18);
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x68);
    uVar3 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar3,lVar5,uRam0000000003d59df8,0);
    uVar6 = *(undefined8 *)(lVar5 + 0x80);
    if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('slideout')*/ uRam0000000003d7b870,uVar4,0,uVar3,uVar6,0);
  }
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x155b498 | Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideOut_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x155b4a0 | Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideOut_d__30__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63568);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x155b4e0 | Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideOut>d__30.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideOut_d__30__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



