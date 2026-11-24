// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.FrontEndScene.<>c__DisplayClass60_0.<<SetFrontEndSceneType>g__ChangeFrontEndSceneTypeRoutine|0>d

// ============================================================
// RVA: 0x156ec54 | Atlas.FrontEnd.FrontEndScene.<>c__DisplayClass60_0.<<SetFrontEndSceneType>g__ChangeFrontEndSceneTypeRoutine|0>d..ctor
// ============================================================

void Atlas_FrontEnd_FrontEndScene___c__DisplayClass60_0___SetFrontEndSceneType_g__ChangeFrontEndSceneTypeRoutine_0_d___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x156ec80 | Atlas.FrontEnd.FrontEndScene.<>c__DisplayClass60_0.<<SetFrontEndSceneType>g__ChangeFrontEndSceneTypeRoutine|0>d.System.IDisposable.Dispose
// ============================================================

void Atlas_FrontEnd_FrontEndScene___c__DisplayClass60_0___SetFrontEndSceneType_g__ChangeFrontEndSceneTypeRoutine_0_d__System_IDisposable_Dispose
               (void)

{
  return;
}



// ============================================================
// RVA: 0x156ec84 | Atlas.FrontEnd.FrontEndScene.<>c__DisplayClass60_0.<<SetFrontEndSceneType>g__ChangeFrontEndSceneTypeRoutine|0>d.MoveNext
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndScene___c__DisplayClass60_0___SetFrontEndSceneType_g__ChangeFrontEndSceneTypeRoutine_0_d__MoveNext
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((bRam0000000003eb5022 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d62e60);
    bRam0000000003eb5022 = 1;
  }
  if (6 < *(uint *)(param_5 + 0x10)) {
    return 0;
  }
  lVar6 = *(long *)(param_5 + 0x20);
  switch(*(uint *)(param_5 + 0x10)) {
  case 0:
    *(undefined8 *)(param_5 + 0x18) = 0;
    *(undefined4 *)(param_5 + 0x10) = 1;
    return 1;
  case 1:
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if (((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) ||
       (lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + 0x28), lVar5 == 0)) goto code_r0x0156efb0;
    iVar1 = /*Atlas.UI.TransitionManager$$get_IsTransitionVisible*/ func_0x01511a80(lVar5,0);
    if (iVar1 != 0) {
      if ((*(long *)(lVar6 + 0x10) == 0) ||
         (lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + 0x28), lVar5 == 0)) goto code_r0x0156efb0;
      uVar2 = /*Atlas.UI.TransitionManager$$get_IsTransitionEnding*/ func_0x01511a70(lVar5,0);
      if ((uVar2 & 1) == 0) goto code_r0x0156ed64;
    }
    break;
  case 2:
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x0156efb0;
code_r0x0156ed64:
    if ((*(long *)(lVar6 + 0x10) == 0) ||
       (lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + 0x28), lVar5 == 0)) goto code_r0x0156efb0;
    uVar2 = /*Atlas.UI.TransitionManager$$get_IsTransitionFullyVisible*/ func_0x01511a60(lVar5,0);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)(param_5 + 0x18) = 0;
      uVar9 = 2;
      goto code_r0x0156eee4;
    }
    break;
  case 3:
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x0156efb0;
    break;
  case 4:
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x0156efb0;
    goto code_r0x0156ede8;
  case 5:
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) goto code_r0x0156efb0;
    lVar5 = *(long *)(lVar6 + 0x10);
    if (*(int *)(*(long *)(lVar6 + 0x28) + 0x28) != 0) {
      if ((lVar5 == 0) || (*(long *)(lVar5 + 0x70) == 0)) goto code_r0x0156efb0;
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar5 + 0x70),1,0);
      if ((*(long *)(lVar6 + 0x10) == 0) || (*(long *)(lVar6 + 0x28) == 0)) goto code_r0x0156efb0;
      uVar3 = Atlas_FrontEnd_FrontEndScene__FindSceneAssetForType
                        (*(undefined8 *)(*(long *)(lVar6 + 0x10) + 0xa8),
                         *(undefined4 *)(*(long *)(lVar6 + 0x28) + 0x28),0);
      lVar5 = *(long *)(lVar6 + 0x10);
      uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
      /*System.Action$$.ctor*/ func_0x02924c80(uVar4,lVar6,uRam0000000003d62e60,0);
      if (lVar5 == 0) goto code_r0x0156efb0;
      uVar3 = Atlas_FrontEnd_FrontEndScene__LoadSubsceneAndMakeActive(lVar5,uVar3,uVar4,0);
      *(undefined8 *)(param_5 + 0x18) = uVar3;
      uVar9 = 6;
      goto code_r0x0156eee4;
    }
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x70) == 0)) goto code_r0x0156efb0;
    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar5 + 0x70),0,0);
    if ((*(long *)(lVar6 + 0x10) == 0) ||
       (lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + 0x68), lVar5 == 0)) goto code_r0x0156efb0;
    lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
    uVar7 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    uVar9 = param_2;
    uVar10 = param_3;
    uVar8 = /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
    if (lVar5 == 0) goto code_r0x0156efb0;
    /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar7,param_2,param_3,uVar8,uVar9,uVar10,param_4,lVar5,0);
    if (*(long *)(lVar6 + 0x10) == 0) goto code_r0x0156efb0;
    *(undefined8 *)(*(long *)(lVar6 + 0x10) + 200) = 0;
    goto code_r0x0156ef84;
  case 6:
    *(undefined4 *)(param_5 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto code_r0x0156efb0;
    goto code_r0x0156ef84;
  }
  if ((*(long *)(lVar6 + 0x10) == 0) ||
     (lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + 0x18), lVar5 == 0)) goto code_r0x0156efb0;
  iVar1 = /*Atlas.UI.AtlasUIManager$$GetLayerState*/ func_0x01470940(lVar5,0,0);
  if (iVar1 == 3) {
    *(undefined8 *)(param_5 + 0x18) = 0;
    uVar9 = 3;
  }
  else {
    if (*(long *)(lVar6 + 0x18) == 0) {
code_r0x0156ede8:
      lVar5 = *(long *)(lVar6 + 0x10);
      if (*(char *)(lVar6 + 0x20) == '\0') {
        if (lVar5 != 0) {
          uVar3 = Atlas_FrontEnd_FrontEndScene__UnloadAnyLoadedScene(lVar5,0);
          *(undefined8 *)(param_5 + 0x18) = uVar3;
          uVar9 = 5;
          goto code_r0x0156eee4;
        }
      }
      else if ((lVar5 != 0) && (*(long *)(lVar5 + 200) != 0)) {
        /*Atlas.FrontEnd.FrontEndSubsceneBehaviourBase$$SetFrontEndSceneType*/ func_0x01595ccc(*(long *)(lVar5 + 200),*(undefined8 *)(lVar6 + 0x28),0);
code_r0x0156ef84:
        if (*(long *)(lVar6 + 0x10) != 0) {
          *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0xb0) = 0;
          return 0;
        }
      }
code_r0x0156efb0:
      lVar6 = func_0x00f78af4();
      return *(undefined8 *)(lVar6 + 0x18);
    }
    *(long *)(param_5 + 0x18) = *(long *)(lVar6 + 0x18);
    uVar9 = 4;
  }
code_r0x0156eee4:
  *(undefined4 *)(param_5 + 0x10) = uVar9;
  return 1;
}



// ============================================================
// RVA: 0x156efb4 | Atlas.FrontEnd.FrontEndScene.<>c__DisplayClass60_0.<<SetFrontEndSceneType>g__ChangeFrontEndSceneTypeRoutine|0>d.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndScene___c__DisplayClass60_0___SetFrontEndSceneType_g__ChangeFrontEndSceneTypeRoutine_0_d__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156efbc | Atlas.FrontEnd.FrontEndScene.<>c__DisplayClass60_0.<<SetFrontEndSceneType>g__ChangeFrontEndSceneTypeRoutine|0>d.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndScene___c__DisplayClass60_0___SetFrontEndSceneType_g__ChangeFrontEndSceneTypeRoutine_0_d__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d64b80);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156effc | Atlas.FrontEnd.FrontEndScene.<>c__DisplayClass60_0.<<SetFrontEndSceneType>g__ChangeFrontEndSceneTypeRoutine|0>d.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndScene___c__DisplayClass60_0___SetFrontEndSceneType_g__ChangeFrontEndSceneTypeRoutine_0_d__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



