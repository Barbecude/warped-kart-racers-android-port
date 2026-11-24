// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0

// ============================================================
// RVA: 0x156623c | Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0..ctor
// ============================================================

void Atlas_UI_Screens_SaveGameScreen___c__DisplayClass21_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1566244 | Atlas.UI.Screens.SaveGameScreen.<>c__DisplayClass21_0.<ConfirmDeleteLastPrompt>b__0
// ============================================================

void Atlas_UI_Screens_SaveGameScreen___c__DisplayClass21_0___ConfirmDeleteLastPrompt_b__0
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x80);
    uVar1 = Atlas_UI_Screens_SaveGameScreen__DeleteLastSlot(lVar2,*(undefined4 *)(param_1 + 0x18),0)
    ;
    if (lVar3 != 0) {
      uVar1 = Core_Application_CoroutineRunner__StartCoroutine(lVar3,uVar1,0);
      *(undefined8 *)(lVar2 + 0x88) = uVar1;
      return;
    }
  }
  func_0x00f78af4();
  return;
}



