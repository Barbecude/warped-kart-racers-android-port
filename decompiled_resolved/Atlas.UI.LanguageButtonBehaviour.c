// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.LanguageButtonBehaviour

// ============================================================
// RVA: 0x15ebba8 | Atlas.UI.LanguageButtonBehaviour.get_Button
// ============================================================

undefined8 Atlas_UI_LanguageButtonBehaviour__get_Button(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15ebbb0 | Atlas.UI.LanguageButtonBehaviour.get_LocNameText
// ============================================================

undefined8 Atlas_UI_LanguageButtonBehaviour__get_LocNameText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15ebbb8 | Atlas.UI.LanguageButtonBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_LanguageButtonBehaviour___ctor(ulong param_1)

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



