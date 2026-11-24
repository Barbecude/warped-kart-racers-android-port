// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIArcadeRewardBehaviour.<AnimateMedalCount>d__20

// ============================================================
// RVA: 0x156be24 | Atlas.UI.UIArcadeRewardBehaviour.<AnimateMedalCount>d__20..ctor
// ============================================================

void Atlas_UI_UIArcadeRewardBehaviour__AnimateMedalCount_d__20___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x156be50 | Atlas.UI.UIArcadeRewardBehaviour.<AnimateMedalCount>d__20.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_UIArcadeRewardBehaviour__AnimateMedalCount_d__20__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x156be54 | Atlas.UI.UIArcadeRewardBehaviour.<AnimateMedalCount>d__20.MoveNext
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 Atlas_UI_UIArcadeRewardBehaviour__AnimateMedalCount_d__20__MoveNext(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((bRam0000000003eb500a & 1) == 0) {
    func_0x00f78a20(0x3d25608);
    func_0x00f78a20(0x3d25a68);
    bRam0000000003eb500a = 1;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x28) == 0) {
code_r0x0156bfa8:
      lVar3 = func_0x00f78af4();
      return *(undefined8 *)(lVar3 + 0x18);
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x48);
    uVar5 = *(undefined4 *)(param_1 + 0x38);
    uVar4 = *(undefined4 *)(param_1 + 0x30);
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*Core.UI2.UIUtils$$GetSizeFormattedProgressString*/ func_0x02f90ca0(0x42dc0000,uVar5,uVar4,0);
    if (lVar3 == 0) goto code_r0x0156bfa8;
    /*Atlas.UI.UIIconAndValueBehaviour$$Set*/ func_0x01513494(lVar3,uVar1,0);
    iVar2 = *(int *)(param_1 + 0x38) + 1;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar4 = 1;
      uVar5 = 0x3f000000;
      goto LAB_0156bf68;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar2 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x38) = iVar2;
  if (*(int *)(param_1 + 0x34) < iVar2) {
    return 0;
  }
  uVar4 = 2;
  uVar5 = _UNK_033f8140;
LAB_0156bf68:
  uVar1 = func_0x00f78aec(/*UnityEngine.WaitForSeconds_TypeInfo*/ uRam0000000003d25a68);
  /*UnityEngine.WaitForSeconds$$.ctor*/ func_0x0327dcd0(uVar5,uVar1,0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return 1;
}



// ============================================================
// RVA: 0x156bfac | Atlas.UI.UIArcadeRewardBehaviour.<AnimateMedalCount>d__20.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_UIArcadeRewardBehaviour__AnimateMedalCount_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156bfb4 | Atlas.UI.UIArcadeRewardBehaviour.<AnimateMedalCount>d__20.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_UIArcadeRewardBehaviour__AnimateMedalCount_d__20__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d647b8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156bff4 | Atlas.UI.UIArcadeRewardBehaviour.<AnimateMedalCount>d__20.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_UIArcadeRewardBehaviour__AnimateMedalCount_d__20__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



