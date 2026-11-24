// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.FreeplayScreen.<>c

// ============================================================
// RVA: 0x154c5c8 | Atlas.UI.Screens.FreeplayScreen.<>c..cctor
// ============================================================

void Atlas_UI_Screens_FreeplayScreen___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4f7b & 1) == 0) {
    func_0x00f78a20(0x3d275a8);
    bRam0000000003eb4f7b = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.UI.Screens.FreeplayScreen.<>c_TypeInfo*/ lRam0000000003d275a8);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  **(undefined8 **)(/*Atlas.UI.Screens.FreeplayScreen.<>c_TypeInfo*/ lRam0000000003d275a8 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x154c628 | Atlas.UI.Screens.FreeplayScreen.<>c..ctor
// ============================================================

void Atlas_UI_Screens_FreeplayScreen___c___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x154c630 | Atlas.UI.Screens.FreeplayScreen.<>c.<BuildFreeplayOptions>b__13_0
// ============================================================

undefined1  [16]
Atlas_UI_Screens_FreeplayScreen___c___BuildFreeplayOptions_b__13_0(undefined8 param_1,long param_2)

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



