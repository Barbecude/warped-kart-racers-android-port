// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UIScreen<object, object, object>

// ============================================================
// RVA: 0x28a6368 | Core.UI2.UIScreen<object, object, object>.get_Behaviour
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
// RVA: 0x28a63fc | Core.UI2.UIScreen<object, object, object>.get_ScreenParameters
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
// RVA: 0x28a6490 | Core.UI2.UIScreen<object, object, object>.get_SharedScreenParameters
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



// ============================================================
// RVA: 0x28a6524 | Core.UI2.UIScreen<object, object, object>..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Core_UI2_UIScreen_object__object__object____ctor(ulong param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x48) = _UNK_037235c0;
    return param_1;
  }
  lVar1 = func_0x00f78af4();
  return (ulong)(*(int *)(lVar1 + 0x10) != 0);
}



