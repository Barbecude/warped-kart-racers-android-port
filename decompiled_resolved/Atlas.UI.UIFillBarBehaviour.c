// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIFillBarBehaviour

// ============================================================
// RVA: 0x151a678 | Atlas.UI.UIFillBarBehaviour.get_IsAnimating
// ============================================================

undefined1 Atlas_UI_UIFillBarBehaviour__get_IsAnimating(long param_1)

{
  return *(undefined1 *)(param_1 + 0x44);
}



// ============================================================
// RVA: 0x151a680 | Atlas.UI.UIFillBarBehaviour.SetText
// ============================================================

/* WARNING: Possible PIC construction at 0x0151aa10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151aa14) */
/* WARNING: Removing unreachable block (ram,0x0151aa94) */
/* WARNING: Removing unreachable block (ram,0x0151aa9c) */
/* WARNING: Removing unreachable block (ram,0x0151aaa0) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */

ulong Atlas_UI_UIFillBarBehaviour__SetText
                (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,long param_5
                ,long param_6)

{
  undefined1 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long extraout_x1;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined1 *puVar9;
  undefined *puVar10;
  float extraout_s0;
  float fVar11;
  undefined4 uVar12;
  float extraout_s0_00;
  float extraout_s0_01;
  ulong unaff_d8;
  float fVar13;
  ulong unaff_d9;
  ulong unaff_d10;
  undefined8 unaff_d11;
  
  puVar9 = &stack0xfffffffffffffff0;
  uVar6 = 0x3d23990;
  if ((bRam0000000003eb4de0 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4de0 = 1;
  }
  lVar8 = *(long *)(param_5 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  plVar3 = *(long **)(param_5 + 0x18);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0151a714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 0x558))(plVar3,param_6,*(undefined8 *)(*plVar3 + 0x560));
    return uVar2;
  }
  puVar10 = &Atlas_UI_UIFillBarBehaviour__SetPercentageFill;
  lVar4 = func_0x00f78af4();
  puVar1 = &stack0xffffffffffffffd0;
  fVar11 = extraout_s0;
  while( true ) {
    *(ulong *)(puVar1 + -0x50) = unaff_d9;
    *(ulong *)(puVar1 + -0x48) = unaff_d8;
    *(ulong *)(puVar1 + -0x40) = unaff_x24;
    *(ulong *)(puVar1 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar1 + -0x30) = uVar6;
    *(long *)(puVar1 + -0x28) = lVar8;
    *(long *)(puVar1 + -0x20) = param_5;
    *(long *)(puVar1 + -0x18) = param_6;
    *(undefined1 **)(puVar1 + -0x10) = puVar9;
    *(undefined **)(puVar1 + -8) = puVar10;
    if ((bRam0000000003eb4de1 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4de1 = 1;
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    if (*(long *)(lVar4 + 0x20) == 0) break;
    uVar12 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar4 + 0x20),0);
    *(undefined4 *)(puVar1 + -0x60) = uVar12;
    *(float *)(puVar1 + -0x5c) = param_2;
    *(float *)(puVar1 + -0x58) = param_3;
    *(undefined4 *)(puVar1 + -0x54) = param_4;
    uVar2 = /*UnityEngine.Rect$$get_width*/ func_0x03253564(puVar1 + -0x60,0);
    uVar7 = (ulong)(1.4013e-45 < fVar11 || *(char *)(lVar4 + 0x30) == '\0');
    lVar5 = *(long *)(lVar4 + 0x28);
    if (lVar5 == 0) break;
    if ((int)*(ulong *)(lVar5 + 0x18) < 1) goto code_r0x0151a8a8;
    unaff_x23 = 0;
    param_3 = *(float *)(lVar4 + 0x38);
    param_2 = *(float *)(lVar4 + 0x3c);
    fVar13 = param_3 + ((extraout_s0_00 - param_2) - param_3) * fVar11;
    unaff_x24 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    while (unaff_x23 < *(uint *)(lVar5 + 0x18)) {
      lVar8 = *(long *)(lVar5 + unaff_x23 * 8 + 0x20);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar8,0,0);
      if ((uVar2 & 1) == 0) {
        if ((lVar8 == 0) || (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0), lVar5 == 0)) goto code_r0x0151a8a4;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar5,uVar7,0);
        /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar8,0);
        uVar2 = /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(fVar13,lVar8,0);
      }
      unaff_x23 = unaff_x23 + 1;
      if (unaff_x24 == unaff_x23) goto code_r0x0151a8a8;
      lVar5 = *(long *)(lVar4 + 0x28);
      if (lVar5 == 0) goto code_r0x0151a8a4;
    }
    uVar6 = func_0x00f78b24();
    param_5 = func_0x00f78ac0(uVar6,0);
    *(undefined8 *)(puVar1 + -0xb0) = unaff_d11;
    *(ulong *)(puVar1 + -0xa8) = unaff_d10;
    *(ulong *)(puVar1 + -0xa0) = (ulong)(uint)fVar13;
    *(ulong *)(puVar1 + -0x98) = (ulong)(uint)fVar11;
    *(undefined8 *)(puVar1 + -0x90) = 0x3d23990;
    *(long *)(puVar1 + -0x88) = lVar8;
    *(ulong *)(puVar1 + -0x80) = uVar7;
    *(long *)(puVar1 + -0x78) = lVar4;
    *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x68) = &Atlas_UI_UIFillBarBehaviour__AnimateFillPercentage;
    puVar9 = puVar1 + -0x70;
    unaff_d8 = (ulong)(uint)param_3;
    unaff_d9 = (ulong)(uint)param_2;
    unaff_d10 = (ulong)(uint)extraout_s0_01;
    uVar6 = 0x3d29450;
    if ((bRam0000000003eb4de2 & 1) == 0) {
      func_0x00f78a20(0x3d2da60);
      func_0x00f78a20(0x3d1c0b0);
      func_0x00f78a20(0x3d2db28);
      func_0x00f78a20(0x3d1c100);
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d25428);
      func_0x00f78a20(0x3d5e6d0);
      func_0x00f78a20(0x3d5e738);
      func_0x00f78a20(0x3d5e798);
      func_0x00f78a20(0x3d647e0);
      func_0x00f78a20(0x3d647e8);
      func_0x00f78a20(0x3d647f0);
      func_0x00f78a20(0x3d647f8);
      func_0x00f78a20(0x3d29450);
      bRam0000000003eb4de2 = 1;
    }
    param_6 = func_0x00f78aec(/*Atlas.UI.UIFillBarBehaviour.<>c__DisplayClass13_0_TypeInfo*/ uRam0000000003d29450);
    uVar2 = /*Atlas.UI.UIFillBarBehaviour.<>c__DisplayClass13_0$$.ctor*/ func_0x0156c724(param_6,0);
    if (param_6 == 0) {
      uVar2 = func_0x00f78af4();
      *(undefined8 *)(puVar1 + -0xe0) = 0x3d29450;
      *(long *)(puVar1 + -0xd8) = extraout_x1;
      *(long *)(puVar1 + -0xd0) = param_5;
      *(undefined8 *)(puVar1 + -200) = 0;
      *(undefined1 **)(puVar1 + -0xc0) = puVar9;
      *(undefined **)(puVar1 + -0xb8) = &Atlas_UI_UIFillBarBehaviour___ctor;
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
    *(long *)(param_6 + 0x10) = param_5;
    *(long *)(param_6 + 0x18) = extraout_x1;
    if (*(char *)(param_5 + 0x44) != '\0') {
      return uVar2;
    }
    *(undefined1 *)(param_5 + 0x44) = 1;
    puVar10 = &UNK_0151aa14;
    puVar1 = puVar1 + -0xb0;
    lVar4 = param_5;
    lVar8 = extraout_x1;
    fVar11 = extraout_s0_01;
  }
code_r0x0151a8a4:
  uVar2 = func_0x00f78af4();
code_r0x0151a8a8:
  *(float *)(lVar4 + 0x34) = fVar11;
  return uVar2;
}



// ============================================================
// RVA: 0x151a72c | Atlas.UI.UIFillBarBehaviour.SetPercentageFill
// ============================================================

ulong Atlas_UI_UIFillBarBehaviour__SetPercentageFill
                (float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5
                )

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  float extraout_s0;
  undefined4 extraout_s0_00;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if ((bRam0000000003eb4de1 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4de1 = 1;
  }
  uVar7 = *(undefined8 *)(param_5 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (*(long *)(param_5 + 0x20) != 0) {
    uStack_60 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(param_5 + 0x20),0);
    uStack_5c = param_2;
    uStack_58 = param_3;
    uStack_54 = param_4;
    uVar2 = /*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_60,0);
    cVar1 = *(char *)(param_5 + 0x30);
    lVar5 = *(long *)(param_5 + 0x28);
    if (lVar5 != 0) {
      uVar6 = *(ulong *)(lVar5 + 0x18);
      if ((int)uVar6 < 1) goto LAB_0151a8a8;
      uVar8 = 0;
      fVar10 = *(float *)(param_5 + 0x38);
      fVar9 = *(float *)(param_5 + 0x3c);
      fVar11 = fVar10 + ((extraout_s0 - fVar9) - fVar10) * param_1;
      do {
        if (*(uint *)(lVar5 + 0x18) <= uVar8) {
          uVar7 = func_0x00f78b24();
          lVar5 = func_0x00f78ac0(uVar7,0);
          if ((bRam0000000003eb4de2 & 1) == 0) {
            func_0x00f78a20(0x3d2da60);
            func_0x00f78a20(0x3d1c0b0);
            func_0x00f78a20(0x3d2db28);
            func_0x00f78a20(0x3d1c100);
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25428);
            func_0x00f78a20(0x3d5e6d0);
            func_0x00f78a20(0x3d5e738);
            func_0x00f78a20(0x3d5e798);
            func_0x00f78a20(0x3d647e0);
            func_0x00f78a20(0x3d647e8);
            func_0x00f78a20(0x3d647f0);
            func_0x00f78a20(0x3d647f8);
            func_0x00f78a20(0x3d29450);
            bRam0000000003eb4de2 = 1;
          }
          lVar3 = func_0x00f78aec(/*Atlas.UI.UIFillBarBehaviour.<>c__DisplayClass13_0_TypeInfo*/ uRam0000000003d29450);
          uVar2 = /*Atlas.UI.UIFillBarBehaviour.<>c__DisplayClass13_0$$.ctor*/ func_0x0156c724(lVar3,0);
          if (lVar3 == 0) {
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
          *(long *)(lVar3 + 0x10) = lVar5;
          *(undefined8 *)(lVar3 + 0x18) = extraout_x1;
          if (*(char *)(lVar5 + 0x44) == '\0') {
            *(undefined1 *)(lVar5 + 0x44) = 1;
            Atlas_UI_UIFillBarBehaviour__SetPercentageFill(extraout_s0_00,lVar5);
            *(undefined4 *)(lVar5 + 0x40) = extraout_s0_00;
            uVar7 = func_0x00f78aec(/*DG.Tweening.Core.DOGetter<float>_TypeInfo*/ uRam0000000003d1c0b0);
            /*DG.Tweening.Core.DOGetter<float>$$.ctor*/ func_0x01e19820(uVar7,lVar3,uRam0000000003d647e0,uRam0000000003d2da60);
            uVar4 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
            /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar4,lVar3,uRam0000000003d647e8,uRam0000000003d2db28);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar7 = /*DG.Tweening.DOTween$$To*/ func_0x01693f54(fVar9,fVar10,uVar7,uVar4,0);
            uVar4 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
            /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar4,lVar3,uRam0000000003d647f0,0);
            uVar7 = /*DG.Tweening.TweenSettingsExtensions$$OnUpdate<Tween>*/ func_0x018ee348(uVar7,uVar4,uRam0000000003d5e738);
            uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar7,10,uRam0000000003d5e798);
            uVar7 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
            /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar7,lVar3,uRam0000000003d647f8,0);
            if ((uVar2 != 0) && (*(char *)(uVar2 + 0xe8) != '\0')) {
              *(undefined8 *)(uVar2 + 0x80) = uVar7;
            }
            return uVar2;
          }
          return uVar2;
        }
        lVar5 = *(long *)(lVar5 + uVar8 * 8 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar5,0,0);
        if ((uVar2 & 1) == 0) {
          if ((lVar5 == 0) || (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0), lVar3 == 0)) break;
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,1.4013e-45 < param_1 || cVar1 == '\0',0);
          /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar5,0);
          uVar2 = /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(fVar11,lVar5,0);
        }
        uVar8 = uVar8 + 1;
        if ((uVar6 & 0xffffffff) == uVar8) goto LAB_0151a8a8;
        lVar5 = *(long *)(param_5 + 0x28);
      } while (lVar5 != 0);
    }
  }
  uVar2 = func_0x00f78af4();
LAB_0151a8a8:
  *(float *)(param_5 + 0x34) = param_1;
  return uVar2;
}



// ============================================================
// RVA: 0x151a8d4 | Atlas.UI.UIFillBarBehaviour.AnimateFillPercentage
// ============================================================

long Atlas_UI_UIFillBarBehaviour__AnimateFillPercentage
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000003eb4de2 & 1) == 0) {
    func_0x00f78a20(0x3d2da60);
    func_0x00f78a20(0x3d1c0b0);
    func_0x00f78a20(0x3d2db28);
    func_0x00f78a20(0x3d1c100);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6d0);
    func_0x00f78a20(0x3d5e738);
    func_0x00f78a20(0x3d5e798);
    func_0x00f78a20(0x3d647e0);
    func_0x00f78a20(0x3d647e8);
    func_0x00f78a20(0x3d647f0);
    func_0x00f78a20(0x3d647f8);
    func_0x00f78a20(0x3d29450);
    bRam0000000003eb4de2 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.UIFillBarBehaviour.<>c__DisplayClass13_0_TypeInfo*/ uRam0000000003d29450);
  lVar2 = /*Atlas.UI.UIFillBarBehaviour.<>c__DisplayClass13_0$$.ctor*/ func_0x0156c724(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_4;
    *(undefined8 *)(lVar1 + 0x18) = param_5;
    if (*(char *)(param_4 + 0x44) != '\0') {
      return lVar2;
    }
    *(undefined1 *)(param_4 + 0x44) = 1;
    Atlas_UI_UIFillBarBehaviour__SetPercentageFill(param_1,param_4);
    *(undefined4 *)(param_4 + 0x40) = param_1;
    uVar3 = func_0x00f78aec(/*DG.Tweening.Core.DOGetter<float>_TypeInfo*/ uRam0000000003d1c0b0);
    /*DG.Tweening.Core.DOGetter<float>$$.ctor*/ func_0x01e19820(uVar3,lVar1,uRam0000000003d647e0,uRam0000000003d2da60);
    uVar4 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
    /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar4,lVar1,uRam0000000003d647e8,uRam0000000003d2db28);
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*DG.Tweening.DOTween$$To*/ func_0x01693f54(param_2,param_3,uVar3,uVar4,0);
    uVar4 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar4,lVar1,uRam0000000003d647f0,0);
    uVar3 = /*DG.Tweening.TweenSettingsExtensions$$OnUpdate<Tween>*/ func_0x018ee348(uVar3,uVar4,uRam0000000003d5e738);
    lVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar3,10,uRam0000000003d5e798);
    uVar3 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar3,lVar1,uRam0000000003d647f8,0);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) {
      *(undefined8 *)(lVar2 + 0x80) = uVar3;
    }
    return lVar2;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar1;
}



// ============================================================
// RVA: 0x151ab6c | Atlas.UI.UIFillBarBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_UIFillBarBehaviour___ctor(ulong param_1)

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



