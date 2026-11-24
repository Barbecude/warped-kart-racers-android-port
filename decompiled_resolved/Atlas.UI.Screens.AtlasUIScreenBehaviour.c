// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.AtlasUIScreenBehaviour

// ============================================================
// RVA: 0x1470a20 | Atlas.UI.Screens.AtlasUIScreenBehaviour.get_TopBarButtons
// ============================================================

undefined8 Atlas_UI_Screens_AtlasUIScreenBehaviour__get_TopBarButtons(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x1470a28 | Atlas.UI.Screens.AtlasUIScreenBehaviour.get_TopBarIgnoreButtons
// ============================================================

undefined8 Atlas_UI_Screens_AtlasUIScreenBehaviour__get_TopBarIgnoreButtons(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x1470a30 | Atlas.UI.Screens.AtlasUIScreenBehaviour.get_TitleLocKey
// ============================================================

undefined8 Atlas_UI_Screens_AtlasUIScreenBehaviour__get_TitleLocKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x1470a38 | Atlas.UI.Screens.AtlasUIScreenBehaviour.get_TitleIcon
// ============================================================

undefined8 Atlas_UI_Screens_AtlasUIScreenBehaviour__get_TitleIcon(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x1470a40 | Atlas.UI.Screens.AtlasUIScreenBehaviour.get_FrontEndMusicCommand
// ============================================================

undefined4 Atlas_UI_Screens_AtlasUIScreenBehaviour__get_FrontEndMusicCommand(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x1470a48 | Atlas.UI.Screens.AtlasUIScreenBehaviour.get_FrontEndMusicType
// ============================================================

undefined4 Atlas_UI_Screens_AtlasUIScreenBehaviour__get_FrontEndMusicType(long param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// ============================================================
// RVA: 0x1470a50 | Atlas.UI.Screens.AtlasUIScreenBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_AtlasUIScreenBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4872 & 1) == 0) {
    func_0x00f78a20(0x3d3dc88);
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



