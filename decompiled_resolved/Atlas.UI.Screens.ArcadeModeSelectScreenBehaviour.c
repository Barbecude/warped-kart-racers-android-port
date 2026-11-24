// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.ArcadeModeSelectScreenBehaviour

// ============================================================
// RVA: 0x1454808 | Atlas.UI.Screens.ArcadeModeSelectScreenBehaviour.get_MapRepresentation
// ============================================================

undefined8 Atlas_UI_Screens_ArcadeModeSelectScreenBehaviour__get_MapRepresentation(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x1454810 | Atlas.UI.Screens.ArcadeModeSelectScreenBehaviour.get_ModeViewContextSpecific
// ============================================================

undefined8
Atlas_UI_Screens_ArcadeModeSelectScreenBehaviour__get_ModeViewContextSpecific(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x1454818 | Atlas.UI.Screens.ArcadeModeSelectScreenBehaviour.get_ModeViewCollector
// ============================================================

undefined8 Atlas_UI_Screens_ArcadeModeSelectScreenBehaviour__get_ModeViewCollector(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x1454820 | Atlas.UI.Screens.ArcadeModeSelectScreenBehaviour.get_ContextEventView
// ============================================================

undefined8 Atlas_UI_Screens_ArcadeModeSelectScreenBehaviour__get_ContextEventView(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x1454828 | Atlas.UI.Screens.ArcadeModeSelectScreenBehaviour.get_EventRepresentation
// ============================================================

undefined8 Atlas_UI_Screens_ArcadeModeSelectScreenBehaviour__get_EventRepresentation(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x1454830 | Atlas.UI.Screens.ArcadeModeSelectScreenBehaviour.get_ModeDescView
// ============================================================

undefined8 Atlas_UI_Screens_ArcadeModeSelectScreenBehaviour__get_ModeDescView(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x1454838 | Atlas.UI.Screens.ArcadeModeSelectScreenBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_ArcadeModeSelectScreenBehaviour___ctor(ulong param_1)

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



