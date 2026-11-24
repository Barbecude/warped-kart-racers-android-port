// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.GameContextBase.<InitPools>d__164

// ============================================================
// RVA: 0x15501d4 | Atlas.Contexts.GameContextBase.<InitPools>d__164..ctor
// ============================================================

void Atlas_Contexts_GameContextBase__InitPools_d__164___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x1550200 | Atlas.Contexts.GameContextBase.<InitPools>d__164.System.IDisposable.Dispose
// ============================================================

void Atlas_Contexts_GameContextBase__InitPools_d__164__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1550204 | Atlas.Contexts.GameContextBase.<InitPools>d__164.MoveNext
// ============================================================

ulong Atlas_Contexts_GameContextBase__InitPools_d__164__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000003eb4f8f & 1) == 0) {
    func_0x00f78a20(0x3d52410);
    func_0x00f78a20(0x3d70fd0);
    func_0x00f78a20(0x3d695f0);
    bRam0000000003eb4f8f = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x20);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0xb0) == 0)) goto LAB_01550374;
      Atlas_Gameplay_Usables_UsableManager__PostCreateUsablePools
                (*(long *)(lVar3 + 0xb0),*(undefined8 *)(lVar3 + 0x1a8),
                 *(undefined8 *)(lVar3 + 0x1f8),0);
    }
LAB_0155035c:
    return (ulong)(iVar1 == 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x230);
    if (lVar4 != 0) {
      if (*(long *)(lVar3 + 0x1d0) == 0) goto LAB_01550374;
      uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar3 + 0x1d0),0);
      /*Atlas.Arcade.ArcadeEvent$$InitPools*/ func_0x0144d280(lVar4,uVar2,0);
    }
    if (*(long *)(lVar3 + 0x1d0) != 0) {
      lVar4 = *(long *)(lVar3 + 0xb0);
      uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar3 + 0x1d0),0);
      if (lVar4 != 0) {
        Atlas_Gameplay_Usables_UsableManager__CreateUsablePools
                  (lVar4,uVar2,lVar3,*(undefined8 *)(lVar3 + 0x210),0);
        if (*(long *)(lVar3 + 0x1d0) != 0) {
          lVar4 = *(long *)(lVar3 + 0x90);
          uVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar3 + 0x1d0),0);
          if (lVar4 != 0) {
            /*Atlas.Gameplay.AtlasPoolCreator$$CreateAndAddGameObjectPool<VFXBehaviour>*/ func_0x0182f89c(lVar4,/*STR('P_VFX_Portal')*/ uRam0000000003d70fd0,/*STR('BaseLayerContext')*/ uRam0000000003d695f0,0x18,uVar2,0,
                            uRam0000000003d52410);
            if (*(long *)(lVar3 + 0x88) != 0) {
              uVar2 = /*Core.Assets.AssetManager$$WaitForAllAssetsToLoad*/ func_0x01636e0c(*(long *)(lVar3 + 0x88),0);
              *(undefined8 *)(param_1 + 0x18) = uVar2;
              *(undefined4 *)(param_1 + 0x10) = 1;
              goto LAB_0155035c;
            }
          }
        }
      }
    }
  }
LAB_01550374:
  lVar3 = func_0x00f78af4();
  return *(ulong *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1550378 | Atlas.Contexts.GameContextBase.<InitPools>d__164.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Contexts_GameContextBase__InitPools_d__164__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1550380 | Atlas.Contexts.GameContextBase.<InitPools>d__164.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_Contexts_GameContextBase__InitPools_d__164__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62ea0);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x15503c0 | Atlas.Contexts.GameContextBase.<InitPools>d__164.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Contexts_GameContextBase__InitPools_d__164__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



