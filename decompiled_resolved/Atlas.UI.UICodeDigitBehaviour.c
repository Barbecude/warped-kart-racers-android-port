// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UICodeDigitBehaviour

// ============================================================
// RVA: 0x151a0b0 | Atlas.UI.UICodeDigitBehaviour.get_DigitText
// ============================================================

undefined8 Atlas_UI_UICodeDigitBehaviour__get_DigitText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x151a0b8 | Atlas.UI.UICodeDigitBehaviour.SetCursorVisible
// ============================================================

undefined8 Atlas_UI_UICodeDigitBehaviour__SetCursorVisible(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auVar4 [12];
  unkbyte10 Var5;
  undefined4 uStack_74;
  undefined2 uStack_42;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (pcRam0000000003ebe9d8 == (code *)0x0) {
      pcRam0000000003ebe9d8 =
           (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000003ebe9d8)(lVar1,param_2);
    return uVar3;
  }
  lVar1 = func_0x00f78af4();
  plVar2 = *(long **)(lVar1 + 0x18);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0151a0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x558))(plVar2,0,*(undefined8 *)(*plVar2 + 0x560));
    return uVar3;
  }
  Var5 = func_0x00f78af4();
  uStack_42 = (undefined2)((unkuint10)Var5 >> 0x40);
  plVar2 = *(long **)((long)Var5 + 0x18);
  uVar3 = /*System.Char$$ToString*/ func_0x02a2dcd0(&uStack_42,0);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x558))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x560));
    return uVar3;
  }
  auVar4 = func_0x00f78af4();
  uStack_74 = auVar4._8_4_;
  plVar2 = *(long **)(auVar4._0_8_ + 0x18);
  uVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_74,0);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x558))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x560));
    return uVar3;
  }
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar3;
}



// ============================================================
// RVA: 0x151a0d8 | Atlas.UI.UICodeDigitBehaviour.HideDigit
// ============================================================

undefined8 Atlas_UI_UICodeDigitBehaviour__HideDigit(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auVar3 [12];
  unkbyte10 Var4;
  undefined4 uStack_64;
  undefined2 uStack_32;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0151a0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x558))(plVar1,0,*(undefined8 *)(*plVar1 + 0x560));
    return uVar2;
  }
  Var4 = func_0x00f78af4();
  uStack_32 = (undefined2)((unkuint10)Var4 >> 0x40);
  plVar1 = *(long **)((long)Var4 + 0x18);
  uVar2 = /*System.Char$$ToString*/ func_0x02a2dcd0(&uStack_32,0);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x558))(plVar1,uVar2,*(undefined8 *)(*plVar1 + 0x560));
    return uVar2;
  }
  auVar3 = func_0x00f78af4();
  uStack_64 = auVar3._8_4_;
  plVar1 = *(long **)(auVar3._0_8_ + 0x18);
  uVar2 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_64,0);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x558))(plVar1,uVar2,*(undefined8 *)(*plVar1 + 0x560));
    return uVar2;
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar2;
}



// ============================================================
// RVA: 0x151a104 | Atlas.UI.UICodeDigitBehaviour.SetDigit
// ============================================================

undefined8 Atlas_UI_UICodeDigitBehaviour__SetDigit(long param_1,undefined2 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auVar3 [12];
  undefined4 uStack_54;
  undefined2 uStack_22;
  
  plVar2 = *(long **)(param_1 + 0x18);
  uStack_22 = param_2;
  uVar1 = /*System.Char$$ToString*/ func_0x02a2dcd0(&uStack_22,0);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x558))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x560));
    return uVar1;
  }
  auVar3 = func_0x00f78af4();
  uStack_54 = auVar3._8_4_;
  plVar2 = *(long **)(auVar3._0_8_ + 0x18);
  uVar1 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_54,0);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x558))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x560));
    return uVar1;
  }
  uVar1 = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar1;
}



// ============================================================
// RVA: 0x151a158 | Atlas.UI.UICodeDigitBehaviour.SetDigit
// ============================================================

undefined8 Atlas_UI_UICodeDigitBehaviour__SetDigit(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 uStack_24;
  
  plVar2 = *(long **)(param_1 + 0x18);
  uStack_24 = param_2;
  uVar1 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_24,0);
  if (plVar2 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x558))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x560));
    return uVar1;
  }
  uVar1 = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar1;
}



// ============================================================
// RVA: 0x151a1ac | Atlas.UI.UICodeDigitBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_UICodeDigitBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



