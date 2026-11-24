// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Tests.RebootTestContext.<OnDeInit>d__7

// ============================================================
// RVA: 0x1564878 | Atlas.Tests.RebootTestContext.<OnDeInit>d__7..ctor
// ============================================================

void Atlas_Tests_RebootTestContext__OnDeInit_d__7___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15648a4 | Atlas.Tests.RebootTestContext.<OnDeInit>d__7.System.IDisposable.Dispose
// ============================================================

void Atlas_Tests_RebootTestContext__OnDeInit_d__7__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x15648a8 | Atlas.Tests.RebootTestContext.<OnDeInit>d__7.MoveNext
// ============================================================

ulong Atlas_Tests_RebootTestContext__OnDeInit_d__7__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
code_r0x01564930:
      lVar4 = func_0x00f78af4();
      return *(ulong *)(lVar4 + 0x18);
    }
    if (*(int *)(lVar4 + 0x18) == 3) {
      if (*(long *)(lVar4 + 0x10) == 0) goto code_r0x01564930;
      /*System.Action$$Invoke*/ func_0x02924c90(*(long *)(lVar4 + 0x10),0);
    }
    uVar2 = Atlas_Tests_RebootTestContext____n__1(lVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar3 = 1;
  }
  else {
    if (iVar1 != 1) goto LAB_01564918;
    uVar3 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar3;
LAB_01564918:
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x1564934 | Atlas.Tests.RebootTestContext.<OnDeInit>d__7.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Tests_RebootTestContext__OnDeInit_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156493c | Atlas.Tests.RebootTestContext.<OnDeInit>d__7.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_Tests_RebootTestContext__OnDeInit_d__7__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63af8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156497c | Atlas.Tests.RebootTestContext.<OnDeInit>d__7.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Tests_RebootTestContext__OnDeInit_d__7__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



