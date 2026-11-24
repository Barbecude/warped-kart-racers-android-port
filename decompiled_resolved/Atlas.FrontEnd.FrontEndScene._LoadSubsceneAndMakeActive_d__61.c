// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.FrontEndScene.<LoadSubsceneAndMakeActive>d__61

// ============================================================
// RVA: 0x154f6dc | Atlas.FrontEnd.FrontEndScene.<LoadSubsceneAndMakeActive>d__61..ctor
// ============================================================

void Atlas_FrontEnd_FrontEndScene__LoadSubsceneAndMakeActive_d__61___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x154f708 | Atlas.FrontEnd.FrontEndScene.<LoadSubsceneAndMakeActive>d__61.System.IDisposable.Dispose
// ============================================================

void Atlas_FrontEnd_FrontEndScene__LoadSubsceneAndMakeActive_d__61__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x154f70c | Atlas.FrontEnd.FrontEndScene.<LoadSubsceneAndMakeActive>d__61.MoveNext
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 Atlas_FrontEnd_FrontEndScene__LoadSubsceneAndMakeActive_d__61__MoveNext(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4f8a & 1) == 0) {
    func_0x00f78a20(0x3d2c010);
    func_0x00f78a20(0x3d2c018);
    func_0x00f78a20(0x3d2c028);
    func_0x00f78a20(0x3d56d98);
    func_0x00f78a20(0x3d56da0);
    func_0x00f78a20(0x3d23050);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24720);
    bRam0000000003eb4f8a = 1;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    plVar3 = *(long **)(param_1 + 0x20);
    if (plVar3 == (long *)0x0) goto LAB_0154fa24;
    (**(code **)(*plVar3 + 0x208))(&uStack_70,plVar3,1,1,100,*(undefined8 *)(*plVar3 + 0x210));
    *(undefined8 *)(param_1 + 0x40) = uStack_68;
    *(undefined8 *)(param_1 + 0x38) = uStack_70;
    *(undefined8 *)(param_1 + 0x50) = uStack_58;
    *(undefined8 *)(param_1 + 0x48) = uStack_60;
  }
  lVar6 = param_1 + 0x38;
  iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<SceneInstance>$$get_IsDone*/ func_0x01b5892c(lVar6,uRam0000000003d2c010);
  if (iVar1 == 0) {
    fVar7 = (float)/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<SceneInstance>$$get_PercentComplete*/ func_0x01b58b58(lVar6,uRam0000000003d2c018);
    fVar8 = (float)/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<SceneInstance>$$get_PercentComplete*/ func_0x01b58b58(lVar6,uRam0000000003d2c018);
    if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*Atlas.UI.LoadingBehaviour$$SetProgress*/ func_0x01487858(fVar7 + fVar8 * _UNK_033f813c,1,0);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  if (((*(ushort *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.LoadingBehaviour_TypeInfo*/ lRam0000000003d23050 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*Atlas.UI.LoadingBehaviour$$SetProgress*/ func_0x01487858(0x3f800000,1,0);
  uVar2 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<SceneInstance>$$get_Result*/ func_0x01b58d5c(lVar6,uRam0000000003d2c028);
  if (((*(ushort *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.SceneManagement.SceneManager_TypeInfo*/ lRam0000000003d24720 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.SceneManagement.SceneManager$$SetActiveScene*/ func_0x0325d4f4(uVar2,0);
  if (lVar5 == 0) goto LAB_0154fa24;
  plVar3 = (long *)(lVar5 + 200);
  lVar6 = *plVar3;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar6,0);
  if (iVar1 != 0) {
    if (*plVar3 == 0) goto LAB_0154fa24;
    /*Atlas.FrontEnd.FrontEndSubsceneBehaviourBase$$DeInit*/ func_0x01595b38(*plVar3,0);
  }
  iVar1 = Atlas_FrontEnd_FrontEndScene__TryFindComponentInRootOfScene_FrontEndSubsceneBehaviourBase_
                    (uVar2,lVar5 + 0x60,uRam0000000003d56da0);
  if (iVar1 != 0) {
    if ((*(long *)(lVar5 + 0x60) == 0) || (*(long *)(lVar5 + 0x80) == 0)) goto LAB_0154fa24;
    /*Atlas.Lighting.LightWorld$$SetLightVolumes*/ func_0x01484e18(*(long *)(lVar5 + 0x80),*(undefined8 *)(*(long *)(lVar5 + 0x60) + 0xf0),0);
    if ((*(long *)(lVar5 + 0x60) == 0) || (*(long *)(lVar5 + 0x80) == 0)) goto LAB_0154fa24;
    _memmove(*(long *)(lVar5 + 0x80) + 0x5c,*(long *)(lVar5 + 0x60) + 0xf8,0x44);
  }
  iVar1 = Atlas_FrontEnd_FrontEndScene__TryFindComponentInRootOfScene_FrontEndSubsceneBehaviourBase_
                    (uVar2,plVar3,uRam0000000003d56d98);
  if (iVar1 != 0) {
    lVar6 = *(long *)(lVar5 + 200);
    uVar4 = Atlas_FrontEnd_FrontEndScene__GetGenericIPDefinition(lVar5,0);
    if (lVar6 == 0) {
LAB_0154fa24:
      lVar5 = func_0x00f78af4();
      return *(undefined8 *)(lVar5 + 0x18);
    }
    /*Atlas.FrontEnd.FrontEndSubsceneBehaviourBase$$Init*/ func_0x01595b28(lVar6,lVar5,uVar4,*(undefined8 *)(lVar5 + 0x80),0);
    if (*(long *)(param_1 + 0x30) != 0) {
      /*System.Action$$Invoke*/ func_0x02924c90(*(long *)(param_1 + 0x30),0);
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x154fa28 | Atlas.FrontEnd.FrontEndScene.<LoadSubsceneAndMakeActive>d__61.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndScene__LoadSubsceneAndMakeActive_d__61__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x154fa30 | Atlas.FrontEnd.FrontEndScene.<LoadSubsceneAndMakeActive>d__61.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndScene__LoadSubsceneAndMakeActive_d__61__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62e78);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x154fa70 | Atlas.FrontEnd.FrontEndScene.<LoadSubsceneAndMakeActive>d__61.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_FrontEnd_FrontEndScene__LoadSubsceneAndMakeActive_d__61__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



