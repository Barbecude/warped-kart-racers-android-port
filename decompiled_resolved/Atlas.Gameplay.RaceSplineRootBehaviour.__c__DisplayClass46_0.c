// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.RaceSplineRootBehaviour.<>c__DisplayClass46_0

// ============================================================
// RVA: 0x1563d50 | Atlas.Gameplay.RaceSplineRootBehaviour.<>c__DisplayClass46_0..ctor
// ============================================================

void Atlas_Gameplay_RaceSplineRootBehaviour___c__DisplayClass46_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1563d58 | Atlas.Gameplay.RaceSplineRootBehaviour.<>c__DisplayClass46_0.<OnCalculate>b__0
// ============================================================

ulong Atlas_Gameplay_RaceSplineRootBehaviour___c__DisplayClass46_0___OnCalculate_b__0
                (long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4fd4 & 1) == 0) {
    func_0x00f78a20(0x3d3aec0);
    bRam0000000003eb4fd4 = 1;
  }
  if (((param_2 != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x40), lVar3 != 0)) {
    iVar1 = *(int *)(param_2 + 0x14);
    if (*(int *)(lVar3 + 0x18) == 0) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + 0x20);
    if (lVar3 != 0) {
      return (ulong)(iVar1 == *(int *)(lVar3 + 0x38));
    }
  }
  uVar2 = func_0x00f78af4();
  return uVar2;
}



