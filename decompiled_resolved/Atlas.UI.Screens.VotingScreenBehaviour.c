// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.VotingScreenBehaviour

// ============================================================
// RVA: 0x152caec | Atlas.UI.Screens.VotingScreenBehaviour.GetVoteChoice
// ============================================================

undefined8 Atlas_UI_Screens_VotingScreenBehaviour__GetVoteChoice(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar2 + 0x18)) {
    return *(undefined8 *)(lVar2 + (long)(int)param_2 * 8 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  uVar1 = func_0x00f78ac0(uVar1,0);
  return uVar1;
}



// ============================================================
// RVA: 0x152f574 | Atlas.UI.Screens.VotingScreenBehaviour.get_Timer
// ============================================================

undefined8 Atlas_UI_Screens_VotingScreenBehaviour__get_Timer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x152f57c | Atlas.UI.Screens.VotingScreenBehaviour.get_VoteIconRef
// ============================================================

undefined8 Atlas_UI_Screens_VotingScreenBehaviour__get_VoteIconRef(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x152f584 | Atlas.UI.Screens.VotingScreenBehaviour.set_UITimer
// ============================================================

void Atlas_UI_Screens_VotingScreenBehaviour__set_UITimer(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x80) = param_2;
  return;
}



// ============================================================
// RVA: 0x152f58c | Atlas.UI.Screens.VotingScreenBehaviour.get_TweenTarget
// ============================================================

undefined8 Atlas_UI_Screens_VotingScreenBehaviour__get_TweenTarget(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



// ============================================================
// RVA: 0x152f594 | Atlas.UI.Screens.VotingScreenBehaviour.get_TimerCanvas
// ============================================================

undefined8 Atlas_UI_Screens_VotingScreenBehaviour__get_TimerCanvas(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x152f59c | Atlas.UI.Screens.VotingScreenBehaviour.get_ControllerGlyphObject
// ============================================================

undefined8 Atlas_UI_Screens_VotingScreenBehaviour__get_ControllerGlyphObject(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x152f5a4 | Atlas.UI.Screens.VotingScreenBehaviour.get_FadeTime
// ============================================================

undefined4 Atlas_UI_Screens_VotingScreenBehaviour__get_FadeTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb8);
}



// ============================================================
// RVA: 0x152f5ac | Atlas.UI.Screens.VotingScreenBehaviour.get_TweenTime
// ============================================================

undefined4 Atlas_UI_Screens_VotingScreenBehaviour__get_TweenTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



// ============================================================
// RVA: 0x152f5b4 | Atlas.UI.Screens.VotingScreenBehaviour.get_WinningVoteCurve
// ============================================================

undefined4 Atlas_UI_Screens_VotingScreenBehaviour__get_WinningVoteCurve(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb4);
}



// ============================================================
// RVA: 0x152f5bc | Atlas.UI.Screens.VotingScreenBehaviour.get_WinningVoteAnimParams
// ============================================================

undefined8 Atlas_UI_Screens_VotingScreenBehaviour__get_WinningVoteAnimParams(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



// ============================================================
// RVA: 0x152f5c4 | Atlas.UI.Screens.VotingScreenBehaviour.get_TitleTieVoteAnimParams
// ============================================================

undefined8 Atlas_UI_Screens_VotingScreenBehaviour__get_TitleTieVoteAnimParams(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x152f5cc | Atlas.UI.Screens.VotingScreenBehaviour.get_TitleText
// ============================================================

undefined8 Atlas_UI_Screens_VotingScreenBehaviour__get_TitleText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x152f5d4 | Atlas.UI.Screens.VotingScreenBehaviour.get_TitleTextMeasurement
// ============================================================

undefined8 Atlas_UI_Screens_VotingScreenBehaviour__get_TitleTextMeasurement(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x152f5dc | Atlas.UI.Screens.VotingScreenBehaviour.get_PickGameLocalisationKey
// ============================================================

undefined8 Atlas_UI_Screens_VotingScreenBehaviour__get_PickGameLocalisationKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



// ============================================================
// RVA: 0x152f5e4 | Atlas.UI.Screens.VotingScreenBehaviour.get_NextModeLocalisationKey
// ============================================================

undefined8 Atlas_UI_Screens_VotingScreenBehaviour__get_NextModeLocalisationKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



// ============================================================
// RVA: 0x152f5ec | Atlas.UI.Screens.VotingScreenBehaviour.get_TieLocalisationKey
// ============================================================

undefined8 Atlas_UI_Screens_VotingScreenBehaviour__get_TieLocalisationKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



// ============================================================
// RVA: 0x152f5f4 | Atlas.UI.Screens.VotingScreenBehaviour.get_TieTextColour
// ============================================================

undefined4 Atlas_UI_Screens_VotingScreenBehaviour__get_TieTextColour(long param_1)

{
  return *(undefined4 *)(param_1 + 0xe8);
}



// ============================================================
// RVA: 0x152f600 | Atlas.UI.Screens.VotingScreenBehaviour.get_NormalTextColour
// ============================================================

undefined4 Atlas_UI_Screens_VotingScreenBehaviour__get_NormalTextColour(long param_1)

{
  return *(undefined4 *)(param_1 + 0xf8);
}



// ============================================================
// RVA: 0x152f610 | Atlas.UI.Screens.VotingScreenBehaviour.get_VoteMadeTweenTime
// ============================================================

undefined4 Atlas_UI_Screens_VotingScreenBehaviour__get_VoteMadeTweenTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0xcc);
}



// ============================================================
// RVA: 0x152f618 | Atlas.UI.Screens.VotingScreenBehaviour.get_VoteMadeScale
// ============================================================

undefined4 Atlas_UI_Screens_VotingScreenBehaviour__get_VoteMadeScale(long param_1)

{
  return *(undefined4 *)(param_1 + 200);
}



// ============================================================
// RVA: 0x152f620 | Atlas.UI.Screens.VotingScreenBehaviour..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Atlas_UI_Screens_VotingScreenBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4e92 & 1) == 0) {
    func_0x00f78a20(0x3d1f920);
    bRam0000000003eb4e92 = 1;
  }
  uVar1 = func_0x00f78a34(/*Atlas.UI.Screens.VotingScreenBehaviour.VoteChoice[]_TypeInfo*/ uRam0000000003d1f920,2);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  *(undefined8 *)(param_1 + 0xb0) = 0x93f800000;
  *(undefined4 *)(param_1 + 0xb8) = 0x3e99999a;
  *(undefined8 *)(param_1 + 200) = _UNK_033f87b0;
  if ((bRam0000000003eb4872 & 1) == 0) {
    func_0x00f78a20(0x3d3dc88,0);
    func_0x00f78a20(0x3d1e380);
    func_0x00f78a20(0x3d255d8);
    bRam0000000003eb4872 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 100) = 1;
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



