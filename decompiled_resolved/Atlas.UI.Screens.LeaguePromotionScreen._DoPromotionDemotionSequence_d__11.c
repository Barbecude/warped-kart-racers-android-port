// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeaguePromotionScreen.<DoPromotionDemotionSequence>d__11

// ============================================================
// RVA: 0x155c818 | Atlas.UI.Screens.LeaguePromotionScreen.<DoPromotionDemotionSequence>d__11..ctor
// ============================================================

void Atlas_UI_Screens_LeaguePromotionScreen__DoPromotionDemotionSequence_d__11___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x155c844 | Atlas.UI.Screens.LeaguePromotionScreen.<DoPromotionDemotionSequence>d__11.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_LeaguePromotionScreen__DoPromotionDemotionSequence_d__11__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x155c848 | Atlas.UI.Screens.LeaguePromotionScreen.<DoPromotionDemotionSequence>d__11.MoveNext
// ============================================================

undefined8
Atlas_UI_Screens_LeaguePromotionScreen__DoPromotionDemotionSequence_d__11__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb4fb3 & 1) == 0) {
    func_0x00f78a20(0x3d41110);
    func_0x00f78a20(0x3d41120);
    func_0x00f78a20(0x3d25a68);
    bRam0000000003eb4fb3 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((lVar2 == 0) || (lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar2,uRam0000000003d41120), lVar2 == 0)) ||
       (*(long *)(lVar2 + 0xb8) == 0)) goto code_r0x0155c98c;
    /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar2 + 0xb8),6,1,1,0);
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar2 != 0) && (lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar2,uRam0000000003d41110), lVar2 != 0)) {
        Atlas_UI_Screens_LeaguePromotionBehaviour__AnimateHeader(lVar2,0);
        uVar3 = func_0x00f78aec(/*UnityEngine.WaitForSeconds_TypeInfo*/ uRam0000000003d25a68);
        /*UnityEngine.WaitForSeconds$$.ctor*/ func_0x0327dcd0(0x3fa00000,uVar3,0);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        *(undefined4 *)(param_1 + 0x10) = 2;
        return 1;
      }
code_r0x0155c98c:
      lVar2 = func_0x00f78af4();
      return *(undefined8 *)(lVar2 + 0x18);
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar3 = func_0x00f78aec(/*UnityEngine.WaitForSeconds_TypeInfo*/ uRam0000000003d25a68);
      /*UnityEngine.WaitForSeconds$$.ctor*/ func_0x0327dcd0(0x3e800000,uVar3,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x155c990 | Atlas.UI.Screens.LeaguePromotionScreen.<DoPromotionDemotionSequence>d__11.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_LeaguePromotionScreen__DoPromotionDemotionSequence_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x155c998 | Atlas.UI.Screens.LeaguePromotionScreen.<DoPromotionDemotionSequence>d__11.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_LeaguePromotionScreen__DoPromotionDemotionSequence_d__11__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63598);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x155c9d8 | Atlas.UI.Screens.LeaguePromotionScreen.<DoPromotionDemotionSequence>d__11.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_LeaguePromotionScreen__DoPromotionDemotionSequence_d__11__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



