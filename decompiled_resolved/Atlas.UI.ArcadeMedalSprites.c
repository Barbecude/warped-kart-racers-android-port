// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.ArcadeMedalSprites

// ============================================================
// RVA: 0x144f288 | Atlas.UI.ArcadeMedalSprites.GetMedalSprite
// ============================================================

undefined8 Atlas_UI_ArcadeMedalSprites__GetMedalSprite(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  if (param_2 != 3) {
    puVar2 = param_1 + 3;
  }
  puVar1 = param_1 + 1;
  if (param_2 != 2) {
    puVar1 = puVar2;
  }
  puVar2 = param_1 + 2;
  if (param_2 != 1) {
    puVar2 = puVar1;
  }
  return *puVar2;
}



