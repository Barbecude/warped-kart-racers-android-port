// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Stats.AchievementManager.<Init>d__22

// ============================================================
// RVA: 0x15317b8 | Atlas.Stats.AchievementManager.<Init>d__22..ctor
// ============================================================

void Atlas_Stats_AchievementManager__Init_d__22___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15317e4 | Atlas.Stats.AchievementManager.<Init>d__22.System.IDisposable.Dispose
// ============================================================

void Atlas_Stats_AchievementManager__Init_d__22__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x15317e8 | Atlas.Stats.AchievementManager.<Init>d__22.MoveNext
// ============================================================

ulong Atlas_Stats_AchievementManager__Init_d__22__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4eac & 1) == 0) {
    func_0x00f78a20(0x3d433c8);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d2c060);
    func_0x00f78a20(0x3d1b760);
    func_0x00f78a20(0x3d2fdf0);
    func_0x00f78a20(0x3d1c500);
    func_0x00f78a20(0x3d1f6a0);
    bRam0000000003eb4eac = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.AddressableAssets.Addressables$$LoadAssetAsync<StatAchievementConfig>*/ func_0x0171f06c(&uStack_60,uVar3,uRam0000000003d433c8);
    if (lVar4 == 0) goto LAB_015319b8;
    *(undefined8 *)(lVar4 + 0x28) = uStack_58;
    *(undefined8 *)(lVar4 + 0x20) = uStack_60;
    *(undefined8 *)(lVar4 + 0x38) = uStack_48;
    *(undefined8 *)(lVar4 + 0x30) = uStack_50;
    *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(param_1 + 0x30);
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, float>_TypeInfo*/ uRam0000000003d1c500);
    /*System.Collections.Generic.Dictionary<string, float>$$.ctor*/ func_0x01ee0350(uVar3,0x14,uRam0000000003d2fdf0);
    *(undefined8 *)(lVar4 + 0x58) = uVar3;
    uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, float>_TypeInfo*/ uRam0000000003d1c500);
    /*System.Collections.Generic.Dictionary<string, float>$$.ctor*/ func_0x01ee0350(uVar3,0x3c,uRam0000000003d2fdf0);
    *(undefined8 *)(lVar4 + 0x60) = uVar3;
    uStack_78 = *(undefined8 *)(lVar4 + 0x28);
    uStack_80 = *(undefined8 *)(lVar4 + 0x20);
    uStack_68 = *(undefined8 *)(lVar4 + 0x38);
    uStack_70 = *(undefined8 *)(lVar4 + 0x30);
    uVar3 = func_0x00f78ae0(/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<StatAchievementConfig>_TypeInfo*/ uRam0000000003d1b760,&uStack_80);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 != 0) {
      lVar2 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(lVar4 + 0x20,uRam0000000003d2c060);
      *(long *)(lVar4 + 0x48) = lVar2;
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x18);
        *(long *)(lVar4 + 0x50) = lVar2;
        if (lVar2 != 0) {
          uVar3 = func_0x00f78a34(/*Atlas.Stats.AchievementManager.StatAchievementProgress[]_TypeInfo*/ uRam0000000003d1f6a0,*(undefined4 *)(lVar2 + 0x18));
          *(undefined8 *)(lVar4 + 0x10) = uVar3;
          goto LAB_01531998;
        }
      }
    }
LAB_015319b8:
    lVar4 = func_0x00f78af4();
    return *(ulong *)(lVar4 + 0x18);
  }
LAB_01531998:
  return (ulong)(iVar1 == 0);
}



// ============================================================
// RVA: 0x15319bc | Atlas.Stats.AchievementManager.<Init>d__22.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Stats_AchievementManager__Init_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15319c4 | Atlas.Stats.AchievementManager.<Init>d__22.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_Stats_AchievementManager__Init_d__22__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d61e88);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1531a04 | Atlas.Stats.AchievementManager.<Init>d__22.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Stats_AchievementManager__Init_d__22__System_Collections_IEnumerator_get_Current(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



