// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Group

// ============================================================
// RVA: 0x1668c10 | Core.Services.Group.OtherMembers
// ============================================================

void Core_Services_Group__OtherMembers(undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb58ca & 1) == 0) {
    func_0x00f78a20(0x3d3ebe0);
    bRam0000000003eb58ca = 1;
  }
  uVar2 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,8,0);
  if ((int)uVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0;
    iVar1 = /*FlatBuffers.Table$$__vector*/ func_0x016cf330(param_2,uVar2,0);
    uVar2 = /*FlatBuffers.Table$$__indirect*/ func_0x016cf210(param_2,iVar1 + param_3 * 4,0);
    auVar3 = /*Core.Services.Player$$__assign*/ func_0x0167d6bc(&uStack_40,uVar2,*(undefined8 *)(param_2 + 8),0);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    /*System.Nullable<Player>$$.ctor*/ func_0x0265d8a4(param_1,auVar3._0_8_,auVar3._8_8_,uRam0000000003d3ebe0);
  }
  return;
}



// ============================================================
// RVA: 0x1668ce8 | Core.Services.Group.get_OtherMembersLength
// ============================================================

/* WARNING: Possible PIC construction at 0x016cf3cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016cf3d0) */
/* WARNING: Removing unreachable block (ram,0x016cf444) */
/* WARNING: Removing unreachable block (ram,0x016cf464) */
/* WARNING: Removing unreachable block (ram,0x016cf474) */
/* WARNING: Removing unreachable block (ram,0x016cf480) */
/* WARNING: Removing unreachable block (ram,0x016cf4ec) */
/* WARNING: Removing unreachable block (ram,0x016cf4f0) */
/* WARNING: Removing unreachable block (ram,0x016cf5a0) */
/* WARNING: Removing unreachable block (ram,0x016cf5b4) */
/* WARNING: Removing unreachable block (ram,0x016cf6ac) */
/* WARNING: Removing unreachable block (ram,0x016cf6e0) */
/* WARNING: Removing unreachable block (ram,0x016cf6f4) */
/* WARNING: Removing unreachable block (ram,0x016cf6f8) */
/* WARNING: Removing unreachable block (ram,0x016cf720) */
/* WARNING: Removing unreachable block (ram,0x016cf73c) */
/* WARNING: Removing unreachable block (ram,0x016cf744) */
/* WARNING: Removing unreachable block (ram,0x016cf748) */
/* WARNING: Removing unreachable block (ram,0x016cf760) */
/* WARNING: Removing unreachable block (ram,0x016cf770) */
/* WARNING: Removing unreachable block (ram,0x016cf7bc) */
/* WARNING: Removing unreachable block (ram,0x016cf7c8) */
/* WARNING: Removing unreachable block (ram,0x016cf788) */
/* WARNING: Removing unreachable block (ram,0x016cf794) */
/* WARNING: Removing unreachable block (ram,0x016cf7a0) */
/* WARNING: Removing unreachable block (ram,0x016cf7a4) */
/* WARNING: Removing unreachable block (ram,0x016cf5b8) */
/* WARNING: Removing unreachable block (ram,0x016cf624) */
/* WARNING: Removing unreachable block (ram,0x016cf62c) */
/* WARNING: Removing unreachable block (ram,0x016cf630) */
/* WARNING: Removing unreachable block (ram,0x016cf648) */
/* WARNING: Removing unreachable block (ram,0x016cf65c) */
/* WARNING: Removing unreachable block (ram,0x016cf680) */
/* WARNING: Removing unreachable block (ram,0x016cf690) */
/* WARNING: Removing unreachable block (ram,0x016cf694) */
/* WARNING: Removing unreachable block (ram,0x016cf494) */
/* WARNING: Removing unreachable block (ram,0x016cf4b4) */
/* WARNING: Removing unreachable block (ram,0x016cf4cc) */
/* WARNING: Removing unreachable block (ram,0x016cf3ec) */
/* WARNING: Removing unreachable block (ram,0x02616890) */

ulong Core_Services_Group__get_OtherMembersLength(int *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int *extraout_x8;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar5 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,8,0);
  if ((int)uVar5 == 0) {
    return uVar5;
  }
  puVar7 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 2) != 0) {
    uVar1 = *param_1 + (int)uVar5;
    unaff_x20 = (ulong)uVar1;
    iVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),unaff_x20,4);
    if (*(long *)(param_1 + 2) != 0) {
      uVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),uVar1 + iVar3,4);
      return uVar5;
    }
  }
  puVar8 = &FlatBuffers_Table____vector;
  auVar9 = func_0x00f78af4();
  puVar2 = &stack0xffffffffffffffe0;
  while( true ) {
    *(ulong *)(puVar2 + -0x20) = unaff_x20;
    *(int **)(puVar2 + -0x18) = param_1;
    *(undefined1 **)(puVar2 + -0x10) = puVar7;
    *(undefined **)(puVar2 + -8) = puVar8;
    lVar6 = *(long *)(auVar9._0_8_ + 2);
    if (lVar6 != 0) {
      iVar3 = *auVar9._0_8_ + auVar9._8_4_;
      iVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar6,iVar3,4);
      return (ulong)(iVar3 + iVar4 + 4);
    }
    auVar10 = func_0x00f78af4();
    uVar5 = auVar10._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x21;
    *(ulong *)(puVar2 + -0x40) = unaff_x20;
    *(int **)(puVar2 + -0x38) = param_1;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_Table____vector_as_arraysegment;
    puVar7 = puVar2 + -0x30;
    if ((bRam0000000003eb5cd9 & 1) == 0) {
      func_0x00f78a20(0x3d3e500);
      bRam0000000003eb5cd9 = 1;
    }
    unaff_x22 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(uVar5,auVar10._8_8_);
    auVar9._8_8_ = unaff_x22;
    auVar9._0_8_ = uVar5;
    if ((int)unaff_x22 == 0) break;
    puVar8 = &UNK_016cf3d0;
    puVar2 = puVar2 + -0x50;
    param_1 = extraout_x8;
    unaff_x20 = uVar5;
    unaff_x21 = auVar10._8_8_;
  }
  extraout_x8[0] = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  extraout_x8[3] = 0;
  extraout_x8[4] = 0;
  extraout_x8[5] = 0;
  return unaff_x22;
}



// ============================================================
// RVA: 0x1668d2c | Core.Services.Group.get_Id
// ============================================================

/* WARNING: Possible PIC construction at 0x016cf3cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016cf3d0) */
/* WARNING: Removing unreachable block (ram,0x016cf444) */
/* WARNING: Removing unreachable block (ram,0x016cf464) */
/* WARNING: Removing unreachable block (ram,0x016cf474) */
/* WARNING: Removing unreachable block (ram,0x016cf480) */
/* WARNING: Removing unreachable block (ram,0x016cf4ec) */
/* WARNING: Removing unreachable block (ram,0x016cf4f0) */
/* WARNING: Removing unreachable block (ram,0x016cf5a0) */
/* WARNING: Removing unreachable block (ram,0x016cf5b4) */
/* WARNING: Removing unreachable block (ram,0x016cf6ac) */
/* WARNING: Removing unreachable block (ram,0x016cf6e0) */
/* WARNING: Removing unreachable block (ram,0x016cf6f4) */
/* WARNING: Removing unreachable block (ram,0x016cf6f8) */
/* WARNING: Removing unreachable block (ram,0x016cf720) */
/* WARNING: Removing unreachable block (ram,0x016cf73c) */
/* WARNING: Removing unreachable block (ram,0x016cf744) */
/* WARNING: Removing unreachable block (ram,0x016cf748) */
/* WARNING: Removing unreachable block (ram,0x016cf760) */
/* WARNING: Removing unreachable block (ram,0x016cf770) */
/* WARNING: Removing unreachable block (ram,0x016cf7bc) */
/* WARNING: Removing unreachable block (ram,0x016cf7c8) */
/* WARNING: Removing unreachable block (ram,0x016cf788) */
/* WARNING: Removing unreachable block (ram,0x016cf794) */
/* WARNING: Removing unreachable block (ram,0x016cf7a0) */
/* WARNING: Removing unreachable block (ram,0x016cf7a4) */
/* WARNING: Removing unreachable block (ram,0x016cf5b8) */
/* WARNING: Removing unreachable block (ram,0x016cf624) */
/* WARNING: Removing unreachable block (ram,0x016cf62c) */
/* WARNING: Removing unreachable block (ram,0x016cf630) */
/* WARNING: Removing unreachable block (ram,0x016cf648) */
/* WARNING: Removing unreachable block (ram,0x016cf65c) */
/* WARNING: Removing unreachable block (ram,0x016cf680) */
/* WARNING: Removing unreachable block (ram,0x016cf690) */
/* WARNING: Removing unreachable block (ram,0x016cf694) */
/* WARNING: Removing unreachable block (ram,0x016cf494) */
/* WARNING: Removing unreachable block (ram,0x016cf4b4) */
/* WARNING: Removing unreachable block (ram,0x016cf4cc) */
/* WARNING: Removing unreachable block (ram,0x016cf3ec) */
/* WARNING: Removing unreachable block (ram,0x02616890) */

ulong Core_Services_Group__get_Id(int *param_1)

{
  uint uVar1;
  int **ppiVar2;
  undefined1 *puVar3;
  short sVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  int *extraout_x8;
  int *piVar13;
  int *unaff_x20;
  int *piVar14;
  undefined8 unaff_x21;
  ulong unaff_x22;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  int *piStack_40;
  int *piStack_38;
  undefined1 *puVar4;
  
  iVar6 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,4,0);
  if (iVar6 == 0) {
    return 0;
  }
  uVar1 = *param_1 + iVar6;
  if (*(long *)(param_1 + 2) != 0) {
    iVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),(int *)(ulong)uVar1,4);
    unaff_x20 = (int *)(ulong)uVar1;
    if (*(long *)(param_1 + 2) != 0) {
      unaff_x20 = (int *)(ulong)(iVar6 + uVar1);
      uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),unaff_x20,4);
      lVar11 = *(long *)(param_1 + 2);
      if (lVar11 != 0) {
        plVar8 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
        lVar11 = *(long *)(lVar11 + 0x10);
        if ((lVar11 != 0) && (plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (**(code **)(*plVar8 + 0x348))
                            (plVar8,*(undefined8 *)(lVar11 + 0x10),iVar6 + uVar1 + 4,uVar10,
                             *(undefined8 *)(*plVar8 + 0x350));
          return uVar9;
        }
        auVar16 = func_0x00f78af4();
        piStack_38 = (int *)&FlatBuffers_ByteBuffer__GetShort;
        piStack_40 = (int *)&stack0xfffffffffffffff0;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar16._0_8_,auVar16._8_8_,2);
        return (ulong)(uint)(int)sVar5;
      }
    }
  }
  auVar18 = func_0x00f78af4();
  piVar13 = auVar18._0_8_;
  piVar14 = unaff_x20;
  piStack_40 = unaff_x20;
  piStack_38 = param_1;
  if (*(long *)(piVar13 + 2) != 0) {
    uVar1 = *piVar13 + auVar18._8_4_;
    piVar14 = (int *)(ulong)uVar1;
    iVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar13 + 2),piVar14,4);
    if (*(long *)(piVar13 + 2) != 0) {
      uVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar13 + 2),uVar1 + iVar6,4);
      return uVar9;
    }
  }
  puVar15 = &FlatBuffers_Table____vector;
  auVar16 = func_0x00f78af4();
  ppiVar2 = &piStack_40;
  puVar3 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar4 = (undefined1 *)ppiVar2;
    *(int **)(puVar4 + -0x20) = piVar14;
    *(int **)(puVar4 + -0x18) = piVar13;
    *(undefined1 **)(puVar4 + -0x10) = puVar3 + -0x30;
    *(undefined **)(puVar4 + -8) = puVar15;
    lVar11 = *(long *)(auVar16._0_8_ + 2);
    if (lVar11 != 0) {
      iVar6 = *auVar16._0_8_ + auVar16._8_4_;
      iVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,iVar6,4);
      return (ulong)(iVar6 + iVar7 + 4);
    }
    auVar17 = func_0x00f78af4();
    piVar12 = auVar17._0_8_;
    *(ulong *)(puVar4 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x48) = unaff_x21;
    *(int **)(puVar4 + -0x40) = piVar14;
    *(int **)(puVar4 + -0x38) = piVar13;
    *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x28) = &FlatBuffers_Table____vector_as_arraysegment;
    if ((bRam0000000003eb5cd9 & 1) == 0) {
      func_0x00f78a20(0x3d3e500);
      bRam0000000003eb5cd9 = 1;
    }
    unaff_x22 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,auVar17._8_8_);
    auVar16._8_8_ = unaff_x22;
    auVar16._0_8_ = piVar12;
    if ((int)unaff_x22 == 0) break;
    puVar15 = &UNK_016cf3d0;
    ppiVar2 = (int **)(puVar4 + -0x50);
    piVar13 = extraout_x8;
    piVar14 = piVar12;
    unaff_x21 = auVar17._8_8_;
    puVar3 = puVar4;
  }
  extraout_x8[0] = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  extraout_x8[3] = 0;
  extraout_x8[4] = 0;
  extraout_x8[5] = 0;
  return unaff_x22;
}



// ============================================================
// RVA: 0x1668d78 | Core.Services.Group.get_Leader
// ============================================================

void Core_Services_Group__get_Leader(undefined8 *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb58c9 & 1) == 0) {
    func_0x00f78a20(0x3d3ebe0);
    bRam0000000003eb58c9 = 1;
  }
  iVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_2,6,0);
  if (iVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0;
    uVar2 = /*FlatBuffers.Table$$__indirect*/ func_0x016cf210(param_2,*param_2 + iVar1,0);
    auVar3 = /*Core.Services.Player$$__assign*/ func_0x0167d6bc(&uStack_40,uVar2,*(undefined8 *)(param_2 + 2),0);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    /*System.Nullable<Player>$$.ctor*/ func_0x0265d8a4(param_1,auVar3._0_8_,auVar3._8_8_,uRam0000000003d3ebe0);
  }
  return;
}



// ============================================================
// RVA: 0x166c008 | Core.Services.Group.get_ByteBuffer
// ============================================================

undefined8 Core_Services_Group__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x166c010 | Core.Services.Group.GetRootAsGroup
// ============================================================

undefined1  [16] Core_Services_Group__GetRootAsGroup(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  
  uVar3 = 0;
  if (param_1 != 0) {
    iVar1 = /*FlatBuffers.ByteBuffer$$GetInt*/ func_0x016ccdec(param_1,*(undefined4 *)(param_1 + 0x18),0);
    auVar4._4_4_ = 0;
    auVar4._0_4_ = *(int *)(param_1 + 0x18) + iVar1;
    auVar4._8_8_ = param_1;
    return auVar4;
  }
  auVar6 = func_0x00f78af4();
  puVar2 = auVar6._0_8_;
  *(int *)puVar2 = auVar6._8_4_;
  puVar2[1] = uVar3;
  auVar5._0_8_ = *puVar2;
  auVar5._8_8_ = uVar3;
  return auVar5;
}



// ============================================================
// RVA: 0x166c01c | Core.Services.Group.GetRootAsGroup
// ============================================================

undefined1  [16] Core_Services_Group__GetRootAsGroup(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  
  if (param_1 != 0) {
    iVar1 = /*FlatBuffers.ByteBuffer$$GetInt*/ func_0x016ccdec(param_1,*(undefined4 *)(param_1 + 0x18),0);
    auVar3._0_8_ = param_2 & 0xffffffff00000000 | (ulong)(uint)(*(int *)(param_1 + 0x18) + iVar1);
    auVar3._8_8_ = param_1;
    return auVar3;
  }
  auVar5 = func_0x00f78af4();
  puVar2 = auVar5._0_8_;
  *(int *)puVar2 = auVar5._8_4_;
  puVar2[1] = param_3;
  auVar4._0_8_ = *puVar2;
  auVar4._8_8_ = param_3;
  return auVar4;
}



// ============================================================
// RVA: 0x166c060 | Core.Services.Group.__assign
// ============================================================

undefined1  [16]
Core_Services_Group____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x166c074 | Core.Services.Group.__init
// ============================================================

void Core_Services_Group____init(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x166c080 | Core.Services.Group.GetIdBytes
// ============================================================

void Core_Services_Group__GetIdBytes(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  /*FlatBuffers.Table$$__vector_as_arraysegment*/ func_0x016cf374(&uStack_38,param_2,4,0);
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  return;
}



// ============================================================
// RVA: 0x166c0c4 | Core.Services.Group.GetIdArray
// ============================================================

long Core_Services_Group__GetIdArray(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 **ppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb58c8 & 1) == 0) {
    func_0x00f78a20(0x3d5ded0);
    bRam0000000003eb58c8 = 1;
  }
  lVar3 = lRam0000000003d5ded0;
  uVar6 = 4;
  uVar1 = 0x3d201a0;
  if ((bRam0000000003eb6695 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb6695 = 1;
  }
  if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
    func_0x00f78a24(0x3d238d8);
    lVar3 = func_0x00f78aec();
    uVar2 = func_0x00f78a24(0x3d6d410);
    /*System.NotSupportedException$$.ctor*/ func_0x029503bc(lVar3,uVar2,0);
    uVar2 = func_0x00f78a24(0x3d5ded0);
    func_0x00f78ac0(lVar3,uVar2);
  }
  else {
    uVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,4,0);
    if ((int)uVar1 == 0) {
      return 0;
    }
    uVar6 = /*FlatBuffers.Table$$__vector*/ func_0x016cf330(param_1,uVar1,0);
    uVar2 = /*FlatBuffers.Table$$__vector_len*/ func_0x016cf2dc(param_1,uVar1,0);
    if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x018e4728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar3 = (**(code **)**(undefined8 **)(lVar3 + 0x30))(*(long *)(param_1 + 8),uVar6,uVar2);
      return lVar3;
    }
  }
  auVar9 = func_0x00f78af4();
  uStack_78 = auVar9._0_8_;
  puStack_48 = &System_Threading_Tasks_Task__FromCancellation_bool_;
  uStack_70 = uVar1;
  uStack_68 = uVar6;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  puStack_50 = &stack0xfffffffffffffff0;
  uVar4 = /*System.Threading.CancellationToken$$get_IsCancellationRequested*/ func_0x0294aac4(&uStack_78,0);
  uVar2 = uStack_78;
  if ((uVar4 & 1) != 0) {
    lVar3 = **(long **)(auVar9._8_8_ + 0x30);
    if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar3);
    }
    lVar3 = func_0x00f78aec(lVar3);
    (*(code *)**(undefined8 **)(*(long *)(auVar9._8_8_ + 0x30) + 8))(lVar3,1,0,0,uVar2);
    return lVar3;
  }
  func_0x00f78a24(0x3d1fcf8);
  uVar2 = func_0x00f78aec();
  uVar5 = func_0x00f78a24(0x3d781b8);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(uVar2,uVar5,0);
  uVar5 = func_0x00f78a24(0x3d5df30);
  auVar9 = func_0x00f78ac0(uVar2,uVar5);
  lVar8 = auVar9._8_8_;
  lVar3 = auVar9._0_8_;
  puStack_88 = &System_Threading_Tasks_Task__FromCancellation_int_;
  uStack_b0 = uVar1;
  uStack_a8 = uVar6;
  lStack_a0 = param_1;
  uStack_98 = uVar2;
  ppuStack_90 = &puStack_50;
  if (lVar3 == 0) {
    func_0x00f78a24(0x3d1fcf0);
    lVar3 = func_0x00f78aec();
    uVar2 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(lVar3,uVar2,0);
    uVar2 = func_0x00f78a24(0x3d5df38);
    func_0x00f78ac0(lVar3,uVar2);
  }
  else {
    lVar7 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    lVar7 = func_0x00f78aec(lVar7);
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))();
    uVar6 = 0;
    param_1 = lVar8;
    if (lVar7 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x10))
                (lVar7,*(undefined8 *)(lVar3 + 0x88),lVar3);
      return lVar7;
    }
  }
  auVar9 = func_0x00f78af4();
  uStack_e8 = auVar9._0_8_;
  puStack_b8 = &System_Threading_Tasks_Task__FromCancellation_int_;
  uStack_e0 = uVar1;
  uStack_d8 = uVar6;
  lStack_d0 = param_1;
  lStack_c8 = lVar3;
  ppuStack_c0 = &ppuStack_90;
  uVar4 = /*System.Threading.CancellationToken$$get_IsCancellationRequested*/ func_0x0294aac4(&uStack_e8,0);
  uVar2 = uStack_e8;
  if ((uVar4 & 1) != 0) {
    lVar3 = **(long **)(auVar9._8_8_ + 0x30);
    if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar3);
    }
    lVar3 = func_0x00f78aec(lVar3);
    (*(code *)**(undefined8 **)(*(long *)(auVar9._8_8_ + 0x30) + 8))(lVar3,1,0,0,uVar2);
    return lVar3;
  }
  func_0x00f78a24(0x3d1fcf8);
  uVar2 = func_0x00f78aec();
  uVar5 = func_0x00f78a24(0x3d781b8);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(uVar2,uVar5,0);
  uVar5 = func_0x00f78a24(0x3d5df40);
  auVar9 = func_0x00f78ac0(uVar2,uVar5);
  lVar8 = auVar9._8_8_;
  lVar3 = auVar9._0_8_;
  puStack_f8 = &System_Threading_Tasks_Task__FromCancellation_object_;
  uStack_120 = uVar1;
  uStack_118 = uVar6;
  lStack_110 = param_1;
  uStack_108 = uVar2;
  ppuStack_100 = &ppuStack_c0;
  if (lVar3 == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar2 = func_0x00f78aec();
    auVar9._8_8_ = param_1;
    auVar9._0_8_ = uVar2;
    uVar5 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar2,uVar5,0);
    uVar5 = func_0x00f78a24(0x3d5df48);
    func_0x00f78ac0(uVar2,uVar5);
  }
  else {
    lVar7 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    lVar7 = func_0x00f78aec(lVar7);
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))();
    uVar6 = 0;
    if (lVar7 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x10))
                (lVar7,*(undefined8 *)(lVar3 + 0x88),lVar3);
      return lVar7;
    }
  }
  auVar10 = func_0x00f78af4();
  uStack_158 = auVar10._0_8_;
  puStack_128 = &System_Threading_Tasks_Task__FromCancellation_object_;
  uStack_150 = uVar1;
  uStack_148 = uVar6;
  uStack_140 = auVar9._8_8_;
  uStack_138 = auVar9._0_8_;
  ppuStack_130 = &ppuStack_100;
  uVar4 = /*System.Threading.CancellationToken$$get_IsCancellationRequested*/ func_0x0294aac4(&uStack_158,0);
  uVar1 = uStack_158;
  if ((uVar4 & 1) != 0) {
    lVar3 = **(long **)(auVar10._8_8_ + 0x30);
    if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar3);
    }
    lVar3 = func_0x00f78aec(lVar3);
    (*(code *)**(undefined8 **)(*(long *)(auVar10._8_8_ + 0x30) + 8))(lVar3,1,0,0,uVar1);
    return lVar3;
  }
  func_0x00f78a24(0x3d1fcf8);
  uVar1 = func_0x00f78aec();
  uVar6 = func_0x00f78a24(0x3d781b8);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a524(uVar1,uVar6,0);
  uVar6 = func_0x00f78a24(0x3d5df50);
  auVar9 = func_0x00f78ac0(uVar1,uVar6);
  lVar8 = auVar9._8_8_;
  lVar3 = auVar9._0_8_;
  if (lVar3 == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar1 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar1,uVar6,0);
    uVar6 = func_0x00f78a24(0x3d5df58);
    func_0x00f78ac0(uVar1,uVar6);
  }
  else {
    lVar7 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar7 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar7);
    }
    lVar7 = func_0x00f78aec(lVar7);
    (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 8))();
    if (lVar7 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar8 + 0x30) + 0x10))
                (lVar7,*(undefined8 *)(lVar3 + 0x88),lVar3);
      return lVar7;
    }
  }
  auVar9 = func_0x00f78af4();
  lVar3 = auVar9._8_8_;
  if (auVar9._0_8_ == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar1 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar1,uVar6,0);
    uVar6 = func_0x00f78a24(0x3d5df60);
    func_0x00f78ac0(uVar1,uVar6);
  }
  else {
    lVar8 = **(long **)(lVar3 + 0x30);
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    lVar8 = func_0x00f78aec(lVar8);
    (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    if (lVar8 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 0x10))(lVar8,auVar9._0_8_);
      return lVar8;
    }
  }
  auVar9 = func_0x00f78af4();
  lVar3 = auVar9._8_8_;
  if (auVar9._0_8_ == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar1 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar1,uVar6,0);
    uVar6 = func_0x00f78a24(0x3d5df68);
    func_0x00f78ac0(uVar1,uVar6);
  }
  else {
    lVar8 = **(long **)(lVar3 + 0x30);
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    lVar8 = func_0x00f78aec(lVar8);
    (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    if (lVar8 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 0x10))(lVar8,auVar9._0_8_);
      return lVar8;
    }
  }
  auVar9 = func_0x00f78af4();
  lVar3 = auVar9._8_8_;
  if (auVar9._0_8_ == 0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar1 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d791a0);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar1,uVar6,0);
    uVar6 = func_0x00f78a24(0x3d5df70);
    func_0x00f78ac0(uVar1,uVar6);
  }
  else {
    lVar8 = **(long **)(lVar3 + 0x30);
    if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar8);
    }
    lVar8 = func_0x00f78aec(lVar8);
    (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 8))();
    if (lVar8 != 0) {
      (*(code *)**(undefined8 **)(*(long *)(lVar3 + 0x30) + 0x10))(lVar8,auVar9._0_8_);
      return lVar8;
    }
  }
  auVar9 = func_0x00f78af4();
  lVar3 = **(long **)(auVar9._8_8_ + 0x30);
  if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
    func_0x00fac028(lVar3);
  }
  lVar3 = func_0x00f78aec(lVar3);
  (*(code *)**(undefined8 **)(*(long *)(auVar9._8_8_ + 0x30) + 8))(lVar3,auVar9._0_8_);
  return lVar3;
}



// ============================================================
// RVA: 0x166c11c | Core.Services.Group.CreateGroup
// ============================================================

/* WARNING: Possible PIC construction at 0x0166c148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166c160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cebe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cec2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ced5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cee1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166c290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166c354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x0166c358) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x0166c294) */
/* WARNING: Removing unreachable block (ram,0x0166c2a0) */
/* WARNING: Removing unreachable block (ram,0x0166c2a8) */
/* WARNING: Removing unreachable block (ram,0x0166c2c4) */
/* WARNING: Removing unreachable block (ram,0x0166c2d0) */
/* WARNING: Removing unreachable block (ram,0x0166c2dc) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016ce46c) */
/* WARNING: Removing unreachable block (ram,0x016ce3a4) */
/* WARNING: Removing unreachable block (ram,0x016ce3a8) */
/* WARNING: Removing unreachable block (ram,0x016ce3b4) */
/* WARNING: Removing unreachable block (ram,0x016ce320) */
/* WARNING: Removing unreachable block (ram,0x016ced00) */
/* WARNING: Removing unreachable block (ram,0x016ced04) */
/* WARNING: Removing unreachable block (ram,0x016ced10) */
/* WARNING: Removing unreachable block (ram,0x016ced20) */
/* WARNING: Removing unreachable block (ram,0x016ced28) */
/* WARNING: Removing unreachable block (ram,0x016cef64) */
/* WARNING: Removing unreachable block (ram,0x016cef48) */
/* WARNING: Removing unreachable block (ram,0x016cef70) */
/* WARNING: Removing unreachable block (ram,0x016cef78) */
/* WARNING: Removing unreachable block (ram,0x016cef10) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */
/* WARNING: Removing unreachable block (ram,0x016cee20) */
/* WARNING: Removing unreachable block (ram,0x016cee2c) */
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016ced60) */
/* WARNING: Removing unreachable block (ram,0x016cec30) */
/* WARNING: Removing unreachable block (ram,0x016cec38) */
/* WARNING: Removing unreachable block (ram,0x016cec44) */
/* WARNING: Removing unreachable block (ram,0x016cebe8) */
/* WARNING: Removing unreachable block (ram,0x016cec48) */
/* WARNING: Removing unreachable block (ram,0x016cebf0) */
/* WARNING: Removing unreachable block (ram,0x016cec64) */
/* WARNING: Removing unreachable block (ram,0x016cec6c) */
/* WARNING: Removing unreachable block (ram,0x016cec78) */
/* WARNING: Removing unreachable block (ram,0x016ceca8) */
/* WARNING: Removing unreachable block (ram,0x016cec84) */
/* WARNING: Removing unreachable block (ram,0x016cec8c) */
/* WARNING: Removing unreachable block (ram,0x016cec94) */
/* WARNING: Removing unreachable block (ram,0x016ced3c) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cebfc) */
/* WARNING: Removing unreachable block (ram,0x016cec00) */
/* WARNING: Removing unreachable block (ram,0x016cec08) */
/* WARNING: Removing unreachable block (ram,0x016cec20) */
/* WARNING: Removing unreachable block (ram,0x016ceb78) */
/* WARNING: Removing unreachable block (ram,0x016cec58) */
/* WARNING: Removing unreachable block (ram,0x016cecac) */
/* WARNING: Removing unreachable block (ram,0x016cecb8) */
/* WARNING: Removing unreachable block (ram,0x016cecd8) */
/* WARNING: Removing unreachable block (ram,0x016cecf0) */
/* WARNING: Removing unreachable block (ram,0x016cec60) */
/* WARNING: Removing unreachable block (ram,0x016ceb84) */
/* WARNING: Removing unreachable block (ram,0x016ceb88) */
/* WARNING: Removing unreachable block (ram,0x016ceb90) */
/* WARNING: Removing unreachable block (ram,0x016ceb98) */
/* WARNING: Removing unreachable block (ram,0x016ceba0) */
/* WARNING: Removing unreachable block (ram,0x016cebac) */
/* WARNING: Removing unreachable block (ram,0x016cebd8) */
/* WARNING: Removing unreachable block (ram,0x016ceb54) */
/* WARNING: Removing unreachable block (ram,0x016ceb08) */
/* WARNING: Removing unreachable block (ram,0x016ceb10) */
/* WARNING: Removing unreachable block (ram,0x016ceb1c) */
/* WARNING: Removing unreachable block (ram,0x016ceb2c) */
/* WARNING: Removing unreachable block (ram,0x016cea8c) */
/* WARNING: Removing unreachable block (ram,0x016cea9c) */
/* WARNING: Removing unreachable block (ram,0x016ceaa0) */
/* WARNING: Removing unreachable block (ram,0x016ceb30) */
/* WARNING: Removing unreachable block (ram,0x016ceaa8) */
/* WARNING: Removing unreachable block (ram,0x016ced84) */
/* WARNING: Removing unreachable block (ram,0x016ceab0) */
/* WARNING: Removing unreachable block (ram,0x016ceabc) */
/* WARNING: Removing unreachable block (ram,0x016ceac8) */
/* WARNING: Removing unreachable block (ram,0x016ceacc) */
/* WARNING: Removing unreachable block (ram,0x016ced88) */
/* WARNING: Removing unreachable block (ram,0x016ceadc) */
/* WARNING: Removing unreachable block (ram,0x016ceae8) */
/* WARNING: Removing unreachable block (ram,0x016cea78) */
/* WARNING: Removing unreachable block (ram,0x0166c164) */
/* WARNING: Removing unreachable block (ram,0x0166c14c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Type propagation algorithm not settling */

ulong Core_Services_Group__CreateGroup(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined ******ppppppuVar15;
  undefined1 uVar16;
  int iVar17;
  undefined4 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ulong uVar29;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong uVar30;
  long lVar31;
  ulong unaff_x21;
  undefined1 (*pauVar32) [16];
  ulong unaff_x22;
  ulong uVar33;
  undefined8 *******pppppppuVar34;
  undefined1 *puVar35;
  undefined8 ******ppppppuVar36;
  undefined ******ppppppuVar37;
  undefined ******ppppppuVar38;
  undefined *puVar39;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [12];
  undefined4 uStack_264;
  undefined1 auStack_260 [16];
  undefined8 uStack_250;
  undefined1 uStack_241;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long alStack_110 [2];
  undefined8 *******apppppppuStack_100 [2];
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined ******appppppuStack_70 [8];
  
  ppppppuVar15 = (undefined ******)&stack0xffffffffffffffd0;
  puVar14 = &stack0xffffffffffffffd0;
  ppppppuVar37 = (undefined ******)&stack0xfffffffffffffff0;
  if (param_1 == 0) {
    puVar39 = &Core_Services_Group__AddOtherMembers;
    auVar43 = func_0x00f78af4();
    if (auVar43._0_8_ == 0) {
      ppppppuVar15 = (undefined ******)(appppppuStack_70 + 6);
      ppppppuVar38 = (undefined ******)(appppppuStack_70 + 6);
      appppppuStack_70[7] = (undefined ******)&Core_Services_Group__AddOtherMembers;
      puVar39 = &Core_Services_Group__AddLeader;
      appppppuStack_70[6] = ppppppuVar37;
      auVar43 = func_0x00f78af4();
      if (auVar43._0_8_ == 0) {
        ppppppuVar15 = (undefined ******)(appppppuStack_70 + 4);
        ppppppuVar38 = (undefined ******)(appppppuStack_70 + 4);
        appppppuStack_70[5] = (undefined ******)&Core_Services_Group__AddLeader;
        puVar39 = &Core_Services_Group__AddId;
        appppppuStack_70[4] = (undefined ******)(appppppuStack_70 + 6);
        auVar43 = func_0x00f78af4();
        if (auVar43._0_8_ == 0) {
          appppppuStack_70[3] = (undefined ******)&Core_Services_Group__AddId;
          appppppuStack_70[2] = (undefined ******)(appppppuStack_70 + 4);
          lVar26 = func_0x00f78af4();
          puVar14 = &stack0xffffffffffffff80;
          appppppuStack_70[1] = (undefined ******)&Core_Services_Group__EndGroup;
          ppppppuVar37 = (undefined ******)appppppuStack_70;
          param_2 = 0x3eb5000;
          appppppuStack_70[0] = (undefined ******)(appppppuStack_70 + 2);
          if ((bRam0000000003eb58cc & 1) == 0) {
            appppppuStack_70[0] = (undefined ******)(appppppuStack_70 + 2);
            func_0x00f78a20(0x3d3f0d0);
            bRam0000000003eb58cc = 1;
          }
          if (lVar26 != 0) {
            ppppppuVar36 = appppppuStack_70;
            auVar43._8_8_ = lVar26;
            auVar43._0_8_ = 0x3eb5000;
            if ((bRam0000000003eb5cd8 & 1) == 0) {
              func_0x00f78a20(0x3d1f100,0);
              bRam0000000003eb5cd8 = 1;
            }
            if (*(int *)(lVar26 + 0x30) < 0) {
              func_0x00f78a24(0x3d22a38);
              puVar39 = (undefined *)func_0x00f78aec();
              uVar25 = func_0x00f78a24(0x3d6cea8);
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar39,uVar25);
              uVar25 = func_0x00f78a24(0x3d56a30);
              auVar44 = func_0x00f78ac0(puVar39,uVar25);
              pppppppuStack_d0 = (undefined8 *******)0x3eb5000;
              ppppppuVar36 = (undefined8 ******)&stack0xffffffffffffff40;
              lVar26 = *(long *)(auVar44._0_8_ + 0x18);
              puStack_c8 = puVar39;
              if ((lVar26 != 0) && (*(long *)(lVar26 + 0x10) != 0)) {
                uVar4 = *(int *)(*(long *)(lVar26 + 0x10) + 0x18) - auVar44._8_4_;
                uVar29 = (ulong)uVar4;
                auVar41._8_4_ = uVar4;
                auVar41._0_8_ = lVar26;
                auVar41._12_4_ = 0;
                puVar9 = &stack0xfffffffffffffed0;
                apppppppuStack_100[1] = (undefined8 *******)&UNK_016cee20;
                pppppppuVar34 = apppppppuStack_100;
                auVar7._8_8_ = 4;
                auVar7._0_8_ = lVar26;
                uVar33 = 0x3d201a0;
                apppppppuStack_100[0] = (undefined8 *******)ppppppuVar36;
                if ((bRam0000000003eb5cd0 & 1) == 0) {
                  func_0x00f78a20(0x3d201a0);
                  bRam0000000003eb5cd0 = 1;
                }
                uVar30 = 4;
                puVar39 = &UNK_016cc68c;
code_r0x016cc7a4:
                do {
                  puVar13 = puVar9 + -0x20;
                  *(long *)(puVar9 + -0x20) = auVar7._8_8_;
                  *(ulong *)(puVar9 + -0x18) = uVar29;
                  *(undefined8 ********)(puVar9 + -0x10) = pppppppuVar34;
                  *(undefined **)(puVar9 + -8) = puVar39;
                  puVar35 = puVar9 + -0x10;
                  if (auVar41._8_4_ < 0) {
code_r0x016cc7d8:
                    func_0x00f78a24(0x3d1fcf8);
                    uVar29 = func_0x00f78aec();
                    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar29,0);
                    uVar25 = func_0x00f78a24(0x3d52ce8);
                    func_0x00f78ac0(uVar29,uVar25);
                    uVar24 = uVar30;
                  }
                  else {
                    lVar26 = *(long *)(auVar41._0_8_ + 0x10);
                    uVar24 = uVar30;
                    if (lVar26 != 0) {
                      if (auVar41._8_4_ <= *(int *)(lVar26 + 0x18) - (int)uVar30) {
                        return auVar41._0_8_;
                      }
                      goto code_r0x016cc7d8;
                    }
                  }
                  puVar39 = &FlatBuffers_ByteBuffer__PutSbyte;
                  auVar41 = func_0x00f78af4();
code_r0x016cc810:
                  puVar9 = puVar13 + -0x30;
                  *(ulong *)(puVar13 + -0x30) = uVar33;
                  *(undefined1 (*) [16])(puVar13 + -0x28) = auVar7;
                  *(ulong *)(puVar13 + -0x18) = uVar29;
                  *(undefined1 **)(puVar13 + -0x10) = puVar35;
                  *(undefined **)(puVar13 + -8) = puVar39;
                  pppppppuVar34 = (undefined8 *******)(puVar13 + -0x10);
                  uVar30 = 1;
                  puVar39 = &UNK_016cc834;
                  uVar29 = uVar24;
                  auVar7 = auVar41;
                } while( true );
              }
              func_0x00f78af4();
              uVar25 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffff1c,0);
              uVar27 = func_0x00f78a24(0x3d6ce88);
              uVar28 = func_0x00f78a24(0x3d66338);
              lVar26 = /*System.String$$Concat*/ func_0x029be39c(uVar27,uVar25,uVar28,0);
              func_0x00f78a24(0x3d22a38);
              uVar25 = func_0x00f78aec();
              uVar28 = 0;
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar25,lVar26);
              uVar27 = func_0x00f78a24(0x3d56a50);
              puVar39 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar43 = func_0x00f78ac0(uVar25,uVar27);
              puVar11 = &stack0xffffffffffffff10;
              while( true ) {
                uVar27 = auVar43._8_8_;
                lVar31 = auVar43._0_8_;
                auVar43._8_8_ = lVar31;
                auVar43._0_8_ = uVar27;
                auVar6._8_8_ = lVar31;
                auVar6._0_8_ = uVar27;
                *(undefined8 *)(puVar11 + -0x20) = uVar25;
                *(long *)(puVar11 + -0x18) = lVar26;
                *(undefined8 *******)(puVar11 + -0x10) = ppppppuVar36;
                *(undefined **)(puVar11 + -8) = puVar39;
                ppppppuVar36 = (undefined8 ******)(puVar11 + -0x10);
                uVar18 = *(undefined4 *)(lVar31 + 0x20);
                auVar42._8_4_ = uVar18;
                auVar42._0_8_ = lVar31;
                auVar42._12_4_ = 0;
                lVar26 = lVar31;
                if ((int)uVar28 == 0) {
                  lVar26 = 0;
                  uVar18 = 0;
                }
                auVar5._8_4_ = uVar18;
                auVar5._0_8_ = lVar26;
                auVar5._12_4_ = 0;
                if ((int)uVar28 == 0) {
                  uVar29 = 4;
                  puVar39 = &UNK_016cef64;
                  puVar11 = puVar11 + -0x20;
                  goto code_r0x016cdaac;
                }
                if (lVar26 != 0) break;
                puVar39 = &FlatBuffers_FlatBufferBuilder__Finish;
                auVar43 = func_0x00f78af4();
                uVar28 = 0;
                puVar11 = puVar11 + -0x20;
                lVar26 = lVar31;
                uVar25 = uVar27;
              }
              uVar29 = 8;
              puVar39 = &UNK_016cef10;
              puVar11 = puVar11 + -0x20;
              auVar42 = auVar5;
              auVar43 = auVar6;
            }
            else {
              auVar42._8_8_ = 4;
              auVar42._0_8_ = lVar26;
              uVar29 = 0;
              puVar39 = &UNK_016cea78;
              puVar11 = &stack0xffffffffffffff50;
            }
            goto code_r0x016cdaac;
          }
          puVar39 = &Core_Services_Group__StartGroup;
          param_1 = func_0x00f78af4();
          if (param_1 == 0) {
            auVar40 = func_0x00f78af4();
            lVar26 = auVar40._0_8_;
            if ((auVar40._8_8_ == 0) || (lVar26 == 0)) {
              auVar40 = func_0x00f78af4();
              lVar31 = auVar40._8_8_;
              lVar26 = auVar40._0_8_;
              puVar11 = &stack0xffffffffffffff10;
              puStack_c8 = &Core_Services_Group__CreateOtherMembersVectorBlock;
              pppppppuVar34 = &pppppppuStack_d0;
              unaff_x21 = 0x3eb5000;
              pppppppuStack_d0 = (undefined8 *******)&stack0xffffffffffffff60;
              if ((bRam0000000003eb58cb & 1) == 0) {
                func_0x00f78a20(0x3d569d8);
                bRam0000000003eb58cb = 1;
              }
              if ((lVar31 == 0) || (lVar26 == 0)) {
                puVar39 = &Core_Services_Group__StartOtherMembersVector;
                auVar44 = func_0x00f78af4();
                iVar17 = auVar44._8_4_;
                auVar40._8_8_ = lVar31;
                auVar40._0_8_ = auVar44._0_8_;
                if (auVar44._0_8_ == 0) {
                  apppppppuStack_100[1] =
                       (undefined8 *******)&Core_Services_Group__StartOtherMembersVector;
                  apppppppuStack_100[0] = pppppppuVar34;
                  auVar43 = func_0x00f78af4();
                  pauVar32 = auVar43._0_8_;
                  if ((bRam0000000003eb5985 & 1) == 0) {
                    func_0x00f78a20(0x3d22970);
                    bRam0000000003eb5985 = 1;
                  }
                  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar26 = *(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
                  if (lVar26 == 0) {
                    return 0;
                  }
                  if ((bRam0000000003eb5979 & 1) == 0) {
                    func_0x00f78a20(0x3d1fa70);
                    func_0x00f78a20(0x3d203b0);
                    func_0x00f78a20(0x3d21628);
                    func_0x00f78a20(0x3d21c98);
                    func_0x00f78a20(0x3d22910);
                    func_0x00f78a20(0x3d22e30);
                    func_0x00f78a20(0x3d22e40);
                    func_0x00f78a20(0x3d3d368);
                    func_0x00f78a20(0x3d23210);
                    func_0x00f78a20(0x3d238c8);
                    func_0x00f78a20(0x3d3ea00);
                    func_0x00f78a20(0x3d3ecf8);
                    func_0x00f78a20(0x3d3ebf0);
                    func_0x00f78a20(0x3d3eaf8);
                    func_0x00f78a20(0x3d3ecd8);
                    func_0x00f78a20(0x3d3e598);
                    func_0x00f78a20(0x3d3eae0);
                    func_0x00f78a20(0x3d3e878);
                    func_0x00f78a20(0x3d1e498);
                    func_0x00f78a20(0x3d23d20);
                    func_0x00f78a20(0x3d3f4e0);
                    func_0x00f78a20(0x3d1e648);
                    func_0x00f78a20(0x3d24490);
                    func_0x00f78a20(0x3d5c740);
                    func_0x00f78a20(0x3d5c748);
                    func_0x00f78a20(0x3d5c750);
                    func_0x00f78a20(0x3d5c758);
                    func_0x00f78a20(0x3d5c760);
                    func_0x00f78a20(0x3d5c768);
                    func_0x00f78a20(0x3d5c770);
                    func_0x00f78a20(0x3d246c0);
                    func_0x00f78a20(0x3d246f8);
                    func_0x00f78a20(0x3d24970);
                    func_0x00f78a20(0x3d63340);
                    func_0x00f78a20(0x3d27be8);
                    func_0x00f78a20(0x3d41468);
                    func_0x00f78a20(0x3d41470);
                    func_0x00f78a20(0x3d71ef0);
                    func_0x00f78a20(0x3d67d88);
                    func_0x00f78a20(0x3d67d90);
                    func_0x00f78a20(0x3d67d70);
                    bRam0000000003eb5979 = 1;
                  }
                  uStack_180 = 0;
                  uStack_178 = 0;
                  uStack_170 = 0;
                  uStack_1a0 = 0;
                  uStack_198 = 0;
                  uStack_190 = 0;
                  uStack_1c0 = 0;
                  uStack_1b8 = 0;
                  uStack_1b0 = 0;
                  uStack_1e0 = 0;
                  uStack_1d8 = 0;
                  uStack_1d0 = 0;
                  uStack_200 = 0;
                  uStack_1f8 = 0;
                  uStack_1f0 = 0;
                  uStack_220 = 0;
                  uStack_218 = 0;
                  uStack_210 = 0;
                  uStack_240 = 0;
                  uStack_238 = 0;
                  uStack_230 = 0;
                  lVar31 = func_0x00f78aec(/*Core.Services.Internal.<>c__DisplayClass234_0_TypeInfo*/ uRam0000000003d27be8);
                  /*Core.Services.Internal.<>c__DisplayClass234_0$$.ctor*/ func_0x016884bc(lVar31,0);
                  lVar19 = func_0x00f78aec(/*FlatBuffers.ByteBuffer_TypeInfo*/ uRam0000000003d203b0);
                  /*FlatBuffers.ByteBuffer$$.ctor*/ func_0x016cbfd8(lVar19,auVar43._8_8_,0);
                  if (lVar19 != 0) {
                    uVar25 = /*FlatBuffers.ByteBuffer$$get_Data*/ func_0x016cc19c(lVar19,0);
                    if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    /*System.Runtime.InteropServices.Marshal$$Copy*/ func_0x02b00b6c(pauVar32,uVar25,0,auVar43._8_8_,0);
                    auVar43 = /*Core.Services.Response$$GetRootAsResponse*/ func_0x01683e24(lVar19,0);
                    if (lVar31 != 0) {
                      pauVar32 = (undefined1 (*) [16])(lVar31 + 0x10);
                      *pauVar32 = auVar43;
                      lVar19 = *(long *)(lVar26 + 0x4d0);
                      uVar25 = func_0x00f78aec(/*System.Predicate<Internal.NativeRequest>_TypeInfo*/ uRam0000000003d1e648);
                      /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(uVar25,lVar31,uRam0000000003d63340,uRam0000000003d3f4e0);
                      if (lVar19 != 0) {
                        lVar31 = /*System.Collections.Generic.List<RuntimeManager.AttachedInstance>$$Find*/ func_0x024278b4(lVar19,uVar25,uRam0000000003d3d368);
                        uVar33 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar32,0);
                        if ((int)uVar33 == 0) {
                          if (lVar31 == 0) {
                            return uVar33;
                          }
                          iVar17 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar32,0);
                          if (iVar17 == 0) {
                            auStack_260._0_4_ = *(undefined4 *)(lVar31 + 0x10);
                            uVar25 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,auStack_260);
                            uVar25 = /*System.String$$Format*/ func_0x029bc688(/*STR('<= ({0})')*/ uRam0000000003d67d70,uVar25,0);
                            /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,1,uVar25);
                            if (*(long *)(lVar31 + 0x20) != 0) {
                              uVar33 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(*(long *)(lVar31 + 0x20),0,
                                                       uRam0000000003d41470);
                              return uVar33;
                            }
                            func_0x00f78af4();
                          }
                          else {
                            uVar18 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar32,0);
                            switch(uVar18) {
                            case 1:
                            case 2:
                            case 0xb:
                              /*Core.Services.Response$$Payload<Group>*/ func_0x018de110(auStack_260,pauVar32,uRam0000000003d5c748);
                              uStack_178 = auStack_260._8_8_;
                              uStack_180 = auStack_260._0_8_;
                              uStack_170 = uStack_250;
                              auVar43 = /*System.Nullable<Group>$$get_Value*/ func_0x026518f8(&uStack_180,uRam0000000003d3e878);
                              uStack_264 = *(undefined4 *)(lVar31 + 0x10);
                              uVar25 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_264);
                              uStack_241 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar32,0);
                              uVar27 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_241);
                              uVar28 = Core_Services_Extensions__Print(auVar43._0_8_,auVar43._8_8_);
                              uVar25 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar25,uVar27,uVar28,0);
                              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,1,uVar25);
                              lVar26 = *(long *)(lVar31 + 0x20);
                              auStack_260 = auVar43;
                              uVar25 = func_0x00f78ae0(/*Core.Services.Group_TypeInfo*/ uRam0000000003d21c98,auStack_260);
                              if (lVar26 != 0) {
                                uVar33 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar26,uVar25,uRam0000000003d41470);
                                return uVar33;
                              }
                              func_0x00f78af4(uVar25,uVar25);
                              break;
                            case 3:
                            case 4:
                            case 5:
                              /*Core.Services.Response$$Payload<Achievements>*/ func_0x018de074(auStack_260,pauVar32,uRam0000000003d5c740);
                              uStack_198 = auStack_260._8_8_;
                              uStack_1a0 = auStack_260._0_8_;
                              uStack_190 = uStack_250;
                              auVar43 = /*System.Nullable<Achievements>$$get_Value*/ func_0x02619a48(&uStack_1a0,uRam0000000003d3e598);
                              uStack_264 = *(undefined4 *)(lVar31 + 0x10);
                              uVar25 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_264);
                              uStack_241 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar32,0);
                              uVar27 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_241);
                              uVar28 = Core_Services_Extensions__Print(auVar43._0_8_,auVar43._8_8_);
                              uVar25 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar25,uVar27,uVar28,0);
                              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,1,uVar25);
                              lVar26 = *(long *)(lVar31 + 0x20);
                              auStack_260 = auVar43;
                              uVar25 = func_0x00f78ae0(/*Core.Services.Achievements_TypeInfo*/ uRam0000000003d1fa70,auStack_260);
                              if (lVar26 != 0) {
                                uVar33 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar26,uVar25,uRam0000000003d41470);
                                return uVar33;
                              }
                              func_0x00f78af4(uVar25,uVar25);
                              break;
                            case 6:
                              /*Core.Services.Response$$Payload<LeaderboardSets>*/ func_0x018de248(auStack_260,pauVar32,uRam0000000003d5c758);
                              uStack_1b8 = auStack_260._8_8_;
                              uStack_1c0 = auStack_260._0_8_;
                              uStack_1b0 = uStack_250;
                              auVar43 = /*System.Nullable<LeaderboardSets>$$get_Value*/ func_0x0265bcf4(&uStack_1c0,uRam0000000003d3eaf8);
                              uStack_264 = *(undefined4 *)(lVar31 + 0x10);
                              uVar25 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_264);
                              uStack_241 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar32,0);
                              uVar27 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_241);
                              uVar28 = Core_Services_Extensions__Print(auVar43._0_8_,auVar43._8_8_);
                              uVar25 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar25,uVar27,uVar28,0);
                              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,1,uVar25);
                              lVar26 = *(long *)(lVar31 + 0x20);
                              auStack_260 = auVar43;
                              uVar25 = func_0x00f78ae0(/*Core.Services.LeaderboardSets_TypeInfo*/ uRam0000000003d22e40,auStack_260);
                              if (lVar26 != 0) {
                                uVar33 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar26,uVar25,uRam0000000003d41470);
                                return uVar33;
                              }
                              func_0x00f78af4(uVar25,uVar25);
                              break;
                            case 7:
                              /*Core.Services.Response$$Payload<LeaderboardScores>*/ func_0x018de1ac(auStack_260,pauVar32,uRam0000000003d5c750);
                              uStack_1d8 = auStack_260._8_8_;
                              uStack_1e0 = auStack_260._0_8_;
                              uStack_1d0 = uStack_250;
                              auVar43 = /*System.Nullable<LeaderboardScores>$$get_Value*/ func_0x0265b17c(&uStack_1e0,uRam0000000003d3eae0);
                              uStack_264 = *(undefined4 *)(lVar31 + 0x10);
                              uVar25 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_264);
                              uStack_241 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar32,0);
                              uVar27 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_241);
                              uVar28 = Core_Services_Extensions__Print(auVar43._0_8_,auVar43._8_8_);
                              uVar25 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar25,uVar27,uVar28,0);
                              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,1,uVar25);
                              lVar26 = *(long *)(lVar31 + 0x20);
                              auStack_260 = auVar43;
                              uVar25 = func_0x00f78ae0(/*Core.Services.LeaderboardScores_TypeInfo*/ uRam0000000003d22e30,auStack_260);
                              if (lVar26 != 0) {
                                uVar33 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar26,uVar25,uRam0000000003d41470);
                                return uVar33;
                              }
                              func_0x00f78af4(uVar25,uVar25);
                              break;
                            case 8:
                            case 9:
                            case 10:
                              /*Core.Services.Response$$Payload<Player>*/ func_0x018de2e4(auStack_260,pauVar32,uRam0000000003d5c760);
                              uStack_1f8 = auStack_260._8_8_;
                              uStack_200 = auStack_260._0_8_;
                              uStack_1f0 = uStack_250;
                              auVar43 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(&uStack_200,uRam0000000003d3ebf0);
                              uStack_264 = *(undefined4 *)(lVar31 + 0x10);
                              uVar25 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_264);
                              uStack_241 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar32,0);
                              uVar27 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_241);
                              uVar28 = Core_Services_Extensions__Print(auVar43._0_8_,auVar43._8_8_);
                              uVar25 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar25,uVar27,uVar28,0);
                              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,1,uVar25);
                              lVar26 = *(long *)(lVar31 + 0x20);
                              auStack_260 = auVar43;
                              uVar25 = func_0x00f78ae0(/*Core.Services.Player_TypeInfo*/ uRam0000000003d23d20,auStack_260);
                              if (lVar26 != 0) {
                                uVar33 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar26,uVar25,uRam0000000003d41470);
                                return uVar33;
                              }
                              func_0x00f78af4(uVar25,uVar25);
                              break;
                            case 0xc:
                              /*Core.Services.Response$$Payload<Saves>*/ func_0x018de41c(auStack_260,pauVar32,uRam0000000003d5c770);
                              uStack_218 = auStack_260._8_8_;
                              uStack_220 = auStack_260._0_8_;
                              uStack_210 = uStack_250;
                              auVar43 = /*System.Nullable<Saves>$$get_Value*/ func_0x02660838(&uStack_220,uRam0000000003d3ecf8);
                              uStack_264 = *(undefined4 *)(lVar31 + 0x10);
                              uVar25 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_264);
                              uStack_241 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar32,0);
                              uVar27 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_241);
                              uVar28 = Core_Services_Extensions__Print(auVar43._0_8_,auVar43._8_8_);
                              uVar25 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar25,uVar27,uVar28,0);
                              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,1,uVar25);
                              lVar26 = *(long *)(lVar31 + 0x20);
                              auStack_260 = auVar43;
                              uVar25 = func_0x00f78ae0(/*Core.Services.Saves_TypeInfo*/ uRam0000000003d246f8,auStack_260);
                              if (lVar26 != 0) {
                                uVar33 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar26,uVar25,uRam0000000003d41470);
                                return uVar33;
                              }
                              func_0x00f78af4(uVar25,uVar25);
                              break;
                            case 0xd:
                            case 0xe:
                            case 0xf:
                            case 0x10:
                            case 0x11:
                              /*Core.Services.Response$$Payload<Save>*/ func_0x018de380(auStack_260,pauVar32,uRam0000000003d5c768);
                              uStack_238 = auStack_260._8_8_;
                              uStack_240 = auStack_260._0_8_;
                              uStack_230 = uStack_250;
                              auVar43 = /*System.Nullable<Save>$$get_Value*/ func_0x0265fcc0(&uStack_240,uRam0000000003d3ecd8);
                              uStack_264 = *(undefined4 *)(lVar31 + 0x10);
                              uVar25 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_264);
                              uStack_241 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar32,0);
                              uVar27 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_241);
                              uVar28 = Core_Services_Extensions__Print(auVar43._0_8_,auVar43._8_8_);
                              uVar25 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar25,uVar27,uVar28,0);
                              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,1,uVar25);
                              lVar26 = *(long *)(lVar31 + 0x20);
                              auStack_260 = auVar43;
                              uVar25 = func_0x00f78ae0(/*Core.Services.Save_TypeInfo*/ uRam0000000003d246c0,auStack_260);
                              if (lVar26 != 0) {
                                uVar33 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar26,uVar25,uRam0000000003d41470);
                                return uVar33;
                              }
                              func_0x00f78af4(uVar25,uVar25);
                              break;
                            default:
                              lVar26 = *(long *)(lVar31 + 0x20);
                              uVar16 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar32,0);
                              auStack_260[0] = uVar16;
                              uVar25 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,auStack_260);
                              uVar25 = /*System.String$$Format*/ func_0x029bc688(/*STR('Response payload unsupported, {0}')*/ uRam0000000003d71ef0,uVar25,0);
                              uVar27 = func_0x00f78aec(/*System.NotImplementedException_TypeInfo*/ uRam0000000003d238c8);
                              /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar27,uVar25,0);
                              if (lVar26 != 0) {
                                uVar33 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetException*/ func_0x028b5768(lVar26,uVar27,uRam0000000003d41468);
                                return uVar33;
                              }
                              func_0x00f78af4();
                            }
                          }
                          goto code_r0x0167a748;
                        }
                        iVar17 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar32,0);
                        if (iVar17 != 0) {
                          *(char *)(lVar26 + 0x4e1) = (char)iVar17;
                        }
                        uVar25 = /*STR('<= ({0}) {1} ErrorCode:{2}')*/ uRam0000000003d67d88;
                        if (lVar31 == 0) {
                          auStack_260._0_8_ = 0;
                        }
                        else {
                          auStack_260._0_8_ = 0;
                          /*System.Nullable<int>$$.ctor*/ func_0x02658d80(auStack_260,*(undefined4 *)(lVar31 + 0x10),
                                          uRam0000000003d3ea00);
                        }
                        uVar27 = func_0x00f78ae0(/*System.Nullable<int>_TypeInfo*/ uRam0000000003d1e498,auStack_260);
                        uVar16 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar32,0);
                        uStack_264 = CONCAT31(uStack_264._1_3_,uVar16);
                        lVar19 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_264);
                        if ((lVar19 != 0) &&
                           (plVar22 = (long *)/*System.Object$$GetType*/ func_0x02959198(lVar19,0), plVar22 != (long *)0x0)) {
                          uVar28 = (**(code **)(*plVar22 + 0x1b8))
                                             (plVar22,*(undefined8 *)(*plVar22 + 0x1c0));
                          uStack_241 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar32,0);
                          uVar20 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_241);
                          uVar25 = /*System.String$$Format*/ func_0x029bdf30(uVar25,uVar27,uVar28,uVar20,0);
                          uVar33 = /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,4,uVar25);
                          if (lVar31 == 0) {
                            return uVar33;
                          }
                          lVar26 = *(long *)(lVar31 + 0x20);
                          pauVar32 = (undefined1 (*) [16])/*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar32,0);
                          uVar25 = func_0x00f78aec(/*Core.Services.ServicesException_TypeInfo*/ uRam0000000003d24970);
                          /*Core.Services.ServicesException$$.ctor*/ func_0x01684c6c(uVar25,pauVar32,0);
                          if (lVar26 != 0) {
                            uVar33 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetException*/ func_0x028b5768(lVar26,uVar25,uRam0000000003d41468);
                            return uVar33;
                          }
                        }
                      }
                    }
                  }
                  func_0x00f78af4();
                  puVar21 = (undefined8 *)___cxa_allocate_exception(8);
                  *puVar21 = *(undefined8 *)*pauVar32;
                  ___cxa_throw(puVar21,&DAT_03a5ed38,0);
code_r0x0167a748:
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x167a74c);
                  (*pcVar8)();
                }
              }
              else {
                unaff_x21 = 0x3d56000;
                iVar17 = *(int *)(lVar31 + 0x18);
                puVar39 = &UNK_0166c358;
                puVar11 = &stack0xffffffffffffff10;
              }
            }
            else {
              iVar17 = *(int *)(auVar40._8_8_ + 0x18);
              puVar39 = &UNK_0166c294;
              puVar11 = &stack0xffffffffffffff40;
              pppppppuVar34 = (undefined8 *******)&stack0xffffffffffffff60;
            }
            uVar33 = auVar40._0_8_;
            *(ulong *)(puVar11 + -0x30) = unaff_x22;
            *(ulong *)(puVar11 + -0x28) = unaff_x21;
            *(long *)(puVar11 + -0x20) = auVar40._8_8_;
            *(long *)(puVar11 + -0x18) = lVar26;
            *(undefined8 ********)(puVar11 + -0x10) = pppppppuVar34;
            *(undefined **)(puVar11 + -8) = puVar39;
            ppppppuVar36 = (undefined8 ******)(puVar11 + -0x10);
            unaff_x21 = 4;
            /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
            *(int *)(uVar33 + 0x44) = iVar17;
            uVar29 = CONCAT44(0,iVar17 * 4);
            auVar43._8_8_ = 4;
            auVar43._0_8_ = uVar29;
            auVar42._8_8_ = 4;
            auVar42._0_8_ = uVar33;
            puVar39 = &UNK_016ce188;
            puVar11 = puVar11 + -0x30;
            unaff_x22 = uVar33;
            goto code_r0x016cdaac;
          }
          lVar26 = 0;
          goto code_r0x016ce2a4;
        }
        uVar18 = 0;
      }
      else {
        uVar18 = 1;
      }
    }
    else {
      uVar18 = 2;
      ppppppuVar38 = ppppppuVar37;
    }
    uVar33 = auVar43._0_8_;
    auVar44._8_4_ = uVar18;
    auVar44._0_8_ = uVar33;
    iVar17 = 0;
    *(undefined8 *)((long)ppppppuVar15 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppppppuVar15 + -0x18) = unaff_x19;
    *(undefined *******)((long)ppppppuVar15 + -0x10) = ppppppuVar38;
    *(undefined **)((long)ppppppuVar15 + -8) = puVar39;
    if ((auVar43._8_4_ == 0) && (*(char *)(uVar33 + 0x48) == '\0')) {
      return uVar33;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar33,auVar43._8_8_,auVar43._8_8_,0,0);
    puVar11 = *(undefined1 **)((long)ppppppuVar15 + -0x10);
    puVar39 = *(undefined **)((long)ppppppuVar15 + -8);
    uVar25 = *(undefined8 *)((long)ppppppuVar15 + -0x20);
    lVar26 = *(long *)((long)ppppppuVar15 + -0x18);
    uVar33 = unaff_x21;
  }
  else {
    puVar39 = (undefined *)0x166c14c;
    lVar26 = param_1;
    unaff_x21 = param_3;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    iVar17 = (int)param_4;
    puVar10 = puVar14 + -0x30;
    ppppppuVar15 = (undefined ******)(puVar14 + -0x30);
    *(ulong *)(puVar14 + -0x30) = unaff_x22;
    *(ulong *)(puVar14 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar14 + -0x20) = param_2;
    *(long *)(puVar14 + -0x18) = lVar26;
    *(undefined *******)(puVar14 + -0x10) = ppppppuVar37;
    *(undefined **)(puVar14 + -8) = puVar39;
    puVar11 = puVar14 + -0x10;
    uVar25 = 3;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,3,0);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 3) {
        uVar25 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
        *(undefined8 *)(param_1 + 0x28) = uVar25;
      }
      *(undefined4 *)(param_1 + 0x30) = 3;
      puVar39 = &UNK_016ce320;
      goto code_r0x016cda04;
    }
    puVar39 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar44 = func_0x00f78af4();
    lVar26 = param_1;
    uVar33 = 0x3eb5000;
  }
  param_1 = auVar44._0_8_;
  puVar10 = (undefined1 *)((long)ppppppuVar15 + -0x20);
  *(undefined8 *)((long)ppppppuVar15 + -0x20) = uVar25;
  *(long *)((long)ppppppuVar15 + -0x18) = lVar26;
  *(undefined1 **)((long)ppppppuVar15 + -0x10) = puVar11;
  *(undefined **)((long)ppppppuVar15 + -8) = puVar39;
  puVar11 = (undefined1 *)((long)ppppppuVar15 + -0x10);
  if (*(int *)(param_1 + 0x30) <= auVar44._8_4_) {
    func_0x00f78a24(0x3d22738);
    uVar27 = func_0x00f78aec();
    uVar28 = func_0x00f78a24(0x3d6ceb8);
    unaff_x21 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar27,uVar28);
    uVar28 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(uVar27,uVar28);
    func_0x00f78af4();
    uVar28 = func_0x00f78b24();
    auVar43 = func_0x00f78ac0(uVar28,0);
    uVar29 = auVar43._0_8_;
    *(ulong *)((long)ppppppuVar15 + -0x50) = unaff_x22;
    *(ulong *)((long)ppppppuVar15 + -0x48) = uVar33;
    *(undefined8 *)((long)ppppppuVar15 + -0x40) = uVar25;
    *(undefined8 *)((long)ppppppuVar15 + -0x38) = uVar27;
    *(undefined1 **)((long)ppppppuVar15 + -0x30) = puVar11;
    *(undefined **)((long)ppppppuVar15 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    ppppppuVar36 = (undefined8 ******)((long)ppppppuVar15 + -0x30);
    if (((int)unaff_x21 == iVar17) && (*(char *)(uVar29 + 0x48) == '\0')) {
      return uVar29;
    }
    auVar42._8_8_ = 1;
    auVar42._0_8_ = uVar29;
    uVar29 = 0;
    puVar39 = &UNK_016ce46c;
    puVar11 = (undefined1 *)((long)ppppppuVar15 + -0x50);
code_r0x016cdaac:
    do {
      uVar30 = auVar43._0_8_;
      uVar23 = auVar42._0_8_;
      puVar9 = puVar11 + -0x30;
      *(ulong *)(puVar11 + -0x30) = unaff_x22;
      *(ulong *)(puVar11 + -0x28) = unaff_x21;
      *(undefined1 (*) [16])(puVar11 + -0x20) = auVar43;
      *(undefined8 *******)(puVar11 + -0x10) = ppppppuVar36;
      *(undefined **)(puVar11 + -8) = puVar39;
      iVar17 = auVar42._8_4_;
      if (*(int *)(uVar23 + 0x20) < iVar17) {
        *(int *)(uVar23 + 0x20) = iVar17;
      }
      uVar33 = unaff_x22;
      if ((*(long *)(uVar23 + 0x18) == 0) ||
         (lVar26 = *(long *)(*(long *)(uVar23 + 0x18) + 0x10), lVar26 == 0)) {
code_r0x016cdb68:
        auVar7._8_8_ = uVar30;
        auVar7._0_8_ = unaff_x21;
        auVar43 = func_0x00f78af4();
        uVar29 = auVar43._8_8_;
        lVar31 = auVar43._0_8_;
        *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
        *(undefined **)(puVar11 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
        lVar26 = *(long *)(lVar31 + 0x18);
        iVar17 = *(int *)(lVar31 + 0x10) + -1;
        *(int *)(lVar31 + 0x10) = iVar17;
        if (lVar26 == 0) {
          auVar43 = func_0x00f78af4();
          uVar24 = auVar43._8_8_;
          lVar26 = auVar43._0_8_;
          *(undefined1 **)(puVar11 + -0x50) = puVar11 + -0x40;
          *(undefined **)(puVar11 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
          iVar17 = *(int *)(lVar26 + 0x10) + -1;
          auVar41._8_4_ = iVar17;
          auVar41._0_8_ = *(long *)(lVar26 + 0x18);
          auVar41._12_4_ = 0;
          *(int *)(lVar26 + 0x10) = iVar17;
          if (*(long *)(lVar26 + 0x18) != 0) {
            puVar13 = puVar11 + -0x40;
            puVar35 = *(undefined1 **)(puVar11 + -0x50);
            puVar39 = *(undefined **)(puVar11 + -0x48);
            uVar29 = uVar23;
            goto code_r0x016cc810;
          }
          auVar43 = func_0x00f78af4();
          uVar29 = auVar43._8_8_;
          lVar31 = auVar43._0_8_;
          *(undefined1 **)(puVar11 + -0x60) = puVar11 + -0x50;
          *(undefined **)(puVar11 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
          lVar26 = *(long *)(lVar31 + 0x18);
          iVar17 = *(int *)(lVar31 + 0x10) + -1;
          *(int *)(lVar31 + 0x10) = iVar17;
          if (lVar26 == 0) {
            auVar43 = func_0x00f78af4();
            uVar29 = auVar43._8_8_;
            lVar26 = auVar43._0_8_;
            puVar9 = puVar11 + -0x90;
            *(ulong *)(puVar11 + -0x90) = uVar33;
            *(ulong *)(puVar11 + -0x88) = unaff_x21;
            *(ulong *)(puVar11 + -0x80) = uVar30;
            *(ulong *)(puVar11 + -0x78) = uVar23;
            *(undefined1 **)(puVar11 + -0x70) = puVar11 + -0x60;
            *(undefined **)(puVar11 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
            pppppppuVar34 = (undefined8 *******)(puVar11 + -0x70);
            lVar31 = *(long *)(lVar26 + 0x18);
            uVar4 = *(int *)(lVar26 + 0x10) - 2;
            auVar7._8_8_ = lVar31;
            auVar7._0_8_ = CONCAT44(0,uVar4);
            auVar41._8_4_ = uVar4;
            auVar41._0_8_ = lVar31;
            auVar41._12_4_ = 0;
            *(uint *)(lVar26 + 0x10) = uVar4;
            if (lVar31 != 0) {
              uVar30 = 2;
              puVar39 = &UNK_016cdc34;
              goto code_r0x016cc7a4;
            }
            auVar43 = func_0x00f78af4();
            uVar29 = auVar43._8_8_;
            lVar26 = auVar43._0_8_;
            puVar9 = puVar11 + -0xc0;
            *(ulong *)(puVar11 + -0xc0) = uVar33;
            *(ulong *)(puVar11 + -0xb8) = CONCAT44(0,uVar4);
            *(undefined8 *)(puVar11 + -0xb0) = 0;
            *(ulong *)(puVar11 + -0xa8) = uVar23;
            *(undefined8 ********)(puVar11 + -0xa0) = pppppppuVar34;
            *(undefined **)(puVar11 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
            pppppppuVar34 = (undefined8 *******)(puVar11 + -0xa0);
            lVar31 = *(long *)(lVar26 + 0x18);
            uVar4 = *(int *)(lVar26 + 0x10) - 2;
            auVar7._8_8_ = lVar31;
            auVar7._0_8_ = CONCAT44(0,uVar4);
            auVar41._8_4_ = uVar4;
            auVar41._0_8_ = lVar31;
            auVar41._12_4_ = 0;
            *(uint *)(lVar26 + 0x10) = uVar4;
            if (lVar31 != 0) {
              uVar30 = 2;
              puVar39 = &UNK_016cdc90;
              goto code_r0x016cc7a4;
            }
            auVar43 = func_0x00f78af4();
            uVar29 = auVar43._8_8_;
            lVar26 = auVar43._0_8_;
            puVar9 = puVar11 + -0xf0;
            *(ulong *)(puVar11 + -0xf0) = uVar33;
            *(ulong *)(puVar11 + -0xe8) = CONCAT44(0,uVar4);
            *(undefined8 *)(puVar11 + -0xe0) = 0;
            *(ulong *)(puVar11 + -0xd8) = uVar23;
            *(undefined8 ********)(puVar11 + -0xd0) = pppppppuVar34;
            *(undefined **)(puVar11 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
            pppppppuVar34 = (undefined8 *******)(puVar11 + -0xd0);
            lVar31 = *(long *)(lVar26 + 0x18);
            uVar4 = *(int *)(lVar26 + 0x10) - 4;
            auVar7._8_8_ = lVar31;
            auVar7._0_8_ = CONCAT44(0,uVar4);
            auVar41._8_4_ = uVar4;
            auVar41._0_8_ = lVar31;
            auVar41._12_4_ = 0;
            *(uint *)(lVar26 + 0x10) = uVar4;
            if (lVar31 != 0) {
              uVar30 = 4;
              puVar39 = &UNK_016cdcec;
              goto code_r0x016cc7a4;
            }
            auVar43 = func_0x00f78af4();
            uVar29 = auVar43._8_8_;
            lVar26 = auVar43._0_8_;
            puVar9 = puVar11 + -0x120;
            *(ulong *)(puVar11 + -0x120) = uVar33;
            *(ulong *)(puVar11 + -0x118) = CONCAT44(0,uVar4);
            *(undefined8 *)(puVar11 + -0x110) = 0;
            *(ulong *)(puVar11 + -0x108) = uVar23;
            *(undefined8 ********)(puVar11 + -0x100) = pppppppuVar34;
            *(undefined **)(puVar11 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
            pppppppuVar34 = (undefined8 *******)(puVar11 + -0x100);
            lVar31 = *(long *)(lVar26 + 0x18);
            uVar4 = *(int *)(lVar26 + 0x10) - 4;
            auVar7._8_8_ = lVar31;
            auVar7._0_8_ = CONCAT44(0,uVar4);
            auVar41._8_4_ = uVar4;
            auVar41._0_8_ = lVar31;
            auVar41._12_4_ = 0;
            *(uint *)(lVar26 + 0x10) = uVar4;
            if (lVar31 != 0) {
              uVar30 = 4;
              puVar39 = &UNK_016cdd48;
              goto code_r0x016cc7a4;
            }
            auVar43 = func_0x00f78af4();
            uVar29 = auVar43._8_8_;
            lVar26 = auVar43._0_8_;
            puVar9 = puVar11 + -0x150;
            *(ulong *)(puVar11 + -0x150) = uVar33;
            *(ulong *)(puVar11 + -0x148) = CONCAT44(0,uVar4);
            *(undefined8 *)(puVar11 + -0x140) = 0;
            *(ulong *)(puVar11 + -0x138) = uVar23;
            *(undefined8 ********)(puVar11 + -0x130) = pppppppuVar34;
            *(undefined **)(puVar11 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
            pppppppuVar34 = (undefined8 *******)(puVar11 + -0x130);
            lVar31 = *(long *)(lVar26 + 0x18);
            uVar4 = *(int *)(lVar26 + 0x10) - 8;
            auVar7._8_8_ = lVar31;
            auVar7._0_8_ = CONCAT44(0,uVar4);
            auVar41._8_4_ = uVar4;
            auVar41._0_8_ = lVar31;
            auVar41._12_4_ = 0;
            *(uint *)(lVar26 + 0x10) = uVar4;
            if (lVar31 != 0) {
              uVar30 = 8;
              puVar39 = &UNK_016cdda4;
              goto code_r0x016cc7a4;
            }
            auVar43 = func_0x00f78af4();
            uVar29 = auVar43._8_8_;
            lVar26 = auVar43._0_8_;
            puVar9 = puVar11 + -0x180;
            *(ulong *)(puVar11 + -0x180) = uVar33;
            *(ulong *)(puVar11 + -0x178) = CONCAT44(0,uVar4);
            *(undefined8 *)(puVar11 + -0x170) = 0;
            *(ulong *)(puVar11 + -0x168) = uVar23;
            *(undefined8 ********)(puVar11 + -0x160) = pppppppuVar34;
            *(undefined **)(puVar11 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
            pppppppuVar34 = (undefined8 *******)(puVar11 + -0x160);
            lVar31 = *(long *)(lVar26 + 0x18);
            uVar4 = *(int *)(lVar26 + 0x10) - 8;
            unaff_x21 = CONCAT44(0,uVar4);
            auVar7._8_8_ = lVar31;
            auVar7._0_8_ = unaff_x21;
            auVar41._8_4_ = uVar4;
            auVar41._0_8_ = lVar31;
            auVar41._12_4_ = 0;
            *(uint *)(lVar26 + 0x10) = uVar4;
            if (lVar31 != 0) {
              uVar30 = 8;
              puVar39 = &UNK_016cde00;
              goto code_r0x016cc7a4;
            }
            lVar26 = func_0x00f78af4();
            *(undefined8 ********)(puVar11 + -400) = pppppppuVar34;
            *(undefined **)(puVar11 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
            lVar31 = *(long *)(lVar26 + 0x18);
            auVar7._8_8_ = lVar31;
            uVar4 = *(int *)(lVar26 + 0x10) - 4;
            uVar29 = (ulong)uVar4;
            auVar41._8_4_ = uVar4;
            auVar41._0_8_ = lVar31;
            auVar41._12_4_ = 0;
            *(uint *)(lVar26 + 0x10) = uVar4;
            if (lVar31 != 0) {
              puVar9 = puVar11 + -0x1b0;
              *(undefined8 *)(puVar11 + -0x1b0) = unaff_d9;
              *(undefined8 *)(puVar11 + -0x1a8) = unaff_d8;
              *(undefined8 *)(puVar11 + -0x1a0) = 0;
              *(ulong *)(puVar11 + -0x198) = uVar23;
              *(undefined8 *)(puVar11 + -400) = *(undefined8 *)(puVar11 + -400);
              *(undefined8 *)(puVar11 + -0x188) = *(undefined8 *)(puVar11 + -0x188);
              pppppppuVar34 = (undefined8 *******)(puVar11 + -400);
              uVar30 = 4;
              puVar39 = &UNK_016ccba4;
              goto code_r0x016cc7a4;
            }
            lVar26 = func_0x00f78af4();
            *(undefined1 **)(puVar11 + -0x1a0) = puVar11 + -400;
            *(undefined **)(puVar11 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
            lVar31 = *(long *)(lVar26 + 0x18);
            auVar7._8_8_ = lVar31;
            uVar4 = *(int *)(lVar26 + 0x10) - 8;
            uVar29 = (ulong)uVar4;
            auVar41._8_4_ = uVar4;
            auVar41._0_8_ = lVar31;
            auVar41._12_4_ = 0;
            *(uint *)(lVar26 + 0x10) = uVar4;
            if (lVar31 != 0) {
              puVar9 = puVar11 + -0x1c0;
              *(undefined8 *)(puVar11 + -0x1c0) = unaff_d9;
              *(undefined8 *)(puVar11 + -0x1b8) = unaff_d8;
              *(undefined8 *)(puVar11 + -0x1b0) = 0;
              *(ulong *)(puVar11 + -0x1a8) = uVar23;
              *(undefined8 *)(puVar11 + -0x1a0) = *(undefined8 *)(puVar11 + -0x1a0);
              *(undefined8 *)(puVar11 + -0x198) = *(undefined8 *)(puVar11 + -0x198);
              pppppppuVar34 = (undefined8 *******)(puVar11 + -0x1a0);
              uVar30 = 8;
              puVar39 = &UNK_016ccc34;
              goto code_r0x016cc7a4;
            }
            auVar43 = func_0x00f78af4();
            *(undefined8 *)(puVar11 + -0x1c0) = 0;
            *(ulong *)(puVar11 + -0x1b8) = uVar23;
            *(undefined1 **)(puVar11 + -0x1b0) = puVar11 + -0x1a0;
            *(undefined **)(puVar11 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
            ppppppuVar36 = (undefined8 ******)(puVar11 + -0x1b0);
            auVar42._8_8_ = 1;
            auVar42._0_8_ = auVar43._0_8_;
            uVar29 = 0;
            puVar39 = &UNK_016cde9c;
            puVar11 = puVar11 + -0x1c0;
            unaff_x22 = uVar33;
            goto code_r0x016cdaac;
          }
          puVar12 = puVar11 + -0x50;
          uVar25 = *(undefined8 *)(puVar11 + -0x60);
          uVar27 = *(undefined8 *)(puVar11 + -0x58);
        }
        else {
          puVar12 = puVar11 + -0x30;
          uVar25 = *(undefined8 *)(puVar11 + -0x40);
          uVar27 = *(undefined8 *)(puVar11 + -0x38);
        }
        auVar7._8_4_ = iVar17;
        auVar7._0_8_ = lVar26;
        auVar7._12_4_ = 0;
        auVar41._8_4_ = iVar17;
        auVar41._0_8_ = lVar26;
        auVar41._12_4_ = 0;
        puVar9 = puVar12 + -0x30;
        *(ulong *)(puVar12 + -0x30) = uVar33;
        *(ulong *)(puVar12 + -0x28) = unaff_x21;
        *(ulong *)(puVar12 + -0x20) = uVar30;
        *(ulong *)(puVar12 + -0x18) = uVar23;
        *(undefined8 *)(puVar12 + -0x10) = uVar25;
        *(undefined8 *)(puVar12 + -8) = uVar27;
        pppppppuVar34 = (undefined8 *******)(puVar12 + -0x10);
        uVar30 = 1;
        puVar39 = &UNK_016cc89c;
        goto code_r0x016cc7a4;
      }
      uVar2 = *(uint *)(lVar26 + 0x18);
      iVar3 = *(int *)(uVar23 + 0x10);
      uVar1 = iVar3 - (uVar2 + (int)uVar29) & iVar17 - 1U;
      uVar30 = CONCAT44(0,uVar1);
      uVar4 = (int)uVar29 + iVar17 + uVar1;
      uVar33 = (ulong)uVar4;
      uVar24 = uVar23;
      while (unaff_x21 = (ulong)uVar2, iVar3 < (int)uVar4) {
        uVar24 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar23);
        if ((*(long *)(uVar23 + 0x18) == 0) ||
           (lVar26 = *(long *)(*(long *)(uVar23 + 0x18) + 0x10), lVar26 == 0))
        goto code_r0x016cdb68;
        iVar3 = *(int *)(uVar23 + 0x10) - uVar2;
        uVar2 = *(uint *)(lVar26 + 0x18);
        iVar3 = iVar3 + uVar2;
        *(int *)(uVar23 + 0x10) = iVar3;
      }
      if ((int)uVar1 < 1) {
        return uVar24;
      }
      uVar25 = *(undefined8 *)*(undefined1 (*) [16])(puVar11 + -0x20);
      uVar27 = *(undefined8 *)(puVar11 + -0x18);
      auVar43 = *(undefined1 (*) [16])(puVar11 + -0x20);
      unaff_x22 = *(ulong *)(puVar11 + -0x30);
      unaff_x21 = *(ulong *)(puVar11 + -0x28);
      *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      lVar26 = *(long *)(uVar23 + 0x18);
      auVar7._8_8_ = lVar26;
      auVar7._0_8_ = uVar30;
      uVar1 = *(int *)(uVar23 + 0x10) - uVar1;
      uVar33 = (ulong)uVar1;
      auVar41._8_4_ = uVar1;
      auVar41._0_8_ = lVar26;
      auVar41._12_4_ = 0;
      *(uint *)(uVar23 + 0x10) = uVar1;
      if (lVar26 != 0) {
        *(ulong *)(puVar11 + -0x30) = unaff_x22;
        *(ulong *)(puVar11 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar11 + -0x20) = uVar25;
        *(undefined8 *)(puVar11 + -0x18) = uVar27;
        *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
        *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
        pppppppuVar34 = (undefined8 *******)(puVar11 + -0x10);
        puVar39 = &UNK_016cc908;
        uVar29 = 0;
        goto code_r0x016cc7a4;
      }
      lVar26 = func_0x00f78af4();
      ppppppuVar36 = (undefined8 ******)(puVar11 + -0x20);
      *(undefined1 **)(puVar11 + -0x20) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
      if ((*(long *)(lVar26 + 0x18) != 0) &&
         (plVar22 = *(long **)(*(long *)(lVar26 + 0x18) + 0x10), plVar22 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar33 = (**(code **)(*plVar22 + 0x178))
                           (plVar22,(int)plVar22[3] << 1,*(undefined8 *)(*plVar22 + 0x180));
        return uVar33;
      }
      puVar39 = &FlatBuffers_FlatBufferBuilder__Prep;
      auVar42 = func_0x00f78af4();
      puVar11 = puVar11 + -0x20;
    } while( true );
  }
  puVar39 = &UNK_016ce3a4;
code_r0x016cda04:
  *(undefined1 **)(puVar10 + -0x10) = puVar11;
  *(undefined **)(puVar10 + -8) = puVar39;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar26 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar26 != 0)) {
    return (ulong)(uint)(*(int *)(lVar26 + 0x18) - *(int *)(param_1 + 0x10));
  }
  lVar26 = func_0x00f78af4();
  return (ulong)*(byte *)(lVar26 + 0x48);
}



// ============================================================
// RVA: 0x166c188 | Core.Services.Group.AddOtherMembers
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cebe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cec2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ced5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cee1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166c290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166c354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x0166c358) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x0166c294) */
/* WARNING: Removing unreachable block (ram,0x0166c2a0) */
/* WARNING: Removing unreachable block (ram,0x0166c2a8) */
/* WARNING: Removing unreachable block (ram,0x0166c2c4) */
/* WARNING: Removing unreachable block (ram,0x0166c2d0) */
/* WARNING: Removing unreachable block (ram,0x0166c2dc) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016ce320) */
/* WARNING: Removing unreachable block (ram,0x016ced00) */
/* WARNING: Removing unreachable block (ram,0x016ced04) */
/* WARNING: Removing unreachable block (ram,0x016ced10) */
/* WARNING: Removing unreachable block (ram,0x016ced20) */
/* WARNING: Removing unreachable block (ram,0x016ced28) */
/* WARNING: Removing unreachable block (ram,0x016cef64) */
/* WARNING: Removing unreachable block (ram,0x016cef48) */
/* WARNING: Removing unreachable block (ram,0x016cef70) */
/* WARNING: Removing unreachable block (ram,0x016cef78) */
/* WARNING: Removing unreachable block (ram,0x016cef10) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */
/* WARNING: Removing unreachable block (ram,0x016cee20) */
/* WARNING: Removing unreachable block (ram,0x016cee2c) */
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016ced60) */
/* WARNING: Removing unreachable block (ram,0x016cec30) */
/* WARNING: Removing unreachable block (ram,0x016cec38) */
/* WARNING: Removing unreachable block (ram,0x016cec44) */
/* WARNING: Removing unreachable block (ram,0x016cebe8) */
/* WARNING: Removing unreachable block (ram,0x016cec48) */
/* WARNING: Removing unreachable block (ram,0x016cebf0) */
/* WARNING: Removing unreachable block (ram,0x016cec64) */
/* WARNING: Removing unreachable block (ram,0x016cec6c) */
/* WARNING: Removing unreachable block (ram,0x016cec78) */
/* WARNING: Removing unreachable block (ram,0x016ceca8) */
/* WARNING: Removing unreachable block (ram,0x016cec84) */
/* WARNING: Removing unreachable block (ram,0x016cec8c) */
/* WARNING: Removing unreachable block (ram,0x016cec94) */
/* WARNING: Removing unreachable block (ram,0x016ced3c) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cebfc) */
/* WARNING: Removing unreachable block (ram,0x016cec00) */
/* WARNING: Removing unreachable block (ram,0x016cec08) */
/* WARNING: Removing unreachable block (ram,0x016cec20) */
/* WARNING: Removing unreachable block (ram,0x016ceb78) */
/* WARNING: Removing unreachable block (ram,0x016cec58) */
/* WARNING: Removing unreachable block (ram,0x016cecac) */
/* WARNING: Removing unreachable block (ram,0x016cecb8) */
/* WARNING: Removing unreachable block (ram,0x016cecd8) */
/* WARNING: Removing unreachable block (ram,0x016cecf0) */
/* WARNING: Removing unreachable block (ram,0x016cec60) */
/* WARNING: Removing unreachable block (ram,0x016ceb84) */
/* WARNING: Removing unreachable block (ram,0x016ceb88) */
/* WARNING: Removing unreachable block (ram,0x016ceb90) */
/* WARNING: Removing unreachable block (ram,0x016ceb98) */
/* WARNING: Removing unreachable block (ram,0x016ceba0) */
/* WARNING: Removing unreachable block (ram,0x016cebac) */
/* WARNING: Removing unreachable block (ram,0x016cebd8) */
/* WARNING: Removing unreachable block (ram,0x016ceb54) */
/* WARNING: Removing unreachable block (ram,0x016ceb08) */
/* WARNING: Removing unreachable block (ram,0x016ceb10) */
/* WARNING: Removing unreachable block (ram,0x016ceb1c) */
/* WARNING: Removing unreachable block (ram,0x016ceb2c) */
/* WARNING: Removing unreachable block (ram,0x016cea8c) */
/* WARNING: Removing unreachable block (ram,0x016cea9c) */
/* WARNING: Removing unreachable block (ram,0x016ceaa0) */
/* WARNING: Removing unreachable block (ram,0x016ceb30) */
/* WARNING: Removing unreachable block (ram,0x016ceaa8) */
/* WARNING: Removing unreachable block (ram,0x016ced84) */
/* WARNING: Removing unreachable block (ram,0x016ceab0) */
/* WARNING: Removing unreachable block (ram,0x016ceabc) */
/* WARNING: Removing unreachable block (ram,0x016ceac8) */
/* WARNING: Removing unreachable block (ram,0x016ceacc) */
/* WARNING: Removing unreachable block (ram,0x016ced88) */
/* WARNING: Removing unreachable block (ram,0x016ceadc) */
/* WARNING: Removing unreachable block (ram,0x016ceae8) */
/* WARNING: Removing unreachable block (ram,0x016cea78) */
/* WARNING: Removing unreachable block (ram,0x016ce46c) */
/* WARNING: Removing unreachable block (ram,0x016ce3a4) */
/* WARNING: Removing unreachable block (ram,0x016ce3a8) */
/* WARNING: Removing unreachable block (ram,0x016ce3b4) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Group__AddOtherMembers
                (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 **ppuVar14;
  undefined1 uVar15;
  int iVar16;
  long lVar18;
  undefined4 uVar17;
  long lVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  ulong uVar30;
  ulong unaff_x21;
  undefined1 (*pauVar31) [16];
  ulong uVar32;
  ulong unaff_x22;
  undefined8 **unaff_x29;
  undefined8 *******pppppppuVar33;
  undefined1 *puVar34;
  undefined8 ******ppppppuVar35;
  undefined *unaff_x30;
  undefined *puVar36;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [12];
  undefined4 uStack_234;
  undefined1 auStack_230 [16];
  undefined8 uStack_220;
  undefined1 uStack_211;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long alStack_e0 [2];
  undefined8 ******appppppuStack_d0 [2];
  undefined8 ******ppppppuStack_a0;
  undefined *puStack_98;
  undefined8 ****ppppuStack_40;
  undefined *puStack_38;
  undefined8 ***pppuStack_30;
  undefined *puStack_28;
  undefined8 *puStack_20;
  undefined *puStack_18;
  
  auVar37._8_8_ = param_2;
  auVar37._0_8_ = param_1;
  if (param_1 == 0) {
    ppuVar14 = (undefined8 **)&stack0xfffffffffffffff0;
    unaff_x29 = (undefined8 **)&stack0xfffffffffffffff0;
    unaff_x30 = &Core_Services_Group__AddLeader;
    auVar37 = func_0x00f78af4();
    if (auVar37._0_8_ != 0) {
      uVar17 = 1;
      goto FlatBuffers_FlatBufferBuilder__AddOffset;
    }
    ppuVar14 = &puStack_20;
    unaff_x29 = &puStack_20;
    puStack_18 = &Core_Services_Group__AddLeader;
    unaff_x30 = &Core_Services_Group__AddId;
    puStack_20 = (undefined8 *)&stack0xfffffffffffffff0;
    auVar37 = func_0x00f78af4();
    if (auVar37._0_8_ != 0) {
      uVar17 = 0;
      goto FlatBuffers_FlatBufferBuilder__AddOffset;
    }
    puStack_28 = &Core_Services_Group__AddId;
    pppuStack_30 = (undefined8 ***)&puStack_20;
    lVar18 = func_0x00f78af4();
    puStack_38 = &Core_Services_Group__EndGroup;
    ppppuStack_40 = &pppuStack_30;
    if ((bRam0000000003eb58cc & 1) == 0) {
      ppppuStack_40 = &pppuStack_30;
      func_0x00f78a20(0x3d3f0d0);
      bRam0000000003eb58cc = 1;
    }
    if (lVar18 != 0) {
      ppppppuVar35 = (undefined8 ******)&ppppuStack_40;
      auVar41._8_8_ = lVar18;
      auVar41._0_8_ = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (*(int *)(lVar18 + 0x30) < 0) {
        func_0x00f78a24(0x3d22a38);
        puVar36 = (undefined *)func_0x00f78aec();
        uVar27 = func_0x00f78a24(0x3d6cea8);
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar36,uVar27);
        uVar27 = func_0x00f78a24(0x3d56a30);
        auVar42 = func_0x00f78ac0(puVar36,uVar27);
        ppppppuStack_a0 = (undefined8 *******)0x3eb5000;
        ppppppuVar35 = (undefined8 ******)&stack0xffffffffffffff70;
        lVar18 = *(long *)(auVar42._0_8_ + 0x18);
        puStack_98 = puVar36;
        if ((lVar18 != 0) && (*(long *)(lVar18 + 0x10) != 0)) {
          uVar4 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) - auVar42._8_4_;
          uVar28 = (ulong)uVar4;
          auVar39._8_4_ = uVar4;
          auVar39._0_8_ = lVar18;
          auVar39._12_4_ = 0;
          puVar9 = &stack0xffffffffffffff00;
          appppppuStack_d0[1] = (undefined8 ******)&UNK_016cee20;
          pppppppuVar33 = appppppuStack_d0;
          auVar7._8_8_ = 4;
          auVar7._0_8_ = lVar18;
          uVar32 = 0x3d201a0;
          appppppuStack_d0[0] = ppppppuVar35;
          if ((bRam0000000003eb5cd0 & 1) == 0) {
            func_0x00f78a20(0x3d201a0);
            bRam0000000003eb5cd0 = 1;
          }
          uVar30 = 4;
          puVar36 = &UNK_016cc68c;
code_r0x016cc7a4:
          do {
            puVar13 = puVar9 + -0x20;
            *(long *)(puVar9 + -0x20) = auVar7._8_8_;
            *(ulong *)(puVar9 + -0x18) = uVar28;
            *(undefined8 ********)(puVar9 + -0x10) = pppppppuVar33;
            *(undefined **)(puVar9 + -8) = puVar36;
            puVar34 = puVar9 + -0x10;
            if (auVar39._8_4_ < 0) {
code_r0x016cc7d8:
              func_0x00f78a24(0x3d1fcf8);
              uVar28 = func_0x00f78aec();
              /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar28,0);
              uVar27 = func_0x00f78a24(0x3d52ce8);
              func_0x00f78ac0(uVar28,uVar27);
              uVar24 = uVar30;
            }
            else {
              lVar18 = *(long *)(auVar39._0_8_ + 0x10);
              uVar24 = uVar30;
              if (lVar18 != 0) {
                if (auVar39._8_4_ <= *(int *)(lVar18 + 0x18) - (int)uVar30) {
                  return auVar39._0_8_;
                }
                goto code_r0x016cc7d8;
              }
            }
            puVar36 = &FlatBuffers_ByteBuffer__PutSbyte;
            auVar39 = func_0x00f78af4();
code_r0x016cc810:
            puVar9 = puVar13 + -0x30;
            *(ulong *)(puVar13 + -0x30) = uVar32;
            *(undefined1 (*) [16])(puVar13 + -0x28) = auVar7;
            *(ulong *)(puVar13 + -0x18) = uVar28;
            *(undefined1 **)(puVar13 + -0x10) = puVar34;
            *(undefined **)(puVar13 + -8) = puVar36;
            pppppppuVar33 = (undefined8 *******)(puVar13 + -0x10);
            uVar30 = 1;
            puVar36 = &UNK_016cc834;
            uVar28 = uVar24;
            auVar7 = auVar39;
          } while( true );
        }
        func_0x00f78af4();
        uVar27 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffff4c,0);
        uVar25 = func_0x00f78a24(0x3d6ce88);
        uVar26 = func_0x00f78a24(0x3d66338);
        lVar18 = /*System.String$$Concat*/ func_0x029be39c(uVar25,uVar27,uVar26,0);
        func_0x00f78a24(0x3d22a38);
        uVar27 = func_0x00f78aec();
        uVar26 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar27,lVar18);
        uVar25 = func_0x00f78a24(0x3d56a50);
        puVar36 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar37 = func_0x00f78ac0(uVar27,uVar25);
        puVar11 = &stack0xffffffffffffff40;
        while( true ) {
          uVar25 = auVar37._8_8_;
          lVar29 = auVar37._0_8_;
          auVar41._8_8_ = lVar29;
          auVar41._0_8_ = uVar25;
          auVar6._8_8_ = lVar29;
          auVar6._0_8_ = uVar25;
          *(undefined8 *)(puVar11 + -0x20) = uVar27;
          *(long *)(puVar11 + -0x18) = lVar18;
          *(undefined8 *******)(puVar11 + -0x10) = ppppppuVar35;
          *(undefined **)(puVar11 + -8) = puVar36;
          ppppppuVar35 = (undefined8 ******)(puVar11 + -0x10);
          uVar17 = *(undefined4 *)(lVar29 + 0x20);
          auVar40._8_4_ = uVar17;
          auVar40._0_8_ = lVar29;
          auVar40._12_4_ = 0;
          lVar18 = lVar29;
          if ((int)uVar26 == 0) {
            lVar18 = 0;
            uVar17 = 0;
          }
          auVar5._8_4_ = uVar17;
          auVar5._0_8_ = lVar18;
          auVar5._12_4_ = 0;
          if ((int)uVar26 == 0) {
            uVar28 = 4;
            puVar36 = &UNK_016cef64;
            puVar11 = puVar11 + -0x20;
            goto code_r0x016cdaac;
          }
          if (lVar18 != 0) break;
          puVar36 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar37 = func_0x00f78af4();
          uVar26 = 0;
          puVar11 = puVar11 + -0x20;
          lVar18 = lVar29;
          uVar27 = uVar25;
        }
        uVar28 = 8;
        puVar36 = &UNK_016cef10;
        puVar11 = puVar11 + -0x20;
        auVar40 = auVar5;
        auVar41 = auVar6;
      }
      else {
        auVar40._8_8_ = 4;
        auVar40._0_8_ = lVar18;
        uVar28 = 0;
        puVar36 = &UNK_016cea78;
        puVar11 = &stack0xffffffffffffff80;
      }
      goto code_r0x016cdaac;
    }
    lVar18 = func_0x00f78af4();
    if (lVar18 == 0) {
      auVar38 = func_0x00f78af4();
      lVar18 = auVar38._0_8_;
      if ((auVar38._8_8_ == 0) || (lVar18 == 0)) {
        auVar38 = func_0x00f78af4();
        lVar29 = auVar38._8_8_;
        lVar18 = auVar38._0_8_;
        puVar11 = &stack0xffffffffffffff40;
        puStack_98 = &Core_Services_Group__CreateOtherMembersVectorBlock;
        pppppppuVar33 = &ppppppuStack_a0;
        unaff_x21 = 0x3eb5000;
        ppppppuStack_a0 = (undefined8 ******)&stack0xffffffffffffff90;
        if ((bRam0000000003eb58cb & 1) == 0) {
          func_0x00f78a20(0x3d569d8);
          bRam0000000003eb58cb = 1;
        }
        if ((lVar29 == 0) || (lVar18 == 0)) {
          puVar36 = &Core_Services_Group__StartOtherMembersVector;
          auVar42 = func_0x00f78af4();
          iVar16 = auVar42._8_4_;
          auVar38._8_8_ = lVar29;
          auVar38._0_8_ = auVar42._0_8_;
          if (auVar42._0_8_ == 0) {
            appppppuStack_d0[1] = (undefined8 ******)&Core_Services_Group__StartOtherMembersVector;
            appppppuStack_d0[0] = pppppppuVar33;
            auVar37 = func_0x00f78af4();
            pauVar31 = auVar37._0_8_;
            if ((bRam0000000003eb5985 & 1) == 0) {
              func_0x00f78a20(0x3d22970);
              bRam0000000003eb5985 = 1;
            }
            if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar18 = *(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
            if (lVar18 == 0) {
              return 0;
            }
            if ((bRam0000000003eb5979 & 1) == 0) {
              func_0x00f78a20(0x3d1fa70);
              func_0x00f78a20(0x3d203b0);
              func_0x00f78a20(0x3d21628);
              func_0x00f78a20(0x3d21c98);
              func_0x00f78a20(0x3d22910);
              func_0x00f78a20(0x3d22e30);
              func_0x00f78a20(0x3d22e40);
              func_0x00f78a20(0x3d3d368);
              func_0x00f78a20(0x3d23210);
              func_0x00f78a20(0x3d238c8);
              func_0x00f78a20(0x3d3ea00);
              func_0x00f78a20(0x3d3ecf8);
              func_0x00f78a20(0x3d3ebf0);
              func_0x00f78a20(0x3d3eaf8);
              func_0x00f78a20(0x3d3ecd8);
              func_0x00f78a20(0x3d3e598);
              func_0x00f78a20(0x3d3eae0);
              func_0x00f78a20(0x3d3e878);
              func_0x00f78a20(0x3d1e498);
              func_0x00f78a20(0x3d23d20);
              func_0x00f78a20(0x3d3f4e0);
              func_0x00f78a20(0x3d1e648);
              func_0x00f78a20(0x3d24490);
              func_0x00f78a20(0x3d5c740);
              func_0x00f78a20(0x3d5c748);
              func_0x00f78a20(0x3d5c750);
              func_0x00f78a20(0x3d5c758);
              func_0x00f78a20(0x3d5c760);
              func_0x00f78a20(0x3d5c768);
              func_0x00f78a20(0x3d5c770);
              func_0x00f78a20(0x3d246c0);
              func_0x00f78a20(0x3d246f8);
              func_0x00f78a20(0x3d24970);
              func_0x00f78a20(0x3d63340);
              func_0x00f78a20(0x3d27be8);
              func_0x00f78a20(0x3d41468);
              func_0x00f78a20(0x3d41470);
              func_0x00f78a20(0x3d71ef0);
              func_0x00f78a20(0x3d67d88);
              func_0x00f78a20(0x3d67d90);
              func_0x00f78a20(0x3d67d70);
              bRam0000000003eb5979 = 1;
            }
            uStack_150 = 0;
            uStack_148 = 0;
            uStack_140 = 0;
            uStack_170 = 0;
            uStack_168 = 0;
            uStack_160 = 0;
            uStack_190 = 0;
            uStack_188 = 0;
            uStack_180 = 0;
            uStack_1b0 = 0;
            uStack_1a8 = 0;
            uStack_1a0 = 0;
            uStack_1d0 = 0;
            uStack_1c8 = 0;
            uStack_1c0 = 0;
            uStack_1f0 = 0;
            uStack_1e8 = 0;
            uStack_1e0 = 0;
            uStack_210 = 0;
            uStack_208 = 0;
            uStack_200 = 0;
            lVar29 = func_0x00f78aec(/*Core.Services.Internal.<>c__DisplayClass234_0_TypeInfo*/ uRam0000000003d27be8);
            /*Core.Services.Internal.<>c__DisplayClass234_0$$.ctor*/ func_0x016884bc(lVar29,0);
            lVar19 = func_0x00f78aec(/*FlatBuffers.ByteBuffer_TypeInfo*/ uRam0000000003d203b0);
            /*FlatBuffers.ByteBuffer$$.ctor*/ func_0x016cbfd8(lVar19,auVar37._8_8_,0);
            if (lVar19 != 0) {
              uVar27 = /*FlatBuffers.ByteBuffer$$get_Data*/ func_0x016cc19c(lVar19,0);
              if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*System.Runtime.InteropServices.Marshal$$Copy*/ func_0x02b00b6c(pauVar31,uVar27,0,auVar37._8_8_,0);
              auVar37 = /*Core.Services.Response$$GetRootAsResponse*/ func_0x01683e24(lVar19,0);
              if (lVar29 != 0) {
                pauVar31 = (undefined1 (*) [16])(lVar29 + 0x10);
                *pauVar31 = auVar37;
                lVar19 = *(long *)(lVar18 + 0x4d0);
                uVar27 = func_0x00f78aec(/*System.Predicate<Internal.NativeRequest>_TypeInfo*/ uRam0000000003d1e648);
                /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(uVar27,lVar29,uRam0000000003d63340,uRam0000000003d3f4e0);
                if (lVar19 != 0) {
                  lVar29 = /*System.Collections.Generic.List<RuntimeManager.AttachedInstance>$$Find*/ func_0x024278b4(lVar19,uVar27,uRam0000000003d3d368);
                  uVar32 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar31,0);
                  if ((int)uVar32 == 0) {
                    if (lVar29 == 0) {
                      return uVar32;
                    }
                    iVar16 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                    if (iVar16 == 0) {
                      auStack_230._0_4_ = *(undefined4 *)(lVar29 + 0x10);
                      uVar27 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,auStack_230);
                      uVar27 = /*System.String$$Format*/ func_0x029bc688(/*STR('<= ({0})')*/ uRam0000000003d67d70,uVar27,0);
                      /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar18,1,uVar27);
                      if (*(long *)(lVar29 + 0x20) != 0) {
                        uVar32 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(*(long *)(lVar29 + 0x20),0,uRam0000000003d41470);
                        return uVar32;
                      }
                      func_0x00f78af4();
                    }
                    else {
                      uVar17 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                      switch(uVar17) {
                      case 1:
                      case 2:
                      case 0xb:
                        /*Core.Services.Response$$Payload<Group>*/ func_0x018de110(auStack_230,pauVar31,uRam0000000003d5c748);
                        uStack_148 = auStack_230._8_8_;
                        uStack_150 = auStack_230._0_8_;
                        uStack_140 = uStack_220;
                        auVar37 = /*System.Nullable<Group>$$get_Value*/ func_0x026518f8(&uStack_150,uRam0000000003d3e878);
                        uStack_234 = *(undefined4 *)(lVar29 + 0x10);
                        uVar27 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_234);
                        uStack_211 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                        uVar25 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_211);
                        uVar26 = Core_Services_Extensions__Print(auVar37._0_8_,auVar37._8_8_);
                        uVar27 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar27,uVar25,uVar26,0);
                        /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar18,1,uVar27);
                        lVar18 = *(long *)(lVar29 + 0x20);
                        auStack_230 = auVar37;
                        uVar27 = func_0x00f78ae0(/*Core.Services.Group_TypeInfo*/ uRam0000000003d21c98,auStack_230);
                        if (lVar18 != 0) {
                          uVar32 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar18,uVar27,uRam0000000003d41470);
                          return uVar32;
                        }
                        func_0x00f78af4(uVar27,uVar27);
                        break;
                      case 3:
                      case 4:
                      case 5:
                        /*Core.Services.Response$$Payload<Achievements>*/ func_0x018de074(auStack_230,pauVar31,uRam0000000003d5c740);
                        uStack_168 = auStack_230._8_8_;
                        uStack_170 = auStack_230._0_8_;
                        uStack_160 = uStack_220;
                        auVar37 = /*System.Nullable<Achievements>$$get_Value*/ func_0x02619a48(&uStack_170,uRam0000000003d3e598);
                        uStack_234 = *(undefined4 *)(lVar29 + 0x10);
                        uVar27 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_234);
                        uStack_211 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                        uVar25 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_211);
                        uVar26 = Core_Services_Extensions__Print(auVar37._0_8_,auVar37._8_8_);
                        uVar27 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar27,uVar25,uVar26,0);
                        /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar18,1,uVar27);
                        lVar18 = *(long *)(lVar29 + 0x20);
                        auStack_230 = auVar37;
                        uVar27 = func_0x00f78ae0(/*Core.Services.Achievements_TypeInfo*/ uRam0000000003d1fa70,auStack_230);
                        if (lVar18 != 0) {
                          uVar32 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar18,uVar27,uRam0000000003d41470);
                          return uVar32;
                        }
                        func_0x00f78af4(uVar27,uVar27);
                        break;
                      case 6:
                        /*Core.Services.Response$$Payload<LeaderboardSets>*/ func_0x018de248(auStack_230,pauVar31,uRam0000000003d5c758);
                        uStack_188 = auStack_230._8_8_;
                        uStack_190 = auStack_230._0_8_;
                        uStack_180 = uStack_220;
                        auVar37 = /*System.Nullable<LeaderboardSets>$$get_Value*/ func_0x0265bcf4(&uStack_190,uRam0000000003d3eaf8);
                        uStack_234 = *(undefined4 *)(lVar29 + 0x10);
                        uVar27 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_234);
                        uStack_211 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                        uVar25 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_211);
                        uVar26 = Core_Services_Extensions__Print(auVar37._0_8_,auVar37._8_8_);
                        uVar27 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar27,uVar25,uVar26,0);
                        /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar18,1,uVar27);
                        lVar18 = *(long *)(lVar29 + 0x20);
                        auStack_230 = auVar37;
                        uVar27 = func_0x00f78ae0(/*Core.Services.LeaderboardSets_TypeInfo*/ uRam0000000003d22e40,auStack_230);
                        if (lVar18 != 0) {
                          uVar32 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar18,uVar27,uRam0000000003d41470);
                          return uVar32;
                        }
                        func_0x00f78af4(uVar27,uVar27);
                        break;
                      case 7:
                        /*Core.Services.Response$$Payload<LeaderboardScores>*/ func_0x018de1ac(auStack_230,pauVar31,uRam0000000003d5c750);
                        uStack_1a8 = auStack_230._8_8_;
                        uStack_1b0 = auStack_230._0_8_;
                        uStack_1a0 = uStack_220;
                        auVar37 = /*System.Nullable<LeaderboardScores>$$get_Value*/ func_0x0265b17c(&uStack_1b0,uRam0000000003d3eae0);
                        uStack_234 = *(undefined4 *)(lVar29 + 0x10);
                        uVar27 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_234);
                        uStack_211 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                        uVar25 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_211);
                        uVar26 = Core_Services_Extensions__Print(auVar37._0_8_,auVar37._8_8_);
                        uVar27 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar27,uVar25,uVar26,0);
                        /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar18,1,uVar27);
                        lVar18 = *(long *)(lVar29 + 0x20);
                        auStack_230 = auVar37;
                        uVar27 = func_0x00f78ae0(/*Core.Services.LeaderboardScores_TypeInfo*/ uRam0000000003d22e30,auStack_230);
                        if (lVar18 != 0) {
                          uVar32 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar18,uVar27,uRam0000000003d41470);
                          return uVar32;
                        }
                        func_0x00f78af4(uVar27,uVar27);
                        break;
                      case 8:
                      case 9:
                      case 10:
                        /*Core.Services.Response$$Payload<Player>*/ func_0x018de2e4(auStack_230,pauVar31,uRam0000000003d5c760);
                        uStack_1c8 = auStack_230._8_8_;
                        uStack_1d0 = auStack_230._0_8_;
                        uStack_1c0 = uStack_220;
                        auVar37 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(&uStack_1d0,uRam0000000003d3ebf0);
                        uStack_234 = *(undefined4 *)(lVar29 + 0x10);
                        uVar27 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_234);
                        uStack_211 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                        uVar25 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_211);
                        uVar26 = Core_Services_Extensions__Print(auVar37._0_8_,auVar37._8_8_);
                        uVar27 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar27,uVar25,uVar26,0);
                        /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar18,1,uVar27);
                        lVar18 = *(long *)(lVar29 + 0x20);
                        auStack_230 = auVar37;
                        uVar27 = func_0x00f78ae0(/*Core.Services.Player_TypeInfo*/ uRam0000000003d23d20,auStack_230);
                        if (lVar18 != 0) {
                          uVar32 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar18,uVar27,uRam0000000003d41470);
                          return uVar32;
                        }
                        func_0x00f78af4(uVar27,uVar27);
                        break;
                      case 0xc:
                        /*Core.Services.Response$$Payload<Saves>*/ func_0x018de41c(auStack_230,pauVar31,uRam0000000003d5c770);
                        uStack_1e8 = auStack_230._8_8_;
                        uStack_1f0 = auStack_230._0_8_;
                        uStack_1e0 = uStack_220;
                        auVar37 = /*System.Nullable<Saves>$$get_Value*/ func_0x02660838(&uStack_1f0,uRam0000000003d3ecf8);
                        uStack_234 = *(undefined4 *)(lVar29 + 0x10);
                        uVar27 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_234);
                        uStack_211 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                        uVar25 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_211);
                        uVar26 = Core_Services_Extensions__Print(auVar37._0_8_,auVar37._8_8_);
                        uVar27 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar27,uVar25,uVar26,0);
                        /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar18,1,uVar27);
                        lVar18 = *(long *)(lVar29 + 0x20);
                        auStack_230 = auVar37;
                        uVar27 = func_0x00f78ae0(/*Core.Services.Saves_TypeInfo*/ uRam0000000003d246f8,auStack_230);
                        if (lVar18 != 0) {
                          uVar32 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar18,uVar27,uRam0000000003d41470);
                          return uVar32;
                        }
                        func_0x00f78af4(uVar27,uVar27);
                        break;
                      case 0xd:
                      case 0xe:
                      case 0xf:
                      case 0x10:
                      case 0x11:
                        /*Core.Services.Response$$Payload<Save>*/ func_0x018de380(auStack_230,pauVar31,uRam0000000003d5c768);
                        uStack_208 = auStack_230._8_8_;
                        uStack_210 = auStack_230._0_8_;
                        uStack_200 = uStack_220;
                        auVar37 = /*System.Nullable<Save>$$get_Value*/ func_0x0265fcc0(&uStack_210,uRam0000000003d3ecd8);
                        uStack_234 = *(undefined4 *)(lVar29 + 0x10);
                        uVar27 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_234);
                        uStack_211 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                        uVar25 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_211);
                        uVar26 = Core_Services_Extensions__Print(auVar37._0_8_,auVar37._8_8_);
                        uVar27 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar27,uVar25,uVar26,0);
                        /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar18,1,uVar27);
                        lVar18 = *(long *)(lVar29 + 0x20);
                        auStack_230 = auVar37;
                        uVar27 = func_0x00f78ae0(/*Core.Services.Save_TypeInfo*/ uRam0000000003d246c0,auStack_230);
                        if (lVar18 != 0) {
                          uVar32 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar18,uVar27,uRam0000000003d41470);
                          return uVar32;
                        }
                        func_0x00f78af4(uVar27,uVar27);
                        break;
                      default:
                        lVar18 = *(long *)(lVar29 + 0x20);
                        uVar15 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                        auStack_230[0] = uVar15;
                        uVar27 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,auStack_230);
                        uVar27 = /*System.String$$Format*/ func_0x029bc688(/*STR('Response payload unsupported, {0}')*/ uRam0000000003d71ef0,uVar27,0);
                        uVar25 = func_0x00f78aec(/*System.NotImplementedException_TypeInfo*/ uRam0000000003d238c8);
                        /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar25,uVar27,0);
                        if (lVar18 != 0) {
                          uVar32 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetException*/ func_0x028b5768(lVar18,uVar25,uRam0000000003d41468);
                          return uVar32;
                        }
                        func_0x00f78af4();
                      }
                    }
                    goto code_r0x0167a748;
                  }
                  iVar16 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar31,0);
                  if (iVar16 != 0) {
                    *(char *)(lVar18 + 0x4e1) = (char)iVar16;
                  }
                  uVar27 = /*STR('<= ({0}) {1} ErrorCode:{2}')*/ uRam0000000003d67d88;
                  if (lVar29 == 0) {
                    auStack_230._0_8_ = 0;
                  }
                  else {
                    auStack_230._0_8_ = 0;
                    /*System.Nullable<int>$$.ctor*/ func_0x02658d80(auStack_230,*(undefined4 *)(lVar29 + 0x10),uRam0000000003d3ea00)
                    ;
                  }
                  uVar25 = func_0x00f78ae0(/*System.Nullable<int>_TypeInfo*/ uRam0000000003d1e498,auStack_230);
                  uVar15 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar31,0);
                  uStack_234 = CONCAT31(uStack_234._1_3_,uVar15);
                  lVar19 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_234);
                  if ((lVar19 != 0) &&
                     (plVar22 = (long *)/*System.Object$$GetType*/ func_0x02959198(lVar19,0), plVar22 != (long *)0x0)) {
                    uVar26 = (**(code **)(*plVar22 + 0x1b8))
                                       (plVar22,*(undefined8 *)(*plVar22 + 0x1c0));
                    uStack_211 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar31,0);
                    uVar20 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_211);
                    uVar27 = /*System.String$$Format*/ func_0x029bdf30(uVar27,uVar25,uVar26,uVar20,0);
                    uVar32 = /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar18,4,uVar27);
                    if (lVar29 == 0) {
                      return uVar32;
                    }
                    lVar18 = *(long *)(lVar29 + 0x20);
                    pauVar31 = (undefined1 (*) [16])/*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar31,0);
                    uVar27 = func_0x00f78aec(/*Core.Services.ServicesException_TypeInfo*/ uRam0000000003d24970);
                    /*Core.Services.ServicesException$$.ctor*/ func_0x01684c6c(uVar27,pauVar31,0);
                    if (lVar18 != 0) {
                      uVar32 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetException*/ func_0x028b5768(lVar18,uVar27,uRam0000000003d41468);
                      return uVar32;
                    }
                  }
                }
              }
            }
            func_0x00f78af4();
            puVar21 = (undefined8 *)___cxa_allocate_exception(8);
            *puVar21 = *(undefined8 *)*pauVar31;
            ___cxa_throw(puVar21,&DAT_03a5ed38,0);
code_r0x0167a748:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x167a74c);
            (*pcVar8)();
          }
        }
        else {
          unaff_x21 = 0x3d56000;
          iVar16 = *(int *)(lVar29 + 0x18);
          puVar36 = &UNK_0166c358;
          puVar11 = &stack0xffffffffffffff40;
        }
      }
      else {
        iVar16 = *(int *)(auVar38._8_8_ + 0x18);
        puVar36 = &UNK_0166c294;
        puVar11 = &stack0xffffffffffffff70;
        pppppppuVar33 = (undefined8 *******)&stack0xffffffffffffff90;
      }
      uVar32 = auVar38._0_8_;
      *(ulong *)(puVar11 + -0x30) = unaff_x22;
      *(ulong *)(puVar11 + -0x28) = unaff_x21;
      *(long *)(puVar11 + -0x20) = auVar38._8_8_;
      *(long *)(puVar11 + -0x18) = lVar18;
      *(undefined8 ********)(puVar11 + -0x10) = pppppppuVar33;
      *(undefined **)(puVar11 + -8) = puVar36;
      ppppppuVar35 = (undefined8 ******)(puVar11 + -0x10);
      unaff_x21 = 4;
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
      *(int *)(uVar32 + 0x44) = iVar16;
      uVar28 = CONCAT44(0,iVar16 * 4);
      auVar41._8_8_ = 4;
      auVar41._0_8_ = uVar28;
      auVar40._8_8_ = 4;
      auVar40._0_8_ = uVar32;
      puVar36 = &UNK_016ce188;
      puVar11 = puVar11 + -0x30;
      unaff_x22 = uVar32;
      goto code_r0x016cdaac;
    }
    puVar10 = &stack0xffffffffffffff80;
    ppuVar14 = (undefined8 **)&stack0xffffffffffffff80;
    puVar11 = &stack0xffffffffffffffa0;
    uVar27 = 3;
    uVar32 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,3,0);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar18);
    if (*(long *)(lVar18 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar18 + 0x28) + 0x18) < 3) {
        uVar27 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
        *(undefined8 *)(lVar18 + 0x28) = uVar27;
      }
      *(undefined4 *)(lVar18 + 0x30) = 3;
      puVar36 = &UNK_016ce320;
      goto code_r0x016cda04;
    }
    puVar36 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar42 = func_0x00f78af4();
    lVar29 = lVar18;
  }
  else {
    uVar17 = 2;
    ppuVar14 = (undefined8 **)register0x00000008;
FlatBuffers_FlatBufferBuilder__AddOffset:
    uVar32 = auVar37._0_8_;
    auVar42._8_4_ = uVar17;
    auVar42._0_8_ = uVar32;
    param_4 = 0;
    *(undefined8 *)((long)ppuVar14 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppuVar14 + -0x18) = unaff_x19;
    *(undefined8 ***)((long)ppuVar14 + -0x10) = unaff_x29;
    *(undefined **)((long)ppuVar14 + -8) = unaff_x30;
    if ((auVar37._8_4_ == 0) && (*(char *)(uVar32 + 0x48) == '\0')) {
      return uVar32;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar32,auVar37._8_8_,auVar37._8_8_,0,0);
    puVar11 = *(undefined1 **)((long)ppuVar14 + -0x10);
    puVar36 = *(undefined **)((long)ppuVar14 + -8);
    uVar27 = *(undefined8 *)((long)ppuVar14 + -0x20);
    lVar29 = *(long *)((long)ppuVar14 + -0x18);
    uVar32 = unaff_x21;
  }
  lVar18 = auVar42._0_8_;
  puVar10 = (undefined1 *)((long)ppuVar14 + -0x20);
  *(undefined8 *)((long)ppuVar14 + -0x20) = uVar27;
  *(long *)((long)ppuVar14 + -0x18) = lVar29;
  *(undefined1 **)((long)ppuVar14 + -0x10) = puVar11;
  *(undefined **)((long)ppuVar14 + -8) = puVar36;
  puVar11 = (undefined1 *)((long)ppuVar14 + -0x10);
  if (auVar42._8_4_ < *(int *)(lVar18 + 0x30)) {
    puVar36 = &UNK_016ce3a4;
code_r0x016cda04:
    *(undefined1 **)(puVar10 + -0x10) = puVar11;
    *(undefined **)(puVar10 + -8) = puVar36;
    if ((*(long *)(lVar18 + 0x18) != 0) &&
       (lVar29 = *(long *)(*(long *)(lVar18 + 0x18) + 0x10), lVar29 != 0)) {
      return (ulong)(uint)(*(int *)(lVar29 + 0x18) - *(int *)(lVar18 + 0x10));
    }
    lVar18 = func_0x00f78af4();
    return (ulong)*(byte *)(lVar18 + 0x48);
  }
  func_0x00f78a24(0x3d22738);
  uVar25 = func_0x00f78aec();
  uVar26 = func_0x00f78a24(0x3d6ceb8);
  unaff_x21 = 0;
  /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar25,uVar26);
  uVar26 = func_0x00f78a24(0x3d56a58);
  func_0x00f78ac0(uVar25,uVar26);
  func_0x00f78af4();
  uVar26 = func_0x00f78b24();
  auVar41 = func_0x00f78ac0(uVar26,0);
  uVar28 = auVar41._0_8_;
  *(ulong *)((long)ppuVar14 + -0x50) = unaff_x22;
  *(ulong *)((long)ppuVar14 + -0x48) = uVar32;
  *(undefined8 *)((long)ppuVar14 + -0x40) = uVar27;
  *(undefined8 *)((long)ppuVar14 + -0x38) = uVar25;
  *(undefined1 **)((long)ppuVar14 + -0x30) = puVar11;
  *(undefined **)((long)ppuVar14 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
  ppppppuVar35 = (undefined8 ******)((long)ppuVar14 + -0x30);
  if (((int)unaff_x21 == param_4) && (*(char *)(uVar28 + 0x48) == '\0')) {
    return uVar28;
  }
  auVar40._8_8_ = 1;
  auVar40._0_8_ = uVar28;
  uVar28 = 0;
  puVar36 = &UNK_016ce46c;
  puVar11 = (undefined1 *)((long)ppuVar14 + -0x50);
code_r0x016cdaac:
  do {
    uVar30 = auVar41._0_8_;
    uVar23 = auVar40._0_8_;
    puVar9 = puVar11 + -0x30;
    *(ulong *)(puVar11 + -0x30) = unaff_x22;
    *(ulong *)(puVar11 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])(puVar11 + -0x20) = auVar41;
    *(undefined8 *******)(puVar11 + -0x10) = ppppppuVar35;
    *(undefined **)(puVar11 + -8) = puVar36;
    iVar16 = auVar40._8_4_;
    if (*(int *)(uVar23 + 0x20) < iVar16) {
      *(int *)(uVar23 + 0x20) = iVar16;
    }
    uVar32 = unaff_x22;
    if ((*(long *)(uVar23 + 0x18) == 0) ||
       (lVar18 = *(long *)(*(long *)(uVar23 + 0x18) + 0x10), lVar18 == 0)) {
code_r0x016cdb68:
      auVar7._8_8_ = uVar30;
      auVar7._0_8_ = unaff_x21;
      auVar37 = func_0x00f78af4();
      uVar28 = auVar37._8_8_;
      lVar29 = auVar37._0_8_;
      *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
      lVar18 = *(long *)(lVar29 + 0x18);
      iVar16 = *(int *)(lVar29 + 0x10) + -1;
      *(int *)(lVar29 + 0x10) = iVar16;
      if (lVar18 == 0) {
        auVar37 = func_0x00f78af4();
        uVar24 = auVar37._8_8_;
        lVar18 = auVar37._0_8_;
        *(undefined1 **)(puVar11 + -0x50) = puVar11 + -0x40;
        *(undefined **)(puVar11 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
        iVar16 = *(int *)(lVar18 + 0x10) + -1;
        auVar39._8_4_ = iVar16;
        auVar39._0_8_ = *(long *)(lVar18 + 0x18);
        auVar39._12_4_ = 0;
        *(int *)(lVar18 + 0x10) = iVar16;
        if (*(long *)(lVar18 + 0x18) != 0) {
          puVar13 = puVar11 + -0x40;
          puVar34 = *(undefined1 **)(puVar11 + -0x50);
          puVar36 = *(undefined **)(puVar11 + -0x48);
          uVar28 = uVar23;
          goto code_r0x016cc810;
        }
        auVar37 = func_0x00f78af4();
        uVar28 = auVar37._8_8_;
        lVar29 = auVar37._0_8_;
        *(undefined1 **)(puVar11 + -0x60) = puVar11 + -0x50;
        *(undefined **)(puVar11 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
        lVar18 = *(long *)(lVar29 + 0x18);
        iVar16 = *(int *)(lVar29 + 0x10) + -1;
        *(int *)(lVar29 + 0x10) = iVar16;
        if (lVar18 == 0) {
          auVar37 = func_0x00f78af4();
          uVar28 = auVar37._8_8_;
          lVar18 = auVar37._0_8_;
          puVar9 = puVar11 + -0x90;
          *(ulong *)(puVar11 + -0x90) = uVar32;
          *(ulong *)(puVar11 + -0x88) = unaff_x21;
          *(ulong *)(puVar11 + -0x80) = uVar30;
          *(ulong *)(puVar11 + -0x78) = uVar23;
          *(undefined1 **)(puVar11 + -0x70) = puVar11 + -0x60;
          *(undefined **)(puVar11 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
          pppppppuVar33 = (undefined8 *******)(puVar11 + -0x70);
          lVar29 = *(long *)(lVar18 + 0x18);
          uVar4 = *(int *)(lVar18 + 0x10) - 2;
          auVar7._8_8_ = lVar29;
          auVar7._0_8_ = CONCAT44(0,uVar4);
          auVar39._8_4_ = uVar4;
          auVar39._0_8_ = lVar29;
          auVar39._12_4_ = 0;
          *(uint *)(lVar18 + 0x10) = uVar4;
          if (lVar29 != 0) {
            uVar30 = 2;
            puVar36 = &UNK_016cdc34;
            goto code_r0x016cc7a4;
          }
          auVar37 = func_0x00f78af4();
          uVar28 = auVar37._8_8_;
          lVar18 = auVar37._0_8_;
          puVar9 = puVar11 + -0xc0;
          *(ulong *)(puVar11 + -0xc0) = uVar32;
          *(ulong *)(puVar11 + -0xb8) = CONCAT44(0,uVar4);
          *(undefined8 *)(puVar11 + -0xb0) = 0;
          *(ulong *)(puVar11 + -0xa8) = uVar23;
          *(undefined8 ********)(puVar11 + -0xa0) = pppppppuVar33;
          *(undefined **)(puVar11 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
          pppppppuVar33 = (undefined8 *******)(puVar11 + -0xa0);
          lVar29 = *(long *)(lVar18 + 0x18);
          uVar4 = *(int *)(lVar18 + 0x10) - 2;
          auVar7._8_8_ = lVar29;
          auVar7._0_8_ = CONCAT44(0,uVar4);
          auVar39._8_4_ = uVar4;
          auVar39._0_8_ = lVar29;
          auVar39._12_4_ = 0;
          *(uint *)(lVar18 + 0x10) = uVar4;
          if (lVar29 != 0) {
            uVar30 = 2;
            puVar36 = &UNK_016cdc90;
            goto code_r0x016cc7a4;
          }
          auVar37 = func_0x00f78af4();
          uVar28 = auVar37._8_8_;
          lVar18 = auVar37._0_8_;
          puVar9 = puVar11 + -0xf0;
          *(ulong *)(puVar11 + -0xf0) = uVar32;
          *(ulong *)(puVar11 + -0xe8) = CONCAT44(0,uVar4);
          *(undefined8 *)(puVar11 + -0xe0) = 0;
          *(ulong *)(puVar11 + -0xd8) = uVar23;
          *(undefined8 ********)(puVar11 + -0xd0) = pppppppuVar33;
          *(undefined **)(puVar11 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
          pppppppuVar33 = (undefined8 *******)(puVar11 + -0xd0);
          lVar29 = *(long *)(lVar18 + 0x18);
          uVar4 = *(int *)(lVar18 + 0x10) - 4;
          auVar7._8_8_ = lVar29;
          auVar7._0_8_ = CONCAT44(0,uVar4);
          auVar39._8_4_ = uVar4;
          auVar39._0_8_ = lVar29;
          auVar39._12_4_ = 0;
          *(uint *)(lVar18 + 0x10) = uVar4;
          if (lVar29 != 0) {
            uVar30 = 4;
            puVar36 = &UNK_016cdcec;
            goto code_r0x016cc7a4;
          }
          auVar37 = func_0x00f78af4();
          uVar28 = auVar37._8_8_;
          lVar18 = auVar37._0_8_;
          puVar9 = puVar11 + -0x120;
          *(ulong *)(puVar11 + -0x120) = uVar32;
          *(ulong *)(puVar11 + -0x118) = CONCAT44(0,uVar4);
          *(undefined8 *)(puVar11 + -0x110) = 0;
          *(ulong *)(puVar11 + -0x108) = uVar23;
          *(undefined8 ********)(puVar11 + -0x100) = pppppppuVar33;
          *(undefined **)(puVar11 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
          pppppppuVar33 = (undefined8 *******)(puVar11 + -0x100);
          lVar29 = *(long *)(lVar18 + 0x18);
          uVar4 = *(int *)(lVar18 + 0x10) - 4;
          auVar7._8_8_ = lVar29;
          auVar7._0_8_ = CONCAT44(0,uVar4);
          auVar39._8_4_ = uVar4;
          auVar39._0_8_ = lVar29;
          auVar39._12_4_ = 0;
          *(uint *)(lVar18 + 0x10) = uVar4;
          if (lVar29 != 0) {
            uVar30 = 4;
            puVar36 = &UNK_016cdd48;
            goto code_r0x016cc7a4;
          }
          auVar37 = func_0x00f78af4();
          uVar28 = auVar37._8_8_;
          lVar18 = auVar37._0_8_;
          puVar9 = puVar11 + -0x150;
          *(ulong *)(puVar11 + -0x150) = uVar32;
          *(ulong *)(puVar11 + -0x148) = CONCAT44(0,uVar4);
          *(undefined8 *)(puVar11 + -0x140) = 0;
          *(ulong *)(puVar11 + -0x138) = uVar23;
          *(undefined8 ********)(puVar11 + -0x130) = pppppppuVar33;
          *(undefined **)(puVar11 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
          pppppppuVar33 = (undefined8 *******)(puVar11 + -0x130);
          lVar29 = *(long *)(lVar18 + 0x18);
          uVar4 = *(int *)(lVar18 + 0x10) - 8;
          auVar7._8_8_ = lVar29;
          auVar7._0_8_ = CONCAT44(0,uVar4);
          auVar39._8_4_ = uVar4;
          auVar39._0_8_ = lVar29;
          auVar39._12_4_ = 0;
          *(uint *)(lVar18 + 0x10) = uVar4;
          if (lVar29 != 0) {
            uVar30 = 8;
            puVar36 = &UNK_016cdda4;
            goto code_r0x016cc7a4;
          }
          auVar37 = func_0x00f78af4();
          uVar28 = auVar37._8_8_;
          lVar18 = auVar37._0_8_;
          puVar9 = puVar11 + -0x180;
          *(ulong *)(puVar11 + -0x180) = uVar32;
          *(ulong *)(puVar11 + -0x178) = CONCAT44(0,uVar4);
          *(undefined8 *)(puVar11 + -0x170) = 0;
          *(ulong *)(puVar11 + -0x168) = uVar23;
          *(undefined8 ********)(puVar11 + -0x160) = pppppppuVar33;
          *(undefined **)(puVar11 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
          pppppppuVar33 = (undefined8 *******)(puVar11 + -0x160);
          lVar29 = *(long *)(lVar18 + 0x18);
          uVar4 = *(int *)(lVar18 + 0x10) - 8;
          unaff_x21 = CONCAT44(0,uVar4);
          auVar7._8_8_ = lVar29;
          auVar7._0_8_ = unaff_x21;
          auVar39._8_4_ = uVar4;
          auVar39._0_8_ = lVar29;
          auVar39._12_4_ = 0;
          *(uint *)(lVar18 + 0x10) = uVar4;
          if (lVar29 != 0) {
            uVar30 = 8;
            puVar36 = &UNK_016cde00;
            goto code_r0x016cc7a4;
          }
          lVar18 = func_0x00f78af4();
          *(undefined8 ********)(puVar11 + -400) = pppppppuVar33;
          *(undefined **)(puVar11 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
          lVar29 = *(long *)(lVar18 + 0x18);
          auVar7._8_8_ = lVar29;
          uVar4 = *(int *)(lVar18 + 0x10) - 4;
          uVar28 = (ulong)uVar4;
          auVar39._8_4_ = uVar4;
          auVar39._0_8_ = lVar29;
          auVar39._12_4_ = 0;
          *(uint *)(lVar18 + 0x10) = uVar4;
          if (lVar29 != 0) {
            puVar9 = puVar11 + -0x1b0;
            *(undefined8 *)(puVar11 + -0x1b0) = unaff_d9;
            *(undefined8 *)(puVar11 + -0x1a8) = unaff_d8;
            *(undefined8 *)(puVar11 + -0x1a0) = 0;
            *(ulong *)(puVar11 + -0x198) = uVar23;
            *(undefined8 *)(puVar11 + -400) = *(undefined8 *)(puVar11 + -400);
            *(undefined8 *)(puVar11 + -0x188) = *(undefined8 *)(puVar11 + -0x188);
            pppppppuVar33 = (undefined8 *******)(puVar11 + -400);
            uVar30 = 4;
            puVar36 = &UNK_016ccba4;
            goto code_r0x016cc7a4;
          }
          lVar18 = func_0x00f78af4();
          *(undefined1 **)(puVar11 + -0x1a0) = puVar11 + -400;
          *(undefined **)(puVar11 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
          lVar29 = *(long *)(lVar18 + 0x18);
          auVar7._8_8_ = lVar29;
          uVar4 = *(int *)(lVar18 + 0x10) - 8;
          uVar28 = (ulong)uVar4;
          auVar39._8_4_ = uVar4;
          auVar39._0_8_ = lVar29;
          auVar39._12_4_ = 0;
          *(uint *)(lVar18 + 0x10) = uVar4;
          if (lVar29 != 0) {
            puVar9 = puVar11 + -0x1c0;
            *(undefined8 *)(puVar11 + -0x1c0) = unaff_d9;
            *(undefined8 *)(puVar11 + -0x1b8) = unaff_d8;
            *(undefined8 *)(puVar11 + -0x1b0) = 0;
            *(ulong *)(puVar11 + -0x1a8) = uVar23;
            *(undefined8 *)(puVar11 + -0x1a0) = *(undefined8 *)(puVar11 + -0x1a0);
            *(undefined8 *)(puVar11 + -0x198) = *(undefined8 *)(puVar11 + -0x198);
            pppppppuVar33 = (undefined8 *******)(puVar11 + -0x1a0);
            uVar30 = 8;
            puVar36 = &UNK_016ccc34;
            goto code_r0x016cc7a4;
          }
          auVar41 = func_0x00f78af4();
          *(undefined8 *)(puVar11 + -0x1c0) = 0;
          *(ulong *)(puVar11 + -0x1b8) = uVar23;
          *(undefined1 **)(puVar11 + -0x1b0) = puVar11 + -0x1a0;
          *(undefined **)(puVar11 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
          ppppppuVar35 = (undefined8 ******)(puVar11 + -0x1b0);
          auVar40._8_8_ = 1;
          auVar40._0_8_ = auVar41._0_8_;
          uVar28 = 0;
          puVar36 = &UNK_016cde9c;
          puVar11 = puVar11 + -0x1c0;
          unaff_x22 = uVar32;
          goto code_r0x016cdaac;
        }
        puVar12 = puVar11 + -0x50;
        uVar27 = *(undefined8 *)(puVar11 + -0x60);
        uVar25 = *(undefined8 *)(puVar11 + -0x58);
      }
      else {
        puVar12 = puVar11 + -0x30;
        uVar27 = *(undefined8 *)(puVar11 + -0x40);
        uVar25 = *(undefined8 *)(puVar11 + -0x38);
      }
      auVar7._8_4_ = iVar16;
      auVar7._0_8_ = lVar18;
      auVar7._12_4_ = 0;
      auVar39._8_4_ = iVar16;
      auVar39._0_8_ = lVar18;
      auVar39._12_4_ = 0;
      puVar9 = puVar12 + -0x30;
      *(ulong *)(puVar12 + -0x30) = uVar32;
      *(ulong *)(puVar12 + -0x28) = unaff_x21;
      *(ulong *)(puVar12 + -0x20) = uVar30;
      *(ulong *)(puVar12 + -0x18) = uVar23;
      *(undefined8 *)(puVar12 + -0x10) = uVar27;
      *(undefined8 *)(puVar12 + -8) = uVar25;
      pppppppuVar33 = (undefined8 *******)(puVar12 + -0x10);
      uVar30 = 1;
      puVar36 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    uVar2 = *(uint *)(lVar18 + 0x18);
    iVar3 = *(int *)(uVar23 + 0x10);
    uVar1 = iVar3 - (uVar2 + (int)uVar28) & iVar16 - 1U;
    uVar30 = CONCAT44(0,uVar1);
    uVar4 = (int)uVar28 + iVar16 + uVar1;
    uVar32 = (ulong)uVar4;
    uVar24 = uVar23;
    while (unaff_x21 = (ulong)uVar2, iVar3 < (int)uVar4) {
      uVar24 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar23);
      if ((*(long *)(uVar23 + 0x18) == 0) ||
         (lVar18 = *(long *)(*(long *)(uVar23 + 0x18) + 0x10), lVar18 == 0)) goto code_r0x016cdb68;
      iVar3 = *(int *)(uVar23 + 0x10) - uVar2;
      uVar2 = *(uint *)(lVar18 + 0x18);
      iVar3 = iVar3 + uVar2;
      *(int *)(uVar23 + 0x10) = iVar3;
    }
    if ((int)uVar1 < 1) {
      return uVar24;
    }
    uVar27 = *(undefined8 *)*(undefined1 (*) [16])(puVar11 + -0x20);
    uVar25 = *(undefined8 *)(puVar11 + -0x18);
    auVar41 = *(undefined1 (*) [16])(puVar11 + -0x20);
    unaff_x22 = *(ulong *)(puVar11 + -0x30);
    unaff_x21 = *(ulong *)(puVar11 + -0x28);
    *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
    *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
    lVar18 = *(long *)(uVar23 + 0x18);
    auVar7._8_8_ = lVar18;
    auVar7._0_8_ = uVar30;
    uVar1 = *(int *)(uVar23 + 0x10) - uVar1;
    uVar32 = (ulong)uVar1;
    auVar39._8_4_ = uVar1;
    auVar39._0_8_ = lVar18;
    auVar39._12_4_ = 0;
    *(uint *)(uVar23 + 0x10) = uVar1;
    if (lVar18 != 0) {
      *(ulong *)(puVar11 + -0x30) = unaff_x22;
      *(ulong *)(puVar11 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar11 + -0x20) = uVar27;
      *(undefined8 *)(puVar11 + -0x18) = uVar25;
      *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      pppppppuVar33 = (undefined8 *******)(puVar11 + -0x10);
      puVar36 = &UNK_016cc908;
      uVar28 = 0;
      goto code_r0x016cc7a4;
    }
    lVar18 = func_0x00f78af4();
    ppppppuVar35 = (undefined8 ******)(puVar11 + -0x20);
    *(undefined1 **)(puVar11 + -0x20) = puVar11 + -0x10;
    *(undefined **)(puVar11 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
    if ((*(long *)(lVar18 + 0x18) != 0) &&
       (plVar22 = *(long **)(*(long *)(lVar18 + 0x18) + 0x10), plVar22 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar32 = (**(code **)(*plVar22 + 0x178))
                         (plVar22,(int)plVar22[3] << 1,*(undefined8 *)(*plVar22 + 0x180));
      return uVar32;
    }
    puVar36 = &FlatBuffers_FlatBufferBuilder__Prep;
    auVar40 = func_0x00f78af4();
    puVar11 = puVar11 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x166c1ac | Core.Services.Group.AddLeader
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x166c1d0 | Core.Services.Group.AddId
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cebe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cec2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ced5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cee1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166c290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166c354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x0166c358) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x0166c294) */
/* WARNING: Removing unreachable block (ram,0x0166c2a0) */
/* WARNING: Removing unreachable block (ram,0x0166c2a8) */
/* WARNING: Removing unreachable block (ram,0x0166c2c4) */
/* WARNING: Removing unreachable block (ram,0x0166c2d0) */
/* WARNING: Removing unreachable block (ram,0x0166c2dc) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016ce320) */
/* WARNING: Removing unreachable block (ram,0x016ced00) */
/* WARNING: Removing unreachable block (ram,0x016ced04) */
/* WARNING: Removing unreachable block (ram,0x016ced10) */
/* WARNING: Removing unreachable block (ram,0x016ced20) */
/* WARNING: Removing unreachable block (ram,0x016ced28) */
/* WARNING: Removing unreachable block (ram,0x016cef64) */
/* WARNING: Removing unreachable block (ram,0x016cef48) */
/* WARNING: Removing unreachable block (ram,0x016cef70) */
/* WARNING: Removing unreachable block (ram,0x016cef78) */
/* WARNING: Removing unreachable block (ram,0x016cef10) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */
/* WARNING: Removing unreachable block (ram,0x016cee20) */
/* WARNING: Removing unreachable block (ram,0x016cee2c) */
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016ced60) */
/* WARNING: Removing unreachable block (ram,0x016cec30) */
/* WARNING: Removing unreachable block (ram,0x016cec38) */
/* WARNING: Removing unreachable block (ram,0x016cec44) */
/* WARNING: Removing unreachable block (ram,0x016cebe8) */
/* WARNING: Removing unreachable block (ram,0x016cec48) */
/* WARNING: Removing unreachable block (ram,0x016cebf0) */
/* WARNING: Removing unreachable block (ram,0x016cec64) */
/* WARNING: Removing unreachable block (ram,0x016cec6c) */
/* WARNING: Removing unreachable block (ram,0x016cec78) */
/* WARNING: Removing unreachable block (ram,0x016ceca8) */
/* WARNING: Removing unreachable block (ram,0x016cec84) */
/* WARNING: Removing unreachable block (ram,0x016cec8c) */
/* WARNING: Removing unreachable block (ram,0x016cec94) */
/* WARNING: Removing unreachable block (ram,0x016ced3c) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cebfc) */
/* WARNING: Removing unreachable block (ram,0x016cec00) */
/* WARNING: Removing unreachable block (ram,0x016cec08) */
/* WARNING: Removing unreachable block (ram,0x016cec20) */
/* WARNING: Removing unreachable block (ram,0x016ceb78) */
/* WARNING: Removing unreachable block (ram,0x016cec58) */
/* WARNING: Removing unreachable block (ram,0x016cecac) */
/* WARNING: Removing unreachable block (ram,0x016cecb8) */
/* WARNING: Removing unreachable block (ram,0x016cecd8) */
/* WARNING: Removing unreachable block (ram,0x016cecf0) */
/* WARNING: Removing unreachable block (ram,0x016cec60) */
/* WARNING: Removing unreachable block (ram,0x016ceb84) */
/* WARNING: Removing unreachable block (ram,0x016ceb88) */
/* WARNING: Removing unreachable block (ram,0x016ceb90) */
/* WARNING: Removing unreachable block (ram,0x016ceb98) */
/* WARNING: Removing unreachable block (ram,0x016ceba0) */
/* WARNING: Removing unreachable block (ram,0x016cebac) */
/* WARNING: Removing unreachable block (ram,0x016cebd8) */
/* WARNING: Removing unreachable block (ram,0x016ceb54) */
/* WARNING: Removing unreachable block (ram,0x016ceb08) */
/* WARNING: Removing unreachable block (ram,0x016ceb10) */
/* WARNING: Removing unreachable block (ram,0x016ceb1c) */
/* WARNING: Removing unreachable block (ram,0x016ceb2c) */
/* WARNING: Removing unreachable block (ram,0x016cea8c) */
/* WARNING: Removing unreachable block (ram,0x016cea9c) */
/* WARNING: Removing unreachable block (ram,0x016ceaa0) */
/* WARNING: Removing unreachable block (ram,0x016ceb30) */
/* WARNING: Removing unreachable block (ram,0x016ceaa8) */
/* WARNING: Removing unreachable block (ram,0x016ced84) */
/* WARNING: Removing unreachable block (ram,0x016ceab0) */
/* WARNING: Removing unreachable block (ram,0x016ceabc) */
/* WARNING: Removing unreachable block (ram,0x016ceac8) */
/* WARNING: Removing unreachable block (ram,0x016ceacc) */
/* WARNING: Removing unreachable block (ram,0x016ced88) */
/* WARNING: Removing unreachable block (ram,0x016ceadc) */
/* WARNING: Removing unreachable block (ram,0x016ceae8) */
/* WARNING: Removing unreachable block (ram,0x016cea78) */
/* WARNING: Removing unreachable block (ram,0x016ce46c) */
/* WARNING: Removing unreachable block (ram,0x016ce3a4) */
/* WARNING: Removing unreachable block (ram,0x016ce3a8) */
/* WARNING: Removing unreachable block (ram,0x016ce3b4) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Group__AddId(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  code *pcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  int iVar15;
  long lVar17;
  ulong uVar18;
  undefined4 uVar16;
  long lVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  ulong unaff_x19;
  undefined8 unaff_x20;
  ulong uVar29;
  long lVar30;
  ulong unaff_x21;
  undefined1 (*pauVar31) [16];
  ulong unaff_x22;
  undefined1 *unaff_x29;
  undefined8 *******pppppppuVar32;
  undefined1 *puVar33;
  undefined8 ******ppppppuVar34;
  undefined *unaff_x30;
  undefined *puVar35;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [12];
  undefined4 uStack_214;
  undefined1 auStack_210 [16];
  undefined8 uStack_200;
  undefined1 uStack_1f1;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long alStack_c0 [2];
  undefined8 ******appppppuStack_b0 [2];
  undefined8 ******ppppppuStack_80;
  undefined *puStack_78;
  
  if (param_1 == 0) {
    lVar17 = func_0x00f78af4();
    if ((bRam0000000003eb58cc & 1) == 0) {
      func_0x00f78a20(0x3d3f0d0);
      bRam0000000003eb58cc = 1;
    }
    if (lVar17 != 0) {
      ppppppuVar34 = (undefined8 ******)&stack0xffffffffffffffe0;
      auVar39._8_8_ = lVar17;
      auVar39._0_8_ = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (*(int *)(lVar17 + 0x30) < 0) {
        func_0x00f78a24(0x3d22a38);
        puVar35 = (undefined *)func_0x00f78aec();
        uVar25 = func_0x00f78a24(0x3d6cea8);
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar35,uVar25);
        uVar25 = func_0x00f78a24(0x3d56a30);
        auVar40 = func_0x00f78ac0(puVar35,uVar25);
        ppppppuStack_80 = (undefined8 *******)0x3eb5000;
        ppppppuVar34 = (undefined8 ******)&stack0xffffffffffffff90;
        lVar17 = *(long *)(auVar40._0_8_ + 0x18);
        puStack_78 = puVar35;
        if ((lVar17 != 0) && (*(long *)(lVar17 + 0x10) != 0)) {
          uVar4 = *(int *)(*(long *)(lVar17 + 0x10) + 0x18) - auVar40._8_4_;
          uVar28 = (ulong)uVar4;
          auVar37._8_4_ = uVar4;
          auVar37._0_8_ = lVar17;
          auVar37._12_4_ = 0;
          puVar9 = &stack0xffffffffffffff20;
          appppppuStack_b0[1] = (undefined8 ******)&UNK_016cee20;
          pppppppuVar32 = appppppuStack_b0;
          auVar7._8_8_ = 4;
          auVar7._0_8_ = lVar17;
          uVar18 = 0x3d201a0;
          appppppuStack_b0[0] = ppppppuVar34;
          if ((bRam0000000003eb5cd0 & 1) == 0) {
            func_0x00f78a20(0x3d201a0);
            bRam0000000003eb5cd0 = 1;
          }
          uVar29 = 4;
          puVar35 = &UNK_016cc68c;
code_r0x016cc7a4:
          do {
            puVar13 = puVar9 + -0x20;
            *(long *)(puVar9 + -0x20) = auVar7._8_8_;
            *(ulong *)(puVar9 + -0x18) = uVar28;
            *(undefined8 ********)(puVar9 + -0x10) = pppppppuVar32;
            *(undefined **)(puVar9 + -8) = puVar35;
            puVar33 = puVar9 + -0x10;
            if (auVar37._8_4_ < 0) {
code_r0x016cc7d8:
              func_0x00f78a24(0x3d1fcf8);
              uVar28 = func_0x00f78aec();
              /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar28,0);
              uVar25 = func_0x00f78a24(0x3d52ce8);
              func_0x00f78ac0(uVar28,uVar25);
              uVar24 = uVar29;
            }
            else {
              lVar17 = *(long *)(auVar37._0_8_ + 0x10);
              uVar24 = uVar29;
              if (lVar17 != 0) {
                if (auVar37._8_4_ <= *(int *)(lVar17 + 0x18) - (int)uVar29) {
                  return auVar37._0_8_;
                }
                goto code_r0x016cc7d8;
              }
            }
            puVar35 = &FlatBuffers_ByteBuffer__PutSbyte;
            auVar37 = func_0x00f78af4();
code_r0x016cc810:
            puVar9 = puVar13 + -0x30;
            *(ulong *)(puVar13 + -0x30) = uVar18;
            *(undefined1 (*) [16])(puVar13 + -0x28) = auVar7;
            *(ulong *)(puVar13 + -0x18) = uVar28;
            *(undefined1 **)(puVar13 + -0x10) = puVar33;
            *(undefined **)(puVar13 + -8) = puVar35;
            pppppppuVar32 = (undefined8 *******)(puVar13 + -0x10);
            uVar29 = 1;
            puVar35 = &UNK_016cc834;
            uVar28 = uVar24;
            auVar7 = auVar37;
          } while( true );
        }
        func_0x00f78af4();
        uVar25 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffff6c,0);
        uVar26 = func_0x00f78a24(0x3d6ce88);
        uVar27 = func_0x00f78a24(0x3d66338);
        lVar17 = /*System.String$$Concat*/ func_0x029be39c(uVar26,uVar25,uVar27,0);
        func_0x00f78a24(0x3d22a38);
        uVar25 = func_0x00f78aec();
        uVar27 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar25,lVar17);
        uVar26 = func_0x00f78a24(0x3d56a50);
        puVar35 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar39 = func_0x00f78ac0(uVar25,uVar26);
        puVar11 = &stack0xffffffffffffff60;
        while( true ) {
          uVar26 = auVar39._8_8_;
          lVar30 = auVar39._0_8_;
          auVar39._8_8_ = lVar30;
          auVar39._0_8_ = uVar26;
          auVar6._8_8_ = lVar30;
          auVar6._0_8_ = uVar26;
          *(undefined8 *)(puVar11 + -0x20) = uVar25;
          *(long *)(puVar11 + -0x18) = lVar17;
          *(undefined8 *******)(puVar11 + -0x10) = ppppppuVar34;
          *(undefined **)(puVar11 + -8) = puVar35;
          ppppppuVar34 = (undefined8 ******)(puVar11 + -0x10);
          uVar16 = *(undefined4 *)(lVar30 + 0x20);
          auVar38._8_4_ = uVar16;
          auVar38._0_8_ = lVar30;
          auVar38._12_4_ = 0;
          lVar17 = lVar30;
          if ((int)uVar27 == 0) {
            lVar17 = 0;
            uVar16 = 0;
          }
          auVar5._8_4_ = uVar16;
          auVar5._0_8_ = lVar17;
          auVar5._12_4_ = 0;
          if ((int)uVar27 == 0) {
            uVar28 = 4;
            puVar35 = &UNK_016cef64;
            puVar11 = puVar11 + -0x20;
            goto code_r0x016cdaac;
          }
          if (lVar17 != 0) break;
          puVar35 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar39 = func_0x00f78af4();
          uVar27 = 0;
          puVar11 = puVar11 + -0x20;
          lVar17 = lVar30;
          uVar25 = uVar26;
        }
        uVar28 = 8;
        puVar35 = &UNK_016cef10;
        puVar11 = puVar11 + -0x20;
        auVar38 = auVar5;
        auVar39 = auVar6;
      }
      else {
        auVar38._8_8_ = 4;
        auVar38._0_8_ = lVar17;
        uVar28 = 0;
        puVar35 = &UNK_016cea78;
        puVar11 = &stack0xffffffffffffffa0;
      }
      goto code_r0x016cdaac;
    }
    uVar18 = func_0x00f78af4();
    if (uVar18 == 0) {
      auVar36 = func_0x00f78af4();
      lVar17 = auVar36._0_8_;
      if ((auVar36._8_8_ == 0) || (lVar17 == 0)) {
        auVar36 = func_0x00f78af4();
        lVar30 = auVar36._8_8_;
        lVar17 = auVar36._0_8_;
        puVar11 = &stack0xffffffffffffff60;
        puStack_78 = &Core_Services_Group__CreateOtherMembersVectorBlock;
        pppppppuVar32 = &ppppppuStack_80;
        unaff_x21 = 0x3eb5000;
        ppppppuStack_80 = (undefined8 ******)&stack0xffffffffffffffb0;
        if ((bRam0000000003eb58cb & 1) == 0) {
          func_0x00f78a20(0x3d569d8);
          bRam0000000003eb58cb = 1;
        }
        if ((lVar30 == 0) || (lVar17 == 0)) {
          puVar35 = &Core_Services_Group__StartOtherMembersVector;
          auVar40 = func_0x00f78af4();
          iVar15 = auVar40._8_4_;
          auVar36._8_8_ = lVar30;
          auVar36._0_8_ = auVar40._0_8_;
          if (auVar40._0_8_ == 0) {
            appppppuStack_b0[1] = (undefined8 ******)&Core_Services_Group__StartOtherMembersVector;
            appppppuStack_b0[0] = pppppppuVar32;
            auVar39 = func_0x00f78af4();
            pauVar31 = auVar39._0_8_;
            if ((bRam0000000003eb5985 & 1) == 0) {
              func_0x00f78a20(0x3d22970);
              bRam0000000003eb5985 = 1;
            }
            if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar17 = *(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
            if (lVar17 == 0) {
              return 0;
            }
            if ((bRam0000000003eb5979 & 1) == 0) {
              func_0x00f78a20(0x3d1fa70);
              func_0x00f78a20(0x3d203b0);
              func_0x00f78a20(0x3d21628);
              func_0x00f78a20(0x3d21c98);
              func_0x00f78a20(0x3d22910);
              func_0x00f78a20(0x3d22e30);
              func_0x00f78a20(0x3d22e40);
              func_0x00f78a20(0x3d3d368);
              func_0x00f78a20(0x3d23210);
              func_0x00f78a20(0x3d238c8);
              func_0x00f78a20(0x3d3ea00);
              func_0x00f78a20(0x3d3ecf8);
              func_0x00f78a20(0x3d3ebf0);
              func_0x00f78a20(0x3d3eaf8);
              func_0x00f78a20(0x3d3ecd8);
              func_0x00f78a20(0x3d3e598);
              func_0x00f78a20(0x3d3eae0);
              func_0x00f78a20(0x3d3e878);
              func_0x00f78a20(0x3d1e498);
              func_0x00f78a20(0x3d23d20);
              func_0x00f78a20(0x3d3f4e0);
              func_0x00f78a20(0x3d1e648);
              func_0x00f78a20(0x3d24490);
              func_0x00f78a20(0x3d5c740);
              func_0x00f78a20(0x3d5c748);
              func_0x00f78a20(0x3d5c750);
              func_0x00f78a20(0x3d5c758);
              func_0x00f78a20(0x3d5c760);
              func_0x00f78a20(0x3d5c768);
              func_0x00f78a20(0x3d5c770);
              func_0x00f78a20(0x3d246c0);
              func_0x00f78a20(0x3d246f8);
              func_0x00f78a20(0x3d24970);
              func_0x00f78a20(0x3d63340);
              func_0x00f78a20(0x3d27be8);
              func_0x00f78a20(0x3d41468);
              func_0x00f78a20(0x3d41470);
              func_0x00f78a20(0x3d71ef0);
              func_0x00f78a20(0x3d67d88);
              func_0x00f78a20(0x3d67d90);
              func_0x00f78a20(0x3d67d70);
              bRam0000000003eb5979 = 1;
            }
            uStack_130 = 0;
            uStack_128 = 0;
            uStack_120 = 0;
            uStack_150 = 0;
            uStack_148 = 0;
            uStack_140 = 0;
            uStack_170 = 0;
            uStack_168 = 0;
            uStack_160 = 0;
            uStack_190 = 0;
            uStack_188 = 0;
            uStack_180 = 0;
            uStack_1b0 = 0;
            uStack_1a8 = 0;
            uStack_1a0 = 0;
            uStack_1d0 = 0;
            uStack_1c8 = 0;
            uStack_1c0 = 0;
            uStack_1f0 = 0;
            uStack_1e8 = 0;
            uStack_1e0 = 0;
            lVar30 = func_0x00f78aec(/*Core.Services.Internal.<>c__DisplayClass234_0_TypeInfo*/ uRam0000000003d27be8);
            /*Core.Services.Internal.<>c__DisplayClass234_0$$.ctor*/ func_0x016884bc(lVar30,0);
            lVar19 = func_0x00f78aec(/*FlatBuffers.ByteBuffer_TypeInfo*/ uRam0000000003d203b0);
            /*FlatBuffers.ByteBuffer$$.ctor*/ func_0x016cbfd8(lVar19,auVar39._8_8_,0);
            if (lVar19 != 0) {
              uVar25 = /*FlatBuffers.ByteBuffer$$get_Data*/ func_0x016cc19c(lVar19,0);
              if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*System.Runtime.InteropServices.Marshal$$Copy*/ func_0x02b00b6c(pauVar31,uVar25,0,auVar39._8_8_,0);
              auVar39 = /*Core.Services.Response$$GetRootAsResponse*/ func_0x01683e24(lVar19,0);
              if (lVar30 != 0) {
                pauVar31 = (undefined1 (*) [16])(lVar30 + 0x10);
                *pauVar31 = auVar39;
                lVar19 = *(long *)(lVar17 + 0x4d0);
                uVar25 = func_0x00f78aec(/*System.Predicate<Internal.NativeRequest>_TypeInfo*/ uRam0000000003d1e648);
                /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(uVar25,lVar30,uRam0000000003d63340,uRam0000000003d3f4e0);
                if (lVar19 != 0) {
                  lVar30 = /*System.Collections.Generic.List<RuntimeManager.AttachedInstance>$$Find*/ func_0x024278b4(lVar19,uVar25,uRam0000000003d3d368);
                  uVar18 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar31,0);
                  if ((int)uVar18 == 0) {
                    if (lVar30 == 0) {
                      return uVar18;
                    }
                    iVar15 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                    if (iVar15 == 0) {
                      auStack_210._0_4_ = *(undefined4 *)(lVar30 + 0x10);
                      uVar25 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,auStack_210);
                      uVar25 = /*System.String$$Format*/ func_0x029bc688(/*STR('<= ({0})')*/ uRam0000000003d67d70,uVar25,0);
                      /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar17,1,uVar25);
                      if (*(long *)(lVar30 + 0x20) != 0) {
                        uVar18 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(*(long *)(lVar30 + 0x20),0,uRam0000000003d41470);
                        return uVar18;
                      }
                      func_0x00f78af4();
                    }
                    else {
                      uVar16 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                      switch(uVar16) {
                      case 1:
                      case 2:
                      case 0xb:
                        /*Core.Services.Response$$Payload<Group>*/ func_0x018de110(auStack_210,pauVar31,uRam0000000003d5c748);
                        uStack_128 = auStack_210._8_8_;
                        uStack_130 = auStack_210._0_8_;
                        uStack_120 = uStack_200;
                        auVar39 = /*System.Nullable<Group>$$get_Value*/ func_0x026518f8(&uStack_130,uRam0000000003d3e878);
                        uStack_214 = *(undefined4 *)(lVar30 + 0x10);
                        uVar25 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_214);
                        uStack_1f1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                        uVar26 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1f1);
                        uVar27 = Core_Services_Extensions__Print(auVar39._0_8_,auVar39._8_8_);
                        uVar25 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar25,uVar26,uVar27,0);
                        /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar17,1,uVar25);
                        lVar17 = *(long *)(lVar30 + 0x20);
                        auStack_210 = auVar39;
                        uVar25 = func_0x00f78ae0(/*Core.Services.Group_TypeInfo*/ uRam0000000003d21c98,auStack_210);
                        if (lVar17 != 0) {
                          uVar18 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar17,uVar25,uRam0000000003d41470);
                          return uVar18;
                        }
                        func_0x00f78af4(uVar25,uVar25);
                        break;
                      case 3:
                      case 4:
                      case 5:
                        /*Core.Services.Response$$Payload<Achievements>*/ func_0x018de074(auStack_210,pauVar31,uRam0000000003d5c740);
                        uStack_148 = auStack_210._8_8_;
                        uStack_150 = auStack_210._0_8_;
                        uStack_140 = uStack_200;
                        auVar39 = /*System.Nullable<Achievements>$$get_Value*/ func_0x02619a48(&uStack_150,uRam0000000003d3e598);
                        uStack_214 = *(undefined4 *)(lVar30 + 0x10);
                        uVar25 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_214);
                        uStack_1f1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                        uVar26 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1f1);
                        uVar27 = Core_Services_Extensions__Print(auVar39._0_8_,auVar39._8_8_);
                        uVar25 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar25,uVar26,uVar27,0);
                        /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar17,1,uVar25);
                        lVar17 = *(long *)(lVar30 + 0x20);
                        auStack_210 = auVar39;
                        uVar25 = func_0x00f78ae0(/*Core.Services.Achievements_TypeInfo*/ uRam0000000003d1fa70,auStack_210);
                        if (lVar17 != 0) {
                          uVar18 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar17,uVar25,uRam0000000003d41470);
                          return uVar18;
                        }
                        func_0x00f78af4(uVar25,uVar25);
                        break;
                      case 6:
                        /*Core.Services.Response$$Payload<LeaderboardSets>*/ func_0x018de248(auStack_210,pauVar31,uRam0000000003d5c758);
                        uStack_168 = auStack_210._8_8_;
                        uStack_170 = auStack_210._0_8_;
                        uStack_160 = uStack_200;
                        auVar39 = /*System.Nullable<LeaderboardSets>$$get_Value*/ func_0x0265bcf4(&uStack_170,uRam0000000003d3eaf8);
                        uStack_214 = *(undefined4 *)(lVar30 + 0x10);
                        uVar25 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_214);
                        uStack_1f1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                        uVar26 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1f1);
                        uVar27 = Core_Services_Extensions__Print(auVar39._0_8_,auVar39._8_8_);
                        uVar25 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar25,uVar26,uVar27,0);
                        /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar17,1,uVar25);
                        lVar17 = *(long *)(lVar30 + 0x20);
                        auStack_210 = auVar39;
                        uVar25 = func_0x00f78ae0(/*Core.Services.LeaderboardSets_TypeInfo*/ uRam0000000003d22e40,auStack_210);
                        if (lVar17 != 0) {
                          uVar18 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar17,uVar25,uRam0000000003d41470);
                          return uVar18;
                        }
                        func_0x00f78af4(uVar25,uVar25);
                        break;
                      case 7:
                        /*Core.Services.Response$$Payload<LeaderboardScores>*/ func_0x018de1ac(auStack_210,pauVar31,uRam0000000003d5c750);
                        uStack_188 = auStack_210._8_8_;
                        uStack_190 = auStack_210._0_8_;
                        uStack_180 = uStack_200;
                        auVar39 = /*System.Nullable<LeaderboardScores>$$get_Value*/ func_0x0265b17c(&uStack_190,uRam0000000003d3eae0);
                        uStack_214 = *(undefined4 *)(lVar30 + 0x10);
                        uVar25 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_214);
                        uStack_1f1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                        uVar26 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1f1);
                        uVar27 = Core_Services_Extensions__Print(auVar39._0_8_,auVar39._8_8_);
                        uVar25 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar25,uVar26,uVar27,0);
                        /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar17,1,uVar25);
                        lVar17 = *(long *)(lVar30 + 0x20);
                        auStack_210 = auVar39;
                        uVar25 = func_0x00f78ae0(/*Core.Services.LeaderboardScores_TypeInfo*/ uRam0000000003d22e30,auStack_210);
                        if (lVar17 != 0) {
                          uVar18 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar17,uVar25,uRam0000000003d41470);
                          return uVar18;
                        }
                        func_0x00f78af4(uVar25,uVar25);
                        break;
                      case 8:
                      case 9:
                      case 10:
                        /*Core.Services.Response$$Payload<Player>*/ func_0x018de2e4(auStack_210,pauVar31,uRam0000000003d5c760);
                        uStack_1a8 = auStack_210._8_8_;
                        uStack_1b0 = auStack_210._0_8_;
                        uStack_1a0 = uStack_200;
                        auVar39 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(&uStack_1b0,uRam0000000003d3ebf0);
                        uStack_214 = *(undefined4 *)(lVar30 + 0x10);
                        uVar25 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_214);
                        uStack_1f1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                        uVar26 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1f1);
                        uVar27 = Core_Services_Extensions__Print(auVar39._0_8_,auVar39._8_8_);
                        uVar25 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar25,uVar26,uVar27,0);
                        /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar17,1,uVar25);
                        lVar17 = *(long *)(lVar30 + 0x20);
                        auStack_210 = auVar39;
                        uVar25 = func_0x00f78ae0(/*Core.Services.Player_TypeInfo*/ uRam0000000003d23d20,auStack_210);
                        if (lVar17 != 0) {
                          uVar18 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar17,uVar25,uRam0000000003d41470);
                          return uVar18;
                        }
                        func_0x00f78af4(uVar25,uVar25);
                        break;
                      case 0xc:
                        /*Core.Services.Response$$Payload<Saves>*/ func_0x018de41c(auStack_210,pauVar31,uRam0000000003d5c770);
                        uStack_1c8 = auStack_210._8_8_;
                        uStack_1d0 = auStack_210._0_8_;
                        uStack_1c0 = uStack_200;
                        auVar39 = /*System.Nullable<Saves>$$get_Value*/ func_0x02660838(&uStack_1d0,uRam0000000003d3ecf8);
                        uStack_214 = *(undefined4 *)(lVar30 + 0x10);
                        uVar25 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_214);
                        uStack_1f1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                        uVar26 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1f1);
                        uVar27 = Core_Services_Extensions__Print(auVar39._0_8_,auVar39._8_8_);
                        uVar25 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar25,uVar26,uVar27,0);
                        /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar17,1,uVar25);
                        lVar17 = *(long *)(lVar30 + 0x20);
                        auStack_210 = auVar39;
                        uVar25 = func_0x00f78ae0(/*Core.Services.Saves_TypeInfo*/ uRam0000000003d246f8,auStack_210);
                        if (lVar17 != 0) {
                          uVar18 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar17,uVar25,uRam0000000003d41470);
                          return uVar18;
                        }
                        func_0x00f78af4(uVar25,uVar25);
                        break;
                      case 0xd:
                      case 0xe:
                      case 0xf:
                      case 0x10:
                      case 0x11:
                        /*Core.Services.Response$$Payload<Save>*/ func_0x018de380(auStack_210,pauVar31,uRam0000000003d5c768);
                        uStack_1e8 = auStack_210._8_8_;
                        uStack_1f0 = auStack_210._0_8_;
                        uStack_1e0 = uStack_200;
                        auVar39 = /*System.Nullable<Save>$$get_Value*/ func_0x0265fcc0(&uStack_1f0,uRam0000000003d3ecd8);
                        uStack_214 = *(undefined4 *)(lVar30 + 0x10);
                        uVar25 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_214);
                        uStack_1f1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                        uVar26 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1f1);
                        uVar27 = Core_Services_Extensions__Print(auVar39._0_8_,auVar39._8_8_);
                        uVar25 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar25,uVar26,uVar27,0);
                        /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar17,1,uVar25);
                        lVar17 = *(long *)(lVar30 + 0x20);
                        auStack_210 = auVar39;
                        uVar25 = func_0x00f78ae0(/*Core.Services.Save_TypeInfo*/ uRam0000000003d246c0,auStack_210);
                        if (lVar17 != 0) {
                          uVar18 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar17,uVar25,uRam0000000003d41470);
                          return uVar18;
                        }
                        func_0x00f78af4(uVar25,uVar25);
                        break;
                      default:
                        lVar17 = *(long *)(lVar30 + 0x20);
                        uVar14 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar31,0);
                        auStack_210[0] = uVar14;
                        uVar25 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,auStack_210);
                        uVar25 = /*System.String$$Format*/ func_0x029bc688(/*STR('Response payload unsupported, {0}')*/ uRam0000000003d71ef0,uVar25,0);
                        uVar26 = func_0x00f78aec(/*System.NotImplementedException_TypeInfo*/ uRam0000000003d238c8);
                        /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar26,uVar25,0);
                        if (lVar17 != 0) {
                          uVar18 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetException*/ func_0x028b5768(lVar17,uVar26,uRam0000000003d41468);
                          return uVar18;
                        }
                        func_0x00f78af4();
                      }
                    }
                    goto code_r0x0167a748;
                  }
                  iVar15 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar31,0);
                  if (iVar15 != 0) {
                    *(char *)(lVar17 + 0x4e1) = (char)iVar15;
                  }
                  uVar25 = /*STR('<= ({0}) {1} ErrorCode:{2}')*/ uRam0000000003d67d88;
                  if (lVar30 == 0) {
                    auStack_210._0_8_ = 0;
                  }
                  else {
                    auStack_210._0_8_ = 0;
                    /*System.Nullable<int>$$.ctor*/ func_0x02658d80(auStack_210,*(undefined4 *)(lVar30 + 0x10),uRam0000000003d3ea00)
                    ;
                  }
                  uVar26 = func_0x00f78ae0(/*System.Nullable<int>_TypeInfo*/ uRam0000000003d1e498,auStack_210);
                  uVar14 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar31,0);
                  uStack_214 = CONCAT31(uStack_214._1_3_,uVar14);
                  lVar19 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_214);
                  if ((lVar19 != 0) &&
                     (plVar22 = (long *)/*System.Object$$GetType*/ func_0x02959198(lVar19,0), plVar22 != (long *)0x0)) {
                    uVar27 = (**(code **)(*plVar22 + 0x1b8))
                                       (plVar22,*(undefined8 *)(*plVar22 + 0x1c0));
                    uStack_1f1 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar31,0);
                    uVar20 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_1f1);
                    uVar25 = /*System.String$$Format*/ func_0x029bdf30(uVar25,uVar26,uVar27,uVar20,0);
                    uVar18 = /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar17,4,uVar25);
                    if (lVar30 == 0) {
                      return uVar18;
                    }
                    lVar17 = *(long *)(lVar30 + 0x20);
                    pauVar31 = (undefined1 (*) [16])/*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar31,0);
                    uVar25 = func_0x00f78aec(/*Core.Services.ServicesException_TypeInfo*/ uRam0000000003d24970);
                    /*Core.Services.ServicesException$$.ctor*/ func_0x01684c6c(uVar25,pauVar31,0);
                    if (lVar17 != 0) {
                      uVar18 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetException*/ func_0x028b5768(lVar17,uVar25,uRam0000000003d41468);
                      return uVar18;
                    }
                  }
                }
              }
            }
            func_0x00f78af4();
            puVar21 = (undefined8 *)___cxa_allocate_exception(8);
            *puVar21 = *(undefined8 *)*pauVar31;
            ___cxa_throw(puVar21,&DAT_03a5ed38,0);
code_r0x0167a748:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x167a74c);
            (*pcVar8)();
          }
        }
        else {
          unaff_x21 = 0x3d56000;
          iVar15 = *(int *)(lVar30 + 0x18);
          puVar35 = &UNK_0166c358;
          puVar11 = &stack0xffffffffffffff60;
        }
      }
      else {
        iVar15 = *(int *)(auVar36._8_8_ + 0x18);
        puVar35 = &UNK_0166c294;
        puVar11 = &stack0xffffffffffffff90;
        pppppppuVar32 = (undefined8 *******)&stack0xffffffffffffffb0;
      }
      uVar18 = auVar36._0_8_;
      *(ulong *)(puVar11 + -0x30) = unaff_x22;
      *(ulong *)(puVar11 + -0x28) = unaff_x21;
      *(long *)(puVar11 + -0x20) = auVar36._8_8_;
      *(long *)(puVar11 + -0x18) = lVar17;
      *(undefined8 ********)(puVar11 + -0x10) = pppppppuVar32;
      *(undefined **)(puVar11 + -8) = puVar35;
      ppppppuVar34 = (undefined8 ******)(puVar11 + -0x10);
      unaff_x21 = 4;
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
      *(int *)(uVar18 + 0x44) = iVar15;
      uVar28 = CONCAT44(0,iVar15 * 4);
      auVar39._8_8_ = 4;
      auVar39._0_8_ = uVar28;
      auVar38._8_8_ = 4;
      auVar38._0_8_ = uVar18;
      puVar35 = &UNK_016ce188;
      puVar11 = puVar11 + -0x30;
      unaff_x22 = uVar18;
      goto code_r0x016cdaac;
    }
    puVar10 = &stack0xffffffffffffffa0;
    puVar11 = &stack0xffffffffffffffa0;
    unaff_x29 = &stack0xffffffffffffffc0;
    unaff_x20 = 3;
    uVar28 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,3,0);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(uVar18);
    if (*(long *)(uVar18 + 0x28) != 0) {
      if (*(int *)(*(long *)(uVar18 + 0x28) + 0x18) < 3) {
        uVar25 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
        *(undefined8 *)(uVar18 + 0x28) = uVar25;
      }
      *(undefined4 *)(uVar18 + 0x30) = 3;
      puVar35 = &UNK_016ce320;
      goto code_r0x016cda04;
    }
    unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar40 = func_0x00f78af4();
    iVar15 = auVar40._8_4_;
    param_1 = auVar40._0_8_;
    unaff_x19 = uVar18;
  }
  else {
    param_4 = 0;
    iVar15 = 0;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,param_2,param_2,0,0);
    puVar11 = (undefined1 *)register0x00000008;
    uVar28 = unaff_x21;
  }
  uVar18 = param_1;
  puVar10 = puVar11 + -0x20;
  *(undefined8 *)(puVar11 + -0x20) = unaff_x20;
  *(ulong *)(puVar11 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar11 + -0x10) = unaff_x29;
  *(undefined **)(puVar11 + -8) = unaff_x30;
  unaff_x29 = puVar11 + -0x10;
  if (iVar15 < *(int *)(uVar18 + 0x30)) {
    puVar35 = &UNK_016ce3a4;
code_r0x016cda04:
    *(undefined1 **)(puVar10 + -0x10) = unaff_x29;
    *(undefined **)(puVar10 + -8) = puVar35;
    if ((*(long *)(uVar18 + 0x18) != 0) &&
       (lVar17 = *(long *)(*(long *)(uVar18 + 0x18) + 0x10), lVar17 != 0)) {
      return (ulong)(uint)(*(int *)(lVar17 + 0x18) - *(int *)(uVar18 + 0x10));
    }
    lVar17 = func_0x00f78af4();
    return (ulong)*(byte *)(lVar17 + 0x48);
  }
  func_0x00f78a24(0x3d22738);
  uVar25 = func_0x00f78aec();
  uVar26 = func_0x00f78a24(0x3d6ceb8);
  unaff_x21 = 0;
  /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar25,uVar26);
  uVar26 = func_0x00f78a24(0x3d56a58);
  func_0x00f78ac0(uVar25,uVar26);
  func_0x00f78af4();
  uVar26 = func_0x00f78b24();
  auVar39 = func_0x00f78ac0(uVar26,0);
  uVar18 = auVar39._0_8_;
  *(ulong *)(puVar11 + -0x50) = unaff_x22;
  *(ulong *)(puVar11 + -0x48) = uVar28;
  *(undefined8 *)(puVar11 + -0x40) = unaff_x20;
  *(undefined8 *)(puVar11 + -0x38) = uVar25;
  *(undefined1 **)(puVar11 + -0x30) = unaff_x29;
  *(undefined **)(puVar11 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
  ppppppuVar34 = (undefined8 ******)(puVar11 + -0x30);
  if (((int)unaff_x21 == param_4) && (*(char *)(uVar18 + 0x48) == '\0')) {
    return uVar18;
  }
  auVar38._8_8_ = 1;
  auVar38._0_8_ = uVar18;
  uVar28 = 0;
  puVar35 = &UNK_016ce46c;
  puVar11 = puVar11 + -0x50;
code_r0x016cdaac:
  do {
    uVar29 = auVar39._0_8_;
    uVar23 = auVar38._0_8_;
    puVar9 = puVar11 + -0x30;
    *(ulong *)(puVar11 + -0x30) = unaff_x22;
    *(ulong *)(puVar11 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])(puVar11 + -0x20) = auVar39;
    *(undefined8 *******)(puVar11 + -0x10) = ppppppuVar34;
    *(undefined **)(puVar11 + -8) = puVar35;
    iVar15 = auVar38._8_4_;
    if (*(int *)(uVar23 + 0x20) < iVar15) {
      *(int *)(uVar23 + 0x20) = iVar15;
    }
    uVar18 = unaff_x22;
    if ((*(long *)(uVar23 + 0x18) == 0) ||
       (lVar17 = *(long *)(*(long *)(uVar23 + 0x18) + 0x10), lVar17 == 0)) {
code_r0x016cdb68:
      auVar7._8_8_ = uVar29;
      auVar7._0_8_ = unaff_x21;
      auVar39 = func_0x00f78af4();
      uVar28 = auVar39._8_8_;
      lVar30 = auVar39._0_8_;
      *(undefined1 **)(puVar11 + -0x40) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
      lVar17 = *(long *)(lVar30 + 0x18);
      iVar15 = *(int *)(lVar30 + 0x10) + -1;
      *(int *)(lVar30 + 0x10) = iVar15;
      if (lVar17 == 0) {
        auVar39 = func_0x00f78af4();
        uVar24 = auVar39._8_8_;
        lVar17 = auVar39._0_8_;
        *(undefined1 **)(puVar11 + -0x50) = puVar11 + -0x40;
        *(undefined **)(puVar11 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
        iVar15 = *(int *)(lVar17 + 0x10) + -1;
        auVar37._8_4_ = iVar15;
        auVar37._0_8_ = *(long *)(lVar17 + 0x18);
        auVar37._12_4_ = 0;
        *(int *)(lVar17 + 0x10) = iVar15;
        if (*(long *)(lVar17 + 0x18) != 0) {
          puVar13 = puVar11 + -0x40;
          puVar33 = *(undefined1 **)(puVar11 + -0x50);
          puVar35 = *(undefined **)(puVar11 + -0x48);
          uVar28 = uVar23;
          goto code_r0x016cc810;
        }
        auVar39 = func_0x00f78af4();
        uVar28 = auVar39._8_8_;
        lVar30 = auVar39._0_8_;
        *(undefined1 **)(puVar11 + -0x60) = puVar11 + -0x50;
        *(undefined **)(puVar11 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
        lVar17 = *(long *)(lVar30 + 0x18);
        iVar15 = *(int *)(lVar30 + 0x10) + -1;
        *(int *)(lVar30 + 0x10) = iVar15;
        if (lVar17 == 0) {
          auVar39 = func_0x00f78af4();
          uVar28 = auVar39._8_8_;
          lVar17 = auVar39._0_8_;
          puVar9 = puVar11 + -0x90;
          *(ulong *)(puVar11 + -0x90) = uVar18;
          *(ulong *)(puVar11 + -0x88) = unaff_x21;
          *(ulong *)(puVar11 + -0x80) = uVar29;
          *(ulong *)(puVar11 + -0x78) = uVar23;
          *(undefined1 **)(puVar11 + -0x70) = puVar11 + -0x60;
          *(undefined **)(puVar11 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
          pppppppuVar32 = (undefined8 *******)(puVar11 + -0x70);
          lVar30 = *(long *)(lVar17 + 0x18);
          uVar4 = *(int *)(lVar17 + 0x10) - 2;
          auVar7._8_8_ = lVar30;
          auVar7._0_8_ = CONCAT44(0,uVar4);
          auVar37._8_4_ = uVar4;
          auVar37._0_8_ = lVar30;
          auVar37._12_4_ = 0;
          *(uint *)(lVar17 + 0x10) = uVar4;
          if (lVar30 != 0) {
            uVar29 = 2;
            puVar35 = &UNK_016cdc34;
            goto code_r0x016cc7a4;
          }
          auVar39 = func_0x00f78af4();
          uVar28 = auVar39._8_8_;
          lVar17 = auVar39._0_8_;
          puVar9 = puVar11 + -0xc0;
          *(ulong *)(puVar11 + -0xc0) = uVar18;
          *(ulong *)(puVar11 + -0xb8) = CONCAT44(0,uVar4);
          *(undefined8 *)(puVar11 + -0xb0) = 0;
          *(ulong *)(puVar11 + -0xa8) = uVar23;
          *(undefined8 ********)(puVar11 + -0xa0) = pppppppuVar32;
          *(undefined **)(puVar11 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
          pppppppuVar32 = (undefined8 *******)(puVar11 + -0xa0);
          lVar30 = *(long *)(lVar17 + 0x18);
          uVar4 = *(int *)(lVar17 + 0x10) - 2;
          auVar7._8_8_ = lVar30;
          auVar7._0_8_ = CONCAT44(0,uVar4);
          auVar37._8_4_ = uVar4;
          auVar37._0_8_ = lVar30;
          auVar37._12_4_ = 0;
          *(uint *)(lVar17 + 0x10) = uVar4;
          if (lVar30 != 0) {
            uVar29 = 2;
            puVar35 = &UNK_016cdc90;
            goto code_r0x016cc7a4;
          }
          auVar39 = func_0x00f78af4();
          uVar28 = auVar39._8_8_;
          lVar17 = auVar39._0_8_;
          puVar9 = puVar11 + -0xf0;
          *(ulong *)(puVar11 + -0xf0) = uVar18;
          *(ulong *)(puVar11 + -0xe8) = CONCAT44(0,uVar4);
          *(undefined8 *)(puVar11 + -0xe0) = 0;
          *(ulong *)(puVar11 + -0xd8) = uVar23;
          *(undefined8 ********)(puVar11 + -0xd0) = pppppppuVar32;
          *(undefined **)(puVar11 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
          pppppppuVar32 = (undefined8 *******)(puVar11 + -0xd0);
          lVar30 = *(long *)(lVar17 + 0x18);
          uVar4 = *(int *)(lVar17 + 0x10) - 4;
          auVar7._8_8_ = lVar30;
          auVar7._0_8_ = CONCAT44(0,uVar4);
          auVar37._8_4_ = uVar4;
          auVar37._0_8_ = lVar30;
          auVar37._12_4_ = 0;
          *(uint *)(lVar17 + 0x10) = uVar4;
          if (lVar30 != 0) {
            uVar29 = 4;
            puVar35 = &UNK_016cdcec;
            goto code_r0x016cc7a4;
          }
          auVar39 = func_0x00f78af4();
          uVar28 = auVar39._8_8_;
          lVar17 = auVar39._0_8_;
          puVar9 = puVar11 + -0x120;
          *(ulong *)(puVar11 + -0x120) = uVar18;
          *(ulong *)(puVar11 + -0x118) = CONCAT44(0,uVar4);
          *(undefined8 *)(puVar11 + -0x110) = 0;
          *(ulong *)(puVar11 + -0x108) = uVar23;
          *(undefined8 ********)(puVar11 + -0x100) = pppppppuVar32;
          *(undefined **)(puVar11 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
          pppppppuVar32 = (undefined8 *******)(puVar11 + -0x100);
          lVar30 = *(long *)(lVar17 + 0x18);
          uVar4 = *(int *)(lVar17 + 0x10) - 4;
          auVar7._8_8_ = lVar30;
          auVar7._0_8_ = CONCAT44(0,uVar4);
          auVar37._8_4_ = uVar4;
          auVar37._0_8_ = lVar30;
          auVar37._12_4_ = 0;
          *(uint *)(lVar17 + 0x10) = uVar4;
          if (lVar30 != 0) {
            uVar29 = 4;
            puVar35 = &UNK_016cdd48;
            goto code_r0x016cc7a4;
          }
          auVar39 = func_0x00f78af4();
          uVar28 = auVar39._8_8_;
          lVar17 = auVar39._0_8_;
          puVar9 = puVar11 + -0x150;
          *(ulong *)(puVar11 + -0x150) = uVar18;
          *(ulong *)(puVar11 + -0x148) = CONCAT44(0,uVar4);
          *(undefined8 *)(puVar11 + -0x140) = 0;
          *(ulong *)(puVar11 + -0x138) = uVar23;
          *(undefined8 ********)(puVar11 + -0x130) = pppppppuVar32;
          *(undefined **)(puVar11 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
          pppppppuVar32 = (undefined8 *******)(puVar11 + -0x130);
          lVar30 = *(long *)(lVar17 + 0x18);
          uVar4 = *(int *)(lVar17 + 0x10) - 8;
          auVar7._8_8_ = lVar30;
          auVar7._0_8_ = CONCAT44(0,uVar4);
          auVar37._8_4_ = uVar4;
          auVar37._0_8_ = lVar30;
          auVar37._12_4_ = 0;
          *(uint *)(lVar17 + 0x10) = uVar4;
          if (lVar30 != 0) {
            uVar29 = 8;
            puVar35 = &UNK_016cdda4;
            goto code_r0x016cc7a4;
          }
          auVar39 = func_0x00f78af4();
          uVar28 = auVar39._8_8_;
          lVar17 = auVar39._0_8_;
          puVar9 = puVar11 + -0x180;
          *(ulong *)(puVar11 + -0x180) = uVar18;
          *(ulong *)(puVar11 + -0x178) = CONCAT44(0,uVar4);
          *(undefined8 *)(puVar11 + -0x170) = 0;
          *(ulong *)(puVar11 + -0x168) = uVar23;
          *(undefined8 ********)(puVar11 + -0x160) = pppppppuVar32;
          *(undefined **)(puVar11 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
          pppppppuVar32 = (undefined8 *******)(puVar11 + -0x160);
          lVar30 = *(long *)(lVar17 + 0x18);
          uVar4 = *(int *)(lVar17 + 0x10) - 8;
          unaff_x21 = CONCAT44(0,uVar4);
          auVar7._8_8_ = lVar30;
          auVar7._0_8_ = unaff_x21;
          auVar37._8_4_ = uVar4;
          auVar37._0_8_ = lVar30;
          auVar37._12_4_ = 0;
          *(uint *)(lVar17 + 0x10) = uVar4;
          if (lVar30 != 0) {
            uVar29 = 8;
            puVar35 = &UNK_016cde00;
            goto code_r0x016cc7a4;
          }
          lVar17 = func_0x00f78af4();
          *(undefined8 ********)(puVar11 + -400) = pppppppuVar32;
          *(undefined **)(puVar11 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
          lVar30 = *(long *)(lVar17 + 0x18);
          auVar7._8_8_ = lVar30;
          uVar4 = *(int *)(lVar17 + 0x10) - 4;
          uVar28 = (ulong)uVar4;
          auVar37._8_4_ = uVar4;
          auVar37._0_8_ = lVar30;
          auVar37._12_4_ = 0;
          *(uint *)(lVar17 + 0x10) = uVar4;
          if (lVar30 != 0) {
            puVar9 = puVar11 + -0x1b0;
            *(undefined8 *)(puVar11 + -0x1b0) = unaff_d9;
            *(undefined8 *)(puVar11 + -0x1a8) = unaff_d8;
            *(undefined8 *)(puVar11 + -0x1a0) = 0;
            *(ulong *)(puVar11 + -0x198) = uVar23;
            *(undefined8 *)(puVar11 + -400) = *(undefined8 *)(puVar11 + -400);
            *(undefined8 *)(puVar11 + -0x188) = *(undefined8 *)(puVar11 + -0x188);
            pppppppuVar32 = (undefined8 *******)(puVar11 + -400);
            uVar29 = 4;
            puVar35 = &UNK_016ccba4;
            goto code_r0x016cc7a4;
          }
          lVar17 = func_0x00f78af4();
          *(undefined1 **)(puVar11 + -0x1a0) = puVar11 + -400;
          *(undefined **)(puVar11 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
          lVar30 = *(long *)(lVar17 + 0x18);
          auVar7._8_8_ = lVar30;
          uVar4 = *(int *)(lVar17 + 0x10) - 8;
          uVar28 = (ulong)uVar4;
          auVar37._8_4_ = uVar4;
          auVar37._0_8_ = lVar30;
          auVar37._12_4_ = 0;
          *(uint *)(lVar17 + 0x10) = uVar4;
          if (lVar30 != 0) {
            puVar9 = puVar11 + -0x1c0;
            *(undefined8 *)(puVar11 + -0x1c0) = unaff_d9;
            *(undefined8 *)(puVar11 + -0x1b8) = unaff_d8;
            *(undefined8 *)(puVar11 + -0x1b0) = 0;
            *(ulong *)(puVar11 + -0x1a8) = uVar23;
            *(undefined8 *)(puVar11 + -0x1a0) = *(undefined8 *)(puVar11 + -0x1a0);
            *(undefined8 *)(puVar11 + -0x198) = *(undefined8 *)(puVar11 + -0x198);
            pppppppuVar32 = (undefined8 *******)(puVar11 + -0x1a0);
            uVar29 = 8;
            puVar35 = &UNK_016ccc34;
            goto code_r0x016cc7a4;
          }
          auVar39 = func_0x00f78af4();
          *(undefined8 *)(puVar11 + -0x1c0) = 0;
          *(ulong *)(puVar11 + -0x1b8) = uVar23;
          *(undefined1 **)(puVar11 + -0x1b0) = puVar11 + -0x1a0;
          *(undefined **)(puVar11 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
          ppppppuVar34 = (undefined8 ******)(puVar11 + -0x1b0);
          auVar38._8_8_ = 1;
          auVar38._0_8_ = auVar39._0_8_;
          uVar28 = 0;
          puVar35 = &UNK_016cde9c;
          puVar11 = puVar11 + -0x1c0;
          unaff_x22 = uVar18;
          goto code_r0x016cdaac;
        }
        puVar12 = puVar11 + -0x50;
        uVar25 = *(undefined8 *)(puVar11 + -0x60);
        uVar26 = *(undefined8 *)(puVar11 + -0x58);
      }
      else {
        puVar12 = puVar11 + -0x30;
        uVar25 = *(undefined8 *)(puVar11 + -0x40);
        uVar26 = *(undefined8 *)(puVar11 + -0x38);
      }
      auVar7._8_4_ = iVar15;
      auVar7._0_8_ = lVar17;
      auVar7._12_4_ = 0;
      auVar37._8_4_ = iVar15;
      auVar37._0_8_ = lVar17;
      auVar37._12_4_ = 0;
      puVar9 = puVar12 + -0x30;
      *(ulong *)(puVar12 + -0x30) = uVar18;
      *(ulong *)(puVar12 + -0x28) = unaff_x21;
      *(ulong *)(puVar12 + -0x20) = uVar29;
      *(ulong *)(puVar12 + -0x18) = uVar23;
      *(undefined8 *)(puVar12 + -0x10) = uVar25;
      *(undefined8 *)(puVar12 + -8) = uVar26;
      pppppppuVar32 = (undefined8 *******)(puVar12 + -0x10);
      uVar29 = 1;
      puVar35 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    uVar2 = *(uint *)(lVar17 + 0x18);
    iVar3 = *(int *)(uVar23 + 0x10);
    uVar1 = iVar3 - (uVar2 + (int)uVar28) & iVar15 - 1U;
    uVar29 = CONCAT44(0,uVar1);
    uVar4 = (int)uVar28 + iVar15 + uVar1;
    uVar18 = (ulong)uVar4;
    uVar24 = uVar23;
    while (unaff_x21 = (ulong)uVar2, iVar3 < (int)uVar4) {
      uVar24 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar23);
      if ((*(long *)(uVar23 + 0x18) == 0) ||
         (lVar17 = *(long *)(*(long *)(uVar23 + 0x18) + 0x10), lVar17 == 0)) goto code_r0x016cdb68;
      iVar3 = *(int *)(uVar23 + 0x10) - uVar2;
      uVar2 = *(uint *)(lVar17 + 0x18);
      iVar3 = iVar3 + uVar2;
      *(int *)(uVar23 + 0x10) = iVar3;
    }
    if ((int)uVar1 < 1) {
      return uVar24;
    }
    uVar25 = *(undefined8 *)*(undefined1 (*) [16])(puVar11 + -0x20);
    uVar26 = *(undefined8 *)(puVar11 + -0x18);
    auVar39 = *(undefined1 (*) [16])(puVar11 + -0x20);
    unaff_x22 = *(ulong *)(puVar11 + -0x30);
    unaff_x21 = *(ulong *)(puVar11 + -0x28);
    *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
    *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
    lVar17 = *(long *)(uVar23 + 0x18);
    auVar7._8_8_ = lVar17;
    auVar7._0_8_ = uVar29;
    uVar1 = *(int *)(uVar23 + 0x10) - uVar1;
    uVar18 = (ulong)uVar1;
    auVar37._8_4_ = uVar1;
    auVar37._0_8_ = lVar17;
    auVar37._12_4_ = 0;
    *(uint *)(uVar23 + 0x10) = uVar1;
    if (lVar17 != 0) {
      *(ulong *)(puVar11 + -0x30) = unaff_x22;
      *(ulong *)(puVar11 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar11 + -0x20) = uVar25;
      *(undefined8 *)(puVar11 + -0x18) = uVar26;
      *(undefined8 *)(puVar11 + -0x10) = *(undefined8 *)(puVar11 + -0x10);
      *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
      pppppppuVar32 = (undefined8 *******)(puVar11 + -0x10);
      puVar35 = &UNK_016cc908;
      uVar28 = 0;
      goto code_r0x016cc7a4;
    }
    lVar17 = func_0x00f78af4();
    ppppppuVar34 = (undefined8 ******)(puVar11 + -0x20);
    *(undefined1 **)(puVar11 + -0x20) = puVar11 + -0x10;
    *(undefined **)(puVar11 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
    if ((*(long *)(lVar17 + 0x18) != 0) &&
       (plVar22 = *(long **)(*(long *)(lVar17 + 0x18) + 0x10), plVar22 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar18 = (**(code **)(*plVar22 + 0x178))
                         (plVar22,(int)plVar22[3] << 1,*(undefined8 *)(*plVar22 + 0x180));
      return uVar18;
    }
    puVar35 = &FlatBuffers_FlatBufferBuilder__Prep;
    auVar38 = func_0x00f78af4();
    puVar11 = puVar11 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x166c1f4 | Core.Services.Group.EndGroup
// ============================================================

/* WARNING: Possible PIC construction at 0x016cea74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cea88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ceb74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cebe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cec2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ced5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cee1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cef60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166c290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166c354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x0166c358) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x0166c294) */
/* WARNING: Removing unreachable block (ram,0x0166c2a0) */
/* WARNING: Removing unreachable block (ram,0x0166c2a8) */
/* WARNING: Removing unreachable block (ram,0x0166c2c4) */
/* WARNING: Removing unreachable block (ram,0x0166c2d0) */
/* WARNING: Removing unreachable block (ram,0x0166c2dc) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016ce46c) */
/* WARNING: Removing unreachable block (ram,0x016ce3a4) */
/* WARNING: Removing unreachable block (ram,0x016ce3a8) */
/* WARNING: Removing unreachable block (ram,0x016ce3b4) */
/* WARNING: Removing unreachable block (ram,0x016ce320) */
/* WARNING: Removing unreachable block (ram,0x016ced00) */
/* WARNING: Removing unreachable block (ram,0x016ced04) */
/* WARNING: Removing unreachable block (ram,0x016ced10) */
/* WARNING: Removing unreachable block (ram,0x016ced20) */
/* WARNING: Removing unreachable block (ram,0x016ced28) */
/* WARNING: Removing unreachable block (ram,0x016cef64) */
/* WARNING: Removing unreachable block (ram,0x016cef48) */
/* WARNING: Removing unreachable block (ram,0x016cef70) */
/* WARNING: Removing unreachable block (ram,0x016cef78) */
/* WARNING: Removing unreachable block (ram,0x016cef10) */
/* WARNING: Removing unreachable block (ram,0x016cef24) */
/* WARNING: Removing unreachable block (ram,0x016cef2c) */
/* WARNING: Removing unreachable block (ram,0x016cee20) */
/* WARNING: Removing unreachable block (ram,0x016cee2c) */
/* WARNING: Removing unreachable block (ram,0x016cee44) */
/* WARNING: Removing unreachable block (ram,0x016ced60) */
/* WARNING: Removing unreachable block (ram,0x016cec30) */
/* WARNING: Removing unreachable block (ram,0x016cec38) */
/* WARNING: Removing unreachable block (ram,0x016cec44) */
/* WARNING: Removing unreachable block (ram,0x016cebe8) */
/* WARNING: Removing unreachable block (ram,0x016cec48) */
/* WARNING: Removing unreachable block (ram,0x016cebf0) */
/* WARNING: Removing unreachable block (ram,0x016cec64) */
/* WARNING: Removing unreachable block (ram,0x016cec6c) */
/* WARNING: Removing unreachable block (ram,0x016cec78) */
/* WARNING: Removing unreachable block (ram,0x016ceca8) */
/* WARNING: Removing unreachable block (ram,0x016cec84) */
/* WARNING: Removing unreachable block (ram,0x016cec8c) */
/* WARNING: Removing unreachable block (ram,0x016cec94) */
/* WARNING: Removing unreachable block (ram,0x016ced3c) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cebfc) */
/* WARNING: Removing unreachable block (ram,0x016cec00) */
/* WARNING: Removing unreachable block (ram,0x016cec08) */
/* WARNING: Removing unreachable block (ram,0x016cec20) */
/* WARNING: Removing unreachable block (ram,0x016ceb78) */
/* WARNING: Removing unreachable block (ram,0x016cec58) */
/* WARNING: Removing unreachable block (ram,0x016cecac) */
/* WARNING: Removing unreachable block (ram,0x016cecb8) */
/* WARNING: Removing unreachable block (ram,0x016cecd8) */
/* WARNING: Removing unreachable block (ram,0x016cecf0) */
/* WARNING: Removing unreachable block (ram,0x016cec60) */
/* WARNING: Removing unreachable block (ram,0x016ceb84) */
/* WARNING: Removing unreachable block (ram,0x016ceb88) */
/* WARNING: Removing unreachable block (ram,0x016ceb90) */
/* WARNING: Removing unreachable block (ram,0x016ceb98) */
/* WARNING: Removing unreachable block (ram,0x016ceba0) */
/* WARNING: Removing unreachable block (ram,0x016cebac) */
/* WARNING: Removing unreachable block (ram,0x016cebd8) */
/* WARNING: Removing unreachable block (ram,0x016ceb54) */
/* WARNING: Removing unreachable block (ram,0x016ceb08) */
/* WARNING: Removing unreachable block (ram,0x016ceb10) */
/* WARNING: Removing unreachable block (ram,0x016ceb1c) */
/* WARNING: Removing unreachable block (ram,0x016ceb2c) */
/* WARNING: Removing unreachable block (ram,0x016cea8c) */
/* WARNING: Removing unreachable block (ram,0x016cea9c) */
/* WARNING: Removing unreachable block (ram,0x016ceaa0) */
/* WARNING: Removing unreachable block (ram,0x016ceb30) */
/* WARNING: Removing unreachable block (ram,0x016ceaa8) */
/* WARNING: Removing unreachable block (ram,0x016ced84) */
/* WARNING: Removing unreachable block (ram,0x016ceab0) */
/* WARNING: Removing unreachable block (ram,0x016ceabc) */
/* WARNING: Removing unreachable block (ram,0x016ceac8) */
/* WARNING: Removing unreachable block (ram,0x016ceacc) */
/* WARNING: Removing unreachable block (ram,0x016ced88) */
/* WARNING: Removing unreachable block (ram,0x016ceadc) */
/* WARNING: Removing unreachable block (ram,0x016ceae8) */
/* WARNING: Removing unreachable block (ram,0x016cea78) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Group__EndGroup(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  undefined1 *puVar8;
  undefined8 *******pppppppuVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 uVar13;
  int iVar14;
  undefined4 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong unaff_x21;
  undefined1 (*pauVar29) [16];
  ulong uVar30;
  ulong unaff_x22;
  ulong uVar31;
  undefined1 *puVar32;
  undefined8 *******pppppppuVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [12];
  undefined4 uStack_204;
  undefined1 auStack_200 [16];
  undefined8 uStack_1f0;
  undefined1 uStack_1e1;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong auStack_b0 [2];
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  
  auVar38._8_8_ = param_1;
  auVar38._0_8_ = param_1;
  if ((bRam0000000003eb58cc & 1) == 0) {
    func_0x00f78a20(0x3d3f0d0);
    bRam0000000003eb58cc = 1;
  }
  if (param_1 == 0) {
    puVar35 = (undefined *)func_0x00f78af4();
    if (puVar35 != (undefined *)0x0) {
      pppppppuVar9 = (undefined8 *******)&stack0xffffffffffffffb0;
      puVar32 = &stack0xffffffffffffffd0;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,3,0);
        bRam0000000003eb5cd7 = 1;
      }
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(puVar35);
      if (*(long *)(puVar35 + 0x28) == 0) {
        auVar39 = func_0x00f78af4();
        puVar19 = auVar39._0_8_;
        pppppppuVar9 = &ppppppuStack_70;
        ppppppuStack_70 = (undefined8 ******)((long)&MACH_HEADER.magic + 3);
        puVar32 = &stack0xffffffffffffffa0;
        puStack_68 = puVar35;
        if (*(int *)(puVar19 + 0x30) <= auVar39._8_4_) {
          func_0x00f78a24(0x3d22738);
          uVar22 = func_0x00f78aec();
          uVar24 = func_0x00f78a24(0x3d6ceb8);
          unaff_x21 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar22,uVar24);
          uVar24 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(uVar22,uVar24);
          func_0x00f78af4();
          uVar22 = func_0x00f78b24();
          auVar38 = func_0x00f78ac0(uVar22,0);
          uVar30 = auVar38._0_8_;
          puVar32 = &stack0xffffffffffffff80;
          if (((int)unaff_x21 == param_4) && (*(char *)(uVar30 + 0x48) == '\0')) {
            return uVar30;
          }
          uVar26 = 1;
          uVar27 = 0;
          puVar35 = &UNK_016ce46c;
          puVar10 = &stack0xffffffffffffff60;
          goto code_r0x016cdaac;
        }
        puVar34 = &UNK_016ce3a4;
      }
      else {
        if (*(int *)(*(long *)(puVar35 + 0x28) + 0x18) < 3) {
          uVar22 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
          *(undefined8 *)(puVar35 + 0x28) = uVar22;
        }
        *(undefined4 *)(puVar35 + 0x30) = 3;
        puVar34 = &UNK_016ce320;
        puVar19 = puVar35;
      }
      *(undefined1 **)((long)pppppppuVar9 + -0x10) = puVar32;
      *(undefined **)((long)pppppppuVar9 + -8) = puVar34;
      if ((*(long *)(puVar19 + 0x18) != 0) &&
         (lVar23 = *(long *)(*(long *)(puVar19 + 0x18) + 0x10), lVar23 != 0)) {
        return (ulong)(uint)(*(int *)(lVar23 + 0x18) - *(int *)(puVar19 + 0x10));
      }
      lVar23 = func_0x00f78af4();
      return (ulong)*(byte *)(lVar23 + 0x48);
    }
    auVar36 = func_0x00f78af4();
    lVar23 = auVar36._0_8_;
    if ((auVar36._8_8_ == 0) || (lVar23 == 0)) {
      auVar36 = func_0x00f78af4();
      lVar28 = auVar36._8_8_;
      lVar23 = auVar36._0_8_;
      puVar10 = &stack0xffffffffffffff70;
      puStack_68 = &Core_Services_Group__CreateOtherMembersVectorBlock;
      pppppppuVar33 = &ppppppuStack_70;
      unaff_x21 = 0x3eb5000;
      ppppppuStack_70 = (undefined8 ******)&stack0xffffffffffffffc0;
      if ((bRam0000000003eb58cb & 1) == 0) {
        func_0x00f78a20(0x3d569d8);
        bRam0000000003eb58cb = 1;
      }
      if ((lVar28 == 0) || (lVar23 == 0)) {
        puVar35 = &Core_Services_Group__StartOtherMembersVector;
        auVar39 = func_0x00f78af4();
        iVar14 = auVar39._8_4_;
        auVar36._8_8_ = lVar28;
        auVar36._0_8_ = auVar39._0_8_;
        if (auVar39._0_8_ == 0) {
          auVar38 = func_0x00f78af4();
          pauVar29 = auVar38._0_8_;
          if ((bRam0000000003eb5985 & 1) == 0) {
            func_0x00f78a20(0x3d22970);
            bRam0000000003eb5985 = 1;
          }
          if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar23 = *(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
          if (lVar23 == 0) {
            return 0;
          }
          if ((bRam0000000003eb5979 & 1) == 0) {
            func_0x00f78a20(0x3d1fa70);
            func_0x00f78a20(0x3d203b0);
            func_0x00f78a20(0x3d21628);
            func_0x00f78a20(0x3d21c98);
            func_0x00f78a20(0x3d22910);
            func_0x00f78a20(0x3d22e30);
            func_0x00f78a20(0x3d22e40);
            func_0x00f78a20(0x3d3d368);
            func_0x00f78a20(0x3d23210);
            func_0x00f78a20(0x3d238c8);
            func_0x00f78a20(0x3d3ea00);
            func_0x00f78a20(0x3d3ecf8);
            func_0x00f78a20(0x3d3ebf0);
            func_0x00f78a20(0x3d3eaf8);
            func_0x00f78a20(0x3d3ecd8);
            func_0x00f78a20(0x3d3e598);
            func_0x00f78a20(0x3d3eae0);
            func_0x00f78a20(0x3d3e878);
            func_0x00f78a20(0x3d1e498);
            func_0x00f78a20(0x3d23d20);
            func_0x00f78a20(0x3d3f4e0);
            func_0x00f78a20(0x3d1e648);
            func_0x00f78a20(0x3d24490);
            func_0x00f78a20(0x3d5c740);
            func_0x00f78a20(0x3d5c748);
            func_0x00f78a20(0x3d5c750);
            func_0x00f78a20(0x3d5c758);
            func_0x00f78a20(0x3d5c760);
            func_0x00f78a20(0x3d5c768);
            func_0x00f78a20(0x3d5c770);
            func_0x00f78a20(0x3d246c0);
            func_0x00f78a20(0x3d246f8);
            func_0x00f78a20(0x3d24970);
            func_0x00f78a20(0x3d63340);
            func_0x00f78a20(0x3d27be8);
            func_0x00f78a20(0x3d41468);
            func_0x00f78a20(0x3d41470);
            func_0x00f78a20(0x3d71ef0);
            func_0x00f78a20(0x3d67d88);
            func_0x00f78a20(0x3d67d90);
            func_0x00f78a20(0x3d67d70);
            bRam0000000003eb5979 = 1;
          }
          uStack_120 = 0;
          uStack_118 = 0;
          uStack_110 = 0;
          uStack_140 = 0;
          uStack_138 = 0;
          uStack_130 = 0;
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_150 = 0;
          uStack_180 = 0;
          uStack_178 = 0;
          uStack_170 = 0;
          uStack_1a0 = 0;
          uStack_198 = 0;
          uStack_190 = 0;
          uStack_1c0 = 0;
          uStack_1b8 = 0;
          uStack_1b0 = 0;
          uStack_1e0 = 0;
          uStack_1d8 = 0;
          uStack_1d0 = 0;
          lVar28 = func_0x00f78aec(/*Core.Services.Internal.<>c__DisplayClass234_0_TypeInfo*/ uRam0000000003d27be8);
          /*Core.Services.Internal.<>c__DisplayClass234_0$$.ctor*/ func_0x016884bc(lVar28,0);
          lVar16 = func_0x00f78aec(/*FlatBuffers.ByteBuffer_TypeInfo*/ uRam0000000003d203b0);
          /*FlatBuffers.ByteBuffer$$.ctor*/ func_0x016cbfd8(lVar16,auVar38._8_8_,0);
          if (lVar16 != 0) {
            uVar22 = /*FlatBuffers.ByteBuffer$$get_Data*/ func_0x016cc19c(lVar16,0);
            if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*System.Runtime.InteropServices.Marshal$$Copy*/ func_0x02b00b6c(pauVar29,uVar22,0,auVar38._8_8_,0);
            auVar38 = /*Core.Services.Response$$GetRootAsResponse*/ func_0x01683e24(lVar16,0);
            if (lVar28 != 0) {
              pauVar29 = (undefined1 (*) [16])(lVar28 + 0x10);
              *pauVar29 = auVar38;
              lVar16 = *(long *)(lVar23 + 0x4d0);
              uVar22 = func_0x00f78aec(/*System.Predicate<Internal.NativeRequest>_TypeInfo*/ uRam0000000003d1e648);
              /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(uVar22,lVar28,uRam0000000003d63340,uRam0000000003d3f4e0);
              if (lVar16 != 0) {
                lVar28 = /*System.Collections.Generic.List<RuntimeManager.AttachedInstance>$$Find*/ func_0x024278b4(lVar16,uVar22,uRam0000000003d3d368);
                uVar30 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar29,0);
                if ((int)uVar30 == 0) {
                  if (lVar28 == 0) {
                    return uVar30;
                  }
                  iVar14 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                  if (iVar14 == 0) {
                    auStack_200._0_4_ = *(undefined4 *)(lVar28 + 0x10);
                    uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,auStack_200);
                    uVar22 = /*System.String$$Format*/ func_0x029bc688(/*STR('<= ({0})')*/ uRam0000000003d67d70,uVar22,0);
                    /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar22);
                    if (*(long *)(lVar28 + 0x20) != 0) {
                      uVar30 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(*(long *)(lVar28 + 0x20),0,uRam0000000003d41470);
                      return uVar30;
                    }
                    func_0x00f78af4();
                  }
                  else {
                    uVar15 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                    switch(uVar15) {
                    case 1:
                    case 2:
                    case 0xb:
                      /*Core.Services.Response$$Payload<Group>*/ func_0x018de110(auStack_200,pauVar29,uRam0000000003d5c748);
                      uStack_118 = auStack_200._8_8_;
                      uStack_120 = auStack_200._0_8_;
                      uStack_110 = uStack_1f0;
                      auVar38 = /*System.Nullable<Group>$$get_Value*/ func_0x026518f8(&uStack_120,uRam0000000003d3e878);
                      uStack_204 = *(undefined4 *)(lVar28 + 0x10);
                      uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_204);
                      uStack_1e1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                      uVar24 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1e1);
                      uVar25 = Core_Services_Extensions__Print(auVar38._0_8_,auVar38._8_8_);
                      uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar24,uVar25,0);
                      /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar22);
                      lVar23 = *(long *)(lVar28 + 0x20);
                      auStack_200 = auVar38;
                      uVar22 = func_0x00f78ae0(/*Core.Services.Group_TypeInfo*/ uRam0000000003d21c98,auStack_200);
                      if (lVar23 != 0) {
                        uVar30 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar22,uRam0000000003d41470);
                        return uVar30;
                      }
                      func_0x00f78af4(uVar22,uVar22);
                      break;
                    case 3:
                    case 4:
                    case 5:
                      /*Core.Services.Response$$Payload<Achievements>*/ func_0x018de074(auStack_200,pauVar29,uRam0000000003d5c740);
                      uStack_138 = auStack_200._8_8_;
                      uStack_140 = auStack_200._0_8_;
                      uStack_130 = uStack_1f0;
                      auVar38 = /*System.Nullable<Achievements>$$get_Value*/ func_0x02619a48(&uStack_140,uRam0000000003d3e598);
                      uStack_204 = *(undefined4 *)(lVar28 + 0x10);
                      uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_204);
                      uStack_1e1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                      uVar24 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1e1);
                      uVar25 = Core_Services_Extensions__Print(auVar38._0_8_,auVar38._8_8_);
                      uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar24,uVar25,0);
                      /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar22);
                      lVar23 = *(long *)(lVar28 + 0x20);
                      auStack_200 = auVar38;
                      uVar22 = func_0x00f78ae0(/*Core.Services.Achievements_TypeInfo*/ uRam0000000003d1fa70,auStack_200);
                      if (lVar23 != 0) {
                        uVar30 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar22,uRam0000000003d41470);
                        return uVar30;
                      }
                      func_0x00f78af4(uVar22,uVar22);
                      break;
                    case 6:
                      /*Core.Services.Response$$Payload<LeaderboardSets>*/ func_0x018de248(auStack_200,pauVar29,uRam0000000003d5c758);
                      uStack_158 = auStack_200._8_8_;
                      uStack_160 = auStack_200._0_8_;
                      uStack_150 = uStack_1f0;
                      auVar38 = /*System.Nullable<LeaderboardSets>$$get_Value*/ func_0x0265bcf4(&uStack_160,uRam0000000003d3eaf8);
                      uStack_204 = *(undefined4 *)(lVar28 + 0x10);
                      uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_204);
                      uStack_1e1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                      uVar24 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1e1);
                      uVar25 = Core_Services_Extensions__Print(auVar38._0_8_,auVar38._8_8_);
                      uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar24,uVar25,0);
                      /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar22);
                      lVar23 = *(long *)(lVar28 + 0x20);
                      auStack_200 = auVar38;
                      uVar22 = func_0x00f78ae0(/*Core.Services.LeaderboardSets_TypeInfo*/ uRam0000000003d22e40,auStack_200);
                      if (lVar23 != 0) {
                        uVar30 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar22,uRam0000000003d41470);
                        return uVar30;
                      }
                      func_0x00f78af4(uVar22,uVar22);
                      break;
                    case 7:
                      /*Core.Services.Response$$Payload<LeaderboardScores>*/ func_0x018de1ac(auStack_200,pauVar29,uRam0000000003d5c750);
                      uStack_178 = auStack_200._8_8_;
                      uStack_180 = auStack_200._0_8_;
                      uStack_170 = uStack_1f0;
                      auVar38 = /*System.Nullable<LeaderboardScores>$$get_Value*/ func_0x0265b17c(&uStack_180,uRam0000000003d3eae0);
                      uStack_204 = *(undefined4 *)(lVar28 + 0x10);
                      uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_204);
                      uStack_1e1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                      uVar24 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1e1);
                      uVar25 = Core_Services_Extensions__Print(auVar38._0_8_,auVar38._8_8_);
                      uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar24,uVar25,0);
                      /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar22);
                      lVar23 = *(long *)(lVar28 + 0x20);
                      auStack_200 = auVar38;
                      uVar22 = func_0x00f78ae0(/*Core.Services.LeaderboardScores_TypeInfo*/ uRam0000000003d22e30,auStack_200);
                      if (lVar23 != 0) {
                        uVar30 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar22,uRam0000000003d41470);
                        return uVar30;
                      }
                      func_0x00f78af4(uVar22,uVar22);
                      break;
                    case 8:
                    case 9:
                    case 10:
                      /*Core.Services.Response$$Payload<Player>*/ func_0x018de2e4(auStack_200,pauVar29,uRam0000000003d5c760);
                      uStack_198 = auStack_200._8_8_;
                      uStack_1a0 = auStack_200._0_8_;
                      uStack_190 = uStack_1f0;
                      auVar38 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(&uStack_1a0,uRam0000000003d3ebf0);
                      uStack_204 = *(undefined4 *)(lVar28 + 0x10);
                      uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_204);
                      uStack_1e1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                      uVar24 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1e1);
                      uVar25 = Core_Services_Extensions__Print(auVar38._0_8_,auVar38._8_8_);
                      uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar24,uVar25,0);
                      /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar22);
                      lVar23 = *(long *)(lVar28 + 0x20);
                      auStack_200 = auVar38;
                      uVar22 = func_0x00f78ae0(/*Core.Services.Player_TypeInfo*/ uRam0000000003d23d20,auStack_200);
                      if (lVar23 != 0) {
                        uVar30 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar22,uRam0000000003d41470);
                        return uVar30;
                      }
                      func_0x00f78af4(uVar22,uVar22);
                      break;
                    case 0xc:
                      /*Core.Services.Response$$Payload<Saves>*/ func_0x018de41c(auStack_200,pauVar29,uRam0000000003d5c770);
                      uStack_1b8 = auStack_200._8_8_;
                      uStack_1c0 = auStack_200._0_8_;
                      uStack_1b0 = uStack_1f0;
                      auVar38 = /*System.Nullable<Saves>$$get_Value*/ func_0x02660838(&uStack_1c0,uRam0000000003d3ecf8);
                      uStack_204 = *(undefined4 *)(lVar28 + 0x10);
                      uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_204);
                      uStack_1e1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                      uVar24 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1e1);
                      uVar25 = Core_Services_Extensions__Print(auVar38._0_8_,auVar38._8_8_);
                      uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar24,uVar25,0);
                      /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar22);
                      lVar23 = *(long *)(lVar28 + 0x20);
                      auStack_200 = auVar38;
                      uVar22 = func_0x00f78ae0(/*Core.Services.Saves_TypeInfo*/ uRam0000000003d246f8,auStack_200);
                      if (lVar23 != 0) {
                        uVar30 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar22,uRam0000000003d41470);
                        return uVar30;
                      }
                      func_0x00f78af4(uVar22,uVar22);
                      break;
                    case 0xd:
                    case 0xe:
                    case 0xf:
                    case 0x10:
                    case 0x11:
                      /*Core.Services.Response$$Payload<Save>*/ func_0x018de380(auStack_200,pauVar29,uRam0000000003d5c768);
                      uStack_1d8 = auStack_200._8_8_;
                      uStack_1e0 = auStack_200._0_8_;
                      uStack_1d0 = uStack_1f0;
                      auVar38 = /*System.Nullable<Save>$$get_Value*/ func_0x0265fcc0(&uStack_1e0,uRam0000000003d3ecd8);
                      uStack_204 = *(undefined4 *)(lVar28 + 0x10);
                      uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_204);
                      uStack_1e1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                      uVar24 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1e1);
                      uVar25 = Core_Services_Extensions__Print(auVar38._0_8_,auVar38._8_8_);
                      uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar24,uVar25,0);
                      /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar22);
                      lVar23 = *(long *)(lVar28 + 0x20);
                      auStack_200 = auVar38;
                      uVar22 = func_0x00f78ae0(/*Core.Services.Save_TypeInfo*/ uRam0000000003d246c0,auStack_200);
                      if (lVar23 != 0) {
                        uVar30 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar22,uRam0000000003d41470);
                        return uVar30;
                      }
                      func_0x00f78af4(uVar22,uVar22);
                      break;
                    default:
                      lVar23 = *(long *)(lVar28 + 0x20);
                      uVar13 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                      auStack_200[0] = uVar13;
                      uVar22 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,auStack_200);
                      uVar22 = /*System.String$$Format*/ func_0x029bc688(/*STR('Response payload unsupported, {0}')*/ uRam0000000003d71ef0,uVar22,0);
                      uVar24 = func_0x00f78aec(/*System.NotImplementedException_TypeInfo*/ uRam0000000003d238c8);
                      /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar24,uVar22,0);
                      if (lVar23 != 0) {
                        uVar30 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetException*/ func_0x028b5768(lVar23,uVar24,uRam0000000003d41468);
                        return uVar30;
                      }
                      func_0x00f78af4();
                    }
                  }
                  goto code_r0x0167a748;
                }
                iVar14 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar29,0);
                if (iVar14 != 0) {
                  *(char *)(lVar23 + 0x4e1) = (char)iVar14;
                }
                uVar22 = /*STR('<= ({0}) {1} ErrorCode:{2}')*/ uRam0000000003d67d88;
                if (lVar28 == 0) {
                  auStack_200._0_8_ = 0;
                }
                else {
                  auStack_200._0_8_ = 0;
                  /*System.Nullable<int>$$.ctor*/ func_0x02658d80(auStack_200,*(undefined4 *)(lVar28 + 0x10),uRam0000000003d3ea00);
                }
                uVar24 = func_0x00f78ae0(/*System.Nullable<int>_TypeInfo*/ uRam0000000003d1e498,auStack_200);
                uVar13 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar29,0);
                uStack_204 = CONCAT31(uStack_204._1_3_,uVar13);
                lVar16 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_204);
                if ((lVar16 != 0) &&
                   (plVar20 = (long *)/*System.Object$$GetType*/ func_0x02959198(lVar16,0), plVar20 != (long *)0x0)) {
                  uVar25 = (**(code **)(*plVar20 + 0x1b8))
                                     (plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
                  uStack_1e1 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar29,0);
                  uVar17 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_1e1);
                  uVar22 = /*System.String$$Format*/ func_0x029bdf30(uVar22,uVar24,uVar25,uVar17,0);
                  uVar30 = /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,4,uVar22);
                  if (lVar28 == 0) {
                    return uVar30;
                  }
                  lVar23 = *(long *)(lVar28 + 0x20);
                  pauVar29 = (undefined1 (*) [16])/*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar29,0);
                  uVar22 = func_0x00f78aec(/*Core.Services.ServicesException_TypeInfo*/ uRam0000000003d24970);
                  /*Core.Services.ServicesException$$.ctor*/ func_0x01684c6c(uVar22,pauVar29,0);
                  if (lVar23 != 0) {
                    uVar30 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetException*/ func_0x028b5768(lVar23,uVar22,uRam0000000003d41468);
                    return uVar30;
                  }
                }
              }
            }
          }
          func_0x00f78af4();
          puVar18 = (undefined8 *)___cxa_allocate_exception(8);
          *puVar18 = *(undefined8 *)*pauVar29;
          ___cxa_throw(puVar18,&DAT_03a5ed38,0);
code_r0x0167a748:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x167a74c);
          (*pcVar7)();
        }
      }
      else {
        unaff_x21 = 0x3d56000;
        iVar14 = *(int *)(lVar28 + 0x18);
        puVar35 = &UNK_0166c358;
        puVar10 = &stack0xffffffffffffff70;
      }
    }
    else {
      iVar14 = *(int *)(auVar36._8_8_ + 0x18);
      puVar35 = &UNK_0166c294;
      puVar10 = &stack0xffffffffffffffa0;
      pppppppuVar33 = (undefined8 *******)&stack0xffffffffffffffc0;
    }
    uVar31 = auVar36._0_8_;
    *(ulong *)(puVar10 + -0x30) = unaff_x22;
    *(ulong *)(puVar10 + -0x28) = unaff_x21;
    *(long *)(puVar10 + -0x20) = auVar36._8_8_;
    *(long *)(puVar10 + -0x18) = lVar23;
    *(undefined8 ********)(puVar10 + -0x10) = pppppppuVar33;
    *(undefined **)(puVar10 + -8) = puVar35;
    puVar32 = puVar10 + -0x10;
    auVar38._8_8_ = 4;
    auVar38._0_8_ = uVar31;
    unaff_x21 = 4;
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
    *(int *)(uVar31 + 0x44) = iVar14;
    uVar27 = (ulong)(uint)(iVar14 * 4);
    uVar26 = 4;
    puVar35 = &UNK_016ce188;
    puVar10 = puVar10 + -0x30;
    uVar30 = uVar27;
    unaff_x22 = uVar31;
  }
  else {
    puVar32 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb5cd8 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,0);
      bRam0000000003eb5cd8 = 1;
    }
    if (*(int *)(param_1 + 0x30) < 0) {
      func_0x00f78a24(0x3d22a38);
      puVar35 = (undefined *)func_0x00f78aec();
      uVar22 = func_0x00f78a24(0x3d6cea8);
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(puVar35,uVar22);
      uVar22 = func_0x00f78a24(0x3d56a30);
      auVar39 = func_0x00f78ac0(puVar35,uVar22);
      ppppppuStack_70 = (undefined8 *******)0x3eb5000;
      puVar32 = &stack0xffffffffffffffa0;
      lVar23 = *(long *)(auVar39._0_8_ + 0x18);
      puStack_68 = puVar35;
      if ((lVar23 != 0) && (*(long *)(lVar23 + 0x10) != 0)) {
        uVar4 = *(int *)(*(long *)(lVar23 + 0x10) + 0x18) - auVar39._8_4_;
        uVar30 = (ulong)uVar4;
        auVar37._8_4_ = uVar4;
        auVar37._0_8_ = lVar23;
        auVar37._12_4_ = 0;
        puVar8 = &stack0xffffffffffffff30;
        puVar32 = &stack0xffffffffffffff60;
        auVar6._8_8_ = 4;
        auVar6._0_8_ = lVar23;
        uVar31 = 0x3d201a0;
        if ((bRam0000000003eb5cd0 & 1) == 0) {
          func_0x00f78a20(0x3d201a0);
          bRam0000000003eb5cd0 = 1;
        }
        uVar26 = 4;
        puVar35 = &UNK_016cc68c;
code_r0x016cc7a4:
        do {
          puVar12 = puVar8 + -0x20;
          *(long *)(puVar8 + -0x20) = auVar6._8_8_;
          *(ulong *)(puVar8 + -0x18) = uVar30;
          *(undefined1 **)(puVar8 + -0x10) = puVar32;
          *(undefined **)(puVar8 + -8) = puVar35;
          puVar32 = puVar8 + -0x10;
          if (auVar37._8_4_ < 0) {
code_r0x016cc7d8:
            func_0x00f78a24(0x3d1fcf8);
            uVar30 = func_0x00f78aec();
            /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar30,0);
            uVar22 = func_0x00f78a24(0x3d52ce8);
            func_0x00f78ac0(uVar30,uVar22);
            uVar27 = uVar26;
          }
          else {
            lVar23 = *(long *)(auVar37._0_8_ + 0x10);
            uVar27 = uVar26;
            if (lVar23 != 0) {
              if (auVar37._8_4_ <= *(int *)(lVar23 + 0x18) - (int)uVar26) {
                return auVar37._0_8_;
              }
              goto code_r0x016cc7d8;
            }
          }
          puVar35 = &FlatBuffers_ByteBuffer__PutSbyte;
          auVar37 = func_0x00f78af4();
code_r0x016cc810:
          puVar8 = puVar12 + -0x30;
          *(ulong *)(puVar12 + -0x30) = uVar31;
          *(undefined1 (*) [16])(puVar12 + -0x28) = auVar6;
          *(ulong *)(puVar12 + -0x18) = uVar30;
          *(undefined1 **)(puVar12 + -0x10) = puVar32;
          *(undefined **)(puVar12 + -8) = puVar35;
          puVar32 = puVar12 + -0x10;
          uVar26 = 1;
          puVar35 = &UNK_016cc834;
          uVar30 = uVar27;
          auVar6 = auVar37;
        } while( true );
      }
      func_0x00f78af4();
      uVar22 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&stack0xffffffffffffff7c,0);
      uVar24 = func_0x00f78a24(0x3d6ce88);
      uVar25 = func_0x00f78a24(0x3d66338);
      lVar23 = /*System.String$$Concat*/ func_0x029be39c(uVar24,uVar22,uVar25,0);
      func_0x00f78a24(0x3d22a38);
      uVar26 = func_0x00f78aec();
      uVar24 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar26,lVar23);
      uVar22 = func_0x00f78a24(0x3d56a50);
      puVar35 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar38 = func_0x00f78ac0(uVar26,uVar22);
      puVar10 = &stack0xffffffffffffff70;
      while( true ) {
        uVar30 = auVar38._8_8_;
        lVar28 = auVar38._0_8_;
        auVar38._8_8_ = lVar28;
        auVar38._0_8_ = lVar28;
        *(ulong *)(puVar10 + -0x20) = uVar26;
        *(long *)(puVar10 + -0x18) = lVar23;
        *(undefined1 **)(puVar10 + -0x10) = puVar32;
        *(undefined **)(puVar10 + -8) = puVar35;
        puVar32 = puVar10 + -0x10;
        uVar4 = *(uint *)(lVar28 + 0x20);
        uVar26 = (ulong)uVar4;
        lVar23 = lVar28;
        if ((int)uVar24 == 0) {
          lVar23 = 0;
          uVar4 = 0;
        }
        auVar5._8_8_ = lVar28;
        auVar5._0_8_ = lVar23;
        if ((int)uVar24 == 0) {
          uVar27 = 4;
          puVar35 = &UNK_016cef64;
          puVar10 = puVar10 + -0x20;
          goto code_r0x016cdaac;
        }
        if (lVar23 != 0) break;
        puVar35 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar38 = func_0x00f78af4();
        uVar24 = 0;
        puVar10 = puVar10 + -0x20;
        lVar23 = lVar28;
        uVar26 = uVar30;
      }
      uVar27 = 8;
      puVar35 = &UNK_016cef10;
      puVar10 = puVar10 + -0x20;
      uVar26 = (ulong)uVar4;
      auVar38 = auVar5;
    }
    else {
      uVar27 = 0;
      puVar35 = &UNK_016cea78;
      puVar10 = &stack0xffffffffffffffb0;
      uVar26 = 4;
      uVar30 = 0x3eb5000;
    }
  }
code_r0x016cdaac:
  do {
    uVar21 = auVar38._0_8_;
    puVar8 = puVar10 + -0x30;
    *(ulong *)(puVar10 + -0x30) = unaff_x22;
    *(ulong *)(puVar10 + -0x28) = unaff_x21;
    *(ulong *)(puVar10 + -0x20) = uVar30;
    *(long *)(puVar10 + -0x18) = auVar38._8_8_;
    *(undefined1 **)(puVar10 + -0x10) = puVar32;
    *(undefined **)(puVar10 + -8) = puVar35;
    iVar14 = (int)uVar26;
    if (*(int *)(uVar21 + 0x20) < iVar14) {
      *(int *)(uVar21 + 0x20) = iVar14;
    }
    uVar26 = uVar30;
    uVar31 = unaff_x22;
    if ((*(long *)(uVar21 + 0x18) == 0) ||
       (lVar23 = *(long *)(*(long *)(uVar21 + 0x18) + 0x10), lVar23 == 0)) {
code_r0x016cdb68:
      auVar6._8_8_ = uVar26;
      auVar6._0_8_ = unaff_x21;
      auVar38 = func_0x00f78af4();
      uVar30 = auVar38._8_8_;
      lVar28 = auVar38._0_8_;
      *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
      *(undefined **)(puVar10 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
      lVar23 = *(long *)(lVar28 + 0x18);
      iVar14 = *(int *)(lVar28 + 0x10) + -1;
      *(int *)(lVar28 + 0x10) = iVar14;
      if (lVar23 == 0) {
        auVar38 = func_0x00f78af4();
        uVar27 = auVar38._8_8_;
        lVar23 = auVar38._0_8_;
        *(undefined1 **)(puVar10 + -0x50) = puVar10 + -0x40;
        *(undefined **)(puVar10 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
        iVar14 = *(int *)(lVar23 + 0x10) + -1;
        auVar37._8_4_ = iVar14;
        auVar37._0_8_ = *(long *)(lVar23 + 0x18);
        auVar37._12_4_ = 0;
        *(int *)(lVar23 + 0x10) = iVar14;
        if (*(long *)(lVar23 + 0x18) != 0) {
          puVar12 = puVar10 + -0x40;
          puVar32 = *(undefined1 **)(puVar10 + -0x50);
          puVar35 = *(undefined **)(puVar10 + -0x48);
          uVar30 = uVar21;
          goto code_r0x016cc810;
        }
        auVar38 = func_0x00f78af4();
        uVar30 = auVar38._8_8_;
        lVar28 = auVar38._0_8_;
        *(undefined1 **)(puVar10 + -0x60) = puVar10 + -0x50;
        *(undefined **)(puVar10 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
        lVar23 = *(long *)(lVar28 + 0x18);
        iVar14 = *(int *)(lVar28 + 0x10) + -1;
        *(int *)(lVar28 + 0x10) = iVar14;
        if (lVar23 == 0) {
          auVar38 = func_0x00f78af4();
          uVar30 = auVar38._8_8_;
          lVar23 = auVar38._0_8_;
          puVar8 = puVar10 + -0x90;
          *(ulong *)(puVar10 + -0x90) = uVar31;
          *(ulong *)(puVar10 + -0x88) = unaff_x21;
          *(ulong *)(puVar10 + -0x80) = uVar26;
          *(ulong *)(puVar10 + -0x78) = uVar21;
          *(undefined1 **)(puVar10 + -0x70) = puVar10 + -0x60;
          *(undefined **)(puVar10 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
          puVar32 = puVar10 + -0x70;
          lVar28 = *(long *)(lVar23 + 0x18);
          uVar4 = *(int *)(lVar23 + 0x10) - 2;
          auVar6._8_8_ = lVar28;
          auVar6._0_8_ = CONCAT44(0,uVar4);
          auVar37._8_4_ = uVar4;
          auVar37._0_8_ = lVar28;
          auVar37._12_4_ = 0;
          *(uint *)(lVar23 + 0x10) = uVar4;
          if (lVar28 != 0) {
            uVar26 = 2;
            puVar35 = &UNK_016cdc34;
            goto code_r0x016cc7a4;
          }
          auVar38 = func_0x00f78af4();
          uVar30 = auVar38._8_8_;
          lVar23 = auVar38._0_8_;
          puVar8 = puVar10 + -0xc0;
          *(ulong *)(puVar10 + -0xc0) = uVar31;
          *(ulong *)(puVar10 + -0xb8) = CONCAT44(0,uVar4);
          *(undefined8 *)(puVar10 + -0xb0) = 0;
          *(ulong *)(puVar10 + -0xa8) = uVar21;
          *(undefined1 **)(puVar10 + -0xa0) = puVar32;
          *(undefined **)(puVar10 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
          puVar32 = puVar10 + -0xa0;
          lVar28 = *(long *)(lVar23 + 0x18);
          uVar4 = *(int *)(lVar23 + 0x10) - 2;
          auVar6._8_8_ = lVar28;
          auVar6._0_8_ = CONCAT44(0,uVar4);
          auVar37._8_4_ = uVar4;
          auVar37._0_8_ = lVar28;
          auVar37._12_4_ = 0;
          *(uint *)(lVar23 + 0x10) = uVar4;
          if (lVar28 != 0) {
            uVar26 = 2;
            puVar35 = &UNK_016cdc90;
            goto code_r0x016cc7a4;
          }
          auVar38 = func_0x00f78af4();
          uVar30 = auVar38._8_8_;
          lVar23 = auVar38._0_8_;
          puVar8 = puVar10 + -0xf0;
          *(ulong *)(puVar10 + -0xf0) = uVar31;
          *(ulong *)(puVar10 + -0xe8) = CONCAT44(0,uVar4);
          *(undefined8 *)(puVar10 + -0xe0) = 0;
          *(ulong *)(puVar10 + -0xd8) = uVar21;
          *(undefined1 **)(puVar10 + -0xd0) = puVar32;
          *(undefined **)(puVar10 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
          puVar32 = puVar10 + -0xd0;
          lVar28 = *(long *)(lVar23 + 0x18);
          uVar4 = *(int *)(lVar23 + 0x10) - 4;
          auVar6._8_8_ = lVar28;
          auVar6._0_8_ = CONCAT44(0,uVar4);
          auVar37._8_4_ = uVar4;
          auVar37._0_8_ = lVar28;
          auVar37._12_4_ = 0;
          *(uint *)(lVar23 + 0x10) = uVar4;
          if (lVar28 != 0) {
            uVar26 = 4;
            puVar35 = &UNK_016cdcec;
            goto code_r0x016cc7a4;
          }
          auVar38 = func_0x00f78af4();
          uVar30 = auVar38._8_8_;
          lVar23 = auVar38._0_8_;
          puVar8 = puVar10 + -0x120;
          *(ulong *)(puVar10 + -0x120) = uVar31;
          *(ulong *)(puVar10 + -0x118) = CONCAT44(0,uVar4);
          *(undefined8 *)(puVar10 + -0x110) = 0;
          *(ulong *)(puVar10 + -0x108) = uVar21;
          *(undefined1 **)(puVar10 + -0x100) = puVar32;
          *(undefined **)(puVar10 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
          puVar32 = puVar10 + -0x100;
          lVar28 = *(long *)(lVar23 + 0x18);
          uVar4 = *(int *)(lVar23 + 0x10) - 4;
          auVar6._8_8_ = lVar28;
          auVar6._0_8_ = CONCAT44(0,uVar4);
          auVar37._8_4_ = uVar4;
          auVar37._0_8_ = lVar28;
          auVar37._12_4_ = 0;
          *(uint *)(lVar23 + 0x10) = uVar4;
          if (lVar28 != 0) {
            uVar26 = 4;
            puVar35 = &UNK_016cdd48;
            goto code_r0x016cc7a4;
          }
          auVar38 = func_0x00f78af4();
          uVar30 = auVar38._8_8_;
          lVar23 = auVar38._0_8_;
          puVar8 = puVar10 + -0x150;
          *(ulong *)(puVar10 + -0x150) = uVar31;
          *(ulong *)(puVar10 + -0x148) = CONCAT44(0,uVar4);
          *(undefined8 *)(puVar10 + -0x140) = 0;
          *(ulong *)(puVar10 + -0x138) = uVar21;
          *(undefined1 **)(puVar10 + -0x130) = puVar32;
          *(undefined **)(puVar10 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
          puVar32 = puVar10 + -0x130;
          lVar28 = *(long *)(lVar23 + 0x18);
          uVar4 = *(int *)(lVar23 + 0x10) - 8;
          auVar6._8_8_ = lVar28;
          auVar6._0_8_ = CONCAT44(0,uVar4);
          auVar37._8_4_ = uVar4;
          auVar37._0_8_ = lVar28;
          auVar37._12_4_ = 0;
          *(uint *)(lVar23 + 0x10) = uVar4;
          if (lVar28 != 0) {
            uVar26 = 8;
            puVar35 = &UNK_016cdda4;
            goto code_r0x016cc7a4;
          }
          auVar38 = func_0x00f78af4();
          uVar30 = auVar38._8_8_;
          lVar23 = auVar38._0_8_;
          puVar8 = puVar10 + -0x180;
          *(ulong *)(puVar10 + -0x180) = uVar31;
          *(ulong *)(puVar10 + -0x178) = CONCAT44(0,uVar4);
          *(undefined8 *)(puVar10 + -0x170) = 0;
          *(ulong *)(puVar10 + -0x168) = uVar21;
          *(undefined1 **)(puVar10 + -0x160) = puVar32;
          *(undefined **)(puVar10 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
          puVar32 = puVar10 + -0x160;
          lVar28 = *(long *)(lVar23 + 0x18);
          uVar4 = *(int *)(lVar23 + 0x10) - 8;
          unaff_x21 = CONCAT44(0,uVar4);
          auVar6._8_8_ = lVar28;
          auVar6._0_8_ = unaff_x21;
          auVar37._8_4_ = uVar4;
          auVar37._0_8_ = lVar28;
          auVar37._12_4_ = 0;
          *(uint *)(lVar23 + 0x10) = uVar4;
          if (lVar28 != 0) {
            uVar26 = 8;
            puVar35 = &UNK_016cde00;
            goto code_r0x016cc7a4;
          }
          lVar23 = func_0x00f78af4();
          *(undefined1 **)(puVar10 + -400) = puVar32;
          *(undefined **)(puVar10 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
          lVar28 = *(long *)(lVar23 + 0x18);
          auVar6._8_8_ = lVar28;
          uVar4 = *(int *)(lVar23 + 0x10) - 4;
          uVar30 = (ulong)uVar4;
          auVar37._8_4_ = uVar4;
          auVar37._0_8_ = lVar28;
          auVar37._12_4_ = 0;
          *(uint *)(lVar23 + 0x10) = uVar4;
          if (lVar28 != 0) {
            puVar8 = puVar10 + -0x1b0;
            *(undefined8 *)(puVar10 + -0x1b0) = unaff_d9;
            *(undefined8 *)(puVar10 + -0x1a8) = unaff_d8;
            *(undefined8 *)(puVar10 + -0x1a0) = 0;
            *(ulong *)(puVar10 + -0x198) = uVar21;
            *(undefined8 *)(puVar10 + -400) = *(undefined8 *)(puVar10 + -400);
            *(undefined8 *)(puVar10 + -0x188) = *(undefined8 *)(puVar10 + -0x188);
            puVar32 = puVar10 + -400;
            uVar26 = 4;
            puVar35 = &UNK_016ccba4;
            goto code_r0x016cc7a4;
          }
          lVar23 = func_0x00f78af4();
          *(undefined1 **)(puVar10 + -0x1a0) = puVar10 + -400;
          *(undefined **)(puVar10 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
          lVar28 = *(long *)(lVar23 + 0x18);
          auVar6._8_8_ = lVar28;
          uVar4 = *(int *)(lVar23 + 0x10) - 8;
          uVar30 = (ulong)uVar4;
          auVar37._8_4_ = uVar4;
          auVar37._0_8_ = lVar28;
          auVar37._12_4_ = 0;
          *(uint *)(lVar23 + 0x10) = uVar4;
          if (lVar28 != 0) {
            puVar8 = puVar10 + -0x1c0;
            *(undefined8 *)(puVar10 + -0x1c0) = unaff_d9;
            *(undefined8 *)(puVar10 + -0x1b8) = unaff_d8;
            *(undefined8 *)(puVar10 + -0x1b0) = 0;
            *(ulong *)(puVar10 + -0x1a8) = uVar21;
            *(undefined8 *)(puVar10 + -0x1a0) = *(undefined8 *)(puVar10 + -0x1a0);
            *(undefined8 *)(puVar10 + -0x198) = *(undefined8 *)(puVar10 + -0x198);
            puVar32 = puVar10 + -0x1a0;
            uVar26 = 8;
            puVar35 = &UNK_016ccc34;
            goto code_r0x016cc7a4;
          }
          auVar38 = func_0x00f78af4();
          uVar30 = auVar38._0_8_;
          *(undefined8 *)(puVar10 + -0x1c0) = 0;
          *(ulong *)(puVar10 + -0x1b8) = uVar21;
          *(undefined1 **)(puVar10 + -0x1b0) = puVar10 + -0x1a0;
          *(undefined **)(puVar10 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
          puVar32 = puVar10 + -0x1b0;
          uVar26 = 1;
          uVar27 = 0;
          puVar35 = &UNK_016cde9c;
          puVar10 = puVar10 + -0x1c0;
          unaff_x22 = uVar31;
          goto code_r0x016cdaac;
        }
        puVar11 = puVar10 + -0x50;
        uVar22 = *(undefined8 *)(puVar10 + -0x60);
        uVar24 = *(undefined8 *)(puVar10 + -0x58);
      }
      else {
        puVar11 = puVar10 + -0x30;
        uVar22 = *(undefined8 *)(puVar10 + -0x40);
        uVar24 = *(undefined8 *)(puVar10 + -0x38);
      }
      auVar6._8_4_ = iVar14;
      auVar6._0_8_ = lVar23;
      auVar6._12_4_ = 0;
      auVar37._8_4_ = iVar14;
      auVar37._0_8_ = lVar23;
      auVar37._12_4_ = 0;
      puVar8 = puVar11 + -0x30;
      *(ulong *)(puVar11 + -0x30) = uVar31;
      *(ulong *)(puVar11 + -0x28) = unaff_x21;
      *(ulong *)(puVar11 + -0x20) = uVar26;
      *(ulong *)(puVar11 + -0x18) = uVar21;
      *(undefined8 *)(puVar11 + -0x10) = uVar22;
      *(undefined8 *)(puVar11 + -8) = uVar24;
      puVar32 = puVar11 + -0x10;
      uVar26 = 1;
      puVar35 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    uVar2 = *(uint *)(lVar23 + 0x18);
    iVar3 = *(int *)(uVar21 + 0x10);
    uVar1 = iVar3 - (uVar2 + (int)uVar27) & iVar14 - 1U;
    uVar26 = CONCAT44(0,uVar1);
    uVar4 = (int)uVar27 + iVar14 + uVar1;
    uVar31 = (ulong)uVar4;
    uVar30 = uVar21;
    while (unaff_x21 = (ulong)uVar2, iVar3 < (int)uVar4) {
      uVar30 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar21);
      if ((*(long *)(uVar21 + 0x18) == 0) ||
         (lVar23 = *(long *)(*(long *)(uVar21 + 0x18) + 0x10), lVar23 == 0)) goto code_r0x016cdb68;
      iVar3 = *(int *)(uVar21 + 0x10) - uVar2;
      uVar2 = *(uint *)(lVar23 + 0x18);
      iVar3 = iVar3 + uVar2;
      *(int *)(uVar21 + 0x10) = iVar3;
    }
    if ((int)uVar1 < 1) {
      return uVar30;
    }
    uVar30 = *(ulong *)(puVar10 + -0x20);
    uVar22 = *(undefined8 *)(puVar10 + -0x18);
    unaff_x22 = *(ulong *)(puVar10 + -0x30);
    unaff_x21 = *(ulong *)(puVar10 + -0x28);
    *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
    *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
    lVar23 = *(long *)(uVar21 + 0x18);
    auVar6._8_8_ = lVar23;
    auVar6._0_8_ = uVar26;
    uVar1 = *(int *)(uVar21 + 0x10) - uVar1;
    uVar31 = (ulong)uVar1;
    auVar37._8_4_ = uVar1;
    auVar37._0_8_ = lVar23;
    auVar37._12_4_ = 0;
    *(uint *)(uVar21 + 0x10) = uVar1;
    if (lVar23 != 0) {
      *(ulong *)(puVar10 + -0x30) = unaff_x22;
      *(ulong *)(puVar10 + -0x28) = unaff_x21;
      *(ulong *)(puVar10 + -0x20) = uVar30;
      *(undefined8 *)(puVar10 + -0x18) = uVar22;
      *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
      *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
      puVar32 = puVar10 + -0x10;
      puVar35 = &UNK_016cc908;
      uVar30 = 0;
      goto code_r0x016cc7a4;
    }
    lVar23 = func_0x00f78af4();
    puVar32 = puVar10 + -0x20;
    *(undefined1 **)(puVar10 + -0x20) = puVar10 + -0x10;
    *(undefined **)(puVar10 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
    if ((*(long *)(lVar23 + 0x18) != 0) &&
       (plVar20 = *(long **)(*(long *)(lVar23 + 0x18) + 0x10), plVar20 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar30 = (**(code **)(*plVar20 + 0x178))
                         (plVar20,(int)plVar20[3] << 1,*(undefined8 *)(*plVar20 + 0x180));
      return uVar30;
    }
    puVar35 = &FlatBuffers_FlatBufferBuilder__Prep;
    auVar36 = func_0x00f78af4();
    uVar26 = auVar36._8_8_;
    auVar38._8_8_ = uVar22;
    auVar38._0_8_ = auVar36._0_8_;
    puVar10 = puVar10 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x166c240 | Core.Services.Group.StartGroup
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166c290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166c354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc634) */
/* WARNING: Removing unreachable block (ram,0x016cc668) */
/* WARNING: Removing unreachable block (ram,0x016cc67c) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x0166c358) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x0166c294) */
/* WARNING: Removing unreachable block (ram,0x0166c2a0) */
/* WARNING: Removing unreachable block (ram,0x0166c2a8) */
/* WARNING: Removing unreachable block (ram,0x0166c2c4) */
/* WARNING: Removing unreachable block (ram,0x0166c2d0) */
/* WARNING: Removing unreachable block (ram,0x0166c2dc) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016ce46c) */
/* WARNING: Removing unreachable block (ram,0x016ce3a4) */
/* WARNING: Removing unreachable block (ram,0x016ce3a8) */
/* WARNING: Removing unreachable block (ram,0x016ce3b4) */
/* WARNING: Removing unreachable block (ram,0x016ce320) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Group__StartGroup
                (undefined *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  undefined1 *puVar7;
  undefined8 *******pppppppuVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  int iVar13;
  undefined4 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  undefined8 unaff_x21;
  undefined1 (*pauVar29) [16];
  ulong unaff_x22;
  ulong uVar30;
  undefined1 *puVar31;
  undefined8 *******pppppppuVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [12];
  undefined4 uStack_1e4;
  undefined1 auStack_1e0 [16];
  undefined8 uStack_1d0;
  undefined1 uStack_1c1;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 ******ppppppuStack_50;
  undefined *puStack_48;
  
  if (param_1 == (undefined *)0x0) {
    auVar35 = func_0x00f78af4();
    lVar26 = auVar35._0_8_;
    if ((auVar35._8_8_ == 0) || (lVar26 == 0)) {
      auVar35 = func_0x00f78af4();
      lVar28 = auVar35._8_8_;
      lVar26 = auVar35._0_8_;
      puVar9 = &stack0xffffffffffffff90;
      puStack_48 = &Core_Services_Group__CreateOtherMembersVectorBlock;
      pppppppuVar32 = &ppppppuStack_50;
      unaff_x21 = 0x3eb5000;
      ppppppuStack_50 = (undefined8 ******)&stack0xffffffffffffffe0;
      if ((bRam0000000003eb58cb & 1) == 0) {
        func_0x00f78a20(0x3d569d8);
        bRam0000000003eb58cb = 1;
      }
      if ((lVar28 == 0) || (lVar26 == 0)) {
        puVar34 = &Core_Services_Group__StartOtherMembersVector;
        auVar39 = func_0x00f78af4();
        iVar13 = auVar39._8_4_;
        auVar35._8_8_ = lVar28;
        auVar35._0_8_ = auVar39._0_8_;
        if (auVar39._0_8_ == 0) {
          auVar35 = func_0x00f78af4();
          pauVar29 = auVar35._0_8_;
          if ((bRam0000000003eb5985 & 1) == 0) {
            func_0x00f78a20(0x3d22970);
            bRam0000000003eb5985 = 1;
          }
          if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar26 = *(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
          if (lVar26 == 0) {
            return 0;
          }
          if ((bRam0000000003eb5979 & 1) == 0) {
            func_0x00f78a20(0x3d1fa70);
            func_0x00f78a20(0x3d203b0);
            func_0x00f78a20(0x3d21628);
            func_0x00f78a20(0x3d21c98);
            func_0x00f78a20(0x3d22910);
            func_0x00f78a20(0x3d22e30);
            func_0x00f78a20(0x3d22e40);
            func_0x00f78a20(0x3d3d368);
            func_0x00f78a20(0x3d23210);
            func_0x00f78a20(0x3d238c8);
            func_0x00f78a20(0x3d3ea00);
            func_0x00f78a20(0x3d3ecf8);
            func_0x00f78a20(0x3d3ebf0);
            func_0x00f78a20(0x3d3eaf8);
            func_0x00f78a20(0x3d3ecd8);
            func_0x00f78a20(0x3d3e598);
            func_0x00f78a20(0x3d3eae0);
            func_0x00f78a20(0x3d3e878);
            func_0x00f78a20(0x3d1e498);
            func_0x00f78a20(0x3d23d20);
            func_0x00f78a20(0x3d3f4e0);
            func_0x00f78a20(0x3d1e648);
            func_0x00f78a20(0x3d24490);
            func_0x00f78a20(0x3d5c740);
            func_0x00f78a20(0x3d5c748);
            func_0x00f78a20(0x3d5c750);
            func_0x00f78a20(0x3d5c758);
            func_0x00f78a20(0x3d5c760);
            func_0x00f78a20(0x3d5c768);
            func_0x00f78a20(0x3d5c770);
            func_0x00f78a20(0x3d246c0);
            func_0x00f78a20(0x3d246f8);
            func_0x00f78a20(0x3d24970);
            func_0x00f78a20(0x3d63340);
            func_0x00f78a20(0x3d27be8);
            func_0x00f78a20(0x3d41468);
            func_0x00f78a20(0x3d41470);
            func_0x00f78a20(0x3d71ef0);
            func_0x00f78a20(0x3d67d88);
            func_0x00f78a20(0x3d67d90);
            func_0x00f78a20(0x3d67d70);
            bRam0000000003eb5979 = 1;
          }
          uStack_100 = 0;
          uStack_f8 = 0;
          uStack_f0 = 0;
          uStack_120 = 0;
          uStack_118 = 0;
          uStack_110 = 0;
          uStack_140 = 0;
          uStack_138 = 0;
          uStack_130 = 0;
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_150 = 0;
          uStack_180 = 0;
          uStack_178 = 0;
          uStack_170 = 0;
          uStack_1a0 = 0;
          uStack_198 = 0;
          uStack_190 = 0;
          uStack_1c0 = 0;
          uStack_1b8 = 0;
          uStack_1b0 = 0;
          lVar28 = func_0x00f78aec(/*Core.Services.Internal.<>c__DisplayClass234_0_TypeInfo*/ uRam0000000003d27be8);
          /*Core.Services.Internal.<>c__DisplayClass234_0$$.ctor*/ func_0x016884bc(lVar28,0);
          lVar15 = func_0x00f78aec(/*FlatBuffers.ByteBuffer_TypeInfo*/ uRam0000000003d203b0);
          /*FlatBuffers.ByteBuffer$$.ctor*/ func_0x016cbfd8(lVar15,auVar35._8_8_,0);
          if (lVar15 != 0) {
            uVar22 = /*FlatBuffers.ByteBuffer$$get_Data*/ func_0x016cc19c(lVar15,0);
            if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*System.Runtime.InteropServices.Marshal$$Copy*/ func_0x02b00b6c(pauVar29,uVar22,0,auVar35._8_8_,0);
            auVar35 = /*Core.Services.Response$$GetRootAsResponse*/ func_0x01683e24(lVar15,0);
            if (lVar28 != 0) {
              pauVar29 = (undefined1 (*) [16])(lVar28 + 0x10);
              *pauVar29 = auVar35;
              lVar15 = *(long *)(lVar26 + 0x4d0);
              uVar22 = func_0x00f78aec(/*System.Predicate<Internal.NativeRequest>_TypeInfo*/ uRam0000000003d1e648);
              /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(uVar22,lVar28,uRam0000000003d63340,uRam0000000003d3f4e0);
              if (lVar15 != 0) {
                lVar28 = /*System.Collections.Generic.List<RuntimeManager.AttachedInstance>$$Find*/ func_0x024278b4(lVar15,uVar22,uRam0000000003d3d368);
                uVar21 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar29,0);
                if ((int)uVar21 == 0) {
                  if (lVar28 == 0) {
                    return uVar21;
                  }
                  iVar13 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                  if (iVar13 == 0) {
                    auStack_1e0._0_4_ = *(undefined4 *)(lVar28 + 0x10);
                    uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,auStack_1e0);
                    uVar22 = /*System.String$$Format*/ func_0x029bc688(/*STR('<= ({0})')*/ uRam0000000003d67d70,uVar22,0);
                    /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,1,uVar22);
                    if (*(long *)(lVar28 + 0x20) != 0) {
                      uVar21 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(*(long *)(lVar28 + 0x20),0,uRam0000000003d41470);
                      return uVar21;
                    }
                    func_0x00f78af4();
                  }
                  else {
                    uVar14 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                    switch(uVar14) {
                    case 1:
                    case 2:
                    case 0xb:
                      /*Core.Services.Response$$Payload<Group>*/ func_0x018de110(auStack_1e0,pauVar29,uRam0000000003d5c748);
                      uStack_f8 = auStack_1e0._8_8_;
                      uStack_100 = auStack_1e0._0_8_;
                      uStack_f0 = uStack_1d0;
                      auVar35 = /*System.Nullable<Group>$$get_Value*/ func_0x026518f8(&uStack_100,uRam0000000003d3e878);
                      uStack_1e4 = *(undefined4 *)(lVar28 + 0x10);
                      uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1e4);
                      uStack_1c1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                      uVar23 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1c1);
                      uVar16 = Core_Services_Extensions__Print(auVar35._0_8_,auVar35._8_8_);
                      uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar23,uVar16,0);
                      /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,1,uVar22);
                      lVar26 = *(long *)(lVar28 + 0x20);
                      auStack_1e0 = auVar35;
                      uVar22 = func_0x00f78ae0(/*Core.Services.Group_TypeInfo*/ uRam0000000003d21c98,auStack_1e0);
                      if (lVar26 != 0) {
                        uVar21 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar26,uVar22,uRam0000000003d41470);
                        return uVar21;
                      }
                      func_0x00f78af4(uVar22,uVar22);
                      break;
                    case 3:
                    case 4:
                    case 5:
                      /*Core.Services.Response$$Payload<Achievements>*/ func_0x018de074(auStack_1e0,pauVar29,uRam0000000003d5c740);
                      uStack_118 = auStack_1e0._8_8_;
                      uStack_120 = auStack_1e0._0_8_;
                      uStack_110 = uStack_1d0;
                      auVar35 = /*System.Nullable<Achievements>$$get_Value*/ func_0x02619a48(&uStack_120,uRam0000000003d3e598);
                      uStack_1e4 = *(undefined4 *)(lVar28 + 0x10);
                      uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1e4);
                      uStack_1c1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                      uVar23 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1c1);
                      uVar16 = Core_Services_Extensions__Print(auVar35._0_8_,auVar35._8_8_);
                      uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar23,uVar16,0);
                      /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,1,uVar22);
                      lVar26 = *(long *)(lVar28 + 0x20);
                      auStack_1e0 = auVar35;
                      uVar22 = func_0x00f78ae0(/*Core.Services.Achievements_TypeInfo*/ uRam0000000003d1fa70,auStack_1e0);
                      if (lVar26 != 0) {
                        uVar21 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar26,uVar22,uRam0000000003d41470);
                        return uVar21;
                      }
                      func_0x00f78af4(uVar22,uVar22);
                      break;
                    case 6:
                      /*Core.Services.Response$$Payload<LeaderboardSets>*/ func_0x018de248(auStack_1e0,pauVar29,uRam0000000003d5c758);
                      uStack_138 = auStack_1e0._8_8_;
                      uStack_140 = auStack_1e0._0_8_;
                      uStack_130 = uStack_1d0;
                      auVar35 = /*System.Nullable<LeaderboardSets>$$get_Value*/ func_0x0265bcf4(&uStack_140,uRam0000000003d3eaf8);
                      uStack_1e4 = *(undefined4 *)(lVar28 + 0x10);
                      uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1e4);
                      uStack_1c1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                      uVar23 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1c1);
                      uVar16 = Core_Services_Extensions__Print(auVar35._0_8_,auVar35._8_8_);
                      uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar23,uVar16,0);
                      /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,1,uVar22);
                      lVar26 = *(long *)(lVar28 + 0x20);
                      auStack_1e0 = auVar35;
                      uVar22 = func_0x00f78ae0(/*Core.Services.LeaderboardSets_TypeInfo*/ uRam0000000003d22e40,auStack_1e0);
                      if (lVar26 != 0) {
                        uVar21 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar26,uVar22,uRam0000000003d41470);
                        return uVar21;
                      }
                      func_0x00f78af4(uVar22,uVar22);
                      break;
                    case 7:
                      /*Core.Services.Response$$Payload<LeaderboardScores>*/ func_0x018de1ac(auStack_1e0,pauVar29,uRam0000000003d5c750);
                      uStack_158 = auStack_1e0._8_8_;
                      uStack_160 = auStack_1e0._0_8_;
                      uStack_150 = uStack_1d0;
                      auVar35 = /*System.Nullable<LeaderboardScores>$$get_Value*/ func_0x0265b17c(&uStack_160,uRam0000000003d3eae0);
                      uStack_1e4 = *(undefined4 *)(lVar28 + 0x10);
                      uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1e4);
                      uStack_1c1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                      uVar23 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1c1);
                      uVar16 = Core_Services_Extensions__Print(auVar35._0_8_,auVar35._8_8_);
                      uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar23,uVar16,0);
                      /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,1,uVar22);
                      lVar26 = *(long *)(lVar28 + 0x20);
                      auStack_1e0 = auVar35;
                      uVar22 = func_0x00f78ae0(/*Core.Services.LeaderboardScores_TypeInfo*/ uRam0000000003d22e30,auStack_1e0);
                      if (lVar26 != 0) {
                        uVar21 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar26,uVar22,uRam0000000003d41470);
                        return uVar21;
                      }
                      func_0x00f78af4(uVar22,uVar22);
                      break;
                    case 8:
                    case 9:
                    case 10:
                      /*Core.Services.Response$$Payload<Player>*/ func_0x018de2e4(auStack_1e0,pauVar29,uRam0000000003d5c760);
                      uStack_178 = auStack_1e0._8_8_;
                      uStack_180 = auStack_1e0._0_8_;
                      uStack_170 = uStack_1d0;
                      auVar35 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(&uStack_180,uRam0000000003d3ebf0);
                      uStack_1e4 = *(undefined4 *)(lVar28 + 0x10);
                      uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1e4);
                      uStack_1c1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                      uVar23 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1c1);
                      uVar16 = Core_Services_Extensions__Print(auVar35._0_8_,auVar35._8_8_);
                      uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar23,uVar16,0);
                      /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,1,uVar22);
                      lVar26 = *(long *)(lVar28 + 0x20);
                      auStack_1e0 = auVar35;
                      uVar22 = func_0x00f78ae0(/*Core.Services.Player_TypeInfo*/ uRam0000000003d23d20,auStack_1e0);
                      if (lVar26 != 0) {
                        uVar21 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar26,uVar22,uRam0000000003d41470);
                        return uVar21;
                      }
                      func_0x00f78af4(uVar22,uVar22);
                      break;
                    case 0xc:
                      /*Core.Services.Response$$Payload<Saves>*/ func_0x018de41c(auStack_1e0,pauVar29,uRam0000000003d5c770);
                      uStack_198 = auStack_1e0._8_8_;
                      uStack_1a0 = auStack_1e0._0_8_;
                      uStack_190 = uStack_1d0;
                      auVar35 = /*System.Nullable<Saves>$$get_Value*/ func_0x02660838(&uStack_1a0,uRam0000000003d3ecf8);
                      uStack_1e4 = *(undefined4 *)(lVar28 + 0x10);
                      uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1e4);
                      uStack_1c1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                      uVar23 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1c1);
                      uVar16 = Core_Services_Extensions__Print(auVar35._0_8_,auVar35._8_8_);
                      uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar23,uVar16,0);
                      /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,1,uVar22);
                      lVar26 = *(long *)(lVar28 + 0x20);
                      auStack_1e0 = auVar35;
                      uVar22 = func_0x00f78ae0(/*Core.Services.Saves_TypeInfo*/ uRam0000000003d246f8,auStack_1e0);
                      if (lVar26 != 0) {
                        uVar21 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar26,uVar22,uRam0000000003d41470);
                        return uVar21;
                      }
                      func_0x00f78af4(uVar22,uVar22);
                      break;
                    case 0xd:
                    case 0xe:
                    case 0xf:
                    case 0x10:
                    case 0x11:
                      /*Core.Services.Response$$Payload<Save>*/ func_0x018de380(auStack_1e0,pauVar29,uRam0000000003d5c768);
                      uStack_1b8 = auStack_1e0._8_8_;
                      uStack_1c0 = auStack_1e0._0_8_;
                      uStack_1b0 = uStack_1d0;
                      auVar35 = /*System.Nullable<Save>$$get_Value*/ func_0x0265fcc0(&uStack_1c0,uRam0000000003d3ecd8);
                      uStack_1e4 = *(undefined4 *)(lVar28 + 0x10);
                      uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1e4);
                      uStack_1c1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                      uVar23 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1c1);
                      uVar16 = Core_Services_Extensions__Print(auVar35._0_8_,auVar35._8_8_);
                      uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar23,uVar16,0);
                      /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,1,uVar22);
                      lVar26 = *(long *)(lVar28 + 0x20);
                      auStack_1e0 = auVar35;
                      uVar22 = func_0x00f78ae0(/*Core.Services.Save_TypeInfo*/ uRam0000000003d246c0,auStack_1e0);
                      if (lVar26 != 0) {
                        uVar21 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar26,uVar22,uRam0000000003d41470);
                        return uVar21;
                      }
                      func_0x00f78af4(uVar22,uVar22);
                      break;
                    default:
                      lVar26 = *(long *)(lVar28 + 0x20);
                      uVar12 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar29,0);
                      auStack_1e0[0] = uVar12;
                      uVar22 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,auStack_1e0);
                      uVar22 = /*System.String$$Format*/ func_0x029bc688(/*STR('Response payload unsupported, {0}')*/ uRam0000000003d71ef0,uVar22,0);
                      uVar23 = func_0x00f78aec(/*System.NotImplementedException_TypeInfo*/ uRam0000000003d238c8);
                      /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar23,uVar22,0);
                      if (lVar26 != 0) {
                        uVar21 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetException*/ func_0x028b5768(lVar26,uVar23,uRam0000000003d41468);
                        return uVar21;
                      }
                      func_0x00f78af4();
                    }
                  }
                  goto code_r0x0167a748;
                }
                iVar13 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar29,0);
                if (iVar13 != 0) {
                  *(char *)(lVar26 + 0x4e1) = (char)iVar13;
                }
                uVar22 = /*STR('<= ({0}) {1} ErrorCode:{2}')*/ uRam0000000003d67d88;
                if (lVar28 == 0) {
                  auStack_1e0._0_8_ = 0;
                }
                else {
                  auStack_1e0._0_8_ = 0;
                  /*System.Nullable<int>$$.ctor*/ func_0x02658d80(auStack_1e0,*(undefined4 *)(lVar28 + 0x10),uRam0000000003d3ea00);
                }
                uVar23 = func_0x00f78ae0(/*System.Nullable<int>_TypeInfo*/ uRam0000000003d1e498,auStack_1e0);
                uVar12 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar29,0);
                uStack_1e4 = CONCAT31(uStack_1e4._1_3_,uVar12);
                lVar15 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_1e4);
                if ((lVar15 != 0) &&
                   (plVar19 = (long *)/*System.Object$$GetType*/ func_0x02959198(lVar15,0), plVar19 != (long *)0x0)) {
                  uVar16 = (**(code **)(*plVar19 + 0x1b8))
                                     (plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
                  uStack_1c1 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar29,0);
                  uVar17 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_1c1);
                  uVar22 = /*System.String$$Format*/ func_0x029bdf30(uVar22,uVar23,uVar16,uVar17,0);
                  uVar21 = /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar26,4,uVar22);
                  if (lVar28 == 0) {
                    return uVar21;
                  }
                  lVar26 = *(long *)(lVar28 + 0x20);
                  pauVar29 = (undefined1 (*) [16])/*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar29,0);
                  uVar22 = func_0x00f78aec(/*Core.Services.ServicesException_TypeInfo*/ uRam0000000003d24970);
                  /*Core.Services.ServicesException$$.ctor*/ func_0x01684c6c(uVar22,pauVar29,0);
                  if (lVar26 != 0) {
                    uVar21 = /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetException*/ func_0x028b5768(lVar26,uVar22,uRam0000000003d41468);
                    return uVar21;
                  }
                }
              }
            }
          }
          func_0x00f78af4();
          puVar18 = (undefined8 *)___cxa_allocate_exception(8);
          *puVar18 = *(undefined8 *)*pauVar29;
          ___cxa_throw(puVar18,&DAT_03a5ed38,0);
code_r0x0167a748:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x167a74c);
          (*pcVar6)();
        }
      }
      else {
        unaff_x21 = 0x3d56000;
        iVar13 = *(int *)(lVar28 + 0x18);
        puVar34 = &UNK_0166c358;
        puVar9 = &stack0xffffffffffffff90;
      }
    }
    else {
      iVar13 = *(int *)(auVar35._8_8_ + 0x18);
      puVar34 = &UNK_0166c294;
      puVar9 = &stack0xffffffffffffffc0;
      pppppppuVar32 = (undefined8 *******)&stack0xffffffffffffffe0;
    }
    uVar21 = auVar35._0_8_;
    *(ulong *)(puVar9 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar9 + -0x28) = unaff_x21;
    *(long *)(puVar9 + -0x20) = auVar35._8_8_;
    *(long *)(puVar9 + -0x18) = lVar26;
    *(undefined8 ********)(puVar9 + -0x10) = pppppppuVar32;
    *(undefined **)(puVar9 + -8) = puVar34;
    puVar31 = puVar9 + -0x10;
    uVar24 = 4;
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
    *(int *)(uVar21 + 0x44) = iVar13;
    uVar25 = CONCAT44(0,iVar13 * 4);
    auVar38._8_8_ = 4;
    auVar38._0_8_ = uVar25;
    auVar37._8_8_ = 4;
    auVar37._0_8_ = uVar21;
    puVar34 = &UNK_016ce188;
    puVar9 = puVar9 + -0x30;
  }
  else {
    pppppppuVar8 = (undefined8 *******)&stack0xffffffffffffffd0;
    puVar9 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,3,0);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 3) {
        uVar22 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
        *(undefined8 *)(param_1 + 0x28) = uVar22;
      }
      *(undefined4 *)(param_1 + 0x30) = 3;
      puVar33 = &UNK_016ce320;
      puVar34 = param_1;
code_r0x016cda04:
      *(undefined1 **)((long)pppppppuVar8 + -0x10) = puVar9;
      *(undefined **)((long)pppppppuVar8 + -8) = puVar33;
      if ((*(long *)(puVar34 + 0x18) != 0) &&
         (lVar26 = *(long *)(*(long *)(puVar34 + 0x18) + 0x10), lVar26 != 0)) {
        return (ulong)(uint)(*(int *)(lVar26 + 0x18) - *(int *)(puVar34 + 0x10));
      }
      lVar26 = func_0x00f78af4();
      return (ulong)*(byte *)(lVar26 + 0x48);
    }
    auVar39 = func_0x00f78af4();
    puVar34 = auVar39._0_8_;
    pppppppuVar8 = &ppppppuStack_50;
    ppppppuStack_50 = (undefined8 ******)((long)&MACH_HEADER.magic + 3);
    puVar9 = &stack0xffffffffffffffc0;
    puStack_48 = param_1;
    if (auVar39._8_4_ < *(int *)(puVar34 + 0x30)) {
      puVar33 = &UNK_016ce3a4;
      goto code_r0x016cda04;
    }
    func_0x00f78a24(0x3d22738);
    uVar22 = func_0x00f78aec();
    uVar23 = func_0x00f78a24(0x3d6ceb8);
    uVar24 = 0;
    /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar22,uVar23);
    uVar23 = func_0x00f78a24(0x3d56a58);
    func_0x00f78ac0(uVar22,uVar23);
    func_0x00f78af4();
    uVar22 = func_0x00f78b24();
    auVar38 = func_0x00f78ac0(uVar22,0);
    uVar21 = auVar38._0_8_;
    puVar31 = &stack0xffffffffffffffa0;
    if (((int)uVar24 == param_4) && (*(char *)(uVar21 + 0x48) == '\0')) {
      return uVar21;
    }
    auVar37._8_8_ = 1;
    auVar37._0_8_ = uVar21;
    uVar25 = 0;
    puVar34 = &UNK_016ce46c;
    puVar9 = &stack0xffffffffffffff80;
    uVar21 = unaff_x22;
  }
  do {
    while( true ) {
      uVar27 = auVar38._0_8_;
      uVar20 = auVar37._0_8_;
      puVar7 = puVar9 + -0x30;
      *(ulong *)(puVar9 + -0x30) = uVar21;
      *(ulong *)(puVar9 + -0x28) = uVar24;
      *(undefined1 (*) [16])(puVar9 + -0x20) = auVar38;
      *(undefined1 **)(puVar9 + -0x10) = puVar31;
      *(undefined **)(puVar9 + -8) = puVar34;
      iVar13 = auVar37._8_4_;
      if (*(int *)(uVar20 + 0x20) < iVar13) {
        *(int *)(uVar20 + 0x20) = iVar13;
      }
      uVar30 = uVar21;
      if ((*(long *)(uVar20 + 0x18) == 0) ||
         (lVar26 = *(long *)(*(long *)(uVar20 + 0x18) + 0x10), lVar26 == 0)) break;
      uVar3 = *(uint *)(lVar26 + 0x18);
      iVar4 = *(int *)(uVar20 + 0x10);
      uVar2 = iVar4 - (uVar3 + (int)uVar25) & iVar13 - 1U;
      uVar27 = CONCAT44(0,uVar2);
      uVar1 = (int)uVar25 + iVar13 + uVar2;
      uVar30 = (ulong)uVar1;
      uVar21 = uVar20;
      while (uVar24 = (ulong)uVar3, iVar4 < (int)uVar1) {
        uVar21 = /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar20);
        if ((*(long *)(uVar20 + 0x18) == 0) ||
           (lVar26 = *(long *)(*(long *)(uVar20 + 0x18) + 0x10), lVar26 == 0))
        goto code_r0x016cdb68;
        iVar4 = *(int *)(uVar20 + 0x10) - uVar3;
        uVar3 = *(uint *)(lVar26 + 0x18);
        iVar4 = iVar4 + uVar3;
        *(int *)(uVar20 + 0x10) = iVar4;
      }
      if ((int)uVar2 < 1) {
        return uVar21;
      }
      uVar22 = *(undefined8 *)*(undefined1 (*) [16])(puVar9 + -0x20);
      uVar23 = *(undefined8 *)(puVar9 + -0x18);
      auVar38 = *(undefined1 (*) [16])(puVar9 + -0x20);
      uVar21 = *(ulong *)(puVar9 + -0x30);
      uVar24 = *(ulong *)(puVar9 + -0x28);
      *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
      *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
      lVar26 = *(long *)(uVar20 + 0x18);
      auVar5._8_8_ = lVar26;
      auVar5._0_8_ = uVar27;
      uVar2 = *(int *)(uVar20 + 0x10) - uVar2;
      uVar30 = (ulong)uVar2;
      auVar36._8_4_ = uVar2;
      auVar36._0_8_ = lVar26;
      auVar36._12_4_ = 0;
      *(uint *)(uVar20 + 0x10) = uVar2;
      if (lVar26 != 0) {
        *(ulong *)(puVar9 + -0x30) = uVar21;
        *(ulong *)(puVar9 + -0x28) = uVar24;
        *(undefined8 *)(puVar9 + -0x20) = uVar22;
        *(undefined8 *)(puVar9 + -0x18) = uVar23;
        *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
        *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        puVar31 = puVar9 + -0x10;
        puVar34 = &UNK_016cc908;
        uVar21 = 0;
        goto code_r0x016cc7a4;
      }
      lVar26 = func_0x00f78af4();
      puVar31 = puVar9 + -0x20;
      *(undefined1 **)(puVar9 + -0x20) = puVar9 + -0x10;
      *(undefined **)(puVar9 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
      if ((*(long *)(lVar26 + 0x18) != 0) &&
         (plVar19 = *(long **)(*(long *)(lVar26 + 0x18) + 0x10), plVar19 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar21 = (**(code **)(*plVar19 + 0x178))
                           (plVar19,(int)plVar19[3] << 1,*(undefined8 *)(*plVar19 + 0x180));
        return uVar21;
      }
      puVar34 = &FlatBuffers_FlatBufferBuilder__Prep;
      auVar37 = func_0x00f78af4();
      puVar9 = puVar9 + -0x20;
    }
code_r0x016cdb68:
    auVar5._8_8_ = uVar27;
    auVar5._0_8_ = uVar24;
    auVar35 = func_0x00f78af4();
    uVar21 = auVar35._8_8_;
    lVar28 = auVar35._0_8_;
    *(undefined1 **)(puVar9 + -0x40) = puVar9 + -0x10;
    *(undefined **)(puVar9 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
    lVar26 = *(long *)(lVar28 + 0x18);
    iVar13 = *(int *)(lVar28 + 0x10) + -1;
    *(int *)(lVar28 + 0x10) = iVar13;
    if (lVar26 != 0) {
      puVar10 = puVar9 + -0x30;
      uVar22 = *(undefined8 *)(puVar9 + -0x40);
      uVar23 = *(undefined8 *)(puVar9 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
      auVar5._8_4_ = iVar13;
      auVar5._0_8_ = lVar26;
      auVar5._12_4_ = 0;
      auVar36._8_4_ = iVar13;
      auVar36._0_8_ = lVar26;
      auVar36._12_4_ = 0;
      puVar7 = puVar10 + -0x30;
      *(ulong *)(puVar10 + -0x30) = uVar30;
      *(ulong *)(puVar10 + -0x28) = uVar24;
      *(ulong *)(puVar10 + -0x20) = uVar27;
      *(ulong *)(puVar10 + -0x18) = uVar20;
      *(undefined8 *)(puVar10 + -0x10) = uVar22;
      *(undefined8 *)(puVar10 + -8) = uVar23;
      puVar31 = puVar10 + -0x10;
      uVar27 = 1;
      puVar34 = &UNK_016cc89c;
      goto code_r0x016cc7a4;
    }
    auVar35 = func_0x00f78af4();
    uVar25 = auVar35._8_8_;
    lVar26 = auVar35._0_8_;
    *(undefined1 **)(puVar9 + -0x50) = puVar9 + -0x40;
    *(undefined **)(puVar9 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
    iVar13 = *(int *)(lVar26 + 0x10) + -1;
    auVar36._8_4_ = iVar13;
    auVar36._0_8_ = *(long *)(lVar26 + 0x18);
    auVar36._12_4_ = 0;
    *(int *)(lVar26 + 0x10) = iVar13;
    if (*(long *)(lVar26 + 0x18) != 0) {
      puVar11 = puVar9 + -0x40;
      puVar31 = *(undefined1 **)(puVar9 + -0x50);
      puVar34 = *(undefined **)(puVar9 + -0x48);
      uVar21 = uVar20;
      goto code_r0x016cc810;
    }
    auVar35 = func_0x00f78af4();
    uVar21 = auVar35._8_8_;
    lVar28 = auVar35._0_8_;
    *(undefined1 **)(puVar9 + -0x60) = puVar9 + -0x50;
    *(undefined **)(puVar9 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
    lVar26 = *(long *)(lVar28 + 0x18);
    iVar13 = *(int *)(lVar28 + 0x10) + -1;
    *(int *)(lVar28 + 0x10) = iVar13;
    if (lVar26 != 0) {
      puVar10 = puVar9 + -0x50;
      uVar22 = *(undefined8 *)(puVar9 + -0x60);
      uVar23 = *(undefined8 *)(puVar9 + -0x58);
      goto FlatBuffers_ByteBuffer__PutByte;
    }
    auVar35 = func_0x00f78af4();
    uVar21 = auVar35._8_8_;
    lVar26 = auVar35._0_8_;
    puVar7 = puVar9 + -0x90;
    *(ulong *)(puVar9 + -0x90) = uVar30;
    *(ulong *)(puVar9 + -0x88) = uVar24;
    *(ulong *)(puVar9 + -0x80) = uVar27;
    *(ulong *)(puVar9 + -0x78) = uVar20;
    *(undefined1 **)(puVar9 + -0x70) = puVar9 + -0x60;
    *(undefined **)(puVar9 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
    puVar31 = puVar9 + -0x70;
    lVar28 = *(long *)(lVar26 + 0x18);
    uVar1 = *(int *)(lVar26 + 0x10) - 2;
    auVar5._8_8_ = lVar28;
    auVar5._0_8_ = CONCAT44(0,uVar1);
    auVar36._8_4_ = uVar1;
    auVar36._0_8_ = lVar28;
    auVar36._12_4_ = 0;
    *(uint *)(lVar26 + 0x10) = uVar1;
    if (lVar28 != 0) {
      uVar27 = 2;
      puVar34 = &UNK_016cdc34;
      goto code_r0x016cc7a4;
    }
    auVar35 = func_0x00f78af4();
    uVar21 = auVar35._8_8_;
    lVar26 = auVar35._0_8_;
    puVar7 = puVar9 + -0xc0;
    *(ulong *)(puVar9 + -0xc0) = uVar30;
    *(ulong *)(puVar9 + -0xb8) = CONCAT44(0,uVar1);
    *(undefined8 *)(puVar9 + -0xb0) = 0;
    *(ulong *)(puVar9 + -0xa8) = uVar20;
    *(undefined1 **)(puVar9 + -0xa0) = puVar31;
    *(undefined **)(puVar9 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
    puVar31 = puVar9 + -0xa0;
    lVar28 = *(long *)(lVar26 + 0x18);
    uVar1 = *(int *)(lVar26 + 0x10) - 2;
    auVar5._8_8_ = lVar28;
    auVar5._0_8_ = CONCAT44(0,uVar1);
    auVar36._8_4_ = uVar1;
    auVar36._0_8_ = lVar28;
    auVar36._12_4_ = 0;
    *(uint *)(lVar26 + 0x10) = uVar1;
    if (lVar28 != 0) {
      uVar27 = 2;
      puVar34 = &UNK_016cdc90;
      goto code_r0x016cc7a4;
    }
    auVar35 = func_0x00f78af4();
    uVar21 = auVar35._8_8_;
    lVar26 = auVar35._0_8_;
    puVar7 = puVar9 + -0xf0;
    *(ulong *)(puVar9 + -0xf0) = uVar30;
    *(ulong *)(puVar9 + -0xe8) = CONCAT44(0,uVar1);
    *(undefined8 *)(puVar9 + -0xe0) = 0;
    *(ulong *)(puVar9 + -0xd8) = uVar20;
    *(undefined1 **)(puVar9 + -0xd0) = puVar31;
    *(undefined **)(puVar9 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
    puVar31 = puVar9 + -0xd0;
    lVar28 = *(long *)(lVar26 + 0x18);
    uVar1 = *(int *)(lVar26 + 0x10) - 4;
    auVar5._8_8_ = lVar28;
    auVar5._0_8_ = CONCAT44(0,uVar1);
    auVar36._8_4_ = uVar1;
    auVar36._0_8_ = lVar28;
    auVar36._12_4_ = 0;
    *(uint *)(lVar26 + 0x10) = uVar1;
    if (lVar28 != 0) {
      uVar27 = 4;
      puVar34 = &UNK_016cdcec;
      goto code_r0x016cc7a4;
    }
    auVar35 = func_0x00f78af4();
    uVar21 = auVar35._8_8_;
    lVar26 = auVar35._0_8_;
    puVar7 = puVar9 + -0x120;
    *(ulong *)(puVar9 + -0x120) = uVar30;
    *(ulong *)(puVar9 + -0x118) = CONCAT44(0,uVar1);
    *(undefined8 *)(puVar9 + -0x110) = 0;
    *(ulong *)(puVar9 + -0x108) = uVar20;
    *(undefined1 **)(puVar9 + -0x100) = puVar31;
    *(undefined **)(puVar9 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
    puVar31 = puVar9 + -0x100;
    lVar28 = *(long *)(lVar26 + 0x18);
    uVar1 = *(int *)(lVar26 + 0x10) - 4;
    auVar5._8_8_ = lVar28;
    auVar5._0_8_ = CONCAT44(0,uVar1);
    auVar36._8_4_ = uVar1;
    auVar36._0_8_ = lVar28;
    auVar36._12_4_ = 0;
    *(uint *)(lVar26 + 0x10) = uVar1;
    if (lVar28 != 0) {
      uVar27 = 4;
      puVar34 = &UNK_016cdd48;
      goto code_r0x016cc7a4;
    }
    auVar35 = func_0x00f78af4();
    uVar21 = auVar35._8_8_;
    lVar26 = auVar35._0_8_;
    puVar7 = puVar9 + -0x150;
    *(ulong *)(puVar9 + -0x150) = uVar30;
    *(ulong *)(puVar9 + -0x148) = CONCAT44(0,uVar1);
    *(undefined8 *)(puVar9 + -0x140) = 0;
    *(ulong *)(puVar9 + -0x138) = uVar20;
    *(undefined1 **)(puVar9 + -0x130) = puVar31;
    *(undefined **)(puVar9 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
    puVar31 = puVar9 + -0x130;
    lVar28 = *(long *)(lVar26 + 0x18);
    uVar1 = *(int *)(lVar26 + 0x10) - 8;
    auVar5._8_8_ = lVar28;
    auVar5._0_8_ = CONCAT44(0,uVar1);
    auVar36._8_4_ = uVar1;
    auVar36._0_8_ = lVar28;
    auVar36._12_4_ = 0;
    *(uint *)(lVar26 + 0x10) = uVar1;
    if (lVar28 != 0) {
      uVar27 = 8;
      puVar34 = &UNK_016cdda4;
      goto code_r0x016cc7a4;
    }
    auVar35 = func_0x00f78af4();
    uVar21 = auVar35._8_8_;
    lVar26 = auVar35._0_8_;
    puVar7 = puVar9 + -0x180;
    *(ulong *)(puVar9 + -0x180) = uVar30;
    *(ulong *)(puVar9 + -0x178) = CONCAT44(0,uVar1);
    *(undefined8 *)(puVar9 + -0x170) = 0;
    *(ulong *)(puVar9 + -0x168) = uVar20;
    *(undefined1 **)(puVar9 + -0x160) = puVar31;
    *(undefined **)(puVar9 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
    puVar31 = puVar9 + -0x160;
    lVar28 = *(long *)(lVar26 + 0x18);
    uVar1 = *(int *)(lVar26 + 0x10) - 8;
    uVar24 = CONCAT44(0,uVar1);
    auVar5._8_8_ = lVar28;
    auVar5._0_8_ = uVar24;
    auVar36._8_4_ = uVar1;
    auVar36._0_8_ = lVar28;
    auVar36._12_4_ = 0;
    *(uint *)(lVar26 + 0x10) = uVar1;
    if (lVar28 != 0) {
      uVar27 = 8;
      puVar34 = &UNK_016cde00;
      goto code_r0x016cc7a4;
    }
    lVar26 = func_0x00f78af4();
    *(undefined1 **)(puVar9 + -400) = puVar31;
    *(undefined **)(puVar9 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
    lVar28 = *(long *)(lVar26 + 0x18);
    auVar5._8_8_ = lVar28;
    uVar1 = *(int *)(lVar26 + 0x10) - 4;
    uVar21 = (ulong)uVar1;
    auVar36._8_4_ = uVar1;
    auVar36._0_8_ = lVar28;
    auVar36._12_4_ = 0;
    *(uint *)(lVar26 + 0x10) = uVar1;
    if (lVar28 != 0) {
      puVar7 = puVar9 + -0x1b0;
      *(undefined8 *)(puVar9 + -0x1b0) = unaff_d9;
      *(undefined8 *)(puVar9 + -0x1a8) = unaff_d8;
      *(undefined8 *)(puVar9 + -0x1a0) = 0;
      *(ulong *)(puVar9 + -0x198) = uVar20;
      *(undefined8 *)(puVar9 + -400) = *(undefined8 *)(puVar9 + -400);
      *(undefined8 *)(puVar9 + -0x188) = *(undefined8 *)(puVar9 + -0x188);
      puVar31 = puVar9 + -400;
      uVar27 = 4;
      puVar34 = &UNK_016ccba4;
      goto code_r0x016cc7a4;
    }
    lVar26 = func_0x00f78af4();
    *(undefined1 **)(puVar9 + -0x1a0) = puVar9 + -400;
    *(undefined **)(puVar9 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
    lVar28 = *(long *)(lVar26 + 0x18);
    auVar5._8_8_ = lVar28;
    uVar1 = *(int *)(lVar26 + 0x10) - 8;
    uVar21 = (ulong)uVar1;
    auVar36._8_4_ = uVar1;
    auVar36._0_8_ = lVar28;
    auVar36._12_4_ = 0;
    *(uint *)(lVar26 + 0x10) = uVar1;
    if (lVar28 != 0) break;
    auVar38 = func_0x00f78af4();
    *(undefined8 *)(puVar9 + -0x1c0) = 0;
    *(ulong *)(puVar9 + -0x1b8) = uVar20;
    *(undefined1 **)(puVar9 + -0x1b0) = puVar9 + -0x1a0;
    *(undefined **)(puVar9 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
    puVar31 = puVar9 + -0x1b0;
    auVar37._8_8_ = 1;
    auVar37._0_8_ = auVar38._0_8_;
    uVar25 = 0;
    puVar34 = &UNK_016cde9c;
    puVar9 = puVar9 + -0x1c0;
    uVar21 = uVar30;
  } while( true );
  puVar7 = puVar9 + -0x1c0;
  *(undefined8 *)(puVar9 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar9 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar9 + -0x1b0) = 0;
  *(ulong *)(puVar9 + -0x1a8) = uVar20;
  *(undefined8 *)(puVar9 + -0x1a0) = *(undefined8 *)(puVar9 + -0x1a0);
  *(undefined8 *)(puVar9 + -0x198) = *(undefined8 *)(puVar9 + -0x198);
  puVar31 = puVar9 + -0x1a0;
  uVar27 = 8;
  puVar34 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar11 = puVar7 + -0x20;
    *(long *)(puVar7 + -0x20) = auVar5._8_8_;
    *(ulong *)(puVar7 + -0x18) = uVar21;
    *(undefined1 **)(puVar7 + -0x10) = puVar31;
    *(undefined **)(puVar7 + -8) = puVar34;
    puVar31 = puVar7 + -0x10;
    if (auVar36._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar21 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar21,0);
      uVar22 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar21,uVar22);
      uVar25 = uVar27;
    }
    else {
      lVar26 = *(long *)(auVar36._0_8_ + 0x10);
      uVar25 = uVar27;
      if (lVar26 != 0) {
        if (auVar36._8_4_ <= *(int *)(lVar26 + 0x18) - (int)uVar27) {
          return auVar36._0_8_;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar34 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar36 = func_0x00f78af4();
code_r0x016cc810:
    puVar7 = puVar11 + -0x30;
    *(ulong *)(puVar11 + -0x30) = uVar30;
    *(undefined1 (*) [16])(puVar11 + -0x28) = auVar5;
    *(ulong *)(puVar11 + -0x18) = uVar21;
    *(undefined1 **)(puVar11 + -0x10) = puVar31;
    *(undefined **)(puVar11 + -8) = puVar34;
    puVar31 = puVar11 + -0x10;
    uVar27 = 1;
    puVar34 = &UNK_016cc834;
    uVar21 = uVar25;
    auVar5 = auVar36;
  } while( true );
}



// ============================================================
// RVA: 0x166c25c | Core.Services.Group.CreateOtherMembersVector
// ============================================================

/* WARNING: Possible PIC construction at 0x0166c290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166c354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc634) */
/* WARNING: Removing unreachable block (ram,0x016cc668) */
/* WARNING: Removing unreachable block (ram,0x016cc67c) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x0166c358) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x016cda04) */
/* WARNING: Removing unreachable block (ram,0x016cda14) */
/* WARNING: Removing unreachable block (ram,0x016cda30) */
/* WARNING: Removing unreachable block (ram,0x016cda1c) */
/* WARNING: Removing unreachable block (ram,0x0166c294) */
/* WARNING: Removing unreachable block (ram,0x0166c2a0) */
/* WARNING: Removing unreachable block (ram,0x0166c2a8) */
/* WARNING: Removing unreachable block (ram,0x0166c2c4) */
/* WARNING: Removing unreachable block (ram,0x0166c2d0) */
/* WARNING: Removing unreachable block (ram,0x0166c2dc) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */

void Core_Services_Group__CreateOtherMembersVector(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 uVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined8 unaff_x21;
  undefined1 (*pauVar27) [16];
  ulong uVar28;
  undefined8 unaff_x22;
  ulong uVar29;
  undefined1 *puVar30;
  undefined8 *******pppppppuVar31;
  undefined *puVar32;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  undefined4 uStack_1d4;
  undefined1 auStack_1d0 [16];
  undefined8 uStack_1c0;
  undefined1 uStack_1b1;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  
  auVar33._8_8_ = param_2;
  auVar33._0_8_ = param_1;
  if ((param_2 != 0) && (param_1 != 0)) {
    iVar12 = *(int *)(param_2 + 0x18);
    puVar32 = (undefined *)0x166c294;
    puVar8 = &stack0xffffffffffffffd0;
    pppppppuVar31 = (undefined8 *******)&stack0xfffffffffffffff0;
code_r0x016ce14c:
    uVar19 = auVar33._0_8_;
    uVar28 = 4;
    *(undefined8 *)(puVar8 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar8 + -0x28) = unaff_x21;
    *(long *)(puVar8 + -0x20) = auVar33._8_8_;
    *(long *)(puVar8 + -0x18) = param_1;
    *(undefined8 ********)(puVar8 + -0x10) = pppppppuVar31;
    *(undefined **)(puVar8 + -8) = puVar32;
    puVar30 = puVar8 + -0x10;
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
    *(int *)(uVar19 + 0x44) = iVar12;
    uVar26 = CONCAT44(0,iVar12 * 4);
    auVar36._8_8_ = 4;
    auVar36._0_8_ = uVar26;
    auVar35._8_8_ = 4;
    auVar35._0_8_ = uVar19;
    puVar32 = &UNK_016ce188;
    puVar8 = puVar8 + -0x30;
    do {
      while( true ) {
        uVar24 = auVar36._0_8_;
        uVar22 = auVar35._0_8_;
        puVar7 = puVar8 + -0x30;
        *(ulong *)(puVar8 + -0x30) = uVar19;
        *(ulong *)(puVar8 + -0x28) = uVar28;
        *(undefined1 (*) [16])(puVar8 + -0x20) = auVar36;
        *(undefined1 **)(puVar8 + -0x10) = puVar30;
        *(undefined **)(puVar8 + -8) = puVar32;
        iVar12 = auVar35._8_4_;
        if (*(int *)(uVar22 + 0x20) < iVar12) {
          *(int *)(uVar22 + 0x20) = iVar12;
        }
        uVar29 = uVar19;
        if ((*(long *)(uVar22 + 0x18) == 0) ||
           (lVar23 = *(long *)(*(long *)(uVar22 + 0x18) + 0x10), lVar23 == 0)) break;
        uVar3 = *(uint *)(lVar23 + 0x18);
        iVar4 = *(int *)(uVar22 + 0x10);
        uVar2 = iVar4 - (uVar3 + (int)uVar26) & iVar12 - 1U;
        uVar24 = CONCAT44(0,uVar2);
        uVar1 = (int)uVar26 + iVar12 + uVar2;
        uVar29 = (ulong)uVar1;
        while (uVar28 = (ulong)uVar3, iVar4 < (int)uVar1) {
          /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar22);
          if ((*(long *)(uVar22 + 0x18) == 0) ||
             (lVar23 = *(long *)(*(long *)(uVar22 + 0x18) + 0x10), lVar23 == 0))
          goto code_r0x016cdb68;
          iVar4 = *(int *)(uVar22 + 0x10) - uVar3;
          uVar3 = *(uint *)(lVar23 + 0x18);
          iVar4 = iVar4 + uVar3;
          *(int *)(uVar22 + 0x10) = iVar4;
        }
        if ((int)uVar2 < 1) {
          return;
        }
        uVar20 = *(undefined8 *)*(undefined1 (*) [16])(puVar8 + -0x20);
        uVar15 = *(undefined8 *)(puVar8 + -0x18);
        auVar36 = *(undefined1 (*) [16])(puVar8 + -0x20);
        uVar19 = *(ulong *)(puVar8 + -0x30);
        uVar28 = *(ulong *)(puVar8 + -0x28);
        *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
        *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
        lVar23 = *(long *)(uVar22 + 0x18);
        auVar5._8_8_ = lVar23;
        auVar5._0_8_ = uVar24;
        uVar2 = *(int *)(uVar22 + 0x10) - uVar2;
        uVar29 = (ulong)uVar2;
        auVar34._8_4_ = uVar2;
        auVar34._0_8_ = lVar23;
        auVar34._12_4_ = 0;
        *(uint *)(uVar22 + 0x10) = uVar2;
        if (lVar23 != 0) {
          *(ulong *)(puVar8 + -0x30) = uVar19;
          *(ulong *)(puVar8 + -0x28) = uVar28;
          *(undefined8 *)(puVar8 + -0x20) = uVar20;
          *(undefined8 *)(puVar8 + -0x18) = uVar15;
          *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
          *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
          puVar30 = puVar8 + -0x10;
          puVar32 = &UNK_016cc908;
          uVar19 = 0;
          goto code_r0x016cc7a4;
        }
        lVar23 = func_0x00f78af4();
        puVar30 = puVar8 + -0x20;
        *(undefined1 **)(puVar8 + -0x20) = puVar8 + -0x10;
        *(undefined **)(puVar8 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
        if ((*(long *)(lVar23 + 0x18) != 0) &&
           (plVar21 = *(long **)(*(long *)(lVar23 + 0x18) + 0x10), plVar21 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar21 + 0x178))
                    (plVar21,(int)plVar21[3] << 1,*(undefined8 *)(*plVar21 + 0x180));
          return;
        }
        puVar32 = &FlatBuffers_FlatBufferBuilder__Prep;
        auVar35 = func_0x00f78af4();
        puVar8 = puVar8 + -0x20;
      }
code_r0x016cdb68:
      auVar5._8_8_ = uVar24;
      auVar5._0_8_ = uVar28;
      auVar33 = func_0x00f78af4();
      uVar19 = auVar33._8_8_;
      lVar25 = auVar33._0_8_;
      *(undefined1 **)(puVar8 + -0x40) = puVar8 + -0x10;
      *(undefined **)(puVar8 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
      lVar23 = *(long *)(lVar25 + 0x18);
      iVar12 = *(int *)(lVar25 + 0x10) + -1;
      *(int *)(lVar25 + 0x10) = iVar12;
      if (lVar23 != 0) {
        puVar9 = puVar8 + -0x30;
        uVar20 = *(undefined8 *)(puVar8 + -0x40);
        uVar15 = *(undefined8 *)(puVar8 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
        auVar5._8_4_ = iVar12;
        auVar5._0_8_ = lVar23;
        auVar5._12_4_ = 0;
        auVar34._8_4_ = iVar12;
        auVar34._0_8_ = lVar23;
        auVar34._12_4_ = 0;
        puVar7 = puVar9 + -0x30;
        *(ulong *)(puVar9 + -0x30) = uVar29;
        *(ulong *)(puVar9 + -0x28) = uVar28;
        *(ulong *)(puVar9 + -0x20) = uVar24;
        *(ulong *)(puVar9 + -0x18) = uVar22;
        *(undefined8 *)(puVar9 + -0x10) = uVar20;
        *(undefined8 *)(puVar9 + -8) = uVar15;
        puVar30 = puVar9 + -0x10;
        uVar24 = 1;
        puVar32 = &UNK_016cc89c;
        goto code_r0x016cc7a4;
      }
      auVar33 = func_0x00f78af4();
      uVar26 = auVar33._8_8_;
      lVar23 = auVar33._0_8_;
      *(undefined1 **)(puVar8 + -0x50) = puVar8 + -0x40;
      *(undefined **)(puVar8 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
      iVar12 = *(int *)(lVar23 + 0x10) + -1;
      auVar34._8_4_ = iVar12;
      auVar34._0_8_ = *(long *)(lVar23 + 0x18);
      auVar34._12_4_ = 0;
      *(int *)(lVar23 + 0x10) = iVar12;
      if (*(long *)(lVar23 + 0x18) != 0) {
        puVar10 = puVar8 + -0x40;
        puVar30 = *(undefined1 **)(puVar8 + -0x50);
        puVar32 = *(undefined **)(puVar8 + -0x48);
        uVar19 = uVar22;
        goto code_r0x016cc810;
      }
      auVar33 = func_0x00f78af4();
      uVar19 = auVar33._8_8_;
      lVar25 = auVar33._0_8_;
      *(undefined1 **)(puVar8 + -0x60) = puVar8 + -0x50;
      *(undefined **)(puVar8 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
      lVar23 = *(long *)(lVar25 + 0x18);
      iVar12 = *(int *)(lVar25 + 0x10) + -1;
      *(int *)(lVar25 + 0x10) = iVar12;
      if (lVar23 != 0) {
        puVar9 = puVar8 + -0x50;
        uVar20 = *(undefined8 *)(puVar8 + -0x60);
        uVar15 = *(undefined8 *)(puVar8 + -0x58);
        goto FlatBuffers_ByteBuffer__PutByte;
      }
      auVar33 = func_0x00f78af4();
      uVar19 = auVar33._8_8_;
      lVar23 = auVar33._0_8_;
      puVar7 = puVar8 + -0x90;
      *(ulong *)(puVar8 + -0x90) = uVar29;
      *(ulong *)(puVar8 + -0x88) = uVar28;
      *(ulong *)(puVar8 + -0x80) = uVar24;
      *(ulong *)(puVar8 + -0x78) = uVar22;
      *(undefined1 **)(puVar8 + -0x70) = puVar8 + -0x60;
      *(undefined **)(puVar8 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
      puVar30 = puVar8 + -0x70;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 2;
      auVar5._8_8_ = lVar25;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar34._8_4_ = uVar1;
      auVar34._0_8_ = lVar25;
      auVar34._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 2;
        puVar32 = &UNK_016cdc34;
        goto code_r0x016cc7a4;
      }
      auVar33 = func_0x00f78af4();
      uVar19 = auVar33._8_8_;
      lVar23 = auVar33._0_8_;
      puVar7 = puVar8 + -0xc0;
      *(ulong *)(puVar8 + -0xc0) = uVar29;
      *(ulong *)(puVar8 + -0xb8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar8 + -0xb0) = 0;
      *(ulong *)(puVar8 + -0xa8) = uVar22;
      *(undefined1 **)(puVar8 + -0xa0) = puVar30;
      *(undefined **)(puVar8 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
      puVar30 = puVar8 + -0xa0;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 2;
      auVar5._8_8_ = lVar25;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar34._8_4_ = uVar1;
      auVar34._0_8_ = lVar25;
      auVar34._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 2;
        puVar32 = &UNK_016cdc90;
        goto code_r0x016cc7a4;
      }
      auVar33 = func_0x00f78af4();
      uVar19 = auVar33._8_8_;
      lVar23 = auVar33._0_8_;
      puVar7 = puVar8 + -0xf0;
      *(ulong *)(puVar8 + -0xf0) = uVar29;
      *(ulong *)(puVar8 + -0xe8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar8 + -0xe0) = 0;
      *(ulong *)(puVar8 + -0xd8) = uVar22;
      *(undefined1 **)(puVar8 + -0xd0) = puVar30;
      *(undefined **)(puVar8 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
      puVar30 = puVar8 + -0xd0;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 4;
      auVar5._8_8_ = lVar25;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar34._8_4_ = uVar1;
      auVar34._0_8_ = lVar25;
      auVar34._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 4;
        puVar32 = &UNK_016cdcec;
        goto code_r0x016cc7a4;
      }
      auVar33 = func_0x00f78af4();
      uVar19 = auVar33._8_8_;
      lVar23 = auVar33._0_8_;
      puVar7 = puVar8 + -0x120;
      *(ulong *)(puVar8 + -0x120) = uVar29;
      *(ulong *)(puVar8 + -0x118) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar8 + -0x110) = 0;
      *(ulong *)(puVar8 + -0x108) = uVar22;
      *(undefined1 **)(puVar8 + -0x100) = puVar30;
      *(undefined **)(puVar8 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
      puVar30 = puVar8 + -0x100;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 4;
      auVar5._8_8_ = lVar25;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar34._8_4_ = uVar1;
      auVar34._0_8_ = lVar25;
      auVar34._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 4;
        puVar32 = &UNK_016cdd48;
        goto code_r0x016cc7a4;
      }
      auVar33 = func_0x00f78af4();
      uVar19 = auVar33._8_8_;
      lVar23 = auVar33._0_8_;
      puVar7 = puVar8 + -0x150;
      *(ulong *)(puVar8 + -0x150) = uVar29;
      *(ulong *)(puVar8 + -0x148) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar8 + -0x140) = 0;
      *(ulong *)(puVar8 + -0x138) = uVar22;
      *(undefined1 **)(puVar8 + -0x130) = puVar30;
      *(undefined **)(puVar8 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
      puVar30 = puVar8 + -0x130;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 8;
      auVar5._8_8_ = lVar25;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar34._8_4_ = uVar1;
      auVar34._0_8_ = lVar25;
      auVar34._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 8;
        puVar32 = &UNK_016cdda4;
        goto code_r0x016cc7a4;
      }
      auVar33 = func_0x00f78af4();
      uVar19 = auVar33._8_8_;
      lVar23 = auVar33._0_8_;
      puVar7 = puVar8 + -0x180;
      *(ulong *)(puVar8 + -0x180) = uVar29;
      *(ulong *)(puVar8 + -0x178) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar8 + -0x170) = 0;
      *(ulong *)(puVar8 + -0x168) = uVar22;
      *(undefined1 **)(puVar8 + -0x160) = puVar30;
      *(undefined **)(puVar8 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
      puVar30 = puVar8 + -0x160;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 8;
      uVar28 = CONCAT44(0,uVar1);
      auVar5._8_8_ = lVar25;
      auVar5._0_8_ = uVar28;
      auVar34._8_4_ = uVar1;
      auVar34._0_8_ = lVar25;
      auVar34._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 8;
        puVar32 = &UNK_016cde00;
        goto code_r0x016cc7a4;
      }
      lVar23 = func_0x00f78af4();
      *(undefined1 **)(puVar8 + -400) = puVar30;
      *(undefined **)(puVar8 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
      lVar25 = *(long *)(lVar23 + 0x18);
      auVar5._8_8_ = lVar25;
      uVar1 = *(int *)(lVar23 + 0x10) - 4;
      uVar19 = (ulong)uVar1;
      auVar34._8_4_ = uVar1;
      auVar34._0_8_ = lVar25;
      auVar34._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        puVar7 = puVar8 + -0x1b0;
        *(undefined8 *)(puVar8 + -0x1b0) = unaff_d9;
        *(undefined8 *)(puVar8 + -0x1a8) = unaff_d8;
        *(undefined8 *)(puVar8 + -0x1a0) = 0;
        *(ulong *)(puVar8 + -0x198) = uVar22;
        *(undefined8 *)(puVar8 + -400) = *(undefined8 *)(puVar8 + -400);
        *(undefined8 *)(puVar8 + -0x188) = *(undefined8 *)(puVar8 + -0x188);
        puVar30 = puVar8 + -400;
        uVar24 = 4;
        puVar32 = &UNK_016ccba4;
        goto code_r0x016cc7a4;
      }
      lVar23 = func_0x00f78af4();
      *(undefined1 **)(puVar8 + -0x1a0) = puVar8 + -400;
      *(undefined **)(puVar8 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
      lVar25 = *(long *)(lVar23 + 0x18);
      auVar5._8_8_ = lVar25;
      uVar1 = *(int *)(lVar23 + 0x10) - 8;
      uVar19 = (ulong)uVar1;
      auVar34._8_4_ = uVar1;
      auVar34._0_8_ = lVar25;
      auVar34._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) goto code_r0x016cde70;
      auVar36 = func_0x00f78af4();
      *(undefined8 *)(puVar8 + -0x1c0) = 0;
      *(ulong *)(puVar8 + -0x1b8) = uVar22;
      *(undefined1 **)(puVar8 + -0x1b0) = puVar8 + -0x1a0;
      *(undefined **)(puVar8 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
      puVar30 = puVar8 + -0x1b0;
      auVar35._8_8_ = 1;
      auVar35._0_8_ = auVar36._0_8_;
      uVar26 = 0;
      puVar32 = &UNK_016cde9c;
      puVar8 = puVar8 + -0x1c0;
      uVar19 = uVar29;
    } while( true );
  }
  auVar33 = func_0x00f78af4();
  lVar23 = auVar33._8_8_;
  param_1 = auVar33._0_8_;
  puVar8 = &stack0xffffffffffffffa0;
  puStack_38 = &Core_Services_Group__CreateOtherMembersVectorBlock;
  pppppppuVar31 = &ppppppuStack_40;
  unaff_x21 = 0x3eb5000;
  ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb58cb & 1) == 0) {
    func_0x00f78a20(0x3d569d8);
    bRam0000000003eb58cb = 1;
  }
  if ((lVar23 != 0) && (param_1 != 0)) {
    unaff_x21 = 0x3d56000;
    iVar12 = *(int *)(lVar23 + 0x18);
    puVar32 = &UNK_0166c358;
    puVar8 = &stack0xffffffffffffffa0;
    goto code_r0x016ce14c;
  }
  puVar32 = &Core_Services_Group__StartOtherMembersVector;
  auVar37 = func_0x00f78af4();
  iVar12 = auVar37._8_4_;
  auVar33._8_8_ = lVar23;
  auVar33._0_8_ = auVar37._0_8_;
  if (auVar37._0_8_ != 0) goto code_r0x016ce14c;
  auVar33 = func_0x00f78af4();
  pauVar27 = auVar33._0_8_;
  if ((bRam0000000003eb5985 & 1) == 0) {
    func_0x00f78a20(0x3d22970);
    bRam0000000003eb5985 = 1;
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar23 = *(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  if (lVar23 == 0) {
    return;
  }
  if ((bRam0000000003eb5979 & 1) == 0) {
    func_0x00f78a20(0x3d1fa70);
    func_0x00f78a20(0x3d203b0);
    func_0x00f78a20(0x3d21628);
    func_0x00f78a20(0x3d21c98);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d22e30);
    func_0x00f78a20(0x3d22e40);
    func_0x00f78a20(0x3d3d368);
    func_0x00f78a20(0x3d23210);
    func_0x00f78a20(0x3d238c8);
    func_0x00f78a20(0x3d3ea00);
    func_0x00f78a20(0x3d3ecf8);
    func_0x00f78a20(0x3d3ebf0);
    func_0x00f78a20(0x3d3eaf8);
    func_0x00f78a20(0x3d3ecd8);
    func_0x00f78a20(0x3d3e598);
    func_0x00f78a20(0x3d3eae0);
    func_0x00f78a20(0x3d3e878);
    func_0x00f78a20(0x3d1e498);
    func_0x00f78a20(0x3d23d20);
    func_0x00f78a20(0x3d3f4e0);
    func_0x00f78a20(0x3d1e648);
    func_0x00f78a20(0x3d24490);
    func_0x00f78a20(0x3d5c740);
    func_0x00f78a20(0x3d5c748);
    func_0x00f78a20(0x3d5c750);
    func_0x00f78a20(0x3d5c758);
    func_0x00f78a20(0x3d5c760);
    func_0x00f78a20(0x3d5c768);
    func_0x00f78a20(0x3d5c770);
    func_0x00f78a20(0x3d246c0);
    func_0x00f78a20(0x3d246f8);
    func_0x00f78a20(0x3d24970);
    func_0x00f78a20(0x3d63340);
    func_0x00f78a20(0x3d27be8);
    func_0x00f78a20(0x3d41468);
    func_0x00f78a20(0x3d41470);
    func_0x00f78a20(0x3d71ef0);
    func_0x00f78a20(0x3d67d88);
    func_0x00f78a20(0x3d67d90);
    func_0x00f78a20(0x3d67d70);
    bRam0000000003eb5979 = 1;
  }
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  lVar25 = func_0x00f78aec(/*Core.Services.Internal.<>c__DisplayClass234_0_TypeInfo*/ uRam0000000003d27be8);
  /*Core.Services.Internal.<>c__DisplayClass234_0$$.ctor*/ func_0x016884bc(lVar25,0);
  lVar14 = func_0x00f78aec(/*FlatBuffers.ByteBuffer_TypeInfo*/ uRam0000000003d203b0);
  /*FlatBuffers.ByteBuffer$$.ctor*/ func_0x016cbfd8(lVar14,auVar33._8_8_,0);
  if (lVar14 != 0) {
    uVar20 = /*FlatBuffers.ByteBuffer$$get_Data*/ func_0x016cc19c(lVar14,0);
    if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*System.Runtime.InteropServices.Marshal$$Copy*/ func_0x02b00b6c(pauVar27,uVar20,0,auVar33._8_8_,0);
    auVar33 = /*Core.Services.Response$$GetRootAsResponse*/ func_0x01683e24(lVar14,0);
    if (lVar25 != 0) {
      pauVar27 = (undefined1 (*) [16])(lVar25 + 0x10);
      *pauVar27 = auVar33;
      lVar14 = *(long *)(lVar23 + 0x4d0);
      uVar20 = func_0x00f78aec(/*System.Predicate<Internal.NativeRequest>_TypeInfo*/ uRam0000000003d1e648);
      /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(uVar20,lVar25,uRam0000000003d63340,uRam0000000003d3f4e0);
      if (lVar14 != 0) {
        lVar25 = /*System.Collections.Generic.List<RuntimeManager.AttachedInstance>$$Find*/ func_0x024278b4(lVar14,uVar20,uRam0000000003d3d368);
        iVar12 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar27,0);
        if (iVar12 == 0) {
          if (lVar25 == 0) {
            return;
          }
          iVar12 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
          if (iVar12 == 0) {
            auStack_1d0._0_4_ = *(undefined4 *)(lVar25 + 0x10);
            uVar20 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,auStack_1d0);
            uVar20 = /*System.String$$Format*/ func_0x029bc688(/*STR('<= ({0})')*/ uRam0000000003d67d70,uVar20,0);
            /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar20);
            if (*(long *)(lVar25 + 0x20) != 0) {
              /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(*(long *)(lVar25 + 0x20),0,uRam0000000003d41470);
              return;
            }
            func_0x00f78af4();
          }
          else {
            uVar13 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
            switch(uVar13) {
            case 1:
            case 2:
            case 0xb:
              /*Core.Services.Response$$Payload<Group>*/ func_0x018de110(auStack_1d0,pauVar27,uRam0000000003d5c748);
              uStack_e8 = auStack_1d0._8_8_;
              uStack_f0 = auStack_1d0._0_8_;
              uStack_e0 = uStack_1c0;
              auVar33 = /*System.Nullable<Group>$$get_Value*/ func_0x026518f8(&uStack_f0,uRam0000000003d3e878);
              uStack_1d4 = *(undefined4 *)(lVar25 + 0x10);
              uVar20 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1d4);
              uStack_1b1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar15 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1b1);
              uVar16 = Core_Services_Extensions__Print(auVar33._0_8_,auVar33._8_8_);
              uVar20 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar20,uVar15,uVar16,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar20);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_1d0 = auVar33;
              uVar20 = func_0x00f78ae0(/*Core.Services.Group_TypeInfo*/ uRam0000000003d21c98,auStack_1d0);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar20,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar20,uVar20);
              break;
            case 3:
            case 4:
            case 5:
              /*Core.Services.Response$$Payload<Achievements>*/ func_0x018de074(auStack_1d0,pauVar27,uRam0000000003d5c740);
              uStack_108 = auStack_1d0._8_8_;
              uStack_110 = auStack_1d0._0_8_;
              uStack_100 = uStack_1c0;
              auVar33 = /*System.Nullable<Achievements>$$get_Value*/ func_0x02619a48(&uStack_110,uRam0000000003d3e598);
              uStack_1d4 = *(undefined4 *)(lVar25 + 0x10);
              uVar20 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1d4);
              uStack_1b1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar15 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1b1);
              uVar16 = Core_Services_Extensions__Print(auVar33._0_8_,auVar33._8_8_);
              uVar20 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar20,uVar15,uVar16,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar20);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_1d0 = auVar33;
              uVar20 = func_0x00f78ae0(/*Core.Services.Achievements_TypeInfo*/ uRam0000000003d1fa70,auStack_1d0);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar20,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar20,uVar20);
              break;
            case 6:
              /*Core.Services.Response$$Payload<LeaderboardSets>*/ func_0x018de248(auStack_1d0,pauVar27,uRam0000000003d5c758);
              uStack_128 = auStack_1d0._8_8_;
              uStack_130 = auStack_1d0._0_8_;
              uStack_120 = uStack_1c0;
              auVar33 = /*System.Nullable<LeaderboardSets>$$get_Value*/ func_0x0265bcf4(&uStack_130,uRam0000000003d3eaf8);
              uStack_1d4 = *(undefined4 *)(lVar25 + 0x10);
              uVar20 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1d4);
              uStack_1b1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar15 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1b1);
              uVar16 = Core_Services_Extensions__Print(auVar33._0_8_,auVar33._8_8_);
              uVar20 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar20,uVar15,uVar16,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar20);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_1d0 = auVar33;
              uVar20 = func_0x00f78ae0(/*Core.Services.LeaderboardSets_TypeInfo*/ uRam0000000003d22e40,auStack_1d0);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar20,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar20,uVar20);
              break;
            case 7:
              /*Core.Services.Response$$Payload<LeaderboardScores>*/ func_0x018de1ac(auStack_1d0,pauVar27,uRam0000000003d5c750);
              uStack_148 = auStack_1d0._8_8_;
              uStack_150 = auStack_1d0._0_8_;
              uStack_140 = uStack_1c0;
              auVar33 = /*System.Nullable<LeaderboardScores>$$get_Value*/ func_0x0265b17c(&uStack_150,uRam0000000003d3eae0);
              uStack_1d4 = *(undefined4 *)(lVar25 + 0x10);
              uVar20 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1d4);
              uStack_1b1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar15 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1b1);
              uVar16 = Core_Services_Extensions__Print(auVar33._0_8_,auVar33._8_8_);
              uVar20 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar20,uVar15,uVar16,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar20);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_1d0 = auVar33;
              uVar20 = func_0x00f78ae0(/*Core.Services.LeaderboardScores_TypeInfo*/ uRam0000000003d22e30,auStack_1d0);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar20,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar20,uVar20);
              break;
            case 8:
            case 9:
            case 10:
              /*Core.Services.Response$$Payload<Player>*/ func_0x018de2e4(auStack_1d0,pauVar27,uRam0000000003d5c760);
              uStack_168 = auStack_1d0._8_8_;
              uStack_170 = auStack_1d0._0_8_;
              uStack_160 = uStack_1c0;
              auVar33 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(&uStack_170,uRam0000000003d3ebf0);
              uStack_1d4 = *(undefined4 *)(lVar25 + 0x10);
              uVar20 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1d4);
              uStack_1b1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar15 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1b1);
              uVar16 = Core_Services_Extensions__Print(auVar33._0_8_,auVar33._8_8_);
              uVar20 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar20,uVar15,uVar16,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar20);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_1d0 = auVar33;
              uVar20 = func_0x00f78ae0(/*Core.Services.Player_TypeInfo*/ uRam0000000003d23d20,auStack_1d0);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar20,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar20,uVar20);
              break;
            case 0xc:
              /*Core.Services.Response$$Payload<Saves>*/ func_0x018de41c(auStack_1d0,pauVar27,uRam0000000003d5c770);
              uStack_188 = auStack_1d0._8_8_;
              uStack_190 = auStack_1d0._0_8_;
              uStack_180 = uStack_1c0;
              auVar33 = /*System.Nullable<Saves>$$get_Value*/ func_0x02660838(&uStack_190,uRam0000000003d3ecf8);
              uStack_1d4 = *(undefined4 *)(lVar25 + 0x10);
              uVar20 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1d4);
              uStack_1b1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar15 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1b1);
              uVar16 = Core_Services_Extensions__Print(auVar33._0_8_,auVar33._8_8_);
              uVar20 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar20,uVar15,uVar16,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar20);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_1d0 = auVar33;
              uVar20 = func_0x00f78ae0(/*Core.Services.Saves_TypeInfo*/ uRam0000000003d246f8,auStack_1d0);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar20,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar20,uVar20);
              break;
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
              /*Core.Services.Response$$Payload<Save>*/ func_0x018de380(auStack_1d0,pauVar27,uRam0000000003d5c768);
              uStack_1a8 = auStack_1d0._8_8_;
              uStack_1b0 = auStack_1d0._0_8_;
              uStack_1a0 = uStack_1c0;
              auVar33 = /*System.Nullable<Save>$$get_Value*/ func_0x0265fcc0(&uStack_1b0,uRam0000000003d3ecd8);
              uStack_1d4 = *(undefined4 *)(lVar25 + 0x10);
              uVar20 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1d4);
              uStack_1b1 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar15 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_1b1);
              uVar16 = Core_Services_Extensions__Print(auVar33._0_8_,auVar33._8_8_);
              uVar20 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar20,uVar15,uVar16,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar20);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_1d0 = auVar33;
              uVar20 = func_0x00f78ae0(/*Core.Services.Save_TypeInfo*/ uRam0000000003d246c0,auStack_1d0);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar20,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar20,uVar20);
              break;
            default:
              lVar23 = *(long *)(lVar25 + 0x20);
              uVar11 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              auStack_1d0[0] = uVar11;
              uVar20 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,auStack_1d0);
              uVar20 = /*System.String$$Format*/ func_0x029bc688(/*STR('Response payload unsupported, {0}')*/ uRam0000000003d71ef0,uVar20,0);
              uVar15 = func_0x00f78aec(/*System.NotImplementedException_TypeInfo*/ uRam0000000003d238c8);
              /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar15,uVar20,0);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetException*/ func_0x028b5768(lVar23,uVar15,uRam0000000003d41468);
                return;
              }
              func_0x00f78af4();
            }
          }
          goto code_r0x0167a748;
        }
        iVar12 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar27,0);
        if (iVar12 != 0) {
          *(char *)(lVar23 + 0x4e1) = (char)iVar12;
        }
        uVar20 = /*STR('<= ({0}) {1} ErrorCode:{2}')*/ uRam0000000003d67d88;
        if (lVar25 == 0) {
          auStack_1d0._0_8_ = 0;
        }
        else {
          auStack_1d0._0_8_ = 0;
          /*System.Nullable<int>$$.ctor*/ func_0x02658d80(auStack_1d0,*(undefined4 *)(lVar25 + 0x10),uRam0000000003d3ea00);
        }
        uVar15 = func_0x00f78ae0(/*System.Nullable<int>_TypeInfo*/ uRam0000000003d1e498,auStack_1d0);
        uVar11 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar27,0);
        uStack_1d4 = CONCAT31(uStack_1d4._1_3_,uVar11);
        lVar14 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_1d4);
        if ((lVar14 != 0) && (plVar21 = (long *)/*System.Object$$GetType*/ func_0x02959198(lVar14,0), plVar21 != (long *)0x0))
        {
          uVar16 = (**(code **)(*plVar21 + 0x1b8))(plVar21,*(undefined8 *)(*plVar21 + 0x1c0));
          uStack_1b1 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar27,0);
          uVar17 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_1b1);
          uVar20 = /*System.String$$Format*/ func_0x029bdf30(uVar20,uVar15,uVar16,uVar17,0);
          /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,4,uVar20);
          if (lVar25 == 0) {
            return;
          }
          lVar23 = *(long *)(lVar25 + 0x20);
          pauVar27 = (undefined1 (*) [16])/*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar27,0);
          uVar20 = func_0x00f78aec(/*Core.Services.ServicesException_TypeInfo*/ uRam0000000003d24970);
          /*Core.Services.ServicesException$$.ctor*/ func_0x01684c6c(uVar20,pauVar27,0);
          if (lVar23 != 0) {
            /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetException*/ func_0x028b5768(lVar23,uVar20,uRam0000000003d41468);
            return;
          }
        }
      }
    }
  }
  func_0x00f78af4();
  puVar18 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar18 = *(undefined8 *)*pauVar27;
  ___cxa_throw(puVar18,&DAT_03a5ed38,0);
code_r0x0167a748:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x167a74c);
  (*pcVar6)();
code_r0x016cde70:
  puVar7 = puVar8 + -0x1c0;
  *(undefined8 *)(puVar8 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar8 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar8 + -0x1b0) = 0;
  *(ulong *)(puVar8 + -0x1a8) = uVar22;
  *(undefined8 *)(puVar8 + -0x1a0) = *(undefined8 *)(puVar8 + -0x1a0);
  *(undefined8 *)(puVar8 + -0x198) = *(undefined8 *)(puVar8 + -0x198);
  puVar30 = puVar8 + -0x1a0;
  uVar24 = 8;
  puVar32 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar10 = puVar7 + -0x20;
    *(long *)(puVar7 + -0x20) = auVar5._8_8_;
    *(ulong *)(puVar7 + -0x18) = uVar19;
    *(undefined1 **)(puVar7 + -0x10) = puVar30;
    *(undefined **)(puVar7 + -8) = puVar32;
    puVar30 = puVar7 + -0x10;
    if (auVar34._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar19 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar19,0);
      uVar20 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar19,uVar20);
      uVar26 = uVar24;
    }
    else {
      lVar23 = *(long *)(auVar34._0_8_ + 0x10);
      uVar26 = uVar24;
      if (lVar23 != 0) {
        if (auVar34._8_4_ <= *(int *)(lVar23 + 0x18) - (int)uVar24) {
          return;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar32 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar34 = func_0x00f78af4();
code_r0x016cc810:
    puVar7 = puVar10 + -0x30;
    *(ulong *)(puVar10 + -0x30) = uVar29;
    *(undefined1 (*) [16])(puVar10 + -0x28) = auVar5;
    *(ulong *)(puVar10 + -0x18) = uVar19;
    *(undefined1 **)(puVar10 + -0x10) = puVar30;
    *(undefined **)(puVar10 + -8) = puVar32;
    puVar30 = puVar10 + -0x10;
    uVar24 = 1;
    puVar32 = &UNK_016cc834;
    uVar19 = uVar26;
    auVar5 = auVar34;
  } while( true );
}



// ============================================================
// RVA: 0x166c2f8 | Core.Services.Group.CreateOtherMembersVectorBlock
// ============================================================

/* WARNING: Possible PIC construction at 0x0166c354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc634) */
/* WARNING: Removing unreachable block (ram,0x016cc668) */
/* WARNING: Removing unreachable block (ram,0x016cc67c) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x016ce224) */
/* WARNING: Removing unreachable block (ram,0x016cda04) */
/* WARNING: Removing unreachable block (ram,0x016cda14) */
/* WARNING: Removing unreachable block (ram,0x016cda30) */
/* WARNING: Removing unreachable block (ram,0x016cda1c) */
/* WARNING: Removing unreachable block (ram,0x0166c358) */
/* WARNING: Removing unreachable block (ram,0x016ce20c) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */

void Core_Services_Group__CreateOtherMembersVectorBlock(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 uVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  ulong uVar28;
  ulong uVar29;
  undefined1 *puVar30;
  undefined1 **ppuVar31;
  undefined *puVar32;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  undefined4 uStack_1a4;
  undefined1 auStack_1a0 [16];
  undefined8 uStack_190;
  undefined1 uStack_181;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb58cb & 1) == 0) {
    func_0x00f78a20(0x3d569d8);
    bRam0000000003eb58cb = 1;
  }
  puStack_40 = &stack0xfffffffffffffff0;
  if ((param_2 != 0) && (param_1 != 0)) {
    iVar12 = *(int *)(param_2 + 0x18);
    puVar32 = (undefined *)0x166c358;
code_r0x016ce14c:
    uVar28 = 4;
    ppuVar31 = &puStack_40;
    puStack_38 = puVar32;
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
    *(int *)(param_1 + 0x44) = iVar12;
    uVar26 = CONCAT44(0,iVar12 * 4);
    auVar35._8_8_ = 4;
    auVar35._0_8_ = uVar26;
    auVar34._8_8_ = 4;
    auVar34._0_8_ = param_1;
    puVar32 = &UNK_016ce188;
    puVar8 = &stack0xffffffffffffffa0;
    do {
      while( true ) {
        uVar24 = auVar35._0_8_;
        uVar21 = auVar34._0_8_;
        puVar7 = puVar8 + -0x30;
        *(ulong *)(puVar8 + -0x30) = param_1;
        *(ulong *)(puVar8 + -0x28) = uVar28;
        *(undefined1 (*) [16])(puVar8 + -0x20) = auVar35;
        *(undefined1 ***)(puVar8 + -0x10) = ppuVar31;
        *(undefined **)(puVar8 + -8) = puVar32;
        iVar12 = auVar34._8_4_;
        if (*(int *)(uVar21 + 0x20) < iVar12) {
          *(int *)(uVar21 + 0x20) = iVar12;
        }
        uVar29 = param_1;
        if ((*(long *)(uVar21 + 0x18) == 0) ||
           (lVar23 = *(long *)(*(long *)(uVar21 + 0x18) + 0x10), lVar23 == 0)) break;
        uVar3 = *(uint *)(lVar23 + 0x18);
        iVar4 = *(int *)(uVar21 + 0x10);
        uVar2 = iVar4 - (uVar3 + (int)uVar26) & iVar12 - 1U;
        uVar24 = CONCAT44(0,uVar2);
        uVar1 = (int)uVar26 + iVar12 + uVar2;
        uVar29 = (ulong)uVar1;
        while (uVar28 = (ulong)uVar3, iVar4 < (int)uVar1) {
          /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(uVar21);
          if ((*(long *)(uVar21 + 0x18) == 0) ||
             (lVar23 = *(long *)(*(long *)(uVar21 + 0x18) + 0x10), lVar23 == 0))
          goto code_r0x016cdb68;
          iVar4 = *(int *)(uVar21 + 0x10) - uVar3;
          uVar3 = *(uint *)(lVar23 + 0x18);
          iVar4 = iVar4 + uVar3;
          *(int *)(uVar21 + 0x10) = iVar4;
        }
        if ((int)uVar2 < 1) {
          return;
        }
        uVar19 = *(undefined8 *)*(undefined1 (*) [16])(puVar8 + -0x20);
        uVar15 = *(undefined8 *)(puVar8 + -0x18);
        auVar35 = *(undefined1 (*) [16])(puVar8 + -0x20);
        param_1 = *(ulong *)(puVar8 + -0x30);
        uVar28 = *(ulong *)(puVar8 + -0x28);
        *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
        *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
        lVar23 = *(long *)(uVar21 + 0x18);
        auVar5._8_8_ = lVar23;
        auVar5._0_8_ = uVar24;
        uVar2 = *(int *)(uVar21 + 0x10) - uVar2;
        uVar29 = (ulong)uVar2;
        auVar33._8_4_ = uVar2;
        auVar33._0_8_ = lVar23;
        auVar33._12_4_ = 0;
        *(uint *)(uVar21 + 0x10) = uVar2;
        if (lVar23 != 0) {
          *(ulong *)(puVar8 + -0x30) = param_1;
          *(ulong *)(puVar8 + -0x28) = uVar28;
          *(undefined8 *)(puVar8 + -0x20) = uVar19;
          *(undefined8 *)(puVar8 + -0x18) = uVar15;
          *(undefined8 *)(puVar8 + -0x10) = *(undefined8 *)(puVar8 + -0x10);
          *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
          puVar30 = puVar8 + -0x10;
          puVar32 = &UNK_016cc908;
          uVar26 = 0;
          goto code_r0x016cc7a4;
        }
        lVar23 = func_0x00f78af4();
        ppuVar31 = (undefined1 **)(puVar8 + -0x20);
        *(undefined1 **)(puVar8 + -0x20) = puVar8 + -0x10;
        *(undefined **)(puVar8 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
        if ((*(long *)(lVar23 + 0x18) != 0) &&
           (plVar20 = *(long **)(*(long *)(lVar23 + 0x18) + 0x10), plVar20 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar20 + 0x178))
                    (plVar20,(int)plVar20[3] << 1,*(undefined8 *)(*plVar20 + 0x180));
          return;
        }
        puVar32 = &FlatBuffers_FlatBufferBuilder__Prep;
        auVar34 = func_0x00f78af4();
        puVar8 = puVar8 + -0x20;
      }
code_r0x016cdb68:
      auVar5._8_8_ = uVar24;
      auVar5._0_8_ = uVar28;
      auVar34 = func_0x00f78af4();
      uVar26 = auVar34._8_8_;
      lVar25 = auVar34._0_8_;
      *(undefined1 **)(puVar8 + -0x40) = puVar8 + -0x10;
      *(undefined **)(puVar8 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
      lVar23 = *(long *)(lVar25 + 0x18);
      iVar12 = *(int *)(lVar25 + 0x10) + -1;
      *(int *)(lVar25 + 0x10) = iVar12;
      if (lVar23 != 0) {
        puVar9 = puVar8 + -0x30;
        uVar19 = *(undefined8 *)(puVar8 + -0x40);
        uVar15 = *(undefined8 *)(puVar8 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
        auVar5._8_4_ = iVar12;
        auVar5._0_8_ = lVar23;
        auVar5._12_4_ = 0;
        auVar33._8_4_ = iVar12;
        auVar33._0_8_ = lVar23;
        auVar33._12_4_ = 0;
        puVar7 = puVar9 + -0x30;
        *(ulong *)(puVar9 + -0x30) = uVar29;
        *(ulong *)(puVar9 + -0x28) = uVar28;
        *(ulong *)(puVar9 + -0x20) = uVar24;
        *(ulong *)(puVar9 + -0x18) = uVar21;
        *(undefined8 *)(puVar9 + -0x10) = uVar19;
        *(undefined8 *)(puVar9 + -8) = uVar15;
        puVar30 = puVar9 + -0x10;
        uVar24 = 1;
        puVar32 = &UNK_016cc89c;
        goto code_r0x016cc7a4;
      }
      auVar34 = func_0x00f78af4();
      uVar22 = auVar34._8_8_;
      lVar23 = auVar34._0_8_;
      *(undefined1 **)(puVar8 + -0x50) = puVar8 + -0x40;
      *(undefined **)(puVar8 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
      iVar12 = *(int *)(lVar23 + 0x10) + -1;
      auVar33._8_4_ = iVar12;
      auVar33._0_8_ = *(long *)(lVar23 + 0x18);
      auVar33._12_4_ = 0;
      *(int *)(lVar23 + 0x10) = iVar12;
      if (*(long *)(lVar23 + 0x18) != 0) {
        puVar10 = puVar8 + -0x40;
        puVar30 = *(undefined1 **)(puVar8 + -0x50);
        puVar32 = *(undefined **)(puVar8 + -0x48);
        uVar26 = uVar21;
        goto code_r0x016cc810;
      }
      auVar34 = func_0x00f78af4();
      uVar26 = auVar34._8_8_;
      lVar25 = auVar34._0_8_;
      *(undefined1 **)(puVar8 + -0x60) = puVar8 + -0x50;
      *(undefined **)(puVar8 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
      lVar23 = *(long *)(lVar25 + 0x18);
      iVar12 = *(int *)(lVar25 + 0x10) + -1;
      *(int *)(lVar25 + 0x10) = iVar12;
      if (lVar23 != 0) {
        puVar9 = puVar8 + -0x50;
        uVar19 = *(undefined8 *)(puVar8 + -0x60);
        uVar15 = *(undefined8 *)(puVar8 + -0x58);
        goto FlatBuffers_ByteBuffer__PutByte;
      }
      auVar34 = func_0x00f78af4();
      uVar26 = auVar34._8_8_;
      lVar23 = auVar34._0_8_;
      puVar7 = puVar8 + -0x90;
      *(ulong *)(puVar8 + -0x90) = uVar29;
      *(ulong *)(puVar8 + -0x88) = uVar28;
      *(ulong *)(puVar8 + -0x80) = uVar24;
      *(ulong *)(puVar8 + -0x78) = uVar21;
      *(undefined1 **)(puVar8 + -0x70) = puVar8 + -0x60;
      *(undefined **)(puVar8 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
      puVar30 = puVar8 + -0x70;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 2;
      auVar5._8_8_ = lVar25;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar33._8_4_ = uVar1;
      auVar33._0_8_ = lVar25;
      auVar33._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 2;
        puVar32 = &UNK_016cdc34;
        goto code_r0x016cc7a4;
      }
      auVar34 = func_0x00f78af4();
      uVar26 = auVar34._8_8_;
      lVar23 = auVar34._0_8_;
      puVar7 = puVar8 + -0xc0;
      *(ulong *)(puVar8 + -0xc0) = uVar29;
      *(ulong *)(puVar8 + -0xb8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar8 + -0xb0) = 0;
      *(ulong *)(puVar8 + -0xa8) = uVar21;
      *(undefined1 **)(puVar8 + -0xa0) = puVar30;
      *(undefined **)(puVar8 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
      puVar30 = puVar8 + -0xa0;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 2;
      auVar5._8_8_ = lVar25;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar33._8_4_ = uVar1;
      auVar33._0_8_ = lVar25;
      auVar33._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 2;
        puVar32 = &UNK_016cdc90;
        goto code_r0x016cc7a4;
      }
      auVar34 = func_0x00f78af4();
      uVar26 = auVar34._8_8_;
      lVar23 = auVar34._0_8_;
      puVar7 = puVar8 + -0xf0;
      *(ulong *)(puVar8 + -0xf0) = uVar29;
      *(ulong *)(puVar8 + -0xe8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar8 + -0xe0) = 0;
      *(ulong *)(puVar8 + -0xd8) = uVar21;
      *(undefined1 **)(puVar8 + -0xd0) = puVar30;
      *(undefined **)(puVar8 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
      puVar30 = puVar8 + -0xd0;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 4;
      auVar5._8_8_ = lVar25;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar33._8_4_ = uVar1;
      auVar33._0_8_ = lVar25;
      auVar33._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 4;
        puVar32 = &UNK_016cdcec;
        goto code_r0x016cc7a4;
      }
      auVar34 = func_0x00f78af4();
      uVar26 = auVar34._8_8_;
      lVar23 = auVar34._0_8_;
      puVar7 = puVar8 + -0x120;
      *(ulong *)(puVar8 + -0x120) = uVar29;
      *(ulong *)(puVar8 + -0x118) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar8 + -0x110) = 0;
      *(ulong *)(puVar8 + -0x108) = uVar21;
      *(undefined1 **)(puVar8 + -0x100) = puVar30;
      *(undefined **)(puVar8 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
      puVar30 = puVar8 + -0x100;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 4;
      auVar5._8_8_ = lVar25;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar33._8_4_ = uVar1;
      auVar33._0_8_ = lVar25;
      auVar33._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 4;
        puVar32 = &UNK_016cdd48;
        goto code_r0x016cc7a4;
      }
      auVar34 = func_0x00f78af4();
      uVar26 = auVar34._8_8_;
      lVar23 = auVar34._0_8_;
      puVar7 = puVar8 + -0x150;
      *(ulong *)(puVar8 + -0x150) = uVar29;
      *(ulong *)(puVar8 + -0x148) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar8 + -0x140) = 0;
      *(ulong *)(puVar8 + -0x138) = uVar21;
      *(undefined1 **)(puVar8 + -0x130) = puVar30;
      *(undefined **)(puVar8 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
      puVar30 = puVar8 + -0x130;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 8;
      auVar5._8_8_ = lVar25;
      auVar5._0_8_ = CONCAT44(0,uVar1);
      auVar33._8_4_ = uVar1;
      auVar33._0_8_ = lVar25;
      auVar33._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 8;
        puVar32 = &UNK_016cdda4;
        goto code_r0x016cc7a4;
      }
      auVar34 = func_0x00f78af4();
      uVar26 = auVar34._8_8_;
      lVar23 = auVar34._0_8_;
      puVar7 = puVar8 + -0x180;
      *(ulong *)(puVar8 + -0x180) = uVar29;
      *(ulong *)(puVar8 + -0x178) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar8 + -0x170) = 0;
      *(ulong *)(puVar8 + -0x168) = uVar21;
      *(undefined1 **)(puVar8 + -0x160) = puVar30;
      *(undefined **)(puVar8 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
      puVar30 = puVar8 + -0x160;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 8;
      uVar28 = CONCAT44(0,uVar1);
      auVar5._8_8_ = lVar25;
      auVar5._0_8_ = uVar28;
      auVar33._8_4_ = uVar1;
      auVar33._0_8_ = lVar25;
      auVar33._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 8;
        puVar32 = &UNK_016cde00;
        goto code_r0x016cc7a4;
      }
      lVar23 = func_0x00f78af4();
      *(undefined1 **)(puVar8 + -400) = puVar30;
      *(undefined **)(puVar8 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
      lVar25 = *(long *)(lVar23 + 0x18);
      auVar5._8_8_ = lVar25;
      uVar1 = *(int *)(lVar23 + 0x10) - 4;
      uVar26 = (ulong)uVar1;
      auVar33._8_4_ = uVar1;
      auVar33._0_8_ = lVar25;
      auVar33._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        puVar7 = puVar8 + -0x1b0;
        *(undefined8 *)(puVar8 + -0x1b0) = unaff_d9;
        *(undefined8 *)(puVar8 + -0x1a8) = unaff_d8;
        *(undefined8 *)(puVar8 + -0x1a0) = 0;
        *(ulong *)(puVar8 + -0x198) = uVar21;
        *(undefined8 *)(puVar8 + -400) = *(undefined8 *)(puVar8 + -400);
        *(undefined8 *)(puVar8 + -0x188) = *(undefined8 *)(puVar8 + -0x188);
        puVar30 = puVar8 + -400;
        uVar24 = 4;
        puVar32 = &UNK_016ccba4;
        goto code_r0x016cc7a4;
      }
      lVar23 = func_0x00f78af4();
      *(undefined1 **)(puVar8 + -0x1a0) = puVar8 + -400;
      *(undefined **)(puVar8 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
      lVar25 = *(long *)(lVar23 + 0x18);
      auVar5._8_8_ = lVar25;
      uVar1 = *(int *)(lVar23 + 0x10) - 8;
      uVar26 = (ulong)uVar1;
      auVar33._8_4_ = uVar1;
      auVar33._0_8_ = lVar25;
      auVar33._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) goto code_r0x016cde70;
      auVar35 = func_0x00f78af4();
      *(undefined8 *)(puVar8 + -0x1c0) = 0;
      *(ulong *)(puVar8 + -0x1b8) = uVar21;
      *(undefined1 **)(puVar8 + -0x1b0) = puVar8 + -0x1a0;
      *(undefined **)(puVar8 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
      ppuVar31 = (undefined1 **)(puVar8 + -0x1b0);
      auVar34._8_8_ = 1;
      auVar34._0_8_ = auVar35._0_8_;
      uVar26 = 0;
      puVar32 = &UNK_016cde9c;
      puVar8 = puVar8 + -0x1c0;
      param_1 = uVar29;
    } while( true );
  }
  puVar32 = &Core_Services_Group__StartOtherMembersVector;
  auVar36 = func_0x00f78af4();
  iVar12 = auVar36._8_4_;
  param_1 = auVar36._0_8_;
  if (param_1 != 0) goto code_r0x016ce14c;
  puStack_38 = &Core_Services_Group__StartOtherMembersVector;
  auVar34 = func_0x00f78af4();
  pauVar27 = auVar34._0_8_;
  if ((bRam0000000003eb5985 & 1) == 0) {
    func_0x00f78a20(0x3d22970);
    bRam0000000003eb5985 = 1;
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar23 = *(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  if (lVar23 == 0) {
    return;
  }
  if ((bRam0000000003eb5979 & 1) == 0) {
    func_0x00f78a20(0x3d1fa70);
    func_0x00f78a20(0x3d203b0);
    func_0x00f78a20(0x3d21628);
    func_0x00f78a20(0x3d21c98);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d22e30);
    func_0x00f78a20(0x3d22e40);
    func_0x00f78a20(0x3d3d368);
    func_0x00f78a20(0x3d23210);
    func_0x00f78a20(0x3d238c8);
    func_0x00f78a20(0x3d3ea00);
    func_0x00f78a20(0x3d3ecf8);
    func_0x00f78a20(0x3d3ebf0);
    func_0x00f78a20(0x3d3eaf8);
    func_0x00f78a20(0x3d3ecd8);
    func_0x00f78a20(0x3d3e598);
    func_0x00f78a20(0x3d3eae0);
    func_0x00f78a20(0x3d3e878);
    func_0x00f78a20(0x3d1e498);
    func_0x00f78a20(0x3d23d20);
    func_0x00f78a20(0x3d3f4e0);
    func_0x00f78a20(0x3d1e648);
    func_0x00f78a20(0x3d24490);
    func_0x00f78a20(0x3d5c740);
    func_0x00f78a20(0x3d5c748);
    func_0x00f78a20(0x3d5c750);
    func_0x00f78a20(0x3d5c758);
    func_0x00f78a20(0x3d5c760);
    func_0x00f78a20(0x3d5c768);
    func_0x00f78a20(0x3d5c770);
    func_0x00f78a20(0x3d246c0);
    func_0x00f78a20(0x3d246f8);
    func_0x00f78a20(0x3d24970);
    func_0x00f78a20(0x3d63340);
    func_0x00f78a20(0x3d27be8);
    func_0x00f78a20(0x3d41468);
    func_0x00f78a20(0x3d41470);
    func_0x00f78a20(0x3d71ef0);
    func_0x00f78a20(0x3d67d88);
    func_0x00f78a20(0x3d67d90);
    func_0x00f78a20(0x3d67d70);
    bRam0000000003eb5979 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  lVar25 = func_0x00f78aec(/*Core.Services.Internal.<>c__DisplayClass234_0_TypeInfo*/ uRam0000000003d27be8);
  /*Core.Services.Internal.<>c__DisplayClass234_0$$.ctor*/ func_0x016884bc(lVar25,0);
  lVar14 = func_0x00f78aec(/*FlatBuffers.ByteBuffer_TypeInfo*/ uRam0000000003d203b0);
  /*FlatBuffers.ByteBuffer$$.ctor*/ func_0x016cbfd8(lVar14,auVar34._8_8_,0);
  if (lVar14 != 0) {
    uVar19 = /*FlatBuffers.ByteBuffer$$get_Data*/ func_0x016cc19c(lVar14,0);
    if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*System.Runtime.InteropServices.Marshal$$Copy*/ func_0x02b00b6c(pauVar27,uVar19,0,auVar34._8_8_,0);
    auVar34 = /*Core.Services.Response$$GetRootAsResponse*/ func_0x01683e24(lVar14,0);
    if (lVar25 != 0) {
      pauVar27 = (undefined1 (*) [16])(lVar25 + 0x10);
      *pauVar27 = auVar34;
      lVar14 = *(long *)(lVar23 + 0x4d0);
      uVar19 = func_0x00f78aec(/*System.Predicate<Internal.NativeRequest>_TypeInfo*/ uRam0000000003d1e648);
      /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(uVar19,lVar25,uRam0000000003d63340,uRam0000000003d3f4e0);
      if (lVar14 != 0) {
        lVar25 = /*System.Collections.Generic.List<RuntimeManager.AttachedInstance>$$Find*/ func_0x024278b4(lVar14,uVar19,uRam0000000003d3d368);
        iVar12 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar27,0);
        if (iVar12 == 0) {
          if (lVar25 == 0) {
            return;
          }
          iVar12 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
          if (iVar12 == 0) {
            auStack_1a0._0_4_ = *(undefined4 *)(lVar25 + 0x10);
            uVar19 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,auStack_1a0);
            uVar19 = /*System.String$$Format*/ func_0x029bc688(/*STR('<= ({0})')*/ uRam0000000003d67d70,uVar19,0);
            /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar19);
            if (*(long *)(lVar25 + 0x20) != 0) {
              /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(*(long *)(lVar25 + 0x20),0,uRam0000000003d41470);
              return;
            }
            func_0x00f78af4();
          }
          else {
            uVar13 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
            switch(uVar13) {
            case 1:
            case 2:
            case 0xb:
              /*Core.Services.Response$$Payload<Group>*/ func_0x018de110(auStack_1a0,pauVar27,uRam0000000003d5c748);
              uStack_b8 = auStack_1a0._8_8_;
              uStack_c0 = auStack_1a0._0_8_;
              uStack_b0 = uStack_190;
              auVar34 = /*System.Nullable<Group>$$get_Value*/ func_0x026518f8(&uStack_c0,uRam0000000003d3e878);
              uStack_1a4 = *(undefined4 *)(lVar25 + 0x10);
              uVar19 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1a4);
              uStack_181 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar15 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_181);
              uVar16 = Core_Services_Extensions__Print(auVar34._0_8_,auVar34._8_8_);
              uVar19 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar19,uVar15,uVar16,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar19);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_1a0 = auVar34;
              uVar19 = func_0x00f78ae0(/*Core.Services.Group_TypeInfo*/ uRam0000000003d21c98,auStack_1a0);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar19,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar19,uVar19);
              break;
            case 3:
            case 4:
            case 5:
              /*Core.Services.Response$$Payload<Achievements>*/ func_0x018de074(auStack_1a0,pauVar27,uRam0000000003d5c740);
              uStack_d8 = auStack_1a0._8_8_;
              uStack_e0 = auStack_1a0._0_8_;
              uStack_d0 = uStack_190;
              auVar34 = /*System.Nullable<Achievements>$$get_Value*/ func_0x02619a48(&uStack_e0,uRam0000000003d3e598);
              uStack_1a4 = *(undefined4 *)(lVar25 + 0x10);
              uVar19 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1a4);
              uStack_181 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar15 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_181);
              uVar16 = Core_Services_Extensions__Print(auVar34._0_8_,auVar34._8_8_);
              uVar19 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar19,uVar15,uVar16,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar19);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_1a0 = auVar34;
              uVar19 = func_0x00f78ae0(/*Core.Services.Achievements_TypeInfo*/ uRam0000000003d1fa70,auStack_1a0);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar19,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar19,uVar19);
              break;
            case 6:
              /*Core.Services.Response$$Payload<LeaderboardSets>*/ func_0x018de248(auStack_1a0,pauVar27,uRam0000000003d5c758);
              uStack_f8 = auStack_1a0._8_8_;
              uStack_100 = auStack_1a0._0_8_;
              uStack_f0 = uStack_190;
              auVar34 = /*System.Nullable<LeaderboardSets>$$get_Value*/ func_0x0265bcf4(&uStack_100,uRam0000000003d3eaf8);
              uStack_1a4 = *(undefined4 *)(lVar25 + 0x10);
              uVar19 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1a4);
              uStack_181 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar15 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_181);
              uVar16 = Core_Services_Extensions__Print(auVar34._0_8_,auVar34._8_8_);
              uVar19 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar19,uVar15,uVar16,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar19);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_1a0 = auVar34;
              uVar19 = func_0x00f78ae0(/*Core.Services.LeaderboardSets_TypeInfo*/ uRam0000000003d22e40,auStack_1a0);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar19,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar19,uVar19);
              break;
            case 7:
              /*Core.Services.Response$$Payload<LeaderboardScores>*/ func_0x018de1ac(auStack_1a0,pauVar27,uRam0000000003d5c750);
              uStack_118 = auStack_1a0._8_8_;
              uStack_120 = auStack_1a0._0_8_;
              uStack_110 = uStack_190;
              auVar34 = /*System.Nullable<LeaderboardScores>$$get_Value*/ func_0x0265b17c(&uStack_120,uRam0000000003d3eae0);
              uStack_1a4 = *(undefined4 *)(lVar25 + 0x10);
              uVar19 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1a4);
              uStack_181 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar15 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_181);
              uVar16 = Core_Services_Extensions__Print(auVar34._0_8_,auVar34._8_8_);
              uVar19 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar19,uVar15,uVar16,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar19);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_1a0 = auVar34;
              uVar19 = func_0x00f78ae0(/*Core.Services.LeaderboardScores_TypeInfo*/ uRam0000000003d22e30,auStack_1a0);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar19,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar19,uVar19);
              break;
            case 8:
            case 9:
            case 10:
              /*Core.Services.Response$$Payload<Player>*/ func_0x018de2e4(auStack_1a0,pauVar27,uRam0000000003d5c760);
              uStack_138 = auStack_1a0._8_8_;
              uStack_140 = auStack_1a0._0_8_;
              uStack_130 = uStack_190;
              auVar34 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(&uStack_140,uRam0000000003d3ebf0);
              uStack_1a4 = *(undefined4 *)(lVar25 + 0x10);
              uVar19 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1a4);
              uStack_181 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar15 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_181);
              uVar16 = Core_Services_Extensions__Print(auVar34._0_8_,auVar34._8_8_);
              uVar19 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar19,uVar15,uVar16,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar19);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_1a0 = auVar34;
              uVar19 = func_0x00f78ae0(/*Core.Services.Player_TypeInfo*/ uRam0000000003d23d20,auStack_1a0);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar19,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar19,uVar19);
              break;
            case 0xc:
              /*Core.Services.Response$$Payload<Saves>*/ func_0x018de41c(auStack_1a0,pauVar27,uRam0000000003d5c770);
              uStack_158 = auStack_1a0._8_8_;
              uStack_160 = auStack_1a0._0_8_;
              uStack_150 = uStack_190;
              auVar34 = /*System.Nullable<Saves>$$get_Value*/ func_0x02660838(&uStack_160,uRam0000000003d3ecf8);
              uStack_1a4 = *(undefined4 *)(lVar25 + 0x10);
              uVar19 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1a4);
              uStack_181 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar15 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_181);
              uVar16 = Core_Services_Extensions__Print(auVar34._0_8_,auVar34._8_8_);
              uVar19 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar19,uVar15,uVar16,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar19);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_1a0 = auVar34;
              uVar19 = func_0x00f78ae0(/*Core.Services.Saves_TypeInfo*/ uRam0000000003d246f8,auStack_1a0);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar19,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar19,uVar19);
              break;
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
              /*Core.Services.Response$$Payload<Save>*/ func_0x018de380(auStack_1a0,pauVar27,uRam0000000003d5c768);
              uStack_178 = auStack_1a0._8_8_;
              uStack_180 = auStack_1a0._0_8_;
              uStack_170 = uStack_190;
              auVar34 = /*System.Nullable<Save>$$get_Value*/ func_0x0265fcc0(&uStack_180,uRam0000000003d3ecd8);
              uStack_1a4 = *(undefined4 *)(lVar25 + 0x10);
              uVar19 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_1a4);
              uStack_181 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar15 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_181);
              uVar16 = Core_Services_Extensions__Print(auVar34._0_8_,auVar34._8_8_);
              uVar19 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar19,uVar15,uVar16,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar19);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_1a0 = auVar34;
              uVar19 = func_0x00f78ae0(/*Core.Services.Save_TypeInfo*/ uRam0000000003d246c0,auStack_1a0);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar19,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar19,uVar19);
              break;
            default:
              lVar23 = *(long *)(lVar25 + 0x20);
              uVar11 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              auStack_1a0[0] = uVar11;
              uVar19 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,auStack_1a0);
              uVar19 = /*System.String$$Format*/ func_0x029bc688(/*STR('Response payload unsupported, {0}')*/ uRam0000000003d71ef0,uVar19,0);
              uVar15 = func_0x00f78aec(/*System.NotImplementedException_TypeInfo*/ uRam0000000003d238c8);
              /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar15,uVar19,0);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetException*/ func_0x028b5768(lVar23,uVar15,uRam0000000003d41468);
                return;
              }
              func_0x00f78af4();
            }
          }
          goto code_r0x0167a748;
        }
        iVar12 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar27,0);
        if (iVar12 != 0) {
          *(char *)(lVar23 + 0x4e1) = (char)iVar12;
        }
        uVar19 = /*STR('<= ({0}) {1} ErrorCode:{2}')*/ uRam0000000003d67d88;
        if (lVar25 == 0) {
          auStack_1a0._0_8_ = 0;
        }
        else {
          auStack_1a0._0_8_ = 0;
          /*System.Nullable<int>$$.ctor*/ func_0x02658d80(auStack_1a0,*(undefined4 *)(lVar25 + 0x10),uRam0000000003d3ea00);
        }
        uVar15 = func_0x00f78ae0(/*System.Nullable<int>_TypeInfo*/ uRam0000000003d1e498,auStack_1a0);
        uVar11 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar27,0);
        uStack_1a4 = CONCAT31(uStack_1a4._1_3_,uVar11);
        lVar14 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_1a4);
        if ((lVar14 != 0) && (plVar20 = (long *)/*System.Object$$GetType*/ func_0x02959198(lVar14,0), plVar20 != (long *)0x0))
        {
          uVar16 = (**(code **)(*plVar20 + 0x1b8))(plVar20,*(undefined8 *)(*plVar20 + 0x1c0));
          uStack_181 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar27,0);
          uVar17 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_181);
          uVar19 = /*System.String$$Format*/ func_0x029bdf30(uVar19,uVar15,uVar16,uVar17,0);
          /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,4,uVar19);
          if (lVar25 == 0) {
            return;
          }
          lVar23 = *(long *)(lVar25 + 0x20);
          pauVar27 = (undefined1 (*) [16])/*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar27,0);
          uVar19 = func_0x00f78aec(/*Core.Services.ServicesException_TypeInfo*/ uRam0000000003d24970);
          /*Core.Services.ServicesException$$.ctor*/ func_0x01684c6c(uVar19,pauVar27,0);
          if (lVar23 != 0) {
            /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetException*/ func_0x028b5768(lVar23,uVar19,uRam0000000003d41468);
            return;
          }
        }
      }
    }
  }
  func_0x00f78af4();
  puVar18 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar18 = *(undefined8 *)*pauVar27;
  ___cxa_throw(puVar18,&DAT_03a5ed38,0);
code_r0x0167a748:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x167a74c);
  (*pcVar6)();
code_r0x016cde70:
  puVar7 = puVar8 + -0x1c0;
  *(undefined8 *)(puVar8 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar8 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar8 + -0x1b0) = 0;
  *(ulong *)(puVar8 + -0x1a8) = uVar21;
  *(undefined8 *)(puVar8 + -0x1a0) = *(undefined8 *)(puVar8 + -0x1a0);
  *(undefined8 *)(puVar8 + -0x198) = *(undefined8 *)(puVar8 + -0x198);
  puVar30 = puVar8 + -0x1a0;
  uVar24 = 8;
  puVar32 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar10 = puVar7 + -0x20;
    *(long *)(puVar7 + -0x20) = auVar5._8_8_;
    *(ulong *)(puVar7 + -0x18) = uVar26;
    *(undefined1 **)(puVar7 + -0x10) = puVar30;
    *(undefined **)(puVar7 + -8) = puVar32;
    puVar30 = puVar7 + -0x10;
    if (auVar33._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar26 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar26,0);
      uVar19 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar26,uVar19);
      uVar22 = uVar24;
    }
    else {
      lVar23 = *(long *)(auVar33._0_8_ + 0x10);
      uVar22 = uVar24;
      if (lVar23 != 0) {
        if (auVar33._8_4_ <= *(int *)(lVar23 + 0x18) - (int)uVar24) {
          return;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar32 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar33 = func_0x00f78af4();
code_r0x016cc810:
    puVar7 = puVar10 + -0x30;
    *(ulong *)(puVar10 + -0x30) = uVar29;
    *(undefined1 (*) [16])(puVar10 + -0x28) = auVar5;
    *(ulong *)(puVar10 + -0x18) = uVar26;
    *(undefined1 **)(puVar10 + -0x10) = puVar30;
    *(undefined **)(puVar10 + -8) = puVar32;
    puVar30 = puVar10 + -0x10;
    uVar24 = 1;
    puVar32 = &UNK_016cc834;
    uVar26 = uVar22;
    auVar5 = auVar33;
  } while( true );
}



// ============================================================
// RVA: 0x166c384 | Core.Services.Group.StartOtherMembersVector
// ============================================================

/* WARNING: Possible PIC construction at 0x016ce184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdd44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cdda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cddfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cccb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccd14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016cde98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016ccdc4) */
/* WARNING: Removing unreachable block (ram,0x016ccd18) */
/* WARNING: Removing unreachable block (ram,0x016ccd20) */
/* WARNING: Removing unreachable block (ram,0x016ccd48) */
/* WARNING: Removing unreachable block (ram,0x016ccd28) */
/* WARNING: Removing unreachable block (ram,0x016ccd4c) */
/* WARNING: Removing unreachable block (ram,0x016ccd84) */
/* WARNING: Removing unreachable block (ram,0x016ccdb0) */
/* WARNING: Removing unreachable block (ram,0x016ccd88) */
/* WARNING: Removing unreachable block (ram,0x016ccd34) */
/* WARNING: Removing unreachable block (ram,0x016cccbc) */
/* WARNING: Removing unreachable block (ram,0x016cccc4) */
/* WARNING: Removing unreachable block (ram,0x016cccec) */
/* WARNING: Removing unreachable block (ram,0x016ccccc) */
/* WARNING: Removing unreachable block (ram,0x016cccf0) */
/* WARNING: Removing unreachable block (ram,0x016cccd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc34) */
/* WARNING: Removing unreachable block (ram,0x016ccc3c) */
/* WARNING: Removing unreachable block (ram,0x016ccc44) */
/* WARNING: Removing unreachable block (ram,0x016ccc90) */
/* WARNING: Removing unreachable block (ram,0x016ccc68) */
/* WARNING: Removing unreachable block (ram,0x016ccc94) */
/* WARNING: Removing unreachable block (ram,0x016ccc70) */
/* WARNING: Removing unreachable block (ram,0x016ccba4) */
/* WARNING: Removing unreachable block (ram,0x016ccbac) */
/* WARNING: Removing unreachable block (ram,0x016ccbb4) */
/* WARNING: Removing unreachable block (ram,0x016ccc00) */
/* WARNING: Removing unreachable block (ram,0x016ccbd8) */
/* WARNING: Removing unreachable block (ram,0x016ccc04) */
/* WARNING: Removing unreachable block (ram,0x016ccbe0) */
/* WARNING: Removing unreachable block (ram,0x016cde00) */
/* WARNING: Removing unreachable block (ram,0x016cdda4) */
/* WARNING: Removing unreachable block (ram,0x016cdd48) */
/* WARNING: Removing unreachable block (ram,0x016cdcec) */
/* WARNING: Removing unreachable block (ram,0x016cdc90) */
/* WARNING: Removing unreachable block (ram,0x016cc68c) */
/* WARNING: Removing unreachable block (ram,0x016cc698) */
/* WARNING: Removing unreachable block (ram,0x016cc6a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6a8) */
/* WARNING: Removing unreachable block (ram,0x016cc718) */
/* WARNING: Removing unreachable block (ram,0x016cc720) */
/* WARNING: Removing unreachable block (ram,0x016cc728) */
/* WARNING: Removing unreachable block (ram,0x016cc730) */
/* WARNING: Removing unreachable block (ram,0x016cc74c) */
/* WARNING: Removing unreachable block (ram,0x016cc754) */
/* WARNING: Removing unreachable block (ram,0x016cc778) */
/* WARNING: Removing unreachable block (ram,0x016cc6b4) */
/* WARNING: Removing unreachable block (ram,0x016cc77c) */
/* WARNING: Removing unreachable block (ram,0x016cc6bc) */
/* WARNING: Removing unreachable block (ram,0x016cc6c4) */
/* WARNING: Removing unreachable block (ram,0x016cc6cc) */
/* WARNING: Removing unreachable block (ram,0x016cc6e0) */
/* WARNING: Removing unreachable block (ram,0x016cc6e8) */
/* WARNING: Removing unreachable block (ram,0x016cc794) */
/* WARNING: Removing unreachable block (ram,0x016cc7a0) */
/* WARNING: Removing unreachable block (ram,0x016cc6f0) */
/* WARNING: Removing unreachable block (ram,0x016cc714) */
/* WARNING: Removing unreachable block (ram,0x016cc780) */
/* WARNING: Removing unreachable block (ram,0x016cdc34) */
/* WARNING: Removing unreachable block (ram,0x016cc4e0) */
/* WARNING: Removing unreachable block (ram,0x016cc518) */
/* WARNING: Removing unreachable block (ram,0x016cc52c) */
/* WARNING: Removing unreachable block (ram,0x016cc538) */
/* WARNING: Removing unreachable block (ram,0x016cc540) */
/* WARNING: Removing unreachable block (ram,0x016cc548) */
/* WARNING: Removing unreachable block (ram,0x016cc5b8) */
/* WARNING: Removing unreachable block (ram,0x016cc5c0) */
/* WARNING: Removing unreachable block (ram,0x016cc5d4) */
/* WARNING: Removing unreachable block (ram,0x016cc5dc) */
/* WARNING: Removing unreachable block (ram,0x016cc5e4) */
/* WARNING: Removing unreachable block (ram,0x016cc5f0) */
/* WARNING: Removing unreachable block (ram,0x016cc554) */
/* WARNING: Removing unreachable block (ram,0x016cc55c) */
/* WARNING: Removing unreachable block (ram,0x016cc574) */
/* WARNING: Removing unreachable block (ram,0x016cc57c) */
/* WARNING: Removing unreachable block (ram,0x016cc624) */
/* WARNING: Removing unreachable block (ram,0x016cc584) */
/* WARNING: Removing unreachable block (ram,0x016cc628) */
/* WARNING: Removing unreachable block (ram,0x016cc634) */
/* WARNING: Removing unreachable block (ram,0x016cc668) */
/* WARNING: Removing unreachable block (ram,0x016cc67c) */
/* WARNING: Removing unreachable block (ram,0x016cc590) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc610) */
/* WARNING: Removing unreachable block (ram,0x016cc834) */
/* WARNING: Removing unreachable block (ram,0x016cc83c) */
/* WARNING: Removing unreachable block (ram,0x016cc868) */
/* WARNING: Removing unreachable block (ram,0x016cc844) */
/* WARNING: Removing unreachable block (ram,0x016cc86c) */
/* WARNING: Removing unreachable block (ram,0x016cc850) */
/* WARNING: Removing unreachable block (ram,0x016cc908) */
/* WARNING: Removing unreachable block (ram,0x016cc910) */
/* WARNING: Removing unreachable block (ram,0x016cc920) */
/* WARNING: Removing unreachable block (ram,0x016cc928) */
/* WARNING: Removing unreachable block (ram,0x016cc964) */
/* WARNING: Removing unreachable block (ram,0x016cc930) */
/* WARNING: Removing unreachable block (ram,0x016cc968) */
/* WARNING: Removing unreachable block (ram,0x016cc93c) */
/* WARNING: Removing unreachable block (ram,0x016cc954) */
/* WARNING: Removing unreachable block (ram,0x016cc89c) */
/* WARNING: Removing unreachable block (ram,0x016cc8a4) */
/* WARNING: Removing unreachable block (ram,0x016cc8d0) */
/* WARNING: Removing unreachable block (ram,0x016cc8ac) */
/* WARNING: Removing unreachable block (ram,0x016cc8d4) */
/* WARNING: Removing unreachable block (ram,0x016cc8b8) */
/* WARNING: Removing unreachable block (ram,0x016ce188) */
/* WARNING: Removing unreachable block (ram,0x016cde9c) */

void Core_Services_Group__StartOtherMembersVector(ulong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  ulong uVar28;
  undefined1 *puVar29;
  undefined *puVar30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uStack_174;
  undefined1 auStack_170 [16];
  undefined8 uStack_160;
  undefined1 uStack_151;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (param_1 != 0) {
    uVar19 = 4;
    uVar22 = 4;
    puVar29 = &stack0xfffffffffffffff0;
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4();
    *(int *)(param_1 + 0x44) = param_2;
    uVar26 = (ulong)(uint)(param_2 * 4);
    uVar20 = 4;
    puVar30 = &UNK_016ce188;
    puVar7 = &stack0xffffffffffffffd0;
    uVar17 = uVar26;
    uVar21 = param_1;
    do {
      while( true ) {
        puVar6 = puVar7 + -0x30;
        *(ulong *)(puVar7 + -0x30) = uVar21;
        *(ulong *)(puVar7 + -0x28) = uVar19;
        *(ulong *)(puVar7 + -0x20) = uVar17;
        *(undefined8 *)(puVar7 + -0x18) = uVar22;
        *(undefined1 **)(puVar7 + -0x10) = puVar29;
        *(undefined **)(puVar7 + -8) = puVar30;
        iVar11 = (int)uVar20;
        if (*(int *)(param_1 + 0x20) < iVar11) {
          *(int *)(param_1 + 0x20) = iVar11;
        }
        uVar24 = uVar17;
        uVar28 = uVar21;
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (lVar23 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar23 == 0)) break;
        uVar3 = *(uint *)(lVar23 + 0x18);
        iVar4 = *(int *)(param_1 + 0x10);
        uVar2 = iVar4 - (uVar3 + (int)uVar26) & iVar11 - 1U;
        uVar24 = CONCAT44(0,uVar2);
        uVar1 = (int)uVar26 + iVar11 + uVar2;
        uVar28 = (ulong)uVar1;
        while (uVar19 = (ulong)uVar3, iVar4 < (int)uVar1) {
          /*FlatBuffers.FlatBufferBuilder$$GrowBuffer*/ func_0x016cda78(param_1);
          if ((*(long *)(param_1 + 0x18) == 0) ||
             (lVar23 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar23 == 0))
          goto code_r0x016cdb68;
          iVar4 = *(int *)(param_1 + 0x10) - uVar3;
          uVar3 = *(uint *)(lVar23 + 0x18);
          iVar4 = iVar4 + uVar3;
          *(int *)(param_1 + 0x10) = iVar4;
        }
        if ((int)uVar2 < 1) {
          return;
        }
        uVar17 = *(ulong *)(puVar7 + -0x20);
        uVar22 = *(undefined8 *)(puVar7 + -0x18);
        uVar21 = *(ulong *)(puVar7 + -0x30);
        uVar19 = *(ulong *)(puVar7 + -0x28);
        *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
        *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
        lVar23 = *(long *)(param_1 + 0x18);
        auVar32._8_8_ = lVar23;
        auVar32._0_8_ = uVar24;
        uVar2 = *(int *)(param_1 + 0x10) - uVar2;
        uVar28 = (ulong)uVar2;
        auVar31._8_4_ = uVar2;
        auVar31._0_8_ = lVar23;
        auVar31._12_4_ = 0;
        *(uint *)(param_1 + 0x10) = uVar2;
        if (lVar23 != 0) {
          *(ulong *)(puVar7 + -0x30) = uVar21;
          *(ulong *)(puVar7 + -0x28) = uVar19;
          *(ulong *)(puVar7 + -0x20) = uVar17;
          *(undefined8 *)(puVar7 + -0x18) = uVar22;
          *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
          *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
          puVar29 = puVar7 + -0x10;
          puVar30 = &UNK_016cc908;
          uVar17 = 0;
          goto code_r0x016cc7a4;
        }
        lVar23 = func_0x00f78af4();
        puVar29 = puVar7 + -0x20;
        *(undefined1 **)(puVar7 + -0x20) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x18) = &FlatBuffers_FlatBufferBuilder__GrowBuffer;
        if ((*(long *)(lVar23 + 0x18) != 0) &&
           (plVar18 = *(long **)(*(long *)(lVar23 + 0x18) + 0x10), plVar18 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016cdaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar18 + 0x178))
                    (plVar18,(int)plVar18[3] << 1,*(undefined8 *)(*plVar18 + 0x180));
          return;
        }
        puVar30 = &FlatBuffers_FlatBufferBuilder__Prep;
        auVar32 = func_0x00f78af4();
        uVar20 = auVar32._8_8_;
        param_1 = auVar32._0_8_;
        puVar7 = puVar7 + -0x20;
      }
code_r0x016cdb68:
      auVar32._8_8_ = uVar24;
      auVar32._0_8_ = uVar19;
      auVar31 = func_0x00f78af4();
      uVar17 = auVar31._8_8_;
      lVar25 = auVar31._0_8_;
      *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
      *(undefined **)(puVar7 + -0x38) = &FlatBuffers_FlatBufferBuilder__PutBool;
      lVar23 = *(long *)(lVar25 + 0x18);
      iVar11 = *(int *)(lVar25 + 0x10) + -1;
      *(int *)(lVar25 + 0x10) = iVar11;
      if (lVar23 != 0) {
        puVar8 = puVar7 + -0x30;
        uVar22 = *(undefined8 *)(puVar7 + -0x40);
        uVar20 = *(undefined8 *)(puVar7 + -0x38);
FlatBuffers_ByteBuffer__PutByte:
        auVar32._8_4_ = iVar11;
        auVar32._0_8_ = lVar23;
        auVar32._12_4_ = 0;
        auVar31._8_4_ = iVar11;
        auVar31._0_8_ = lVar23;
        auVar31._12_4_ = 0;
        puVar6 = puVar8 + -0x30;
        *(ulong *)(puVar8 + -0x30) = uVar28;
        *(ulong *)(puVar8 + -0x28) = uVar19;
        *(ulong *)(puVar8 + -0x20) = uVar24;
        *(ulong *)(puVar8 + -0x18) = param_1;
        *(undefined8 *)(puVar8 + -0x10) = uVar22;
        *(undefined8 *)(puVar8 + -8) = uVar20;
        puVar29 = puVar8 + -0x10;
        uVar24 = 1;
        puVar30 = &UNK_016cc89c;
        goto code_r0x016cc7a4;
      }
      auVar31 = func_0x00f78af4();
      uVar21 = auVar31._8_8_;
      lVar23 = auVar31._0_8_;
      *(undefined1 **)(puVar7 + -0x50) = puVar7 + -0x40;
      *(undefined **)(puVar7 + -0x48) = &FlatBuffers_FlatBufferBuilder__PutSbyte;
      iVar11 = *(int *)(lVar23 + 0x10) + -1;
      auVar31._8_4_ = iVar11;
      auVar31._0_8_ = *(long *)(lVar23 + 0x18);
      auVar31._12_4_ = 0;
      *(int *)(lVar23 + 0x10) = iVar11;
      if (*(long *)(lVar23 + 0x18) != 0) {
        puVar9 = puVar7 + -0x40;
        puVar29 = *(undefined1 **)(puVar7 + -0x50);
        puVar30 = *(undefined **)(puVar7 + -0x48);
        uVar17 = param_1;
        goto code_r0x016cc810;
      }
      auVar32 = func_0x00f78af4();
      uVar17 = auVar32._8_8_;
      lVar25 = auVar32._0_8_;
      *(undefined1 **)(puVar7 + -0x60) = puVar7 + -0x50;
      *(undefined **)(puVar7 + -0x58) = &FlatBuffers_FlatBufferBuilder__PutByte;
      lVar23 = *(long *)(lVar25 + 0x18);
      iVar11 = *(int *)(lVar25 + 0x10) + -1;
      *(int *)(lVar25 + 0x10) = iVar11;
      if (lVar23 != 0) {
        puVar8 = puVar7 + -0x50;
        uVar22 = *(undefined8 *)(puVar7 + -0x60);
        uVar20 = *(undefined8 *)(puVar7 + -0x58);
        goto FlatBuffers_ByteBuffer__PutByte;
      }
      auVar32 = func_0x00f78af4();
      uVar17 = auVar32._8_8_;
      lVar23 = auVar32._0_8_;
      puVar6 = puVar7 + -0x90;
      *(ulong *)(puVar7 + -0x90) = uVar28;
      *(ulong *)(puVar7 + -0x88) = uVar19;
      *(ulong *)(puVar7 + -0x80) = uVar24;
      *(ulong *)(puVar7 + -0x78) = param_1;
      *(undefined1 **)(puVar7 + -0x70) = puVar7 + -0x60;
      *(undefined **)(puVar7 + -0x68) = &FlatBuffers_FlatBufferBuilder__PutShort;
      puVar29 = puVar7 + -0x70;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 2;
      auVar32._8_8_ = lVar25;
      auVar32._0_8_ = CONCAT44(0,uVar1);
      auVar31._8_4_ = uVar1;
      auVar31._0_8_ = lVar25;
      auVar31._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 2;
        puVar30 = &UNK_016cdc34;
        goto code_r0x016cc7a4;
      }
      auVar32 = func_0x00f78af4();
      uVar17 = auVar32._8_8_;
      lVar23 = auVar32._0_8_;
      puVar6 = puVar7 + -0xc0;
      *(ulong *)(puVar7 + -0xc0) = uVar28;
      *(ulong *)(puVar7 + -0xb8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0xb0) = 0;
      *(ulong *)(puVar7 + -0xa8) = param_1;
      *(undefined1 **)(puVar7 + -0xa0) = puVar29;
      *(undefined **)(puVar7 + -0x98) = &FlatBuffers_FlatBufferBuilder__PutUshort;
      puVar29 = puVar7 + -0xa0;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 2;
      auVar32._8_8_ = lVar25;
      auVar32._0_8_ = CONCAT44(0,uVar1);
      auVar31._8_4_ = uVar1;
      auVar31._0_8_ = lVar25;
      auVar31._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 2;
        puVar30 = &UNK_016cdc90;
        goto code_r0x016cc7a4;
      }
      auVar32 = func_0x00f78af4();
      uVar17 = auVar32._8_8_;
      lVar23 = auVar32._0_8_;
      puVar6 = puVar7 + -0xf0;
      *(ulong *)(puVar7 + -0xf0) = uVar28;
      *(ulong *)(puVar7 + -0xe8) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0xe0) = 0;
      *(ulong *)(puVar7 + -0xd8) = param_1;
      *(undefined1 **)(puVar7 + -0xd0) = puVar29;
      *(undefined **)(puVar7 + -200) = &FlatBuffers_FlatBufferBuilder__PutInt;
      puVar29 = puVar7 + -0xd0;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 4;
      auVar32._8_8_ = lVar25;
      auVar32._0_8_ = CONCAT44(0,uVar1);
      auVar31._8_4_ = uVar1;
      auVar31._0_8_ = lVar25;
      auVar31._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 4;
        puVar30 = &UNK_016cdcec;
        goto code_r0x016cc7a4;
      }
      auVar32 = func_0x00f78af4();
      uVar17 = auVar32._8_8_;
      lVar23 = auVar32._0_8_;
      puVar6 = puVar7 + -0x120;
      *(ulong *)(puVar7 + -0x120) = uVar28;
      *(ulong *)(puVar7 + -0x118) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x110) = 0;
      *(ulong *)(puVar7 + -0x108) = param_1;
      *(undefined1 **)(puVar7 + -0x100) = puVar29;
      *(undefined **)(puVar7 + -0xf8) = &FlatBuffers_FlatBufferBuilder__PutUint;
      puVar29 = puVar7 + -0x100;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 4;
      auVar32._8_8_ = lVar25;
      auVar32._0_8_ = CONCAT44(0,uVar1);
      auVar31._8_4_ = uVar1;
      auVar31._0_8_ = lVar25;
      auVar31._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 4;
        puVar30 = &UNK_016cdd48;
        goto code_r0x016cc7a4;
      }
      auVar32 = func_0x00f78af4();
      uVar17 = auVar32._8_8_;
      lVar23 = auVar32._0_8_;
      puVar6 = puVar7 + -0x150;
      *(ulong *)(puVar7 + -0x150) = uVar28;
      *(ulong *)(puVar7 + -0x148) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x140) = 0;
      *(ulong *)(puVar7 + -0x138) = param_1;
      *(undefined1 **)(puVar7 + -0x130) = puVar29;
      *(undefined **)(puVar7 + -0x128) = &FlatBuffers_FlatBufferBuilder__PutLong;
      puVar29 = puVar7 + -0x130;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 8;
      auVar32._8_8_ = lVar25;
      auVar32._0_8_ = CONCAT44(0,uVar1);
      auVar31._8_4_ = uVar1;
      auVar31._0_8_ = lVar25;
      auVar31._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 8;
        puVar30 = &UNK_016cdda4;
        goto code_r0x016cc7a4;
      }
      auVar32 = func_0x00f78af4();
      uVar17 = auVar32._8_8_;
      lVar23 = auVar32._0_8_;
      puVar6 = puVar7 + -0x180;
      *(ulong *)(puVar7 + -0x180) = uVar28;
      *(ulong *)(puVar7 + -0x178) = CONCAT44(0,uVar1);
      *(undefined8 *)(puVar7 + -0x170) = 0;
      *(ulong *)(puVar7 + -0x168) = param_1;
      *(undefined1 **)(puVar7 + -0x160) = puVar29;
      *(undefined **)(puVar7 + -0x158) = &FlatBuffers_FlatBufferBuilder__PutUlong;
      puVar29 = puVar7 + -0x160;
      lVar25 = *(long *)(lVar23 + 0x18);
      uVar1 = *(int *)(lVar23 + 0x10) - 8;
      uVar19 = CONCAT44(0,uVar1);
      auVar32._8_8_ = lVar25;
      auVar32._0_8_ = uVar19;
      auVar31._8_4_ = uVar1;
      auVar31._0_8_ = lVar25;
      auVar31._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        uVar24 = 8;
        puVar30 = &UNK_016cde00;
        goto code_r0x016cc7a4;
      }
      lVar23 = func_0x00f78af4();
      *(undefined1 **)(puVar7 + -400) = puVar29;
      *(undefined **)(puVar7 + -0x188) = &FlatBuffers_FlatBufferBuilder__PutFloat;
      lVar25 = *(long *)(lVar23 + 0x18);
      auVar32._8_8_ = lVar25;
      uVar1 = *(int *)(lVar23 + 0x10) - 4;
      uVar17 = (ulong)uVar1;
      auVar31._8_4_ = uVar1;
      auVar31._0_8_ = lVar25;
      auVar31._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) {
        puVar6 = puVar7 + -0x1b0;
        *(undefined8 *)(puVar7 + -0x1b0) = unaff_d9;
        *(undefined8 *)(puVar7 + -0x1a8) = unaff_d8;
        *(undefined8 *)(puVar7 + -0x1a0) = 0;
        *(ulong *)(puVar7 + -0x198) = param_1;
        *(undefined8 *)(puVar7 + -400) = *(undefined8 *)(puVar7 + -400);
        *(undefined8 *)(puVar7 + -0x188) = *(undefined8 *)(puVar7 + -0x188);
        puVar29 = puVar7 + -400;
        uVar24 = 4;
        puVar30 = &UNK_016ccba4;
        goto code_r0x016cc7a4;
      }
      lVar23 = func_0x00f78af4();
      *(undefined1 **)(puVar7 + -0x1a0) = puVar7 + -400;
      *(undefined **)(puVar7 + -0x198) = &FlatBuffers_FlatBufferBuilder__PutDouble;
      lVar25 = *(long *)(lVar23 + 0x18);
      auVar32._8_8_ = lVar25;
      uVar1 = *(int *)(lVar23 + 0x10) - 8;
      uVar17 = (ulong)uVar1;
      auVar31._8_4_ = uVar1;
      auVar31._0_8_ = lVar25;
      auVar31._12_4_ = 0;
      *(uint *)(lVar23 + 0x10) = uVar1;
      if (lVar25 != 0) goto code_r0x016cde70;
      auVar32 = func_0x00f78af4();
      uVar22 = auVar32._8_8_;
      uVar17 = auVar32._0_8_;
      *(undefined8 *)(puVar7 + -0x1c0) = 0;
      *(ulong *)(puVar7 + -0x1b8) = param_1;
      *(undefined1 **)(puVar7 + -0x1b0) = puVar7 + -0x1a0;
      *(undefined **)(puVar7 + -0x1a8) = &FlatBuffers_FlatBufferBuilder__AddBool;
      puVar29 = puVar7 + -0x1b0;
      uVar20 = 1;
      uVar26 = 0;
      puVar30 = &UNK_016cde9c;
      puVar7 = puVar7 + -0x1c0;
      param_1 = uVar17;
      uVar21 = uVar28;
    } while( true );
  }
  auVar32 = func_0x00f78af4();
  pauVar27 = auVar32._0_8_;
  if ((bRam0000000003eb5985 & 1) == 0) {
    func_0x00f78a20(0x3d22970);
    bRam0000000003eb5985 = 1;
  }
  if (((*(ushort *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar23 = *(long *)(*(long *)(/*Core.Services.Internal_TypeInfo*/ lRam0000000003d22970 + 0xb8) + 8);
  if (lVar23 == 0) {
    return;
  }
  if ((bRam0000000003eb5979 & 1) == 0) {
    func_0x00f78a20(0x3d1fa70);
    func_0x00f78a20(0x3d203b0);
    func_0x00f78a20(0x3d21628);
    func_0x00f78a20(0x3d21c98);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d22e30);
    func_0x00f78a20(0x3d22e40);
    func_0x00f78a20(0x3d3d368);
    func_0x00f78a20(0x3d23210);
    func_0x00f78a20(0x3d238c8);
    func_0x00f78a20(0x3d3ea00);
    func_0x00f78a20(0x3d3ecf8);
    func_0x00f78a20(0x3d3ebf0);
    func_0x00f78a20(0x3d3eaf8);
    func_0x00f78a20(0x3d3ecd8);
    func_0x00f78a20(0x3d3e598);
    func_0x00f78a20(0x3d3eae0);
    func_0x00f78a20(0x3d3e878);
    func_0x00f78a20(0x3d1e498);
    func_0x00f78a20(0x3d23d20);
    func_0x00f78a20(0x3d3f4e0);
    func_0x00f78a20(0x3d1e648);
    func_0x00f78a20(0x3d24490);
    func_0x00f78a20(0x3d5c740);
    func_0x00f78a20(0x3d5c748);
    func_0x00f78a20(0x3d5c750);
    func_0x00f78a20(0x3d5c758);
    func_0x00f78a20(0x3d5c760);
    func_0x00f78a20(0x3d5c768);
    func_0x00f78a20(0x3d5c770);
    func_0x00f78a20(0x3d246c0);
    func_0x00f78a20(0x3d246f8);
    func_0x00f78a20(0x3d24970);
    func_0x00f78a20(0x3d63340);
    func_0x00f78a20(0x3d27be8);
    func_0x00f78a20(0x3d41468);
    func_0x00f78a20(0x3d41470);
    func_0x00f78a20(0x3d71ef0);
    func_0x00f78a20(0x3d67d88);
    func_0x00f78a20(0x3d67d90);
    func_0x00f78a20(0x3d67d70);
    bRam0000000003eb5979 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  lVar25 = func_0x00f78aec(/*Core.Services.Internal.<>c__DisplayClass234_0_TypeInfo*/ uRam0000000003d27be8);
  /*Core.Services.Internal.<>c__DisplayClass234_0$$.ctor*/ func_0x016884bc(lVar25,0);
  lVar13 = func_0x00f78aec(/*FlatBuffers.ByteBuffer_TypeInfo*/ uRam0000000003d203b0);
  /*FlatBuffers.ByteBuffer$$.ctor*/ func_0x016cbfd8(lVar13,auVar32._8_8_,0);
  if (lVar13 != 0) {
    uVar22 = /*FlatBuffers.ByteBuffer$$get_Data*/ func_0x016cc19c(lVar13,0);
    if (((*(ushort *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Runtime.InteropServices.Marshal_TypeInfo*/ lRam0000000003d23210 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*System.Runtime.InteropServices.Marshal$$Copy*/ func_0x02b00b6c(pauVar27,uVar22,0,auVar32._8_8_,0);
    auVar32 = /*Core.Services.Response$$GetRootAsResponse*/ func_0x01683e24(lVar13,0);
    if (lVar25 != 0) {
      pauVar27 = (undefined1 (*) [16])(lVar25 + 0x10);
      *pauVar27 = auVar32;
      lVar13 = *(long *)(lVar23 + 0x4d0);
      uVar22 = func_0x00f78aec(/*System.Predicate<Internal.NativeRequest>_TypeInfo*/ uRam0000000003d1e648);
      /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(uVar22,lVar25,uRam0000000003d63340,uRam0000000003d3f4e0);
      if (lVar13 != 0) {
        lVar25 = /*System.Collections.Generic.List<RuntimeManager.AttachedInstance>$$Find*/ func_0x024278b4(lVar13,uVar22,uRam0000000003d3d368);
        iVar11 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar27,0);
        if (iVar11 == 0) {
          if (lVar25 == 0) {
            return;
          }
          iVar11 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
          if (iVar11 == 0) {
            auStack_170._0_4_ = *(undefined4 *)(lVar25 + 0x10);
            uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,auStack_170);
            uVar22 = /*System.String$$Format*/ func_0x029bc688(/*STR('<= ({0})')*/ uRam0000000003d67d70,uVar22,0);
            /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar22);
            if (*(long *)(lVar25 + 0x20) != 0) {
              /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(*(long *)(lVar25 + 0x20),0,uRam0000000003d41470);
              return;
            }
            func_0x00f78af4();
          }
          else {
            uVar12 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
            switch(uVar12) {
            case 1:
            case 2:
            case 0xb:
              /*Core.Services.Response$$Payload<Group>*/ func_0x018de110(auStack_170,pauVar27,uRam0000000003d5c748);
              uStack_88 = auStack_170._8_8_;
              uStack_90 = auStack_170._0_8_;
              uStack_80 = uStack_160;
              auVar32 = /*System.Nullable<Group>$$get_Value*/ func_0x026518f8(&uStack_90,uRam0000000003d3e878);
              uStack_174 = *(undefined4 *)(lVar25 + 0x10);
              uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_174);
              uStack_151 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar20 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_151);
              uVar14 = Core_Services_Extensions__Print(auVar32._0_8_,auVar32._8_8_);
              uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar20,uVar14,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar22);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_170 = auVar32;
              uVar22 = func_0x00f78ae0(/*Core.Services.Group_TypeInfo*/ uRam0000000003d21c98,auStack_170);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar22,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar22,uVar22);
              break;
            case 3:
            case 4:
            case 5:
              /*Core.Services.Response$$Payload<Achievements>*/ func_0x018de074(auStack_170,pauVar27,uRam0000000003d5c740);
              uStack_a8 = auStack_170._8_8_;
              uStack_b0 = auStack_170._0_8_;
              uStack_a0 = uStack_160;
              auVar32 = /*System.Nullable<Achievements>$$get_Value*/ func_0x02619a48(&uStack_b0,uRam0000000003d3e598);
              uStack_174 = *(undefined4 *)(lVar25 + 0x10);
              uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_174);
              uStack_151 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar20 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_151);
              uVar14 = Core_Services_Extensions__Print(auVar32._0_8_,auVar32._8_8_);
              uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar20,uVar14,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar22);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_170 = auVar32;
              uVar22 = func_0x00f78ae0(/*Core.Services.Achievements_TypeInfo*/ uRam0000000003d1fa70,auStack_170);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar22,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar22,uVar22);
              break;
            case 6:
              /*Core.Services.Response$$Payload<LeaderboardSets>*/ func_0x018de248(auStack_170,pauVar27,uRam0000000003d5c758);
              uStack_c8 = auStack_170._8_8_;
              uStack_d0 = auStack_170._0_8_;
              uStack_c0 = uStack_160;
              auVar32 = /*System.Nullable<LeaderboardSets>$$get_Value*/ func_0x0265bcf4(&uStack_d0,uRam0000000003d3eaf8);
              uStack_174 = *(undefined4 *)(lVar25 + 0x10);
              uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_174);
              uStack_151 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar20 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_151);
              uVar14 = Core_Services_Extensions__Print(auVar32._0_8_,auVar32._8_8_);
              uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar20,uVar14,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar22);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_170 = auVar32;
              uVar22 = func_0x00f78ae0(/*Core.Services.LeaderboardSets_TypeInfo*/ uRam0000000003d22e40,auStack_170);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar22,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar22,uVar22);
              break;
            case 7:
              /*Core.Services.Response$$Payload<LeaderboardScores>*/ func_0x018de1ac(auStack_170,pauVar27,uRam0000000003d5c750);
              uStack_e8 = auStack_170._8_8_;
              uStack_f0 = auStack_170._0_8_;
              uStack_e0 = uStack_160;
              auVar32 = /*System.Nullable<LeaderboardScores>$$get_Value*/ func_0x0265b17c(&uStack_f0,uRam0000000003d3eae0);
              uStack_174 = *(undefined4 *)(lVar25 + 0x10);
              uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_174);
              uStack_151 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar20 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_151);
              uVar14 = Core_Services_Extensions__Print(auVar32._0_8_,auVar32._8_8_);
              uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar20,uVar14,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar22);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_170 = auVar32;
              uVar22 = func_0x00f78ae0(/*Core.Services.LeaderboardScores_TypeInfo*/ uRam0000000003d22e30,auStack_170);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar22,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar22,uVar22);
              break;
            case 8:
            case 9:
            case 10:
              /*Core.Services.Response$$Payload<Player>*/ func_0x018de2e4(auStack_170,pauVar27,uRam0000000003d5c760);
              uStack_108 = auStack_170._8_8_;
              uStack_110 = auStack_170._0_8_;
              uStack_100 = uStack_160;
              auVar32 = /*System.Nullable<Player>$$get_Value*/ func_0x0265d8bc(&uStack_110,uRam0000000003d3ebf0);
              uStack_174 = *(undefined4 *)(lVar25 + 0x10);
              uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_174);
              uStack_151 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar20 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_151);
              uVar14 = Core_Services_Extensions__Print(auVar32._0_8_,auVar32._8_8_);
              uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar20,uVar14,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar22);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_170 = auVar32;
              uVar22 = func_0x00f78ae0(/*Core.Services.Player_TypeInfo*/ uRam0000000003d23d20,auStack_170);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar22,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar22,uVar22);
              break;
            case 0xc:
              /*Core.Services.Response$$Payload<Saves>*/ func_0x018de41c(auStack_170,pauVar27,uRam0000000003d5c770);
              uStack_128 = auStack_170._8_8_;
              uStack_130 = auStack_170._0_8_;
              uStack_120 = uStack_160;
              auVar32 = /*System.Nullable<Saves>$$get_Value*/ func_0x02660838(&uStack_130,uRam0000000003d3ecf8);
              uStack_174 = *(undefined4 *)(lVar25 + 0x10);
              uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_174);
              uStack_151 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar20 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_151);
              uVar14 = Core_Services_Extensions__Print(auVar32._0_8_,auVar32._8_8_);
              uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar20,uVar14,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar22);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_170 = auVar32;
              uVar22 = func_0x00f78ae0(/*Core.Services.Saves_TypeInfo*/ uRam0000000003d246f8,auStack_170);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar22,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar22,uVar22);
              break;
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
              /*Core.Services.Response$$Payload<Save>*/ func_0x018de380(auStack_170,pauVar27,uRam0000000003d5c768);
              uStack_148 = auStack_170._8_8_;
              uStack_150 = auStack_170._0_8_;
              uStack_140 = uStack_160;
              auVar32 = /*System.Nullable<Save>$$get_Value*/ func_0x0265fcc0(&uStack_150,uRam0000000003d3ecd8);
              uStack_174 = *(undefined4 *)(lVar25 + 0x10);
              uVar22 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_174);
              uStack_151 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              uVar20 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,&uStack_151);
              uVar14 = Core_Services_Extensions__Print(auVar32._0_8_,auVar32._8_8_);
              uVar22 = /*System.String$$Format*/ func_0x029bdf30(/*STR('<= ({0}) {1}={2}')*/ uRam0000000003d67d90,uVar22,uVar20,uVar14,0);
              /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,1,uVar22);
              lVar23 = *(long *)(lVar25 + 0x20);
              auStack_170 = auVar32;
              uVar22 = func_0x00f78ae0(/*Core.Services.Save_TypeInfo*/ uRam0000000003d246c0,auStack_170);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetResult*/ func_0x028b56fc(lVar23,uVar22,uRam0000000003d41470);
                return;
              }
              func_0x00f78af4(uVar22,uVar22);
              break;
            default:
              lVar23 = *(long *)(lVar25 + 0x20);
              uVar10 = /*Core.Services.Response$$get_PayloadType*/ func_0x01683f3c(pauVar27,0);
              auStack_170[0] = uVar10;
              uVar22 = func_0x00f78ae0(/*Core.Services.ResponsePayload_TypeInfo*/ uRam0000000003d24490,auStack_170);
              uVar22 = /*System.String$$Format*/ func_0x029bc688(/*STR('Response payload unsupported, {0}')*/ uRam0000000003d71ef0,uVar22,0);
              uVar20 = func_0x00f78aec(/*System.NotImplementedException_TypeInfo*/ uRam0000000003d238c8);
              /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar20,uVar22,0);
              if (lVar23 != 0) {
                /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetException*/ func_0x028b5768(lVar23,uVar20,uRam0000000003d41468);
                return;
              }
              func_0x00f78af4();
            }
          }
          goto code_r0x0167a748;
        }
        iVar11 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar27,0);
        if (iVar11 != 0) {
          *(char *)(lVar23 + 0x4e1) = (char)iVar11;
        }
        uVar22 = /*STR('<= ({0}) {1} ErrorCode:{2}')*/ uRam0000000003d67d88;
        if (lVar25 == 0) {
          auStack_170._0_8_ = 0;
        }
        else {
          auStack_170._0_8_ = 0;
          /*System.Nullable<int>$$.ctor*/ func_0x02658d80(auStack_170,*(undefined4 *)(lVar25 + 0x10),uRam0000000003d3ea00);
        }
        uVar20 = func_0x00f78ae0(/*System.Nullable<int>_TypeInfo*/ uRam0000000003d1e498,auStack_170);
        uVar10 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar27,0);
        uStack_174 = CONCAT31(uStack_174._1_3_,uVar10);
        lVar13 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_174);
        if ((lVar13 != 0) && (plVar18 = (long *)/*System.Object$$GetType*/ func_0x02959198(lVar13,0), plVar18 != (long *)0x0))
        {
          uVar14 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
          uStack_151 = /*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar27,0);
          uVar15 = func_0x00f78ae0(/*Core.Services.ErrorCode_TypeInfo*/ uRam0000000003d21628,&uStack_151);
          uVar22 = /*System.String$$Format*/ func_0x029bdf30(uVar22,uVar20,uVar14,uVar15,0);
          /*Core.Services.Internal$$Log*/ func_0x0167ad48(lVar23,4,uVar22);
          if (lVar25 == 0) {
            return;
          }
          lVar23 = *(long *)(lVar25 + 0x20);
          pauVar27 = (undefined1 (*) [16])/*Core.Services.Response$$get_ErrorCode*/ func_0x01683ee8(pauVar27,0);
          uVar22 = func_0x00f78aec(/*Core.Services.ServicesException_TypeInfo*/ uRam0000000003d24970);
          /*Core.Services.ServicesException$$.ctor*/ func_0x01684c6c(uVar22,pauVar27,0);
          if (lVar23 != 0) {
            /*UniRx.Async.UniTaskCompletionSource<object>$$TrySetException*/ func_0x028b5768(lVar23,uVar22,uRam0000000003d41468);
            return;
          }
        }
      }
    }
  }
  func_0x00f78af4();
  puVar16 = (undefined8 *)___cxa_allocate_exception(8);
  *puVar16 = *(undefined8 *)*pauVar27;
  ___cxa_throw(puVar16,&DAT_03a5ed38,0);
code_r0x0167a748:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x167a74c);
  (*pcVar5)();
code_r0x016cde70:
  puVar6 = puVar7 + -0x1c0;
  *(undefined8 *)(puVar7 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar7 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar7 + -0x1b0) = 0;
  *(ulong *)(puVar7 + -0x1a8) = param_1;
  *(undefined8 *)(puVar7 + -0x1a0) = *(undefined8 *)(puVar7 + -0x1a0);
  *(undefined8 *)(puVar7 + -0x198) = *(undefined8 *)(puVar7 + -0x198);
  puVar29 = puVar7 + -0x1a0;
  uVar24 = 8;
  puVar30 = &UNK_016ccc34;
code_r0x016cc7a4:
  do {
    puVar9 = puVar6 + -0x20;
    *(long *)(puVar6 + -0x20) = auVar32._8_8_;
    *(ulong *)(puVar6 + -0x18) = uVar17;
    *(undefined1 **)(puVar6 + -0x10) = puVar29;
    *(undefined **)(puVar6 + -8) = puVar30;
    puVar29 = puVar6 + -0x10;
    if (auVar31._8_4_ < 0) {
code_r0x016cc7d8:
      func_0x00f78a24(0x3d1fcf8);
      uVar17 = func_0x00f78aec();
      /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a4d0(uVar17,0);
      uVar22 = func_0x00f78a24(0x3d52ce8);
      func_0x00f78ac0(uVar17,uVar22);
      uVar21 = uVar24;
    }
    else {
      lVar23 = *(long *)(auVar31._0_8_ + 0x10);
      uVar21 = uVar24;
      if (lVar23 != 0) {
        if (auVar31._8_4_ <= *(int *)(lVar23 + 0x18) - (int)uVar24) {
          return;
        }
        goto code_r0x016cc7d8;
      }
    }
    puVar30 = &FlatBuffers_ByteBuffer__PutSbyte;
    auVar31 = func_0x00f78af4();
code_r0x016cc810:
    puVar6 = puVar9 + -0x30;
    *(ulong *)(puVar9 + -0x30) = uVar28;
    *(undefined1 (*) [16])(puVar9 + -0x28) = auVar32;
    *(ulong *)(puVar9 + -0x18) = uVar17;
    *(undefined1 **)(puVar9 + -0x10) = puVar29;
    *(undefined **)(puVar9 + -8) = puVar30;
    puVar29 = puVar9 + -0x10;
    uVar24 = 1;
    puVar30 = &UNK_016cc834;
    uVar17 = uVar21;
    auVar32 = auVar31;
  } while( true );
}



