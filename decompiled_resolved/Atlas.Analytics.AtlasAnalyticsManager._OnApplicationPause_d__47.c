// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Analytics.AtlasAnalyticsManager.<OnApplicationPause>d__47

// ============================================================
// RVA: 0x15455b0 | Atlas.Analytics.AtlasAnalyticsManager.<OnApplicationPause>d__47..ctor
// ============================================================

void Atlas_Analytics_AtlasAnalyticsManager__OnApplicationPause_d__47___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15455dc | Atlas.Analytics.AtlasAnalyticsManager.<OnApplicationPause>d__47.System.IDisposable.Dispose
// ============================================================

void Atlas_Analytics_AtlasAnalyticsManager__OnApplicationPause_d__47__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x15455e0 | Atlas.Analytics.AtlasAnalyticsManager.<OnApplicationPause>d__47.MoveNext
// ============================================================

undefined8 Atlas_Analytics_AtlasAnalyticsManager__OnApplicationPause_d__47__MoveNext(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    uVar3 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar2 == 0) {
      lVar2 = func_0x00f78af4();
      return *(undefined8 *)(lVar2 + 0x18);
    }
    if (*(char *)(lVar2 + 0x78) == '\0') {
      return 0;
    }
    uVar1 = Atlas_Analytics_AtlasAnalyticsManager__SendAllAndWaitUntilFinished(0x40400000,lVar2,0);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    uVar3 = 1;
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  return uVar1;
}



// ============================================================
// RVA: 0x1545658 | Atlas.Analytics.AtlasAnalyticsManager.<OnApplicationPause>d__47.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Analytics_AtlasAnalyticsManager__OnApplicationPause_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1545660 | Atlas.Analytics.AtlasAnalyticsManager.<OnApplicationPause>d__47.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_Analytics_AtlasAnalyticsManager__OnApplicationPause_d__47__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d621e0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x15456a0 | Atlas.Analytics.AtlasAnalyticsManager.<OnApplicationPause>d__47.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Analytics_AtlasAnalyticsManager__OnApplicationPause_d__47__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



