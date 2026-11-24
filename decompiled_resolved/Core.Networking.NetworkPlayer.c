// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkPlayer

// ============================================================
// RVA: 0x165ab90 | Core.Networking.NetworkPlayer.IsLocal
// ============================================================

bool Core_Networking_NetworkPlayer__IsLocal(long param_1)

{
  return (*(uint *)(param_1 + 8) & 0xfffffffd) == 0;
}



// ============================================================
// RVA: 0x165aba0 | Core.Networking.NetworkPlayer.IsRemote
// ============================================================

bool Core_Networking_NetworkPlayer__IsRemote(long param_1)

{
  return (*(uint *)(param_1 + 8) & 0xfffffffd) == 1;
}



// ============================================================
// RVA: 0x165abb4 | Core.Networking.NetworkPlayer.IsAI
// ============================================================

bool Core_Networking_NetworkPlayer__IsAI(long param_1)

{
  return (*(uint *)(param_1 + 8) & 0xfffffffe) == 2;
}



