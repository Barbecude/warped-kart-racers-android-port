// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Analytics.AnalyticsManager.CustomParams

// ============================================================
// RVA: 0x16333c8 | Core.Analytics.AnalyticsManager.CustomParams..ctor
// ============================================================

void Core_Analytics_AnalyticsManager_CustomParams___ctor
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  if ((bRam0000000003eb5668 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb5668 = 1;
  }
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = param_3;
  if (param_3 == 0) {
    param_1[2] = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  return;
}



// ============================================================
// RVA: 0x163343c | Core.Analytics.AnalyticsManager.CustomParams..ctor
// ============================================================

void Core_Analytics_AnalyticsManager_CustomParams___ctor
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  return;
}



