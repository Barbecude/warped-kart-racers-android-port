// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.KartSelectBehaviour

// ============================================================
// RVA: 0x15de438 | Atlas.UI.Screens.KartSelectBehaviour.get_LoadoutGridIconRef
// ============================================================

undefined8 Atlas_UI_Screens_KartSelectBehaviour__get_LoadoutGridIconRef(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x15de440 | Atlas.UI.Screens.KartSelectBehaviour.get_CharacterNamePanelView
// ============================================================

undefined8 Atlas_UI_Screens_KartSelectBehaviour__get_CharacterNamePanelView(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x15de448 | Atlas.UI.Screens.KartSelectBehaviour.get_NamePanelView
// ============================================================

undefined8 Atlas_UI_Screens_KartSelectBehaviour__get_NamePanelView(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x15de450 | Atlas.UI.Screens.KartSelectBehaviour.get_LockedDescView
// ============================================================

undefined8 Atlas_UI_Screens_KartSelectBehaviour__get_LockedDescView(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x15de458 | Atlas.UI.Screens.KartSelectBehaviour.get_PedestalElementBehaviour
// ============================================================

undefined8 Atlas_UI_Screens_KartSelectBehaviour__get_PedestalElementBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x15de460 | Atlas.UI.Screens.KartSelectBehaviour.get_NumColumnsOnPage
// ============================================================

undefined4 Atlas_UI_Screens_KartSelectBehaviour__get_NumColumnsOnPage(long param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x15de468 | Atlas.UI.Screens.KartSelectBehaviour.get_TabController
// ============================================================

undefined8 Atlas_UI_Screens_KartSelectBehaviour__get_TabController(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x15de470 | Atlas.UI.Screens.KartSelectBehaviour.get_LobbyInfoPanelBehaviour
// ============================================================

undefined8 Atlas_UI_Screens_KartSelectBehaviour__get_LobbyInfoPanelBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x15de478 | Atlas.UI.Screens.KartSelectBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_KartSelectBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_1 + 0x90) = 4;
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



