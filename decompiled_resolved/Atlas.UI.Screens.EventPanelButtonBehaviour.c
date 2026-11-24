// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.EventPanelButtonBehaviour

// ============================================================
// RVA: 0x1583b08 | Atlas.UI.Screens.EventPanelButtonBehaviour.get_Button
// ============================================================

undefined8 Atlas_UI_Screens_EventPanelButtonBehaviour__get_Button(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1583b10 | Atlas.UI.Screens.EventPanelButtonBehaviour.get_BackgroundImage
// ============================================================

undefined8 Atlas_UI_Screens_EventPanelButtonBehaviour__get_BackgroundImage(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1583b18 | Atlas.UI.Screens.EventPanelButtonBehaviour.get_MapImage
// ============================================================

undefined8 Atlas_UI_Screens_EventPanelButtonBehaviour__get_MapImage(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x1583b20 | Atlas.UI.Screens.EventPanelButtonBehaviour.get_RewardTickGameObject
// ============================================================

undefined8 Atlas_UI_Screens_EventPanelButtonBehaviour__get_RewardTickGameObject(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1583b28 | Atlas.UI.Screens.EventPanelButtonBehaviour.get_ChallengesRootBackground
// ============================================================

undefined8 Atlas_UI_Screens_EventPanelButtonBehaviour__get_ChallengesRootBackground(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x1583b30 | Atlas.UI.Screens.EventPanelButtonBehaviour.get_FlagsBehaviour
// ============================================================

undefined8 Atlas_UI_Screens_EventPanelButtonBehaviour__get_FlagsBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x1583b38 | Atlas.UI.Screens.EventPanelButtonBehaviour.get_CompletedColor
// ============================================================

undefined4 Atlas_UI_Screens_EventPanelButtonBehaviour__get_CompletedColor(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x1583b44 | Atlas.UI.Screens.EventPanelButtonBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_EventPanelButtonBehaviour___ctor(ulong param_1)

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



