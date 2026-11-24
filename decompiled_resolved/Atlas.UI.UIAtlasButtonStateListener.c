// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIAtlasButtonStateListener

// ============================================================
// RVA: 0x15157dc | Atlas.UI.UIAtlasButtonStateListener.ListenToEvents
// ============================================================

long * Atlas_UI_UIAtlasButtonStateListener__ListenToEvents
                 (undefined1 param_1 [16],undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 long *param_5,long *param_6,ulong param_7)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  float fVar11;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  plVar1 = param_5;
  if ((bRam0000000003eb4dae & 1) == 0) {
    func_0x00f78a20(0x3d43600);
    func_0x00f78a20(0x3d415e8);
    plVar1 = (long *)func_0x00f78a20(0x3d1eb30);
    bRam0000000003eb4dae = 1;
  }
  uVar13 = (undefined4)param_2;
  if ((char)param_5[4] != '\0') {
    return plVar1;
  }
  plStack_70 = param_6;
  if (param_6 != (long *)0x0) {
    plVar1 = (long *)/*UnityEngine.Animator$$GetBehaviours<UIAtlasButtonStateMachineBehaviour>*/ func_0x017229f8(param_6,uRam0000000003d43600);
    uVar13 = (undefined4)param_2;
    param_5[3] = (long)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar5 = *(uint *)(plVar1 + 3);
      plVar3 = plVar1;
      if (0 < (int)uVar5) {
        uVar9 = 0;
        do {
          uVar13 = (undefined4)param_2;
          plStack_70 = plVar1;
          if (uVar5 <= uVar9) {
LAB_01515960:
            uVar2 = func_0x00f78b24();
            func_0x00f78ac0(uVar2,0);
            goto LAB_0151596c;
          }
          lVar10 = plVar1[(long)(int)uVar9 + 4];
          if (lVar10 == 0) goto LAB_0151596c;
          uVar7 = *(undefined8 *)(lVar10 + 0x18);
          uVar2 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Animator, AnimatorStateInfo>_TypeInfo*/ lRam0000000003d1eb30);
          /*UnityEngine.Events.UnityAction<object, AnimatorStateInfo>$$.ctor*/ func_0x01b80770(uVar2,param_5,*(undefined8 *)(*param_5 + 0x180),uRam0000000003d415e8);
          param_7 = 0;
          plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar7,uVar2);
          lVar4 = /*UnityEngine.Events.UnityAction<Animator, AnimatorStateInfo>_TypeInfo*/ lRam0000000003d1eb30;
          uVar13 = (undefined4)param_2;
          if ((plVar3 != (long *)0x0) && (*plVar3 != /*UnityEngine.Events.UnityAction<Animator, AnimatorStateInfo>_TypeInfo*/ lRam0000000003d1eb30)) {
LAB_0151595c:
            func_0x00f78e5c();
            goto LAB_01515960;
          }
          *(long **)(lVar10 + 0x18) = plVar3;
          uVar7 = *(undefined8 *)(lVar10 + 0x20);
          uVar2 = func_0x00f78aec(lVar4);
          /*UnityEngine.Events.UnityAction<object, AnimatorStateInfo>$$.ctor*/ func_0x01b80770(uVar2,param_5,*(undefined8 *)(*param_5 + 400),uRam0000000003d415e8);
          param_7 = 0;
          plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar7,uVar2);
          uVar13 = (undefined4)param_2;
          if ((plVar3 != (long *)0x0) && (*plVar3 != /*UnityEngine.Events.UnityAction<Animator, AnimatorStateInfo>_TypeInfo*/ lRam0000000003d1eb30)) goto LAB_0151595c;
          *(long **)(lVar10 + 0x20) = plVar3;
          uVar9 = uVar9 + 1;
          uVar5 = *(uint *)(plVar1 + 3);
        } while ((int)uVar9 < (int)uVar5);
      }
      *(undefined1 *)(param_5 + 4) = 1;
      return plVar3;
    }
  }
LAB_0151596c:
  lVar10 = func_0x00f78af4();
  pcStack_58 = Atlas_UI_UIAtlasButton__IsPlayingAnimation;
  plStack_68 = param_5;
  puStack_60 = &stack0xfffffffffffffff0;
  plVar1 = (long *)Atlas_UI_UIAtlasButton__HasValidAnimator();
  if ((int)plVar1 != 0) {
    if (*(long *)(lVar10 + 0x130) == 0) {
      auVar15 = func_0x00f78af4();
      plVar1 = (long *)Atlas_UI_UIAtlasButton__HasValidAnimator();
      if ((int)plVar1 == 0) {
        return plVar1;
      }
      lVar10 = *(long *)(auVar15._0_8_ + 0x130);
      if (lVar10 != 0) {
        if (pcRam0000000003ebe460 == (code *)0x0) {
          pcRam0000000003ebe460 =
               (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
        }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar1 = (long *)(*pcRam0000000003ebe460)(lVar10,auVar15._8_8_);
        return plVar1;
      }
      auVar15 = func_0x00f78af4();
      lVar10 = auVar15._0_8_;
      if ((bRam0000000003eb4da3 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4da3 = 1;
      }
      plVar1 = (long *)/*UnityEngine.UI.Selectable$$DoStateTransition*/ func_0x032e458c(lVar10,auVar15._8_8_,param_7,0);
      if ((*(long *)(lVar10 + 0x120) != 0) && (*(long *)(*(long *)(lVar10 + 0x120) + 0x18) != 0)) {
        lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar10,0);
        if (lVar4 == 0) {
LAB_01515bd4:
          plVar1 = (long *)func_0x00f78af4();
          return plVar1;
        }
        plVar1 = (long *)/*UnityEngine.GameObject$$get_activeInHierarchy*/ func_0x0322efac(lVar4,0);
        if (((int)plVar1 != 0) && (*(int *)(lVar10 + 0x48) == 1)) {
          uVar14 = 0;
          if ((param_7 & 1) == 0) {
            uVar14 = *(undefined4 *)(lVar10 + 0xa0);
          }
          plVar1 = (long *)/*UnityEngine.Color$$get_white*/ func_0x032235a8(0);
          uVar12 = extraout_s0;
          if (auVar15._8_4_ == 4) {
            uVar13 = *(undefined4 *)(lVar10 + 0x90);
            param_3 = *(undefined4 *)(lVar10 + 0x94);
            param_4 = *(undefined4 *)(lVar10 + 0x98);
            plVar1 = (long *)/*UnityEngine.Color$$op_Multiply*/ func_0x032233d0(*(undefined4 *)(lVar10 + 0x8c),uVar13,param_3,param_4,
                                             *(undefined4 *)(lVar10 + 0x9c),0);
            uVar12 = extraout_s0_00;
          }
          lVar10 = *(long *)(lVar10 + 0x120);
          if (lVar10 == 0) goto LAB_01515bd4;
          if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
            uVar8 = 0;
            uVar6 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
            do {
              if (uVar6 <= uVar8) {
                uVar2 = func_0x00f78b24();
                func_0x00f78ac0(uVar2,0);
                goto LAB_01515bd4;
              }
              plVar3 = *(long **)(lVar10 + 0x20 + uVar8 * 8);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              plVar1 = (long *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar3,0,0);
              if (((ulong)plVar1 & 1) == 0) {
                if (plVar3 == (long *)0x0) goto LAB_01515bd4;
                plVar1 = (long *)(**(code **)(*plVar3 + 0x428))
                                           (uVar12,uVar13,param_3,param_4,uVar14,plVar3,1,1,
                                            *(undefined8 *)(*plVar3 + 0x430));
              }
              uVar8 = uVar8 + 1;
              uVar6 = (ulong)*(uint *)(lVar10 + 0x18);
            } while ((long)uVar8 < (long)(int)*(uint *)(lVar10 + 0x18));
          }
        }
      }
      return plVar1;
    }
    /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_c8,*(long *)(lVar10 + 0x130),0,0);
    uStack_98 = uStack_c0;
    uStack_a0 = uStack_c8;
    uStack_88 = uStack_b0;
    uStack_90 = uStack_b8;
    uStack_80 = uStack_a8;
    fVar11 = (float)/*UnityEngine.AnimatorStateInfo$$get_normalizedTime*/ func_0x03213aac(&uStack_a0,0);
    plVar1 = (long *)(ulong)(fVar11 < 1.0);
  }
  return plVar1;
}



// ============================================================
// RVA: 0x15161b8 | Atlas.UI.UIAtlasButtonStateListener.OnDestroy
// ============================================================

void Atlas_UI_UIAtlasButtonStateListener__OnDestroy(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((bRam0000000003eb4daf & 1) == 0) {
    func_0x00f78a20(0x3d415e8);
    func_0x00f78a20(0x3d1eb30);
    bRam0000000003eb4daf = 1;
  }
  lVar6 = param_1[3];
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        if (uVar1 <= (uint)lVar7) {
LAB_0151630c:
          uVar3 = func_0x00f78b24();
          func_0x00f78ac0(uVar3,0);
LAB_01516318:
          func_0x00f78af4();
          return;
        }
        lVar8 = *(long *)(lVar6 + 0x20 + lVar7 * 8);
        if (lVar8 == 0) goto LAB_01516318;
        uVar5 = *(undefined8 *)(lVar8 + 0x18);
        uVar3 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Animator, AnimatorStateInfo>_TypeInfo*/ lRam0000000003d1eb30);
        /*UnityEngine.Events.UnityAction<object, AnimatorStateInfo>$$.ctor*/ func_0x01b80770(uVar3,param_1,*(undefined8 *)(*param_1 + 0x180),uRam0000000003d415e8);
        plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar3,0);
        lVar2 = /*UnityEngine.Events.UnityAction<Animator, AnimatorStateInfo>_TypeInfo*/ lRam0000000003d1eb30;
        if ((plVar4 != (long *)0x0) && (*plVar4 != /*UnityEngine.Events.UnityAction<Animator, AnimatorStateInfo>_TypeInfo*/ lRam0000000003d1eb30)) {
LAB_01516308:
          func_0x00f78e5c();
          goto LAB_0151630c;
        }
        *(long **)(lVar8 + 0x18) = plVar4;
        uVar5 = *(undefined8 *)(lVar8 + 0x20);
        uVar3 = func_0x00f78aec(lVar2);
        /*UnityEngine.Events.UnityAction<object, AnimatorStateInfo>$$.ctor*/ func_0x01b80770(uVar3,param_1,*(undefined8 *)(*param_1 + 400),uRam0000000003d415e8);
        plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar3,0);
        if (plVar4 != (long *)0x0) {
          if (*plVar4 != /*UnityEngine.Events.UnityAction<Animator, AnimatorStateInfo>_TypeInfo*/ lRam0000000003d1eb30) goto LAB_01516308;
        }
        *(long **)(lVar8 + 0x20) = plVar4;
        uVar1 = *(uint *)(lVar6 + 0x18);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar1);
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x151631c | Atlas.UI.UIAtlasButtonStateListener.OnStateEnter
// ============================================================

void Atlas_UI_UIAtlasButtonStateListener__OnStateEnter(void)

{
  return;
}



// ============================================================
// RVA: 0x1516320 | Atlas.UI.UIAtlasButtonStateListener.OnStateExit
// ============================================================

void Atlas_UI_UIAtlasButtonStateListener__OnStateExit(void)

{
  return;
}



// ============================================================
// RVA: 0x1516324 | Atlas.UI.UIAtlasButtonStateListener..ctor
// ============================================================

undefined1  [16] Atlas_UI_UIAtlasButtonStateListener___ctor(ulong param_1)

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



