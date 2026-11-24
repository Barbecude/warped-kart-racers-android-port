// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.GameArcadeOutroScreenBehaviour

// ============================================================
// RVA: 0x1598174 | Atlas.UI.Screens.GameArcadeOutroScreenBehaviour.get_PlayerInfoRootTransform
// ============================================================

undefined8
Atlas_UI_Screens_GameArcadeOutroScreenBehaviour__get_PlayerInfoRootTransform(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x159817c | Atlas.UI.Screens.GameArcadeOutroScreenBehaviour.get_PlacementRootTransform
// ============================================================

undefined8 Atlas_UI_Screens_GameArcadeOutroScreenBehaviour__get_PlacementRootTransform(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x1598184 | Atlas.UI.Screens.GameArcadeOutroScreenBehaviour.get_PlayerInfoTimeMedalBehaviour
// ============================================================

undefined8
Atlas_UI_Screens_GameArcadeOutroScreenBehaviour__get_PlayerInfoTimeMedalBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x159818c | Atlas.UI.Screens.GameArcadeOutroScreenBehaviour.get_PlacementTimeMedalBehaviour
// ============================================================

undefined8
Atlas_UI_Screens_GameArcadeOutroScreenBehaviour__get_PlacementTimeMedalBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x1598194 | Atlas.UI.Screens.GameArcadeOutroScreenBehaviour.get_PlacementNextMedalBehaviour
// ============================================================

undefined8
Atlas_UI_Screens_GameArcadeOutroScreenBehaviour__get_PlacementNextMedalBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x159819c | Atlas.UI.Screens.GameArcadeOutroScreenBehaviour.get_MedalText
// ============================================================

undefined8 Atlas_UI_Screens_GameArcadeOutroScreenBehaviour__get_MedalText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x15981a4 | Atlas.UI.Screens.GameArcadeOutroScreenBehaviour.get_FinishCameraHoldTime
// ============================================================

undefined4 Atlas_UI_Screens_GameArcadeOutroScreenBehaviour__get_FinishCameraHoldTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x15981ac | Atlas.UI.Screens.GameArcadeOutroScreenBehaviour.get_AutoDriveCameraChangeDelay
// ============================================================

undefined4
Atlas_UI_Screens_GameArcadeOutroScreenBehaviour__get_AutoDriveCameraChangeDelay(long param_1)

{
  return *(undefined4 *)(param_1 + 0x9c);
}



// ============================================================
// RVA: 0x15981b4 | Atlas.UI.Screens.GameArcadeOutroScreenBehaviour.get_AutoDriveCameraChangeIntervalMin
// ============================================================

undefined4
Atlas_UI_Screens_GameArcadeOutroScreenBehaviour__get_AutoDriveCameraChangeIntervalMin(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x15981bc | Atlas.UI.Screens.GameArcadeOutroScreenBehaviour.get_AutoDriveCameraChangeIntervalMax
// ============================================================

undefined4
Atlas_UI_Screens_GameArcadeOutroScreenBehaviour__get_AutoDriveCameraChangeIntervalMax(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa4);
}



// ============================================================
// RVA: 0x15981c4 | Atlas.UI.Screens.GameArcadeOutroScreenBehaviour.OnBeforeDestroyed
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

undefined4 Atlas_UI_Screens_GameArcadeOutroScreenBehaviour__OnBeforeDestroyed(long param_1)

{
  undefined4 uVar1;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,param_1,0,0,0,0,in_x7,unaff_x22,unaff_x21,unaff_x20,unaff_x19,
                            unaff_x29,unaff_x30);
  }
  return uVar1;
}



// ============================================================
// RVA: 0x15981d0 | Atlas.UI.Screens.GameArcadeOutroScreenBehaviour.PlayTweensOnStart
// ============================================================

undefined8 Atlas_UI_Screens_GameArcadeOutroScreenBehaviour__PlayTweensOnStart(void)

{
  return 0;
}



// ============================================================
// RVA: 0x15981d8 | Atlas.UI.Screens.GameArcadeOutroScreenBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_GameArcadeOutroScreenBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
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



