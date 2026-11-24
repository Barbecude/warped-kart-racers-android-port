// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.GetLeaderboardScoresRequest

// ============================================================
// RVA: 0x166b798 | Core.Services.GetLeaderboardScoresRequest.get_ByteBuffer
// ============================================================

undefined8 Core_Services_GetLeaderboardScoresRequest__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x166b7a0 | Core.Services.GetLeaderboardScoresRequest.GetRootAsGetLeaderboardScoresRequest
// ============================================================

undefined1  [16]
Core_Services_GetLeaderboardScoresRequest__GetRootAsGetLeaderboardScoresRequest(long param_1)

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
// RVA: 0x166b7ac | Core.Services.GetLeaderboardScoresRequest.GetRootAsGetLeaderboardScoresRequest
// ============================================================

undefined1  [16]
Core_Services_GetLeaderboardScoresRequest__GetRootAsGetLeaderboardScoresRequest
          (long param_1,ulong param_2,undefined8 param_3)

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
// RVA: 0x166b7f0 | Core.Services.GetLeaderboardScoresRequest.__assign
// ============================================================

undefined1  [16]
Core_Services_GetLeaderboardScoresRequest____assign
          (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x166b804 | Core.Services.GetLeaderboardScoresRequest.__init
// ============================================================

void Core_Services_GetLeaderboardScoresRequest____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x166b810 | Core.Services.GetLeaderboardScoresRequest.get_Id
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

ulong Core_Services_GetLeaderboardScoresRequest__get_Id(int *param_1)

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
// RVA: 0x166b85c | Core.Services.GetLeaderboardScoresRequest.GetIdBytes
// ============================================================

void Core_Services_GetLeaderboardScoresRequest__GetIdBytes(undefined8 *param_1,undefined8 param_2)

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
// RVA: 0x166b8a0 | Core.Services.GetLeaderboardScoresRequest.GetIdArray
// ============================================================

long Core_Services_GetLeaderboardScoresRequest__GetIdArray(long param_1)

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
  
  if ((bRam0000000003eb58c2 & 1) == 0) {
    func_0x00f78a20(0x3d5ded0);
    bRam0000000003eb58c2 = 1;
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
// RVA: 0x166b8f8 | Core.Services.GetLeaderboardScoresRequest.get_RangeMin
// ============================================================

/* WARNING: Possible PIC construction at 0x0166ba80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166badc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166baf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166bb0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166bb24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0166bb10) */
/* WARNING: Removing unreachable block (ram,0x0166baf8) */
/* WARNING: Removing unreachable block (ram,0x0166bae0) */
/* WARNING: Removing unreachable block (ram,0x0166ba84) */
/* WARNING: Removing unreachable block (ram,0x0166bb28) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_GetLeaderboardScoresRequest__get_RangeMin
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,ulong param_6,ulong param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 ******ppppppuVar5;
  undefined1 *puVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 uVar19;
  uint uVar20;
  dword *pdVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar26;
  undefined1 ****unaff_x29;
  undefined1 ****ppppuVar27;
  undefined1 *****pppppuVar28;
  undefined1 **ppuVar29;
  undefined1 ******ppppppuVar30;
  int ***pppiVar31;
  undefined *unaff_x30;
  undefined *puVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  ulong auStack_200 [4];
  undefined1 auStack_1e0 [12];
  int iStack_1d4;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  int **ppiStack_1b0;
  undefined *puStack_1a8;
  undefined1 ****ppppuStack_160;
  undefined *puStack_158;
  undefined1 ***pppuStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined1 *****apppppuStack_100 [2];
  undefined1 ****ppppuStack_b0;
  undefined *puStack_a8;
  undefined1 *****pppppuStack_90;
  undefined *puStack_88;
  undefined1 ****ppppuStack_70;
  undefined *puStack_68;
  undefined1 ****ppppuStack_50;
  undefined *puStack_48;
  undefined1 ***pppuStack_30;
  undefined *puStack_28;
  
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar22 = *(long *)(param_1 + 2);
  if (lVar22 != 0) {
    iVar25 = *param_1 + (int)uVar13;
FlatBuffers_ByteBuffer__GetInt:
    *(undefined1 *****)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar22,iVar25,4);
    return uVar13;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Services_GetLeaderboardScoresRequest__get_RangeMax;
  pppuStack_30 = (undefined1 ***)&stack0xfffffffffffffff0;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,8,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar22 = *(long *)(piVar14 + 2);
  if (lVar22 != 0) {
    iVar25 = *piVar14 + (int)uVar13;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = (undefined1 ****)pppuStack_30;
    unaff_x30 = puStack_28;
    goto FlatBuffers_ByteBuffer__GetInt;
  }
  piVar15 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Services_GetLeaderboardScoresRequest__get_PlayerScope;
  ppppuStack_50 = &pppuStack_30;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar15,10,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar22 = *(long *)(piVar15 + 2);
  if (lVar22 == 0) {
    piVar14 = (int *)func_0x00f78af4();
    puStack_68 = &Core_Services_GetLeaderboardScoresRequest__get_TimeScope;
    ppppuStack_70 = (undefined1 ****)&ppppuStack_50;
    uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,0xc,0);
    if ((int)uVar13 == 0) {
      return uVar13;
    }
    lVar22 = *(long *)(piVar14 + 2);
    if (lVar22 == 0) {
      piVar14 = (int *)func_0x00f78af4();
      puVar3 = &stack0xffffffffffffff60;
      puStack_88 = &Core_Services_GetLeaderboardScoresRequest__get_PreviousOccurrence;
      ppppuVar27 = (undefined1 ****)&stack0xffffffffffffff70;
      pppppuStack_90 = &ppppuStack_70;
      uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,0xe,0);
      if ((int)uVar13 == 0) {
        return uVar13;
      }
      if (*(long *)(piVar14 + 2) != 0) {
        auVar34._8_4_ = *piVar14 + (int)uVar13;
        auVar34._0_8_ = *(long *)(piVar14 + 2);
        auVar34._12_4_ = 0;
        puVar32 = &UNK_0166ba84;
        goto code_r0x016cccfc;
      }
      piVar15 = (int *)func_0x00f78af4();
      ppppppuVar5 = (undefined1 ******)&stack0xffffffffffffff10;
      puVar4 = &stack0xffffffffffffff10;
      puStack_a8 = &Core_Services_GetLeaderboardScoresRequest__CreateGetLeaderboardScoresRequest;
      pppppuVar28 = &stack0xffffffffffffff50;
      ppppuStack_b0 = ppppuVar27;
      if (piVar15 != (int *)0x0) {
        puVar32 = &UNK_0166bae0;
        piVar14 = piVar15;
        unaff_x21 = param_6;
        unaff_x22 = param_7;
code_r0x016ce2a4:
        uVar16 = 0;
        ppppppuVar5 = (undefined1 ******)(puVar4 + -0x30);
        *(ulong *)(puVar4 + -0x30) = unaff_x22;
        *(ulong *)(puVar4 + -0x28) = unaff_x21;
        *(int **)(puVar4 + -0x20) = piVar14;
        *(undefined8 *)(puVar4 + -0x18) = param_5;
        *(undefined1 ******)(puVar4 + -0x10) = pppppuVar28;
        *(undefined **)(puVar4 + -8) = puVar32;
        unaff_x20 = 6;
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar15);
        if (*(long *)(piVar15 + 10) != 0) {
          if (*(int *)(*(long *)(piVar15 + 10) + 0x18) < 6) {
            uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,6);
            *(undefined8 *)(piVar15 + 10) = uVar16;
          }
          piVar15[0xc] = 6;
          uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar15);
          piVar15[0xd] = (int)uVar13;
          return uVar13;
        }
        auVar35 = func_0x00f78af4();
        piVar14 = piVar15;
        puVar6 = puVar4 + -0x10;
        puVar32 = &FlatBuffers_FlatBufferBuilder__Slot;
        goto code_r0x016ce380;
      }
      puVar32 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMax;
      auVar34 = func_0x00f78af4();
      if (auVar34._0_8_ == 0) {
        ppppppuVar5 = apppppuStack_100;
        ppppppuVar30 = apppppuStack_100;
        apppppuStack_100[1] =
             (undefined1 *****)&Core_Services_GetLeaderboardScoresRequest__AddRangeMax;
        puVar32 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMin;
        apppppuStack_100[0] = pppppuVar28;
        auVar34 = func_0x00f78af4();
        if (auVar34._0_8_ == 0) {
          puStack_108 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMin;
          puStack_110 = (undefined1 *)apppppuStack_100;
          auVar34 = func_0x00f78af4();
          uVar16 = auVar34._8_8_;
          uVar13 = auVar34._0_8_;
          if (uVar13 != 0) {
            param_4 = 0;
            puStack_118 = &Core_Services_GetLeaderboardScoresRequest__AddId;
            if ((auVar34._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
              return uVar13;
            }
            puStack_120 = (undefined1 *)&puStack_110;
            /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar13,uVar16,uVar16,0,0);
            auVar35._8_8_ = 0;
            auVar35._0_8_ = uVar13;
            ppppppuVar5 = (undefined1 ******)&puStack_110;
            puVar6 = puStack_120;
            puVar32 = puStack_118;
            goto code_r0x016ce380;
          }
          ppppppuVar5 = (undefined1 ******)&puStack_120;
          ppuVar29 = &puStack_120;
          puStack_118 = &Core_Services_GetLeaderboardScoresRequest__AddId;
          puVar32 = &Core_Services_GetLeaderboardScoresRequest__AddPreviousOccurrence;
          puStack_120 = (undefined1 *)&puStack_110;
          auVar33 = func_0x00f78af4();
          if (auVar33._0_8_ != 0) {
            puVar6 = (undefined1 *)((long)&MACH_HEADER.cputype + 1);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          ppppppuVar5 = (undefined1 ******)&stack0xfffffffffffffed0;
          puVar32 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
          auVar34 = func_0x00f78af4();
          if (auVar34._0_8_ == 0) {
            ppppppuVar5 = (undefined1 ******)&puStack_140;
            puStack_138 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
            puVar32 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
            puStack_140 = &stack0xfffffffffffffed0;
            auVar34 = func_0x00f78af4();
            if (auVar34._0_8_ == 0) {
              puStack_148 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
              pppuStack_150 = (undefined1 ***)&puStack_140;
              lVar22 = func_0x00f78af4();
              puVar4 = &stack0xfffffffffffffe90;
              puStack_158 = &
                            Core_Services_GetLeaderboardScoresRequest__EndGetLeaderboardScoresRequest
              ;
              pppppuVar28 = &ppppuStack_160;
              piVar14 = (int *)0x3eb5000;
              ppppuStack_160 = &pppuStack_150;
              if ((bRam0000000003eb58c3 & 1) == 0) {
                ppppuStack_160 = &pppuStack_150;
                func_0x00f78a20(0x3d3f0a8);
                bRam0000000003eb58c3 = 1;
              }
              if (lVar22 == 0) {
                puVar32 = &
                          Core_Services_GetLeaderboardScoresRequest__StartGetLeaderboardScoresRequest
                ;
                piVar15 = (int *)func_0x00f78af4();
                if (piVar15 == (int *)0x0) {
                  lVar22 = func_0x00f78af4();
                  return *(ulong *)(lVar22 + 8);
                }
                param_5 = 0;
                goto code_r0x016ce2a4;
              }
              uVar13 = 0x3eb5000;
              if ((bRam0000000003eb5cd8 & 1) == 0) {
                func_0x00f78a20(0x3d1f100,0);
                bRam0000000003eb5cd8 = 1;
              }
              if (-1 < *(int *)(lVar22 + 0x30)) {
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar22,4,0);
                /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar22,0);
                uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar22);
                unaff_x21 = (ulong)*(uint *)(lVar22 + 0x30);
                uVar20 = *(uint *)(lVar22 + 0x30) - 1;
                if (-2 < (int)uVar20) {
                  uVar20 = 0xffffffff;
                }
                unaff_x22 = (ulong)uVar20;
                do {
                  uVar1 = (int)unaff_x21 - 1;
                  unaff_x21 = (ulong)uVar1;
                  iVar25 = (int)uVar13;
                  if ((int)uVar1 < 0) goto code_r0x016ceb30;
                  lVar23 = *(long *)(lVar22 + 0x28);
                  if (lVar23 == 0) goto code_r0x016ced84;
                  if (*(uint *)(lVar23 + 0x18) <= uVar1) goto code_r0x016ced88;
                } while (*(int *)(lVar23 + (ulong)uVar1 * 4 + 0x20) == 0);
                unaff_x22 = unaff_x21 + 8;
                do {
                  uVar26 = unaff_x22 - 8;
                  if (*(uint *)(lVar23 + 0x18) <= uVar26) goto code_r0x016ced88;
                  iVar11 = *(int *)(lVar23 + unaff_x22 * 4);
                  sVar7 = 0;
                  if (iVar11 != 0) {
                    sVar7 = (short)uVar13 - (short)iVar11;
                  }
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar22,2,0);
                  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar22,(int)sVar7);
                  lVar23 = *(long *)(lVar22 + 0x28);
                  if (lVar23 == 0) goto code_r0x016ced84;
                  if (*(uint *)(lVar23 + 0x18) <= uVar26) goto code_r0x016ced88;
                  *(undefined4 *)(lVar23 + unaff_x22 * 4) = 0;
                  unaff_x22 = unaff_x22 - 1;
                  uVar20 = uVar1;
                } while (0 < (long)uVar26);
code_r0x016ceb30:
                uVar10 = *(undefined4 *)(lVar22 + 0x34);
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar22,2,0);
                /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar22,(int)(short)((short)uVar13 - (short)uVar10));
                uVar20 = uVar20 * 2 + 6;
                unaff_x21 = (ulong)uVar20;
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar22,2,0);
                /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar22,(int)(short)uVar20);
                unaff_x22 = (ulong)*(uint *)(lVar22 + 0x40);
                if (0 < (int)*(uint *)(lVar22 + 0x40)) {
                  uVar26 = 0;
                  do {
                    lVar23 = *(long *)(lVar22 + 0x18);
                    if (((lVar23 == 0) || (*(long *)(lVar23 + 0x10) == 0)) ||
                       (lVar24 = *(long *)(lVar22 + 0x38), lVar24 == 0)) goto code_r0x016ced84;
                    if (*(uint *)(lVar24 + 0x18) <= uVar26) goto code_r0x016ced88;
                    uVar1 = *(int *)(*(long *)(lVar23 + 0x10) + 0x18) -
                            *(int *)(lVar24 + uVar26 * 4 + 0x20);
                    unaff_x21 = (ulong)uVar1;
                    uVar20 = *(uint *)(lVar22 + 0x10);
                    unaff_x22 = (ulong)uVar20;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar23,unaff_x21,2);
                    if (*(long *)(lVar22 + 0x18) == 0) goto code_r0x016ced84;
                    sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar22 + 0x18),unaff_x22,2);
                    if (sVar7 == sVar8) {
                      if (sVar7 < 3) {
code_r0x016cec64:
                        unaff_x21 = *(ulong *)(lVar22 + 0x38);
                        if (unaff_x21 == 0) goto code_r0x016ced84;
                        if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar26) goto code_r0x016ced88;
                        iVar11 = *(int *)(unaff_x21 + uVar26 * 4 + 0x20);
                        if (iVar11 == 0) {
                          unaff_x22 = (ulong)*(uint *)(lVar22 + 0x40);
                          goto code_r0x016cecac;
                        }
                        unaff_x21 = *(ulong *)(lVar22 + 0x18);
                        if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                        goto code_r0x016ced84;
                        iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar25;
                        *(int *)(lVar22 + 0x10) = iVar12;
                        iVar11 = iVar11 - iVar25;
                        goto code_r0x016ced3c;
                      }
                      iVar11 = 2;
                      while( true ) {
                        if (*(long *)(lVar22 + 0x18) == 0) goto code_r0x016ced84;
                        sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar22 + 0x18),uVar1 + iVar11,2);
                        if (*(long *)(lVar22 + 0x18) == 0) goto code_r0x016ced84;
                        sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar22 + 0x18),uVar20 + iVar11,2);
                        if (sVar8 != sVar9) break;
                        iVar11 = iVar11 + 2;
                        if (sVar7 <= iVar11) goto code_r0x016cec64;
                      }
                    }
                    uVar26 = uVar26 + 1;
                    unaff_x22 = (ulong)*(int *)(lVar22 + 0x40);
                  } while ((long)uVar26 < (long)unaff_x22);
                }
                unaff_x21 = *(ulong *)(lVar22 + 0x38);
                if (unaff_x21 == 0) {
code_r0x016ced84:
                  func_0x00f78af4();
                }
                else {
code_r0x016cecac:
                  if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                    unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                    lVar23 = *(long *)(lVar22 + 0x38);
                    if (lVar23 == 0) goto code_r0x016ced84;
                    /*System.Array$$Copy*/ func_0x0292c49c(lVar23,unaff_x21,*(undefined4 *)(lVar23 + 0x18),0);
                    *(ulong *)(lVar22 + 0x38) = unaff_x21;
                    unaff_x22 = (ulong)*(uint *)(lVar22 + 0x40);
                  }
                  uVar20 = (uint)unaff_x22;
                  *(uint *)(lVar22 + 0x40) = uVar20 + 1;
                  uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar22);
                  if (unaff_x21 == 0) goto code_r0x016ced84;
                  if (uVar20 < *(uint *)(unaff_x21 + 0x18)) {
                    *(undefined4 *)(unaff_x21 + (long)(int)uVar20 * 4 + 0x20) = uVar10;
                    unaff_x21 = *(ulong *)(lVar22 + 0x18);
                    if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                      iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                      iVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar22);
                      iVar12 = iVar12 - iVar25;
                      iVar11 = iVar11 - iVar25;
code_r0x016ced3c:
                      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar12,4);
                      /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar12,4,(long)iVar11);
                      *(undefined4 *)(lVar22 + 0x30) = 0xffffffff;
                      return uVar13;
                    }
                    goto code_r0x016ced84;
                  }
                }
code_r0x016ced88:
                uVar16 = func_0x00f78b24();
                func_0x00f78ac0(uVar16,0);
              }
              func_0x00f78a24(0x3d22a38);
              uVar16 = func_0x00f78aec();
              uVar17 = func_0x00f78a24(0x3d6cea8);
              iVar25 = 0;
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar16,uVar17);
              uVar17 = func_0x00f78a24(0x3d56a30);
              auVar36 = func_0x00f78ac0(uVar16,uVar17);
              puStack_1a8 = &FlatBuffers_FlatBufferBuilder__Required;
              pppiVar31 = &ppiStack_1b0;
              lVar22 = *(long *)(auVar36._0_8_ + 0x18);
              iStack_1d4 = iVar25;
              uStack_1d0 = unaff_x22;
              uStack_1c8 = unaff_x21;
              uStack_1c0 = uVar13;
              uStack_1b8 = uVar16;
              ppiStack_1b0 = (int **)&ppppuStack_160;
              if ((lVar22 != 0) && (*(long *)(lVar22 + 0x10) != 0)) {
                iVar11 = *(int *)(*(long *)(lVar22 + 0x10) + 0x18) - auVar36._8_4_;
                iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar22,iVar11,4);
                lVar22 = *(long *)(auVar36._0_8_ + 0x18);
                if (lVar22 != 0) {
                  uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar22,(iVar11 - iVar12) + iVar25,2);
                  if ((uVar13 & 0xffff) != 0) {
                    return uVar13;
                  }
                  goto code_r0x016cee5c;
                }
              }
              func_0x00f78af4();
code_r0x016cee5c:
              uVar16 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_1d4,0);
              uVar17 = func_0x00f78a24(0x3d6ce88);
              uVar19 = func_0x00f78a24(0x3d66338);
              lVar22 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar16,uVar19,0);
              func_0x00f78a24(0x3d22a38);
              uVar13 = func_0x00f78aec();
              uVar17 = 0;
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar22);
              uVar16 = func_0x00f78a24(0x3d56a50);
              puVar32 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar34 = func_0x00f78ac0(uVar13,uVar16);
              puVar6 = auStack_1e0;
              do {
                uVar26 = auVar34._8_8_;
                lVar23 = auVar34._0_8_;
                *(ulong *)(puVar6 + -0x20) = uVar13;
                *(long *)(puVar6 + -0x18) = lVar22;
                *(int ****)(puVar6 + -0x10) = pppiVar31;
                *(undefined **)(puVar6 + -8) = puVar32;
                pppiVar31 = (int ***)(puVar6 + -0x10);
                if ((int)uVar17 == 0) {
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar23,*(undefined4 *)(lVar23 + 0x20),4);
                  uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar23,uVar26);
code_r0x016cef70:
                  if (*(long *)(lVar23 + 0x18) != 0) {
                    *(undefined4 *)(*(long *)(lVar23 + 0x18) + 0x18) =
                         *(undefined4 *)(lVar23 + 0x10);
                    return uVar13;
                  }
                }
                else if (lVar23 != 0) {
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar23,*(undefined4 *)(lVar23 + 0x20),8);
                  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar23,uVar26);
                  if ((*(long *)(lVar23 + 0x18) != 0) &&
                     (lVar22 = *(long *)(*(long *)(lVar23 + 0x18) + 0x10), lVar22 != 0)) {
                    uVar26 = (ulong)(uint)(*(int *)(lVar22 + 0x18) - *(int *)(lVar23 + 0x10));
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar23,4,0);
                    uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar23,uVar26);
                    goto code_r0x016cef70;
                  }
                }
                puVar32 = &FlatBuffers_FlatBufferBuilder__Finish;
                auVar34 = func_0x00f78af4();
                uVar17 = 0;
                puVar6 = puVar6 + -0x20;
                lVar22 = lVar23;
                uVar13 = uVar26;
              } while( true );
            }
            pdVar21 = (dword *)((long)&MACH_HEADER.magic + 3);
          }
          else {
            pdVar21 = &MACH_HEADER.cputype;
          }
          uVar13 = auVar34._0_8_;
          auVar35._8_8_ = pdVar21;
          auVar35._0_8_ = uVar13;
          param_4 = 0;
          *(ulong *)((long)ppppppuVar5 + -0x30) = unaff_x22;
          *(ulong *)((long)ppppppuVar5 + -0x28) = unaff_x21;
          *(long *)((long)ppppppuVar5 + -0x20) = unaff_x20;
          *(int **)((long)ppppppuVar5 + -0x18) = piVar14;
          *(undefined1 *******)((long)ppppppuVar5 + -0x10) = ppppppuVar5;
          *(undefined **)((long)ppppppuVar5 + -8) = puVar32;
          if ((auVar34._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
            return uVar13;
          }
          uVar16 = 0;
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1,0,0,0);
          /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar13,auVar34._8_8_);
          puVar6 = *(undefined1 **)((long)ppppppuVar5 + -0x10);
          puVar32 = *(undefined **)((long)ppppppuVar5 + -8);
          unaff_x20 = *(long *)((long)ppppppuVar5 + -0x20);
          piVar14 = *(int **)((long)ppppppuVar5 + -0x18);
          unaff_x22 = *(ulong *)((long)ppppppuVar5 + -0x30);
          unaff_x21 = *(ulong *)((long)ppppppuVar5 + -0x28);
          goto code_r0x016ce380;
        }
        puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      }
      else {
        puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
        ppppppuVar30 = (undefined1 ******)pppppuVar28;
      }
      uVar13 = auVar34._0_8_;
      auVar35._8_8_ = puVar6;
      auVar35._0_8_ = uVar13;
      param_4 = 0;
      *(ulong *)((long)ppppppuVar5 + -0x30) = unaff_x22;
      *(ulong *)((long)ppppppuVar5 + -0x28) = unaff_x21;
      *(long *)((long)ppppppuVar5 + -0x20) = unaff_x20;
      *(int **)((long)ppppppuVar5 + -0x18) = piVar14;
      *(undefined1 *******)((long)ppppppuVar5 + -0x10) = ppppppuVar30;
      *(undefined **)((long)ppppppuVar5 + -8) = puVar32;
      if ((auVar34._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
        return uVar13;
      }
      uVar16 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar13,auVar34._8_8_);
      unaff_x20 = *(long *)((long)ppppppuVar5 + -0x20);
      piVar14 = *(int **)((long)ppppppuVar5 + -0x18);
      unaff_x22 = *(ulong *)((long)ppppppuVar5 + -0x30);
      unaff_x21 = *(ulong *)((long)ppppppuVar5 + -0x28);
      puVar6 = *(undefined1 **)((long)ppppppuVar5 + -0x10);
      puVar32 = *(undefined **)((long)ppppppuVar5 + -8);
code_r0x016ce380:
      do {
        piVar15 = auVar35._8_8_;
        *(long *)((long)ppppppuVar5 + -0x20) = unaff_x20;
        *(int **)((long)ppppppuVar5 + -0x18) = piVar14;
        *(undefined1 **)((long)ppppppuVar5 + -0x10) = puVar6;
        *(undefined **)((long)ppppppuVar5 + -8) = puVar32;
        ppuVar29 = (undefined1 **)((long)ppppppuVar5 + -0x10);
        uVar20 = auVar35._8_4_;
        if ((int)uVar20 < *(int *)(auVar35._0_8_ + 0x30)) {
          unaff_x20 = *(long *)(auVar35._0_8_ + 0x28);
          uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
          if (unaff_x20 == 0) goto code_r0x016ce410;
          if (uVar20 < *(uint *)(unaff_x20 + 0x18)) {
            *(int *)(unaff_x20 + (long)(int)uVar20 * 4 + 0x20) = (int)uVar13;
            return uVar13;
          }
        }
        else {
          func_0x00f78a24(0x3d22738);
          piVar15 = (int *)func_0x00f78aec();
          uVar17 = func_0x00f78a24(0x3d6ceb8);
          uVar16 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar15,uVar17);
          uVar17 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(piVar15,uVar17);
code_r0x016ce410:
          func_0x00f78af4();
        }
        uVar17 = func_0x00f78b24();
        puVar32 = &FlatBuffers_FlatBufferBuilder__AddBool;
        auVar34 = func_0x00f78ac0(uVar17,0);
        puVar6 = auVar34._8_8_;
        auVar33._8_8_ = uVar16;
        auVar33._0_8_ = auVar34._0_8_;
        ppppppuVar5 = (undefined1 ******)((long)ppppppuVar5 + -0x20);
        piVar14 = piVar15;
code_r0x016ce420:
        uVar13 = auVar33._0_8_;
        auVar35._8_8_ = puVar6;
        auVar35._0_8_ = uVar13;
        *(ulong *)((long)ppppppuVar5 + -0x30) = unaff_x22;
        *(ulong *)((long)ppppppuVar5 + -0x28) = unaff_x21;
        *(long *)((long)ppppppuVar5 + -0x20) = unaff_x20;
        *(int **)((long)ppppppuVar5 + -0x18) = piVar14;
        *(undefined1 ***)((long)ppppppuVar5 + -0x10) = ppuVar29;
        *(undefined **)((long)ppppppuVar5 + -8) = puVar32;
        if ((auVar33._8_4_ == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
          return uVar13;
        }
        uVar16 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
        /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,auVar33._8_8_);
        unaff_x20 = *(long *)((long)ppppppuVar5 + -0x20);
        piVar14 = *(int **)((long)ppppppuVar5 + -0x18);
        unaff_x22 = *(ulong *)((long)ppppppuVar5 + -0x30);
        unaff_x21 = *(ulong *)((long)ppppppuVar5 + -0x28);
        puVar6 = *(undefined1 **)((long)ppppppuVar5 + -0x10);
        puVar32 = *(undefined **)((long)ppppppuVar5 + -8);
      } while( true );
    }
    uVar20 = *piVar14 + (int)uVar13;
    puVar2 = &stack0xffffffffffffffa0;
    pppppuVar28 = (undefined1 *****)ppppuStack_70;
    puVar32 = puStack_68;
  }
  else {
    uVar20 = *piVar15 + (int)uVar13;
    puVar2 = &stack0xffffffffffffffc0;
    piVar15 = piVar14;
    pppppuVar28 = (undefined1 *****)ppppuStack_50;
    puVar32 = puStack_48;
  }
  piVar14 = (int *)(ulong)uVar20;
  puVar3 = puVar2 + -0x20;
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(int **)(puVar2 + -0x18) = piVar15;
  *(undefined1 ******)(puVar2 + -0x10) = pppppuVar28;
  *(undefined **)(puVar2 + -8) = puVar32;
  ppppuVar27 = (undefined1 ****)(puVar2 + -0x10);
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar22,piVar14,1);
  if ((*(long *)(lVar22 + 0x10) == 0) ||
     (lVar23 = *(long *)(*(long *)(lVar22 + 0x10) + 0x10), lVar23 == 0)) {
    func_0x00f78af4();
  }
  else if (uVar20 < *(uint *)(lVar23 + 0x18)) {
    return (long)*(char *)(lVar23 + (int)uVar20 + 0x20);
  }
  uVar16 = func_0x00f78b24();
  puVar32 = &FlatBuffers_ByteBuffer__Get;
  auVar34 = func_0x00f78ac0(uVar16,0);
  unaff_x20 = lVar22;
code_r0x016cccfc:
  *(long *)(puVar3 + -0x20) = unaff_x20;
  *(int **)(puVar3 + -0x18) = piVar14;
  *(undefined1 *****)(puVar3 + -0x10) = ppppuVar27;
  *(undefined **)(puVar3 + -8) = puVar32;
  uVar16 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar34._0_8_,auVar34._8_8_,1);
  lVar22 = *(long *)(auVar34._0_8_ + 0x10);
  if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0)) {
    func_0x00f78af4();
  }
  else if (auVar34._8_4_ < *(uint *)(lVar22 + 0x18)) {
    return (ulong)*(byte *)(lVar22 + (int)auVar34._8_4_ + 0x20);
  }
  uVar17 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar17,0);
  *(ulong *)(puVar3 + -0x50) = unaff_x22;
  *(ulong *)(puVar3 + -0x48) = unaff_x21;
  *(undefined1 (*) [16])(puVar3 + -0x40) = auVar34;
  *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
  plVar18 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar22 = *(long *)(auVar35._0_8_ + 0x10);
  if ((lVar22 != 0) && (plVar18 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (**(code **)(*plVar18 + 0x348))
                       (plVar18,*(undefined8 *)(lVar22 + 0x10),auVar35._8_8_,uVar16,
                        *(undefined8 *)(*plVar18 + 0x350));
    return uVar13;
  }
  auVar34 = func_0x00f78af4();
  *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x30;
  *(undefined **)(puVar3 + -0x58) = &FlatBuffers_ByteBuffer__GetShort;
  sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar34._0_8_,auVar34._8_8_,2);
  return (ulong)(uint)(int)sVar7;
}



// ============================================================
// RVA: 0x166b94c | Core.Services.GetLeaderboardScoresRequest.get_RangeMax
// ============================================================

/* WARNING: Possible PIC construction at 0x0166ba80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166badc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166baf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166bb0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166bb24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0166bb10) */
/* WARNING: Removing unreachable block (ram,0x0166baf8) */
/* WARNING: Removing unreachable block (ram,0x0166bae0) */
/* WARNING: Removing unreachable block (ram,0x0166ba84) */
/* WARNING: Removing unreachable block (ram,0x0166bb28) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_GetLeaderboardScoresRequest__get_RangeMax
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,ulong param_6,ulong param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *****pppppuVar5;
  undefined1 *puVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uVar18;
  uint uVar19;
  int *piVar20;
  dword *pdVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar26;
  undefined1 ***pppuVar27;
  undefined1 ****ppppuVar28;
  undefined1 **ppuVar29;
  undefined1 *****pppppuVar30;
  int ***pppiVar31;
  undefined *puVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  ulong auStack_1e0 [4];
  undefined1 auStack_1c0 [12];
  int iStack_1b4;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  int **ppiStack_190;
  undefined *puStack_188;
  undefined1 ***pppuStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  undefined1 *puStack_120;
  undefined *puStack_118;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 ****appppuStack_e0 [2];
  undefined1 ***pppuStack_90;
  undefined *puStack_88;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,8,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  if (*(long *)(param_1 + 2) != 0) {
    uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + (int)uVar13,4);
    return uVar13;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Services_GetLeaderboardScoresRequest__get_PlayerScope;
  puStack_30 = &stack0xfffffffffffffff0;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,10,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar22 = *(long *)(piVar14 + 2);
  if (lVar22 == 0) {
    piVar20 = (int *)func_0x00f78af4();
    puStack_48 = &Core_Services_GetLeaderboardScoresRequest__get_TimeScope;
    puStack_50 = (undefined1 *)&puStack_30;
    uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar20,0xc,0);
    if ((int)uVar13 == 0) {
      return uVar13;
    }
    lVar22 = *(long *)(piVar20 + 2);
    if (lVar22 == 0) {
      piVar20 = (int *)func_0x00f78af4();
      puVar3 = &stack0xffffffffffffff80;
      puStack_68 = &Core_Services_GetLeaderboardScoresRequest__get_PreviousOccurrence;
      pppuVar27 = &stack0xffffffffffffff90;
      ppuStack_70 = &puStack_50;
      uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar20,0xe,0);
      if ((int)uVar13 == 0) {
        return uVar13;
      }
      if (*(long *)(piVar20 + 2) != 0) {
        auVar34._8_4_ = *piVar20 + (int)uVar13;
        auVar34._0_8_ = *(long *)(piVar20 + 2);
        auVar34._12_4_ = 0;
        puVar32 = &UNK_0166ba84;
        goto code_r0x016cccfc;
      }
      piVar14 = (int *)func_0x00f78af4();
      pppppuVar5 = (undefined1 *****)&stack0xffffffffffffff30;
      puVar4 = &stack0xffffffffffffff30;
      puStack_88 = &Core_Services_GetLeaderboardScoresRequest__CreateGetLeaderboardScoresRequest;
      ppppuVar28 = &stack0xffffffffffffff70;
      pppuStack_90 = pppuVar27;
      if (piVar14 != (int *)0x0) {
        puVar32 = &UNK_0166bae0;
        piVar20 = piVar14;
        unaff_x21 = param_6;
        unaff_x22 = param_7;
code_r0x016ce2a4:
        uVar15 = 0;
        pppppuVar5 = (undefined1 *****)(puVar4 + -0x30);
        *(ulong *)(puVar4 + -0x30) = unaff_x22;
        *(ulong *)(puVar4 + -0x28) = unaff_x21;
        *(int **)(puVar4 + -0x20) = piVar20;
        *(undefined8 *)(puVar4 + -0x18) = param_5;
        *(undefined1 *****)(puVar4 + -0x10) = ppppuVar28;
        *(undefined **)(puVar4 + -8) = puVar32;
        unaff_x20 = 6;
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar14);
        if (*(long *)(piVar14 + 10) != 0) {
          if (*(int *)(*(long *)(piVar14 + 10) + 0x18) < 6) {
            uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,6);
            *(undefined8 *)(piVar14 + 10) = uVar15;
          }
          piVar14[0xc] = 6;
          uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar14);
          piVar14[0xd] = (int)uVar13;
          return uVar13;
        }
        auVar35 = func_0x00f78af4();
        piVar20 = piVar14;
        puVar6 = puVar4 + -0x10;
        puVar32 = &FlatBuffers_FlatBufferBuilder__Slot;
        goto code_r0x016ce380;
      }
      puVar32 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMax;
      auVar34 = func_0x00f78af4();
      if (auVar34._0_8_ == 0) {
        pppppuVar5 = appppuStack_e0;
        pppppuVar30 = appppuStack_e0;
        appppuStack_e0[1] = (undefined1 ****)&Core_Services_GetLeaderboardScoresRequest__AddRangeMax
        ;
        puVar32 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMin;
        appppuStack_e0[0] = ppppuVar28;
        auVar34 = func_0x00f78af4();
        if (auVar34._0_8_ == 0) {
          puStack_e8 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMin;
          puStack_f0 = (undefined1 *)appppuStack_e0;
          auVar34 = func_0x00f78af4();
          uVar15 = auVar34._8_8_;
          uVar13 = auVar34._0_8_;
          if (uVar13 != 0) {
            param_4 = 0;
            puStack_f8 = &Core_Services_GetLeaderboardScoresRequest__AddId;
            if ((auVar34._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
              return uVar13;
            }
            puStack_100 = (undefined1 *)&puStack_f0;
            /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar13,uVar15,uVar15,0,0);
            auVar35._8_8_ = 0;
            auVar35._0_8_ = uVar13;
            pppppuVar5 = (undefined1 *****)&puStack_f0;
            puVar6 = puStack_100;
            puVar32 = puStack_f8;
            goto code_r0x016ce380;
          }
          pppppuVar5 = (undefined1 *****)&puStack_100;
          ppuVar29 = &puStack_100;
          puStack_f8 = &Core_Services_GetLeaderboardScoresRequest__AddId;
          puVar32 = &Core_Services_GetLeaderboardScoresRequest__AddPreviousOccurrence;
          puStack_100 = (undefined1 *)&puStack_f0;
          auVar33 = func_0x00f78af4();
          if (auVar33._0_8_ != 0) {
            puVar6 = (undefined1 *)((long)&MACH_HEADER.cputype + 1);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          pppppuVar5 = (undefined1 *****)&stack0xfffffffffffffef0;
          puVar32 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
          auVar34 = func_0x00f78af4();
          if (auVar34._0_8_ == 0) {
            pppppuVar5 = (undefined1 *****)&puStack_120;
            puStack_118 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
            puVar32 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
            puStack_120 = &stack0xfffffffffffffef0;
            auVar34 = func_0x00f78af4();
            if (auVar34._0_8_ == 0) {
              puStack_128 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
              ppuStack_130 = &puStack_120;
              lVar22 = func_0x00f78af4();
              puVar4 = &stack0xfffffffffffffeb0;
              puStack_138 = &
                            Core_Services_GetLeaderboardScoresRequest__EndGetLeaderboardScoresRequest
              ;
              ppppuVar28 = &pppuStack_140;
              piVar20 = (int *)0x3eb5000;
              pppuStack_140 = &ppuStack_130;
              if ((bRam0000000003eb58c3 & 1) == 0) {
                pppuStack_140 = &ppuStack_130;
                func_0x00f78a20(0x3d3f0a8);
                bRam0000000003eb58c3 = 1;
              }
              if (lVar22 == 0) {
                puVar32 = &
                          Core_Services_GetLeaderboardScoresRequest__StartGetLeaderboardScoresRequest
                ;
                piVar14 = (int *)func_0x00f78af4();
                if (piVar14 == (int *)0x0) {
                  lVar22 = func_0x00f78af4();
                  return *(ulong *)(lVar22 + 8);
                }
                param_5 = 0;
                goto code_r0x016ce2a4;
              }
              uVar13 = 0x3eb5000;
              if ((bRam0000000003eb5cd8 & 1) == 0) {
                func_0x00f78a20(0x3d1f100,0);
                bRam0000000003eb5cd8 = 1;
              }
              if (-1 < *(int *)(lVar22 + 0x30)) {
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar22,4,0);
                /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar22,0);
                uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar22);
                unaff_x21 = (ulong)*(uint *)(lVar22 + 0x30);
                uVar19 = *(uint *)(lVar22 + 0x30) - 1;
                if (-2 < (int)uVar19) {
                  uVar19 = 0xffffffff;
                }
                unaff_x22 = (ulong)uVar19;
                do {
                  uVar1 = (int)unaff_x21 - 1;
                  unaff_x21 = (ulong)uVar1;
                  iVar25 = (int)uVar13;
                  if ((int)uVar1 < 0) goto code_r0x016ceb30;
                  lVar23 = *(long *)(lVar22 + 0x28);
                  if (lVar23 == 0) goto code_r0x016ced84;
                  if (*(uint *)(lVar23 + 0x18) <= uVar1) goto code_r0x016ced88;
                } while (*(int *)(lVar23 + (ulong)uVar1 * 4 + 0x20) == 0);
                unaff_x22 = unaff_x21 + 8;
                do {
                  uVar26 = unaff_x22 - 8;
                  if (*(uint *)(lVar23 + 0x18) <= uVar26) goto code_r0x016ced88;
                  iVar11 = *(int *)(lVar23 + unaff_x22 * 4);
                  sVar7 = 0;
                  if (iVar11 != 0) {
                    sVar7 = (short)uVar13 - (short)iVar11;
                  }
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar22,2,0);
                  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar22,(int)sVar7);
                  lVar23 = *(long *)(lVar22 + 0x28);
                  if (lVar23 == 0) goto code_r0x016ced84;
                  if (*(uint *)(lVar23 + 0x18) <= uVar26) goto code_r0x016ced88;
                  *(undefined4 *)(lVar23 + unaff_x22 * 4) = 0;
                  unaff_x22 = unaff_x22 - 1;
                  uVar19 = uVar1;
                } while (0 < (long)uVar26);
code_r0x016ceb30:
                uVar10 = *(undefined4 *)(lVar22 + 0x34);
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar22,2,0);
                /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar22,(int)(short)((short)uVar13 - (short)uVar10));
                uVar19 = uVar19 * 2 + 6;
                unaff_x21 = (ulong)uVar19;
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar22,2,0);
                /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar22,(int)(short)uVar19);
                unaff_x22 = (ulong)*(uint *)(lVar22 + 0x40);
                if (0 < (int)*(uint *)(lVar22 + 0x40)) {
                  uVar26 = 0;
                  do {
                    lVar23 = *(long *)(lVar22 + 0x18);
                    if (((lVar23 == 0) || (*(long *)(lVar23 + 0x10) == 0)) ||
                       (lVar24 = *(long *)(lVar22 + 0x38), lVar24 == 0)) goto code_r0x016ced84;
                    if (*(uint *)(lVar24 + 0x18) <= uVar26) goto code_r0x016ced88;
                    uVar1 = *(int *)(*(long *)(lVar23 + 0x10) + 0x18) -
                            *(int *)(lVar24 + uVar26 * 4 + 0x20);
                    unaff_x21 = (ulong)uVar1;
                    uVar19 = *(uint *)(lVar22 + 0x10);
                    unaff_x22 = (ulong)uVar19;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar23,unaff_x21,2);
                    if (*(long *)(lVar22 + 0x18) == 0) goto code_r0x016ced84;
                    sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar22 + 0x18),unaff_x22,2);
                    if (sVar7 == sVar8) {
                      if (sVar7 < 3) {
code_r0x016cec64:
                        unaff_x21 = *(ulong *)(lVar22 + 0x38);
                        if (unaff_x21 == 0) goto code_r0x016ced84;
                        if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar26) goto code_r0x016ced88;
                        iVar11 = *(int *)(unaff_x21 + uVar26 * 4 + 0x20);
                        if (iVar11 == 0) {
                          unaff_x22 = (ulong)*(uint *)(lVar22 + 0x40);
                          goto code_r0x016cecac;
                        }
                        unaff_x21 = *(ulong *)(lVar22 + 0x18);
                        if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                        goto code_r0x016ced84;
                        iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar25;
                        *(int *)(lVar22 + 0x10) = iVar12;
                        iVar11 = iVar11 - iVar25;
                        goto code_r0x016ced3c;
                      }
                      iVar11 = 2;
                      while( true ) {
                        if (*(long *)(lVar22 + 0x18) == 0) goto code_r0x016ced84;
                        sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar22 + 0x18),uVar1 + iVar11,2);
                        if (*(long *)(lVar22 + 0x18) == 0) goto code_r0x016ced84;
                        sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar22 + 0x18),uVar19 + iVar11,2);
                        if (sVar8 != sVar9) break;
                        iVar11 = iVar11 + 2;
                        if (sVar7 <= iVar11) goto code_r0x016cec64;
                      }
                    }
                    uVar26 = uVar26 + 1;
                    unaff_x22 = (ulong)*(int *)(lVar22 + 0x40);
                  } while ((long)uVar26 < (long)unaff_x22);
                }
                unaff_x21 = *(ulong *)(lVar22 + 0x38);
                if (unaff_x21 == 0) {
code_r0x016ced84:
                  func_0x00f78af4();
                }
                else {
code_r0x016cecac:
                  if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                    unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                    lVar23 = *(long *)(lVar22 + 0x38);
                    if (lVar23 == 0) goto code_r0x016ced84;
                    /*System.Array$$Copy*/ func_0x0292c49c(lVar23,unaff_x21,*(undefined4 *)(lVar23 + 0x18),0);
                    *(ulong *)(lVar22 + 0x38) = unaff_x21;
                    unaff_x22 = (ulong)*(uint *)(lVar22 + 0x40);
                  }
                  uVar19 = (uint)unaff_x22;
                  *(uint *)(lVar22 + 0x40) = uVar19 + 1;
                  uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar22);
                  if (unaff_x21 == 0) goto code_r0x016ced84;
                  if (uVar19 < *(uint *)(unaff_x21 + 0x18)) {
                    *(undefined4 *)(unaff_x21 + (long)(int)uVar19 * 4 + 0x20) = uVar10;
                    unaff_x21 = *(ulong *)(lVar22 + 0x18);
                    if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                      iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                      iVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar22);
                      iVar12 = iVar12 - iVar25;
                      iVar11 = iVar11 - iVar25;
code_r0x016ced3c:
                      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar12,4);
                      /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar12,4,(long)iVar11);
                      *(undefined4 *)(lVar22 + 0x30) = 0xffffffff;
                      return uVar13;
                    }
                    goto code_r0x016ced84;
                  }
                }
code_r0x016ced88:
                uVar15 = func_0x00f78b24();
                func_0x00f78ac0(uVar15,0);
              }
              func_0x00f78a24(0x3d22a38);
              uVar15 = func_0x00f78aec();
              uVar16 = func_0x00f78a24(0x3d6cea8);
              iVar25 = 0;
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar16);
              uVar16 = func_0x00f78a24(0x3d56a30);
              auVar36 = func_0x00f78ac0(uVar15,uVar16);
              puStack_188 = &FlatBuffers_FlatBufferBuilder__Required;
              pppiVar31 = &ppiStack_190;
              lVar22 = *(long *)(auVar36._0_8_ + 0x18);
              iStack_1b4 = iVar25;
              uStack_1b0 = unaff_x22;
              uStack_1a8 = unaff_x21;
              uStack_1a0 = uVar13;
              uStack_198 = uVar15;
              ppiStack_190 = (int **)&pppuStack_140;
              if ((lVar22 != 0) && (*(long *)(lVar22 + 0x10) != 0)) {
                iVar11 = *(int *)(*(long *)(lVar22 + 0x10) + 0x18) - auVar36._8_4_;
                iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar22,iVar11,4);
                lVar22 = *(long *)(auVar36._0_8_ + 0x18);
                if (lVar22 != 0) {
                  uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar22,(iVar11 - iVar12) + iVar25,2);
                  if ((uVar13 & 0xffff) != 0) {
                    return uVar13;
                  }
                  goto code_r0x016cee5c;
                }
              }
              func_0x00f78af4();
code_r0x016cee5c:
              uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_1b4,0);
              uVar16 = func_0x00f78a24(0x3d6ce88);
              uVar18 = func_0x00f78a24(0x3d66338);
              lVar22 = /*System.String$$Concat*/ func_0x029be39c(uVar16,uVar15,uVar18,0);
              func_0x00f78a24(0x3d22a38);
              uVar13 = func_0x00f78aec();
              uVar16 = 0;
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar22);
              uVar15 = func_0x00f78a24(0x3d56a50);
              puVar32 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar34 = func_0x00f78ac0(uVar13,uVar15);
              puVar6 = auStack_1c0;
              do {
                uVar26 = auVar34._8_8_;
                lVar23 = auVar34._0_8_;
                *(ulong *)(puVar6 + -0x20) = uVar13;
                *(long *)(puVar6 + -0x18) = lVar22;
                *(int ****)(puVar6 + -0x10) = pppiVar31;
                *(undefined **)(puVar6 + -8) = puVar32;
                pppiVar31 = (int ***)(puVar6 + -0x10);
                if ((int)uVar16 == 0) {
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar23,*(undefined4 *)(lVar23 + 0x20),4);
                  uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar23,uVar26);
code_r0x016cef70:
                  if (*(long *)(lVar23 + 0x18) != 0) {
                    *(undefined4 *)(*(long *)(lVar23 + 0x18) + 0x18) =
                         *(undefined4 *)(lVar23 + 0x10);
                    return uVar13;
                  }
                }
                else if (lVar23 != 0) {
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar23,*(undefined4 *)(lVar23 + 0x20),8);
                  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar23,uVar26);
                  if ((*(long *)(lVar23 + 0x18) != 0) &&
                     (lVar22 = *(long *)(*(long *)(lVar23 + 0x18) + 0x10), lVar22 != 0)) {
                    uVar26 = (ulong)(uint)(*(int *)(lVar22 + 0x18) - *(int *)(lVar23 + 0x10));
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar23,4,0);
                    uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar23,uVar26);
                    goto code_r0x016cef70;
                  }
                }
                puVar32 = &FlatBuffers_FlatBufferBuilder__Finish;
                auVar34 = func_0x00f78af4();
                uVar16 = 0;
                puVar6 = puVar6 + -0x20;
                lVar22 = lVar23;
                uVar13 = uVar26;
              } while( true );
            }
            pdVar21 = (dword *)((long)&MACH_HEADER.magic + 3);
          }
          else {
            pdVar21 = &MACH_HEADER.cputype;
          }
          uVar13 = auVar34._0_8_;
          auVar35._8_8_ = pdVar21;
          auVar35._0_8_ = uVar13;
          param_4 = 0;
          *(ulong *)((long)pppppuVar5 + -0x30) = unaff_x22;
          *(ulong *)((long)pppppuVar5 + -0x28) = unaff_x21;
          *(long *)((long)pppppuVar5 + -0x20) = unaff_x20;
          *(int **)((long)pppppuVar5 + -0x18) = piVar20;
          *(undefined1 ******)((long)pppppuVar5 + -0x10) = pppppuVar5;
          *(undefined **)((long)pppppuVar5 + -8) = puVar32;
          if ((auVar34._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
            return uVar13;
          }
          uVar15 = 0;
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1,0,0,0);
          /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar13,auVar34._8_8_);
          puVar6 = *(undefined1 **)((long)pppppuVar5 + -0x10);
          puVar32 = *(undefined **)((long)pppppuVar5 + -8);
          unaff_x20 = *(long *)((long)pppppuVar5 + -0x20);
          piVar20 = *(int **)((long)pppppuVar5 + -0x18);
          unaff_x22 = *(ulong *)((long)pppppuVar5 + -0x30);
          unaff_x21 = *(ulong *)((long)pppppuVar5 + -0x28);
          goto code_r0x016ce380;
        }
        puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      }
      else {
        puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
        pppppuVar30 = (undefined1 *****)ppppuVar28;
      }
      uVar13 = auVar34._0_8_;
      auVar35._8_8_ = puVar6;
      auVar35._0_8_ = uVar13;
      param_4 = 0;
      *(ulong *)((long)pppppuVar5 + -0x30) = unaff_x22;
      *(ulong *)((long)pppppuVar5 + -0x28) = unaff_x21;
      *(long *)((long)pppppuVar5 + -0x20) = unaff_x20;
      *(int **)((long)pppppuVar5 + -0x18) = piVar20;
      *(undefined1 ******)((long)pppppuVar5 + -0x10) = pppppuVar30;
      *(undefined **)((long)pppppuVar5 + -8) = puVar32;
      if ((auVar34._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
        return uVar13;
      }
      uVar15 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar13,auVar34._8_8_);
      unaff_x20 = *(long *)((long)pppppuVar5 + -0x20);
      piVar20 = *(int **)((long)pppppuVar5 + -0x18);
      unaff_x22 = *(ulong *)((long)pppppuVar5 + -0x30);
      unaff_x21 = *(ulong *)((long)pppppuVar5 + -0x28);
      puVar6 = *(undefined1 **)((long)pppppuVar5 + -0x10);
      puVar32 = *(undefined **)((long)pppppuVar5 + -8);
code_r0x016ce380:
      do {
        piVar14 = auVar35._8_8_;
        *(long *)((long)pppppuVar5 + -0x20) = unaff_x20;
        *(int **)((long)pppppuVar5 + -0x18) = piVar20;
        *(undefined1 **)((long)pppppuVar5 + -0x10) = puVar6;
        *(undefined **)((long)pppppuVar5 + -8) = puVar32;
        ppuVar29 = (undefined1 **)((long)pppppuVar5 + -0x10);
        uVar19 = auVar35._8_4_;
        if ((int)uVar19 < *(int *)(auVar35._0_8_ + 0x30)) {
          unaff_x20 = *(long *)(auVar35._0_8_ + 0x28);
          uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
          if (unaff_x20 == 0) goto code_r0x016ce410;
          if (uVar19 < *(uint *)(unaff_x20 + 0x18)) {
            *(int *)(unaff_x20 + (long)(int)uVar19 * 4 + 0x20) = (int)uVar13;
            return uVar13;
          }
        }
        else {
          func_0x00f78a24(0x3d22738);
          piVar14 = (int *)func_0x00f78aec();
          uVar16 = func_0x00f78a24(0x3d6ceb8);
          uVar15 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar14,uVar16);
          uVar16 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(piVar14,uVar16);
code_r0x016ce410:
          func_0x00f78af4();
        }
        uVar16 = func_0x00f78b24();
        puVar32 = &FlatBuffers_FlatBufferBuilder__AddBool;
        auVar34 = func_0x00f78ac0(uVar16,0);
        puVar6 = auVar34._8_8_;
        auVar33._8_8_ = uVar15;
        auVar33._0_8_ = auVar34._0_8_;
        pppppuVar5 = (undefined1 *****)((long)pppppuVar5 + -0x20);
        piVar20 = piVar14;
code_r0x016ce420:
        uVar13 = auVar33._0_8_;
        auVar35._8_8_ = puVar6;
        auVar35._0_8_ = uVar13;
        *(ulong *)((long)pppppuVar5 + -0x30) = unaff_x22;
        *(ulong *)((long)pppppuVar5 + -0x28) = unaff_x21;
        *(long *)((long)pppppuVar5 + -0x20) = unaff_x20;
        *(int **)((long)pppppuVar5 + -0x18) = piVar20;
        *(undefined1 ***)((long)pppppuVar5 + -0x10) = ppuVar29;
        *(undefined **)((long)pppppuVar5 + -8) = puVar32;
        if ((auVar33._8_4_ == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
          return uVar13;
        }
        uVar15 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
        /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,auVar33._8_8_);
        unaff_x20 = *(long *)((long)pppppuVar5 + -0x20);
        piVar20 = *(int **)((long)pppppuVar5 + -0x18);
        unaff_x22 = *(ulong *)((long)pppppuVar5 + -0x30);
        unaff_x21 = *(ulong *)((long)pppppuVar5 + -0x28);
        puVar6 = *(undefined1 **)((long)pppppuVar5 + -0x10);
        puVar32 = *(undefined **)((long)pppppuVar5 + -8);
      } while( true );
    }
    uVar19 = *piVar20 + (int)uVar13;
    puVar2 = &stack0xffffffffffffffc0;
    ppuVar29 = (undefined1 **)puStack_50;
    puVar32 = puStack_48;
  }
  else {
    uVar19 = *piVar14 + (int)uVar13;
    puVar2 = &stack0xffffffffffffffe0;
    piVar14 = param_1;
    ppuVar29 = (undefined1 **)puStack_30;
    puVar32 = puStack_28;
  }
  piVar20 = (int *)(ulong)uVar19;
  puVar3 = puVar2 + -0x20;
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(int **)(puVar2 + -0x18) = piVar14;
  *(undefined1 ***)(puVar2 + -0x10) = ppuVar29;
  *(undefined **)(puVar2 + -8) = puVar32;
  pppuVar27 = (undefined1 ***)(puVar2 + -0x10);
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar22,piVar20,1);
  if ((*(long *)(lVar22 + 0x10) == 0) ||
     (lVar23 = *(long *)(*(long *)(lVar22 + 0x10) + 0x10), lVar23 == 0)) {
    func_0x00f78af4();
  }
  else if (uVar19 < *(uint *)(lVar23 + 0x18)) {
    return (long)*(char *)(lVar23 + (int)uVar19 + 0x20);
  }
  uVar15 = func_0x00f78b24();
  puVar32 = &FlatBuffers_ByteBuffer__Get;
  auVar34 = func_0x00f78ac0(uVar15,0);
  unaff_x20 = lVar22;
code_r0x016cccfc:
  *(long *)(puVar3 + -0x20) = unaff_x20;
  *(int **)(puVar3 + -0x18) = piVar20;
  *(undefined1 ****)(puVar3 + -0x10) = pppuVar27;
  *(undefined **)(puVar3 + -8) = puVar32;
  uVar15 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar34._0_8_,auVar34._8_8_,1);
  lVar22 = *(long *)(auVar34._0_8_ + 0x10);
  if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0)) {
    func_0x00f78af4();
  }
  else if (auVar34._8_4_ < *(uint *)(lVar22 + 0x18)) {
    return (ulong)*(byte *)(lVar22 + (int)auVar34._8_4_ + 0x20);
  }
  uVar16 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar16,0);
  *(ulong *)(puVar3 + -0x50) = unaff_x22;
  *(ulong *)(puVar3 + -0x48) = unaff_x21;
  *(undefined1 (*) [16])(puVar3 + -0x40) = auVar34;
  *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
  plVar17 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar22 = *(long *)(auVar35._0_8_ + 0x10);
  if ((lVar22 != 0) && (plVar17 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (**(code **)(*plVar17 + 0x348))
                       (plVar17,*(undefined8 *)(lVar22 + 0x10),auVar35._8_8_,uVar15,
                        *(undefined8 *)(*plVar17 + 0x350));
    return uVar13;
  }
  auVar34 = func_0x00f78af4();
  *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x30;
  *(undefined **)(puVar3 + -0x58) = &FlatBuffers_ByteBuffer__GetShort;
  sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar34._0_8_,auVar34._8_8_,2);
  return (ulong)(uint)(int)sVar7;
}



// ============================================================
// RVA: 0x166b9a0 | Core.Services.GetLeaderboardScoresRequest.get_PlayerScope
// ============================================================

/* WARNING: Possible PIC construction at 0x0166ba80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166badc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166baf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166bb0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166bb24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0166bb10) */
/* WARNING: Removing unreachable block (ram,0x0166baf8) */
/* WARNING: Removing unreachable block (ram,0x0166bae0) */
/* WARNING: Removing unreachable block (ram,0x0166ba84) */
/* WARNING: Removing unreachable block (ram,0x0166bb28) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_GetLeaderboardScoresRequest__get_PlayerScope
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,ulong param_6,ulong param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 ****ppppuVar4;
  undefined1 *puVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  uint uVar18;
  int *piVar19;
  dword *pdVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int *unaff_x19;
  int iVar24;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar25;
  undefined1 *unaff_x29;
  undefined1 ***pppuVar26;
  undefined1 ****ppppuVar27;
  undefined1 **ppuVar28;
  undefined8 ****ppppuVar29;
  undefined8 ***pppuVar30;
  undefined *unaff_x30;
  undefined *puVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  ulong auStack_1c0 [4];
  undefined1 auStack_1a0 [12];
  int iStack_194;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 **ppuStack_170;
  undefined *puStack_168;
  undefined8 **ppuStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined1 ***pppuStack_70;
  undefined *puStack_68;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,10,0);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  lVar21 = *(long *)(param_1 + 2);
  if (lVar21 == 0) {
    piVar19 = (int *)func_0x00f78af4();
    puStack_28 = &Core_Services_GetLeaderboardScoresRequest__get_TimeScope;
    puStack_30 = &stack0xfffffffffffffff0;
    uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar19,0xc,0);
    if ((int)uVar12 == 0) {
      return uVar12;
    }
    lVar21 = *(long *)(piVar19 + 2);
    if (lVar21 == 0) {
      piVar19 = (int *)func_0x00f78af4();
      puVar2 = &stack0xffffffffffffffa0;
      puStack_48 = &Core_Services_GetLeaderboardScoresRequest__get_PreviousOccurrence;
      pppuVar26 = &ppuStack_50;
      ppuStack_50 = &puStack_30;
      uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar19,0xe,0);
      if ((int)uVar12 == 0) {
        return uVar12;
      }
      if (*(long *)(piVar19 + 2) != 0) {
        auVar33._8_4_ = *piVar19 + (int)uVar12;
        auVar33._0_8_ = *(long *)(piVar19 + 2);
        auVar33._12_4_ = 0;
        puVar31 = &UNK_0166ba84;
        goto code_r0x016cccfc;
      }
      piVar13 = (int *)func_0x00f78af4();
      ppppuVar4 = (undefined8 ****)&stack0xffffffffffffff50;
      puVar3 = &stack0xffffffffffffff50;
      puStack_68 = &Core_Services_GetLeaderboardScoresRequest__CreateGetLeaderboardScoresRequest;
      ppppuVar27 = &pppuStack_70;
      pppuStack_70 = pppuVar26;
      if (piVar13 != (int *)0x0) {
        puVar31 = &UNK_0166bae0;
        piVar19 = piVar13;
        unaff_x21 = param_6;
        unaff_x22 = param_7;
code_r0x016ce2a4:
        uVar14 = 0;
        ppppuVar4 = (undefined8 ****)(puVar3 + -0x30);
        *(ulong *)(puVar3 + -0x30) = unaff_x22;
        *(ulong *)(puVar3 + -0x28) = unaff_x21;
        *(int **)(puVar3 + -0x20) = piVar19;
        *(undefined8 *)(puVar3 + -0x18) = param_5;
        *(undefined1 *****)(puVar3 + -0x10) = ppppuVar27;
        *(undefined **)(puVar3 + -8) = puVar31;
        unaff_x20 = 6;
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar13);
        if (*(long *)(piVar13 + 10) != 0) {
          if (*(int *)(*(long *)(piVar13 + 10) + 0x18) < 6) {
            uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,6);
            *(undefined8 *)(piVar13 + 10) = uVar14;
          }
          piVar13[0xc] = 6;
          uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar13);
          piVar13[0xd] = (int)uVar12;
          return uVar12;
        }
        auVar34 = func_0x00f78af4();
        piVar19 = piVar13;
        puVar5 = puVar3 + -0x10;
        puVar31 = &FlatBuffers_FlatBufferBuilder__Slot;
        goto code_r0x016ce380;
      }
      puVar31 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMax;
      auVar33 = func_0x00f78af4();
      if (auVar33._0_8_ == 0) {
        ppppuVar4 = &pppuStack_c0;
        ppppuVar29 = &pppuStack_c0;
        puStack_b8 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMax;
        puVar31 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMin;
        pppuStack_c0 = ppppuVar27;
        auVar33 = func_0x00f78af4();
        if (auVar33._0_8_ == 0) {
          puStack_c8 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMin;
          puStack_d0 = (undefined1 *)&pppuStack_c0;
          auVar33 = func_0x00f78af4();
          uVar14 = auVar33._8_8_;
          uVar12 = auVar33._0_8_;
          if (uVar12 != 0) {
            param_4 = 0;
            puStack_d8 = &Core_Services_GetLeaderboardScoresRequest__AddId;
            if ((auVar33._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
              return uVar12;
            }
            puStack_e0 = (undefined1 *)&puStack_d0;
            /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar12,uVar14,uVar14,0,0);
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar12;
            ppppuVar4 = (undefined8 ****)&puStack_d0;
            puVar5 = puStack_e0;
            puVar31 = puStack_d8;
            goto code_r0x016ce380;
          }
          ppppuVar4 = (undefined8 ****)&puStack_e0;
          ppuVar28 = &puStack_e0;
          puStack_d8 = &Core_Services_GetLeaderboardScoresRequest__AddId;
          puVar31 = &Core_Services_GetLeaderboardScoresRequest__AddPreviousOccurrence;
          puStack_e0 = (undefined1 *)&puStack_d0;
          auVar32 = func_0x00f78af4();
          if (auVar32._0_8_ != 0) {
            puVar5 = (undefined1 *)((long)&MACH_HEADER.cputype + 1);
            param_4 = 0;
            goto code_r0x016ce420;
          }
          ppppuVar4 = (undefined8 ****)&stack0xffffffffffffff10;
          puVar31 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
          auVar33 = func_0x00f78af4();
          if (auVar33._0_8_ == 0) {
            ppppuVar4 = (undefined8 ****)&puStack_100;
            puStack_f8 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
            puVar31 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
            puStack_100 = &stack0xffffffffffffff10;
            auVar33 = func_0x00f78af4();
            if (auVar33._0_8_ == 0) {
              puStack_108 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
              puStack_110 = &puStack_100;
              lVar21 = func_0x00f78af4();
              puVar3 = &stack0xfffffffffffffed0;
              puStack_118 = &
                            Core_Services_GetLeaderboardScoresRequest__EndGetLeaderboardScoresRequest
              ;
              ppppuVar27 = (undefined1 ****)&ppuStack_120;
              piVar19 = (int *)0x3eb5000;
              ppuStack_120 = &puStack_110;
              if ((bRam0000000003eb58c3 & 1) == 0) {
                ppuStack_120 = &puStack_110;
                func_0x00f78a20(0x3d3f0a8);
                bRam0000000003eb58c3 = 1;
              }
              if (lVar21 == 0) {
                puVar31 = &
                          Core_Services_GetLeaderboardScoresRequest__StartGetLeaderboardScoresRequest
                ;
                piVar13 = (int *)func_0x00f78af4();
                if (piVar13 == (int *)0x0) {
                  lVar21 = func_0x00f78af4();
                  return *(ulong *)(lVar21 + 8);
                }
                param_5 = 0;
                goto code_r0x016ce2a4;
              }
              uVar12 = 0x3eb5000;
              if ((bRam0000000003eb5cd8 & 1) == 0) {
                func_0x00f78a20(0x3d1f100,0);
                bRam0000000003eb5cd8 = 1;
              }
              if (-1 < *(int *)(lVar21 + 0x30)) {
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,4,0);
                /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar21,0);
                uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar21);
                unaff_x21 = (ulong)*(uint *)(lVar21 + 0x30);
                uVar18 = *(uint *)(lVar21 + 0x30) - 1;
                if (-2 < (int)uVar18) {
                  uVar18 = 0xffffffff;
                }
                unaff_x22 = (ulong)uVar18;
                do {
                  uVar1 = (int)unaff_x21 - 1;
                  unaff_x21 = (ulong)uVar1;
                  iVar24 = (int)uVar12;
                  if ((int)uVar1 < 0) goto code_r0x016ceb30;
                  lVar22 = *(long *)(lVar21 + 0x28);
                  if (lVar22 == 0) goto code_r0x016ced84;
                  if (*(uint *)(lVar22 + 0x18) <= uVar1) goto code_r0x016ced88;
                } while (*(int *)(lVar22 + (ulong)uVar1 * 4 + 0x20) == 0);
                unaff_x22 = unaff_x21 + 8;
                do {
                  uVar25 = unaff_x22 - 8;
                  if (*(uint *)(lVar22 + 0x18) <= uVar25) goto code_r0x016ced88;
                  iVar10 = *(int *)(lVar22 + unaff_x22 * 4);
                  sVar6 = 0;
                  if (iVar10 != 0) {
                    sVar6 = (short)uVar12 - (short)iVar10;
                  }
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,2,0);
                  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar21,(int)sVar6);
                  lVar22 = *(long *)(lVar21 + 0x28);
                  if (lVar22 == 0) goto code_r0x016ced84;
                  if (*(uint *)(lVar22 + 0x18) <= uVar25) goto code_r0x016ced88;
                  *(undefined4 *)(lVar22 + unaff_x22 * 4) = 0;
                  unaff_x22 = unaff_x22 - 1;
                  uVar18 = uVar1;
                } while (0 < (long)uVar25);
code_r0x016ceb30:
                uVar9 = *(undefined4 *)(lVar21 + 0x34);
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,2,0);
                /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar21,(int)(short)((short)uVar12 - (short)uVar9));
                uVar18 = uVar18 * 2 + 6;
                unaff_x21 = (ulong)uVar18;
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,2,0);
                /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar21,(int)(short)uVar18);
                unaff_x22 = (ulong)*(uint *)(lVar21 + 0x40);
                if (0 < (int)*(uint *)(lVar21 + 0x40)) {
                  uVar25 = 0;
                  do {
                    lVar22 = *(long *)(lVar21 + 0x18);
                    if (((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) ||
                       (lVar23 = *(long *)(lVar21 + 0x38), lVar23 == 0)) goto code_r0x016ced84;
                    if (*(uint *)(lVar23 + 0x18) <= uVar25) goto code_r0x016ced88;
                    uVar1 = *(int *)(*(long *)(lVar22 + 0x10) + 0x18) -
                            *(int *)(lVar23 + uVar25 * 4 + 0x20);
                    unaff_x21 = (ulong)uVar1;
                    uVar18 = *(uint *)(lVar21 + 0x10);
                    unaff_x22 = (ulong)uVar18;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar22,unaff_x21,2);
                    if (*(long *)(lVar21 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar21 + 0x18),unaff_x22,2);
                    if (sVar6 == sVar7) {
                      if (sVar6 < 3) {
code_r0x016cec64:
                        unaff_x21 = *(ulong *)(lVar21 + 0x38);
                        if (unaff_x21 == 0) goto code_r0x016ced84;
                        if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar25) goto code_r0x016ced88;
                        iVar10 = *(int *)(unaff_x21 + uVar25 * 4 + 0x20);
                        if (iVar10 == 0) {
                          unaff_x22 = (ulong)*(uint *)(lVar21 + 0x40);
                          goto code_r0x016cecac;
                        }
                        unaff_x21 = *(ulong *)(lVar21 + 0x18);
                        if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                        goto code_r0x016ced84;
                        iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar24;
                        *(int *)(lVar21 + 0x10) = iVar11;
                        iVar10 = iVar10 - iVar24;
                        goto code_r0x016ced3c;
                      }
                      iVar10 = 2;
                      while( true ) {
                        if (*(long *)(lVar21 + 0x18) == 0) goto code_r0x016ced84;
                        sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar21 + 0x18),uVar1 + iVar10,2);
                        if (*(long *)(lVar21 + 0x18) == 0) goto code_r0x016ced84;
                        sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar21 + 0x18),uVar18 + iVar10,2);
                        if (sVar7 != sVar8) break;
                        iVar10 = iVar10 + 2;
                        if (sVar6 <= iVar10) goto code_r0x016cec64;
                      }
                    }
                    uVar25 = uVar25 + 1;
                    unaff_x22 = (ulong)*(int *)(lVar21 + 0x40);
                  } while ((long)uVar25 < (long)unaff_x22);
                }
                unaff_x21 = *(ulong *)(lVar21 + 0x38);
                if (unaff_x21 == 0) {
code_r0x016ced84:
                  func_0x00f78af4();
                }
                else {
code_r0x016cecac:
                  if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                    unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                    lVar22 = *(long *)(lVar21 + 0x38);
                    if (lVar22 == 0) goto code_r0x016ced84;
                    /*System.Array$$Copy*/ func_0x0292c49c(lVar22,unaff_x21,*(undefined4 *)(lVar22 + 0x18),0);
                    *(ulong *)(lVar21 + 0x38) = unaff_x21;
                    unaff_x22 = (ulong)*(uint *)(lVar21 + 0x40);
                  }
                  uVar18 = (uint)unaff_x22;
                  *(uint *)(lVar21 + 0x40) = uVar18 + 1;
                  uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar21);
                  if (unaff_x21 == 0) goto code_r0x016ced84;
                  if (uVar18 < *(uint *)(unaff_x21 + 0x18)) {
                    *(undefined4 *)(unaff_x21 + (long)(int)uVar18 * 4 + 0x20) = uVar9;
                    unaff_x21 = *(ulong *)(lVar21 + 0x18);
                    if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                      iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                      iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar21);
                      iVar11 = iVar11 - iVar24;
                      iVar10 = iVar10 - iVar24;
code_r0x016ced3c:
                      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar11,4);
                      /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar11,4,(long)iVar10);
                      *(undefined4 *)(lVar21 + 0x30) = 0xffffffff;
                      return uVar12;
                    }
                    goto code_r0x016ced84;
                  }
                }
code_r0x016ced88:
                uVar14 = func_0x00f78b24();
                func_0x00f78ac0(uVar14,0);
              }
              func_0x00f78a24(0x3d22a38);
              uVar14 = func_0x00f78aec();
              uVar15 = func_0x00f78a24(0x3d6cea8);
              iVar24 = 0;
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar15);
              uVar15 = func_0x00f78a24(0x3d56a30);
              auVar35 = func_0x00f78ac0(uVar14,uVar15);
              puStack_168 = &FlatBuffers_FlatBufferBuilder__Required;
              pppuVar30 = &ppuStack_170;
              lVar21 = *(long *)(auVar35._0_8_ + 0x18);
              iStack_194 = iVar24;
              uStack_190 = unaff_x22;
              uStack_188 = unaff_x21;
              uStack_180 = uVar12;
              uStack_178 = uVar14;
              ppuStack_170 = &ppuStack_120;
              if ((lVar21 != 0) && (*(long *)(lVar21 + 0x10) != 0)) {
                iVar10 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) - auVar35._8_4_;
                iVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,iVar10,4);
                lVar21 = *(long *)(auVar35._0_8_ + 0x18);
                if (lVar21 != 0) {
                  uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,(iVar10 - iVar11) + iVar24,2);
                  if ((uVar12 & 0xffff) != 0) {
                    return uVar12;
                  }
                  goto code_r0x016cee5c;
                }
              }
              func_0x00f78af4();
code_r0x016cee5c:
              uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_194,0);
              uVar15 = func_0x00f78a24(0x3d6ce88);
              uVar17 = func_0x00f78a24(0x3d66338);
              lVar21 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar14,uVar17,0);
              func_0x00f78a24(0x3d22a38);
              uVar12 = func_0x00f78aec();
              uVar15 = 0;
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar21);
              uVar14 = func_0x00f78a24(0x3d56a50);
              puVar31 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar33 = func_0x00f78ac0(uVar12,uVar14);
              puVar5 = auStack_1a0;
              do {
                uVar25 = auVar33._8_8_;
                lVar22 = auVar33._0_8_;
                *(ulong *)(puVar5 + -0x20) = uVar12;
                *(long *)(puVar5 + -0x18) = lVar21;
                *(undefined8 ****)(puVar5 + -0x10) = pppuVar30;
                *(undefined **)(puVar5 + -8) = puVar31;
                pppuVar30 = (undefined8 ***)(puVar5 + -0x10);
                if ((int)uVar15 == 0) {
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar22,*(undefined4 *)(lVar22 + 0x20),4);
                  uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar22,uVar25);
code_r0x016cef70:
                  if (*(long *)(lVar22 + 0x18) != 0) {
                    *(undefined4 *)(*(long *)(lVar22 + 0x18) + 0x18) =
                         *(undefined4 *)(lVar22 + 0x10);
                    return uVar12;
                  }
                }
                else if (lVar22 != 0) {
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar22,*(undefined4 *)(lVar22 + 0x20),8);
                  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar22,uVar25);
                  if ((*(long *)(lVar22 + 0x18) != 0) &&
                     (lVar21 = *(long *)(*(long *)(lVar22 + 0x18) + 0x10), lVar21 != 0)) {
                    uVar25 = (ulong)(uint)(*(int *)(lVar21 + 0x18) - *(int *)(lVar22 + 0x10));
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar22,4,0);
                    uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar22,uVar25);
                    goto code_r0x016cef70;
                  }
                }
                puVar31 = &FlatBuffers_FlatBufferBuilder__Finish;
                auVar33 = func_0x00f78af4();
                uVar15 = 0;
                puVar5 = puVar5 + -0x20;
                lVar21 = lVar22;
                uVar12 = uVar25;
              } while( true );
            }
            pdVar20 = (dword *)((long)&MACH_HEADER.magic + 3);
          }
          else {
            pdVar20 = &MACH_HEADER.cputype;
          }
          uVar12 = auVar33._0_8_;
          auVar34._8_8_ = pdVar20;
          auVar34._0_8_ = uVar12;
          param_4 = 0;
          *(ulong *)((long)ppppuVar4 + -0x30) = unaff_x22;
          *(ulong *)((long)ppppuVar4 + -0x28) = unaff_x21;
          *(long *)((long)ppppuVar4 + -0x20) = unaff_x20;
          *(int **)((long)ppppuVar4 + -0x18) = piVar19;
          *(undefined8 *****)((long)ppppuVar4 + -0x10) = ppppuVar4;
          *(undefined **)((long)ppppuVar4 + -8) = puVar31;
          if ((auVar33._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
            return uVar12;
          }
          uVar14 = 0;
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1,0,0,0);
          /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar12,auVar33._8_8_);
          puVar5 = *(undefined1 **)((long)ppppuVar4 + -0x10);
          puVar31 = *(undefined **)((long)ppppuVar4 + -8);
          unaff_x20 = *(long *)((long)ppppuVar4 + -0x20);
          piVar19 = *(int **)((long)ppppuVar4 + -0x18);
          unaff_x22 = *(ulong *)((long)ppppuVar4 + -0x30);
          unaff_x21 = *(ulong *)((long)ppppuVar4 + -0x28);
          goto code_r0x016ce380;
        }
        puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      }
      else {
        puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
        ppppuVar29 = (undefined8 ****)ppppuVar27;
      }
      uVar12 = auVar33._0_8_;
      auVar34._8_8_ = puVar5;
      auVar34._0_8_ = uVar12;
      param_4 = 0;
      *(ulong *)((long)ppppuVar4 + -0x30) = unaff_x22;
      *(ulong *)((long)ppppuVar4 + -0x28) = unaff_x21;
      *(long *)((long)ppppuVar4 + -0x20) = unaff_x20;
      *(int **)((long)ppppuVar4 + -0x18) = piVar19;
      *(undefined8 *****)((long)ppppuVar4 + -0x10) = ppppuVar29;
      *(undefined **)((long)ppppuVar4 + -8) = puVar31;
      if ((auVar33._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
        return uVar12;
      }
      uVar14 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,4,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar12,auVar33._8_8_);
      unaff_x20 = *(long *)((long)ppppuVar4 + -0x20);
      piVar19 = *(int **)((long)ppppuVar4 + -0x18);
      unaff_x22 = *(ulong *)((long)ppppuVar4 + -0x30);
      unaff_x21 = *(ulong *)((long)ppppuVar4 + -0x28);
      puVar5 = *(undefined1 **)((long)ppppuVar4 + -0x10);
      puVar31 = *(undefined **)((long)ppppuVar4 + -8);
code_r0x016ce380:
      do {
        piVar13 = auVar34._8_8_;
        *(long *)((long)ppppuVar4 + -0x20) = unaff_x20;
        *(int **)((long)ppppuVar4 + -0x18) = piVar19;
        *(undefined1 **)((long)ppppuVar4 + -0x10) = puVar5;
        *(undefined **)((long)ppppuVar4 + -8) = puVar31;
        ppuVar28 = (undefined1 **)((long)ppppuVar4 + -0x10);
        uVar18 = auVar34._8_4_;
        if ((int)uVar18 < *(int *)(auVar34._0_8_ + 0x30)) {
          unaff_x20 = *(long *)(auVar34._0_8_ + 0x28);
          uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
          if (unaff_x20 == 0) goto code_r0x016ce410;
          if (uVar18 < *(uint *)(unaff_x20 + 0x18)) {
            *(int *)(unaff_x20 + (long)(int)uVar18 * 4 + 0x20) = (int)uVar12;
            return uVar12;
          }
        }
        else {
          func_0x00f78a24(0x3d22738);
          piVar13 = (int *)func_0x00f78aec();
          uVar15 = func_0x00f78a24(0x3d6ceb8);
          uVar14 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar13,uVar15);
          uVar15 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(piVar13,uVar15);
code_r0x016ce410:
          func_0x00f78af4();
        }
        uVar15 = func_0x00f78b24();
        puVar31 = &FlatBuffers_FlatBufferBuilder__AddBool;
        auVar33 = func_0x00f78ac0(uVar15,0);
        puVar5 = auVar33._8_8_;
        auVar32._8_8_ = uVar14;
        auVar32._0_8_ = auVar33._0_8_;
        ppppuVar4 = (undefined8 ****)((long)ppppuVar4 + -0x20);
        piVar19 = piVar13;
code_r0x016ce420:
        uVar12 = auVar32._0_8_;
        auVar34._8_8_ = puVar5;
        auVar34._0_8_ = uVar12;
        *(ulong *)((long)ppppuVar4 + -0x30) = unaff_x22;
        *(ulong *)((long)ppppuVar4 + -0x28) = unaff_x21;
        *(long *)((long)ppppuVar4 + -0x20) = unaff_x20;
        *(int **)((long)ppppuVar4 + -0x18) = piVar19;
        *(undefined1 ***)((long)ppppuVar4 + -0x10) = ppuVar28;
        *(undefined **)((long)ppppuVar4 + -8) = puVar31;
        if ((auVar32._8_4_ == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
          return uVar12;
        }
        uVar14 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
        /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,auVar32._8_8_);
        unaff_x20 = *(long *)((long)ppppuVar4 + -0x20);
        piVar19 = *(int **)((long)ppppuVar4 + -0x18);
        unaff_x22 = *(ulong *)((long)ppppuVar4 + -0x30);
        unaff_x21 = *(ulong *)((long)ppppuVar4 + -0x28);
        puVar5 = *(undefined1 **)((long)ppppuVar4 + -0x10);
        puVar31 = *(undefined **)((long)ppppuVar4 + -8);
      } while( true );
    }
    uVar18 = *piVar19 + (int)uVar12;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = puStack_30;
    unaff_x30 = puStack_28;
  }
  else {
    uVar18 = *param_1 + (int)uVar12;
    param_1 = unaff_x19;
  }
  piVar19 = (int *)(ulong)uVar18;
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x20);
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(int **)((long)register0x00000008 + -0x18) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  pppuVar26 = (undefined1 ***)((long)register0x00000008 + -0x10);
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar21,piVar19,1);
  if ((*(long *)(lVar21 + 0x10) == 0) ||
     (lVar22 = *(long *)(*(long *)(lVar21 + 0x10) + 0x10), lVar22 == 0)) {
    func_0x00f78af4();
  }
  else if (uVar18 < *(uint *)(lVar22 + 0x18)) {
    return (long)*(char *)(lVar22 + (int)uVar18 + 0x20);
  }
  uVar14 = func_0x00f78b24();
  puVar31 = &FlatBuffers_ByteBuffer__Get;
  auVar33 = func_0x00f78ac0(uVar14,0);
  unaff_x20 = lVar21;
code_r0x016cccfc:
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(int **)(puVar2 + -0x18) = piVar19;
  *(undefined1 ****)(puVar2 + -0x10) = pppuVar26;
  *(undefined **)(puVar2 + -8) = puVar31;
  uVar14 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar33._0_8_,auVar33._8_8_,1);
  lVar21 = *(long *)(auVar33._0_8_ + 0x10);
  if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x10), lVar21 == 0)) {
    func_0x00f78af4();
  }
  else if (auVar33._8_4_ < *(uint *)(lVar21 + 0x18)) {
    return (ulong)*(byte *)(lVar21 + (int)auVar33._8_4_ + 0x20);
  }
  uVar15 = func_0x00f78b24();
  auVar34 = func_0x00f78ac0(uVar15,0);
  *(ulong *)(puVar2 + -0x50) = unaff_x22;
  *(ulong *)(puVar2 + -0x48) = unaff_x21;
  *(undefined1 (*) [16])(puVar2 + -0x40) = auVar33;
  *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
  plVar16 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar21 = *(long *)(auVar34._0_8_ + 0x10);
  if ((lVar21 != 0) && (plVar16 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(*plVar16 + 0x348))
                       (plVar16,*(undefined8 *)(lVar21 + 0x10),auVar34._8_8_,uVar14,
                        *(undefined8 *)(*plVar16 + 0x350));
    return uVar12;
  }
  auVar33 = func_0x00f78af4();
  *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x30;
  *(undefined **)(puVar2 + -0x58) = &FlatBuffers_ByteBuffer__GetShort;
  sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar33._0_8_,auVar33._8_8_,2);
  return (ulong)(uint)(int)sVar6;
}



// ============================================================
// RVA: 0x166b9f4 | Core.Services.GetLeaderboardScoresRequest.get_TimeScope
// ============================================================

/* WARNING: Possible PIC construction at 0x0166ba80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166badc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166baf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166bb0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166bb24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0166bb10) */
/* WARNING: Removing unreachable block (ram,0x0166baf8) */
/* WARNING: Removing unreachable block (ram,0x0166bae0) */
/* WARNING: Removing unreachable block (ram,0x0166ba84) */
/* WARNING: Removing unreachable block (ram,0x0166bb28) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_GetLeaderboardScoresRequest__get_TimeScope
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,ulong param_6,ulong param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 ****ppppuVar4;
  undefined1 *puVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  uint uVar18;
  int *piVar19;
  dword *pdVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar25;
  undefined1 ***pppuVar26;
  undefined1 **ppuVar27;
  undefined1 ****ppppuVar28;
  undefined8 ***pppuVar29;
  undefined *puVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  ulong auStack_1a0 [4];
  undefined1 auStack_180 [12];
  int iStack_174;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 **ppuStack_150;
  undefined *puStack_148;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 ***pppuStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0xc,0);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  lVar21 = *(long *)(param_1 + 2);
  if (lVar21 != 0) {
    uVar18 = *param_1 + (int)uVar12;
    piVar19 = (int *)(ulong)uVar18;
    puVar2 = &stack0xffffffffffffffe0;
    ppuVar27 = (undefined1 **)&stack0xfffffffffffffff0;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar21,piVar19,1);
    if ((*(long *)(lVar21 + 0x10) == 0) ||
       (lVar22 = *(long *)(*(long *)(lVar21 + 0x10) + 0x10), lVar22 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar18 < *(uint *)(lVar22 + 0x18)) {
      return (long)*(char *)(lVar22 + (int)uVar18 + 0x20);
    }
    uVar14 = func_0x00f78b24();
    puVar30 = &FlatBuffers_ByteBuffer__Get;
    auVar32 = func_0x00f78ac0(uVar14,0);
    unaff_x20 = lVar21;
code_r0x016cccfc:
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(int **)(puVar2 + -0x18) = piVar19;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar27;
    *(undefined **)(puVar2 + -8) = puVar30;
    uVar14 = 1;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar32._0_8_,auVar32._8_8_,1);
    lVar21 = *(long *)(auVar32._0_8_ + 0x10);
    if ((lVar21 == 0) || (lVar21 = *(long *)(lVar21 + 0x10), lVar21 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar32._8_4_ < *(uint *)(lVar21 + 0x18)) {
      return (ulong)*(byte *)(lVar21 + (int)auVar32._8_4_ + 0x20);
    }
    uVar15 = func_0x00f78b24();
    auVar33 = func_0x00f78ac0(uVar15,0);
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(ulong *)(puVar2 + -0x48) = unaff_x21;
    *(undefined1 (*) [16])(puVar2 + -0x40) = auVar32;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
    plVar16 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
    lVar21 = *(long *)(auVar33._0_8_ + 0x10);
    if ((lVar21 != 0) && (plVar16 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (**(code **)(*plVar16 + 0x348))
                         (plVar16,*(undefined8 *)(lVar21 + 0x10),auVar33._8_8_,uVar14,
                          *(undefined8 *)(*plVar16 + 0x350));
      return uVar12;
    }
    auVar32 = func_0x00f78af4();
    *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x30;
    *(undefined **)(puVar2 + -0x58) = &FlatBuffers_ByteBuffer__GetShort;
    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar32._0_8_,auVar32._8_8_,2);
    return (ulong)(uint)(int)sVar6;
  }
  piVar19 = (int *)func_0x00f78af4();
  puVar2 = &stack0xffffffffffffffc0;
  puStack_28 = &Core_Services_GetLeaderboardScoresRequest__get_PreviousOccurrence;
  ppuVar27 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar19,0xe,0);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  if (*(long *)(piVar19 + 2) != 0) {
    auVar32._8_4_ = *piVar19 + (int)uVar12;
    auVar32._0_8_ = *(long *)(piVar19 + 2);
    auVar32._12_4_ = 0;
    puVar30 = &UNK_0166ba84;
    goto code_r0x016cccfc;
  }
  piVar13 = (int *)func_0x00f78af4();
  ppppuVar4 = (undefined1 ****)&stack0xffffffffffffff70;
  puVar3 = &stack0xffffffffffffff70;
  puStack_48 = &Core_Services_GetLeaderboardScoresRequest__CreateGetLeaderboardScoresRequest;
  pppuVar26 = &ppuStack_50;
  ppuStack_50 = ppuVar27;
  if (piVar13 != (int *)0x0) {
    puVar30 = &UNK_0166bae0;
    piVar19 = piVar13;
    unaff_x21 = param_6;
    unaff_x22 = param_7;
code_r0x016ce2a4:
    uVar14 = 0;
    ppppuVar4 = (undefined1 ****)(puVar3 + -0x30);
    *(ulong *)(puVar3 + -0x30) = unaff_x22;
    *(ulong *)(puVar3 + -0x28) = unaff_x21;
    *(int **)(puVar3 + -0x20) = piVar19;
    *(undefined8 *)(puVar3 + -0x18) = param_5;
    *(undefined1 ****)(puVar3 + -0x10) = pppuVar26;
    *(undefined **)(puVar3 + -8) = puVar30;
    unaff_x20 = 6;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar13);
    if (*(long *)(piVar13 + 10) != 0) {
      if (*(int *)(*(long *)(piVar13 + 10) + 0x18) < 6) {
        uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,6);
        *(undefined8 *)(piVar13 + 10) = uVar14;
      }
      piVar13[0xc] = 6;
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar13);
      piVar13[0xd] = (int)uVar12;
      return uVar12;
    }
    auVar33 = func_0x00f78af4();
    piVar19 = piVar13;
    puVar5 = puVar3 + -0x10;
    puVar30 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  puVar30 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMax;
  auVar32 = func_0x00f78af4();
  if (auVar32._0_8_ == 0) {
    ppppuVar4 = &pppuStack_a0;
    ppppuVar28 = &pppuStack_a0;
    puStack_98 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMax;
    puVar30 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMin;
    pppuStack_a0 = pppuVar26;
    auVar32 = func_0x00f78af4();
    if (auVar32._0_8_ == 0) {
      puStack_a8 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMin;
      puStack_b0 = (undefined1 *)&pppuStack_a0;
      auVar32 = func_0x00f78af4();
      uVar14 = auVar32._8_8_;
      uVar12 = auVar32._0_8_;
      if (uVar12 != 0) {
        param_4 = 0;
        puStack_b8 = &Core_Services_GetLeaderboardScoresRequest__AddId;
        if ((auVar32._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
          return uVar12;
        }
        puStack_c0 = (undefined1 *)&puStack_b0;
        /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar12,uVar14,uVar14,0,0);
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar12;
        ppppuVar4 = (undefined1 ****)&puStack_b0;
        puVar5 = puStack_c0;
        puVar30 = puStack_b8;
        goto code_r0x016ce380;
      }
      ppppuVar4 = (undefined1 ****)&puStack_c0;
      ppuVar27 = &puStack_c0;
      puStack_b8 = &Core_Services_GetLeaderboardScoresRequest__AddId;
      puVar30 = &Core_Services_GetLeaderboardScoresRequest__AddPreviousOccurrence;
      puStack_c0 = (undefined1 *)&puStack_b0;
      auVar31 = func_0x00f78af4();
      if (auVar31._0_8_ != 0) {
        puVar5 = (undefined1 *)((long)&MACH_HEADER.cputype + 1);
        param_4 = 0;
        goto code_r0x016ce420;
      }
      ppppuVar4 = (undefined1 ****)&stack0xffffffffffffff30;
      puVar30 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
      auVar32 = func_0x00f78af4();
      if (auVar32._0_8_ == 0) {
        ppppuVar4 = (undefined1 ****)&puStack_e0;
        puStack_d8 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
        puVar30 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
        puStack_e0 = &stack0xffffffffffffff30;
        auVar32 = func_0x00f78af4();
        if (auVar32._0_8_ == 0) {
          puStack_e8 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
          puStack_f0 = (undefined1 *)&puStack_e0;
          lVar21 = func_0x00f78af4();
          puVar3 = &stack0xfffffffffffffef0;
          puStack_f8 = &Core_Services_GetLeaderboardScoresRequest__EndGetLeaderboardScoresRequest;
          pppuVar26 = &ppuStack_100;
          piVar19 = (int *)0x3eb5000;
          ppuStack_100 = &puStack_f0;
          if ((bRam0000000003eb58c3 & 1) == 0) {
            ppuStack_100 = &puStack_f0;
            func_0x00f78a20(0x3d3f0a8);
            bRam0000000003eb58c3 = 1;
          }
          if (lVar21 == 0) {
            puVar30 = &Core_Services_GetLeaderboardScoresRequest__StartGetLeaderboardScoresRequest;
            piVar13 = (int *)func_0x00f78af4();
            if (piVar13 == (int *)0x0) {
              lVar21 = func_0x00f78af4();
              return *(ulong *)(lVar21 + 8);
            }
            param_5 = 0;
            goto code_r0x016ce2a4;
          }
          uVar12 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar21 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar21,0);
            uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar21);
            unaff_x21 = (ulong)*(uint *)(lVar21 + 0x30);
            uVar18 = *(uint *)(lVar21 + 0x30) - 1;
            if (-2 < (int)uVar18) {
              uVar18 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar18;
            do {
              uVar1 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar1;
              iVar24 = (int)uVar12;
              if ((int)uVar1 < 0) goto code_r0x016ceb30;
              lVar22 = *(long *)(lVar21 + 0x28);
              if (lVar22 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar22 + 0x18) <= uVar1) goto code_r0x016ced88;
            } while (*(int *)(lVar22 + (ulong)uVar1 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar25 = unaff_x22 - 8;
              if (*(uint *)(lVar22 + 0x18) <= uVar25) goto code_r0x016ced88;
              iVar10 = *(int *)(lVar22 + unaff_x22 * 4);
              sVar6 = 0;
              if (iVar10 != 0) {
                sVar6 = (short)uVar12 - (short)iVar10;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar21,(int)sVar6);
              lVar22 = *(long *)(lVar21 + 0x28);
              if (lVar22 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar22 + 0x18) <= uVar25) goto code_r0x016ced88;
              *(undefined4 *)(lVar22 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar18 = uVar1;
            } while (0 < (long)uVar25);
code_r0x016ceb30:
            uVar9 = *(undefined4 *)(lVar21 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar21,(int)(short)((short)uVar12 - (short)uVar9));
            uVar18 = uVar18 * 2 + 6;
            unaff_x21 = (ulong)uVar18;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar21,(int)(short)uVar18);
            unaff_x22 = (ulong)*(uint *)(lVar21 + 0x40);
            if (0 < (int)*(uint *)(lVar21 + 0x40)) {
              uVar25 = 0;
              do {
                lVar22 = *(long *)(lVar21 + 0x18);
                if (((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) ||
                   (lVar23 = *(long *)(lVar21 + 0x38), lVar23 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar23 + 0x18) <= uVar25) goto code_r0x016ced88;
                uVar1 = *(int *)(*(long *)(lVar22 + 0x10) + 0x18) -
                        *(int *)(lVar23 + uVar25 * 4 + 0x20);
                unaff_x21 = (ulong)uVar1;
                uVar18 = *(uint *)(lVar21 + 0x10);
                unaff_x22 = (ulong)uVar18;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar22,unaff_x21,2);
                if (*(long *)(lVar21 + 0x18) == 0) goto code_r0x016ced84;
                sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar21 + 0x18),unaff_x22,2);
                if (sVar6 == sVar7) {
                  if (sVar6 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar21 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar25) goto code_r0x016ced88;
                    iVar10 = *(int *)(unaff_x21 + uVar25 * 4 + 0x20);
                    if (iVar10 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar21 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar21 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar24;
                    *(int *)(lVar21 + 0x10) = iVar11;
                    iVar10 = iVar10 - iVar24;
                    goto code_r0x016ced3c;
                  }
                  iVar10 = 2;
                  while( true ) {
                    if (*(long *)(lVar21 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar21 + 0x18),uVar1 + iVar10,2);
                    if (*(long *)(lVar21 + 0x18) == 0) goto code_r0x016ced84;
                    sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar21 + 0x18),uVar18 + iVar10,2);
                    if (sVar7 != sVar8) break;
                    iVar10 = iVar10 + 2;
                    if (sVar6 <= iVar10) goto code_r0x016cec64;
                  }
                }
                uVar25 = uVar25 + 1;
                unaff_x22 = (ulong)*(int *)(lVar21 + 0x40);
              } while ((long)uVar25 < (long)unaff_x22);
            }
            unaff_x21 = *(ulong *)(lVar21 + 0x38);
            if (unaff_x21 == 0) {
code_r0x016ced84:
              func_0x00f78af4();
            }
            else {
code_r0x016cecac:
              if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                lVar22 = *(long *)(lVar21 + 0x38);
                if (lVar22 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar22,unaff_x21,*(undefined4 *)(lVar22 + 0x18),0);
                *(ulong *)(lVar21 + 0x38) = unaff_x21;
                unaff_x22 = (ulong)*(uint *)(lVar21 + 0x40);
              }
              uVar18 = (uint)unaff_x22;
              *(uint *)(lVar21 + 0x40) = uVar18 + 1;
              uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar21);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar18 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar18 * 4 + 0x20) = uVar9;
                unaff_x21 = *(ulong *)(lVar21 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar21);
                  iVar11 = iVar11 - iVar24;
                  iVar10 = iVar10 - iVar24;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar11,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar11,4,(long)iVar10);
                  *(undefined4 *)(lVar21 + 0x30) = 0xffffffff;
                  return uVar12;
                }
                goto code_r0x016ced84;
              }
            }
code_r0x016ced88:
            uVar14 = func_0x00f78b24();
            func_0x00f78ac0(uVar14,0);
          }
          func_0x00f78a24(0x3d22a38);
          uVar14 = func_0x00f78aec();
          uVar15 = func_0x00f78a24(0x3d6cea8);
          iVar24 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar15);
          uVar15 = func_0x00f78a24(0x3d56a30);
          auVar34 = func_0x00f78ac0(uVar14,uVar15);
          puStack_148 = &FlatBuffers_FlatBufferBuilder__Required;
          pppuVar29 = &ppuStack_150;
          lVar21 = *(long *)(auVar34._0_8_ + 0x18);
          iStack_174 = iVar24;
          uStack_170 = unaff_x22;
          uStack_168 = unaff_x21;
          uStack_160 = uVar12;
          uStack_158 = uVar14;
          ppuStack_150 = &ppuStack_100;
          if ((lVar21 != 0) && (*(long *)(lVar21 + 0x10) != 0)) {
            iVar10 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) - auVar34._8_4_;
            iVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,iVar10,4);
            lVar21 = *(long *)(auVar34._0_8_ + 0x18);
            if (lVar21 != 0) {
              uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,(iVar10 - iVar11) + iVar24,2);
              if ((uVar12 & 0xffff) != 0) {
                return uVar12;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_174,0);
          uVar15 = func_0x00f78a24(0x3d6ce88);
          uVar17 = func_0x00f78a24(0x3d66338);
          lVar21 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar14,uVar17,0);
          func_0x00f78a24(0x3d22a38);
          uVar12 = func_0x00f78aec();
          uVar15 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar21);
          uVar14 = func_0x00f78a24(0x3d56a50);
          puVar30 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar32 = func_0x00f78ac0(uVar12,uVar14);
          puVar5 = auStack_180;
          do {
            uVar25 = auVar32._8_8_;
            lVar22 = auVar32._0_8_;
            *(ulong *)(puVar5 + -0x20) = uVar12;
            *(long *)(puVar5 + -0x18) = lVar21;
            *(undefined8 ****)(puVar5 + -0x10) = pppuVar29;
            *(undefined **)(puVar5 + -8) = puVar30;
            pppuVar29 = (undefined8 ***)(puVar5 + -0x10);
            if ((int)uVar15 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar22,*(undefined4 *)(lVar22 + 0x20),4);
              uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar22,uVar25);
code_r0x016cef70:
              if (*(long *)(lVar22 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar22 + 0x18) + 0x18) = *(undefined4 *)(lVar22 + 0x10);
                return uVar12;
              }
            }
            else if (lVar22 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar22,*(undefined4 *)(lVar22 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar22,uVar25);
              if ((*(long *)(lVar22 + 0x18) != 0) &&
                 (lVar21 = *(long *)(*(long *)(lVar22 + 0x18) + 0x10), lVar21 != 0)) {
                uVar25 = (ulong)(uint)(*(int *)(lVar21 + 0x18) - *(int *)(lVar22 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar22,4,0);
                uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar22,uVar25);
                goto code_r0x016cef70;
              }
            }
            puVar30 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar32 = func_0x00f78af4();
            uVar15 = 0;
            puVar5 = puVar5 + -0x20;
            lVar21 = lVar22;
            uVar12 = uVar25;
          } while( true );
        }
        pdVar20 = (dword *)((long)&MACH_HEADER.magic + 3);
      }
      else {
        pdVar20 = &MACH_HEADER.cputype;
      }
      uVar12 = auVar32._0_8_;
      auVar33._8_8_ = pdVar20;
      auVar33._0_8_ = uVar12;
      param_4 = 0;
      *(ulong *)((long)ppppuVar4 + -0x30) = unaff_x22;
      *(ulong *)((long)ppppuVar4 + -0x28) = unaff_x21;
      *(long *)((long)ppppuVar4 + -0x20) = unaff_x20;
      *(int **)((long)ppppuVar4 + -0x18) = piVar19;
      *(undefined1 *****)((long)ppppuVar4 + -0x10) = ppppuVar4;
      *(undefined **)((long)ppppuVar4 + -8) = puVar30;
      if ((auVar32._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
        return uVar12;
      }
      uVar14 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar12,auVar32._8_8_);
      puVar5 = *(undefined1 **)((long)ppppuVar4 + -0x10);
      puVar30 = *(undefined **)((long)ppppuVar4 + -8);
      unaff_x20 = *(long *)((long)ppppuVar4 + -0x20);
      piVar19 = *(int **)((long)ppppuVar4 + -0x18);
      unaff_x22 = *(ulong *)((long)ppppuVar4 + -0x30);
      unaff_x21 = *(ulong *)((long)ppppuVar4 + -0x28);
      goto code_r0x016ce380;
    }
    puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
    ppppuVar28 = (undefined1 ****)pppuVar26;
  }
  uVar12 = auVar32._0_8_;
  auVar33._8_8_ = puVar5;
  auVar33._0_8_ = uVar12;
  param_4 = 0;
  *(ulong *)((long)ppppuVar4 + -0x30) = unaff_x22;
  *(ulong *)((long)ppppuVar4 + -0x28) = unaff_x21;
  *(long *)((long)ppppuVar4 + -0x20) = unaff_x20;
  *(int **)((long)ppppuVar4 + -0x18) = piVar19;
  *(undefined1 *****)((long)ppppuVar4 + -0x10) = ppppuVar28;
  *(undefined **)((long)ppppuVar4 + -8) = puVar30;
  if ((auVar32._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
    return uVar12;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar12,auVar32._8_8_);
  unaff_x20 = *(long *)((long)ppppuVar4 + -0x20);
  piVar19 = *(int **)((long)ppppuVar4 + -0x18);
  unaff_x22 = *(ulong *)((long)ppppuVar4 + -0x30);
  unaff_x21 = *(ulong *)((long)ppppuVar4 + -0x28);
  puVar5 = *(undefined1 **)((long)ppppuVar4 + -0x10);
  puVar30 = *(undefined **)((long)ppppuVar4 + -8);
code_r0x016ce380:
  do {
    piVar13 = auVar33._8_8_;
    *(long *)((long)ppppuVar4 + -0x20) = unaff_x20;
    *(int **)((long)ppppuVar4 + -0x18) = piVar19;
    *(undefined1 **)((long)ppppuVar4 + -0x10) = puVar5;
    *(undefined **)((long)ppppuVar4 + -8) = puVar30;
    ppuVar27 = (undefined1 **)((long)ppppuVar4 + -0x10);
    uVar18 = auVar33._8_4_;
    if ((int)uVar18 < *(int *)(auVar33._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar33._0_8_ + 0x28);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar18 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar18 * 4 + 0x20) = (int)uVar12;
        return uVar12;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      piVar13 = (int *)func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6ceb8);
      uVar14 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar13,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(piVar13,uVar15);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar15 = func_0x00f78b24();
    puVar30 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar32 = func_0x00f78ac0(uVar15,0);
    puVar5 = auVar32._8_8_;
    auVar31._8_8_ = uVar14;
    auVar31._0_8_ = auVar32._0_8_;
    ppppuVar4 = (undefined1 ****)((long)ppppuVar4 + -0x20);
    piVar19 = piVar13;
code_r0x016ce420:
    uVar12 = auVar31._0_8_;
    auVar33._8_8_ = puVar5;
    auVar33._0_8_ = uVar12;
    *(ulong *)((long)ppppuVar4 + -0x30) = unaff_x22;
    *(ulong *)((long)ppppuVar4 + -0x28) = unaff_x21;
    *(long *)((long)ppppuVar4 + -0x20) = unaff_x20;
    *(int **)((long)ppppuVar4 + -0x18) = piVar19;
    *(undefined1 ***)((long)ppppuVar4 + -0x10) = ppuVar27;
    *(undefined **)((long)ppppuVar4 + -8) = puVar30;
    if ((auVar31._8_4_ == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,auVar31._8_8_);
    unaff_x20 = *(long *)((long)ppppuVar4 + -0x20);
    piVar19 = *(int **)((long)ppppuVar4 + -0x18);
    unaff_x22 = *(ulong *)((long)ppppuVar4 + -0x30);
    unaff_x21 = *(ulong *)((long)ppppuVar4 + -0x28);
    puVar5 = *(undefined1 **)((long)ppppuVar4 + -0x10);
    puVar30 = *(undefined **)((long)ppppuVar4 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x166ba48 | Core.Services.GetLeaderboardScoresRequest.get_PreviousOccurrence
// ============================================================

/* WARNING: Possible PIC construction at 0x0166badc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166baf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166bb0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166bb24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0166bb10) */
/* WARNING: Removing unreachable block (ram,0x0166baf8) */
/* WARNING: Removing unreachable block (ram,0x0166bae0) */
/* WARNING: Removing unreachable block (ram,0x0166bb28) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_GetLeaderboardScoresRequest__get_PreviousOccurrence
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,ulong param_6,ulong param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 ***pppuVar3;
  undefined1 *puVar4;
  short sVar5;
  int iVar8;
  ulong uVar12;
  int *piVar13;
  short sVar6;
  short sVar7;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  dword *pdVar19;
  long lVar20;
  long lVar21;
  long unaff_x20;
  int *piVar22;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar23;
  undefined1 **ppuVar24;
  undefined1 ***pppuVar25;
  undefined *puVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  ulong auStack_180 [4];
  undefined1 auStack_160 [12];
  int iStack_154;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined1 **ppuStack_130;
  undefined *puStack_128;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0xe,0);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  if (*(long *)(param_1 + 2) != 0) {
    iVar8 = /*FlatBuffers.ByteBuffer$$Get*/ func_0x016cccfc(*(long *)(param_1 + 2),*param_1 + (int)uVar12,0);
    return (ulong)(iVar8 != 0);
  }
  piVar13 = (int *)func_0x00f78af4();
  pppuVar3 = (undefined1 ***)&stack0xffffffffffffff90;
  puVar2 = &stack0xffffffffffffff90;
  puStack_28 = &Core_Services_GetLeaderboardScoresRequest__CreateGetLeaderboardScoresRequest;
  ppuVar24 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if (piVar13 != (int *)0x0) {
    puVar26 = &UNK_0166bae0;
    piVar22 = piVar13;
    unaff_x21 = param_6;
    unaff_x22 = param_7;
code_r0x016ce2a4:
    uVar14 = 0;
    pppuVar3 = (undefined1 ***)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(int **)(puVar2 + -0x20) = piVar22;
    *(undefined8 *)(puVar2 + -0x18) = param_5;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar24;
    *(undefined **)(puVar2 + -8) = puVar26;
    unaff_x20 = 6;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar13);
    if (*(long *)(piVar13 + 10) != 0) {
      if (*(int *)(*(long *)(piVar13 + 10) + 0x18) < 6) {
        uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,6);
        *(undefined8 *)(piVar13 + 10) = uVar14;
      }
      piVar13[0xc] = 6;
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar13);
      piVar13[0xd] = (int)uVar12;
      return uVar12;
    }
    auVar27 = func_0x00f78af4();
    param_1 = piVar13;
    puVar4 = puVar2 + -0x10;
    puVar26 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  puVar26 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMax;
  auVar28 = func_0x00f78af4();
  if (auVar28._0_8_ == 0) {
    pppuVar3 = &ppuStack_80;
    pppuVar25 = &ppuStack_80;
    puStack_78 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMax;
    puVar26 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMin;
    ppuStack_80 = ppuVar24;
    auVar28 = func_0x00f78af4();
    if (auVar28._0_8_ == 0) {
      puStack_88 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMin;
      puStack_90 = (undefined1 *)&ppuStack_80;
      auVar28 = func_0x00f78af4();
      uVar14 = auVar28._8_8_;
      uVar12 = auVar28._0_8_;
      if (uVar12 != 0) {
        param_4 = 0;
        puStack_98 = &Core_Services_GetLeaderboardScoresRequest__AddId;
        if ((auVar28._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
          return uVar12;
        }
        puStack_a0 = (undefined1 *)&puStack_90;
        /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar12,uVar14,uVar14,0,0);
        auVar27._8_8_ = 0;
        auVar27._0_8_ = uVar12;
        pppuVar3 = (undefined1 ***)&puStack_90;
        puVar4 = puStack_a0;
        puVar26 = puStack_98;
        goto code_r0x016ce380;
      }
      pppuVar3 = (undefined1 ***)&puStack_a0;
      ppuVar24 = &puStack_a0;
      puStack_98 = &Core_Services_GetLeaderboardScoresRequest__AddId;
      puVar26 = &Core_Services_GetLeaderboardScoresRequest__AddPreviousOccurrence;
      puStack_a0 = (undefined1 *)&puStack_90;
      auVar28 = func_0x00f78af4();
      if (auVar28._0_8_ != 0) {
        puVar4 = (undefined1 *)((long)&MACH_HEADER.cputype + 1);
        param_4 = 0;
        goto code_r0x016ce420;
      }
      pppuVar3 = (undefined1 ***)&stack0xffffffffffffff50;
      puVar26 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
      auVar28 = func_0x00f78af4();
      if (auVar28._0_8_ == 0) {
        pppuVar3 = (undefined1 ***)&puStack_c0;
        puStack_b8 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
        puVar26 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
        puStack_c0 = &stack0xffffffffffffff50;
        auVar28 = func_0x00f78af4();
        if (auVar28._0_8_ == 0) {
          puStack_c8 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
          puStack_d0 = (undefined1 *)&puStack_c0;
          lVar16 = func_0x00f78af4();
          puVar2 = &stack0xffffffffffffff10;
          puStack_d8 = &Core_Services_GetLeaderboardScoresRequest__EndGetLeaderboardScoresRequest;
          ppuVar24 = &puStack_e0;
          piVar22 = (int *)0x3eb5000;
          puStack_e0 = (undefined1 *)&puStack_d0;
          if ((bRam0000000003eb58c3 & 1) == 0) {
            puStack_e0 = (undefined1 *)&puStack_d0;
            func_0x00f78a20(0x3d3f0a8);
            bRam0000000003eb58c3 = 1;
          }
          if (lVar16 == 0) {
            puVar26 = &Core_Services_GetLeaderboardScoresRequest__StartGetLeaderboardScoresRequest;
            piVar13 = (int *)func_0x00f78af4();
            if (piVar13 == (int *)0x0) {
              lVar16 = func_0x00f78af4();
              return *(ulong *)(lVar16 + 8);
            }
            param_5 = 0;
            goto code_r0x016ce2a4;
          }
          uVar12 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar16 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,0);
            uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
            unaff_x21 = (ulong)*(uint *)(lVar16 + 0x30);
            uVar18 = *(uint *)(lVar16 + 0x30) - 1;
            if (-2 < (int)uVar18) {
              uVar18 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar18;
            do {
              uVar1 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar1;
              iVar8 = (int)uVar12;
              if ((int)uVar1 < 0) goto code_r0x016ceb30;
              lVar20 = *(long *)(lVar16 + 0x28);
              if (lVar20 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
            } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar23 = unaff_x22 - 8;
              if (*(uint *)(lVar20 + 0x18) <= uVar23) goto code_r0x016ced88;
              iVar10 = *(int *)(lVar20 + unaff_x22 * 4);
              sVar5 = 0;
              if (iVar10 != 0) {
                sVar5 = (short)uVar12 - (short)iVar10;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)sVar5);
              lVar20 = *(long *)(lVar16 + 0x28);
              if (lVar20 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar20 + 0x18) <= uVar23) goto code_r0x016ced88;
              *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar18 = uVar1;
            } while (0 < (long)uVar23);
code_r0x016ceb30:
            uVar9 = *(undefined4 *)(lVar16 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)(short)((short)uVar12 - (short)uVar9));
            uVar18 = uVar18 * 2 + 6;
            unaff_x21 = (ulong)uVar18;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)(short)uVar18);
            unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
            if (0 < (int)*(uint *)(lVar16 + 0x40)) {
              uVar23 = 0;
              do {
                lVar20 = *(long *)(lVar16 + 0x18);
                if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                   (lVar21 = *(long *)(lVar16 + 0x38), lVar21 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar21 + 0x18) <= uVar23) goto code_r0x016ced88;
                uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                        *(int *)(lVar21 + uVar23 * 4 + 0x20);
                unaff_x21 = (ulong)uVar1;
                uVar18 = *(uint *)(lVar16 + 0x10);
                unaff_x22 = (ulong)uVar18;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),unaff_x22,2);
                if (sVar5 == sVar6) {
                  if (sVar5 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar16 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar23) goto code_r0x016ced88;
                    iVar10 = *(int *)(unaff_x21 + uVar23 * 4 + 0x20);
                    if (iVar10 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar16 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar8;
                    *(int *)(lVar16 + 0x10) = iVar11;
                    iVar10 = iVar10 - iVar8;
                    goto code_r0x016ced3c;
                  }
                  iVar10 = 2;
                  while( true ) {
                    if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x016ced84;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),uVar1 + iVar10,2);
                    if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),uVar18 + iVar10,2);
                    if (sVar6 != sVar7) break;
                    iVar10 = iVar10 + 2;
                    if (sVar5 <= iVar10) goto code_r0x016cec64;
                  }
                }
                uVar23 = uVar23 + 1;
                unaff_x22 = (ulong)*(int *)(lVar16 + 0x40);
              } while ((long)uVar23 < (long)unaff_x22);
            }
            unaff_x21 = *(ulong *)(lVar16 + 0x38);
            if (unaff_x21 == 0) {
code_r0x016ced84:
              func_0x00f78af4();
            }
            else {
code_r0x016cecac:
              if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                lVar20 = *(long *)(lVar16 + 0x38);
                if (lVar20 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                *(ulong *)(lVar16 + 0x38) = unaff_x21;
                unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
              }
              uVar18 = (uint)unaff_x22;
              *(uint *)(lVar16 + 0x40) = uVar18 + 1;
              uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar18 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar18 * 4 + 0x20) = uVar9;
                unaff_x21 = *(ulong *)(lVar16 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
                  iVar11 = iVar11 - iVar8;
                  iVar10 = iVar10 - iVar8;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar11,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar11,4,(long)iVar10);
                  *(undefined4 *)(lVar16 + 0x30) = 0xffffffff;
                  return uVar12;
                }
                goto code_r0x016ced84;
              }
            }
code_r0x016ced88:
            uVar14 = func_0x00f78b24();
            func_0x00f78ac0(uVar14,0);
          }
          func_0x00f78a24(0x3d22a38);
          uVar14 = func_0x00f78aec();
          uVar15 = func_0x00f78a24(0x3d6cea8);
          iVar8 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar15);
          uVar15 = func_0x00f78a24(0x3d56a30);
          auVar29 = func_0x00f78ac0(uVar14,uVar15);
          puStack_128 = &FlatBuffers_FlatBufferBuilder__Required;
          pppuVar3 = &ppuStack_130;
          lVar16 = *(long *)(auVar29._0_8_ + 0x18);
          iStack_154 = iVar8;
          uStack_150 = unaff_x22;
          uStack_148 = unaff_x21;
          uStack_140 = uVar12;
          uStack_138 = uVar14;
          ppuStack_130 = &puStack_e0;
          if ((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) {
            iVar10 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) - auVar29._8_4_;
            iVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,iVar10,4);
            lVar16 = *(long *)(auVar29._0_8_ + 0x18);
            if (lVar16 != 0) {
              uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,(iVar10 - iVar11) + iVar8,2);
              if ((uVar12 & 0xffff) != 0) {
                return uVar12;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_154,0);
          uVar15 = func_0x00f78a24(0x3d6ce88);
          uVar17 = func_0x00f78a24(0x3d66338);
          lVar16 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar14,uVar17,0);
          func_0x00f78a24(0x3d22a38);
          uVar12 = func_0x00f78aec();
          uVar15 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar16);
          uVar14 = func_0x00f78a24(0x3d56a50);
          puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar28 = func_0x00f78ac0(uVar12,uVar14);
          puVar4 = auStack_160;
          do {
            uVar23 = auVar28._8_8_;
            lVar20 = auVar28._0_8_;
            *(ulong *)(puVar4 + -0x20) = uVar12;
            *(long *)(puVar4 + -0x18) = lVar16;
            *(undefined1 ****)(puVar4 + -0x10) = pppuVar3;
            *(undefined **)(puVar4 + -8) = puVar26;
            pppuVar3 = (undefined1 ***)(puVar4 + -0x10);
            if ((int)uVar15 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
              uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar23);
code_r0x016cef70:
              if (*(long *)(lVar20 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) = *(undefined4 *)(lVar20 + 0x10);
                return uVar12;
              }
            }
            else if (lVar20 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar23);
              if ((*(long *)(lVar20 + 0x18) != 0) &&
                 (lVar16 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar16 != 0)) {
                uVar23 = (ulong)(uint)(*(int *)(lVar16 + 0x18) - *(int *)(lVar20 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar23);
                goto code_r0x016cef70;
              }
            }
            puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar28 = func_0x00f78af4();
            uVar15 = 0;
            puVar4 = puVar4 + -0x20;
            lVar16 = lVar20;
            uVar12 = uVar23;
          } while( true );
        }
        pdVar19 = (dword *)((long)&MACH_HEADER.magic + 3);
      }
      else {
        pdVar19 = &MACH_HEADER.cputype;
      }
      uVar12 = auVar28._0_8_;
      auVar27._8_8_ = pdVar19;
      auVar27._0_8_ = uVar12;
      param_4 = 0;
      *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
      *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
      *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
      *(int **)((long)pppuVar3 + -0x18) = param_1;
      *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar3;
      *(undefined **)((long)pppuVar3 + -8) = puVar26;
      if ((auVar28._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
        return uVar12;
      }
      uVar14 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar12,auVar28._8_8_);
      puVar4 = *(undefined1 **)((long)pppuVar3 + -0x10);
      puVar26 = *(undefined **)((long)pppuVar3 + -8);
      unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
      param_1 = *(int **)((long)pppuVar3 + -0x18);
      unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
      unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
      goto code_r0x016ce380;
    }
    puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
    pppuVar25 = (undefined1 ***)ppuVar24;
  }
  uVar12 = auVar28._0_8_;
  auVar27._8_8_ = puVar4;
  auVar27._0_8_ = uVar12;
  param_4 = 0;
  *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
  *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)pppuVar3 + -0x18) = param_1;
  *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar25;
  *(undefined **)((long)pppuVar3 + -8) = puVar26;
  if ((auVar28._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
    return uVar12;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar12,auVar28._8_8_);
  unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
  param_1 = *(int **)((long)pppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
  unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
  puVar4 = *(undefined1 **)((long)pppuVar3 + -0x10);
  puVar26 = *(undefined **)((long)pppuVar3 + -8);
code_r0x016ce380:
  do {
    piVar13 = auVar27._8_8_;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)pppuVar3 + -0x18) = param_1;
    *(undefined1 **)((long)pppuVar3 + -0x10) = puVar4;
    *(undefined **)((long)pppuVar3 + -8) = puVar26;
    ppuVar24 = (undefined1 **)((long)pppuVar3 + -0x10);
    uVar18 = auVar27._8_4_;
    if ((int)uVar18 < *(int *)(auVar27._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar27._0_8_ + 0x28);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar18 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar18 * 4 + 0x20) = (int)uVar12;
        return uVar12;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      piVar13 = (int *)func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6ceb8);
      uVar14 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar13,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(piVar13,uVar15);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar15 = func_0x00f78b24();
    puVar26 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar27 = func_0x00f78ac0(uVar15,0);
    puVar4 = auVar27._8_8_;
    auVar28._8_8_ = uVar14;
    auVar28._0_8_ = auVar27._0_8_;
    pppuVar3 = (undefined1 ***)((long)pppuVar3 + -0x20);
    param_1 = piVar13;
code_r0x016ce420:
    uVar12 = auVar28._0_8_;
    auVar27._8_8_ = puVar4;
    auVar27._0_8_ = uVar12;
    *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
    *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)pppuVar3 + -0x18) = param_1;
    *(undefined1 ***)((long)pppuVar3 + -0x10) = ppuVar24;
    *(undefined **)((long)pppuVar3 + -8) = puVar26;
    if ((auVar28._8_4_ == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,auVar28._8_8_);
    unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
    param_1 = *(int **)((long)pppuVar3 + -0x18);
    unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
    unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
    puVar4 = *(undefined1 **)((long)pppuVar3 + -0x10);
    puVar26 = *(undefined **)((long)pppuVar3 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x166ba9c | Core.Services.GetLeaderboardScoresRequest.CreateGetLeaderboardScoresRequest
// ============================================================

/* WARNING: Possible PIC construction at 0x0166badc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166baf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166bb0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166bb24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0166bb10) */
/* WARNING: Removing unreachable block (ram,0x0166baf8) */
/* WARNING: Removing unreachable block (ram,0x0166bae0) */
/* WARNING: Removing unreachable block (ram,0x0166bb28) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_GetLeaderboardScoresRequest__CreateGetLeaderboardScoresRequest
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,ulong param_6,ulong param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 ***pppuVar3;
  undefined1 *puVar4;
  short sVar5;
  undefined4 uVar8;
  long lVar11;
  short sVar6;
  short sVar7;
  int iVar9;
  int iVar10;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  long unaff_x19;
  int iVar17;
  long unaff_x20;
  long lVar18;
  ulong uVar19;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar20;
  undefined1 **ppuVar21;
  undefined1 ***pppuVar22;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  ulong auStack_160 [4];
  undefined1 auStack_140 [12];
  int iStack_134;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  
  pppuVar3 = (undefined1 ***)&stack0xffffffffffffffb0;
  puVar2 = &stack0xffffffffffffffb0;
  ppuVar21 = (undefined1 **)&stack0xfffffffffffffff0;
  if (param_1 != 0) {
    puVar23 = (undefined *)0x166bae0;
    lVar18 = param_1;
    unaff_x21 = param_6;
    unaff_x22 = param_7;
code_r0x016ce2a4:
    uVar12 = 0;
    pppuVar3 = (undefined1 ***)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = lVar18;
    *(undefined8 *)(puVar2 + -0x18) = param_5;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar21;
    *(undefined **)(puVar2 + -8) = puVar23;
    unaff_x20 = 6;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 6) {
        uVar12 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,6);
        *(undefined8 *)(param_1 + 0x28) = uVar12;
      }
      *(undefined4 *)(param_1 + 0x30) = 6;
      uVar19 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar19;
      return uVar19;
    }
    auVar24 = func_0x00f78af4();
    unaff_x19 = param_1;
    puVar4 = puVar2 + -0x10;
    puVar23 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  puVar23 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMax;
  auVar25 = func_0x00f78af4();
  if (auVar25._0_8_ == 0) {
    pppuVar3 = &ppuStack_60;
    pppuVar22 = &ppuStack_60;
    puStack_58 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMax;
    puVar23 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMin;
    ppuStack_60 = ppuVar21;
    auVar25 = func_0x00f78af4();
    if (auVar25._0_8_ == 0) {
      puStack_68 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMin;
      puStack_70 = (undefined1 *)&ppuStack_60;
      auVar25 = func_0x00f78af4();
      uVar12 = auVar25._8_8_;
      uVar19 = auVar25._0_8_;
      if (uVar19 != 0) {
        param_4 = 0;
        puStack_78 = &Core_Services_GetLeaderboardScoresRequest__AddId;
        if ((auVar25._8_4_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
          return uVar19;
        }
        puStack_80 = (undefined1 *)&puStack_70;
        /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar19,uVar12,uVar12,0,0);
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar19;
        pppuVar3 = (undefined1 ***)&puStack_70;
        puVar4 = puStack_80;
        puVar23 = puStack_78;
        goto code_r0x016ce380;
      }
      pppuVar3 = (undefined1 ***)&puStack_80;
      ppuVar21 = &puStack_80;
      puStack_78 = &Core_Services_GetLeaderboardScoresRequest__AddId;
      puVar23 = &Core_Services_GetLeaderboardScoresRequest__AddPreviousOccurrence;
      puStack_80 = (undefined1 *)&puStack_70;
      auVar25 = func_0x00f78af4();
      if (auVar25._0_8_ != 0) {
        uVar13 = 5;
        param_4 = 0;
        goto code_r0x016ce420;
      }
      pppuVar3 = (undefined1 ***)&stack0xffffffffffffff70;
      puVar23 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
      auVar25 = func_0x00f78af4();
      if (auVar25._0_8_ == 0) {
        pppuVar3 = (undefined1 ***)&puStack_a0;
        puStack_98 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
        puVar23 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
        puStack_a0 = &stack0xffffffffffffff70;
        auVar25 = func_0x00f78af4();
        if (auVar25._0_8_ == 0) {
          puStack_a8 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
          puStack_b0 = (undefined1 *)&puStack_a0;
          lVar11 = func_0x00f78af4();
          puVar2 = &stack0xffffffffffffff30;
          puStack_b8 = &Core_Services_GetLeaderboardScoresRequest__EndGetLeaderboardScoresRequest;
          ppuVar21 = &puStack_c0;
          lVar18 = 0x3eb5000;
          puStack_c0 = (undefined1 *)&puStack_b0;
          if ((bRam0000000003eb58c3 & 1) == 0) {
            puStack_c0 = (undefined1 *)&puStack_b0;
            func_0x00f78a20(0x3d3f0a8);
            bRam0000000003eb58c3 = 1;
          }
          if (lVar11 == 0) {
            puVar23 = &Core_Services_GetLeaderboardScoresRequest__StartGetLeaderboardScoresRequest;
            param_1 = func_0x00f78af4();
            if (param_1 == 0) {
              lVar18 = func_0x00f78af4();
              return *(ulong *)(lVar18 + 8);
            }
            param_5 = 0;
            goto code_r0x016ce2a4;
          }
          uVar19 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar11 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,0);
            uVar19 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
            unaff_x21 = (ulong)*(uint *)(lVar11 + 0x30);
            uVar15 = *(uint *)(lVar11 + 0x30) - 1;
            if (-2 < (int)uVar15) {
              uVar15 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar15;
            do {
              uVar1 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar1;
              iVar17 = (int)uVar19;
              if ((int)uVar1 < 0) goto code_r0x016ceb30;
              lVar18 = *(long *)(lVar11 + 0x28);
              if (lVar18 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar18 + 0x18) <= uVar1) goto code_r0x016ced88;
            } while (*(int *)(lVar18 + (ulong)uVar1 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar20 = unaff_x22 - 8;
              if (*(uint *)(lVar18 + 0x18) <= uVar20) goto code_r0x016ced88;
              iVar9 = *(int *)(lVar18 + unaff_x22 * 4);
              sVar5 = 0;
              if (iVar9 != 0) {
                sVar5 = (short)uVar19 - (short)iVar9;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar5);
              lVar18 = *(long *)(lVar11 + 0x28);
              if (lVar18 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar18 + 0x18) <= uVar20) goto code_r0x016ced88;
              *(undefined4 *)(lVar18 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar15 = uVar1;
            } while (0 < (long)uVar20);
code_r0x016ceb30:
            uVar8 = *(undefined4 *)(lVar11 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)((short)uVar19 - (short)uVar8));
            uVar15 = uVar15 * 2 + 6;
            unaff_x21 = (ulong)uVar15;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)uVar15);
            unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
            if (0 < (int)*(uint *)(lVar11 + 0x40)) {
              uVar20 = 0;
              do {
                lVar18 = *(long *)(lVar11 + 0x18);
                if (((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) ||
                   (lVar16 = *(long *)(lVar11 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar16 + 0x18) <= uVar20) goto code_r0x016ced88;
                uVar1 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) -
                        *(int *)(lVar16 + uVar20 * 4 + 0x20);
                unaff_x21 = (ulong)uVar1;
                uVar15 = *(uint *)(lVar11 + 0x10);
                unaff_x22 = (ulong)uVar15;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,unaff_x21,2);
                if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
                if (sVar5 == sVar6) {
                  if (sVar5 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar11 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar20) goto code_r0x016ced88;
                    iVar9 = *(int *)(unaff_x21 + uVar20 * 4 + 0x20);
                    if (iVar9 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar11 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar17;
                    *(int *)(lVar11 + 0x10) = iVar10;
                    iVar9 = iVar9 - iVar17;
                    goto code_r0x016ced3c;
                  }
                  iVar9 = 2;
                  while( true ) {
                    if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar1 + iVar9,2);
                    if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar15 + iVar9,2);
                    if (sVar6 != sVar7) break;
                    iVar9 = iVar9 + 2;
                    if (sVar5 <= iVar9) goto code_r0x016cec64;
                  }
                }
                uVar20 = uVar20 + 1;
                unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
              } while ((long)uVar20 < (long)unaff_x22);
            }
            unaff_x21 = *(ulong *)(lVar11 + 0x38);
            if (unaff_x21 == 0) {
code_r0x016ced84:
              func_0x00f78af4();
            }
            else {
code_r0x016cecac:
              if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                lVar18 = *(long *)(lVar11 + 0x38);
                if (lVar18 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar18,unaff_x21,*(undefined4 *)(lVar18 + 0x18),0);
                *(ulong *)(lVar11 + 0x38) = unaff_x21;
                unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
              }
              uVar15 = (uint)unaff_x22;
              *(uint *)(lVar11 + 0x40) = uVar15 + 1;
              uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar15 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar15 * 4 + 0x20) = uVar8;
                unaff_x21 = *(ulong *)(lVar11 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                  iVar10 = iVar10 - iVar17;
                  iVar9 = iVar9 - iVar17;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                  *(undefined4 *)(lVar11 + 0x30) = 0xffffffff;
                  return uVar19;
                }
                goto code_r0x016ced84;
              }
            }
code_r0x016ced88:
            uVar12 = func_0x00f78b24();
            func_0x00f78ac0(uVar12,0);
          }
          func_0x00f78a24(0x3d22a38);
          uVar12 = func_0x00f78aec();
          uVar13 = func_0x00f78a24(0x3d6cea8);
          iVar17 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,uVar13);
          uVar13 = func_0x00f78a24(0x3d56a30);
          auVar26 = func_0x00f78ac0(uVar12,uVar13);
          puStack_108 = &FlatBuffers_FlatBufferBuilder__Required;
          pppuVar3 = &ppuStack_110;
          lVar18 = *(long *)(auVar26._0_8_ + 0x18);
          iStack_134 = iVar17;
          uStack_130 = unaff_x22;
          uStack_128 = unaff_x21;
          uStack_120 = uVar19;
          uStack_118 = uVar12;
          ppuStack_110 = &puStack_c0;
          if ((lVar18 != 0) && (*(long *)(lVar18 + 0x10) != 0)) {
            iVar9 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) - auVar26._8_4_;
            iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,iVar9,4);
            lVar18 = *(long *)(auVar26._0_8_ + 0x18);
            if (lVar18 != 0) {
              uVar19 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,(iVar9 - iVar10) + iVar17,2);
              if ((uVar19 & 0xffff) != 0) {
                return uVar19;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_134,0);
          uVar13 = func_0x00f78a24(0x3d6ce88);
          uVar14 = func_0x00f78a24(0x3d66338);
          lVar18 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar12,uVar14,0);
          func_0x00f78a24(0x3d22a38);
          uVar19 = func_0x00f78aec();
          uVar13 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar19,lVar18);
          uVar12 = func_0x00f78a24(0x3d56a50);
          puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar25 = func_0x00f78ac0(uVar19,uVar12);
          puVar4 = auStack_140;
          do {
            uVar20 = auVar25._8_8_;
            lVar11 = auVar25._0_8_;
            *(ulong *)(puVar4 + -0x20) = uVar19;
            *(long *)(puVar4 + -0x18) = lVar18;
            *(undefined1 ****)(puVar4 + -0x10) = pppuVar3;
            *(undefined **)(puVar4 + -8) = puVar23;
            pppuVar3 = (undefined1 ***)(puVar4 + -0x10);
            if ((int)uVar13 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,*(undefined4 *)(lVar11 + 0x20),4);
              uVar19 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar11,uVar20);
code_r0x016cef70:
              if (*(long *)(lVar11 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar11 + 0x18) + 0x18) = *(undefined4 *)(lVar11 + 0x10);
                return uVar19;
              }
            }
            else if (lVar11 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,*(undefined4 *)(lVar11 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar11,uVar20);
              if ((*(long *)(lVar11 + 0x18) != 0) &&
                 (lVar18 = *(long *)(*(long *)(lVar11 + 0x18) + 0x10), lVar18 != 0)) {
                uVar20 = (ulong)(uint)(*(int *)(lVar18 + 0x18) - *(int *)(lVar11 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
                uVar19 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,uVar20);
                goto code_r0x016cef70;
              }
            }
            puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar25 = func_0x00f78af4();
            uVar13 = 0;
            puVar4 = puVar4 + -0x20;
            lVar18 = lVar11;
            uVar19 = uVar20;
          } while( true );
        }
        uVar12 = 3;
      }
      else {
        uVar12 = 4;
      }
      uVar19 = auVar25._0_8_;
      auVar24._8_8_ = uVar12;
      auVar24._0_8_ = uVar19;
      param_4 = 0;
      *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
      *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
      *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
      *(long *)((long)pppuVar3 + -0x18) = unaff_x19;
      *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar3;
      *(undefined **)((long)pppuVar3 + -8) = puVar23;
      if ((auVar25._8_4_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
        return uVar19;
      }
      uVar12 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,1,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar19,auVar25._8_8_);
      puVar4 = *(undefined1 **)((long)pppuVar3 + -0x10);
      puVar23 = *(undefined **)((long)pppuVar3 + -8);
      unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
      unaff_x19 = *(long *)((long)pppuVar3 + -0x18);
      unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
      unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
      goto code_r0x016ce380;
    }
    uVar12 = 1;
  }
  else {
    uVar12 = 2;
    pppuVar22 = (undefined1 ***)ppuVar21;
  }
  uVar19 = auVar25._0_8_;
  auVar24._8_8_ = uVar12;
  auVar24._0_8_ = uVar19;
  param_4 = 0;
  *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
  *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
  *(long *)((long)pppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar22;
  *(undefined **)((long)pppuVar3 + -8) = puVar23;
  if ((auVar25._8_4_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
    return uVar19;
  }
  uVar12 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar19,auVar25._8_8_);
  unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
  unaff_x19 = *(long *)((long)pppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
  unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
  puVar4 = *(undefined1 **)((long)pppuVar3 + -0x10);
  puVar23 = *(undefined **)((long)pppuVar3 + -8);
code_r0x016ce380:
  do {
    lVar18 = auVar24._8_8_;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(long *)((long)pppuVar3 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppuVar3 + -0x10) = puVar4;
    *(undefined **)((long)pppuVar3 + -8) = puVar23;
    ppuVar21 = (undefined1 **)((long)pppuVar3 + -0x10);
    uVar15 = auVar24._8_4_;
    if ((int)uVar15 < *(int *)(auVar24._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar24._0_8_ + 0x28);
      uVar19 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar15 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar15 * 4 + 0x20) = (int)uVar19;
        return uVar19;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      lVar18 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6ceb8);
      uVar12 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(lVar18,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(lVar18,uVar13);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar13 = func_0x00f78b24();
    puVar23 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar24 = func_0x00f78ac0(uVar13,0);
    uVar13 = auVar24._8_8_;
    auVar25._8_8_ = uVar12;
    auVar25._0_8_ = auVar24._0_8_;
    pppuVar3 = (undefined1 ***)((long)pppuVar3 + -0x20);
    unaff_x19 = lVar18;
code_r0x016ce420:
    uVar19 = auVar25._0_8_;
    auVar24._8_8_ = uVar13;
    auVar24._0_8_ = uVar19;
    *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
    *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(long *)((long)pppuVar3 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)pppuVar3 + -0x10) = ppuVar21;
    *(undefined **)((long)pppuVar3 + -8) = puVar23;
    if ((auVar25._8_4_ == (int)param_4) && (*(char *)(uVar19 + 0x48) == '\0')) {
      return uVar19;
    }
    uVar12 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar19,auVar25._8_8_);
    unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
    unaff_x19 = *(long *)((long)pppuVar3 + -0x18);
    unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
    unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
    puVar4 = *(undefined1 **)((long)pppuVar3 + -0x10);
    puVar23 = *(undefined **)((long)pppuVar3 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x166bb48 | Core.Services.GetLeaderboardScoresRequest.AddRangeMax
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_GetLeaderboardScoresRequest__AddRangeMax
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  int iVar18;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 *unaff_x29;
  undefined1 **ppuVar20;
  undefined1 ***pppuVar21;
  undefined *unaff_x30;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  ulong auStack_110 [4];
  undefined1 auStack_f0 [12];
  int iStack_e4;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined1 **ppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = param_1;
  if (param_1 == 0) {
    ppuVar2 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMin;
    auVar25 = func_0x00f78af4();
    if (auVar25._0_8_ == 0) {
      puStack_18 = &Core_Services_GetLeaderboardScoresRequest__AddRangeMin;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar25 = func_0x00f78af4();
      uVar15 = auVar25._8_8_;
      uVar10 = auVar25._0_8_;
      if (uVar10 != 0) {
        param_4 = 0;
        puStack_28 = &Core_Services_GetLeaderboardScoresRequest__AddId;
        if ((auVar25._8_4_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
          return uVar10;
        }
        puStack_30 = (undefined1 *)&puStack_20;
        /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar10,uVar15,uVar15,0,0);
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar10;
        ppuVar2 = &puStack_20;
        puVar3 = puStack_30;
        puVar22 = puStack_28;
        goto code_r0x016ce380;
      }
      ppuVar2 = &puStack_30;
      ppuVar20 = &puStack_30;
      puStack_28 = &Core_Services_GetLeaderboardScoresRequest__AddId;
      puVar22 = &Core_Services_GetLeaderboardScoresRequest__AddPreviousOccurrence;
      puStack_30 = (undefined1 *)&puStack_20;
      auVar23 = func_0x00f78af4();
      if (auVar23._0_8_ != 0) {
        uVar12 = 5;
        param_4 = 0;
        goto code_r0x016ce420;
      }
      ppuVar2 = (undefined1 **)&stack0xffffffffffffffc0;
      puVar22 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
      auVar25 = func_0x00f78af4();
      if (auVar25._0_8_ == 0) {
        ppuVar2 = &puStack_50;
        puStack_48 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
        puVar22 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
        puStack_50 = &stack0xffffffffffffffc0;
        auVar25 = func_0x00f78af4();
        if (auVar25._0_8_ == 0) {
          puStack_58 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
          puStack_60 = (undefined1 *)&puStack_50;
          lVar11 = func_0x00f78af4();
          puStack_68 = &Core_Services_GetLeaderboardScoresRequest__EndGetLeaderboardScoresRequest;
          puStack_70 = (undefined1 *)&puStack_60;
          if ((bRam0000000003eb58c3 & 1) == 0) {
            puStack_70 = (undefined1 *)&puStack_60;
            func_0x00f78a20(0x3d3f0a8);
            bRam0000000003eb58c3 = 1;
          }
          if (lVar11 == 0) {
            unaff_x19 = func_0x00f78af4();
            if (unaff_x19 == 0) {
              lVar11 = func_0x00f78af4();
              return *(ulong *)(lVar11 + 8);
            }
            uVar15 = 0;
            ppuVar2 = (undefined1 **)&stack0xffffffffffffff50;
            puVar3 = &stack0xffffffffffffff70;
            unaff_x20 = 6;
            unaff_x21 = 0x3eb5000;
            if ((bRam0000000003eb5cd7 & 1) == 0) {
              func_0x00f78a20(0x3d1f100);
              bRam0000000003eb5cd7 = 1;
            }
            /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 6) {
                uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,6);
                *(undefined8 *)(unaff_x19 + 0x28) = uVar15;
              }
              *(undefined4 *)(unaff_x19 + 0x30) = 6;
              uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
              *(int *)(unaff_x19 + 0x34) = (int)uVar10;
              return uVar10;
            }
            puVar22 = &FlatBuffers_FlatBufferBuilder__Slot;
            auVar24 = func_0x00f78af4();
            goto code_r0x016ce380;
          }
          uVar10 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar11 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,0);
            uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
            unaff_x21 = (ulong)*(uint *)(lVar11 + 0x30);
            uVar14 = *(uint *)(lVar11 + 0x30) - 1;
            if (-2 < (int)uVar14) {
              uVar14 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar14;
            do {
              uVar1 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar1;
              iVar18 = (int)uVar10;
              if ((int)uVar1 < 0) goto code_r0x016ceb30;
              lVar16 = *(long *)(lVar11 + 0x28);
              if (lVar16 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar16 + 0x18) <= uVar1) goto code_r0x016ced88;
            } while (*(int *)(lVar16 + (ulong)uVar1 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar19 = unaff_x22 - 8;
              if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
              iVar8 = *(int *)(lVar16 + unaff_x22 * 4);
              sVar4 = 0;
              if (iVar8 != 0) {
                sVar4 = (short)uVar10 - (short)iVar8;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar4);
              lVar16 = *(long *)(lVar11 + 0x28);
              if (lVar16 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
              *(undefined4 *)(lVar16 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar14 = uVar1;
            } while (0 < (long)uVar19);
code_r0x016ceb30:
            uVar7 = *(undefined4 *)(lVar11 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)((short)uVar10 - (short)uVar7));
            uVar14 = uVar14 * 2 + 6;
            unaff_x21 = (ulong)uVar14;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)uVar14);
            unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
            if (0 < (int)*(uint *)(lVar11 + 0x40)) {
              uVar19 = 0;
              do {
                lVar16 = *(long *)(lVar11 + 0x18);
                if (((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) ||
                   (lVar17 = *(long *)(lVar11 + 0x38), lVar17 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar17 + 0x18) <= uVar19) goto code_r0x016ced88;
                uVar1 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) -
                        *(int *)(lVar17 + uVar19 * 4 + 0x20);
                unaff_x21 = (ulong)uVar1;
                uVar14 = *(uint *)(lVar11 + 0x10);
                unaff_x22 = (ulong)uVar14;
                sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,unaff_x21,2);
                if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
                if (sVar4 == sVar5) {
                  if (sVar4 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar11 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
                    iVar8 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
                    if (iVar8 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar11 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
                    *(int *)(lVar11 + 0x10) = iVar9;
                    iVar8 = iVar8 - iVar18;
                    goto code_r0x016ced3c;
                  }
                  iVar8 = 2;
                  while( true ) {
                    if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar1 + iVar8,2);
                    if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar14 + iVar8,2);
                    if (sVar5 != sVar6) break;
                    iVar8 = iVar8 + 2;
                    if (sVar4 <= iVar8) goto code_r0x016cec64;
                  }
                }
                uVar19 = uVar19 + 1;
                unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
              } while ((long)uVar19 < (long)unaff_x22);
            }
            unaff_x21 = *(ulong *)(lVar11 + 0x38);
            if (unaff_x21 == 0) {
code_r0x016ced84:
              func_0x00f78af4();
            }
            else {
code_r0x016cecac:
              if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                lVar16 = *(long *)(lVar11 + 0x38);
                if (lVar16 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar16,unaff_x21,*(undefined4 *)(lVar16 + 0x18),0);
                *(ulong *)(lVar11 + 0x38) = unaff_x21;
                unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
              }
              uVar14 = (uint)unaff_x22;
              *(uint *)(lVar11 + 0x40) = uVar14 + 1;
              uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar14 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar14 * 4 + 0x20) = uVar7;
                unaff_x21 = *(ulong *)(lVar11 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                  iVar9 = iVar9 - iVar18;
                  iVar8 = iVar8 - iVar18;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar9,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar9,4,(long)iVar8);
                  *(undefined4 *)(lVar11 + 0x30) = 0xffffffff;
                  return uVar10;
                }
                goto code_r0x016ced84;
              }
            }
code_r0x016ced88:
            uVar15 = func_0x00f78b24();
            func_0x00f78ac0(uVar15,0);
          }
          func_0x00f78a24(0x3d22a38);
          uVar15 = func_0x00f78aec();
          uVar12 = func_0x00f78a24(0x3d6cea8);
          iVar18 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar12);
          uVar12 = func_0x00f78a24(0x3d56a30);
          auVar26 = func_0x00f78ac0(uVar15,uVar12);
          puStack_b8 = &FlatBuffers_FlatBufferBuilder__Required;
          pppuVar21 = &ppuStack_c0;
          lVar11 = *(long *)(auVar26._0_8_ + 0x18);
          iStack_e4 = iVar18;
          uStack_e0 = unaff_x22;
          uStack_d8 = unaff_x21;
          uStack_d0 = uVar10;
          uStack_c8 = uVar15;
          ppuStack_c0 = &puStack_70;
          if ((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) {
            iVar8 = *(int *)(*(long *)(lVar11 + 0x10) + 0x18) - auVar26._8_4_;
            iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,iVar8,4);
            lVar11 = *(long *)(auVar26._0_8_ + 0x18);
            if (lVar11 != 0) {
              uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,(iVar8 - iVar9) + iVar18,2);
              if ((uVar10 & 0xffff) != 0) {
                return uVar10;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_e4,0);
          uVar12 = func_0x00f78a24(0x3d6ce88);
          uVar13 = func_0x00f78a24(0x3d66338);
          lVar11 = /*System.String$$Concat*/ func_0x029be39c(uVar12,uVar15,uVar13,0);
          func_0x00f78a24(0x3d22a38);
          uVar10 = func_0x00f78aec();
          uVar12 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar11);
          uVar15 = func_0x00f78a24(0x3d56a50);
          puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar25 = func_0x00f78ac0(uVar10,uVar15);
          puVar3 = auStack_f0;
          do {
            uVar19 = auVar25._8_8_;
            lVar16 = auVar25._0_8_;
            *(ulong *)(puVar3 + -0x20) = uVar10;
            *(long *)(puVar3 + -0x18) = lVar11;
            *(undefined1 ****)(puVar3 + -0x10) = pppuVar21;
            *(undefined **)(puVar3 + -8) = puVar22;
            pppuVar21 = (undefined1 ***)(puVar3 + -0x10);
            if ((int)uVar12 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),4);
              uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar19);
code_r0x016cef70:
              if (*(long *)(lVar16 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar16 + 0x18) + 0x18) = *(undefined4 *)(lVar16 + 0x10);
                return uVar10;
              }
            }
            else if (lVar16 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar19);
              if ((*(long *)(lVar16 + 0x18) != 0) &&
                 (lVar11 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10), lVar11 != 0)) {
                uVar19 = (ulong)(uint)(*(int *)(lVar11 + 0x18) - *(int *)(lVar16 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
                uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,uVar19);
                goto code_r0x016cef70;
              }
            }
            puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar25 = func_0x00f78af4();
            uVar12 = 0;
            puVar3 = puVar3 + -0x20;
            lVar11 = lVar16;
            uVar10 = uVar19;
          } while( true );
        }
        uVar15 = 3;
      }
      else {
        uVar15 = 4;
      }
      uVar10 = auVar25._0_8_;
      auVar24._8_8_ = uVar15;
      auVar24._0_8_ = uVar10;
      param_4 = 0;
      *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
      *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
      *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
      *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
      *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar2;
      *(undefined **)((long)ppuVar2 + -8) = puVar22;
      if ((auVar25._8_4_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
        return uVar10;
      }
      uVar15 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,1,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar10,auVar25._8_8_);
      puVar3 = *(undefined1 **)((long)ppuVar2 + -0x10);
      puVar22 = *(undefined **)((long)ppuVar2 + -8);
      unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
      unaff_x19 = *(long *)((long)ppuVar2 + -0x18);
      unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
      unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
      goto code_r0x016ce380;
    }
    uVar15 = 1;
  }
  else {
    uVar15 = 2;
    ppuVar2 = (undefined1 **)register0x00000008;
  }
  uVar10 = auVar25._0_8_;
  auVar24._8_8_ = uVar15;
  auVar24._0_8_ = uVar10;
  param_4 = 0;
  *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppuVar2 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar2 + -8) = unaff_x30;
  if ((auVar25._8_4_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
    return uVar10;
  }
  uVar15 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,4,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar10,auVar25._8_8_);
  unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
  unaff_x19 = *(long *)((long)ppuVar2 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
  unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
  puVar3 = *(undefined1 **)((long)ppuVar2 + -0x10);
  puVar22 = *(undefined **)((long)ppuVar2 + -8);
code_r0x016ce380:
  do {
    lVar11 = auVar24._8_8_;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar2 + -0x10) = puVar3;
    *(undefined **)((long)ppuVar2 + -8) = puVar22;
    ppuVar20 = (undefined1 **)((long)ppuVar2 + -0x10);
    uVar14 = auVar24._8_4_;
    if ((int)uVar14 < *(int *)(auVar24._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar24._0_8_ + 0x28);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar14 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar10;
        return uVar10;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      lVar11 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6ceb8);
      uVar15 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(lVar11,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(lVar11,uVar12);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar12 = func_0x00f78b24();
    puVar22 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar25 = func_0x00f78ac0(uVar12,0);
    uVar12 = auVar25._8_8_;
    auVar23._8_8_ = uVar15;
    auVar23._0_8_ = auVar25._0_8_;
    ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x20);
    unaff_x19 = lVar11;
code_r0x016ce420:
    uVar10 = auVar23._0_8_;
    auVar24._8_8_ = uVar12;
    auVar24._0_8_ = uVar10;
    *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
    *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar20;
    *(undefined **)((long)ppuVar2 + -8) = puVar22;
    if ((auVar23._8_4_ == (int)param_4) && (*(char *)(uVar10 + 0x48) == '\0')) {
      return uVar10;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar10,auVar23._8_8_);
    unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
    unaff_x19 = *(long *)((long)ppuVar2 + -0x18);
    unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
    unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
    puVar3 = *(undefined1 **)((long)ppuVar2 + -0x10);
    puVar22 = *(undefined **)((long)ppuVar2 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x166bb6c | Core.Services.GetLeaderboardScoresRequest.AddRangeMin
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_GetLeaderboardScoresRequest__AddRangeMin
                (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  long lVar17;
  int iVar18;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 *unaff_x29;
  undefined1 ***pppuVar20;
  undefined *unaff_x30;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  ulong auStack_100 [4];
  undefined1 auStack_e0 [12];
  int iStack_d4;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if (param_1 != 0) {
    param_4 = 0;
    lVar17 = 1;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,param_2);
    ppuVar2 = (undefined1 **)register0x00000008;
    goto code_r0x016ce380;
  }
  unaff_x29 = &stack0xfffffffffffffff0;
  auVar22 = func_0x00f78af4();
  uVar14 = auVar22._8_8_;
  param_1 = auVar22._0_8_;
  if (param_1 != 0) {
    param_4 = 0;
    if ((auVar22._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,uVar14,uVar14,0,0);
    lVar17 = 0;
    unaff_x30 = &Core_Services_GetLeaderboardScoresRequest__AddId;
    ppuVar2 = (undefined1 **)&stack0xfffffffffffffff0;
    goto code_r0x016ce380;
  }
  ppuVar2 = (undefined1 **)&stack0xffffffffffffffe0;
  puVar3 = &stack0xffffffffffffffe0;
  puVar21 = &Core_Services_GetLeaderboardScoresRequest__AddPreviousOccurrence;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ != 0) {
    lVar17 = 5;
    param_4 = 0;
    goto code_r0x016ce420;
  }
  ppuVar2 = (undefined1 **)&stack0xffffffffffffffd0;
  puVar21 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ == 0) {
    ppuVar2 = &puStack_40;
    puStack_38 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
    puVar21 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
    puStack_40 = &stack0xffffffffffffffd0;
    auVar22 = func_0x00f78af4();
    if (auVar22._0_8_ == 0) {
      puStack_48 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
      puStack_50 = (undefined1 *)&puStack_40;
      lVar17 = func_0x00f78af4();
      puStack_58 = &Core_Services_GetLeaderboardScoresRequest__EndGetLeaderboardScoresRequest;
      puStack_60 = (undefined1 *)&puStack_50;
      if ((bRam0000000003eb58c3 & 1) == 0) {
        puStack_60 = (undefined1 *)&puStack_50;
        func_0x00f78a20(0x3d3f0a8);
        bRam0000000003eb58c3 = 1;
      }
      if (lVar17 == 0) {
        unaff_x19 = func_0x00f78af4();
        if (unaff_x19 == 0) {
          lVar17 = func_0x00f78af4();
          return *(ulong *)(lVar17 + 8);
        }
        uVar14 = 0;
        ppuVar2 = (undefined1 **)&stack0xffffffffffffff60;
        unaff_x29 = &stack0xffffffffffffff80;
        unaff_x20 = 6;
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 6) {
            uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,6);
            *(undefined8 *)(unaff_x19 + 0x28) = uVar14;
          }
          *(undefined4 *)(unaff_x19 + 0x30) = 6;
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
          *(int *)(unaff_x19 + 0x34) = (int)uVar10;
          return uVar10;
        }
        unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar22 = func_0x00f78af4();
        lVar17 = auVar22._8_8_;
        param_1 = auVar22._0_8_;
        goto code_r0x016ce380;
      }
      uVar10 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar17 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar17,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar17);
        unaff_x21 = (ulong)*(uint *)(lVar17 + 0x30);
        uVar13 = *(uint *)(lVar17 + 0x30) - 1;
        if (-2 < (int)uVar13) {
          uVar13 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar13;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar18 = (int)uVar10;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar15 = *(long *)(lVar17 + 0x28);
          if (lVar15 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar15 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar15 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar19 = unaff_x22 - 8;
          if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x016ced88;
          iVar8 = *(int *)(lVar15 + unaff_x22 * 4);
          sVar4 = 0;
          if (iVar8 != 0) {
            sVar4 = (short)uVar10 - (short)iVar8;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar17,(int)sVar4);
          lVar15 = *(long *)(lVar17 + 0x28);
          if (lVar15 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x016ced88;
          *(undefined4 *)(lVar15 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar13 = uVar1;
        } while (0 < (long)uVar19);
code_r0x016ceb30:
        uVar7 = *(undefined4 *)(lVar17 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar17,(int)(short)((short)uVar10 - (short)uVar7));
        uVar13 = uVar13 * 2 + 6;
        unaff_x21 = (ulong)uVar13;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar17,(int)(short)uVar13);
        unaff_x22 = (ulong)*(uint *)(lVar17 + 0x40);
        if (0 < (int)*(uint *)(lVar17 + 0x40)) {
          uVar19 = 0;
          do {
            lVar15 = *(long *)(lVar17 + 0x18);
            if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
               (lVar16 = *(long *)(lVar17 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - *(int *)(lVar16 + uVar19 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar13 = *(uint *)(lVar17 + 0x10);
            unaff_x22 = (ulong)uVar13;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,unaff_x21,2);
            if (*(long *)(lVar17 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar17 + 0x18),unaff_x22,2);
            if (sVar4 == sVar5) {
              if (sVar4 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar17 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
                iVar8 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
                if (iVar8 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar17 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar17 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
                *(int *)(lVar17 + 0x10) = iVar9;
                iVar8 = iVar8 - iVar18;
                goto code_r0x016ced3c;
              }
              iVar8 = 2;
              while( true ) {
                if (*(long *)(lVar17 + 0x18) == 0) goto code_r0x016ced84;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar17 + 0x18),uVar1 + iVar8,2);
                if (*(long *)(lVar17 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar17 + 0x18),uVar13 + iVar8,2);
                if (sVar5 != sVar6) break;
                iVar8 = iVar8 + 2;
                if (sVar4 <= iVar8) goto code_r0x016cec64;
              }
            }
            uVar19 = uVar19 + 1;
            unaff_x22 = (ulong)*(int *)(lVar17 + 0x40);
          } while ((long)uVar19 < (long)unaff_x22);
        }
        unaff_x21 = *(ulong *)(lVar17 + 0x38);
        if (unaff_x21 == 0) {
code_r0x016ced84:
          func_0x00f78af4();
        }
        else {
code_r0x016cecac:
          if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
            unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
            lVar15 = *(long *)(lVar17 + 0x38);
            if (lVar15 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar15,unaff_x21,*(undefined4 *)(lVar15 + 0x18),0);
            *(ulong *)(lVar17 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar17 + 0x40);
          }
          uVar13 = (uint)unaff_x22;
          *(uint *)(lVar17 + 0x40) = uVar13 + 1;
          uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar17);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar13 * 4 + 0x20) = uVar7;
            unaff_x21 = *(ulong *)(lVar17 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar17);
              iVar9 = iVar9 - iVar18;
              iVar8 = iVar8 - iVar18;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar9,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar9,4,(long)iVar8);
              *(undefined4 *)(lVar17 + 0x30) = 0xffffffff;
              return uVar10;
            }
            goto code_r0x016ced84;
          }
        }
code_r0x016ced88:
        uVar14 = func_0x00f78b24();
        func_0x00f78ac0(uVar14,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar14 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d6cea8);
      iVar18 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar11);
      uVar11 = func_0x00f78a24(0x3d56a30);
      auVar24 = func_0x00f78ac0(uVar14,uVar11);
      puStack_a8 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar20 = &ppuStack_b0;
      lVar17 = *(long *)(auVar24._0_8_ + 0x18);
      iStack_d4 = iVar18;
      uStack_d0 = unaff_x22;
      uStack_c8 = unaff_x21;
      uStack_c0 = uVar10;
      uStack_b8 = uVar14;
      ppuStack_b0 = &puStack_60;
      if ((lVar17 != 0) && (*(long *)(lVar17 + 0x10) != 0)) {
        iVar8 = *(int *)(*(long *)(lVar17 + 0x10) + 0x18) - auVar24._8_4_;
        iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar17,iVar8,4);
        lVar17 = *(long *)(auVar24._0_8_ + 0x18);
        if (lVar17 != 0) {
          uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar17,(iVar8 - iVar9) + iVar18,2);
          if ((uVar10 & 0xffff) != 0) {
            return uVar10;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_d4,0);
      uVar11 = func_0x00f78a24(0x3d6ce88);
      uVar12 = func_0x00f78a24(0x3d66338);
      lVar17 = /*System.String$$Concat*/ func_0x029be39c(uVar11,uVar14,uVar12,0);
      func_0x00f78a24(0x3d22a38);
      uVar10 = func_0x00f78aec();
      uVar11 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar17);
      uVar14 = func_0x00f78a24(0x3d56a50);
      puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar22 = func_0x00f78ac0(uVar10,uVar14);
      puVar3 = auStack_e0;
      do {
        uVar19 = auVar22._8_8_;
        lVar15 = auVar22._0_8_;
        *(ulong *)(puVar3 + -0x20) = uVar10;
        *(long *)(puVar3 + -0x18) = lVar17;
        *(undefined1 ****)(puVar3 + -0x10) = pppuVar20;
        *(undefined **)(puVar3 + -8) = puVar21;
        pppuVar20 = (undefined1 ***)(puVar3 + -0x10);
        if ((int)uVar11 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),4);
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar19);
code_r0x016cef70:
          if (*(long *)(lVar15 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar15 + 0x18) + 0x18) = *(undefined4 *)(lVar15 + 0x10);
            return uVar10;
          }
        }
        else if (lVar15 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar19);
          if ((*(long *)(lVar15 + 0x18) != 0) &&
             (lVar17 = *(long *)(*(long *)(lVar15 + 0x18) + 0x10), lVar17 != 0)) {
            uVar19 = (ulong)(uint)(*(int *)(lVar17 + 0x18) - *(int *)(lVar15 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,4,0);
            uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,uVar19);
            goto code_r0x016cef70;
          }
        }
        puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar22 = func_0x00f78af4();
        uVar11 = 0;
        puVar3 = puVar3 + -0x20;
        lVar17 = lVar15;
        uVar10 = uVar19;
      } while( true );
    }
    lVar17 = 3;
  }
  else {
    lVar17 = 4;
  }
  param_1 = auVar22._0_8_;
  param_4 = 0;
  *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar2;
  *(undefined **)((long)ppuVar2 + -8) = puVar21;
  if ((auVar22._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
    return param_1;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,auVar22._8_8_);
  unaff_x29 = *(undefined1 **)((long)ppuVar2 + -0x10);
  unaff_x30 = *(undefined **)((long)ppuVar2 + -8);
  unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
  unaff_x19 = *(long *)((long)ppuVar2 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
  unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
code_r0x016ce380:
  do {
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar2 + -0x10) = unaff_x29;
    *(undefined **)((long)ppuVar2 + -8) = unaff_x30;
    puVar3 = (undefined1 *)((long)ppuVar2 + -0x10);
    uVar13 = (uint)lVar17;
    if ((int)uVar13 < *(int *)(param_1 + 0x30)) {
      unaff_x20 = *(long *)(param_1 + 0x28);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      unaff_x19 = lVar17;
      if (uVar13 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar10;
        return uVar10;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      lVar17 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d6ceb8);
      uVar14 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(lVar17,uVar11);
      uVar11 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(lVar17,uVar11);
code_r0x016ce410:
      func_0x00f78af4();
      unaff_x19 = lVar17;
    }
    uVar11 = func_0x00f78b24();
    puVar21 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar23 = func_0x00f78ac0(uVar11,0);
    lVar17 = auVar23._8_8_;
    auVar22._8_8_ = uVar14;
    auVar22._0_8_ = auVar23._0_8_;
    ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x20);
code_r0x016ce420:
    param_1 = auVar22._0_8_;
    *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
    *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar2 + -0x10) = puVar3;
    *(undefined **)((long)ppuVar2 + -8) = puVar21;
    if ((auVar22._8_4_ == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,auVar22._8_8_);
    unaff_x29 = *(undefined1 **)((long)ppuVar2 + -0x10);
    unaff_x30 = *(undefined **)((long)ppuVar2 + -8);
    unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
    unaff_x19 = *(long *)((long)ppuVar2 + -0x18);
    unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
    unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
  } while( true );
}



// ============================================================
// RVA: 0x166bb90 | Core.Services.GetLeaderboardScoresRequest.AddId
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_GetLeaderboardScoresRequest__AddId
                (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  long lVar17;
  int iVar18;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 *unaff_x29;
  undefined1 ***pppuVar20;
  undefined *unaff_x30;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  ulong auStack_f0 [4];
  undefined1 auStack_d0 [12];
  int iStack_c4;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if (param_1 != 0) {
    param_4 = 0;
    lVar17 = 0;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,param_2,param_2,0,0);
    ppuVar2 = (undefined1 **)register0x00000008;
    goto code_r0x016ce380;
  }
  puVar21 = &Core_Services_GetLeaderboardScoresRequest__AddPreviousOccurrence;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ != 0) {
    lVar17 = 5;
    param_4 = 0;
    puVar3 = &stack0xfffffffffffffff0;
    goto code_r0x016ce420;
  }
  ppuVar2 = (undefined1 **)&stack0xffffffffffffffe0;
  puVar21 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ == 0) {
    ppuVar2 = &puStack_30;
    puStack_28 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
    puVar21 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
    puStack_30 = &stack0xffffffffffffffe0;
    auVar22 = func_0x00f78af4();
    if (auVar22._0_8_ == 0) {
      puStack_38 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
      puStack_40 = (undefined1 *)&puStack_30;
      lVar17 = func_0x00f78af4();
      puStack_48 = &Core_Services_GetLeaderboardScoresRequest__EndGetLeaderboardScoresRequest;
      puStack_50 = (undefined1 *)&puStack_40;
      if ((bRam0000000003eb58c3 & 1) == 0) {
        puStack_50 = (undefined1 *)&puStack_40;
        func_0x00f78a20(0x3d3f0a8);
        bRam0000000003eb58c3 = 1;
      }
      if (lVar17 == 0) {
        unaff_x19 = func_0x00f78af4();
        if (unaff_x19 == 0) {
          lVar17 = func_0x00f78af4();
          return *(ulong *)(lVar17 + 8);
        }
        param_2 = 0;
        ppuVar2 = (undefined1 **)&stack0xffffffffffffff70;
        unaff_x29 = &stack0xffffffffffffff90;
        unaff_x20 = 6;
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 6) {
            uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,6);
            *(undefined8 *)(unaff_x19 + 0x28) = uVar11;
          }
          *(undefined4 *)(unaff_x19 + 0x30) = 6;
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
          *(int *)(unaff_x19 + 0x34) = (int)uVar10;
          return uVar10;
        }
        unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar22 = func_0x00f78af4();
        lVar17 = auVar22._8_8_;
        param_1 = auVar22._0_8_;
        goto code_r0x016ce380;
      }
      uVar10 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar17 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar17,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar17);
        unaff_x21 = (ulong)*(uint *)(lVar17 + 0x30);
        uVar14 = *(uint *)(lVar17 + 0x30) - 1;
        if (-2 < (int)uVar14) {
          uVar14 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar14;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar18 = (int)uVar10;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar15 = *(long *)(lVar17 + 0x28);
          if (lVar15 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar15 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar15 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar19 = unaff_x22 - 8;
          if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x016ced88;
          iVar8 = *(int *)(lVar15 + unaff_x22 * 4);
          sVar4 = 0;
          if (iVar8 != 0) {
            sVar4 = (short)uVar10 - (short)iVar8;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar17,(int)sVar4);
          lVar15 = *(long *)(lVar17 + 0x28);
          if (lVar15 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x016ced88;
          *(undefined4 *)(lVar15 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar14 = uVar1;
        } while (0 < (long)uVar19);
code_r0x016ceb30:
        uVar7 = *(undefined4 *)(lVar17 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar17,(int)(short)((short)uVar10 - (short)uVar7));
        uVar14 = uVar14 * 2 + 6;
        unaff_x21 = (ulong)uVar14;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar17,(int)(short)uVar14);
        unaff_x22 = (ulong)*(uint *)(lVar17 + 0x40);
        if (0 < (int)*(uint *)(lVar17 + 0x40)) {
          uVar19 = 0;
          do {
            lVar15 = *(long *)(lVar17 + 0x18);
            if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
               (lVar16 = *(long *)(lVar17 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - *(int *)(lVar16 + uVar19 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar14 = *(uint *)(lVar17 + 0x10);
            unaff_x22 = (ulong)uVar14;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,unaff_x21,2);
            if (*(long *)(lVar17 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar17 + 0x18),unaff_x22,2);
            if (sVar4 == sVar5) {
              if (sVar4 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar17 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
                iVar8 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
                if (iVar8 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar17 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar17 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
                *(int *)(lVar17 + 0x10) = iVar9;
                iVar8 = iVar8 - iVar18;
                goto code_r0x016ced3c;
              }
              iVar8 = 2;
              while( true ) {
                if (*(long *)(lVar17 + 0x18) == 0) goto code_r0x016ced84;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar17 + 0x18),uVar1 + iVar8,2);
                if (*(long *)(lVar17 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar17 + 0x18),uVar14 + iVar8,2);
                if (sVar5 != sVar6) break;
                iVar8 = iVar8 + 2;
                if (sVar4 <= iVar8) goto code_r0x016cec64;
              }
            }
            uVar19 = uVar19 + 1;
            unaff_x22 = (ulong)*(int *)(lVar17 + 0x40);
          } while ((long)uVar19 < (long)unaff_x22);
        }
        unaff_x21 = *(ulong *)(lVar17 + 0x38);
        if (unaff_x21 == 0) {
code_r0x016ced84:
          func_0x00f78af4();
        }
        else {
code_r0x016cecac:
          if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
            unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
            lVar15 = *(long *)(lVar17 + 0x38);
            if (lVar15 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar15,unaff_x21,*(undefined4 *)(lVar15 + 0x18),0);
            *(ulong *)(lVar17 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar17 + 0x40);
          }
          uVar14 = (uint)unaff_x22;
          *(uint *)(lVar17 + 0x40) = uVar14 + 1;
          uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar17);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar14 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar14 * 4 + 0x20) = uVar7;
            unaff_x21 = *(ulong *)(lVar17 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar17);
              iVar9 = iVar9 - iVar18;
              iVar8 = iVar8 - iVar18;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar9,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar9,4,(long)iVar8);
              *(undefined4 *)(lVar17 + 0x30) = 0xffffffff;
              return uVar10;
            }
            goto code_r0x016ced84;
          }
        }
code_r0x016ced88:
        uVar11 = func_0x00f78b24();
        func_0x00f78ac0(uVar11,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar11 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6cea8);
      iVar18 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a30);
      auVar24 = func_0x00f78ac0(uVar11,uVar12);
      puStack_98 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar20 = &ppuStack_a0;
      lVar17 = *(long *)(auVar24._0_8_ + 0x18);
      iStack_c4 = iVar18;
      uStack_c0 = unaff_x22;
      uStack_b8 = unaff_x21;
      uStack_b0 = uVar10;
      uStack_a8 = uVar11;
      ppuStack_a0 = &puStack_50;
      if ((lVar17 != 0) && (*(long *)(lVar17 + 0x10) != 0)) {
        iVar8 = *(int *)(*(long *)(lVar17 + 0x10) + 0x18) - auVar24._8_4_;
        iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar17,iVar8,4);
        lVar17 = *(long *)(auVar24._0_8_ + 0x18);
        if (lVar17 != 0) {
          uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar17,(iVar8 - iVar9) + iVar18,2);
          if ((uVar10 & 0xffff) != 0) {
            return uVar10;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_c4,0);
      uVar12 = func_0x00f78a24(0x3d6ce88);
      uVar13 = func_0x00f78a24(0x3d66338);
      lVar17 = /*System.String$$Concat*/ func_0x029be39c(uVar12,uVar11,uVar13,0);
      func_0x00f78a24(0x3d22a38);
      uVar10 = func_0x00f78aec();
      uVar12 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar17);
      uVar11 = func_0x00f78a24(0x3d56a50);
      puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar22 = func_0x00f78ac0(uVar10,uVar11);
      puVar3 = auStack_d0;
      do {
        uVar19 = auVar22._8_8_;
        lVar15 = auVar22._0_8_;
        *(ulong *)(puVar3 + -0x20) = uVar10;
        *(long *)(puVar3 + -0x18) = lVar17;
        *(undefined1 ****)(puVar3 + -0x10) = pppuVar20;
        *(undefined **)(puVar3 + -8) = puVar21;
        pppuVar20 = (undefined1 ***)(puVar3 + -0x10);
        if ((int)uVar12 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),4);
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar19);
code_r0x016cef70:
          if (*(long *)(lVar15 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar15 + 0x18) + 0x18) = *(undefined4 *)(lVar15 + 0x10);
            return uVar10;
          }
        }
        else if (lVar15 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar19);
          if ((*(long *)(lVar15 + 0x18) != 0) &&
             (lVar17 = *(long *)(*(long *)(lVar15 + 0x18) + 0x10), lVar17 != 0)) {
            uVar19 = (ulong)(uint)(*(int *)(lVar17 + 0x18) - *(int *)(lVar15 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,4,0);
            uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,uVar19);
            goto code_r0x016cef70;
          }
        }
        puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar22 = func_0x00f78af4();
        uVar12 = 0;
        puVar3 = puVar3 + -0x20;
        lVar17 = lVar15;
        uVar10 = uVar19;
      } while( true );
    }
    lVar17 = 3;
  }
  else {
    lVar17 = 4;
  }
  param_1 = auVar22._0_8_;
  param_4 = 0;
  *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar2;
  *(undefined **)((long)ppuVar2 + -8) = puVar21;
  if ((auVar22._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
    return param_1;
  }
  param_2 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,auVar22._8_8_);
  unaff_x29 = *(undefined1 **)((long)ppuVar2 + -0x10);
  unaff_x30 = *(undefined **)((long)ppuVar2 + -8);
  unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
  unaff_x19 = *(long *)((long)ppuVar2 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
  unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
code_r0x016ce380:
  do {
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar2 + -0x10) = unaff_x29;
    *(undefined **)((long)ppuVar2 + -8) = unaff_x30;
    uVar14 = (uint)lVar17;
    if ((int)uVar14 < *(int *)(param_1 + 0x30)) {
      unaff_x20 = *(long *)(param_1 + 0x28);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      unaff_x19 = lVar17;
      if (uVar14 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar10;
        return uVar10;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      lVar17 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d6ceb8);
      param_2 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(lVar17,uVar11);
      uVar11 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(lVar17,uVar11);
code_r0x016ce410:
      func_0x00f78af4();
      unaff_x19 = lVar17;
    }
    uVar11 = func_0x00f78b24();
    puVar21 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar23 = func_0x00f78ac0(uVar11,0);
    lVar17 = auVar23._8_8_;
    auVar22._8_8_ = param_2;
    auVar22._0_8_ = auVar23._0_8_;
    puVar3 = (undefined1 *)((long)ppuVar2 + -0x20);
    register0x00000008 = (BADSPACEBASE *)ppuVar2;
code_r0x016ce420:
    ppuVar2 = (undefined1 **)puVar3;
    param_1 = auVar22._0_8_;
    *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
    *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar2 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)ppuVar2 + -8) = puVar21;
    if ((auVar22._8_4_ == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    param_2 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,auVar22._8_8_);
    unaff_x29 = *(undefined1 **)((long)ppuVar2 + -0x10);
    unaff_x30 = *(undefined **)((long)ppuVar2 + -8);
    unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
    unaff_x19 = *(long *)((long)ppuVar2 + -0x18);
    unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
    unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
  } while( true );
}



// ============================================================
// RVA: 0x166bbb4 | Core.Services.GetLeaderboardScoresRequest.AddPreviousOccurrence
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_GetLeaderboardScoresRequest__AddPreviousOccurrence
                (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 unaff_x19;
  int iVar18;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 *unaff_x29;
  undefined1 ***pppuVar20;
  undefined *unaff_x30;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  ulong auStack_e0 [4];
  undefined1 auStack_c0 [12];
  int iStack_b4;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (param_1 != 0) {
    uVar15 = 5;
    param_4 = 0;
    ppuVar2 = (undefined1 **)register0x00000008;
    goto code_r0x016ce420;
  }
  ppuVar2 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar21 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
  auVar23 = func_0x00f78af4();
  if (auVar23._0_8_ == 0) {
    ppuVar2 = &puStack_20;
    puStack_18 = &Core_Services_GetLeaderboardScoresRequest__AddTimeScope;
    puVar21 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
    puStack_20 = &stack0xfffffffffffffff0;
    auVar23 = func_0x00f78af4();
    if (auVar23._0_8_ == 0) {
      puStack_28 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
      puStack_30 = (undefined1 *)&puStack_20;
      lVar10 = func_0x00f78af4();
      puStack_38 = &Core_Services_GetLeaderboardScoresRequest__EndGetLeaderboardScoresRequest;
      puStack_40 = (undefined1 *)&puStack_30;
      if ((bRam0000000003eb58c3 & 1) == 0) {
        puStack_40 = (undefined1 *)&puStack_30;
        func_0x00f78a20(0x3d3f0a8);
        bRam0000000003eb58c3 = 1;
      }
      if (lVar10 == 0) {
        lVar10 = func_0x00f78af4();
        if (lVar10 == 0) {
          lVar10 = func_0x00f78af4();
          return *(ulong *)(lVar10 + 8);
        }
        uVar15 = 0;
        ppuVar2 = (undefined1 **)&stack0xffffffffffffff80;
        puVar3 = &stack0xffffffffffffffa0;
        unaff_x20 = 6;
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar10);
        if (*(long *)(lVar10 + 0x28) != 0) {
          if (*(int *)(*(long *)(lVar10 + 0x28) + 0x18) < 6) {
            uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,6);
            *(undefined8 *)(lVar10 + 0x28) = uVar15;
          }
          *(undefined4 *)(lVar10 + 0x30) = 6;
          uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar10);
          *(int *)(lVar10 + 0x34) = (int)uVar11;
          return uVar11;
        }
        puVar21 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar22 = func_0x00f78af4();
        goto code_r0x016ce380;
      }
      uVar11 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar10 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar10,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar10,0);
        uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar10);
        unaff_x21 = (ulong)*(uint *)(lVar10 + 0x30);
        uVar14 = *(uint *)(lVar10 + 0x30) - 1;
        if (-2 < (int)uVar14) {
          uVar14 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar14;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar18 = (int)uVar11;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar16 = *(long *)(lVar10 + 0x28);
          if (lVar16 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar16 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar16 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar19 = unaff_x22 - 8;
          if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
          iVar8 = *(int *)(lVar16 + unaff_x22 * 4);
          sVar4 = 0;
          if (iVar8 != 0) {
            sVar4 = (short)uVar11 - (short)iVar8;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar10,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar10,(int)sVar4);
          lVar16 = *(long *)(lVar10 + 0x28);
          if (lVar16 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
          *(undefined4 *)(lVar16 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar14 = uVar1;
        } while (0 < (long)uVar19);
code_r0x016ceb30:
        uVar7 = *(undefined4 *)(lVar10 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar10,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar10,(int)(short)((short)uVar11 - (short)uVar7));
        uVar14 = uVar14 * 2 + 6;
        unaff_x21 = (ulong)uVar14;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar10,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar10,(int)(short)uVar14);
        unaff_x22 = (ulong)*(uint *)(lVar10 + 0x40);
        if (0 < (int)*(uint *)(lVar10 + 0x40)) {
          uVar19 = 0;
          do {
            lVar16 = *(long *)(lVar10 + 0x18);
            if (((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) ||
               (lVar17 = *(long *)(lVar10 + 0x38), lVar17 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar17 + 0x18) <= uVar19) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) - *(int *)(lVar17 + uVar19 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar14 = *(uint *)(lVar10 + 0x10);
            unaff_x22 = (ulong)uVar14;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,unaff_x21,2);
            if (*(long *)(lVar10 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar10 + 0x18),unaff_x22,2);
            if (sVar4 == sVar5) {
              if (sVar4 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar10 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
                iVar8 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
                if (iVar8 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar10 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar10 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
                *(int *)(lVar10 + 0x10) = iVar9;
                iVar8 = iVar8 - iVar18;
                goto code_r0x016ced3c;
              }
              iVar8 = 2;
              while( true ) {
                if (*(long *)(lVar10 + 0x18) == 0) goto code_r0x016ced84;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar10 + 0x18),uVar1 + iVar8,2);
                if (*(long *)(lVar10 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar10 + 0x18),uVar14 + iVar8,2);
                if (sVar5 != sVar6) break;
                iVar8 = iVar8 + 2;
                if (sVar4 <= iVar8) goto code_r0x016cec64;
              }
            }
            uVar19 = uVar19 + 1;
            unaff_x22 = (ulong)*(int *)(lVar10 + 0x40);
          } while ((long)uVar19 < (long)unaff_x22);
        }
        unaff_x21 = *(ulong *)(lVar10 + 0x38);
        if (unaff_x21 == 0) {
code_r0x016ced84:
          func_0x00f78af4();
        }
        else {
code_r0x016cecac:
          if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
            unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
            lVar16 = *(long *)(lVar10 + 0x38);
            if (lVar16 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar16,unaff_x21,*(undefined4 *)(lVar16 + 0x18),0);
            *(ulong *)(lVar10 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar10 + 0x40);
          }
          uVar14 = (uint)unaff_x22;
          *(uint *)(lVar10 + 0x40) = uVar14 + 1;
          uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar10);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar14 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar14 * 4 + 0x20) = uVar7;
            unaff_x21 = *(ulong *)(lVar10 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar10);
              iVar9 = iVar9 - iVar18;
              iVar8 = iVar8 - iVar18;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar9,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar9,4,(long)iVar8);
              *(undefined4 *)(lVar10 + 0x30) = 0xffffffff;
              return uVar11;
            }
            goto code_r0x016ced84;
          }
        }
code_r0x016ced88:
        uVar15 = func_0x00f78b24();
        func_0x00f78ac0(uVar15,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar15 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6cea8);
      iVar18 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a30);
      auVar24 = func_0x00f78ac0(uVar15,uVar12);
      puStack_88 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar20 = &ppuStack_90;
      lVar10 = *(long *)(auVar24._0_8_ + 0x18);
      iStack_b4 = iVar18;
      uStack_b0 = unaff_x22;
      uStack_a8 = unaff_x21;
      uStack_a0 = uVar11;
      uStack_98 = uVar15;
      ppuStack_90 = &puStack_40;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x10) != 0)) {
        iVar8 = *(int *)(*(long *)(lVar10 + 0x10) + 0x18) - auVar24._8_4_;
        iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar10,iVar8,4);
        lVar10 = *(long *)(auVar24._0_8_ + 0x18);
        if (lVar10 != 0) {
          uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar10,(iVar8 - iVar9) + iVar18,2);
          if ((uVar11 & 0xffff) != 0) {
            return uVar11;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_b4,0);
      uVar12 = func_0x00f78a24(0x3d6ce88);
      uVar13 = func_0x00f78a24(0x3d66338);
      lVar10 = /*System.String$$Concat*/ func_0x029be39c(uVar12,uVar15,uVar13,0);
      func_0x00f78a24(0x3d22a38);
      uVar11 = func_0x00f78aec();
      uVar12 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar10);
      uVar15 = func_0x00f78a24(0x3d56a50);
      puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar23 = func_0x00f78ac0(uVar11,uVar15);
      puVar3 = auStack_c0;
      do {
        uVar19 = auVar23._8_8_;
        lVar16 = auVar23._0_8_;
        *(ulong *)(puVar3 + -0x20) = uVar11;
        *(long *)(puVar3 + -0x18) = lVar10;
        *(undefined1 ****)(puVar3 + -0x10) = pppuVar20;
        *(undefined **)(puVar3 + -8) = puVar21;
        pppuVar20 = (undefined1 ***)(puVar3 + -0x10);
        if ((int)uVar12 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),4);
          uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar19);
code_r0x016cef70:
          if (*(long *)(lVar16 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar16 + 0x18) + 0x18) = *(undefined4 *)(lVar16 + 0x10);
            return uVar11;
          }
        }
        else if (lVar16 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar19);
          if ((*(long *)(lVar16 + 0x18) != 0) &&
             (lVar10 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10), lVar10 != 0)) {
            uVar19 = (ulong)(uint)(*(int *)(lVar10 + 0x18) - *(int *)(lVar16 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
            uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,uVar19);
            goto code_r0x016cef70;
          }
        }
        puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar23 = func_0x00f78af4();
        uVar12 = 0;
        puVar3 = puVar3 + -0x20;
        lVar10 = lVar16;
        uVar11 = uVar19;
      } while( true );
    }
    uVar15 = 3;
  }
  else {
    uVar15 = 4;
  }
  uVar11 = auVar23._0_8_;
  auVar22._8_8_ = uVar15;
  auVar22._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
  *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar2;
  *(undefined **)((long)ppuVar2 + -8) = puVar21;
  if ((auVar23._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar15 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar11,auVar23._8_8_);
  puVar3 = *(undefined1 **)((long)ppuVar2 + -0x10);
  puVar21 = *(undefined **)((long)ppuVar2 + -8);
  unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
  lVar10 = *(long *)((long)ppuVar2 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
  unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
code_r0x016ce380:
  do {
    unaff_x19 = auVar22._8_8_;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = lVar10;
    *(undefined1 **)((long)ppuVar2 + -0x10) = puVar3;
    *(undefined **)((long)ppuVar2 + -8) = puVar21;
    unaff_x29 = (undefined1 *)((long)ppuVar2 + -0x10);
    uVar14 = auVar22._8_4_;
    if ((int)uVar14 < *(int *)(auVar22._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar22._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      param_2 = uVar15;
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar14 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      unaff_x19 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6ceb8);
      param_2 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(unaff_x19,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(unaff_x19,uVar15);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar15 = func_0x00f78b24();
    unaff_x30 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar23 = func_0x00f78ac0(uVar15,0);
    uVar15 = auVar23._8_8_;
    param_1 = auVar23._0_8_;
    ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x20);
code_r0x016ce420:
    auVar22._8_8_ = uVar15;
    auVar22._0_8_ = param_1;
    *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
    *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar2 + -0x10) = unaff_x29;
    *(undefined **)((long)ppuVar2 + -8) = unaff_x30;
    if (((int)param_2 == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,param_2);
    puVar3 = *(undefined1 **)((long)ppuVar2 + -0x10);
    puVar21 = *(undefined **)((long)ppuVar2 + -8);
    unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
    lVar10 = *(long *)((long)ppuVar2 + -0x18);
    unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
    unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
  } while( true );
}



// ============================================================
// RVA: 0x166bbd8 | Core.Services.GetLeaderboardScoresRequest.AddTimeScope
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_GetLeaderboardScoresRequest__AddTimeScope
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 unaff_x19;
  int iVar17;
  undefined8 unaff_x20;
  long lVar18;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 *unaff_x29;
  undefined1 *puVar20;
  undefined1 ***pppuVar21;
  undefined *unaff_x30;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  ulong auStack_d0 [4];
  undefined1 auStack_b0 [12];
  int iStack_a4;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = param_1;
  if (param_1 == 0) {
    puVar2 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
    auVar23 = func_0x00f78af4();
    if (auVar23._0_8_ == 0) {
      puStack_18 = &Core_Services_GetLeaderboardScoresRequest__AddPlayerScope;
      puStack_20 = &stack0xfffffffffffffff0;
      lVar9 = func_0x00f78af4();
      puStack_28 = &Core_Services_GetLeaderboardScoresRequest__EndGetLeaderboardScoresRequest;
      puStack_30 = (undefined1 *)&puStack_20;
      if ((bRam0000000003eb58c3 & 1) == 0) {
        puStack_30 = (undefined1 *)&puStack_20;
        func_0x00f78a20(0x3d3f0a8);
        bRam0000000003eb58c3 = 1;
      }
      if (lVar9 == 0) {
        lVar9 = func_0x00f78af4();
        if (lVar9 == 0) {
          lVar9 = func_0x00f78af4();
          return *(ulong *)(lVar9 + 8);
        }
        uVar15 = 0;
        puVar2 = &stack0xffffffffffffff90;
        puVar20 = &stack0xffffffffffffffb0;
        lVar18 = 6;
        uVar13 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar9);
        if (*(long *)(lVar9 + 0x28) != 0) {
          if (*(int *)(*(long *)(lVar9 + 0x28) + 0x18) < 6) {
            uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,6);
            *(undefined8 *)(lVar9 + 0x28) = uVar13;
          }
          *(undefined4 *)(lVar9 + 0x30) = 6;
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
          *(int *)(lVar9 + 0x34) = (int)uVar10;
          return uVar10;
        }
        puVar22 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar24 = func_0x00f78af4();
        goto code_r0x016ce380;
      }
      uVar10 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar9 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar9,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
        unaff_x21 = (ulong)*(uint *)(lVar9 + 0x30);
        uVar12 = *(uint *)(lVar9 + 0x30) - 1;
        if (-2 < (int)uVar12) {
          uVar12 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar12;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar17 = (int)uVar10;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar18 = *(long *)(lVar9 + 0x28);
          if (lVar18 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar18 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar18 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar19 = unaff_x22 - 8;
          if (*(uint *)(lVar18 + 0x18) <= uVar19) goto code_r0x016ced88;
          iVar7 = *(int *)(lVar18 + unaff_x22 * 4);
          sVar3 = 0;
          if (iVar7 != 0) {
            sVar3 = (short)uVar10 - (short)iVar7;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)sVar3);
          lVar18 = *(long *)(lVar9 + 0x28);
          if (lVar18 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar18 + 0x18) <= uVar19) goto code_r0x016ced88;
          *(undefined4 *)(lVar18 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar12 = uVar1;
        } while (0 < (long)uVar19);
code_r0x016ceb30:
        uVar6 = *(undefined4 *)(lVar9 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)((short)uVar10 - (short)uVar6));
        uVar12 = uVar12 * 2 + 6;
        unaff_x21 = (ulong)uVar12;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)uVar12);
        unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
        if (0 < (int)*(uint *)(lVar9 + 0x40)) {
          uVar19 = 0;
          do {
            lVar18 = *(long *)(lVar9 + 0x18);
            if (((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) ||
               (lVar16 = *(long *)(lVar9 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) - *(int *)(lVar16 + uVar19 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar12 = *(uint *)(lVar9 + 0x10);
            unaff_x22 = (ulong)uVar12;
            sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,unaff_x21,2);
            if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),unaff_x22,2);
            if (sVar3 == sVar4) {
              if (sVar3 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar9 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
                iVar7 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
                if (iVar7 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar9 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar17;
                *(int *)(lVar9 + 0x10) = iVar8;
                iVar7 = iVar7 - iVar17;
                goto code_r0x016ced3c;
              }
              iVar7 = 2;
              while( true ) {
                if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
                sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar1 + iVar7,2);
                if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar12 + iVar7,2);
                if (sVar4 != sVar5) break;
                iVar7 = iVar7 + 2;
                if (sVar3 <= iVar7) goto code_r0x016cec64;
              }
            }
            uVar19 = uVar19 + 1;
            unaff_x22 = (ulong)*(int *)(lVar9 + 0x40);
          } while ((long)uVar19 < (long)unaff_x22);
        }
        unaff_x21 = *(ulong *)(lVar9 + 0x38);
        if (unaff_x21 == 0) {
code_r0x016ced84:
          func_0x00f78af4();
        }
        else {
code_r0x016cecac:
          if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
            unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
            lVar18 = *(long *)(lVar9 + 0x38);
            if (lVar18 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar18,unaff_x21,*(undefined4 *)(lVar18 + 0x18),0);
            *(ulong *)(lVar9 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
          }
          uVar12 = (uint)unaff_x22;
          *(uint *)(lVar9 + 0x40) = uVar12 + 1;
          uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar12 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar12 * 4 + 0x20) = uVar6;
            unaff_x21 = *(ulong *)(lVar9 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
              iVar8 = iVar8 - iVar17;
              iVar7 = iVar7 - iVar17;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar8,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar8,4,(long)iVar7);
              *(undefined4 *)(lVar9 + 0x30) = 0xffffffff;
              return uVar10;
            }
            goto code_r0x016ced84;
          }
        }
code_r0x016ced88:
        uVar13 = func_0x00f78b24();
        func_0x00f78ac0(uVar13,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar13 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6cea8);
      iVar17 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a30);
      auVar25 = func_0x00f78ac0(uVar13,uVar15);
      puStack_78 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar21 = &ppuStack_80;
      lVar9 = *(long *)(auVar25._0_8_ + 0x18);
      iStack_a4 = iVar17;
      uStack_a0 = unaff_x22;
      uStack_98 = unaff_x21;
      uStack_90 = uVar10;
      uStack_88 = uVar13;
      ppuStack_80 = &puStack_30;
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
        iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - auVar25._8_4_;
        iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,iVar7,4);
        lVar9 = *(long *)(auVar25._0_8_ + 0x18);
        if (lVar9 != 0) {
          uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,(iVar7 - iVar8) + iVar17,2);
          if ((uVar10 & 0xffff) != 0) {
            return uVar10;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_a4,0);
      uVar15 = func_0x00f78a24(0x3d6ce88);
      uVar11 = func_0x00f78a24(0x3d66338);
      lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar13,uVar11,0);
      func_0x00f78a24(0x3d22a38);
      uVar10 = func_0x00f78aec();
      uVar15 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar9);
      uVar13 = func_0x00f78a24(0x3d56a50);
      puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar23 = func_0x00f78ac0(uVar10,uVar13);
      puVar2 = auStack_b0;
      do {
        uVar19 = auVar23._8_8_;
        lVar18 = auVar23._0_8_;
        *(ulong *)(puVar2 + -0x20) = uVar10;
        *(long *)(puVar2 + -0x18) = lVar9;
        *(undefined1 ****)(puVar2 + -0x10) = pppuVar21;
        *(undefined **)(puVar2 + -8) = puVar22;
        pppuVar21 = (undefined1 ***)(puVar2 + -0x10);
        if ((int)uVar15 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),4);
          uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar19);
code_r0x016cef70:
          if (*(long *)(lVar18 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar18 + 0x18) + 0x18) = *(undefined4 *)(lVar18 + 0x10);
            return uVar10;
          }
        }
        else if (lVar18 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar19);
          if ((*(long *)(lVar18 + 0x18) != 0) &&
             (lVar9 = *(long *)(*(long *)(lVar18 + 0x18) + 0x10), lVar9 != 0)) {
            uVar19 = (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar18 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,4,0);
            uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar18,uVar19);
            goto code_r0x016cef70;
          }
        }
        puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar23 = func_0x00f78af4();
        uVar15 = 0;
        puVar2 = puVar2 + -0x20;
        lVar9 = lVar18;
        uVar10 = uVar19;
      } while( true );
    }
    uVar13 = 3;
  }
  else {
    uVar13 = 4;
    puVar2 = (undefined1 *)register0x00000008;
  }
  uVar10 = auVar23._0_8_;
  auVar24._8_8_ = uVar13;
  auVar24._0_8_ = uVar10;
  param_4 = 0;
  *(ulong *)(puVar2 + -0x30) = unaff_x22;
  *(ulong *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  if ((auVar23._8_4_ == 0) && (*(char *)(uVar10 + 0x48) == '\0')) {
    return uVar10;
  }
  uVar15 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,1,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(uVar10,auVar23._8_8_);
  puVar20 = *(undefined1 **)(puVar2 + -0x10);
  puVar22 = *(undefined **)(puVar2 + -8);
  lVar18 = *(long *)(puVar2 + -0x20);
  lVar9 = *(long *)(puVar2 + -0x18);
  unaff_x22 = *(ulong *)(puVar2 + -0x30);
  uVar13 = *(undefined8 *)(puVar2 + -0x28);
code_r0x016ce380:
  do {
    uVar11 = auVar24._8_8_;
    *(long *)(puVar2 + -0x20) = lVar18;
    *(long *)(puVar2 + -0x18) = lVar9;
    *(undefined1 **)(puVar2 + -0x10) = puVar20;
    *(undefined **)(puVar2 + -8) = puVar22;
    uVar12 = auVar24._8_4_;
    if ((int)uVar12 < *(int *)(auVar24._0_8_ + 0x30)) {
      lVar18 = *(long *)(auVar24._0_8_ + 0x28);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar14 = uVar15;
      if (lVar18 == 0) goto code_r0x016ce410;
      if (uVar12 < *(uint *)(lVar18 + 0x18)) {
        *(int *)(lVar18 + (long)(int)uVar12 * 4 + 0x20) = (int)uVar10;
        return uVar10;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar11 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6ceb8);
      uVar14 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar11,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar11,uVar15);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar15 = func_0x00f78b24();
    auVar24 = func_0x00f78ac0(uVar15,0);
    uVar10 = auVar24._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = uVar13;
    *(long *)(puVar2 + -0x40) = lVar18;
    *(undefined8 *)(puVar2 + -0x38) = uVar11;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar14 == (int)param_4) && (*(char *)(uVar10 + 0x48) == '\0')) {
      return uVar10;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar10,uVar14);
    puVar20 = *(undefined1 **)(puVar2 + -0x30);
    puVar22 = *(undefined **)(puVar2 + -0x28);
    lVar18 = *(long *)(puVar2 + -0x40);
    lVar9 = *(long *)(puVar2 + -0x38);
    unaff_x22 = *(ulong *)(puVar2 + -0x50);
    uVar13 = *(undefined8 *)(puVar2 + -0x48);
    puVar2 = puVar2 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x166bbfc | Core.Services.GetLeaderboardScoresRequest.AddPlayerScope
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_GetLeaderboardScoresRequest__AddPlayerScope
                (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  undefined8 uVar16;
  int iVar17;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined1 **ppuVar19;
  undefined *unaff_x30;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  ulong auStack_c0 [4];
  undefined1 auStack_a0 [12];
  int iStack_94;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  if (param_1 != 0) {
    param_4 = 0;
    uVar16 = 3;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,param_2);
    puVar2 = (undefined1 *)register0x00000008;
code_r0x016ce380:
    do {
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(long *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(undefined **)(puVar2 + -8) = unaff_x30;
      uVar11 = (uint)uVar16;
      if ((int)uVar11 < *(int *)(param_1 + 0x30)) {
        unaff_x20 = *(long *)(param_1 + 0x28);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar12 = uVar13;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        uVar13 = uVar16;
        if (uVar11 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar11 * 4 + 0x20) = (int)uVar10;
          return uVar10;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar16 = func_0x00f78aec();
        uVar13 = func_0x00f78a24(0x3d6ceb8);
        uVar12 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar16,uVar13);
        uVar13 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar16,uVar13);
code_r0x016ce410:
        func_0x00f78af4();
        uVar13 = uVar16;
      }
      uVar16 = func_0x00f78b24();
      auVar21 = func_0x00f78ac0(uVar16,0);
      uVar16 = auVar21._8_8_;
      param_1 = auVar21._0_8_;
      *(ulong *)(puVar2 + -0x50) = unaff_x22;
      *(ulong *)(puVar2 + -0x48) = unaff_x21;
      *(long *)(puVar2 + -0x40) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x38) = uVar13;
      *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar12 == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
        return param_1;
      }
      uVar13 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,uVar12);
      unaff_x29 = *(undefined1 **)(puVar2 + -0x30);
      unaff_x30 = *(undefined **)(puVar2 + -0x28);
      unaff_x20 = *(long *)(puVar2 + -0x40);
      unaff_x19 = *(long *)(puVar2 + -0x38);
      unaff_x22 = *(ulong *)(puVar2 + -0x50);
      unaff_x21 = *(ulong *)(puVar2 + -0x48);
      puVar2 = puVar2 + -0x20;
    } while( true );
  }
  lVar9 = func_0x00f78af4();
  if ((bRam0000000003eb58c3 & 1) == 0) {
    func_0x00f78a20(0x3d3f0a8);
    bRam0000000003eb58c3 = 1;
  }
  if (lVar9 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar9 = func_0x00f78af4();
      return *(ulong *)(lVar9 + 8);
    }
    uVar13 = 0;
    puVar2 = &stack0xffffffffffffffa0;
    unaff_x29 = &stack0xffffffffffffffc0;
    unaff_x20 = 6;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 6) {
        uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,6);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 6;
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
      *(int *)(unaff_x19 + 0x34) = (int)uVar10;
      return uVar10;
    }
    unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar21 = func_0x00f78af4();
    uVar16 = auVar21._8_8_;
    param_1 = auVar21._0_8_;
    goto code_r0x016ce380;
  }
  uVar10 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar9 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar9,0);
    uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
    unaff_x21 = (ulong)*(uint *)(lVar9 + 0x30);
    uVar11 = *(uint *)(lVar9 + 0x30) - 1;
    if (-2 < (int)uVar11) {
      uVar11 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar11;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar17 = (int)uVar10;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar14 = *(long *)(lVar9 + 0x28);
      if (lVar14 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar14 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar14 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar18 = unaff_x22 - 8;
      if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
      iVar7 = *(int *)(lVar14 + unaff_x22 * 4);
      sVar3 = 0;
      if (iVar7 != 0) {
        sVar3 = (short)uVar10 - (short)iVar7;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)sVar3);
      lVar14 = *(long *)(lVar9 + 0x28);
      if (lVar14 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
      *(undefined4 *)(lVar14 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar11 = uVar1;
    } while (0 < (long)uVar18);
code_r0x016ceb30:
    uVar6 = *(undefined4 *)(lVar9 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)((short)uVar10 - (short)uVar6));
    uVar11 = uVar11 * 2 + 6;
    unaff_x21 = (ulong)uVar11;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)uVar11);
    unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
    if (0 < (int)*(uint *)(lVar9 + 0x40)) {
      uVar18 = 0;
      do {
        lVar14 = *(long *)(lVar9 + 0x18);
        if (((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) ||
           (lVar15 = *(long *)(lVar9 + 0x38), lVar15 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar11 = *(uint *)(lVar9 + 0x10);
        unaff_x22 = (ulong)uVar11;
        sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,unaff_x21,2);
        if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
        sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),unaff_x22,2);
        if (sVar3 == sVar4) {
          if (sVar3 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar9 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar18) goto code_r0x016ced88;
            iVar7 = *(int *)(unaff_x21 + uVar18 * 4 + 0x20);
            if (iVar7 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar9 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar17;
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar7 = iVar7 - iVar17;
            goto code_r0x016ced3c;
          }
          iVar7 = 2;
          while( true ) {
            if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar1 + iVar7,2);
            if (*(long *)(lVar9 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar11 + iVar7,2);
            if (sVar4 != sVar5) break;
            iVar7 = iVar7 + 2;
            if (sVar3 <= iVar7) goto code_r0x016cec64;
          }
        }
        uVar18 = uVar18 + 1;
        unaff_x22 = (ulong)*(int *)(lVar9 + 0x40);
      } while ((long)uVar18 < (long)unaff_x22);
    }
    unaff_x21 = *(ulong *)(lVar9 + 0x38);
    if (unaff_x21 == 0) {
code_r0x016ced84:
      func_0x00f78af4();
    }
    else {
code_r0x016cecac:
      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
        lVar14 = *(long *)(lVar9 + 0x38);
        if (lVar14 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar14,unaff_x21,*(undefined4 *)(lVar14 + 0x18),0);
        *(ulong *)(lVar9 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
      }
      uVar11 = (uint)unaff_x22;
      *(uint *)(lVar9 + 0x40) = uVar11 + 1;
      uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar11 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar11 * 4 + 0x20) = uVar6;
        unaff_x21 = *(ulong *)(lVar9 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
          iVar8 = iVar8 - iVar17;
          iVar7 = iVar7 - iVar17;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar8,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar8,4,(long)iVar7);
          *(undefined4 *)(lVar9 + 0x30) = 0xffffffff;
          return uVar10;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar16 = func_0x00f78b24();
    func_0x00f78ac0(uVar16,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar16 = func_0x00f78aec();
  uVar13 = func_0x00f78a24(0x3d6cea8);
  iVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar16,uVar13);
  uVar13 = func_0x00f78a24(0x3d56a30);
  auVar22 = func_0x00f78ac0(uVar16,uVar13);
  puStack_68 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar19 = &puStack_70;
  lVar9 = *(long *)(auVar22._0_8_ + 0x18);
  iStack_94 = iVar17;
  uStack_90 = unaff_x22;
  uStack_88 = unaff_x21;
  uStack_80 = uVar10;
  uStack_78 = uVar16;
  puStack_70 = &stack0xffffffffffffffe0;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
    iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - auVar22._8_4_;
    iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,iVar7,4);
    lVar9 = *(long *)(auVar22._0_8_ + 0x18);
    if (lVar9 != 0) {
      uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,(iVar7 - iVar8) + iVar17,2);
      if ((uVar10 & 0xffff) != 0) {
        return uVar10;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar16 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_94,0);
  uVar13 = func_0x00f78a24(0x3d6ce88);
  uVar12 = func_0x00f78a24(0x3d66338);
  lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar16,uVar12,0);
  func_0x00f78a24(0x3d22a38);
  uVar10 = func_0x00f78aec();
  uVar13 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar9);
  uVar16 = func_0x00f78a24(0x3d56a50);
  puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar21 = func_0x00f78ac0(uVar10,uVar16);
  puVar2 = auStack_a0;
  do {
    uVar18 = auVar21._8_8_;
    lVar14 = auVar21._0_8_;
    *(ulong *)(puVar2 + -0x20) = uVar10;
    *(long *)(puVar2 + -0x18) = lVar9;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar19;
    *(undefined **)(puVar2 + -8) = puVar20;
    ppuVar19 = (undefined1 **)(puVar2 + -0x10);
    if ((int)uVar13 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),4);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
code_r0x016cef70:
      if (*(long *)(lVar14 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x18) = *(undefined4 *)(lVar14 + 0x10);
        return uVar10;
      }
    }
    else if (lVar14 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
      if ((*(long *)(lVar14 + 0x18) != 0) &&
         (lVar9 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar9 != 0)) {
        uVar18 = (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar14 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,4,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar14,uVar18);
        goto code_r0x016cef70;
      }
    }
    puVar20 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar21 = func_0x00f78af4();
    uVar13 = 0;
    puVar2 = puVar2 + -0x20;
    lVar9 = lVar14;
    uVar10 = uVar18;
  } while( true );
}



// ============================================================
// RVA: 0x166bc20 | Core.Services.GetLeaderboardScoresRequest.EndGetLeaderboardScoresRequest
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_GetLeaderboardScoresRequest__EndGetLeaderboardScoresRequest
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar19;
  undefined1 *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  ulong auStack_b0 [5];
  int iStack_84;
  ulong auStack_80 [4];
  undefined *apuStack_60 [2];
  
  if ((bRam0000000003eb58c3 & 1) == 0) {
    func_0x00f78a20(0x3d3f0a8);
    bRam0000000003eb58c3 = 1;
  }
  if (param_1 == 0) {
    lVar15 = func_0x00f78af4();
    if (lVar15 == 0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
    uVar11 = 0;
    puVar20 = &stack0xffffffffffffffd0;
    lVar16 = 6;
    uVar10 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar15);
    if (*(long *)(lVar15 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar15 + 0x28) + 0x18) < 6) {
        uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,6);
        *(undefined8 *)(lVar15 + 0x28) = uVar10;
      }
      *(undefined4 *)(lVar15 + 0x30) = 6;
      uVar18 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
      *(int *)(lVar15 + 0x34) = (int)uVar18;
      return uVar18;
    }
    puVar22 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar23 = func_0x00f78af4();
    puVar2 = &stack0xffffffffffffffb0;
    do {
      uVar12 = auVar23._8_8_;
      *(long *)(puVar2 + -0x20) = lVar16;
      *(long *)(puVar2 + -0x18) = lVar15;
      *(undefined1 **)(puVar2 + -0x10) = puVar20;
      *(undefined **)(puVar2 + -8) = puVar22;
      uVar13 = auVar23._8_4_;
      if ((int)uVar13 < *(int *)(auVar23._0_8_ + 0x30)) {
        lVar16 = *(long *)(auVar23._0_8_ + 0x28);
        uVar18 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        uVar14 = uVar11;
        if (lVar16 == 0) goto code_r0x016ce410;
        if (uVar13 < *(uint *)(lVar16 + 0x18)) {
          *(int *)(lVar16 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar18;
          return uVar18;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        uVar12 = func_0x00f78aec();
        uVar11 = func_0x00f78a24(0x3d6ceb8);
        uVar14 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar12,uVar11);
        uVar11 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(uVar12,uVar11);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar11 = func_0x00f78b24();
      auVar23 = func_0x00f78ac0(uVar11,0);
      uVar18 = auVar23._0_8_;
      *(ulong *)(puVar2 + -0x50) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x48) = uVar10;
      *(long *)(puVar2 + -0x40) = lVar16;
      *(undefined8 *)(puVar2 + -0x38) = uVar12;
      *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
      if (((int)uVar14 == (int)param_4) && (*(char *)(uVar18 + 0x48) == '\0')) {
        return uVar18;
      }
      uVar11 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar18,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar18,uVar14);
      puVar20 = *(undefined1 **)(puVar2 + -0x30);
      puVar22 = *(undefined **)(puVar2 + -0x28);
      lVar16 = *(long *)(puVar2 + -0x40);
      lVar15 = *(long *)(puVar2 + -0x38);
      unaff_x22 = *(ulong *)(puVar2 + -0x50);
      uVar10 = *(undefined8 *)(puVar2 + -0x48);
      puVar2 = puVar2 + -0x20;
    } while( true );
  }
  uVar18 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(param_1 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,0);
    uVar18 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
    unaff_x21 = (ulong)*(uint *)(param_1 + 0x30);
    uVar13 = *(uint *)(param_1 + 0x30) - 1;
    if (-2 < (int)uVar13) {
      uVar13 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar13;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar17 = (int)uVar18;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar15 = *(long *)(param_1 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar15 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar19 = unaff_x22 - 8;
      if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x016ced88;
      iVar8 = *(int *)(lVar15 + unaff_x22 * 4);
      sVar4 = 0;
      if (iVar8 != 0) {
        sVar4 = (short)uVar18 - (short)iVar8;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)sVar4);
      lVar15 = *(long *)(param_1 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x016ced88;
      *(undefined4 *)(lVar15 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar13 = uVar1;
    } while (0 < (long)uVar19);
code_r0x016ceb30:
    uVar7 = *(undefined4 *)(param_1 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)((short)uVar18 - (short)uVar7));
    uVar13 = uVar13 * 2 + 6;
    unaff_x21 = (ulong)uVar13;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,(int)(short)uVar13);
    unaff_x22 = (ulong)*(uint *)(param_1 + 0x40);
    if (0 < (int)*(uint *)(param_1 + 0x40)) {
      uVar19 = 0;
      do {
        lVar15 = *(long *)(param_1 + 0x18);
        if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
           (lVar16 = *(long *)(param_1 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar16 + 0x18) <= uVar19) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - *(int *)(lVar16 + uVar19 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar13 = *(uint *)(param_1 + 0x10);
        unaff_x22 = (ulong)uVar13;
        sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,unaff_x21,2);
        if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),unaff_x22,2);
        if (sVar4 == sVar5) {
          if (sVar4 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(param_1 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar19) goto code_r0x016ced88;
            iVar8 = *(int *)(unaff_x21 + uVar19 * 4 + 0x20);
            if (iVar8 == 0) {
              unaff_x22 = (ulong)*(uint *)(param_1 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(param_1 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar17;
            *(int *)(param_1 + 0x10) = iVar9;
            iVar8 = iVar8 - iVar17;
            goto code_r0x016ced3c;
          }
          iVar8 = 2;
          while( true ) {
            if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),uVar1 + iVar8,2);
            if (*(long *)(param_1 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 0x18),uVar13 + iVar8,2);
            if (sVar5 != sVar6) break;
            iVar8 = iVar8 + 2;
            if (sVar4 <= iVar8) goto code_r0x016cec64;
          }
        }
        uVar19 = uVar19 + 1;
        unaff_x22 = (ulong)*(int *)(param_1 + 0x40);
      } while ((long)uVar19 < (long)unaff_x22);
    }
    unaff_x21 = *(ulong *)(param_1 + 0x38);
    if (unaff_x21 == 0) {
code_r0x016ced84:
      func_0x00f78af4();
    }
    else {
code_r0x016cecac:
      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
        lVar15 = *(long *)(param_1 + 0x38);
        if (lVar15 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar15,unaff_x21,*(undefined4 *)(lVar15 + 0x18),0);
        *(ulong *)(param_1 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(param_1 + 0x40);
      }
      uVar13 = (uint)unaff_x22;
      *(uint *)(param_1 + 0x40) = uVar13 + 1;
      uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar13 * 4 + 0x20) = uVar7;
        unaff_x21 = *(ulong *)(param_1 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar9 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
          iVar9 = iVar9 - iVar17;
          iVar8 = iVar8 - iVar17;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar9,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar9,4,(long)iVar8);
          *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
          return uVar18;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar10 = func_0x00f78b24();
    func_0x00f78ac0(uVar10,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar10 = func_0x00f78aec();
  uVar11 = func_0x00f78a24(0x3d6cea8);
  iVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,uVar11);
  uVar11 = func_0x00f78a24(0x3d56a30);
  auVar24 = func_0x00f78ac0(uVar10,uVar11);
  apuStack_60[1] = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar21 = apuStack_60;
  lVar15 = *(long *)(auVar24._0_8_ + 0x18);
  iStack_84 = iVar17;
  auStack_80[0] = unaff_x22;
  auStack_80[1] = unaff_x21;
  auStack_80[2] = uVar18;
  auStack_80[3] = uVar10;
  apuStack_60[0] = &stack0xfffffffffffffff0;
  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
    iVar8 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - auVar24._8_4_;
    iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,iVar8,4);
    lVar15 = *(long *)(auVar24._0_8_ + 0x18);
    if (lVar15 != 0) {
      uVar18 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,(iVar8 - iVar9) + iVar17,2);
      if ((uVar18 & 0xffff) != 0) {
        return uVar18;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_84,0);
  uVar11 = func_0x00f78a24(0x3d6ce88);
  uVar12 = func_0x00f78a24(0x3d66338);
  lVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar11,uVar10,uVar12,0);
  func_0x00f78a24(0x3d22a38);
  uVar18 = func_0x00f78aec();
  uVar11 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar18,lVar15);
  uVar10 = func_0x00f78a24(0x3d56a50);
  puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar23 = func_0x00f78ac0(uVar18,uVar10);
  puVar3 = auStack_b0 + 4;
  do {
    uVar19 = auVar23._8_8_;
    lVar16 = auVar23._0_8_;
    *(ulong *)((long)puVar3 + -0x20) = uVar18;
    *(long *)((long)puVar3 + -0x18) = lVar15;
    *(undefined ***)((long)puVar3 + -0x10) = ppuVar21;
    *(undefined **)((long)puVar3 + -8) = puVar22;
    ppuVar21 = (undefined **)((long)puVar3 + -0x10);
    if ((int)uVar11 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),4);
      uVar18 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar19);
code_r0x016cef70:
      if (*(long *)(lVar16 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar16 + 0x18) + 0x18) = *(undefined4 *)(lVar16 + 0x10);
        return uVar18;
      }
    }
    else if (lVar16 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar19);
      if ((*(long *)(lVar16 + 0x18) != 0) &&
         (lVar15 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10), lVar15 != 0)) {
        uVar19 = (ulong)(uint)(*(int *)(lVar15 + 0x18) - *(int *)(lVar16 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
        uVar18 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,uVar19);
        goto code_r0x016cef70;
      }
    }
    puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar23 = func_0x00f78af4();
    uVar11 = 0;
    puVar3 = (ulong *)((long)puVar3 + -0x20);
    lVar15 = lVar16;
    uVar18 = uVar19;
  } while( true );
}



// ============================================================
// RVA: 0x166bc6c | Core.Services.GetLeaderboardScoresRequest.StartGetLeaderboardScoresRequest
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Services_GetLeaderboardScoresRequest__StartGetLeaderboardScoresRequest
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  long alStack_80 [10];
  
  if (param_1 == 0) {
    lVar7 = func_0x00f78af4();
    return *(long *)(lVar7 + 8);
  }
  uVar5 = 0;
  puVar9 = &stack0xfffffffffffffff0;
  lVar7 = 6;
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 6) {
      uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,6);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
    }
    *(undefined4 *)(param_1 + 0x30) = 6;
    lVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
    *(int *)(param_1 + 0x34) = (int)lVar7;
    return lVar7;
  }
  puVar10 = &FlatBuffers_FlatBufferBuilder__Slot;
  auVar11 = func_0x00f78af4();
  puVar1 = &stack0xffffffffffffffd0;
  do {
    uVar3 = auVar11._8_8_;
    *(long *)(puVar1 + -0x20) = lVar7;
    *(long *)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar9;
    *(undefined **)(puVar1 + -8) = puVar10;
    uVar4 = auVar11._8_4_;
    if ((int)uVar4 < *(int *)(auVar11._0_8_ + 0x30)) {
      lVar7 = *(long *)(auVar11._0_8_ + 0x28);
      lVar2 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar6 = uVar5;
      if (lVar7 == 0) goto code_r0x016ce410;
      if (uVar4 < *(uint *)(lVar7 + 0x18)) {
        *(int *)(lVar7 + (long)(int)uVar4 * 4 + 0x20) = (int)lVar2;
        return lVar2;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar3 = func_0x00f78aec();
      uVar5 = func_0x00f78a24(0x3d6ceb8);
      uVar6 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar3,uVar5);
      uVar5 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar3,uVar5);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar5 = func_0x00f78b24();
    auVar11 = func_0x00f78ac0(uVar5,0);
    lVar2 = auVar11._0_8_;
    *(undefined8 *)(puVar1 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x48) = uVar8;
    *(long *)(puVar1 + -0x40) = lVar7;
    *(undefined8 *)(puVar1 + -0x38) = uVar3;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar6 == param_4) && (*(char *)(lVar2 + 0x48) == '\0')) {
      return lVar2;
    }
    uVar5 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar2,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(lVar2,uVar6);
    puVar9 = *(undefined1 **)(puVar1 + -0x30);
    puVar10 = *(undefined **)(puVar1 + -0x28);
    lVar7 = *(long *)(puVar1 + -0x40);
    param_1 = *(long *)(puVar1 + -0x38);
    unaff_x22 = *(undefined8 *)(puVar1 + -0x50);
    uVar8 = *(undefined8 *)(puVar1 + -0x48);
    puVar1 = puVar1 + -0x20;
  } while( true );
}



