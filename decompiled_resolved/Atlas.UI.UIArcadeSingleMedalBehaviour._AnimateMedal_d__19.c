// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIArcadeSingleMedalBehaviour.<AnimateMedal>d__19

// ============================================================
// RVA: 0x156c454 | Atlas.UI.UIArcadeSingleMedalBehaviour.<AnimateMedal>d__19..ctor
// ============================================================

void Atlas_UI_UIArcadeSingleMedalBehaviour__AnimateMedal_d__19___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x156c480 | Atlas.UI.UIArcadeSingleMedalBehaviour.<AnimateMedal>d__19.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_UIArcadeSingleMedalBehaviour__AnimateMedal_d__19__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x156c484 | Atlas.UI.UIArcadeSingleMedalBehaviour.<AnimateMedal>d__19.MoveNext
// ============================================================

ulong Atlas_UI_UIArcadeSingleMedalBehaviour__AnimateMedal_d__19__MoveNext(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  
  if ((bRam0000000003eb500e & 1) == 0) {
    func_0x00f78a20(0x3d25a68);
    func_0x00f78a20(0x3d68fb0);
    bRam0000000003eb500e = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar5 = *(undefined4 *)(param_1 + 0x20);
    uVar3 = func_0x00f78aec(/*UnityEngine.WaitForSeconds_TypeInfo*/ uRam0000000003d25a68);
    /*UnityEngine.WaitForSeconds$$.ctor*/ func_0x0327dcd0(uVar5,uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    lVar4 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar4 != 0) && (plVar2 = *(long **)(lVar4 + 0x80), plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x2a8))
                (*(undefined4 *)(lVar4 + 0x48),*(undefined4 *)(lVar4 + 0x4c),
                 *(undefined4 *)(lVar4 + 0x50),*(undefined4 *)(lVar4 + 0x54),plVar2,
                 *(undefined8 *)(*plVar2 + 0x2b0));
      if (*(long *)(lVar4 + 0x78) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar4 + 0x78),1,0);
        if (*(long *)(lVar4 + 0x78) != 0) {
          /*UnityEngine.Animator$$Play*/ func_0x032113b4(*(long *)(lVar4 + 0x78),/*STR('Anim_VFX_UIShineEffect_Medal')*/ uRam0000000003d68fb0,0);
          goto LAB_0156c574;
        }
      }
    }
    lVar4 = func_0x00f78af4();
    return *(ulong *)(lVar4 + 0x18);
  }
LAB_0156c574:
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x156c594 | Atlas.UI.UIArcadeSingleMedalBehaviour.<AnimateMedal>d__19.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_UIArcadeSingleMedalBehaviour__AnimateMedal_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156c59c | Atlas.UI.UIArcadeSingleMedalBehaviour.<AnimateMedal>d__19.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_UIArcadeSingleMedalBehaviour__AnimateMedal_d__19__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d647d0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156c5dc | Atlas.UI.UIArcadeSingleMedalBehaviour.<AnimateMedal>d__19.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_UIArcadeSingleMedalBehaviour__AnimateMedal_d__19__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



