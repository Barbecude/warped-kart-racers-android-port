// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Pickups.PickupManager.<LoadAndSpawnPickupBoxes>d__36

// ============================================================
// RVA: 0x1561b4c | Atlas.Gameplay.Pickups.PickupManager.<LoadAndSpawnPickupBoxes>d__36..ctor
// ============================================================

void Atlas_Gameplay_Pickups_PickupManager__LoadAndSpawnPickupBoxes_d__36___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1561b78 | Atlas.Gameplay.Pickups.PickupManager.<LoadAndSpawnPickupBoxes>d__36.System.IDisposable.Dispose
// ============================================================

void Atlas_Gameplay_Pickups_PickupManager__LoadAndSpawnPickupBoxes_d__36__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x1561b7c | Atlas.Gameplay.Pickups.PickupManager.<LoadAndSpawnPickupBoxes>d__36.MoveNext
// ============================================================

undefined8
Atlas_Gameplay_Pickups_PickupManager__LoadAndSpawnPickupBoxes_d__36__MoveNext(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  int extraout_w1;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb4fc5 & 1) == 0) {
    func_0x00f78a20(0x3d26960);
    func_0x00f78a20(0x3d26968);
    func_0x00f78a20(0x3d32f68);
    func_0x00f78a20(0x3d32f70);
    func_0x00f78a20(0x3d32f78);
    func_0x00f78a20(0x3d36180);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5b568);
    func_0x00f78a20(0x3d5b570);
    func_0x00f78a20(0x3d695f0);
    bRam0000000003eb4fc5 = 1;
  }
  uVar2 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    uVar7 = 0xffffffff;
    lStack_80 = param_1;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    lVar8 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar8 == 0) goto LAB_01561dc4;
    uVar2 = *(undefined8 *)(lVar8 + 0x38);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar2,0,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    lStack_80 = param_1;
    if (*(long *)(lVar8 + 0x70) == 0) goto LAB_01561dc4;
    /*System.Collections.Generic.HashSet<ResourceManager.InstanceOperation>$$GetEnumerator*/ func_0x021e99c4(&uStack_78,*(long *)(lVar8 + 0x70),uRam0000000003d36180);
    while (uVar3 = /*System.Collections.Generic.HashSet.Enumerator<ResourceManager.InstanceOperation>$$MoveNext*/ func_0x01f6ea70(&uStack_78,uRam0000000003d32f70), uVar2 = uStack_68,
          (uVar3 & 1) != 0) {
      lVar9 = *(long *)(lVar8 + 0x20);
      uVar4 = func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadSuccessHandler_TypeInfo*/ uRam0000000003d26968);
      /*Core.Assets.AssetManager.AssetLoadSuccessHandler$$.ctor*/ func_0x016378e4(uVar4,lVar8,uRam0000000003d5b570,0);
      uVar5 = func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadFailedHandler_TypeInfo*/ uRam0000000003d26960);
      /*Core.Assets.AssetManager.AssetLoadFailedHandler$$.ctor*/ func_0x016384a0(uVar5,lVar8,uRam0000000003d5b568,0);
      if (lVar9 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1561dc4);
        (*pcVar1)();
      }
      /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635cb0(lVar9,uVar2,/*STR('BaseLayerContext')*/ uRam0000000003d695f0,uVar4,uVar5,0);
    }
    /*System.Collections.Generic.HashSet.Enumerator<ResourceManager.InstanceOperation>$$Dispose*/ func_0x01f6ea6c(&uStack_78,uRam0000000003d32f68);
    while (*(long *)(lVar8 + 0x20) == 0) {
LAB_01561dc4:
      func_0x00f78af4(0);
      if (extraout_w1 != 1) goto code_r0x01561e10;
      plVar6 = (long *)___cxa_begin_catch();
      lVar9 = *plVar6;
      ___cxa_end_catch();
      /*System.Collections.Generic.HashSet.Enumerator<ResourceManager.InstanceOperation>$$Dispose*/ func_0x01f6ea6c(&uStack_78,uRam0000000003d32f68);
      if (lVar9 != 0) {
        func_0x00f78ac0(lVar9,0);
code_r0x01561e10:
        lVar8 = __Unwind_Resume();
        return *(undefined8 *)(lVar8 + 0x18);
      }
    }
    uVar2 = /*Core.Assets.AssetManager$$WaitForAllAssetsToLoad*/ func_0x01636e0c(*(long *)(lVar8 + 0x20),0);
    *(undefined8 *)(lStack_80 + 0x18) = uVar2;
    uVar7 = 1;
    uVar2 = 1;
  }
  *(undefined4 *)(lStack_80 + 0x10) = uVar7;
  return uVar2;
}



// ============================================================
// RVA: 0x1561e14 | Atlas.Gameplay.Pickups.PickupManager.<LoadAndSpawnPickupBoxes>d__36.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Gameplay_Pickups_PickupManager__LoadAndSpawnPickupBoxes_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1561e1c | Atlas.Gameplay.Pickups.PickupManager.<LoadAndSpawnPickupBoxes>d__36.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_Gameplay_Pickups_PickupManager__LoadAndSpawnPickupBoxes_d__36__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d639b0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1561e5c | Atlas.Gameplay.Pickups.PickupManager.<LoadAndSpawnPickupBoxes>d__36.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Gameplay_Pickups_PickupManager__LoadAndSpawnPickupBoxes_d__36__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



