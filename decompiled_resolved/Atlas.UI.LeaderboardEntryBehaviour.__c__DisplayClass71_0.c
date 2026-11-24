// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0

// ============================================================
// RVA: 0x155abe8 | Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0..ctor
// ============================================================

void Atlas_UI_LeaderboardEntryBehaviour___c__DisplayClass71_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x155abf0 | Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0.<StartLargeThenGoNormal>b__0
// ============================================================

void Atlas_UI_LeaderboardEntryBehaviour___c__DisplayClass71_0___StartLargeThenGoNormal_b__0
               (undefined4 param_1,long param_2)

{
  long lVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 != 0) {
    uStack_30 = param_1;
    uStack_2c = param_1;
    uStack_28 = param_1;
    if (pcRam0000000003ec19a8 == (code *)0x0) {
      pcRam0000000003ec19a8 =
           (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    (*pcRam0000000003ec19a8)(lVar1,&uStack_30);
    return;
  }
  func_0x00f78af4();
  return;
}



