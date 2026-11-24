// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LanguagePanelBehaviour

// ============================================================
// RVA: 0x15ebbc0 | Atlas.UI.Screens.LanguagePanelBehaviour.get_LanguagePrefab
// ============================================================

undefined8 Atlas_UI_Screens_LanguagePanelBehaviour__get_LanguagePrefab(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15ebbc8 | Atlas.UI.Screens.LanguagePanelBehaviour.get_OptionContainer
// ============================================================

undefined8 Atlas_UI_Screens_LanguagePanelBehaviour__get_OptionContainer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15ebbd0 | Atlas.UI.Screens.LanguagePanelBehaviour.get_UIAtlasButtonGroup
// ============================================================

undefined8 Atlas_UI_Screens_LanguagePanelBehaviour__get_UIAtlasButtonGroup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15ebbd8 | Atlas.UI.Screens.LanguagePanelBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_LanguagePanelBehaviour___ctor(ulong param_1)

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



