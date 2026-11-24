// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Input.OnScreenAtlasStick

// ============================================================
// RVA: 0x14b3b48 | Atlas.Input.OnScreenAtlasStick.get_Background
// ============================================================

undefined8 Atlas_Input_OnScreenAtlasStick__get_Background(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x14b3b50 | Atlas.Input.OnScreenAtlasStick.set_Mirrored
// ============================================================

void Atlas_Input_OnScreenAtlasStick__set_Mirrored(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xb6) = param_2;
  return;
}



// ============================================================
// RVA: 0x14b3b58 | Atlas.Input.OnScreenAtlasStick.SetInteractable
// ============================================================

void Atlas_Input_OnScreenAtlasStick__SetInteractable(long param_1,byte param_2)

{
  if ((param_2 & 1) == 0) {
    /*Atlas.Input.OnScreenAtlasStick$$OnPointerUpInternal*/ func_0x014b3b88(param_1);
  }
  *(byte *)(param_1 + 0xb5) = param_2;
  return;
}



// ============================================================
// RVA: 0x14b3b88 | Atlas.Input.OnScreenAtlasStick.OnPointerUpInternal
// ============================================================

void Atlas_Input_OnScreenAtlasStick__OnPointerUpInternal(long param_1)

{
  if ((bRam0000000003eb4aae & 1) == 0) {
    func_0x00f78a20(0x3d5b2e8);
    bRam0000000003eb4aae = 1;
  }
  if (*(char *)(param_1 + 0xb5) != '\0') {
    /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
    /*UnityEngine.InputSystem.OnScreen.OnScreenControl$$SendValueToControl<Vector2>*/ func_0x018a79a0(param_1,uRam0000000003d5b2e8);
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined1 *)(param_1 + 0xb4) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x14b3bf0 | Atlas.Input.OnScreenAtlasStick.Start
// ============================================================

undefined1  [16] Atlas_Input_OnScreenAtlasStick__Start(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  uint *extraout_x1;
  long lVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  
  if ((bRam0000000003eb4aab & 1) == 0) {
    func_0x00f78a20(0x3d53428);
    func_0x00f78a20(0x3d57a20);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24188);
    bRam0000000003eb4aab = 1;
  }
  lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
  if ((lVar2 == 0) || (lVar2 = /*UnityEngine.GameObject$$GetComponentsInParent<object>*/ func_0x0185d7d8(lVar2,uRam0000000003d57a20), lVar2 == 0))
  goto LAB_014b3e84;
  lVar5 = *(long *)(lVar2 + 0x18);
  if (lVar5 == 0) goto LAB_014b3d14;
  if ((int)lVar5 != 0) {
    lVar2 = *(long *)(lVar2 + ((lVar5 << 0x20) + -0x100000000 >> 0x1d) + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar2,0,0);
    if (iVar1 == 0) {
LAB_014b3d14:
      fVar9 = *(float *)(param_1 + 0x98);
      iVar1 = /*UnityEngine.Screen$$get_width*/ func_0x0325e994(0);
      fVar9 = fVar9 / (float)iVar1;
      *(float *)(param_1 + 0xa0) = fVar9;
      fVar8 = *(float *)(param_1 + 0x54);
      *(float *)(param_1 + 0x6c) = (*(float *)(param_1 + 0x50) * 0.5) / fVar9;
      *(float *)(param_1 + 0x70) = fVar8 / 100.0;
      plVar3 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
      if (plVar3 != (long *)0x0) {
        if (*plVar3 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) goto LAB_014b3e94;
      }
      *(long **)(param_1 + 0x80) = plVar3;
      if (*(long *)(param_1 + 0x40) != 0) {
        uVar4 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_1 + 0x40),0);
        *(undefined8 *)(param_1 + 0x90) = uVar4;
        if (*(long *)(param_1 + 0x38) != 0) {
          lVar2 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_1 + 0x38),0);
          *(long *)(param_1 + 0x88) = lVar2;
          if (lVar2 != 0) {
            /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x50),lVar2,0)
            ;
            plVar3 = *(long **)(param_1 + 0x38);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
              *(float *)(param_1 + 0x74) = fVar8;
              plVar3 = *(long **)(param_1 + 0x40);
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
                *(float *)(param_1 + 0x78) = fVar8;
                uVar6 = 0;
                if (*(char *)(param_1 + 0x60) != '\0') {
                  uVar6 = 0x3f800000;
                }
                *(undefined4 *)(param_1 + 0xac) = uVar6;
                *(undefined4 *)(param_1 + 0xb0) = uVar6;
                plVar3 = *(long **)(param_1 + 0x38);
                if (plVar3 != (long *)0x0) {
                  (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
                  (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
                  plVar3 = *(long **)(param_1 + 0x40);
                  if (plVar3 != (long *)0x0) {
                    (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
                    auVar7 = (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0))
                    ;
                    *(undefined1 *)(param_1 + 0xb4) = 0;
                    return auVar7;
                  }
                }
              }
            }
          }
        }
      }
    }
    else if (lVar2 != 0) {
      lVar2 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar2,uRam0000000003d53428);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar2,0,0);
      if (iVar1 != 0) {
        if (lVar2 == 0) goto LAB_014b3e84;
        *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar2 + 0x24);
      }
      goto LAB_014b3d14;
    }
LAB_014b3e84:
    func_0x00f78af4();
  }
  uVar4 = func_0x00f78b24();
  func_0x00f78ac0(uVar4,0);
LAB_014b3e94:
  func_0x00f78e5c();
  return ZEXT416(*extraout_x1);
}



// ============================================================
// RVA: 0x14b3e98 | Atlas.Input.OnScreenAtlasStick.SetColorApha
// ============================================================

undefined4 Atlas_Input_OnScreenAtlasStick__SetColorApha(undefined8 param_1,undefined4 *param_2)

{
  return *param_2;
}



// ============================================================
// RVA: 0x14b3ea8 | Atlas.Input.OnScreenAtlasStick.OnPointerDown
// ============================================================

/* WARNING: Possible PIC construction at 0x014b40d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b40dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_Input_OnScreenAtlasStick__OnPointerDown
          (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,long param_5,
          long param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  uint uVar6;
  ulong uVar7;
  ulong extraout_d0;
  float fVar5;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb4aac & 1) == 0) {
    func_0x00f78a20(0x3d5b2e8);
    param_1 = func_0x00f78a20(0x3d24190);
    bRam0000000003eb4aac = 1;
  }
  uStack_68 = 0;
  if (*(char *)(param_5 + 0xb5) == '\0') {
    return param_1;
  }
  if (param_6 != 0) {
    uVar3 = *(undefined8 *)(param_5 + 0x80);
    uVar9 = *(undefined4 *)(param_6 + 0xf0);
    fVar10 = *(float *)(param_6 + 0xf4);
    uVar1 = /*UnityEngine.EventSystems.PointerEventData$$get_pressEventCamera*/ func_0x032d9354(param_6,0);
    if (((*(ushort *)(/*UnityEngine.RectTransformUtility_TypeInfo*/ lRam0000000003d24190 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.RectTransformUtility_TypeInfo*/ lRam0000000003d24190 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.RectTransformUtility$$ScreenPointToLocalPointInRectangle*/ func_0x032f6728(uVar9,uVar3,uVar1,&uStack_68,0);
    param_2 = fVar10;
    if ((*(long *)(param_5 + 0x30) != 0) &&
       (lVar2 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_5 + 0x30),0), param_2 = fVar10, lVar2 != 0)) {
      uStack_78 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar2,0);
      fStack_74 = fVar10;
      fStack_70 = param_3;
      uStack_6c = param_4;
      fVar4 = (float)/*UnityEngine.Rect$$get_max*/ func_0x03253534(&uStack_78,0);
      param_2 = fVar10;
      if ((*(long *)(param_5 + 0x30) != 0) &&
         (lVar2 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_5 + 0x30),0), lVar2 != 0)) {
        uStack_78 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar2,0);
        fStack_74 = param_2;
        fStack_70 = param_3;
        uStack_6c = param_4;
        fVar5 = (float)/*UnityEngine.Rect$$get_min*/ func_0x0325351c(&uStack_78,0);
        if (((((float)uStack_68 < fVar5) || (uStack_68._4_4_ < param_2)) ||
            (fVar4 < (float)uStack_68)) || (fVar10 < uStack_68._4_4_)) {
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uStack_68 & 0xffffffff;
          return auVar8;
        }
        fVar11 = *(float *)(param_5 + 0x6c) * *(float *)(param_5 + 0xa0);
        fVar4 = (float)/*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(uStack_68 & 0xffffffff,fVar5 + fVar11,fVar4 - fVar11,0);
        param_3 = (float)/*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(uStack_68._4_4_,param_2 + fVar11,fVar10 - fVar11,0);
        fVar10 = *(float *)(param_6 + 0xf4);
        if ((fVar4 - (float)uStack_68) * (fVar4 - (float)uStack_68) +
            (param_3 - uStack_68._4_4_) * (param_3 - uStack_68._4_4_) < _UNK_033f8490) {
          *(float *)(param_5 + 0xa4) = *(float *)(param_6 + 0xf0);
          *(float *)(param_5 + 0xa8) = fVar10;
          param_2 = uStack_68._4_4_;
          if (*(long *)(param_5 + 0x88) != 0) {
            /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(*(long *)(param_5 + 0x88),0);
            lVar2 = *(long *)(param_5 + 0x90);
            /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
            if (lVar2 != 0) {
              auVar8 = /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(lVar2,0);
              *(undefined4 *)(param_5 + 0xb0) = 0x3f800000;
              *(undefined1 *)(param_5 + 0xb4) = 1;
              return auVar8;
            }
          }
        }
        else {
          param_2 = (param_3 * fVar10) / uStack_68._4_4_;
          *(float *)(param_5 + 0xa4) = (fVar4 * *(float *)(param_6 + 0xf0)) / (float)uStack_68;
          *(float *)(param_5 + 0xa8) = param_2;
          if (*(long *)(param_5 + 0x88) != 0) {
            /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(fVar4,param_3,*(long *)(param_5 + 0x88),0);
            param_2 = (float)((ulong)*(undefined8 *)(param_6 + 0xf0) >> 0x20) -
                      (float)((ulong)*(undefined8 *)(param_5 + 0xa4) >> 0x20);
            param_3 = *(float *)(param_5 + 0x6c);
            fVar10 = (float)/*UnityEngine.Vector2$$ClampMagnitude*/ func_0x0327a7f0(CONCAT44(param_2,(float)*(undefined8 *)(param_6 + 0xf0)
                                                             - (float)*(undefined8 *)
                                                                       (param_5 + 0xa4)),param_2,
                                            param_3,0);
            if (*(long *)(param_5 + 0x90) != 0) {
              /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(fVar10 * *(float *)(param_5 + 0xa0),
                              param_2 * *(float *)(param_5 + 0xa0),*(long *)(param_5 + 0x90),0);
              param_3 = *(float *)(param_5 + 0x70);
              uVar7 = (ulong)(uint)(fVar10 / *(float *)(param_5 + 0x6c));
              param_2 = param_2 / *(float *)(param_5 + 0x6c);
              goto code_r0x014b41a0;
            }
          }
        }
      }
    }
    func_0x00f78af4();
  }
  func_0x00f78a24(0x3d1fcf0);
  uVar1 = func_0x00f78aec();
  uVar3 = func_0x00f78a24(0x3d79180);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar1,uVar3,0);
  uVar3 = func_0x00f78a24(0x3d5b2d8);
  param_5 = func_0x00f78ac0(uVar1,uVar3);
  uVar7 = extraout_d0;
code_r0x014b41a0:
  uVar6 = /*Atlas.Input.OnScreenAtlasStick$$DeadZone*/ func_0x014b4510(uVar7,param_3,param_5);
  /*Atlas.Input.OnScreenAtlasStick$$DeadZone*/ func_0x014b4510(param_2,param_3);
  return ZEXT416(uVar6);
}



// ============================================================
// RVA: 0x14b41a0 | Atlas.Input.OnScreenAtlasStick.DeadZone
// ============================================================

undefined4
Atlas_Input_OnScreenAtlasStick__DeadZone(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = /*Atlas.Input.OnScreenAtlasStick$$DeadZone*/ func_0x014b4510(param_1,param_3);
  /*Atlas.Input.OnScreenAtlasStick$$DeadZone*/ func_0x014b4510(param_2,param_3);
  return uVar1;
}



// ============================================================
// RVA: 0x14b41e8 | Atlas.Input.OnScreenAtlasStick.OnDrag
// ============================================================

void Atlas_Input_OnScreenAtlasStick__OnDrag(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  
  if ((bRam0000000003eb4aad & 1) == 0) {
    func_0x00f78a20(0x3d5b2e8);
    func_0x00f78a20(0x3d24190);
    bRam0000000003eb4aad = 1;
  }
  uStack_60 = 0;
  if (*(char *)(param_1 + 0xb5) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xb4) == '\0') {
    Atlas_Input_OnScreenAtlasStick__OnPointerDown(param_1,param_2);
  }
  if (param_2 != 0) {
    fVar7 = (float)*(undefined8 *)(param_2 + 0xf0) - (float)*(undefined8 *)(param_1 + 0xa4);
    fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0xf0) >> 0x20) -
            (float)((ulong)*(undefined8 *)(param_1 + 0xa4) >> 0x20);
    fStack_54 = fVar8;
    fStack_58 = (float)/*UnityEngine.Vector2$$ClampMagnitude*/ func_0x0327a7f0(CONCAT44(fVar8,fVar7),fVar8,
                                       *(float *)(param_1 + 0x6c) * *(float *)(param_1 + 0x5c),0);
    fVar7 = (float)/*UnityEngine.Vector2$$ClampMagnitude*/ func_0x0327a7f0(CONCAT44(fVar8,fVar7),fVar8,*(undefined4 *)(param_1 + 0x6c),0);
    if ((*(char *)(param_1 + 0x58) != '\0') &&
       (fVar4 = (float)/*UnityEngine.Vector2$$get_magnitude*/ func_0x0327a2b8(&fStack_58,0),
       *(float *)(param_1 + 0x6c) * *(float *)(param_1 + 0x5c) <= fVar4)) {
      fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0xf0) >> 0x20) - fStack_54;
      uVar6 = CONCAT44(fVar4,(float)*(undefined8 *)(param_2 + 0xf0) - fStack_58);
      *(undefined8 *)(param_1 + 0xa4) = uVar6;
      uVar3 = *(undefined8 *)(param_1 + 0x80);
      uVar1 = /*UnityEngine.EventSystems.PointerEventData$$get_pressEventCamera*/ func_0x032d9354(param_2,0);
      if (((*(ushort *)(/*UnityEngine.RectTransformUtility_TypeInfo*/ lRam0000000003d24190 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.RectTransformUtility_TypeInfo*/ lRam0000000003d24190 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.RectTransformUtility$$ScreenPointToLocalPointInRectangle*/ func_0x032f6728(uVar6,fVar4,uVar3,uVar1,&uStack_60,0);
      if (*(long *)(param_1 + 0x88) == 0) goto Atlas_Input_OnScreenAtlasStick__OnPointerUpInternal;
      /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(uStack_60 & 0xffffffff,uStack_60._4_4_,*(long *)(param_1 + 0x88),0);
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      fVar4 = fVar7;
      if (*(char *)(param_1 + 0xb6) != '\0') {
        fVar4 = -fVar7;
      }
      /*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(*(float *)(param_1 + 0xa0) * fVar4,fVar8 * *(float *)(param_1 + 0xa0),
                      *(long *)(param_1 + 0x90),0);
      fVar4 = *(float *)(param_1 + 0x6c);
      uVar9 = *(undefined4 *)(param_1 + 0x70);
      uVar5 = /*Atlas.Input.OnScreenAtlasStick$$DeadZone*/ func_0x014b4510(fVar7 / fVar4,uVar9);
      uVar9 = /*Atlas.Input.OnScreenAtlasStick$$DeadZone*/ func_0x014b4510(fVar8 / fVar4,uVar9);
      /*UnityEngine.InputSystem.OnScreen.OnScreenControl$$SendValueToControl<Vector2>*/ func_0x018a79a0(uVar5,uVar9,param_1,uRam0000000003d5b2e8);
      return;
    }
  }
Atlas_Input_OnScreenAtlasStick__OnPointerUpInternal:
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4aae & 1) == 0) {
    func_0x00f78a20(0x3d5b2e8);
    bRam0000000003eb4aae = 1;
  }
  if (*(char *)(lVar2 + 0xb5) != '\0') {
    /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
    /*UnityEngine.InputSystem.OnScreen.OnScreenControl$$SendValueToControl<Vector2>*/ func_0x018a79a0(lVar2,uRam0000000003d5b2e8);
    *(undefined4 *)(lVar2 + 0xb0) = 0;
    *(undefined1 *)(lVar2 + 0xb4) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x14b43d8 | Atlas.Input.OnScreenAtlasStick.OnPointerUp
// ============================================================

void Atlas_Input_OnScreenAtlasStick__OnPointerUp(long param_1)

{
  if ((bRam0000000003eb4aae & 1) == 0) {
    func_0x00f78a20(0x3d5b2e8);
    bRam0000000003eb4aae = 1;
  }
  if (*(char *)(param_1 + 0xb5) != '\0') {
    /*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
    /*UnityEngine.InputSystem.OnScreen.OnScreenControl$$SendValueToControl<Vector2>*/ func_0x018a79a0(param_1,uRam0000000003d5b2e8);
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined1 *)(param_1 + 0xb4) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x14b43dc | Atlas.Input.OnScreenAtlasStick.FixedUpdate
// ============================================================

long Atlas_Input_OnScreenAtlasStick__FixedUpdate(long param_1)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(param_1 + 0xb0);
  if (*(float *)(param_1 + 0xac) == fVar5) {
    return param_1;
  }
  lVar1 = 0x68;
  if (fVar5 != 0.0) {
    lVar1 = 100;
  }
  fVar6 = *(float *)(param_1 + lVar1);
  if (fVar6 == 0.0) {
    fVar3 = (float)/*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
    fVar3 = 2.0 / fVar3;
  }
  else {
    fVar5 = (float)/*UnityEngine.Mathf$$Sign*/ func_0x0323d304(fVar5 - *(float *)(param_1 + 0xac),0);
    fVar3 = (float)/*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
    fVar3 = fVar6 * fVar5 * fVar3;
  }
  uVar4 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(fVar3 + *(float *)(param_1 + 0xac),0,0x3f800000,0);
  *(undefined4 *)(param_1 + 0xac) = uVar4;
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
    (**(code **)(*plVar2 + 0x2a8))(plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
    plVar2 = *(long **)(param_1 + 0x40);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
                    /* WARNING: Could not recover jumptable at 0x014b44f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(*plVar2 + 0x2a8))(plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
      return lVar1;
    }
  }
  lVar1 = func_0x00f78af4();
  return *(long *)(lVar1 + 0x48);
}



// ============================================================
// RVA: 0x14b4500 | Atlas.Input.OnScreenAtlasStick.get_controlPathInternal
// ============================================================

undefined8 Atlas_Input_OnScreenAtlasStick__get_controlPathInternal(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x14b4508 | Atlas.Input.OnScreenAtlasStick.set_controlPathInternal
// ============================================================

void Atlas_Input_OnScreenAtlasStick__set_controlPathInternal(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}



// ============================================================
// RVA: 0x14b4510 | Atlas.Input.OnScreenAtlasStick.DeadZone
// ============================================================

float Atlas_Input_OnScreenAtlasStick__DeadZone(float param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar1 = (float)/*UnityEngine.Mathf$$Sign*/ func_0x0323d304(0);
  uVar2 = /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(param_2,0x3f800000,ABS(param_1),0);
  fVar3 = (float)/*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(uVar2,0,0x3f800000,0);
  return fVar1 * fVar3;
}



// ============================================================
// RVA: 0x14b456c | Atlas.Input.OnScreenAtlasStick..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Input_OnScreenAtlasStick___ctor(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x50) = _UNK_033f8480;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  uVar1 = _UNK_033f84a0;
  *(undefined8 *)(param_1 + 0x6c) = _UNK_033f84a8;
  *(undefined8 *)(param_1 + 100) = uVar1;
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x74) = uVar1;
  *(undefined8 *)(param_1 + 0x98) = _UNK_033f8488;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return param_1;
}



