// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartUsableManager.KartUsableCommand

// ============================================================
// RVA: 0x155ab28 | Atlas.Gameplay.Kart.KartUsableManager.KartUsableCommand.get_HasPosition
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool Atlas_Gameplay_Kart_KartUsableManager_KartUsableCommand__get_HasPosition(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x34) - 0.0;
  fVar2 = *(float *)(param_1 + 0x38) - 0.0;
  fVar3 = *(float *)(param_1 + 0x3c) - 0.0;
  return _UNK_033f8490 <= fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
}



