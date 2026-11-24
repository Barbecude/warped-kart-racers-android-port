// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Assets.AssetBucketDescription

// ============================================================
// RVA: 0x1634098 | Core.Assets.AssetBucketDescription.get_Name
// ============================================================

undefined8 Core_Assets_AssetBucketDescription__get_Name(undefined8 *param_1)

{
  return *param_1;
}



// ============================================================
// RVA: 0x16340a0 | Core.Assets.AssetBucketDescription.get_CachingStrategy
// ============================================================

undefined4 Core_Assets_AssetBucketDescription__get_CachingStrategy(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x16340a8 | Core.Assets.AssetBucketDescription.get_Limit
// ============================================================

undefined4 Core_Assets_AssetBucketDescription__get_Limit(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ============================================================
// RVA: 0x16340b0 | Core.Assets.AssetBucketDescription..ctor
// ============================================================

void Core_Assets_AssetBucketDescription___ctor
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = param_4;
  return;
}



