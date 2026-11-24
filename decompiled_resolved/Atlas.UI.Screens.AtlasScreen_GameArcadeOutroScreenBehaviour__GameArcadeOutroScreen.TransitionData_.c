// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.AtlasScreen<GameArcadeOutroScreenBehaviour, GameArcadeOutroScreen.TransitionData>

// ============================================================
// RVA: 0x1cb5920 | Atlas.UI.Screens.AtlasScreen<GameArcadeOutroScreenBehaviour, GameArcadeOutroScreen.TransitionData>.CanProgressToNextScreen
// ============================================================

undefined8
Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData___CanProgressToNextScreen
          (void)

{
  return 1;
}



// ============================================================
// RVA: 0x1cb5944 | Atlas.UI.Screens.AtlasScreen<GameArcadeOutroScreenBehaviour, GameArcadeOutroScreen.TransitionData>..ctor
// ============================================================

void Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData____ctor
               (long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar5 = func_0x00f78af4();
  puVar2 = auVar5._8_8_;
  puVar1 = auVar5._0_8_;
  uVar4 = puVar2[1];
  uVar3 = *puVar2;
  puVar1[2] = puVar2[2];
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  return;
}



