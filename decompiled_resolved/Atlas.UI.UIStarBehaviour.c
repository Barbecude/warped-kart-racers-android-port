// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIStarBehaviour

// ============================================================
// RVA: 0x151d784 | Atlas.UI.UIStarBehaviour.PlayAnimation
// ============================================================

long Atlas_UI_UIStarBehaviour__PlayAnimation(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  
  if ((bRam0000000003eb4e02 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d5e770);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e7d8);
    func_0x00f78a20(0x3d5e860);
    bRam0000000003eb4e02 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
  /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar3,param_1,uRam0000000003d5e860);
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar4 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_1 + 0x18),0);
    uVar7 = *(undefined4 *)(param_1 + 0x20);
    uVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar7,uVar7,uVar7,*(undefined4 *)(param_1 + 0x28),uVar4,0);
    uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(param_1 + 0x34),uRam0000000003d5e7a8);
    uVar3 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar3,uVar4,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar4 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_1 + 0x18),0);
      uVar7 = *(undefined4 *)(param_1 + 0x24);
      uVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar7,uVar7,uVar7,*(undefined4 *)(param_1 + 0x28),uVar4,0);
      uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(param_1 + 0x34),uRam0000000003d5e7a8);
      uVar3 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar3,uVar4,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar4 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_1 + 0x18),0);
        uVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(0,0,0,*(undefined4 *)(param_1 + 0x28),uVar4,0);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(param_1 + 0x34),uRam0000000003d5e7a8);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(*(undefined4 *)(param_1 + 0x2c),uVar4,uRam0000000003d5e770);
        lVar5 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar3,uVar4,0);
        iVar2 = *(int *)(param_1 + 0x30);
        if (((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) &&
           (*(char *)(lVar5 + 0x100) == '\0')) {
          iVar1 = iVar2;
          if (iVar2 == 0) {
            iVar1 = 1;
          }
          if (iVar2 < -1) {
            iVar1 = -1;
          }
          *(int *)(lVar5 + 0xa4) = iVar1;
          if (*(int *)(lVar5 + 0x10) == 0) {
            if (iVar1 < 0) {
              fVar8 = INFINITY;
            }
            else {
              fVar8 = *(float *)(lVar5 + 0xa0) * (float)iVar1;
            }
            *(float *)(lVar5 + 0x108) = fVar8;
            return lVar5;
          }
        }
        return lVar5;
      }
    }
  }
  lVar5 = func_0x00f78af4();
  uVar7 = /*UnityEngine.Random$$Range*/ func_0x03252854(0xc1f00000,0);
  if ((*(long *)(lVar5 + 0x18) != 0) &&
     (lVar6 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(lVar5 + 0x18),0), lVar6 != 0)) {
    /*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar6,0);
    /*UnityEngine.Quaternion$$AngleAxis*/ func_0x03251c1c(uVar7,0);
    if ((*(long *)(lVar5 + 0x18) != 0) &&
       (lVar5 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(lVar5 + 0x18),0), lVar5 != 0)) {
      /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(lVar5,0);
      /*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251e58(0);
      if (pcRam0000000003ec1998 == (code *)0x0) {
        pcRam0000000003ec1998 =
             (code *)func_0x00f789d4("UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)"
                                     ,0);
      }
      lVar5 = (*pcRam0000000003ec1998)(lVar5,&stack0xffffffffffffff90);
      return lVar5;
    }
  }
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar5;
}



// ============================================================
// RVA: 0x151d940 | Atlas.UI.UIStarBehaviour.Rotate
// ============================================================

undefined8 Atlas_UI_UIStarBehaviour__Rotate(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = /*UnityEngine.Random$$Range*/ func_0x03252854(0xc1f00000,0);
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_1 + 0x18),0), lVar1 != 0)) {
    /*UnityEngine.Transform$$get_forward*/ func_0x03275810(lVar1,0);
    /*UnityEngine.Quaternion$$AngleAxis*/ func_0x03251c1c(uVar3,0);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar1 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_1 + 0x18),0), lVar1 != 0)) {
      /*UnityEngine.Transform$$get_localRotation*/ func_0x0327553c(lVar1,0);
      /*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251e58(0);
      if (pcRam0000000003ec1998 == (code *)0x0) {
        pcRam0000000003ec1998 =
             (code *)func_0x00f789d4("UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)"
                                     ,0);
      }
      uVar2 = (*pcRam0000000003ec1998)(lVar1,&stack0xffffffffffffffd0);
      return uVar2;
    }
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar2;
}



// ============================================================
// RVA: 0x151da18 | Atlas.UI.UIStarBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_UIStarBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



