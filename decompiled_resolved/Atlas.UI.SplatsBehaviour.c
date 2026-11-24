// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.SplatsBehaviour

// ============================================================
// RVA: 0x15018fc | Atlas.UI.SplatsBehaviour.PlayRandomSplat
// ============================================================

/* WARNING: Possible PIC construction at 0x015019e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01501ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01501adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01501e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01501f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01502018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01502134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01502230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01502138) */
/* WARNING: Removing unreachable block (ram,0x0150213c) */
/* WARNING: Removing unreachable block (ram,0x01502144) */
/* WARNING: Removing unreachable block (ram,0x01502188) */
/* WARNING: Removing unreachable block (ram,0x01502190) */
/* WARNING: Removing unreachable block (ram,0x01502198) */
/* WARNING: Removing unreachable block (ram,0x015021a8) */
/* WARNING: Removing unreachable block (ram,0x01502220) */
/* WARNING: Removing unreachable block (ram,0x01502228) */
/* WARNING: Removing unreachable block (ram,0x015021b0) */
/* WARNING: Removing unreachable block (ram,0x015021b8) */
/* WARNING: Removing unreachable block (ram,0x015021c0) */
/* WARNING: Removing unreachable block (ram,0x015021cc) */
/* WARNING: Removing unreachable block (ram,0x0150201c) */
/* WARNING: Removing unreachable block (ram,0x01501f20) */
/* WARNING: Removing unreachable block (ram,0x01501f24) */
/* WARNING: Removing unreachable block (ram,0x01501f2c) */
/* WARNING: Removing unreachable block (ram,0x01501e8c) */
/* WARNING: Removing unreachable block (ram,0x01501f48) */
/* WARNING: Removing unreachable block (ram,0x01501e90) */
/* WARNING: Removing unreachable block (ram,0x01501ecc) */
/* WARNING: Removing unreachable block (ram,0x01501ee8) */
/* WARNING: Removing unreachable block (ram,0x01501ef4) */
/* WARNING: Removing unreachable block (ram,0x01501f00) */
/* WARNING: Removing unreachable block (ram,0x01501f10) */
/* WARNING: Removing unreachable block (ram,0x01501ae0) */
/* WARNING: Removing unreachable block (ram,0x01501af8) */
/* WARNING: Removing unreachable block (ram,0x01501b00) */
/* WARNING: Removing unreachable block (ram,0x01501b04) */
/* WARNING: Removing unreachable block (ram,0x01501b08) */
/* WARNING: Removing unreachable block (ram,0x01501b30) */
/* WARNING: Removing unreachable block (ram,0x01501b40) */
/* WARNING: Removing unreachable block (ram,0x025a26ac) */
/* WARNING: Removing unreachable block (ram,0x025a26c4) */
/* WARNING: Removing unreachable block (ram,0x025a26e0) */
/* WARNING: Removing unreachable block (ram,0x025a2710) */
/* WARNING: Removing unreachable block (ram,0x025a2714) */
/* WARNING: Removing unreachable block (ram,0x025a271c) */
/* WARNING: Removing unreachable block (ram,0x025a274c) */
/* WARNING: Removing unreachable block (ram,0x025a2798) */
/* WARNING: Removing unreachable block (ram,0x025a27b4) */
/* WARNING: Removing unreachable block (ram,0x025a27bc) */
/* WARNING: Removing unreachable block (ram,0x025a2824) */
/* WARNING: Removing unreachable block (ram,0x025a27c0) */
/* WARNING: Removing unreachable block (ram,0x025a282c) */
/* WARNING: Removing unreachable block (ram,0x025a28fc) */
/* WARNING: Removing unreachable block (ram,0x025a27d4) */
/* WARNING: Removing unreachable block (ram,0x025a2728) */
/* WARNING: Removing unreachable block (ram,0x01501ab4) */
/* WARNING: Removing unreachable block (ram,0x01501ab8) */
/* WARNING: Removing unreachable block (ram,0x01501b64) */
/* WARNING: Removing unreachable block (ram,0x01501acc) */
/* WARNING: Removing unreachable block (ram,0x01501b7c) */
/* WARNING: Removing unreachable block (ram,0x01501ad4) */
/* WARNING: Removing unreachable block (ram,0x015019e4) */
/* WARNING: Removing unreachable block (ram,0x015019ec) */
/* WARNING: Removing unreachable block (ram,0x015019f8) */
/* WARNING: Removing unreachable block (ram,0x01502234) */
/* WARNING: Removing unreachable block (ram,0x0150223c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_SplatsBehaviour__PlayRandomSplat(ulong param_1,undefined8 param_2,long *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  int extraout_w1;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  undefined4 uVar17;
  long lVar18;
  long lVar19;
  undefined4 *puVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  long unaff_x21;
  long lVar24;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar25;
  uint uVar26;
  long unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  undefined1 **ppuVar27;
  undefined1 *puVar28;
  undefined *puVar29;
  ulong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  lVar18 = *(long *)(param_1 + 0x18);
  if (lVar18 != 0) {
    uVar26 = *(uint *)(lVar18 + 0x18);
    uVar25 = (ulong)uVar26;
    if ((int)uVar26 < 1) {
      return param_1;
    }
    uVar23 = 0;
    do {
      if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_01501a44;
      unaff_x26 = (long)(int)uVar23;
      lVar18 = lVar18 + unaff_x26 * 0x18;
      unaff_x21 = *(long *)(lVar18 + 0x20);
      if (unaff_x21 == 0) break;
      unaff_x27 = *(long *)(lVar18 + 0x28);
      unaff_x28 = *(ulong *)(lVar18 + 0x30);
      param_3 = (long *)((long)&MACH_HEADER.cputype + 1);
      uVar8 = /*System.String$$Equals*/ func_0x029caa48(unaff_x21,param_2,5,0);
      if ((int)uVar8 != 0) {
        if (unaff_x27 != 0) {
          uVar26 = *(uint *)(unaff_x27 + 0x18);
          unaff_x22 = (ulong)uVar26;
          if (uVar26 == 0) {
            return uVar8;
          }
          if ((int)uVar26 < 2) {
            unaff_x23 = 0;
            goto LAB_015019c8;
          }
          uVar26 = 0;
          goto code_r0x01501994;
        }
        break;
      }
      uVar23 = uVar23 + 1;
      if (uVar23 == uVar26) {
        return uVar8;
      }
      lVar18 = *(long *)(param_1 + 0x18);
    } while (lVar18 != 0);
  }
  uVar25 = func_0x00f78af4();
  return uVar25;
  while (bVar6 = uVar26 < 9, uVar26 = uVar26 + 1, bVar6) {
code_r0x01501994:
    param_3 = (long *)0x0;
    unaff_x23 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,unaff_x22);
    if ((int)unaff_x23 != (int)unaff_x28) break;
  }
  unaff_x22 = (ulong)*(uint *)(unaff_x27 + 0x18);
LAB_015019c8:
  if ((uint)unaff_x23 < (uint)unaff_x22) {
    uVar14 = *(undefined8 *)(unaff_x27 + (long)(int)(uint)unaff_x23 * 8 + 0x20);
    param_3 = (long *)0x0;
    puVar29 = &UNK_015019e4;
    uVar8 = param_1;
  }
  else {
LAB_01501a44:
    uVar14 = func_0x00f78b24();
    puVar29 = &Atlas_UI_SplatsBehaviour__PlaySplat;
    auVar31 = func_0x00f78ac0(uVar14,0);
    uVar14 = auVar31._8_8_;
    uVar8 = auVar31._0_8_;
  }
  auVar2._8_8_ = uVar8;
  auVar2._0_8_ = uVar14;
  auVar31._8_8_ = uVar14;
  auVar31._0_8_ = uVar8;
  uVar8 = 0x18;
  puVar5 = auStack_c0;
  ppuVar27 = &puStack_70;
  plVar15 = param_3;
  uStack_a0 = uVar25;
  uStack_98 = unaff_x23;
  uStack_90 = unaff_x22;
  lStack_88 = unaff_x21;
  uStack_80 = param_1;
  uStack_78 = param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  puStack_68 = puVar29;
  if ((bRam0000000003eb4cf2 & 1) == 0) {
    func_0x00f78a20(0x3d3da58);
    func_0x00f78a20(0x3d24b70);
    bRam0000000003eb4cf2 = 1;
  }
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puVar29 = &UNK_01501ab4;
code_r0x01501b80:
  uVar22 = auVar31._8_8_;
  uVar13 = auVar31._0_8_;
  uVar11 = 0x3eb4000;
  *(undefined8 *)(puVar5 + -0x30) = 0x3eb4000;
  *(long *)(puVar5 + -0x28) = auVar2._8_8_;
  *(long **)(puVar5 + -0x20) = param_3;
  *(long *)(puVar5 + -0x18) = auVar2._0_8_;
  *(undefined1 ***)(puVar5 + -0x10) = ppuVar27;
  *(undefined **)(puVar5 + -8) = puVar29;
  puVar28 = puVar5 + -0x10;
  lVar18 = 0x3eb4000;
  plVar16 = plVar15;
  if ((bRam0000000003eb4cf5 & 1) == 0) {
    func_0x00f78a20(0x3d33780);
    func_0x00f78a20(0x3d33788);
    func_0x00f78a20(0x3d33790);
    func_0x00f78a20(0x3d3da68);
    bRam0000000003eb4cf5 = 1;
    plVar16 = plVar15;
  }
  *(undefined8 *)(puVar5 + -0x48) = 0;
  *(undefined8 *)(puVar5 + -0x50) = 0;
  *(undefined8 *)(puVar5 + -0x38) = 0;
  *(undefined8 *)(puVar5 + -0x40) = 0;
  uVar9 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar22,0);
  if ((uVar9 & 1) != 0) {
    return 0;
  }
  if (*(long *)(uVar13 + 0x28) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      puVar10 = (ulong *)___cxa_begin_catch();
      uVar22 = *puVar10;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<SplatsBehaviour.PlayingSplat>$$Dispose*/ func_0x01f850ac(puVar5 + -0x50,uRam0000000003d33780);
      if (uVar22 == 0) {
        return 0;
      }
      func_0x00f78ac0(uVar22,0);
    }
    puVar29 = &Atlas_UI_SplatsBehaviour__TryGetSplatDataById;
    auVar32 = __Unwind_Resume();
    puVar4 = puVar5 + -0x60;
    do {
      uVar14 = auVar32._8_8_;
      lVar24 = auVar32._0_8_;
      *(ulong *)(puVar4 + -0x40) = uVar25;
      *(ulong *)(puVar4 + -0x38) = unaff_x23;
      *(ulong *)(puVar4 + -0x30) = uVar11;
      *(long *)(puVar4 + -0x28) = lVar18;
      *(ulong *)(puVar4 + -0x20) = uVar13;
      *(ulong *)(puVar4 + -0x18) = uVar22;
      *(undefined1 **)(puVar4 + -0x10) = puVar28;
      *(undefined **)(puVar4 + -8) = puVar29;
      plVar15 = plVar16;
      uVar11 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar14,0);
      if ((uVar11 & 1) != 0) {
code_r0x01501d88:
        *plVar16 = 0;
        plVar16[1] = 0;
        plVar16[2] = 0;
        return 0;
      }
      lVar18 = *(long *)(lVar24 + 0x20);
      if (lVar18 != 0) {
        uVar26 = *(uint *)(lVar18 + 0x18);
        if ((int)uVar26 < 1) goto code_r0x01501d88;
        unaff_x23 = 0;
        uVar25 = 0x18;
        while (uVar23 = (uint)unaff_x23, uVar23 < uVar26) {
          lVar19 = lVar18 + (long)(int)uVar23 * 0x18;
          lVar24 = *(long *)(lVar19 + 0x20);
          uVar12 = *(undefined8 *)(lVar19 + 0x28);
          *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)(lVar19 + 0x30);
          *(undefined8 *)(puVar4 + -0x50) = uVar12;
          if (lVar24 == 0) goto code_r0x01501dcc;
          plVar15 = (long *)((long)&MACH_HEADER.cputype + 1);
          iVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar24,uVar14,5,0);
          if (iVar7 != 0) {
            *plVar16 = lVar24;
            lVar18 = *(long *)(puVar4 + -0x50);
            plVar16[2] = *(long *)(puVar4 + -0x48);
            plVar16[1] = lVar18;
            return 1;
          }
          unaff_x23 = (ulong)(uVar23 + 1);
          uVar26 = *(uint *)(lVar18 + 0x18);
          if ((int)uVar26 <= (int)(uVar23 + 1)) goto code_r0x01501d88;
        }
        uVar12 = func_0x00f78b24();
        func_0x00f78ac0(uVar12,0);
      }
code_r0x01501dcc:
      auVar31 = func_0x00f78af4();
      lVar19 = auVar31._8_8_;
      puVar5 = puVar4 + -0xa0;
      *(long *)(puVar4 + -0x80) = lVar18;
      *(long *)(puVar4 + -0x78) = lVar24;
      *(undefined8 *)(puVar4 + -0x70) = uVar14;
      *(long **)(puVar4 + -0x68) = plVar16;
      *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x10;
      *(undefined **)(puVar4 + -0x58) = &Atlas_UI_SplatsBehaviour__StopSplat;
      ppuVar27 = (undefined1 **)(puVar4 + -0x60);
      uVar11 = 0x3eb4000;
      if ((bRam0000000003eb4cf3 & 1) == 0) {
        func_0x00f78a20(0x3d3da60);
        func_0x00f78a20(0x3d3da70);
        func_0x00f78a20(0x3d3da78);
        func_0x00f78a20(0x3d3f508);
        func_0x00f78a20(0x3d1e670);
        func_0x00f78a20(0x3d64448);
        func_0x00f78a20(0x3d28fb0);
        bRam0000000003eb4cf3 = 1;
      }
      *(undefined8 *)(puVar4 + -0x98) = 0;
      *(undefined8 *)(puVar4 + -0x90) = 0;
      *(undefined8 *)(puVar4 + -0x88) = 0;
      param_3 = (long *)func_0x00f78aec(/*Atlas.UI.SplatsBehaviour.<>c__DisplayClass10_0_TypeInfo*/ uRam0000000003d28fb0);
      /*Atlas.UI.SplatsBehaviour.<>c__DisplayClass10_0$$.ctor*/ func_0x0156b1d8(param_3,0);
      if (param_3 != (long *)0x0) goto code_r0x01501e7c;
      uVar13 = func_0x00f78af4();
      *(undefined8 *)(puVar4 + -0xd0) = 0x3eb4000;
      *(long *)(puVar4 + -200) = lVar19;
      *(undefined8 *)(puVar4 + -0xc0) = 0;
      *(long *)(puVar4 + -0xb8) = auVar31._0_8_;
      *(undefined1 ***)(puVar4 + -0xb0) = ppuVar27;
      *(undefined **)(puVar4 + -0xa8) = &Atlas_UI_SplatsBehaviour__Awake;
      puVar20 = *(undefined4 **)(uVar13 + 0x18);
      if (puVar20 != (undefined4 *)0x0) {
        if (0 < (int)*(ulong *)(puVar20 + 6)) {
          uVar21 = *(ulong *)(puVar20 + 6) & 0xffffffff;
          uVar22 = uVar21 + 1 & 0x1fffffffe;
          uVar21 = uVar21 - 1;
          uVar9 = _UNK_033f8650;
          uVar30 = _UNK_033f8658;
          do {
            if (uVar9 <= uVar21) {
              puVar20[0xc] = 0xffffffff;
            }
            if (uVar30 <= uVar21) {
              puVar20[0x12] = 0xffffffff;
            }
            uVar9 = uVar9 + 2;
            uVar30 = uVar30 + 2;
            uVar22 = uVar22 - 2;
            puVar20 = puVar20 + 0xc;
          } while (uVar22 != 0);
        }
        lVar18 = *(long *)(uVar13 + 0x20);
        auVar31._8_8_ = lVar19;
        auVar31._0_8_ = lVar18;
        if (lVar18 != 0) {
          if (*(int *)(lVar18 + 0x18) < 1) {
            return uVar13;
          }
          auVar31._8_8_ = 0x18;
          auVar1._8_8_ = 0x18;
          auVar1._0_8_ = lVar18;
          if (*(int *)(lVar18 + 0x18) == 0) {
            uVar14 = func_0x00f78b24();
            func_0x00f78ac0(uVar14,0);
          }
          else {
            lVar24 = *(long *)(lVar18 + 0x28);
            auVar31 = auVar1;
            if (lVar24 != 0) {
              *(undefined8 *)(puVar4 + -0x100) = 0x3eb4000;
              *(undefined8 *)(puVar4 + -0xf8) = 0x18;
              *(undefined8 *)(puVar4 + -0xf0) = 0;
              *(long *)(puVar4 + -0xe8) = lVar18;
              *(undefined1 **)(puVar4 + -0xe0) = puVar4 + -0xb0;
              *(undefined **)(puVar4 + -0xd8) = &UNK_0150201c;
              if (pcRam0000000003ebf4c0 == (code *)0x0) {
                pcRam0000000003ebf4c0 =
                     (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
              }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar25 = (*pcRam0000000003ebf4c0)(lVar24,0);
              return uVar25;
            }
          }
        }
      }
      uVar22 = func_0x00f78af4();
      *(ulong *)(puVar4 + -0x130) = unaff_x28;
      *(long *)(puVar4 + -0x128) = unaff_x27;
      *(long *)(puVar4 + -0x120) = unaff_x26;
      *(ulong *)(puVar4 + -0x118) = uVar8;
      *(ulong *)(puVar4 + -0x110) = uVar25;
      *(ulong *)(puVar4 + -0x108) = unaff_x23;
      *(undefined8 *)(puVar4 + -0x100) = 0x3eb4000;
      *(long *)(puVar4 + -0xf8) = auVar31._8_8_;
      *(undefined8 *)(puVar4 + -0xf0) = 0;
      *(long *)(puVar4 + -0xe8) = auVar31._0_8_;
      *(undefined1 **)(puVar4 + -0xe0) = puVar4 + -0xb0;
      *(undefined **)(puVar4 + -0xd8) = &Atlas_UI_SplatsBehaviour__Update;
      puVar28 = puVar4 + -0xe0;
      uVar13 = 0x3eb4000;
      uVar9 = uVar22;
      if ((bRam0000000003eb4cf4 & 1) == 0) {
        func_0x00f78a20(0x3d3da70);
        func_0x00f78a20(0x3d3da78);
        func_0x00f78a20(0x3d3da80);
        func_0x00f78a20(0x3d3da88);
        uVar9 = func_0x00f78a20(0x3d24b70);
        bRam0000000003eb4cf4 = 1;
      }
      *(undefined8 *)(puVar4 + -0x148) = 0;
      *(undefined8 *)(puVar4 + -0x140) = 0;
      *(undefined8 *)(puVar4 + -0x138) = 0;
      *(undefined4 *)(puVar4 + -0x150) = 0;
      *(undefined8 *)(puVar4 + -0x168) = 0;
      *(undefined8 *)(puVar4 + -0x170) = 0;
      *(undefined8 *)(puVar4 + -0x158) = 0;
      *(undefined8 *)(puVar4 + -0x160) = 0;
      lVar18 = *(long *)(uVar22 + 0x28);
      if (lVar18 == 0) {
code_r0x0150227c:
        uVar25 = func_0x00f78af4();
        *(ulong *)(puVar4 + -0x1d0) = uVar11;
        *(long *)(puVar4 + -0x1c8) = lVar18;
        *(ulong *)(puVar4 + -0x1c0) = uVar13;
        *(ulong *)(puVar4 + -0x1b8) = uVar22;
        *(undefined1 **)(puVar4 + -0x1b0) = puVar28;
        *(undefined **)(puVar4 + -0x1a8) = &Atlas_UI_SplatsBehaviour___ctor;
        if ((bRam0000000003eb4cf6 & 1) == 0) {
          func_0x00f78a20(0x3d3da50);
          func_0x00f78a20(0x3d1e320);
          bRam0000000003eb4cf6 = 1;
        }
        uVar14 = func_0x00f78aec(/*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>_TypeInfo*/ uRam0000000003d1e320);
        /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$.ctor*/ func_0x025a19e4(uVar14,uRam0000000003d3da50);
        *(undefined8 *)(uVar25 + 0x28) = uVar14;
        *(undefined8 *)(puVar4 + -0x1d0) = *(undefined8 *)(puVar4 + -0x1d0);
        *(undefined8 *)(puVar4 + -0x1c8) = *(undefined8 *)(puVar4 + -0x1c8);
        *(undefined8 *)(puVar4 + -0x1c0) = *(undefined8 *)(puVar4 + -0x1c0);
        *(undefined8 *)(puVar4 + -0x1b8) = *(undefined8 *)(puVar4 + -0x1b8);
        *(undefined8 *)(puVar4 + -0x1b0) = *(undefined8 *)(puVar4 + -0x1b0);
        *(undefined8 *)(puVar4 + -0x1a8) = *(undefined8 *)(puVar4 + -0x1a8);
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return uVar25;
      }
      uVar26 = *(uint *)(lVar18 + 0x18);
      uVar8 = (ulong)uVar26;
      if ((int)uVar26 < 1) {
        return uVar9;
      }
      uVar13 = 0;
      unaff_x26 = 0x3d3da88;
      unaff_x27 = 0x3d24b70;
      while( true ) {
        uVar23 = (uint)uVar13;
        if (*(uint *)(lVar18 + 0x18) <= uVar23) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar24 = *(long *)(lVar18 + 0x10) + (long)(int)uVar23 * 0x10;
        unaff_x23 = *(ulong *)(lVar24 + 0x20);
        auVar32._8_8_ = unaff_x23;
        auVar32._0_8_ = uVar22;
        uVar11 = *(ulong *)(lVar24 + 0x28);
        unaff_x28 = uVar11 + 1;
        if (1 < (int)unaff_x28) break;
        if (*(long *)(uVar22 + 0x28) == 0) goto code_r0x0150227c;
        uVar11 = uVar11 & 0xffffffff00000000 | unaff_x28 & 0xffffffff;
        uVar9 = /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$set_Item*/ func_0x025a2350(*(long *)(uVar22 + 0x28),uVar13,unaff_x23,uVar11,
                                uRam0000000003d3da88);
        uVar13 = (ulong)(uVar23 + 1);
        if ((int)uVar26 <= (int)(uVar23 + 1)) {
          return uVar9;
        }
        lVar18 = *(long *)(uVar22 + 0x28);
        if (lVar18 == 0) goto code_r0x0150227c;
      }
      plVar16 = (long *)(puVar4 + -0x148);
      puVar29 = &UNK_01502138;
      puVar4 = puVar4 + -0x1a0;
    } while( true );
  }
  /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$GetEnumerator*/ func_0x025a31b0(puVar5 + -0x50,*(long *)(uVar13 + 0x28),uRam0000000003d3da68);
  goto code_r0x01501c24;
code_r0x01501e7c:
  param_3[2] = lVar19;
  puVar29 = &UNK_01501e8c;
  auVar2 = auVar31;
  goto code_r0x01501b80;
  while( true ) {
    if (*(long *)(puVar5 + -0x40) == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1501cac);
      (*pcVar3)();
    }
    uVar8 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(puVar5 + -0x40),uVar22,5,0);
    if ((uVar8 & 1) != 0) break;
code_r0x01501c24:
    uVar25 = /*System.Collections.Generic.List.Enumerator<SplatsBehaviour.PlayingSplat>$$MoveNext*/ func_0x01f850b0(puVar5 + -0x50,uRam0000000003d33788);
    if ((uVar25 & 1) == 0) {
      uVar17 = 0x4a;
      goto code_r0x01501c60;
    }
  }
  uVar17 = 0x4c;
code_r0x01501c60:
  *(undefined4 *)(puVar5 + -0x60) = uVar17;
  /*System.Collections.Generic.List.Enumerator<SplatsBehaviour.PlayingSplat>$$Dispose*/ func_0x01f850ac(puVar5 + -0x50,uRam0000000003d33780);
  if (*(int *)(puVar5 + -0x60) != 0x4c) {
    uVar25 = 0;
  }
  return uVar25;
}



// ============================================================
// RVA: 0x1501a50 | Atlas.UI.SplatsBehaviour.PlaySplat
// ============================================================

/* WARNING: Possible PIC construction at 0x01501ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01501adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01501e88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01501f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01502018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01502134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01502230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01502138) */
/* WARNING: Removing unreachable block (ram,0x0150213c) */
/* WARNING: Removing unreachable block (ram,0x01502144) */
/* WARNING: Removing unreachable block (ram,0x01502188) */
/* WARNING: Removing unreachable block (ram,0x01502190) */
/* WARNING: Removing unreachable block (ram,0x01502198) */
/* WARNING: Removing unreachable block (ram,0x015021a8) */
/* WARNING: Removing unreachable block (ram,0x01502220) */
/* WARNING: Removing unreachable block (ram,0x01502228) */
/* WARNING: Removing unreachable block (ram,0x015021b0) */
/* WARNING: Removing unreachable block (ram,0x015021b8) */
/* WARNING: Removing unreachable block (ram,0x015021c0) */
/* WARNING: Removing unreachable block (ram,0x015021cc) */
/* WARNING: Removing unreachable block (ram,0x0150201c) */
/* WARNING: Removing unreachable block (ram,0x01501f20) */
/* WARNING: Removing unreachable block (ram,0x01501f24) */
/* WARNING: Removing unreachable block (ram,0x01501f2c) */
/* WARNING: Removing unreachable block (ram,0x01501e8c) */
/* WARNING: Removing unreachable block (ram,0x01501f48) */
/* WARNING: Removing unreachable block (ram,0x01501e90) */
/* WARNING: Removing unreachable block (ram,0x01501ecc) */
/* WARNING: Removing unreachable block (ram,0x01501ee8) */
/* WARNING: Removing unreachable block (ram,0x01501ef4) */
/* WARNING: Removing unreachable block (ram,0x01501f00) */
/* WARNING: Removing unreachable block (ram,0x01501f10) */
/* WARNING: Removing unreachable block (ram,0x01501ae0) */
/* WARNING: Removing unreachable block (ram,0x01501af8) */
/* WARNING: Removing unreachable block (ram,0x01501b00) */
/* WARNING: Removing unreachable block (ram,0x01501b04) */
/* WARNING: Removing unreachable block (ram,0x01501b08) */
/* WARNING: Removing unreachable block (ram,0x01501b30) */
/* WARNING: Removing unreachable block (ram,0x01501b40) */
/* WARNING: Removing unreachable block (ram,0x025a26ac) */
/* WARNING: Removing unreachable block (ram,0x025a26c4) */
/* WARNING: Removing unreachable block (ram,0x025a26e0) */
/* WARNING: Removing unreachable block (ram,0x025a2710) */
/* WARNING: Removing unreachable block (ram,0x025a2714) */
/* WARNING: Removing unreachable block (ram,0x025a271c) */
/* WARNING: Removing unreachable block (ram,0x025a274c) */
/* WARNING: Removing unreachable block (ram,0x025a2798) */
/* WARNING: Removing unreachable block (ram,0x025a27b4) */
/* WARNING: Removing unreachable block (ram,0x025a27bc) */
/* WARNING: Removing unreachable block (ram,0x025a2824) */
/* WARNING: Removing unreachable block (ram,0x025a27c0) */
/* WARNING: Removing unreachable block (ram,0x025a282c) */
/* WARNING: Removing unreachable block (ram,0x025a28fc) */
/* WARNING: Removing unreachable block (ram,0x025a27d4) */
/* WARNING: Removing unreachable block (ram,0x025a2728) */
/* WARNING: Removing unreachable block (ram,0x01501ab4) */
/* WARNING: Removing unreachable block (ram,0x01501ab8) */
/* WARNING: Removing unreachable block (ram,0x01501b64) */
/* WARNING: Removing unreachable block (ram,0x01501acc) */
/* WARNING: Removing unreachable block (ram,0x01501b7c) */
/* WARNING: Removing unreachable block (ram,0x01501ad4) */
/* WARNING: Removing unreachable block (ram,0x01502234) */
/* WARNING: Removing unreachable block (ram,0x0150223c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_SplatsBehaviour__PlaySplat(undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int extraout_w1;
  long *plVar14;
  long *plVar15;
  undefined4 uVar16;
  long lVar17;
  undefined4 *puVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  ulong unaff_x28;
  undefined1 *puVar24;
  undefined *puVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = param_2;
  auVar28._8_8_ = param_2;
  auVar28._0_8_ = param_1;
  puVar6 = auStack_60;
  puVar24 = &stack0xfffffffffffffff0;
  plVar14 = param_3;
  if ((bRam0000000003eb4cf2 & 1) == 0) {
    func_0x00f78a20(0x3d3da58);
    func_0x00f78a20(0x3d24b70);
    bRam0000000003eb4cf2 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  puVar25 = (undefined *)0x1501ab4;
code_r0x01501b80:
  uVar20 = auVar28._8_8_;
  uVar10 = auVar28._0_8_;
  uVar9 = 0x3eb4000;
  *(undefined8 *)(puVar6 + -0x30) = 0x3eb4000;
  *(long *)(puVar6 + -0x28) = auVar3._8_8_;
  *(long **)(puVar6 + -0x20) = param_3;
  *(long *)(puVar6 + -0x18) = auVar3._0_8_;
  *(undefined1 **)(puVar6 + -0x10) = puVar24;
  *(undefined **)(puVar6 + -8) = puVar25;
  puVar24 = puVar6 + -0x10;
  lVar22 = 0x3eb4000;
  plVar15 = plVar14;
  if ((bRam0000000003eb4cf5 & 1) == 0) {
    func_0x00f78a20(0x3d33780);
    func_0x00f78a20(0x3d33788);
    func_0x00f78a20(0x3d33790);
    func_0x00f78a20(0x3d3da68);
    bRam0000000003eb4cf5 = 1;
    plVar15 = plVar14;
  }
  *(undefined8 *)(puVar6 + -0x48) = 0;
  *(undefined8 *)(puVar6 + -0x50) = 0;
  *(undefined8 *)(puVar6 + -0x38) = 0;
  *(undefined8 *)(puVar6 + -0x40) = 0;
  uVar8 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar20,0);
  if ((uVar8 & 1) != 0) {
    return 0;
  }
  if (*(long *)(uVar10 + 0x28) == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      puVar11 = (ulong *)___cxa_begin_catch();
      uVar20 = *puVar11;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<SplatsBehaviour.PlayingSplat>$$Dispose*/ func_0x01f850ac(puVar6 + -0x50,uRam0000000003d33780);
      if (uVar20 == 0) {
        return 0;
      }
      func_0x00f78ac0(uVar20,0);
    }
    puVar25 = &Atlas_UI_SplatsBehaviour__TryGetSplatDataById;
    auVar27 = __Unwind_Resume();
    puVar5 = puVar6 + -0x60;
    do {
      uVar13 = auVar27._8_8_;
      lVar23 = auVar27._0_8_;
      *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
      *(ulong *)(puVar5 + -0x38) = unaff_x23;
      *(ulong *)(puVar5 + -0x30) = uVar9;
      *(long *)(puVar5 + -0x28) = lVar22;
      *(ulong *)(puVar5 + -0x20) = uVar10;
      *(ulong *)(puVar5 + -0x18) = uVar20;
      *(undefined1 **)(puVar5 + -0x10) = puVar24;
      *(undefined **)(puVar5 + -8) = puVar25;
      plVar14 = plVar15;
      uVar9 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar13,0);
      if ((uVar9 & 1) != 0) {
code_r0x01501d88:
        *plVar15 = 0;
        plVar15[1] = 0;
        plVar15[2] = 0;
        return 0;
      }
      lVar22 = *(long *)(lVar23 + 0x20);
      if (lVar22 != 0) {
        uVar1 = *(uint *)(lVar22 + 0x18);
        if ((int)uVar1 < 1) goto code_r0x01501d88;
        unaff_x23 = 0;
        unaff_x24 = 0x18;
        while (uVar21 = (uint)unaff_x23, uVar21 < uVar1) {
          lVar17 = lVar22 + (long)(int)uVar21 * 0x18;
          lVar23 = *(long *)(lVar17 + 0x20);
          uVar12 = *(undefined8 *)(lVar17 + 0x28);
          *(undefined8 *)(puVar5 + -0x48) = *(undefined8 *)(lVar17 + 0x30);
          *(undefined8 *)(puVar5 + -0x50) = uVar12;
          if (lVar23 == 0) goto code_r0x01501dcc;
          plVar14 = (long *)((long)&MACH_HEADER.cputype + 1);
          iVar7 = /*System.String$$Equals*/ func_0x029caa48(lVar23,uVar13,5,0);
          if (iVar7 != 0) {
            *plVar15 = lVar23;
            lVar22 = *(long *)(puVar5 + -0x50);
            plVar15[2] = *(long *)(puVar5 + -0x48);
            plVar15[1] = lVar22;
            return 1;
          }
          unaff_x23 = (ulong)(uVar21 + 1);
          uVar1 = *(uint *)(lVar22 + 0x18);
          if ((int)uVar1 <= (int)(uVar21 + 1)) goto code_r0x01501d88;
        }
        uVar12 = func_0x00f78b24();
        func_0x00f78ac0(uVar12,0);
      }
code_r0x01501dcc:
      auVar28 = func_0x00f78af4();
      lVar17 = auVar28._8_8_;
      puVar6 = puVar5 + -0xa0;
      *(long *)(puVar5 + -0x80) = lVar22;
      *(long *)(puVar5 + -0x78) = lVar23;
      *(undefined8 *)(puVar5 + -0x70) = uVar13;
      *(long **)(puVar5 + -0x68) = plVar15;
      *(undefined1 **)(puVar5 + -0x60) = puVar5 + -0x10;
      *(undefined **)(puVar5 + -0x58) = &Atlas_UI_SplatsBehaviour__StopSplat;
      puVar24 = puVar5 + -0x60;
      uVar9 = 0x3eb4000;
      if ((bRam0000000003eb4cf3 & 1) == 0) {
        func_0x00f78a20(0x3d3da60);
        func_0x00f78a20(0x3d3da70);
        func_0x00f78a20(0x3d3da78);
        func_0x00f78a20(0x3d3f508);
        func_0x00f78a20(0x3d1e670);
        func_0x00f78a20(0x3d64448);
        func_0x00f78a20(0x3d28fb0);
        bRam0000000003eb4cf3 = 1;
      }
      *(undefined8 *)(puVar5 + -0x98) = 0;
      *(undefined8 *)(puVar5 + -0x90) = 0;
      *(undefined8 *)(puVar5 + -0x88) = 0;
      param_3 = (long *)func_0x00f78aec(/*Atlas.UI.SplatsBehaviour.<>c__DisplayClass10_0_TypeInfo*/ uRam0000000003d28fb0);
      /*Atlas.UI.SplatsBehaviour.<>c__DisplayClass10_0$$.ctor*/ func_0x0156b1d8(param_3,0);
      if (param_3 != (long *)0x0) goto code_r0x01501e7c;
      uVar10 = func_0x00f78af4();
      *(undefined8 *)(puVar5 + -0xd0) = 0x3eb4000;
      *(long *)(puVar5 + -200) = lVar17;
      *(undefined8 *)(puVar5 + -0xc0) = 0;
      *(long *)(puVar5 + -0xb8) = auVar28._0_8_;
      *(undefined1 **)(puVar5 + -0xb0) = puVar24;
      *(undefined **)(puVar5 + -0xa8) = &Atlas_UI_SplatsBehaviour__Awake;
      puVar18 = *(undefined4 **)(uVar10 + 0x18);
      if (puVar18 != (undefined4 *)0x0) {
        if (0 < (int)*(ulong *)(puVar18 + 6)) {
          uVar19 = *(ulong *)(puVar18 + 6) & 0xffffffff;
          uVar20 = uVar19 + 1 & 0x1fffffffe;
          uVar19 = uVar19 - 1;
          uVar8 = _UNK_033f8650;
          uVar26 = _UNK_033f8658;
          do {
            if (uVar8 <= uVar19) {
              puVar18[0xc] = 0xffffffff;
            }
            if (uVar26 <= uVar19) {
              puVar18[0x12] = 0xffffffff;
            }
            uVar8 = uVar8 + 2;
            uVar26 = uVar26 + 2;
            uVar20 = uVar20 - 2;
            puVar18 = puVar18 + 0xc;
          } while (uVar20 != 0);
        }
        lVar22 = *(long *)(uVar10 + 0x20);
        auVar28._8_8_ = lVar17;
        auVar28._0_8_ = lVar22;
        if (lVar22 != 0) {
          if (*(int *)(lVar22 + 0x18) < 1) {
            return uVar10;
          }
          auVar28._8_8_ = 0x18;
          auVar2._8_8_ = 0x18;
          auVar2._0_8_ = lVar22;
          if (*(int *)(lVar22 + 0x18) == 0) {
            uVar13 = func_0x00f78b24();
            func_0x00f78ac0(uVar13,0);
          }
          else {
            lVar23 = *(long *)(lVar22 + 0x28);
            auVar28 = auVar2;
            if (lVar23 != 0) {
              *(undefined8 *)(puVar5 + -0x100) = 0x3eb4000;
              *(undefined8 *)(puVar5 + -0xf8) = 0x18;
              *(undefined8 *)(puVar5 + -0xf0) = 0;
              *(long *)(puVar5 + -0xe8) = lVar22;
              *(undefined1 **)(puVar5 + -0xe0) = puVar5 + -0xb0;
              *(undefined **)(puVar5 + -0xd8) = &UNK_0150201c;
              if (pcRam0000000003ebf4c0 == (code *)0x0) {
                pcRam0000000003ebf4c0 =
                     (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
              }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar9 = (*pcRam0000000003ebf4c0)(lVar23,0);
              return uVar9;
            }
          }
        }
      }
      uVar20 = func_0x00f78af4();
      *(ulong *)(puVar5 + -0x130) = unaff_x28;
      *(undefined8 *)(puVar5 + -0x128) = unaff_x27;
      *(undefined8 *)(puVar5 + -0x120) = unaff_x26;
      *(ulong *)(puVar5 + -0x118) = unaff_x25;
      *(undefined8 *)(puVar5 + -0x110) = unaff_x24;
      *(ulong *)(puVar5 + -0x108) = unaff_x23;
      *(undefined8 *)(puVar5 + -0x100) = 0x3eb4000;
      *(long *)(puVar5 + -0xf8) = auVar28._8_8_;
      *(undefined8 *)(puVar5 + -0xf0) = 0;
      *(long *)(puVar5 + -0xe8) = auVar28._0_8_;
      *(undefined1 **)(puVar5 + -0xe0) = puVar5 + -0xb0;
      *(undefined **)(puVar5 + -0xd8) = &Atlas_UI_SplatsBehaviour__Update;
      puVar24 = puVar5 + -0xe0;
      uVar10 = 0x3eb4000;
      uVar8 = uVar20;
      if ((bRam0000000003eb4cf4 & 1) == 0) {
        func_0x00f78a20(0x3d3da70);
        func_0x00f78a20(0x3d3da78);
        func_0x00f78a20(0x3d3da80);
        func_0x00f78a20(0x3d3da88);
        uVar8 = func_0x00f78a20(0x3d24b70);
        bRam0000000003eb4cf4 = 1;
      }
      *(undefined8 *)(puVar5 + -0x148) = 0;
      *(undefined8 *)(puVar5 + -0x140) = 0;
      *(undefined8 *)(puVar5 + -0x138) = 0;
      *(undefined4 *)(puVar5 + -0x150) = 0;
      *(undefined8 *)(puVar5 + -0x168) = 0;
      *(undefined8 *)(puVar5 + -0x170) = 0;
      *(undefined8 *)(puVar5 + -0x158) = 0;
      *(undefined8 *)(puVar5 + -0x160) = 0;
      lVar22 = *(long *)(uVar20 + 0x28);
      if (lVar22 == 0) {
code_r0x0150227c:
        uVar8 = func_0x00f78af4();
        *(ulong *)(puVar5 + -0x1d0) = uVar9;
        *(long *)(puVar5 + -0x1c8) = lVar22;
        *(ulong *)(puVar5 + -0x1c0) = uVar10;
        *(ulong *)(puVar5 + -0x1b8) = uVar20;
        *(undefined1 **)(puVar5 + -0x1b0) = puVar24;
        *(undefined **)(puVar5 + -0x1a8) = &Atlas_UI_SplatsBehaviour___ctor;
        if ((bRam0000000003eb4cf6 & 1) == 0) {
          func_0x00f78a20(0x3d3da50);
          func_0x00f78a20(0x3d1e320);
          bRam0000000003eb4cf6 = 1;
        }
        uVar13 = func_0x00f78aec(/*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>_TypeInfo*/ uRam0000000003d1e320);
        /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$.ctor*/ func_0x025a19e4(uVar13,uRam0000000003d3da50);
        *(undefined8 *)(uVar8 + 0x28) = uVar13;
        *(undefined8 *)(puVar5 + -0x1d0) = *(undefined8 *)(puVar5 + -0x1d0);
        *(undefined8 *)(puVar5 + -0x1c8) = *(undefined8 *)(puVar5 + -0x1c8);
        *(undefined8 *)(puVar5 + -0x1c0) = *(undefined8 *)(puVar5 + -0x1c0);
        *(undefined8 *)(puVar5 + -0x1b8) = *(undefined8 *)(puVar5 + -0x1b8);
        *(undefined8 *)(puVar5 + -0x1b0) = *(undefined8 *)(puVar5 + -0x1b0);
        *(undefined8 *)(puVar5 + -0x1a8) = *(undefined8 *)(puVar5 + -0x1a8);
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return uVar8;
      }
      uVar1 = *(uint *)(lVar22 + 0x18);
      unaff_x25 = (ulong)uVar1;
      if ((int)uVar1 < 1) {
        return uVar8;
      }
      uVar10 = 0;
      unaff_x26 = 0x3d3da88;
      unaff_x27 = 0x3d24b70;
      while( true ) {
        uVar21 = (uint)uVar10;
        if (*(uint *)(lVar22 + 0x18) <= uVar21) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar23 = *(long *)(lVar22 + 0x10) + (long)(int)uVar21 * 0x10;
        unaff_x23 = *(ulong *)(lVar23 + 0x20);
        auVar27._8_8_ = unaff_x23;
        auVar27._0_8_ = uVar20;
        uVar9 = *(ulong *)(lVar23 + 0x28);
        unaff_x28 = uVar9 + 1;
        if (1 < (int)unaff_x28) break;
        if (*(long *)(uVar20 + 0x28) == 0) goto code_r0x0150227c;
        uVar9 = uVar9 & 0xffffffff00000000 | unaff_x28 & 0xffffffff;
        uVar8 = /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$set_Item*/ func_0x025a2350(*(long *)(uVar20 + 0x28),uVar10,unaff_x23,uVar9,uRam0000000003d3da88
                               );
        uVar10 = (ulong)(uVar21 + 1);
        if ((int)uVar1 <= (int)(uVar21 + 1)) {
          return uVar8;
        }
        lVar22 = *(long *)(uVar20 + 0x28);
        if (lVar22 == 0) goto code_r0x0150227c;
      }
      plVar15 = (long *)(puVar5 + -0x148);
      puVar25 = &UNK_01502138;
      puVar5 = puVar5 + -0x1a0;
    } while( true );
  }
  /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$GetEnumerator*/ func_0x025a31b0(puVar6 + -0x50,*(long *)(uVar10 + 0x28),uRam0000000003d3da68);
  goto code_r0x01501c24;
code_r0x01501e7c:
  param_3[2] = lVar17;
  puVar25 = &UNK_01501e8c;
  auVar3 = auVar28;
  goto code_r0x01501b80;
  while( true ) {
    if (*(long *)(puVar6 + -0x40) == 0) {
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1501cac);
      (*pcVar4)();
    }
    uVar10 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(puVar6 + -0x40),uVar20,5,0);
    if ((uVar10 & 1) != 0) break;
code_r0x01501c24:
    uVar9 = /*System.Collections.Generic.List.Enumerator<SplatsBehaviour.PlayingSplat>$$MoveNext*/ func_0x01f850b0(puVar6 + -0x50,uRam0000000003d33788);
    if ((uVar9 & 1) == 0) {
      uVar16 = 0x4a;
      goto code_r0x01501c60;
    }
  }
  uVar16 = 0x4c;
code_r0x01501c60:
  *(undefined4 *)(puVar6 + -0x60) = uVar16;
  /*System.Collections.Generic.List.Enumerator<SplatsBehaviour.PlayingSplat>$$Dispose*/ func_0x01f850ac(puVar6 + -0x50,uRam0000000003d33780);
  if (*(int *)(puVar6 + -0x60) != 0x4c) {
    uVar9 = 0;
  }
  return uVar9;
}



// ============================================================
// RVA: 0x1501b80 | Atlas.UI.SplatsBehaviour.IsPlaying
// ============================================================

/* WARNING: Possible PIC construction at 0x01501f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01502018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01502134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01502230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01502138) */
/* WARNING: Removing unreachable block (ram,0x0150213c) */
/* WARNING: Removing unreachable block (ram,0x01502144) */
/* WARNING: Removing unreachable block (ram,0x01502188) */
/* WARNING: Removing unreachable block (ram,0x01502190) */
/* WARNING: Removing unreachable block (ram,0x01502198) */
/* WARNING: Removing unreachable block (ram,0x015021a8) */
/* WARNING: Removing unreachable block (ram,0x01502220) */
/* WARNING: Removing unreachable block (ram,0x01502228) */
/* WARNING: Removing unreachable block (ram,0x015021b0) */
/* WARNING: Removing unreachable block (ram,0x015021b8) */
/* WARNING: Removing unreachable block (ram,0x015021c0) */
/* WARNING: Removing unreachable block (ram,0x015021cc) */
/* WARNING: Removing unreachable block (ram,0x0150201c) */
/* WARNING: Removing unreachable block (ram,0x01501f20) */
/* WARNING: Removing unreachable block (ram,0x01501f24) */
/* WARNING: Removing unreachable block (ram,0x01501f2c) */
/* WARNING: Removing unreachable block (ram,0x01502234) */
/* WARNING: Removing unreachable block (ram,0x0150223c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_SplatsBehaviour__IsPlaying(ulong param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int extraout_w1;
  undefined4 *puVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong unaff_x22;
  long lVar15;
  ulong unaff_x23;
  undefined8 unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  ulong unaff_x28;
  undefined1 *puVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  int aiStack_60 [4];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  puVar16 = &stack0xfffffffffffffff0;
  lVar13 = 0x3eb4000;
  if ((bRam0000000003eb4cf5 & 1) == 0) {
    func_0x00f78a20(0x3d33780);
    func_0x00f78a20(0x3d33788);
    func_0x00f78a20(0x3d33790);
    func_0x00f78a20(0x3d3da68);
    bRam0000000003eb4cf5 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  lStack_40 = 0;
  uVar5 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_2,0);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$GetEnumerator*/ func_0x025a31b0(&uStack_50,*(long *)(param_1 + 0x28),uRam0000000003d3da68);
    do {
      uVar5 = /*System.Collections.Generic.List.Enumerator<SplatsBehaviour.PlayingSplat>$$MoveNext*/ func_0x01f850b0(&uStack_50,uRam0000000003d33788);
      if ((uVar5 & 1) == 0) {
        aiStack_60[0] = 0x4a;
        goto code_r0x01501c60;
      }
      if (lStack_40 == 0) {
        func_0x00f78af4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1501cac);
        (*pcVar2)();
      }
      uVar6 = /*System.String$$Equals*/ func_0x029caa48(lStack_40,param_2,5,0);
    } while ((uVar6 & 1) == 0);
    aiStack_60[0] = 0x4c;
code_r0x01501c60:
    /*System.Collections.Generic.List.Enumerator<SplatsBehaviour.PlayingSplat>$$Dispose*/ func_0x01f850ac(&uStack_50,uRam0000000003d33780);
    if (aiStack_60[0] != 0x4c) {
      return 0;
    }
    return uVar5;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    puVar7 = (ulong *)___cxa_begin_catch();
    param_2 = *puVar7;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<SplatsBehaviour.PlayingSplat>$$Dispose*/ func_0x01f850ac(&uStack_50,uRam0000000003d33780);
    if (param_2 == 0) {
      return 0;
    }
    func_0x00f78ac0(param_2,0);
  }
  puVar17 = &Atlas_UI_SplatsBehaviour__TryGetSplatDataById;
  auVar20 = __Unwind_Resume();
  piVar3 = aiStack_60;
  while( true ) {
    uVar9 = auVar20._8_8_;
    lVar14 = auVar20._0_8_;
    *(undefined8 *)((long)piVar3 + -0x40) = unaff_x24;
    *(ulong *)((long)piVar3 + -0x38) = unaff_x23;
    *(ulong *)((long)piVar3 + -0x30) = unaff_x22;
    *(long *)((long)piVar3 + -0x28) = lVar13;
    *(ulong *)((long)piVar3 + -0x20) = param_1;
    *(ulong *)((long)piVar3 + -0x18) = param_2;
    *(undefined1 **)((long)piVar3 + -0x10) = puVar16;
    *(undefined **)((long)piVar3 + -8) = puVar17;
    uVar5 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar9,0);
    if ((uVar5 & 1) != 0) break;
    lVar15 = *(long *)(lVar14 + 0x20);
    if (lVar15 != 0) {
      uVar1 = *(uint *)(lVar15 + 0x18);
      if ((int)uVar1 < 1) break;
      unaff_x23 = 0;
      unaff_x24 = 0x18;
      while (uVar12 = (uint)unaff_x23, uVar12 < uVar1) {
        lVar13 = lVar15 + (long)(int)uVar12 * 0x18;
        lVar14 = *(long *)(lVar13 + 0x20);
        uVar8 = *(undefined8 *)(lVar13 + 0x28);
        *(undefined8 *)((long)piVar3 + -0x48) = *(undefined8 *)(lVar13 + 0x30);
        *(undefined8 *)((long)piVar3 + -0x50) = uVar8;
        if (lVar14 == 0) goto code_r0x01501dcc;
        iVar4 = /*System.String$$Equals*/ func_0x029caa48(lVar14,uVar9,5,0);
        if (iVar4 != 0) {
          *param_3 = lVar14;
          lVar13 = *(long *)((long)piVar3 + -0x50);
          param_3[2] = *(long *)((long)piVar3 + -0x48);
          param_3[1] = lVar13;
          return 1;
        }
        unaff_x23 = (ulong)(uVar12 + 1);
        uVar1 = *(uint *)(lVar15 + 0x18);
        if ((int)uVar1 <= (int)(uVar12 + 1)) goto code_r0x01501d88;
      }
      uVar8 = func_0x00f78b24();
      func_0x00f78ac0(uVar8,0);
    }
code_r0x01501dcc:
    auVar20 = func_0x00f78af4();
    lVar13 = auVar20._8_8_;
    uVar5 = auVar20._0_8_;
    *(long *)((long)piVar3 + -0x80) = lVar15;
    *(long *)((long)piVar3 + -0x78) = lVar14;
    *(undefined8 *)((long)piVar3 + -0x70) = uVar9;
    *(long **)((long)piVar3 + -0x68) = param_3;
    *(undefined1 **)((long)piVar3 + -0x60) = (undefined1 *)((long)piVar3 + -0x10);
    *(undefined **)((long)piVar3 + -0x58) = &Atlas_UI_SplatsBehaviour__StopSplat;
    puVar16 = (undefined1 *)((long)piVar3 + -0x60);
    unaff_x22 = 0x3eb4000;
    if ((bRam0000000003eb4cf3 & 1) == 0) {
      func_0x00f78a20(0x3d3da60);
      func_0x00f78a20(0x3d3da70);
      func_0x00f78a20(0x3d3da78);
      func_0x00f78a20(0x3d3f508);
      func_0x00f78a20(0x3d1e670);
      func_0x00f78a20(0x3d64448);
      func_0x00f78a20(0x3d28fb0);
      bRam0000000003eb4cf3 = 1;
    }
    *(undefined8 *)((long)piVar3 + -0x98) = 0;
    *(undefined8 *)((long)piVar3 + -0x90) = 0;
    *(undefined8 *)((long)piVar3 + -0x88) = 0;
    param_1 = func_0x00f78aec(/*Atlas.UI.SplatsBehaviour.<>c__DisplayClass10_0_TypeInfo*/ uRam0000000003d28fb0);
    /*Atlas.UI.SplatsBehaviour.<>c__DisplayClass10_0$$.ctor*/ func_0x0156b1d8(param_1,0);
    if (param_1 == 0) {
code_r0x01501f5c:
      uVar6 = func_0x00f78af4();
      *(ulong *)((long)piVar3 + -0xd0) = unaff_x22;
      *(long *)((long)piVar3 + -200) = lVar13;
      *(ulong *)((long)piVar3 + -0xc0) = param_1;
      *(ulong *)((long)piVar3 + -0xb8) = uVar5;
      *(undefined1 **)((long)piVar3 + -0xb0) = puVar16;
      *(undefined **)((long)piVar3 + -0xa8) = &Atlas_UI_SplatsBehaviour__Awake;
      puVar10 = *(undefined4 **)(uVar6 + 0x18);
      if (puVar10 != (undefined4 *)0x0) {
        if (0 < (int)*(ulong *)(puVar10 + 6)) {
          uVar11 = *(ulong *)(puVar10 + 6) & 0xffffffff;
          uVar5 = uVar11 + 1 & 0x1fffffffe;
          uVar11 = uVar11 - 1;
          uVar18 = _UNK_033f8650;
          uVar19 = _UNK_033f8658;
          do {
            if (uVar18 <= uVar11) {
              puVar10[0xc] = 0xffffffff;
            }
            if (uVar19 <= uVar11) {
              puVar10[0x12] = 0xffffffff;
            }
            uVar18 = uVar18 + 2;
            uVar19 = uVar19 + 2;
            uVar5 = uVar5 - 2;
            puVar10 = puVar10 + 0xc;
          } while (uVar5 != 0);
        }
        uVar5 = *(ulong *)(uVar6 + 0x20);
        if (uVar5 != 0) {
          if (*(int *)(uVar5 + 0x18) < 1) {
            return uVar6;
          }
          param_1 = 0;
          lVar13 = 0x18;
          if (*(int *)(uVar5 + 0x18) == 0) {
            uVar9 = func_0x00f78b24();
            func_0x00f78ac0(uVar9,0);
          }
          else {
            lVar14 = *(long *)(uVar5 + 0x28);
            if (lVar14 != 0) {
              *(ulong *)((long)piVar3 + -0x100) = unaff_x22;
              *(undefined8 *)((long)piVar3 + -0xf8) = 0x18;
              *(undefined8 *)((long)piVar3 + -0xf0) = 0;
              *(ulong *)((long)piVar3 + -0xe8) = uVar5;
              *(undefined1 **)((long)piVar3 + -0xe0) = (undefined1 *)((long)piVar3 + -0xb0);
              *(undefined **)((long)piVar3 + -0xd8) = &UNK_0150201c;
              if (pcRam0000000003ebf4c0 == (code *)0x0) {
                pcRam0000000003ebf4c0 =
                     (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
              }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar5 = (*pcRam0000000003ebf4c0)(lVar14,0);
              return uVar5;
            }
          }
        }
      }
      param_2 = func_0x00f78af4();
      *(ulong *)((long)piVar3 + -0x130) = unaff_x28;
      *(undefined8 *)((long)piVar3 + -0x128) = unaff_x27;
      *(undefined8 *)((long)piVar3 + -0x120) = unaff_x26;
      *(ulong *)((long)piVar3 + -0x118) = unaff_x25;
      *(undefined8 *)((long)piVar3 + -0x110) = unaff_x24;
      *(ulong *)((long)piVar3 + -0x108) = unaff_x23;
      *(ulong *)((long)piVar3 + -0x100) = unaff_x22;
      *(long *)((long)piVar3 + -0xf8) = lVar13;
      *(ulong *)((long)piVar3 + -0xf0) = param_1;
      *(ulong *)((long)piVar3 + -0xe8) = uVar5;
      *(undefined1 **)((long)piVar3 + -0xe0) = (undefined1 *)((long)piVar3 + -0xb0);
      *(undefined **)((long)piVar3 + -0xd8) = &Atlas_UI_SplatsBehaviour__Update;
      puVar16 = (undefined1 *)((long)piVar3 + -0xe0);
      param_1 = 0x3eb4000;
      uVar5 = param_2;
      if ((bRam0000000003eb4cf4 & 1) == 0) {
        func_0x00f78a20(0x3d3da70);
        func_0x00f78a20(0x3d3da78);
        func_0x00f78a20(0x3d3da80);
        func_0x00f78a20(0x3d3da88);
        uVar5 = func_0x00f78a20(0x3d24b70);
        bRam0000000003eb4cf4 = 1;
      }
      *(undefined8 *)((long)piVar3 + -0x148) = 0;
      *(undefined8 *)((long)piVar3 + -0x140) = 0;
      *(undefined8 *)((long)piVar3 + -0x138) = 0;
      *(undefined4 *)((long)piVar3 + -0x150) = 0;
      *(undefined8 *)((long)piVar3 + -0x168) = 0;
      *(undefined8 *)((long)piVar3 + -0x170) = 0;
      *(undefined8 *)((long)piVar3 + -0x158) = 0;
      *(undefined8 *)((long)piVar3 + -0x160) = 0;
      lVar13 = *(long *)(param_2 + 0x28);
      if (lVar13 == 0) {
code_r0x0150227c:
        uVar5 = func_0x00f78af4();
        *(ulong *)((long)piVar3 + -0x1d0) = unaff_x22;
        *(long *)((long)piVar3 + -0x1c8) = lVar13;
        *(ulong *)((long)piVar3 + -0x1c0) = param_1;
        *(ulong *)((long)piVar3 + -0x1b8) = param_2;
        *(undefined1 **)((long)piVar3 + -0x1b0) = puVar16;
        *(undefined **)((long)piVar3 + -0x1a8) = &Atlas_UI_SplatsBehaviour___ctor;
        if ((bRam0000000003eb4cf6 & 1) == 0) {
          func_0x00f78a20(0x3d3da50);
          func_0x00f78a20(0x3d1e320);
          bRam0000000003eb4cf6 = 1;
        }
        uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>_TypeInfo*/ uRam0000000003d1e320);
        /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$.ctor*/ func_0x025a19e4(uVar9,uRam0000000003d3da50);
        *(undefined8 *)(uVar5 + 0x28) = uVar9;
        *(undefined8 *)((long)piVar3 + -0x1d0) = *(undefined8 *)((long)piVar3 + -0x1d0);
        *(undefined8 *)((long)piVar3 + -0x1c8) = *(undefined8 *)((long)piVar3 + -0x1c8);
        *(undefined8 *)((long)piVar3 + -0x1c0) = *(undefined8 *)((long)piVar3 + -0x1c0);
        *(undefined8 *)((long)piVar3 + -0x1b8) = *(undefined8 *)((long)piVar3 + -0x1b8);
        *(undefined8 *)((long)piVar3 + -0x1b0) = *(undefined8 *)((long)piVar3 + -0x1b0);
        *(undefined8 *)((long)piVar3 + -0x1a8) = *(undefined8 *)((long)piVar3 + -0x1a8);
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return uVar5;
      }
      uVar1 = *(uint *)(lVar13 + 0x18);
      unaff_x25 = (ulong)uVar1;
      if ((int)uVar1 < 1) {
        return uVar5;
      }
      param_1 = 0;
      unaff_x26 = 0x3d3da88;
      unaff_x27 = 0x3d24b70;
      while( true ) {
        uVar12 = (uint)param_1;
        if (*(uint *)(lVar13 + 0x18) <= uVar12) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar14 = *(long *)(lVar13 + 0x10) + (long)(int)uVar12 * 0x10;
        unaff_x23 = *(ulong *)(lVar14 + 0x20);
        auVar20._8_8_ = unaff_x23;
        auVar20._0_8_ = param_2;
        unaff_x22 = *(ulong *)(lVar14 + 0x28);
        unaff_x28 = unaff_x22 + 1;
        if (1 < (int)unaff_x28) break;
        if (*(long *)(param_2 + 0x28) == 0) goto code_r0x0150227c;
        unaff_x22 = unaff_x22 & 0xffffffff00000000 | unaff_x28 & 0xffffffff;
        uVar5 = /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$set_Item*/ func_0x025a2350(*(long *)(param_2 + 0x28),param_1,unaff_x23,unaff_x22,
                                uRam0000000003d3da88);
        param_1 = (ulong)(uVar12 + 1);
        if ((int)uVar1 <= (int)(uVar12 + 1)) {
          return uVar5;
        }
        lVar13 = *(long *)(param_2 + 0x28);
        if (lVar13 == 0) goto code_r0x0150227c;
      }
      param_3 = (long *)((long)piVar3 + -0x148);
      puVar17 = &UNK_01502138;
      piVar3 = (int *)((long)piVar3 + -0x1a0);
    }
    else {
      *(long *)(param_1 + 0x10) = lVar13;
      uVar6 = Atlas_UI_SplatsBehaviour__IsPlaying(uVar5,lVar13);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      lVar13 = *(long *)(uVar5 + 0x28);
      unaff_x22 = func_0x00f78aec(/*System.Predicate<SplatsBehaviour.PlayingSplat>_TypeInfo*/ uRam0000000003d1e670);
      /*System.Predicate<SplatsBehaviour.PlayingSplat>$$.ctor*/ func_0x027273e8(unaff_x22,param_1,uRam0000000003d64448,uRam0000000003d3f508);
      if (lVar13 == 0) goto code_r0x01501f5c;
      uVar9 = /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$FindIndex*/ func_0x025a2f14(lVar13,unaff_x22,uRam0000000003d3da60);
      if (-1 < (int)uVar9) {
        lVar14 = *(long *)(uVar5 + 0x28);
        if (lVar14 == 0) goto code_r0x01501f5c;
        if ((int)uVar9 < *(int *)(lVar14 + 0x18)) {
          /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$RemoveAt*/ func_0x025a3ef0(lVar14,uVar9,uRam0000000003d3da70);
        }
      }
      auVar20._8_8_ = *(undefined8 *)(param_1 + 0x10);
      auVar20._0_8_ = uVar5;
      param_3 = (long *)((long)piVar3 + -0x98);
      puVar17 = &UNK_01501f20;
      piVar3 = (int *)((long)piVar3 + -0xa0);
      param_2 = uVar5;
    }
  }
code_r0x01501d88:
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return 0;
}



// ============================================================
// RVA: 0x1501cf4 | Atlas.UI.SplatsBehaviour.TryGetSplatDataById
// ============================================================

/* WARNING: Possible PIC construction at 0x01502018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01502230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150201c) */
/* WARNING: Removing unreachable block (ram,0x01502234) */
/* WARNING: Removing unreachable block (ram,0x0150223c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_SplatsBehaviour__TryGetSplatDataById(long param_1,ulong param_2,long *param_3)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 ******ppppppuVar18;
  undefined *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_1a0 [8];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 *****pppppuStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  long *plStack_68;
  undefined8 *****pppppuStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar1 = (ulong *)&lStack_50;
  uVar4 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(param_2,0);
  if ((uVar4 & 1) != 0) {
LAB_01501d88:
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    return (long *)0x0;
  }
  uVar4 = *(ulong *)(param_1 + 0x20);
  if (uVar4 != 0) {
    uVar14 = *(uint *)(uVar4 + 0x18);
    if (0 < (int)uVar14) {
      uVar17 = 0;
      do {
        if (uVar14 <= uVar17) {
          uVar7 = func_0x00f78b24();
          func_0x00f78ac0(uVar7,0);
          goto LAB_01501dcc;
        }
        lVar11 = uVar4 + (long)(int)uVar17 * 0x18;
        param_1 = *(long *)(lVar11 + 0x20);
        lStack_48 = *(long *)(lVar11 + 0x30);
        lStack_50 = *(long *)(lVar11 + 0x28);
        if (param_1 == 0) goto LAB_01501dcc;
        iVar2 = /*System.String$$Equals*/ func_0x029caa48(param_1,param_2,5,0);
        if (iVar2 != 0) {
          *param_3 = param_1;
          param_3[2] = lStack_48;
          param_3[1] = lStack_50;
          return (long *)((long)&MACH_HEADER.magic + 1);
        }
        uVar17 = uVar17 + 1;
        uVar14 = *(uint *)(uVar4 + 0x18);
      } while ((int)uVar17 < (int)uVar14);
    }
    goto LAB_01501d88;
  }
LAB_01501dcc:
  auVar22 = func_0x00f78af4();
  lVar15 = auVar22._8_8_;
  lVar11 = auVar22._0_8_;
  puStack_58 = &Atlas_UI_SplatsBehaviour__StopSplat;
  uVar16 = 0x3eb4000;
  uStack_80 = uVar4;
  lStack_78 = param_1;
  uStack_70 = param_2;
  plStack_68 = param_3;
  pppppuStack_60 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4cf3 & 1) == 0) {
    func_0x00f78a20(0x3d3da60);
    func_0x00f78a20(0x3d3da70);
    func_0x00f78a20(0x3d3da78);
    func_0x00f78a20(0x3d3f508);
    func_0x00f78a20(0x3d1e670);
    func_0x00f78a20(0x3d64448);
    func_0x00f78a20(0x3d28fb0);
    bRam0000000003eb4cf3 = 1;
  }
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_88 = 0;
  lVar5 = func_0x00f78aec(/*Atlas.UI.SplatsBehaviour.<>c__DisplayClass10_0_TypeInfo*/ uRam0000000003d28fb0);
  /*Atlas.UI.SplatsBehaviour.<>c__DisplayClass10_0$$.ctor*/ func_0x0156b1d8(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = lVar15;
    plVar6 = (long *)Atlas_UI_SplatsBehaviour__IsPlaying(lVar11,lVar15);
    if ((int)plVar6 == 0) {
      return plVar6;
    }
    lVar15 = *(long *)(lVar11 + 0x28);
    uVar16 = func_0x00f78aec(/*System.Predicate<SplatsBehaviour.PlayingSplat>_TypeInfo*/ uRam0000000003d1e670);
    /*System.Predicate<SplatsBehaviour.PlayingSplat>$$.ctor*/ func_0x027273e8(uVar16,lVar5,uRam0000000003d64448,uRam0000000003d3f508);
    if (lVar15 != 0) {
      uVar7 = /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$FindIndex*/ func_0x025a2f14(lVar15,uVar16,uRam0000000003d3da60);
      if (-1 < (int)uVar7) {
        lVar8 = *(long *)(lVar11 + 0x28);
        if (lVar8 == 0) goto code_r0x01501f5c;
        if ((int)uVar7 < *(int *)(lVar8 + 0x18)) {
          /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$RemoveAt*/ func_0x025a3ef0(lVar8,uVar7,uRam0000000003d3da70);
        }
      }
      plVar6 = (long *)Atlas_UI_SplatsBehaviour__TryGetSplatDataById
                                 (lVar11,*(undefined8 *)(lVar5 + 0x10),&uStack_98);
      if ((int)plVar6 == 0) {
        return plVar6;
      }
      lVar10 = lStack_90;
      plVar6 = plStack_68;
      uVar20 = uStack_70;
      lVar8 = lStack_78;
      uVar4 = uStack_80;
      ppppppuVar18 = (undefined8 ******)pppppuStack_60;
      puVar19 = puStack_58;
      if (lStack_90 != 0) goto code_r0x0322ef1c;
    }
  }
code_r0x01501f5c:
  plVar9 = (long *)func_0x00f78af4();
  puVar1 = &uStack_d0;
  puStack_a8 = &Atlas_UI_SplatsBehaviour__Awake;
  puVar12 = (undefined4 *)plVar9[3];
  uStack_d0 = uVar16;
  lStack_c8 = lVar15;
  lStack_c0 = lVar5;
  lStack_b8 = lVar11;
  pppppuStack_b0 = &pppppuStack_60;
  if (puVar12 != (undefined4 *)0x0) {
    if (0 < (int)*(ulong *)(puVar12 + 6)) {
      uVar13 = *(ulong *)(puVar12 + 6) & 0xffffffff;
      uVar4 = uVar13 + 1 & 0x1fffffffe;
      uVar13 = uVar13 - 1;
      uVar20 = _UNK_033f8650;
      uVar21 = _UNK_033f8658;
      do {
        if (uVar20 <= uVar13) {
          puVar12[0xc] = 0xffffffff;
        }
        if (uVar21 <= uVar13) {
          puVar12[0x12] = 0xffffffff;
        }
        uVar20 = uVar20 + 2;
        uVar21 = uVar21 + 2;
        uVar4 = uVar4 - 2;
        puVar12 = puVar12 + 0xc;
      } while (uVar4 != 0);
    }
    plVar6 = (long *)plVar9[4];
    if (plVar6 != (long *)0x0) {
      if ((int)plVar6[3] < 1) {
        return plVar9;
      }
      if ((int)plVar6[3] == 0) {
        uVar7 = func_0x00f78b24();
        func_0x00f78ac0(uVar7,0);
      }
      else if (plVar6[5] != 0) {
        lVar10 = plVar6[5];
        uVar20 = 0;
        lVar8 = 0x18;
        uVar4 = uVar16;
        ppppppuVar18 = &pppppuStack_b0;
        puVar19 = &UNK_0150201c;
code_r0x0322ef1c:
        *(ulong *)((long)puVar1 + -0x30) = uVar4;
        *(long *)((long)puVar1 + -0x28) = lVar8;
        *(ulong *)((long)puVar1 + -0x20) = uVar20;
        *(long **)((long)puVar1 + -0x18) = plVar6;
        *(undefined8 *******)((long)puVar1 + -0x10) = ppppppuVar18;
        *(undefined **)((long)puVar1 + -8) = puVar19;
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar6 = (long *)(*pcRam0000000003ebf4c0)(lVar10,0);
        return plVar6;
      }
    }
  }
  plVar6 = (long *)func_0x00f78af4();
  puVar1 = (ulong *)auStack_1a0;
  puStack_d8 = &Atlas_UI_SplatsBehaviour__Update;
  plVar9 = plVar6;
  pppppuStack_e0 = &pppppuStack_b0;
  if ((bRam0000000003eb4cf4 & 1) == 0) {
    func_0x00f78a20(0x3d3da70);
    func_0x00f78a20(0x3d3da78);
    func_0x00f78a20(0x3d3da80);
    func_0x00f78a20(0x3d3da88);
    plVar9 = (long *)func_0x00f78a20(0x3d24b70);
    bRam0000000003eb4cf4 = 1;
  }
  uStack_148 = 0;
  lStack_140 = 0;
  lStack_138 = 0;
  uStack_150 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  lVar11 = plVar6[5];
  if (lVar11 != 0) {
    iVar2 = *(int *)(lVar11 + 0x18);
    if (iVar2 < 1) {
      return plVar9;
    }
    uVar20 = 0;
    do {
      uVar14 = (uint)uVar20;
      if (*(uint *)(lVar11 + 0x18) <= uVar14) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar11 = *(long *)(lVar11 + 0x10) + (long)(int)uVar14 * 0x10;
      uVar7 = *(undefined8 *)(lVar11 + 0x20);
      uVar4 = *(ulong *)(lVar11 + 0x28);
      if (((int)(uVar4 + 1) < 2) ||
         (iVar3 = Atlas_UI_SplatsBehaviour__TryGetSplatDataById(plVar6,uVar7,&uStack_148),
         lVar8 = lStack_138, iVar3 == 0)) {
code_r0x015021e8:
        if (plVar6[5] == 0) break;
        plVar9 = (long *)/*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$set_Item*/ func_0x025a2350(plVar6[5],uVar20,uVar7,
                                         uVar4 & 0xffffffff00000000 | uVar4 + 1 & 0xffffffff,
                                         uRam0000000003d3da88);
      }
      else {
        if (lStack_138 == 0) break;
        /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_198,lStack_138,0,0);
        uStack_168 = uStack_190;
        uStack_170 = uStack_198;
        uStack_158 = uStack_180;
        uStack_160 = uStack_188;
        uStack_150 = uStack_178;
        iVar3 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_170,0);
        if (((*(ushort *)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar12 = *(undefined4 **)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xb8);
        if (iVar3 != puVar12[1]) goto code_r0x015021e8;
        if ((uVar4 & 0xff00000000) == 0) {
          if (lStack_140 != 0) {
            lVar10 = lStack_140;
            ppppppuVar18 = &pppppuStack_e0;
            puVar19 = &UNK_01502234;
            goto code_r0x0322ef1c;
          }
          break;
        }
        if (((*(ushort *)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xe0) == 0)) {
          func_0x00f78ad0();
          puVar12 = *(undefined4 **)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xb8);
        }
        plVar9 = (long *)/*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar8,*puVar12,0,0);
      }
      uVar20 = (ulong)(uVar14 + 1);
      if (iVar2 <= (int)(uVar14 + 1)) {
        return plVar9;
      }
      lVar11 = plVar6[5];
    } while (lVar11 != 0);
  }
  plVar6 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4cf6 & 1) == 0) {
    func_0x00f78a20(0x3d3da50);
    func_0x00f78a20(0x3d1e320);
    bRam0000000003eb4cf6 = 1;
  }
  lVar11 = func_0x00f78aec(/*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>_TypeInfo*/ uRam0000000003d1e320);
  /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$.ctor*/ func_0x025a19e4(lVar11,uRam0000000003d3da50);
  plVar6[5] = lVar11;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return plVar6;
}



// ============================================================
// RVA: 0x1501dd0 | Atlas.UI.SplatsBehaviour.StopSplat
// ============================================================

/* WARNING: Possible PIC construction at 0x01502018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01502230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150201c) */
/* WARNING: Removing unreachable block (ram,0x01502234) */
/* WARNING: Removing unreachable block (ram,0x0150223c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_SplatsBehaviour__StopSplat(long param_1,long param_2)

{
  undefined8 *****pppppuVar1;
  undefined8 ******ppppppuVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long unaff_x19;
  uint uVar11;
  ulong unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  undefined8 ******unaff_x29;
  undefined *unaff_x30;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 ****ppppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  pppppuVar1 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4cf3 & 1) == 0) {
    func_0x00f78a20(0x3d3da60);
    func_0x00f78a20(0x3d3da70);
    func_0x00f78a20(0x3d3da78);
    func_0x00f78a20(0x3d3f508);
    func_0x00f78a20(0x3d1e670);
    func_0x00f78a20(0x3d64448);
    func_0x00f78a20(0x3d28fb0);
    bRam0000000003eb4cf3 = 1;
  }
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  lVar5 = func_0x00f78aec(/*Atlas.UI.SplatsBehaviour.<>c__DisplayClass10_0_TypeInfo*/ uRam0000000003d28fb0);
  /*Atlas.UI.SplatsBehaviour.<>c__DisplayClass10_0$$.ctor*/ func_0x0156b1d8(lVar5,0);
  uVar7 = 0x3eb4000;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = param_2;
    lVar6 = Atlas_UI_SplatsBehaviour__IsPlaying(param_1,param_2);
    if ((int)lVar6 == 0) {
      return lVar6;
    }
    param_2 = *(long *)(param_1 + 0x28);
    uVar7 = func_0x00f78aec(/*System.Predicate<SplatsBehaviour.PlayingSplat>_TypeInfo*/ uRam0000000003d1e670);
    /*System.Predicate<SplatsBehaviour.PlayingSplat>$$.ctor*/ func_0x027273e8(uVar7,lVar5,uRam0000000003d64448,uRam0000000003d3f508);
    if (param_2 != 0) {
      uVar8 = /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$FindIndex*/ func_0x025a2f14(param_2,uVar7,uRam0000000003d3da60);
      if (-1 < (int)uVar8) {
        lVar6 = *(long *)(param_1 + 0x28);
        if (lVar6 == 0) goto LAB_01501f5c;
        if ((int)uVar8 < *(int *)(lVar6 + 0x18)) {
          /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$RemoveAt*/ func_0x025a3ef0(lVar6,uVar8,uRam0000000003d3da70);
        }
      }
      lVar6 = Atlas_UI_SplatsBehaviour__TryGetSplatDataById
                        (param_1,*(undefined8 *)(lVar5 + 0x10),&uStack_48);
      if ((int)lVar6 == 0) {
        return lVar6;
      }
      lVar6 = lStack_40;
      if (lStack_40 != 0) goto code_r0x0322ef1c;
    }
  }
LAB_01501f5c:
  unaff_x22 = uVar7;
  lVar6 = func_0x00f78af4();
  puStack_58 = &Atlas_UI_SplatsBehaviour__Awake;
  ppppppuVar2 = (undefined8 ******)&ppppuStack_60;
  puVar9 = *(undefined4 **)(lVar6 + 0x18);
  uStack_80 = unaff_x22;
  lStack_78 = param_2;
  lStack_70 = lVar5;
  lStack_68 = param_1;
  ppppuStack_60 = pppppuVar1;
  if (puVar9 != (undefined4 *)0x0) {
    if (0 < (int)*(ulong *)(puVar9 + 6)) {
      uVar10 = *(ulong *)(puVar9 + 6) & 0xffffffff;
      uVar7 = uVar10 + 1 & 0x1fffffffe;
      uVar10 = uVar10 - 1;
      uVar12 = _UNK_033f8650;
      uVar13 = _UNK_033f8658;
      do {
        if (uVar12 <= uVar10) {
          puVar9[0xc] = 0xffffffff;
        }
        if (uVar13 <= uVar10) {
          puVar9[0x12] = 0xffffffff;
        }
        uVar12 = uVar12 + 2;
        uVar13 = uVar13 + 2;
        uVar7 = uVar7 - 2;
        puVar9 = puVar9 + 0xc;
      } while (uVar7 != 0);
    }
    unaff_x19 = *(long *)(lVar6 + 0x20);
    if (unaff_x19 != 0) {
      if (*(int *)(unaff_x19 + 0x18) < 1) {
        return lVar6;
      }
      unaff_x20 = 0;
      unaff_x21 = 0x18;
      if (*(int *)(unaff_x19 + 0x18) == 0) {
        uVar8 = func_0x00f78b24();
        func_0x00f78ac0(uVar8,0);
      }
      else if (*(long *)(unaff_x19 + 0x28) != 0) {
        unaff_x30 = &UNK_0150201c;
        register0x00000008 = (BADSPACEBASE *)&uStack_80;
        lVar6 = *(long *)(unaff_x19 + 0x28);
        unaff_x29 = ppppppuVar2;
code_r0x0322ef1c:
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *******)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
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
  }
  unaff_x19 = func_0x00f78af4();
  puStack_88 = &Atlas_UI_SplatsBehaviour__Update;
  unaff_x29 = &pppppuStack_90;
  lVar5 = unaff_x19;
  pppppuStack_90 = ppppppuVar2;
  if ((bRam0000000003eb4cf4 & 1) == 0) {
    func_0x00f78a20(0x3d3da70);
    func_0x00f78a20(0x3d3da78);
    func_0x00f78a20(0x3d3da80);
    func_0x00f78a20(0x3d3da88);
    lVar5 = func_0x00f78a20(0x3d24b70);
    bRam0000000003eb4cf4 = 1;
  }
  uStack_f8 = 0;
  lStack_f0 = 0;
  lStack_e8 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar6 = *(long *)(unaff_x19 + 0x28);
  if (lVar6 != 0) {
    iVar3 = *(int *)(lVar6 + 0x18);
    if (iVar3 < 1) {
      return lVar5;
    }
    unaff_x20 = 0;
    do {
      uVar11 = (uint)unaff_x20;
      if (*(uint *)(lVar6 + 0x18) <= uVar11) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar5 = *(long *)(lVar6 + 0x10) + (long)(int)uVar11 * 0x10;
      uVar8 = *(undefined8 *)(lVar5 + 0x20);
      unaff_x22 = *(ulong *)(lVar5 + 0x28);
      if (((int)(unaff_x22 + 1) < 2) ||
         (iVar4 = Atlas_UI_SplatsBehaviour__TryGetSplatDataById(unaff_x19,uVar8,&uStack_f8),
         unaff_x21 = lStack_e8, iVar4 == 0)) {
code_r0x015021e8:
        if (*(long *)(unaff_x19 + 0x28) == 0) break;
        lVar5 = /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$set_Item*/ func_0x025a2350(*(long *)(unaff_x19 + 0x28),unaff_x20,uVar8,
                                unaff_x22 & 0xffffffff00000000 | unaff_x22 + 1 & 0xffffffff,
                                uRam0000000003d3da88);
      }
      else {
        if (lStack_e8 == 0) break;
        /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_148,lStack_e8,0,0);
        uStack_118 = uStack_140;
        uStack_120 = uStack_148;
        uStack_108 = uStack_130;
        uStack_110 = uStack_138;
        uStack_100 = uStack_128;
        iVar4 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_120,0);
        if (((*(ushort *)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar9 = *(undefined4 **)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xb8);
        if (iVar4 != puVar9[1]) goto code_r0x015021e8;
        if ((unaff_x22 & 0xff00000000) == 0) {
          if (lStack_f0 != 0) {
            unaff_x30 = &UNK_01502234;
            register0x00000008 = (BADSPACEBASE *)auStack_150;
            lVar6 = lStack_f0;
            goto code_r0x0322ef1c;
          }
          break;
        }
        if (((*(ushort *)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xe0) == 0)) {
          func_0x00f78ad0();
          puVar9 = *(undefined4 **)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xb8);
        }
        lVar5 = /*UnityEngine.Animator$$Play*/ func_0x03210958(0,unaff_x21,*puVar9,0,0);
      }
      unaff_x20 = (ulong)(uVar11 + 1);
      if (iVar3 <= (int)(uVar11 + 1)) {
        return lVar5;
      }
      lVar6 = *(long *)(unaff_x19 + 0x28);
    } while (lVar6 != 0);
  }
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb4cf6 & 1) == 0) {
    func_0x00f78a20(0x3d3da50);
    func_0x00f78a20(0x3d1e320);
    bRam0000000003eb4cf6 = 1;
  }
  uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>_TypeInfo*/ uRam0000000003d1e320);
  /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$.ctor*/ func_0x025a19e4(uVar8,uRam0000000003d3da50);
  *(undefined8 *)(lVar5 + 0x28) = uVar8;
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



// ============================================================
// RVA: 0x1501f60 | Atlas.UI.SplatsBehaviour.Awake
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_SplatsBehaviour__Awake(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    if (0 < (int)*(ulong *)(puVar5 + 6)) {
      uVar6 = *(ulong *)(puVar5 + 6) & 0xffffffff;
      uVar4 = uVar6 + 1 & 0x1fffffffe;
      uVar6 = uVar6 - 1;
      uVar12 = _UNK_033f8650;
      uVar13 = _UNK_033f8658;
      do {
        if (uVar12 <= uVar6) {
          puVar5[0xc] = 0xffffffff;
        }
        if (uVar13 <= uVar6) {
          puVar5[0x12] = 0xffffffff;
        }
        uVar12 = uVar12 + 2;
        uVar13 = uVar13 + 2;
        uVar4 = uVar4 - 2;
        puVar5 = puVar5 + 0xc;
      } while (uVar4 != 0);
    }
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 != 0) {
      uVar9 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar9) {
        uVar8 = 0;
        do {
          if (uVar9 <= uVar8) {
            uVar3 = func_0x00f78b24();
            func_0x00f78ac0(uVar3,0);
            goto LAB_01502048;
          }
          lVar2 = *(long *)(lVar7 + (long)(int)uVar8 * 0x18 + 0x28);
          if (lVar2 == 0) goto LAB_01502048;
          param_1 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar2,0,0);
          uVar8 = uVar8 + 1;
          uVar9 = *(uint *)(lVar7 + 0x18);
        } while ((int)uVar8 < (int)uVar9);
      }
      return param_1;
    }
  }
LAB_01502048:
  lVar2 = func_0x00f78af4();
  lVar7 = lVar2;
  if ((bRam0000000003eb4cf4 & 1) == 0) {
    func_0x00f78a20(0x3d3da70);
    func_0x00f78a20(0x3d3da78);
    func_0x00f78a20(0x3d3da80);
    func_0x00f78a20(0x3d3da88);
    lVar7 = func_0x00f78a20(0x3d24b70);
    bRam0000000003eb4cf4 = 1;
  }
  uStack_a8 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lVar10 = *(long *)(lVar2 + 0x28);
  if (lVar10 != 0) {
    iVar11 = *(int *)(lVar10 + 0x18);
    if (iVar11 < 1) {
      return lVar7;
    }
    uVar9 = 0;
    do {
      if (*(uint *)(lVar10 + 0x18) <= uVar9) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar7 = *(long *)(lVar10 + 0x10) + (long)(int)uVar9 * 0x10;
      uVar3 = *(undefined8 *)(lVar7 + 0x20);
      uVar4 = *(ulong *)(lVar7 + 0x28);
      if (((int)(uVar4 + 1) < 2) ||
         (iVar1 = Atlas_UI_SplatsBehaviour__TryGetSplatDataById(lVar2,uVar3,&uStack_a8),
         lVar7 = lStack_98, iVar1 == 0)) {
code_r0x015021e8:
        if (*(long *)(lVar2 + 0x28) == 0) break;
        lVar7 = /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$set_Item*/ func_0x025a2350(*(long *)(lVar2 + 0x28),uVar9,uVar3,
                                uVar4 & 0xffffffff00000000 | uVar4 + 1 & 0xffffffff,
                                uRam0000000003d3da88);
      }
      else {
        if (lStack_98 == 0) break;
        /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_f8,lStack_98,0,0);
        uStack_c8 = uStack_f0;
        uStack_d0 = uStack_f8;
        uStack_b8 = uStack_e0;
        uStack_c0 = uStack_e8;
        uStack_b0 = uStack_d8;
        iVar1 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_d0,0);
        if (((*(ushort *)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar5 = *(undefined4 **)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xb8);
        if (iVar1 != puVar5[1]) goto code_r0x015021e8;
        if ((uVar4 & 0xff00000000) == 0) {
          if (lStack_a0 == 0) break;
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lStack_a0,0,0);
          if (*(long *)(lVar2 + 0x28) == 0) break;
          lVar7 = /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$RemoveAt*/ func_0x025a3ef0(*(long *)(lVar2 + 0x28),uVar9,uRam0000000003d3da70);
          uVar9 = uVar9 - 1;
          iVar11 = iVar11 + -1;
        }
        else {
          if (((*(ushort *)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xe0) == 0)) {
            func_0x00f78ad0();
            puVar5 = *(undefined4 **)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xb8);
          }
          lVar7 = /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar7,*puVar5,0,0);
        }
      }
      uVar9 = uVar9 + 1;
      if (iVar11 <= (int)uVar9) {
        return lVar7;
      }
      lVar10 = *(long *)(lVar2 + 0x28);
    } while (lVar10 != 0);
  }
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb4cf6 & 1) == 0) {
    func_0x00f78a20(0x3d3da50);
    func_0x00f78a20(0x3d1e320);
    bRam0000000003eb4cf6 = 1;
  }
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>_TypeInfo*/ uRam0000000003d1e320);
  /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$.ctor*/ func_0x025a19e4(uVar3,uRam0000000003d3da50);
  *(undefined8 *)(lVar7 + 0x28) = uVar3;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar7;
}



// ============================================================
// RVA: 0x150204c | Atlas.UI.SplatsBehaviour.Update
// ============================================================

undefined1  [16] Atlas_UI_SplatsBehaviour__Update(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  if ((bRam0000000003eb4cf4 & 1) == 0) {
    func_0x00f78a20(0x3d3da70);
    func_0x00f78a20(0x3d3da78);
    func_0x00f78a20(0x3d3da80);
    func_0x00f78a20(0x3d3da88);
    auVar8 = func_0x00f78a20(0x3d24b70);
    bRam0000000003eb4cf4 = 1;
  }
  uStack_78 = 0;
  lStack_70 = 0;
  lStack_68 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 != 0) {
    iVar7 = *(int *)(lVar6 + 0x18);
    if (iVar7 < 1) {
      return auVar8;
    }
    uVar5 = 0;
    do {
      if (*(uint *)(lVar6 + 0x18) <= uVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar6 = *(long *)(lVar6 + 0x10) + (long)(int)uVar5 * 0x10;
      uVar3 = *(undefined8 *)(lVar6 + 0x20);
      uVar1 = *(ulong *)(lVar6 + 0x28);
      if (((int)(uVar1 + 1) < 2) ||
         (iVar2 = Atlas_UI_SplatsBehaviour__TryGetSplatDataById(param_1,uVar3,&uStack_78),
         lVar6 = lStack_68, iVar2 == 0)) {
LAB_015021e8:
        if (*(long *)(param_1 + 0x28) == 0) break;
        auVar8 = /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$set_Item*/ func_0x025a2350(*(long *)(param_1 + 0x28),uVar5,uVar3,
                                 uVar1 & 0xffffffff00000000 | uVar1 + 1 & 0xffffffff,
                                 uRam0000000003d3da88);
      }
      else {
        if (lStack_68 == 0) break;
        /*UnityEngine.Animator$$GetCurrentAnimatorStateInfo*/ func_0x0320fd50(&uStack_c8,lStack_68,0,0);
        uStack_98 = uStack_c0;
        uStack_a0 = uStack_c8;
        uStack_88 = uStack_b0;
        uStack_90 = uStack_b8;
        uStack_80 = uStack_a8;
        iVar2 = /*UnityEngine.AnimatorStateInfo$$get_shortNameHash*/ func_0x03213aa4(&uStack_a0,0);
        if (((*(ushort *)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar4 = *(undefined4 **)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xb8);
        if (iVar2 != puVar4[1]) goto LAB_015021e8;
        if ((uVar1 & 0xff00000000) == 0) {
          if (lStack_70 == 0) break;
          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lStack_70,0,0);
          if (*(long *)(param_1 + 0x28) == 0) break;
          auVar8 = /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$RemoveAt*/ func_0x025a3ef0(*(long *)(param_1 + 0x28),uVar5,uRam0000000003d3da70);
          uVar5 = uVar5 - 1;
          iVar7 = iVar7 + -1;
        }
        else {
          if (((*(ushort *)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xe0) == 0)) {
            func_0x00f78ad0();
            puVar4 = *(undefined4 **)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xb8);
          }
          auVar8 = /*UnityEngine.Animator$$Play*/ func_0x03210958(0,lVar6,*puVar4,0,0);
        }
      }
      uVar5 = uVar5 + 1;
      if (iVar7 <= (int)uVar5) {
        return auVar8;
      }
      lVar6 = *(long *)(param_1 + 0x28);
    } while (lVar6 != 0);
  }
  auVar9._0_8_ = func_0x00f78af4();
  if ((bRam0000000003eb4cf6 & 1) == 0) {
    func_0x00f78a20(0x3d3da50);
    func_0x00f78a20(0x3d1e320);
    bRam0000000003eb4cf6 = 1;
  }
  uVar3 = func_0x00f78aec(/*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>_TypeInfo*/ uRam0000000003d1e320);
  /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$.ctor*/ func_0x025a19e4(uVar3,uRam0000000003d3da50);
  *(undefined8 *)(auVar9._0_8_ + 0x28) = uVar3;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar9._8_8_ = 0;
  return auVar9;
}



// ============================================================
// RVA: 0x1502280 | Atlas.UI.SplatsBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_SplatsBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4cf6 & 1) == 0) {
    func_0x00f78a20(0x3d3da50);
    func_0x00f78a20(0x3d1e320);
    bRam0000000003eb4cf6 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>_TypeInfo*/ uRam0000000003d1e320);
  /*System.Collections.Generic.List<SplatsBehaviour.PlayingSplat>$$.ctor*/ func_0x025a19e4(uVar1,uRam0000000003d3da50);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
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
// RVA: 0x1502300 | Atlas.UI.SplatsBehaviour..cctor
// ============================================================

void Atlas_UI_SplatsBehaviour___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb4cf7 & 1) == 0) {
    func_0x00f78a20(0x3d24b70);
    func_0x00f78a20(0x3d72cf0);
    func_0x00f78a20(0x3d6dbb8);
    bRam0000000003eb4cf7 = 1;
  }
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Start')*/ uRam0000000003d72cf0,0);
  **(undefined4 **)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('Idle')*/ uRam0000000003d6dbb8,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.SplatsBehaviour_TypeInfo*/ lRam0000000003d24b70 + 0xb8) + 4) = uVar1;
  return;
}



