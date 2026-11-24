// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.KartDefinition

// ============================================================
// RVA: 0x15c9a2c | Atlas.Definitions.KartDefinition.get_EngineType
// ============================================================

undefined4 Atlas_Definitions_KartDefinition__get_EngineType(long param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// ============================================================
// RVA: 0x15c9a34 | Atlas.Definitions.KartDefinition.get_BoostAudio
// ============================================================

undefined4 Atlas_Definitions_KartDefinition__get_BoostAudio(long param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x15c9a3c | Atlas.Definitions.KartDefinition.get_StockWheelDef
// ============================================================

long Atlas_Definitions_KartDefinition__get_StockWheelDef(long param_1)

{
  return param_1 + 0x70;
}



// ============================================================
// RVA: 0x15c9a44 | Atlas.Definitions.KartDefinition..ctor
// ============================================================

void Atlas_Definitions_KartDefinition___ctor(long param_1)

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



