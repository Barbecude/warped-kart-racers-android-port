// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Input.InputGlyphBehaviour

// ============================================================
// RVA: 0x16484c0 | Core.Input.InputGlyphBehaviour.get_IsSubmitAction
// ============================================================

bool Core_Input_InputGlyphBehaviour__get_IsSubmitAction(long param_1)

{
  if (*(char *)(param_1 + 0x58) != '\0') {
    return true;
  }
  return *(char *)(param_1 + 0x68) != '\0';
}



// ============================================================
// RVA: 0x16484e0 | Core.Input.InputGlyphBehaviour.get_ScreenLayer
// ============================================================

undefined4 Core_Input_InputGlyphBehaviour__get_ScreenLayer(long param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}



// ============================================================
// RVA: 0x16484e8 | Core.Input.InputGlyphBehaviour.add_OnBoundInputPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x016486d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016486e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016488d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016486ec) */
/* WARNING: Removing unreachable block (ram,0x016486fc) */
/* WARNING: Removing unreachable block (ram,0x01648704) */
/* WARNING: Removing unreachable block (ram,0x01648708) */
/* WARNING: Removing unreachable block (ram,0x01648720) */
/* WARNING: Removing unreachable block (ram,0x01648728) */
/* WARNING: Removing unreachable block (ram,0x0164872c) */
/* WARNING: Removing unreachable block (ram,0x0164873c) */
/* WARNING: Removing unreachable block (ram,0x01648748) */
/* WARNING: Removing unreachable block (ram,0x01648750) */
/* WARNING: Removing unreachable block (ram,0x01648754) */
/* WARNING: Removing unreachable block (ram,0x01648760) */
/* WARNING: Removing unreachable block (ram,0x01648770) */
/* WARNING: Removing unreachable block (ram,0x01648778) */
/* WARNING: Removing unreachable block (ram,0x0164877c) */
/* WARNING: Removing unreachable block (ram,0x0164878c) */
/* WARNING: Removing unreachable block (ram,0x01648798) */
/* WARNING: Removing unreachable block (ram,0x016487a0) */
/* WARNING: Removing unreachable block (ram,0x016487a4) */
/* WARNING: Removing unreachable block (ram,0x016487b0) */
/* WARNING: Removing unreachable block (ram,0x016487b8) */
/* WARNING: Removing unreachable block (ram,0x016487d8) */
/* WARNING: Removing unreachable block (ram,0x016487ec) */
/* WARNING: Removing unreachable block (ram,0x016487f4) */
/* WARNING: Removing unreachable block (ram,0x016488f8) */
/* WARNING: Removing unreachable block (ram,0x016488fc) */
/* WARNING: Removing unreachable block (ram,0x01648918) */
/* WARNING: Removing unreachable block (ram,0x01648920) */
/* WARNING: Removing unreachable block (ram,0x01648944) */
/* WARNING: Removing unreachable block (ram,0x01648950) */
/* WARNING: Removing unreachable block (ram,0x01648800) */
/* WARNING: Removing unreachable block (ram,0x01648838) */
/* WARNING: Removing unreachable block (ram,0x016488b0) */
/* WARNING: Removing unreachable block (ram,0x016488c4) */
/* WARNING: Removing unreachable block (ram,0x01648848) */
/* WARNING: Removing unreachable block (ram,0x016488f0) */
/* WARNING: Removing unreachable block (ram,0x0164885c) */
/* WARNING: Removing unreachable block (ram,0x01648880) */
/* WARNING: Removing unreachable block (ram,0x01648884) */
/* WARNING: Removing unreachable block (ram,0x016488a8) */
/* WARNING: Removing unreachable block (ram,0x016486d8) */
/* WARNING: Removing unreachable block (ram,0x016488d4) */

ulong Core_Input_InputGlyphBehaviour__add_OnBoundInputPressed(long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 *****pppppuVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
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
  undefined8 uVar27;
  ulong *puVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 unaff_x23;
  code *pcVar31;
  undefined8 unaff_x24;
  long *plVar32;
  undefined1 ****ppppuVar33;
  undefined1 *puVar34;
  undefined *puVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  long lStack_178;
  undefined *puStack_108;
  undefined1 ****ppppuStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined1 ***pppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb5772 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb5772 = 1;
  }
  puVar28 = (ulong *)(param_1 + 0x40);
  uVar11 = *puVar28;
  while ((plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar11,param_2,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar10 = func_0x00ff0f44(puVar28,plVar9,uVar11);
    bVar5 = uVar11 == uVar10;
    uVar11 = uVar10;
    if (bVar5) {
      return uVar10;
    }
  }
  auVar36 = func_0x00f78e5c(plVar9);
  uStack_60 = 0x3d1fa78;
  puStack_38 = &Core_Input_InputGlyphBehaviour__remove_OnBoundInputPressed;
  uStack_58 = uVar11;
  puStack_50 = puVar28;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5773 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb5773 = 1;
  }
  puVar28 = (ulong *)(auVar36._0_8_ + 0x40);
  uVar11 = *puVar28;
  while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,auVar36._8_8_,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar10 = func_0x00ff0f44(puVar28,plVar9,uVar11);
    bVar5 = uVar11 == uVar10;
    uVar11 = uVar10;
    if (bVar5) {
      return uVar10;
    }
  }
  uVar11 = func_0x00f78e5c(plVar9);
  puStack_68 = &Core_Input_InputGlyphBehaviour__Start;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb5774 & 1) == 0) {
    func_0x00f78a20(0x3d32768);
    func_0x00f78a20(0x3d32770);
    func_0x00f78a20(0x3d32778);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22880);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3fb20);
    bRam0000000003eb5774 = 1;
  }
  uVar13 = 0x3d23990;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  /*Core.Input.InputManager$$RegisterListener*/ func_0x01648164(uVar11);
  ppppuStack_100 = (undefined1 ****)0x3d23990;
  puStack_f8 = (undefined *)0x3d216c0;
  uStack_f0 = 0x3eb5000;
  puStack_d8 = &UNK_016486d8;
  ppppuVar33 = &pppuStack_e0;
  uStack_e8 = uVar11;
  pppuStack_e0 = &ppuStack_70;
  if ((bRam0000000003eb5783 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d3ac00);
    bRam0000000003eb5783 = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (uVar10 = *(ulong *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x60), uVar10 == 0)) {
    lVar24 = func_0x00f78af4();
    puStack_108 = &Core_Input_InputGlyphBehaviour__GetLastInputPathComponent;
    if (lVar24 != 0) {
      iVar7 = /*System.String$$LastIndexOf*/ func_0x029ce0f0(lVar24,0x2f,0);
      auVar36._8_4_ = iVar7 + 1;
      auVar36._0_8_ = lVar24;
      auVar36._12_4_ = 0;
      uVar17 = 0x3eb5000;
      pppppuVar4 = &ppppuStack_100;
      uVar15 = 0x3d22848;
      do {
        uVar18 = auVar36._8_8_;
        uVar10 = auVar36._0_8_;
        iVar7 = auVar36._8_4_;
        uVar21 = *(int *)(uVar10 + 0x10) - iVar7;
        *(undefined8 *)((long)pppppuVar4 + -0x30) = uVar13;
        *(undefined8 *)((long)pppppuVar4 + -0x28) = uVar15;
        *(undefined8 *)((long)pppppuVar4 + -0x20) = uVar17;
        *(ulong *)((long)pppppuVar4 + -0x18) = uVar11;
        *(undefined1 *****)((long)pppppuVar4 + -0x10) = ppppuVar33;
        *(undefined **)((long)pppppuVar4 + -8) = puStack_108;
        ppppuVar33 = (undefined1 ****)((long)pppppuVar4 + -0x10);
        uVar13 = 0x3eb9000;
        if ((bRam0000000003eb944b & 1) == 0) {
          func_0x00f78a20(0x3d24dd0);
          bRam0000000003eb944b = 1;
        }
        if (iVar7 < 0) {
          uVar17 = 0x3d72d20;
code_r0x029cbcb4:
          uVar17 = func_0x00f78a24(uVar17);
          uVar11 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar17,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar17 = func_0x00f78aec();
          uVar15 = 0x3d7b9d0;
        }
        else {
          uVar8 = *(uint *)(uVar10 + 0x10);
          if ((int)uVar8 < iVar7) {
            uVar17 = 0x3d7b9e8;
            goto code_r0x029cbcb4;
          }
          if ((int)uVar21 < 0) {
            uVar17 = 0x3d6f480;
          }
          else {
            if (iVar7 <= (int)(uVar8 - uVar21)) goto code_r0x029cbc4c;
            uVar17 = 0x3d6ddc8;
          }
          uVar17 = func_0x00f78a24(uVar17);
          uVar11 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar17,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar17 = func_0x00f78aec();
          uVar15 = 0x3d7a280;
        }
        uVar15 = func_0x00f78a24(uVar15);
        /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar17,uVar15,uVar11,0);
        uVar15 = func_0x00f78a24(0x3d5dbb0);
        puStack_108 = &System_String__Substring;
        auVar36 = func_0x00f78ac0(uVar17,uVar15);
        pppppuVar4 = (undefined1 *****)((long)pppppuVar4 + -0x30);
        uVar15 = uVar18;
      } while( true );
    }
    plVar9 = (long *)func_0x00f78af4();
    if ((bRam0000000003eb5789 & 1) == 0) {
      func_0x00f78a20(0x3d22848);
      bRam0000000003eb5789 = 1;
    }
    if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
       (lVar24 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x48), lVar24 == 0)) {
      return 0;
    }
    lStack_178 = lVar24;
    lVar22 = *(long *)(lVar24 + 0x68);
    if (lVar22 == 0) {
      plVar32 = &lStack_178;
      lVar30 = 1;
    }
    else {
      lVar30 = *(long *)(lVar22 + 0x18);
      if (lVar30 == 0) {
        return 0;
      }
      plVar32 = (long *)(lVar22 + 0x20);
    }
    lVar22 = 0;
    do {
      lVar14 = plVar32[lVar22];
      pcVar31 = *(code **)(lVar14 + 0x10);
      plVar1 = *(long **)(lVar14 + 0x20);
      lVar14 = *(long *)(lVar14 + 0x28);
      if (*(short *)(lVar14 + 0x48) == -1) {
        func_0x00f78ad8(lVar14);
      }
      iVar7 = func_0x00f78a4c(lVar14);
      bVar5 = *(char *)(lVar14 + 0x4a) == '\x01';
      if (iVar7 == 0) {
        if (bVar5) {
          if (plVar1 == (long *)0x0) {
code_r0x0164a8ac:
            uVar11 = (*pcVar31)(plVar9,lVar14);
          }
          else {
            if (((*(short *)(lVar14 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
               (*(long *)(lVar24 + 0x18) == 0)) goto code_r0x0164a7a4;
            iVar7 = func_0x00f78a44(lVar14);
            iVar6 = func_0x00f78ec0(lVar14);
            if (iVar7 == 0) {
              uVar2 = *(ushort *)(lVar14 + 0x48);
              if (iVar6 == 0) {
                lVar14 = *plVar1 + (ulong)uVar2 * 0x10;
                uVar11 = (**(code **)(lVar14 + 0x138))
                                   (plVar1,plVar9,*(undefined8 *)(lVar14 + 0x140));
                goto code_r0x0164a8b8;
              }
              lVar14 = func_0x00f78a48(lVar14);
              lVar23 = *plVar1;
              uVar11 = (ulong)*(ushort *)(lVar23 + 0x12a);
              if (uVar11 != 0) {
                piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == lVar14) {
                    puVar19 = (undefined8 *)
                              (lVar23 + (long)(int)(*piVar26 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x0164aa44;
                  }
                  piVar26 = piVar26 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              puVar19 = (undefined8 *)func_0x00fac1f0(plVar1,lVar14,(ulong)uVar2);
code_r0x0164aa44:
              pcVar31 = (code *)*puVar19;
              puVar19 = (undefined8 *)puVar19[1];
            }
            else {
              if (iVar6 == 0) {
                uVar13 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar23 = *plVar1;
                uVar11 = (ulong)*(ushort *)(lVar23 + 0x12a);
                if (uVar11 != 0) {
                  piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == *(long *)(lVar14 + 0x18)) {
                      lVar23 = lVar23 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar14 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0164aa1c;
                    }
                    piVar26 = piVar26 + 4;
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                lVar23 = func_0x00fac1f0(plVar1);
code_r0x0164aa1c:
                uVar13 = *(undefined8 *)(lVar23 + 8);
              }
              puVar19 = (undefined8 *)func_0x00f78acc(uVar13,lVar14);
              pcVar31 = (code *)*puVar19;
            }
            uVar11 = (*pcVar31)(plVar1,plVar9,puVar19);
          }
        }
        else {
          if ((*(short *)(lVar14 + 0x48) == -1) || (*(long *)(lVar24 + 0x18) == 0))
          goto code_r0x0164a8ac;
          iVar7 = func_0x00f78a44(lVar14);
          iVar6 = func_0x00f78ec0(lVar14);
          if (iVar7 == 0) {
            uVar2 = *(ushort *)(lVar14 + 0x48);
            if (iVar6 == 0) {
              lVar14 = *plVar9 + (ulong)uVar2 * 0x10;
              uVar11 = (**(code **)(lVar14 + 0x138))(plVar9,*(undefined8 *)(lVar14 + 0x140));
              goto code_r0x0164a8b8;
            }
            lVar14 = func_0x00f78a48(lVar14);
            lVar23 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar23 + 0x12a);
            if (uVar11 != 0) {
              piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == lVar14) {
                  puVar19 = (undefined8 *)
                            (lVar23 + (long)(int)(*piVar26 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x0164a9e0;
                }
                piVar26 = piVar26 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar19 = (undefined8 *)func_0x00fac1f0(plVar9,lVar14,(ulong)uVar2);
code_r0x0164a9e0:
            pcVar31 = (code *)*puVar19;
            puVar19 = (undefined8 *)puVar19[1];
          }
          else {
            if (iVar6 == 0) {
              uVar13 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar23 = *plVar9;
              uVar11 = (ulong)*(ushort *)(lVar23 + 0x12a);
              if (uVar11 != 0) {
                piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == *(long *)(lVar14 + 0x18)) {
                    lVar23 = lVar23 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar14 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x0164a9b8;
                  }
                  piVar26 = piVar26 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              lVar23 = func_0x00fac1f0(plVar9);
code_r0x0164a9b8:
              uVar13 = *(undefined8 *)(lVar23 + 8);
            }
            puVar19 = (undefined8 *)func_0x00f78acc(uVar13,lVar14);
            pcVar31 = (code *)*puVar19;
          }
          uVar11 = (*pcVar31)(plVar9,puVar19);
        }
      }
      else {
        if (bVar5) goto code_r0x0164a8ac;
code_r0x0164a7a4:
        uVar11 = (*pcVar31)(plVar1,plVar9,lVar14);
      }
code_r0x0164a8b8:
      lVar22 = lVar22 + 1;
      if (lVar22 == lVar30) {
        return uVar11;
      }
    } while( true );
  }
  lVar24 = *(long *)(uVar10 + 0x10);
  puVar19 = puRam0000000003d3ac00;
  uVar16 = uStack_e8;
  uVar20 = uStack_f0;
  if (lVar24 == 0) {
code_r0x0242716c:
    uVar11 = uVar20;
    uVar10 = uVar16;
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
    uVar16 = uVar10;
    uVar20 = uVar11;
    if (lVar24 == 0) goto code_r0x0242716c;
  }
  if (uVar21 < *(uint *)(lVar24 + 0x18)) {
    *(ulong *)(lVar24 + (long)(int)uVar21 * 8 + 0x20) = uVar11;
    *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
    return uVar12;
  }
  uVar13 = func_0x00f78b24();
  auVar36 = func_0x00f78ac0(uVar13,0);
  lVar22 = auVar36._8_8_;
  lVar24 = auVar36._0_8_;
  puStack_f8 = &System_Collections_Generic_List_object___System_Collections_IList_Add;
  ppppuStack_100 = &pppuStack_e0;
  (*(code *)**(undefined8 **)(*(long *)(puVar19[3] + 0xc0) + 0x48))(lVar22,0x14);
  if (lVar24 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar31 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar31)();
  }
  pcVar31 = (code *)**(undefined8 **)(*(long *)(puVar19[3] + 0xc0) + 0x28);
  lVar30 = *(long *)(*(long *)(puVar19[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar30 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar30);
  }
  if (lVar22 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = func_0x00f78adc(lVar22,lVar30);
    if (lVar14 == 0) {
      func_0x00f78e5c(lVar22,lVar30);
      goto code_r0x0242734c;
    }
  }
  (*pcVar31)(lVar24,lVar14,*(undefined8 *)(*(long *)(puVar19[3] + 0xc0) + 0x28));
  iVar7 = (*(code *)**(undefined8 **)(*(long *)(puVar19[3] + 0xc0) + 0x68))(lVar24);
  return (ulong)(iVar7 - 1);
code_r0x029cc070:
  uVar17 = func_0x00f78b24();
  func_0x00f78ac0(uVar17,0);
  unaff_x23 = uVar13;
code_r0x029cc07c:
  auVar36._8_8_ = lVar24;
  auVar36._0_8_ = uVar10;
  puVar35 = &System_String__TrimStart;
  auVar37 = func_0x00f78af4();
  uVar16 = auVar37._0_8_;
  if ((auVar37._8_8_ == 0) || (*(long *)(auVar37._8_8_ + 0x18) == 0)) goto code_r0x029cc094;
  uVar13 = 0;
  pppppuVar4 = (undefined1 *****)((long)pppppuVar4 + -0x40);
  uVar11 = uVar12;
  auVar3 = auVar37;
  goto System_String__TrimHelper;
code_r0x029cbc4c:
  if (uVar21 == 0) {
    uVar10 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else if ((iVar7 != 0) || (uVar8 != uVar21)) {
    uVar13 = *(undefined8 *)((long)pppppuVar4 + -0x10);
    uVar18 = *(undefined8 *)((long)pppppuVar4 + -8);
    uVar17 = *(undefined8 *)((long)pppppuVar4 + -0x20);
    uVar11 = *(ulong *)((long)pppppuVar4 + -0x18);
    uVar15 = *(undefined8 *)((long)pppppuVar4 + -0x30);
    uVar27 = *(undefined8 *)((long)pppppuVar4 + -0x28);
System_String__InternalSubString:
    auVar3._8_8_ = auVar36._8_8_;
    auVar3._0_8_ = uVar11;
    uVar10 = auVar36._0_8_;
    uVar20 = (ulong)uVar21;
    *(undefined8 *)((long)pppppuVar4 + -0x30) = uVar15;
    *(undefined8 *)((long)pppppuVar4 + -0x28) = uVar27;
    *(undefined8 *)((long)pppppuVar4 + -0x20) = uVar17;
    *(ulong *)((long)pppppuVar4 + -0x18) = uVar11;
    *(undefined8 *)((long)pppppuVar4 + -0x10) = uVar13;
    *(undefined8 *)((long)pppppuVar4 + -8) = uVar18;
    puVar34 = (undefined1 *)((long)pppppuVar4 + -0x10);
    uVar16 = func_0x00f834ac(uVar20);
    if (uVar16 != 0) {
      /*System.Buffer$$Memcpy*/ func_0x029426bc(uVar16 + 0x14,uVar10 + (long)auVar36._8_4_ * 2 + 0x14,uVar21 << 1,0);
      return uVar16;
    }
    puVar35 = &System_String__Trim;
    auVar37 = func_0x00f78af4();
    uVar16 = auVar37._0_8_;
    if ((auVar37._8_8_ != 0) && (*(long *)(auVar37._8_8_ + 0x18) != 0)) {
      uVar13 = 2;
      pppppuVar4 = (undefined1 *****)((long)pppppuVar4 + -0x30);
      auVar3 = auVar37;
System_String__TrimHelper:
      lVar24 = auVar3._8_8_;
      uVar12 = auVar3._0_8_;
      *(undefined8 *)((long)pppppuVar4 + -0x40) = unaff_x24;
      *(undefined8 *)((long)pppppuVar4 + -0x38) = unaff_x23;
      *(undefined1 (*) [16])((long)pppppuVar4 + -0x30) = auVar36;
      *(ulong *)((long)pppppuVar4 + -0x20) = uVar20;
      *(ulong *)((long)pppppuVar4 + -0x18) = uVar11;
      *(undefined1 **)((long)pppppuVar4 + -0x10) = puVar34;
      *(undefined **)((long)pppppuVar4 + -8) = puVar35;
      puVar34 = (undefined1 *)((long)pppppuVar4 + -0x10);
      uVar21 = *(uint *)(uVar12 + 0x10);
      uVar20 = (ulong)uVar21;
      if ((int)uVar13 == 1) {
        uVar10 = 0;
        uVar13 = unaff_x23;
code_r0x029cbfd8:
        do {
          uVar21 = (int)uVar20 - 1;
          uVar20 = (ulong)uVar21;
          if ((int)uVar21 < (int)uVar10) break;
          uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(uVar12,uVar20);
          unaff_x23 = uVar13;
          if (lVar24 == 0) goto code_r0x029cc07c;
          iVar7 = *(int *)(lVar24 + 0x18);
          if (iVar7 < 1) {
            iVar6 = 0;
          }
          else {
            iVar25 = 0;
            do {
              if (iVar7 == iVar25) goto code_r0x029cc070;
              iVar6 = iVar25;
            } while ((*(ushort *)(lVar24 + (long)iVar25 * 2 + 0x20) != uVar8) &&
                    (iVar25 = iVar25 + 1, iVar6 = iVar7, iVar7 != iVar25));
          }
        } while (iVar6 != iVar7);
      }
      else {
        if ((int)uVar21 < 1) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          do {
            uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(uVar12,uVar10);
            unaff_x23 = uVar13;
            if (lVar24 == 0) goto code_r0x029cc07c;
            iVar7 = *(int *)(lVar24 + 0x18);
            if (iVar7 < 1) {
              iVar6 = 0;
            }
            else {
              iVar25 = 0;
              do {
                if (iVar7 == iVar25) goto code_r0x029cc070;
                iVar6 = iVar25;
              } while ((*(ushort *)(lVar24 + (long)iVar25 * 2 + 0x20) != uVar8) &&
                      (iVar25 = iVar25 + 1, iVar6 = iVar7, iVar7 != iVar25));
            }
          } while ((iVar6 != iVar7) &&
                  (uVar8 = (int)uVar10 + 1, uVar10 = (ulong)uVar8,
                  (int)uVar8 < *(int *)(uVar12 + 0x10)));
        }
        if ((int)uVar13 != 0) {
          uVar20 = (ulong)*(uint *)(uVar12 + 0x10);
          goto code_r0x029cbfd8;
        }
        uVar21 = uVar21 - 1;
      }
      uVar13 = *(undefined8 *)((long)pppppuVar4 + -0x10);
      uVar18 = *(undefined8 *)((long)pppppuVar4 + -8);
      uVar17 = *(undefined8 *)((long)pppppuVar4 + -0x20);
      uVar27 = *(undefined8 *)((long)pppppuVar4 + -0x18);
      uVar15 = *(undefined8 *)((long)pppppuVar4 + -0x30);
      uVar29 = *(undefined8 *)((long)pppppuVar4 + -0x28);
      unaff_x24 = *(undefined8 *)((long)pppppuVar4 + -0x40);
      unaff_x23 = *(undefined8 *)((long)pppppuVar4 + -0x38);
      uVar16 = uVar12;
      goto System_String__CreateTrimmedString;
    }
    iVar7 = 2;
    pppppuVar4 = (undefined1 *****)((long)pppppuVar4 + -0x30);
    goto System_String__TrimHelper;
  }
  return uVar10;
code_r0x029cc094:
  iVar7 = 0;
  pppppuVar4 = (undefined1 *****)((long)pppppuVar4 + -0x40);
System_String__TrimHelper:
  *(undefined8 *)((long)pppppuVar4 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pppppuVar4 + -0x38) = unaff_x23;
  *(ulong *)((long)pppppuVar4 + -0x30) = uVar10;
  *(long *)((long)pppppuVar4 + -0x28) = auVar3._8_8_;
  *(ulong *)((long)pppppuVar4 + -0x20) = uVar20;
  *(long *)((long)pppppuVar4 + -0x18) = auVar3._0_8_;
  *(undefined1 **)((long)pppppuVar4 + -0x10) = puVar34;
  *(undefined **)((long)pppppuVar4 + -8) = puVar35;
  if ((bRam0000000003eb9460 & 1) == 0) {
    func_0x00f78a20(0x3d20620);
    bRam0000000003eb9460 = 1;
  }
  uVar21 = *(uint *)(uVar16 + 0x10);
  if (iVar7 == 1) {
    uVar10 = 0;
  }
  else {
    if ((int)uVar21 < 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        uVar13 = /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar10);
        if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar13,0);
        if ((uVar11 & 1) == 0) {
          /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar10);
          break;
        }
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar8;
      } while ((int)uVar8 < *(int *)(uVar16 + 0x10));
    }
    if (iVar7 == 0) {
      uVar21 = uVar21 - 1;
      goto code_r0x029cbf04;
    }
    uVar21 = *(uint *)(uVar16 + 0x10);
  }
  do {
    uVar21 = uVar21 - 1;
    if ((int)uVar21 < (int)uVar10) goto code_r0x029cbf04;
    uVar13 = /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar21);
    if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar13,0);
  } while ((uVar11 & 1) != 0);
  /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar10);
code_r0x029cbf04:
  uVar13 = *(undefined8 *)((long)pppppuVar4 + -0x10);
  uVar18 = *(undefined8 *)((long)pppppuVar4 + -8);
  uVar17 = *(undefined8 *)((long)pppppuVar4 + -0x20);
  uVar27 = *(undefined8 *)((long)pppppuVar4 + -0x18);
  uVar15 = *(undefined8 *)((long)pppppuVar4 + -0x30);
  uVar29 = *(undefined8 *)((long)pppppuVar4 + -0x28);
  unaff_x24 = *(undefined8 *)((long)pppppuVar4 + -0x40);
  unaff_x23 = *(undefined8 *)((long)pppppuVar4 + -0x38);
System_String__CreateTrimmedString:
  auVar36._8_8_ = uVar10;
  auVar36._0_8_ = uVar16;
  *(undefined8 *)((long)pppppuVar4 + -0x30) = uVar15;
  *(undefined8 *)((long)pppppuVar4 + -0x28) = uVar29;
  *(undefined8 *)((long)pppppuVar4 + -0x20) = uVar17;
  *(undefined8 *)((long)pppppuVar4 + -0x18) = uVar27;
  *(undefined8 *)((long)pppppuVar4 + -0x10) = uVar13;
  *(undefined8 *)((long)pppppuVar4 + -8) = uVar18;
  if ((bRam0000000003eb9461 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9461 = 1;
  }
  uVar21 = (uVar21 - (int)uVar10) + 1;
  if (uVar21 != *(uint *)(uVar16 + 0x10)) {
    if (uVar21 != 0) {
      uVar13 = *(undefined8 *)((long)pppppuVar4 + -0x10);
      uVar18 = *(undefined8 *)((long)pppppuVar4 + -8);
      uVar17 = *(undefined8 *)((long)pppppuVar4 + -0x20);
      uVar11 = *(ulong *)((long)pppppuVar4 + -0x18);
      uVar15 = *(undefined8 *)((long)pppppuVar4 + -0x30);
      uVar27 = *(undefined8 *)((long)pppppuVar4 + -0x28);
      goto System_String__InternalSubString;
    }
    uVar16 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  return uVar16;
}



// ============================================================
// RVA: 0x1648588 | Core.Input.InputGlyphBehaviour.remove_OnBoundInputPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x016486d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016486e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016488d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016486ec) */
/* WARNING: Removing unreachable block (ram,0x016486fc) */
/* WARNING: Removing unreachable block (ram,0x01648704) */
/* WARNING: Removing unreachable block (ram,0x01648708) */
/* WARNING: Removing unreachable block (ram,0x01648720) */
/* WARNING: Removing unreachable block (ram,0x01648728) */
/* WARNING: Removing unreachable block (ram,0x0164872c) */
/* WARNING: Removing unreachable block (ram,0x0164873c) */
/* WARNING: Removing unreachable block (ram,0x01648748) */
/* WARNING: Removing unreachable block (ram,0x01648750) */
/* WARNING: Removing unreachable block (ram,0x01648754) */
/* WARNING: Removing unreachable block (ram,0x01648760) */
/* WARNING: Removing unreachable block (ram,0x01648770) */
/* WARNING: Removing unreachable block (ram,0x01648778) */
/* WARNING: Removing unreachable block (ram,0x0164877c) */
/* WARNING: Removing unreachable block (ram,0x0164878c) */
/* WARNING: Removing unreachable block (ram,0x01648798) */
/* WARNING: Removing unreachable block (ram,0x016487a0) */
/* WARNING: Removing unreachable block (ram,0x016487a4) */
/* WARNING: Removing unreachable block (ram,0x016487b0) */
/* WARNING: Removing unreachable block (ram,0x016487b8) */
/* WARNING: Removing unreachable block (ram,0x016487d8) */
/* WARNING: Removing unreachable block (ram,0x016487ec) */
/* WARNING: Removing unreachable block (ram,0x016487f4) */
/* WARNING: Removing unreachable block (ram,0x016488f8) */
/* WARNING: Removing unreachable block (ram,0x016488fc) */
/* WARNING: Removing unreachable block (ram,0x01648918) */
/* WARNING: Removing unreachable block (ram,0x01648920) */
/* WARNING: Removing unreachable block (ram,0x01648944) */
/* WARNING: Removing unreachable block (ram,0x01648950) */
/* WARNING: Removing unreachable block (ram,0x01648800) */
/* WARNING: Removing unreachable block (ram,0x01648838) */
/* WARNING: Removing unreachable block (ram,0x016488b0) */
/* WARNING: Removing unreachable block (ram,0x016488c4) */
/* WARNING: Removing unreachable block (ram,0x01648848) */
/* WARNING: Removing unreachable block (ram,0x016488f0) */
/* WARNING: Removing unreachable block (ram,0x0164885c) */
/* WARNING: Removing unreachable block (ram,0x01648880) */
/* WARNING: Removing unreachable block (ram,0x01648884) */
/* WARNING: Removing unreachable block (ram,0x016488a8) */
/* WARNING: Removing unreachable block (ram,0x016486d8) */
/* WARNING: Removing unreachable block (ram,0x016488d4) */

ulong Core_Input_InputGlyphBehaviour__remove_OnBoundInputPressed(long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 ****ppppuVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
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
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 unaff_x23;
  code *pcVar30;
  undefined8 unaff_x24;
  long *plVar31;
  undefined1 ***pppuVar32;
  undefined1 *puVar33;
  undefined *puVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  long lStack_148;
  undefined *puStack_d8;
  undefined1 ***pppuStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb5773 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb5773 = 1;
  }
  uVar11 = *(ulong *)(param_1 + 0x40);
  while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar11,param_2,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar10 = func_0x00ff0f44((ulong *)(param_1 + 0x40),plVar9,uVar11);
    bVar5 = uVar11 == uVar10;
    uVar11 = uVar10;
    if (bVar5) {
      return uVar10;
    }
  }
  uVar11 = func_0x00f78e5c(plVar9);
  puStack_38 = &Core_Input_InputGlyphBehaviour__Start;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5774 & 1) == 0) {
    func_0x00f78a20(0x3d32768);
    func_0x00f78a20(0x3d32770);
    func_0x00f78a20(0x3d32778);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22880);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3fb20);
    bRam0000000003eb5774 = 1;
  }
  uVar13 = 0x3d23990;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  /*Core.Input.InputManager$$RegisterListener*/ func_0x01648164(uVar11);
  pppuStack_d0 = (undefined1 ***)0x3d23990;
  puStack_c8 = (undefined *)0x3d216c0;
  uStack_c0 = 0x3eb5000;
  puStack_a8 = &UNK_016486d8;
  pppuVar32 = &ppuStack_b0;
  uStack_b8 = uVar11;
  ppuStack_b0 = &puStack_40;
  if ((bRam0000000003eb5783 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d3ac00);
    bRam0000000003eb5783 = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (uVar10 = *(ulong *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x60), uVar10 == 0)) {
    lVar24 = func_0x00f78af4();
    puStack_d8 = &Core_Input_InputGlyphBehaviour__GetLastInputPathComponent;
    if (lVar24 != 0) {
      iVar7 = /*System.String$$LastIndexOf*/ func_0x029ce0f0(lVar24,0x2f,0);
      auVar35._8_4_ = iVar7 + 1;
      auVar35._0_8_ = lVar24;
      auVar35._12_4_ = 0;
      uVar17 = 0x3eb5000;
      ppppuVar4 = &pppuStack_d0;
      uVar15 = 0x3d22848;
      do {
        uVar18 = auVar35._8_8_;
        uVar10 = auVar35._0_8_;
        iVar7 = auVar35._8_4_;
        uVar21 = *(int *)(uVar10 + 0x10) - iVar7;
        *(undefined8 *)((long)ppppuVar4 + -0x30) = uVar13;
        *(undefined8 *)((long)ppppuVar4 + -0x28) = uVar15;
        *(undefined8 *)((long)ppppuVar4 + -0x20) = uVar17;
        *(ulong *)((long)ppppuVar4 + -0x18) = uVar11;
        *(undefined1 ****)((long)ppppuVar4 + -0x10) = pppuVar32;
        *(undefined **)((long)ppppuVar4 + -8) = puStack_d8;
        pppuVar32 = (undefined1 ***)((long)ppppuVar4 + -0x10);
        uVar13 = 0x3eb9000;
        if ((bRam0000000003eb944b & 1) == 0) {
          func_0x00f78a20(0x3d24dd0);
          bRam0000000003eb944b = 1;
        }
        if (iVar7 < 0) {
          uVar17 = 0x3d72d20;
code_r0x029cbcb4:
          uVar17 = func_0x00f78a24(uVar17);
          uVar11 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar17,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar17 = func_0x00f78aec();
          uVar15 = 0x3d7b9d0;
        }
        else {
          uVar8 = *(uint *)(uVar10 + 0x10);
          if ((int)uVar8 < iVar7) {
            uVar17 = 0x3d7b9e8;
            goto code_r0x029cbcb4;
          }
          if ((int)uVar21 < 0) {
            uVar17 = 0x3d6f480;
          }
          else {
            if (iVar7 <= (int)(uVar8 - uVar21)) goto code_r0x029cbc4c;
            uVar17 = 0x3d6ddc8;
          }
          uVar17 = func_0x00f78a24(uVar17);
          uVar11 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar17,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar17 = func_0x00f78aec();
          uVar15 = 0x3d7a280;
        }
        uVar15 = func_0x00f78a24(uVar15);
        /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar17,uVar15,uVar11,0);
        uVar15 = func_0x00f78a24(0x3d5dbb0);
        puStack_d8 = &System_String__Substring;
        auVar35 = func_0x00f78ac0(uVar17,uVar15);
        ppppuVar4 = (undefined1 ****)((long)ppppuVar4 + -0x30);
        uVar15 = uVar18;
      } while( true );
    }
    plVar9 = (long *)func_0x00f78af4();
    if ((bRam0000000003eb5789 & 1) == 0) {
      func_0x00f78a20(0x3d22848);
      bRam0000000003eb5789 = 1;
    }
    if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
       (lVar24 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x48), lVar24 == 0)) {
      return 0;
    }
    lStack_148 = lVar24;
    lVar22 = *(long *)(lVar24 + 0x68);
    if (lVar22 == 0) {
      plVar31 = &lStack_148;
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
      iVar7 = func_0x00f78a4c(lVar14);
      bVar5 = *(char *)(lVar14 + 0x4a) == '\x01';
      if (iVar7 == 0) {
        if (bVar5) {
          if (plVar1 == (long *)0x0) {
code_r0x0164a8ac:
            uVar11 = (*pcVar30)(plVar9,lVar14);
          }
          else {
            if (((*(short *)(lVar14 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
               (*(long *)(lVar24 + 0x18) == 0)) goto code_r0x0164a7a4;
            iVar7 = func_0x00f78a44(lVar14);
            iVar6 = func_0x00f78ec0(lVar14);
            if (iVar7 == 0) {
              uVar2 = *(ushort *)(lVar14 + 0x48);
              if (iVar6 == 0) {
                lVar14 = *plVar1 + (ulong)uVar2 * 0x10;
                uVar11 = (**(code **)(lVar14 + 0x138))
                                   (plVar1,plVar9,*(undefined8 *)(lVar14 + 0x140));
                goto code_r0x0164a8b8;
              }
              lVar14 = func_0x00f78a48(lVar14);
              lVar23 = *plVar1;
              uVar11 = (ulong)*(ushort *)(lVar23 + 0x12a);
              if (uVar11 != 0) {
                piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == lVar14) {
                    puVar19 = (undefined8 *)
                              (lVar23 + (long)(int)(*piVar26 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x0164aa44;
                  }
                  piVar26 = piVar26 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              puVar19 = (undefined8 *)func_0x00fac1f0(plVar1,lVar14,(ulong)uVar2);
code_r0x0164aa44:
              pcVar30 = (code *)*puVar19;
              puVar19 = (undefined8 *)puVar19[1];
            }
            else {
              if (iVar6 == 0) {
                uVar13 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar23 = *plVar1;
                uVar11 = (ulong)*(ushort *)(lVar23 + 0x12a);
                if (uVar11 != 0) {
                  piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == *(long *)(lVar14 + 0x18)) {
                      lVar23 = lVar23 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar14 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0164aa1c;
                    }
                    piVar26 = piVar26 + 4;
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                lVar23 = func_0x00fac1f0(plVar1);
code_r0x0164aa1c:
                uVar13 = *(undefined8 *)(lVar23 + 8);
              }
              puVar19 = (undefined8 *)func_0x00f78acc(uVar13,lVar14);
              pcVar30 = (code *)*puVar19;
            }
            uVar11 = (*pcVar30)(plVar1,plVar9,puVar19);
          }
        }
        else {
          if ((*(short *)(lVar14 + 0x48) == -1) || (*(long *)(lVar24 + 0x18) == 0))
          goto code_r0x0164a8ac;
          iVar7 = func_0x00f78a44(lVar14);
          iVar6 = func_0x00f78ec0(lVar14);
          if (iVar7 == 0) {
            uVar2 = *(ushort *)(lVar14 + 0x48);
            if (iVar6 == 0) {
              lVar14 = *plVar9 + (ulong)uVar2 * 0x10;
              uVar11 = (**(code **)(lVar14 + 0x138))(plVar9,*(undefined8 *)(lVar14 + 0x140));
              goto code_r0x0164a8b8;
            }
            lVar14 = func_0x00f78a48(lVar14);
            lVar23 = *plVar9;
            uVar11 = (ulong)*(ushort *)(lVar23 + 0x12a);
            if (uVar11 != 0) {
              piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              do {
                if (*(long *)(piVar26 + -2) == lVar14) {
                  puVar19 = (undefined8 *)
                            (lVar23 + (long)(int)(*piVar26 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x0164a9e0;
                }
                piVar26 = piVar26 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar19 = (undefined8 *)func_0x00fac1f0(plVar9,lVar14,(ulong)uVar2);
code_r0x0164a9e0:
            pcVar30 = (code *)*puVar19;
            puVar19 = (undefined8 *)puVar19[1];
          }
          else {
            if (iVar6 == 0) {
              uVar13 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar23 = *plVar9;
              uVar11 = (ulong)*(ushort *)(lVar23 + 0x12a);
              if (uVar11 != 0) {
                piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar26 + -2) == *(long *)(lVar14 + 0x18)) {
                    lVar23 = lVar23 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar14 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x0164a9b8;
                  }
                  piVar26 = piVar26 + 4;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              lVar23 = func_0x00fac1f0(plVar9);
code_r0x0164a9b8:
              uVar13 = *(undefined8 *)(lVar23 + 8);
            }
            puVar19 = (undefined8 *)func_0x00f78acc(uVar13,lVar14);
            pcVar30 = (code *)*puVar19;
          }
          uVar11 = (*pcVar30)(plVar9,puVar19);
        }
      }
      else {
        if (bVar5) goto code_r0x0164a8ac;
code_r0x0164a7a4:
        uVar11 = (*pcVar30)(plVar1,plVar9,lVar14);
      }
code_r0x0164a8b8:
      lVar22 = lVar22 + 1;
      if (lVar22 == lVar29) {
        return uVar11;
      }
    } while( true );
  }
  lVar24 = *(long *)(uVar10 + 0x10);
  puVar19 = puRam0000000003d3ac00;
  uVar16 = uStack_b8;
  uVar20 = uStack_c0;
  if (lVar24 == 0) {
code_r0x0242716c:
    uVar11 = uVar20;
    uVar10 = uVar16;
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
    uVar16 = uVar10;
    uVar20 = uVar11;
    if (lVar24 == 0) goto code_r0x0242716c;
  }
  if (uVar21 < *(uint *)(lVar24 + 0x18)) {
    *(ulong *)(lVar24 + (long)(int)uVar21 * 8 + 0x20) = uVar11;
    *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
    return uVar12;
  }
  uVar13 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar13,0);
  lVar22 = auVar35._8_8_;
  lVar24 = auVar35._0_8_;
  puStack_c8 = &System_Collections_Generic_List_object___System_Collections_IList_Add;
  pppuStack_d0 = &ppuStack_b0;
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
  iVar7 = (*(code *)**(undefined8 **)(*(long *)(puVar19[3] + 0xc0) + 0x68))(lVar24);
  return (ulong)(iVar7 - 1);
code_r0x029cc070:
  uVar17 = func_0x00f78b24();
  func_0x00f78ac0(uVar17,0);
  unaff_x23 = uVar13;
code_r0x029cc07c:
  auVar35._8_8_ = lVar24;
  auVar35._0_8_ = uVar10;
  puVar34 = &System_String__TrimStart;
  auVar36 = func_0x00f78af4();
  uVar16 = auVar36._0_8_;
  if ((auVar36._8_8_ == 0) || (*(long *)(auVar36._8_8_ + 0x18) == 0)) goto code_r0x029cc094;
  uVar13 = 0;
  ppppuVar4 = (undefined1 ****)((long)ppppuVar4 + -0x40);
  uVar11 = uVar12;
  auVar3 = auVar36;
  goto System_String__TrimHelper;
code_r0x029cbc4c:
  if (uVar21 == 0) {
    uVar10 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else if ((iVar7 != 0) || (uVar8 != uVar21)) {
    uVar13 = *(undefined8 *)((long)ppppuVar4 + -0x10);
    uVar18 = *(undefined8 *)((long)ppppuVar4 + -8);
    uVar17 = *(undefined8 *)((long)ppppuVar4 + -0x20);
    uVar11 = *(ulong *)((long)ppppuVar4 + -0x18);
    uVar15 = *(undefined8 *)((long)ppppuVar4 + -0x30);
    uVar27 = *(undefined8 *)((long)ppppuVar4 + -0x28);
System_String__InternalSubString:
    auVar3._8_8_ = auVar35._8_8_;
    auVar3._0_8_ = uVar11;
    uVar10 = auVar35._0_8_;
    uVar20 = (ulong)uVar21;
    *(undefined8 *)((long)ppppuVar4 + -0x30) = uVar15;
    *(undefined8 *)((long)ppppuVar4 + -0x28) = uVar27;
    *(undefined8 *)((long)ppppuVar4 + -0x20) = uVar17;
    *(ulong *)((long)ppppuVar4 + -0x18) = uVar11;
    *(undefined8 *)((long)ppppuVar4 + -0x10) = uVar13;
    *(undefined8 *)((long)ppppuVar4 + -8) = uVar18;
    puVar33 = (undefined1 *)((long)ppppuVar4 + -0x10);
    uVar16 = func_0x00f834ac(uVar20);
    if (uVar16 != 0) {
      /*System.Buffer$$Memcpy*/ func_0x029426bc(uVar16 + 0x14,uVar10 + (long)auVar35._8_4_ * 2 + 0x14,uVar21 << 1,0);
      return uVar16;
    }
    puVar34 = &System_String__Trim;
    auVar36 = func_0x00f78af4();
    uVar16 = auVar36._0_8_;
    if ((auVar36._8_8_ != 0) && (*(long *)(auVar36._8_8_ + 0x18) != 0)) {
      uVar13 = 2;
      ppppuVar4 = (undefined1 ****)((long)ppppuVar4 + -0x30);
      auVar3 = auVar36;
System_String__TrimHelper:
      lVar24 = auVar3._8_8_;
      uVar12 = auVar3._0_8_;
      *(undefined8 *)((long)ppppuVar4 + -0x40) = unaff_x24;
      *(undefined8 *)((long)ppppuVar4 + -0x38) = unaff_x23;
      *(undefined1 (*) [16])((long)ppppuVar4 + -0x30) = auVar35;
      *(ulong *)((long)ppppuVar4 + -0x20) = uVar20;
      *(ulong *)((long)ppppuVar4 + -0x18) = uVar11;
      *(undefined1 **)((long)ppppuVar4 + -0x10) = puVar33;
      *(undefined **)((long)ppppuVar4 + -8) = puVar34;
      puVar33 = (undefined1 *)((long)ppppuVar4 + -0x10);
      uVar21 = *(uint *)(uVar12 + 0x10);
      uVar20 = (ulong)uVar21;
      if ((int)uVar13 == 1) {
        uVar10 = 0;
        uVar13 = unaff_x23;
code_r0x029cbfd8:
        do {
          uVar21 = (int)uVar20 - 1;
          uVar20 = (ulong)uVar21;
          if ((int)uVar21 < (int)uVar10) break;
          uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(uVar12,uVar20);
          unaff_x23 = uVar13;
          if (lVar24 == 0) goto code_r0x029cc07c;
          iVar7 = *(int *)(lVar24 + 0x18);
          if (iVar7 < 1) {
            iVar6 = 0;
          }
          else {
            iVar25 = 0;
            do {
              if (iVar7 == iVar25) goto code_r0x029cc070;
              iVar6 = iVar25;
            } while ((*(ushort *)(lVar24 + (long)iVar25 * 2 + 0x20) != uVar8) &&
                    (iVar25 = iVar25 + 1, iVar6 = iVar7, iVar7 != iVar25));
          }
        } while (iVar6 != iVar7);
      }
      else {
        if ((int)uVar21 < 1) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          do {
            uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(uVar12,uVar10);
            unaff_x23 = uVar13;
            if (lVar24 == 0) goto code_r0x029cc07c;
            iVar7 = *(int *)(lVar24 + 0x18);
            if (iVar7 < 1) {
              iVar6 = 0;
            }
            else {
              iVar25 = 0;
              do {
                if (iVar7 == iVar25) goto code_r0x029cc070;
                iVar6 = iVar25;
              } while ((*(ushort *)(lVar24 + (long)iVar25 * 2 + 0x20) != uVar8) &&
                      (iVar25 = iVar25 + 1, iVar6 = iVar7, iVar7 != iVar25));
            }
          } while ((iVar6 != iVar7) &&
                  (uVar8 = (int)uVar10 + 1, uVar10 = (ulong)uVar8,
                  (int)uVar8 < *(int *)(uVar12 + 0x10)));
        }
        if ((int)uVar13 != 0) {
          uVar20 = (ulong)*(uint *)(uVar12 + 0x10);
          goto code_r0x029cbfd8;
        }
        uVar21 = uVar21 - 1;
      }
      uVar13 = *(undefined8 *)((long)ppppuVar4 + -0x10);
      uVar18 = *(undefined8 *)((long)ppppuVar4 + -8);
      uVar17 = *(undefined8 *)((long)ppppuVar4 + -0x20);
      uVar27 = *(undefined8 *)((long)ppppuVar4 + -0x18);
      uVar15 = *(undefined8 *)((long)ppppuVar4 + -0x30);
      uVar28 = *(undefined8 *)((long)ppppuVar4 + -0x28);
      unaff_x24 = *(undefined8 *)((long)ppppuVar4 + -0x40);
      unaff_x23 = *(undefined8 *)((long)ppppuVar4 + -0x38);
      uVar16 = uVar12;
      goto System_String__CreateTrimmedString;
    }
    iVar7 = 2;
    ppppuVar4 = (undefined1 ****)((long)ppppuVar4 + -0x30);
    goto System_String__TrimHelper;
  }
  return uVar10;
code_r0x029cc094:
  iVar7 = 0;
  ppppuVar4 = (undefined1 ****)((long)ppppuVar4 + -0x40);
System_String__TrimHelper:
  *(undefined8 *)((long)ppppuVar4 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppppuVar4 + -0x38) = unaff_x23;
  *(ulong *)((long)ppppuVar4 + -0x30) = uVar10;
  *(long *)((long)ppppuVar4 + -0x28) = auVar3._8_8_;
  *(ulong *)((long)ppppuVar4 + -0x20) = uVar20;
  *(long *)((long)ppppuVar4 + -0x18) = auVar3._0_8_;
  *(undefined1 **)((long)ppppuVar4 + -0x10) = puVar33;
  *(undefined **)((long)ppppuVar4 + -8) = puVar34;
  if ((bRam0000000003eb9460 & 1) == 0) {
    func_0x00f78a20(0x3d20620);
    bRam0000000003eb9460 = 1;
  }
  uVar21 = *(uint *)(uVar16 + 0x10);
  if (iVar7 == 1) {
    uVar10 = 0;
  }
  else {
    if ((int)uVar21 < 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        uVar13 = /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar10);
        if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar13,0);
        if ((uVar11 & 1) == 0) {
          /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar10);
          break;
        }
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar8;
      } while ((int)uVar8 < *(int *)(uVar16 + 0x10));
    }
    if (iVar7 == 0) {
      uVar21 = uVar21 - 1;
      goto code_r0x029cbf04;
    }
    uVar21 = *(uint *)(uVar16 + 0x10);
  }
  do {
    uVar21 = uVar21 - 1;
    if ((int)uVar21 < (int)uVar10) goto code_r0x029cbf04;
    uVar13 = /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar21);
    if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar13,0);
  } while ((uVar11 & 1) != 0);
  /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar10);
code_r0x029cbf04:
  uVar13 = *(undefined8 *)((long)ppppuVar4 + -0x10);
  uVar18 = *(undefined8 *)((long)ppppuVar4 + -8);
  uVar17 = *(undefined8 *)((long)ppppuVar4 + -0x20);
  uVar27 = *(undefined8 *)((long)ppppuVar4 + -0x18);
  uVar15 = *(undefined8 *)((long)ppppuVar4 + -0x30);
  uVar28 = *(undefined8 *)((long)ppppuVar4 + -0x28);
  unaff_x24 = *(undefined8 *)((long)ppppuVar4 + -0x40);
  unaff_x23 = *(undefined8 *)((long)ppppuVar4 + -0x38);
System_String__CreateTrimmedString:
  auVar35._8_8_ = uVar10;
  auVar35._0_8_ = uVar16;
  *(undefined8 *)((long)ppppuVar4 + -0x30) = uVar15;
  *(undefined8 *)((long)ppppuVar4 + -0x28) = uVar28;
  *(undefined8 *)((long)ppppuVar4 + -0x20) = uVar17;
  *(undefined8 *)((long)ppppuVar4 + -0x18) = uVar27;
  *(undefined8 *)((long)ppppuVar4 + -0x10) = uVar13;
  *(undefined8 *)((long)ppppuVar4 + -8) = uVar18;
  if ((bRam0000000003eb9461 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9461 = 1;
  }
  uVar21 = (uVar21 - (int)uVar10) + 1;
  if (uVar21 != *(uint *)(uVar16 + 0x10)) {
    if (uVar21 != 0) {
      uVar13 = *(undefined8 *)((long)ppppuVar4 + -0x10);
      uVar18 = *(undefined8 *)((long)ppppuVar4 + -8);
      uVar17 = *(undefined8 *)((long)ppppuVar4 + -0x20);
      uVar11 = *(ulong *)((long)ppppuVar4 + -0x18);
      uVar15 = *(undefined8 *)((long)ppppuVar4 + -0x30);
      uVar27 = *(undefined8 *)((long)ppppuVar4 + -0x28);
      goto System_String__InternalSubString;
    }
    uVar16 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  return uVar16;
}



// ============================================================
// RVA: 0x1648628 | Core.Input.InputGlyphBehaviour.Start
// ============================================================

/* WARNING: Possible PIC construction at 0x016486d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016486e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016488d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016486ec) */
/* WARNING: Removing unreachable block (ram,0x016486fc) */
/* WARNING: Removing unreachable block (ram,0x01648704) */
/* WARNING: Removing unreachable block (ram,0x01648708) */
/* WARNING: Removing unreachable block (ram,0x01648720) */
/* WARNING: Removing unreachable block (ram,0x01648728) */
/* WARNING: Removing unreachable block (ram,0x0164872c) */
/* WARNING: Removing unreachable block (ram,0x0164873c) */
/* WARNING: Removing unreachable block (ram,0x01648748) */
/* WARNING: Removing unreachable block (ram,0x01648750) */
/* WARNING: Removing unreachable block (ram,0x01648754) */
/* WARNING: Removing unreachable block (ram,0x01648760) */
/* WARNING: Removing unreachable block (ram,0x01648770) */
/* WARNING: Removing unreachable block (ram,0x01648778) */
/* WARNING: Removing unreachable block (ram,0x0164877c) */
/* WARNING: Removing unreachable block (ram,0x0164878c) */
/* WARNING: Removing unreachable block (ram,0x01648798) */
/* WARNING: Removing unreachable block (ram,0x016487a0) */
/* WARNING: Removing unreachable block (ram,0x016487a4) */
/* WARNING: Removing unreachable block (ram,0x016487b0) */
/* WARNING: Removing unreachable block (ram,0x016487b8) */
/* WARNING: Removing unreachable block (ram,0x016487d8) */
/* WARNING: Removing unreachable block (ram,0x016487ec) */
/* WARNING: Removing unreachable block (ram,0x016487f4) */
/* WARNING: Removing unreachable block (ram,0x016488f8) */
/* WARNING: Removing unreachable block (ram,0x016488fc) */
/* WARNING: Removing unreachable block (ram,0x01648918) */
/* WARNING: Removing unreachable block (ram,0x01648920) */
/* WARNING: Removing unreachable block (ram,0x01648944) */
/* WARNING: Removing unreachable block (ram,0x01648950) */
/* WARNING: Removing unreachable block (ram,0x01648800) */
/* WARNING: Removing unreachable block (ram,0x01648838) */
/* WARNING: Removing unreachable block (ram,0x016488b0) */
/* WARNING: Removing unreachable block (ram,0x016488c4) */
/* WARNING: Removing unreachable block (ram,0x01648848) */
/* WARNING: Removing unreachable block (ram,0x016488f0) */
/* WARNING: Removing unreachable block (ram,0x0164885c) */
/* WARNING: Removing unreachable block (ram,0x01648880) */
/* WARNING: Removing unreachable block (ram,0x01648884) */
/* WARNING: Removing unreachable block (ram,0x016488a8) */
/* WARNING: Removing unreachable block (ram,0x016486d8) */
/* WARNING: Removing unreachable block (ram,0x016488d4) */

ulong Core_Input_InputGlyphBehaviour__Start(ulong param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 ***pppuVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  uint extraout_w8;
  uint uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long extraout_x9;
  int iVar24;
  int *piVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  ulong uVar29;
  undefined8 unaff_x23;
  code *pcVar30;
  undefined8 unaff_x24;
  long *plVar31;
  undefined1 **ppuVar32;
  undefined1 *puVar33;
  undefined *puVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  long lStack_118;
  undefined *puStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb5774 & 1) == 0) {
    func_0x00f78a20(0x3d32768);
    func_0x00f78a20(0x3d32770);
    func_0x00f78a20(0x3d32778);
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22880);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3fb20);
    bRam0000000003eb5774 = 1;
  }
  uVar12 = 0x3d23990;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  /*Core.Input.InputManager$$RegisterListener*/ func_0x01648164(param_1);
  ppuStack_a0 = (undefined1 **)0x3d23990;
  puStack_98 = (undefined *)0x3d216c0;
  uStack_90 = 0x3eb5000;
  uStack_78 = 0x16486d8;
  ppuVar32 = &puStack_80;
  uStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5783 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d3ac00);
    bRam0000000003eb5783 = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (uVar9 = *(ulong *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x60), uVar9 == 0)) {
    lVar23 = func_0x00f78af4();
    puStack_a8 = &Core_Input_InputGlyphBehaviour__GetLastInputPathComponent;
    if (lVar23 != 0) {
      iVar7 = /*System.String$$LastIndexOf*/ func_0x029ce0f0(lVar23,0x2f,0);
      auVar35._8_4_ = iVar7 + 1;
      auVar35._0_8_ = lVar23;
      auVar35._12_4_ = 0;
      uVar17 = 0x3eb5000;
      pppuVar4 = &ppuStack_a0;
      uVar14 = 0x3d22848;
      do {
        uVar18 = auVar35._8_8_;
        uVar9 = auVar35._0_8_;
        iVar7 = auVar35._8_4_;
        uVar20 = *(int *)(uVar9 + 0x10) - iVar7;
        *(undefined8 *)((long)pppuVar4 + -0x30) = uVar12;
        *(undefined8 *)((long)pppuVar4 + -0x28) = uVar14;
        *(undefined8 *)((long)pppuVar4 + -0x20) = uVar17;
        *(ulong *)((long)pppuVar4 + -0x18) = param_1;
        *(undefined1 ***)((long)pppuVar4 + -0x10) = ppuVar32;
        *(undefined **)((long)pppuVar4 + -8) = puStack_a8;
        ppuVar32 = (undefined1 **)((long)pppuVar4 + -0x10);
        uVar12 = 0x3eb9000;
        if ((bRam0000000003eb944b & 1) == 0) {
          func_0x00f78a20(0x3d24dd0);
          bRam0000000003eb944b = 1;
        }
        if (iVar7 < 0) {
          uVar17 = 0x3d72d20;
code_r0x029cbcb4:
          uVar17 = func_0x00f78a24(uVar17);
          param_1 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar17,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar17 = func_0x00f78aec();
          uVar14 = 0x3d7b9d0;
        }
        else {
          uVar8 = *(uint *)(uVar9 + 0x10);
          if ((int)uVar8 < iVar7) {
            uVar17 = 0x3d7b9e8;
            goto code_r0x029cbcb4;
          }
          if ((int)uVar20 < 0) {
            uVar17 = 0x3d6f480;
          }
          else {
            if (iVar7 <= (int)(uVar8 - uVar20)) goto code_r0x029cbc4c;
            uVar17 = 0x3d6ddc8;
          }
          uVar17 = func_0x00f78a24(uVar17);
          param_1 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar17,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar17 = func_0x00f78aec();
          uVar14 = 0x3d7a280;
        }
        uVar14 = func_0x00f78a24(uVar14);
        /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar17,uVar14,param_1,0);
        uVar14 = func_0x00f78a24(0x3d5dbb0);
        puStack_a8 = &System_String__Substring;
        auVar35 = func_0x00f78ac0(uVar17,uVar14);
        pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x30);
        uVar14 = uVar18;
      } while( true );
    }
    plVar10 = (long *)func_0x00f78af4();
    if ((bRam0000000003eb5789 & 1) == 0) {
      func_0x00f78a20(0x3d22848);
      bRam0000000003eb5789 = 1;
    }
    if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
       (lVar23 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x48), lVar23 == 0)) {
      return 0;
    }
    lStack_118 = lVar23;
    lVar21 = *(long *)(lVar23 + 0x68);
    if (lVar21 == 0) {
      plVar31 = &lStack_118;
      lVar28 = 1;
    }
    else {
      lVar28 = *(long *)(lVar21 + 0x18);
      if (lVar28 == 0) {
        return 0;
      }
      plVar31 = (long *)(lVar21 + 0x20);
    }
    lVar21 = 0;
    do {
      lVar13 = plVar31[lVar21];
      pcVar30 = *(code **)(lVar13 + 0x10);
      plVar1 = *(long **)(lVar13 + 0x20);
      lVar13 = *(long *)(lVar13 + 0x28);
      if (*(short *)(lVar13 + 0x48) == -1) {
        func_0x00f78ad8(lVar13);
      }
      iVar7 = func_0x00f78a4c(lVar13);
      bVar5 = *(char *)(lVar13 + 0x4a) == '\x01';
      if (iVar7 == 0) {
        if (bVar5) {
          if (plVar1 == (long *)0x0) {
code_r0x0164a8ac:
            uVar9 = (*pcVar30)(plVar10,lVar13);
          }
          else {
            if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
               (*(long *)(lVar23 + 0x18) == 0)) goto code_r0x0164a7a4;
            iVar7 = func_0x00f78a44(lVar13);
            iVar6 = func_0x00f78ec0(lVar13);
            if (iVar7 == 0) {
              uVar2 = *(ushort *)(lVar13 + 0x48);
              if (iVar6 == 0) {
                lVar13 = *plVar1 + (ulong)uVar2 * 0x10;
                uVar9 = (**(code **)(lVar13 + 0x138))
                                  (plVar1,plVar10,*(undefined8 *)(lVar13 + 0x140));
                goto code_r0x0164a8b8;
              }
              lVar13 = func_0x00f78a48(lVar13);
              lVar22 = *plVar1;
              uVar9 = (ulong)*(ushort *)(lVar22 + 0x12a);
              if (uVar9 != 0) {
                piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == lVar13) {
                    puVar19 = (undefined8 *)
                              (lVar22 + (long)(int)(*piVar25 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x0164aa44;
                  }
                  piVar25 = piVar25 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar19 = (undefined8 *)func_0x00fac1f0(plVar1,lVar13,(ulong)uVar2);
code_r0x0164aa44:
              pcVar30 = (code *)*puVar19;
              puVar19 = (undefined8 *)puVar19[1];
            }
            else {
              if (iVar6 == 0) {
                uVar12 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar22 = *plVar1;
                uVar9 = (ulong)*(ushort *)(lVar22 + 0x12a);
                if (uVar9 != 0) {
                  piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == *(long *)(lVar13 + 0x18)) {
                      lVar22 = lVar22 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0164aa1c;
                    }
                    piVar25 = piVar25 + 4;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                lVar22 = func_0x00fac1f0(plVar1);
code_r0x0164aa1c:
                uVar12 = *(undefined8 *)(lVar22 + 8);
              }
              puVar19 = (undefined8 *)func_0x00f78acc(uVar12,lVar13);
              pcVar30 = (code *)*puVar19;
            }
            uVar9 = (*pcVar30)(plVar1,plVar10,puVar19);
          }
        }
        else {
          if ((*(short *)(lVar13 + 0x48) == -1) || (*(long *)(lVar23 + 0x18) == 0))
          goto code_r0x0164a8ac;
          iVar7 = func_0x00f78a44(lVar13);
          iVar6 = func_0x00f78ec0(lVar13);
          if (iVar7 == 0) {
            uVar2 = *(ushort *)(lVar13 + 0x48);
            if (iVar6 == 0) {
              lVar13 = *plVar10 + (ulong)uVar2 * 0x10;
              uVar9 = (**(code **)(lVar13 + 0x138))(plVar10,*(undefined8 *)(lVar13 + 0x140));
              goto code_r0x0164a8b8;
            }
            lVar13 = func_0x00f78a48(lVar13);
            lVar22 = *plVar10;
            uVar9 = (ulong)*(ushort *)(lVar22 + 0x12a);
            if (uVar9 != 0) {
              piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == lVar13) {
                  puVar19 = (undefined8 *)
                            (lVar22 + (long)(int)(*piVar25 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x0164a9e0;
                }
                piVar25 = piVar25 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            puVar19 = (undefined8 *)func_0x00fac1f0(plVar10,lVar13,(ulong)uVar2);
code_r0x0164a9e0:
            pcVar30 = (code *)*puVar19;
            puVar19 = (undefined8 *)puVar19[1];
          }
          else {
            if (iVar6 == 0) {
              uVar12 = *(undefined8 *)(*plVar10 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar22 = *plVar10;
              uVar9 = (ulong)*(ushort *)(lVar22 + 0x12a);
              if (uVar9 != 0) {
                piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar25 + -2) == *(long *)(lVar13 + 0x18)) {
                    lVar22 = lVar22 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x0164a9b8;
                  }
                  piVar25 = piVar25 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              lVar22 = func_0x00fac1f0(plVar10);
code_r0x0164a9b8:
              uVar12 = *(undefined8 *)(lVar22 + 8);
            }
            puVar19 = (undefined8 *)func_0x00f78acc(uVar12,lVar13);
            pcVar30 = (code *)*puVar19;
          }
          uVar9 = (*pcVar30)(plVar10,puVar19);
        }
      }
      else {
        if (bVar5) goto code_r0x0164a8ac;
code_r0x0164a7a4:
        uVar9 = (*pcVar30)(plVar1,plVar10,lVar13);
      }
code_r0x0164a8b8:
      lVar21 = lVar21 + 1;
      if (lVar21 == lVar28) {
        return uVar9;
      }
    } while( true );
  }
  lVar23 = *(long *)(uVar9 + 0x10);
  puVar19 = puRam0000000003d3ac00;
  uVar29 = uStack_88;
  uVar15 = uStack_90;
  if (lVar23 == 0) {
code_r0x0242716c:
    param_1 = uVar15;
    uVar9 = uVar29;
    uVar11 = func_0x00f78af4();
    lVar23 = extraout_x9;
    uVar20 = extraout_w8;
code_r0x02427170:
    *(uint *)(uVar9 + 0x18) = uVar20 + 1;
  }
  else {
    uVar20 = *(uint *)(uVar9 + 0x18);
    uVar11 = uVar9;
    if (uVar20 != *(uint *)(lVar23 + 0x18)) goto code_r0x02427170;
    puVar19 = *(undefined8 **)(*(long *)(puRam0000000003d3ac00[3] + 0xc0) + 0x60);
    uVar11 = (*(code *)*puVar19)(uVar9,uVar20 + 1);
    lVar23 = *(long *)(uVar9 + 0x10);
    uVar20 = *(uint *)(uVar9 + 0x18);
    *(uint *)(uVar9 + 0x18) = uVar20 + 1;
    uVar29 = uVar9;
    uVar15 = param_1;
    if (lVar23 == 0) goto code_r0x0242716c;
  }
  if (uVar20 < *(uint *)(lVar23 + 0x18)) {
    *(ulong *)(lVar23 + (long)(int)uVar20 * 8 + 0x20) = param_1;
    *(int *)(uVar9 + 0x1c) = *(int *)(uVar9 + 0x1c) + 1;
    return uVar11;
  }
  uVar12 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar12,0);
  lVar21 = auVar35._8_8_;
  lVar23 = auVar35._0_8_;
  puStack_98 = &System_Collections_Generic_List_object___System_Collections_IList_Add;
  ppuStack_a0 = &puStack_80;
  (*(code *)**(undefined8 **)(*(long *)(puVar19[3] + 0xc0) + 0x48))(lVar21,0x14);
  if (lVar23 == 0) {
    func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
    pcVar30 = (code *)SoftwareBreakpoint(1,0x2427350);
    (*pcVar30)();
  }
  pcVar30 = (code *)**(undefined8 **)(*(long *)(puVar19[3] + 0xc0) + 0x28);
  lVar28 = *(long *)(*(long *)(puVar19[3] + 0xc0) + 0x38);
  if ((*(ushort *)(lVar28 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar28);
  }
  if (lVar21 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = func_0x00f78adc(lVar21,lVar28);
    if (lVar13 == 0) {
      func_0x00f78e5c(lVar21,lVar28);
      goto code_r0x0242734c;
    }
  }
  (*pcVar30)(lVar23,lVar13,*(undefined8 *)(*(long *)(puVar19[3] + 0xc0) + 0x28));
  iVar7 = (*(code *)**(undefined8 **)(*(long *)(puVar19[3] + 0xc0) + 0x68))(lVar23);
  return (ulong)(iVar7 - 1);
code_r0x029cc070:
  uVar17 = func_0x00f78b24();
  func_0x00f78ac0(uVar17,0);
  unaff_x23 = uVar12;
code_r0x029cc07c:
  auVar35._8_8_ = lVar23;
  auVar35._0_8_ = uVar29;
  puVar34 = &System_String__TrimStart;
  auVar36 = func_0x00f78af4();
  uVar15 = auVar36._0_8_;
  if ((auVar36._8_8_ == 0) || (*(long *)(auVar36._8_8_ + 0x18) == 0)) goto code_r0x029cc094;
  uVar12 = 0;
  pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x40);
  uVar9 = uVar16;
  auVar3 = auVar36;
  goto System_String__TrimHelper;
code_r0x029cbc4c:
  if (uVar20 == 0) {
    uVar9 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else if ((iVar7 != 0) || (uVar8 != uVar20)) {
    uVar12 = *(undefined8 *)((long)pppuVar4 + -0x10);
    uVar18 = *(undefined8 *)((long)pppuVar4 + -8);
    uVar17 = *(undefined8 *)((long)pppuVar4 + -0x20);
    uVar9 = *(ulong *)((long)pppuVar4 + -0x18);
    uVar14 = *(undefined8 *)((long)pppuVar4 + -0x30);
    uVar26 = *(undefined8 *)((long)pppuVar4 + -0x28);
System_String__InternalSubString:
    auVar3._8_8_ = auVar35._8_8_;
    auVar3._0_8_ = uVar9;
    uVar29 = auVar35._0_8_;
    uVar11 = (ulong)uVar20;
    *(undefined8 *)((long)pppuVar4 + -0x30) = uVar14;
    *(undefined8 *)((long)pppuVar4 + -0x28) = uVar26;
    *(undefined8 *)((long)pppuVar4 + -0x20) = uVar17;
    *(ulong *)((long)pppuVar4 + -0x18) = uVar9;
    *(undefined8 *)((long)pppuVar4 + -0x10) = uVar12;
    *(undefined8 *)((long)pppuVar4 + -8) = uVar18;
    puVar33 = (undefined1 *)((long)pppuVar4 + -0x10);
    uVar15 = func_0x00f834ac(uVar11);
    if (uVar15 != 0) {
      /*System.Buffer$$Memcpy*/ func_0x029426bc(uVar15 + 0x14,uVar29 + (long)auVar35._8_4_ * 2 + 0x14,uVar20 << 1,0);
      return uVar15;
    }
    puVar34 = &System_String__Trim;
    auVar36 = func_0x00f78af4();
    uVar15 = auVar36._0_8_;
    if ((auVar36._8_8_ != 0) && (*(long *)(auVar36._8_8_ + 0x18) != 0)) {
      uVar12 = 2;
      pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x30);
      auVar3 = auVar36;
System_String__TrimHelper:
      lVar23 = auVar3._8_8_;
      uVar16 = auVar3._0_8_;
      *(undefined8 *)((long)pppuVar4 + -0x40) = unaff_x24;
      *(undefined8 *)((long)pppuVar4 + -0x38) = unaff_x23;
      *(undefined1 (*) [16])((long)pppuVar4 + -0x30) = auVar35;
      *(ulong *)((long)pppuVar4 + -0x20) = uVar11;
      *(ulong *)((long)pppuVar4 + -0x18) = uVar9;
      *(undefined1 **)((long)pppuVar4 + -0x10) = puVar33;
      *(undefined **)((long)pppuVar4 + -8) = puVar34;
      puVar33 = (undefined1 *)((long)pppuVar4 + -0x10);
      uVar20 = *(uint *)(uVar16 + 0x10);
      uVar11 = (ulong)uVar20;
      if ((int)uVar12 == 1) {
        uVar29 = 0;
        uVar12 = unaff_x23;
code_r0x029cbfd8:
        do {
          uVar20 = (int)uVar11 - 1;
          uVar11 = (ulong)uVar20;
          if ((int)uVar20 < (int)uVar29) break;
          uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar11);
          unaff_x23 = uVar12;
          if (lVar23 == 0) goto code_r0x029cc07c;
          iVar7 = *(int *)(lVar23 + 0x18);
          if (iVar7 < 1) {
            iVar6 = 0;
          }
          else {
            iVar24 = 0;
            do {
              if (iVar7 == iVar24) goto code_r0x029cc070;
              iVar6 = iVar24;
            } while ((*(ushort *)(lVar23 + (long)iVar24 * 2 + 0x20) != uVar8) &&
                    (iVar24 = iVar24 + 1, iVar6 = iVar7, iVar7 != iVar24));
          }
        } while (iVar6 != iVar7);
      }
      else {
        if ((int)uVar20 < 1) {
          uVar29 = 0;
        }
        else {
          uVar29 = 0;
          do {
            uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(uVar16,uVar29);
            unaff_x23 = uVar12;
            if (lVar23 == 0) goto code_r0x029cc07c;
            iVar7 = *(int *)(lVar23 + 0x18);
            if (iVar7 < 1) {
              iVar6 = 0;
            }
            else {
              iVar24 = 0;
              do {
                if (iVar7 == iVar24) goto code_r0x029cc070;
                iVar6 = iVar24;
              } while ((*(ushort *)(lVar23 + (long)iVar24 * 2 + 0x20) != uVar8) &&
                      (iVar24 = iVar24 + 1, iVar6 = iVar7, iVar7 != iVar24));
            }
          } while ((iVar6 != iVar7) &&
                  (uVar8 = (int)uVar29 + 1, uVar29 = (ulong)uVar8,
                  (int)uVar8 < *(int *)(uVar16 + 0x10)));
        }
        if ((int)uVar12 != 0) {
          uVar11 = (ulong)*(uint *)(uVar16 + 0x10);
          goto code_r0x029cbfd8;
        }
        uVar20 = uVar20 - 1;
      }
      uVar12 = *(undefined8 *)((long)pppuVar4 + -0x10);
      uVar18 = *(undefined8 *)((long)pppuVar4 + -8);
      uVar17 = *(undefined8 *)((long)pppuVar4 + -0x20);
      uVar26 = *(undefined8 *)((long)pppuVar4 + -0x18);
      uVar14 = *(undefined8 *)((long)pppuVar4 + -0x30);
      uVar27 = *(undefined8 *)((long)pppuVar4 + -0x28);
      unaff_x24 = *(undefined8 *)((long)pppuVar4 + -0x40);
      unaff_x23 = *(undefined8 *)((long)pppuVar4 + -0x38);
      uVar15 = uVar16;
      goto System_String__CreateTrimmedString;
    }
    iVar7 = 2;
    pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x30);
    goto System_String__TrimHelper;
  }
  return uVar9;
code_r0x029cc094:
  iVar7 = 0;
  pppuVar4 = (undefined1 ***)((long)pppuVar4 + -0x40);
System_String__TrimHelper:
  *(undefined8 *)((long)pppuVar4 + -0x40) = unaff_x24;
  *(undefined8 *)((long)pppuVar4 + -0x38) = unaff_x23;
  *(ulong *)((long)pppuVar4 + -0x30) = uVar29;
  *(long *)((long)pppuVar4 + -0x28) = auVar3._8_8_;
  *(ulong *)((long)pppuVar4 + -0x20) = uVar11;
  *(long *)((long)pppuVar4 + -0x18) = auVar3._0_8_;
  *(undefined1 **)((long)pppuVar4 + -0x10) = puVar33;
  *(undefined **)((long)pppuVar4 + -8) = puVar34;
  if ((bRam0000000003eb9460 & 1) == 0) {
    func_0x00f78a20(0x3d20620);
    bRam0000000003eb9460 = 1;
  }
  uVar20 = *(uint *)(uVar15 + 0x10);
  if (iVar7 == 1) {
    uVar29 = 0;
  }
  else {
    if ((int)uVar20 < 1) {
      uVar29 = 0;
    }
    else {
      uVar29 = 0;
      do {
        uVar12 = /*System.String$$get_Chars*/ func_0x029c5420(uVar15,uVar29);
        if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar9 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar12,0);
        if ((uVar9 & 1) == 0) {
          /*System.String$$get_Chars*/ func_0x029c5420(uVar15,uVar29);
          break;
        }
        uVar8 = (int)uVar29 + 1;
        uVar29 = (ulong)uVar8;
      } while ((int)uVar8 < *(int *)(uVar15 + 0x10));
    }
    if (iVar7 == 0) {
      uVar20 = uVar20 - 1;
      goto code_r0x029cbf04;
    }
    uVar20 = *(uint *)(uVar15 + 0x10);
  }
  do {
    uVar20 = uVar20 - 1;
    if ((int)uVar20 < (int)uVar29) goto code_r0x029cbf04;
    uVar12 = /*System.String$$get_Chars*/ func_0x029c5420(uVar15,uVar20);
    if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar12,0);
  } while ((uVar9 & 1) != 0);
  /*System.String$$get_Chars*/ func_0x029c5420(uVar15,uVar29);
code_r0x029cbf04:
  uVar12 = *(undefined8 *)((long)pppuVar4 + -0x10);
  uVar18 = *(undefined8 *)((long)pppuVar4 + -8);
  uVar17 = *(undefined8 *)((long)pppuVar4 + -0x20);
  uVar26 = *(undefined8 *)((long)pppuVar4 + -0x18);
  uVar14 = *(undefined8 *)((long)pppuVar4 + -0x30);
  uVar27 = *(undefined8 *)((long)pppuVar4 + -0x28);
  unaff_x24 = *(undefined8 *)((long)pppuVar4 + -0x40);
  unaff_x23 = *(undefined8 *)((long)pppuVar4 + -0x38);
System_String__CreateTrimmedString:
  auVar35._8_8_ = uVar29;
  auVar35._0_8_ = uVar15;
  *(undefined8 *)((long)pppuVar4 + -0x30) = uVar14;
  *(undefined8 *)((long)pppuVar4 + -0x28) = uVar27;
  *(undefined8 *)((long)pppuVar4 + -0x20) = uVar17;
  *(undefined8 *)((long)pppuVar4 + -0x18) = uVar26;
  *(undefined8 *)((long)pppuVar4 + -0x10) = uVar12;
  *(undefined8 *)((long)pppuVar4 + -8) = uVar18;
  if ((bRam0000000003eb9461 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9461 = 1;
  }
  uVar20 = (uVar20 - (int)uVar29) + 1;
  if (uVar20 != *(uint *)(uVar15 + 0x10)) {
    if (uVar20 != 0) {
      uVar12 = *(undefined8 *)((long)pppuVar4 + -0x10);
      uVar18 = *(undefined8 *)((long)pppuVar4 + -8);
      uVar17 = *(undefined8 *)((long)pppuVar4 + -0x20);
      uVar9 = *(ulong *)((long)pppuVar4 + -0x18);
      uVar14 = *(undefined8 *)((long)pppuVar4 + -0x30);
      uVar26 = *(undefined8 *)((long)pppuVar4 + -0x28);
      goto System_String__InternalSubString;
    }
    uVar15 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  return uVar15;
}



// ============================================================
// RVA: 0x16489d8 | Core.Input.InputGlyphBehaviour.GetLastInputPathComponent
// ============================================================

ulong Core_Input_InputGlyphBehaviour__GetLastInputPathComponent(ulong param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar8;
  int iVar7;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  int *piVar21;
  undefined8 unaff_x19;
  undefined8 uVar22;
  undefined8 unaff_x20;
  ulong unaff_x21;
  undefined8 uVar23;
  undefined8 unaff_x22;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 unaff_x23;
  code *pcVar26;
  undefined8 unaff_x24;
  long lVar27;
  long *plVar28;
  undefined1 *unaff_x29;
  undefined1 *puVar29;
  undefined *unaff_x30;
  undefined8 uVar30;
  undefined *puVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  long lStack_78;
  
  if (param_1 != 0) {
    iVar6 = /*System.String$$LastIndexOf*/ func_0x029ce0f0(param_1,0x2f,0);
    puVar4 = (undefined1 *)register0x00000008;
    uVar12 = (ulong)(iVar6 + 1);
    do {
      uVar25 = uVar12;
      iVar6 = (int)uVar25;
      uVar14 = *(int *)(param_1 + 0x10) - iVar6;
      *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
      *(ulong *)(puVar4 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar4 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
      *(undefined **)(puVar4 + -8) = unaff_x30;
      unaff_x29 = puVar4 + -0x10;
      unaff_x22 = 0x3eb9000;
      if ((bRam0000000003eb944b & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        bRam0000000003eb944b = 1;
      }
      if (iVar6 < 0) {
        uVar16 = 0x3d72d20;
code_r0x029cbcb4:
        uVar16 = func_0x00f78a24(uVar16);
        unaff_x19 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar16,0);
        func_0x00f78a24(0x3d1fcf8);
        unaff_x20 = func_0x00f78aec();
        uVar16 = 0x3d7b9d0;
      }
      else {
        uVar8 = *(uint *)(param_1 + 0x10);
        if ((int)uVar8 < iVar6) {
          uVar16 = 0x3d7b9e8;
          goto code_r0x029cbcb4;
        }
        if ((int)uVar14 < 0) {
          uVar16 = 0x3d6f480;
        }
        else {
          if (iVar6 <= (int)(uVar8 - uVar14)) goto code_r0x029cbc4c;
          uVar16 = 0x3d6ddc8;
        }
        uVar16 = func_0x00f78a24(uVar16);
        unaff_x19 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar16,0);
        func_0x00f78a24(0x3d1fcf8);
        unaff_x20 = func_0x00f78aec();
        uVar16 = 0x3d7a280;
      }
      uVar16 = func_0x00f78a24(uVar16);
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(unaff_x20,uVar16,unaff_x19,0);
      uVar16 = func_0x00f78a24(0x3d5dbb0);
      unaff_x30 = &System_String__Substring;
      auVar32 = func_0x00f78ac0(unaff_x20,uVar16);
      param_1 = auVar32._0_8_;
      puVar4 = puVar4 + -0x30;
      uVar12 = auVar32._8_8_;
      unaff_x21 = uVar25;
    } while( true );
  }
  plVar9 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb5789 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    bRam0000000003eb5789 = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (lVar10 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x48), lVar10 == 0)) {
    return 0;
  }
  lStack_78 = lVar10;
  lVar17 = *(long *)(lVar10 + 0x68);
  if (lVar17 == 0) {
    plVar28 = &lStack_78;
    lVar27 = 1;
  }
  else {
    lVar27 = *(long *)(lVar17 + 0x18);
    if (lVar27 == 0) {
      return 0;
    }
    plVar28 = (long *)(lVar17 + 0x20);
  }
  lVar17 = 0;
  do {
    lVar18 = plVar28[lVar17];
    pcVar26 = *(code **)(lVar18 + 0x10);
    plVar1 = *(long **)(lVar18 + 0x20);
    lVar18 = *(long *)(lVar18 + 0x28);
    if (*(short *)(lVar18 + 0x48) == -1) {
      func_0x00f78ad8(lVar18);
    }
    iVar6 = func_0x00f78a4c(lVar18);
    bVar5 = *(char *)(lVar18 + 0x4a) == '\x01';
    if (iVar6 == 0) {
      if (bVar5) {
        if (plVar1 == (long *)0x0) {
code_r0x0164a8ac:
          uVar12 = (*pcVar26)(plVar9,lVar18);
        }
        else {
          if (((*(short *)(lVar18 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar10 + 0x18) == 0)) goto code_r0x0164a7a4;
          iVar6 = func_0x00f78a44(lVar18);
          iVar7 = func_0x00f78ec0(lVar18);
          if (iVar6 == 0) {
            uVar2 = *(ushort *)(lVar18 + 0x48);
            if (iVar7 == 0) {
              lVar18 = *plVar1 + (ulong)uVar2 * 0x10;
              uVar12 = (**(code **)(lVar18 + 0x138))(plVar1,plVar9,*(undefined8 *)(lVar18 + 0x140));
              goto code_r0x0164a8b8;
            }
            lVar18 = func_0x00f78a48(lVar18);
            lVar19 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar19 + 0x12a);
            if (uVar12 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == lVar18) {
                  puVar11 = (undefined8 *)
                            (lVar19 + (long)(int)(*piVar21 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x0164aa44;
                }
                piVar21 = piVar21 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar11 = (undefined8 *)func_0x00fac1f0(plVar1,lVar18,(ulong)uVar2);
code_r0x0164aa44:
            pcVar26 = (code *)*puVar11;
            puVar11 = (undefined8 *)puVar11[1];
          }
          else {
            if (iVar7 == 0) {
              uVar16 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar19 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar19 + 0x12a);
              if (uVar12 != 0) {
                piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x18)) {
                    lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x0164aa1c;
                  }
                  piVar21 = piVar21 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar19 = func_0x00fac1f0(plVar1);
code_r0x0164aa1c:
              uVar16 = *(undefined8 *)(lVar19 + 8);
            }
            puVar11 = (undefined8 *)func_0x00f78acc(uVar16,lVar18);
            pcVar26 = (code *)*puVar11;
          }
          uVar12 = (*pcVar26)(plVar1,plVar9,puVar11);
        }
      }
      else {
        if ((*(short *)(lVar18 + 0x48) == -1) || (*(long *)(lVar10 + 0x18) == 0))
        goto code_r0x0164a8ac;
        iVar6 = func_0x00f78a44(lVar18);
        iVar7 = func_0x00f78ec0(lVar18);
        if (iVar6 == 0) {
          uVar2 = *(ushort *)(lVar18 + 0x48);
          if (iVar7 == 0) {
            lVar18 = *plVar9 + (ulong)uVar2 * 0x10;
            uVar12 = (**(code **)(lVar18 + 0x138))(plVar9,*(undefined8 *)(lVar18 + 0x140));
            goto code_r0x0164a8b8;
          }
          lVar18 = func_0x00f78a48(lVar18);
          lVar19 = *plVar9;
          uVar12 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar12 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == lVar18) {
                puVar11 = (undefined8 *)
                          (lVar19 + (long)(int)(*piVar21 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x0164a9e0;
              }
              piVar21 = piVar21 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar9,lVar18,(ulong)uVar2);
code_r0x0164a9e0:
          pcVar26 = (code *)*puVar11;
          puVar11 = (undefined8 *)puVar11[1];
        }
        else {
          if (iVar7 == 0) {
            uVar16 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar19 = *plVar9;
            uVar12 = (ulong)*(ushort *)(lVar19 + 0x12a);
            if (uVar12 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x18)) {
                  lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x0164a9b8;
                }
                piVar21 = piVar21 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar19 = func_0x00fac1f0(plVar9);
code_r0x0164a9b8:
            uVar16 = *(undefined8 *)(lVar19 + 8);
          }
          puVar11 = (undefined8 *)func_0x00f78acc(uVar16,lVar18);
          pcVar26 = (code *)*puVar11;
        }
        uVar12 = (*pcVar26)(plVar9,puVar11);
      }
    }
    else {
      if (bVar5) goto code_r0x0164a8ac;
code_r0x0164a7a4:
      uVar12 = (*pcVar26)(plVar1,plVar9,lVar18);
    }
code_r0x0164a8b8:
    lVar17 = lVar17 + 1;
    if (lVar17 == lVar27) {
      return uVar12;
    }
  } while( true );
code_r0x029cc070:
  uVar13 = func_0x00f78b24();
  func_0x00f78ac0(uVar13,0);
  unaff_x23 = uVar16;
code_r0x029cc07c:
  puVar31 = &System_String__TrimStart;
  auVar33 = func_0x00f78af4();
  uVar12 = auVar33._0_8_;
  if ((auVar33._8_8_ == 0) || (*(long *)(auVar33._8_8_ + 0x18) == 0)) goto code_r0x029cc094;
  uVar16 = 0;
  puVar4 = puVar4 + -0x40;
  auVar3 = auVar32;
  goto System_String__TrimHelper;
code_r0x029cbc4c:
  if (uVar14 == 0) {
    param_1 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  else if ((iVar6 != 0) || (uVar8 != uVar14)) {
    uVar16 = *(undefined8 *)(puVar4 + -0x10);
    uVar30 = *(undefined8 *)(puVar4 + -8);
    uVar13 = *(undefined8 *)(puVar4 + -0x20);
    uVar22 = *(undefined8 *)(puVar4 + -0x18);
    uVar24 = *(undefined8 *)(puVar4 + -0x30);
    uVar23 = *(undefined8 *)(puVar4 + -0x28);
System_String__InternalSubString:
    auVar32._8_8_ = uVar25;
    auVar32._0_8_ = uVar22;
    uVar15 = (ulong)uVar14;
    *(undefined8 *)(puVar4 + -0x30) = uVar24;
    *(undefined8 *)(puVar4 + -0x28) = uVar23;
    *(undefined8 *)(puVar4 + -0x20) = uVar13;
    *(undefined8 *)(puVar4 + -0x18) = uVar22;
    *(undefined8 *)(puVar4 + -0x10) = uVar16;
    *(undefined8 *)(puVar4 + -8) = uVar30;
    puVar29 = puVar4 + -0x10;
    uVar12 = func_0x00f834ac(uVar15);
    if (uVar12 != 0) {
      /*System.Buffer$$Memcpy*/ func_0x029426bc(uVar12 + 0x14,param_1 + (long)(int)uVar25 * 2 + 0x14,uVar14 << 1,0);
      return uVar12;
    }
    puVar31 = &System_String__Trim;
    auVar33 = func_0x00f78af4();
    uVar12 = auVar33._0_8_;
    if ((auVar33._8_8_ != 0) && (*(long *)(auVar33._8_8_ + 0x18) != 0)) {
      uVar16 = 2;
      puVar4 = puVar4 + -0x30;
      uVar25 = param_1;
      auVar3 = auVar32;
System_String__TrimHelper:
      auVar32 = auVar33;
      lVar10 = auVar32._8_8_;
      param_1 = auVar32._0_8_;
      *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
      *(ulong *)(puVar4 + -0x30) = uVar25;
      *(long *)(puVar4 + -0x28) = auVar3._8_8_;
      *(ulong *)(puVar4 + -0x20) = uVar15;
      *(long *)(puVar4 + -0x18) = auVar3._0_8_;
      *(undefined1 **)(puVar4 + -0x10) = puVar29;
      *(undefined **)(puVar4 + -8) = puVar31;
      puVar29 = puVar4 + -0x10;
      uVar14 = *(uint *)(param_1 + 0x10);
      uVar15 = (ulong)uVar14;
      if ((int)uVar16 == 1) {
        uVar25 = 0;
        uVar16 = unaff_x23;
code_r0x029cbfd8:
        do {
          uVar14 = (int)uVar15 - 1;
          uVar15 = (ulong)uVar14;
          if ((int)uVar14 < (int)uVar25) break;
          uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(param_1,uVar15);
          unaff_x23 = uVar16;
          if (lVar10 == 0) goto code_r0x029cc07c;
          iVar6 = *(int *)(lVar10 + 0x18);
          if (iVar6 < 1) {
            iVar7 = 0;
          }
          else {
            iVar20 = 0;
            do {
              if (iVar6 == iVar20) goto code_r0x029cc070;
              iVar7 = iVar20;
            } while ((*(ushort *)(lVar10 + (long)iVar20 * 2 + 0x20) != uVar8) &&
                    (iVar20 = iVar20 + 1, iVar7 = iVar6, iVar6 != iVar20));
          }
        } while (iVar7 != iVar6);
      }
      else {
        if ((int)uVar14 < 1) {
          uVar25 = 0;
        }
        else {
          uVar25 = 0;
          do {
            uVar8 = /*System.String$$get_Chars*/ func_0x029c5420(param_1,uVar25);
            unaff_x23 = uVar16;
            if (lVar10 == 0) goto code_r0x029cc07c;
            iVar6 = *(int *)(lVar10 + 0x18);
            if (iVar6 < 1) {
              iVar7 = 0;
            }
            else {
              iVar20 = 0;
              do {
                if (iVar6 == iVar20) goto code_r0x029cc070;
                iVar7 = iVar20;
              } while ((*(ushort *)(lVar10 + (long)iVar20 * 2 + 0x20) != uVar8) &&
                      (iVar20 = iVar20 + 1, iVar7 = iVar6, iVar6 != iVar20));
            }
          } while ((iVar7 != iVar6) &&
                  (uVar8 = (int)uVar25 + 1, uVar25 = (ulong)uVar8,
                  (int)uVar8 < *(int *)(param_1 + 0x10)));
        }
        if ((int)uVar16 != 0) {
          uVar15 = (ulong)*(uint *)(param_1 + 0x10);
          goto code_r0x029cbfd8;
        }
        uVar14 = uVar14 - 1;
      }
      uVar16 = *(undefined8 *)(puVar4 + -0x10);
      uVar30 = *(undefined8 *)(puVar4 + -8);
      uVar13 = *(undefined8 *)(puVar4 + -0x20);
      uVar22 = *(undefined8 *)(puVar4 + -0x18);
      uVar24 = *(undefined8 *)(puVar4 + -0x30);
      uVar23 = *(undefined8 *)(puVar4 + -0x28);
      unaff_x24 = *(undefined8 *)(puVar4 + -0x40);
      unaff_x23 = *(undefined8 *)(puVar4 + -0x38);
      goto System_String__CreateTrimmedString;
    }
    iVar6 = 2;
    puVar4 = puVar4 + -0x30;
    goto System_String__TrimHelper;
  }
  return param_1;
code_r0x029cc094:
  iVar6 = 0;
  puVar4 = puVar4 + -0x40;
  param_1 = uVar25;
System_String__TrimHelper:
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(ulong *)(puVar4 + -0x30) = param_1;
  *(long *)(puVar4 + -0x28) = auVar32._8_8_;
  *(ulong *)(puVar4 + -0x20) = uVar15;
  *(long *)(puVar4 + -0x18) = auVar32._0_8_;
  *(undefined1 **)(puVar4 + -0x10) = puVar29;
  *(undefined **)(puVar4 + -8) = puVar31;
  if ((bRam0000000003eb9460 & 1) == 0) {
    func_0x00f78a20(0x3d20620);
    bRam0000000003eb9460 = 1;
  }
  uVar14 = *(uint *)(uVar12 + 0x10);
  if (iVar6 == 1) {
    uVar25 = 0;
  }
  else {
    if ((int)uVar14 < 1) {
      uVar25 = 0;
    }
    else {
      uVar25 = 0;
      do {
        uVar16 = /*System.String$$get_Chars*/ func_0x029c5420(uVar12,uVar25);
        if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar15 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar16,0);
        if ((uVar15 & 1) == 0) {
          /*System.String$$get_Chars*/ func_0x029c5420(uVar12,uVar25);
          break;
        }
        uVar8 = (int)uVar25 + 1;
        uVar25 = (ulong)uVar8;
      } while ((int)uVar8 < *(int *)(uVar12 + 0x10));
    }
    if (iVar6 == 0) {
      uVar14 = uVar14 - 1;
      goto code_r0x029cbf04;
    }
    uVar14 = *(uint *)(uVar12 + 0x10);
  }
  do {
    uVar14 = uVar14 - 1;
    if ((int)uVar14 < (int)uVar25) goto code_r0x029cbf04;
    uVar16 = /*System.String$$get_Chars*/ func_0x029c5420(uVar12,uVar14);
    if (((*(ushort *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*char_TypeInfo*/ lRam0000000003d20620 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = /*System.Char$$IsWhiteSpace*/ func_0x02a2e16c(uVar16,0);
  } while ((uVar15 & 1) != 0);
  /*System.String$$get_Chars*/ func_0x029c5420(uVar12,uVar25);
code_r0x029cbf04:
  uVar16 = *(undefined8 *)(puVar4 + -0x10);
  uVar30 = *(undefined8 *)(puVar4 + -8);
  uVar13 = *(undefined8 *)(puVar4 + -0x20);
  uVar22 = *(undefined8 *)(puVar4 + -0x18);
  uVar24 = *(undefined8 *)(puVar4 + -0x30);
  uVar23 = *(undefined8 *)(puVar4 + -0x28);
  unaff_x24 = *(undefined8 *)(puVar4 + -0x40);
  unaff_x23 = *(undefined8 *)(puVar4 + -0x38);
  param_1 = uVar12;
System_String__CreateTrimmedString:
  *(undefined8 *)(puVar4 + -0x30) = uVar24;
  *(undefined8 *)(puVar4 + -0x28) = uVar23;
  *(undefined8 *)(puVar4 + -0x20) = uVar13;
  *(undefined8 *)(puVar4 + -0x18) = uVar22;
  *(undefined8 *)(puVar4 + -0x10) = uVar16;
  *(undefined8 *)(puVar4 + -8) = uVar30;
  if ((bRam0000000003eb9461 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb9461 = 1;
  }
  uVar14 = (uVar14 - (int)uVar25) + 1;
  if (uVar14 != *(uint *)(param_1 + 0x10)) {
    if (uVar14 != 0) {
      uVar16 = *(undefined8 *)(puVar4 + -0x10);
      uVar30 = *(undefined8 *)(puVar4 + -8);
      uVar13 = *(undefined8 *)(puVar4 + -0x20);
      uVar22 = *(undefined8 *)(puVar4 + -0x18);
      uVar24 = *(undefined8 *)(puVar4 + -0x30);
      uVar23 = *(undefined8 *)(puVar4 + -0x28);
      goto System_String__InternalSubString;
    }
    param_1 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  }
  return param_1;
}



// ============================================================
// RVA: 0x1648a90 | Core.Input.InputGlyphBehaviour.OnDestroy
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1648b38 | Core.Input.InputGlyphBehaviour.Update
// ============================================================

ulong Core_Input_InputGlyphBehaviour__Update(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined2 auStack_52 [9];
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000003eb5775 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5775 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar3,0);
  if (((uVar1 & 1) != 0) || (*(long *)(param_1 + 0x40) != 0)) {
    uVar1 = /*Core.Input.InputGlyphBehaviour$$HandlePressedState*/ func_0x01648bdc(param_1);
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    return uVar1;
  }
  uVar3 = 0x3eb5000;
  if ((bRam0000000003eb5777 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5777 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar3,0);
    if ((int)uVar1 != 0) {
      if ((*(long *)(param_1 + 0x48) == 0) || (*(long *)(param_1 + 0x30) == 0))
      goto code_r0x01648e64;
      /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_1 + 0x30),*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x18),0)
      ;
      uVar1 = /*Core.Input.InputGlyphBehaviour$$SetGlyphEnabled*/ func_0x01649294(param_1,1);
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    return uVar1;
  }
code_r0x01648e64:
  auVar4 = func_0x00f78af4();
  uStack_40 = uVar3;
  lStack_38 = param_1;
  if ((bRam0000000003eb5792 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d3e5b8);
    func_0x00f78a20(0x3d3e5b0);
    bRam0000000003eb5792 = 1;
  }
  if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x20);
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar3 = Core_Input_ActionPressManager__WasPressedThisFrame(lVar2,auVar4._0_8_,auVar4._8_8_);
      auStack_52[0] = 0;
      /*System.Nullable<bool>$$.ctor*/ func_0x0261a454(auStack_52,uVar3,uRam0000000003d3e5b0);
      uVar1 = (ulong)((char)auStack_52[0] != '\0');
    }
  }
  return uVar1;
}



// ============================================================
// RVA: 0x1648bdc | Core.Input.InputGlyphBehaviour.HandlePressedState
// ============================================================

/* WARNING: Possible PIC construction at 0x01648d68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01648e50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01648d6c) */
/* WARNING: Removing unreachable block (ram,0x01648e54) */

ulong Core_Input_InputGlyphBehaviour__HandlePressedState(long param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  code *pcVar17;
  long lVar18;
  ulong *puVar19;
  undefined1 *puVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong uStack_58;
  
  puVar3 = &stack0xffffffffffffffd0;
  puVar20 = &stack0xfffffffffffffff0;
  uVar9 = 0x3d23990;
  if ((bRam0000000003eb5776 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5776 = 1;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar16,0);
  if (iVar6 == 0) {
LAB_01648cdc:
    bVar5 = true;
LAB_01648ce0:
    uVar10 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(param_1 + 0x50),0);
    if ((uVar10 & 1) != 0) goto LAB_01648cf0;
    uVar10 = /*Core.Input.InputManager$$WasActionPressedThisFrame*/ func_0x01648e68(*(undefined8 *)(param_1 + 0x50),0);
    uVar11 = uVar10;
    if (bVar5) goto code_r0x01648d10;
  }
  else {
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if ((lVar8 == 0) || (*(long *)(param_1 + 0x28) == 0)) {
      param_1 = func_0x00f78af4();
      puVar4 = &stack0xffffffffffffffb0;
      puVar3 = &stack0xffffffffffffffb0;
      puVar20 = &stack0xffffffffffffffc0;
      uVar11 = 0x3eb5000;
      if ((bRam0000000003eb5777 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb5777 = 1;
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        uVar11 = *(ulong *)(*(long *)(param_1 + 0x48) + 0x18);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar11,0);
        if ((int)uVar10 == 0) {
          return uVar10;
        }
        if ((*(long *)(param_1 + 0x48) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
          /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_1 + 0x30),
                          *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x18),0);
          auVar23._8_8_ = 1;
          auVar23._0_8_ = param_1;
          puVar21 = &UNK_01648e54;
          goto code_r0x01649294;
        }
      }
      puVar21 = &Core_Input_InputManager__WasActionPressedThisFrame;
      auVar22 = func_0x00f78af4();
      goto code_r0x01648e68;
    }
    uVar16 = *(undefined8 *)(lVar8 + 0x38);
    uVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x28),0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar16,uVar9,0);
    if ((int)uVar10 == 0) goto LAB_01648cdc;
    bVar5 = *(char *)(param_1 + 0x68) == '\0';
    if (*(char *)(param_1 + 0x58) == '\0') goto LAB_01648ce0;
LAB_01648cf0:
    if (!bVar5) {
      return uVar10;
    }
    uVar11 = 0;
code_r0x01648d10:
    unaff_x21 = 0x3ca3000;
    if (cRam0000000003ca3500 == '\0') {
      uVar10 = func_0x00f78a20(0x3d22d90);
      cRam0000000003ca3500 = '\x01';
    }
    if ((**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8) != 0) &&
       (uVar10 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(param_1 + 0x60),0), (uVar10 & 1) == 0)) {
      auVar22._8_8_ = 1;
      auVar22._0_8_ = *(undefined8 *)(param_1 + 0x60);
      puVar21 = &UNK_01648d6c;
code_r0x01648e68:
      *(undefined8 *)(puVar3 + -0x30) = 0x3d23990;
      *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
      *(ulong *)(puVar3 + -0x20) = uVar11;
      *(long *)(puVar3 + -0x18) = param_1;
      *(undefined1 **)(puVar3 + -0x10) = puVar20;
      *(undefined **)(puVar3 + -8) = puVar21;
      if ((bRam0000000003eb5792 & 1) == 0) {
        func_0x00f78a20(0x3d22848);
        func_0x00f78a20(0x3d3e5b8);
        func_0x00f78a20(0x3d3e5b0);
        bRam0000000003eb5792 = 1;
      }
      if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
        uVar11 = 0;
      }
      else {
        lVar8 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x20);
        uVar11 = 0;
        if (lVar8 != 0) {
          uVar9 = Core_Input_ActionPressManager__WasPressedThisFrame
                            (lVar8,auVar22._0_8_,auVar22._8_8_);
          *(undefined2 *)(puVar3 + -0x32) = 0;
          /*System.Nullable<bool>$$.ctor*/ func_0x0261a454(puVar3 + -0x32,uVar9,uRam0000000003d3e5b0);
          uVar11 = (ulong)(puVar3[-0x32] != '\0');
        }
      }
      return uVar11;
    }
  }
  if (((int)uVar11 == 0) ||
     ((*(int *)(param_1 + 0x6c) != -1 && (uVar10 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(), (int)uVar10 == 0)))) {
    return uVar10;
  }
  /*Core.Input.InputManager$$ConsumeAction*/ func_0x01649028(*(undefined8 *)(param_1 + 0x50));
  /*Core.Input.InputManager$$ConsumeAction*/ func_0x01649028(*(undefined8 *)(param_1 + 0x60));
  puVar4 = &stack0xffffffffffffffc0;
  puVar20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5779 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d560f8);
    func_0x00f78a20(0x3d21718);
    func_0x00f78a20(0x3d21bd8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5779 = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar9,0);
  if (iVar6 != 0) {
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    unaff_x21 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    uVar11 = func_0x00f78aec(/*Core.Input.GlyphEventData_TypeInfo*/ uRam0000000003d21bd8);
    /*UnityEngine.EventSystems.BaseEventData$$.ctor*/ func_0x032abc28(uVar11,unaff_x21,0);
    if (*(long *)(param_1 + 0x28) == 0) {
      puVar21 = &Core_Input_InputGlyphBehaviour__SetGlyphEnabled;
      auVar23 = func_0x00f78af4();
      uVar9 = unaff_x22;
code_r0x01649294:
      uVar16 = auVar23._8_8_;
      *(ulong *)(puVar4 + -0x20) = uVar11;
      *(long *)(puVar4 + -0x18) = param_1;
      *(undefined1 **)(puVar4 + -0x10) = puVar20;
      *(undefined **)(puVar4 + -8) = puVar21;
      lVar8 = *(long *)(auVar23._0_8_ + 0x30);
      if (*(char *)(auVar23._0_8_ + 0x38) == '\0') {
        if (lVar8 != 0) {
          *(undefined8 *)(puVar4 + -0x30) = uVar9;
          *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
          *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
          *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
          *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
          *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
          if (pcRam0000000003ebe9d8 == (code *)0x0) {
            pcRam0000000003ebe9d8 =
                 (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
          }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar11 = (*pcRam0000000003ebe9d8)(lVar8,uVar16);
          return uVar11;
        }
      }
      else if ((lVar8 != 0) && (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0), lVar8 != 0)) {
        *(undefined8 *)(puVar4 + -0x30) = uVar9;
        *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)(puVar4 + -0x20);
        *(undefined8 *)(puVar4 + -0x18) = *(undefined8 *)(puVar4 + -0x18);
        *(undefined8 *)(puVar4 + -0x10) = *(undefined8 *)(puVar4 + -0x10);
        *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (*pcRam0000000003ebf4c0)(lVar8,uVar16);
        return uVar11;
      }
      lVar8 = func_0x00f78af4();
      *(undefined8 *)(puVar4 + -0x50) = uVar9;
      *(undefined8 *)(puVar4 + -0x48) = unaff_x21;
      *(ulong *)(puVar4 + -0x40) = uVar11;
      *(undefined8 *)(puVar4 + -0x38) = uVar16;
      *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
      *(undefined **)(puVar4 + -0x28) = &Core_Input_InputGlyphBehaviour__get_HasTarget;
      if ((bRam0000000003eb5778 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb5778 = 1;
      }
      uVar9 = *(undefined8 *)(lVar8 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar9,0);
      if ((uVar11 & 1) == 0) {
        uVar11 = (ulong)(*(long *)(lVar8 + 0x40) != 0);
      }
      else {
        uVar11 = 1;
      }
      return uVar11;
    }
    uVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x28),0);
    if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (cRam0000000003cbb331 == '\0') {
      func_0x00f78a20(0x3d21718);
      cRam0000000003cbb331 = '\x01';
    }
    if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(uVar9,uVar11,*(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x78),
                    uRam0000000003d560f8);
  }
  uVar11 = *(ulong *)(param_1 + 0x40);
  if (uVar11 == 0) {
    return 0;
  }
  uVar9 = 0;
  uStack_58 = uVar11;
  lVar8 = *(long *)(uVar11 + 0x68);
  if (lVar8 == 0) {
    puVar19 = &uStack_58;
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(lVar8 + 0x18);
    if (lVar18 == 0) {
      return uVar11;
    }
    puVar19 = (ulong *)(lVar8 + 0x20);
  }
  lVar8 = 0;
  do {
    uVar10 = puVar19[lVar8];
    pcVar17 = *(code **)(uVar10 + 0x10);
    plVar1 = *(long **)(uVar10 + 0x20);
    lVar12 = *(long *)(uVar10 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar9);
    }
    iVar6 = func_0x00f78a4c(lVar12);
    if (iVar6 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(uVar11 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar6 = func_0x00f78a44(lVar12);
      iVar7 = func_0x00f78ec0(lVar12);
      if (iVar6 == 0) {
        uVar2 = *(ushort *)(lVar12 + 0x48);
        if (iVar7 == 0) {
          lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
          auVar23 = (**(code **)(lVar12 + 0x138))(plVar1,*(undefined8 *)(lVar12 + 0x140));
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar14 = *plVar1;
        uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar10 != 0) {
          piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar13 = (undefined8 *)(lVar14 + (long)(int)(*piVar15 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x02924e68:
        pcVar17 = (code *)*puVar13;
        puVar13 = (undefined8 *)puVar13[1];
      }
      else {
        if (iVar7 == 0) {
          uVar9 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar14 = *plVar1;
          uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar10 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          lVar14 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
          uVar9 = *(undefined8 *)(lVar14 + 8);
        }
        puVar13 = (undefined8 *)func_0x00f78acc(uVar9,lVar12);
        pcVar17 = (code *)*puVar13;
      }
      auVar23 = (*pcVar17)(plVar1,puVar13);
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      auVar23 = (*pcVar17)(lVar12);
    }
    else {
code_r0x02924d98:
      auVar23 = (*pcVar17)(plVar1,lVar12);
    }
code_r0x02924da4:
    uVar9 = auVar23._8_8_;
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar18) {
      return auVar23._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1648dc0 | Core.Input.InputGlyphBehaviour.HandleSpriteLoading
// ============================================================

ulong Core_Input_InputGlyphBehaviour__HandleSpriteLoading(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined2 uStack_52;
  
  if ((bRam0000000003eb5777 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5777 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar3,0);
    if ((int)uVar1 != 0) {
      if ((*(long *)(param_1 + 0x48) == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_01648e64;
      /*UnityEngine.UI.Image$$set_sprite*/ func_0x032c2184(*(long *)(param_1 + 0x30),*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x18),0)
      ;
      uVar1 = /*Core.Input.InputGlyphBehaviour$$SetGlyphEnabled*/ func_0x01649294(param_1,1);
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    return uVar1;
  }
LAB_01648e64:
  auVar4 = func_0x00f78af4();
  if ((bRam0000000003eb5792 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d3e5b8);
    func_0x00f78a20(0x3d3e5b0);
    bRam0000000003eb5792 = 1;
  }
  if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x20);
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar3 = Core_Input_ActionPressManager__WasPressedThisFrame(lVar2,auVar4._0_8_,auVar4._8_8_);
      uStack_52 = 0;
      /*System.Nullable<bool>$$.ctor*/ func_0x0261a454(&uStack_52,uVar3,uRam0000000003d3e5b0);
      uVar1 = (ulong)((char)uStack_52 != '\0');
    }
  }
  return uVar1;
}



// ============================================================
// RVA: 0x16490e4 | Core.Input.InputGlyphBehaviour.PressButton
// ============================================================

ulong Core_Input_InputGlyphBehaviour__PressButton(ulong param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  ulong *puVar16;
  undefined1 auVar17 [16];
  ulong uStack_58;
  
  if ((bRam0000000003eb5779 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d560f8);
    func_0x00f78a20(0x3d21718);
    func_0x00f78a20(0x3d21bd8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5779 = 1;
  }
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar13,0);
  if (iVar3 != 0) {
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    uVar5 = func_0x00f78aec(/*Core.Input.GlyphEventData_TypeInfo*/ uRam0000000003d21bd8);
    /*UnityEngine.EventSystems.BaseEventData$$.ctor*/ func_0x032abc28(uVar5,uVar13,0);
    if (*(long *)(param_1 + 0x28) == 0) {
      auVar17 = func_0x00f78af4();
      lVar9 = *(long *)(auVar17._0_8_ + 0x30);
      uStack_58 = param_1;
      if (*(char *)(auVar17._0_8_ + 0x38) == '\0') {
        if (lVar9 != 0) {
          if (pcRam0000000003ebe9d8 == (code *)0x0) {
            pcRam0000000003ebe9d8 =
                 (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
          }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (*pcRam0000000003ebe9d8)(lVar9,auVar17._8_8_);
          return uVar6;
        }
      }
      else if ((lVar9 != 0) && (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar9,0), lVar9 != 0)) {
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*pcRam0000000003ebf4c0)(lVar9,auVar17._8_8_);
        return uVar6;
      }
      lVar9 = func_0x00f78af4();
      if ((bRam0000000003eb5778 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb5778 = 1;
      }
      uVar13 = *(undefined8 *)(lVar9 + 0x28);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar13,0);
      if ((uVar6 & 1) == 0) {
        uVar6 = (ulong)(*(long *)(lVar9 + 0x40) != 0);
      }
      else {
        uVar6 = 1;
      }
      return uVar6;
    }
    uVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x28),0);
    if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (cRam0000000003cbb331 == '\0') {
      func_0x00f78a20(0x3d21718);
      cRam0000000003cbb331 = '\x01';
    }
    if (((*(ushort *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*UnityEngine.EventSystems.ExecuteEvents$$Execute<object>*/ func_0x01855d68(uVar13,uVar5,*(undefined8 *)(*(long *)(/*UnityEngine.EventSystems.ExecuteEvents_TypeInfo*/ lRam0000000003d21718 + 0xb8) + 0x78),
                    uRam0000000003d560f8);
  }
  uVar6 = *(ulong *)(param_1 + 0x40);
  if (uVar6 == 0) {
    return 0;
  }
  uVar13 = 0;
  uStack_58 = uVar6;
  lVar9 = *(long *)(uVar6 + 0x68);
  if (lVar9 == 0) {
    puVar16 = &uStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return uVar6;
    }
    puVar16 = (ulong *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    uVar10 = puVar16[lVar9];
    pcVar14 = *(code **)(uVar10 + 0x10);
    plVar1 = *(long **)(uVar10 + 0x20);
    lVar7 = *(long *)(uVar10 + 0x28);
    if (*(short *)(lVar7 + 0x48) == -1) {
      func_0x00f78ad8(lVar7,uVar13);
    }
    iVar3 = func_0x00f78a4c(lVar7);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar7 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(uVar6 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar3 = func_0x00f78a44(lVar7);
      iVar4 = func_0x00f78ec0(lVar7);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar7 + 0x48);
        if (iVar4 == 0) {
          lVar7 = *plVar1 + (ulong)uVar2 * 0x10;
          auVar17 = (**(code **)(lVar7 + 0x138))(plVar1,*(undefined8 *)(lVar7 + 0x140));
          goto code_r0x02924da4;
        }
        lVar7 = func_0x00f78a48(lVar7);
        lVar11 = *plVar1;
        uVar10 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar7) {
              puVar8 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar12 = piVar12 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar7,(ulong)uVar2);
code_r0x02924e68:
        pcVar14 = (code *)*puVar8;
        puVar8 = (undefined8 *)puVar8[1];
      }
      else {
        if (iVar4 == 0) {
          uVar13 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar7 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar11 = *plVar1;
          uVar10 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar7 + 0x18)) {
                lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar7 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar12 = piVar12 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          lVar11 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
          uVar13 = *(undefined8 *)(lVar11 + 8);
        }
        puVar8 = (undefined8 *)func_0x00f78acc(uVar13,lVar7);
        pcVar14 = (code *)*puVar8;
      }
      auVar17 = (*pcVar14)(plVar1,puVar8);
    }
    else if (*(char *)(lVar7 + 0x4a) == '\0') {
      auVar17 = (*pcVar14)(lVar7);
    }
    else {
code_r0x02924d98:
      auVar17 = (*pcVar14)(plVar1,lVar7);
    }
code_r0x02924da4:
    uVar13 = auVar17._8_8_;
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return auVar17._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1649294 | Core.Input.InputGlyphBehaviour.SetGlyphEnabled
// ============================================================

ulong Core_Input_InputGlyphBehaviour__SetGlyphEnabled(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (lVar1 != 0) {
      if (pcRam0000000003ebe9d8 == (code *)0x0) {
        pcRam0000000003ebe9d8 =
             (code *)func_0x00f789d4("UnityEngine.Behaviour::set_enabled(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0321a97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pcRam0000000003ebe9d8)(lVar1,param_2);
      return uVar2;
    }
  }
  else if ((lVar1 != 0) && (lVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar1,0), lVar1 != 0)) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000003ebf4c0)(lVar1,param_2);
    return uVar2;
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb5778 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5778 = 1;
  }
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar3,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = (ulong)(*(long *)(lVar1 + 0x40) != 0);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// ============================================================
// RVA: 0x16492f0 | Core.Input.InputGlyphBehaviour.get_HasTarget
// ============================================================

bool Core_Input_InputGlyphBehaviour__get_HasTarget(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb5778 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5778 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar3,0);
  if ((uVar2 & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0x40) != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



// ============================================================
// RVA: 0x164937c | Core.Input.InputGlyphBehaviour.get_TargetButton
// ============================================================

undefined8 Core_Input_InputGlyphBehaviour__get_TargetButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x1649384 | Core.Input.InputGlyphBehaviour.TryGetSpriteRefFromMapping
// ============================================================

undefined4
Core_Input_InputGlyphBehaviour__TryGetSpriteRefFromMapping
          (long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if ((bRam0000000003eb577a & 1) == 0) {
    func_0x00f78a20(0x3d20a50);
    bRam0000000003eb577a = 1;
  }
  if (param_1 == 0) {
LAB_01649510:
    func_0x00f78af4();
    if ((bRam0000000003eb577c & 1) == 0) {
      func_0x00f78a20(0x3d22848);
      bRam0000000003eb577c = 1;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x18);
    }
    return uVar4;
  }
  if (0 < (int)*(ulong *)(param_1 + 0x18)) {
    uVar6 = 0;
    uVar2 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
    puVar7 = (undefined8 *)(param_1 + 0x30);
    do {
      if (uVar2 <= uVar6) {
        uVar5 = func_0x00f78b24();
        func_0x00f78ac0(uVar5,0);
        goto LAB_01649510;
      }
      iVar3 = *(int *)(puVar7 + -1);
      uVar5 = *puVar7;
      uVar2 = /*System.String$$op_Inequality*/ func_0x029bd9d4(puVar7[-2],param_2,0);
      if ((uVar2 & 1) == 0) {
        if ((bRam0000000003eb577c & 1) == 0) {
          func_0x00f78a20(0x3d22848);
          bRam0000000003eb577c = 1;
        }
        if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x18);
        }
        if (((*(ushort *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Input.ControllerRemappingsNative_TypeInfo*/ lRam0000000003d20a50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar1 = Core_Input_ControllerRemappingsNative__GetRemappedButton(uVar4,iVar3);
        if (iVar1 == iVar3) goto code_r0x016494e4;
        if (0 < *(int *)(param_1 + 0x18)) {
          iVar3 = 0;
          goto code_r0x016494b4;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      uVar2 = (ulong)*(uint *)(param_1 + 0x18);
      puVar7 = puVar7 + 3;
    } while ((long)uVar6 < (long)(int)*(uint *)(param_1 + 0x18));
  }
  goto LAB_0164941c;
  while (iVar3 = iVar3 + 1, *(int *)(param_1 + 0x18) != iVar3) {
code_r0x016494b4:
    if (*(int *)(param_1 + (long)iVar3 * 0x18 + 0x28) == iVar1) {
      uVar5 = *(undefined8 *)(param_1 + (long)iVar3 * 0x18 + 0x30);
code_r0x016494e4:
      uVar4 = 1;
      goto LAB_016494e8;
    }
  }
LAB_0164941c:
  uVar5 = 0;
  uVar4 = 0;
LAB_016494e8:
  *param_3 = uVar5;
  return uVar4;
}



// ============================================================
// RVA: 0x1649570 | Core.Input.InputGlyphBehaviour.OnInputFamilyChanged
// ============================================================

undefined1 *
Core_Input_InputGlyphBehaviour__OnInputFamilyChanged(long param_1,int param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long *extraout_x8;
  long *extraout_x8_00;
  long lVar18;
  undefined1 *puVar19;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar20;
  undefined8 unaff_x22;
  undefined8 uVar21;
  long *plVar22;
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
  if ((bRam0000000003eb577b & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb577b = 1;
  }
  uVar21 = *(undefined8 *)(param_1 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar10 = (undefined1 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar21,0);
  if ((int)puVar10 == 0) {
    return puVar10;
  }
  puVar10 = (undefined1 *)Core_Input_InputGlyphBehaviour__SetGlyphEnabled(param_1,0);
  plVar22 = (long *)(param_1 + 0x48);
  *plVar22 = 0;
  if (param_2 - 7U < 0xfffffffb) {
    return puVar10;
  }
  if (param_3 == 0) {
    return puVar10;
  }
  lVar11 = 0x20;
  if (param_2 != 2) {
    lVar11 = 0x18;
  }
  uVar21 = *(undefined8 *)(param_1 + lVar11);
  puVar10 = (undefined1 *)/*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar21,0);
  if (((ulong)puVar10 & 1) != 0) {
    return puVar10;
  }
  puVar10 = (undefined1 *)
            Core_Input_InputGlyphBehaviour__TryGetSpriteRefFromMapping(param_3,uVar21,plVar22);
  if ((int)puVar10 == 0) {
    return puVar10;
  }
  lVar11 = *plVar22;
  if ((bRam0000000003eb5782 & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    bRam0000000003eb5782 = 1;
  }
  lVar18 = **(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8);
  if ((lVar18 == 0) || (lVar11 == 0)) {
    puVar10 = (undefined1 *)func_0x00f78af4();
    *(undefined4 *)(puVar10 + 0x6c) = 0xffffffff;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return puVar10;
  }
  puVar10 = *(undefined1 **)(lVar18 + 0x30);
  lVar18 = *(long *)(lVar18 + 0x10);
  if ((bRam0000000003eb5693 & 1) == 0) {
    func_0x00f78a20(0x3d26968,lVar18,puVar10,0);
    func_0x00f78a20(0x3d51bd8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5693 = 1;
  }
  plVar22 = *(long **)(lVar11 + 0x10);
  if (plVar22 == (long *)0x0) {
    return (undefined1 *)0x0;
  }
  uVar21 = (**(code **)(*plVar22 + 0x1a8))(plVar22,*(undefined8 *)(*plVar22 + 0x1b0));
  puVar9 = (undefined1 *)/*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar21,0);
  if (((ulong)puVar9 & 1) != 0) {
    return puVar9;
  }
  uVar21 = *(undefined8 *)(lVar11 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar15 = (undefined8 *)0x0;
  puVar9 = (undefined1 *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar21,0);
  if ((int)puVar9 == 0) {
    return puVar9;
  }
  plVar22 = *(long **)(lVar11 + 0x10);
  auVar24._8_8_ = plVar22;
  auVar24._0_8_ = lVar18;
  puVar9 = (undefined1 *)func_0x00f78aec(/*Core.Assets.AssetManager.AssetLoadSuccessHandler_TypeInfo*/ uRam0000000003d26968);
  puVar5 = puRam0000000003d51bd8;
  *(undefined8 *)(puVar9 + 0x10) = *puRam0000000003d51bd8;
  *(long *)(puVar9 + 0x20) = lVar11;
  *(undefined8 **)(puVar9 + 0x28) = puVar5;
  if (lVar18 == 0) {
    auVar26 = func_0x00f78af4();
    puVar10 = auVar26._0_8_;
    *(undefined8 *)(puVar10 + 0x10) = *puVar15;
    *(long *)(puVar10 + 0x20) = auVar26._8_8_;
    *(undefined8 **)(puVar10 + 0x28) = puVar15;
    return puVar10;
  }
  puVar17 = (undefined1 *)0x0;
  puVar6 = &stack0xffffffffffffffc0;
  puVar23 = &stack0xfffffffffffffff0;
  puVar19 = (undefined1 *)0x0;
  uVar21 = 0x3eb5000;
  puVar13 = puVar10;
  puVar16 = puVar9;
  if ((bRam0000000003eb567d & 1) == 0) {
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb567d = 1;
  }
  if (plVar22 == (long *)0x0) {
    func_0x00f78af4();
    plVar22 = extraout_x8_00;
  }
  else {
    plVar22 = (long *)(**(code **)(*plVar22 + 0x198))(plVar22,*(undefined8 *)(*plVar22 + 0x1a0));
    auVar25._8_8_ = plVar22;
    auVar25._0_8_ = lVar18;
    if ((plVar22 == (long *)0x0) || (*plVar22 == /*string_TypeInfo*/ lRam0000000003d24dd0)) {
      puVar14 = (undefined1 *)0x0;
      puVar20 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      puVar6 = (undefined1 *)register0x00000008;
      puVar13 = puVar10;
      puVar16 = puVar9;
      puVar17 = puVar19;
      puVar19 = unaff_x19;
      puVar9 = unaff_x20;
      puVar10 = unaff_x21;
      uVar21 = unaff_x24;
      puVar23 = unaff_x29;
      auVar24 = auVar26;
      goto Core_Assets_AssetManager__RequestAsset;
    }
  }
  unaff_x30 = Core_Assets_AssetManager__RequestMultipleAssets;
  auVar25 = func_0x00f78e5c(plVar22);
  puVar14 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  puVar20 = (undefined1 *)0x0;
Core_Assets_AssetManager__RequestAsset:
  do {
    uVar12 = auVar25._8_8_;
    lVar11 = auVar25._0_8_;
    *(undefined8 *)(puVar6 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar6 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar6 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar6 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar6 + -0x40) = uVar21;
    *(long *)(puVar6 + -0x38) = auVar24._8_8_;
    *(long *)(puVar6 + -0x30) = auVar24._0_8_;
    *(undefined1 **)(puVar6 + -0x28) = puVar10;
    *(undefined1 **)(puVar6 + -0x20) = puVar9;
    *(undefined1 **)(puVar6 + -0x18) = puVar19;
    *(undefined1 **)(puVar6 + -0x10) = puVar23;
    *(code **)(puVar6 + -8) = unaff_x30;
    unaff_x26 = 0x3eb5000;
    puVar10 = puVar14;
    puVar9 = puVar20;
    puVar19 = puVar13;
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
    if (*(long *)(lVar11 + 0x30) != 0) {
      puVar10 = puVar6 + -0xf8;
      puVar9 = puRam0000000003d2fec0;
      iVar7 = /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$TryGetValue*/ func_0x01ed9418(*(long *)(lVar11 + 0x30),puVar13);
      if ((iVar7 == 0) || (uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar12,0), (uVar8 & 1) != 0)) {
        return (undefined1 *)0x0;
      }
      if (*(long *)(lVar11 + 0x20) != 0) {
        puVar10 = puVar6 + -0x100;
        puVar9 = puRam0000000003d2fad0;
        uVar8 = /*System.Collections.Generic.Dictionary<string, AssetManagerHandle>$$TryGetValue*/ func_0x01ec0ed8(*(long *)(lVar11 + 0x20),uVar12);
        if ((uVar8 & 1) == 0) {
          puVar10 = puVar13;
          puVar9 = puVar14;
          Core_Assets_AssetManager__AddAsset(puVar6 + -0xf0,lVar11,uVar12);
          uVar3 = *(undefined4 *)(puVar6 + -0xf0);
          *(undefined4 *)(puVar6 + -0x100) = uVar3;
          puVar19 = puVar20;
code_r0x01635e94:
          uVar4 = *(uint *)(lVar11 + 0x38);
          puVar20 = (undefined1 *)(ulong)uVar4;
          *(uint *)(lVar11 + 0x38) = uVar4 + 1;
          lVar18 = *(long *)(lVar11 + 0x10);
          if (lVar18 != 0) {
            *(uint *)(puVar6 + -0xf0) = uVar4;
            *(undefined4 *)(puVar6 + -0xec) = uVar3;
            *(undefined1 **)(puVar6 + -0xe8) = puVar16;
            *(undefined1 **)(puVar6 + -0xe0) = puVar17;
            *(undefined8 *)(puVar6 + -0xd8) = 0;
            puVar10 = puRam0000000003d3ccc0;
            /*System.Collections.Generic.List<AssetManager.AssetRequest>$$Add*/ func_0x024afe2c(lVar18,puVar6 + -0xf0);
            if (*(long *)(lVar11 + 0x28) != 0) {
              puVar10 = (undefined1 *)(ulong)*(uint *)(puVar6 + -0x100);
              puVar9 = puRam0000000003d2dfd0;
              /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManagerHandle>$$set_Item*/ func_0x01e2cb1c(*(long *)(lVar11 + 0x28),puVar20);
              if ((*(long *)(puVar6 + -0xf8) != 0) &&
                 (lVar18 = *(long *)(*(long *)(puVar6 + -0xf8) + 0x20), lVar18 != 0)) {
                /*System.Collections.Generic.HashSet<AssetManagerHandle>$$Add*/ func_0x021cf8ec(lVar18,*(undefined4 *)(puVar6 + -0x100),uRam0000000003d35c70);
                return puVar20;
              }
            }
          }
        }
        else if (*(long *)(lVar11 + 0x18) != 0) {
          puVar10 = puRam0000000003d2e030;
          /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$get_Item*/ func_0x01e2fa1c(puVar6 + -0xf0,*(long *)(lVar11 + 0x18),*(undefined4 *)(puVar6 + -0x100));
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
          lVar18 = *(long *)(lVar11 + 0x18);
          if (lVar18 != 0) {
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
            puVar10 = puVar6 + -0xf0;
            puVar9 = puRam0000000003d2e038;
            /*System.Collections.Generic.Dictionary<AssetManagerHandle, AssetManager.Asset>$$set_Item*/ func_0x01e2fae4(lVar18,*(undefined4 *)(puVar6 + -0x100));
            uVar3 = *(undefined4 *)(puVar6 + -0x100);
            goto code_r0x01635e94;
          }
        }
      }
    }
    auVar24 = func_0x00f78af4();
    plVar22 = auVar24._8_8_;
    *(undefined1 **)(puVar6 + -0x1c0) = puVar14;
    *(undefined1 **)(puVar6 + -0x1b8) = puVar13;
    *(undefined1 **)(puVar6 + -0x1b0) = puVar20;
    *(undefined1 **)(puVar6 + -0x1a8) = puVar16;
    *(undefined1 **)(puVar6 + -0x1a0) = puVar17;
    *(long *)(puVar6 + -0x198) = lVar11;
    *(undefined1 **)(puVar6 + -400) = puVar6 + -0x10;
    *(code **)(puVar6 + -0x188) = Core_Assets_AssetManager__RequestAsset;
    puVar23 = puVar6 + -400;
    uVar21 = 0x3eb5000;
    puVar13 = puVar10;
    puVar16 = puVar9;
    puVar17 = puVar19;
    if ((bRam0000000003eb567c & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb567c = 1;
    }
    unaff_x25 = uVar12;
    if (plVar22 == (long *)0x0) {
      func_0x00f78af4();
      plVar22 = extraout_x8;
LAB_01635fe4:
      unaff_x30 = Core_Assets_AssetManager__RequestSpriteAsset;
      auVar25 = func_0x00f78e5c(plVar22);
      puVar14 = (undefined1 *)0x0;
      puVar20 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      puVar6 = puVar6 + -0x1c0;
      goto Core_Assets_AssetManager__RequestAsset;
    }
    plVar22 = (long *)(**(code **)(*plVar22 + 0x198))(plVar22,*(undefined8 *)(*plVar22 + 0x1a0));
    auVar25._8_8_ = plVar22;
    auVar25._0_8_ = auVar24._0_8_;
    if ((plVar22 != (long *)0x0) && (*plVar22 != /*string_TypeInfo*/ lRam0000000003d24dd0)) goto LAB_01635fe4;
    puVar14 = (undefined1 *)0x0;
    puVar20 = (undefined1 *)0x0;
    puVar23 = *(undefined1 **)(puVar6 + -400);
    unaff_x30 = *(code **)(puVar6 + -0x188);
    plVar22 = (long *)(puVar6 + -0x1a0);
    plVar1 = (long *)(puVar6 + -0x198);
    plVar2 = (long *)(puVar6 + -0x1a8);
    uVar21 = *(undefined8 *)(puVar6 + -0x1c0);
    auVar24._8_8_ = *(undefined8 *)(puVar6 + -0x1b8);
    auVar24._0_8_ = *(undefined8 *)(puVar6 + -0x1b0);
    puVar6 = puVar6 + -0x180;
    puVar13 = puVar10;
    puVar16 = puVar9;
    puVar17 = puVar19;
    puVar19 = (undefined1 *)*plVar1;
    puVar9 = (undefined1 *)*plVar22;
    puVar10 = (undefined1 *)*plVar2;
  } while( true );
}



// ============================================================
// RVA: 0x16496e0 | Core.Input.InputGlyphBehaviour..ctor
// ============================================================

undefined1  [16] Core_Input_InputGlyphBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
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



