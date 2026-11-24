// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.HostMigrationTransitionManager

// ============================================================
// RVA: 0x15b6ab0 | Atlas.UI.HostMigrationTransitionManager.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15b6c0c | Atlas.UI.HostMigrationTransitionManager.DeInit
// ============================================================

long * Atlas_UI_HostMigrationTransitionManager__DeInit(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb528e & 1) == 0) {
    func_0x00f78a20(0x3d57e40);
    func_0x00f78a20(0x3d57e48);
    func_0x00f78a20(0x3d282a8);
    bRam0000000003eb528e = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    /*Atlas.UI.TransitionManager$$DeInit*/ func_0x01511cb0(*(long *)(param_1 + 0x28),0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    lVar4 = *(long *)(param_1 + 0x10);
    uVar1 = func_0x00f78aec(/*Atlas.Networking.Network.SessionChangeDelegate_TypeInfo*/ uRam0000000003d282a8);
    /*Atlas.Networking.Network.SessionChangeDelegate$$.ctor*/ func_0x01561000(uVar1,param_1,uRam0000000003d57e40,0);
    if (lVar4 != 0) {
      /*Atlas.Networking.Network$$remove_SessionCreated*/ func_0x0149db0c(lVar4,uVar1,0);
      lVar4 = *(long *)(param_1 + 0x10);
      uVar1 = func_0x00f78aec(/*Atlas.Networking.Network.SessionChangeDelegate_TypeInfo*/ uRam0000000003d282a8);
      /*Atlas.Networking.Network.SessionChangeDelegate$$.ctor*/ func_0x01561000(uVar1,param_1,uRam0000000003d57e48,0);
      if (lVar4 != 0) {
        plVar2 = (long *)/*Atlas.Networking.Network$$remove_SessionDestroyed*/ func_0x0149dc4c(lVar4,uVar1,0);
        *(undefined8 *)(param_1 + 0x10) = 0;
        return plVar2;
      }
    }
  }
  lVar4 = func_0x00f78af4();
  if (*(long *)(lVar4 + 0x28) != 0) {
    plVar2 = (long *)/*Atlas.UI.TransitionManager$$Update*/ func_0x01511ccc(*(long *)(lVar4 + 0x28),0);
    if (*(char *)(lVar4 + 0x30) == '\0') {
      return plVar2;
    }
    if (*(long *)(lVar4 + 0x28) != 0) {
      plVar2 = (long *)/*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar4 + 0x28),1,0,0,0);
      *(byte *)(lVar4 + 0x30) = (byte)plVar2 ^ 1;
      return plVar2;
    }
  }
  auVar8 = func_0x00f78af4();
  lVar6 = auVar8._8_8_;
  lVar4 = auVar8._0_8_;
  if ((bRam0000000003eb528f & 1) == 0) {
    func_0x00f78a20(0x3d29fa0);
    func_0x00f78a20(0x3d1b3d8);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d57e30);
    func_0x00f78a20(0x3d57e38);
    bRam0000000003eb528f = 1;
  }
  *(long *)(lVar4 + 0x18) = lVar6;
  if ((lVar6 == 0) || (lVar7 = *(long *)(lVar6 + 0x10), lVar7 == 0)) {
code_r0x015b6ec0:
    func_0x00f78af4();
  }
  else {
    uVar5 = *(undefined8 *)(lVar7 + 0x90);
    uVar1 = func_0x00f78aec(/*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8);
    /*System.Action<bool>$$.ctor*/ func_0x01b42d40(uVar1,lVar4,uRam0000000003d57e38,uRam0000000003d29fa0);
    plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar1,0);
    if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8)) {
      *(long **)(lVar7 + 0x90) = plVar2;
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 == 0) goto code_r0x015b6ec0;
      uVar5 = *(undefined8 *)(lVar6 + 0xa8);
      uVar1 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
      /*System.Action$$.ctor*/ func_0x02924c80(uVar1,lVar4,uRam0000000003d57e30,0);
      plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar1,0);
      if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) {
        *(long **)(lVar6 + 0xa8) = plVar2;
        return plVar2;
      }
    }
  }
  auVar8 = func_0x00f78e5c();
  lVar4 = auVar8._8_8_;
  plVar3 = auVar8._0_8_;
  plVar2 = plVar3;
  if ((bRam0000000003eb5290 & 1) == 0) {
    func_0x00f78a20(0x3d29fa0);
    func_0x00f78a20(0x3d1b3d8);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d57e30);
    plVar2 = (long *)func_0x00f78a20(0x3d57e38);
    bRam0000000003eb5290 = 1;
  }
  if ((lVar4 == 0) || (lVar6 = *(long *)(lVar4 + 0x10), lVar6 == 0)) {
code_r0x015b7000:
    if (plVar3[3] == lVar4) {
      plVar3[3] = 0;
    }
    return plVar2;
  }
  uVar5 = *(undefined8 *)(lVar6 + 0x90);
  uVar1 = func_0x00f78aec(/*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8);
  /*System.Action<bool>$$.ctor*/ func_0x01b42d40(uVar1,plVar3,uRam0000000003d57e38,uRam0000000003d29fa0);
  plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar1,0);
  if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8)) {
    *(long **)(lVar6 + 0x90) = plVar2;
    lVar6 = *(long *)(lVar4 + 0x10);
    if (lVar6 == 0) goto code_r0x015b7028;
    uVar5 = *(undefined8 *)(lVar6 + 0xa8);
    uVar1 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar1,plVar3,uRam0000000003d57e30,0);
    plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar1,0);
    if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) {
      *(long **)(lVar6 + 0xa8) = plVar2;
      goto code_r0x015b7000;
    }
  }
  func_0x00f78e5c();
code_r0x015b7028:
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5291 & 1) == 0) {
    func_0x00f78a20(0x3d3e0f8);
    func_0x00f78a20(0x3d6d118);
    bRam0000000003eb5291 = 1;
  }
  if (*(long *)(lVar4 + 0x20) != 0) {
    /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$RemoveAllQueuedAndShowing*/ func_0x025e0480(*(long *)(lVar4 + 0x20),0,uRam0000000003d3e0f8);
    uVar1 = /*STR('GENERIC_RECONNECTING')*/ uRam0000000003d6d118;
    lVar4 = *(long *)(lVar4 + 0x28);
    if (lVar4 != 0) {
      if ((bRam0000000003eb4d7a & 1) == 0) {
        func_0x00f78a20(0x3d417c0);
        bRam0000000003eb4d7a = 1;
      }
      if ((*(char *)(lVar4 + 0x10) == '\0') || (*(int *)(lVar4 + 0x30) != 0)) {
        plVar2 = (long *)0x0;
      }
      else {
        *(undefined4 *)(lVar4 + 0x30) = 1;
        if (*(long *)(lVar4 + 0x38) != 0) {
          /*UnityEngine.Events.UnityEvent<int, string, Sprite>$$Invoke*/ func_0x01b86208(*(long *)(lVar4 + 0x38),1,uVar1,0,uRam0000000003d417c0);
        }
        /*Core.Input.InputManager$$SuspendAllInput*/ func_0x0164ade0(0);
        plVar2 = (long *)((long)&MACH_HEADER.magic + 1);
      }
      return plVar2;
    }
  }
  lVar4 = func_0x00f78af4();
  if (*(long *)(lVar4 + 0x28) != 0) {
    plVar2 = (long *)/*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar4 + 0x28),1,0,0,0);
    if (((ulong)plVar2 & 1) == 0) {
      *(undefined1 *)(lVar4 + 0x30) = 1;
    }
    return plVar2;
  }
  plVar2 = (long *)func_0x00f78af4();
  return plVar2;
}



// ============================================================
// RVA: 0x15b6d0c | Atlas.UI.HostMigrationTransitionManager.Update
// ============================================================

long * Atlas_UI_HostMigrationTransitionManager__Update(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)/*Atlas.UI.TransitionManager$$Update*/ func_0x01511ccc(*(long *)(param_1 + 0x28),0);
    if (*(char *)(param_1 + 0x30) == '\0') {
      return plVar1;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      plVar1 = (long *)/*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(param_1 + 0x28),1,0,0,0);
      *(byte *)(param_1 + 0x30) = (byte)plVar1 ^ 1;
      return plVar1;
    }
  }
  auVar8 = func_0x00f78af4();
  lVar6 = auVar8._8_8_;
  lVar4 = auVar8._0_8_;
  if ((bRam0000000003eb528f & 1) == 0) {
    func_0x00f78a20(0x3d29fa0);
    func_0x00f78a20(0x3d1b3d8);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d57e30);
    func_0x00f78a20(0x3d57e38);
    bRam0000000003eb528f = 1;
  }
  *(long *)(lVar4 + 0x18) = lVar6;
  if ((lVar6 == 0) || (lVar7 = *(long *)(lVar6 + 0x10), lVar7 == 0)) {
code_r0x015b6ec0:
    func_0x00f78af4();
  }
  else {
    uVar5 = *(undefined8 *)(lVar7 + 0x90);
    uVar2 = func_0x00f78aec(/*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8);
    /*System.Action<bool>$$.ctor*/ func_0x01b42d40(uVar2,lVar4,uRam0000000003d57e38,uRam0000000003d29fa0);
    plVar1 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar2,0);
    if ((plVar1 == (long *)0x0) || (*plVar1 == /*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8)) {
      *(long **)(lVar7 + 0x90) = plVar1;
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 == 0) goto code_r0x015b6ec0;
      uVar5 = *(undefined8 *)(lVar6 + 0xa8);
      uVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
      /*System.Action$$.ctor*/ func_0x02924c80(uVar2,lVar4,uRam0000000003d57e30,0);
      plVar1 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar2,0);
      if ((plVar1 == (long *)0x0) || (*plVar1 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) {
        *(long **)(lVar6 + 0xa8) = plVar1;
        return plVar1;
      }
    }
  }
  auVar8 = func_0x00f78e5c();
  lVar4 = auVar8._8_8_;
  plVar3 = auVar8._0_8_;
  plVar1 = plVar3;
  if ((bRam0000000003eb5290 & 1) == 0) {
    func_0x00f78a20(0x3d29fa0);
    func_0x00f78a20(0x3d1b3d8);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d57e30);
    plVar1 = (long *)func_0x00f78a20(0x3d57e38);
    bRam0000000003eb5290 = 1;
  }
  if ((lVar4 == 0) || (lVar6 = *(long *)(lVar4 + 0x10), lVar6 == 0)) {
code_r0x015b7000:
    if (plVar3[3] == lVar4) {
      plVar3[3] = 0;
    }
    return plVar1;
  }
  uVar5 = *(undefined8 *)(lVar6 + 0x90);
  uVar2 = func_0x00f78aec(/*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8);
  /*System.Action<bool>$$.ctor*/ func_0x01b42d40(uVar2,plVar3,uRam0000000003d57e38,uRam0000000003d29fa0);
  plVar1 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar2,0);
  if ((plVar1 == (long *)0x0) || (*plVar1 == /*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8)) {
    *(long **)(lVar6 + 0x90) = plVar1;
    lVar6 = *(long *)(lVar4 + 0x10);
    if (lVar6 == 0) goto code_r0x015b7028;
    uVar5 = *(undefined8 *)(lVar6 + 0xa8);
    uVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar2,plVar3,uRam0000000003d57e30,0);
    plVar1 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,uVar2,0);
    if ((plVar1 == (long *)0x0) || (*plVar1 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) {
      *(long **)(lVar6 + 0xa8) = plVar1;
      goto code_r0x015b7000;
    }
  }
  func_0x00f78e5c();
code_r0x015b7028:
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5291 & 1) == 0) {
    func_0x00f78a20(0x3d3e0f8);
    func_0x00f78a20(0x3d6d118);
    bRam0000000003eb5291 = 1;
  }
  if (*(long *)(lVar4 + 0x20) != 0) {
    /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$RemoveAllQueuedAndShowing*/ func_0x025e0480(*(long *)(lVar4 + 0x20),0,uRam0000000003d3e0f8);
    uVar2 = /*STR('GENERIC_RECONNECTING')*/ uRam0000000003d6d118;
    lVar4 = *(long *)(lVar4 + 0x28);
    if (lVar4 != 0) {
      if ((bRam0000000003eb4d7a & 1) == 0) {
        func_0x00f78a20(0x3d417c0);
        bRam0000000003eb4d7a = 1;
      }
      if ((*(char *)(lVar4 + 0x10) == '\0') || (*(int *)(lVar4 + 0x30) != 0)) {
        plVar1 = (long *)0x0;
      }
      else {
        *(undefined4 *)(lVar4 + 0x30) = 1;
        if (*(long *)(lVar4 + 0x38) != 0) {
          /*UnityEngine.Events.UnityEvent<int, string, Sprite>$$Invoke*/ func_0x01b86208(*(long *)(lVar4 + 0x38),1,uVar2,0,uRam0000000003d417c0);
        }
        /*Core.Input.InputManager$$SuspendAllInput*/ func_0x0164ade0(0);
        plVar1 = (long *)((long)&MACH_HEADER.magic + 1);
      }
      return plVar1;
    }
  }
  lVar4 = func_0x00f78af4();
  if (*(long *)(lVar4 + 0x28) != 0) {
    plVar1 = (long *)/*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar4 + 0x28),1,0,0,0);
    if (((ulong)plVar1 & 1) == 0) {
      *(undefined1 *)(lVar4 + 0x30) = 1;
    }
    return plVar1;
  }
  plVar1 = (long *)func_0x00f78af4();
  return plVar1;
}



// ============================================================
// RVA: 0x15b6d68 | Atlas.UI.HostMigrationTransitionManager.OnNetworkSessionCreated
// ============================================================

long * Atlas_UI_HostMigrationTransitionManager__OnNetworkSessionCreated(long param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb528f & 1) == 0) {
    func_0x00f78a20(0x3d29fa0);
    func_0x00f78a20(0x3d1b3d8);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d57e30);
    func_0x00f78a20(0x3d57e38);
    bRam0000000003eb528f = 1;
  }
  *(long *)(param_1 + 0x18) = param_2;
  if ((param_2 == 0) || (lVar5 = *(long *)(param_2 + 0x10), lVar5 == 0)) {
LAB_015b6ec0:
    func_0x00f78af4();
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 0x90);
    uVar1 = func_0x00f78aec(/*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8);
    /*System.Action<bool>$$.ctor*/ func_0x01b42d40(uVar1,param_1,uRam0000000003d57e38,uRam0000000003d29fa0);
    plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,uVar1,0);
    if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8)) {
      *(long **)(lVar5 + 0x90) = plVar2;
      lVar5 = *(long *)(param_2 + 0x10);
      if (lVar5 == 0) goto LAB_015b6ec0;
      uVar4 = *(undefined8 *)(lVar5 + 0xa8);
      uVar1 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
      /*System.Action$$.ctor*/ func_0x02924c80(uVar1,param_1,uRam0000000003d57e30,0);
      plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,uVar1,0);
      if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) {
        *(long **)(lVar5 + 0xa8) = plVar2;
        return plVar2;
      }
    }
  }
  auVar7 = func_0x00f78e5c();
  lVar5 = auVar7._8_8_;
  plVar3 = auVar7._0_8_;
  plVar2 = plVar3;
  if ((bRam0000000003eb5290 & 1) == 0) {
    func_0x00f78a20(0x3d29fa0);
    func_0x00f78a20(0x3d1b3d8);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d57e30);
    plVar2 = (long *)func_0x00f78a20(0x3d57e38);
    bRam0000000003eb5290 = 1;
  }
  if ((lVar5 == 0) || (lVar6 = *(long *)(lVar5 + 0x10), lVar6 == 0)) {
code_r0x015b7000:
    if (plVar3[3] == lVar5) {
      plVar3[3] = 0;
    }
    return plVar2;
  }
  uVar4 = *(undefined8 *)(lVar6 + 0x90);
  uVar1 = func_0x00f78aec(/*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8);
  /*System.Action<bool>$$.ctor*/ func_0x01b42d40(uVar1,plVar3,uRam0000000003d57e38,uRam0000000003d29fa0);
  plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar1,0);
  if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8)) {
    *(long **)(lVar6 + 0x90) = plVar2;
    lVar6 = *(long *)(lVar5 + 0x10);
    if (lVar6 == 0) goto code_r0x015b7028;
    uVar4 = *(undefined8 *)(lVar6 + 0xa8);
    uVar1 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar1,plVar3,uRam0000000003d57e30,0);
    plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar4,uVar1,0);
    if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) {
      *(long **)(lVar6 + 0xa8) = plVar2;
      goto code_r0x015b7000;
    }
  }
  func_0x00f78e5c();
code_r0x015b7028:
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb5291 & 1) == 0) {
    func_0x00f78a20(0x3d3e0f8);
    func_0x00f78a20(0x3d6d118);
    bRam0000000003eb5291 = 1;
  }
  if (*(long *)(lVar5 + 0x20) != 0) {
    /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$RemoveAllQueuedAndShowing*/ func_0x025e0480(*(long *)(lVar5 + 0x20),0,uRam0000000003d3e0f8);
    uVar1 = /*STR('GENERIC_RECONNECTING')*/ uRam0000000003d6d118;
    lVar5 = *(long *)(lVar5 + 0x28);
    if (lVar5 != 0) {
      if ((bRam0000000003eb4d7a & 1) == 0) {
        func_0x00f78a20(0x3d417c0);
        bRam0000000003eb4d7a = 1;
      }
      if ((*(char *)(lVar5 + 0x10) == '\0') || (*(int *)(lVar5 + 0x30) != 0)) {
        plVar2 = (long *)0x0;
      }
      else {
        *(undefined4 *)(lVar5 + 0x30) = 1;
        if (*(long *)(lVar5 + 0x38) != 0) {
          /*UnityEngine.Events.UnityEvent<int, string, Sprite>$$Invoke*/ func_0x01b86208(*(long *)(lVar5 + 0x38),1,uVar1,0,uRam0000000003d417c0);
        }
        /*Core.Input.InputManager$$SuspendAllInput*/ func_0x0164ade0(0);
        plVar2 = (long *)((long)&MACH_HEADER.magic + 1);
      }
      return plVar2;
    }
  }
  lVar5 = func_0x00f78af4();
  if (*(long *)(lVar5 + 0x28) == 0) {
    plVar2 = (long *)func_0x00f78af4();
    return plVar2;
  }
  plVar2 = (long *)/*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar5 + 0x28),1,0,0,0);
  if (((ulong)plVar2 & 1) == 0) {
    *(undefined1 *)(lVar5 + 0x30) = 1;
  }
  return plVar2;
}



// ============================================================
// RVA: 0x15b6ec8 | Atlas.UI.HostMigrationTransitionManager.OnNetworkSessionDestroyed
// ============================================================

long * Atlas_UI_HostMigrationTransitionManager__OnNetworkSessionDestroyed
                 (long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar1 = param_1;
  if ((bRam0000000003eb5290 & 1) == 0) {
    func_0x00f78a20(0x3d29fa0);
    func_0x00f78a20(0x3d1b3d8);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d57e30);
    plVar1 = (long *)func_0x00f78a20(0x3d57e38);
    bRam0000000003eb5290 = 1;
  }
  if ((param_2 == 0) || (lVar4 = *(long *)(param_2 + 0x10), lVar4 == 0)) {
LAB_015b7000:
    if (param_1[3] == param_2) {
      param_1[3] = 0;
    }
    return plVar1;
  }
  uVar3 = *(undefined8 *)(lVar4 + 0x90);
  uVar2 = func_0x00f78aec(/*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8);
  /*System.Action<bool>$$.ctor*/ func_0x01b42d40(uVar2,param_1,uRam0000000003d57e38,uRam0000000003d29fa0);
  plVar1 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar3,uVar2,0);
  if ((plVar1 == (long *)0x0) || (*plVar1 == /*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8)) {
    *(long **)(lVar4 + 0x90) = plVar1;
    lVar4 = *(long *)(param_2 + 0x10);
    if (lVar4 == 0) goto LAB_015b7028;
    uVar3 = *(undefined8 *)(lVar4 + 0xa8);
    uVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(uVar2,param_1,uRam0000000003d57e30,0);
    plVar1 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar3,uVar2,0);
    if ((plVar1 == (long *)0x0) || (*plVar1 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) {
      *(long **)(lVar4 + 0xa8) = plVar1;
      goto LAB_015b7000;
    }
  }
  func_0x00f78e5c();
LAB_015b7028:
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5291 & 1) == 0) {
    func_0x00f78a20(0x3d3e0f8);
    func_0x00f78a20(0x3d6d118);
    bRam0000000003eb5291 = 1;
  }
  if (*(long *)(lVar4 + 0x20) != 0) {
    /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$RemoveAllQueuedAndShowing*/ func_0x025e0480(*(long *)(lVar4 + 0x20),0,uRam0000000003d3e0f8);
    uVar2 = /*STR('GENERIC_RECONNECTING')*/ uRam0000000003d6d118;
    lVar4 = *(long *)(lVar4 + 0x28);
    if (lVar4 != 0) {
      if ((bRam0000000003eb4d7a & 1) == 0) {
        func_0x00f78a20(0x3d417c0);
        bRam0000000003eb4d7a = 1;
      }
      if ((*(char *)(lVar4 + 0x10) == '\0') || (*(int *)(lVar4 + 0x30) != 0)) {
        plVar1 = (long *)0x0;
      }
      else {
        *(undefined4 *)(lVar4 + 0x30) = 1;
        if (*(long *)(lVar4 + 0x38) != 0) {
          /*UnityEngine.Events.UnityEvent<int, string, Sprite>$$Invoke*/ func_0x01b86208(*(long *)(lVar4 + 0x38),1,uVar2,0,uRam0000000003d417c0);
        }
        /*Core.Input.InputManager$$SuspendAllInput*/ func_0x0164ade0(0);
        plVar1 = (long *)((long)&MACH_HEADER.magic + 1);
      }
      return plVar1;
    }
  }
  lVar4 = func_0x00f78af4();
  if (*(long *)(lVar4 + 0x28) == 0) {
    plVar1 = (long *)func_0x00f78af4();
    return plVar1;
  }
  plVar1 = (long *)/*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar4 + 0x28),1,0,0,0);
  if (((ulong)plVar1 & 1) == 0) {
    *(undefined1 *)(lVar4 + 0x30) = 1;
  }
  return plVar1;
}



// ============================================================
// RVA: 0x15b702c | Atlas.UI.HostMigrationTransitionManager.OnHostMigrationStarted
// ============================================================

ulong Atlas_UI_HostMigrationTransitionManager__OnHostMigrationStarted(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam0000000003eb5291 & 1) == 0) {
    func_0x00f78a20(0x3d3e0f8);
    func_0x00f78a20(0x3d6d118);
    bRam0000000003eb5291 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$RemoveAllQueuedAndShowing*/ func_0x025e0480(*(long *)(param_1 + 0x20),0,uRam0000000003d3e0f8);
    uVar1 = /*STR('GENERIC_RECONNECTING')*/ uRam0000000003d6d118;
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      if ((bRam0000000003eb4d7a & 1) == 0) {
        func_0x00f78a20(0x3d417c0);
        bRam0000000003eb4d7a = 1;
      }
      if ((*(char *)(lVar3 + 0x10) == '\0') || (*(int *)(lVar3 + 0x30) != 0)) {
        uVar2 = 0;
      }
      else {
        *(undefined4 *)(lVar3 + 0x30) = 1;
        if (*(long *)(lVar3 + 0x38) != 0) {
          /*UnityEngine.Events.UnityEvent<int, string, Sprite>$$Invoke*/ func_0x01b86208(*(long *)(lVar3 + 0x38),1,uVar1,0,uRam0000000003d417c0);
        }
        /*Core.Input.InputManager$$SuspendAllInput*/ func_0x0164ade0(0);
        uVar2 = 1;
      }
      return uVar2;
    }
  }
  lVar3 = func_0x00f78af4();
  if (*(long *)(lVar3 + 0x28) == 0) {
    uVar2 = func_0x00f78af4();
    return uVar2;
  }
  uVar2 = /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar3 + 0x28),1,0,0,0);
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(lVar3 + 0x30) = 1;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x15b70b8 | Atlas.UI.HostMigrationTransitionManager.OnHostMigrationCompleted
// ============================================================

void Atlas_UI_HostMigrationTransitionManager__OnHostMigrationCompleted(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(param_1 + 0x28),1,0,0,0);
    if ((uVar1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15b7100 | Atlas.UI.HostMigrationTransitionManager..ctor
// ============================================================

void Atlas_UI_HostMigrationTransitionManager___ctor(void)

{
  return;
}



