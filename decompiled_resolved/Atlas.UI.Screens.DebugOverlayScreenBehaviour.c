// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.DebugOverlayScreenBehaviour

// ============================================================
// RVA: 0x157bb24 | Atlas.UI.Screens.DebugOverlayScreenBehaviour.get_BuildText
// ============================================================

undefined8 Atlas_UI_Screens_DebugOverlayScreenBehaviour__get_BuildText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x157bb2c | Atlas.UI.Screens.DebugOverlayScreenBehaviour.get_PingText
// ============================================================

undefined8 Atlas_UI_Screens_DebugOverlayScreenBehaviour__get_PingText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x157bb34 | Atlas.UI.Screens.DebugOverlayScreenBehaviour.get_TrafficInText
// ============================================================

undefined8 Atlas_UI_Screens_DebugOverlayScreenBehaviour__get_TrafficInText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x157bb3c | Atlas.UI.Screens.DebugOverlayScreenBehaviour.get_TrafficOutText
// ============================================================

undefined8 Atlas_UI_Screens_DebugOverlayScreenBehaviour__get_TrafficOutText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x157bb44 | Atlas.UI.Screens.DebugOverlayScreenBehaviour.get_FpsText
// ============================================================

undefined8 Atlas_UI_Screens_DebugOverlayScreenBehaviour__get_FpsText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x157bb4c | Atlas.UI.Screens.DebugOverlayScreenBehaviour.get_ServicesText
// ============================================================

undefined8 Atlas_UI_Screens_DebugOverlayScreenBehaviour__get_ServicesText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x157bb54 | Atlas.UI.Screens.DebugOverlayScreenBehaviour.get_ErrorRoot
// ============================================================

undefined8 Atlas_UI_Screens_DebugOverlayScreenBehaviour__get_ErrorRoot(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x157bb5c | Atlas.UI.Screens.DebugOverlayScreenBehaviour.get_ErrorText
// ============================================================

undefined8 Atlas_UI_Screens_DebugOverlayScreenBehaviour__get_ErrorText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x157bb64 | Atlas.UI.Screens.DebugOverlayScreenBehaviour.get_ErrorCloseButton
// ============================================================

undefined8 Atlas_UI_Screens_DebugOverlayScreenBehaviour__get_ErrorCloseButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x157bb6c | Atlas.UI.Screens.DebugOverlayScreenBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_DebugOverlayScreenBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb5092 & 1) == 0) {
    func_0x00f78a20(0x3d255d8);
    bRam0000000003eb5092 = 1;
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



