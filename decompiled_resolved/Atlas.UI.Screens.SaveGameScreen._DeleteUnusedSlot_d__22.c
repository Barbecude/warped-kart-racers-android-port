// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22

// ============================================================
// RVA: 0x1566918 | Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22..ctor
// ============================================================

void Atlas_UI_Screens_SaveGameScreen__DeleteUnusedSlot_d__22___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1566944 | Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_SaveGameScreen__DeleteUnusedSlot_d__22__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1566948 | Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22.MoveNext
// ============================================================

undefined8 Atlas_UI_Screens_SaveGameScreen__DeleteUnusedSlot_d__22__MoveNext(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000003eb4fea & 1) == 0) {
    func_0x00f78a20(0x3d2c908);
    bRam0000000003eb4fea = 1;
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
    if (lVar3 == 0) goto code_r0x01566a60;
    uVar1 = Atlas_UI_Screens_AtlasScreen_SaveGameScreenBehaviour__SaveGameScreen_TransitionData___ShowFullScreenTransition
                      (lVar3,uRam0000000003d2c908);
    uVar2 = 1;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) {
code_r0x01566a60:
      lVar3 = func_0x00f78af4(uVar1);
      return *(undefined8 *)(lVar3 + 0x18);
    }
    uVar1 = 0;
    if (*(long *)(lVar3 + 0x70) == 0) goto code_r0x01566a60;
    lVar4 = *(long *)(lVar3 + 0x80);
    uVar1 = /*Atlas.Save.SaveManager$$Delete*/ func_0x014eb828(*(long *)(lVar3 + 0x70),*(undefined4 *)(param_1 + 0x28),0);
    if (lVar4 == 0) goto code_r0x01566a60;
    uVar1 = Core_Application_CoroutineRunner__StartCoroutine(lVar4,uVar1,0);
    uVar2 = 2;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto code_r0x01566a60;
    Atlas_UI_Screens_SaveGameScreen__SetSlotData(lVar3,*(undefined4 *)(param_1 + 0x28),0);
    uVar1 = Atlas_UI_Screens_SaveGameScreen__EndTask(lVar3,*(undefined4 *)(param_1 + 0x28),0);
    uVar2 = 3;
    break;
  case 3:
    goto code_r0x01566a50;
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = 1;
code_r0x01566a50:
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  return uVar1;
}



// ============================================================
// RVA: 0x1566a64 | Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__DeleteUnusedSlot_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1566a6c | Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__DeleteUnusedSlot_d__22__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63c50);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1566aac | Atlas.UI.Screens.SaveGameScreen.<DeleteUnusedSlot>d__22.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__DeleteUnusedSlot_d__22__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



