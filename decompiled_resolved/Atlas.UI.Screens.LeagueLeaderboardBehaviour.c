// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeagueLeaderboardBehaviour

// ============================================================
// RVA: 0x15edc04 | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_LeaderboardRoot
// ============================================================

undefined8 Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_LeaderboardRoot(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x15edc0c | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_RootUITweenGroup
// ============================================================

undefined8 Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_RootUITweenGroup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x15edc14 | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_ContentCanvasGroup
// ============================================================

undefined8 Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_ContentCanvasGroup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x15edc1c | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_RowsContainer
// ============================================================

undefined8 Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_RowsContainer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x15edc24 | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_ButtonGroup
// ============================================================

undefined8 Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_ButtonGroup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x15edc2c | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_Entries
// ============================================================

undefined8 Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_Entries(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x15edc34 | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_LeagueBadge
// ============================================================

undefined8 Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_LeagueBadge(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x15edc3c | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_StarsEarnedText
// ============================================================

undefined8 Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_StarsEarnedText(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x15edc44 | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_TimeRemainingText
// ============================================================

undefined8 Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_TimeRemainingText(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



// ============================================================
// RVA: 0x15edc4c | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_TimeRemainingLocKey
// ============================================================

undefined8 Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_TimeRemainingLocKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



// ============================================================
// RVA: 0x15edc54 | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_HoursLocKey
// ============================================================

undefined8 Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_HoursLocKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



// ============================================================
// RVA: 0x15edc5c | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_MinutesLocKey
// ============================================================

undefined8 Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_MinutesLocKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



// ============================================================
// RVA: 0x15edc64 | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_DaysLocKey
// ============================================================

undefined8 Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_DaysLocKey(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



// ============================================================
// RVA: 0x15edc6c | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_RewardPanels
// ============================================================

undefined8 Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_RewardPanels(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



// ============================================================
// RVA: 0x15edc74 | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_RankSpriteData
// ============================================================

void Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_RankSpriteData
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0xd8);
  uVar3 = *(undefined8 *)(param_2 + 0xf0);
  uVar2 = *(undefined8 *)(param_2 + 0xe8);
  param_1[1] = *(undefined8 *)(param_2 + 0xe0);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xf8);
  param_1[5] = *(undefined8 *)(param_2 + 0x100);
  param_1[4] = uVar1;
  return;
}



// ============================================================
// RVA: 0x15edc8c | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_RankLocalisationData
// ============================================================

void Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_RankLocalisationData
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x108);
  uVar3 = *(undefined8 *)(param_2 + 0x120);
  uVar2 = *(undefined8 *)(param_2 + 0x118);
  param_1[1] = *(undefined8 *)(param_2 + 0x110);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x128);
  param_1[5] = *(undefined8 *)(param_2 + 0x130);
  param_1[4] = uVar1;
  return;
}



// ============================================================
// RVA: 0x15edca4 | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_RankColorData
// ============================================================

void Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_RankColorData
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x158);
  uVar3 = *(undefined8 *)(param_2 + 0x170);
  uVar2 = *(undefined8 *)(param_2 + 0x168);
  param_1[5] = *(undefined8 *)(param_2 + 0x160);
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x178);
  uVar3 = *(undefined8 *)(param_2 + 400);
  uVar2 = *(undefined8 *)(param_2 + 0x188);
  param_1[9] = *(undefined8 *)(param_2 + 0x180);
  param_1[8] = uVar1;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x138);
  uVar3 = *(undefined8 *)(param_2 + 0x150);
  uVar2 = *(undefined8 *)(param_2 + 0x148);
  param_1[1] = *(undefined8 *)(param_2 + 0x140);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



// ============================================================
// RVA: 0x15edcc4 | Atlas.UI.Screens.LeagueLeaderboardBehaviour.get_InfoButton
// ============================================================

undefined8 Atlas_UI_Screens_LeagueLeaderboardBehaviour__get_InfoButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



// ============================================================
// RVA: 0x15edccc | Atlas.UI.Screens.LeagueLeaderboardBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_LeagueLeaderboardBehaviour___ctor(ulong param_1)

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



