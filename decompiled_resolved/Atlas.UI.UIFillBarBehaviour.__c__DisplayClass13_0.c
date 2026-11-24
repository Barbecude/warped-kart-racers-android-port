// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIFillBarBehaviour.<>c__DisplayClass13_0

// ============================================================
// RVA: 0x156c724 | Atlas.UI.UIFillBarBehaviour.<>c__DisplayClass13_0..ctor
// ============================================================

void Atlas_UI_UIFillBarBehaviour___c__DisplayClass13_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x156c72c | Atlas.UI.UIFillBarBehaviour.<>c__DisplayClass13_0.<AnimateFillPercentage>b__0
// ============================================================

ulong Atlas_UI_UIFillBarBehaviour___c__DisplayClass13_0___AnimateFillPercentage_b__0(ulong param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  long lVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long unaff_x21;
  code *pcVar18;
  ulong uVar19;
  code **ppcVar20;
  float extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return param_1;
  }
  uVar5 = func_0x00f78af4();
  puStack_30 = (undefined1 *)&puStack_20;
  puStack_18 = &Atlas_UI_UIFillBarBehaviour___c__DisplayClass13_0___AnimateFillPercentage_b__1;
  if (*(long *)(uVar5 + 0x10) != 0) {
    *(undefined4 *)(*(long *)(uVar5 + 0x10) + 0x40) = extraout_s0_01;
    return uVar5;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  lVar6 = func_0x00f78af4();
  puStack_28 = &Atlas_UI_UIFillBarBehaviour___c__DisplayClass13_0___AnimateFillPercentage_b__2;
  lVar6 = *(long *)(lVar6 + 0x10);
  if (lVar6 != 0) {
    fVar21 = *(float *)(lVar6 + 0x40);
    puStack_30 = (undefined1 *)&puStack_20;
    if ((bRam0000000003eb4de1 & 1) == 0) {
      puStack_30 = (undefined1 *)&puStack_20;
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003eb4de1 = 1;
    }
    uVar16 = *(undefined8 *)(lVar6 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,0,0);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (*(long *)(lVar6 + 0x20) != 0) {
      /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar6 + 0x20),0);
      uVar5 = /*UnityEngine.Rect$$get_width*/ func_0x03253564(&stack0xffffffffffffff80,0);
      uVar17 = (ulong)(1.4013e-45 < fVar21 || *(char *)(lVar6 + 0x30) == '\0');
      lVar12 = *(long *)(lVar6 + 0x28);
      if (lVar12 != 0) {
        uVar15 = *(ulong *)(lVar12 + 0x18);
        if ((int)uVar15 < 1) goto LAB_0151a8a8;
        uVar19 = 0;
        fVar23 = *(float *)(lVar6 + 0x38);
        fVar22 = *(float *)(lVar6 + 0x3c);
        fVar24 = fVar23 + ((extraout_s0 - fVar22) - fVar23) * fVar21;
        do {
          if (*(uint *)(lVar12 + 0x18) <= uVar19) {
            uVar16 = func_0x00f78b24();
            lVar12 = func_0x00f78ac0(uVar16,0);
            uStack_b0 = 0x3d23990;
            pcStack_88 = Atlas_UI_UIFillBarBehaviour__AnimateFillPercentage;
            uStack_b8 = (ulong)(uint)fVar21;
            lStack_a8 = unaff_x21;
            uStack_a0 = uVar17;
            lStack_98 = lVar6;
            ppuStack_90 = &puStack_30;
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
            lVar6 = func_0x00f78aec(/*Atlas.UI.UIFillBarBehaviour.<>c__DisplayClass13_0_TypeInfo*/ uRam0000000003d29450);
            uVar5 = Atlas_UI_UIFillBarBehaviour___c__DisplayClass13_0___ctor(lVar6,0);
            if (lVar6 == 0) {
              uVar5 = func_0x00f78af4();
              if ((bRam0000000003ebf1b8 & 1) == 0) {
                func_0x00f78a20(0x3d23990,0);
                bRam0000000003ebf1b8 = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              return uVar5;
            }
            *(long *)(lVar6 + 0x10) = lVar12;
            *(undefined8 *)(lVar6 + 0x18) = extraout_x1;
            if (*(char *)(lVar12 + 0x44) == '\0') {
              *(undefined1 *)(lVar12 + 0x44) = 1;
              Atlas_UI_UIFillBarBehaviour__SetPercentageFill(extraout_s0_00,lVar12);
              *(undefined4 *)(lVar12 + 0x40) = extraout_s0_00;
              uVar16 = func_0x00f78aec(/*DG.Tweening.Core.DOGetter<float>_TypeInfo*/ uRam0000000003d1c0b0);
              /*DG.Tweening.Core.DOGetter<float>$$.ctor*/ func_0x01e19820(uVar16,lVar6,uRam0000000003d647e0,uRam0000000003d2da60);
              uVar4 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
              /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar4,lVar6,uRam0000000003d647e8,uRam0000000003d2db28);
              if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar16 = /*DG.Tweening.DOTween$$To*/ func_0x01693f54(fVar22,fVar23,uVar16,uVar4,0);
              uVar4 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
              /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar4,lVar6,uRam0000000003d647f0,0);
              uVar16 = /*DG.Tweening.TweenSettingsExtensions$$OnUpdate<Tween>*/ func_0x018ee348(uVar16,uVar4,uRam0000000003d5e738);
              uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar16,10,uRam0000000003d5e798);
              uVar16 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
              /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar16,lVar6,uRam0000000003d647f8,0);
              if ((uVar5 != 0) && (*(char *)(uVar5 + 0xe8) != '\0')) {
                *(undefined8 *)(uVar5 + 0x80) = uVar16;
              }
              return uVar5;
            }
            return uVar5;
          }
          unaff_x21 = *(long *)(lVar12 + uVar19 * 8 + 0x20);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x21,0,0);
          if ((uVar5 & 1) == 0) {
            if ((unaff_x21 == 0) || (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x21,0), lVar12 == 0)) break;
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar12,uVar17,0);
            /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(unaff_x21,0);
            uVar5 = /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(fVar24,unaff_x21,0);
          }
          uVar19 = uVar19 + 1;
          if ((uVar15 & 0xffffffff) == uVar19) goto LAB_0151a8a8;
          lVar12 = *(long *)(lVar6 + 0x28);
        } while (lVar12 != 0);
      }
    }
    uVar5 = func_0x00f78af4();
LAB_0151a8a8:
    *(float *)(lVar6 + 0x34) = fVar21;
    return uVar5;
  }
  lVar6 = func_0x00f78af4();
  if (*(long *)(lVar6 + 0x10) != 0) {
    *(undefined1 *)(*(long *)(lVar6 + 0x10) + 0x44) = 0;
    pcVar7 = *(code **)(lVar6 + 0x18);
    if (pcVar7 == (code *)0x0) {
      return 0;
    }
    uVar16 = 0;
    pcStack_88 = pcVar7;
    lVar6 = *(long *)(pcVar7 + 0x68);
    if (lVar6 == 0) {
      ppcVar20 = &pcStack_88;
      lVar12 = 1;
    }
    else {
      lVar12 = *(long *)(lVar6 + 0x18);
      if (lVar12 == 0) {
        return (ulong)pcVar7;
      }
      ppcVar20 = (code **)(lVar6 + 0x20);
    }
    lVar6 = 0;
    do {
      pcVar13 = ppcVar20[lVar6];
      pcVar18 = *(code **)(pcVar13 + 0x10);
      plVar9 = *(long **)(pcVar13 + 0x20);
      lVar10 = *(long *)(pcVar13 + 0x28);
      if (*(short *)(lVar10 + 0x48) == -1) {
        func_0x00f78ad8(lVar10,uVar16);
      }
      iVar2 = func_0x00f78a4c(lVar10);
      if (iVar2 == 0) {
        if ((((plVar9 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
            ((*(byte *)(*plVar9 + 0x115) & 1) != 0)) || (*(long *)(pcVar7 + 0x18) == 0))
        goto code_r0x03277d68;
        iVar2 = func_0x00f78a44(lVar10);
        iVar3 = func_0x00f78ec0(lVar10);
        if (iVar2 == 0) {
          uVar1 = *(ushort *)(lVar10 + 0x48);
          if (iVar3 == 0) {
            lVar10 = *plVar9 + (ulong)uVar1 * 0x10;
            auVar25 = (**(code **)(lVar10 + 0x138))(plVar9,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x03277d74;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar14 = *plVar9;
          uVar5 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar10) {
                puVar11 = (undefined8 *)(lVar14 + (long)(int)(*piVar8 + (uint)uVar1) * 0x10 + 0x138)
                ;
                goto code_r0x03277e38;
              }
              piVar8 = piVar8 + 4;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar9,lVar10,(ulong)uVar1);
code_r0x03277e38:
          pcVar13 = (code *)*puVar11;
          puVar11 = (undefined8 *)puVar11[1];
        }
        else {
          if (iVar3 == 0) {
            uVar16 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar9;
            uVar5 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar5 != 0) {
              piVar8 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x03277e10;
                }
                piVar8 = piVar8 + 4;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar9);
code_r0x03277e10:
            uVar16 = *(undefined8 *)(lVar14 + 8);
          }
          puVar11 = (undefined8 *)func_0x00f78acc(uVar16,lVar10);
          pcVar13 = (code *)*puVar11;
        }
        auVar25 = (*pcVar13)(plVar9,puVar11);
      }
      else if (*(char *)(lVar10 + 0x4a) == '\0') {
        auVar25 = (*pcVar18)(lVar10);
      }
      else {
code_r0x03277d68:
        auVar25 = (*pcVar18)(plVar9,lVar10);
      }
code_r0x03277d74:
      uVar16 = auVar25._8_8_;
      lVar6 = lVar6 + 1;
      if (lVar6 == lVar12) {
        return auVar25._0_8_;
      }
    } while( true );
  }
  piVar8 = (int *)func_0x00f78af4();
  if ((bRam0000000003eb500f & 1) == 0) {
    func_0x00f78a20(0x3d521b8);
    func_0x00f78a20(0x3d2c9f8);
    func_0x00f78a20(0x3d2ca00);
    func_0x00f78a20(0x3d41510);
    bRam0000000003eb500f = 1;
  }
  uStack_a0 = 0;
  lStack_98 = 0;
  ppuStack_90 = (undefined1 **)0x0;
  lVar6 = *(long *)(piVar8 + 10);
  if (*piVar8 == 0) {
    piVar8[0xe] = 0;
    piVar8[0xf] = 0;
    piVar8[0x10] = 0;
    piVar8[0x11] = 0;
    piVar8[0xc] = 0;
    piVar8[0xd] = 0;
    *piVar8 = -1;
  }
  else {
    if (lVar6 == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    if (*(long *)(lVar6 + 0x40) == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    lVar12 = *(long *)(*(long *)(lVar6 + 0x40) + 0x28);
    if (lVar12 == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    plVar9 = *(long **)(lVar12 + 0x30);
    if (plVar9 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    uVar5 = (**(code **)(*plVar9 + 0x848))(plVar9,*(undefined8 *)(*plVar9 + 0x850));
    if ((uVar5 & 1) == 0) goto code_r0x0156c96c;
    if (*(long *)(lVar6 + 0x40) == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    lVar12 = *(long *)(*(long *)(lVar6 + 0x40) + 0x28);
    if (lVar12 == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    plVar9 = *(long **)(lVar12 + 0x30);
    if (plVar9 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    (**(code **)(*plVar9 + 0x7d8))(&uStack_b8,plVar9,*(undefined8 *)(*plVar9 + 0x7e0));
    lStack_98 = uStack_b0;
    uStack_a0 = uStack_b8;
    ppuStack_90 = (undefined1 **)lStack_a8;
    /*UniRx.Async.UniTask<Group>$$GetAwaiter*/ func_0x01b773d0(&uStack_b8,&uStack_a0,uRam0000000003d41510);
    uVar5 = /*UniRx.Async.UniTask.Awaiter<Group>$$get_IsCompleted*/ func_0x01cf4f60(&stack0xffffffffffffff80,uRam0000000003d2ca00);
    if ((uVar5 & 1) == 0) {
      *piVar8 = 0;
      *(undefined8 *)(piVar8 + 0xe) = uStack_b0;
      *(ulong *)(piVar8 + 0xc) = uStack_b8;
      *(long *)(piVar8 + 0x10) = lStack_a8;
      uVar5 = /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter<Group>, UIGroupCodeBehaviour.<TrySetGroupCode>d__12>*/ func_0x01829b78(piVar8 + 2,&stack0xffffffffffffff80,piVar8,uRam0000000003d521b8);
      return uVar5;
    }
  }
  auVar25 = /*UniRx.Async.UniTask.Awaiter<Group>$$GetResult*/ func_0x01cf5044(&stack0xffffffffffffff80,uRam0000000003d2c9f8);
  if (lVar6 != 0) {
    /*Atlas.UI.UIGroupCodeBehaviour$$SetCode*/ func_0x0151b274(lVar6,auVar25._0_8_,auVar25._8_8_,0);
code_r0x0156c96c:
    *piVar8 = -2;
    uVar5 = /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$SetResult*/ func_0x02934048(piVar8 + 2,0);
    return uVar5;
  }
  func_0x00f78af4();
code_r0x0156ca7c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x156ca80);
  (*pcVar7)();
}



// ============================================================
// RVA: 0x156c74c | Atlas.UI.UIFillBarBehaviour.<>c__DisplayClass13_0.<AnimateFillPercentage>b__1
// ============================================================

ulong Atlas_UI_UIFillBarBehaviour___c__DisplayClass13_0___AnimateFillPercentage_b__1
                (undefined4 param_1,ulong param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  long lVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long unaff_x21;
  code *pcVar18;
  ulong uVar19;
  code **ppcVar20;
  float extraout_s0;
  undefined4 extraout_s0_00;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  code *pcStack_78;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x40) = param_1;
    return param_2;
  }
  lVar6 = func_0x00f78af4();
  puStack_18 = &Atlas_UI_UIFillBarBehaviour___c__DisplayClass13_0___AnimateFillPercentage_b__2;
  lVar6 = *(long *)(lVar6 + 0x10);
  if (lVar6 != 0) {
    fVar21 = *(float *)(lVar6 + 0x40);
    puStack_20 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4de1 & 1) == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003eb4de1 = 1;
    }
    uVar16 = *(undefined8 *)(lVar6 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,0,0);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(long *)(lVar6 + 0x20) != 0) {
      /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar6 + 0x20),0);
      uVar4 = /*UnityEngine.Rect$$get_width*/ func_0x03253564(&stack0xffffffffffffff90,0);
      uVar17 = (ulong)(1.4013e-45 < fVar21 || *(char *)(lVar6 + 0x30) == '\0');
      lVar12 = *(long *)(lVar6 + 0x28);
      if (lVar12 != 0) {
        uVar15 = *(ulong *)(lVar12 + 0x18);
        if ((int)uVar15 < 1) goto LAB_0151a8a8;
        uVar19 = 0;
        fVar23 = *(float *)(lVar6 + 0x38);
        fVar22 = *(float *)(lVar6 + 0x3c);
        fVar24 = fVar23 + ((extraout_s0 - fVar22) - fVar23) * fVar21;
        do {
          if (*(uint *)(lVar12 + 0x18) <= uVar19) {
            uVar16 = func_0x00f78b24();
            lVar12 = func_0x00f78ac0(uVar16,0);
            uStack_a0 = 0x3d23990;
            pcStack_78 = Atlas_UI_UIFillBarBehaviour__AnimateFillPercentage;
            uStack_a8 = (ulong)(uint)fVar21;
            lStack_98 = unaff_x21;
            uStack_90 = uVar17;
            lStack_88 = lVar6;
            ppuStack_80 = &puStack_20;
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
            lVar6 = func_0x00f78aec(/*Atlas.UI.UIFillBarBehaviour.<>c__DisplayClass13_0_TypeInfo*/ uRam0000000003d29450);
            uVar4 = Atlas_UI_UIFillBarBehaviour___c__DisplayClass13_0___ctor(lVar6,0);
            if (lVar6 == 0) {
              uVar4 = func_0x00f78af4();
              if ((bRam0000000003ebf1b8 & 1) == 0) {
                func_0x00f78a20(0x3d23990,0);
                bRam0000000003ebf1b8 = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              return uVar4;
            }
            *(long *)(lVar6 + 0x10) = lVar12;
            *(undefined8 *)(lVar6 + 0x18) = extraout_x1;
            if (*(char *)(lVar12 + 0x44) == '\0') {
              *(undefined1 *)(lVar12 + 0x44) = 1;
              Atlas_UI_UIFillBarBehaviour__SetPercentageFill(extraout_s0_00,lVar12);
              *(undefined4 *)(lVar12 + 0x40) = extraout_s0_00;
              uVar16 = func_0x00f78aec(/*DG.Tweening.Core.DOGetter<float>_TypeInfo*/ uRam0000000003d1c0b0);
              /*DG.Tweening.Core.DOGetter<float>$$.ctor*/ func_0x01e19820(uVar16,lVar6,uRam0000000003d647e0,uRam0000000003d2da60);
              uVar5 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
              /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar5,lVar6,uRam0000000003d647e8,uRam0000000003d2db28);
              if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar16 = /*DG.Tweening.DOTween$$To*/ func_0x01693f54(fVar22,fVar23,uVar16,uVar5,0);
              uVar5 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
              /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar5,lVar6,uRam0000000003d647f0,0);
              uVar16 = /*DG.Tweening.TweenSettingsExtensions$$OnUpdate<Tween>*/ func_0x018ee348(uVar16,uVar5,uRam0000000003d5e738);
              uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar16,10,uRam0000000003d5e798);
              uVar16 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
              /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar16,lVar6,uRam0000000003d647f8,0);
              if ((uVar4 != 0) && (*(char *)(uVar4 + 0xe8) != '\0')) {
                *(undefined8 *)(uVar4 + 0x80) = uVar16;
              }
              return uVar4;
            }
            return uVar4;
          }
          unaff_x21 = *(long *)(lVar12 + uVar19 * 8 + 0x20);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x21,0,0);
          if ((uVar4 & 1) == 0) {
            if ((unaff_x21 == 0) || (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x21,0), lVar12 == 0)) break;
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar12,uVar17,0);
            /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(unaff_x21,0);
            uVar4 = /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(fVar24,unaff_x21,0);
          }
          uVar19 = uVar19 + 1;
          if ((uVar15 & 0xffffffff) == uVar19) goto LAB_0151a8a8;
          lVar12 = *(long *)(lVar6 + 0x28);
        } while (lVar12 != 0);
      }
    }
    uVar4 = func_0x00f78af4();
LAB_0151a8a8:
    *(float *)(lVar6 + 0x34) = fVar21;
    return uVar4;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  lVar6 = func_0x00f78af4();
  if (*(long *)(lVar6 + 0x10) != 0) {
    *(undefined1 *)(*(long *)(lVar6 + 0x10) + 0x44) = 0;
    pcVar7 = *(code **)(lVar6 + 0x18);
    if (pcVar7 == (code *)0x0) {
      return 0;
    }
    uVar16 = 0;
    pcStack_78 = pcVar7;
    lVar6 = *(long *)(pcVar7 + 0x68);
    if (lVar6 == 0) {
      ppcVar20 = &pcStack_78;
      lVar12 = 1;
    }
    else {
      lVar12 = *(long *)(lVar6 + 0x18);
      if (lVar12 == 0) {
        return (ulong)pcVar7;
      }
      ppcVar20 = (code **)(lVar6 + 0x20);
    }
    lVar6 = 0;
    do {
      pcVar13 = ppcVar20[lVar6];
      pcVar18 = *(code **)(pcVar13 + 0x10);
      plVar9 = *(long **)(pcVar13 + 0x20);
      lVar10 = *(long *)(pcVar13 + 0x28);
      if (*(short *)(lVar10 + 0x48) == -1) {
        func_0x00f78ad8(lVar10,uVar16);
      }
      iVar2 = func_0x00f78a4c(lVar10);
      if (iVar2 == 0) {
        if ((((plVar9 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
            ((*(byte *)(*plVar9 + 0x115) & 1) != 0)) || (*(long *)(pcVar7 + 0x18) == 0))
        goto code_r0x03277d68;
        iVar2 = func_0x00f78a44(lVar10);
        iVar3 = func_0x00f78ec0(lVar10);
        if (iVar2 == 0) {
          uVar1 = *(ushort *)(lVar10 + 0x48);
          if (iVar3 == 0) {
            lVar10 = *plVar9 + (ulong)uVar1 * 0x10;
            auVar25 = (**(code **)(lVar10 + 0x138))(plVar9,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x03277d74;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar14 = *plVar9;
          uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar10) {
                puVar11 = (undefined8 *)(lVar14 + (long)(int)(*piVar8 + (uint)uVar1) * 0x10 + 0x138)
                ;
                goto code_r0x03277e38;
              }
              piVar8 = piVar8 + 4;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar9,lVar10,(ulong)uVar1);
code_r0x03277e38:
          pcVar13 = (code *)*puVar11;
          puVar11 = (undefined8 *)puVar11[1];
        }
        else {
          if (iVar3 == 0) {
            uVar16 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar9;
            uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x03277e10;
                }
                piVar8 = piVar8 + 4;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar9);
code_r0x03277e10:
            uVar16 = *(undefined8 *)(lVar14 + 8);
          }
          puVar11 = (undefined8 *)func_0x00f78acc(uVar16,lVar10);
          pcVar13 = (code *)*puVar11;
        }
        auVar25 = (*pcVar13)(plVar9,puVar11);
      }
      else if (*(char *)(lVar10 + 0x4a) == '\0') {
        auVar25 = (*pcVar18)(lVar10);
      }
      else {
code_r0x03277d68:
        auVar25 = (*pcVar18)(plVar9,lVar10);
      }
code_r0x03277d74:
      uVar16 = auVar25._8_8_;
      lVar6 = lVar6 + 1;
      if (lVar6 == lVar12) {
        return auVar25._0_8_;
      }
    } while( true );
  }
  piVar8 = (int *)func_0x00f78af4();
  if ((bRam0000000003eb500f & 1) == 0) {
    func_0x00f78a20(0x3d521b8);
    func_0x00f78a20(0x3d2c9f8);
    func_0x00f78a20(0x3d2ca00);
    func_0x00f78a20(0x3d41510);
    bRam0000000003eb500f = 1;
  }
  uStack_90 = 0;
  lStack_88 = 0;
  ppuStack_80 = (undefined1 **)0x0;
  lVar6 = *(long *)(piVar8 + 10);
  if (*piVar8 == 0) {
    piVar8[0xe] = 0;
    piVar8[0xf] = 0;
    piVar8[0x10] = 0;
    piVar8[0x11] = 0;
    piVar8[0xc] = 0;
    piVar8[0xd] = 0;
    *piVar8 = -1;
  }
  else {
    if (lVar6 == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    if (*(long *)(lVar6 + 0x40) == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    lVar12 = *(long *)(*(long *)(lVar6 + 0x40) + 0x28);
    if (lVar12 == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    plVar9 = *(long **)(lVar12 + 0x30);
    if (plVar9 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    uVar4 = (**(code **)(*plVar9 + 0x848))(plVar9,*(undefined8 *)(*plVar9 + 0x850));
    if ((uVar4 & 1) == 0) goto code_r0x0156c96c;
    if (*(long *)(lVar6 + 0x40) == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    lVar12 = *(long *)(*(long *)(lVar6 + 0x40) + 0x28);
    if (lVar12 == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    plVar9 = *(long **)(lVar12 + 0x30);
    if (plVar9 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    (**(code **)(*plVar9 + 0x7d8))(&uStack_a8,plVar9,*(undefined8 *)(*plVar9 + 0x7e0));
    lStack_88 = uStack_a0;
    uStack_90 = uStack_a8;
    ppuStack_80 = (undefined1 **)lStack_98;
    /*UniRx.Async.UniTask<Group>$$GetAwaiter*/ func_0x01b773d0(&uStack_a8,&uStack_90,uRam0000000003d41510);
    uVar4 = /*UniRx.Async.UniTask.Awaiter<Group>$$get_IsCompleted*/ func_0x01cf4f60(&stack0xffffffffffffff90,uRam0000000003d2ca00);
    if ((uVar4 & 1) == 0) {
      *piVar8 = 0;
      *(undefined8 *)(piVar8 + 0xe) = uStack_a0;
      *(ulong *)(piVar8 + 0xc) = uStack_a8;
      *(long *)(piVar8 + 0x10) = lStack_98;
      uVar4 = /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter<Group>, UIGroupCodeBehaviour.<TrySetGroupCode>d__12>*/ func_0x01829b78(piVar8 + 2,&stack0xffffffffffffff90,piVar8,uRam0000000003d521b8);
      return uVar4;
    }
  }
  auVar25 = /*UniRx.Async.UniTask.Awaiter<Group>$$GetResult*/ func_0x01cf5044(&stack0xffffffffffffff90,uRam0000000003d2c9f8);
  if (lVar6 != 0) {
    /*Atlas.UI.UIGroupCodeBehaviour$$SetCode*/ func_0x0151b274(lVar6,auVar25._0_8_,auVar25._8_8_,0);
code_r0x0156c96c:
    *piVar8 = -2;
    uVar4 = /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$SetResult*/ func_0x02934048(piVar8 + 2,0);
    return uVar4;
  }
  func_0x00f78af4();
code_r0x0156ca7c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x156ca80);
  (*pcVar7)();
}



// ============================================================
// RVA: 0x156c76c | Atlas.UI.UIFillBarBehaviour.<>c__DisplayClass13_0.<AnimateFillPercentage>b__2
// ============================================================

ulong Atlas_UI_UIFillBarBehaviour___c__DisplayClass13_0___AnimateFillPercentage_b__2(long param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  long lVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long unaff_x21;
  code *pcVar18;
  ulong uVar19;
  code **ppcVar20;
  float extraout_s0;
  undefined4 extraout_s0_00;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  ulong uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    fVar21 = *(float *)(lVar6 + 0x40);
    if ((bRam0000000003eb4de1 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003eb4de1 = 1;
    }
    uVar16 = *(undefined8 *)(lVar6 + 0x20);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,0,0);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (*(long *)(lVar6 + 0x20) != 0) {
      /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(*(long *)(lVar6 + 0x20),0);
      uVar4 = /*UnityEngine.Rect$$get_width*/ func_0x03253564(&stack0xffffffffffffffa0,0);
      uVar17 = (ulong)(1.4013e-45 < fVar21 || *(char *)(lVar6 + 0x30) == '\0');
      lVar12 = *(long *)(lVar6 + 0x28);
      if (lVar12 != 0) {
        uVar15 = *(ulong *)(lVar12 + 0x18);
        if ((int)uVar15 < 1) goto LAB_0151a8a8;
        uVar19 = 0;
        fVar23 = *(float *)(lVar6 + 0x38);
        fVar22 = *(float *)(lVar6 + 0x3c);
        fVar24 = fVar23 + ((extraout_s0 - fVar22) - fVar23) * fVar21;
        do {
          if (*(uint *)(lVar12 + 0x18) <= uVar19) {
            uVar16 = func_0x00f78b24();
            lVar12 = func_0x00f78ac0(uVar16,0);
            uStack_90 = 0x3d23990;
            pcStack_68 = Atlas_UI_UIFillBarBehaviour__AnimateFillPercentage;
            uStack_98 = (ulong)(uint)fVar21;
            lStack_88 = unaff_x21;
            uStack_80 = uVar17;
            lStack_78 = lVar6;
            puStack_70 = &stack0xfffffffffffffff0;
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
            lVar6 = func_0x00f78aec(/*Atlas.UI.UIFillBarBehaviour.<>c__DisplayClass13_0_TypeInfo*/ uRam0000000003d29450);
            uVar4 = Atlas_UI_UIFillBarBehaviour___c__DisplayClass13_0___ctor(lVar6,0);
            if (lVar6 == 0) {
              uVar4 = func_0x00f78af4();
              if ((bRam0000000003ebf1b8 & 1) == 0) {
                func_0x00f78a20(0x3d23990,0);
                bRam0000000003ebf1b8 = 1;
              }
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              return uVar4;
            }
            *(long *)(lVar6 + 0x10) = lVar12;
            *(undefined8 *)(lVar6 + 0x18) = extraout_x1;
            if (*(char *)(lVar12 + 0x44) == '\0') {
              *(undefined1 *)(lVar12 + 0x44) = 1;
              Atlas_UI_UIFillBarBehaviour__SetPercentageFill(extraout_s0_00,lVar12);
              *(undefined4 *)(lVar12 + 0x40) = extraout_s0_00;
              uVar16 = func_0x00f78aec(/*DG.Tweening.Core.DOGetter<float>_TypeInfo*/ uRam0000000003d1c0b0);
              /*DG.Tweening.Core.DOGetter<float>$$.ctor*/ func_0x01e19820(uVar16,lVar6,uRam0000000003d647e0,uRam0000000003d2da60);
              uVar5 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
              /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar5,lVar6,uRam0000000003d647e8,uRam0000000003d2db28);
              if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar16 = /*DG.Tweening.DOTween$$To*/ func_0x01693f54(fVar22,fVar23,uVar16,uVar5,0);
              uVar5 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
              /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar5,lVar6,uRam0000000003d647f0,0);
              uVar16 = /*DG.Tweening.TweenSettingsExtensions$$OnUpdate<Tween>*/ func_0x018ee348(uVar16,uVar5,uRam0000000003d5e738);
              uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar16,10,uRam0000000003d5e798);
              uVar16 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
              /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar16,lVar6,uRam0000000003d647f8,0);
              if ((uVar4 != 0) && (*(char *)(uVar4 + 0xe8) != '\0')) {
                *(undefined8 *)(uVar4 + 0x80) = uVar16;
              }
              return uVar4;
            }
            return uVar4;
          }
          unaff_x21 = *(long *)(lVar12 + uVar19 * 8 + 0x20);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x21,0,0);
          if ((uVar4 & 1) == 0) {
            if ((unaff_x21 == 0) || (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x21,0), lVar12 == 0)) break;
            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar12,uVar17,0);
            /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(unaff_x21,0);
            uVar4 = /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(fVar24,unaff_x21,0);
          }
          uVar19 = uVar19 + 1;
          if ((uVar15 & 0xffffffff) == uVar19) goto LAB_0151a8a8;
          lVar12 = *(long *)(lVar6 + 0x28);
        } while (lVar12 != 0);
      }
    }
    uVar4 = func_0x00f78af4();
LAB_0151a8a8:
    *(float *)(lVar6 + 0x34) = fVar21;
    return uVar4;
  }
  lVar6 = func_0x00f78af4();
  if (*(long *)(lVar6 + 0x10) != 0) {
    *(undefined1 *)(*(long *)(lVar6 + 0x10) + 0x44) = 0;
    pcVar7 = *(code **)(lVar6 + 0x18);
    if (pcVar7 == (code *)0x0) {
      return 0;
    }
    uVar16 = 0;
    pcStack_68 = pcVar7;
    lVar6 = *(long *)(pcVar7 + 0x68);
    if (lVar6 == 0) {
      ppcVar20 = &pcStack_68;
      lVar12 = 1;
    }
    else {
      lVar12 = *(long *)(lVar6 + 0x18);
      if (lVar12 == 0) {
        return (ulong)pcVar7;
      }
      ppcVar20 = (code **)(lVar6 + 0x20);
    }
    lVar6 = 0;
    do {
      pcVar13 = ppcVar20[lVar6];
      pcVar18 = *(code **)(pcVar13 + 0x10);
      plVar9 = *(long **)(pcVar13 + 0x20);
      lVar10 = *(long *)(pcVar13 + 0x28);
      if (*(short *)(lVar10 + 0x48) == -1) {
        func_0x00f78ad8(lVar10,uVar16);
      }
      iVar2 = func_0x00f78a4c(lVar10);
      if (iVar2 == 0) {
        if ((((plVar9 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
            ((*(byte *)(*plVar9 + 0x115) & 1) != 0)) || (*(long *)(pcVar7 + 0x18) == 0))
        goto code_r0x03277d68;
        iVar2 = func_0x00f78a44(lVar10);
        iVar3 = func_0x00f78ec0(lVar10);
        if (iVar2 == 0) {
          uVar1 = *(ushort *)(lVar10 + 0x48);
          if (iVar3 == 0) {
            lVar10 = *plVar9 + (ulong)uVar1 * 0x10;
            auVar25 = (**(code **)(lVar10 + 0x138))(plVar9,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x03277d74;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar14 = *plVar9;
          uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar10) {
                puVar11 = (undefined8 *)(lVar14 + (long)(int)(*piVar8 + (uint)uVar1) * 0x10 + 0x138)
                ;
                goto code_r0x03277e38;
              }
              piVar8 = piVar8 + 4;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar9,lVar10,(ulong)uVar1);
code_r0x03277e38:
          pcVar13 = (code *)*puVar11;
          puVar11 = (undefined8 *)puVar11[1];
        }
        else {
          if (iVar3 == 0) {
            uVar16 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar9;
            uVar4 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x03277e10;
                }
                piVar8 = piVar8 + 4;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar9);
code_r0x03277e10:
            uVar16 = *(undefined8 *)(lVar14 + 8);
          }
          puVar11 = (undefined8 *)func_0x00f78acc(uVar16,lVar10);
          pcVar13 = (code *)*puVar11;
        }
        auVar25 = (*pcVar13)(plVar9,puVar11);
      }
      else if (*(char *)(lVar10 + 0x4a) == '\0') {
        auVar25 = (*pcVar18)(lVar10);
      }
      else {
code_r0x03277d68:
        auVar25 = (*pcVar18)(plVar9,lVar10);
      }
code_r0x03277d74:
      uVar16 = auVar25._8_8_;
      lVar6 = lVar6 + 1;
      if (lVar6 == lVar12) {
        return auVar25._0_8_;
      }
    } while( true );
  }
  piVar8 = (int *)func_0x00f78af4();
  if ((bRam0000000003eb500f & 1) == 0) {
    func_0x00f78a20(0x3d521b8);
    func_0x00f78a20(0x3d2c9f8);
    func_0x00f78a20(0x3d2ca00);
    func_0x00f78a20(0x3d41510);
    bRam0000000003eb500f = 1;
  }
  uStack_80 = 0;
  lStack_78 = 0;
  puStack_70 = (undefined1 *)0x0;
  lVar6 = *(long *)(piVar8 + 10);
  if (*piVar8 == 0) {
    piVar8[0xe] = 0;
    piVar8[0xf] = 0;
    piVar8[0x10] = 0;
    piVar8[0x11] = 0;
    piVar8[0xc] = 0;
    piVar8[0xd] = 0;
    *piVar8 = -1;
  }
  else {
    if (lVar6 == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    if (*(long *)(lVar6 + 0x40) == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    lVar12 = *(long *)(*(long *)(lVar6 + 0x40) + 0x28);
    if (lVar12 == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    plVar9 = *(long **)(lVar12 + 0x30);
    if (plVar9 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    uVar4 = (**(code **)(*plVar9 + 0x848))(plVar9,*(undefined8 *)(*plVar9 + 0x850));
    if ((uVar4 & 1) == 0) goto code_r0x0156c96c;
    if (*(long *)(lVar6 + 0x40) == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    lVar12 = *(long *)(*(long *)(lVar6 + 0x40) + 0x28);
    if (lVar12 == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    plVar9 = *(long **)(lVar12 + 0x30);
    if (plVar9 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    (**(code **)(*plVar9 + 0x7d8))(&uStack_98,plVar9,*(undefined8 *)(*plVar9 + 0x7e0));
    lStack_78 = uStack_90;
    uStack_80 = uStack_98;
    puStack_70 = (undefined1 *)lStack_88;
    /*UniRx.Async.UniTask<Group>$$GetAwaiter*/ func_0x01b773d0(&uStack_98,&uStack_80,uRam0000000003d41510);
    uVar4 = /*UniRx.Async.UniTask.Awaiter<Group>$$get_IsCompleted*/ func_0x01cf4f60(&stack0xffffffffffffffa0,uRam0000000003d2ca00);
    if ((uVar4 & 1) == 0) {
      *piVar8 = 0;
      *(undefined8 *)(piVar8 + 0xe) = uStack_90;
      *(ulong *)(piVar8 + 0xc) = uStack_98;
      *(long *)(piVar8 + 0x10) = lStack_88;
      uVar4 = /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter<Group>, UIGroupCodeBehaviour.<TrySetGroupCode>d__12>*/ func_0x01829b78(piVar8 + 2,&stack0xffffffffffffffa0,piVar8,uRam0000000003d521b8);
      return uVar4;
    }
  }
  auVar25 = /*UniRx.Async.UniTask.Awaiter<Group>$$GetResult*/ func_0x01cf5044(&stack0xffffffffffffffa0,uRam0000000003d2c9f8);
  if (lVar6 != 0) {
    /*Atlas.UI.UIGroupCodeBehaviour$$SetCode*/ func_0x0151b274(lVar6,auVar25._0_8_,auVar25._8_8_,0);
code_r0x0156c96c:
    *piVar8 = -2;
    uVar4 = /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$SetResult*/ func_0x02934048(piVar8 + 2,0);
    return uVar4;
  }
  func_0x00f78af4();
code_r0x0156ca7c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x156ca80);
  (*pcVar7)();
}



// ============================================================
// RVA: 0x156c790 | Atlas.UI.UIFillBarBehaviour.<>c__DisplayClass13_0.<AnimateFillPercentage>b__3
// ============================================================

void Atlas_UI_UIFillBarBehaviour___c__DisplayClass13_0___AnimateFillPercentage_b__3(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x44) = 0;
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 == 0) {
      return;
    }
    uVar9 = 0;
    lStack_58 = lVar5;
    lVar10 = *(long *)(lVar5 + 0x68);
    if (lVar10 == 0) {
      plVar7 = &lStack_58;
      lVar15 = 1;
    }
    else {
      lVar15 = *(long *)(lVar10 + 0x18);
      if (lVar15 == 0) {
        return;
      }
      plVar7 = (long *)(lVar10 + 0x20);
    }
    lVar10 = 0;
    do {
      lVar11 = plVar7[lVar10];
      pcVar14 = *(code **)(lVar11 + 0x10);
      plVar1 = *(long **)(lVar11 + 0x20);
      lVar11 = *(long *)(lVar11 + 0x28);
      if (*(short *)(lVar11 + 0x48) == -1) {
        func_0x00f78ad8(lVar11,uVar9);
      }
      iVar3 = func_0x00f78a4c(lVar11);
      if (iVar3 == 0) {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar5 + 0x18) == 0))
        goto code_r0x03277d68;
        iVar3 = func_0x00f78a44(lVar11);
        iVar4 = func_0x00f78ec0(lVar11);
        if (iVar3 == 0) {
          uVar2 = *(ushort *)(lVar11 + 0x48);
          if (iVar4 == 0) {
            lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar11 + 0x138))(plVar1,*(undefined8 *)(lVar11 + 0x140));
            uVar9 = extraout_x1_01;
            goto code_r0x03277d74;
          }
          lVar11 = func_0x00f78a48(lVar11);
          lVar12 = *plVar1;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar6 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == lVar11) {
                puVar8 = (undefined8 *)(lVar12 + (long)(int)(*piVar6 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x03277e38;
              }
              piVar6 = piVar6 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x03277e38:
          pcVar14 = (code *)*puVar8;
          puVar8 = (undefined8 *)puVar8[1];
        }
        else {
          if (iVar4 == 0) {
            uVar9 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar1;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar6 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)(lVar11 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x03277e10;
                }
                piVar6 = piVar6 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar12 = func_0x00fac1f0(plVar1);
code_r0x03277e10:
            uVar9 = *(undefined8 *)(lVar12 + 8);
          }
          puVar8 = (undefined8 *)func_0x00f78acc(uVar9,lVar11);
          pcVar14 = (code *)*puVar8;
        }
        (*pcVar14)(plVar1,puVar8);
        uVar9 = extraout_x1_02;
      }
      else if (*(char *)(lVar11 + 0x4a) == '\0') {
        (*pcVar14)(lVar11);
        uVar9 = extraout_x1;
      }
      else {
code_r0x03277d68:
        (*pcVar14)(plVar1,lVar11);
        uVar9 = extraout_x1_00;
      }
code_r0x03277d74:
      lVar10 = lVar10 + 1;
      if (lVar10 == lVar15) {
        return;
      }
    } while( true );
  }
  piVar6 = (int *)func_0x00f78af4();
  if ((bRam0000000003eb500f & 1) == 0) {
    func_0x00f78a20(0x3d521b8);
    func_0x00f78a20(0x3d2c9f8);
    func_0x00f78a20(0x3d2ca00);
    func_0x00f78a20(0x3d41510);
    bRam0000000003eb500f = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lVar5 = *(long *)(piVar6 + 10);
  if (*piVar6 == 0) {
    piVar6[0xe] = 0;
    piVar6[0xf] = 0;
    piVar6[0x10] = 0;
    piVar6[0x11] = 0;
    piVar6[0xc] = 0;
    piVar6[0xd] = 0;
    *piVar6 = -1;
  }
  else {
    if (lVar5 == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    if (*(long *)(lVar5 + 0x40) == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    lVar10 = *(long *)(*(long *)(lVar5 + 0x40) + 0x28);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    plVar7 = *(long **)(lVar10 + 0x30);
    if (plVar7 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    uVar13 = (**(code **)(*plVar7 + 0x848))(plVar7,*(undefined8 *)(*plVar7 + 0x850));
    if ((uVar13 & 1) == 0) goto code_r0x0156c96c;
    if (*(long *)(lVar5 + 0x40) == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    lVar10 = *(long *)(*(long *)(lVar5 + 0x40) + 0x28);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    plVar7 = *(long **)(lVar10 + 0x30);
    if (plVar7 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x0156ca7c;
    }
    (**(code **)(*plVar7 + 0x7d8))(&uStack_88,plVar7,*(undefined8 *)(*plVar7 + 0x7e0));
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    uStack_60 = uStack_78;
    /*UniRx.Async.UniTask<Group>$$GetAwaiter*/ func_0x01b773d0(&uStack_88,&uStack_70,uRam0000000003d41510);
    uVar13 = /*UniRx.Async.UniTask.Awaiter<Group>$$get_IsCompleted*/ func_0x01cf4f60(&stack0xffffffffffffffb0,uRam0000000003d2ca00);
    if ((uVar13 & 1) == 0) {
      *piVar6 = 0;
      *(undefined8 *)(piVar6 + 0xe) = uStack_80;
      *(undefined8 *)(piVar6 + 0xc) = uStack_88;
      *(undefined8 *)(piVar6 + 0x10) = uStack_78;
      /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$AwaitUnsafeOnCompleted<UniTask.Awaiter<Group>, UIGroupCodeBehaviour.<TrySetGroupCode>d__12>*/ func_0x01829b78(piVar6 + 2,&stack0xffffffffffffffb0,piVar6,uRam0000000003d521b8);
      return;
    }
  }
  auVar16 = /*UniRx.Async.UniTask.Awaiter<Group>$$GetResult*/ func_0x01cf5044(&stack0xffffffffffffffb0,uRam0000000003d2c9f8);
  if (lVar5 != 0) {
    /*Atlas.UI.UIGroupCodeBehaviour$$SetCode*/ func_0x0151b274(lVar5,auVar16._0_8_,auVar16._8_8_,0);
code_r0x0156c96c:
    *piVar6 = -2;
    /*System.Runtime.CompilerServices.AsyncVoidMethodBuilder$$SetResult*/ func_0x02934048(piVar6 + 2,0);
    return;
  }
  func_0x00f78af4();
code_r0x0156ca7c:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x156ca80);
  (*pcVar14)();
}



