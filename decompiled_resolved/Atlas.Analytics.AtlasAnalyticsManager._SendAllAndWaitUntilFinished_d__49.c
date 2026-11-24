// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Analytics.AtlasAnalyticsManager.<SendAllAndWaitUntilFinished>d__49

// ============================================================
// RVA: 0x15456a8 | Atlas.Analytics.AtlasAnalyticsManager.<SendAllAndWaitUntilFinished>d__49..ctor
// ============================================================

void Atlas_Analytics_AtlasAnalyticsManager__SendAllAndWaitUntilFinished_d__49___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15456d4 | Atlas.Analytics.AtlasAnalyticsManager.<SendAllAndWaitUntilFinished>d__49.System.IDisposable.Dispose
// ============================================================

void Atlas_Analytics_AtlasAnalyticsManager__SendAllAndWaitUntilFinished_d__49__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x15456d8 | Atlas.Analytics.AtlasAnalyticsManager.<SendAllAndWaitUntilFinished>d__49.MoveNext
// ============================================================

undefined8
Atlas_Analytics_AtlasAnalyticsManager__SendAllAndWaitUntilFinished_d__49__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    fVar5 = *(float *)(param_1 + 0x2c);
    fVar4 = (float)/*UnityEngine.Time$$get_unscaledDeltaTime*/ func_0x03272c40(0);
    *(float *)(param_1 + 0x2c) = fVar5 + fVar4;
    if (lVar3 == 0) goto LAB_015457c8;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto LAB_015457c8;
    if (*(char *)(lVar3 + 0x78) == '\0') {
      return 0;
    }
    if (*(long *)(lVar3 + 0x40) == 0) goto LAB_015457c8;
    if (*(char *)(*(long *)(lVar3 + 0x40) + 0x6d) == '\0') {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(long *)(lVar3 + 0x40) != 0) {
    iVar1 = /*Core.Analytics.AnalyticsManager$$get_QueuedEventCount*/ func_0x01630d48(*(long *)(lVar3 + 0x40),0);
    if (iVar1 < 1) {
      if (*(long *)(lVar3 + 0x40) == 0) goto LAB_015457c8;
      uVar2 = /*Core.Analytics.AnalyticsManager$$get_IsSendingEventBatch*/ func_0x01630d38(*(long *)(lVar3 + 0x40),0);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
    }
    if (*(float *)(param_1 + 0x28) <= *(float *)(param_1 + 0x2c)) {
      return 0;
    }
    if (*(long *)(lVar3 + 0x40) != 0) {
      /*Core.Analytics.AnalyticsManager$$RequestSendNextBatchOfQueuedEvents*/ func_0x01631884(*(long *)(lVar3 + 0x40),0);
      if (*(long *)(lVar3 + 0x40) != 0) {
        /*Core.Analytics.AnalyticsManager$$Update*/ func_0x01631108(*(long *)(lVar3 + 0x40),0);
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
  }
LAB_015457c8:
  lVar3 = func_0x00f78af4();
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x15457cc | Atlas.Analytics.AtlasAnalyticsManager.<SendAllAndWaitUntilFinished>d__49.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Analytics_AtlasAnalyticsManager__SendAllAndWaitUntilFinished_d__49__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15457d4 | Atlas.Analytics.AtlasAnalyticsManager.<SendAllAndWaitUntilFinished>d__49.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_Analytics_AtlasAnalyticsManager__SendAllAndWaitUntilFinished_d__49__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d621e8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1545814 | Atlas.Analytics.AtlasAnalyticsManager.<SendAllAndWaitUntilFinished>d__49.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Analytics_AtlasAnalyticsManager__SendAllAndWaitUntilFinished_d__49__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



