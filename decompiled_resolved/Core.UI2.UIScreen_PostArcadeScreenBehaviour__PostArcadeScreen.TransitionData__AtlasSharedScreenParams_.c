// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UIScreen<PostArcadeScreenBehaviour, PostArcadeScreen.TransitionData, AtlasSharedScreenParams>

// ============================================================
// RVA: 0x28a6368 | Core.UI2.UIScreen<PostArcadeScreenBehaviour, PostArcadeScreen.TransitionData, AtlasSharedScreenParams>.get_Behaviour
// ============================================================

long Core_UI2_UIScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData__AtlasSharedScreenParams___get_Behaviour
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = **(long **)(*(long *)(param_2 + 0x18) + 0xc0);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = func_0x00f78adc(uVar2,lVar4);
  lVar3 = **(long **)(*(long *)(param_2 + 0x18) + 0xc0);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  if (lVar4 != 0) {
    lVar1 = func_0x00f78adc(lVar4,lVar3);
    if (lVar1 != 0) {
      return lVar1;
    }
    func_0x00f78e5c(lVar4,lVar3);
  }
  return 0;
}



// ============================================================
// RVA: 0x28a63fc | Core.UI2.UIScreen<PostArcadeScreenBehaviour, PostArcadeScreen.TransitionData, AtlasSharedScreenParams>.get_ScreenParameters
// ============================================================

long Core_UI2_UIScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData__AtlasSharedScreenParams___get_ScreenParameters
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = func_0x00f78adc(uVar2,lVar4);
  lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  if (lVar4 != 0) {
    lVar1 = func_0x00f78adc(lVar4,lVar3);
    if (lVar1 != 0) {
      return lVar1;
    }
    func_0x00f78e5c(lVar4,lVar3);
  }
  return 0;
}



// ============================================================
// RVA: 0x28a6490 | Core.UI2.UIScreen<PostArcadeScreenBehaviour, PostArcadeScreen.TransitionData, AtlasSharedScreenParams>.get_SharedScreenParameters
// ============================================================

long Core_UI2_UIScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData__AtlasSharedScreenParams___get_SharedScreenParameters
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  lVar4 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar4);
  }
  lVar4 = func_0x00f78adc(uVar2,lVar4);
  lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  if (lVar4 != 0) {
    lVar1 = func_0x00f78adc(lVar4,lVar3);
    if (lVar1 != 0) {
      return lVar1;
    }
    func_0x00f78e5c(lVar4,lVar3);
  }
  return 0;
}



