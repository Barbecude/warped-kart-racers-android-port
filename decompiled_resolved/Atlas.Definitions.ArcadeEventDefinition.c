// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.ArcadeEventDefinition

// ============================================================
// RVA: 0x1447e70 | Atlas.Definitions.ArcadeEventDefinition.get_MapDefinitionRef
// ============================================================

long Atlas_Definitions_ArcadeEventDefinition__get_MapDefinitionRef(long param_1)

{
  return param_1 + 0x20;
}



// ============================================================
// RVA: 0x144cbc4 | Atlas.Definitions.ArcadeEventDefinition..ctor
// ============================================================

void Atlas_Definitions_ArcadeEventDefinition___ctor(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb475a & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb475a = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar1 = /*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270;
  *(undefined8 *)(param_1 + 0x30) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  *(undefined8 *)(param_1 + 0x38) = **(undefined8 **)(lVar1 + 0xb8);
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
// RVA: 0x144d710 | Atlas.Definitions.ArcadeEventDefinition.GetThreshold
// ============================================================

undefined4 Atlas_Definitions_ArcadeEventDefinition__GetThreshold(long param_1,int param_2)

{
  if (param_2 == 3) {
    return *(undefined4 *)(param_1 + 0x50);
  }
  if (param_2 != 2) {
    if (param_2 == 1) {
      return *(undefined4 *)(param_1 + 0x48);
    }
    return 0x7fffffff;
  }
  return *(undefined4 *)(param_1 + 0x4c);
}



// ============================================================
// RVA: 0x144ebd4 | Atlas.Definitions.ArcadeEventDefinition.get_BattleEventDefinition
// ============================================================

undefined8 Atlas_Definitions_ArcadeEventDefinition__get_BattleEventDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x144ebdc | Atlas.Definitions.ArcadeEventDefinition.get_RaceEventDefinition
// ============================================================

undefined8 Atlas_Definitions_ArcadeEventDefinition__get_RaceEventDefinition(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x144ebe4 | Atlas.Definitions.ArcadeEventDefinition.get_EventIcon
// ============================================================

undefined8 Atlas_Definitions_ArcadeEventDefinition__get_EventIcon(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x144ebec | Atlas.Definitions.ArcadeEventDefinition.get_BronzeThreshold
// ============================================================

undefined4 Atlas_Definitions_ArcadeEventDefinition__get_BronzeThreshold(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x144ebf4 | Atlas.Definitions.ArcadeEventDefinition.get_SilverThreshold
// ============================================================

undefined4 Atlas_Definitions_ArcadeEventDefinition__get_SilverThreshold(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ============================================================
// RVA: 0x144ebfc | Atlas.Definitions.ArcadeEventDefinition.get_GoldThreshold
// ============================================================

undefined4 Atlas_Definitions_ArcadeEventDefinition__get_GoldThreshold(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



