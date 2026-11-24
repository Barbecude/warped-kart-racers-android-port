// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.EndOfRoundScreen.<>c__DisplayClass25_0

// ============================================================
// RVA: 0x154be08 | Atlas.UI.Screens.EndOfRoundScreen.<>c__DisplayClass25_0..ctor
// ============================================================

void Atlas_UI_Screens_EndOfRoundScreen___c__DisplayClass25_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x154be10 | Atlas.UI.Screens.EndOfRoundScreen.<>c__DisplayClass25_0.<UpdateLeaderboard>b__0
// ============================================================

ulong Atlas_UI_Screens_EndOfRoundScreen___c__DisplayClass25_0___UpdateLeaderboard_b__0
                (long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int extraout_var;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam0000000003eb4f78 & 1) == 0) {
    func_0x00f78a20(0x3d1d508);
    bRam0000000003eb4f78 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 == (long *)0x0) {
    uVar4 = func_0x00f78af4();
    return uVar4;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == /*System.Collections.Generic.IList<EndOfRoundScreen.LeaderboardEntry>_TypeInfo*/ lRam0000000003d1d508) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0154bea8;
      }
      piVar5 = piVar5 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.IList<EndOfRoundScreen.LeaderboardEntry>_TypeInfo*/ lRam0000000003d1d508,0);
LAB_0154bea8:
  (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
  return (ulong)(*(int *)(param_2 + 0xc) == extraout_var);
}



