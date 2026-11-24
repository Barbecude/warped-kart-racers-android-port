// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Contexts.ContextManager

// ============================================================
// RVA: 0x163cc84 | Core.Contexts.ContextManager.add_OnInitFinished
// ============================================================

ulong Core_Contexts_ContextManager__add_OnInitFinished(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb56ed & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb56ed = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x10);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x10),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb56ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb56ee = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x10);
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
  return (ulong)*(byte *)(lVar4 + 0x50);
}



// ============================================================
// RVA: 0x163cd24 | Core.Contexts.ContextManager.remove_OnInitFinished
// ============================================================

ulong Core_Contexts_ContextManager__remove_OnInitFinished(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000003eb56ee & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb56ee = 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x10);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x10),plVar2,uVar5);
    bVar1 = uVar5 == uVar3;
    uVar5 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(byte *)(lVar4 + 0x50);
}



// ============================================================
// RVA: 0x163cdc4 | Core.Contexts.ContextManager.get_IsContextChanging
// ============================================================

undefined1 Core_Contexts_ContextManager__get_IsContextChanging(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



// ============================================================
// RVA: 0x163cdcc | Core.Contexts.ContextManager.get_UpdatingCurrentContext
// ============================================================

undefined1 Core_Contexts_ContextManager__get_UpdatingCurrentContext(long param_1)

{
  return *(undefined1 *)(param_1 + 0x51);
}



// ============================================================
// RVA: 0x163cdd4 | Core.Contexts.ContextManager.Init
// ============================================================

long Core_Contexts_ContextManager__Init(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  int extraout_w1;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  if ((bRam0000000003eb56ef & 1) == 0) {
    func_0x00f78a20(0x3d550d0);
    func_0x00f78a20(0x3d2fbc0);
    func_0x00f78a20(0x3d32608);
    func_0x00f78a20(0x3d32610);
    func_0x00f78a20(0x3d32618);
    func_0x00f78a20(0x3d22018);
    func_0x00f78a20(0x3d3a858);
    func_0x00f78a20(0x3d3cf88);
    func_0x00f78a20(0x3d1e0e8);
    bRam0000000003eb56ef = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  if (param_2 == 0) goto LAB_0163cfd8;
  unaff_x25 = (undefined8 *)0x3d550d0;
  unaff_x24 = (undefined8 *)0x3d1e0e8;
  unaff_x26 = (undefined8 *)0x3d32608;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_78,param_2,uRam0000000003d3a858);
  while (uVar2 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_78,uRam0000000003d32610), plVar5 = plStack_68,
        (uVar2 & 1) != 0) {
    if (plStack_68 == (long *)0x0) {
      func_0x00f78af4();
code_r0x0163cfd4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x163cfd8);
      (*pcVar1)();
    }
    lVar8 = *(long *)(param_1 + 0x18);
    lVar6 = *plStack_68;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == /*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0163cf3c;
        }
        piVar7 = piVar7 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plStack_68,/*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018,0);
LAB_0163cf3c:
    uVar4 = (*(code *)*puVar3)(plVar5,puVar3[1]);
    if (lVar8 == 0) {
      func_0x00f78af4(uVar4,uVar4);
      goto code_r0x0163cfd4;
    }
    /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(lVar8,uVar4,plVar5,uRam0000000003d2fbc0);
  }
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,uRam0000000003d32608);
  do {
    *(long *)(param_1 + 0x28) = param_3;
    if (param_3 != 0) {
      uVar4 = Core_Application_DependencyManager__GetDependency_AchievementManager_
                        (param_3,*unaff_x25);
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      uVar4 = func_0x00f78aec(*unaff_x24);
      lVar6 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar4,uRam0000000003d3cf88);
      *(undefined8 *)(param_1 + 0x58) = uVar4;
      return lVar6;
    }
LAB_0163cfd8:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x0163d01c;
    plVar5 = (long *)___cxa_begin_catch();
    lVar6 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,*unaff_x26);
  } while (lVar6 == 0);
  func_0x00f78ac0(lVar6,0);
code_r0x0163d01c:
  uVar4 = __Unwind_Resume();
  if ((bRam0000000003eb56f0 & 1) == 0) {
    func_0x00f78a20(0x3d26d58);
    bRam0000000003eb56f0 = 1;
  }
  lVar6 = func_0x00f78aec(/*Core.Contexts.ContextManager.<DeInit>d__25_TypeInfo*/ uRam0000000003d26d58);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar6,0);
  *(undefined4 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 0x20) = uVar4;
  return lVar6;
}



// ============================================================
// RVA: 0x163d020 | Core.Contexts.ContextManager.DeInit
// ============================================================

long Core_Contexts_ContextManager__DeInit(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb56f0 & 1) == 0) {
    func_0x00f78a20(0x3d26d58);
    bRam0000000003eb56f0 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Contexts.ContextManager.<DeInit>d__25_TypeInfo*/ uRam0000000003d26d58);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  return lVar1;
}



// ============================================================
// RVA: 0x163d0b8 | Core.Contexts.ContextManager.DeInitEditor
// ============================================================

void Core_Contexts_ContextManager__DeInitEditor(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000003eb56f1 & 1) == 0) {
    func_0x00f78a20(0x3d22018);
    bRam0000000003eb56f1 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x68);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == /*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 8) * 0x10 + 0x138);
        goto LAB_0163d154;
      }
      piVar4 = piVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)func_0x00fac1f0(plVar5,/*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018,8);
LAB_0163d154:
                    /* WARNING: Could not recover jumptable at 0x0163d164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}



// ============================================================
// RVA: 0x163d168 | Core.Contexts.ContextManager.Update
// ============================================================

void Core_Contexts_ContextManager__Update(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  if ((bRam0000000003eb56f2 & 1) == 0) {
    func_0x00f78a20(0x3d20a18);
    func_0x00f78a20(0x3d22018);
    bRam0000000003eb56f2 = 1;
  }
  if (((*(ushort *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = **(undefined8 **)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0xb8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar6,0);
  if ((*(char *)(param_1 + 0x50) != '\0') && (*(long *)(param_1 + 0x60) == 0)) {
    lVar8 = *(long *)(param_1 + 0x20);
    uVar2 = /*Core.Contexts.ContextManager$$RunContextChange*/ func_0x0163d2fc(param_1);
    if (lVar8 == 0) {
      func_0x00f78af4(uVar2,uVar2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x163d2b0);
      (*pcVar1)();
    }
    uVar2 = Core_Application_CoroutineRunner__StartCoroutine(lVar8,uVar2,0);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
  }
  if ((*(char *)(param_1 + 0x51) != '\0') &&
     (plVar7 = *(long **)(param_1 + 0x68), plVar7 != (long *)0x0)) {
    lVar8 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == /*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_0163d280;
        }
        piVar5 = piVar5 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)func_0x00fac1f0(plVar7,/*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018,3);
LAB_0163d280:
    (*(code *)*puVar3)(plVar7,param_2,puVar3[1]);
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar6);
  return;
}



// ============================================================
// RVA: 0x163d2fc | Core.Contexts.ContextManager.RunContextChange
// ============================================================

long Core_Contexts_ContextManager__RunContextChange(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb56f6 & 1) == 0) {
    func_0x00f78a20(0x3d26d60);
    bRam0000000003eb56f6 = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.Contexts.ContextManager.<RunContextChange>d__32_TypeInfo*/ uRam0000000003d26d60);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  return lVar1;
}



// ============================================================
// RVA: 0x163d368 | Core.Contexts.ContextManager.PreLateUpdate
// ============================================================

void Core_Contexts_ContextManager__PreLateUpdate(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((bRam0000000003eb56f3 & 1) == 0) {
    func_0x00f78a20(0x3d20a18);
    func_0x00f78a20(0x3d22018);
    bRam0000000003eb56f3 = 1;
  }
  if (((*(ushort *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = *(undefined8 *)(*(long *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0xb8) + 0x10);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar5,0);
  if ((*(char *)(param_1 + 0x51) != '\0') &&
     (plVar6 = *(long **)(param_1 + 0x68), plVar6 != (long *)0x0)) {
    lVar2 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == /*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
          goto LAB_0163d44c;
        }
        piVar4 = piVar4 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)func_0x00fac1f0(plVar6,/*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018,4);
LAB_0163d44c:
    (*(code *)*puVar1)(plVar6,param_2,puVar1[1]);
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar5);
  return;
}



// ============================================================
// RVA: 0x163d498 | Core.Contexts.ContextManager.LateUpdate
// ============================================================

void Core_Contexts_ContextManager__LateUpdate(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((bRam0000000003eb56f4 & 1) == 0) {
    func_0x00f78a20(0x3d20a18);
    func_0x00f78a20(0x3d22018);
    bRam0000000003eb56f4 = 1;
  }
  if (((*(ushort *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = *(undefined8 *)(*(long *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0xb8) + 0x18);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar5,0);
  if ((*(char *)(param_1 + 0x51) != '\0') &&
     (plVar6 = *(long **)(param_1 + 0x68), plVar6 != (long *)0x0)) {
    lVar2 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == /*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 5) * 0x10 + 0x138);
          goto LAB_0163d57c;
        }
        piVar4 = piVar4 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)func_0x00fac1f0(plVar6,/*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018,5);
LAB_0163d57c:
    (*(code *)*puVar1)(plVar6,param_2,puVar1[1]);
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar5);
  return;
}



// ============================================================
// RVA: 0x163d5c8 | Core.Contexts.ContextManager.FixedUpdate
// ============================================================

void Core_Contexts_ContextManager__FixedUpdate(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((bRam0000000003eb56f5 & 1) == 0) {
    func_0x00f78a20(0x3d20a18);
    func_0x00f78a20(0x3d22018);
    bRam0000000003eb56f5 = 1;
  }
  if (((*(ushort *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = *(undefined8 *)(*(long *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0xb8) + 8);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar5,0);
  if ((*(char *)(param_1 + 0x51) != '\0') &&
     (plVar6 = *(long **)(param_1 + 0x68), plVar6 != (long *)0x0)) {
    lVar2 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == /*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 6) * 0x10 + 0x138);
          goto LAB_0163d6ac;
        }
        piVar4 = piVar4 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)func_0x00fac1f0(plVar6,/*Core.Contexts.IContext_TypeInfo*/ lRam0000000003d22018,6);
LAB_0163d6ac:
    (*(code *)*puVar1)(plVar6,param_2,puVar1[1]);
  }
  if (pcRam0000000003ec05a0 == (code *)0x0) {
    pcRam0000000003ec05a0 =
         (code *)func_0x00f789d4(
                                "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec05a0)(uVar5);
  return;
}



// ============================================================
// RVA: 0x163d6f8 | Core.Contexts.ContextManager.RequestContextChange
// ============================================================

bool Core_Contexts_ContextManager__RequestContextChange
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x50);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x50) = 1;
    *(undefined8 *)(param_1 + 0x40) = param_2;
    *(undefined8 *)(param_1 + 0x48) = param_3;
  }
  return cVar1 == '\0';
}



// ============================================================
// RVA: 0x163d744 | Core.Contexts.ContextManager.GetCurrentContextInfo
// ============================================================

undefined8 Core_Contexts_ContextManager__GetCurrentContextInfo(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x38);
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x163d754 | Core.Contexts.ContextManager.GetCurrentContext
// ============================================================

undefined8 Core_Contexts_ContextManager__GetCurrentContext(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x163d75c | Core.Contexts.ContextManager.GetContext
// ============================================================

ulong Core_Contexts_ContextManager__GetContext(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  ulong uStack_38;
  
  if ((bRam0000000003eb56f7 & 1) == 0) {
    func_0x00f78a20(0x3d2fbc8);
    bRam0000000003eb56f7 = 1;
  }
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(param_1 + 0x18),param_2,&uStack_38,uRam0000000003d2fbc8);
    if (iVar1 == 0) {
      uStack_38 = 0;
    }
    return uStack_38;
  }
  auVar3 = func_0x00f78af4();
  lVar2 = *(long *)(auVar3._0_8_ + 0x48);
  *auVar3._8_8_ = lVar2;
  return (ulong)(lVar2 != 0);
}



// ============================================================
// RVA: 0x163d7e0 | Core.Contexts.ContextManager.TryGetRequestedContext
// ============================================================

bool Core_Contexts_ContextManager__TryGetRequestedContext(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  *param_2 = lVar1;
  return lVar1 != 0;
}



// ============================================================
// RVA: 0x163d7f4 | Core.Contexts.ContextManager.AddCanDeInitContextCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x0163d968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163d96c) */

ulong Core_Contexts_ContextManager__AddCanDeInitContextCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  int extraout_w1;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 in_x6;
  undefined8 in_x7;
  uint extraout_w8;
  undefined *puVar13;
  long lVar14;
  long extraout_x9;
  int *piVar15;
  ulong unaff_x19;
  undefined8 unaff_x20;
  uint uVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  code *pcVar21;
  ulong uVar22;
  undefined **ppuVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 *puVar26;
  undefined *puStack_108;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((bRam0000000003eb56f8 & 1) == 0) {
    func_0x00f78a20(0x3d3cf90);
    bRam0000000003eb56f8 = 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x58);
  if (uVar5 == 0) {
    auVar24 = func_0x00f78af4();
    if ((bRam0000000003eb56f9 & 1) == 0) {
      func_0x00f78a20(0x3d3cfa0);
      bRam0000000003eb56f9 = 1;
    }
    puVar11 = puRam0000000003d3cfa0;
    lVar14 = *(long *)(auVar24._0_8_ + 0x58);
    if (lVar14 != 0) {
      if (lVar14 != 0) {
        uVar8 = (*(code *)**(undefined8 **)(*(long *)(puRam0000000003d3cfa0[3] + 0xc0) + 0xf8))();
        if (-1 < (int)(uint)uVar8) {
          (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x108))(lVar14,uVar8);
        }
        return (ulong)(~(uint)uVar8 >> 0x1f);
      }
      auVar24 = func_0x00f78af4(0,auVar24._8_8_);
      lVar14 = auVar24._8_8_;
      uVar5 = **(ulong **)(puVar11[3] + 0xc0);
      uVar1 = *(ushort *)(uVar5 + 0x132);
      puVar12 = puVar11;
      if ((uVar1 & 1) == 0) {
        func_0x00fac028(uVar5);
        uVar1 = *(ushort *)(uVar5 + 0x132);
      }
      if ((uVar1 >> 10 & 1) != 0) {
        uVar5 = **(ulong **)(puVar11[3] + 0xc0);
        if ((*(ushort *)(uVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(uVar5);
        }
        if (*(int *)(uVar5 + 0xe0) == 0) {
          uVar5 = **(ulong **)(puVar11[3] + 0xc0);
          if ((*(ushort *)(uVar5 + 0x132) & 1) == 0) {
            func_0x00fac028(uVar5);
          }
          func_0x00f78ad0(uVar5);
        }
      }
      uVar7 = (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0xa0))(lVar14);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
      if (auVar24._0_8_ != 0) {
        UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x110);
        lVar19 = *(long *)(*(long *)(puVar11[3] + 0xc0) + 0x38);
        if ((*(ushort *)(lVar19 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar19);
        }
        if (lVar14 == 0) {
          lVar18 = 0;
        }
        else {
          lVar18 = func_0x00f78adc(lVar14,lVar19);
          if (lVar18 == 0) {
            uVar5 = func_0x00f78e5c(lVar14,lVar19);
            return uVar5;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x02428794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*UNRECOVERED_JUMPTABLE)
                          (auVar24._0_8_,lVar18,
                           *(undefined8 *)(*(long *)(puVar11[3] + 0xc0) + 0x110));
        return uVar5;
      }
      auVar24 = func_0x00f78af4();
      lVar14 = auVar24._8_8_;
      lVar19 = auVar24._0_8_;
      puStack_a8 = &System_Collections_Generic_List_AddressablesImpl_ResourceLocatorInfo___RemoveAll
      ;
      puVar11 = puVar12;
      if (lVar14 == 0) {
        /*System.ThrowHelper$$ThrowArgumentNullException*/ func_0x029ef698(8);
      }
      uVar7 = (ulong)*(uint *)(lVar19 + 0x18);
      if ((int)*(uint *)(lVar19 + 0x18) < 1) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0;
        do {
          lVar18 = *(long *)(lVar19 + 0x10);
          if (lVar18 == 0) goto code_r0x02428920;
          if (*(uint *)(lVar18 + 0x18) <= uVar22) goto code_r0x02428924;
          if (lVar14 == 0) goto code_r0x02428920;
          puVar11 = *(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 200);
          iVar4 = (*(code *)*puVar11)(lVar14,*(undefined8 *)(lVar18 + uVar22 * 8 + 0x20));
          if (iVar4 != 0) {
            uVar7 = (ulong)*(uint *)(lVar19 + 0x18);
            break;
          }
          uVar22 = uVar22 + 1;
          uVar7 = (ulong)*(int *)(lVar19 + 0x18);
        } while ((long)uVar22 < (long)uVar7);
      }
      uVar5 = uVar22;
      uVar22 = uVar5;
      if ((int)uVar7 <= (int)uVar5) {
        return 0;
      }
      do {
        uVar22 = (ulong)((int)uVar22 + 1);
        do {
          uVar16 = (uint)uVar5;
          if ((int)uVar7 <= (int)uVar22) {
            /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar19 + 0x10),uVar5,(int)uVar7 - uVar16,0);
            iVar4 = *(int *)(lVar19 + 0x18);
            *(uint *)(lVar19 + 0x18) = uVar16;
            *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
            return (ulong)(iVar4 - uVar16);
          }
          lVar18 = (-(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3) + 0x20;
          do {
            lVar9 = *(long *)(lVar19 + 0x10);
            if (lVar9 == 0) goto code_r0x02428920;
            if (*(uint *)(lVar9 + 0x18) <= (uint)uVar22) goto code_r0x02428924;
            if (lVar14 == 0) goto code_r0x02428920;
            puVar11 = *(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 200);
            uVar7 = (*(code *)*puVar11)(lVar14,*(undefined8 *)(lVar9 + lVar18));
            if ((uVar7 & 1) == 0) {
              uVar10 = *(uint *)(lVar19 + 0x18);
              break;
            }
            uVar20 = (uint)uVar22 + 1;
            uVar22 = (ulong)uVar20;
            uVar10 = *(uint *)(lVar19 + 0x18);
            lVar18 = lVar18 + 8;
          } while ((int)uVar20 < (int)uVar10);
          uVar7 = (ulong)uVar10;
          uVar20 = (uint)uVar22;
        } while ((int)uVar10 <= (int)uVar20);
        lVar18 = *(long *)(lVar19 + 0x10);
        if (lVar18 == 0) goto code_r0x02428920;
        if ((*(uint *)(lVar18 + 0x18) <= uVar20) || (*(uint *)(lVar18 + 0x18) <= uVar16))
        goto code_r0x02428924;
        *(undefined8 *)(lVar18 + 0x20 + (long)(int)uVar16 * 8) =
             *(undefined8 *)(lVar18 + 0x20 + (long)(int)uVar20 * 8);
        uVar5 = (ulong)(uVar16 + 1);
      } while( true );
    }
    lVar14 = func_0x00f78af4();
    uVar16 = 0;
    if ((bRam0000000003eb56fa & 1) == 0) {
      func_0x00f78a20(0x3d333a8);
      func_0x00f78a20(0x3d333b0);
      func_0x00f78a20(0x3d333b8);
      func_0x00f78a20(0x3d3cf98);
      bRam0000000003eb56fa = 1;
    }
    puStack_a8 = (undefined *)0x0;
    uStack_a0 = 0;
    UNRECOVERED_JUMPTABLE = (code *)0x0;
    if (*(long *)(lVar14 + 0x58) == 0) {
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar6 = (long *)___cxa_begin_catch();
        lVar14 = *plVar6;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&puStack_a8,uRam0000000003eb5000);
        if (lVar14 == 0) goto code_r0x0163d980;
        func_0x00f78ac0(lVar14,0);
      }
      pcVar21 = (code *)__Unwind_Resume();
    }
    else {
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&puStack_a8,*(long *)(lVar14 + 0x58),uRam0000000003d3cf98);
      uVar16 = 1;
      uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&puStack_a8,uRam0000000003d333b0);
      if ((uVar5 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&puStack_a8,uRam0000000003d333a8);
code_r0x0163d980:
        return (ulong)uVar16;
      }
      pcVar21 = UNRECOVERED_JUMPTABLE;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x163d9a4);
        (*pcVar21)();
      }
    }
    puStack_108 = pcVar21;
    lVar14 = *(long *)(pcVar21 + 0x68);
    if (lVar14 == 0) {
      ppuVar23 = &puStack_108;
      lVar19 = 1;
    }
    else {
      lVar19 = *(long *)(lVar14 + 0x18);
      if (lVar19 == 0) {
        return 0;
      }
      ppuVar23 = (undefined **)(lVar14 + 0x20);
    }
    lVar14 = 0;
    do {
      puVar13 = ppuVar23[lVar14];
      pcVar17 = *(code **)(puVar13 + 0x10);
      plVar6 = *(long **)(puVar13 + 0x20);
      lVar18 = *(long *)(puVar13 + 0x28);
      if (*(short *)(lVar18 + 0x48) == -1) {
        func_0x00f78ad8(lVar18);
      }
      iVar4 = func_0x00f78a4c(lVar18);
      if (iVar4 == 0) {
        if ((((plVar6 == (long *)0x0) || (*(short *)(lVar18 + 0x48) == -1)) ||
            ((*(byte *)(*plVar6 + 0x115) & 1) != 0)) || (*(long *)(pcVar21 + 0x18) == 0))
        goto code_r0x0163daf0;
        iVar4 = func_0x00f78a44(lVar18);
        iVar3 = func_0x00f78ec0(lVar18);
        if (iVar4 == 0) {
          uVar1 = *(ushort *)(lVar18 + 0x48);
          if (iVar3 == 0) {
            lVar18 = *plVar6 + (ulong)uVar1 * 0x10;
            uVar5 = (**(code **)(lVar18 + 0x138))(plVar6,*(undefined8 *)(lVar18 + 0x140));
            goto code_r0x0163dafc;
          }
          lVar18 = func_0x00f78a48(lVar18);
          lVar9 = *plVar6;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar5 != 0) {
            piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar18) {
                puVar11 = (undefined8 *)(lVar9 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138)
                ;
                goto code_r0x0163dbc0;
              }
              piVar15 = piVar15 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar6,lVar18,(ulong)uVar1);
code_r0x0163dbc0:
          pcVar17 = (code *)*puVar11;
          puVar11 = (undefined8 *)puVar11[1];
        }
        else {
          if (iVar3 == 0) {
            uVar8 = *(undefined8 *)(*plVar6 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar9 = *plVar6;
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar5 != 0) {
              piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar18 + 0x18)) {
                  lVar9 = lVar9 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar18 + 0x48)) * 0x10 +
                          0x138;
                  goto code_r0x0163db98;
                }
                piVar15 = piVar15 + 4;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            lVar9 = func_0x00fac1f0(plVar6);
code_r0x0163db98:
            uVar8 = *(undefined8 *)(lVar9 + 8);
          }
          puVar11 = (undefined8 *)func_0x00f78acc(uVar8,lVar18);
          pcVar17 = (code *)*puVar11;
        }
        uVar5 = (*pcVar17)(plVar6,puVar11);
      }
      else if (*(char *)(lVar18 + 0x4a) == '\0') {
        uVar5 = (*pcVar17)(lVar18);
      }
      else {
code_r0x0163daf0:
        uVar5 = (*pcVar17)(plVar6,lVar18);
      }
code_r0x0163dafc:
      lVar14 = lVar14 + 1;
      if (lVar14 == lVar19) {
        return uVar5;
      }
    } while( true );
  }
  lVar14 = *(long *)(uVar5 + 0x10);
  puVar11 = puRam0000000003d3cf90;
  if (lVar14 == 0) {
code_r0x0242716c:
    param_2 = unaff_x20;
    uVar5 = unaff_x19;
    uVar7 = func_0x00f78af4();
    lVar14 = extraout_x9;
    uVar16 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar5 + 0x18) = uVar16 + 1;
  }
  else {
    uVar16 = *(uint *)(uVar5 + 0x18);
    uVar7 = uVar5;
    if (uVar16 != *(uint *)(lVar14 + 0x18)) goto code_r0x02427170;
    puVar11 = *(undefined8 **)(*(long *)(puRam0000000003d3cf90[3] + 0xc0) + 0x60);
    uVar7 = (*(code *)*puVar11)(uVar5,uVar16 + 1);
    lVar14 = *(long *)(uVar5 + 0x10);
    uVar16 = *(uint *)(uVar5 + 0x18);
    *(uint *)(uVar5 + 0x18) = uVar16 + 1;
    unaff_x19 = uVar5;
    unaff_x20 = param_2;
    if (lVar14 == 0) goto code_r0x0242716c;
  }
  if (uVar16 < *(uint *)(lVar14 + 0x18)) {
    *(undefined8 *)(lVar14 + (long)(int)uVar16 * 8 + 0x20) = param_2;
    *(int *)(uVar5 + 0x1c) = *(int *)(uVar5 + 0x1c) + 1;
    return uVar7;
  }
  uVar8 = func_0x00f78b24();
  auVar24 = func_0x00f78ac0(uVar8,0);
  lVar19 = auVar24._8_8_;
  lVar14 = auVar24._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x48))(lVar19,0x14);
  if (lVar14 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar21 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar21)();
  }
  pcVar21 = (code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x28);
  lVar18 = *(long *)(*(long *)(puVar11[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar18 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar18);
  }
  if (lVar19 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = func_0x00f78adc(lVar19,lVar18);
    if (lVar9 == 0) {
      func_0x00f78e5c(lVar19,lVar18);
      goto code_r0x0242734c;
    }
  }
  (*pcVar21)(lVar14,lVar9,*(undefined8 *)(*(long *)(puVar11[3] + 0xc0) + 0x28));
  iVar4 = (*(code *)**(undefined8 **)(*(long *)(puVar11[3] + 0xc0) + 0x68))(lVar14);
  return (ulong)(iVar4 - 1);
code_r0x02428920:
  func_0x00f78af4();
code_r0x02428924:
  uVar8 = func_0x00f78b24();
  auVar24 = func_0x00f78ac0(uVar8,0);
  uVar22 = auVar24._0_8_;
  puVar26 = &stack0xffffffffffffff10;
  uVar16 = *(uint *)(uVar22 + 0x18);
  uVar10 = auVar24._8_4_;
  uVar7 = uVar22;
  if (uVar16 <= uVar10) {
    uVar7 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    uVar16 = *(uint *)(uVar22 + 0x18);
  }
  iVar4 = uVar16 - 1;
  *(int *)(uVar22 + 0x18) = iVar4;
  if (iVar4 - uVar10 != 0 && (int)uVar10 <= iVar4) {
    puVar11 = *(undefined8 **)(uVar22 + 0x10);
    uVar7 = /*System.Array$$Copy*/ func_0x0292b4cc(puVar11,uVar10 + 1,puVar11,auVar24._8_8_,iVar4 - uVar10,0);
  }
  lVar19 = *(long *)(uVar22 + 0x10);
  if (lVar19 == 0) {
    func_0x00f78af4();
  }
  else if (*(uint *)(uVar22 + 0x18) < *(uint *)(lVar19 + 0x18)) {
    *(undefined8 *)(lVar19 + (long)(int)*(uint *)(uVar22 + 0x18) * 8 + 0x20) = 0;
    *(int *)(uVar22 + 0x1c) = *(int *)(uVar22 + 0x1c) + 1;
    return uVar7;
  }
  uVar8 = func_0x00f78b24();
  auVar25 = func_0x00f78ac0(uVar8,0);
  uVar22 = auVar25._0_8_;
  puStack_108 = &System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange;
  iVar4 = auVar25._8_4_;
  iVar3 = (int)puVar11;
  uVar7 = uVar22;
  if (iVar4 < 0) {
    uVar7 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
  }
  if (iVar3 < 0) {
    uVar7 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
  }
  if (*(int *)(uVar22 + 0x18) - iVar4 < iVar3) {
    uVar7 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
  }
  if (0 < iVar3) {
    iVar2 = *(int *)(uVar22 + 0x18) - iVar3;
    *(int *)(uVar22 + 0x18) = iVar2;
    if (iVar2 - iVar4 != 0 && iVar4 <= iVar2) {
      /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(uVar22 + 0x10),iVar3 + iVar4,*(undefined8 *)(uVar22 + 0x10),
                      auVar25._8_8_,iVar2 - iVar4,0,in_x6,in_x7,uVar5,lVar14,auVar24._8_8_,
                      auVar24._0_8_,puVar26);
      iVar2 = *(int *)(uVar22 + 0x18);
    }
    uVar7 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar22 + 0x10),iVar2,puVar11,0);
    *(int *)(uVar22 + 0x1c) = *(int *)(uVar22 + 0x1c) + 1;
  }
  return uVar7;
}



// ============================================================
// RVA: 0x163d858 | Core.Contexts.ContextManager.RemoveCanDeInitContextCallback
// ============================================================

/* WARNING: Possible PIC construction at 0x0163d968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163d96c) */

ulong Core_Contexts_ContextManager__RemoveCanDeInitContextCallback(long param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  int extraout_w1;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar14;
  long lVar15;
  int *piVar16;
  uint uVar17;
  code *pcVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined **ppuVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 *puVar26;
  undefined *puStack_d8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((bRam0000000003eb56f9 & 1) == 0) {
    func_0x00f78a20(0x3d3cfa0);
    bRam0000000003eb56f9 = 1;
  }
  puVar13 = puRam0000000003d3cfa0;
  lVar6 = *(long *)(param_1 + 0x58);
  if (lVar6 != 0) {
    if (lVar6 != 0) {
      uVar8 = (*(code *)**(undefined8 **)(*(long *)(puRam0000000003d3cfa0[3] + 0xc0) + 0xf8))();
      if (-1 < (int)(uint)uVar8) {
        (*(code *)**(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 0x108))(lVar6,uVar8);
      }
      return (ulong)(~(uint)uVar8 >> 0x1f);
    }
    auVar24 = func_0x00f78af4(0,param_2);
    lVar6 = auVar24._8_8_;
    uVar19 = **(ulong **)(puVar13[3] + 0xc0);
    uVar1 = *(ushort *)(uVar19 + 0x132);
    puVar12 = puVar13;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(uVar19);
      uVar1 = *(ushort *)(uVar19 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      uVar19 = **(ulong **)(puVar13[3] + 0xc0);
      if ((*(ushort *)(uVar19 + 0x132) & 1) == 0) {
        func_0x00fac028(uVar19);
      }
      if (*(int *)(uVar19 + 0xe0) == 0) {
        uVar19 = **(ulong **)(puVar13[3] + 0xc0);
        if ((*(ushort *)(uVar19 + 0x132) & 1) == 0) {
          func_0x00fac028(uVar19);
        }
        func_0x00f78ad0(uVar19);
      }
    }
    uVar9 = (*(code *)**(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 0xa0))(lVar6);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    if (auVar24._0_8_ != 0) {
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 0x110);
      lVar20 = *(long *)(*(long *)(puVar13[3] + 0xc0) + 0x38);
      if ((*(ushort *)(lVar20 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar20);
      }
      if (lVar6 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = func_0x00f78adc(lVar6,lVar20);
        if (lVar10 == 0) {
          uVar19 = func_0x00f78e5c(lVar6,lVar20);
          return uVar19;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02428794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar19 = (*UNRECOVERED_JUMPTABLE)
                         (auVar24._0_8_,lVar10,*(undefined8 *)(*(long *)(puVar13[3] + 0xc0) + 0x110)
                         );
      return uVar19;
    }
    auVar24 = func_0x00f78af4();
    lVar6 = auVar24._8_8_;
    lVar20 = auVar24._0_8_;
    puStack_78 = &System_Collections_Generic_List_AddressablesImpl_ResourceLocatorInfo___RemoveAll;
    puVar13 = puVar12;
    if (lVar6 == 0) {
      /*System.ThrowHelper$$ThrowArgumentNullException*/ func_0x029ef698(8);
    }
    uVar9 = (ulong)*(uint *)(lVar20 + 0x18);
    if ((int)*(uint *)(lVar20 + 0x18) < 1) {
      uVar22 = 0;
    }
    else {
      uVar22 = 0;
      do {
        lVar10 = *(long *)(lVar20 + 0x10);
        if (lVar10 == 0) goto code_r0x02428920;
        if (*(uint *)(lVar10 + 0x18) <= uVar22) goto code_r0x02428924;
        if (lVar6 == 0) goto code_r0x02428920;
        puVar13 = *(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 200);
        iVar5 = (*(code *)*puVar13)(lVar6,*(undefined8 *)(lVar10 + uVar22 * 8 + 0x20));
        if (iVar5 != 0) {
          uVar9 = (ulong)*(uint *)(lVar20 + 0x18);
          break;
        }
        uVar22 = uVar22 + 1;
        uVar9 = (ulong)*(int *)(lVar20 + 0x18);
      } while ((long)uVar22 < (long)uVar9);
    }
    uVar19 = uVar22;
    uVar22 = uVar19;
    if ((int)uVar9 <= (int)uVar19) {
      return 0;
    }
    do {
      uVar22 = (ulong)((int)uVar22 + 1);
      do {
        uVar17 = (uint)uVar19;
        if ((int)uVar9 <= (int)uVar22) {
          /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar20 + 0x10),uVar19,(int)uVar9 - uVar17,0);
          iVar5 = *(int *)(lVar20 + 0x18);
          *(uint *)(lVar20 + 0x18) = uVar17;
          *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
          return (ulong)(iVar5 - uVar17);
        }
        lVar10 = (-(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3) + 0x20;
        do {
          lVar15 = *(long *)(lVar20 + 0x10);
          if (lVar15 == 0) goto code_r0x02428920;
          if (*(uint *)(lVar15 + 0x18) <= (uint)uVar22) goto code_r0x02428924;
          if (lVar6 == 0) goto code_r0x02428920;
          puVar13 = *(undefined8 **)(*(long *)(puVar12[3] + 0xc0) + 200);
          uVar9 = (*(code *)*puVar13)(lVar6,*(undefined8 *)(lVar15 + lVar10));
          if ((uVar9 & 1) == 0) {
            uVar11 = *(uint *)(lVar20 + 0x18);
            break;
          }
          uVar21 = (uint)uVar22 + 1;
          uVar22 = (ulong)uVar21;
          uVar11 = *(uint *)(lVar20 + 0x18);
          lVar10 = lVar10 + 8;
        } while ((int)uVar21 < (int)uVar11);
        uVar9 = (ulong)uVar11;
        uVar21 = (uint)uVar22;
      } while ((int)uVar11 <= (int)uVar21);
      lVar10 = *(long *)(lVar20 + 0x10);
      if (lVar10 == 0) goto code_r0x02428920;
      if ((*(uint *)(lVar10 + 0x18) <= uVar21) || (*(uint *)(lVar10 + 0x18) <= uVar17))
      goto code_r0x02428924;
      *(undefined8 *)(lVar10 + 0x20 + (long)(int)uVar17 * 8) =
           *(undefined8 *)(lVar10 + 0x20 + (long)(int)uVar21 * 8);
      uVar19 = (ulong)(uVar17 + 1);
    } while( true );
  }
  lVar6 = func_0x00f78af4();
  uVar17 = 0;
  if ((bRam0000000003eb56fa & 1) == 0) {
    func_0x00f78a20(0x3d333a8);
    func_0x00f78a20(0x3d333b0);
    func_0x00f78a20(0x3d333b8);
    func_0x00f78a20(0x3d3cf98);
    bRam0000000003eb56fa = 1;
  }
  puStack_78 = (undefined *)0x0;
  uStack_70 = 0;
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  if (*(long *)(lVar6 + 0x58) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar7 = (long *)___cxa_begin_catch();
      lVar6 = *plVar7;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&puStack_78,uRam0000000003eb5000);
      if (lVar6 == 0) goto code_r0x0163d980;
      func_0x00f78ac0(lVar6,0);
    }
    pcVar3 = (code *)__Unwind_Resume();
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&puStack_78,*(long *)(lVar6 + 0x58),uRam0000000003d3cf98);
    uVar17 = 1;
    uVar19 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&puStack_78,uRam0000000003d333b0);
    if ((uVar19 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&puStack_78,uRam0000000003d333a8);
code_r0x0163d980:
      return (ulong)uVar17;
    }
    pcVar3 = UNRECOVERED_JUMPTABLE;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x163d9a4);
      (*pcVar3)();
    }
  }
  puStack_d8 = pcVar3;
  lVar6 = *(long *)(pcVar3 + 0x68);
  if (lVar6 == 0) {
    ppuVar23 = &puStack_d8;
    lVar20 = 1;
  }
  else {
    lVar20 = *(long *)(lVar6 + 0x18);
    if (lVar20 == 0) {
      return 0;
    }
    ppuVar23 = (undefined **)(lVar6 + 0x20);
  }
  lVar6 = 0;
  do {
    puVar14 = ppuVar23[lVar6];
    pcVar18 = *(code **)(puVar14 + 0x10);
    plVar7 = *(long **)(puVar14 + 0x20);
    lVar10 = *(long *)(puVar14 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar5 = func_0x00f78a4c(lVar10);
    if (iVar5 == 0) {
      if ((((plVar7 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
          ((*(byte *)(*plVar7 + 0x115) & 1) != 0)) || (*(long *)(pcVar3 + 0x18) == 0))
      goto code_r0x0163daf0;
      iVar5 = func_0x00f78a44(lVar10);
      iVar4 = func_0x00f78ec0(lVar10);
      if (iVar5 == 0) {
        uVar1 = *(ushort *)(lVar10 + 0x48);
        if (iVar4 == 0) {
          lVar10 = *plVar7 + (ulong)uVar1 * 0x10;
          uVar19 = (**(code **)(lVar10 + 0x138))(plVar7,*(undefined8 *)(lVar10 + 0x140));
          goto code_r0x0163dafc;
        }
        lVar10 = func_0x00f78a48(lVar10);
        lVar15 = *plVar7;
        uVar19 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar19 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar10) {
              puVar13 = (undefined8 *)(lVar15 + (long)(int)(*piVar16 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x0163dbc0;
            }
            piVar16 = piVar16 + 4;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        puVar13 = (undefined8 *)func_0x00fac1f0(plVar7,lVar10,(ulong)uVar1);
code_r0x0163dbc0:
        pcVar18 = (code *)*puVar13;
        puVar13 = (undefined8 *)puVar13[1];
      }
      else {
        if (iVar4 == 0) {
          uVar8 = *(undefined8 *)(*plVar7 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar15 = *plVar7;
          uVar19 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar19 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)(lVar10 + 0x18)) {
                lVar15 = lVar15 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0163db98;
              }
              piVar16 = piVar16 + 4;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
          lVar15 = func_0x00fac1f0(plVar7);
code_r0x0163db98:
          uVar8 = *(undefined8 *)(lVar15 + 8);
        }
        puVar13 = (undefined8 *)func_0x00f78acc(uVar8,lVar10);
        pcVar18 = (code *)*puVar13;
      }
      uVar19 = (*pcVar18)(plVar7,puVar13);
    }
    else if (*(char *)(lVar10 + 0x4a) == '\0') {
      uVar19 = (*pcVar18)(lVar10);
    }
    else {
code_r0x0163daf0:
      uVar19 = (*pcVar18)(plVar7,lVar10);
    }
code_r0x0163dafc:
    lVar6 = lVar6 + 1;
    if (lVar6 == lVar20) {
      return uVar19;
    }
  } while( true );
code_r0x02428920:
  func_0x00f78af4();
code_r0x02428924:
  uVar8 = func_0x00f78b24();
  auVar24 = func_0x00f78ac0(uVar8,0);
  uVar22 = auVar24._0_8_;
  puVar26 = &stack0xffffffffffffff40;
  uVar17 = *(uint *)(uVar22 + 0x18);
  uVar11 = auVar24._8_4_;
  uVar9 = uVar22;
  if (uVar17 <= uVar11) {
    uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    uVar17 = *(uint *)(uVar22 + 0x18);
  }
  iVar5 = uVar17 - 1;
  *(int *)(uVar22 + 0x18) = iVar5;
  if (iVar5 - uVar11 != 0 && (int)uVar11 <= iVar5) {
    puVar13 = *(undefined8 **)(uVar22 + 0x10);
    uVar9 = /*System.Array$$Copy*/ func_0x0292b4cc(puVar13,uVar11 + 1,puVar13,auVar24._8_8_,iVar5 - uVar11,0);
  }
  lVar20 = *(long *)(uVar22 + 0x10);
  if (lVar20 == 0) {
    func_0x00f78af4();
  }
  else if (*(uint *)(uVar22 + 0x18) < *(uint *)(lVar20 + 0x18)) {
    *(undefined8 *)(lVar20 + (long)(int)*(uint *)(uVar22 + 0x18) * 8 + 0x20) = 0;
    *(int *)(uVar22 + 0x1c) = *(int *)(uVar22 + 0x1c) + 1;
    return uVar9;
  }
  uVar8 = func_0x00f78b24();
  auVar25 = func_0x00f78ac0(uVar8,0);
  uVar22 = auVar25._0_8_;
  puStack_d8 = &System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange;
  iVar5 = auVar25._8_4_;
  iVar4 = (int)puVar13;
  uVar9 = uVar22;
  if (iVar5 < 0) {
    uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
  }
  if (iVar4 < 0) {
    uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
  }
  if (*(int *)(uVar22 + 0x18) - iVar5 < iVar4) {
    uVar9 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
  }
  if (0 < iVar4) {
    iVar2 = *(int *)(uVar22 + 0x18) - iVar4;
    *(int *)(uVar22 + 0x18) = iVar2;
    if (iVar2 - iVar5 != 0 && iVar5 <= iVar2) {
      /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(uVar22 + 0x10),iVar4 + iVar5,*(undefined8 *)(uVar22 + 0x10),
                      auVar25._8_8_,iVar2 - iVar5,0,in_x6,in_x7,uVar19,lVar6,auVar24._8_8_,
                      auVar24._0_8_,puVar26);
      iVar2 = *(int *)(uVar22 + 0x18);
    }
    uVar9 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar22 + 0x10),iVar2,puVar13,0);
    *(int *)(uVar22 + 0x1c) = *(int *)(uVar22 + 0x1c) + 1;
  }
  return uVar9;
}



// ============================================================
// RVA: 0x163d8bc | Core.Contexts.ContextManager.CanProgress
// ============================================================

/* WARNING: Possible PIC construction at 0x0163d968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0163d96c) */

ulong Core_Contexts_ContextManager__CanProgress(long param_1)

{
  long *plVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int extraout_w1;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  uint uVar15;
  undefined8 *unaff_x21;
  long lVar16;
  long lStack_a8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar15 = 0;
  if ((bRam0000000003eb56fa & 1) == 0) {
    func_0x00f78a20(0x3d333a8);
    func_0x00f78a20(0x3d333b0);
    func_0x00f78a20(0x3d333b8);
    func_0x00f78a20(0x3d3cf98);
    bRam0000000003eb56fa = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x58) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar7 = (long *)___cxa_begin_catch();
      lVar14 = *plVar7;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,*unaff_x21);
      if (lVar14 == 0) goto code_r0x0163d980;
      func_0x00f78ac0(lVar14,0);
    }
    lVar14 = __Unwind_Resume();
  }
  else {
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_48,*(long *)(param_1 + 0x58),uRam0000000003d3cf98);
    uVar15 = 1;
    uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_48,uRam0000000003d333b0);
    if ((uVar6 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_48,uRam0000000003d333a8);
code_r0x0163d980:
      return (ulong)uVar15;
    }
    lVar14 = lStack_38;
    if (lStack_38 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x163d9a4);
      (*pcVar3)();
    }
  }
  lStack_a8 = lVar14;
  lVar10 = *(long *)(lVar14 + 0x68);
  if (lVar10 == 0) {
    plVar7 = &lStack_a8;
    lVar16 = 1;
  }
  else {
    lVar16 = *(long *)(lVar10 + 0x18);
    if (lVar16 == 0) {
      return 0;
    }
    plVar7 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar7[lVar10];
    pcVar3 = *(code **)(lVar11 + 0x10);
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar11 + 0x28);
    if (*(short *)(lVar11 + 0x48) == -1) {
      func_0x00f78ad8(lVar11);
    }
    iVar4 = func_0x00f78a4c(lVar11);
    if (iVar4 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar14 + 0x18) == 0))
      goto code_r0x0163daf0;
      iVar4 = func_0x00f78a44(lVar11);
      iVar5 = func_0x00f78ec0(lVar11);
      if (iVar4 == 0) {
        uVar2 = *(ushort *)(lVar11 + 0x48);
        if (iVar5 == 0) {
          lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
          uVar6 = (**(code **)(lVar11 + 0x138))(plVar1,*(undefined8 *)(lVar11 + 0x140));
          goto code_r0x0163dafc;
        }
        lVar11 = func_0x00f78a48(lVar11);
        lVar12 = *plVar1;
        uVar6 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar6 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar11) {
              puVar9 = (undefined8 *)(lVar12 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x0163dbc0;
            }
            piVar13 = piVar13 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x0163dbc0:
        pcVar3 = (code *)*puVar9;
        puVar9 = (undefined8 *)puVar9[1];
      }
      else {
        if (iVar5 == 0) {
          uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar12 = *plVar1;
          uVar6 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)(lVar11 + 0x18)) {
                lVar12 = lVar12 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0163db98;
              }
              piVar13 = piVar13 + 4;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          lVar12 = func_0x00fac1f0(plVar1);
code_r0x0163db98:
          uVar8 = *(undefined8 *)(lVar12 + 8);
        }
        puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar11);
        pcVar3 = (code *)*puVar9;
      }
      uVar6 = (*pcVar3)(plVar1,puVar9);
    }
    else if (*(char *)(lVar11 + 0x4a) == '\0') {
      uVar6 = (*pcVar3)(lVar11);
    }
    else {
code_r0x0163daf0:
      uVar6 = (*pcVar3)(plVar1,lVar11);
    }
code_r0x0163dafc:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar16) {
      return uVar6;
    }
  } while( true );
}



// ============================================================
// RVA: 0x163dbf0 | Core.Contexts.ContextManager..ctor
// ============================================================

undefined1  [16] Core_Contexts_ContextManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb56fb & 1) == 0) {
    func_0x00f78a20(0x3d2fbb8);
    func_0x00f78a20(0x3d1c488);
    bRam0000000003eb56fb = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, IContext>_TypeInfo*/ uRam0000000003d1c488);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar1,uRam0000000003d2fbb8);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_1 + 0x51) = 1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ============================================================
// RVA: 0x163dc78 | Core.Contexts.ContextManager..cctor
// ============================================================

void Core_Contexts_ContextManager___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb56fc & 1) == 0) {
    func_0x00f78a20(0x3d20a18);
    func_0x00f78a20(0x3d6ae48);
    func_0x00f78a20(0x3d6ae58);
    func_0x00f78a20(0x3d6ae60);
    func_0x00f78a20(0x3d6ae50);
    bRam0000000003eb56fc = 1;
  }
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('ContextManager.Update()')*/ uRam0000000003d6ae60,1,0,0,0);
  **(undefined8 **)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0xb8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('ContextManager.FixedUpdate()')*/ uRam0000000003d6ae48,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0xb8) + 8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('ContextManager.PreLateUpdate()')*/ uRam0000000003d6ae58,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0xb8) + 0x10) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('ContextManager.LateUpdate()')*/ uRam0000000003d6ae50,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Core.Contexts.ContextManager_TypeInfo*/ lRam0000000003d20a18 + 0xb8) + 0x18) = uVar1;
  return;
}



// ============================================================
// RVA: 0x183a04c | Core.Contexts.ContextManager.GetContext<FrontEndContext>
// ============================================================

ulong Core_Contexts_ContextManager__GetContext_FrontEndContext_
                (long param_1,undefined8 param_2,undefined8 *param_3,long param_4,undefined8 param_5
                ,long param_6)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  long alStack_1c8 [2];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 uStack_198;
  int aiStack_80 [4];
  
  if (param_1 != 0) {
    uVar4 = Core_Contexts_ContextManager__GetContext(param_1,param_2,0);
    lVar16 = *(long *)param_3[6];
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    lVar16 = func_0x00f78adc(uVar4,lVar16);
    lVar15 = *(long *)param_3[6];
    if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar15);
    }
    if (lVar16 != 0) {
      uVar5 = func_0x00f78adc(lVar16,lVar15);
      if (uVar5 != 0) {
        return uVar5;
      }
      func_0x00f78e5c(lVar16,lVar15);
    }
    return 0;
  }
  auVar18 = func_0x00f78af4();
  plVar7 = auVar18._0_8_;
  puVar11 = param_3;
  if ((bRam0000000003eb643b & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb643b = 1;
  }
  aiStack_80[2] = 0;
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar9 = func_0x00f78aec();
    uVar4 = 0x3d78478;
  }
  else {
    if (auVar18._8_8_ != 0) {
      lVar16 = *(long *)param_3[6];
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      lVar15 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar16) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x0183a1a8;
          }
          piVar14 = piVar14 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar11 = (undefined8 *)0x0;
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar16);
code_r0x0183a1a8:
      plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar7 != (long *)0x0) {
        do {
          lVar16 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar5 != 0) {
            piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar6 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
                goto code_r0x0183a210;
              }
              piVar14 = piVar14 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar11 = (undefined8 *)0x0;
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x0183a210:
          uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
          if ((uVar5 & 1) == 0) {
            aiStack_80[0] = 0x4d;
            goto code_r0x0183a2d0;
          }
          lVar16 = *(long *)(param_3[6] + 8);
          if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar16);
          }
          lVar15 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar5 != 0) {
            piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar16) {
                puVar11 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                goto code_r0x0183a284;
              }
              piVar14 = piVar14 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar7,lVar16,0);
code_r0x0183a284:
          uVar4 = (*(code *)*puVar11)(plVar7,puVar11[1]);
          puVar11 = *(undefined8 **)(param_3[6] + 0x10);
          uVar5 = (*(code *)*puVar11)(auVar18._8_8_,uVar4);
        } while ((uVar5 & 1) != 0);
        aiStack_80[0] = 0x4f;
code_r0x0183a2d0:
        bVar1 = false;
        lVar15 = 0;
        lVar16 = 0;
        aiStack_80[2] = 1;
        do {
          if (plVar7 != (long *)0x0) {
            lVar12 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar5 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto code_r0x0183a334;
                }
                piVar14 = piVar14 + 4;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            puVar11 = (undefined8 *)0x0;
            puVar6 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x0183a334:
            (*(code *)*puVar6)(plVar7,puVar6[1]);
          }
          if (lVar16 == 0) {
            if (bVar1) {
              uVar5 = 1;
            }
            else {
              uVar5 = (ulong)(aiStack_80[lVar15] != 0x4f);
            }
            return uVar5;
          }
          func_0x00f78ac0(lVar16,0);
          if (extraout_w1 != 1) goto code_r0x0183a424;
          plVar8 = (long *)___cxa_begin_catch();
          lVar16 = *plVar8;
          ___cxa_end_catch();
          lVar15 = -1;
          bVar1 = true;
        } while( true );
      }
      goto code_r0x0183a3e0;
    }
    func_0x00f78a24(0x3d1fcf0);
    uVar9 = func_0x00f78aec();
    uVar4 = 0x3d7b050;
  }
  uVar4 = func_0x00f78a24(uVar4);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar9,uVar4,0);
  uVar4 = func_0x00f78a24(0x3d539a0);
  func_0x00f78ac0(uVar9,uVar4);
code_r0x0183a3e0:
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x183a3e8);
  (*pcVar2)();
code_r0x0183a424:
  auVar19 = __Unwind_Resume();
  plVar7 = auVar19._0_8_;
  lVar16 = param_4;
  if ((int)puVar11 < 0) {
code_r0x0183a520:
    uVar4 = param_5;
    func_0x00f78a24(0x3d1fcf8);
    uVar9 = func_0x00f78aec();
    puVar11 = (undefined8 *)0x0;
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(uVar9,param_5);
    uVar10 = func_0x00f78a24(0x3d539b0);
    func_0x00f78ac0(uVar9,uVar10);
  }
  else {
    if (auVar19._8_4_ < 0) {
code_r0x0183a4e8:
      func_0x00f78a24(0x3d1fcf8);
      uVar4 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(uVar4,param_4,0);
      uVar9 = func_0x00f78a24(0x3d539b0);
      func_0x00f78ac0(uVar4,uVar9);
      goto code_r0x0183a520;
    }
    uVar4 = param_5;
    if (plVar7 != (long *)0x0) {
      lVar15 = **(long **)(param_6 + 0x30);
      if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar15);
      }
      lVar12 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar15) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x0183a4bc;
          }
          piVar14 = piVar14 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar15,0);
code_r0x0183a4bc:
      uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((int)puVar11 <= (int)uVar5 - auVar19._8_4_) {
        return uVar5;
      }
      goto code_r0x0183a4e8;
    }
  }
  auVar19 = func_0x00f78af4();
  plVar7 = auVar19._0_8_;
  lVar15 = lVar16;
  if (-1 < (int)puVar11) {
    if (-1 < auVar19._8_4_) {
      if (plVar7 == (long *)0x0) goto code_r0x0183a694;
      lVar12 = **(long **)(param_6 + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      lVar13 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar12) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x0183a5f4;
          }
          piVar14 = piVar14 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar12,0);
code_r0x0183a5f4:
      uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((int)puVar11 <= (int)uVar5 - auVar19._8_4_) {
        return uVar5;
      }
    }
    func_0x00f78a24(0x3d1fcf8);
    uVar9 = func_0x00f78aec();
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(uVar9,lVar16,0);
    uVar10 = func_0x00f78a24(0x3d539c0);
    func_0x00f78ac0(uVar9,uVar10);
  }
  func_0x00f78a24(0x3d1fcf8);
  uVar9 = func_0x00f78aec();
  puVar11 = (undefined8 *)0x0;
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(uVar9,uVar4);
  uVar4 = func_0x00f78a24(0x3d539c0);
  func_0x00f78ac0(uVar9,uVar4);
code_r0x0183a694:
  auVar18 = func_0x00f78af4();
  plVar7 = auVar18._0_8_;
  uVar4 = 0;
  /*System.Dynamic.Utils.ContractUtils$$RequiresNotNull*/ func_0x02b9dd0c(plVar7,auVar18._8_8_,0);
  if (plVar7 == (long *)0x0) {
code_r0x0183a828:
    iVar3 = func_0x00f78af4();
    auStack_1a8._0_8_ = 0;
    auStack_1a8._8_8_ = 0;
    auStack_1b8._0_8_ = 0;
    auStack_1b8._8_8_ = 0;
    uVar5 = (**(code **)**(undefined8 **)(lVar15 + 0x30))();
    uStack_198 = (undefined1)uVar5;
    if (0 < iVar3) {
      iVar17 = 0;
      do {
        auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(extraout_x1,iVar17);
        lVar16 = *(long *)(lVar15 + 0x30);
        lVar12 = *(long *)(lVar16 + 0x10);
        auStack_1a8 = auVar18;
        if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar12);
          lVar16 = *(long *)(lVar15 + 0x30);
        }
        lVar16 = *(long *)(lVar16 + 0x18);
        alStack_1c8[0] = lVar12;
        if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar16);
        }
        uVar5 = (ulong)*(ushort *)(alStack_1c8[0] + 0x12a);
        if (uVar5 != 0) {
          piVar14 = (int *)(*(long *)(alStack_1c8[0] + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar16) {
              puVar11 = (undefined8 *)(alStack_1c8[0] + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x0183a924;
            }
            piVar14 = piVar14 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        puVar11 = (undefined8 *)func_0x00fac1f0(alStack_1c8,lVar16,0);
code_r0x0183a924:
        auVar18 = (*(code *)*puVar11)(auStack_1a8,auStack_1a8,puVar11[1]);
        auStack_1b8 = auVar18;
        uVar5 = /*UnityEngine.HashUtilities$$AppendHash*/ func_0x032310e0(auStack_1b8,uVar4,0);
        iVar17 = iVar17 + 1;
      } while (iVar17 != iVar3);
    }
    return uVar5;
  }
  lVar16 = *(long *)puVar11[6];
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar16);
  }
  lVar12 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12a);
  if (uVar5 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar16) {
        puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto code_r0x0183a728;
      }
      piVar14 = piVar14 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar16,0);
code_r0x0183a728:
  uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
  iVar3 = (int)uVar5;
  if (0 < iVar3) {
    iVar17 = 0;
    do {
      lVar16 = *(long *)(puVar11[6] + 8);
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      lVar12 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar16) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x0183a7a8;
          }
          piVar14 = piVar14 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar16,0);
code_r0x0183a7a8:
      uVar5 = (*(code *)*puVar6)(plVar7,iVar17,puVar6[1]);
      if (uVar5 == 0) {
        uVar9 = /*System.Dynamic.Utils.ContractUtils$$GetParamName*/ func_0x02ba3454(auVar18._8_8_,iVar17,0);
        func_0x00f78a24(0x3d1fcf0);
        uVar10 = func_0x00f78aec();
        uVar4 = 0;
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar10,uVar9,0);
        uVar9 = func_0x00f78a24(0x3d539d8);
        func_0x00f78ac0(uVar10,uVar9);
        goto code_r0x0183a828;
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 != iVar3);
  }
  return uVar5;
}



// ============================================================
// RVA: 0x183a04c | Core.Contexts.ContextManager.GetContext<object>
// ============================================================

ulong Core_Contexts_ContextManager__GetContext_FrontEndContext_
                (long param_1,undefined8 param_2,undefined8 *param_3,long param_4,undefined8 param_5
                ,long param_6)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  long alStack_1c8 [2];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 uStack_198;
  int aiStack_80 [4];
  
  if (param_1 != 0) {
    uVar4 = Core_Contexts_ContextManager__GetContext(param_1,param_2,0);
    lVar16 = *(long *)param_3[6];
    if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar16);
    }
    lVar16 = func_0x00f78adc(uVar4,lVar16);
    lVar15 = *(long *)param_3[6];
    if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar15);
    }
    if (lVar16 != 0) {
      uVar5 = func_0x00f78adc(lVar16,lVar15);
      if (uVar5 != 0) {
        return uVar5;
      }
      func_0x00f78e5c(lVar16,lVar15);
    }
    return 0;
  }
  auVar18 = func_0x00f78af4();
  plVar7 = auVar18._0_8_;
  puVar11 = param_3;
  if ((bRam0000000003eb643b & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    bRam0000000003eb643b = 1;
  }
  aiStack_80[2] = 0;
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar9 = func_0x00f78aec();
    uVar4 = 0x3d78478;
  }
  else {
    if (auVar18._8_8_ != 0) {
      lVar16 = *(long *)param_3[6];
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      lVar15 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar16) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x0183a1a8;
          }
          piVar14 = piVar14 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar11 = (undefined8 *)0x0;
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar16);
code_r0x0183a1a8:
      plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar7 != (long *)0x0) {
        do {
          lVar16 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar5 != 0) {
            piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar6 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
                goto code_r0x0183a210;
              }
              piVar14 = piVar14 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar11 = (undefined8 *)0x0;
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x0183a210:
          uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
          if ((uVar5 & 1) == 0) {
            aiStack_80[0] = 0x4d;
            goto code_r0x0183a2d0;
          }
          lVar16 = *(long *)(param_3[6] + 8);
          if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar16);
          }
          lVar15 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar5 != 0) {
            piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar16) {
                puVar11 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
                goto code_r0x0183a284;
              }
              piVar14 = piVar14 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar7,lVar16,0);
code_r0x0183a284:
          uVar4 = (*(code *)*puVar11)(plVar7,puVar11[1]);
          puVar11 = *(undefined8 **)(param_3[6] + 0x10);
          uVar5 = (*(code *)*puVar11)(auVar18._8_8_,uVar4);
        } while ((uVar5 & 1) != 0);
        aiStack_80[0] = 0x4f;
code_r0x0183a2d0:
        bVar1 = false;
        lVar15 = 0;
        lVar16 = 0;
        aiStack_80[2] = 1;
        do {
          if (plVar7 != (long *)0x0) {
            lVar12 = *plVar7;
            uVar5 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar5 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                  puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto code_r0x0183a334;
                }
                piVar14 = piVar14 + 4;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            puVar11 = (undefined8 *)0x0;
            puVar6 = (undefined8 *)func_0x00fac1f0(plVar7);
code_r0x0183a334:
            (*(code *)*puVar6)(plVar7,puVar6[1]);
          }
          if (lVar16 == 0) {
            if (bVar1) {
              uVar5 = 1;
            }
            else {
              uVar5 = (ulong)(aiStack_80[lVar15] != 0x4f);
            }
            return uVar5;
          }
          func_0x00f78ac0(lVar16,0);
          if (extraout_w1 != 1) goto code_r0x0183a424;
          plVar8 = (long *)___cxa_begin_catch();
          lVar16 = *plVar8;
          ___cxa_end_catch();
          lVar15 = -1;
          bVar1 = true;
        } while( true );
      }
      goto code_r0x0183a3e0;
    }
    func_0x00f78a24(0x3d1fcf0);
    uVar9 = func_0x00f78aec();
    uVar4 = 0x3d7b050;
  }
  uVar4 = func_0x00f78a24(uVar4);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar9,uVar4,0);
  uVar4 = func_0x00f78a24(0x3d539a0);
  func_0x00f78ac0(uVar9,uVar4);
code_r0x0183a3e0:
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x183a3e8);
  (*pcVar2)();
code_r0x0183a424:
  auVar19 = __Unwind_Resume();
  plVar7 = auVar19._0_8_;
  lVar16 = param_4;
  if ((int)puVar11 < 0) {
code_r0x0183a520:
    uVar4 = param_5;
    func_0x00f78a24(0x3d1fcf8);
    uVar9 = func_0x00f78aec();
    puVar11 = (undefined8 *)0x0;
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(uVar9,param_5);
    uVar10 = func_0x00f78a24(0x3d539b0);
    func_0x00f78ac0(uVar9,uVar10);
  }
  else {
    if (auVar19._8_4_ < 0) {
code_r0x0183a4e8:
      func_0x00f78a24(0x3d1fcf8);
      uVar4 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(uVar4,param_4,0);
      uVar9 = func_0x00f78a24(0x3d539b0);
      func_0x00f78ac0(uVar4,uVar9);
      goto code_r0x0183a520;
    }
    uVar4 = param_5;
    if (plVar7 != (long *)0x0) {
      lVar15 = **(long **)(param_6 + 0x30);
      if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar15);
      }
      lVar12 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar15) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x0183a4bc;
          }
          piVar14 = piVar14 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar15,0);
code_r0x0183a4bc:
      uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((int)puVar11 <= (int)uVar5 - auVar19._8_4_) {
        return uVar5;
      }
      goto code_r0x0183a4e8;
    }
  }
  auVar19 = func_0x00f78af4();
  plVar7 = auVar19._0_8_;
  lVar15 = lVar16;
  if (-1 < (int)puVar11) {
    if (-1 < auVar19._8_4_) {
      if (plVar7 == (long *)0x0) goto code_r0x0183a694;
      lVar12 = **(long **)(param_6 + 0x30);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      lVar13 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar12) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x0183a5f4;
          }
          piVar14 = piVar14 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar12,0);
code_r0x0183a5f4:
      uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((int)puVar11 <= (int)uVar5 - auVar19._8_4_) {
        return uVar5;
      }
    }
    func_0x00f78a24(0x3d1fcf8);
    uVar9 = func_0x00f78aec();
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(uVar9,lVar16,0);
    uVar10 = func_0x00f78a24(0x3d539c0);
    func_0x00f78ac0(uVar9,uVar10);
  }
  func_0x00f78a24(0x3d1fcf8);
  uVar9 = func_0x00f78aec();
  puVar11 = (undefined8 *)0x0;
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(uVar9,uVar4);
  uVar4 = func_0x00f78a24(0x3d539c0);
  func_0x00f78ac0(uVar9,uVar4);
code_r0x0183a694:
  auVar18 = func_0x00f78af4();
  plVar7 = auVar18._0_8_;
  uVar4 = 0;
  /*System.Dynamic.Utils.ContractUtils$$RequiresNotNull*/ func_0x02b9dd0c(plVar7,auVar18._8_8_,0);
  if (plVar7 == (long *)0x0) {
code_r0x0183a828:
    iVar3 = func_0x00f78af4();
    auStack_1a8._0_8_ = 0;
    auStack_1a8._8_8_ = 0;
    auStack_1b8._0_8_ = 0;
    auStack_1b8._8_8_ = 0;
    uVar5 = (**(code **)**(undefined8 **)(lVar15 + 0x30))();
    uStack_198 = (undefined1)uVar5;
    if (0 < iVar3) {
      iVar17 = 0;
      do {
        auVar18 = (*(code *)**(undefined8 **)(*(long *)(lVar15 + 0x30) + 8))(extraout_x1,iVar17);
        lVar16 = *(long *)(lVar15 + 0x30);
        lVar12 = *(long *)(lVar16 + 0x10);
        auStack_1a8 = auVar18;
        if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar12);
          lVar16 = *(long *)(lVar15 + 0x30);
        }
        lVar16 = *(long *)(lVar16 + 0x18);
        alStack_1c8[0] = lVar12;
        if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar16);
        }
        uVar5 = (ulong)*(ushort *)(alStack_1c8[0] + 0x12a);
        if (uVar5 != 0) {
          piVar14 = (int *)(*(long *)(alStack_1c8[0] + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar16) {
              puVar11 = (undefined8 *)(alStack_1c8[0] + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x0183a924;
            }
            piVar14 = piVar14 + 4;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        puVar11 = (undefined8 *)func_0x00fac1f0(alStack_1c8,lVar16,0);
code_r0x0183a924:
        auVar18 = (*(code *)*puVar11)(auStack_1a8,auStack_1a8,puVar11[1]);
        auStack_1b8 = auVar18;
        uVar5 = /*UnityEngine.HashUtilities$$AppendHash*/ func_0x032310e0(auStack_1b8,uVar4,0);
        iVar17 = iVar17 + 1;
      } while (iVar17 != iVar3);
    }
    return uVar5;
  }
  lVar16 = *(long *)puVar11[6];
  if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar16);
  }
  lVar12 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar12 + 0x12a);
  if (uVar5 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar16) {
        puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto code_r0x0183a728;
      }
      piVar14 = piVar14 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar16,0);
code_r0x0183a728:
  uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
  iVar3 = (int)uVar5;
  if (0 < iVar3) {
    iVar17 = 0;
    do {
      lVar16 = *(long *)(puVar11[6] + 8);
      if ((*(ushort *)(lVar16 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar16);
      }
      lVar12 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar16) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x0183a7a8;
          }
          piVar14 = piVar14 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar16,0);
code_r0x0183a7a8:
      uVar5 = (*(code *)*puVar6)(plVar7,iVar17,puVar6[1]);
      if (uVar5 == 0) {
        uVar9 = /*System.Dynamic.Utils.ContractUtils$$GetParamName*/ func_0x02ba3454(auVar18._8_8_,iVar17,0);
        func_0x00f78a24(0x3d1fcf0);
        uVar10 = func_0x00f78aec();
        uVar4 = 0;
        /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar10,uVar9,0);
        uVar9 = func_0x00f78a24(0x3d539d8);
        func_0x00f78ac0(uVar10,uVar9);
        goto code_r0x0183a828;
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 != iVar3);
  }
  return uVar5;
}



