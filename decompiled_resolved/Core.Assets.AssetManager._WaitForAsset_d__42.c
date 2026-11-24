// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Assets.AssetManager.<WaitForAsset>d__42

// ============================================================
// RVA: 0x1636fb4 | Core.Assets.AssetManager.<WaitForAsset>d__42..ctor
// ============================================================

void Core_Assets_AssetManager__WaitForAsset_d__42___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1638230 | Core.Assets.AssetManager.<WaitForAsset>d__42.System.IDisposable.Dispose
// ============================================================

void Core_Assets_AssetManager__WaitForAsset_d__42__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1638234 | Core.Assets.AssetManager.<WaitForAsset>d__42.MoveNext
// ============================================================

undefined8 Core_Assets_AssetManager__WaitForAsset_d__42__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x10) < 2) {
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) {
      lVar3 = func_0x00f78af4();
      return *(undefined8 *)(lVar3 + 0x18);
    }
    uVar2 = Core_Assets_AssetManager__AreAssetsLoading(lVar3);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    iVar1 = Core_Assets_AssetManager__HasAssetFinishedLoading(lVar3,*(undefined4 *)(param_1 + 0x28))
    ;
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x16382a0 | Core.Assets.AssetManager.<WaitForAsset>d__42.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Assets_AssetManager__WaitForAsset_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x16382a8 | Core.Assets.AssetManager.<WaitForAsset>d__42.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Core_Assets_AssetManager__WaitForAsset_d__42__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62160);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x16382e8 | Core.Assets.AssetManager.<WaitForAsset>d__42.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Assets_AssetManager__WaitForAsset_d__42__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



