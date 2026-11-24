// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Assets.AssetManager.<WaitForAllAssetsToLoad>d__40

// ============================================================
// RVA: 0x1636e78 | Core.Assets.AssetManager.<WaitForAllAssetsToLoad>d__40..ctor
// ============================================================

void Core_Assets_AssetManager__WaitForAllAssetsToLoad_d__40___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x16380d4 | Core.Assets.AssetManager.<WaitForAllAssetsToLoad>d__40.System.IDisposable.Dispose
// ============================================================

void Core_Assets_AssetManager__WaitForAllAssetsToLoad_d__40__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x16380d8 | Core.Assets.AssetManager.<WaitForAllAssetsToLoad>d__40.MoveNext
// ============================================================

undefined8 Core_Assets_AssetManager__WaitForAllAssetsToLoad_d__40__MoveNext(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x10) < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
      lVar2 = func_0x00f78af4();
      return *(undefined8 *)(lVar2 + 0x18);
    }
    uVar1 = Core_Assets_AssetManager__AreAssetsLoading();
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x1638130 | Core.Assets.AssetManager.<WaitForAllAssetsToLoad>d__40.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Assets_AssetManager__WaitForAllAssetsToLoad_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1638138 | Core.Assets.AssetManager.<WaitForAllAssetsToLoad>d__40.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Core_Assets_AssetManager__WaitForAllAssetsToLoad_d__40__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62150);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1638178 | Core.Assets.AssetManager.<WaitForAllAssetsToLoad>d__40.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Assets_AssetManager__WaitForAllAssetsToLoad_d__40__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



