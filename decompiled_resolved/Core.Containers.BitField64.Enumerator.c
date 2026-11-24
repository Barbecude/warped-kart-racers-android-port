// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Containers.BitField64.Enumerator

// ============================================================
// RVA: 0x163c460 | Core.Containers.BitField64.Enumerator..ctor
// ============================================================

void Core_Containers_BitField64_Enumerator___ctor(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return;
}



// ============================================================
// RVA: 0x163cc54 | Core.Containers.BitField64.Enumerator.MoveNext
// ============================================================

bool Core_Containers_BitField64_Enumerator__MoveNext(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar1;
  return iVar1 < 0x40;
}



// ============================================================
// RVA: 0x163cc6c | Core.Containers.BitField64.Enumerator.get_Current
// ============================================================

uint Core_Containers_BitField64_Enumerator__get_Current(undefined8 *param_1)

{
  return (uint)(*(ulong *)*param_1 >> ((ulong)*(uint *)(param_1 + 1) & 0x3f)) & 1;
}



