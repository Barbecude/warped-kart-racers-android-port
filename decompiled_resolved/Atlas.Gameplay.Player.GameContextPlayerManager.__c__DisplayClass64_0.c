// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Player.GameContextPlayerManager.<>c__DisplayClass64_0

// ============================================================
// RVA: 0x1554988 | Atlas.Gameplay.Player.GameContextPlayerManager.<>c__DisplayClass64_0..ctor
// ============================================================

void Atlas_Gameplay_Player_GameContextPlayerManager___c__DisplayClass64_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1554990 | Atlas.Gameplay.Player.GameContextPlayerManager.<>c__DisplayClass64_0.<Init>b__0
// ============================================================

ulong Atlas_Gameplay_Player_GameContextPlayerManager___c__DisplayClass64_0___Init_b__0
                (long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam0000000003eb4f9c & 1) == 0) {
    func_0x00f78a20(0x3d3ae38);
    bRam0000000003eb4f9c = 1;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
      /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar1 * 8 + 0x20);
    if (lVar4 != 0) {
      return (ulong)(*(int *)(lVar4 + 0x54) == *(int *)(param_2 + 0xc));
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4f9d & 1) == 0) {
    func_0x00f78a20(0x3d27758);
    bRam0000000003eb4f9d = 1;
  }
  uVar2 = func_0x00f78aec(/*Atlas.UI.Screens.GameInProgressScreen.<>c_TypeInfo*/ lRam0000000003d27758);
  uVar3 = /*System.Object$$.ctor*/ func_0x0294d018(uVar2,0);
  **(undefined8 **)(/*Atlas.UI.Screens.GameInProgressScreen.<>c_TypeInfo*/ lRam0000000003d27758 + 0xb8) = uVar2;
  return uVar3;
}



