// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.DebugMenu.DebugUIToggleBehaviour

// ============================================================
// RVA: 0x1642358 | Core.DebugMenu.DebugUIToggleBehaviour.set_Toggled
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1643da4 | Core.DebugMenu.DebugUIToggleBehaviour.get_Toggle
// ============================================================

undefined8 Core_DebugMenu_DebugUIToggleBehaviour__get_Toggle(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1643dac | Core.DebugMenu.DebugUIToggleBehaviour.get_Toggled
// ============================================================

ulong Core_DebugMenu_DebugUIToggleBehaviour__get_Toggled(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if (*(long *)(param_1 + 0x18) != 0) {
    return (ulong)*(byte *)(*(long *)(param_1 + 0x18) + 0x118);
  }
  auVar8 = func_0x00f78af4();
  plVar2 = *(long **)(auVar8._0_8_ + 0x18);
  if (plVar2 == (long *)0x0) {
    uVar3 = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar3;
  }
  if ((bRam0000000003ec2dc6 & 1) == 0) {
    func_0x00f78a20(0x3d216c0,auVar8._8_8_,0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5ce68);
    bRam0000000003ec2dc6 = 1;
  }
  uVar3 = /*UnityEngine.UI.SetPropertyUtility$$SetStruct<bool>*/ func_0x018dfa24(plVar2 + 0x1a,auVar8._8_8_,uRam0000000003d5ce68);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  if ((char)plVar2[0x1a] == '\0') {
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
    if (iVar1 != 0) {
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar5 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      if (lVar5 == 0) {
code_r0x032e3d84:
        lVar5 = func_0x00f78af4();
        return (ulong)*(byte *)(lVar5 + 0xe8);
      }
      uVar7 = *(undefined8 *)(lVar5 + 0x38);
      uVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar2,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,uVar4,0);
      if (iVar1 != 0) {
        if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar5 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
        if (lVar5 == 0) goto code_r0x032e3d84;
        /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar5,0,0);
      }
    }
  }
  iVar1 = (**(code **)(*plVar2 + 0x2b8))(plVar2,*(undefined8 *)(*plVar2 + 0x2c0));
  if (iVar1 == 0) {
    uVar6 = 4;
  }
  else if (*(char *)((long)plVar2 + 0xe9) == '\0') {
    if (*(char *)((long)plVar2 + 0xea) == '\0') {
      uVar6 = (undefined1)plVar2[0x1d];
    }
    else {
      uVar6 = 3;
    }
  }
  else {
    uVar6 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x032e38f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x2d8))(plVar2,uVar6,0,*(undefined8 *)(*plVar2 + 0x2e0));
  return uVar3;
}



// ============================================================
// RVA: 0x1643dcc | Core.DebugMenu.DebugUIToggleBehaviour.set_Interactable
// ============================================================

ulong Core_DebugMenu_DebugUIToggleBehaviour__set_Interactable(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 == (long *)0x0) {
    uVar3 = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return uVar3;
  }
  if ((bRam0000000003ec2dc6 & 1) == 0) {
    func_0x00f78a20(0x3d216c0,param_2,0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5ce68);
    bRam0000000003ec2dc6 = 1;
  }
  uVar3 = /*UnityEngine.UI.SetPropertyUtility$$SetStruct<bool>*/ func_0x018dfa24(plVar2 + 0x1a,param_2,uRam0000000003d5ce68);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  if ((char)plVar2[0x1a] == '\0') {
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
    if (iVar1 != 0) {
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar5 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      if (lVar5 == 0) {
code_r0x032e3d84:
        lVar5 = func_0x00f78af4();
        return (ulong)*(byte *)(lVar5 + 0xe8);
      }
      uVar7 = *(undefined8 *)(lVar5 + 0x38);
      uVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar2,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,uVar4,0);
      if (iVar1 != 0) {
        if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar5 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
        if (lVar5 == 0) goto code_r0x032e3d84;
        /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar5,0,0);
      }
    }
  }
  iVar1 = (**(code **)(*plVar2 + 0x2b8))(plVar2,*(undefined8 *)(*plVar2 + 0x2c0));
  if (iVar1 == 0) {
    uVar6 = 4;
  }
  else if (*(char *)((long)plVar2 + 0xe9) == '\0') {
    if (*(char *)((long)plVar2 + 0xea) == '\0') {
      uVar6 = (undefined1)plVar2[0x1d];
    }
    else {
      uVar6 = 3;
    }
  }
  else {
    uVar6 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x032e38f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x2d8))(plVar2,uVar6,0,*(undefined8 *)(*plVar2 + 0x2e0));
  return uVar3;
}



// ============================================================
// RVA: 0x1643dec | Core.DebugMenu.DebugUIToggleBehaviour..ctor
// ============================================================

undefined1  [16] Core_DebugMenu_DebugUIToggleBehaviour___ctor(ulong param_1)

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



