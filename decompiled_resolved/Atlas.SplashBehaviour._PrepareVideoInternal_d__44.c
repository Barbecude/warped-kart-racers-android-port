// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.SplashBehaviour.<PrepareVideoInternal>d__44

// ============================================================
// RVA: 0x156ace8 | Atlas.SplashBehaviour.<PrepareVideoInternal>d__44..ctor
// ============================================================

void Atlas_SplashBehaviour__PrepareVideoInternal_d__44___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x156ad14 | Atlas.SplashBehaviour.<PrepareVideoInternal>d__44.System.IDisposable.Dispose
// ============================================================

void Atlas_SplashBehaviour__PrepareVideoInternal_d__44__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x156ad18 | Atlas.SplashBehaviour.<PrepareVideoInternal>d__44.MoveNext
// ============================================================

undefined8 Atlas_SplashBehaviour__PrepareVideoInternal_d__44__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb5000 & 1) == 0) {
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d51bf0);
    func_0x00f78a20(0x3d2c080);
    func_0x00f78a20(0x3d1b738);
    func_0x00f78a20(0x3d1b768);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d71460);
    bRam0000000003eb5000 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x18) != 0)) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar4 + 0x18),1,0);
      lVar5 = *(long *)(lVar4 + 0x18);
      uVar2 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(lVar4 + 0x58,uRam0000000003d2c080);
      if (lVar5 != 0) {
        /*UnityEngine.Video.VideoPlayer$$set_clip*/ func_0x032fba00(lVar5,uVar2,0);
        if (*(long *)(lVar4 + 0x18) != 0) {
          /*UnityEngine.Video.VideoPlayer$$Prepare*/ func_0x032fba50(*(long *)(lVar4 + 0x18),0);
          *(undefined4 *)(lVar4 + 0x78) = 1;
          *(undefined8 *)(lVar4 + 0x98) = 0;
          uVar2 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(lVar4 + 0x58,uRam0000000003d2c080);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
          Atlas_SplashBehaviour__Log(lVar4,/*STR('PrepareVideoInternal()')*/ uRam0000000003d71460,0);
          return 0;
        }
      }
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
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
      return 1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    plVar6 = *(long **)(param_1 + 0x28);
    if (plVar6 != (long *)0x0) {
      puVar3 = (undefined8 *)
               func_0x00f78acc(*(undefined8 *)
                                (*plVar6 + (ulong)*(ushort *)(lRam0000000003d51bf0 + 0x48) * 0x10 +
                                0x140));
      (*(code *)*puVar3)(&uStack_50,plVar6,puVar3);
      if (lVar4 != 0) {
        *(undefined8 *)(lVar4 + 0x60) = uStack_48;
        *(undefined8 *)(lVar4 + 0x58) = uStack_50;
        *(undefined8 *)(lVar4 + 0x70) = uStack_38;
        *(undefined8 *)(lVar4 + 0x68) = uStack_40;
        uStack_68 = uStack_48;
        uStack_70 = uStack_50;
        uStack_58 = uStack_38;
        uStack_60 = uStack_40;
        uVar2 = func_0x00f78ae0(/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>_TypeInfo*/ uRam0000000003d1b768,&uStack_70);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        *(undefined4 *)(param_1 + 0x10) = 2;
        return 1;
      }
    }
  }
  lVar4 = func_0x00f78af4();
  return *(undefined8 *)(lVar4 + 0x18);
}



// ============================================================
// RVA: 0x156af74 | Atlas.SplashBehaviour.<PrepareVideoInternal>d__44.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_SplashBehaviour__PrepareVideoInternal_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x156af7c | Atlas.SplashBehaviour.<PrepareVideoInternal>d__44.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_SplashBehaviour__PrepareVideoInternal_d__44__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d64438);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x156afbc | Atlas.SplashBehaviour.<PrepareVideoInternal>d__44.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_SplashBehaviour__PrepareVideoInternal_d__44__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



