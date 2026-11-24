// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.TopBarScreenBehaviour

// ============================================================
// RVA: 0x150e39c | Atlas.UI.Screens.TopBarScreenBehaviour.get_BackPanelRoot
// ============================================================

undefined8 Atlas_UI_Screens_TopBarScreenBehaviour__get_BackPanelRoot(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x150e3a4 | Atlas.UI.Screens.TopBarScreenBehaviour.get_BackButton
// ============================================================

undefined8 Atlas_UI_Screens_TopBarScreenBehaviour__get_BackButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x150e3ac | Atlas.UI.Screens.TopBarScreenBehaviour.get_SettingsButton
// ============================================================

undefined8 Atlas_UI_Screens_TopBarScreenBehaviour__get_SettingsButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x150e3b4 | Atlas.UI.Screens.TopBarScreenBehaviour.get_NextPanelRoot
// ============================================================

undefined8 Atlas_UI_Screens_TopBarScreenBehaviour__get_NextPanelRoot(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x150e3bc | Atlas.UI.Screens.TopBarScreenBehaviour.get_NextButton
// ============================================================

undefined8 Atlas_UI_Screens_TopBarScreenBehaviour__get_NextButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x150e3c4 | Atlas.UI.Screens.TopBarScreenBehaviour.get_PadlockButton
// ============================================================

undefined8 Atlas_UI_Screens_TopBarScreenBehaviour__get_PadlockButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x150e3cc | Atlas.UI.Screens.TopBarScreenBehaviour.get_NextPanelImage
// ============================================================

undefined8 Atlas_UI_Screens_TopBarScreenBehaviour__get_NextPanelImage(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x150e3d4 | Atlas.UI.Screens.TopBarScreenBehaviour.get_NextPanelAnimator
// ============================================================

undefined8 Atlas_UI_Screens_TopBarScreenBehaviour__get_NextPanelAnimator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x150e3dc | Atlas.UI.Screens.TopBarScreenBehaviour.get_TitlePanelRoot
// ============================================================

undefined8 Atlas_UI_Screens_TopBarScreenBehaviour__get_TitlePanelRoot(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x150e3e4 | Atlas.UI.Screens.TopBarScreenBehaviour.get_TitleText
// ============================================================

undefined8 Atlas_UI_Screens_TopBarScreenBehaviour__get_TitleText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x150e3ec | Atlas.UI.Screens.TopBarScreenBehaviour.get_TitleIconImage
// ============================================================

undefined8 Atlas_UI_Screens_TopBarScreenBehaviour__get_TitleIconImage(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x150e3f4 | Atlas.UI.Screens.TopBarScreenBehaviour.get_GameCenterButton
// ============================================================

undefined8 Atlas_UI_Screens_TopBarScreenBehaviour__get_GameCenterButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x150e3fc | Atlas.UI.Screens.TopBarScreenBehaviour.get_TransparentGameCenterButton
// ============================================================

undefined8 Atlas_UI_Screens_TopBarScreenBehaviour__get_TransparentGameCenterButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x150e404 | Atlas.UI.Screens.TopBarScreenBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_TopBarScreenBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb4d66 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    bRam0000000003eb4d66 = 1;
  }
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
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



