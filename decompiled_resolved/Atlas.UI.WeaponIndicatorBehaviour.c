// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.WeaponIndicatorBehaviour

// ============================================================
// RVA: 0x1530c30 | Atlas.UI.WeaponIndicatorBehaviour.SetSpacing
// ============================================================

/* WARNING: Possible PIC construction at 0x01530d18: Changing call to branch */

undefined8 Atlas_UI_WeaponIndicatorBehaviour__SetSpacing(float param_1,long param_2)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar5;
  float fVar6;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ea6 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ea6 = 1;
  }
  lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0);
  if (lVar3 != 0) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,0.0 < param_1,0);
    lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0);
    if (lVar3 != 0) {
      uVar4 = /*UnityEngine.GameObject$$get_activeSelf*/ func_0x0322ef6c(lVar3,0);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      fVar5 = (float)/*UnityEngine.Mathf$$Min*/ func_0x0323cce0(param_1,0x3f800000,0);
      fVar6 = *(float *)(param_2 + 0x28);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar5 = fVar5 * fVar6;
      iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
      if (iVar2 == 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        if ((*(long *)(param_2 + 0x20) != 0) &&
           (lVar3 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_2 + 0x20),0), lVar3 != 0)) {
          fVar5 = -fVar5;
          goto code_r0x03254d08;
        }
      }
      else if ((*(long *)(param_2 + 0x18) != 0) &&
              (lVar3 = /*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(param_2 + 0x18),0), lVar3 != 0)) {
        unaff_x30 = 0x1530d1c;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        unaff_x19 = param_2;
        unaff_x20 = uVar4;
        unaff_x29 = puVar1;
code_r0x03254d08:
        *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        *(float *)((long)register0x00000008 + -0x28) = fVar5;
        *(undefined4 *)((long)register0x00000008 + -0x24) = 0;
        if (pcRam0000000003ec07e0 == (code *)0x0) {
          pcRam0000000003ec07e0 =
               (code *)func_0x00f789d4("UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)"
                                       ,0);
        }
        uVar4 = (*pcRam0000000003ec07e0)(lVar3,(undefined1 *)((long)register0x00000008 + -0x28));
        return uVar4;
      }
    }
  }
  uVar4 = func_0x00f78af4();
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar4;
}



// ============================================================
// RVA: 0x1530d94 | Atlas.UI.WeaponIndicatorBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_WeaponIndicatorBehaviour___ctor(ulong param_1)

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



