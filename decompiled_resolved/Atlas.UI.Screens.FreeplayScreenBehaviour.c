// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.FreeplayScreenBehaviour

// ============================================================
// RVA: 0x1587694 | Atlas.UI.Screens.FreeplayScreenBehaviour.get_MapGridIconRef
// ============================================================

undefined8 Atlas_UI_Screens_FreeplayScreenBehaviour__get_MapGridIconRef(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x158769c | Atlas.UI.Screens.FreeplayScreenBehaviour.get_OptionParent
// ============================================================

undefined8 Atlas_UI_Screens_FreeplayScreenBehaviour__get_OptionParent(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x15876a4 | Atlas.UI.Screens.FreeplayScreenBehaviour.get_OptionContainer
// ============================================================

undefined8 Atlas_UI_Screens_FreeplayScreenBehaviour__get_OptionContainer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x15876ac | Atlas.UI.Screens.FreeplayScreenBehaviour.get_PaginationDotController
// ============================================================

undefined8 Atlas_UI_Screens_FreeplayScreenBehaviour__get_PaginationDotController(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x15876b4 | Atlas.UI.Screens.FreeplayScreenBehaviour.get_ScrollGroup
// ============================================================

undefined8 Atlas_UI_Screens_FreeplayScreenBehaviour__get_ScrollGroup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x15876bc | Atlas.UI.Screens.FreeplayScreenBehaviour.get_NumPaginations
// ============================================================

undefined4 Atlas_UI_Screens_FreeplayScreenBehaviour__get_NumPaginations(long param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x15876c4 | Atlas.UI.Screens.FreeplayScreenBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_FreeplayScreenBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_1 + 0x90) = 3;
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



