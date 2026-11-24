// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.ApplicationBehaviour.<OnApplicationPause>d__79

// ============================================================
// RVA: 0x1532f3c | Atlas.ApplicationBehaviour.<OnApplicationPause>d__79..ctor
// ============================================================

void Atlas_ApplicationBehaviour__OnApplicationPause_d__79___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1532f68 | Atlas.ApplicationBehaviour.<OnApplicationPause>d__79.System.IDisposable.Dispose
// ============================================================

void Atlas_ApplicationBehaviour__OnApplicationPause_d__79__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1532f6c | Atlas.ApplicationBehaviour.<OnApplicationPause>d__79.MoveNext
// ============================================================

undefined8 Atlas_ApplicationBehaviour__OnApplicationPause_d__79__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x58) == 0)) goto LAB_01533010;
      uVar2 = Atlas_Save_SaveManager__WaitForSavingFullyComplete(*(long *)(lVar4 + 0x58),0);
      uVar3 = 2;
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar4 == 0) {
LAB_01533010:
        lVar4 = func_0x00f78af4(0);
        return *(undefined8 *)(lVar4 + 0x18);
      }
      if (*(char *)(lVar4 + 0x30) == '\0') {
        return 0;
      }
      if (*(long *)(lVar4 + 0x1a0) == 0) goto LAB_01533010;
      uVar2 = Atlas_Analytics_AtlasAnalyticsManager__OnApplicationPause(*(long *)(lVar4 + 0x1a0),0);
      uVar3 = 1;
    }
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  return uVar2;
}



// ============================================================
// RVA: 0x1533014 | Atlas.ApplicationBehaviour.<OnApplicationPause>d__79.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_ApplicationBehaviour__OnApplicationPause_d__79__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x153301c | Atlas.ApplicationBehaviour.<OnApplicationPause>d__79.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_ApplicationBehaviour__OnApplicationPause_d__79__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d61fd8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x153305c | Atlas.ApplicationBehaviour.<OnApplicationPause>d__79.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_ApplicationBehaviour__OnApplicationPause_d__79__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



