// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.DebugMenu.ProxySelectable

// ============================================================
// RVA: 0x1643df4 | Core.DebugMenu.ProxySelectable.set_ForwardToSelectable
// ============================================================

void Core_DebugMenu_ProxySelectable__set_ForwardToSelectable(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xf8) = param_2;
  return;
}



// ============================================================
// RVA: 0x1643dfc | Core.DebugMenu.ProxySelectable.get_ForwardToSelectable
// ============================================================

undefined8 Core_DebugMenu_ProxySelectable__get_ForwardToSelectable(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



// ============================================================
// RVA: 0x1643e04 | Core.DebugMenu.ProxySelectable.OnSelect
// ============================================================

/* WARNING: Possible PIC construction at 0x01643ed8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01643edc) */
/* WARNING: Removing unreachable block (ram,0x01643ee0) */
/* WARNING: Removing unreachable block (ram,0x03247e70) */
/* WARNING: Removing unreachable block (ram,0x03247ef0) */
/* WARNING: Removing unreachable block (ram,0x03247e84) */
/* WARNING: Removing unreachable block (ram,0x03247e98) */
/* WARNING: Removing unreachable block (ram,0x03247eac) */
/* WARNING: Removing unreachable block (ram,0x03247f24) */
/* WARNING: Removing unreachable block (ram,0x03247f54) */
/* WARNING: Removing unreachable block (ram,0x03247f90) */
/* WARNING: Removing unreachable block (ram,0x03247fa4) */
/* WARNING: Removing unreachable block (ram,0x03247eb8) */
/* WARNING: Removing unreachable block (ram,0x03247ec4) */
/* WARNING: Removing unreachable block (ram,0x03247ed8) */

long Core_DebugMenu_ProxySelectable__OnSelect(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  
  if ((bRam0000000003eb5739 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5739 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xf8);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar3,0);
  if ((int)lVar1 == 0) {
    return lVar1;
  }
  plVar2 = *(long **)(param_1 + 0xf8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x378))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x380));
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (*(long *)(param_1 + 0xf8) != 0) {
      uVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0xf8),0);
      goto code_r0x01643f10;
    }
  }
  func_0x00f78af4();
  uVar3 = extraout_x1;
code_r0x01643f10:
  if ((bRam0000000003eb573a & 1) == 0) {
    func_0x00f78a20(0x3d28788);
    bRam0000000003eb573a = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.DebugMenu.ProxySelectable.<SelectOnNextFrameRoutine>d__5_TypeInfo*/ uRam0000000003d28788);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  return lVar1;
}



// ============================================================
// RVA: 0x1643f10 | Core.DebugMenu.ProxySelectable.SelectOnNextFrameRoutine
// ============================================================

long Core_DebugMenu_ProxySelectable__SelectOnNextFrameRoutine(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((bRam0000000003eb573a & 1) == 0) {
    func_0x00f78a20(0x3d28788);
    bRam0000000003eb573a = 1;
  }
  lVar1 = func_0x00f78aec(/*Core.DebugMenu.ProxySelectable.<SelectOnNextFrameRoutine>d__5_TypeInfo*/ uRam0000000003d28788);
  /*System.Object$$.ctor*/ func_0x0294d018(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  return lVar1;
}



// ============================================================
// RVA: 0x1643fa8 | Core.DebugMenu.ProxySelectable.OnDeselect
// ============================================================

undefined1  [16] Core_DebugMenu_ProxySelectable__OnDeselect(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb573b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb573b = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar2,0);
  if (auVar3._0_4_ != 0) {
    plVar1 = *(long **)(param_1 + 0xf8);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01644038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar3 = (**(code **)(*plVar1 + 0x388))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x390));
      return auVar3;
    }
    auVar3._0_8_ = func_0x00f78af4();
    if ((bRam0000000003eb573c & 1) == 0) {
      func_0x00f78a20(0x3d24848);
      bRam0000000003eb573c = 1;
    }
    if (((*(ushort *)(/*UnityEngine.UI.Selectable_TypeInfo*/ lRam0000000003d24848 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.Selectable_TypeInfo*/ lRam0000000003d24848 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003ec2dc7 & 1) == 0) {
      func_0x00f78a20(0x3d1fbf0,0);
      func_0x00f78a20(0x3d20830);
      func_0x00f78a20(0x3d39f30);
      func_0x00f78a20(0x3d1d828);
      bRam0000000003ec2dc7 = 1;
    }
    *(undefined4 *)(auVar3._0_8_ + 0x20) = 3;
    *(undefined8 *)(auVar3._0_8_ + 0x3c) = 0;
    *(undefined8 *)(auVar3._0_8_ + 0x34) = 0;
    *(undefined8 *)(auVar3._0_8_ + 0x2c) = 0;
    *(undefined8 *)(auVar3._0_8_ + 0x24) = 0;
    *(undefined8 *)(auVar3._0_8_ + 0x44) = 0x100000000;
    if (((*(byte *)(/*UnityEngine.UI.ColorBlock_TypeInfo*/ lRam0000000003d20830 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.ColorBlock_TypeInfo*/ lRam0000000003d20830 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    _memmove(auVar3._0_8_ + 0x4c,*(undefined8 *)(/*UnityEngine.UI.ColorBlock_TypeInfo*/ lRam0000000003d20830 + 0xb8),0x58);
    uVar2 = func_0x00f78aec(/*UnityEngine.UI.AnimationTriggers_TypeInfo*/ uRam0000000003d1fbf0);
    /*UnityEngine.UI.AnimationTriggers$$.ctor*/ func_0x032ab19c(uVar2,0);
    *(undefined8 *)(auVar3._0_8_ + 200) = uVar2;
    *(undefined1 *)(auVar3._0_8_ + 0xd0) = 1;
    *(undefined1 *)(auVar3._0_8_ + 0xe0) = 1;
    *(undefined4 *)(auVar3._0_8_ + 0xe4) = 0xffffffff;
    uVar2 = func_0x00f78aec(/*System.Collections.Generic.List<CanvasGroup>_TypeInfo*/ uRam0000000003d1d828);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar2,uRam0000000003d39f30);
    *(undefined8 *)(auVar3._0_8_ + 0xf0) = uVar2;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    auVar3._8_8_ = 0;
    return auVar3;
  }
  return auVar3;
}



// ============================================================
// RVA: 0x1644050 | Core.DebugMenu.ProxySelectable..ctor
// ============================================================

undefined1  [16] Core_DebugMenu_ProxySelectable___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb573c & 1) == 0) {
    func_0x00f78a20(0x3d24848);
    bRam0000000003eb573c = 1;
  }
  if (((*(ushort *)(/*UnityEngine.UI.Selectable_TypeInfo*/ lRam0000000003d24848 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.Selectable_TypeInfo*/ lRam0000000003d24848 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec2dc7 & 1) == 0) {
    func_0x00f78a20(0x3d1fbf0,0);
    func_0x00f78a20(0x3d20830);
    func_0x00f78a20(0x3d39f30);
    func_0x00f78a20(0x3d1d828);
    bRam0000000003ec2dc7 = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = 3;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0x100000000;
  if (((*(byte *)(/*UnityEngine.UI.ColorBlock_TypeInfo*/ lRam0000000003d20830 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.ColorBlock_TypeInfo*/ lRam0000000003d20830 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  _memmove(param_1 + 0x4c,*(undefined8 *)(/*UnityEngine.UI.ColorBlock_TypeInfo*/ lRam0000000003d20830 + 0xb8),0x58);
  uVar1 = func_0x00f78aec(/*UnityEngine.UI.AnimationTriggers_TypeInfo*/ uRam0000000003d1fbf0);
  /*UnityEngine.UI.AnimationTriggers$$.ctor*/ func_0x032ab19c(uVar1,0);
  *(undefined8 *)(param_1 + 200) = uVar1;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined1 *)(param_1 + 0xe0) = 1;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<CanvasGroup>_TypeInfo*/ uRam0000000003d1d828);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d39f30);
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
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



