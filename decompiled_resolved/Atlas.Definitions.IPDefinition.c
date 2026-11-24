// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.IPDefinition

// ============================================================
// RVA: 0x15b7108 | Atlas.Definitions.IPDefinition.get_DisplayNameLocKey
// ============================================================

undefined8 Atlas_Definitions_IPDefinition__get_DisplayNameLocKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15b7110 | Atlas.Definitions.IPDefinition.get_IsGenericIP
// ============================================================

undefined1 Atlas_Definitions_IPDefinition__get_IsGenericIP(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15b7118 | Atlas.Definitions.IPDefinition.get_LogoSprite
// ============================================================

undefined8 Atlas_Definitions_IPDefinition__get_LogoSprite(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15b7120 | Atlas.Definitions.IPDefinition.get_FrontEndLogoSprite
// ============================================================

undefined8 Atlas_Definitions_IPDefinition__get_FrontEndLogoSprite(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15b7128 | Atlas.Definitions.IPDefinition.get_OtherFrontEndLogoSprite
// ============================================================

undefined8 Atlas_Definitions_IPDefinition__get_OtherFrontEndLogoSprite(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x15b7130 | Atlas.Definitions.IPDefinition.get_ChapterBackground
// ============================================================

undefined8 Atlas_Definitions_IPDefinition__get_ChapterBackground(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x15b7138 | Atlas.Definitions.IPDefinition.get_TiledBannerBackground
// ============================================================

undefined8 Atlas_Definitions_IPDefinition__get_TiledBannerBackground(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x15b7140 | Atlas.Definitions.IPDefinition.get_HomeScreenIPSetup
// ============================================================

void Atlas_Definitions_IPDefinition__get_HomeScreenIPSetup(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  param_1[1] = *(undefined8 *)(param_2 + 0x60);
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = *(undefined8 *)(param_2 + 0x78);
  return;
}



// ============================================================
// RVA: 0x15b7158 | Atlas.Definitions.IPDefinition.get_ButtonColor
// ============================================================

undefined4 Atlas_Definitions_IPDefinition__get_ButtonColor(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x15b7164 | Atlas.Definitions.IPDefinition..ctor
// ============================================================

void Atlas_Definitions_IPDefinition___ctor(long param_1)

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



