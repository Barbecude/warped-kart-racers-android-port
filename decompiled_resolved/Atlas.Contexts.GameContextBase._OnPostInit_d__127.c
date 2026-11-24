// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.GameContextBase.<OnPostInit>d__127

// ============================================================
// RVA: 0x1551f50 | Atlas.Contexts.GameContextBase.<OnPostInit>d__127..ctor
// ============================================================

void Atlas_Contexts_GameContextBase__OnPostInit_d__127___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1551f7c | Atlas.Contexts.GameContextBase.<OnPostInit>d__127.System.IDisposable.Dispose
// ============================================================

void Atlas_Contexts_GameContextBase__OnPostInit_d__127__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1551f80 | Atlas.Contexts.GameContextBase.<OnPostInit>d__127.MoveNext
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__OnPostInit_d__127__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4f92 & 1) == 0) {
    func_0x00f78a20(0x3d570a0);
    func_0x00f78a20(0x3d6d1b8);
    bRam0000000003eb4f92 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) - 1U < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x68) == 0)) goto LAB_015520d4;
    iVar1 = /*Atlas.UI.AtlasUIManager$$IsLayerReady*/ func_0x01470920(*(long *)(lVar3 + 0x68),1,0);
    if (iVar1 != 0) {
      if (*(long *)(lVar3 + 0x68) == 0) goto LAB_015520d4;
      iVar1 = /*Atlas.UI.AtlasUIManager$$IsLayerReady*/ func_0x01470920(*(long *)(lVar3 + 0x68),3,0);
      if (iVar1 != 0) {
        if (*(long *)(lVar3 + 0x68) == 0) goto LAB_015520d4;
        iVar1 = /*Atlas.UI.AtlasUIManager$$IsLayerReady*/ func_0x01470920(*(long *)(lVar3 + 0x68),2,0);
        if (iVar1 != 0) {
          Atlas_Contexts_GameContextBase__SetGameModeState_GameContextBaseInProgressState_
                    (lVar3,uRam0000000003d570a0);
          if (*(long *)(lVar3 + 0x130) == 0) {
LAB_015520d4:
            lVar3 = func_0x00f78af4();
            return *(undefined8 *)(lVar3 + 0x18);
          }
          Atlas_Gameplay_Kart_KartManager__PostInitKarts
                    (*(long *)(lVar3 + 0x130),*(undefined8 *)(lVar3 + 0x198),
                     *(undefined8 *)(lVar3 + 0x200),0);
          if (*(long *)(lVar3 + 0x60) == 0) goto LAB_015520d4;
          /*Core.Cameras.CameraManager$$SetActiveCamera*/ func_0x0163abf4(*(long *)(lVar3 + 0x60),/*STR('GameContext')*/ uRam0000000003d6d1b8,0);
          if (*(long *)(lVar3 + 200) == 0) goto LAB_015520d4;
          /*Atlas.Settings.AtlasQualitySettings$$EndBoostLoading*/ func_0x0145ed30(*(long *)(lVar3 + 200),0);
          goto LAB_015520c4;
        }
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 2;
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar3 != 0) {
        uVar2 = Atlas_Contexts_GameContextBase____n__1
                          (lVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      goto LAB_015520d4;
    }
LAB_015520c4:
    uVar2 = 0;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x15520d8 | Atlas.Contexts.GameContextBase.<OnPostInit>d__127.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Contexts_GameContextBase__OnPostInit_d__127__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15520e0 | Atlas.Contexts.GameContextBase.<OnPostInit>d__127.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_Contexts_GameContextBase__OnPostInit_d__127__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62eb8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1552120 | Atlas.Contexts.GameContextBase.<OnPostInit>d__127.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Contexts_GameContextBase__OnPostInit_d__127__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



