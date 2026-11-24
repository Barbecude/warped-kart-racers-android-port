// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.GameIntroScreenBehaviour

// ============================================================
// RVA: 0x15af1e8 | Atlas.UI.Screens.GameIntroScreenBehaviour.get_CountdownGameObject
// ============================================================

undefined8 Atlas_UI_Screens_GameIntroScreenBehaviour__get_CountdownGameObject(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x15af1f0 | Atlas.UI.Screens.GameIntroScreenBehaviour.get_BannerGameObject
// ============================================================

undefined8 Atlas_UI_Screens_GameIntroScreenBehaviour__get_BannerGameObject(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x15af1f8 | Atlas.UI.Screens.GameIntroScreenBehaviour.get_BannerAnimator
// ============================================================

undefined8 Atlas_UI_Screens_GameIntroScreenBehaviour__get_BannerAnimator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x15af200 | Atlas.UI.Screens.GameIntroScreenBehaviour.get_BannerBackgroundElement
// ============================================================

undefined8 Atlas_UI_Screens_GameIntroScreenBehaviour__get_BannerBackgroundElement(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x15af208 | Atlas.UI.Screens.GameIntroScreenBehaviour.get_MapViewBehaviour
// ============================================================

undefined8 Atlas_UI_Screens_GameIntroScreenBehaviour__get_MapViewBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x15af210 | Atlas.UI.Screens.GameIntroScreenBehaviour.get_PickupBoxViewBehaviour
// ============================================================

undefined8 Atlas_UI_Screens_GameIntroScreenBehaviour__get_PickupBoxViewBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x15af218 | Atlas.UI.Screens.GameIntroScreenBehaviour.get_ArcadeRootTransform
// ============================================================

undefined8 Atlas_UI_Screens_GameIntroScreenBehaviour__get_ArcadeRootTransform(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x15af220 | Atlas.UI.Screens.GameIntroScreenBehaviour.get_ArcadeTimeMedalBehaviour
// ============================================================

undefined8 Atlas_UI_Screens_GameIntroScreenBehaviour__get_ArcadeTimeMedalBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x15af228 | Atlas.UI.Screens.GameIntroScreenBehaviour.get_ArcadeNextMedalBehaviour
// ============================================================

undefined8 Atlas_UI_Screens_GameIntroScreenBehaviour__get_ArcadeNextMedalBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



// ============================================================
// RVA: 0x15af230 | Atlas.UI.Screens.GameIntroScreenBehaviour.get_ArcadeModeBehaviour
// ============================================================

undefined8 Atlas_UI_Screens_GameIntroScreenBehaviour__get_ArcadeModeBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



// ============================================================
// RVA: 0x15af238 | Atlas.UI.Screens.GameIntroScreenBehaviour.get_GameRulesGameObject
// ============================================================

undefined8 Atlas_UI_Screens_GameIntroScreenBehaviour__get_GameRulesGameObject(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



// ============================================================
// RVA: 0x15af240 | Atlas.UI.Screens.GameIntroScreenBehaviour.PlayTweensOnStart
// ============================================================

undefined8 Atlas_UI_Screens_GameIntroScreenBehaviour__PlayTweensOnStart(void)

{
  return 0;
}



// ============================================================
// RVA: 0x15af248 | Atlas.UI.Screens.GameIntroScreenBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_GameIntroScreenBehaviour___ctor(ulong param_1)

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



