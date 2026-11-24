// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.CharacterRankScreenBehaviour

// ============================================================
// RVA: 0x1541a40 | Atlas.UI.Screens.CharacterRankScreenBehaviour.get_FillElements
// ============================================================

undefined8 Atlas_UI_Screens_CharacterRankScreenBehaviour__get_FillElements(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x1541a48 | Atlas.UI.Screens.CharacterRankScreenBehaviour.get_Rewards
// ============================================================

undefined8 Atlas_UI_Screens_CharacterRankScreenBehaviour__get_Rewards(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x1541a50 | Atlas.UI.Screens.CharacterRankScreenBehaviour.get_CharacterRepresentationViewBehaviour
// ============================================================

undefined8
Atlas_UI_Screens_CharacterRankScreenBehaviour__get_CharacterRepresentationViewBehaviour
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x1541a58 | Atlas.UI.Screens.CharacterRankScreenBehaviour.get_IPRepresentationViewBehaviour
// ============================================================

undefined8
Atlas_UI_Screens_CharacterRankScreenBehaviour__get_IPRepresentationViewBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x1541a60 | Atlas.UI.Screens.CharacterRankScreenBehaviour.get_LobbyInfoPanelBehaviour
// ============================================================

undefined8 Atlas_UI_Screens_CharacterRankScreenBehaviour__get_LobbyInfoPanelBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x1541a68 | Atlas.UI.Screens.CharacterRankScreenBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_CharacterRankScreenBehaviour___ctor(ulong param_1)

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



