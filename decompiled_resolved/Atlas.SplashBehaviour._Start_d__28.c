// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.SplashBehaviour.<Start>d__28

// ============================================================
// RVA: 0x156afc4 | Atlas.SplashBehaviour.<Start>d__28..ctor
// ============================================================

void Atlas_SplashBehaviour__Start_d__28___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x156aff0 | Atlas.SplashBehaviour.<Start>d__28.System.IDisposable.Dispose
// ============================================================

void Atlas_SplashBehaviour__Start_d__28__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x156aff4 | Atlas.SplashBehaviour.<Start>d__28.MoveNext
// ============================================================

ulong Atlas_SplashBehaviour__Start_d__28__MoveNext(long param_1)

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
  
  if ((bRam0000000003eb5001 & 1) == 0) {
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d1b738);
    func_0x00f78a20(0x3d1feb0);
    func_0x00f78a20(0x3d23050);
    bRam0000000003eb5001 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((*(ushort *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Settings.AtlasQualitySettings_TypeInfo*/ lRam0000000003d1feb0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    Atlas_Settings_AtlasQualitySettings__BeginBoostLoadingBeforeSettingsLoaded(0);
    /*UnityEngine.Application$$set_targetFrameRate*/ func_0x03218840(0x3c,0);
    /*UnityEngine.QualitySettings$$set_vSyncCount*/ func_0x03251414(1,0);
    if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.AddressableAssets.Addressables$$InitializeAsync*/ func_0x02fb39a0(&uStack_50,0);
    uStack_68 = uStack_48;
    uStack_70 = uStack_50;
    uStack_58 = uStack_38;
    uStack_60 = uStack_40;
    uVar2 = func_0x00f78ae0(/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<IResourceLocator>_TypeInfo*/ uRam0000000003d1b738,&uStack_70);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = /*Atlas.AtlasBuildInfo$$get_Current*/ func_0x014466cc(0);
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*Atlas.UI.LoadingBehaviour$$RequestLoad*/ func_0x014873f8(uVar2,0);
    /*UnityEngine.Application$$get_isEditor*/ func_0x03219804(0);
    if (lVar3 == 0) {
      lVar3 = func_0x00f78af4();
      return *(ulong *)(lVar3 + 0x18);
    }
    Atlas_SplashBehaviour__Init(lVar3,0);
    Atlas_SplashBehaviour__StartConfig(lVar3,0);
  }
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x156b188 | Atlas.SplashBehaviour.<Start>d__28.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_SplashBehaviour__Start_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156b190 | Atlas.SplashBehaviour.<Start>d__28.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_SplashBehaviour__Start_d__28__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d64440);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156b1d0 | Atlas.SplashBehaviour.<Start>d__28.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_SplashBehaviour__Start_d__28__System_Collections_IEnumerator_get_Current(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



