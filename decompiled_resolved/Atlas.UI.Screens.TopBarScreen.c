// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.TopBarScreen

// ============================================================
// RVA: 0x150afe4 | Atlas.UI.Screens.TopBarScreen.HideButtonsNotRequired
// ============================================================

/* WARNING: Possible PIC construction at 0x0150b05c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150b090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150b0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150b0f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150b12c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150b160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150b194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150b26c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150b3d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150b3d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen__HideButtonsNotRequired
               (undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  int iVar14;
  long *plVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  int extraout_w1;
  ulong uVar23;
  bool bVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  undefined4 uVar29;
  undefined8 unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar30;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  ulong unaff_x27;
  int iVar31;
  undefined8 unaff_x28;
  undefined8 ***unaff_x29;
  undefined1 *puVar32;
  undefined *unaff_x30;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 **ppuStack_70;
  undefined *puStack_68;
  
  auVar38._8_8_ = unaff_x19;
  auVar38._0_8_ = param_1;
  auVar7._8_8_ = param_1;
  auVar7._0_8_ = param_1;
  auVar6._8_8_ = param_1;
  auVar6._0_8_ = param_1;
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = param_1;
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = param_1;
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = param_1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = param_1;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = param_1;
  auVar37._8_8_ = param_1;
  auVar37._0_8_ = param_1;
  uVar30 = 0x3eb4000;
  if ((bRam0000000003eb4d5e & 1) == 0) {
    param_1 = func_0x00f78a20(0x3d3dca0);
    bRam0000000003eb4d5e = 1;
  }
  uVar15 = /*Atlas.UI.Screens.TopBarScreen$$IsElementTypeListed*/ func_0x0150cf28(param_1,0,param_2);
  uVar20 = param_3;
  if (((uVar15 & 1) == 0) && (uVar15 = /*Atlas.UI.Screens.TopBarScreen$$IsElementTypeListed*/ func_0x0150cf28(uVar15,0,param_3), (uVar15 & 1) == 0)) {
    uVar23 = 0;
    bVar24 = false;
    uVar26 = 1;
    unaff_x30 = (undefined *)0x150b060;
    puVar9 = &stack0xffffffffffffffa0;
    unaff_x21 = param_2;
    unaff_x22 = uVar30;
    unaff_x29 = (undefined8 ***)&stack0xfffffffffffffff0;
    auVar38 = auVar37;
  }
  else {
    uVar15 = /*Atlas.UI.Screens.TopBarScreen$$IsElementTypeListed*/ func_0x0150cf28(uVar15,1,param_2);
    if (((uVar15 & 1) == 0) && (uVar15 = /*Atlas.UI.Screens.TopBarScreen$$IsElementTypeListed*/ func_0x0150cf28(uVar15,1,param_3), (uVar15 & 1) == 0)) {
      uVar23 = 1;
      bVar24 = false;
      uVar26 = 1;
      unaff_x30 = (undefined *)0x150b094;
      puVar9 = &stack0xffffffffffffffa0;
      unaff_x21 = param_2;
      unaff_x22 = uVar30;
      unaff_x29 = (undefined8 ***)&stack0xfffffffffffffff0;
      auVar38 = auVar1;
    }
    else {
      uVar15 = /*Atlas.UI.Screens.TopBarScreen$$IsElementTypeListed*/ func_0x0150cf28(uVar15,2,param_2);
      if (((uVar15 & 1) == 0) && (uVar15 = /*Atlas.UI.Screens.TopBarScreen$$IsElementTypeListed*/ func_0x0150cf28(uVar15,2,param_3), (uVar15 & 1) == 0)) {
        uVar23 = 2;
        bVar24 = false;
        uVar26 = 1;
        unaff_x30 = (undefined *)0x150b0c8;
        puVar9 = &stack0xffffffffffffffa0;
        unaff_x21 = param_2;
        unaff_x22 = uVar30;
        unaff_x29 = (undefined8 ***)&stack0xfffffffffffffff0;
        auVar38 = auVar2;
      }
      else {
        uVar15 = /*Atlas.UI.Screens.TopBarScreen$$IsElementTypeListed*/ func_0x0150cf28(uVar15,3,param_2);
        if (((uVar15 & 1) == 0) && (uVar15 = /*Atlas.UI.Screens.TopBarScreen$$IsElementTypeListed*/ func_0x0150cf28(uVar15,3,param_3), (uVar15 & 1) == 0))
        {
          uVar23 = 3;
          bVar24 = false;
          uVar26 = 1;
          unaff_x30 = (undefined *)0x150b0fc;
          puVar9 = &stack0xffffffffffffffa0;
          unaff_x21 = param_2;
          unaff_x22 = uVar30;
          unaff_x29 = (undefined8 ***)&stack0xfffffffffffffff0;
          auVar38 = auVar3;
        }
        else {
          uVar15 = /*Atlas.UI.Screens.TopBarScreen$$IsElementTypeListed*/ func_0x0150cf28(uVar15,4,param_2);
          if (((uVar15 & 1) == 0) && (uVar15 = /*Atlas.UI.Screens.TopBarScreen$$IsElementTypeListed*/ func_0x0150cf28(uVar15,4,param_3), (uVar15 & 1) == 0)
             ) {
            uVar23 = 4;
            bVar24 = false;
            uVar26 = 1;
            unaff_x30 = (undefined *)0x150b130;
            puVar9 = &stack0xffffffffffffffa0;
            unaff_x21 = param_2;
            unaff_x22 = uVar30;
            unaff_x29 = (undefined8 ***)&stack0xfffffffffffffff0;
            auVar38 = auVar4;
          }
          else {
            uVar15 = /*Atlas.UI.Screens.TopBarScreen$$IsElementTypeListed*/ func_0x0150cf28(uVar15,5,param_2);
            if (((uVar15 & 1) == 0) &&
               (uVar15 = /*Atlas.UI.Screens.TopBarScreen$$IsElementTypeListed*/ func_0x0150cf28(uVar15,5,param_3), (uVar15 & 1) == 0)) {
              uVar23 = 5;
              bVar24 = false;
              uVar26 = 1;
              unaff_x30 = (undefined *)0x150b164;
              puVar9 = &stack0xffffffffffffffa0;
              unaff_x21 = param_2;
              unaff_x22 = uVar30;
              unaff_x29 = (undefined8 ***)&stack0xfffffffffffffff0;
              auVar38 = auVar5;
            }
            else {
              uVar20 = param_2;
              uVar15 = /*Atlas.UI.Screens.TopBarScreen$$IsElementTypeListed*/ func_0x0150cf28(uVar15,8);
              if (((uVar15 & 1) == 0) &&
                 (uVar20 = param_3, uVar15 = /*Atlas.UI.Screens.TopBarScreen$$IsElementTypeListed*/ func_0x0150cf28(uVar15,8), (uVar15 & 1) == 0)) {
                uVar23 = 8;
                bVar24 = false;
                uVar26 = 1;
                unaff_x30 = (undefined *)0x150b198;
                puVar9 = &stack0xffffffffffffffa0;
                uVar20 = param_3;
                unaff_x21 = param_2;
                unaff_x22 = uVar30;
                unaff_x29 = (undefined8 ***)&stack0xfffffffffffffff0;
                auVar38 = auVar6;
              }
              else {
                uVar21 = unaff_x26;
                if (param_2 != 0) {
                  uVar11 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(param_2,0,uRam0000000003d3dca0);
                  uVar20 = uRam0000000003d3dca0;
                  uVar12 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(param_2,1);
                  uVar21 = 0x3d3dca0;
                  if (param_3 != 0) {
                    uVar30 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(param_3,0,uRam0000000003d3dca0);
                    puVar16 = (undefined8 *)/*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(param_3,1,uRam0000000003d3dca0);
                    puVar17 = (undefined8 *)/*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(param_2,6,uRam0000000003d3dca0);
                    puVar18 = (undefined *)/*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(param_3,6,uRam0000000003d3dca0);
                    uVar15 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(param_2,8,uRam0000000003d3dca0);
                    uVar13 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(param_3,8,uRam0000000003d3dca0);
                    uVar13 = (uint)puVar17 | (uint)puVar18 | (uint)uVar15 | uVar13;
                    if (((((uVar11 | uVar12) & 1) == 0) && ((uVar30 & 1) == 0)) &&
                       (((ulong)puVar16 & 1) == 0)) {
                      uVar23 = 6;
                      bVar24 = false;
                      uVar26 = 1;
                      unaff_x30 = (undefined *)0x150b270;
                      puVar9 = &stack0xffffffffffffffa0;
                      uVar20 = (ulong)uVar13;
                      unaff_x21 = uVar15;
                      unaff_x22 = uVar30;
                      unaff_x23 = puVar16;
                      unaff_x24 = puVar17;
                      unaff_x25 = puVar18;
                      unaff_x26 = 0x3d3dca0;
                      unaff_x27 = (ulong)(uVar11 | uVar12);
                      unaff_x29 = (undefined8 ***)&stack0xfffffffffffffff0;
                      auVar38 = auVar7;
                    }
                    else {
                      if ((uVar13 & 1) != 0) {
                        return;
                      }
                      uVar23 = 7;
                      bVar24 = false;
                      uVar26 = 1;
                      puVar9 = (undefined1 *)register0x00000008;
                      uVar20 = unaff_x20;
                    }
                    goto code_r0x0150bc48;
                  }
                }
                unaff_x26 = uVar21;
                auVar37 = func_0x00f78af4();
                lVar22 = auVar37._0_8_;
                auVar38._8_8_ = lVar22;
                auVar38._0_8_ = lVar22;
                puVar9 = auStack_f0;
                puStack_68 = &Atlas_UI_Screens_TopBarScreen__ShowButtons;
                unaff_x29 = &ppuStack_70;
                puVar16 = (undefined8 *)0x3eb4000;
                uStack_b0 = unaff_x26;
                ppuStack_70 = (undefined8 **)&stack0xfffffffffffffff0;
                if ((bRam0000000003eb4d5d & 1) == 0) {
                  func_0x00f78a20(0x3d337e0);
                  func_0x00f78a20(0x3d337e8);
                  func_0x00f78a20(0x3d337f0);
                  func_0x00f78a20(0x3d3dca0);
                  func_0x00f78a20(0x3d3dca8);
                  bRam0000000003eb4d5d = 1;
                }
                puVar17 = unaff_x23;
                if (auVar37._8_8_ == 0) goto code_r0x0150b47c;
                unaff_x24 = (undefined8 *)0x3d337e8;
                puVar16 = (undefined8 *)0x3d3dca0;
                unaff_x22 = 0x3d3dca0;
                puVar17 = (undefined8 *)0x3d337e0;
                unaff_x23 = (undefined8 *)0x3d337e0;
                /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$GetEnumerator*/ func_0x023df1f8(&uStack_e8,auVar37._8_8_,uRam0000000003d3dca8);
                uStack_c8 = uStack_e0;
                uStack_d0 = uStack_e8;
                uStack_c0 = uStack_d8;
                unaff_x25 = &UNK_033f869c;
                do {
                  uVar30 = /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$MoveNext*/ func_0x01f694e8(&uStack_d0,uRam0000000003d337e8);
                  if ((uVar30 & 1) == 0) {
                    /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_d0,uRam0000000003d337e0);
                    goto code_r0x0150b3e4;
                  }
                  if (uVar20 == 0) {
                    func_0x00f78af4();
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(1,0x150b47c);
                    (*pcVar8)();
                  }
                  uVar11 = (uint)uStack_c0;
                  unaff_x21 = (ulong)(int)(uint)uStack_c0;
                  uVar30 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(uVar20,unaff_x21,uRam0000000003d3dca0);
                } while ((uVar30 & 1) != 0);
                if (uVar11 < 9) {
                  uVar23 = (ulong)*(uint *)(&UNK_033f869c + unaff_x21 * 4);
                }
                else {
                  uVar23 = 0xffffffff;
                }
                bVar24 = true;
                uVar26 = 1;
                unaff_x30 = &UNK_0150b3d4;
              }
            }
          }
        }
      }
    }
  }
code_r0x0150bc48:
  do {
    uVar30 = auVar38._8_8_;
    lVar22 = auVar38._0_8_;
    *(ulong *)(puVar9 + -0x20) = uVar20;
    *(ulong *)(puVar9 + -0x18) = uVar30;
    *(undefined8 ****)(puVar9 + -0x10) = unaff_x29;
    *(undefined **)(puVar9 + -8) = unaff_x30;
    uVar11 = (uint)uVar23;
    if (uVar11 == 0xffffffff) {
      return;
    }
    lVar27 = *(long *)(lVar22 + 0x70);
    if (lVar27 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar30 = uVar23;
      if (uVar11 < *(uint *)(lVar27 + 0x18)) {
        uVar29 = 2;
        if (!bVar24) {
          uVar29 = 0;
        }
        *(undefined4 *)(lVar27 + (long)(int)uVar11 * 0x60 + 0x5c) = uVar29;
        if ((uVar26 & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(lVar22,uVar23);
        }
        *(undefined8 *)(puVar9 + -0x60) = unaff_x28;
        *(ulong *)(puVar9 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar9 + -0x50) = unaff_x26;
        *(undefined **)(puVar9 + -0x48) = unaff_x25;
        *(undefined8 **)(puVar9 + -0x40) = unaff_x24;
        *(undefined8 **)(puVar9 + -0x38) = unaff_x23;
        *(ulong *)(puVar9 + -0x30) = unaff_x22;
        *(ulong *)(puVar9 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar9 + -0x20) = *(undefined8 *)(puVar9 + -0x20);
        *(undefined8 *)(puVar9 + -0x18) = *(undefined8 *)(puVar9 + -0x18);
        *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
        *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        lVar27 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar28 = *(long *)(lVar22 + 0x70);
        if (lVar28 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar28 + 0x18) <= uVar11) goto code_r0x0150c7d8;
        unaff_x25 = (undefined *)(long)(int)uVar11;
        lVar28 = lVar28 + (long)unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar28 + 0x20);
        unaff_x22 = *(ulong *)(lVar28 + 0x28);
        uVar21 = *(undefined8 *)(lVar28 + 0x30);
        uVar33 = *(undefined8 *)(lVar28 + 0x48);
        uVar25 = *(undefined8 *)(lVar28 + 0x40);
        *(undefined8 *)(puVar9 + -0xe8) = *(undefined8 *)(lVar28 + 0x38);
        *(undefined8 *)(puVar9 + -0xf0) = uVar21;
        *(undefined8 *)(puVar9 + -0xd8) = uVar33;
        *(undefined8 *)(puVar9 + -0xe0) = uVar25;
        lVar27 = *(long *)(lVar28 + 0x50);
        iVar31 = *(int *)(lVar28 + 0x58);
        iVar14 = *(int *)(lVar28 + 0x5c);
        unaff_x23 = *(undefined8 **)(lVar28 + 0x60);
        unaff_x24 = *(undefined8 **)(lVar28 + 0x68);
        uVar21 = *(undefined8 *)(lVar28 + 0x70);
        *(undefined8 *)(puVar9 + -0xf8) = *(undefined8 *)(lVar28 + 0x78);
        *(undefined8 *)(puVar9 + -0x100) = uVar21;
        if (iVar14 == iVar31) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar27,0,0);
          if (iVar14 == 0) {
            return;
          }
          if (lVar27 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar27,iVar31 == 2,0);
            return;
          }
        }
        else if (iVar31 == 2) {
          if (iVar14 == 0) {
            if (unaff_x24 == (undefined8 *)0x0) goto code_r0x0150c7d4;
            uVar25 = *(undefined8 *)(lVar28 + 0x38);
            uVar21 = *(undefined8 *)(lVar28 + 0x30);
            uVar34 = *(undefined8 *)(lVar28 + 0x48);
            uVar33 = *(undefined8 *)(lVar28 + 0x40);
            *(undefined8 *)(puVar9 + -0x118) = uVar25;
            *(undefined8 *)(puVar9 + -0x120) = uVar21;
            *(undefined8 *)(puVar9 + -0x108) = uVar34;
            *(undefined8 *)(puVar9 + -0x110) = uVar33;
            uVar36 = *(undefined8 *)(lVar28 + 0x78);
            uVar35 = *(undefined8 *)(lVar28 + 0x70);
            *(undefined8 *)(puVar9 + -0x128) = uVar36;
            *(undefined8 *)(puVar9 + -0x130) = uVar35;
            *(undefined8 *)(puVar9 + -200) = unaff_x26;
            *(ulong *)(puVar9 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar9 + -0xb0) = uVar25;
            *(undefined8 *)(puVar9 + -0xb8) = uVar21;
            *(undefined8 *)(puVar9 + -0xa0) = uVar34;
            *(undefined8 *)(puVar9 + -0xa8) = uVar33;
            *(long *)(puVar9 + -0x98) = lVar27;
            *(undefined8 *)(puVar9 + -0x90) = _UNK_033f8620;
            *(undefined8 **)(puVar9 + -0x88) = unaff_x23;
            *(undefined8 **)(puVar9 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar9 + -0x70) = uVar36;
            *(undefined8 *)(puVar9 + -0x78) = uVar35;
            puVar16 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(puVar16,puVar9 + -200,uRam0000000003d2a408);
            iVar31 = 1;
          }
          else {
            iVar31 = 2;
          }
code_r0x0150c72c:
          lVar28 = *(long *)(lVar22 + 0x70);
          if (lVar28 != 0) {
            if (*(uint *)(lVar28 + 0x18) <= uVar11) goto code_r0x0150c7d8;
            lVar28 = lVar28 + (long)unaff_x25 * 0x60;
            *(undefined8 *)(lVar28 + 0x20) = unaff_x26;
            *(ulong *)(lVar28 + 0x28) = unaff_x22;
            uVar21 = *(undefined8 *)(puVar9 + -0xf0);
            uVar33 = *(undefined8 *)(puVar9 + -0xd8);
            uVar25 = *(undefined8 *)(puVar9 + -0xe0);
            *(undefined8 *)(lVar28 + 0x38) = *(undefined8 *)(puVar9 + -0xe8);
            *(undefined8 *)(lVar28 + 0x30) = uVar21;
            *(undefined8 *)(lVar28 + 0x48) = uVar33;
            *(undefined8 *)(lVar28 + 0x40) = uVar25;
            *(long *)(lVar28 + 0x50) = lVar27;
            *(int *)(lVar28 + 0x58) = iVar31;
            *(int *)(lVar28 + 0x5c) = iVar14;
            *(undefined8 **)(lVar28 + 0x60) = unaff_x23;
            *(undefined8 **)(lVar28 + 0x68) = unaff_x24;
            uVar21 = *(undefined8 *)(puVar9 + -0x100);
            *(undefined8 *)(lVar28 + 0x78) = *(undefined8 *)(puVar9 + -0xf8);
            *(undefined8 *)(lVar28 + 0x70) = uVar21;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar31 != 0) goto code_r0x0150c72c;
          if (iVar14 != 2) {
            iVar31 = 0;
            goto code_r0x0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar28 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar28 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar28,1,0), unaff_x23 != (undefined8 *)0x0)) {
            *(undefined8 *)(puVar9 + -200) = unaff_x26;
            *(ulong *)(puVar9 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar9 + -0xb0) = *(undefined8 *)(puVar9 + -0xe8);
            *(undefined8 *)(puVar9 + -0xb8) = *(undefined8 *)(puVar9 + -0xf0);
            *(undefined8 *)(puVar9 + -0xa0) = *(undefined8 *)(puVar9 + -0xd8);
            *(undefined8 *)(puVar9 + -0xa8) = *(undefined8 *)(puVar9 + -0xe0);
            *(long *)(puVar9 + -0x98) = lVar27;
            *(undefined8 *)(puVar9 + -0x90) = _UNK_033f8628;
            *(undefined8 **)(puVar9 + -0x88) = unaff_x23;
            *(undefined8 **)(puVar9 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar9 + -0x70) = *(undefined8 *)(puVar9 + -0xf8);
            *(undefined8 *)(puVar9 + -0x78) = *(undefined8 *)(puVar9 + -0x100);
            puVar16 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar21 = func_0x00f78b24();
        auVar38 = func_0x00f78ac0(uVar21,0);
        lVar28 = auVar38._8_8_;
        *(undefined8 *)(puVar9 + -0x180) = unaff_x26;
        *(undefined **)(puVar9 + -0x178) = unaff_x25;
        *(undefined8 **)(puVar9 + -0x170) = unaff_x24;
        *(undefined8 **)(puVar9 + -0x168) = unaff_x23;
        *(ulong *)(puVar9 + -0x160) = unaff_x22;
        *(long *)(puVar9 + -0x158) = lVar22;
        *(ulong *)(puVar9 + -0x150) = uVar23;
        *(long *)(puVar9 + -0x148) = lVar27;
        *(undefined1 **)(puVar9 + -0x140) = puVar9 + -0x10;
        *(undefined **)(puVar9 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar21 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar28 + 0x18),*(undefined4 *)(lVar28 + 0x1c),
                                 *(undefined4 *)(lVar28 + 0x20),_UNK_033f8144,
                                 *(undefined8 *)(lVar28 + 0x10),0,0);
        uVar21 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar21,10,uRam0000000003d5e7a8);
        uVar21 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar21,*(undefined8 *)(lVar28 + 0x58),uRam0000000003d5e6e0);
        uVar21 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar21,1,uRam0000000003d5e888);
        lVar22 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar21,auVar38._0_8_,uRam0000000003d5e850);
        if ((lVar22 != 0) && (*(char *)(lVar22 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar22 + 0x30) = *(undefined8 *)(lVar28 + 0x10);
        }
        return;
      }
    }
    uVar21 = func_0x00f78b24();
    auVar38 = func_0x00f78ac0(uVar21,0);
    puVar10 = puVar9 + -0x30;
    puVar32 = puVar9 + -0x30;
    *(undefined1 **)(puVar9 + -0x30) = puVar9 + -0x10;
    *(undefined **)(puVar9 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar27 = *(long *)(auVar38._0_8_ + 0x28);
    auVar38._8_8_ = auVar38._8_8_;
    auVar38._0_8_ = lVar27;
    if (lVar27 == 0) {
      puVar18 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar38 = func_0x00f78af4();
    }
    else {
      puVar10 = puVar9 + -0x20;
      puVar32 = *(undefined1 **)(puVar9 + -0x30);
      puVar18 = *(undefined **)(puVar9 + -0x28);
    }
    uVar26 = auVar38._8_8_;
    uVar20 = auVar38._0_8_;
    puVar9 = puVar10 + -0x20;
    *(long *)(puVar10 + -0x20) = lVar22;
    *(ulong *)(puVar10 + -0x18) = uVar30;
    *(undefined1 **)(puVar10 + -0x10) = puVar32;
    *(undefined **)(puVar10 + -8) = puVar18;
    unaff_x29 = (undefined8 ***)(puVar10 + -0x10);
    uVar23 = 4;
    bVar24 = false;
    unaff_x30 = &UNK_0150bd10;
  } while( true );
  while( true ) {
    plVar19 = (long *)___cxa_begin_catch();
    lVar27 = *plVar19;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_d0,*puVar17);
    if (lVar27 != 0) break;
code_r0x0150b3e4:
    if (uVar20 != 0) {
      uVar30 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(uVar20,0,*puVar16);
      if ((uVar30 & 1) == 0) {
        uVar21 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(uVar20,1,*puVar16);
      }
      else {
        uVar21 = 1;
      }
      uVar30 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(uVar20,6,*puVar16);
      if ((uVar30 & 1) == 0) {
        uVar25 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(uVar20,8,*puVar16);
      }
      else {
        uVar25 = 1;
      }
      if (lVar22 != 0) {
        /*Atlas.UI.Screens.TopBarScreen$$ShowBackingPanelsIfRequired*/ func_0x0150ba38(lVar22,uVar21,uVar25);
        return;
      }
    }
code_r0x0150b47c:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x0150b4bc;
  }
  func_0x00f78ac0(lVar27,0);
code_r0x0150b4bc:
  auVar38 = __Unwind_Resume();
  *(long *)(auVar38._0_8_ + 0x28) = auVar38._8_8_;
  return;
}



// ============================================================
// RVA: 0x150b2c0 | Atlas.UI.Screens.TopBarScreen.ShowButtons
// ============================================================

void Atlas_UI_Screens_TopBarScreen__ShowButtons(long param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 uVar5;
  int extraout_w1;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x23;
  undefined1 auVar10 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar9 = (undefined8 *)0x3eb4000;
  if ((bRam0000000003eb4d5d & 1) == 0) {
    func_0x00f78a20(0x3d337e0);
    func_0x00f78a20(0x3d337e8);
    func_0x00f78a20(0x3d337f0);
    func_0x00f78a20(0x3d3dca0);
    func_0x00f78a20(0x3d3dca8);
    bRam0000000003eb4d5d = 1;
  }
  if (param_2 == 0) goto LAB_0150b47c;
  puVar9 = (undefined8 *)0x3d3dca0;
  unaff_x23 = (undefined8 *)0x3d337e0;
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$GetEnumerator*/ func_0x023df1f8(&uStack_88,param_2,uRam0000000003d3dca8);
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  uStack_60 = uStack_78;
  while (uVar3 = /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$MoveNext*/ func_0x01f694e8(&uStack_70,uRam0000000003d337e8), (uVar3 & 1) != 0) {
    if (param_3 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x150b47c);
      (*pcVar2)();
    }
    uVar1 = (uint)uStack_60;
    lVar7 = (long)(int)(uint)uStack_60;
    uVar3 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(param_3,lVar7,uRam0000000003d3dca0);
    if ((uVar3 & 1) == 0) {
      if (uVar1 < 9) {
        uVar5 = *(undefined4 *)(&UNK_033f869c + lVar7 * 4);
      }
      else {
        uVar5 = 0xffffffff;
      }
      /*Atlas.UI.Screens.TopBarScreen$$RequestElementVisible*/ func_0x0150bc48(param_1,uVar5,1,1);
    }
  }
  /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_70,uRam0000000003d337e0);
  do {
    if (param_3 != 0) {
      uVar3 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(param_3,0,*puVar9);
      if ((uVar3 & 1) == 0) {
        uVar8 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(param_3,1,*puVar9);
      }
      else {
        uVar8 = 1;
      }
      uVar3 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(param_3,6,*puVar9);
      if ((uVar3 & 1) == 0) {
        uVar6 = /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$Contains*/ func_0x023dea6c(param_3,8,*puVar9);
      }
      else {
        uVar6 = 1;
      }
      if (param_1 != 0) {
        /*Atlas.UI.Screens.TopBarScreen$$ShowBackingPanelsIfRequired*/ func_0x0150ba38(param_1,uVar8,uVar6);
        return;
      }
    }
LAB_0150b47c:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x0150b4bc;
    plVar4 = (long *)___cxa_begin_catch();
    lVar7 = *plVar4;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<TopBarManager.TopBarButton>$$Dispose*/ func_0x01f694e4(&uStack_70,*unaff_x23);
  } while (lVar7 == 0);
  func_0x00f78ac0(lVar7,0);
code_r0x0150b4bc:
  auVar10 = __Unwind_Resume();
  *(long *)(auVar10._0_8_ + 0x28) = auVar10._8_8_;
  return;
}



// ============================================================
// RVA: 0x150b5b8 | Atlas.UI.Screens.TopBarScreen.RequestButtonVisible
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen__RequestButtonVisible
               (undefined8 param_1,uint param_2,int param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 unaff_x19;
  ulong uVar13;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar14;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar15;
  undefined *unaff_x30;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  
  auVar3._8_8_ = param_4;
  auVar3._0_8_ = unaff_x20;
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = unaff_x20;
  auVar22._8_8_ = unaff_x19;
  auVar22._0_8_ = param_1;
  auVar1._8_8_ = unaff_x19;
  auVar1._0_8_ = param_1;
  if (param_2 < 9) {
    uVar9 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)param_2 * 4);
    auVar22 = auVar1;
    auVar3 = auVar2;
  }
  else {
    uVar9 = 0xffffffff;
  }
  do {
    uVar13 = auVar22._8_8_;
    lVar7 = auVar22._0_8_;
    *(long *)((long)register0x00000008 + -0x20) = auVar3._0_8_;
    *(ulong *)((long)register0x00000008 + -0x18) = uVar13;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    uVar8 = (uint)uVar9;
    if (uVar8 == 0xffffffff) {
      return;
    }
    lVar10 = *(long *)(lVar7 + 0x70);
    if (lVar10 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar13 = uVar9;
      if (uVar8 < *(uint *)(lVar10 + 0x18)) {
        uVar12 = 2;
        if (param_3 == 0) {
          uVar12 = 0;
        }
        *(undefined4 *)(lVar10 + (long)(int)uVar8 * 0x60 + 0x5c) = uVar12;
        if ((auVar3._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(lVar7,uVar9);
        }
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        lVar10 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar11 = *(long *)(lVar7 + 0x70);
        if (lVar11 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar11 + 0x18) <= uVar8) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar8;
        lVar11 = lVar11 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar11 + 0x20);
        unaff_x22 = *(long *)(lVar11 + 0x28);
        uVar6 = *(undefined8 *)(lVar11 + 0x30);
        uVar18 = *(undefined8 *)(lVar11 + 0x48);
        uVar17 = *(undefined8 *)(lVar11 + 0x40);
        *(undefined8 *)((long)register0x00000008 + -0xe8) = *(undefined8 *)(lVar11 + 0x38);
        *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar6;
        *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar18;
        *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar17;
        lVar10 = *(long *)(lVar11 + 0x50);
        iVar14 = *(int *)(lVar11 + 0x58);
        iVar5 = *(int *)(lVar11 + 0x5c);
        unaff_x23 = *(long *)(lVar11 + 0x60);
        unaff_x24 = *(long *)(lVar11 + 0x68);
        uVar6 = *(undefined8 *)(lVar11 + 0x70);
        *(undefined8 *)((long)register0x00000008 + -0xf8) = *(undefined8 *)(lVar11 + 0x78);
        *(undefined8 *)((long)register0x00000008 + -0x100) = uVar6;
        if (iVar5 == iVar14) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
          if (iVar5 == 0) {
            return;
          }
          if (lVar10 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar10,iVar14 == 2,0);
            return;
          }
        }
        else if (iVar14 == 2) {
          if (iVar5 == 0) {
            if (unaff_x24 == 0) goto code_r0x0150c7d4;
            uVar17 = *(undefined8 *)(lVar11 + 0x38);
            uVar6 = *(undefined8 *)(lVar11 + 0x30);
            uVar19 = *(undefined8 *)(lVar11 + 0x48);
            uVar18 = *(undefined8 *)(lVar11 + 0x40);
            *(undefined8 *)((long)register0x00000008 + -0x118) = uVar17;
            *(undefined8 *)((long)register0x00000008 + -0x120) = uVar6;
            *(undefined8 *)((long)register0x00000008 + -0x108) = uVar19;
            *(undefined8 *)((long)register0x00000008 + -0x110) = uVar18;
            uVar21 = *(undefined8 *)(lVar11 + 0x78);
            uVar20 = *(undefined8 *)(lVar11 + 0x70);
            *(undefined8 *)((long)register0x00000008 + -0x128) = uVar21;
            *(undefined8 *)((long)register0x00000008 + -0x130) = uVar20;
            *(undefined8 *)((long)register0x00000008 + -200) = unaff_x26;
            *(long *)((long)register0x00000008 + -0xc0) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar17;
            *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar6;
            *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar19;
            *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar18;
            *(long *)((long)register0x00000008 + -0x98) = lVar10;
            *(undefined8 *)((long)register0x00000008 + -0x90) = _UNK_033f8620;
            *(long *)((long)register0x00000008 + -0x88) = unaff_x23;
            *(long *)((long)register0x00000008 + -0x80) = unaff_x24;
            *(undefined8 *)((long)register0x00000008 + -0x70) = uVar21;
            *(undefined8 *)((long)register0x00000008 + -0x78) = uVar20;
            lVar11 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar11,(undefined1 *)((long)register0x00000008 + -200),
                            uRam0000000003d2a408);
            iVar14 = 1;
          }
          else {
            iVar14 = 2;
          }
code_r0x0150c72c:
          lVar11 = *(long *)(lVar7 + 0x70);
          if (lVar11 != 0) {
            if (*(uint *)(lVar11 + 0x18) <= uVar8) goto code_r0x0150c7d8;
            lVar11 = lVar11 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar11 + 0x20) = unaff_x26;
            *(long *)(lVar11 + 0x28) = unaff_x22;
            uVar6 = *(undefined8 *)((long)register0x00000008 + -0xf0);
            uVar18 = *(undefined8 *)((long)register0x00000008 + -0xd8);
            uVar17 = *(undefined8 *)((long)register0x00000008 + -0xe0);
            *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)((long)register0x00000008 + -0xe8);
            *(undefined8 *)(lVar11 + 0x30) = uVar6;
            *(undefined8 *)(lVar11 + 0x48) = uVar18;
            *(undefined8 *)(lVar11 + 0x40) = uVar17;
            *(long *)(lVar11 + 0x50) = lVar10;
            *(int *)(lVar11 + 0x58) = iVar14;
            *(int *)(lVar11 + 0x5c) = iVar5;
            *(long *)(lVar11 + 0x60) = unaff_x23;
            *(long *)(lVar11 + 0x68) = unaff_x24;
            uVar6 = *(undefined8 *)((long)register0x00000008 + -0x100);
            *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)((long)register0x00000008 + -0xf8);
            *(undefined8 *)(lVar11 + 0x70) = uVar6;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar14 != 0) goto code_r0x0150c72c;
          if (iVar5 != 2) {
            iVar14 = 0;
            goto code_r0x0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar11 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar11,1,0), unaff_x23 != 0)) {
            *(undefined8 *)((long)register0x00000008 + -200) = unaff_x26;
            *(long *)((long)register0x00000008 + -0xc0) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0xb0) =
                 *(undefined8 *)((long)register0x00000008 + -0xe8);
            *(undefined8 *)((long)register0x00000008 + -0xb8) =
                 *(undefined8 *)((long)register0x00000008 + -0xf0);
            *(undefined8 *)((long)register0x00000008 + -0xa0) =
                 *(undefined8 *)((long)register0x00000008 + -0xd8);
            *(undefined8 *)((long)register0x00000008 + -0xa8) =
                 *(undefined8 *)((long)register0x00000008 + -0xe0);
            *(long *)((long)register0x00000008 + -0x98) = lVar10;
            *(undefined8 *)((long)register0x00000008 + -0x90) = _UNK_033f8628;
            *(long *)((long)register0x00000008 + -0x88) = unaff_x23;
            *(long *)((long)register0x00000008 + -0x80) = unaff_x24;
            *(undefined8 *)((long)register0x00000008 + -0x70) =
                 *(undefined8 *)((long)register0x00000008 + -0xf8);
            *(undefined8 *)((long)register0x00000008 + -0x78) =
                 *(undefined8 *)((long)register0x00000008 + -0x100);
            lVar11 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar6 = func_0x00f78b24();
        auVar22 = func_0x00f78ac0(uVar6,0);
        lVar11 = auVar22._8_8_;
        *(undefined8 *)((long)register0x00000008 + -0x180) = unaff_x26;
        *(long *)((long)register0x00000008 + -0x178) = unaff_x25;
        *(long *)((long)register0x00000008 + -0x170) = unaff_x24;
        *(long *)((long)register0x00000008 + -0x168) = unaff_x23;
        *(long *)((long)register0x00000008 + -0x160) = unaff_x22;
        *(long *)((long)register0x00000008 + -0x158) = lVar7;
        *(ulong *)((long)register0x00000008 + -0x150) = uVar9;
        *(long *)((long)register0x00000008 + -0x148) = lVar10;
        *(undefined1 **)((long)register0x00000008 + -0x140) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)register0x00000008 + -0x138) =
             &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar6 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x1c),
                                *(undefined4 *)(lVar11 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar11 + 0x10),0,0);
        uVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar6,10,uRam0000000003d5e7a8);
        uVar6 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar6,*(undefined8 *)(lVar11 + 0x58),uRam0000000003d5e6e0);
        uVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar6,1,uRam0000000003d5e888);
        lVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar6,auVar22._0_8_,uRam0000000003d5e850);
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar11 + 0x10);
        }
        return;
      }
    }
    uVar6 = func_0x00f78b24();
    auVar22 = func_0x00f78ac0(uVar6,0);
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x30);
    puVar15 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar10 = *(long *)(auVar22._0_8_ + 0x28);
    auVar22._8_8_ = auVar22._8_8_;
    auVar22._0_8_ = lVar10;
    if (lVar10 == 0) {
      puVar16 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar22 = func_0x00f78af4();
    }
    else {
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x20);
      puVar15 = *(undefined1 **)((long)register0x00000008 + -0x30);
      puVar16 = *(undefined **)((long)register0x00000008 + -0x28);
    }
    register0x00000008 = (BADSPACEBASE *)(puVar4 + -0x20);
    *(long *)(puVar4 + -0x20) = lVar7;
    *(ulong *)(puVar4 + -0x18) = uVar13;
    *(undefined1 **)(puVar4 + -0x10) = puVar15;
    *(undefined **)(puVar4 + -8) = puVar16;
    unaff_x29 = puVar4 + -0x10;
    uVar9 = 4;
    param_3 = 0;
    unaff_x30 = &UNK_0150bd10;
    auVar3 = auVar22;
  } while( true );
}



// ============================================================
// RVA: 0x150b8a8 | Atlas.UI.Screens.TopBarScreen.SetNextTitle
// ============================================================

void Atlas_UI_Screens_TopBarScreen__SetNextTitle(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_2;
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



// ============================================================
// RVA: 0x150ba38 | Atlas.UI.Screens.TopBarScreen.ShowBackingPanelsIfRequired
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_TopBarScreen__ShowBackingPanelsIfRequired
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 extraout_w1;
  undefined8 uVar7;
  uint uVar6;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar12;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar13;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 **ppuVar14;
  undefined1 *puVar15;
  undefined *unaff_x30;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  auVar24._8_8_ = param_1;
  auVar24._0_8_ = param_1;
  auVar23._8_8_ = unaff_x19;
  auVar23._0_8_ = param_1;
  puVar15 = &stack0xfffffffffffffff0;
  lVar9 = *(long *)(param_1 + 0x70);
  uVar8 = param_3;
  if (lVar9 != 0) {
    uVar6 = *(uint *)(lVar9 + 0x18);
    uVar12 = unaff_x20;
    if (uVar6 != 0) {
      unaff_x19 = param_1;
      uVar12 = param_3;
      if (*(int *)(lVar9 + 0x5c) - 1U < 2) {
        uVar8 = 1;
      }
      else {
        if (uVar6 < 2) goto LAB_0150bb24;
        uVar8 = (ulong)(*(int *)(lVar9 + 0xbc) - 1U < 2);
      }
      if (4 < uVar6) {
        if (*(int *)(lVar9 + 0x1dc) - 1U < 2) {
          uVar12 = 1;
        }
        else {
          if (uVar6 < 6) goto LAB_0150bb24;
          uVar12 = (ulong)(*(int *)(lVar9 + 0x23c) - 1U < 2);
        }
        if (((int)uVar8 == 0) || ((param_2 & 1) != 0)) {
          if (((uint)uVar12 & ((uint)param_3 ^ 1)) != 1) {
            return param_1;
          }
          uVar7 = 7;
          uVar8 = 1;
          param_4 = 1;
          puVar3 = (undefined1 *)register0x00000008;
          param_3 = unaff_x20;
          puVar15 = unaff_x29;
          auVar24 = auVar23;
        }
        else {
          uVar7 = 6;
          param_4 = 1;
          unaff_x30 = &UNK_0150bae4;
          puVar3 = &stack0xffffffffffffffd0;
          unaff_x21 = uVar12;
        }
        goto code_r0x0150bc48;
      }
    }
LAB_0150bb24:
    uVar7 = func_0x00f78b24();
    func_0x00f78ac0(uVar7,0);
    unaff_x20 = uVar12;
  }
  param_3 = unaff_x20;
  auVar22 = func_0x00f78af4();
  ppuVar2 = &puStack_40;
  ppuVar14 = &puStack_40;
  puStack_38 = &Atlas_UI_TopBarManager__GetButtonElementState;
  lVar9 = *(long *)(auVar22._0_8_ + 0x28);
  auVar22._8_4_ = auVar22._8_4_;
  auVar22._0_8_ = lVar9;
  puStack_40 = puVar15;
  if (lVar9 == 0) {
    puVar16 = &Atlas_UI_Screens_TopBarScreen__GetElementState;
    auVar22 = func_0x00f78af4();
  }
  else {
    ppuVar2 = (undefined1 **)&stack0xffffffffffffffd0;
    puVar16 = &Atlas_UI_TopBarManager__GetButtonElementState;
    ppuVar14 = (undefined1 **)puVar15;
  }
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar14;
  *(undefined **)((long)ppuVar2 + -8) = puVar16;
  lVar9 = *(long *)(auVar22._0_8_ + 0x70);
  if (auVar22._8_4_ < 9) {
    uVar6 = *(uint *)(&UNK_033f869c + (long)(int)auVar22._8_4_ * 4);
  }
  else {
    uVar6 = 0xffffffff;
  }
  if (lVar9 == 0) {
    func_0x00f78af4();
  }
  else if (uVar6 < *(uint *)(lVar9 + 0x18)) {
    return (ulong)*(uint *)(lVar9 + (ulong)uVar6 * 0x60 + 0x58);
  }
  uVar7 = func_0x00f78b24();
  uVar12 = func_0x00f78ac0(uVar7,0);
  *(undefined1 **)((long)ppuVar2 + -0x20) = (undefined1 *)((long)ppuVar2 + -0x10);
  *(undefined **)((long)ppuVar2 + -0x18) = &Atlas_UI_TopBarManager__SetNextPanelEnabledVisuals;
  if (*(long *)(uVar12 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(uVar12 + 0x28) + 0x80) = extraout_w1;
    return uVar12;
  }
  lVar9 = func_0x00f78af4();
  puVar3 = (undefined1 *)((long)ppuVar2 + -0x40);
  *(ulong *)((long)ppuVar2 + -0x40) = param_3;
  *(ulong *)((long)ppuVar2 + -0x38) = unaff_x19;
  *(undefined1 **)((long)ppuVar2 + -0x30) = (undefined1 *)((long)ppuVar2 + -0x20);
  *(undefined **)((long)ppuVar2 + -0x28) = &Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
  puVar15 = (undefined1 *)((long)ppuVar2 + -0x30);
  auVar24._8_8_ = lVar9;
  auVar24._0_8_ = *(long *)(lVar9 + 0x28);
  if (*(long *)(lVar9 + 0x28) == 0) {
    unaff_x30 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
    auVar23 = func_0x00f78af4();
    uVar7 = auVar23._8_8_;
    auVar24._0_8_ = auVar23._0_8_;
  }
  else {
    uVar7 = 0;
    uVar8 = 0;
    param_4 = 1;
    unaff_x30 = &UNK_0150bbf4;
    puVar3 = (undefined1 *)((long)ppuVar2 + -0x40);
  }
code_r0x0150bc48:
  do {
    uVar5 = auVar24._8_8_;
    uVar12 = auVar24._0_8_;
    *(ulong *)(puVar3 + -0x20) = param_3;
    *(undefined8 *)(puVar3 + -0x18) = uVar5;
    *(undefined1 **)(puVar3 + -0x10) = puVar15;
    *(undefined **)(puVar3 + -8) = unaff_x30;
    uVar6 = (uint)uVar7;
    if (uVar6 == 0xffffffff) {
      return uVar12;
    }
    lVar9 = *(long *)(uVar12 + 0x70);
    if (lVar9 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar5 = uVar7;
      if (uVar6 < *(uint *)(lVar9 + 0x18)) {
        uVar11 = 2;
        if ((int)uVar8 == 0) {
          uVar11 = 0;
        }
        *(undefined4 *)(lVar9 + (long)(int)uVar6 * 0x60 + 0x5c) = uVar11;
        if ((param_4 & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(uVar12,uVar7);
        }
        *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
        *(long *)(puVar3 + -0x48) = unaff_x25;
        *(long *)(puVar3 + -0x40) = unaff_x24;
        *(long *)(puVar3 + -0x38) = unaff_x23;
        *(long *)(puVar3 + -0x30) = unaff_x22;
        *(ulong *)(puVar3 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
        *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        lVar9 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar10 = *(long *)(uVar12 + 0x70);
        if (lVar10 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar10 + 0x18) <= uVar6) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar6;
        lVar10 = lVar10 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar10 + 0x20);
        unaff_x22 = *(long *)(lVar10 + 0x28);
        uVar5 = *(undefined8 *)(lVar10 + 0x30);
        uVar18 = *(undefined8 *)(lVar10 + 0x48);
        uVar17 = *(undefined8 *)(lVar10 + 0x40);
        *(undefined8 *)(puVar3 + -0xe8) = *(undefined8 *)(lVar10 + 0x38);
        *(undefined8 *)(puVar3 + -0xf0) = uVar5;
        *(undefined8 *)(puVar3 + -0xd8) = uVar18;
        *(undefined8 *)(puVar3 + -0xe0) = uVar17;
        lVar9 = *(long *)(lVar10 + 0x50);
        iVar13 = *(int *)(lVar10 + 0x58);
        iVar1 = *(int *)(lVar10 + 0x5c);
        unaff_x23 = *(long *)(lVar10 + 0x60);
        unaff_x24 = *(long *)(lVar10 + 0x68);
        uVar5 = *(undefined8 *)(lVar10 + 0x70);
        *(undefined8 *)(puVar3 + -0xf8) = *(undefined8 *)(lVar10 + 0x78);
        *(undefined8 *)(puVar3 + -0x100) = uVar5;
        if (iVar1 == iVar13) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
          if ((int)uVar8 == 0) {
            return uVar8;
          }
          if (lVar9 != 0) {
            uVar8 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar9,iVar13 == 2,0);
            return uVar8;
          }
        }
        else if (iVar13 == 2) {
          if (iVar1 == 0) {
            if (unaff_x24 == 0) goto code_r0x0150c7d4;
            uVar17 = *(undefined8 *)(lVar10 + 0x38);
            uVar5 = *(undefined8 *)(lVar10 + 0x30);
            uVar19 = *(undefined8 *)(lVar10 + 0x48);
            uVar18 = *(undefined8 *)(lVar10 + 0x40);
            *(undefined8 *)(puVar3 + -0x118) = uVar17;
            *(undefined8 *)(puVar3 + -0x120) = uVar5;
            *(undefined8 *)(puVar3 + -0x108) = uVar19;
            *(undefined8 *)(puVar3 + -0x110) = uVar18;
            uVar21 = *(undefined8 *)(lVar10 + 0x78);
            uVar20 = *(undefined8 *)(lVar10 + 0x70);
            *(undefined8 *)(puVar3 + -0x128) = uVar21;
            *(undefined8 *)(puVar3 + -0x130) = uVar20;
            *(undefined8 *)(puVar3 + -200) = unaff_x26;
            *(long *)(puVar3 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar3 + -0xb0) = uVar17;
            *(undefined8 *)(puVar3 + -0xb8) = uVar5;
            *(undefined8 *)(puVar3 + -0xa0) = uVar19;
            *(undefined8 *)(puVar3 + -0xa8) = uVar18;
            *(long *)(puVar3 + -0x98) = lVar9;
            *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8620;
            *(long *)(puVar3 + -0x88) = unaff_x23;
            *(long *)(puVar3 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar3 + -0x70) = uVar21;
            *(undefined8 *)(puVar3 + -0x78) = uVar20;
            lVar10 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar10,puVar3 + -200,uRam0000000003d2a408);
            iVar13 = 1;
          }
          else {
            iVar13 = 2;
          }
code_r0x0150c72c:
          lVar10 = *(long *)(uVar12 + 0x70);
          if (lVar10 != 0) {
            if (*(uint *)(lVar10 + 0x18) <= uVar6) goto code_r0x0150c7d8;
            lVar10 = lVar10 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar10 + 0x20) = unaff_x26;
            *(long *)(lVar10 + 0x28) = unaff_x22;
            uVar5 = *(undefined8 *)(puVar3 + -0xf0);
            uVar18 = *(undefined8 *)(puVar3 + -0xd8);
            uVar17 = *(undefined8 *)(puVar3 + -0xe0);
            *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(puVar3 + -0xe8);
            *(undefined8 *)(lVar10 + 0x30) = uVar5;
            *(undefined8 *)(lVar10 + 0x48) = uVar18;
            *(undefined8 *)(lVar10 + 0x40) = uVar17;
            *(long *)(lVar10 + 0x50) = lVar9;
            *(int *)(lVar10 + 0x58) = iVar13;
            *(int *)(lVar10 + 0x5c) = iVar1;
            *(long *)(lVar10 + 0x60) = unaff_x23;
            *(long *)(lVar10 + 0x68) = unaff_x24;
            uVar5 = *(undefined8 *)(puVar3 + -0x100);
            *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(puVar3 + -0xf8);
            *(undefined8 *)(lVar10 + 0x70) = uVar5;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar13 != 0) goto code_r0x0150c72c;
          if (iVar1 != 2) {
            iVar13 = 0;
            goto code_r0x0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar10 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar3 + -200) = unaff_x26;
            *(long *)(puVar3 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xe8);
            *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0xf0);
            *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xd8);
            *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xe0);
            *(long *)(puVar3 + -0x98) = lVar9;
            *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8628;
            *(long *)(puVar3 + -0x88) = unaff_x23;
            *(long *)(puVar3 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0xf8);
            *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x100);
            lVar10 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar5 = func_0x00f78b24();
        auVar24 = func_0x00f78ac0(uVar5,0);
        lVar10 = auVar24._8_8_;
        *(undefined8 *)(puVar3 + -0x180) = unaff_x26;
        *(long *)(puVar3 + -0x178) = unaff_x25;
        *(long *)(puVar3 + -0x170) = unaff_x24;
        *(long *)(puVar3 + -0x168) = unaff_x23;
        *(long *)(puVar3 + -0x160) = unaff_x22;
        *(ulong *)(puVar3 + -0x158) = uVar12;
        *(undefined8 *)(puVar3 + -0x150) = uVar7;
        *(long *)(puVar3 + -0x148) = lVar9;
        *(undefined1 **)(puVar3 + -0x140) = puVar3 + -0x10;
        *(undefined **)(puVar3 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar7 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar10 + 0x18),*(undefined4 *)(lVar10 + 0x1c),
                                *(undefined4 *)(lVar10 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar10 + 0x10),0,0);
        uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar7,10,uRam0000000003d5e7a8);
        uVar7 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar7,*(undefined8 *)(lVar10 + 0x58),uRam0000000003d5e6e0);
        uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar7,1,uRam0000000003d5e888);
        uVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar7,auVar24._0_8_,uRam0000000003d5e850);
        if ((uVar8 != 0) && (*(char *)(uVar8 + 0xe8) != '\0')) {
          *(undefined8 *)(uVar8 + 0x30) = *(undefined8 *)(lVar10 + 0x10);
        }
        return uVar8;
      }
    }
    uVar7 = func_0x00f78b24();
    auVar24 = func_0x00f78ac0(uVar7,0);
    puVar4 = puVar3 + -0x30;
    puVar15 = puVar3 + -0x30;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar9 = *(long *)(auVar24._0_8_ + 0x28);
    auVar24._8_8_ = auVar24._8_8_;
    auVar24._0_8_ = lVar9;
    if (lVar9 == 0) {
      puVar16 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar24 = func_0x00f78af4();
    }
    else {
      puVar4 = puVar3 + -0x20;
      puVar15 = *(undefined1 **)(puVar3 + -0x30);
      puVar16 = *(undefined **)(puVar3 + -0x28);
    }
    param_4 = auVar24._8_8_;
    param_3 = auVar24._0_8_;
    *(ulong *)(puVar4 + -0x20) = uVar12;
    *(undefined8 *)(puVar4 + -0x18) = uVar5;
    *(undefined1 **)(puVar4 + -0x10) = puVar15;
    *(undefined **)(puVar4 + -8) = puVar16;
    puVar15 = puVar4 + -0x10;
    uVar7 = 4;
    uVar8 = 0;
    unaff_x30 = &UNK_0150bd10;
    puVar3 = puVar4 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x150bb50 | Atlas.UI.Screens.TopBarScreen.GetElementState
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_TopBarScreen__GetElementState
                (long param_1,uint param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 extraout_w1;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar11;
  undefined8 unaff_x28;
  undefined1 **ppuVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  lVar8 = *(long *)(param_1 + 0x70);
  if (param_2 < 9) {
    uVar7 = *(uint *)(&UNK_033f869c + (long)(int)param_2 * 4);
  }
  else {
    uVar7 = 0xffffffff;
  }
  if (lVar8 == 0) {
    func_0x00f78af4();
  }
  else if (uVar7 < *(uint *)(lVar8 + 0x18)) {
    return (ulong)*(uint *)(lVar8 + (ulong)uVar7 * 0x60 + 0x58);
  }
  uVar4 = func_0x00f78b24();
  uVar5 = func_0x00f78ac0(uVar4,0);
  puStack_30 = (undefined1 *)&puStack_20;
  puStack_18 = &Atlas_UI_TopBarManager__SetNextPanelEnabledVisuals;
  if (*(long *)(uVar5 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(uVar5 + 0x28) + 0x80) = extraout_w1;
    return uVar5;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  uVar5 = func_0x00f78af4();
  puVar2 = &stack0xffffffffffffffc0;
  puStack_28 = &Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
  ppuVar12 = &puStack_30;
  if (*(ulong *)(uVar5 + 0x28) == 0) {
    puVar14 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
    auVar20 = func_0x00f78af4();
  }
  else {
    auVar20._8_8_ = 0;
    auVar20._0_8_ = *(ulong *)(uVar5 + 0x28);
    param_3 = 0;
    param_4 = 1;
    puVar14 = &UNK_0150bbf4;
    puVar2 = &stack0xffffffffffffffc0;
    puStack_30 = (undefined1 *)&puStack_20;
  }
  do {
    uVar6 = auVar20._0_8_;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(ulong *)(puVar2 + -0x18) = uVar5;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar12;
    *(undefined **)(puVar2 + -8) = puVar14;
    uVar7 = auVar20._8_4_;
    if (uVar7 == 0xffffffff) {
      return uVar6;
    }
    lVar8 = *(long *)(uVar6 + 0x70);
    if (lVar8 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar5 = auVar20._8_8_;
      if (uVar7 < *(uint *)(lVar8 + 0x18)) {
        uVar10 = 2;
        if ((int)param_3 == 0) {
          uVar10 = 0;
        }
        *(undefined4 *)(lVar8 + (long)(int)uVar7 * 0x60 + 0x5c) = uVar10;
        if ((param_4 & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(uVar6,auVar20._8_8_);
        }
        *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
        *(long *)(puVar2 + -0x48) = unaff_x25;
        *(long *)(puVar2 + -0x40) = unaff_x24;
        *(long *)(puVar2 + -0x38) = unaff_x23;
        *(long *)(puVar2 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        lVar8 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar9 = *(long *)(uVar6 + 0x70);
        if (lVar9 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar9 + 0x18) <= uVar7) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar7;
        lVar9 = lVar9 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar9 + 0x20);
        unaff_x22 = *(long *)(lVar9 + 0x28);
        uVar4 = *(undefined8 *)(lVar9 + 0x30);
        uVar16 = *(undefined8 *)(lVar9 + 0x48);
        uVar15 = *(undefined8 *)(lVar9 + 0x40);
        *(undefined8 *)(puVar2 + -0xe8) = *(undefined8 *)(lVar9 + 0x38);
        *(undefined8 *)(puVar2 + -0xf0) = uVar4;
        *(undefined8 *)(puVar2 + -0xd8) = uVar16;
        *(undefined8 *)(puVar2 + -0xe0) = uVar15;
        lVar8 = *(long *)(lVar9 + 0x50);
        iVar11 = *(int *)(lVar9 + 0x58);
        iVar1 = *(int *)(lVar9 + 0x5c);
        unaff_x23 = *(long *)(lVar9 + 0x60);
        unaff_x24 = *(long *)(lVar9 + 0x68);
        uVar4 = *(undefined8 *)(lVar9 + 0x70);
        *(undefined8 *)(puVar2 + -0xf8) = *(undefined8 *)(lVar9 + 0x78);
        *(undefined8 *)(puVar2 + -0x100) = uVar4;
        if (iVar1 == iVar11) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
          if ((int)uVar5 == 0) {
            return uVar5;
          }
          if (lVar8 != 0) {
            uVar5 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar8,iVar11 == 2,0);
            return uVar5;
          }
        }
        else if (iVar11 == 2) {
          if (iVar1 == 0) {
            if (unaff_x24 == 0) goto code_r0x0150c7d4;
            uVar15 = *(undefined8 *)(lVar9 + 0x38);
            uVar4 = *(undefined8 *)(lVar9 + 0x30);
            uVar17 = *(undefined8 *)(lVar9 + 0x48);
            uVar16 = *(undefined8 *)(lVar9 + 0x40);
            *(undefined8 *)(puVar2 + -0x118) = uVar15;
            *(undefined8 *)(puVar2 + -0x120) = uVar4;
            *(undefined8 *)(puVar2 + -0x108) = uVar17;
            *(undefined8 *)(puVar2 + -0x110) = uVar16;
            uVar19 = *(undefined8 *)(lVar9 + 0x78);
            uVar18 = *(undefined8 *)(lVar9 + 0x70);
            *(undefined8 *)(puVar2 + -0x128) = uVar19;
            *(undefined8 *)(puVar2 + -0x130) = uVar18;
            *(undefined8 *)(puVar2 + -200) = unaff_x26;
            *(long *)(puVar2 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar2 + -0xb0) = uVar15;
            *(undefined8 *)(puVar2 + -0xb8) = uVar4;
            *(undefined8 *)(puVar2 + -0xa0) = uVar17;
            *(undefined8 *)(puVar2 + -0xa8) = uVar16;
            *(long *)(puVar2 + -0x98) = lVar8;
            *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8620;
            *(long *)(puVar2 + -0x88) = unaff_x23;
            *(long *)(puVar2 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x70) = uVar19;
            *(undefined8 *)(puVar2 + -0x78) = uVar18;
            lVar9 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar9,puVar2 + -200,uRam0000000003d2a408);
            iVar11 = 1;
          }
          else {
            iVar11 = 2;
          }
code_r0x0150c72c:
          lVar9 = *(long *)(uVar6 + 0x70);
          if (lVar9 != 0) {
            if (*(uint *)(lVar9 + 0x18) <= uVar7) goto code_r0x0150c7d8;
            lVar9 = lVar9 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar9 + 0x20) = unaff_x26;
            *(long *)(lVar9 + 0x28) = unaff_x22;
            uVar4 = *(undefined8 *)(puVar2 + -0xf0);
            uVar16 = *(undefined8 *)(puVar2 + -0xd8);
            uVar15 = *(undefined8 *)(puVar2 + -0xe0);
            *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)(puVar2 + -0xe8);
            *(undefined8 *)(lVar9 + 0x30) = uVar4;
            *(undefined8 *)(lVar9 + 0x48) = uVar16;
            *(undefined8 *)(lVar9 + 0x40) = uVar15;
            *(long *)(lVar9 + 0x50) = lVar8;
            *(int *)(lVar9 + 0x58) = iVar11;
            *(int *)(lVar9 + 0x5c) = iVar1;
            *(long *)(lVar9 + 0x60) = unaff_x23;
            *(long *)(lVar9 + 0x68) = unaff_x24;
            uVar4 = *(undefined8 *)(puVar2 + -0x100);
            *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(puVar2 + -0xf8);
            *(undefined8 *)(lVar9 + 0x70) = uVar4;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar11 != 0) goto code_r0x0150c72c;
          if (iVar1 != 2) {
            iVar11 = 0;
            goto code_r0x0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar9 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar2 + -200) = unaff_x26;
            *(long *)(puVar2 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0xe8);
            *(undefined8 *)(puVar2 + -0xb8) = *(undefined8 *)(puVar2 + -0xf0);
            *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xd8);
            *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0xe0);
            *(long *)(puVar2 + -0x98) = lVar8;
            *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8628;
            *(long *)(puVar2 + -0x88) = unaff_x23;
            *(long *)(puVar2 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0xf8);
            *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x100);
            lVar9 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar4 = func_0x00f78b24();
        auVar21 = func_0x00f78ac0(uVar4,0);
        lVar9 = auVar21._8_8_;
        *(undefined8 *)(puVar2 + -0x180) = unaff_x26;
        *(long *)(puVar2 + -0x178) = unaff_x25;
        *(long *)(puVar2 + -0x170) = unaff_x24;
        *(long *)(puVar2 + -0x168) = unaff_x23;
        *(long *)(puVar2 + -0x160) = unaff_x22;
        *(undefined1 (*) [16])(puVar2 + -0x158) = auVar20;
        *(long *)(puVar2 + -0x148) = lVar8;
        *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0x10;
        *(undefined **)(puVar2 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar4 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x1c),
                                *(undefined4 *)(lVar9 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar9 + 0x10),0,0);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,10,uRam0000000003d5e7a8);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar4,*(undefined8 *)(lVar9 + 0x58),uRam0000000003d5e6e0);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar4,1,uRam0000000003d5e888);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar4,auVar21._0_8_,uRam0000000003d5e850);
        if ((uVar5 != 0) && (*(char *)(uVar5 + 0xe8) != '\0')) {
          *(undefined8 *)(uVar5 + 0x30) = *(undefined8 *)(lVar9 + 0x10);
        }
        return uVar5;
      }
    }
    uVar4 = func_0x00f78b24();
    auVar20 = func_0x00f78ac0(uVar4,0);
    puVar3 = puVar2 + -0x30;
    puVar13 = puVar2 + -0x30;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar8 = *(long *)(auVar20._0_8_ + 0x28);
    auVar21._8_8_ = auVar20._8_8_;
    auVar21._0_8_ = lVar8;
    if (lVar8 == 0) {
      puVar14 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar21 = func_0x00f78af4();
    }
    else {
      puVar3 = puVar2 + -0x20;
      puVar13 = *(undefined1 **)(puVar2 + -0x30);
      puVar14 = *(undefined **)(puVar2 + -0x28);
    }
    param_4 = auVar21._8_8_;
    unaff_x20 = auVar21._0_8_;
    puVar2 = puVar3 + -0x20;
    *(ulong *)(puVar3 + -0x20) = uVar6;
    *(ulong *)(puVar3 + -0x18) = uVar5;
    *(undefined1 **)(puVar3 + -0x10) = puVar13;
    *(undefined **)(puVar3 + -8) = puVar14;
    ppuVar12 = (undefined1 **)(puVar3 + -0x10);
    auVar20._8_8_ = 4;
    auVar20._0_8_ = unaff_x20;
    param_3 = 0;
    puVar14 = &UNK_0150bd10;
    uVar5 = param_4;
  } while( true );
}



// ============================================================
// RVA: 0x150bc48 | Atlas.UI.Screens.TopBarScreen.RequestElementVisible
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen__RequestElementVisible
               (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar8;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined1 *puVar9;
  undefined8 unaff_x30;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  
  auVar16._8_8_ = param_4;
  auVar16._0_8_ = param_1;
  do {
    lVar3 = auVar16._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar4 = (uint)param_2;
    if (uVar4 == 0xffffffff) {
      return;
    }
    lVar5 = *(long *)(lVar3 + 0x70);
    if (lVar5 == 0) {
      func_0x00f78af4();
    }
    else {
      unaff_x19 = param_2;
      if (uVar4 < *(uint *)(lVar5 + 0x18)) {
        uVar7 = 2;
        if (param_3 == 0) {
          uVar7 = 0;
        }
        *(undefined4 *)(lVar5 + (long)(int)uVar4 * 0x60 + 0x5c) = uVar7;
        if ((auVar16._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(lVar3,param_2);
        }
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        lVar5 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar6 = *(long *)(lVar3 + 0x70);
        if (lVar6 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar6 + 0x18) <= uVar4) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar4;
        lVar6 = lVar6 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar6 + 0x20);
        unaff_x22 = *(long *)(lVar6 + 0x28);
        uVar2 = *(undefined8 *)(lVar6 + 0x30);
        uVar12 = *(undefined8 *)(lVar6 + 0x48);
        uVar11 = *(undefined8 *)(lVar6 + 0x40);
        *(undefined8 *)((long)register0x00000008 + -0xe8) = *(undefined8 *)(lVar6 + 0x38);
        *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar2;
        *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar12;
        *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
        lVar5 = *(long *)(lVar6 + 0x50);
        iVar8 = *(int *)(lVar6 + 0x58);
        iVar1 = *(int *)(lVar6 + 0x5c);
        unaff_x23 = *(long *)(lVar6 + 0x60);
        unaff_x24 = *(long *)(lVar6 + 0x68);
        uVar2 = *(undefined8 *)(lVar6 + 0x70);
        *(undefined8 *)((long)register0x00000008 + -0xf8) = *(undefined8 *)(lVar6 + 0x78);
        *(undefined8 *)((long)register0x00000008 + -0x100) = uVar2;
        if (iVar1 == iVar8) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
          if (iVar1 == 0) {
            return;
          }
          if (lVar5 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar5,iVar8 == 2,0);
            return;
          }
        }
        else if (iVar8 == 2) {
          if (iVar1 == 0) {
            if (unaff_x24 == 0) goto code_r0x0150c7d4;
            uVar11 = *(undefined8 *)(lVar6 + 0x38);
            uVar2 = *(undefined8 *)(lVar6 + 0x30);
            uVar13 = *(undefined8 *)(lVar6 + 0x48);
            uVar12 = *(undefined8 *)(lVar6 + 0x40);
            *(undefined8 *)((long)register0x00000008 + -0x118) = uVar11;
            *(undefined8 *)((long)register0x00000008 + -0x120) = uVar2;
            *(undefined8 *)((long)register0x00000008 + -0x108) = uVar13;
            *(undefined8 *)((long)register0x00000008 + -0x110) = uVar12;
            uVar15 = *(undefined8 *)(lVar6 + 0x78);
            uVar14 = *(undefined8 *)(lVar6 + 0x70);
            *(undefined8 *)((long)register0x00000008 + -0x128) = uVar15;
            *(undefined8 *)((long)register0x00000008 + -0x130) = uVar14;
            *(undefined8 *)((long)register0x00000008 + -200) = unaff_x26;
            *(long *)((long)register0x00000008 + -0xc0) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar11;
            *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar2;
            *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar13;
            *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar12;
            *(long *)((long)register0x00000008 + -0x98) = lVar5;
            *(undefined8 *)((long)register0x00000008 + -0x90) = _UNK_033f8620;
            *(long *)((long)register0x00000008 + -0x88) = unaff_x23;
            *(long *)((long)register0x00000008 + -0x80) = unaff_x24;
            *(undefined8 *)((long)register0x00000008 + -0x70) = uVar15;
            *(undefined8 *)((long)register0x00000008 + -0x78) = uVar14;
            lVar6 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar6,(undefined1 *)((long)register0x00000008 + -200),
                            uRam0000000003d2a408);
            iVar8 = 1;
          }
          else {
            iVar8 = 2;
          }
code_r0x0150c72c:
          lVar6 = *(long *)(lVar3 + 0x70);
          if (lVar6 != 0) {
            if (*(uint *)(lVar6 + 0x18) <= uVar4) goto code_r0x0150c7d8;
            lVar6 = lVar6 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar6 + 0x20) = unaff_x26;
            *(long *)(lVar6 + 0x28) = unaff_x22;
            uVar2 = *(undefined8 *)((long)register0x00000008 + -0xf0);
            uVar12 = *(undefined8 *)((long)register0x00000008 + -0xd8);
            uVar11 = *(undefined8 *)((long)register0x00000008 + -0xe0);
            *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)((long)register0x00000008 + -0xe8);
            *(undefined8 *)(lVar6 + 0x30) = uVar2;
            *(undefined8 *)(lVar6 + 0x48) = uVar12;
            *(undefined8 *)(lVar6 + 0x40) = uVar11;
            *(long *)(lVar6 + 0x50) = lVar5;
            *(int *)(lVar6 + 0x58) = iVar8;
            *(int *)(lVar6 + 0x5c) = iVar1;
            *(long *)(lVar6 + 0x60) = unaff_x23;
            *(long *)(lVar6 + 0x68) = unaff_x24;
            uVar2 = *(undefined8 *)((long)register0x00000008 + -0x100);
            *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)((long)register0x00000008 + -0xf8);
            *(undefined8 *)(lVar6 + 0x70) = uVar2;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar8 != 0) goto code_r0x0150c72c;
          if (iVar1 != 2) {
            iVar8 = 0;
            goto code_r0x0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar6 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,1,0), unaff_x23 != 0)) {
            *(undefined8 *)((long)register0x00000008 + -200) = unaff_x26;
            *(long *)((long)register0x00000008 + -0xc0) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0xb0) =
                 *(undefined8 *)((long)register0x00000008 + -0xe8);
            *(undefined8 *)((long)register0x00000008 + -0xb8) =
                 *(undefined8 *)((long)register0x00000008 + -0xf0);
            *(undefined8 *)((long)register0x00000008 + -0xa0) =
                 *(undefined8 *)((long)register0x00000008 + -0xd8);
            *(undefined8 *)((long)register0x00000008 + -0xa8) =
                 *(undefined8 *)((long)register0x00000008 + -0xe0);
            *(long *)((long)register0x00000008 + -0x98) = lVar5;
            *(undefined8 *)((long)register0x00000008 + -0x90) = _UNK_033f8628;
            *(long *)((long)register0x00000008 + -0x88) = unaff_x23;
            *(long *)((long)register0x00000008 + -0x80) = unaff_x24;
            *(undefined8 *)((long)register0x00000008 + -0x70) =
                 *(undefined8 *)((long)register0x00000008 + -0xf8);
            *(undefined8 *)((long)register0x00000008 + -0x78) =
                 *(undefined8 *)((long)register0x00000008 + -0x100);
            lVar6 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar2 = func_0x00f78b24();
        auVar16 = func_0x00f78ac0(uVar2,0);
        lVar6 = auVar16._8_8_;
        *(undefined8 *)((long)register0x00000008 + -0x180) = unaff_x26;
        *(long *)((long)register0x00000008 + -0x178) = unaff_x25;
        *(long *)((long)register0x00000008 + -0x170) = unaff_x24;
        *(long *)((long)register0x00000008 + -0x168) = unaff_x23;
        *(long *)((long)register0x00000008 + -0x160) = unaff_x22;
        *(long *)((long)register0x00000008 + -0x158) = lVar3;
        *(undefined8 *)((long)register0x00000008 + -0x150) = param_2;
        *(long *)((long)register0x00000008 + -0x148) = lVar5;
        *(undefined1 **)((long)register0x00000008 + -0x140) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)register0x00000008 + -0x138) =
             &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar2 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
                                *(undefined4 *)(lVar6 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar6 + 0x10),0,0);
        uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar2,10,uRam0000000003d5e7a8);
        uVar2 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar2,*(undefined8 *)(lVar6 + 0x58),uRam0000000003d5e6e0);
        uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar2,1,uRam0000000003d5e888);
        lVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar2,auVar16._0_8_,uRam0000000003d5e850);
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar6 + 0x10);
        }
        return;
      }
    }
    uVar2 = func_0x00f78b24();
    auVar16 = func_0x00f78ac0(uVar2,0);
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar5 = *(long *)(auVar16._0_8_ + 0x28);
    auVar16._8_8_ = auVar16._8_8_;
    auVar16._0_8_ = lVar5;
    if (lVar5 == 0) {
      puVar10 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar16 = func_0x00f78af4();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    }
    else {
      puVar9 = *(undefined1 **)((long)register0x00000008 + -0x30);
      puVar10 = *(undefined **)((long)register0x00000008 + -0x28);
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    }
    *(long *)((long)register0x00000008 + -0x20) = lVar3;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar9;
    *(undefined **)((long)register0x00000008 + -8) = puVar10;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar16._0_8_,4,0,auVar16._8_8_);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar16._0_8_,5,0,auVar16._8_8_);
    param_2 = 7;
    param_3 = 0;
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x10);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
  } while( true );
}



// ============================================================
// RVA: 0x150bcec | Atlas.UI.Screens.TopBarScreen.HideNextPanel
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0150bcb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen__HideNextPanel(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar7;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = param_1;
code_r0x0150bc48:
  uVar4 = auVar13._8_8_;
  lVar3 = auVar13._0_8_;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar3,4,0,uVar4);
  Atlas_UI_Screens_TopBarScreen__RequestElementVisible(lVar3,5,0,uVar4);
  unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar5 = *(long *)(lVar3 + 0x70);
  if (lVar5 == 0) {
    func_0x00f78af4();
  }
  else {
    unaff_x19 = 7;
    if (7 < *(uint *)(lVar5 + 0x18)) goto code_r0x0150bc78;
  }
  uVar2 = func_0x00f78b24();
  auVar13 = func_0x00f78ac0(uVar2,0);
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
  lVar5 = *(long *)(auVar13._0_8_ + 0x28);
  auVar13._8_8_ = auVar13._8_8_;
  auVar13._0_8_ = lVar5;
  unaff_x20 = lVar3;
  if (lVar5 == 0) {
    unaff_x30 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
    auVar13 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
  }
  else {
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x30);
    unaff_x30 = *(code **)((long)register0x00000008 + -0x28);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
  }
  goto code_r0x0150bc48;
code_r0x0150bc78:
  *(undefined4 *)(lVar5 + 0x2fc) = 0;
  if ((uVar4 & 1) == 0) {
    /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(lVar3,7);
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  lVar5 = 0x3eb4000;
  if ((bRam0000000003eb4d5b & 1) == 0) {
    func_0x00f78a20(0x3d2a408);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d5b = 1;
  }
  lVar6 = *(long *)(lVar3 + 0x70);
  if (lVar6 == 0) goto code_r0x0150c7d4;
  if (*(uint *)(lVar6 + 0x18) < 8) goto code_r0x0150c7d8;
  unaff_x25 = 7;
  unaff_x26 = *(undefined8 *)(lVar6 + 0x2c0);
  unaff_x22 = *(long *)(lVar6 + 0x2c8);
  uVar2 = *(undefined8 *)(lVar6 + 0x2d0);
  uVar9 = *(undefined8 *)(lVar6 + 0x2e8);
  uVar8 = *(undefined8 *)(lVar6 + 0x2e0);
  *(undefined8 *)((long)register0x00000008 + -0xe8) = *(undefined8 *)(lVar6 + 0x2d8);
  *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar2;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar9;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar8;
  lVar5 = *(long *)(lVar6 + 0x2f0);
  iVar7 = *(int *)(lVar6 + 0x2f8);
  iVar1 = *(int *)(lVar6 + 0x2fc);
  unaff_x23 = *(long *)(lVar6 + 0x300);
  unaff_x24 = *(long *)(lVar6 + 0x308);
  uVar2 = *(undefined8 *)(lVar6 + 0x310);
  *(undefined8 *)((long)register0x00000008 + -0xf8) = *(undefined8 *)(lVar6 + 0x318);
  *(undefined8 *)((long)register0x00000008 + -0x100) = uVar2;
  if (iVar1 == iVar7) {
code_r0x0150c768:
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
    if (iVar1 == 0) {
      return;
    }
    if (lVar5 != 0) {
      /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar5,iVar7 == 2,0);
      return;
    }
  }
  else if (iVar7 == 2) {
    if (iVar1 == 0) {
      if (unaff_x24 == 0) goto code_r0x0150c7d4;
      uVar8 = *(undefined8 *)(lVar6 + 0x2d8);
      uVar2 = *(undefined8 *)(lVar6 + 0x2d0);
      uVar10 = *(undefined8 *)(lVar6 + 0x2e8);
      uVar9 = *(undefined8 *)(lVar6 + 0x2e0);
      *(undefined8 *)((long)register0x00000008 + -0x118) = uVar8;
      *(undefined8 *)((long)register0x00000008 + -0x120) = uVar2;
      *(undefined8 *)((long)register0x00000008 + -0x108) = uVar10;
      *(undefined8 *)((long)register0x00000008 + -0x110) = uVar9;
      uVar12 = *(undefined8 *)(lVar6 + 0x318);
      uVar11 = *(undefined8 *)(lVar6 + 0x310);
      *(undefined8 *)((long)register0x00000008 + -0x128) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0x130) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -200) = unaff_x26;
      *(long *)((long)register0x00000008 + -0xc0) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar8;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar2;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar10;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar9;
      *(long *)((long)register0x00000008 + -0x98) = lVar5;
      *(undefined8 *)((long)register0x00000008 + -0x90) = _UNK_033f8620;
      *(long *)((long)register0x00000008 + -0x88) = unaff_x23;
      *(long *)((long)register0x00000008 + -0x80) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0x78) = uVar11;
      lVar6 = unaff_x24;
code_r0x0150c724:
      /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar6,(undefined1 *)((long)register0x00000008 + -200),uRam0000000003d2a408);
      iVar7 = 1;
    }
    else {
      iVar7 = 2;
    }
code_r0x0150c72c:
    lVar6 = *(long *)(lVar3 + 0x70);
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) < 8) goto code_r0x0150c7d8;
      *(undefined8 *)(lVar6 + 0x2c0) = unaff_x26;
      *(long *)(lVar6 + 0x2c8) = unaff_x22;
      uVar2 = *(undefined8 *)((long)register0x00000008 + -0xf0);
      uVar9 = *(undefined8 *)((long)register0x00000008 + -0xd8);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0xe0);
      *(undefined8 *)(lVar6 + 0x2d8) = *(undefined8 *)((long)register0x00000008 + -0xe8);
      *(undefined8 *)(lVar6 + 0x2d0) = uVar2;
      *(undefined8 *)(lVar6 + 0x2e8) = uVar9;
      *(undefined8 *)(lVar6 + 0x2e0) = uVar8;
      *(long *)(lVar6 + 0x2f0) = lVar5;
      *(int *)(lVar6 + 0x2f8) = iVar7;
      *(int *)(lVar6 + 0x2fc) = iVar1;
      *(long *)(lVar6 + 0x300) = unaff_x23;
      *(long *)(lVar6 + 0x308) = unaff_x24;
      uVar2 = *(undefined8 *)((long)register0x00000008 + -0x100);
      *(undefined8 *)(lVar6 + 0x318) = *(undefined8 *)((long)register0x00000008 + -0xf8);
      *(undefined8 *)(lVar6 + 0x310) = uVar2;
      goto code_r0x0150c768;
    }
  }
  else {
    if (iVar7 != 0) goto code_r0x0150c72c;
    if (iVar1 != 2) {
      iVar7 = 0;
      goto code_r0x0150c72c;
    }
    if (((unaff_x22 != 0) && (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar6 != 0)) &&
       (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,1,0), unaff_x23 != 0)) {
      *(undefined8 *)((long)register0x00000008 + -200) = unaff_x26;
      *(long *)((long)register0x00000008 + -0xc0) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)((long)register0x00000008 + -0xe8);
      *(undefined8 *)((long)register0x00000008 + -0xb8) =
           *(undefined8 *)((long)register0x00000008 + -0xf0);
      *(undefined8 *)((long)register0x00000008 + -0xa0) =
           *(undefined8 *)((long)register0x00000008 + -0xd8);
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0xe0);
      *(long *)((long)register0x00000008 + -0x98) = lVar5;
      *(undefined8 *)((long)register0x00000008 + -0x90) = _UNK_033f8628;
      *(long *)((long)register0x00000008 + -0x88) = unaff_x23;
      *(long *)((long)register0x00000008 + -0x80) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)((long)register0x00000008 + -0xf8);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x100);
      lVar6 = unaff_x23;
      goto code_r0x0150c724;
    }
  }
code_r0x0150c7d4:
  func_0x00f78af4();
code_r0x0150c7d8:
  uVar2 = func_0x00f78b24();
  auVar13 = func_0x00f78ac0(uVar2,0);
  lVar6 = auVar13._8_8_;
  *(undefined8 *)((long)register0x00000008 + -0x180) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x178) = unaff_x25;
  *(long *)((long)register0x00000008 + -0x170) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x168) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x160) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x158) = lVar3;
  *(undefined8 *)((long)register0x00000008 + -0x150) = 7;
  *(long *)((long)register0x00000008 + -0x148) = lVar5;
  *(undefined1 **)((long)register0x00000008 + -0x140) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x138) =
       &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
  if ((bRam0000000003eb4d55 & 1) == 0) {
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e7d0);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d5e888);
    bRam0000000003eb4d55 = 1;
  }
  uVar2 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
                          *(undefined4 *)(lVar6 + 0x20),_UNK_033f8144,*(undefined8 *)(lVar6 + 0x10),
                          0,0);
  uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar2,10,uRam0000000003d5e7a8);
  uVar2 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar2,*(undefined8 *)(lVar6 + 0x58),uRam0000000003d5e6e0);
  uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar2,1,uRam0000000003d5e888);
  lVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar2,auVar13._0_8_,uRam0000000003d5e850);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
    *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar6 + 0x10);
  }
  return;
}



// ============================================================
// RVA: 0x150bd88 | Atlas.UI.Screens.TopBarScreen.HideAll
// ============================================================

void Atlas_UI_Screens_TopBarScreen__HideAll(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(param_1,iVar1,0,param_2);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 9);
  return;
}



// ============================================================
// RVA: 0x150be10 | Atlas.UI.Screens.TopBarScreen.ReLayoutTitle
// ============================================================

/* WARNING: Possible PIC construction at 0x032d2ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d30d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032d3978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x032d30dc) */
/* WARNING: Removing unreachable block (ram,0x032d30ec) */
/* WARNING: Removing unreachable block (ram,0x032d30f4) */
/* WARNING: Removing unreachable block (ram,0x032d30fc) */
/* WARNING: Removing unreachable block (ram,0x032d3108) */
/* WARNING: Removing unreachable block (ram,0x032d3110) */
/* WARNING: Removing unreachable block (ram,0x032d3118) */
/* WARNING: Removing unreachable block (ram,0x032d3124) */
/* WARNING: Removing unreachable block (ram,0x032d3168) */
/* WARNING: Removing unreachable block (ram,0x032d3188) */
/* WARNING: Removing unreachable block (ram,0x032d3190) */
/* WARNING: Removing unreachable block (ram,0x032d3198) */
/* WARNING: Removing unreachable block (ram,0x032d31a4) */
/* WARNING: Removing unreachable block (ram,0x032d31ac) */
/* WARNING: Removing unreachable block (ram,0x032d31b4) */
/* WARNING: Removing unreachable block (ram,0x032d31c0) */
/* WARNING: Removing unreachable block (ram,0x032d3204) */
/* WARNING: Removing unreachable block (ram,0x032d2edc) */
/* WARNING: Removing unreachable block (ram,0x032d2eec) */
/* WARNING: Removing unreachable block (ram,0x026f609c) */
/* WARNING: Removing unreachable block (ram,0x026f60c4) */
/* WARNING: Removing unreachable block (ram,0x026f60e4) */
/* WARNING: Removing unreachable block (ram,0x026f60ec) */
/* WARNING: Removing unreachable block (ram,0x026f6108) */
/* WARNING: Removing unreachable block (ram,0x026f6110) */
/* WARNING: Removing unreachable block (ram,0x026f612c) */
/* WARNING: Removing unreachable block (ram,0x026f6140) */
/* WARNING: Removing unreachable block (ram,0x026f6148) */
/* WARNING: Removing unreachable block (ram,0x026f614c) */
/* WARNING: Removing unreachable block (ram,0x026f6160) */
/* WARNING: Removing unreachable block (ram,0x026f6168) */
/* WARNING: Removing unreachable block (ram,0x026f6180) */
/* WARNING: Removing unreachable block (ram,0x026f61ac) */
/* WARNING: Removing unreachable block (ram,0x026f61d4) */
/* WARNING: Removing unreachable block (ram,0x026f61fc) */
/* WARNING: Removing unreachable block (ram,0x026f6204) */
/* WARNING: Removing unreachable block (ram,0x026f6220) */
/* WARNING: Removing unreachable block (ram,0x026f6208) */
/* WARNING: Removing unreachable block (ram,0x026f6224) */
/* WARNING: Removing unreachable block (ram,0x026f623c) */
/* WARNING: Removing unreachable block (ram,0x026f621c) */
/* WARNING: Removing unreachable block (ram,0x026f6250) */
/* WARNING: Removing unreachable block (ram,0x026f6280) */
/* WARNING: Removing unreachable block (ram,0x026f62a8) */
/* WARNING: Removing unreachable block (ram,0x026f62b0) */
/* WARNING: Removing unreachable block (ram,0x026f62cc) */
/* WARNING: Removing unreachable block (ram,0x026f62b4) */
/* WARNING: Removing unreachable block (ram,0x026f62d0) */
/* WARNING: Removing unreachable block (ram,0x026f62e8) */
/* WARNING: Removing unreachable block (ram,0x026f62c8) */
/* WARNING: Removing unreachable block (ram,0x026f62fc) */
/* WARNING: Removing unreachable block (ram,0x026f632c) */
/* WARNING: Removing unreachable block (ram,0x026f6354) */
/* WARNING: Removing unreachable block (ram,0x026f635c) */
/* WARNING: Removing unreachable block (ram,0x026f6378) */
/* WARNING: Removing unreachable block (ram,0x026f6360) */
/* WARNING: Removing unreachable block (ram,0x026f637c) */
/* WARNING: Removing unreachable block (ram,0x026f6394) */
/* WARNING: Removing unreachable block (ram,0x026f6374) */
/* WARNING: Removing unreachable block (ram,0x026f63a8) */
/* WARNING: Removing unreachable block (ram,0x026f63d8) */
/* WARNING: Removing unreachable block (ram,0x026f6400) */
/* WARNING: Removing unreachable block (ram,0x026f6408) */
/* WARNING: Removing unreachable block (ram,0x026f6424) */
/* WARNING: Removing unreachable block (ram,0x026f640c) */
/* WARNING: Removing unreachable block (ram,0x026f6428) */
/* WARNING: Removing unreachable block (ram,0x026f6440) */
/* WARNING: Removing unreachable block (ram,0x026f6420) */
/* WARNING: Removing unreachable block (ram,0x026f6454) */
/* WARNING: Removing unreachable block (ram,0x026f6500) */
/* WARNING: Removing unreachable block (ram,0x026f6524) */
/* WARNING: Removing unreachable block (ram,0x026f654c) */
/* WARNING: Removing unreachable block (ram,0x026f6554) */
/* WARNING: Removing unreachable block (ram,0x026f6560) */
/* WARNING: Removing unreachable block (ram,0x026f6568) */
/* WARNING: Removing unreachable block (ram,0x026f6594) */
/* WARNING: Removing unreachable block (ram,0x026f6574) */
/* WARNING: Removing unreachable block (ram,0x026f6580) */
/* WARNING: Removing unreachable block (ram,0x026f65a0) */
/* WARNING: Removing unreachable block (ram,0x026f65b4) */
/* WARNING: Removing unreachable block (ram,0x026f6698) */
/* WARNING: Removing unreachable block (ram,0x026f672c) */
/* WARNING: Removing unreachable block (ram,0x026f66b0) */
/* WARNING: Removing unreachable block (ram,0x026f66c4) */
/* WARNING: Removing unreachable block (ram,0x026f66cc) */
/* WARNING: Removing unreachable block (ram,0x026f66d8) */
/* WARNING: Removing unreachable block (ram,0x026f66e0) */
/* WARNING: Removing unreachable block (ram,0x026f670c) */
/* WARNING: Removing unreachable block (ram,0x026f66ec) */
/* WARNING: Removing unreachable block (ram,0x026f66f8) */
/* WARNING: Removing unreachable block (ram,0x026f6718) */
/* WARNING: Removing unreachable block (ram,0x026f65e0) */
/* WARNING: Removing unreachable block (ram,0x026f65f4) */
/* WARNING: Removing unreachable block (ram,0x026f65fc) */
/* WARNING: Removing unreachable block (ram,0x026f6608) */
/* WARNING: Removing unreachable block (ram,0x026f6610) */
/* WARNING: Removing unreachable block (ram,0x026f663c) */
/* WARNING: Removing unreachable block (ram,0x026f661c) */
/* WARNING: Removing unreachable block (ram,0x026f6628) */
/* WARNING: Removing unreachable block (ram,0x026f664c) */
/* WARNING: Removing unreachable block (ram,0x026f6478) */
/* WARNING: Removing unreachable block (ram,0x026f6490) */
/* WARNING: Removing unreachable block (ram,0x026f6498) */
/* WARNING: Removing unreachable block (ram,0x026f64a4) */
/* WARNING: Removing unreachable block (ram,0x026f64ac) */
/* WARNING: Removing unreachable block (ram,0x026f64d8) */
/* WARNING: Removing unreachable block (ram,0x026f64b8) */
/* WARNING: Removing unreachable block (ram,0x026f64c4) */
/* WARNING: Removing unreachable block (ram,0x026f64e4) */
/* WARNING: Removing unreachable block (ram,0x026f6188) */
/* WARNING: Removing unreachable block (ram,0x032d397c) */

ulong Atlas_UI_Screens_TopBarScreen__ReLayoutTitle(undefined8 param_1)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong uVar18;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 **ppuVar19;
  undefined *puVar20;
  undefined1 auVar21 [12];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4d52 & 1) == 0) {
    func_0x00f78a20(0x3d2c9a8);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d41340);
    bRam0000000003eb4d52 = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41340);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) {
    uVar8 = func_0x00f78af4();
    puStack_38 = &Atlas_UI_TopBarManager___ctor;
    puStack_40 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4d4f & 1) == 0) {
      func_0x00f78a20(0x3d29338);
      func_0x00f78a20(0x3d1f8d0);
      func_0x00f78a20(0x3d25320);
      bRam0000000003eb4d4f = 1;
    }
    if (((*(ushort *)(/*Atlas.UI.TopBarManager_TypeInfo*/ lRam0000000003d25320 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.TopBarManager_TypeInfo*/ lRam0000000003d25320 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar17 = func_0x00f78a34(/*Atlas.UI.TopBarManager.TopBarDelegate[]_TypeInfo*/ uRam0000000003d1f8d0,**(undefined4 **)(/*Atlas.UI.TopBarManager_TypeInfo*/ lRam0000000003d25320 + 0xb8));
    *(undefined8 *)(uVar8 + 0x30) = uVar17;
    uVar17 = func_0x00f78aec(/*Atlas.UI.TopBarManager.ScreenButtonRequest_TypeInfo*/ uRam0000000003d29338);
    /*Atlas.UI.TopBarManager.ScreenButtonRequest$$.ctor*/ func_0x0156b598(uVar17,0);
    *(undefined8 *)(uVar8 + 0x38) = uVar17;
    return uVar8;
  }
  plVar6 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar5 + 0x80),0);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else if (*plVar6 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
    plVar6 = (long *)0x0;
  }
  if ((bRam0000000003eb70f3 & 1) == 0) {
    func_0x00f78a20(0x3d22df0,plVar6,uRam0000000003d2c9a8);
    bRam0000000003eb70f3 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec2d40 & 1) == 0) {
    func_0x00f78a20(0x3d22df0,0);
    func_0x00f78a20(0x3d3ef80);
    func_0x00f78a20(0x3d3ef88);
    bRam0000000003ec2d40 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (((**(long **)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xb8) == 0) ||
      (lVar5 = /*UnityEngine.UI.ObjectPool<object>$$Get*/ func_0x026f5fbc(**(long **)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xb8),uRam0000000003d3ef80),
      lVar5 == 0)) || (*(long **)(lVar5 + 0x10) = plVar6, plVar6 == (long *)0x0)) {
    puVar20 = &UnityEngine_UI_LayoutRebuilder__Rebuild;
    auVar21 = func_0x00f78af4();
  }
  else {
    uVar3 = (**(code **)(*plVar6 + 0x158))(plVar6,*(undefined8 *)(*plVar6 + 0x160));
    *(undefined4 *)(lVar5 + 0x18) = uVar3;
    auVar21._8_4_ = 1;
    auVar21._0_8_ = lVar5;
    puVar20 = &UNK_032d2edc;
  }
  uVar7 = auVar21._0_8_;
  ppuVar19 = &puStack_40;
  uVar8 = uVar7;
  puStack_40 = &stack0xfffffffffffffff0;
  puStack_38 = puVar20;
  if ((bRam0000000003ec2d41 & 1) == 0) {
    func_0x00f78a20(0x3d634d8);
    func_0x00f78a20(0x3d634e0);
    func_0x00f78a20(0x3d634e8);
    func_0x00f78a20(0x3d634f0);
    func_0x00f78a20(0x3d27de0);
    func_0x00f78a20(0x3d41588);
    uVar8 = func_0x00f78a20(0x3d1eaf0);
    bRam0000000003ec2d41 = 1;
  }
  if (auVar21._8_4_ != 1) {
    return uVar8;
  }
  uVar14 = *(undefined8 *)(uVar7 + 0x10);
  uVar17 = 0x3d27de0;
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
  lVar5 = plVar6[2];
  if (lVar5 == 0) {
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      plVar6 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
    }
    unaff_x22 = *plVar6;
    lVar5 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Component>_TypeInfo*/ uRam0000000003d1eaf0);
    /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(lVar5,unaff_x22,uRam0000000003d634d8,uRam0000000003d41588);
    *(long *)(*(long *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8) + 0x10) = lVar5;
  }
  /*UnityEngine.UI.LayoutRebuilder$$PerformLayoutCalculation*/ func_0x032d3238(uVar7,uVar14,lVar5);
  plVar6 = *(long **)(uVar7 + 0x10);
  if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar13 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
  uVar8 = plVar13[3];
  if (uVar8 == 0) {
    if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      plVar13 = *(long **)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8);
    }
    unaff_x22 = *plVar13;
    uVar8 = func_0x00f78aec(/*UnityEngine.Events.UnityAction<Component>_TypeInfo*/ uRam0000000003d1eaf0);
    /*UnityEngine.Events.UnityAction<object>$$.ctor*/ func_0x01b7eaa8(uVar8,unaff_x22,uRam0000000003d634e0,uRam0000000003d41588);
    *(ulong *)(*(long *)(/*UnityEngine.UI.LayoutRebuilder.<>c_TypeInfo*/ lRam0000000003d27de0 + 0xb8) + 0x18) = uVar8;
  }
  puVar20 = &UNK_032d30dc;
  puVar2 = &stack0xffffffffffffff90;
  uVar9 = uVar7;
  plVar13 = plVar6;
  uVar18 = uVar8;
  do {
    plVar12 = plVar6;
    *(long *)(puVar2 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = uVar17;
    *(long *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = uVar18;
    *(long **)(puVar2 + -0x20) = plVar13;
    *(ulong *)(puVar2 + -0x18) = uVar9;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar19;
    *(undefined **)(puVar2 + -8) = puVar20;
    ppuVar19 = (undefined1 **)(puVar2 + -0x10);
    if ((bRam0000000003ec2d42 & 1) == 0) {
      func_0x00f78a20(0x3d19778);
      func_0x00f78a20(0x3d222b0);
      func_0x00f78a20(0x3d22df0);
      func_0x00f78a20(0x3d398f8);
      func_0x00f78a20(0x3d39900);
      func_0x00f78a20(0x3d1d6c0);
      func_0x00f78a20(0x3d3a1c0);
      func_0x00f78a20(0x3d3a1c8);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d24188);
      func_0x00f78a20(0x3d247e0);
      func_0x00f78a20(0x3d25458);
      func_0x00f78a20(0x3d41590);
      bRam0000000003ec2d42 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar12,0,0);
    if ((uVar9 & 1) != 0) {
      return uVar9;
    }
    if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x22 = /*UnityEngine.UI.ListPool<RectMask2D>$$Get*/ func_0x0233df3c(uRam0000000003d398f8);
    uVar17 = /*UnityEngine.UI.ILayoutController_var*/ uRam0000000003d19778;
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar17,0);
    uVar17 = unaff_x26;
    uVar14 = unaff_x27;
    if (plVar12 == (long *)0x0) {
code_r0x032d3918:
      func_0x00f78af4();
      unaff_x26 = uVar17;
      unaff_x27 = uVar14;
    }
    else {
      /*UnityEngine.Component$$GetComponents*/ func_0x03227d78(plVar12,uVar10,unaff_x22,0);
      if (((*(ushort *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.LayoutRebuilder_TypeInfo*/ lRam0000000003d22df0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.UI.LayoutRebuilder$$StripDisabledBehavioursFromList*/ func_0x032d2d00(unaff_x22);
      if (unaff_x22 == 0) goto code_r0x032d3918;
      uVar9 = (ulong)*(uint *)(unaff_x22 + 0x18);
      if ((int)*(uint *)(unaff_x22 + 0x18) < 1) {
code_r0x032d3994:
        if (((*(ushort *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.UI.ListPool<Component>_TypeInfo*/ lRam0000000003d1d6c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar5 = lRam0000000003d39900;
        uVar17 = *(undefined8 *)(puVar2 + -0x30);
        uVar14 = *(undefined8 *)(puVar2 + -0x40);
        uVar10 = *(undefined8 *)(puVar2 + -0x38);
        *(undefined8 *)(puVar2 + -0x40) = uVar14;
        *(undefined8 *)(puVar2 + -0x38) = uVar10;
        *(undefined8 *)(puVar2 + -0x30) = uVar17;
        *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        lVar11 = *(long *)(lRam0000000003d39900 + 0x18);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
        uVar1 = *(ushort *)(lVar11 + 0x132);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar11);
          uVar1 = *(ushort *)(lVar11 + 0x132);
        }
        if ((uVar1 >> 10 & 1) != 0) {
          lVar11 = *(long *)(lVar5 + 0x18);
          if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar11);
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
          if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
            func_0x00fac028(lVar11);
          }
          if (*(int *)(lVar11 + 0xe0) == 0) {
            lVar11 = *(long *)(lVar5 + 0x18);
            if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar11);
            }
            lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
            if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
              func_0x00fac028(lVar11);
            }
            func_0x00f78ad0(lVar11);
          }
        }
        lVar11 = *(long *)(lVar5 + 0x18);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar11 = **(long **)(lVar11 + 0xb8);
        if (lVar11 != 0) {
          lVar16 = *(long *)(lVar5 + 0x18);
          uVar1 = *(ushort *)(lVar16 + 0x132);
          lVar15 = lVar16;
          if ((uVar1 & 1) == 0) {
            func_0x00fac028(lVar16);
            lVar15 = *(long *)(lVar5 + 0x18);
            uVar1 = *(ushort *)(lVar15 + 0x132);
          }
          UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar16 + 0xc0) + 0x18);
          if ((uVar1 & 1) == 0) {
            *(code **)(puVar2 + -0x48) = UNRECOVERED_JUMPTABLE;
            func_0x00fac028(lVar15);
            UNRECOVERED_JUMPTABLE = *(code **)(puVar2 + -0x48);
          }
                    /* WARNING: Could not recover jumptable at 0x0233e1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar8 = (*UNRECOVERED_JUMPTABLE)
                            (lVar11,unaff_x22,*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x18));
          return uVar8;
        }
        lVar11 = func_0x00f78af4();
        *(undefined8 *)(puVar2 + -0x90) = uVar14;
        *(undefined8 *)(puVar2 + -0x88) = uVar10;
        *(undefined8 *)(puVar2 + -0x80) = uVar17;
        *(undefined8 *)(puVar2 + -0x78) = 0;
        *(long *)(puVar2 + -0x70) = lVar5;
        *(long *)(puVar2 + -0x68) = unaff_x22;
        *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x10;
        *(undefined **)(puVar2 + -0x58) = &UnityEngine_UI_ListPool_object____cctor;
        lVar5 = *(long *)(lVar11 + 0x18);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        uVar17 = func_0x00f78aec(lVar5);
        lVar15 = *(long *)(lVar11 + 0x18);
        uVar1 = *(ushort *)(lVar15 + 0x132);
        lVar5 = lVar15;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar15);
          lVar5 = *(long *)(lVar11 + 0x18);
          uVar1 = *(ushort *)(lVar5 + 0x132);
        }
        UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x30);
        lVar15 = lVar5;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar5);
          lVar15 = *(long *)(lVar11 + 0x18);
          uVar1 = *(ushort *)(lVar15 + 0x132);
        }
        uVar14 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar15);
        }
        (*UNRECOVERED_JUMPTABLE)(uVar17,0,uVar14,*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x30));
        lVar5 = *(long *)(lVar11 + 0x18);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        uVar14 = func_0x00f78aec(lVar5);
        lVar15 = *(long *)(lVar11 + 0x18);
        uVar1 = *(ushort *)(lVar15 + 0x132);
        lVar5 = lVar15;
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar15);
          lVar5 = *(long *)(lVar11 + 0x18);
          uVar1 = *(ushort *)(lVar5 + 0x132);
        }
        UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(lVar15 + 0xc0) + 0x40);
        if ((uVar1 & 1) == 0) {
          func_0x00fac028(lVar5);
        }
        uVar8 = (*UNRECOVERED_JUMPTABLE)
                          (uVar14,0,uVar17,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x40));
        lVar5 = *(long *)(lVar11 + 0x18);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          uVar8 = func_0x00fac028(lVar5);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
          uVar8 = func_0x00fac028(lVar5);
        }
        **(undefined8 **)(lVar5 + 0xb8) = uVar14;
        return uVar8;
      }
      lVar5 = 4;
      unaff_x26 = 0x3d222b0;
      unaff_x27 = 0x3d41590;
      do {
        if ((uVar9 & 0xffffffff) <= lVar5 - 4U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar11 = func_0x00f78adc(*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + lVar5 * 8),
                                 /*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
        if (lVar11 != 0) {
          if ((ulong)*(uint *)(unaff_x22 + 0x18) <= lVar5 - 4U) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar17 = unaff_x26;
          uVar14 = unaff_x27;
          if (uVar8 == 0) goto code_r0x032d3918;
          /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(uVar8,*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + lVar5 * 8),
                          uRam0000000003d41590);
        }
        uVar9 = (ulong)*(int *)(unaff_x22 + 0x18);
        lVar11 = lVar5 + -3;
        lVar5 = lVar5 + 1;
      } while (lVar11 < (long)uVar9);
      if (0 < *(int *)(unaff_x22 + 0x18)) {
        unaff_x28 = 4;
        do {
          uVar18 = unaff_x28 - 4;
          if ((uVar9 & 0xffffffff) <= uVar18) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar5 = func_0x00f78adc(*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + unaff_x28 * 8),
                                  /*UnityEngine.UI.ILayoutSelfController_TypeInfo*/ uRam0000000003d222b0);
          if (lVar5 == 0) {
            if (*(uint *)(unaff_x22 + 0x18) <= uVar18) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar6 = *(long **)(*(long *)(unaff_x22 + 0x10) + unaff_x28 * 8);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar6,0);
            if ((iVar4 == 0) || (plVar6 == (long *)0x0)) {
code_r0x032d388c:
              if (*(uint *)(unaff_x22 + 0x18) <= uVar18) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
            }
            else {
              if ((*(byte *)(*plVar6 + 300) < *(byte *)(/*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0 + 300)) ||
                 (*(long *)(*(long *)(*plVar6 + 200) +
                            (ulong)*(byte *)(/*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0 + 300) * 8 + -8) !=
                  /*UnityEngine.UI.ScrollRect_TypeInfo*/ lRam0000000003d247e0)) goto code_r0x032d388c;
              lVar5 = plVar6[3];
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,plVar12,0);
              if (iVar4 == 0) goto code_r0x032d38b8;
              if (*(uint *)(unaff_x22 + 0x18) <= uVar18) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
            }
            uVar14 = 0x3d41590;
            uVar17 = 0x3d222b0;
            if (uVar8 == 0) goto code_r0x032d3918;
            /*UnityEngine.Events.UnityAction<object>$$Invoke*/ func_0x01b7eab8(uVar8,*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + unaff_x28 * 8),
                            uRam0000000003d41590);
          }
code_r0x032d38b8:
          uVar9 = (ulong)*(int *)(unaff_x22 + 0x18);
          lVar5 = unaff_x28 + -3;
          unaff_x28 = unaff_x28 + 1;
        } while (lVar5 < (long)uVar9);
      }
    }
    iVar4 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(plVar12,0);
    unaff_x25 = 0x3d1d6c0;
    if (iVar4 < 1) goto code_r0x032d3994;
    uVar17 = 0;
    unaff_x24 = 0x3d24188;
    plVar6 = (long *)/*UnityEngine.Transform$$GetChild*/ func_0x03277648(plVar12,0,0);
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else if (*plVar6 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
      plVar6 = (long *)0x0;
    }
    puVar20 = &UNK_032d397c;
    puVar2 = puVar2 + -0x60;
    uVar9 = uVar8;
    plVar13 = plVar12;
    uVar18 = uVar7;
  } while( true );
}



// ============================================================
// RVA: 0x150c07c | Atlas.UI.Screens.TopBarScreen.SetNextPanelEnabledVisuals
// ============================================================

void Atlas_UI_Screens_TopBarScreen__SetNextPanelEnabledVisuals(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x80) = param_2;
  return;
}



// ============================================================
// RVA: 0x150c084 | Atlas.UI.Screens.TopBarScreen.OnUpdate
// ============================================================

ulong Atlas_UI_Screens_TopBarScreen__OnUpdate(float param_1,long param_2)

{
  ulong uVar1;
  uint extraout_w1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4d51 & 1) == 0) {
    func_0x00f78a20(0x3d41340);
    func_0x00f78a20(0x3d77380);
    bRam0000000003eb4d51 = 1;
  }
  uVar1 = /*Core.UI2.UIScreen$$OnUpdate*/ func_0x02f8a624(param_1,param_2,0);
  fVar3 = *(float *)(param_2 + 0x7c);
  if (*(char *)(param_2 + 0x80) == '\0') {
    if (fVar3 <= 0.0) {
      return uVar1;
    }
    fVar4 = -5.0;
  }
  else {
    if (1.0 <= fVar3) {
      return uVar1;
    }
    fVar4 = 5.0;
  }
  *(float *)(param_2 + 0x7c) = param_1 * fVar4 + fVar3;
  fVar3 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
  *(float *)(param_2 + 0x7c) = fVar3;
  lVar2 = *(long *)(param_2 + 0x98);
  uStack_40 = 0;
  uStack_38 = 0;
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(1.0 - (fVar3 + 0.0),0x3f800000,0x3f800000,0x3f800000,&uStack_40,0);
  if (lVar2 != 0) {
    /*UnityEngine.Material$$SetVector*/ func_0x0323af1c((undefined4)uStack_40,uStack_40._4_4_,(undefined4)uStack_38,uStack_38._4_4_,
                    lVar2,/*STR('_Params')*/ uRam0000000003d77380,0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41340);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x78) != 0)) {
      uVar1 = /*UnityEngine.Animator$$set_speed*/ func_0x032108b0(fVar3,*(long *)(lVar2 + 0x78),0);
      return uVar1;
    }
  }
  func_0x00f78af4();
  if (8 < extraout_w1) {
    return 0xffffffff;
  }
  return (ulong)*(uint *)(&UNK_033f869c + (long)(int)extraout_w1 * 4);
}



// ============================================================
// RVA: 0x150c1c4 | Atlas.UI.Screens.TopBarScreen.GetElementType
// ============================================================

undefined4 Atlas_UI_Screens_TopBarScreen__GetElementType(undefined8 param_1,uint param_2)

{
  if (param_2 < 9) {
    return *(undefined4 *)(&UNK_033f869c + (long)(int)param_2 * 4);
  }
  return 0xffffffff;
}



// ============================================================
// RVA: 0x150c1e4 | Atlas.UI.Screens.TopBarScreen.CreateElement
// ============================================================

ulong Atlas_UI_Screens_TopBarScreen__CreateElement
                (undefined4 *param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                long *param_6,long *param_7,undefined8 param_8,undefined4 param_9,
                undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int extraout_w1;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = param_3;
  fVar8 = param_4;
  if ((bRam0000000003eb4d53 & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d64720);
    func_0x00f78a20(0x3d64728);
    func_0x00f78a20(0x3d29340);
    bRam0000000003eb4d53 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.Screens.TopBarScreen.<>c__DisplayClass18_0_TypeInfo*/ uRam0000000003d29340);
  /*Atlas.UI.Screens.TopBarScreen.<>c__DisplayClass18_0$$.ctor*/ func_0x0156b5a8(lVar1,0);
  if (lVar1 == 0) {
LAB_0150c398:
    func_0x00f78af4();
  }
  else {
    *(undefined8 *)(lVar1 + 0x10) = param_5;
    *(undefined4 *)(lVar1 + 0x18) = param_9;
    if ((param_6 != (long *)0x0) && (*param_6 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) goto LAB_0150c3a4;
    if (param_7 == (long *)0x0) goto LAB_0150c398;
    if (*param_7 == /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
      fVar6 = (float)/*UnityEngine.Transform$$get_localPosition*/ func_0x03275078(param_7,0);
      uVar2 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar2,lVar1,uRam0000000003d64720,0);
      uVar3 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
      uVar4 = /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar3,lVar1,uRam0000000003d64728,0);
      *param_1 = param_9;
      param_1[1] = 0;
      *(long **)(param_1 + 2) = param_6;
      *(long **)(param_1 + 4) = param_7;
      param_1[6] = fVar6;
      param_1[7] = fVar7;
      param_1[8] = fVar8;
      param_1[9] = param_2 + fVar6;
      param_1[10] = param_3 + fVar7;
      param_1[0xb] = param_4 + fVar8;
      *(undefined8 *)(param_1 + 0xc) = param_8;
      *(undefined8 *)(param_1 + 0xe) = 0;
      *(undefined8 *)(param_1 + 0x10) = param_10;
      *(undefined8 *)(param_1 + 0x12) = param_11;
      *(undefined8 *)(param_1 + 0x14) = uVar2;
      *(undefined8 *)(param_1 + 0x16) = uVar3;
      return uVar4;
    }
  }
  func_0x00f78e5c(param_7);
LAB_0150c3a4:
  func_0x00f78e5c(param_6);
  uVar5 = 2;
  if (extraout_w1 == 0) {
    uVar5 = 0;
  }
  return (ulong)uVar5;
}



// ============================================================
// RVA: 0x150c3ac | Atlas.UI.Screens.TopBarScreen.VisibleToElementState
// ============================================================

undefined4 Atlas_UI_Screens_TopBarScreen__VisibleToElementState(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x150c3bc | Atlas.UI.Screens.TopBarScreen.ForceButtonState
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen__ForceButtonState
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long unaff_x23;
  long unaff_x24;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar13 = 0x3eb4000;
  if ((bRam0000000003eb4d54 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d54 = 1;
  }
  uVar11 = (uint)param_2;
  if (uVar11 == 0xffffffff) {
    return;
  }
  uVar9 = 2;
  if ((int)param_3 == 0) {
    uVar9 = 0;
  }
  lVar10 = *(long *)(param_1 + 0x70);
  if (lVar10 == 0) {
LAB_0150c598:
    func_0x00f78af4();
  }
  else if (uVar11 < *(uint *)(lVar10 + 0x18)) {
    unaff_x26 = (long)(int)uVar11;
    lVar10 = lVar10 + unaff_x26 * 0x60;
    unaff_x27 = *(undefined8 *)(lVar10 + 0x20);
    lVar13 = *(long *)(lVar10 + 0x28);
    unaff_x23 = *(long *)(lVar10 + 0x30);
    uVar20 = *(undefined4 *)(lVar10 + 0x38);
    uVar21 = *(undefined4 *)(lVar10 + 0x3c);
    uVar22 = *(undefined4 *)(lVar10 + 0x40);
    uVar23 = *(undefined4 *)(lVar10 + 0x44);
    uVar24 = *(undefined4 *)(lVar10 + 0x48);
    uVar25 = *(undefined4 *)(lVar10 + 0x4c);
    unaff_x24 = *(long *)(lVar10 + 0x50);
    uStack_a8 = *(undefined8 *)(lVar10 + 0x68);
    uStack_b0 = *(undefined8 *)(lVar10 + 0x60);
    uStack_98 = *(undefined8 *)(lVar10 + 0x78);
    uStack_a0 = *(undefined8 *)(lVar10 + 0x70);
    if (((*(byte *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(unaff_x23,0,0);
    if (unaff_x23 != 0) {
      uVar3 = uVar20;
      uVar4 = uVar21;
      uVar5 = uVar22;
      if ((int)param_3 == 0) {
        uVar3 = uVar23;
        uVar4 = uVar24;
        uVar5 = uVar25;
      }
      /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(uVar3,uVar4,uVar5,unaff_x23,0);
      if ((lVar13 != 0) && (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar13,0), lVar10 != 0)) {
        unaff_x28 = 0x3d23000;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar10,param_3,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x24,0,0);
        if (iVar6 != 0) {
          if (unaff_x24 == 0) goto LAB_0150c598;
          /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(unaff_x24,param_3,0);
        }
        lVar10 = *(long *)(param_1 + 0x70);
        if (lVar10 != 0) {
          if (uVar11 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + unaff_x26 * 0x60;
            *(undefined8 *)(lVar10 + 0x20) = unaff_x27;
            *(long *)(lVar10 + 0x28) = lVar13;
            *(long *)(lVar10 + 0x30) = unaff_x23;
            *(undefined4 *)(lVar10 + 0x38) = uVar20;
            *(undefined4 *)(lVar10 + 0x3c) = uVar21;
            *(undefined4 *)(lVar10 + 0x40) = uVar22;
            *(undefined4 *)(lVar10 + 0x44) = uVar23;
            *(undefined4 *)(lVar10 + 0x48) = uVar24;
            *(undefined4 *)(lVar10 + 0x4c) = uVar25;
            *(long *)(lVar10 + 0x50) = unaff_x24;
            *(uint *)(lVar10 + 0x58) = uVar9;
            *(uint *)(lVar10 + 0x5c) = uVar9;
            *(undefined8 *)(lVar10 + 0x68) = uStack_a8;
            *(undefined8 *)(lVar10 + 0x60) = uStack_b0;
            *(undefined8 *)(lVar10 + 0x78) = uStack_98;
            *(undefined8 *)(lVar10 + 0x70) = uStack_a0;
            return;
          }
          goto LAB_0150c59c;
        }
      }
    }
    goto LAB_0150c598;
  }
LAB_0150c59c:
  uVar8 = func_0x00f78b24();
  auVar26 = func_0x00f78ac0(uVar8,0);
  uVar11 = auVar26._8_4_;
  puStack_b8 = &Atlas_UI_Screens_TopBarScreen__UpdateElement;
  uStack_110 = unaff_x28;
  uStack_108 = unaff_x27;
  lStack_100 = unaff_x26;
  uStack_f8 = (ulong)uVar9;
  lStack_f0 = unaff_x24;
  lStack_e8 = unaff_x23;
  lStack_e0 = lVar13;
  uStack_d8 = param_3;
  lStack_d0 = param_1;
  uStack_c8 = param_2;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d5b & 1) == 0) {
    func_0x00f78a20(0x3d2a408);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d5b = 1;
  }
  lVar13 = *(long *)(auVar26._0_8_ + 0x70);
  if (lVar13 == 0) goto code_r0x0150c7d4;
  if (*(uint *)(lVar13 + 0x18) <= uVar11) goto code_r0x0150c7d8;
  lVar13 = lVar13 + (long)(int)uVar11 * 0x60;
  uVar8 = *(undefined8 *)(lVar13 + 0x20);
  lVar1 = *(long *)(lVar13 + 0x28);
  uVar16 = *(undefined8 *)(lVar13 + 0x38);
  uVar14 = *(undefined8 *)(lVar13 + 0x30);
  uVar19 = *(undefined8 *)(lVar13 + 0x48);
  uVar18 = *(undefined8 *)(lVar13 + 0x40);
  lVar12 = *(long *)(lVar13 + 0x50);
  iVar6 = *(int *)(lVar13 + 0x58);
  iVar7 = *(int *)(lVar13 + 0x5c);
  lVar10 = *(long *)(lVar13 + 0x60);
  lVar2 = *(long *)(lVar13 + 0x68);
  uVar17 = *(undefined8 *)(lVar13 + 0x78);
  uVar15 = *(undefined8 *)(lVar13 + 0x70);
  if (iVar7 == iVar6) {
code_r0x0150c768:
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar12,0,0);
    if (iVar7 == 0) {
      return;
    }
    if (lVar12 != 0) {
      /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar12,iVar6 == 2,0);
      return;
    }
  }
  else if (iVar6 == 2) {
    if (iVar7 == 0) {
      if (lVar2 == 0) goto code_r0x0150c7d4;
      uStack_160 = *(undefined8 *)(lVar13 + 0x38);
      uStack_168 = *(undefined8 *)(lVar13 + 0x30);
      uStack_150 = *(undefined8 *)(lVar13 + 0x48);
      uStack_158 = *(undefined8 *)(lVar13 + 0x40);
      uStack_120 = *(undefined8 *)(lVar13 + 0x78);
      uStack_128 = *(undefined8 *)(lVar13 + 0x70);
      uStack_140 = _UNK_033f8620;
      lVar13 = lVar2;
code_r0x0150c724:
      uStack_178 = uVar8;
      lStack_170 = lVar1;
      lStack_148 = lVar12;
      lStack_138 = lVar10;
      lStack_130 = lVar2;
      /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar13,&uStack_178,uRam0000000003d2a408);
      iVar6 = 1;
    }
    else {
      iVar6 = 2;
    }
code_r0x0150c72c:
    lVar13 = *(long *)(auVar26._0_8_ + 0x70);
    if (lVar13 != 0) {
      if (*(uint *)(lVar13 + 0x18) <= uVar11) goto code_r0x0150c7d8;
      lVar13 = lVar13 + (long)(int)uVar11 * 0x60;
      *(undefined8 *)(lVar13 + 0x20) = uVar8;
      *(long *)(lVar13 + 0x28) = lVar1;
      *(undefined8 *)(lVar13 + 0x38) = uVar16;
      *(undefined8 *)(lVar13 + 0x30) = uVar14;
      *(undefined8 *)(lVar13 + 0x48) = uVar19;
      *(undefined8 *)(lVar13 + 0x40) = uVar18;
      *(long *)(lVar13 + 0x50) = lVar12;
      *(int *)(lVar13 + 0x58) = iVar6;
      *(int *)(lVar13 + 0x5c) = iVar7;
      *(long *)(lVar13 + 0x60) = lVar10;
      *(long *)(lVar13 + 0x68) = lVar2;
      *(undefined8 *)(lVar13 + 0x78) = uVar17;
      *(undefined8 *)(lVar13 + 0x70) = uVar15;
      goto code_r0x0150c768;
    }
  }
  else {
    if (iVar6 != 0) goto code_r0x0150c72c;
    if (iVar7 != 2) {
      iVar6 = 0;
      goto code_r0x0150c72c;
    }
    if (((lVar1 != 0) && (lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar1,0), lVar13 != 0)) &&
       (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,1,0), lVar10 != 0)) {
      uStack_140 = _UNK_033f8628;
      lVar13 = lVar10;
      uStack_168 = uVar14;
      uStack_160 = uVar16;
      uStack_158 = uVar18;
      uStack_150 = uVar19;
      uStack_128 = uVar15;
      uStack_120 = uVar17;
      goto code_r0x0150c724;
    }
  }
code_r0x0150c7d4:
  func_0x00f78af4();
code_r0x0150c7d8:
  uVar8 = func_0x00f78b24();
  auVar27 = func_0x00f78ac0(uVar8,0);
  lVar13 = auVar27._8_8_;
  if ((bRam0000000003eb4d55 & 1) == 0) {
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e7d0);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d5e888);
    bRam0000000003eb4d55 = 1;
  }
  uVar8 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar13 + 0x18),*(undefined4 *)(lVar13 + 0x1c),
                          *(undefined4 *)(lVar13 + 0x20),_UNK_033f8144,
                          *(undefined8 *)(lVar13 + 0x10),0,0);
  uVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar8,10,uRam0000000003d5e7a8);
  uVar8 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar8,*(undefined8 *)(lVar13 + 0x58),uRam0000000003d5e6e0);
  uVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar8,1,uRam0000000003d5e888);
  lVar10 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar8,auVar27._0_8_,uRam0000000003d5e850);
  if ((lVar10 != 0) && (*(char *)(lVar10 + 0xe8) != '\0')) {
    *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)(lVar13 + 0x10);
  }
  return;
}



// ============================================================
// RVA: 0x150c5a8 | Atlas.UI.Screens.TopBarScreen.UpdateElement
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen__UpdateElement(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000003eb4d5b & 1) == 0) {
    func_0x00f78a20(0x3d2a408);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4d5b = 1;
  }
  lVar6 = *(long *)(param_1 + 0x70);
  if (lVar6 == 0) goto LAB_0150c7d4;
  if (*(uint *)(lVar6 + 0x18) <= param_2) goto LAB_0150c7d8;
  lVar6 = lVar6 + (long)(int)param_2 * 0x60;
  uVar4 = *(undefined8 *)(lVar6 + 0x20);
  lVar1 = *(long *)(lVar6 + 0x28);
  uVar11 = *(undefined8 *)(lVar6 + 0x38);
  uVar9 = *(undefined8 *)(lVar6 + 0x30);
  uVar14 = *(undefined8 *)(lVar6 + 0x48);
  uVar13 = *(undefined8 *)(lVar6 + 0x40);
  lVar7 = *(long *)(lVar6 + 0x50);
  iVar8 = *(int *)(lVar6 + 0x58);
  iVar3 = *(int *)(lVar6 + 0x5c);
  lVar5 = *(long *)(lVar6 + 0x60);
  lVar2 = *(long *)(lVar6 + 0x68);
  uVar12 = *(undefined8 *)(lVar6 + 0x78);
  uVar10 = *(undefined8 *)(lVar6 + 0x70);
  if (iVar3 == iVar8) {
LAB_0150c768:
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
    if (iVar3 == 0) {
      return;
    }
    if (lVar7 != 0) {
      /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar7,iVar8 == 2,0);
      return;
    }
  }
  else if (iVar8 == 2) {
    if (iVar3 == 0) {
      if (lVar2 == 0) goto LAB_0150c7d4;
      uStack_b0 = *(undefined8 *)(lVar6 + 0x38);
      uStack_b8 = *(undefined8 *)(lVar6 + 0x30);
      uStack_a0 = *(undefined8 *)(lVar6 + 0x48);
      uStack_a8 = *(undefined8 *)(lVar6 + 0x40);
      uStack_70 = *(undefined8 *)(lVar6 + 0x78);
      uStack_78 = *(undefined8 *)(lVar6 + 0x70);
      uStack_90 = _UNK_033f8620;
      lVar6 = lVar2;
LAB_0150c724:
      uStack_c8 = uVar4;
      lStack_c0 = lVar1;
      lStack_98 = lVar7;
      lStack_88 = lVar5;
      lStack_80 = lVar2;
      /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar6,&uStack_c8,uRam0000000003d2a408);
      iVar8 = 1;
    }
    else {
      iVar8 = 2;
    }
LAB_0150c72c:
    lVar6 = *(long *)(param_1 + 0x70);
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= param_2) goto LAB_0150c7d8;
      lVar6 = lVar6 + (long)(int)param_2 * 0x60;
      *(undefined8 *)(lVar6 + 0x20) = uVar4;
      *(long *)(lVar6 + 0x28) = lVar1;
      *(undefined8 *)(lVar6 + 0x38) = uVar11;
      *(undefined8 *)(lVar6 + 0x30) = uVar9;
      *(undefined8 *)(lVar6 + 0x48) = uVar14;
      *(undefined8 *)(lVar6 + 0x40) = uVar13;
      *(long *)(lVar6 + 0x50) = lVar7;
      *(int *)(lVar6 + 0x58) = iVar8;
      *(int *)(lVar6 + 0x5c) = iVar3;
      *(long *)(lVar6 + 0x60) = lVar5;
      *(long *)(lVar6 + 0x68) = lVar2;
      *(undefined8 *)(lVar6 + 0x78) = uVar12;
      *(undefined8 *)(lVar6 + 0x70) = uVar10;
      goto LAB_0150c768;
    }
  }
  else {
    if (iVar8 != 0) goto LAB_0150c72c;
    if (iVar3 != 2) {
      iVar8 = 0;
      goto LAB_0150c72c;
    }
    if (((lVar1 != 0) && (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar1,0), lVar6 != 0)) &&
       (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,1,0), lVar5 != 0)) {
      uStack_90 = _UNK_033f8628;
      lVar6 = lVar5;
      uStack_b8 = uVar9;
      uStack_b0 = uVar11;
      uStack_a8 = uVar13;
      uStack_a0 = uVar14;
      uStack_78 = uVar10;
      uStack_70 = uVar12;
      goto LAB_0150c724;
    }
  }
LAB_0150c7d4:
  func_0x00f78af4();
LAB_0150c7d8:
  uVar4 = func_0x00f78b24();
  auVar15 = func_0x00f78ac0(uVar4,0);
  lVar6 = auVar15._8_8_;
  if ((bRam0000000003eb4d55 & 1) == 0) {
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e7d0);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d5e888);
    bRam0000000003eb4d55 = 1;
  }
  uVar4 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x1c),
                          *(undefined4 *)(lVar6 + 0x20),_UNK_033f8144,*(undefined8 *)(lVar6 + 0x10),
                          0,0);
  uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,10,uRam0000000003d5e7a8);
  uVar4 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar4,*(undefined8 *)(lVar6 + 0x58),uRam0000000003d5e6e0);
  uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar4,1,uRam0000000003d5e888);
  lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar4,auVar15._0_8_,uRam0000000003d5e850);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
    *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar6 + 0x10);
  }
  return;
}



// ============================================================
// RVA: 0x150c7e4 | Atlas.UI.Screens.TopBarScreen.AnimateInSlash
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen__AnimateInSlash(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb4d55 & 1) == 0) {
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e7d0);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d5e888);
    bRam0000000003eb4d55 = 1;
  }
  uVar1 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                          *(undefined4 *)(param_2 + 0x20),_UNK_033f8144,
                          *(undefined8 *)(param_2 + 0x10),0,0);
  uVar1 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar1,10,uRam0000000003d5e7a8);
  uVar1 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar1,*(undefined8 *)(param_2 + 0x58),uRam0000000003d5e6e0);
  uVar1 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar1,1,uRam0000000003d5e888);
  lVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar1,param_1,uRam0000000003d5e850);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) {
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_2 + 0x10);
  }
  return;
}



// ============================================================
// RVA: 0x150c8ec | Atlas.UI.Screens.TopBarScreen.AnimateOutSlash
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen__AnimateOutSlash(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb4d56 & 1) == 0) {
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e7d0);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d5e888);
    bRam0000000003eb4d56 = 1;
  }
  uVar1 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),
                          *(undefined4 *)(param_2 + 0x2c),_UNK_033f8144,
                          *(undefined8 *)(param_2 + 0x10),0,0);
  uVar1 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar1,10,uRam0000000003d5e7a8);
  uVar1 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar1,*(undefined8 *)(param_2 + 0x50),uRam0000000003d5e6e0);
  uVar1 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar1,1,uRam0000000003d5e888);
  lVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar1,param_1,uRam0000000003d5e850);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) {
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_2 + 0x10);
  }
  return;
}



// ============================================================
// RVA: 0x150c9f4 | Atlas.UI.Screens.TopBarScreen.AnimateInTitle
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen__AnimateInTitle(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000003eb4d57 & 1) == 0) {
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e7d0);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d5e888);
    func_0x00f78a20(0x3d41340);
    bRam0000000003eb4d57 = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41340);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x88) != 0)) {
    /*Core.Localisation.LocaliseTextBehaviour$$SetLocalisationKey*/ func_0x016516cc(*(long *)(lVar1 + 0x88),*(undefined8 *)(param_1 + 0x88),0);
    lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41340);
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x90) != 0)) {
      /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar1 + 0x90),*(undefined8 *)(param_1 + 0x90),0);
      Atlas_UI_Screens_TopBarScreen__ReLayoutTitle(param_1);
      uVar2 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                              *(undefined4 *)(param_2 + 0x20),_UNK_033f8144,
                              *(undefined8 *)(param_2 + 0x10),0,0);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar2,10,uRam0000000003d5e7a8);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar2,*(undefined8 *)(param_2 + 0x58),uRam0000000003d5e6e0);
      uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar2,1,uRam0000000003d5e888);
      lVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar2,param_1,uRam0000000003d5e850);
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      goto DG_Tweening_TweenSettingsExtensions__SetId_object_;
    }
  }
  auVar4 = func_0x00f78af4();
  lVar1 = auVar4._8_8_;
  if ((bRam0000000003eb4d58 & 1) == 0) {
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e7d0);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d5e888);
    bRam0000000003eb4d58 = 1;
  }
  uVar2 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar1 + 0x24),*(undefined4 *)(lVar1 + 0x28),
                          *(undefined4 *)(lVar1 + 0x2c),_UNK_033f8144,*(undefined8 *)(lVar1 + 0x10),
                          0,0);
  uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar2,10,uRam0000000003d5e7a8);
  uVar2 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar2,*(undefined8 *)(lVar1 + 0x50),uRam0000000003d5e6e0);
  uVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar2,1,uRam0000000003d5e888);
  lVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar2,auVar4._0_8_,uRam0000000003d5e850);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
DG_Tweening_TweenSettingsExtensions__SetId_object_:
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
    *(undefined8 *)(lVar3 + 0x30) = uVar2;
  }
  return;
}



// ============================================================
// RVA: 0x150cb64 | Atlas.UI.Screens.TopBarScreen.AnimateOutTitle
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen__AnimateOutTitle(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb4d58 & 1) == 0) {
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e7d0);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d5e888);
    bRam0000000003eb4d58 = 1;
  }
  uVar1 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),
                          *(undefined4 *)(param_2 + 0x2c),_UNK_033f8144,
                          *(undefined8 *)(param_2 + 0x10),0,0);
  uVar1 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar1,10,uRam0000000003d5e7a8);
  uVar1 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar1,*(undefined8 *)(param_2 + 0x50),uRam0000000003d5e6e0);
  uVar1 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar1,1,uRam0000000003d5e888);
  lVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar1,param_1,uRam0000000003d5e850);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) {
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_2 + 0x10);
  }
  return;
}



// ============================================================
// RVA: 0x150cc6c | Atlas.UI.Screens.TopBarScreen.AnimateInButton
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen__AnimateInButton(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb4d59 & 1) == 0) {
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e7d0);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d5e888);
    bRam0000000003eb4d59 = 1;
  }
  uVar1 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,_UNK_033f8144,*(undefined8 *)(param_2 + 0x10),0);
  uVar1 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar1,10,uRam0000000003d5e7a8);
  uVar1 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar1,*(undefined8 *)(param_2 + 0x58),uRam0000000003d5e6e0);
  uVar1 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar1,1,uRam0000000003d5e888);
  lVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar1,param_1,uRam0000000003d5e850);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) {
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_2 + 0x10);
  }
  return;
}



// ============================================================
// RVA: 0x150cd6c | Atlas.UI.Screens.TopBarScreen.AnimateOutButton
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen__AnimateOutButton(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb4d5a & 1) == 0) {
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e7d0);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d5e888);
    bRam0000000003eb4d5a = 1;
  }
  uVar1 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0,_UNK_033f8144,*(undefined8 *)(param_2 + 0x10),0);
  uVar1 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar1,10,uRam0000000003d5e7a8);
  uVar1 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar1,*(undefined8 *)(param_2 + 0x50),uRam0000000003d5e6e0);
  uVar1 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar1,1,uRam0000000003d5e888);
  lVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar1,param_1,uRam0000000003d5e850);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) {
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_2 + 0x10);
  }
  return;
}



// ============================================================
// RVA: 0x150ce6c | Atlas.UI.Screens.TopBarScreen.OnElementAnimatingOutComplete
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x150cee4 | Atlas.UI.Screens.TopBarScreen.OnElementAnimatingInComplete
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x150cf28 | Atlas.UI.Screens.TopBarScreen.IsElementTypeListed
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x150d068 | Atlas.UI.Screens.TopBarScreen.OnBeforeEnter
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen__OnBeforeEnter
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  undefined4 *unaff_x22;
  undefined4 *puVar18;
  long unaff_x23;
  long lVar19;
  long unaff_x24;
  long lVar20;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  int iVar21;
  long unaff_x28;
  undefined8 ****ppppuVar22;
  undefined1 *puVar23;
  code *pcVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  long lStack_450;
  ulong uStack_448;
  undefined8 ***pppuStack_440;
  code *pcStack_438;
  long lStack_430;
  long lStack_428;
  undefined4 *puStack_420;
  ulong uStack_418;
  long lStack_410;
  long lStack_408;
  undefined8 **ppuStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar17 = 0x3eb4000;
  if ((bRam0000000003eb4d5f & 1) == 0) {
    func_0x00f78a20(0x3d2a400);
    func_0x00f78a20(0x3d1b608);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5e510);
    func_0x00f78a20(0x3d5e518);
    func_0x00f78a20(0x3d5e520);
    func_0x00f78a20(0x3d5e528);
    func_0x00f78a20(0x3d5e530);
    func_0x00f78a20(0x3d5e538);
    func_0x00f78a20(0x3d5e540);
    func_0x00f78a20(0x3d5e548);
    func_0x00f78a20(0x3d5e4e0);
    func_0x00f78a20(0x3d5e4e8);
    func_0x00f78a20(0x3d5e4f0);
    func_0x00f78a20(0x3d5e4f8);
    func_0x00f78a20(0x3d5e500);
    func_0x00f78a20(0x3d5e508);
    func_0x00f78a20(0x3d25328);
    func_0x00f78a20(0x3d41340);
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d5f = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41348);
  uVar5 = 0x3d41348;
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) {
LAB_0150df74:
    func_0x00f78af4();
    lVar6 = unaff_x25;
    lVar13 = unaff_x27;
  }
  else {
    lVar20 = 0x3d41340;
    *(long *)(*(long *)(lVar4 + 0x10) + 0x28) = param_4;
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    uVar5 = 0x3d41348;
    unaff_x24 = 0x3d41340;
    if (lVar4 == 0) goto LAB_0150df74;
    puVar18 = (undefined4 *)0x3d1fa78;
    unaff_x23 = 0x3d5e000;
    lVar17 = *(long *)(lVar4 + 0x48);
    uVar5 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar5,param_4,uRam0000000003d5e4e0);
    unaff_x22 = (undefined4 *)0x3d1fa78;
    if (lVar17 == 0) goto LAB_0150df74;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar17,uVar5,0);
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    unaff_x24 = lVar20;
    if (lVar4 == 0) goto LAB_0150df74;
    unaff_x23 = 0x3d5e000;
    lVar17 = *(long *)(lVar4 + 0x50);
    uVar5 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar5,param_4,uRam0000000003d5e4e8);
    unaff_x22 = puVar18;
    if (lVar17 == 0) goto LAB_0150df74;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar17,uVar5,0);
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if (lVar4 == 0) goto LAB_0150df74;
    unaff_x23 = 0x3d5e000;
    lVar17 = *(long *)(lVar4 + 0x98);
    uVar5 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar5,param_4,uRam0000000003d5e4f0);
    if (lVar17 == 0) goto LAB_0150df74;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar17,uVar5,0);
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if (lVar4 == 0) goto LAB_0150df74;
    unaff_x23 = 0x3d5e000;
    lVar17 = *(long *)(lVar4 + 0xa0);
    uVar5 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar5,param_4,uRam0000000003d5e4f8);
    if (lVar17 == 0) goto LAB_0150df74;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar17,uVar5,0);
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if (lVar4 == 0) goto LAB_0150df74;
    unaff_x23 = 0x3d5e000;
    lVar17 = *(long *)(lVar4 + 0x60);
    uVar5 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar5,param_4,uRam0000000003d5e500);
    if (lVar17 == 0) goto LAB_0150df74;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar17,uVar5,0);
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if (lVar4 == 0) goto LAB_0150df74;
    unaff_x23 = 0x3d5e000;
    lVar17 = *(long *)(lVar4 + 0x68);
    uVar5 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar5,param_4,uRam0000000003d5e508);
    if (lVar17 == 0) goto LAB_0150df74;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar17,uVar5,0);
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if (lVar4 == 0) goto LAB_0150df74;
    unaff_x23 = 0x3d5e000;
    lVar17 = *(long *)(lVar4 + 0xa0);
    uVar5 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar5,param_4,uRam0000000003d5e548);
    if (lVar17 == 0) goto LAB_0150df74;
    /*Atlas.UI.UIAtlasButton$$add_Selected*/ func_0x015141a0(lVar17,uVar5,0);
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if (lVar4 == 0) goto LAB_0150df74;
    unaff_x23 = 0x3d5e000;
    lVar17 = *(long *)(lVar4 + 0xa0);
    uVar5 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar5,param_4,uRam0000000003d5e540);
    if (lVar17 == 0) goto LAB_0150df74;
    /*Atlas.UI.UIAtlasButton$$add_Deselected*/ func_0x015142e8(lVar17,uVar5,0);
    unaff_x28 = *(long *)(param_4 + 0x70);
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x48) == 0)) goto LAB_0150df74;
    lVar17 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar4 + 0x48),0);
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if ((lVar4 == 0) ||
       ((*(long *)(lVar4 + 0x48) == 0 ||
        (lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar4 + 0x48),0), lVar4 == 0)))) goto LAB_0150df74;
    uVar5 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar4,0,0);
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if (lVar4 == 0) goto LAB_0150df74;
    lVar20 = 0x3d1b608;
    lVar13 = 0x3d2a400;
    unaff_x22 = *(undefined4 **)(lVar4 + 0x48);
    uVar25 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,param_4,uRam0000000003d5e510,uRam0000000003d2a400);
    unaff_x24 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    lVar4 = 0x3d2a400;
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x24,param_4,uRam0000000003d5e528,uRam0000000003d2a400);
    param_7 = unaff_x22;
    Atlas_UI_Screens_TopBarScreen__CreateElement
              (&uStack_e8,uVar25,param_2,param_3,param_4,lVar17,uVar5,unaff_x22,0,unaff_x23,
               unaff_x24);
    unaff_x25 = lVar20;
    unaff_x26 = lVar13;
    unaff_x27 = lVar13;
    if (unaff_x28 == 0) goto LAB_0150df74;
    lVar6 = lVar20;
    if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_0150df78;
    *(undefined8 *)(unaff_x28 + 0x48) = uStack_c0;
    *(undefined8 *)(unaff_x28 + 0x40) = uStack_c8;
    *(undefined8 *)(unaff_x28 + 0x58) = uStack_b0;
    *(undefined8 *)(unaff_x28 + 0x50) = uStack_b8;
    *(undefined8 *)(unaff_x28 + 0x68) = uStack_a0;
    *(undefined8 *)(unaff_x28 + 0x60) = uStack_a8;
    *(undefined8 *)(unaff_x28 + 0x78) = uStack_90;
    *(undefined8 *)(unaff_x28 + 0x70) = uStack_98;
    *(undefined8 *)(unaff_x28 + 0x28) = uStack_e0;
    *(undefined8 *)(unaff_x28 + 0x20) = uStack_e8;
    *(undefined8 *)(unaff_x28 + 0x38) = uStack_d0;
    *(undefined8 *)(unaff_x28 + 0x30) = uStack_d8;
    unaff_x28 = *(long *)(param_4 + 0x70);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    uVar25 = (undefined4)uStack_d8;
    if ((lVar6 == 0) ||
       (unaff_x25 = 0x3d1b608, unaff_x26 = lVar4, unaff_x27 = 0x3d2a400,
       *(long *)(lVar6 + 0x50) == 0)) goto LAB_0150df74;
    unaff_x27 = 0x3d1b608;
    lVar17 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar6 + 0x50),0);
    unaff_x25 = 0x3d41340;
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if ((lVar6 == 0) ||
       ((*(long *)(lVar6 + 0x50) == 0 ||
        (lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar6 + 0x50),0), lVar6 == 0)))) goto LAB_0150df74;
    uVar5 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar6,0,0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if (lVar6 == 0) goto LAB_0150df74;
    unaff_x22 = *(undefined4 **)(lVar6 + 0x50);
    uVar26 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,param_4,uRam0000000003d5e510,uRam0000000003d2a400);
    unaff_x24 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x24,param_4,uRam0000000003d5e528,uRam0000000003d2a400);
    param_7 = unaff_x22;
    Atlas_UI_Screens_TopBarScreen__CreateElement
              (&uStack_148,uVar26,uVar25,param_3,param_4,lVar17,uVar5,unaff_x22,1,unaff_x23,
               unaff_x24);
    if (unaff_x28 == 0) goto LAB_0150df74;
    lVar6 = 0x3d41340;
    unaff_x26 = lVar13;
    lVar13 = lVar20;
    if ((*(uint *)(unaff_x28 + 0x18) & 0xfffffffe) == 0) goto LAB_0150df78;
    *(undefined8 *)(unaff_x28 + 0xa8) = uStack_120;
    *(undefined8 *)(unaff_x28 + 0xa0) = uStack_128;
    *(undefined8 *)(unaff_x28 + 0xb8) = uStack_110;
    *(undefined8 *)(unaff_x28 + 0xb0) = uStack_118;
    *(undefined8 *)(unaff_x28 + 200) = uStack_100;
    *(undefined8 *)(unaff_x28 + 0xc0) = uStack_108;
    *(undefined8 *)(unaff_x28 + 0xd8) = uStack_f0;
    *(undefined8 *)(unaff_x28 + 0xd0) = uStack_f8;
    *(undefined8 *)(unaff_x28 + 0x88) = uStack_140;
    *(undefined8 *)(unaff_x28 + 0x80) = uStack_148;
    *(undefined8 *)(unaff_x28 + 0x98) = uStack_130;
    *(undefined8 *)(unaff_x28 + 0x90) = uStack_138;
    unaff_x28 = *(long *)(param_4 + 0x70);
    lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    uVar25 = (undefined4)uStack_138;
    unaff_x26 = lVar4;
    if ((lVar20 == 0) || (*(long *)(lVar20 + 0x98) == 0)) goto LAB_0150df74;
    lVar17 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar20 + 0x98),0);
    lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if ((lVar20 == 0) ||
       ((*(long *)(lVar20 + 0x98) == 0 ||
        (lVar20 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar20 + 0x98),0), lVar20 == 0)))) goto LAB_0150df74;
    uVar5 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar20,0,0);
    lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if (lVar20 == 0) goto LAB_0150df74;
    unaff_x22 = *(undefined4 **)(lVar20 + 0x98);
    uVar26 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,param_4,uRam0000000003d5e510,uRam0000000003d2a400);
    unaff_x24 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x24,param_4,uRam0000000003d5e528,uRam0000000003d2a400);
    param_7 = unaff_x22;
    Atlas_UI_Screens_TopBarScreen__CreateElement
              (&uStack_1a8,uVar26,uVar25,param_3,param_4,lVar17,uVar5,unaff_x22,2,unaff_x23,
               unaff_x24);
    if (unaff_x28 == 0) goto LAB_0150df74;
    lVar6 = unaff_x25;
    lVar13 = unaff_x27;
    if (*(uint *)(unaff_x28 + 0x18) < 3) goto LAB_0150df78;
    *(undefined8 *)(unaff_x28 + 0x108) = uStack_180;
    *(undefined8 *)(unaff_x28 + 0x100) = uStack_188;
    *(undefined8 *)(unaff_x28 + 0x118) = uStack_170;
    *(undefined8 *)(unaff_x28 + 0x110) = uStack_178;
    *(undefined8 *)(unaff_x28 + 0x128) = uStack_160;
    *(undefined8 *)(unaff_x28 + 0x120) = uStack_168;
    *(undefined8 *)(unaff_x28 + 0x138) = uStack_150;
    *(undefined8 *)(unaff_x28 + 0x130) = uStack_158;
    *(undefined8 *)(unaff_x28 + 0xe8) = uStack_1a0;
    *(undefined8 *)(unaff_x28 + 0xe0) = uStack_1a8;
    *(undefined8 *)(unaff_x28 + 0xf8) = uStack_190;
    *(undefined8 *)(unaff_x28 + 0xf0) = uStack_198;
    unaff_x28 = *(long *)(param_4 + 0x70);
    lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    uVar25 = (undefined4)uStack_198;
    if ((lVar20 == 0) || (*(long *)(lVar20 + 0xa0) == 0)) goto LAB_0150df74;
    lVar17 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar20 + 0xa0),0);
    lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if ((lVar20 == 0) || (*(long *)(lVar20 + 0xa0) == 0)) goto LAB_0150df74;
    uVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar20 + 0xa0),0);
    lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if (lVar20 == 0) goto LAB_0150df74;
    unaff_x22 = *(undefined4 **)(lVar20 + 0xa0);
    uVar26 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,param_4,uRam0000000003d5e510,uRam0000000003d2a400);
    unaff_x24 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x24,param_4,uRam0000000003d5e528,uRam0000000003d2a400);
    param_7 = unaff_x22;
    Atlas_UI_Screens_TopBarScreen__CreateElement
              (&uStack_208,uVar26,uVar25,param_3,param_4,lVar17,uVar5,unaff_x22,3,unaff_x23,
               unaff_x24);
    if (unaff_x28 == 0) goto LAB_0150df74;
    if ((*(uint *)(unaff_x28 + 0x18) & 0xfffffffc) == 0) goto LAB_0150df78;
    *(undefined8 *)(unaff_x28 + 0x168) = uStack_1e0;
    *(undefined8 *)(unaff_x28 + 0x160) = uStack_1e8;
    *(undefined8 *)(unaff_x28 + 0x178) = uStack_1d0;
    *(undefined8 *)(unaff_x28 + 0x170) = uStack_1d8;
    *(undefined8 *)(unaff_x28 + 0x188) = uStack_1c0;
    *(undefined8 *)(unaff_x28 + 0x180) = uStack_1c8;
    *(undefined8 *)(unaff_x28 + 0x198) = uStack_1b0;
    *(undefined8 *)(unaff_x28 + 400) = uStack_1b8;
    *(undefined8 *)(unaff_x28 + 0x148) = uStack_200;
    *(undefined8 *)(unaff_x28 + 0x140) = uStack_208;
    *(undefined8 *)(unaff_x28 + 0x158) = uStack_1f0;
    *(undefined8 *)(unaff_x28 + 0x150) = uStack_1f8;
    unaff_x28 = *(long *)(param_4 + 0x70);
    lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    uVar25 = (undefined4)uStack_1f8;
    if ((lVar20 == 0) || (*(long *)(lVar20 + 0x60) == 0)) goto LAB_0150df74;
    lVar17 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar20 + 0x60),0);
    lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if ((lVar20 == 0) ||
       ((*(long *)(lVar20 + 0x60) == 0 ||
        (lVar20 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar20 + 0x60),0), lVar20 == 0)))) goto LAB_0150df74;
    uVar5 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar20,0,0);
    lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if (lVar20 == 0) goto LAB_0150df74;
    unaff_x22 = *(undefined4 **)(lVar20 + 0x60);
    uVar26 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,param_4,uRam0000000003d5e510,uRam0000000003d2a400);
    unaff_x24 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x24,param_4,uRam0000000003d5e528,uRam0000000003d2a400);
    param_7 = unaff_x22;
    Atlas_UI_Screens_TopBarScreen__CreateElement
              (&uStack_268,uVar26,uVar25,param_3,param_4,lVar17,uVar5,unaff_x22,4,unaff_x23,
               unaff_x24);
    if (unaff_x28 == 0) goto LAB_0150df74;
    if (*(uint *)(unaff_x28 + 0x18) < 5) goto LAB_0150df78;
    *(undefined8 *)(unaff_x28 + 0x1c8) = uStack_240;
    *(undefined8 *)(unaff_x28 + 0x1c0) = uStack_248;
    *(undefined8 *)(unaff_x28 + 0x1d8) = uStack_230;
    *(undefined8 *)(unaff_x28 + 0x1d0) = uStack_238;
    *(undefined8 *)(unaff_x28 + 0x1e8) = uStack_220;
    *(undefined8 *)(unaff_x28 + 0x1e0) = uStack_228;
    *(undefined8 *)(unaff_x28 + 0x1f8) = uStack_210;
    *(undefined8 *)(unaff_x28 + 0x1f0) = uStack_218;
    *(undefined8 *)(unaff_x28 + 0x1a8) = uStack_260;
    *(undefined8 *)(unaff_x28 + 0x1a0) = uStack_268;
    *(undefined8 *)(unaff_x28 + 0x1b8) = uStack_250;
    *(undefined8 *)(unaff_x28 + 0x1b0) = uStack_258;
    unaff_x28 = *(long *)(param_4 + 0x70);
    lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    uVar25 = (undefined4)uStack_258;
    if ((lVar20 == 0) || (*(long *)(lVar20 + 0x68) == 0)) goto LAB_0150df74;
    lVar17 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar20 + 0x68),0);
    lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if ((lVar20 == 0) ||
       ((*(long *)(lVar20 + 0x68) == 0 ||
        (lVar20 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar20 + 0x68),0), lVar20 == 0)))) goto LAB_0150df74;
    uVar5 = /*UnityEngine.Transform$$GetChild*/ func_0x03277648(lVar20,0,0);
    lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
    if (lVar20 == 0) goto LAB_0150df74;
    unaff_x22 = *(undefined4 **)(lVar20 + 0x68);
    uVar26 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,param_4,uRam0000000003d5e510,uRam0000000003d2a400);
    unaff_x24 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
    /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x24,param_4,uRam0000000003d5e528,uRam0000000003d2a400);
    param_7 = unaff_x22;
    Atlas_UI_Screens_TopBarScreen__CreateElement
              (&uStack_2c8,uVar26,uVar25,param_3,param_4,lVar17,uVar5,unaff_x22,5,unaff_x23,
               unaff_x24);
    if (unaff_x28 == 0) goto LAB_0150df74;
    if (5 < *(uint *)(unaff_x28 + 0x18)) {
      *(undefined8 *)(unaff_x28 + 0x228) = uStack_2a0;
      *(undefined8 *)(unaff_x28 + 0x220) = uStack_2a8;
      *(undefined8 *)(unaff_x28 + 0x238) = uStack_290;
      *(undefined8 *)(unaff_x28 + 0x230) = uStack_298;
      *(undefined8 *)(unaff_x28 + 0x248) = uStack_280;
      *(undefined8 *)(unaff_x28 + 0x240) = uStack_288;
      *(undefined8 *)(unaff_x28 + 600) = uStack_270;
      *(undefined8 *)(unaff_x28 + 0x250) = uStack_278;
      *(undefined8 *)(unaff_x28 + 0x208) = uStack_2c0;
      *(undefined8 *)(unaff_x28 + 0x200) = uStack_2c8;
      *(undefined8 *)(unaff_x28 + 0x218) = uStack_2b0;
      *(undefined8 *)(unaff_x28 + 0x210) = uStack_2b8;
      unaff_x28 = *(long *)(param_4 + 0x70);
      lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
      if (lVar20 != 0) {
        lVar17 = *(long *)(lVar20 + 0x40);
        lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
        if (lVar20 != 0) {
          unaff_x24 = 0x3d5e518;
          uVar5 = *(ulong *)(lVar20 + 0x40);
          if (((*(ushort *)(/*Atlas.UI.Screens.TopBarScreen_TypeInfo*/ lRam0000000003d25328 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.TopBarScreen_TypeInfo*/ lRam0000000003d25328 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar18 = *(undefined4 **)(/*Atlas.UI.Screens.TopBarScreen_TypeInfo*/ lRam0000000003d25328 + 0xb8);
          uVar25 = *puVar18;
          uVar26 = puVar18[1];
          uVar33 = puVar18[2];
          unaff_x22 = (undefined4 *)func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
          /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x22,param_4,uRam0000000003d5e518,uRam0000000003d2a400);
          unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
          /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,param_4,uRam0000000003d5e530,uRam0000000003d2a400);
          param_7 = (undefined4 *)0x0;
          Atlas_UI_Screens_TopBarScreen__CreateElement
                    (&uStack_328,uVar25,uVar26,uVar33,param_4,lVar17,uVar5,0,6,unaff_x22,unaff_x23);
          if (unaff_x28 != 0) {
            if (*(uint *)(unaff_x28 + 0x18) < 7) goto LAB_0150df78;
            *(undefined8 *)(unaff_x28 + 0x288) = uStack_300;
            *(undefined8 *)(unaff_x28 + 0x280) = uStack_308;
            *(undefined8 *)(unaff_x28 + 0x298) = uStack_2f0;
            *(undefined8 *)(unaff_x28 + 0x290) = uStack_2f8;
            *(undefined8 *)(unaff_x28 + 0x2a8) = uStack_2e0;
            *(undefined8 *)(unaff_x28 + 0x2a0) = uStack_2e8;
            *(undefined8 *)(unaff_x28 + 0x2b8) = uStack_2d0;
            *(undefined8 *)(unaff_x28 + 0x2b0) = uStack_2d8;
            *(undefined8 *)(unaff_x28 + 0x268) = uStack_320;
            *(undefined8 *)(unaff_x28 + 0x260) = uStack_328;
            *(undefined8 *)(unaff_x28 + 0x278) = uStack_310;
            *(undefined8 *)(unaff_x28 + 0x270) = uStack_318;
            unaff_x28 = *(long *)(param_4 + 0x70);
            lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
            if (lVar20 != 0) {
              lVar17 = *(long *)(lVar20 + 0x58);
              lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
              if (lVar20 != 0) {
                uVar5 = *(ulong *)(lVar20 + 0x58);
                pfVar14 = *(float **)(/*Atlas.UI.Screens.TopBarScreen_TypeInfo*/ lRam0000000003d25328 + 0xb8);
                fVar27 = *pfVar14;
                fVar28 = pfVar14[1];
                fVar30 = pfVar14[2];
                unaff_x22 = (undefined4 *)func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
                /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x22,param_4,uRam0000000003d5e518,uRam0000000003d2a400);
                unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
                /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,param_4,uRam0000000003d5e530,uRam0000000003d2a400);
                param_7 = (undefined4 *)0x0;
                Atlas_UI_Screens_TopBarScreen__CreateElement
                          (&uStack_388,-fVar27,-fVar28,-fVar30,param_4,lVar17,uVar5,0,7,unaff_x22,
                           unaff_x23);
                if (unaff_x28 != 0) {
                  if ((*(uint *)(unaff_x28 + 0x18) & 0xfffffff8) == 0) goto LAB_0150df78;
                  *(undefined8 *)(unaff_x28 + 0x2e8) = uStack_360;
                  *(undefined8 *)(unaff_x28 + 0x2e0) = uStack_368;
                  *(undefined8 *)(unaff_x28 + 0x2f8) = uStack_350;
                  *(undefined8 *)(unaff_x28 + 0x2f0) = uStack_358;
                  *(undefined8 *)(unaff_x28 + 0x308) = uStack_340;
                  *(undefined8 *)(unaff_x28 + 0x300) = uStack_348;
                  *(undefined8 *)(unaff_x28 + 0x318) = uStack_330;
                  *(undefined8 *)(unaff_x28 + 0x310) = uStack_338;
                  *(undefined8 *)(unaff_x28 + 0x2c8) = uStack_380;
                  *(undefined8 *)(unaff_x28 + 0x2c0) = uStack_388;
                  *(undefined8 *)(unaff_x28 + 0x2d8) = uStack_370;
                  *(undefined8 *)(unaff_x28 + 0x2d0) = uStack_378;
                  unaff_x24 = *(long *)(param_4 + 0x70);
                  lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
                  if (lVar20 != 0) {
                    lVar17 = *(long *)(lVar20 + 0x80);
                    lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
                    if (lVar20 != 0) {
                      unaff_x28 = 0x3d5e000;
                      uVar5 = *(ulong *)(lVar20 + 0x80);
                      lVar20 = *(long *)(/*Atlas.UI.Screens.TopBarScreen_TypeInfo*/ lRam0000000003d25328 + 0xb8);
                      uVar25 = *(undefined4 *)(lVar20 + 0xc);
                      uVar26 = *(undefined4 *)(lVar20 + 0x10);
                      uVar33 = *(undefined4 *)(lVar20 + 0x14);
                      puVar18 = (undefined4 *)func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
                      /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(puVar18,param_4,uRam0000000003d5e520,uRam0000000003d2a400);
                      unaff_x23 = func_0x00f78aec(/*System.Action<TopBarScreen.Element>_TypeInfo*/ uRam0000000003d1b608);
                      /*System.Action<TopBarScreen.Element>$$.ctor*/ func_0x01e65254(unaff_x23,param_4,uRam0000000003d5e538,uRam0000000003d2a400);
                      param_7 = (undefined4 *)0x0;
                      Atlas_UI_Screens_TopBarScreen__CreateElement
                                (&uStack_3e8,uVar25,uVar26,uVar33,param_4,lVar17,uVar5,0,8,puVar18,
                                 unaff_x23);
                      unaff_x22 = puVar18;
                      if (unaff_x24 != 0) {
                        if (*(uint *)(unaff_x24 + 0x18) < 9) goto LAB_0150df78;
                        *(undefined8 *)(unaff_x24 + 0x348) = uStack_3c0;
                        *(undefined8 *)(unaff_x24 + 0x340) = uStack_3c8;
                        *(undefined8 *)(unaff_x24 + 0x358) = uStack_3b0;
                        *(undefined8 *)(unaff_x24 + 0x350) = uStack_3b8;
                        *(undefined8 *)(unaff_x24 + 0x368) = uStack_3a0;
                        *(undefined8 *)(unaff_x24 + 0x360) = uStack_3a8;
                        *(undefined8 *)(unaff_x24 + 0x378) = uStack_390;
                        *(undefined8 *)(unaff_x24 + 0x370) = uStack_398;
                        *(undefined8 *)(unaff_x24 + 0x328) = uStack_3e0;
                        *(undefined8 *)(unaff_x24 + 800) = uStack_3e8;
                        *(undefined8 *)(unaff_x24 + 0x338) = uStack_3d0;
                        *(undefined8 *)(unaff_x24 + 0x330) = uStack_3d8;
                        lVar17 = *(long *)(param_4 + 0x70);
                        if (lVar17 != 0) {
                          if (0 < (int)*(ulong *)(lVar17 + 0x18)) {
                            uVar5 = 0;
                            uVar15 = *(ulong *)(lVar17 + 0x18) & 0xffffffff;
                            unaff_x22 = (undefined4 *)(lVar17 + 0x20);
                            do {
                              if (uVar15 <= uVar5) goto LAB_0150df78;
                              puVar18 = unaff_x22 + 0x18;
                              Atlas_UI_Screens_TopBarScreen__ForceButtonState(param_4,*unaff_x22,0);
                              uVar5 = uVar5 + 1;
                              uVar15 = (ulong)*(uint *)(lVar17 + 0x18);
                              unaff_x22 = puVar18;
                            } while ((long)uVar5 < (long)(int)*(uint *)(lVar17 + 0x18));
                          }
                          lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41340);
                          unaff_x22 = puVar18;
                          if ((lVar20 != 0) &&
                             (plVar7 = *(long **)(lVar20 + 0x70), plVar7 != (long *)0x0)) {
                            uVar8 = (**(code **)(*plVar7 + 0x338))
                                              (plVar7,*(undefined8 *)(*plVar7 + 0x340));
                            *(undefined8 *)(param_4 + 0x98) = uVar8;
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0150df74;
    }
  }
LAB_0150df78:
  uVar8 = func_0x00f78b24();
  uVar15 = func_0x00f78ac0(uVar8,0);
  puStack_3f8 = &Atlas_UI_Screens_TopBarScreen__OnAfterExit;
  uVar8 = 0x3eb4000;
  lVar4 = 0x3d20bc0;
  lStack_430 = unaff_x24;
  lStack_428 = unaff_x23;
  puStack_420 = unaff_x22;
  uStack_418 = uVar5;
  lStack_410 = lVar17;
  lStack_408 = param_4;
  ppuStack_400 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d60 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d5e540);
    func_0x00f78a20(0x3d5e548);
    func_0x00f78a20(0x3d41340);
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d60 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar12 = 0;
  /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(uVar15,0);
  lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar15,uRam0000000003d41340);
  lVar17 = 0x3d41340;
  if (lVar20 != 0) {
    lVar19 = 0x3d1fa78;
    unaff_x24 = 0x3d5e000;
    lVar4 = *(long *)(lVar20 + 0xa0);
    uVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_7 = (undefined4 *)0x0;
    uVar12 = uRam0000000003d5e540;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar8,uVar15);
    unaff_x23 = 0x3d1fa78;
    if (lVar4 != 0) {
      uVar12 = 0;
      /*Atlas.UI.UIAtlasButton$$remove_Deselected*/ func_0x0151438c(lVar4,uVar8);
      lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar15,uRam0000000003d41340);
      lVar17 = 0x3d41340;
      if (lVar20 != 0) {
        lVar17 = 0x3d5e000;
        lVar4 = *(long *)(lVar20 + 0xa0);
        uVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        param_7 = (undefined4 *)0x0;
        uVar12 = uRam0000000003d5e548;
        /*System.Action$$.ctor*/ func_0x02924c80(uVar8,uVar15);
        unaff_x23 = lVar19;
        if (lVar4 != 0) {
          lVar17 = 0x3d41000;
          uVar12 = 0;
          /*Atlas.UI.UIAtlasButton$$remove_Selected*/ func_0x01514244(lVar4,uVar8);
          lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar15,uRam0000000003d41348);
          if ((lVar20 != 0) && (*(long *)(lVar20 + 0x10) != 0)) {
            *(undefined8 *)(*(long *)(lVar20 + 0x10) + 0x28) = 0;
            return;
          }
        }
      }
    }
  }
  auVar34 = func_0x00f78af4();
  uVar5 = auVar34._8_8_;
  pcStack_438 = (code *)&Atlas_UI_Screens_TopBarScreen__OnButtonPressed;
  lStack_450 = lVar4;
  uStack_448 = uVar15;
  pppuStack_440 = &ppuStack_400;
  if ((bRam0000000003eb4d61 & 1) == 0) {
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d61 = 1;
  }
  lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(auVar34._0_8_,uRam0000000003d41348);
  lVar4 = lStack_450;
  if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x10), lVar20 == 0)) {
    uVar8 = func_0x00f78af4();
    if ((bRam0000000003eb4d62 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d62 = 1;
    }
    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41348);
    if (((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) &&
       (plVar7 = *(long **)(*(long *)(lVar17 + 0x18) + 0x30), plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x9c8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x9d0));
      return;
    }
    uVar8 = func_0x00f78af4();
    if ((bRam0000000003eb4d63 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d63 = 1;
    }
    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41348);
    if (((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) &&
       (plVar7 = *(long **)(*(long *)(lVar17 + 0x18) + 0x30), plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x9c8))(plVar7,0,*(undefined8 *)(*plVar7 + 0x9d0));
      return;
    }
    lVar17 = func_0x00f78af4();
    if ((bRam0000000003eb4d64 & 1) == 0) {
      func_0x00f78a20(0x3d2c9a0);
      func_0x00f78a20(0x3d1f8d8);
      bRam0000000003eb4d64 = 1;
    }
    uVar8 = func_0x00f78a34(/*Atlas.UI.Screens.TopBarScreen.Element[]_TypeInfo*/ uRam0000000003d1f8d8,9);
    *(undefined8 *)(lVar17 + 0x70) = uVar8;
    *(undefined1 *)(lVar17 + 0x80) = 1;
    if (lVar17 == 0) {
      auVar34 = func_0x00f78af4();
      puVar11 = auVar34._8_8_;
      puVar9 = auVar34._0_8_;
      uVar12 = puVar11[1];
      uVar8 = *puVar11;
      puVar9[2] = puVar11[2];
      puVar9[1] = uVar12;
      *puVar9 = uVar8;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c9a0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  plVar7 = &lStack_450;
  ppppuVar22 = &pppuStack_440;
  lVar19 = *(long *)(lVar20 + 0x30);
  uVar15 = uStack_448;
  if (lVar19 == 0) {
code_r0x0150b5a8:
    uVar5 = uVar15;
    func_0x00f78af4();
  }
  else {
    uVar10 = auVar34._8_4_;
    if (uVar10 < *(uint *)(lVar19 + 0x18)) {
      lVar4 = *(long *)(lVar19 + (long)(int)uVar10 * 8 + 0x20);
      if (lVar4 == 0) {
        if (8 < uVar10) {
          return;
        }
        uVar16 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar10 & 0x1f) & uVar16) == 0) {
          return;
        }
      }
      else {
        uVar15 = /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar4,0);
        if ((uVar10 != 0) || ((uVar15 & 1) == 0)) {
          if (8 < uVar10) {
            return;
          }
          uVar16 = 0x142;
          goto code_r0x0150b574;
        }
      }
      auVar35._8_4_ = uVar10;
      auVar35._0_8_ = *(long *)(lVar20 + 0x28);
      uVar15 = uVar5;
      lVar4 = lVar20;
      if (*(long *)(lVar20 + 0x28) != 0) {
        uVar12 = 0;
        param_7 = (undefined4 *)((long)&MACH_HEADER.magic + 1);
        plVar7 = &lStack_430;
        uVar5 = uStack_448;
        lVar4 = lStack_450;
        ppppuVar22 = (undefined8 ****)pppuStack_440;
        pcVar24 = pcStack_438;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  uVar3 = func_0x00f78b24();
  pcVar24 = Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar35 = func_0x00f78ac0(uVar3,0);
code_r0x0150b5b8:
  auVar34._8_8_ = param_7;
  auVar34._0_8_ = auVar35._0_8_;
  auVar1._8_8_ = param_7;
  auVar1._0_8_ = auVar35._0_8_;
  if (auVar35._8_4_ < 9) {
    uVar15 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar35._8_4_ * 4);
    auVar34 = auVar1;
  }
  else {
    uVar15 = 0xffffffff;
  }
  do {
    lVar20 = auVar34._0_8_;
    *(long *)((long)plVar7 + -0x20) = lVar4;
    *(ulong *)((long)plVar7 + -0x18) = uVar5;
    *(undefined8 *****)((long)plVar7 + -0x10) = ppppuVar22;
    *(code **)((long)plVar7 + -8) = pcVar24;
    uVar10 = (uint)uVar15;
    if (uVar10 == 0xffffffff) {
      return;
    }
    lVar4 = *(long *)(lVar20 + 0x70);
    if (lVar4 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar5 = uVar15;
      if (uVar10 < *(uint *)(lVar4 + 0x18)) {
        uVar25 = 2;
        if ((int)uVar12 == 0) {
          uVar25 = 0;
        }
        *(undefined4 *)(lVar4 + (long)(int)uVar10 * 0x60 + 0x5c) = uVar25;
        if ((auVar34._8_8_ & 1) == 0) {
          Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar20,uVar15);
        }
        *(long *)((long)plVar7 + -0x60) = unaff_x28;
        *(long *)((long)plVar7 + -0x58) = lVar13;
        *(long *)((long)plVar7 + -0x50) = unaff_x26;
        *(long *)((long)plVar7 + -0x48) = lVar6;
        *(long *)((long)plVar7 + -0x40) = unaff_x24;
        *(long *)((long)plVar7 + -0x38) = unaff_x23;
        *(long *)((long)plVar7 + -0x30) = lVar17;
        *(undefined8 *)((long)plVar7 + -0x28) = uVar8;
        *(undefined8 *)((long)plVar7 + -0x20) = *(undefined8 *)((long)plVar7 + -0x20);
        *(undefined8 *)((long)plVar7 + -0x18) = *(undefined8 *)((long)plVar7 + -0x18);
        *(undefined8 *)((long)plVar7 + -0x10) = *(undefined8 *)((long)plVar7 + -0x10);
        *(undefined8 *)((long)plVar7 + -8) = *(undefined8 *)((long)plVar7 + -8);
        lVar4 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar13 = *(long *)(lVar20 + 0x70);
        if (lVar13 == 0) goto LAB_0150c7d4;
        if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_0150c7d8;
        lVar6 = (long)(int)uVar10;
        lVar13 = lVar13 + lVar6 * 0x60;
        unaff_x26 = *(long *)(lVar13 + 0x20);
        lVar17 = *(long *)(lVar13 + 0x28);
        uVar8 = *(undefined8 *)(lVar13 + 0x30);
        uVar3 = *(undefined8 *)(lVar13 + 0x48);
        uVar12 = *(undefined8 *)(lVar13 + 0x40);
        *(undefined8 *)((long)plVar7 + -0xe8) = *(undefined8 *)(lVar13 + 0x38);
        *(undefined8 *)((long)plVar7 + -0xf0) = uVar8;
        *(undefined8 *)((long)plVar7 + -0xd8) = uVar3;
        *(undefined8 *)((long)plVar7 + -0xe0) = uVar12;
        lVar4 = *(long *)(lVar13 + 0x50);
        iVar21 = *(int *)(lVar13 + 0x58);
        iVar2 = *(int *)(lVar13 + 0x5c);
        unaff_x23 = *(long *)(lVar13 + 0x60);
        unaff_x24 = *(long *)(lVar13 + 0x68);
        uVar8 = *(undefined8 *)(lVar13 + 0x70);
        *(undefined8 *)((long)plVar7 + -0xf8) = *(undefined8 *)(lVar13 + 0x78);
        *(undefined8 *)((long)plVar7 + -0x100) = uVar8;
        if (iVar2 == iVar21) {
LAB_0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
          if (iVar2 == 0) {
            return;
          }
          if (lVar4 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar4,iVar21 == 2,0);
            return;
          }
        }
        else if (iVar21 == 2) {
          if (iVar2 == 0) {
            if (unaff_x24 == 0) goto LAB_0150c7d4;
            uVar12 = *(undefined8 *)(lVar13 + 0x38);
            uVar8 = *(undefined8 *)(lVar13 + 0x30);
            uVar29 = *(undefined8 *)(lVar13 + 0x48);
            uVar3 = *(undefined8 *)(lVar13 + 0x40);
            *(undefined8 *)((long)plVar7 + -0x118) = uVar12;
            *(undefined8 *)((long)plVar7 + -0x120) = uVar8;
            *(undefined8 *)((long)plVar7 + -0x108) = uVar29;
            *(undefined8 *)((long)plVar7 + -0x110) = uVar3;
            uVar32 = *(undefined8 *)(lVar13 + 0x78);
            uVar31 = *(undefined8 *)(lVar13 + 0x70);
            *(undefined8 *)((long)plVar7 + -0x128) = uVar32;
            *(undefined8 *)((long)plVar7 + -0x130) = uVar31;
            *(long *)((long)plVar7 + -200) = unaff_x26;
            *(long *)((long)plVar7 + -0xc0) = lVar17;
            *(undefined8 *)((long)plVar7 + -0xb0) = uVar12;
            *(undefined8 *)((long)plVar7 + -0xb8) = uVar8;
            *(undefined8 *)((long)plVar7 + -0xa0) = uVar29;
            *(undefined8 *)((long)plVar7 + -0xa8) = uVar3;
            *(long *)((long)plVar7 + -0x98) = lVar4;
            *(undefined8 *)((long)plVar7 + -0x90) = _UNK_033f8620;
            *(long *)((long)plVar7 + -0x88) = unaff_x23;
            *(long *)((long)plVar7 + -0x80) = unaff_x24;
            *(undefined8 *)((long)plVar7 + -0x70) = uVar32;
            *(undefined8 *)((long)plVar7 + -0x78) = uVar31;
            lVar13 = unaff_x24;
LAB_0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar13,(undefined1 *)((long)plVar7 + -200),uRam0000000003d2a408);
            iVar21 = 1;
          }
          else {
            iVar21 = 2;
          }
LAB_0150c72c:
          lVar13 = *(long *)(lVar20 + 0x70);
          if (lVar13 != 0) {
            if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_0150c7d8;
            lVar13 = lVar13 + lVar6 * 0x60;
            *(long *)(lVar13 + 0x20) = unaff_x26;
            *(long *)(lVar13 + 0x28) = lVar17;
            uVar8 = *(undefined8 *)((long)plVar7 + -0xf0);
            uVar3 = *(undefined8 *)((long)plVar7 + -0xd8);
            uVar12 = *(undefined8 *)((long)plVar7 + -0xe0);
            *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)((long)plVar7 + -0xe8);
            *(undefined8 *)(lVar13 + 0x30) = uVar8;
            *(undefined8 *)(lVar13 + 0x48) = uVar3;
            *(undefined8 *)(lVar13 + 0x40) = uVar12;
            *(long *)(lVar13 + 0x50) = lVar4;
            *(int *)(lVar13 + 0x58) = iVar21;
            *(int *)(lVar13 + 0x5c) = iVar2;
            *(long *)(lVar13 + 0x60) = unaff_x23;
            *(long *)(lVar13 + 0x68) = unaff_x24;
            uVar8 = *(undefined8 *)((long)plVar7 + -0x100);
            *(undefined8 *)(lVar13 + 0x78) = *(undefined8 *)((long)plVar7 + -0xf8);
            *(undefined8 *)(lVar13 + 0x70) = uVar8;
            goto LAB_0150c768;
          }
        }
        else {
          if (iVar21 != 0) goto LAB_0150c72c;
          if (iVar2 != 2) {
            iVar21 = 0;
            goto LAB_0150c72c;
          }
          if (((lVar17 != 0) && (lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar17,0), lVar13 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,1,0), unaff_x23 != 0)) {
            *(long *)((long)plVar7 + -200) = unaff_x26;
            *(long *)((long)plVar7 + -0xc0) = lVar17;
            *(undefined8 *)((long)plVar7 + -0xb0) = *(undefined8 *)((long)plVar7 + -0xe8);
            *(undefined8 *)((long)plVar7 + -0xb8) = *(undefined8 *)((long)plVar7 + -0xf0);
            *(undefined8 *)((long)plVar7 + -0xa0) = *(undefined8 *)((long)plVar7 + -0xd8);
            *(undefined8 *)((long)plVar7 + -0xa8) = *(undefined8 *)((long)plVar7 + -0xe0);
            *(long *)((long)plVar7 + -0x98) = lVar4;
            *(undefined8 *)((long)plVar7 + -0x90) = _UNK_033f8628;
            *(long *)((long)plVar7 + -0x88) = unaff_x23;
            *(long *)((long)plVar7 + -0x80) = unaff_x24;
            *(undefined8 *)((long)plVar7 + -0x70) = *(undefined8 *)((long)plVar7 + -0xf8);
            *(undefined8 *)((long)plVar7 + -0x78) = *(undefined8 *)((long)plVar7 + -0x100);
            lVar13 = unaff_x23;
            goto LAB_0150c724;
          }
        }
LAB_0150c7d4:
        func_0x00f78af4();
LAB_0150c7d8:
        uVar8 = func_0x00f78b24();
        auVar34 = func_0x00f78ac0(uVar8,0);
        lVar13 = auVar34._8_8_;
        *(long *)((long)plVar7 + -0x180) = unaff_x26;
        *(long *)((long)plVar7 + -0x178) = lVar6;
        *(long *)((long)plVar7 + -0x170) = unaff_x24;
        *(long *)((long)plVar7 + -0x168) = unaff_x23;
        *(long *)((long)plVar7 + -0x160) = lVar17;
        *(long *)((long)plVar7 + -0x158) = lVar20;
        *(ulong *)((long)plVar7 + -0x150) = uVar15;
        *(long *)((long)plVar7 + -0x148) = lVar4;
        *(undefined1 **)((long)plVar7 + -0x140) = (undefined1 *)((long)plVar7 + -0x10);
        *(code **)((long)plVar7 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar8 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar13 + 0x18),*(undefined4 *)(lVar13 + 0x1c),
                                *(undefined4 *)(lVar13 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar13 + 0x10),0,0);
        uVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar8,10,uRam0000000003d5e7a8);
        uVar8 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar8,*(undefined8 *)(lVar13 + 0x58),uRam0000000003d5e6e0);
        uVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar8,1,uRam0000000003d5e888);
        lVar17 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar8,auVar34._0_8_,uRam0000000003d5e850);
        if ((lVar17 != 0) && (*(char *)(lVar17 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar17 + 0x30) = *(undefined8 *)(lVar13 + 0x10);
        }
        return;
      }
    }
    uVar12 = func_0x00f78b24();
    auVar34 = func_0x00f78ac0(uVar12,0);
    puVar23 = (undefined1 *)((long)plVar7 + -0x30);
    *(undefined1 **)((long)plVar7 + -0x30) = (undefined1 *)((long)plVar7 + -0x10);
    *(undefined **)((long)plVar7 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar4 = *(long *)(auVar34._0_8_ + 0x28);
    auVar34._8_8_ = auVar34._8_8_;
    auVar34._0_8_ = lVar4;
    if (lVar4 == 0) {
      pcVar24 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar34 = func_0x00f78af4();
      plVar7 = (long *)((long)plVar7 + -0x30);
    }
    else {
      puVar23 = *(undefined1 **)((long)plVar7 + -0x30);
      pcVar24 = *(code **)((long)plVar7 + -0x28);
      plVar7 = (long *)((long)plVar7 + -0x20);
    }
    *(long *)((long)plVar7 + -0x20) = lVar20;
    *(ulong *)((long)plVar7 + -0x18) = uVar5;
    *(undefined1 **)((long)plVar7 + -0x10) = puVar23;
    *(code **)((long)plVar7 + -8) = pcVar24;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar34._0_8_,4,0,auVar34._8_8_);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar34._0_8_,5,0,auVar34._8_8_);
    uVar15 = 7;
    uVar12 = 0;
    ppppuVar22 = *(undefined8 *****)((long)plVar7 + -0x10);
    pcVar24 = *(code **)((long)plVar7 + -8);
    lVar4 = *(long *)((long)plVar7 + -0x20);
    uVar5 = *(ulong *)((long)plVar7 + -0x18);
  } while( true );
}



// ============================================================
// RVA: 0x150df84 | Atlas.UI.Screens.TopBarScreen.OnAfterExit
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen__OnAfterExit
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x23;
  long lVar17;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar18;
  undefined8 unaff_x28;
  undefined8 ****ppppuVar19;
  undefined1 *puVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  long lStack_60;
  ulong uStack_58;
  undefined8 ***pppuStack_50;
  code *pcStack_48;
  
  uVar15 = 0x3eb4000;
  lVar14 = 0x3d20bc0;
  if ((bRam0000000003eb4d60 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d5e540);
    func_0x00f78a20(0x3d5e548);
    func_0x00f78a20(0x3d41340);
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d60 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = 0;
  /*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(param_1,0);
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41340);
  lVar16 = 0x3d41340;
  if (lVar5 != 0) {
    lVar17 = 0x3d1fa78;
    unaff_x24 = 0x3d5e000;
    lVar14 = *(long *)(lVar5 + 0xa0);
    uVar15 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    param_4 = 0;
    uVar10 = uRam0000000003d5e540;
    /*System.Action$$.ctor*/ func_0x02924c80(uVar15,param_1);
    unaff_x23 = 0x3d1fa78;
    if (lVar14 != 0) {
      uVar10 = 0;
      /*Atlas.UI.UIAtlasButton$$remove_Deselected*/ func_0x0151438c(lVar14,uVar15);
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41340);
      lVar16 = 0x3d41340;
      if (lVar5 != 0) {
        lVar16 = 0x3d5e000;
        lVar14 = *(long *)(lVar5 + 0xa0);
        uVar15 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
        param_4 = 0;
        uVar10 = uRam0000000003d5e548;
        /*System.Action$$.ctor*/ func_0x02924c80(uVar15,param_1);
        unaff_x23 = lVar17;
        if (lVar14 != 0) {
          lVar16 = 0x3d41000;
          uVar10 = 0;
          /*Atlas.UI.UIAtlasButton$$remove_Selected*/ func_0x01514244(lVar14,uVar15);
          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41348);
          if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
            *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x28) = 0;
            return;
          }
        }
      }
    }
  }
  auVar25 = func_0x00f78af4();
  uVar13 = auVar25._8_8_;
  pcStack_48 = (code *)&Atlas_UI_Screens_TopBarScreen__OnButtonPressed;
  lStack_60 = lVar14;
  uStack_58 = param_1;
  pppuStack_50 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d61 & 1) == 0) {
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d61 = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(auVar25._0_8_,uRam0000000003d41348);
  lVar14 = lStack_60;
  if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x10), lVar5 == 0)) {
    uVar15 = func_0x00f78af4();
    if ((bRam0000000003eb4d62 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d62 = 1;
    }
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar15,uRam0000000003d41348);
    if (((lVar14 != 0) && (*(long *)(lVar14 + 0x18) != 0)) &&
       (plVar6 = *(long **)(*(long *)(lVar14 + 0x18) + 0x30), plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x9c8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x9d0));
      return;
    }
    uVar15 = func_0x00f78af4();
    if ((bRam0000000003eb4d63 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d63 = 1;
    }
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar15,uRam0000000003d41348);
    if (((lVar14 != 0) && (*(long *)(lVar14 + 0x18) != 0)) &&
       (plVar6 = *(long **)(*(long *)(lVar14 + 0x18) + 0x30), plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x9c8))(plVar6,0,*(undefined8 *)(*plVar6 + 0x9d0));
      return;
    }
    lVar14 = func_0x00f78af4();
    if ((bRam0000000003eb4d64 & 1) == 0) {
      func_0x00f78a20(0x3d2c9a0);
      func_0x00f78a20(0x3d1f8d8);
      bRam0000000003eb4d64 = 1;
    }
    uVar15 = func_0x00f78a34(/*Atlas.UI.Screens.TopBarScreen.Element[]_TypeInfo*/ uRam0000000003d1f8d8,9);
    *(undefined8 *)(lVar14 + 0x70) = uVar15;
    *(undefined1 *)(lVar14 + 0x80) = 1;
    if (lVar14 == 0) {
      auVar25 = func_0x00f78af4();
      puVar9 = auVar25._8_8_;
      puVar7 = auVar25._0_8_;
      uVar10 = puVar9[1];
      uVar15 = *puVar9;
      puVar7[2] = puVar9[2];
      puVar7[1] = uVar10;
      *puVar7 = uVar15;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c9a0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  plVar6 = &lStack_60;
  ppppuVar19 = &pppuStack_50;
  lVar17 = *(long *)(lVar5 + 0x30);
  uVar3 = uStack_58;
  if (lVar17 == 0) {
code_r0x0150b5a8:
    uVar13 = uVar3;
    func_0x00f78af4();
  }
  else {
    uVar8 = auVar25._8_4_;
    if (uVar8 < *(uint *)(lVar17 + 0x18)) {
      lVar14 = *(long *)(lVar17 + (long)(int)uVar8 * 8 + 0x20);
      if (lVar14 == 0) {
        if (8 < uVar8) {
          return;
        }
        uVar11 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar8 & 0x1f) & uVar11) == 0) {
          return;
        }
      }
      else {
        uVar3 = /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar14,0);
        if ((uVar8 != 0) || ((uVar3 & 1) == 0)) {
          if (8 < uVar8) {
            return;
          }
          uVar11 = 0x142;
          goto code_r0x0150b574;
        }
      }
      auVar26._8_4_ = uVar8;
      auVar26._0_8_ = *(long *)(lVar5 + 0x28);
      uVar3 = uVar13;
      lVar14 = lVar5;
      if (*(long *)(lVar5 + 0x28) != 0) {
        uVar10 = 0;
        param_4 = 1;
        plVar6 = (long *)&stack0xffffffffffffffc0;
        uVar13 = uStack_58;
        lVar14 = lStack_60;
        ppppuVar19 = (undefined8 ****)pppuStack_50;
        pcVar21 = pcStack_48;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  uVar4 = func_0x00f78b24();
  pcVar21 = Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar26 = func_0x00f78ac0(uVar4,0);
code_r0x0150b5b8:
  auVar25._8_8_ = param_4;
  auVar25._0_8_ = auVar26._0_8_;
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = auVar26._0_8_;
  if (auVar26._8_4_ < 9) {
    uVar3 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar26._8_4_ * 4);
    auVar25 = auVar1;
  }
  else {
    uVar3 = 0xffffffff;
  }
  do {
    lVar5 = auVar25._0_8_;
    *(long *)((long)plVar6 + -0x20) = lVar14;
    *(ulong *)((long)plVar6 + -0x18) = uVar13;
    *(undefined8 *****)((long)plVar6 + -0x10) = ppppuVar19;
    *(code **)((long)plVar6 + -8) = pcVar21;
    uVar8 = (uint)uVar3;
    if (uVar8 == 0xffffffff) {
      return;
    }
    lVar14 = *(long *)(lVar5 + 0x70);
    if (lVar14 == 0) {
      func_0x00f78af4();
    }
    else {
      uVar13 = uVar3;
      if (uVar8 < *(uint *)(lVar14 + 0x18)) {
        uVar12 = 2;
        if ((int)uVar10 == 0) {
          uVar12 = 0;
        }
        *(undefined4 *)(lVar14 + (long)(int)uVar8 * 0x60 + 0x5c) = uVar12;
        if ((auVar25._8_8_ & 1) == 0) {
          Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar5,uVar3);
        }
        *(undefined8 *)((long)plVar6 + -0x60) = unaff_x28;
        *(undefined8 *)((long)plVar6 + -0x58) = unaff_x27;
        *(undefined8 *)((long)plVar6 + -0x50) = unaff_x26;
        *(long *)((long)plVar6 + -0x48) = unaff_x25;
        *(long *)((long)plVar6 + -0x40) = unaff_x24;
        *(long *)((long)plVar6 + -0x38) = unaff_x23;
        *(long *)((long)plVar6 + -0x30) = lVar16;
        *(undefined8 *)((long)plVar6 + -0x28) = uVar15;
        *(undefined8 *)((long)plVar6 + -0x20) = *(undefined8 *)((long)plVar6 + -0x20);
        *(undefined8 *)((long)plVar6 + -0x18) = *(undefined8 *)((long)plVar6 + -0x18);
        *(undefined8 *)((long)plVar6 + -0x10) = *(undefined8 *)((long)plVar6 + -0x10);
        *(undefined8 *)((long)plVar6 + -8) = *(undefined8 *)((long)plVar6 + -8);
        lVar14 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar17 = *(long *)(lVar5 + 0x70);
        if (lVar17 == 0) goto LAB_0150c7d4;
        if (*(uint *)(lVar17 + 0x18) <= uVar8) goto LAB_0150c7d8;
        unaff_x25 = (long)(int)uVar8;
        lVar17 = lVar17 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar17 + 0x20);
        lVar16 = *(long *)(lVar17 + 0x28);
        uVar15 = *(undefined8 *)(lVar17 + 0x30);
        uVar4 = *(undefined8 *)(lVar17 + 0x48);
        uVar10 = *(undefined8 *)(lVar17 + 0x40);
        *(undefined8 *)((long)plVar6 + -0xe8) = *(undefined8 *)(lVar17 + 0x38);
        *(undefined8 *)((long)plVar6 + -0xf0) = uVar15;
        *(undefined8 *)((long)plVar6 + -0xd8) = uVar4;
        *(undefined8 *)((long)plVar6 + -0xe0) = uVar10;
        lVar14 = *(long *)(lVar17 + 0x50);
        iVar18 = *(int *)(lVar17 + 0x58);
        iVar2 = *(int *)(lVar17 + 0x5c);
        unaff_x23 = *(long *)(lVar17 + 0x60);
        unaff_x24 = *(long *)(lVar17 + 0x68);
        uVar15 = *(undefined8 *)(lVar17 + 0x70);
        *(undefined8 *)((long)plVar6 + -0xf8) = *(undefined8 *)(lVar17 + 0x78);
        *(undefined8 *)((long)plVar6 + -0x100) = uVar15;
        if (iVar2 == iVar18) {
LAB_0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar14,0,0);
          if (iVar2 == 0) {
            return;
          }
          if (lVar14 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar14,iVar18 == 2,0);
            return;
          }
        }
        else if (iVar18 == 2) {
          if (iVar2 == 0) {
            if (unaff_x24 == 0) goto LAB_0150c7d4;
            uVar10 = *(undefined8 *)(lVar17 + 0x38);
            uVar15 = *(undefined8 *)(lVar17 + 0x30);
            uVar22 = *(undefined8 *)(lVar17 + 0x48);
            uVar4 = *(undefined8 *)(lVar17 + 0x40);
            *(undefined8 *)((long)plVar6 + -0x118) = uVar10;
            *(undefined8 *)((long)plVar6 + -0x120) = uVar15;
            *(undefined8 *)((long)plVar6 + -0x108) = uVar22;
            *(undefined8 *)((long)plVar6 + -0x110) = uVar4;
            uVar24 = *(undefined8 *)(lVar17 + 0x78);
            uVar23 = *(undefined8 *)(lVar17 + 0x70);
            *(undefined8 *)((long)plVar6 + -0x128) = uVar24;
            *(undefined8 *)((long)plVar6 + -0x130) = uVar23;
            *(undefined8 *)((long)plVar6 + -200) = unaff_x26;
            *(long *)((long)plVar6 + -0xc0) = lVar16;
            *(undefined8 *)((long)plVar6 + -0xb0) = uVar10;
            *(undefined8 *)((long)plVar6 + -0xb8) = uVar15;
            *(undefined8 *)((long)plVar6 + -0xa0) = uVar22;
            *(undefined8 *)((long)plVar6 + -0xa8) = uVar4;
            *(long *)((long)plVar6 + -0x98) = lVar14;
            *(undefined8 *)((long)plVar6 + -0x90) = _UNK_033f8620;
            *(long *)((long)plVar6 + -0x88) = unaff_x23;
            *(long *)((long)plVar6 + -0x80) = unaff_x24;
            *(undefined8 *)((long)plVar6 + -0x70) = uVar24;
            *(undefined8 *)((long)plVar6 + -0x78) = uVar23;
            lVar17 = unaff_x24;
LAB_0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar17,(undefined1 *)((long)plVar6 + -200),uRam0000000003d2a408);
            iVar18 = 1;
          }
          else {
            iVar18 = 2;
          }
LAB_0150c72c:
          lVar17 = *(long *)(lVar5 + 0x70);
          if (lVar17 != 0) {
            if (*(uint *)(lVar17 + 0x18) <= uVar8) goto LAB_0150c7d8;
            lVar17 = lVar17 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar17 + 0x20) = unaff_x26;
            *(long *)(lVar17 + 0x28) = lVar16;
            uVar15 = *(undefined8 *)((long)plVar6 + -0xf0);
            uVar4 = *(undefined8 *)((long)plVar6 + -0xd8);
            uVar10 = *(undefined8 *)((long)plVar6 + -0xe0);
            *(undefined8 *)(lVar17 + 0x38) = *(undefined8 *)((long)plVar6 + -0xe8);
            *(undefined8 *)(lVar17 + 0x30) = uVar15;
            *(undefined8 *)(lVar17 + 0x48) = uVar4;
            *(undefined8 *)(lVar17 + 0x40) = uVar10;
            *(long *)(lVar17 + 0x50) = lVar14;
            *(int *)(lVar17 + 0x58) = iVar18;
            *(int *)(lVar17 + 0x5c) = iVar2;
            *(long *)(lVar17 + 0x60) = unaff_x23;
            *(long *)(lVar17 + 0x68) = unaff_x24;
            uVar15 = *(undefined8 *)((long)plVar6 + -0x100);
            *(undefined8 *)(lVar17 + 0x78) = *(undefined8 *)((long)plVar6 + -0xf8);
            *(undefined8 *)(lVar17 + 0x70) = uVar15;
            goto LAB_0150c768;
          }
        }
        else {
          if (iVar18 != 0) goto LAB_0150c72c;
          if (iVar2 != 2) {
            iVar18 = 0;
            goto LAB_0150c72c;
          }
          if (((lVar16 != 0) && (lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar16,0), lVar17 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar17,1,0), unaff_x23 != 0)) {
            *(undefined8 *)((long)plVar6 + -200) = unaff_x26;
            *(long *)((long)plVar6 + -0xc0) = lVar16;
            *(undefined8 *)((long)plVar6 + -0xb0) = *(undefined8 *)((long)plVar6 + -0xe8);
            *(undefined8 *)((long)plVar6 + -0xb8) = *(undefined8 *)((long)plVar6 + -0xf0);
            *(undefined8 *)((long)plVar6 + -0xa0) = *(undefined8 *)((long)plVar6 + -0xd8);
            *(undefined8 *)((long)plVar6 + -0xa8) = *(undefined8 *)((long)plVar6 + -0xe0);
            *(long *)((long)plVar6 + -0x98) = lVar14;
            *(undefined8 *)((long)plVar6 + -0x90) = _UNK_033f8628;
            *(long *)((long)plVar6 + -0x88) = unaff_x23;
            *(long *)((long)plVar6 + -0x80) = unaff_x24;
            *(undefined8 *)((long)plVar6 + -0x70) = *(undefined8 *)((long)plVar6 + -0xf8);
            *(undefined8 *)((long)plVar6 + -0x78) = *(undefined8 *)((long)plVar6 + -0x100);
            lVar17 = unaff_x23;
            goto LAB_0150c724;
          }
        }
LAB_0150c7d4:
        func_0x00f78af4();
LAB_0150c7d8:
        uVar15 = func_0x00f78b24();
        auVar25 = func_0x00f78ac0(uVar15,0);
        lVar17 = auVar25._8_8_;
        *(undefined8 *)((long)plVar6 + -0x180) = unaff_x26;
        *(long *)((long)plVar6 + -0x178) = unaff_x25;
        *(long *)((long)plVar6 + -0x170) = unaff_x24;
        *(long *)((long)plVar6 + -0x168) = unaff_x23;
        *(long *)((long)plVar6 + -0x160) = lVar16;
        *(long *)((long)plVar6 + -0x158) = lVar5;
        *(ulong *)((long)plVar6 + -0x150) = uVar3;
        *(long *)((long)plVar6 + -0x148) = lVar14;
        *(undefined1 **)((long)plVar6 + -0x140) = (undefined1 *)((long)plVar6 + -0x10);
        *(code **)((long)plVar6 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar15 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar17 + 0x18),*(undefined4 *)(lVar17 + 0x1c),
                                 *(undefined4 *)(lVar17 + 0x20),_UNK_033f8144,
                                 *(undefined8 *)(lVar17 + 0x10),0,0);
        uVar15 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar15,10,uRam0000000003d5e7a8);
        uVar15 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar15,*(undefined8 *)(lVar17 + 0x58),uRam0000000003d5e6e0);
        uVar15 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar15,1,uRam0000000003d5e888);
        lVar14 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar15,auVar25._0_8_,uRam0000000003d5e850);
        if ((lVar14 != 0) && (*(char *)(lVar14 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)(lVar17 + 0x10);
        }
        return;
      }
    }
    uVar10 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar10,0);
    puVar20 = (undefined1 *)((long)plVar6 + -0x30);
    *(undefined1 **)((long)plVar6 + -0x30) = (undefined1 *)((long)plVar6 + -0x10);
    *(undefined **)((long)plVar6 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar14 = *(long *)(auVar25._0_8_ + 0x28);
    auVar25._8_8_ = auVar25._8_8_;
    auVar25._0_8_ = lVar14;
    if (lVar14 == 0) {
      pcVar21 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar25 = func_0x00f78af4();
      plVar6 = (long *)((long)plVar6 + -0x30);
    }
    else {
      puVar20 = *(undefined1 **)((long)plVar6 + -0x30);
      pcVar21 = *(code **)((long)plVar6 + -0x28);
      plVar6 = (long *)((long)plVar6 + -0x20);
    }
    *(long *)((long)plVar6 + -0x20) = lVar5;
    *(ulong *)((long)plVar6 + -0x18) = uVar13;
    *(undefined1 **)((long)plVar6 + -0x10) = puVar20;
    *(code **)((long)plVar6 + -8) = pcVar21;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar25._0_8_,4,0,auVar25._8_8_);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar25._0_8_,5,0,auVar25._8_8_);
    uVar3 = 7;
    uVar10 = 0;
    ppppuVar19 = *(undefined8 *****)((long)plVar6 + -0x10);
    pcVar21 = *(code **)((long)plVar6 + -8);
    lVar14 = *(long *)((long)plVar6 + -0x20);
    uVar13 = *(ulong *)((long)plVar6 + -0x18);
  } while( true );
}



// ============================================================
// RVA: 0x150e10c | Atlas.UI.Screens.TopBarScreen.OnButtonPressed
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen__OnButtonPressed
               (undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  undefined4 uVar14;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar15;
  undefined8 unaff_x28;
  undefined1 *puVar16;
  undefined1 *unaff_x29;
  code *pcVar17;
  code *unaff_x30;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  
  if ((bRam0000000003eb4d61 & 1) == 0) {
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d61 = 1;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41348);
  if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0)) {
    uVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4d62 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d62 = 1;
    }
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar6,uRam0000000003d41348);
    if (((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) &&
       (plVar8 = *(long **)(*(long *)(lVar7 + 0x18) + 0x30), plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x9c8))(plVar8,1,*(undefined8 *)(*plVar8 + 0x9d0));
      return;
    }
    uVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4d63 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d63 = 1;
    }
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar6,uRam0000000003d41348);
    if (((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) &&
       (plVar8 = *(long **)(*(long *)(lVar7 + 0x18) + 0x30), plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x9c8))(plVar8,0,*(undefined8 *)(*plVar8 + 0x9d0));
      return;
    }
    lVar7 = func_0x00f78af4();
    if ((bRam0000000003eb4d64 & 1) == 0) {
      func_0x00f78a20(0x3d2c9a0);
      func_0x00f78a20(0x3d1f8d8);
      bRam0000000003eb4d64 = 1;
    }
    uVar6 = func_0x00f78a34(/*Atlas.UI.Screens.TopBarScreen.Element[]_TypeInfo*/ uRam0000000003d1f8d8,9);
    *(undefined8 *)(lVar7 + 0x70) = uVar6;
    *(undefined1 *)(lVar7 + 0x80) = 1;
    if (lVar7 == 0) {
      auVar23 = func_0x00f78af4();
      puVar11 = auVar23._8_8_;
      puVar9 = auVar23._0_8_;
      uVar18 = puVar11[1];
      uVar6 = *puVar11;
      puVar9[2] = puVar11[2];
      puVar9[1] = uVar18;
      *puVar9 = uVar6;
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c9a0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  puVar2 = &stack0xffffffffffffffe0;
  puVar16 = &stack0xfffffffffffffff0;
  lVar12 = *(long *)(lVar7 + 0x30);
  uVar5 = unaff_x19;
  lVar4 = unaff_x20;
  if (lVar12 == 0) {
code_r0x0150b5a8:
    func_0x00f78af4();
    param_2 = uVar5;
    unaff_x20 = lVar4;
  }
  else {
    uVar10 = (uint)param_2;
    if (uVar10 < *(uint *)(lVar12 + 0x18)) {
      lVar4 = *(long *)(lVar12 + (long)(int)uVar10 * 8 + 0x20);
      if (lVar4 == 0) {
        if (8 < uVar10) {
          return;
        }
        uVar13 = 0x143;
code_r0x0150b574:
        if ((1 << (ulong)(uVar10 & 0x1f) & uVar13) == 0) {
          return;
        }
      }
      else {
        uVar5 = /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(lVar4,0);
        if ((uVar10 != 0) || ((uVar5 & 1) == 0)) {
          if (8 < uVar10) {
            return;
          }
          uVar13 = 0x142;
          goto code_r0x0150b574;
        }
      }
      auVar24._8_4_ = uVar10;
      auVar24._0_8_ = *(long *)(lVar7 + 0x28);
      uVar5 = param_2;
      lVar4 = lVar7;
      if (*(long *)(lVar7 + 0x28) != 0) {
        param_3 = 0;
        param_4 = 1;
        puVar2 = (undefined1 *)register0x00000008;
        puVar16 = unaff_x29;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  unaff_x19 = param_2;
  uVar6 = func_0x00f78b24();
  unaff_x30 = Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar24 = func_0x00f78ac0(uVar6,0);
code_r0x0150b5b8:
  auVar23._8_8_ = param_4;
  auVar23._0_8_ = auVar24._0_8_;
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = auVar24._0_8_;
  if (auVar24._8_4_ < 9) {
    uVar5 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar24._8_4_ * 4);
    auVar23 = auVar1;
  }
  else {
    uVar5 = 0xffffffff;
  }
  do {
    lVar7 = auVar23._0_8_;
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(ulong *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar16;
    *(code **)(puVar2 + -8) = unaff_x30;
    uVar10 = (uint)uVar5;
    if (uVar10 == 0xffffffff) {
      return;
    }
    lVar4 = *(long *)(lVar7 + 0x70);
    if (lVar4 == 0) {
      func_0x00f78af4();
    }
    else {
      unaff_x19 = uVar5;
      if (uVar10 < *(uint *)(lVar4 + 0x18)) {
        uVar14 = 2;
        if ((int)param_3 == 0) {
          uVar14 = 0;
        }
        *(undefined4 *)(lVar4 + (long)(int)uVar10 * 0x60 + 0x5c) = uVar14;
        if ((auVar23._8_8_ & 1) == 0) {
          Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar7,uVar5);
        }
        *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
        *(long *)(puVar2 + -0x48) = unaff_x25;
        *(long *)(puVar2 + -0x40) = unaff_x24;
        *(long *)(puVar2 + -0x38) = unaff_x23;
        *(long *)(puVar2 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        lVar4 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar12 = *(long *)(lVar7 + 0x70);
        if (lVar12 == 0) goto LAB_0150c7d4;
        if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_0150c7d8;
        unaff_x25 = (long)(int)uVar10;
        lVar12 = lVar12 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar12 + 0x20);
        unaff_x22 = *(long *)(lVar12 + 0x28);
        uVar6 = *(undefined8 *)(lVar12 + 0x30);
        uVar19 = *(undefined8 *)(lVar12 + 0x48);
        uVar18 = *(undefined8 *)(lVar12 + 0x40);
        *(undefined8 *)(puVar2 + -0xe8) = *(undefined8 *)(lVar12 + 0x38);
        *(undefined8 *)(puVar2 + -0xf0) = uVar6;
        *(undefined8 *)(puVar2 + -0xd8) = uVar19;
        *(undefined8 *)(puVar2 + -0xe0) = uVar18;
        lVar4 = *(long *)(lVar12 + 0x50);
        iVar15 = *(int *)(lVar12 + 0x58);
        iVar3 = *(int *)(lVar12 + 0x5c);
        unaff_x23 = *(long *)(lVar12 + 0x60);
        unaff_x24 = *(long *)(lVar12 + 0x68);
        uVar6 = *(undefined8 *)(lVar12 + 0x70);
        *(undefined8 *)(puVar2 + -0xf8) = *(undefined8 *)(lVar12 + 0x78);
        *(undefined8 *)(puVar2 + -0x100) = uVar6;
        if (iVar3 == iVar15) {
LAB_0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
          if (iVar3 == 0) {
            return;
          }
          if (lVar4 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar4,iVar15 == 2,0);
            return;
          }
        }
        else if (iVar15 == 2) {
          if (iVar3 == 0) {
            if (unaff_x24 == 0) goto LAB_0150c7d4;
            uVar18 = *(undefined8 *)(lVar12 + 0x38);
            uVar6 = *(undefined8 *)(lVar12 + 0x30);
            uVar20 = *(undefined8 *)(lVar12 + 0x48);
            uVar19 = *(undefined8 *)(lVar12 + 0x40);
            *(undefined8 *)(puVar2 + -0x118) = uVar18;
            *(undefined8 *)(puVar2 + -0x120) = uVar6;
            *(undefined8 *)(puVar2 + -0x108) = uVar20;
            *(undefined8 *)(puVar2 + -0x110) = uVar19;
            uVar22 = *(undefined8 *)(lVar12 + 0x78);
            uVar21 = *(undefined8 *)(lVar12 + 0x70);
            *(undefined8 *)(puVar2 + -0x128) = uVar22;
            *(undefined8 *)(puVar2 + -0x130) = uVar21;
            *(undefined8 *)(puVar2 + -200) = unaff_x26;
            *(long *)(puVar2 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar2 + -0xb0) = uVar18;
            *(undefined8 *)(puVar2 + -0xb8) = uVar6;
            *(undefined8 *)(puVar2 + -0xa0) = uVar20;
            *(undefined8 *)(puVar2 + -0xa8) = uVar19;
            *(long *)(puVar2 + -0x98) = lVar4;
            *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8620;
            *(long *)(puVar2 + -0x88) = unaff_x23;
            *(long *)(puVar2 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x70) = uVar22;
            *(undefined8 *)(puVar2 + -0x78) = uVar21;
            lVar12 = unaff_x24;
LAB_0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar12,puVar2 + -200,uRam0000000003d2a408);
            iVar15 = 1;
          }
          else {
            iVar15 = 2;
          }
LAB_0150c72c:
          lVar12 = *(long *)(lVar7 + 0x70);
          if (lVar12 != 0) {
            if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_0150c7d8;
            lVar12 = lVar12 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar12 + 0x20) = unaff_x26;
            *(long *)(lVar12 + 0x28) = unaff_x22;
            uVar6 = *(undefined8 *)(puVar2 + -0xf0);
            uVar19 = *(undefined8 *)(puVar2 + -0xd8);
            uVar18 = *(undefined8 *)(puVar2 + -0xe0);
            *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(puVar2 + -0xe8);
            *(undefined8 *)(lVar12 + 0x30) = uVar6;
            *(undefined8 *)(lVar12 + 0x48) = uVar19;
            *(undefined8 *)(lVar12 + 0x40) = uVar18;
            *(long *)(lVar12 + 0x50) = lVar4;
            *(int *)(lVar12 + 0x58) = iVar15;
            *(int *)(lVar12 + 0x5c) = iVar3;
            *(long *)(lVar12 + 0x60) = unaff_x23;
            *(long *)(lVar12 + 0x68) = unaff_x24;
            uVar6 = *(undefined8 *)(puVar2 + -0x100);
            *(undefined8 *)(lVar12 + 0x78) = *(undefined8 *)(puVar2 + -0xf8);
            *(undefined8 *)(lVar12 + 0x70) = uVar6;
            goto LAB_0150c768;
          }
        }
        else {
          if (iVar15 != 0) goto LAB_0150c72c;
          if (iVar3 != 2) {
            iVar15 = 0;
            goto LAB_0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar12 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar12,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar2 + -200) = unaff_x26;
            *(long *)(puVar2 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0xe8);
            *(undefined8 *)(puVar2 + -0xb8) = *(undefined8 *)(puVar2 + -0xf0);
            *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xd8);
            *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0xe0);
            *(long *)(puVar2 + -0x98) = lVar4;
            *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8628;
            *(long *)(puVar2 + -0x88) = unaff_x23;
            *(long *)(puVar2 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0xf8);
            *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x100);
            lVar12 = unaff_x23;
            goto LAB_0150c724;
          }
        }
LAB_0150c7d4:
        func_0x00f78af4();
LAB_0150c7d8:
        uVar6 = func_0x00f78b24();
        auVar23 = func_0x00f78ac0(uVar6,0);
        lVar12 = auVar23._8_8_;
        *(undefined8 *)(puVar2 + -0x180) = unaff_x26;
        *(long *)(puVar2 + -0x178) = unaff_x25;
        *(long *)(puVar2 + -0x170) = unaff_x24;
        *(long *)(puVar2 + -0x168) = unaff_x23;
        *(long *)(puVar2 + -0x160) = unaff_x22;
        *(long *)(puVar2 + -0x158) = lVar7;
        *(ulong *)(puVar2 + -0x150) = uVar5;
        *(long *)(puVar2 + -0x148) = lVar4;
        *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0x10;
        *(code **)(puVar2 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar6 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar12 + 0x18),*(undefined4 *)(lVar12 + 0x1c),
                                *(undefined4 *)(lVar12 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar12 + 0x10),0,0);
        uVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar6,10,uRam0000000003d5e7a8);
        uVar6 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar6,*(undefined8 *)(lVar12 + 0x58),uRam0000000003d5e6e0);
        uVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar6,1,uRam0000000003d5e888);
        lVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar6,auVar23._0_8_,uRam0000000003d5e850);
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar12 + 0x10);
        }
        return;
      }
    }
    uVar6 = func_0x00f78b24();
    auVar23 = func_0x00f78ac0(uVar6,0);
    puVar16 = puVar2 + -0x30;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar4 = *(long *)(auVar23._0_8_ + 0x28);
    auVar23._8_8_ = auVar23._8_8_;
    auVar23._0_8_ = lVar4;
    if (lVar4 == 0) {
      pcVar17 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar23 = func_0x00f78af4();
      puVar2 = puVar2 + -0x30;
    }
    else {
      puVar16 = *(undefined1 **)(puVar2 + -0x30);
      pcVar17 = *(code **)(puVar2 + -0x28);
      puVar2 = puVar2 + -0x20;
    }
    *(long *)(puVar2 + -0x20) = lVar7;
    *(ulong *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar16;
    *(code **)(puVar2 + -8) = pcVar17;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar23._0_8_,4,0,auVar23._8_8_);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar23._0_8_,5,0,auVar23._8_8_);
    uVar5 = 7;
    param_3 = 0;
    puVar16 = *(undefined1 **)(puVar2 + -0x10);
    unaff_x30 = *(code **)(puVar2 + -8);
    unaff_x20 = *(long *)(puVar2 + -0x20);
    unaff_x19 = *(ulong *)(puVar2 + -0x18);
  } while( true );
}



// ============================================================
// RVA: 0x150e17c | Atlas.UI.Screens.TopBarScreen.OnTransparentGameCenterButtonSelected
// ============================================================

void Atlas_UI_Screens_TopBarScreen__OnTransparentGameCenterButtonSelected(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4d62 & 1) == 0) {
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d62 = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41348);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x18) != 0)) &&
     (plVar2 = *(long **)(*(long *)(lVar1 + 0x18) + 0x30), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x9c8))(plVar2,1,*(undefined8 *)(*plVar2 + 0x9d0));
    return;
  }
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4d63 & 1) == 0) {
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d63 = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar3,uRam0000000003d41348);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x18) != 0)) &&
     (plVar2 = *(long **)(*(long *)(lVar1 + 0x18) + 0x30), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x9c8))(plVar2,0,*(undefined8 *)(*plVar2 + 0x9d0));
    return;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4d64 & 1) == 0) {
    func_0x00f78a20(0x3d2c9a0);
    func_0x00f78a20(0x3d1f8d8);
    bRam0000000003eb4d64 = 1;
  }
  uVar3 = func_0x00f78a34(/*Atlas.UI.Screens.TopBarScreen.Element[]_TypeInfo*/ uRam0000000003d1f8d8,9);
  *(undefined8 *)(lVar1 + 0x70) = uVar3;
  *(undefined1 *)(lVar1 + 0x80) = 1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c9a0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar7 = func_0x00f78af4();
  puVar5 = auVar7._8_8_;
  puVar4 = auVar7._0_8_;
  uVar6 = puVar5[1];
  uVar3 = *puVar5;
  puVar4[2] = puVar5[2];
  puVar4[1] = uVar6;
  *puVar4 = uVar3;
  return;
}



// ============================================================
// RVA: 0x150e1fc | Atlas.UI.Screens.TopBarScreen.OnTransparentGameCenterButtonDeselected
// ============================================================

void Atlas_UI_Screens_TopBarScreen__OnTransparentGameCenterButtonDeselected(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4d63 & 1) == 0) {
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d63 = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41348);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x18) != 0)) &&
     (plVar2 = *(long **)(*(long *)(lVar1 + 0x18) + 0x30), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x9c8))(plVar2,0,*(undefined8 *)(*plVar2 + 0x9d0));
    return;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4d64 & 1) == 0) {
    func_0x00f78a20(0x3d2c9a0);
    func_0x00f78a20(0x3d1f8d8);
    bRam0000000003eb4d64 = 1;
  }
  uVar3 = func_0x00f78a34(/*Atlas.UI.Screens.TopBarScreen.Element[]_TypeInfo*/ uRam0000000003d1f8d8,9);
  *(undefined8 *)(lVar1 + 0x70) = uVar3;
  *(undefined1 *)(lVar1 + 0x80) = 1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c9a0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar7 = func_0x00f78af4();
  puVar5 = auVar7._8_8_;
  puVar4 = auVar7._0_8_;
  uVar6 = puVar5[1];
  uVar3 = *puVar5;
  puVar4[2] = puVar5[2];
  puVar4[1] = uVar6;
  *puVar4 = uVar3;
  return;
}



// ============================================================
// RVA: 0x150e27c | Atlas.UI.Screens.TopBarScreen..ctor
// ============================================================

void Atlas_UI_Screens_TopBarScreen___ctor(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4d64 & 1) == 0) {
    func_0x00f78a20(0x3d2c9a0);
    func_0x00f78a20(0x3d1f8d8);
    bRam0000000003eb4d64 = 1;
  }
  uVar1 = func_0x00f78a34(/*Atlas.UI.Screens.TopBarScreen.Element[]_TypeInfo*/ uRam0000000003d1f8d8,9);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined1 *)(param_1 + 0x80) = 1;
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c9a0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar5 = func_0x00f78af4();
  puVar3 = auVar5._8_8_;
  puVar2 = auVar5._0_8_;
  uVar4 = puVar3[1];
  uVar1 = *puVar3;
  puVar2[2] = puVar3[2];
  puVar2[1] = uVar4;
  *puVar2 = uVar1;
  return;
}



// ============================================================
// RVA: 0x150e2fc | Atlas.UI.Screens.TopBarScreen..cctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen___cctor(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((bRam0000000003eb4d65 & 1) == 0) {
    func_0x00f78a20(0x3d25328);
    bRam0000000003eb4d65 = 1;
  }
  puVar1 = *(undefined8 **)(/*Atlas.UI.Screens.TopBarScreen_TypeInfo*/ lRam0000000003d25328 + 0xb8);
  *puVar1 = _UNK_033f8630;
  *(undefined4 *)(puVar1 + 1) = 0;
  lVar2 = *(long *)(/*Atlas.UI.Screens.TopBarScreen_TypeInfo*/ lRam0000000003d25328 + 0xb8);
  *(undefined8 *)(lVar2 + 0xc) = _UNK_033f8638;
  *(undefined4 *)(lVar2 + 0x14) = 0;
  return;
}



// ============================================================
// RVA: 0x150e36c | Atlas.UI.Screens.TopBarScreen.<OnBeforeEnter>b__39_0
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen___OnBeforeEnter_b__39_0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar16;
  undefined8 unaff_x28;
  undefined1 *puVar17;
  undefined1 *unaff_x29;
  code *pcVar18;
  code *unaff_x30;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  
  if ((bRam0000000003eb4d61 & 1) == 0) {
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d61 = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41348);
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) {
    uVar5 = func_0x00f78af4();
    if ((bRam0000000003eb4d62 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d62 = 1;
    }
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar5,uRam0000000003d41348);
    if (((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) &&
       (plVar7 = *(long **)(*(long *)(lVar6 + 0x18) + 0x30), plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x9c8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x9d0));
      return;
    }
    uVar5 = func_0x00f78af4();
    if ((bRam0000000003eb4d63 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d63 = 1;
    }
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar5,uRam0000000003d41348);
    if (((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) &&
       (plVar7 = *(long **)(*(long *)(lVar6 + 0x18) + 0x30), plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x9c8))(plVar7,0,*(undefined8 *)(*plVar7 + 0x9d0));
      return;
    }
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4d64 & 1) == 0) {
      func_0x00f78a20(0x3d2c9a0);
      func_0x00f78a20(0x3d1f8d8);
      bRam0000000003eb4d64 = 1;
    }
    uVar5 = func_0x00f78a34(/*Atlas.UI.Screens.TopBarScreen.Element[]_TypeInfo*/ uRam0000000003d1f8d8,9);
    *(undefined8 *)(lVar6 + 0x70) = uVar5;
    *(undefined1 *)(lVar6 + 0x80) = 1;
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c9a0 + 0x18) + 0xc0) + 0x38))
                ();
      return;
    }
    auVar24 = func_0x00f78af4();
    puVar10 = auVar24._8_8_;
    puVar8 = auVar24._0_8_;
    uVar19 = puVar10[1];
    uVar5 = *puVar10;
    puVar8[2] = puVar10[2];
    puVar8[1] = uVar19;
    *puVar8 = uVar5;
    return;
  }
  puVar2 = &stack0xffffffffffffffe0;
  puVar17 = &stack0xfffffffffffffff0;
  lVar11 = *(long *)(lVar6 + 0x30);
  uVar15 = unaff_x19;
  lVar12 = unaff_x20;
  if (lVar11 == 0) {
code_r0x0150b5a8:
    func_0x00f78af4();
    uVar4 = uVar15;
    unaff_x20 = lVar12;
  }
  else {
    uVar15 = 0;
    uVar4 = 0;
    if (*(int *)(lVar11 + 0x18) != 0) {
      if (*(long *)(lVar11 + 0x20) == 0) {
        bVar13 = true;
code_r0x0150b574:
        if (!bVar13) {
          return;
        }
      }
      else {
        uVar4 = /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(*(long *)(lVar11 + 0x20),0);
        if ((uVar4 & 1) == 0) {
          bVar13 = false;
          goto code_r0x0150b574;
        }
      }
      lVar12 = lVar6;
      if (*(ulong *)(lVar6 + 0x28) != 0) {
        auVar25._8_4_ = 0;
        auVar25._0_8_ = *(ulong *)(lVar6 + 0x28);
        param_3 = 0;
        param_4 = 1;
        puVar2 = (undefined1 *)register0x00000008;
        puVar17 = unaff_x29;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  unaff_x19 = uVar4;
  uVar5 = func_0x00f78b24();
  unaff_x30 = Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar25 = func_0x00f78ac0(uVar5,0);
code_r0x0150b5b8:
  auVar24._8_8_ = param_4;
  auVar24._0_8_ = auVar25._0_8_;
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = auVar25._0_8_;
  if (auVar25._8_4_ < 9) {
    uVar15 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar25._8_4_ * 4);
    auVar24 = auVar1;
  }
  else {
    uVar15 = 0xffffffff;
  }
  do {
    lVar6 = auVar24._0_8_;
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(ulong *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar17;
    *(code **)(puVar2 + -8) = unaff_x30;
    uVar9 = (uint)uVar15;
    if (uVar9 == 0xffffffff) {
      return;
    }
    lVar12 = *(long *)(lVar6 + 0x70);
    if (lVar12 == 0) {
      func_0x00f78af4();
    }
    else {
      unaff_x19 = uVar15;
      if (uVar9 < *(uint *)(lVar12 + 0x18)) {
        uVar14 = 2;
        if ((int)param_3 == 0) {
          uVar14 = 0;
        }
        *(undefined4 *)(lVar12 + (long)(int)uVar9 * 0x60 + 0x5c) = uVar14;
        if ((auVar24._8_8_ & 1) == 0) {
          Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar6,uVar15);
        }
        *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
        *(long *)(puVar2 + -0x48) = unaff_x25;
        *(long *)(puVar2 + -0x40) = unaff_x24;
        *(long *)(puVar2 + -0x38) = unaff_x23;
        *(long *)(puVar2 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        lVar12 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar11 = *(long *)(lVar6 + 0x70);
        if (lVar11 == 0) goto LAB_0150c7d4;
        if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_0150c7d8;
        unaff_x25 = (long)(int)uVar9;
        lVar11 = lVar11 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar11 + 0x20);
        unaff_x22 = *(long *)(lVar11 + 0x28);
        uVar5 = *(undefined8 *)(lVar11 + 0x30);
        uVar20 = *(undefined8 *)(lVar11 + 0x48);
        uVar19 = *(undefined8 *)(lVar11 + 0x40);
        *(undefined8 *)(puVar2 + -0xe8) = *(undefined8 *)(lVar11 + 0x38);
        *(undefined8 *)(puVar2 + -0xf0) = uVar5;
        *(undefined8 *)(puVar2 + -0xd8) = uVar20;
        *(undefined8 *)(puVar2 + -0xe0) = uVar19;
        lVar12 = *(long *)(lVar11 + 0x50);
        iVar16 = *(int *)(lVar11 + 0x58);
        iVar3 = *(int *)(lVar11 + 0x5c);
        unaff_x23 = *(long *)(lVar11 + 0x60);
        unaff_x24 = *(long *)(lVar11 + 0x68);
        uVar5 = *(undefined8 *)(lVar11 + 0x70);
        *(undefined8 *)(puVar2 + -0xf8) = *(undefined8 *)(lVar11 + 0x78);
        *(undefined8 *)(puVar2 + -0x100) = uVar5;
        if (iVar3 == iVar16) {
LAB_0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar12,0,0);
          if (iVar3 == 0) {
            return;
          }
          if (lVar12 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar12,iVar16 == 2,0);
            return;
          }
        }
        else if (iVar16 == 2) {
          if (iVar3 == 0) {
            if (unaff_x24 == 0) goto LAB_0150c7d4;
            uVar19 = *(undefined8 *)(lVar11 + 0x38);
            uVar5 = *(undefined8 *)(lVar11 + 0x30);
            uVar21 = *(undefined8 *)(lVar11 + 0x48);
            uVar20 = *(undefined8 *)(lVar11 + 0x40);
            *(undefined8 *)(puVar2 + -0x118) = uVar19;
            *(undefined8 *)(puVar2 + -0x120) = uVar5;
            *(undefined8 *)(puVar2 + -0x108) = uVar21;
            *(undefined8 *)(puVar2 + -0x110) = uVar20;
            uVar23 = *(undefined8 *)(lVar11 + 0x78);
            uVar22 = *(undefined8 *)(lVar11 + 0x70);
            *(undefined8 *)(puVar2 + -0x128) = uVar23;
            *(undefined8 *)(puVar2 + -0x130) = uVar22;
            *(undefined8 *)(puVar2 + -200) = unaff_x26;
            *(long *)(puVar2 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar2 + -0xb0) = uVar19;
            *(undefined8 *)(puVar2 + -0xb8) = uVar5;
            *(undefined8 *)(puVar2 + -0xa0) = uVar21;
            *(undefined8 *)(puVar2 + -0xa8) = uVar20;
            *(long *)(puVar2 + -0x98) = lVar12;
            *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8620;
            *(long *)(puVar2 + -0x88) = unaff_x23;
            *(long *)(puVar2 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x70) = uVar23;
            *(undefined8 *)(puVar2 + -0x78) = uVar22;
            lVar11 = unaff_x24;
LAB_0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar11,puVar2 + -200,uRam0000000003d2a408);
            iVar16 = 1;
          }
          else {
            iVar16 = 2;
          }
LAB_0150c72c:
          lVar11 = *(long *)(lVar6 + 0x70);
          if (lVar11 != 0) {
            if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_0150c7d8;
            lVar11 = lVar11 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar11 + 0x20) = unaff_x26;
            *(long *)(lVar11 + 0x28) = unaff_x22;
            uVar5 = *(undefined8 *)(puVar2 + -0xf0);
            uVar20 = *(undefined8 *)(puVar2 + -0xd8);
            uVar19 = *(undefined8 *)(puVar2 + -0xe0);
            *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(puVar2 + -0xe8);
            *(undefined8 *)(lVar11 + 0x30) = uVar5;
            *(undefined8 *)(lVar11 + 0x48) = uVar20;
            *(undefined8 *)(lVar11 + 0x40) = uVar19;
            *(long *)(lVar11 + 0x50) = lVar12;
            *(int *)(lVar11 + 0x58) = iVar16;
            *(int *)(lVar11 + 0x5c) = iVar3;
            *(long *)(lVar11 + 0x60) = unaff_x23;
            *(long *)(lVar11 + 0x68) = unaff_x24;
            uVar5 = *(undefined8 *)(puVar2 + -0x100);
            *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(puVar2 + -0xf8);
            *(undefined8 *)(lVar11 + 0x70) = uVar5;
            goto LAB_0150c768;
          }
        }
        else {
          if (iVar16 != 0) goto LAB_0150c72c;
          if (iVar3 != 2) {
            iVar16 = 0;
            goto LAB_0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar11 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar11,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar2 + -200) = unaff_x26;
            *(long *)(puVar2 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0xe8);
            *(undefined8 *)(puVar2 + -0xb8) = *(undefined8 *)(puVar2 + -0xf0);
            *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xd8);
            *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0xe0);
            *(long *)(puVar2 + -0x98) = lVar12;
            *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8628;
            *(long *)(puVar2 + -0x88) = unaff_x23;
            *(long *)(puVar2 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0xf8);
            *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x100);
            lVar11 = unaff_x23;
            goto LAB_0150c724;
          }
        }
LAB_0150c7d4:
        func_0x00f78af4();
LAB_0150c7d8:
        uVar5 = func_0x00f78b24();
        auVar24 = func_0x00f78ac0(uVar5,0);
        lVar11 = auVar24._8_8_;
        *(undefined8 *)(puVar2 + -0x180) = unaff_x26;
        *(long *)(puVar2 + -0x178) = unaff_x25;
        *(long *)(puVar2 + -0x170) = unaff_x24;
        *(long *)(puVar2 + -0x168) = unaff_x23;
        *(long *)(puVar2 + -0x160) = unaff_x22;
        *(long *)(puVar2 + -0x158) = lVar6;
        *(ulong *)(puVar2 + -0x150) = uVar15;
        *(long *)(puVar2 + -0x148) = lVar12;
        *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0x10;
        *(code **)(puVar2 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar5 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x1c),
                                *(undefined4 *)(lVar11 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar11 + 0x10),0,0);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,10,uRam0000000003d5e7a8);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar5,*(undefined8 *)(lVar11 + 0x58),uRam0000000003d5e6e0);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar5,1,uRam0000000003d5e888);
        lVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar5,auVar24._0_8_,uRam0000000003d5e850);
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar11 + 0x10);
        }
        return;
      }
    }
    uVar5 = func_0x00f78b24();
    auVar24 = func_0x00f78ac0(uVar5,0);
    puVar17 = puVar2 + -0x30;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar12 = *(long *)(auVar24._0_8_ + 0x28);
    auVar24._8_8_ = auVar24._8_8_;
    auVar24._0_8_ = lVar12;
    if (lVar12 == 0) {
      pcVar18 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar24 = func_0x00f78af4();
      puVar2 = puVar2 + -0x30;
    }
    else {
      puVar17 = *(undefined1 **)(puVar2 + -0x30);
      pcVar18 = *(code **)(puVar2 + -0x28);
      puVar2 = puVar2 + -0x20;
    }
    *(long *)(puVar2 + -0x20) = lVar6;
    *(ulong *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar17;
    *(code **)(puVar2 + -8) = pcVar18;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar24._0_8_,4,0,auVar24._8_8_);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar24._0_8_,5,0,auVar24._8_8_);
    uVar15 = 7;
    param_3 = 0;
    puVar17 = *(undefined1 **)(puVar2 + -0x10);
    unaff_x30 = *(code **)(puVar2 + -8);
    unaff_x20 = *(long *)(puVar2 + -0x20);
    unaff_x19 = *(ulong *)(puVar2 + -0x18);
  } while( true );
}



// ============================================================
// RVA: 0x150e374 | Atlas.UI.Screens.TopBarScreen.<OnBeforeEnter>b__39_1
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0150b544) */
/* WARNING: Removing unreachable block (ram,0x0150b59c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen___OnBeforeEnter_b__39_1
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar15;
  undefined8 unaff_x28;
  undefined1 *puVar16;
  undefined1 *unaff_x29;
  code *pcVar17;
  code *unaff_x30;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  
  if ((bRam0000000003eb4d61 & 1) == 0) {
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d61 = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41348);
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) {
    uVar5 = func_0x00f78af4();
    if ((bRam0000000003eb4d62 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d62 = 1;
    }
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar5,uRam0000000003d41348);
    if (((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) &&
       (plVar7 = *(long **)(*(long *)(lVar6 + 0x18) + 0x30), plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x9c8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x9d0));
      return;
    }
    uVar5 = func_0x00f78af4();
    if ((bRam0000000003eb4d63 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d63 = 1;
    }
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar5,uRam0000000003d41348);
    if (((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) &&
       (plVar7 = *(long **)(*(long *)(lVar6 + 0x18) + 0x30), plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x9c8))(plVar7,0,*(undefined8 *)(*plVar7 + 0x9d0));
      return;
    }
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4d64 & 1) == 0) {
      func_0x00f78a20(0x3d2c9a0);
      func_0x00f78a20(0x3d1f8d8);
      bRam0000000003eb4d64 = 1;
    }
    uVar5 = func_0x00f78a34(/*Atlas.UI.Screens.TopBarScreen.Element[]_TypeInfo*/ uRam0000000003d1f8d8,9);
    *(undefined8 *)(lVar6 + 0x70) = uVar5;
    *(undefined1 *)(lVar6 + 0x80) = 1;
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c9a0 + 0x18) + 0xc0) + 0x38))
                ();
      return;
    }
    auVar23 = func_0x00f78af4();
    puVar10 = auVar23._8_8_;
    puVar8 = auVar23._0_8_;
    uVar18 = puVar10[1];
    uVar5 = *puVar10;
    puVar8[2] = puVar10[2];
    puVar8[1] = uVar18;
    *puVar8 = uVar5;
    return;
  }
  puVar3 = &stack0xffffffffffffffe0;
  puVar16 = &stack0xfffffffffffffff0;
  lVar11 = *(long *)(lVar6 + 0x30);
  uVar14 = unaff_x19;
  lVar12 = unaff_x20;
  if (lVar11 == 0) {
code_r0x0150b5a8:
    func_0x00f78af4();
    uVar2 = uVar14;
    unaff_x20 = lVar12;
  }
  else {
    uVar14 = 1;
    uVar2 = 1;
    if (1 < *(uint *)(lVar11 + 0x18)) {
      if (*(long *)(lVar11 + 0x28) != 0) {
        /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(*(long *)(lVar11 + 0x28),0);
      }
      lVar12 = lVar6;
      if (*(long *)(lVar6 + 0x28) != 0) {
        auVar24._8_4_ = 1;
        auVar24._0_8_ = *(long *)(lVar6 + 0x28);
        param_3 = 0;
        param_4 = 1;
        puVar3 = (undefined1 *)register0x00000008;
        puVar16 = unaff_x29;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  unaff_x19 = uVar2;
  uVar5 = func_0x00f78b24();
  unaff_x30 = Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar24 = func_0x00f78ac0(uVar5,0);
code_r0x0150b5b8:
  auVar23._8_8_ = param_4;
  auVar23._0_8_ = auVar24._0_8_;
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = auVar24._0_8_;
  if (auVar24._8_4_ < 9) {
    uVar14 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar24._8_4_ * 4);
    auVar23 = auVar1;
  }
  else {
    uVar14 = 0xffffffff;
  }
  do {
    lVar6 = auVar23._0_8_;
    *(long *)(puVar3 + -0x20) = unaff_x20;
    *(ulong *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar16;
    *(code **)(puVar3 + -8) = unaff_x30;
    uVar9 = (uint)uVar14;
    if (uVar9 == 0xffffffff) {
      return;
    }
    lVar12 = *(long *)(lVar6 + 0x70);
    if (lVar12 == 0) {
      func_0x00f78af4();
    }
    else {
      unaff_x19 = uVar14;
      if (uVar9 < *(uint *)(lVar12 + 0x18)) {
        uVar13 = 2;
        if ((int)param_3 == 0) {
          uVar13 = 0;
        }
        *(undefined4 *)(lVar12 + (long)(int)uVar9 * 0x60 + 0x5c) = uVar13;
        if ((auVar23._8_8_ & 1) == 0) {
          Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar6,uVar14);
        }
        *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
        *(long *)(puVar3 + -0x48) = unaff_x25;
        *(long *)(puVar3 + -0x40) = unaff_x24;
        *(long *)(puVar3 + -0x38) = unaff_x23;
        *(long *)(puVar3 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
        *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        lVar12 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar11 = *(long *)(lVar6 + 0x70);
        if (lVar11 == 0) goto LAB_0150c7d4;
        if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_0150c7d8;
        unaff_x25 = (long)(int)uVar9;
        lVar11 = lVar11 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar11 + 0x20);
        unaff_x22 = *(long *)(lVar11 + 0x28);
        uVar5 = *(undefined8 *)(lVar11 + 0x30);
        uVar19 = *(undefined8 *)(lVar11 + 0x48);
        uVar18 = *(undefined8 *)(lVar11 + 0x40);
        *(undefined8 *)(puVar3 + -0xe8) = *(undefined8 *)(lVar11 + 0x38);
        *(undefined8 *)(puVar3 + -0xf0) = uVar5;
        *(undefined8 *)(puVar3 + -0xd8) = uVar19;
        *(undefined8 *)(puVar3 + -0xe0) = uVar18;
        lVar12 = *(long *)(lVar11 + 0x50);
        iVar15 = *(int *)(lVar11 + 0x58);
        iVar4 = *(int *)(lVar11 + 0x5c);
        unaff_x23 = *(long *)(lVar11 + 0x60);
        unaff_x24 = *(long *)(lVar11 + 0x68);
        uVar5 = *(undefined8 *)(lVar11 + 0x70);
        *(undefined8 *)(puVar3 + -0xf8) = *(undefined8 *)(lVar11 + 0x78);
        *(undefined8 *)(puVar3 + -0x100) = uVar5;
        if (iVar4 == iVar15) {
LAB_0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar12,0,0);
          if (iVar4 == 0) {
            return;
          }
          if (lVar12 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar12,iVar15 == 2,0);
            return;
          }
        }
        else if (iVar15 == 2) {
          if (iVar4 == 0) {
            if (unaff_x24 == 0) goto LAB_0150c7d4;
            uVar18 = *(undefined8 *)(lVar11 + 0x38);
            uVar5 = *(undefined8 *)(lVar11 + 0x30);
            uVar20 = *(undefined8 *)(lVar11 + 0x48);
            uVar19 = *(undefined8 *)(lVar11 + 0x40);
            *(undefined8 *)(puVar3 + -0x118) = uVar18;
            *(undefined8 *)(puVar3 + -0x120) = uVar5;
            *(undefined8 *)(puVar3 + -0x108) = uVar20;
            *(undefined8 *)(puVar3 + -0x110) = uVar19;
            uVar22 = *(undefined8 *)(lVar11 + 0x78);
            uVar21 = *(undefined8 *)(lVar11 + 0x70);
            *(undefined8 *)(puVar3 + -0x128) = uVar22;
            *(undefined8 *)(puVar3 + -0x130) = uVar21;
            *(undefined8 *)(puVar3 + -200) = unaff_x26;
            *(long *)(puVar3 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar3 + -0xb0) = uVar18;
            *(undefined8 *)(puVar3 + -0xb8) = uVar5;
            *(undefined8 *)(puVar3 + -0xa0) = uVar20;
            *(undefined8 *)(puVar3 + -0xa8) = uVar19;
            *(long *)(puVar3 + -0x98) = lVar12;
            *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8620;
            *(long *)(puVar3 + -0x88) = unaff_x23;
            *(long *)(puVar3 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar3 + -0x70) = uVar22;
            *(undefined8 *)(puVar3 + -0x78) = uVar21;
            lVar11 = unaff_x24;
LAB_0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar11,puVar3 + -200,uRam0000000003d2a408);
            iVar15 = 1;
          }
          else {
            iVar15 = 2;
          }
LAB_0150c72c:
          lVar11 = *(long *)(lVar6 + 0x70);
          if (lVar11 != 0) {
            if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_0150c7d8;
            lVar11 = lVar11 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar11 + 0x20) = unaff_x26;
            *(long *)(lVar11 + 0x28) = unaff_x22;
            uVar5 = *(undefined8 *)(puVar3 + -0xf0);
            uVar19 = *(undefined8 *)(puVar3 + -0xd8);
            uVar18 = *(undefined8 *)(puVar3 + -0xe0);
            *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(puVar3 + -0xe8);
            *(undefined8 *)(lVar11 + 0x30) = uVar5;
            *(undefined8 *)(lVar11 + 0x48) = uVar19;
            *(undefined8 *)(lVar11 + 0x40) = uVar18;
            *(long *)(lVar11 + 0x50) = lVar12;
            *(int *)(lVar11 + 0x58) = iVar15;
            *(int *)(lVar11 + 0x5c) = iVar4;
            *(long *)(lVar11 + 0x60) = unaff_x23;
            *(long *)(lVar11 + 0x68) = unaff_x24;
            uVar5 = *(undefined8 *)(puVar3 + -0x100);
            *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(puVar3 + -0xf8);
            *(undefined8 *)(lVar11 + 0x70) = uVar5;
            goto LAB_0150c768;
          }
        }
        else {
          if (iVar15 != 0) goto LAB_0150c72c;
          if (iVar4 != 2) {
            iVar15 = 0;
            goto LAB_0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar11 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar11,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar3 + -200) = unaff_x26;
            *(long *)(puVar3 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xe8);
            *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0xf0);
            *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xd8);
            *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xe0);
            *(long *)(puVar3 + -0x98) = lVar12;
            *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8628;
            *(long *)(puVar3 + -0x88) = unaff_x23;
            *(long *)(puVar3 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0xf8);
            *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x100);
            lVar11 = unaff_x23;
            goto LAB_0150c724;
          }
        }
LAB_0150c7d4:
        func_0x00f78af4();
LAB_0150c7d8:
        uVar5 = func_0x00f78b24();
        auVar23 = func_0x00f78ac0(uVar5,0);
        lVar11 = auVar23._8_8_;
        *(undefined8 *)(puVar3 + -0x180) = unaff_x26;
        *(long *)(puVar3 + -0x178) = unaff_x25;
        *(long *)(puVar3 + -0x170) = unaff_x24;
        *(long *)(puVar3 + -0x168) = unaff_x23;
        *(long *)(puVar3 + -0x160) = unaff_x22;
        *(long *)(puVar3 + -0x158) = lVar6;
        *(ulong *)(puVar3 + -0x150) = uVar14;
        *(long *)(puVar3 + -0x148) = lVar12;
        *(undefined1 **)(puVar3 + -0x140) = puVar3 + -0x10;
        *(code **)(puVar3 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar5 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x1c),
                                *(undefined4 *)(lVar11 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar11 + 0x10),0,0);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,10,uRam0000000003d5e7a8);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar5,*(undefined8 *)(lVar11 + 0x58),uRam0000000003d5e6e0);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar5,1,uRam0000000003d5e888);
        lVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar5,auVar23._0_8_,uRam0000000003d5e850);
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar11 + 0x10);
        }
        return;
      }
    }
    uVar5 = func_0x00f78b24();
    auVar23 = func_0x00f78ac0(uVar5,0);
    puVar16 = puVar3 + -0x30;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar12 = *(long *)(auVar23._0_8_ + 0x28);
    auVar23._8_8_ = auVar23._8_8_;
    auVar23._0_8_ = lVar12;
    if (lVar12 == 0) {
      pcVar17 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar23 = func_0x00f78af4();
      puVar3 = puVar3 + -0x30;
    }
    else {
      puVar16 = *(undefined1 **)(puVar3 + -0x30);
      pcVar17 = *(code **)(puVar3 + -0x28);
      puVar3 = puVar3 + -0x20;
    }
    *(long *)(puVar3 + -0x20) = lVar6;
    *(ulong *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar16;
    *(code **)(puVar3 + -8) = pcVar17;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar23._0_8_,4,0,auVar23._8_8_);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar23._0_8_,5,0,auVar23._8_8_);
    uVar14 = 7;
    param_3 = 0;
    puVar16 = *(undefined1 **)(puVar3 + -0x10);
    unaff_x30 = *(code **)(puVar3 + -8);
    unaff_x20 = *(long *)(puVar3 + -0x20);
    unaff_x19 = *(ulong *)(puVar3 + -0x18);
  } while( true );
}



// ============================================================
// RVA: 0x150e37c | Atlas.UI.Screens.TopBarScreen.<OnBeforeEnter>b__39_2
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0150b544) */
/* WARNING: Removing unreachable block (ram,0x0150b57c) */
/* WARNING: Removing unreachable block (ram,0x0150b584) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen___OnBeforeEnter_b__39_2
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar14;
  undefined8 unaff_x28;
  undefined1 *puVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  
  if ((bRam0000000003eb4d61 & 1) == 0) {
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d61 = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41348);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) {
    uVar4 = func_0x00f78af4();
    if ((bRam0000000003eb4d62 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d62 = 1;
    }
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar4,uRam0000000003d41348);
    if (((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) &&
       (plVar6 = *(long **)(*(long *)(lVar5 + 0x18) + 0x30), plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x9c8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x9d0));
      return;
    }
    uVar4 = func_0x00f78af4();
    if ((bRam0000000003eb4d63 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d63 = 1;
    }
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar4,uRam0000000003d41348);
    if (((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) &&
       (plVar6 = *(long **)(*(long *)(lVar5 + 0x18) + 0x30), plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x9c8))(plVar6,0,*(undefined8 *)(*plVar6 + 0x9d0));
      return;
    }
    lVar5 = func_0x00f78af4();
    if ((bRam0000000003eb4d64 & 1) == 0) {
      func_0x00f78a20(0x3d2c9a0);
      func_0x00f78a20(0x3d1f8d8);
      bRam0000000003eb4d64 = 1;
    }
    uVar4 = func_0x00f78a34(/*Atlas.UI.Screens.TopBarScreen.Element[]_TypeInfo*/ uRam0000000003d1f8d8,9);
    *(undefined8 *)(lVar5 + 0x70) = uVar4;
    *(undefined1 *)(lVar5 + 0x80) = 1;
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c9a0 + 0x18) + 0xc0) + 0x38))
                ();
      return;
    }
    auVar22 = func_0x00f78af4();
    puVar10 = auVar22._8_8_;
    puVar7 = auVar22._0_8_;
    uVar17 = puVar10[1];
    uVar4 = *puVar10;
    puVar7[2] = puVar10[2];
    puVar7[1] = uVar17;
    *puVar7 = uVar4;
    return;
  }
  puVar2 = &stack0xffffffffffffffe0;
  puVar15 = &stack0xfffffffffffffff0;
  lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + 0x30);
  if (lVar5 == 0) {
    func_0x00f78af4();
  }
  else {
    unaff_x19 = 2;
    if (2 < *(uint *)(lVar5 + 0x18)) {
      if (*(long *)(lVar5 + 0x30) != 0) {
        /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(*(long *)(lVar5 + 0x30),0);
      }
      return;
    }
  }
  uVar4 = func_0x00f78b24();
  auVar23 = func_0x00f78ac0(uVar4,0);
  auVar22._8_8_ = param_4;
  auVar22._0_8_ = auVar23._0_8_;
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = auVar23._0_8_;
  pcVar16 = Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  if (auVar23._8_4_ < 9) {
    uVar9 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar23._8_4_ * 4);
    puVar2 = &stack0xffffffffffffffe0;
    auVar22 = auVar1;
  }
  else {
    uVar9 = 0xffffffff;
  }
  do {
    lVar5 = auVar22._0_8_;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(ulong *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar15;
    *(code **)(puVar2 + -8) = pcVar16;
    uVar8 = (uint)uVar9;
    if (uVar8 == 0xffffffff) {
      return;
    }
    lVar11 = *(long *)(lVar5 + 0x70);
    if (lVar11 == 0) {
      func_0x00f78af4();
    }
    else {
      unaff_x19 = uVar9;
      if (uVar8 < *(uint *)(lVar11 + 0x18)) {
        uVar13 = 2;
        if ((int)param_3 == 0) {
          uVar13 = 0;
        }
        *(undefined4 *)(lVar11 + (long)(int)uVar8 * 0x60 + 0x5c) = uVar13;
        if ((auVar22._8_8_ & 1) == 0) {
          Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar5,uVar9);
        }
        *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
        *(long *)(puVar2 + -0x48) = unaff_x25;
        *(long *)(puVar2 + -0x40) = unaff_x24;
        *(long *)(puVar2 + -0x38) = unaff_x23;
        *(long *)(puVar2 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        lVar11 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar12 = *(long *)(lVar5 + 0x70);
        if (lVar12 == 0) goto LAB_0150c7d4;
        if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0150c7d8;
        unaff_x25 = (long)(int)uVar8;
        lVar12 = lVar12 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar12 + 0x20);
        unaff_x22 = *(long *)(lVar12 + 0x28);
        uVar4 = *(undefined8 *)(lVar12 + 0x30);
        uVar18 = *(undefined8 *)(lVar12 + 0x48);
        uVar17 = *(undefined8 *)(lVar12 + 0x40);
        *(undefined8 *)(puVar2 + -0xe8) = *(undefined8 *)(lVar12 + 0x38);
        *(undefined8 *)(puVar2 + -0xf0) = uVar4;
        *(undefined8 *)(puVar2 + -0xd8) = uVar18;
        *(undefined8 *)(puVar2 + -0xe0) = uVar17;
        lVar11 = *(long *)(lVar12 + 0x50);
        iVar14 = *(int *)(lVar12 + 0x58);
        iVar3 = *(int *)(lVar12 + 0x5c);
        unaff_x23 = *(long *)(lVar12 + 0x60);
        unaff_x24 = *(long *)(lVar12 + 0x68);
        uVar4 = *(undefined8 *)(lVar12 + 0x70);
        *(undefined8 *)(puVar2 + -0xf8) = *(undefined8 *)(lVar12 + 0x78);
        *(undefined8 *)(puVar2 + -0x100) = uVar4;
        if (iVar3 == iVar14) {
LAB_0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0,0);
          if (iVar3 == 0) {
            return;
          }
          if (lVar11 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar11,iVar14 == 2,0);
            return;
          }
        }
        else if (iVar14 == 2) {
          if (iVar3 == 0) {
            if (unaff_x24 == 0) goto LAB_0150c7d4;
            uVar17 = *(undefined8 *)(lVar12 + 0x38);
            uVar4 = *(undefined8 *)(lVar12 + 0x30);
            uVar19 = *(undefined8 *)(lVar12 + 0x48);
            uVar18 = *(undefined8 *)(lVar12 + 0x40);
            *(undefined8 *)(puVar2 + -0x118) = uVar17;
            *(undefined8 *)(puVar2 + -0x120) = uVar4;
            *(undefined8 *)(puVar2 + -0x108) = uVar19;
            *(undefined8 *)(puVar2 + -0x110) = uVar18;
            uVar21 = *(undefined8 *)(lVar12 + 0x78);
            uVar20 = *(undefined8 *)(lVar12 + 0x70);
            *(undefined8 *)(puVar2 + -0x128) = uVar21;
            *(undefined8 *)(puVar2 + -0x130) = uVar20;
            *(undefined8 *)(puVar2 + -200) = unaff_x26;
            *(long *)(puVar2 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar2 + -0xb0) = uVar17;
            *(undefined8 *)(puVar2 + -0xb8) = uVar4;
            *(undefined8 *)(puVar2 + -0xa0) = uVar19;
            *(undefined8 *)(puVar2 + -0xa8) = uVar18;
            *(long *)(puVar2 + -0x98) = lVar11;
            *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8620;
            *(long *)(puVar2 + -0x88) = unaff_x23;
            *(long *)(puVar2 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x70) = uVar21;
            *(undefined8 *)(puVar2 + -0x78) = uVar20;
            lVar12 = unaff_x24;
LAB_0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar12,puVar2 + -200,uRam0000000003d2a408);
            iVar14 = 1;
          }
          else {
            iVar14 = 2;
          }
LAB_0150c72c:
          lVar12 = *(long *)(lVar5 + 0x70);
          if (lVar12 != 0) {
            if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0150c7d8;
            lVar12 = lVar12 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar12 + 0x20) = unaff_x26;
            *(long *)(lVar12 + 0x28) = unaff_x22;
            uVar4 = *(undefined8 *)(puVar2 + -0xf0);
            uVar18 = *(undefined8 *)(puVar2 + -0xd8);
            uVar17 = *(undefined8 *)(puVar2 + -0xe0);
            *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(puVar2 + -0xe8);
            *(undefined8 *)(lVar12 + 0x30) = uVar4;
            *(undefined8 *)(lVar12 + 0x48) = uVar18;
            *(undefined8 *)(lVar12 + 0x40) = uVar17;
            *(long *)(lVar12 + 0x50) = lVar11;
            *(int *)(lVar12 + 0x58) = iVar14;
            *(int *)(lVar12 + 0x5c) = iVar3;
            *(long *)(lVar12 + 0x60) = unaff_x23;
            *(long *)(lVar12 + 0x68) = unaff_x24;
            uVar4 = *(undefined8 *)(puVar2 + -0x100);
            *(undefined8 *)(lVar12 + 0x78) = *(undefined8 *)(puVar2 + -0xf8);
            *(undefined8 *)(lVar12 + 0x70) = uVar4;
            goto LAB_0150c768;
          }
        }
        else {
          if (iVar14 != 0) goto LAB_0150c72c;
          if (iVar3 != 2) {
            iVar14 = 0;
            goto LAB_0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar12 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar12,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar2 + -200) = unaff_x26;
            *(long *)(puVar2 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0xe8);
            *(undefined8 *)(puVar2 + -0xb8) = *(undefined8 *)(puVar2 + -0xf0);
            *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xd8);
            *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0xe0);
            *(long *)(puVar2 + -0x98) = lVar11;
            *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8628;
            *(long *)(puVar2 + -0x88) = unaff_x23;
            *(long *)(puVar2 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0xf8);
            *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x100);
            lVar12 = unaff_x23;
            goto LAB_0150c724;
          }
        }
LAB_0150c7d4:
        func_0x00f78af4();
LAB_0150c7d8:
        uVar4 = func_0x00f78b24();
        auVar22 = func_0x00f78ac0(uVar4,0);
        lVar12 = auVar22._8_8_;
        *(undefined8 *)(puVar2 + -0x180) = unaff_x26;
        *(long *)(puVar2 + -0x178) = unaff_x25;
        *(long *)(puVar2 + -0x170) = unaff_x24;
        *(long *)(puVar2 + -0x168) = unaff_x23;
        *(long *)(puVar2 + -0x160) = unaff_x22;
        *(long *)(puVar2 + -0x158) = lVar5;
        *(ulong *)(puVar2 + -0x150) = uVar9;
        *(long *)(puVar2 + -0x148) = lVar11;
        *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0x10;
        *(code **)(puVar2 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar4 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar12 + 0x18),*(undefined4 *)(lVar12 + 0x1c),
                                *(undefined4 *)(lVar12 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar12 + 0x10),0,0);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,10,uRam0000000003d5e7a8);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar4,*(undefined8 *)(lVar12 + 0x58),uRam0000000003d5e6e0);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar4,1,uRam0000000003d5e888);
        lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar4,auVar22._0_8_,uRam0000000003d5e850);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar12 + 0x10);
        }
        return;
      }
    }
    uVar4 = func_0x00f78b24();
    auVar22 = func_0x00f78ac0(uVar4,0);
    puVar15 = puVar2 + -0x30;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar11 = *(long *)(auVar22._0_8_ + 0x28);
    auVar22._8_8_ = auVar22._8_8_;
    auVar22._0_8_ = lVar11;
    if (lVar11 == 0) {
      pcVar16 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar22 = func_0x00f78af4();
      puVar2 = puVar2 + -0x30;
    }
    else {
      puVar15 = *(undefined1 **)(puVar2 + -0x30);
      pcVar16 = *(code **)(puVar2 + -0x28);
      puVar2 = puVar2 + -0x20;
    }
    *(long *)(puVar2 + -0x20) = lVar5;
    *(ulong *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar15;
    *(code **)(puVar2 + -8) = pcVar16;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar22._0_8_,4,0,auVar22._8_8_);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar22._0_8_,5,0,auVar22._8_8_);
    uVar9 = 7;
    param_3 = 0;
    puVar15 = *(undefined1 **)(puVar2 + -0x10);
    pcVar16 = *(code **)(puVar2 + -8);
    unaff_x20 = *(undefined8 *)(puVar2 + -0x20);
    unaff_x19 = *(ulong *)(puVar2 + -0x18);
  } while( true );
}



// ============================================================
// RVA: 0x150e384 | Atlas.UI.Screens.TopBarScreen.<OnBeforeEnter>b__39_3
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0150b544) */
/* WARNING: Removing unreachable block (ram,0x0150b57c) */
/* WARNING: Removing unreachable block (ram,0x0150b584) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen___OnBeforeEnter_b__39_3
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar14;
  undefined8 unaff_x28;
  undefined1 *puVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  
  if ((bRam0000000003eb4d61 & 1) == 0) {
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d61 = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41348);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) {
    uVar4 = func_0x00f78af4();
    if ((bRam0000000003eb4d62 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d62 = 1;
    }
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar4,uRam0000000003d41348);
    if (((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) &&
       (plVar6 = *(long **)(*(long *)(lVar5 + 0x18) + 0x30), plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x9c8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x9d0));
      return;
    }
    uVar4 = func_0x00f78af4();
    if ((bRam0000000003eb4d63 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d63 = 1;
    }
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar4,uRam0000000003d41348);
    if (((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) &&
       (plVar6 = *(long **)(*(long *)(lVar5 + 0x18) + 0x30), plVar6 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x9c8))(plVar6,0,*(undefined8 *)(*plVar6 + 0x9d0));
      return;
    }
    lVar5 = func_0x00f78af4();
    if ((bRam0000000003eb4d64 & 1) == 0) {
      func_0x00f78a20(0x3d2c9a0);
      func_0x00f78a20(0x3d1f8d8);
      bRam0000000003eb4d64 = 1;
    }
    uVar4 = func_0x00f78a34(/*Atlas.UI.Screens.TopBarScreen.Element[]_TypeInfo*/ uRam0000000003d1f8d8,9);
    *(undefined8 *)(lVar5 + 0x70) = uVar4;
    *(undefined1 *)(lVar5 + 0x80) = 1;
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c9a0 + 0x18) + 0xc0) + 0x38))
                ();
      return;
    }
    auVar22 = func_0x00f78af4();
    puVar10 = auVar22._8_8_;
    puVar7 = auVar22._0_8_;
    uVar17 = puVar10[1];
    uVar4 = *puVar10;
    puVar7[2] = puVar10[2];
    puVar7[1] = uVar17;
    *puVar7 = uVar4;
    return;
  }
  puVar2 = &stack0xffffffffffffffe0;
  puVar15 = &stack0xfffffffffffffff0;
  lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + 0x30);
  if (lVar5 == 0) {
    func_0x00f78af4();
  }
  else {
    unaff_x19 = 5;
    if (5 < *(uint *)(lVar5 + 0x18)) {
      if (*(long *)(lVar5 + 0x48) != 0) {
        /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(*(long *)(lVar5 + 0x48),0);
      }
      return;
    }
  }
  uVar4 = func_0x00f78b24();
  auVar23 = func_0x00f78ac0(uVar4,0);
  auVar22._8_8_ = param_4;
  auVar22._0_8_ = auVar23._0_8_;
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = auVar23._0_8_;
  pcVar16 = Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  if (auVar23._8_4_ < 9) {
    uVar9 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar23._8_4_ * 4);
    puVar2 = &stack0xffffffffffffffe0;
    auVar22 = auVar1;
  }
  else {
    uVar9 = 0xffffffff;
  }
  do {
    lVar5 = auVar22._0_8_;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(ulong *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar15;
    *(code **)(puVar2 + -8) = pcVar16;
    uVar8 = (uint)uVar9;
    if (uVar8 == 0xffffffff) {
      return;
    }
    lVar11 = *(long *)(lVar5 + 0x70);
    if (lVar11 == 0) {
      func_0x00f78af4();
    }
    else {
      unaff_x19 = uVar9;
      if (uVar8 < *(uint *)(lVar11 + 0x18)) {
        uVar13 = 2;
        if ((int)param_3 == 0) {
          uVar13 = 0;
        }
        *(undefined4 *)(lVar11 + (long)(int)uVar8 * 0x60 + 0x5c) = uVar13;
        if ((auVar22._8_8_ & 1) == 0) {
          Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar5,uVar9);
        }
        *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
        *(long *)(puVar2 + -0x48) = unaff_x25;
        *(long *)(puVar2 + -0x40) = unaff_x24;
        *(long *)(puVar2 + -0x38) = unaff_x23;
        *(long *)(puVar2 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
        *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
        *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
        *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
        lVar11 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar12 = *(long *)(lVar5 + 0x70);
        if (lVar12 == 0) goto LAB_0150c7d4;
        if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0150c7d8;
        unaff_x25 = (long)(int)uVar8;
        lVar12 = lVar12 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar12 + 0x20);
        unaff_x22 = *(long *)(lVar12 + 0x28);
        uVar4 = *(undefined8 *)(lVar12 + 0x30);
        uVar18 = *(undefined8 *)(lVar12 + 0x48);
        uVar17 = *(undefined8 *)(lVar12 + 0x40);
        *(undefined8 *)(puVar2 + -0xe8) = *(undefined8 *)(lVar12 + 0x38);
        *(undefined8 *)(puVar2 + -0xf0) = uVar4;
        *(undefined8 *)(puVar2 + -0xd8) = uVar18;
        *(undefined8 *)(puVar2 + -0xe0) = uVar17;
        lVar11 = *(long *)(lVar12 + 0x50);
        iVar14 = *(int *)(lVar12 + 0x58);
        iVar3 = *(int *)(lVar12 + 0x5c);
        unaff_x23 = *(long *)(lVar12 + 0x60);
        unaff_x24 = *(long *)(lVar12 + 0x68);
        uVar4 = *(undefined8 *)(lVar12 + 0x70);
        *(undefined8 *)(puVar2 + -0xf8) = *(undefined8 *)(lVar12 + 0x78);
        *(undefined8 *)(puVar2 + -0x100) = uVar4;
        if (iVar3 == iVar14) {
LAB_0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0,0);
          if (iVar3 == 0) {
            return;
          }
          if (lVar11 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar11,iVar14 == 2,0);
            return;
          }
        }
        else if (iVar14 == 2) {
          if (iVar3 == 0) {
            if (unaff_x24 == 0) goto LAB_0150c7d4;
            uVar17 = *(undefined8 *)(lVar12 + 0x38);
            uVar4 = *(undefined8 *)(lVar12 + 0x30);
            uVar19 = *(undefined8 *)(lVar12 + 0x48);
            uVar18 = *(undefined8 *)(lVar12 + 0x40);
            *(undefined8 *)(puVar2 + -0x118) = uVar17;
            *(undefined8 *)(puVar2 + -0x120) = uVar4;
            *(undefined8 *)(puVar2 + -0x108) = uVar19;
            *(undefined8 *)(puVar2 + -0x110) = uVar18;
            uVar21 = *(undefined8 *)(lVar12 + 0x78);
            uVar20 = *(undefined8 *)(lVar12 + 0x70);
            *(undefined8 *)(puVar2 + -0x128) = uVar21;
            *(undefined8 *)(puVar2 + -0x130) = uVar20;
            *(undefined8 *)(puVar2 + -200) = unaff_x26;
            *(long *)(puVar2 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar2 + -0xb0) = uVar17;
            *(undefined8 *)(puVar2 + -0xb8) = uVar4;
            *(undefined8 *)(puVar2 + -0xa0) = uVar19;
            *(undefined8 *)(puVar2 + -0xa8) = uVar18;
            *(long *)(puVar2 + -0x98) = lVar11;
            *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8620;
            *(long *)(puVar2 + -0x88) = unaff_x23;
            *(long *)(puVar2 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x70) = uVar21;
            *(undefined8 *)(puVar2 + -0x78) = uVar20;
            lVar12 = unaff_x24;
LAB_0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar12,puVar2 + -200,uRam0000000003d2a408);
            iVar14 = 1;
          }
          else {
            iVar14 = 2;
          }
LAB_0150c72c:
          lVar12 = *(long *)(lVar5 + 0x70);
          if (lVar12 != 0) {
            if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_0150c7d8;
            lVar12 = lVar12 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar12 + 0x20) = unaff_x26;
            *(long *)(lVar12 + 0x28) = unaff_x22;
            uVar4 = *(undefined8 *)(puVar2 + -0xf0);
            uVar18 = *(undefined8 *)(puVar2 + -0xd8);
            uVar17 = *(undefined8 *)(puVar2 + -0xe0);
            *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(puVar2 + -0xe8);
            *(undefined8 *)(lVar12 + 0x30) = uVar4;
            *(undefined8 *)(lVar12 + 0x48) = uVar18;
            *(undefined8 *)(lVar12 + 0x40) = uVar17;
            *(long *)(lVar12 + 0x50) = lVar11;
            *(int *)(lVar12 + 0x58) = iVar14;
            *(int *)(lVar12 + 0x5c) = iVar3;
            *(long *)(lVar12 + 0x60) = unaff_x23;
            *(long *)(lVar12 + 0x68) = unaff_x24;
            uVar4 = *(undefined8 *)(puVar2 + -0x100);
            *(undefined8 *)(lVar12 + 0x78) = *(undefined8 *)(puVar2 + -0xf8);
            *(undefined8 *)(lVar12 + 0x70) = uVar4;
            goto LAB_0150c768;
          }
        }
        else {
          if (iVar14 != 0) goto LAB_0150c72c;
          if (iVar3 != 2) {
            iVar14 = 0;
            goto LAB_0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar12 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar12,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar2 + -200) = unaff_x26;
            *(long *)(puVar2 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0xe8);
            *(undefined8 *)(puVar2 + -0xb8) = *(undefined8 *)(puVar2 + -0xf0);
            *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xd8);
            *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0xe0);
            *(long *)(puVar2 + -0x98) = lVar11;
            *(undefined8 *)(puVar2 + -0x90) = _UNK_033f8628;
            *(long *)(puVar2 + -0x88) = unaff_x23;
            *(long *)(puVar2 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0xf8);
            *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x100);
            lVar12 = unaff_x23;
            goto LAB_0150c724;
          }
        }
LAB_0150c7d4:
        func_0x00f78af4();
LAB_0150c7d8:
        uVar4 = func_0x00f78b24();
        auVar22 = func_0x00f78ac0(uVar4,0);
        lVar12 = auVar22._8_8_;
        *(undefined8 *)(puVar2 + -0x180) = unaff_x26;
        *(long *)(puVar2 + -0x178) = unaff_x25;
        *(long *)(puVar2 + -0x170) = unaff_x24;
        *(long *)(puVar2 + -0x168) = unaff_x23;
        *(long *)(puVar2 + -0x160) = unaff_x22;
        *(long *)(puVar2 + -0x158) = lVar5;
        *(ulong *)(puVar2 + -0x150) = uVar9;
        *(long *)(puVar2 + -0x148) = lVar11;
        *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0x10;
        *(code **)(puVar2 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar4 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar12 + 0x18),*(undefined4 *)(lVar12 + 0x1c),
                                *(undefined4 *)(lVar12 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar12 + 0x10),0,0);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,10,uRam0000000003d5e7a8);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar4,*(undefined8 *)(lVar12 + 0x58),uRam0000000003d5e6e0);
        uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar4,1,uRam0000000003d5e888);
        lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar4,auVar22._0_8_,uRam0000000003d5e850);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar12 + 0x10);
        }
        return;
      }
    }
    uVar4 = func_0x00f78b24();
    auVar22 = func_0x00f78ac0(uVar4,0);
    puVar15 = puVar2 + -0x30;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar11 = *(long *)(auVar22._0_8_ + 0x28);
    auVar22._8_8_ = auVar22._8_8_;
    auVar22._0_8_ = lVar11;
    if (lVar11 == 0) {
      pcVar16 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar22 = func_0x00f78af4();
      puVar2 = puVar2 + -0x30;
    }
    else {
      puVar15 = *(undefined1 **)(puVar2 + -0x30);
      pcVar16 = *(code **)(puVar2 + -0x28);
      puVar2 = puVar2 + -0x20;
    }
    *(long *)(puVar2 + -0x20) = lVar5;
    *(ulong *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar15;
    *(code **)(puVar2 + -8) = pcVar16;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar22._0_8_,4,0,auVar22._8_8_);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar22._0_8_,5,0,auVar22._8_8_);
    uVar9 = 7;
    param_3 = 0;
    puVar15 = *(undefined1 **)(puVar2 + -0x10);
    pcVar16 = *(code **)(puVar2 + -8);
    unaff_x20 = *(undefined8 *)(puVar2 + -0x20);
    unaff_x19 = *(ulong *)(puVar2 + -0x18);
  } while( true );
}



// ============================================================
// RVA: 0x150e38c | Atlas.UI.Screens.TopBarScreen.<OnBeforeEnter>b__39_4
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0150b544) */
/* WARNING: Removing unreachable block (ram,0x0150b59c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen___OnBeforeEnter_b__39_4
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar15;
  undefined8 unaff_x28;
  undefined1 *puVar16;
  undefined1 *unaff_x29;
  code *pcVar17;
  code *unaff_x30;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  
  if ((bRam0000000003eb4d61 & 1) == 0) {
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d61 = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41348);
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) {
    uVar5 = func_0x00f78af4();
    if ((bRam0000000003eb4d62 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d62 = 1;
    }
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar5,uRam0000000003d41348);
    if (((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) &&
       (plVar7 = *(long **)(*(long *)(lVar6 + 0x18) + 0x30), plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x9c8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x9d0));
      return;
    }
    uVar5 = func_0x00f78af4();
    if ((bRam0000000003eb4d63 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d63 = 1;
    }
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar5,uRam0000000003d41348);
    if (((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) &&
       (plVar7 = *(long **)(*(long *)(lVar6 + 0x18) + 0x30), plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x9c8))(plVar7,0,*(undefined8 *)(*plVar7 + 0x9d0));
      return;
    }
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4d64 & 1) == 0) {
      func_0x00f78a20(0x3d2c9a0);
      func_0x00f78a20(0x3d1f8d8);
      bRam0000000003eb4d64 = 1;
    }
    uVar5 = func_0x00f78a34(/*Atlas.UI.Screens.TopBarScreen.Element[]_TypeInfo*/ uRam0000000003d1f8d8,9);
    *(undefined8 *)(lVar6 + 0x70) = uVar5;
    *(undefined1 *)(lVar6 + 0x80) = 1;
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c9a0 + 0x18) + 0xc0) + 0x38))
                ();
      return;
    }
    auVar23 = func_0x00f78af4();
    puVar10 = auVar23._8_8_;
    puVar8 = auVar23._0_8_;
    uVar18 = puVar10[1];
    uVar5 = *puVar10;
    puVar8[2] = puVar10[2];
    puVar8[1] = uVar18;
    *puVar8 = uVar5;
    return;
  }
  puVar3 = &stack0xffffffffffffffe0;
  puVar16 = &stack0xfffffffffffffff0;
  lVar11 = *(long *)(lVar6 + 0x30);
  uVar14 = unaff_x19;
  lVar12 = unaff_x20;
  if (lVar11 == 0) {
code_r0x0150b5a8:
    func_0x00f78af4();
    uVar2 = uVar14;
    unaff_x20 = lVar12;
  }
  else {
    uVar14 = 6;
    uVar2 = 6;
    if (6 < *(uint *)(lVar11 + 0x18)) {
      if (*(long *)(lVar11 + 0x50) != 0) {
        /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(*(long *)(lVar11 + 0x50),0);
      }
      lVar12 = lVar6;
      if (*(long *)(lVar6 + 0x28) != 0) {
        auVar24._8_4_ = 6;
        auVar24._0_8_ = *(long *)(lVar6 + 0x28);
        param_3 = 0;
        param_4 = 1;
        puVar3 = (undefined1 *)register0x00000008;
        puVar16 = unaff_x29;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  unaff_x19 = uVar2;
  uVar5 = func_0x00f78b24();
  unaff_x30 = Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar24 = func_0x00f78ac0(uVar5,0);
code_r0x0150b5b8:
  auVar23._8_8_ = param_4;
  auVar23._0_8_ = auVar24._0_8_;
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = auVar24._0_8_;
  if (auVar24._8_4_ < 9) {
    uVar14 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar24._8_4_ * 4);
    auVar23 = auVar1;
  }
  else {
    uVar14 = 0xffffffff;
  }
  do {
    lVar6 = auVar23._0_8_;
    *(long *)(puVar3 + -0x20) = unaff_x20;
    *(ulong *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar16;
    *(code **)(puVar3 + -8) = unaff_x30;
    uVar9 = (uint)uVar14;
    if (uVar9 == 0xffffffff) {
      return;
    }
    lVar12 = *(long *)(lVar6 + 0x70);
    if (lVar12 == 0) {
      func_0x00f78af4();
    }
    else {
      unaff_x19 = uVar14;
      if (uVar9 < *(uint *)(lVar12 + 0x18)) {
        uVar13 = 2;
        if ((int)param_3 == 0) {
          uVar13 = 0;
        }
        *(undefined4 *)(lVar12 + (long)(int)uVar9 * 0x60 + 0x5c) = uVar13;
        if ((auVar23._8_8_ & 1) == 0) {
          Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar6,uVar14);
        }
        *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
        *(long *)(puVar3 + -0x48) = unaff_x25;
        *(long *)(puVar3 + -0x40) = unaff_x24;
        *(long *)(puVar3 + -0x38) = unaff_x23;
        *(long *)(puVar3 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
        *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        lVar12 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar11 = *(long *)(lVar6 + 0x70);
        if (lVar11 == 0) goto LAB_0150c7d4;
        if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_0150c7d8;
        unaff_x25 = (long)(int)uVar9;
        lVar11 = lVar11 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar11 + 0x20);
        unaff_x22 = *(long *)(lVar11 + 0x28);
        uVar5 = *(undefined8 *)(lVar11 + 0x30);
        uVar19 = *(undefined8 *)(lVar11 + 0x48);
        uVar18 = *(undefined8 *)(lVar11 + 0x40);
        *(undefined8 *)(puVar3 + -0xe8) = *(undefined8 *)(lVar11 + 0x38);
        *(undefined8 *)(puVar3 + -0xf0) = uVar5;
        *(undefined8 *)(puVar3 + -0xd8) = uVar19;
        *(undefined8 *)(puVar3 + -0xe0) = uVar18;
        lVar12 = *(long *)(lVar11 + 0x50);
        iVar15 = *(int *)(lVar11 + 0x58);
        iVar4 = *(int *)(lVar11 + 0x5c);
        unaff_x23 = *(long *)(lVar11 + 0x60);
        unaff_x24 = *(long *)(lVar11 + 0x68);
        uVar5 = *(undefined8 *)(lVar11 + 0x70);
        *(undefined8 *)(puVar3 + -0xf8) = *(undefined8 *)(lVar11 + 0x78);
        *(undefined8 *)(puVar3 + -0x100) = uVar5;
        if (iVar4 == iVar15) {
LAB_0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar12,0,0);
          if (iVar4 == 0) {
            return;
          }
          if (lVar12 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar12,iVar15 == 2,0);
            return;
          }
        }
        else if (iVar15 == 2) {
          if (iVar4 == 0) {
            if (unaff_x24 == 0) goto LAB_0150c7d4;
            uVar18 = *(undefined8 *)(lVar11 + 0x38);
            uVar5 = *(undefined8 *)(lVar11 + 0x30);
            uVar20 = *(undefined8 *)(lVar11 + 0x48);
            uVar19 = *(undefined8 *)(lVar11 + 0x40);
            *(undefined8 *)(puVar3 + -0x118) = uVar18;
            *(undefined8 *)(puVar3 + -0x120) = uVar5;
            *(undefined8 *)(puVar3 + -0x108) = uVar20;
            *(undefined8 *)(puVar3 + -0x110) = uVar19;
            uVar22 = *(undefined8 *)(lVar11 + 0x78);
            uVar21 = *(undefined8 *)(lVar11 + 0x70);
            *(undefined8 *)(puVar3 + -0x128) = uVar22;
            *(undefined8 *)(puVar3 + -0x130) = uVar21;
            *(undefined8 *)(puVar3 + -200) = unaff_x26;
            *(long *)(puVar3 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar3 + -0xb0) = uVar18;
            *(undefined8 *)(puVar3 + -0xb8) = uVar5;
            *(undefined8 *)(puVar3 + -0xa0) = uVar20;
            *(undefined8 *)(puVar3 + -0xa8) = uVar19;
            *(long *)(puVar3 + -0x98) = lVar12;
            *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8620;
            *(long *)(puVar3 + -0x88) = unaff_x23;
            *(long *)(puVar3 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar3 + -0x70) = uVar22;
            *(undefined8 *)(puVar3 + -0x78) = uVar21;
            lVar11 = unaff_x24;
LAB_0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar11,puVar3 + -200,uRam0000000003d2a408);
            iVar15 = 1;
          }
          else {
            iVar15 = 2;
          }
LAB_0150c72c:
          lVar11 = *(long *)(lVar6 + 0x70);
          if (lVar11 != 0) {
            if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_0150c7d8;
            lVar11 = lVar11 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar11 + 0x20) = unaff_x26;
            *(long *)(lVar11 + 0x28) = unaff_x22;
            uVar5 = *(undefined8 *)(puVar3 + -0xf0);
            uVar19 = *(undefined8 *)(puVar3 + -0xd8);
            uVar18 = *(undefined8 *)(puVar3 + -0xe0);
            *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(puVar3 + -0xe8);
            *(undefined8 *)(lVar11 + 0x30) = uVar5;
            *(undefined8 *)(lVar11 + 0x48) = uVar19;
            *(undefined8 *)(lVar11 + 0x40) = uVar18;
            *(long *)(lVar11 + 0x50) = lVar12;
            *(int *)(lVar11 + 0x58) = iVar15;
            *(int *)(lVar11 + 0x5c) = iVar4;
            *(long *)(lVar11 + 0x60) = unaff_x23;
            *(long *)(lVar11 + 0x68) = unaff_x24;
            uVar5 = *(undefined8 *)(puVar3 + -0x100);
            *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(puVar3 + -0xf8);
            *(undefined8 *)(lVar11 + 0x70) = uVar5;
            goto LAB_0150c768;
          }
        }
        else {
          if (iVar15 != 0) goto LAB_0150c72c;
          if (iVar4 != 2) {
            iVar15 = 0;
            goto LAB_0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar11 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar11,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar3 + -200) = unaff_x26;
            *(long *)(puVar3 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xe8);
            *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0xf0);
            *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xd8);
            *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xe0);
            *(long *)(puVar3 + -0x98) = lVar12;
            *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8628;
            *(long *)(puVar3 + -0x88) = unaff_x23;
            *(long *)(puVar3 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0xf8);
            *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x100);
            lVar11 = unaff_x23;
            goto LAB_0150c724;
          }
        }
LAB_0150c7d4:
        func_0x00f78af4();
LAB_0150c7d8:
        uVar5 = func_0x00f78b24();
        auVar23 = func_0x00f78ac0(uVar5,0);
        lVar11 = auVar23._8_8_;
        *(undefined8 *)(puVar3 + -0x180) = unaff_x26;
        *(long *)(puVar3 + -0x178) = unaff_x25;
        *(long *)(puVar3 + -0x170) = unaff_x24;
        *(long *)(puVar3 + -0x168) = unaff_x23;
        *(long *)(puVar3 + -0x160) = unaff_x22;
        *(long *)(puVar3 + -0x158) = lVar6;
        *(ulong *)(puVar3 + -0x150) = uVar14;
        *(long *)(puVar3 + -0x148) = lVar12;
        *(undefined1 **)(puVar3 + -0x140) = puVar3 + -0x10;
        *(code **)(puVar3 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar5 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x1c),
                                *(undefined4 *)(lVar11 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar11 + 0x10),0,0);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,10,uRam0000000003d5e7a8);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar5,*(undefined8 *)(lVar11 + 0x58),uRam0000000003d5e6e0);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar5,1,uRam0000000003d5e888);
        lVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar5,auVar23._0_8_,uRam0000000003d5e850);
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar11 + 0x10);
        }
        return;
      }
    }
    uVar5 = func_0x00f78b24();
    auVar23 = func_0x00f78ac0(uVar5,0);
    puVar16 = puVar3 + -0x30;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar12 = *(long *)(auVar23._0_8_ + 0x28);
    auVar23._8_8_ = auVar23._8_8_;
    auVar23._0_8_ = lVar12;
    if (lVar12 == 0) {
      pcVar17 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar23 = func_0x00f78af4();
      puVar3 = puVar3 + -0x30;
    }
    else {
      puVar16 = *(undefined1 **)(puVar3 + -0x30);
      pcVar17 = *(code **)(puVar3 + -0x28);
      puVar3 = puVar3 + -0x20;
    }
    *(long *)(puVar3 + -0x20) = lVar6;
    *(ulong *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar16;
    *(code **)(puVar3 + -8) = pcVar17;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar23._0_8_,4,0,auVar23._8_8_);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar23._0_8_,5,0,auVar23._8_8_);
    uVar14 = 7;
    param_3 = 0;
    puVar16 = *(undefined1 **)(puVar3 + -0x10);
    unaff_x30 = *(code **)(puVar3 + -8);
    unaff_x20 = *(long *)(puVar3 + -0x20);
    unaff_x19 = *(ulong *)(puVar3 + -0x18);
  } while( true );
}



// ============================================================
// RVA: 0x150e394 | Atlas.UI.Screens.TopBarScreen.<OnBeforeEnter>b__39_5
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0150b544) */
/* WARNING: Removing unreachable block (ram,0x0150b59c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_TopBarScreen___OnBeforeEnter_b__39_5
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  int iVar15;
  undefined8 unaff_x28;
  undefined1 *puVar16;
  undefined1 *unaff_x29;
  code *pcVar17;
  code *unaff_x30;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  
  if ((bRam0000000003eb4d61 & 1) == 0) {
    func_0x00f78a20(0x3d41348);
    bRam0000000003eb4d61 = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41348);
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) {
    uVar5 = func_0x00f78af4();
    if ((bRam0000000003eb4d62 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d62 = 1;
    }
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar5,uRam0000000003d41348);
    if (((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) &&
       (plVar7 = *(long **)(*(long *)(lVar6 + 0x18) + 0x30), plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x9c8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x9d0));
      return;
    }
    uVar5 = func_0x00f78af4();
    if ((bRam0000000003eb4d63 & 1) == 0) {
      func_0x00f78a20(0x3d41348);
      bRam0000000003eb4d63 = 1;
    }
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar5,uRam0000000003d41348);
    if (((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) &&
       (plVar7 = *(long **)(*(long *)(lVar6 + 0x18) + 0x30), plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0150e274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x9c8))(plVar7,0,*(undefined8 *)(*plVar7 + 0x9d0));
      return;
    }
    lVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4d64 & 1) == 0) {
      func_0x00f78a20(0x3d2c9a0);
      func_0x00f78a20(0x3d1f8d8);
      bRam0000000003eb4d64 = 1;
    }
    uVar5 = func_0x00f78a34(/*Atlas.UI.Screens.TopBarScreen.Element[]_TypeInfo*/ uRam0000000003d1f8d8,9);
    *(undefined8 *)(lVar6 + 0x70) = uVar5;
    *(undefined1 *)(lVar6 + 0x80) = 1;
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c9a0 + 0x18) + 0xc0) + 0x38))
                ();
      return;
    }
    auVar23 = func_0x00f78af4();
    puVar10 = auVar23._8_8_;
    puVar8 = auVar23._0_8_;
    uVar18 = puVar10[1];
    uVar5 = *puVar10;
    puVar8[2] = puVar10[2];
    puVar8[1] = uVar18;
    *puVar8 = uVar5;
    return;
  }
  puVar3 = &stack0xffffffffffffffe0;
  puVar16 = &stack0xfffffffffffffff0;
  lVar11 = *(long *)(lVar6 + 0x30);
  uVar14 = unaff_x19;
  lVar12 = unaff_x20;
  if (lVar11 == 0) {
code_r0x0150b5a8:
    func_0x00f78af4();
    uVar2 = uVar14;
    unaff_x20 = lVar12;
  }
  else {
    uVar14 = 8;
    uVar2 = 8;
    if (8 < *(uint *)(lVar11 + 0x18)) {
      if (*(long *)(lVar11 + 0x60) != 0) {
        /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$Invoke*/ func_0x0156f004(*(long *)(lVar11 + 0x60),0);
      }
      lVar12 = lVar6;
      if (*(long *)(lVar6 + 0x28) != 0) {
        auVar24._8_4_ = 8;
        auVar24._0_8_ = *(long *)(lVar6 + 0x28);
        param_3 = 0;
        param_4 = 1;
        puVar3 = (undefined1 *)register0x00000008;
        puVar16 = unaff_x29;
        goto code_r0x0150b5b8;
      }
      goto code_r0x0150b5a8;
    }
  }
  unaff_x19 = uVar2;
  uVar5 = func_0x00f78b24();
  unaff_x30 = Atlas_UI_Screens_TopBarScreen__RequestButtonVisible;
  auVar24 = func_0x00f78ac0(uVar5,0);
code_r0x0150b5b8:
  auVar23._8_8_ = param_4;
  auVar23._0_8_ = auVar24._0_8_;
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = auVar24._0_8_;
  if (auVar24._8_4_ < 9) {
    uVar14 = (ulong)*(uint *)(&UNK_033f869c + (long)(int)auVar24._8_4_ * 4);
    auVar23 = auVar1;
  }
  else {
    uVar14 = 0xffffffff;
  }
  do {
    lVar6 = auVar23._0_8_;
    *(long *)(puVar3 + -0x20) = unaff_x20;
    *(ulong *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar16;
    *(code **)(puVar3 + -8) = unaff_x30;
    uVar9 = (uint)uVar14;
    if (uVar9 == 0xffffffff) {
      return;
    }
    lVar12 = *(long *)(lVar6 + 0x70);
    if (lVar12 == 0) {
      func_0x00f78af4();
    }
    else {
      unaff_x19 = uVar14;
      if (uVar9 < *(uint *)(lVar12 + 0x18)) {
        uVar13 = 2;
        if ((int)param_3 == 0) {
          uVar13 = 0;
        }
        *(undefined4 *)(lVar12 + (long)(int)uVar9 * 0x60 + 0x5c) = uVar13;
        if ((auVar23._8_8_ & 1) == 0) {
          Atlas_UI_Screens_TopBarScreen__ForceButtonState(lVar6,uVar14);
        }
        *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
        *(long *)(puVar3 + -0x48) = unaff_x25;
        *(long *)(puVar3 + -0x40) = unaff_x24;
        *(long *)(puVar3 + -0x38) = unaff_x23;
        *(long *)(puVar3 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
        *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
        *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
        *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
        lVar12 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar11 = *(long *)(lVar6 + 0x70);
        if (lVar11 == 0) goto LAB_0150c7d4;
        if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_0150c7d8;
        unaff_x25 = (long)(int)uVar9;
        lVar11 = lVar11 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar11 + 0x20);
        unaff_x22 = *(long *)(lVar11 + 0x28);
        uVar5 = *(undefined8 *)(lVar11 + 0x30);
        uVar19 = *(undefined8 *)(lVar11 + 0x48);
        uVar18 = *(undefined8 *)(lVar11 + 0x40);
        *(undefined8 *)(puVar3 + -0xe8) = *(undefined8 *)(lVar11 + 0x38);
        *(undefined8 *)(puVar3 + -0xf0) = uVar5;
        *(undefined8 *)(puVar3 + -0xd8) = uVar19;
        *(undefined8 *)(puVar3 + -0xe0) = uVar18;
        lVar12 = *(long *)(lVar11 + 0x50);
        iVar15 = *(int *)(lVar11 + 0x58);
        iVar4 = *(int *)(lVar11 + 0x5c);
        unaff_x23 = *(long *)(lVar11 + 0x60);
        unaff_x24 = *(long *)(lVar11 + 0x68);
        uVar5 = *(undefined8 *)(lVar11 + 0x70);
        *(undefined8 *)(puVar3 + -0xf8) = *(undefined8 *)(lVar11 + 0x78);
        *(undefined8 *)(puVar3 + -0x100) = uVar5;
        if (iVar4 == iVar15) {
LAB_0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar12,0,0);
          if (iVar4 == 0) {
            return;
          }
          if (lVar12 != 0) {
            /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar12,iVar15 == 2,0);
            return;
          }
        }
        else if (iVar15 == 2) {
          if (iVar4 == 0) {
            if (unaff_x24 == 0) goto LAB_0150c7d4;
            uVar18 = *(undefined8 *)(lVar11 + 0x38);
            uVar5 = *(undefined8 *)(lVar11 + 0x30);
            uVar20 = *(undefined8 *)(lVar11 + 0x48);
            uVar19 = *(undefined8 *)(lVar11 + 0x40);
            *(undefined8 *)(puVar3 + -0x118) = uVar18;
            *(undefined8 *)(puVar3 + -0x120) = uVar5;
            *(undefined8 *)(puVar3 + -0x108) = uVar20;
            *(undefined8 *)(puVar3 + -0x110) = uVar19;
            uVar22 = *(undefined8 *)(lVar11 + 0x78);
            uVar21 = *(undefined8 *)(lVar11 + 0x70);
            *(undefined8 *)(puVar3 + -0x128) = uVar22;
            *(undefined8 *)(puVar3 + -0x130) = uVar21;
            *(undefined8 *)(puVar3 + -200) = unaff_x26;
            *(long *)(puVar3 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar3 + -0xb0) = uVar18;
            *(undefined8 *)(puVar3 + -0xb8) = uVar5;
            *(undefined8 *)(puVar3 + -0xa0) = uVar20;
            *(undefined8 *)(puVar3 + -0xa8) = uVar19;
            *(long *)(puVar3 + -0x98) = lVar12;
            *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8620;
            *(long *)(puVar3 + -0x88) = unaff_x23;
            *(long *)(puVar3 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar3 + -0x70) = uVar22;
            *(undefined8 *)(puVar3 + -0x78) = uVar21;
            lVar11 = unaff_x24;
LAB_0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar11,puVar3 + -200,uRam0000000003d2a408);
            iVar15 = 1;
          }
          else {
            iVar15 = 2;
          }
LAB_0150c72c:
          lVar11 = *(long *)(lVar6 + 0x70);
          if (lVar11 != 0) {
            if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_0150c7d8;
            lVar11 = lVar11 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar11 + 0x20) = unaff_x26;
            *(long *)(lVar11 + 0x28) = unaff_x22;
            uVar5 = *(undefined8 *)(puVar3 + -0xf0);
            uVar19 = *(undefined8 *)(puVar3 + -0xd8);
            uVar18 = *(undefined8 *)(puVar3 + -0xe0);
            *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(puVar3 + -0xe8);
            *(undefined8 *)(lVar11 + 0x30) = uVar5;
            *(undefined8 *)(lVar11 + 0x48) = uVar19;
            *(undefined8 *)(lVar11 + 0x40) = uVar18;
            *(long *)(lVar11 + 0x50) = lVar12;
            *(int *)(lVar11 + 0x58) = iVar15;
            *(int *)(lVar11 + 0x5c) = iVar4;
            *(long *)(lVar11 + 0x60) = unaff_x23;
            *(long *)(lVar11 + 0x68) = unaff_x24;
            uVar5 = *(undefined8 *)(puVar3 + -0x100);
            *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(puVar3 + -0xf8);
            *(undefined8 *)(lVar11 + 0x70) = uVar5;
            goto LAB_0150c768;
          }
        }
        else {
          if (iVar15 != 0) goto LAB_0150c72c;
          if (iVar4 != 2) {
            iVar15 = 0;
            goto LAB_0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar11 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar11,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar3 + -200) = unaff_x26;
            *(long *)(puVar3 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xe8);
            *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0xf0);
            *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xd8);
            *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xe0);
            *(long *)(puVar3 + -0x98) = lVar12;
            *(undefined8 *)(puVar3 + -0x90) = _UNK_033f8628;
            *(long *)(puVar3 + -0x88) = unaff_x23;
            *(long *)(puVar3 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0xf8);
            *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x100);
            lVar11 = unaff_x23;
            goto LAB_0150c724;
          }
        }
LAB_0150c7d4:
        func_0x00f78af4();
LAB_0150c7d8:
        uVar5 = func_0x00f78b24();
        auVar23 = func_0x00f78ac0(uVar5,0);
        lVar11 = auVar23._8_8_;
        *(undefined8 *)(puVar3 + -0x180) = unaff_x26;
        *(long *)(puVar3 + -0x178) = unaff_x25;
        *(long *)(puVar3 + -0x170) = unaff_x24;
        *(long *)(puVar3 + -0x168) = unaff_x23;
        *(long *)(puVar3 + -0x160) = unaff_x22;
        *(long *)(puVar3 + -0x158) = lVar6;
        *(ulong *)(puVar3 + -0x150) = uVar14;
        *(long *)(puVar3 + -0x148) = lVar12;
        *(undefined1 **)(puVar3 + -0x140) = puVar3 + -0x10;
        *(code **)(puVar3 + -0x138) = Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar5 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x1c),
                                *(undefined4 *)(lVar11 + 0x20),_UNK_033f8144,
                                *(undefined8 *)(lVar11 + 0x10),0,0);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,10,uRam0000000003d5e7a8);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar5,*(undefined8 *)(lVar11 + 0x58),uRam0000000003d5e6e0);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar5,1,uRam0000000003d5e888);
        lVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar5,auVar23._0_8_,uRam0000000003d5e850);
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0xe8) != '\0')) {
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar11 + 0x10);
        }
        return;
      }
    }
    uVar5 = func_0x00f78b24();
    auVar23 = func_0x00f78ac0(uVar5,0);
    puVar16 = puVar3 + -0x30;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar12 = *(long *)(auVar23._0_8_ + 0x28);
    auVar23._8_8_ = auVar23._8_8_;
    auVar23._0_8_ = lVar12;
    if (lVar12 == 0) {
      pcVar17 = Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar23 = func_0x00f78af4();
      puVar3 = puVar3 + -0x30;
    }
    else {
      puVar16 = *(undefined1 **)(puVar3 + -0x30);
      pcVar17 = *(code **)(puVar3 + -0x28);
      puVar3 = puVar3 + -0x20;
    }
    *(long *)(puVar3 + -0x20) = lVar6;
    *(ulong *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar16;
    *(code **)(puVar3 + -8) = pcVar17;
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar23._0_8_,4,0,auVar23._8_8_);
    Atlas_UI_Screens_TopBarScreen__RequestElementVisible(auVar23._0_8_,5,0,auVar23._8_8_);
    uVar14 = 7;
    param_3 = 0;
    puVar16 = *(undefined1 **)(puVar3 + -0x10);
    unaff_x30 = *(code **)(puVar3 + -8);
    unaff_x20 = *(long *)(puVar3 + -0x20);
    unaff_x19 = *(ulong *)(puVar3 + -0x18);
  } while( true );
}



