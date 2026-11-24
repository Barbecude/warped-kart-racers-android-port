// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32

// ============================================================
// RVA: 0x155b0e8 | Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32..ctor
// ============================================================

void Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideIn_d__32___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x155b114 | Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideIn_d__32__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x155b118 | Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32.MoveNext
// ============================================================

ulong Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideIn_d__32__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  if ((bRam0000000003eb4faa & 1) == 0) {
    func_0x00f78a20(0x3d410e0);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d25a68);
    func_0x00f78a20(0x3d7b868);
    func_0x00f78a20(0x3d78fd8);
    bRam0000000003eb4faa = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x78) == 0)) {
LAB_0155b294:
      lVar4 = func_0x00f78af4();
      return *(ulong *)(lVar4 + 0x18);
    }
    /*Atlas.League.LeagueManager$$PrepareLeaderboardData*/ func_0x015efd44(*(long *)(lVar4 + 0x78),0);
    Atlas_UI_Screens_LeagueLeaderboardScreen__SetRowData(lVar4,*(undefined8 *)(lVar4 + 0x98),0);
    uVar6 = *(undefined4 *)(param_1 + 0x28);
    uVar3 = func_0x00f78aec(/*UnityEngine.WaitForSeconds_TypeInfo*/ uRam0000000003d25a68);
    /*UnityEngine.WaitForSeconds$$.ctor*/ func_0x0327dcd0(uVar6,uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar4 == 0) || (lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d410e0), lVar2 == 0))
    goto LAB_0155b294;
    uVar5 = *(undefined8 *)(lVar2 + 0x68);
    uVar3 = *(undefined8 *)(lVar4 + 0x80);
    if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('slidein')*/ uRam0000000003d7b868,uVar5,0,0,uVar3,0);
    /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/Dotween_SlideIn')*/ uRam0000000003d78fd8,0);
  }
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x155b298 | Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideIn_d__32__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x155b2a0 | Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideIn_d__32__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63560);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x155b2e0 | Atlas.UI.Screens.LeagueLeaderboardScreen.<PlaySlideIn>d__32.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_LeagueLeaderboardScreen__PlaySlideIn_d__32__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



