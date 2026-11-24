// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.GameContextBase.<InitFollowCam>d__159

// ============================================================
// RVA: 0x154fe08 | Atlas.Contexts.GameContextBase.<InitFollowCam>d__159..ctor
// ============================================================

void Atlas_Contexts_GameContextBase__InitFollowCam_d__159___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x154fe34 | Atlas.Contexts.GameContextBase.<InitFollowCam>d__159.System.IDisposable.Dispose
// ============================================================

void Atlas_Contexts_GameContextBase__InitFollowCam_d__159__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x154fe38 | Atlas.Contexts.GameContextBase.<InitFollowCam>d__159.MoveNext
// ============================================================

ulong Atlas_Contexts_GameContextBase__InitFollowCam_d__159__MoveNext(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4f8e & 1) == 0) {
    func_0x00f78a20(0x3d51bd0);
    func_0x00f78a20(0x3d55a80);
    func_0x00f78a20(0x3d35860);
    func_0x00f78a20(0x3d1cb38);
    func_0x00f78a20(0x3d572b0);
    func_0x00f78a20(0x3d57970);
    func_0x00f78a20(0x3d22c90);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d62e90);
    func_0x00f78a20(0x3d276c0);
    func_0x00f78a20(0x3d6ac48);
    func_0x00f78a20(0x3d6efb0);
    func_0x00f78a20(0x3d6d1b8);
    bRam0000000003eb4f8e = 1;
  }
  uStack_48 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar10 = *(long *)(param_1 + 0x20);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar10 == 0) || (*(long *)(lVar10 + 0x88) == 0)) goto LAB_01550180;
      iVar2 = /*Core.Assets.AssetManager$$TryGetLoadedAsset<object>*/ func_0x01818904(*(long *)(lVar10 + 0x88),*(undefined4 *)(param_1 + 0x30),&uStack_48,
                              uRam0000000003d51bd0);
      if (iVar2 != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        if (((*(ushort *)(/*Atlas.Contexts.GameContextBase.<>c_TypeInfo*/ lRam0000000003d276c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Contexts.GameContextBase.<>c_TypeInfo*/ lRam0000000003d276c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar6 = *(undefined8 **)(/*Atlas.Contexts.GameContextBase.<>c_TypeInfo*/ lRam0000000003d276c0 + 0xb8);
        lVar8 = puVar6[1];
        if (lVar8 == 0) {
          if (((*(ushort *)(/*Atlas.Contexts.GameContextBase.<>c_TypeInfo*/ lRam0000000003d276c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Contexts.GameContextBase.<>c_TypeInfo*/ lRam0000000003d276c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
            puVar6 = *(undefined8 **)(/*Atlas.Contexts.GameContextBase.<>c_TypeInfo*/ lRam0000000003d276c0 + 0xb8);
          }
          uVar9 = *puVar6;
          lVar8 = func_0x00f78aec(/*System.Func<KartComposite, bool>_TypeInfo*/ uRam0000000003d1cb38);
          /*System.Func<PlayerEditorConnectionEvents.MessageTypeSubscribers, bool>$$.ctor*/ func_0x02177f48(lVar8,uVar9,uRam0000000003d62e90,uRam0000000003d35860);
          *(long *)(*(long *)(/*Atlas.Contexts.GameContextBase.<>c_TypeInfo*/ lRam0000000003d276c0 + 0xb8) + 8) = lVar8;
        }
        lVar8 = /*System.Linq.Enumerable$$FirstOrDefault<ImmutableCollectionsUtils.ImmutableCollectionTypeInfo>*/ func_0x0184e58c(uVar7,lVar8,uRam0000000003d55a80);
        uVar7 = uStack_48;
        if (lVar8 != 0) {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar4 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(uVar7,uRam0000000003d5b098);
          if (lVar4 != 0) {
            uVar7 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar4,uRam0000000003d57970);
            if (((*(long *)(lVar10 + 0xb8) != 0) && (*(long *)(lVar10 + 0x1c0) != 0)) &&
               (lVar4 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10), lVar4 != 0)) {
              uVar9 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar4,*(undefined8 *)(*(long *)(lVar10 + 0x1c0) + 0x20),
                                      uRam0000000003d572b0);
              lVar4 = func_0x00f78aec(/*Atlas.Gameplay.Kart.KartFollowCamera_TypeInfo*/ uRam0000000003d22c90);
              Atlas_Gameplay_Kart_KartFollowCamera___ctor(lVar4,0);
              *(long *)(lVar10 + 0x138) = lVar4;
              if ((*(long *)(lVar10 + 0x60) != 0) &&
                 (uVar5 = /*Core.Cameras.CameraManager$$GetRegisteredCamera*/ func_0x0163a200(*(long *)(lVar10 + 0x60),/*STR('GameContext')*/ uRam0000000003d6d1b8,0),
                 lVar4 != 0)) {
                Atlas_Gameplay_Kart_KartFollowCamera__Init(lVar4,uVar9,uVar5,uVar7,0);
                if (*(long *)(lVar10 + 0x138) != 0) {
                  Atlas_Gameplay_Kart_KartFollowCamera__SetTarget
                            (*(long *)(lVar10 + 0x138),*(undefined8 *)(lVar8 + 0x10),0);
                  goto LAB_01550160;
                }
              }
            }
          }
          goto LAB_01550180;
        }
      }
    }
LAB_01550160:
    return (ulong)(iVar1 == 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if ((lVar10 != 0) && (*(long *)(lVar10 + 0x88) != 0)) {
    uVar3 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635cb0(*(long *)(lVar10 + 0x88),/*STR('Common/Prefabs/P_KartFollowCamera.prefab')*/ uRam0000000003d6ac48,/*STR('Karts')*/ uRam0000000003d6efb0,0,0,0
                           );
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    if (*(long *)(lVar10 + 0x88) != 0) {
      uVar7 = /*Core.Assets.AssetManager$$WaitForAsset*/ func_0x01636f40(*(long *)(lVar10 + 0x88),uVar3,0);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      *(undefined4 *)(param_1 + 0x10) = 1;
      goto LAB_01550160;
    }
  }
LAB_01550180:
  lVar10 = func_0x00f78af4();
  return *(ulong *)(lVar10 + 0x18);
}



// ============================================================
// RVA: 0x1550184 | Atlas.Contexts.GameContextBase.<InitFollowCam>d__159.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Contexts_GameContextBase__InitFollowCam_d__159__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x155018c | Atlas.Contexts.GameContextBase.<InitFollowCam>d__159.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_Contexts_GameContextBase__InitFollowCam_d__159__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62e98);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x15501cc | Atlas.Contexts.GameContextBase.<InitFollowCam>d__159.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Contexts_GameContextBase__InitFollowCam_d__159__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



