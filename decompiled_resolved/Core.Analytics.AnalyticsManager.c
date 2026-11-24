// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Analytics.AnalyticsManager

// ============================================================
// RVA: 0x1630cdc | Core.Analytics.AnalyticsManager.get_SuccessSentEventBatchCount
// ============================================================

undefined4 Core_Analytics_AnalyticsManager__get_SuccessSentEventBatchCount(long param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



// ============================================================
// RVA: 0x1630ce4 | Core.Analytics.AnalyticsManager.get_FailedSentEventBatchCount
// ============================================================

undefined4 Core_Analytics_AnalyticsManager__get_FailedSentEventBatchCount(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x1630cec | Core.Analytics.AnalyticsManager.get_TotalSentPostBodySize
// ============================================================

undefined4 Core_Analytics_AnalyticsManager__get_TotalSentPostBodySize(long param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// ============================================================
// RVA: 0x1630cf4 | Core.Analytics.AnalyticsManager.get_TotalPostBodySizeBeforeCompression
// ============================================================

undefined4 Core_Analytics_AnalyticsManager__get_TotalPostBodySizeBeforeCompression(long param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x1630cfc | Core.Analytics.AnalyticsManager.get_TotalTimeBuildingAndPostingEventsMs
// ============================================================

ulong Core_Analytics_AnalyticsManager__get_TotalTimeBuildingAndPostingEventsMs(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_18;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    uStack_18 = /*System.Diagnostics.Stopwatch$$get_Elapsed*/ func_0x02f28538(*(long *)(param_1 + 0x88),0);
    uVar1 = /*System.TimeSpan$$get_TotalMilliseconds*/ func_0x029edf00(&uStack_18,0);
    return uVar1;
  }
  lVar2 = func_0x00f78af4();
  return (ulong)(*(long *)(lVar2 + 0x50) != 0);
}



// ============================================================
// RVA: 0x1630d38 | Core.Analytics.AnalyticsManager.get_IsSendingEventBatch
// ============================================================

bool Core_Analytics_AnalyticsManager__get_IsSendingEventBatch(long param_1)

{
  return *(long *)(param_1 + 0x50) != 0;
}



// ============================================================
// RVA: 0x1630d48 | Core.Analytics.AnalyticsManager.get_QueuedEventCount
// ============================================================

uint Core_Analytics_AnalyticsManager__get_QueuedEventCount(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb5651 & 1) == 0) {
    func_0x00f78a20(0x3d3cc68);
    bRam0000000003eb5651 = 1;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    return *(uint *)(*(long *)(param_1 + 0x38) + 0x18);
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb5652 & 1) == 0) {
    func_0x00f78a20(0x3d3cc68);
    bRam0000000003eb5652 = 1;
  }
  if (*(long *)(lVar1 + 0x40) != 0) {
    return *(uint *)(*(long *)(lVar1 + 0x40) + 0x18);
  }
  lVar1 = func_0x00f78af4();
  return (uint)*(byte *)(lVar1 + 0x6c);
}



// ============================================================
// RVA: 0x1630d94 | Core.Analytics.AnalyticsManager.get_PostedEventHistoryCount
// ============================================================

uint Core_Analytics_AnalyticsManager__get_PostedEventHistoryCount(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb5652 & 1) == 0) {
    func_0x00f78a20(0x3d3cc68);
    bRam0000000003eb5652 = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    return *(uint *)(*(long *)(param_1 + 0x40) + 0x18);
  }
  lVar1 = func_0x00f78af4();
  return (uint)*(byte *)(lVar1 + 0x6c);
}



// ============================================================
// RVA: 0x1630de0 | Core.Analytics.AnalyticsManager.get_AllowStoringEvents
// ============================================================

undefined1 Core_Analytics_AnalyticsManager__get_AllowStoringEvents(long param_1)

{
  return *(undefined1 *)(param_1 + 0x6c);
}



// ============================================================
// RVA: 0x1630de8 | Core.Analytics.AnalyticsManager.set_AllowStoringEvents
// ============================================================

void Core_Analytics_AnalyticsManager__set_AllowStoringEvents(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6c) = param_2;
  return;
}



// ============================================================
// RVA: 0x1630df0 | Core.Analytics.AnalyticsManager.get_AllowSendingEvents
// ============================================================

undefined1 Core_Analytics_AnalyticsManager__get_AllowSendingEvents(long param_1)

{
  return *(undefined1 *)(param_1 + 0x6d);
}



// ============================================================
// RVA: 0x1630df8 | Core.Analytics.AnalyticsManager.set_AllowSendingEvents
// ============================================================

void Core_Analytics_AnalyticsManager__set_AllowSendingEvents(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6d) = param_2;
  return;
}



// ============================================================
// RVA: 0x1630e00 | Core.Analytics.AnalyticsManager.get_CompressPostBody
// ============================================================

undefined1 Core_Analytics_AnalyticsManager__get_CompressPostBody(long param_1)

{
  return *(undefined1 *)(param_1 + 0x6e);
}



// ============================================================
// RVA: 0x1630e08 | Core.Analytics.AnalyticsManager.set_CompressPostBody
// ============================================================

void Core_Analytics_AnalyticsManager__set_CompressPostBody(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6e) = param_2;
  return;
}



// ============================================================
// RVA: 0x1630e10 | Core.Analytics.AnalyticsManager.get_StoreEventHistory
// ============================================================

undefined1 Core_Analytics_AnalyticsManager__get_StoreEventHistory(long param_1)

{
  return *(undefined1 *)(param_1 + 0x6f);
}



// ============================================================
// RVA: 0x1630e18 | Core.Analytics.AnalyticsManager.set_StoreEventHistory
// ============================================================

void Core_Analytics_AnalyticsManager__set_StoreEventHistory(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6f) = param_2;
  return;
}



// ============================================================
// RVA: 0x1630e20 | Core.Analytics.AnalyticsManager.get_CustomParamListsCreated
// ============================================================

undefined4 Core_Analytics_AnalyticsManager__get_CustomParamListsCreated(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x1630e28 | Core.Analytics.AnalyticsManager.get_CustomParamListPoolSize
// ============================================================

ulong Core_Analytics_AnalyticsManager__get_CustomParamListPoolSize(long param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb5653 & 1) == 0) {
    func_0x00f78a20(0x3d40358);
    bRam0000000003eb5653 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    return (ulong)*(uint *)(*(long *)(param_1 + 0x28) + 0x18);
  }
  lVar1 = func_0x00f78af4();
  return *(ulong *)(lVar1 + 0x78);
}



// ============================================================
// RVA: 0x1630e74 | Core.Analytics.AnalyticsManager.get_LastPostedEventName
// ============================================================

undefined8 Core_Analytics_AnalyticsManager__get_LastPostedEventName(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x1630e7c | Core.Analytics.AnalyticsManager.Init
// ============================================================

void Core_Analytics_AnalyticsManager__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb5654 & 1) == 0) {
    func_0x00f78a20(0x3d1eda0);
    func_0x00f78a20(0x3d3cc30);
    func_0x00f78a20(0x3d1e058);
    func_0x00f78a20(0x3d40340);
    func_0x00f78a20(0x3d1e868);
    func_0x00f78a20(0x3d24d88);
    func_0x00f78a20(0x3d24dd8);
    bRam0000000003eb5654 = 1;
  }
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Stack<List<AnalyticsManager.CustomParams>>_TypeInfo*/ uRam0000000003d1e868);
  /*System.Collections.Generic.Stack<DtdParser.ParseElementOnlyContent_LocalFrame>$$.ctor*/ func_0x028651e0(uVar1,uRam0000000003d40340);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  /*Core.Analytics.AnalyticsManager$$FillCustomParamListPool*/ func_0x01631014(param_1,0x19);
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<AnalyticsManager.Event>_TypeInfo*/ uRam0000000003d1e058);
  /*System.Collections.Generic.List<AnalyticsManager.Event>$$.ctor*/ func_0x024a6c70(uVar1,0x19,uRam0000000003d3cc30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<AnalyticsManager.Event>_TypeInfo*/ uRam0000000003d1e058);
  /*System.Collections.Generic.List<AnalyticsManager.Event>$$.ctor*/ func_0x024a6c70(uVar1,10,uRam0000000003d3cc30);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
  /*System.Text.StringBuilder$$.ctor*/ func_0x029d1794(uVar1,&UNK_00046666,0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined2 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x6f) = param_4;
  uVar1 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,0x60000);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Diagnostics.Stopwatch_TypeInfo*/ uRam0000000003d24d88);
  /*System.Diagnostics.Stopwatch$$.ctor*/ func_0x02f28530(uVar1,0);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1631014 | Core.Analytics.AnalyticsManager.FillCustomParamListPool
// ============================================================

void Core_Analytics_AnalyticsManager__FillCustomParamListPool(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  
  if ((bRam0000000003eb565c & 1) == 0) {
    func_0x00f78a20(0x3d3cbf8);
    func_0x00f78a20(0x3d1e050);
    func_0x00f78a20(0x3d40350);
    bRam0000000003eb565c = 1;
  }
  iVar3 = param_2;
  if (0 < param_2) {
    do {
      lVar2 = *(long *)(param_1 + 0x28);
      uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<AnalyticsManager.CustomParams>_TypeInfo*/ uRam0000000003d1e050);
      /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$.ctor*/ func_0x024a3f6c(uVar1,8,uRam0000000003d3cbf8);
      if (lVar2 == 0) {
        lVar2 = func_0x00f78af4();
        *(undefined8 *)(lVar2 + 0x80) = 0;
        *(undefined8 *)(lVar2 + 0x50) = 0;
        *(undefined8 *)(lVar2 + 0x18) = 0;
        *(undefined8 *)(lVar2 + 0x10) = 0;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(undefined8 *)(lVar2 + 0x38) = 0;
        *(undefined8 *)(lVar2 + 0x40) = 0;
        return;
      }
      /*System.Collections.Generic.Stack<DtdParser.ParseElementOnlyContent_LocalFrame>$$Push*/ func_0x02865908(lVar2,uVar1,uRam0000000003d40350);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + param_2;
  return;
}



// ============================================================
// RVA: 0x16310f0 | Core.Analytics.AnalyticsManager.DeInit
// ============================================================

void Core_Analytics_AnalyticsManager__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// ============================================================
// RVA: 0x1631108 | Core.Analytics.AnalyticsManager.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x01631738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01631784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01632d60) */
/* WARNING: Removing unreachable block (ram,0x01632d70) */
/* WARNING: Removing unreachable block (ram,0x01632d7c) */
/* WARNING: Removing unreachable block (ram,0x01632d8c) */
/* WARNING: Removing unreachable block (ram,0x01632d14) */
/* WARNING: Removing unreachable block (ram,0x01632d1c) */
/* WARNING: Removing unreachable block (ram,0x01632ce8) */
/* WARNING: Removing unreachable block (ram,0x01632d2c) */
/* WARNING: Removing unreachable block (ram,0x01632d30) */
/* WARNING: Removing unreachable block (ram,0x01632d3c) */
/* WARNING: Removing unreachable block (ram,0x01632d64) */
/* WARNING: Removing unreachable block (ram,0x01632d68) */
/* WARNING: Removing unreachable block (ram,0x01632d48) */
/* WARNING: Removing unreachable block (ram,0x01632d4c) */
/* WARNING: Removing unreachable block (ram,0x01632cf0) */
/* WARNING: Removing unreachable block (ram,0x01632cf4) */
/* WARNING: Removing unreachable block (ram,0x01632d08) */
/* WARNING: Removing unreachable block (ram,0x01632cc0) */
/* WARNING: Removing unreachable block (ram,0x01632cc8) */
/* WARNING: Removing unreachable block (ram,0x01632cdc) */
/* WARNING: Removing unreachable block (ram,0x01632c50) */
/* WARNING: Removing unreachable block (ram,0x01632c5c) */
/* WARNING: Removing unreachable block (ram,0x01632d90) */
/* WARNING: Removing unreachable block (ram,0x01632d98) */
/* WARNING: Removing unreachable block (ram,0x01632c68) */
/* WARNING: Removing unreachable block (ram,0x01632c84) */
/* WARNING: Removing unreachable block (ram,0x01632c90) */
/* WARNING: Removing unreachable block (ram,0x01632c98) */
/* WARNING: Removing unreachable block (ram,0x01632ca0) */
/* WARNING: Removing unreachable block (ram,0x01632c20) */
/* WARNING: Removing unreachable block (ram,0x01632c28) */
/* WARNING: Removing unreachable block (ram,0x01632c44) */
/* WARNING: Removing unreachable block (ram,0x01632bd0) */
/* WARNING: Removing unreachable block (ram,0x01632bd8) */
/* WARNING: Removing unreachable block (ram,0x01632bf4) */
/* WARNING: Removing unreachable block (ram,0x01632c0c) */
/* WARNING: Removing unreachable block (ram,0x01632ba4) */
/* WARNING: Removing unreachable block (ram,0x01632bac) */
/* WARNING: Removing unreachable block (ram,0x01632bc4) */
/* WARNING: Removing unreachable block (ram,0x01632b74) */
/* WARNING: Removing unreachable block (ram,0x01632b7c) */
/* WARNING: Removing unreachable block (ram,0x01632b90) */
/* WARNING: Removing unreachable block (ram,0x01632b40) */
/* WARNING: Removing unreachable block (ram,0x01632b48) */
/* WARNING: Removing unreachable block (ram,0x01632b64) */
/* WARNING: Removing unreachable block (ram,0x01632adc) */
/* WARNING: Removing unreachable block (ram,0x01632aec) */
/* WARNING: Removing unreachable block (ram,0x01632af4) */
/* WARNING: Removing unreachable block (ram,0x01632af8) */
/* WARNING: Removing unreachable block (ram,0x01632b14) */
/* WARNING: Removing unreachable block (ram,0x01632b2c) */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x029d2fa0) */
/* WARNING: Removing unreachable block (ram,0x01631788) */
/* WARNING: Removing unreachable block (ram,0x0163173c) */
/* WARNING: Removing unreachable block (ram,0x01631740) */
/* WARNING: Removing unreachable block (ram,0x01632dac) */
/* WARNING: Removing unreachable block (ram,0x01632db4) */

long * Core_Analytics_AnalyticsManager__Update
                 (long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long extraout_x8;
  uint extraout_w9;
  uint uVar22;
  int iVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar27;
  undefined1 *puVar28;
  undefined *puVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  long lStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 ******ppppppuStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [16];
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 *****pppppuStack_30;
  undefined *puStack_28;
  
  /*Core.Analytics.AnalyticsManager$$UpdatePendingBatches*/ func_0x0163112c();
  plVar9 = (long *)0x0;
  if ((*(long *)(param_1 + 0x50) == 0) ||
     (plVar9 = (long *)/*UnityEngine.AsyncOperation$$get_isDone*/ func_0x032198dc(*(long *)(param_1 + 0x50),0), (int)plVar9 == 0)) {
    return plVar9;
  }
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar10 = *(long *)(*(long *)(param_1 + 0x50) + 0x20), lVar10 != 0)) {
    plVar9 = (long *)/*UnityEngine.Networking.UnityWebRequest$$get_result*/ func_0x032f8ea4(lVar10,0);
    if ((int)plVar9 == 1) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      plVar9 = (long *)/*Core.Analytics.AnalyticsManager$$RemoveAndArchiveQueuedEvents*/ func_0x016330c0(param_1,*(undefined4 *)(param_1 + 0x58));
    }
    else {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    return plVar9;
  }
  auVar30 = func_0x00f78af4();
  plVar12 = auVar30._0_8_;
  plVar3 = (long *)auStack_90;
  puStack_28 = &Core_Analytics_AnalyticsManager__PostEvent;
  plVar9 = plVar12;
  plVar18 = param_3;
  plVar21 = param_4;
  pppppuStack_30 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5655 & 1) == 0) {
    func_0x00f78a20(0x3d210a0);
    func_0x00f78a20(0x3d3cc08);
    func_0x00f78a20(0x3d3cc38);
    func_0x00f78a20(0x3d3cc58);
    func_0x00f78a20(0x3d3cc68);
    plVar9 = (long *)func_0x00f78a20(0x3d3cc70);
    bRam0000000003eb5655 = 1;
  }
  if (*(char *)((long)plVar12 + 0x6c) == '\0') {
    return plVar9;
  }
  if (((*(ushort *)(/*System.DateTimeOffset_TypeInfo*/ lRam0000000003d210a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTimeOffset_TypeInfo*/ lRam0000000003d210a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auStack_90 = /*System.DateTimeOffset$$get_UtcNow*/ func_0x02a99f14(0);
  uVar11 = /*System.DateTimeOffset$$ToUnixTimeSeconds*/ func_0x02a9afc0(auStack_90,0);
  if (param_4 == (long *)0x0) {
    unaff_x24 = 0;
    lVar10 = plVar12[7];
    if (lVar10 == 0) {
code_r0x016317e4:
      puVar29 = &Core_Analytics_AnalyticsManager__GetCustomParmListFromPool;
      plVar12 = (long *)func_0x00f78af4();
      goto code_r0x016317e8;
    }
    if (*(int *)(lVar10 + 0x18) < 100) {
code_r0x016317ac:
      uStack_68 = 0;
      plStack_80 = auVar30._8_8_;
      plStack_78 = param_3;
      uStack_70 = uVar11;
      plVar9 = (long *)/*System.Collections.Generic.List<AnalyticsManager.Event>$$Add*/ func_0x024a78a4(lVar10,&plStack_80,uRam0000000003d3cc38);
      plVar12[0xf] = (long)auVar30._8_8_;
      return plVar9;
    }
    lVar17 = *(long *)(*(long *)(lVar10 + 0x10) + 0x38);
    if (lVar17 == 0) {
      plVar18 = plRam0000000003d3cc58;
      /*System.Collections.Generic.List<AnalyticsManager.Event>$$RemoveAt*/ func_0x024a91fc(lVar10,0);
      lVar10 = plVar12[7];
      if (lVar10 != 0) goto code_r0x016317ac;
      goto code_r0x016317e4;
    }
    puVar29 = &UNK_01631788;
    uVar25 = 0;
    plVar9 = plVar12;
    plVar20 = param_3;
    uVar26 = uVar11;
    pppppppuVar27 = (undefined8 *******)&pppppuStack_30;
code_r0x016328b4:
    *(ulong *)((long)plVar3 + -0x30) = uVar25;
    *(long **)((long)plVar3 + -0x28) = plVar20;
    *(long **)((long)plVar3 + -0x20) = plVar9;
    *(long *)((long)plVar3 + -0x18) = auVar30._8_8_;
    *(undefined8 ********)((long)plVar3 + -0x10) = pppppppuVar27;
    *(undefined **)((long)plVar3 + -8) = puVar29;
    if ((bRam0000000003eb565e & 1) == 0) {
      func_0x00f78a20(0x3d3cc10);
      func_0x00f78a20(0x3d40350);
      bRam0000000003eb565e = 1;
    }
    if (lVar17 == 0) {
code_r0x01632938:
      lVar10 = func_0x00f78af4();
      *(long *)((long)plVar3 + -0x50) = auVar30._0_8_;
      *(long *)((long)plVar3 + -0x48) = lVar17;
      *(undefined1 **)((long)plVar3 + -0x40) = (undefined1 *)((long)plVar3 + -0x10);
      *(undefined **)((long)plVar3 + -0x38) = &Core_Analytics_AnalyticsManager__StartEventBatch;
      if ((bRam0000000003eb565f & 1) == 0) {
        func_0x00f78a20(0x3d7cc48);
        bRam0000000003eb565f = 1;
      }
      plVar9 = *(long **)(lVar10 + 0x20);
      if (plVar9 == (long *)0x0) {
        auVar30 = func_0x00f78af4();
        plVar12 = auVar30._0_8_;
        puVar4 = (undefined1 *)((long)plVar3 + -0xd0);
        puVar6 = (undefined1 *)((long)plVar3 + -0xd0);
        *(undefined8 *)((long)plVar3 + -0xb0) = unaff_x28;
        *(undefined8 *)((long)plVar3 + -0xa8) = unaff_x27;
        *(undefined8 *)((long)plVar3 + -0xa0) = unaff_x26;
        *(undefined8 *)((long)plVar3 + -0x98) = unaff_x25;
        *(long *)((long)plVar3 + -0x90) = unaff_x24;
        *(ulong *)((long)plVar3 + -0x88) = uVar26;
        *(ulong *)((long)plVar3 + -0x80) = uVar25;
        *(undefined8 *)((long)plVar3 + -0x78) = 0x3eb5000;
        *(undefined8 *)((long)plVar3 + -0x70) = 0x3eb5000;
        *(long *)((long)plVar3 + -0x68) = lVar10;
        *(undefined1 **)((long)plVar3 + -0x60) = (undefined1 *)((long)plVar3 + -0x40);
        *(undefined **)((long)plVar3 + -0x58) = &Core_Analytics_AnalyticsManager__AddEventToBatch;
        puVar28 = (undefined1 *)((long)plVar3 + -0x60);
        *(long *)((long)plVar3 + -200) = auVar30._8_8_;
        lVar10 = 0x3eb5000;
        plVar20 = plVar18;
        if ((bRam0000000003eb5660 & 1) == 0) {
          func_0x00f78a20(0x3d21ce0);
          func_0x00f78a20(0x3d3cc20);
          func_0x00f78a20(0x3d3cc28);
          func_0x00f78a20(0x3d66538);
          func_0x00f78a20(0x3d7cc30);
          func_0x00f78a20(0x3d66570);
          func_0x00f78a20(0x3d66580);
          func_0x00f78a20(0x3d7d1e0);
          func_0x00f78a20(0x3d66568);
          func_0x00f78a20(0x3d66fd8);
          func_0x00f78a20(0x3d66578);
          func_0x00f78a20(0x3d66518);
          func_0x00f78a20(0x3d66548);
          func_0x00f78a20(0x3d66588);
          bRam0000000003eb5660 = 1;
        }
        if (((ulong)plVar18 & 1) == 0) {
          plVar9 = (long *)plVar12[4];
          if (plVar9 != (long *)0x0) {
            puVar29 = &UNK_01632a9c;
            puVar6 = (undefined1 *)((long)plVar3 + -0xd0);
            uVar14 = /*STR(',')*/ uRam0000000003d66fd8;
            goto code_r0x029d2f8c;
          }
        }
        else {
          plVar9 = plVar12 + 4;
          plVar12 = plVar9;
          if (*plVar9 != 0) {
            uVar25 = 0x3d7cc30;
            plVar20 = (long *)0x0;
            /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*plVar9,/*STR('{')*/ uRam0000000003d7cc30,0);
            auVar32._8_8_ = /*STR('"event_id": "')*/ uRam0000000003d66570;
            auVar32._0_8_ = *plVar9;
            if (*plVar9 != 0) {
              lVar10 = 0x3d21ce0;
              plVar20 = (long *)0x0;
              puVar29 = &UNK_01632adc;
              goto code_r0x029d2c70;
            }
          }
        }
        lVar10 = func_0x00f78af4();
        *(undefined8 *)((long)plVar3 + -0xf0) = 0x3eb5000;
        *(long **)((long)plVar3 + -0xe8) = plVar12;
        *(undefined1 **)((long)plVar3 + -0xe0) = puVar28;
        *(undefined **)((long)plVar3 + -0xd8) = &Core_Analytics_AnalyticsManager__EndEventBatch;
        if ((bRam0000000003eb5661 & 1) == 0) {
          func_0x00f78a20(0x3d76b40);
          bRam0000000003eb5661 = 1;
        }
        plVar9 = *(long **)(lVar10 + 0x20);
        if (plVar9 == (long *)0x0) {
          auVar30 = func_0x00f78af4();
          lVar17 = auVar30._0_8_;
          *(undefined8 *)((long)plVar3 + -0x110) = 0x3eb5000;
          *(long *)((long)plVar3 + -0x108) = lVar10;
          *(undefined1 **)((long)plVar3 + -0x100) = (undefined1 *)((long)plVar3 + -0xe0);
          *(undefined **)((long)plVar3 + -0xf8) = &Core_Analytics_AnalyticsManager__SendEventBatch;
          uVar14 = /*Core.Analytics.AnalyticsManager$$CreatePOSTRequest*/ func_0x01632e78(lVar17,*(undefined8 *)(lVar17 + 0x18),auVar30._8_8_,plVar20);
          /*Core.Analytics.AnalyticsManager$$SendEventBatch*/ func_0x01633008(lVar17,uVar14);
          return (long *)((long)&MACH_HEADER.magic + 1);
        }
        puVar28 = *(undefined1 **)((long)plVar3 + -0xe0);
        puVar29 = *(undefined **)((long)plVar3 + -0xd8);
        lVar10 = *(long *)((long)plVar3 + -0xf0);
        plVar12 = *(long **)((long)plVar3 + -0xe8);
        uVar14 = /*STR('] }')*/ uRam0000000003d76b40;
      }
      else {
        puVar28 = *(undefined1 **)((long)plVar3 + -0x40);
        puVar29 = *(undefined **)((long)plVar3 + -0x38);
        lVar10 = *(long *)((long)plVar3 + -0x50);
        plVar12 = *(long **)((long)plVar3 + -0x48);
        puVar6 = (undefined1 *)((long)plVar3 + -0x30);
        uVar14 = /*STR('{ "events": [')*/ uRam0000000003d7cc48;
        plVar18 = (long *)0x3eb5000;
      }
code_r0x029d2f8c:
      auVar32._8_8_ = uVar14;
      auVar32._0_8_ = plVar9;
      plVar20 = (long *)0x0;
      *(long *)(puVar6 + -0x20) = lVar10;
      *(long **)(puVar6 + -0x18) = plVar12;
      *(undefined1 **)(puVar6 + -0x10) = puVar28;
      *(undefined **)(puVar6 + -8) = puVar29;
      puVar28 = puVar6 + -0x10;
      puVar29 = &UNK_029d2fa0;
      puVar4 = puVar6 + -0x20;
code_r0x029d2c70:
      do {
        lVar17 = auVar32._8_8_;
        plVar12 = auVar32._0_8_;
        *(long *)(puVar4 + -0x40) = unaff_x24;
        *(ulong *)(puVar4 + -0x38) = uVar26;
        *(ulong *)(puVar4 + -0x30) = uVar25;
        *(long **)(puVar4 + -0x28) = plVar18;
        *(long *)(puVar4 + -0x20) = lVar10;
        *(long **)(puVar4 + -0x18) = plVar9;
        *(undefined1 **)(puVar4 + -0x10) = puVar28;
        *(undefined **)(puVar4 + -8) = puVar29;
        if (lVar17 == 0) {
          return plVar12;
        }
        uVar26 = plVar12[2];
        if (uVar26 == 0) {
          func_0x00f78af4();
          lVar17 = lVar10;
          plVar9 = plVar18;
          uVar11 = uVar25;
code_r0x029d2d74:
          uVar14 = func_0x00f78b24();
          puVar29 = &System_Text_StringBuilder__AppendHelper;
          auVar32 = func_0x00f78ac0(uVar14,0);
          plVar18 = plVar20;
          plVar19 = plVar21;
        }
        else {
          uVar2 = *(uint *)(plVar12 + 4);
          unaff_x24 = (long)(int)uVar2;
          uVar1 = *(uint *)(lVar17 + 0x10);
          plVar9 = (long *)(ulong)uVar1;
          uVar22 = uVar1 + uVar2;
          uVar11 = (ulong)uVar22;
          if ((int)uVar22 < *(int *)(uVar26 + 0x18)) {
            if ((int)uVar1 < 3) {
              if ((int)uVar1 < 1) goto code_r0x029d2d54;
              plVar20 = (long *)0x0;
              uVar7 = /*System.String$$get_Chars*/ func_0x029c5420(lVar17,0);
              if (uVar2 < *(uint *)(uVar26 + 0x18)) {
                *(undefined2 *)(uVar26 + unaff_x24 * 2 + 0x20) = uVar7;
                if (uVar1 < 2) {
code_r0x029d2d54:
                  *(uint *)(plVar12 + 4) = uVar22;
                  return plVar12;
                }
                plVar20 = (long *)0x0;
                uVar7 = /*System.String$$get_Chars*/ func_0x029c5420(lVar17,1);
                if (uVar2 + 1 < *(uint *)(uVar26 + 0x18)) {
                  *(undefined2 *)(uVar26 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar7;
                  goto code_r0x029d2d54;
                }
              }
            }
            else {
              iVar8 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
              if (uVar2 < *(uint *)(uVar26 + 0x18)) {
                /*System.String$$wstrcpy*/ func_0x029cb054(uVar26 + unaff_x24 * 2 + 0x20,lVar17 + iVar8,plVar9,0);
                goto code_r0x029d2d54;
              }
            }
            goto code_r0x029d2d74;
          }
          puVar29 = &UNK_029d2cf4;
          plVar18 = plVar20;
          plVar19 = plVar21;
        }
        lVar10 = auVar32._8_8_;
        plVar20 = auVar32._0_8_;
        *(long *)(puVar4 + -0x60) = lVar17;
        *(long **)(puVar4 + -0x58) = plVar12;
        *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x10;
        *(undefined **)(puVar4 + -0x48) = puVar29;
        if (lVar10 != 0) {
          iVar8 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar17 = lVar10 + iVar8;
          plVar19 = (long *)(ulong)*(uint *)(lVar10 + 0x10);
          puVar28 = *(undefined1 **)(puVar4 + -0x50);
          puVar29 = *(undefined **)(puVar4 + -0x48);
          puVar5 = puVar4 + -0x40;
          auVar33._8_8_ = uVar11;
          auVar33._0_8_ = *(undefined8 *)(puVar4 + -0x58);
          plVar21 = *(long **)(puVar4 + -0x60);
          plVar18 = plVar9;
code_r0x029d2b54:
          uVar25 = auVar33._8_8_;
          *(long *)(puVar5 + -0x40) = unaff_x24;
          *(ulong *)(puVar5 + -0x38) = uVar26;
          *(ulong *)(puVar5 + -0x30) = uVar25;
          *(long **)(puVar5 + -0x28) = plVar18;
          *(long **)(puVar5 + -0x20) = plVar21;
          *(long *)(puVar5 + -0x18) = auVar33._0_8_;
          *(undefined1 **)(puVar5 + -0x10) = puVar28;
          *(undefined **)(puVar5 + -8) = puVar29;
          puVar28 = puVar5 + -0x10;
          iVar8 = (int)plVar19;
          if (-1 < iVar8) {
            lVar10 = plVar20[2];
            if (lVar10 != 0) {
              iVar23 = (int)plVar20[4];
              uVar22 = iVar23 + iVar8;
              uVar25 = (ulong)uVar22;
              if ((int)uVar22 <= *(int *)(lVar10 + 0x18)) goto code_r0x029d2be8;
              uVar1 = *(int *)(lVar10 + 0x18) - iVar23;
              uVar26 = (ulong)uVar1;
              if (0 < (int)uVar1) {
                /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar17,lVar10,iVar23,uVar26);
                plVar18 = plVar19;
                if (plVar20[2] == 0) goto code_r0x029d2c08;
                *(int *)(plVar20 + 4) = (int)*(undefined8 *)(plVar20[2] + 0x18);
              }
              uVar22 = iVar8 - uVar1;
              plVar19 = (long *)(ulong)uVar22;
              /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(plVar20,plVar19);
              lVar10 = plVar20[2];
              lVar17 = lVar17 + (long)(int)uVar1 * 2;
              iVar23 = 0;
code_r0x029d2be8:
              /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar17,lVar10,iVar23,plVar19);
              *(uint *)(plVar20 + 4) = uVar22;
              return plVar20;
            }
code_r0x029d2c08:
            func_0x00f78af4();
          }
          uVar14 = func_0x00f78a24(0x3d6b268);
          plVar9 = (long *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar14,0);
          func_0x00f78a24(0x3d1fcf8);
          lVar10 = func_0x00f78aec();
          uVar14 = func_0x00f78a24(0x3d7c5c8);
          plVar21 = (long *)0x0;
          plVar20 = plVar9;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(lVar10,uVar14);
          uVar14 = func_0x00f78a24(0x3d5dbe8);
          puVar29 = &System_Text_StringBuilder__Append;
          auVar32 = func_0x00f78ac0(lVar10,uVar14);
          puVar4 = puVar5 + -0x40;
          goto code_r0x029d2c70;
        }
        auVar33 = func_0x00f78af4();
        uVar25 = auVar33._8_8_;
        plVar20 = auVar33._0_8_;
        puVar5 = puVar4 + -0xa0;
        *(long *)(puVar4 + -0xa0) = unaff_x24;
        *(ulong *)(puVar4 + -0x98) = uVar26;
        *(ulong *)(puVar4 + -0x90) = uVar11;
        *(long **)(puVar4 + -0x88) = plVar9;
        *(long *)(puVar4 + -0x80) = lVar17;
        *(long **)(puVar4 + -0x78) = plVar12;
        *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x50;
        *(undefined **)(puVar4 + -0x68) = &System_Text_StringBuilder__Append;
        puVar28 = puVar4 + -0x70;
        uVar26 = 0x3eb9000;
        plVar21 = plVar19;
        if ((bRam0000000003eb948a & 1) == 0) {
          func_0x00f78a20(0x3d208b0);
          bRam0000000003eb948a = 1;
        }
        iVar8 = (int)plVar18;
        if (iVar8 < 0) {
code_r0x029d2e7c:
          uVar14 = func_0x00f78a24(0x3d6de28);
          uVar13 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar14,0);
          func_0x00f78a24(0x3d1fcf8);
          plVar19 = (long *)func_0x00f78aec();
          uVar14 = 0x3d7b9d0;
code_r0x029d2ee8:
          uVar14 = func_0x00f78a24(uVar14);
          plVar21 = (long *)0x0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(plVar19,uVar14,uVar13);
          uVar14 = func_0x00f78a24(0x3d5dc00);
          func_0x00f78ac0(plVar19,uVar14);
        }
        else {
          iVar23 = (int)plVar19;
          if (iVar23 < 0) {
            uVar14 = func_0x00f78a24(0x3d75fa8);
            uVar13 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar14,0);
            func_0x00f78a24(0x3d1fcf8);
            plVar19 = (long *)func_0x00f78aec();
            uVar14 = 0x3d78638;
            goto code_r0x029d2ee8;
          }
          if ((iVar23 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
            return plVar20;
          }
          if (uVar25 != 0) {
            if (iVar23 == 0) {
              return plVar20;
            }
            if (iVar8 <= *(int *)(uVar25 + 0x10) - iVar23) {
              iVar8 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
              lVar17 = uVar25 + ((ulong)plVar18 & 0xffffffff) * 2 + (long)iVar8;
              puVar29 = &UNK_029d2e58;
              plVar21 = plVar19;
              goto code_r0x029d2b54;
            }
            goto code_r0x029d2e7c;
          }
          if (iVar8 == 0 && iVar23 == 0) {
            return plVar20;
          }
        }
        func_0x00f78a24(0x3d1fcf0);
        uVar14 = func_0x00f78aec();
        uVar13 = func_0x00f78a24(0x3d7c5a0);
        plVar20 = (long *)0x0;
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar14,uVar13);
        uVar13 = func_0x00f78a24(0x3d5dc00);
        uVar13 = func_0x00f78ac0(uVar14,uVar13);
        *(long **)(puVar4 + -0xc0) = plVar19;
        *(undefined8 *)(puVar4 + -0xb8) = uVar14;
        *(undefined1 **)(puVar4 + -0xb0) = puVar28;
        *(undefined **)(puVar4 + -0xa8) = &System_Text_StringBuilder__AppendLine;
        uVar14 = /*System.Environment$$get_NewLine*/ func_0x02aca040(0);
        auVar32._8_8_ = uVar14;
        auVar32._0_8_ = uVar13;
        puVar28 = *(undefined1 **)(puVar4 + -0xb0);
        puVar29 = *(undefined **)(puVar4 + -0xa8);
        lVar10 = *(long *)(puVar4 + -0xc0);
        plVar9 = *(long **)(puVar4 + -0xb8);
        puVar4 = puVar4 + -0xa0;
      } while( true );
    }
    /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Clear*/ func_0x024a4f04(lVar17,uRam0000000003d3cc10);
    lVar10 = *(long *)(auVar30._0_8_ + 0x28);
    auVar31._8_8_ = lVar17;
    auVar31._0_8_ = lVar10;
    if (lVar10 == 0) goto code_r0x01632938;
    pppppppuVar27 = *(undefined8 ********)((long)plVar3 + -0x10);
    puVar29 = *(undefined **)((long)plVar3 + -8);
    uVar14 = *(undefined8 *)((long)plVar3 + -0x20);
    lVar10 = *(long *)((long)plVar3 + -0x18);
    plVar19 = *(long **)((long)plVar3 + -0x30);
    plVar24 = *(long **)((long)plVar3 + -0x28);
    plVar18 = plRam0000000003d40350;
  }
  else {
    puVar29 = &UNK_0163173c;
code_r0x016317e8:
    plVar3 = &lStack_d0;
    pppppppuVar27 = &ppppppuStack_a0;
    uVar25 = 0x3eb5000;
    plVar9 = (long *)0x3d40348;
    plVar20 = (long *)0x3d40358;
    uVar26 = 1;
    lStack_d0 = unaff_x24;
    uStack_c8 = uVar11;
    plStack_c0 = param_4;
    plStack_b8 = param_3;
    ppppppuStack_a0 = &pppppuStack_30;
    puStack_98 = puVar29;
    auStack_b0 = auVar30;
    while( true ) {
      if ((bRam0000000003eb565d & 1) == 0) {
        func_0x00f78a20(0x3d40348);
        func_0x00f78a20(0x3d40358);
        bRam0000000003eb565d = 1;
      }
      plVar24 = plStack_b8;
      plVar19 = plStack_c0;
      uVar14 = auStack_b0._0_8_;
      lVar10 = plVar12[5];
      if (lVar10 == 0) {
        puVar29 = &Core_Analytics_AnalyticsManager__ReturnPooledObjects;
        auVar31 = func_0x00f78af4();
        auVar30._8_8_ = plVar12;
        auVar30._0_8_ = auVar31._0_8_;
        lVar17 = *(long *)(auVar31._8_8_ + 0x18);
        if (lVar17 == 0) {
          return auVar31._0_8_;
        }
        goto code_r0x016328b4;
      }
      if (0 < *(int *)(lVar10 + 0x18)) break;
      Core_Analytics_AnalyticsManager__FillCustomParamListPool(plVar12,0x19);
    }
    plVar3 = (long *)auStack_b0;
    pppppppuVar27 = &ppppppuStack_a0;
    iVar8 = *(int *)(lVar10 + 0x18);
    if (iVar8 == 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d40348 + 0x18) + 0xc0) + 0x30))
                (lVar10);
      iVar8 = *(int *)(lVar10 + 0x18);
    }
    lVar17 = *(long *)(lVar10 + 0x10);
    uVar22 = iVar8 - 1;
    *(uint *)(lVar10 + 0x18) = uVar22;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar17 == 0) {
      func_0x00f78af4();
    }
    else if (uVar22 < *(uint *)(lVar17 + 0x18)) {
      lVar17 = lVar17 + (long)(int)uVar22 * 8;
      plVar9 = *(long **)(lVar17 + 0x20);
      *(undefined8 *)(lVar17 + 0x20) = 0;
      return plVar9;
    }
    uVar13 = func_0x00f78b24();
    puVar29 = &System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push;
    auVar31 = func_0x00f78ac0(uVar13,0);
  }
  uVar13 = auVar31._8_8_;
  lVar17 = auVar31._0_8_;
  *(undefined8 *)((long)plVar3 + -0x20) = uVar14;
  *(long *)((long)plVar3 + -0x18) = lVar10;
  *(undefined8 ********)((long)plVar3 + -0x10) = pppppppuVar27;
  *(undefined **)((long)plVar3 + -8) = puVar29;
  plVar9 = (long *)(lVar17 + 0x10);
  lVar10 = *plVar9;
  if (lVar10 == 0) {
code_r0x0286596c:
    uVar13 = uVar14;
    plVar9 = (long *)func_0x00f78af4();
    lVar10 = extraout_x8;
    uVar22 = extraout_w9;
  }
  else {
    uVar22 = *(uint *)(lVar17 + 0x18);
    if (uVar22 == (uint)*(long *)(lVar10 + 0x18)) {
      iVar8 = 4;
      if (*(long *)(lVar10 + 0x18) != 0) {
        iVar8 = uVar22 << 1;
      }
      plVar9 = (long *)(*(code *)**(undefined8 **)(*(long *)(plVar18[3] + 0xc0) + 0x38))
                                 (plVar9,iVar8);
      lVar10 = *(long *)(lVar17 + 0x10);
      uVar22 = *(uint *)(lVar17 + 0x18);
      *(uint *)(lVar17 + 0x18) = uVar22 + 1;
      uVar14 = uVar13;
      if (lVar10 != 0) goto code_r0x02865978;
      goto code_r0x0286596c;
    }
  }
  *(uint *)(lVar17 + 0x18) = uVar22 + 1;
code_r0x02865978:
  if (uVar22 < *(uint *)(lVar10 + 0x18)) {
    *(undefined8 *)(lVar10 + (long)(int)uVar22 * 8 + 0x20) = uVar13;
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
    return plVar9;
  }
  uVar14 = func_0x00f78b24();
  func_0x00f78ac0(uVar14,0);
  *(undefined8 *)((long)plVar3 + -0x40) = uVar13;
  *(long *)((long)plVar3 + -0x38) = lVar17;
  *(undefined1 **)((long)plVar3 + -0x30) = (undefined1 *)((long)plVar3 + -0x10);
  *(undefined **)((long)plVar3 + -0x28) =
       &System_Collections_Generic_Stack_object___ThrowForEmptyStack;
  func_0x00f78a24(0x3d22a38);
  uVar14 = func_0x00f78aec();
  uVar15 = func_0x00f78a24(0x3d72ca8);
  lVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar15);
  uVar15 = func_0x00f78a24(0x3d40438);
  auVar30 = func_0x00f78ac0(uVar14,uVar15);
  lVar10 = auVar30._0_8_;
  *(undefined8 *)((long)plVar3 + -0x60) = uVar13;
  *(undefined8 *)((long)plVar3 + -0x58) = uVar14;
  *(undefined1 **)((long)plVar3 + -0x50) = (undefined1 *)((long)plVar3 + -0x30);
  *(undefined **)((long)plVar3 + -0x48) =
       &System_Collections_Generic_Stack_SequenceNode_SequenceConstructPosContext____ctor;
  if (lVar10 != 0) {
    /*System.Object$$.ctor*/ func_0x0294d018(lVar10,0);
    plVar9 = (long *)(**(code **)**(undefined8 **)(*(long *)(auVar30._8_8_ + 0x18) + 0xc0))();
    *(long **)(lVar10 + 0x10) = plVar9;
    return plVar9;
  }
  auVar30 = func_0x00f78af4();
  lVar10 = auVar30._0_8_;
  *(long **)((long)plVar3 + -0x90) = plVar19;
  *(long **)((long)plVar3 + -0x88) = plVar24;
  *(undefined8 *)((long)plVar3 + -0x80) = uVar13;
  *(undefined8 *)((long)plVar3 + -0x78) = uVar14;
  *(undefined1 **)((long)plVar3 + -0x70) = (undefined1 *)((long)plVar3 + -0x50);
  *(undefined **)((long)plVar3 + -0x68) =
       &System_Collections_Generic_Stack_SequenceNode_SequenceConstructPosContext____ctor;
  if (lVar10 == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Object$$.ctor*/ func_0x0294d018(lVar10,0);
    uVar13 = auVar30._8_8_;
    if (-1 < auVar30._8_4_) {
      lVar17 = *(long *)(*(long *)(*(long *)(lVar17 + 0x18) + 0xc0) + 8);
      if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar17);
      }
      plVar9 = (long *)func_0x00f78a34(lVar17,auVar30._8_8_);
      *(long **)(lVar10 + 0x10) = plVar9;
      return plVar9;
    }
  }
  *(int *)((long)plVar3 + -0x94) = (int)uVar13;
  uVar14 = func_0x00f78a24(0x3d22910);
  uVar14 = func_0x00f78ae0(uVar14,(undefined1 *)((long)plVar3 + -0x94));
  func_0x00f78a24(0x3d1fcf8);
  uVar13 = func_0x00f78aec();
  uVar15 = func_0x00f78a24(0x3d781d8);
  uVar16 = func_0x00f78a24(0x3d70548);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(uVar13,uVar15,uVar14,uVar16,0);
  uVar14 = func_0x00f78a24(0x3d40520);
  lVar10 = func_0x00f78ac0(uVar13,uVar14);
  return (long *)(ulong)*(uint *)(lVar10 + 0x18);
}



// ============================================================
// RVA: 0x163112c | Core.Analytics.AnalyticsManager.UpdatePendingBatches
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01631558) */
/* WARNING: Removing unreachable block (ram,0x01631574) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_Analytics_AnalyticsManager__UpdatePendingBatches(long param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  ulong unaff_x27;
  float fVar14;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_68;
  
  if ((bRam0000000003eb5664 & 1) == 0) {
    func_0x00f78a20(0x3d21af0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3cc68);
    func_0x00f78a20(0x3d3cc70);
    func_0x00f78a20(0x3d23370);
    bRam0000000003eb5664 = 1;
  }
  uStack_68 = (ulong)(uint)uStack_68;
  if (*(char *)(param_1 + 0x70) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    if ((*(int *)(*(long *)(param_1 + 0x38) + 0x18) < 1) ||
       (iVar3 = /*Core.Analytics.AnalyticsManager$$CanSendEventBatchNow*/ func_0x01631a44(param_1), iVar3 == 0)) goto LAB_01631534;
    if (*(long *)(param_1 + 0x88) != 0) {
      /*System.Diagnostics.Stopwatch$$Start*/ func_0x02f287fc(*(long *)(param_1 + 0x88),0);
      /*Core.Analytics.AnalyticsManager$$StartEventBatch*/ func_0x0163293c(param_1);
      lVar8 = *(long *)(param_1 + 0x38);
      if (lVar8 != 0) {
        unaff_x27 = 0;
        lVar12 = 0x20;
        do {
          if (99 < unaff_x27) goto LAB_01631274;
          if ((long)*(int *)(lVar8 + 0x18) <= (long)unaff_x27) goto LAB_01631274;
          if (*(long *)(param_1 + 0x20) == 0) break;
          iVar3 = /*System.Text.StringBuilder$$get_Length*/ func_0x029d2154(*(long *)(param_1 + 0x20),0);
          if (0x3ffff < iVar3) goto LAB_01631274;
          lVar8 = *(long *)(param_1 + 0x38);
          if (lVar8 == 0) break;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x27) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          puVar7 = (undefined8 *)(*(long *)(lVar8 + 0x10) + lVar12);
          uStack_88 = puVar7[1];
          uStack_90 = *puVar7;
          uStack_78 = puVar7[3];
          uStack_80 = puVar7[2];
          /*Core.Analytics.AnalyticsManager$$AddEventToBatch*/ func_0x01632994(param_1,&uStack_90,unaff_x27 == 0);
          unaff_x27 = unaff_x27 + 1;
          lVar8 = *(long *)(param_1 + 0x38);
          lVar12 = lVar12 + 0x20;
        } while (lVar8 != 0);
      }
    }
  }
LAB_01631270:
  do {
    do {
      do {
        func_0x00f78af4();
LAB_01631274:
        /*Core.Analytics.AnalyticsManager$$EndEventBatch*/ func_0x01632de4(param_1);
        plVar4 = *(long **)(param_1 + 0x20);
      } while (plVar4 == (long *)0x0);
      lVar8 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    } while (*(long *)(param_1 + 0x20) == 0);
    /*System.Text.StringBuilder$$Clear*/ func_0x029d2384(*(long *)(param_1 + 0x20),0);
    if (*(char *)(param_1 + 0x6e) == '\0') {
LAB_016314b8:
      plVar4 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
      if ((plVar4 == (long *)0x0) ||
         (lVar9 = (**(code **)(*plVar4 + 0x238))(plVar4,lVar8,*(undefined8 *)(*plVar4 + 0x240)),
         lVar9 == 0)) goto LAB_01631270;
      uVar13 = 0;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + *(int *)(lVar9 + 0x18);
      lVar12 = lVar9;
    }
    else {
      plVar4 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
      if ((lVar8 == 0) || (plVar4 == (long *)0x0)) goto LAB_01631270;
      uVar5 = (**(code **)(*plVar4 + 0x248))
                        (plVar4,lVar8,0,*(undefined4 *)(lVar8 + 0x10),
                         *(undefined8 *)(param_1 + 0x80),0,*(undefined8 *)(*plVar4 + 0x250));
      plVar4 = (long *)func_0x00f78aec(/*System.IO.MemoryStream_TypeInfo*/ uRam0000000003d23370);
      fVar14 = (float)(int)uVar5 * _UNK_033f83c8;
      fVar1 = -fVar14;
      if (fVar14 != INFINITY) {
        fVar1 = fVar14;
      }
      /*System.IO.MemoryStream$$.ctor*/ func_0x02b043f0(plVar4,(int)fVar1,0);
      plVar6 = (long *)func_0x00f78aec(/*System.IO.Compression.GZipStream_TypeInfo*/ uRam0000000003d21af0);
      /*System.IO.Compression.GZipStream$$.ctor*/ func_0x02ed1970(plVar6,plVar4,0,0);
      if (plVar6 == (long *)0x0) {
        func_0x00f78af4();
code_r0x01631580:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1631584);
        (*pcVar2)();
      }
      (**(code **)(*plVar6 + 0x308))
                (plVar6,*(undefined8 *)(param_1 + 0x80),0,uVar5,*(undefined8 *)(*plVar6 + 0x310));
      (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
      if (plVar4 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x01631580;
      }
      lVar12 = (**(code **)(*plVar4 + 0x358))(plVar4,*(undefined8 *)(*plVar4 + 0x360));
      uStack_68 = _UNK_03403bc8;
      uVar13 = 1;
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0163140c;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
LAB_0163140c:
      lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x01631478;
            }
            piVar11 = piVar11 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01631478:
        lVar9 = (*(code *)*puVar7)(plVar4,puVar7[1]);
      }
      if ((uint)uStack_68 != 299) goto LAB_016314b8;
      uStack_68 = uStack_68 & 0xffffffff;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (int)uVar5;
      if (lVar12 == 0) goto LAB_01631270;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + *(int *)(lVar12 + 0x18);
    *(int *)(param_1 + 0x58) = (int)unaff_x27;
    uVar5 = /*Core.Analytics.AnalyticsManager$$CreatePOSTRequest*/ func_0x01632e78(lVar9,*(undefined8 *)(param_1 + 0x18),lVar12,uVar13);
    /*Core.Analytics.AnalyticsManager$$SendEventBatch*/ func_0x01633008(param_1,uVar5);
  } while (*(long *)(param_1 + 0x88) == 0);
  /*System.Diagnostics.Stopwatch$$Stop*/ func_0x02f28870(*(long *)(param_1 + 0x88),0);
LAB_01631534:
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}



// ============================================================
// RVA: 0x16315e8 | Core.Analytics.AnalyticsManager.UpdateSendingEventBatch
// ============================================================

/* WARNING: Possible PIC construction at 0x01631738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01631784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01632d60) */
/* WARNING: Removing unreachable block (ram,0x01632d70) */
/* WARNING: Removing unreachable block (ram,0x01632d7c) */
/* WARNING: Removing unreachable block (ram,0x01632d8c) */
/* WARNING: Removing unreachable block (ram,0x01632d14) */
/* WARNING: Removing unreachable block (ram,0x01632d1c) */
/* WARNING: Removing unreachable block (ram,0x01632ce8) */
/* WARNING: Removing unreachable block (ram,0x01632d2c) */
/* WARNING: Removing unreachable block (ram,0x01632d30) */
/* WARNING: Removing unreachable block (ram,0x01632d3c) */
/* WARNING: Removing unreachable block (ram,0x01632d64) */
/* WARNING: Removing unreachable block (ram,0x01632d68) */
/* WARNING: Removing unreachable block (ram,0x01632d48) */
/* WARNING: Removing unreachable block (ram,0x01632d4c) */
/* WARNING: Removing unreachable block (ram,0x01632cf0) */
/* WARNING: Removing unreachable block (ram,0x01632cf4) */
/* WARNING: Removing unreachable block (ram,0x01632d08) */
/* WARNING: Removing unreachable block (ram,0x01632cc0) */
/* WARNING: Removing unreachable block (ram,0x01632cc8) */
/* WARNING: Removing unreachable block (ram,0x01632cdc) */
/* WARNING: Removing unreachable block (ram,0x01632c50) */
/* WARNING: Removing unreachable block (ram,0x01632c5c) */
/* WARNING: Removing unreachable block (ram,0x01632d90) */
/* WARNING: Removing unreachable block (ram,0x01632d98) */
/* WARNING: Removing unreachable block (ram,0x01632c68) */
/* WARNING: Removing unreachable block (ram,0x01632c84) */
/* WARNING: Removing unreachable block (ram,0x01632c90) */
/* WARNING: Removing unreachable block (ram,0x01632c98) */
/* WARNING: Removing unreachable block (ram,0x01632ca0) */
/* WARNING: Removing unreachable block (ram,0x01632c20) */
/* WARNING: Removing unreachable block (ram,0x01632c28) */
/* WARNING: Removing unreachable block (ram,0x01632c44) */
/* WARNING: Removing unreachable block (ram,0x01632bd0) */
/* WARNING: Removing unreachable block (ram,0x01632bd8) */
/* WARNING: Removing unreachable block (ram,0x01632bf4) */
/* WARNING: Removing unreachable block (ram,0x01632c0c) */
/* WARNING: Removing unreachable block (ram,0x01632ba4) */
/* WARNING: Removing unreachable block (ram,0x01632bac) */
/* WARNING: Removing unreachable block (ram,0x01632bc4) */
/* WARNING: Removing unreachable block (ram,0x01632b74) */
/* WARNING: Removing unreachable block (ram,0x01632b7c) */
/* WARNING: Removing unreachable block (ram,0x01632b90) */
/* WARNING: Removing unreachable block (ram,0x01632b40) */
/* WARNING: Removing unreachable block (ram,0x01632b48) */
/* WARNING: Removing unreachable block (ram,0x01632b64) */
/* WARNING: Removing unreachable block (ram,0x01632adc) */
/* WARNING: Removing unreachable block (ram,0x01632aec) */
/* WARNING: Removing unreachable block (ram,0x01632af4) */
/* WARNING: Removing unreachable block (ram,0x01632af8) */
/* WARNING: Removing unreachable block (ram,0x01632b14) */
/* WARNING: Removing unreachable block (ram,0x01632b2c) */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x029d2fa0) */
/* WARNING: Removing unreachable block (ram,0x01631788) */
/* WARNING: Removing unreachable block (ram,0x0163173c) */
/* WARNING: Removing unreachable block (ram,0x01631740) */
/* WARNING: Removing unreachable block (ram,0x01632dac) */
/* WARNING: Removing unreachable block (ram,0x01632db4) */

long * Core_Analytics_AnalyticsManager__UpdateSendingEventBatch
                 (long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long extraout_x8;
  uint extraout_w9;
  uint uVar22;
  int iVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar27;
  undefined1 *puVar28;
  undefined *puVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  long lStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 ******ppppppuStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [16];
  long *plStack_80;
  long *plStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 *****pppppuStack_30;
  undefined *puStack_28;
  
  plVar9 = (long *)0x0;
  if ((*(long *)(param_1 + 0x50) == 0) ||
     (plVar9 = (long *)/*UnityEngine.AsyncOperation$$get_isDone*/ func_0x032198dc(*(long *)(param_1 + 0x50),0), (int)plVar9 == 0)) {
    return plVar9;
  }
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar10 = *(long *)(*(long *)(param_1 + 0x50) + 0x20), lVar10 != 0)) {
    plVar9 = (long *)/*UnityEngine.Networking.UnityWebRequest$$get_result*/ func_0x032f8ea4(lVar10,0);
    if ((int)plVar9 == 1) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      plVar9 = (long *)/*Core.Analytics.AnalyticsManager$$RemoveAndArchiveQueuedEvents*/ func_0x016330c0(param_1,*(undefined4 *)(param_1 + 0x58));
    }
    else {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    return plVar9;
  }
  auVar30 = func_0x00f78af4();
  plVar12 = auVar30._0_8_;
  plVar3 = (long *)auStack_90;
  puStack_28 = &Core_Analytics_AnalyticsManager__PostEvent;
  plVar9 = plVar12;
  plVar18 = param_3;
  plVar21 = param_4;
  pppppuStack_30 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5655 & 1) == 0) {
    func_0x00f78a20(0x3d210a0);
    func_0x00f78a20(0x3d3cc08);
    func_0x00f78a20(0x3d3cc38);
    func_0x00f78a20(0x3d3cc58);
    func_0x00f78a20(0x3d3cc68);
    plVar9 = (long *)func_0x00f78a20(0x3d3cc70);
    bRam0000000003eb5655 = 1;
  }
  if (*(char *)((long)plVar12 + 0x6c) == '\0') {
    return plVar9;
  }
  if (((*(ushort *)(/*System.DateTimeOffset_TypeInfo*/ lRam0000000003d210a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTimeOffset_TypeInfo*/ lRam0000000003d210a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auStack_90 = /*System.DateTimeOffset$$get_UtcNow*/ func_0x02a99f14(0);
  uVar11 = /*System.DateTimeOffset$$ToUnixTimeSeconds*/ func_0x02a9afc0(auStack_90,0);
  if (param_4 == (long *)0x0) {
    unaff_x24 = 0;
    lVar10 = plVar12[7];
    if (lVar10 == 0) {
code_r0x016317e4:
      puVar29 = &Core_Analytics_AnalyticsManager__GetCustomParmListFromPool;
      plVar12 = (long *)func_0x00f78af4();
      goto code_r0x016317e8;
    }
    if (*(int *)(lVar10 + 0x18) < 100) {
code_r0x016317ac:
      uStack_68 = 0;
      plStack_80 = auVar30._8_8_;
      plStack_78 = param_3;
      uStack_70 = uVar11;
      plVar9 = (long *)/*System.Collections.Generic.List<AnalyticsManager.Event>$$Add*/ func_0x024a78a4(lVar10,&plStack_80,uRam0000000003d3cc38);
      plVar12[0xf] = (long)auVar30._8_8_;
      return plVar9;
    }
    lVar17 = *(long *)(*(long *)(lVar10 + 0x10) + 0x38);
    if (lVar17 == 0) {
      plVar18 = plRam0000000003d3cc58;
      /*System.Collections.Generic.List<AnalyticsManager.Event>$$RemoveAt*/ func_0x024a91fc(lVar10,0);
      lVar10 = plVar12[7];
      if (lVar10 != 0) goto code_r0x016317ac;
      goto code_r0x016317e4;
    }
    puVar29 = &UNK_01631788;
    uVar25 = 0;
    plVar9 = plVar12;
    plVar20 = param_3;
    uVar26 = uVar11;
    pppppppuVar27 = (undefined8 *******)&pppppuStack_30;
code_r0x016328b4:
    *(ulong *)((long)plVar3 + -0x30) = uVar25;
    *(long **)((long)plVar3 + -0x28) = plVar20;
    *(long **)((long)plVar3 + -0x20) = plVar9;
    *(long *)((long)plVar3 + -0x18) = auVar30._8_8_;
    *(undefined8 ********)((long)plVar3 + -0x10) = pppppppuVar27;
    *(undefined **)((long)plVar3 + -8) = puVar29;
    if ((bRam0000000003eb565e & 1) == 0) {
      func_0x00f78a20(0x3d3cc10);
      func_0x00f78a20(0x3d40350);
      bRam0000000003eb565e = 1;
    }
    if (lVar17 == 0) {
code_r0x01632938:
      lVar10 = func_0x00f78af4();
      *(long *)((long)plVar3 + -0x50) = auVar30._0_8_;
      *(long *)((long)plVar3 + -0x48) = lVar17;
      *(undefined1 **)((long)plVar3 + -0x40) = (undefined1 *)((long)plVar3 + -0x10);
      *(undefined **)((long)plVar3 + -0x38) = &Core_Analytics_AnalyticsManager__StartEventBatch;
      if ((bRam0000000003eb565f & 1) == 0) {
        func_0x00f78a20(0x3d7cc48);
        bRam0000000003eb565f = 1;
      }
      plVar9 = *(long **)(lVar10 + 0x20);
      if (plVar9 == (long *)0x0) {
        auVar30 = func_0x00f78af4();
        plVar12 = auVar30._0_8_;
        puVar4 = (undefined1 *)((long)plVar3 + -0xd0);
        puVar6 = (undefined1 *)((long)plVar3 + -0xd0);
        *(undefined8 *)((long)plVar3 + -0xb0) = unaff_x28;
        *(undefined8 *)((long)plVar3 + -0xa8) = unaff_x27;
        *(undefined8 *)((long)plVar3 + -0xa0) = unaff_x26;
        *(undefined8 *)((long)plVar3 + -0x98) = unaff_x25;
        *(long *)((long)plVar3 + -0x90) = unaff_x24;
        *(ulong *)((long)plVar3 + -0x88) = uVar26;
        *(ulong *)((long)plVar3 + -0x80) = uVar25;
        *(undefined8 *)((long)plVar3 + -0x78) = 0x3eb5000;
        *(undefined8 *)((long)plVar3 + -0x70) = 0x3eb5000;
        *(long *)((long)plVar3 + -0x68) = lVar10;
        *(undefined1 **)((long)plVar3 + -0x60) = (undefined1 *)((long)plVar3 + -0x40);
        *(undefined **)((long)plVar3 + -0x58) = &Core_Analytics_AnalyticsManager__AddEventToBatch;
        puVar28 = (undefined1 *)((long)plVar3 + -0x60);
        *(long *)((long)plVar3 + -200) = auVar30._8_8_;
        lVar10 = 0x3eb5000;
        plVar20 = plVar18;
        if ((bRam0000000003eb5660 & 1) == 0) {
          func_0x00f78a20(0x3d21ce0);
          func_0x00f78a20(0x3d3cc20);
          func_0x00f78a20(0x3d3cc28);
          func_0x00f78a20(0x3d66538);
          func_0x00f78a20(0x3d7cc30);
          func_0x00f78a20(0x3d66570);
          func_0x00f78a20(0x3d66580);
          func_0x00f78a20(0x3d7d1e0);
          func_0x00f78a20(0x3d66568);
          func_0x00f78a20(0x3d66fd8);
          func_0x00f78a20(0x3d66578);
          func_0x00f78a20(0x3d66518);
          func_0x00f78a20(0x3d66548);
          func_0x00f78a20(0x3d66588);
          bRam0000000003eb5660 = 1;
        }
        if (((ulong)plVar18 & 1) == 0) {
          plVar9 = (long *)plVar12[4];
          if (plVar9 != (long *)0x0) {
            puVar29 = &UNK_01632a9c;
            puVar6 = (undefined1 *)((long)plVar3 + -0xd0);
            uVar14 = /*STR(',')*/ uRam0000000003d66fd8;
            goto code_r0x029d2f8c;
          }
        }
        else {
          plVar9 = plVar12 + 4;
          plVar12 = plVar9;
          if (*plVar9 != 0) {
            uVar25 = 0x3d7cc30;
            plVar20 = (long *)0x0;
            /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*plVar9,/*STR('{')*/ uRam0000000003d7cc30,0);
            auVar32._8_8_ = /*STR('"event_id": "')*/ uRam0000000003d66570;
            auVar32._0_8_ = *plVar9;
            if (*plVar9 != 0) {
              lVar10 = 0x3d21ce0;
              plVar20 = (long *)0x0;
              puVar29 = &UNK_01632adc;
              goto code_r0x029d2c70;
            }
          }
        }
        lVar10 = func_0x00f78af4();
        *(undefined8 *)((long)plVar3 + -0xf0) = 0x3eb5000;
        *(long **)((long)plVar3 + -0xe8) = plVar12;
        *(undefined1 **)((long)plVar3 + -0xe0) = puVar28;
        *(undefined **)((long)plVar3 + -0xd8) = &Core_Analytics_AnalyticsManager__EndEventBatch;
        if ((bRam0000000003eb5661 & 1) == 0) {
          func_0x00f78a20(0x3d76b40);
          bRam0000000003eb5661 = 1;
        }
        plVar9 = *(long **)(lVar10 + 0x20);
        if (plVar9 == (long *)0x0) {
          auVar30 = func_0x00f78af4();
          lVar17 = auVar30._0_8_;
          *(undefined8 *)((long)plVar3 + -0x110) = 0x3eb5000;
          *(long *)((long)plVar3 + -0x108) = lVar10;
          *(undefined1 **)((long)plVar3 + -0x100) = (undefined1 *)((long)plVar3 + -0xe0);
          *(undefined **)((long)plVar3 + -0xf8) = &Core_Analytics_AnalyticsManager__SendEventBatch;
          uVar14 = /*Core.Analytics.AnalyticsManager$$CreatePOSTRequest*/ func_0x01632e78(lVar17,*(undefined8 *)(lVar17 + 0x18),auVar30._8_8_,plVar20);
          /*Core.Analytics.AnalyticsManager$$SendEventBatch*/ func_0x01633008(lVar17,uVar14);
          return (long *)((long)&MACH_HEADER.magic + 1);
        }
        puVar28 = *(undefined1 **)((long)plVar3 + -0xe0);
        puVar29 = *(undefined **)((long)plVar3 + -0xd8);
        lVar10 = *(long *)((long)plVar3 + -0xf0);
        plVar12 = *(long **)((long)plVar3 + -0xe8);
        uVar14 = /*STR('] }')*/ uRam0000000003d76b40;
      }
      else {
        puVar28 = *(undefined1 **)((long)plVar3 + -0x40);
        puVar29 = *(undefined **)((long)plVar3 + -0x38);
        lVar10 = *(long *)((long)plVar3 + -0x50);
        plVar12 = *(long **)((long)plVar3 + -0x48);
        puVar6 = (undefined1 *)((long)plVar3 + -0x30);
        uVar14 = /*STR('{ "events": [')*/ uRam0000000003d7cc48;
        plVar18 = (long *)0x3eb5000;
      }
code_r0x029d2f8c:
      auVar32._8_8_ = uVar14;
      auVar32._0_8_ = plVar9;
      plVar20 = (long *)0x0;
      *(long *)(puVar6 + -0x20) = lVar10;
      *(long **)(puVar6 + -0x18) = plVar12;
      *(undefined1 **)(puVar6 + -0x10) = puVar28;
      *(undefined **)(puVar6 + -8) = puVar29;
      puVar28 = puVar6 + -0x10;
      puVar29 = &UNK_029d2fa0;
      puVar4 = puVar6 + -0x20;
code_r0x029d2c70:
      do {
        lVar17 = auVar32._8_8_;
        plVar12 = auVar32._0_8_;
        *(long *)(puVar4 + -0x40) = unaff_x24;
        *(ulong *)(puVar4 + -0x38) = uVar26;
        *(ulong *)(puVar4 + -0x30) = uVar25;
        *(long **)(puVar4 + -0x28) = plVar18;
        *(long *)(puVar4 + -0x20) = lVar10;
        *(long **)(puVar4 + -0x18) = plVar9;
        *(undefined1 **)(puVar4 + -0x10) = puVar28;
        *(undefined **)(puVar4 + -8) = puVar29;
        if (lVar17 == 0) {
          return plVar12;
        }
        uVar26 = plVar12[2];
        if (uVar26 == 0) {
          func_0x00f78af4();
          lVar17 = lVar10;
          plVar9 = plVar18;
          uVar11 = uVar25;
code_r0x029d2d74:
          uVar14 = func_0x00f78b24();
          puVar29 = &System_Text_StringBuilder__AppendHelper;
          auVar32 = func_0x00f78ac0(uVar14,0);
          plVar18 = plVar20;
          plVar19 = plVar21;
        }
        else {
          uVar2 = *(uint *)(plVar12 + 4);
          unaff_x24 = (long)(int)uVar2;
          uVar1 = *(uint *)(lVar17 + 0x10);
          plVar9 = (long *)(ulong)uVar1;
          uVar22 = uVar1 + uVar2;
          uVar11 = (ulong)uVar22;
          if ((int)uVar22 < *(int *)(uVar26 + 0x18)) {
            if ((int)uVar1 < 3) {
              if ((int)uVar1 < 1) goto code_r0x029d2d54;
              plVar20 = (long *)0x0;
              uVar7 = /*System.String$$get_Chars*/ func_0x029c5420(lVar17,0);
              if (uVar2 < *(uint *)(uVar26 + 0x18)) {
                *(undefined2 *)(uVar26 + unaff_x24 * 2 + 0x20) = uVar7;
                if (uVar1 < 2) {
code_r0x029d2d54:
                  *(uint *)(plVar12 + 4) = uVar22;
                  return plVar12;
                }
                plVar20 = (long *)0x0;
                uVar7 = /*System.String$$get_Chars*/ func_0x029c5420(lVar17,1);
                if (uVar2 + 1 < *(uint *)(uVar26 + 0x18)) {
                  *(undefined2 *)(uVar26 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar7;
                  goto code_r0x029d2d54;
                }
              }
            }
            else {
              iVar8 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
              if (uVar2 < *(uint *)(uVar26 + 0x18)) {
                /*System.String$$wstrcpy*/ func_0x029cb054(uVar26 + unaff_x24 * 2 + 0x20,lVar17 + iVar8,plVar9,0);
                goto code_r0x029d2d54;
              }
            }
            goto code_r0x029d2d74;
          }
          puVar29 = &UNK_029d2cf4;
          plVar18 = plVar20;
          plVar19 = plVar21;
        }
        lVar10 = auVar32._8_8_;
        plVar20 = auVar32._0_8_;
        *(long *)(puVar4 + -0x60) = lVar17;
        *(long **)(puVar4 + -0x58) = plVar12;
        *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x10;
        *(undefined **)(puVar4 + -0x48) = puVar29;
        if (lVar10 != 0) {
          iVar8 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar17 = lVar10 + iVar8;
          plVar19 = (long *)(ulong)*(uint *)(lVar10 + 0x10);
          puVar28 = *(undefined1 **)(puVar4 + -0x50);
          puVar29 = *(undefined **)(puVar4 + -0x48);
          puVar5 = puVar4 + -0x40;
          auVar33._8_8_ = uVar11;
          auVar33._0_8_ = *(undefined8 *)(puVar4 + -0x58);
          plVar21 = *(long **)(puVar4 + -0x60);
          plVar18 = plVar9;
code_r0x029d2b54:
          uVar25 = auVar33._8_8_;
          *(long *)(puVar5 + -0x40) = unaff_x24;
          *(ulong *)(puVar5 + -0x38) = uVar26;
          *(ulong *)(puVar5 + -0x30) = uVar25;
          *(long **)(puVar5 + -0x28) = plVar18;
          *(long **)(puVar5 + -0x20) = plVar21;
          *(long *)(puVar5 + -0x18) = auVar33._0_8_;
          *(undefined1 **)(puVar5 + -0x10) = puVar28;
          *(undefined **)(puVar5 + -8) = puVar29;
          puVar28 = puVar5 + -0x10;
          iVar8 = (int)plVar19;
          if (-1 < iVar8) {
            lVar10 = plVar20[2];
            if (lVar10 != 0) {
              iVar23 = (int)plVar20[4];
              uVar22 = iVar23 + iVar8;
              uVar25 = (ulong)uVar22;
              if ((int)uVar22 <= *(int *)(lVar10 + 0x18)) goto code_r0x029d2be8;
              uVar1 = *(int *)(lVar10 + 0x18) - iVar23;
              uVar26 = (ulong)uVar1;
              if (0 < (int)uVar1) {
                /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar17,lVar10,iVar23,uVar26);
                plVar18 = plVar19;
                if (plVar20[2] == 0) goto code_r0x029d2c08;
                *(int *)(plVar20 + 4) = (int)*(undefined8 *)(plVar20[2] + 0x18);
              }
              uVar22 = iVar8 - uVar1;
              plVar19 = (long *)(ulong)uVar22;
              /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(plVar20,plVar19);
              lVar10 = plVar20[2];
              lVar17 = lVar17 + (long)(int)uVar1 * 2;
              iVar23 = 0;
code_r0x029d2be8:
              /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar17,lVar10,iVar23,plVar19);
              *(uint *)(plVar20 + 4) = uVar22;
              return plVar20;
            }
code_r0x029d2c08:
            func_0x00f78af4();
          }
          uVar14 = func_0x00f78a24(0x3d6b268);
          plVar9 = (long *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar14,0);
          func_0x00f78a24(0x3d1fcf8);
          lVar10 = func_0x00f78aec();
          uVar14 = func_0x00f78a24(0x3d7c5c8);
          plVar21 = (long *)0x0;
          plVar20 = plVar9;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(lVar10,uVar14);
          uVar14 = func_0x00f78a24(0x3d5dbe8);
          puVar29 = &System_Text_StringBuilder__Append;
          auVar32 = func_0x00f78ac0(lVar10,uVar14);
          puVar4 = puVar5 + -0x40;
          goto code_r0x029d2c70;
        }
        auVar33 = func_0x00f78af4();
        uVar25 = auVar33._8_8_;
        plVar20 = auVar33._0_8_;
        puVar5 = puVar4 + -0xa0;
        *(long *)(puVar4 + -0xa0) = unaff_x24;
        *(ulong *)(puVar4 + -0x98) = uVar26;
        *(ulong *)(puVar4 + -0x90) = uVar11;
        *(long **)(puVar4 + -0x88) = plVar9;
        *(long *)(puVar4 + -0x80) = lVar17;
        *(long **)(puVar4 + -0x78) = plVar12;
        *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x50;
        *(undefined **)(puVar4 + -0x68) = &System_Text_StringBuilder__Append;
        puVar28 = puVar4 + -0x70;
        uVar26 = 0x3eb9000;
        plVar21 = plVar19;
        if ((bRam0000000003eb948a & 1) == 0) {
          func_0x00f78a20(0x3d208b0);
          bRam0000000003eb948a = 1;
        }
        iVar8 = (int)plVar18;
        if (iVar8 < 0) {
code_r0x029d2e7c:
          uVar14 = func_0x00f78a24(0x3d6de28);
          uVar13 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar14,0);
          func_0x00f78a24(0x3d1fcf8);
          plVar19 = (long *)func_0x00f78aec();
          uVar14 = 0x3d7b9d0;
code_r0x029d2ee8:
          uVar14 = func_0x00f78a24(uVar14);
          plVar21 = (long *)0x0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(plVar19,uVar14,uVar13);
          uVar14 = func_0x00f78a24(0x3d5dc00);
          func_0x00f78ac0(plVar19,uVar14);
        }
        else {
          iVar23 = (int)plVar19;
          if (iVar23 < 0) {
            uVar14 = func_0x00f78a24(0x3d75fa8);
            uVar13 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar14,0);
            func_0x00f78a24(0x3d1fcf8);
            plVar19 = (long *)func_0x00f78aec();
            uVar14 = 0x3d78638;
            goto code_r0x029d2ee8;
          }
          if ((iVar23 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
            return plVar20;
          }
          if (uVar25 != 0) {
            if (iVar23 == 0) {
              return plVar20;
            }
            if (iVar8 <= *(int *)(uVar25 + 0x10) - iVar23) {
              iVar8 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
              lVar17 = uVar25 + ((ulong)plVar18 & 0xffffffff) * 2 + (long)iVar8;
              puVar29 = &UNK_029d2e58;
              plVar21 = plVar19;
              goto code_r0x029d2b54;
            }
            goto code_r0x029d2e7c;
          }
          if (iVar8 == 0 && iVar23 == 0) {
            return plVar20;
          }
        }
        func_0x00f78a24(0x3d1fcf0);
        uVar14 = func_0x00f78aec();
        uVar13 = func_0x00f78a24(0x3d7c5a0);
        plVar20 = (long *)0x0;
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar14,uVar13);
        uVar13 = func_0x00f78a24(0x3d5dc00);
        uVar13 = func_0x00f78ac0(uVar14,uVar13);
        *(long **)(puVar4 + -0xc0) = plVar19;
        *(undefined8 *)(puVar4 + -0xb8) = uVar14;
        *(undefined1 **)(puVar4 + -0xb0) = puVar28;
        *(undefined **)(puVar4 + -0xa8) = &System_Text_StringBuilder__AppendLine;
        uVar14 = /*System.Environment$$get_NewLine*/ func_0x02aca040(0);
        auVar32._8_8_ = uVar14;
        auVar32._0_8_ = uVar13;
        puVar28 = *(undefined1 **)(puVar4 + -0xb0);
        puVar29 = *(undefined **)(puVar4 + -0xa8);
        lVar10 = *(long *)(puVar4 + -0xc0);
        plVar9 = *(long **)(puVar4 + -0xb8);
        puVar4 = puVar4 + -0xa0;
      } while( true );
    }
    /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Clear*/ func_0x024a4f04(lVar17,uRam0000000003d3cc10);
    lVar10 = *(long *)(auVar30._0_8_ + 0x28);
    auVar31._8_8_ = lVar17;
    auVar31._0_8_ = lVar10;
    if (lVar10 == 0) goto code_r0x01632938;
    pppppppuVar27 = *(undefined8 ********)((long)plVar3 + -0x10);
    puVar29 = *(undefined **)((long)plVar3 + -8);
    uVar14 = *(undefined8 *)((long)plVar3 + -0x20);
    lVar10 = *(long *)((long)plVar3 + -0x18);
    plVar19 = *(long **)((long)plVar3 + -0x30);
    plVar24 = *(long **)((long)plVar3 + -0x28);
    plVar18 = plRam0000000003d40350;
  }
  else {
    puVar29 = &UNK_0163173c;
code_r0x016317e8:
    plVar3 = &lStack_d0;
    pppppppuVar27 = &ppppppuStack_a0;
    uVar25 = 0x3eb5000;
    plVar9 = (long *)0x3d40348;
    plVar20 = (long *)0x3d40358;
    uVar26 = 1;
    lStack_d0 = unaff_x24;
    uStack_c8 = uVar11;
    plStack_c0 = param_4;
    plStack_b8 = param_3;
    ppppppuStack_a0 = &pppppuStack_30;
    puStack_98 = puVar29;
    auStack_b0 = auVar30;
    while( true ) {
      if ((bRam0000000003eb565d & 1) == 0) {
        func_0x00f78a20(0x3d40348);
        func_0x00f78a20(0x3d40358);
        bRam0000000003eb565d = 1;
      }
      plVar24 = plStack_b8;
      plVar19 = plStack_c0;
      uVar14 = auStack_b0._0_8_;
      lVar10 = plVar12[5];
      if (lVar10 == 0) {
        puVar29 = &Core_Analytics_AnalyticsManager__ReturnPooledObjects;
        auVar31 = func_0x00f78af4();
        auVar30._8_8_ = plVar12;
        auVar30._0_8_ = auVar31._0_8_;
        lVar17 = *(long *)(auVar31._8_8_ + 0x18);
        if (lVar17 == 0) {
          return auVar31._0_8_;
        }
        goto code_r0x016328b4;
      }
      if (0 < *(int *)(lVar10 + 0x18)) break;
      Core_Analytics_AnalyticsManager__FillCustomParamListPool(plVar12,0x19);
    }
    plVar3 = (long *)auStack_b0;
    pppppppuVar27 = &ppppppuStack_a0;
    iVar8 = *(int *)(lVar10 + 0x18);
    if (iVar8 == 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d40348 + 0x18) + 0xc0) + 0x30))
                (lVar10);
      iVar8 = *(int *)(lVar10 + 0x18);
    }
    lVar17 = *(long *)(lVar10 + 0x10);
    uVar22 = iVar8 - 1;
    *(uint *)(lVar10 + 0x18) = uVar22;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar17 == 0) {
      func_0x00f78af4();
    }
    else if (uVar22 < *(uint *)(lVar17 + 0x18)) {
      lVar17 = lVar17 + (long)(int)uVar22 * 8;
      plVar9 = *(long **)(lVar17 + 0x20);
      *(undefined8 *)(lVar17 + 0x20) = 0;
      return plVar9;
    }
    uVar13 = func_0x00f78b24();
    puVar29 = &System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push;
    auVar31 = func_0x00f78ac0(uVar13,0);
  }
  uVar13 = auVar31._8_8_;
  lVar17 = auVar31._0_8_;
  *(undefined8 *)((long)plVar3 + -0x20) = uVar14;
  *(long *)((long)plVar3 + -0x18) = lVar10;
  *(undefined8 ********)((long)plVar3 + -0x10) = pppppppuVar27;
  *(undefined **)((long)plVar3 + -8) = puVar29;
  plVar9 = (long *)(lVar17 + 0x10);
  lVar10 = *plVar9;
  if (lVar10 == 0) {
code_r0x0286596c:
    uVar13 = uVar14;
    plVar9 = (long *)func_0x00f78af4();
    lVar10 = extraout_x8;
    uVar22 = extraout_w9;
  }
  else {
    uVar22 = *(uint *)(lVar17 + 0x18);
    if (uVar22 == (uint)*(long *)(lVar10 + 0x18)) {
      iVar8 = 4;
      if (*(long *)(lVar10 + 0x18) != 0) {
        iVar8 = uVar22 << 1;
      }
      plVar9 = (long *)(*(code *)**(undefined8 **)(*(long *)(plVar18[3] + 0xc0) + 0x38))
                                 (plVar9,iVar8);
      lVar10 = *(long *)(lVar17 + 0x10);
      uVar22 = *(uint *)(lVar17 + 0x18);
      *(uint *)(lVar17 + 0x18) = uVar22 + 1;
      uVar14 = uVar13;
      if (lVar10 != 0) goto code_r0x02865978;
      goto code_r0x0286596c;
    }
  }
  *(uint *)(lVar17 + 0x18) = uVar22 + 1;
code_r0x02865978:
  if (uVar22 < *(uint *)(lVar10 + 0x18)) {
    *(undefined8 *)(lVar10 + (long)(int)uVar22 * 8 + 0x20) = uVar13;
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
    return plVar9;
  }
  uVar14 = func_0x00f78b24();
  func_0x00f78ac0(uVar14,0);
  *(undefined8 *)((long)plVar3 + -0x40) = uVar13;
  *(long *)((long)plVar3 + -0x38) = lVar17;
  *(undefined1 **)((long)plVar3 + -0x30) = (undefined1 *)((long)plVar3 + -0x10);
  *(undefined **)((long)plVar3 + -0x28) =
       &System_Collections_Generic_Stack_object___ThrowForEmptyStack;
  func_0x00f78a24(0x3d22a38);
  uVar14 = func_0x00f78aec();
  uVar15 = func_0x00f78a24(0x3d72ca8);
  lVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar15);
  uVar15 = func_0x00f78a24(0x3d40438);
  auVar30 = func_0x00f78ac0(uVar14,uVar15);
  lVar10 = auVar30._0_8_;
  *(undefined8 *)((long)plVar3 + -0x60) = uVar13;
  *(undefined8 *)((long)plVar3 + -0x58) = uVar14;
  *(undefined1 **)((long)plVar3 + -0x50) = (undefined1 *)((long)plVar3 + -0x30);
  *(undefined **)((long)plVar3 + -0x48) =
       &System_Collections_Generic_Stack_SequenceNode_SequenceConstructPosContext____ctor;
  if (lVar10 != 0) {
    /*System.Object$$.ctor*/ func_0x0294d018(lVar10,0);
    plVar9 = (long *)(**(code **)**(undefined8 **)(*(long *)(auVar30._8_8_ + 0x18) + 0xc0))();
    *(long **)(lVar10 + 0x10) = plVar9;
    return plVar9;
  }
  auVar30 = func_0x00f78af4();
  lVar10 = auVar30._0_8_;
  *(long **)((long)plVar3 + -0x90) = plVar19;
  *(long **)((long)plVar3 + -0x88) = plVar24;
  *(undefined8 *)((long)plVar3 + -0x80) = uVar13;
  *(undefined8 *)((long)plVar3 + -0x78) = uVar14;
  *(undefined1 **)((long)plVar3 + -0x70) = (undefined1 *)((long)plVar3 + -0x50);
  *(undefined **)((long)plVar3 + -0x68) =
       &System_Collections_Generic_Stack_SequenceNode_SequenceConstructPosContext____ctor;
  if (lVar10 == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Object$$.ctor*/ func_0x0294d018(lVar10,0);
    uVar13 = auVar30._8_8_;
    if (-1 < auVar30._8_4_) {
      lVar17 = *(long *)(*(long *)(*(long *)(lVar17 + 0x18) + 0xc0) + 8);
      if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar17);
      }
      plVar9 = (long *)func_0x00f78a34(lVar17,auVar30._8_8_);
      *(long **)(lVar10 + 0x10) = plVar9;
      return plVar9;
    }
  }
  *(int *)((long)plVar3 + -0x94) = (int)uVar13;
  uVar14 = func_0x00f78a24(0x3d22910);
  uVar14 = func_0x00f78ae0(uVar14,(undefined1 *)((long)plVar3 + -0x94));
  func_0x00f78a24(0x3d1fcf8);
  uVar13 = func_0x00f78aec();
  uVar15 = func_0x00f78a24(0x3d781d8);
  uVar16 = func_0x00f78a24(0x3d70548);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(uVar13,uVar15,uVar14,uVar16,0);
  uVar14 = func_0x00f78a24(0x3d40520);
  lVar10 = func_0x00f78ac0(uVar13,uVar14);
  return (long *)(ulong)*(uint *)(lVar10 + 0x18);
}



// ============================================================
// RVA: 0x1631668 | Core.Analytics.AnalyticsManager.PostEvent
// ============================================================

/* WARNING: Possible PIC construction at 0x01631738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01631784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01632d60) */
/* WARNING: Removing unreachable block (ram,0x01632d70) */
/* WARNING: Removing unreachable block (ram,0x01632d7c) */
/* WARNING: Removing unreachable block (ram,0x01632d8c) */
/* WARNING: Removing unreachable block (ram,0x01632d14) */
/* WARNING: Removing unreachable block (ram,0x01632d1c) */
/* WARNING: Removing unreachable block (ram,0x01632ce8) */
/* WARNING: Removing unreachable block (ram,0x01632d2c) */
/* WARNING: Removing unreachable block (ram,0x01632d30) */
/* WARNING: Removing unreachable block (ram,0x01632d3c) */
/* WARNING: Removing unreachable block (ram,0x01632d64) */
/* WARNING: Removing unreachable block (ram,0x01632d68) */
/* WARNING: Removing unreachable block (ram,0x01632d48) */
/* WARNING: Removing unreachable block (ram,0x01632d4c) */
/* WARNING: Removing unreachable block (ram,0x01632cf0) */
/* WARNING: Removing unreachable block (ram,0x01632cf4) */
/* WARNING: Removing unreachable block (ram,0x01632d08) */
/* WARNING: Removing unreachable block (ram,0x01632cc0) */
/* WARNING: Removing unreachable block (ram,0x01632cc8) */
/* WARNING: Removing unreachable block (ram,0x01632cdc) */
/* WARNING: Removing unreachable block (ram,0x01632c50) */
/* WARNING: Removing unreachable block (ram,0x01632c5c) */
/* WARNING: Removing unreachable block (ram,0x01632d90) */
/* WARNING: Removing unreachable block (ram,0x01632d98) */
/* WARNING: Removing unreachable block (ram,0x01632c68) */
/* WARNING: Removing unreachable block (ram,0x01632c84) */
/* WARNING: Removing unreachable block (ram,0x01632c90) */
/* WARNING: Removing unreachable block (ram,0x01632c98) */
/* WARNING: Removing unreachable block (ram,0x01632ca0) */
/* WARNING: Removing unreachable block (ram,0x01632c20) */
/* WARNING: Removing unreachable block (ram,0x01632c28) */
/* WARNING: Removing unreachable block (ram,0x01632c44) */
/* WARNING: Removing unreachable block (ram,0x01632bd0) */
/* WARNING: Removing unreachable block (ram,0x01632bd8) */
/* WARNING: Removing unreachable block (ram,0x01632bf4) */
/* WARNING: Removing unreachable block (ram,0x01632c0c) */
/* WARNING: Removing unreachable block (ram,0x01632ba4) */
/* WARNING: Removing unreachable block (ram,0x01632bac) */
/* WARNING: Removing unreachable block (ram,0x01632bc4) */
/* WARNING: Removing unreachable block (ram,0x01632b74) */
/* WARNING: Removing unreachable block (ram,0x01632b7c) */
/* WARNING: Removing unreachable block (ram,0x01632b90) */
/* WARNING: Removing unreachable block (ram,0x01632b40) */
/* WARNING: Removing unreachable block (ram,0x01632b48) */
/* WARNING: Removing unreachable block (ram,0x01632b64) */
/* WARNING: Removing unreachable block (ram,0x01632adc) */
/* WARNING: Removing unreachable block (ram,0x01632aec) */
/* WARNING: Removing unreachable block (ram,0x01632af4) */
/* WARNING: Removing unreachable block (ram,0x01632af8) */
/* WARNING: Removing unreachable block (ram,0x01632b14) */
/* WARNING: Removing unreachable block (ram,0x01632b2c) */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x029d2fa0) */
/* WARNING: Removing unreachable block (ram,0x01631788) */
/* WARNING: Removing unreachable block (ram,0x0163173c) */
/* WARNING: Removing unreachable block (ram,0x01631740) */
/* WARNING: Removing unreachable block (ram,0x01632dac) */
/* WARNING: Removing unreachable block (ram,0x01632db4) */

long * Core_Analytics_AnalyticsManager__PostEvent
                 (long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  long **pplVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long extraout_x8;
  uint extraout_w9;
  uint uVar22;
  int iVar23;
  long *plVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar28;
  undefined1 *puVar29;
  undefined *puVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  long lStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 ******ppppppuStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  long *plStack_60;
  long *plStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  pplVar3 = (long **)auStack_70;
  plVar9 = param_1;
  plVar19 = param_3;
  plVar13 = param_4;
  if ((bRam0000000003eb5655 & 1) == 0) {
    func_0x00f78a20(0x3d210a0);
    func_0x00f78a20(0x3d3cc08);
    func_0x00f78a20(0x3d3cc38);
    func_0x00f78a20(0x3d3cc58);
    func_0x00f78a20(0x3d3cc68);
    plVar9 = (long *)func_0x00f78a20(0x3d3cc70);
    bRam0000000003eb5655 = 1;
  }
  if (*(char *)((long)param_1 + 0x6c) == '\0') {
    return plVar9;
  }
  if (((*(ushort *)(/*System.DateTimeOffset_TypeInfo*/ lRam0000000003d210a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTimeOffset_TypeInfo*/ lRam0000000003d210a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auStack_70 = /*System.DateTimeOffset$$get_UtcNow*/ func_0x02a99f14(0);
  uVar10 = /*System.DateTimeOffset$$ToUnixTimeSeconds*/ func_0x02a9afc0(auStack_70,0);
  if (param_4 == (long *)0x0) {
    unaff_x24 = 0;
    lVar11 = param_1[7];
    if (lVar11 == 0) {
LAB_016317e4:
      puVar30 = &Core_Analytics_AnalyticsManager__GetCustomParmListFromPool;
      plVar9 = (long *)func_0x00f78af4();
      goto code_r0x016317e8;
    }
    if (*(int *)(lVar11 + 0x18) < 100) {
code_r0x016317ac:
      uStack_48 = 0;
      plStack_60 = param_2;
      plStack_58 = param_3;
      uStack_50 = uVar10;
      plVar9 = (long *)/*System.Collections.Generic.List<AnalyticsManager.Event>$$Add*/ func_0x024a78a4(lVar11,&plStack_60,uRam0000000003d3cc38);
      param_1[0xf] = (long)param_2;
      return plVar9;
    }
    lVar18 = *(long *)(*(long *)(lVar11 + 0x10) + 0x38);
    if (lVar18 == 0) {
      plVar19 = plRam0000000003d3cc58;
      /*System.Collections.Generic.List<AnalyticsManager.Event>$$RemoveAt*/ func_0x024a91fc(lVar11,0);
      lVar11 = param_1[7];
      if (lVar11 != 0) goto code_r0x016317ac;
      goto LAB_016317e4;
    }
    puVar30 = &UNK_01631788;
    uVar25 = 0;
    plVar9 = param_2;
    plVar17 = param_1;
    plVar21 = param_3;
    uVar27 = uVar10;
    pppppppuVar28 = (undefined8 *******)&stack0xfffffffffffffff0;
code_r0x016328b4:
    *(ulong *)((long)pplVar3 + -0x30) = uVar25;
    *(long **)((long)pplVar3 + -0x28) = plVar21;
    *(long **)((long)pplVar3 + -0x20) = plVar17;
    *(long **)((long)pplVar3 + -0x18) = plVar9;
    *(undefined8 ********)((long)pplVar3 + -0x10) = pppppppuVar28;
    *(undefined **)((long)pplVar3 + -8) = puVar30;
    if ((bRam0000000003eb565e & 1) == 0) {
      func_0x00f78a20(0x3d3cc10);
      func_0x00f78a20(0x3d40350);
      bRam0000000003eb565e = 1;
    }
    if (lVar18 == 0) {
code_r0x01632938:
      lVar11 = func_0x00f78af4();
      *(long **)((long)pplVar3 + -0x50) = param_1;
      *(long *)((long)pplVar3 + -0x48) = lVar18;
      *(undefined1 **)((long)pplVar3 + -0x40) = (undefined1 *)((long)pplVar3 + -0x10);
      *(undefined **)((long)pplVar3 + -0x38) = &Core_Analytics_AnalyticsManager__StartEventBatch;
      if ((bRam0000000003eb565f & 1) == 0) {
        func_0x00f78a20(0x3d7cc48);
        bRam0000000003eb565f = 1;
      }
      plVar9 = *(long **)(lVar11 + 0x20);
      if (plVar9 == (long *)0x0) {
        auVar31 = func_0x00f78af4();
        plVar17 = auVar31._0_8_;
        puVar4 = (undefined1 *)((long)pplVar3 + -0xd0);
        puVar6 = (undefined1 *)((long)pplVar3 + -0xd0);
        *(undefined8 *)((long)pplVar3 + -0xb0) = unaff_x28;
        *(undefined8 *)((long)pplVar3 + -0xa8) = unaff_x27;
        *(undefined8 *)((long)pplVar3 + -0xa0) = unaff_x26;
        *(undefined8 *)((long)pplVar3 + -0x98) = unaff_x25;
        *(long *)((long)pplVar3 + -0x90) = unaff_x24;
        *(ulong *)((long)pplVar3 + -0x88) = uVar27;
        *(ulong *)((long)pplVar3 + -0x80) = uVar25;
        *(undefined8 *)((long)pplVar3 + -0x78) = 0x3eb5000;
        *(undefined8 *)((long)pplVar3 + -0x70) = 0x3eb5000;
        *(long *)((long)pplVar3 + -0x68) = lVar11;
        *(undefined1 **)((long)pplVar3 + -0x60) = (undefined1 *)((long)pplVar3 + -0x40);
        *(undefined **)((long)pplVar3 + -0x58) = &Core_Analytics_AnalyticsManager__AddEventToBatch;
        puVar29 = (undefined1 *)((long)pplVar3 + -0x60);
        *(long *)((long)pplVar3 + -200) = auVar31._8_8_;
        lVar11 = 0x3eb5000;
        plVar21 = plVar19;
        if ((bRam0000000003eb5660 & 1) == 0) {
          func_0x00f78a20(0x3d21ce0);
          func_0x00f78a20(0x3d3cc20);
          func_0x00f78a20(0x3d3cc28);
          func_0x00f78a20(0x3d66538);
          func_0x00f78a20(0x3d7cc30);
          func_0x00f78a20(0x3d66570);
          func_0x00f78a20(0x3d66580);
          func_0x00f78a20(0x3d7d1e0);
          func_0x00f78a20(0x3d66568);
          func_0x00f78a20(0x3d66fd8);
          func_0x00f78a20(0x3d66578);
          func_0x00f78a20(0x3d66518);
          func_0x00f78a20(0x3d66548);
          func_0x00f78a20(0x3d66588);
          bRam0000000003eb5660 = 1;
        }
        if (((ulong)plVar19 & 1) == 0) {
          plVar9 = (long *)plVar17[4];
          if (plVar9 != (long *)0x0) {
            puVar30 = &UNK_01632a9c;
            puVar6 = (undefined1 *)((long)pplVar3 + -0xd0);
            uVar12 = /*STR(',')*/ uRam0000000003d66fd8;
            goto code_r0x029d2f8c;
          }
        }
        else {
          plVar9 = plVar17 + 4;
          plVar17 = plVar9;
          if (*plVar9 != 0) {
            uVar25 = 0x3d7cc30;
            plVar21 = (long *)0x0;
            /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*plVar9,/*STR('{')*/ uRam0000000003d7cc30,0);
            auVar32._8_8_ = /*STR('"event_id": "')*/ uRam0000000003d66570;
            auVar32._0_8_ = *plVar9;
            if (*plVar9 != 0) {
              lVar11 = 0x3d21ce0;
              plVar21 = (long *)0x0;
              puVar30 = &UNK_01632adc;
              goto code_r0x029d2c70;
            }
          }
        }
        lVar11 = func_0x00f78af4();
        *(undefined8 *)((long)pplVar3 + -0xf0) = 0x3eb5000;
        *(long **)((long)pplVar3 + -0xe8) = plVar17;
        *(undefined1 **)((long)pplVar3 + -0xe0) = puVar29;
        *(undefined **)((long)pplVar3 + -0xd8) = &Core_Analytics_AnalyticsManager__EndEventBatch;
        if ((bRam0000000003eb5661 & 1) == 0) {
          func_0x00f78a20(0x3d76b40);
          bRam0000000003eb5661 = 1;
        }
        plVar9 = *(long **)(lVar11 + 0x20);
        if (plVar9 == (long *)0x0) {
          auVar31 = func_0x00f78af4();
          lVar18 = auVar31._0_8_;
          *(undefined8 *)((long)pplVar3 + -0x110) = 0x3eb5000;
          *(long *)((long)pplVar3 + -0x108) = lVar11;
          *(undefined1 **)((long)pplVar3 + -0x100) = (undefined1 *)((long)pplVar3 + -0xe0);
          *(undefined **)((long)pplVar3 + -0xf8) = &Core_Analytics_AnalyticsManager__SendEventBatch;
          uVar12 = /*Core.Analytics.AnalyticsManager$$CreatePOSTRequest*/ func_0x01632e78(lVar18,*(undefined8 *)(lVar18 + 0x18),auVar31._8_8_,plVar21);
          /*Core.Analytics.AnalyticsManager$$SendEventBatch*/ func_0x01633008(lVar18,uVar12);
          return (long *)((long)&MACH_HEADER.magic + 1);
        }
        puVar29 = *(undefined1 **)((long)pplVar3 + -0xe0);
        puVar30 = *(undefined **)((long)pplVar3 + -0xd8);
        lVar11 = *(long *)((long)pplVar3 + -0xf0);
        plVar17 = *(long **)((long)pplVar3 + -0xe8);
        uVar12 = /*STR('] }')*/ uRam0000000003d76b40;
      }
      else {
        puVar29 = *(undefined1 **)((long)pplVar3 + -0x40);
        puVar30 = *(undefined **)((long)pplVar3 + -0x38);
        lVar11 = *(long *)((long)pplVar3 + -0x50);
        plVar17 = *(long **)((long)pplVar3 + -0x48);
        puVar6 = (undefined1 *)((long)pplVar3 + -0x30);
        uVar12 = /*STR('{ "events": [')*/ uRam0000000003d7cc48;
        plVar19 = (long *)0x3eb5000;
      }
code_r0x029d2f8c:
      auVar32._8_8_ = uVar12;
      auVar32._0_8_ = plVar9;
      plVar21 = (long *)0x0;
      *(long *)(puVar6 + -0x20) = lVar11;
      *(long **)(puVar6 + -0x18) = plVar17;
      *(undefined1 **)(puVar6 + -0x10) = puVar29;
      *(undefined **)(puVar6 + -8) = puVar30;
      puVar29 = puVar6 + -0x10;
      puVar30 = &UNK_029d2fa0;
      puVar4 = puVar6 + -0x20;
code_r0x029d2c70:
      do {
        lVar18 = auVar32._8_8_;
        plVar17 = auVar32._0_8_;
        *(long *)(puVar4 + -0x40) = unaff_x24;
        *(ulong *)(puVar4 + -0x38) = uVar27;
        *(ulong *)(puVar4 + -0x30) = uVar25;
        *(long **)(puVar4 + -0x28) = plVar19;
        *(long *)(puVar4 + -0x20) = lVar11;
        *(long **)(puVar4 + -0x18) = plVar9;
        *(undefined1 **)(puVar4 + -0x10) = puVar29;
        *(undefined **)(puVar4 + -8) = puVar30;
        if (lVar18 == 0) {
          return plVar17;
        }
        uVar27 = plVar17[2];
        if (uVar27 == 0) {
          func_0x00f78af4();
          lVar18 = lVar11;
          plVar9 = plVar19;
          uVar10 = uVar25;
code_r0x029d2d74:
          uVar12 = func_0x00f78b24();
          puVar30 = &System_Text_StringBuilder__AppendHelper;
          auVar32 = func_0x00f78ac0(uVar12,0);
          plVar19 = plVar21;
          plVar20 = plVar13;
        }
        else {
          uVar2 = *(uint *)(plVar17 + 4);
          unaff_x24 = (long)(int)uVar2;
          uVar1 = *(uint *)(lVar18 + 0x10);
          plVar9 = (long *)(ulong)uVar1;
          uVar22 = uVar1 + uVar2;
          uVar10 = (ulong)uVar22;
          if ((int)uVar22 < *(int *)(uVar27 + 0x18)) {
            if ((int)uVar1 < 3) {
              if ((int)uVar1 < 1) goto code_r0x029d2d54;
              plVar21 = (long *)0x0;
              uVar7 = /*System.String$$get_Chars*/ func_0x029c5420(lVar18,0);
              if (uVar2 < *(uint *)(uVar27 + 0x18)) {
                *(undefined2 *)(uVar27 + unaff_x24 * 2 + 0x20) = uVar7;
                if (uVar1 < 2) {
code_r0x029d2d54:
                  *(uint *)(plVar17 + 4) = uVar22;
                  return plVar17;
                }
                plVar21 = (long *)0x0;
                uVar7 = /*System.String$$get_Chars*/ func_0x029c5420(lVar18,1);
                if (uVar2 + 1 < *(uint *)(uVar27 + 0x18)) {
                  *(undefined2 *)(uVar27 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar7;
                  goto code_r0x029d2d54;
                }
              }
            }
            else {
              iVar8 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
              if (uVar2 < *(uint *)(uVar27 + 0x18)) {
                /*System.String$$wstrcpy*/ func_0x029cb054(uVar27 + unaff_x24 * 2 + 0x20,lVar18 + iVar8,plVar9,0);
                goto code_r0x029d2d54;
              }
            }
            goto code_r0x029d2d74;
          }
          puVar30 = &UNK_029d2cf4;
          plVar19 = plVar21;
          plVar20 = plVar13;
        }
        lVar11 = auVar32._8_8_;
        plVar21 = auVar32._0_8_;
        *(long *)(puVar4 + -0x60) = lVar18;
        *(long **)(puVar4 + -0x58) = plVar17;
        *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x10;
        *(undefined **)(puVar4 + -0x48) = puVar30;
        if (lVar11 != 0) {
          iVar8 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar18 = lVar11 + iVar8;
          plVar20 = (long *)(ulong)*(uint *)(lVar11 + 0x10);
          puVar29 = *(undefined1 **)(puVar4 + -0x50);
          puVar30 = *(undefined **)(puVar4 + -0x48);
          puVar5 = puVar4 + -0x40;
          auVar33._8_8_ = uVar10;
          auVar33._0_8_ = *(undefined8 *)(puVar4 + -0x58);
          plVar13 = *(long **)(puVar4 + -0x60);
          plVar19 = plVar9;
code_r0x029d2b54:
          uVar25 = auVar33._8_8_;
          *(long *)(puVar5 + -0x40) = unaff_x24;
          *(ulong *)(puVar5 + -0x38) = uVar27;
          *(ulong *)(puVar5 + -0x30) = uVar25;
          *(long **)(puVar5 + -0x28) = plVar19;
          *(long **)(puVar5 + -0x20) = plVar13;
          *(long *)(puVar5 + -0x18) = auVar33._0_8_;
          *(undefined1 **)(puVar5 + -0x10) = puVar29;
          *(undefined **)(puVar5 + -8) = puVar30;
          puVar29 = puVar5 + -0x10;
          iVar8 = (int)plVar20;
          if (-1 < iVar8) {
            lVar11 = plVar21[2];
            if (lVar11 != 0) {
              iVar23 = (int)plVar21[4];
              uVar22 = iVar23 + iVar8;
              uVar25 = (ulong)uVar22;
              if ((int)uVar22 <= *(int *)(lVar11 + 0x18)) goto code_r0x029d2be8;
              uVar1 = *(int *)(lVar11 + 0x18) - iVar23;
              uVar27 = (ulong)uVar1;
              if (0 < (int)uVar1) {
                /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar18,lVar11,iVar23,uVar27);
                plVar19 = plVar20;
                if (plVar21[2] == 0) goto code_r0x029d2c08;
                *(int *)(plVar21 + 4) = (int)*(undefined8 *)(plVar21[2] + 0x18);
              }
              uVar22 = iVar8 - uVar1;
              plVar20 = (long *)(ulong)uVar22;
              /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(plVar21,plVar20);
              lVar11 = plVar21[2];
              lVar18 = lVar18 + (long)(int)uVar1 * 2;
              iVar23 = 0;
code_r0x029d2be8:
              /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar18,lVar11,iVar23,plVar20);
              *(uint *)(plVar21 + 4) = uVar22;
              return plVar21;
            }
code_r0x029d2c08:
            func_0x00f78af4();
          }
          uVar12 = func_0x00f78a24(0x3d6b268);
          plVar9 = (long *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar12,0);
          func_0x00f78a24(0x3d1fcf8);
          lVar11 = func_0x00f78aec();
          uVar12 = func_0x00f78a24(0x3d7c5c8);
          plVar13 = (long *)0x0;
          plVar21 = plVar9;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(lVar11,uVar12);
          uVar12 = func_0x00f78a24(0x3d5dbe8);
          puVar30 = &System_Text_StringBuilder__Append;
          auVar32 = func_0x00f78ac0(lVar11,uVar12);
          puVar4 = puVar5 + -0x40;
          goto code_r0x029d2c70;
        }
        auVar33 = func_0x00f78af4();
        uVar25 = auVar33._8_8_;
        plVar21 = auVar33._0_8_;
        puVar5 = puVar4 + -0xa0;
        *(long *)(puVar4 + -0xa0) = unaff_x24;
        *(ulong *)(puVar4 + -0x98) = uVar27;
        *(ulong *)(puVar4 + -0x90) = uVar10;
        *(long **)(puVar4 + -0x88) = plVar9;
        *(long *)(puVar4 + -0x80) = lVar18;
        *(long **)(puVar4 + -0x78) = plVar17;
        *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x50;
        *(undefined **)(puVar4 + -0x68) = &System_Text_StringBuilder__Append;
        puVar29 = puVar4 + -0x70;
        uVar27 = 0x3eb9000;
        plVar13 = plVar20;
        if ((bRam0000000003eb948a & 1) == 0) {
          func_0x00f78a20(0x3d208b0);
          bRam0000000003eb948a = 1;
        }
        iVar8 = (int)plVar19;
        if (iVar8 < 0) {
code_r0x029d2e7c:
          uVar12 = func_0x00f78a24(0x3d6de28);
          uVar14 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar12,0);
          func_0x00f78a24(0x3d1fcf8);
          plVar20 = (long *)func_0x00f78aec();
          uVar12 = 0x3d7b9d0;
code_r0x029d2ee8:
          uVar12 = func_0x00f78a24(uVar12);
          plVar13 = (long *)0x0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(plVar20,uVar12,uVar14);
          uVar12 = func_0x00f78a24(0x3d5dc00);
          func_0x00f78ac0(plVar20,uVar12);
        }
        else {
          iVar23 = (int)plVar20;
          if (iVar23 < 0) {
            uVar12 = func_0x00f78a24(0x3d75fa8);
            uVar14 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar12,0);
            func_0x00f78a24(0x3d1fcf8);
            plVar20 = (long *)func_0x00f78aec();
            uVar12 = 0x3d78638;
            goto code_r0x029d2ee8;
          }
          if ((iVar23 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
            return plVar21;
          }
          if (uVar25 != 0) {
            if (iVar23 == 0) {
              return plVar21;
            }
            if (iVar8 <= *(int *)(uVar25 + 0x10) - iVar23) {
              iVar8 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
              lVar18 = uVar25 + ((ulong)plVar19 & 0xffffffff) * 2 + (long)iVar8;
              puVar30 = &UNK_029d2e58;
              plVar13 = plVar20;
              goto code_r0x029d2b54;
            }
            goto code_r0x029d2e7c;
          }
          if (iVar8 == 0 && iVar23 == 0) {
            return plVar21;
          }
        }
        func_0x00f78a24(0x3d1fcf0);
        uVar12 = func_0x00f78aec();
        uVar14 = func_0x00f78a24(0x3d7c5a0);
        plVar21 = (long *)0x0;
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar12,uVar14);
        uVar14 = func_0x00f78a24(0x3d5dc00);
        uVar14 = func_0x00f78ac0(uVar12,uVar14);
        *(long **)(puVar4 + -0xc0) = plVar20;
        *(undefined8 *)(puVar4 + -0xb8) = uVar12;
        *(undefined1 **)(puVar4 + -0xb0) = puVar29;
        *(undefined **)(puVar4 + -0xa8) = &System_Text_StringBuilder__AppendLine;
        uVar12 = /*System.Environment$$get_NewLine*/ func_0x02aca040(0);
        auVar32._8_8_ = uVar12;
        auVar32._0_8_ = uVar14;
        puVar29 = *(undefined1 **)(puVar4 + -0xb0);
        puVar30 = *(undefined **)(puVar4 + -0xa8);
        lVar11 = *(long *)(puVar4 + -0xc0);
        plVar9 = *(long **)(puVar4 + -0xb8);
        puVar4 = puVar4 + -0xa0;
      } while( true );
    }
    /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Clear*/ func_0x024a4f04(lVar18,uRam0000000003d3cc10);
    auVar31._8_8_ = lVar18;
    auVar31._0_8_ = param_1[5];
    if (param_1[5] == 0) goto code_r0x01632938;
    pppppppuVar28 = *(undefined8 ********)((long)pplVar3 + -0x10);
    puVar30 = *(undefined **)((long)pplVar3 + -8);
    plVar20 = *(long **)((long)pplVar3 + -0x20);
    lVar11 = *(long *)((long)pplVar3 + -0x18);
    plVar26 = *(long **)((long)pplVar3 + -0x30);
    plVar24 = *(long **)((long)pplVar3 + -0x28);
    plVar19 = plRam0000000003d40350;
  }
  else {
    puVar30 = (undefined *)0x163173c;
    plVar9 = param_1;
code_r0x016317e8:
    pplVar3 = (long **)&lStack_b0;
    pppppppuVar28 = &ppppppuStack_80;
    uVar25 = 0x3eb5000;
    plVar17 = (long *)0x3d40348;
    plVar21 = (long *)0x3d40358;
    uVar27 = 1;
    lStack_b0 = unaff_x24;
    uStack_a8 = uVar10;
    plStack_a0 = param_4;
    plStack_98 = param_3;
    plStack_90 = param_1;
    plStack_88 = param_2;
    ppppppuStack_80 = (undefined8 ******)&stack0xfffffffffffffff0;
    puStack_78 = puVar30;
    while( true ) {
      if ((bRam0000000003eb565d & 1) == 0) {
        func_0x00f78a20(0x3d40348);
        func_0x00f78a20(0x3d40358);
        bRam0000000003eb565d = 1;
      }
      plVar20 = plStack_90;
      plVar24 = plStack_98;
      plVar26 = plStack_a0;
      lVar11 = plVar9[5];
      if (lVar11 == 0) {
        puVar30 = &Core_Analytics_AnalyticsManager__ReturnPooledObjects;
        auVar31 = func_0x00f78af4();
        param_1 = auVar31._0_8_;
        lVar18 = *(long *)(auVar31._8_8_ + 0x18);
        if (lVar18 == 0) {
          return param_1;
        }
        goto code_r0x016328b4;
      }
      if (0 < *(int *)(lVar11 + 0x18)) break;
      Core_Analytics_AnalyticsManager__FillCustomParamListPool(plVar9,0x19);
    }
    pplVar3 = &plStack_90;
    pppppppuVar28 = &ppppppuStack_80;
    iVar8 = *(int *)(lVar11 + 0x18);
    if (iVar8 == 0) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d40348 + 0x18) + 0xc0) + 0x30))
                (lVar11);
      iVar8 = *(int *)(lVar11 + 0x18);
    }
    lVar18 = *(long *)(lVar11 + 0x10);
    uVar22 = iVar8 - 1;
    *(uint *)(lVar11 + 0x18) = uVar22;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar18 == 0) {
      func_0x00f78af4();
    }
    else if (uVar22 < *(uint *)(lVar18 + 0x18)) {
      lVar18 = lVar18 + (long)(int)uVar22 * 8;
      plVar9 = *(long **)(lVar18 + 0x20);
      *(undefined8 *)(lVar18 + 0x20) = 0;
      return plVar9;
    }
    uVar12 = func_0x00f78b24();
    puVar30 = &System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push;
    auVar31 = func_0x00f78ac0(uVar12,0);
  }
  plVar9 = auVar31._8_8_;
  lVar18 = auVar31._0_8_;
  *(long **)((long)pplVar3 + -0x20) = plVar20;
  *(long *)((long)pplVar3 + -0x18) = lVar11;
  *(undefined8 ********)((long)pplVar3 + -0x10) = pppppppuVar28;
  *(undefined **)((long)pplVar3 + -8) = puVar30;
  plVar13 = (long *)(lVar18 + 0x10);
  lVar11 = *plVar13;
  if (lVar11 == 0) {
code_r0x0286596c:
    plVar9 = plVar20;
    plVar13 = (long *)func_0x00f78af4();
    lVar11 = extraout_x8;
    uVar22 = extraout_w9;
  }
  else {
    uVar22 = *(uint *)(lVar18 + 0x18);
    if (uVar22 == (uint)*(long *)(lVar11 + 0x18)) {
      iVar8 = 4;
      if (*(long *)(lVar11 + 0x18) != 0) {
        iVar8 = uVar22 << 1;
      }
      plVar13 = (long *)(*(code *)**(undefined8 **)(*(long *)(plVar19[3] + 0xc0) + 0x38))
                                  (plVar13,iVar8);
      lVar11 = *(long *)(lVar18 + 0x10);
      uVar22 = *(uint *)(lVar18 + 0x18);
      *(uint *)(lVar18 + 0x18) = uVar22 + 1;
      plVar20 = plVar9;
      if (lVar11 != 0) goto code_r0x02865978;
      goto code_r0x0286596c;
    }
  }
  *(uint *)(lVar18 + 0x18) = uVar22 + 1;
code_r0x02865978:
  if (uVar22 < *(uint *)(lVar11 + 0x18)) {
    *(long **)(lVar11 + (long)(int)uVar22 * 8 + 0x20) = plVar9;
    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
    return plVar13;
  }
  uVar12 = func_0x00f78b24();
  func_0x00f78ac0(uVar12,0);
  *(long **)((long)pplVar3 + -0x40) = plVar9;
  *(long *)((long)pplVar3 + -0x38) = lVar18;
  *(undefined1 **)((long)pplVar3 + -0x30) = (undefined1 *)((long)pplVar3 + -0x10);
  *(undefined **)((long)pplVar3 + -0x28) =
       &System_Collections_Generic_Stack_object___ThrowForEmptyStack;
  func_0x00f78a24(0x3d22a38);
  uVar12 = func_0x00f78aec();
  uVar14 = func_0x00f78a24(0x3d72ca8);
  lVar18 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,uVar14);
  uVar14 = func_0x00f78a24(0x3d40438);
  auVar31 = func_0x00f78ac0(uVar12,uVar14);
  lVar11 = auVar31._0_8_;
  *(long **)((long)pplVar3 + -0x60) = plVar9;
  *(undefined8 *)((long)pplVar3 + -0x58) = uVar12;
  *(undefined1 **)((long)pplVar3 + -0x50) = (undefined1 *)((long)pplVar3 + -0x30);
  *(undefined **)((long)pplVar3 + -0x48) =
       &System_Collections_Generic_Stack_SequenceNode_SequenceConstructPosContext____ctor;
  if (lVar11 != 0) {
    /*System.Object$$.ctor*/ func_0x0294d018(lVar11,0);
    plVar9 = (long *)(**(code **)**(undefined8 **)(*(long *)(auVar31._8_8_ + 0x18) + 0xc0))();
    *(long **)(lVar11 + 0x10) = plVar9;
    return plVar9;
  }
  auVar31 = func_0x00f78af4();
  lVar11 = auVar31._0_8_;
  *(long **)((long)pplVar3 + -0x90) = plVar26;
  *(long **)((long)pplVar3 + -0x88) = plVar24;
  *(long **)((long)pplVar3 + -0x80) = plVar9;
  *(undefined8 *)((long)pplVar3 + -0x78) = uVar12;
  *(undefined1 **)((long)pplVar3 + -0x70) = (undefined1 *)((long)pplVar3 + -0x50);
  *(undefined **)((long)pplVar3 + -0x68) =
       &System_Collections_Generic_Stack_SequenceNode_SequenceConstructPosContext____ctor;
  if (lVar11 == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Object$$.ctor*/ func_0x0294d018(lVar11,0);
    plVar9 = auVar31._8_8_;
    if (-1 < auVar31._8_4_) {
      lVar18 = *(long *)(*(long *)(*(long *)(lVar18 + 0x18) + 0xc0) + 8);
      if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar18);
      }
      plVar9 = (long *)func_0x00f78a34(lVar18,auVar31._8_8_);
      *(long **)(lVar11 + 0x10) = plVar9;
      return plVar9;
    }
  }
  *(int *)((long)pplVar3 + -0x94) = (int)plVar9;
  uVar12 = func_0x00f78a24(0x3d22910);
  uVar12 = func_0x00f78ae0(uVar12,(undefined1 *)((long)pplVar3 + -0x94));
  func_0x00f78a24(0x3d1fcf8);
  uVar14 = func_0x00f78aec();
  uVar15 = func_0x00f78a24(0x3d781d8);
  uVar16 = func_0x00f78a24(0x3d70548);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(uVar14,uVar15,uVar12,uVar16,0);
  uVar12 = func_0x00f78a24(0x3d40520);
  lVar11 = func_0x00f78ac0(uVar14,uVar12);
  return (long *)(ulong)*(uint *)(lVar11 + 0x18);
}



// ============================================================
// RVA: 0x16317e8 | Core.Analytics.AnalyticsManager.GetCustomParmListFromPool
// ============================================================

/* WARNING: Possible PIC construction at 0x029d2f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01632d60) */
/* WARNING: Removing unreachable block (ram,0x01632d70) */
/* WARNING: Removing unreachable block (ram,0x01632d7c) */
/* WARNING: Removing unreachable block (ram,0x01632d8c) */
/* WARNING: Removing unreachable block (ram,0x01632d14) */
/* WARNING: Removing unreachable block (ram,0x01632d1c) */
/* WARNING: Removing unreachable block (ram,0x01632ce8) */
/* WARNING: Removing unreachable block (ram,0x01632d2c) */
/* WARNING: Removing unreachable block (ram,0x01632d30) */
/* WARNING: Removing unreachable block (ram,0x01632d3c) */
/* WARNING: Removing unreachable block (ram,0x01632d64) */
/* WARNING: Removing unreachable block (ram,0x01632d68) */
/* WARNING: Removing unreachable block (ram,0x01632d48) */
/* WARNING: Removing unreachable block (ram,0x01632d4c) */
/* WARNING: Removing unreachable block (ram,0x01632cf0) */
/* WARNING: Removing unreachable block (ram,0x01632cf4) */
/* WARNING: Removing unreachable block (ram,0x01632d08) */
/* WARNING: Removing unreachable block (ram,0x01632cc0) */
/* WARNING: Removing unreachable block (ram,0x01632cc8) */
/* WARNING: Removing unreachable block (ram,0x01632cdc) */
/* WARNING: Removing unreachable block (ram,0x01632c50) */
/* WARNING: Removing unreachable block (ram,0x01632c5c) */
/* WARNING: Removing unreachable block (ram,0x01632d90) */
/* WARNING: Removing unreachable block (ram,0x01632d98) */
/* WARNING: Removing unreachable block (ram,0x01632c68) */
/* WARNING: Removing unreachable block (ram,0x01632c84) */
/* WARNING: Removing unreachable block (ram,0x01632c90) */
/* WARNING: Removing unreachable block (ram,0x01632c98) */
/* WARNING: Removing unreachable block (ram,0x01632ca0) */
/* WARNING: Removing unreachable block (ram,0x01632c20) */
/* WARNING: Removing unreachable block (ram,0x01632c28) */
/* WARNING: Removing unreachable block (ram,0x01632c44) */
/* WARNING: Removing unreachable block (ram,0x01632bd0) */
/* WARNING: Removing unreachable block (ram,0x01632bd8) */
/* WARNING: Removing unreachable block (ram,0x01632bf4) */
/* WARNING: Removing unreachable block (ram,0x01632c0c) */
/* WARNING: Removing unreachable block (ram,0x01632ba4) */
/* WARNING: Removing unreachable block (ram,0x01632bac) */
/* WARNING: Removing unreachable block (ram,0x01632bc4) */
/* WARNING: Removing unreachable block (ram,0x01632b74) */
/* WARNING: Removing unreachable block (ram,0x01632b7c) */
/* WARNING: Removing unreachable block (ram,0x01632b90) */
/* WARNING: Removing unreachable block (ram,0x01632b40) */
/* WARNING: Removing unreachable block (ram,0x01632b48) */
/* WARNING: Removing unreachable block (ram,0x01632b64) */
/* WARNING: Removing unreachable block (ram,0x01632adc) */
/* WARNING: Removing unreachable block (ram,0x01632aec) */
/* WARNING: Removing unreachable block (ram,0x01632af4) */
/* WARNING: Removing unreachable block (ram,0x01632af8) */
/* WARNING: Removing unreachable block (ram,0x01632b14) */
/* WARNING: Removing unreachable block (ram,0x01632b2c) */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x029d2fa0) */
/* WARNING: Removing unreachable block (ram,0x01632dac) */
/* WARNING: Removing unreachable block (ram,0x01632db4) */

long * Core_Analytics_AnalyticsManager__GetCustomParmListFromPool
                 (long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined2 uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long extraout_x8;
  uint extraout_w9;
  uint uVar19;
  long lVar20;
  int iVar21;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long unaff_x24;
  undefined8 ******ppppppuVar25;
  undefined1 *puVar26;
  undefined8 *******pppppppuVar27;
  undefined *puVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 ******ppppppuStack_a0;
  undefined *puStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 ******ppppppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 *****pppppuStack_50;
  undefined *puStack_48;
  
  uVar22 = 0x3eb5000;
  uVar24 = 1;
  do {
    if ((bRam0000000003eb565d & 1) == 0) {
      func_0x00f78a20(0x3d40348);
      func_0x00f78a20(0x3d40358);
      bRam0000000003eb565d = 1;
    }
    lVar9 = *(long *)(param_1 + 0x28);
    if (lVar9 == 0) {
      auVar29 = func_0x00f78af4();
      plVar10 = auVar29._0_8_;
      plVar16 = *(long **)(auVar29._8_8_ + 0x18);
      if (plVar16 == (long *)0x0) {
        return plVar10;
      }
      uStack_70 = 0x3eb5000;
      uStack_68 = 0x3d40358;
      uStack_60 = 0x3d40348;
      puStack_48 = &Core_Analytics_AnalyticsManager__ReturnPooledObjects;
      lStack_58 = param_1;
      pppppuStack_50 = (undefined8 *****)&stack0xfffffffffffffff0;
      if ((bRam0000000003eb565e & 1) == 0) {
        func_0x00f78a20(0x3d3cc10);
        func_0x00f78a20(0x3d40350);
        bRam0000000003eb565e = 1;
      }
      if (plVar16 != (long *)0x0) {
        /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Clear*/ func_0x024a4f04(plVar16,uRam0000000003d3cc10);
        auVar29._8_8_ = plVar16;
        auVar29._0_8_ = plVar10[5];
        if (plVar10[5] != 0) {
          puVar3 = &stack0xffffffffffffffc0;
          param_3 = plRam0000000003d40350;
          lVar9 = lStack_58;
          unaff_x20 = uStack_60;
          unaff_x21 = uStack_68;
          unaff_x22 = uStack_70;
          ppppppuVar25 = (undefined8 ******)pppppuStack_50;
          puVar28 = puStack_48;
          goto code_r0x02865908;
        }
      }
      lVar9 = func_0x00f78af4();
      puStack_78 = &Core_Analytics_AnalyticsManager__StartEventBatch;
      plStack_90 = plVar10;
      plStack_88 = plVar16;
      ppppppuStack_80 = &pppppuStack_50;
      if ((bRam0000000003eb565f & 1) == 0) {
        func_0x00f78a20(0x3d7cc48);
        bRam0000000003eb565f = 1;
      }
      plVar10 = *(long **)(lVar9 + 0x20);
      if (plVar10 == (long *)0x0) {
        auVar29 = func_0x00f78af4();
        uStack_108 = auVar29._8_8_;
        plVar17 = auVar29._0_8_;
        puVar4 = auStack_110;
        puVar6 = (undefined8 *)auStack_110;
        puStack_98 = &Core_Analytics_AnalyticsManager__AddEventToBatch;
        pppppppuVar27 = &ppppppuStack_a0;
        plVar16 = (long *)0x3eb5000;
        plVar18 = param_3;
        ppppppuStack_a0 = &ppppppuStack_80;
        if ((bRam0000000003eb5660 & 1) == 0) {
          func_0x00f78a20(0x3d21ce0);
          func_0x00f78a20(0x3d3cc20);
          func_0x00f78a20(0x3d3cc28);
          func_0x00f78a20(0x3d66538);
          func_0x00f78a20(0x3d7cc30);
          func_0x00f78a20(0x3d66570);
          func_0x00f78a20(0x3d66580);
          func_0x00f78a20(0x3d7d1e0);
          func_0x00f78a20(0x3d66568);
          func_0x00f78a20(0x3d66fd8);
          func_0x00f78a20(0x3d66578);
          func_0x00f78a20(0x3d66518);
          func_0x00f78a20(0x3d66548);
          func_0x00f78a20(0x3d66588);
          bRam0000000003eb5660 = 1;
        }
        if (((ulong)param_3 & 1) == 0) {
          plVar10 = (long *)plVar17[4];
          if (plVar10 != (long *)0x0) {
            puStack_118 = &UNK_01632a9c;
            uVar11 = /*STR(',')*/ uRam0000000003d66fd8;
            goto code_r0x029d2f8c;
          }
        }
        else {
          plVar10 = plVar17 + 4;
          plVar17 = plVar10;
          if (*plVar10 != 0) {
            uVar22 = 0x3d7cc30;
            plVar18 = (long *)0x0;
            /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*plVar10,/*STR('{')*/ uRam0000000003d7cc30,0);
            auVar30._8_8_ = /*STR('"event_id": "')*/ uRam0000000003d66570;
            auVar30._0_8_ = *plVar10;
            if (*plVar10 != 0) {
              plVar16 = (long *)0x3d21ce0;
              plVar18 = (long *)0x0;
              puVar28 = &UNK_01632adc;
              break;
            }
          }
        }
        lVar9 = func_0x00f78af4();
        puStack_118 = &Core_Analytics_AnalyticsManager__EndEventBatch;
        if ((bRam0000000003eb5661 & 1) == 0) {
          func_0x00f78a20(0x3d76b40);
          bRam0000000003eb5661 = 1;
        }
        plVar10 = *(long **)(lVar9 + 0x20);
        if (plVar10 == (long *)0x0) {
          auVar29 = func_0x00f78af4();
          lVar9 = auVar29._0_8_;
          uVar11 = /*Core.Analytics.AnalyticsManager$$CreatePOSTRequest*/ func_0x01632e78(lVar9,*(undefined8 *)(lVar9 + 0x18),auVar29._8_8_,plVar18);
          /*Core.Analytics.AnalyticsManager$$SendEventBatch*/ func_0x01633008(lVar9,uVar11);
          return (long *)((long)&MACH_HEADER.magic + 1);
        }
        puVar6 = (undefined8 *)auStack_110;
        plVar16 = (long *)0x3eb5000;
        uVar11 = /*STR('] }')*/ uRam0000000003d76b40;
      }
      else {
        puVar6 = &uStack_70;
        uVar11 = /*STR('{ "events": [')*/ uRam0000000003d7cc48;
        plVar17 = plStack_88;
        plVar16 = plStack_90;
        param_3 = (long *)0x3eb5000;
        pppppppuVar27 = (undefined8 *******)ppppppuStack_80;
        puStack_118 = puStack_78;
      }
code_r0x029d2f8c:
      auVar30._8_8_ = uVar11;
      auVar30._0_8_ = plVar10;
      plVar18 = (long *)0x0;
      *(long **)((long)puVar6 + -0x20) = plVar16;
      *(long **)((long)puVar6 + -0x18) = plVar17;
      *(undefined8 ********)((long)puVar6 + -0x10) = pppppppuVar27;
      *(undefined **)((long)puVar6 + -8) = puStack_118;
      pppppppuVar27 = (undefined8 *******)((long)puVar6 + -0x10);
      puVar28 = &UNK_029d2fa0;
      puVar4 = (undefined1 *)((long)puVar6 + -0x20);
      break;
    }
    if (0 < *(int *)(lVar9 + 0x18))
    goto System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop;
    Core_Analytics_AnalyticsManager__FillCustomParamListPool(param_1,0x19);
  } while( true );
code_r0x029d2c70:
  plVar17 = auVar30._8_8_;
  plVar15 = auVar30._0_8_;
  *(long *)(puVar4 + -0x40) = unaff_x24;
  *(ulong *)(puVar4 + -0x38) = uVar24;
  *(ulong *)(puVar4 + -0x30) = uVar22;
  *(long **)(puVar4 + -0x28) = param_3;
  *(long **)(puVar4 + -0x20) = plVar16;
  *(long **)(puVar4 + -0x18) = plVar10;
  *(undefined8 ********)(puVar4 + -0x10) = pppppppuVar27;
  *(undefined **)(puVar4 + -8) = puVar28;
  if (plVar17 == (long *)0x0) {
    return plVar15;
  }
  uVar24 = plVar15[2];
  if (uVar24 == 0) {
    func_0x00f78af4();
    plVar17 = plVar16;
    plVar10 = param_3;
    uVar23 = uVar22;
code_r0x029d2d74:
    uVar11 = func_0x00f78b24();
    puVar28 = &System_Text_StringBuilder__AppendHelper;
    auVar30 = func_0x00f78ac0(uVar11,0);
    param_3 = plVar18;
    plVar16 = param_4;
  }
  else {
    uVar2 = *(uint *)(plVar15 + 4);
    unaff_x24 = (long)(int)uVar2;
    uVar1 = *(uint *)(plVar17 + 2);
    plVar10 = (long *)(ulong)uVar1;
    uVar19 = uVar1 + uVar2;
    uVar23 = (ulong)uVar19;
    if ((int)uVar19 < *(int *)(uVar24 + 0x18)) {
      if ((int)uVar1 < 3) {
        if ((int)uVar1 < 1) goto code_r0x029d2d54;
        plVar18 = (long *)0x0;
        uVar7 = /*System.String$$get_Chars*/ func_0x029c5420(plVar17,0);
        if (uVar2 < *(uint *)(uVar24 + 0x18)) {
          *(undefined2 *)(uVar24 + unaff_x24 * 2 + 0x20) = uVar7;
          if (uVar1 < 2) {
code_r0x029d2d54:
            *(uint *)(plVar15 + 4) = uVar19;
            return plVar15;
          }
          plVar18 = (long *)0x0;
          uVar7 = /*System.String$$get_Chars*/ func_0x029c5420(plVar17,1);
          if (uVar2 + 1 < *(uint *)(uVar24 + 0x18)) {
            *(undefined2 *)(uVar24 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar7;
            goto code_r0x029d2d54;
          }
        }
      }
      else {
        iVar8 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
        if (uVar2 < *(uint *)(uVar24 + 0x18)) {
          /*System.String$$wstrcpy*/ func_0x029cb054(uVar24 + unaff_x24 * 2 + 0x20,(long)plVar17 + (long)iVar8,plVar10,0);
          goto code_r0x029d2d54;
        }
      }
      goto code_r0x029d2d74;
    }
    puVar28 = &UNK_029d2cf4;
    param_3 = plVar18;
    plVar16 = param_4;
  }
  lVar9 = auVar30._8_8_;
  plVar18 = auVar30._0_8_;
  *(long **)(puVar4 + -0x60) = plVar17;
  *(long **)(puVar4 + -0x58) = plVar15;
  *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x48) = puVar28;
  if (lVar9 != 0) {
    iVar8 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
    lVar20 = lVar9 + iVar8;
    plVar16 = (long *)(ulong)*(uint *)(lVar9 + 0x10);
    puVar26 = *(undefined1 **)(puVar4 + -0x50);
    puVar28 = *(undefined **)(puVar4 + -0x48);
    puVar5 = puVar4 + -0x40;
    auVar31._8_8_ = uVar23;
    auVar31._0_8_ = *(undefined8 *)(puVar4 + -0x58);
    plVar17 = *(long **)(puVar4 + -0x60);
    param_3 = plVar10;
code_r0x029d2b54:
    uVar22 = auVar31._8_8_;
    *(long *)(puVar5 + -0x40) = unaff_x24;
    *(ulong *)(puVar5 + -0x38) = uVar24;
    *(ulong *)(puVar5 + -0x30) = uVar22;
    *(long **)(puVar5 + -0x28) = param_3;
    *(long **)(puVar5 + -0x20) = plVar17;
    *(long *)(puVar5 + -0x18) = auVar31._0_8_;
    *(undefined1 **)(puVar5 + -0x10) = puVar26;
    *(undefined **)(puVar5 + -8) = puVar28;
    pppppppuVar27 = (undefined8 *******)(puVar5 + -0x10);
    iVar8 = (int)plVar16;
    if (-1 < iVar8) {
      lVar9 = plVar18[2];
      if (lVar9 != 0) {
        iVar21 = (int)plVar18[4];
        uVar19 = iVar21 + iVar8;
        uVar22 = (ulong)uVar19;
        if ((int)uVar19 <= *(int *)(lVar9 + 0x18)) goto code_r0x029d2be8;
        uVar1 = *(int *)(lVar9 + 0x18) - iVar21;
        uVar24 = (ulong)uVar1;
        if (0 < (int)uVar1) {
          /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar20,lVar9,iVar21,uVar24);
          param_3 = plVar16;
          if (plVar18[2] == 0) goto code_r0x029d2c08;
          *(int *)(plVar18 + 4) = (int)*(undefined8 *)(plVar18[2] + 0x18);
        }
        uVar19 = iVar8 - uVar1;
        plVar16 = (long *)(ulong)uVar19;
        /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(plVar18,plVar16);
        lVar9 = plVar18[2];
        lVar20 = lVar20 + (long)(int)uVar1 * 2;
        iVar21 = 0;
code_r0x029d2be8:
        /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar20,lVar9,iVar21,plVar16);
        *(uint *)(plVar18 + 4) = uVar19;
        return plVar18;
      }
code_r0x029d2c08:
      func_0x00f78af4();
    }
    uVar11 = func_0x00f78a24(0x3d6b268);
    plVar10 = (long *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
    func_0x00f78a24(0x3d1fcf8);
    plVar16 = (long *)func_0x00f78aec();
    uVar11 = func_0x00f78a24(0x3d7c5c8);
    param_4 = (long *)0x0;
    plVar18 = plVar10;
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(plVar16,uVar11);
    uVar11 = func_0x00f78a24(0x3d5dbe8);
    puVar28 = &System_Text_StringBuilder__Append;
    auVar30 = func_0x00f78ac0(plVar16,uVar11);
    puVar4 = puVar5 + -0x40;
    goto code_r0x029d2c70;
  }
  auVar31 = func_0x00f78af4();
  uVar22 = auVar31._8_8_;
  plVar18 = auVar31._0_8_;
  puVar5 = puVar4 + -0xa0;
  *(long *)(puVar4 + -0xa0) = unaff_x24;
  *(ulong *)(puVar4 + -0x98) = uVar24;
  *(ulong *)(puVar4 + -0x90) = uVar23;
  *(long **)(puVar4 + -0x88) = plVar10;
  *(long **)(puVar4 + -0x80) = plVar17;
  *(long **)(puVar4 + -0x78) = plVar15;
  *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x50;
  *(undefined **)(puVar4 + -0x68) = &System_Text_StringBuilder__Append;
  puVar26 = puVar4 + -0x70;
  uVar24 = 0x3eb9000;
  param_4 = plVar16;
  if ((bRam0000000003eb948a & 1) == 0) {
    func_0x00f78a20(0x3d208b0);
    bRam0000000003eb948a = 1;
  }
  iVar8 = (int)param_3;
  if (iVar8 < 0) {
code_r0x029d2e7c:
    uVar11 = func_0x00f78a24(0x3d6de28);
    uVar12 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
    func_0x00f78a24(0x3d1fcf8);
    plVar16 = (long *)func_0x00f78aec();
    uVar11 = 0x3d7b9d0;
code_r0x029d2ee8:
    uVar11 = func_0x00f78a24(uVar11);
    param_4 = (long *)0x0;
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(plVar16,uVar11,uVar12);
    uVar11 = func_0x00f78a24(0x3d5dc00);
    func_0x00f78ac0(plVar16,uVar11);
  }
  else {
    iVar21 = (int)plVar16;
    if (iVar21 < 0) {
      uVar11 = func_0x00f78a24(0x3d75fa8);
      uVar12 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
      func_0x00f78a24(0x3d1fcf8);
      plVar16 = (long *)func_0x00f78aec();
      uVar11 = 0x3d78638;
      goto code_r0x029d2ee8;
    }
    if ((iVar21 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
      return plVar18;
    }
    if (uVar22 != 0) {
      if (iVar21 == 0) {
        return plVar18;
      }
      if (iVar8 <= *(int *)(uVar22 + 0x10) - iVar21) {
        iVar8 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
        lVar20 = uVar22 + ((ulong)param_3 & 0xffffffff) * 2 + (long)iVar8;
        puVar28 = &UNK_029d2e58;
        plVar17 = plVar16;
        goto code_r0x029d2b54;
      }
      goto code_r0x029d2e7c;
    }
    if (iVar8 == 0 && iVar21 == 0) {
      return plVar18;
    }
  }
  func_0x00f78a24(0x3d1fcf0);
  uVar11 = func_0x00f78aec();
  uVar12 = func_0x00f78a24(0x3d7c5a0);
  plVar18 = (long *)0x0;
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar11,uVar12);
  uVar12 = func_0x00f78a24(0x3d5dc00);
  uVar12 = func_0x00f78ac0(uVar11,uVar12);
  *(long **)(puVar4 + -0xc0) = plVar16;
  *(undefined8 *)(puVar4 + -0xb8) = uVar11;
  *(undefined1 **)(puVar4 + -0xb0) = puVar26;
  *(undefined **)(puVar4 + -0xa8) = &System_Text_StringBuilder__AppendLine;
  uVar11 = /*System.Environment$$get_NewLine*/ func_0x02aca040(0);
  auVar30._8_8_ = uVar11;
  auVar30._0_8_ = uVar12;
  pppppppuVar27 = *(undefined8 ********)(puVar4 + -0xb0);
  puVar28 = *(undefined **)(puVar4 + -0xa8);
  plVar16 = *(long **)(puVar4 + -0xc0);
  plVar10 = *(long **)(puVar4 + -0xb8);
  puVar4 = puVar4 + -0xa0;
  goto code_r0x029d2c70;
System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Pop:
  puVar3 = &stack0xffffffffffffffe0;
  iVar8 = *(int *)(lVar9 + 0x18);
  if (iVar8 == 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d40348 + 0x18) + 0xc0) + 0x30))
              (lVar9);
    iVar8 = *(int *)(lVar9 + 0x18);
  }
  lVar20 = *(long *)(lVar9 + 0x10);
  uVar19 = iVar8 - 1;
  *(uint *)(lVar9 + 0x18) = uVar19;
  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
  if (lVar20 == 0) {
    func_0x00f78af4();
  }
  else if (uVar19 < *(uint *)(lVar20 + 0x18)) {
    lVar20 = lVar20 + (long)(int)uVar19 * 8;
    plVar10 = *(long **)(lVar20 + 0x20);
    *(undefined8 *)(lVar20 + 0x20) = 0;
    return plVar10;
  }
  uVar11 = func_0x00f78b24();
  auVar29 = func_0x00f78ac0(uVar11,0);
  ppppppuVar25 = (undefined8 ******)&stack0xfffffffffffffff0;
  puVar28 = &System_Collections_Generic_Stack_DtdParser_ParseElementOnlyContent_LocalFrame___Push;
code_r0x02865908:
  uVar11 = auVar29._8_8_;
  lVar20 = auVar29._0_8_;
  *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
  *(long *)(puVar3 + -0x18) = lVar9;
  *(undefined8 *******)(puVar3 + -0x10) = ppppppuVar25;
  *(undefined **)(puVar3 + -8) = puVar28;
  plVar10 = (long *)(lVar20 + 0x10);
  lVar9 = *plVar10;
  if (lVar9 == 0) {
code_r0x0286596c:
    uVar11 = unaff_x20;
    plVar10 = (long *)func_0x00f78af4();
    lVar9 = extraout_x8;
    uVar19 = extraout_w9;
  }
  else {
    uVar19 = *(uint *)(lVar20 + 0x18);
    if (uVar19 == (uint)*(long *)(lVar9 + 0x18)) {
      iVar8 = 4;
      if (*(long *)(lVar9 + 0x18) != 0) {
        iVar8 = uVar19 << 1;
      }
      plVar10 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_3[3] + 0xc0) + 0x38))
                                  (plVar10,iVar8);
      lVar9 = *(long *)(lVar20 + 0x10);
      uVar19 = *(uint *)(lVar20 + 0x18);
      *(uint *)(lVar20 + 0x18) = uVar19 + 1;
      unaff_x20 = uVar11;
      if (lVar9 != 0) goto code_r0x02865978;
      goto code_r0x0286596c;
    }
  }
  *(uint *)(lVar20 + 0x18) = uVar19 + 1;
code_r0x02865978:
  if (uVar19 < *(uint *)(lVar9 + 0x18)) {
    *(undefined8 *)(lVar9 + (long)(int)uVar19 * 8 + 0x20) = uVar11;
    *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
    return plVar10;
  }
  uVar12 = func_0x00f78b24();
  func_0x00f78ac0(uVar12,0);
  *(undefined8 *)(puVar3 + -0x40) = uVar11;
  *(long *)(puVar3 + -0x38) = lVar20;
  *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x28) = &System_Collections_Generic_Stack_object___ThrowForEmptyStack;
  func_0x00f78a24(0x3d22a38);
  uVar12 = func_0x00f78aec();
  uVar13 = func_0x00f78a24(0x3d72ca8);
  lVar20 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,uVar13);
  uVar13 = func_0x00f78a24(0x3d40438);
  auVar29 = func_0x00f78ac0(uVar12,uVar13);
  lVar9 = auVar29._0_8_;
  *(undefined8 *)(puVar3 + -0x60) = uVar11;
  *(undefined8 *)(puVar3 + -0x58) = uVar12;
  *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x30;
  *(undefined **)(puVar3 + -0x48) =
       &System_Collections_Generic_Stack_SequenceNode_SequenceConstructPosContext____ctor;
  if (lVar9 != 0) {
    /*System.Object$$.ctor*/ func_0x0294d018(lVar9,0);
    plVar10 = (long *)(**(code **)**(undefined8 **)(*(long *)(auVar29._8_8_ + 0x18) + 0xc0))();
    *(long **)(lVar9 + 0x10) = plVar10;
    return plVar10;
  }
  auVar29 = func_0x00f78af4();
  lVar9 = auVar29._0_8_;
  *(undefined8 *)(puVar3 + -0x90) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x88) = unaff_x21;
  *(undefined8 *)(puVar3 + -0x80) = uVar11;
  *(undefined8 *)(puVar3 + -0x78) = uVar12;
  *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x50;
  *(undefined **)(puVar3 + -0x68) =
       &System_Collections_Generic_Stack_SequenceNode_SequenceConstructPosContext____ctor;
  if (lVar9 == 0) {
    func_0x00f78af4();
  }
  else {
    /*System.Object$$.ctor*/ func_0x0294d018(lVar9,0);
    uVar11 = auVar29._8_8_;
    if (-1 < auVar29._8_4_) {
      lVar20 = *(long *)(*(long *)(*(long *)(lVar20 + 0x18) + 0xc0) + 8);
      if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar20);
      }
      plVar10 = (long *)func_0x00f78a34(lVar20,auVar29._8_8_);
      *(long **)(lVar9 + 0x10) = plVar10;
      return plVar10;
    }
  }
  *(int *)(puVar3 + -0x94) = (int)uVar11;
  uVar11 = func_0x00f78a24(0x3d22910);
  uVar11 = func_0x00f78ae0(uVar11,puVar3 + -0x94);
  func_0x00f78a24(0x3d1fcf8);
  uVar12 = func_0x00f78aec();
  uVar13 = func_0x00f78a24(0x3d781d8);
  uVar14 = func_0x00f78a24(0x3d70548);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(uVar12,uVar13,uVar11,uVar14,0);
  uVar11 = func_0x00f78a24(0x3d40520);
  lVar9 = func_0x00f78ac0(uVar12,uVar11);
  return (long *)(ulong)*(uint *)(lVar9 + 0x18);
}



// ============================================================
// RVA: 0x1631874 | Core.Analytics.AnalyticsManager.ReturnPooledObjects
// ============================================================

/* WARNING: Possible PIC construction at 0x029d2f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01632d60) */
/* WARNING: Removing unreachable block (ram,0x01632d70) */
/* WARNING: Removing unreachable block (ram,0x01632d7c) */
/* WARNING: Removing unreachable block (ram,0x01632d8c) */
/* WARNING: Removing unreachable block (ram,0x01632d14) */
/* WARNING: Removing unreachable block (ram,0x01632d1c) */
/* WARNING: Removing unreachable block (ram,0x01632ce8) */
/* WARNING: Removing unreachable block (ram,0x01632d2c) */
/* WARNING: Removing unreachable block (ram,0x01632d30) */
/* WARNING: Removing unreachable block (ram,0x01632d3c) */
/* WARNING: Removing unreachable block (ram,0x01632d64) */
/* WARNING: Removing unreachable block (ram,0x01632d68) */
/* WARNING: Removing unreachable block (ram,0x01632d48) */
/* WARNING: Removing unreachable block (ram,0x01632d4c) */
/* WARNING: Removing unreachable block (ram,0x01632cf0) */
/* WARNING: Removing unreachable block (ram,0x01632cf4) */
/* WARNING: Removing unreachable block (ram,0x01632d08) */
/* WARNING: Removing unreachable block (ram,0x01632cc0) */
/* WARNING: Removing unreachable block (ram,0x01632cc8) */
/* WARNING: Removing unreachable block (ram,0x01632cdc) */
/* WARNING: Removing unreachable block (ram,0x01632c50) */
/* WARNING: Removing unreachable block (ram,0x01632c5c) */
/* WARNING: Removing unreachable block (ram,0x01632d90) */
/* WARNING: Removing unreachable block (ram,0x01632d98) */
/* WARNING: Removing unreachable block (ram,0x01632c68) */
/* WARNING: Removing unreachable block (ram,0x01632c84) */
/* WARNING: Removing unreachable block (ram,0x01632c90) */
/* WARNING: Removing unreachable block (ram,0x01632c98) */
/* WARNING: Removing unreachable block (ram,0x01632ca0) */
/* WARNING: Removing unreachable block (ram,0x01632c20) */
/* WARNING: Removing unreachable block (ram,0x01632c28) */
/* WARNING: Removing unreachable block (ram,0x01632c44) */
/* WARNING: Removing unreachable block (ram,0x01632bd0) */
/* WARNING: Removing unreachable block (ram,0x01632bd8) */
/* WARNING: Removing unreachable block (ram,0x01632bf4) */
/* WARNING: Removing unreachable block (ram,0x01632c0c) */
/* WARNING: Removing unreachable block (ram,0x01632ba4) */
/* WARNING: Removing unreachable block (ram,0x01632bac) */
/* WARNING: Removing unreachable block (ram,0x01632bc4) */
/* WARNING: Removing unreachable block (ram,0x01632b74) */
/* WARNING: Removing unreachable block (ram,0x01632b7c) */
/* WARNING: Removing unreachable block (ram,0x01632b90) */
/* WARNING: Removing unreachable block (ram,0x01632b40) */
/* WARNING: Removing unreachable block (ram,0x01632b48) */
/* WARNING: Removing unreachable block (ram,0x01632b64) */
/* WARNING: Removing unreachable block (ram,0x01632adc) */
/* WARNING: Removing unreachable block (ram,0x01632aec) */
/* WARNING: Removing unreachable block (ram,0x01632af4) */
/* WARNING: Removing unreachable block (ram,0x01632af8) */
/* WARNING: Removing unreachable block (ram,0x01632b14) */
/* WARNING: Removing unreachable block (ram,0x01632b2c) */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x029d2fa0) */
/* WARNING: Removing unreachable block (ram,0x01632dac) */
/* WARNING: Removing unreachable block (ram,0x01632db4) */

long * Core_Analytics_AnalyticsManager__ReturnPooledObjects
                 (long *param_1,long param_2,long ******param_3,long ******param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined2 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long ******pppppplVar15;
  long *plVar16;
  long ******pppppplVar17;
  long ******pppppplVar18;
  long lVar19;
  long extraout_x8;
  uint extraout_w9;
  uint uVar20;
  int iVar21;
  long ******unaff_x20;
  ulong unaff_x22;
  ulong uVar22;
  ulong unaff_x23;
  long unaff_x24;
  undefined1 *puVar23;
  long *******ppppppplVar24;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  long ******pppppplStack_60;
  undefined *puStack_58;
  long *plStack_50;
  long *****ppppplStack_48;
  long ******pppppplStack_40;
  undefined *puStack_38;
  
  pppppplVar15 = *(long *******)(param_2 + 0x18);
  if (pppppplVar15 == (long ******)0x0) {
    return param_1;
  }
  if ((bRam0000000003eb565e & 1) == 0) {
    func_0x00f78a20(0x3d3cc10);
    func_0x00f78a20(0x3d40350);
    bRam0000000003eb565e = 1;
  }
  if (pppppplVar15 != (long ******)0x0) {
    /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Clear*/ func_0x024a4f04(pppppplVar15,uRam0000000003d3cc10);
    lVar8 = param_1[5];
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0x10);
      lVar19 = *plVar9;
      if (lVar19 == 0) {
code_r0x0286596c:
        pppppplVar15 = unaff_x20;
        plVar9 = (long *)func_0x00f78af4();
        lVar19 = extraout_x8;
        uVar20 = extraout_w9;
      }
      else {
        uVar20 = *(uint *)(lVar8 + 0x18);
        if (uVar20 == (uint)*(long *)(lVar19 + 0x18)) {
          iVar7 = 4;
          if (*(long *)(lVar19 + 0x18) != 0) {
            iVar7 = uVar20 << 1;
          }
          plVar9 = (long *)(*(code *)**(undefined8 **)
                                       (*(long *)(*(long *)(lRam0000000003d40350 + 0x18) + 0xc0) +
                                       0x38))(plVar9,iVar7);
          lVar19 = *(long *)(lVar8 + 0x10);
          uVar20 = *(uint *)(lVar8 + 0x18);
          *(uint *)(lVar8 + 0x18) = uVar20 + 1;
          unaff_x20 = pppppplVar15;
          if (lVar19 != 0) goto code_r0x02865978;
          goto code_r0x0286596c;
        }
      }
      *(uint *)(lVar8 + 0x18) = uVar20 + 1;
code_r0x02865978:
      if (uVar20 < *(uint *)(lVar19 + 0x18)) {
        *(long *******)(lVar19 + (long)(int)uVar20 * 8 + 0x20) = pppppplVar15;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        return plVar9;
      }
      uVar10 = func_0x00f78b24();
      func_0x00f78ac0(uVar10,0);
      pppppplStack_40 = pppppplVar15;
      puStack_38 = (undefined *)lVar8;
      func_0x00f78a24(0x3d22a38);
      uVar10 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d72ca8);
      lVar19 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,uVar11);
      uVar11 = func_0x00f78a24(0x3d40438);
      auVar26 = func_0x00f78ac0(uVar10,uVar11);
      lVar8 = auVar26._0_8_;
      ppppplStack_48 =
           (long *****)
           &System_Collections_Generic_Stack_SequenceNode_SequenceConstructPosContext____ctor;
      pppppplStack_60 = pppppplVar15;
      puStack_58 = (undefined *)uVar10;
      plStack_50 = (long *)&stack0xffffffffffffffd0;
      if (lVar8 != 0) {
        /*System.Object$$.ctor*/ func_0x0294d018(lVar8,0);
        plVar9 = (long *)(**(code **)**(undefined8 **)(*(long *)(auVar26._8_8_ + 0x18) + 0xc0))();
        *(long **)(lVar8 + 0x10) = plVar9;
        return plVar9;
      }
      auVar26 = func_0x00f78af4();
      lVar8 = auVar26._0_8_;
      if (lVar8 == 0) {
        func_0x00f78af4();
      }
      else {
        /*System.Object$$.ctor*/ func_0x0294d018(lVar8,0);
        if (-1 < auVar26._8_4_) {
          lVar19 = *(long *)(*(long *)(*(long *)(lVar19 + 0x18) + 0xc0) + 8);
          if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar19);
          }
          plVar9 = (long *)func_0x00f78a34(lVar19,auVar26._8_8_);
          *(long **)(lVar8 + 0x10) = plVar9;
          return plVar9;
        }
      }
      uVar10 = func_0x00f78a24(0x3d22910);
      uVar10 = func_0x00f78ae0(uVar10,&stack0xffffffffffffff6c);
      func_0x00f78a24(0x3d1fcf8);
      uVar11 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d781d8);
      uVar13 = func_0x00f78a24(0x3d70548);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(uVar11,uVar12,uVar10,uVar13,0);
      uVar10 = func_0x00f78a24(0x3d40520);
      lVar8 = func_0x00f78ac0(uVar11,uVar10);
      return (long *)(ulong)*(uint *)(lVar8 + 0x18);
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_38 = &Core_Analytics_AnalyticsManager__StartEventBatch;
  plStack_50 = param_1;
  ppppplStack_48 = (long *****)pppppplVar15;
  pppppplStack_40 = (long ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb565f & 1) == 0) {
    func_0x00f78a20(0x3d7cc48);
    bRam0000000003eb565f = 1;
  }
  pppppplVar15 = *(long *******)(lVar8 + 0x20);
  if (pppppplVar15 == (long ******)0x0) {
    auVar26 = func_0x00f78af4();
    uStack_c8 = auVar26._8_8_;
    pppppplVar17 = auVar26._0_8_;
    puVar3 = auStack_d0;
    puVar5 = auStack_d0;
    puStack_58 = &Core_Analytics_AnalyticsManager__AddEventToBatch;
    ppppppplVar24 = &pppppplStack_60;
    plVar9 = (long *)0x3eb5000;
    pppppplVar18 = param_3;
    pppppplStack_60 = (long ******)&pppppplStack_40;
    if ((bRam0000000003eb5660 & 1) == 0) {
      func_0x00f78a20(0x3d21ce0);
      func_0x00f78a20(0x3d3cc20);
      func_0x00f78a20(0x3d3cc28);
      func_0x00f78a20(0x3d66538);
      func_0x00f78a20(0x3d7cc30);
      func_0x00f78a20(0x3d66570);
      func_0x00f78a20(0x3d66580);
      func_0x00f78a20(0x3d7d1e0);
      func_0x00f78a20(0x3d66568);
      func_0x00f78a20(0x3d66fd8);
      func_0x00f78a20(0x3d66578);
      func_0x00f78a20(0x3d66518);
      func_0x00f78a20(0x3d66548);
      func_0x00f78a20(0x3d66588);
      bRam0000000003eb5660 = 1;
    }
    if (((ulong)param_3 & 1) == 0) {
      pppppplVar15 = (long ******)pppppplVar17[4];
      if (pppppplVar15 != (long ******)0x0) {
        puStack_d8 = &UNK_01632a9c;
        uVar10 = /*STR(',')*/ uRam0000000003d66fd8;
        goto code_r0x029d2f8c;
      }
    }
    else {
      pppppplVar15 = pppppplVar17 + 4;
      pppppplVar17 = pppppplVar15;
      if (*pppppplVar15 != (long *****)0x0) {
        unaff_x22 = 0x3d7cc30;
        pppppplVar18 = (long ******)0x0;
        /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*pppppplVar15,/*STR('{')*/ uRam0000000003d7cc30,0);
        auVar26._8_8_ = /*STR('"event_id": "')*/ uRam0000000003d66570;
        auVar26._0_8_ = *pppppplVar15;
        if (*pppppplVar15 != (long *****)0x0) {
          plVar9 = (long *)0x3d21ce0;
          pppppplVar18 = (long ******)0x0;
          puVar25 = &UNK_01632adc;
          goto code_r0x029d2c70;
        }
      }
    }
    lVar8 = func_0x00f78af4();
    puStack_d8 = &Core_Analytics_AnalyticsManager__EndEventBatch;
    if ((bRam0000000003eb5661 & 1) == 0) {
      func_0x00f78a20(0x3d76b40);
      bRam0000000003eb5661 = 1;
    }
    pppppplVar15 = *(long *******)(lVar8 + 0x20);
    if (pppppplVar15 == (long ******)0x0) {
      auVar26 = func_0x00f78af4();
      lVar8 = auVar26._0_8_;
      uVar10 = /*Core.Analytics.AnalyticsManager$$CreatePOSTRequest*/ func_0x01632e78(lVar8,*(undefined8 *)(lVar8 + 0x18),auVar26._8_8_,pppppplVar18);
      /*Core.Analytics.AnalyticsManager$$SendEventBatch*/ func_0x01633008(lVar8,uVar10);
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
    puVar5 = auStack_d0;
    plVar9 = (long *)0x3eb5000;
    uVar10 = /*STR('] }')*/ uRam0000000003d76b40;
  }
  else {
    puVar5 = &stack0xffffffffffffffd0;
    uVar10 = /*STR('{ "events": [')*/ uRam0000000003d7cc48;
    pppppplVar17 = (long ******)ppppplStack_48;
    plVar9 = plStack_50;
    param_3 = (long ******)0x3eb5000;
    ppppppplVar24 = (long *******)pppppplStack_40;
    puStack_d8 = puStack_38;
  }
code_r0x029d2f8c:
  auVar26._8_8_ = uVar10;
  auVar26._0_8_ = pppppplVar15;
  pppppplVar18 = (long ******)0x0;
  *(long **)(puVar5 + -0x20) = plVar9;
  *(long *******)(puVar5 + -0x18) = pppppplVar17;
  *(long ********)(puVar5 + -0x10) = ppppppplVar24;
  *(undefined **)(puVar5 + -8) = puStack_d8;
  ppppppplVar24 = (long *******)(puVar5 + -0x10);
  puVar25 = &UNK_029d2fa0;
  puVar3 = puVar5 + -0x20;
code_r0x029d2c70:
  do {
    plVar16 = auVar26._8_8_;
    plVar14 = auVar26._0_8_;
    *(long *)(puVar3 + -0x40) = unaff_x24;
    *(ulong *)(puVar3 + -0x38) = unaff_x23;
    *(ulong *)(puVar3 + -0x30) = unaff_x22;
    *(long *******)(puVar3 + -0x28) = param_3;
    *(long **)(puVar3 + -0x20) = plVar9;
    *(long *******)(puVar3 + -0x18) = pppppplVar15;
    *(long ********)(puVar3 + -0x10) = ppppppplVar24;
    *(undefined **)(puVar3 + -8) = puVar25;
    if (plVar16 == (long *)0x0) {
      return plVar14;
    }
    unaff_x23 = plVar14[2];
    if (unaff_x23 == 0) {
      func_0x00f78af4();
      plVar16 = plVar9;
      pppppplVar15 = param_3;
      uVar22 = unaff_x22;
code_r0x029d2d74:
      uVar10 = func_0x00f78b24();
      puVar25 = &System_Text_StringBuilder__AppendHelper;
      auVar26 = func_0x00f78ac0(uVar10,0);
      param_3 = pppppplVar18;
      pppppplVar17 = param_4;
    }
    else {
      uVar2 = *(uint *)(plVar14 + 4);
      unaff_x24 = (long)(int)uVar2;
      uVar1 = *(uint *)(plVar16 + 2);
      pppppplVar15 = (long ******)(ulong)uVar1;
      uVar20 = uVar1 + uVar2;
      uVar22 = (ulong)uVar20;
      if ((int)uVar20 < *(int *)(unaff_x23 + 0x18)) {
        if ((int)uVar1 < 3) {
          if ((int)uVar1 < 1) goto code_r0x029d2d54;
          pppppplVar18 = (long ******)0x0;
          uVar6 = /*System.String$$get_Chars*/ func_0x029c5420(plVar16,0);
          if (uVar2 < *(uint *)(unaff_x23 + 0x18)) {
            *(undefined2 *)(unaff_x23 + unaff_x24 * 2 + 0x20) = uVar6;
            if (uVar1 < 2) {
code_r0x029d2d54:
              *(uint *)(plVar14 + 4) = uVar20;
              return plVar14;
            }
            pppppplVar18 = (long ******)0x0;
            uVar6 = /*System.String$$get_Chars*/ func_0x029c5420(plVar16,1);
            if (uVar2 + 1 < *(uint *)(unaff_x23 + 0x18)) {
              *(undefined2 *)(unaff_x23 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar6;
              goto code_r0x029d2d54;
            }
          }
        }
        else {
          iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          if (uVar2 < *(uint *)(unaff_x23 + 0x18)) {
            /*System.String$$wstrcpy*/ func_0x029cb054(unaff_x23 + unaff_x24 * 2 + 0x20,(long)plVar16 + (long)iVar7,
                            pppppplVar15,0);
            goto code_r0x029d2d54;
          }
        }
        goto code_r0x029d2d74;
      }
      puVar25 = &UNK_029d2cf4;
      param_3 = pppppplVar18;
      pppppplVar17 = param_4;
    }
    lVar8 = auVar26._8_8_;
    plVar9 = auVar26._0_8_;
    *(long **)(puVar3 + -0x60) = plVar16;
    *(long **)(puVar3 + -0x58) = plVar14;
    *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x48) = puVar25;
    if (lVar8 != 0) {
      iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
      lVar19 = lVar8 + iVar7;
      pppppplVar17 = (long ******)(ulong)*(uint *)(lVar8 + 0x10);
      puVar23 = *(undefined1 **)(puVar3 + -0x50);
      puVar25 = *(undefined **)(puVar3 + -0x48);
      puVar4 = puVar3 + -0x40;
      auVar27._8_8_ = uVar22;
      auVar27._0_8_ = *(undefined8 *)(puVar3 + -0x58);
      pppppplVar18 = *(long *******)(puVar3 + -0x60);
      param_3 = pppppplVar15;
code_r0x029d2b54:
      unaff_x22 = auVar27._8_8_;
      *(long *)(puVar4 + -0x40) = unaff_x24;
      *(ulong *)(puVar4 + -0x38) = unaff_x23;
      *(ulong *)(puVar4 + -0x30) = unaff_x22;
      *(long *******)(puVar4 + -0x28) = param_3;
      *(long *******)(puVar4 + -0x20) = pppppplVar18;
      *(long *)(puVar4 + -0x18) = auVar27._0_8_;
      *(undefined1 **)(puVar4 + -0x10) = puVar23;
      *(undefined **)(puVar4 + -8) = puVar25;
      ppppppplVar24 = (long *******)(puVar4 + -0x10);
      iVar7 = (int)pppppplVar17;
      if (-1 < iVar7) {
        lVar8 = plVar9[2];
        if (lVar8 != 0) {
          iVar21 = (int)plVar9[4];
          uVar20 = iVar21 + iVar7;
          unaff_x22 = (ulong)uVar20;
          if ((int)uVar20 <= *(int *)(lVar8 + 0x18)) goto code_r0x029d2be8;
          uVar1 = *(int *)(lVar8 + 0x18) - iVar21;
          unaff_x23 = (ulong)uVar1;
          if (0 < (int)uVar1) {
            /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar19,lVar8,iVar21,unaff_x23);
            param_3 = pppppplVar17;
            if (plVar9[2] == 0) goto code_r0x029d2c08;
            *(int *)(plVar9 + 4) = (int)*(undefined8 *)(plVar9[2] + 0x18);
          }
          uVar20 = iVar7 - uVar1;
          pppppplVar17 = (long ******)(ulong)uVar20;
          /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(plVar9,pppppplVar17);
          lVar8 = plVar9[2];
          lVar19 = lVar19 + (long)(int)uVar1 * 2;
          iVar21 = 0;
code_r0x029d2be8:
          /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar19,lVar8,iVar21,pppppplVar17);
          *(uint *)(plVar9 + 4) = uVar20;
          return plVar9;
        }
code_r0x029d2c08:
        func_0x00f78af4();
      }
      uVar10 = func_0x00f78a24(0x3d6b268);
      pppppplVar15 = (long ******)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar10,0);
      func_0x00f78a24(0x3d1fcf8);
      plVar9 = (long *)func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d7c5c8);
      param_4 = (long ******)0x0;
      pppppplVar18 = pppppplVar15;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(plVar9,uVar10);
      uVar10 = func_0x00f78a24(0x3d5dbe8);
      puVar25 = &System_Text_StringBuilder__Append;
      auVar26 = func_0x00f78ac0(plVar9,uVar10);
      puVar3 = puVar4 + -0x40;
      goto code_r0x029d2c70;
    }
    auVar27 = func_0x00f78af4();
    unaff_x22 = auVar27._8_8_;
    plVar9 = auVar27._0_8_;
    puVar4 = puVar3 + -0xa0;
    *(long *)(puVar3 + -0xa0) = unaff_x24;
    *(ulong *)(puVar3 + -0x98) = unaff_x23;
    *(ulong *)(puVar3 + -0x90) = uVar22;
    *(long *******)(puVar3 + -0x88) = pppppplVar15;
    *(long **)(puVar3 + -0x80) = plVar16;
    *(long **)(puVar3 + -0x78) = plVar14;
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x50;
    *(undefined **)(puVar3 + -0x68) = &System_Text_StringBuilder__Append;
    puVar23 = puVar3 + -0x70;
    unaff_x23 = 0x3eb9000;
    param_4 = pppppplVar17;
    if ((bRam0000000003eb948a & 1) == 0) {
      func_0x00f78a20(0x3d208b0);
      bRam0000000003eb948a = 1;
    }
    iVar7 = (int)param_3;
    if (iVar7 < 0) {
code_r0x029d2e7c:
      uVar10 = func_0x00f78a24(0x3d6de28);
      uVar11 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar10,0);
      func_0x00f78a24(0x3d1fcf8);
      pppppplVar17 = (long ******)func_0x00f78aec();
      uVar10 = 0x3d7b9d0;
code_r0x029d2ee8:
      uVar10 = func_0x00f78a24(uVar10);
      param_4 = (long ******)0x0;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(pppppplVar17,uVar10,uVar11);
      uVar10 = func_0x00f78a24(0x3d5dc00);
      func_0x00f78ac0(pppppplVar17,uVar10);
    }
    else {
      iVar21 = (int)pppppplVar17;
      if (iVar21 < 0) {
        uVar10 = func_0x00f78a24(0x3d75fa8);
        uVar11 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar10,0);
        func_0x00f78a24(0x3d1fcf8);
        pppppplVar17 = (long ******)func_0x00f78aec();
        uVar10 = 0x3d78638;
        goto code_r0x029d2ee8;
      }
      if ((iVar21 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
        return plVar9;
      }
      if (unaff_x22 != 0) {
        if (iVar21 == 0) {
          return plVar9;
        }
        if (iVar7 <= *(int *)(unaff_x22 + 0x10) - iVar21) {
          iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar19 = unaff_x22 + ((ulong)param_3 & 0xffffffff) * 2 + (long)iVar7;
          puVar25 = &UNK_029d2e58;
          pppppplVar18 = pppppplVar17;
          goto code_r0x029d2b54;
        }
        goto code_r0x029d2e7c;
      }
      if (iVar7 == 0 && iVar21 == 0) {
        return plVar9;
      }
    }
    func_0x00f78a24(0x3d1fcf0);
    uVar10 = func_0x00f78aec();
    uVar11 = func_0x00f78a24(0x3d7c5a0);
    pppppplVar18 = (long ******)0x0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar10,uVar11);
    uVar11 = func_0x00f78a24(0x3d5dc00);
    uVar11 = func_0x00f78ac0(uVar10,uVar11);
    *(long *******)(puVar3 + -0xc0) = pppppplVar17;
    *(undefined8 *)(puVar3 + -0xb8) = uVar10;
    *(undefined1 **)(puVar3 + -0xb0) = puVar23;
    *(undefined **)(puVar3 + -0xa8) = &System_Text_StringBuilder__AppendLine;
    uVar10 = /*System.Environment$$get_NewLine*/ func_0x02aca040(0);
    auVar26._8_8_ = uVar10;
    auVar26._0_8_ = uVar11;
    ppppppplVar24 = *(long ********)(puVar3 + -0xb0);
    puVar25 = *(undefined **)(puVar3 + -0xa8);
    plVar9 = *(long **)(puVar3 + -0xc0);
    pppppplVar15 = *(long *******)(puVar3 + -0xb8);
    puVar3 = puVar3 + -0xa0;
  } while( true );
}



// ============================================================
// RVA: 0x1631884 | Core.Analytics.AnalyticsManager.RequestSendNextBatchOfQueuedEvents
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01631558) */
/* WARNING: Removing unreachable block (ram,0x01631574) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Core_Analytics_AnalyticsManager__RequestSendNextBatchOfQueuedEvents(long param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  ulong unaff_x27;
  float fVar14;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_68;
  
  *(undefined1 *)(param_1 + 0x70) = 1;
  if ((bRam0000000003eb5664 & 1) == 0) {
    func_0x00f78a20(0x3d21af0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3cc68);
    func_0x00f78a20(0x3d3cc70);
    func_0x00f78a20(0x3d23370);
    bRam0000000003eb5664 = 1;
  }
  uStack_68 = (ulong)(uint)uStack_68;
  if (*(char *)(param_1 + 0x70) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    if ((*(int *)(*(long *)(param_1 + 0x38) + 0x18) < 1) ||
       (iVar3 = /*Core.Analytics.AnalyticsManager$$CanSendEventBatchNow*/ func_0x01631a44(param_1), iVar3 == 0)) goto LAB_01631534;
    if (*(long *)(param_1 + 0x88) != 0) {
      /*System.Diagnostics.Stopwatch$$Start*/ func_0x02f287fc(*(long *)(param_1 + 0x88),0);
      /*Core.Analytics.AnalyticsManager$$StartEventBatch*/ func_0x0163293c(param_1);
      lVar8 = *(long *)(param_1 + 0x38);
      if (lVar8 != 0) {
        unaff_x27 = 0;
        lVar12 = 0x20;
        do {
          if (99 < unaff_x27) goto LAB_01631274;
          if ((long)*(int *)(lVar8 + 0x18) <= (long)unaff_x27) goto LAB_01631274;
          if (*(long *)(param_1 + 0x20) == 0) break;
          iVar3 = /*System.Text.StringBuilder$$get_Length*/ func_0x029d2154(*(long *)(param_1 + 0x20),0);
          if (0x3ffff < iVar3) goto LAB_01631274;
          lVar8 = *(long *)(param_1 + 0x38);
          if (lVar8 == 0) break;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x27) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          puVar7 = (undefined8 *)(*(long *)(lVar8 + 0x10) + lVar12);
          uStack_88 = puVar7[1];
          uStack_90 = *puVar7;
          uStack_78 = puVar7[3];
          uStack_80 = puVar7[2];
          /*Core.Analytics.AnalyticsManager$$AddEventToBatch*/ func_0x01632994(param_1,&uStack_90,unaff_x27 == 0);
          unaff_x27 = unaff_x27 + 1;
          lVar8 = *(long *)(param_1 + 0x38);
          lVar12 = lVar12 + 0x20;
        } while (lVar8 != 0);
      }
    }
  }
LAB_01631270:
  do {
    do {
      do {
        func_0x00f78af4();
LAB_01631274:
        /*Core.Analytics.AnalyticsManager$$EndEventBatch*/ func_0x01632de4(param_1);
        plVar4 = *(long **)(param_1 + 0x20);
      } while (plVar4 == (long *)0x0);
      lVar8 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    } while (*(long *)(param_1 + 0x20) == 0);
    /*System.Text.StringBuilder$$Clear*/ func_0x029d2384(*(long *)(param_1 + 0x20),0);
    if (*(char *)(param_1 + 0x6e) == '\0') {
LAB_016314b8:
      plVar4 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
      if ((plVar4 == (long *)0x0) ||
         (lVar9 = (**(code **)(*plVar4 + 0x238))(plVar4,lVar8,*(undefined8 *)(*plVar4 + 0x240)),
         lVar9 == 0)) goto LAB_01631270;
      uVar13 = 0;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + *(int *)(lVar9 + 0x18);
      lVar12 = lVar9;
    }
    else {
      plVar4 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
      if ((lVar8 == 0) || (plVar4 == (long *)0x0)) goto LAB_01631270;
      uVar5 = (**(code **)(*plVar4 + 0x248))
                        (plVar4,lVar8,0,*(undefined4 *)(lVar8 + 0x10),
                         *(undefined8 *)(param_1 + 0x80),0,*(undefined8 *)(*plVar4 + 0x250));
      plVar4 = (long *)func_0x00f78aec(/*System.IO.MemoryStream_TypeInfo*/ uRam0000000003d23370);
      fVar14 = (float)(int)uVar5 * _UNK_033f83c8;
      fVar1 = -fVar14;
      if (fVar14 != INFINITY) {
        fVar1 = fVar14;
      }
      /*System.IO.MemoryStream$$.ctor*/ func_0x02b043f0(plVar4,(int)fVar1,0);
      plVar6 = (long *)func_0x00f78aec(/*System.IO.Compression.GZipStream_TypeInfo*/ uRam0000000003d21af0);
      /*System.IO.Compression.GZipStream$$.ctor*/ func_0x02ed1970(plVar6,plVar4,0,0);
      if (plVar6 == (long *)0x0) {
        func_0x00f78af4();
code_r0x01631580:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1631584);
        (*pcVar2)();
      }
      (**(code **)(*plVar6 + 0x308))
                (plVar6,*(undefined8 *)(param_1 + 0x80),0,uVar5,*(undefined8 *)(*plVar6 + 0x310));
      (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
      if (plVar4 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x01631580;
      }
      lVar12 = (**(code **)(*plVar4 + 0x358))(plVar4,*(undefined8 *)(*plVar4 + 0x360));
      uStack_68 = _UNK_03403bc8;
      uVar13 = 1;
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0163140c;
          }
          piVar11 = piVar11 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
LAB_0163140c:
      lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar4 != (long *)0x0) {
        lVar9 = *plVar4;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x01631478;
            }
            piVar11 = piVar11 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01631478:
        lVar9 = (*(code *)*puVar7)(plVar4,puVar7[1]);
      }
      if ((uint)uStack_68 != 299) goto LAB_016314b8;
      uStack_68 = uStack_68 & 0xffffffff;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (int)uVar5;
      if (lVar12 == 0) goto LAB_01631270;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + *(int *)(lVar12 + 0x18);
    *(int *)(param_1 + 0x58) = (int)unaff_x27;
    uVar5 = /*Core.Analytics.AnalyticsManager$$CreatePOSTRequest*/ func_0x01632e78(lVar9,*(undefined8 *)(param_1 + 0x18),lVar12,uVar13);
    /*Core.Analytics.AnalyticsManager$$SendEventBatch*/ func_0x01633008(param_1,uVar5);
  } while (*(long *)(param_1 + 0x88) == 0);
  /*System.Diagnostics.Stopwatch$$Stop*/ func_0x02f28870(*(long *)(param_1 + 0x88),0);
LAB_01631534:
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}



// ============================================================
// RVA: 0x1631890 | Core.Analytics.AnalyticsManager.ClearData
// ============================================================

/* WARNING: Possible PIC construction at 0x01631988: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163198c) */

void Core_Analytics_AnalyticsManager__ClearData(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  int extraout_w1;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *unaff_x21;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar5 = (undefined8 *)0x3eb5000;
  if ((bRam0000000003eb5656 & 1) == 0) {
    func_0x00f78a20(0x3d33270);
    func_0x00f78a20(0x3d33278);
    func_0x00f78a20(0x3d33280);
    func_0x00f78a20(0x3d3cc40);
    func_0x00f78a20(0x3d3cc48);
    bRam0000000003eb5656 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_016319a0;
  unaff_x21 = (undefined8 *)0x3d3cc40;
  puVar5 = (undefined8 *)0x3d33270;
  /*System.Collections.Generic.List<AnalyticsManager.Event>$$GetEnumerator*/ func_0x024a8410(&uStack_60,*(long *)(param_1 + 0x38),uRam0000000003d3cc48);
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<AnalyticsManager.Event>$$MoveNext*/ func_0x01f78750(&uStack_60,uRam0000000003d33278), (uVar3 & 1) != 0) {
    if (lStack_38 != 0) {
      /*Core.Analytics.AnalyticsManager$$ReturnCustomParmListToPool*/ func_0x016328b4(param_1);
    }
  }
  /*System.Collections.Generic.List.Enumerator<AnalyticsManager.Event>$$Dispose*/ func_0x01f7874c(&uStack_60,uRam0000000003d33270);
  do {
    if (*(long *)(param_1 + 0x38) != 0) {
      /*System.Collections.Generic.List<AnalyticsManager.Event>$$Clear*/ func_0x024a7bbc(*(long *)(param_1 + 0x38),*unaff_x21);
      if (*(long *)(param_1 + 0x20) != 0) {
        /*System.Text.StringBuilder$$Clear*/ func_0x029d2384(*(long *)(param_1 + 0x20),0);
        goto code_r0x016319e0;
      }
    }
LAB_016319a0:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x016319dc;
    plVar4 = (long *)___cxa_begin_catch();
    lVar6 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<AnalyticsManager.Event>$$Dispose*/ func_0x01f7874c(&uStack_60,*puVar5);
    puVar5 = (undefined8 *)0x0;
  } while (lVar6 == 0);
  func_0x00f78ac0(lVar6,0);
code_r0x016319dc:
  __Unwind_Resume();
code_r0x016319e0:
  if ((bRam0000000003eb565a & 1) == 0) {
    func_0x00f78a20(0x3d688e0);
    bRam0000000003eb565a = 1;
  }
  iVar2 = /*UnityEngine.PlayerPrefs$$HasKey*/ func_0x03250afc(/*STR('AM_SAVE')*/ uRam0000000003d688e0,0);
  uVar1 = /*STR('AM_SAVE')*/ uRam0000000003d688e0;
  if (iVar2 != 0) {
    if (pcRam0000000003ec0550 == (code *)0x0) {
      pcRam0000000003ec0550 =
           (code *)func_0x00f789d4("UnityEngine.PlayerPrefs::DeleteKey(System.String)");
    }
                    /* WARNING: Could not recover jumptable at 0x03250b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec0550)(uVar1);
    return;
  }
  return;
}



// ============================================================
// RVA: 0x16319e0 | Core.Analytics.AnalyticsManager.ClearSavedQueuedEvents
// ============================================================

void Core_Analytics_AnalyticsManager__ClearSavedQueuedEvents(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam0000000003eb565a & 1) == 0) {
    func_0x00f78a20(0x3d688e0);
    bRam0000000003eb565a = 1;
  }
  iVar2 = /*UnityEngine.PlayerPrefs$$HasKey*/ func_0x03250afc(/*STR('AM_SAVE')*/ uRam0000000003d688e0,0);
  uVar1 = /*STR('AM_SAVE')*/ uRam0000000003d688e0;
  if (iVar2 != 0) {
    if (pcRam0000000003ec0550 == (code *)0x0) {
      pcRam0000000003ec0550 =
           (code *)func_0x00f789d4("UnityEngine.PlayerPrefs::DeleteKey(System.String)");
    }
                    /* WARNING: Could not recover jumptable at 0x03250b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec0550)(uVar1);
    return;
  }
  return;
}



// ============================================================
// RVA: 0x1631a44 | Core.Analytics.AnalyticsManager.CanSendEventBatchNow
// ============================================================

undefined8 Core_Analytics_AnalyticsManager__CanSendEventBatchNow(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb5657 & 1) == 0) {
    func_0x00f78a20(0x3d1fb70);
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb5657 = 1;
  }
  if ((*(char *)(param_1 + 0x6d) != '\0') && (*(long *)(param_1 + 0x50) == 0)) {
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*System.DateTime$$get_UtcNow*/ func_0x02a8e4d4(0);
    uVar2 = /*System.DateTime$$op_Subtraction*/ func_0x02a8fad4(uVar2,*(undefined8 *)(param_1 + 0x48),0);
    if (((*(ushort *)(/*Core.Analytics.AnalyticsManager_TypeInfo*/ lRam0000000003d1fb70 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Analytics.AnalyticsManager_TypeInfo*/ lRam0000000003d1fb70 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = **(undefined8 **)(/*Core.Analytics.AnalyticsManager_TypeInfo*/ lRam0000000003d1fb70 + 0xb8);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*System.TimeSpan$$op_GreaterThanOrEqual*/ func_0x029f1240(uVar2,uVar3,0);
    if ((iVar1 != 0) && (iVar1 = /*UnityEngine.Application$$get_internetReachability*/ func_0x032189f8(0), iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x1631b58 | Core.Analytics.AnalyticsManager.SaveQueuedEvents
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01632104) */
/* WARNING: Removing unreachable block (ram,0x016320cc) */
/* WARNING: Removing unreachable block (ram,0x0163211c) */

void Core_Analytics_AnalyticsManager__SaveQueuedEvents(long param_1)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  undefined8 unaff_x20;
  int iVar12;
  int iVar13;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  int aiStack_e0 [4];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  
  if ((bRam0000000003eb5658 & 1) == 0) {
    func_0x00f78a20(0x3d20158);
    func_0x00f78a20(0x3d20a60);
    func_0x00f78a20(0x3d33270);
    func_0x00f78a20(0x3d33258);
    func_0x00f78a20(0x3d33260);
    func_0x00f78a20(0x3d33278);
    func_0x00f78a20(0x3d33280);
    func_0x00f78a20(0x3d33268);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3cc48);
    func_0x00f78a20(0x3d3cc18);
    func_0x00f78a20(0x3d3cc20);
    func_0x00f78a20(0x3d3cc68);
    func_0x00f78a20(0x3d23370);
    func_0x00f78a20(0x3d688e0);
    bRam0000000003eb5658 = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  aiStack_e0[3] = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
    func_0x00f78af4();
    func_0x00f78ac0(unaff_x20,0);
  }
  else {
    if (*(int *)(*(long *)(param_1 + 0x38) + 0x18) == 0) {
      return;
    }
    plVar4 = (long *)func_0x00f78aec(/*System.IO.MemoryStream_TypeInfo*/ uRam0000000003d23370);
    /*System.IO.MemoryStream$$.ctor*/ func_0x02b043e8(plVar4,0);
    plVar5 = (long *)func_0x00f78aec(/*System.IO.BinaryWriter_TypeInfo*/ uRam0000000003d20158);
    /*System.IO.BinaryWriter$$.ctor*/ func_0x0293e100(plVar5,plVar4,0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x238))(plVar5,1,*(undefined8 *)(*plVar5 + 0x240));
      if (*(long *)(param_1 + 0x38) == 0) {
        func_0x00f78af4();
      }
      else {
        (**(code **)(*plVar5 + 0x238))
                  (plVar5,*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x18),
                   *(undefined8 *)(*plVar5 + 0x240));
        if (*(long *)(param_1 + 0x38) == 0) {
          func_0x00f78af4();
        }
        else {
          /*System.Collections.Generic.List<AnalyticsManager.Event>$$GetEnumerator*/ func_0x024a8410(&uStack_110,*(long *)(param_1 + 0x38),uRam0000000003d3cc48);
          uStack_98 = uStack_108;
          uStack_a0 = uStack_110;
          uStack_88 = uStack_f8;
          uStack_90 = uStack_100;
          lStack_78 = lStack_e8;
          lStack_80 = lStack_f0;
          iVar13 = 0;
          iVar2 = aiStack_e0[3];
          while (aiStack_e0[3] = iVar2, iVar12 = iVar13,
                uVar6 = /*System.Collections.Generic.List.Enumerator<AnalyticsManager.Event>$$MoveNext*/ func_0x01f78750(&uStack_a0,uRam0000000003d33278), lVar1 = lStack_78,
                lVar10 = lStack_80, uVar7 = uStack_88, (uVar6 & 1) != 0) {
            (**(code **)(*plVar5 + 0x288))(plVar5,uStack_90,*(undefined8 *)(*plVar5 + 0x290));
            (**(code **)(*plVar5 + 0x288))(plVar5,uVar7,*(undefined8 *)(*plVar5 + 0x290));
            (**(code **)(*plVar5 + 600))(plVar5,lVar10,*(undefined8 *)(*plVar5 + 0x260));
            if (lVar1 == 0) goto LAB_01631ec4;
            (**(code **)(*plVar5 + 0x238))
                      (plVar5,*(undefined4 *)(lVar1 + 0x18),*(undefined8 *)(*plVar5 + 0x240));
            /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$GetEnumerator*/ func_0x024a5798(&uStack_110,lVar1,uRam0000000003d3cc18);
            uStack_c8 = uStack_108;
            uStack_d0 = uStack_110;
            uStack_b8 = uStack_f8;
            uStack_c0 = uStack_100;
            lStack_b0 = lStack_f0;
            while (uVar7 = /*System.Collections.Generic.List.Enumerator<AnalyticsManager.CustomParams>$$MoveNext*/ func_0x01f784ec(&uStack_d0,uRam0000000003d33260), lVar10 = lStack_b0,
                  (uVar7 & 1) != 0) {
              uVar7 = uStack_b8 & 0xffffffff;
              (**(code **)(*plVar5 + 0x288))(plVar5,uStack_c0,*(undefined8 *)(*plVar5 + 0x290));
              pcVar3 = *(code **)(*plVar5 + 0x1b8);
              if (lVar10 == 0) {
                (*pcVar3)(plVar5,0,*(undefined8 *)(*plVar5 + 0x1c0));
                (**(code **)(*plVar5 + 0x238))(plVar5,uVar7,*(undefined8 *)(*plVar5 + 0x240));
              }
              else {
                (*pcVar3)(plVar5,1);
                (**(code **)(*plVar5 + 0x288))(plVar5,lVar10,*(undefined8 *)(*plVar5 + 0x290));
              }
            }
            aiStack_e0[iVar12] = 0x10b;
            iVar13 = aiStack_e0[3];
            iVar12 = aiStack_e0[3] + 1;
            aiStack_e0[3] = iVar12;
            /*System.Collections.Generic.List.Enumerator<AnalyticsManager.CustomParams>$$Dispose*/ func_0x01f784e8(&uStack_d0,uRam0000000003d33258);
            if (iVar12 == 0) {
              iVar12 = 0;
              goto LAB_01631ec4;
            }
            iVar2 = iVar13;
            if (aiStack_e0[iVar13] != 0x10b) {
LAB_01631ec4:
              (**(code **)(*plVar5 + 0x238))(plVar5,0,*(undefined8 *)(*plVar5 + 0x240));
              iVar13 = iVar12;
              iVar2 = aiStack_e0[3];
            }
          }
          aiStack_e0[iVar12] = 0x131;
          iVar2 = aiStack_e0[3];
          iVar13 = aiStack_e0[3] + 1;
          aiStack_e0[3] = iVar13;
          /*System.Collections.Generic.List.Enumerator<AnalyticsManager.Event>$$Dispose*/ func_0x01f7874c(&uStack_a0,uRam0000000003d33270);
          if (plVar5 != (long *)0x0) {
            lVar10 = *plVar5;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar7 != 0) {
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                  goto code_r0x01631f9c;
                }
                piVar11 = piVar11 + 4;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01631f9c:
            (*(code *)*puVar8)(plVar5,puVar8[1]);
          }
          if ((iVar13 != 0) && (aiStack_e0[iVar2] == 0x131)) {
            iVar13 = iVar2;
            aiStack_e0[3] = iVar2;
          }
          if (plVar4 != (long *)0x0) {
            uVar9 = (**(code **)(*plVar4 + 0x358))(plVar4,*(undefined8 *)(*plVar4 + 0x360));
            if (((*(ushort *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar9 = /*System.Convert$$ToBase64String*/ func_0x02a49120(uVar9,0);
            /*UnityEngine.PlayerPrefs$$SetString*/ func_0x03250998(/*STR('AM_SAVE')*/ uRam0000000003d688e0,uVar9,0);
            /*UnityEngine.PlayerPrefs$$Save*/ func_0x03250bb0(0);
            aiStack_e0[iVar13] = 0x159;
            aiStack_e0[3] = aiStack_e0[3] + 1;
            lVar10 = *plVar4;
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar7 != 0) {
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                  goto code_r0x0163209c;
                }
                piVar11 = piVar11 + 4;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0163209c:
            (*(code *)*puVar8)(plVar4,puVar8[1]);
            return;
          }
          func_0x00f78af4();
        }
      }
      goto code_r0x01632128;
    }
  }
  func_0x00f78af4();
code_r0x01632128:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x163212c);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x16321f8 | Core.Analytics.AnalyticsManager.LoadAndClearSavedQueuedEvents
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01632638) */
/* WARNING: Removing unreachable block (ram,0x01632554) */
/* WARNING: Removing unreachable block (ram,0x01632648) */

void Core_Analytics_AnalyticsManager__LoadAndClearSavedQueuedEvents(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  int aiStack_98 [4];
  int iStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((bRam0000000003eb5659 & 1) == 0) {
    func_0x00f78a20(0x3d20148);
    func_0x00f78a20(0x3d20a60);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3cc38);
    func_0x00f78a20(0x3d3cc00);
    func_0x00f78a20(0x3d23370);
    func_0x00f78a20(0x3d688e0);
    bRam0000000003eb5659 = 1;
  }
  iStack_88 = 0;
  iVar3 = /*UnityEngine.PlayerPrefs$$HasKey*/ func_0x03250afc(/*STR('AM_SAVE')*/ uRam0000000003d688e0,0);
  if (iVar3 != 0) {
    uVar7 = /*UnityEngine.PlayerPrefs$$GetString*/ func_0x03250a34(/*STR('AM_SAVE')*/ uRam0000000003d688e0,0,0);
    uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar7,0);
    if ((uVar8 & 1) == 0) {
      /*UnityEngine.PlayerPrefs$$DeleteKey*/ func_0x03250b3c(/*STR('AM_SAVE')*/ uRam0000000003d688e0,0);
      /*UnityEngine.PlayerPrefs$$Save*/ func_0x03250bb0(0);
      if (((*(ushort *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Convert_TypeInfo*/ lRam0000000003d20a60 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*System.Convert$$FromBase64String*/ func_0x02a35018(uVar7,0);
      plVar9 = (long *)func_0x00f78aec(/*System.IO.MemoryStream_TypeInfo*/ uRam0000000003d23370);
      /*System.IO.MemoryStream$$.ctor*/ func_0x02b044fc(plVar9,uVar7,0);
      plVar10 = (long *)func_0x00f78aec(/*System.IO.BinaryReader_TypeInfo*/ uRam0000000003d20148);
      /*System.IO.BinaryReader$$.ctor*/ func_0x0293c5f0(plVar10,plVar9,0);
      if (plVar10 == (long *)0x0) {
        func_0x00f78af4();
code_r0x01632780:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1632784);
        (*pcVar2)();
      }
      (**(code **)(*plVar10 + 0x228))(plVar10,*(undefined8 *)(*plVar10 + 0x230));
      iVar3 = (**(code **)(*plVar10 + 0x228))(plVar10,*(undefined8 *)(*plVar10 + 0x230));
      if (0 < iVar3) {
        iVar18 = 0;
        do {
          uVar7 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
          uVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
          uVar11 = (**(code **)(*plVar10 + 0x248))(plVar10,*(undefined8 *)(*plVar10 + 0x250));
          iVar4 = (**(code **)(*plVar10 + 0x228))(plVar10,*(undefined8 *)(*plVar10 + 0x230));
          if (iVar4 < 1) {
            lVar12 = 0;
          }
          else {
            lVar12 = Core_Analytics_AnalyticsManager__GetCustomParmListFromPool(param_1);
            do {
              uVar13 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
              iVar5 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
              lVar16 = *plVar10;
              if (iVar5 == 0) {
                uVar6 = (**(code **)(lVar16 + 0x228))(plVar10,*(undefined8 *)(lVar16 + 0x230));
                uVar14 = 0;
                uVar1 = uStack_70;
              }
              else {
                uVar14 = (**(code **)(lVar16 + 0x298))(plVar10,*(undefined8 *)(lVar16 + 0x2a0));
                uVar6 = 0;
                uVar1 = uStack_70;
              }
              uStack_70 = uVar14;
              if (lVar12 == 0) {
                uStack_70 = uVar1;
                func_0x00f78af4();
                goto code_r0x01632780;
              }
              uStack_78 = (ulong)uVar6;
              uStack_80 = uVar13;
              /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Add*/ func_0x024a4bcc(lVar12,&uStack_80,uRam0000000003d3cc00);
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          if (*(long *)(param_1 + 0x38) == 0) {
            func_0x00f78af4();
            goto code_r0x01632780;
          }
          uStack_80 = uVar7;
          uStack_78 = uVar8;
          uStack_70 = uVar11;
          lStack_68 = lVar12;
          /*System.Collections.Generic.List<AnalyticsManager.Event>$$Add*/ func_0x024a78a4(*(long *)(param_1 + 0x38),&uStack_80,uRam0000000003d3cc38);
          iVar18 = iVar18 + 1;
        } while (iVar18 != iVar3);
      }
      aiStack_98[0] = 0x135;
      iStack_88 = 1;
      if (plVar10 != (long *)0x0) {
        lVar12 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar15 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x01632540;
            }
            piVar17 = piVar17 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar15 = (undefined8 *)func_0x00fac1f0(plVar10,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01632540:
        (*(code *)*puVar15)(plVar10,puVar15[1]);
      }
      if (aiStack_98[0] == 0x135) {
        iStack_88 = 0;
      }
      aiStack_98[(int)(uint)(aiStack_98[0] != 0x135)] = 0x141;
      iStack_88 = iStack_88 + 1;
      if (plVar9 != (long *)0x0) {
        lVar12 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar15 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
              goto code_r0x016325f0;
            }
            piVar17 = piVar17 + 4;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        puVar15 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x016325f0:
        (*(code *)*puVar15)(plVar9,puVar15[1]);
      }
    }
  }
  return;
}



// ============================================================
// RVA: 0x16327a0 | Core.Analytics.AnalyticsManager.TryGetQueuedOrHistoryEvent
// ============================================================

/* WARNING: Possible PIC construction at 0x029d2f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01632d60) */
/* WARNING: Removing unreachable block (ram,0x01632d70) */
/* WARNING: Removing unreachable block (ram,0x01632d7c) */
/* WARNING: Removing unreachable block (ram,0x01632d8c) */
/* WARNING: Removing unreachable block (ram,0x01632d14) */
/* WARNING: Removing unreachable block (ram,0x01632d1c) */
/* WARNING: Removing unreachable block (ram,0x01632ce8) */
/* WARNING: Removing unreachable block (ram,0x01632d2c) */
/* WARNING: Removing unreachable block (ram,0x01632d30) */
/* WARNING: Removing unreachable block (ram,0x01632d3c) */
/* WARNING: Removing unreachable block (ram,0x01632d64) */
/* WARNING: Removing unreachable block (ram,0x01632d68) */
/* WARNING: Removing unreachable block (ram,0x01632d48) */
/* WARNING: Removing unreachable block (ram,0x01632d4c) */
/* WARNING: Removing unreachable block (ram,0x01632cf0) */
/* WARNING: Removing unreachable block (ram,0x01632cf4) */
/* WARNING: Removing unreachable block (ram,0x01632d08) */
/* WARNING: Removing unreachable block (ram,0x01632cc0) */
/* WARNING: Removing unreachable block (ram,0x01632cc8) */
/* WARNING: Removing unreachable block (ram,0x01632cdc) */
/* WARNING: Removing unreachable block (ram,0x01632c50) */
/* WARNING: Removing unreachable block (ram,0x01632c5c) */
/* WARNING: Removing unreachable block (ram,0x01632d90) */
/* WARNING: Removing unreachable block (ram,0x01632d98) */
/* WARNING: Removing unreachable block (ram,0x01632c68) */
/* WARNING: Removing unreachable block (ram,0x01632c84) */
/* WARNING: Removing unreachable block (ram,0x01632c90) */
/* WARNING: Removing unreachable block (ram,0x01632c98) */
/* WARNING: Removing unreachable block (ram,0x01632ca0) */
/* WARNING: Removing unreachable block (ram,0x01632c20) */
/* WARNING: Removing unreachable block (ram,0x01632c28) */
/* WARNING: Removing unreachable block (ram,0x01632c44) */
/* WARNING: Removing unreachable block (ram,0x01632bd0) */
/* WARNING: Removing unreachable block (ram,0x01632bd8) */
/* WARNING: Removing unreachable block (ram,0x01632bf4) */
/* WARNING: Removing unreachable block (ram,0x01632c0c) */
/* WARNING: Removing unreachable block (ram,0x01632ba4) */
/* WARNING: Removing unreachable block (ram,0x01632bac) */
/* WARNING: Removing unreachable block (ram,0x01632bc4) */
/* WARNING: Removing unreachable block (ram,0x01632b74) */
/* WARNING: Removing unreachable block (ram,0x01632b7c) */
/* WARNING: Removing unreachable block (ram,0x01632b90) */
/* WARNING: Removing unreachable block (ram,0x01632b40) */
/* WARNING: Removing unreachable block (ram,0x01632b48) */
/* WARNING: Removing unreachable block (ram,0x01632b64) */
/* WARNING: Removing unreachable block (ram,0x01632adc) */
/* WARNING: Removing unreachable block (ram,0x01632aec) */
/* WARNING: Removing unreachable block (ram,0x01632af4) */
/* WARNING: Removing unreachable block (ram,0x01632af8) */
/* WARNING: Removing unreachable block (ram,0x01632b14) */
/* WARNING: Removing unreachable block (ram,0x01632b2c) */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x029d2fa0) */
/* WARNING: Removing unreachable block (ram,0x01632dac) */
/* WARNING: Removing unreachable block (ram,0x01632db4) */

long * Core_Analytics_AnalyticsManager__TryGetQueuedOrHistoryEvent
                 (long param_1,long *****param_2,long ******param_3,long ******param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long ******pppppplVar5;
  undefined2 uVar6;
  int iVar7;
  long *plVar8;
  long ******pppppplVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long ******pppppplVar15;
  long ******pppppplVar16;
  long ******pppppplVar17;
  long ******pppppplVar18;
  undefined1 uVar19;
  long lVar20;
  long extraout_x8;
  uint extraout_w9;
  int iVar21;
  long lVar22;
  uint uVar23;
  long *****ppppplVar24;
  ulong uVar25;
  long unaff_x24;
  undefined1 *puVar26;
  long *******ppppppplVar27;
  undefined *puVar28;
  long *****ppppplVar29;
  long *****ppppplVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  long ******pppppplStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [16];
  long ******pppppplStack_80;
  undefined *puStack_78;
  long *****ppppplStack_70;
  undefined *puStack_68;
  long *****ppppplStack_60;
  long *****ppppplStack_58;
  long *****ppppplStack_50;
  undefined *puStack_48;
  
  pppppplVar15 = param_3;
  pppppplVar18 = param_4;
  if ((bRam0000000003eb565b & 1) == 0) {
    func_0x00f78a20(0x3d3cc68);
    func_0x00f78a20(0x3d3cc70);
    bRam0000000003eb565b = 1;
  }
  uVar25 = *(ulong *)(param_1 + 0x38);
  uVar23 = (uint)param_2;
  if ((int)uVar23 < 0) {
    if (uVar25 != 0) {
LAB_0163283c:
      uVar23 = uVar23 - *(int *)(uVar25 + 0x18);
      param_2 = (long *****)(ulong)uVar23;
      if (-1 < (int)uVar23) {
        lVar22 = *(long *)(param_1 + 0x40);
        param_1 = 0;
        if (lVar22 == 0) goto LAB_016328b0;
        if ((int)uVar23 < (int)*(uint *)(lVar22 + 0x18)) {
          if (*(uint *)(lVar22 + 0x18) <= uVar23) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar22 = *(long *)(lVar22 + 0x10) + (long)param_2 * 0x20;
          ppppplVar24 = *(long ******)(lVar22 + 0x20);
          ppppplVar30 = *(long ******)(lVar22 + 0x38);
          ppppplVar29 = *(long ******)(lVar22 + 0x30);
          param_3[1] = *(long ******)(lVar22 + 0x28);
          *param_3 = ppppplVar24;
          param_3[3] = ppppplVar30;
          param_3[2] = ppppplVar29;
          uVar19 = 1;
          goto LAB_01632880;
        }
      }
      uVar19 = 0;
      plVar8 = (long *)0x0;
      param_3[1] = (long *****)0x0;
      *param_3 = (long *****)0x0;
      param_3[3] = (long *****)0x0;
      param_3[2] = (long *****)0x0;
code_r0x01632898:
      *(undefined1 *)param_4 = uVar19;
      return plVar8;
    }
  }
  else if (uVar25 != 0) {
    uVar1 = *(uint *)(uVar25 + 0x18);
    if ((int)uVar1 <= (int)uVar23) goto LAB_0163283c;
    if (!CARRY4(uVar1,~uVar23)) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    uVar19 = 0;
    lVar22 = *(long *)(uVar25 + 0x10) + (long)(int)(uVar1 + ~uVar23) * 0x20;
    ppppplVar24 = *(long ******)(lVar22 + 0x20);
    ppppplVar30 = *(long ******)(lVar22 + 0x38);
    ppppplVar29 = *(long ******)(lVar22 + 0x30);
    param_3[1] = *(long ******)(lVar22 + 0x28);
    *param_3 = ppppplVar24;
    param_3[3] = ppppplVar30;
    param_3[2] = ppppplVar29;
LAB_01632880:
    plVar8 = (long *)((long)&MACH_HEADER.magic + 1);
    goto code_r0x01632898;
  }
LAB_016328b0:
  auVar31 = func_0x00f78af4();
  pppppplVar9 = auVar31._8_8_;
  puStack_48 = &Core_Analytics_AnalyticsManager__ReturnCustomParmListToPool;
  ppppplStack_70 = param_2;
  puStack_68 = (undefined *)param_1;
  ppppplStack_60 = (long *****)param_3;
  ppppplStack_58 = (long *****)param_4;
  ppppplStack_50 = (long *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb565e & 1) == 0) {
    func_0x00f78a20(0x3d3cc10);
    func_0x00f78a20(0x3d40350);
    bRam0000000003eb565e = 1;
  }
  if (pppppplVar9 != (long ******)0x0) {
    /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Clear*/ func_0x024a4f04(pppppplVar9,uRam0000000003d3cc10);
    lVar22 = *(long *)(auVar31._0_8_ + 0x28);
    if (lVar22 != 0) {
      plVar8 = (long *)(lVar22 + 0x10);
      lVar20 = *plVar8;
      pppppplVar15 = (long ******)ppppplStack_60;
      if (lVar20 == 0) {
code_r0x0286596c:
        pppppplVar9 = pppppplVar15;
        plVar8 = (long *)func_0x00f78af4();
        lVar20 = extraout_x8;
        uVar23 = extraout_w9;
      }
      else {
        uVar23 = *(uint *)(lVar22 + 0x18);
        if (uVar23 == (uint)*(long *)(lVar20 + 0x18)) {
          iVar7 = 4;
          if (*(long *)(lVar20 + 0x18) != 0) {
            iVar7 = uVar23 << 1;
          }
          plVar8 = (long *)(*(code *)**(undefined8 **)
                                       (*(long *)(*(long *)(lRam0000000003d40350 + 0x18) + 0xc0) +
                                       0x38))(plVar8,iVar7);
          lVar20 = *(long *)(lVar22 + 0x10);
          uVar23 = *(uint *)(lVar22 + 0x18);
          *(uint *)(lVar22 + 0x18) = uVar23 + 1;
          pppppplVar15 = pppppplVar9;
          if (lVar20 != 0) goto code_r0x02865978;
          goto code_r0x0286596c;
        }
      }
      *(uint *)(lVar22 + 0x18) = uVar23 + 1;
code_r0x02865978:
      if (uVar23 < *(uint *)(lVar20 + 0x18)) {
        *(long *******)(lVar20 + (long)(int)uVar23 * 8 + 0x20) = pppppplVar9;
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        return plVar8;
      }
      uVar10 = func_0x00f78b24();
      func_0x00f78ac0(uVar10,0);
      puStack_68 = &System_Collections_Generic_Stack_object___ThrowForEmptyStack;
      pppppplStack_80 = pppppplVar9;
      puStack_78 = (undefined *)lVar22;
      ppppplStack_70 = (long *****)&ppppplStack_50;
      func_0x00f78a24(0x3d22a38);
      uVar10 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d72ca8);
      lVar20 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,uVar11);
      uVar11 = func_0x00f78a24(0x3d40438);
      auVar31 = func_0x00f78ac0(uVar10,uVar11);
      lVar22 = auVar31._0_8_;
      auStack_90._8_8_ =
           &System_Collections_Generic_Stack_SequenceNode_SequenceConstructPosContext____ctor;
      pppppplStack_a0 = pppppplVar9;
      puStack_98 = (undefined *)uVar10;
      auStack_90._0_8_ = &ppppplStack_70;
      if (lVar22 != 0) {
        /*System.Object$$.ctor*/ func_0x0294d018(lVar22,0);
        plVar8 = (long *)(**(code **)**(undefined8 **)(*(long *)(auVar31._8_8_ + 0x18) + 0xc0))();
        *(long **)(lVar22 + 0x10) = plVar8;
        return plVar8;
      }
      auVar31 = func_0x00f78af4();
      lVar22 = auVar31._0_8_;
      if (lVar22 == 0) {
        func_0x00f78af4();
      }
      else {
        /*System.Object$$.ctor*/ func_0x0294d018(lVar22,0);
        if (-1 < auVar31._8_4_) {
          lVar20 = *(long *)(*(long *)(*(long *)(lVar20 + 0x18) + 0xc0) + 8);
          if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar20);
          }
          plVar8 = (long *)func_0x00f78a34(lVar20,auVar31._8_8_);
          *(long **)(lVar22 + 0x10) = plVar8;
          return plVar8;
        }
      }
      uVar10 = func_0x00f78a24(0x3d22910);
      uVar10 = func_0x00f78ae0(uVar10,&stack0xffffffffffffff2c);
      func_0x00f78a24(0x3d1fcf8);
      uVar11 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d781d8);
      uVar13 = func_0x00f78a24(0x3d70548);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(uVar11,uVar12,uVar10,uVar13,0);
      uVar10 = func_0x00f78a24(0x3d40520);
      lVar22 = func_0x00f78ac0(uVar11,uVar10);
      return (long *)(ulong)*(uint *)(lVar22 + 0x18);
    }
  }
  lVar22 = func_0x00f78af4();
  puStack_78 = &Core_Analytics_AnalyticsManager__StartEventBatch;
  pppppplStack_80 = &ppppplStack_50;
  auStack_90 = auVar31;
  if ((bRam0000000003eb565f & 1) == 0) {
    func_0x00f78a20(0x3d7cc48);
    bRam0000000003eb565f = 1;
  }
  pppppplVar9 = *(long *******)(lVar22 + 0x20);
  if (pppppplVar9 == (long ******)0x0) {
    auVar31 = func_0x00f78af4();
    uStack_108 = auVar31._8_8_;
    pppppplVar16 = auVar31._0_8_;
    puVar3 = auStack_110;
    pppppplVar5 = (long ******)auStack_110;
    puStack_98 = &Core_Analytics_AnalyticsManager__AddEventToBatch;
    ppppppplVar27 = &pppppplStack_a0;
    auVar31._8_8_ = pppppplVar16;
    auVar31._0_8_ = 0x3eb5000;
    pppppplVar17 = pppppplVar15;
    pppppplStack_a0 = (long ******)&pppppplStack_80;
    if ((bRam0000000003eb5660 & 1) == 0) {
      func_0x00f78a20(0x3d21ce0);
      func_0x00f78a20(0x3d3cc20);
      func_0x00f78a20(0x3d3cc28);
      func_0x00f78a20(0x3d66538);
      func_0x00f78a20(0x3d7cc30);
      func_0x00f78a20(0x3d66570);
      func_0x00f78a20(0x3d66580);
      func_0x00f78a20(0x3d7d1e0);
      func_0x00f78a20(0x3d66568);
      func_0x00f78a20(0x3d66fd8);
      func_0x00f78a20(0x3d66578);
      func_0x00f78a20(0x3d66518);
      func_0x00f78a20(0x3d66548);
      func_0x00f78a20(0x3d66588);
      bRam0000000003eb5660 = 1;
    }
    if (((ulong)pppppplVar15 & 1) == 0) {
      pppppplVar9 = (long ******)pppppplVar16[4];
      if (pppppplVar9 != (long ******)0x0) {
        puStack_118 = &UNK_01632a9c;
        uVar10 = /*STR(',')*/ uRam0000000003d66fd8;
        goto code_r0x029d2f8c;
      }
    }
    else {
      pppppplVar9 = pppppplVar16 + 4;
      pppppplVar16 = pppppplVar9;
      if (*pppppplVar9 != (long *****)0x0) {
        param_2 = (long *****)0x3d7cc30;
        pppppplVar17 = (long ******)0x0;
        /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*pppppplVar9,/*STR('{')*/ uRam0000000003d7cc30,0);
        auVar32._8_8_ = /*STR('"event_id": "')*/ uRam0000000003d66570;
        auVar32._0_8_ = *pppppplVar9;
        if (*pppppplVar9 != (long *****)0x0) {
          lVar22 = 0x3d21ce0;
          pppppplVar17 = (long ******)0x0;
          puVar28 = &UNK_01632adc;
          goto code_r0x029d2c70;
        }
      }
    }
    lVar22 = func_0x00f78af4();
    puStack_118 = &Core_Analytics_AnalyticsManager__EndEventBatch;
    if ((bRam0000000003eb5661 & 1) == 0) {
      func_0x00f78a20(0x3d76b40);
      bRam0000000003eb5661 = 1;
    }
    pppppplVar9 = *(long *******)(lVar22 + 0x20);
    if (pppppplVar9 == (long ******)0x0) {
      auVar31 = func_0x00f78af4();
      lVar22 = auVar31._0_8_;
      uVar10 = /*Core.Analytics.AnalyticsManager$$CreatePOSTRequest*/ func_0x01632e78(lVar22,*(undefined8 *)(lVar22 + 0x18),auVar31._8_8_,pppppplVar17);
      /*Core.Analytics.AnalyticsManager$$SendEventBatch*/ func_0x01633008(lVar22,uVar10);
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
    pppppplVar5 = (long ******)auStack_110;
    auVar31._8_8_ = pppppplVar16;
    auVar31._0_8_ = 0x3eb5000;
    uVar10 = /*STR('] }')*/ uRam0000000003d76b40;
  }
  else {
    pppppplVar5 = &ppppplStack_70;
    uVar10 = /*STR('{ "events": [')*/ uRam0000000003d7cc48;
    pppppplVar15 = (long ******)0x3eb5000;
    ppppppplVar27 = (long *******)pppppplStack_80;
    puStack_118 = puStack_78;
    auVar31 = auStack_90;
  }
code_r0x029d2f8c:
  lVar22 = auVar31._0_8_;
  auVar32._8_8_ = uVar10;
  auVar32._0_8_ = pppppplVar9;
  pppppplVar17 = (long ******)0x0;
  *(undefined1 (*) [16])((long)pppppplVar5 + -0x20) = auVar31;
  *(long ********)((long)pppppplVar5 + -0x10) = ppppppplVar27;
  *(undefined **)((long)pppppplVar5 + -8) = puStack_118;
  ppppppplVar27 = (long *******)((long)pppppplVar5 + -0x10);
  puVar28 = &UNK_029d2fa0;
  puVar3 = (undefined1 *)((long)pppppplVar5 + -0x20);
code_r0x029d2c70:
  do {
    lVar20 = auVar32._8_8_;
    plVar8 = auVar32._0_8_;
    *(long *)(puVar3 + -0x40) = unaff_x24;
    *(ulong *)(puVar3 + -0x38) = uVar25;
    *(long ******)(puVar3 + -0x30) = param_2;
    *(long *******)(puVar3 + -0x28) = pppppplVar15;
    *(long *)(puVar3 + -0x20) = lVar22;
    *(long *******)(puVar3 + -0x18) = pppppplVar9;
    *(long ********)(puVar3 + -0x10) = ppppppplVar27;
    *(undefined **)(puVar3 + -8) = puVar28;
    if (lVar20 == 0) {
      return plVar8;
    }
    uVar25 = plVar8[2];
    if (uVar25 == 0) {
      func_0x00f78af4();
      lVar20 = lVar22;
      pppppplVar9 = pppppplVar15;
      ppppplVar24 = param_2;
code_r0x029d2d74:
      uVar10 = func_0x00f78b24();
      puVar28 = &System_Text_StringBuilder__AppendHelper;
      auVar32 = func_0x00f78ac0(uVar10,0);
      pppppplVar15 = pppppplVar17;
      pppppplVar16 = pppppplVar18;
    }
    else {
      uVar2 = *(uint *)(plVar8 + 4);
      unaff_x24 = (long)(int)uVar2;
      uVar1 = *(uint *)(lVar20 + 0x10);
      pppppplVar9 = (long ******)(ulong)uVar1;
      uVar23 = uVar1 + uVar2;
      ppppplVar24 = (long *****)(ulong)uVar23;
      if ((int)uVar23 < *(int *)(uVar25 + 0x18)) {
        if ((int)uVar1 < 3) {
          if ((int)uVar1 < 1) goto code_r0x029d2d54;
          pppppplVar17 = (long ******)0x0;
          uVar6 = /*System.String$$get_Chars*/ func_0x029c5420(lVar20,0);
          if (uVar2 < *(uint *)(uVar25 + 0x18)) {
            *(undefined2 *)(uVar25 + unaff_x24 * 2 + 0x20) = uVar6;
            if (uVar1 < 2) {
code_r0x029d2d54:
              *(uint *)(plVar8 + 4) = uVar23;
              return plVar8;
            }
            pppppplVar17 = (long ******)0x0;
            uVar6 = /*System.String$$get_Chars*/ func_0x029c5420(lVar20,1);
            if (uVar2 + 1 < *(uint *)(uVar25 + 0x18)) {
              *(undefined2 *)(uVar25 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar6;
              goto code_r0x029d2d54;
            }
          }
        }
        else {
          iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          if (uVar2 < *(uint *)(uVar25 + 0x18)) {
            /*System.String$$wstrcpy*/ func_0x029cb054(uVar25 + unaff_x24 * 2 + 0x20,lVar20 + iVar7,pppppplVar9,0);
            goto code_r0x029d2d54;
          }
        }
        goto code_r0x029d2d74;
      }
      puVar28 = &UNK_029d2cf4;
      pppppplVar15 = pppppplVar17;
      pppppplVar16 = pppppplVar18;
    }
    lVar22 = auVar32._8_8_;
    plVar14 = auVar32._0_8_;
    *(long *)(puVar3 + -0x60) = lVar20;
    *(long **)(puVar3 + -0x58) = plVar8;
    *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x48) = puVar28;
    if (lVar22 != 0) {
      iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
      lVar20 = lVar22 + iVar7;
      pppppplVar16 = (long ******)(ulong)*(uint *)(lVar22 + 0x10);
      puVar26 = *(undefined1 **)(puVar3 + -0x50);
      puVar28 = *(undefined **)(puVar3 + -0x48);
      puVar4 = puVar3 + -0x40;
      auVar33._8_8_ = ppppplVar24;
      auVar33._0_8_ = *(undefined8 *)(puVar3 + -0x58);
      pppppplVar18 = *(long *******)(puVar3 + -0x60);
      pppppplVar15 = pppppplVar9;
code_r0x029d2b54:
      param_2 = auVar33._8_8_;
      *(long *)(puVar4 + -0x40) = unaff_x24;
      *(ulong *)(puVar4 + -0x38) = uVar25;
      *(long ******)(puVar4 + -0x30) = param_2;
      *(long *******)(puVar4 + -0x28) = pppppplVar15;
      *(long *******)(puVar4 + -0x20) = pppppplVar18;
      *(long *)(puVar4 + -0x18) = auVar33._0_8_;
      *(undefined1 **)(puVar4 + -0x10) = puVar26;
      *(undefined **)(puVar4 + -8) = puVar28;
      ppppppplVar27 = (long *******)(puVar4 + -0x10);
      iVar7 = (int)pppppplVar16;
      if (-1 < iVar7) {
        lVar22 = plVar14[2];
        if (lVar22 != 0) {
          iVar21 = (int)plVar14[4];
          uVar23 = iVar21 + iVar7;
          param_2 = (long *****)(ulong)uVar23;
          if ((int)uVar23 <= *(int *)(lVar22 + 0x18)) goto code_r0x029d2be8;
          uVar1 = *(int *)(lVar22 + 0x18) - iVar21;
          uVar25 = (ulong)uVar1;
          if (0 < (int)uVar1) {
            /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar20,lVar22,iVar21,uVar25);
            pppppplVar15 = pppppplVar16;
            if (plVar14[2] == 0) goto code_r0x029d2c08;
            *(int *)(plVar14 + 4) = (int)*(undefined8 *)(plVar14[2] + 0x18);
          }
          uVar23 = iVar7 - uVar1;
          pppppplVar16 = (long ******)(ulong)uVar23;
          /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(plVar14,pppppplVar16);
          lVar22 = plVar14[2];
          lVar20 = lVar20 + (long)(int)uVar1 * 2;
          iVar21 = 0;
code_r0x029d2be8:
          /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar20,lVar22,iVar21,pppppplVar16);
          *(uint *)(plVar14 + 4) = uVar23;
          return plVar14;
        }
code_r0x029d2c08:
        func_0x00f78af4();
      }
      uVar10 = func_0x00f78a24(0x3d6b268);
      pppppplVar9 = (long ******)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar10,0);
      func_0x00f78a24(0x3d1fcf8);
      lVar22 = func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d7c5c8);
      pppppplVar18 = (long ******)0x0;
      pppppplVar17 = pppppplVar9;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(lVar22,uVar10);
      uVar10 = func_0x00f78a24(0x3d5dbe8);
      puVar28 = &System_Text_StringBuilder__Append;
      auVar32 = func_0x00f78ac0(lVar22,uVar10);
      puVar3 = puVar4 + -0x40;
      goto code_r0x029d2c70;
    }
    auVar33 = func_0x00f78af4();
    param_2 = auVar33._8_8_;
    plVar14 = auVar33._0_8_;
    puVar4 = puVar3 + -0xa0;
    *(long *)(puVar3 + -0xa0) = unaff_x24;
    *(ulong *)(puVar3 + -0x98) = uVar25;
    *(long ******)(puVar3 + -0x90) = ppppplVar24;
    *(long *******)(puVar3 + -0x88) = pppppplVar9;
    *(long *)(puVar3 + -0x80) = lVar20;
    *(long **)(puVar3 + -0x78) = plVar8;
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x50;
    *(undefined **)(puVar3 + -0x68) = &System_Text_StringBuilder__Append;
    puVar26 = puVar3 + -0x70;
    uVar25 = 0x3eb9000;
    pppppplVar18 = pppppplVar16;
    if ((bRam0000000003eb948a & 1) == 0) {
      func_0x00f78a20(0x3d208b0);
      bRam0000000003eb948a = 1;
    }
    iVar7 = (int)pppppplVar15;
    if (iVar7 < 0) {
code_r0x029d2e7c:
      uVar10 = func_0x00f78a24(0x3d6de28);
      uVar11 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar10,0);
      func_0x00f78a24(0x3d1fcf8);
      pppppplVar16 = (long ******)func_0x00f78aec();
      uVar10 = 0x3d7b9d0;
code_r0x029d2ee8:
      uVar10 = func_0x00f78a24(uVar10);
      pppppplVar18 = (long ******)0x0;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(pppppplVar16,uVar10,uVar11);
      uVar10 = func_0x00f78a24(0x3d5dc00);
      func_0x00f78ac0(pppppplVar16,uVar10);
    }
    else {
      iVar21 = (int)pppppplVar16;
      if (iVar21 < 0) {
        uVar10 = func_0x00f78a24(0x3d75fa8);
        uVar11 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar10,0);
        func_0x00f78a24(0x3d1fcf8);
        pppppplVar16 = (long ******)func_0x00f78aec();
        uVar10 = 0x3d78638;
        goto code_r0x029d2ee8;
      }
      if ((iVar21 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
        return plVar14;
      }
      if (param_2 != (long *****)0x0) {
        if (iVar21 == 0) {
          return plVar14;
        }
        if (iVar7 <= *(int *)(param_2 + 2) - iVar21) {
          iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar20 = (long)param_2 + (long)iVar7 + ((ulong)pppppplVar15 & 0xffffffff) * 2;
          puVar28 = &UNK_029d2e58;
          pppppplVar18 = pppppplVar16;
          goto code_r0x029d2b54;
        }
        goto code_r0x029d2e7c;
      }
      if (iVar7 == 0 && iVar21 == 0) {
        return plVar14;
      }
    }
    func_0x00f78a24(0x3d1fcf0);
    uVar10 = func_0x00f78aec();
    uVar11 = func_0x00f78a24(0x3d7c5a0);
    pppppplVar17 = (long ******)0x0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar10,uVar11);
    uVar11 = func_0x00f78a24(0x3d5dc00);
    uVar11 = func_0x00f78ac0(uVar10,uVar11);
    *(long *******)(puVar3 + -0xc0) = pppppplVar16;
    *(undefined8 *)(puVar3 + -0xb8) = uVar10;
    *(undefined1 **)(puVar3 + -0xb0) = puVar26;
    *(undefined **)(puVar3 + -0xa8) = &System_Text_StringBuilder__AppendLine;
    uVar10 = /*System.Environment$$get_NewLine*/ func_0x02aca040(0);
    auVar32._8_8_ = uVar10;
    auVar32._0_8_ = uVar11;
    ppppppplVar27 = *(long ********)(puVar3 + -0xb0);
    puVar28 = *(undefined **)(puVar3 + -0xa8);
    lVar22 = *(long *)(puVar3 + -0xc0);
    pppppplVar9 = *(long *******)(puVar3 + -0xb8);
    puVar3 = puVar3 + -0xa0;
  } while( true );
}



// ============================================================
// RVA: 0x16328b4 | Core.Analytics.AnalyticsManager.ReturnCustomParmListToPool
// ============================================================

/* WARNING: Possible PIC construction at 0x029d2f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01632d60) */
/* WARNING: Removing unreachable block (ram,0x01632d70) */
/* WARNING: Removing unreachable block (ram,0x01632d7c) */
/* WARNING: Removing unreachable block (ram,0x01632d8c) */
/* WARNING: Removing unreachable block (ram,0x01632d14) */
/* WARNING: Removing unreachable block (ram,0x01632d1c) */
/* WARNING: Removing unreachable block (ram,0x01632ce8) */
/* WARNING: Removing unreachable block (ram,0x01632d2c) */
/* WARNING: Removing unreachable block (ram,0x01632d30) */
/* WARNING: Removing unreachable block (ram,0x01632d3c) */
/* WARNING: Removing unreachable block (ram,0x01632d64) */
/* WARNING: Removing unreachable block (ram,0x01632d68) */
/* WARNING: Removing unreachable block (ram,0x01632d48) */
/* WARNING: Removing unreachable block (ram,0x01632d4c) */
/* WARNING: Removing unreachable block (ram,0x01632cf0) */
/* WARNING: Removing unreachable block (ram,0x01632cf4) */
/* WARNING: Removing unreachable block (ram,0x01632d08) */
/* WARNING: Removing unreachable block (ram,0x01632cc0) */
/* WARNING: Removing unreachable block (ram,0x01632cc8) */
/* WARNING: Removing unreachable block (ram,0x01632cdc) */
/* WARNING: Removing unreachable block (ram,0x01632c50) */
/* WARNING: Removing unreachable block (ram,0x01632c5c) */
/* WARNING: Removing unreachable block (ram,0x01632d90) */
/* WARNING: Removing unreachable block (ram,0x01632d98) */
/* WARNING: Removing unreachable block (ram,0x01632c68) */
/* WARNING: Removing unreachable block (ram,0x01632c84) */
/* WARNING: Removing unreachable block (ram,0x01632c90) */
/* WARNING: Removing unreachable block (ram,0x01632c98) */
/* WARNING: Removing unreachable block (ram,0x01632ca0) */
/* WARNING: Removing unreachable block (ram,0x01632c20) */
/* WARNING: Removing unreachable block (ram,0x01632c28) */
/* WARNING: Removing unreachable block (ram,0x01632c44) */
/* WARNING: Removing unreachable block (ram,0x01632bd0) */
/* WARNING: Removing unreachable block (ram,0x01632bd8) */
/* WARNING: Removing unreachable block (ram,0x01632bf4) */
/* WARNING: Removing unreachable block (ram,0x01632c0c) */
/* WARNING: Removing unreachable block (ram,0x01632ba4) */
/* WARNING: Removing unreachable block (ram,0x01632bac) */
/* WARNING: Removing unreachable block (ram,0x01632bc4) */
/* WARNING: Removing unreachable block (ram,0x01632b74) */
/* WARNING: Removing unreachable block (ram,0x01632b7c) */
/* WARNING: Removing unreachable block (ram,0x01632b90) */
/* WARNING: Removing unreachable block (ram,0x01632b40) */
/* WARNING: Removing unreachable block (ram,0x01632b48) */
/* WARNING: Removing unreachable block (ram,0x01632b64) */
/* WARNING: Removing unreachable block (ram,0x01632adc) */
/* WARNING: Removing unreachable block (ram,0x01632aec) */
/* WARNING: Removing unreachable block (ram,0x01632af4) */
/* WARNING: Removing unreachable block (ram,0x01632af8) */
/* WARNING: Removing unreachable block (ram,0x01632b14) */
/* WARNING: Removing unreachable block (ram,0x01632b2c) */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x029d2fa0) */
/* WARNING: Removing unreachable block (ram,0x01632dac) */
/* WARNING: Removing unreachable block (ram,0x01632db4) */

long * Core_Analytics_AnalyticsManager__ReturnCustomParmListToPool
                 (long param_1,long ******param_2,long ******param_3,long ******param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined2 uVar6;
  int iVar7;
  long lVar8;
  long ******pppppplVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined1 *puVar16;
  long ******pppppplVar17;
  long ******pppppplVar18;
  long lVar19;
  long extraout_x8;
  uint extraout_w9;
  uint uVar20;
  int iVar21;
  long ******unaff_x20;
  ulong unaff_x22;
  ulong uVar22;
  ulong unaff_x23;
  long unaff_x24;
  long *******ppppppplVar23;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  long ******pppppplStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  long *****ppppplStack_48;
  long ******pppppplStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb565e & 1) == 0) {
    func_0x00f78a20(0x3d3cc10);
    func_0x00f78a20(0x3d40350);
    bRam0000000003eb565e = 1;
  }
  if (param_2 != (long ******)0x0) {
    /*System.Collections.Generic.List<AnalyticsManager.CustomParams>$$Clear*/ func_0x024a4f04(param_2,uRam0000000003d3cc10);
    lVar8 = *(long *)(param_1 + 0x28);
    if (lVar8 != 0) {
      plVar10 = (long *)(lVar8 + 0x10);
      lVar19 = *plVar10;
      if (lVar19 == 0) {
code_r0x0286596c:
        param_2 = unaff_x20;
        plVar10 = (long *)func_0x00f78af4();
        lVar19 = extraout_x8;
        uVar20 = extraout_w9;
      }
      else {
        uVar20 = *(uint *)(lVar8 + 0x18);
        if (uVar20 == (uint)*(long *)(lVar19 + 0x18)) {
          iVar7 = 4;
          if (*(long *)(lVar19 + 0x18) != 0) {
            iVar7 = uVar20 << 1;
          }
          plVar10 = (long *)(*(code *)**(undefined8 **)
                                        (*(long *)(*(long *)(lRam0000000003d40350 + 0x18) + 0xc0) +
                                        0x38))(plVar10,iVar7);
          lVar19 = *(long *)(lVar8 + 0x10);
          uVar20 = *(uint *)(lVar8 + 0x18);
          *(uint *)(lVar8 + 0x18) = uVar20 + 1;
          unaff_x20 = param_2;
          if (lVar19 != 0) goto code_r0x02865978;
          goto code_r0x0286596c;
        }
      }
      *(uint *)(lVar8 + 0x18) = uVar20 + 1;
code_r0x02865978:
      if (uVar20 < *(uint *)(lVar19 + 0x18)) {
        *(long *******)(lVar19 + (long)(int)uVar20 * 8 + 0x20) = param_2;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        return plVar10;
      }
      uVar11 = func_0x00f78b24();
      func_0x00f78ac0(uVar11,0);
      pppppplStack_40 = param_2;
      puStack_38 = (undefined *)lVar8;
      func_0x00f78a24(0x3d22a38);
      uVar11 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d72ca8);
      lVar19 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,uVar12);
      uVar12 = func_0x00f78a24(0x3d40438);
      auVar25 = func_0x00f78ac0(uVar11,uVar12);
      lVar8 = auVar25._0_8_;
      ppppplStack_48 =
           (long *****)
           &System_Collections_Generic_Stack_SequenceNode_SequenceConstructPosContext____ctor;
      pppppplStack_60 = param_2;
      puStack_58 = (undefined *)uVar11;
      puStack_50 = &stack0xffffffffffffffd0;
      if (lVar8 != 0) {
        /*System.Object$$.ctor*/ func_0x0294d018(lVar8,0);
        plVar10 = (long *)(**(code **)**(undefined8 **)(*(long *)(auVar25._8_8_ + 0x18) + 0xc0))();
        *(long **)(lVar8 + 0x10) = plVar10;
        return plVar10;
      }
      auVar25 = func_0x00f78af4();
      lVar8 = auVar25._0_8_;
      if (lVar8 == 0) {
        func_0x00f78af4();
      }
      else {
        /*System.Object$$.ctor*/ func_0x0294d018(lVar8,0);
        if (-1 < auVar25._8_4_) {
          lVar19 = *(long *)(*(long *)(*(long *)(lVar19 + 0x18) + 0xc0) + 8);
          if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar19);
          }
          plVar10 = (long *)func_0x00f78a34(lVar19,auVar25._8_8_);
          *(long **)(lVar8 + 0x10) = plVar10;
          return plVar10;
        }
      }
      uVar11 = func_0x00f78a24(0x3d22910);
      uVar11 = func_0x00f78ae0(uVar11,&stack0xffffffffffffff6c);
      func_0x00f78a24(0x3d1fcf8);
      uVar12 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d781d8);
      uVar14 = func_0x00f78a24(0x3d70548);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(uVar12,uVar13,uVar11,uVar14,0);
      uVar11 = func_0x00f78a24(0x3d40520);
      lVar8 = func_0x00f78ac0(uVar12,uVar11);
      return (long *)(ulong)*(uint *)(lVar8 + 0x18);
    }
  }
  lVar8 = func_0x00f78af4();
  puStack_38 = &Core_Analytics_AnalyticsManager__StartEventBatch;
  puStack_50 = (undefined1 *)param_1;
  ppppplStack_48 = (long *****)param_2;
  pppppplStack_40 = (long ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb565f & 1) == 0) {
    func_0x00f78a20(0x3d7cc48);
    bRam0000000003eb565f = 1;
  }
  pppppplVar9 = *(long *******)(lVar8 + 0x20);
  if (pppppplVar9 == (long ******)0x0) {
    auVar25 = func_0x00f78af4();
    uStack_c8 = auVar25._8_8_;
    pppppplVar17 = auVar25._0_8_;
    puVar3 = auStack_d0;
    puVar5 = auStack_d0;
    puStack_58 = &Core_Analytics_AnalyticsManager__AddEventToBatch;
    ppppppplVar23 = &pppppplStack_60;
    puVar16 = (undefined1 *)0x3eb5000;
    pppppplVar18 = param_3;
    pppppplStack_60 = (long ******)&pppppplStack_40;
    if ((bRam0000000003eb5660 & 1) == 0) {
      func_0x00f78a20(0x3d21ce0);
      func_0x00f78a20(0x3d3cc20);
      func_0x00f78a20(0x3d3cc28);
      func_0x00f78a20(0x3d66538);
      func_0x00f78a20(0x3d7cc30);
      func_0x00f78a20(0x3d66570);
      func_0x00f78a20(0x3d66580);
      func_0x00f78a20(0x3d7d1e0);
      func_0x00f78a20(0x3d66568);
      func_0x00f78a20(0x3d66fd8);
      func_0x00f78a20(0x3d66578);
      func_0x00f78a20(0x3d66518);
      func_0x00f78a20(0x3d66548);
      func_0x00f78a20(0x3d66588);
      bRam0000000003eb5660 = 1;
    }
    if (((ulong)param_3 & 1) == 0) {
      pppppplVar9 = (long ******)pppppplVar17[4];
      if (pppppplVar9 != (long ******)0x0) {
        puStack_d8 = &UNK_01632a9c;
        uVar11 = /*STR(',')*/ uRam0000000003d66fd8;
        goto code_r0x029d2f8c;
      }
    }
    else {
      pppppplVar9 = pppppplVar17 + 4;
      pppppplVar17 = pppppplVar9;
      if (*pppppplVar9 != (long *****)0x0) {
        unaff_x22 = 0x3d7cc30;
        pppppplVar18 = (long ******)0x0;
        /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*pppppplVar9,/*STR('{')*/ uRam0000000003d7cc30,0);
        auVar25._8_8_ = /*STR('"event_id": "')*/ uRam0000000003d66570;
        auVar25._0_8_ = *pppppplVar9;
        if (*pppppplVar9 != (long *****)0x0) {
          puVar16 = (undefined1 *)0x3d21ce0;
          pppppplVar18 = (long ******)0x0;
          puVar24 = &UNK_01632adc;
          goto code_r0x029d2c70;
        }
      }
    }
    lVar8 = func_0x00f78af4();
    puStack_d8 = &Core_Analytics_AnalyticsManager__EndEventBatch;
    if ((bRam0000000003eb5661 & 1) == 0) {
      func_0x00f78a20(0x3d76b40);
      bRam0000000003eb5661 = 1;
    }
    pppppplVar9 = *(long *******)(lVar8 + 0x20);
    if (pppppplVar9 == (long ******)0x0) {
      auVar25 = func_0x00f78af4();
      lVar8 = auVar25._0_8_;
      uVar11 = /*Core.Analytics.AnalyticsManager$$CreatePOSTRequest*/ func_0x01632e78(lVar8,*(undefined8 *)(lVar8 + 0x18),auVar25._8_8_,pppppplVar18);
      /*Core.Analytics.AnalyticsManager$$SendEventBatch*/ func_0x01633008(lVar8,uVar11);
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
    puVar5 = auStack_d0;
    puVar16 = (undefined1 *)0x3eb5000;
    uVar11 = /*STR('] }')*/ uRam0000000003d76b40;
  }
  else {
    puVar5 = &stack0xffffffffffffffd0;
    uVar11 = /*STR('{ "events": [')*/ uRam0000000003d7cc48;
    pppppplVar17 = (long ******)ppppplStack_48;
    puVar16 = puStack_50;
    param_3 = (long ******)0x3eb5000;
    ppppppplVar23 = (long *******)pppppplStack_40;
    puStack_d8 = puStack_38;
  }
code_r0x029d2f8c:
  auVar25._8_8_ = uVar11;
  auVar25._0_8_ = pppppplVar9;
  pppppplVar18 = (long ******)0x0;
  *(undefined1 **)(puVar5 + -0x20) = puVar16;
  *(long *******)(puVar5 + -0x18) = pppppplVar17;
  *(long ********)(puVar5 + -0x10) = ppppppplVar23;
  *(undefined **)(puVar5 + -8) = puStack_d8;
  ppppppplVar23 = (long *******)(puVar5 + -0x10);
  puVar24 = &UNK_029d2fa0;
  puVar3 = puVar5 + -0x20;
code_r0x029d2c70:
  do {
    lVar8 = auVar25._8_8_;
    plVar10 = auVar25._0_8_;
    *(long *)(puVar3 + -0x40) = unaff_x24;
    *(ulong *)(puVar3 + -0x38) = unaff_x23;
    *(ulong *)(puVar3 + -0x30) = unaff_x22;
    *(long *******)(puVar3 + -0x28) = param_3;
    *(undefined1 **)(puVar3 + -0x20) = puVar16;
    *(long *******)(puVar3 + -0x18) = pppppplVar9;
    *(long ********)(puVar3 + -0x10) = ppppppplVar23;
    *(undefined **)(puVar3 + -8) = puVar24;
    if (lVar8 == 0) {
      return plVar10;
    }
    unaff_x23 = plVar10[2];
    if (unaff_x23 == 0) {
      func_0x00f78af4();
      lVar8 = (long)puVar16;
      pppppplVar9 = param_3;
      uVar22 = unaff_x22;
code_r0x029d2d74:
      uVar11 = func_0x00f78b24();
      puVar24 = &System_Text_StringBuilder__AppendHelper;
      auVar25 = func_0x00f78ac0(uVar11,0);
      param_3 = pppppplVar18;
      pppppplVar17 = param_4;
    }
    else {
      uVar2 = *(uint *)(plVar10 + 4);
      unaff_x24 = (long)(int)uVar2;
      uVar1 = *(uint *)(lVar8 + 0x10);
      pppppplVar9 = (long ******)(ulong)uVar1;
      uVar20 = uVar1 + uVar2;
      uVar22 = (ulong)uVar20;
      if ((int)uVar20 < *(int *)(unaff_x23 + 0x18)) {
        if ((int)uVar1 < 3) {
          if ((int)uVar1 < 1) goto code_r0x029d2d54;
          pppppplVar18 = (long ******)0x0;
          uVar6 = /*System.String$$get_Chars*/ func_0x029c5420(lVar8,0);
          if (uVar2 < *(uint *)(unaff_x23 + 0x18)) {
            *(undefined2 *)(unaff_x23 + unaff_x24 * 2 + 0x20) = uVar6;
            if (uVar1 < 2) {
code_r0x029d2d54:
              *(uint *)(plVar10 + 4) = uVar20;
              return plVar10;
            }
            pppppplVar18 = (long ******)0x0;
            uVar6 = /*System.String$$get_Chars*/ func_0x029c5420(lVar8,1);
            if (uVar2 + 1 < *(uint *)(unaff_x23 + 0x18)) {
              *(undefined2 *)(unaff_x23 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar6;
              goto code_r0x029d2d54;
            }
          }
        }
        else {
          iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          if (uVar2 < *(uint *)(unaff_x23 + 0x18)) {
            /*System.String$$wstrcpy*/ func_0x029cb054(unaff_x23 + unaff_x24 * 2 + 0x20,lVar8 + iVar7,pppppplVar9,0);
            goto code_r0x029d2d54;
          }
        }
        goto code_r0x029d2d74;
      }
      puVar24 = &UNK_029d2cf4;
      param_3 = pppppplVar18;
      pppppplVar17 = param_4;
    }
    lVar19 = auVar25._8_8_;
    plVar15 = auVar25._0_8_;
    *(long *)(puVar3 + -0x60) = lVar8;
    *(long **)(puVar3 + -0x58) = plVar10;
    *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x48) = puVar24;
    if (lVar19 != 0) {
      iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
      lVar8 = lVar19 + iVar7;
      pppppplVar17 = (long ******)(ulong)*(uint *)(lVar19 + 0x10);
      puVar16 = *(undefined1 **)(puVar3 + -0x50);
      puVar24 = *(undefined **)(puVar3 + -0x48);
      puVar4 = puVar3 + -0x40;
      auVar26._8_8_ = uVar22;
      auVar26._0_8_ = *(undefined8 *)(puVar3 + -0x58);
      pppppplVar18 = *(long *******)(puVar3 + -0x60);
      param_3 = pppppplVar9;
code_r0x029d2b54:
      unaff_x22 = auVar26._8_8_;
      *(long *)(puVar4 + -0x40) = unaff_x24;
      *(ulong *)(puVar4 + -0x38) = unaff_x23;
      *(ulong *)(puVar4 + -0x30) = unaff_x22;
      *(long *******)(puVar4 + -0x28) = param_3;
      *(long *******)(puVar4 + -0x20) = pppppplVar18;
      *(long *)(puVar4 + -0x18) = auVar26._0_8_;
      *(undefined1 **)(puVar4 + -0x10) = puVar16;
      *(undefined **)(puVar4 + -8) = puVar24;
      ppppppplVar23 = (long *******)(puVar4 + -0x10);
      iVar7 = (int)pppppplVar17;
      if (-1 < iVar7) {
        lVar19 = plVar15[2];
        if (lVar19 != 0) {
          iVar21 = (int)plVar15[4];
          uVar20 = iVar21 + iVar7;
          unaff_x22 = (ulong)uVar20;
          if ((int)uVar20 <= *(int *)(lVar19 + 0x18)) goto code_r0x029d2be8;
          uVar1 = *(int *)(lVar19 + 0x18) - iVar21;
          unaff_x23 = (ulong)uVar1;
          if (0 < (int)uVar1) {
            /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar8,lVar19,iVar21,unaff_x23);
            param_3 = pppppplVar17;
            if (plVar15[2] == 0) goto code_r0x029d2c08;
            *(int *)(plVar15 + 4) = (int)*(undefined8 *)(plVar15[2] + 0x18);
          }
          uVar20 = iVar7 - uVar1;
          pppppplVar17 = (long ******)(ulong)uVar20;
          /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(plVar15,pppppplVar17);
          lVar19 = plVar15[2];
          lVar8 = lVar8 + (long)(int)uVar1 * 2;
          iVar21 = 0;
code_r0x029d2be8:
          /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar8,lVar19,iVar21,pppppplVar17);
          *(uint *)(plVar15 + 4) = uVar20;
          return plVar15;
        }
code_r0x029d2c08:
        func_0x00f78af4();
      }
      uVar11 = func_0x00f78a24(0x3d6b268);
      pppppplVar9 = (long ******)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
      func_0x00f78a24(0x3d1fcf8);
      puVar16 = (undefined1 *)func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d7c5c8);
      param_4 = (long ******)0x0;
      pppppplVar18 = pppppplVar9;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(puVar16,uVar11);
      uVar11 = func_0x00f78a24(0x3d5dbe8);
      puVar24 = &System_Text_StringBuilder__Append;
      auVar25 = func_0x00f78ac0(puVar16,uVar11);
      puVar3 = puVar4 + -0x40;
      goto code_r0x029d2c70;
    }
    auVar26 = func_0x00f78af4();
    unaff_x22 = auVar26._8_8_;
    plVar15 = auVar26._0_8_;
    puVar4 = puVar3 + -0xa0;
    *(long *)(puVar3 + -0xa0) = unaff_x24;
    *(ulong *)(puVar3 + -0x98) = unaff_x23;
    *(ulong *)(puVar3 + -0x90) = uVar22;
    *(long *******)(puVar3 + -0x88) = pppppplVar9;
    *(long *)(puVar3 + -0x80) = lVar8;
    *(long **)(puVar3 + -0x78) = plVar10;
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x50;
    *(undefined **)(puVar3 + -0x68) = &System_Text_StringBuilder__Append;
    puVar16 = puVar3 + -0x70;
    unaff_x23 = 0x3eb9000;
    param_4 = pppppplVar17;
    if ((bRam0000000003eb948a & 1) == 0) {
      func_0x00f78a20(0x3d208b0);
      bRam0000000003eb948a = 1;
    }
    iVar7 = (int)param_3;
    if (iVar7 < 0) {
code_r0x029d2e7c:
      uVar11 = func_0x00f78a24(0x3d6de28);
      uVar12 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
      func_0x00f78a24(0x3d1fcf8);
      pppppplVar17 = (long ******)func_0x00f78aec();
      uVar11 = 0x3d7b9d0;
code_r0x029d2ee8:
      uVar11 = func_0x00f78a24(uVar11);
      param_4 = (long ******)0x0;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(pppppplVar17,uVar11,uVar12);
      uVar11 = func_0x00f78a24(0x3d5dc00);
      func_0x00f78ac0(pppppplVar17,uVar11);
    }
    else {
      iVar21 = (int)pppppplVar17;
      if (iVar21 < 0) {
        uVar11 = func_0x00f78a24(0x3d75fa8);
        uVar12 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
        func_0x00f78a24(0x3d1fcf8);
        pppppplVar17 = (long ******)func_0x00f78aec();
        uVar11 = 0x3d78638;
        goto code_r0x029d2ee8;
      }
      if ((iVar21 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
        return plVar15;
      }
      if (unaff_x22 != 0) {
        if (iVar21 == 0) {
          return plVar15;
        }
        if (iVar7 <= *(int *)(unaff_x22 + 0x10) - iVar21) {
          iVar7 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar8 = unaff_x22 + ((ulong)param_3 & 0xffffffff) * 2 + (long)iVar7;
          puVar24 = &UNK_029d2e58;
          pppppplVar18 = pppppplVar17;
          goto code_r0x029d2b54;
        }
        goto code_r0x029d2e7c;
      }
      if (iVar7 == 0 && iVar21 == 0) {
        return plVar15;
      }
    }
    func_0x00f78a24(0x3d1fcf0);
    uVar11 = func_0x00f78aec();
    uVar12 = func_0x00f78a24(0x3d7c5a0);
    pppppplVar18 = (long ******)0x0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar11,uVar12);
    uVar12 = func_0x00f78a24(0x3d5dc00);
    uVar12 = func_0x00f78ac0(uVar11,uVar12);
    *(long *******)(puVar3 + -0xc0) = pppppplVar17;
    *(undefined8 *)(puVar3 + -0xb8) = uVar11;
    *(undefined1 **)(puVar3 + -0xb0) = puVar16;
    *(undefined **)(puVar3 + -0xa8) = &System_Text_StringBuilder__AppendLine;
    uVar11 = /*System.Environment$$get_NewLine*/ func_0x02aca040(0);
    auVar25._8_8_ = uVar11;
    auVar25._0_8_ = uVar12;
    ppppppplVar23 = *(long ********)(puVar3 + -0xb0);
    puVar24 = *(undefined **)(puVar3 + -0xa8);
    puVar16 = *(undefined1 **)(puVar3 + -0xc0);
    pppppplVar9 = *(long *******)(puVar3 + -0xb8);
    puVar3 = puVar3 + -0xa0;
  } while( true );
}



// ============================================================
// RVA: 0x163293c | Core.Analytics.AnalyticsManager.StartEventBatch
// ============================================================

/* WARNING: Possible PIC construction at 0x029d2f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01632d60) */
/* WARNING: Removing unreachable block (ram,0x01632d70) */
/* WARNING: Removing unreachable block (ram,0x01632d7c) */
/* WARNING: Removing unreachable block (ram,0x01632d8c) */
/* WARNING: Removing unreachable block (ram,0x01632d14) */
/* WARNING: Removing unreachable block (ram,0x01632d1c) */
/* WARNING: Removing unreachable block (ram,0x01632ce8) */
/* WARNING: Removing unreachable block (ram,0x01632d2c) */
/* WARNING: Removing unreachable block (ram,0x01632d30) */
/* WARNING: Removing unreachable block (ram,0x01632d3c) */
/* WARNING: Removing unreachable block (ram,0x01632d64) */
/* WARNING: Removing unreachable block (ram,0x01632d68) */
/* WARNING: Removing unreachable block (ram,0x01632d48) */
/* WARNING: Removing unreachable block (ram,0x01632d4c) */
/* WARNING: Removing unreachable block (ram,0x01632cf0) */
/* WARNING: Removing unreachable block (ram,0x01632cf4) */
/* WARNING: Removing unreachable block (ram,0x01632d08) */
/* WARNING: Removing unreachable block (ram,0x01632cc0) */
/* WARNING: Removing unreachable block (ram,0x01632cc8) */
/* WARNING: Removing unreachable block (ram,0x01632cdc) */
/* WARNING: Removing unreachable block (ram,0x01632c50) */
/* WARNING: Removing unreachable block (ram,0x01632c5c) */
/* WARNING: Removing unreachable block (ram,0x01632d90) */
/* WARNING: Removing unreachable block (ram,0x01632d98) */
/* WARNING: Removing unreachable block (ram,0x01632c68) */
/* WARNING: Removing unreachable block (ram,0x01632c84) */
/* WARNING: Removing unreachable block (ram,0x01632c90) */
/* WARNING: Removing unreachable block (ram,0x01632c98) */
/* WARNING: Removing unreachable block (ram,0x01632ca0) */
/* WARNING: Removing unreachable block (ram,0x01632c20) */
/* WARNING: Removing unreachable block (ram,0x01632c28) */
/* WARNING: Removing unreachable block (ram,0x01632c44) */
/* WARNING: Removing unreachable block (ram,0x01632bd0) */
/* WARNING: Removing unreachable block (ram,0x01632bd8) */
/* WARNING: Removing unreachable block (ram,0x01632bf4) */
/* WARNING: Removing unreachable block (ram,0x01632c0c) */
/* WARNING: Removing unreachable block (ram,0x01632ba4) */
/* WARNING: Removing unreachable block (ram,0x01632bac) */
/* WARNING: Removing unreachable block (ram,0x01632bc4) */
/* WARNING: Removing unreachable block (ram,0x01632b74) */
/* WARNING: Removing unreachable block (ram,0x01632b7c) */
/* WARNING: Removing unreachable block (ram,0x01632b90) */
/* WARNING: Removing unreachable block (ram,0x01632b40) */
/* WARNING: Removing unreachable block (ram,0x01632b48) */
/* WARNING: Removing unreachable block (ram,0x01632b64) */
/* WARNING: Removing unreachable block (ram,0x01632adc) */
/* WARNING: Removing unreachable block (ram,0x01632aec) */
/* WARNING: Removing unreachable block (ram,0x01632af4) */
/* WARNING: Removing unreachable block (ram,0x01632af8) */
/* WARNING: Removing unreachable block (ram,0x01632b14) */
/* WARNING: Removing unreachable block (ram,0x01632b2c) */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x029d2fa0) */
/* WARNING: Removing unreachable block (ram,0x01632dac) */
/* WARNING: Removing unreachable block (ram,0x01632db4) */

undefined1 *
Core_Analytics_AnalyticsManager__StartEventBatch
          (long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x19;
  int iVar16;
  long unaff_x20;
  long *unaff_x21;
  uint uVar17;
  ulong unaff_x22;
  ulong uVar18;
  ulong unaff_x23;
  long unaff_x24;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb565f & 1) == 0) {
    func_0x00f78a20(0x3d7cc48);
    bRam0000000003eb565f = 1;
  }
  plVar7 = *(long **)(param_1 + 0x20);
  uVar11 = /*STR('{ "events": [')*/ uRam0000000003d7cc48;
  puStack_a8 = unaff_x30;
  if (plVar7 == (long *)0x0) {
    auVar20 = func_0x00f78af4();
    uStack_98 = auVar20._8_8_;
    unaff_x19 = auVar20._0_8_;
    puVar3 = auStack_a0;
    puStack_28 = &Core_Analytics_AnalyticsManager__AddEventToBatch;
    unaff_x29 = &puStack_30;
    unaff_x20 = 0x3eb5000;
    plVar15 = param_3;
    puStack_30 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb5660 & 1) == 0) {
      func_0x00f78a20(0x3d21ce0);
      func_0x00f78a20(0x3d3cc20);
      func_0x00f78a20(0x3d3cc28);
      func_0x00f78a20(0x3d66538);
      func_0x00f78a20(0x3d7cc30);
      func_0x00f78a20(0x3d66570);
      func_0x00f78a20(0x3d66580);
      func_0x00f78a20(0x3d7d1e0);
      func_0x00f78a20(0x3d66568);
      func_0x00f78a20(0x3d66fd8);
      func_0x00f78a20(0x3d66578);
      func_0x00f78a20(0x3d66518);
      func_0x00f78a20(0x3d66548);
      func_0x00f78a20(0x3d66588);
      bRam0000000003eb5660 = 1;
    }
    unaff_x21 = param_3;
    if (((ulong)param_3 & 1) == 0) {
      plVar7 = (long *)unaff_x19[4];
      if (plVar7 != (long *)0x0) {
        puStack_a8 = &UNK_01632a9c;
        register0x00000008 = (BADSPACEBASE *)auStack_a0;
        uVar11 = /*STR(',')*/ uRam0000000003d66fd8;
        goto code_r0x029d2f8c;
      }
    }
    else {
      plVar7 = unaff_x19 + 4;
      unaff_x19 = plVar7;
      if (*plVar7 != 0) {
        unaff_x22 = 0x3d7cc30;
        plVar15 = (long *)0x0;
        /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*plVar7,/*STR('{')*/ uRam0000000003d7cc30,0);
        auVar20._8_8_ = /*STR('"event_id": "')*/ uRam0000000003d66570;
        auVar20._0_8_ = *plVar7;
        if (*plVar7 != 0) {
          unaff_x20 = 0x3d21ce0;
          plVar15 = (long *)0x0;
          puVar19 = &UNK_01632adc;
          goto code_r0x029d2c70;
        }
      }
    }
    lVar8 = func_0x00f78af4();
    puStack_a8 = &Core_Analytics_AnalyticsManager__EndEventBatch;
    if ((bRam0000000003eb5661 & 1) == 0) {
      func_0x00f78a20(0x3d76b40);
      bRam0000000003eb5661 = 1;
    }
    plVar7 = *(long **)(lVar8 + 0x20);
    if (plVar7 == (long *)0x0) {
      auVar20 = func_0x00f78af4();
      lVar8 = auVar20._0_8_;
      uVar11 = /*Core.Analytics.AnalyticsManager$$CreatePOSTRequest*/ func_0x01632e78(lVar8,*(undefined8 *)(lVar8 + 0x18),auVar20._8_8_,plVar15);
      /*Core.Analytics.AnalyticsManager$$SendEventBatch*/ func_0x01633008(lVar8,uVar11);
      return (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    register0x00000008 = (BADSPACEBASE *)auStack_a0;
    unaff_x20 = 0x3eb5000;
    uVar11 = /*STR('] }')*/ uRam0000000003d76b40;
  }
code_r0x029d2f8c:
  param_3 = unaff_x21;
  auVar20._8_8_ = uVar11;
  auVar20._0_8_ = plVar7;
  plVar15 = (long *)0x0;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = puStack_a8;
  unaff_x29 = (undefined1 **)((long)register0x00000008 + -0x10);
  puVar19 = &UNK_029d2fa0;
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x20);
code_r0x029d2c70:
  do {
    lVar8 = auVar20._8_8_;
    puVar10 = auVar20._0_8_;
    *(long *)(puVar3 + -0x40) = unaff_x24;
    *(ulong *)(puVar3 + -0x38) = unaff_x23;
    *(ulong *)(puVar3 + -0x30) = unaff_x22;
    *(long **)(puVar3 + -0x28) = param_3;
    *(long *)(puVar3 + -0x20) = unaff_x20;
    *(long **)(puVar3 + -0x18) = plVar7;
    *(undefined1 ***)(puVar3 + -0x10) = unaff_x29;
    *(undefined **)(puVar3 + -8) = puVar19;
    if (lVar8 == 0) {
      return puVar10;
    }
    unaff_x23 = *(ulong *)(puVar10 + 0x10);
    if (unaff_x23 == 0) {
      func_0x00f78af4();
      lVar8 = unaff_x20;
      plVar7 = param_3;
      uVar18 = unaff_x22;
code_r0x029d2d74:
      uVar11 = func_0x00f78b24();
      puVar19 = &System_Text_StringBuilder__AppendHelper;
      auVar20 = func_0x00f78ac0(uVar11,0);
      param_3 = plVar15;
      plVar14 = param_4;
    }
    else {
      uVar2 = *(uint *)(puVar10 + 0x20);
      unaff_x24 = (long)(int)uVar2;
      uVar1 = *(uint *)(lVar8 + 0x10);
      plVar7 = (long *)(ulong)uVar1;
      uVar17 = uVar1 + uVar2;
      uVar18 = (ulong)uVar17;
      if ((int)uVar17 < *(int *)(unaff_x23 + 0x18)) {
        if ((int)uVar1 < 3) {
          if ((int)uVar1 < 1) goto code_r0x029d2d54;
          plVar15 = (long *)0x0;
          uVar5 = /*System.String$$get_Chars*/ func_0x029c5420(lVar8,0);
          if (uVar2 < *(uint *)(unaff_x23 + 0x18)) {
            *(undefined2 *)(unaff_x23 + unaff_x24 * 2 + 0x20) = uVar5;
            if (uVar1 < 2) {
code_r0x029d2d54:
              *(uint *)(puVar10 + 0x20) = uVar17;
              return puVar10;
            }
            plVar15 = (long *)0x0;
            uVar5 = /*System.String$$get_Chars*/ func_0x029c5420(lVar8,1);
            if (uVar2 + 1 < *(uint *)(unaff_x23 + 0x18)) {
              *(undefined2 *)(unaff_x23 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar5;
              goto code_r0x029d2d54;
            }
          }
        }
        else {
          iVar6 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          if (uVar2 < *(uint *)(unaff_x23 + 0x18)) {
            /*System.String$$wstrcpy*/ func_0x029cb054(unaff_x23 + unaff_x24 * 2 + 0x20,lVar8 + iVar6,plVar7,0);
            goto code_r0x029d2d54;
          }
        }
        goto code_r0x029d2d74;
      }
      puVar19 = &UNK_029d2cf4;
      param_3 = plVar15;
      plVar14 = param_4;
    }
    lVar13 = auVar20._8_8_;
    puVar9 = auVar20._0_8_;
    *(long *)(puVar3 + -0x60) = lVar8;
    *(undefined1 **)(puVar3 + -0x58) = puVar10;
    *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x48) = puVar19;
    if (lVar13 != 0) {
      iVar6 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
      lVar8 = lVar13 + iVar6;
      plVar14 = (long *)(ulong)*(uint *)(lVar13 + 0x10);
      puVar10 = *(undefined1 **)(puVar3 + -0x50);
      puVar19 = *(undefined **)(puVar3 + -0x48);
      puVar4 = puVar3 + -0x40;
      auVar21._8_8_ = uVar18;
      auVar21._0_8_ = *(undefined8 *)(puVar3 + -0x58);
      plVar15 = *(long **)(puVar3 + -0x60);
      param_3 = plVar7;
code_r0x029d2b54:
      unaff_x22 = auVar21._8_8_;
      *(long *)(puVar4 + -0x40) = unaff_x24;
      *(ulong *)(puVar4 + -0x38) = unaff_x23;
      *(ulong *)(puVar4 + -0x30) = unaff_x22;
      *(long **)(puVar4 + -0x28) = param_3;
      *(long **)(puVar4 + -0x20) = plVar15;
      *(long *)(puVar4 + -0x18) = auVar21._0_8_;
      *(undefined1 **)(puVar4 + -0x10) = puVar10;
      *(undefined **)(puVar4 + -8) = puVar19;
      unaff_x29 = (undefined1 **)(puVar4 + -0x10);
      iVar6 = (int)plVar14;
      if (-1 < iVar6) {
        lVar13 = *(long *)(puVar9 + 0x10);
        if (lVar13 != 0) {
          iVar16 = *(int *)(puVar9 + 0x20);
          uVar17 = iVar16 + iVar6;
          unaff_x22 = (ulong)uVar17;
          if ((int)uVar17 <= *(int *)(lVar13 + 0x18)) goto code_r0x029d2be8;
          uVar1 = *(int *)(lVar13 + 0x18) - iVar16;
          unaff_x23 = (ulong)uVar1;
          if (0 < (int)uVar1) {
            /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar8,lVar13,iVar16,unaff_x23);
            param_3 = plVar14;
            if (*(long *)(puVar9 + 0x10) == 0) goto code_r0x029d2c08;
            *(int *)(puVar9 + 0x20) = (int)*(undefined8 *)(*(long *)(puVar9 + 0x10) + 0x18);
          }
          uVar17 = iVar6 - uVar1;
          plVar14 = (long *)(ulong)uVar17;
          /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(puVar9,plVar14);
          lVar13 = *(long *)(puVar9 + 0x10);
          lVar8 = lVar8 + (long)(int)uVar1 * 2;
          iVar16 = 0;
code_r0x029d2be8:
          /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar8,lVar13,iVar16,plVar14);
          *(uint *)(puVar9 + 0x20) = uVar17;
          return puVar9;
        }
code_r0x029d2c08:
        func_0x00f78af4();
      }
      uVar11 = func_0x00f78a24(0x3d6b268);
      plVar7 = (long *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
      func_0x00f78a24(0x3d1fcf8);
      unaff_x20 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d7c5c8);
      param_4 = (long *)0x0;
      plVar15 = plVar7;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(unaff_x20,uVar11);
      uVar11 = func_0x00f78a24(0x3d5dbe8);
      puVar19 = &System_Text_StringBuilder__Append;
      auVar20 = func_0x00f78ac0(unaff_x20,uVar11);
      puVar3 = puVar4 + -0x40;
      goto code_r0x029d2c70;
    }
    auVar21 = func_0x00f78af4();
    unaff_x22 = auVar21._8_8_;
    puVar9 = auVar21._0_8_;
    puVar4 = puVar3 + -0xa0;
    *(long *)(puVar3 + -0xa0) = unaff_x24;
    *(ulong *)(puVar3 + -0x98) = unaff_x23;
    *(ulong *)(puVar3 + -0x90) = uVar18;
    *(long **)(puVar3 + -0x88) = plVar7;
    *(long *)(puVar3 + -0x80) = lVar8;
    *(undefined1 **)(puVar3 + -0x78) = puVar10;
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x50;
    *(undefined **)(puVar3 + -0x68) = &System_Text_StringBuilder__Append;
    puVar10 = puVar3 + -0x70;
    unaff_x23 = 0x3eb9000;
    param_4 = plVar14;
    if ((bRam0000000003eb948a & 1) == 0) {
      func_0x00f78a20(0x3d208b0);
      bRam0000000003eb948a = 1;
    }
    iVar6 = (int)param_3;
    if (iVar6 < 0) {
code_r0x029d2e7c:
      uVar11 = func_0x00f78a24(0x3d6de28);
      uVar12 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
      func_0x00f78a24(0x3d1fcf8);
      plVar14 = (long *)func_0x00f78aec();
      uVar11 = 0x3d7b9d0;
code_r0x029d2ee8:
      uVar11 = func_0x00f78a24(uVar11);
      param_4 = (long *)0x0;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(plVar14,uVar11,uVar12);
      uVar11 = func_0x00f78a24(0x3d5dc00);
      func_0x00f78ac0(plVar14,uVar11);
    }
    else {
      iVar16 = (int)plVar14;
      if (iVar16 < 0) {
        uVar11 = func_0x00f78a24(0x3d75fa8);
        uVar12 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
        func_0x00f78a24(0x3d1fcf8);
        plVar14 = (long *)func_0x00f78aec();
        uVar11 = 0x3d78638;
        goto code_r0x029d2ee8;
      }
      if ((iVar16 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
        return puVar9;
      }
      if (unaff_x22 != 0) {
        if (iVar16 == 0) {
          return puVar9;
        }
        if (iVar6 <= *(int *)(unaff_x22 + 0x10) - iVar16) {
          iVar6 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar8 = unaff_x22 + ((ulong)param_3 & 0xffffffff) * 2 + (long)iVar6;
          puVar19 = &UNK_029d2e58;
          plVar15 = plVar14;
          goto code_r0x029d2b54;
        }
        goto code_r0x029d2e7c;
      }
      if (iVar6 == 0 && iVar16 == 0) {
        return puVar9;
      }
    }
    func_0x00f78a24(0x3d1fcf0);
    uVar11 = func_0x00f78aec();
    uVar12 = func_0x00f78a24(0x3d7c5a0);
    plVar15 = (long *)0x0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar11,uVar12);
    uVar12 = func_0x00f78a24(0x3d5dc00);
    uVar12 = func_0x00f78ac0(uVar11,uVar12);
    *(long **)(puVar3 + -0xc0) = plVar14;
    *(undefined8 *)(puVar3 + -0xb8) = uVar11;
    *(undefined1 **)(puVar3 + -0xb0) = puVar10;
    *(undefined **)(puVar3 + -0xa8) = &System_Text_StringBuilder__AppendLine;
    uVar11 = /*System.Environment$$get_NewLine*/ func_0x02aca040(0);
    auVar20._8_8_ = uVar11;
    auVar20._0_8_ = uVar12;
    unaff_x29 = *(undefined1 ***)(puVar3 + -0xb0);
    puVar19 = *(undefined **)(puVar3 + -0xa8);
    unaff_x20 = *(long *)(puVar3 + -0xc0);
    plVar7 = *(long **)(puVar3 + -0xb8);
    puVar3 = puVar3 + -0xa0;
  } while( true );
}



// ============================================================
// RVA: 0x1632994 | Core.Analytics.AnalyticsManager.AddEventToBatch
// ============================================================

/* WARNING: Possible PIC construction at 0x01632a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632c4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01632d6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x029d2fa0) */
/* WARNING: Removing unreachable block (ram,0x01632d60) */
/* WARNING: Removing unreachable block (ram,0x01632d70) */
/* WARNING: Removing unreachable block (ram,0x01632d7c) */
/* WARNING: Removing unreachable block (ram,0x01632d8c) */
/* WARNING: Removing unreachable block (ram,0x01632d14) */
/* WARNING: Removing unreachable block (ram,0x01632d1c) */
/* WARNING: Removing unreachable block (ram,0x01632ce8) */
/* WARNING: Removing unreachable block (ram,0x01632d2c) */
/* WARNING: Removing unreachable block (ram,0x01632d30) */
/* WARNING: Removing unreachable block (ram,0x01632d3c) */
/* WARNING: Removing unreachable block (ram,0x01632d64) */
/* WARNING: Removing unreachable block (ram,0x01632d68) */
/* WARNING: Removing unreachable block (ram,0x01632d48) */
/* WARNING: Removing unreachable block (ram,0x01632d4c) */
/* WARNING: Removing unreachable block (ram,0x01632cf0) */
/* WARNING: Removing unreachable block (ram,0x01632cf4) */
/* WARNING: Removing unreachable block (ram,0x01632d08) */
/* WARNING: Removing unreachable block (ram,0x01632cc0) */
/* WARNING: Removing unreachable block (ram,0x01632cc8) */
/* WARNING: Removing unreachable block (ram,0x01632cdc) */
/* WARNING: Removing unreachable block (ram,0x01632c50) */
/* WARNING: Removing unreachable block (ram,0x01632c5c) */
/* WARNING: Removing unreachable block (ram,0x01632d90) */
/* WARNING: Removing unreachable block (ram,0x01632d98) */
/* WARNING: Removing unreachable block (ram,0x01632c68) */
/* WARNING: Removing unreachable block (ram,0x01632c84) */
/* WARNING: Removing unreachable block (ram,0x01632c90) */
/* WARNING: Removing unreachable block (ram,0x01632c98) */
/* WARNING: Removing unreachable block (ram,0x01632ca0) */
/* WARNING: Removing unreachable block (ram,0x01632c20) */
/* WARNING: Removing unreachable block (ram,0x01632c28) */
/* WARNING: Removing unreachable block (ram,0x01632c44) */
/* WARNING: Removing unreachable block (ram,0x01632bd0) */
/* WARNING: Removing unreachable block (ram,0x01632bd8) */
/* WARNING: Removing unreachable block (ram,0x01632bf4) */
/* WARNING: Removing unreachable block (ram,0x01632c0c) */
/* WARNING: Removing unreachable block (ram,0x01632ba4) */
/* WARNING: Removing unreachable block (ram,0x01632bac) */
/* WARNING: Removing unreachable block (ram,0x01632bc4) */
/* WARNING: Removing unreachable block (ram,0x01632b74) */
/* WARNING: Removing unreachable block (ram,0x01632b7c) */
/* WARNING: Removing unreachable block (ram,0x01632b90) */
/* WARNING: Removing unreachable block (ram,0x01632b40) */
/* WARNING: Removing unreachable block (ram,0x01632b48) */
/* WARNING: Removing unreachable block (ram,0x01632b64) */
/* WARNING: Removing unreachable block (ram,0x01632adc) */
/* WARNING: Removing unreachable block (ram,0x01632aec) */
/* WARNING: Removing unreachable block (ram,0x01632af4) */
/* WARNING: Removing unreachable block (ram,0x01632af8) */
/* WARNING: Removing unreachable block (ram,0x01632b14) */
/* WARNING: Removing unreachable block (ram,0x01632b2c) */
/* WARNING: Removing unreachable block (ram,0x01632dac) */
/* WARNING: Removing unreachable block (ram,0x01632db4) */

undefined1 *
Core_Analytics_AnalyticsManager__AddEventToBatch
          (long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  uint uVar17;
  ulong unaff_x22;
  ulong uVar18;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 *******pppppppuVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long lStack_a0;
  long *plStack_98;
  undefined8 ******ppppppuStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  pppppppuVar19 = (undefined8 *******)&stack0xfffffffffffffff0;
  plVar13 = param_3;
  uStack_78 = param_2;
  if ((bRam0000000003eb5660 & 1) == 0) {
    func_0x00f78a20(0x3d21ce0);
    func_0x00f78a20(0x3d3cc20);
    func_0x00f78a20(0x3d3cc28);
    func_0x00f78a20(0x3d66538);
    func_0x00f78a20(0x3d7cc30);
    func_0x00f78a20(0x3d66570);
    func_0x00f78a20(0x3d66580);
    func_0x00f78a20(0x3d7d1e0);
    func_0x00f78a20(0x3d66568);
    func_0x00f78a20(0x3d66fd8);
    func_0x00f78a20(0x3d66578);
    func_0x00f78a20(0x3d66518);
    func_0x00f78a20(0x3d66548);
    func_0x00f78a20(0x3d66588);
    bRam0000000003eb5660 = 1;
  }
  if (((ulong)param_3 & 1) == 0) {
    plVar6 = (long *)param_1[4];
    if (plVar6 == (long *)0x0) goto LAB_01632de0;
    puStack_88 = (undefined *)0x1632a9c;
    uVar11 = /*STR(',')*/ uRam0000000003d66fd8;
    lVar7 = 0x3eb5000;
    ppppppuStack_90 = pppppppuVar19;
  }
  else {
    plVar6 = param_1 + 4;
    param_1 = plVar6;
    if (*plVar6 != 0) {
      unaff_x22 = 0x3d7cc30;
      plVar13 = (long *)0x0;
      /*System.Text.StringBuilder$$AppendLine*/ func_0x029d2f8c(*plVar6,/*STR('{')*/ uRam0000000003d7cc30,0);
      auVar21._8_8_ = /*STR('"event_id": "')*/ uRam0000000003d66570;
      auVar21._0_8_ = *plVar6;
      if (*plVar6 != 0) {
        lVar7 = 0x3d21ce0;
        plVar14 = (long *)0x0;
        puVar20 = (undefined *)0x1632adc;
        plVar13 = (long *)auStack_80;
        goto code_r0x029d2c70;
      }
    }
LAB_01632de0:
    lVar7 = func_0x00f78af4();
    lStack_a0 = 0x3eb5000;
    puStack_88 = &Core_Analytics_AnalyticsManager__EndEventBatch;
    plStack_98 = param_1;
    ppppppuStack_90 = pppppppuVar19;
    if ((bRam0000000003eb5661 & 1) == 0) {
      func_0x00f78a20(0x3d76b40);
      bRam0000000003eb5661 = 1;
    }
    plVar6 = *(long **)(lVar7 + 0x20);
    uVar11 = /*STR('] }')*/ uRam0000000003d76b40;
    param_1 = plStack_98;
    lVar7 = lStack_a0;
    if (plVar6 == (long *)0x0) {
      auVar21 = func_0x00f78af4();
      lVar7 = auVar21._0_8_;
      uVar11 = /*Core.Analytics.AnalyticsManager$$CreatePOSTRequest*/ func_0x01632e78(lVar7,*(undefined8 *)(lVar7 + 0x18),auVar21._8_8_,plVar13);
      /*Core.Analytics.AnalyticsManager$$SendEventBatch*/ func_0x01633008(lVar7,uVar11);
      return (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
  }
  auVar21._8_8_ = uVar11;
  auVar21._0_8_ = plVar6;
  plVar14 = (long *)0x0;
  pppppppuVar19 = &ppppppuStack_90;
  puVar20 = &UNK_029d2fa0;
  plVar13 = &lStack_a0;
  lStack_a0 = lVar7;
  plStack_98 = param_1;
code_r0x029d2c70:
  do {
    lVar9 = auVar21._8_8_;
    puVar10 = auVar21._0_8_;
    *(long *)((long)plVar13 + -0x40) = unaff_x24;
    *(ulong *)((long)plVar13 + -0x38) = unaff_x23;
    *(ulong *)((long)plVar13 + -0x30) = unaff_x22;
    *(long **)((long)plVar13 + -0x28) = param_3;
    *(long *)((long)plVar13 + -0x20) = lVar7;
    *(long **)((long)plVar13 + -0x18) = plVar6;
    *(undefined8 ********)((long)plVar13 + -0x10) = pppppppuVar19;
    *(undefined **)((long)plVar13 + -8) = puVar20;
    if (lVar9 == 0) {
      return puVar10;
    }
    unaff_x23 = *(ulong *)(puVar10 + 0x10);
    if (unaff_x23 == 0) {
      func_0x00f78af4();
      lVar9 = lVar7;
      plVar6 = param_3;
      uVar18 = unaff_x22;
code_r0x029d2d74:
      uVar11 = func_0x00f78b24();
      puVar20 = &System_Text_StringBuilder__AppendHelper;
      auVar21 = func_0x00f78ac0(uVar11,0);
      param_3 = plVar14;
      plVar15 = param_4;
    }
    else {
      uVar2 = *(uint *)(puVar10 + 0x20);
      unaff_x24 = (long)(int)uVar2;
      uVar1 = *(uint *)(lVar9 + 0x10);
      plVar6 = (long *)(ulong)uVar1;
      uVar17 = uVar1 + uVar2;
      uVar18 = (ulong)uVar17;
      if ((int)uVar17 < *(int *)(unaff_x23 + 0x18)) {
        if ((int)uVar1 < 3) {
          if ((int)uVar1 < 1) goto code_r0x029d2d54;
          plVar14 = (long *)0x0;
          uVar4 = /*System.String$$get_Chars*/ func_0x029c5420(lVar9,0);
          if (uVar2 < *(uint *)(unaff_x23 + 0x18)) {
            *(undefined2 *)(unaff_x23 + unaff_x24 * 2 + 0x20) = uVar4;
            if (uVar1 < 2) {
code_r0x029d2d54:
              *(uint *)(puVar10 + 0x20) = uVar17;
              return puVar10;
            }
            plVar14 = (long *)0x0;
            uVar4 = /*System.String$$get_Chars*/ func_0x029c5420(lVar9,1);
            if (uVar2 + 1 < *(uint *)(unaff_x23 + 0x18)) {
              *(undefined2 *)(unaff_x23 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar4;
              goto code_r0x029d2d54;
            }
          }
        }
        else {
          iVar5 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          if (uVar2 < *(uint *)(unaff_x23 + 0x18)) {
            /*System.String$$wstrcpy*/ func_0x029cb054(unaff_x23 + unaff_x24 * 2 + 0x20,lVar9 + iVar5,plVar6,0);
            goto code_r0x029d2d54;
          }
        }
        goto code_r0x029d2d74;
      }
      puVar20 = &UNK_029d2cf4;
      param_3 = plVar14;
      plVar15 = param_4;
    }
    lVar7 = auVar21._8_8_;
    puVar8 = auVar21._0_8_;
    *(long *)((long)plVar13 + -0x60) = lVar9;
    *(undefined1 **)((long)plVar13 + -0x58) = puVar10;
    *(undefined1 **)((long)plVar13 + -0x50) = (undefined1 *)((long)plVar13 + -0x10);
    *(undefined **)((long)plVar13 + -0x48) = puVar20;
    if (lVar7 != 0) {
      iVar5 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
      lVar9 = lVar7 + iVar5;
      plVar15 = (long *)(ulong)*(uint *)(lVar7 + 0x10);
      puVar10 = *(undefined1 **)((long)plVar13 + -0x50);
      puVar20 = *(undefined **)((long)plVar13 + -0x48);
      puVar3 = (undefined1 *)((long)plVar13 + -0x40);
      auVar22._8_8_ = uVar18;
      auVar22._0_8_ = *(undefined8 *)((long)plVar13 + -0x58);
      plVar13 = *(long **)((long)plVar13 + -0x60);
      param_3 = plVar6;
code_r0x029d2b54:
      unaff_x22 = auVar22._8_8_;
      *(long *)(puVar3 + -0x40) = unaff_x24;
      *(ulong *)(puVar3 + -0x38) = unaff_x23;
      *(ulong *)(puVar3 + -0x30) = unaff_x22;
      *(long **)(puVar3 + -0x28) = param_3;
      *(long **)(puVar3 + -0x20) = plVar13;
      *(long *)(puVar3 + -0x18) = auVar22._0_8_;
      *(undefined1 **)(puVar3 + -0x10) = puVar10;
      *(undefined **)(puVar3 + -8) = puVar20;
      pppppppuVar19 = (undefined8 *******)(puVar3 + -0x10);
      iVar5 = (int)plVar15;
      if (-1 < iVar5) {
        lVar7 = *(long *)(puVar8 + 0x10);
        if (lVar7 != 0) {
          iVar16 = *(int *)(puVar8 + 0x20);
          uVar17 = iVar16 + iVar5;
          unaff_x22 = (ulong)uVar17;
          if ((int)uVar17 <= *(int *)(lVar7 + 0x18)) goto code_r0x029d2be8;
          uVar1 = *(int *)(lVar7 + 0x18) - iVar16;
          unaff_x23 = (ulong)uVar1;
          if (0 < (int)uVar1) {
            /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar9,lVar7,iVar16,unaff_x23);
            param_3 = plVar15;
            if (*(long *)(puVar8 + 0x10) == 0) goto code_r0x029d2c08;
            *(int *)(puVar8 + 0x20) = (int)*(undefined8 *)(*(long *)(puVar8 + 0x10) + 0x18);
          }
          uVar17 = iVar5 - uVar1;
          plVar15 = (long *)(ulong)uVar17;
          /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(puVar8,plVar15);
          lVar7 = *(long *)(puVar8 + 0x10);
          lVar9 = lVar9 + (long)(int)uVar1 * 2;
          iVar16 = 0;
code_r0x029d2be8:
          /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar9,lVar7,iVar16,plVar15);
          *(uint *)(puVar8 + 0x20) = uVar17;
          return puVar8;
        }
code_r0x029d2c08:
        func_0x00f78af4();
      }
      uVar11 = func_0x00f78a24(0x3d6b268);
      plVar6 = (long *)/*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
      func_0x00f78a24(0x3d1fcf8);
      lVar7 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d7c5c8);
      param_4 = (long *)0x0;
      plVar14 = plVar6;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(lVar7,uVar11);
      uVar11 = func_0x00f78a24(0x3d5dbe8);
      puVar20 = &System_Text_StringBuilder__Append;
      auVar21 = func_0x00f78ac0(lVar7,uVar11);
      plVar13 = (long *)(puVar3 + -0x40);
      goto code_r0x029d2c70;
    }
    auVar22 = func_0x00f78af4();
    unaff_x22 = auVar22._8_8_;
    puVar8 = auVar22._0_8_;
    puVar3 = (undefined1 *)((long)plVar13 + -0xa0);
    *(long *)((long)plVar13 + -0xa0) = unaff_x24;
    *(ulong *)((long)plVar13 + -0x98) = unaff_x23;
    *(ulong *)((long)plVar13 + -0x90) = uVar18;
    *(long **)((long)plVar13 + -0x88) = plVar6;
    *(long *)((long)plVar13 + -0x80) = lVar9;
    *(undefined1 **)((long)plVar13 + -0x78) = puVar10;
    *(undefined1 **)((long)plVar13 + -0x70) = (undefined1 *)((long)plVar13 + -0x50);
    *(undefined **)((long)plVar13 + -0x68) = &System_Text_StringBuilder__Append;
    puVar10 = (undefined1 *)((long)plVar13 + -0x70);
    unaff_x23 = 0x3eb9000;
    param_4 = plVar15;
    if ((bRam0000000003eb948a & 1) == 0) {
      func_0x00f78a20(0x3d208b0);
      bRam0000000003eb948a = 1;
    }
    iVar5 = (int)param_3;
    if (iVar5 < 0) {
code_r0x029d2e7c:
      uVar11 = func_0x00f78a24(0x3d6de28);
      uVar12 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
      func_0x00f78a24(0x3d1fcf8);
      plVar15 = (long *)func_0x00f78aec();
      uVar11 = 0x3d7b9d0;
code_r0x029d2ee8:
      uVar11 = func_0x00f78a24(uVar11);
      param_4 = (long *)0x0;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(plVar15,uVar11,uVar12);
      uVar11 = func_0x00f78a24(0x3d5dc00);
      func_0x00f78ac0(plVar15,uVar11);
    }
    else {
      iVar16 = (int)plVar15;
      if (iVar16 < 0) {
        uVar11 = func_0x00f78a24(0x3d75fa8);
        uVar12 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar11,0);
        func_0x00f78a24(0x3d1fcf8);
        plVar15 = (long *)func_0x00f78aec();
        uVar11 = 0x3d78638;
        goto code_r0x029d2ee8;
      }
      if ((iVar16 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
        return puVar8;
      }
      if (unaff_x22 != 0) {
        if (iVar16 == 0) {
          return puVar8;
        }
        if (iVar5 <= *(int *)(unaff_x22 + 0x10) - iVar16) {
          iVar5 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar9 = unaff_x22 + ((ulong)param_3 & 0xffffffff) * 2 + (long)iVar5;
          puVar20 = &UNK_029d2e58;
          plVar13 = plVar15;
          goto code_r0x029d2b54;
        }
        goto code_r0x029d2e7c;
      }
      if (iVar5 == 0 && iVar16 == 0) {
        return puVar8;
      }
    }
    func_0x00f78a24(0x3d1fcf0);
    uVar11 = func_0x00f78aec();
    uVar12 = func_0x00f78a24(0x3d7c5a0);
    plVar14 = (long *)0x0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar11,uVar12);
    uVar12 = func_0x00f78a24(0x3d5dc00);
    uVar12 = func_0x00f78ac0(uVar11,uVar12);
    *(long **)((long)plVar13 + -0xc0) = plVar15;
    *(undefined8 *)((long)plVar13 + -0xb8) = uVar11;
    *(undefined1 **)((long)plVar13 + -0xb0) = puVar10;
    *(undefined **)((long)plVar13 + -0xa8) = &System_Text_StringBuilder__AppendLine;
    uVar11 = /*System.Environment$$get_NewLine*/ func_0x02aca040(0);
    auVar21._8_8_ = uVar11;
    auVar21._0_8_ = uVar12;
    pppppppuVar19 = *(undefined8 ********)((long)plVar13 + -0xb0);
    puVar20 = *(undefined **)((long)plVar13 + -0xa8);
    lVar7 = *(long *)((long)plVar13 + -0xc0);
    plVar6 = *(long **)((long)plVar13 + -0xb8);
    plVar13 = (long *)((long)plVar13 + -0xa0);
  } while( true );
}



// ============================================================
// RVA: 0x1632de4 | Core.Analytics.AnalyticsManager.EndEventBatch
// ============================================================

/* WARNING: Possible PIC construction at 0x029d2f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x029d2cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x029d2e58) */
/* WARNING: Removing unreachable block (ram,0x029d2fa0) */
/* WARNING: Removing unreachable block (ram,0x029d2cf4) */

long Core_Analytics_AnalyticsManager__EndEventBatch
               (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  long unaff_x20;
  ulong unaff_x21;
  uint uVar17;
  ulong unaff_x22;
  ulong uVar18;
  ulong unaff_x23;
  long unaff_x24;
  undefined1 *puVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  if ((bRam0000000003eb5661 & 1) == 0) {
    func_0x00f78a20(0x3d76b40);
    bRam0000000003eb5661 = 1;
  }
  uVar7 = *(ulong *)(param_1 + 0x20);
  auVar21._8_8_ = /*STR('] }')*/ uRam0000000003d76b40;
  auVar21._0_8_ = uVar7;
  if (uVar7 == 0) {
    auVar21 = func_0x00f78af4();
    lVar9 = auVar21._0_8_;
    uVar10 = /*Core.Analytics.AnalyticsManager$$CreatePOSTRequest*/ func_0x01632e78(lVar9,*(undefined8 *)(lVar9 + 0x18),auVar21._8_8_,param_3);
    /*Core.Analytics.AnalyticsManager$$SendEventBatch*/ func_0x01633008(lVar9,uVar10);
    return 1;
  }
  uVar14 = 0;
  puVar19 = &stack0xfffffffffffffff0;
  puVar20 = &UNK_029d2fa0;
  puVar3 = &stack0xffffffffffffffe0;
code_r0x029d2c70:
  do {
    lVar9 = auVar21._8_8_;
    lVar12 = auVar21._0_8_;
    *(long *)(puVar3 + -0x40) = unaff_x24;
    *(ulong *)(puVar3 + -0x38) = unaff_x23;
    *(ulong *)(puVar3 + -0x30) = unaff_x22;
    *(ulong *)(puVar3 + -0x28) = unaff_x21;
    *(long *)(puVar3 + -0x20) = unaff_x20;
    *(ulong *)(puVar3 + -0x18) = uVar7;
    *(undefined1 **)(puVar3 + -0x10) = puVar19;
    *(undefined **)(puVar3 + -8) = puVar20;
    if (lVar9 == 0) {
      return lVar12;
    }
    unaff_x23 = *(ulong *)(lVar12 + 0x10);
    if (unaff_x23 == 0) {
      func_0x00f78af4();
      lVar9 = unaff_x20;
      uVar7 = unaff_x21;
      uVar18 = unaff_x22;
code_r0x029d2d74:
      uVar10 = func_0x00f78b24();
      puVar20 = &System_Text_StringBuilder__AppendHelper;
      auVar21 = func_0x00f78ac0(uVar10,0);
      unaff_x21 = uVar14;
      uVar15 = param_4;
    }
    else {
      uVar2 = *(uint *)(lVar12 + 0x20);
      unaff_x24 = (long)(int)uVar2;
      uVar1 = *(uint *)(lVar9 + 0x10);
      uVar7 = (ulong)uVar1;
      uVar17 = uVar1 + uVar2;
      uVar18 = (ulong)uVar17;
      if ((int)uVar17 < *(int *)(unaff_x23 + 0x18)) {
        if ((int)uVar1 < 3) {
          if ((int)uVar1 < 1) goto code_r0x029d2d54;
          uVar14 = 0;
          uVar5 = /*System.String$$get_Chars*/ func_0x029c5420(lVar9,0);
          if (uVar2 < *(uint *)(unaff_x23 + 0x18)) {
            *(undefined2 *)(unaff_x23 + unaff_x24 * 2 + 0x20) = uVar5;
            if (uVar1 < 2) {
code_r0x029d2d54:
              *(uint *)(lVar12 + 0x20) = uVar17;
              return lVar12;
            }
            uVar14 = 0;
            uVar5 = /*System.String$$get_Chars*/ func_0x029c5420(lVar9,1);
            if (uVar2 + 1 < *(uint *)(unaff_x23 + 0x18)) {
              *(undefined2 *)(unaff_x23 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar5;
              goto code_r0x029d2d54;
            }
          }
        }
        else {
          iVar6 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          if (uVar2 < *(uint *)(unaff_x23 + 0x18)) {
            /*System.String$$wstrcpy*/ func_0x029cb054(unaff_x23 + unaff_x24 * 2 + 0x20,lVar9 + iVar6,uVar7,0);
            goto code_r0x029d2d54;
          }
        }
        goto code_r0x029d2d74;
      }
      puVar20 = &UNK_029d2cf4;
      unaff_x21 = uVar14;
      uVar15 = param_4;
    }
    lVar13 = auVar21._8_8_;
    lVar8 = auVar21._0_8_;
    *(long *)(puVar3 + -0x60) = lVar9;
    *(long *)(puVar3 + -0x58) = lVar12;
    *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x48) = puVar20;
    if (lVar13 != 0) {
      iVar6 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
      lVar9 = lVar13 + iVar6;
      uVar15 = (ulong)*(uint *)(lVar13 + 0x10);
      puVar19 = *(undefined1 **)(puVar3 + -0x50);
      puVar20 = *(undefined **)(puVar3 + -0x48);
      puVar4 = puVar3 + -0x40;
      auVar22._8_8_ = uVar18;
      auVar22._0_8_ = *(undefined8 *)(puVar3 + -0x58);
      uVar14 = *(ulong *)(puVar3 + -0x60);
      unaff_x21 = uVar7;
code_r0x029d2b54:
      unaff_x22 = auVar22._8_8_;
      *(long *)(puVar4 + -0x40) = unaff_x24;
      *(ulong *)(puVar4 + -0x38) = unaff_x23;
      *(ulong *)(puVar4 + -0x30) = unaff_x22;
      *(ulong *)(puVar4 + -0x28) = unaff_x21;
      *(ulong *)(puVar4 + -0x20) = uVar14;
      *(long *)(puVar4 + -0x18) = auVar22._0_8_;
      *(undefined1 **)(puVar4 + -0x10) = puVar19;
      *(undefined **)(puVar4 + -8) = puVar20;
      puVar19 = puVar4 + -0x10;
      iVar6 = (int)uVar15;
      if (-1 < iVar6) {
        lVar12 = *(long *)(lVar8 + 0x10);
        if (lVar12 != 0) {
          iVar16 = *(int *)(lVar8 + 0x20);
          uVar17 = iVar16 + iVar6;
          unaff_x22 = (ulong)uVar17;
          if ((int)uVar17 <= *(int *)(lVar12 + 0x18)) goto code_r0x029d2be8;
          uVar1 = *(int *)(lVar12 + 0x18) - iVar16;
          unaff_x23 = (ulong)uVar1;
          if (0 < (int)uVar1) {
            /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar9,lVar12,iVar16,unaff_x23);
            unaff_x21 = uVar15;
            if (*(long *)(lVar8 + 0x10) == 0) goto code_r0x029d2c08;
            *(int *)(lVar8 + 0x20) = (int)*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x18);
          }
          uVar17 = iVar6 - uVar1;
          uVar15 = (ulong)uVar17;
          /*System.Text.StringBuilder$$ExpandByABlock*/ func_0x029d27e8(lVar8,uVar15);
          lVar12 = *(long *)(lVar8 + 0x10);
          lVar9 = lVar9 + (long)(int)uVar1 * 2;
          iVar16 = 0;
code_r0x029d2be8:
          /*System.Text.StringBuilder$$ThreadSafeCopy*/ func_0x029d1adc(lVar9,lVar12,iVar16,uVar15);
          *(uint *)(lVar8 + 0x20) = uVar17;
          return lVar8;
        }
code_r0x029d2c08:
        func_0x00f78af4();
      }
      uVar10 = func_0x00f78a24(0x3d6b268);
      uVar7 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar10,0);
      func_0x00f78a24(0x3d1fcf8);
      unaff_x20 = func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d7c5c8);
      param_4 = 0;
      uVar14 = uVar7;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(unaff_x20,uVar10);
      uVar10 = func_0x00f78a24(0x3d5dbe8);
      puVar20 = &System_Text_StringBuilder__Append;
      auVar21 = func_0x00f78ac0(unaff_x20,uVar10);
      puVar3 = puVar4 + -0x40;
      goto code_r0x029d2c70;
    }
    auVar22 = func_0x00f78af4();
    unaff_x22 = auVar22._8_8_;
    lVar8 = auVar22._0_8_;
    puVar4 = puVar3 + -0xa0;
    *(long *)(puVar3 + -0xa0) = unaff_x24;
    *(ulong *)(puVar3 + -0x98) = unaff_x23;
    *(ulong *)(puVar3 + -0x90) = uVar18;
    *(ulong *)(puVar3 + -0x88) = uVar7;
    *(long *)(puVar3 + -0x80) = lVar9;
    *(long *)(puVar3 + -0x78) = lVar12;
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x50;
    *(undefined **)(puVar3 + -0x68) = &System_Text_StringBuilder__Append;
    puVar19 = puVar3 + -0x70;
    unaff_x23 = 0x3eb9000;
    param_4 = uVar15;
    if ((bRam0000000003eb948a & 1) == 0) {
      func_0x00f78a20(0x3d208b0);
      bRam0000000003eb948a = 1;
    }
    iVar6 = (int)unaff_x21;
    if (iVar6 < 0) {
code_r0x029d2e7c:
      uVar10 = func_0x00f78a24(0x3d6de28);
      uVar11 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar10,0);
      func_0x00f78a24(0x3d1fcf8);
      uVar15 = func_0x00f78aec();
      uVar10 = 0x3d7b9d0;
code_r0x029d2ee8:
      uVar10 = func_0x00f78a24(uVar10);
      param_4 = 0;
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar15,uVar10,uVar11);
      uVar10 = func_0x00f78a24(0x3d5dc00);
      func_0x00f78ac0(uVar15,uVar10);
    }
    else {
      iVar16 = (int)uVar15;
      if (iVar16 < 0) {
        uVar10 = func_0x00f78a24(0x3d75fa8);
        uVar11 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar10,0);
        func_0x00f78a24(0x3d1fcf8);
        uVar15 = func_0x00f78aec();
        uVar10 = 0x3d78638;
        goto code_r0x029d2ee8;
      }
      if ((iVar16 == 0) && (*(char *)(*(long *)(/*System.CompatibilitySwitches_TypeInfo*/ lRam0000000003d208b0 + 0xb8) + 1) != '\0')) {
        return lVar8;
      }
      if (unaff_x22 != 0) {
        if (iVar16 == 0) {
          return lVar8;
        }
        if (iVar6 <= *(int *)(unaff_x22 + 0x10) - iVar16) {
          iVar6 = /*System.Runtime.CompilerServices.RuntimeHelpers$$get_OffsetToStringData*/ func_0x02996b64(0);
          lVar9 = unaff_x22 + (unaff_x21 & 0xffffffff) * 2 + (long)iVar6;
          puVar20 = &UNK_029d2e58;
          uVar14 = uVar15;
          goto code_r0x029d2b54;
        }
        goto code_r0x029d2e7c;
      }
      if (iVar6 == 0 && iVar16 == 0) {
        return lVar8;
      }
    }
    func_0x00f78a24(0x3d1fcf0);
    uVar10 = func_0x00f78aec();
    uVar11 = func_0x00f78a24(0x3d7c5a0);
    uVar14 = 0;
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar10,uVar11);
    uVar11 = func_0x00f78a24(0x3d5dc00);
    uVar11 = func_0x00f78ac0(uVar10,uVar11);
    *(ulong *)(puVar3 + -0xc0) = uVar15;
    *(undefined8 *)(puVar3 + -0xb8) = uVar10;
    *(undefined1 **)(puVar3 + -0xb0) = puVar19;
    *(undefined **)(puVar3 + -0xa8) = &System_Text_StringBuilder__AppendLine;
    uVar10 = /*System.Environment$$get_NewLine*/ func_0x02aca040(0);
    auVar21._8_8_ = uVar10;
    auVar21._0_8_ = uVar11;
    puVar19 = *(undefined1 **)(puVar3 + -0xb0);
    puVar20 = *(undefined **)(puVar3 + -0xa8);
    unaff_x20 = *(long *)(puVar3 + -0xc0);
    uVar7 = *(ulong *)(puVar3 + -0xb8);
    puVar3 = puVar3 + -0xa0;
  } while( true );
}



// ============================================================
// RVA: 0x1632e3c | Core.Analytics.AnalyticsManager.SendEventBatch
// ============================================================

undefined8
Core_Analytics_AnalyticsManager__SendEventBatch(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = /*Core.Analytics.AnalyticsManager$$CreatePOSTRequest*/ func_0x01632e78(param_1,*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  /*Core.Analytics.AnalyticsManager$$SendEventBatch*/ func_0x01633008(param_1,uVar1);
  return 1;
}



// ============================================================
// RVA: 0x1632e78 | Core.Analytics.AnalyticsManager.CreatePOSTRequest
// ============================================================

long Core_Analytics_AnalyticsManager__CreatePOSTRequest
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  
  if ((bRam0000000003eb5663 & 1) == 0) {
    func_0x00f78a20(0x3d21438);
    func_0x00f78a20(0x3d25788);
    func_0x00f78a20(0x3d25828);
    func_0x00f78a20(0x3d795e8);
    func_0x00f78a20(0x3d70f00);
    func_0x00f78a20(0x3d6ade8);
    func_0x00f78a20(0x3d6ae18);
    func_0x00f78a20(0x3d77c70);
    bRam0000000003eb5663 = 1;
  }
  lVar3 = func_0x00f78aec(/*UnityEngine.Networking.UnityWebRequest_TypeInfo*/ uRam0000000003d25788);
  /*UnityEngine.Networking.UnityWebRequest$$.ctor*/ func_0x032f8068(lVar3,param_2,/*STR('POST')*/ uRam0000000003d70f00,0);
  uVar4 = func_0x00f78aec(/*UnityEngine.Networking.UploadHandlerRaw_TypeInfo*/ uRam0000000003d25828);
  /*UnityEngine.Networking.UploadHandlerRaw$$.ctor*/ func_0x032fa244(uVar4,param_3,0);
  if (lVar3 != 0) {
    /*UnityEngine.Networking.UnityWebRequest$$set_uploadHandler*/ func_0x032f84d8(lVar3,uVar4,0);
    uVar4 = func_0x00f78aec(/*UnityEngine.Networking.DownloadHandlerBuffer_TypeInfo*/ uRam0000000003d21438);
    /*UnityEngine.Networking.DownloadHandlerBuffer$$.ctor*/ func_0x032f7cec(uVar4,0);
    /*UnityEngine.Networking.UnityWebRequest$$set_downloadHandler*/ func_0x032f83c8(lVar3,uVar4,0);
    /*UnityEngine.Networking.UnityWebRequest$$SetRequestHeader*/ func_0x032f9754(lVar3,/*STR('Content-Type')*/ uRam0000000003d6ae18,/*STR('application/json')*/ uRam0000000003d77c70,0);
    if (param_4 != 0) {
      /*UnityEngine.Networking.UnityWebRequest$$SetRequestHeader*/ func_0x032f9754(lVar3,/*STR('Content-Encoding')*/ uRam0000000003d6ade8,/*STR('gzip')*/ uRam0000000003d795e8,0);
    }
    return lVar3;
  }
  auVar10 = func_0x00f78af4();
  lVar9 = auVar10._8_8_;
  lVar3 = auVar10._0_8_;
  if ((bRam0000000003eb5662 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d7c830);
    bRam0000000003eb5662 = 1;
  }
  if (lVar9 != 0) {
    /*UnityEngine.Networking.UnityWebRequest$$SetRequestHeader*/ func_0x032f9754(lVar9,/*STR('x-api-key')*/ uRam0000000003d7c830,*(undefined8 *)(lVar3 + 0x10),0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*System.DateTime$$get_UtcNow*/ func_0x02a8e4d4(0);
    *(undefined8 *)(lVar3 + 0x48) = uVar4;
    uVar4 = /*UnityEngine.Networking.UnityWebRequest$$SendWebRequest*/ func_0x032f87e8(lVar9,0);
    *(undefined8 *)(lVar3 + 0x50) = uVar4;
    return 1;
  }
  auVar10 = func_0x00f78af4();
  lVar3 = auVar10._0_8_;
  if ((bRam0000000003eb5665 & 1) == 0) {
    func_0x00f78a20(0x3d3cc50);
    func_0x00f78a20(0x3d3cc58);
    func_0x00f78a20(0x3d3cc60);
    func_0x00f78a20(0x3d3cc68);
    func_0x00f78a20(0x3d3cc70);
    bRam0000000003eb5665 = 1;
  }
  lVar9 = *(long *)(lVar3 + 0x38);
  if (lVar9 != 0) {
    uVar5 = auVar10._8_4_;
    uVar2 = *(uint *)(lVar9 + 0x18);
    if ((int)uVar5 <= (int)*(uint *)(lVar9 + 0x18)) {
      uVar2 = uVar5;
    }
    if (*(char *)(lVar3 + 0x6f) == '\0') {
      if (0 < (int)uVar2) {
        uVar7 = 0;
        lVar8 = 0x38;
        do {
          if (*(uint *)(lVar9 + 0x18) <= uVar7) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(*(long *)(lVar9 + 0x10) + lVar8) != 0) {
            Core_Analytics_AnalyticsManager__ReturnCustomParmListToPool(lVar3);
          }
          uVar7 = uVar7 + 1;
          if (uVar2 == uVar7) goto code_r0x01633284;
          lVar8 = lVar8 + 0x20;
          lVar9 = *(long *)(lVar3 + 0x38);
        } while (lVar9 != 0);
        goto code_r0x016332c4;
      }
    }
    else if (0 < (int)uVar5) {
      uVar7 = 0;
      lVar8 = 0x20;
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x10) + lVar8);
        uStack_138 = puVar1[1];
        uStack_140 = *puVar1;
        uStack_128 = puVar1[3];
        uStack_130 = puVar1[2];
        lVar9 = *(long *)(lVar3 + 0x40);
        if (lVar9 == 0) break;
        if (*(int *)(lVar9 + 0x18) < 10) {
          uStack_138 = puVar1[1];
          uStack_140 = *puVar1;
          uStack_128 = puVar1[3];
          uStack_130 = puVar1[2];
        }
        else {
          uVar6 = (ulong)(*(int *)(lVar9 + 0x18) - 1);
          if (*(long *)(*(long *)(lVar9 + 0x10) + uVar6 * 0x20 + 0x38) != 0) {
            Core_Analytics_AnalyticsManager__ReturnCustomParmListToPool(lVar3);
            lVar9 = *(long *)(lVar3 + 0x40);
            if (lVar9 == 0) break;
          }
          /*System.Collections.Generic.List<AnalyticsManager.Event>$$RemoveAt*/ func_0x024a91fc(lVar9,uVar6,uRam0000000003d3cc58);
          lVar9 = *(long *)(lVar3 + 0x40);
          if (lVar9 == 0) break;
        }
        uStack_f8 = uStack_138;
        uStack_100 = uStack_140;
        uStack_e8 = uStack_128;
        uStack_f0 = uStack_130;
        /*System.Collections.Generic.List<AnalyticsManager.Event>$$Insert*/ func_0x024a86f8(lVar9,0,&uStack_100,uRam0000000003d3cc50);
        uVar7 = uVar7 + 1;
        if ((auVar10._8_8_ & 0xffffffff) == uVar7) goto code_r0x01633284;
        lVar8 = lVar8 + 0x20;
        lVar9 = *(long *)(lVar3 + 0x38);
      } while (lVar9 != 0);
      goto code_r0x016332c4;
    }
code_r0x01633284:
    if (*(long *)(lVar3 + 0x38) != 0) {
      lVar3 = /*System.Collections.Generic.List<AnalyticsManager.Event>$$RemoveRange*/ func_0x024a92a0(*(long *)(lVar3 + 0x38),0,(ulong)uVar2,uRam0000000003d3cc60);
      return lVar3;
    }
  }
code_r0x016332c4:
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb5666 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb5666 = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(*(long *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xb8) + 0x10);
  *(undefined2 *)(lVar3 + 0x6c) = 0x101;
  *(undefined1 *)(lVar3 + 0x6e) = 1;
  return lVar3;
}



// ============================================================
// RVA: 0x1633008 | Core.Analytics.AnalyticsManager.SendEventBatch
// ============================================================

long Core_Analytics_AnalyticsManager__SendEventBatch(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam0000000003eb5662 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d7c830);
    bRam0000000003eb5662 = 1;
  }
  if (param_2 != 0) {
    /*UnityEngine.Networking.UnityWebRequest$$SetRequestHeader*/ func_0x032f9754(param_2,/*STR('x-api-key')*/ uRam0000000003d7c830,*(undefined8 *)(param_1 + 0x10),0);
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*System.DateTime$$get_UtcNow*/ func_0x02a8e4d4(0);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    uVar3 = /*UnityEngine.Networking.UnityWebRequest$$SendWebRequest*/ func_0x032f87e8(param_2,0);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    return 1;
  }
  auVar10 = func_0x00f78af4();
  lVar4 = auVar10._0_8_;
  if ((bRam0000000003eb5665 & 1) == 0) {
    func_0x00f78a20(0x3d3cc50);
    func_0x00f78a20(0x3d3cc58);
    func_0x00f78a20(0x3d3cc60);
    func_0x00f78a20(0x3d3cc68);
    func_0x00f78a20(0x3d3cc70);
    bRam0000000003eb5665 = 1;
  }
  lVar9 = *(long *)(lVar4 + 0x38);
  if (lVar9 != 0) {
    uVar5 = auVar10._8_4_;
    uVar2 = *(uint *)(lVar9 + 0x18);
    if ((int)uVar5 <= (int)*(uint *)(lVar9 + 0x18)) {
      uVar2 = uVar5;
    }
    if (*(char *)(lVar4 + 0x6f) == '\0') {
      if (0 < (int)uVar2) {
        uVar7 = 0;
        lVar8 = 0x38;
        do {
          if (*(uint *)(lVar9 + 0x18) <= uVar7) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(*(long *)(lVar9 + 0x10) + lVar8) != 0) {
            Core_Analytics_AnalyticsManager__ReturnCustomParmListToPool(lVar4);
          }
          uVar7 = uVar7 + 1;
          if (uVar2 == uVar7) goto code_r0x01633284;
          lVar8 = lVar8 + 0x20;
          lVar9 = *(long *)(lVar4 + 0x38);
        } while (lVar9 != 0);
        goto code_r0x016332c4;
      }
    }
    else if (0 < (int)uVar5) {
      uVar7 = 0;
      lVar8 = 0x20;
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x10) + lVar8);
        uStack_e8 = puVar1[1];
        uStack_f0 = *puVar1;
        uStack_d8 = puVar1[3];
        uStack_e0 = puVar1[2];
        lVar9 = *(long *)(lVar4 + 0x40);
        if (lVar9 == 0) break;
        if (*(int *)(lVar9 + 0x18) < 10) {
          uStack_e8 = puVar1[1];
          uStack_f0 = *puVar1;
          uStack_d8 = puVar1[3];
          uStack_e0 = puVar1[2];
        }
        else {
          uVar6 = (ulong)(*(int *)(lVar9 + 0x18) - 1);
          if (*(long *)(*(long *)(lVar9 + 0x10) + uVar6 * 0x20 + 0x38) != 0) {
            Core_Analytics_AnalyticsManager__ReturnCustomParmListToPool(lVar4);
            lVar9 = *(long *)(lVar4 + 0x40);
            if (lVar9 == 0) break;
          }
          /*System.Collections.Generic.List<AnalyticsManager.Event>$$RemoveAt*/ func_0x024a91fc(lVar9,uVar6,uRam0000000003d3cc58);
          lVar9 = *(long *)(lVar4 + 0x40);
          if (lVar9 == 0) break;
        }
        uStack_a8 = uStack_e8;
        uStack_b0 = uStack_f0;
        uStack_98 = uStack_d8;
        uStack_a0 = uStack_e0;
        /*System.Collections.Generic.List<AnalyticsManager.Event>$$Insert*/ func_0x024a86f8(lVar9,0,&uStack_b0,uRam0000000003d3cc50);
        uVar7 = uVar7 + 1;
        if ((auVar10._8_8_ & 0xffffffff) == uVar7) goto code_r0x01633284;
        lVar8 = lVar8 + 0x20;
        lVar9 = *(long *)(lVar4 + 0x38);
      } while (lVar9 != 0);
      goto code_r0x016332c4;
    }
code_r0x01633284:
    if (*(long *)(lVar4 + 0x38) != 0) {
      lVar4 = /*System.Collections.Generic.List<AnalyticsManager.Event>$$RemoveRange*/ func_0x024a92a0(*(long *)(lVar4 + 0x38),0,(ulong)uVar2,uRam0000000003d3cc60);
      return lVar4;
    }
  }
code_r0x016332c4:
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5666 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb5666 = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(*(long *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xb8) + 0x10);
  *(undefined2 *)(lVar4 + 0x6c) = 0x101;
  *(undefined1 *)(lVar4 + 0x6e) = 1;
  return lVar4;
}



// ============================================================
// RVA: 0x16330c0 | Core.Analytics.AnalyticsManager.RemoveAndArchiveQueuedEvents
// ============================================================

undefined1  [16]
Core_Analytics_AnalyticsManager__RemoveAndArchiveQueuedEvents(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb5665 & 1) == 0) {
    func_0x00f78a20(0x3d3cc50);
    func_0x00f78a20(0x3d3cc58);
    func_0x00f78a20(0x3d3cc60);
    func_0x00f78a20(0x3d3cc68);
    func_0x00f78a20(0x3d3cc70);
    bRam0000000003eb5665 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x38);
  if (lVar6 != 0) {
    uVar2 = *(uint *)(lVar6 + 0x18);
    if ((int)param_2 <= (int)*(uint *)(lVar6 + 0x18)) {
      uVar2 = param_2;
    }
    if (*(char *)(param_1 + 0x6f) == '\0') {
      if (0 < (int)uVar2) {
        uVar4 = 0;
        lVar5 = 0x38;
        do {
          if (*(uint *)(lVar6 + 0x18) <= uVar4) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (*(long *)(*(long *)(lVar6 + 0x10) + lVar5) != 0) {
            Core_Analytics_AnalyticsManager__ReturnCustomParmListToPool(param_1);
          }
          uVar4 = uVar4 + 1;
          if (uVar2 == uVar4) goto LAB_01633284;
          lVar5 = lVar5 + 0x20;
          lVar6 = *(long *)(param_1 + 0x38);
        } while (lVar6 != 0);
        goto LAB_016332c4;
      }
    }
    else if (0 < (int)param_2) {
      uVar4 = 0;
      lVar5 = 0x20;
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar4) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x10) + lVar5);
        uStack_b8 = puVar1[1];
        uStack_c0 = *puVar1;
        uStack_a8 = puVar1[3];
        uStack_b0 = puVar1[2];
        lVar6 = *(long *)(param_1 + 0x40);
        if (lVar6 == 0) break;
        if (*(int *)(lVar6 + 0x18) < 10) {
          uStack_b8 = puVar1[1];
          uStack_c0 = *puVar1;
          uStack_a8 = puVar1[3];
          uStack_b0 = puVar1[2];
        }
        else {
          uVar3 = (ulong)(*(int *)(lVar6 + 0x18) - 1);
          if (*(long *)(*(long *)(lVar6 + 0x10) + uVar3 * 0x20 + 0x38) != 0) {
            Core_Analytics_AnalyticsManager__ReturnCustomParmListToPool(param_1);
            lVar6 = *(long *)(param_1 + 0x40);
            if (lVar6 == 0) break;
          }
          /*System.Collections.Generic.List<AnalyticsManager.Event>$$RemoveAt*/ func_0x024a91fc(lVar6,uVar3,uRam0000000003d3cc58);
          lVar6 = *(long *)(param_1 + 0x40);
          if (lVar6 == 0) break;
        }
        uStack_78 = uStack_b8;
        uStack_80 = uStack_c0;
        uStack_68 = uStack_a8;
        uStack_70 = uStack_b0;
        /*System.Collections.Generic.List<AnalyticsManager.Event>$$Insert*/ func_0x024a86f8(lVar6,0,&uStack_80,uRam0000000003d3cc50);
        uVar4 = uVar4 + 1;
        if (param_2 == uVar4) goto LAB_01633284;
        lVar5 = lVar5 + 0x20;
        lVar6 = *(long *)(param_1 + 0x38);
      } while (lVar6 != 0);
      goto LAB_016332c4;
    }
LAB_01633284:
    if (*(long *)(param_1 + 0x38) != 0) {
      auVar7 = /*System.Collections.Generic.List<AnalyticsManager.Event>$$RemoveRange*/ func_0x024a92a0(*(long *)(param_1 + 0x38),0,(ulong)uVar2,uRam0000000003d3cc60);
      return auVar7;
    }
  }
LAB_016332c4:
  auVar7._0_8_ = func_0x00f78af4();
  if ((bRam0000000003eb5666 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb5666 = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(auVar7._0_8_ + 0x48) =
       *(undefined8 *)(*(long *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xb8) + 0x10);
  *(undefined2 *)(auVar7._0_8_ + 0x6c) = 0x101;
  *(undefined1 *)(auVar7._0_8_ + 0x6e) = 1;
  auVar7._8_8_ = 0;
  return auVar7;
}



// ============================================================
// RVA: 0x16332c8 | Core.Analytics.AnalyticsManager..ctor
// ============================================================

undefined1  [16] Core_Analytics_AnalyticsManager___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb5666 & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    bRam0000000003eb5666 = 1;
  }
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(*(long *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xb8) + 0x10);
  *(undefined2 *)(param_1 + 0x6c) = 0x101;
  *(undefined1 *)(param_1 + 0x6e) = 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



// ============================================================
// RVA: 0x1633354 | Core.Analytics.AnalyticsManager..cctor
// ============================================================

void Core_Analytics_AnalyticsManager___cctor(void)

{
  undefined8 uStack_28;
  
  if ((bRam0000000003eb5667 & 1) == 0) {
    func_0x00f78a20(0x3d1fb70);
    bRam0000000003eb5667 = 1;
  }
  uStack_28 = 0;
  /*System.TimeSpan$$.ctor*/ func_0x029f0194(&uStack_28,0,0,5,0);
  **(undefined8 **)(/*Core.Analytics.AnalyticsManager_TypeInfo*/ lRam0000000003d1fb70 + 0xb8) = uStack_28;
  return;
}



