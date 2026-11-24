// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Definitions.DefinitionData

// ============================================================
// RVA: 0x1645134 | Core.Definitions.DefinitionData.get_Type
// ============================================================

undefined8 Core_Definitions_DefinitionData__get_Type(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x164513c | Core.Definitions.DefinitionData.get_DataPath
// ============================================================

undefined8 Core_Definitions_DefinitionData__get_DataPath(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1645144 | Core.Definitions.DefinitionData.get_IDDefinitionMap
// ============================================================

undefined8 Core_Definitions_DefinitionData__get_IDDefinitionMap(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x164514c | Core.Definitions.DefinitionData.get_DefinitionList
// ============================================================

undefined8 Core_Definitions_DefinitionData__get_DefinitionList(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1645154 | Core.Definitions.DefinitionData.get_DefinitionReadOnlyList
// ============================================================

undefined8 Core_Definitions_DefinitionData__get_DefinitionReadOnlyList(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x164515c | Core.Definitions.DefinitionData..ctor
// ============================================================

ulong Core_Definitions_DefinitionData___ctor(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if ((bRam0000000003eb574a & 1) == 0) {
    func_0x00f78a20(0x3d2e278);
    func_0x00f78a20(0x3d1c1c8);
    func_0x00f78a20(0x3d3a8a0);
    func_0x00f78a20(0x3d3a890);
    func_0x00f78a20(0x3d1d9e8);
    bRam0000000003eb574a = 1;
  }
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, IDefinition>_TypeInfo*/ uRam0000000003d1c1c8);
  /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$.ctor*/ func_0x01e3bb54(uVar2,uRam0000000003d2e278);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  lVar3 = func_0x00f78aec(/*System.Collections.Generic.List<IDefinition>_TypeInfo*/ uRam0000000003d1d9e8);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(lVar3,uRam0000000003d3a890);
  *(long *)(param_1 + 0x20) = lVar3;
  if (lVar3 != 0) {
    uVar4 = /*System.Collections.Generic.List<DebugUI.Panel>$$AsReadOnly*/ func_0x02427384(lVar3,uRam0000000003d3a8a0);
    *(ulong *)(param_1 + 0x28) = uVar4;
    return uVar4;
  }
  puVar5 = (undefined8 *)func_0x00f78af4();
  uVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*puVar5,0);
  return (ulong)(uVar1 ^ 1);
}



