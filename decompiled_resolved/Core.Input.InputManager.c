// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Input.InputManager

// ============================================================
// RVA: 0x1648164 | Core.Input.InputManager.RegisterListener
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x16482b4 | Core.Input.InputManager.UnregisterListener
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1648954 | Core.Input.InputManager.RegisterGlyph
// ============================================================

ulong Core_Input_InputManager__RegisterGlyph(undefined8 param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  uint extraout_w8;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long extraout_x9;
  int iVar25;
  int *piVar26;
  ulong unaff_x19;
  undefined8 uVar27;
  undefined8 unaff_x20;
  undefined8 uVar28;
  undefined8 unaff_x22;
  long lVar29;
  undefined8 unaff_x23;
  code *pcVar30;
  undefined8 unaff_x24;
  long *plVar31;
  undefined1 *puVar32;
  undefined8 uVar33;
  undefined *puVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  long lStack_a8;
  code *pcStack_38;
  
  if ((bRam0000000003eb5783 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d3ac00);
    bRam0000000003eb5783 = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (uVar10 = *(ulong *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x60), uVar10 == 0)) {
    lVar24 = func_0x00f78af4();
    pcStack_38 = Core_Input_InputGlyphBehaviour__GetLastInputPathComponent;
    if (lVar24 != 0) {
      iVar8 = /*System.String$$LastIndexOf*/ func_0x029ce0f0(lVar24,0x2f,0);
      auVar35._8_4_ = iVar8 + 1;
      auVar35._0_8_ = lVar24;
      auVar35._12_4_ = 0;
      uVar13 = 0x3eb5000;
      puVar32 = &stack0xffffffffffffffd0;
      uVar17 = 0x3d22848;
      puVar4 = (undefined1 *)register0x00000008;
      do {
        puVar5 = puVar32;
        uVar18 = auVar35._8_8_;
        uVar10 = auVar35._0_8_;
        iVar8 = auVar35._8_4_;
        uVar21 = *(int *)(uVar10 + 0x10) - iVar8;
        *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar5 + -0x28) = uVar17;
        *(undefined8 *)(puVar5 + -0x20) = uVar13;
        *(undefined8 *)(puVar5 + -0x18) = param_1;
        *(undefined1 **)(puVar5 + -0x10) = puVar4 + -0x10;
        *(code **)(puVar5 + -8) = pcStack_38;
        unaff_x22 = 0x3eb9000;
        if ((bRam0000000003eb944b & 1) == 0) {
          func_0x00f78a20(0x3d24dd0);
          bRam0000000003eb944b = 1;
        }
        if (iVar8 < 0) {
          uVar13 = 0x3d72d20;
code_r0x029cbcb4:
          uVar13 = func_0x00f78a24(uVar13);
          param_1 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar13,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar13 = func_0x00f78aec();
          uVar17 = 0x3d7b9d0;
        }
        else {
          uVar9 = *(uint *)(uVar10 + 0x10);
          if ((int)uVar9 < iVar8) {
            uVar13 = 0x3d7b9e8;
            goto code_r0x029cbcb4;
          }
          if ((int)uVar21 < 0) {
            uVar13 = 0x3d6f480;
          }
          else {
            if (iVar8 <= (int)(uVar9 - uVar21)) goto code_r0x029cbc4c;
            uVar13 = 0x3d6ddc8;
          }
          uVar13 = func_0x00f78a24(uVar13);
          param_1 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar13,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar13 = func_0x00f78aec();
          uVar17 = 0x3d7a280;
        }
        uVar17 = func_0x00f78a24(uVar17);
        /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar13,uVar17,param_1,0);
        uVar17 = func_0x00f78a24(0x3d5dbb0);
        pcStack_38 = (code *)&System_String__Substring;
        auVar35 = func_0x00f78ac0(uVar13,uVar17);
        puVar32 = puVar5 + -0x30;
        uVar17 = uVar18;
        puVar4 = puVar5;
      } while( true );
    }
    plVar11 = (long *)func_0x00f78af4();
    if ((bRam0000000003eb5789 & 1) == 0) {
      func_0x00f78a20(0x3d22848);
      bRam0000000003eb5789 = 1;
    }
    if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
       (lVar24 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x48), lVar24 == 0)) {
      return 0;
    }
    lStack_a8 = lVar24;
    lVar22 = *(long *)(lVar24 + 0x68);
    if (lVar22 == 0) {
      plVar31 = &lStack_a8;
      lVar29 = 1;
    }
    else {
      lVar29 = *(long *)(lVar22 + 0x18);
      if (lVar29 == 0) {
        return 0;
      }
      plVar31 = (long *)(lVar22 + 0x20);
    }
    lVar22 = 0;
    do {
      lVar14 = plVar31[lVar22];
      pcVar30 = *(code **)(lVar14 + 0x10);
      plVar1 = *(long **)(lVar14 + 0x20);
      lVar14 = *(long *)(lVar14 + 0x28);
      if (*(short *)(lVar14 + 0x48) == -1) {
        func_0x00f78ad8(lVar14);
      }
      iVar8 = func_0x00f78a4c(lVar14);
      bVar6 = *(char *)(lVar14 + 0x4a) == '\x01';
      if (iVar8 == 0) {
        if (bVar6) {
          if (plVar1 == (long *)0x0) {
code_r0x0164a8ac:
            uVar10 = (*pcVar30)(plVar11,lVar14);
          }
          else {
            if (((*(short *)(lVar14 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
               (*(long *)(lVar24 + 0x18) == 0)) goto code_r0x0164a7a4;
            iVar8 = func_0x00f78a44(lVar14);
            iVar7 = func_0x00f78ec0(lVar14);
            if (iVar8 == 0) {
              uVar2 = *(ushort *)(lVar14 + 0x48);
              if (iVar7 == 0) {
                lVar14 = *plVar1 + (ulong)uVar2 * 0x10;
                uVar10 = (**(code **)(lVar14 + 0x138))
                                   (plVar1,plVar11,*(undefined8 *)(lVar14 + 0x140));
                goto code_r0x0164a8b8;
              }
              lVar14 = func_0x00f78a48(lVar14);
              lVar23 = *plVar1;
              uVar10 = (ulong)*(ushort *)(lVar23 + 0x12a);
              if (uVar10 != 0) {
                piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == lVar14) {
                    puVar19 = (undefined8 *)
                              (lVar23 + (long)(int)(*piVar26 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x0164aa44;
                  }
                  piVar26 = piVar26 + 4;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              puVar19 = (undefined8 *)func_0x00fac1f0(plVar1,lVar14,(ulong)uVar2);
code_r0x0164aa44:
              pcVar30 = (code *)*puVar19;
              puVar19 = (undefined8 *)puVar19[1];
            }
            else {
              if (iVar7 == 0) {
                uVar13 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar23 = *plVar1;
                uVar10 = (ulong)*(ushort *)(lVar23 + 0x12a);
                if (uVar10 != 0) {
                  piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == *(long *)(lVar14 + 0x18)) {
                      lVar23 = lVar23 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar14 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0164aa1c;
                    }
                    piVar26 = piVar26 + 4;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                lVar23 = func_0x00fac1f0(plVar1);
code_r0x0164aa1c:
                uVar13 = *(undefined8 *)(lVar23 + 8);
              }
              puVar19 = (undefined8 *)func_0x00f78acc(uVar13,lVar14);
              pcVar30 = (code *)*puVar19;
            }
            uVar10 = (*pcVar30)(plVar1,plVar11,puVar19);
          }
        }
        else {
          if ((*(short *)(lVar14 + 0x48) == -1) || (*(long *)(lVar24 + 0x18) == 0))
          goto code_r0x0164a8ac;
          iVar8 = func_0x00f78a44(lVar14);
          iVar7 = func_0x00f78ec0(lVar14);
          if (iVar8 == 0) {
            uVar2 = *(ushort *)(lVar14 + 0x48);
            if (iVar7 == 0) {
              lVar14 = *plVar11 + (ulong)uVar2 * 0x10;
              uVar10 = (**(code **)(lVar14 + 0x138))(plVar11,*(undefined8 *)(lVar14 + 0x140));
              goto code_r0x0164a8b8;
            }
            lVar14 = func_0x00f78a48(lVar14);
            lVar23 = *plVar11;
            uVar10 = (ulong)*(ushort *)(lVar23 + 0x12a);
            if (uVar10 != 0) {
              piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == lVar14) {
                  puVar19 = (undefined8 *)
                            (lVar23 + (long)(int)(*piVar26 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x0164a9e0;
                }
                piVar26 = piVar26 + 4;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            puVar19 = (undefined8 *)func_0x00fac1f0(plVar11,lVar14,(ulong)uVar2);
code_r0x0164a9e0:
            pcVar30 = (code *)*puVar19;
            puVar19 = (undefined8 *)puVar19[1];
          }
          else {
            if (iVar7 == 0) {
              uVar13 = *(undefined8 *)(*plVar11 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar23 = *plVar11;
              uVar10 = (ulong)*(ushort *)(lVar23 + 0x12a);
              if (uVar10 != 0) {
                piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == *(long *)(lVar14 + 0x18)) {
                    lVar23 = lVar23 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar14 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x0164a9b8;
                  }
                  piVar26 = piVar26 + 4;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              lVar23 = func_0x00fac1f0(plVar11);
code_r0x0164a9b8:
              uVar13 = *(undefined8 *)(lVar23 + 8);
            }
            puVar19 = (undefined8 *)func_0x00f78acc(uVar13,lVar14);
            pcVar30 = (code *)*puVar19;
          }
          uVar10 = (*pcVar30)(plVar11,puVar19);
        }
      }
      else {
        if (bVar6) goto code_r0x0164a8ac;
code_r0x0164a7a4:
        uVar10 = (*pcVar30)(plVar1,plVar11,lVar14);
      }
code_r0x0164a8b8:
      lVar22 = lVar22 + 1;
      if (lVar22 == lVar29) {
        return uVar10;
      }
    } while( true );
  }
  lVar24 = *(long *)(uVar10 + 0x10);
  puVar19 = puRam0000000003d3ac00;
  if (lVar24 == 0) {
code_r0x0242716c:
    param_1 = unaff_x20;
    uVar10 = unaff_x19;
    uVar12 = func_0x00f78af4();
    lVar24 = extraout_x9;
    uVar21 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar10 + 0x18) = uVar21 + 1;
  }
  else {
    uVar21 = *(uint *)(uVar10 + 0x18);
    uVar12 = uVar10;
    if (uVar21 != *(uint *)(lVar24 + 0x18)) goto code_r0x02427170;
    puVar19 = *(undefined8 **)(*(long *)(puRam0000000003d3ac00[3] + 0xc0) + 0x60);
    uVar12 = (*(code *)*puVar19)(uVar10,uVar21 + 1);
    lVar24 = *(long *)(uVar10 + 0x10);
    uVar21 = *(uint *)(uVar10 + 0x18);
    *(uint *)(uVar10 + 0x18) = uVar21 + 1;
    unaff_x19 = uVar10;
    unaff_x20 = param_1;
    if (lVar24 == 0) goto code_r0x0242716c;
  }
  if (uVar21 < *(uint *)(lVar24 + 0x18)) {
    *(undefined8 *)(lVar24 + (long)(int)uVar21 * 8 + 0x20) = param_1;
    *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
    return uVar12;
  }
  uVar13 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar13,0);
  lVar22 = auVar35._8_8_;
  lVar24 = auVar35._0_8_;
  (*(code *)**(undefined8 **)(*(long *)(puVar19[3] + 0xc0) + 0x48))(lVar22,0x14);
  if (lVar24 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar30 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar30)();
  }
  pcVar30 = (code *)**(undefined8 **)(*(long *)(puVar19[3] + 0xc0) + 0x28);
  lVar29 = *(long *)(*(long *)(puVar19[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar29 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar29);
  }
  if (lVar22 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = func_0x00f78adc(lVar22,lVar29);
    if (lVar14 == 0) {
      func_0x00f78e5c(lVar22,lVar29);
      goto code_r0x0242734c;
    }
  }
  (*pcVar30)(lVar24,lVar14,*(undefined8 *)(*(long *)(puVar19[3] + 0xc0) + 0x28));
  iVar8 = (*(code *)**(undefined8 **)(*(long *)(puVar19[3] + 0xc0) + 0x68))(lVar24);
  return (ulong)(iVar8 - 1);
code_r0x029cc070:
  uVar17 = func_0x00f78b24();
  func_0x00f78ac0(uVar17,0);
  unaff_x23 = uVar13;
code_r0x029cc07c:
  auVar35._8_8_ = lVar24;
  auVar35._0_8_ = uVar12;
  puVar34 = &System_String__TrimStart;
  auVar36 = func_0x00f78af4();
  uVar15 = auVar36._0_8_;
  if ((auVar36._8_8_ == 0) || (*(long *)(auVar36._8_8_ + 0x18) == 0)) goto code_r0x029cc094;
  uVar13 = 0;
  puVar5 = puVar5 + -0x40;
  uVar10 = uVar16;
  auVar3 = auVar36;
  goto System_String__TrimHelper;
code_r0x029cbc4c:
  if (uVar21 == 0) {
    uVar10 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else if ((iVar8 != 0) || (uVar9 != uVar21)) {
    uVar13 = *(undefined8 *)(puVar5 + -0x10);
    uVar33 = *(undefined8 *)(puVar5 + -8);
    uVar17 = *(undefined8 *)(puVar5 + -0x20);
    uVar10 = *(ulong *)(puVar5 + -0x18);
    uVar18 = *(undefined8 *)(puVar5 + -0x30);
    uVar27 = *(undefined8 *)(puVar5 + -0x28);
System_String__InternalSubString:
    auVar3._8_8_ = auVar35._8_8_;
    auVar3._0_8_ = uVar10;
    uVar12 = auVar35._0_8_;
    uVar20 = (ulong)uVar21;
    *(undefined8 *)(puVar5 + -0x30) = uVar18;
    *(undefined8 *)(puVar5 + -0x28) = uVar27;
    *(undefined8 *)(puVar5 + -0x20) = uVar17;
    *(ulong *)(puVar5 + -0x18) = uVar10;
    *(undefined8 *)(puVar5 + -0x10) = uVar13;
    *(undefined8 *)(puVar5 + -8) = uVar33;
    puVar32 = puVar5 + -0x10;
    uVar15 = func_0x00f834ac(uVar20);
    if (uVar15 != 0) {
      /*System.Buffer$$Memcpy*/ func_0x029426bc(uVar15 + 0x14,uVar12 + (long)auVar35._8_4_ * 2 + 0x14,uVar21 << 1,0);
      return uVar15;
    }
    puVar34 = &System_String__Trim;
    auVar36 = func_0x00f78af4();
    uVar15 = auVar36._0_8_;
    if ((auVar36._8_8_ != 0) && (*(long *)(auVar36._8_8_ + 0x18) != 0)) {
      uVar13 = 2;
      puVar5 = puVar5 + -0x30;
      auVar3 = auVar36;
System_String__TrimHelper:
      lVar24 = auVar3._8_8_;
      uVar16 = auVar3._0_8_;
      *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
      *(undefined1 (*) [16])(puVar5 + -0x30) = auVar35;
      *(ulong *)(puVar5 + -0x20) = uVar20;
      *(ulong *)(puVar5 + -0x18) = uVar10;
      *(undefined1 **)(puVar5 + -0x10) = puVar32;
      *(undefined **)(puVar5 + -8) = puVar34;
      puVar32 = puVar5 + -0x10;
      uVar21 = *(uint *)(uVar16 + 0x10);
      uVar20 = (ulong)uVar21;
      if ((int)uVar13 == 1) {
        uVar12 = 0;
        uVar13 = unaff_x23;
code_r0x029cbfd8:
        do {
          uVar21 = (int)uVar20 - 1;
          uVar20 = (ulong)uVar21;
          if ((int)uVar21 < (int)uVar12) break;
          uVar9 = /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar20);
          unaff_x23 = uVar13;
          if (lVar24 == 0) goto code_r0x029cc07c;
          iVar8 = *(int *)(lVar24 + 0x18);
          if (iVar8 < 1) {
            iVar7 = 0;
          }
          else {
            iVar25 = 0;
            do {
              if (iVar8 == iVar25) goto code_r0x029cc070;
              iVar7 = iVar25;
            } while ((*(ushort *)(lVar24 + (long)iVar25 * 2 + 0x20) != uVar9) &&
                    (iVar25 = iVar25 + 1, iVar7 = iVar8, iVar8 != iVar25));
          }
        } while (iVar7 != iVar8);
      }
      else {
        if ((int)uVar21 < 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          do {
            uVar9 = /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar12);
            unaff_x23 = uVar13;
            if (lVar24 == 0) goto code_r0x029cc07c;
            iVar8 = *(int *)(lVar24 + 0x18);
            if (iVar8 < 1) {
              iVar7 = 0;
            }
            else {
              iVar25 = 0;
              do {
                if (iVar8 == iVar25) goto code_r0x029cc070;
                iVar7 = iVar25;
              } while ((*(ushort *)(lVar24 + (long)iVar25 * 2 + 0x20) != uVar9) &&
                      (iVar25 = iVar25 + 1, iVar7 = iVar8, iVar8 != iVar25));
            }
          } while ((iVar7 != iVar8) &&
                  (uVar9 = (int)uVar12 + 1, uVar12 = (ulong)uVar9,
                  (int)uVar9 < *(int *)(uVar16 + 0x10)));
        }
        if ((int)uVar13 != 0) {
          uVar20 = (ulong)*(uint *)(uVar16 + 0x10);
          goto code_r0x029cbfd8;
        }
        uVar21 = uVar21 - 1;
      }
      uVar13 = *(undefined8 *)(puVar5 + -0x10);
      uVar33 = *(undefined8 *)(puVar5 + -8);
      uVar17 = *(undefined8 *)(puVar5 + -0x20);
      uVar27 = *(undefined8 *)(puVar5 + -0x18);
      uVar18 = *(undefined8 *)(puVar5 + -0x30);
      uVar28 = *(undefined8 *)(puVar5 + -0x28);
      unaff_x24 = *(undefined8 *)(puVar5 + -0x40);
      unaff_x23 = *(undefined8 *)(puVar5 + -0x38);
      uVar15 = uVar16;
      goto System_String__CreateTrimmedString;
    }
    iVar8 = 2;
    puVar5 = puVar5 + -0x30;
    goto System_String__TrimHelper;
  }
  return uVar10;
code_r0x029cc094:
  iVar8 = 0;
  puVar5 = puVar5 + -0x40;
System_String__TrimHelper:
  *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
  *(ulong *)(puVar5 + -0x30) = uVar12;
  *(long *)(puVar5 + -0x28) = auVar3._8_8_;
  *(ulong *)(puVar5 + -0x20) = uVar20;
  *(long *)(puVar5 + -0x18) = auVar3._0_8_;
  *(undefined1 **)(puVar5 + -0x10) = puVar32;
  *(undefined **)(puVar5 + -8) = puVar34;
  if ((bRam0000000003eb9460 & 1) == 0) {
    func_0x00f78a20(0x3d20620);
    bRam0000000003eb9460 = 1;
  }
  uVar21 = *(uint *)(uVar15 + 0x10);
  if (iVar8 == 1) {
    uVar12 = 0;
  }
  else {
    if ((int)uVar21 < 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      do {
        uVar13 = /*System.String$$get_Chars*/ func_0x029c5420(uVar15,uVar12);
        if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar10 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar13,0);
        if ((uVar10 & 1) == 0) {
          /*System.String$$get_Chars*/ func_0x029c5420(uVar15,uVar12);
          break;
        }
        uVar9 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar9;
      } while ((int)uVar9 < *(int *)(uVar15 + 0x10));
    }
    if (iVar8 == 0) {
      uVar21 = uVar21 - 1;
      goto code_r0x029cbf04;
    }
    uVar21 = *(uint *)(uVar15 + 0x10);
  }
  do {
    uVar21 = uVar21 - 1;
    if ((int)uVar21 < (int)uVar12) goto code_r0x029cbf04;
    uVar13 = /*System.String$$get_Chars*/ func_0x029c5420(uVar15,uVar21);
    if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar13,0);
  } while ((uVar10 & 1) != 0);
  /*System.String$$get_Chars*/ func_0x029c5420(uVar15,uVar12);
code_r0x029cbf04:
  uVar13 = *(undefined8 *)(puVar5 + -0x10);
  uVar33 = *(undefined8 *)(puVar5 + -8);
  uVar17 = *(undefined8 *)(puVar5 + -0x20);
  uVar27 = *(undefined8 *)(puVar5 + -0x18);
  uVar18 = *(undefined8 *)(puVar5 + -0x30);
  uVar28 = *(undefined8 *)(puVar5 + -0x28);
  unaff_x24 = *(undefined8 *)(puVar5 + -0x40);
  unaff_x23 = *(undefined8 *)(puVar5 + -0x38);
System_String__CreateTrimmedString:
  auVar35._8_8_ = uVar12;
  auVar35._0_8_ = uVar15;
  *(undefined8 *)(puVar5 + -0x30) = uVar18;
  *(undefined8 *)(puVar5 + -0x28) = uVar28;
  *(undefined8 *)(puVar5 + -0x20) = uVar17;
  *(undefined8 *)(puVar5 + -0x18) = uVar27;
  *(undefined8 *)(puVar5 + -0x10) = uVar13;
  *(undefined8 *)(puVar5 + -8) = uVar33;
  if ((bRam0000000003eb9461 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9461 = 1;
  }
  uVar21 = (uVar21 - (int)uVar12) + 1;
  if (uVar21 != *(uint *)(uVar15 + 0x10)) {
    if (uVar21 != 0) {
      uVar13 = *(undefined8 *)(puVar5 + -0x10);
      uVar33 = *(undefined8 *)(puVar5 + -8);
      uVar17 = *(undefined8 *)(puVar5 + -0x20);
      uVar10 = *(ulong *)(puVar5 + -0x18);
      uVar18 = *(undefined8 *)(puVar5 + -0x30);
      uVar27 = *(undefined8 *)(puVar5 + -0x28);
      goto System_String__InternalSubString;
    }
    uVar15 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  return uVar15;
}



// ============================================================
// RVA: 0x1648a14 | Core.Input.InputManager.GetScreenLayerFromGameObject
// ============================================================

undefined8 Core_Input_InputManager__GetScreenLayerFromGameObject(long *param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  if ((bRam0000000003eb5789 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    bRam0000000003eb5789 = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (lVar6 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x48), lVar6 == 0)) {
    return 0;
  }
  lStack_58 = lVar6;
  lVar9 = *(long *)(lVar6 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return 0;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x01';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x0164a8ac:
          uVar7 = (*pcVar14)(param_1,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar6 + 0x18) == 0)) goto code_r0x0164a7a4;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              uVar7 = (**(code **)(lVar10 + 0x138))(plVar1,param_1,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x0164a8b8;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar8 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x0164aa44;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x0164aa44:
            pcVar14 = (code *)*puVar8;
            puVar8 = (undefined8 *)puVar8[1];
          }
          else {
            if (iVar5 == 0) {
              uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x0164aa1c;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x0164aa1c:
              uVar7 = *(undefined8 *)(lVar11 + 8);
            }
            puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
            pcVar14 = (code *)*puVar8;
          }
          uVar7 = (*pcVar14)(plVar1,param_1,puVar8);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar6 + 0x18) == 0))
        goto code_r0x0164a8ac;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_1 + (ulong)uVar2 * 0x10;
            uVar7 = (**(code **)(lVar10 + 0x138))(param_1,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x0164a8b8;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_1;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar8 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x0164a9e0;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(param_1,lVar10,(ulong)uVar2);
code_r0x0164a9e0:
          pcVar14 = (code *)*puVar8;
          puVar8 = (undefined8 *)puVar8[1];
        }
        else {
          if (iVar5 == 0) {
            uVar7 = *(undefined8 *)(*param_1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x0164a9b8;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_1);
code_r0x0164a9b8:
            uVar7 = *(undefined8 *)(lVar11 + 8);
          }
          puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
          pcVar14 = (code *)*puVar8;
        }
        uVar7 = (*pcVar14)(param_1,puVar8);
      }
    }
    else {
      if (bVar3) goto code_r0x0164a8ac;
code_r0x0164a7a4:
      uVar7 = (*pcVar14)(plVar1,param_1,lVar10);
    }
code_r0x0164a8b8:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return uVar7;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1648ab4 | Core.Input.InputManager.UnregisterGlyph
// ============================================================

ulong Core_Input_InputManager__UnregisterGlyph(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long lVar19;
  undefined1 ****ppppuVar20;
  undefined *puVar21;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  if ((bRam0000000003eb5784 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d3ac10);
    bRam0000000003eb5784 = 1;
  }
  puVar10 = puRam0000000003d3ac10;
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) &&
     (lVar4 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x60), lVar4 != 0)) {
    if (lVar4 != 0) {
      uVar5 = (*(code *)**(undefined8 **)(*(long *)(puRam0000000003d3ac10[3] + 0xc0) + 0xf8))();
      if (-1 < (int)(uint)uVar5) {
        (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x108))(lVar4,uVar5);
      }
      return (ulong)(~(uint)uVar5 >> 0x1f);
    }
    auVar17 = func_0x00f78af4(0,param_1);
    lVar19 = auVar17._8_8_;
    lVar4 = auVar17._0_8_;
    pcStack_38 = (code *)&System_Collections_Generic_List_object___System_Collections_IList_Remove;
    uVar13 = **(ulong **)(puVar10[3] + 0xc0);
    uVar1 = *(ushort *)(uVar13 + 0x132);
    puVar9 = puVar10;
    puStack_40 = &stack0xfffffffffffffff0;
    if ((uVar1 & 1) == 0) {
      func_0x00fac028(uVar13);
      uVar1 = *(ushort *)(uVar13 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      uVar13 = **(ulong **)(puVar10[3] + 0xc0);
      if ((*(ushort *)(uVar13 + 0x132) & 1) == 0) {
        func_0x00fac028(uVar13);
      }
      if (*(int *)(uVar13 + 0xe0) == 0) {
        uVar13 = **(ulong **)(puVar10[3] + 0xc0);
        if ((*(ushort *)(uVar13 + 0x132) & 1) == 0) {
          func_0x00fac028(uVar13);
        }
        func_0x00f78ad0(uVar13);
      }
    }
    uVar6 = (*(code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0xa0))(lVar19);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if (lVar4 != 0) {
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(*(long *)(puVar10[3] + 0xc0) + 0x110);
      lVar14 = *(long *)(*(long *)(puVar10[3] + 0xc0) + 0x38);
      if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar14);
      }
      if (lVar19 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = func_0x00f78adc(lVar19,lVar14);
        if (lVar7 == 0) {
          uVar13 = func_0x00f78e5c(lVar19,lVar14);
          return uVar13;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02428794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*UNRECOVERED_JUMPTABLE)
                         (lVar4,lVar7,*(undefined8 *)(*(long *)(puVar10[3] + 0xc0) + 0x110));
      return uVar13;
    }
    auVar17 = func_0x00f78af4();
    lVar19 = auVar17._8_8_;
    lVar14 = auVar17._0_8_;
    puStack_78 = &System_Collections_Generic_List_AddressablesImpl_ResourceLocatorInfo___RemoveAll;
    puVar10 = puVar9;
    uStack_88 = lVar4;
    ppuStack_80 = &puStack_40;
    if (lVar19 == 0) {
      /*System.ThrowHelper$$ThrowArgumentNullException*/ func_0x029ef698(8);
    }
    uVar6 = (ulong)*(uint *)(lVar14 + 0x18);
    if ((int)*(uint *)(lVar14 + 0x18) < 1) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        lVar4 = *(long *)(lVar14 + 0x10);
        if (lVar4 == 0) goto code_r0x02428920;
        if (*(uint *)(lVar4 + 0x18) <= uVar16) goto code_r0x02428924;
        if (lVar19 == 0) goto code_r0x02428920;
        puVar10 = *(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 200);
        iVar3 = (*(code *)*puVar10)(lVar19,*(undefined8 *)(lVar4 + uVar16 * 8 + 0x20));
        if (iVar3 != 0) {
          uVar6 = (ulong)*(uint *)(lVar14 + 0x18);
          break;
        }
        uVar16 = uVar16 + 1;
        uVar6 = (ulong)*(int *)(lVar14 + 0x18);
      } while ((long)uVar16 < (long)uVar6);
    }
    uVar13 = uVar16;
    uVar16 = uVar13;
    if ((int)uVar6 <= (int)uVar13) {
      return 0;
    }
    do {
      uVar16 = (ulong)((int)uVar16 + 1);
      do {
        uVar12 = (uint)uVar13;
        if ((int)uVar6 <= (int)uVar16) {
          /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar14 + 0x10),uVar13,(int)uVar6 - uVar12,0);
          iVar3 = *(int *)(lVar14 + 0x18);
          *(uint *)(lVar14 + 0x18) = uVar12;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          return (ulong)(iVar3 - uVar12);
        }
        lVar4 = (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3) + 0x20;
        do {
          lVar7 = *(long *)(lVar14 + 0x10);
          if (lVar7 == 0) goto code_r0x02428920;
          if (*(uint *)(lVar7 + 0x18) <= (uint)uVar16) goto code_r0x02428924;
          if (lVar19 == 0) goto code_r0x02428920;
          puVar10 = *(undefined8 **)(*(long *)(puVar9[3] + 0xc0) + 200);
          uVar6 = (*(code *)*puVar10)(lVar19,*(undefined8 *)(lVar7 + lVar4));
          if ((uVar6 & 1) == 0) {
            uVar8 = *(uint *)(lVar14 + 0x18);
            break;
          }
          uVar15 = (uint)uVar16 + 1;
          uVar16 = (ulong)uVar15;
          uVar8 = *(uint *)(lVar14 + 0x18);
          lVar4 = lVar4 + 8;
        } while ((int)uVar15 < (int)uVar8);
        uVar6 = (ulong)uVar8;
        uVar15 = (uint)uVar16;
      } while ((int)uVar8 <= (int)uVar15);
      lVar4 = *(long *)(lVar14 + 0x10);
      if (lVar4 == 0) goto code_r0x02428920;
      if ((*(uint *)(lVar4 + 0x18) <= uVar15) || (*(uint *)(lVar4 + 0x18) <= uVar12))
      goto code_r0x02428924;
      *(undefined8 *)(lVar4 + 0x20 + (long)(int)uVar12 * 8) =
           *(undefined8 *)(lVar4 + 0x20 + (long)(int)uVar15 * 8);
      uVar13 = (ulong)(uVar12 + 1);
    } while( true );
  }
  lVar4 = func_0x00f78af4();
  pcStack_38 = Core_Input_InputGlyphBehaviour__Update;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5775 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5775 = 1;
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar13 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
  if (((uVar13 & 1) != 0) || (*(long *)(lVar4 + 0x40) != 0)) {
    uVar13 = Core_Input_InputGlyphBehaviour__HandlePressedState(lVar4);
  }
  if (*(long *)(lVar4 + 0x48) == 0) {
    return uVar13;
  }
  uVar5 = 0x3eb5000;
  if ((bRam0000000003eb5777 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5777 = 1;
  }
  if (*(long *)(lVar4 + 0x48) == 0) {
LAB_01648e64:
    auVar17 = func_0x00f78af4();
    puStack_78 = (undefined *)0x3d22848;
    uStack_70 = uVar5;
    UNRECOVERED_JUMPTABLE = (code *)lVar4;
    if ((bRam0000000003eb5792 & 1) == 0) {
      func_0x00f78a20(0x3d22848);
      func_0x00f78a20(0x3d3e5b8);
      func_0x00f78a20(0x3d3e5b0);
      bRam0000000003eb5792 = 1;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
      uVar13 = 0;
    }
    else {
      lVar4 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x20);
      uVar13 = 0;
      if (lVar4 != 0) {
        uVar5 = Core_Input_ActionPressManager__WasPressedThisFrame
                          (lVar4,auVar17._0_8_,auVar17._8_8_);
        uStack_88 = uStack_88 & 0xffffffffffff;
        /*System.Nullable<bool>$$.ctor*/ func_0x0261a454((long)&uStack_88 + 6,uVar5,uRam0000000003d3e5b0);
        uVar13 = (ulong)(uStack_88._6_1_ != '\0');
      }
    }
    return uVar13;
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x48) + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar13 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
  if ((int)uVar13 != 0) {
    if ((*(long *)(lVar4 + 0x48) == 0) || (*(long *)(lVar4 + 0x30) == 0)) goto LAB_01648e64;
    /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(lVar4 + 0x30),*(undefined8 *)(*(long *)(lVar4 + 0x48) + 0x18),0);
    uVar13 = Core_Input_InputGlyphBehaviour__SetGlyphEnabled(lVar4,1);
    *(undefined8 *)(lVar4 + 0x48) = 0;
  }
  return uVar13;
code_r0x02428920:
  func_0x00f78af4();
code_r0x02428924:
  uVar5 = func_0x00f78b24();
  auVar17 = func_0x00f78ac0(uVar5,0);
  uVar16 = auVar17._0_8_;
  puStack_b8 = &System_Collections_Generic_List_WeaponAudioManager_GraveyardInfo___RemoveAt;
  ppppuVar20 = &pppuStack_c0;
  uVar12 = *(uint *)(uVar16 + 0x18);
  uVar8 = auVar17._8_4_;
  uVar6 = uVar16;
  pppuStack_c0 = &ppuStack_80;
  if (uVar12 <= uVar8) {
    uVar6 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    uVar12 = *(uint *)(uVar16 + 0x18);
  }
  iVar3 = uVar12 - 1;
  *(int *)(uVar16 + 0x18) = iVar3;
  if (iVar3 - uVar8 != 0 && (int)uVar8 <= iVar3) {
    puVar10 = *(undefined8 **)(uVar16 + 0x10);
    uVar6 = /*System.Array$$Copy*/ func_0x0292b4cc(puVar10,uVar8 + 1,puVar10,auVar17._8_8_,iVar3 - uVar8,0,in_x6,in_x7,
                            puVar9,lVar14);
  }
  lVar4 = *(long *)(uVar16 + 0x10);
  if (lVar4 == 0) {
    func_0x00f78af4();
  }
  else if (*(uint *)(uVar16 + 0x18) < *(uint *)(lVar4 + 0x18)) {
    *(undefined8 *)(lVar4 + (long)(int)*(uint *)(uVar16 + 0x18) * 8 + 0x20) = 0;
    *(int *)(uVar16 + 0x1c) = *(int *)(uVar16 + 0x1c) + 1;
    return uVar6;
  }
  uVar5 = func_0x00f78b24();
  auVar18 = func_0x00f78ac0(uVar5,0);
  uVar16 = auVar18._0_8_;
  puVar21 = &System_Collections_Generic_List_RegexCharClass_SingleRange___RemoveRange;
  iVar3 = auVar18._8_4_;
  iVar11 = (int)puVar10;
  uVar6 = uVar16;
  if (iVar3 < 0) {
    uVar6 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
  }
  if (iVar11 < 0) {
    uVar6 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
  }
  if (*(int *)(uVar16 + 0x18) - iVar3 < iVar11) {
    uVar6 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
  }
  if (0 < iVar11) {
    iVar2 = *(int *)(uVar16 + 0x18) - iVar11;
    *(int *)(uVar16 + 0x18) = iVar2;
    if (iVar2 - iVar3 != 0 && iVar3 <= iVar2) {
      /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(uVar16 + 0x10),iVar11 + iVar3,*(undefined8 *)(uVar16 + 0x10),
                      auVar18._8_8_,iVar2 - iVar3,0,in_x6,in_x7,uVar13,lVar19,auVar17._8_8_,
                      auVar17._0_8_,ppppuVar20,puVar21);
      iVar2 = *(int *)(uVar16 + 0x18);
    }
    uVar6 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar16 + 0x10),iVar2,puVar10,0);
    *(int *)(uVar16 + 0x1c) = *(int *)(uVar16 + 0x1c) + 1;
  }
  return uVar6;
}



// ============================================================
// RVA: 0x1648e68 | Core.Input.InputManager.WasActionPressedThisFrame
// ============================================================

bool Core_Input_InputManager__WasActionPressedThisFrame(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined2 uStack_32;
  
  if ((bRam0000000003eb5792 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d3e5b8);
    func_0x00f78a20(0x3d3e5b0);
    bRam0000000003eb5792 = 1;
  }
  if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x20);
    bVar1 = false;
    if (lVar2 != 0) {
      uVar3 = Core_Input_ActionPressManager__WasPressedThisFrame(lVar2,param_1,param_2);
      uStack_32 = 0;
      /*System.Nullable<bool>$$.ctor*/ func_0x0261a454(&uStack_32,uVar3,uRam0000000003d3e5b0);
      bVar1 = (char)uStack_32 != '\0';
    }
  }
  return bVar1;
}



// ============================================================
// RVA: 0x1648f2c | Core.Input.InputManager.IsScreenLayerInputActive
// ============================================================

bool Core_Input_InputManager__IsScreenLayerInputActive(uint param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined2 uStack_62;
  
  if ((bRam0000000003eb5788 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    bRam0000000003eb5788 = 1;
  }
  if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
    return true;
  }
  uVar4 = /*Core.Input.InputManager$$IsAllInputSuspended*/ func_0x0164a5cc();
  if ((uVar4 & 1) != 0) {
    return false;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) &&
     (lVar6 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar6 != 0)) {
    if (*(uint *)(lVar6 + 0x18) <= param_1) goto LAB_0164901c;
    if (*(char *)(lVar6 + (long)(int)param_1 * 0x10 + 0x28) != '\0') {
      return false;
    }
    iVar2 = /*Core.Input.InputManager$$HasExclusiveLayers*/ func_0x0164a630();
    if (iVar2 == 0) {
      return true;
    }
    if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) &&
       (lVar6 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar6 != 0)) {
      if (param_1 < *(uint *)(lVar6 + 0x18)) {
        if (*(char *)(lVar6 + (long)(int)param_1 * 0x10 + 0x29) == '\0') {
          return false;
        }
        uVar3 = /*Core.Input.InputManager$$FindTopmostExclusiveLayer*/ func_0x0164a6a0();
        return uVar3 == param_1;
      }
      goto LAB_0164901c;
    }
  }
  func_0x00f78af4();
LAB_0164901c:
  uVar5 = func_0x00f78b24();
  uVar5 = func_0x00f78ac0(uVar5,0);
  if ((bRam0000000003eb5793 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d3e5b8);
    func_0x00f78a20(0x3d3e5b0);
    bRam0000000003eb5793 = 1;
  }
  if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
    bVar1 = false;
  }
  else {
    lVar6 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x20);
    bVar1 = false;
    if (lVar6 != 0) {
      uVar5 = Core_Input_ActionPressManager__Consume(lVar6,uVar5);
      uStack_62 = 0;
      /*System.Nullable<bool>$$.ctor*/ func_0x0261a454(&uStack_62,uVar5,uRam0000000003d3e5b0);
      bVar1 = (char)uStack_62 != '\0';
    }
  }
  return bVar1;
}



// ============================================================
// RVA: 0x1649028 | Core.Input.InputManager.ConsumeAction
// ============================================================

bool Core_Input_InputManager__ConsumeAction(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined2 uStack_32;
  
  if ((bRam0000000003eb5793 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d3e5b8);
    func_0x00f78a20(0x3d3e5b0);
    bRam0000000003eb5793 = 1;
  }
  if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x20);
    bVar1 = false;
    if (lVar2 != 0) {
      uVar3 = Core_Input_ActionPressManager__Consume(lVar2,param_1);
      uStack_32 = 0;
      /*System.Nullable<bool>$$.ctor*/ func_0x0261a454(&uStack_32,uVar3,uRam0000000003d3e5b0);
      bVar1 = (char)uStack_32 != '\0';
    }
  }
  return bVar1;
}



// ============================================================
// RVA: 0x1649514 | Core.Input.InputManager.get_CurrentInputFamily
// ============================================================

undefined4 Core_Input_InputManager__get_CurrentInputFamily(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb577c & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    bRam0000000003eb577c = 1;
  }
  if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x18);
  }
  return uVar1;
}



// ============================================================
// RVA: 0x164966c | Core.Input.InputManager.RequestLoadGlyphSprite
// ============================================================

undefined1 * Core_Input_InputManager__RequestLoadGlyphSprite(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long *extraout_x8;
  long *extraout_x8_00;
  long lVar20;
  undefined1 *puVar21;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar22;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar23;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  auVar26._8_8_ = unaff_x23;
  auVar26._0_8_ = unaff_x22;
  if ((bRam0000000003eb5782 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    bRam0000000003eb5782 = 1;
  }
  lVar20 = **(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8);
  if ((lVar20 == 0) || (param_1 == 0)) {
    puVar17 = (undefined1 *)func_0x00f78af4();
    *(undefined4 *)(puVar17 + 0x6c) = 0xffffffff;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return puVar17;
  }
  puVar17 = *(undefined1 **)(lVar20 + 0x30);
  lVar20 = *(long *)(lVar20 + 0x10);
  if ((bRam0000000003eb5693 & 1) == 0) {
    func_0x00f78a20(0x3d26968,lVar20,puVar17,0);
    func_0x00f78a20(0x3d51bd8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5693 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x10);
  if (plVar10 == (long *)0x0) {
    return (undefined1 *)0x0;
  }
  uVar11 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
  puVar12 = (undefined1 *)/*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar11,0);
  if (((ulong)puVar12 & 1) != 0) {
    return puVar12;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar16 = (undefined8 *)0x0;
  puVar12 = (undefined1 *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar11,0);
  if ((int)puVar12 == 0) {
    return puVar12;
  }
  plVar10 = *(long **)(param_1 + 0x10);
  auVar24._8_8_ = plVar10;
  auVar24._0_8_ = lVar20;
  puVar12 = (undefined1 *)func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadSuccessHandler_TypeInfo*/ uRam0000000003d26968);
  puVar5 = puRam0000000003d51bd8;
  *(undefined8 *)(puVar12 + 0x10) = *puRam0000000003d51bd8;
  *(long *)(puVar12 + 0x20) = param_1;
  *(undefined8 **)(puVar12 + 0x28) = puVar5;
  if (lVar20 == 0) {
    auVar26 = func_0x00f78af4();
    puVar17 = auVar26._0_8_;
    *(undefined8 *)(puVar17 + 0x10) = *puVar16;
    *(long *)(puVar17 + 0x20) = auVar26._8_8_;
    *(undefined8 **)(puVar17 + 0x28) = puVar16;
    return puVar17;
  }
  puVar19 = (undefined1 *)0x0;
  puVar6 = &stack0xffffffffffffffc0;
  puVar23 = &stack0xfffffffffffffff0;
  puVar21 = (undefined1 *)0x0;
  uVar11 = 0x3eb5000;
  puVar14 = puVar17;
  puVar18 = puVar12;
  if ((bRam0000000003eb567d & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb567d = 1;
  }
  if (plVar10 == (long *)0x0) {
    func_0x00f78af4();
    plVar10 = extraout_x8_00;
  }
  else {
    plVar10 = (long *)(**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
    auVar25._8_8_ = plVar10;
    auVar25._0_8_ = lVar20;
    if ((plVar10 == (long *)0x0) || (*plVar10 == /*string_TypeInfo*/ lRam0000000003d24dd0)) {
      puVar15 = (undefined1 *)0x0;
      puVar22 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      puVar6 = (undefined1 *)register0x00000008;
      puVar14 = puVar17;
      puVar18 = puVar12;
      puVar19 = puVar21;
      puVar21 = unaff_x19;
      puVar12 = unaff_x20;
      puVar17 = unaff_x21;
      uVar11 = unaff_x24;
      puVar23 = unaff_x29;
      auVar24 = auVar26;
      goto Core_Assets_AssetManager__RequestAsset;
    }
  }
  unaff_x30 = Core_Assets_AssetManager__RequestMultipleAssets;
  auVar25 = func_0x00f78e5c(plVar10);
  puVar15 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  puVar22 = (undefined1 *)0x0;
Core_Assets_AssetManager__RequestAsset:
  do {
    uVar13 = auVar25._8_8_;
    lVar20 = auVar25._0_8_;
    *(undefined8 *)(puVar6 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar6 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar6 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar6 + -0x40) = uVar11;
    *(long *)(puVar6 + -0x38) = auVar24._8_8_;
    *(long *)(puVar6 + -0x30) = auVar24._0_8_;
    *(undefined1 **)(puVar6 + -0x28) = puVar17;
    *(undefined1 **)(puVar6 + -0x20) = puVar12;
    *(undefined1 **)(puVar6 + -0x18) = puVar21;
    *(undefined1 **)(puVar6 + -0x10) = puVar23;
    *(code **)(puVar6 + -8) = unaff_x30;
    unaff_x26 = 0x3eb5000;
    puVar17 = puVar15;
    puVar12 = puVar22;
    puVar21 = puVar14;
    if ((bRam0000000003eb567e & 1) == 0) {
      func_0x00f78a20(0x3d2fec0);
      func_0x00f78a20(0x3d2fad0);
      func_0x00f78a20(0x3d2e030);
      func_0x00f78a20(0x3d2dfd0);
      func_0x00f78a20(0x3d2e038);
      func_0x00f78a20(0x3d35c70);
      func_0x00f78a20(0x3d3ccc0);
      bRam0000000003eb567e = 1;
    }
    *(undefined8 *)(puVar6 + -0xf8) = 0;
    *(undefined4 *)(puVar6 + -0x100) = 0;
    if (*(long *)(lVar20 + 0x30) != 0) {
      puVar17 = puVar6 + -0xf8;
      puVar12 = puRam0000000003d2fec0;
      iVar7 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar20 + 0x30),puVar14);
      if ((iVar7 == 0) || (uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar13,0), (uVar8 & 1) != 0)) {
        return (undefined1 *)0x0;
      }
      if (*(long *)(lVar20 + 0x20) != 0) {
        puVar17 = puVar6 + -0x100;
        puVar12 = puRam0000000003d2fad0;
        uVar8 = /*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$TryGetValue*/ func_0x01ec0ed8(*(long *)(lVar20 + 0x20),uVar13);
        if ((uVar8 & 1) == 0) {
          puVar17 = puVar14;
          puVar12 = puVar15;
          Core_Assets_AssetManager__AddAsset(puVar6 + -0xf0,lVar20,uVar13);
          uVar3 = *(undefined4 *)(puVar6 + -0xf0);
          *(undefined4 *)(puVar6 + -0x100) = uVar3;
          puVar21 = puVar22;
code_r0x01635e94:
          uVar4 = *(uint *)(lVar20 + 0x38);
          puVar22 = (undefined1 *)(ulong)uVar4;
          *(uint *)(lVar20 + 0x38) = uVar4 + 1;
          lVar9 = *(long *)(lVar20 + 0x10);
          if (lVar9 != 0) {
            *(uint *)(puVar6 + -0xf0) = uVar4;
            *(undefined4 *)(puVar6 + -0xec) = uVar3;
            *(undefined1 **)(puVar6 + -0xe8) = puVar18;
            *(undefined1 **)(puVar6 + -0xe0) = puVar19;
            *(undefined8 *)(puVar6 + -0xd8) = 0;
            puVar17 = puRam0000000003d3ccc0;
            /*System.Collections.Generic.List<AssetManager.AssetRequest>$$Add*/ func_0x024afe2c(lVar9,puVar6 + -0xf0);
            if (*(long *)(lVar20 + 0x28) != 0) {
              puVar17 = (undefined1 *)(ulong)*(uint *)(puVar6 + -0x100);
              puVar12 = puRam0000000003d2dfd0;
              /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$set_Item*/ func_0x01e2cb1c(*(long *)(lVar20 + 0x28),puVar22);
              if ((*(long *)(puVar6 + -0xf8) != 0) &&
                 (lVar9 = *(long *)(*(long *)(puVar6 + -0xf8) + 0x20), lVar9 != 0)) {
                /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Add*/ func_0x021cf8ec(lVar9,*(undefined4 *)(puVar6 + -0x100),uRam0000000003d35c70);
                return puVar22;
              }
            }
          }
        }
        else if (*(long *)(lVar20 + 0x18) != 0) {
          puVar17 = puRam0000000003d2e030;
          /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(puVar6 + -0xf0,*(long *)(lVar20 + 0x18),*(undefined4 *)(puVar6 + -0x100));
          *(undefined8 *)(puVar6 + -0x138) = *(undefined8 *)(puVar6 + -0xa8);
          *(undefined8 *)(puVar6 + -0x140) = *(undefined8 *)(puVar6 + -0xb0);
          *(undefined8 *)(puVar6 + -0x128) = *(undefined8 *)(puVar6 + -0x98);
          *(undefined8 *)(puVar6 + -0x130) = *(undefined8 *)(puVar6 + -0xa0);
          *(undefined8 *)(puVar6 + -0x118) = *(undefined8 *)(puVar6 + -0x88);
          *(undefined8 *)(puVar6 + -0x120) = *(undefined8 *)(puVar6 + -0x90);
          *(undefined8 *)(puVar6 + -0x108) = *(undefined8 *)(puVar6 + -0x78);
          *(undefined8 *)(puVar6 + -0x110) = *(undefined8 *)(puVar6 + -0x80);
          *(undefined8 *)(puVar6 + -0x178) = *(undefined8 *)(puVar6 + -0xe8);
          *(undefined8 *)(puVar6 + -0x180) = *(undefined8 *)(puVar6 + -0xf0);
          *(undefined8 *)(puVar6 + -0x168) = *(undefined8 *)(puVar6 + -0xd8);
          *(undefined8 *)(puVar6 + -0x170) = *(undefined8 *)(puVar6 + -0xe0);
          *(undefined8 *)(puVar6 + -0x158) = *(undefined8 *)(puVar6 + -200);
          *(undefined8 *)(puVar6 + -0x160) = *(undefined8 *)(puVar6 + -0xd0);
          *(undefined8 *)(puVar6 + -0x148) = *(undefined8 *)(puVar6 + -0xb8);
          *(undefined8 *)(puVar6 + -0x150) = *(undefined8 *)(puVar6 + -0xc0);
          lVar9 = *(long *)(lVar20 + 0x18);
          if (lVar9 != 0) {
            *(undefined8 *)(puVar6 + -0xa8) = *(undefined8 *)(puVar6 + -0x138);
            *(undefined8 *)(puVar6 + -0xb0) = *(undefined8 *)(puVar6 + -0x140);
            *(undefined8 *)(puVar6 + -0x98) = *(undefined8 *)(puVar6 + -0x128);
            *(undefined8 *)(puVar6 + -0xa0) = *(undefined8 *)(puVar6 + -0x130);
            *(undefined8 *)(puVar6 + -0x88) = *(undefined8 *)(puVar6 + -0x118);
            *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0x120);
            *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x108);
            *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x110);
            *(undefined8 *)(puVar6 + -0xe8) = *(undefined8 *)(puVar6 + -0x178);
            *(undefined8 *)(puVar6 + -0xf0) = *(undefined8 *)(puVar6 + -0x180);
            *(undefined8 *)(puVar6 + -0xd8) = *(undefined8 *)(puVar6 + -0x168);
            *(undefined8 *)(puVar6 + -0xe0) = *(undefined8 *)(puVar6 + -0x170);
            *(undefined8 *)(puVar6 + -200) = *(undefined8 *)(puVar6 + -0x158);
            *(undefined8 *)(puVar6 + -0xd0) = *(undefined8 *)(puVar6 + -0x160);
            *(undefined8 *)(puVar6 + -0xb8) = *(undefined8 *)(puVar6 + -0x148);
            *(undefined8 *)(puVar6 + -0xc0) = *(undefined8 *)(puVar6 + -0x150);
            *(int *)(puVar6 + -0x70) = *(int *)(puVar6 + -0x70) + 1;
            *(undefined4 *)(puVar6 + -0x6c) = *(undefined4 *)(puVar6 + -0x6c);
            puVar17 = puVar6 + -0xf0;
            puVar12 = puRam0000000003d2e038;
            /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(lVar9,*(undefined4 *)(puVar6 + -0x100));
            uVar3 = *(undefined4 *)(puVar6 + -0x100);
            goto code_r0x01635e94;
          }
        }
      }
    }
    auVar24 = func_0x00f78af4();
    plVar10 = auVar24._8_8_;
    *(undefined1 **)(puVar6 + -0x1c0) = puVar15;
    *(undefined1 **)(puVar6 + -0x1b8) = puVar14;
    *(undefined1 **)(puVar6 + -0x1b0) = puVar22;
    *(undefined1 **)(puVar6 + -0x1a8) = puVar18;
    *(undefined1 **)(puVar6 + -0x1a0) = puVar19;
    *(long *)(puVar6 + -0x198) = lVar20;
    *(undefined1 **)(puVar6 + -400) = puVar6 + -0x10;
    *(code **)(puVar6 + -0x188) = Core_Assets_AssetManager__RequestAsset;
    puVar23 = puVar6 + -400;
    uVar11 = 0x3eb5000;
    puVar14 = puVar17;
    puVar18 = puVar12;
    puVar19 = puVar21;
    if ((bRam0000000003eb567c & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb567c = 1;
    }
    unaff_x25 = uVar13;
    if (plVar10 == (long *)0x0) {
      func_0x00f78af4();
      plVar10 = extraout_x8;
LAB_01635fe4:
      unaff_x30 = Core_Assets_AssetManager__RequestSpriteAsset;
      auVar25 = func_0x00f78e5c(plVar10);
      puVar15 = (undefined1 *)0x0;
      puVar22 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      puVar6 = puVar6 + -0x1c0;
      goto Core_Assets_AssetManager__RequestAsset;
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
    auVar25._8_8_ = plVar10;
    auVar25._0_8_ = auVar24._0_8_;
    if ((plVar10 != (long *)0x0) && (*plVar10 != /*string_TypeInfo*/ lRam0000000003d24dd0)) goto LAB_01635fe4;
    puVar15 = (undefined1 *)0x0;
    puVar22 = (undefined1 *)0x0;
    puVar23 = *(undefined1 **)(puVar6 + -400);
    unaff_x30 = *(code **)(puVar6 + -0x188);
    plVar10 = (long *)(puVar6 + -0x1a0);
    plVar1 = (long *)(puVar6 + -0x198);
    plVar2 = (long *)(puVar6 + -0x1a8);
    uVar11 = *(undefined8 *)(puVar6 + -0x1c0);
    auVar24._8_8_ = *(undefined8 *)(puVar6 + -0x1b8);
    auVar24._0_8_ = *(undefined8 *)(puVar6 + -0x1b0);
    puVar6 = puVar6 + -0x180;
    puVar14 = puVar17;
    puVar18 = puVar12;
    puVar19 = puVar21;
    puVar21 = (undefined1 *)*plVar1;
    puVar12 = (undefined1 *)*plVar10;
    puVar17 = (undefined1 *)*plVar2;
  } while( true );
}



// ============================================================
// RVA: 0x1649708 | Core.Input.InputManager.get_JoystickRotatedLeft
// ============================================================

bool Core_Input_InputManager__get_JoystickRotatedLeft(void)

{
  bool bVar1;
  
  if ((bRam0000000003eb577d & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    bRam0000000003eb577d = 1;
  }
  if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x55) != '\0';
  }
  return bVar1;
}



// ============================================================
// RVA: 0x164976c | Core.Input.InputManager.get_JoystickRotatedRight
// ============================================================

bool Core_Input_InputManager__get_JoystickRotatedRight(void)

{
  bool bVar1;
  
  if ((bRam0000000003eb577e & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    bRam0000000003eb577e = 1;
  }
  if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x56) != '\0';
  }
  return bVar1;
}



// ============================================================
// RVA: 0x16497d0 | Core.Input.InputManager.Init
// ============================================================

void Core_Input_InputManager__Init
               (long param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  
  puVar6 = param_3;
  if ((bRam0000000003eb577f & 1) == 0) {
    func_0x00f78a20(0x3d1fa80);
    func_0x00f78a20(0x3d2a458);
    func_0x00f78a20(0x3d2a450);
    func_0x00f78a20(0x3d1b638);
    func_0x00f78a20(0x3d1b630);
    func_0x00f78a20(0x3d20a50);
    func_0x00f78a20(0x3d589d0);
    func_0x00f78a20(0x3d589d8);
    func_0x00f78a20(0x3d589e0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d22878);
    func_0x00f78a20(0x3d1f188);
    func_0x00f78a20(0x3d26d78);
    bRam0000000003eb577f = 1;
  }
  **(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) = param_1;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 **)(param_1 + 0x30) = param_3;
  if (((*(byte *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  Core_Input_ControllerRemappingsNative__Init();
  lVar4 = func_0x00f78aec(/*Core.Input.ControllerRemappingsNative.OnControllerMappingsChanged_TypeInfo*/ uRam0000000003d26d78);
  puVar1 = puRam0000000003d589d0;
  *(undefined8 *)(lVar4 + 0x10) = *puRam0000000003d589d0;
  *(long *)(lVar4 + 0x20) = param_1;
  *(undefined8 **)(lVar4 + 0x28) = puVar1;
  Core_Input_ControllerRemappingsNative__add_ControllerMappingsChanged();
  lVar4 = func_0x00f78aec(/*Core.Input.ActionPressManager_TypeInfo*/ uRam0000000003d1fa80);
  Core_Input_ActionPressManager___ctor();
  *(long *)(param_1 + 0x20) = lVar4;
  if (lVar4 != 0) {
    uVar5 = func_0x00f78aec(/*System.Action<InputDevice, InputDeviceChange>_TypeInfo*/ uRam0000000003d1b630);
    /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar5,param_1,uRam0000000003d589d8,uRam0000000003d2a450);
    if (((*(ushort *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.InputSystem.InputSystem$$add_onDeviceChange*/ func_0x030663ec(uVar5,0);
    uVar2 = /*UnityEngine.InputSystem.InputSystem$$get_onEvent*/ func_0x03068030(0);
    uVar5 = func_0x00f78aec(/*System.Action<InputEventPtr, InputDevice>_TypeInfo*/ uRam0000000003d1b638);
    /*System.Action<InputEventPtr, object>$$.ctor*/ func_0x01e6bce0(uVar5,param_1,uRam0000000003d589e0,uRam0000000003d2a458);
    uVar2 = /*UnityEngine.InputSystem.LowLevel.InputEventListener$$op_Addition*/ func_0x0304e014(uVar2,uVar5,0);
    /*UnityEngine.InputSystem.InputSystem$$set_onEvent*/ func_0x03068038(uVar2,0);
    *(undefined1 *)(param_1 + 0x28) = 1;
    uVar3 = /*Core.Input.InputManager$$GetMostAppropriateInputFamily*/ func_0x01649a74();
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    /*Core.Input.InputManager$$FireOnInputDeviceChanged*/ func_0x01649c7c(param_1);
    uVar5 = func_0x00f78a34(/*Core.Input.LayerInfo[]_TypeInfo*/ uRam0000000003d1f188,param_5);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    *(undefined4 *)(param_1 + 0x40) = param_4;
    *(undefined8 *)(param_1 + 0x48) = param_6;
    return;
  }
  auVar7 = func_0x00f78af4();
  lVar4 = auVar7._0_8_;
  *(undefined8 *)(lVar4 + 0x10) = *puVar6;
  *(long *)(lVar4 + 0x20) = auVar7._8_8_;
  *(undefined8 **)(lVar4 + 0x28) = puVar6;
  return;
}



// ============================================================
// RVA: 0x1649a74 | Core.Input.InputManager.GetMostAppropriateInputFamily
// ============================================================

int Core_Input_InputManager__GetMostAppropriateInputFamily(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((bRam0000000003eb579f & 1) == 0) {
    func_0x00f78a20(0x3d32788);
    func_0x00f78a20(0x3d32790);
    func_0x00f78a20(0x3d32798);
    func_0x00f78a20(0x3d22878);
    func_0x00f78a20(0x3d3fb60);
    bRam0000000003eb579f = 1;
  }
  if (((*(ushort *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auStack_80 = /*UnityEngine.InputSystem.InputSystem$$get_devices*/ func_0x030662d4(0);
  /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&uStack_98,auStack_80,uRam0000000003d3fb60);
  iVar7 = 0;
  uStack_68 = uStack_90;
  uStack_70 = uStack_98;
  uStack_60 = uStack_88;
  iVar8 = 0;
  iVar3 = 0;
  while( true ) {
    iVar6 = iVar3;
    uVar4 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&uStack_70,uRam0000000003d32790);
    if ((uVar4 & 1) == 0) break;
    lVar5 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&uStack_70,uRam0000000003d32798);
    if (lVar5 == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1649c34);
      (*pcVar2)();
    }
    uVar4 = /*UnityEngine.InputSystem.InputDevice$$get_enabled*/ func_0x030467d0(lVar5,0);
    iVar3 = iVar6;
    if ((uVar4 & 1) != 0) {
      uVar4 = /*UnityEngine.InputSystem.InputDevice$$get_native*/ func_0x03046958(lVar5,0);
      if ((uVar4 & 1) != 0) {
        iVar3 = /*Core.Input.InputManagerExtensions$$GetInputFamily*/ func_0x0164b3a4(lVar5);
        iVar1 = iVar8;
        if (iVar3 == 5) {
          iVar1 = iVar8 + 1;
        }
        if (iVar3 == 4) {
          iVar7 = iVar7 + 1;
          iVar1 = iVar8;
        }
        iVar8 = iVar1;
        if (iVar3 <= iVar6 || iVar3 == 2) {
          iVar3 = iVar6;
        }
      }
    }
  }
  /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&uStack_70,uRam0000000003d32788);
  if (iVar6 - 3U < 4) {
    if (iVar7 == 0) {
      if (0 < iVar8) {
        return 5;
      }
    }
    else if ((iVar8 == 0) && (0 < iVar7)) {
      return 4;
    }
    iVar6 = 3;
  }
  return iVar6;
}



// ============================================================
// RVA: 0x1649c7c | Core.Input.InputManager.FireOnInputDeviceChanged
// ============================================================

/* WARNING: Possible PIC construction at 0x01649e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01649e3c) */
/* WARNING: Removing unreachable block (ram,0x01649e54) */
/* WARNING: Removing unreachable block (ram,0x01649e44) */

void Core_Input_InputManager__FireOnInputDeviceChanged(long param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  int extraout_w1;
  long lVar9;
  int *piVar10;
  undefined8 *unaff_x23;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  if ((bRam0000000003eb579c & 1) == 0) {
    func_0x00f78a20(0x3d32668);
    func_0x00f78a20(0x3d32670);
    func_0x00f78a20(0x3d32678);
    func_0x00f78a20(0x3d22230);
    func_0x00f78a20(0x3d3a938);
    bRam0000000003eb579c = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  plStack_58 = (long *)0x0;
  if (*(long *)(param_1 + 0x58) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar7 = (long *)___cxa_begin_catch();
      lVar9 = *plVar7;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,*unaff_x23);
      if (lVar9 == 0) {
        return;
      }
      func_0x00f78ac0(lVar9,0);
    }
    lVar9 = __Unwind_Resume();
    if ((bRam0000000003eb5780 & 1) == 0) {
      func_0x00f78a20(0x3d2a458);
      func_0x00f78a20(0x3d2a450);
      func_0x00f78a20(0x3d1b638);
      func_0x00f78a20(0x3d1b630);
      func_0x00f78a20(0x3d20a50);
      func_0x00f78a20(0x3d589d0);
      func_0x00f78a20(0x3d589d8);
      func_0x00f78a20(0x3d589e0);
      func_0x00f78a20(0x3d22848);
      func_0x00f78a20(0x3d22878);
      func_0x00f78a20(0x3d26d78);
      bRam0000000003eb5780 = 1;
    }
    if (*(char *)(lVar9 + 0x28) != '\0') {
      uVar5 = func_0x00f78aec(/*System.Action<InputDevice, InputDeviceChange>_TypeInfo*/ uRam0000000003d1b630);
      /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar5,lVar9,uRam0000000003d589d8,uRam0000000003d2a450);
      if (((*(ushort *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*UnityEngine.InputSystem.InputSystem$$remove_onDeviceChange*/ func_0x03066548(uVar5,0);
      uVar3 = /*UnityEngine.InputSystem.InputSystem$$get_onEvent*/ func_0x03068030(0);
      uVar5 = func_0x00f78aec(/*System.Action<InputEventPtr, InputDevice>_TypeInfo*/ uRam0000000003d1b638);
      /*System.Action<InputEventPtr, object>$$.ctor*/ func_0x01e6bce0(uVar5,lVar9,uRam0000000003d589e0,uRam0000000003d2a458);
      uVar3 = /*UnityEngine.InputSystem.LowLevel.InputEventListener$$op_Subtraction*/ func_0x0304e1cc(uVar3,uVar5,0);
      /*UnityEngine.InputSystem.InputSystem$$set_onEvent*/ func_0x03068038(uVar3,0);
      *(undefined1 *)(lVar9 + 0x28) = 0;
    }
    lVar8 = func_0x00f78aec(/*Core.Input.ControllerRemappingsNative.OnControllerMappingsChanged_TypeInfo*/ uRam0000000003d26d78);
    puVar6 = puRam0000000003d589d0;
    *(undefined8 *)(lVar8 + 0x10) = *puRam0000000003d589d0;
    *(long *)(lVar8 + 0x20) = lVar9;
    *(undefined8 **)(lVar8 + 0x28) = puVar6;
    if (((*(byte *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    Core_Input_ControllerRemappingsNative__remove_ControllerMappingsChanged(lVar8);
    Core_Input_ControllerRemappingsNative__DeInit();
    **(undefined8 **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) = 0;
    return;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,*(long *)(param_1 + 0x58),uRam0000000003d3a938);
  do {
    uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_68,uRam0000000003d32670);
    plVar7 = plStack_58;
    if ((uVar4 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d32668);
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar5 = /*Core.Input.InputManager$$TryGetGlyphMappingsForFamily*/ func_0x0164a548(param_1,uVar1);
    if (plVar7 == (long *)0x0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1649de8);
      (*pcVar2)();
    }
    lVar9 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == /*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_01649da0;
        }
        piVar10 = piVar10 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230,0);
LAB_01649da0:
    (*(code *)*puVar6)(plVar7,uVar1,uVar5,puVar6[1]);
  } while( true );
}



// ============================================================
// RVA: 0x1649e28 | Core.Input.InputManager.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x01649e38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01649e3c) */
/* WARNING: Removing unreachable block (ram,0x01649e54) */
/* WARNING: Removing unreachable block (ram,0x01649e44) */

void Core_Input_InputManager__DeInit(long param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000003eb5780 & 1) == 0) {
    func_0x00f78a20(0x3d2a458);
    func_0x00f78a20(0x3d2a450);
    func_0x00f78a20(0x3d1b638);
    func_0x00f78a20(0x3d1b630);
    func_0x00f78a20(0x3d20a50);
    func_0x00f78a20(0x3d589d0);
    func_0x00f78a20(0x3d589d8);
    func_0x00f78a20(0x3d589e0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d22878);
    func_0x00f78a20(0x3d26d78);
    bRam0000000003eb5780 = 1;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    uVar3 = func_0x00f78aec(/*System.Action<InputDevice, InputDeviceChange>_TypeInfo*/ uRam0000000003d1b630);
    /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar3,param_1,uRam0000000003d589d8,uRam0000000003d2a450);
    if (((*(ushort *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.InputSystem.InputSystem$$remove_onDeviceChange*/ func_0x03066548(uVar3,0);
    uVar2 = /*UnityEngine.InputSystem.InputSystem$$get_onEvent*/ func_0x03068030(0);
    uVar3 = func_0x00f78aec(/*System.Action<InputEventPtr, InputDevice>_TypeInfo*/ uRam0000000003d1b638);
    /*System.Action<InputEventPtr, object>$$.ctor*/ func_0x01e6bce0(uVar3,param_1,uRam0000000003d589e0,uRam0000000003d2a458);
    uVar2 = /*UnityEngine.InputSystem.LowLevel.InputEventListener$$op_Subtraction*/ func_0x0304e1cc(uVar2,uVar3,0);
    /*UnityEngine.InputSystem.InputSystem$$set_onEvent*/ func_0x03068038(uVar2,0);
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  lVar4 = func_0x00f78aec(/*Core.Input.ControllerRemappingsNative.OnControllerMappingsChanged_TypeInfo*/ uRam0000000003d26d78);
  puVar1 = puRam0000000003d589d0;
  *(undefined8 *)(lVar4 + 0x10) = *puRam0000000003d589d0;
  *(long *)(lVar4 + 0x20) = param_1;
  *(undefined8 **)(lVar4 + 0x28) = puVar1;
  if (((*(byte *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  Core_Input_ControllerRemappingsNative__remove_ControllerMappingsChanged(lVar4);
  Core_Input_ControllerRemappingsNative__DeInit();
  **(undefined8 **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) = 0;
  return;
}



// ============================================================
// RVA: 0x1649e58 | Core.Input.InputManager.DeInitStatics
// ============================================================

void Core_Input_InputManager__DeInitStatics(long param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000003eb5780 & 1) == 0) {
    func_0x00f78a20(0x3d2a458);
    func_0x00f78a20(0x3d2a450);
    func_0x00f78a20(0x3d1b638);
    func_0x00f78a20(0x3d1b630);
    func_0x00f78a20(0x3d20a50);
    func_0x00f78a20(0x3d589d0);
    func_0x00f78a20(0x3d589d8);
    func_0x00f78a20(0x3d589e0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d22878);
    func_0x00f78a20(0x3d26d78);
    bRam0000000003eb5780 = 1;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    uVar3 = func_0x00f78aec(/*System.Action<InputDevice, InputDeviceChange>_TypeInfo*/ uRam0000000003d1b630);
    /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar3,param_1,uRam0000000003d589d8,uRam0000000003d2a450);
    if (((*(ushort *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.InputSystem.InputSystem$$remove_onDeviceChange*/ func_0x03066548(uVar3,0);
    uVar2 = /*UnityEngine.InputSystem.InputSystem$$get_onEvent*/ func_0x03068030(0);
    uVar3 = func_0x00f78aec(/*System.Action<InputEventPtr, InputDevice>_TypeInfo*/ uRam0000000003d1b638);
    /*System.Action<InputEventPtr, object>$$.ctor*/ func_0x01e6bce0(uVar3,param_1,uRam0000000003d589e0,uRam0000000003d2a458);
    uVar2 = /*UnityEngine.InputSystem.LowLevel.InputEventListener$$op_Subtraction*/ func_0x0304e1cc(uVar2,uVar3,0);
    /*UnityEngine.InputSystem.InputSystem$$set_onEvent*/ func_0x03068038(uVar2,0);
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  lVar4 = func_0x00f78aec(/*Core.Input.ControllerRemappingsNative.OnControllerMappingsChanged_TypeInfo*/ uRam0000000003d26d78);
  puVar1 = puRam0000000003d589d0;
  *(undefined8 *)(lVar4 + 0x10) = *puRam0000000003d589d0;
  *(long *)(lVar4 + 0x20) = param_1;
  *(undefined8 **)(lVar4 + 0x28) = puVar1;
  if (((*(byte *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  Core_Input_ControllerRemappingsNative__remove_ControllerMappingsChanged(lVar4);
  Core_Input_ControllerRemappingsNative__DeInit();
  **(undefined8 **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) = 0;
  return;
}



// ============================================================
// RVA: 0x164a068 | Core.Input.InputManager.Update
// ============================================================

void Core_Input_InputManager__Update(long param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5781 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5781 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  uVar5 = /*UnityEngine.Time$$get_frameCount*/ func_0x03272d54(0);
  uVar7 = unaff_x21;
  if (lVar8 == 0) {
LAB_0164a1a8:
    func_0x00f78af4();
    uVar5 = uVar7;
LAB_0164a1ac:
    unaff_x21 = uVar5;
    unaff_x20 = lVar8;
    uVar7 = func_0x00f78b24();
    unaff_x30 = &Core_Input_InputManager__ReselectTopmostActiveLayer;
    lVar8 = func_0x00f78ac0(uVar7,0);
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  else {
    Core_Input_ActionPressManager__Update(lVar8,uVar5);
    if (*(char *)(param_1 + 0x54) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x54) = 0;
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (lVar6 == 0) goto LAB_0164a1a8;
    lVar8 = *(long *)(lVar6 + 0x38);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar8,0);
    if (iVar3 == 0) {
      return;
    }
    uVar5 = Core_Input_InputManager__GetScreenLayerFromGameObject(lVar8);
    if (lVar8 == 0) goto LAB_0164a1a8;
    iVar3 = /*UnityEngine.GameObject$$get_activeInHierarchy*/ func_0x0322efac(lVar8,0);
    lVar6 = *(long *)(param_1 + 0x38);
    uVar4 = (uint)uVar5;
    uVar7 = uVar5;
    if (iVar3 != 0) {
      if (lVar6 == 0) goto LAB_0164a1a8;
      if (uVar4 < *(uint *)(lVar6 + 0x18)) {
        *(long *)(lVar6 + (long)(int)uVar4 * 0x10 + 0x20) = lVar8;
        return;
      }
      goto LAB_0164a1ac;
    }
    if (lVar6 == 0) goto LAB_0164a1a8;
    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_0164a1ac;
    *(undefined8 *)(lVar6 + (long)(int)uVar4 * 0x10 + 0x20) = 0;
    lVar8 = param_1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb5797 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d232c0);
    bRam0000000003eb5797 = 1;
  }
  uVar2 = *(undefined4 *)(lVar8 + 0x40);
  uVar7 = /*Core.Input.InputManager$$FindTopmostExclusiveLayer*/ func_0x0164a6a0(lVar8);
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*System.Math$$Max*/ func_0x02b01f40(uVar2,uVar7,0);
  if (uVar4 == 0xffffffff) {
    return;
  }
  lVar6 = *(long *)(lVar8 + 0x38);
  if (lVar6 != 0) {
    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto code_r0x0164a30c;
    if (*(char *)(lVar6 + (long)(int)uVar4 * 0x10 + 0x28) != '\0') {
      return;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
      *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      lVar8 = *(long *)(lVar8 + 0x38);
      if (lVar8 != 0) {
        if (*(uint *)(lVar8 + 0x18) <= uVar4) goto code_r0x0164a30c;
        if (lVar6 != 0) {
          /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar6,*(undefined8 *)(lVar8 + (long)(int)uVar4 * 0x10 + 0x20),0);
          if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
            *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
            return;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x0164a30c:
  uVar7 = func_0x00f78b24();
  func_0x00f78ac0(uVar7,0);
  return;
}



// ============================================================
// RVA: 0x164a1b8 | Core.Input.InputManager.ReselectTopmostActiveLayer
// ============================================================

void Core_Input_InputManager__ReselectTopmostActiveLayer(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000003eb5797 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d232c0);
    bRam0000000003eb5797 = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar3 = /*Core.Input.InputManager$$FindTopmostExclusiveLayer*/ func_0x0164a6a0(param_1);
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*System.Math$$Max*/ func_0x02b01f40(uVar1,uVar3,0);
  if (uVar2 == 0xffffffff) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_0164a30c;
    if (*(char *)(lVar4 + (long)(int)uVar2 * 0x10 + 0x28) != '\0') {
      return;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
      *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar4 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_0164a30c;
        if (lVar4 != 0) {
          /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar4,*(undefined8 *)(lVar5 + (long)(int)uVar2 * 0x10 + 0x20),0);
          if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
            *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
            return;
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_0164a30c:
  uVar3 = func_0x00f78b24();
  func_0x00f78ac0(uVar3,0);
  return;
}



// ============================================================
// RVA: 0x164a318 | Core.Input.InputManager.InputManagerDebugLog
// ============================================================

void Core_Input_InputManager__InputManagerDebugLog(void)

{
  return;
}



// ============================================================
// RVA: 0x164a31c | Core.Input.InputManager.GetGlyphCurrentlyHandlingSubmit
// ============================================================

ulong Core_Input_InputManager__GetGlyphCurrentlyHandlingSubmit(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int extraout_w1;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *unaff_x21;
  undefined1 auVar9 [16];
  ulong uStack_c8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  int iStack_70;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  lVar5 = 0x3d22848;
  if ((bRam0000000003eb5785 & 1) == 0) {
    func_0x00f78a20(0x3d327a0);
    func_0x00f78a20(0x3d327a8);
    func_0x00f78a20(0x3d327b0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d3ac08);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5785 = 1;
  }
  uStack_64 = 0;
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (lVar3 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x60), lVar3 == 0)) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar6 = (long *)___cxa_begin_catch();
      lVar5 = *plVar6;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_60,*unaff_x21);
      if (lVar5 == 0) {
        return 0;
      }
    }
    else {
      __Unwind_Resume();
    }
    auVar9 = func_0x00f78ac0(lVar5,0);
    if ((bRam0000000003eb5799 & 1) == 0) {
      func_0x00f78a20(0x3d2e6d8);
      bRam0000000003eb5799 = 1;
    }
    uStack_c8 = 0;
    lVar5 = *(long *)(auVar9._0_8_ + 0x68);
    if (lVar5 == 0) {
      func_0x00f78af4();
      if ((bRam0000000003eb5790 & 1) == 0) {
        func_0x00f78a20(0x3d22848);
        bRam0000000003eb5790 = 1;
      }
      if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (ulong)(0 < *(int *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x50));
      }
      return uVar7;
    }
    iVar2 = /*System.Collections.Generic.Dictionary<RuntimePlatform, List<Platform>>$$TryGetValue*/ func_0x01ea8d2c(lVar5,auVar9._8_8_,&uStack_c8,uRam0000000003d2e6d8);
    if (iVar2 == 0) {
      uStack_c8 = 0;
    }
    return uStack_c8;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_88,lVar3,uRam0000000003d3ac08);
  uStack_58 = uStack_80;
  uStack_60 = uStack_88;
  uStack_50 = uStack_78;
  do {
    do {
      uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_60,uRam0000000003d327a8);
      uVar7 = uStack_50;
      if ((uVar4 & 1) == 0) {
        uVar7 = 0;
        iStack_70 = 0x78;
        goto LAB_0164a490;
      }
      if (uStack_50 == 0) {
        func_0x00f78af4();
code_r0x0164a4e0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x164a4e4);
        (*pcVar1)();
      }
    } while (((*(char *)(uStack_50 + 0x58) == '\0') && (*(char *)(uStack_50 + 0x68) == '\0')) ||
            (uVar4 = Core_Input_InputGlyphBehaviour__get_HasTarget(uStack_50), (uVar4 & 1) == 0));
    uVar8 = *(undefined8 *)(uVar7 + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
    if ((uVar4 & 1) != 0) break;
    if (*(long *)(uVar7 + 0x28) == 0) {
      func_0x00f78af4();
      goto code_r0x0164a4e0;
    }
    lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(uVar7 + 0x28),0);
    if (lVar5 == 0) {
      func_0x00f78af4();
      goto code_r0x0164a4e0;
    }
    uVar4 = /*UnityEngine.GameObject$$get_activeInHierarchy*/ func_0x0322efac(lVar5,0);
  } while (((uVar4 & 1) == 0) ||
          (uVar4 = Core_Input_InputManager__IsScreenLayerInputActive(*(undefined4 *)(uVar7 + 0x6c)),
          (uVar4 & 1) == 0));
  iStack_70 = 0x7a;
LAB_0164a490:
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_60,uRam0000000003d327a0);
  if (iStack_70 != 0x7a) {
    uVar7 = 0;
  }
  return uVar7;
}



// ============================================================
// RVA: 0x164a548 | Core.Input.InputManager.TryGetGlyphMappingsForFamily
// ============================================================

ulong Core_Input_InputManager__TryGetGlyphMappingsForFamily(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uStack_38;
  
  if ((bRam0000000003eb5799 & 1) == 0) {
    func_0x00f78a20(0x3d2e6d8);
    bRam0000000003eb5799 = 1;
  }
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    iVar1 = /*System.Collections.Generic.Dictionary<RuntimePlatform, List<Platform>>$$TryGetValue*/ func_0x01ea8d2c(*(long *)(param_1 + 0x68),param_2,&uStack_38,uRam0000000003d2e6d8);
    if (iVar1 == 0) {
      uStack_38 = 0;
    }
    return uStack_38;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb5790 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    bRam0000000003eb5790 = 1;
  }
  if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)(0 < *(int *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x50));
  }
  return uVar2;
}



// ============================================================
// RVA: 0x164a5cc | Core.Input.InputManager.IsAllInputSuspended
// ============================================================

bool Core_Input_InputManager__IsAllInputSuspended(void)

{
  bool bVar1;
  
  if ((bRam0000000003eb5790 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    bRam0000000003eb5790 = 1;
  }
  if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = 0 < *(int *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x50);
  }
  return bVar1;
}



// ============================================================
// RVA: 0x164a630 | Core.Input.InputManager.HasExclusiveLayers
// ============================================================

ulong Core_Input_InputManager__HasExclusiveLayers(long param_1)

{
  uint uVar1;
  long *plVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  char *pcVar18;
  code *pcVar19;
  long lVar20;
  long *plVar21;
  undefined1 auVar22 [16];
  long lStack_78;
  
  lVar15 = *(long *)(param_1 + 0x38);
  if (lVar15 != 0) {
    iVar6 = *(int *)(lVar15 + 0x18);
    if (iVar6 < 1) {
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      do {
        if (iVar6 == iVar7) {
          uVar8 = func_0x00f78b24();
          func_0x00f78ac0(uVar8,0);
          goto LAB_0164a69c;
        }
      } while ((*(char *)(lVar15 + (long)iVar7 * 0x10 + 0x29) == '\0') &&
              (iVar7 = iVar7 + 1, iVar6 != iVar7));
    }
    return (ulong)(iVar7 < iVar6);
  }
LAB_0164a69c:
  lVar15 = func_0x00f78af4();
  lVar15 = *(long *)(lVar15 + 0x38);
  if (lVar15 != 0) {
    uVar5 = (uint)*(ulong *)(lVar15 + 0x18);
    uVar1 = uVar5;
    if ((int)uVar5 < 1) {
      uVar1 = 0;
    }
    if ((int)uVar5 < 1) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar16 = 0;
      pcVar18 = (char *)(lVar15 + 0x29);
      uVar9 = 0xffffffff;
      do {
        if ((*(ulong *)(lVar15 + 0x18) & 0xffffffff) == uVar16) {
          uVar8 = func_0x00f78b24(uVar9);
          func_0x00f78ac0(uVar8,0);
          goto code_r0x0164a71c;
        }
        if (pcVar18[-1] == '\0') {
          uVar5 = (uint)uVar9;
          if (*pcVar18 != '\0') {
            uVar5 = (uint)uVar16;
          }
          uVar9 = (ulong)uVar5;
        }
        uVar16 = uVar16 + 1;
        pcVar18 = pcVar18 + 0x10;
      } while (uVar1 != uVar16);
    }
    return uVar9;
  }
code_r0x0164a71c:
  auVar22 = func_0x00f78af4();
  plVar11 = auVar22._8_8_;
  lVar15 = auVar22._0_8_;
  lStack_78 = lVar15;
  lVar12 = *(long *)(lVar15 + 0x68);
  if (lVar12 == 0) {
    plVar21 = &lStack_78;
    lVar20 = 1;
  }
  else {
    lVar20 = *(long *)(lVar12 + 0x18);
    if (lVar20 == 0) {
      return 0;
    }
    plVar21 = (long *)(lVar12 + 0x20);
  }
  lVar12 = 0;
  do {
    lVar13 = plVar21[lVar12];
    pcVar19 = *(code **)(lVar13 + 0x10);
    plVar2 = *(long **)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    if (*(short *)(lVar13 + 0x48) == -1) {
      func_0x00f78ad8(lVar13);
    }
    iVar6 = func_0x00f78a4c(lVar13);
    bVar4 = *(char *)(lVar13 + 0x4a) == '\x01';
    if (iVar6 == 0) {
      if (bVar4) {
        if (plVar2 == (long *)0x0) {
code_r0x0164a8ac:
          uVar9 = (*pcVar19)(plVar11,lVar13);
        }
        else {
          if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar2 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar15 + 0x18) == 0)) goto code_r0x0164a7a4;
          iVar6 = func_0x00f78a44(lVar13);
          iVar7 = func_0x00f78ec0(lVar13);
          if (iVar6 == 0) {
            uVar3 = *(ushort *)(lVar13 + 0x48);
            if (iVar7 == 0) {
              lVar13 = *plVar2 + (ulong)uVar3 * 0x10;
              uVar9 = (**(code **)(lVar13 + 0x138))(plVar2,plVar11,*(undefined8 *)(lVar13 + 0x140));
              goto code_r0x0164a8b8;
            }
            lVar13 = func_0x00f78a48(lVar13);
            lVar14 = *plVar2;
            uVar9 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar9 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar13) {
                  puVar10 = (undefined8 *)
                            (lVar14 + (long)(int)(*piVar17 + (uint)uVar3) * 0x10 + 0x138);
                  goto code_r0x0164aa44;
                }
                piVar17 = piVar17 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar2,lVar13,(ulong)uVar3);
code_r0x0164aa44:
            pcVar19 = (code *)*puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
          else {
            if (iVar7 == 0) {
              uVar8 = *(undefined8 *)(*plVar2 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar2;
              uVar9 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar9 != 0) {
                piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x0164aa1c;
                  }
                  piVar17 = piVar17 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar2);
code_r0x0164aa1c:
              uVar8 = *(undefined8 *)(lVar14 + 8);
            }
            puVar10 = (undefined8 *)func_0x00f78acc(uVar8,lVar13);
            pcVar19 = (code *)*puVar10;
          }
          uVar9 = (*pcVar19)(plVar2,plVar11,puVar10);
        }
      }
      else {
        if ((*(short *)(lVar13 + 0x48) == -1) || (*(long *)(lVar15 + 0x18) == 0))
        goto code_r0x0164a8ac;
        iVar6 = func_0x00f78a44(lVar13);
        iVar7 = func_0x00f78ec0(lVar13);
        if (iVar6 == 0) {
          uVar3 = *(ushort *)(lVar13 + 0x48);
          if (iVar7 == 0) {
            lVar13 = *plVar11 + (ulong)uVar3 * 0x10;
            uVar9 = (**(code **)(lVar13 + 0x138))(plVar11,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x0164a8b8;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar14 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar9 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar13) {
                puVar10 = (undefined8 *)
                          (lVar14 + (long)(int)(*piVar17 + (uint)uVar3) * 0x10 + 0x138);
                goto code_r0x0164a9e0;
              }
              piVar17 = piVar17 + 4;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar11,lVar13,(ulong)uVar3);
code_r0x0164a9e0:
          pcVar19 = (code *)*puVar10;
          puVar10 = (undefined8 *)puVar10[1];
        }
        else {
          if (iVar7 == 0) {
            uVar8 = *(undefined8 *)(*plVar11 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar9 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x0164a9b8;
                }
                piVar17 = piVar17 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar11);
code_r0x0164a9b8:
            uVar8 = *(undefined8 *)(lVar14 + 8);
          }
          puVar10 = (undefined8 *)func_0x00f78acc(uVar8,lVar13);
          pcVar19 = (code *)*puVar10;
        }
        uVar9 = (*pcVar19)(plVar11,puVar10);
      }
    }
    else {
      if (bVar4) goto code_r0x0164a8ac;
code_r0x0164a7a4:
      uVar9 = (*pcVar19)(plVar2,plVar11,lVar13);
    }
code_r0x0164a8b8:
    lVar12 = lVar12 + 1;
    if (lVar12 == lVar20) {
      return uVar9;
    }
  } while( true );
}



// ============================================================
// RVA: 0x164a6a0 | Core.Input.InputManager.FindTopmostExclusiveLayer
// ============================================================

ulong Core_Input_InputManager__FindTopmostExclusiveLayer(long param_1)

{
  uint uVar1;
  long *plVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  char *pcVar18;
  code *pcVar19;
  long lVar20;
  long *plVar21;
  undefined1 auVar22 [16];
  long lStack_68;
  
  lVar17 = *(long *)(param_1 + 0x38);
  if (lVar17 != 0) {
    uVar5 = (uint)*(ulong *)(lVar17 + 0x18);
    uVar1 = uVar5;
    if ((int)uVar5 < 1) {
      uVar1 = 0;
    }
    if ((int)uVar5 < 1) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar15 = 0;
      pcVar18 = (char *)(lVar17 + 0x29);
      uVar8 = 0xffffffff;
      do {
        if ((*(ulong *)(lVar17 + 0x18) & 0xffffffff) == uVar15) {
          uVar9 = func_0x00f78b24(uVar8);
          func_0x00f78ac0(uVar9,0);
          goto LAB_0164a71c;
        }
        if (pcVar18[-1] == '\0') {
          uVar5 = (uint)uVar8;
          if (*pcVar18 != '\0') {
            uVar5 = (uint)uVar15;
          }
          uVar8 = (ulong)uVar5;
        }
        uVar15 = uVar15 + 1;
        pcVar18 = pcVar18 + 0x10;
      } while (uVar1 != uVar15);
    }
    return uVar8;
  }
LAB_0164a71c:
  auVar22 = func_0x00f78af4();
  plVar11 = auVar22._8_8_;
  lVar17 = auVar22._0_8_;
  lStack_68 = lVar17;
  lVar12 = *(long *)(lVar17 + 0x68);
  if (lVar12 == 0) {
    plVar21 = &lStack_68;
    lVar20 = 1;
  }
  else {
    lVar20 = *(long *)(lVar12 + 0x18);
    if (lVar20 == 0) {
      return 0;
    }
    plVar21 = (long *)(lVar12 + 0x20);
  }
  lVar12 = 0;
  do {
    lVar13 = plVar21[lVar12];
    pcVar19 = *(code **)(lVar13 + 0x10);
    plVar2 = *(long **)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    if (*(short *)(lVar13 + 0x48) == -1) {
      func_0x00f78ad8(lVar13);
    }
    iVar6 = func_0x00f78a4c(lVar13);
    bVar4 = *(char *)(lVar13 + 0x4a) == '\x01';
    if (iVar6 == 0) {
      if (bVar4) {
        if (plVar2 == (long *)0x0) {
code_r0x0164a8ac:
          uVar8 = (*pcVar19)(plVar11,lVar13);
        }
        else {
          if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar2 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar17 + 0x18) == 0)) goto code_r0x0164a7a4;
          iVar6 = func_0x00f78a44(lVar13);
          iVar7 = func_0x00f78ec0(lVar13);
          if (iVar6 == 0) {
            uVar3 = *(ushort *)(lVar13 + 0x48);
            if (iVar7 == 0) {
              lVar13 = *plVar2 + (ulong)uVar3 * 0x10;
              uVar8 = (**(code **)(lVar13 + 0x138))(plVar2,plVar11,*(undefined8 *)(lVar13 + 0x140));
              goto code_r0x0164a8b8;
            }
            lVar13 = func_0x00f78a48(lVar13);
            lVar14 = *plVar2;
            uVar8 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar8 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar13) {
                  puVar10 = (undefined8 *)
                            (lVar14 + (long)(int)(*piVar16 + (uint)uVar3) * 0x10 + 0x138);
                  goto code_r0x0164aa44;
                }
                piVar16 = piVar16 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar2,lVar13,(ulong)uVar3);
code_r0x0164aa44:
            pcVar19 = (code *)*puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
          else {
            if (iVar7 == 0) {
              uVar9 = *(undefined8 *)(*plVar2 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar2;
              uVar8 = (ulong)*(ushort *)(lVar14 + 0x12a);
              if (uVar8 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x0164aa1c;
                  }
                  piVar16 = piVar16 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              lVar14 = func_0x00fac1f0(plVar2);
code_r0x0164aa1c:
              uVar9 = *(undefined8 *)(lVar14 + 8);
            }
            puVar10 = (undefined8 *)func_0x00f78acc(uVar9,lVar13);
            pcVar19 = (code *)*puVar10;
          }
          uVar8 = (*pcVar19)(plVar2,plVar11,puVar10);
        }
      }
      else {
        if ((*(short *)(lVar13 + 0x48) == -1) || (*(long *)(lVar17 + 0x18) == 0))
        goto code_r0x0164a8ac;
        iVar6 = func_0x00f78a44(lVar13);
        iVar7 = func_0x00f78ec0(lVar13);
        if (iVar6 == 0) {
          uVar3 = *(ushort *)(lVar13 + 0x48);
          if (iVar7 == 0) {
            lVar13 = *plVar11 + (ulong)uVar3 * 0x10;
            uVar8 = (**(code **)(lVar13 + 0x138))(plVar11,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x0164a8b8;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar14 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar8 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar13) {
                puVar10 = (undefined8 *)
                          (lVar14 + (long)(int)(*piVar16 + (uint)uVar3) * 0x10 + 0x138);
                goto code_r0x0164a9e0;
              }
              piVar16 = piVar16 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar11,lVar13,(ulong)uVar3);
code_r0x0164a9e0:
          pcVar19 = (code *)*puVar10;
          puVar10 = (undefined8 *)puVar10[1];
        }
        else {
          if (iVar7 == 0) {
            uVar9 = *(undefined8 *)(*plVar11 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar11;
            uVar8 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar8 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x0164a9b8;
                }
                piVar16 = piVar16 + 4;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar11);
code_r0x0164a9b8:
            uVar9 = *(undefined8 *)(lVar14 + 8);
          }
          puVar10 = (undefined8 *)func_0x00f78acc(uVar9,lVar13);
          pcVar19 = (code *)*puVar10;
        }
        uVar8 = (*pcVar19)(plVar11,puVar10);
      }
    }
    else {
      if (bVar4) goto code_r0x0164a8ac;
code_r0x0164a7a4:
      uVar8 = (*pcVar19)(plVar2,plVar11,lVar13);
    }
code_r0x0164a8b8:
    lVar12 = lVar12 + 1;
    if (lVar12 == lVar20) {
      return uVar8;
    }
  } while( true );
}



// ============================================================
// RVA: 0x164aa78 | Core.Input.InputManager.SetSelectedObject
// ============================================================

/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */

ulong Core_Input_InputManager__SetSelectedObject
                (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 ***pppuVar7;
  undefined *puVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  puVar1 = (undefined8 *)&stack0xffffffffffffffc0;
  pppuVar7 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb578a & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb578a = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (lVar6 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar6 == 0)) {
LAB_0164abe0:
    func_0x00f78af4();
  }
  else if ((uint)param_1 < *(uint *)(lVar6 + 0x18)) {
    *(undefined8 *)(lVar6 + (long)(int)(uint)param_1 * 0x10 + 0x20) = param_2;
    uVar3 = Core_Input_InputManager__IsScreenLayerInputActive(param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if ((int)param_3 == 0) {
LAB_0164ab78:
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar8 = (undefined *)0x164aba4;
      goto code_r0x032365f8;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
      *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      if (lVar6 != 0) {
        /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar6,param_2,0);
        if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
          *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
          goto LAB_0164ab78;
        }
      }
    }
    goto LAB_0164abe0;
  }
  uVar4 = func_0x00f78b24();
  uVar4 = func_0x00f78ac0(uVar4,0);
  uStack_70 = 0x3d22848;
  puStack_48 = &Core_Input_InputManager__GetSelectedObject;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_2;
  ppuStack_50 = pppuVar7;
  if ((bRam0000000003eb578b & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    bRam0000000003eb578b = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (lVar6 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar6 == 0)) {
    func_0x00f78af4();
  }
  else if ((uint)uVar4 < *(uint *)(lVar6 + 0x18)) {
    return *(ulong *)(lVar6 + (long)(int)(uint)uVar4 * 0x10 + 0x20);
  }
  uVar5 = func_0x00f78b24();
  func_0x00f78ac0(uVar5,0);
  puVar1 = &uStack_a0;
  uStack_a0 = 0x3d22848;
  uStack_98 = 0x3d22848;
  uStack_90 = 0x3eb5000;
  puStack_78 = &Core_Input_InputManager__IsAnythingSelected;
  pppuVar7 = &ppuStack_80;
  param_1 = 0x3d216c0;
  uStack_88 = uVar4;
  ppuStack_80 = &ppuStack_50;
  if ((bRam0000000003eb578c & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb578c = 1;
  }
  param_3 = 0x3d23990;
  if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  param_2 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar8 = &UNK_0164ad0c;
code_r0x032365f8:
  *(undefined8 *)((long)puVar1 + -0x30) = 0x3d22848;
  *(undefined8 *)((long)puVar1 + -0x28) = param_1;
  *(undefined8 *)((long)puVar1 + -0x20) = param_3;
  *(undefined8 *)((long)puVar1 + -0x18) = param_2;
  *(undefined8 ****)((long)puVar1 + -0x10) = pppuVar7;
  *(undefined **)((long)puVar1 + -8) = puVar8;
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(param_2,0);
  return (ulong)(uVar2 ^ 1);
}



// ============================================================
// RVA: 0x164abf0 | Core.Input.InputManager.GetSelectedObject
// ============================================================

/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */

ulong Core_Input_InputManager__GetSelectedObject(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000003eb578b & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    bRam0000000003eb578b = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (lVar3 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar3 == 0)) {
    func_0x00f78af4();
  }
  else if (param_1 < *(uint *)(lVar3 + 0x18)) {
    return *(ulong *)(lVar3 + (long)(int)param_1 * 0x10 + 0x20);
  }
  uVar2 = func_0x00f78b24();
  func_0x00f78ac0(uVar2,0);
  if ((bRam0000000003eb578c & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb578c = 1;
  }
  if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(uVar2,0);
  return (ulong)(uVar1 ^ 1);
}



// ============================================================
// RVA: 0x164ac78 | Core.Input.InputManager.IsAnythingSelected
// ============================================================

/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */

uint Core_Input_InputManager__IsAnythingSelected(void)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb578c & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb578c = 1;
  }
  if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(uVar2,0);
  return uVar1 ^ 1;
}



// ============================================================
// RVA: 0x164ad7c | Core.Input.InputManager.get_IsCurrentSelectionFromUser
// ============================================================

bool Core_Input_InputManager__get_IsCurrentSelectionFromUser(void)

{
  bool bVar1;
  
  if ((bRam0000000003eb578d & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    bRam0000000003eb578d = 1;
  }
  if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = *(char *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) == '\0';
  }
  return bVar1;
}



// ============================================================
// RVA: 0x164ade0 | Core.Input.InputManager.SuspendAllInput
// ============================================================

ulong Core_Input_InputManager__SuspendAllInput(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined2 uStack_72;
  
  if ((bRam0000000003eb578e & 1) == 0) {
    param_1 = func_0x00f78a20(0x3d22848);
    bRam0000000003eb578e = 1;
  }
  lVar3 = **(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + 1;
    return param_1;
  }
  uVar1 = func_0x00f78af4();
  if ((bRam0000000003eb578f & 1) == 0) {
    uVar1 = func_0x00f78a20(0x3d22848);
    bRam0000000003eb578f = 1;
  }
  lVar3 = **(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + -1;
    return uVar1;
  }
  auVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5791 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d3e5b8);
    func_0x00f78a20(0x3d3e5b0);
    bRam0000000003eb5791 = 1;
  }
  if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x20);
    uVar1 = 0;
    if (lVar3 != 0) {
      uVar2 = Core_Input_ActionPressManager__IsPressed(lVar3,auVar4._0_8_,auVar4._8_8_);
      uStack_72 = 0;
      /*System.Nullable<bool>$$.ctor*/ func_0x0261a454(&uStack_72,uVar2,uRam0000000003d3e5b0);
      uVar1 = (ulong)((char)uStack_72 != '\0');
    }
  }
  return uVar1;
}



// ============================================================
// RVA: 0x164ae40 | Core.Input.InputManager.ResumeAllInput
// ============================================================

ulong Core_Input_InputManager__ResumeAllInput(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined2 uStack_52;
  
  if ((bRam0000000003eb578f & 1) == 0) {
    param_1 = func_0x00f78a20(0x3d22848);
    bRam0000000003eb578f = 1;
  }
  lVar3 = **(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + -1;
    return param_1;
  }
  auVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5791 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d3e5b8);
    func_0x00f78a20(0x3d3e5b0);
    bRam0000000003eb5791 = 1;
  }
  if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x20);
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar1 = Core_Input_ActionPressManager__IsPressed(lVar3,auVar4._0_8_,auVar4._8_8_);
      uStack_52 = 0;
      /*System.Nullable<bool>$$.ctor*/ func_0x0261a454(&uStack_52,uVar1,uRam0000000003d3e5b0);
      uVar2 = (ulong)((char)uStack_52 != '\0');
    }
  }
  return uVar2;
}



// ============================================================
// RVA: 0x164aea0 | Core.Input.InputManager.IsActionPressed
// ============================================================

bool Core_Input_InputManager__IsActionPressed(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined2 uStack_32;
  
  if ((bRam0000000003eb5791 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d3e5b8);
    func_0x00f78a20(0x3d3e5b0);
    bRam0000000003eb5791 = 1;
  }
  if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x20);
    bVar1 = false;
    if (lVar2 != 0) {
      uVar3 = Core_Input_ActionPressManager__IsPressed(lVar2,param_1,param_2);
      uStack_32 = 0;
      /*System.Nullable<bool>$$.ctor*/ func_0x0261a454(&uStack_32,uVar3,uRam0000000003d3e5b0);
      bVar1 = (char)uStack_32 != '\0';
    }
  }
  return bVar1;
}



// ============================================================
// RVA: 0x164af64 | Core.Input.InputManager.GetFriendlyNameForInputFamily
// ============================================================

undefined8 Core_Input_InputManager__GetFriendlyNameForInputFamily(int param_1)

{
  undefined8 *puVar1;
  
  if ((bRam0000000003eb5794 & 1) == 0) {
    func_0x00f78a20(0x3d712a0);
    func_0x00f78a20(0x3d72a60);
    func_0x00f78a20(0x3d6ee20);
    func_0x00f78a20(0x3d70570);
    func_0x00f78a20(0x3d6d288);
    func_0x00f78a20(0x3d76708);
    func_0x00f78a20(0x3d6f048);
    bRam0000000003eb5794 = 1;
  }
  if (param_1 - 1U < 6) {
    puVar1 = *(undefined8 **)(&UNK_03a69548 + (long)(int)(param_1 - 1U) * 8);
  }
  else {
    puVar1 = (undefined8 *)0x3d70570;
  }
  return *puVar1;
}



// ============================================================
// RVA: 0x164b010 | Core.Input.InputManager.SetScreenLayerInputDisabled
// ============================================================

void Core_Input_InputManager__SetScreenLayerInputDisabled
               (long param_1,uint param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong extraout_x1;
  long lVar6;
  long lVar7;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **ppuVar8;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar9 [12];
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  ppuVar8 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar7 = *(long *)(param_1 + 0x38);
  if (lVar7 == 0) {
    func_0x00f78af4();
LAB_0164b040:
    uVar4 = func_0x00f78b24();
    auVar9 = func_0x00f78ac0(uVar4,0);
    param_1 = auVar9._0_8_;
    puStack_18 = &Core_Input_InputManager__SetScreenLayerInputExclusive;
    lVar7 = *(long *)(param_1 + 0x38);
    if (lVar7 == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      func_0x00f78af4();
    }
    else {
      puStack_20 = &stack0xfffffffffffffff0;
      if (auVar9._8_4_ < *(uint *)(lVar7 + 0x18)) {
        *(undefined1 *)(lVar7 + (long)(int)auVar9._8_4_ * 0x10 + 0x29) = param_3;
        puVar2 = &stack0xfffffffffffffff0;
        unaff_x30 = &Core_Input_InputManager__SetScreenLayerInputExclusive;
        puStack_20 = &stack0xfffffffffffffff0;
        goto Core_Input_InputManager__ReselectTopmostActiveLayer;
      }
    }
    uVar4 = func_0x00f78b24();
    func_0x00f78ac0(uVar4,0);
    puVar2 = &stack0xffffffffffffffb0;
    puStack_28 = &Core_Input_InputManager__SetMultiTouchEnabled;
    ppuVar8 = &puStack_30;
    unaff_x20 = 0x3eb5000;
    unaff_x21 = 0x3d216c0;
    puStack_30 = (undefined1 *)&puStack_20;
    if ((bRam0000000003eb5795 & 1) == 0) {
      puStack_30 = (undefined1 *)&puStack_20;
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d22880);
      bRam0000000003eb5795 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (lVar7 == 0) {
code_r0x0164b158:
      func_0x00f78af4();
    }
    else {
      plVar5 = *(long **)(lVar7 + 0x20);
      if (plVar5 == (long *)0x0) {
code_r0x0164b130:
        if (plVar5 != (long *)0x0) {
          *(uint *)((long)plVar5 + 0xbc) = (uint)((extraout_x1 & 1) == 0);
          return;
        }
        goto code_r0x0164b158;
      }
      if ((*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) <= *(byte *)(*plVar5 + 300)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) * 8 + -8
                   ) == /*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880)) goto code_r0x0164b130;
    }
    unaff_x30 = &Core_Input_InputManager__SetActiveLayer;
    auVar9 = func_0x00f78e5c();
    param_1 = auVar9._0_8_;
    *(int *)(param_1 + 0x40) = auVar9._8_4_;
    unaff_x19 = extraout_x1;
  }
  else {
    if (*(uint *)(lVar7 + 0x18) <= param_2) goto LAB_0164b040;
    *(undefined1 *)(lVar7 + (long)(int)param_2 * 0x10 + 0x28) = param_3;
    puVar2 = (undefined1 *)register0x00000008;
    ppuVar8 = unaff_x29;
  }
Core_Input_InputManager__ReselectTopmostActiveLayer:
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(ulong *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)(puVar2 + -0x10) = ppuVar8;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  if ((bRam0000000003eb5797 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d232c0);
    bRam0000000003eb5797 = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar4 = Core_Input_InputManager__FindTopmostExclusiveLayer(param_1);
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*System.Math$$Max*/ func_0x02b01f40(uVar1,uVar4,0);
  if (uVar3 == 0xffffffff) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x38);
  if (lVar7 != 0) {
    if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_0164a30c;
    if (*(char *)(lVar7 + (long)(int)uVar3 * 0x10 + 0x28) != '\0') {
      return;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
      *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      lVar6 = *(long *)(param_1 + 0x38);
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0164a30c;
        if (lVar7 != 0) {
          /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar7,*(undefined8 *)(lVar6 + (long)(int)uVar3 * 0x10 + 0x20),0);
          if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
            *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
            return;
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_0164a30c:
  uVar4 = func_0x00f78b24();
  func_0x00f78ac0(uVar4,0);
  return;
}



// ============================================================
// RVA: 0x164b04c | Core.Input.InputManager.SetScreenLayerInputExclusive
// ============================================================

void Core_Input_InputManager__SetScreenLayerInputExclusive
               (long param_1,uint param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong extraout_x1;
  long lVar6;
  long lVar7;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar8 [12];
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  lVar7 = *(long *)(param_1 + 0x38);
  if (lVar7 == 0) {
    func_0x00f78af4();
LAB_0164b07c:
    uVar4 = func_0x00f78b24();
    func_0x00f78ac0(uVar4,0);
    puVar2 = &stack0xffffffffffffffc0;
    puStack_18 = &Core_Input_InputManager__SetMultiTouchEnabled;
    unaff_x29 = &puStack_20;
    unaff_x20 = 0x3eb5000;
    unaff_x21 = 0x3d216c0;
    puStack_20 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb5795 & 1) == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      func_0x00f78a20(0x3d216c0);
      func_0x00f78a20(0x3d22880);
      bRam0000000003eb5795 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (lVar7 == 0) {
code_r0x0164b158:
      func_0x00f78af4();
    }
    else {
      plVar5 = *(long **)(lVar7 + 0x20);
      if (plVar5 == (long *)0x0) {
code_r0x0164b130:
        if (plVar5 != (long *)0x0) {
          *(uint *)((long)plVar5 + 0xbc) = (uint)((extraout_x1 & 1) == 0);
          return;
        }
        goto code_r0x0164b158;
      }
      if ((*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) <= *(byte *)(*plVar5 + 300)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) * 8 + -8
                   ) == /*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880)) goto code_r0x0164b130;
    }
    unaff_x30 = &Core_Input_InputManager__SetActiveLayer;
    auVar8 = func_0x00f78e5c();
    param_1 = auVar8._0_8_;
    *(int *)(param_1 + 0x40) = auVar8._8_4_;
    unaff_x19 = extraout_x1;
  }
  else {
    if (*(uint *)(lVar7 + 0x18) <= param_2) goto LAB_0164b07c;
    *(undefined1 *)(lVar7 + (long)(int)param_2 * 0x10 + 0x29) = param_3;
    puVar2 = (undefined1 *)register0x00000008;
  }
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(ulong *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)(puVar2 + -0x10) = unaff_x29;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  if ((bRam0000000003eb5797 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d232c0);
    bRam0000000003eb5797 = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar4 = Core_Input_InputManager__FindTopmostExclusiveLayer(param_1);
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*System.Math$$Max*/ func_0x02b01f40(uVar1,uVar4,0);
  if (uVar3 == 0xffffffff) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x38);
  if (lVar7 != 0) {
    if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_0164a30c;
    if (*(char *)(lVar7 + (long)(int)uVar3 * 0x10 + 0x28) != '\0') {
      return;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
      *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      lVar6 = *(long *)(param_1 + 0x38);
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_0164a30c;
        if (lVar7 != 0) {
          /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar7,*(undefined8 *)(lVar6 + (long)(int)uVar3 * 0x10 + 0x20),0);
          if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
            *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
            return;
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_0164a30c:
  uVar4 = func_0x00f78b24();
  func_0x00f78ac0(uVar4,0);
  return;
}



// ============================================================
// RVA: 0x164b088 | Core.Input.InputManager.SetMultiTouchEnabled
// ============================================================

void Core_Input_InputManager__SetMultiTouchEnabled(undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [12];
  
  if ((bRam0000000003eb5795 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22880);
    bRam0000000003eb5795 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar4 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
  if (lVar4 == 0) {
LAB_0164b158:
    func_0x00f78af4();
  }
  else {
    plVar5 = *(long **)(lVar4 + 0x20);
    if (plVar5 == (long *)0x0) {
LAB_0164b130:
      if (plVar5 != (long *)0x0) {
        *(uint *)((long)plVar5 + 0xbc) = (uint)((param_2 & 1) == 0);
        return;
      }
      goto LAB_0164b158;
    }
    if ((*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) * 8 + -8)
        == /*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880)) goto LAB_0164b130;
  }
  auVar7 = func_0x00f78e5c();
  lVar4 = auVar7._0_8_;
  *(int *)(lVar4 + 0x40) = auVar7._8_4_;
  if ((bRam0000000003eb5797 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d232c0);
    bRam0000000003eb5797 = 1;
  }
  uVar1 = *(undefined4 *)(lVar4 + 0x40);
  uVar3 = Core_Input_InputManager__FindTopmostExclusiveLayer(lVar4);
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*System.Math$$Max*/ func_0x02b01f40(uVar1,uVar3,0);
  if (uVar2 == 0xffffffff) {
    return;
  }
  lVar6 = *(long *)(lVar4 + 0x38);
  if (lVar6 != 0) {
    if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_0164a30c;
    if (*(char *)(lVar6 + (long)(int)uVar2 * 0x10 + 0x28) != '\0') {
      return;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
      *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      lVar4 = *(long *)(lVar4 + 0x38);
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_0164a30c;
        if (lVar6 != 0) {
          /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar6,*(undefined8 *)(lVar4 + (long)(int)uVar2 * 0x10 + 0x20),0);
          if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
            *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
            return;
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_0164a30c:
  uVar3 = func_0x00f78b24();
  func_0x00f78ac0(uVar3,0);
  return;
}



// ============================================================
// RVA: 0x164b160 | Core.Input.InputManager.SetActiveLayer
// ============================================================

void Core_Input_InputManager__SetActiveLayer(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  *(undefined4 *)(param_1 + 0x40) = param_2;
  if ((bRam0000000003eb5797 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d232c0);
    bRam0000000003eb5797 = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar3 = Core_Input_InputManager__FindTopmostExclusiveLayer(param_1);
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*System.Math$$Max*/ func_0x02b01f40(uVar1,uVar3,0);
  if (uVar2 == 0xffffffff) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_0164a30c;
    if (*(char *)(lVar4 + (long)(int)uVar2 * 0x10 + 0x28) != '\0') {
      return;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
      *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar4 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_0164a30c;
        if (lVar4 != 0) {
          /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar4,*(undefined8 *)(lVar5 + (long)(int)uVar2 * 0x10 + 0x20),0);
          if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
            *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
            return;
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_0164a30c:
  uVar3 = func_0x00f78b24();
  func_0x00f78ac0(uVar3,0);
  return;
}



// ============================================================
// RVA: 0x164b168 | Core.Input.InputManager.AddGlyphMappingsForFamily
// ============================================================

/* WARNING: Possible PIC construction at 0x0164b1c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164b1cc) */
/* WARNING: Removing unreachable block (ram,0x0164b1e0) */
/* WARNING: Removing unreachable block (ram,0x0164b1e8) */
/* WARNING: Removing unreachable block (ram,0x01ea71ac) */
/* WARNING: Removing unreachable block (ram,0x01ea71d4) */
/* WARNING: Removing unreachable block (ram,0x01ea71fc) */
/* WARNING: Removing unreachable block (ram,0x01ea7214) */
/* WARNING: Removing unreachable block (ram,0x01ea7238) */
/* WARNING: Removing unreachable block (ram,0x01ea7258) */
/* WARNING: Removing unreachable block (ram,0x01ea7264) */
/* WARNING: Removing unreachable block (ram,0x01ea72a4) */
/* WARNING: Removing unreachable block (ram,0x01ea72a8) */
/* WARNING: Removing unreachable block (ram,0x01ea72cc) */
/* WARNING: Removing unreachable block (ram,0x01ea7368) */
/* WARNING: Removing unreachable block (ram,0x01ea72f4) */
/* WARNING: Removing unreachable block (ram,0x01ea7314) */
/* WARNING: Removing unreachable block (ram,0x01ea7320) */
/* WARNING: Removing unreachable block (ram,0x01ea7380) */
/* WARNING: Removing unreachable block (ram,0x01ea7384) */
/* WARNING: Removing unreachable block (ram,0x01ea73a8) */
/* WARNING: Removing unreachable block (ram,0x01ea73b4) */
/* WARNING: Removing unreachable block (ram,0x01ea73c0) */
/* WARNING: Removing unreachable block (ram,0x01ea73d0) */
/* WARNING: Removing unreachable block (ram,0x01ea73d8) */
/* WARNING: Removing unreachable block (ram,0x01ea7420) */
/* WARNING: Removing unreachable block (ram,0x01ea742c) */
/* WARNING: Removing unreachable block (ram,0x01ea73dc) */
/* WARNING: Removing unreachable block (ram,0x01ea73ec) */
/* WARNING: Removing unreachable block (ram,0x01ea7414) */
/* WARNING: Removing unreachable block (ram,0x01ea7324) */
/* WARNING: Removing unreachable block (ram,0x01ea7344) */
/* WARNING: Removing unreachable block (ram,0x01ea736c) */
/* WARNING: Removing unreachable block (ram,0x01ea7268) */
/* WARNING: Removing unreachable block (ram,0x01ea7290) */
/* WARNING: Removing unreachable block (ram,0x01ea7288) */
/* WARNING: Removing unreachable block (ram,0x01ea7294) */
/* WARNING: Removing unreachable block (ram,0x01ea71e4) */
/* WARNING: Removing unreachable block (ram,0x01ea71b8) */
/* WARNING: Removing unreachable block (ram,0x0164b1d0) */
/* WARNING: Removing unreachable block (ram,0x01649d50) */
/* WARNING: Removing unreachable block (ram,0x01649d64) */
/* WARNING: Removing unreachable block (ram,0x01649d6c) */
/* WARNING: Removing unreachable block (ram,0x01649d94) */
/* WARNING: Removing unreachable block (ram,0x01649d78) */
/* WARNING: Removing unreachable block (ram,0x01649d84) */
/* WARNING: Removing unreachable block (ram,0x01649da0) */

ulong Core_Input_InputManager__AddGlyphMappingsForFamily
                (long param_1,undefined1 *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int extraout_w1;
  int iVar12;
  undefined8 *extraout_x8;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 *unaff_x23;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined1 ****ppppuStack_110;
  code *pcStack_108;
  undefined1 *puStack_100;
  ulong uStack_f8;
  undefined1 ***pppuStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  uVar8 = param_3;
  if ((bRam0000000003eb5796 & 1) == 0) {
    func_0x00f78a20(0x3d2e6c8);
    func_0x00f78a20(0x3d2e6d0);
    bRam0000000003eb5796 = 1;
  }
  iVar12 = (int)uVar8;
  puStack_40 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0x68) == 0) {
    uVar8 = func_0x00f78af4();
    puStack_60 = (undefined1 *)0x3eb5000;
    puStack_38 = &Core_Input_InputManager__GetLayerString;
    lStack_58 = param_1;
    puStack_50 = param_2;
    puStack_48 = (undefined *)param_3;
    if ((bRam0000000003eb5798 & 1) == 0) {
      func_0x00f78a20(0x3d22848);
      func_0x00f78a20(0x3d22910);
      func_0x00f78a20(0x3d670b8);
      func_0x00f78a20(0x3d6f6b0);
      func_0x00f78a20(0x3d78900);
      func_0x00f78a20(0x3d765a0);
      bRam0000000003eb5798 = 1;
    }
    uVar4 = (uint)uVar8;
    uStack_68 = CONCAT44(uVar4,(undefined4)uStack_68);
    uVar10 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_68 + 4);
    if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
       (lVar16 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar16 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar4 < *(uint *)(lVar16 + 0x18)) {
      lVar16 = lVar16 + (long)(int)uVar4 * 0x10;
      uVar8 = /*STR('-')*/ uRam0000000003d670b8;
      if (*(char *)(lVar16 + 0x28) != '\0') {
        uVar8 = /*STR('d')*/ uRam0000000003d78900;
      }
      uVar11 = /*STR('-')*/ uRam0000000003d670b8;
      if (*(char *)(lVar16 + 0x29) != '\0') {
        uVar11 = /*STR('X')*/ uRam0000000003d765a0;
      }
      uVar17 = /*System.String$$Format*/ func_0x029bdf30(/*STR('L{0} {1}{2}')*/ uRam0000000003d6f6b0,uVar10,uVar8,uVar11,0);
      return uVar17;
    }
    uVar10 = func_0x00f78b24();
    auVar19 = func_0x00f78ac0(uVar10,0);
    uVar7 = auVar19._0_8_;
    ppuStack_90 = (undefined1 **)0x3d22848;
    uVar17 = uVar7;
    if ((iVar12 - 1U < 2) &&
       (puStack_88 = (undefined *)uVar8, uVar17 = /*Core.Input.InputManagerExtensions$$GetInputFamily*/ func_0x0164b3a4(auVar19._8_8_),
       (int)uVar17 == *(int *)(uVar7 + 0x18))) {
      uVar17 = Core_Input_InputManager__GetMostAppropriateInputFamily();
      if ((int)uVar17 != *(int *)(uVar7 + 0x18)) {
        *(int *)(uVar7 + 0x18) = (int)uVar17;
        if ((bRam0000000003eb579c & 1) == 0) {
          func_0x00f78a20(0x3d32668);
          func_0x00f78a20(0x3d32670);
          func_0x00f78a20(0x3d32678);
          func_0x00f78a20(0x3d22230);
          func_0x00f78a20(0x3d3a938);
          bRam0000000003eb579c = 1;
        }
        uStack_d8 = 0;
        if (*(long *)(uVar7 + 0x58) != 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_d8,*(long *)(uVar7 + 0x58),uRam0000000003d3a938);
          uVar17 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_d8,uRam0000000003d32670);
          if ((uVar17 & 1) != 0) {
            Core_Input_InputManager__TryGetGlyphMappingsForFamily
                      (uVar7,*(undefined4 *)(uVar7 + 0x18));
            func_0x00f78af4();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1649de8);
            (*pcVar2)();
          }
          uVar17 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_d8,uRam0000000003d32668);
          return uVar17;
        }
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          puVar5 = (ulong *)___cxa_begin_catch();
          uVar7 = *puVar5;
          ___cxa_end_catch();
          uVar17 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_d8,*unaff_x23);
          if (uVar7 == 0) {
            return uVar17;
          }
          func_0x00f78ac0(uVar7,0);
        }
        lVar16 = __Unwind_Resume();
        puStack_100 = (undefined1 *)0x3eb5000;
        pcStack_e8 = Core_Input_InputManager__DeInit;
        uStack_f8 = uVar7;
        pppuStack_f0 = (undefined1 ***)&stack0xffffffffffffff80;
        uVar17 = Core_Input_InputManager__DeInitStatics();
        if (*(long *)(lVar16 + 0x20) != 0) {
          *(undefined8 *)(lVar16 + 0x20) = 0;
          return uVar17;
        }
        lVar15 = func_0x00f78af4();
        uStack_130 = 0x3eb5000;
        uStack_128 = 0x3d22910;
        uStack_120 = 0x3eb5000;
        pcStack_108 = Core_Input_InputManager__DeInitStatics;
        lStack_118 = lVar16;
        ppppuStack_110 = &pppuStack_f0;
        if ((bRam0000000003eb5780 & 1) == 0) {
          func_0x00f78a20(0x3d2a458);
          func_0x00f78a20(0x3d2a450);
          func_0x00f78a20(0x3d1b638);
          func_0x00f78a20(0x3d1b630);
          func_0x00f78a20(0x3d20a50);
          func_0x00f78a20(0x3d589d0);
          func_0x00f78a20(0x3d589d8);
          func_0x00f78a20(0x3d589e0);
          func_0x00f78a20(0x3d22848);
          func_0x00f78a20(0x3d22878);
          func_0x00f78a20(0x3d26d78);
          bRam0000000003eb5780 = 1;
        }
        if (*(char *)(lVar15 + 0x28) != '\0') {
          uVar8 = func_0x00f78aec(/*System.Action<InputDevice, InputDeviceChange>_TypeInfo*/ uRam0000000003d1b630);
          /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar8,lVar15,uRam0000000003d589d8,uRam0000000003d2a450);
          if (((*(ushort *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          /*UnityEngine.InputSystem.InputSystem$$remove_onDeviceChange*/ func_0x03066548(uVar8,0);
          uVar3 = /*UnityEngine.InputSystem.InputSystem$$get_onEvent*/ func_0x03068030(0);
          uVar8 = func_0x00f78aec(/*System.Action<InputEventPtr, InputDevice>_TypeInfo*/ uRam0000000003d1b638);
          /*System.Action<InputEventPtr, object>$$.ctor*/ func_0x01e6bce0(uVar8,lVar15,uRam0000000003d589e0,uRam0000000003d2a458);
          uVar3 = /*UnityEngine.InputSystem.LowLevel.InputEventListener$$op_Subtraction*/ func_0x0304e1cc(uVar3,uVar8,0);
          /*UnityEngine.InputSystem.InputSystem$$set_onEvent*/ func_0x03068038(uVar3,0);
          *(undefined1 *)(lVar15 + 0x28) = 0;
        }
        lVar16 = func_0x00f78aec(/*Core.Input.ControllerRemappingsNative.OnControllerMappingsChanged_TypeInfo*/ uRam0000000003d26d78);
        puVar18 = puRam0000000003d589d0;
        *(undefined8 *)(lVar16 + 0x10) = *puRam0000000003d589d0;
        *(long *)(lVar16 + 0x20) = lVar15;
        *(undefined8 **)(lVar16 + 0x28) = puVar18;
        if (((*(byte *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        Core_Input_ControllerRemappingsNative__remove_ControllerMappingsChanged(lVar16);
        uVar17 = Core_Input_ControllerRemappingsNative__DeInit();
        **(undefined8 **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) = 0;
        return uVar17;
      }
    }
    return uVar17;
  }
  puStack_38 = (undefined *)0x164b1cc;
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar4 = (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(puRam0000000003d2e6d0 + 0x18) + 0xc0) + 0x40))();
    return (ulong)(~uVar4 >> 0x1f);
  }
  puVar14 = puRam0000000003d2e6d0;
  auVar19 = func_0x00f78af4(0,param_2);
  puVar9 = auVar19._8_8_;
  lVar16 = auVar19._0_8_;
  puStack_48 = &System_Collections_Generic_Dictionary_Int32Enum__object___ContainsValue;
  uStack_68 = param_1;
  puStack_60 = param_2;
  lStack_58 = param_3;
  if (puVar9 != (undefined1 *)0x0) {
    puStack_50 = (undefined1 *)&puStack_40;
    plVar6 = (long *)(*(code *)**(undefined8 **)(*(long *)(*(long *)(puVar14 + 0x18) + 0xc0) + 0x68)
                     )();
    iVar12 = *(int *)(lVar16 + 0x20);
    if (0 < iVar12) {
      lVar15 = 0;
      uVar17 = 0;
      do {
        lVar13 = *(long *)(lVar16 + 0x18);
        param_2 = puVar9;
        if (lVar13 == 0) goto code_r0x01ea756c;
        if (*(uint *)(lVar13 + 0x18) <= uVar17) goto code_r0x01ea7570;
        if (-1 < *(int *)(lVar13 + lVar15 + 0x20)) {
          if (plVar6 == (long *)0x0) goto code_r0x01ea756c;
          param_4 = *(long *)(*plVar6 + 0x1c0);
          puVar14 = puVar9;
          uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(lVar13 + lVar15 + 0x30));
          if ((uVar7 & 1) != 0) {
            return 1;
          }
          iVar12 = *(int *)(lVar16 + 0x20);
        }
        uVar17 = uVar17 + 1;
        lVar15 = lVar15 + 0x18;
      } while ((long)uVar17 < (long)iVar12);
    }
    return 0;
  }
  uVar17 = (ulong)*(uint *)(lVar16 + 0x20);
  if ((int)*(uint *)(lVar16 + 0x20) < 1) {
    return 0;
  }
  lVar16 = *(long *)(lVar16 + 0x18);
  puStack_50 = (undefined1 *)&puStack_40;
  if (lVar16 == 0) {
code_r0x01ea756c:
    func_0x00f78af4();
  }
  else {
    uVar7 = (ulong)*(uint *)(lVar16 + 0x18);
    plVar6 = (long *)(lVar16 + 0x30);
    while (puStack_50 = (undefined1 *)&puStack_40, uVar7 != 0) {
      if ((-1 < (int)plVar6[-2]) && (*plVar6 == 0)) {
        return 1;
      }
      uVar7 = uVar7 - 1;
      plVar6 = plVar6 + 3;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) {
        return 0;
      }
    }
  }
code_r0x01ea7570:
  uVar8 = func_0x00f78b24();
  auVar19 = func_0x00f78ac0(uVar8,0);
  puVar9 = auVar19._8_8_;
  lVar16 = auVar19._0_8_;
  puStack_88 = &System_Collections_Generic_Dictionary_Int32Enum__object___CopyTo;
  ppuStack_90 = &puStack_50;
  if (puVar9 != (undefined1 *)0x0) {
    uVar4 = (uint)puVar14;
    if (((int)uVar4 < 0) || (*(int *)(puVar9 + 0x18) < (int)uVar4)) {
code_r0x01ea768c:
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar4);
      uVar8 = func_0x00f78a24(0x3d22910);
      uVar8 = func_0x00f78ae0(uVar8,&uStack_e0);
      func_0x00f78a24(0x3d1fcf8);
      puVar9 = (undefined1 *)func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d79a60);
      uVar11 = func_0x00f78a24(0x3d6de28);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(puVar9,uVar10,uVar8,uVar11,0);
      uVar8 = func_0x00f78a24(0x3d2ef28);
      func_0x00f78ac0(puVar9,uVar8);
    }
    else if (lVar16 != 0) {
      uVar17 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x90))
                         (lVar16);
      if ((int)(*(int *)(puVar9 + 0x18) - uVar4) < (int)uVar17) {
        func_0x00f78a24(0x3d1fce8);
        uVar8 = func_0x00f78aec();
        uVar10 = func_0x00f78a24(0x3d6bc10);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar10,0);
        goto code_r0x01ea7770;
      }
      uVar1 = *(uint *)(lVar16 + 0x20);
      if ((int)uVar1 < 1) {
        return uVar17;
      }
      lVar16 = *(long *)(lVar16 + 0x18);
      if (lVar16 != 0) {
        uVar7 = 0;
        puVar18 = (undefined8 *)(lVar16 + 0x30);
        while (uVar4 = (uint)puVar14, uVar7 < *(uint *)(lVar16 + 0x18)) {
          if (-1 < *(int *)(puVar18 + -2)) {
            uStack_e0 = 0;
            uStack_d8 = 0;
            uVar17 = /*System.Collections.Generic.KeyValuePair<Int32Enum, object>$$.ctor*/ func_0x0231773c(&uStack_e0,*(undefined4 *)(puVar18 + -1),*puVar18,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0xa0));
            if (*(uint *)(puVar9 + 0x18) <= uVar4) break;
            puVar14 = (undefined1 *)(ulong)(uVar4 + 1);
            *(undefined8 *)(puVar9 + (long)(int)uVar4 * 0x10 + 0x28) = uStack_d8;
            *(undefined8 *)(puVar9 + (long)(int)uVar4 * 0x10 + 0x20) = uStack_e0;
          }
          uVar7 = uVar7 + 1;
          puVar18 = puVar18 + 3;
          if (uVar1 == uVar7) {
            return uVar17;
          }
        }
        uVar8 = func_0x00f78b24();
        func_0x00f78ac0(uVar8,0);
        goto code_r0x01ea768c;
      }
    }
    func_0x00f78af4();
    param_2 = puVar9;
  }
  func_0x00f78a24(0x3d1fcf0);
  uVar8 = func_0x00f78aec();
  uVar10 = func_0x00f78a24(0x3d77d18);
  /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar8,uVar10,0);
  puVar9 = param_2;
code_r0x01ea7770:
  uVar10 = func_0x00f78a24(0x3d2ef28);
  auVar19 = func_0x00f78ac0(uVar8,uVar10);
  pcStack_e8 = (code *)&System_Collections_Generic_Dictionary_Int32Enum__object___GetEnumerator;
  ppppuStack_110 = (undefined1 ****)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  puStack_100 = puVar9;
  uStack_f8 = uVar8;
  pppuStack_f0 = &ppuStack_90;
  uVar17 = /*System.Collections.Generic.Dictionary.Enumerator<Int32Enum, object>$$.ctor*/ func_0x01fc9840(&uStack_130,auVar19._0_8_,2,
                           *(undefined8 *)(*(long *)(*(long *)(auVar19._8_8_ + 0x18) + 0xc0) + 0xb0)
                          );
  extraout_x8[1] = uStack_128;
  *extraout_x8 = uStack_130;
  extraout_x8[3] = lStack_118;
  extraout_x8[2] = uStack_120;
  extraout_x8[4] = ppppuStack_110;
  return uVar17;
}



// ============================================================
// RVA: 0x164b210 | Core.Input.InputManager.GetLayerString
// ============================================================

void Core_Input_InputManager__GetLayerString(uint param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  int extraout_w1;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined8 *unaff_x23;
  undefined1 auVar14 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  uint uStack_34;
  
  if ((bRam0000000003eb5798 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d670b8);
    func_0x00f78a20(0x3d6f6b0);
    func_0x00f78a20(0x3d78900);
    func_0x00f78a20(0x3d765a0);
    bRam0000000003eb5798 = 1;
  }
  uStack_34 = param_1;
  uVar10 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_34);
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (lVar12 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar12 == 0)) {
    func_0x00f78af4();
  }
  else if (param_1 < *(uint *)(lVar12 + 0x18)) {
    lVar12 = lVar12 + (long)(int)param_1 * 0x10;
    uVar1 = /*STR('-')*/ uRam0000000003d670b8;
    if (*(char *)(lVar12 + 0x28) != '\0') {
      uVar1 = /*STR('d')*/ uRam0000000003d78900;
    }
    uVar2 = /*STR('-')*/ uRam0000000003d670b8;
    if (*(char *)(lVar12 + 0x29) != '\0') {
      uVar2 = /*STR('X')*/ uRam0000000003d765a0;
    }
    /*System.String$$Format*/ func_0x029bdf30(/*STR('L{0} {1}{2}')*/ uRam0000000003d6f6b0,uVar10,uVar1,uVar2,0);
    return;
  }
  uVar10 = func_0x00f78b24();
  auVar14 = func_0x00f78ac0(uVar10,0);
  lVar12 = auVar14._0_8_;
  if (((1 < param_3 - 1U) ||
      (iVar6 = /*Core.Input.InputManagerExtensions$$GetInputFamily*/ func_0x0164b3a4(auVar14._8_8_), iVar6 != *(int *)(lVar12 + 0x18))) ||
     (iVar6 = Core_Input_InputManager__GetMostAppropriateInputFamily(),
     iVar6 == *(int *)(lVar12 + 0x18))) {
    return;
  }
  *(int *)(lVar12 + 0x18) = iVar6;
  if ((bRam0000000003eb579c & 1) == 0) {
    func_0x00f78a20(0x3d32668);
    func_0x00f78a20(0x3d32670);
    func_0x00f78a20(0x3d32678);
    func_0x00f78a20(0x3d22230);
    func_0x00f78a20(0x3d3a938);
    bRam0000000003eb579c = 1;
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  plStack_98 = (long *)0x0;
  if (*(long *)(lVar12 + 0x58) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar9 = (long *)___cxa_begin_catch();
      lVar12 = *plVar9;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a8,*unaff_x23);
      if (lVar12 == 0) {
        return;
      }
      func_0x00f78ac0(lVar12,0);
    }
    lVar12 = __Unwind_Resume();
    Core_Input_InputManager__DeInitStatics();
    if (*(long *)(lVar12 + 0x20) == 0) {
      lVar12 = func_0x00f78af4();
      if ((bRam0000000003eb5780 & 1) == 0) {
        func_0x00f78a20(0x3d2a458);
        func_0x00f78a20(0x3d2a450);
        func_0x00f78a20(0x3d1b638);
        func_0x00f78a20(0x3d1b630);
        func_0x00f78a20(0x3d20a50);
        func_0x00f78a20(0x3d589d0);
        func_0x00f78a20(0x3d589d8);
        func_0x00f78a20(0x3d589e0);
        func_0x00f78a20(0x3d22848);
        func_0x00f78a20(0x3d22878);
        func_0x00f78a20(0x3d26d78);
        bRam0000000003eb5780 = 1;
      }
      if (*(char *)(lVar12 + 0x28) != '\0') {
        uVar10 = func_0x00f78aec(/*System.Action<InputDevice, InputDeviceChange>_TypeInfo*/ uRam0000000003d1b630);
        /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar10,lVar12,uRam0000000003d589d8,uRam0000000003d2a450);
        if (((*(ushort *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.InputSystem.InputSystem$$remove_onDeviceChange*/ func_0x03066548(uVar10,0);
        uVar5 = /*UnityEngine.InputSystem.InputSystem$$get_onEvent*/ func_0x03068030(0);
        uVar10 = func_0x00f78aec(/*System.Action<InputEventPtr, InputDevice>_TypeInfo*/ uRam0000000003d1b638);
        /*System.Action<InputEventPtr, object>$$.ctor*/ func_0x01e6bce0(uVar10,lVar12,uRam0000000003d589e0,uRam0000000003d2a458);
        uVar5 = /*UnityEngine.InputSystem.LowLevel.InputEventListener$$op_Subtraction*/ func_0x0304e1cc(uVar5,uVar10,0);
        /*UnityEngine.InputSystem.InputSystem$$set_onEvent*/ func_0x03068038(uVar5,0);
        *(undefined1 *)(lVar12 + 0x28) = 0;
      }
      lVar11 = func_0x00f78aec(/*Core.Input.ControllerRemappingsNative.OnControllerMappingsChanged_TypeInfo*/ uRam0000000003d26d78);
      puVar8 = puRam0000000003d589d0;
      *(undefined8 *)(lVar11 + 0x10) = *puRam0000000003d589d0;
      *(long *)(lVar11 + 0x20) = lVar12;
      *(undefined8 **)(lVar11 + 0x28) = puVar8;
      if (((*(byte *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Core_Input_ControllerRemappingsNative__remove_ControllerMappingsChanged(lVar11);
      Core_Input_ControllerRemappingsNative__DeInit();
      **(undefined8 **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) = 0;
      return;
    }
    *(undefined8 *)(lVar12 + 0x20) = 0;
    return;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_a8,*(long *)(lVar12 + 0x58),uRam0000000003d3a938);
  do {
    uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_a8,uRam0000000003d32670);
    plVar9 = plStack_98;
    if ((uVar7 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_a8,uRam0000000003d32668);
      return;
    }
    uVar3 = *(undefined4 *)(lVar12 + 0x18);
    uVar10 = Core_Input_InputManager__TryGetGlyphMappingsForFamily(lVar12,uVar3);
    if (plVar9 == (long *)0x0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1649de8);
      (*pcVar4)();
    }
    lVar11 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == /*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_01649da0;
        }
        piVar13 = piVar13 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,/*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230,0);
LAB_01649da0:
    (*(code *)*puVar8)(plVar9,uVar3,uVar10,puVar8[1]);
  } while( true );
}



// ============================================================
// RVA: 0x164b344 | Core.Input.InputManager.OnDeviceChange
// ============================================================

void Core_Input_InputManager__OnDeviceChange(long param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int extraout_w1;
  long lVar10;
  int *piVar11;
  undefined8 *unaff_x23;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  if (((1 < param_3 - 1U) || (iVar4 = /*Core.Input.InputManagerExtensions$$GetInputFamily*/ func_0x0164b3a4(param_2), iVar4 != *(int *)(param_1 + 0x18)))
     || (iVar4 = Core_Input_InputManager__GetMostAppropriateInputFamily(),
        iVar4 == *(int *)(param_1 + 0x18))) {
    return;
  }
  *(int *)(param_1 + 0x18) = iVar4;
  if ((bRam0000000003eb579c & 1) == 0) {
    func_0x00f78a20(0x3d32668);
    func_0x00f78a20(0x3d32670);
    func_0x00f78a20(0x3d32678);
    func_0x00f78a20(0x3d22230);
    func_0x00f78a20(0x3d3a938);
    bRam0000000003eb579c = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  plStack_58 = (long *)0x0;
  if (*(long *)(param_1 + 0x58) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar8 = (long *)___cxa_begin_catch();
      lVar10 = *plVar8;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,*unaff_x23);
      if (lVar10 == 0) {
        return;
      }
      func_0x00f78ac0(lVar10,0);
    }
    lVar10 = __Unwind_Resume();
    Core_Input_InputManager__DeInitStatics();
    if (*(long *)(lVar10 + 0x20) == 0) {
      lVar10 = func_0x00f78af4();
      if ((bRam0000000003eb5780 & 1) == 0) {
        func_0x00f78a20(0x3d2a458);
        func_0x00f78a20(0x3d2a450);
        func_0x00f78a20(0x3d1b638);
        func_0x00f78a20(0x3d1b630);
        func_0x00f78a20(0x3d20a50);
        func_0x00f78a20(0x3d589d0);
        func_0x00f78a20(0x3d589d8);
        func_0x00f78a20(0x3d589e0);
        func_0x00f78a20(0x3d22848);
        func_0x00f78a20(0x3d22878);
        func_0x00f78a20(0x3d26d78);
        bRam0000000003eb5780 = 1;
      }
      if (*(char *)(lVar10 + 0x28) != '\0') {
        uVar6 = func_0x00f78aec(/*System.Action<InputDevice, InputDeviceChange>_TypeInfo*/ uRam0000000003d1b630);
        /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar6,lVar10,uRam0000000003d589d8,uRam0000000003d2a450);
        if (((*(ushort *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.InputSystem.InputSystem$$remove_onDeviceChange*/ func_0x03066548(uVar6,0);
        uVar3 = /*UnityEngine.InputSystem.InputSystem$$get_onEvent*/ func_0x03068030(0);
        uVar6 = func_0x00f78aec(/*System.Action<InputEventPtr, InputDevice>_TypeInfo*/ uRam0000000003d1b638);
        /*System.Action<InputEventPtr, object>$$.ctor*/ func_0x01e6bce0(uVar6,lVar10,uRam0000000003d589e0,uRam0000000003d2a458);
        uVar3 = /*UnityEngine.InputSystem.LowLevel.InputEventListener$$op_Subtraction*/ func_0x0304e1cc(uVar3,uVar6,0);
        /*UnityEngine.InputSystem.InputSystem$$set_onEvent*/ func_0x03068038(uVar3,0);
        *(undefined1 *)(lVar10 + 0x28) = 0;
      }
      lVar9 = func_0x00f78aec(/*Core.Input.ControllerRemappingsNative.OnControllerMappingsChanged_TypeInfo*/ uRam0000000003d26d78);
      puVar7 = puRam0000000003d589d0;
      *(undefined8 *)(lVar9 + 0x10) = *puRam0000000003d589d0;
      *(long *)(lVar9 + 0x20) = lVar10;
      *(undefined8 **)(lVar9 + 0x28) = puVar7;
      if (((*(byte *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Core_Input_ControllerRemappingsNative__remove_ControllerMappingsChanged(lVar9);
      Core_Input_ControllerRemappingsNative__DeInit();
      **(undefined8 **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) = 0;
      return;
    }
    *(undefined8 *)(lVar10 + 0x20) = 0;
    return;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,*(long *)(param_1 + 0x58),uRam0000000003d3a938);
  do {
    uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_68,uRam0000000003d32670);
    plVar8 = plStack_58;
    if ((uVar5 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d32668);
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar6 = Core_Input_InputManager__TryGetGlyphMappingsForFamily(param_1,uVar1);
    if (plVar8 == (long *)0x0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1649de8);
      (*pcVar2)();
    }
    lVar10 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01649da0;
        }
        piVar11 = piVar11 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar8,/*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230,0);
LAB_01649da0:
    (*(code *)*puVar7)(plVar8,uVar1,uVar6,puVar7[1]);
  } while( true );
}



// ============================================================
// RVA: 0x164b4f8 | Core.Input.InputManager.OnInputEvent
// ============================================================

void Core_Input_InputManager__OnInputEvent(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  int iStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar3 = param_1;
  uStack_50 = param_3;
  uStack_48 = param_2;
  if ((bRam0000000003eb579a & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d588e8);
    func_0x00f78a20(0x3d588f0);
    lVar3 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb579a = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uVar4 = /*Core.Input.InputManager$$IsDeviceIgnored*/ func_0x0164b710(lVar3,&uStack_50);
  if (((uVar4 & 1) == 0) &&
     ((uVar4 = /*UnityEngine.InputSystem.LowLevel.InputEventPtr$$IsA<StateEvent>*/ func_0x0186c160(&uStack_48,uRam0000000003d588f0), (uVar4 & 1) != 0 ||
      (iVar2 = /*UnityEngine.InputSystem.LowLevel.InputEventPtr$$IsA<DeltaStateEvent>*/ func_0x0186c0d4(&uStack_48,uRam0000000003d588e8), iVar2 != 0)))) {
    *(undefined1 *)(param_1 + 0x55) = 0;
    /*UnityEngine.InputSystem.InputControlExtensions$$EnumerateChangedControls*/ func_0x0303fb84(&uStack_108,0x3f000000,uStack_48,param_3,0);
    uStack_68 = uStack_100;
    uStack_70 = uStack_108;
    uStack_60 = uStack_f8;
    /*UnityEngine.InputSystem.InputControlExtensions.InputEventControlCollection$$GetEnumerator*/ func_0x030b2dfc(&uStack_e0,&uStack_70,0);
    do {
      uVar4 = /*UnityEngine.InputSystem.InputControlExtensions.InputEventControlEnumerator$$MoveNext*/ func_0x030b2e24(&uStack_e0,0);
      if ((uVar4 & 1) == 0) goto LAB_0164b628;
      if (lStack_98 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x164b6d0);
        (*pcVar1)();
      }
      iVar2 = /*Core.Input.InputManagerExtensions$$GetInputFamily*/ func_0x0164b3a4(*(undefined8 *)(lStack_98 + 0x78));
    } while (iVar2 == *(int *)(param_1 + 0x18));
    *(int *)(param_1 + 0x18) = iVar2;
    Core_Input_InputManager__FireOnInputDeviceChanged(param_1);
LAB_0164b628:
    iStack_f0 = 0x7f;
    /*UnityEngine.InputSystem.InputControlExtensions.InputEventControlEnumerator$$Dispose*/ func_0x030b3190(&uStack_e0,0);
    if (iStack_f0 == 0x7f) {
      uStack_e8 = 0;
    }
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar5,0);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x54) = 1;
    }
  }
  return;
}



// ============================================================
// RVA: 0x164b710 | Core.Input.InputManager.IsDeviceIgnored
// ============================================================

ulong Core_Input_InputManager__IsDeviceIgnored(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  int extraout_w1;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 *unaff_x23;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  
  if ((bRam0000000003eb579e & 1) == 0) {
    func_0x00f78a20(0x3d235a0);
    bRam0000000003eb579e = 1;
  }
  if (*param_2 != 0) {
    iVar4 = /*UnityEngine.InputSystem.InputDevice$$get_native*/ func_0x03046958(*param_2,0);
    if (iVar4 == 0) {
      uVar8 = 1;
    }
    else {
      if ((long *)*param_2 != (long *)0x0) {
        lVar10 = *(long *)*param_2;
        if (*(byte *)(/*UnityEngine.InputSystem.Mouse_TypeInfo*/ lRam0000000003d235a0 + 300) <= *(byte *)(lVar10 + 300)) {
          return (ulong)(*(long *)(*(long *)(lVar10 + 200) +
                                   (ulong)*(byte *)(/*UnityEngine.InputSystem.Mouse_TypeInfo*/ lRam0000000003d235a0 + 300) * 8 + -8) ==
                        /*UnityEngine.InputSystem.Mouse_TypeInfo*/ lRam0000000003d235a0);
        }
      }
      uVar8 = 0;
    }
    return uVar8;
  }
  lVar10 = func_0x00f78af4();
  if ((bRam0000000003eb579c & 1) == 0) {
    func_0x00f78a20(0x3d32668);
    func_0x00f78a20(0x3d32670);
    func_0x00f78a20(0x3d32678);
    func_0x00f78a20(0x3d22230);
    func_0x00f78a20(0x3d3a938);
    bRam0000000003eb579c = 1;
  }
  uStack_88 = 0;
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  if (*(long *)(lVar10 + 0x58) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar7 = (long *)___cxa_begin_catch();
      lVar10 = *plVar7;
      ___cxa_end_catch();
      uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,*unaff_x23);
      if (lVar10 == 0) {
        return uVar8;
      }
      func_0x00f78ac0(lVar10,0);
    }
    lVar10 = __Unwind_Resume();
    uVar8 = Core_Input_InputManager__DeInitStatics();
    if (*(long *)(lVar10 + 0x20) == 0) {
      lVar10 = func_0x00f78af4();
      if ((bRam0000000003eb5780 & 1) == 0) {
        func_0x00f78a20(0x3d2a458);
        func_0x00f78a20(0x3d2a450);
        func_0x00f78a20(0x3d1b638);
        func_0x00f78a20(0x3d1b630);
        func_0x00f78a20(0x3d20a50);
        func_0x00f78a20(0x3d589d0);
        func_0x00f78a20(0x3d589d8);
        func_0x00f78a20(0x3d589e0);
        func_0x00f78a20(0x3d22848);
        func_0x00f78a20(0x3d22878);
        func_0x00f78a20(0x3d26d78);
        bRam0000000003eb5780 = 1;
      }
      if (*(char *)(lVar10 + 0x28) != '\0') {
        uVar5 = func_0x00f78aec(/*System.Action<InputDevice, InputDeviceChange>_TypeInfo*/ uRam0000000003d1b630);
        /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar5,lVar10,uRam0000000003d589d8,uRam0000000003d2a450);
        if (((*(ushort *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.InputSystem.InputSystem$$remove_onDeviceChange*/ func_0x03066548(uVar5,0);
        uVar3 = /*UnityEngine.InputSystem.InputSystem$$get_onEvent*/ func_0x03068030(0);
        uVar5 = func_0x00f78aec(/*System.Action<InputEventPtr, InputDevice>_TypeInfo*/ uRam0000000003d1b638);
        /*System.Action<InputEventPtr, object>$$.ctor*/ func_0x01e6bce0(uVar5,lVar10,uRam0000000003d589e0,uRam0000000003d2a458);
        uVar3 = /*UnityEngine.InputSystem.LowLevel.InputEventListener$$op_Subtraction*/ func_0x0304e1cc(uVar3,uVar5,0);
        /*UnityEngine.InputSystem.InputSystem$$set_onEvent*/ func_0x03068038(uVar3,0);
        *(undefined1 *)(lVar10 + 0x28) = 0;
      }
      lVar9 = func_0x00f78aec(/*Core.Input.ControllerRemappingsNative.OnControllerMappingsChanged_TypeInfo*/ uRam0000000003d26d78);
      puVar6 = puRam0000000003d589d0;
      *(undefined8 *)(lVar9 + 0x10) = *puRam0000000003d589d0;
      *(long *)(lVar9 + 0x20) = lVar10;
      *(undefined8 **)(lVar9 + 0x28) = puVar6;
      if (((*(byte *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Core_Input_ControllerRemappingsNative__remove_ControllerMappingsChanged(lVar9);
      uVar8 = Core_Input_ControllerRemappingsNative__DeInit();
      **(undefined8 **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) = 0;
      return uVar8;
    }
    *(undefined8 *)(lVar10 + 0x20) = 0;
    return uVar8;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_88,*(long *)(lVar10 + 0x58),uRam0000000003d3a938);
  do {
    uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_88,uRam0000000003d32670);
    plVar7 = plStack_78;
    if ((uVar8 & 1) == 0) {
      uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,uRam0000000003d32668);
      return uVar8;
    }
    uVar1 = *(undefined4 *)(lVar10 + 0x18);
    uVar5 = Core_Input_InputManager__TryGetGlyphMappingsForFamily(lVar10,uVar1);
    if (plVar7 == (long *)0x0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1649de8);
      (*pcVar2)();
    }
    lVar9 = *plVar7;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == /*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01649da0;
        }
        piVar11 = piVar11 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230,0);
LAB_01649da0:
    (*(code *)*puVar6)(plVar7,uVar1,uVar5,puVar6[1]);
  } while( true );
}



// ============================================================
// RVA: 0x164b7b0 | Core.Input.InputManager.OnControllerRemappingsChanged
// ============================================================

void Core_Input_InputManager__OnControllerRemappingsChanged(long param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  int extraout_w1;
  long lVar9;
  int *piVar10;
  undefined8 *unaff_x23;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  if ((bRam0000000003eb579c & 1) == 0) {
    func_0x00f78a20(0x3d32668);
    func_0x00f78a20(0x3d32670);
    func_0x00f78a20(0x3d32678);
    func_0x00f78a20(0x3d22230);
    func_0x00f78a20(0x3d3a938);
    bRam0000000003eb579c = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  plStack_58 = (long *)0x0;
  if (*(long *)(param_1 + 0x58) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar7 = (long *)___cxa_begin_catch();
      lVar9 = *plVar7;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,*unaff_x23);
      if (lVar9 == 0) {
        return;
      }
      func_0x00f78ac0(lVar9,0);
    }
    lVar9 = __Unwind_Resume();
    Core_Input_InputManager__DeInitStatics();
    if (*(long *)(lVar9 + 0x20) == 0) {
      lVar9 = func_0x00f78af4();
      if ((bRam0000000003eb5780 & 1) == 0) {
        func_0x00f78a20(0x3d2a458);
        func_0x00f78a20(0x3d2a450);
        func_0x00f78a20(0x3d1b638);
        func_0x00f78a20(0x3d1b630);
        func_0x00f78a20(0x3d20a50);
        func_0x00f78a20(0x3d589d0);
        func_0x00f78a20(0x3d589d8);
        func_0x00f78a20(0x3d589e0);
        func_0x00f78a20(0x3d22848);
        func_0x00f78a20(0x3d22878);
        func_0x00f78a20(0x3d26d78);
        bRam0000000003eb5780 = 1;
      }
      if (*(char *)(lVar9 + 0x28) != '\0') {
        uVar5 = func_0x00f78aec(/*System.Action<InputDevice, InputDeviceChange>_TypeInfo*/ uRam0000000003d1b630);
        /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar5,lVar9,uRam0000000003d589d8,uRam0000000003d2a450);
        if (((*(ushort *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.InputSystem.InputSystem$$remove_onDeviceChange*/ func_0x03066548(uVar5,0);
        uVar3 = /*UnityEngine.InputSystem.InputSystem$$get_onEvent*/ func_0x03068030(0);
        uVar5 = func_0x00f78aec(/*System.Action<InputEventPtr, InputDevice>_TypeInfo*/ uRam0000000003d1b638);
        /*System.Action<InputEventPtr, object>$$.ctor*/ func_0x01e6bce0(uVar5,lVar9,uRam0000000003d589e0,uRam0000000003d2a458);
        uVar3 = /*UnityEngine.InputSystem.LowLevel.InputEventListener$$op_Subtraction*/ func_0x0304e1cc(uVar3,uVar5,0);
        /*UnityEngine.InputSystem.InputSystem$$set_onEvent*/ func_0x03068038(uVar3,0);
        *(undefined1 *)(lVar9 + 0x28) = 0;
      }
      lVar8 = func_0x00f78aec(/*Core.Input.ControllerRemappingsNative.OnControllerMappingsChanged_TypeInfo*/ uRam0000000003d26d78);
      puVar6 = puRam0000000003d589d0;
      *(undefined8 *)(lVar8 + 0x10) = *puRam0000000003d589d0;
      *(long *)(lVar8 + 0x20) = lVar9;
      *(undefined8 **)(lVar8 + 0x28) = puVar6;
      if (((*(byte *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Core_Input_ControllerRemappingsNative__remove_ControllerMappingsChanged(lVar8);
      Core_Input_ControllerRemappingsNative__DeInit();
      **(undefined8 **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) = 0;
      return;
    }
    *(undefined8 *)(lVar9 + 0x20) = 0;
    return;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,*(long *)(param_1 + 0x58),uRam0000000003d3a938);
  do {
    uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_68,uRam0000000003d32670);
    plVar7 = plStack_58;
    if ((uVar4 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d32668);
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar5 = Core_Input_InputManager__TryGetGlyphMappingsForFamily(param_1,uVar1);
    if (plVar7 == (long *)0x0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1649de8);
      (*pcVar2)();
    }
    lVar9 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == /*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_01649da0;
        }
        piVar10 = piVar10 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230,0);
LAB_01649da0:
    (*(code *)*puVar6)(plVar7,uVar1,uVar5,puVar6[1]);
  } while( true );
}



// ============================================================
// RVA: 0x164b7b4 | Core.Input.InputManager.ForceRefreshControllerMappings
// ============================================================

void Core_Input_InputManager__ForceRefreshControllerMappings(long param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  int extraout_w1;
  long lVar9;
  int *piVar10;
  undefined8 *unaff_x23;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  if ((bRam0000000003eb579b & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    bRam0000000003eb579b = 1;
  }
  if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  Core_Input_ControllerRemappingsNative__PollForUpdatedMappings();
  if ((bRam0000000003eb579c & 1) == 0) {
    func_0x00f78a20(0x3d32668);
    func_0x00f78a20(0x3d32670);
    func_0x00f78a20(0x3d32678);
    func_0x00f78a20(0x3d22230);
    func_0x00f78a20(0x3d3a938);
    bRam0000000003eb579c = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  plStack_58 = (long *)0x0;
  if (*(long *)(param_1 + 0x58) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar7 = (long *)___cxa_begin_catch();
      lVar9 = *plVar7;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,*unaff_x23);
      if (lVar9 == 0) {
        return;
      }
      func_0x00f78ac0(lVar9,0);
    }
    lVar9 = __Unwind_Resume();
    Core_Input_InputManager__DeInitStatics();
    if (*(long *)(lVar9 + 0x20) == 0) {
      lVar9 = func_0x00f78af4();
      if ((bRam0000000003eb5780 & 1) == 0) {
        func_0x00f78a20(0x3d2a458);
        func_0x00f78a20(0x3d2a450);
        func_0x00f78a20(0x3d1b638);
        func_0x00f78a20(0x3d1b630);
        func_0x00f78a20(0x3d20a50);
        func_0x00f78a20(0x3d589d0);
        func_0x00f78a20(0x3d589d8);
        func_0x00f78a20(0x3d589e0);
        func_0x00f78a20(0x3d22848);
        func_0x00f78a20(0x3d22878);
        func_0x00f78a20(0x3d26d78);
        bRam0000000003eb5780 = 1;
      }
      if (*(char *)(lVar9 + 0x28) != '\0') {
        uVar5 = func_0x00f78aec(/*System.Action<InputDevice, InputDeviceChange>_TypeInfo*/ uRam0000000003d1b630);
        /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar5,lVar9,uRam0000000003d589d8,uRam0000000003d2a450);
        if (((*(ushort *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*UnityEngine.InputSystem.InputSystem$$remove_onDeviceChange*/ func_0x03066548(uVar5,0);
        uVar3 = /*UnityEngine.InputSystem.InputSystem$$get_onEvent*/ func_0x03068030(0);
        uVar5 = func_0x00f78aec(/*System.Action<InputEventPtr, InputDevice>_TypeInfo*/ uRam0000000003d1b638);
        /*System.Action<InputEventPtr, object>$$.ctor*/ func_0x01e6bce0(uVar5,lVar9,uRam0000000003d589e0,uRam0000000003d2a458);
        uVar3 = /*UnityEngine.InputSystem.LowLevel.InputEventListener$$op_Subtraction*/ func_0x0304e1cc(uVar3,uVar5,0);
        /*UnityEngine.InputSystem.InputSystem$$set_onEvent*/ func_0x03068038(uVar3,0);
        *(undefined1 *)(lVar9 + 0x28) = 0;
      }
      lVar8 = func_0x00f78aec(/*Core.Input.ControllerRemappingsNative.OnControllerMappingsChanged_TypeInfo*/ uRam0000000003d26d78);
      puVar6 = puRam0000000003d589d0;
      *(undefined8 *)(lVar8 + 0x10) = *puRam0000000003d589d0;
      *(long *)(lVar8 + 0x20) = lVar9;
      *(undefined8 **)(lVar8 + 0x28) = puVar6;
      if (((*(byte *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Core_Input_ControllerRemappingsNative__remove_ControllerMappingsChanged(lVar8);
      Core_Input_ControllerRemappingsNative__DeInit();
      **(undefined8 **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) = 0;
      return;
    }
    *(undefined8 *)(lVar9 + 0x20) = 0;
    return;
  }
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_68,*(long *)(param_1 + 0x58),uRam0000000003d3a938);
  do {
    uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_68,uRam0000000003d32670);
    plVar7 = plStack_58;
    if ((uVar4 & 1) == 0) {
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_68,uRam0000000003d32668);
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar5 = Core_Input_InputManager__TryGetGlyphMappingsForFamily(param_1,uVar1);
    if (plVar7 == (long *)0x0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1649de8);
      (*pcVar2)();
    }
    lVar9 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == /*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_01649da0;
        }
        piVar10 = piVar10 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*Core.Input.IInputFamilyChangeListener_TypeInfo*/ lRam0000000003d22230,0);
LAB_01649da0:
    (*(code *)*puVar6)(plVar7,uVar1,uVar5,puVar6[1]);
  } while( true );
}



// ============================================================
// RVA: 0x164b820 | Core.Input.InputManager.EnforceSiriRemotePolicy
// ============================================================

/* WARNING: Possible PIC construction at 0x0164b95c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ba8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164b960) */
/* WARNING: Removing unreachable block (ram,0x0164ba90) */
/* WARNING: Removing unreachable block (ram,0x0164ba9c) */
/* WARNING: Removing unreachable block (ram,0x0164ba94) */

ulong Core_Input_InputManager__EnforceSiriRemotePolicy(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined8 **ppuVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  int extraout_w1;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  ushort *puVar15;
  ulong uVar16;
  uint uVar17;
  uint *puVar18;
  code *pcVar19;
  ushort *puVar20;
  long lVar21;
  long lVar22;
  ushort *puVar23;
  undefined8 *puVar24;
  long *plVar25;
  int iVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 **ppuVar29;
  undefined *puVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb579d & 1) == 0) {
    func_0x00f78a20(0x3d32788);
    func_0x00f78a20(0x3d32790);
    func_0x00f78a20(0x3d32798);
    func_0x00f78a20(0x3d21b78);
    func_0x00f78a20(0x3d22878);
    func_0x00f78a20(0x3d3fb60);
    bRam0000000003eb579d = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (((*(ushort *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.InputSystem.InputSystem_TypeInfo*/ lRam0000000003d22878 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar9 = (undefined8 *)0x3d32788;
  auStack_78 = /*UnityEngine.InputSystem.InputSystem$$get_devices*/ func_0x030662d4(0);
  /*UnityEngine.InputSystem.Utilities.ReadOnlyArray<TouchControl>$$GetEnumerator*/ func_0x027497b4(&uStack_68,auStack_78,uRam0000000003d3fb60);
  uVar27 = 0;
  uVar28 = 0;
  do {
    do {
      uVar7 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$MoveNext*/ func_0x01f6f768(&uStack_68,uRam0000000003d32790);
      if ((uVar7 & 1) == 0) {
        uVar7 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&uStack_68,uRam0000000003d32788);
        puVar24 = puVar9;
        goto code_r0x0164b97c;
      }
      plVar8 = (long *)/*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$get_Current*/ func_0x01f6f794(&uStack_68,uRam0000000003d32798);
    } while (plVar8 == (long *)0x0);
  } while ((*(byte *)(*plVar8 + 300) < *(byte *)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 300)) ||
          (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 300) * 8 +
                    -8) != /*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78));
  puVar30 = (undefined *)0x164b960;
  goto code_r0x0164b9ec;
code_r0x029ca9f4:
  ppuVar29 = *(undefined1 ***)((long)ppuVar4 + -0x70);
  puVar30 = *(undefined **)((long)ppuVar4 + -0x68);
  uVar11 = *(undefined8 *)((long)ppuVar4 + -0x80);
  plVar8 = *(long **)((long)ppuVar4 + -0x78);
  uVar28 = *(undefined8 *)((long)ppuVar4 + -0x90);
  uVar27 = *(undefined8 *)((long)ppuVar4 + -0x88);
  ppuVar4 = (undefined8 **)((long)ppuVar4 + -0x60);
  goto System_String__EqualsHelper;
code_r0x029cac8c:
  iVar6 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar10,lVar21,0);
  goto code_r0x029cabcc;
  while( true ) {
    if (puVar13[1] != puVar18[1]) goto code_r0x029ca930;
    if (puVar13[2] != puVar18[2]) {
      lVar22 = 8;
      goto code_r0x029ca930;
    }
    if (puVar13[3] != puVar18[3]) {
      lVar22 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar13[4] != puVar18[4]) {
      lVar22 = 0x10;
      goto code_r0x029ca930;
    }
    puVar13 = puVar13 + 5;
    puVar18 = puVar18 + 5;
    iVar6 = iVar26 + -10;
    bVar5 = iVar26 < 0x14;
    iVar26 = iVar6;
    if (bVar5) break;
code_r0x029ca858:
    if (*puVar13 != *puVar18) {
      lVar22 = 0;
code_r0x029ca930:
      puVar13 = (uint *)(lVar22 + (long)puVar13);
      puVar18 = (uint *)(lVar22 + (long)puVar18);
      uVar12 = (uint)(ushort)*puVar13 - (uint)(ushort)*puVar18;
      if (uVar12 != 0) {
        return (ulong)uVar12;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar6) {
    iVar6 = iVar6 + 2;
    do {
      if (*puVar13 != *puVar18) {
        uVar12 = (*puVar13 & 0xffff) - (*puVar18 & 0xffff);
        if (uVar12 != 0) {
          return (ulong)uVar12;
        }
code_r0x029ca948:
        uVar12 = (uint)*(ushort *)((long)puVar13 + 2);
        uVar17 = (uint)*(ushort *)((long)puVar18 + 2);
        goto code_r0x029ca950;
      }
      puVar13 = puVar13 + 1;
      puVar18 = puVar18 + 1;
      iVar6 = iVar6 + -2;
    } while (2 < iVar6);
  }
  uVar12 = *(uint *)(lVar10 + 0x10);
  uVar17 = *(uint *)(lVar21 + 0x10);
code_r0x029ca950:
  return (ulong)(uVar12 - uVar17);
  while( true ) {
    puVar9 = (undefined8 *)___cxa_begin_catch();
    puVar9 = (undefined8 *)*puVar9;
    ___cxa_end_catch();
    uVar7 = /*UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<TouchControl>$$Dispose*/ func_0x01f6f764(&uStack_68,*puVar24);
    puVar24 = puVar9;
    if (puVar9 != (undefined8 *)0x0) break;
code_r0x0164b97c:
    if (param_1 != 0) {
      *(undefined1 *)(param_1 + 0x55) = 0;
      return uVar7;
    }
    func_0x00f78af4();
    puVar9 = puVar24;
    if (extraout_w1 != 1) goto code_r0x0164b9e8;
  }
  func_0x00f78ac0(puVar9,0);
code_r0x0164b9e8:
  puVar30 = &Core_Input_InputManagerExtensions__IsDeviceSiriRemote;
  plVar8 = (long *)__Unwind_Resume();
code_r0x0164b9ec:
  ppuVar4 = &puStack_a0;
  ppuVar29 = &puStack_90;
  puStack_a0 = puVar9;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  puStack_88 = puVar30;
  if ((bRam0000000003eb57a1 & 1) == 0) {
    func_0x00f78a20(0x3d71c40);
    func_0x00f78a20(0x3d265f8);
    bRam0000000003eb57a1 = 1;
  }
  if (plVar8 != (long *)0x0) {
    if ((*(byte *)(/*UnityEngine.InputSystem.iOS.iOSGameController_TypeInfo*/ lRam0000000003d265f8 + 300) <= *(byte *)(*plVar8 + 300)) &&
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(/*UnityEngine.InputSystem.iOS.iOSGameController_TypeInfo*/ lRam0000000003d265f8 + 300) * 8 + -8)
        == /*UnityEngine.InputSystem.iOS.iOSGameController_TypeInfo*/ lRam0000000003d265f8)) {
      lVar10 = /*UnityEngine.InputSystem.InputControl$$get_name*/ func_0x0303ce54(plVar8,0);
      auVar32._8_8_ = /*STR('Remote')*/ lRam0000000003d71c40;
      auVar32._0_8_ = lVar10;
      uVar11 = 0x3d71c40;
      uVar7 = 0;
      puVar30 = &UNK_0164ba90;
      if (lVar10 == /*STR('Remote')*/ lRam0000000003d71c40) {
        uVar16 = 1;
      }
      else {
        uVar16 = 0;
        if ((lVar10 != 0) && (/*STR('Remote')*/ lRam0000000003d71c40 != 0)) {
          if (*(int *)(lVar10 + 0x10) == *(int *)(/*STR('Remote')*/ lRam0000000003d71c40 + 0x10)) {
System_String__EqualsHelper:
            lVar10 = auVar32._0_8_;
            *(undefined8 *)((long)ppuVar4 + -0x30) = uVar28;
            *(undefined8 *)((long)ppuVar4 + -0x28) = uVar27;
            *(undefined8 *)((long)ppuVar4 + -0x20) = uVar11;
            *(long **)((long)ppuVar4 + -0x18) = plVar8;
            *(undefined1 ***)((long)ppuVar4 + -0x10) = ppuVar29;
            *(undefined **)((long)ppuVar4 + -8) = puVar30;
            if ((lVar10 != 0) && (auVar32._8_8_ != 0)) {
              plVar8 = (long *)(lVar10 + 0x14);
              iVar6 = *(int *)(lVar10 + 0x10);
              plVar25 = (long *)(auVar32._8_8_ + 0x14);
              uVar7 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
              if ((uVar7 & 1) == 0) {
                iVar26 = iVar6;
                if (9 < iVar6) {
                  do {
                    if ((int)*plVar8 != (int)*plVar25) {
                      return 0;
                    }
                    if (*(int *)((long)plVar8 + 4) != *(int *)((long)plVar25 + 4)) {
                      return 0;
                    }
                    if ((int)plVar8[1] != (int)plVar25[1]) {
                      return 0;
                    }
                    if (*(int *)((long)plVar8 + 0xc) != *(int *)((long)plVar25 + 0xc)) {
                      return 0;
                    }
                    if ((int)plVar8[2] != (int)plVar25[2]) {
                      return 0;
                    }
                    plVar8 = (long *)((long)plVar8 + 0x14);
                    plVar25 = (long *)((long)plVar25 + 0x14);
                    iVar6 = iVar26 + -10;
                    bVar5 = 0x13 < iVar26;
                    iVar26 = iVar6;
                  } while (bVar5);
                }
              }
              else {
                iVar26 = iVar6;
                if (0xb < iVar6) {
                  do {
                    if (((*plVar8 != *plVar25) || (plVar8[1] != plVar25[1])) ||
                       (plVar8[2] != plVar25[2])) {
                      return 0;
                    }
                    plVar8 = plVar8 + 3;
                    plVar25 = plVar25 + 3;
                    iVar6 = iVar26 + -0xc;
                    bVar5 = 0x17 < iVar26;
                    iVar26 = iVar6;
                  } while (bVar5);
                }
              }
              if (iVar6 < 1) {
                uVar7 = 1;
              }
              else {
                iVar6 = iVar6 + 2;
                do {
                  bVar5 = (int)*plVar8 == (int)*plVar25;
                  uVar7 = (ulong)bVar5;
                  if (!bVar5) {
                    return uVar7;
                  }
                  plVar8 = (long *)((long)plVar8 + 4);
                  plVar25 = (long *)((long)plVar25 + 4);
                  iVar6 = iVar6 + -2;
                } while (2 < iVar6);
              }
              return uVar7;
            }
            auVar31 = func_0x00f78af4();
            lVar21 = auVar31._8_8_;
            lVar10 = auVar31._0_8_;
            *(undefined8 *)((long)ppuVar4 + -0x60) = uVar28;
            *(undefined8 *)((long)ppuVar4 + -0x58) = uVar27;
            *(undefined8 *)((long)ppuVar4 + -0x50) = uVar11;
            *(long **)((long)ppuVar4 + -0x48) = plVar8;
            *(undefined1 **)((long)ppuVar4 + -0x40) = (undefined1 *)((long)ppuVar4 + -0x10);
            *(undefined **)((long)ppuVar4 + -0x38) = &System_String__CompareOrdinalHelper;
            if ((bRam0000000003eb9441 & 1) == 0) {
              func_0x00f78a20(0x3d232c0);
              bRam0000000003eb9441 = 1;
            }
            if ((lVar10 != 0) && (lVar21 != 0)) {
              uVar1 = *(undefined4 *)(lVar10 + 0x10);
              uVar2 = *(undefined4 *)(lVar21 + 0x10);
              if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar6 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
              puVar13 = (uint *)(lVar10 + 0x14);
              puVar18 = (uint *)(lVar21 + 0x14);
              if (iVar6 < 10) goto code_r0x029ca8c8;
              lVar22 = 4;
              iVar26 = iVar6;
              goto code_r0x029ca858;
            }
            auVar32 = func_0x00f78af4();
            plVar25 = auVar32._8_8_;
            plVar8 = auVar32._0_8_;
            *(undefined8 *)((long)ppuVar4 + -0x90) = uVar28;
            *(undefined8 *)((long)ppuVar4 + -0x88) = 0x3eb9000;
            *(undefined1 (*) [16])((long)ppuVar4 + -0x80) = auVar31;
            *(undefined1 **)((long)ppuVar4 + -0x70) = (undefined1 *)((long)ppuVar4 + -0x40);
            *(undefined **)((long)ppuVar4 + -0x68) = &System_String__Equals;
            if ((bRam0000000003eb9442 & 1) == 0) {
              func_0x00f78a20(0x3d24dd0);
              bRam0000000003eb9442 = 1;
            }
            if (plVar8 != (long *)0x0) {
              if ((plVar25 != (long *)0x0) && (*plVar25 == /*string_TypeInfo*/ lRam0000000003d24dd0)) {
                if (plVar8 == plVar25) {
                  return 1;
                }
                uVar16 = uVar7;
                if (plVar25 == (long *)0x0) goto code_r0x029caa44;
                if ((int)plVar8[2] == (int)plVar25[2]) goto code_r0x029ca9f4;
              }
              return 0;
            }
            func_0x00f78a24(0x3d23938);
            plVar8 = (long *)func_0x00f78aec();
            /*System.NullReferenceException$$.ctor*/ func_0x02950520(plVar8,0);
            uVar27 = func_0x00f78a24(0x3d5dad8);
            func_0x00f78ac0(plVar8,uVar27);
            uVar16 = uVar7;
code_r0x029caa44:
            auVar32 = func_0x00f78af4();
            lVar21 = auVar32._8_8_;
            lVar10 = auVar32._0_8_;
            *(undefined8 *)((long)ppuVar4 + -0xc0) = uVar28;
            *(undefined8 *)((long)ppuVar4 + -0xb8) = 0x3eb9000;
            *(long **)((long)ppuVar4 + -0xb0) = plVar25;
            *(long **)((long)ppuVar4 + -0xa8) = plVar8;
            *(undefined1 **)((long)ppuVar4 + -0xa0) = (undefined1 *)((long)ppuVar4 + -0x70);
            *(undefined **)((long)ppuVar4 + -0x98) = &System_String__Equals;
            uVar7 = uVar16;
            if ((bRam0000000003eb9443 & 1) == 0) {
              func_0x00f78a20(0x3d20b50);
              bRam0000000003eb9443 = 1;
            }
            if (5 < (uint)uVar16) {
code_r0x029caca0:
              uVar28 = func_0x00f78a24(0x3d746f0);
              uVar28 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar28,0);
              func_0x00f78a24(0x3d1fce8);
              uVar27 = func_0x00f78aec();
              uVar11 = func_0x00f78a24(0x3d784e0);
              /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar27,uVar28,uVar11,0);
              uVar28 = func_0x00f78a24(0x3d5dae8);
              func_0x00f78ac0(uVar27,uVar28);
              goto code_r0x029cad04;
            }
            if (lVar10 == lVar21) {
              return 1;
            }
            if (lVar21 == 0) {
              return 0;
            }
            switch(uVar16 & 0xffffffff) {
            case 0:
              if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              plVar8 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
              break;
            case 1:
              if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              plVar8 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
              goto joined_r0x029caba0;
            case 2:
              if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              plVar8 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
              break;
            case 3:
              if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              plVar8 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
              if (plVar8 == (long *)0x0) goto code_r0x029cad04;
              plVar8 = (long *)(**(code **)(*plVar8 + 0x1f8))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x200));
              if (plVar8 == (long *)0x0) goto code_r0x029cad04;
              pcVar19 = *(code **)(*plVar8 + 0x1a8);
              uVar28 = *(undefined8 *)(*plVar8 + 0x1b0);
              uVar27 = 1;
              goto code_r0x029cabc8;
            case 4:
              if (*(int *)(lVar10 + 0x10) != *(int *)(lVar21 + 0x10)) {
                return 0;
              }
              ppuVar29 = *(undefined1 ***)((long)ppuVar4 + -0xa0);
              puVar30 = *(undefined **)((long)ppuVar4 + -0x98);
              uVar11 = *(undefined8 *)((long)ppuVar4 + -0xb0);
              plVar8 = *(long **)((long)ppuVar4 + -0xa8);
              uVar28 = *(undefined8 *)((long)ppuVar4 + -0xc0);
              uVar27 = *(undefined8 *)((long)ppuVar4 + -0xb8);
              ppuVar4 = (undefined8 **)((long)ppuVar4 + -0x90);
              goto System_String__EqualsHelper;
            case 5:
              iVar6 = *(int *)(lVar10 + 0x10);
              if (iVar6 != *(int *)(lVar21 + 0x10)) {
                return 0;
              }
              if (iVar6 == 0) goto code_r0x029cac68;
              lVar14 = (long)iVar6 << 1;
              puVar15 = (ushort *)(lVar10 + 0x16);
              puVar23 = (ushort *)(lVar10 + 0x14);
              lVar22 = lVar14;
              goto code_r0x029cac24;
            default:
              goto code_r0x029caca0;
            }
            if (plVar8 != (long *)0x0) {
              plVar8 = (long *)(**(code **)(*plVar8 + 0x1f8))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x200));
              if (plVar8 != (long *)0x0) {
                pcVar19 = *(code **)(*plVar8 + 0x1a8);
                uVar28 = *(undefined8 *)(*plVar8 + 0x1b0);
                uVar27 = 0;
code_r0x029cabc8:
                iVar6 = (*pcVar19)(plVar8,lVar10,lVar21,uVar27,uVar28);
                goto code_r0x029cabcc;
              }
            }
code_r0x029cad04:
            lVar10 = func_0x00f78af4();
            if (*(int *)(lVar10 + 0x10) == 0) {
              return 1;
            }
            lVar21 = (long)*(int *)(lVar10 + 0x10) * 2;
            puVar15 = (ushort *)(lVar10 + 0x14);
            puVar23 = (ushort *)(lVar10 + 0x16);
            do {
              lVar21 = lVar21 + -2;
              uVar3 = *puVar15;
              puVar15 = puVar23;
              puVar23 = puVar23 + 1;
            } while (uVar3 < 0x80 && lVar21 != 0);
            return (ulong)(uVar3 < 0x80);
          }
          uVar16 = 0;
        }
      }
      return uVar16;
    }
  }
  return 0;
  while( true ) {
    lVar22 = lVar22 + -2;
    puVar15 = puVar20 + 1;
    puVar23 = puVar20;
    if (lVar22 == 0) break;
code_r0x029cac24:
    puVar20 = puVar15;
    if (0x7f < *puVar23) goto code_r0x029cac8c;
  }
  if (iVar6 != 0) {
    puVar15 = (ushort *)(lVar21 + 0x16);
    puVar23 = (ushort *)(lVar21 + 0x14);
    do {
      puVar20 = puVar15;
      if (0x7f < *puVar23) goto code_r0x029cac8c;
      lVar14 = lVar14 + -2;
      puVar15 = puVar20 + 1;
      puVar23 = puVar20;
    } while (lVar14 != 0);
  }
code_r0x029cac68:
  iVar6 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar10,lVar21);
code_r0x029cabcc:
  return (ulong)(iVar6 == 0);
}



// ============================================================
// RVA: 0x164bab4 | Core.Input.InputManager..ctor
// ============================================================

undefined1  [16] Core_Input_InputManager___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb57a0 & 1) == 0) {
    func_0x00f78a20(0x3d2e6c0);
    func_0x00f78a20(0x3d1c2a0);
    func_0x00f78a20(0x3d3a928);
    func_0x00f78a20(0x3d3abf8);
    func_0x00f78a20(0x3d1da00);
    func_0x00f78a20(0x3d1da90);
    bRam0000000003eb57a0 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<IInputFamilyChangeListener>_TypeInfo*/ uRam0000000003d1da00);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d3a928);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<InputGlyphBehaviour>_TypeInfo*/ uRam0000000003d1da90);
  /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar1,8,uRam0000000003d3abf8);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<InputFamily, InputGlyphMapping[]>_TypeInfo*/ uRam0000000003d1c2a0);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar1,uRam0000000003d2e6c0);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



