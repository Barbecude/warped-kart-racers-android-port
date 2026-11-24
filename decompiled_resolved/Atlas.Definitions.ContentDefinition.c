// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.ContentDefinition

// ============================================================
// RVA: 0x15711b0 | Atlas.Definitions.ContentDefinition.get_IPDefinitionRef
// ============================================================

long Atlas_Definitions_ContentDefinition__get_IPDefinitionRef(long param_1)

{
  return param_1 + 0x20;
}



// ============================================================
// RVA: 0x15711b8 | Atlas.Definitions.ContentDefinition.get_DisplayNameLocKey
// ============================================================

undefined8 Atlas_Definitions_ContentDefinition__get_DisplayNameLocKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15711c0 | Atlas.Definitions.ContentDefinition.get_SeasonDefinitionRef
// ============================================================

long Atlas_Definitions_ContentDefinition__get_SeasonDefinitionRef(long param_1)

{
  return param_1 + 0x38;
}



// ============================================================
// RVA: 0x15711c8 | Atlas.Definitions.ContentDefinition.get_ContentVersion
// ============================================================

undefined4 Atlas_Definitions_ContentDefinition__get_ContentVersion(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x15711d0 | Atlas.Definitions.ContentDefinition..ctor
// ============================================================

void Atlas_Definitions_ContentDefinition___ctor(long param_1)

{
  if ((bRam0000000003eb50a9 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
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



