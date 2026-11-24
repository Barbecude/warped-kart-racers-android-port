// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.CollidableUsableDefinition.CollidableUsableData

// ============================================================
// RVA: 0x154a6fc | Atlas.Definitions.CollidableUsableDefinition.CollidableUsableData.get_CanSelfHit
// ============================================================

undefined1
Atlas_Definitions_CollidableUsableDefinition_CollidableUsableData__get_CanSelfHit
          (undefined1 *param_1)

{
  return *param_1;
}



// ============================================================
// RVA: 0x154a704 | Atlas.Definitions.CollidableUsableDefinition.CollidableUsableData.get_SelfHitTime
// ============================================================

undefined4
Atlas_Definitions_CollidableUsableDefinition_CollidableUsableData__get_SelfHitTime(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// ============================================================
// RVA: 0x154a70c | Atlas.Definitions.CollidableUsableDefinition.CollidableUsableData.get_KartTriggerEffectParameters
// ============================================================

undefined8
Atlas_Definitions_CollidableUsableDefinition_CollidableUsableData__get_KartTriggerEffectParameters
          (long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x154a714 | Atlas.Definitions.CollidableUsableDefinition.CollidableUsableData.get_IgnoresHopInvuln
// ============================================================

undefined1
Atlas_Definitions_CollidableUsableDefinition_CollidableUsableData__get_IgnoresHopInvuln
          (long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x154a71c | Atlas.Definitions.CollidableUsableDefinition.CollidableUsableData.get_PhasesThroughHop
// ============================================================

undefined1
Atlas_Definitions_CollidableUsableDefinition_CollidableUsableData__get_PhasesThroughHop
          (long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



// ============================================================
// RVA: 0x154a724 | Atlas.Definitions.CollidableUsableDefinition.CollidableUsableData.CreateDefault
// ============================================================

void Atlas_Definitions_CollidableUsableDefinition_CollidableUsableData__CreateDefault
               (undefined1 *param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4f6f & 1) == 0) {
    func_0x00f78a20(0x3d22d08);
    bRam0000000003eb4f6f = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Gameplay.KartTriggerEffectParameters_TypeInfo*/ uRam0000000003d22d08);
  Atlas_Gameplay_KartTriggerEffectParameters___ctor(uVar1,0);
  *param_1 = 1;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3ecccccd;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



