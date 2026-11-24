// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Debugging.GameContextDebugBinding.<>c

// ============================================================
// RVA: 0x1552128 | Atlas.Debugging.GameContextDebugBinding.<>c..cctor
// ============================================================

void Atlas_Debugging_GameContextDebugBinding___c___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4f93 & 1) == 0) {
    func_0x00f78a20(0x3d276f0);
    bRam0000000003eb4f93 = 1;
  }
  uVar1 = func_0x00f78aec(/*Atlas.Debugging.GameContextDebugBinding.<>c_TypeInfo*/ lRam0000000003d276f0);
  /*System.Object$$.ctor*/ func_0x0294d018(uVar1,0);
  **(undefined8 **)(/*Atlas.Debugging.GameContextDebugBinding.<>c_TypeInfo*/ lRam0000000003d276f0 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1552188 | Atlas.Debugging.GameContextDebugBinding.<>c..ctor
// ============================================================

void Atlas_Debugging_GameContextDebugBinding___c___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x1552190 | Atlas.Debugging.GameContextDebugBinding.<>c.<Init>b__34_0
// ============================================================

void Atlas_Debugging_GameContextDebugBinding___c___Init_b__34_0
               (undefined8 param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_14,0);
  return;
}



// ============================================================
// RVA: 0x15521b8 | Atlas.Debugging.GameContextDebugBinding.<>c.<Init>b__34_4
// ============================================================

void Atlas_Debugging_GameContextDebugBinding___c___Init_b__34_4
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  if ((bRam0000000003eb4f94 & 1) == 0) {
    func_0x00f78a20(0x3d21b18);
    bRam0000000003eb4f94 = 1;
  }
  if (((*(ushort *)(/*Atlas.Debugging.GameContextDebugBinding_TypeInfo*/ lRam0000000003d21b18 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Debugging.GameContextDebugBinding_TypeInfo*/ lRam0000000003d21b18 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  **(undefined4 **)(/*Atlas.Debugging.GameContextDebugBinding_TypeInfo*/ lRam0000000003d21b18 + 0xb8) = param_3;
  return;
}



// ============================================================
// RVA: 0x1552228 | Atlas.Debugging.GameContextDebugBinding.<>c.<Init>b__34_7
// ============================================================

undefined1  [16]
Atlas_Debugging_GameContextDebugBinding___c___Init_b__34_7(undefined8 param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_2 != 0) {
    auVar1._0_8_ = *(undefined8 *)(param_2 + 0x18);
    auVar1._8_8_ = param_2;
    return auVar1;
  }
  auVar2._0_8_ = func_0x00f78af4();
  auVar2._8_8_ = 0;
  return auVar2;
}



