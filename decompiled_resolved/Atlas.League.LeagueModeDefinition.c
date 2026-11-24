// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.League.LeagueModeDefinition

// ============================================================
// RVA: 0x1479334 | Atlas.League.LeagueModeDefinition.get_RaceEventDefinition
// ============================================================

undefined8 Atlas_League_LeagueModeDefinition__get_RaceEventDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x147933c | Atlas.League.LeagueModeDefinition.get_BattleEventDefinition
// ============================================================

undefined8 Atlas_League_LeagueModeDefinition__get_BattleEventDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x1479344 | Atlas.League.LeagueModeDefinition.get_LeagueDefinitions
// ============================================================

undefined8 Atlas_League_LeagueModeDefinition__get_LeagueDefinitions(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x147934c | Atlas.League.LeagueModeDefinition.get_RaceMaps
// ============================================================

undefined8 Atlas_League_LeagueModeDefinition__get_RaceMaps(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x1479354 | Atlas.League.LeagueModeDefinition.get_BattleMaps
// ============================================================

undefined8 Atlas_League_LeagueModeDefinition__get_BattleMaps(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x147935c | Atlas.League.LeagueModeDefinition.get_WeeklySchedule
// ============================================================

undefined8 Atlas_League_LeagueModeDefinition__get_WeeklySchedule(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x1479364 | Atlas.League.LeagueModeDefinition.get_PointsPerPlacement
// ============================================================

undefined8 Atlas_League_LeagueModeDefinition__get_PointsPerPlacement(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x147936c | Atlas.League.LeagueModeDefinition..ctor
// ============================================================

void Atlas_League_LeagueModeDefinition___ctor(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb48ac & 1) == 0) {
    func_0x00f78a20(0x3d1f190);
    func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48ac = 1;
  }
  if (((*(ushort *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = func_0x00f78a34(/*Atlas.League.LeagueDefinition[]_TypeInfo*/ uRam0000000003d1f190,
                          *(undefined4 *)(*(long *)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8) + 4));
  *(undefined8 *)(param_1 + 0x30) = uVar1;
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



// ============================================================
// RVA: 0x1479404 | Atlas.League.LeagueModeDefinition..cctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_League_LeagueModeDefinition___cctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000003eb48ad & 1) == 0) {
    func_0x00f78a20(0x3d22e88);
    bRam0000000003eb48ad = 1;
  }
  uVar1 = _UNK_033f8360;
  puVar2 = *(undefined8 **)(/*Atlas.League.LeagueModeDefinition_TypeInfo*/ lRam0000000003d22e88 + 0xb8);
  puVar2[1] = _UNK_033f8368;
  *puVar2 = uVar1;
  puVar2[2] = _UNK_033f8390;
  *(undefined4 *)(puVar2 + 3) = 2;
  return;
}



