// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.League.LeagueDefinition

// ============================================================
// RVA: 0x15ed500 | Atlas.League.LeagueDefinition.get_CanBeDemoted
// ============================================================

bool Atlas_League_LeagueDefinition__get_CanBeDemoted(long param_1)

{
  return *(int *)(param_1 + 0x2c) != -1;
}



// ============================================================
// RVA: 0x15ed510 | Atlas.League.LeagueDefinition.get_CanBePromoted
// ============================================================

bool Atlas_League_LeagueDefinition__get_CanBePromoted(long param_1)

{
  return *(int *)(param_1 + 0x28) != -1;
}



// ============================================================
// RVA: 0x15edb50 | Atlas.League.LeagueDefinition.get_PromotionPositionIndex
// ============================================================

undefined4 Atlas_League_LeagueDefinition__get_PromotionPositionIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15edb58 | Atlas.League.LeagueDefinition.get_DemotionPositionIndex
// ============================================================

undefined4 Atlas_League_LeagueDefinition__get_DemotionPositionIndex(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ============================================================
// RVA: 0x15edb60 | Atlas.League.LeagueDefinition.get_RewardRequiresFirstPlace
// ============================================================

undefined1 Atlas_League_LeagueDefinition__get_RewardRequiresFirstPlace(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15edb68 | Atlas.League.LeagueDefinition.get_DisplayNameLocKey
// ============================================================

undefined8 Atlas_League_LeagueDefinition__get_DisplayNameLocKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15edb70 | Atlas.League.LeagueDefinition.get_RewardDefinition
// ============================================================

undefined8 Atlas_League_LeagueDefinition__get_RewardDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15edb78 | Atlas.League.LeagueDefinition.get_RaceAIDefinitionID
// ============================================================

undefined8 Atlas_League_LeagueDefinition__get_RaceAIDefinitionID(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x15edb80 | Atlas.League.LeagueDefinition.get_BattleAIDefinitionID
// ============================================================

undefined8 Atlas_League_LeagueDefinition__get_BattleAIDefinitionID(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x15edb88 | Atlas.League.LeagueDefinition.get_BadgeImage
// ============================================================

undefined8 Atlas_League_LeagueDefinition__get_BadgeImage(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x15edb90 | Atlas.League.LeagueDefinition.get_AnalyticsName
// ============================================================

undefined8 Atlas_League_LeagueDefinition__get_AnalyticsName(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x15edb98 | Atlas.League.LeagueDefinition.get_StarsPerPlacement
// ============================================================

undefined8 Atlas_League_LeagueDefinition__get_StarsPerPlacement(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x15edba0 | Atlas.League.LeagueDefinition.get_RankColour
// ============================================================

undefined4 Atlas_League_LeagueDefinition__get_RankColour(long param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x15edbac | Atlas.League.LeagueDefinition..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_League_LeagueDefinition___ctor(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = _UNK_033f8d88;
  if ((bRam0000000003eb50a9 & 1) == 0) {
    func_0x00f78a20(0x3d21270,0);
    bRam0000000003eb50a9 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(param_1 + 0x18) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(param_1,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(param_1);
  return;
}



