// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28

// ============================================================
// RVA: 0x1566e2c | Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28..ctor
// ============================================================

void Atlas_UI_Screens_SaveGameScreen__OnStartNewSlotSelected_d__28___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1566e58 | Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_SaveGameScreen__OnStartNewSlotSelected_d__28__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1566e5c | Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28.MoveNext
// ============================================================

undefined8 Atlas_UI_Screens_SaveGameScreen__OnStartNewSlotSelected_d__28__MoveNext(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 uStack_21;
  
  if ((bRam0000000003eb4fed & 1) == 0) {
    func_0x00f78a20(0x3d2c8f0);
    func_0x00f78a20(0x3d2c908);
    func_0x00f78a20(0x3d20260);
    func_0x00f78a20(0x3d412a0);
    bRam0000000003eb4fed = 1;
  }
  if (*(uint *)(param_1 + 0x10) < 5) {
    lVar4 = *(long *)(param_1 + 0x20);
    switch(*(uint *)(param_1 + 0x10)) {
    case 0:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      /*Core.Input.InputManager$$SuspendAllInput*/ func_0x0164ade0(0);
      if (lVar4 != 0) {
        uVar2 = Atlas_UI_Screens_AtlasScreen_SaveGameScreenBehaviour__SaveGameScreen_TransitionData___ShowFullScreenTransition
                          (lVar4,uRam0000000003d2c908);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
code_r0x01567020:
      lVar4 = func_0x00f78af4();
      return *(undefined8 *)(lVar4 + 0x18);
    case 1:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x70) == 0)) goto code_r0x01567020;
      uVar2 = /*Atlas.Save.SaveManager$$ChangeSaveSlot*/ func_0x014eb8a4(*(long *)(lVar4 + 0x70),*(undefined4 *)(param_1 + 0x28),0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      uVar3 = 2;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x70) == 0)) goto code_r0x01567020;
      uStack_21 = /*Atlas.Save.SaveManager$$StartSave*/ func_0x014eb4e0(*(long *)(lVar4 + 0x70),0);
      uVar2 = func_0x00f78ae0(/*bool_TypeInfo*/ uRam0000000003d20260,&uStack_21);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      uVar3 = 3;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar4 == 0) goto code_r0x01567020;
      Atlas_UI_Screens_SaveGameScreen__RefreshSlots(lVar4,0);
      if (*(long *)(lVar4 + 0x98) == 0) goto code_r0x01567020;
      /*Atlas.League.LeagueManager$$SetupLeagueMode*/ func_0x015f1a38(*(long *)(lVar4 + 0x98),0);
      uVar2 = Atlas_UI_Screens_AtlasScreen_SaveGameScreenBehaviour__SaveGameScreen_TransitionData___HideFullScreenTransition
                        (lVar4,uRam0000000003d2c8f0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      uVar3 = 4;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar4 == 0) || (lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d412a0), lVar1 == 0))
      goto code_r0x01567020;
      if (*(long *)(lVar1 + 0x10) != 0) {
        /*Atlas.UI.Screens.SaveGameScreen.SoftReboot$$Invoke*/ func_0x015666c4();
      }
      *(undefined8 *)(lVar4 + 0x88) = 0;
      /*Core.Input.InputManager$$ResumeAllInput*/ func_0x0164ae40(0);
      goto LAB_0156700c;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    uVar2 = 1;
  }
  else {
LAB_0156700c:
    uVar2 = 0;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x1567024 | Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__OnStartNewSlotSelected_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156702c | Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__OnStartNewSlotSelected_d__28__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63c68);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156706c | Atlas.UI.Screens.SaveGameScreen.<OnStartNewSlotSelected>d__28.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__OnStartNewSlotSelected_d__28__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



