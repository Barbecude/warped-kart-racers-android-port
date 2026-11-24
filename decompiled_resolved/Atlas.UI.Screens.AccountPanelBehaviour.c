// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.AccountPanelBehaviour

// ============================================================
// RVA: 0x14467cc | Atlas.UI.Screens.AccountPanelBehaviour.get_CreditsButton
// ============================================================

undefined8 Atlas_UI_Screens_AccountPanelBehaviour__get_CreditsButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x14467d4 | Atlas.UI.Screens.AccountPanelBehaviour.get_SaveGameButton
// ============================================================

undefined8 Atlas_UI_Screens_AccountPanelBehaviour__get_SaveGameButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x14467dc | Atlas.UI.Screens.AccountPanelBehaviour.get_PrivacyPolicyButton
// ============================================================

undefined8 Atlas_UI_Screens_AccountPanelBehaviour__get_PrivacyPolicyButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x14467e4 | Atlas.UI.Screens.AccountPanelBehaviour.get_SupportButton
// ============================================================

undefined8 Atlas_UI_Screens_AccountPanelBehaviour__get_SupportButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x14467ec | Atlas.UI.Screens.AccountPanelBehaviour.get_LicenseButton
// ============================================================

undefined8 Atlas_UI_Screens_AccountPanelBehaviour__get_LicenseButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x14467f4 | Atlas.UI.Screens.AccountPanelBehaviour.get_MulitplayerButton
// ============================================================

undefined8 Atlas_UI_Screens_AccountPanelBehaviour__get_MulitplayerButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x14467fc | Atlas.UI.Screens.AccountPanelBehaviour.get_MultiplayerButtonText
// ============================================================

undefined8 Atlas_UI_Screens_AccountPanelBehaviour__get_MultiplayerButtonText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x1446804 | Atlas.UI.Screens.AccountPanelBehaviour.get_AnalyticsButton
// ============================================================

undefined8 Atlas_UI_Screens_AccountPanelBehaviour__get_AnalyticsButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x144680c | Atlas.UI.Screens.AccountPanelBehaviour.get_AnalyticsButtonText
// ============================================================

undefined8 Atlas_UI_Screens_AccountPanelBehaviour__get_AnalyticsButtonText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x1446814 | Atlas.UI.Screens.AccountPanelBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_AccountPanelBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
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



