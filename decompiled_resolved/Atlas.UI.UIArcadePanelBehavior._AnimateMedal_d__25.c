// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIArcadePanelBehavior.<AnimateMedal>d__25

// ============================================================
// RVA: 0x156bcb0 | Atlas.UI.UIArcadePanelBehavior.<AnimateMedal>d__25..ctor
// ============================================================

void Atlas_UI_UIArcadePanelBehavior__AnimateMedal_d__25___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x156bcdc | Atlas.UI.UIArcadePanelBehavior.<AnimateMedal>d__25.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_UIArcadePanelBehavior__AnimateMedal_d__25__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x156bce0 | Atlas.UI.UIArcadePanelBehavior.<AnimateMedal>d__25.MoveNext
// ============================================================

ulong Atlas_UI_UIArcadePanelBehavior__AnimateMedal_d__25__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  if ((bRam0000000003eb5009 & 1) == 0) {
    func_0x00f78a20(0x3d25a68);
    bRam0000000003eb5009 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    uVar2 = func_0x00f78aec(/*UnityEngine.WaitForSeconds_TypeInfo*/ uRam0000000003d25a68);
    /*UnityEngine.WaitForSeconds$$.ctor*/ func_0x0327dcd0(uVar4,uVar2,0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x10) = 1;
LAB_0156bda8:
    return (ulong)(iVar1 == 0);
  }
  if (iVar1 != 1) goto LAB_0156bda8;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x20), lVar3 != 0)) {
    if (*(uint *)(lVar3 + 0x18) <= *(uint *)(param_1 + 0x30)) goto LAB_0156bdc8;
    lVar3 = *(long *)(lVar3 + (long)(int)*(uint *)(param_1 + 0x30) * 8 + 0x20);
    if (lVar3 != 0) {
      Atlas_UI_ArcadeEventRepresentationViewBehaviour__DoMedalAnimation
                (*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                 *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),lVar3,0);
      goto LAB_0156bda8;
    }
  }
  func_0x00f78af4();
LAB_0156bdc8:
  uVar2 = func_0x00f78b24();
  lVar3 = func_0x00f78ac0(uVar2,0);
  return *(ulong *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156bdd4 | Atlas.UI.UIArcadePanelBehavior.<AnimateMedal>d__25.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_UIArcadePanelBehavior__AnimateMedal_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156bddc | Atlas.UI.UIArcadePanelBehavior.<AnimateMedal>d__25.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_UIArcadePanelBehavior__AnimateMedal_d__25__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d647b0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156be1c | Atlas.UI.UIArcadePanelBehavior.<AnimateMedal>d__25.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_UIArcadePanelBehavior__AnimateMedal_d__25__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



