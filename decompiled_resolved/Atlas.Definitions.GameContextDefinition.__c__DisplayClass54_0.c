// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Definitions.GameContextDefinition.<>c__DisplayClass54_0

// ============================================================
// RVA: 0x1552244 | Atlas.Definitions.GameContextDefinition.<>c__DisplayClass54_0..ctor
// ============================================================

void Atlas_Definitions_GameContextDefinition___c__DisplayClass54_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x155224c | Atlas.Definitions.GameContextDefinition.<>c__DisplayClass54_0.<GenerateListOfAllSceneInfos>b__0
// ============================================================

ulong Atlas_Definitions_GameContextDefinition___c__DisplayClass54_0___GenerateListOfAllSceneInfos_b__0
                (long param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  ushort *puVar15;
  uint uVar16;
  uint *puVar17;
  code *pcVar18;
  ushort *puVar19;
  long lVar20;
  ushort *puVar21;
  long *unaff_x19;
  long lVar22;
  long *unaff_x20;
  long lVar23;
  long *plVar24;
  int iVar25;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  if ((bRam0000000003eb4f95 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2dc78);
    bRam0000000003eb4f95 = 1;
  }
  if ((param_2 == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    auVar27 = func_0x00f78af4();
    uVar11 = auVar27._0_8_;
    *(undefined8 *)(uVar11 + 0x10) = *param_3;
    *(long *)(uVar11 + 0x20) = auVar27._8_8_;
    *(undefined8 **)(uVar11 + 0x28) = param_3;
    return uVar11;
  }
  lVar22 = *(long *)(param_2 + 0x18);
  lVar23 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
  auVar27._8_8_ = lVar23;
  auVar27._0_8_ = lVar22;
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((lVar22 == 0) || (lVar23 == 0)) {
    uVar11 = 0;
    if (lVar22 == lVar23) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
      if ((lVar22 != 0) && (lVar23 != 0)) {
        if (*(int *)(lVar22 + 0x10) == *(int *)(lVar23 + 0x10)) goto System_String__EqualsHelper;
        uVar10 = 0;
      }
    }
    return uVar10;
  }
  uVar10 = 5;
code_r0x029caa48:
  lVar23 = auVar27._8_8_;
  lVar22 = auVar27._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar11 = uVar10;
  if ((bRam0000000003eb9443 & 1) == 0) {
    func_0x00f78a20(0x3d20b50);
    bRam0000000003eb9443 = 1;
  }
  if (5 < (uint)uVar10) {
code_r0x029caca0:
    uVar7 = func_0x00f78a24(0x3d746f0);
    uVar7 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar7,0);
    func_0x00f78a24(0x3d1fce8);
    uVar8 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d784e0);
    /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar8,uVar7,uVar9,0);
    uVar7 = func_0x00f78a24(0x3d5dae8);
    func_0x00f78ac0(uVar8,uVar7);
    goto code_r0x029cad04;
  }
  if (lVar22 == lVar23) {
    return 1;
  }
  if (lVar23 == 0) {
    return 0;
  }
  switch(uVar10 & 0xffffffff) {
  case 0:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar6 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    break;
  case 1:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar6 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    goto joined_r0x029caba0;
  case 2:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar6 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
    break;
  case 3:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar6 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
    if ((plVar6 == (long *)0x0) ||
       (plVar6 = (long *)(**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200)),
       plVar6 == (long *)0x0)) goto code_r0x029cad04;
    pcVar18 = *(code **)(*plVar6 + 0x1a8);
    uVar7 = *(undefined8 *)(*plVar6 + 0x1b0);
    uVar8 = 1;
    goto code_r0x029cabc8;
  case 4:
    goto code_r0x029cabd8;
  case 5:
    iVar5 = *(int *)(lVar22 + 0x10);
    if (iVar5 != *(int *)(lVar23 + 0x10)) {
      return 0;
    }
    if (iVar5 == 0) goto code_r0x029cac68;
    lVar14 = (long)iVar5 << 1;
    puVar15 = (ushort *)(lVar22 + 0x16);
    puVar21 = (ushort *)(lVar22 + 0x14);
    lVar20 = lVar14;
    goto code_r0x029cac24;
  default:
    goto code_r0x029caca0;
  }
  if ((plVar6 == (long *)0x0) ||
     (plVar6 = (long *)(**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200)),
     plVar6 == (long *)0x0)) {
code_r0x029cad04:
    lVar22 = func_0x00f78af4();
    if (*(int *)(lVar22 + 0x10) == 0) {
      return 1;
    }
    lVar23 = (long)*(int *)(lVar22 + 0x10) * 2;
    puVar15 = (ushort *)(lVar22 + 0x14);
    puVar21 = (ushort *)(lVar22 + 0x16);
    do {
      lVar23 = lVar23 + -2;
      uVar3 = *puVar15;
      puVar15 = puVar21;
      puVar21 = puVar21 + 1;
    } while (uVar3 < 0x80 && lVar23 != 0);
    return (ulong)(uVar3 < 0x80);
  }
  pcVar18 = *(code **)(*plVar6 + 0x1a8);
  uVar7 = *(undefined8 *)(*plVar6 + 0x1b0);
  uVar8 = 0;
code_r0x029cabc8:
  iVar5 = (*pcVar18)(plVar6,lVar22,lVar23,uVar8,uVar7);
  goto code_r0x029cabcc;
code_r0x029cac8c:
  iVar5 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar22,lVar23,0);
  goto code_r0x029cabcc;
code_r0x029cabd8:
  if (*(int *)(lVar22 + 0x10) != *(int *)(lVar23 + 0x10)) {
    return 0;
  }
  unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
  unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
  unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
  unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
  unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
System_String__EqualsHelper:
  while( true ) {
    lVar22 = auVar27._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((lVar22 != 0) && (auVar27._8_8_ != 0)) {
      plVar6 = (long *)(lVar22 + 0x14);
      iVar5 = *(int *)(lVar22 + 0x10);
      plVar24 = (long *)(auVar27._8_8_ + 0x14);
      uVar11 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
      if ((uVar11 & 1) == 0) {
        iVar25 = iVar5;
        if (9 < iVar5) {
          do {
            if ((int)*plVar6 != (int)*plVar24) {
              return 0;
            }
            if (*(int *)((long)plVar6 + 4) != *(int *)((long)plVar24 + 4)) {
              return 0;
            }
            if ((int)plVar6[1] != (int)plVar24[1]) {
              return 0;
            }
            if (*(int *)((long)plVar6 + 0xc) != *(int *)((long)plVar24 + 0xc)) {
              return 0;
            }
            if ((int)plVar6[2] != (int)plVar24[2]) {
              return 0;
            }
            plVar6 = (long *)((long)plVar6 + 0x14);
            plVar24 = (long *)((long)plVar24 + 0x14);
            iVar5 = iVar25 + -10;
            bVar4 = 0x13 < iVar25;
            iVar25 = iVar5;
          } while (bVar4);
        }
      }
      else {
        iVar25 = iVar5;
        if (0xb < iVar5) {
          do {
            if (((*plVar6 != *plVar24) || (plVar6[1] != plVar24[1])) || (plVar6[2] != plVar24[2])) {
              return 0;
            }
            plVar6 = plVar6 + 3;
            plVar24 = plVar24 + 3;
            iVar5 = iVar25 + -0xc;
            bVar4 = 0x17 < iVar25;
            iVar25 = iVar5;
          } while (bVar4);
        }
      }
      if (iVar5 < 1) {
        uVar11 = 1;
      }
      else {
        iVar5 = iVar5 + 2;
        do {
          bVar4 = (int)*plVar6 == (int)*plVar24;
          uVar11 = (ulong)bVar4;
          if (!bVar4) {
            return uVar11;
          }
          plVar6 = (long *)((long)plVar6 + 4);
          plVar24 = (long *)((long)plVar24 + 4);
          iVar5 = iVar5 + -2;
        } while (2 < iVar5);
      }
      return uVar11;
    }
    auVar26 = func_0x00f78af4();
    lVar23 = auVar26._8_8_;
    lVar22 = auVar26._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &System_String__CompareOrdinalHelper;
    uVar10 = uVar11;
    if ((bRam0000000003eb9441 & 1) == 0) {
      func_0x00f78a20(0x3d232c0);
      bRam0000000003eb9441 = 1;
      uVar10 = uVar11;
    }
    if ((lVar22 != 0) && (lVar23 != 0)) {
      uVar1 = *(undefined4 *)(lVar22 + 0x10);
      uVar2 = *(undefined4 *)(lVar23 + 0x10);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
      puVar13 = (uint *)(lVar22 + 0x14);
      puVar17 = (uint *)(lVar23 + 0x14);
      if (iVar5 < 10) goto code_r0x029ca8c8;
      lVar20 = 4;
      iVar25 = iVar5;
      goto code_r0x029ca858;
    }
    auVar27 = func_0x00f78af4();
    unaff_x20 = auVar27._8_8_;
    unaff_x19 = auVar27._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb9000;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x80) = auVar26;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x68) = &System_String__Equals;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x70);
    unaff_x21 = 0x3eb9000;
    if ((bRam0000000003eb9442 & 1) == 0) {
      func_0x00f78a20(0x3d24dd0);
      bRam0000000003eb9442 = 1;
    }
    if (unaff_x19 == (long *)0x0) break;
    if ((unaff_x20 == (long *)0x0) || (*unaff_x20 != /*string_TypeInfo*/ lRam0000000003d24dd0)) {
      return 0;
    }
    if (unaff_x19 == unaff_x20) {
      return 1;
    }
    if (unaff_x20 == (long *)0x0) goto code_r0x029caa44;
    if ((int)unaff_x19[2] != (int)unaff_x20[2]) {
      return 0;
    }
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x70);
    unaff_x30 = *(undefined **)((long)register0x00000008 + -0x68);
    unaff_x20 = *(long **)((long)register0x00000008 + -0x80);
    unaff_x19 = *(long **)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    uVar11 = uVar10;
  }
  func_0x00f78a24(0x3d23938);
  unaff_x19 = (long *)func_0x00f78aec();
  /*System.NullReferenceException$$.ctor*/ func_0x02950520(unaff_x19,0);
  uVar7 = func_0x00f78a24(0x3d5dad8);
  func_0x00f78ac0(unaff_x19,uVar7);
code_r0x029caa44:
  unaff_x30 = &System_String__Equals;
  auVar27 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  goto code_r0x029caa48;
  while( true ) {
    if (puVar13[1] != puVar17[1]) goto code_r0x029ca930;
    if (puVar13[2] != puVar17[2]) {
      lVar20 = 8;
      goto code_r0x029ca930;
    }
    if (puVar13[3] != puVar17[3]) {
      lVar20 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar13[4] != puVar17[4]) {
      lVar20 = 0x10;
      goto code_r0x029ca930;
    }
    puVar13 = puVar13 + 5;
    puVar17 = puVar17 + 5;
    iVar5 = iVar25 + -10;
    bVar4 = iVar25 < 0x14;
    iVar25 = iVar5;
    if (bVar4) break;
code_r0x029ca858:
    if (*puVar13 != *puVar17) {
      lVar20 = 0;
code_r0x029ca930:
      puVar13 = (uint *)(lVar20 + (long)puVar13);
      puVar17 = (uint *)(lVar20 + (long)puVar17);
      uVar12 = (uint)(ushort)*puVar13 - (uint)(ushort)*puVar17;
      if (uVar12 != 0) {
        return (ulong)uVar12;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar5) {
    iVar5 = iVar5 + 2;
    do {
      if (*puVar13 != *puVar17) {
        uVar12 = (*puVar13 & 0xffff) - (*puVar17 & 0xffff);
        if (uVar12 != 0) {
          return (ulong)uVar12;
        }
code_r0x029ca948:
        uVar12 = (uint)*(ushort *)((long)puVar13 + 2);
        uVar16 = (uint)*(ushort *)((long)puVar17 + 2);
        goto code_r0x029ca950;
      }
      puVar13 = puVar13 + 1;
      puVar17 = puVar17 + 1;
      iVar5 = iVar5 + -2;
    } while (2 < iVar5);
  }
  uVar12 = *(uint *)(lVar22 + 0x10);
  uVar16 = *(uint *)(lVar23 + 0x10);
code_r0x029ca950:
  return (ulong)(uVar12 - uVar16);
  while( true ) {
    lVar20 = lVar20 + -2;
    puVar15 = puVar19 + 1;
    puVar21 = puVar19;
    if (lVar20 == 0) break;
code_r0x029cac24:
    puVar19 = puVar15;
    if (0x7f < *puVar21) goto code_r0x029cac8c;
  }
  if (iVar5 != 0) {
    puVar15 = (ushort *)(lVar23 + 0x16);
    puVar21 = (ushort *)(lVar23 + 0x14);
    do {
      puVar19 = puVar15;
      if (0x7f < *puVar21) goto code_r0x029cac8c;
      lVar14 = lVar14 + -2;
      puVar15 = puVar19 + 1;
      puVar21 = puVar19;
    } while (lVar14 != 0);
  }
code_r0x029cac68:
  iVar5 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar22,lVar23);
code_r0x029cabcc:
  return (ulong)(iVar5 == 0);
}



