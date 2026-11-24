// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.RaceSplineSwitchLoop

// ============================================================
// RVA: 0x14dad64 | Atlas.Gameplay.RaceSplineSwitchLoop.OnUpdate
// ============================================================

void Atlas_Gameplay_RaceSplineSwitchLoop__OnUpdate(float param_1,long param_2)

{
  param_1 = *(float *)(param_2 + 0x1c) + param_1;
  *(float *)(param_2 + 0x1c) = param_1;
  if (*(float *)(param_2 + 0x18) <= param_1) {
    *(float *)(param_2 + 0x1c) = param_1 - *(float *)(param_2 + 0x18);
  }
  return;
}



// ============================================================
// RVA: 0x14dda18 | Atlas.Gameplay.RaceSplineSwitchLoop.get_Duration
// ============================================================

undefined4 Atlas_Gameplay_RaceSplineSwitchLoop__get_Duration(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x14dda20 | Atlas.Gameplay.RaceSplineSwitchLoop.get_Timer
// ============================================================

undefined4 Atlas_Gameplay_RaceSplineSwitchLoop__get_Timer(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ============================================================
// RVA: 0x14dda28 | Atlas.Gameplay.RaceSplineSwitchLoop.SetDuration
// ============================================================

void Atlas_Gameplay_RaceSplineSwitchLoop__SetDuration(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x18) = param_1;
  return;
}



// ============================================================
// RVA: 0x14dda30 | Atlas.Gameplay.RaceSplineSwitchLoop..ctor
// ============================================================

void Atlas_Gameplay_RaceSplineSwitchLoop___ctor(void)

{
  return;
}



