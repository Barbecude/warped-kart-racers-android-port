// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.SeasonDefinition

// ============================================================
// RVA: 0x14ef1bc | Atlas.Definitions.SeasonDefinition.get_LocId
// ============================================================

undefined8 Atlas_Definitions_SeasonDefinition__get_LocId(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x14ef1c4 | Atlas.Definitions.SeasonDefinition.get_IPDefinitionRef
// ============================================================

long Atlas_Definitions_SeasonDefinition__get_IPDefinitionRef(long param_1)

{
  return param_1 + 0x28;
}



// ============================================================
// RVA: 0x14ef1cc | Atlas.Definitions.SeasonDefinition.get_DateRanges
// ============================================================

undefined8 Atlas_Definitions_SeasonDefinition__get_DateRanges(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x14ef1d4 | Atlas.Definitions.SeasonDefinition.get_Rewards
// ============================================================

undefined8 Atlas_Definitions_SeasonDefinition__get_Rewards(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x14ef1dc | Atlas.Definitions.SeasonDefinition.get_MapFocusDefRef
// ============================================================

long Atlas_Definitions_SeasonDefinition__get_MapFocusDefRef(long param_1)

{
  return param_1 + 0x48;
}



// ============================================================
// RVA: 0x14ef1e4 | Atlas.Definitions.SeasonDefinition.get_FocusableMaps
// ============================================================

undefined8 Atlas_Definitions_SeasonDefinition__get_FocusableMaps(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x14ef1ec | Atlas.Definitions.SeasonDefinition.get_CharacterFocusDefRef
// ============================================================

long Atlas_Definitions_SeasonDefinition__get_CharacterFocusDefRef(long param_1)

{
  return param_1 + 0x60;
}



// ============================================================
// RVA: 0x14ef1f4 | Atlas.Definitions.SeasonDefinition.get_FinalRewardID
// ============================================================

undefined8 Atlas_Definitions_SeasonDefinition__get_FinalRewardID(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4c5c & 1) == 0) {
    func_0x00f78a20(0x3d247f0);
    bRam0000000003eb4c5c = 1;
  }
  lVar3 = *(long *)(param_1 + 0x40);
  if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar3 == 0) {
    func_0x00f78af4();
  }
  else {
    uVar1 = **(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) - 1;
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      return *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
    }
  }
  uVar2 = func_0x00f78b24();
  lVar3 = func_0x00f78ac0(uVar2,0);
  if ((bRam0000000003eb4c5d & 1) == 0) {
    func_0x00f78a20(0x3d1ef00);
    func_0x00f78a20(0x3d3a380);
    func_0x00f78a20(0x3d1d8f8);
    func_0x00f78a20(0x3d247f0);
    bRam0000000003eb4c5d = 1;
  }
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<DateRange>_TypeInfo*/ uRam0000000003d1d8f8);
  /*System.Collections.Generic.List<DateRange>$$.ctor*/ func_0x023ba660(uVar2,uRam0000000003d3a380);
  *(undefined8 *)(lVar3 + 0x38) = uVar2;
  if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,**(undefined4 **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8));
  *(undefined8 *)(lVar3 + 0x40) = uVar2;
  if ((bRam0000000003eb50a9 & 1) == 0) {
    func_0x00f78a20(0x3d21270,0);
    bRam0000000003eb50a9 = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar3 + 0x18) = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(lVar3,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pcRam0000000003ec0cc8)(lVar3);
  return uVar2;
}



// ============================================================
// RVA: 0x14ef294 | Atlas.Definitions.SeasonDefinition..ctor
// ============================================================

void Atlas_Definitions_SeasonDefinition___ctor(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4c5d & 1) == 0) {
    func_0x00f78a20(0x3d1ef00);
    func_0x00f78a20(0x3d3a380);
    func_0x00f78a20(0x3d1d8f8);
    func_0x00f78a20(0x3d247f0);
    bRam0000000003eb4c5d = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<DateRange>_TypeInfo*/ uRam0000000003d1d8f8);
  /*System.Collections.Generic.List<DateRange>$$.ctor*/ func_0x023ba660(uVar1,uRam0000000003d3a380);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = func_0x00f78a34(/*Core.Definitions.DefinitionID[]_TypeInfo*/ uRam0000000003d1ef00,**(undefined4 **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8));
  *(undefined8 *)(param_1 + 0x40) = uVar1;
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
// RVA: 0x14ef374 | Atlas.Definitions.SeasonDefinition..cctor
// ============================================================

void Atlas_Definitions_SeasonDefinition___cctor(void)

{
  if ((bRam0000000003eb4c5e & 1) == 0) {
    func_0x00f78a20(0x3d247f0);
    bRam0000000003eb4c5e = 1;
  }
  **(undefined4 **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) = 10;
  return;
}



