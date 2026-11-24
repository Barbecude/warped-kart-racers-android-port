// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.Vec3

// ============================================================
// RVA: 0x1657c2c | Core.Networking.Vec3.__assign
// ============================================================

undefined1  [16]
Core_Networking_Vec3____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x165aa04 | Core.Networking.Vec3.get_X
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

undefined8 * Core_Networking_Vec3__get_X(int *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar4;
  undefined1 **ppuVar6;
  undefined1 **ppuVar8;
  undefined1 **ppuVar10;
  undefined1 *puVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  int *piVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  int iVar28;
  undefined8 uVar29;
  int iVar30;
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
  undefined1 *puVar31;
  undefined *unaff_x30;
  undefined *puVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  undefined1 *puVar3;
  undefined1 **ppuVar5;
  undefined1 **ppuVar7;
  undefined1 **ppuVar9;
  undefined1 **ppuVar11;
  
  puVar2 = &stack0xfffffffffffffff0;
  puVar3 = &stack0xfffffffffffffff0;
  lVar16 = *(long *)(param_1 + 2);
  if (lVar16 == 0) {
    piVar17 = (int *)func_0x00f78af4();
    ppuVar4 = &puStack_20;
    ppuVar5 = &puStack_20;
    puStack_18 = &Core_Networking_Vec3__get_Y;
    lVar16 = *(long *)(piVar17 + 2);
    if (lVar16 == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      piVar17 = (int *)func_0x00f78af4();
      ppuVar6 = &puStack_30;
      ppuVar7 = &puStack_30;
      puStack_28 = &Core_Networking_Vec3__get_Z;
      lVar16 = *(long *)(piVar17 + 2);
      if (lVar16 == 0) {
        puStack_30 = (undefined1 *)&puStack_20;
        piVar17 = (int *)func_0x00f78af4();
        ppuVar8 = &puStack_40;
        ppuVar9 = &puStack_40;
        puStack_38 = &Core_Networking_Vec4__get_X;
        lVar16 = *(long *)(piVar17 + 2);
        if (lVar16 == 0) {
          puStack_40 = (undefined1 *)&puStack_30;
          piVar17 = (int *)func_0x00f78af4();
          ppuVar10 = &puStack_50;
          ppuVar11 = &puStack_50;
          puStack_48 = &Core_Networking_Vec4__get_Y;
          lVar16 = *(long *)(piVar17 + 2);
          if (lVar16 == 0) {
            puStack_50 = (undefined1 *)&puStack_40;
            piVar17 = (int *)func_0x00f78af4();
            unaff_x29 = &puStack_60;
            puStack_58 = &Core_Networking_Vec4__get_Z;
            lVar16 = *(long *)(piVar17 + 2);
            if (lVar16 == 0) {
              puStack_60 = (undefined1 *)&puStack_50;
              piVar17 = (int *)func_0x00f78af4();
              lVar16 = *(long *)(piVar17 + 2);
              if (lVar16 == 0) {
                auVar34 = func_0x00f78af4();
                puVar25 = auVar34._8_8_;
                puVar21 = auVar34._0_8_;
                uVar29 = *puVar25;
                uVar23 = puVar25[3];
                uVar22 = puVar25[2];
                puVar21[1] = puVar25[1];
                *puVar21 = uVar29;
                puVar21[3] = uVar23;
                puVar21[2] = uVar22;
                return puVar21;
              }
              iVar28 = *piVar17 + 0xc;
              register0x00000008 = (BADSPACEBASE *)&puStack_60;
              unaff_x30 = &Core_Networking_Vec4__get_W;
            }
            else {
              iVar28 = *piVar17 + 8;
              register0x00000008 = (BADSPACEBASE *)&puStack_50;
              unaff_x30 = &Core_Networking_Vec4__get_Z;
              unaff_x29 = ppuVar11;
              puStack_60 = (undefined1 *)ppuVar10;
            }
          }
          else {
            iVar28 = *piVar17 + 4;
            register0x00000008 = (BADSPACEBASE *)&puStack_40;
            unaff_x30 = &Core_Networking_Vec4__get_Y;
            unaff_x29 = ppuVar9;
            puStack_50 = (undefined1 *)ppuVar8;
          }
        }
        else {
          iVar28 = *piVar17;
          register0x00000008 = (BADSPACEBASE *)&puStack_30;
          unaff_x30 = &Core_Networking_Vec4__get_X;
          unaff_x29 = ppuVar7;
          puStack_40 = (undefined1 *)ppuVar6;
        }
      }
      else {
        iVar28 = *piVar17 + 8;
        register0x00000008 = (BADSPACEBASE *)&puStack_20;
        unaff_x30 = &Core_Networking_Vec3__get_Z;
        unaff_x29 = ppuVar5;
        puStack_30 = (undefined1 *)ppuVar4;
      }
    }
    else {
      iVar28 = *piVar17 + 4;
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x30 = &Core_Networking_Vec3__get_Y;
      unaff_x29 = (undefined1 **)puVar3;
      puStack_20 = puVar2;
    }
  }
  else {
    iVar28 = *param_1;
  }
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar31 = (undefined1 *)((long)register0x00000008 + -0x10);
  uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,iVar28,4);
  uVar18 = *(ulong *)(lVar16 + 0x30);
  if (uVar18 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar18 + 0x18) != 0) {
    *(undefined4 *)(uVar18 + 0x20) = uVar13;
    uVar26 = *(ulong *)(lVar16 + 0x28);
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar18;
    uVar29 = 0;
    puVar32 = &UNK_016cce74;
    puVar12 = (undefined1 *)((long)register0x00000008 + -0x20);
    uVar18 = 4;
    lVar19 = lVar16;
    goto code_r0x029387b8;
  }
  uVar29 = func_0x00f78b24();
  lVar19 = func_0x00f78ac0(uVar29,0);
  *(long **)((long)register0x00000008 + -0x40) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x38) = lVar16;
  *(undefined1 **)((long)register0x00000008 + -0x30) = puVar31;
  *(undefined **)((long)register0x00000008 + -0x28) = &FlatBuffers_ByteBuffer__GetDouble;
  puVar31 = (undefined1 *)((long)register0x00000008 + -0x30);
  uVar27 = 8;
  uVar29 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634();
  uVar18 = *(ulong *)(lVar19 + 0x40);
  if (uVar18 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar18 + 0x18) != 0) {
    *(undefined8 *)(uVar18 + 0x20) = uVar29;
    uVar26 = *(ulong *)(lVar19 + 0x38);
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar18;
    uVar29 = 0;
    puVar32 = &UNK_016cceec;
    puVar12 = (undefined1 *)((long)register0x00000008 + -0x40);
    uVar18 = 8;
    goto code_r0x029387b8;
  }
  uVar29 = func_0x00f78b24();
  auVar33 = func_0x00f78ac0(uVar29,0);
  lVar16 = auVar33._0_8_;
  *(ulong *)((long)register0x00000008 + -0x70) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x60) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x58) = lVar19;
  *(undefined1 **)((long)register0x00000008 + -0x50) = puVar31;
  *(undefined **)((long)register0x00000008 + -0x48) = &FlatBuffers_ByteBuffer__PutByteArray;
  uVar29 = 0x3eb5000;
  if ((bRam0000000003eb5cd1 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd1 = 1;
  }
  if (uVar27 == 0) {
code_r0x016ccfdc:
    func_0x00f78af4();
code_r0x016ccfe0:
    func_0x00f78a24(0x3d1fce8);
    uVar23 = func_0x00f78aec();
    uVar22 = 0x3d6a458;
code_r0x016cd01c:
    uVar22 = func_0x00f78a24(uVar22);
    uVar24 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar23,uVar22);
  }
  else {
    if (*(long *)(uVar27 + 0x18) == 0) goto code_r0x016ccfe0;
    if ((int)*(long *)(uVar27 + 0x18) < auVar33._8_4_) {
      func_0x00f78a24(0x3d1fce8);
      uVar23 = func_0x00f78aec();
      uVar22 = 0x3d72a70;
      goto code_r0x016cd01c;
    }
    uVar29 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) != '\0') {
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar16,0,auVar33._8_8_);
      if (*(long *)(lVar16 + 0x10) != 0) {
        uVar26 = *(ulong *)(*(long *)(lVar16 + 0x10) + 0x10);
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar27;
        uVar29 = 0;
        puVar31 = *(undefined1 **)((long)register0x00000008 + -0x50);
        puVar32 = *(undefined **)((long)register0x00000008 + -0x48);
        unaff_x20 = *(long **)((long)register0x00000008 + -0x60);
        lVar19 = *(long *)((long)register0x00000008 + -0x58);
        unaff_x22 = *(ulong *)((long)register0x00000008 + -0x70);
        unaff_x21 = *(ulong *)((long)register0x00000008 + -0x68);
        puVar12 = (undefined1 *)((long)register0x00000008 + -0x40);
        uVar18 = auVar33._8_8_;
        goto code_r0x029387b8;
      }
      goto code_r0x016ccfdc;
    }
    func_0x00f78a24(0x3d238c8);
    uVar23 = func_0x00f78aec();
    uVar22 = func_0x00f78a24(0x3d69698);
    uVar24 = 0;
    /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar23,uVar22);
  }
  uVar22 = func_0x00f78a24(0x3d52cf8);
  auVar34 = func_0x00f78ac0(uVar23,uVar22);
  uVar20 = auVar34._8_8_;
  lVar19 = auVar34._0_8_;
  puVar12 = (undefined1 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar29;
  *(long *)((long)register0x00000008 + -0x98) = lVar16;
  *(ulong *)((long)register0x00000008 + -0x90) = uVar27;
  *(undefined8 *)((long)register0x00000008 + -0x88) = uVar23;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined **)((long)register0x00000008 + -0x78) = &FlatBuffers_ByteBuffer__PutIntPtr;
  uVar29 = 0x3eb5000;
  if ((bRam0000000003eb5cd2 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    func_0x00f78a20(0x3d23210);
    bRam0000000003eb5cd2 = 1;
  }
  if (auVar34._8_4_ == 0) {
    func_0x00f78a24(0x3d1fce8);
    uVar20 = func_0x00f78aec();
    uVar22 = func_0x00f78a24(0x3d6a458);
    uVar18 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar20,uVar22);
code_r0x016cd1bc:
    uVar22 = func_0x00f78a24(0x3d52d00);
    func_0x00f78ac0(uVar20,uVar22);
  }
  else {
    uVar29 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
      func_0x00f78a24(0x3d238c8);
      uVar20 = func_0x00f78aec();
      uVar22 = func_0x00f78a24(0x3d69698);
      uVar18 = 0;
      /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar20,uVar22);
      goto code_r0x016cd1bc;
    }
    uVar18 = uVar20;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar19,0);
    if (*(long *)(lVar19 + 0x10) != 0) {
      puVar21 = *(undefined8 **)(*(long *)(lVar19 + 0x10) + 0x10);
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
      uVar29 = func_0x00f76cf0(*puVar21);
      uVar22 = func_0x00faf4d8(puVar21,uVar29,0);
                    /* WARNING: Could not recover jumptable at 0x033034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar21 = (undefined8 *)(*(code *)PTR_DAT_03c8cea0)(uVar22,uVar24,(int)uVar29 * auVar34._8_4_)
      ;
      return puVar21;
    }
  }
  auVar34 = func_0x00f78af4();
  uVar26 = auVar34._8_8_;
  lVar16 = auVar34._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar29;
  *(long *)((long)register0x00000008 + -200) = lVar19;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar24;
  *(ulong *)((long)register0x00000008 + -0xb8) = uVar20;
  *(undefined1 **)((long)register0x00000008 + -0xb0) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0xa8) = &FlatBuffers_ByteBuffer__CopyByteArray;
  uVar29 = 0x3eb5000;
  if ((bRam0000000003eb5cd3 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd3 = 1;
  }
  if (uVar26 == 0) {
code_r0x016cd29c:
    func_0x00f78af4();
  }
  else if ((int)uVar18 <= *(int *)(uVar26 + 0x18)) {
    uVar29 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') goto code_r0x016cd33c;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar16,0,uVar18);
    if (*(long *)(lVar16 + 0x10) != 0) {
      auVar34._8_4_ = *(undefined4 *)(lVar16 + 0x18);
      auVar34._0_8_ = *(undefined8 *)(*(long *)(lVar16 + 0x10) + 0x10);
      auVar34._12_4_ = 0;
      uVar29 = 0;
      puVar31 = *(undefined1 **)((long)register0x00000008 + -0xb0);
      puVar32 = *(undefined **)((long)register0x00000008 + -0xa8);
      unaff_x20 = *(long **)((long)register0x00000008 + -0xc0);
      lVar19 = *(long *)((long)register0x00000008 + -0xb8);
      unaff_x22 = *(ulong *)((long)register0x00000008 + -0xd0);
      unaff_x21 = *(ulong *)((long)register0x00000008 + -200);
code_r0x029387b8:
      do {
        uVar27 = auVar34._8_8_;
        lVar16 = auVar34._0_8_;
        *(ulong *)(puVar12 + -0x40) = unaff_x24;
        *(ulong *)(puVar12 + -0x38) = unaff_x23;
        *(ulong *)(puVar12 + -0x30) = unaff_x22;
        *(ulong *)(puVar12 + -0x28) = unaff_x21;
        *(long **)(puVar12 + -0x20) = unaff_x20;
        *(long *)(puVar12 + -0x18) = lVar19;
        *(undefined1 **)(puVar12 + -0x10) = puVar31;
        *(undefined **)(puVar12 + -8) = puVar32;
        if (lVar16 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar22 = func_0x00f78aec();
          uVar29 = 0x3d7b990;
code_r0x02938884:
          uVar29 = func_0x00f78a24(uVar29);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar22,uVar29,0);
          uVar29 = func_0x00f78a24(0x3d52be0);
          func_0x00f78ac0(uVar22,uVar29);
code_r0x029388b0:
          uVar29 = func_0x00f78a24(0x3d70548);
          uVar22 = /*Locale$$GetText*/ func_0x02af42b4(uVar29,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar23 = func_0x00f78aec();
          uVar29 = 0x3d7b998;
code_r0x02938954:
          auVar34._8_8_ = unaff_x22;
          auVar34._0_8_ = unaff_x23;
          uVar24 = func_0x00f78a24(uVar29);
          uVar29 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar23,uVar24,uVar22);
        }
        else {
          unaff_x21 = uVar26;
          if (uVar26 == 0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar22 = func_0x00f78aec();
            uVar29 = 0x3d78c30;
            goto code_r0x02938884;
          }
          unaff_x22 = uVar27;
          if (auVar34._8_4_ < 0) goto code_r0x029388b0;
          iVar28 = (int)uVar29;
          if (iVar28 < 0) {
            uVar29 = func_0x00f78a24(0x3d70548);
            uVar22 = /*Locale$$GetText*/ func_0x02af42b4(uVar29,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar23 = func_0x00f78aec();
            uVar29 = 0x3d78c38;
            goto code_r0x02938954;
          }
          iVar30 = (int)uVar18;
          if (iVar30 < 0) {
            uVar29 = func_0x00f78a24(0x3d70548);
            uVar22 = /*Locale$$GetText*/ func_0x02af42b4(uVar29,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar23 = func_0x00f78aec();
            uVar29 = 0x3d78638;
            goto code_r0x02938954;
          }
          puVar21 = (undefined8 *)func_0x00f836d8(lVar16,uVar27,uVar26);
          if (((ulong)puVar21 & 1) != 0) {
            return puVar21;
          }
          iVar14 = /*System.Buffer$$ByteLength*/ func_0x0294274c(lVar16);
          if ((auVar34._8_4_ <= iVar14 - iVar30) &&
             (puVar21 = (undefined8 *)/*System.Buffer$$ByteLength*/ func_0x0294274c(uVar26), iVar28 <= (int)puVar21 - iVar30)) {
            return puVar21;
          }
          uVar22 = func_0x00f78a24(0x3d70ad8);
          uVar22 = /*Locale$$GetText*/ func_0x02af42b4(uVar22,0);
          func_0x00f78a24(0x3d1fce8);
          uVar23 = func_0x00f78aec();
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar23,uVar22,0);
        }
        uVar24 = func_0x00f78a24(0x3d52be0);
        uVar15 = func_0x00f78ac0(uVar23,uVar24);
        *(long *)(puVar12 + -0x70) = auVar34._8_8_;
        *(ulong *)(puVar12 + -0x68) = unaff_x21;
        *(undefined8 *)(puVar12 + -0x60) = uVar23;
        *(undefined8 *)(puVar12 + -0x58) = uVar22;
        *(undefined1 **)(puVar12 + -0x50) = puVar12 + -0x10;
        *(undefined **)(puVar12 + -0x48) = &Mono_Math_BigInteger__GenerateRandom;
        if ((bRam0000000003eb8f4c & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          bRam0000000003eb8f4c = 1;
        }
        if (((*(ushort *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x20 = (long *)/*Mono.Math.BigInteger$$get_Rng*/ func_0x02938598();
        *(ulong *)(puVar12 + -0x80) = unaff_x24;
        *(long *)(puVar12 + -0x78) = auVar34._0_8_;
        *(undefined8 *)(puVar12 + -0x70) = *(undefined8 *)(puVar12 + -0x70);
        *(undefined8 *)(puVar12 + -0x68) = *(undefined8 *)(puVar12 + -0x68);
        *(undefined8 *)(puVar12 + -0x60) = *(undefined8 *)(puVar12 + -0x60);
        *(undefined8 *)(puVar12 + -0x58) = *(undefined8 *)(puVar12 + -0x58);
        *(undefined8 *)(puVar12 + -0x50) = *(undefined8 *)(puVar12 + -0x50);
        *(undefined8 *)(puVar12 + -0x48) = *(undefined8 *)(puVar12 + -0x48);
        puVar31 = puVar12 + -0x50;
        if ((bRam0000000003eb8f4b & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          func_0x00f78a20(0x3d1eda0);
          bRam0000000003eb8f4b = 1;
        }
        uVar1 = (int)uVar15 >> 5;
        unaff_x23 = (ulong)(uVar15 & 0x1f);
        if ((uVar15 & 0x1f) != 0) {
          uVar1 = uVar1 + 1;
        }
        unaff_x24 = (ulong)uVar1;
        lVar19 = func_0x00f78aec(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078);
        uVar26 = (ulong)(uVar1 + 1);
        /*Mono.Math.BigInteger$$.ctor*/ func_0x029379ec();
        unaff_x21 = (ulong)(uVar1 << 2);
        unaff_x22 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,unaff_x21);
        uVar27 = 0x3d20078;
        if (unaff_x20 == (long *)0x0) {
code_r0x029387a8:
          unaff_x22 = uVar27;
          func_0x00f78af4();
          uVar22 = func_0x00f78b24();
          puVar32 = &System_Buffer__BlockCopy;
          auVar34 = func_0x00f78ac0(uVar22,0);
          puVar12 = puVar12 + -0x80;
          goto code_r0x029387b8;
        }
        uVar26 = *(ulong *)(*unaff_x20 + 0x1a0);
        (**(code **)(*unaff_x20 + 0x198))(unaff_x20,unaff_x22);
        uVar27 = unaff_x22;
        if (lVar19 == 0) goto code_r0x029387a8;
        uVar26 = *(ulong *)(lVar19 + 0x18);
        auVar34._8_8_ = 0;
        auVar34._0_8_ = unaff_x22;
        uVar29 = 0;
        puVar32 = &UNK_02938710;
        puVar12 = puVar12 + -0x80;
        uVar18 = unaff_x21;
      } while( true );
    }
    goto code_r0x016cd29c;
  }
  *(int *)((long)register0x00000008 + -0xd4) = (int)uVar18;
  uVar22 = func_0x00f78a24(0x3d22910);
  lVar16 = func_0x00f78ae0(uVar22,(undefined1 *)((long)register0x00000008 + -0xd4));
  func_0x00055e5c(uVar26);
  *(int *)((long)register0x00000008 + -0xd8) = (int)*(undefined8 *)(uVar26 + 0x18);
  uVar22 = func_0x00f78a24(0x3d22910);
  uVar22 = func_0x00f78ae0(uVar22,(undefined1 *)((long)register0x00000008 + -0xd8));
  uVar23 = func_0x00f78a24(0x3d72a68);
  uVar22 = /*System.String$$Format*/ func_0x029bcac4(uVar23,lVar16,uVar22,0);
  func_0x00f78a24(0x3d1fce8);
  uVar18 = func_0x00f78aec();
  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar18,uVar22,0);
  uVar22 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar18,uVar22);
code_r0x016cd33c:
  func_0x00f78a24(0x3d238c8);
  uVar22 = func_0x00f78aec();
  uVar23 = func_0x00f78a24(0x3d69698);
  /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar22,uVar23,0);
  uVar23 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar22,uVar23);
  *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x138) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x120) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x118) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x110) = uVar29;
  *(long *)((long)register0x00000008 + -0x108) = lVar16;
  *(ulong *)((long)register0x00000008 + -0x100) = uVar18;
  *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar22;
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
  lVar16 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, int>_TypeInfo*/ uRam0000000003d1c590);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(lVar16,uRam0000000003d30160);
  uVar29 = /*bool_var*/ uRam0000000003d19080;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar29 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar29,0);
  if (lVar16 == 0) {
    lVar16 = func_0x00f78af4();
    return *(undefined8 **)(lVar16 + 0x10);
  }
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar29,1,uRam0000000003d30168);
  uVar29 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*float_var*/ uRam0000000003d19e28,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar29,4,uRam0000000003d30168);
  uVar29 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*double_var*/ uRam0000000003d19388,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar29,8,uRam0000000003d30168);
  uVar29 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*sbyte_var*/ uRam0000000003d19d88,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar29,1,uRam0000000003d30168);
  uVar29 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*byte_var*/ uRam0000000003d190e0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar29,1,uRam0000000003d30168);
  uVar29 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*short_var*/ uRam0000000003d198b0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar29,2,uRam0000000003d30168);
  uVar29 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ushort_var*/ uRam0000000003d1a0a8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar29,2,uRam0000000003d30168);
  uVar29 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*int_var*/ uRam0000000003d198c0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar29,4,uRam0000000003d30168);
  uVar29 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*uint_var*/ uRam0000000003d1a0b8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar29,4,uRam0000000003d30168);
  uVar29 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ulong_var*/ uRam0000000003d1a0c8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar29,8,uRam0000000003d30168);
  uVar29 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*long_var*/ uRam0000000003d198d0,0);
  puVar21 = (undefined8 *)/*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar29,8,uRam0000000003d30168);
  **(long **)(/*FlatBuffers.ByteBuffer_TypeInfo*/ lRam0000000003d203b0 + 0xb8) = lVar16;
  return puVar21;
}



// ============================================================
// RVA: 0x165aa2c | Core.Networking.Vec3.get_Y
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

undefined8 * Core_Networking_Vec3__get_Y(int *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar4;
  undefined1 **ppuVar6;
  undefined1 **ppuVar8;
  undefined1 *puVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  undefined8 uVar27;
  int iVar28;
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
  undefined1 *puVar29;
  undefined *unaff_x30;
  undefined *puVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  undefined1 *puVar3;
  undefined1 **ppuVar5;
  undefined1 **ppuVar7;
  undefined1 **ppuVar9;
  
  puVar2 = &stack0xfffffffffffffff0;
  puVar3 = &stack0xfffffffffffffff0;
  lVar14 = *(long *)(param_1 + 2);
  if (lVar14 == 0) {
    piVar15 = (int *)func_0x00f78af4();
    ppuVar4 = &puStack_20;
    ppuVar5 = &puStack_20;
    puStack_18 = &Core_Networking_Vec3__get_Z;
    lVar14 = *(long *)(piVar15 + 2);
    if (lVar14 == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      piVar15 = (int *)func_0x00f78af4();
      ppuVar6 = &puStack_30;
      ppuVar7 = &puStack_30;
      puStack_28 = &Core_Networking_Vec4__get_X;
      lVar14 = *(long *)(piVar15 + 2);
      if (lVar14 == 0) {
        puStack_30 = (undefined1 *)&puStack_20;
        piVar15 = (int *)func_0x00f78af4();
        ppuVar8 = &puStack_40;
        ppuVar9 = &puStack_40;
        puStack_38 = &Core_Networking_Vec4__get_Y;
        lVar14 = *(long *)(piVar15 + 2);
        if (lVar14 == 0) {
          puStack_40 = (undefined1 *)&puStack_30;
          piVar15 = (int *)func_0x00f78af4();
          unaff_x29 = &puStack_50;
          puStack_48 = &Core_Networking_Vec4__get_Z;
          lVar14 = *(long *)(piVar15 + 2);
          if (lVar14 == 0) {
            puStack_50 = (undefined1 *)&puStack_40;
            piVar15 = (int *)func_0x00f78af4();
            lVar14 = *(long *)(piVar15 + 2);
            if (lVar14 == 0) {
              auVar32 = func_0x00f78af4();
              puVar23 = auVar32._8_8_;
              puVar19 = auVar32._0_8_;
              uVar27 = *puVar23;
              uVar21 = puVar23[3];
              uVar20 = puVar23[2];
              puVar19[1] = puVar23[1];
              *puVar19 = uVar27;
              puVar19[3] = uVar21;
              puVar19[2] = uVar20;
              return puVar19;
            }
            iVar26 = *piVar15 + 0xc;
            register0x00000008 = (BADSPACEBASE *)&puStack_50;
            unaff_x30 = &Core_Networking_Vec4__get_W;
          }
          else {
            iVar26 = *piVar15 + 8;
            register0x00000008 = (BADSPACEBASE *)&puStack_40;
            unaff_x30 = &Core_Networking_Vec4__get_Z;
            unaff_x29 = ppuVar9;
            puStack_50 = (undefined1 *)ppuVar8;
          }
        }
        else {
          iVar26 = *piVar15 + 4;
          register0x00000008 = (BADSPACEBASE *)&puStack_30;
          unaff_x30 = &Core_Networking_Vec4__get_Y;
          unaff_x29 = ppuVar7;
          puStack_40 = (undefined1 *)ppuVar6;
        }
      }
      else {
        iVar26 = *piVar15;
        register0x00000008 = (BADSPACEBASE *)&puStack_20;
        unaff_x30 = &Core_Networking_Vec4__get_X;
        unaff_x29 = ppuVar5;
        puStack_30 = (undefined1 *)ppuVar4;
      }
    }
    else {
      iVar26 = *piVar15 + 8;
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x30 = &Core_Networking_Vec3__get_Z;
      unaff_x29 = (undefined1 **)puVar3;
      puStack_20 = puVar2;
    }
  }
  else {
    iVar26 = *param_1 + 4;
  }
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar29 = (undefined1 *)((long)register0x00000008 + -0x10);
  uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,iVar26,4);
  uVar16 = *(ulong *)(lVar14 + 0x30);
  if (uVar16 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar16 + 0x18) != 0) {
    *(undefined4 *)(uVar16 + 0x20) = uVar11;
    uVar24 = *(ulong *)(lVar14 + 0x28);
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar16;
    uVar27 = 0;
    puVar30 = &UNK_016cce74;
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x20);
    uVar16 = 4;
    lVar17 = lVar14;
    goto code_r0x029387b8;
  }
  uVar27 = func_0x00f78b24();
  lVar17 = func_0x00f78ac0(uVar27,0);
  *(long **)((long)register0x00000008 + -0x40) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x38) = lVar14;
  *(undefined1 **)((long)register0x00000008 + -0x30) = puVar29;
  *(undefined **)((long)register0x00000008 + -0x28) = &FlatBuffers_ByteBuffer__GetDouble;
  puVar29 = (undefined1 *)((long)register0x00000008 + -0x30);
  uVar25 = 8;
  uVar27 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634();
  uVar16 = *(ulong *)(lVar17 + 0x40);
  if (uVar16 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar16 + 0x18) != 0) {
    *(undefined8 *)(uVar16 + 0x20) = uVar27;
    uVar24 = *(ulong *)(lVar17 + 0x38);
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar16;
    uVar27 = 0;
    puVar30 = &UNK_016cceec;
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x40);
    uVar16 = 8;
    goto code_r0x029387b8;
  }
  uVar27 = func_0x00f78b24();
  auVar31 = func_0x00f78ac0(uVar27,0);
  lVar14 = auVar31._0_8_;
  *(ulong *)((long)register0x00000008 + -0x70) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x60) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x58) = lVar17;
  *(undefined1 **)((long)register0x00000008 + -0x50) = puVar29;
  *(undefined **)((long)register0x00000008 + -0x48) = &FlatBuffers_ByteBuffer__PutByteArray;
  uVar27 = 0x3eb5000;
  if ((bRam0000000003eb5cd1 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd1 = 1;
  }
  if (uVar25 == 0) {
code_r0x016ccfdc:
    func_0x00f78af4();
code_r0x016ccfe0:
    func_0x00f78a24(0x3d1fce8);
    uVar21 = func_0x00f78aec();
    uVar20 = 0x3d6a458;
code_r0x016cd01c:
    uVar20 = func_0x00f78a24(uVar20);
    uVar22 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar21,uVar20);
  }
  else {
    if (*(long *)(uVar25 + 0x18) == 0) goto code_r0x016ccfe0;
    if ((int)*(long *)(uVar25 + 0x18) < auVar31._8_4_) {
      func_0x00f78a24(0x3d1fce8);
      uVar21 = func_0x00f78aec();
      uVar20 = 0x3d72a70;
      goto code_r0x016cd01c;
    }
    uVar27 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) != '\0') {
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar14,0,auVar31._8_8_);
      if (*(long *)(lVar14 + 0x10) != 0) {
        uVar24 = *(ulong *)(*(long *)(lVar14 + 0x10) + 0x10);
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar25;
        uVar27 = 0;
        puVar29 = *(undefined1 **)((long)register0x00000008 + -0x50);
        puVar30 = *(undefined **)((long)register0x00000008 + -0x48);
        unaff_x20 = *(long **)((long)register0x00000008 + -0x60);
        lVar17 = *(long *)((long)register0x00000008 + -0x58);
        unaff_x22 = *(ulong *)((long)register0x00000008 + -0x70);
        unaff_x21 = *(ulong *)((long)register0x00000008 + -0x68);
        puVar10 = (undefined1 *)((long)register0x00000008 + -0x40);
        uVar16 = auVar31._8_8_;
        goto code_r0x029387b8;
      }
      goto code_r0x016ccfdc;
    }
    func_0x00f78a24(0x3d238c8);
    uVar21 = func_0x00f78aec();
    uVar20 = func_0x00f78a24(0x3d69698);
    uVar22 = 0;
    /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar21,uVar20);
  }
  uVar20 = func_0x00f78a24(0x3d52cf8);
  auVar32 = func_0x00f78ac0(uVar21,uVar20);
  uVar18 = auVar32._8_8_;
  lVar17 = auVar32._0_8_;
  puVar10 = (undefined1 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar27;
  *(long *)((long)register0x00000008 + -0x98) = lVar14;
  *(ulong *)((long)register0x00000008 + -0x90) = uVar25;
  *(undefined8 *)((long)register0x00000008 + -0x88) = uVar21;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined **)((long)register0x00000008 + -0x78) = &FlatBuffers_ByteBuffer__PutIntPtr;
  uVar27 = 0x3eb5000;
  if ((bRam0000000003eb5cd2 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    func_0x00f78a20(0x3d23210);
    bRam0000000003eb5cd2 = 1;
  }
  if (auVar32._8_4_ == 0) {
    func_0x00f78a24(0x3d1fce8);
    uVar18 = func_0x00f78aec();
    uVar20 = func_0x00f78a24(0x3d6a458);
    uVar16 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar18,uVar20);
code_r0x016cd1bc:
    uVar20 = func_0x00f78a24(0x3d52d00);
    func_0x00f78ac0(uVar18,uVar20);
  }
  else {
    uVar27 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
      func_0x00f78a24(0x3d238c8);
      uVar18 = func_0x00f78aec();
      uVar20 = func_0x00f78a24(0x3d69698);
      uVar16 = 0;
      /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar18,uVar20);
      goto code_r0x016cd1bc;
    }
    uVar16 = uVar18;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar17,0);
    if (*(long *)(lVar17 + 0x10) != 0) {
      puVar19 = *(undefined8 **)(*(long *)(lVar17 + 0x10) + 0x10);
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
      uVar27 = func_0x00f76cf0(*puVar19);
      uVar20 = func_0x00faf4d8(puVar19,uVar27,0);
                    /* WARNING: Could not recover jumptable at 0x033034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar19 = (undefined8 *)(*(code *)PTR_DAT_03c8cea0)(uVar20,uVar22,(int)uVar27 * auVar32._8_4_)
      ;
      return puVar19;
    }
  }
  auVar32 = func_0x00f78af4();
  uVar24 = auVar32._8_8_;
  lVar14 = auVar32._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar27;
  *(long *)((long)register0x00000008 + -200) = lVar17;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar22;
  *(ulong *)((long)register0x00000008 + -0xb8) = uVar18;
  *(undefined1 **)((long)register0x00000008 + -0xb0) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0xa8) = &FlatBuffers_ByteBuffer__CopyByteArray;
  uVar27 = 0x3eb5000;
  if ((bRam0000000003eb5cd3 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd3 = 1;
  }
  if (uVar24 == 0) {
code_r0x016cd29c:
    func_0x00f78af4();
  }
  else if ((int)uVar16 <= *(int *)(uVar24 + 0x18)) {
    uVar27 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') goto code_r0x016cd33c;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar14,0,uVar16);
    if (*(long *)(lVar14 + 0x10) != 0) {
      auVar32._8_4_ = *(undefined4 *)(lVar14 + 0x18);
      auVar32._0_8_ = *(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x10);
      auVar32._12_4_ = 0;
      uVar27 = 0;
      puVar29 = *(undefined1 **)((long)register0x00000008 + -0xb0);
      puVar30 = *(undefined **)((long)register0x00000008 + -0xa8);
      unaff_x20 = *(long **)((long)register0x00000008 + -0xc0);
      lVar17 = *(long *)((long)register0x00000008 + -0xb8);
      unaff_x22 = *(ulong *)((long)register0x00000008 + -0xd0);
      unaff_x21 = *(ulong *)((long)register0x00000008 + -200);
code_r0x029387b8:
      do {
        uVar25 = auVar32._8_8_;
        lVar14 = auVar32._0_8_;
        *(ulong *)(puVar10 + -0x40) = unaff_x24;
        *(ulong *)(puVar10 + -0x38) = unaff_x23;
        *(ulong *)(puVar10 + -0x30) = unaff_x22;
        *(ulong *)(puVar10 + -0x28) = unaff_x21;
        *(long **)(puVar10 + -0x20) = unaff_x20;
        *(long *)(puVar10 + -0x18) = lVar17;
        *(undefined1 **)(puVar10 + -0x10) = puVar29;
        *(undefined **)(puVar10 + -8) = puVar30;
        if (lVar14 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar20 = func_0x00f78aec();
          uVar27 = 0x3d7b990;
code_r0x02938884:
          uVar27 = func_0x00f78a24(uVar27);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar20,uVar27,0);
          uVar27 = func_0x00f78a24(0x3d52be0);
          func_0x00f78ac0(uVar20,uVar27);
code_r0x029388b0:
          uVar27 = func_0x00f78a24(0x3d70548);
          uVar20 = /*Locale$$GetText*/ func_0x02af42b4(uVar27,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar21 = func_0x00f78aec();
          uVar27 = 0x3d7b998;
code_r0x02938954:
          auVar32._8_8_ = unaff_x22;
          auVar32._0_8_ = unaff_x23;
          uVar22 = func_0x00f78a24(uVar27);
          uVar27 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar21,uVar22,uVar20);
        }
        else {
          unaff_x21 = uVar24;
          if (uVar24 == 0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar20 = func_0x00f78aec();
            uVar27 = 0x3d78c30;
            goto code_r0x02938884;
          }
          unaff_x22 = uVar25;
          if (auVar32._8_4_ < 0) goto code_r0x029388b0;
          iVar26 = (int)uVar27;
          if (iVar26 < 0) {
            uVar27 = func_0x00f78a24(0x3d70548);
            uVar20 = /*Locale$$GetText*/ func_0x02af42b4(uVar27,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar21 = func_0x00f78aec();
            uVar27 = 0x3d78c38;
            goto code_r0x02938954;
          }
          iVar28 = (int)uVar16;
          if (iVar28 < 0) {
            uVar27 = func_0x00f78a24(0x3d70548);
            uVar20 = /*Locale$$GetText*/ func_0x02af42b4(uVar27,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar21 = func_0x00f78aec();
            uVar27 = 0x3d78638;
            goto code_r0x02938954;
          }
          puVar19 = (undefined8 *)func_0x00f836d8(lVar14,uVar25,uVar24);
          if (((ulong)puVar19 & 1) != 0) {
            return puVar19;
          }
          iVar12 = /*System.Buffer$$ByteLength*/ func_0x0294274c(lVar14);
          if ((auVar32._8_4_ <= iVar12 - iVar28) &&
             (puVar19 = (undefined8 *)/*System.Buffer$$ByteLength*/ func_0x0294274c(uVar24), iVar26 <= (int)puVar19 - iVar28)) {
            return puVar19;
          }
          uVar20 = func_0x00f78a24(0x3d70ad8);
          uVar20 = /*Locale$$GetText*/ func_0x02af42b4(uVar20,0);
          func_0x00f78a24(0x3d1fce8);
          uVar21 = func_0x00f78aec();
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar21,uVar20,0);
        }
        uVar22 = func_0x00f78a24(0x3d52be0);
        uVar13 = func_0x00f78ac0(uVar21,uVar22);
        *(long *)(puVar10 + -0x70) = auVar32._8_8_;
        *(ulong *)(puVar10 + -0x68) = unaff_x21;
        *(undefined8 *)(puVar10 + -0x60) = uVar21;
        *(undefined8 *)(puVar10 + -0x58) = uVar20;
        *(undefined1 **)(puVar10 + -0x50) = puVar10 + -0x10;
        *(undefined **)(puVar10 + -0x48) = &Mono_Math_BigInteger__GenerateRandom;
        if ((bRam0000000003eb8f4c & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          bRam0000000003eb8f4c = 1;
        }
        if (((*(ushort *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x20 = (long *)/*Mono.Math.BigInteger$$get_Rng*/ func_0x02938598();
        *(ulong *)(puVar10 + -0x80) = unaff_x24;
        *(long *)(puVar10 + -0x78) = auVar32._0_8_;
        *(undefined8 *)(puVar10 + -0x70) = *(undefined8 *)(puVar10 + -0x70);
        *(undefined8 *)(puVar10 + -0x68) = *(undefined8 *)(puVar10 + -0x68);
        *(undefined8 *)(puVar10 + -0x60) = *(undefined8 *)(puVar10 + -0x60);
        *(undefined8 *)(puVar10 + -0x58) = *(undefined8 *)(puVar10 + -0x58);
        *(undefined8 *)(puVar10 + -0x50) = *(undefined8 *)(puVar10 + -0x50);
        *(undefined8 *)(puVar10 + -0x48) = *(undefined8 *)(puVar10 + -0x48);
        puVar29 = puVar10 + -0x50;
        if ((bRam0000000003eb8f4b & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          func_0x00f78a20(0x3d1eda0);
          bRam0000000003eb8f4b = 1;
        }
        uVar1 = (int)uVar13 >> 5;
        unaff_x23 = (ulong)(uVar13 & 0x1f);
        if ((uVar13 & 0x1f) != 0) {
          uVar1 = uVar1 + 1;
        }
        unaff_x24 = (ulong)uVar1;
        lVar17 = func_0x00f78aec(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078);
        uVar24 = (ulong)(uVar1 + 1);
        /*Mono.Math.BigInteger$$.ctor*/ func_0x029379ec();
        unaff_x21 = (ulong)(uVar1 << 2);
        unaff_x22 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,unaff_x21);
        uVar25 = 0x3d20078;
        if (unaff_x20 == (long *)0x0) {
code_r0x029387a8:
          unaff_x22 = uVar25;
          func_0x00f78af4();
          uVar20 = func_0x00f78b24();
          puVar30 = &System_Buffer__BlockCopy;
          auVar32 = func_0x00f78ac0(uVar20,0);
          puVar10 = puVar10 + -0x80;
          goto code_r0x029387b8;
        }
        uVar24 = *(ulong *)(*unaff_x20 + 0x1a0);
        (**(code **)(*unaff_x20 + 0x198))(unaff_x20,unaff_x22);
        uVar25 = unaff_x22;
        if (lVar17 == 0) goto code_r0x029387a8;
        uVar24 = *(ulong *)(lVar17 + 0x18);
        auVar32._8_8_ = 0;
        auVar32._0_8_ = unaff_x22;
        uVar27 = 0;
        puVar30 = &UNK_02938710;
        puVar10 = puVar10 + -0x80;
        uVar16 = unaff_x21;
      } while( true );
    }
    goto code_r0x016cd29c;
  }
  *(int *)((long)register0x00000008 + -0xd4) = (int)uVar16;
  uVar20 = func_0x00f78a24(0x3d22910);
  lVar14 = func_0x00f78ae0(uVar20,(undefined1 *)((long)register0x00000008 + -0xd4));
  func_0x00055e5c(uVar24);
  *(int *)((long)register0x00000008 + -0xd8) = (int)*(undefined8 *)(uVar24 + 0x18);
  uVar20 = func_0x00f78a24(0x3d22910);
  uVar20 = func_0x00f78ae0(uVar20,(undefined1 *)((long)register0x00000008 + -0xd8));
  uVar21 = func_0x00f78a24(0x3d72a68);
  uVar20 = /*System.String$$Format*/ func_0x029bcac4(uVar21,lVar14,uVar20,0);
  func_0x00f78a24(0x3d1fce8);
  uVar16 = func_0x00f78aec();
  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar16,uVar20,0);
  uVar20 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar16,uVar20);
code_r0x016cd33c:
  func_0x00f78a24(0x3d238c8);
  uVar20 = func_0x00f78aec();
  uVar21 = func_0x00f78a24(0x3d69698);
  /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar20,uVar21,0);
  uVar21 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar20,uVar21);
  *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x138) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x120) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x118) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x110) = uVar27;
  *(long *)((long)register0x00000008 + -0x108) = lVar14;
  *(ulong *)((long)register0x00000008 + -0x100) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar20;
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
  lVar14 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, int>_TypeInfo*/ uRam0000000003d1c590);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(lVar14,uRam0000000003d30160);
  uVar27 = /*bool_var*/ uRam0000000003d19080;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar27 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar27,0);
  if (lVar14 == 0) {
    lVar14 = func_0x00f78af4();
    return *(undefined8 **)(lVar14 + 0x10);
  }
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar14,uVar27,1,uRam0000000003d30168);
  uVar27 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*float_var*/ uRam0000000003d19e28,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar14,uVar27,4,uRam0000000003d30168);
  uVar27 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*double_var*/ uRam0000000003d19388,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar14,uVar27,8,uRam0000000003d30168);
  uVar27 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*sbyte_var*/ uRam0000000003d19d88,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar14,uVar27,1,uRam0000000003d30168);
  uVar27 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*byte_var*/ uRam0000000003d190e0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar14,uVar27,1,uRam0000000003d30168);
  uVar27 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*short_var*/ uRam0000000003d198b0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar14,uVar27,2,uRam0000000003d30168);
  uVar27 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ushort_var*/ uRam0000000003d1a0a8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar14,uVar27,2,uRam0000000003d30168);
  uVar27 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*int_var*/ uRam0000000003d198c0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar14,uVar27,4,uRam0000000003d30168);
  uVar27 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*uint_var*/ uRam0000000003d1a0b8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar14,uVar27,4,uRam0000000003d30168);
  uVar27 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ulong_var*/ uRam0000000003d1a0c8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar14,uVar27,8,uRam0000000003d30168);
  uVar27 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*long_var*/ uRam0000000003d198d0,0);
  puVar19 = (undefined8 *)/*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar14,uVar27,8,uRam0000000003d30168);
  **(long **)(/*FlatBuffers.ByteBuffer_TypeInfo*/ lRam0000000003d203b0 + 0xb8) = lVar14;
  return puVar19;
}



// ============================================================
// RVA: 0x165aa58 | Core.Networking.Vec3.get_Z
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

undefined8 * Core_Networking_Vec3__get_Z(int *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar4;
  undefined1 **ppuVar6;
  undefined1 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  int *piVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  undefined8 uVar25;
  int iVar26;
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
  undefined1 *puVar27;
  undefined *unaff_x30;
  undefined *puVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  undefined1 *puVar3;
  undefined1 **ppuVar5;
  undefined1 **ppuVar7;
  
  puVar2 = &stack0xfffffffffffffff0;
  puVar3 = &stack0xfffffffffffffff0;
  lVar12 = *(long *)(param_1 + 2);
  if (lVar12 == 0) {
    piVar13 = (int *)func_0x00f78af4();
    ppuVar4 = &puStack_20;
    ppuVar5 = &puStack_20;
    puStack_18 = &Core_Networking_Vec4__get_X;
    lVar12 = *(long *)(piVar13 + 2);
    if (lVar12 == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      piVar13 = (int *)func_0x00f78af4();
      ppuVar6 = &puStack_30;
      ppuVar7 = &puStack_30;
      puStack_28 = &Core_Networking_Vec4__get_Y;
      lVar12 = *(long *)(piVar13 + 2);
      if (lVar12 == 0) {
        puStack_30 = (undefined1 *)&puStack_20;
        piVar13 = (int *)func_0x00f78af4();
        unaff_x29 = &puStack_40;
        puStack_38 = &Core_Networking_Vec4__get_Z;
        lVar12 = *(long *)(piVar13 + 2);
        if (lVar12 == 0) {
          puStack_40 = (undefined1 *)&puStack_30;
          piVar13 = (int *)func_0x00f78af4();
          lVar12 = *(long *)(piVar13 + 2);
          if (lVar12 == 0) {
            auVar30 = func_0x00f78af4();
            puVar21 = auVar30._8_8_;
            puVar17 = auVar30._0_8_;
            uVar25 = *puVar21;
            uVar19 = puVar21[3];
            uVar18 = puVar21[2];
            puVar17[1] = puVar21[1];
            *puVar17 = uVar25;
            puVar17[3] = uVar19;
            puVar17[2] = uVar18;
            return puVar17;
          }
          iVar24 = *piVar13 + 0xc;
          register0x00000008 = (BADSPACEBASE *)&puStack_40;
          unaff_x30 = &Core_Networking_Vec4__get_W;
        }
        else {
          iVar24 = *piVar13 + 8;
          register0x00000008 = (BADSPACEBASE *)&puStack_30;
          unaff_x30 = &Core_Networking_Vec4__get_Z;
          unaff_x29 = ppuVar7;
          puStack_40 = (undefined1 *)ppuVar6;
        }
      }
      else {
        iVar24 = *piVar13 + 4;
        register0x00000008 = (BADSPACEBASE *)&puStack_20;
        unaff_x30 = &Core_Networking_Vec4__get_Y;
        unaff_x29 = ppuVar5;
        puStack_30 = (undefined1 *)ppuVar4;
      }
    }
    else {
      iVar24 = *piVar13;
      register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
      unaff_x30 = &Core_Networking_Vec4__get_X;
      unaff_x29 = (undefined1 **)puVar3;
      puStack_20 = puVar2;
    }
  }
  else {
    iVar24 = *param_1 + 8;
  }
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar27 = (undefined1 *)((long)register0x00000008 + -0x10);
  uVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar12,iVar24,4);
  uVar14 = *(ulong *)(lVar12 + 0x30);
  if (uVar14 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar14 + 0x18) != 0) {
    *(undefined4 *)(uVar14 + 0x20) = uVar9;
    uVar22 = *(ulong *)(lVar12 + 0x28);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar14;
    uVar25 = 0;
    puVar28 = &UNK_016cce74;
    puVar8 = (undefined1 *)((long)register0x00000008 + -0x20);
    uVar14 = 4;
    lVar15 = lVar12;
    goto code_r0x029387b8;
  }
  uVar25 = func_0x00f78b24();
  lVar15 = func_0x00f78ac0(uVar25,0);
  *(long **)((long)register0x00000008 + -0x40) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x38) = lVar12;
  *(undefined1 **)((long)register0x00000008 + -0x30) = puVar27;
  *(undefined **)((long)register0x00000008 + -0x28) = &FlatBuffers_ByteBuffer__GetDouble;
  puVar27 = (undefined1 *)((long)register0x00000008 + -0x30);
  uVar23 = 8;
  uVar25 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634();
  uVar14 = *(ulong *)(lVar15 + 0x40);
  if (uVar14 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar14 + 0x18) != 0) {
    *(undefined8 *)(uVar14 + 0x20) = uVar25;
    uVar22 = *(ulong *)(lVar15 + 0x38);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar14;
    uVar25 = 0;
    puVar28 = &UNK_016cceec;
    puVar8 = (undefined1 *)((long)register0x00000008 + -0x40);
    uVar14 = 8;
    goto code_r0x029387b8;
  }
  uVar25 = func_0x00f78b24();
  auVar29 = func_0x00f78ac0(uVar25,0);
  lVar12 = auVar29._0_8_;
  *(ulong *)((long)register0x00000008 + -0x70) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x60) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x58) = lVar15;
  *(undefined1 **)((long)register0x00000008 + -0x50) = puVar27;
  *(undefined **)((long)register0x00000008 + -0x48) = &FlatBuffers_ByteBuffer__PutByteArray;
  uVar25 = 0x3eb5000;
  if ((bRam0000000003eb5cd1 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd1 = 1;
  }
  if (uVar23 == 0) {
code_r0x016ccfdc:
    func_0x00f78af4();
code_r0x016ccfe0:
    func_0x00f78a24(0x3d1fce8);
    uVar19 = func_0x00f78aec();
    uVar18 = 0x3d6a458;
code_r0x016cd01c:
    uVar18 = func_0x00f78a24(uVar18);
    uVar20 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar19,uVar18);
  }
  else {
    if (*(long *)(uVar23 + 0x18) == 0) goto code_r0x016ccfe0;
    if ((int)*(long *)(uVar23 + 0x18) < auVar29._8_4_) {
      func_0x00f78a24(0x3d1fce8);
      uVar19 = func_0x00f78aec();
      uVar18 = 0x3d72a70;
      goto code_r0x016cd01c;
    }
    uVar25 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) != '\0') {
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar12,0,auVar29._8_8_);
      if (*(long *)(lVar12 + 0x10) != 0) {
        uVar22 = *(ulong *)(*(long *)(lVar12 + 0x10) + 0x10);
        auVar30._8_8_ = 0;
        auVar30._0_8_ = uVar23;
        uVar25 = 0;
        puVar27 = *(undefined1 **)((long)register0x00000008 + -0x50);
        puVar28 = *(undefined **)((long)register0x00000008 + -0x48);
        unaff_x20 = *(long **)((long)register0x00000008 + -0x60);
        lVar15 = *(long *)((long)register0x00000008 + -0x58);
        unaff_x22 = *(ulong *)((long)register0x00000008 + -0x70);
        unaff_x21 = *(ulong *)((long)register0x00000008 + -0x68);
        puVar8 = (undefined1 *)((long)register0x00000008 + -0x40);
        uVar14 = auVar29._8_8_;
        goto code_r0x029387b8;
      }
      goto code_r0x016ccfdc;
    }
    func_0x00f78a24(0x3d238c8);
    uVar19 = func_0x00f78aec();
    uVar18 = func_0x00f78a24(0x3d69698);
    uVar20 = 0;
    /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar19,uVar18);
  }
  uVar18 = func_0x00f78a24(0x3d52cf8);
  auVar30 = func_0x00f78ac0(uVar19,uVar18);
  uVar16 = auVar30._8_8_;
  lVar15 = auVar30._0_8_;
  puVar8 = (undefined1 *)((long)register0x00000008 + -0xa0);
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar25;
  *(long *)((long)register0x00000008 + -0x98) = lVar12;
  *(ulong *)((long)register0x00000008 + -0x90) = uVar23;
  *(undefined8 *)((long)register0x00000008 + -0x88) = uVar19;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined **)((long)register0x00000008 + -0x78) = &FlatBuffers_ByteBuffer__PutIntPtr;
  uVar25 = 0x3eb5000;
  if ((bRam0000000003eb5cd2 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    func_0x00f78a20(0x3d23210);
    bRam0000000003eb5cd2 = 1;
  }
  if (auVar30._8_4_ == 0) {
    func_0x00f78a24(0x3d1fce8);
    uVar16 = func_0x00f78aec();
    uVar18 = func_0x00f78a24(0x3d6a458);
    uVar14 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar16,uVar18);
code_r0x016cd1bc:
    uVar18 = func_0x00f78a24(0x3d52d00);
    func_0x00f78ac0(uVar16,uVar18);
  }
  else {
    uVar25 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
      func_0x00f78a24(0x3d238c8);
      uVar16 = func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d69698);
      uVar14 = 0;
      /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar16,uVar18);
      goto code_r0x016cd1bc;
    }
    uVar14 = uVar16;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar15,0);
    if (*(long *)(lVar15 + 0x10) != 0) {
      puVar17 = *(undefined8 **)(*(long *)(lVar15 + 0x10) + 0x10);
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
      uVar25 = func_0x00f76cf0(*puVar17);
      uVar18 = func_0x00faf4d8(puVar17,uVar25,0);
                    /* WARNING: Could not recover jumptable at 0x033034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar17 = (undefined8 *)(*(code *)PTR_DAT_03c8cea0)(uVar18,uVar20,(int)uVar25 * auVar30._8_4_)
      ;
      return puVar17;
    }
  }
  auVar30 = func_0x00f78af4();
  uVar22 = auVar30._8_8_;
  lVar12 = auVar30._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar25;
  *(long *)((long)register0x00000008 + -200) = lVar15;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar20;
  *(ulong *)((long)register0x00000008 + -0xb8) = uVar16;
  *(undefined1 **)((long)register0x00000008 + -0xb0) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0xa8) = &FlatBuffers_ByteBuffer__CopyByteArray;
  uVar25 = 0x3eb5000;
  if ((bRam0000000003eb5cd3 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd3 = 1;
  }
  if (uVar22 == 0) {
code_r0x016cd29c:
    func_0x00f78af4();
  }
  else if ((int)uVar14 <= *(int *)(uVar22 + 0x18)) {
    uVar25 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') goto code_r0x016cd33c;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar12,0,uVar14);
    if (*(long *)(lVar12 + 0x10) != 0) {
      auVar30._8_4_ = *(undefined4 *)(lVar12 + 0x18);
      auVar30._0_8_ = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x10);
      auVar30._12_4_ = 0;
      uVar25 = 0;
      puVar27 = *(undefined1 **)((long)register0x00000008 + -0xb0);
      puVar28 = *(undefined **)((long)register0x00000008 + -0xa8);
      unaff_x20 = *(long **)((long)register0x00000008 + -0xc0);
      lVar15 = *(long *)((long)register0x00000008 + -0xb8);
      unaff_x22 = *(ulong *)((long)register0x00000008 + -0xd0);
      unaff_x21 = *(ulong *)((long)register0x00000008 + -200);
code_r0x029387b8:
      do {
        uVar23 = auVar30._8_8_;
        lVar12 = auVar30._0_8_;
        *(ulong *)(puVar8 + -0x40) = unaff_x24;
        *(ulong *)(puVar8 + -0x38) = unaff_x23;
        *(ulong *)(puVar8 + -0x30) = unaff_x22;
        *(ulong *)(puVar8 + -0x28) = unaff_x21;
        *(long **)(puVar8 + -0x20) = unaff_x20;
        *(long *)(puVar8 + -0x18) = lVar15;
        *(undefined1 **)(puVar8 + -0x10) = puVar27;
        *(undefined **)(puVar8 + -8) = puVar28;
        if (lVar12 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar18 = func_0x00f78aec();
          uVar25 = 0x3d7b990;
code_r0x02938884:
          uVar25 = func_0x00f78a24(uVar25);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar18,uVar25,0);
          uVar25 = func_0x00f78a24(0x3d52be0);
          func_0x00f78ac0(uVar18,uVar25);
code_r0x029388b0:
          uVar25 = func_0x00f78a24(0x3d70548);
          uVar18 = /*Locale$$GetText*/ func_0x02af42b4(uVar25,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar19 = func_0x00f78aec();
          uVar25 = 0x3d7b998;
code_r0x02938954:
          auVar30._8_8_ = unaff_x22;
          auVar30._0_8_ = unaff_x23;
          uVar20 = func_0x00f78a24(uVar25);
          uVar25 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar19,uVar20,uVar18);
        }
        else {
          unaff_x21 = uVar22;
          if (uVar22 == 0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar18 = func_0x00f78aec();
            uVar25 = 0x3d78c30;
            goto code_r0x02938884;
          }
          unaff_x22 = uVar23;
          if (auVar30._8_4_ < 0) goto code_r0x029388b0;
          iVar24 = (int)uVar25;
          if (iVar24 < 0) {
            uVar25 = func_0x00f78a24(0x3d70548);
            uVar18 = /*Locale$$GetText*/ func_0x02af42b4(uVar25,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar19 = func_0x00f78aec();
            uVar25 = 0x3d78c38;
            goto code_r0x02938954;
          }
          iVar26 = (int)uVar14;
          if (iVar26 < 0) {
            uVar25 = func_0x00f78a24(0x3d70548);
            uVar18 = /*Locale$$GetText*/ func_0x02af42b4(uVar25,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar19 = func_0x00f78aec();
            uVar25 = 0x3d78638;
            goto code_r0x02938954;
          }
          puVar17 = (undefined8 *)func_0x00f836d8(lVar12,uVar23,uVar22);
          if (((ulong)puVar17 & 1) != 0) {
            return puVar17;
          }
          iVar10 = /*System.Buffer$$ByteLength*/ func_0x0294274c(lVar12);
          if ((auVar30._8_4_ <= iVar10 - iVar26) &&
             (puVar17 = (undefined8 *)/*System.Buffer$$ByteLength*/ func_0x0294274c(uVar22), iVar24 <= (int)puVar17 - iVar26)) {
            return puVar17;
          }
          uVar18 = func_0x00f78a24(0x3d70ad8);
          uVar18 = /*Locale$$GetText*/ func_0x02af42b4(uVar18,0);
          func_0x00f78a24(0x3d1fce8);
          uVar19 = func_0x00f78aec();
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar19,uVar18,0);
        }
        uVar20 = func_0x00f78a24(0x3d52be0);
        uVar11 = func_0x00f78ac0(uVar19,uVar20);
        *(long *)(puVar8 + -0x70) = auVar30._8_8_;
        *(ulong *)(puVar8 + -0x68) = unaff_x21;
        *(undefined8 *)(puVar8 + -0x60) = uVar19;
        *(undefined8 *)(puVar8 + -0x58) = uVar18;
        *(undefined1 **)(puVar8 + -0x50) = puVar8 + -0x10;
        *(undefined **)(puVar8 + -0x48) = &Mono_Math_BigInteger__GenerateRandom;
        if ((bRam0000000003eb8f4c & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          bRam0000000003eb8f4c = 1;
        }
        if (((*(ushort *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x20 = (long *)/*Mono.Math.BigInteger$$get_Rng*/ func_0x02938598();
        *(ulong *)(puVar8 + -0x80) = unaff_x24;
        *(long *)(puVar8 + -0x78) = auVar30._0_8_;
        *(undefined8 *)(puVar8 + -0x70) = *(undefined8 *)(puVar8 + -0x70);
        *(undefined8 *)(puVar8 + -0x68) = *(undefined8 *)(puVar8 + -0x68);
        *(undefined8 *)(puVar8 + -0x60) = *(undefined8 *)(puVar8 + -0x60);
        *(undefined8 *)(puVar8 + -0x58) = *(undefined8 *)(puVar8 + -0x58);
        *(undefined8 *)(puVar8 + -0x50) = *(undefined8 *)(puVar8 + -0x50);
        *(undefined8 *)(puVar8 + -0x48) = *(undefined8 *)(puVar8 + -0x48);
        puVar27 = puVar8 + -0x50;
        if ((bRam0000000003eb8f4b & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          func_0x00f78a20(0x3d1eda0);
          bRam0000000003eb8f4b = 1;
        }
        uVar1 = (int)uVar11 >> 5;
        unaff_x23 = (ulong)(uVar11 & 0x1f);
        if ((uVar11 & 0x1f) != 0) {
          uVar1 = uVar1 + 1;
        }
        unaff_x24 = (ulong)uVar1;
        lVar15 = func_0x00f78aec(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078);
        uVar22 = (ulong)(uVar1 + 1);
        /*Mono.Math.BigInteger$$.ctor*/ func_0x029379ec();
        unaff_x21 = (ulong)(uVar1 << 2);
        unaff_x22 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,unaff_x21);
        uVar23 = 0x3d20078;
        if (unaff_x20 == (long *)0x0) {
code_r0x029387a8:
          unaff_x22 = uVar23;
          func_0x00f78af4();
          uVar18 = func_0x00f78b24();
          puVar28 = &System_Buffer__BlockCopy;
          auVar30 = func_0x00f78ac0(uVar18,0);
          puVar8 = puVar8 + -0x80;
          goto code_r0x029387b8;
        }
        uVar22 = *(ulong *)(*unaff_x20 + 0x1a0);
        (**(code **)(*unaff_x20 + 0x198))(unaff_x20,unaff_x22);
        uVar23 = unaff_x22;
        if (lVar15 == 0) goto code_r0x029387a8;
        uVar22 = *(ulong *)(lVar15 + 0x18);
        auVar30._8_8_ = 0;
        auVar30._0_8_ = unaff_x22;
        uVar25 = 0;
        puVar28 = &UNK_02938710;
        puVar8 = puVar8 + -0x80;
        uVar14 = unaff_x21;
      } while( true );
    }
    goto code_r0x016cd29c;
  }
  *(int *)((long)register0x00000008 + -0xd4) = (int)uVar14;
  uVar18 = func_0x00f78a24(0x3d22910);
  lVar12 = func_0x00f78ae0(uVar18,(undefined1 *)((long)register0x00000008 + -0xd4));
  func_0x00055e5c(uVar22);
  *(int *)((long)register0x00000008 + -0xd8) = (int)*(undefined8 *)(uVar22 + 0x18);
  uVar18 = func_0x00f78a24(0x3d22910);
  uVar18 = func_0x00f78ae0(uVar18,(undefined1 *)((long)register0x00000008 + -0xd8));
  uVar19 = func_0x00f78a24(0x3d72a68);
  uVar18 = /*System.String$$Format*/ func_0x029bcac4(uVar19,lVar12,uVar18,0);
  func_0x00f78a24(0x3d1fce8);
  uVar14 = func_0x00f78aec();
  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar14,uVar18,0);
  uVar18 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar14,uVar18);
code_r0x016cd33c:
  func_0x00f78a24(0x3d238c8);
  uVar18 = func_0x00f78aec();
  uVar19 = func_0x00f78a24(0x3d69698);
  /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar18,uVar19,0);
  uVar19 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar18,uVar19);
  *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x138) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0x120) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x118) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x110) = uVar25;
  *(long *)((long)register0x00000008 + -0x108) = lVar12;
  *(ulong *)((long)register0x00000008 + -0x100) = uVar14;
  *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar18;
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
  lVar12 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, int>_TypeInfo*/ uRam0000000003d1c590);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(lVar12,uRam0000000003d30160);
  uVar25 = /*bool_var*/ uRam0000000003d19080;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar25,0);
  if (lVar12 == 0) {
    lVar12 = func_0x00f78af4();
    return *(undefined8 **)(lVar12 + 0x10);
  }
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar25,1,uRam0000000003d30168);
  uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*float_var*/ uRam0000000003d19e28,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar25,4,uRam0000000003d30168);
  uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*double_var*/ uRam0000000003d19388,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar25,8,uRam0000000003d30168);
  uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*sbyte_var*/ uRam0000000003d19d88,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar25,1,uRam0000000003d30168);
  uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*byte_var*/ uRam0000000003d190e0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar25,1,uRam0000000003d30168);
  uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*short_var*/ uRam0000000003d198b0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar25,2,uRam0000000003d30168);
  uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ushort_var*/ uRam0000000003d1a0a8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar25,2,uRam0000000003d30168);
  uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*int_var*/ uRam0000000003d198c0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar25,4,uRam0000000003d30168);
  uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*uint_var*/ uRam0000000003d1a0b8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar25,4,uRam0000000003d30168);
  uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ulong_var*/ uRam0000000003d1a0c8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar25,8,uRam0000000003d30168);
  uVar25 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*long_var*/ uRam0000000003d198d0,0);
  puVar17 = (undefined8 *)/*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar12,uVar25,8,uRam0000000003d30168);
  **(long **)(/*FlatBuffers.ByteBuffer_TypeInfo*/ lRam0000000003d203b0 + 0xb8) = lVar12;
  return puVar17;
}



// ============================================================
// RVA: 0x165cadc | Core.Networking.Vec3.CreateVec3
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

ulong Core_Networking_Vec3__CreateVec3
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
  undefined1 *unaff_x29;
  undefined1 ***pppuVar8;
  undefined *unaff_x30;
  undefined *puVar9;
  undefined4 extraout_s0;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long alStack_d0 [4];
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar2 = param_2;
  uVar10 = param_3;
  if ((bRam0000000003eb5871 & 1) == 0) {
    func_0x00f78a20(0x3d3f288);
    bRam0000000003eb5871 = 1;
  }
  if (param_5 == 0) {
    param_5 = func_0x00f78af4();
    puStack_48 = &Core_Networking_Vec4__CreateVec4;
    puStack_50 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb5872 & 1) == 0) {
      func_0x00f78a20(0x3d3f290);
      bRam0000000003eb5872 = 1;
    }
    if (param_5 == 0) {
      auVar11 = func_0x00f78af4();
      lVar7 = auVar11._8_8_;
      uStack_a0 = 0x3eb5000;
      pcStack_88 = Core_Networking_NetworkServicesOutput__WriteHostMigrationDone;
      pppuVar8 = &ppuStack_90;
      lStack_98 = param_5;
      ppuStack_90 = &puStack_50;
      if (lVar7 != 0) {
        /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(lVar7,0);
        uVar3 = Core_Networking_HostMigrationDone__CreateHostMigrationDone(lVar7,*param_7,param_8);
        uVar2 = Core_Networking_NetworkServicesOutput__HostUpdateHolderToFlatBuffer
                          (uVar3,lVar7,0xb,uVar3);
        lVar4 = Core_Networking_UpdateHolder__CreateUpdateHolder(lVar7,uVar2,0);
        puVar9 = (undefined *)0x165ccb8;
        puVar1 = &stack0xffffffffffffff50;
        while( true ) {
          lVar6 = lVar4;
          lVar4 = auVar11._8_8_;
          *(long *)(puVar1 + -0x20) = lVar7;
          *(long *)(puVar1 + -0x18) = auVar11._0_8_;
          *(undefined1 ****)(puVar1 + -0x10) = pppuVar8;
          *(undefined **)(puVar1 + -8) = puVar9;
          pppuVar8 = (undefined1 ***)(puVar1 + -0x10);
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar4,*(undefined4 *)(lVar4 + 0x20),4);
          uVar5 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar4,lVar6);
          if (*(long *)(lVar4 + 0x18) != 0) break;
          puVar9 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar12 = func_0x00f78af4();
          auVar11._8_8_ = auVar12._0_8_;
          auVar11._0_8_ = lVar4;
          puVar1 = puVar1 + -0x20;
          lVar4 = auVar12._8_8_;
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
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar10,param_5,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(uVar2,param_5,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,param_5,0);
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x29 = puStack_50;
    unaff_x30 = puStack_48;
  }
  else {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_5,4,0xc,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_3,param_5,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_2,param_5,0);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_1,param_5,0);
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((*(long *)(param_5 + 0x18) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_5 + 0x18) + 0x10), lVar7 != 0)) {
    return (ulong)(uint)(*(int *)(lVar7 + 0x18) - *(int *)(param_5 + 0x10));
  }
  lVar7 = func_0x00f78af4(param_5,0);
  return (ulong)*(byte *)(lVar7 + 0x48);
}



// ============================================================
// RVA: 0x1662dd8 | Core.Networking.Vec3.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_Vec3__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1662de0 | Core.Networking.Vec3.__init
// ============================================================

void Core_Networking_Vec3____init(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



