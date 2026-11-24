// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SingleplayerChapterScreen.<>c__DisplayClass22_0

// ============================================================
// RVA: 0x156a4e0 | Atlas.UI.Screens.SingleplayerChapterScreen.<>c__DisplayClass22_0..ctor
// ============================================================

void Atlas_UI_Screens_SingleplayerChapterScreen___c__DisplayClass22_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x156a4e8 | Atlas.UI.Screens.SingleplayerChapterScreen.<>c__DisplayClass22_0.<OnBeforeEnter>b__0
// ============================================================

void Atlas_UI_Screens_SingleplayerChapterScreen___c__DisplayClass22_0___OnBeforeEnter_b__0
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uStack_44;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uStack_44 = uVar1;
    if ((bRam0000000003eb4cbc & 1) == 0) {
      func_0x00f78a20(0x3d79070,uVar3,uVar1,0);
      bRam0000000003eb4cbc = 1;
    }
    Atlas_UI_Screens_SingleplayerChapterScreen__SelectEvent(lVar2,uVar3,uVar1);
    uVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_44,0);
    uVar3 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('event:/UI/Front_End/Prologue_')*/ uRam0000000003d79070,uVar3,0);
    /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(uVar3,0);
    return;
  }
  func_0x00f78af4();
  return;
}



