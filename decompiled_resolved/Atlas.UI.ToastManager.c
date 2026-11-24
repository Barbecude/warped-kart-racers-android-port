// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.ToastManager

// ============================================================
// RVA: 0x1508d28 | Atlas.UI.ToastManager.Init
// ============================================================

void Atlas_UI_ToastManager__Init(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4d34 & 1) == 0) {
    func_0x00f78a20(0x3d433a0);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d3f898);
    func_0x00f78a20(0x3d1e730);
    func_0x00f78a20(0x3d70f68);
    bRam0000000003eb4d34 = 1;
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Queue<ToastManager.Message>_TypeInfo*/ uRam0000000003d1e730);
  /*System.Collections.Generic.Queue<ToastManager.Message>$$.ctor*/ func_0x0273bd1c(uVar1,5,uRam0000000003d3f898);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  if (((*(ushort *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.AddressableAssets.Addressables$$LoadAssetAsync<StatAchievementConfig>*/ func_0x0171f06c(&uStack_70,/*STR('P_Toast')*/ uRam0000000003d70f68,uRam0000000003d433a0);
  *(undefined8 *)(param_1 + 0x20) = uStack_68;
  *(undefined8 *)(param_1 + 0x18) = uStack_70;
  *(undefined8 *)(param_1 + 0x30) = uStack_58;
  *(undefined8 *)(param_1 + 0x28) = uStack_60;
  return;
}



// ============================================================
// RVA: 0x1508e34 | Atlas.UI.ToastManager.DeInit
// ============================================================

void Atlas_UI_ToastManager__DeInit(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4d35 & 1) == 0) {
    func_0x00f78a20(0x3d433f8);
    func_0x00f78a20(0x3d1fae0);
    func_0x00f78a20(0x3d3f8b0);
    bRam0000000003eb4d35 = 1;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.AddressableAssets.Addressables_TypeInfo*/ lRam0000000003d1fae0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_50 = uVar4;
  uStack_48 = uVar11;
  uStack_40 = uVar12;
  uStack_38 = uVar13;
  /*UnityEngine.AddressableAssets.Addressables$$Release<VideoClip>*/ func_0x0171fcfc(&uStack_50,uRam0000000003d433f8);
  if (*(long *)(param_1 + 0x38) != 0) {
    /*System.Collections.Generic.Queue<ToastManager.Message>$$Clear*/ func_0x0273be88(*(long *)(param_1 + 0x38),uRam0000000003d3f8b0);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 3;
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4d36 & 1) == 0) {
    func_0x00f78a20(0x3d2bed8);
    func_0x00f78a20(0x3d2bf00);
    func_0x00f78a20(0x3d2bf18);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d57938);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3f8b8);
    func_0x00f78a20(0x3d3f8c8);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d252d0);
    bRam0000000003eb4d36 = 1;
  }
  fVar9 = (float)/*UnityEngine.Time$$get_unscaledDeltaTime*/ func_0x03272c40(0);
  plVar8 = *(long **)(lVar2 + 0x50);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar8,0,0);
  if (iVar1 == 0) {
    if (*(int *)(lVar2 + 0x40) != 3) {
      plVar8 = *(long **)(lVar2 + 0x58);
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*DG.Tweening.DOTween$$IsTweening*/ func_0x01696ee8(plVar8,0,0);
      if ((uVar6 & 1) == 0) {
        iVar1 = *(int *)(lVar2 + 0x40);
        if (iVar1 == 2) {
          *(undefined8 *)(lVar2 + 0x40) = 3;
          if ((*(long *)(lVar2 + 0x50) == 0) ||
             (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar2 + 0x50),0), lVar3 == 0))
          goto code_r0x015092f4;
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,0,0);
          goto code_r0x015092a0;
        }
        if (iVar1 != 0) goto code_r0x015092a4;
        *(undefined8 *)(lVar2 + 0x40) = 1;
        fVar10 = 0.0;
      }
      else {
code_r0x015092a0:
        iVar1 = *(int *)(lVar2 + 0x40);
code_r0x015092a4:
        if (iVar1 != 1) goto code_r0x015092d4;
        fVar10 = *(float *)(lVar2 + 0x44);
      }
      if ((*(float *)(lVar2 + 0x48) <= fVar10) && (*(char *)(lVar2 + 0x4c) == '\0')) {
        /*Atlas.UI.ToastManager$$AnimateOff*/ func_0x01509308(lVar2);
        *(undefined8 *)(lVar2 + 0x40) = 2;
      }
code_r0x015092d4:
      *(float *)(lVar2 + 0x44) = fVar9 + *(float *)(lVar2 + 0x44);
      return;
    }
    lVar3 = *(long *)(lVar2 + 0x38);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x20) < 1) goto code_r0x015092d4;
      auVar14 = /*System.Collections.Generic.Queue<ToastManager.Message>$$Dequeue*/ func_0x0273c3b0(lVar3,uRam0000000003d3f8b8);
      plVar7 = auVar14._8_8_;
      if ((*(long *)(lVar2 + 0x60) != 0) &&
         (plVar5 = *(long **)(*(long *)(lVar2 + 0x60) + 0x20), plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x558))(plVar5,auVar14._0_8_,*(undefined8 *)(*plVar5 + 0x560));
        *(int *)(lVar2 + 0x48) = auVar14._12_4_;
        *(bool *)(lVar2 + 0x4c) = ((ulong)plVar7 & 0xff) != 0;
        plVar8 = plVar7;
        if ((*(long *)(lVar2 + 0x50) != 0) &&
           (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar2 + 0x50),0), lVar3 != 0)) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,1,0);
          /*Atlas.UI.ToastManager$$AnimateOn*/ func_0x015093b0(lVar2);
          *(undefined8 *)(lVar2 + 0x40) = 0;
          goto code_r0x015092d4;
        }
      }
    }
  }
  else {
    if (*(long *)(lVar2 + 0x10) == 0) goto code_r0x015092d4;
    lVar3 = lVar2 + 0x18;
    iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<TextAsset>$$IsValid*/ func_0x01b5716c(lVar3,uRam0000000003d2bed8);
    if ((iVar1 == 0) || (iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<Sprite>$$get_IsDone*/ func_0x01b57080(lVar3,uRam0000000003d2bf00), iVar1 == 0))
    goto code_r0x015092d4;
    plVar8 = (long *)/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(lVar3,uRam0000000003d2bf18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar3 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar8,uRam0000000003d5b098);
    if (lVar3 != 0) {
      uVar4 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar3,uRam0000000003d57938);
      *(undefined8 *)(lVar2 + 0x60) = uVar4;
      plVar8 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar3,0);
      if ((plVar8 != (long *)0x0) && (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) goto code_r0x015092f8;
      *(long **)(lVar2 + 0x50) = plVar8;
      if (*(long *)(lVar2 + 0x60) != 0) {
        *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(*(long *)(lVar2 + 0x60) + 0x18);
        if ((((*(long *)(lVar2 + 0x10) != 0) &&
             (lVar3 = *(long *)(*(long *)(lVar2 + 0x10) + 0x10), lVar3 != 0)) &&
            (lVar3 = /*Core.UI2.UIManager$$get_Canvas*/ func_0x02f8708c(lVar3,0), lVar3 != 0)) &&
           (uVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar3,0), plVar8 != (long *)0x0)) {
          /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(plVar8,uVar4,0,0);
          if ((*(long *)(lVar2 + 0x50) != 0) &&
             (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar2 + 0x50),0), lVar3 != 0)) {
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,0,0);
            lVar3 = *(long *)(lVar2 + 0x58);
            if (((*(ushort *)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar8 = (long *)0x0;
            if (lVar3 != 0) {
              /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(**(undefined4 **)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0xb8),
                              (*(undefined4 **)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0xb8))[1],lVar3,0);
              goto code_r0x015092d4;
            }
          }
        }
      }
    }
  }
code_r0x015092f4:
  func_0x00f78af4();
code_r0x015092f8:
  auVar15 = func_0x00f78e5c(plVar8);
  *(int *)(auVar15._0_8_ + 0x40) = auVar15._8_4_;
  *(undefined4 *)(auVar15._0_8_ + 0x44) = 0;
  return;
}



// ============================================================
// RVA: 0x1508f10 | Atlas.UI.ToastManager.Update
// ============================================================

void Atlas_UI_ToastManager__Update(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  
  if ((bRam0000000003eb4d36 & 1) == 0) {
    func_0x00f78a20(0x3d2bed8);
    func_0x00f78a20(0x3d2bf00);
    func_0x00f78a20(0x3d2bf18);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d57938);
    func_0x00f78a20(0x3d5b098);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3f8b8);
    func_0x00f78a20(0x3d3f8c8);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d252d0);
    bRam0000000003eb4d36 = 1;
  }
  fVar8 = (float)/*UnityEngine.Time$$get_unscaledDeltaTime*/ func_0x03272c40(0);
  plVar7 = *(long **)(param_1 + 0x50);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar7,0,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x40) != 3) {
      plVar7 = *(long **)(param_1 + 0x58);
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*DG.Tweening.DOTween$$IsTweening*/ func_0x01696ee8(plVar7,0,0);
      if ((uVar5 & 1) == 0) {
        iVar1 = *(int *)(param_1 + 0x40);
        if (iVar1 == 2) {
          *(undefined8 *)(param_1 + 0x40) = 3;
          if ((*(long *)(param_1 + 0x50) == 0) ||
             (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x50),0), lVar2 == 0)) goto LAB_015092f4;
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar2,0,0);
          goto code_r0x015092a0;
        }
        if (iVar1 != 0) goto code_r0x015092a4;
        *(undefined8 *)(param_1 + 0x40) = 1;
        fVar9 = 0.0;
      }
      else {
code_r0x015092a0:
        iVar1 = *(int *)(param_1 + 0x40);
code_r0x015092a4:
        if (iVar1 != 1) goto LAB_015092d4;
        fVar9 = *(float *)(param_1 + 0x44);
      }
      if ((*(float *)(param_1 + 0x48) <= fVar9) && (*(char *)(param_1 + 0x4c) == '\0')) {
        /*Atlas.UI.ToastManager$$AnimateOff*/ func_0x01509308(param_1);
        *(undefined8 *)(param_1 + 0x40) = 2;
      }
LAB_015092d4:
      *(float *)(param_1 + 0x44) = fVar8 + *(float *)(param_1 + 0x44);
      return;
    }
    lVar2 = *(long *)(param_1 + 0x38);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x20) < 1) goto LAB_015092d4;
      auVar10 = /*System.Collections.Generic.Queue<ToastManager.Message>$$Dequeue*/ func_0x0273c3b0(lVar2,uRam0000000003d3f8b8);
      plVar6 = auVar10._8_8_;
      if ((*(long *)(param_1 + 0x60) != 0) &&
         (plVar4 = *(long **)(*(long *)(param_1 + 0x60) + 0x20), plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 0x558))(plVar4,auVar10._0_8_,*(undefined8 *)(*plVar4 + 0x560));
        *(int *)(param_1 + 0x48) = auVar10._12_4_;
        *(bool *)(param_1 + 0x4c) = ((ulong)plVar6 & 0xff) != 0;
        plVar7 = plVar6;
        if ((*(long *)(param_1 + 0x50) != 0) &&
           (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x50),0), lVar2 != 0)) {
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar2,1,0);
          /*Atlas.UI.ToastManager$$AnimateOn*/ func_0x015093b0(param_1);
          *(undefined8 *)(param_1 + 0x40) = 0;
          goto LAB_015092d4;
        }
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_015092d4;
    lVar2 = param_1 + 0x18;
    iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<TextAsset>$$IsValid*/ func_0x01b5716c(lVar2,uRam0000000003d2bed8);
    if ((iVar1 == 0) || (iVar1 = /*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<Sprite>$$get_IsDone*/ func_0x01b57080(lVar2,uRam0000000003d2bf00), iVar1 == 0))
    goto LAB_015092d4;
    plVar7 = (long *)/*UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<VideoClip>$$get_Result*/ func_0x01b574b0(lVar2,uRam0000000003d2bf18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar2 = /*UnityEngine.Object$$Instantiate<TMP_Dropdown.DropdownItem>*/ func_0x018a6644(plVar7,uRam0000000003d5b098);
    if (lVar2 != 0) {
      uVar3 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar2,uRam0000000003d57938);
      *(undefined8 *)(param_1 + 0x60) = uVar3;
      plVar7 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar2,0);
      if ((plVar7 != (long *)0x0) && (*plVar7 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) goto LAB_015092f8;
      *(long **)(param_1 + 0x50) = plVar7;
      if (*(long *)(param_1 + 0x60) != 0) {
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x18);
        if ((((*(long *)(param_1 + 0x10) != 0) &&
             (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar2 != 0)) &&
            (lVar2 = /*Core.UI2.UIManager$$get_Canvas*/ func_0x02f8708c(lVar2,0), lVar2 != 0)) &&
           (uVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar2,0), plVar7 != (long *)0x0)) {
          /*UnityEngine.Transform$$SetParent*/ func_0x03275ee0(plVar7,uVar3,0,0);
          if ((*(long *)(param_1 + 0x50) != 0) &&
             (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x50),0), lVar2 != 0)) {
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar2,0,0);
            lVar2 = *(long *)(param_1 + 0x58);
            if (((*(ushort *)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar7 = (long *)0x0;
            if (lVar2 != 0) {
              /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(**(undefined4 **)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0xb8),
                              (*(undefined4 **)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0xb8))[1],lVar2,0);
              goto LAB_015092d4;
            }
          }
        }
      }
    }
  }
LAB_015092f4:
  func_0x00f78af4();
LAB_015092f8:
  auVar11 = func_0x00f78e5c(plVar7);
  *(int *)(auVar11._0_8_ + 0x40) = auVar11._8_4_;
  *(undefined4 *)(auVar11._0_8_ + 0x44) = 0;
  return;
}



// ============================================================
// RVA: 0x1509300 | Atlas.UI.ToastManager.SetPhase
// ============================================================

void Atlas_UI_ToastManager__SetPhase(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



// ============================================================
// RVA: 0x1509308 | Atlas.UI.ToastManager.AnimateOff
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_ToastManager__AnimateOff(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb4d39 & 1) == 0) {
    func_0x00f78a20(0x3d252d0);
    func_0x00f78a20(0x3d5e878);
    bRam0000000003eb4d39 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  if (((*(ushort *)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar2 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPos*/ func_0x016a6ea4(**(undefined4 **)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0xb8),
                          (*(undefined4 **)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0xb8))[1],_UNK_033f813c,uVar3,0,0
                         );
  if ((bRam0000000003eb66c3 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,1,uRam0000000003d5e878);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb66c3 = 1;
  }
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = *(undefined4 *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x34);
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar2,uVar1,1,0);
  }
  return lVar2;
}



// ============================================================
// RVA: 0x15093b0 | Atlas.UI.ToastManager.AnimateOn
// ============================================================

long Atlas_UI_ToastManager__AnimateOn(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb4d38 & 1) == 0) {
    func_0x00f78a20(0x3d252d0);
    func_0x00f78a20(0x3d5e878);
    bRam0000000003eb4d38 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  if (((*(ushort *)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar2 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPos*/ func_0x016a6ea4(*(undefined4 *)(*(long *)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0xb8) + 8),
                          *(undefined4 *)(*(long *)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0xb8) + 0xc),0x3e800000,
                          uVar3,0,0);
  if ((bRam0000000003eb66c3 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,1,uRam0000000003d5e878);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb66c3 = 1;
  }
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = *(undefined4 *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x34);
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar2,uVar1,1,0);
  }
  return lVar2;
}



// ============================================================
// RVA: 0x1509454 | Atlas.UI.ToastManager.PostMessage
// ============================================================

void Atlas_UI_ToastManager__PostMessage(uint param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long lVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if ((bRam0000000003eb4d37 & 1) == 0) {
    func_0x00f78a20(0x3d3f8c0);
    func_0x00f78a20(0x3d3f8c8);
    bRam0000000003eb4d37 = 1;
  }
  lVar6 = lRam0000000003d3f8c0;
  lVar3 = *(long *)(param_2 + 0x38);
  if ((lVar3 == 0) || (5 < *(int *)(lVar3 + 0x20))) {
    return;
  }
  lVar5 = *(long *)(lVar3 + 0x10);
  if (lVar5 == 0) {
code_r0x0273c2b8:
    func_0x00f78af4();
  }
  else {
    iVar2 = *(int *)(lVar3 + 0x20);
    unaff_x19 = lVar3;
    unaff_x20 = lVar6;
    if (iVar2 == *(int *)(lVar5 + 0x18)) {
      iVar1 = iVar2 + 4;
      if (iVar2 + 4 <= iVar2 * 2) {
        iVar1 = iVar2 << 1;
      }
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d3f8c0 + 0x18) + 0xc0) + 0x18))
                (lVar3,iVar1);
      lVar5 = *(long *)(lVar3 + 0x10);
      if (lVar5 == 0) goto code_r0x0273c2b8;
    }
    if (*(uint *)(lVar3 + 0x1c) < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (long)(int)*(uint *)(lVar3 + 0x1c) * 0x10;
      *(undefined8 *)(lVar5 + 0x20) = param_3;
      *(ulong *)(lVar5 + 0x28) = param_4 & 0xffffffff | (ulong)param_1 << 0x20;
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0x20))(lVar3);
      *(ulong *)(lVar3 + 0x20) =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar3 + 0x20) >> 0x20) + 1,
                    (int)*(undefined8 *)(lVar3 + 0x20) + 1);
      return;
    }
  }
  uVar4 = func_0x00f78b24();
  auVar7 = func_0x00f78ac0(uVar4,0);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_50 = unaff_x20;
  lStack_48 = unaff_x19;
  /*System.Collections.Generic.Queue.Enumerator<ToastManager.Message>$$.ctor*/ func_0x01f85c04(&uStack_70,auVar7._0_8_,
                  *(undefined8 *)(*(long *)(*(long *)(auVar7._8_8_ + 0x18) + 0xc0) + 0x30));
  uStack_88 = uStack_68;
  uStack_90 = uStack_70;
  uStack_78 = uStack_58;
  uStack_80 = uStack_60;
  lVar6 = *(long *)(*(long *)(*(long *)(auVar7._8_8_ + 0x18) + 0xc0) + 0x28);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar6);
  }
  func_0x00f78ae0(lVar6,&uStack_90);
  return;
}



// ============================================================
// RVA: 0x15094fc | Atlas.UI.ToastManager.DismissIfHeld
// ============================================================

void Atlas_UI_ToastManager__DismissIfHeld(long param_1)

{
  *(undefined1 *)(param_1 + 0x4c) = 0;
  return;
}



// ============================================================
// RVA: 0x1509504 | Atlas.UI.ToastManager..ctor
// ============================================================

void Atlas_UI_ToastManager___ctor(long param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 3;
  return;
}



// ============================================================
// RVA: 0x1509514 | Atlas.UI.ToastManager..cctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_ToastManager___cctor(void)

{
  if ((bRam0000000003eb4d3a & 1) == 0) {
    func_0x00f78a20(0x3d252d0);
    bRam0000000003eb4d3a = 1;
  }
  **(undefined8 **)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0xb8) = _UNK_033f8608;
  *(undefined8 *)(*(long *)(/*Atlas.UI.ToastManager_TypeInfo*/ lRam0000000003d252d0 + 0xb8) + 8) = _UNK_033f8610;
  return;
}



