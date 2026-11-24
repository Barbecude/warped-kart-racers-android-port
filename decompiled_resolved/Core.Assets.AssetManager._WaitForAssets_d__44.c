// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Assets.AssetManager.<WaitForAssets>d__44

// ============================================================
// RVA: 0x16371bc | Core.Assets.AssetManager.<WaitForAssets>d__44..ctor
// ============================================================

void Core_Assets_AssetManager__WaitForAssets_d__44___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x16382f0 | Core.Assets.AssetManager.<WaitForAssets>d__44.System.IDisposable.Dispose
// ============================================================

void Core_Assets_AssetManager__WaitForAssets_d__44__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x16382f4 | Core.Assets.AssetManager.<WaitForAssets>d__44.MoveNext
// ============================================================

undefined8 Core_Assets_AssetManager__WaitForAssets_d__44__MoveNext(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  int extraout_w1;
  long lVar4;
  uint unaff_w21;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  if ((bRam0000000003eb569c & 1) == 0) {
    func_0x00f78a20(0x3d32190);
    func_0x00f78a20(0x3d32198);
    func_0x00f78a20(0x3d321a0);
    func_0x00f78a20(0x3d39d60);
    bRam0000000003eb569c = 1;
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (1 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar4 != 0) {
    uVar2 = Core_Assets_AssetManager__AreAssetsLoading(lVar4);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      /*System.Collections.Generic.List<AssetManagerHandle>$$GetEnumerator*/ func_0x0237041c(&uStack_48,*(long *)(param_1 + 0x20),uRam0000000003d39d60);
      unaff_w21 = 1;
      while (uVar2 = /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$MoveNext*/ func_0x01f639a0(&uStack_48,uRam0000000003d32198), (uVar2 & 1) != 0) {
        uVar1 = Core_Assets_AssetManager__HasAssetFinishedLoading(lVar4,uStack_38 & 0xffffffff);
        unaff_w21 = unaff_w21 & uVar1;
      }
      /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f6399c(&uStack_48,uRam0000000003d32190);
      goto code_r0x016383e0;
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar3 = (long *)___cxa_begin_catch();
    lVar4 = *plVar3;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<AssetManagerHandle>$$Dispose*/ func_0x01f6399c(&uStack_48,uRam0000000003d32190);
    if (lVar4 == 0) {
code_r0x016383e0:
      if ((unaff_w21 & 1) != 0) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    func_0x00f78ac0(lVar4,0);
  }
  lVar4 = __Unwind_Resume();
  return *(undefined8 *)(lVar4 + 0x18);
}



// ============================================================
// RVA: 0x1638450 | Core.Assets.AssetManager.<WaitForAssets>d__44.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Assets_AssetManager__WaitForAssets_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1638458 | Core.Assets.AssetManager.<WaitForAssets>d__44.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Core_Assets_AssetManager__WaitForAssets_d__44__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62168);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1638498 | Core.Assets.AssetManager.<WaitForAssets>d__44.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Assets_AssetManager__WaitForAssets_d__44__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



