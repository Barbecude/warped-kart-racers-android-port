// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Input.KartInputManager

// ============================================================
// RVA: 0x15ccf68 | Atlas.Input.KartInputManager.get_KartPhysicsAction
// ============================================================

void Atlas_Input_KartInputManager__get_KartPhysicsAction(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb5336 & 1) == 0) {
    func_0x00f78a20(0x3d1fea0);
    bRam0000000003eb5336 = 1;
  }
  if (*(char *)(lVar1 + 0x18) == '\0') {
    lVar2 = func_0x00f78aec(/*Atlas.Input.AtlasInput_TypeInfo*/ uRam0000000003d1fea0);
    Atlas_Input_AtlasInput___ctor(lVar2,0);
    *(long *)(lVar1 + 0x10) = lVar2;
    if (lVar2 == 0) {
      lVar1 = func_0x00f78af4();
      if (*(char *)(lVar1 + 0x18) != '\0') {
        *(undefined1 *)(lVar1 + 0x18) = 0;
      }
      return;
    }
    uStack_38 = Atlas_Input_AtlasInput__get_KartPhysics(lVar2,0);
    Atlas_Input_AtlasInput_KartPhysicsActions__Enable(&uStack_38,0);
    *(undefined1 *)(lVar1 + 0x18) = 1;
  }
  return;
}



// ============================================================
// RVA: 0x15ccf88 | Atlas.Input.KartInputManager.Init
// ============================================================

void Atlas_Input_KartInputManager__Init(long param_1)

{
  long lVar1;
  undefined8 uStack_28;
  
  if ((bRam0000000003eb5336 & 1) == 0) {
    func_0x00f78a20(0x3d1fea0);
    bRam0000000003eb5336 = 1;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    lVar1 = func_0x00f78aec(/*Atlas.Input.AtlasInput_TypeInfo*/ uRam0000000003d1fea0);
    Atlas_Input_AtlasInput___ctor(lVar1,0);
    *(long *)(param_1 + 0x10) = lVar1;
    if (lVar1 == 0) {
      lVar1 = func_0x00f78af4();
      if (*(char *)(lVar1 + 0x18) != '\0') {
        *(undefined1 *)(lVar1 + 0x18) = 0;
      }
      return;
    }
    uStack_28 = Atlas_Input_AtlasInput__get_KartPhysics(lVar1,0);
    Atlas_Input_AtlasInput_KartPhysicsActions__Enable(&uStack_28,0);
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}



// ============================================================
// RVA: 0x15cd020 | Atlas.Input.KartInputManager.DeInit
// ============================================================

void Atlas_Input_KartInputManager__DeInit(long param_1)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// ============================================================
// RVA: 0x15cd030 | Atlas.Input.KartInputManager.Update
// ============================================================

void Atlas_Input_KartInputManager__Update(void)

{
  return;
}



// ============================================================
// RVA: 0x15cd034 | Atlas.Input.KartInputManager.ResetLeftJoystick
// ============================================================

void Atlas_Input_KartInputManager__ResetLeftJoystick(long param_1)

{
  long lVar1;
  undefined8 uStack_18;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    uStack_18 = Atlas_Input_AtlasInput__get_KartPhysics(*(long *)(param_1 + 0x10),0);
    lVar1 = Atlas_Input_AtlasInput_KartPhysicsActions__get_LeftJoystick(&uStack_18,0);
    if (lVar1 != 0) {
      /*UnityEngine.InputSystem.InputAction$$Reset*/ func_0x030236b0(lVar1,0);
      return;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x15cd07c | Atlas.Input.KartInputManager..ctor
// ============================================================

void Atlas_Input_KartInputManager___ctor(void)

{
  return;
}



