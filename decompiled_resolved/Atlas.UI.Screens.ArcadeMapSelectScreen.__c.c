// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.ArcadeMapSelectScreen.<>c

// ============================================================
// RVA: 0x1533718 | Atlas.UI.Screens.ArcadeMapSelectScreen.<>c..cctor
// ============================================================

void Atlas_UI_Screens_ArcadeMapSelectScreen___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4eb6 & 1) == 0) {
    func_0x00f78a20(0x3d26890);
    bRam0000000003eb4eb6 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c_TypeInfo*/ lRam0000000003d26890);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  **(undefined8 **)(/*Atlas.UI.Screens.ArcadeMapSelectScreen.<>c_TypeInfo*/ lRam0000000003d26890 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1533778 | Atlas.UI.Screens.ArcadeMapSelectScreen.<>c..ctor
// ============================================================

void Atlas_UI_Screens_ArcadeMapSelectScreen___c___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1533780 | Atlas.UI.Screens.ArcadeMapSelectScreen.<>c.<BuildMapPanels>b__37_0
// ============================================================

undefined1  [16]
Atlas_UI_Screens_ArcadeMapSelectScreen___c___BuildMapPanels_b__37_0(undefined8 param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_2 != 0) {
    auVar1._4_4_ = 0;
    auVar1._0_4_ = *(uint *)(param_2 + 0x58);
    auVar1._8_8_ = param_2;
    return auVar1;
  }
  auVar2._0_8_ = func_0x00f78af4();
  auVar2._8_8_ = 0;
  return auVar2;
}



