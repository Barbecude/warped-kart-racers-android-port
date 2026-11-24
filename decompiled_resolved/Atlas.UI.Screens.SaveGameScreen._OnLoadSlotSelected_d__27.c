// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27

// ============================================================
// RVA: 0x1566c9c | Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27..ctor
// ============================================================

void Atlas_UI_Screens_SaveGameScreen__OnLoadSlotSelected_d__27___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1566cc8 | Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_SaveGameScreen__OnLoadSlotSelected_d__27__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1566ccc | Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27.MoveNext
// ============================================================

undefined8 Atlas_UI_Screens_SaveGameScreen__OnLoadSlotSelected_d__27__MoveNext(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4fec & 1) == 0) {
    func_0x00f78a20(0x3d2c908);
    bRam0000000003eb4fec = 1;
  }
  uVar1 = 0;
  if (3 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  uVar2 = 0xffffffff;
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar1 = /*Core.Input.InputManager$$SuspendAllInput*/ func_0x0164ade0(0);
    if (lVar3 == 0) goto code_r0x01566dd8;
    uVar1 = Atlas_UI_Screens_AtlasScreen_SaveGameScreenBehaviour__SaveGameScreen_TransitionData___ShowFullScreenTransition
                      (lVar3,uRam0000000003d2c908);
    uVar2 = 1;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) {
code_r0x01566dd8:
      lVar3 = func_0x00f78af4(uVar1);
      return *(undefined8 *)(lVar3 + 0x18);
    }
    uVar1 = 0;
    if (*(long *)(lVar3 + 0x70) == 0) goto code_r0x01566dd8;
    uVar1 = /*Atlas.Save.SaveManager$$ChangeSaveSlot*/ func_0x014eb8a4(*(long *)(lVar3 + 0x70),*(undefined4 *)(param_1 + 0x28),0);
    uVar2 = 2;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto code_r0x01566dd8;
    Atlas_UI_Screens_SaveGameScreen__RefreshSlots(lVar3,0);
    uVar1 = 0;
    if (*(long *)(lVar3 + 0x98) == 0) goto code_r0x01566dd8;
    /*Atlas.League.LeagueManager$$SetupLeagueMode*/ func_0x015f1a38(*(long *)(lVar3 + 0x98),0);
    uVar1 = Atlas_UI_Screens_SaveGameScreen__EndTask(lVar3,*(undefined4 *)(param_1 + 0x28),0);
    uVar2 = 3;
    break;
  case 3:
    goto code_r0x01566dc8;
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = 1;
code_r0x01566dc8:
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  return uVar1;
}



// ============================================================
// RVA: 0x1566ddc | Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__OnLoadSlotSelected_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1566de4 | Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__OnLoadSlotSelected_d__27__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63c60);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1566e24 | Atlas.UI.Screens.SaveGameScreen.<OnLoadSlotSelected>d__27.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__OnLoadSlotSelected_d__27__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



