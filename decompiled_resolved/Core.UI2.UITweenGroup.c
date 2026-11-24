// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UITweenGroup

// ============================================================
// RVA: 0x2f8d71c | Core.UI2.UITweenGroup.get_TweenAnimations
// ============================================================

undefined8 Core_UI2_UITweenGroup__get_TweenAnimations(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x2f8d724 | Core.UI2.UITweenGroup.GetTweenAnimation
// ============================================================

long Core_UI2_UITweenGroup__GetTweenAnimation(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) {
LAB_02f8d7a8:
    func_0x00f78af4();
LAB_02f8d7ac:
    uVar2 = func_0x00f78b24();
    lVar5 = func_0x00f78ac0(uVar2,0);
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar5;
  }
  uVar3 = *(uint *)(lVar5 + 0x18);
  if (0 < (int)uVar3) {
    uVar6 = 0;
    do {
      if (uVar3 <= uVar6) goto LAB_02f8d7ac;
      lVar4 = *(long *)(lVar5 + (long)(int)uVar6 * 8 + 0x20);
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) goto LAB_02f8d7a8;
      uVar1 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(lVar4 + 0x10),param_2,3,0);
      if ((uVar1 & 1) != 0) {
        return lVar4;
      }
      uVar6 = uVar6 + 1;
      uVar3 = *(uint *)(lVar5 + 0x18);
    } while ((int)uVar6 < (int)uVar3);
  }
  return 0;
}



// ============================================================
// RVA: 0x2f8d7b8 | Core.UI2.UITweenGroup..ctor
// ============================================================

undefined1  [16] Core_UI2_UITweenGroup___ctor(ulong param_1)

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



