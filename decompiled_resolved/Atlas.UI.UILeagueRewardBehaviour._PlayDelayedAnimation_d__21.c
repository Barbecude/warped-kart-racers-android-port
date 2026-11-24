// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UILeagueRewardBehaviour.<PlayDelayedAnimation>d__21

// ============================================================
// RVA: 0x156cd74 | Atlas.UI.UILeagueRewardBehaviour.<PlayDelayedAnimation>d__21..ctor
// ============================================================

void Atlas_UI_UILeagueRewardBehaviour__PlayDelayedAnimation_d__21___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x156cda0 | Atlas.UI.UILeagueRewardBehaviour.<PlayDelayedAnimation>d__21.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_UILeagueRewardBehaviour__PlayDelayedAnimation_d__21__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x156cda4 | Atlas.UI.UILeagueRewardBehaviour.<PlayDelayedAnimation>d__21.MoveNext
// ============================================================

ulong Atlas_UI_UILeagueRewardBehaviour__PlayDelayedAnimation_d__21__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  int iVar5;
  
  if ((bRam0000000003eb5012 & 1) == 0) {
    func_0x00f78a20(0x3d25578);
    func_0x00f78a20(0x3d25a68);
    bRam0000000003eb5012 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x28);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) {
LAB_0156cea4:
      lVar3 = func_0x00f78af4();
      return *(ulong *)(lVar3 + 0x18);
    }
    fVar4 = *(float *)(lVar3 + 0x40);
    iVar5 = *(int *)(param_1 + 0x20);
    uVar2 = func_0x00f78aec(/*UnityEngine.WaitForSeconds_TypeInfo*/ uRam0000000003d25a68);
    /*UnityEngine.WaitForSeconds$$.ctor*/ func_0x0327dcd0(fVar4 * (float)iVar5,uVar2,0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar3 == 0) goto LAB_0156cea4;
    Atlas_UI_UILeagueRewardBehaviour__PlayAnimation
              (lVar3,*(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 0xc),0);
  }
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x156cea8 | Atlas.UI.UILeagueRewardBehaviour.<PlayDelayedAnimation>d__21.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_UILeagueRewardBehaviour__PlayDelayedAnimation_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156ceb0 | Atlas.UI.UILeagueRewardBehaviour.<PlayDelayedAnimation>d__21.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_UILeagueRewardBehaviour__PlayDelayedAnimation_d__21__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d64808);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156cef0 | Atlas.UI.UILeagueRewardBehaviour.<PlayDelayedAnimation>d__21.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_UILeagueRewardBehaviour__PlayDelayedAnimation_d__21__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



