// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LicenseScreenBehaviour

// ============================================================
// RVA: 0x1483fdc | Atlas.UI.Screens.LicenseScreenBehaviour.get_CreditsScroller
// ============================================================

undefined8 Atlas_UI_Screens_LicenseScreenBehaviour__get_CreditsScroller(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x1483fe4 | Atlas.UI.Screens.LicenseScreenBehaviour.get_ContentCanvasGroup
// ============================================================

undefined8 Atlas_UI_Screens_LicenseScreenBehaviour__get_ContentCanvasGroup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x1483fec | Atlas.UI.Screens.LicenseScreenBehaviour.get_BeingDragged
// ============================================================

undefined1 Atlas_UI_Screens_LicenseScreenBehaviour__get_BeingDragged(long param_1)

{
  return *(undefined1 *)(param_1 + 0x84);
}



// ============================================================
// RVA: 0x1483ff4 | Atlas.UI.Screens.LicenseScreenBehaviour.set_BeingDragged
// ============================================================

void Atlas_UI_Screens_LicenseScreenBehaviour__set_BeingDragged(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x84) = param_2;
  return;
}



// ============================================================
// RVA: 0x1483ffc | Atlas.UI.Screens.LicenseScreenBehaviour.get_ScrollSpeed
// ============================================================

undefined4 Atlas_UI_Screens_LicenseScreenBehaviour__get_ScrollSpeed(long param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x1484004 | Atlas.UI.Screens.LicenseScreenBehaviour.get_AfterDragCooldown
// ============================================================

undefined4 Atlas_UI_Screens_LicenseScreenBehaviour__get_AfterDragCooldown(long param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



// ============================================================
// RVA: 0x148400c | Atlas.UI.Screens.LicenseScreenBehaviour.get_DelayBeginningStartScroll
// ============================================================

undefined4 Atlas_UI_Screens_LicenseScreenBehaviour__get_DelayBeginningStartScroll(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x1484014 | Atlas.UI.Screens.LicenseScreenBehaviour..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Atlas_UI_Screens_LicenseScreenBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined8 *)(param_1 + 0x7c) = _UNK_033f83a0;
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



