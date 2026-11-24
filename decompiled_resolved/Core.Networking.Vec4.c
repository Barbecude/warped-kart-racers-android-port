// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.Vec4

// ============================================================
// RVA: 0x1657cd8 | Core.Networking.Vec4.__assign
// ============================================================

undefined1  [16]
Core_Networking_Vec4____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x165aa84 | Core.Networking.Vec4.get_X
// ============================================================

/* WARNING: Possible PIC construction at 0x016cce70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0293870c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016cceec) */
/* WARNING: Removing unreachable block (ram,0x016ccef4) */
/* WARNING: Removing unreachable block (ram,0x016ccefc) */
/* WARNING: Removing unreachable block (ram,0x016cce74) */
/* WARNING: Removing unreachable block (ram,0x016cce7c) */
/* WARNING: Removing unreachable block (ram,0x016cce84) */
/* WARNING: Removing unreachable block (ram,0x02938710) */
/* WARNING: Removing unreachable block (ram,0x0293875c) */
/* WARNING: Removing unreachable block (ram,0x02938764) */
/* WARNING: Removing unreachable block (ram,0x02938778) */
/* WARNING: Removing unreachable block (ram,0x02938714) */
/* WARNING: Removing unreachable block (ram,0x0293871c) */
/* WARNING: Removing unreachable block (ram,0x02938730) */
/* WARNING: Removing unreachable block (ram,0x02938784) */

undefined8 * Core_Networking_Vec4__get_X(int *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar4;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  undefined8 uVar23;
  int iVar24;
  undefined8 unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **unaff_x29;
  undefined1 *puVar25;
  undefined *unaff_x30;
  undefined *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  undefined1 *puVar3;
  undefined1 **ppuVar5;
  
  puVar2 = &stack0xfffffffffffffff0;
  puVar3 = &stack0xfffffffffffffff0;
  lVar10 = *(long *)(param_1 + 2);
  if (lVar10 == 0) {
    piVar11 = (int *)func_0x00f78af4();
    ppuVar4 = &puStack_20;
    ppuVar5 = &puStack_20;
    puStack_18 = &Core_Networking_Vec4__get_Y;
    lVar10 = *(long *)(piVar11 + 2);
    if (lVar10 == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      piVar11 = (int *)func_0x00f78af4();
      unaff_x29 = &puStack_30;
      puStack_28 = &Core_Networking_Vec4__get_Z;
      lVar10 = *(long *)(piVar11 + 2);
      if (lVar10 == 0) {
        puStack_30 = (undefined1 *)&puStack_20;
        piVar11 = (int *)func_0x00f78af4();
        lVar10 = *(long *)(piVar11 + 2);
        if (lVar10 == 0) {
          auVar28 = func_0x00f78af4();
          puVar19 = auVar28._8_8_;
          puVar15 = auVar28._0_8_;
          uVar23 = *puVar19;
          uVar17 = puVar19[3];
          uVar16 = puVar19[2];
          puVar15[1] = puVar19[1];
          *puVar15 = uVar23;
          puVar15[3] = uVar17;
          puVar15[2] = uVar16;
          return puVar15;
        }
        iVar22 = *piVar11 + 0xc;
        register0x00000008 = (BADSPACEBASE *)&puStack_30;
        unaff_x30 = &Core_Networking_Vec4__get_W;
      }
      else {
        iVar22 = *piVar11 + 8;
        register0x00000008 = (BADSPACEBASE *)&puStack_20;
        unaff_x30 = &Core_Networking_Vec4__get_Z;
        unaff_x29 = ppuVar5;
        puStack_30 = (undefined1 *)ppuVar4;
      }
    }
    else {
      iVar22 = *piVar11 + 4;
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x30 = &Core_Networking_Vec4__get_Y;
      unaff_x29 = (undefined1 **)puVar3;
      puStack_20 = puVar2;
    }
  }
  else {
    iVar22 = *param_1;
  }
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar25 = (undefined1 *)((long)register0x00000008 + -0x10);
  uVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar10,iVar22,4);
  uVar12 = *(ulong *)(lVar10 + 0x30);
  if (uVar12 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar12 + 0x18) != 0) {
    *(undefined4 *)(uVar12 + 0x20) = uVar7;
    uVar20 = *(ulong *)(lVar10 + 0x28);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar12;
    uVar23 = 0;
    puVar26 = &UNK_016cce74;
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x20);
    uVar12 = 4;
    lVar13 = lVar10;
    goto code_r0x029387b8;
  }
  uVar23 = func_0x00f78b24();
  lVar13 = func_0x00f78ac0(uVar23,0);
  *(long **)((long)register0x00000008 + -0x40) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x38) = lVar10;
  *(undefined1 **)((long)register0x00000008 + -0x30) = puVar25;
  *(undefined **)((long)register0x00000008 + -0x28) = &FlatBuffers_ByteBuffer__GetDouble;
  puVar25 = (undefined1 *)((long)register0x00000008 + -0x30);
  uVar21 = 8;
  uVar23 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634();
  uVar12 = *(ulong *)(lVar13 + 0x40);
  if (uVar12 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar12 + 0x18) != 0) {
    *(undefined8 *)(uVar12 + 0x20) = uVar23;
    uVar20 = *(ulong *)(lVar13 + 0x38);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar12;
    uVar23 = 0;
    puVar26 = &UNK_016cceec;
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x40);
    uVar12 = 8;
    goto code_r0x029387b8;
  }
  uVar23 = func_0x00f78b24();
  auVar27 = func_0x00f78ac0(uVar23,0);
  lVar10 = auVar27._0_8_;
  *(ulong *)((long)register0x00000008 + -0x70) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x60) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x58) = lVar13;
  *(undefined1 **)((long)register0x00000008 + -0x50) = puVar25;
  *(undefined **)((long)register0x00000008 + -0x48) = &FlatBuffers_ByteBuffer__PutByteArray;
  uVar23 = 0x3eb5000;
  if ((bRam0000000003eb5cd1 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd1 = 1;
  }
  if (uVar21 == 0) {
code_r0x016ccfdc:
    func_0x00f78af4();
code_r0x016ccfe0:
    func_0x00f78a24(0x3d1fce8);
    uVar17 = func_0x00f78aec();
    uVar16 = 0x3d6a458;
code_r0x016cd01c:
    uVar16 = func_0x00f78a24(uVar16);
    uVar18 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar17,uVar16);
  }
  else {
    if (*(long *)(uVar21 + 0x18) == 0) goto code_r0x016ccfe0;
    if ((int)*(long *)(uVar21 + 0x18) < auVar27._8_4_) {
      func_0x00f78a24(0x3d1fce8);
      uVar17 = func_0x00f78aec();
      uVar16 = 0x3d72a70;
      goto code_r0x016cd01c;
    }
    uVar23 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) != '\0') {
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar10,0,auVar27._8_8_);
      if (*(long *)(lVar10 + 0x10) != 0) {
        uVar20 = *(ulong *)(*(long *)(lVar10 + 0x10) + 0x10);
        auVar28._8_8_ = 0;
        auVar28._0_8_ = uVar21;
        uVar23 = 0;
        puVar25 = *(undefined1 **)((long)register0x00000008 + -0x50);
        puVar26 = *(undefined **)((long)register0x00000008 + -0x48);
        unaff_x20 = *(long **)((long)register0x00000008 + -0x60);
        lVar13 = *(long *)((long)register0x00000008 + -0x58);
        unaff_x22 = *(ulong *)((long)register0x00000008 + -0x70);
        unaff_x21 = *(ulong *)((long)register0x00000008 + -0x68);
        puVar6 = (undefined1 *)((long)register0x00000008 + -0x40);
        uVar12 = auVar27._8_8_;
        goto code_r0x029387b8;
      }
      goto code_r0x016ccfdc;
    }
    func_0x00f78a24(0x3d238c8);
    uVar17 = func_0x00f78aec();
    uVar16 = func_0x00f78a24(0x3d69698);
    uVar18 = 0;
    /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar17,uVar16);
  }
  uVar16 = func_0x00f78a24(0x3d52cf8);
  auVar28 = func_0x00f78ac0(uVar17,uVar16);
  uVar14 = auVar28._8_8_;
  lVar13 = auVar28._0_8_;
  puVar6 = (undefined1 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar23;
  *(long *)((long)register0x00000008 + -0x98) = lVar10;
  *(ulong *)((long)register0x00000008 + -0x90) = uVar21;
  *(undefined8 *)((long)register0x00000008 + -0x88) = uVar17;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined **)((long)register0x00000008 + -0x78) = &FlatBuffers_ByteBuffer__PutIntPtr;
  uVar23 = 0x3eb5000;
  if ((bRam0000000003eb5cd2 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    func_0x00f78a20(0x3d23210);
    bRam0000000003eb5cd2 = 1;
  }
  if (auVar28._8_4_ == 0) {
    func_0x00f78a24(0x3d1fce8);
    uVar14 = func_0x00f78aec();
    uVar16 = func_0x00f78a24(0x3d6a458);
    uVar12 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar14,uVar16);
code_r0x016cd1bc:
    uVar16 = func_0x00f78a24(0x3d52d00);
    func_0x00f78ac0(uVar14,uVar16);
  }
  else {
    uVar23 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
      func_0x00f78a24(0x3d238c8);
      uVar14 = func_0x00f78aec();
      uVar16 = func_0x00f78a24(0x3d69698);
      uVar12 = 0;
      /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar14,uVar16);
      goto code_r0x016cd1bc;
    }
    uVar12 = uVar14;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar13,0);
    if (*(long *)(lVar13 + 0x10) != 0) {
      puVar15 = *(undefined8 **)(*(long *)(lVar13 + 0x10) + 0x10);
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0xa8) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0xa0) =
           *(undefined8 *)((long)register0x00000008 + -0xa0);
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0x98);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      if ((bRam0000000003eb9f54 & 1) == 0) {
        func_0x00f78a20(0x3d23210);
        bRam0000000003eb9f54 = 1;
      }
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xa0) =
           *(undefined8 *)((long)register0x00000008 + -0xa0);
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0x98);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      uVar23 = func_0x00f76cf0(*puVar15);
      uVar16 = func_0x00faf4d8(puVar15,uVar23,0);
                    /* WARNING: Could not recover jumptable at 0x033034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar15 = (undefined8 *)(*(code *)PTR_DAT_03c8cea0)(uVar16,uVar18,(int)uVar23 * auVar28._8_4_)
      ;
      return puVar15;
    }
  }
  auVar28 = func_0x00f78af4();
  uVar20 = auVar28._8_8_;
  lVar10 = auVar28._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar23;
  *(long *)((long)register0x00000008 + -200) = lVar13;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar18;
  *(ulong *)((long)register0x00000008 + -0xb8) = uVar14;
  *(undefined1 **)((long)register0x00000008 + -0xb0) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0xa8) = &FlatBuffers_ByteBuffer__CopyByteArray;
  uVar23 = 0x3eb5000;
  if ((bRam0000000003eb5cd3 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd3 = 1;
  }
  if (uVar20 == 0) {
code_r0x016cd29c:
    func_0x00f78af4();
  }
  else if ((int)uVar12 <= *(int *)(uVar20 + 0x18)) {
    uVar23 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') goto code_r0x016cd33c;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar10,0,uVar12);
    if (*(long *)(lVar10 + 0x10) != 0) {
      auVar28._8_4_ = *(undefined4 *)(lVar10 + 0x18);
      auVar28._0_8_ = *(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x10);
      auVar28._12_4_ = 0;
      uVar23 = 0;
      puVar25 = *(undefined1 **)((long)register0x00000008 + -0xb0);
      puVar26 = *(undefined **)((long)register0x00000008 + -0xa8);
      unaff_x20 = *(long **)((long)register0x00000008 + -0xc0);
      lVar13 = *(long *)((long)register0x00000008 + -0xb8);
      unaff_x22 = *(ulong *)((long)register0x00000008 + -0xd0);
      unaff_x21 = *(ulong *)((long)register0x00000008 + -200);
code_r0x029387b8:
      do {
        uVar21 = auVar28._8_8_;
        lVar10 = auVar28._0_8_;
        *(ulong *)(puVar6 + -0x40) = unaff_x24;
        *(ulong *)(puVar6 + -0x38) = unaff_x23;
        *(ulong *)(puVar6 + -0x30) = unaff_x22;
        *(ulong *)(puVar6 + -0x28) = unaff_x21;
        *(long **)(puVar6 + -0x20) = unaff_x20;
        *(long *)(puVar6 + -0x18) = lVar13;
        *(undefined1 **)(puVar6 + -0x10) = puVar25;
        *(undefined **)(puVar6 + -8) = puVar26;
        if (lVar10 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar16 = func_0x00f78aec();
          uVar23 = 0x3d7b990;
code_r0x02938884:
          uVar23 = func_0x00f78a24(uVar23);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar16,uVar23,0);
          uVar23 = func_0x00f78a24(0x3d52be0);
          func_0x00f78ac0(uVar16,uVar23);
code_r0x029388b0:
          uVar23 = func_0x00f78a24(0x3d70548);
          uVar16 = /*Locale$$GetText*/ func_0x02af42b4(uVar23,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar17 = func_0x00f78aec();
          uVar23 = 0x3d7b998;
code_r0x02938954:
          auVar28._8_8_ = unaff_x22;
          auVar28._0_8_ = unaff_x23;
          uVar18 = func_0x00f78a24(uVar23);
          uVar23 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar17,uVar18,uVar16);
        }
        else {
          unaff_x21 = uVar20;
          if (uVar20 == 0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar16 = func_0x00f78aec();
            uVar23 = 0x3d78c30;
            goto code_r0x02938884;
          }
          unaff_x22 = uVar21;
          if (auVar28._8_4_ < 0) goto code_r0x029388b0;
          iVar22 = (int)uVar23;
          if (iVar22 < 0) {
            uVar23 = func_0x00f78a24(0x3d70548);
            uVar16 = /*Locale$$GetText*/ func_0x02af42b4(uVar23,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar17 = func_0x00f78aec();
            uVar23 = 0x3d78c38;
            goto code_r0x02938954;
          }
          iVar24 = (int)uVar12;
          if (iVar24 < 0) {
            uVar23 = func_0x00f78a24(0x3d70548);
            uVar16 = /*Locale$$GetText*/ func_0x02af42b4(uVar23,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar17 = func_0x00f78aec();
            uVar23 = 0x3d78638;
            goto code_r0x02938954;
          }
          puVar15 = (undefined8 *)func_0x00f836d8(lVar10,uVar21,uVar20);
          if (((ulong)puVar15 & 1) != 0) {
            return puVar15;
          }
          iVar8 = /*System.Buffer$$ByteLength*/ func_0x0294274c(lVar10);
          if ((auVar28._8_4_ <= iVar8 - iVar24) &&
             (puVar15 = (undefined8 *)/*System.Buffer$$ByteLength*/ func_0x0294274c(uVar20), iVar22 <= (int)puVar15 - iVar24)) {
            return puVar15;
          }
          uVar16 = func_0x00f78a24(0x3d70ad8);
          uVar16 = /*Locale$$GetText*/ func_0x02af42b4(uVar16,0);
          func_0x00f78a24(0x3d1fce8);
          uVar17 = func_0x00f78aec();
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar17,uVar16,0);
        }
        uVar18 = func_0x00f78a24(0x3d52be0);
        uVar9 = func_0x00f78ac0(uVar17,uVar18);
        *(long *)(puVar6 + -0x70) = auVar28._8_8_;
        *(ulong *)(puVar6 + -0x68) = unaff_x21;
        *(undefined8 *)(puVar6 + -0x60) = uVar17;
        *(undefined8 *)(puVar6 + -0x58) = uVar16;
        *(undefined1 **)(puVar6 + -0x50) = puVar6 + -0x10;
        *(undefined **)(puVar6 + -0x48) = &Mono_Math_BigInteger__GenerateRandom;
        if ((bRam0000000003eb8f4c & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          bRam0000000003eb8f4c = 1;
        }
        if (((*(ushort *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x20 = (long *)/*Mono.Math.BigInteger$$get_Rng*/ func_0x02938598();
        *(ulong *)(puVar6 + -0x80) = unaff_x24;
        *(long *)(puVar6 + -0x78) = auVar28._0_8_;
        *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
        *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
        *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x60);
        *(undefined8 *)(puVar6 + -0x58) = *(undefined8 *)(puVar6 + -0x58);
        *(undefined8 *)(puVar6 + -0x50) = *(undefined8 *)(puVar6 + -0x50);
        *(undefined8 *)(puVar6 + -0x48) = *(undefined8 *)(puVar6 + -0x48);
        puVar25 = puVar6 + -0x50;
        if ((bRam0000000003eb8f4b & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          func_0x00f78a20(0x3d1eda0);
          bRam0000000003eb8f4b = 1;
        }
        uVar1 = (int)uVar9 >> 5;
        unaff_x23 = (ulong)(uVar9 & 0x1f);
        if ((uVar9 & 0x1f) != 0) {
          uVar1 = uVar1 + 1;
        }
        unaff_x24 = (ulong)uVar1;
        lVar13 = func_0x00f78aec(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078);
        uVar20 = (ulong)(uVar1 + 1);
        /*Mono.Math.BigInteger$$.ctor*/ func_0x029379ec();
        unaff_x21 = (ulong)(uVar1 << 2);
        unaff_x22 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,unaff_x21);
        uVar21 = 0x3d20078;
        if (unaff_x20 == (long *)0x0) {
code_r0x029387a8:
          unaff_x22 = uVar21;
          func_0x00f78af4();
          uVar16 = func_0x00f78b24();
          puVar26 = &System_Buffer__BlockCopy;
          auVar28 = func_0x00f78ac0(uVar16,0);
          puVar6 = puVar6 + -0x80;
          goto code_r0x029387b8;
        }
        uVar20 = *(ulong *)(*unaff_x20 + 0x1a0);
        (**(code **)(*unaff_x20 + 0x198))(unaff_x20,unaff_x22);
        uVar21 = unaff_x22;
        if (lVar13 == 0) goto code_r0x029387a8;
        uVar20 = *(ulong *)(lVar13 + 0x18);
        auVar28._8_8_ = 0;
        auVar28._0_8_ = unaff_x22;
        uVar23 = 0;
        puVar26 = &UNK_02938710;
        puVar6 = puVar6 + -0x80;
        uVar12 = unaff_x21;
      } while( true );
    }
    goto code_r0x016cd29c;
  }
  *(int *)((long)register0x00000008 + -0xd4) = (int)uVar12;
  uVar16 = func_0x00f78a24(0x3d22910);
  lVar10 = func_0x00f78ae0(uVar16,(undefined1 *)((long)register0x00000008 + -0xd4));
  func_0x00055e5c(uVar20);
  *(int *)((long)register0x00000008 + -0xd8) = (int)*(undefined8 *)(uVar20 + 0x18);
  uVar16 = func_0x00f78a24(0x3d22910);
  uVar16 = func_0x00f78ae0(uVar16,(undefined1 *)((long)register0x00000008 + -0xd8));
  uVar17 = func_0x00f78a24(0x3d72a68);
  uVar16 = /*System.String$$Format*/ func_0x029bcac4(uVar17,lVar10,uVar16,0);
  func_0x00f78a24(0x3d1fce8);
  uVar12 = func_0x00f78aec();
  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar12,uVar16,0);
  uVar16 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar12,uVar16);
code_r0x016cd33c:
  func_0x00f78a24(0x3d238c8);
  uVar16 = func_0x00f78aec();
  uVar17 = func_0x00f78a24(0x3d69698);
  /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar16,uVar17,0);
  uVar17 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar16,uVar17);
  *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x138) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x120) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x118) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x110) = uVar23;
  *(long *)((long)register0x00000008 + -0x108) = lVar10;
  *(ulong *)((long)register0x00000008 + -0x100) = uVar12;
  *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar16;
  *(undefined1 **)((long)register0x00000008 + -0xf0) =
       (undefined1 *)((long)register0x00000008 + -0xb0);
  *(undefined **)((long)register0x00000008 + -0xe8) = &FlatBuffers_ByteBuffer___cctor;
  if ((bRam0000000003eb5cd4 & 1) == 0) {
    func_0x00f78a20(0x3d19080);
    func_0x00f78a20(0x3d203b0);
    func_0x00f78a20(0x3d190e0);
    func_0x00f78a20(0x3d30168);
    func_0x00f78a20(0x3d30160);
    func_0x00f78a20(0x3d1c590);
    func_0x00f78a20(0x3d19388);
    func_0x00f78a20(0x3d198b0);
    func_0x00f78a20(0x3d198c0);
    func_0x00f78a20(0x3d198d0);
    func_0x00f78a20(0x3d19d88);
    func_0x00f78a20(0x3d19e28);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d1a0a8);
    func_0x00f78a20(0x3d1a0b8);
    func_0x00f78a20(0x3d1a0c8);
    bRam0000000003eb5cd4 = 1;
  }
  lVar10 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, int>_TypeInfo*/ uRam0000000003d1c590);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(lVar10,uRam0000000003d30160);
  uVar23 = /*bool_var*/ uRam0000000003d19080;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar23,0);
  if (lVar10 == 0) {
    lVar10 = func_0x00f78af4();
    return *(undefined8 **)(lVar10 + 0x10);
  }
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar10,uVar23,1,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*float_var*/ uRam0000000003d19e28,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar10,uVar23,4,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*double_var*/ uRam0000000003d19388,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar10,uVar23,8,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*sbyte_var*/ uRam0000000003d19d88,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar10,uVar23,1,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*byte_var*/ uRam0000000003d190e0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar10,uVar23,1,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*short_var*/ uRam0000000003d198b0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar10,uVar23,2,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ushort_var*/ uRam0000000003d1a0a8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar10,uVar23,2,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*int_var*/ uRam0000000003d198c0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar10,uVar23,4,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*uint_var*/ uRam0000000003d1a0b8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar10,uVar23,4,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ulong_var*/ uRam0000000003d1a0c8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar10,uVar23,8,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*long_var*/ uRam0000000003d198d0,0);
  puVar15 = (undefined8 *)/*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar10,uVar23,8,uRam0000000003d30168);
  **(long **)(/*FlatBuffers.ByteBuffer_TypeInfo*/ lRam0000000003d203b0 + 0xb8) = lVar10;
  return puVar15;
}



// ============================================================
// RVA: 0x165aaac | Core.Networking.Vec4.get_Y
// ============================================================

/* WARNING: Possible PIC construction at 0x016cce70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0293870c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016cceec) */
/* WARNING: Removing unreachable block (ram,0x016ccef4) */
/* WARNING: Removing unreachable block (ram,0x016ccefc) */
/* WARNING: Removing unreachable block (ram,0x016cce74) */
/* WARNING: Removing unreachable block (ram,0x016cce7c) */
/* WARNING: Removing unreachable block (ram,0x016cce84) */
/* WARNING: Removing unreachable block (ram,0x02938710) */
/* WARNING: Removing unreachable block (ram,0x0293875c) */
/* WARNING: Removing unreachable block (ram,0x02938764) */
/* WARNING: Removing unreachable block (ram,0x02938778) */
/* WARNING: Removing unreachable block (ram,0x02938714) */
/* WARNING: Removing unreachable block (ram,0x0293871c) */
/* WARNING: Removing unreachable block (ram,0x02938730) */
/* WARNING: Removing unreachable block (ram,0x02938784) */

undefined8 * Core_Networking_Vec4__get_Y(int *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  undefined8 uVar21;
  int iVar22;
  undefined8 unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **unaff_x29;
  undefined1 *puVar23;
  undefined *unaff_x30;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 *puStack_20;
  undefined *puStack_18;
  undefined1 *puVar3;
  
  puVar2 = &stack0xfffffffffffffff0;
  puVar3 = &stack0xfffffffffffffff0;
  lVar8 = *(long *)(param_1 + 2);
  if (lVar8 == 0) {
    piVar9 = (int *)func_0x00f78af4();
    unaff_x29 = &puStack_20;
    puStack_18 = &Core_Networking_Vec4__get_Z;
    lVar8 = *(long *)(piVar9 + 2);
    if (lVar8 == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      piVar9 = (int *)func_0x00f78af4();
      lVar8 = *(long *)(piVar9 + 2);
      if (lVar8 == 0) {
        auVar26 = func_0x00f78af4();
        puVar17 = auVar26._8_8_;
        puVar13 = auVar26._0_8_;
        uVar21 = *puVar17;
        uVar15 = puVar17[3];
        uVar14 = puVar17[2];
        puVar13[1] = puVar17[1];
        *puVar13 = uVar21;
        puVar13[3] = uVar15;
        puVar13[2] = uVar14;
        return puVar13;
      }
      iVar20 = *piVar9 + 0xc;
      register0x00000008 = (BADSPACEBASE *)&puStack_20;
      unaff_x30 = &Core_Networking_Vec4__get_W;
    }
    else {
      iVar20 = *piVar9 + 8;
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x30 = &Core_Networking_Vec4__get_Z;
      unaff_x29 = (undefined1 **)puVar3;
      puStack_20 = puVar2;
    }
  }
  else {
    iVar20 = *param_1 + 4;
  }
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar23 = (undefined1 *)((long)register0x00000008 + -0x10);
  uVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar8,iVar20,4);
  uVar10 = *(ulong *)(lVar8 + 0x30);
  if (uVar10 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar10 + 0x18) != 0) {
    *(undefined4 *)(uVar10 + 0x20) = uVar5;
    uVar18 = *(ulong *)(lVar8 + 0x28);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar10;
    uVar21 = 0;
    puVar24 = &UNK_016cce74;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x20);
    uVar10 = 4;
    lVar11 = lVar8;
    goto code_r0x029387b8;
  }
  uVar21 = func_0x00f78b24();
  lVar11 = func_0x00f78ac0(uVar21,0);
  *(long **)((long)register0x00000008 + -0x40) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x38) = lVar8;
  *(undefined1 **)((long)register0x00000008 + -0x30) = puVar23;
  *(undefined **)((long)register0x00000008 + -0x28) = &FlatBuffers_ByteBuffer__GetDouble;
  puVar23 = (undefined1 *)((long)register0x00000008 + -0x30);
  uVar19 = 8;
  uVar21 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634();
  uVar10 = *(ulong *)(lVar11 + 0x40);
  if (uVar10 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar10 + 0x18) != 0) {
    *(undefined8 *)(uVar10 + 0x20) = uVar21;
    uVar18 = *(ulong *)(lVar11 + 0x38);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar10;
    uVar21 = 0;
    puVar24 = &UNK_016cceec;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x40);
    uVar10 = 8;
    goto code_r0x029387b8;
  }
  uVar21 = func_0x00f78b24();
  auVar25 = func_0x00f78ac0(uVar21,0);
  lVar8 = auVar25._0_8_;
  *(ulong *)((long)register0x00000008 + -0x70) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x60) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x58) = lVar11;
  *(undefined1 **)((long)register0x00000008 + -0x50) = puVar23;
  *(undefined **)((long)register0x00000008 + -0x48) = &FlatBuffers_ByteBuffer__PutByteArray;
  uVar21 = 0x3eb5000;
  if ((bRam0000000003eb5cd1 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd1 = 1;
  }
  if (uVar19 == 0) {
code_r0x016ccfdc:
    func_0x00f78af4();
code_r0x016ccfe0:
    func_0x00f78a24(0x3d1fce8);
    uVar15 = func_0x00f78aec();
    uVar14 = 0x3d6a458;
code_r0x016cd01c:
    uVar14 = func_0x00f78a24(uVar14);
    uVar16 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar15,uVar14);
  }
  else {
    if (*(long *)(uVar19 + 0x18) == 0) goto code_r0x016ccfe0;
    if ((int)*(long *)(uVar19 + 0x18) < auVar25._8_4_) {
      func_0x00f78a24(0x3d1fce8);
      uVar15 = func_0x00f78aec();
      uVar14 = 0x3d72a70;
      goto code_r0x016cd01c;
    }
    uVar21 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) != '\0') {
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar8,0,auVar25._8_8_);
      if (*(long *)(lVar8 + 0x10) != 0) {
        uVar18 = *(ulong *)(*(long *)(lVar8 + 0x10) + 0x10);
        auVar26._8_8_ = 0;
        auVar26._0_8_ = uVar19;
        uVar21 = 0;
        puVar23 = *(undefined1 **)((long)register0x00000008 + -0x50);
        puVar24 = *(undefined **)((long)register0x00000008 + -0x48);
        unaff_x20 = *(long **)((long)register0x00000008 + -0x60);
        lVar11 = *(long *)((long)register0x00000008 + -0x58);
        unaff_x22 = *(ulong *)((long)register0x00000008 + -0x70);
        unaff_x21 = *(ulong *)((long)register0x00000008 + -0x68);
        puVar4 = (undefined1 *)((long)register0x00000008 + -0x40);
        uVar10 = auVar25._8_8_;
        goto code_r0x029387b8;
      }
      goto code_r0x016ccfdc;
    }
    func_0x00f78a24(0x3d238c8);
    uVar15 = func_0x00f78aec();
    uVar14 = func_0x00f78a24(0x3d69698);
    uVar16 = 0;
    /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar15,uVar14);
  }
  uVar14 = func_0x00f78a24(0x3d52cf8);
  auVar26 = func_0x00f78ac0(uVar15,uVar14);
  uVar12 = auVar26._8_8_;
  lVar11 = auVar26._0_8_;
  puVar4 = (undefined1 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar21;
  *(long *)((long)register0x00000008 + -0x98) = lVar8;
  *(ulong *)((long)register0x00000008 + -0x90) = uVar19;
  *(undefined8 *)((long)register0x00000008 + -0x88) = uVar15;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined **)((long)register0x00000008 + -0x78) = &FlatBuffers_ByteBuffer__PutIntPtr;
  uVar21 = 0x3eb5000;
  if ((bRam0000000003eb5cd2 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    func_0x00f78a20(0x3d23210);
    bRam0000000003eb5cd2 = 1;
  }
  if (auVar26._8_4_ == 0) {
    func_0x00f78a24(0x3d1fce8);
    uVar12 = func_0x00f78aec();
    uVar14 = func_0x00f78a24(0x3d6a458);
    uVar10 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar12,uVar14);
code_r0x016cd1bc:
    uVar14 = func_0x00f78a24(0x3d52d00);
    func_0x00f78ac0(uVar12,uVar14);
  }
  else {
    uVar21 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
      func_0x00f78a24(0x3d238c8);
      uVar12 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d69698);
      uVar10 = 0;
      /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar12,uVar14);
      goto code_r0x016cd1bc;
    }
    uVar10 = uVar12;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar11,0);
    if (*(long *)(lVar11 + 0x10) != 0) {
      puVar13 = *(undefined8 **)(*(long *)(lVar11 + 0x10) + 0x10);
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0xa8) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0xa0) =
           *(undefined8 *)((long)register0x00000008 + -0xa0);
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0x98);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      if ((bRam0000000003eb9f54 & 1) == 0) {
        func_0x00f78a20(0x3d23210);
        bRam0000000003eb9f54 = 1;
      }
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xa0) =
           *(undefined8 *)((long)register0x00000008 + -0xa0);
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0x98);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      uVar21 = func_0x00f76cf0(*puVar13);
      uVar14 = func_0x00faf4d8(puVar13,uVar21,0);
                    /* WARNING: Could not recover jumptable at 0x033034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar13 = (undefined8 *)(*(code *)PTR_DAT_03c8cea0)(uVar14,uVar16,(int)uVar21 * auVar26._8_4_)
      ;
      return puVar13;
    }
  }
  auVar26 = func_0x00f78af4();
  uVar18 = auVar26._8_8_;
  lVar8 = auVar26._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar21;
  *(long *)((long)register0x00000008 + -200) = lVar11;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar16;
  *(ulong *)((long)register0x00000008 + -0xb8) = uVar12;
  *(undefined1 **)((long)register0x00000008 + -0xb0) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0xa8) = &FlatBuffers_ByteBuffer__CopyByteArray;
  uVar21 = 0x3eb5000;
  if ((bRam0000000003eb5cd3 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd3 = 1;
  }
  if (uVar18 == 0) {
code_r0x016cd29c:
    func_0x00f78af4();
  }
  else if ((int)uVar10 <= *(int *)(uVar18 + 0x18)) {
    uVar21 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') goto code_r0x016cd33c;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar8,0,uVar10);
    if (*(long *)(lVar8 + 0x10) != 0) {
      auVar26._8_4_ = *(undefined4 *)(lVar8 + 0x18);
      auVar26._0_8_ = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10);
      auVar26._12_4_ = 0;
      uVar21 = 0;
      puVar23 = *(undefined1 **)((long)register0x00000008 + -0xb0);
      puVar24 = *(undefined **)((long)register0x00000008 + -0xa8);
      unaff_x20 = *(long **)((long)register0x00000008 + -0xc0);
      lVar11 = *(long *)((long)register0x00000008 + -0xb8);
      unaff_x22 = *(ulong *)((long)register0x00000008 + -0xd0);
      unaff_x21 = *(ulong *)((long)register0x00000008 + -200);
code_r0x029387b8:
      do {
        uVar19 = auVar26._8_8_;
        lVar8 = auVar26._0_8_;
        *(ulong *)(puVar4 + -0x40) = unaff_x24;
        *(ulong *)(puVar4 + -0x38) = unaff_x23;
        *(ulong *)(puVar4 + -0x30) = unaff_x22;
        *(ulong *)(puVar4 + -0x28) = unaff_x21;
        *(long **)(puVar4 + -0x20) = unaff_x20;
        *(long *)(puVar4 + -0x18) = lVar11;
        *(undefined1 **)(puVar4 + -0x10) = puVar23;
        *(undefined **)(puVar4 + -8) = puVar24;
        if (lVar8 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar14 = func_0x00f78aec();
          uVar21 = 0x3d7b990;
code_r0x02938884:
          uVar21 = func_0x00f78a24(uVar21);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar14,uVar21,0);
          uVar21 = func_0x00f78a24(0x3d52be0);
          func_0x00f78ac0(uVar14,uVar21);
code_r0x029388b0:
          uVar21 = func_0x00f78a24(0x3d70548);
          uVar14 = /*Locale$$GetText*/ func_0x02af42b4(uVar21,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar15 = func_0x00f78aec();
          uVar21 = 0x3d7b998;
code_r0x02938954:
          auVar26._8_8_ = unaff_x22;
          auVar26._0_8_ = unaff_x23;
          uVar16 = func_0x00f78a24(uVar21);
          uVar21 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar15,uVar16,uVar14);
        }
        else {
          unaff_x21 = uVar18;
          if (uVar18 == 0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar14 = func_0x00f78aec();
            uVar21 = 0x3d78c30;
            goto code_r0x02938884;
          }
          unaff_x22 = uVar19;
          if (auVar26._8_4_ < 0) goto code_r0x029388b0;
          iVar20 = (int)uVar21;
          if (iVar20 < 0) {
            uVar21 = func_0x00f78a24(0x3d70548);
            uVar14 = /*Locale$$GetText*/ func_0x02af42b4(uVar21,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar15 = func_0x00f78aec();
            uVar21 = 0x3d78c38;
            goto code_r0x02938954;
          }
          iVar22 = (int)uVar10;
          if (iVar22 < 0) {
            uVar21 = func_0x00f78a24(0x3d70548);
            uVar14 = /*Locale$$GetText*/ func_0x02af42b4(uVar21,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar15 = func_0x00f78aec();
            uVar21 = 0x3d78638;
            goto code_r0x02938954;
          }
          puVar13 = (undefined8 *)func_0x00f836d8(lVar8,uVar19,uVar18);
          if (((ulong)puVar13 & 1) != 0) {
            return puVar13;
          }
          iVar6 = /*System.Buffer$$ByteLength*/ func_0x0294274c(lVar8);
          if ((auVar26._8_4_ <= iVar6 - iVar22) &&
             (puVar13 = (undefined8 *)/*System.Buffer$$ByteLength*/ func_0x0294274c(uVar18), iVar20 <= (int)puVar13 - iVar22)) {
            return puVar13;
          }
          uVar14 = func_0x00f78a24(0x3d70ad8);
          uVar14 = /*Locale$$GetText*/ func_0x02af42b4(uVar14,0);
          func_0x00f78a24(0x3d1fce8);
          uVar15 = func_0x00f78aec();
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar15,uVar14,0);
        }
        uVar16 = func_0x00f78a24(0x3d52be0);
        uVar7 = func_0x00f78ac0(uVar15,uVar16);
        *(long *)(puVar4 + -0x70) = auVar26._8_8_;
        *(ulong *)(puVar4 + -0x68) = unaff_x21;
        *(undefined8 *)(puVar4 + -0x60) = uVar15;
        *(undefined8 *)(puVar4 + -0x58) = uVar14;
        *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x10;
        *(undefined **)(puVar4 + -0x48) = &Mono_Math_BigInteger__GenerateRandom;
        if ((bRam0000000003eb8f4c & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          bRam0000000003eb8f4c = 1;
        }
        if (((*(ushort *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x20 = (long *)/*Mono.Math.BigInteger$$get_Rng*/ func_0x02938598();
        *(ulong *)(puVar4 + -0x80) = unaff_x24;
        *(long *)(puVar4 + -0x78) = auVar26._0_8_;
        *(undefined8 *)(puVar4 + -0x70) = *(undefined8 *)(puVar4 + -0x70);
        *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)(puVar4 + -0x68);
        *(undefined8 *)(puVar4 + -0x60) = *(undefined8 *)(puVar4 + -0x60);
        *(undefined8 *)(puVar4 + -0x58) = *(undefined8 *)(puVar4 + -0x58);
        *(undefined8 *)(puVar4 + -0x50) = *(undefined8 *)(puVar4 + -0x50);
        *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)(puVar4 + -0x48);
        puVar23 = puVar4 + -0x50;
        if ((bRam0000000003eb8f4b & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          func_0x00f78a20(0x3d1eda0);
          bRam0000000003eb8f4b = 1;
        }
        uVar1 = (int)uVar7 >> 5;
        unaff_x23 = (ulong)(uVar7 & 0x1f);
        if ((uVar7 & 0x1f) != 0) {
          uVar1 = uVar1 + 1;
        }
        unaff_x24 = (ulong)uVar1;
        lVar11 = func_0x00f78aec(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078);
        uVar18 = (ulong)(uVar1 + 1);
        /*Mono.Math.BigInteger$$.ctor*/ func_0x029379ec();
        unaff_x21 = (ulong)(uVar1 << 2);
        unaff_x22 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,unaff_x21);
        uVar19 = 0x3d20078;
        if (unaff_x20 == (long *)0x0) {
code_r0x029387a8:
          unaff_x22 = uVar19;
          func_0x00f78af4();
          uVar14 = func_0x00f78b24();
          puVar24 = &System_Buffer__BlockCopy;
          auVar26 = func_0x00f78ac0(uVar14,0);
          puVar4 = puVar4 + -0x80;
          goto code_r0x029387b8;
        }
        uVar18 = *(ulong *)(*unaff_x20 + 0x1a0);
        (**(code **)(*unaff_x20 + 0x198))(unaff_x20,unaff_x22);
        uVar19 = unaff_x22;
        if (lVar11 == 0) goto code_r0x029387a8;
        uVar18 = *(ulong *)(lVar11 + 0x18);
        auVar26._8_8_ = 0;
        auVar26._0_8_ = unaff_x22;
        uVar21 = 0;
        puVar24 = &UNK_02938710;
        puVar4 = puVar4 + -0x80;
        uVar10 = unaff_x21;
      } while( true );
    }
    goto code_r0x016cd29c;
  }
  *(int *)((long)register0x00000008 + -0xd4) = (int)uVar10;
  uVar14 = func_0x00f78a24(0x3d22910);
  lVar8 = func_0x00f78ae0(uVar14,(undefined1 *)((long)register0x00000008 + -0xd4));
  func_0x00055e5c(uVar18);
  *(int *)((long)register0x00000008 + -0xd8) = (int)*(undefined8 *)(uVar18 + 0x18);
  uVar14 = func_0x00f78a24(0x3d22910);
  uVar14 = func_0x00f78ae0(uVar14,(undefined1 *)((long)register0x00000008 + -0xd8));
  uVar15 = func_0x00f78a24(0x3d72a68);
  uVar14 = /*System.String$$Format*/ func_0x029bcac4(uVar15,lVar8,uVar14,0);
  func_0x00f78a24(0x3d1fce8);
  uVar10 = func_0x00f78aec();
  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar14,0);
  uVar14 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar10,uVar14);
code_r0x016cd33c:
  func_0x00f78a24(0x3d238c8);
  uVar14 = func_0x00f78aec();
  uVar15 = func_0x00f78a24(0x3d69698);
  /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar14,uVar15,0);
  uVar15 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar14,uVar15);
  *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x138) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x120) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x118) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x110) = uVar21;
  *(long *)((long)register0x00000008 + -0x108) = lVar8;
  *(ulong *)((long)register0x00000008 + -0x100) = uVar10;
  *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar14;
  *(undefined1 **)((long)register0x00000008 + -0xf0) =
       (undefined1 *)((long)register0x00000008 + -0xb0);
  *(undefined **)((long)register0x00000008 + -0xe8) = &FlatBuffers_ByteBuffer___cctor;
  if ((bRam0000000003eb5cd4 & 1) == 0) {
    func_0x00f78a20(0x3d19080);
    func_0x00f78a20(0x3d203b0);
    func_0x00f78a20(0x3d190e0);
    func_0x00f78a20(0x3d30168);
    func_0x00f78a20(0x3d30160);
    func_0x00f78a20(0x3d1c590);
    func_0x00f78a20(0x3d19388);
    func_0x00f78a20(0x3d198b0);
    func_0x00f78a20(0x3d198c0);
    func_0x00f78a20(0x3d198d0);
    func_0x00f78a20(0x3d19d88);
    func_0x00f78a20(0x3d19e28);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d1a0a8);
    func_0x00f78a20(0x3d1a0b8);
    func_0x00f78a20(0x3d1a0c8);
    bRam0000000003eb5cd4 = 1;
  }
  lVar8 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, int>_TypeInfo*/ uRam0000000003d1c590);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(lVar8,uRam0000000003d30160);
  uVar21 = /*bool_var*/ uRam0000000003d19080;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar21,0);
  if (lVar8 == 0) {
    lVar8 = func_0x00f78af4();
    return *(undefined8 **)(lVar8 + 0x10);
  }
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar8,uVar21,1,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*float_var*/ uRam0000000003d19e28,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar8,uVar21,4,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*double_var*/ uRam0000000003d19388,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar8,uVar21,8,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*sbyte_var*/ uRam0000000003d19d88,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar8,uVar21,1,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*byte_var*/ uRam0000000003d190e0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar8,uVar21,1,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*short_var*/ uRam0000000003d198b0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar8,uVar21,2,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ushort_var*/ uRam0000000003d1a0a8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar8,uVar21,2,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*int_var*/ uRam0000000003d198c0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar8,uVar21,4,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*uint_var*/ uRam0000000003d1a0b8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar8,uVar21,4,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ulong_var*/ uRam0000000003d1a0c8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar8,uVar21,8,uRam0000000003d30168);
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*long_var*/ uRam0000000003d198d0,0);
  puVar13 = (undefined8 *)/*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar8,uVar21,8,uRam0000000003d30168);
  **(long **)(/*FlatBuffers.ByteBuffer_TypeInfo*/ lRam0000000003d203b0 + 0xb8) = lVar8;
  return puVar13;
}



// ============================================================
// RVA: 0x165aad8 | Core.Networking.Vec4.get_Z
// ============================================================

/* WARNING: Possible PIC construction at 0x016cce70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0293870c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016cceec) */
/* WARNING: Removing unreachable block (ram,0x016ccef4) */
/* WARNING: Removing unreachable block (ram,0x016ccefc) */
/* WARNING: Removing unreachable block (ram,0x016cce74) */
/* WARNING: Removing unreachable block (ram,0x016cce7c) */
/* WARNING: Removing unreachable block (ram,0x016cce84) */
/* WARNING: Removing unreachable block (ram,0x02938710) */
/* WARNING: Removing unreachable block (ram,0x0293875c) */
/* WARNING: Removing unreachable block (ram,0x02938764) */
/* WARNING: Removing unreachable block (ram,0x02938778) */
/* WARNING: Removing unreachable block (ram,0x02938714) */
/* WARNING: Removing unreachable block (ram,0x0293871c) */
/* WARNING: Removing unreachable block (ram,0x02938730) */
/* WARNING: Removing unreachable block (ram,0x02938784) */

undefined8 * Core_Networking_Vec4__get_Z(int *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar21;
  undefined *unaff_x30;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  puVar21 = &stack0xfffffffffffffff0;
  lVar6 = *(long *)(param_1 + 2);
  if (lVar6 == 0) {
    piVar7 = (int *)func_0x00f78af4();
    lVar6 = *(long *)(piVar7 + 2);
    if (lVar6 == 0) {
      auVar24 = func_0x00f78af4();
      puVar15 = auVar24._8_8_;
      puVar11 = auVar24._0_8_;
      uVar19 = *puVar15;
      uVar13 = puVar15[3];
      uVar12 = puVar15[2];
      puVar11[1] = puVar15[1];
      *puVar11 = uVar19;
      puVar11[3] = uVar13;
      puVar11[2] = uVar12;
      return puVar11;
    }
    iVar18 = *piVar7 + 0xc;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x30 = &Core_Networking_Vec4__get_W;
  }
  else {
    iVar18 = *param_1 + 8;
    puVar21 = unaff_x29;
  }
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar21;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar21 = (undefined1 *)((long)register0x00000008 + -0x10);
  uVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar6,iVar18,4);
  uVar8 = *(ulong *)(lVar6 + 0x30);
  if (uVar8 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar8 + 0x18) != 0) {
    *(undefined4 *)(uVar8 + 0x20) = uVar3;
    uVar16 = *(ulong *)(lVar6 + 0x28);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar8;
    uVar19 = 0;
    puVar22 = &UNK_016cce74;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x20);
    uVar8 = 4;
    lVar9 = lVar6;
    goto code_r0x029387b8;
  }
  uVar19 = func_0x00f78b24();
  lVar9 = func_0x00f78ac0(uVar19,0);
  *(long **)((long)register0x00000008 + -0x40) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x38) = lVar6;
  *(undefined1 **)((long)register0x00000008 + -0x30) = puVar21;
  *(undefined **)((long)register0x00000008 + -0x28) = &FlatBuffers_ByteBuffer__GetDouble;
  puVar21 = (undefined1 *)((long)register0x00000008 + -0x30);
  uVar17 = 8;
  uVar19 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634();
  uVar8 = *(ulong *)(lVar9 + 0x40);
  if (uVar8 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar8 + 0x18) != 0) {
    *(undefined8 *)(uVar8 + 0x20) = uVar19;
    uVar16 = *(ulong *)(lVar9 + 0x38);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar8;
    uVar19 = 0;
    puVar22 = &UNK_016cceec;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x40);
    uVar8 = 8;
    goto code_r0x029387b8;
  }
  uVar19 = func_0x00f78b24();
  auVar23 = func_0x00f78ac0(uVar19,0);
  lVar6 = auVar23._0_8_;
  *(ulong *)((long)register0x00000008 + -0x70) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x60) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x58) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x50) = puVar21;
  *(undefined **)((long)register0x00000008 + -0x48) = &FlatBuffers_ByteBuffer__PutByteArray;
  uVar19 = 0x3eb5000;
  if ((bRam0000000003eb5cd1 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd1 = 1;
  }
  if (uVar17 == 0) {
code_r0x016ccfdc:
    func_0x00f78af4();
code_r0x016ccfe0:
    func_0x00f78a24(0x3d1fce8);
    uVar13 = func_0x00f78aec();
    uVar12 = 0x3d6a458;
code_r0x016cd01c:
    uVar12 = func_0x00f78a24(uVar12);
    uVar14 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar13,uVar12);
  }
  else {
    if (*(long *)(uVar17 + 0x18) == 0) goto code_r0x016ccfe0;
    if ((int)*(long *)(uVar17 + 0x18) < auVar23._8_4_) {
      func_0x00f78a24(0x3d1fce8);
      uVar13 = func_0x00f78aec();
      uVar12 = 0x3d72a70;
      goto code_r0x016cd01c;
    }
    uVar19 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) != '\0') {
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar6,0,auVar23._8_8_);
      if (*(long *)(lVar6 + 0x10) != 0) {
        uVar16 = *(ulong *)(*(long *)(lVar6 + 0x10) + 0x10);
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar17;
        uVar19 = 0;
        puVar21 = *(undefined1 **)((long)register0x00000008 + -0x50);
        puVar22 = *(undefined **)((long)register0x00000008 + -0x48);
        unaff_x20 = *(long **)((long)register0x00000008 + -0x60);
        lVar9 = *(long *)((long)register0x00000008 + -0x58);
        unaff_x22 = *(ulong *)((long)register0x00000008 + -0x70);
        unaff_x21 = *(ulong *)((long)register0x00000008 + -0x68);
        puVar2 = (undefined1 *)((long)register0x00000008 + -0x40);
        uVar8 = auVar23._8_8_;
        goto code_r0x029387b8;
      }
      goto code_r0x016ccfdc;
    }
    func_0x00f78a24(0x3d238c8);
    uVar13 = func_0x00f78aec();
    uVar12 = func_0x00f78a24(0x3d69698);
    uVar14 = 0;
    /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar13,uVar12);
  }
  uVar12 = func_0x00f78a24(0x3d52cf8);
  auVar24 = func_0x00f78ac0(uVar13,uVar12);
  uVar10 = auVar24._8_8_;
  lVar9 = auVar24._0_8_;
  puVar2 = (undefined1 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar19;
  *(long *)((long)register0x00000008 + -0x98) = lVar6;
  *(ulong *)((long)register0x00000008 + -0x90) = uVar17;
  *(undefined8 *)((long)register0x00000008 + -0x88) = uVar13;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined **)((long)register0x00000008 + -0x78) = &FlatBuffers_ByteBuffer__PutIntPtr;
  uVar19 = 0x3eb5000;
  if ((bRam0000000003eb5cd2 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    func_0x00f78a20(0x3d23210);
    bRam0000000003eb5cd2 = 1;
  }
  if (auVar24._8_4_ == 0) {
    func_0x00f78a24(0x3d1fce8);
    uVar10 = func_0x00f78aec();
    uVar12 = func_0x00f78a24(0x3d6a458);
    uVar8 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar12);
code_r0x016cd1bc:
    uVar12 = func_0x00f78a24(0x3d52d00);
    func_0x00f78ac0(uVar10,uVar12);
  }
  else {
    uVar19 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
      func_0x00f78a24(0x3d238c8);
      uVar10 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d69698);
      uVar8 = 0;
      /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar10,uVar12);
      goto code_r0x016cd1bc;
    }
    uVar8 = uVar10;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar9,0);
    if (*(long *)(lVar9 + 0x10) != 0) {
      puVar11 = *(undefined8 **)(*(long *)(lVar9 + 0x10) + 0x10);
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0xa8) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0xa0) =
           *(undefined8 *)((long)register0x00000008 + -0xa0);
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0x98);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      if ((bRam0000000003eb9f54 & 1) == 0) {
        func_0x00f78a20(0x3d23210);
        bRam0000000003eb9f54 = 1;
      }
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)((long)register0x00000008 + -0xb0);
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xa0) =
           *(undefined8 *)((long)register0x00000008 + -0xa0);
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0x98);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      uVar19 = func_0x00f76cf0(*puVar11);
      uVar12 = func_0x00faf4d8(puVar11,uVar19,0);
                    /* WARNING: Could not recover jumptable at 0x033034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar11 = (undefined8 *)(*(code *)PTR_DAT_03c8cea0)(uVar12,uVar14,(int)uVar19 * auVar24._8_4_)
      ;
      return puVar11;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar16 = auVar24._8_8_;
  lVar6 = auVar24._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar19;
  *(long *)((long)register0x00000008 + -200) = lVar9;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar14;
  *(ulong *)((long)register0x00000008 + -0xb8) = uVar10;
  *(undefined1 **)((long)register0x00000008 + -0xb0) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0xa8) = &FlatBuffers_ByteBuffer__CopyByteArray;
  uVar19 = 0x3eb5000;
  if ((bRam0000000003eb5cd3 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd3 = 1;
  }
  if (uVar16 == 0) {
code_r0x016cd29c:
    func_0x00f78af4();
  }
  else if ((int)uVar8 <= *(int *)(uVar16 + 0x18)) {
    uVar19 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') goto code_r0x016cd33c;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar6,0,uVar8);
    if (*(long *)(lVar6 + 0x10) != 0) {
      auVar24._8_4_ = *(undefined4 *)(lVar6 + 0x18);
      auVar24._0_8_ = *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x10);
      auVar24._12_4_ = 0;
      uVar19 = 0;
      puVar21 = *(undefined1 **)((long)register0x00000008 + -0xb0);
      puVar22 = *(undefined **)((long)register0x00000008 + -0xa8);
      unaff_x20 = *(long **)((long)register0x00000008 + -0xc0);
      lVar9 = *(long *)((long)register0x00000008 + -0xb8);
      unaff_x22 = *(ulong *)((long)register0x00000008 + -0xd0);
      unaff_x21 = *(ulong *)((long)register0x00000008 + -200);
code_r0x029387b8:
      do {
        uVar17 = auVar24._8_8_;
        lVar6 = auVar24._0_8_;
        *(ulong *)(puVar2 + -0x40) = unaff_x24;
        *(ulong *)(puVar2 + -0x38) = unaff_x23;
        *(ulong *)(puVar2 + -0x30) = unaff_x22;
        *(ulong *)(puVar2 + -0x28) = unaff_x21;
        *(long **)(puVar2 + -0x20) = unaff_x20;
        *(long *)(puVar2 + -0x18) = lVar9;
        *(undefined1 **)(puVar2 + -0x10) = puVar21;
        *(undefined **)(puVar2 + -8) = puVar22;
        if (lVar6 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar12 = func_0x00f78aec();
          uVar19 = 0x3d7b990;
code_r0x02938884:
          uVar19 = func_0x00f78a24(uVar19);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar12,uVar19,0);
          uVar19 = func_0x00f78a24(0x3d52be0);
          func_0x00f78ac0(uVar12,uVar19);
code_r0x029388b0:
          uVar19 = func_0x00f78a24(0x3d70548);
          uVar12 = /*Locale$$GetText*/ func_0x02af42b4(uVar19,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar13 = func_0x00f78aec();
          uVar19 = 0x3d7b998;
code_r0x02938954:
          auVar24._8_8_ = unaff_x22;
          auVar24._0_8_ = unaff_x23;
          uVar14 = func_0x00f78a24(uVar19);
          uVar19 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar13,uVar14,uVar12);
        }
        else {
          unaff_x21 = uVar16;
          if (uVar16 == 0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar12 = func_0x00f78aec();
            uVar19 = 0x3d78c30;
            goto code_r0x02938884;
          }
          unaff_x22 = uVar17;
          if (auVar24._8_4_ < 0) goto code_r0x029388b0;
          iVar18 = (int)uVar19;
          if (iVar18 < 0) {
            uVar19 = func_0x00f78a24(0x3d70548);
            uVar12 = /*Locale$$GetText*/ func_0x02af42b4(uVar19,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar13 = func_0x00f78aec();
            uVar19 = 0x3d78c38;
            goto code_r0x02938954;
          }
          iVar20 = (int)uVar8;
          if (iVar20 < 0) {
            uVar19 = func_0x00f78a24(0x3d70548);
            uVar12 = /*Locale$$GetText*/ func_0x02af42b4(uVar19,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar13 = func_0x00f78aec();
            uVar19 = 0x3d78638;
            goto code_r0x02938954;
          }
          puVar11 = (undefined8 *)func_0x00f836d8(lVar6,uVar17,uVar16);
          if (((ulong)puVar11 & 1) != 0) {
            return puVar11;
          }
          iVar4 = /*System.Buffer$$ByteLength*/ func_0x0294274c(lVar6);
          if ((auVar24._8_4_ <= iVar4 - iVar20) &&
             (puVar11 = (undefined8 *)/*System.Buffer$$ByteLength*/ func_0x0294274c(uVar16), iVar18 <= (int)puVar11 - iVar20)) {
            return puVar11;
          }
          uVar12 = func_0x00f78a24(0x3d70ad8);
          uVar12 = /*Locale$$GetText*/ func_0x02af42b4(uVar12,0);
          func_0x00f78a24(0x3d1fce8);
          uVar13 = func_0x00f78aec();
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar13,uVar12,0);
        }
        uVar14 = func_0x00f78a24(0x3d52be0);
        uVar5 = func_0x00f78ac0(uVar13,uVar14);
        *(long *)(puVar2 + -0x70) = auVar24._8_8_;
        *(ulong *)(puVar2 + -0x68) = unaff_x21;
        *(undefined8 *)(puVar2 + -0x60) = uVar13;
        *(undefined8 *)(puVar2 + -0x58) = uVar12;
        *(undefined1 **)(puVar2 + -0x50) = puVar2 + -0x10;
        *(undefined **)(puVar2 + -0x48) = &Mono_Math_BigInteger__GenerateRandom;
        if ((bRam0000000003eb8f4c & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          bRam0000000003eb8f4c = 1;
        }
        if (((*(ushort *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x20 = (long *)/*Mono.Math.BigInteger$$get_Rng*/ func_0x02938598();
        *(ulong *)(puVar2 + -0x80) = unaff_x24;
        *(long *)(puVar2 + -0x78) = auVar24._0_8_;
        *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0x70);
        *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(puVar2 + -0x68);
        *(undefined8 *)(puVar2 + -0x60) = *(undefined8 *)(puVar2 + -0x60);
        *(undefined8 *)(puVar2 + -0x58) = *(undefined8 *)(puVar2 + -0x58);
        *(undefined8 *)(puVar2 + -0x50) = *(undefined8 *)(puVar2 + -0x50);
        *(undefined8 *)(puVar2 + -0x48) = *(undefined8 *)(puVar2 + -0x48);
        puVar21 = puVar2 + -0x50;
        if ((bRam0000000003eb8f4b & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          func_0x00f78a20(0x3d1eda0);
          bRam0000000003eb8f4b = 1;
        }
        uVar1 = (int)uVar5 >> 5;
        unaff_x23 = (ulong)(uVar5 & 0x1f);
        if ((uVar5 & 0x1f) != 0) {
          uVar1 = uVar1 + 1;
        }
        unaff_x24 = (ulong)uVar1;
        lVar9 = func_0x00f78aec(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078);
        uVar16 = (ulong)(uVar1 + 1);
        /*Mono.Math.BigInteger$$.ctor*/ func_0x029379ec();
        unaff_x21 = (ulong)(uVar1 << 2);
        unaff_x22 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,unaff_x21);
        uVar17 = 0x3d20078;
        if (unaff_x20 == (long *)0x0) {
code_r0x029387a8:
          unaff_x22 = uVar17;
          func_0x00f78af4();
          uVar12 = func_0x00f78b24();
          puVar22 = &System_Buffer__BlockCopy;
          auVar24 = func_0x00f78ac0(uVar12,0);
          puVar2 = puVar2 + -0x80;
          goto code_r0x029387b8;
        }
        uVar16 = *(ulong *)(*unaff_x20 + 0x1a0);
        (**(code **)(*unaff_x20 + 0x198))(unaff_x20,unaff_x22);
        uVar17 = unaff_x22;
        if (lVar9 == 0) goto code_r0x029387a8;
        uVar16 = *(ulong *)(lVar9 + 0x18);
        auVar24._8_8_ = 0;
        auVar24._0_8_ = unaff_x22;
        uVar19 = 0;
        puVar22 = &UNK_02938710;
        puVar2 = puVar2 + -0x80;
        uVar8 = unaff_x21;
      } while( true );
    }
    goto code_r0x016cd29c;
  }
  *(int *)((long)register0x00000008 + -0xd4) = (int)uVar8;
  uVar12 = func_0x00f78a24(0x3d22910);
  lVar6 = func_0x00f78ae0(uVar12,(undefined1 *)((long)register0x00000008 + -0xd4));
  func_0x00055e5c(uVar16);
  *(int *)((long)register0x00000008 + -0xd8) = (int)*(undefined8 *)(uVar16 + 0x18);
  uVar12 = func_0x00f78a24(0x3d22910);
  uVar12 = func_0x00f78ae0(uVar12,(undefined1 *)((long)register0x00000008 + -0xd8));
  uVar13 = func_0x00f78a24(0x3d72a68);
  uVar12 = /*System.String$$Format*/ func_0x029bcac4(uVar13,lVar6,uVar12,0);
  func_0x00f78a24(0x3d1fce8);
  uVar8 = func_0x00f78aec();
  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar12,0);
  uVar12 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar8,uVar12);
code_r0x016cd33c:
  func_0x00f78a24(0x3d238c8);
  uVar12 = func_0x00f78aec();
  uVar13 = func_0x00f78a24(0x3d69698);
  /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar12,uVar13,0);
  uVar13 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar12,uVar13);
  *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x138) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x120) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x118) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x110) = uVar19;
  *(long *)((long)register0x00000008 + -0x108) = lVar6;
  *(ulong *)((long)register0x00000008 + -0x100) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar12;
  *(undefined1 **)((long)register0x00000008 + -0xf0) =
       (undefined1 *)((long)register0x00000008 + -0xb0);
  *(undefined **)((long)register0x00000008 + -0xe8) = &FlatBuffers_ByteBuffer___cctor;
  if ((bRam0000000003eb5cd4 & 1) == 0) {
    func_0x00f78a20(0x3d19080);
    func_0x00f78a20(0x3d203b0);
    func_0x00f78a20(0x3d190e0);
    func_0x00f78a20(0x3d30168);
    func_0x00f78a20(0x3d30160);
    func_0x00f78a20(0x3d1c590);
    func_0x00f78a20(0x3d19388);
    func_0x00f78a20(0x3d198b0);
    func_0x00f78a20(0x3d198c0);
    func_0x00f78a20(0x3d198d0);
    func_0x00f78a20(0x3d19d88);
    func_0x00f78a20(0x3d19e28);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d1a0a8);
    func_0x00f78a20(0x3d1a0b8);
    func_0x00f78a20(0x3d1a0c8);
    bRam0000000003eb5cd4 = 1;
  }
  lVar6 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, int>_TypeInfo*/ uRam0000000003d1c590);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(lVar6,uRam0000000003d30160);
  uVar19 = /*bool_var*/ uRam0000000003d19080;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
  if (lVar6 == 0) {
    lVar6 = func_0x00f78af4();
    return *(undefined8 **)(lVar6 + 0x10);
  }
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar6,uVar19,1,uRam0000000003d30168);
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*float_var*/ uRam0000000003d19e28,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar6,uVar19,4,uRam0000000003d30168);
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*double_var*/ uRam0000000003d19388,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar6,uVar19,8,uRam0000000003d30168);
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*sbyte_var*/ uRam0000000003d19d88,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar6,uVar19,1,uRam0000000003d30168);
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*byte_var*/ uRam0000000003d190e0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar6,uVar19,1,uRam0000000003d30168);
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*short_var*/ uRam0000000003d198b0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar6,uVar19,2,uRam0000000003d30168);
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ushort_var*/ uRam0000000003d1a0a8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar6,uVar19,2,uRam0000000003d30168);
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*int_var*/ uRam0000000003d198c0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar6,uVar19,4,uRam0000000003d30168);
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*uint_var*/ uRam0000000003d1a0b8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar6,uVar19,4,uRam0000000003d30168);
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ulong_var*/ uRam0000000003d1a0c8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar6,uVar19,8,uRam0000000003d30168);
  uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*long_var*/ uRam0000000003d198d0,0);
  puVar11 = (undefined8 *)/*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar6,uVar19,8,uRam0000000003d30168);
  **(long **)(/*FlatBuffers.ByteBuffer_TypeInfo*/ lRam0000000003d203b0 + 0xb8) = lVar6;
  return puVar11;
}



// ============================================================
// RVA: 0x165ab04 | Core.Networking.Vec4.get_W
// ============================================================

/* WARNING: Possible PIC construction at 0x016cce70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0293870c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016cceec) */
/* WARNING: Removing unreachable block (ram,0x016ccef4) */
/* WARNING: Removing unreachable block (ram,0x016ccefc) */
/* WARNING: Removing unreachable block (ram,0x016cce74) */
/* WARNING: Removing unreachable block (ram,0x016cce7c) */
/* WARNING: Removing unreachable block (ram,0x016cce84) */
/* WARNING: Removing unreachable block (ram,0x02938710) */
/* WARNING: Removing unreachable block (ram,0x0293875c) */
/* WARNING: Removing unreachable block (ram,0x02938764) */
/* WARNING: Removing unreachable block (ram,0x02938778) */
/* WARNING: Removing unreachable block (ram,0x02938714) */
/* WARNING: Removing unreachable block (ram,0x0293871c) */
/* WARNING: Removing unreachable block (ram,0x02938730) */
/* WARNING: Removing unreachable block (ram,0x02938784) */

undefined8 * Core_Networking_Vec4__get_W(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  int iVar17;
  undefined8 uVar18;
  int iVar19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar20;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 ****ppppuVar21;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uStack_d8;
  int iStack_d4;
  ulong uStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  undefined8 ***pppuStack_30;
  undefined *puStack_28;
  
  uVar5 = *(ulong *)(param_1 + 2);
  if (uVar5 == 0) {
    auVar24 = func_0x00f78af4();
    puVar10 = auVar24._8_8_;
    puVar20 = auVar24._0_8_;
    uVar18 = *puVar10;
    uVar12 = puVar10[3];
    uVar11 = puVar10[2];
    puVar20[1] = puVar10[1];
    *puVar20 = uVar18;
    puVar20[3] = uVar12;
    puVar20[2] = uVar11;
    return puVar20;
  }
  uVar2 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(uVar5,*param_1 + 0xc,4);
  uVar6 = *(ulong *)(uVar5 + 0x30);
  if (uVar6 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar6 + 0x18) != 0) {
    *(undefined4 *)(uVar6 + 0x20) = uVar2;
    uVar14 = *(ulong *)(uVar5 + 0x28);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar6;
    uVar18 = 0;
    puVar20 = (undefined8 *)&stack0xffffffffffffffe0;
    uVar6 = 4;
    ppppuVar21 = (undefined8 ****)&stack0xfffffffffffffff0;
    puVar22 = &UNK_016cce74;
    goto code_r0x029387b8;
  }
  uVar18 = func_0x00f78b24();
  uVar5 = func_0x00f78ac0(uVar18,0);
  puStack_28 = &FlatBuffers_ByteBuffer__GetDouble;
  uVar15 = 8;
  pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
  uVar18 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634();
  uVar6 = *(ulong *)(uVar5 + 0x40);
  if (uVar6 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar6 + 0x18) != 0) {
    *(undefined8 *)(uVar6 + 0x20) = uVar18;
    uVar14 = *(ulong *)(uVar5 + 0x38);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar6;
    uVar18 = 0;
    puVar20 = (undefined8 *)&stack0xffffffffffffffc0;
    uVar6 = 8;
    ppppuVar21 = &pppuStack_30;
    puVar22 = &UNK_016cceec;
    goto code_r0x029387b8;
  }
  uVar18 = func_0x00f78b24();
  auVar23 = func_0x00f78ac0(uVar18,0);
  lVar9 = auVar23._0_8_;
  puStack_48 = &FlatBuffers_ByteBuffer__PutByteArray;
  uVar18 = 0x3eb5000;
  pppuStack_50 = &pppuStack_30;
  if ((bRam0000000003eb5cd1 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd1 = 1;
  }
  if (uVar15 == 0) {
code_r0x016ccfdc:
    func_0x00f78af4();
code_r0x016ccfe0:
    func_0x00f78a24(0x3d1fce8);
    uVar12 = func_0x00f78aec();
    uVar11 = 0x3d6a458;
code_r0x016cd01c:
    uVar11 = func_0x00f78a24(uVar11);
    plVar16 = (long *)0x0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar12,uVar11);
  }
  else {
    if (*(long *)(uVar15 + 0x18) == 0) goto code_r0x016ccfe0;
    if ((int)*(long *)(uVar15 + 0x18) < auVar23._8_4_) {
      func_0x00f78a24(0x3d1fce8);
      uVar12 = func_0x00f78aec();
      uVar11 = 0x3d72a70;
      goto code_r0x016cd01c;
    }
    uVar18 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) != '\0') {
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar9,0,auVar23._8_8_);
      if (*(long *)(lVar9 + 0x10) != 0) {
        uVar14 = *(ulong *)(*(long *)(lVar9 + 0x10) + 0x10);
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar15;
        uVar18 = 0;
        puVar20 = (undefined8 *)&stack0xffffffffffffffc0;
        uVar6 = auVar23._8_8_;
        ppppuVar21 = (undefined8 ****)pppuStack_50;
        puVar22 = puStack_48;
        goto code_r0x029387b8;
      }
      goto code_r0x016ccfdc;
    }
    func_0x00f78a24(0x3d238c8);
    uVar12 = func_0x00f78aec();
    uVar11 = func_0x00f78a24(0x3d69698);
    plVar16 = (long *)0x0;
    /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar12,uVar11);
  }
  uVar11 = func_0x00f78a24(0x3d52cf8);
  auVar24 = func_0x00f78ac0(uVar12,uVar11);
  uVar8 = auVar24._8_8_;
  uVar7 = auVar24._0_8_;
  puVar20 = &uStack_a0;
  puStack_78 = &FlatBuffers_ByteBuffer__PutIntPtr;
  ppppuVar21 = &pppuStack_80;
  uVar5 = 0x3eb5000;
  uStack_a0 = uVar18;
  lStack_98 = lVar9;
  uStack_90 = uVar15;
  uStack_88 = uVar12;
  pppuStack_80 = &pppuStack_50;
  if ((bRam0000000003eb5cd2 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    func_0x00f78a20(0x3d23210);
    bRam0000000003eb5cd2 = 1;
  }
  if (auVar24._8_4_ == 0) {
    func_0x00f78a24(0x3d1fce8);
    uVar8 = func_0x00f78aec();
    uVar18 = func_0x00f78a24(0x3d6a458);
    uVar6 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar18);
code_r0x016cd1bc:
    uVar18 = func_0x00f78a24(0x3d52d00);
    func_0x00f78ac0(uVar8,uVar18);
  }
  else {
    uVar5 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
      func_0x00f78a24(0x3d238c8);
      uVar8 = func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d69698);
      uVar6 = 0;
      /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar8,uVar18);
      goto code_r0x016cd1bc;
    }
    uVar6 = uVar8;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(uVar7,0);
    if (*(long *)(uVar7 + 0x10) != 0) {
      puVar20 = *(undefined8 **)(*(long *)(uVar7 + 0x10) + 0x10);
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003eb9f54 & 1) == 0) {
        func_0x00f78a20(0x3d23210);
        bRam0000000003eb9f54 = 1;
      }
      if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar18 = func_0x00f76cf0(*puVar20);
      uVar11 = func_0x00faf4d8(puVar20,uVar18,0);
                    /* WARNING: Could not recover jumptable at 0x033034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar20 = (undefined8 *)
                (*(code *)PTR_DAT_03c8cea0)(uVar11,plVar16,(int)uVar18 * auVar24._8_4_);
      return puVar20;
    }
  }
  auVar24 = func_0x00f78af4();
  uVar14 = auVar24._8_8_;
  lVar9 = auVar24._0_8_;
  uStack_d0 = uVar5;
  uStack_c8 = uVar7;
  plStack_c0 = plVar16;
  uStack_b8 = uVar8;
  if ((bRam0000000003eb5cd3 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd3 = 1;
  }
  if (uVar14 == 0) {
code_r0x016cd29c:
    func_0x00f78af4();
  }
  else if ((int)uVar6 <= *(int *)(uVar14 + 0x18)) {
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') goto code_r0x016cd33c;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar9,0,uVar6);
    if (*(long *)(lVar9 + 0x10) != 0) {
      auVar24._8_4_ = *(undefined4 *)(lVar9 + 0x18);
      auVar24._0_8_ = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x10);
      auVar24._12_4_ = 0;
      uVar18 = 0;
      puVar22 = &FlatBuffers_ByteBuffer__CopyByteArray;
      uVar5 = uStack_b8;
      unaff_x20 = plStack_c0;
      unaff_x21 = uStack_c8;
      unaff_x22 = uStack_d0;
code_r0x029387b8:
      do {
        uVar15 = auVar24._8_8_;
        lVar9 = auVar24._0_8_;
        *(ulong *)((long)puVar20 + -0x40) = unaff_x24;
        *(ulong *)((long)puVar20 + -0x38) = unaff_x23;
        *(ulong *)((long)puVar20 + -0x30) = unaff_x22;
        *(ulong *)((long)puVar20 + -0x28) = unaff_x21;
        *(long **)((long)puVar20 + -0x20) = unaff_x20;
        *(ulong *)((long)puVar20 + -0x18) = uVar5;
        *(undefined8 *****)((long)puVar20 + -0x10) = ppppuVar21;
        *(undefined **)((long)puVar20 + -8) = puVar22;
        if (lVar9 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar11 = func_0x00f78aec();
          uVar18 = 0x3d7b990;
code_r0x02938884:
          uVar18 = func_0x00f78a24(uVar18);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar11,uVar18,0);
          uVar18 = func_0x00f78a24(0x3d52be0);
          func_0x00f78ac0(uVar11,uVar18);
code_r0x029388b0:
          uVar18 = func_0x00f78a24(0x3d70548);
          uVar11 = /*Locale$$GetText*/ func_0x02af42b4(uVar18,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar12 = func_0x00f78aec();
          uVar18 = 0x3d7b998;
code_r0x02938954:
          auVar24._8_8_ = unaff_x22;
          auVar24._0_8_ = unaff_x23;
          uVar13 = func_0x00f78a24(uVar18);
          uVar18 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar12,uVar13,uVar11);
        }
        else {
          unaff_x21 = uVar14;
          if (uVar14 == 0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar11 = func_0x00f78aec();
            uVar18 = 0x3d78c30;
            goto code_r0x02938884;
          }
          unaff_x22 = uVar15;
          if (auVar24._8_4_ < 0) goto code_r0x029388b0;
          iVar17 = (int)uVar18;
          if (iVar17 < 0) {
            uVar18 = func_0x00f78a24(0x3d70548);
            uVar11 = /*Locale$$GetText*/ func_0x02af42b4(uVar18,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar12 = func_0x00f78aec();
            uVar18 = 0x3d78c38;
            goto code_r0x02938954;
          }
          iVar19 = (int)uVar6;
          if (iVar19 < 0) {
            uVar18 = func_0x00f78a24(0x3d70548);
            uVar11 = /*Locale$$GetText*/ func_0x02af42b4(uVar18,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar12 = func_0x00f78aec();
            uVar18 = 0x3d78638;
            goto code_r0x02938954;
          }
          puVar10 = (undefined8 *)func_0x00f836d8(lVar9,uVar15,uVar14);
          if (((ulong)puVar10 & 1) != 0) {
            return puVar10;
          }
          iVar3 = /*System.Buffer$$ByteLength*/ func_0x0294274c(lVar9);
          if ((auVar24._8_4_ <= iVar3 - iVar19) &&
             (puVar10 = (undefined8 *)/*System.Buffer$$ByteLength*/ func_0x0294274c(uVar14), iVar17 <= (int)puVar10 - iVar19)) {
            return puVar10;
          }
          uVar11 = func_0x00f78a24(0x3d70ad8);
          uVar11 = /*Locale$$GetText*/ func_0x02af42b4(uVar11,0);
          func_0x00f78a24(0x3d1fce8);
          uVar12 = func_0x00f78aec();
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar12,uVar11,0);
        }
        uVar13 = func_0x00f78a24(0x3d52be0);
        uVar4 = func_0x00f78ac0(uVar12,uVar13);
        *(long *)((long)puVar20 + -0x70) = auVar24._8_8_;
        *(ulong *)((long)puVar20 + -0x68) = unaff_x21;
        *(undefined8 *)((long)puVar20 + -0x60) = uVar12;
        *(undefined8 *)((long)puVar20 + -0x58) = uVar11;
        *(undefined1 **)((long)puVar20 + -0x50) = (undefined1 *)((long)puVar20 + -0x10);
        *(undefined **)((long)puVar20 + -0x48) = &Mono_Math_BigInteger__GenerateRandom;
        if ((bRam0000000003eb8f4c & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          bRam0000000003eb8f4c = 1;
        }
        if (((*(ushort *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x20 = (long *)/*Mono.Math.BigInteger$$get_Rng*/ func_0x02938598();
        *(ulong *)((long)puVar20 + -0x80) = unaff_x24;
        *(long *)((long)puVar20 + -0x78) = auVar24._0_8_;
        *(undefined8 *)((long)puVar20 + -0x70) = *(undefined8 *)((long)puVar20 + -0x70);
        *(undefined8 *)((long)puVar20 + -0x68) = *(undefined8 *)((long)puVar20 + -0x68);
        *(undefined8 *)((long)puVar20 + -0x60) = *(undefined8 *)((long)puVar20 + -0x60);
        *(undefined8 *)((long)puVar20 + -0x58) = *(undefined8 *)((long)puVar20 + -0x58);
        *(undefined8 *)((long)puVar20 + -0x50) = *(undefined8 *)((long)puVar20 + -0x50);
        *(undefined8 *)((long)puVar20 + -0x48) = *(undefined8 *)((long)puVar20 + -0x48);
        ppppuVar21 = (undefined8 ****)((long)puVar20 + -0x50);
        if ((bRam0000000003eb8f4b & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          func_0x00f78a20(0x3d1eda0);
          bRam0000000003eb8f4b = 1;
        }
        uVar1 = (int)uVar4 >> 5;
        unaff_x23 = (ulong)(uVar4 & 0x1f);
        if ((uVar4 & 0x1f) != 0) {
          uVar1 = uVar1 + 1;
        }
        unaff_x24 = (ulong)uVar1;
        uVar5 = func_0x00f78aec(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078);
        uVar14 = (ulong)(uVar1 + 1);
        /*Mono.Math.BigInteger$$.ctor*/ func_0x029379ec();
        unaff_x21 = (ulong)(uVar1 << 2);
        unaff_x22 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,unaff_x21);
        uVar15 = 0x3d20078;
        if (unaff_x20 == (long *)0x0) {
code_r0x029387a8:
          unaff_x22 = uVar15;
          func_0x00f78af4();
          uVar11 = func_0x00f78b24();
          puVar22 = &System_Buffer__BlockCopy;
          auVar24 = func_0x00f78ac0(uVar11,0);
          puVar20 = (undefined8 *)((long)puVar20 + -0x80);
          goto code_r0x029387b8;
        }
        uVar14 = *(ulong *)(*unaff_x20 + 0x1a0);
        (**(code **)(*unaff_x20 + 0x198))(unaff_x20,unaff_x22);
        uVar15 = unaff_x22;
        if (uVar5 == 0) goto code_r0x029387a8;
        uVar14 = *(ulong *)(uVar5 + 0x18);
        auVar24._8_8_ = 0;
        auVar24._0_8_ = unaff_x22;
        uVar18 = 0;
        puVar22 = &UNK_02938710;
        puVar20 = (undefined8 *)((long)puVar20 + -0x80);
        uVar6 = unaff_x21;
      } while( true );
    }
    goto code_r0x016cd29c;
  }
  iStack_d4 = (int)uVar6;
  uVar18 = func_0x00f78a24(0x3d22910);
  uVar18 = func_0x00f78ae0(uVar18,&iStack_d4);
  func_0x00055e5c(uVar14);
  uStack_d8 = (undefined4)*(undefined8 *)(uVar14 + 0x18);
  uVar11 = func_0x00f78a24(0x3d22910);
  uVar11 = func_0x00f78ae0(uVar11,&uStack_d8);
  uVar12 = func_0x00f78a24(0x3d72a68);
  uVar18 = /*System.String$$Format*/ func_0x029bcac4(uVar12,uVar18,uVar11,0);
  func_0x00f78a24(0x3d1fce8);
  uVar11 = func_0x00f78aec();
  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar11,uVar18,0);
  uVar18 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar11,uVar18);
code_r0x016cd33c:
  func_0x00f78a24(0x3d238c8);
  uVar18 = func_0x00f78aec();
  uVar11 = func_0x00f78a24(0x3d69698);
  /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar18,uVar11,0);
  uVar11 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar18,uVar11);
  if ((bRam0000000003eb5cd4 & 1) == 0) {
    func_0x00f78a20(0x3d19080);
    func_0x00f78a20(0x3d203b0);
    func_0x00f78a20(0x3d190e0);
    func_0x00f78a20(0x3d30168);
    func_0x00f78a20(0x3d30160);
    func_0x00f78a20(0x3d1c590);
    func_0x00f78a20(0x3d19388);
    func_0x00f78a20(0x3d198b0);
    func_0x00f78a20(0x3d198c0);
    func_0x00f78a20(0x3d198d0);
    func_0x00f78a20(0x3d19d88);
    func_0x00f78a20(0x3d19e28);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d1a0a8);
    func_0x00f78a20(0x3d1a0b8);
    func_0x00f78a20(0x3d1a0c8);
    bRam0000000003eb5cd4 = 1;
  }
  lVar9 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, int>_TypeInfo*/ uRam0000000003d1c590);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(lVar9,uRam0000000003d30160);
  uVar18 = /*bool_var*/ uRam0000000003d19080;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
  if (lVar9 == 0) {
    lVar9 = func_0x00f78af4();
    return *(undefined8 **)(lVar9 + 0x10);
  }
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar9,uVar18,1,uRam0000000003d30168);
  uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*float_var*/ uRam0000000003d19e28,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar9,uVar18,4,uRam0000000003d30168);
  uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*double_var*/ uRam0000000003d19388,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar9,uVar18,8,uRam0000000003d30168);
  uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*sbyte_var*/ uRam0000000003d19d88,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar9,uVar18,1,uRam0000000003d30168);
  uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*byte_var*/ uRam0000000003d190e0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar9,uVar18,1,uRam0000000003d30168);
  uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*short_var*/ uRam0000000003d198b0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar9,uVar18,2,uRam0000000003d30168);
  uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ushort_var*/ uRam0000000003d1a0a8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar9,uVar18,2,uRam0000000003d30168);
  uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*int_var*/ uRam0000000003d198c0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar9,uVar18,4,uRam0000000003d30168);
  uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*uint_var*/ uRam0000000003d1a0b8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar9,uVar18,4,uRam0000000003d30168);
  uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ulong_var*/ uRam0000000003d1a0c8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar9,uVar18,8,uRam0000000003d30168);
  uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*long_var*/ uRam0000000003d198d0,0);
  puVar20 = (undefined8 *)/*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar9,uVar18,8,uRam0000000003d30168);
  **(long **)(/*FlatBuffers.ByteBuffer_TypeInfo*/ lRam0000000003d203b0 + 0xb8) = lVar9;
  return puVar20;
}



// ============================================================
// RVA: 0x165cb88 | Core.Networking.Vec4.CreateVec4
// ============================================================

/* WARNING: Possible PIC construction at 0x0165ccb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165b5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x016ce3a4) */
/* WARNING: Removing unreachable block (ram,0x016ce3a8) */
/* WARNING: Removing unreachable block (ram,0x016ce3b4) */
/* WARNING: Removing unreachable block (ram,0x016ce320) */
/* WARNING: Removing unreachable block (ram,0x016ced00) */
/* WARNING: Removing unreachable block (ram,0x016ced04) */
/* WARNING: Removing unreachable block (ram,0x016ced10) */
/* WARNING: Removing unreachable block (ram,0x016ced20) */
/* WARNING: Removing unreachable block (ram,0x016ced28) */
/* WARNING: Removing unreachable block (ram,0x016cea8c) */
/* WARNING: Removing unreachable block (ram,0x016cea9c) */
/* WARNING: Removing unreachable block (ram,0x016ceaa0) */
/* WARNING: Removing unreachable block (ram,0x016ceaa8) */
/* WARNING: Removing unreachable block (ram,0x016ceab0) */
/* WARNING: Removing unreachable block (ram,0x016ceabc) */
/* WARNING: Removing unreachable block (ram,0x016ceac8) */
/* WARNING: Removing unreachable block (ram,0x016ceacc) */
/* WARNING: Removing unreachable block (ram,0x016ceadc) */
/* WARNING: Removing unreachable block (ram,0x016ceae8) */
/* WARNING: Removing unreachable block (ram,0x016ceb10) */
/* WARNING: Removing unreachable block (ram,0x016ceb1c) */
/* WARNING: Removing unreachable block (ram,0x016ceb2c) */
/* WARNING: Removing unreachable block (ram,0x016ceb30) */
/* WARNING: Removing unreachable block (ram,0x016ceb84) */
/* WARNING: Removing unreachable block (ram,0x016ceb88) */
/* WARNING: Removing unreachable block (ram,0x016ceb90) */
/* WARNING: Removing unreachable block (ram,0x016ceb98) */
/* WARNING: Removing unreachable block (ram,0x016ceba0) */
/* WARNING: Removing unreachable block (ram,0x016cebac) */
/* WARNING: Removing unreachable block (ram,0x016cebd8) */
/* WARNING: Removing unreachable block (ram,0x016cebf0) */
/* WARNING: Removing unreachable block (ram,0x016cebfc) */
/* WARNING: Removing unreachable block (ram,0x016cec00) */
/* WARNING: Removing unreachable block (ram,0x016cec08) */
/* WARNING: Removing unreachable block (ram,0x016cec20) */
/* WARNING: Removing unreachable block (ram,0x016cec48) */
/* WARNING: Removing unreachable block (ram,0x016cec58) */
/* WARNING: Removing unreachable block (ram,0x016cec60) */
/* WARNING: Removing unreachable block (ram,0x016cec38) */
/* WARNING: Removing unreachable block (ram,0x016cec44) */
/* WARNING: Removing unreachable block (ram,0x016cec64) */
/* WARNING: Removing unreachable block (ram,0x016cec6c) */
/* WARNING: Removing unreachable block (ram,0x016cec78) */
/* WARNING: Removing unreachable block (ram,0x016ceca8) */
/* WARNING: Removing unreachable block (ram,0x016cecac) */
/* WARNING: Removing unreachable block (ram,0x016cecb8) */
/* WARNING: Removing unreachable block (ram,0x016cecd8) */
/* WARNING: Removing unreachable block (ram,0x016cecf0) */
/* WARNING: Removing unreachable block (ram,0x016cec84) */
/* WARNING: Removing unreachable block (ram,0x016cec8c) */
/* WARNING: Removing unreachable block (ram,0x016ced84) */
/* WARNING: Removing unreachable block (ram,0x016ced88) */
/* WARNING: Removing unreachable block (ram,0x016cec94) */
/* WARNING: Removing unreachable block (ram,0x016ced3c) */
/* WARNING: Removing unreachable block (ram,0x0165b5d0) */
/* WARNING: Removing unreachable block (ram,0x01656e18) */
/* WARNING: Removing unreachable block (ram,0x01656e34) */
/* WARNING: Removing unreachable block (ram,0x01656e48) */
/* WARNING: Removing unreachable block (ram,0x01656e60) */
/* WARNING: Removing unreachable block (ram,0x01656e74) */
/* WARNING: Removing unreachable block (ram,0x01656e68) */
/* WARNING: Removing unreachable block (ram,0x01656e4c) */
/* WARNING: Removing unreachable block (ram,0x016cea24) */
/* WARNING: Removing unreachable block (ram,0x016cea4c) */
/* WARNING: Removing unreachable block (ram,0x016cea60) */
/* WARNING: Removing unreachable block (ram,0x016ced94) */
/* WARNING: Removing unreachable block (ram,0x016cee00) */
/* WARNING: Removing unreachable block (ram,0x016cee08) */
/* WARNING: Removing unreachable block (ram,0x016cee58) */
/* WARNING: Removing unreachable block (ram,0x016cee2c) */
/* WARNING: Removing unreachable block (ram,0x016cee5c) */
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016cea68) */
/* WARNING: Removing unreachable block (ram,0x0165b568) */
/* WARNING: Removing unreachable block (ram,0x0165b524) */
/* WARNING: Removing unreachable block (ram,0x0165b71c) */
/* WARNING: Removing unreachable block (ram,0x0165b3c4) */
/* WARNING: Removing unreachable block (ram,0x0165b3f4) */
/* WARNING: Removing unreachable block (ram,0x0165b3e0) */
/* WARNING: Removing unreachable block (ram,0x0165b3ec) */
/* WARNING: Removing unreachable block (ram,0x0165b3f8) */
/* WARNING: Removing unreachable block (ram,0x0165b400) */
/* WARNING: Removing unreachable block (ram,0x0165b440) */
/* WARNING: Removing unreachable block (ram,0x0165b470) */
/* WARNING: Removing unreachable block (ram,0x0165b490) */
/* WARNING: Removing unreachable block (ram,0x0165b494) */
/* WARNING: Removing unreachable block (ram,0x0165b59c) */
/* WARNING: Removing unreachable block (ram,0x0165b5fc) */
/* WARNING: Removing unreachable block (ram,0x0165b5b4) */
/* WARNING: Removing unreachable block (ram,0x0165b4a4) */
/* WARNING: Removing unreachable block (ram,0x0165b4bc) */
/* WARNING: Removing unreachable block (ram,0x0165b4c4) */
/* WARNING: Removing unreachable block (ram,0x0165b4cc) */
/* WARNING: Removing unreachable block (ram,0x0165b4d4) */
/* WARNING: Removing unreachable block (ram,0x0165b504) */
/* WARNING: Removing unreachable block (ram,0x016ce2a4) */
/* WARNING: Removing unreachable block (ram,0x016ce2c8) */
/* WARNING: Removing unreachable block (ram,0x016ce2dc) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Removing unreachable block (ram,0x016ce2e0) */
/* WARNING: Removing unreachable block (ram,0x016ce37c) */
/* WARNING: Removing unreachable block (ram,0x016ce380) */
/* WARNING: Removing unreachable block (ram,0x016ce3c8) */
/* WARNING: Removing unreachable block (ram,0x016ce410) */
/* WARNING: Removing unreachable block (ram,0x016ce414) */
/* WARNING: Removing unreachable block (ram,0x016ce444) */
/* WARNING: Removing unreachable block (ram,0x016ce45c) */
/* WARNING: Removing unreachable block (ram,0x016ce44c) */
/* WARNING: Removing unreachable block (ram,0x016ce398) */
/* WARNING: Removing unreachable block (ram,0x016ce2f0) */
/* WARNING: Removing unreachable block (ram,0x016ce2fc) */
/* WARNING: Removing unreachable block (ram,0x016ce314) */
/* WARNING: Removing unreachable block (ram,0x0165b414) */
/* WARNING: Removing unreachable block (ram,0x0165b6c4) */
/* WARNING: Removing unreachable block (ram,0x0165ccb8) */
/* WARNING: Removing unreachable block (ram,0x0165b600) */
/* WARNING: Removing unreachable block (ram,0x0165b630) */
/* WARNING: Removing unreachable block (ram,0x0165b61c) */
/* WARNING: Removing unreachable block (ram,0x0165b628) */
/* WARNING: Removing unreachable block (ram,0x0165b634) */
/* WARNING: Removing unreachable block (ram,0x0165b63c) */
/* WARNING: Removing unreachable block (ram,0x0165b67c) */
/* WARNING: Removing unreachable block (ram,0x0165b74c) */
/* WARNING: Removing unreachable block (ram,0x0165b694) */
/* WARNING: Removing unreachable block (ram,0x016618ec) */
/* WARNING: Removing unreachable block (ram,0x0166191c) */
/* WARNING: Removing unreachable block (ram,0x01661930) */
/* WARNING: Removing unreachable block (ram,0x016619a4) */
/* WARNING: Removing unreachable block (ram,0x016619c4) */
/* WARNING: Removing unreachable block (ram,0x016619d8) */
/* WARNING: Removing unreachable block (ram,0x016619f8) */
/* WARNING: Removing unreachable block (ram,0x01661a2c) */
/* WARNING: Removing unreachable block (ram,0x01661a4c) */
/* WARNING: Removing unreachable block (ram,0x01661a6c) */
/* WARNING: Removing unreachable block (ram,0x016619e0) */
/* WARNING: Removing unreachable block (ram,0x02421c3c) */
/* WARNING: Removing unreachable block (ram,0x02421c58) */
/* WARNING: Removing unreachable block (ram,0x02421c6c) */
/* WARNING: Removing unreachable block (ram,0x01661934) */
/* WARNING: Removing unreachable block (ram,0x0165b650) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */
/* WARNING: Removing unreachable block (ram,0x01661a80) */
/* WARNING: Removing unreachable block (ram,0x01661b34) */
/* WARNING: Removing unreachable block (ram,0x01661b5c) */
/* WARNING: Removing unreachable block (ram,0x01661b88) */
/* WARNING: Removing unreachable block (ram,0x01661b8c) */
/* WARNING: Removing unreachable block (ram,0x01661bb4) */
/* WARNING: Removing unreachable block (ram,0x01661be4) */
/* WARNING: Removing unreachable block (ram,0x01661c28) */
/* WARNING: Removing unreachable block (ram,0x01661cc4) */
/* WARNING: Removing unreachable block (ram,0x01661cd0) */
/* WARNING: Removing unreachable block (ram,0x01661cd8) */
/* WARNING: Removing unreachable block (ram,0x01661cf4) */
/* WARNING: Removing unreachable block (ram,0x01661d00) */
/* WARNING: Removing unreachable block (ram,0x01661c3c) */
/* WARNING: Removing unreachable block (ram,0x01661c6c) */
/* WARNING: Removing unreachable block (ram,0x01661c98) */
/* WARNING: Removing unreachable block (ram,0x01661ca4) */
/* WARNING: Removing unreachable block (ram,0x01661c7c) */
/* WARNING: Removing unreachable block (ram,0x01661cbc) */
/* WARNING: Removing unreachable block (ram,0x01661c84) */
/* WARNING: Removing unreachable block (ram,0x01661ba0) */
/* WARNING: Removing unreachable block (ram,0x016ccca0) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x01661b74) */
/* WARNING: Removing unreachable block (ram,0x016ccdb4) */
/* WARNING: Removing unreachable block (ram,0x01661b4c) */
/* WARNING: Removing unreachable block (ram,0x01661ab4) */
/* WARNING: Removing unreachable block (ram,0x016cce04) */
/* WARNING: Removing unreachable block (ram,0x01661b18) */
/* WARNING: Removing unreachable block (ram,0x016cef00) */
/* WARNING: Removing unreachable block (ram,0x016cef04) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */

ulong Core_Networking_Vec4__CreateVec4
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                long param_5,undefined8 param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 **ppuVar8;
  undefined *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long alStack_90 [4];
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  if ((bRam0000000003eb5872 & 1) == 0) {
    func_0x00f78a20(0x3d3f290);
    bRam0000000003eb5872 = 1;
  }
  if (param_5 == 0) {
    auVar10 = func_0x00f78af4();
    lVar7 = auVar10._8_8_;
    uStack_60 = 0x3eb5000;
    pcStack_48 = Core_Networking_NetworkServicesOutput__WriteHostMigrationDone;
    ppuVar8 = &puStack_50;
    lStack_58 = param_5;
    puStack_50 = &stack0xfffffffffffffff0;
    if (lVar7 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar7,0);
      uVar3 = Core_Networking_HostMigrationDone__CreateHostMigrationDone(lVar7,*param_7,param_8);
      uVar2 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                        (uVar3,lVar7,0xb,uVar3);
      lVar4 = Core_Networking_UpdateHolder__CreateUpdateHolder(lVar7,uVar2,0);
      puVar9 = (undefined *)0x165ccb8;
      puVar1 = &stack0xffffffffffffff90;
      while( true ) {
        lVar6 = lVar4;
        lVar4 = auVar10._8_8_;
        *(long *)(puVar1 + -0x20) = lVar7;
        *(long *)(puVar1 + -0x18) = auVar10._0_8_;
        *(undefined1 ***)(puVar1 + -0x10) = ppuVar8;
        *(undefined **)(puVar1 + -8) = puVar9;
        ppuVar8 = (undefined1 **)(puVar1 + -0x10);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar4,*(undefined4 *)(lVar4 + 0x20),4);
        uVar5 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar4,lVar6);
        if (*(long *)(lVar4 + 0x18) != 0) break;
        puVar9 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar11 = func_0x00f78af4();
        auVar10._8_8_ = auVar11._0_8_;
        auVar10._0_8_ = lVar4;
        puVar1 = puVar1 + -0x20;
        lVar4 = auVar11._8_8_;
        lVar7 = lVar6;
      }
      *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x18) = *(undefined4 *)(lVar4 + 0x10);
      return uVar5;
    }
    uVar5 = func_0x00f78af4();
    return uVar5;
  }
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_5,4,0x10,0);
  /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_4,param_5,0);
  /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_3,param_5,0);
  /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_2,param_5,0);
  /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_1,param_5,0);
  if ((*(long *)(param_5 + 0x18) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_5 + 0x18) + 0x10), lVar7 != 0)) {
    return (ulong)(uint)(*(int *)(lVar7 + 0x18) - *(int *)(param_5 + 0x10));
  }
  lVar7 = func_0x00f78af4(param_5,0);
  return (ulong)*(byte *)(lVar7 + 0x48);
}



// ============================================================
// RVA: 0x1662dec | Core.Networking.Vec4.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_Vec4__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1662df4 | Core.Networking.Vec4.__init
// ============================================================

void Core_Networking_Vec4____init(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



