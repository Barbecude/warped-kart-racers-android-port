// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Localisation.PrimaryFontMappings

// ============================================================
// RVA: 0x1651988 | Core.Localisation.PrimaryFontMappings.get_PrimarySystemFont
// ============================================================

undefined8 Core_Localisation_PrimaryFontMappings__get_PrimarySystemFont(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1651990 | Core.Localisation.PrimaryFontMappings.get_FontMaps
// ============================================================

undefined8 Core_Localisation_PrimaryFontMappings__get_FontMaps(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1651998 | Core.Localisation.PrimaryFontMappings.get_MaterialMaps
// ============================================================

undefined8 Core_Localisation_PrimaryFontMappings__get_MaterialMaps(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x16519a0 | Core.Localisation.PrimaryFontMappings..ctor
// ============================================================

void Core_Localisation_PrimaryFontMappings___ctor(undefined8 param_1)

{
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



