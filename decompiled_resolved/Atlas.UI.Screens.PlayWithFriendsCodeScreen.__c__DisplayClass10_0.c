// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.PlayWithFriendsCodeScreen.<>c__DisplayClass10_0

// ============================================================
// RVA: 0x1562170 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.<>c__DisplayClass10_0..ctor
// ============================================================

void Atlas_UI_Screens_PlayWithFriendsCodeScreen___c__DisplayClass10_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1562178 | Atlas.UI.Screens.PlayWithFriendsCodeScreen.<>c__DisplayClass10_0.<OnBeforeEnter>b__0
// ============================================================

void Atlas_UI_Screens_PlayWithFriendsCodeScreen___c__DisplayClass10_0___OnBeforeEnter_b__0
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    Atlas_UI_Screens_PlayWithFriendsCodeScreen__AddNewDigit(lVar2,iVar1 + 0x30U & 0xffff,0);
    *(int *)(lVar2 + 0x8c) = iVar1;
    return;
  }
  auVar3 = func_0x00f78af4();
  lVar2 = auVar3._0_8_;
  *(undefined8 *)(lVar2 + 0x10) = *param_3;
  *(long *)(lVar2 + 0x20) = auVar3._8_8_;
  *(undefined8 **)(lVar2 + 0x28) = param_3;
  return;
}



