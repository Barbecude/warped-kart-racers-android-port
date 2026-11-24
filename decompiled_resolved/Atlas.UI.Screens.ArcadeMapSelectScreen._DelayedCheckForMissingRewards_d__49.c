// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.ArcadeMapSelectScreen.<DelayedCheckForMissingRewards>d__49

// ============================================================
// RVA: 0x1533f04 | Atlas.UI.Screens.ArcadeMapSelectScreen.<DelayedCheckForMissingRewards>d__49..ctor
// ============================================================

void Atlas_UI_Screens_ArcadeMapSelectScreen__DelayedCheckForMissingRewards_d__49___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1533f30 | Atlas.UI.Screens.ArcadeMapSelectScreen.<DelayedCheckForMissingRewards>d__49.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_ArcadeMapSelectScreen__DelayedCheckForMissingRewards_d__49__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x1533f34 | Atlas.UI.Screens.ArcadeMapSelectScreen.<DelayedCheckForMissingRewards>d__49.MoveNext
// ============================================================

ulong Atlas_UI_Screens_ArcadeMapSelectScreen__DelayedCheckForMissingRewards_d__49__MoveNext
                (long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  if ((bRam0000000003eb4eb9 & 1) == 0) {
    func_0x00f78a20(0x3d40fa0);
    func_0x00f78a20(0x3d25a68);
    bRam0000000003eb4eb9 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x28);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 != 0) {
      iVar2 = *(int *)(param_1 + 0x20);
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar3,uRam0000000003d40fa0);
      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 200), lVar3 != 0)) {
        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) goto code_r0x01534038;
        if (*(long *)(lVar3 + 0x28) != 0) {
          fVar5 = *(float *)(*(long *)(lVar3 + 0x28) + 0x60);
          uVar4 = func_0x00f78aec(/*UnityEngine.WaitForSeconds_TypeInfo*/ uRam0000000003d25a68);
          /*UnityEngine.WaitForSeconds$$.ctor*/ func_0x0327dcd0(fVar5 * (float)iVar2,uVar4,0);
          *(undefined8 *)(param_1 + 0x18) = uVar4;
          *(undefined4 *)(param_1 + 0x10) = 1;
          goto LAB_01534018;
        }
      }
    }
  }
  else {
    if (iVar1 != 1) {
LAB_01534018:
      return (ulong)(iVar1 == 0);
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0xd0) = 1;
      goto LAB_01534018;
    }
  }
  func_0x00f78af4();
code_r0x01534038:
  uVar4 = func_0x00f78b24();
  lVar3 = func_0x00f78ac0(uVar4,0);
  return *(ulong *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1534044 | Atlas.UI.Screens.ArcadeMapSelectScreen.<DelayedCheckForMissingRewards>d__49.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_ArcadeMapSelectScreen__DelayedCheckForMissingRewards_d__49__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x153404c | Atlas.UI.Screens.ArcadeMapSelectScreen.<DelayedCheckForMissingRewards>d__49.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_ArcadeMapSelectScreen__DelayedCheckForMissingRewards_d__49__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62020);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x153408c | Atlas.UI.Screens.ArcadeMapSelectScreen.<DelayedCheckForMissingRewards>d__49.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_ArcadeMapSelectScreen__DelayedCheckForMissingRewards_d__49__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



