// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.BackgroundBehaviour

// ============================================================
// RVA: 0x1472770 | Atlas.UI.Screens.BackgroundBehaviour.ShowBackground
// ============================================================

undefined1  [16] Atlas_UI_Screens_BackgroundBehaviour__ShowBackground(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar3;
  undefined *unaff_x30;
  undefined1 auVar4 [16];
  undefined *puStack_18;
  
  puVar3 = &stack0xfffffffffffffff0;
  lVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
  if (lVar1 == 0) {
    uVar2 = func_0x00f78af4();
    puStack_18 = &Atlas_UI_Screens_BackgroundBehaviour__HideBackground;
    lVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar2,0);
    if (lVar1 == 0) {
      auVar4._0_8_ = func_0x00f78af4();
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar4._8_8_ = 0;
      return auVar4;
    }
    uVar2 = 0;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x30 = puStack_18;
  }
  else {
    uVar2 = 1;
    puVar3 = unaff_x29;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar3;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar4 = (*pcRam0000000003ebf4c0)(lVar1,uVar2);
  return auVar4;
}



// ============================================================
// RVA: 0x1472798 | Atlas.UI.Screens.BackgroundBehaviour.HideBackground
// ============================================================

undefined1  [16] Atlas_UI_Screens_BackgroundBehaviour__HideBackground(undefined8 param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
  if (lVar1 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (*pcRam0000000003ebf4c0)(lVar1,0);
    return auVar2;
  }
  auVar2._0_8_ = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  return auVar2;
}



// ============================================================
// RVA: 0x14727c0 | Atlas.UI.Screens.BackgroundBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_BackgroundBehaviour___ctor(ulong param_1)

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



