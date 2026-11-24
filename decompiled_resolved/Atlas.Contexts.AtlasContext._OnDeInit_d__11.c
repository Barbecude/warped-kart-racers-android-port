// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.AtlasContext.<OnDeInit>d__11

// ============================================================
// RVA: 0x15458ec | Atlas.Contexts.AtlasContext.<OnDeInit>d__11..ctor
// ============================================================

void Atlas_Contexts_AtlasContext__OnDeInit_d__11___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1545918 | Atlas.Contexts.AtlasContext.<OnDeInit>d__11.System.IDisposable.Dispose
// ============================================================

void Atlas_Contexts_AtlasContext__OnDeInit_d__11__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x154591c | Atlas.Contexts.AtlasContext.<OnDeInit>d__11.MoveNext
// ============================================================

undefined8 Atlas_Contexts_AtlasContext__OnDeInit_d__11__MoveNext(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  return 0;
}



// ============================================================
// RVA: 0x1545934 | Atlas.Contexts.AtlasContext.<OnDeInit>d__11.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Contexts_AtlasContext__OnDeInit_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x154593c | Atlas.Contexts.AtlasContext.<OnDeInit>d__11.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_Contexts_AtlasContext__OnDeInit_d__11__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d621f8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x154597c | Atlas.Contexts.AtlasContext.<OnDeInit>d__11.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Contexts_AtlasContext__OnDeInit_d__11__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



