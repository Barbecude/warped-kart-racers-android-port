// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.NetworkVoteUpdate

// ============================================================
// RVA: 0x165d38c | Core.Networking.NetworkVoteUpdate..ctor
// ============================================================

undefined1  [16] Core_Networking_NetworkVoteUpdate___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb5865 & 1) == 0) {
    func_0x00f78a20(0x3d3b658);
    func_0x00f78a20(0x3d1dc60);
    bRam0000000003eb5865 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkVote>_TypeInfo*/ uRam0000000003d1dc60);
  /*System.Collections.Generic.List<NetworkVote>$$.ctor*/ func_0x02420d24(uVar1,0xc,uRam0000000003d3b658);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



// ============================================================
// RVA: 0x16619a8 | Core.Networking.NetworkVoteUpdate.Clear
// ============================================================

/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */

ulong Core_Networking_NetworkVoteUpdate__Clear(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 **ppuVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  short sVar5;
  ulong uVar6;
  uint *puVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  int extraout_w1;
  undefined1 ****ppppuVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 ***pppuStack_140;
  undefined1 **ppuStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined8 **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb5862 & 1) == 0) {
    func_0x00f78a20(0x3d3b670);
    bRam0000000003eb5862 = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar6 != 0) {
    uVar13 = uVar6;
    if (0 < *(int *)(uVar6 + 0x18)) {
      uVar13 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar6 + 0x10),0,*(int *)(uVar6 + 0x18),0);
      *(undefined4 *)(uVar6 + 0x18) = 0;
    }
    *(int *)(uVar6 + 0x1c) = *(int *)(uVar6 + 0x1c) + 1;
    return uVar13;
  }
  auVar16 = func_0x00f78af4();
  uStack_80 = auVar16._8_8_;
  uVar10 = auVar16._0_8_;
  puStack_28 = &Core_Networking_NetworkVoteUpdate__Set;
  uStack_78 = param_3;
  puStack_30 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5863 & 1) == 0) {
    func_0x00f78a20(0x3d3b660);
    func_0x00f78a20(0x3d3ee80);
    bRam0000000003eb5863 = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  Core_Networking_NetworkVoteUpdate__Clear(uVar10);
  uVar6 = Core_Networking_HostVoteUpdate__get_VotesLength(&uStack_80);
  if ((int)uVar6 < 1) {
    return uVar6;
  }
  Core_Networking_HostVoteUpdate__Votes(&uStack_c8,&uStack_80,0);
  uStack_a8 = uStack_c0;
  uStack_b0 = uStack_c8;
  uStack_a0 = uStack_b8;
  auVar16 = /*System.Nullable<Vote>$$get_Value*/ func_0x026650f8(&uStack_b0,uRam0000000003d3ee80);
  ppuStack_e0 = &puStack_30;
  auStack_90 = auVar16;
  if (auVar16._8_8_ == 0) {
    puVar7 = (uint *)func_0x00f78af4();
    puStack_f0 = (undefined1 *)&ppuStack_e0;
    ppppuVar14 = (undefined1 ****)&ppuStack_e0;
    puStack_d8 = &Core_Networking_Vote__get_SyncId;
    if (*(long *)(puVar7 + 2) == 0) {
      piVar8 = (int *)func_0x00f78af4();
      puStack_e8 = &Core_Networking_Vote__get_Data;
      if (*(long *)(piVar8 + 2) == 0) {
        piVar8 = (int *)func_0x00f78af4();
        puStack_110 = (undefined1 *)&puStack_100;
        puStack_f8 = &Core_Networking_Vote__get_Type;
        lVar9 = *(long *)(piVar8 + 2);
        if (lVar9 == 0) {
          puStack_100 = (undefined1 *)&puStack_f0;
          auVar16 = func_0x00f78af4();
          pppuStack_140 = (undefined1 ***)0x3d3ee80;
          ppuStack_120 = (undefined1 **)0x0;
          puStack_108 = &Core_Networking_NetworkVoteUpdate__Set;
          puStack_118 = (undefined *)uVar10;
          ppuVar2 = &puStack_100;
          if ((bRam0000000003eb5864 & 1) == 0) {
            func_0x00f78a20(0x3d32bd8);
            func_0x00f78a20(0x3d32be0);
            func_0x00f78a20(0x3d32be8);
            func_0x00f78a20(0x3d3b660);
            func_0x00f78a20(0x3d3b680);
            bRam0000000003eb5864 = 1;
            ppuVar2 = (undefined1 **)puStack_110;
          }
          puStack_110 = (undefined1 *)ppuVar2;
          Core_Networking_NetworkVoteUpdate__Clear(auVar16._0_8_);
          if (auVar16._8_8_ == 0) {
            func_0x00f78af4();
            if (extraout_w1 == 1) {
              plVar12 = (long *)___cxa_begin_catch();
              lVar9 = *plVar12;
              ___cxa_end_catch();
              uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&stack0xfffffffffffffea0,uRam0000000003eb5000);
              if (lVar9 == 0) {
                return uVar6;
              }
              func_0x00f78ac0(lVar9,0);
            }
            lVar9 = __Unwind_Resume();
            return *(ulong *)(lVar9 + 8);
          }
          /*System.Collections.Generic.List<NetworkVote>$$GetEnumerator*/ func_0x02422498(&stack0xfffffffffffffea0,auVar16._8_8_,uRam0000000003d3b680);
          while( true ) {
            uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$MoveNext*/ func_0x01f6e5b0(&stack0xfffffffffffffea0,uRam0000000003d32be0);
            if ((uVar6 & 1) == 0) {
              uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&stack0xfffffffffffffea0,uRam0000000003d32bd8);
              return uVar6;
            }
            lVar9 = *(long *)(auVar16._0_8_ + 0x10);
            if (lVar9 == 0) break;
            /*System.Collections.Generic.List<NetworkVote>$$Add*/ func_0x0242193c(lVar9,0,0,uRam0000000003d3b660);
          }
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1661cc4);
          (*pcVar3)();
        }
        uVar1 = *piVar8 + 6;
        puStack_110 = (undefined1 *)0x0;
        puStack_f8 = &Core_Networking_Vote__get_Type;
        puStack_108 = (undefined *)uVar10;
        puStack_100 = (undefined1 *)&puStack_f0;
        /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar9,uVar1,1);
        if ((*(long *)(lVar9 + 0x10) == 0) ||
           (lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + 0x10), lVar9 == 0)) {
          func_0x00f78af4();
        }
        else if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          return (long)*(char *)(lVar9 + (int)uVar1 + 0x20);
        }
        uVar10 = func_0x00f78b24();
        auVar16 = func_0x00f78ac0(uVar10,0);
        puStack_118 = &FlatBuffers_ByteBuffer__Get;
        uVar10 = 1;
        ppuStack_120 = &puStack_100;
        /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar16._0_8_,auVar16._8_8_,1);
        lVar9 = *(long *)(auVar16._0_8_ + 0x10);
        if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)) {
          func_0x00f78af4();
        }
        else if (auVar16._8_4_ < *(uint *)(lVar9 + 0x18)) {
          return (ulong)*(byte *)(lVar9 + (int)auVar16._8_4_ + 0x20);
        }
        uVar11 = func_0x00f78b24();
        auVar16 = func_0x00f78ac0(uVar11,0);
        pppuVar4 = (undefined8 ***)&stack0xfffffffffffffea0;
        ppppuVar14 = &pppuStack_140;
        pppuStack_140 = &ppuStack_120;
        plVar12 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
        lVar9 = *(long *)(auVar16._0_8_ + 0x10);
        if ((lVar9 != 0) && (plVar12 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(*plVar12 + 0x348))
                            (plVar12,*(undefined8 *)(lVar9 + 0x10),auVar16._8_8_,uVar10,
                             *(undefined8 *)(*plVar12 + 0x350));
          return uVar6;
        }
        puVar15 = &FlatBuffers_ByteBuffer__GetShort;
        auVar17 = func_0x00f78af4();
      }
      else {
        auVar17._8_4_ = *piVar8 + 4;
        auVar17._0_8_ = *(long *)(piVar8 + 2);
        auVar17._12_4_ = 0;
        pppuVar4 = &ppuStack_e0;
        puVar15 = &Core_Networking_Vote__get_Data;
        puStack_f0 = (undefined1 *)&ppuStack_e0;
      }
      *(undefined1 *****)((long)pppuVar4 + -0x10) = ppppuVar14;
      *(undefined **)((long)pppuVar4 + -8) = puVar15;
      sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar17._0_8_,auVar17._8_8_,2);
      return (ulong)(uint)(int)sVar5;
    }
    auVar16._4_4_ = 0;
    auVar16._0_4_ = *puVar7;
    auVar16._8_8_ = *(long *)(puVar7 + 2);
    puStack_d8 = &Core_Networking_Vote__get_SyncId;
  }
  else {
    puStack_d8 = &UNK_01661acc;
  }
  uVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar16._8_8_,auVar16._0_8_,4);
  return uVar6;
}



// ============================================================
// RVA: 0x16619fc | Core.Networking.NetworkVoteUpdate.Set
// ============================================================

/* WARNING: Possible PIC construction at 0x01661ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01661ae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01661acc) */
/* WARNING: Removing unreachable block (ram,0x01661ae4) */
/* WARNING: Removing unreachable block (ram,0x01661ae8) */

ulong Core_Networking_NetworkVoteUpdate__Set
                (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 **ppuVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  short sVar5;
  ulong uVar6;
  uint *puVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  int extraout_w1;
  undefined1 ****ppppuVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 ***pppuStack_120;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_60 = param_2;
  uStack_58 = param_3;
  if ((bRam0000000003eb5863 & 1) == 0) {
    func_0x00f78a20(0x3d3b660);
    func_0x00f78a20(0x3d3ee80);
    bRam0000000003eb5863 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  Core_Networking_NetworkVoteUpdate__Clear(param_1);
  uVar6 = Core_Networking_HostVoteUpdate__get_VotesLength(&uStack_60);
  if ((int)uVar6 < 1) {
    return uVar6;
  }
  Core_Networking_HostVoteUpdate__Votes(&uStack_a8,&uStack_60,0);
  uStack_88 = uStack_a0;
  uStack_90 = uStack_a8;
  uStack_80 = uStack_98;
  auVar15 = /*System.Nullable<Vote>$$get_Value*/ func_0x026650f8(&uStack_90,uRam0000000003d3ee80);
  ppuStack_c0 = (undefined8 **)&stack0xfffffffffffffff0;
  auStack_70 = auVar15;
  if (auVar15._8_8_ == 0) {
    puVar7 = (uint *)func_0x00f78af4();
    puStack_d0 = (undefined1 *)&ppuStack_c0;
    ppppuVar13 = (undefined1 ****)&ppuStack_c0;
    puStack_b8 = &Core_Networking_Vote__get_SyncId;
    if (*(long *)(puVar7 + 2) == 0) {
      piVar8 = (int *)func_0x00f78af4();
      puStack_c8 = &Core_Networking_Vote__get_Data;
      if (*(long *)(piVar8 + 2) == 0) {
        piVar8 = (int *)func_0x00f78af4();
        puStack_f0 = (undefined1 *)&puStack_e0;
        puStack_d8 = &Core_Networking_Vote__get_Type;
        lVar9 = *(long *)(piVar8 + 2);
        if (lVar9 == 0) {
          puStack_e0 = (undefined1 *)&puStack_d0;
          auVar15 = func_0x00f78af4();
          pppuStack_120 = (undefined1 ***)0x3d3ee80;
          ppuStack_100 = (undefined1 **)0x0;
          puStack_e8 = &Core_Networking_NetworkVoteUpdate__Set;
          puStack_f8 = (undefined *)param_1;
          ppuVar2 = &puStack_e0;
          if ((bRam0000000003eb5864 & 1) == 0) {
            func_0x00f78a20(0x3d32bd8);
            func_0x00f78a20(0x3d32be0);
            func_0x00f78a20(0x3d32be8);
            func_0x00f78a20(0x3d3b660);
            func_0x00f78a20(0x3d3b680);
            bRam0000000003eb5864 = 1;
            ppuVar2 = (undefined1 **)puStack_f0;
          }
          puStack_f0 = (undefined1 *)ppuVar2;
          Core_Networking_NetworkVoteUpdate__Clear(auVar15._0_8_);
          if (auVar15._8_8_ == 0) {
            func_0x00f78af4();
            if (extraout_w1 == 1) {
              plVar12 = (long *)___cxa_begin_catch();
              lVar9 = *plVar12;
              ___cxa_end_catch();
              uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&stack0xfffffffffffffec0,uRam0000000003eb5000);
              if (lVar9 == 0) {
                return uVar6;
              }
              func_0x00f78ac0(lVar9,0);
            }
            lVar9 = __Unwind_Resume();
            return *(ulong *)(lVar9 + 8);
          }
          /*System.Collections.Generic.List<NetworkVote>$$GetEnumerator*/ func_0x02422498(&stack0xfffffffffffffec0,auVar15._8_8_,uRam0000000003d3b680);
          while( true ) {
            uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$MoveNext*/ func_0x01f6e5b0(&stack0xfffffffffffffec0,uRam0000000003d32be0);
            if ((uVar6 & 1) == 0) {
              uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&stack0xfffffffffffffec0,uRam0000000003d32bd8);
              return uVar6;
            }
            lVar9 = *(long *)(auVar15._0_8_ + 0x10);
            if (lVar9 == 0) break;
            /*System.Collections.Generic.List<NetworkVote>$$Add*/ func_0x0242193c(lVar9,0,0,uRam0000000003d3b660);
          }
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1661cc4);
          (*pcVar3)();
        }
        uVar1 = *piVar8 + 6;
        puStack_f0 = (undefined1 *)0x0;
        puStack_d8 = &Core_Networking_Vote__get_Type;
        puStack_e8 = (undefined *)param_1;
        puStack_e0 = (undefined1 *)&puStack_d0;
        /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar9,uVar1,1);
        if ((*(long *)(lVar9 + 0x10) == 0) ||
           (lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + 0x10), lVar9 == 0)) {
          func_0x00f78af4();
        }
        else if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          return (long)*(char *)(lVar9 + (int)uVar1 + 0x20);
        }
        uVar10 = func_0x00f78b24();
        auVar15 = func_0x00f78ac0(uVar10,0);
        puStack_f8 = &FlatBuffers_ByteBuffer__Get;
        uVar10 = 1;
        ppuStack_100 = &puStack_e0;
        /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(auVar15._0_8_,auVar15._8_8_,1);
        lVar9 = *(long *)(auVar15._0_8_ + 0x10);
        if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)) {
          func_0x00f78af4();
        }
        else if (auVar15._8_4_ < *(uint *)(lVar9 + 0x18)) {
          return (ulong)*(byte *)(lVar9 + (int)auVar15._8_4_ + 0x20);
        }
        uVar11 = func_0x00f78b24();
        auVar15 = func_0x00f78ac0(uVar11,0);
        pppuVar4 = (undefined8 ***)&stack0xfffffffffffffec0;
        ppppuVar13 = &pppuStack_120;
        pppuStack_120 = &ppuStack_100;
        plVar12 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
        lVar9 = *(long *)(auVar15._0_8_ + 0x10);
        if ((lVar9 != 0) && (plVar12 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(*plVar12 + 0x348))
                            (plVar12,*(undefined8 *)(lVar9 + 0x10),auVar15._8_8_,uVar10,
                             *(undefined8 *)(*plVar12 + 0x350));
          return uVar6;
        }
        puVar14 = &FlatBuffers_ByteBuffer__GetShort;
        auVar16 = func_0x00f78af4();
      }
      else {
        auVar16._8_4_ = *piVar8 + 4;
        auVar16._0_8_ = *(long *)(piVar8 + 2);
        auVar16._12_4_ = 0;
        pppuVar4 = &ppuStack_c0;
        puVar14 = &Core_Networking_Vote__get_Data;
        puStack_d0 = (undefined1 *)&ppuStack_c0;
      }
      *(undefined1 *****)((long)pppuVar4 + -0x10) = ppppuVar13;
      *(undefined **)((long)pppuVar4 + -8) = puVar14;
      sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar16._0_8_,auVar16._8_8_,2);
      return (ulong)(uint)(int)sVar5;
    }
    auVar15._4_4_ = 0;
    auVar15._0_4_ = *puVar7;
    auVar15._8_8_ = *(long *)(puVar7 + 2);
    puStack_b8 = &Core_Networking_Vote__get_SyncId;
  }
  else {
    puStack_b8 = (undefined *)0x1661acc;
  }
  uVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar15._8_8_,auVar15._0_8_,4);
  return uVar6;
}



// ============================================================
// RVA: 0x1661bb8 | Core.Networking.NetworkVoteUpdate.Set
// ============================================================

undefined8 Core_Networking_NetworkVoteUpdate__Set(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  int extraout_w1;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  if ((bRam0000000003eb5864 & 1) == 0) {
    func_0x00f78a20(0x3d32bd8);
    func_0x00f78a20(0x3d32be0);
    func_0x00f78a20(0x3d32be8);
    func_0x00f78a20(0x3d3b660);
    func_0x00f78a20(0x3d3b680);
    bRam0000000003eb5864 = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  Core_Networking_NetworkVoteUpdate__Clear(param_1);
  if (param_2 == 0) {
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar4 = (long *)___cxa_begin_catch();
      lVar5 = *plVar4;
      ___cxa_end_catch();
      uVar3 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&uStack_60,uRam0000000003eb5000);
      if (lVar5 == 0) {
        return uVar3;
      }
      func_0x00f78ac0(lVar5,0);
    }
    lVar5 = __Unwind_Resume();
    return *(undefined8 *)(lVar5 + 8);
  }
  /*System.Collections.Generic.List<NetworkVote>$$GetEnumerator*/ func_0x02422498(&uStack_60,param_2,uRam0000000003d3b680);
  while( true ) {
    uVar2 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$MoveNext*/ func_0x01f6e5b0(&uStack_60,uRam0000000003d32be0);
    if ((uVar2 & 1) == 0) {
      uVar3 = /*System.Collections.Generic.List.Enumerator<NetworkVote>$$Dispose*/ func_0x01f6e5ac(&uStack_60,uRam0000000003d32bd8);
      return uVar3;
    }
    if (*(long *)(param_1 + 0x10) == 0) break;
    /*System.Collections.Generic.List<NetworkVote>$$Add*/ func_0x0242193c(*(long *)(param_1 + 0x10),uStack_50,uStack_48 & 0xffffffff,uRam0000000003d3b660)
    ;
  }
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1661cc4);
  (*pcVar1)();
}



