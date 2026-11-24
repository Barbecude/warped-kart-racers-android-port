// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.ChapterDefinition

// ============================================================
// RVA: 0x1540940 | Atlas.Definitions.ChapterDefinition.get_EventDefinitionRefList
// ============================================================

undefined8 Atlas_Definitions_ChapterDefinition__get_EventDefinitionRefList(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x1540948 | Atlas.Definitions.ChapterDefinition.get_RankRewardId1
// ============================================================

undefined8 Atlas_Definitions_ChapterDefinition__get_RankRewardId1(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x1540950 | Atlas.Definitions.ChapterDefinition.get_RankRewardId2
// ============================================================

undefined8 Atlas_Definitions_ChapterDefinition__get_RankRewardId2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x1540958 | Atlas.Definitions.ChapterDefinition.get_RankRewardId3
// ============================================================

undefined8 Atlas_Definitions_ChapterDefinition__get_RankRewardId3(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x1540960 | Atlas.Definitions.ChapterDefinition.get_UnlockedByDefault
// ============================================================

undefined1 Atlas_Definitions_ChapterDefinition__get_UnlockedByDefault(long param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x1540968 | Atlas.Definitions.ChapterDefinition.get_LockedStringLocID
// ============================================================

undefined8 Atlas_Definitions_ChapterDefinition__get_LockedStringLocID(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x1540970 | Atlas.Definitions.ChapterDefinition.GetRankRewardIdByIndex
// ============================================================

undefined8 Atlas_Definitions_ChapterDefinition__GetRankRewardIdByIndex(long param_1,int param_2)

{
  undefined8 *puVar1;
  
  if ((bRam0000000003eb4f39 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4f39 = 1;
  }
  if (param_2 == 2) {
    puVar1 = (undefined8 *)(param_1 + 0x68);
  }
  else if (param_2 == 1) {
    puVar1 = (undefined8 *)(param_1 + 0x60);
  }
  else if (param_2 == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x58);
  }
  else {
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar1 = *(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  }
  return *puVar1;
}



// ============================================================
// RVA: 0x1540a10 | Atlas.Definitions.ChapterDefinition..ctor
// ============================================================

void Atlas_Definitions_ChapterDefinition___ctor(long param_1)

{
  *(undefined1 *)(param_1 + 0x70) = 1;
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
// RVA: 0x1540a20 | Atlas.Definitions.ChapterDefinition..cctor
// ============================================================

void Atlas_Definitions_ChapterDefinition___cctor(void)

{
  if ((bRam0000000003eb4f3a & 1) == 0) {
    func_0x00f78a20(0x3d20618);
    bRam0000000003eb4f3a = 1;
  }
  **(undefined4 **)(/*Atlas.Definitions.ChapterDefinition_TypeInfo*/ lRam0000000003d20618 + 0xb8) = 3;
  return;
}



