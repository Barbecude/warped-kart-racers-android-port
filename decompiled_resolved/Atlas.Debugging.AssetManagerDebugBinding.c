// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Debugging.AssetManagerDebugBinding

// ============================================================
// RVA: 0x14552fc | Atlas.Debugging.AssetManagerDebugBinding.Init
// ============================================================

void Atlas_Debugging_AssetManagerDebugBinding__Init(void)

{
  return;
}



// ============================================================
// RVA: 0x1455300 | Atlas.Debugging.AssetManagerDebugBinding.Update
// ============================================================

void Atlas_Debugging_AssetManagerDebugBinding__Update(void)

{
  return;
}



// ============================================================
// RVA: 0x1455304 | Atlas.Debugging.AssetManagerDebugBinding.DeInit
// ============================================================

void Atlas_Debugging_AssetManagerDebugBinding__DeInit(void)

{
  return;
}



// ============================================================
// RVA: 0x1455308 | Atlas.Debugging.AssetManagerDebugBinding..ctor
// ============================================================

void Atlas_Debugging_AssetManagerDebugBinding___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1455310 | Atlas.Debugging.AssetManagerDebugBinding..cctor
// ============================================================

void Atlas_Debugging_AssetManagerDebugBinding___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb479e & 1) == 0) {
    func_0x00f78a20(0x3d1fda8);
    func_0x00f78a20(0x3d692d0);
    bRam0000000003eb479e = 1;
  }
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('AssetManagerDebugBinding.Update()')*/ uRam0000000003d692d0,1,0,0,0);
  **(undefined8 **)(/*Atlas.Debugging.AssetManagerDebugBinding_TypeInfo*/ lRam0000000003d1fda8 + 0xb8) = uVar1;
  return;
}



