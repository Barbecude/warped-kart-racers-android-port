// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.Vote

// ============================================================
// RVA: 0x1654304 | Core.Networking.Vote.__assign
// ============================================================

undefined1  [16]
Core_Networking_Vote____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x16618ec | Core.Networking.Vote.CreateVote
// ============================================================

/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */

ulong Core_Networking_Vote__CreateVote
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 **ppuVar2;
  code *pcVar3;
  undefined1 ****ppppuVar4;
  short sVar5;
  ulong uVar6;
  uint *puVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  int extraout_w1;
  long lVar13;
  long lVar14;
  undefined1 ****ppppuVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [16];
  undefined1 ***pppuStack_180;
  undefined *puStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined1 **ppuStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined1 *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  undefined *puStack_128;
  undefined1 ***pppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  uVar9 = param_3;
  if ((bRam0000000003eb5873 & 1) == 0) {
    func_0x00f78a20(0x3d3f298);
    bRam0000000003eb5873 = 1;
  }
  if (param_1 != 0) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,8,0);
    /*FlatBuffers.FlatBufferBuilder$$Pad*/ func_0x016cda44(param_1,1,0);
    /*FlatBuffers.FlatBufferBuilder$$PutSbyte*/ func_0x016cdb9c(param_1,param_4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,param_3,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_1,param_2,0);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar14 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar14 != 0)) {
      return (ulong)(uint)(*(int *)(lVar14 + 0x18) - *(int *)(param_1 + 0x10));
    }
    lVar14 = func_0x00f78af4(param_1,0);
    return (ulong)*(byte *)(lVar14 + 0x48);
  }
  lVar14 = func_0x00f78af4();
  pcStack_48 = Core_Networking_NetworkVoteUpdate__Clear;
  uStack_60 = param_2;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5862 & 1) == 0) {
    func_0x00f78a20(0x3d3b670);
    bRam0000000003eb5862 = 1;
  }
  uVar6 = *(ulong *)(lVar14 + 0x10);
  if (uVar6 != 0) {
    uVar12 = uVar6;
    if (0 < *(int *)(uVar6 + 0x18)) {
      uVar12 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar6 + 0x10),0,*(int *)(uVar6 + 0x18),0);
      *(undefined4 *)(uVar6 + 0x18) = 0;
    }
    *(int *)(uVar6 + 0x1c) = *(int *)(uVar6 + 0x1c) + 1;
    return uVar12;
  }
  auVar17 = func_0x00f78af4();
  uStack_c0 = auVar17._8_8_;
  uVar10 = auVar17._0_8_;
  pcStack_68 = Core_Networking_NetworkVoteUpdate__Set;
  uStack_b8 = uVar9;
  ppuStack_70 = &puStack_50;
  if ((bRam0000000003eb5863 & 1) == 0) {
    func_0x00f78a20(0x3d3b660);
    func_0x00f78a20(0x3d3ee80);
    bRam0000000003eb5863 = 1;
  }
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  Core_Networking_NetworkVoteUpdate__Clear(uVar10);
  uVar6 = Core_Networking_HostVoteUpdate__get_VotesLength(&uStack_c0);
  if ((int)uVar6 < 1) {
    return uVar6;
  }
  Core_Networking_HostVoteUpdate__Votes(&uStack_108,&uStack_c0,0);
  uStack_e8 = uStack_100;
  uStack_f0 = uStack_108;
  uStack_e0 = uStack_f8;
  auVar17 = /*System.Nullable<Vote>$$get_Value*/ func_0x026650f8(&uStack_f0,uRam0000000003d3ee80);
  pppuStack_120 = &ppuStack_70;
  auStack_d0 = auVar17;
  if (auVar17._8_8_ == 0) {
    puVar7 = (uint *)func_0x00f78af4();
    puStack_130 = (undefined1 *)&pppuStack_120;
    ppppuVar15 = &pppuStack_120;
    puStack_118 = &Core_Networking_Vote__get_SyncId;
    if (*(long *)(puVar7 + 2) == 0) {
      piVar8 = (int *)func_0x00f78af4();
      puStack_128 = &Core_Networking_Vote__get_Data;
      if (*(long *)(piVar8 + 2) == 0) {
        piVar8 = (int *)func_0x00f78af4();
        puStack_150 = (undefined1 *)&puStack_140;
        puStack_138 = &Core_Networking_Vote__get_Type;
        lVar14 = *(long *)(piVar8 + 2);
        if (lVar14 == 0) {
          puStack_140 = (undefined1 *)&puStack_130;
          auVar17 = func_0x00f78af4();
          pppuStack_180 = (undefined1 ***)0x3d3ee80;
          puStack_178 = (undefined *)0x3eb5000;
          ppuStack_160 = (undefined1 **)0x0;
          pcStack_148 = Core_Networking_NetworkVoteUpdate__Set;
          lStack_170 = param_4;
          uStack_168 = param_3;
          puStack_158 = (undefined *)uVar10;
          ppuVar2 = &puStack_140;
          if ((bRam0000000003eb5864 & 1) == 0) {
            func_0x00f78a20(0x3d32bd8);
            func_0x00f78a20(0x3d32be0);
            func_0x00f78a20(0x3d32be8);
            func_0x00f78a20(0x3d3b660);
            func_0x00f78a20(0x3d3b680);
            bRam0000000003eb5864 = 1;
            ppuVar2 = (undefined1 **)puStack_150;
          }
          puStack_150 = (undefined1 *)ppuVar2;
          uStack_198 = 0;
          uStack_1a0 = 0;
          auStack_190._8_8_ = 0;
          auStack_190._0_8_ = 0;
          Core_Networking_NetworkVoteUpdate__Clear(auVar17._0_8_);
          if (auVar17._8_8_ == 0) {
            func_0x00f78af4();
            if (extraout_w1 == 1) {
              plVar11 = (long *)___cxa_begin_catch();
              lVar14 = *plVar11;
              ___cxa_end_catch();
              uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&uStack_1a0,uRam0000000003eb5000);
              if (lVar14 == 0) {
                return uVar6;
              }
              func_0x00f78ac0(lVar14,0);
            }
            lVar14 = __Unwind_Resume();
            return *(ulong *)(lVar14 + 8);
          }
          /*System.Collections.Generic.List<NetworkVote>$$GetEnumerator*/ func_0x02422498(&uStack_1a0,auVar17._8_8_,uRam0000000003d3b680);
          while( true ) {
            uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$MoveNext*/ func_0x01f6e5b0(&uStack_1a0,uRam0000000003d32be0);
            if ((uVar6 & 1) == 0) {
              uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&uStack_1a0,uRam0000000003d32bd8);
              return uVar6;
            }
            lVar14 = *(long *)(auVar17._0_8_ + 0x10);
            if (lVar14 == 0) break;
            /*System.Collections.Generic.List<NetworkVote>$$Add*/ func_0x0242193c(lVar14,auStack_190._0_8_,auStack_190._8_8_ & 0xffffffff,
                            uRam0000000003d3b660);
          }
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1661cc4);
          (*pcVar3)();
        }
        uVar1 = *piVar8 + 6;
        puStack_150 = (undefined1 *)0x0;
        puStack_138 = &Core_Networking_Vote__get_Type;
        pcStack_148 = (code *)uVar10;
        puStack_140 = (undefined1 *)&puStack_130;
        /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar14,(ulong)uVar1,1);
        if ((*(long *)(lVar14 + 0x10) == 0) ||
           (lVar13 = *(long *)(*(long *)(lVar14 + 0x10) + 0x10), lVar13 == 0)) {
          func_0x00f78af4();
        }
        else if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          return (long)*(char *)(lVar13 + (int)uVar1 + 0x20);
        }
        uVar9 = func_0x00f78b24();
        auVar17 = func_0x00f78ac0(uVar9,0);
        puStack_158 = &FlatBuffers_ByteBuffer__Get;
        uVar9 = 1;
        lStack_170 = lVar14;
        uStack_168 = (ulong)uVar1;
        ppuStack_160 = &puStack_140;
        /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar17._0_8_,auVar17._8_8_,1);
        lVar14 = *(long *)(auVar17._0_8_ + 0x10);
        if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x10), lVar14 == 0)) {
          func_0x00f78af4();
        }
        else if (auVar17._8_4_ < *(uint *)(lVar14 + 0x18)) {
          return (ulong)*(byte *)(lVar14 + (int)auVar17._8_4_ + 0x20);
        }
        uVar10 = func_0x00f78b24();
        auVar18 = func_0x00f78ac0(uVar10,0);
        ppppuVar4 = (undefined1 ****)&uStack_1a0;
        puStack_178 = &FlatBuffers_ByteBuffer__GetStringUTF8;
        ppppuVar15 = &pppuStack_180;
        uStack_1a0 = param_4;
        uStack_198 = param_3;
        pppuStack_180 = &ppuStack_160;
        auStack_190 = auVar17;
        plVar11 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
        lVar14 = *(long *)(auVar18._0_8_ + 0x10);
        if ((lVar14 != 0) && (plVar11 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(*plVar11 + 0x348))
                            (plVar11,*(undefined8 *)(lVar14 + 0x10),auVar18._8_8_,uVar9,
                             *(undefined8 *)(*plVar11 + 0x350));
          return uVar6;
        }
        puVar16 = &FlatBuffers_ByteBuffer__GetShort;
        auVar18 = func_0x00f78af4();
      }
      else {
        auVar18._8_4_ = *piVar8 + 4;
        auVar18._0_8_ = *(long *)(piVar8 + 2);
        auVar18._12_4_ = 0;
        ppppuVar4 = &pppuStack_120;
        puVar16 = &Core_Networking_Vote__get_Data;
        puStack_130 = (undefined1 *)&pppuStack_120;
      }
      *(undefined1 *****)((long)ppppuVar4 + -0x10) = ppppuVar15;
      *(undefined **)((long)ppppuVar4 + -8) = puVar16;
      sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar18._0_8_,auVar18._8_8_,2);
      return (ulong)(uint)(int)sVar5;
    }
    auVar17._4_4_ = 0;
    auVar17._0_4_ = *puVar7;
    auVar17._8_8_ = *(long *)(puVar7 + 2);
    puStack_118 = &Core_Networking_Vote__get_SyncId;
  }
  else {
    puStack_118 = (undefined *)0x1661acc;
  }
  uVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar17._8_8_,auVar17._0_8_,4);
  return uVar6;
}



// ============================================================
// RVA: 0x1661b38 | Core.Networking.Vote.get_SyncId
// ============================================================

ulong Core_Networking_Vote__get_SyncId(undefined4 *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  short sVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  int extraout_w1;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined1 auVar13 [16];
  
  puVar11 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 2) != 0) {
    uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1,4);
    return uVar10;
  }
  piVar5 = (int *)func_0x00f78af4();
  if (*(long *)(piVar5 + 2) == 0) {
    piVar5 = (int *)func_0x00f78af4();
    lVar6 = *(long *)(piVar5 + 2);
    if (lVar6 == 0) {
      auVar13 = func_0x00f78af4();
      if ((bRam0000000003eb5864 & 1) == 0) {
        func_0x00f78a20(0x3d32bd8);
        func_0x00f78a20(0x3d32be0);
        func_0x00f78a20(0x3d32be8);
        func_0x00f78a20(0x3d3b660);
        func_0x00f78a20(0x3d3b680);
        bRam0000000003eb5864 = 1;
      }
      Core_Networking_NetworkVoteUpdate__Clear(auVar13._0_8_);
      if (auVar13._8_8_ == 0) {
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar9 = (long *)___cxa_begin_catch();
          lVar6 = *plVar9;
          ___cxa_end_catch();
          uVar10 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&stack0xffffffffffffff70,uRam0000000003eb5000);
          if (lVar6 == 0) {
            return uVar10;
          }
          func_0x00f78ac0(lVar6,0);
        }
        lVar6 = __Unwind_Resume();
        return *(ulong *)(lVar6 + 8);
      }
      /*System.Collections.Generic.List<NetworkVote>$$GetEnumerator*/ func_0x02422498(&stack0xffffffffffffff70,auVar13._8_8_,uRam0000000003d3b680);
      while( true ) {
        uVar10 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$MoveNext*/ func_0x01f6e5b0(&stack0xffffffffffffff70,uRam0000000003d32be0);
        if ((uVar10 & 1) == 0) {
          uVar10 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&stack0xffffffffffffff70,uRam0000000003d32bd8);
          return uVar10;
        }
        lVar6 = *(long *)(auVar13._0_8_ + 0x10);
        if (lVar6 == 0) break;
        /*System.Collections.Generic.List<NetworkVote>$$Add*/ func_0x0242193c(lVar6,0,0,uRam0000000003d3b660);
      }
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1661cc4);
      (*pcVar2)();
    }
    uVar1 = *piVar5 + 6;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar6,uVar1,1);
    if ((*(long *)(lVar6 + 0x10) == 0) ||
       (lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10), lVar6 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      return (long)*(char *)(lVar6 + (int)uVar1 + 0x20);
    }
    uVar7 = func_0x00f78b24();
    auVar13 = func_0x00f78ac0(uVar7,0);
    uVar7 = 1;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar13._0_8_,auVar13._8_8_,1);
    lVar6 = *(long *)(auVar13._0_8_ + 0x10);
    if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar13._8_4_ < *(uint *)(lVar6 + 0x18)) {
      return (ulong)*(byte *)(lVar6 + (int)auVar13._8_4_ + 0x20);
    }
    uVar8 = func_0x00f78b24();
    auVar13 = func_0x00f78ac0(uVar8,0);
    puVar3 = &stack0xffffffffffffff70;
    puVar11 = &stack0xffffffffffffff90;
    plVar9 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
    lVar6 = *(long *)(auVar13._0_8_ + 0x10);
    if ((lVar6 != 0) && (plVar9 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)(*plVar9 + 0x348))
                         (plVar9,*(undefined8 *)(lVar6 + 0x10),auVar13._8_8_,uVar7,
                          *(undefined8 *)(*plVar9 + 0x350));
      return uVar10;
    }
    puVar12 = &FlatBuffers_ByteBuffer__GetShort;
    auVar13 = func_0x00f78af4();
  }
  else {
    auVar13._8_4_ = *piVar5 + 4;
    auVar13._0_8_ = *(long *)(piVar5 + 2);
    auVar13._12_4_ = 0;
    puVar3 = &stack0xfffffffffffffff0;
    puVar12 = &Core_Networking_Vote__get_Data;
  }
  *(undefined1 **)(puVar3 + -0x10) = puVar11;
  *(undefined **)(puVar3 + -8) = puVar12;
  sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar13._0_8_,auVar13._8_8_,2);
  return (ulong)(uint)(int)sVar4;
}



// ============================================================
// RVA: 0x1661b60 | Core.Networking.Vote.get_Data
// ============================================================

ulong Core_Networking_Vote__get_Data(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  short sVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  int extraout_w1;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar11 [16];
  
  if (*(long *)(param_1 + 2) == 0) {
    piVar5 = (int *)func_0x00f78af4();
    lVar6 = *(long *)(piVar5 + 2);
    if (lVar6 == 0) {
      auVar11 = func_0x00f78af4();
      if ((bRam0000000003eb5864 & 1) == 0) {
        func_0x00f78a20(0x3d32bd8);
        func_0x00f78a20(0x3d32be0);
        func_0x00f78a20(0x3d32be8);
        func_0x00f78a20(0x3d3b660);
        func_0x00f78a20(0x3d3b680);
        bRam0000000003eb5864 = 1;
      }
      Core_Networking_NetworkVoteUpdate__Clear(auVar11._0_8_);
      if (auVar11._8_8_ == 0) {
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar9 = (long *)___cxa_begin_catch();
          lVar6 = *plVar9;
          ___cxa_end_catch();
          uVar10 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&stack0xffffffffffffff80,uRam0000000003eb5000);
          if (lVar6 == 0) {
            return uVar10;
          }
          func_0x00f78ac0(lVar6,0);
        }
        lVar6 = __Unwind_Resume();
        return *(ulong *)(lVar6 + 8);
      }
      /*System.Collections.Generic.List<NetworkVote>$$GetEnumerator*/ func_0x02422498(&stack0xffffffffffffff80,auVar11._8_8_,uRam0000000003d3b680);
      while( true ) {
        uVar10 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$MoveNext*/ func_0x01f6e5b0(&stack0xffffffffffffff80,uRam0000000003d32be0);
        if ((uVar10 & 1) == 0) {
          uVar10 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&stack0xffffffffffffff80,uRam0000000003d32bd8);
          return uVar10;
        }
        lVar6 = *(long *)(auVar11._0_8_ + 0x10);
        if (lVar6 == 0) break;
        /*System.Collections.Generic.List<NetworkVote>$$Add*/ func_0x0242193c(lVar6,0,0,uRam0000000003d3b660);
      }
      func_0x00f78af4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1661cc4);
      (*pcVar2)();
    }
    uVar1 = *piVar5 + 6;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar6,uVar1,1);
    if ((*(long *)(lVar6 + 0x10) == 0) ||
       (lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10), lVar6 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      return (long)*(char *)(lVar6 + (int)uVar1 + 0x20);
    }
    uVar7 = func_0x00f78b24();
    auVar11 = func_0x00f78ac0(uVar7,0);
    uVar7 = 1;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar11._0_8_,auVar11._8_8_,1);
    lVar6 = *(long *)(auVar11._0_8_ + 0x10);
    if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) {
      func_0x00f78af4();
    }
    else if (auVar11._8_4_ < *(uint *)(lVar6 + 0x18)) {
      return (ulong)*(byte *)(lVar6 + (int)auVar11._8_4_ + 0x20);
    }
    uVar8 = func_0x00f78b24();
    auVar11 = func_0x00f78ac0(uVar8,0);
    puVar3 = &stack0xffffffffffffff80;
    unaff_x29 = &stack0xffffffffffffffa0;
    plVar9 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
    lVar6 = *(long *)(auVar11._0_8_ + 0x10);
    if ((lVar6 != 0) && (plVar9 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)(*plVar9 + 0x348))
                         (plVar9,*(undefined8 *)(lVar6 + 0x10),auVar11._8_8_,uVar7,
                          *(undefined8 *)(*plVar9 + 0x350));
      return uVar10;
    }
    unaff_x30 = &FlatBuffers_ByteBuffer__GetShort;
    auVar11 = func_0x00f78af4();
  }
  else {
    auVar11._8_4_ = *param_1 + 4;
    auVar11._0_8_ = *(long *)(param_1 + 2);
    auVar11._12_4_ = 0;
    puVar3 = (undefined1 *)register0x00000008;
  }
  *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar11._0_8_,auVar11._8_8_,2);
  return (ulong)(uint)(int)sVar4;
}



// ============================================================
// RVA: 0x1661b8c | Core.Networking.Vote.get_Type
// ============================================================

ulong Core_Networking_Vote__get_Type(int *param_1)

{
  uint uVar1;
  code *pcVar2;
  short sVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  int extraout_w1;
  undefined1 auVar9 [16];
  
  lVar4 = *(long *)(param_1 + 2);
  if (lVar4 == 0) {
    auVar9 = func_0x00f78af4();
    if ((bRam0000000003eb5864 & 1) == 0) {
      func_0x00f78a20(0x3d32bd8);
      func_0x00f78a20(0x3d32be0);
      func_0x00f78a20(0x3d32be8);
      func_0x00f78a20(0x3d3b660);
      func_0x00f78a20(0x3d3b680);
      bRam0000000003eb5864 = 1;
    }
    Core_Networking_NetworkVoteUpdate__Clear(auVar9._0_8_);
    if (auVar9._8_8_ == 0) {
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar7 = (long *)___cxa_begin_catch();
        lVar4 = *plVar7;
        ___cxa_end_catch();
        uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&stack0xffffffffffffff90,uRam0000000003eb5000);
        if (lVar4 == 0) {
          return uVar8;
        }
        func_0x00f78ac0(lVar4,0);
      }
      lVar4 = __Unwind_Resume();
      return *(ulong *)(lVar4 + 8);
    }
    /*System.Collections.Generic.List<NetworkVote>$$GetEnumerator*/ func_0x02422498(&stack0xffffffffffffff90,auVar9._8_8_,uRam0000000003d3b680);
    while( true ) {
      uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$MoveNext*/ func_0x01f6e5b0(&stack0xffffffffffffff90,uRam0000000003d32be0);
      if ((uVar8 & 1) == 0) {
        uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&stack0xffffffffffffff90,uRam0000000003d32bd8);
        return uVar8;
      }
      lVar4 = *(long *)(auVar9._0_8_ + 0x10);
      if (lVar4 == 0) break;
      /*System.Collections.Generic.List<NetworkVote>$$Add*/ func_0x0242193c(lVar4,0,0,uRam0000000003d3b660);
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1661cc4);
    (*pcVar2)();
  }
  uVar1 = *param_1 + 6;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar4,uVar1,1);
  if ((*(long *)(lVar4 + 0x10) == 0) ||
     (lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10), lVar4 == 0)) {
    func_0x00f78af4();
  }
  else if (uVar1 < *(uint *)(lVar4 + 0x18)) {
    return (long)*(char *)(lVar4 + (int)uVar1 + 0x20);
  }
  uVar5 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar5,0);
  uVar5 = 1;
  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar9._0_8_,auVar9._8_8_,1);
  lVar4 = *(long *)(auVar9._0_8_ + 0x10);
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x10), lVar4 == 0)) {
    func_0x00f78af4();
  }
  else if (auVar9._8_4_ < *(uint *)(lVar4 + 0x18)) {
    return (ulong)*(byte *)(lVar4 + (int)auVar9._8_4_ + 0x20);
  }
  uVar6 = func_0x00f78b24();
  auVar9 = func_0x00f78ac0(uVar6,0);
  plVar7 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
  lVar4 = *(long *)(auVar9._0_8_ + 0x10);
  if ((lVar4 != 0) && (plVar7 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)(*plVar7 + 0x348))
                      (plVar7,*(undefined8 *)(lVar4 + 0x10),auVar9._8_8_,uVar5,
                       *(undefined8 *)(*plVar7 + 0x350));
    return uVar8;
  }
  auVar9 = func_0x00f78af4();
  sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar9._0_8_,auVar9._8_8_,2);
  return (ulong)(uint)(int)sVar3;
}



// ============================================================
// RVA: 0x1662e00 | Core.Networking.Vote.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_Vote__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1662e08 | Core.Networking.Vote.__init
// ============================================================

void Core_Networking_Vote____init(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



