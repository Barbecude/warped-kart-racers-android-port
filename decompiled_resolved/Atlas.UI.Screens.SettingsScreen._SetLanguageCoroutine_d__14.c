// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SettingsScreen.<SetLanguageCoroutine>d__14

// ============================================================
// RVA: 0x1569c5c | Atlas.UI.Screens.SettingsScreen.<SetLanguageCoroutine>d__14..ctor
// ============================================================

void Atlas_UI_Screens_SettingsScreen__SetLanguageCoroutine_d__14___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1569c88 | Atlas.UI.Screens.SettingsScreen.<SetLanguageCoroutine>d__14.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_SettingsScreen__SetLanguageCoroutine_d__14__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1569c8c | Atlas.UI.Screens.SettingsScreen.<SetLanguageCoroutine>d__14.MoveNext
// ============================================================

undefined8 Atlas_UI_Screens_SettingsScreen__SetLanguageCoroutine_d__14__MoveNext(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((bRam0000000003eb4ffa & 1) == 0) {
    func_0x00f78a20(0x3d2c930);
    func_0x00f78a20(0x3d2c940);
    func_0x00f78a20(0x3d412d8);
    bRam0000000003eb4ffa = 1;
  }
  if (3 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 != 0) {
      uVar1 = Atlas_UI_Screens_AtlasScreen_SaveGameScreenBehaviour__SaveGameScreen_TransitionData___ShowFullScreenTransition
                        (lVar4,uRam0000000003d2c940);
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x78) != 0)) {
      uVar1 = /*Core.Localisation.LocalisationManager$$TrySetLanguage*/ func_0x0164f9f0(*(long *)(lVar4 + 0x78),*(undefined8 *)(param_1 + 0x28),0,0);
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      uVar3 = 2;
code_r0x01569df0:
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      return 1;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((lVar4 != 0) && (lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d412d8), lVar2 != 0)) &&
       ((*(long *)(lVar2 + 0x48) != 0 &&
        (lVar2 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar2 + 0x48),0), lVar2 != 0)))) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + 0x28);
      lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d412d8);
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0x48) != 0)) {
        /*Atlas.Save.SaveManager$$MarkSaveAsDirty*/ func_0x014eb72c(*(long *)(lVar2 + 0x48),0);
        Atlas_UI_Screens_SettingsScreen__SelectButtonForSelectedLanguage(lVar4,0);
        uVar1 = Atlas_UI_Screens_AtlasScreen_SaveGameScreenBehaviour__SaveGameScreen_TransitionData___HideFullScreenTransition
                          (lVar4,uRam0000000003d2c930);
        *(undefined8 *)(param_1 + 0x18) = uVar1;
        uVar3 = 3;
        goto code_r0x01569df0;
      }
    }
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((lVar4 != 0) && (lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d412d8), lVar2 != 0)) &&
       (*(long *)(lVar2 + 0xa8) != 0)) {
      /*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(lVar2 + 0xa8),4,0,0);
      lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d412d8);
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0xa8) != 0)) {
        /*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(lVar2 + 0xa8),*(undefined4 *)(lVar4 + 0x48),0,0);
        *(undefined1 *)(lVar4 + 0x80) = 0;
        return 0;
      }
    }
  }
  lVar4 = func_0x00f78af4();
  return *(undefined8 *)(lVar4 + 0x18);
}



// ============================================================
// RVA: 0x1569e7c | Atlas.UI.Screens.SettingsScreen.<SetLanguageCoroutine>d__14.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_SettingsScreen__SetLanguageCoroutine_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1569e84 | Atlas.UI.Screens.SettingsScreen.<SetLanguageCoroutine>d__14.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_SettingsScreen__SetLanguageCoroutine_d__14__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63da0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1569ec4 | Atlas.UI.Screens.SettingsScreen.<SetLanguageCoroutine>d__14.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_SettingsScreen__SetLanguageCoroutine_d__14__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



