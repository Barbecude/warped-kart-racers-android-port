// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Scenes.SceneInfo

// ============================================================
// RVA: 0x16639b0 | Core.Scenes.SceneInfo.Equals
// ============================================================

/* WARNING: Possible PIC construction at 0x01663a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01663b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01663cec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01663b70) */
/* WARNING: Removing unreachable block (ram,0x01663b7c) */
/* WARNING: Removing unreachable block (ram,0x01663b90) */
/* WARNING: Removing unreachable block (ram,0x01663b98) */
/* WARNING: Removing unreachable block (ram,0x01663b9c) */
/* WARNING: Removing unreachable block (ram,0x01663bb4) */
/* WARNING: Removing unreachable block (ram,0x01663be4) */
/* WARNING: Removing unreachable block (ram,0x01663c2c) */
/* WARNING: Removing unreachable block (ram,0x01663c04) */
/* WARNING: Removing unreachable block (ram,0x01663a84) */
/* WARNING: Removing unreachable block (ram,0x01663cf0) */
/* WARNING: Removing unreachable block (ram,0x01663cf4) */

long * Core_Scenes_SceneInfo__Equals(ulong *param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  int extraout_w1;
  ulong uVar14;
  uint uVar15;
  uint *puVar16;
  ushort *puVar17;
  uint uVar18;
  uint *puVar19;
  ushort *puVar20;
  long lVar21;
  long lVar22;
  ushort *puVar23;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  int iVar24;
  undefined8 unaff_x21;
  undefined8 uVar25;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined1 ***pppuVar26;
  undefined8 unaff_x30;
  undefined *puVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_f0 [8];
  int iStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar7 = (long *)*param_1;
  if (plVar7 == (long *)0x0) {
    auVar28 = func_0x00f78af4();
    lVar13 = auVar28._0_8_;
    uVar25 = 0x3eb5000;
    if ((bRam0000000003eb5880 & 1) == 0) {
      func_0x00f78a20(0x3d32ed0);
      func_0x00f78a20(0x3d32ed8);
      func_0x00f78a20(0x3d32ee0);
      func_0x00f78a20(0x3d3bce8);
      bRam0000000003eb5880 = 1;
    }
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    if (auVar28._8_8_ == 0) {
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar7 = (long *)___cxa_begin_catch();
        lVar13 = *plVar7;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<SceneInfo>$$Dispose*/ func_0x01f72ed8(&uStack_58,uRam0000000003eb5000);
        if (lVar13 == 0) {
          return (long *)0x0;
        }
        func_0x00f78ac0(lVar13,0);
      }
      puVar27 = &Core_Scenes_SceneLoader__RequestLoadSceneAdditive;
      auVar28 = __Unwind_Resume();
      plVar7 = (long *)0x0;
    }
    else {
      unaff_x22 = 0x3d32ed8;
      uVar25 = 0x3d32ed0;
      /*System.Collections.Generic.List<SceneInfo>$$GetEnumerator*/ func_0x02459270(&uStack_58,auVar28._8_8_,uRam0000000003d3bce8);
      plVar7 = (long *)((long)&MACH_HEADER.magic + 1);
      uVar9 = /*System.Collections.Generic.List.Enumerator<SceneInfo>$$MoveNext*/ func_0x01f72edc(&uStack_58,uRam0000000003d32ed8);
      auVar28._8_8_ = uStack_48;
      auVar28._0_8_ = lVar13;
      if ((uVar9 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<SceneInfo>$$Dispose*/ func_0x01f72ed8(&uStack_58,uRam0000000003d32ed0);
        return plVar7;
      }
      puVar27 = &UNK_01663a84;
    }
    plVar10 = auVar28._8_8_;
    uStack_90 = unaff_x22;
    uStack_88 = uVar25;
    plStack_80 = plVar7;
    lStack_78 = lVar13;
    puStack_70 = &stack0xffffffffffffffe0;
    puStack_68 = puVar27;
    if ((bRam0000000003eb5881 & 1) == 0) {
      func_0x00f78a20(0x3d3bfa0);
      func_0x00f78a20(0x3d3bfb0);
      func_0x00f78a20(0x3d3bf98);
      func_0x00f78a20(0x3d1de30);
      func_0x00f78a20(0x3d24720);
      bRam0000000003eb5881 = 1;
    }
    uVar9 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(plVar10,0);
    if ((uVar9 & 1) != 0) {
      return (long *)0x0;
    }
    uStack_b8 = 0x3eb5000;
    puStack_98 = &UNK_01663b70;
    pppuVar26 = &ppuStack_a0;
    uStack_c0 = unaff_x22;
    ppuStack_a0 = &puStack_70;
    auStack_b0 = auVar28;
    if ((bRam0000000003eb5888 & 1) == 0) {
      func_0x00f78a20(0x3d32f80);
      func_0x00f78a20(0x3d32f88);
      func_0x00f78a20(0x3d32f90);
      func_0x00f78a20(0x3d3bfd0);
      bRam0000000003eb5888 = 1;
    }
    uStack_d8 = 0;
    uStack_d0 = 0;
    lStack_c8 = 0;
    if (*auVar28._0_8_ == 0) {
      plVar8 = (long *)0x0;
    }
    else {
      unaff_x22 = 0x3d32f88;
      uVar25 = 0x3d32f80;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_d8,*auVar28._0_8_,uRam0000000003d3bfd0);
      plVar8 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_d8,uRam0000000003d32f88);
      auVar29._8_8_ = plVar10;
      auVar29._0_8_ = lStack_c8;
      if (((ulong)plVar8 & 1) != 0) {
        if (lStack_c8 == 0) {
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1663d30);
          (*pcVar4)();
        }
        uVar9 = 5;
        puVar27 = &UNK_01663cf0;
        register0x00000008 = (BADSPACEBASE *)auStack_f0;
        goto code_r0x029caa48;
      }
      iStack_e8 = 0x45;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_d8,uRam0000000003d32f80);
      if (iStack_e8 != 0x47) {
        plVar8 = (long *)0x0;
      }
    }
    return plVar8;
  }
  uVar14 = 0;
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d23938);
    uVar25 = func_0x00f78aec();
    /*System.NullReferenceException$$.ctor*/ func_0x02950520(uVar25,0);
    uVar11 = func_0x00f78a24(0x3d5dae0);
    func_0x00f78ac0(uVar25,uVar11);
    return (long *)((long)&MACH_HEADER.filetype + 1);
  }
  if (param_2 != (long *)0x0) {
    if (plVar7 == param_2) {
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
    if ((int)plVar7[2] == (int)param_2[2]) {
System_String__EqualsHelper:
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if ((plVar7 != (long *)0x0) && (param_2 != (long *)0x0)) {
        plVar10 = (long *)((long)plVar7 + 0x14);
        iVar6 = (int)plVar7[2];
        param_2 = (long *)((long)param_2 + 0x14);
        uVar9 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
        if ((uVar9 & 1) == 0) {
          iVar24 = iVar6;
          if (9 < iVar6) {
            do {
              if ((int)*plVar10 != (int)*param_2) {
                return (long *)0x0;
              }
              if (*(int *)((long)plVar10 + 4) != *(int *)((long)param_2 + 4)) {
                return (long *)0x0;
              }
              if ((int)plVar10[1] != (int)param_2[1]) {
                return (long *)0x0;
              }
              if (*(int *)((long)plVar10 + 0xc) != *(int *)((long)param_2 + 0xc)) {
                return (long *)0x0;
              }
              if ((int)plVar10[2] != (int)param_2[2]) {
                return (long *)0x0;
              }
              plVar10 = (long *)((long)plVar10 + 0x14);
              param_2 = (long *)((long)param_2 + 0x14);
              iVar6 = iVar24 + -10;
              bVar5 = 0x13 < iVar24;
              iVar24 = iVar6;
            } while (bVar5);
          }
        }
        else {
          iVar24 = iVar6;
          if (0xb < iVar6) {
            do {
              if (((*plVar10 != *param_2) || (plVar10[1] != param_2[1])) ||
                 (plVar10[2] != param_2[2])) {
                return (long *)0x0;
              }
              plVar10 = plVar10 + 3;
              param_2 = param_2 + 3;
              iVar6 = iVar24 + -0xc;
              bVar5 = 0x17 < iVar24;
              iVar24 = iVar6;
            } while (bVar5);
          }
        }
        if (iVar6 < 1) {
          plVar7 = (long *)((long)&MACH_HEADER.magic + 1);
        }
        else {
          iVar6 = iVar6 + 2;
          do {
            bVar5 = (int)*plVar10 == (int)*param_2;
            plVar7 = (long *)(ulong)bVar5;
            if (!bVar5) {
              return plVar7;
            }
            plVar10 = (long *)((long)plVar10 + 4);
            param_2 = (long *)((long)param_2 + 4);
            iVar6 = iVar6 + -2;
          } while (2 < iVar6);
        }
        return plVar7;
      }
      auVar28 = func_0x00f78af4();
      lVar21 = auVar28._8_8_;
      lVar13 = auVar28._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x40) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x38) = &System_String__CompareOrdinalHelper;
      uVar9 = uVar14;
      if ((bRam0000000003eb9441 & 1) == 0) {
        func_0x00f78a20(0x3d232c0);
        bRam0000000003eb9441 = 1;
        uVar9 = uVar14;
      }
      if ((lVar13 != 0) && (lVar21 != 0)) {
        uVar1 = *(undefined4 *)(lVar13 + 0x10);
        uVar2 = *(undefined4 *)(lVar21 + 0x10);
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar6 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
        puVar16 = (uint *)(lVar13 + 0x14);
        puVar19 = (uint *)(lVar21 + 0x14);
        if (iVar6 < 10) goto code_r0x029ca8c8;
        lVar22 = 4;
        iVar24 = iVar6;
        goto code_r0x029ca858;
      }
      auVar29 = func_0x00f78af4();
      param_2 = auVar29._8_8_;
      plVar7 = auVar29._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb9000;
      *(undefined1 (*) [16])((long)register0x00000008 + -0x80) = auVar28;
      *(undefined1 **)((long)register0x00000008 + -0x70) =
           (undefined1 *)((long)register0x00000008 + -0x40);
      *(undefined **)((long)register0x00000008 + -0x68) = &System_String__Equals;
      pppuVar26 = (undefined1 ***)((long)register0x00000008 + -0x70);
      uVar25 = 0x3eb9000;
      if ((bRam0000000003eb9442 & 1) == 0) {
        func_0x00f78a20(0x3d24dd0);
        bRam0000000003eb9442 = 1;
      }
      if (plVar7 != (long *)0x0) {
        if ((param_2 != (long *)0x0) && (*param_2 == /*string_TypeInfo*/ lRam0000000003d24dd0)) {
          if (plVar7 == param_2) {
            return (long *)((long)&MACH_HEADER.magic + 1);
          }
          if (param_2 == (long *)0x0) goto code_r0x029caa44;
          if ((int)plVar7[2] == (int)param_2[2]) goto code_r0x029ca9f4;
        }
        return (long *)0x0;
      }
      func_0x00f78a24(0x3d23938);
      plVar7 = (long *)func_0x00f78aec();
      /*System.NullReferenceException$$.ctor*/ func_0x02950520(plVar7,0);
      uVar11 = func_0x00f78a24(0x3d5dad8);
      func_0x00f78ac0(plVar7,uVar11);
code_r0x029caa44:
      puVar27 = &System_String__Equals;
      auVar29 = func_0x00f78af4();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
      plVar10 = plVar7;
      plVar8 = param_2;
code_r0x029caa48:
      param_2 = auVar29._8_8_;
      plVar7 = auVar29._0_8_;
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = uVar25;
      *(long **)((long)register0x00000008 + -0x20) = plVar8;
      *(long **)((long)register0x00000008 + -0x18) = plVar10;
      *(undefined1 ****)((long)register0x00000008 + -0x10) = pppuVar26;
      *(undefined **)((long)register0x00000008 + -8) = puVar27;
      uVar14 = uVar9;
      if ((bRam0000000003eb9443 & 1) == 0) {
        func_0x00f78a20(0x3d20b50);
        bRam0000000003eb9443 = 1;
      }
      if (5 < (uint)uVar9) {
code_r0x029caca0:
        uVar25 = func_0x00f78a24(0x3d746f0);
        uVar25 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar25,0);
        func_0x00f78a24(0x3d1fce8);
        uVar11 = func_0x00f78aec();
        uVar12 = func_0x00f78a24(0x3d784e0);
        /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar11,uVar25,uVar12,0);
        uVar25 = func_0x00f78a24(0x3d5dae8);
        func_0x00f78ac0(uVar11,uVar25);
        goto code_r0x029cad04;
      }
      if (plVar7 == param_2) {
        return (long *)((long)&MACH_HEADER.magic + 1);
      }
      if (param_2 == (long *)0x0) {
        return (long *)0x0;
      }
      switch(uVar9 & 0xffffffff) {
      case 0:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
        break;
      case 1:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
        goto joined_r0x029caba0;
      case 2:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
        break;
      case 3:
        if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
        if ((plVar10 == (long *)0x0) ||
           (plVar10 = (long *)(**(code **)(*plVar10 + 0x1f8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x200)),
           plVar10 == (long *)0x0)) goto code_r0x029cad04;
        pcVar4 = *(code **)(*plVar10 + 0x1a8);
        uVar25 = *(undefined8 *)(*plVar10 + 0x1b0);
        uVar11 = 1;
        goto code_r0x029cabc8;
      case 4:
        if ((int)plVar7[2] != (int)param_2[2]) {
          return (long *)0x0;
        }
        unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x10);
        unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
        unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
        unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x18);
        unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
        goto System_String__EqualsHelper;
      case 5:
        iVar6 = (int)plVar7[2];
        if (iVar6 != (int)param_2[2]) {
          return (long *)0x0;
        }
        if (iVar6 == 0) goto code_r0x029cac68;
        lVar21 = (long)iVar6 << 1;
        puVar17 = (ushort *)((long)plVar7 + 0x16);
        puVar23 = (ushort *)((long)plVar7 + 0x14);
        lVar13 = lVar21;
        goto code_r0x029cac24;
      default:
        goto code_r0x029caca0;
      }
      if ((plVar10 == (long *)0x0) ||
         (plVar10 = (long *)(**(code **)(*plVar10 + 0x1f8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x200)),
         plVar10 == (long *)0x0)) {
code_r0x029cad04:
        lVar13 = func_0x00f78af4();
        if (*(int *)(lVar13 + 0x10) == 0) {
          return (long *)((long)&MACH_HEADER.magic + 1);
        }
        lVar21 = (long)*(int *)(lVar13 + 0x10) * 2;
        puVar17 = (ushort *)(lVar13 + 0x14);
        puVar23 = (ushort *)(lVar13 + 0x16);
        do {
          lVar21 = lVar21 + -2;
          uVar3 = *puVar17;
          puVar17 = puVar23;
          puVar23 = puVar23 + 1;
        } while (uVar3 < 0x80 && lVar21 != 0);
        return (long *)(ulong)(uVar3 < 0x80);
      }
      pcVar4 = *(code **)(*plVar10 + 0x1a8);
      uVar25 = *(undefined8 *)(*plVar10 + 0x1b0);
      uVar11 = 0;
code_r0x029cabc8:
      iVar6 = (*pcVar4)(plVar10,plVar7,param_2,uVar11,uVar25);
      goto code_r0x029cabcc;
    }
  }
  return (long *)0x0;
code_r0x029ca9f4:
  unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
  unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
  unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
  unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
  unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  uVar14 = uVar9;
  goto System_String__EqualsHelper;
code_r0x029cac8c:
  iVar6 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(plVar7,param_2,0);
  goto code_r0x029cabcc;
  while( true ) {
    if (puVar16[1] != puVar19[1]) goto code_r0x029ca930;
    if (puVar16[2] != puVar19[2]) {
      lVar22 = 8;
      goto code_r0x029ca930;
    }
    if (puVar16[3] != puVar19[3]) {
      lVar22 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar16[4] != puVar19[4]) {
      lVar22 = 0x10;
      goto code_r0x029ca930;
    }
    puVar16 = puVar16 + 5;
    puVar19 = puVar19 + 5;
    iVar6 = iVar24 + -10;
    bVar5 = iVar24 < 0x14;
    iVar24 = iVar6;
    if (bVar5) break;
code_r0x029ca858:
    if (*puVar16 != *puVar19) {
      lVar22 = 0;
code_r0x029ca930:
      puVar16 = (uint *)(lVar22 + (long)puVar16);
      puVar19 = (uint *)(lVar22 + (long)puVar19);
      uVar15 = (uint)(ushort)*puVar16 - (uint)(ushort)*puVar19;
      if (uVar15 != 0) {
        return (long *)(ulong)uVar15;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar6) {
    iVar6 = iVar6 + 2;
    do {
      if (*puVar16 != *puVar19) {
        uVar15 = (*puVar16 & 0xffff) - (*puVar19 & 0xffff);
        if (uVar15 != 0) {
          return (long *)(ulong)uVar15;
        }
code_r0x029ca948:
        uVar15 = (uint)*(ushort *)((long)puVar16 + 2);
        uVar18 = (uint)*(ushort *)((long)puVar19 + 2);
        goto code_r0x029ca950;
      }
      puVar16 = puVar16 + 1;
      puVar19 = puVar19 + 1;
      iVar6 = iVar6 + -2;
    } while (2 < iVar6);
  }
  uVar15 = *(uint *)(lVar13 + 0x10);
  uVar18 = *(uint *)(lVar21 + 0x10);
code_r0x029ca950:
  return (long *)(ulong)(uVar15 - uVar18);
  while( true ) {
    lVar13 = lVar13 + -2;
    puVar17 = puVar20 + 1;
    puVar23 = puVar20;
    if (lVar13 == 0) break;
code_r0x029cac24:
    puVar20 = puVar17;
    if (0x7f < *puVar23) goto code_r0x029cac8c;
  }
  if (iVar6 != 0) {
    puVar17 = (ushort *)((long)param_2 + 0x16);
    puVar23 = (ushort *)((long)param_2 + 0x14);
    do {
      puVar20 = puVar17;
      if (0x7f < *puVar23) goto code_r0x029cac8c;
      lVar21 = lVar21 + -2;
      puVar17 = puVar20 + 1;
      puVar23 = puVar20;
    } while (lVar21 != 0);
  }
code_r0x029cac68:
  iVar6 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(plVar7,param_2);
code_r0x029cabcc:
  return (long *)(ulong)(iVar6 == 0);
}



