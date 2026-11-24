// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.AtlasScreen.<ShowFullScreenTransition>d__3<object, object>

// ============================================================
// RVA: 0x1b3697c | Atlas.UI.Screens.AtlasScreen.<ShowFullScreenTransition>d__3<object, object>..ctor
// ============================================================

void Atlas_UI_Screens_AtlasScreen__ShowFullScreenTransition_d__3_object__object____ctor
               (long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
    *(undefined4 *)(param_1 + 0x10) = param_2;
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1b369b0 | Atlas.UI.Screens.AtlasScreen.<ShowFullScreenTransition>d__3<object, object>.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_AtlasScreen__ShowFullScreenTransition_d__3_object__object___System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x1b369b4 | Atlas.UI.Screens.AtlasScreen.<ShowFullScreenTransition>d__3<object, object>.MoveNext
// ============================================================

undefined8
Atlas_UI_Screens_AtlasScreen__ShowFullScreenTransition_d__3_object__object___MoveNext
          (long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto LAB_01b36a8c;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((lVar3 == 0) ||
        (lVar2 = (**(code **)**(undefined8 **)(*(long *)(param_2 + 0x18) + 0xc0))(lVar3), lVar2 == 0
        )) || (*(long *)(lVar2 + 0x78) == 0)) goto LAB_01b36a8c;
    /*Atlas.UI.TransitionManager$$StartTransitionSequence*/ func_0x01511d44(*(long *)(lVar2 + 0x78),1,0,0,0,0);
  }
  lVar3 = (**(code **)**(undefined8 **)(*(long *)(param_2 + 0x18) + 0xc0))(lVar3);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x78) != 0)) {
    iVar1 = /*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(*(long *)(lVar3 + 0x78),0);
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
LAB_01b36a8c:
  lVar3 = func_0x00f78af4();
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1b36a90 | Atlas.UI.Screens.AtlasScreen.<ShowFullScreenTransition>d__3<object, object>.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_AtlasScreen__ShowFullScreenTransition_d__3_object__object___System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1b36a98 | Atlas.UI.Screens.AtlasScreen.<ShowFullScreenTransition>d__3<object, object>.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_AtlasScreen__ShowFullScreenTransition_d__3_object__object___System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d29e18);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1b36ad8 | Atlas.UI.Screens.AtlasScreen.<ShowFullScreenTransition>d__3<object, object>.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_AtlasScreen__ShowFullScreenTransition_d__3_object__object___System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



