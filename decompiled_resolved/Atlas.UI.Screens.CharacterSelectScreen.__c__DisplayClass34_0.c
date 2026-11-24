// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass34_0

// ============================================================
// RVA: 0x15479b8 | Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass34_0..ctor
// ============================================================

void Atlas_UI_Screens_CharacterSelectScreen___c__DisplayClass34_0___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x15479c0 | Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass34_0.<SetSkin>b__0
// ============================================================

ulong Atlas_UI_Screens_CharacterSelectScreen___c__DisplayClass34_0___SetSkin_b__0
                (long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint *puVar15;
  long lVar16;
  ushort *puVar17;
  uint uVar18;
  uint *puVar19;
  code *pcVar20;
  ushort *puVar21;
  long lVar22;
  ushort *puVar23;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar24;
  int iVar25;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  if ((bRam0000000003eb4f6a & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    bRam0000000003eb4f6a = 1;
  }
  if (param_2 == (long *)0x0) {
    uVar13 = func_0x00f78af4();
    return uVar13;
  }
  uVar6 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar6,0);
  lVar11 = *(long *)(param_1 + 0x10);
  auVar27._8_8_ = lVar11;
  auVar27._0_8_ = lVar7;
  if ((lVar7 == 0) || (lVar11 == 0)) {
    uVar13 = 0;
    if (lVar7 == lVar11) {
      uVar12 = 1;
    }
    else {
      uVar12 = 0;
      if ((lVar7 != 0) && (lVar11 != 0)) {
        if (*(int *)(lVar7 + 0x10) == *(int *)(lVar11 + 0x10)) goto System_String__EqualsHelper;
        uVar12 = 0;
      }
    }
    return uVar12;
  }
  uVar12 = 5;
code_r0x029caa48:
  lVar11 = auVar27._8_8_;
  lVar7 = auVar27._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar13 = uVar12;
  if ((bRam0000000003eb9443 & 1) == 0) {
    func_0x00f78a20(0x3d20b50);
    bRam0000000003eb9443 = 1;
  }
  if (5 < (uint)uVar12) {
code_r0x029caca0:
    uVar6 = func_0x00f78a24(0x3d746f0);
    uVar6 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar6,0);
    func_0x00f78a24(0x3d1fce8);
    uVar9 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d784e0);
    /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar9,uVar6,uVar10,0);
    uVar6 = func_0x00f78a24(0x3d5dae8);
    func_0x00f78ac0(uVar9,uVar6);
    goto code_r0x029cad04;
  }
  if (lVar7 == lVar11) {
    return 1;
  }
  if (lVar11 == 0) {
    return 0;
  }
  switch(uVar12 & 0xffffffff) {
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
       (plVar8 = (long *)(**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200)),
       plVar8 == (long *)0x0)) goto code_r0x029cad04;
    pcVar20 = *(code **)(*plVar8 + 0x1a8);
    uVar6 = *(undefined8 *)(*plVar8 + 0x1b0);
    uVar9 = 1;
    goto code_r0x029cabc8;
  case 4:
    goto code_r0x029cabd8;
  case 5:
    iVar5 = *(int *)(lVar7 + 0x10);
    if (iVar5 != *(int *)(lVar11 + 0x10)) {
      return 0;
    }
    if (iVar5 == 0) goto code_r0x029cac68;
    lVar16 = (long)iVar5 << 1;
    puVar17 = (ushort *)(lVar7 + 0x16);
    puVar23 = (ushort *)(lVar7 + 0x14);
    lVar22 = lVar16;
    goto code_r0x029cac24;
  default:
    goto code_r0x029caca0;
  }
  if ((plVar8 == (long *)0x0) ||
     (plVar8 = (long *)(**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200)),
     plVar8 == (long *)0x0)) {
code_r0x029cad04:
    lVar7 = func_0x00f78af4();
    if (*(int *)(lVar7 + 0x10) == 0) {
      return 1;
    }
    lVar11 = (long)*(int *)(lVar7 + 0x10) * 2;
    puVar17 = (ushort *)(lVar7 + 0x14);
    puVar23 = (ushort *)(lVar7 + 0x16);
    do {
      lVar11 = lVar11 + -2;
      uVar3 = *puVar17;
      puVar17 = puVar23;
      puVar23 = puVar23 + 1;
    } while (uVar3 < 0x80 && lVar11 != 0);
    return (ulong)(uVar3 < 0x80);
  }
  pcVar20 = *(code **)(*plVar8 + 0x1a8);
  uVar6 = *(undefined8 *)(*plVar8 + 0x1b0);
  uVar9 = 0;
code_r0x029cabc8:
  iVar5 = (*pcVar20)(plVar8,lVar7,lVar11,uVar9,uVar6);
  goto code_r0x029cabcc;
code_r0x029cac8c:
  iVar5 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar7,lVar11,0);
  goto code_r0x029cabcc;
code_r0x029cabd8:
  if (*(int *)(lVar7 + 0x10) != *(int *)(lVar11 + 0x10)) {
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
    lVar7 = auVar27._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((lVar7 != 0) && (auVar27._8_8_ != 0)) {
      plVar8 = (long *)(lVar7 + 0x14);
      iVar5 = *(int *)(lVar7 + 0x10);
      plVar24 = (long *)(auVar27._8_8_ + 0x14);
      uVar13 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
      if ((uVar13 & 1) == 0) {
        iVar25 = iVar5;
        if (9 < iVar5) {
          do {
            if ((int)*plVar8 != (int)*plVar24) {
              return 0;
            }
            if (*(int *)((long)plVar8 + 4) != *(int *)((long)plVar24 + 4)) {
              return 0;
            }
            if ((int)plVar8[1] != (int)plVar24[1]) {
              return 0;
            }
            if (*(int *)((long)plVar8 + 0xc) != *(int *)((long)plVar24 + 0xc)) {
              return 0;
            }
            if ((int)plVar8[2] != (int)plVar24[2]) {
              return 0;
            }
            plVar8 = (long *)((long)plVar8 + 0x14);
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
            if (((*plVar8 != *plVar24) || (plVar8[1] != plVar24[1])) || (plVar8[2] != plVar24[2])) {
              return 0;
            }
            plVar8 = plVar8 + 3;
            plVar24 = plVar24 + 3;
            iVar5 = iVar25 + -0xc;
            bVar4 = 0x17 < iVar25;
            iVar25 = iVar5;
          } while (bVar4);
        }
      }
      if (iVar5 < 1) {
        uVar13 = 1;
      }
      else {
        iVar5 = iVar5 + 2;
        do {
          bVar4 = (int)*plVar8 == (int)*plVar24;
          uVar13 = (ulong)bVar4;
          if (!bVar4) {
            return uVar13;
          }
          plVar8 = (long *)((long)plVar8 + 4);
          plVar24 = (long *)((long)plVar24 + 4);
          iVar5 = iVar5 + -2;
        } while (2 < iVar5);
      }
      return uVar13;
    }
    auVar26 = func_0x00f78af4();
    lVar11 = auVar26._8_8_;
    lVar7 = auVar26._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x50) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &System_String__CompareOrdinalHelper;
    uVar12 = uVar13;
    if ((bRam0000000003eb9441 & 1) == 0) {
      func_0x00f78a20(0x3d232c0);
      bRam0000000003eb9441 = 1;
      uVar12 = uVar13;
    }
    if ((lVar7 != 0) && (lVar11 != 0)) {
      uVar1 = *(undefined4 *)(lVar7 + 0x10);
      uVar2 = *(undefined4 *)(lVar11 + 0x10);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
      puVar15 = (uint *)(lVar7 + 0x14);
      puVar19 = (uint *)(lVar11 + 0x14);
      if (iVar5 < 10) goto code_r0x029ca8c8;
      lVar22 = 4;
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
    uVar13 = uVar12;
  }
  func_0x00f78a24(0x3d23938);
  unaff_x19 = (long *)func_0x00f78aec();
  /*System.NullReferenceException$$.ctor*/ func_0x02950520(unaff_x19,0);
  uVar6 = func_0x00f78a24(0x3d5dad8);
  func_0x00f78ac0(unaff_x19,uVar6);
code_r0x029caa44:
  unaff_x30 = &System_String__Equals;
  auVar27 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  goto code_r0x029caa48;
  while( true ) {
    if (puVar15[1] != puVar19[1]) goto code_r0x029ca930;
    if (puVar15[2] != puVar19[2]) {
      lVar22 = 8;
      goto code_r0x029ca930;
    }
    if (puVar15[3] != puVar19[3]) {
      lVar22 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar15[4] != puVar19[4]) {
      lVar22 = 0x10;
      goto code_r0x029ca930;
    }
    puVar15 = puVar15 + 5;
    puVar19 = puVar19 + 5;
    iVar5 = iVar25 + -10;
    bVar4 = iVar25 < 0x14;
    iVar25 = iVar5;
    if (bVar4) break;
code_r0x029ca858:
    if (*puVar15 != *puVar19) {
      lVar22 = 0;
code_r0x029ca930:
      puVar15 = (uint *)(lVar22 + (long)puVar15);
      puVar19 = (uint *)(lVar22 + (long)puVar19);
      uVar14 = (uint)(ushort)*puVar15 - (uint)(ushort)*puVar19;
      if (uVar14 != 0) {
        return (ulong)uVar14;
      }
      goto code_r0x029ca948;
    }
  }
code_r0x029ca8c8:
  if (0 < iVar5) {
    iVar5 = iVar5 + 2;
    do {
      if (*puVar15 != *puVar19) {
        uVar14 = (*puVar15 & 0xffff) - (*puVar19 & 0xffff);
        if (uVar14 != 0) {
          return (ulong)uVar14;
        }
code_r0x029ca948:
        uVar14 = (uint)*(ushort *)((long)puVar15 + 2);
        uVar18 = (uint)*(ushort *)((long)puVar19 + 2);
        goto code_r0x029ca950;
      }
      puVar15 = puVar15 + 1;
      puVar19 = puVar19 + 1;
      iVar5 = iVar5 + -2;
    } while (2 < iVar5);
  }
  uVar14 = *(uint *)(lVar7 + 0x10);
  uVar18 = *(uint *)(lVar11 + 0x10);
code_r0x029ca950:
  return (ulong)(uVar14 - uVar18);
  while( true ) {
    lVar22 = lVar22 + -2;
    puVar17 = puVar21 + 1;
    puVar23 = puVar21;
    if (lVar22 == 0) break;
code_r0x029cac24:
    puVar21 = puVar17;
    if (0x7f < *puVar23) goto code_r0x029cac8c;
  }
  if (iVar5 != 0) {
    puVar17 = (ushort *)(lVar11 + 0x16);
    puVar23 = (ushort *)(lVar11 + 0x14);
    do {
      puVar21 = puVar17;
      if (0x7f < *puVar23) goto code_r0x029cac8c;
      lVar16 = lVar16 + -2;
      puVar17 = puVar21 + 1;
      puVar23 = puVar21;
    } while (lVar16 != 0);
  }
code_r0x029cac68:
  iVar5 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar7,lVar11);
code_r0x029cabcc:
  return (ulong)(iVar5 == 0);
}



