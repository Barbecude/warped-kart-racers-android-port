// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.FreeplayScreen.<OnBeforeEnterCoroutine>d__10

// ============================================================
// RVA: 0x154cfe0 | Atlas.UI.Screens.FreeplayScreen.<OnBeforeEnterCoroutine>d__10..ctor
// ============================================================

void Atlas_UI_Screens_FreeplayScreen__OnBeforeEnterCoroutine_d__10___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x154d00c | Atlas.UI.Screens.FreeplayScreen.<OnBeforeEnterCoroutine>d__10.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_FreeplayScreen__OnBeforeEnterCoroutine_d__10__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x154d010 | Atlas.UI.Screens.FreeplayScreen.<OnBeforeEnterCoroutine>d__10.MoveNext
// ============================================================

ulong Atlas_UI_Screens_FreeplayScreen__OnBeforeEnterCoroutine_d__10__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  if ((bRam0000000003eb4f7d & 1) == 0) {
    func_0x00f78a20(0x3d2c708);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d56b60);
    func_0x00f78a20(0x3d41050);
    func_0x00f78a20(0x3d41060);
    bRam0000000003eb4f7d = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar5 == 0) || (lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d41060), lVar2 == 0)) {
code_r0x0154d1d4:
      lVar5 = func_0x00f78af4();
      return *(ulong *)(lVar5 + 0x18);
    }
    *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(lVar2 + 0x20);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d41060);
    if (lVar2 == 0) goto code_r0x0154d1d4;
    *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar2 + 0x38);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d41060);
    if (lVar2 == 0) goto code_r0x0154d1d4;
    *(undefined8 *)(lVar5 + 0x80) = *(undefined8 *)(lVar2 + 0x88);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d41060);
    if (lVar2 == 0) goto code_r0x0154d1d4;
    *(undefined8 *)(lVar5 + 0x88) = *(undefined8 *)(lVar2 + 0xd0);
    Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData___ClearSelectedIfGamepad
              (lVar5,uRam0000000003d2c708);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41050);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x78) == 0)) goto code_r0x0154d1d4;
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x78),0,0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar5,uRam0000000003d41060);
    if (lVar2 == 0) goto code_r0x0154d1d4;
    lVar2 = *(long *)(lVar2 + 0xb8);
    uVar3 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
    /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(uVar3,lVar5,uRam0000000003d56b60,0);
    if (lVar2 == 0) goto code_r0x0154d1d4;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar2,6,uVar3,0);
    uVar3 = Atlas_UI_Screens_FreeplayScreen__BuildFreeplayOptions(lVar5,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar4 = 1;
  }
  else {
    if (iVar1 != 1) goto LAB_0154d1b8;
    uVar4 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
LAB_0154d1b8:
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x154d1d8 | Atlas.UI.Screens.FreeplayScreen.<OnBeforeEnterCoroutine>d__10.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_FreeplayScreen__OnBeforeEnterCoroutine_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x154d1e0 | Atlas.UI.Screens.FreeplayScreen.<OnBeforeEnterCoroutine>d__10.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_FreeplayScreen__OnBeforeEnterCoroutine_d__10__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62e28);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x154d220 | Atlas.UI.Screens.FreeplayScreen.<OnBeforeEnterCoroutine>d__10.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_FreeplayScreen__OnBeforeEnterCoroutine_d__10__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



