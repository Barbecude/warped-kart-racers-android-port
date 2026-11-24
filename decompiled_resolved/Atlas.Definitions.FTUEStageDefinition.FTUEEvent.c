// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.FTUEStageDefinition.FTUEEvent

// ============================================================
// RVA: 0x154bfc4 | Atlas.Definitions.FTUEStageDefinition.FTUEEvent.get_EventDefinition
// ============================================================

long Atlas_Definitions_FTUEStageDefinition_FTUEEvent__get_EventDefinition(long param_1)

{
  return param_1 + 0x10;
}



// ============================================================
// RVA: 0x154bfcc | Atlas.Definitions.FTUEStageDefinition.FTUEEvent.get_NumChallengesToComplete
// ============================================================

undefined4
Atlas_Definitions_FTUEStageDefinition_FTUEEvent__get_NumChallengesToComplete(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x154bfd4 | Atlas.Definitions.FTUEStageDefinition.FTUEEvent..ctor
// ============================================================

void Atlas_Definitions_FTUEStageDefinition_FTUEEvent___ctor(long param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 1;
  return;
}



