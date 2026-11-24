// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.ModalScreenViewBehaviour

// ============================================================
// RVA: 0x149463c | Atlas.UI.Screens.ModalScreenViewBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_ModalScreenViewBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4872 & 1) == 0) {
    func_0x00f78a20(0x3d3dc88,0);
    func_0x00f78a20(0x3d1e380);
    func_0x00f78a20(0x3d255d8);
    bRam0000000003eb4872 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 100) = 1;
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ============================================================
// RVA: 0x1496f58 | Atlas.UI.Screens.ModalScreenViewBehaviour.get_ModalBehaviour
// ============================================================

undefined8 Atlas_UI_Screens_ModalScreenViewBehaviour__get_ModalBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x1496f60 | Atlas.UI.Screens.ModalScreenViewBehaviour.OnAfterInstantiated
// ============================================================

void Atlas_UI_Screens_ModalScreenViewBehaviour__OnAfterInstantiated(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000003eb49d0 & 1) == 0) {
    func_0x00f78a20(0x3d415c0);
    func_0x00f78a20(0x3d1eb18);
    bRam0000000003eb49d0 = 1;
  }
  lVar5 = param_1[0xd];
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x20);
    uVar2 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ModalData>_TypeInfo*/ lRam0000000003d1eb18);
    /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(uVar2,param_1,*(undefined8 *)(*param_1 + 0x1e0),uRam0000000003d415c0);
    plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,uVar2,0);
    lVar1 = /*UnityEngine.Events.UnityAction<ModalData>_TypeInfo*/ lRam0000000003d1eb18;
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*UnityEngine.Events.UnityAction<ModalData>_TypeInfo*/ lRam0000000003d1eb18)) goto LAB_01497074;
    *(long **)(lVar5 + 0x20) = plVar3;
    lVar5 = param_1[0xd];
    if (lVar5 != 0) {
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      uVar2 = func_0x00f78aec(lVar1);
      /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(uVar2,param_1,*(undefined8 *)(*param_1 + 0x1d0),uRam0000000003d415c0);
      plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,uVar2,0);
      if ((plVar3 == (long *)0x0) || (*plVar3 == /*UnityEngine.Events.UnityAction<ModalData>_TypeInfo*/ lRam0000000003d1eb18)) {
        *(long **)(lVar5 + 0x28) = plVar3;
        return;
      }
      goto LAB_01497074;
    }
  }
  func_0x00f78af4();
LAB_01497074:
  lVar5 = func_0x00f78e5c();
  if (*(long **)(lVar5 + 0x68) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01497094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar5 + 0x68) + 0x198))();
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1497078 | Atlas.UI.Screens.ModalScreenViewBehaviour.ShowModal
// ============================================================

void Atlas_UI_Screens_ModalScreenViewBehaviour__ShowModal(long param_1)

{
  if (*(long **)(param_1 + 0x68) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01497094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x68) + 0x198))();
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x149709c | Atlas.UI.Screens.ModalScreenViewBehaviour.OnModalActivated
// ============================================================

void Atlas_UI_Screens_ModalScreenViewBehaviour__OnModalActivated(void)

{
  return;
}



// ============================================================
// RVA: 0x14970a0 | Atlas.UI.Screens.ModalScreenViewBehaviour.OnModalDeactivated
// ============================================================

void Atlas_UI_Screens_ModalScreenViewBehaviour__OnModalDeactivated(void)

{
  return;
}



// ============================================================
// RVA: 0x14970a4 | Atlas.UI.Screens.ModalScreenViewBehaviour.OnBeforeDestroyed
// ============================================================

void Atlas_UI_Screens_ModalScreenViewBehaviour__OnBeforeDestroyed
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined8 uVar6;
  
  uVar9 = 0x3eb4000;
  if ((bRam0000000003eb49d1 & 1) == 0) {
    func_0x00f78a20(0x3d415c0);
    func_0x00f78a20(0x3d1eb18);
    bRam0000000003eb49d1 = 1;
  }
  lVar10 = param_1[0xd];
  if (lVar10 != 0) {
    unaff_x22 = 0x3d1eb18;
    unaff_x23 = 0x3d415c0;
    uVar9 = *(undefined8 *)(lVar10 + 0x20);
    unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<ModalData>_TypeInfo*/ lRam0000000003d1eb18);
    param_4 = uRam0000000003d415c0;
    /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(unaff_x21,param_1,*(undefined8 *)(*param_1 + 0x1e0));
    plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar9,unaff_x21,0);
    lVar5 = /*UnityEngine.Events.UnityAction<ModalData>_TypeInfo*/ lRam0000000003d1eb18;
    if ((plVar2 != (long *)0x0) && (*plVar2 != /*UnityEngine.Events.UnityAction<ModalData>_TypeInfo*/ lRam0000000003d1eb18)) goto LAB_014971b8;
    *(long **)(lVar10 + 0x20) = plVar2;
    lVar10 = param_1[0xd];
    if (lVar10 != 0) {
      uVar9 = *(undefined8 *)(lVar10 + 0x28);
      unaff_x21 = func_0x00f78aec(lVar5);
      param_4 = uRam0000000003d415c0;
      /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(unaff_x21,param_1,*(undefined8 *)(*param_1 + 0x1d0));
      plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar9,unaff_x21,0);
      if ((plVar2 == (long *)0x0) || (*plVar2 == /*UnityEngine.Events.UnityAction<ModalData>_TypeInfo*/ lRam0000000003d1eb18)) {
        *(long **)(lVar10 + 0x28) = plVar2;
        return;
      }
      goto LAB_014971b8;
    }
  }
  func_0x00f78af4();
LAB_014971b8:
  auVar11 = func_0x00f78e5c();
  uVar6 = auVar11._8_8_;
  puStack_48 = &Atlas_UI_ModalStateMachineBehaviour__remove_StateEntered;
  uStack_70 = unaff_x22;
  uStack_68 = unaff_x21;
  uStack_60 = uVar9;
  plStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb49d3 & 1) == 0) {
    func_0x00f78a20(0x3d1b4d0);
    bRam0000000003eb49d3 = 1;
  }
  plVar2 = (long *)(auVar11._0_8_ + 0x20);
  lVar5 = *plVar2;
  while ((plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,uVar6,0), plVar3 == (long *)0x0 ||
         (*plVar3 == /*System.Action<ModalState>_TypeInfo*/ lRam0000000003d1b4d0))) {
    lVar4 = func_0x00ff0f44(plVar2,plVar3,lVar5);
    bVar1 = lVar5 == lVar4;
    lVar5 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar11 = func_0x00f78e5c(plVar3);
  uVar9 = auVar11._8_8_;
  uStack_a0 = 0x3d1b4d0;
  puStack_78 = &Atlas_UI_ModalStateMachineBehaviour__remove_StateExited;
  lStack_98 = lVar5;
  plStack_90 = plVar2;
  uStack_88 = uVar6;
  ppuStack_80 = &puStack_50;
  if ((bRam0000000003eb49d5 & 1) == 0) {
    func_0x00f78a20(0x3d1b4d0);
    bRam0000000003eb49d5 = 1;
  }
  plVar2 = (long *)(auVar11._0_8_ + 0x28);
  lVar5 = *plVar2;
  while( true ) {
    puVar7 = (undefined8 *)0x0;
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,uVar9);
    if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<ModalState>_TypeInfo*/ lRam0000000003d1b4d0)) break;
    lVar4 = func_0x00ff0f44(plVar2,plVar3,lVar5);
    bVar1 = lVar5 == lVar4;
    lVar5 = lVar4;
    if (bVar1) {
      return;
    }
  }
  auVar11 = func_0x00f78e5c(plVar3);
  lVar4 = auVar11._0_8_;
  puVar8 = &uStack_110;
  uStack_d0 = 0x3d1b4d0;
  puStack_a8 = &Atlas_UI_ModalStateMachineBehaviour__OnStateEnter;
  lStack_e0 = lVar10;
  uStack_d8 = unaff_x23;
  lStack_c8 = lVar5;
  plStack_c0 = plVar2;
  uStack_b8 = uVar9;
  ppuStack_b0 = &ppuStack_80;
  if ((bRam0000000003eb49d6 & 1) == 0) {
    func_0x00f78a20(0x3d2a1b0);
    bRam0000000003eb49d6 = 1;
  }
  uStack_108 = puVar7[1];
  uStack_110 = *puVar7;
  uStack_f8 = puVar7[3];
  uStack_100 = puVar7[2];
  uStack_f0 = *(undefined4 *)(puVar7 + 4);
  uVar9 = param_4;
  /*UnityEngine.StateMachineBehaviour$$OnStateEnter*/ func_0x03214cbc(lVar4,auVar11._8_8_,&uStack_110,param_4,0);
  if (*(long *)(lVar4 + 0x20) != 0) {
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$Invoke*/ func_0x01b47db4(*(long *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x18),uRam0000000003d2a1b0);
    return;
  }
  auVar12 = func_0x00f78af4();
  lVar5 = auVar12._0_8_;
  uStack_148 = 0x3eb4000;
  puStack_118 = &Atlas_UI_ModalStateMachineBehaviour__OnStateExit;
  lStack_150 = lVar10;
  puStack_140 = puVar7;
  uStack_130 = param_4;
  ppuStack_120 = &ppuStack_b0;
  if ((bRam0000000003eb49d7 & 1) == 0) {
    uStack_138 = auVar11._8_8_;
    lStack_128 = lVar4;
    func_0x00f78a20(0x3d2a1b0);
    auVar11._8_8_ = uStack_138;
    auVar11._0_8_ = lStack_128;
    bRam0000000003eb49d7 = 1;
  }
  uStack_138 = auVar11._8_8_;
  lStack_128 = auVar11._0_8_;
  uStack_178 = puVar8[1];
  uStack_180 = *puVar8;
  uStack_168 = puVar8[3];
  uStack_170 = puVar8[2];
  uStack_160 = *(undefined4 *)(puVar8 + 4);
  /*UnityEngine.StateMachineBehaviour$$OnStateExit*/ func_0x03214cc4(lVar5,auVar12._8_8_,&uStack_180,uVar9,0);
  if (*(long *)(lVar5 + 0x28) != 0) {
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$Invoke*/ func_0x01b47db4(*(long *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x18),uRam0000000003d2a1b0);
    return;
  }
  lVar10 = func_0x00f78af4();
  if ((bRam0000000003eb49d8 & 1) == 0) {
    func_0x00f78a20(0x3d2a1a8);
    func_0x00f78a20(0x3d1b4d0);
    func_0x00f78a20(0x3d63710);
    func_0x00f78a20(0x3d63718);
    func_0x00f78a20(0x3d28108);
    bRam0000000003eb49d8 = 1;
  }
  *(undefined4 *)(lVar10 + 0x18) = 1;
  if (((*(ushort *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar7 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
  lVar4 = puVar7[1];
  lVar5 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
  if (lVar4 == 0) {
    if (((*(ushort *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar7 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
    }
    uVar9 = *puVar7;
    lVar4 = func_0x00f78aec(/*System.Action<ModalState>_TypeInfo*/ lRam0000000003d1b4d0);
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(lVar4,uVar9,uRam0000000003d63710,uRam0000000003d2a1a8);
    lVar5 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
    *(long *)(*(long *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8) + 8) = lVar4;
  }
  *(long *)(lVar10 + 0x20) = lVar4;
  if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar5 = /*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108;
  }
  puVar7 = *(undefined8 **)(lVar5 + 0xb8);
  lVar4 = puVar7[2];
  if (lVar4 == 0) {
    if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
      func_0x00f78ad0();
      puVar7 = *(undefined8 **)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8);
    }
    uVar9 = *puVar7;
    lVar4 = func_0x00f78aec(/*System.Action<ModalState>_TypeInfo*/ lRam0000000003d1b4d0);
    /*System.Action<MapSequenceBehaviour.TimelineEvent>$$.ctor*/ func_0x01b47da4(lVar4,uVar9,uRam0000000003d63718,uRam0000000003d2a1a8);
    *(long *)(*(long *)(/*Atlas.UI.ModalStateMachineBehaviour.<>c_TypeInfo*/ lRam0000000003d28108 + 0xb8) + 0x10) = lVar4;
  }
  *(long *)(lVar10 + 0x28) = lVar4;
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(lVar10,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(lVar10);
  return;
}



