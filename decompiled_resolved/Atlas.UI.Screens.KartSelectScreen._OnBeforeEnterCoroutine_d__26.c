// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.KartSelectScreen.<OnBeforeEnterCoroutine>d__26

// ============================================================
// RVA: 0x1555e5c | Atlas.UI.Screens.KartSelectScreen.<OnBeforeEnterCoroutine>d__26..ctor
// ============================================================

void Atlas_UI_Screens_KartSelectScreen__OnBeforeEnterCoroutine_d__26___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1555e88 | Atlas.UI.Screens.KartSelectScreen.<OnBeforeEnterCoroutine>d__26.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_KartSelectScreen__OnBeforeEnterCoroutine_d__26__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x1555e8c | Atlas.UI.Screens.KartSelectScreen.<OnBeforeEnterCoroutine>d__26.MoveNext
// ============================================================

ulong Atlas_UI_Screens_KartSelectScreen__OnBeforeEnterCoroutine_d__26__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
      lVar3 = func_0x00f78af4();
      return *(ulong *)(lVar3 + 0x18);
    }
    uVar2 = Atlas_UI_Screens_KartSelectScreen__SetupData(*(long *)(param_1 + 0x20),0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar4 = 1;
  }
  else {
    if (iVar1 != 1) goto LAB_01555ed8;
    uVar4 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
LAB_01555ed8:
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x1555ef0 | Atlas.UI.Screens.KartSelectScreen.<OnBeforeEnterCoroutine>d__26.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_KartSelectScreen__OnBeforeEnterCoroutine_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1555ef8 | Atlas.UI.Screens.KartSelectScreen.<OnBeforeEnterCoroutine>d__26.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_KartSelectScreen__OnBeforeEnterCoroutine_d__26__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63478);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1555f38 | Atlas.UI.Screens.KartSelectScreen.<OnBeforeEnterCoroutine>d__26.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_KartSelectScreen__OnBeforeEnterCoroutine_d__26__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



