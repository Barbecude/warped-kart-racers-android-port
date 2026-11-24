// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.CharacterDefinition

// ============================================================
// RVA: 0x1541044 | Atlas.Definitions.CharacterDefinition.get_HeadshotAtlasedSpriteRef
// ============================================================

undefined8 Atlas_Definitions_CharacterDefinition__get_HeadshotAtlasedSpriteRef(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x154104c | Atlas.Definitions.CharacterDefinition.get_SkinDisplayNameLocKey
// ============================================================

undefined8 Atlas_Definitions_CharacterDefinition__get_SkinDisplayNameLocKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x1541054 | Atlas.Definitions.CharacterDefinition.get_OwnerID
// ============================================================

undefined8 Atlas_Definitions_CharacterDefinition__get_OwnerID(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x154105c | Atlas.Definitions.CharacterDefinition.get_DefaultAlternateSkinID
// ============================================================

undefined8 Atlas_Definitions_CharacterDefinition__get_DefaultAlternateSkinID(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x1541064 | Atlas.Definitions.CharacterDefinition.get_AlternateID
// ============================================================

undefined8 Atlas_Definitions_CharacterDefinition__get_AlternateID(long param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(param_1 + 0x70),0);
  lVar1 = 0x78;
  if (iVar2 == 0) {
    lVar1 = 0x70;
  }
  return *(undefined8 *)(param_1 + lVar1);
}



// ============================================================
// RVA: 0x15410a0 | Atlas.Definitions.CharacterDefinition.get_NeedsTallHeadRewardCamera
// ============================================================

undefined1 Atlas_Definitions_CharacterDefinition__get_NeedsTallHeadRewardCamera(long param_1)

{
  return *(undefined1 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x15410a8 | Atlas.Definitions.CharacterDefinition.get_XpRewardId1
// ============================================================

undefined8 Atlas_Definitions_CharacterDefinition__get_XpRewardId1(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x15410b0 | Atlas.Definitions.CharacterDefinition.get_XpRewardId2
// ============================================================

undefined8 Atlas_Definitions_CharacterDefinition__get_XpRewardId2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x15410b8 | Atlas.Definitions.CharacterDefinition.get_XpRewardId3
// ============================================================

undefined8 Atlas_Definitions_CharacterDefinition__get_XpRewardId3(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x15410c0 | Atlas.Definitions.CharacterDefinition.get_IsBaseSkin
// ============================================================

bool Atlas_Definitions_CharacterDefinition__get_IsBaseSkin(long param_1)

{
  if (*(long *)(param_1 + 0x70) != 0) {
    return *(int *)(*(long *)(param_1 + 0x70) + 0x10) == 0;
  }
  return true;
}



// ============================================================
// RVA: 0x15410cc | Atlas.Definitions.CharacterDefinition.get_FmodId
// ============================================================

undefined4 Atlas_Definitions_CharacterDefinition__get_FmodId(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa8);
}



// ============================================================
// RVA: 0x15410d4 | Atlas.Definitions.CharacterDefinition.get_CharacterSelectGridPos
// ============================================================

float Atlas_Definitions_CharacterDefinition__get_CharacterSelectGridPos(long param_1)

{
  return (float)(int)*(undefined8 *)(param_1 + 0xb0);
}



// ============================================================
// RVA: 0x15410e0 | Atlas.Definitions.CharacterDefinition.get_CharacterRankGridPos
// ============================================================

float Atlas_Definitions_CharacterDefinition__get_CharacterRankGridPos(long param_1)

{
  return (float)(int)*(undefined8 *)(param_1 + 0xb8);
}



// ============================================================
// RVA: 0x15410ec | Atlas.Definitions.CharacterDefinition.get_ChanceOfSpeaking
// ============================================================

undefined4 Atlas_Definitions_CharacterDefinition__get_ChanceOfSpeaking(long param_1)

{
  return *(undefined4 *)(param_1 + 0xac);
}



// ============================================================
// RVA: 0x15410f4 | Atlas.Definitions.CharacterDefinition.GetXpRewardIdByIndex
// ============================================================

undefined8 Atlas_Definitions_CharacterDefinition__GetXpRewardIdByIndex(long param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == 2) {
    puVar1 = (undefined8 *)(param_1 + 0xa0);
  }
  else if (param_2 == 1) {
    puVar1 = (undefined8 *)(param_1 + 0x98);
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    puVar1 = (undefined8 *)(param_1 + 0x90);
  }
  return *puVar1;
}



// ============================================================
// RVA: 0x154112c | Atlas.Definitions.CharacterDefinition.IsSkin
// ============================================================

uint Atlas_Definitions_CharacterDefinition__IsSkin(long param_1)

{
  uint uVar1;
  
  uVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(param_1 + 0x70),0);
  return uVar1 ^ 1;
}



// ============================================================
// RVA: 0x154114c | Atlas.Definitions.CharacterDefinition..ctor
// ============================================================

void Atlas_Definitions_CharacterDefinition___ctor(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb4f3e & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4f3e = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar1 = /*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270;
  *(undefined8 *)(param_1 + 0x70) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  *(undefined8 *)(param_1 + 0x78) = **(undefined8 **)(lVar1 + 0xb8);
  *(undefined4 *)(param_1 + 0xac) = 100;
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



