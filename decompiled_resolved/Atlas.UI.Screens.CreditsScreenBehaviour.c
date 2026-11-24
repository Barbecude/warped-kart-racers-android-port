// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.CreditsScreenBehaviour

// ============================================================
// RVA: 0x1573670 | Atlas.UI.Screens.CreditsScreenBehaviour.get_CreditsScroller
// ============================================================

undefined8 Atlas_UI_Screens_CreditsScreenBehaviour__get_CreditsScroller(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x1573678 | Atlas.UI.Screens.CreditsScreenBehaviour.get_ContentCanvasGroup
// ============================================================

undefined8 Atlas_UI_Screens_CreditsScreenBehaviour__get_ContentCanvasGroup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x1573680 | Atlas.UI.Screens.CreditsScreenBehaviour.get_BeingDragged
// ============================================================

undefined1 Atlas_UI_Screens_CreditsScreenBehaviour__get_BeingDragged(long param_1)

{
  return *(undefined1 *)(param_1 + 0x84);
}



// ============================================================
// RVA: 0x1573688 | Atlas.UI.Screens.CreditsScreenBehaviour.set_BeingDragged
// ============================================================

void Atlas_UI_Screens_CreditsScreenBehaviour__set_BeingDragged(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x84) = param_2;
  return;
}



// ============================================================
// RVA: 0x1573690 | Atlas.UI.Screens.CreditsScreenBehaviour.get_ScrollSpeed
// ============================================================

undefined4 Atlas_UI_Screens_CreditsScreenBehaviour__get_ScrollSpeed(long param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x1573698 | Atlas.UI.Screens.CreditsScreenBehaviour.get_AfterDragCooldown
// ============================================================

undefined4 Atlas_UI_Screens_CreditsScreenBehaviour__get_AfterDragCooldown(long param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



// ============================================================
// RVA: 0x15736a0 | Atlas.UI.Screens.CreditsScreenBehaviour.get_DelayBeginningStartScroll
// ============================================================

undefined4 Atlas_UI_Screens_CreditsScreenBehaviour__get_DelayBeginningStartScroll(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x15736a8 | Atlas.UI.Screens.CreditsScreenBehaviour..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Atlas_UI_Screens_CreditsScreenBehaviour___ctor(ulong param_1)

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



