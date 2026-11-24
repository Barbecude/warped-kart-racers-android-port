// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.RaceGameContext.<OnDeInit>d__9

// ============================================================
// RVA: 0x156348c | Atlas.Contexts.RaceGameContext.<OnDeInit>d__9..ctor
// ============================================================

void Atlas_Contexts_RaceGameContext__OnDeInit_d__9___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15634b8 | Atlas.Contexts.RaceGameContext.<OnDeInit>d__9.System.IDisposable.Dispose
// ============================================================

void Atlas_Contexts_RaceGameContext__OnDeInit_d__9__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x15634bc | Atlas.Contexts.RaceGameContext.<OnDeInit>d__9.MoveNext
// ============================================================

ulong Atlas_Contexts_RaceGameContext__OnDeInit_d__9__MoveNext(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  int extraout_w1;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if ((bRam0000000003eb4fd1 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d32578);
    func_0x00f78a20(0x3d32580);
    func_0x00f78a20(0x3d32588);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3a798);
    func_0x00f78a20(0x3d5bf38);
    func_0x00f78a20(0x3d5bf40);
    bRam0000000003eb4fd1 = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    lVar8 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((((lVar8 == 0) || (*(long *)(lVar8 + 600) == 0)) ||
        (lVar7 = *(long *)(*(long *)(lVar8 + 600) + 0x20), lVar7 == 0)) ||
       (lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0)) {
code_r0x015636c8:
      func_0x00f78af4();
code_r0x015636cc:
      func_0x00f78e5c();
      if (extraout_w1 != 1) {
code_r0x01563710:
        lVar8 = __Unwind_Resume();
        return *(ulong *)(lVar8 + 0x18);
      }
      plVar4 = (long *)___cxa_begin_catch();
      lVar7 = *plVar4;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d32578);
      if (lVar7 != 0) {
        func_0x00f78ac0(lVar7,0);
        goto code_r0x01563710;
      }
    }
    else {
      uVar9 = *(undefined8 *)(lVar7 + 0x80);
      uVar3 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
      /*System.Action$$.ctor*/ func_0x02924c80(uVar3,lVar8,uRam0000000003d5bf40,0);
      plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,uVar3,0);
      if (plVar4 != (long *)0x0) {
        if (*plVar4 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78) goto code_r0x015635ec;
        goto code_r0x015636cc;
      }
code_r0x015635ec:
      *(long **)(lVar7 + 0x80) = plVar4;
      if (*(long *)(lVar8 + 0x260) == 0) goto code_r0x015636c8;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,*(long *)(lVar8 + 0x260),uRam0000000003d3a798);
      while (uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_68,uRam0000000003d32580), lVar7 = lStack_58,
            (uVar5 & 1) != 0) {
        uVar3 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
        /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar3,lVar8,uRam0000000003d5bf38,0);
        if (lVar7 == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x15636c8);
          (*pcVar2)();
        }
        /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar7,uVar3,0);
      }
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d32578);
    }
    *(undefined8 *)(lVar8 + 0x260) = 0;
    uVar3 = Atlas_Contexts_RaceGameContext____n__1(lVar8,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar6 = 1;
  }
  else {
    if (iVar1 != 1) goto LAB_0156369c;
    uVar6 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar6;
LAB_0156369c:
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x1563714 | Atlas.Contexts.RaceGameContext.<OnDeInit>d__9.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Contexts_RaceGameContext__OnDeInit_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156371c | Atlas.Contexts.RaceGameContext.<OnDeInit>d__9.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_Contexts_RaceGameContext__OnDeInit_d__9__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63a80);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156375c | Atlas.Contexts.RaceGameContext.<OnDeInit>d__9.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Contexts_RaceGameContext__OnDeInit_d__9__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



