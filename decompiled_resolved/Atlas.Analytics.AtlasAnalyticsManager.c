// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Analytics.AtlasAnalyticsManager

// ============================================================
// RVA: 0x144acc0 | Atlas.Analytics.AtlasAnalyticsManager.Update
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x144aecc | Atlas.Analytics.AtlasAnalyticsManager.OnApplicationPause
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x144b118 | Atlas.Analytics.AtlasAnalyticsManager.OnApplicationQuit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1457620 | Atlas.Analytics.AtlasAnalyticsManager.add_OnNewSessionStarted
// ============================================================

ulong Atlas_Analytics_AtlasAnalyticsManager__add_OnNewSessionStarted
                (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb47b4 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb47b4 = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x18);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x18),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb47b5 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb47b5 = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x18);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(byte *)(lVar4 + 0x78);
}



// ============================================================
// RVA: 0x14576c0 | Atlas.Analytics.AtlasAnalyticsManager.remove_OnNewSessionStarted
// ============================================================

ulong Atlas_Analytics_AtlasAnalyticsManager__remove_OnNewSessionStarted
                (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000003eb47b5 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb47b5 = 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x18);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x18),plVar2,uVar5);
    bVar1 = uVar5 == uVar3;
    uVar5 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(byte *)(lVar4 + 0x78);
}



// ============================================================
// RVA: 0x1457760 | Atlas.Analytics.AtlasAnalyticsManager.get_IsInited
// ============================================================

undefined1 Atlas_Analytics_AtlasAnalyticsManager__get_IsInited(long param_1)

{
  return *(undefined1 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x1457768 | Atlas.Analytics.AtlasAnalyticsManager.get_Manager
// ============================================================

undefined8 Atlas_Analytics_AtlasAnalyticsManager__get_Manager(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x1457770 | Atlas.Analytics.AtlasAnalyticsManager.get_Events
// ============================================================

undefined8 Atlas_Analytics_AtlasAnalyticsManager__get_Events(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x1457778 | Atlas.Analytics.AtlasAnalyticsManager.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14578c8 | Atlas.Analytics.AtlasAnalyticsManager.ConsentUnspecified
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14578ec | Atlas.Analytics.AtlasAnalyticsManager.DeInit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1457948 | Atlas.Analytics.AtlasAnalyticsManager.SaveChanged
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1457994 | Atlas.Analytics.AtlasAnalyticsManager.ConsentChanged
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1457a38 | Atlas.Analytics.AtlasAnalyticsManager.SaveQueuedEvents
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1457a68 | Atlas.Analytics.AtlasAnalyticsManager.ClearSavedQueuedEvents
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1457a98 | Atlas.Analytics.AtlasAnalyticsManager.AreAnalyticsAllowedAsideFromConsent
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1457ad0 | Atlas.Analytics.AtlasAnalyticsManager.ConsentDenied
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1457af4 | Atlas.Analytics.AtlasAnalyticsManager.EndSession
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1457b18 | Atlas.Analytics.AtlasAnalyticsManager.ConsentGiven
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1457b3c | Atlas.Analytics.AtlasAnalyticsManager.StartNewSession
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1457c3c | Atlas.Analytics.AtlasAnalyticsManager.TrackVolume
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1457cb8 | Atlas.Analytics.AtlasAnalyticsManager.CompareVolumeAndFireEventIfChanged
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1457d6c | Atlas.Analytics.AtlasAnalyticsManager.RequestSendNextBatchOfQueuedEvents
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01631558) */
/* WARNING: Removing unreachable block (ram,0x01631574) */
/* WARNING: Removing unreachable block (ram,0x029caca0) */
/* WARNING: Removing unreachable block (ram,0x029cad10) */
/* WARNING: Removing unreachable block (ram,0x029cad20) */
/* WARNING: Removing unreachable block (ram,0x029cad34) */
/* WARNING: Removing unreachable block (ram,0x029cad38) */
/* WARNING: Removing unreachable block (ram,0x029cad44) */
/* WARNING: Removing unreachable block (ram,0x029cad48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Analytics_AtlasAnalyticsManager__RequestSendNextBatchOfQueuedEvents(long param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  ulong unaff_x27;
  undefined4 extraout_s0;
  float fVar16;
  undefined1 *puStack_90;
  undefined *puStack_88;
  int iStack_68;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    return param_1;
  }
  lVar4 = *(long *)(param_1 + 0x40);
  if (lVar4 == 0) {
    uVar7 = func_0x00f78af4();
    if ((bRam0000000003eb47b8 & 1) == 0) {
      func_0x00f78a20(0x3d269e8);
      bRam0000000003eb47b8 = 1;
    }
    lVar4 = func_0x00f78aec(/*Atlas.Analytics.AtlasAnalyticsManager.<OnApplicationPause>d__47_TypeInfo*/ uRam0000000003d269e8);
    /*Atlas.Analytics.AtlasAnalyticsManager.<OnApplicationPause>d__47$$.ctor*/ func_0x015455b0(lVar4,0,0);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x20) = uVar7;
      return lVar4;
    }
    uVar7 = func_0x00f78af4();
    if ((bRam0000000003eb47b9 & 1) == 0) {
      func_0x00f78a20(0x3d269f0);
      bRam0000000003eb47b9 = 1;
    }
    lVar4 = func_0x00f78aec(/*Atlas.Analytics.AtlasAnalyticsManager.<SendAllAndWaitUntilFinished>d__49_TypeInfo*/ uRam0000000003d269f0);
    uVar10 = 0;
    /*Atlas.Analytics.AtlasAnalyticsManager.<SendAllAndWaitUntilFinished>d__49$$.ctor*/ func_0x015456a8(lVar4,0);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x20) = uVar7;
      *(undefined4 *)(lVar4 + 0x28) = extraout_s0;
      return lVar4;
    }
    func_0x00f78af4();
    puStack_88 = &Atlas_Analytics_AtlasAnalyticsManager__GetConsentRequestMessageBoxData;
    puStack_90 = &stack0xffffffffffffffb0;
    if ((bRam0000000003eb47ba & 1) == 0) {
      func_0x00f78a20(0x3d280d0);
      func_0x00f78a20(0x3d6d128);
      func_0x00f78a20(0x3d6d108);
      func_0x00f78a20(0x3d6f728);
      func_0x00f78a20(0x3d6f770);
      bRam0000000003eb47ba = 1;
    }
    lVar4 = func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    Atlas_UI_MessageBoxManager_MessageBoxData___ctor(lVar4,0);
    uVar7 = /*STR('MESSAGE_BODY_ANALYTICS')*/ uRam0000000003d6f728;
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x28) = /*STR('MESSAGE_TITLE_ANALYTICS')*/ uRam0000000003d6f770;
      *(undefined8 *)(lVar4 + 0x30) = uVar7;
      uVar7 = /*STR('GENERIC_YES')*/ uRam0000000003d6d128;
      *(undefined8 *)(lVar4 + 0x38) = /*STR('GENERIC_NO')*/ uRam0000000003d6d108;
      *(undefined8 *)(lVar4 + 0x40) = uVar7;
      *(undefined8 *)(lVar4 + 0x50) = uVar10;
      *(undefined8 *)(lVar4 + 0x58) = extraout_x1;
      return lVar4;
    }
    lVar4 = func_0x00f78af4();
    if ((bRam0000000003eb47bb & 1) == 0) {
      func_0x00f78a20(0x3d76278);
      bRam0000000003eb47bb = 1;
    }
    if (*(long *)(lVar4 + 0x28) != 0) {
      lVar5 = Atlas_Save_SaveManager__GetIntData(*(long *)(lVar4 + 0x28),/*STR('WaitingForFirstProgress')*/ uRam0000000003d76278,0,0);
      if (*(long *)(lVar4 + 0x28) != 0) {
        Atlas_Save_SaveManager__SetIntData(*(long *)(lVar4 + 0x28),/*STR('WaitingForFirstProgress')*/ uRam0000000003d76278,0,0);
        return lVar5;
      }
    }
    lVar4 = func_0x00f78af4();
    if ((bRam0000000003eb47bc & 1) == 0) {
      func_0x00f78a20(0x3d71620);
      bRam0000000003eb47bc = 1;
    }
    if (*(long *)(lVar4 + 0x40) != 0) {
      uVar12 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)(lVar4 + 0x40) + 0x78),0);
      lVar5 = /*STR('ProgressUpdate')*/ lRam0000000003d71620;
      if ((uVar12 & 1) != 0) {
        return 0;
      }
      if ((*(long *)(lVar4 + 0x40) != 0) &&
         (lVar4 = *(long *)(*(long *)(lVar4 + 0x40) + 0x78), lVar4 != 0)) {
        if ((bRam0000000003eb9443 & 1) == 0) {
          func_0x00f78a20(0x3d20b50,/*STR('ProgressUpdate')*/ lRam0000000003d71620,5,0);
          bRam0000000003eb9443 = 1;
        }
        if (lVar4 == lVar5) {
          lVar4 = 1;
        }
        else {
          if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x029caab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar4 = (*(code *)(&UNK_029caabc + (ulong)UNK_036fdb52 * 4))();
            return lVar4;
          }
          lVar4 = 0;
        }
        return lVar4;
      }
    }
    lVar4 = func_0x00f78af4();
    if ((bRam0000000003eb47be & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d678d8);
      bRam0000000003eb47be = 1;
    }
    *(undefined8 *)(lVar4 + 0x10) = /*STR('3HvcUTuKb07j3xrOKlbdA6XWv82DsWycabwM5dgw')*/ uRam0000000003d678d8;
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(lVar4 + 0x70) = *(undefined8 *)(*(long *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xb8) + 0x10);
    return lVar4;
  }
  *(undefined1 *)(lVar4 + 0x70) = 1;
  lVar5 = lVar4;
  if ((bRam0000000003eb5664 & 1) == 0) {
    func_0x00f78a20(0x3d21af0,0);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d3cc68);
    func_0x00f78a20(0x3d3cc70);
    lVar5 = func_0x00f78a20(0x3d23370);
    bRam0000000003eb5664 = 1;
  }
  if (*(char *)(lVar4 + 0x70) == '\0') {
    return lVar5;
  }
  if (*(long *)(lVar4 + 0x38) != 0) {
    if ((*(int *)(*(long *)(lVar4 + 0x38) + 0x18) < 1) ||
       (lVar5 = /*Core.Analytics.AnalyticsManager$$CanSendEventBatchNow*/ func_0x01631a44(lVar4), (int)lVar5 == 0)) goto code_r0x01631534;
    if (*(long *)(lVar4 + 0x88) != 0) {
      /*System.Diagnostics.Stopwatch$$Start*/ func_0x02f287fc(*(long *)(lVar4 + 0x88),0);
      /*Core.Analytics.AnalyticsManager$$StartEventBatch*/ func_0x0163293c(lVar4);
      lVar5 = *(long *)(lVar4 + 0x38);
      if (lVar5 != 0) {
        unaff_x27 = 0;
        lVar14 = 0x20;
        do {
          if (99 < unaff_x27) goto code_r0x01631274;
          if ((long)*(int *)(lVar5 + 0x18) <= (long)unaff_x27) goto code_r0x01631274;
          if (*(long *)(lVar4 + 0x20) == 0) break;
          iVar3 = /*System.Text.StringBuilder$$get_Length*/ func_0x029d2154(*(long *)(lVar4 + 0x20),0);
          if (0x3ffff < iVar3) goto code_r0x01631274;
          lVar5 = *(long *)(lVar4 + 0x38);
          if (lVar5 == 0) break;
          if (*(uint *)(lVar5 + 0x18) <= unaff_x27) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          puVar9 = (undefined8 *)(*(long *)(lVar5 + 0x10) + lVar14);
          puStack_88 = (undefined *)puVar9[1];
          puStack_90 = (undefined1 *)*puVar9;
          /*Core.Analytics.AnalyticsManager$$AddEventToBatch*/ func_0x01632994(lVar4,&puStack_90,unaff_x27 == 0);
          unaff_x27 = unaff_x27 + 1;
          lVar5 = *(long *)(lVar4 + 0x38);
          lVar14 = lVar14 + 0x20;
        } while (lVar5 != 0);
      }
    }
  }
code_r0x01631270:
  do {
    do {
      do {
        func_0x00f78af4();
code_r0x01631274:
        /*Core.Analytics.AnalyticsManager$$EndEventBatch*/ func_0x01632de4(lVar4);
        plVar6 = *(long **)(lVar4 + 0x20);
      } while (plVar6 == (long *)0x0);
      lVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    } while (*(long *)(lVar4 + 0x20) == 0);
    /*System.Text.StringBuilder$$Clear*/ func_0x029d2384(*(long *)(lVar4 + 0x20),0);
    if (*(char *)(lVar4 + 0x6e) == '\0') {
code_r0x016314b8:
      plVar6 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
      if ((plVar6 == (long *)0x0) ||
         (lVar11 = (**(code **)(*plVar6 + 0x238))(plVar6,lVar5,*(undefined8 *)(*plVar6 + 0x240)),
         lVar11 == 0)) goto code_r0x01631270;
      uVar15 = 0;
      *(int *)(lVar4 + 0x68) = *(int *)(lVar4 + 0x68) + *(int *)(lVar11 + 0x18);
      lVar14 = lVar11;
    }
    else {
      plVar6 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
      if ((lVar5 == 0) || (plVar6 == (long *)0x0)) goto code_r0x01631270;
      uVar7 = (**(code **)(*plVar6 + 0x248))
                        (plVar6,lVar5,0,*(undefined4 *)(lVar5 + 0x10),*(undefined8 *)(lVar4 + 0x80),
                         0,*(undefined8 *)(*plVar6 + 0x250));
      plVar6 = (long *)func_0x00f78aec(/*System.IO.MemoryStream_TypeInfo*/ uRam0000000003d23370);
      fVar16 = (float)(int)uVar7 * _UNK_033f83c8;
      fVar1 = -fVar16;
      if (fVar16 != INFINITY) {
        fVar1 = fVar16;
      }
      /*System.IO.MemoryStream$$.ctor*/ func_0x02b043f0(plVar6,(int)fVar1,0);
      plVar8 = (long *)func_0x00f78aec(/*System.IO.Compression.GZipStream_TypeInfo*/ uRam0000000003d21af0);
      /*System.IO.Compression.GZipStream$$.ctor*/ func_0x02ed1970(plVar8,plVar6,0,0);
      if (plVar8 == (long *)0x0) {
        func_0x00f78af4();
code_r0x01631580:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1631584);
        (*pcVar2)();
      }
      (**(code **)(*plVar8 + 0x308))
                (plVar8,*(undefined8 *)(lVar4 + 0x80),0,uVar7,*(undefined8 *)(*plVar8 + 0x310));
      (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
      if (plVar6 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x01631580;
      }
      lVar14 = (**(code **)(*plVar6 + 0x358))(plVar6,*(undefined8 *)(*plVar6 + 0x360));
      uVar10 = _UNK_03403bc8;
      uVar15 = 1;
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x0163140c;
          }
          piVar13 = piVar13 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0163140c:
      lVar11 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar6 != (long *)0x0) {
        lVar11 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x01631478;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x01631478:
        lVar11 = (*(code *)*puVar9)(plVar6,puVar9[1]);
      }
      iStack_68 = (int)uVar10;
      if (iStack_68 != 299) goto code_r0x016314b8;
      *(int *)(lVar4 + 0x68) = *(int *)(lVar4 + 0x68) + (int)uVar7;
      if (lVar14 == 0) goto code_r0x01631270;
    }
    *(int *)(lVar4 + 100) = *(int *)(lVar4 + 100) + *(int *)(lVar14 + 0x18);
    *(int *)(lVar4 + 0x58) = (int)unaff_x27;
    uVar7 = /*Core.Analytics.AnalyticsManager$$CreatePOSTRequest*/ func_0x01632e78(lVar11,*(undefined8 *)(lVar4 + 0x18),lVar14,uVar15);
    /*Core.Analytics.AnalyticsManager$$SendEventBatch*/ func_0x01633008(lVar4,uVar7);
  } while (*(long *)(lVar4 + 0x88) == 0);
  lVar5 = /*System.Diagnostics.Stopwatch$$Stop*/ func_0x02f28870(*(long *)(lVar4 + 0x88),0);
code_r0x01631534:
  *(undefined1 *)(lVar4 + 0x70) = 0;
  return lVar5;
}



// ============================================================
// RVA: 0x1457d9c | Atlas.Analytics.AtlasAnalyticsManager.OnApplicationPause
// ============================================================

/* WARNING: Removing unreachable block (ram,0x029caca0) */
/* WARNING: Removing unreachable block (ram,0x029cad10) */
/* WARNING: Removing unreachable block (ram,0x029cad20) */
/* WARNING: Removing unreachable block (ram,0x029cad34) */
/* WARNING: Removing unreachable block (ram,0x029cad38) */
/* WARNING: Removing unreachable block (ram,0x029cad44) */
/* WARNING: Removing unreachable block (ram,0x029cad48) */

long Atlas_Analytics_AtlasAnalyticsManager__OnApplicationPause(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  undefined4 extraout_s0;
  
  if ((bRam0000000003eb47b8 & 1) == 0) {
    func_0x00f78a20(0x3d269e8);
    bRam0000000003eb47b8 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.Analytics.AtlasAnalyticsManager.<OnApplicationPause>d__47_TypeInfo*/ uRam0000000003d269e8);
  /*Atlas.Analytics.AtlasAnalyticsManager.<OnApplicationPause>d__47$$.ctor*/ func_0x015455b0(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003eb47b9 & 1) == 0) {
    func_0x00f78a20(0x3d269f0);
    bRam0000000003eb47b9 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.Analytics.AtlasAnalyticsManager.<SendAllAndWaitUntilFinished>d__49_TypeInfo*/ uRam0000000003d269f0);
  uVar5 = 0;
  /*Atlas.Analytics.AtlasAnalyticsManager.<SendAllAndWaitUntilFinished>d__49$$.ctor*/ func_0x015456a8(lVar1,0);
  if (lVar1 == 0) {
    func_0x00f78af4();
    if ((bRam0000000003eb47ba & 1) == 0) {
      func_0x00f78a20(0x3d280d0);
      func_0x00f78a20(0x3d6d128);
      func_0x00f78a20(0x3d6d108);
      func_0x00f78a20(0x3d6f728);
      func_0x00f78a20(0x3d6f770);
      bRam0000000003eb47ba = 1;
    }
    lVar1 = func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    Atlas_UI_MessageBoxManager_MessageBoxData___ctor(lVar1,0);
    uVar2 = /*STR('MESSAGE_BODY_ANALYTICS')*/ uRam0000000003d6f728;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x28) = /*STR('MESSAGE_TITLE_ANALYTICS')*/ uRam0000000003d6f770;
      *(undefined8 *)(lVar1 + 0x30) = uVar2;
      uVar2 = /*STR('GENERIC_YES')*/ uRam0000000003d6d128;
      *(undefined8 *)(lVar1 + 0x38) = /*STR('GENERIC_NO')*/ uRam0000000003d6d108;
      *(undefined8 *)(lVar1 + 0x40) = uVar2;
      *(undefined8 *)(lVar1 + 0x50) = uVar5;
      *(undefined8 *)(lVar1 + 0x58) = extraout_x1;
      return lVar1;
    }
    lVar1 = func_0x00f78af4();
    if ((bRam0000000003eb47bb & 1) == 0) {
      func_0x00f78a20(0x3d76278);
      bRam0000000003eb47bb = 1;
    }
    if (*(long *)(lVar1 + 0x28) != 0) {
      lVar3 = Atlas_Save_SaveManager__GetIntData(*(long *)(lVar1 + 0x28),/*STR('WaitingForFirstProgress')*/ uRam0000000003d76278,0,0);
      if (*(long *)(lVar1 + 0x28) != 0) {
        Atlas_Save_SaveManager__SetIntData(*(long *)(lVar1 + 0x28),/*STR('WaitingForFirstProgress')*/ uRam0000000003d76278,0,0);
        return lVar3;
      }
    }
    lVar1 = func_0x00f78af4();
    if ((bRam0000000003eb47bc & 1) == 0) {
      func_0x00f78a20(0x3d71620);
      bRam0000000003eb47bc = 1;
    }
    if (*(long *)(lVar1 + 0x40) != 0) {
      uVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)(lVar1 + 0x40) + 0x78),0);
      lVar3 = /*STR('ProgressUpdate')*/ lRam0000000003d71620;
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      if ((*(long *)(lVar1 + 0x40) != 0) &&
         (lVar1 = *(long *)(*(long *)(lVar1 + 0x40) + 0x78), lVar1 != 0)) {
        if ((bRam0000000003eb9443 & 1) == 0) {
          func_0x00f78a20(0x3d20b50,/*STR('ProgressUpdate')*/ lRam0000000003d71620,5,0);
          bRam0000000003eb9443 = 1;
        }
        if (lVar1 == lVar3) {
          lVar1 = 1;
        }
        else {
          if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x029caab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar1 = (*(code *)(&UNK_029caabc + (ulong)UNK_036fdb52 * 4))();
            return lVar1;
          }
          lVar1 = 0;
        }
        return lVar1;
      }
    }
    lVar1 = func_0x00f78af4();
    if ((bRam0000000003eb47be & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d678d8);
      bRam0000000003eb47be = 1;
    }
    *(undefined8 *)(lVar1 + 0x10) = /*STR('3HvcUTuKb07j3xrOKlbdA6XWv82DsWycabwM5dgw')*/ uRam0000000003d678d8;
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(*(long *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xb8) + 0x10);
    return lVar1;
  }
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined4 *)(lVar1 + 0x28) = extraout_s0;
  return lVar1;
}



// ============================================================
// RVA: 0x1457e10 | Atlas.Analytics.AtlasAnalyticsManager.SendAllAndWaitUntilFinished
// ============================================================

/* WARNING: Removing unreachable block (ram,0x029caca0) */
/* WARNING: Removing unreachable block (ram,0x029cad10) */
/* WARNING: Removing unreachable block (ram,0x029cad20) */
/* WARNING: Removing unreachable block (ram,0x029cad34) */
/* WARNING: Removing unreachable block (ram,0x029cad38) */
/* WARNING: Removing unreachable block (ram,0x029cad44) */
/* WARNING: Removing unreachable block (ram,0x029cad48) */

long Atlas_Analytics_AtlasAnalyticsManager__SendAllAndWaitUntilFinished
               (undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  
  if ((bRam0000000003eb47b9 & 1) == 0) {
    func_0x00f78a20(0x3d269f0);
    bRam0000000003eb47b9 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.Analytics.AtlasAnalyticsManager.<SendAllAndWaitUntilFinished>d__49_TypeInfo*/ uRam0000000003d269f0);
  uVar5 = 0;
  /*Atlas.Analytics.AtlasAnalyticsManager.<SendAllAndWaitUntilFinished>d__49$$.ctor*/ func_0x015456a8(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_2;
    *(undefined4 *)(lVar2 + 0x28) = param_1;
    return lVar2;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb47ba & 1) == 0) {
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d6d128);
    func_0x00f78a20(0x3d6d108);
    func_0x00f78a20(0x3d6f728);
    func_0x00f78a20(0x3d6f770);
    bRam0000000003eb47ba = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
  Atlas_UI_MessageBoxManager_MessageBoxData___ctor(lVar2,0);
  uVar1 = /*STR('MESSAGE_BODY_ANALYTICS')*/ uRam0000000003d6f728;
  if (lVar2 == 0) {
    lVar2 = func_0x00f78af4();
    if ((bRam0000000003eb47bb & 1) == 0) {
      func_0x00f78a20(0x3d76278);
      bRam0000000003eb47bb = 1;
    }
    if (*(long *)(lVar2 + 0x28) != 0) {
      lVar3 = Atlas_Save_SaveManager__GetIntData(*(long *)(lVar2 + 0x28),/*STR('WaitingForFirstProgress')*/ uRam0000000003d76278,0,0);
      if (*(long *)(lVar2 + 0x28) != 0) {
        Atlas_Save_SaveManager__SetIntData(*(long *)(lVar2 + 0x28),/*STR('WaitingForFirstProgress')*/ uRam0000000003d76278,0,0);
        return lVar3;
      }
    }
    lVar2 = func_0x00f78af4();
    if ((bRam0000000003eb47bc & 1) == 0) {
      func_0x00f78a20(0x3d71620);
      bRam0000000003eb47bc = 1;
    }
    if (*(long *)(lVar2 + 0x40) != 0) {
      uVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x78),0);
      lVar3 = /*STR('ProgressUpdate')*/ lRam0000000003d71620;
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      if ((*(long *)(lVar2 + 0x40) != 0) &&
         (lVar2 = *(long *)(*(long *)(lVar2 + 0x40) + 0x78), lVar2 != 0)) {
        if ((bRam0000000003eb9443 & 1) == 0) {
          func_0x00f78a20(0x3d20b50,/*STR('ProgressUpdate')*/ lRam0000000003d71620,5,0);
          bRam0000000003eb9443 = 1;
        }
        if (lVar2 == lVar3) {
          lVar2 = 1;
        }
        else {
          if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x029caab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar2 = (*(code *)(&UNK_029caabc + (ulong)UNK_036fdb52 * 4))();
            return lVar2;
          }
          lVar2 = 0;
        }
        return lVar2;
      }
    }
    lVar2 = func_0x00f78af4();
    if ((bRam0000000003eb47be & 1) == 0) {
      func_0x00f78a20(0x3d21070);
      func_0x00f78a20(0x3d678d8);
      bRam0000000003eb47be = 1;
    }
    *(undefined8 *)(lVar2 + 0x10) = /*STR('3HvcUTuKb07j3xrOKlbdA6XWv82DsWycabwM5dgw')*/ uRam0000000003d678d8;
    if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(*(long *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xb8) + 0x10);
    return lVar2;
  }
  *(undefined8 *)(lVar2 + 0x28) = /*STR('MESSAGE_TITLE_ANALYTICS')*/ uRam0000000003d6f770;
  *(undefined8 *)(lVar2 + 0x30) = uVar1;
  uVar1 = /*STR('GENERIC_YES')*/ uRam0000000003d6d128;
  *(undefined8 *)(lVar2 + 0x38) = /*STR('GENERIC_NO')*/ uRam0000000003d6d108;
  *(undefined8 *)(lVar2 + 0x40) = uVar1;
  *(undefined8 *)(lVar2 + 0x50) = uVar5;
  *(undefined8 *)(lVar2 + 0x58) = extraout_x1;
  return lVar2;
}



// ============================================================
// RVA: 0x1457e94 | Atlas.Analytics.AtlasAnalyticsManager.GetConsentRequestMessageBoxData
// ============================================================

/* WARNING: Removing unreachable block (ram,0x029caca0) */
/* WARNING: Removing unreachable block (ram,0x029cad10) */
/* WARNING: Removing unreachable block (ram,0x029cad20) */
/* WARNING: Removing unreachable block (ram,0x029cad34) */
/* WARNING: Removing unreachable block (ram,0x029cad38) */
/* WARNING: Removing unreachable block (ram,0x029cad44) */
/* WARNING: Removing unreachable block (ram,0x029cad48) */

long Atlas_Analytics_AtlasAnalyticsManager__GetConsentRequestMessageBoxData
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if ((bRam0000000003eb47ba & 1) == 0) {
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d6d128);
    func_0x00f78a20(0x3d6d108);
    func_0x00f78a20(0x3d6f728);
    func_0x00f78a20(0x3d6f770);
    bRam0000000003eb47ba = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
  Atlas_UI_MessageBoxManager_MessageBoxData___ctor(lVar2,0);
  uVar1 = /*STR('MESSAGE_BODY_ANALYTICS')*/ uRam0000000003d6f728;
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x28) = /*STR('MESSAGE_TITLE_ANALYTICS')*/ uRam0000000003d6f770;
    *(undefined8 *)(lVar2 + 0x30) = uVar1;
    uVar1 = /*STR('GENERIC_YES')*/ uRam0000000003d6d128;
    *(undefined8 *)(lVar2 + 0x38) = /*STR('GENERIC_NO')*/ uRam0000000003d6d108;
    *(undefined8 *)(lVar2 + 0x40) = uVar1;
    *(undefined8 *)(lVar2 + 0x50) = param_3;
    *(undefined8 *)(lVar2 + 0x58) = param_2;
    return lVar2;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb47bb & 1) == 0) {
    func_0x00f78a20(0x3d76278);
    bRam0000000003eb47bb = 1;
  }
  if (*(long *)(lVar2 + 0x28) != 0) {
    lVar3 = Atlas_Save_SaveManager__GetIntData(*(long *)(lVar2 + 0x28),/*STR('WaitingForFirstProgress')*/ uRam0000000003d76278,0,0);
    if (*(long *)(lVar2 + 0x28) != 0) {
      Atlas_Save_SaveManager__SetIntData(*(long *)(lVar2 + 0x28),/*STR('WaitingForFirstProgress')*/ uRam0000000003d76278,0,0);
      return lVar3;
    }
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb47bc & 1) == 0) {
    func_0x00f78a20(0x3d71620);
    bRam0000000003eb47bc = 1;
  }
  if (*(long *)(lVar2 + 0x40) != 0) {
    uVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x78),0);
    lVar3 = /*STR('ProgressUpdate')*/ lRam0000000003d71620;
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    if ((*(long *)(lVar2 + 0x40) != 0) &&
       (lVar2 = *(long *)(*(long *)(lVar2 + 0x40) + 0x78), lVar2 != 0)) {
      if ((bRam0000000003eb9443 & 1) == 0) {
        func_0x00f78a20(0x3d20b50,/*STR('ProgressUpdate')*/ lRam0000000003d71620,5,0);
        bRam0000000003eb9443 = 1;
      }
      if (lVar2 == lVar3) {
        lVar2 = 1;
      }
      else {
        if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x029caab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar2 = (*(code *)(&UNK_029caabc + (ulong)UNK_036fdb52 * 4))();
          return lVar2;
        }
        lVar2 = 0;
      }
      return lVar2;
    }
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb47be & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d678d8);
    bRam0000000003eb47be = 1;
  }
  *(undefined8 *)(lVar2 + 0x10) = /*STR('3HvcUTuKb07j3xrOKlbdA6XWv82DsWycabwM5dgw')*/ uRam0000000003d678d8;
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(*(long *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xb8) + 0x10);
  return lVar2;
}



// ============================================================
// RVA: 0x1457f70 | Atlas.Analytics.AtlasAnalyticsManager.GetFirstSeasonProgression
// ============================================================

/* WARNING: Removing unreachable block (ram,0x029caca0) */
/* WARNING: Removing unreachable block (ram,0x029cad48) */
/* WARNING: Removing unreachable block (ram,0x029cad10) */
/* WARNING: Removing unreachable block (ram,0x029cad20) */
/* WARNING: Removing unreachable block (ram,0x029cad34) */
/* WARNING: Removing unreachable block (ram,0x029cad38) */
/* WARNING: Removing unreachable block (ram,0x029cad44) */

long Atlas_Analytics_AtlasAnalyticsManager__GetFirstSeasonProgression(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((bRam0000000003eb47bb & 1) == 0) {
    func_0x00f78a20(0x3d76278);
    bRam0000000003eb47bb = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar2 = Atlas_Save_SaveManager__GetIntData(*(long *)(param_1 + 0x28),/*STR('WaitingForFirstProgress')*/ uRam0000000003d76278,0,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      Atlas_Save_SaveManager__SetIntData(*(long *)(param_1 + 0x28),/*STR('WaitingForFirstProgress')*/ uRam0000000003d76278,0,0);
      return lVar2;
    }
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb47bc & 1) == 0) {
    func_0x00f78a20(0x3d71620);
    bRam0000000003eb47bc = 1;
  }
  if (*(long *)(lVar2 + 0x40) != 0) {
    uVar3 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)(lVar2 + 0x40) + 0x78),0);
    lVar1 = /*STR('ProgressUpdate')*/ lRam0000000003d71620;
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    if ((*(long *)(lVar2 + 0x40) != 0) &&
       (lVar2 = *(long *)(*(long *)(lVar2 + 0x40) + 0x78), lVar2 != 0)) {
      if ((bRam0000000003eb9443 & 1) == 0) {
        func_0x00f78a20(0x3d20b50,/*STR('ProgressUpdate')*/ lRam0000000003d71620,5,0);
        bRam0000000003eb9443 = 1;
      }
      if (lVar2 == lVar1) {
        lVar2 = 1;
      }
      else {
        if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x029caab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar2 = (*(code *)(&UNK_029caabc + (ulong)UNK_036fdb52 * 4))();
          return lVar2;
        }
        lVar2 = 0;
      }
      return lVar2;
    }
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb47be & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d678d8);
    bRam0000000003eb47be = 1;
  }
  *(undefined8 *)(lVar2 + 0x10) = /*STR('3HvcUTuKb07j3xrOKlbdA6XWv82DsWycabwM5dgw')*/ uRam0000000003d678d8;
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(*(long *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xb8) + 0x10);
  return lVar2;
}



// ============================================================
// RVA: 0x1457ff8 | Atlas.Analytics.AtlasAnalyticsManager.WasLastPostedEventProgressUpdate
// ============================================================

/* WARNING: Removing unreachable block (ram,0x029caca0) */
/* WARNING: Removing unreachable block (ram,0x029cad48) */
/* WARNING: Removing unreachable block (ram,0x029cad10) */
/* WARNING: Removing unreachable block (ram,0x029cad20) */
/* WARNING: Removing unreachable block (ram,0x029cad34) */
/* WARNING: Removing unreachable block (ram,0x029cad38) */
/* WARNING: Removing unreachable block (ram,0x029cad44) */

long Atlas_Analytics_AtlasAnalyticsManager__WasLastPostedEventProgressUpdate(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000003eb47bc & 1) == 0) {
    func_0x00f78a20(0x3d71620);
    bRam0000000003eb47bc = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x78),0);
    lVar3 = /*STR('ProgressUpdate')*/ lRam0000000003d71620;
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0x78), lVar2 != 0)) {
      if ((bRam0000000003eb9443 & 1) == 0) {
        func_0x00f78a20(0x3d20b50,/*STR('ProgressUpdate')*/ lRam0000000003d71620,5,0);
        bRam0000000003eb9443 = 1;
      }
      if (lVar2 == lVar3) {
        lVar3 = 1;
      }
      else {
        if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x029caab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar3 = (*(code *)(&UNK_029caabc + (ulong)UNK_036fdb52 * 4))();
          return lVar3;
        }
        lVar3 = 0;
      }
      return lVar3;
    }
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb47be & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d678d8);
    bRam0000000003eb47be = 1;
  }
  *(undefined8 *)(lVar3 + 0x10) = /*STR('3HvcUTuKb07j3xrOKlbdA6XWv82DsWycabwM5dgw')*/ uRam0000000003d678d8;
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)(*(long *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xb8) + 0x10);
  return lVar3;
}



// ============================================================
// RVA: 0x1458084 | Atlas.Analytics.AtlasAnalyticsManager..ctor
// ============================================================

undefined1  [16] Atlas_Analytics_AtlasAnalyticsManager___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb47be & 1) == 0) {
    func_0x00f78a20(0x3d21070);
    func_0x00f78a20(0x3d678d8);
    bRam0000000003eb47be = 1;
  }
  *(undefined8 *)(param_1 + 0x10) = /*STR('3HvcUTuKb07j3xrOKlbdA6XWv82DsWycabwM5dgw')*/ uRam0000000003d678d8;
  if (((*(ushort *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(*(long *)(/*System.DateTime_TypeInfo*/ lRam0000000003d21070 + 0xb8) + 0x10);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



// ============================================================
// RVA: 0x145811c | Atlas.Analytics.AtlasAnalyticsManager..cctor
// ============================================================

/* WARNING: Possible PIC construction at 0x01458440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01458470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014584a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014584d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01458500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01635710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014585b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01635be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014585f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014585bc) */
/* WARNING: Removing unreachable block (ram,0x01635714) */
/* WARNING: Removing unreachable block (ram,0x01635718) */
/* WARNING: Removing unreachable block (ram,0x0163577c) */
/* WARNING: Removing unreachable block (ram,0x01635750) */
/* WARNING: Removing unreachable block (ram,0x01ed77c0) */
/* WARNING: Removing unreachable block (ram,0x01ed77e8) */
/* WARNING: Removing unreachable block (ram,0x01ed7810) */
/* WARNING: Removing unreachable block (ram,0x01ed7828) */
/* WARNING: Removing unreachable block (ram,0x01ed784c) */
/* WARNING: Removing unreachable block (ram,0x01ed786c) */
/* WARNING: Removing unreachable block (ram,0x01ed7878) */
/* WARNING: Removing unreachable block (ram,0x01ed78b8) */
/* WARNING: Removing unreachable block (ram,0x01ed78bc) */
/* WARNING: Removing unreachable block (ram,0x01ed78e0) */
/* WARNING: Removing unreachable block (ram,0x01ed797c) */
/* WARNING: Removing unreachable block (ram,0x01ed7908) */
/* WARNING: Removing unreachable block (ram,0x01ed7928) */
/* WARNING: Removing unreachable block (ram,0x01ed7934) */
/* WARNING: Removing unreachable block (ram,0x01ed7994) */
/* WARNING: Removing unreachable block (ram,0x01ed7998) */
/* WARNING: Removing unreachable block (ram,0x01ed79bc) */
/* WARNING: Removing unreachable block (ram,0x01ed79c8) */
/* WARNING: Removing unreachable block (ram,0x01ed79d4) */
/* WARNING: Removing unreachable block (ram,0x01ed79e4) */
/* WARNING: Removing unreachable block (ram,0x01ed79ec) */
/* WARNING: Removing unreachable block (ram,0x01ed7a34) */
/* WARNING: Removing unreachable block (ram,0x01ed7a40) */
/* WARNING: Removing unreachable block (ram,0x01ed7a74) */
/* WARNING: Removing unreachable block (ram,0x01ed7b20) */
/* WARNING: Removing unreachable block (ram,0x01ed7b2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b34) */
/* WARNING: Removing unreachable block (ram,0x01ed7b3c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b40) */
/* WARNING: Removing unreachable block (ram,0x01ed7b48) */
/* WARNING: Removing unreachable block (ram,0x01ed7b50) */
/* WARNING: Removing unreachable block (ram,0x01ed7a94) */
/* WARNING: Removing unreachable block (ram,0x01ed7ab8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ac4) */
/* WARNING: Removing unreachable block (ram,0x01ed7acc) */
/* WARNING: Removing unreachable block (ram,0x01ed7ad8) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae4) */
/* WARNING: Removing unreachable block (ram,0x01ed7b80) */
/* WARNING: Removing unreachable block (ram,0x01ed7b84) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb0) */
/* WARNING: Removing unreachable block (ram,0x01ed7bb8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bc8) */
/* WARNING: Removing unreachable block (ram,0x01ed7bd0) */
/* WARNING: Removing unreachable block (ram,0x01ed7d50) */
/* WARNING: Removing unreachable block (ram,0x01ed7bfc) */
/* WARNING: Removing unreachable block (ram,0x01ed7c08) */
/* WARNING: Removing unreachable block (ram,0x01ed7c10) */
/* WARNING: Removing unreachable block (ram,0x01ed7c18) */
/* WARNING: Removing unreachable block (ram,0x01ed7c24) */
/* WARNING: Removing unreachable block (ram,0x01ed7c2c) */
/* WARNING: Removing unreachable block (ram,0x01ed7c90) */
/* WARNING: Removing unreachable block (ram,0x01ed7c9c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d18) */
/* WARNING: Removing unreachable block (ram,0x01ed7d1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7d80) */
/* WARNING: Removing unreachable block (ram,0x01ed7c54) */
/* WARNING: Removing unreachable block (ram,0x01ed7c64) */
/* WARNING: Removing unreachable block (ram,0x01ed7c74) */
/* WARNING: Removing unreachable block (ram,0x01ed7ae8) */
/* WARNING: Removing unreachable block (ram,0x01ed7b68) */
/* WARNING: Removing unreachable block (ram,0x01ed7b08) */
/* WARNING: Removing unreachable block (ram,0x01ed7b0c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b1c) */
/* WARNING: Removing unreachable block (ram,0x01ed7b60) */
/* WARNING: Removing unreachable block (ram,0x01ed7b6c) */
/* WARNING: Removing unreachable block (ram,0x01ed7a50) */
/* WARNING: Removing unreachable block (ram,0x01ed79f0) */
/* WARNING: Removing unreachable block (ram,0x01ed7a00) */
/* WARNING: Removing unreachable block (ram,0x01ed7a28) */
/* WARNING: Removing unreachable block (ram,0x01ed7938) */
/* WARNING: Removing unreachable block (ram,0x01ed7958) */
/* WARNING: Removing unreachable block (ram,0x01ed7980) */
/* WARNING: Removing unreachable block (ram,0x01ed787c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a4) */
/* WARNING: Removing unreachable block (ram,0x01ed789c) */
/* WARNING: Removing unreachable block (ram,0x01ed78a8) */
/* WARNING: Removing unreachable block (ram,0x01ed77f8) */
/* WARNING: Removing unreachable block (ram,0x01ed77cc) */
/* WARNING: Removing unreachable block (ram,0x01458504) */
/* WARNING: Removing unreachable block (ram,0x014584d4) */
/* WARNING: Removing unreachable block (ram,0x014584a4) */
/* WARNING: Removing unreachable block (ram,0x01458474) */
/* WARNING: Removing unreachable block (ram,0x01458444) */
/* WARNING: Removing unreachable block (ram,0x014585fc) */
/* WARNING: Removing unreachable block (ram,0x01635c14) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Analytics_AtlasAnalyticsManager___cctor
                 (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  long **pplVar5;
  undefined1 *puVar6;
  long **pplVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  long *plVar16;
  long *plVar17;
  uint uVar18;
  ulong uVar19;
  long *extraout_x8;
  long *extraout_x8_00;
  long *plVar20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long *plVar21;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar22;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  uint uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  long lStack_138;
  undefined8 *******pppppppuStack_e0;
  code *pcStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined *puStack_a8;
  undefined8 *****pppppuStack_50;
  undefined *puStack_48;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb47bf & 1) == 0) {
    func_0x00f78a20(0x3d1fe90);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d69c30);
    func_0x00f78a20(0x3d69c00);
    func_0x00f78a20(0x3d69c10);
    func_0x00f78a20(0x3d69c28);
    func_0x00f78a20(0x3d69c38);
    bRam0000000003eb47bf = 1;
  }
  plVar9 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,5);
  if (plVar9 != (long *)0x0) {
    unaff_x21 = 0x3d69c30;
    if ((/*STR('Campaign_Prologue')*/ lRam0000000003d69c30 == 0) ||
       (lVar10 = func_0x00f78adc(/*STR('Campaign_Prologue')*/ lRam0000000003d69c30,*(undefined8 *)(*plVar9 + 0x40)), lVar10 != 0)
       ) {
      uVar19 = plVar9[3];
      if ((int)uVar19 != 0) {
        plVar9[4] = /*STR('Campaign_Prologue')*/ lRam0000000003d69c30;
        if (/*STR('Campaign_Easy')*/ lRam0000000003d69c00 != 0) {
          lVar10 = func_0x00f78adc(/*STR('Campaign_Easy')*/ lRam0000000003d69c00,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar10 == 0) goto LAB_01458310;
          uVar19 = plVar9[3];
        }
        if ((uVar19 & 0xfffffffe) != 0) {
          unaff_x21 = 0x3d69c28;
          plVar9[5] = /*STR('Campaign_Easy')*/ lRam0000000003d69c00;
          if (/*STR('Campaign_Medium')*/ lRam0000000003d69c28 != 0) {
            lVar10 = func_0x00f78adc(/*STR('Campaign_Medium')*/ lRam0000000003d69c28,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar10 == 0) goto LAB_01458310;
            uVar19 = plVar9[3];
          }
          if (2 < (uint)uVar19) {
            unaff_x22 = 0x3d69c10;
            plVar9[6] = /*STR('Campaign_Medium')*/ lRam0000000003d69c28;
            if (/*STR('Campaign_Hard')*/ lRam0000000003d69c10 != 0) {
              lVar10 = func_0x00f78adc(/*STR('Campaign_Hard')*/ lRam0000000003d69c10,*(undefined8 *)(*plVar9 + 0x40));
              if (lVar10 == 0) goto LAB_01458310;
              uVar19 = plVar9[3];
            }
            uVar18 = (uint)uVar19;
            if ((uVar19 & 0xfffffffc) != 0) {
              plVar9[7] = /*STR('Campaign_Hard')*/ lRam0000000003d69c10;
              if (/*STR('Campaign_Series')*/ lRam0000000003d69c38 != 0) {
                lVar10 = func_0x00f78adc(/*STR('Campaign_Series')*/ lRam0000000003d69c38,*(undefined8 *)(*plVar9 + 0x40));
                if (lVar10 == 0) goto LAB_01458310;
                uVar18 = (uint)plVar9[3];
              }
              if (4 < uVar18) {
                plVar9[8] = /*STR('Campaign_Series')*/ lRam0000000003d69c38;
                **(long **)(/*Atlas.Analytics.AtlasAnalyticsManager_TypeInfo*/ lRam0000000003d1fe90 + 0xb8) = (long)plVar9;
                uStack_38 = 0;
                plVar9 = (long *)/*System.TimeSpan$$.ctor*/ func_0x029f0194(&uStack_38,0,5,0,0);
                *(undefined8 *)(*(long *)(/*Atlas.Analytics.AtlasAnalyticsManager_TypeInfo*/ lRam0000000003d1fe90 + 0xb8) + 8) = uStack_38;
                return plVar9;
              }
            }
          }
        }
      }
      uVar11 = func_0x00f78b24();
    }
    else {
LAB_01458310:
      uVar11 = func_0x00f78b14();
    }
    func_0x00f78ac0(uVar11,0);
  }
  lStack_b8 = func_0x00f78af4();
  puStack_48 = &Atlas_Assets_AtlasAssetBucketUtils__CreateBuckets;
  pppppuStack_50 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb47c0 & 1) == 0) {
    func_0x00f78a20(0x3d68fe8);
    func_0x00f78a20(0x3d6a910);
    func_0x00f78a20(0x3d6bac0);
    func_0x00f78a20(0x3d6d468);
    func_0x00f78a20(0x3d6d480);
    func_0x00f78a20(0x3d72328);
    func_0x00f78a20(0x3d6d050);
    func_0x00f78a20(0x3d69818);
    func_0x00f78a20(0x3d6efb0);
    func_0x00f78a20(0x3d695f0);
    func_0x00f78a20(0x3d76438);
    bRam0000000003eb47c0 = 1;
  }
  ppppppuStack_b0 = &pppppuStack_50;
  if (lStack_b8 != 0) {
    pppppppuStack_e0 = (undefined8 *******)0x3d72000;
    pcStack_d8 = (code *)0x3d6d000;
    uStack_d0 = 0x3d6b000;
    uStack_c8 = 0x3d6d000;
    uStack_c0 = 0x3d76000;
    puStack_a8 = &UNK_01458444;
    if ((bRam0000000003eb567a & 1) == 0) {
      func_0x00f78a20(0x3d26978,/*STR('Karts')*/ uRam0000000003d6efb0,2,0xc,0);
      func_0x00f78a20(0x3d2feb0);
      func_0x00f78a20(0x3d35c68);
      func_0x00f78a20(0x3d1cdf8);
      bRam0000000003eb567a = 1;
    }
    plVar9 = (long *)func_0x00f78aec(/*Core.Assets.AssetManager.BucketInstance_TypeInfo*/ uRam0000000003d26978);
    return plVar9;
  }
  auVar24 = func_0x00f78af4();
  plVar12 = auVar24._8_8_;
  plVar17 = auVar24._0_8_;
  pplVar7 = (long **)&uStack_d0;
  uStack_c0 = 0x3eb4000;
  puStack_a8 = &Atlas_Assets_AtlasAssetBucketUtils__PurgeContextBuckets;
  pppppppuVar22 = &ppppppuStack_b0;
  plVar9 = (long *)0x3eb4000;
  uStack_d0 = unaff_x22;
  uStack_c8 = unaff_x21;
  if ((bRam0000000003eb47c1 & 1) == 0) {
    func_0x00f78a20(0x3d6d050);
    func_0x00f78a20(0x3d695f0);
    bRam0000000003eb47c1 = 1;
  }
  plVar21 = /*STR('FrontEndContext')*/ plRam0000000003d6d050;
  if (auVar24._8_4_ == 0) {
    if (plVar17 != (long *)0x0) {
      puVar23 = &UNK_014585fc;
      plVar12 = /*STR('FrontEndContext')*/ plRam0000000003d6d050;
code_r0x016366f0:
      *(undefined8 *)((long)pplVar7 + -0x50) = unaff_x28;
      *(undefined8 *)((long)pplVar7 + -0x48) = unaff_x27;
      *(ulong *)((long)pplVar7 + -0x40) = unaff_x24;
      *(long **)((long)pplVar7 + -0x38) = unaff_x23;
      *(ulong *)((long)pplVar7 + -0x30) = unaff_x22;
      *(long **)((long)pplVar7 + -0x28) = plVar9;
      *(long *)((long)pplVar7 + -0x20) = auVar24._8_8_;
      *(long *)((long)pplVar7 + -0x18) = auVar24._0_8_;
      *(undefined8 ********)((long)pplVar7 + -0x10) = pppppppuVar22;
      *(undefined **)((long)pplVar7 + -8) = puVar23;
      if ((bRam0000000003eb5681 & 1) == 0) {
        func_0x00f78a20(0x3d2fec0);
        func_0x00f78a20(0x3d2e020);
        func_0x00f78a20(0x3d32190);
        func_0x00f78a20(0x3d32168);
        func_0x00f78a20(0x3d32198);
        func_0x00f78a20(0x3d32180);
        func_0x00f78a20(0x3d321a0);
        func_0x00f78a20(0x3d32188);
        func_0x00f78a20(0x3d35c78);
        func_0x00f78a20(0x3d35c88);
        func_0x00f78a20(0x3d39d50);
        func_0x00f78a20(0x3d39d60);
        func_0x00f78a20(0x3d39d48);
        func_0x00f78a20(0x3d1d7d0);
        bRam0000000003eb5681 = 1;
      }
      *(undefined8 *)((long)pplVar7 + -0x58) = 0;
      *(undefined8 *)((long)pplVar7 + -0x80) = 0;
      *(undefined8 *)((long)pplVar7 + -0x98) = 0;
      *(undefined8 *)((long)pplVar7 + -0xa0) = 0;
      *(undefined8 *)((long)pplVar7 + -0x88) = 0;
      *(undefined8 *)((long)pplVar7 + -0x90) = 0;
      *(undefined8 *)((long)pplVar7 + -0xb8) = 0;
      *(undefined8 *)((long)pplVar7 + -0xc0) = 0;
      *(undefined8 *)((long)pplVar7 + -0xa8) = 0;
      *(undefined8 *)((long)pplVar7 + -0xb0) = 0;
      *(undefined8 *)((long)pplVar7 + -0xd8) = 0;
      *(undefined8 *)((long)pplVar7 + -0xe0) = 0;
      *(undefined8 *)((long)pplVar7 + -200) = 0;
      *(undefined8 *)((long)pplVar7 + -0xd0) = 0;
      *(undefined8 *)((long)pplVar7 + -0xf8) = 0;
      *(undefined8 *)((long)pplVar7 + -0x100) = 0;
      *(undefined8 *)((long)pplVar7 + -0xe8) = 0;
      *(undefined8 *)((long)pplVar7 + -0xf0) = 0;
      *(undefined8 *)((long)pplVar7 + -0x118) = 0;
      *(undefined8 *)((long)pplVar7 + -0x110) = 0;
      *(undefined8 *)((long)pplVar7 + -0x108) = 0;
      *(undefined4 *)((long)pplVar7 + -0x120) = 0;
      if (plVar17[6] == 0) goto code_r0x016369bc;
      iVar8 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(plVar17[6],plVar12,(undefined1 *)((long)pplVar7 + -0x58),
                              plRam0000000003d2fec0);
      if (iVar8 == 0) {
        return (long *)0x0;
      }
      if (*(long *)((long)pplVar7 + -0x58) == 0) goto code_r0x016369bc;
      lVar10 = *(long *)(*(long *)((long)pplVar7 + -0x58) + 0x20);
      if (lVar10 == 0) goto code_r0x016369bc;
      uVar2 = *(undefined4 *)(lVar10 + 0x20);
      plVar12 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<AssetManagerHandle>_TypeInfo*/ uRam0000000003d1d7d0);
      /*System.Collections.Generic.List<AssetManagerHandle>$$.ctor*/ func_0x0236ed70(plVar12,uVar2,plRam0000000003d39d48);
      if (*(long *)((long)pplVar7 + -0x58) == 0) goto code_r0x016369bc;
      lVar10 = *(long *)(*(long *)((long)pplVar7 + -0x58) + 0x20);
      if (lVar10 == 0) goto code_r0x016369bc;
      /*System.Collections.Generic.HashSet<AssetManagerHandle>$$GetEnumerator*/ func_0x021cf268((undefined1 *)((long)pplVar7 + -0x140),lVar10,uRam0000000003d35c78);
      *(undefined8 *)((long)pplVar7 + -0x68) = *(undefined8 *)((long)pplVar7 + -0x138);
      *(undefined8 *)((long)pplVar7 + -0x70) = *(undefined8 *)((long)pplVar7 + -0x140);
      *(undefined8 *)((long)pplVar7 + -0x60) = *(undefined8 *)((long)pplVar7 + -0x130);
      while (uVar19 = /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f636e0((undefined1 *)((long)pplVar7 + -0x70),uRam0000000003d32180),
            (uVar19 & 1) != 0) {
        if (plVar17[3] == 0) {
          func_0x00f78af4();
          goto code_r0x016369b8;
        }
        uVar2 = *(undefined4 *)((long)pplVar7 + -0x60);
        iVar8 = /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$TryGetValue*/ func_0x01e31a4c(plVar17[3],uVar2,(undefined1 *)((long)pplVar7 + -0x100),
                                uRam0000000003d2e020);
        if (iVar8 != 0 && *(int *)((long)pplVar7 + -0x80) < 1) {
          if (plVar12 == (long *)0x0) {
            func_0x00f78af4();
code_r0x016369b8:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x16369bc);
            (*pcVar4)();
          }
          /*System.Collections.Generic.List<AssetManagerHandle>$$Add*/ func_0x0236f95c(plVar12,uVar2,plRam0000000003d39d50);
        }
      }
      /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc((undefined1 *)((long)pplVar7 + -0x70),uRam0000000003d32168);
      *(undefined4 *)((long)pplVar7 + -0x120) = 0;
      do {
        if (plVar12 != (long *)0x0) {
          /*System.Collections.Generic.List<AssetManagerHandle>$$GetEnumerator*/ func_0x0237041c((undefined1 *)((long)pplVar7 + -0x118),plVar12,uRam0000000003d39d60);
          plVar9 = (long *)0x0;
          while (uVar19 = /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f639a0((undefined1 *)((long)pplVar7 + -0x118),
                                          uRam0000000003d32198), (uVar19 & 1) != 0) {
            /*Core.Assets.AssetManager$$ReleaseAsset*/ func_0x016353e4(plVar17,*(undefined4 *)((long)pplVar7 + -0x108));
            plVar9 = (long *)(ulong)((int)plVar9 + 1);
          }
          *(undefined4 *)((long)pplVar7 + -0x128) = 0xb0;
          *(int *)((long)pplVar7 + -0x120) = *(int *)((long)pplVar7 + -0x120) + 1;
          /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f6399c((undefined1 *)((long)pplVar7 + -0x118),uRam0000000003d32190);
          return plVar9;
        }
code_r0x016369bc:
        func_0x00f78af4();
        if (extraout_w1_00 != 1) goto code_r0x01636a40;
        plVar9 = (long *)___cxa_begin_catch();
        lVar10 = *plVar9;
        ___cxa_end_catch();
        /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc((undefined1 *)((long)pplVar7 + -0x70),uRam0000000003d32168);
      } while (lVar10 == 0);
      func_0x00f78ac0(lVar10,0);
code_r0x01636a40:
      iVar8 = __Unwind_Resume();
      return (long *)(ulong)(iVar8 != extraout_w1_01);
    }
  }
  else if (plVar17 != (long *)0x0) {
    param_3 = (long *)0x0;
    pplVar7 = &plStack_1c0;
    pplVar5 = &plStack_1c0;
    pcStack_d8 = (code *)&UNK_014585bc;
    plVar20 = (long *)0x3eb5000;
    pppppppuStack_e0 = pppppppuVar22;
    if ((bRam0000000003eb5682 & 1) == 0) {
      func_0x00f78a20(0x3d1fdb0);
      func_0x00f78a20(0x3d2df80);
      func_0x00f78a20(0x3d2fec0);
      func_0x00f78a20(0x3d32190);
      func_0x00f78a20(0x3d32168);
      func_0x00f78a20(0x3d339f0);
      func_0x00f78a20(0x3d339f8);
      func_0x00f78a20(0x3d32198);
      func_0x00f78a20(0x3d32180);
      func_0x00f78a20(0x3d321a0);
      func_0x00f78a20(0x3d32188);
      func_0x00f78a20(0x3d33a28);
      func_0x00f78a20(0x3d35c78);
      func_0x00f78a20(0x3d35c88);
      func_0x00f78a20(0x3d391b8);
      func_0x00f78a20(0x3d391c0);
      func_0x00f78a20(0x3d39d50);
      func_0x00f78a20(0x3d39d60);
      func_0x00f78a20(0x3d39d48);
      func_0x00f78a20(0x3d1d7d0);
      bRam0000000003eb5682 = 1;
    }
    lStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_18c = 0;
    if (plVar17[6] == 0) goto code_r0x01635c24;
    param_3 = &lStack_138;
    param_4 = plRam0000000003d2fec0;
    plVar12 = (long *)/*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(plVar17[6],plVar21);
    if ((int)plVar12 == 0) {
      return plVar12;
    }
    if (lStack_138 == 0) goto code_r0x01635c24;
    if (*(long *)(lStack_138 + 0x20) == 0) goto code_r0x01635c24;
    unaff_x22 = (ulong)*(uint *)(*(long *)(lStack_138 + 0x20) + 0x20);
    plVar9 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<AssetManagerHandle>_TypeInfo*/ uRam0000000003d1d7d0);
    param_3 = plRam0000000003d39d48;
    /*System.Collections.Generic.List<AssetManagerHandle>$$.ctor*/ func_0x0236ed70(plVar9,unaff_x22);
    if (lStack_138 == 0) goto code_r0x01635c24;
    plStack_1c0 = plVar21;
    if (*(long *)(lStack_138 + 0x20) == 0) goto code_r0x01635c24;
    /*System.Collections.Generic.HashSet<AssetManagerHandle>$$GetEnumerator*/ func_0x021cf268(&uStack_1b8,*(long *)(lStack_138 + 0x20),uRam0000000003d35c78);
    uStack_148 = uStack_1b0;
    uStack_150 = uStack_1b8;
    uStack_140 = uStack_1a8;
    unaff_x26 = 0x3d339f8;
    unaff_x27 = 0x3d1fdb0;
    unaff_x28 = 0x3d39d50;
    plVar20 = &lStack_198;
    unaff_x25 = (long *)0x0;
    while( true ) {
      uVar19 = /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f636e0(&uStack_150,uRam0000000003d32180);
      if ((uVar19 & 1) == 0) break;
      if (plVar17[5] == 0) {
        func_0x00f78af4();
code_r0x01635c20:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1635c24);
        (*pcVar4)();
      }
      iVar8 = (int)uStack_140;
      /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$GetEnumerator*/ func_0x01e2d0f8(&uStack_1b8,plVar17[5],uRam0000000003d2df80);
      uStack_168 = uStack_1b0;
      uStack_170 = uStack_1b8;
      uStack_158 = uStack_1a0;
      uStack_160 = uStack_1a8;
      while (uVar13 = /*System.Collections.Generic.Dictionary.Enumerator<AssetManagerHandle, AssetManagerHandle>$$MoveNext*/ func_0x01fb7ce0(&uStack_170,uRam0000000003d339f8), uVar19 = uStack_160,
            (uVar13 & 1) != 0) {
        if (((*(ushort *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Assets.AssetManagerHandle_TypeInfo*/ lRam0000000003d1fdb0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (iVar8 == (int)(uVar19 >> 0x20)) {
          if (plVar9 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x01635c20;
          }
          param_3 = plRam0000000003d39d50;
          /*System.Collections.Generic.List<AssetManagerHandle>$$Add*/ func_0x0236f95c(plVar9,uVar19 & 0xffffffff);
        }
      }
      unaff_x22 = 0;
      *(undefined4 *)((long)plVar20 + (long)(int)unaff_x25 * 4) = 0x86;
      uVar3 = uStack_18c;
      uVar18 = uStack_18c + 1;
      plVar21 = (long *)(ulong)uVar18;
      uStack_18c = uVar18;
      /*System.Collections.Generic.Dictionary.Enumerator<AssetManagerHandle, AssetManagerHandle>$$Dispose*/ func_0x01fb7e4c(&uStack_170,uRam0000000003d339f0);
      unaff_x25 = (long *)0x0;
      if ((uVar18 != 0) &&
         (unaff_x25 = plVar21, *(int *)((long)plVar20 + (long)(int)uVar3 * 4) == 0x86)) {
        unaff_x25 = (long *)(ulong)uVar3;
        uStack_18c = uVar3;
      }
    }
    *(undefined4 *)((long)&lStack_198 + (long)(int)unaff_x25 * 4) = 0x9f;
    uStack_18c = uStack_18c + 1;
    unaff_x24 = (ulong)uStack_18c;
    /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc(&uStack_150,uRam0000000003d32168);
    do {
      if ((int)unaff_x24 != 0) {
        uVar18 = (int)unaff_x24 - 1;
        if (*(int *)((long)&lStack_198 + (long)(int)uVar18 * 4) == 0x9f) {
          unaff_x24 = (ulong)uVar18;
          uStack_18c = uVar18;
        }
      }
      if (plVar9 != (long *)0x0) {
        /*System.Collections.Generic.List<AssetManagerHandle>$$GetEnumerator*/ func_0x0237041c(&uStack_188,plVar9,uRam0000000003d39d60);
        auVar24._8_8_ = plVar17;
        auVar24._0_8_ = 0x3d32198;
        while (uVar19 = /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f639a0(&uStack_188,uRam0000000003d32198), (uVar19 & 1) != 0) {
          /*Core.Assets.AssetManager$$RemoveReference*/ func_0x01635330(plVar17,uStack_178 & 0xffffffff);
        }
        *(undefined4 *)((long)&lStack_198 + (long)(int)unaff_x24 * 4) = 0xd3;
        uStack_18c = uStack_18c + 1;
        /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f6399c(&uStack_188,uRam0000000003d32190);
        puVar23 = &UNK_01635bec;
        plVar12 = plStack_1c0;
        unaff_x23 = plVar21;
        pppppppuVar22 = &pppppppuStack_e0;
        goto code_r0x016366f0;
      }
code_r0x01635c24:
      func_0x00f78af4();
      if (extraout_w1 != 1) goto code_r0x01635cac;
      puVar14 = (ulong *)___cxa_begin_catch();
      unaff_x22 = *puVar14;
      ___cxa_end_catch();
      /*System.Collections.Generic.HashSet.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f636dc(&uStack_150,uRam0000000003d32168);
    } while (unaff_x22 == 0);
    func_0x00f78ac0(unaff_x22,0);
code_r0x01635cac:
    auVar25 = __Unwind_Resume();
    plVar12 = plVar17;
    unaff_x23 = plVar21;
    pppppppuVar22 = &pppppppuStack_e0;
    pcVar4 = (code *)&Core_Assets_AssetManager__RequestAsset;
    goto code_r0x01635cb0;
  }
  auVar24 = func_0x00f78af4();
  pcStack_d8 = Atlas_Definitions_AtlasAssetManagerExtensions__RequestAsset;
  pppppppuStack_e0 = pppppppuVar22;
  if ((bRam0000000003eb47c2 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb47c2 = 1;
  }
  if ((auVar24._8_8_ != 0) && (plVar9 = *(long **)(auVar24._8_8_ + 0x50), plVar9 != (long *)0x0)) {
    plVar9 = (long *)(**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
    auVar25._8_8_ = plVar9;
    auVar25._0_8_ = auVar24._0_8_;
    if (auVar24._0_8_ != 0) {
      if ((plVar9 == (long *)0x0) || (*plVar9 == /*string_TypeInfo*/ lRam0000000003d24dd0)) {
        plVar9 = (long *)0x3eb4000;
        pplVar5 = (long **)&uStack_d0;
        plVar20 = plVar17;
        pppppppuVar22 = pppppppuStack_e0;
        pcVar4 = pcStack_d8;
code_r0x01635cb0:
        auVar26._8_8_ = unaff_x23;
        auVar26._0_8_ = unaff_x22;
        plVar17 = (long *)0x0;
        puVar6 = (undefined1 *)pplVar5;
Core_Assets_AssetManager__RequestAsset:
        do {
          plVar16 = auVar25._8_8_;
          lVar10 = auVar25._0_8_;
          plVar21 = (long *)0x0;
          *(undefined8 *)(puVar6 + -0x60) = unaff_x28;
          *(undefined8 *)(puVar6 + -0x58) = unaff_x27;
          *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
          *(long **)(puVar6 + -0x48) = unaff_x25;
          *(ulong *)(puVar6 + -0x40) = unaff_x24;
          *(long *)(puVar6 + -0x38) = auVar26._8_8_;
          *(long *)(puVar6 + -0x30) = auVar26._0_8_;
          *(long **)(puVar6 + -0x28) = plVar9;
          *(long **)(puVar6 + -0x20) = plVar12;
          *(long **)(puVar6 + -0x18) = plVar20;
          *(undefined8 ********)(puVar6 + -0x10) = pppppppuVar22;
          *(code **)(puVar6 + -8) = pcVar4;
          unaff_x26 = 0x3eb5000;
          plVar12 = plVar17;
          plVar20 = param_3;
          if ((bRam0000000003eb567e & 1) == 0) {
            func_0x00f78a20(0x3d2fec0);
            func_0x00f78a20(0x3d2fad0);
            func_0x00f78a20(0x3d2e030);
            func_0x00f78a20(0x3d2dfd0);
            func_0x00f78a20(0x3d2e038);
            func_0x00f78a20(0x3d35c70);
            func_0x00f78a20(0x3d3ccc0);
            bRam0000000003eb567e = 1;
          }
          *(undefined8 *)(puVar6 + -0xf8) = 0;
          *(undefined4 *)(puVar6 + -0x100) = 0;
          if (*(long *)(lVar10 + 0x30) != 0) {
            plVar21 = (long *)(puVar6 + -0xf8);
            plVar12 = plRam0000000003d2fec0;
            iVar8 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar10 + 0x30),param_3);
            if ((iVar8 == 0) || (uVar19 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(plVar16,0), (uVar19 & 1) != 0)) {
              return (long *)0x0;
            }
            if (*(long *)(lVar10 + 0x20) != 0) {
              plVar21 = (long *)(puVar6 + -0x100);
              plVar12 = plRam0000000003d2fad0;
              uVar19 = /*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$TryGetValue*/ func_0x01ec0ed8(*(long *)(lVar10 + 0x20),plVar16);
              if ((uVar19 & 1) == 0) {
                plVar12 = (long *)0x0;
                plVar21 = param_3;
                /*Core.Assets.AssetManager$$AddAsset*/ func_0x016360d4(puVar6 + -0xf0,lVar10,plVar16);
                uVar2 = *(undefined4 *)(puVar6 + -0xf0);
                *(undefined4 *)(puVar6 + -0x100) = uVar2;
                plVar20 = plVar17;
code_r0x01635e94:
                uVar18 = *(uint *)(lVar10 + 0x38);
                plVar17 = (long *)(ulong)uVar18;
                *(uint *)(lVar10 + 0x38) = uVar18 + 1;
                lVar15 = *(long *)(lVar10 + 0x10);
                if (lVar15 != 0) {
                  *(uint *)(puVar6 + -0xf0) = uVar18;
                  *(undefined4 *)(puVar6 + -0xec) = uVar2;
                  *(long **)(puVar6 + -0xe8) = param_4;
                  *(long **)(puVar6 + -0xe0) = param_5;
                  *(undefined8 *)(puVar6 + -0xd8) = 0;
                  plVar21 = plRam0000000003d3ccc0;
                  /*System.Collections.Generic.List<AssetManager.AssetRequest>$$Add*/ func_0x024afe2c(lVar15,puVar6 + -0xf0);
                  if (*(long *)(lVar10 + 0x28) != 0) {
                    plVar21 = (long *)(ulong)*(uint *)(puVar6 + -0x100);
                    plVar12 = plRam0000000003d2dfd0;
                    /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$set_Item*/ func_0x01e2cb1c(*(long *)(lVar10 + 0x28),plVar17);
                    if ((*(long *)(puVar6 + -0xf8) != 0) &&
                       (lVar15 = *(long *)(*(long *)(puVar6 + -0xf8) + 0x20), lVar15 != 0)) {
                      /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Add*/ func_0x021cf8ec(lVar15,*(undefined4 *)(puVar6 + -0x100),uRam0000000003d35c70);
                      return plVar17;
                    }
                  }
                }
              }
              else if (*(long *)(lVar10 + 0x18) != 0) {
                plVar21 = plRam0000000003d2e030;
                /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(puVar6 + -0xf0,*(long *)(lVar10 + 0x18),
                                *(undefined4 *)(puVar6 + -0x100));
                *(undefined8 *)(puVar6 + -0x138) = *(undefined8 *)(puVar6 + -0xa8);
                *(undefined8 *)(puVar6 + -0x140) = *(undefined8 *)(puVar6 + -0xb0);
                *(undefined8 *)(puVar6 + -0x128) = *(undefined8 *)(puVar6 + -0x98);
                *(undefined8 *)(puVar6 + -0x130) = *(undefined8 *)(puVar6 + -0xa0);
                *(undefined8 *)(puVar6 + -0x118) = *(undefined8 *)(puVar6 + -0x88);
                *(undefined8 *)(puVar6 + -0x120) = *(undefined8 *)(puVar6 + -0x90);
                *(undefined8 *)(puVar6 + -0x108) = *(undefined8 *)(puVar6 + -0x78);
                *(undefined8 *)(puVar6 + -0x110) = *(undefined8 *)(puVar6 + -0x80);
                *(undefined8 *)(puVar6 + -0x178) = *(undefined8 *)(puVar6 + -0xe8);
                *(undefined8 *)(puVar6 + -0x180) = *(undefined8 *)(puVar6 + -0xf0);
                *(undefined8 *)(puVar6 + -0x168) = *(undefined8 *)(puVar6 + -0xd8);
                *(undefined8 *)(puVar6 + -0x170) = *(undefined8 *)(puVar6 + -0xe0);
                *(undefined8 *)(puVar6 + -0x158) = *(undefined8 *)(puVar6 + -200);
                *(undefined8 *)(puVar6 + -0x160) = *(undefined8 *)(puVar6 + -0xd0);
                *(undefined8 *)(puVar6 + -0x148) = *(undefined8 *)(puVar6 + -0xb8);
                *(undefined8 *)(puVar6 + -0x150) = *(undefined8 *)(puVar6 + -0xc0);
                lVar15 = *(long *)(lVar10 + 0x18);
                if (lVar15 != 0) {
                  *(undefined8 *)(puVar6 + -0xa8) = *(undefined8 *)(puVar6 + -0x138);
                  *(undefined8 *)(puVar6 + -0xb0) = *(undefined8 *)(puVar6 + -0x140);
                  *(undefined8 *)(puVar6 + -0x98) = *(undefined8 *)(puVar6 + -0x128);
                  *(undefined8 *)(puVar6 + -0xa0) = *(undefined8 *)(puVar6 + -0x130);
                  *(undefined8 *)(puVar6 + -0x88) = *(undefined8 *)(puVar6 + -0x118);
                  *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0x120);
                  *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x108);
                  *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x110);
                  *(undefined8 *)(puVar6 + -0xe8) = *(undefined8 *)(puVar6 + -0x178);
                  *(undefined8 *)(puVar6 + -0xf0) = *(undefined8 *)(puVar6 + -0x180);
                  *(undefined8 *)(puVar6 + -0xd8) = *(undefined8 *)(puVar6 + -0x168);
                  *(undefined8 *)(puVar6 + -0xe0) = *(undefined8 *)(puVar6 + -0x170);
                  *(undefined8 *)(puVar6 + -200) = *(undefined8 *)(puVar6 + -0x158);
                  *(undefined8 *)(puVar6 + -0xd0) = *(undefined8 *)(puVar6 + -0x160);
                  *(undefined8 *)(puVar6 + -0xb8) = *(undefined8 *)(puVar6 + -0x148);
                  *(undefined8 *)(puVar6 + -0xc0) = *(undefined8 *)(puVar6 + -0x150);
                  *(int *)(puVar6 + -0x70) = *(int *)(puVar6 + -0x70) + 1;
                  *(undefined4 *)(puVar6 + -0x6c) = *(undefined4 *)(puVar6 + -0x6c);
                  plVar21 = (long *)(puVar6 + -0xf0);
                  plVar12 = plRam0000000003d2e038;
                  /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(lVar15,*(undefined4 *)(puVar6 + -0x100));
                  uVar2 = *(undefined4 *)(puVar6 + -0x100);
                  goto code_r0x01635e94;
                }
              }
            }
          }
          auVar26 = func_0x00f78af4();
          plVar9 = auVar26._8_8_;
          *(undefined8 *)(puVar6 + -0x1c0) = 0;
          *(long **)(puVar6 + -0x1b8) = param_3;
          *(long **)(puVar6 + -0x1b0) = plVar17;
          *(long **)(puVar6 + -0x1a8) = param_4;
          *(long **)(puVar6 + -0x1a0) = param_5;
          *(long *)(puVar6 + -0x198) = lVar10;
          *(undefined1 **)(puVar6 + -400) = puVar6 + -0x10;
          *(undefined **)(puVar6 + -0x188) = &Core_Assets_AssetManager__RequestAsset;
          pppppppuVar22 = (undefined8 *******)(puVar6 + -400);
          unaff_x24 = 0x3eb5000;
          param_3 = plVar21;
          param_4 = plVar12;
          param_5 = plVar20;
          if ((bRam0000000003eb567c & 1) == 0) {
            func_0x00f78a20(0x3d24dd0);
            bRam0000000003eb567c = 1;
          }
          unaff_x25 = plVar16;
          if (plVar9 == (long *)0x0) {
            func_0x00f78af4();
            plVar9 = extraout_x8_00;
          }
          else {
            plVar9 = (long *)(**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0))
            ;
            auVar25._8_8_ = plVar9;
            auVar25._0_8_ = auVar26._0_8_;
            if ((plVar9 == (long *)0x0) || (*plVar9 == /*string_TypeInfo*/ lRam0000000003d24dd0)) {
              plVar17 = (long *)0x0;
              pppppppuVar22 = *(undefined8 ********)(puVar6 + -400);
              pcVar4 = *(code **)(puVar6 + -0x188);
              plVar9 = (long *)(puVar6 + -0x1a0);
              plVar16 = (long *)(puVar6 + -0x198);
              plVar1 = (long *)(puVar6 + -0x1a8);
              unaff_x24 = *(ulong *)(puVar6 + -0x1c0);
              auVar26._8_8_ = *(undefined8 *)(puVar6 + -0x1b8);
              auVar26._0_8_ = *(undefined8 *)(puVar6 + -0x1b0);
              puVar6 = puVar6 + -0x180;
              param_3 = plVar21;
              param_4 = plVar12;
              param_5 = plVar20;
              plVar20 = (long *)*plVar16;
              plVar12 = (long *)*plVar9;
              plVar9 = (long *)*plVar1;
              goto Core_Assets_AssetManager__RequestAsset;
            }
          }
          pcVar4 = (code *)&Core_Assets_AssetManager__RequestSpriteAsset;
          auVar25 = func_0x00f78e5c(plVar9);
          plVar17 = (long *)((long)&MACH_HEADER.magic + 1);
          puVar6 = puVar6 + -0x1c0;
          plVar9 = plVar21;
        } while( true );
      }
      goto LAB_014586d8;
    }
  }
  func_0x00f78af4();
  plVar9 = extraout_x8;
LAB_014586d8:
  lVar10 = func_0x00f78e5c(plVar9);
  return *(long **)(lVar10 + 0x48);
}



