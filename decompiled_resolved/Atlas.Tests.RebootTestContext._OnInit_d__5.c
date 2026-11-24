// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Tests.RebootTestContext.<OnInit>d__5

// ============================================================
// RVA: 0x1564984 | Atlas.Tests.RebootTestContext.<OnInit>d__5..ctor
// ============================================================

void Atlas_Tests_RebootTestContext__OnInit_d__5___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15649b0 | Atlas.Tests.RebootTestContext.<OnInit>d__5.System.IDisposable.Dispose
// ============================================================

void Atlas_Tests_RebootTestContext__OnInit_d__5__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x15649b4 | Atlas.Tests.RebootTestContext.<OnInit>d__5.MoveNext
// ============================================================

ulong Atlas_Tests_RebootTestContext__OnInit_d__5__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((bRam0000000003eb4fdf & 1) == 0) {
    func_0x00f78a20(0x3d24140);
    bRam0000000003eb4fdf = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x28);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x18) == 1) {
          if (*(long *)(lVar2 + 0x10) == 0) goto LAB_01564ab0;
          /*System.Action$$Invoke*/ func_0x02924c90(*(long *)(lVar2 + 0x10),0);
        }
        goto LAB_01564a84;
      }
      goto LAB_01564ab0;
    }
    goto LAB_01564a84;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  plVar4 = *(long **)(param_1 + 0x20);
  if (plVar4 == (long *)0x0) {
code_r0x01564a68:
    if (lVar2 == 0) {
LAB_01564ab0:
      lVar2 = func_0x00f78af4();
      return *(ulong *)(lVar2 + 0x18);
    }
  }
  else {
    if ((*(byte *)(*plVar4 + 300) < *(byte *)(/*Atlas.Tests.RebootTestContextInfo_TypeInfo*/ lRam0000000003d24140 + 300)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(/*Atlas.Tests.RebootTestContextInfo_TypeInfo*/ lRam0000000003d24140 + 300) * 8 + -8)
        != /*Atlas.Tests.RebootTestContextInfo_TypeInfo*/ lRam0000000003d24140)) goto code_r0x01564a68;
    if (lVar2 == 0) goto LAB_01564ab0;
    *(long *)(lVar2 + 0x10) = plVar4[2];
    *(int *)(lVar2 + 0x18) = (int)plVar4[3];
  }
  uVar3 = Atlas_Tests_RebootTestContext____n__0(lVar2,plVar4,*(undefined8 *)(param_1 + 0x30),0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = 1;
LAB_01564a84:
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x1564ab4 | Atlas.Tests.RebootTestContext.<OnInit>d__5.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Tests_RebootTestContext__OnInit_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1564abc | Atlas.Tests.RebootTestContext.<OnInit>d__5.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_Tests_RebootTestContext__OnInit_d__5__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d63b00);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1564afc | Atlas.Tests.RebootTestContext.<OnInit>d__5.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Tests_RebootTestContext__OnInit_d__5__System_Collections_IEnumerator_get_Current(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



