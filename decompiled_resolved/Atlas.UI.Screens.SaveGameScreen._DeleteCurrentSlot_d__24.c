// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24

// ============================================================
// RVA: 0x1566344 | Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24..ctor
// ============================================================

void Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot_d__24___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1566370 | Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot_d__24__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1566374 | Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24.MoveNext
// ============================================================

undefined8 Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot_d__24__MoveNext(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000003eb4fe8 & 1) == 0) {
    func_0x00f78a20(0x3d2c908);
    bRam0000000003eb4fe8 = 1;
  }
  uVar1 = 0;
  if (4 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  uVar3 = 0xffffffff;
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar1 = /*Core.Input.InputManager$$SuspendAllInput*/ func_0x0164ade0(0);
    if (lVar4 == 0) goto code_r0x015664c0;
    uVar1 = Atlas_UI_Screens_AtlasScreen_SaveGameScreenBehaviour__SaveGameScreen_TransitionData___ShowFullScreenTransition
                      (lVar4,uRam0000000003d2c908);
    uVar3 = 1;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
code_r0x015664c0:
      lVar4 = func_0x00f78af4(uVar1);
      return *(undefined8 *)(lVar4 + 0x18);
    }
    uVar1 = 0;
    if (*(long *)(lVar4 + 0x70) == 0) goto code_r0x015664c0;
    lVar5 = *(long *)(lVar4 + 0x80);
    uVar1 = /*Atlas.Save.SaveManager$$Delete*/ func_0x014eb828(*(long *)(lVar4 + 0x70),*(undefined4 *)(param_1 + 0x28),0);
    if (lVar5 == 0) goto code_r0x015664c0;
    uVar1 = Core_Application_CoroutineRunner__StartCoroutine(lVar5,uVar1,0);
    uVar3 = 2;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) goto code_r0x015664c0;
    uVar1 = 0;
    if (*(long *)(lVar4 + 0x70) == 0) goto code_r0x015664c0;
    uVar2 = /*Atlas.Save.SaveManager$$WorkOutCurrentSaveSlotFromLastSaved*/ func_0x014ed16c(*(long *)(lVar4 + 0x70),0);
    uVar1 = 0;
    if (*(long *)(lVar4 + 0x70) == 0) goto code_r0x015664c0;
    uVar1 = /*Atlas.Save.SaveManager$$ChangeSaveSlot*/ func_0x014eb8a4(*(long *)(lVar4 + 0x70),uVar2,0);
    uVar3 = 3;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) goto code_r0x015664c0;
    Atlas_UI_Screens_SaveGameScreen__RefreshSlots(lVar4,0);
    uVar1 = Atlas_UI_Screens_SaveGameScreen__EndTask(lVar4,*(undefined4 *)(param_1 + 0x28),0);
    uVar3 = 4;
    break;
  case 4:
    goto code_r0x015664b0;
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = 1;
code_r0x015664b0:
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  return uVar1;
}



// ============================================================
// RVA: 0x15664c4 | Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15664cc | Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot_d__24__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63c40);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156650c | Atlas.UI.Screens.SaveGameScreen.<DeleteCurrentSlot>d__24.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__DeleteCurrentSlot_d__24__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



