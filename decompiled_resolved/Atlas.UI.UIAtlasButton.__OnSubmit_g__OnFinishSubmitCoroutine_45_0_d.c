// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d

// ============================================================
// RVA: 0x156c5e4 | Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d..ctor
// ============================================================

void Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0_d___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x156c610 | Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0_d__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x156c614 | Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d.MoveNext
// ============================================================

undefined8
Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0_d__MoveNext(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  
  plVar3 = *(long **)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    fVar4 = *(float *)(param_1 + 0x28);
    fVar5 = *(float *)(param_1 + 0x2c);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar3 == (long *)0x0) goto LAB_0156c6d0;
    fVar4 = *(float *)(plVar3 + 0x14);
    *(float *)(param_1 + 0x28) = fVar4;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    fVar5 = 0.0;
  }
  if (fVar5 < fVar4) {
    fVar4 = (float)/*UnityEngine.Time$$get_unscaledDeltaTime*/ func_0x03272c40(0);
    *(float *)(param_1 + 0x2c) = fVar5 + fVar4;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  if (plVar3 != (long *)0x0) {
    uVar1 = /*UnityEngine.UI.Selectable$$get_currentSelectionState*/ func_0x032e412c(plVar3,0);
    (**(code **)(*plVar3 + 0x2d8))(plVar3,uVar1,0,*(undefined8 *)(*plVar3 + 0x2e0));
    return 0;
  }
LAB_0156c6d0:
  lVar2 = func_0x00f78af4();
  return *(undefined8 *)(lVar2 + 0x18);
}



// ============================================================
// RVA: 0x156c6d4 | Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0_d__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156c6dc | Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0_d__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d647d8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156c71c | Atlas.UI.UIAtlasButton.<<OnSubmit>g__OnFinishSubmitCoroutine|45_0>d.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_UIAtlasButton___OnSubmit_g__OnFinishSubmitCoroutine_45_0_d__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



