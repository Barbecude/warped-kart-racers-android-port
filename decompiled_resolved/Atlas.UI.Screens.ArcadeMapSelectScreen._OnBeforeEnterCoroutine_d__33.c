// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.ArcadeMapSelectScreen.<OnBeforeEnterCoroutine>d__33

// ============================================================
// RVA: 0x1534094 | Atlas.UI.Screens.ArcadeMapSelectScreen.<OnBeforeEnterCoroutine>d__33..ctor
// ============================================================

void Atlas_UI_Screens_ArcadeMapSelectScreen__OnBeforeEnterCoroutine_d__33___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15340c0 | Atlas.UI.Screens.ArcadeMapSelectScreen.<OnBeforeEnterCoroutine>d__33.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_ArcadeMapSelectScreen__OnBeforeEnterCoroutine_d__33__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x15340c4 | Atlas.UI.Screens.ArcadeMapSelectScreen.<OnBeforeEnterCoroutine>d__33.MoveNext
// ============================================================

ulong Atlas_UI_Screens_ArcadeMapSelectScreen__OnBeforeEnterCoroutine_d__33__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  
  if ((bRam0000000003eb4eba & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d436d8);
    func_0x00f78a20(0x3d436e0);
    func_0x00f78a20(0x3d2c688);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d2db98);
    func_0x00f78a20(0x3d2e498);
    func_0x00f78a20(0x3d40fa0);
    func_0x00f78a20(0x3d40fb0);
    bRam0000000003eb4eba = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar4 == 0) || (lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d40fb0), lVar2 == 0)) {
code_r0x015343b4:
      lVar4 = func_0x00f78af4();
      return *(ulong *)(lVar4 + 0x18);
    }
    *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(lVar2 + 0x20);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d40fb0);
    if (lVar2 == 0) goto code_r0x015343b4;
    *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar2 + 0x38);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d40fb0);
    if (lVar2 == 0) goto code_r0x015343b4;
    *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(lVar2 + 0x88);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d40fb0);
    if (lVar2 == 0) goto code_r0x015343b4;
    *(undefined8 *)(lVar4 + 0x88) = *(undefined8 *)(lVar2 + 0xd0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d40fb0);
    if (lVar2 == 0) goto code_r0x015343b4;
    *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(lVar2 + 0x48);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d40fb0);
    if (lVar2 == 0) goto code_r0x015343b4;
    *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(lVar2 + 0x50);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d40fb0);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x100) == 0)) goto code_r0x015343b4;
    lVar2 = /*Atlas.Definitions.MetagameDefinition$$get_ArcadeDefinitionRef*/ func_0x014948e8(*(long *)(lVar2 + 0x100),0);
    *(undefined8 *)(lVar4 + 0xb8) = *(undefined8 *)(lVar2 + 8);
    /*Atlas.UI.Screens.AtlasScreen<SeasonsScreenBehaviour, SeasonsScreen.TransitionData>$$ClearSelectedIfGamepad*/ func_0x01cb5720(lVar4,uRam0000000003d2c688);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d40fa0);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x78) == 0)) goto code_r0x015343b4;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x78),0,0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d40fb0);
    if (lVar2 == 0) goto code_r0x015343b4;
    lVar2 = *(long *)(lVar2 + 0xb8);
    uVar3 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
    /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(uVar3,lVar4,uRam0000000003d436d8,0);
    if (lVar2 == 0) goto code_r0x015343b4;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar2,6,uVar3,0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d40fa0);
    if (lVar2 == 0) goto code_r0x015343b4;
    lVar2 = *(long *)(lVar2 + 0x90);
    uVar3 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar3,lVar4,uRam0000000003d436e0,0);
    if (lVar2 == 0) goto code_r0x015343b4;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar2,uVar3,0);
    if (*(long *)(lVar4 + 0xf8) == 0) goto code_r0x015343b4;
    /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(*(long *)(lVar4 + 0xf8),6,0,uRam0000000003d2e498);
    if (*(long *)(lVar4 + 0xf8) == 0) goto code_r0x015343b4;
    /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(*(long *)(lVar4 + 0xf8),8,0,uRam0000000003d2e498);
    if (*(long *)(lVar4 + 0xf8) == 0) goto code_r0x015343b4;
    uVar5 = 1;
    /*System.Collections.Generic.Dictionary<ArcadeEventDefinition.Medal, int>$$Add*/ func_0x01e9e3e4(*(long *)(lVar4 + 0xf8),7,1,uRam0000000003d2e498);
    uVar3 = Atlas_UI_Screens_ArcadeMapSelectScreen__BuildOptions(lVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  else {
    if (iVar1 != 1) goto LAB_01534398;
    uVar5 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar5;
LAB_01534398:
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x15343b8 | Atlas.UI.Screens.ArcadeMapSelectScreen.<OnBeforeEnterCoroutine>d__33.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_ArcadeMapSelectScreen__OnBeforeEnterCoroutine_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15343c0 | Atlas.UI.Screens.ArcadeMapSelectScreen.<OnBeforeEnterCoroutine>d__33.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_ArcadeMapSelectScreen__OnBeforeEnterCoroutine_d__33__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62028);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1534400 | Atlas.UI.Screens.ArcadeMapSelectScreen.<OnBeforeEnterCoroutine>d__33.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_ArcadeMapSelectScreen__OnBeforeEnterCoroutine_d__33__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



