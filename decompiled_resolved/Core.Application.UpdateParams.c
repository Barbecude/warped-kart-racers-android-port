// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Application.UpdateParams

// ============================================================
// RVA: 0x1633e30 | Core.Application.UpdateParams.get_DeltaTime
// ============================================================

undefined4 Core_Application_UpdateParams__get_DeltaTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ============================================================
// RVA: 0x1633e38 | Core.Application.UpdateParams.set_DeltaTime
// ============================================================

void Core_Application_UpdateParams__set_DeltaTime(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}



// ============================================================
// RVA: 0x1633e40 | Core.Application.UpdateParams.get_UnscaledTime
// ============================================================

undefined4 Core_Application_UpdateParams__get_UnscaledTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ============================================================
// RVA: 0x1633e48 | Core.Application.UpdateParams.set_UnscaledTime
// ============================================================

void Core_Application_UpdateParams__set_UnscaledTime(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}



// ============================================================
// RVA: 0x1633e50 | Core.Application.UpdateParams.get_FrameCount
// ============================================================

undefined4 Core_Application_UpdateParams__get_FrameCount(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1633e58 | Core.Application.UpdateParams.set_FrameCount
// ============================================================

void Core_Application_UpdateParams__set_FrameCount(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ============================================================
// RVA: 0x1633e60 | Core.Application.UpdateParams.get_FixedDeltaTime
// ============================================================

undefined4 Core_Application_UpdateParams__get_FixedDeltaTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ============================================================
// RVA: 0x1633e68 | Core.Application.UpdateParams.set_FixedDeltaTime
// ============================================================

void Core_Application_UpdateParams__set_FixedDeltaTime(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x1c) = param_1;
  return;
}



// ============================================================
// RVA: 0x1633e70 | Core.Application.UpdateParams.get_LocalTime
// ============================================================

undefined4 Core_Application_UpdateParams__get_LocalTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1633e78 | Core.Application.UpdateParams.set_LocalTime
// ============================================================

void Core_Application_UpdateParams__set_LocalTime(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x20) = param_1;
  return;
}



// ============================================================
// RVA: 0x1633e80 | Core.Application.UpdateParams.Set
// ============================================================

void Core_Application_UpdateParams__Set(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = /*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = /*UnityEngine.Time$$get_fixedDeltaTime*/ func_0x03272c74(0);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = /*UnityEngine.Time$$get_unscaledDeltaTime*/ func_0x03272c40(0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = /*UnityEngine.Time$$get_frameCount*/ func_0x03272d54(0);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = /*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1633ed8 | Core.Application.UpdateParams..ctor
// ============================================================

void Core_Application_UpdateParams___ctor(void)

{
  return;
}



