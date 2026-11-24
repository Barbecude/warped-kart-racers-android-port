// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Save.SaveManager.<>c__DisplayClass77_0

// ============================================================
// RVA: 0x15670f0 | Atlas.Save.SaveManager.<>c__DisplayClass77_0..ctor
// ============================================================

void Atlas_Save_SaveManager___c__DisplayClass77_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x15670f8 | Atlas.Save.SaveManager.<>c__DisplayClass77_0.<UpdateSaveDataToLatestVersion>b__0
// ============================================================

uint Atlas_Save_SaveManager___c__DisplayClass77_0___UpdateSaveDataToLatestVersion_b__0
               (long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  ushort *puVar17;
  uint uVar18;
  uint *puVar19;
  code *pcVar20;
  ushort *puVar21;
  long lVar22;
  long lVar23;
  ushort *puVar24;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  int iVar25;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  plVar13 = *(long **)(param_1 + 0x10);
  uVar14 = 0;
  if (param_2 == plVar13) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
    if ((param_2 != (long *)0x0) && (plVar13 != (long *)0x0)) {
      if ((int)param_2[2] == (int)plVar13[2]) {
System_String__EqualsHelper:
        *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        if ((param_2 != (long *)0x0) && (plVar13 != (long *)0x0)) {
          plVar8 = (long *)((long)param_2 + 0x14);
          iVar6 = (int)param_2[2];
          plVar13 = (long *)((long)plVar13 + 0x14);
          uVar14 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
          if ((uVar14 & 1) == 0) {
            iVar25 = iVar6;
            if (9 < iVar6) {
              do {
                if ((int)*plVar8 != (int)*plVar13) {
                  return 0;
                }
                if (*(int *)((long)plVar8 + 4) != *(int *)((long)plVar13 + 4)) {
                  return 0;
                }
                if ((int)plVar8[1] != (int)plVar13[1]) {
                  return 0;
                }
                if (*(int *)((long)plVar8 + 0xc) != *(int *)((long)plVar13 + 0xc)) {
                  return 0;
                }
                if ((int)plVar8[2] != (int)plVar13[2]) {
                  return 0;
                }
                plVar8 = (long *)((long)plVar8 + 0x14);
                plVar13 = (long *)((long)plVar13 + 0x14);
                iVar6 = iVar25 + -10;
                bVar4 = 0x13 < iVar25;
                iVar25 = iVar6;
              } while (bVar4);
            }
          }
          else {
            iVar25 = iVar6;
            if (0xb < iVar6) {
              do {
                if (((*plVar8 != *plVar13) || (plVar8[1] != plVar13[1])) ||
                   (plVar8[2] != plVar13[2])) {
                  return 0;
                }
                plVar8 = plVar8 + 3;
                plVar13 = plVar13 + 3;
                iVar6 = iVar25 + -0xc;
                bVar4 = 0x17 < iVar25;
                iVar25 = iVar6;
              } while (bVar4);
            }
          }
          if (iVar6 < 1) {
            uVar5 = 1;
          }
          else {
            iVar6 = iVar6 + 2;
            do {
              bVar4 = (int)*plVar8 == (int)*plVar13;
              uVar5 = (uint)bVar4;
              if (!bVar4) {
                return uVar5;
              }
              plVar8 = (long *)((long)plVar8 + 4);
              plVar13 = (long *)((long)plVar13 + 4);
              iVar6 = iVar6 + -2;
            } while (2 < iVar6);
          }
          return uVar5;
        }
        auVar26 = func_0x00f78af4();
        lVar22 = auVar26._8_8_;
        lVar12 = auVar26._0_8_;
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x20;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x40) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)register0x00000008 + -0x38) = &System_String__CompareOrdinalHelper;
        if ((bRam0000000003eb9441 & 1) == 0) {
          func_0x00f78a20(0x3d232c0);
          bRam0000000003eb9441 = 1;
        }
        if ((lVar12 != 0) && (lVar22 != 0)) {
          uVar1 = *(undefined4 *)(lVar12 + 0x10);
          uVar2 = *(undefined4 *)(lVar22 + 0x10);
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar6 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
          puVar16 = (uint *)(lVar12 + 0x14);
          puVar19 = (uint *)(lVar22 + 0x14);
          if (iVar6 < 10) goto code_r0x029ca8c8;
          lVar23 = 4;
          iVar25 = iVar6;
          goto code_r0x029ca858;
        }
        auVar27 = func_0x00f78af4();
        plVar8 = auVar27._8_8_;
        param_2 = auVar27._0_8_;
        *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb9000;
        *(undefined1 (*) [16])((long)register0x00000008 + -0x80) = auVar26;
        *(undefined1 **)((long)register0x00000008 + -0x70) =
             (undefined1 *)((long)register0x00000008 + -0x40);
        *(undefined **)((long)register0x00000008 + -0x68) = &System_String__Equals;
        if ((bRam0000000003eb9442 & 1) == 0) {
          func_0x00f78a20(0x3d24dd0);
          bRam0000000003eb9442 = 1;
        }
        if (param_2 != (long *)0x0) {
          if ((plVar8 != (long *)0x0) && (*plVar8 == /*string_TypeInfo*/ lRam0000000003d24dd0)) {
            if (param_2 == plVar8) {
              return 1;
            }
            uVar15 = uVar14;
            plVar7 = param_2;
            if (plVar8 == (long *)0x0) goto code_r0x029caa44;
            if ((int)param_2[2] == (int)plVar8[2]) goto code_r0x029ca9f4;
          }
          return 0;
        }
        func_0x00f78a24(0x3d23938);
        plVar7 = (long *)func_0x00f78aec();
        /*System.NullReferenceException$$.ctor*/ func_0x02950520(plVar7,0);
        uVar9 = func_0x00f78a24(0x3d5dad8);
        func_0x00f78ac0(plVar7,uVar9);
        uVar15 = uVar14;
code_r0x029caa44:
        auVar26 = func_0x00f78af4();
        plVar13 = auVar26._8_8_;
        param_2 = auVar26._0_8_;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3eb9000;
        *(long **)((long)register0x00000008 + -0xb0) = plVar8;
        *(long **)((long)register0x00000008 + -0xa8) = plVar7;
        *(undefined1 **)((long)register0x00000008 + -0xa0) =
             (undefined1 *)((long)register0x00000008 + -0x70);
        *(undefined **)((long)register0x00000008 + -0x98) = &System_String__Equals;
        uVar14 = uVar15;
        if ((bRam0000000003eb9443 & 1) == 0) {
          func_0x00f78a20(0x3d20b50);
          bRam0000000003eb9443 = 1;
        }
        if (5 < (uint)uVar15) {
code_r0x029caca0:
          uVar9 = func_0x00f78a24(0x3d746f0);
          uVar9 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar9,0);
          func_0x00f78a24(0x3d1fce8);
          uVar10 = func_0x00f78aec();
          uVar11 = func_0x00f78a24(0x3d784e0);
          /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar10,uVar9,uVar11,0);
          uVar9 = func_0x00f78a24(0x3d5dae8);
          func_0x00f78ac0(uVar10,uVar9);
          goto code_r0x029cad04;
        }
        if (param_2 == plVar13) {
          return 1;
        }
        if (plVar13 == (long *)0x0) {
          return 0;
        }
        switch(uVar15 & 0xffffffff) {
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
          if ((plVar8 == (long *)0x0) ||
             (plVar8 = (long *)(**(code **)(*plVar8 + 0x1f8))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x200)),
             plVar8 == (long *)0x0)) goto code_r0x029cad04;
          pcVar20 = *(code **)(*plVar8 + 0x1a8);
          uVar9 = *(undefined8 *)(*plVar8 + 0x1b0);
          uVar10 = 1;
          goto code_r0x029cabc8;
        case 4:
          if ((int)param_2[2] != (int)plVar13[2]) {
            return 0;
          }
          unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0xa0);
          unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x98);
          unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xb0);
          unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0xa8);
          unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xc0);
          unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xb8);
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
          goto System_String__EqualsHelper;
        case 5:
          iVar6 = (int)param_2[2];
          if (iVar6 != (int)plVar13[2]) {
            return 0;
          }
          if (iVar6 == 0) goto code_r0x029cac68;
          lVar22 = (long)iVar6 << 1;
          puVar17 = (ushort *)((long)param_2 + 0x16);
          puVar24 = (ushort *)((long)param_2 + 0x14);
          lVar12 = lVar22;
          goto code_r0x029cac24;
        default:
          goto code_r0x029caca0;
        }
        if ((plVar8 == (long *)0x0) ||
           (plVar8 = (long *)(**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200))
           , plVar8 == (long *)0x0)) {
code_r0x029cad04:
          lVar12 = func_0x00f78af4();
          if (*(int *)(lVar12 + 0x10) == 0) {
            return 1;
          }
          lVar22 = (long)*(int *)(lVar12 + 0x10) * 2;
          puVar17 = (ushort *)(lVar12 + 0x14);
          puVar24 = (ushort *)(lVar12 + 0x16);
          do {
            lVar22 = lVar22 + -2;
            uVar3 = *puVar17;
            puVar17 = puVar24;
            puVar24 = puVar24 + 1;
          } while (uVar3 < 0x80 && lVar22 != 0);
          return (uint)(uVar3 < 0x80);
        }
        pcVar20 = *(code **)(*plVar8 + 0x1a8);
        uVar9 = *(undefined8 *)(*plVar8 + 0x1b0);
        uVar10 = 0;
code_r0x029cabc8:
        iVar6 = (*pcVar20)(plVar8,param_2,plVar13,uVar10,uVar9);
        goto code_r0x029cabcc;
      }
      uVar5 = 0;
    }
  }
  return uVar5;
code_r0x029ca9f4:
  unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
  unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
  unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
  unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
  unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  plVar13 = plVar8;
  goto System_String__EqualsHelper;
code_r0x029cac8c:
  iVar6 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(param_2,plVar13,0);
  goto code_r0x029cabcc;
  while( true ) {
    if (puVar16[1] != puVar19[1]) goto code_r0x029ca930;
    if (puVar16[2] != puVar19[2]) {
      lVar23 = 8;
      goto code_r0x029ca930;
    }
    if (puVar16[3] != puVar19[3]) {
      lVar23 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar16[4] != puVar19[4]) {
      lVar23 = 0x10;
      goto code_r0x029ca930;
    }
    puVar16 = puVar16 + 5;
    puVar19 = puVar19 + 5;
    iVar6 = iVar25 + -10;
    bVar4 = iVar25 < 0x14;
    iVar25 = iVar6;
    if (bVar4) break;
code_r0x029ca858:
    if (*puVar16 != *puVar19) {
      lVar23 = 0;
code_r0x029ca930:
      puVar16 = (uint *)(lVar23 + (long)puVar16);
      puVar19 = (uint *)(lVar23 + (long)puVar19);
      uVar5 = (uint)(ushort)*puVar16 - (uint)(ushort)*puVar19;
      if (uVar5 != 0) {
        return uVar5;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar6) {
    iVar6 = iVar6 + 2;
    do {
      if (*puVar16 != *puVar19) {
        uVar5 = (*puVar16 & 0xffff) - (*puVar19 & 0xffff);
        if (uVar5 != 0) {
          return uVar5;
        }
code_r0x029ca948:
        uVar5 = (uint)*(ushort *)((long)puVar16 + 2);
        uVar18 = (uint)*(ushort *)((long)puVar19 + 2);
        goto code_r0x029ca950;
      }
      puVar16 = puVar16 + 1;
      puVar19 = puVar19 + 1;
      iVar6 = iVar6 + -2;
    } while (2 < iVar6);
  }
  uVar5 = *(uint *)(lVar12 + 0x10);
  uVar18 = *(uint *)(lVar22 + 0x10);
code_r0x029ca950:
  return uVar5 - uVar18;
  while( true ) {
    lVar12 = lVar12 + -2;
    puVar17 = puVar21 + 1;
    puVar24 = puVar21;
    if (lVar12 == 0) break;
code_r0x029cac24:
    puVar21 = puVar17;
    if (0x7f < *puVar24) goto code_r0x029cac8c;
  }
  if (iVar6 != 0) {
    puVar17 = (ushort *)((long)plVar13 + 0x16);
    puVar24 = (ushort *)((long)plVar13 + 0x14);
    do {
      puVar21 = puVar17;
      if (0x7f < *puVar24) goto code_r0x029cac8c;
      lVar22 = lVar22 + -2;
      puVar17 = puVar21 + 1;
      puVar24 = puVar21;
    } while (lVar22 != 0);
  }
code_r0x029cac68:
  iVar6 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(param_2,plVar13);
code_r0x029cabcc:
  return (uint)(iVar6 == 0);
}



