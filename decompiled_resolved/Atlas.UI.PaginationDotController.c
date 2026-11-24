// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.PaginationDotController

// ============================================================
// RVA: 0x14b5cf0 | Atlas.UI.PaginationDotController.get_TargetScroller
// ============================================================

undefined8 Atlas_UI_PaginationDotController__get_TargetScroller(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x14b5cf8 | Atlas.UI.PaginationDotController.get_DotToHighlight
// ============================================================

undefined4 Atlas_UI_PaginationDotController__get_DotToHighlight(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



// ============================================================
// RVA: 0x14b5d00 | Atlas.UI.PaginationDotController.get_DotsContainerSize
// ============================================================

undefined4 Atlas_UI_PaginationDotController__get_DotsContainerSize(long param_1)

{
  return *(undefined4 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x14b5d08 | Atlas.UI.PaginationDotController.SetDotAmount
// ============================================================

/* WARNING: Possible PIC construction at 0x014b5f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f8c) */
/* WARNING: Removing unreachable block (ram,0x03277fa8) */
/* WARNING: Removing unreachable block (ram,0x03277f98) */
/* WARNING: Removing unreachable block (ram,0x03231580) */
/* WARNING: Removing unreachable block (ram,0x032315a4) */
/* WARNING: Removing unreachable block (ram,0x032315b8) */
/* WARNING: Removing unreachable block (ram,0x032315ec) */
/* WARNING: Removing unreachable block (ram,0x03231634) */
/* WARNING: Removing unreachable block (ram,0x0323169c) */
/* WARNING: Removing unreachable block (ram,0x032316b8) */
/* WARNING: Removing unreachable block (ram,0x032316d4) */
/* WARNING: Removing unreachable block (ram,0x0323175c) */
/* WARNING: Removing unreachable block (ram,0x03231768) */
/* WARNING: Removing unreachable block (ram,0x032316e4) */
/* WARNING: Removing unreachable block (ram,0x032316ec) */
/* WARNING: Removing unreachable block (ram,0x032316f4) */
/* WARNING: Removing unreachable block (ram,0x03231700) */
/* WARNING: Removing unreachable block (ram,0x03231718) */
/* WARNING: Removing unreachable block (ram,0x03231720) */
/* WARNING: Removing unreachable block (ram,0x0323172c) */
/* WARNING: Removing unreachable block (ram,0x03231734) */
/* WARNING: Removing unreachable block (ram,0x03231738) */
/* WARNING: Removing unreachable block (ram,0x0323174c) */
/* WARNING: Removing unreachable block (ram,0x03231758) */
/* WARNING: Removing unreachable block (ram,0x032317bc) */
/* WARNING: Removing unreachable block (ram,0x032317dc) */
/* WARNING: Removing unreachable block (ram,0x032317f0) */
/* WARNING: Removing unreachable block (ram,0x0323181c) */
/* WARNING: Removing unreachable block (ram,0x0323183c) */
/* WARNING: Removing unreachable block (ram,0x03231850) */
/* WARNING: Removing unreachable block (ram,0x0323187c) */
/* WARNING: Removing unreachable block (ram,0x0323189c) */
/* WARNING: Removing unreachable block (ram,0x032318bc) */
/* WARNING: Removing unreachable block (ram,0x032318c4) */
/* WARNING: Removing unreachable block (ram,0x032318cc) */
/* WARNING: Removing unreachable block (ram,0x032318e4) */
/* WARNING: Removing unreachable block (ram,0x03231920) */
/* WARNING: Removing unreachable block (ram,0x03231954) */
/* WARNING: Removing unreachable block (ram,0x03231974) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x03231900) */
/* WARNING: Removing unreachable block (ram,0x03231910) */
/* WARNING: Removing unreachable block (ram,0x03231858) */
/* WARNING: Removing unreachable block (ram,0x032317f8) */
/* WARNING: Removing unreachable block (ram,0x032315c0) */

long Atlas_UI_PaginationDotController__SetDotAmount(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  undefined *unaff_x30;
  undefined *puVar7;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  *(undefined4 *)(param_1 + 0x20) = param_2;
  puVar2 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(ulong *)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    puVar6 = puVar2 + -0x10;
    lVar3 = param_1;
    if ((bRam0000000003eb4abb & 1) == 0) {
      func_0x00f78a20(0x3d2a350);
      func_0x00f78a20(0x3d1b5b0);
      func_0x00f78a20(0x3d57948);
      func_0x00f78a20(0x3d5b0d0);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d5b3a8);
      func_0x00f78a20(0x3d5b398);
      func_0x00f78a20(0x3d5b3a0);
      lVar3 = func_0x00f78a20(0x3d25740);
      bRam0000000003eb4abb = 1;
    }
    if (*(char *)(param_1 + 0x88) != '\0') {
      return lVar3;
    }
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x9c);
    if (0 < *(int *)(param_1 + 0x20)) {
      unaff_x20 = 0;
      unaff_x23 = 0x3d57948;
      unaff_x24 = 0x3d23990;
      unaff_x25 = 0x3d5b0d0;
      do {
        if ((int)unaff_x20 == 0) {
          lVar3 = *(long *)(param_1 + 0x28);
        }
        else {
          unaff_x21 = *(undefined8 *)(param_1 + 0x30);
          unaff_x22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar3 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(unaff_x21,unaff_x22,uRam0000000003d5b0d0);
        }
        if (lVar3 == 0) goto code_r0x014b5fbc;
        uVar4 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar3,uRam0000000003d57948);
        /*Atlas.UI.PaginationDotController$$InitDot*/ func_0x014b60e0(param_1,uVar4,unaff_x20);
        uVar1 = (int)unaff_x20 + 1;
        unaff_x20 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(param_1 + 0x20));
    }
    lVar3 = /*Atlas.UI.PaginationDotController$$SetDotHighlightStates*/ func_0x014b620c(param_1);
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined1 *)(param_1 + 0x88) = 1;
    if (*(char *)(param_1 + 0xa4) == '\0') {
code_r0x014b5f10:
      if (*(long *)(param_1 + 0x50) == 0) {
        if (*(long *)(param_1 + 0x58) == 0) {
          return lVar3;
        }
        lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,param_1,uRam0000000003d5b3a0,0);
        unaff_x20 = 0;
        if (lVar3 != 0) {
          puVar6 = *(undefined1 **)(puVar2 + -0x10);
          puVar7 = *(undefined **)(puVar2 + -8);
          lVar5 = *(long *)(puVar2 + -0x20);
          param_1 = *(long *)(puVar2 + -0x18);
          unaff_x22 = *(undefined8 *)(puVar2 + -0x30);
          uVar4 = *(undefined8 *)(puVar2 + -0x28);
          goto code_r0x03277f74;
        }
      }
      else {
        lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,param_1,uRam0000000003d5b398,0);
        unaff_x20 = 0;
        if (lVar3 != 0) {
          puVar7 = &UNK_014b5f5c;
          puVar2 = puVar2 + -0x50;
          lVar5 = lVar3;
          uVar4 = unaff_x21;
code_r0x03277f74:
          *(long *)(puVar2 + -0x20) = lVar5;
          *(long *)(puVar2 + -0x18) = param_1;
          *(undefined1 **)(puVar2 + -0x10) = puVar6;
          *(undefined **)(puVar2 + -8) = puVar7;
          *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
          *(undefined8 *)(puVar2 + -0x48) = uVar4;
          *(long *)(puVar2 + -0x40) = lVar5;
          *(long *)(puVar2 + -0x38) = lVar3;
          *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x28) = &UNK_03277f8c;
          if ((bRam0000000003ec1a32 & 1) == 0) {
            func_0x00f78a20(0x3d22a90,unaff_x21,0);
            bRam0000000003ec1a32 = 1;
          }
          lVar3 = func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
          /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x032313fc(lVar3,unaff_x21,0);
          return lVar3;
        }
      }
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
      if ((int)lVar3 == 0) goto code_r0x014b5f10;
      lVar3 = *(long *)(param_1 + 0xa8);
      unaff_x21 = func_0x00f78aec(/*System.Action<UIAtlasButton>_TypeInfo*/ uRam0000000003d1b5b0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,param_1,uRam0000000003d5b3a8,uRam0000000003d2a350);
      unaff_x20 = 0;
      if (lVar3 != 0) {
        lVar3 = /*Atlas.UI.UIAtlasButtonGroup$$add_OnButtonSelectedEvent*/ func_0x01515dfc(lVar3,unaff_x21,0);
        goto code_r0x014b5f10;
      }
    }
code_r0x014b5fbc:
    lVar3 = func_0x00f78af4();
    *(ulong *)(puVar2 + -0x70) = unaff_x20;
    *(long *)(puVar2 + -0x68) = param_1;
    *(undefined1 **)(puVar2 + -0x60) = puVar6;
    *(undefined **)(puVar2 + -0x58) = &Atlas_UI_PaginationDotController__DisablePagination;
    if (*(long *)(lVar3 + 0x18) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar3 + 0x18),0,0);
      lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0);
      if (lVar5 != 0) {
        *(undefined8 *)(puVar2 + -0x80) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x78) = unaff_x21;
        *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0x70);
        *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(puVar2 + -0x68);
        *(undefined8 *)(puVar2 + -0x60) = *(undefined8 *)(puVar2 + -0x60);
        *(undefined8 *)(puVar2 + -0x58) = *(undefined8 *)(puVar2 + -0x58);
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar3 = (*pcRam0000000003ebf4c0)(lVar5,0);
        return lVar3;
      }
    }
    lVar5 = func_0x00f78af4();
    *(undefined4 *)(lVar5 + 0x7c) = extraout_s0;
    *(ulong *)(puVar2 + -0x90) = unaff_x20;
    *(long *)(puVar2 + -0x88) = lVar3;
    *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x60;
    *(undefined **)(puVar2 + -0x78) = &Atlas_UI_PaginationDotController__ScrollToTarget;
    if (*(long *)(lVar5 + 0x18) != 0) {
      lVar3 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(lVar5 + 0x18),0);
      *(float *)(lVar5 + 0x80) = extraout_s0_00;
      if (*(char *)(lVar5 + 0x38) != '\0') {
        *(float *)(lVar5 + 0x9c) =
             *(float *)(lVar5 + 0xa0) *
             ((1.0 - ABS(extraout_s0_00 - *(float *)(lVar5 + 0x7c))) + 1.0) * 0.5;
      }
      *(undefined1 *)(lVar5 + 0x78) = 1;
      *(undefined4 *)(lVar5 + 0x84) = 0;
      if (*(long *)(lVar5 + 0x18) != 0) {
        *(undefined1 *)(*(long *)(lVar5 + 0x18) + 0x20) = 0;
        return lVar3;
      }
    }
    unaff_x19 = func_0x00f78af4();
    *(undefined8 *)(puVar2 + -0xc0) = unaff_d9;
    *(undefined8 *)(puVar2 + -0xb8) = unaff_d8;
    *(ulong *)(puVar2 + -0xb0) = unaff_x20;
    *(long *)(puVar2 + -0xa8) = lVar5;
    *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x80;
    *(undefined **)(puVar2 + -0x98) = &Atlas_UI_PaginationDotController__SnapToTarget;
    unaff_x29 = puVar2 + -0xa0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      lVar3 = /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(*(long *)(unaff_x19 + 0x18),0);
      *(undefined4 *)(unaff_x19 + 0x7c) = extraout_s0_01;
      return lVar3;
    }
    unaff_x30 = &Atlas_UI_PaginationDotController__Start;
    param_1 = func_0x00f78af4();
    puVar2 = puVar2 + -0xc0;
    if (*(char *)(param_1 + 0x24) != '\0') {
      return param_1;
    }
  } while( true );
}



// ============================================================
// RVA: 0x14b5d10 | Atlas.UI.PaginationDotController.Setup
// ============================================================

/* WARNING: Possible PIC construction at 0x014b5f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f8c) */
/* WARNING: Removing unreachable block (ram,0x03277fa8) */
/* WARNING: Removing unreachable block (ram,0x03277f98) */
/* WARNING: Removing unreachable block (ram,0x03231580) */
/* WARNING: Removing unreachable block (ram,0x032315a4) */
/* WARNING: Removing unreachable block (ram,0x032315b8) */
/* WARNING: Removing unreachable block (ram,0x032315ec) */
/* WARNING: Removing unreachable block (ram,0x03231634) */
/* WARNING: Removing unreachable block (ram,0x0323169c) */
/* WARNING: Removing unreachable block (ram,0x032316b8) */
/* WARNING: Removing unreachable block (ram,0x032316d4) */
/* WARNING: Removing unreachable block (ram,0x0323175c) */
/* WARNING: Removing unreachable block (ram,0x03231768) */
/* WARNING: Removing unreachable block (ram,0x032316e4) */
/* WARNING: Removing unreachable block (ram,0x032316ec) */
/* WARNING: Removing unreachable block (ram,0x032316f4) */
/* WARNING: Removing unreachable block (ram,0x03231700) */
/* WARNING: Removing unreachable block (ram,0x03231718) */
/* WARNING: Removing unreachable block (ram,0x03231720) */
/* WARNING: Removing unreachable block (ram,0x0323172c) */
/* WARNING: Removing unreachable block (ram,0x03231734) */
/* WARNING: Removing unreachable block (ram,0x03231738) */
/* WARNING: Removing unreachable block (ram,0x0323174c) */
/* WARNING: Removing unreachable block (ram,0x03231758) */
/* WARNING: Removing unreachable block (ram,0x032317bc) */
/* WARNING: Removing unreachable block (ram,0x032317dc) */
/* WARNING: Removing unreachable block (ram,0x032317f0) */
/* WARNING: Removing unreachable block (ram,0x0323181c) */
/* WARNING: Removing unreachable block (ram,0x0323183c) */
/* WARNING: Removing unreachable block (ram,0x03231850) */
/* WARNING: Removing unreachable block (ram,0x0323187c) */
/* WARNING: Removing unreachable block (ram,0x0323189c) */
/* WARNING: Removing unreachable block (ram,0x032318bc) */
/* WARNING: Removing unreachable block (ram,0x032318c4) */
/* WARNING: Removing unreachable block (ram,0x032318cc) */
/* WARNING: Removing unreachable block (ram,0x032318e4) */
/* WARNING: Removing unreachable block (ram,0x03231920) */
/* WARNING: Removing unreachable block (ram,0x03231954) */
/* WARNING: Removing unreachable block (ram,0x03231974) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x03231900) */
/* WARNING: Removing unreachable block (ram,0x03231910) */
/* WARNING: Removing unreachable block (ram,0x03231858) */
/* WARNING: Removing unreachable block (ram,0x032317f8) */
/* WARNING: Removing unreachable block (ram,0x032315c0) */

long Atlas_UI_PaginationDotController__Setup(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  undefined *unaff_x30;
  undefined *puVar7;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  puVar2 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(ulong *)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    puVar6 = puVar2 + -0x10;
    lVar3 = param_1;
    if ((bRam0000000003eb4abb & 1) == 0) {
      func_0x00f78a20(0x3d2a350);
      func_0x00f78a20(0x3d1b5b0);
      func_0x00f78a20(0x3d57948);
      func_0x00f78a20(0x3d5b0d0);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d5b3a8);
      func_0x00f78a20(0x3d5b398);
      func_0x00f78a20(0x3d5b3a0);
      lVar3 = func_0x00f78a20(0x3d25740);
      bRam0000000003eb4abb = 1;
    }
    if (*(char *)(param_1 + 0x88) != '\0') {
      return lVar3;
    }
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x9c);
    if (0 < *(int *)(param_1 + 0x20)) {
      unaff_x20 = 0;
      unaff_x23 = 0x3d57948;
      unaff_x24 = 0x3d23990;
      unaff_x25 = 0x3d5b0d0;
      do {
        if ((int)unaff_x20 == 0) {
          lVar3 = *(long *)(param_1 + 0x28);
        }
        else {
          unaff_x21 = *(undefined8 *)(param_1 + 0x30);
          unaff_x22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar3 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(unaff_x21,unaff_x22,uRam0000000003d5b0d0);
        }
        if (lVar3 == 0) goto code_r0x014b5fbc;
        uVar4 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar3,uRam0000000003d57948);
        /*Atlas.UI.PaginationDotController$$InitDot*/ func_0x014b60e0(param_1,uVar4,unaff_x20);
        uVar1 = (int)unaff_x20 + 1;
        unaff_x20 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(param_1 + 0x20));
    }
    lVar3 = /*Atlas.UI.PaginationDotController$$SetDotHighlightStates*/ func_0x014b620c(param_1);
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined1 *)(param_1 + 0x88) = 1;
    if (*(char *)(param_1 + 0xa4) == '\0') {
code_r0x014b5f10:
      if (*(long *)(param_1 + 0x50) == 0) {
        if (*(long *)(param_1 + 0x58) == 0) {
          return lVar3;
        }
        lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,param_1,uRam0000000003d5b3a0,0);
        unaff_x20 = 0;
        if (lVar3 != 0) {
          puVar6 = *(undefined1 **)(puVar2 + -0x10);
          puVar7 = *(undefined **)(puVar2 + -8);
          lVar5 = *(long *)(puVar2 + -0x20);
          param_1 = *(long *)(puVar2 + -0x18);
          unaff_x22 = *(undefined8 *)(puVar2 + -0x30);
          uVar4 = *(undefined8 *)(puVar2 + -0x28);
          goto code_r0x03277f74;
        }
      }
      else {
        lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,param_1,uRam0000000003d5b398,0);
        unaff_x20 = 0;
        if (lVar3 != 0) {
          puVar7 = &UNK_014b5f5c;
          puVar2 = puVar2 + -0x50;
          lVar5 = lVar3;
          uVar4 = unaff_x21;
code_r0x03277f74:
          *(long *)(puVar2 + -0x20) = lVar5;
          *(long *)(puVar2 + -0x18) = param_1;
          *(undefined1 **)(puVar2 + -0x10) = puVar6;
          *(undefined **)(puVar2 + -8) = puVar7;
          *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
          *(undefined8 *)(puVar2 + -0x48) = uVar4;
          *(long *)(puVar2 + -0x40) = lVar5;
          *(long *)(puVar2 + -0x38) = lVar3;
          *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x28) = &UNK_03277f8c;
          if ((bRam0000000003ec1a32 & 1) == 0) {
            func_0x00f78a20(0x3d22a90,unaff_x21,0);
            bRam0000000003ec1a32 = 1;
          }
          lVar3 = func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
          /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x032313fc(lVar3,unaff_x21,0);
          return lVar3;
        }
      }
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
      if ((int)lVar3 == 0) goto code_r0x014b5f10;
      lVar3 = *(long *)(param_1 + 0xa8);
      unaff_x21 = func_0x00f78aec(/*System.Action<UIAtlasButton>_TypeInfo*/ uRam0000000003d1b5b0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,param_1,uRam0000000003d5b3a8,uRam0000000003d2a350);
      unaff_x20 = 0;
      if (lVar3 != 0) {
        lVar3 = /*Atlas.UI.UIAtlasButtonGroup$$add_OnButtonSelectedEvent*/ func_0x01515dfc(lVar3,unaff_x21,0);
        goto code_r0x014b5f10;
      }
    }
code_r0x014b5fbc:
    lVar3 = func_0x00f78af4();
    *(ulong *)(puVar2 + -0x70) = unaff_x20;
    *(long *)(puVar2 + -0x68) = param_1;
    *(undefined1 **)(puVar2 + -0x60) = puVar6;
    *(undefined **)(puVar2 + -0x58) = &Atlas_UI_PaginationDotController__DisablePagination;
    if (*(long *)(lVar3 + 0x18) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar3 + 0x18),0,0);
      lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0);
      if (lVar5 != 0) {
        *(undefined8 *)(puVar2 + -0x80) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x78) = unaff_x21;
        *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0x70);
        *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(puVar2 + -0x68);
        *(undefined8 *)(puVar2 + -0x60) = *(undefined8 *)(puVar2 + -0x60);
        *(undefined8 *)(puVar2 + -0x58) = *(undefined8 *)(puVar2 + -0x58);
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar3 = (*pcRam0000000003ebf4c0)(lVar5,0);
        return lVar3;
      }
    }
    lVar5 = func_0x00f78af4();
    *(undefined4 *)(lVar5 + 0x7c) = extraout_s0;
    *(ulong *)(puVar2 + -0x90) = unaff_x20;
    *(long *)(puVar2 + -0x88) = lVar3;
    *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x60;
    *(undefined **)(puVar2 + -0x78) = &Atlas_UI_PaginationDotController__ScrollToTarget;
    if (*(long *)(lVar5 + 0x18) != 0) {
      lVar3 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(lVar5 + 0x18),0);
      *(float *)(lVar5 + 0x80) = extraout_s0_00;
      if (*(char *)(lVar5 + 0x38) != '\0') {
        *(float *)(lVar5 + 0x9c) =
             *(float *)(lVar5 + 0xa0) *
             ((1.0 - ABS(extraout_s0_00 - *(float *)(lVar5 + 0x7c))) + 1.0) * 0.5;
      }
      *(undefined1 *)(lVar5 + 0x78) = 1;
      *(undefined4 *)(lVar5 + 0x84) = 0;
      if (*(long *)(lVar5 + 0x18) != 0) {
        *(undefined1 *)(*(long *)(lVar5 + 0x18) + 0x20) = 0;
        return lVar3;
      }
    }
    unaff_x19 = func_0x00f78af4();
    *(undefined8 *)(puVar2 + -0xc0) = unaff_d9;
    *(undefined8 *)(puVar2 + -0xb8) = unaff_d8;
    *(ulong *)(puVar2 + -0xb0) = unaff_x20;
    *(long *)(puVar2 + -0xa8) = lVar5;
    *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x80;
    *(undefined **)(puVar2 + -0x98) = &Atlas_UI_PaginationDotController__SnapToTarget;
    unaff_x29 = puVar2 + -0xa0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      lVar3 = /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(*(long *)(unaff_x19 + 0x18),0);
      *(undefined4 *)(unaff_x19 + 0x7c) = extraout_s0_01;
      return lVar3;
    }
    unaff_x30 = &Atlas_UI_PaginationDotController__Start;
    param_1 = func_0x00f78af4();
    puVar2 = puVar2 + -0xc0;
    if (*(char *)(param_1 + 0x24) != '\0') {
      return param_1;
    }
  } while( true );
}



// ============================================================
// RVA: 0x14b5fc0 | Atlas.UI.PaginationDotController.DisablePagination
// ============================================================

/* WARNING: Possible PIC construction at 0x014b5f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f8c) */
/* WARNING: Removing unreachable block (ram,0x03277fa8) */
/* WARNING: Removing unreachable block (ram,0x03277f98) */
/* WARNING: Removing unreachable block (ram,0x03231580) */
/* WARNING: Removing unreachable block (ram,0x032315a4) */
/* WARNING: Removing unreachable block (ram,0x032315b8) */
/* WARNING: Removing unreachable block (ram,0x032315ec) */
/* WARNING: Removing unreachable block (ram,0x03231634) */
/* WARNING: Removing unreachable block (ram,0x0323169c) */
/* WARNING: Removing unreachable block (ram,0x032316b8) */
/* WARNING: Removing unreachable block (ram,0x032316d4) */
/* WARNING: Removing unreachable block (ram,0x0323175c) */
/* WARNING: Removing unreachable block (ram,0x03231768) */
/* WARNING: Removing unreachable block (ram,0x032316e4) */
/* WARNING: Removing unreachable block (ram,0x032316ec) */
/* WARNING: Removing unreachable block (ram,0x032316f4) */
/* WARNING: Removing unreachable block (ram,0x03231700) */
/* WARNING: Removing unreachable block (ram,0x03231718) */
/* WARNING: Removing unreachable block (ram,0x03231720) */
/* WARNING: Removing unreachable block (ram,0x0323172c) */
/* WARNING: Removing unreachable block (ram,0x03231734) */
/* WARNING: Removing unreachable block (ram,0x03231738) */
/* WARNING: Removing unreachable block (ram,0x0323174c) */
/* WARNING: Removing unreachable block (ram,0x03231758) */
/* WARNING: Removing unreachable block (ram,0x032317bc) */
/* WARNING: Removing unreachable block (ram,0x032317dc) */
/* WARNING: Removing unreachable block (ram,0x032317f0) */
/* WARNING: Removing unreachable block (ram,0x0323181c) */
/* WARNING: Removing unreachable block (ram,0x0323183c) */
/* WARNING: Removing unreachable block (ram,0x03231850) */
/* WARNING: Removing unreachable block (ram,0x0323187c) */
/* WARNING: Removing unreachable block (ram,0x0323189c) */
/* WARNING: Removing unreachable block (ram,0x032318bc) */
/* WARNING: Removing unreachable block (ram,0x032318c4) */
/* WARNING: Removing unreachable block (ram,0x032318cc) */
/* WARNING: Removing unreachable block (ram,0x032318e4) */
/* WARNING: Removing unreachable block (ram,0x03231920) */
/* WARNING: Removing unreachable block (ram,0x03231954) */
/* WARNING: Removing unreachable block (ram,0x03231974) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x03231900) */
/* WARNING: Removing unreachable block (ram,0x03231910) */
/* WARNING: Removing unreachable block (ram,0x03231858) */
/* WARNING: Removing unreachable block (ram,0x032317f8) */
/* WARNING: Removing unreachable block (ram,0x032315c0) */

long Atlas_UI_PaginationDotController__DisablePagination(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *puVar6;
  code *unaff_x30;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_1 + 0x18),0,0);
      lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
      if (lVar4 != 0) {
        *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar4 = (*pcRam0000000003ebf4c0)(lVar4,0);
        return lVar4;
      }
    }
    lVar4 = func_0x00f78af4();
    *(undefined4 *)(lVar4 + 0x7c) = extraout_s0;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x38) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x28) =
         &Atlas_UI_PaginationDotController__ScrollToTarget;
    if (*(long *)(lVar4 + 0x18) != 0) {
      lVar5 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(lVar4 + 0x18),0);
      *(float *)(lVar4 + 0x80) = extraout_s0_00;
      if (*(char *)(lVar4 + 0x38) != '\0') {
        *(float *)(lVar4 + 0x9c) =
             *(float *)(lVar4 + 0xa0) *
             ((1.0 - ABS(extraout_s0_00 - *(float *)(lVar4 + 0x7c))) + 1.0) * 0.5;
      }
      *(undefined1 *)(lVar4 + 0x78) = 1;
      *(undefined4 *)(lVar4 + 0x84) = 0;
      if (*(long *)(lVar4 + 0x18) != 0) {
        *(undefined1 *)(*(long *)(lVar4 + 0x18) + 0x20) = 0;
        return lVar5;
      }
    }
    lVar5 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x58) = lVar4;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined **)((long)register0x00000008 + -0x48) =
         &Atlas_UI_PaginationDotController__SnapToTarget;
    if (*(long *)(lVar5 + 0x18) != 0) {
      lVar4 = /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(*(long *)(lVar5 + 0x18),0);
      *(undefined4 *)(lVar5 + 0x7c) = extraout_s0_01;
      return lVar4;
    }
    unaff_x19 = func_0x00f78af4();
    if (*(char *)(unaff_x19 + 0x24) != '\0') {
      return unaff_x19;
    }
    puVar2 = (undefined1 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x90) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x88) = lVar5;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x50);
    *(undefined **)((long)register0x00000008 + -0x78) = &Atlas_UI_PaginationDotController__Start;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x80);
    lVar4 = unaff_x19;
    if ((bRam0000000003eb4abb & 1) == 0) {
      func_0x00f78a20(0x3d2a350);
      func_0x00f78a20(0x3d1b5b0);
      func_0x00f78a20(0x3d57948);
      func_0x00f78a20(0x3d5b0d0);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d5b3a8);
      func_0x00f78a20(0x3d5b398);
      func_0x00f78a20(0x3d5b3a0);
      lVar4 = func_0x00f78a20(0x3d25740);
      bRam0000000003eb4abb = 1;
    }
    if (*(char *)(unaff_x19 + 0x88) != '\0') {
      return lVar4;
    }
    *(undefined4 *)(unaff_x19 + 0xa0) = *(undefined4 *)(unaff_x19 + 0x9c);
    if (0 < *(int *)(unaff_x19 + 0x20)) {
      unaff_x20 = 0;
      unaff_x23 = 0x3d57948;
      unaff_x24 = 0x3d23990;
      unaff_x25 = 0x3d5b0d0;
      do {
        if ((int)unaff_x20 == 0) {
          lVar4 = *(long *)(unaff_x19 + 0x28);
        }
        else {
          unaff_x21 = *(undefined8 *)(unaff_x19 + 0x30);
          unaff_x22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(unaff_x19,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar4 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(unaff_x21,unaff_x22,uRam0000000003d5b0d0);
        }
        if (lVar4 == 0) goto code_r0x014b5fbc;
        uVar3 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar4,uRam0000000003d57948);
        /*Atlas.UI.PaginationDotController$$InitDot*/ func_0x014b60e0(unaff_x19,uVar3,unaff_x20);
        uVar1 = (int)unaff_x20 + 1;
        unaff_x20 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(unaff_x19 + 0x20));
    }
    lVar4 = /*Atlas.UI.PaginationDotController$$SetDotHighlightStates*/ func_0x014b620c(unaff_x19);
    *(undefined1 *)(unaff_x19 + 0x24) = 0;
    *(undefined1 *)(unaff_x19 + 0x88) = 1;
    if (*(char *)(unaff_x19 + 0xa4) == '\0') {
code_r0x014b5f10:
      if (*(long *)(unaff_x19 + 0x50) == 0) {
        if (*(long *)(unaff_x19 + 0x58) == 0) {
          return lVar4;
        }
        lVar4 = *(long *)(*(long *)(unaff_x19 + 0x58) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,unaff_x19,uRam0000000003d5b3a0,0);
        unaff_x20 = 0;
        if (lVar4 != 0) {
          unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x80);
          puVar6 = *(undefined **)((long)register0x00000008 + -0x78);
          lVar5 = *(long *)((long)register0x00000008 + -0x90);
          unaff_x19 = *(long *)((long)register0x00000008 + -0x88);
          unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xa0);
          uVar3 = *(undefined8 *)((long)register0x00000008 + -0x98);
          puVar2 = (undefined1 *)((long)register0x00000008 + -0x70);
          goto code_r0x03277f74;
        }
      }
      else {
        lVar4 = *(long *)(*(long *)(unaff_x19 + 0x50) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,unaff_x19,uRam0000000003d5b398,0);
        unaff_x20 = 0;
        if (lVar4 != 0) {
          puVar6 = &UNK_014b5f5c;
          lVar5 = lVar4;
          uVar3 = unaff_x21;
code_r0x03277f74:
          *(long *)(puVar2 + -0x20) = lVar5;
          *(long *)(puVar2 + -0x18) = unaff_x19;
          *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
          *(undefined **)(puVar2 + -8) = puVar6;
          *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
          *(undefined8 *)(puVar2 + -0x48) = uVar3;
          *(long *)(puVar2 + -0x40) = lVar5;
          *(long *)(puVar2 + -0x38) = lVar4;
          *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x28) = &UNK_03277f8c;
          if ((bRam0000000003ec1a32 & 1) == 0) {
            func_0x00f78a20(0x3d22a90,unaff_x21,0);
            bRam0000000003ec1a32 = 1;
          }
          lVar4 = func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
          /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x032313fc(lVar4,unaff_x21,0);
          return lVar4;
        }
      }
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x19 + 0xa8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar3,0);
      if ((int)lVar4 == 0) goto code_r0x014b5f10;
      lVar4 = *(long *)(unaff_x19 + 0xa8);
      unaff_x21 = func_0x00f78aec(/*System.Action<UIAtlasButton>_TypeInfo*/ uRam0000000003d1b5b0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,unaff_x19,uRam0000000003d5b3a8,uRam0000000003d2a350);
      unaff_x20 = 0;
      if (lVar4 != 0) {
        lVar4 = /*Atlas.UI.UIAtlasButtonGroup$$add_OnButtonSelectedEvent*/ func_0x01515dfc(lVar4,unaff_x21,0);
        goto code_r0x014b5f10;
      }
    }
code_r0x014b5fbc:
    unaff_x30 = Atlas_UI_PaginationDotController__DisablePagination;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  } while( true );
}



// ============================================================
// RVA: 0x14b600c | Atlas.UI.PaginationDotController.ScrollToTarget
// ============================================================

/* WARNING: Possible PIC construction at 0x014b5f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f8c) */
/* WARNING: Removing unreachable block (ram,0x03277fa8) */
/* WARNING: Removing unreachable block (ram,0x03277f98) */
/* WARNING: Removing unreachable block (ram,0x03231580) */
/* WARNING: Removing unreachable block (ram,0x032315a4) */
/* WARNING: Removing unreachable block (ram,0x032315b8) */
/* WARNING: Removing unreachable block (ram,0x032315ec) */
/* WARNING: Removing unreachable block (ram,0x03231634) */
/* WARNING: Removing unreachable block (ram,0x0323169c) */
/* WARNING: Removing unreachable block (ram,0x032316b8) */
/* WARNING: Removing unreachable block (ram,0x032316d4) */
/* WARNING: Removing unreachable block (ram,0x0323175c) */
/* WARNING: Removing unreachable block (ram,0x03231768) */
/* WARNING: Removing unreachable block (ram,0x032316e4) */
/* WARNING: Removing unreachable block (ram,0x032316ec) */
/* WARNING: Removing unreachable block (ram,0x032316f4) */
/* WARNING: Removing unreachable block (ram,0x03231700) */
/* WARNING: Removing unreachable block (ram,0x03231718) */
/* WARNING: Removing unreachable block (ram,0x03231720) */
/* WARNING: Removing unreachable block (ram,0x0323172c) */
/* WARNING: Removing unreachable block (ram,0x03231734) */
/* WARNING: Removing unreachable block (ram,0x03231738) */
/* WARNING: Removing unreachable block (ram,0x0323174c) */
/* WARNING: Removing unreachable block (ram,0x03231758) */
/* WARNING: Removing unreachable block (ram,0x032317bc) */
/* WARNING: Removing unreachable block (ram,0x032317dc) */
/* WARNING: Removing unreachable block (ram,0x032317f0) */
/* WARNING: Removing unreachable block (ram,0x0323181c) */
/* WARNING: Removing unreachable block (ram,0x0323183c) */
/* WARNING: Removing unreachable block (ram,0x03231850) */
/* WARNING: Removing unreachable block (ram,0x0323187c) */
/* WARNING: Removing unreachable block (ram,0x0323189c) */
/* WARNING: Removing unreachable block (ram,0x032318bc) */
/* WARNING: Removing unreachable block (ram,0x032318c4) */
/* WARNING: Removing unreachable block (ram,0x032318cc) */
/* WARNING: Removing unreachable block (ram,0x032318e4) */
/* WARNING: Removing unreachable block (ram,0x03231920) */
/* WARNING: Removing unreachable block (ram,0x03231954) */
/* WARNING: Removing unreachable block (ram,0x03231974) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x03231900) */
/* WARNING: Removing unreachable block (ram,0x03231910) */
/* WARNING: Removing unreachable block (ram,0x03231858) */
/* WARNING: Removing unreachable block (ram,0x032317f8) */
/* WARNING: Removing unreachable block (ram,0x032315c0) */

long Atlas_UI_PaginationDotController__ScrollToTarget(undefined4 param_1,long param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  ulong unaff_x20;
  long lVar6;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar7;
  undefined *puVar8;
  code *unaff_x30;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    *(undefined4 *)(param_2 + 0x7c) = param_1;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar4 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(param_2 + 0x18),0);
      *(float *)(param_2 + 0x80) = extraout_s0_00;
      if (*(char *)(param_2 + 0x38) != '\0') {
        *(float *)(param_2 + 0x9c) =
             *(float *)(param_2 + 0xa0) *
             ((1.0 - ABS(extraout_s0_00 - *(float *)(param_2 + 0x7c))) + 1.0) * 0.5;
      }
      *(undefined1 *)(param_2 + 0x78) = 1;
      *(undefined4 *)(param_2 + 0x84) = 0;
      if (*(long *)(param_2 + 0x18) != 0) {
        *(undefined1 *)(*(long *)(param_2 + 0x18) + 0x20) = 0;
        return lVar4;
      }
    }
    lVar4 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x38) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x28) =
         &Atlas_UI_PaginationDotController__SnapToTarget;
    if (*(long *)(lVar4 + 0x18) != 0) {
      lVar5 = /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(*(long *)(lVar4 + 0x18),0);
      *(undefined4 *)(lVar4 + 0x7c) = extraout_s0_01;
      return lVar5;
    }
    lVar5 = func_0x00f78af4();
    if (*(char *)(lVar5 + 0x24) != '\0') {
      return lVar5;
    }
    puVar2 = (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x68) = lVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined **)((long)register0x00000008 + -0x58) = &Atlas_UI_PaginationDotController__Start;
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x60);
    lVar4 = lVar5;
    if ((bRam0000000003eb4abb & 1) == 0) {
      func_0x00f78a20(0x3d2a350);
      func_0x00f78a20(0x3d1b5b0);
      func_0x00f78a20(0x3d57948);
      func_0x00f78a20(0x3d5b0d0);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d5b3a8);
      func_0x00f78a20(0x3d5b398);
      func_0x00f78a20(0x3d5b3a0);
      lVar4 = func_0x00f78a20(0x3d25740);
      bRam0000000003eb4abb = 1;
    }
    if (*(char *)(lVar5 + 0x88) != '\0') {
      return lVar4;
    }
    *(undefined4 *)(lVar5 + 0xa0) = *(undefined4 *)(lVar5 + 0x9c);
    if (0 < *(int *)(lVar5 + 0x20)) {
      unaff_x20 = 0;
      unaff_x23 = 0x3d57948;
      unaff_x24 = 0x3d23990;
      unaff_x25 = 0x3d5b0d0;
      do {
        if ((int)unaff_x20 == 0) {
          lVar4 = *(long *)(lVar5 + 0x28);
        }
        else {
          unaff_x21 = *(undefined8 *)(lVar5 + 0x30);
          unaff_x22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar4 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(unaff_x21,unaff_x22,uRam0000000003d5b0d0);
        }
        if (lVar4 == 0) goto code_r0x014b5fbc;
        uVar3 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar4,uRam0000000003d57948);
        /*Atlas.UI.PaginationDotController$$InitDot*/ func_0x014b60e0(lVar5,uVar3,unaff_x20);
        uVar1 = (int)unaff_x20 + 1;
        unaff_x20 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(lVar5 + 0x20));
    }
    lVar4 = /*Atlas.UI.PaginationDotController$$SetDotHighlightStates*/ func_0x014b620c(lVar5);
    *(undefined1 *)(lVar5 + 0x24) = 0;
    *(undefined1 *)(lVar5 + 0x88) = 1;
    if (*(char *)(lVar5 + 0xa4) == '\0') {
code_r0x014b5f10:
      if (*(long *)(lVar5 + 0x50) == 0) {
        if (*(long *)(lVar5 + 0x58) == 0) {
          return lVar4;
        }
        lVar4 = *(long *)(*(long *)(lVar5 + 0x58) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,lVar5,uRam0000000003d5b3a0,0);
        unaff_x20 = 0;
        if (lVar4 != 0) {
          puVar7 = *(undefined1 **)((long)register0x00000008 + -0x60);
          puVar8 = *(undefined **)((long)register0x00000008 + -0x58);
          lVar6 = *(long *)((long)register0x00000008 + -0x70);
          lVar5 = *(long *)((long)register0x00000008 + -0x68);
          unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
          uVar3 = *(undefined8 *)((long)register0x00000008 + -0x78);
          puVar2 = (undefined1 *)((long)register0x00000008 + -0x50);
          goto code_r0x03277f74;
        }
      }
      else {
        lVar4 = *(long *)(*(long *)(lVar5 + 0x50) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,lVar5,uRam0000000003d5b398,0);
        unaff_x20 = 0;
        if (lVar4 != 0) {
          puVar8 = &UNK_014b5f5c;
          lVar6 = lVar4;
          uVar3 = unaff_x21;
code_r0x03277f74:
          *(long *)(puVar2 + -0x20) = lVar6;
          *(long *)(puVar2 + -0x18) = lVar5;
          *(undefined1 **)(puVar2 + -0x10) = puVar7;
          *(undefined **)(puVar2 + -8) = puVar8;
          *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
          *(undefined8 *)(puVar2 + -0x48) = uVar3;
          *(long *)(puVar2 + -0x40) = lVar6;
          *(long *)(puVar2 + -0x38) = lVar4;
          *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x28) = &UNK_03277f8c;
          if ((bRam0000000003ec1a32 & 1) == 0) {
            func_0x00f78a20(0x3d22a90,unaff_x21,0);
            bRam0000000003ec1a32 = 1;
          }
          lVar4 = func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
          /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x032313fc(lVar4,unaff_x21,0);
          return lVar4;
        }
      }
    }
    else {
      uVar3 = *(undefined8 *)(lVar5 + 0xa8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar3,0);
      if ((int)lVar4 == 0) goto code_r0x014b5f10;
      lVar4 = *(long *)(lVar5 + 0xa8);
      unaff_x21 = func_0x00f78aec(/*System.Action<UIAtlasButton>_TypeInfo*/ uRam0000000003d1b5b0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,lVar5,uRam0000000003d5b3a8,uRam0000000003d2a350);
      unaff_x20 = 0;
      if (lVar4 != 0) {
        lVar4 = /*Atlas.UI.UIAtlasButtonGroup$$add_OnButtonSelectedEvent*/ func_0x01515dfc(lVar4,unaff_x21,0);
        goto code_r0x014b5f10;
      }
    }
code_r0x014b5fbc:
    unaff_x19 = func_0x00f78af4();
    *(ulong *)((long)register0x00000008 + -0xc0) = unaff_x20;
    *(long *)((long)register0x00000008 + -0xb8) = lVar5;
    *(undefined1 **)((long)register0x00000008 + -0xb0) = puVar7;
    *(code **)((long)register0x00000008 + -0xa8) =
         Atlas_UI_PaginationDotController__DisablePagination;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xb0);
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(unaff_x19 + 0x18),0,0);
      lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0);
      if (lVar4 != 0) {
        *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -200) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0xc0) =
             *(undefined8 *)((long)register0x00000008 + -0xc0);
        *(undefined8 *)((long)register0x00000008 + -0xb8) =
             *(undefined8 *)((long)register0x00000008 + -0xb8);
        *(undefined8 *)((long)register0x00000008 + -0xb0) =
             *(undefined8 *)((long)register0x00000008 + -0xb0);
        *(undefined8 *)((long)register0x00000008 + -0xa8) =
             *(undefined8 *)((long)register0x00000008 + -0xa8);
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar4 = (*pcRam0000000003ebf4c0)(lVar4,0);
        return lVar4;
      }
    }
    unaff_x30 = Atlas_UI_PaginationDotController__ScrollToTarget;
    param_2 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    param_1 = extraout_s0;
  } while( true );
}



// ============================================================
// RVA: 0x14b6014 | Atlas.UI.PaginationDotController.StartAutoScroll
// ============================================================

/* WARNING: Possible PIC construction at 0x014b5f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f8c) */
/* WARNING: Removing unreachable block (ram,0x03277fa8) */
/* WARNING: Removing unreachable block (ram,0x03277f98) */
/* WARNING: Removing unreachable block (ram,0x03231580) */
/* WARNING: Removing unreachable block (ram,0x032315a4) */
/* WARNING: Removing unreachable block (ram,0x032315b8) */
/* WARNING: Removing unreachable block (ram,0x032315ec) */
/* WARNING: Removing unreachable block (ram,0x03231634) */
/* WARNING: Removing unreachable block (ram,0x0323169c) */
/* WARNING: Removing unreachable block (ram,0x032316b8) */
/* WARNING: Removing unreachable block (ram,0x032316d4) */
/* WARNING: Removing unreachable block (ram,0x0323175c) */
/* WARNING: Removing unreachable block (ram,0x03231768) */
/* WARNING: Removing unreachable block (ram,0x032316e4) */
/* WARNING: Removing unreachable block (ram,0x032316ec) */
/* WARNING: Removing unreachable block (ram,0x032316f4) */
/* WARNING: Removing unreachable block (ram,0x03231700) */
/* WARNING: Removing unreachable block (ram,0x03231718) */
/* WARNING: Removing unreachable block (ram,0x03231720) */
/* WARNING: Removing unreachable block (ram,0x0323172c) */
/* WARNING: Removing unreachable block (ram,0x03231734) */
/* WARNING: Removing unreachable block (ram,0x03231738) */
/* WARNING: Removing unreachable block (ram,0x0323174c) */
/* WARNING: Removing unreachable block (ram,0x03231758) */
/* WARNING: Removing unreachable block (ram,0x032317bc) */
/* WARNING: Removing unreachable block (ram,0x032317dc) */
/* WARNING: Removing unreachable block (ram,0x032317f0) */
/* WARNING: Removing unreachable block (ram,0x0323181c) */
/* WARNING: Removing unreachable block (ram,0x0323183c) */
/* WARNING: Removing unreachable block (ram,0x03231850) */
/* WARNING: Removing unreachable block (ram,0x0323187c) */
/* WARNING: Removing unreachable block (ram,0x0323189c) */
/* WARNING: Removing unreachable block (ram,0x032318bc) */
/* WARNING: Removing unreachable block (ram,0x032318c4) */
/* WARNING: Removing unreachable block (ram,0x032318cc) */
/* WARNING: Removing unreachable block (ram,0x032318e4) */
/* WARNING: Removing unreachable block (ram,0x03231920) */
/* WARNING: Removing unreachable block (ram,0x03231954) */
/* WARNING: Removing unreachable block (ram,0x03231974) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x03231900) */
/* WARNING: Removing unreachable block (ram,0x03231910) */
/* WARNING: Removing unreachable block (ram,0x03231858) */
/* WARNING: Removing unreachable block (ram,0x032317f8) */
/* WARNING: Removing unreachable block (ram,0x032315c0) */

long Atlas_UI_PaginationDotController__StartAutoScroll(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  ulong unaff_x20;
  long lVar6;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar7;
  undefined *puVar8;
  code *unaff_x30;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar4 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(param_1 + 0x18),0);
      *(float *)(param_1 + 0x80) = extraout_s0_00;
      if (*(char *)(param_1 + 0x38) != '\0') {
        *(float *)(param_1 + 0x9c) =
             *(float *)(param_1 + 0xa0) *
             ((1.0 - ABS(extraout_s0_00 - *(float *)(param_1 + 0x7c))) + 1.0) * 0.5;
      }
      *(undefined1 *)(param_1 + 0x78) = 1;
      *(undefined4 *)(param_1 + 0x84) = 0;
      if (*(long *)(param_1 + 0x18) != 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x20) = 0;
        return lVar4;
      }
    }
    lVar4 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x38) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x28) =
         &Atlas_UI_PaginationDotController__SnapToTarget;
    if (*(long *)(lVar4 + 0x18) != 0) {
      lVar5 = /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(*(long *)(lVar4 + 0x18),0);
      *(undefined4 *)(lVar4 + 0x7c) = extraout_s0_01;
      return lVar5;
    }
    lVar5 = func_0x00f78af4();
    if (*(char *)(lVar5 + 0x24) != '\0') {
      return lVar5;
    }
    puVar2 = (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x68) = lVar4;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined **)((long)register0x00000008 + -0x58) = &Atlas_UI_PaginationDotController__Start;
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x60);
    lVar4 = lVar5;
    if ((bRam0000000003eb4abb & 1) == 0) {
      func_0x00f78a20(0x3d2a350);
      func_0x00f78a20(0x3d1b5b0);
      func_0x00f78a20(0x3d57948);
      func_0x00f78a20(0x3d5b0d0);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d5b3a8);
      func_0x00f78a20(0x3d5b398);
      func_0x00f78a20(0x3d5b3a0);
      lVar4 = func_0x00f78a20(0x3d25740);
      bRam0000000003eb4abb = 1;
    }
    if (*(char *)(lVar5 + 0x88) != '\0') {
      return lVar4;
    }
    *(undefined4 *)(lVar5 + 0xa0) = *(undefined4 *)(lVar5 + 0x9c);
    if (0 < *(int *)(lVar5 + 0x20)) {
      unaff_x20 = 0;
      unaff_x23 = 0x3d57948;
      unaff_x24 = 0x3d23990;
      unaff_x25 = 0x3d5b0d0;
      do {
        if ((int)unaff_x20 == 0) {
          lVar4 = *(long *)(lVar5 + 0x28);
        }
        else {
          unaff_x21 = *(undefined8 *)(lVar5 + 0x30);
          unaff_x22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar4 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(unaff_x21,unaff_x22,uRam0000000003d5b0d0);
        }
        if (lVar4 == 0) goto code_r0x014b5fbc;
        uVar3 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar4,uRam0000000003d57948);
        /*Atlas.UI.PaginationDotController$$InitDot*/ func_0x014b60e0(lVar5,uVar3,unaff_x20);
        uVar1 = (int)unaff_x20 + 1;
        unaff_x20 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(lVar5 + 0x20));
    }
    lVar4 = /*Atlas.UI.PaginationDotController$$SetDotHighlightStates*/ func_0x014b620c(lVar5);
    *(undefined1 *)(lVar5 + 0x24) = 0;
    *(undefined1 *)(lVar5 + 0x88) = 1;
    if (*(char *)(lVar5 + 0xa4) == '\0') {
code_r0x014b5f10:
      if (*(long *)(lVar5 + 0x50) == 0) {
        if (*(long *)(lVar5 + 0x58) == 0) {
          return lVar4;
        }
        lVar4 = *(long *)(*(long *)(lVar5 + 0x58) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,lVar5,uRam0000000003d5b3a0,0);
        unaff_x20 = 0;
        if (lVar4 != 0) {
          puVar7 = *(undefined1 **)((long)register0x00000008 + -0x60);
          puVar8 = *(undefined **)((long)register0x00000008 + -0x58);
          lVar6 = *(long *)((long)register0x00000008 + -0x70);
          lVar5 = *(long *)((long)register0x00000008 + -0x68);
          unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
          uVar3 = *(undefined8 *)((long)register0x00000008 + -0x78);
          puVar2 = (undefined1 *)((long)register0x00000008 + -0x50);
          goto code_r0x03277f74;
        }
      }
      else {
        lVar4 = *(long *)(*(long *)(lVar5 + 0x50) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,lVar5,uRam0000000003d5b398,0);
        unaff_x20 = 0;
        if (lVar4 != 0) {
          puVar8 = &UNK_014b5f5c;
          lVar6 = lVar4;
          uVar3 = unaff_x21;
code_r0x03277f74:
          *(long *)(puVar2 + -0x20) = lVar6;
          *(long *)(puVar2 + -0x18) = lVar5;
          *(undefined1 **)(puVar2 + -0x10) = puVar7;
          *(undefined **)(puVar2 + -8) = puVar8;
          *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
          *(undefined8 *)(puVar2 + -0x48) = uVar3;
          *(long *)(puVar2 + -0x40) = lVar6;
          *(long *)(puVar2 + -0x38) = lVar4;
          *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x28) = &UNK_03277f8c;
          if ((bRam0000000003ec1a32 & 1) == 0) {
            func_0x00f78a20(0x3d22a90,unaff_x21,0);
            bRam0000000003ec1a32 = 1;
          }
          lVar4 = func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
          /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x032313fc(lVar4,unaff_x21,0);
          return lVar4;
        }
      }
    }
    else {
      uVar3 = *(undefined8 *)(lVar5 + 0xa8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar3,0);
      if ((int)lVar4 == 0) goto code_r0x014b5f10;
      lVar4 = *(long *)(lVar5 + 0xa8);
      unaff_x21 = func_0x00f78aec(/*System.Action<UIAtlasButton>_TypeInfo*/ uRam0000000003d1b5b0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,lVar5,uRam0000000003d5b3a8,uRam0000000003d2a350);
      unaff_x20 = 0;
      if (lVar4 != 0) {
        lVar4 = /*Atlas.UI.UIAtlasButtonGroup$$add_OnButtonSelectedEvent*/ func_0x01515dfc(lVar4,unaff_x21,0);
        goto code_r0x014b5f10;
      }
    }
code_r0x014b5fbc:
    unaff_x19 = func_0x00f78af4();
    *(ulong *)((long)register0x00000008 + -0xc0) = unaff_x20;
    *(long *)((long)register0x00000008 + -0xb8) = lVar5;
    *(undefined1 **)((long)register0x00000008 + -0xb0) = puVar7;
    *(code **)((long)register0x00000008 + -0xa8) =
         Atlas_UI_PaginationDotController__DisablePagination;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xb0);
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(unaff_x19 + 0x18),0,0);
      lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0);
      if (lVar4 != 0) {
        *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -200) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0xc0) =
             *(undefined8 *)((long)register0x00000008 + -0xc0);
        *(undefined8 *)((long)register0x00000008 + -0xb8) =
             *(undefined8 *)((long)register0x00000008 + -0xb8);
        *(undefined8 *)((long)register0x00000008 + -0xb0) =
             *(undefined8 *)((long)register0x00000008 + -0xb0);
        *(undefined8 *)((long)register0x00000008 + -0xa8) =
             *(undefined8 *)((long)register0x00000008 + -0xa8);
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar4 = (*pcRam0000000003ebf4c0)(lVar4,0);
        return lVar4;
      }
    }
    unaff_x30 = Atlas_UI_PaginationDotController__ScrollToTarget;
    param_1 = func_0x00f78af4();
    *(undefined4 *)(param_1 + 0x7c) = extraout_s0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  } while( true );
}



// ============================================================
// RVA: 0x14b6090 | Atlas.UI.PaginationDotController.SnapToTarget
// ============================================================

/* WARNING: Possible PIC construction at 0x014b5f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f8c) */
/* WARNING: Removing unreachable block (ram,0x03277fa8) */
/* WARNING: Removing unreachable block (ram,0x03277f98) */
/* WARNING: Removing unreachable block (ram,0x03231580) */
/* WARNING: Removing unreachable block (ram,0x032315a4) */
/* WARNING: Removing unreachable block (ram,0x032315b8) */
/* WARNING: Removing unreachable block (ram,0x032315ec) */
/* WARNING: Removing unreachable block (ram,0x03231634) */
/* WARNING: Removing unreachable block (ram,0x0323169c) */
/* WARNING: Removing unreachable block (ram,0x032316b8) */
/* WARNING: Removing unreachable block (ram,0x032316d4) */
/* WARNING: Removing unreachable block (ram,0x0323175c) */
/* WARNING: Removing unreachable block (ram,0x03231768) */
/* WARNING: Removing unreachable block (ram,0x032316e4) */
/* WARNING: Removing unreachable block (ram,0x032316ec) */
/* WARNING: Removing unreachable block (ram,0x032316f4) */
/* WARNING: Removing unreachable block (ram,0x03231700) */
/* WARNING: Removing unreachable block (ram,0x03231718) */
/* WARNING: Removing unreachable block (ram,0x03231720) */
/* WARNING: Removing unreachable block (ram,0x0323172c) */
/* WARNING: Removing unreachable block (ram,0x03231734) */
/* WARNING: Removing unreachable block (ram,0x03231738) */
/* WARNING: Removing unreachable block (ram,0x0323174c) */
/* WARNING: Removing unreachable block (ram,0x03231758) */
/* WARNING: Removing unreachable block (ram,0x032317bc) */
/* WARNING: Removing unreachable block (ram,0x032317dc) */
/* WARNING: Removing unreachable block (ram,0x032317f0) */
/* WARNING: Removing unreachable block (ram,0x0323181c) */
/* WARNING: Removing unreachable block (ram,0x0323183c) */
/* WARNING: Removing unreachable block (ram,0x03231850) */
/* WARNING: Removing unreachable block (ram,0x0323187c) */
/* WARNING: Removing unreachable block (ram,0x0323189c) */
/* WARNING: Removing unreachable block (ram,0x032318bc) */
/* WARNING: Removing unreachable block (ram,0x032318c4) */
/* WARNING: Removing unreachable block (ram,0x032318cc) */
/* WARNING: Removing unreachable block (ram,0x032318e4) */
/* WARNING: Removing unreachable block (ram,0x03231920) */
/* WARNING: Removing unreachable block (ram,0x03231954) */
/* WARNING: Removing unreachable block (ram,0x03231974) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x03231900) */
/* WARNING: Removing unreachable block (ram,0x03231910) */
/* WARNING: Removing unreachable block (ram,0x03231858) */
/* WARNING: Removing unreachable block (ram,0x032317f8) */
/* WARNING: Removing unreachable block (ram,0x032315c0) */

long Atlas_UI_PaginationDotController__SnapToTarget(undefined4 param_1,long param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  ulong unaff_x20;
  long lVar6;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar7;
  undefined *puVar8;
  code *unaff_x30;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar5 = /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(*(long *)(param_2 + 0x18),0);
      *(undefined4 *)(param_2 + 0x7c) = param_1;
      return lVar5;
    }
    lVar5 = func_0x00f78af4();
    if (*(char *)(lVar5 + 0x24) != '\0') {
      return lVar5;
    }
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x48) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &Atlas_UI_PaginationDotController__Start;
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x40);
    lVar3 = lVar5;
    if ((bRam0000000003eb4abb & 1) == 0) {
      func_0x00f78a20(0x3d2a350);
      func_0x00f78a20(0x3d1b5b0);
      func_0x00f78a20(0x3d57948);
      func_0x00f78a20(0x3d5b0d0);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d5b3a8);
      func_0x00f78a20(0x3d5b398);
      func_0x00f78a20(0x3d5b3a0);
      lVar3 = func_0x00f78a20(0x3d25740);
      bRam0000000003eb4abb = 1;
    }
    if (*(char *)(lVar5 + 0x88) != '\0') {
      return lVar3;
    }
    *(undefined4 *)(lVar5 + 0xa0) = *(undefined4 *)(lVar5 + 0x9c);
    if (0 < *(int *)(lVar5 + 0x20)) {
      unaff_x20 = 0;
      unaff_x23 = 0x3d57948;
      unaff_x24 = 0x3d23990;
      unaff_x25 = 0x3d5b0d0;
      do {
        if ((int)unaff_x20 == 0) {
          lVar3 = *(long *)(lVar5 + 0x28);
        }
        else {
          unaff_x21 = *(undefined8 *)(lVar5 + 0x30);
          unaff_x22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar3 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(unaff_x21,unaff_x22,uRam0000000003d5b0d0);
        }
        if (lVar3 == 0) goto code_r0x014b5fbc;
        uVar4 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar3,uRam0000000003d57948);
        /*Atlas.UI.PaginationDotController$$InitDot*/ func_0x014b60e0(lVar5,uVar4,unaff_x20);
        uVar1 = (int)unaff_x20 + 1;
        unaff_x20 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(lVar5 + 0x20));
    }
    lVar3 = /*Atlas.UI.PaginationDotController$$SetDotHighlightStates*/ func_0x014b620c(lVar5);
    *(undefined1 *)(lVar5 + 0x24) = 0;
    *(undefined1 *)(lVar5 + 0x88) = 1;
    if (*(char *)(lVar5 + 0xa4) == '\0') {
code_r0x014b5f10:
      if (*(long *)(lVar5 + 0x50) == 0) {
        if (*(long *)(lVar5 + 0x58) == 0) {
          return lVar3;
        }
        lVar3 = *(long *)(*(long *)(lVar5 + 0x58) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,lVar5,uRam0000000003d5b3a0,0);
        unaff_x20 = 0;
        if (lVar3 != 0) {
          puVar7 = *(undefined1 **)((long)register0x00000008 + -0x40);
          puVar8 = *(undefined **)((long)register0x00000008 + -0x38);
          lVar6 = *(long *)((long)register0x00000008 + -0x50);
          lVar5 = *(long *)((long)register0x00000008 + -0x48);
          unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x60);
          uVar4 = *(undefined8 *)((long)register0x00000008 + -0x58);
          puVar2 = (undefined1 *)((long)register0x00000008 + -0x30);
          goto code_r0x03277f74;
        }
      }
      else {
        lVar3 = *(long *)(*(long *)(lVar5 + 0x50) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,lVar5,uRam0000000003d5b398,0);
        unaff_x20 = 0;
        if (lVar3 != 0) {
          puVar8 = &UNK_014b5f5c;
          lVar6 = lVar3;
          uVar4 = unaff_x21;
code_r0x03277f74:
          *(long *)(puVar2 + -0x20) = lVar6;
          *(long *)(puVar2 + -0x18) = lVar5;
          *(undefined1 **)(puVar2 + -0x10) = puVar7;
          *(undefined **)(puVar2 + -8) = puVar8;
          *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
          *(undefined8 *)(puVar2 + -0x48) = uVar4;
          *(long *)(puVar2 + -0x40) = lVar6;
          *(long *)(puVar2 + -0x38) = lVar3;
          *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x28) = &UNK_03277f8c;
          if ((bRam0000000003ec1a32 & 1) == 0) {
            func_0x00f78a20(0x3d22a90,unaff_x21,0);
            bRam0000000003ec1a32 = 1;
          }
          lVar5 = func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
          /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x032313fc(lVar5,unaff_x21,0);
          return lVar5;
        }
      }
    }
    else {
      uVar4 = *(undefined8 *)(lVar5 + 0xa8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
      if ((int)lVar3 == 0) goto code_r0x014b5f10;
      lVar3 = *(long *)(lVar5 + 0xa8);
      unaff_x21 = func_0x00f78aec(/*System.Action<UIAtlasButton>_TypeInfo*/ uRam0000000003d1b5b0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,lVar5,uRam0000000003d5b3a8,uRam0000000003d2a350);
      unaff_x20 = 0;
      if (lVar3 != 0) {
        lVar3 = /*Atlas.UI.UIAtlasButtonGroup$$add_OnButtonSelectedEvent*/ func_0x01515dfc(lVar3,unaff_x21,0);
        goto code_r0x014b5f10;
      }
    }
code_r0x014b5fbc:
    lVar3 = func_0x00f78af4();
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x98) = lVar5;
    *(undefined1 **)((long)register0x00000008 + -0x90) = puVar7;
    *(code **)((long)register0x00000008 + -0x88) =
         Atlas_UI_PaginationDotController__DisablePagination;
    if (*(long *)(lVar3 + 0x18) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar3 + 0x18),0,0);
      lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0);
      if (lVar5 != 0) {
        *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0xa0) =
             *(undefined8 *)((long)register0x00000008 + -0xa0);
        *(undefined8 *)((long)register0x00000008 + -0x98) =
             *(undefined8 *)((long)register0x00000008 + -0x98);
        *(undefined8 *)((long)register0x00000008 + -0x90) =
             *(undefined8 *)((long)register0x00000008 + -0x90);
        *(undefined8 *)((long)register0x00000008 + -0x88) =
             *(undefined8 *)((long)register0x00000008 + -0x88);
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar5 = (*pcRam0000000003ebf4c0)(lVar5,0);
        return lVar5;
      }
    }
    unaff_x19 = func_0x00f78af4();
    *(undefined4 *)(unaff_x19 + 0x7c) = extraout_s0;
    *(ulong *)((long)register0x00000008 + -0xc0) = unaff_x20;
    *(long *)((long)register0x00000008 + -0xb8) = lVar3;
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0x90);
    *(code **)((long)register0x00000008 + -0xa8) = Atlas_UI_PaginationDotController__ScrollToTarget;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xb0);
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      lVar5 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(unaff_x19 + 0x18),0);
      *(float *)(unaff_x19 + 0x80) = extraout_s0_00;
      if (*(char *)(unaff_x19 + 0x38) != '\0') {
        *(float *)(unaff_x19 + 0x9c) =
             *(float *)(unaff_x19 + 0xa0) *
             ((1.0 - ABS(extraout_s0_00 - *(float *)(unaff_x19 + 0x7c))) + 1.0) * 0.5;
      }
      *(undefined1 *)(unaff_x19 + 0x78) = 1;
      *(undefined4 *)(unaff_x19 + 0x84) = 0;
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        *(undefined1 *)(*(long *)(unaff_x19 + 0x18) + 0x20) = 0;
        return lVar5;
      }
    }
    unaff_x30 = Atlas_UI_PaginationDotController__SnapToTarget;
    param_2 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    param_1 = extraout_s0_01;
  } while( true );
}



// ============================================================
// RVA: 0x14b60d0 | Atlas.UI.PaginationDotController.Start
// ============================================================

/* WARNING: Possible PIC construction at 0x014b5f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f8c) */
/* WARNING: Removing unreachable block (ram,0x03277fa8) */
/* WARNING: Removing unreachable block (ram,0x03277f98) */
/* WARNING: Removing unreachable block (ram,0x03231580) */
/* WARNING: Removing unreachable block (ram,0x032315a4) */
/* WARNING: Removing unreachable block (ram,0x032315b8) */
/* WARNING: Removing unreachable block (ram,0x032315ec) */
/* WARNING: Removing unreachable block (ram,0x03231634) */
/* WARNING: Removing unreachable block (ram,0x0323169c) */
/* WARNING: Removing unreachable block (ram,0x032316b8) */
/* WARNING: Removing unreachable block (ram,0x032316d4) */
/* WARNING: Removing unreachable block (ram,0x0323175c) */
/* WARNING: Removing unreachable block (ram,0x03231768) */
/* WARNING: Removing unreachable block (ram,0x032316e4) */
/* WARNING: Removing unreachable block (ram,0x032316ec) */
/* WARNING: Removing unreachable block (ram,0x032316f4) */
/* WARNING: Removing unreachable block (ram,0x03231700) */
/* WARNING: Removing unreachable block (ram,0x03231718) */
/* WARNING: Removing unreachable block (ram,0x03231720) */
/* WARNING: Removing unreachable block (ram,0x0323172c) */
/* WARNING: Removing unreachable block (ram,0x03231734) */
/* WARNING: Removing unreachable block (ram,0x03231738) */
/* WARNING: Removing unreachable block (ram,0x0323174c) */
/* WARNING: Removing unreachable block (ram,0x03231758) */
/* WARNING: Removing unreachable block (ram,0x032317bc) */
/* WARNING: Removing unreachable block (ram,0x032317dc) */
/* WARNING: Removing unreachable block (ram,0x032317f0) */
/* WARNING: Removing unreachable block (ram,0x0323181c) */
/* WARNING: Removing unreachable block (ram,0x0323183c) */
/* WARNING: Removing unreachable block (ram,0x03231850) */
/* WARNING: Removing unreachable block (ram,0x0323187c) */
/* WARNING: Removing unreachable block (ram,0x0323189c) */
/* WARNING: Removing unreachable block (ram,0x032318bc) */
/* WARNING: Removing unreachable block (ram,0x032318c4) */
/* WARNING: Removing unreachable block (ram,0x032318cc) */
/* WARNING: Removing unreachable block (ram,0x032318e4) */
/* WARNING: Removing unreachable block (ram,0x03231920) */
/* WARNING: Removing unreachable block (ram,0x03231954) */
/* WARNING: Removing unreachable block (ram,0x03231974) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x03231900) */
/* WARNING: Removing unreachable block (ram,0x03231910) */
/* WARNING: Removing unreachable block (ram,0x03231858) */
/* WARNING: Removing unreachable block (ram,0x032317f8) */
/* WARNING: Removing unreachable block (ram,0x032315c0) */

long Atlas_UI_PaginationDotController__Start(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar5;
  undefined *puVar6;
  code *unaff_x30;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    if (*(char *)(param_1 + 0x24) != '\0') {
      return param_1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar2 = param_1;
    if ((bRam0000000003eb4abb & 1) == 0) {
      func_0x00f78a20(0x3d2a350);
      func_0x00f78a20(0x3d1b5b0);
      func_0x00f78a20(0x3d57948);
      func_0x00f78a20(0x3d5b0d0);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d5b3a8);
      func_0x00f78a20(0x3d5b398);
      func_0x00f78a20(0x3d5b3a0);
      lVar2 = func_0x00f78a20(0x3d25740);
      bRam0000000003eb4abb = 1;
    }
    if (*(char *)(param_1 + 0x88) != '\0') {
      return lVar2;
    }
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x9c);
    if (0 < *(int *)(param_1 + 0x20)) {
      unaff_x20 = 0;
      unaff_x23 = 0x3d57948;
      unaff_x24 = 0x3d23990;
      unaff_x25 = 0x3d5b0d0;
      do {
        if ((int)unaff_x20 == 0) {
          lVar2 = *(long *)(param_1 + 0x28);
        }
        else {
          unaff_x21 = *(undefined8 *)(param_1 + 0x30);
          unaff_x22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar2 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(unaff_x21,unaff_x22,uRam0000000003d5b0d0);
        }
        if (lVar2 == 0) goto code_r0x014b5fbc;
        uVar3 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar2,uRam0000000003d57948);
        /*Atlas.UI.PaginationDotController$$InitDot*/ func_0x014b60e0(param_1,uVar3,unaff_x20);
        uVar1 = (int)unaff_x20 + 1;
        unaff_x20 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(param_1 + 0x20));
    }
    lVar2 = /*Atlas.UI.PaginationDotController$$SetDotHighlightStates*/ func_0x014b620c(param_1);
    *(undefined1 *)(param_1 + 0x24) = 0;
    *(undefined1 *)(param_1 + 0x88) = 1;
    if (*(char *)(param_1 + 0xa4) == '\0') {
code_r0x014b5f10:
      if (*(long *)(param_1 + 0x50) == 0) {
        if (*(long *)(param_1 + 0x58) == 0) {
          return lVar2;
        }
        lVar2 = *(long *)(*(long *)(param_1 + 0x58) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,param_1,uRam0000000003d5b3a0,0);
        unaff_x20 = 0;
        if (lVar2 != 0) {
          puVar5 = *(undefined1 **)((long)register0x00000008 + -0x10);
          puVar6 = *(undefined **)((long)register0x00000008 + -8);
          lVar4 = *(long *)((long)register0x00000008 + -0x20);
          param_1 = *(long *)((long)register0x00000008 + -0x18);
          unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
          uVar3 = *(undefined8 *)((long)register0x00000008 + -0x28);
          goto code_r0x03277f74;
        }
      }
      else {
        lVar2 = *(long *)(*(long *)(param_1 + 0x50) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,param_1,uRam0000000003d5b398,0);
        unaff_x20 = 0;
        if (lVar2 != 0) {
          puVar6 = &UNK_014b5f5c;
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
          lVar4 = lVar2;
          uVar3 = unaff_x21;
code_r0x03277f74:
          *(long *)((long)register0x00000008 + -0x20) = lVar4;
          *(long *)((long)register0x00000008 + -0x18) = param_1;
          *(undefined1 **)((long)register0x00000008 + -0x10) = puVar5;
          *(undefined **)((long)register0x00000008 + -8) = puVar6;
          *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x48) = uVar3;
          *(long *)((long)register0x00000008 + -0x40) = lVar4;
          *(long *)((long)register0x00000008 + -0x38) = lVar2;
          *(undefined1 **)((long)register0x00000008 + -0x30) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined **)((long)register0x00000008 + -0x28) = &UNK_03277f8c;
          if ((bRam0000000003ec1a32 & 1) == 0) {
            func_0x00f78a20(0x3d22a90,unaff_x21,0);
            bRam0000000003ec1a32 = 1;
          }
          lVar2 = func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
          /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x032313fc(lVar2,unaff_x21,0);
          return lVar2;
        }
      }
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0xa8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar3,0);
      if ((int)lVar2 == 0) goto code_r0x014b5f10;
      lVar2 = *(long *)(param_1 + 0xa8);
      unaff_x21 = func_0x00f78aec(/*System.Action<UIAtlasButton>_TypeInfo*/ uRam0000000003d1b5b0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,param_1,uRam0000000003d5b3a8,uRam0000000003d2a350);
      unaff_x20 = 0;
      if (lVar2 != 0) {
        lVar2 = /*Atlas.UI.UIAtlasButtonGroup$$add_OnButtonSelectedEvent*/ func_0x01515dfc(lVar2,unaff_x21,0);
        goto code_r0x014b5f10;
      }
    }
code_r0x014b5fbc:
    lVar2 = func_0x00f78af4();
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x68) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x60) = puVar5;
    *(code **)((long)register0x00000008 + -0x58) =
         Atlas_UI_PaginationDotController__DisablePagination;
    if (*(long *)(lVar2 + 0x18) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar2 + 0x18),0,0);
      lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar2,0);
      if (lVar4 != 0) {
        *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x70) =
             *(undefined8 *)((long)register0x00000008 + -0x70);
        *(undefined8 *)((long)register0x00000008 + -0x68) =
             *(undefined8 *)((long)register0x00000008 + -0x68);
        *(undefined8 *)((long)register0x00000008 + -0x60) =
             *(undefined8 *)((long)register0x00000008 + -0x60);
        *(undefined8 *)((long)register0x00000008 + -0x58) =
             *(undefined8 *)((long)register0x00000008 + -0x58);
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar2 = (*pcRam0000000003ebf4c0)(lVar4,0);
        return lVar2;
      }
    }
    lVar4 = func_0x00f78af4();
    *(undefined4 *)(lVar4 + 0x7c) = extraout_s0;
    *(ulong *)((long)register0x00000008 + -0x90) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x88) = lVar2;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x60);
    *(code **)((long)register0x00000008 + -0x78) = Atlas_UI_PaginationDotController__ScrollToTarget;
    if (*(long *)(lVar4 + 0x18) != 0) {
      lVar2 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(lVar4 + 0x18),0);
      *(float *)(lVar4 + 0x80) = extraout_s0_00;
      if (*(char *)(lVar4 + 0x38) != '\0') {
        *(float *)(lVar4 + 0x9c) =
             *(float *)(lVar4 + 0xa0) *
             ((1.0 - ABS(extraout_s0_00 - *(float *)(lVar4 + 0x7c))) + 1.0) * 0.5;
      }
      *(undefined1 *)(lVar4 + 0x78) = 1;
      *(undefined4 *)(lVar4 + 0x84) = 0;
      if (*(long *)(lVar4 + 0x18) != 0) {
        *(undefined1 *)(*(long *)(lVar4 + 0x18) + 0x20) = 0;
        return lVar2;
      }
    }
    unaff_x19 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_d8;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x20;
    *(long *)((long)register0x00000008 + -0xa8) = lVar4;
    *(undefined1 **)((long)register0x00000008 + -0xa0) =
         (undefined1 *)((long)register0x00000008 + -0x80);
    *(code **)((long)register0x00000008 + -0x98) = Atlas_UI_PaginationDotController__SnapToTarget;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xa0);
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      lVar2 = /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(*(long *)(unaff_x19 + 0x18),0);
      *(undefined4 *)(unaff_x19 + 0x7c) = extraout_s0_01;
      return lVar2;
    }
    unaff_x30 = Atlas_UI_PaginationDotController__Start;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
  } while( true );
}



// ============================================================
// RVA: 0x14b60e0 | Atlas.UI.PaginationDotController.InitDot
// ============================================================

/* WARNING: Possible PIC construction at 0x014b5e78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b5f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014b5e7c) */
/* WARNING: Removing unreachable block (ram,0x014b5e90) */
/* WARNING: Removing unreachable block (ram,0x014b5ea8) */
/* WARNING: Removing unreachable block (ram,0x014b5eb0) */
/* WARNING: Removing unreachable block (ram,0x014b5eb4) */
/* WARNING: Removing unreachable block (ram,0x014b5ec4) */
/* WARNING: Removing unreachable block (ram,0x014b5f00) */
/* WARNING: Removing unreachable block (ram,0x014b5f10) */
/* WARNING: Removing unreachable block (ram,0x014b5f5c) */
/* WARNING: Removing unreachable block (ram,0x014b5f64) */
/* WARNING: Removing unreachable block (ram,0x014b5f98) */
/* WARNING: Removing unreachable block (ram,0x014b5f18) */
/* WARNING: Removing unreachable block (ram,0x014b5f4c) */
/* WARNING: Removing unreachable block (ram,0x03277f74) */
/* WARNING: Removing unreachable block (ram,0x03277f8c) */
/* WARNING: Removing unreachable block (ram,0x03277fa8) */
/* WARNING: Removing unreachable block (ram,0x03277fac) */
/* WARNING: Removing unreachable block (ram,0x03277fd4) */
/* WARNING: Removing unreachable block (ram,0x03277fe8) */
/* WARNING: Removing unreachable block (ram,0x03277f98) */
/* WARNING: Removing unreachable block (ram,0x03231580) */
/* WARNING: Removing unreachable block (ram,0x032315a4) */
/* WARNING: Removing unreachable block (ram,0x032315b8) */
/* WARNING: Removing unreachable block (ram,0x032315ec) */
/* WARNING: Removing unreachable block (ram,0x03231634) */
/* WARNING: Removing unreachable block (ram,0x0323169c) */
/* WARNING: Removing unreachable block (ram,0x032316b8) */
/* WARNING: Removing unreachable block (ram,0x032316d4) */
/* WARNING: Removing unreachable block (ram,0x0323175c) */
/* WARNING: Removing unreachable block (ram,0x03231768) */
/* WARNING: Removing unreachable block (ram,0x032316e4) */
/* WARNING: Removing unreachable block (ram,0x032316ec) */
/* WARNING: Removing unreachable block (ram,0x032316f4) */
/* WARNING: Removing unreachable block (ram,0x03231700) */
/* WARNING: Removing unreachable block (ram,0x03231718) */
/* WARNING: Removing unreachable block (ram,0x03231720) */
/* WARNING: Removing unreachable block (ram,0x0323172c) */
/* WARNING: Removing unreachable block (ram,0x03231734) */
/* WARNING: Removing unreachable block (ram,0x03231738) */
/* WARNING: Removing unreachable block (ram,0x0323174c) */
/* WARNING: Removing unreachable block (ram,0x03231758) */
/* WARNING: Removing unreachable block (ram,0x032317bc) */
/* WARNING: Removing unreachable block (ram,0x032317dc) */
/* WARNING: Removing unreachable block (ram,0x032317f0) */
/* WARNING: Removing unreachable block (ram,0x0323181c) */
/* WARNING: Removing unreachable block (ram,0x0323183c) */
/* WARNING: Removing unreachable block (ram,0x03231850) */
/* WARNING: Removing unreachable block (ram,0x0323187c) */
/* WARNING: Removing unreachable block (ram,0x0323189c) */
/* WARNING: Removing unreachable block (ram,0x032318bc) */
/* WARNING: Removing unreachable block (ram,0x032318c4) */
/* WARNING: Removing unreachable block (ram,0x032318cc) */
/* WARNING: Removing unreachable block (ram,0x032318e4) */
/* WARNING: Removing unreachable block (ram,0x03231920) */
/* WARNING: Removing unreachable block (ram,0x03231954) */
/* WARNING: Removing unreachable block (ram,0x03231974) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x03231900) */
/* WARNING: Removing unreachable block (ram,0x03231910) */
/* WARNING: Removing unreachable block (ram,0x03231858) */
/* WARNING: Removing unreachable block (ram,0x032317f8) */
/* WARNING: Removing unreachable block (ram,0x032315c0) */

void Atlas_UI_PaginationDotController__InitDot(long param_1,ulong param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar12;
  code *pcVar13;
  undefined *puVar14;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float fVar15;
  undefined4 uVar16;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar17 [12];
  
  puVar2 = &stack0xffffffffffffffc0;
  puVar12 = &stack0xfffffffffffffff0;
  uVar11 = 0x3d28588;
  if ((bRam0000000003eb4ac0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d3c5b8);
    func_0x00f78a20(0x3d3c5d0);
    func_0x00f78a20(0x3d63998);
    func_0x00f78a20(0x3d28588);
    bRam0000000003eb4ac0 = 1;
  }
  lVar6 = func_0x00f78aec(/*Atlas.UI.PaginationDotController.<>c__DisplayClass44_0_TypeInfo*/ uRam0000000003d28588);
  /*Atlas.UI.PaginationDotController.<>c__DisplayClass44_0$$.ctor*/ func_0x0156189c(lVar6,0);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x10) = param_1;
    *(int *)(lVar6 + 0x18) = (int)param_3;
    if (*(long *)(param_1 + 0x68) != 0) {
      uVar11 = 0x3d63000;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0x68),param_2,uRam0000000003d3c5b8);
      param_3 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
      /*System.Action$$.ctor*/ func_0x02924c80(param_3,lVar6,uRam0000000003d63998,0);
      if (param_2 != 0) {
        /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(param_2,param_3,0);
        /*Atlas.UI.UIAtlasButton$$SubscribeToGroup*/ func_0x01514768(param_2,*(undefined8 *)(param_1 + 0x48),0);
        if (*(long *)(param_1 + 0x68) != 0) {
          *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x18);
          return;
        }
      }
    }
  }
  puVar14 = &Atlas_UI_PaginationDotController__SetDotHighlightStates;
  lVar7 = func_0x00f78af4();
  do {
    *(long *)(puVar2 + -0x30) = lVar6;
    *(undefined8 *)(puVar2 + -0x28) = param_3;
    *(ulong *)(puVar2 + -0x20) = param_2;
    *(long *)(puVar2 + -0x18) = param_1;
    *(undefined1 **)(puVar2 + -0x10) = puVar12;
    *(undefined **)(puVar2 + -8) = puVar14;
    uVar9 = 0x3eb4000;
    if ((bRam0000000003eb4abf & 1) == 0) {
      func_0x00f78a20(0x3d3c5d8);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4abf = 1;
    }
    if (*(long *)(lVar7 + 0x18) != 0) {
      fVar15 = (float)/*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(lVar7 + 0x18),0);
      *(float *)(lVar7 + 0x70) = fVar15;
      uVar8 = /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(fVar15 * (float)(*(int *)(lVar7 + 0x20) + -1),0);
      *(int *)(lVar7 + 0x74) = (int)uVar8;
      uVar3 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d32c(uVar8,0,*(int *)(lVar7 + 0x20) + -1,0);
      *(uint *)(lVar7 + 0x74) = uVar3;
      if (*(int *)(lVar7 + 0x20) < 1) {
        return;
      }
      uVar9 = 0;
      while( true ) {
        lVar10 = *(long *)(lVar7 + 0x68);
        param_3 = 0;
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar9) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar3 = *(uint *)(lVar7 + 0x74);
        }
        if (uVar9 == uVar3) {
          lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + uVar9 * 8 + 0x20);
          param_3 = *(undefined8 *)(lVar7 + 0x90);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,param_3,0);
          if (iVar4 == 0) {
            return;
          }
          uVar9 = 0;
          if (lVar10 != 0) {
            /*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(lVar10,0,0,0,0);
            *(long *)(lVar7 + 0x90) = lVar10;
            return;
          }
          break;
        }
        uVar9 = uVar9 + 1;
        if ((long)*(int *)(lVar7 + 0x20) <= (long)uVar9) {
          return;
        }
      }
    }
    auVar17 = func_0x00f78af4();
    lVar5 = auVar17._0_8_;
    *(ulong *)(puVar2 + -0x50) = uVar9;
    *(long *)(puVar2 + -0x48) = lVar7;
    *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x38) = &Atlas_UI_PaginationDotController__OnDotPressed;
    uVar16 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((float)auVar17._8_4_ / (float)(*(int *)(lVar5 + 0x20) + -1),0);
    *(undefined4 *)(lVar5 + 0x7c) = uVar16;
    puVar12 = *(undefined1 **)(puVar2 + -0x40);
    pcVar13 = *(code **)(puVar2 + -0x38);
    param_2 = *(ulong *)(puVar2 + -0x50);
    lVar10 = *(long *)(puVar2 + -0x48);
    puVar1 = puVar2 + -0x30;
    while( true ) {
      *(ulong *)(puVar1 + -0x20) = param_2;
      *(long *)(puVar1 + -0x18) = lVar10;
      *(undefined1 **)(puVar1 + -0x10) = puVar12;
      *(code **)(puVar1 + -8) = pcVar13;
      if (*(long *)(lVar5 + 0x18) != 0) {
        fVar15 = (float)/*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(lVar5 + 0x18),0);
        *(float *)(lVar5 + 0x80) = fVar15;
        if (*(char *)(lVar5 + 0x38) != '\0') {
          *(float *)(lVar5 + 0x9c) =
               *(float *)(lVar5 + 0xa0) *
               ((1.0 - ABS(fVar15 - *(float *)(lVar5 + 0x7c))) + 1.0) * 0.5;
        }
        *(undefined1 *)(lVar5 + 0x78) = 1;
        *(undefined4 *)(lVar5 + 0x84) = 0;
        if (*(long *)(lVar5 + 0x18) != 0) {
          *(undefined1 *)(*(long *)(lVar5 + 0x18) + 0x20) = 0;
          return;
        }
      }
      lVar10 = func_0x00f78af4();
      *(undefined8 *)(puVar1 + -0x50) = unaff_d9;
      *(undefined8 *)(puVar1 + -0x48) = unaff_d8;
      *(ulong *)(puVar1 + -0x40) = param_2;
      *(long *)(puVar1 + -0x38) = lVar5;
      *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
      *(code **)(puVar1 + -0x28) = Atlas_UI_PaginationDotController__SnapToTarget;
      if (*(long *)(lVar10 + 0x18) != 0) {
        /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(*(long *)(lVar10 + 0x18),0);
        *(undefined4 *)(lVar10 + 0x7c) = extraout_s0_00;
        return;
      }
      lVar7 = func_0x00f78af4();
      if (*(char *)(lVar7 + 0x24) != '\0') {
        return;
      }
      puVar2 = puVar1 + -0xa0;
      *(undefined8 *)(puVar1 + -0xa0) = unaff_x26;
      *(undefined8 *)(puVar1 + -0x98) = unaff_x25;
      *(undefined8 *)(puVar1 + -0x90) = unaff_x24;
      *(undefined8 *)(puVar1 + -0x88) = uVar11;
      *(long *)(puVar1 + -0x80) = lVar6;
      *(undefined8 *)(puVar1 + -0x78) = param_3;
      *(ulong *)(puVar1 + -0x70) = param_2;
      *(long *)(puVar1 + -0x68) = lVar10;
      *(undefined1 **)(puVar1 + -0x60) = puVar1 + -0x30;
      *(code **)(puVar1 + -0x58) = Atlas_UI_PaginationDotController__Start;
      puVar12 = puVar1 + -0x60;
      param_2 = 0x3eb4000;
      if ((bRam0000000003eb4abb & 1) == 0) {
        func_0x00f78a20(0x3d2a350);
        func_0x00f78a20(0x3d1b5b0);
        func_0x00f78a20(0x3d57948);
        func_0x00f78a20(0x3d5b0d0);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d5b3a8);
        func_0x00f78a20(0x3d5b398);
        func_0x00f78a20(0x3d5b3a0);
        func_0x00f78a20(0x3d25740);
        bRam0000000003eb4abb = 1;
      }
      if (*(char *)(lVar7 + 0x88) != '\0') {
        return;
      }
      *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(lVar7 + 0x9c);
      if (*(int *)(lVar7 + 0x20) < 1) break;
      param_2 = 0;
      uVar11 = 0x3d57948;
      unaff_x24 = 0x3d23990;
      unaff_x25 = 0x3d5b0d0;
      while( true ) {
        if ((int)param_2 == 0) {
          lVar10 = *(long *)(lVar7 + 0x28);
        }
        else {
          param_3 = *(undefined8 *)(lVar7 + 0x30);
          lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar10 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(param_3,lVar6,uRam0000000003d5b0d0);
        }
        if (lVar10 == 0) break;
        uVar8 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar10,uRam0000000003d57948);
        Atlas_UI_PaginationDotController__InitDot(lVar7,uVar8,param_2);
        uVar3 = (int)param_2 + 1;
        param_2 = (ulong)uVar3;
        if (*(int *)(lVar7 + 0x20) <= (int)uVar3) goto code_r0x014b5e74;
      }
      lVar10 = func_0x00f78af4();
      *(ulong *)(puVar1 + -0xc0) = param_2;
      *(long *)(puVar1 + -0xb8) = lVar7;
      *(undefined1 **)(puVar1 + -0xb0) = puVar12;
      *(code **)(puVar1 + -0xa8) = Atlas_UI_PaginationDotController__DisablePagination;
      puVar12 = puVar1 + -0xb0;
      if (*(long *)(lVar10 + 0x18) != 0) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar10 + 0x18),0,0);
        lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar10,0);
        if (lVar7 != 0) {
          *(long *)(puVar1 + -0xd0) = lVar6;
          *(undefined8 *)(puVar1 + -200) = param_3;
          *(undefined8 *)(puVar1 + -0xc0) = *(undefined8 *)(puVar1 + -0xc0);
          *(undefined8 *)(puVar1 + -0xb8) = *(undefined8 *)(puVar1 + -0xb8);
          *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -0xb0);
          *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(puVar1 + -0xa8);
          if (pcRam0000000003ebf4c0 == (code *)0x0) {
            pcRam0000000003ebf4c0 =
                 (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
          }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000003ebf4c0)(lVar7,0);
          return;
        }
      }
      pcVar13 = Atlas_UI_PaginationDotController__ScrollToTarget;
      lVar5 = func_0x00f78af4();
      *(undefined4 *)(lVar5 + 0x7c) = extraout_s0;
      puVar1 = puVar1 + -0xc0;
    }
code_r0x014b5e74:
    puVar14 = &UNK_014b5e7c;
    param_1 = lVar7;
  } while( true );
}



// ============================================================
// RVA: 0x14b620c | Atlas.UI.PaginationDotController.SetDotHighlightStates
// ============================================================

/* WARNING: Possible PIC construction at 0x014b5f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f8c) */
/* WARNING: Removing unreachable block (ram,0x03277fa8) */
/* WARNING: Removing unreachable block (ram,0x03277f98) */
/* WARNING: Removing unreachable block (ram,0x03231580) */
/* WARNING: Removing unreachable block (ram,0x032315a4) */
/* WARNING: Removing unreachable block (ram,0x032315b8) */
/* WARNING: Removing unreachable block (ram,0x032315ec) */
/* WARNING: Removing unreachable block (ram,0x03231634) */
/* WARNING: Removing unreachable block (ram,0x0323169c) */
/* WARNING: Removing unreachable block (ram,0x032316b8) */
/* WARNING: Removing unreachable block (ram,0x032316d4) */
/* WARNING: Removing unreachable block (ram,0x0323175c) */
/* WARNING: Removing unreachable block (ram,0x03231768) */
/* WARNING: Removing unreachable block (ram,0x032316e4) */
/* WARNING: Removing unreachable block (ram,0x032316ec) */
/* WARNING: Removing unreachable block (ram,0x032316f4) */
/* WARNING: Removing unreachable block (ram,0x03231700) */
/* WARNING: Removing unreachable block (ram,0x03231718) */
/* WARNING: Removing unreachable block (ram,0x03231720) */
/* WARNING: Removing unreachable block (ram,0x0323172c) */
/* WARNING: Removing unreachable block (ram,0x03231734) */
/* WARNING: Removing unreachable block (ram,0x03231738) */
/* WARNING: Removing unreachable block (ram,0x0323174c) */
/* WARNING: Removing unreachable block (ram,0x03231758) */
/* WARNING: Removing unreachable block (ram,0x032317bc) */
/* WARNING: Removing unreachable block (ram,0x032317dc) */
/* WARNING: Removing unreachable block (ram,0x032317f0) */
/* WARNING: Removing unreachable block (ram,0x0323181c) */
/* WARNING: Removing unreachable block (ram,0x0323183c) */
/* WARNING: Removing unreachable block (ram,0x03231850) */
/* WARNING: Removing unreachable block (ram,0x0323187c) */
/* WARNING: Removing unreachable block (ram,0x0323189c) */
/* WARNING: Removing unreachable block (ram,0x032318bc) */
/* WARNING: Removing unreachable block (ram,0x032318c4) */
/* WARNING: Removing unreachable block (ram,0x032318cc) */
/* WARNING: Removing unreachable block (ram,0x032318e4) */
/* WARNING: Removing unreachable block (ram,0x03231920) */
/* WARNING: Removing unreachable block (ram,0x03231954) */
/* WARNING: Removing unreachable block (ram,0x03231974) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x03231900) */
/* WARNING: Removing unreachable block (ram,0x03231910) */
/* WARNING: Removing unreachable block (ram,0x03231858) */
/* WARNING: Removing unreachable block (ram,0x032317f8) */
/* WARNING: Removing unreachable block (ram,0x032315c0) */

ulong Atlas_UI_PaginationDotController__SetDotHighlightStates(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 unaff_x21;
  long lVar8;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  float fVar11;
  undefined4 uVar12;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar13 [12];
  code *pcStack_38;
  
  puVar9 = &stack0xfffffffffffffff0;
  uVar7 = 0x3eb4000;
  if ((bRam0000000003eb4abf & 1) == 0) {
    func_0x00f78a20(0x3d3c5d8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4abf = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    fVar11 = (float)/*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(param_1 + 0x18),0);
    *(float *)(param_1 + 0x70) = fVar11;
    uVar5 = /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(fVar11 * (float)(*(int *)(param_1 + 0x20) + -1),0);
    *(int *)(param_1 + 0x74) = (int)uVar5;
    uVar6 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d32c(uVar5,0,*(int *)(param_1 + 0x20) + -1,0);
    *(int *)(param_1 + 0x74) = (int)uVar6;
    if (0 < *(int *)(param_1 + 0x20)) {
      uVar7 = 0;
      do {
        lVar8 = *(long *)(param_1 + 0x68);
        unaff_x21 = 0;
        if (lVar8 == 0) goto LAB_014b6354;
        if (*(uint *)(lVar8 + 0x18) <= uVar7) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          uVar6 = (ulong)*(uint *)(param_1 + 0x74);
        }
        if (uVar7 == (uVar6 & 0xffffffff)) {
          lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + uVar7 * 8 + 0x20);
          unaff_x21 = *(undefined8 *)(param_1 + 0x90);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,unaff_x21,0);
          if ((int)uVar7 == 0) {
            return uVar7;
          }
          uVar7 = 0;
          if (lVar8 != 0) {
            uVar7 = /*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(lVar8,0,0,0,0);
            *(long *)(param_1 + 0x90) = lVar8;
            return uVar7;
          }
          goto LAB_014b6354;
        }
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)*(int *)(param_1 + 0x20));
    }
    return uVar6;
  }
LAB_014b6354:
  auVar13 = func_0x00f78af4();
  lVar8 = auVar13._0_8_;
  pcStack_38 = (code *)&Atlas_UI_PaginationDotController__OnDotPressed;
  uVar12 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((float)auVar13._8_4_ / (float)(*(int *)(lVar8 + 0x20) + -1),0);
  *(undefined4 *)(lVar8 + 0x7c) = uVar12;
  puVar3 = &stack0xffffffffffffffd0;
  do {
    *(ulong *)(puVar3 + -0x20) = uVar7;
    *(long *)(puVar3 + -0x18) = param_1;
    *(undefined1 **)(puVar3 + -0x10) = puVar9;
    *(code **)(puVar3 + -8) = pcStack_38;
    if (*(long *)(lVar8 + 0x18) != 0) {
      uVar6 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(lVar8 + 0x18),0);
      *(float *)(lVar8 + 0x80) = extraout_s0_00;
      if (*(char *)(lVar8 + 0x38) != '\0') {
        *(float *)(lVar8 + 0x9c) =
             *(float *)(lVar8 + 0xa0) *
             ((1.0 - ABS(extraout_s0_00 - *(float *)(lVar8 + 0x7c))) + 1.0) * 0.5;
      }
      *(undefined1 *)(lVar8 + 0x78) = 1;
      *(undefined4 *)(lVar8 + 0x84) = 0;
      if (*(long *)(lVar8 + 0x18) != 0) {
        *(undefined1 *)(*(long *)(lVar8 + 0x18) + 0x20) = 0;
        return uVar6;
      }
    }
    lVar4 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x50) = unaff_d9;
    *(undefined8 *)(puVar3 + -0x48) = unaff_d8;
    *(ulong *)(puVar3 + -0x40) = uVar7;
    *(long *)(puVar3 + -0x38) = lVar8;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(code **)(puVar3 + -0x28) = Atlas_UI_PaginationDotController__SnapToTarget;
    if (*(long *)(lVar4 + 0x18) != 0) {
      uVar7 = /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(*(long *)(lVar4 + 0x18),0);
      *(undefined4 *)(lVar4 + 0x7c) = extraout_s0_01;
      return uVar7;
    }
    uVar6 = func_0x00f78af4();
    if (*(char *)(uVar6 + 0x24) != '\0') {
      return uVar6;
    }
    puVar2 = puVar3 + -0xa0;
    *(undefined8 *)(puVar3 + -0xa0) = unaff_x26;
    *(undefined8 *)(puVar3 + -0x98) = unaff_x25;
    *(undefined8 *)(puVar3 + -0x90) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x88) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x80) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x78) = unaff_x21;
    *(ulong *)(puVar3 + -0x70) = uVar7;
    *(long *)(puVar3 + -0x68) = lVar4;
    *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x30;
    *(code **)(puVar3 + -0x58) = Atlas_UI_PaginationDotController__Start;
    puVar9 = puVar3 + -0x60;
    uVar7 = uVar6;
    if ((bRam0000000003eb4abb & 1) == 0) {
      func_0x00f78a20(0x3d2a350);
      func_0x00f78a20(0x3d1b5b0);
      func_0x00f78a20(0x3d57948);
      func_0x00f78a20(0x3d5b0d0);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d5b3a8);
      func_0x00f78a20(0x3d5b398);
      func_0x00f78a20(0x3d5b3a0);
      uVar7 = func_0x00f78a20(0x3d25740);
      bRam0000000003eb4abb = 1;
    }
    if (*(char *)(uVar6 + 0x88) != '\0') {
      return uVar7;
    }
    *(undefined4 *)(uVar6 + 0xa0) = *(undefined4 *)(uVar6 + 0x9c);
    if (0 < *(int *)(uVar6 + 0x20)) {
      uVar7 = 0;
      unaff_x23 = 0x3d57948;
      unaff_x24 = 0x3d23990;
      unaff_x25 = 0x3d5b0d0;
      do {
        if ((int)uVar7 == 0) {
          lVar8 = *(long *)(uVar6 + 0x28);
        }
        else {
          unaff_x21 = *(undefined8 *)(uVar6 + 0x30);
          unaff_x22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar6,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar8 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(unaff_x21,unaff_x22,uRam0000000003d5b0d0);
        }
        if (lVar8 == 0) goto code_r0x014b5fbc;
        uVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar8,uRam0000000003d57948);
        Atlas_UI_PaginationDotController__InitDot(uVar6,uVar5,uVar7);
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(uVar6 + 0x20));
    }
    uVar7 = Atlas_UI_PaginationDotController__SetDotHighlightStates(uVar6);
    *(undefined1 *)(uVar6 + 0x24) = 0;
    *(undefined1 *)(uVar6 + 0x88) = 1;
    if (*(char *)(uVar6 + 0xa4) == '\0') {
code_r0x014b5f10:
      if (*(long *)(uVar6 + 0x50) == 0) {
        if (*(long *)(uVar6 + 0x58) == 0) {
          return uVar7;
        }
        lVar8 = *(long *)(*(long *)(uVar6 + 0x58) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,uVar6,uRam0000000003d5b3a0,0);
        uVar7 = 0;
        if (lVar8 != 0) {
          puVar9 = *(undefined1 **)(puVar3 + -0x60);
          puVar10 = *(undefined **)(puVar3 + -0x58);
          lVar4 = *(long *)(puVar3 + -0x70);
          uVar6 = *(ulong *)(puVar3 + -0x68);
          unaff_x22 = *(undefined8 *)(puVar3 + -0x80);
          uVar5 = *(undefined8 *)(puVar3 + -0x78);
          puVar2 = puVar3 + -0x50;
          goto code_r0x03277f74;
        }
      }
      else {
        lVar8 = *(long *)(*(long *)(uVar6 + 0x50) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,uVar6,uRam0000000003d5b398,0);
        uVar7 = 0;
        if (lVar8 != 0) {
          puVar10 = &UNK_014b5f5c;
          lVar4 = lVar8;
          uVar5 = unaff_x21;
code_r0x03277f74:
          *(long *)(puVar2 + -0x20) = lVar4;
          *(ulong *)(puVar2 + -0x18) = uVar6;
          *(undefined1 **)(puVar2 + -0x10) = puVar9;
          *(undefined **)(puVar2 + -8) = puVar10;
          *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
          *(undefined8 *)(puVar2 + -0x48) = uVar5;
          *(long *)(puVar2 + -0x40) = lVar4;
          *(long *)(puVar2 + -0x38) = lVar8;
          *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x28) = &UNK_03277f8c;
          if ((bRam0000000003ec1a32 & 1) == 0) {
            func_0x00f78a20(0x3d22a90,unaff_x21,0);
            bRam0000000003ec1a32 = 1;
          }
          uVar7 = func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
          /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x032313fc(uVar7,unaff_x21,0);
          return uVar7;
        }
      }
    }
    else {
      uVar5 = *(undefined8 *)(uVar6 + 0xa8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
      if ((int)uVar7 == 0) goto code_r0x014b5f10;
      lVar8 = *(long *)(uVar6 + 0xa8);
      unaff_x21 = func_0x00f78aec(/*System.Action<UIAtlasButton>_TypeInfo*/ uRam0000000003d1b5b0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,uVar6,uRam0000000003d5b3a8,uRam0000000003d2a350);
      uVar7 = 0;
      if (lVar8 != 0) {
        uVar7 = /*Atlas.UI.UIAtlasButtonGroup$$add_OnButtonSelectedEvent*/ func_0x01515dfc(lVar8,unaff_x21,0);
        goto code_r0x014b5f10;
      }
    }
code_r0x014b5fbc:
    param_1 = func_0x00f78af4();
    *(ulong *)(puVar3 + -0xc0) = uVar7;
    *(ulong *)(puVar3 + -0xb8) = uVar6;
    *(undefined1 **)(puVar3 + -0xb0) = puVar9;
    *(code **)(puVar3 + -0xa8) = Atlas_UI_PaginationDotController__DisablePagination;
    puVar9 = puVar3 + -0xb0;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_1 + 0x18),0,0);
      lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
      if (lVar8 != 0) {
        *(undefined8 *)(puVar3 + -0xd0) = unaff_x22;
        *(undefined8 *)(puVar3 + -200) = unaff_x21;
        *(undefined8 *)(puVar3 + -0xc0) = *(undefined8 *)(puVar3 + -0xc0);
        *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0xb8);
        *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xb0);
        *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xa8);
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*pcRam0000000003ebf4c0)(lVar8,0);
        return uVar7;
      }
    }
    pcStack_38 = Atlas_UI_PaginationDotController__ScrollToTarget;
    lVar8 = func_0x00f78af4();
    *(undefined4 *)(lVar8 + 0x7c) = extraout_s0;
    puVar3 = puVar3 + -0xc0;
  } while( true );
}



// ============================================================
// RVA: 0x14b6358 | Atlas.UI.PaginationDotController.OnDotPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x014b5f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f8c) */
/* WARNING: Removing unreachable block (ram,0x03277fa8) */
/* WARNING: Removing unreachable block (ram,0x03277f98) */
/* WARNING: Removing unreachable block (ram,0x03231580) */
/* WARNING: Removing unreachable block (ram,0x032315a4) */
/* WARNING: Removing unreachable block (ram,0x032315b8) */
/* WARNING: Removing unreachable block (ram,0x032315ec) */
/* WARNING: Removing unreachable block (ram,0x03231634) */
/* WARNING: Removing unreachable block (ram,0x0323169c) */
/* WARNING: Removing unreachable block (ram,0x032316b8) */
/* WARNING: Removing unreachable block (ram,0x032316d4) */
/* WARNING: Removing unreachable block (ram,0x0323175c) */
/* WARNING: Removing unreachable block (ram,0x03231768) */
/* WARNING: Removing unreachable block (ram,0x032316e4) */
/* WARNING: Removing unreachable block (ram,0x032316ec) */
/* WARNING: Removing unreachable block (ram,0x032316f4) */
/* WARNING: Removing unreachable block (ram,0x03231700) */
/* WARNING: Removing unreachable block (ram,0x03231718) */
/* WARNING: Removing unreachable block (ram,0x03231720) */
/* WARNING: Removing unreachable block (ram,0x0323172c) */
/* WARNING: Removing unreachable block (ram,0x03231734) */
/* WARNING: Removing unreachable block (ram,0x03231738) */
/* WARNING: Removing unreachable block (ram,0x0323174c) */
/* WARNING: Removing unreachable block (ram,0x03231758) */
/* WARNING: Removing unreachable block (ram,0x032317bc) */
/* WARNING: Removing unreachable block (ram,0x032317dc) */
/* WARNING: Removing unreachable block (ram,0x032317f0) */
/* WARNING: Removing unreachable block (ram,0x0323181c) */
/* WARNING: Removing unreachable block (ram,0x0323183c) */
/* WARNING: Removing unreachable block (ram,0x03231850) */
/* WARNING: Removing unreachable block (ram,0x0323187c) */
/* WARNING: Removing unreachable block (ram,0x0323189c) */
/* WARNING: Removing unreachable block (ram,0x032318bc) */
/* WARNING: Removing unreachable block (ram,0x032318c4) */
/* WARNING: Removing unreachable block (ram,0x032318cc) */
/* WARNING: Removing unreachable block (ram,0x032318e4) */
/* WARNING: Removing unreachable block (ram,0x03231920) */
/* WARNING: Removing unreachable block (ram,0x03231954) */
/* WARNING: Removing unreachable block (ram,0x03231974) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x03231900) */
/* WARNING: Removing unreachable block (ram,0x03231910) */
/* WARNING: Removing unreachable block (ram,0x03231858) */
/* WARNING: Removing unreachable block (ram,0x032317f8) */
/* WARNING: Removing unreachable block (ram,0x032315c0) */

long Atlas_UI_PaginationDotController__OnDotPressed(long param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  ulong unaff_x20;
  long lVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar8;
  undefined *puVar9;
  code *unaff_x30;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 uVar10;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  uVar10 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((float)param_2 / (float)(*(int *)(param_1 + 0x20) + -1),0);
  *(undefined4 *)(param_1 + 0x7c) = uVar10;
  puVar3 = (undefined1 *)register0x00000008;
  do {
    *(ulong *)(puVar3 + -0x20) = unaff_x20;
    *(long *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(code **)(puVar3 + -8) = unaff_x30;
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar5 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(param_1 + 0x18),0);
      *(float *)(param_1 + 0x80) = extraout_s0_00;
      if (*(char *)(param_1 + 0x38) != '\0') {
        *(float *)(param_1 + 0x9c) =
             *(float *)(param_1 + 0xa0) *
             ((1.0 - ABS(extraout_s0_00 - *(float *)(param_1 + 0x7c))) + 1.0) * 0.5;
      }
      *(undefined1 *)(param_1 + 0x78) = 1;
      *(undefined4 *)(param_1 + 0x84) = 0;
      if (*(long *)(param_1 + 0x18) != 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x20) = 0;
        return lVar5;
      }
    }
    lVar5 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x50) = unaff_d9;
    *(undefined8 *)(puVar3 + -0x48) = unaff_d8;
    *(ulong *)(puVar3 + -0x40) = unaff_x20;
    *(long *)(puVar3 + -0x38) = param_1;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(code **)(puVar3 + -0x28) = Atlas_UI_PaginationDotController__SnapToTarget;
    if (*(long *)(lVar5 + 0x18) != 0) {
      lVar6 = /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(*(long *)(lVar5 + 0x18),0);
      *(undefined4 *)(lVar5 + 0x7c) = extraout_s0_01;
      return lVar6;
    }
    lVar6 = func_0x00f78af4();
    if (*(char *)(lVar6 + 0x24) != '\0') {
      return lVar6;
    }
    puVar2 = puVar3 + -0xa0;
    *(undefined8 *)(puVar3 + -0xa0) = unaff_x26;
    *(undefined8 *)(puVar3 + -0x98) = unaff_x25;
    *(undefined8 *)(puVar3 + -0x90) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x88) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x80) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x78) = unaff_x21;
    *(ulong *)(puVar3 + -0x70) = unaff_x20;
    *(long *)(puVar3 + -0x68) = lVar5;
    *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x30;
    *(code **)(puVar3 + -0x58) = Atlas_UI_PaginationDotController__Start;
    puVar8 = puVar3 + -0x60;
    lVar5 = lVar6;
    if ((bRam0000000003eb4abb & 1) == 0) {
      func_0x00f78a20(0x3d2a350);
      func_0x00f78a20(0x3d1b5b0);
      func_0x00f78a20(0x3d57948);
      func_0x00f78a20(0x3d5b0d0);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d5b3a8);
      func_0x00f78a20(0x3d5b398);
      func_0x00f78a20(0x3d5b3a0);
      lVar5 = func_0x00f78a20(0x3d25740);
      bRam0000000003eb4abb = 1;
    }
    if (*(char *)(lVar6 + 0x88) != '\0') {
      return lVar5;
    }
    *(undefined4 *)(lVar6 + 0xa0) = *(undefined4 *)(lVar6 + 0x9c);
    if (0 < *(int *)(lVar6 + 0x20)) {
      unaff_x20 = 0;
      unaff_x23 = 0x3d57948;
      unaff_x24 = 0x3d23990;
      unaff_x25 = 0x3d5b0d0;
      do {
        if ((int)unaff_x20 == 0) {
          lVar5 = *(long *)(lVar6 + 0x28);
        }
        else {
          unaff_x21 = *(undefined8 *)(lVar6 + 0x30);
          unaff_x22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar5 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(unaff_x21,unaff_x22,uRam0000000003d5b0d0);
        }
        if (lVar5 == 0) goto code_r0x014b5fbc;
        uVar4 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar5,uRam0000000003d57948);
        Atlas_UI_PaginationDotController__InitDot(lVar6,uVar4,unaff_x20);
        uVar1 = (int)unaff_x20 + 1;
        unaff_x20 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(lVar6 + 0x20));
    }
    lVar5 = Atlas_UI_PaginationDotController__SetDotHighlightStates(lVar6);
    *(undefined1 *)(lVar6 + 0x24) = 0;
    *(undefined1 *)(lVar6 + 0x88) = 1;
    if (*(char *)(lVar6 + 0xa4) == '\0') {
code_r0x014b5f10:
      if (*(long *)(lVar6 + 0x50) == 0) {
        if (*(long *)(lVar6 + 0x58) == 0) {
          return lVar5;
        }
        lVar5 = *(long *)(*(long *)(lVar6 + 0x58) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,lVar6,uRam0000000003d5b3a0,0);
        unaff_x20 = 0;
        if (lVar5 != 0) {
          puVar8 = *(undefined1 **)(puVar3 + -0x60);
          puVar9 = *(undefined **)(puVar3 + -0x58);
          lVar7 = *(long *)(puVar3 + -0x70);
          lVar6 = *(long *)(puVar3 + -0x68);
          unaff_x22 = *(undefined8 *)(puVar3 + -0x80);
          uVar4 = *(undefined8 *)(puVar3 + -0x78);
          puVar2 = puVar3 + -0x50;
          goto code_r0x03277f74;
        }
      }
      else {
        lVar5 = *(long *)(*(long *)(lVar6 + 0x50) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,lVar6,uRam0000000003d5b398,0);
        unaff_x20 = 0;
        if (lVar5 != 0) {
          puVar9 = &UNK_014b5f5c;
          lVar7 = lVar5;
          uVar4 = unaff_x21;
code_r0x03277f74:
          *(long *)(puVar2 + -0x20) = lVar7;
          *(long *)(puVar2 + -0x18) = lVar6;
          *(undefined1 **)(puVar2 + -0x10) = puVar8;
          *(undefined **)(puVar2 + -8) = puVar9;
          *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
          *(undefined8 *)(puVar2 + -0x48) = uVar4;
          *(long *)(puVar2 + -0x40) = lVar7;
          *(long *)(puVar2 + -0x38) = lVar5;
          *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x28) = &UNK_03277f8c;
          if ((bRam0000000003ec1a32 & 1) == 0) {
            func_0x00f78a20(0x3d22a90,unaff_x21,0);
            bRam0000000003ec1a32 = 1;
          }
          lVar5 = func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
          /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x032313fc(lVar5,unaff_x21,0);
          return lVar5;
        }
      }
    }
    else {
      uVar4 = *(undefined8 *)(lVar6 + 0xa8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
      if ((int)lVar5 == 0) goto code_r0x014b5f10;
      lVar5 = *(long *)(lVar6 + 0xa8);
      unaff_x21 = func_0x00f78aec(/*System.Action<UIAtlasButton>_TypeInfo*/ uRam0000000003d1b5b0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,lVar6,uRam0000000003d5b3a8,uRam0000000003d2a350);
      unaff_x20 = 0;
      if (lVar5 != 0) {
        lVar5 = /*Atlas.UI.UIAtlasButtonGroup$$add_OnButtonSelectedEvent*/ func_0x01515dfc(lVar5,unaff_x21,0);
        goto code_r0x014b5f10;
      }
    }
code_r0x014b5fbc:
    unaff_x19 = func_0x00f78af4();
    *(ulong *)(puVar3 + -0xc0) = unaff_x20;
    *(long *)(puVar3 + -0xb8) = lVar6;
    *(undefined1 **)(puVar3 + -0xb0) = puVar8;
    *(code **)(puVar3 + -0xa8) = Atlas_UI_PaginationDotController__DisablePagination;
    unaff_x29 = puVar3 + -0xb0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(unaff_x19 + 0x18),0,0);
      lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0);
      if (lVar5 != 0) {
        *(undefined8 *)(puVar3 + -0xd0) = unaff_x22;
        *(undefined8 *)(puVar3 + -200) = unaff_x21;
        *(undefined8 *)(puVar3 + -0xc0) = *(undefined8 *)(puVar3 + -0xc0);
        *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0xb8);
        *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xb0);
        *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xa8);
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar5 = (*pcRam0000000003ebf4c0)(lVar5,0);
        return lVar5;
      }
    }
    unaff_x30 = Atlas_UI_PaginationDotController__ScrollToTarget;
    param_1 = func_0x00f78af4();
    *(undefined4 *)(param_1 + 0x7c) = extraout_s0;
    puVar3 = puVar3 + -0xc0;
  } while( true );
}



// ============================================================
// RVA: 0x14b6398 | Atlas.UI.PaginationDotController.GetHorizontalPadding
// ============================================================

/* WARNING: Possible PIC construction at 0x014b5f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f8c) */
/* WARNING: Removing unreachable block (ram,0x03277fa8) */
/* WARNING: Removing unreachable block (ram,0x03277f98) */
/* WARNING: Removing unreachable block (ram,0x03231580) */
/* WARNING: Removing unreachable block (ram,0x032315a4) */
/* WARNING: Removing unreachable block (ram,0x032315b8) */
/* WARNING: Removing unreachable block (ram,0x032315ec) */
/* WARNING: Removing unreachable block (ram,0x03231634) */
/* WARNING: Removing unreachable block (ram,0x0323169c) */
/* WARNING: Removing unreachable block (ram,0x032316b8) */
/* WARNING: Removing unreachable block (ram,0x032316d4) */
/* WARNING: Removing unreachable block (ram,0x0323175c) */
/* WARNING: Removing unreachable block (ram,0x03231768) */
/* WARNING: Removing unreachable block (ram,0x032316e4) */
/* WARNING: Removing unreachable block (ram,0x032316ec) */
/* WARNING: Removing unreachable block (ram,0x032316f4) */
/* WARNING: Removing unreachable block (ram,0x03231700) */
/* WARNING: Removing unreachable block (ram,0x03231718) */
/* WARNING: Removing unreachable block (ram,0x03231720) */
/* WARNING: Removing unreachable block (ram,0x0323172c) */
/* WARNING: Removing unreachable block (ram,0x03231734) */
/* WARNING: Removing unreachable block (ram,0x03231738) */
/* WARNING: Removing unreachable block (ram,0x0323174c) */
/* WARNING: Removing unreachable block (ram,0x03231758) */
/* WARNING: Removing unreachable block (ram,0x032317bc) */
/* WARNING: Removing unreachable block (ram,0x032317dc) */
/* WARNING: Removing unreachable block (ram,0x032317f0) */
/* WARNING: Removing unreachable block (ram,0x0323181c) */
/* WARNING: Removing unreachable block (ram,0x0323183c) */
/* WARNING: Removing unreachable block (ram,0x03231850) */
/* WARNING: Removing unreachable block (ram,0x0323187c) */
/* WARNING: Removing unreachable block (ram,0x0323189c) */
/* WARNING: Removing unreachable block (ram,0x032318bc) */
/* WARNING: Removing unreachable block (ram,0x032318c4) */
/* WARNING: Removing unreachable block (ram,0x032318cc) */
/* WARNING: Removing unreachable block (ram,0x032318e4) */
/* WARNING: Removing unreachable block (ram,0x03231920) */
/* WARNING: Removing unreachable block (ram,0x03231954) */
/* WARNING: Removing unreachable block (ram,0x03231974) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x03231900) */
/* WARNING: Removing unreachable block (ram,0x03231910) */
/* WARNING: Removing unreachable block (ram,0x03231858) */
/* WARNING: Removing unreachable block (ram,0x032317f8) */
/* WARNING: Removing unreachable block (ram,0x032315c0) */

long Atlas_UI_PaginationDotController__GetHorizontalPadding(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 **ppuVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 uVar13;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar14 [12];
  code *pcStack_78;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb4abc & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4abc = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
  if ((int)lVar5 == 0) {
    return lVar5;
  }
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x60) + 0x18), lVar5 != 0)) {
    /*UnityEngine.RectOffset$$get_left*/ func_0x032545e4(0,lVar5,0);
    if ((*(long *)(param_1 + 0x60) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x60) + 0x18), lVar5 != 0)) {
      lVar5 = /*UnityEngine.RectOffset$$get_right*/ func_0x03254624(lVar5,0);
      return lVar5;
    }
  }
  lVar5 = func_0x00f78af4();
  puStack_48 = &Atlas_UI_PaginationDotController__GetLeftPadding;
  ppuVar10 = &puStack_50;
  uVar7 = 0x3d23990;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4abd & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4abd = 1;
  }
  uVar8 = *(ulong *)(lVar5 + 0x60);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
  if ((int)lVar6 != 0) {
    if ((*(long *)(lVar5 + 0x60) == 0) ||
       (lVar6 = *(long *)(*(long *)(lVar5 + 0x60) + 0x18), lVar6 == 0)) {
      auVar14 = func_0x00f78af4(0);
      lVar6 = auVar14._0_8_;
      pcStack_78 = (code *)&Atlas_UI_PaginationDotController__MoveScrollerExternal;
      uVar13 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((float)auVar14._8_4_ / (float)(*(int *)(lVar6 + 0x20) + -1),0);
      *(undefined4 *)(lVar6 + 0x7c) = uVar13;
      puVar3 = &stack0xffffffffffffff90;
      do {
        *(ulong *)(puVar3 + -0x20) = uVar8;
        *(long *)(puVar3 + -0x18) = lVar5;
        *(undefined1 ***)(puVar3 + -0x10) = ppuVar10;
        *(code **)(puVar3 + -8) = pcStack_78;
        if (*(long *)(lVar6 + 0x18) != 0) {
          lVar5 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(lVar6 + 0x18),0);
          *(float *)(lVar6 + 0x80) = extraout_s0_00;
          if (*(char *)(lVar6 + 0x38) != '\0') {
            *(float *)(lVar6 + 0x9c) =
                 *(float *)(lVar6 + 0xa0) *
                 ((1.0 - ABS(extraout_s0_00 - *(float *)(lVar6 + 0x7c))) + 1.0) * 0.5;
          }
          *(undefined1 *)(lVar6 + 0x78) = 1;
          *(undefined4 *)(lVar6 + 0x84) = 0;
          if (*(long *)(lVar6 + 0x18) != 0) {
            *(undefined1 *)(*(long *)(lVar6 + 0x18) + 0x20) = 0;
            return lVar5;
          }
        }
        lVar5 = func_0x00f78af4();
        *(undefined8 *)(puVar3 + -0x50) = unaff_d9;
        *(undefined8 *)(puVar3 + -0x48) = unaff_d8;
        *(ulong *)(puVar3 + -0x40) = uVar8;
        *(long *)(puVar3 + -0x38) = lVar6;
        *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
        *(code **)(puVar3 + -0x28) = Atlas_UI_PaginationDotController__SnapToTarget;
        if (*(long *)(lVar5 + 0x18) != 0) {
          lVar6 = /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(*(long *)(lVar5 + 0x18),0);
          *(undefined4 *)(lVar5 + 0x7c) = extraout_s0_01;
          return lVar6;
        }
        lVar6 = func_0x00f78af4();
        if (*(char *)(lVar6 + 0x24) != '\0') {
          return lVar6;
        }
        puVar2 = puVar3 + -0xa0;
        *(undefined8 *)(puVar3 + -0xa0) = unaff_x26;
        *(undefined8 *)(puVar3 + -0x98) = unaff_x25;
        *(undefined8 *)(puVar3 + -0x90) = unaff_x24;
        *(undefined8 *)(puVar3 + -0x88) = unaff_x23;
        *(undefined8 *)(puVar3 + -0x80) = unaff_x22;
        *(undefined8 *)(puVar3 + -0x78) = uVar7;
        *(ulong *)(puVar3 + -0x70) = uVar8;
        *(long *)(puVar3 + -0x68) = lVar5;
        *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x30;
        *(code **)(puVar3 + -0x58) = Atlas_UI_PaginationDotController__Start;
        puVar11 = puVar3 + -0x60;
        lVar5 = lVar6;
        if ((bRam0000000003eb4abb & 1) == 0) {
          func_0x00f78a20(0x3d2a350);
          func_0x00f78a20(0x3d1b5b0);
          func_0x00f78a20(0x3d57948);
          func_0x00f78a20(0x3d5b0d0);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d5b3a8);
          func_0x00f78a20(0x3d5b398);
          func_0x00f78a20(0x3d5b3a0);
          lVar5 = func_0x00f78a20(0x3d25740);
          bRam0000000003eb4abb = 1;
        }
        if (*(char *)(lVar6 + 0x88) != '\0') {
          return lVar5;
        }
        *(undefined4 *)(lVar6 + 0xa0) = *(undefined4 *)(lVar6 + 0x9c);
        if (0 < *(int *)(lVar6 + 0x20)) {
          uVar8 = 0;
          unaff_x23 = 0x3d57948;
          unaff_x24 = 0x3d23990;
          unaff_x25 = 0x3d5b0d0;
          do {
            if ((int)uVar8 == 0) {
              lVar5 = *(long *)(lVar6 + 0x28);
            }
            else {
              uVar7 = *(undefined8 *)(lVar6 + 0x30);
              unaff_x22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar5 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(uVar7,unaff_x22,uRam0000000003d5b0d0);
            }
            if (lVar5 == 0) goto code_r0x014b5fbc;
            uVar4 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar5,uRam0000000003d57948);
            Atlas_UI_PaginationDotController__InitDot(lVar6,uVar4,uVar8);
            uVar1 = (int)uVar8 + 1;
            uVar8 = (ulong)uVar1;
          } while ((int)uVar1 < *(int *)(lVar6 + 0x20));
        }
        lVar5 = Atlas_UI_PaginationDotController__SetDotHighlightStates(lVar6);
        *(undefined1 *)(lVar6 + 0x24) = 0;
        *(undefined1 *)(lVar6 + 0x88) = 1;
        if (*(char *)(lVar6 + 0xa4) == '\0') {
code_r0x014b5f10:
          if (*(long *)(lVar6 + 0x50) == 0) {
            if (*(long *)(lVar6 + 0x58) == 0) {
              return lVar5;
            }
            lVar5 = *(long *)(*(long *)(lVar6 + 0x58) + 0xf8);
            uVar7 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
            /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(uVar7,lVar6,uRam0000000003d5b3a0,0);
            uVar8 = 0;
            if (lVar5 != 0) {
              puVar11 = *(undefined1 **)(puVar3 + -0x60);
              puVar12 = *(undefined **)(puVar3 + -0x58);
              lVar9 = *(long *)(puVar3 + -0x70);
              lVar6 = *(long *)(puVar3 + -0x68);
              unaff_x22 = *(undefined8 *)(puVar3 + -0x80);
              uVar4 = *(undefined8 *)(puVar3 + -0x78);
              puVar2 = puVar3 + -0x50;
              goto code_r0x03277f74;
            }
          }
          else {
            lVar5 = *(long *)(*(long *)(lVar6 + 0x50) + 0xf8);
            uVar7 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
            /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(uVar7,lVar6,uRam0000000003d5b398,0);
            uVar8 = 0;
            if (lVar5 != 0) {
              puVar12 = &UNK_014b5f5c;
              lVar9 = lVar5;
              uVar4 = uVar7;
code_r0x03277f74:
              *(long *)(puVar2 + -0x20) = lVar9;
              *(long *)(puVar2 + -0x18) = lVar6;
              *(undefined1 **)(puVar2 + -0x10) = puVar11;
              *(undefined **)(puVar2 + -8) = puVar12;
              *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
              *(undefined8 *)(puVar2 + -0x48) = uVar4;
              *(long *)(puVar2 + -0x40) = lVar9;
              *(long *)(puVar2 + -0x38) = lVar5;
              *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
              *(undefined **)(puVar2 + -0x28) = &UNK_03277f8c;
              if ((bRam0000000003ec1a32 & 1) == 0) {
                func_0x00f78a20(0x3d22a90,uVar7,0);
                bRam0000000003ec1a32 = 1;
              }
              lVar5 = func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
              /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x032313fc(lVar5,uVar7,0);
              return lVar5;
            }
          }
        }
        else {
          uVar7 = *(undefined8 *)(lVar6 + 0xa8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar7,0);
          if ((int)lVar5 == 0) goto code_r0x014b5f10;
          lVar5 = *(long *)(lVar6 + 0xa8);
          uVar7 = func_0x00f78aec(/*System.Action<UIAtlasButton>_TypeInfo*/ uRam0000000003d1b5b0);
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar7,lVar6,uRam0000000003d5b3a8,uRam0000000003d2a350);
          uVar8 = 0;
          if (lVar5 != 0) {
            lVar5 = /*Atlas.UI.UIAtlasButtonGroup$$add_OnButtonSelectedEvent*/ func_0x01515dfc(lVar5,uVar7,0);
            goto code_r0x014b5f10;
          }
        }
code_r0x014b5fbc:
        lVar5 = func_0x00f78af4();
        *(ulong *)(puVar3 + -0xc0) = uVar8;
        *(long *)(puVar3 + -0xb8) = lVar6;
        *(undefined1 **)(puVar3 + -0xb0) = puVar11;
        *(code **)(puVar3 + -0xa8) = Atlas_UI_PaginationDotController__DisablePagination;
        ppuVar10 = (undefined1 **)(puVar3 + -0xb0);
        if (*(long *)(lVar5 + 0x18) != 0) {
          /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar5 + 0x18),0,0);
          lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar5,0);
          if (lVar6 != 0) {
            *(undefined8 *)(puVar3 + -0xd0) = unaff_x22;
            *(undefined8 *)(puVar3 + -200) = uVar7;
            *(undefined8 *)(puVar3 + -0xc0) = *(undefined8 *)(puVar3 + -0xc0);
            *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0xb8);
            *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xb0);
            *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xa8);
            if (pcRam0000000003ebf4c0 == (code *)0x0) {
              pcRam0000000003ebf4c0 =
                   (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
            }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar5 = (*pcRam0000000003ebf4c0)(lVar6,0);
            return lVar5;
          }
        }
        pcStack_78 = Atlas_UI_PaginationDotController__ScrollToTarget;
        lVar6 = func_0x00f78af4();
        *(undefined4 *)(lVar6 + 0x7c) = extraout_s0;
        puVar3 = puVar3 + -0xc0;
      } while( true );
    }
    lVar6 = /*UnityEngine.RectOffset$$get_left*/ func_0x032545e4(lVar6,0);
  }
  return lVar6;
}



// ============================================================
// RVA: 0x14b6464 | Atlas.UI.PaginationDotController.GetLeftPadding
// ============================================================

/* WARNING: Possible PIC construction at 0x014b5f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f8c) */
/* WARNING: Removing unreachable block (ram,0x03277fa8) */
/* WARNING: Removing unreachable block (ram,0x03277f98) */
/* WARNING: Removing unreachable block (ram,0x03231580) */
/* WARNING: Removing unreachable block (ram,0x032315a4) */
/* WARNING: Removing unreachable block (ram,0x032315b8) */
/* WARNING: Removing unreachable block (ram,0x032315ec) */
/* WARNING: Removing unreachable block (ram,0x03231634) */
/* WARNING: Removing unreachable block (ram,0x0323169c) */
/* WARNING: Removing unreachable block (ram,0x032316b8) */
/* WARNING: Removing unreachable block (ram,0x032316d4) */
/* WARNING: Removing unreachable block (ram,0x0323175c) */
/* WARNING: Removing unreachable block (ram,0x03231768) */
/* WARNING: Removing unreachable block (ram,0x032316e4) */
/* WARNING: Removing unreachable block (ram,0x032316ec) */
/* WARNING: Removing unreachable block (ram,0x032316f4) */
/* WARNING: Removing unreachable block (ram,0x03231700) */
/* WARNING: Removing unreachable block (ram,0x03231718) */
/* WARNING: Removing unreachable block (ram,0x03231720) */
/* WARNING: Removing unreachable block (ram,0x0323172c) */
/* WARNING: Removing unreachable block (ram,0x03231734) */
/* WARNING: Removing unreachable block (ram,0x03231738) */
/* WARNING: Removing unreachable block (ram,0x0323174c) */
/* WARNING: Removing unreachable block (ram,0x03231758) */
/* WARNING: Removing unreachable block (ram,0x032317bc) */
/* WARNING: Removing unreachable block (ram,0x032317dc) */
/* WARNING: Removing unreachable block (ram,0x032317f0) */
/* WARNING: Removing unreachable block (ram,0x0323181c) */
/* WARNING: Removing unreachable block (ram,0x0323183c) */
/* WARNING: Removing unreachable block (ram,0x03231850) */
/* WARNING: Removing unreachable block (ram,0x0323187c) */
/* WARNING: Removing unreachable block (ram,0x0323189c) */
/* WARNING: Removing unreachable block (ram,0x032318bc) */
/* WARNING: Removing unreachable block (ram,0x032318c4) */
/* WARNING: Removing unreachable block (ram,0x032318cc) */
/* WARNING: Removing unreachable block (ram,0x032318e4) */
/* WARNING: Removing unreachable block (ram,0x03231920) */
/* WARNING: Removing unreachable block (ram,0x03231954) */
/* WARNING: Removing unreachable block (ram,0x03231974) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x03231900) */
/* WARNING: Removing unreachable block (ram,0x03231910) */
/* WARNING: Removing unreachable block (ram,0x03231858) */
/* WARNING: Removing unreachable block (ram,0x032317f8) */
/* WARNING: Removing unreachable block (ram,0x032315c0) */

long Atlas_UI_PaginationDotController__GetLeftPadding(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 uVar12;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar13 [12];
  code *pcStack_38;
  
  puVar10 = &stack0xfffffffffffffff0;
  uVar9 = 0x3d23990;
  if ((bRam0000000003eb4abd & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4abd = 1;
  }
  uVar7 = *(ulong *)(param_1 + 0x60);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
  if ((int)lVar6 != 0) {
    if ((*(long *)(param_1 + 0x60) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 0x18), lVar6 == 0)) {
      auVar13 = func_0x00f78af4(0);
      lVar6 = auVar13._0_8_;
      pcStack_38 = (code *)&Atlas_UI_PaginationDotController__MoveScrollerExternal;
      uVar12 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((float)auVar13._8_4_ / (float)(*(int *)(lVar6 + 0x20) + -1),0);
      *(undefined4 *)(lVar6 + 0x7c) = uVar12;
      puVar3 = &stack0xffffffffffffffd0;
      do {
        *(ulong *)(puVar3 + -0x20) = uVar7;
        *(long *)(puVar3 + -0x18) = param_1;
        *(undefined1 **)(puVar3 + -0x10) = puVar10;
        *(code **)(puVar3 + -8) = pcStack_38;
        if (*(long *)(lVar6 + 0x18) != 0) {
          lVar5 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(lVar6 + 0x18),0);
          *(float *)(lVar6 + 0x80) = extraout_s0_00;
          if (*(char *)(lVar6 + 0x38) != '\0') {
            *(float *)(lVar6 + 0x9c) =
                 *(float *)(lVar6 + 0xa0) *
                 ((1.0 - ABS(extraout_s0_00 - *(float *)(lVar6 + 0x7c))) + 1.0) * 0.5;
          }
          *(undefined1 *)(lVar6 + 0x78) = 1;
          *(undefined4 *)(lVar6 + 0x84) = 0;
          if (*(long *)(lVar6 + 0x18) != 0) {
            *(undefined1 *)(*(long *)(lVar6 + 0x18) + 0x20) = 0;
            return lVar5;
          }
        }
        lVar5 = func_0x00f78af4();
        *(undefined8 *)(puVar3 + -0x50) = unaff_d9;
        *(undefined8 *)(puVar3 + -0x48) = unaff_d8;
        *(ulong *)(puVar3 + -0x40) = uVar7;
        *(long *)(puVar3 + -0x38) = lVar6;
        *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
        *(code **)(puVar3 + -0x28) = Atlas_UI_PaginationDotController__SnapToTarget;
        if (*(long *)(lVar5 + 0x18) != 0) {
          lVar6 = /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(*(long *)(lVar5 + 0x18),0);
          *(undefined4 *)(lVar5 + 0x7c) = extraout_s0_01;
          return lVar6;
        }
        lVar6 = func_0x00f78af4();
        if (*(char *)(lVar6 + 0x24) != '\0') {
          return lVar6;
        }
        puVar2 = puVar3 + -0xa0;
        *(undefined8 *)(puVar3 + -0xa0) = unaff_x26;
        *(undefined8 *)(puVar3 + -0x98) = unaff_x25;
        *(undefined8 *)(puVar3 + -0x90) = unaff_x24;
        *(undefined8 *)(puVar3 + -0x88) = unaff_x23;
        *(undefined8 *)(puVar3 + -0x80) = unaff_x22;
        *(undefined8 *)(puVar3 + -0x78) = uVar9;
        *(ulong *)(puVar3 + -0x70) = uVar7;
        *(long *)(puVar3 + -0x68) = lVar5;
        *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x30;
        *(code **)(puVar3 + -0x58) = Atlas_UI_PaginationDotController__Start;
        puVar10 = puVar3 + -0x60;
        lVar5 = lVar6;
        if ((bRam0000000003eb4abb & 1) == 0) {
          func_0x00f78a20(0x3d2a350);
          func_0x00f78a20(0x3d1b5b0);
          func_0x00f78a20(0x3d57948);
          func_0x00f78a20(0x3d5b0d0);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d5b3a8);
          func_0x00f78a20(0x3d5b398);
          func_0x00f78a20(0x3d5b3a0);
          lVar5 = func_0x00f78a20(0x3d25740);
          bRam0000000003eb4abb = 1;
        }
        if (*(char *)(lVar6 + 0x88) != '\0') {
          return lVar5;
        }
        *(undefined4 *)(lVar6 + 0xa0) = *(undefined4 *)(lVar6 + 0x9c);
        if (0 < *(int *)(lVar6 + 0x20)) {
          uVar7 = 0;
          unaff_x23 = 0x3d57948;
          unaff_x24 = 0x3d23990;
          unaff_x25 = 0x3d5b0d0;
          do {
            if ((int)uVar7 == 0) {
              lVar5 = *(long *)(lVar6 + 0x28);
            }
            else {
              uVar9 = *(undefined8 *)(lVar6 + 0x30);
              unaff_x22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar5 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(uVar9,unaff_x22,uRam0000000003d5b0d0);
            }
            if (lVar5 == 0) goto code_r0x014b5fbc;
            uVar4 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar5,uRam0000000003d57948);
            Atlas_UI_PaginationDotController__InitDot(lVar6,uVar4,uVar7);
            uVar1 = (int)uVar7 + 1;
            uVar7 = (ulong)uVar1;
          } while ((int)uVar1 < *(int *)(lVar6 + 0x20));
        }
        lVar5 = Atlas_UI_PaginationDotController__SetDotHighlightStates(lVar6);
        *(undefined1 *)(lVar6 + 0x24) = 0;
        *(undefined1 *)(lVar6 + 0x88) = 1;
        if (*(char *)(lVar6 + 0xa4) == '\0') {
code_r0x014b5f10:
          if (*(long *)(lVar6 + 0x50) == 0) {
            if (*(long *)(lVar6 + 0x58) == 0) {
              return lVar5;
            }
            lVar5 = *(long *)(*(long *)(lVar6 + 0x58) + 0xf8);
            uVar9 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
            /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(uVar9,lVar6,uRam0000000003d5b3a0,0);
            uVar7 = 0;
            if (lVar5 != 0) {
              puVar10 = *(undefined1 **)(puVar3 + -0x60);
              puVar11 = *(undefined **)(puVar3 + -0x58);
              lVar8 = *(long *)(puVar3 + -0x70);
              lVar6 = *(long *)(puVar3 + -0x68);
              unaff_x22 = *(undefined8 *)(puVar3 + -0x80);
              uVar4 = *(undefined8 *)(puVar3 + -0x78);
              puVar2 = puVar3 + -0x50;
              goto code_r0x03277f74;
            }
          }
          else {
            lVar5 = *(long *)(*(long *)(lVar6 + 0x50) + 0xf8);
            uVar9 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
            /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(uVar9,lVar6,uRam0000000003d5b398,0);
            uVar7 = 0;
            if (lVar5 != 0) {
              puVar11 = &UNK_014b5f5c;
              lVar8 = lVar5;
              uVar4 = uVar9;
code_r0x03277f74:
              *(long *)(puVar2 + -0x20) = lVar8;
              *(long *)(puVar2 + -0x18) = lVar6;
              *(undefined1 **)(puVar2 + -0x10) = puVar10;
              *(undefined **)(puVar2 + -8) = puVar11;
              *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
              *(undefined8 *)(puVar2 + -0x48) = uVar4;
              *(long *)(puVar2 + -0x40) = lVar8;
              *(long *)(puVar2 + -0x38) = lVar5;
              *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
              *(undefined **)(puVar2 + -0x28) = &UNK_03277f8c;
              if ((bRam0000000003ec1a32 & 1) == 0) {
                func_0x00f78a20(0x3d22a90,uVar9,0);
                bRam0000000003ec1a32 = 1;
              }
              lVar6 = func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
              /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x032313fc(lVar6,uVar9,0);
              return lVar6;
            }
          }
        }
        else {
          uVar9 = *(undefined8 *)(lVar6 + 0xa8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar9,0);
          if ((int)lVar5 == 0) goto code_r0x014b5f10;
          lVar5 = *(long *)(lVar6 + 0xa8);
          uVar9 = func_0x00f78aec(/*System.Action<UIAtlasButton>_TypeInfo*/ uRam0000000003d1b5b0);
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar9,lVar6,uRam0000000003d5b3a8,uRam0000000003d2a350);
          uVar7 = 0;
          if (lVar5 != 0) {
            lVar5 = /*Atlas.UI.UIAtlasButtonGroup$$add_OnButtonSelectedEvent*/ func_0x01515dfc(lVar5,uVar9,0);
            goto code_r0x014b5f10;
          }
        }
code_r0x014b5fbc:
        param_1 = func_0x00f78af4();
        *(ulong *)(puVar3 + -0xc0) = uVar7;
        *(long *)(puVar3 + -0xb8) = lVar6;
        *(undefined1 **)(puVar3 + -0xb0) = puVar10;
        *(code **)(puVar3 + -0xa8) = Atlas_UI_PaginationDotController__DisablePagination;
        puVar10 = puVar3 + -0xb0;
        if (*(long *)(param_1 + 0x18) != 0) {
          /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_1 + 0x18),0,0);
          lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
          if (lVar6 != 0) {
            *(undefined8 *)(puVar3 + -0xd0) = unaff_x22;
            *(undefined8 *)(puVar3 + -200) = uVar9;
            *(undefined8 *)(puVar3 + -0xc0) = *(undefined8 *)(puVar3 + -0xc0);
            *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0xb8);
            *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xb0);
            *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xa8);
            if (pcRam0000000003ebf4c0 == (code *)0x0) {
              pcRam0000000003ebf4c0 =
                   (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
            }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar6 = (*pcRam0000000003ebf4c0)(lVar6,0);
            return lVar6;
          }
        }
        pcStack_38 = Atlas_UI_PaginationDotController__ScrollToTarget;
        lVar6 = func_0x00f78af4();
        *(undefined4 *)(lVar6 + 0x7c) = extraout_s0;
        puVar3 = puVar3 + -0xc0;
      } while( true );
    }
    lVar6 = /*UnityEngine.RectOffset$$get_left*/ func_0x032545e4(lVar6,0);
  }
  return lVar6;
}



// ============================================================
// RVA: 0x14b6504 | Atlas.UI.PaginationDotController.MoveScrollerExternal
// ============================================================

/* WARNING: Possible PIC construction at 0x014b5f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f8c) */
/* WARNING: Removing unreachable block (ram,0x03277fa8) */
/* WARNING: Removing unreachable block (ram,0x03277f98) */
/* WARNING: Removing unreachable block (ram,0x03231580) */
/* WARNING: Removing unreachable block (ram,0x032315a4) */
/* WARNING: Removing unreachable block (ram,0x032315b8) */
/* WARNING: Removing unreachable block (ram,0x032315ec) */
/* WARNING: Removing unreachable block (ram,0x03231634) */
/* WARNING: Removing unreachable block (ram,0x0323169c) */
/* WARNING: Removing unreachable block (ram,0x032316b8) */
/* WARNING: Removing unreachable block (ram,0x032316d4) */
/* WARNING: Removing unreachable block (ram,0x0323175c) */
/* WARNING: Removing unreachable block (ram,0x03231768) */
/* WARNING: Removing unreachable block (ram,0x032316e4) */
/* WARNING: Removing unreachable block (ram,0x032316ec) */
/* WARNING: Removing unreachable block (ram,0x032316f4) */
/* WARNING: Removing unreachable block (ram,0x03231700) */
/* WARNING: Removing unreachable block (ram,0x03231718) */
/* WARNING: Removing unreachable block (ram,0x03231720) */
/* WARNING: Removing unreachable block (ram,0x0323172c) */
/* WARNING: Removing unreachable block (ram,0x03231734) */
/* WARNING: Removing unreachable block (ram,0x03231738) */
/* WARNING: Removing unreachable block (ram,0x0323174c) */
/* WARNING: Removing unreachable block (ram,0x03231758) */
/* WARNING: Removing unreachable block (ram,0x032317bc) */
/* WARNING: Removing unreachable block (ram,0x032317dc) */
/* WARNING: Removing unreachable block (ram,0x032317f0) */
/* WARNING: Removing unreachable block (ram,0x0323181c) */
/* WARNING: Removing unreachable block (ram,0x0323183c) */
/* WARNING: Removing unreachable block (ram,0x03231850) */
/* WARNING: Removing unreachable block (ram,0x0323187c) */
/* WARNING: Removing unreachable block (ram,0x0323189c) */
/* WARNING: Removing unreachable block (ram,0x032318bc) */
/* WARNING: Removing unreachable block (ram,0x032318c4) */
/* WARNING: Removing unreachable block (ram,0x032318cc) */
/* WARNING: Removing unreachable block (ram,0x032318e4) */
/* WARNING: Removing unreachable block (ram,0x03231920) */
/* WARNING: Removing unreachable block (ram,0x03231954) */
/* WARNING: Removing unreachable block (ram,0x03231974) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x03231900) */
/* WARNING: Removing unreachable block (ram,0x03231910) */
/* WARNING: Removing unreachable block (ram,0x03231858) */
/* WARNING: Removing unreachable block (ram,0x032317f8) */
/* WARNING: Removing unreachable block (ram,0x032315c0) */

long Atlas_UI_PaginationDotController__MoveScrollerExternal(long param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  ulong unaff_x20;
  long lVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar8;
  undefined *puVar9;
  code *unaff_x30;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 uVar10;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  uVar10 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((float)param_2 / (float)(*(int *)(param_1 + 0x20) + -1),0);
  *(undefined4 *)(param_1 + 0x7c) = uVar10;
  puVar3 = (undefined1 *)register0x00000008;
  do {
    *(ulong *)(puVar3 + -0x20) = unaff_x20;
    *(long *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(code **)(puVar3 + -8) = unaff_x30;
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar5 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(param_1 + 0x18),0);
      *(float *)(param_1 + 0x80) = extraout_s0_00;
      if (*(char *)(param_1 + 0x38) != '\0') {
        *(float *)(param_1 + 0x9c) =
             *(float *)(param_1 + 0xa0) *
             ((1.0 - ABS(extraout_s0_00 - *(float *)(param_1 + 0x7c))) + 1.0) * 0.5;
      }
      *(undefined1 *)(param_1 + 0x78) = 1;
      *(undefined4 *)(param_1 + 0x84) = 0;
      if (*(long *)(param_1 + 0x18) != 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x20) = 0;
        return lVar5;
      }
    }
    lVar5 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x50) = unaff_d9;
    *(undefined8 *)(puVar3 + -0x48) = unaff_d8;
    *(ulong *)(puVar3 + -0x40) = unaff_x20;
    *(long *)(puVar3 + -0x38) = param_1;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(code **)(puVar3 + -0x28) = Atlas_UI_PaginationDotController__SnapToTarget;
    if (*(long *)(lVar5 + 0x18) != 0) {
      lVar6 = /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(*(long *)(lVar5 + 0x18),0);
      *(undefined4 *)(lVar5 + 0x7c) = extraout_s0_01;
      return lVar6;
    }
    lVar6 = func_0x00f78af4();
    if (*(char *)(lVar6 + 0x24) != '\0') {
      return lVar6;
    }
    puVar2 = puVar3 + -0xa0;
    *(undefined8 *)(puVar3 + -0xa0) = unaff_x26;
    *(undefined8 *)(puVar3 + -0x98) = unaff_x25;
    *(undefined8 *)(puVar3 + -0x90) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x88) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x80) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x78) = unaff_x21;
    *(ulong *)(puVar3 + -0x70) = unaff_x20;
    *(long *)(puVar3 + -0x68) = lVar5;
    *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x30;
    *(code **)(puVar3 + -0x58) = Atlas_UI_PaginationDotController__Start;
    puVar8 = puVar3 + -0x60;
    lVar5 = lVar6;
    if ((bRam0000000003eb4abb & 1) == 0) {
      func_0x00f78a20(0x3d2a350);
      func_0x00f78a20(0x3d1b5b0);
      func_0x00f78a20(0x3d57948);
      func_0x00f78a20(0x3d5b0d0);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d5b3a8);
      func_0x00f78a20(0x3d5b398);
      func_0x00f78a20(0x3d5b3a0);
      lVar5 = func_0x00f78a20(0x3d25740);
      bRam0000000003eb4abb = 1;
    }
    if (*(char *)(lVar6 + 0x88) != '\0') {
      return lVar5;
    }
    *(undefined4 *)(lVar6 + 0xa0) = *(undefined4 *)(lVar6 + 0x9c);
    if (0 < *(int *)(lVar6 + 0x20)) {
      unaff_x20 = 0;
      unaff_x23 = 0x3d57948;
      unaff_x24 = 0x3d23990;
      unaff_x25 = 0x3d5b0d0;
      do {
        if ((int)unaff_x20 == 0) {
          lVar5 = *(long *)(lVar6 + 0x28);
        }
        else {
          unaff_x21 = *(undefined8 *)(lVar6 + 0x30);
          unaff_x22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar5 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(unaff_x21,unaff_x22,uRam0000000003d5b0d0);
        }
        if (lVar5 == 0) goto code_r0x014b5fbc;
        uVar4 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar5,uRam0000000003d57948);
        Atlas_UI_PaginationDotController__InitDot(lVar6,uVar4,unaff_x20);
        uVar1 = (int)unaff_x20 + 1;
        unaff_x20 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(lVar6 + 0x20));
    }
    lVar5 = Atlas_UI_PaginationDotController__SetDotHighlightStates(lVar6);
    *(undefined1 *)(lVar6 + 0x24) = 0;
    *(undefined1 *)(lVar6 + 0x88) = 1;
    if (*(char *)(lVar6 + 0xa4) == '\0') {
code_r0x014b5f10:
      if (*(long *)(lVar6 + 0x50) == 0) {
        if (*(long *)(lVar6 + 0x58) == 0) {
          return lVar5;
        }
        lVar5 = *(long *)(*(long *)(lVar6 + 0x58) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,lVar6,uRam0000000003d5b3a0,0);
        unaff_x20 = 0;
        if (lVar5 != 0) {
          puVar8 = *(undefined1 **)(puVar3 + -0x60);
          puVar9 = *(undefined **)(puVar3 + -0x58);
          lVar7 = *(long *)(puVar3 + -0x70);
          lVar6 = *(long *)(puVar3 + -0x68);
          unaff_x22 = *(undefined8 *)(puVar3 + -0x80);
          uVar4 = *(undefined8 *)(puVar3 + -0x78);
          puVar2 = puVar3 + -0x50;
          goto code_r0x03277f74;
        }
      }
      else {
        lVar5 = *(long *)(*(long *)(lVar6 + 0x50) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,lVar6,uRam0000000003d5b398,0);
        unaff_x20 = 0;
        if (lVar5 != 0) {
          puVar9 = &UNK_014b5f5c;
          lVar7 = lVar5;
          uVar4 = unaff_x21;
code_r0x03277f74:
          *(long *)(puVar2 + -0x20) = lVar7;
          *(long *)(puVar2 + -0x18) = lVar6;
          *(undefined1 **)(puVar2 + -0x10) = puVar8;
          *(undefined **)(puVar2 + -8) = puVar9;
          *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
          *(undefined8 *)(puVar2 + -0x48) = uVar4;
          *(long *)(puVar2 + -0x40) = lVar7;
          *(long *)(puVar2 + -0x38) = lVar5;
          *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x28) = &UNK_03277f8c;
          if ((bRam0000000003ec1a32 & 1) == 0) {
            func_0x00f78a20(0x3d22a90,unaff_x21,0);
            bRam0000000003ec1a32 = 1;
          }
          lVar5 = func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
          /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x032313fc(lVar5,unaff_x21,0);
          return lVar5;
        }
      }
    }
    else {
      uVar4 = *(undefined8 *)(lVar6 + 0xa8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
      if ((int)lVar5 == 0) goto code_r0x014b5f10;
      lVar5 = *(long *)(lVar6 + 0xa8);
      unaff_x21 = func_0x00f78aec(/*System.Action<UIAtlasButton>_TypeInfo*/ uRam0000000003d1b5b0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,lVar6,uRam0000000003d5b3a8,uRam0000000003d2a350);
      unaff_x20 = 0;
      if (lVar5 != 0) {
        lVar5 = /*Atlas.UI.UIAtlasButtonGroup$$add_OnButtonSelectedEvent*/ func_0x01515dfc(lVar5,unaff_x21,0);
        goto code_r0x014b5f10;
      }
    }
code_r0x014b5fbc:
    unaff_x19 = func_0x00f78af4();
    *(ulong *)(puVar3 + -0xc0) = unaff_x20;
    *(long *)(puVar3 + -0xb8) = lVar6;
    *(undefined1 **)(puVar3 + -0xb0) = puVar8;
    *(code **)(puVar3 + -0xa8) = Atlas_UI_PaginationDotController__DisablePagination;
    unaff_x29 = puVar3 + -0xb0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(unaff_x19 + 0x18),0,0);
      lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0);
      if (lVar5 != 0) {
        *(undefined8 *)(puVar3 + -0xd0) = unaff_x22;
        *(undefined8 *)(puVar3 + -200) = unaff_x21;
        *(undefined8 *)(puVar3 + -0xc0) = *(undefined8 *)(puVar3 + -0xc0);
        *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0xb8);
        *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xb0);
        *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xa8);
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar5 = (*pcRam0000000003ebf4c0)(lVar5,0);
        return lVar5;
      }
    }
    unaff_x30 = Atlas_UI_PaginationDotController__ScrollToTarget;
    param_1 = func_0x00f78af4();
    *(undefined4 *)(param_1 + 0x7c) = extraout_s0;
    puVar3 = puVar3 + -0xc0;
  } while( true );
}



// ============================================================
// RVA: 0x14b6544 | Atlas.UI.PaginationDotController.Update
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Atlas_UI_PaginationDotController__Update(undefined1 param_1 [16],long param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 extraout_s0;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_var;
  undefined4 extraout_var_02;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined1 auVar9 [16];
  undefined8 extraout_var_06;
  float fVar11;
  undefined1 auVar10 [16];
  
  uVar5 = param_1._8_8_;
  uVar8 = param_1._4_4_;
  uVar7 = param_1._0_4_;
  if ((bRam0000000003eb4abe & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4abe = 1;
    uVar7 = extraout_s0;
    uVar8 = extraout_var;
    uVar5 = extraout_var_03;
  }
  if (*(char *)(param_2 + 0x24) == '\0') {
    if (*(char *)(param_2 + 0x78) != '\0') {
      fVar11 = *(float *)(param_2 + 0x84);
      fVar6 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
      *(float *)(param_2 + 0x84) = fVar11 + fVar6;
      if (*(long *)(param_2 + 0x18) == 0) goto LAB_014b670c;
      uVar7 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(param_2 + 0x18),0);
      lVar4 = *(long *)(param_2 + 0x18);
      /*UnityEngine.Mathf$$SmoothStep*/ func_0x0323d408(*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x7c),
                      *(float *)(param_2 + 0x84) * *(float *)(param_2 + 0x9c),0);
      if (lVar4 == 0) goto LAB_014b670c;
      /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(lVar4,0);
      if (*(long *)(param_2 + 0x18) == 0) goto LAB_014b670c;
      uVar8 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(param_2 + 0x18),0);
      bVar2 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(uVar8,uVar7,0);
      *(byte *)(param_2 + 0x78) = bVar2 ^ 1;
      if (((bVar2 ^ 1) & 1) == 0) {
        if (*(long *)(param_2 + 0x18) == 0) goto LAB_014b670c;
        *(undefined1 *)(*(long *)(param_2 + 0x18) + 0x20) = 1;
      }
    }
    if (*(long *)(param_2 + 0x18) == 0) {
LAB_014b670c:
      lVar4 = func_0x00f78af4();
      return ZEXT416((uint)(*(float *)(lVar4 + 0xa0) *
                           ((1.0 - ABS(*(float *)(lVar4 + 0x80) - *(float *)(lVar4 + 0x7c))) + 1.0)
                           * 0.5));
    }
    fVar6 = (float)/*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(param_2 + 0x18),0);
    if (fVar6 != *(float *)(param_2 + 0x70)) {
      Atlas_UI_PaginationDotController__SetDotHighlightStates(param_2);
    }
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
    uVar7 = extraout_s0_00;
    uVar8 = extraout_var_00;
    uVar5 = extraout_var_04;
    if (iVar3 != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
      uVar7 = extraout_s0_01;
      uVar8 = extraout_var_01;
      uVar5 = extraout_var_05;
      if (iVar3 != 0) {
        if (*(long *)(param_2 + 0x40) != 0) {
          lVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_2 + 0x40),0);
          if ((*(long *)(param_2 + 0x18) != 0) &&
             (fVar6 = (float)/*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(param_2 + 0x18),0), lVar4 != 0)) {
            bVar1 = _UNK_033f84b0 <= fVar6;
            if (pcRam0000000003ebf4c0 == (code *)0x0) {
              pcRam0000000003ebf4c0 =
                   (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
            }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003ebf4c0)(lVar4,bVar1);
            auVar10._4_4_ = extraout_var_02;
            auVar10._0_4_ = extraout_s0_02;
            auVar10._8_8_ = extraout_var_06;
            return auVar10;
          }
        }
        goto LAB_014b670c;
      }
    }
  }
  auVar9._4_4_ = uVar8;
  auVar9._0_4_ = uVar7;
  auVar9._8_8_ = uVar5;
  return auVar9;
}



// ============================================================
// RVA: 0x14b6710 | Atlas.UI.PaginationDotController.SetDynamicSpeed
// ============================================================

float Atlas_UI_PaginationDotController__SetDynamicSpeed(long param_1)

{
  return *(float *)(param_1 + 0xa0) *
         ((1.0 - ABS(*(float *)(param_1 + 0x80) - *(float *)(param_1 + 0x7c))) + 1.0) * 0.5;
}



// ============================================================
// RVA: 0x14b6738 | Atlas.UI.PaginationDotController.OnButtonSelected
// ============================================================

/* WARNING: Possible PIC construction at 0x014b5f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f8c) */
/* WARNING: Removing unreachable block (ram,0x03277fa8) */
/* WARNING: Removing unreachable block (ram,0x03277f98) */
/* WARNING: Removing unreachable block (ram,0x03231580) */
/* WARNING: Removing unreachable block (ram,0x032315a4) */
/* WARNING: Removing unreachable block (ram,0x032315b8) */
/* WARNING: Removing unreachable block (ram,0x032315ec) */
/* WARNING: Removing unreachable block (ram,0x03231634) */
/* WARNING: Removing unreachable block (ram,0x0323169c) */
/* WARNING: Removing unreachable block (ram,0x032316b8) */
/* WARNING: Removing unreachable block (ram,0x032316d4) */
/* WARNING: Removing unreachable block (ram,0x0323175c) */
/* WARNING: Removing unreachable block (ram,0x03231768) */
/* WARNING: Removing unreachable block (ram,0x032316e4) */
/* WARNING: Removing unreachable block (ram,0x032316ec) */
/* WARNING: Removing unreachable block (ram,0x032316f4) */
/* WARNING: Removing unreachable block (ram,0x03231700) */
/* WARNING: Removing unreachable block (ram,0x03231718) */
/* WARNING: Removing unreachable block (ram,0x03231720) */
/* WARNING: Removing unreachable block (ram,0x0323172c) */
/* WARNING: Removing unreachable block (ram,0x03231734) */
/* WARNING: Removing unreachable block (ram,0x03231738) */
/* WARNING: Removing unreachable block (ram,0x0323174c) */
/* WARNING: Removing unreachable block (ram,0x03231758) */
/* WARNING: Removing unreachable block (ram,0x032317bc) */
/* WARNING: Removing unreachable block (ram,0x032317dc) */
/* WARNING: Removing unreachable block (ram,0x032317f0) */
/* WARNING: Removing unreachable block (ram,0x0323181c) */
/* WARNING: Removing unreachable block (ram,0x0323183c) */
/* WARNING: Removing unreachable block (ram,0x03231850) */
/* WARNING: Removing unreachable block (ram,0x0323187c) */
/* WARNING: Removing unreachable block (ram,0x0323189c) */
/* WARNING: Removing unreachable block (ram,0x032318bc) */
/* WARNING: Removing unreachable block (ram,0x032318c4) */
/* WARNING: Removing unreachable block (ram,0x032318cc) */
/* WARNING: Removing unreachable block (ram,0x032318e4) */
/* WARNING: Removing unreachable block (ram,0x03231920) */
/* WARNING: Removing unreachable block (ram,0x03231954) */
/* WARNING: Removing unreachable block (ram,0x03231974) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x03231900) */
/* WARNING: Removing unreachable block (ram,0x03231910) */
/* WARNING: Removing unreachable block (ram,0x03231858) */
/* WARNING: Removing unreachable block (ram,0x032317f8) */
/* WARNING: Removing unreachable block (ram,0x032315c0) */

long Atlas_UI_PaginationDotController__OnButtonSelected(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar11;
  long lVar12;
  long unaff_x21;
  long lVar13;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar14;
  undefined *puVar15;
  code *unaff_x30;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 uVar16;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar17 [12];
  
  puVar14 = &stack0xfffffffffffffff0;
  lVar8 = param_1;
  if ((bRam0000000003eb4ac1 & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    lVar8 = func_0x00f78a20(0x3d25608);
    bRam0000000003eb4ac1 = 1;
  }
  if (*(char *)(param_1 + 0xa4) == '\0') {
    return lVar8;
  }
  uVar11 = 0x3eb4000;
  if (param_2 != 0) {
    uVar11 = *(ulong *)(param_1 + 0x18);
    lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0);
    if (lVar8 != 0) {
      plVar9 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar8,0);
      if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) == 0) ||
         (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) != 0)) {
        if (plVar9 == (long *)0x0) goto LAB_014b67fc;
code_r0x014b67c8:
        if (*plVar9 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
          plVar9 = (long *)0x0;
        }
      }
      else {
        func_0x00f78ad0();
        if (plVar9 != (long *)0x0) goto code_r0x014b67c8;
LAB_014b67fc:
        plVar9 = (long *)0x0;
      }
      uVar16 = /*Core.UI2.UIUtils$$ScrollTargetNormalizedPosition*/ func_0x02f91280(uVar11,plVar9,0,0);
      *(undefined4 *)(param_1 + 0x7c) = uVar16;
      puVar5 = (undefined1 *)register0x00000008;
      lVar8 = param_1;
      param_1 = unaff_x19;
      param_2 = unaff_x21;
      puVar14 = unaff_x29;
      goto Atlas_UI_PaginationDotController__StartAutoScroll;
    }
  }
  unaff_x20 = uVar11;
  auVar17 = func_0x00f78af4();
  lVar8 = auVar17._0_8_;
  iVar2 = *(int *)(lVar8 + 0x74);
  if (auVar17._8_4_ == 0) {
    iVar3 = *(int *)(lVar8 + 0x20) + -1;
    if (iVar3 <= iVar2) {
      return lVar8;
    }
    iVar10 = iVar2 + 1;
  }
  else {
    iVar10 = iVar2 + -1;
    if (iVar2 < 1) {
      return lVar8;
    }
    iVar3 = *(int *)(lVar8 + 0x20) + -1;
  }
  uVar16 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((float)iVar10 / (float)iVar3,0);
  *(undefined4 *)(lVar8 + 0x7c) = uVar16;
  unaff_x30 = (code *)&Atlas_UI_PaginationDotController__OnTabButtonPressed;
  puVar5 = &stack0xffffffffffffffd0;
Atlas_UI_PaginationDotController__StartAutoScroll:
  do {
    *(ulong *)(puVar5 + -0x20) = unaff_x20;
    *(long *)(puVar5 + -0x18) = param_1;
    *(undefined1 **)(puVar5 + -0x10) = puVar14;
    *(code **)(puVar5 + -8) = unaff_x30;
    if (*(long *)(lVar8 + 0x18) != 0) {
      lVar7 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(lVar8 + 0x18),0);
      *(float *)(lVar8 + 0x80) = extraout_s0_00;
      if (*(char *)(lVar8 + 0x38) != '\0') {
        *(float *)(lVar8 + 0x9c) =
             *(float *)(lVar8 + 0xa0) *
             ((1.0 - ABS(extraout_s0_00 - *(float *)(lVar8 + 0x7c))) + 1.0) * 0.5;
      }
      *(undefined1 *)(lVar8 + 0x78) = 1;
      *(undefined4 *)(lVar8 + 0x84) = 0;
      if (*(long *)(lVar8 + 0x18) != 0) {
        *(undefined1 *)(*(long *)(lVar8 + 0x18) + 0x20) = 0;
        return lVar7;
      }
    }
    lVar7 = func_0x00f78af4();
    *(undefined8 *)(puVar5 + -0x50) = unaff_d9;
    *(undefined8 *)(puVar5 + -0x48) = unaff_d8;
    *(ulong *)(puVar5 + -0x40) = unaff_x20;
    *(long *)(puVar5 + -0x38) = lVar8;
    *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
    *(code **)(puVar5 + -0x28) = Atlas_UI_PaginationDotController__SnapToTarget;
    if (*(long *)(lVar7 + 0x18) != 0) {
      lVar8 = /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(*(long *)(lVar7 + 0x18),0);
      *(undefined4 *)(lVar7 + 0x7c) = extraout_s0_01;
      return lVar8;
    }
    lVar8 = func_0x00f78af4();
    if (*(char *)(lVar8 + 0x24) != '\0') {
      return lVar8;
    }
    puVar4 = puVar5 + -0xa0;
    *(undefined8 *)(puVar5 + -0xa0) = unaff_x26;
    *(undefined8 *)(puVar5 + -0x98) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x90) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x88) = unaff_x23;
    *(undefined8 *)(puVar5 + -0x80) = unaff_x22;
    *(long *)(puVar5 + -0x78) = param_2;
    *(ulong *)(puVar5 + -0x70) = unaff_x20;
    *(long *)(puVar5 + -0x68) = lVar7;
    *(undefined1 **)(puVar5 + -0x60) = puVar5 + -0x30;
    *(code **)(puVar5 + -0x58) = Atlas_UI_PaginationDotController__Start;
    puVar14 = puVar5 + -0x60;
    lVar7 = lVar8;
    if ((bRam0000000003eb4abb & 1) == 0) {
      func_0x00f78a20(0x3d2a350);
      func_0x00f78a20(0x3d1b5b0);
      func_0x00f78a20(0x3d57948);
      func_0x00f78a20(0x3d5b0d0);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d5b3a8);
      func_0x00f78a20(0x3d5b398);
      func_0x00f78a20(0x3d5b3a0);
      lVar7 = func_0x00f78a20(0x3d25740);
      bRam0000000003eb4abb = 1;
    }
    if (*(char *)(lVar8 + 0x88) != '\0') {
      return lVar7;
    }
    *(undefined4 *)(lVar8 + 0xa0) = *(undefined4 *)(lVar8 + 0x9c);
    if (0 < *(int *)(lVar8 + 0x20)) {
      unaff_x20 = 0;
      unaff_x23 = 0x3d57948;
      unaff_x24 = 0x3d23990;
      unaff_x25 = 0x3d5b0d0;
      do {
        if ((int)unaff_x20 == 0) {
          lVar7 = *(long *)(lVar8 + 0x28);
        }
        else {
          param_2 = *(long *)(lVar8 + 0x30);
          unaff_x22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar7 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(param_2,unaff_x22,uRam0000000003d5b0d0);
        }
        if (lVar7 == 0) goto code_r0x014b5fbc;
        uVar6 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar7,uRam0000000003d57948);
        Atlas_UI_PaginationDotController__InitDot(lVar8,uVar6,unaff_x20);
        uVar1 = (int)unaff_x20 + 1;
        unaff_x20 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(lVar8 + 0x20));
    }
    lVar7 = Atlas_UI_PaginationDotController__SetDotHighlightStates(lVar8);
    *(undefined1 *)(lVar8 + 0x24) = 0;
    *(undefined1 *)(lVar8 + 0x88) = 1;
    if (*(char *)(lVar8 + 0xa4) == '\0') {
code_r0x014b5f10:
      if (*(long *)(lVar8 + 0x50) == 0) {
        if (*(long *)(lVar8 + 0x58) == 0) {
          return lVar7;
        }
        lVar7 = *(long *)(*(long *)(lVar8 + 0x58) + 0xf8);
        param_2 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(param_2,lVar8,uRam0000000003d5b3a0,0);
        unaff_x20 = 0;
        if (lVar7 != 0) {
          puVar14 = *(undefined1 **)(puVar5 + -0x60);
          puVar15 = *(undefined **)(puVar5 + -0x58);
          lVar12 = *(long *)(puVar5 + -0x70);
          lVar8 = *(long *)(puVar5 + -0x68);
          unaff_x22 = *(undefined8 *)(puVar5 + -0x80);
          lVar13 = *(long *)(puVar5 + -0x78);
          puVar4 = puVar5 + -0x50;
          goto code_r0x03277f74;
        }
      }
      else {
        lVar7 = *(long *)(*(long *)(lVar8 + 0x50) + 0xf8);
        param_2 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(param_2,lVar8,uRam0000000003d5b398,0);
        unaff_x20 = 0;
        if (lVar7 != 0) {
          puVar15 = &UNK_014b5f5c;
          lVar12 = lVar7;
          lVar13 = param_2;
code_r0x03277f74:
          *(long *)(puVar4 + -0x20) = lVar12;
          *(long *)(puVar4 + -0x18) = lVar8;
          *(undefined1 **)(puVar4 + -0x10) = puVar14;
          *(undefined **)(puVar4 + -8) = puVar15;
          *(undefined8 *)(puVar4 + -0x50) = unaff_x22;
          *(long *)(puVar4 + -0x48) = lVar13;
          *(long *)(puVar4 + -0x40) = lVar12;
          *(long *)(puVar4 + -0x38) = lVar7;
          *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
          *(undefined **)(puVar4 + -0x28) = &UNK_03277f8c;
          if ((bRam0000000003ec1a32 & 1) == 0) {
            func_0x00f78a20(0x3d22a90,param_2,0);
            bRam0000000003ec1a32 = 1;
          }
          lVar8 = func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
          /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x032313fc(lVar8,param_2,0);
          return lVar8;
        }
      }
    }
    else {
      uVar6 = *(undefined8 *)(lVar8 + 0xa8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
      if ((int)lVar7 == 0) goto code_r0x014b5f10;
      lVar7 = *(long *)(lVar8 + 0xa8);
      param_2 = func_0x00f78aec(/*System.Action<UIAtlasButton>_TypeInfo*/ uRam0000000003d1b5b0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(param_2,lVar8,uRam0000000003d5b3a8,uRam0000000003d2a350);
      unaff_x20 = 0;
      if (lVar7 != 0) {
        lVar7 = /*Atlas.UI.UIAtlasButtonGroup$$add_OnButtonSelectedEvent*/ func_0x01515dfc(lVar7,param_2,0);
        goto code_r0x014b5f10;
      }
    }
code_r0x014b5fbc:
    param_1 = func_0x00f78af4();
    *(ulong *)(puVar5 + -0xc0) = unaff_x20;
    *(long *)(puVar5 + -0xb8) = lVar8;
    *(undefined1 **)(puVar5 + -0xb0) = puVar14;
    *(code **)(puVar5 + -0xa8) = Atlas_UI_PaginationDotController__DisablePagination;
    puVar14 = puVar5 + -0xb0;
    if (*(long *)(param_1 + 0x18) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_1 + 0x18),0,0);
      lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
      if (lVar8 != 0) {
        *(undefined8 *)(puVar5 + -0xd0) = unaff_x22;
        *(long *)(puVar5 + -200) = param_2;
        *(undefined8 *)(puVar5 + -0xc0) = *(undefined8 *)(puVar5 + -0xc0);
        *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0xb8);
        *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0xb0);
        *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(puVar5 + -0xa8);
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar8 = (*pcRam0000000003ebf4c0)(lVar8,0);
        return lVar8;
      }
    }
    unaff_x30 = Atlas_UI_PaginationDotController__ScrollToTarget;
    lVar8 = func_0x00f78af4();
    *(undefined4 *)(lVar8 + 0x7c) = extraout_s0;
    puVar5 = puVar5 + -0xc0;
  } while( true );
}



// ============================================================
// RVA: 0x14b682c | Atlas.UI.PaginationDotController.OnTabButtonPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x014b5f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f8c) */
/* WARNING: Removing unreachable block (ram,0x03277fa8) */
/* WARNING: Removing unreachable block (ram,0x03277f98) */
/* WARNING: Removing unreachable block (ram,0x03231580) */
/* WARNING: Removing unreachable block (ram,0x032315a4) */
/* WARNING: Removing unreachable block (ram,0x032315b8) */
/* WARNING: Removing unreachable block (ram,0x032315ec) */
/* WARNING: Removing unreachable block (ram,0x03231634) */
/* WARNING: Removing unreachable block (ram,0x0323169c) */
/* WARNING: Removing unreachable block (ram,0x032316b8) */
/* WARNING: Removing unreachable block (ram,0x032316d4) */
/* WARNING: Removing unreachable block (ram,0x0323175c) */
/* WARNING: Removing unreachable block (ram,0x03231768) */
/* WARNING: Removing unreachable block (ram,0x032316e4) */
/* WARNING: Removing unreachable block (ram,0x032316ec) */
/* WARNING: Removing unreachable block (ram,0x032316f4) */
/* WARNING: Removing unreachable block (ram,0x03231700) */
/* WARNING: Removing unreachable block (ram,0x03231718) */
/* WARNING: Removing unreachable block (ram,0x03231720) */
/* WARNING: Removing unreachable block (ram,0x0323172c) */
/* WARNING: Removing unreachable block (ram,0x03231734) */
/* WARNING: Removing unreachable block (ram,0x03231738) */
/* WARNING: Removing unreachable block (ram,0x0323174c) */
/* WARNING: Removing unreachable block (ram,0x03231758) */
/* WARNING: Removing unreachable block (ram,0x032317bc) */
/* WARNING: Removing unreachable block (ram,0x032317dc) */
/* WARNING: Removing unreachable block (ram,0x032317f0) */
/* WARNING: Removing unreachable block (ram,0x0323181c) */
/* WARNING: Removing unreachable block (ram,0x0323183c) */
/* WARNING: Removing unreachable block (ram,0x03231850) */
/* WARNING: Removing unreachable block (ram,0x0323187c) */
/* WARNING: Removing unreachable block (ram,0x0323189c) */
/* WARNING: Removing unreachable block (ram,0x032318bc) */
/* WARNING: Removing unreachable block (ram,0x032318c4) */
/* WARNING: Removing unreachable block (ram,0x032318cc) */
/* WARNING: Removing unreachable block (ram,0x032318e4) */
/* WARNING: Removing unreachable block (ram,0x03231920) */
/* WARNING: Removing unreachable block (ram,0x03231954) */
/* WARNING: Removing unreachable block (ram,0x03231974) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x03231900) */
/* WARNING: Removing unreachable block (ram,0x03231910) */
/* WARNING: Removing unreachable block (ram,0x03231858) */
/* WARNING: Removing unreachable block (ram,0x032317f8) */
/* WARNING: Removing unreachable block (ram,0x032315c0) */

long Atlas_UI_PaginationDotController__OnTabButtonPressed(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long unaff_x19;
  ulong unaff_x20;
  long lVar10;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar11;
  undefined *puVar12;
  code *unaff_x30;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 uVar13;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  iVar2 = *(int *)(param_1 + 0x74);
  if (param_2 == 0) {
    iVar3 = *(int *)(param_1 + 0x20) + -1;
    if (iVar3 <= iVar2) {
      return param_1;
    }
    iVar9 = iVar2 + 1;
  }
  else {
    iVar9 = iVar2 + -1;
    if (iVar2 < 1) {
      return param_1;
    }
    iVar3 = *(int *)(param_1 + 0x20) + -1;
  }
  uVar13 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((float)iVar9 / (float)iVar3,0);
  *(undefined4 *)(param_1 + 0x7c) = uVar13;
  puVar5 = (undefined1 *)register0x00000008;
  do {
    *(ulong *)(puVar5 + -0x20) = unaff_x20;
    *(long *)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
    *(code **)(puVar5 + -8) = unaff_x30;
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar7 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(param_1 + 0x18),0);
      *(float *)(param_1 + 0x80) = extraout_s0_00;
      if (*(char *)(param_1 + 0x38) != '\0') {
        *(float *)(param_1 + 0x9c) =
             *(float *)(param_1 + 0xa0) *
             ((1.0 - ABS(extraout_s0_00 - *(float *)(param_1 + 0x7c))) + 1.0) * 0.5;
      }
      *(undefined1 *)(param_1 + 0x78) = 1;
      *(undefined4 *)(param_1 + 0x84) = 0;
      if (*(long *)(param_1 + 0x18) != 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x20) = 0;
        return lVar7;
      }
    }
    lVar7 = func_0x00f78af4();
    *(undefined8 *)(puVar5 + -0x50) = unaff_d9;
    *(undefined8 *)(puVar5 + -0x48) = unaff_d8;
    *(ulong *)(puVar5 + -0x40) = unaff_x20;
    *(long *)(puVar5 + -0x38) = param_1;
    *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
    *(code **)(puVar5 + -0x28) = Atlas_UI_PaginationDotController__SnapToTarget;
    if (*(long *)(lVar7 + 0x18) != 0) {
      lVar8 = /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(*(long *)(lVar7 + 0x18),0);
      *(undefined4 *)(lVar7 + 0x7c) = extraout_s0_01;
      return lVar8;
    }
    lVar8 = func_0x00f78af4();
    if (*(char *)(lVar8 + 0x24) != '\0') {
      return lVar8;
    }
    puVar4 = puVar5 + -0xa0;
    *(undefined8 *)(puVar5 + -0xa0) = unaff_x26;
    *(undefined8 *)(puVar5 + -0x98) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x90) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x88) = unaff_x23;
    *(undefined8 *)(puVar5 + -0x80) = unaff_x22;
    *(undefined8 *)(puVar5 + -0x78) = unaff_x21;
    *(ulong *)(puVar5 + -0x70) = unaff_x20;
    *(long *)(puVar5 + -0x68) = lVar7;
    *(undefined1 **)(puVar5 + -0x60) = puVar5 + -0x30;
    *(code **)(puVar5 + -0x58) = Atlas_UI_PaginationDotController__Start;
    puVar11 = puVar5 + -0x60;
    lVar7 = lVar8;
    if ((bRam0000000003eb4abb & 1) == 0) {
      func_0x00f78a20(0x3d2a350);
      func_0x00f78a20(0x3d1b5b0);
      func_0x00f78a20(0x3d57948);
      func_0x00f78a20(0x3d5b0d0);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d5b3a8);
      func_0x00f78a20(0x3d5b398);
      func_0x00f78a20(0x3d5b3a0);
      lVar7 = func_0x00f78a20(0x3d25740);
      bRam0000000003eb4abb = 1;
    }
    if (*(char *)(lVar8 + 0x88) != '\0') {
      return lVar7;
    }
    *(undefined4 *)(lVar8 + 0xa0) = *(undefined4 *)(lVar8 + 0x9c);
    if (0 < *(int *)(lVar8 + 0x20)) {
      unaff_x20 = 0;
      unaff_x23 = 0x3d57948;
      unaff_x24 = 0x3d23990;
      unaff_x25 = 0x3d5b0d0;
      do {
        if ((int)unaff_x20 == 0) {
          lVar7 = *(long *)(lVar8 + 0x28);
        }
        else {
          unaff_x21 = *(undefined8 *)(lVar8 + 0x30);
          unaff_x22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar8,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar7 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(unaff_x21,unaff_x22,uRam0000000003d5b0d0);
        }
        if (lVar7 == 0) goto code_r0x014b5fbc;
        uVar6 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar7,uRam0000000003d57948);
        Atlas_UI_PaginationDotController__InitDot(lVar8,uVar6,unaff_x20);
        uVar1 = (int)unaff_x20 + 1;
        unaff_x20 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(lVar8 + 0x20));
    }
    lVar7 = Atlas_UI_PaginationDotController__SetDotHighlightStates(lVar8);
    *(undefined1 *)(lVar8 + 0x24) = 0;
    *(undefined1 *)(lVar8 + 0x88) = 1;
    if (*(char *)(lVar8 + 0xa4) == '\0') {
code_r0x014b5f10:
      if (*(long *)(lVar8 + 0x50) == 0) {
        if (*(long *)(lVar8 + 0x58) == 0) {
          return lVar7;
        }
        lVar7 = *(long *)(*(long *)(lVar8 + 0x58) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,lVar8,uRam0000000003d5b3a0,0);
        unaff_x20 = 0;
        if (lVar7 != 0) {
          puVar11 = *(undefined1 **)(puVar5 + -0x60);
          puVar12 = *(undefined **)(puVar5 + -0x58);
          lVar10 = *(long *)(puVar5 + -0x70);
          lVar8 = *(long *)(puVar5 + -0x68);
          unaff_x22 = *(undefined8 *)(puVar5 + -0x80);
          uVar6 = *(undefined8 *)(puVar5 + -0x78);
          puVar4 = puVar5 + -0x50;
          goto code_r0x03277f74;
        }
      }
      else {
        lVar7 = *(long *)(*(long *)(lVar8 + 0x50) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,lVar8,uRam0000000003d5b398,0);
        unaff_x20 = 0;
        if (lVar7 != 0) {
          puVar12 = &UNK_014b5f5c;
          lVar10 = lVar7;
          uVar6 = unaff_x21;
code_r0x03277f74:
          *(long *)(puVar4 + -0x20) = lVar10;
          *(long *)(puVar4 + -0x18) = lVar8;
          *(undefined1 **)(puVar4 + -0x10) = puVar11;
          *(undefined **)(puVar4 + -8) = puVar12;
          *(undefined8 *)(puVar4 + -0x50) = unaff_x22;
          *(undefined8 *)(puVar4 + -0x48) = uVar6;
          *(long *)(puVar4 + -0x40) = lVar10;
          *(long *)(puVar4 + -0x38) = lVar7;
          *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
          *(undefined **)(puVar4 + -0x28) = &UNK_03277f8c;
          if ((bRam0000000003ec1a32 & 1) == 0) {
            func_0x00f78a20(0x3d22a90,unaff_x21,0);
            bRam0000000003ec1a32 = 1;
          }
          lVar7 = func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
          /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x032313fc(lVar7,unaff_x21,0);
          return lVar7;
        }
      }
    }
    else {
      uVar6 = *(undefined8 *)(lVar8 + 0xa8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
      if ((int)lVar7 == 0) goto code_r0x014b5f10;
      lVar7 = *(long *)(lVar8 + 0xa8);
      unaff_x21 = func_0x00f78aec(/*System.Action<UIAtlasButton>_TypeInfo*/ uRam0000000003d1b5b0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,lVar8,uRam0000000003d5b3a8,uRam0000000003d2a350);
      unaff_x20 = 0;
      if (lVar7 != 0) {
        lVar7 = /*Atlas.UI.UIAtlasButtonGroup$$add_OnButtonSelectedEvent*/ func_0x01515dfc(lVar7,unaff_x21,0);
        goto code_r0x014b5f10;
      }
    }
code_r0x014b5fbc:
    unaff_x19 = func_0x00f78af4();
    *(ulong *)(puVar5 + -0xc0) = unaff_x20;
    *(long *)(puVar5 + -0xb8) = lVar8;
    *(undefined1 **)(puVar5 + -0xb0) = puVar11;
    *(code **)(puVar5 + -0xa8) = Atlas_UI_PaginationDotController__DisablePagination;
    unaff_x29 = puVar5 + -0xb0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(unaff_x19 + 0x18),0,0);
      lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0);
      if (lVar7 != 0) {
        *(undefined8 *)(puVar5 + -0xd0) = unaff_x22;
        *(undefined8 *)(puVar5 + -200) = unaff_x21;
        *(undefined8 *)(puVar5 + -0xc0) = *(undefined8 *)(puVar5 + -0xc0);
        *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0xb8);
        *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0xb0);
        *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(puVar5 + -0xa8);
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar7 = (*pcRam0000000003ebf4c0)(lVar7,0);
        return lVar7;
      }
    }
    unaff_x30 = Atlas_UI_PaginationDotController__ScrollToTarget;
    param_1 = func_0x00f78af4();
    *(undefined4 *)(param_1 + 0x7c) = extraout_s0;
    puVar5 = puVar5 + -0xc0;
  } while( true );
}



// ============================================================
// RVA: 0x14b68a0 | Atlas.UI.PaginationDotController..ctor
// ============================================================

undefined1  [16] Atlas_UI_PaginationDotController___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4ac2 & 1) == 0) {
    func_0x00f78a20(0x3d3c5b0);
    func_0x00f78a20(0x3d1df40);
    bRam0000000003eb4ac2 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<UIAtlasButton>_TypeInfo*/ uRam0000000003d1df40);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3c5b0);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ============================================================
// RVA: 0x14b6928 | Atlas.UI.PaginationDotController.<Setup>b__36_0
// ============================================================

/* WARNING: Possible PIC construction at 0x014b5f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f8c) */
/* WARNING: Removing unreachable block (ram,0x03277fa8) */
/* WARNING: Removing unreachable block (ram,0x03277f98) */
/* WARNING: Removing unreachable block (ram,0x03231580) */
/* WARNING: Removing unreachable block (ram,0x032315a4) */
/* WARNING: Removing unreachable block (ram,0x032315b8) */
/* WARNING: Removing unreachable block (ram,0x032315ec) */
/* WARNING: Removing unreachable block (ram,0x03231634) */
/* WARNING: Removing unreachable block (ram,0x0323169c) */
/* WARNING: Removing unreachable block (ram,0x032316b8) */
/* WARNING: Removing unreachable block (ram,0x032316d4) */
/* WARNING: Removing unreachable block (ram,0x0323175c) */
/* WARNING: Removing unreachable block (ram,0x03231768) */
/* WARNING: Removing unreachable block (ram,0x032316e4) */
/* WARNING: Removing unreachable block (ram,0x032316ec) */
/* WARNING: Removing unreachable block (ram,0x032316f4) */
/* WARNING: Removing unreachable block (ram,0x03231700) */
/* WARNING: Removing unreachable block (ram,0x03231718) */
/* WARNING: Removing unreachable block (ram,0x03231720) */
/* WARNING: Removing unreachable block (ram,0x0323172c) */
/* WARNING: Removing unreachable block (ram,0x03231734) */
/* WARNING: Removing unreachable block (ram,0x03231738) */
/* WARNING: Removing unreachable block (ram,0x0323174c) */
/* WARNING: Removing unreachable block (ram,0x03231758) */
/* WARNING: Removing unreachable block (ram,0x032317bc) */
/* WARNING: Removing unreachable block (ram,0x032317dc) */
/* WARNING: Removing unreachable block (ram,0x032317f0) */
/* WARNING: Removing unreachable block (ram,0x0323181c) */
/* WARNING: Removing unreachable block (ram,0x0323183c) */
/* WARNING: Removing unreachable block (ram,0x03231850) */
/* WARNING: Removing unreachable block (ram,0x0323187c) */
/* WARNING: Removing unreachable block (ram,0x0323189c) */
/* WARNING: Removing unreachable block (ram,0x032318bc) */
/* WARNING: Removing unreachable block (ram,0x032318c4) */
/* WARNING: Removing unreachable block (ram,0x032318cc) */
/* WARNING: Removing unreachable block (ram,0x032318e4) */
/* WARNING: Removing unreachable block (ram,0x03231920) */
/* WARNING: Removing unreachable block (ram,0x03231954) */
/* WARNING: Removing unreachable block (ram,0x03231974) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x03231900) */
/* WARNING: Removing unreachable block (ram,0x03231910) */
/* WARNING: Removing unreachable block (ram,0x03231858) */
/* WARNING: Removing unreachable block (ram,0x032317f8) */
/* WARNING: Removing unreachable block (ram,0x032315c0) */
/* WARNING: Removing unreachable block (ram,0x014b6858) */
/* WARNING: Removing unreachable block (ram,0x014b6868) */

long Atlas_UI_PaginationDotController___Setup_b__36_0(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  ulong unaff_x20;
  long lVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar8;
  undefined *puVar9;
  code *unaff_x30;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 uVar10;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  if (*(int *)(param_1 + 0x74) < 1) {
    return param_1;
  }
  uVar10 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((float)(*(int *)(param_1 + 0x74) + -1) /
                           (float)(*(int *)(param_1 + 0x20) + -1),0);
  *(undefined4 *)(param_1 + 0x7c) = uVar10;
  puVar3 = (undefined1 *)register0x00000008;
  do {
    *(ulong *)(puVar3 + -0x20) = unaff_x20;
    *(long *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(code **)(puVar3 + -8) = unaff_x30;
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar5 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(param_1 + 0x18),0);
      *(float *)(param_1 + 0x80) = extraout_s0_00;
      if (*(char *)(param_1 + 0x38) != '\0') {
        *(float *)(param_1 + 0x9c) =
             *(float *)(param_1 + 0xa0) *
             ((1.0 - ABS(extraout_s0_00 - *(float *)(param_1 + 0x7c))) + 1.0) * 0.5;
      }
      *(undefined1 *)(param_1 + 0x78) = 1;
      *(undefined4 *)(param_1 + 0x84) = 0;
      if (*(long *)(param_1 + 0x18) != 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x20) = 0;
        return lVar5;
      }
    }
    lVar5 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x50) = unaff_d9;
    *(undefined8 *)(puVar3 + -0x48) = unaff_d8;
    *(ulong *)(puVar3 + -0x40) = unaff_x20;
    *(long *)(puVar3 + -0x38) = param_1;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(code **)(puVar3 + -0x28) = Atlas_UI_PaginationDotController__SnapToTarget;
    if (*(long *)(lVar5 + 0x18) != 0) {
      lVar6 = /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(*(long *)(lVar5 + 0x18),0);
      *(undefined4 *)(lVar5 + 0x7c) = extraout_s0_01;
      return lVar6;
    }
    lVar6 = func_0x00f78af4();
    if (*(char *)(lVar6 + 0x24) != '\0') {
      return lVar6;
    }
    puVar2 = puVar3 + -0xa0;
    *(undefined8 *)(puVar3 + -0xa0) = unaff_x26;
    *(undefined8 *)(puVar3 + -0x98) = unaff_x25;
    *(undefined8 *)(puVar3 + -0x90) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x88) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x80) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x78) = unaff_x21;
    *(ulong *)(puVar3 + -0x70) = unaff_x20;
    *(long *)(puVar3 + -0x68) = lVar5;
    *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x30;
    *(code **)(puVar3 + -0x58) = Atlas_UI_PaginationDotController__Start;
    puVar8 = puVar3 + -0x60;
    lVar5 = lVar6;
    if ((bRam0000000003eb4abb & 1) == 0) {
      func_0x00f78a20(0x3d2a350);
      func_0x00f78a20(0x3d1b5b0);
      func_0x00f78a20(0x3d57948);
      func_0x00f78a20(0x3d5b0d0);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d5b3a8);
      func_0x00f78a20(0x3d5b398);
      func_0x00f78a20(0x3d5b3a0);
      lVar5 = func_0x00f78a20(0x3d25740);
      bRam0000000003eb4abb = 1;
    }
    if (*(char *)(lVar6 + 0x88) != '\0') {
      return lVar5;
    }
    *(undefined4 *)(lVar6 + 0xa0) = *(undefined4 *)(lVar6 + 0x9c);
    if (0 < *(int *)(lVar6 + 0x20)) {
      unaff_x20 = 0;
      unaff_x23 = 0x3d57948;
      unaff_x24 = 0x3d23990;
      unaff_x25 = 0x3d5b0d0;
      do {
        if ((int)unaff_x20 == 0) {
          lVar5 = *(long *)(lVar6 + 0x28);
        }
        else {
          unaff_x21 = *(undefined8 *)(lVar6 + 0x30);
          unaff_x22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar5 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(unaff_x21,unaff_x22,uRam0000000003d5b0d0);
        }
        if (lVar5 == 0) goto code_r0x014b5fbc;
        uVar4 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar5,uRam0000000003d57948);
        Atlas_UI_PaginationDotController__InitDot(lVar6,uVar4,unaff_x20);
        uVar1 = (int)unaff_x20 + 1;
        unaff_x20 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(lVar6 + 0x20));
    }
    lVar5 = Atlas_UI_PaginationDotController__SetDotHighlightStates(lVar6);
    *(undefined1 *)(lVar6 + 0x24) = 0;
    *(undefined1 *)(lVar6 + 0x88) = 1;
    if (*(char *)(lVar6 + 0xa4) == '\0') {
code_r0x014b5f10:
      if (*(long *)(lVar6 + 0x50) == 0) {
        if (*(long *)(lVar6 + 0x58) == 0) {
          return lVar5;
        }
        lVar5 = *(long *)(*(long *)(lVar6 + 0x58) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,lVar6,uRam0000000003d5b3a0,0);
        unaff_x20 = 0;
        if (lVar5 != 0) {
          puVar8 = *(undefined1 **)(puVar3 + -0x60);
          puVar9 = *(undefined **)(puVar3 + -0x58);
          lVar7 = *(long *)(puVar3 + -0x70);
          lVar6 = *(long *)(puVar3 + -0x68);
          unaff_x22 = *(undefined8 *)(puVar3 + -0x80);
          uVar4 = *(undefined8 *)(puVar3 + -0x78);
          puVar2 = puVar3 + -0x50;
          goto code_r0x03277f74;
        }
      }
      else {
        lVar5 = *(long *)(*(long *)(lVar6 + 0x50) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,lVar6,uRam0000000003d5b398,0);
        unaff_x20 = 0;
        if (lVar5 != 0) {
          puVar9 = &UNK_014b5f5c;
          lVar7 = lVar5;
          uVar4 = unaff_x21;
code_r0x03277f74:
          *(long *)(puVar2 + -0x20) = lVar7;
          *(long *)(puVar2 + -0x18) = lVar6;
          *(undefined1 **)(puVar2 + -0x10) = puVar8;
          *(undefined **)(puVar2 + -8) = puVar9;
          *(undefined8 *)(puVar2 + -0x50) = unaff_x22;
          *(undefined8 *)(puVar2 + -0x48) = uVar4;
          *(long *)(puVar2 + -0x40) = lVar7;
          *(long *)(puVar2 + -0x38) = lVar5;
          *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x28) = &UNK_03277f8c;
          if ((bRam0000000003ec1a32 & 1) == 0) {
            func_0x00f78a20(0x3d22a90,unaff_x21,0);
            bRam0000000003ec1a32 = 1;
          }
          lVar5 = func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
          /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x032313fc(lVar5,unaff_x21,0);
          return lVar5;
        }
      }
    }
    else {
      uVar4 = *(undefined8 *)(lVar6 + 0xa8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar4,0);
      if ((int)lVar5 == 0) goto code_r0x014b5f10;
      lVar5 = *(long *)(lVar6 + 0xa8);
      unaff_x21 = func_0x00f78aec(/*System.Action<UIAtlasButton>_TypeInfo*/ uRam0000000003d1b5b0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,lVar6,uRam0000000003d5b3a8,uRam0000000003d2a350);
      unaff_x20 = 0;
      if (lVar5 != 0) {
        lVar5 = /*Atlas.UI.UIAtlasButtonGroup$$add_OnButtonSelectedEvent*/ func_0x01515dfc(lVar5,unaff_x21,0);
        goto code_r0x014b5f10;
      }
    }
code_r0x014b5fbc:
    unaff_x19 = func_0x00f78af4();
    *(ulong *)(puVar3 + -0xc0) = unaff_x20;
    *(long *)(puVar3 + -0xb8) = lVar6;
    *(undefined1 **)(puVar3 + -0xb0) = puVar8;
    *(code **)(puVar3 + -0xa8) = Atlas_UI_PaginationDotController__DisablePagination;
    unaff_x29 = puVar3 + -0xb0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(unaff_x19 + 0x18),0,0);
      lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0);
      if (lVar5 != 0) {
        *(undefined8 *)(puVar3 + -0xd0) = unaff_x22;
        *(undefined8 *)(puVar3 + -200) = unaff_x21;
        *(undefined8 *)(puVar3 + -0xc0) = *(undefined8 *)(puVar3 + -0xc0);
        *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0xb8);
        *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xb0);
        *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xa8);
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar5 = (*pcRam0000000003ebf4c0)(lVar5,0);
        return lVar5;
      }
    }
    unaff_x30 = Atlas_UI_PaginationDotController__ScrollToTarget;
    param_1 = func_0x00f78af4();
    *(undefined4 *)(param_1 + 0x7c) = extraout_s0;
    puVar3 = puVar3 + -0xc0;
  } while( true );
}



// ============================================================
// RVA: 0x14b6930 | Atlas.UI.PaginationDotController.<Setup>b__36_1
// ============================================================

/* WARNING: Possible PIC construction at 0x014b5f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03277f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03277f8c) */
/* WARNING: Removing unreachable block (ram,0x03277fa8) */
/* WARNING: Removing unreachable block (ram,0x03277f98) */
/* WARNING: Removing unreachable block (ram,0x03231580) */
/* WARNING: Removing unreachable block (ram,0x032315a4) */
/* WARNING: Removing unreachable block (ram,0x032315b8) */
/* WARNING: Removing unreachable block (ram,0x032315ec) */
/* WARNING: Removing unreachable block (ram,0x03231634) */
/* WARNING: Removing unreachable block (ram,0x0323169c) */
/* WARNING: Removing unreachable block (ram,0x032316b8) */
/* WARNING: Removing unreachable block (ram,0x032316d4) */
/* WARNING: Removing unreachable block (ram,0x0323175c) */
/* WARNING: Removing unreachable block (ram,0x03231768) */
/* WARNING: Removing unreachable block (ram,0x032316e4) */
/* WARNING: Removing unreachable block (ram,0x032316ec) */
/* WARNING: Removing unreachable block (ram,0x032316f4) */
/* WARNING: Removing unreachable block (ram,0x03231700) */
/* WARNING: Removing unreachable block (ram,0x03231718) */
/* WARNING: Removing unreachable block (ram,0x03231720) */
/* WARNING: Removing unreachable block (ram,0x0323172c) */
/* WARNING: Removing unreachable block (ram,0x03231734) */
/* WARNING: Removing unreachable block (ram,0x03231738) */
/* WARNING: Removing unreachable block (ram,0x0323174c) */
/* WARNING: Removing unreachable block (ram,0x03231758) */
/* WARNING: Removing unreachable block (ram,0x032317bc) */
/* WARNING: Removing unreachable block (ram,0x032317dc) */
/* WARNING: Removing unreachable block (ram,0x032317f0) */
/* WARNING: Removing unreachable block (ram,0x0323181c) */
/* WARNING: Removing unreachable block (ram,0x0323183c) */
/* WARNING: Removing unreachable block (ram,0x03231850) */
/* WARNING: Removing unreachable block (ram,0x0323187c) */
/* WARNING: Removing unreachable block (ram,0x0323189c) */
/* WARNING: Removing unreachable block (ram,0x032318bc) */
/* WARNING: Removing unreachable block (ram,0x032318c4) */
/* WARNING: Removing unreachable block (ram,0x032318cc) */
/* WARNING: Removing unreachable block (ram,0x032318e4) */
/* WARNING: Removing unreachable block (ram,0x03231920) */
/* WARNING: Removing unreachable block (ram,0x03231954) */
/* WARNING: Removing unreachable block (ram,0x03231974) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x03231900) */
/* WARNING: Removing unreachable block (ram,0x03231910) */
/* WARNING: Removing unreachable block (ram,0x03231858) */
/* WARNING: Removing unreachable block (ram,0x032317f8) */
/* WARNING: Removing unreachable block (ram,0x032315c0) */
/* WARNING: Removing unreachable block (ram,0x014b6844) */
/* WARNING: Removing unreachable block (ram,0x014b684c) */

long Atlas_UI_PaginationDotController___Setup_b__36_1(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  ulong unaff_x20;
  long lVar8;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar9;
  undefined *puVar10;
  code *unaff_x30;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 uVar11;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  iVar2 = *(int *)(param_1 + 0x20) + -1;
  if (iVar2 <= *(int *)(param_1 + 0x74)) {
    return param_1;
  }
  uVar11 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((float)(*(int *)(param_1 + 0x74) + 1) / (float)iVar2,0);
  *(undefined4 *)(param_1 + 0x7c) = uVar11;
  puVar4 = (undefined1 *)register0x00000008;
  do {
    *(ulong *)(puVar4 + -0x20) = unaff_x20;
    *(long *)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
    *(code **)(puVar4 + -8) = unaff_x30;
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar6 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(*(long *)(param_1 + 0x18),0);
      *(float *)(param_1 + 0x80) = extraout_s0_00;
      if (*(char *)(param_1 + 0x38) != '\0') {
        *(float *)(param_1 + 0x9c) =
             *(float *)(param_1 + 0xa0) *
             ((1.0 - ABS(extraout_s0_00 - *(float *)(param_1 + 0x7c))) + 1.0) * 0.5;
      }
      *(undefined1 *)(param_1 + 0x78) = 1;
      *(undefined4 *)(param_1 + 0x84) = 0;
      if (*(long *)(param_1 + 0x18) != 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x20) = 0;
        return lVar6;
      }
    }
    lVar6 = func_0x00f78af4();
    *(undefined8 *)(puVar4 + -0x50) = unaff_d9;
    *(undefined8 *)(puVar4 + -0x48) = unaff_d8;
    *(ulong *)(puVar4 + -0x40) = unaff_x20;
    *(long *)(puVar4 + -0x38) = param_1;
    *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
    *(code **)(puVar4 + -0x28) = Atlas_UI_PaginationDotController__SnapToTarget;
    if (*(long *)(lVar6 + 0x18) != 0) {
      lVar7 = /*UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition*/ func_0x032e06b4(*(long *)(lVar6 + 0x18),0);
      *(undefined4 *)(lVar6 + 0x7c) = extraout_s0_01;
      return lVar7;
    }
    lVar7 = func_0x00f78af4();
    if (*(char *)(lVar7 + 0x24) != '\0') {
      return lVar7;
    }
    puVar3 = puVar4 + -0xa0;
    *(undefined8 *)(puVar4 + -0xa0) = unaff_x26;
    *(undefined8 *)(puVar4 + -0x98) = unaff_x25;
    *(undefined8 *)(puVar4 + -0x90) = unaff_x24;
    *(undefined8 *)(puVar4 + -0x88) = unaff_x23;
    *(undefined8 *)(puVar4 + -0x80) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x78) = unaff_x21;
    *(ulong *)(puVar4 + -0x70) = unaff_x20;
    *(long *)(puVar4 + -0x68) = lVar6;
    *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x30;
    *(code **)(puVar4 + -0x58) = Atlas_UI_PaginationDotController__Start;
    puVar9 = puVar4 + -0x60;
    lVar6 = lVar7;
    if ((bRam0000000003eb4abb & 1) == 0) {
      func_0x00f78a20(0x3d2a350);
      func_0x00f78a20(0x3d1b5b0);
      func_0x00f78a20(0x3d57948);
      func_0x00f78a20(0x3d5b0d0);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d5b3a8);
      func_0x00f78a20(0x3d5b398);
      func_0x00f78a20(0x3d5b3a0);
      lVar6 = func_0x00f78a20(0x3d25740);
      bRam0000000003eb4abb = 1;
    }
    if (*(char *)(lVar7 + 0x88) != '\0') {
      return lVar6;
    }
    *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(lVar7 + 0x9c);
    if (0 < *(int *)(lVar7 + 0x20)) {
      unaff_x20 = 0;
      unaff_x23 = 0x3d57948;
      unaff_x24 = 0x3d23990;
      unaff_x25 = 0x3d5b0d0;
      do {
        if ((int)unaff_x20 == 0) {
          lVar6 = *(long *)(lVar7 + 0x28);
        }
        else {
          unaff_x21 = *(undefined8 *)(lVar7 + 0x30);
          unaff_x22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar6 = /*UnityEngine.Object$$Instantiate<Toggle>*/ func_0x018a6780(unaff_x21,unaff_x22,uRam0000000003d5b0d0);
        }
        if (lVar6 == 0) goto code_r0x014b5fbc;
        uVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar6,uRam0000000003d57948);
        Atlas_UI_PaginationDotController__InitDot(lVar7,uVar5,unaff_x20);
        uVar1 = (int)unaff_x20 + 1;
        unaff_x20 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(lVar7 + 0x20));
    }
    lVar6 = Atlas_UI_PaginationDotController__SetDotHighlightStates(lVar7);
    *(undefined1 *)(lVar7 + 0x24) = 0;
    *(undefined1 *)(lVar7 + 0x88) = 1;
    if (*(char *)(lVar7 + 0xa4) == '\0') {
code_r0x014b5f10:
      if (*(long *)(lVar7 + 0x50) == 0) {
        if (*(long *)(lVar7 + 0x58) == 0) {
          return lVar6;
        }
        lVar6 = *(long *)(*(long *)(lVar7 + 0x58) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,lVar7,uRam0000000003d5b3a0,0);
        unaff_x20 = 0;
        if (lVar6 != 0) {
          puVar9 = *(undefined1 **)(puVar4 + -0x60);
          puVar10 = *(undefined **)(puVar4 + -0x58);
          lVar8 = *(long *)(puVar4 + -0x70);
          lVar7 = *(long *)(puVar4 + -0x68);
          unaff_x22 = *(undefined8 *)(puVar4 + -0x80);
          uVar5 = *(undefined8 *)(puVar4 + -0x78);
          puVar3 = puVar4 + -0x50;
          goto code_r0x03277f74;
        }
      }
      else {
        lVar6 = *(long *)(*(long *)(lVar7 + 0x50) + 0xf8);
        unaff_x21 = func_0x00f78aec(/*UnityEngine.Events.UnityAction_TypeInfo*/ uRam0000000003d25740);
        /*UnityEngine.Events.UnityAction$$.ctor*/ func_0x03277c50(unaff_x21,lVar7,uRam0000000003d5b398,0);
        unaff_x20 = 0;
        if (lVar6 != 0) {
          puVar10 = &UNK_014b5f5c;
          lVar8 = lVar6;
          uVar5 = unaff_x21;
code_r0x03277f74:
          *(long *)(puVar3 + -0x20) = lVar8;
          *(long *)(puVar3 + -0x18) = lVar7;
          *(undefined1 **)(puVar3 + -0x10) = puVar9;
          *(undefined **)(puVar3 + -8) = puVar10;
          *(undefined8 *)(puVar3 + -0x50) = unaff_x22;
          *(undefined8 *)(puVar3 + -0x48) = uVar5;
          *(long *)(puVar3 + -0x40) = lVar8;
          *(long *)(puVar3 + -0x38) = lVar6;
          *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x28) = &UNK_03277f8c;
          if ((bRam0000000003ec1a32 & 1) == 0) {
            func_0x00f78a20(0x3d22a90,unaff_x21,0);
            bRam0000000003ec1a32 = 1;
          }
          lVar6 = func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
          /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x032313fc(lVar6,unaff_x21,0);
          return lVar6;
        }
      }
    }
    else {
      uVar5 = *(undefined8 *)(lVar7 + 0xa8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
      if ((int)lVar6 == 0) goto code_r0x014b5f10;
      lVar6 = *(long *)(lVar7 + 0xa8);
      unaff_x21 = func_0x00f78aec(/*System.Action<UIAtlasButton>_TypeInfo*/ uRam0000000003d1b5b0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,lVar7,uRam0000000003d5b3a8,uRam0000000003d2a350);
      unaff_x20 = 0;
      if (lVar6 != 0) {
        lVar6 = /*Atlas.UI.UIAtlasButtonGroup$$add_OnButtonSelectedEvent*/ func_0x01515dfc(lVar6,unaff_x21,0);
        goto code_r0x014b5f10;
      }
    }
code_r0x014b5fbc:
    unaff_x19 = func_0x00f78af4();
    *(ulong *)(puVar4 + -0xc0) = unaff_x20;
    *(long *)(puVar4 + -0xb8) = lVar7;
    *(undefined1 **)(puVar4 + -0xb0) = puVar9;
    *(code **)(puVar4 + -0xa8) = Atlas_UI_PaginationDotController__DisablePagination;
    unaff_x29 = puVar4 + -0xb0;
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(unaff_x19 + 0x18),0,0);
      lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0);
      if (lVar6 != 0) {
        *(undefined8 *)(puVar4 + -0xd0) = unaff_x22;
        *(undefined8 *)(puVar4 + -200) = unaff_x21;
        *(undefined8 *)(puVar4 + -0xc0) = *(undefined8 *)(puVar4 + -0xc0);
        *(undefined8 *)(puVar4 + -0xb8) = *(undefined8 *)(puVar4 + -0xb8);
        *(undefined8 *)(puVar4 + -0xb0) = *(undefined8 *)(puVar4 + -0xb0);
        *(undefined8 *)(puVar4 + -0xa8) = *(undefined8 *)(puVar4 + -0xa8);
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar6 = (*pcRam0000000003ebf4c0)(lVar6,0);
        return lVar6;
      }
    }
    unaff_x30 = Atlas_UI_PaginationDotController__ScrollToTarget;
    param_1 = func_0x00f78af4();
    *(undefined4 *)(param_1 + 0x7c) = extraout_s0;
    puVar4 = puVar4 + -0xc0;
  } while( true );
}



