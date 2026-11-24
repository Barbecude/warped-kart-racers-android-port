// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.Achievement

// ============================================================
// RVA: 0x16651cc | Core.Services.Achievement.get_ByteBuffer
// ============================================================

undefined8 Core_Services_Achievement__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x16651d4 | Core.Services.Achievement.GetRootAsAchievement
// ============================================================

undefined1  [16] Core_Services_Achievement__GetRootAsAchievement(long param_1)

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
// RVA: 0x16651e0 | Core.Services.Achievement.GetRootAsAchievement
// ============================================================

undefined1  [16]
Core_Services_Achievement__GetRootAsAchievement(long param_1,ulong param_2,undefined8 param_3)

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
// RVA: 0x1665224 | Core.Services.Achievement.__assign
// ============================================================

undefined1  [16]
Core_Services_Achievement____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x1665238 | Core.Services.Achievement.__init
// ============================================================

void Core_Services_Achievement____init(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x1665244 | Core.Services.Achievement.get_Id
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

ulong Core_Services_Achievement__get_Id(int *param_1)

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
// RVA: 0x1665290 | Core.Services.Achievement.GetIdBytes
// ============================================================

void Core_Services_Achievement__GetIdBytes(undefined8 *param_1,undefined8 param_2)

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
// RVA: 0x16652d4 | Core.Services.Achievement.GetIdArray
// ============================================================

long Core_Services_Achievement__GetIdArray(long param_1)

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
  
  if ((bRam0000000003eb5896 & 1) == 0) {
    func_0x00f78a20(0x3d5ded0);
    bRam0000000003eb5896 = 1;
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
// RVA: 0x166532c | Core.Services.Achievement.get_Title
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

ulong Core_Services_Achievement__get_Title(int *param_1)

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
  
  iVar6 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6,0);
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
// RVA: 0x1665378 | Core.Services.Achievement.GetTitleBytes
// ============================================================

void Core_Services_Achievement__GetTitleBytes(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  /*FlatBuffers.Table$$__vector_as_arraysegment*/ func_0x016cf374(&uStack_38,param_2,6,0);
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  return;
}



// ============================================================
// RVA: 0x16653bc | Core.Services.Achievement.GetTitleArray
// ============================================================

long Core_Services_Achievement__GetTitleArray(long param_1)

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
  
  if ((bRam0000000003eb5897 & 1) == 0) {
    func_0x00f78a20(0x3d5ded0);
    bRam0000000003eb5897 = 1;
  }
  lVar3 = lRam0000000003d5ded0;
  uVar6 = 6;
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
    uVar1 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6,0);
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
// RVA: 0x1665414 | Core.Services.Achievement.get_PercentComplete
// ============================================================

/* WARNING: Possible PIC construction at 0x016cce70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0293870c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016654f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166550c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01665524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01665510) */
/* WARNING: Removing unreachable block (ram,0x016654f8) */
/* WARNING: Removing unreachable block (ram,0x02938710) */
/* WARNING: Removing unreachable block (ram,0x0293875c) */
/* WARNING: Removing unreachable block (ram,0x02938764) */
/* WARNING: Removing unreachable block (ram,0x02938778) */
/* WARNING: Removing unreachable block (ram,0x02938714) */
/* WARNING: Removing unreachable block (ram,0x0293871c) */
/* WARNING: Removing unreachable block (ram,0x02938730) */
/* WARNING: Removing unreachable block (ram,0x02938784) */
/* WARNING: Removing unreachable block (ram,0x016cceec) */
/* WARNING: Removing unreachable block (ram,0x016ccef4) */
/* WARNING: Removing unreachable block (ram,0x016ccefc) */
/* WARNING: Removing unreachable block (ram,0x016cce74) */
/* WARNING: Removing unreachable block (ram,0x016cce7c) */
/* WARNING: Removing unreachable block (ram,0x016cce84) */
/* WARNING: Removing unreachable block (ram,0x01665528) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Type propagation algorithm not settling */

ulong Core_Services_Achievement__get_PercentComplete
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  dword **ppdVar3;
  short sVar4;
  int iVar7;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 uVar8;
  int *piVar14;
  short sVar5;
  short sVar6;
  int iVar9;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  dword *pdVar21;
  dword *pdVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  dword *unaff_x20;
  int *piVar28;
  undefined *unaff_x21;
  undefined8 *puVar29;
  ulong uVar30;
  undefined1 *unaff_x22;
  undefined1 *puVar31;
  long lVar32;
  ulong unaff_x23;
  ulong unaff_x24;
  int iVar33;
  undefined8 *******pppppppuVar34;
  undefined *puVar35;
  float extraout_s0;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [12];
  ulong auStack_170 [4];
  undefined1 auStack_150 [12];
  int iStack_144;
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  dword *pdStack_c0;
  undefined *puStack_b8;
  dword *pdStack_90;
  undefined *puStack_88;
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  undefined8 *******pppppppuStack_30;
  undefined *puStack_28;
  
  uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,8,0);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  puVar25 = *(undefined **)(param_1 + 2);
  if (puVar25 == (undefined *)0x0) {
    piVar13 = (int *)func_0x00f78af4();
    puStack_28 = &Core_Services_Achievement__get_Completed;
    puVar19 = (undefined1 *)0x0;
    pppppppuStack_30 = (undefined8 *******)&stack0xfffffffffffffff0;
    uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar13,10);
    if ((int)uVar12 == 0) {
      return uVar12;
    }
    if (*(long *)(piVar13 + 2) != 0) {
      iVar7 = /*FlatBuffers.ByteBuffer$$Get*/ func_0x016cccfc(*(long *)(piVar13 + 2),*piVar13 + (int)uVar12,0);
      return (ulong)(iVar7 != 0);
    }
    auVar37 = func_0x00f78af4();
    piVar14 = auVar37._0_8_;
    puVar2 = &stack0xffffffffffffff80;
    puStack_48 = &Core_Services_Achievement__CreateAchievement;
    pdVar21 = (dword *)&pppppppuStack_50;
    pppppppuStack_50 = &pppppppuStack_30;
    if (piVar14 != (int *)0x0) {
      puVar25 = &UNK_016654f8;
      uVar24 = param_4;
      piVar28 = piVar14;
      unaff_x21 = auVar37._8_8_;
      unaff_x22 = puVar19;
code_r0x016ce2a4:
      uVar16 = 0;
      ppdVar3 = (dword **)(puVar2 + -0x30);
      *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
      *(undefined **)(puVar2 + -0x28) = unaff_x21;
      *(int **)(puVar2 + -0x20) = piVar28;
      *(undefined8 *)(puVar2 + -0x18) = uVar24;
      *(dword **)(puVar2 + -0x10) = pdVar21;
      *(undefined **)(puVar2 + -8) = puVar25;
      unaff_x20 = &MACH_HEADER.cputype;
      unaff_x21 = (undefined *)0x3eb5000;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100);
        bRam0000000003eb5cd7 = 1;
      }
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar14);
      if (*(long *)(piVar14 + 10) != 0) {
        if (*(int *)(*(long *)(piVar14 + 10) + 0x18) < 4) {
          uVar24 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
          *(undefined8 *)(piVar14 + 10) = uVar24;
        }
        piVar14[0xc] = 4;
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar14);
        piVar14[0xd] = (int)uVar12;
        return uVar12;
      }
      auVar37 = func_0x00f78af4();
      piVar13 = piVar14;
      pdVar21 = (dword *)(puVar2 + -0x10);
      puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
      goto code_r0x016ce380;
    }
    uVar12 = func_0x00f78af4();
    pdStack_90 = pdVar21;
    if (uVar12 != 0) {
      puStack_88 = &Core_Services_Achievement__AddPercentComplete;
      if (extraout_s0 == 0.0 && *(char *)(uVar12 + 0x48) == '\0') {
        return uVar12;
      }
      uVar16 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,4);
      /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,uVar12);
      auVar37._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 2);
      auVar37._0_8_ = uVar12;
      ppdVar3 = (dword **)&stack0xffffffffffffff80;
      pdVar21 = pdStack_90;
      puVar25 = puStack_88;
      goto code_r0x016ce380;
    }
    ppdVar3 = &pdStack_90;
    puStack_88 = &Core_Services_Achievement__AddPercentComplete;
    puVar25 = &Core_Services_Achievement__AddTitle;
    auVar36 = func_0x00f78af4();
    if (auVar36._0_8_ == 0) {
      ppdVar3 = (dword **)&stack0xffffffffffffff60;
      puVar25 = &Core_Services_Achievement__AddId;
      auVar36 = func_0x00f78af4();
      if (auVar36._0_8_ == 0) {
        ppdVar3 = (dword **)&stack0xffffffffffffff50;
        puVar19 = &stack0xffffffffffffff50;
        puVar25 = &Core_Services_Achievement__AddCompleted;
        auVar36 = func_0x00f78af4();
        if (auVar36._0_8_ != 0) {
          puVar31 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
          param_4 = 0;
          goto code_r0x016ce420;
        }
        puStack_b8 = &Core_Services_Achievement__AddCompleted;
        pdStack_c0 = (dword *)&stack0xffffffffffffff50;
        lVar26 = func_0x00f78af4();
        puVar2 = &stack0xffffffffffffff20;
        puStack_c8 = &Core_Services_Achievement__EndAchievement;
        pdVar21 = (dword *)&puStack_d0;
        piVar28 = (int *)0x3eb5000;
        uStack_d8 = piVar13;
        puStack_d0 = (undefined1 *)&pdStack_c0;
        if ((bRam0000000003eb5898 & 1) == 0) {
          puStack_d0 = (undefined1 *)&pdStack_c0;
          func_0x00f78a20(0x3d3efd8);
          bRam0000000003eb5898 = 1;
        }
        if (lVar26 == 0) {
          puVar25 = &Core_Services_Achievement__StartAchievement;
          piVar14 = (int *)func_0x00f78af4();
          if (piVar14 == (int *)0x0) {
            lVar26 = func_0x00f78af4();
            return *(ulong *)(lVar26 + 8);
          }
          uVar24 = 0;
          goto code_r0x016ce2a4;
        }
        if ((bRam0000000003eb5cd8 & 1) == 0) {
          func_0x00f78a20(0x3d1f100,0);
          bRam0000000003eb5cd8 = 1;
        }
        if (-1 < *(int *)(lVar26 + 0x30)) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar26,4,0);
          /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar26,0);
          uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar26);
          uVar30 = (ulong)*(uint *)(lVar26 + 0x30);
          uVar11 = *(uint *)(lVar26 + 0x30) - 1;
          if (-2 < (int)uVar11) {
            uVar11 = 0xffffffff;
          }
          do {
            uVar1 = (int)uVar30 - 1;
            uVar30 = (ulong)uVar1;
            iVar7 = (int)uVar12;
            if ((int)uVar1 < 0) goto code_r0x016ceb30;
            lVar27 = *(long *)(lVar26 + 0x28);
            if (lVar27 == 0) goto code_r0x016ced84;
            if (*(uint *)(lVar27 + 0x18) <= uVar1) goto code_r0x016ced88;
          } while (*(int *)(lVar27 + (ulong)uVar1 * 4 + 0x20) == 0);
          lVar32 = uVar30 + 8;
          do {
            uVar30 = lVar32 - 8;
            if (*(uint *)(lVar27 + 0x18) <= uVar30) goto code_r0x016ced88;
            iVar9 = *(int *)(lVar27 + lVar32 * 4);
            sVar4 = 0;
            if (iVar9 != 0) {
              sVar4 = (short)uVar12 - (short)iVar9;
            }
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar26,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar26,(int)sVar4);
            lVar27 = *(long *)(lVar26 + 0x28);
            if (lVar27 == 0) goto code_r0x016ced84;
            if (*(uint *)(lVar27 + 0x18) <= uVar30) goto code_r0x016ced88;
            *(undefined4 *)(lVar27 + lVar32 * 4) = 0;
            lVar32 = lVar32 + -1;
            uVar11 = uVar1;
          } while (0 < (long)uVar30);
code_r0x016ceb30:
          uVar8 = *(undefined4 *)(lVar26 + 0x34);
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar26,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar26,(int)(short)((short)uVar12 - (short)uVar8));
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar26,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar26,(int)(short)((short)uVar11 * 2 + 6));
          uVar11 = *(uint *)(lVar26 + 0x40);
          if (0 < (int)uVar11) {
            uVar30 = 0;
            do {
              lVar27 = *(long *)(lVar26 + 0x18);
              if (((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0)) ||
                 (lVar32 = *(long *)(lVar26 + 0x38), lVar32 == 0)) goto code_r0x016ced84;
              if (*(uint *)(lVar32 + 0x18) <= uVar30) goto code_r0x016ced88;
              iVar10 = *(int *)(*(long *)(lVar27 + 0x10) + 0x18) -
                       *(int *)(lVar32 + uVar30 * 4 + 0x20);
              iVar9 = *(int *)(lVar26 + 0x10);
              sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar27,iVar10,2);
              if (*(long *)(lVar26 + 0x18) == 0) goto code_r0x016ced84;
              sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar26 + 0x18),iVar9,2);
              if (sVar4 == sVar5) {
                if (sVar4 < 3) {
code_r0x016cec64:
                  lVar27 = *(long *)(lVar26 + 0x38);
                  if (lVar27 == 0) goto code_r0x016ced84;
                  if (*(uint *)(lVar27 + 0x18) <= (uint)uVar30) goto code_r0x016ced88;
                  iVar9 = *(int *)(lVar27 + uVar30 * 4 + 0x20);
                  if (iVar9 == 0) {
                    uVar11 = *(uint *)(lVar26 + 0x40);
                    goto code_r0x016cecac;
                  }
                  lVar27 = *(long *)(lVar26 + 0x18);
                  if ((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0)) goto code_r0x016ced84;
                  iVar10 = *(int *)(*(long *)(lVar27 + 0x10) + 0x18) - iVar7;
                  *(int *)(lVar26 + 0x10) = iVar10;
                  iVar9 = iVar9 - iVar7;
                  goto code_r0x016ced3c;
                }
                iVar33 = 2;
                while( true ) {
                  if (*(long *)(lVar26 + 0x18) == 0) goto code_r0x016ced84;
                  sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar26 + 0x18),iVar10 + iVar33,2);
                  if (*(long *)(lVar26 + 0x18) == 0) goto code_r0x016ced84;
                  sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar26 + 0x18),iVar9 + iVar33,2);
                  if (sVar5 != sVar6) break;
                  iVar33 = iVar33 + 2;
                  if (sVar4 <= iVar33) goto code_r0x016cec64;
                }
              }
              uVar30 = uVar30 + 1;
              uVar11 = *(uint *)(lVar26 + 0x40);
            } while ((long)uVar30 < (long)(int)uVar11);
          }
          lVar27 = *(long *)(lVar26 + 0x38);
          if (lVar27 == 0) {
code_r0x016ced84:
            func_0x00f78af4();
          }
          else {
code_r0x016cecac:
            if (uVar11 == *(uint *)(lVar27 + 0x18)) {
              lVar27 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar11 << 1);
              lVar32 = *(long *)(lVar26 + 0x38);
              if (lVar32 == 0) goto code_r0x016ced84;
              /*System.Array$$Copy*/ func_0x0292c49c(lVar32,lVar27,*(undefined4 *)(lVar32 + 0x18),0);
              *(long *)(lVar26 + 0x38) = lVar27;
              uVar11 = *(uint *)(lVar26 + 0x40);
            }
            *(uint *)(lVar26 + 0x40) = uVar11 + 1;
            uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar26);
            if (lVar27 == 0) goto code_r0x016ced84;
            if (uVar11 < *(uint *)(lVar27 + 0x18)) {
              *(undefined4 *)(lVar27 + (long)(int)uVar11 * 4 + 0x20) = uVar8;
              lVar27 = *(long *)(lVar26 + 0x18);
              if ((lVar27 != 0) && (*(long *)(lVar27 + 0x10) != 0)) {
                iVar10 = *(int *)(*(long *)(lVar27 + 0x10) + 0x18);
                iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar26);
                iVar10 = iVar10 - iVar7;
                iVar9 = iVar9 - iVar7;
code_r0x016ced3c:
                /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar27,iVar10,4);
                /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(lVar27,iVar10,4,(long)iVar9);
                *(undefined4 *)(lVar26 + 0x30) = 0xffffffff;
                return uVar12;
              }
              goto code_r0x016ced84;
            }
          }
code_r0x016ced88:
          uVar24 = func_0x00f78b24();
          func_0x00f78ac0(uVar24,0);
        }
        func_0x00f78a24(0x3d22a38);
        uVar24 = func_0x00f78aec();
        uVar16 = func_0x00f78a24(0x3d6cea8);
        iVar7 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar24,uVar16);
        uVar16 = func_0x00f78a24(0x3d56a30);
        auVar39 = func_0x00f78ac0(uVar24,uVar16);
        puVar19 = &stack0xfffffffffffffee0;
        lVar26 = *(long *)(auVar39._0_8_ + 0x18);
        iStack_144 = iVar7;
        if ((lVar26 != 0) && (*(long *)(lVar26 + 0x10) != 0)) {
          iVar9 = *(int *)(*(long *)(lVar26 + 0x10) + 0x18) - auVar39._8_4_;
          iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar26,iVar9,4);
          lVar26 = *(long *)(auVar39._0_8_ + 0x18);
          if (lVar26 != 0) {
            uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar26,(iVar9 - iVar10) + iVar7,2);
            if ((uVar12 & 0xffff) != 0) {
              return uVar12;
            }
            goto code_r0x016cee5c;
          }
        }
        func_0x00f78af4();
code_r0x016cee5c:
        uVar24 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_144,0);
        uVar16 = func_0x00f78a24(0x3d6ce88);
        uVar17 = func_0x00f78a24(0x3d66338);
        lVar26 = /*System.String$$Concat*/ func_0x029be39c(uVar16,uVar24,uVar17,0);
        func_0x00f78a24(0x3d22a38);
        uVar12 = func_0x00f78aec();
        uVar16 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar26);
        uVar24 = func_0x00f78a24(0x3d56a50);
        puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar37 = func_0x00f78ac0(uVar12,uVar24);
        puVar31 = auStack_150;
        do {
          uVar30 = auVar37._8_8_;
          lVar27 = auVar37._0_8_;
          *(ulong *)(puVar31 + -0x20) = uVar12;
          *(long *)(puVar31 + -0x18) = lVar26;
          *(undefined1 **)(puVar31 + -0x10) = puVar19;
          *(undefined **)(puVar31 + -8) = puVar25;
          puVar19 = puVar31 + -0x10;
          if ((int)uVar16 == 0) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar27,*(undefined4 *)(lVar27 + 0x20),4);
            uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar27,uVar30);
code_r0x016cef70:
            if (*(long *)(lVar27 + 0x18) != 0) {
              *(undefined4 *)(*(long *)(lVar27 + 0x18) + 0x18) = *(undefined4 *)(lVar27 + 0x10);
              return uVar12;
            }
          }
          else if (lVar27 != 0) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar27,*(undefined4 *)(lVar27 + 0x20),8);
            /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar27,uVar30);
            if ((*(long *)(lVar27 + 0x18) != 0) &&
               (lVar26 = *(long *)(*(long *)(lVar27 + 0x18) + 0x10), lVar26 != 0)) {
              uVar30 = (ulong)(uint)(*(int *)(lVar26 + 0x18) - *(int *)(lVar27 + 0x10));
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar27,4,0);
              uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar27,uVar30);
              goto code_r0x016cef70;
            }
          }
          puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar37 = func_0x00f78af4();
          uVar16 = 0;
          puVar31 = puVar31 + -0x20;
          lVar26 = lVar27;
          uVar12 = uVar30;
        } while( true );
      }
      puVar19 = (undefined1 *)0x0;
    }
    else {
      puVar19 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    uVar16 = auVar36._8_8_;
    uVar12 = auVar36._0_8_;
    auVar37._8_8_ = puVar19;
    auVar37._0_8_ = uVar12;
    param_4 = 0;
    *(dword **)((long)ppdVar3 + -0x20) = unaff_x20;
    *(int **)((long)ppdVar3 + -0x18) = piVar13;
    *(dword ***)((long)ppdVar3 + -0x10) = ppdVar3;
    *(undefined **)((long)ppdVar3 + -8) = puVar25;
    if ((auVar36._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar12,uVar16,uVar16,0,0);
    pdVar21 = *(dword **)((long)ppdVar3 + -0x10);
    puVar25 = *(undefined **)((long)ppdVar3 + -8);
    unaff_x20 = *(dword **)((long)ppdVar3 + -0x20);
    piVar13 = *(int **)((long)ppdVar3 + -0x18);
code_r0x016ce380:
    do {
      piVar14 = auVar37._8_8_;
      *(dword **)((long)ppdVar3 + -0x20) = unaff_x20;
      *(int **)((long)ppdVar3 + -0x18) = piVar13;
      *(dword **)((long)ppdVar3 + -0x10) = pdVar21;
      *(undefined **)((long)ppdVar3 + -8) = puVar25;
      puVar19 = (undefined1 *)((long)ppdVar3 + -0x10);
      uVar11 = auVar37._8_4_;
      if ((int)uVar11 < *(int *)(auVar37._0_8_ + 0x30)) {
        unaff_x20 = *(dword **)(auVar37._0_8_ + 0x28);
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        if (unaff_x20 == (dword *)0x0) goto code_r0x016ce410;
        if (uVar11 < unaff_x20[6]) {
          unaff_x20[(long)(int)uVar11 + 8] = (dword)uVar12;
          return uVar12;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        piVar14 = (int *)func_0x00f78aec();
        uVar24 = func_0x00f78a24(0x3d6ceb8);
        uVar16 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar14,uVar24);
        uVar24 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(piVar14,uVar24);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar24 = func_0x00f78b24();
      puVar25 = &FlatBuffers_FlatBufferBuilder__AddBool;
      auVar37 = func_0x00f78ac0(uVar24,0);
      puVar31 = auVar37._8_8_;
      auVar36._8_8_ = uVar16;
      auVar36._0_8_ = auVar37._0_8_;
      ppdVar3 = (dword **)((long)ppdVar3 + -0x20);
      piVar13 = piVar14;
code_r0x016ce420:
      uVar12 = auVar36._0_8_;
      auVar37._8_8_ = puVar31;
      auVar37._0_8_ = uVar12;
      *(undefined1 **)((long)ppdVar3 + -0x30) = unaff_x22;
      *(undefined **)((long)ppdVar3 + -0x28) = unaff_x21;
      *(dword **)((long)ppdVar3 + -0x20) = unaff_x20;
      *(int **)((long)ppdVar3 + -0x18) = piVar13;
      *(undefined1 **)((long)ppdVar3 + -0x10) = puVar19;
      *(undefined **)((long)ppdVar3 + -8) = puVar25;
      if ((auVar36._8_4_ == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
        return uVar12;
      }
      uVar16 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,auVar36._8_8_);
      unaff_x20 = *(dword **)((long)ppdVar3 + -0x20);
      piVar13 = *(int **)((long)ppdVar3 + -0x18);
      unaff_x22 = *(undefined1 **)((long)ppdVar3 + -0x30);
      unaff_x21 = *(undefined **)((long)ppdVar3 + -0x28);
      pdVar21 = *(dword **)((long)ppdVar3 + -0x10);
      puVar25 = *(undefined **)((long)ppdVar3 + -8);
    } while( true );
  }
  uVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(puVar25,*param_1 + (int)uVar12,4);
  uVar12 = *(ulong *)(puVar25 + 0x30);
  if (uVar12 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar12 + 0x18) != 0) {
    *(undefined4 *)(uVar12 + 0x20) = uVar8;
    puVar20 = *(undefined **)(puVar25 + 0x28);
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar12;
    uVar24 = 0;
    puVar19 = &stack0xffffffffffffffe0;
    puVar23 = (undefined *)0x4;
    pppppppuVar34 = (undefined8 *******)&stack0xfffffffffffffff0;
    puVar35 = &UNK_016cce74;
    goto code_r0x029387b8;
  }
  uVar24 = func_0x00f78b24();
  puVar25 = (undefined *)func_0x00f78ac0(uVar24,0);
  puStack_28 = &FlatBuffers_ByteBuffer__GetDouble;
  pdVar21 = &MACH_HEADER.cpusubtype;
  pppppppuStack_30 = (undefined8 *******)&stack0xfffffffffffffff0;
  uVar24 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634();
  uVar12 = *(ulong *)(puVar25 + 0x40);
  if (uVar12 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar12 + 0x18) != 0) {
    *(undefined8 *)(uVar12 + 0x20) = uVar24;
    puVar20 = *(undefined **)(puVar25 + 0x38);
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar12;
    uVar24 = 0;
    puVar19 = &stack0xffffffffffffffc0;
    puVar23 = (undefined *)0x8;
    pppppppuVar34 = &pppppppuStack_30;
    puVar35 = &UNK_016cceec;
    goto code_r0x029387b8;
  }
  uVar24 = func_0x00f78b24();
  auVar37 = func_0x00f78ac0(uVar24,0);
  puStack_48 = &FlatBuffers_ByteBuffer__PutByteArray;
  pppppppuStack_50 = &pppppppuStack_30;
  if ((bRam0000000003eb5cd1 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd1 = 1;
  }
  if (pdVar21 == (dword *)0x0) {
code_r0x016ccfdc:
    func_0x00f78af4();
code_r0x016ccfe0:
    func_0x00f78a24(0x3d1fce8);
    puVar25 = (undefined *)func_0x00f78aec();
    uVar24 = 0x3d6a458;
code_r0x016cd01c:
    uVar24 = func_0x00f78a24(uVar24);
    pdVar22 = (dword *)0x0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(puVar25,uVar24);
  }
  else {
    if (*(long *)(pdVar21 + 6) == 0) goto code_r0x016ccfe0;
    if ((int)*(long *)(pdVar21 + 6) < auVar37._8_4_) {
      func_0x00f78a24(0x3d1fce8);
      puVar25 = (undefined *)func_0x00f78aec();
      uVar24 = 0x3d72a70;
      goto code_r0x016cd01c;
    }
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) != '\0') {
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar37._0_8_,0,auVar37._8_8_);
      lVar26 = *(long *)(auVar37._0_8_ + 0x10);
      if (lVar26 != 0) {
        puVar20 = *(undefined **)(lVar26 + 0x10);
        auVar38._8_8_ = 0;
        auVar38._0_8_ = pdVar21;
        uVar24 = 0;
        puVar19 = &stack0xffffffffffffffc0;
        puVar23 = auVar37._8_8_;
        pppppppuVar34 = pppppppuStack_50;
        puVar35 = puStack_48;
        goto code_r0x029387b8;
      }
      goto code_r0x016ccfdc;
    }
    func_0x00f78a24(0x3d238c8);
    puVar25 = (undefined *)func_0x00f78aec();
    uVar24 = func_0x00f78a24(0x3d69698);
    pdVar22 = (dword *)0x0;
    /*System.NotImplementedException$$.ctor*/ func_0x02950308(puVar25,uVar24);
  }
  uVar24 = func_0x00f78a24(0x3d52cf8);
  auVar37 = func_0x00f78ac0(puVar25,uVar24);
  puVar15 = auVar37._8_8_;
  puVar35 = auVar37._0_8_;
  puVar19 = &stack0xffffffffffffff60;
  pppppppuVar34 = (undefined8 *******)&stack0xffffffffffffff80;
  puVar31 = (undefined1 *)0x3eb5000;
  pdStack_90 = pdVar21;
  puStack_88 = puVar25;
  if ((bRam0000000003eb5cd2 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    func_0x00f78a20(0x3d23210);
    bRam0000000003eb5cd2 = 1;
  }
  if (auVar37._8_4_ == 0) {
    func_0x00f78a24(0x3d1fce8);
    puVar15 = (undefined *)func_0x00f78aec();
    uVar24 = func_0x00f78a24(0x3d6a458);
    puVar23 = (undefined *)0x0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(puVar15,uVar24);
code_r0x016cd1bc:
    uVar24 = func_0x00f78a24(0x3d52d00);
    func_0x00f78ac0(puVar15,uVar24);
  }
  else {
    puVar31 = (undefined1 *)0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
      func_0x00f78a24(0x3d238c8);
      puVar15 = (undefined *)func_0x00f78aec();
      uVar24 = func_0x00f78a24(0x3d69698);
      puVar23 = (undefined *)0x0;
      /*System.NotImplementedException$$.ctor*/ func_0x02950308(puVar15,uVar24);
      goto code_r0x016cd1bc;
    }
    puVar23 = puVar15;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(puVar35,0);
    if (*(long *)(puVar35 + 0x10) != 0) {
      puVar29 = *(undefined8 **)(*(long *)(puVar35 + 0x10) + 0x10);
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
      uVar24 = func_0x00f76cf0(*puVar29);
      uVar16 = func_0x00faf4d8(puVar29,uVar24,0);
                    /* WARNING: Could not recover jumptable at 0x033034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (*(code *)PTR_DAT_03c8cea0)(uVar16,pdVar22,(int)uVar24 * auVar37._8_4_);
      return uVar12;
    }
  }
  auVar37 = func_0x00f78af4();
  puVar20 = auVar37._8_8_;
  lVar26 = auVar37._0_8_;
  puStack_d0 = puVar31;
  puStack_c8 = puVar35;
  pdStack_c0 = pdVar22;
  puStack_b8 = puVar15;
  if ((bRam0000000003eb5cd3 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd3 = 1;
  }
  if (puVar20 == (undefined *)0x0) {
code_r0x016cd29c:
    func_0x00f78af4();
  }
  else if ((int)puVar23 <= *(int *)(puVar20 + 0x18)) {
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') goto code_r0x016cd33c;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar26,0,puVar23);
    if (*(long *)(lVar26 + 0x10) != 0) {
      auVar38._8_4_ = *(undefined4 *)(lVar26 + 0x18);
      auVar38._0_8_ = *(undefined8 *)(*(long *)(lVar26 + 0x10) + 0x10);
      auVar38._12_4_ = 0;
      uVar24 = 0;
      puVar35 = &FlatBuffers_ByteBuffer__CopyByteArray;
      puVar25 = puStack_b8;
      unaff_x20 = pdStack_c0;
      unaff_x21 = puStack_c8;
      unaff_x22 = puStack_d0;
code_r0x029387b8:
      do {
        puVar31 = auVar38._8_8_;
        lVar26 = auVar38._0_8_;
        *(ulong *)(puVar19 + -0x40) = unaff_x24;
        *(ulong *)(puVar19 + -0x38) = unaff_x23;
        *(undefined1 **)(puVar19 + -0x30) = unaff_x22;
        *(undefined **)(puVar19 + -0x28) = unaff_x21;
        *(dword **)(puVar19 + -0x20) = unaff_x20;
        *(undefined **)(puVar19 + -0x18) = puVar25;
        *(undefined8 ********)(puVar19 + -0x10) = pppppppuVar34;
        *(undefined **)(puVar19 + -8) = puVar35;
        if (lVar26 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar16 = func_0x00f78aec();
          uVar24 = 0x3d7b990;
code_r0x02938884:
          uVar24 = func_0x00f78a24(uVar24);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar16,uVar24,0);
          uVar24 = func_0x00f78a24(0x3d52be0);
          func_0x00f78ac0(uVar16,uVar24);
code_r0x029388b0:
          uVar24 = func_0x00f78a24(0x3d70548);
          uVar16 = /*Locale$$GetText*/ func_0x02af42b4(uVar24,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar17 = func_0x00f78aec();
          uVar24 = 0x3d7b998;
code_r0x02938954:
          auVar38._8_8_ = unaff_x22;
          auVar38._0_8_ = unaff_x23;
          uVar18 = func_0x00f78a24(uVar24);
          uVar24 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar17,uVar18,uVar16);
        }
        else {
          unaff_x21 = puVar20;
          if (puVar20 == (undefined *)0x0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar16 = func_0x00f78aec();
            uVar24 = 0x3d78c30;
            goto code_r0x02938884;
          }
          unaff_x22 = puVar31;
          if (auVar38._8_4_ < 0) goto code_r0x029388b0;
          iVar7 = (int)uVar24;
          if (iVar7 < 0) {
            uVar24 = func_0x00f78a24(0x3d70548);
            uVar16 = /*Locale$$GetText*/ func_0x02af42b4(uVar24,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar17 = func_0x00f78aec();
            uVar24 = 0x3d78c38;
            goto code_r0x02938954;
          }
          iVar9 = (int)puVar23;
          if (iVar9 < 0) {
            uVar24 = func_0x00f78a24(0x3d70548);
            uVar16 = /*Locale$$GetText*/ func_0x02af42b4(uVar24,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar17 = func_0x00f78aec();
            uVar24 = 0x3d78638;
            goto code_r0x02938954;
          }
          uVar12 = func_0x00f836d8(lVar26,puVar31,puVar20);
          if (((uVar12 & 1) != 0) ||
             ((iVar10 = /*System.Buffer$$ByteLength*/ func_0x0294274c(lVar26), auVar38._8_4_ <= iVar10 - iVar9 &&
              (uVar12 = /*System.Buffer$$ByteLength*/ func_0x0294274c(puVar20), iVar7 <= (int)uVar12 - iVar9)))) {
            return uVar12;
          }
          uVar16 = func_0x00f78a24(0x3d70ad8);
          uVar16 = /*Locale$$GetText*/ func_0x02af42b4(uVar16,0);
          func_0x00f78a24(0x3d1fce8);
          uVar17 = func_0x00f78aec();
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar17,uVar16,0);
        }
        uVar18 = func_0x00f78a24(0x3d52be0);
        uVar11 = func_0x00f78ac0(uVar17,uVar18);
        *(long *)(puVar19 + -0x70) = auVar38._8_8_;
        *(undefined **)(puVar19 + -0x68) = unaff_x21;
        *(undefined8 *)(puVar19 + -0x60) = uVar17;
        *(undefined8 *)(puVar19 + -0x58) = uVar16;
        *(undefined1 **)(puVar19 + -0x50) = puVar19 + -0x10;
        *(undefined **)(puVar19 + -0x48) = &Mono_Math_BigInteger__GenerateRandom;
        if ((bRam0000000003eb8f4c & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          bRam0000000003eb8f4c = 1;
        }
        if (((*(ushort *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x20 = (dword *)/*Mono.Math.BigInteger$$get_Rng*/ func_0x02938598();
        *(ulong *)(puVar19 + -0x80) = unaff_x24;
        *(long *)(puVar19 + -0x78) = auVar38._0_8_;
        *(undefined8 *)(puVar19 + -0x70) = *(undefined8 *)(puVar19 + -0x70);
        *(undefined8 *)(puVar19 + -0x68) = *(undefined8 *)(puVar19 + -0x68);
        *(undefined8 *)(puVar19 + -0x60) = *(undefined8 *)(puVar19 + -0x60);
        *(undefined8 *)(puVar19 + -0x58) = *(undefined8 *)(puVar19 + -0x58);
        *(undefined8 *)(puVar19 + -0x50) = *(undefined8 *)(puVar19 + -0x50);
        *(undefined8 *)(puVar19 + -0x48) = *(undefined8 *)(puVar19 + -0x48);
        pppppppuVar34 = (undefined8 *******)(puVar19 + -0x50);
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
        puVar25 = (undefined *)func_0x00f78aec(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078);
        puVar20 = (undefined *)(ulong)(uVar1 + 1);
        /*Mono.Math.BigInteger$$.ctor*/ func_0x029379ec();
        unaff_x21 = (undefined *)(ulong)(uVar1 << 2);
        unaff_x22 = (undefined1 *)func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,unaff_x21);
        puVar31 = (undefined1 *)0x3d20078;
        if (unaff_x20 == (dword *)0x0) {
code_r0x029387a8:
          unaff_x22 = puVar31;
          func_0x00f78af4();
          uVar16 = func_0x00f78b24();
          puVar35 = &System_Buffer__BlockCopy;
          auVar38 = func_0x00f78ac0(uVar16,0);
          puVar19 = puVar19 + -0x80;
          goto code_r0x029387b8;
        }
        puVar20 = *(undefined **)(*(long *)unaff_x20 + 0x1a0);
        (**(code **)(*(long *)unaff_x20 + 0x198))(unaff_x20,unaff_x22);
        puVar31 = unaff_x22;
        if (puVar25 == (undefined *)0x0) goto code_r0x029387a8;
        puVar20 = *(undefined **)(puVar25 + 0x18);
        auVar38._8_8_ = 0;
        auVar38._0_8_ = unaff_x22;
        uVar24 = 0;
        puVar35 = &UNK_02938710;
        puVar19 = puVar19 + -0x80;
        puVar23 = unaff_x21;
      } while( true );
    }
    goto code_r0x016cd29c;
  }
  uStack_d8._4_4_ = (int)puVar23;
  uVar24 = func_0x00f78a24(0x3d22910);
  uVar24 = func_0x00f78ae0(uVar24,(long)&uStack_d8 + 4);
  func_0x00055e5c(puVar20);
  uStack_d8 = (int *)CONCAT44(uStack_d8._4_4_,(int)*(undefined8 *)(puVar20 + 0x18));
  uVar16 = func_0x00f78a24(0x3d22910);
  uVar16 = func_0x00f78ae0(uVar16,&uStack_d8);
  uVar17 = func_0x00f78a24(0x3d72a68);
  uVar24 = /*System.String$$Format*/ func_0x029bcac4(uVar17,uVar24,uVar16,0);
  func_0x00f78a24(0x3d1fce8);
  uVar16 = func_0x00f78aec();
  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar16,uVar24,0);
  uVar24 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar16,uVar24);
code_r0x016cd33c:
  func_0x00f78a24(0x3d238c8);
  uVar24 = func_0x00f78aec();
  uVar16 = func_0x00f78a24(0x3d69698);
  /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar24,uVar16,0);
  uVar16 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar24,uVar16);
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
  lVar26 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, int>_TypeInfo*/ uRam0000000003d1c590);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(lVar26,uRam0000000003d30160);
  uVar24 = /*bool_var*/ uRam0000000003d19080;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar24 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar24,0);
  if (lVar26 == 0) {
    lVar26 = func_0x00f78af4();
    return *(ulong *)(lVar26 + 0x10);
  }
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar26,uVar24,1,uRam0000000003d30168);
  uVar24 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*float_var*/ uRam0000000003d19e28,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar26,uVar24,4,uRam0000000003d30168);
  uVar24 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*double_var*/ uRam0000000003d19388,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar26,uVar24,8,uRam0000000003d30168);
  uVar24 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*sbyte_var*/ uRam0000000003d19d88,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar26,uVar24,1,uRam0000000003d30168);
  uVar24 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*byte_var*/ uRam0000000003d190e0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar26,uVar24,1,uRam0000000003d30168);
  uVar24 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*short_var*/ uRam0000000003d198b0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar26,uVar24,2,uRam0000000003d30168);
  uVar24 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ushort_var*/ uRam0000000003d1a0a8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar26,uVar24,2,uRam0000000003d30168);
  uVar24 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*int_var*/ uRam0000000003d198c0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar26,uVar24,4,uRam0000000003d30168);
  uVar24 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*uint_var*/ uRam0000000003d1a0b8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar26,uVar24,4,uRam0000000003d30168);
  uVar24 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ulong_var*/ uRam0000000003d1a0c8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar26,uVar24,8,uRam0000000003d30168);
  uVar24 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*long_var*/ uRam0000000003d198d0,0);
  uVar12 = /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar26,uVar24,8,uRam0000000003d30168);
  **(long **)(/*FlatBuffers.ByteBuffer_TypeInfo*/ lRam0000000003d203b0 + 0xb8) = lVar26;
  return uVar12;
}



// ============================================================
// RVA: 0x166546c | Core.Services.Achievement.get_Completed
// ============================================================

/* WARNING: Possible PIC construction at 0x016654f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166550c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01665524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01665510) */
/* WARNING: Removing unreachable block (ram,0x016654f8) */
/* WARNING: Removing unreachable block (ram,0x01665528) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Achievement__get_Completed
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 ***pppuVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long unaff_x20;
  int *piVar23;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 **ppuVar24;
  undefined *puVar25;
  float extraout_s0;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_150 [4];
  undefined1 auStack_130 [12];
  int iStack_124;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar20 = 0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,10);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (*(long *)(param_1 + 2) != 0) {
    iVar7 = /*FlatBuffers.ByteBuffer$$Get*/ func_0x016cccfc(*(long *)(param_1 + 2),*param_1 + (int)uVar11,0);
    return (ulong)(iVar7 != 0);
  }
  auVar26 = func_0x00f78af4();
  piVar12 = auVar26._0_8_;
  puVar2 = &stack0xffffffffffffffa0;
  puStack_28 = &Core_Services_Achievement__CreateAchievement;
  ppuVar24 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if (piVar12 != (int *)0x0) {
    puVar25 = &UNK_016654f8;
    uVar13 = param_4;
    piVar23 = piVar12;
    unaff_x21 = auVar26._8_8_;
    unaff_x22 = uVar20;
code_r0x016ce2a4:
    uVar14 = 0;
    pppuVar3 = (undefined1 ***)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(int **)(puVar2 + -0x20) = piVar23;
    *(undefined8 *)(puVar2 + -0x18) = uVar13;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar24;
    *(undefined **)(puVar2 + -8) = puVar25;
    unaff_x20 = 4;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar12);
    if (*(long *)(piVar12 + 10) != 0) {
      if (*(int *)(*(long *)(piVar12 + 10) + 0x18) < 4) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(piVar12 + 10) = uVar13;
      }
      piVar12[0xc] = 4;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar12);
      piVar12[0xd] = (int)uVar11;
      return uVar11;
    }
    auVar26 = func_0x00f78af4();
    param_1 = piVar12;
    ppuVar24 = (undefined1 **)(puVar2 + -0x10);
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  uVar11 = func_0x00f78af4();
  ppuStack_70 = ppuVar24;
  if (uVar11 != 0) {
    puStack_68 = &Core_Services_Achievement__AddPercentComplete;
    if (extraout_s0 == 0.0 && *(char *)(uVar11 + 0x48) == '\0') {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,4);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,uVar11);
    auVar26._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 2);
    auVar26._0_8_ = uVar11;
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffffa0;
    ppuVar24 = ppuStack_70;
    puVar25 = puStack_68;
    goto code_r0x016ce380;
  }
  pppuVar3 = &ppuStack_70;
  puStack_68 = &Core_Services_Achievement__AddPercentComplete;
  puVar25 = &Core_Services_Achievement__AddTitle;
  auVar27 = func_0x00f78af4();
  if (auVar27._0_8_ == 0) {
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffff80;
    puVar25 = &Core_Services_Achievement__AddId;
    auVar27 = func_0x00f78af4();
    if (auVar27._0_8_ == 0) {
      pppuVar3 = (undefined1 ***)&stack0xffffffffffffff70;
      puVar18 = &stack0xffffffffffffff70;
      puVar25 = &Core_Services_Achievement__AddCompleted;
      auVar27 = func_0x00f78af4();
      if (auVar27._0_8_ != 0) {
        puVar19 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
        param_4 = 0;
        goto code_r0x016ce420;
      }
      puStack_98 = &Core_Services_Achievement__AddCompleted;
      puStack_a0 = &stack0xffffffffffffff70;
      lVar15 = func_0x00f78af4();
      puVar2 = &stack0xffffffffffffff40;
      puStack_a8 = &Core_Services_Achievement__EndAchievement;
      ppuVar24 = &puStack_b0;
      piVar23 = (int *)0x3eb5000;
      puStack_b0 = (undefined1 *)&puStack_a0;
      if ((bRam0000000003eb5898 & 1) == 0) {
        puStack_b0 = (undefined1 *)&puStack_a0;
        func_0x00f78a20(0x3d3efd8);
        bRam0000000003eb5898 = 1;
      }
      if (lVar15 == 0) {
        puVar25 = &Core_Services_Achievement__StartAchievement;
        piVar12 = (int *)func_0x00f78af4();
        if (piVar12 == (int *)0x0) {
          lVar15 = func_0x00f78af4();
          return *(ulong *)(lVar15 + 8);
        }
        uVar13 = 0;
        goto code_r0x016ce2a4;
      }
      uVar11 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar15 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,0);
        uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
        unaff_x21 = (ulong)*(uint *)(lVar15 + 0x30);
        uVar17 = *(uint *)(lVar15 + 0x30) - 1;
        if (-2 < (int)uVar17) {
          uVar17 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar17;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar7 = (int)uVar11;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar21 = *(long *)(lVar15 + 0x28);
          if (lVar21 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar21 + 0x18) <= uVar1) goto code_r0x016ced88;
        } while (*(int *)(lVar21 + (ulong)uVar1 * 4 + 0x20) == 0);
        unaff_x22 = unaff_x21 + 8;
        do {
          uVar20 = unaff_x22 - 8;
          if (*(uint *)(lVar21 + 0x18) <= uVar20) goto code_r0x016ced88;
          iVar9 = *(int *)(lVar21 + unaff_x22 * 4);
          sVar4 = 0;
          if (iVar9 != 0) {
            sVar4 = (short)uVar11 - (short)iVar9;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)sVar4);
          lVar21 = *(long *)(lVar15 + 0x28);
          if (lVar21 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar21 + 0x18) <= uVar20) goto code_r0x016ced88;
          *(undefined4 *)(lVar21 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar17 = uVar1;
        } while (0 < (long)uVar20);
code_r0x016ceb30:
        uVar8 = *(undefined4 *)(lVar15 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)(short)((short)uVar11 - (short)uVar8));
        uVar17 = uVar17 * 2 + 6;
        unaff_x21 = (ulong)uVar17;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)(short)uVar17);
        unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
        if (0 < (int)*(uint *)(lVar15 + 0x40)) {
          uVar20 = 0;
          do {
            lVar21 = *(long *)(lVar15 + 0x18);
            if (((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) ||
               (lVar22 = *(long *)(lVar15 + 0x38), lVar22 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar22 + 0x18) <= uVar20) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar21 + 0x10) + 0x18) - *(int *)(lVar22 + uVar20 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar17 = *(uint *)(lVar15 + 0x10);
            unaff_x22 = (ulong)uVar17;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar21,unaff_x21,2);
            if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),unaff_x22,2);
            if (sVar4 == sVar5) {
              if (sVar4 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar15 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar20) goto code_r0x016ced88;
                iVar9 = *(int *)(unaff_x21 + uVar20 * 4 + 0x20);
                if (iVar9 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar15 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar7;
                *(int *)(lVar15 + 0x10) = iVar10;
                iVar9 = iVar9 - iVar7;
                goto code_r0x016ced3c;
              }
              iVar9 = 2;
              while( true ) {
                if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),uVar1 + iVar9,2);
                if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),uVar17 + iVar9,2);
                if (sVar5 != sVar6) break;
                iVar9 = iVar9 + 2;
                if (sVar4 <= iVar9) goto code_r0x016cec64;
              }
            }
            uVar20 = uVar20 + 1;
            unaff_x22 = (ulong)*(int *)(lVar15 + 0x40);
          } while ((long)uVar20 < (long)unaff_x22);
        }
        unaff_x21 = *(ulong *)(lVar15 + 0x38);
        if (unaff_x21 == 0) {
code_r0x016ced84:
          func_0x00f78af4();
        }
        else {
code_r0x016cecac:
          if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
            unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
            lVar21 = *(long *)(lVar15 + 0x38);
            if (lVar21 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar21,unaff_x21,*(undefined4 *)(lVar21 + 0x18),0);
            *(ulong *)(lVar15 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
          }
          uVar17 = (uint)unaff_x22;
          *(uint *)(lVar15 + 0x40) = uVar17 + 1;
          uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar17 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar17 * 4 + 0x20) = uVar8;
            unaff_x21 = *(ulong *)(lVar15 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
              iVar10 = iVar10 - iVar7;
              iVar9 = iVar9 - iVar7;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
              *(undefined4 *)(lVar15 + 0x30) = 0xffffffff;
              return uVar11;
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
      uVar14 = func_0x00f78a24(0x3d6cea8);
      iVar7 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a30);
      auVar28 = func_0x00f78ac0(uVar13,uVar14);
      puStack_f8 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar3 = &ppuStack_100;
      lVar15 = *(long *)(auVar28._0_8_ + 0x18);
      iStack_124 = iVar7;
      uStack_120 = unaff_x22;
      uStack_118 = unaff_x21;
      uStack_110 = uVar11;
      uStack_108 = uVar13;
      ppuStack_100 = &puStack_b0;
      if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
        iVar9 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - auVar28._8_4_;
        iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,iVar9,4);
        lVar15 = *(long *)(auVar28._0_8_ + 0x18);
        if (lVar15 != 0) {
          uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,(iVar9 - iVar10) + iVar7,2);
          if ((uVar11 & 0xffff) != 0) {
            return uVar11;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_124,0);
      uVar14 = func_0x00f78a24(0x3d6ce88);
      uVar16 = func_0x00f78a24(0x3d66338);
      lVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar13,uVar16,0);
      func_0x00f78a24(0x3d22a38);
      uVar11 = func_0x00f78aec();
      uVar14 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar15);
      uVar13 = func_0x00f78a24(0x3d56a50);
      puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar26 = func_0x00f78ac0(uVar11,uVar13);
      puVar18 = auStack_130;
      do {
        uVar20 = auVar26._8_8_;
        lVar21 = auVar26._0_8_;
        *(ulong *)(puVar18 + -0x20) = uVar11;
        *(long *)(puVar18 + -0x18) = lVar15;
        *(undefined1 ****)(puVar18 + -0x10) = pppuVar3;
        *(undefined **)(puVar18 + -8) = puVar25;
        pppuVar3 = (undefined1 ***)(puVar18 + -0x10);
        if ((int)uVar14 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),4);
          uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar20);
code_r0x016cef70:
          if (*(long *)(lVar21 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar21 + 0x18) + 0x18) = *(undefined4 *)(lVar21 + 0x10);
            return uVar11;
          }
        }
        else if (lVar21 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,*(undefined4 *)(lVar21 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar21,uVar20);
          if ((*(long *)(lVar21 + 0x18) != 0) &&
             (lVar15 = *(long *)(*(long *)(lVar21 + 0x18) + 0x10), lVar15 != 0)) {
            uVar20 = (ulong)(uint)(*(int *)(lVar15 + 0x18) - *(int *)(lVar21 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar21,4,0);
            uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar21,uVar20);
            goto code_r0x016cef70;
          }
        }
        puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar26 = func_0x00f78af4();
        uVar14 = 0;
        puVar18 = puVar18 + -0x20;
        lVar15 = lVar21;
        uVar11 = uVar20;
      } while( true );
    }
    puVar18 = (undefined1 *)0x0;
  }
  else {
    puVar18 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  uVar14 = auVar27._8_8_;
  uVar11 = auVar27._0_8_;
  auVar26._8_8_ = puVar18;
  auVar26._0_8_ = uVar11;
  param_4 = 0;
  *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)pppuVar3 + -0x18) = param_1;
  *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar3;
  *(undefined **)((long)pppuVar3 + -8) = puVar25;
  if ((auVar27._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar11,uVar14,uVar14,0,0);
  ppuVar24 = *(undefined1 ***)((long)pppuVar3 + -0x10);
  puVar25 = *(undefined **)((long)pppuVar3 + -8);
  unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
  param_1 = *(int **)((long)pppuVar3 + -0x18);
code_r0x016ce380:
  do {
    piVar12 = auVar26._8_8_;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)pppuVar3 + -0x18) = param_1;
    *(undefined1 ***)((long)pppuVar3 + -0x10) = ppuVar24;
    *(undefined **)((long)pppuVar3 + -8) = puVar25;
    puVar18 = (undefined1 *)((long)pppuVar3 + -0x10);
    uVar17 = auVar26._8_4_;
    if ((int)uVar17 < *(int *)(auVar26._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar26._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar17 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar17 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      piVar12 = (int *)func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6ceb8);
      uVar14 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar12,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(piVar12,uVar13);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar13 = func_0x00f78b24();
    puVar25 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar26 = func_0x00f78ac0(uVar13,0);
    puVar19 = auVar26._8_8_;
    auVar27._8_8_ = uVar14;
    auVar27._0_8_ = auVar26._0_8_;
    pppuVar3 = (undefined1 ***)((long)pppuVar3 + -0x20);
    param_1 = piVar12;
code_r0x016ce420:
    uVar11 = auVar27._0_8_;
    auVar26._8_8_ = puVar19;
    auVar26._0_8_ = uVar11;
    *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
    *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(int **)((long)pppuVar3 + -0x18) = param_1;
    *(undefined1 **)((long)pppuVar3 + -0x10) = puVar18;
    *(undefined **)((long)pppuVar3 + -8) = puVar25;
    if ((auVar27._8_4_ == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,auVar27._8_8_);
    unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
    param_1 = *(int **)((long)pppuVar3 + -0x18);
    unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
    unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
    ppuVar24 = *(undefined1 ***)((long)pppuVar3 + -0x10);
    puVar25 = *(undefined **)((long)pppuVar3 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x16654c0 | Core.Services.Achievement.CreateAchievement
// ============================================================

/* WARNING: Possible PIC construction at 0x016654f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0166550c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01665524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01665510) */
/* WARNING: Removing unreachable block (ram,0x016654f8) */
/* WARNING: Removing unreachable block (ram,0x01665528) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Achievement__CreateAchievement
                (long param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 ***pppuVar3;
  undefined1 *puVar4;
  short sVar5;
  undefined4 uVar8;
  short sVar6;
  short sVar7;
  int iVar9;
  int iVar10;
  long lVar11;
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
  undefined *puVar22;
  float extraout_s0;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  ulong auStack_130 [4];
  undefined1 auStack_110 [12];
  int iStack_104;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  
  puVar2 = &stack0xffffffffffffffc0;
  ppuVar21 = (undefined1 **)&stack0xfffffffffffffff0;
  if (param_1 != 0) {
    puVar22 = (undefined *)0x16654f8;
    uVar12 = param_4;
    lVar18 = param_1;
    unaff_x21 = param_2;
    unaff_x22 = param_3;
code_r0x016ce2a4:
    uVar13 = 0;
    pppuVar3 = (undefined1 ***)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = lVar18;
    *(undefined8 *)(puVar2 + -0x18) = uVar12;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar21;
    *(undefined **)(puVar2 + -8) = puVar22;
    unaff_x20 = 4;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 4) {
        uVar12 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(param_1 + 0x28) = uVar12;
      }
      *(undefined4 *)(param_1 + 0x30) = 4;
      uVar19 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar19;
      return uVar19;
    }
    auVar24 = func_0x00f78af4();
    unaff_x19 = param_1;
    ppuVar21 = (undefined1 **)(puVar2 + -0x10);
    puVar22 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  uVar19 = func_0x00f78af4();
  ppuStack_50 = ppuVar21;
  if (uVar19 != 0) {
    puStack_48 = &Core_Services_Achievement__AddPercentComplete;
    if (extraout_s0 == 0.0 && *(char *)(uVar19 + 0x48) == '\0') {
      return uVar19;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,4);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,uVar19);
    auVar24._8_8_ = 2;
    auVar24._0_8_ = uVar19;
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffffc0;
    ppuVar21 = ppuStack_50;
    puVar22 = puStack_48;
    goto code_r0x016ce380;
  }
  pppuVar3 = &ppuStack_50;
  puStack_48 = &Core_Services_Achievement__AddPercentComplete;
  puVar22 = &Core_Services_Achievement__AddTitle;
  auVar23 = func_0x00f78af4();
  if (auVar23._0_8_ == 0) {
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffffa0;
    puVar22 = &Core_Services_Achievement__AddId;
    auVar23 = func_0x00f78af4();
    if (auVar23._0_8_ == 0) {
      pppuVar3 = (undefined1 ***)&stack0xffffffffffffff90;
      puVar4 = &stack0xffffffffffffff90;
      puVar22 = &Core_Services_Achievement__AddCompleted;
      auVar23 = func_0x00f78af4();
      if (auVar23._0_8_ != 0) {
        uVar12 = 3;
        param_4 = 0;
        goto code_r0x016ce420;
      }
      puStack_78 = &Core_Services_Achievement__AddCompleted;
      puStack_80 = &stack0xffffffffffffff90;
      lVar11 = func_0x00f78af4();
      puVar2 = &stack0xffffffffffffff60;
      puStack_88 = &Core_Services_Achievement__EndAchievement;
      ppuVar21 = &puStack_90;
      lVar18 = 0x3eb5000;
      puStack_90 = (undefined1 *)&puStack_80;
      if ((bRam0000000003eb5898 & 1) == 0) {
        puStack_90 = (undefined1 *)&puStack_80;
        func_0x00f78a20(0x3d3efd8);
        bRam0000000003eb5898 = 1;
      }
      if (lVar11 == 0) {
        puVar22 = &Core_Services_Achievement__StartAchievement;
        param_1 = func_0x00f78af4();
        if (param_1 == 0) {
          lVar18 = func_0x00f78af4();
          return *(ulong *)(lVar18 + 8);
        }
        uVar12 = 0;
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
            uVar1 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) - *(int *)(lVar16 + uVar20 * 4 + 0x20)
            ;
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
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
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
      auVar25 = func_0x00f78ac0(uVar12,uVar13);
      puStack_d8 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar3 = &ppuStack_e0;
      lVar18 = *(long *)(auVar25._0_8_ + 0x18);
      iStack_104 = iVar17;
      uStack_100 = unaff_x22;
      uStack_f8 = unaff_x21;
      uStack_f0 = uVar19;
      uStack_e8 = uVar12;
      ppuStack_e0 = &puStack_90;
      if ((lVar18 != 0) && (*(long *)(lVar18 + 0x10) != 0)) {
        iVar9 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) - auVar25._8_4_;
        iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,iVar9,4);
        lVar18 = *(long *)(auVar25._0_8_ + 0x18);
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
      uVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_104,0);
      uVar13 = func_0x00f78a24(0x3d6ce88);
      uVar14 = func_0x00f78a24(0x3d66338);
      lVar18 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar12,uVar14,0);
      func_0x00f78a24(0x3d22a38);
      uVar19 = func_0x00f78aec();
      uVar13 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar19,lVar18);
      uVar12 = func_0x00f78a24(0x3d56a50);
      puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar24 = func_0x00f78ac0(uVar19,uVar12);
      puVar4 = auStack_110;
      do {
        uVar20 = auVar24._8_8_;
        lVar11 = auVar24._0_8_;
        *(ulong *)(puVar4 + -0x20) = uVar19;
        *(long *)(puVar4 + -0x18) = lVar18;
        *(undefined1 ****)(puVar4 + -0x10) = pppuVar3;
        *(undefined **)(puVar4 + -8) = puVar22;
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
        puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar24 = func_0x00f78af4();
        uVar13 = 0;
        puVar4 = puVar4 + -0x20;
        lVar18 = lVar11;
        uVar19 = uVar20;
      } while( true );
    }
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  uVar13 = auVar23._8_8_;
  uVar19 = auVar23._0_8_;
  auVar24._8_8_ = uVar12;
  auVar24._0_8_ = uVar19;
  param_4 = 0;
  *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
  *(long *)((long)pppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar3;
  *(undefined **)((long)pppuVar3 + -8) = puVar22;
  if ((auVar23._8_4_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
    return uVar19;
  }
  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar19,uVar13,uVar13,0,0);
  ppuVar21 = *(undefined1 ***)((long)pppuVar3 + -0x10);
  puVar22 = *(undefined **)((long)pppuVar3 + -8);
  unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
  unaff_x19 = *(long *)((long)pppuVar3 + -0x18);
code_r0x016ce380:
  do {
    lVar18 = auVar24._8_8_;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(long *)((long)pppuVar3 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)pppuVar3 + -0x10) = ppuVar21;
    *(undefined **)((long)pppuVar3 + -8) = puVar22;
    puVar4 = (undefined1 *)((long)pppuVar3 + -0x10);
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
      uVar12 = func_0x00f78a24(0x3d6ceb8);
      uVar13 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(lVar18,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(lVar18,uVar12);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar12 = func_0x00f78b24();
    puVar22 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar24 = func_0x00f78ac0(uVar12,0);
    uVar12 = auVar24._8_8_;
    auVar23._8_8_ = uVar13;
    auVar23._0_8_ = auVar24._0_8_;
    pppuVar3 = (undefined1 ***)((long)pppuVar3 + -0x20);
    unaff_x19 = lVar18;
code_r0x016ce420:
    uVar19 = auVar23._0_8_;
    auVar24._8_8_ = uVar12;
    auVar24._0_8_ = uVar19;
    *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
    *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
    *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
    *(long *)((long)pppuVar3 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppuVar3 + -0x10) = puVar4;
    *(undefined **)((long)pppuVar3 + -8) = puVar22;
    if ((auVar23._8_4_ == (int)param_4) && (*(char *)(uVar19 + 0x48) == '\0')) {
      return uVar19;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar19,auVar23._8_8_);
    unaff_x20 = *(long *)((long)pppuVar3 + -0x20);
    unaff_x19 = *(long *)((long)pppuVar3 + -0x18);
    unaff_x22 = *(ulong *)((long)pppuVar3 + -0x30);
    unaff_x21 = *(ulong *)((long)pppuVar3 + -0x28);
    ppuVar21 = *(undefined1 ***)((long)pppuVar3 + -0x10);
    puVar22 = *(undefined **)((long)pppuVar3 + -8);
  } while( true );
}



// ============================================================
// RVA: 0x1665544 | Core.Services.Achievement.AddPercentComplete
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Achievement__AddPercentComplete
                (float param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  long lVar16;
  int iVar17;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined1 *puVar19;
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
  
  if (param_2 != 0) {
    if (param_1 == 0.0 && *(char *)(param_2 + 0x48) == '\0') {
      return param_2;
    }
    lVar16 = 2;
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_1,param_2);
    puVar2 = (undefined1 *)register0x00000008;
    goto code_r0x016ce380;
  }
  puVar2 = &stack0xfffffffffffffff0;
  puVar21 = &Core_Services_Achievement__AddTitle;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ == 0) {
    puVar2 = &stack0xffffffffffffffe0;
    puVar21 = &Core_Services_Achievement__AddId;
    auVar22 = func_0x00f78af4();
    if (auVar22._0_8_ == 0) {
      puVar2 = &stack0xffffffffffffffd0;
      puVar19 = &stack0xffffffffffffffd0;
      puVar21 = &Core_Services_Achievement__AddCompleted;
      auVar22 = func_0x00f78af4();
      if (auVar22._0_8_ != 0) {
        lVar16 = 3;
        param_5 = 0;
        goto code_r0x016ce420;
      }
      puStack_38 = &Core_Services_Achievement__AddCompleted;
      puStack_40 = &stack0xffffffffffffffd0;
      lVar16 = func_0x00f78af4();
      puStack_48 = &Core_Services_Achievement__EndAchievement;
      puStack_50 = (undefined1 *)&puStack_40;
      if ((bRam0000000003eb5898 & 1) == 0) {
        puStack_50 = (undefined1 *)&puStack_40;
        func_0x00f78a20(0x3d3efd8);
        bRam0000000003eb5898 = 1;
      }
      if (lVar16 == 0) {
        unaff_x19 = func_0x00f78af4();
        if (unaff_x19 == 0) {
          lVar16 = func_0x00f78af4();
          return *(ulong *)(lVar16 + 8);
        }
        uVar13 = 0;
        puVar2 = &stack0xffffffffffffff70;
        unaff_x29 = &stack0xffffffffffffff90;
        unaff_x20 = 4;
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 4) {
            uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
            *(undefined8 *)(unaff_x19 + 0x28) = uVar13;
          }
          *(undefined4 *)(unaff_x19 + 0x30) = 4;
          uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
          *(int *)(unaff_x19 + 0x34) = (int)uVar9;
          return uVar9;
        }
        unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar22 = func_0x00f78af4();
        lVar16 = auVar22._8_8_;
        param_2 = auVar22._0_8_;
        goto code_r0x016ce380;
      }
      uVar9 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar16 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,0);
        uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
        unaff_x21 = (ulong)*(uint *)(lVar16 + 0x30);
        uVar12 = *(uint *)(lVar16 + 0x30) - 1;
        if (-2 < (int)uVar12) {
          uVar12 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar12;
        do {
          uVar1 = (int)unaff_x21 - 1;
          unaff_x21 = (ulong)uVar1;
          iVar17 = (int)uVar9;
          if ((int)uVar1 < 0) goto code_r0x016ceb30;
          lVar14 = *(long *)(lVar16 + 0x28);
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
            sVar3 = (short)uVar9 - (short)iVar7;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)sVar3);
          lVar14 = *(long *)(lVar16 + 0x28);
          if (lVar14 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar14 + 0x18) <= uVar18) goto code_r0x016ced88;
          *(undefined4 *)(lVar14 + unaff_x22 * 4) = 0;
          unaff_x22 = unaff_x22 - 1;
          uVar12 = uVar1;
        } while (0 < (long)uVar18);
code_r0x016ceb30:
        uVar6 = *(undefined4 *)(lVar16 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)(short)((short)uVar9 - (short)uVar6));
        uVar12 = uVar12 * 2 + 6;
        unaff_x21 = (ulong)uVar12;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)(short)uVar12);
        unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
        if (0 < (int)*(uint *)(lVar16 + 0x40)) {
          uVar18 = 0;
          do {
            lVar14 = *(long *)(lVar16 + 0x18);
            if (((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) ||
               (lVar15 = *(long *)(lVar16 + 0x38), lVar15 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
            uVar1 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20)
            ;
            unaff_x21 = (ulong)uVar1;
            uVar12 = *(uint *)(lVar16 + 0x10);
            unaff_x22 = (ulong)uVar12;
            sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,unaff_x21,2);
            if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x016ced84;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),unaff_x22,2);
            if (sVar3 == sVar4) {
              if (sVar3 < 3) {
code_r0x016cec64:
                unaff_x21 = *(ulong *)(lVar16 + 0x38);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar18) goto code_r0x016ced88;
                iVar7 = *(int *)(unaff_x21 + uVar18 * 4 + 0x20);
                if (iVar7 == 0) {
                  unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(ulong *)(lVar16 + 0x18);
                if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar17;
                *(int *)(lVar16 + 0x10) = iVar8;
                iVar7 = iVar7 - iVar17;
                goto code_r0x016ced3c;
              }
              iVar7 = 2;
              while( true ) {
                if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x016ced84;
                sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),uVar1 + iVar7,2);
                if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x016ced84;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),uVar12 + iVar7,2);
                if (sVar4 != sVar5) break;
                iVar7 = iVar7 + 2;
                if (sVar3 <= iVar7) goto code_r0x016cec64;
              }
            }
            uVar18 = uVar18 + 1;
            unaff_x22 = (ulong)*(int *)(lVar16 + 0x40);
          } while ((long)uVar18 < (long)unaff_x22);
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
            lVar14 = *(long *)(lVar16 + 0x38);
            if (lVar14 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar14,unaff_x21,*(undefined4 *)(lVar14 + 0x18),0);
            *(ulong *)(lVar16 + 0x38) = unaff_x21;
            unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
          }
          uVar12 = (uint)unaff_x22;
          *(uint *)(lVar16 + 0x40) = uVar12 + 1;
          uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar12 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar12 * 4 + 0x20) = uVar6;
            unaff_x21 = *(ulong *)(lVar16 + 0x18);
            if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
              iVar8 = iVar8 - iVar17;
              iVar7 = iVar7 - iVar17;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar8,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar8,4,(long)iVar7);
              *(undefined4 *)(lVar16 + 0x30) = 0xffffffff;
              return uVar9;
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
      uVar10 = func_0x00f78a24(0x3d6cea8);
      iVar17 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar10);
      uVar10 = func_0x00f78a24(0x3d56a30);
      auVar24 = func_0x00f78ac0(uVar13,uVar10);
      puStack_98 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar20 = &ppuStack_a0;
      lVar16 = *(long *)(auVar24._0_8_ + 0x18);
      iStack_c4 = iVar17;
      uStack_c0 = unaff_x22;
      uStack_b8 = unaff_x21;
      uStack_b0 = uVar9;
      uStack_a8 = uVar13;
      ppuStack_a0 = &puStack_50;
      if ((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) {
        iVar7 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) - auVar24._8_4_;
        iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,iVar7,4);
        lVar16 = *(long *)(auVar24._0_8_ + 0x18);
        if (lVar16 != 0) {
          uVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,(iVar7 - iVar8) + iVar17,2);
          if ((uVar9 & 0xffff) != 0) {
            return uVar9;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_c4,0);
      uVar10 = func_0x00f78a24(0x3d6ce88);
      uVar11 = func_0x00f78a24(0x3d66338);
      lVar16 = /*System.String$$Concat*/ func_0x029be39c(uVar10,uVar13,uVar11,0);
      func_0x00f78a24(0x3d22a38);
      uVar9 = func_0x00f78aec();
      uVar10 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar9,lVar16);
      uVar13 = func_0x00f78a24(0x3d56a50);
      puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar22 = func_0x00f78ac0(uVar9,uVar13);
      puVar2 = auStack_d0;
      do {
        uVar18 = auVar22._8_8_;
        lVar14 = auVar22._0_8_;
        *(ulong *)(puVar2 + -0x20) = uVar9;
        *(long *)(puVar2 + -0x18) = lVar16;
        *(undefined1 ****)(puVar2 + -0x10) = pppuVar20;
        *(undefined **)(puVar2 + -8) = puVar21;
        pppuVar20 = (undefined1 ***)(puVar2 + -0x10);
        if ((int)uVar10 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),4);
          uVar9 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
code_r0x016cef70:
          if (*(long *)(lVar14 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar14 + 0x18) + 0x18) = *(undefined4 *)(lVar14 + 0x10);
            return uVar9;
          }
        }
        else if (lVar14 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,*(undefined4 *)(lVar14 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar14,uVar18);
          if ((*(long *)(lVar14 + 0x18) != 0) &&
             (lVar16 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar16 != 0)) {
            uVar18 = (ulong)(uint)(*(int *)(lVar16 + 0x18) - *(int *)(lVar14 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,4,0);
            uVar9 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar14,uVar18);
            goto code_r0x016cef70;
          }
        }
        puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar22 = func_0x00f78af4();
        uVar10 = 0;
        puVar2 = puVar2 + -0x20;
        lVar16 = lVar14;
        uVar9 = uVar18;
      } while( true );
    }
    lVar16 = 0;
  }
  else {
    lVar16 = 1;
  }
  uVar13 = auVar22._8_8_;
  param_2 = auVar22._0_8_;
  param_5 = 0;
  *(long *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar2;
  *(undefined **)(puVar2 + -8) = puVar21;
  if ((auVar22._8_4_ == 0) && (*(char *)(param_2 + 0x48) == '\0')) {
    return param_2;
  }
  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_2,uVar13,uVar13,0,0);
  unaff_x29 = *(undefined1 **)(puVar2 + -0x10);
  unaff_x30 = *(undefined **)(puVar2 + -8);
  unaff_x20 = *(long *)(puVar2 + -0x20);
  unaff_x19 = *(long *)(puVar2 + -0x18);
code_r0x016ce380:
  do {
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    puVar19 = puVar2 + -0x10;
    uVar12 = (uint)lVar16;
    if ((int)uVar12 < *(int *)(param_2 + 0x30)) {
      unaff_x20 = *(long *)(param_2 + 0x28);
      uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      unaff_x19 = lVar16;
      if (uVar12 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar12 * 4 + 0x20) = (int)uVar9;
        return uVar9;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      lVar16 = func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d6ceb8);
      uVar13 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(lVar16,uVar10);
      uVar10 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(lVar16,uVar10);
code_r0x016ce410:
      func_0x00f78af4();
      unaff_x19 = lVar16;
    }
    uVar10 = func_0x00f78b24();
    puVar21 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar23 = func_0x00f78ac0(uVar10,0);
    lVar16 = auVar23._8_8_;
    auVar22._8_8_ = uVar13;
    auVar22._0_8_ = auVar23._0_8_;
    puVar2 = puVar2 + -0x20;
code_r0x016ce420:
    param_2 = auVar22._0_8_;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar19;
    *(undefined **)(puVar2 + -8) = puVar21;
    if ((auVar22._8_4_ == (int)param_5) && (*(char *)(param_2 + 0x48) == '\0')) {
      return param_2;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_2,auVar22._8_8_);
    unaff_x29 = *(undefined1 **)(puVar2 + -0x10);
    unaff_x30 = *(undefined **)(puVar2 + -8);
    unaff_x20 = *(long *)(puVar2 + -0x20);
    unaff_x19 = *(long *)(puVar2 + -0x18);
    unaff_x22 = *(ulong *)(puVar2 + -0x30);
    unaff_x21 = *(ulong *)(puVar2 + -0x28);
  } while( true );
}



// ============================================================
// RVA: 0x1665564 | Core.Services.Achievement.AddTitle
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Achievement__AddTitle
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
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
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
  undefined1 **ppuVar20;
  undefined1 ***pppuVar21;
  undefined *unaff_x30;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
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
  
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = param_1;
  if (param_1 == 0) {
    ppuVar2 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = &Core_Services_Achievement__AddId;
    auVar25 = func_0x00f78af4();
    if (auVar25._0_8_ == 0) {
      ppuVar2 = &puStack_20;
      ppuVar20 = &puStack_20;
      puStack_18 = &Core_Services_Achievement__AddId;
      puVar22 = &Core_Services_Achievement__AddCompleted;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar23 = func_0x00f78af4();
      if (auVar23._0_8_ != 0) {
        uVar14 = 3;
        param_4 = 0;
        goto code_r0x016ce420;
      }
      puStack_28 = &Core_Services_Achievement__AddCompleted;
      puStack_30 = (undefined1 *)&puStack_20;
      lVar10 = func_0x00f78af4();
      puStack_38 = &Core_Services_Achievement__EndAchievement;
      puStack_40 = (undefined1 *)&puStack_30;
      if ((bRam0000000003eb5898 & 1) == 0) {
        puStack_40 = (undefined1 *)&puStack_30;
        func_0x00f78a20(0x3d3efd8);
        bRam0000000003eb5898 = 1;
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
        unaff_x20 = 4;
        unaff_x21 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar10);
        if (*(long *)(lVar10 + 0x28) != 0) {
          if (*(int *)(*(long *)(lVar10 + 0x28) + 0x18) < 4) {
            uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
            *(undefined8 *)(lVar10 + 0x28) = uVar14;
          }
          *(undefined4 *)(lVar10 + 0x30) = 4;
          uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar10);
          *(int *)(lVar10 + 0x34) = (int)uVar11;
          return uVar11;
        }
        puVar22 = &FlatBuffers_FlatBufferBuilder__Slot;
        auVar24 = func_0x00f78af4();
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
        uVar13 = *(uint *)(lVar10 + 0x30) - 1;
        if (-2 < (int)uVar13) {
          uVar13 = 0xffffffff;
        }
        unaff_x22 = (ulong)uVar13;
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
          uVar13 = uVar1;
        } while (0 < (long)uVar19);
code_r0x016ceb30:
        uVar7 = *(undefined4 *)(lVar10 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar10,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar10,(int)(short)((short)uVar11 - (short)uVar7));
        uVar13 = uVar13 * 2 + 6;
        unaff_x21 = (ulong)uVar13;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar10,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar10,(int)(short)uVar13);
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
            uVar13 = *(uint *)(lVar10 + 0x10);
            unaff_x22 = (ulong)uVar13;
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
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar10 + 0x18),uVar13 + iVar8,2);
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
          uVar13 = (uint)unaff_x22;
          *(uint *)(lVar10 + 0x40) = uVar13 + 1;
          uVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar10);
          if (unaff_x21 == 0) goto code_r0x016ced84;
          if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar13 * 4 + 0x20) = uVar7;
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
        uVar14 = func_0x00f78b24();
        func_0x00f78ac0(uVar14,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar14 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d6cea8);
      iVar18 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar15);
      uVar15 = func_0x00f78a24(0x3d56a30);
      auVar26 = func_0x00f78ac0(uVar14,uVar15);
      puStack_88 = &FlatBuffers_FlatBufferBuilder__Required;
      pppuVar21 = &ppuStack_90;
      lVar10 = *(long *)(auVar26._0_8_ + 0x18);
      iStack_b4 = iVar18;
      uStack_b0 = unaff_x22;
      uStack_a8 = unaff_x21;
      uStack_a0 = uVar11;
      uStack_98 = uVar14;
      ppuStack_90 = &puStack_40;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x10) != 0)) {
        iVar8 = *(int *)(*(long *)(lVar10 + 0x10) + 0x18) - auVar26._8_4_;
        iVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar10,iVar8,4);
        lVar10 = *(long *)(auVar26._0_8_ + 0x18);
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
      uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_b4,0);
      uVar15 = func_0x00f78a24(0x3d6ce88);
      uVar12 = func_0x00f78a24(0x3d66338);
      lVar10 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar14,uVar12,0);
      func_0x00f78a24(0x3d22a38);
      uVar11 = func_0x00f78aec();
      uVar15 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar10);
      uVar14 = func_0x00f78a24(0x3d56a50);
      puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar25 = func_0x00f78ac0(uVar11,uVar14);
      puVar3 = auStack_c0;
      do {
        uVar19 = auVar25._8_8_;
        lVar16 = auVar25._0_8_;
        *(ulong *)(puVar3 + -0x20) = uVar11;
        *(long *)(puVar3 + -0x18) = lVar10;
        *(undefined1 ****)(puVar3 + -0x10) = pppuVar21;
        *(undefined **)(puVar3 + -8) = puVar22;
        pppuVar21 = (undefined1 ***)(puVar3 + -0x10);
        if ((int)uVar15 == 0) {
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
        puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar25 = func_0x00f78af4();
        uVar15 = 0;
        puVar3 = puVar3 + -0x20;
        lVar10 = lVar16;
        uVar11 = uVar19;
      } while( true );
    }
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
    ppuVar2 = (undefined1 **)register0x00000008;
  }
  uVar15 = auVar25._8_8_;
  uVar11 = auVar25._0_8_;
  auVar24._8_8_ = uVar14;
  auVar24._0_8_ = uVar11;
  param_4 = 0;
  *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar2 + -0x18) = unaff_x19;
  *(undefined1 **)((long)ppuVar2 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar2 + -8) = unaff_x30;
  if ((auVar25._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar11,uVar15,uVar15,0,0);
  puVar3 = *(undefined1 **)((long)ppuVar2 + -0x10);
  puVar22 = *(undefined **)((long)ppuVar2 + -8);
  unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
  lVar10 = *(long *)((long)ppuVar2 + -0x18);
code_r0x016ce380:
  do {
    unaff_x19 = auVar24._8_8_;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = lVar10;
    *(undefined1 **)((long)ppuVar2 + -0x10) = puVar3;
    *(undefined **)((long)ppuVar2 + -8) = puVar22;
    ppuVar20 = (undefined1 **)((long)ppuVar2 + -0x10);
    uVar13 = auVar24._8_4_;
    if ((int)uVar13 < *(int *)(auVar24._0_8_ + 0x30)) {
      unaff_x20 = *(long *)(auVar24._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      if (unaff_x20 == 0) goto code_r0x016ce410;
      if (uVar13 < *(uint *)(unaff_x20 + 0x18)) {
        *(int *)(unaff_x20 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      unaff_x19 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar15 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(unaff_x19,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(unaff_x19,uVar14);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar14 = func_0x00f78b24();
    puVar22 = &FlatBuffers_FlatBufferBuilder__AddBool;
    auVar25 = func_0x00f78ac0(uVar14,0);
    uVar14 = auVar25._8_8_;
    auVar23._8_8_ = uVar15;
    auVar23._0_8_ = auVar25._0_8_;
    ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x20);
code_r0x016ce420:
    uVar11 = auVar23._0_8_;
    auVar24._8_8_ = uVar14;
    auVar24._0_8_ = uVar11;
    *(ulong *)((long)ppuVar2 + -0x30) = unaff_x22;
    *(ulong *)((long)ppuVar2 + -0x28) = unaff_x21;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(undefined8 *)((long)ppuVar2 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar20;
    *(undefined **)((long)ppuVar2 + -8) = puVar22;
    if ((auVar23._8_4_ == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar15 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,auVar23._8_8_);
    puVar3 = *(undefined1 **)((long)ppuVar2 + -0x10);
    puVar22 = *(undefined **)((long)ppuVar2 + -8);
    unaff_x20 = *(long *)((long)ppuVar2 + -0x20);
    lVar10 = *(long *)((long)ppuVar2 + -0x18);
    unaff_x22 = *(ulong *)((long)ppuVar2 + -0x30);
    unaff_x21 = *(ulong *)((long)ppuVar2 + -0x28);
  } while( true );
}



// ============================================================
// RVA: 0x1665588 | Core.Services.Achievement.AddId
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Achievement__AddId
                (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
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
  
  if (param_1 != 0) {
    param_4 = 0;
    lVar17 = 0;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(param_1,param_2,param_2,0,0);
    puVar3 = (undefined1 *)register0x00000008;
code_r0x016ce380:
    do {
      *(long *)(puVar3 + -0x20) = unaff_x20;
      *(long *)(puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
      *(undefined **)(puVar3 + -8) = unaff_x30;
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
      puVar2 = puVar3 + -0x20;
      register0x00000008 = (BADSPACEBASE *)puVar3;
code_r0x016ce420:
      puVar3 = puVar2;
      param_1 = auVar22._0_8_;
      *(ulong *)(puVar3 + -0x30) = unaff_x22;
      *(ulong *)(puVar3 + -0x28) = unaff_x21;
      *(long *)(puVar3 + -0x20) = unaff_x20;
      *(long *)(puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)(puVar3 + -8) = puVar21;
      if ((auVar22._8_4_ == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
        return param_1;
      }
      param_2 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,auVar22._8_8_);
      unaff_x29 = *(undefined1 **)(puVar3 + -0x10);
      unaff_x30 = *(undefined **)(puVar3 + -8);
      unaff_x20 = *(long *)(puVar3 + -0x20);
      unaff_x19 = *(long *)(puVar3 + -0x18);
      unaff_x22 = *(ulong *)(puVar3 + -0x30);
      unaff_x21 = *(ulong *)(puVar3 + -0x28);
    } while( true );
  }
  puVar21 = &Core_Services_Achievement__AddCompleted;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ != 0) {
    lVar17 = 3;
    param_4 = 0;
    puVar2 = &stack0xfffffffffffffff0;
    goto code_r0x016ce420;
  }
  lVar17 = func_0x00f78af4();
  puStack_28 = &Core_Services_Achievement__EndAchievement;
  puStack_30 = &stack0xffffffffffffffe0;
  if ((bRam0000000003eb5898 & 1) == 0) {
    puStack_30 = &stack0xffffffffffffffe0;
    func_0x00f78a20(0x3d3efd8);
    bRam0000000003eb5898 = 1;
  }
  if (lVar17 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar17 = func_0x00f78af4();
      return *(ulong *)(lVar17 + 8);
    }
    param_2 = 0;
    puVar3 = &stack0xffffffffffffff90;
    unaff_x29 = &stack0xffffffffffffffb0;
    unaff_x20 = 4;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 4) {
        uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar11;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 4;
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
        uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - *(int *)(lVar16 + uVar19 * 4 + 0x20);
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
  puStack_78 = &FlatBuffers_FlatBufferBuilder__Required;
  pppuVar20 = &ppuStack_80;
  lVar17 = *(long *)(auVar24._0_8_ + 0x18);
  iStack_a4 = iVar18;
  uStack_a0 = unaff_x22;
  uStack_98 = unaff_x21;
  uStack_90 = uVar10;
  uStack_88 = uVar11;
  ppuStack_80 = &puStack_30;
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
  uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_a4,0);
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
  puVar3 = auStack_b0;
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



// ============================================================
// RVA: 0x16655ac | Core.Services.Achievement.AddCompleted
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Achievement__AddCompleted
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
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 unaff_x19;
  int iVar17;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined1 *puVar19;
  undefined1 ***pppuVar20;
  undefined *unaff_x30;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  ulong auStack_c0 [4];
  undefined1 auStack_a0 [12];
  int iStack_94;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (param_1 != 0) {
    uVar14 = 3;
    param_4 = 0;
    puVar2 = (undefined1 *)register0x00000008;
    goto code_r0x016ce420;
  }
  lVar9 = func_0x00f78af4();
  puStack_18 = &Core_Services_Achievement__EndAchievement;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5898 & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d3efd8);
    bRam0000000003eb5898 = 1;
  }
  if (lVar9 == 0) {
    lVar9 = func_0x00f78af4();
    if (lVar9 == 0) {
      lVar9 = func_0x00f78af4();
      return *(ulong *)(lVar9 + 8);
    }
    uVar14 = 0;
    puVar2 = &stack0xffffffffffffffa0;
    puVar19 = &stack0xffffffffffffffc0;
    unaff_x20 = 4;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar9);
    if (*(long *)(lVar9 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar9 + 0x28) + 0x18) < 4) {
        uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(lVar9 + 0x28) = uVar14;
      }
      *(undefined4 *)(lVar9 + 0x30) = 4;
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
      *(int *)(lVar9 + 0x34) = (int)uVar10;
      return uVar10;
    }
    puVar21 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar22 = func_0x00f78af4();
    do {
      unaff_x19 = auVar22._8_8_;
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(long *)(puVar2 + -0x18) = lVar9;
      *(undefined1 **)(puVar2 + -0x10) = puVar19;
      *(undefined **)(puVar2 + -8) = puVar21;
      unaff_x29 = puVar2 + -0x10;
      uVar13 = auVar22._8_4_;
      if ((int)uVar13 < *(int *)(auVar22._0_8_ + 0x30)) {
        unaff_x20 = *(long *)(auVar22._0_8_ + 0x28);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        param_2 = uVar14;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        if (uVar13 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar10;
          return uVar10;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        unaff_x19 = func_0x00f78aec();
        uVar14 = func_0x00f78a24(0x3d6ceb8);
        param_2 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(unaff_x19,uVar14);
        uVar14 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(unaff_x19,uVar14);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar14 = func_0x00f78b24();
      unaff_x30 = &FlatBuffers_FlatBufferBuilder__AddBool;
      auVar22 = func_0x00f78ac0(uVar14,0);
      uVar14 = auVar22._8_8_;
      param_1 = auVar22._0_8_;
      puVar2 = puVar2 + -0x20;
code_r0x016ce420:
      auVar22._8_8_ = uVar14;
      auVar22._0_8_ = param_1;
      *(ulong *)(puVar2 + -0x30) = unaff_x22;
      *(ulong *)(puVar2 + -0x28) = unaff_x21;
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(undefined **)(puVar2 + -8) = unaff_x30;
      if (((int)param_2 == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
        return param_1;
      }
      uVar14 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,param_2);
      puVar19 = *(undefined1 **)(puVar2 + -0x10);
      puVar21 = *(undefined **)(puVar2 + -8);
      unaff_x20 = *(long *)(puVar2 + -0x20);
      lVar9 = *(long *)(puVar2 + -0x18);
      unaff_x22 = *(ulong *)(puVar2 + -0x30);
      unaff_x21 = *(ulong *)(puVar2 + -0x28);
    } while( true );
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
    uVar13 = *(uint *)(lVar9 + 0x30) - 1;
    if (-2 < (int)uVar13) {
      uVar13 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar13;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar17 = (int)uVar10;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar15 = *(long *)(lVar9 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar15 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar18 = unaff_x22 - 8;
      if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
      iVar7 = *(int *)(lVar15 + unaff_x22 * 4);
      sVar3 = 0;
      if (iVar7 != 0) {
        sVar3 = (short)uVar10 - (short)iVar7;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)sVar3);
      lVar15 = *(long *)(lVar9 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
      *(undefined4 *)(lVar15 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar13 = uVar1;
    } while (0 < (long)uVar18);
code_r0x016ceb30:
    uVar6 = *(undefined4 *)(lVar9 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)((short)uVar10 - (short)uVar6));
    uVar13 = uVar13 * 2 + 6;
    unaff_x21 = (ulong)uVar13;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar9,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar9,(int)(short)uVar13);
    unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
    if (0 < (int)*(uint *)(lVar9 + 0x40)) {
      uVar18 = 0;
      do {
        lVar15 = *(long *)(lVar9 + 0x18);
        if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
           (lVar16 = *(long *)(lVar9 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar16 + 0x18) <= uVar18) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - *(int *)(lVar16 + uVar18 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar13 = *(uint *)(lVar9 + 0x10);
        unaff_x22 = (ulong)uVar13;
        sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,unaff_x21,2);
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
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar9 + 0x18),uVar13 + iVar7,2);
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
        lVar15 = *(long *)(lVar9 + 0x38);
        if (lVar15 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar15,unaff_x21,*(undefined4 *)(lVar15 + 0x18),0);
        *(ulong *)(lVar9 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar9 + 0x40);
      }
      uVar13 = (uint)unaff_x22;
      *(uint *)(lVar9 + 0x40) = uVar13 + 1;
      uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar9);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar13 * 4 + 0x20) = uVar6;
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
    uVar14 = func_0x00f78b24();
    func_0x00f78ac0(uVar14,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar14 = func_0x00f78aec();
  uVar11 = func_0x00f78a24(0x3d6cea8);
  iVar17 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,uVar11);
  uVar11 = func_0x00f78a24(0x3d56a30);
  auVar23 = func_0x00f78ac0(uVar14,uVar11);
  puStack_68 = &FlatBuffers_FlatBufferBuilder__Required;
  pppuVar20 = &ppuStack_70;
  lVar9 = *(long *)(auVar23._0_8_ + 0x18);
  iStack_94 = iVar17;
  uStack_90 = unaff_x22;
  uStack_88 = unaff_x21;
  uStack_80 = uVar10;
  uStack_78 = uVar14;
  ppuStack_70 = &puStack_20;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
    iVar7 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18) - auVar23._8_4_;
    iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar9,iVar7,4);
    lVar9 = *(long *)(auVar23._0_8_ + 0x18);
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
  uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_94,0);
  uVar11 = func_0x00f78a24(0x3d6ce88);
  uVar12 = func_0x00f78a24(0x3d66338);
  lVar9 = /*System.String$$Concat*/ func_0x029be39c(uVar11,uVar14,uVar12,0);
  func_0x00f78a24(0x3d22a38);
  uVar10 = func_0x00f78aec();
  uVar11 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar10,lVar9);
  uVar14 = func_0x00f78a24(0x3d56a50);
  puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar22 = func_0x00f78ac0(uVar10,uVar14);
  puVar2 = auStack_a0;
  do {
    uVar18 = auVar22._8_8_;
    lVar15 = auVar22._0_8_;
    *(ulong *)(puVar2 + -0x20) = uVar10;
    *(long *)(puVar2 + -0x18) = lVar9;
    *(undefined1 ****)(puVar2 + -0x10) = pppuVar20;
    *(undefined **)(puVar2 + -8) = puVar21;
    pppuVar20 = (undefined1 ***)(puVar2 + -0x10);
    if ((int)uVar11 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),4);
      uVar10 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar18);
code_r0x016cef70:
      if (*(long *)(lVar15 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar15 + 0x18) + 0x18) = *(undefined4 *)(lVar15 + 0x10);
        return uVar10;
      }
    }
    else if (lVar15 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar18);
      if ((*(long *)(lVar15 + 0x18) != 0) &&
         (lVar9 = *(long *)(*(long *)(lVar15 + 0x18) + 0x10), lVar9 != 0)) {
        uVar18 = (ulong)(uint)(*(int *)(lVar9 + 0x18) - *(int *)(lVar15 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,4,0);
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,uVar18);
        goto code_r0x016cef70;
      }
    }
    puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar22 = func_0x00f78af4();
    uVar11 = 0;
    puVar2 = puVar2 + -0x20;
    lVar9 = lVar15;
    uVar10 = uVar18;
  } while( true );
}



// ============================================================
// RVA: 0x16655d0 | Core.Services.Achievement.EndAchievement
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Services_Achievement__EndAchievement
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
  
  if ((bRam0000000003eb5898 & 1) == 0) {
    func_0x00f78a20(0x3d3efd8);
    bRam0000000003eb5898 = 1;
  }
  if (param_1 == 0) {
    lVar15 = func_0x00f78af4();
    if (lVar15 == 0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
    uVar11 = 0;
    puVar20 = &stack0xffffffffffffffd0;
    lVar16 = 4;
    uVar10 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar15);
    if (*(long *)(lVar15 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar15 + 0x28) + 0x18) < 4) {
        uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
        *(undefined8 *)(lVar15 + 0x28) = uVar10;
      }
      *(undefined4 *)(lVar15 + 0x30) = 4;
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
// RVA: 0x166561c | Core.Services.Achievement.StartAchievement
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Services_Achievement__StartAchievement
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
  lVar7 = 4;
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 4) {
      uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,4);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
    }
    *(undefined4 *)(param_1 + 0x30) = 4;
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



