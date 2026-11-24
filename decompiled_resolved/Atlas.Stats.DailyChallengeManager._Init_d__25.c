// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Stats.DailyChallengeManager.<Init>d__25

// ============================================================
// RVA: 0x154a8f0 | Atlas.Stats.DailyChallengeManager.<Init>d__25..ctor
// ============================================================

void Atlas_Stats_DailyChallengeManager__Init_d__25___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x154a91c | Atlas.Stats.DailyChallengeManager.<Init>d__25.System.IDisposable.Dispose
// ============================================================

void Atlas_Stats_DailyChallengeManager__Init_d__25__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x154a920 | Atlas.Stats.DailyChallengeManager.<Init>d__25.MoveNext
// ============================================================

ulong Atlas_Stats_DailyChallengeManager__Init_d__25__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4f73 & 1) == 0) {
    func_0x00f78a20(0x3d43398);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d2bec8);
    func_0x00f78a20(0x3d1b730);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d3a228);
    func_0x00f78a20(0x3d3a250);
    func_0x00f78a20(0x3d3ae40);
    func_0x00f78a20(0x3d3b0f0);
    func_0x00f78a20(0x3d39f88);
    func_0x00f78a20(0x3d1db00);
    func_0x00f78a20(0x3d1d8b8);
    func_0x00f78a20(0x3d1db90);
    func_0x00f78a20(0x3d1d838);
    func_0x00f78a20(0x3d1d8c0);
    bRam0000000003eb4f73 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      *(long *)(lVar5 + 0x38) = lVar2;
      if (lVar2 != 0) {
        *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(lVar2 + 0x10);
        *(undefined8 *)(lVar5 + 0x58) = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(lVar5 + 0x68) = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(param_1 + 0x40);
        uVar4 = *(undefined8 *)(param_1 + 0x48);
        *(undefined8 *)(lVar5 + 0x80) = *(undefined8 *)(param_1 + 0x50);
        *(undefined8 *)(lVar5 + 0x78) = uVar4;
        *(undefined8 *)(lVar5 + 0x88) = *(undefined8 *)(param_1 + 0x58);
        *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)(param_1 + 0x60);
        uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<DailyChallengeData>_TypeInfo*/ uRam0000000003d1d8c0);
        /*System.Collections.Generic.List<DailyChallengeData>$$.ctor*/ func_0x02389d0c(uVar4,uRam0000000003d3a250);
        *(undefined8 *)(lVar5 + 0xc0) = uVar4;
        uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<DailyChallengeConditionType>_TypeInfo*/ uRam0000000003d1d8b8);
        /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar4,uRam0000000003d3a228);
        *(undefined8 *)(lVar5 + 200) = uVar4;
        uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<KartDefinition>_TypeInfo*/ uRam0000000003d1db00);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar4,uRam0000000003d3ae40);
        *(undefined8 *)(lVar5 + 0xd0) = uVar4;
        uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<CharacterDefinition>_TypeInfo*/ uRam0000000003d1d838);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar4,uRam0000000003d39f88);
        *(undefined8 *)(lVar5 + 0xd8) = uVar4;
        uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar4,uRam0000000003d3b0f0);
        *(undefined8 *)(lVar5 + 0xe0) = uVar4;
        uVar4 = *(undefined8 *)(param_1 + 0x68);
        if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.AddressableAssets.Addressables$$LoadAssetAsync<StatAchievementConfig>*/ func_0x0171f06c(&uStack_50,uVar4,uRam0000000003d43398);
        *(undefined8 *)(lVar5 + 0x18) = uStack_48;
        *(undefined8 *)(lVar5 + 0x10) = uStack_50;
        *(undefined8 *)(lVar5 + 0x28) = uStack_38;
        *(undefined8 *)(lVar5 + 0x20) = uStack_40;
        uStack_88 = *(undefined8 *)(lVar5 + 0x18);
        uStack_90 = *(undefined8 *)(lVar5 + 0x10);
        uStack_78 = *(undefined8 *)(lVar5 + 0x28);
        uStack_80 = *(undefined8 *)(lVar5 + 0x20);
        uStack_70 = uStack_90;
        uStack_68 = uStack_88;
        uStack_60 = uStack_80;
        uStack_58 = uStack_78;
        uVar4 = func_0x00f78ae0(/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<DailyChallengesConfig>_TypeInfo*/ uRam0000000003d1b730,&uStack_90);
        *(undefined8 *)(param_1 + 0x18) = uVar4;
        *(undefined4 *)(param_1 + 0x10) = 1;
        goto LAB_0154ac44;
      }
    }
  }
  else {
    if (iVar1 != 1) {
LAB_0154ac44:
      return (ulong)(iVar1 == 0);
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 != 0) {
      lVar2 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(lVar5 + 0x10,uRam0000000003d2bec8);
      *(long *)(lVar5 + 0x30) = lVar2;
      if (lVar2 != 0) {
        uStack_50 = 0;
        /*System.TimeSpan$$.ctor*/ func_0x029f02c8(&uStack_50,0,*(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x1c),0,0
                       );
        *(undefined8 *)(lVar5 + 0x40) = uStack_50;
        if (*(long *)(lVar5 + 0x30) != 0) {
          plVar3 = (long *)/*Atlas.Stats.DailyChallengesConfig$$get_ChallengeOrderConstraints*/ func_0x01575d40(*(long *)(lVar5 + 0x30),0);
          if (*plVar3 != 0) {
            uVar4 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(*plVar3 + 0x18));
            *(undefined8 *)(lVar5 + 0xa8) = uVar4;
            if (*(long *)(lVar5 + 0x30) != 0) {
              plVar3 = (long *)/*Atlas.Stats.DailyChallengesConfig$$get_ChallengeOrderConstraints*/ func_0x01575d40(*(long *)(lVar5 + 0x30),0);
              if (*plVar3 != 0) {
                uVar4 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(*plVar3 + 0x18));
                *(undefined8 *)(lVar5 + 0xb0) = uVar4;
                goto LAB_0154ac44;
              }
            }
          }
        }
      }
    }
  }
  lVar5 = func_0x00f78af4();
  return *(ulong *)(lVar5 + 0x18);
}



// ============================================================
// RVA: 0x154ac64 | Atlas.Stats.DailyChallengeManager.<Init>d__25.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Stats_DailyChallengeManager__Init_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x154ac6c | Atlas.Stats.DailyChallengeManager.<Init>d__25.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Atlas_Stats_DailyChallengeManager__Init_d__25__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62978);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x154acac | Atlas.Stats.DailyChallengeManager.<Init>d__25.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Stats_DailyChallengeManager__Init_d__25__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



