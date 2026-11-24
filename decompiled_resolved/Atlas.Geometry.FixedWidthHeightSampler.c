// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Geometry.FixedWidthHeightSampler

// ============================================================
// RVA: 0x1586268 | Atlas.Geometry.FixedWidthHeightSampler.Init
// ============================================================

void Atlas_Geometry_FixedWidthHeightSampler__Init
               (undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x10) = param_1;
  *(undefined4 *)(param_3 + 0x14) = param_2;
  return;
}



// ============================================================
// RVA: 0x1586270 | Atlas.Geometry.FixedWidthHeightSampler.TryGetNext
// ============================================================

undefined8
Atlas_Geometry_FixedWidthHeightSampler__TryGetNext
          (long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_3 = *(undefined4 *)(param_1 + 0x10);
  *param_4 = *(undefined4 *)(param_1 + 0x14);
  return 1;
}



// ============================================================
// RVA: 0x1586288 | Atlas.Geometry.FixedWidthHeightSampler..ctor
// ============================================================

void Atlas_Geometry_FixedWidthHeightSampler___ctor(void)

{
  return;
}



