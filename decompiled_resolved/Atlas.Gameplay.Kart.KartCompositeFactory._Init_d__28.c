// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartCompositeFactory.<Init>d__28

// ============================================================
// RVA: 0x1554fd8 | Atlas.Gameplay.Kart.KartCompositeFactory.<Init>d__28..ctor
// ============================================================

void Atlas_Gameplay_Kart_KartCompositeFactory__Init_d__28___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1555004 | Atlas.Gameplay.Kart.KartCompositeFactory.<Init>d__28.System.IDisposable.Dispose
// ============================================================

void Atlas_Gameplay_Kart_KartCompositeFactory__Init_d__28__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1555008 | Atlas.Gameplay.Kart.KartCompositeFactory.<Init>d__28.MoveNext
// ============================================================

ulong Atlas_Gameplay_Kart_KartCompositeFactory__Init_d__28__MoveNext(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000003eb4f9f & 1) == 0) {
    func_0x00f78a20(0x3d51bd0);
    func_0x00f78a20(0x3d55078);
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550a8);
    func_0x00f78a20(0x3d550c0);
    func_0x00f78a20(0x3d55108);
    func_0x00f78a20(0x3d55158);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d55168);
    func_0x00f78a20(0x3d55188);
    func_0x00f78a20(0x3d551c8);
    func_0x00f78a20(0x3d39d48);
    func_0x00f78a20(0x3d3d3f8);
    func_0x00f78a20(0x3d1d7d0);
    func_0x00f78a20(0x3d1e1d0);
    func_0x00f78a20(0x3d24060);
    func_0x00f78a20(0x3d6efb0);
    func_0x00f78a20(0x3d6ac40);
    bRam0000000003eb4f9f = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x20);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) goto LAB_0155535c;
      /*Core.Assets.AssetManager$$TryGetLoadedAsset<object>*/ func_0x01818904(*(long *)(lVar4 + 0x10),*(undefined4 *)(param_1 + 0x30),lVar4 + 0x88,
                      uRam0000000003d51bd0);
      uVar3 = func_0x00f78aec(/*Atlas.Gameplay.RaceAIUtilityManager_TypeInfo*/ uRam0000000003d24060);
      /*Atlas.Gameplay.RaceAIUtilityManager$$.ctor*/ func_0x014d23f8(uVar3,0);
      *(undefined8 *)(lVar4 + 0x78) = uVar3;
      *(undefined4 *)(lVar4 + 0x90) = 0;
    }
LAB_01555344:
    return (ulong)(iVar1 == 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_1 + 0x28),uRam0000000003d55078), lVar4 != 0)) {
    *(undefined8 *)(lVar4 + 0x10) = uVar3;
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_1 + 0x28),uRam0000000003d55090);
      *(undefined8 *)(lVar4 + 0x18) = uVar3;
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_1 + 0x28),uRam0000000003d55108);
        *(undefined8 *)(lVar4 + 0x20) = uVar3;
        if (*(long *)(param_1 + 0x28) != 0) {
          uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_1 + 0x28),uRam0000000003d550c0);
          *(undefined8 *)(lVar4 + 0x28) = uVar3;
          if (*(long *)(param_1 + 0x28) != 0) {
            uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_1 + 0x28),uRam0000000003d55168);
            *(undefined8 *)(lVar4 + 0x30) = uVar3;
            if (*(long *)(param_1 + 0x28) != 0) {
              uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_1 + 0x28),uRam0000000003d55150);
              *(undefined8 *)(lVar4 + 0x50) = uVar3;
              if (*(long *)(param_1 + 0x28) != 0) {
                uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_1 + 0x28),uRam0000000003d55158);
                *(undefined8 *)(lVar4 + 0x58) = uVar3;
                if (*(long *)(param_1 + 0x28) != 0) {
                  uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_1 + 0x28),uRam0000000003d551c8);
                  *(undefined8 *)(lVar4 + 0x40) = uVar3;
                  if (*(long *)(param_1 + 0x28) != 0) {
                    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_1 + 0x28),uRam0000000003d550a8);
                    *(undefined8 *)(lVar4 + 0x48) = uVar3;
                    if (*(long *)(param_1 + 0x28) != 0) {
                      uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(*(long *)(param_1 + 0x28),uRam0000000003d55188);
                      *(undefined8 *)(lVar4 + 0x38) = uVar3;
                      uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<KartCompositeFactory.PlayerLoadoutSet>_TypeInfo*/ uRam0000000003d1e1d0);
                      /*System.Collections.Generic.List<KartCompositeFactory.PlayerLoadoutSet>$$.ctor*/ func_0x025432b0(uVar3,0xc,uRam0000000003d3d3f8);
                      *(undefined8 *)(lVar4 + 0x68) = uVar3;
                      uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<AssetManagerHandle>_TypeInfo*/ uRam0000000003d1d7d0);
                      /*System.Collections.Generic.List<AssetManagerHandle>$$.ctor*/ func_0x0236ed70(uVar3,0x24,uRam0000000003d39d48);
                      *(undefined8 *)(lVar4 + 0x70) = uVar3;
                      if (*(long *)(lVar4 + 0x10) != 0) {
                        uVar2 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635cb0(*(long *)(lVar4 + 0x10),/*STR('Common/Prefabs/P_KART_ROOT.prefab')*/ uRam0000000003d6ac40,
                                                /*STR('Karts')*/ uRam0000000003d6efb0,0,0,0);
                        *(undefined4 *)(param_1 + 0x30) = uVar2;
                        if (*(long *)(lVar4 + 0x10) != 0) {
                          uVar3 = /*Core.Assets.AssetManager$$WaitForAsset*/ func_0x01636f40(*(long *)(lVar4 + 0x10),uVar2,0);
                          *(undefined8 *)(param_1 + 0x18) = uVar3;
                          *(undefined4 *)(param_1 + 0x10) = 1;
                          goto LAB_01555344;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0155535c:
  lVar4 = func_0x00f78af4();
  return *(ulong *)(lVar4 + 0x18);
}



// ============================================================
// RVA: 0x1555360 | Atlas.Gameplay.Kart.KartCompositeFactory.<Init>d__28.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Gameplay_Kart_KartCompositeFactory__Init_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1555368 | Atlas.Gameplay.Kart.KartCompositeFactory.<Init>d__28.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_Gameplay_Kart_KartCompositeFactory__Init_d__28__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d633d0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x15553a8 | Atlas.Gameplay.Kart.KartCompositeFactory.<Init>d__28.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Gameplay_Kart_KartCompositeFactory__Init_d__28__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



