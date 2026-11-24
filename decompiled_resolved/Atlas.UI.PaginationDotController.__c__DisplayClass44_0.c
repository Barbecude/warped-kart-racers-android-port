// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.PaginationDotController.<>c__DisplayClass44_0

// ============================================================
// RVA: 0x156189c | Atlas.UI.PaginationDotController.<>c__DisplayClass44_0..ctor
// ============================================================

void Atlas_UI_PaginationDotController___c__DisplayClass44_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x15618a4 | Atlas.UI.PaginationDotController.<>c__DisplayClass44_0.<InitDot>b__0
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

long Atlas_UI_PaginationDotController___c__DisplayClass44_0___InitDot_b__0
               (long param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined1 auVar11 [16];
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    auVar11 = func_0x00f78af4();
    lVar6 = auVar11._0_8_;
    *(undefined8 *)(lVar6 + 0x10) = *param_3;
    *(long *)(lVar6 + 0x20) = auVar11._8_8_;
    *(undefined8 **)(lVar6 + 0x28) = param_3;
    return lVar6;
  }
  uVar10 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((float)*(int *)(param_1 + 0x18) / (float)(*(int *)(lVar6 + 0x20) + -1),0,
                           *(int *)(param_1 + 0x18),0);
  *(undefined4 *)(lVar6 + 0x7c) = uVar10;
  puVar3 = (undefined1 *)register0x00000008;
  do {
    *(ulong *)(puVar3 + -0x20) = unaff_x20;
    *(long *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(code **)(puVar3 + -8) = unaff_x30;
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
    *(ulong *)(puVar3 + -0x40) = unaff_x20;
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
          lVar6 = func_0x00f78aec(/*UnityEngine.Events.InvokableCall_TypeInfo*/ uRam0000000003d22a90);
          /*UnityEngine.Events.InvokableCall$$.ctor*/ func_0x032313fc(lVar6,unaff_x21,0);
          return lVar6;
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
      lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x19,0);
      if (lVar6 != 0) {
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
        lVar6 = (*pcRam0000000003ebf4c0)(lVar6,0);
        return lVar6;
      }
    }
    unaff_x30 = Atlas_UI_PaginationDotController__ScrollToTarget;
    lVar6 = func_0x00f78af4();
    *(undefined4 *)(lVar6 + 0x7c) = extraout_s0;
    puVar3 = puVar3 + -0xc0;
  } while( true );
}



