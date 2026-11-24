// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.StringID

// ============================================================
// RVA: 0x1505738 | Atlas.StringID.get_IsValid
// ============================================================

uint Atlas_StringID__get_IsValid(undefined8 *param_1)

{
  uint uVar1;
  
  uVar1 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*param_1,0);
  return uVar1 ^ 1;
}



// ============================================================
// RVA: 0x1505758 | Atlas.StringID..ctor
// ============================================================

void Atlas_StringID___ctor(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



// ============================================================
// RVA: 0x1505760 | Atlas.StringID.op_Implicit
// ============================================================

void Atlas_StringID__op_Implicit(void)

{
  return;
}



// ============================================================
// RVA: 0x1505764 | Atlas.StringID.op_Equality
// ============================================================

uint Atlas_StringID__op_Equality(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  ushort *puVar16;
  uint uVar17;
  uint *puVar18;
  code *pcVar19;
  ushort *puVar20;
  long lVar21;
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
  
  auVar27._8_8_ = param_2;
  auVar27._0_8_ = param_1;
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar13 = 0;
    if (param_1 == param_2) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
      if ((param_1 != 0) && (param_2 != 0)) {
        if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) goto System_String__EqualsHelper;
        uVar5 = 0;
      }
    }
    return uVar5;
  }
  uVar12 = 5;
code_r0x029caa48:
  lVar21 = auVar27._8_8_;
  lVar11 = auVar27._0_8_;
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
    uVar8 = func_0x00f78a24(0x3d746f0);
    uVar8 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar8,0);
    func_0x00f78a24(0x3d1fce8);
    uVar9 = func_0x00f78aec();
    uVar10 = func_0x00f78a24(0x3d784e0);
    /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar9,uVar8,uVar10,0);
    uVar8 = func_0x00f78a24(0x3d5dae8);
    func_0x00f78ac0(uVar9,uVar8);
    goto code_r0x029cad04;
  }
  if (lVar11 == lVar21) {
    return 1;
  }
  if (lVar21 == 0) {
    return 0;
  }
  switch(uVar12 & 0xffffffff) {
  case 0:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar7 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    break;
  case 1:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar7 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    goto joined_r0x029caba0;
  case 2:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar7 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
    break;
  case 3:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar7 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200)),
       plVar7 == (long *)0x0)) goto code_r0x029cad04;
    pcVar19 = *(code **)(*plVar7 + 0x1a8);
    uVar8 = *(undefined8 *)(*plVar7 + 0x1b0);
    uVar9 = 1;
    goto code_r0x029cabc8;
  case 4:
    goto code_r0x029cabd8;
  case 5:
    iVar6 = *(int *)(lVar11 + 0x10);
    if (iVar6 != *(int *)(lVar21 + 0x10)) {
      return 0;
    }
    if (iVar6 == 0) goto code_r0x029cac68;
    lVar15 = (long)iVar6 << 1;
    puVar16 = (ushort *)(lVar11 + 0x16);
    puVar23 = (ushort *)(lVar11 + 0x14);
    lVar22 = lVar15;
    goto code_r0x029cac24;
  default:
    goto code_r0x029caca0;
  }
  if ((plVar7 == (long *)0x0) ||
     (plVar7 = (long *)(**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200)),
     plVar7 == (long *)0x0)) {
code_r0x029cad04:
    lVar11 = func_0x00f78af4();
    if (*(int *)(lVar11 + 0x10) == 0) {
      return 1;
    }
    lVar21 = (long)*(int *)(lVar11 + 0x10) * 2;
    puVar16 = (ushort *)(lVar11 + 0x14);
    puVar23 = (ushort *)(lVar11 + 0x16);
    do {
      lVar21 = lVar21 + -2;
      uVar3 = *puVar16;
      puVar16 = puVar23;
      puVar23 = puVar23 + 1;
    } while (uVar3 < 0x80 && lVar21 != 0);
    return (uint)(uVar3 < 0x80);
  }
  pcVar19 = *(code **)(*plVar7 + 0x1a8);
  uVar8 = *(undefined8 *)(*plVar7 + 0x1b0);
  uVar9 = 0;
code_r0x029cabc8:
  iVar6 = (*pcVar19)(plVar7,lVar11,lVar21,uVar9,uVar8);
  goto code_r0x029cabcc;
code_r0x029cac8c:
  iVar6 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar11,lVar21,0);
  goto code_r0x029cabcc;
code_r0x029cabd8:
  if (*(int *)(lVar11 + 0x10) != *(int *)(lVar21 + 0x10)) {
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
    lVar11 = auVar27._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((lVar11 != 0) && (auVar27._8_8_ != 0)) {
      plVar7 = (long *)(lVar11 + 0x14);
      iVar6 = *(int *)(lVar11 + 0x10);
      plVar24 = (long *)(auVar27._8_8_ + 0x14);
      uVar13 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
      if ((uVar13 & 1) == 0) {
        iVar25 = iVar6;
        if (9 < iVar6) {
          do {
            if ((int)*plVar7 != (int)*plVar24) {
              return 0;
            }
            if (*(int *)((long)plVar7 + 4) != *(int *)((long)plVar24 + 4)) {
              return 0;
            }
            if ((int)plVar7[1] != (int)plVar24[1]) {
              return 0;
            }
            if (*(int *)((long)plVar7 + 0xc) != *(int *)((long)plVar24 + 0xc)) {
              return 0;
            }
            if ((int)plVar7[2] != (int)plVar24[2]) {
              return 0;
            }
            plVar7 = (long *)((long)plVar7 + 0x14);
            plVar24 = (long *)((long)plVar24 + 0x14);
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
            if (((*plVar7 != *plVar24) || (plVar7[1] != plVar24[1])) || (plVar7[2] != plVar24[2])) {
              return 0;
            }
            plVar7 = plVar7 + 3;
            plVar24 = plVar24 + 3;
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
          bVar4 = (int)*plVar7 == (int)*plVar24;
          uVar5 = (uint)bVar4;
          if (!bVar4) {
            return uVar5;
          }
          plVar7 = (long *)((long)plVar7 + 4);
          plVar24 = (long *)((long)plVar24 + 4);
          iVar6 = iVar6 + -2;
        } while (2 < iVar6);
      }
      return uVar5;
    }
    auVar26 = func_0x00f78af4();
    lVar21 = auVar26._8_8_;
    lVar11 = auVar26._0_8_;
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
    if ((lVar11 != 0) && (lVar21 != 0)) {
      uVar1 = *(undefined4 *)(lVar11 + 0x10);
      uVar2 = *(undefined4 *)(lVar21 + 0x10);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
      puVar14 = (uint *)(lVar11 + 0x14);
      puVar18 = (uint *)(lVar21 + 0x14);
      if (iVar6 < 10) goto code_r0x029ca8c8;
      lVar22 = 4;
      iVar25 = iVar6;
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
  uVar8 = func_0x00f78a24(0x3d5dad8);
  func_0x00f78ac0(unaff_x19,uVar8);
code_r0x029caa44:
  unaff_x30 = &System_String__Equals;
  auVar27 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  goto code_r0x029caa48;
  while( true ) {
    if (puVar14[1] != puVar18[1]) goto code_r0x029ca930;
    if (puVar14[2] != puVar18[2]) {
      lVar22 = 8;
      goto code_r0x029ca930;
    }
    if (puVar14[3] != puVar18[3]) {
      lVar22 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar14[4] != puVar18[4]) {
      lVar22 = 0x10;
      goto code_r0x029ca930;
    }
    puVar14 = puVar14 + 5;
    puVar18 = puVar18 + 5;
    iVar6 = iVar25 + -10;
    bVar4 = iVar25 < 0x14;
    iVar25 = iVar6;
    if (bVar4) break;
code_r0x029ca858:
    if (*puVar14 != *puVar18) {
      lVar22 = 0;
code_r0x029ca930:
      puVar14 = (uint *)(lVar22 + (long)puVar14);
      puVar18 = (uint *)(lVar22 + (long)puVar18);
      uVar5 = (uint)(ushort)*puVar14 - (uint)(ushort)*puVar18;
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
      if (*puVar14 != *puVar18) {
        uVar5 = (*puVar14 & 0xffff) - (*puVar18 & 0xffff);
        if (uVar5 != 0) {
          return uVar5;
        }
code_r0x029ca948:
        uVar5 = (uint)*(ushort *)((long)puVar14 + 2);
        uVar17 = (uint)*(ushort *)((long)puVar18 + 2);
        goto code_r0x029ca950;
      }
      puVar14 = puVar14 + 1;
      puVar18 = puVar18 + 1;
      iVar6 = iVar6 + -2;
    } while (2 < iVar6);
  }
  uVar5 = *(uint *)(lVar11 + 0x10);
  uVar17 = *(uint *)(lVar21 + 0x10);
code_r0x029ca950:
  return uVar5 - uVar17;
  while( true ) {
    lVar22 = lVar22 + -2;
    puVar16 = puVar20 + 1;
    puVar23 = puVar20;
    if (lVar22 == 0) break;
code_r0x029cac24:
    puVar20 = puVar16;
    if (0x7f < *puVar23) goto code_r0x029cac8c;
  }
  if (iVar6 != 0) {
    puVar16 = (ushort *)(lVar21 + 0x16);
    puVar23 = (ushort *)(lVar21 + 0x14);
    do {
      puVar20 = puVar16;
      if (0x7f < *puVar23) goto code_r0x029cac8c;
      lVar15 = lVar15 + -2;
      puVar16 = puVar20 + 1;
      puVar23 = puVar20;
    } while (lVar15 != 0);
  }
code_r0x029cac68:
  iVar6 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar11,lVar21);
code_r0x029cabcc:
  return (uint)(iVar6 == 0);
}



// ============================================================
// RVA: 0x1505780 | Atlas.StringID.op_Inequality
// ============================================================

uint Atlas_StringID__op_Inequality(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  if ((bRam0000000003eb4d0e & 1) == 0) {
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb4d0e = 1;
  }
  if (((*(ushort *)(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = Atlas_StringID__op_Equality(param_1,param_2);
  return uVar1 ^ 1;
}



// ============================================================
// RVA: 0x15057f8 | Atlas.StringID.Equals
// ============================================================

/* WARNING: Removing unreachable block (ram,0x029cad64) */
/* WARNING: Removing unreachable block (ram,0x029cad74) */
/* WARNING: Removing unreachable block (ram,0x029cad80) */
/* WARNING: Type propagation algorithm not settling */

ulong Atlas_StringID__Equals(long *param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint *puVar16;
  long lVar17;
  ushort *puVar18;
  uint uVar19;
  uint *puVar20;
  code *pcVar21;
  ushort *puVar22;
  long lVar23;
  long lVar24;
  ushort *puVar25;
  long *unaff_x19;
  undefined8 uVar26;
  long *unaff_x20;
  long *plVar27;
  int iVar28;
  undefined8 unaff_x21;
  undefined8 uVar29;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  if ((bRam0000000003eb4d0f & 1) == 0) {
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb4d0f = 1;
  }
  if ((param_2 == (long *)0x0) || (*param_2 != /*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08)) {
    return 0;
  }
  plVar7 = (long *)func_0x00f78ae4(param_2);
  lVar8 = *param_1;
  auVar31._8_8_ = *plVar7;
  auVar31._0_8_ = lVar8;
  if (*plVar7 == 0) {
    return (ulong)(lVar8 == 0);
  }
  if (lVar8 == 0) {
    plVar7 = (long *)func_0x00f78af4();
    if (*plVar7 == 0) {
      return 0;
    }
    plVar7 = (long *)/*System.String$$ToLower*/ func_0x029cec0c(*plVar7,0);
    if (plVar7 == (long *)0x0) {
      puVar9 = (ulong *)func_0x00f78af4();
      return *puVar9;
    }
                    /* WARNING: Could not recover jumptable at 0x015058d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (**(code **)(*plVar7 + 0x158))(plVar7,*(undefined8 *)(*plVar7 + 0x160));
    return uVar13;
  }
  uVar13 = 5;
  puVar4 = (undefined1 *)register0x00000008;
code_r0x029caa48:
  lVar23 = auVar31._8_8_;
  lVar8 = auVar31._0_8_;
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
  *(long **)(puVar4 + -0x20) = unaff_x20;
  *(long **)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
  *(undefined **)(puVar4 + -8) = unaff_x30;
  uVar14 = uVar13;
  if ((bRam0000000003eb9443 & 1) == 0) {
    func_0x00f78a20(0x3d20b50);
    bRam0000000003eb9443 = 1;
  }
  if (5 < (uint)uVar13) {
code_r0x029caca0:
    uVar10 = func_0x00f78a24(0x3d746f0);
    uVar10 = /*System.Environment$$GetResourceString*/ func_0x02ac4474(uVar10,0);
    func_0x00f78a24(0x3d1fce8);
    uVar11 = func_0x00f78aec();
    uVar12 = func_0x00f78a24(0x3d784e0);
    /*System.ArgumentException$$.ctor*/ func_0x02920824(uVar11,uVar10,uVar12,0);
    uVar10 = func_0x00f78a24(0x3d5dae8);
    func_0x00f78ac0(uVar11,uVar10);
    goto code_r0x029cad04;
  }
  if (lVar8 == lVar23) {
    return 1;
  }
  if (lVar23 == 0) {
    return 0;
  }
  switch(uVar13 & 0xffffffff) {
  case 0:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar7 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    break;
  case 1:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar7 = (long *)/*System.Globalization.CultureInfo$$get_CurrentCulture*/ func_0x02a7f288(0);
    goto joined_r0x029caba0;
  case 2:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar7 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
    break;
  case 3:
    if (((*(ushort *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Globalization.CultureInfo_TypeInfo*/ lRam0000000003d20b50 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar7 = (long *)/*System.Globalization.CultureInfo$$get_InvariantCulture*/ func_0x02a788f8(0);
joined_r0x029caba0:
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200)),
       plVar7 == (long *)0x0)) goto code_r0x029cad04;
    pcVar21 = *(code **)(*plVar7 + 0x1a8);
    uVar10 = *(undefined8 *)(*plVar7 + 0x1b0);
    uVar11 = 1;
    goto code_r0x029cabc8;
  case 4:
    goto code_r0x029cabd8;
  case 5:
    iVar6 = *(int *)(lVar8 + 0x10);
    if (iVar6 != *(int *)(lVar23 + 0x10)) {
      return 0;
    }
    if (iVar6 == 0) goto code_r0x029cac68;
    lVar17 = (long)iVar6 << 1;
    puVar18 = (ushort *)(lVar8 + 0x16);
    puVar25 = (ushort *)(lVar8 + 0x14);
    lVar24 = lVar17;
    goto code_r0x029cac24;
  default:
    goto code_r0x029caca0;
  }
  if ((plVar7 == (long *)0x0) ||
     (plVar7 = (long *)(**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200)),
     plVar7 == (long *)0x0)) {
code_r0x029cad04:
    lVar8 = func_0x00f78af4();
    if (*(int *)(lVar8 + 0x10) == 0) {
      return 1;
    }
    lVar23 = (long)*(int *)(lVar8 + 0x10) * 2;
    puVar18 = (ushort *)(lVar8 + 0x14);
    puVar25 = (ushort *)(lVar8 + 0x16);
    do {
      lVar23 = lVar23 + -2;
      uVar3 = *puVar18;
      puVar18 = puVar25;
      puVar25 = puVar25 + 1;
    } while (uVar3 < 0x80 && lVar23 != 0);
    return (ulong)(uVar3 < 0x80);
  }
  pcVar21 = *(code **)(*plVar7 + 0x1a8);
  uVar10 = *(undefined8 *)(*plVar7 + 0x1b0);
  uVar11 = 0;
code_r0x029cabc8:
  iVar6 = (*pcVar21)(plVar7,lVar8,lVar23,uVar11,uVar10);
  goto code_r0x029cabcc;
code_r0x029cac8c:
  iVar6 = /*System.Globalization.TextInfo$$CompareOrdinalIgnoreCase*/ func_0x029e9154(lVar8,lVar23,0);
  goto code_r0x029cabcc;
code_r0x029cabd8:
  if (*(int *)(lVar8 + 0x10) != *(int *)(lVar23 + 0x10)) {
    return 0;
  }
  uVar10 = *(undefined8 *)(puVar4 + -0x10);
  uVar12 = *(undefined8 *)(puVar4 + -8);
  uVar11 = *(undefined8 *)(puVar4 + -0x20);
  uVar26 = *(undefined8 *)(puVar4 + -0x18);
  unaff_x22 = *(undefined8 *)(puVar4 + -0x30);
  uVar29 = *(undefined8 *)(puVar4 + -0x28);
  while( true ) {
    lVar8 = auVar31._0_8_;
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x28) = uVar29;
    *(undefined8 *)(puVar4 + -0x20) = uVar11;
    *(undefined8 *)(puVar4 + -0x18) = uVar26;
    *(undefined8 *)(puVar4 + -0x10) = uVar10;
    *(undefined8 *)(puVar4 + -8) = uVar12;
    if ((lVar8 != 0) && (auVar31._8_8_ != 0)) {
      plVar7 = (long *)(lVar8 + 0x14);
      iVar6 = *(int *)(lVar8 + 0x10);
      plVar27 = (long *)(auVar31._8_8_ + 0x14);
      uVar13 = /*System.Environment$$get_Is64BitProcess*/ func_0x02acb354(0);
      if ((uVar13 & 1) == 0) {
        iVar28 = iVar6;
        if (9 < iVar6) {
          do {
            if (((((int)*plVar7 != (int)*plVar27) ||
                 (*(int *)((long)plVar7 + 4) != *(int *)((long)plVar27 + 4))) ||
                ((int)plVar7[1] != (int)plVar27[1])) ||
               ((*(int *)((long)plVar7 + 0xc) != *(int *)((long)plVar27 + 0xc) ||
                ((int)plVar7[2] != (int)plVar27[2])))) {
              return 0;
            }
            plVar7 = (long *)((long)plVar7 + 0x14);
            plVar27 = (long *)((long)plVar27 + 0x14);
            iVar6 = iVar28 + -10;
            bVar5 = 0x13 < iVar28;
            iVar28 = iVar6;
          } while (bVar5);
        }
      }
      else {
        iVar28 = iVar6;
        if (0xb < iVar6) {
          do {
            if (*plVar7 != *plVar27) {
              return 0;
            }
            if (plVar7[1] != plVar27[1]) {
              return 0;
            }
            if (plVar7[2] != plVar27[2]) {
              return 0;
            }
            plVar7 = plVar7 + 3;
            plVar27 = plVar27 + 3;
            iVar6 = iVar28 + -0xc;
            bVar5 = 0x17 < iVar28;
            iVar28 = iVar6;
          } while (bVar5);
        }
      }
      if (iVar6 < 1) {
        uVar13 = 1;
      }
      else {
        iVar6 = iVar6 + 2;
        do {
          bVar5 = (int)*plVar7 == (int)*plVar27;
          uVar13 = (ulong)bVar5;
          if (!bVar5) {
            return uVar13;
          }
          plVar7 = (long *)((long)plVar7 + 4);
          plVar27 = (long *)((long)plVar27 + 4);
          iVar6 = iVar6 + -2;
        } while (2 < iVar6);
      }
      return uVar13;
    }
    auVar30 = func_0x00f78af4();
    lVar23 = auVar30._8_8_;
    lVar8 = auVar30._0_8_;
    *(undefined8 *)(puVar4 + -0x60) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x58) = uVar29;
    *(undefined8 *)(puVar4 + -0x50) = uVar11;
    *(undefined8 *)(puVar4 + -0x48) = uVar26;
    *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x38) = &System_String__CompareOrdinalHelper;
    uVar13 = uVar14;
    if ((bRam0000000003eb9441 & 1) == 0) {
      func_0x00f78a20(0x3d232c0);
      bRam0000000003eb9441 = 1;
      uVar13 = uVar14;
    }
    if ((lVar8 != 0) && (lVar23 != 0)) {
      uVar1 = *(undefined4 *)(lVar8 + 0x10);
      uVar2 = *(undefined4 *)(lVar23 + 0x10);
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*System.Math$$Min*/ func_0x02b020f4(uVar1,uVar2,0);
      puVar16 = (uint *)(lVar8 + 0x14);
      puVar20 = (uint *)(lVar23 + 0x14);
      if (iVar6 < 10) goto code_r0x029ca8c8;
      lVar24 = 4;
      iVar28 = iVar6;
      goto code_r0x029ca858;
    }
    auVar31 = func_0x00f78af4();
    unaff_x20 = auVar31._8_8_;
    unaff_x19 = auVar31._0_8_;
    *(undefined8 *)(puVar4 + -0x90) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x88) = 0x3eb9000;
    *(undefined1 (*) [16])(puVar4 + -0x80) = auVar30;
    *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
    *(undefined **)(puVar4 + -0x68) = &System_String__Equals;
    unaff_x29 = puVar4 + -0x70;
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
    uVar10 = *(undefined8 *)(puVar4 + -0x70);
    uVar12 = *(undefined8 *)(puVar4 + -0x68);
    uVar11 = *(undefined8 *)(puVar4 + -0x80);
    uVar26 = *(undefined8 *)(puVar4 + -0x78);
    unaff_x22 = *(undefined8 *)(puVar4 + -0x90);
    uVar29 = *(undefined8 *)(puVar4 + -0x88);
    puVar4 = puVar4 + -0x60;
    uVar14 = uVar13;
  }
  func_0x00f78a24(0x3d23938);
  unaff_x19 = (long *)func_0x00f78aec();
  /*System.NullReferenceException$$.ctor*/ func_0x02950520(unaff_x19,0);
  uVar10 = func_0x00f78a24(0x3d5dad8);
  func_0x00f78ac0(unaff_x19,uVar10);
code_r0x029caa44:
  unaff_x30 = &System_String__Equals;
  auVar31 = func_0x00f78af4();
  puVar4 = puVar4 + -0x90;
  goto code_r0x029caa48;
  while( true ) {
    if (puVar16[1] != puVar20[1]) goto code_r0x029ca930;
    if (puVar16[2] != puVar20[2]) {
      lVar24 = 8;
      goto code_r0x029ca930;
    }
    if (puVar16[3] != puVar20[3]) {
      lVar24 = 0xc;
      goto code_r0x029ca930;
    }
    if (puVar16[4] != puVar20[4]) {
      lVar24 = 0x10;
      goto code_r0x029ca930;
    }
    puVar16 = puVar16 + 5;
    puVar20 = puVar20 + 5;
    iVar6 = iVar28 + -10;
    bVar5 = iVar28 < 0x14;
    iVar28 = iVar6;
    if (bVar5) break;
code_r0x029ca858:
    if (*puVar16 != *puVar20) {
      lVar24 = 0;
code_r0x029ca930:
      puVar16 = (uint *)(lVar24 + (long)puVar16);
      puVar20 = (uint *)(lVar24 + (long)puVar20);
      uVar15 = (uint)(ushort)*puVar16 - (uint)(ushort)*puVar20;
      goto joined_r0x029ca944;
    }
  }
code_r0x029ca8c8:
  if (iVar6 < 1) {
code_r0x029ca8f8:
    uVar15 = *(uint *)(lVar8 + 0x10);
    uVar19 = *(uint *)(lVar23 + 0x10);
code_r0x029ca950:
    uVar15 = uVar15 - uVar19;
code_r0x029ca954:
    return (ulong)uVar15;
  }
  iVar6 = iVar6 + 2;
code_r0x029ca8d4:
  if (*puVar16 == *puVar20) goto code_r0x029ca8e4;
  uVar15 = (*puVar16 & 0xffff) - (*puVar20 & 0xffff);
joined_r0x029ca944:
  if (uVar15 != 0) goto code_r0x029ca954;
  uVar15 = (uint)*(ushort *)((long)puVar16 + 2);
  uVar19 = (uint)*(ushort *)((long)puVar20 + 2);
  goto code_r0x029ca950;
code_r0x029ca8e4:
  puVar16 = puVar16 + 1;
  puVar20 = puVar20 + 1;
  iVar6 = iVar6 + -2;
  if (iVar6 < 3) goto code_r0x029ca8f8;
  goto code_r0x029ca8d4;
  while( true ) {
    lVar24 = lVar24 + -2;
    puVar18 = puVar22 + 1;
    puVar25 = puVar22;
    if (lVar24 == 0) break;
code_r0x029cac24:
    puVar22 = puVar18;
    if (0x7f < *puVar25) goto code_r0x029cac8c;
  }
  if (iVar6 != 0) {
    puVar18 = (ushort *)(lVar23 + 0x16);
    puVar25 = (ushort *)(lVar23 + 0x14);
    do {
      puVar22 = puVar18;
      if (0x7f < *puVar25) goto code_r0x029cac8c;
      lVar17 = lVar17 + -2;
      puVar18 = puVar22 + 1;
      puVar25 = puVar22;
    } while (lVar17 != 0);
  }
code_r0x029cac68:
  iVar6 = /*System.String$$CompareOrdinalIgnoreCaseHelper*/ func_0x029ca590(lVar8,lVar23);
code_r0x029cabcc:
  return (ulong)(iVar6 == 0);
}



// ============================================================
// RVA: 0x15058a8 | Atlas.StringID.GetHashCode
// ============================================================

undefined8 Atlas_StringID__GetHashCode(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*param_1 == 0) {
    return 0;
  }
  plVar1 = (long *)/*System.String$$ToLower*/ func_0x029cec0c(*param_1,0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015058d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x158))(plVar1,*(undefined8 *)(*plVar1 + 0x160));
    return uVar2;
  }
  puVar3 = (undefined8 *)func_0x00f78af4();
  return *puVar3;
}



// ============================================================
// RVA: 0x15058e0 | Atlas.StringID.ToString
// ============================================================

undefined8 Atlas_StringID__ToString(undefined8 *param_1)

{
  return *param_1;
}



// ============================================================
// RVA: 0x15058e8 | Atlas.StringID..cctor
// ============================================================

void Atlas_StringID___cctor(void)

{
  if ((bRam0000000003eb4d10 & 1) == 0) {
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb4d10 = 1;
  }
  **(undefined8 **)(/*Atlas.StringID_TypeInfo*/ lRam0000000003d24e08 + 0xb8) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
  return;
}



