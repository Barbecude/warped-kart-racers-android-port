// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.SeasonsRotationDefinition

// ============================================================
// RVA: 0x14f22b4 | Atlas.Definitions.SeasonsRotationDefinition.get_StartDate
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14f3118 | Atlas.Definitions.SeasonsRotationDefinition.get_RotationType
// ============================================================

undefined4 Atlas_Definitions_SeasonsRotationDefinition__get_RotationType(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x14f3120 | Atlas.Definitions.SeasonsRotationDefinition.get_DefaultSeasonID
// ============================================================

undefined8 Atlas_Definitions_SeasonsRotationDefinition__get_DefaultSeasonID(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x14f3128 | Atlas.Definitions.SeasonsRotationDefinition.get_Seasons
// ============================================================

undefined8 Atlas_Definitions_SeasonsRotationDefinition__get_Seasons(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x14f3130 | Atlas.Definitions.SeasonsRotationDefinition.get_NumberOfWeeks
// ============================================================

undefined4 Atlas_Definitions_SeasonsRotationDefinition__get_NumberOfWeeks(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ============================================================
// RVA: 0x14f3138 | Atlas.Definitions.SeasonsRotationDefinition.get_StartNumberOfReruns
// ============================================================

undefined4 Atlas_Definitions_SeasonsRotationDefinition__get_StartNumberOfReruns(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x14f3140 | Atlas.Definitions.SeasonsRotationDefinition.get_LoopingEpisodeRotations
// ============================================================

undefined8 Atlas_Definitions_SeasonsRotationDefinition__get_LoopingEpisodeRotations(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x14f3148 | Atlas.Definitions.SeasonsRotationDefinition.get_LoopingEpisodeRotationsContinued
// ============================================================

undefined8
Atlas_Definitions_SeasonsRotationDefinition__get_LoopingEpisodeRotationsContinued(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x14f3150 | Atlas.Definitions.SeasonsRotationDefinition.get_EpisodeStart
// ============================================================

undefined8 Atlas_Definitions_SeasonsRotationDefinition__get_EpisodeStart(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x14f3158 | Atlas.Definitions.SeasonsRotationDefinition.get_OneWeekLeft
// ============================================================

undefined8 Atlas_Definitions_SeasonsRotationDefinition__get_OneWeekLeft(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x14f3160 | Atlas.Definitions.SeasonsRotationDefinition.get_OneDayLeft
// ============================================================

undefined8 Atlas_Definitions_SeasonsRotationDefinition__get_OneDayLeft(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x14f3168 | Atlas.Definitions.SeasonsRotationDefinition..ctor
// ============================================================

void Atlas_Definitions_SeasonsRotationDefinition___ctor(long param_1)

{
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



