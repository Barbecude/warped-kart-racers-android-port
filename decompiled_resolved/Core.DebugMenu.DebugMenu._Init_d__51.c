// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.DebugMenu.DebugMenu.<Init>d__51

// ============================================================
// RVA: 0x163e420 | Core.DebugMenu.DebugMenu.<Init>d__51..ctor
// ============================================================

void Core_DebugMenu_DebugMenu__Init_d__51___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x164488c | Core.DebugMenu.DebugMenu.<Init>d__51.System.IDisposable.Dispose
// ============================================================

void Core_DebugMenu_DebugMenu__Init_d__51__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x1644890 | Core.DebugMenu.DebugMenu.<Init>d__51.MoveNext
// ============================================================

undefined8 Core_DebugMenu_DebugMenu__Init_d__51__MoveNext(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb5746 & 1) == 0) {
    func_0x00f78a20(0x3d433a0);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d2bf00);
    func_0x00f78a20(0x3d2bf18);
    func_0x00f78a20(0x3d53418);
    func_0x00f78a20(0x3d53410);
    func_0x00f78a20(0x3d21120);
    func_0x00f78a20(0x3d54918);
    func_0x00f78a20(0x3d21118);
    func_0x00f78a20(0x3d21150);
    func_0x00f78a20(0x3d2ed00);
    func_0x00f78a20(0x3d1c388);
    func_0x00f78a20(0x3d3a698);
    func_0x00f78a20(0x3d399b8);
    func_0x00f78a20(0x3d3a690);
    func_0x00f78a20(0x3d399b0);
    func_0x00f78a20(0x3d3cfa8);
    func_0x00f78a20(0x3d399c8);
    func_0x00f78a20(0x3d1d990);
    func_0x00f78a20(0x3d1d708);
    func_0x00f78a20(0x3d1e0f0);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d41618);
    func_0x00f78a20(0x3d1eb48);
    func_0x00f78a20(0x3d6b8a0);
    func_0x00f78a20(0x3d6b950);
    func_0x00f78a20(0x3d70c80);
    bRam0000000003eb5746 = 1;
  }
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  plStack_98 = (long *)0x0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar9 = 1;
    lVar8 = 0x20;
    while( true ) {
      if (((*(ushort *)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (**(long **)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xb8) == 0) break;
      if ((long)*(int *)(**(long **)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xb8) + 0x18) <= (long)uVar10) {
        if (uVar9 == 0) goto LAB_01644d08;
        uVar10 = 0;
        lVar8 = 0x20;
        goto code_r0x01644c74;
      }
      if ((lVar5 == 0) || (lVar6 = *(long *)(lVar5 + 0x10), lVar6 == 0)) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar10) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x10) + lVar8);
      uStack_c8 = puVar1[1];
      uStack_d0 = *puVar1;
      uStack_b8 = puVar1[3];
      uStack_c0 = puVar1[2];
      uVar2 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<Sprite>$$get_IsDone*/ func_0x01b57080(&uStack_d0,uRam0000000003d2bf00);
      uVar9 = uVar9 & uVar2;
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x20;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((*(ushort *)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = **(long **)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xb8);
    if (lVar8 != 0) {
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<GameObject>_TypeInfo*/ uRam0000000003d1d990);
      /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar4,*(undefined4 *)(lVar8 + 0x18),uRam0000000003d3a690);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x18) = uVar4;
        lVar8 = **(long **)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xb8);
        if (lVar8 != 0) {
          uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<AsyncOperationHandle<GameObject>>_TypeInfo*/ uRam0000000003d1d708);
          /*System.Collections.Generic.List<AsyncOperationHandle<object>>$$.ctor*/ func_0x023406d4(uVar4,*(undefined4 *)(lVar8 + 0x18),uRam0000000003d399b0);
          uVar10 = 0;
          *(undefined8 *)(lVar5 + 0x10) = uVar4;
          while( true ) {
            if (((*(ushort *)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar8 = **(long **)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xb8);
            if (lVar8 == 0) break;
            if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar10) {
LAB_01644d08:
              *(undefined8 *)(param_1 + 0x18) = 0;
              *(undefined4 *)(param_1 + 0x10) = 1;
              return 1;
            }
            lVar6 = *(long *)(lVar5 + 0x10);
            if (((*(ushort *)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xe0) == 0)) {
              func_0x00f78ad0();
              lVar8 = **(long **)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xb8);
              if (lVar8 == 0) break;
            }
            if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_01644fd8;
            uVar4 = *(undefined8 *)(lVar8 + uVar10 * 8 + 0x20);
            if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*UnityEngine.AddressableAssets.Addressables$$LoadAssetAsync<StatAchievementConfig>*/ func_0x0171f06c(&uStack_f0,uVar4,uRam0000000003d433a0);
            if (lVar6 == 0) break;
            uStack_78 = uStack_e8;
            uStack_80 = uStack_f0;
            uStack_68 = uStack_d8;
            uStack_70 = uStack_e0;
            /*System.Collections.Generic.List<AsyncOperationHandle<object>>$$Add*/ func_0x02341308(lVar6,&uStack_80,uRam0000000003d399b8);
            uVar10 = uVar10 + 1;
          }
        }
      }
    }
  }
LAB_01644fd4:
  func_0x00f78af4();
LAB_01644fd8:
  uVar4 = func_0x00f78b24();
  func_0x00f78ac0(uVar4,0);
code_r0x01644fe4:
  lVar5 = func_0x00f78e5c();
  return *(undefined8 *)(lVar5 + 0x18);
code_r0x01644c74:
  if (((*(ushort *)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (**(long **)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xb8) == 0) goto LAB_01644fd4;
  if ((long)*(int *)(**(long **)(/*Core.DebugMenu.DebugMenu_TypeInfo*/ lRam0000000003d21118 + 0xb8) + 0x18) <= (long)uVar10) {
    uVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<int, DebugMenu.Element>_TypeInfo*/ uRam0000000003d1c388);
    /*System.Collections.Generic.Dictionary<int, DebugMenu.Element>$$.ctor*/ func_0x01e94d94(uVar4,200,uRam0000000003d2ed00);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x48) = uVar4;
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<DebugMenu.DelayedId>_TypeInfo*/ uRam0000000003d1e0f0);
      /*System.Collections.Generic.List<DebugMenu.DelayedId>$$.ctor*/ func_0x02513bd4(uVar4,4,uRam0000000003d3cfa8);
      *(undefined8 *)(lVar5 + 0x50) = uVar4;
      uVar4 = func_0x00f78aec(/*System.Collections.Generic.List<DebugMenu.DelayedId>_TypeInfo*/ uRam0000000003d1e0f0);
      /*System.Collections.Generic.List<DebugMenu.DelayedId>$$.ctor*/ func_0x02513bd4(uVar4,4,uRam0000000003d3cfa8);
      *(undefined8 *)(lVar5 + 0x58) = uVar4;
      lVar8 = Core_DebugMenu_DebugMenu__InstantiateUI(0,0,lVar5,0,/*STR('DebugMenu')*/ uRam0000000003d6b950);
      *(long *)(lVar5 + 0x20) = lVar8;
      if (lVar8 != 0) {
        /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(lVar8,*(undefined8 *)(param_1 + 0x28),0,0);
        if (*(long *)(lVar5 + 0x20) != 0) {
          uVar4 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(*(long *)(lVar5 + 0x20),uRam0000000003d53410);
          *(undefined8 *)(lVar5 + 0x28) = uVar4;
          if (*(long *)(lVar5 + 0x20) != 0) {
            uVar4 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(*(long *)(lVar5 + 0x20),uRam0000000003d53418);
            *(undefined8 *)(lVar5 + 0x30) = uVar4;
            uVar3 = Core_DebugMenu_DebugMenu__AddPanel
                              (0,0x437a0000,0x42600000,lVar5,0,
                               **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8),lVar5,0xffffffff);
            *(undefined4 *)(lVar5 + 0x38) = uVar3;
            uVar4 = Core_DebugMenu_DebugMenu__AddPanel
                              (0,0,0x43c80000,lVar5,1,/*STR('Debug Menu')*/ uRam0000000003d6b8a0,lVar5,0xffffffff);
            *(int *)(lVar5 + 0x3c) = (int)uVar4;
            Core_DebugMenu_DebugMenu__TryGetElementCopy(lVar5,uVar4,1,&uStack_b0);
            if (plStack_98 != (long *)0x0) {
              if ((*(byte *)(*plStack_98 + 300) < *(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300)) ||
                 (*(long *)(*(long *)(*plStack_98 + 200) +
                            (ulong)*(byte *)(/*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150 + 300) * 8 + -8) !=
                  /*Core.DebugMenu.DebugUIPanelBehaviour_TypeInfo*/ lRam0000000003d21150)) goto code_r0x01644fe4;
              if ((plStack_98[4] != 0) && (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plStack_98[4],0), lVar8 != 0)) {
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,0,0);
                uVar3 = *(undefined4 *)(lVar5 + 0x3c);
                uVar4 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<int, float>_TypeInfo*/ uRam0000000003d1eb48);
                /*UnityEngine.Events.UnityAction<int, float>$$.ctor*/ func_0x01b80438(uVar4,lVar5,uRam0000000003d54918,uRam0000000003d41618);
                Core_DebugMenu_DebugMenu__AddSlider
                          (0x41200000,0x42c80000,0x42c80000,0x41a00000,lVar5,uVar3,0,uVar4,lVar5,
                           /*STR('Opacity')*/ uRam0000000003d70c80);
                Core_DebugMenu_DebugMenu__AddRootButton
                          (0x41a00000,lVar5,*(undefined4 *)(lVar5 + 0x38),1,0,lVar5,
                           *(undefined4 *)(lVar5 + 0x3c),0xffffffff,0);
                lVar8 = func_0x00f78aec(/*Core.DebugMenu.DebugMenuControllerInputSupport_TypeInfo*/ uRam0000000003d21120);
                /*System.Object$$.ctor*/ func_0x0294d018(lVar8,0);
                *(long *)(lVar5 + 0x78) = lVar8;
                if (lVar8 != 0) {
                  /*Core.DebugMenu.DebugMenuControllerInputSupport$$Init*/ func_0x01643410(lVar8,lVar5);
                  *(undefined1 *)(lVar5 + 0x80) = 1;
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    goto LAB_01644fd4;
  }
  if ((lVar5 == 0) || (lVar6 = *(long *)(lVar5 + 0x10), lVar6 == 0)) goto LAB_01644fd4;
  lVar7 = *(long *)(lVar5 + 0x18);
  if (*(uint *)(lVar6 + 0x18) <= uVar10) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x10) + lVar8);
  uStack_c8 = puVar1[1];
  uStack_d0 = *puVar1;
  uStack_b8 = puVar1[3];
  uStack_c0 = puVar1[2];
  uVar4 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(&uStack_d0,uRam0000000003d2bf18);
  if (lVar7 == 0) goto LAB_01644fd4;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar7,uVar4,uRam0000000003d3a698);
  uVar10 = uVar10 + 1;
  lVar8 = lVar8 + 0x20;
  goto code_r0x01644c74;
}



// ============================================================
// RVA: 0x1644fe8 | Core.DebugMenu.DebugMenu.<Init>d__51.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Core_DebugMenu_DebugMenu__Init_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1644ff0 | Core.DebugMenu.DebugMenu.<Init>d__51.System.Collections.IEnumerator.Reset
// ============================================================

undefined8 Core_DebugMenu_DebugMenu__Init_d__51__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62a48);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1645030 | Core.DebugMenu.DebugMenu.<Init>d__51.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Core_DebugMenu_DebugMenu__Init_d__51__System_Collections_IEnumerator_get_Current(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



