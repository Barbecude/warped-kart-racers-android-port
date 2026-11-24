// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29

// ============================================================
// RVA: 0x1566ab4 | Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29..ctor
// ============================================================

void Atlas_UI_Screens_SaveGameScreen__EndTask_d__29___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1566ae0 | Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_SaveGameScreen__EndTask_d__29__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1566ae4 | Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29.MoveNext
// ============================================================

ulong Atlas_UI_Screens_SaveGameScreen__EndTask_d__29__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000003eb4feb & 1) == 0) {
    func_0x00f78a20(0x3d2c8f0);
    func_0x00f78a20(0x3d2c900);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d41298);
    bRam0000000003eb4feb = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x88) = 0;
      uVar3 = Atlas_UI_Screens_AtlasScreen_SaveGameScreenBehaviour__SaveGameScreen_TransitionData___HideFullScreenTransition
                        (lVar4,uRam0000000003d2c8f0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      *(undefined4 *)(param_1 + 0x10) = 1;
      goto LAB_01566c24;
    }
  }
  else {
    if (iVar1 != 1) {
LAB_01566c24:
      return (ulong)(iVar1 == 0);
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    /*Core.Input.InputManager$$ResumeAllInput*/ func_0x0164ae40(0);
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if ((((lVar2 != 0) && (/*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar2,0,0), lVar4 != 0)) &&
        (lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d41298), lVar2 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0x68), lVar2 != 0)) {
      if (*(uint *)(lVar2 + 0x18) <= *(uint *)(param_1 + 0x28)) goto LAB_01566c40;
      lVar2 = *(long *)(lVar2 + (ulong)*(uint *)(param_1 + 0x28) * 8 + 0x20);
      if (lVar2 != 0) {
        Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
                  (lVar4,*(undefined8 *)(lVar2 + 0x20),uRam0000000003d2c900);
        goto LAB_01566c24;
      }
    }
  }
  func_0x00f78af4();
LAB_01566c40:
  uVar3 = func_0x00f78b24();
  lVar4 = func_0x00f78ac0(uVar3,0);
  return *(ulong *)(lVar4 + 0x18);
}



// ============================================================
// RVA: 0x1566c4c | Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__EndTask_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1566c54 | Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__EndTask_d__29__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63c58);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1566c94 | Atlas.UI.Screens.SaveGameScreen.<EndTask>d__29.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_SaveGameScreen__EndTask_d__29__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



