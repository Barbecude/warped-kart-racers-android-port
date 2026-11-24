// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.CollidableUsableDefinition

// ============================================================
// RVA: 0x1570da8 | Atlas.Definitions.CollidableUsableDefinition.get_CollidableData
// ============================================================

void Atlas_Definitions_CollidableUsableDefinition__get_CollidableData
               (undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  param_1[1] = *(undefined8 *)(param_2 + 0x70);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x78);
  return;
}



// ============================================================
// RVA: 0x1570dbc | Atlas.Definitions.CollidableUsableDefinition..ctor
// ============================================================

void Atlas_Definitions_CollidableUsableDefinition___ctor(long param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  /*Atlas.Definitions.CollidableUsableDefinition.CollidableUsableData$$CreateDefault*/ func_0x0154a724(&uStack_38,0);
  *(undefined8 *)(param_1 + 0x70) = uStack_30;
  *(undefined8 *)(param_1 + 0x68) = uStack_38;
  *(undefined8 *)(param_1 + 0x78) = uStack_28;
  /*Atlas.Definitions.UsableDefinition$$.ctor*/ func_0x01524318(param_1,0);
  return;
}



