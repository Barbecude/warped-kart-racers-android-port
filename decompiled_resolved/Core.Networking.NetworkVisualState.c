// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkVisualState

// ============================================================
// RVA: 0x16618cc | Core.Networking.NetworkVisualState.IsSet
// ============================================================

bool Core_Networking_NetworkVisualState__IsSet(ushort *param_1,ushort param_2)

{
  return (*param_1 & param_2) != 0;
}



// ============================================================
// RVA: 0x16618dc | Core.Networking.NetworkVisualState.SetFlag
// ============================================================

void Core_Networking_NetworkVisualState__SetFlag(ushort *param_1,ushort param_2)

{
  *param_1 = *param_1 | param_2;
  return;
}



