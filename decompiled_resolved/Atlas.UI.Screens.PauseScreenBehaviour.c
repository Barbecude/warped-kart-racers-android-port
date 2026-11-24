// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.PauseScreenBehaviour

// ============================================================
// RVA: 0x14b7b68 | Atlas.UI.Screens.PauseScreenBehaviour.get_ResumeButton
// ============================================================

undefined8 Atlas_UI_Screens_PauseScreenBehaviour__get_ResumeButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x14b7b70 | Atlas.UI.Screens.PauseScreenBehaviour.get_RestartButton
// ============================================================

undefined8 Atlas_UI_Screens_PauseScreenBehaviour__get_RestartButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x14b7b78 | Atlas.UI.Screens.PauseScreenBehaviour.get_SettingsButton
// ============================================================

undefined8 Atlas_UI_Screens_PauseScreenBehaviour__get_SettingsButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x14b7b80 | Atlas.UI.Screens.PauseScreenBehaviour.get_QuitButton
// ============================================================

undefined8 Atlas_UI_Screens_PauseScreenBehaviour__get_QuitButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x14b7b88 | Atlas.UI.Screens.PauseScreenBehaviour.get_MainContainer
// ============================================================

undefined8 Atlas_UI_Screens_PauseScreenBehaviour__get_MainContainer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x14b7b90 | Atlas.UI.Screens.PauseScreenBehaviour.get_SettingsContainer
// ============================================================

undefined8 Atlas_UI_Screens_PauseScreenBehaviour__get_SettingsContainer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x14b7b98 | Atlas.UI.Screens.PauseScreenBehaviour.get_ControllerConfirmationRootTransform
// ============================================================

undefined8
Atlas_UI_Screens_PauseScreenBehaviour__get_ControllerConfirmationRootTransform(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x14b7ba0 | Atlas.UI.Screens.PauseScreenBehaviour.get_GameSettingsPanelBehaviour
// ============================================================

undefined8 Atlas_UI_Screens_PauseScreenBehaviour__get_GameSettingsPanelBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x14b7ba8 | Atlas.UI.Screens.PauseScreenBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_PauseScreenBehaviour___ctor(ulong param_1)

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



