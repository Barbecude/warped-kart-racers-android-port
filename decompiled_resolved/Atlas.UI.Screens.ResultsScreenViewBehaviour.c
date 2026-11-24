// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.ResultsScreenViewBehaviour

// ============================================================
// RVA: 0x14e1934 | Atlas.UI.Screens.ResultsScreenViewBehaviour.get_PodiumGameObjects
// ============================================================

undefined8 Atlas_UI_Screens_ResultsScreenViewBehaviour__get_PodiumGameObjects(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x14e193c | Atlas.UI.Screens.ResultsScreenViewBehaviour.get_PodiumTextLabels
// ============================================================

undefined8 Atlas_UI_Screens_ResultsScreenViewBehaviour__get_PodiumTextLabels(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x14e1944 | Atlas.UI.Screens.ResultsScreenViewBehaviour.get_WinningIPLogo
// ============================================================

undefined8 Atlas_UI_Screens_ResultsScreenViewBehaviour__get_WinningIPLogo(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x14e194c | Atlas.UI.Screens.ResultsScreenViewBehaviour.get_TimeBetweenPositionLabelsAppearing
// ============================================================

undefined4
Atlas_UI_Screens_ResultsScreenViewBehaviour__get_TimeBetweenPositionLabelsAppearing(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x14e1954 | Atlas.UI.Screens.ResultsScreenViewBehaviour.get_TimeBeforeContinueButtonAppears
// ============================================================

undefined4
Atlas_UI_Screens_ResultsScreenViewBehaviour__get_TimeBeforeContinueButtonAppears(long param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}



// ============================================================
// RVA: 0x14e195c | Atlas.UI.Screens.ResultsScreenViewBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_ResultsScreenViewBehaviour___ctor(ulong param_1)

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



