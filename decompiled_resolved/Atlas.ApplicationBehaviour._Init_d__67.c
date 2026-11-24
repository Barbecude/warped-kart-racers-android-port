// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.ApplicationBehaviour.<Init>d__67

// ============================================================
// RVA: 0x1532124 | Atlas.ApplicationBehaviour.<Init>d__67..ctor
// ============================================================

void Atlas_ApplicationBehaviour__Init_d__67___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1532150 | Atlas.ApplicationBehaviour.<Init>d__67.System.IDisposable.Dispose
// ============================================================

void Atlas_ApplicationBehaviour__Init_d__67__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1532154 | Atlas.ApplicationBehaviour.<Init>d__67.MoveNext
// ============================================================

ulong Atlas_ApplicationBehaviour__Init_d__67__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  
  if ((bRam0000000003eb4eb1 & 1) == 0) {
    func_0x00f78a20(0x3d436b0);
    func_0x00f78a20(0x3d23110);
    func_0x00f78a20(0x3d26848);
    func_0x00f78a20(0x3d25818);
    bRam0000000003eb4eb1 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = func_0x00f78aec(/*UnityEngine.Application.LowMemoryCallback_TypeInfo*/ uRam0000000003d26848);
    /*UnityEngine.Application.LowMemoryCallback$$.ctor*/ func_0x0327e28c(uVar2,lVar5,uRam0000000003d436b0,0);
    /*UnityEngine.Application$$add_lowMemory*/ func_0x03218a2c(uVar2,0);
    if (lVar5 == 0) {
code_r0x015322b4:
      lVar5 = func_0x00f78af4();
      return *(ulong *)(lVar5 + 0x18);
    }
    Atlas_ApplicationBehaviour__InitialiseBuildInfo(lVar5,0);
    lVar3 = func_0x00f78aec(/*Atlas.Debugging.LogHandler_TypeInfo*/ uRam0000000003d23110);
    /*Atlas.Debugging.LogHandler$$.ctor*/ func_0x0148afbc(lVar3,0);
    *(long *)(lVar5 + 0x40) = lVar3;
    if (lVar3 == 0) goto code_r0x015322b4;
    /*Atlas.Debugging.LogHandler$$Init*/ func_0x0148a51c(lVar3,0);
    lVar3 = func_0x00f78aec(/*Core.Application.UpdateParams_TypeInfo*/ uRam0000000003d25818);
    /*Core.Application.UpdateParams$$.ctor*/ func_0x01633ed8(lVar3,0);
    *(long *)(lVar5 + 0x38) = lVar3;
    if (lVar3 == 0) goto code_r0x015322b4;
    /*Core.Application.UpdateParams$$Set*/ func_0x01633e80(lVar3,0);
    Atlas_ApplicationBehaviour__CreateAndRegisterDependencies(lVar5,0);
    uVar2 = Atlas_ApplicationBehaviour__InitSystems(lVar5,0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar4 = 1;
  }
  else {
    if (iVar1 != 1) goto LAB_0153229c;
    uVar4 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
LAB_0153229c:
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x15322b8 | Atlas.ApplicationBehaviour.<Init>d__67.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_ApplicationBehaviour__Init_d__67__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15322c0 | Atlas.ApplicationBehaviour.<Init>d__67.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_ApplicationBehaviour__Init_d__67__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d61fc8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1532300 | Atlas.ApplicationBehaviour.<Init>d__67.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_ApplicationBehaviour__Init_d__67__System_Collections_IEnumerator_get_Current(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



