// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SingleplayerOverviewBehaviour

// ============================================================
// RVA: 0x14fa2e0 | Atlas.UI.Screens.SingleplayerOverviewBehaviour.get_CampaignButtons
// ============================================================

undefined8 Atlas_UI_Screens_SingleplayerOverviewBehaviour__get_CampaignButtons(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x14fa2e8 | Atlas.UI.Screens.SingleplayerOverviewBehaviour.get_LockedUIMaterial
// ============================================================

undefined8 Atlas_UI_Screens_SingleplayerOverviewBehaviour__get_LockedUIMaterial(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x14fa2f0 | Atlas.UI.Screens.SingleplayerOverviewBehaviour.get_LockedTextColour
// ============================================================

undefined4 Atlas_UI_Screens_SingleplayerOverviewBehaviour__get_LockedTextColour(long param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x14fa2fc | Atlas.UI.Screens.SingleplayerOverviewBehaviour.get_LockedTextBorderColour
// ============================================================

undefined4 Atlas_UI_Screens_SingleplayerOverviewBehaviour__get_LockedTextBorderColour(long param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x14fa308 | Atlas.UI.Screens.SingleplayerOverviewBehaviour.get_CharacterLockedUIMaterial
// ============================================================

undefined8
Atlas_UI_Screens_SingleplayerOverviewBehaviour__get_CharacterLockedUIMaterial(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x14fa310 | Atlas.UI.Screens.SingleplayerOverviewBehaviour.get_CharacterLockedColour
// ============================================================

undefined4 Atlas_UI_Screens_SingleplayerOverviewBehaviour__get_CharacterLockedColour(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x14fa31c | Atlas.UI.Screens.SingleplayerOverviewBehaviour.get_PaginationDotController
// ============================================================

undefined8 Atlas_UI_Screens_SingleplayerOverviewBehaviour__get_PaginationDotController(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



// ============================================================
// RVA: 0x14fa324 | Atlas.UI.Screens.SingleplayerOverviewBehaviour.get_NumPaginations
// ============================================================

undefined4 Atlas_UI_Screens_SingleplayerOverviewBehaviour__get_NumPaginations(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb8);
}



// ============================================================
// RVA: 0x14fa32c | Atlas.UI.Screens.SingleplayerOverviewBehaviour.get_SingleMedalBehaviour
// ============================================================

undefined8 Atlas_UI_Screens_SingleplayerOverviewBehaviour__get_SingleMedalBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



// ============================================================
// RVA: 0x14fa334 | Atlas.UI.Screens.SingleplayerOverviewBehaviour..ctor
// ============================================================

undefined1  [16]
Atlas_UI_Screens_SingleplayerOverviewBehaviour___ctor
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          ulong param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  *(undefined4 *)(param_5 + 0x78) = uVar2;
  *(undefined4 *)(param_5 + 0x7c) = param_2;
  *(undefined4 *)(param_5 + 0x80) = param_3;
  *(undefined4 *)(param_5 + 0x84) = param_4;
  uVar2 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  *(undefined4 *)(param_5 + 0x88) = uVar2;
  *(undefined4 *)(param_5 + 0x8c) = param_2;
  *(undefined4 *)(param_5 + 0x90) = param_3;
  *(undefined4 *)(param_5 + 0x94) = param_4;
  uVar2 = /*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
  *(undefined4 *)(param_5 + 0xa0) = uVar2;
  *(undefined4 *)(param_5 + 0xa4) = param_2;
  *(undefined4 *)(param_5 + 0xa8) = param_3;
  *(undefined4 *)(param_5 + 0xac) = param_4;
  *(undefined4 *)(param_5 + 0xb8) = 2;
  if ((bRam0000000003eb4872 & 1) == 0) {
    func_0x00f78a20(0x3d3dc88,0);
    func_0x00f78a20(0x3d1e380);
    func_0x00f78a20(0x3d255d8);
    bRam0000000003eb4872 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(param_5 + 0x40) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(param_5 + 0x48) = uVar1;
  *(undefined4 *)(param_5 + 100) = 1;
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
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_5;
  return auVar3;
}



