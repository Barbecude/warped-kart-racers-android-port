// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Assets.AssetManager.<Init>d__17

// ============================================================
// RVA: 0x1634130 | Core.Assets.AssetManager.<Init>d__17..ctor
// ============================================================

void Core_Assets_AssetManager__Init_d__17___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1637e24 | Core.Assets.AssetManager.<Init>d__17.System.IDisposable.Dispose
// ============================================================

void Core_Assets_AssetManager__Init_d__17__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1637e28 | Core.Assets.AssetManager.<Init>d__17.MoveNext
// ============================================================

ulong Core_Assets_AssetManager__Init_d__17__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb569b & 1) == 0) {
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d1b738);
    func_0x00f78a20(0x3d2fac0);
    func_0x00f78a20(0x3d2fea8);
    func_0x00f78a20(0x3d2dfd8);
    func_0x00f78a20(0x3d2df68);
    func_0x00f78a20(0x3d1c450);
    func_0x00f78a20(0x3d1c160);
    func_0x00f78a20(0x3d1c518);
    func_0x00f78a20(0x3d1c168);
    func_0x00f78a20(0x3d3ccb8);
    func_0x00f78a20(0x3d1e068);
    func_0x00f78a20(0x3d6ba50);
    bRam0000000003eb569b = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.AddressableAssets.Addressables$$InitializeAsync*/ func_0x02fb39a0(&uStack_50,0);
    if (lVar3 == 0) {
LAB_01638080:
      lVar3 = func_0x00f78af4();
      return *(ulong *)(lVar3 + 0x18);
    }
    *(undefined8 *)(lVar3 + 0x48) = uStack_48;
    *(undefined8 *)(lVar3 + 0x40) = uStack_50;
    *(undefined8 *)(lVar3 + 0x58) = uStack_38;
    *(undefined8 *)(lVar3 + 0x50) = uStack_40;
    uStack_68 = uStack_48;
    uStack_70 = uStack_50;
    uStack_58 = uStack_38;
    uStack_60 = uStack_40;
    uVar2 = func_0x00f78ae0(/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<IResourceLocator>_TypeInfo*/ uRam0000000003d1b738,&uStack_70);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<AssetManager.AssetRequest>_TypeInfo*/ uRam0000000003d1e068);
    /*System.Collections.Generic.List<AssetManager.AssetRequest>$$.ctor*/ func_0x024af12c(uVar2,uRam0000000003d3ccb8);
    if (lVar3 == 0) goto LAB_01638080;
    *(undefined8 *)(lVar3 + 0x10) = uVar2;
    uVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>_TypeInfo*/ uRam0000000003d1c168);
    /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$.ctor*/ func_0x01e2f5b0(uVar2,uRam0000000003d2dfd8);
    *(undefined8 *)(lVar3 + 0x18) = uVar2;
    uVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, AssetManagerHandle>_TypeInfo*/ uRam0000000003d1c450);
    /*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$.ctor*/ func_0x01ebed60(uVar2,uRam0000000003d2fac0);
    *(undefined8 *)(lVar3 + 0x20) = uVar2;
    uVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>_TypeInfo*/ uRam0000000003d1c160);
    /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$.ctor*/ func_0x01e2c614(uVar2,uRam0000000003d2df68);
    *(undefined8 *)(lVar3 + 0x28) = uVar2;
    uVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, AssetManager.BucketInstance>_TypeInfo*/ uRam0000000003d1c518);
    /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar2,uRam0000000003d2fea8);
    *(undefined8 *)(lVar3 + 0x30) = uVar2;
    Core_Assets_AssetManager__AddAssetBucket(lVar3,/*STR('Default')*/ uRam0000000003d6ba50,0,0);
    *(undefined1 *)(lVar3 + 0x60) = 1;
  }
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x1638084 | Core.Assets.AssetManager.<Init>d__17.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_Assets_AssetManager__Init_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x163808c | Core.Assets.AssetManager.<Init>d__17.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Core_Assets_AssetManager__Init_d__17__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62148);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x16380cc | Core.Assets.AssetManager.<Init>d__17.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_Assets_AssetManager__Init_d__17__System_Collections_IEnumerator_get_Current(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



