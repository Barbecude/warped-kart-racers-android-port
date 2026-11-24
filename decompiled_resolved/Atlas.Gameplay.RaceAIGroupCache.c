// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.RaceAIGroupCache

// ============================================================
// RVA: 0x14d1c9c | Atlas.Gameplay.RaceAIGroupCache.get_FirstPlacementOfGroup
// ============================================================

undefined4 Atlas_Gameplay_RaceAIGroupCache__get_FirstPlacementOfGroup(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x14d1ca4 | Atlas.Gameplay.RaceAIGroupCache.get_LastPlacementOfGroup
// ============================================================

undefined4 Atlas_Gameplay_RaceAIGroupCache__get_LastPlacementOfGroup(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ============================================================
// RVA: 0x14d1cac | Atlas.Gameplay.RaceAIGroupCache.get_FirstPlayerOfGroup
// ============================================================

undefined8 Atlas_Gameplay_RaceAIGroupCache__get_FirstPlayerOfGroup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x14d1cb4 | Atlas.Gameplay.RaceAIGroupCache.get_LastPlayerOfGroup
// ============================================================

undefined8 Atlas_Gameplay_RaceAIGroupCache__get_LastPlayerOfGroup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x14d1cbc | Atlas.Gameplay.RaceAIGroupCache.Init
// ============================================================

void Atlas_Gameplay_RaceAIGroupCache__Init
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(int *)(param_1 + 0x20) = param_4;
  *(int *)(param_1 + 0x24) = param_4 + (int)param_2 + -1;
  return;
}



// ============================================================
// RVA: 0x14d1cd0 | Atlas.Gameplay.RaceAIGroupCache.SetFirstPlayerCache
// ============================================================

void Atlas_Gameplay_RaceAIGroupCache__SetFirstPlayerCache(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}



// ============================================================
// RVA: 0x14d1cd8 | Atlas.Gameplay.RaceAIGroupCache.SetLastPlayerCache
// ============================================================

void Atlas_Gameplay_RaceAIGroupCache__SetLastPlayerCache(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}



// ============================================================
// RVA: 0x14d1ce0 | Atlas.Gameplay.RaceAIGroupCache..ctor
// ============================================================

void Atlas_Gameplay_RaceAIGroupCache___ctor(void)

{
  return;
}



