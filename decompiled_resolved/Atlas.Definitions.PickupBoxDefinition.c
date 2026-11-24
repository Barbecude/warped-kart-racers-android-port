// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.PickupBoxDefinition

// ============================================================
// RVA: 0x14b8be8 | Atlas.Definitions.PickupBoxDefinition.get_AssetKey
// ============================================================

undefined8 Atlas_Definitions_PickupBoxDefinition__get_AssetKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x14b8bf0 | Atlas.Definitions.PickupBoxDefinition.get_PlayerTable
// ============================================================

undefined8 Atlas_Definitions_PickupBoxDefinition__get_PlayerTable(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x14b8bf8 | Atlas.Definitions.PickupBoxDefinition.get_AiTable
// ============================================================

undefined8 Atlas_Definitions_PickupBoxDefinition__get_AiTable(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x14b8c00 | Atlas.Definitions.PickupBoxDefinition.get_LocKey
// ============================================================

undefined8 Atlas_Definitions_PickupBoxDefinition__get_LocKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x14b8c08 | Atlas.Definitions.PickupBoxDefinition.get_PickupAtlasedSpriteRef
// ============================================================

undefined8 Atlas_Definitions_PickupBoxDefinition__get_PickupAtlasedSpriteRef(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x14b8c10 | Atlas.Definitions.PickupBoxDefinition.get_PickupSmallAtlasedSpriteRef
// ============================================================

undefined8 Atlas_Definitions_PickupBoxDefinition__get_PickupSmallAtlasedSpriteRef(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x14b8c18 | Atlas.Definitions.PickupBoxDefinition.get_HasLocKeyAndSprite
// ============================================================

ulong Atlas_Definitions_PickupBoxDefinition__get_HasLocKeyAndSprite(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb4add & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4add = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
    if ((int)uVar2 != 0) {
      uVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(param_1 + 0x38),0);
      uVar2 = (ulong)(uVar1 ^ 1);
    }
    return uVar2;
  }
  uVar2 = func_0x00f78af4();
  return uVar2;
}



// ============================================================
// RVA: 0x14b8ca8 | Atlas.Definitions.PickupBoxDefinition.get_PickBoxHeuristicValue
// ============================================================

undefined4 Atlas_Definitions_PickupBoxDefinition__get_PickBoxHeuristicValue(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x14b8cb0 | Atlas.Definitions.PickupBoxDefinition..ctor
// ============================================================

void Atlas_Definitions_PickupBoxDefinition___ctor(long param_1)

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



