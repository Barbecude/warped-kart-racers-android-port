// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.FrontEnd.FrontEndSubsceneBehaviourBase

// ============================================================
// RVA: 0x15959a4 | Atlas.FrontEnd.FrontEndSubsceneBehaviourBase.get_FrontEndScene
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__get_FrontEndScene(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15959ac | Atlas.FrontEnd.FrontEndSubsceneBehaviourBase.GetKartLocator
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__GetKartLocator(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [12];
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar2 + 0x18)) {
    return *(undefined8 *)(lVar2 + (long)(int)param_2 * 8 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  auVar3 = func_0x00f78ac0(uVar1,0);
  lVar2 = *(long *)(auVar3._0_8_ + 0x28);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (auVar3._8_4_ < *(uint *)(lVar2 + 0x18)) {
    return *(undefined8 *)(lVar2 + (long)(int)auVar3._8_4_ * 8 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  auVar3 = func_0x00f78ac0(uVar1,0);
  lVar2 = *(long *)(auVar3._0_8_ + 0x30);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (auVar3._8_4_ < *(uint *)(lVar2 + 0x18)) {
    return *(undefined8 *)(lVar2 + (long)(int)auVar3._8_4_ * 8 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  uVar1 = func_0x00f78ac0(uVar1,0);
  return uVar1;
}



// ============================================================
// RVA: 0x15959e8 | Atlas.FrontEnd.FrontEndSubsceneBehaviourBase.GetNameLocator
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__GetNameLocator(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [12];
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar2 + 0x18)) {
    return *(undefined8 *)(lVar2 + (long)(int)param_2 * 8 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  auVar3 = func_0x00f78ac0(uVar1,0);
  lVar2 = *(long *)(auVar3._0_8_ + 0x30);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (auVar3._8_4_ < *(uint *)(lVar2 + 0x18)) {
    return *(undefined8 *)(lVar2 + (long)(int)auVar3._8_4_ * 8 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  uVar1 = func_0x00f78ac0(uVar1,0);
  return uVar1;
}



// ============================================================
// RVA: 0x1595a24 | Atlas.FrontEnd.FrontEndSubsceneBehaviourBase.GetPortalLocator
// ============================================================

undefined8 Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__GetPortalLocator(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (param_2 < *(uint *)(lVar2 + 0x18)) {
    return *(undefined8 *)(lVar2 + (long)(int)param_2 * 8 + 0x20);
  }
  uVar1 = func_0x00f78b24();
  uVar1 = func_0x00f78ac0(uVar1,0);
  return uVar1;
}



// ============================================================
// RVA: 0x1595a60 | Atlas.FrontEnd.FrontEndSubsceneBehaviourBase.OnInit
// ============================================================

void Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__OnInit(void)

{
  return;
}



// ============================================================
// RVA: 0x1595a64 | Atlas.FrontEnd.FrontEndSubsceneBehaviourBase.OnDeInit
// ============================================================

void Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__OnDeInit(void)

{
  return;
}



// ============================================================
// RVA: 0x1595a68 | Atlas.FrontEnd.FrontEndSubsceneBehaviourBase.OnIPChanged
// ============================================================

void Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__OnIPChanged(void)

{
  return;
}



// ============================================================
// RVA: 0x1595a6c | Atlas.FrontEnd.FrontEndSubsceneBehaviourBase.OnSceneDefinitionChanged
// ============================================================

void Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__OnSceneDefinitionChanged(void)

{
  return;
}



// ============================================================
// RVA: 0x1595a70 | Atlas.FrontEnd.FrontEndSubsceneBehaviourBase.Start
// ============================================================

void Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__Start(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb517b & 1) == 0) {
    func_0x00f78a20(0x3d2e430);
    bRam0000000003eb517b = 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if ((lVar3 != 0) && (0 < (int)*(ulong *)(lVar3 + 0x18))) {
    uVar4 = 0;
    uVar2 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
    puVar5 = (undefined8 *)(lVar3 + 0x28);
    do {
      if (uVar2 <= uVar4) {
        uVar1 = func_0x00f78b24();
        func_0x00f78ac0(uVar1,0);
LAB_01595b24:
        auVar6 = func_0x00f78af4();
        auVar6._0_8_[7] = auVar6._8_8_;
                    /* WARNING: Could not recover jumptable at 0x01595b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*auVar6._0_8_ + 0x178))();
        return;
      }
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_01595b24;
      /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(*(long *)(param_1 + 0x40),*(undefined4 *)(puVar5 + -1),*puVar5,
                      uRam0000000003d2e430);
      uVar4 = uVar4 + 1;
      uVar2 = (ulong)*(uint *)(lVar3 + 0x18);
      puVar5 = puVar5 + 2;
    } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
  }
  return;
}



// ============================================================
// RVA: 0x1595b28 | Atlas.FrontEnd.FrontEndSubsceneBehaviourBase.Init
// ============================================================

void Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__Init(long *param_1,long param_2)

{
  param_1[7] = param_2;
                    /* WARNING: Could not recover jumptable at 0x01595b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))();
  return;
}



// ============================================================
// RVA: 0x1595b38 | Atlas.FrontEnd.FrontEndSubsceneBehaviourBase.DeInit
// ============================================================

void Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__DeInit(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01595b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  return;
}



// ============================================================
// RVA: 0x1595b44 | Atlas.FrontEnd.FrontEndSubsceneBehaviourBase.ChangeIP
// ============================================================

void Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__ChangeIP(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x01595b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))(param_1,param_2,*(undefined8 *)(*param_1 + 0x1a0));
  return;
}



// ============================================================
// RVA: 0x1595b50 | Atlas.FrontEnd.FrontEndSubsceneBehaviourBase.SetNeutralCameraPosition
// ============================================================

void Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetNeutralCameraPosition(undefined8 *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  int extraout_w1;
  ulong uVar7;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar8 [12];
  
  uVar7 = 0;
  puVar3 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar4 = param_1;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar3 + -0x20) = unaff_x20;
    *(ulong *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(undefined **)(puVar3 + -8) = unaff_x30;
    unaff_x29 = puVar3 + -0x10;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb517c & 1) == 0) {
      func_0x00f78a20(0x3d2e438);
      func_0x00f78a20(0x3d33cb0);
      func_0x00f78a20(0x3d33cb8);
      func_0x00f78a20(0x3d33cc0);
      func_0x00f78a20(0x3d39210);
      func_0x00f78a20(0x3d39218);
      bRam0000000003eb517c = 1;
    }
    *(undefined8 *)(puVar3 + -0x40) = 0;
    *(undefined8 *)(puVar3 + -0x58) = 0;
    *(undefined8 *)(puVar3 + -0x60) = 0;
    *(undefined8 *)(puVar3 + -0x48) = 0;
    *(undefined8 *)(puVar3 + -0x50) = 0;
    if (puVar4[8] != 0) {
      /*System.Collections.Generic.Dictionary<Int32Enum, object>$$GetEnumerator*/ func_0x01ea7788(puVar3 + -0x60,puVar4[8],uRam0000000003d2e438);
      while( true ) {
        uVar5 = /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$MoveNext*/ func_0x01fc986c(puVar3 + -0x60,uRam0000000003d33cb8);
        if ((uVar5 & 1) == 0) {
          /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$Dispose*/ func_0x01fc99e8(puVar3 + -0x60,uRam0000000003d33cb0);
          return;
        }
        if (*(long *)(puVar3 + -0x48) == 0) break;
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(puVar3 + -0x48),*(int *)(puVar3 + -0x50) == (int)uVar7,0);
      }
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1595c60);
      (*pcVar2)();
    }
    func_0x00f78af4();
    unaff_x19 = uVar7;
    if (extraout_w1 == 1) {
      puVar6 = (ulong *)___cxa_begin_catch();
      unaff_x19 = *puVar6;
      ___cxa_end_catch();
      /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$Dispose*/ func_0x01fc99e8(puVar3 + -0x60,*puVar4);
      if (unaff_x19 == 0) {
        return;
      }
      func_0x00f78ac0(unaff_x19,0);
    }
    unaff_x30 = &Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCustomisationCameraPosition;
    auVar8 = __Unwind_Resume();
    uVar1 = auVar8._8_4_ - 1;
    if ((7 < uVar1) || ((0xbfU >> (ulong)(uVar1 & 0x1f) & 1) == 0)) break;
    uVar7 = (ulong)*(uint *)(&UNK_033f8a14 + (long)(int)uVar1 * 4);
    puVar3 = puVar3 + -0x60;
    param_1 = auVar8._0_8_;
    unaff_x20 = puVar4;
  }
  return;
}



// ============================================================
// RVA: 0x1595b58 | Atlas.FrontEnd.FrontEndSubsceneBehaviourBase.SetCameraPosition
// ============================================================

void Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition
               (undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  int extraout_w1;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar6 [12];
  
  while( true ) {
    puVar3 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb517c & 1) == 0) {
      func_0x00f78a20(0x3d2e438);
      func_0x00f78a20(0x3d33cb0);
      func_0x00f78a20(0x3d33cb8);
      func_0x00f78a20(0x3d33cc0);
      func_0x00f78a20(0x3d39210);
      func_0x00f78a20(0x3d39218);
      bRam0000000003eb517c = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    if (puVar3[8] != 0) {
      /*System.Collections.Generic.Dictionary<Int32Enum, object>$$GetEnumerator*/ func_0x01ea7788((undefined1 *)((long)register0x00000008 + -0x60),puVar3[8],
                      uRam0000000003d2e438);
      while( true ) {
        uVar4 = /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$MoveNext*/ func_0x01fc986c((undefined1 *)((long)register0x00000008 + -0x60),
                                uRam0000000003d33cb8);
        if ((uVar4 & 1) == 0) {
          /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$Dispose*/ func_0x01fc99e8((undefined1 *)((long)register0x00000008 + -0x60),uRam0000000003d33cb0);
          return;
        }
        if (*(long *)((long)register0x00000008 + -0x48) == 0) break;
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)((long)register0x00000008 + -0x48),
                        *(int *)((long)register0x00000008 + -0x50) == (int)param_2,0);
      }
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1595c60);
      (*pcVar2)();
    }
    func_0x00f78af4();
    unaff_x19 = param_2;
    if (extraout_w1 == 1) {
      puVar5 = (ulong *)___cxa_begin_catch();
      unaff_x19 = *puVar5;
      ___cxa_end_catch();
      /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$Dispose*/ func_0x01fc99e8((undefined1 *)((long)register0x00000008 + -0x60),*puVar3);
      if (unaff_x19 == 0) {
        return;
      }
      func_0x00f78ac0(unaff_x19,0);
    }
    unaff_x30 = &Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCustomisationCameraPosition;
    auVar6 = __Unwind_Resume();
    uVar1 = auVar6._8_4_ - 1;
    if ((7 < uVar1) || ((0xbfU >> (ulong)(uVar1 & 0x1f) & 1) == 0)) break;
    param_2 = (ulong)*(uint *)(&UNK_033f8a14 + (long)(int)uVar1 * 4);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = auVar6._0_8_;
    unaff_x20 = puVar3;
  }
  return;
}



// ============================================================
// RVA: 0x1595ca0 | Atlas.FrontEnd.FrontEndSubsceneBehaviourBase.SetCustomisationCameraPosition
// ============================================================

void Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCustomisationCameraPosition
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  int extraout_w1;
  ulong uVar5;
  ulong unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  while( true ) {
    puVar4 = auVar6._0_8_;
    uVar1 = auVar6._8_4_ - 1;
    if ((7 < uVar1) || ((0xbfU >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
      return;
    }
    uVar1 = *(uint *)(&UNK_033f8a14 + (long)(int)uVar1 * 4);
    uVar5 = (ulong)uVar1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb517c & 1) == 0) {
      func_0x00f78a20(0x3d2e438);
      func_0x00f78a20(0x3d33cb0);
      func_0x00f78a20(0x3d33cb8);
      func_0x00f78a20(0x3d33cc0);
      func_0x00f78a20(0x3d39210);
      func_0x00f78a20(0x3d39218);
      bRam0000000003eb517c = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    if (puVar4[8] != 0) break;
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      puVar3 = (ulong *)___cxa_begin_catch();
      uVar5 = *puVar3;
      ___cxa_end_catch();
      /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$Dispose*/ func_0x01fc99e8((undefined1 *)((long)register0x00000008 + -0x60),*puVar4);
      if (uVar5 == 0) {
        return;
      }
      func_0x00f78ac0(uVar5,0);
    }
    unaff_x30 = Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCustomisationCameraPosition;
    auVar6 = __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    unaff_x19 = uVar5;
    unaff_x20 = puVar4;
  }
  /*System.Collections.Generic.Dictionary<Int32Enum, object>$$GetEnumerator*/ func_0x01ea7788((undefined1 *)((long)register0x00000008 + -0x60),puVar4[8],uRam0000000003d2e438);
  while( true ) {
    uVar5 = /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$MoveNext*/ func_0x01fc986c((undefined1 *)((long)register0x00000008 + -0x60),uRam0000000003d33cb8);
    if ((uVar5 & 1) == 0) {
      /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$Dispose*/ func_0x01fc99e8((undefined1 *)((long)register0x00000008 + -0x60),uRam0000000003d33cb0);
      return;
    }
    if (*(long *)((long)register0x00000008 + -0x48) == 0) break;
    /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)((long)register0x00000008 + -0x48),
                    *(uint *)((long)register0x00000008 + -0x50) == uVar1,0);
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1595c60);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x1595ccc | Atlas.FrontEnd.FrontEndSubsceneBehaviourBase.SetFrontEndSceneType
// ============================================================

undefined1  [16]
Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetFrontEndSceneType
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long *param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  
  if (param_6 != 0) {
    Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__SetCameraPosition
              (param_5,*(undefined4 *)(param_6 + 0x2c));
    if (*(char *)(param_6 + 0x31) == '\0') {
      if (param_5[7] != 0) {
        Atlas_FrontEnd_FrontEndScene__SetKartHidden(param_5[7],0,0);
        goto LAB_01595e0c;
      }
    }
    else {
      lVar2 = param_5[4];
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0x18) == 0)) {
LAB_01595de0:
        if (param_5[7] != 0) {
          Atlas_FrontEnd_FrontEndScene__SetKartVisible(param_5[7],0,0);
LAB_01595e0c:
                    /* WARNING: Could not recover jumptable at 0x01595e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar12 = (**(code **)(*param_5 + 0x1a8))
                              (param_5,param_6,*(undefined8 *)(*param_5 + 0x1b0));
          return auVar12;
        }
      }
      else {
        if ((int)*(long *)(lVar2 + 0x18) == 0) goto LAB_01595e40;
        if (param_5[7] != 0) {
          lVar3 = *(long *)(lVar2 + 0x20);
          lVar2 = Atlas_FrontEnd_FrontEndScene__GetKartTransform(param_5[7],0,0);
          if ((lVar3 != 0) && (uVar4 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar3,0), lVar2 != 0)) {
            uVar8 = param_2;
            uVar9 = param_3;
            uVar5 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar2,0);
            uVar7 = uVar8;
            uVar10 = uVar9;
            uVar11 = param_4;
            uVar6 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar3,0);
            uVar7 = /*UnityEngine.Quaternion$$op_Multiply*/ func_0x03251e58(uVar5,uVar8,uVar9,param_4,uVar6,uVar7,uVar10,uVar11,0);
            /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar4,param_2,param_3,uVar7,uVar8,uVar9,param_4,lVar2,0);
            goto LAB_01595de0;
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_01595e40:
  uVar1 = func_0x00f78b24();
  auVar12._0_8_ = func_0x00f78ac0(uVar1,0);
  if ((bRam0000000003eb517d & 1) == 0) {
    func_0x00f78a20(0x3d2e428);
    func_0x00f78a20(0x3d1c210);
    bRam0000000003eb517d = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<FrontEndCameraPosition, CinemachineVirtualCamera>_TypeInfo*/ uRam0000000003d1c210);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar1,uRam0000000003d2e428);
  *(undefined8 *)(auVar12._0_8_ + 0x40) = uVar1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar12._8_8_ = 0;
  return auVar12;
}



// ============================================================
// RVA: 0x1595e4c | Atlas.FrontEnd.FrontEndSubsceneBehaviourBase..ctor
// ============================================================

undefined1  [16] Atlas_FrontEnd_FrontEndSubsceneBehaviourBase___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb517d & 1) == 0) {
    func_0x00f78a20(0x3d2e428);
    func_0x00f78a20(0x3d1c210);
    bRam0000000003eb517d = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<FrontEndCameraPosition, CinemachineVirtualCamera>_TypeInfo*/ uRam0000000003d1c210);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar1,uRam0000000003d2e428);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
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



