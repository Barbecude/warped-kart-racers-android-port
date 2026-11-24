// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.EventStanding

// ============================================================
// RVA: 0x1653cc8 | Core.Networking.EventStanding.__assign
// ============================================================

undefined1  [16]
Core_Networking_EventStanding____assign(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)param_1 = param_2;
  param_1[1] = param_3;
  auVar1._0_8_ = *param_1;
  auVar1._8_8_ = param_3;
  return auVar1;
}



// ============================================================
// RVA: 0x16548d8 | Core.Networking.EventStanding.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_EventStanding__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x16548e0 | Core.Networking.EventStanding.GetRootAsEventStanding
// ============================================================

undefined1  [16] Core_Networking_EventStanding__GetRootAsEventStanding(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar1 = /*FlatBuffers.ByteBuffer$$GetInt*/ func_0x016ccdec(param_1,*(undefined4 *)(param_1 + 0x18),0);
    auVar3._4_4_ = 0;
    auVar3._0_4_ = *(int *)(param_1 + 0x18) + iVar1;
    auVar3._8_8_ = param_1;
    return auVar3;
  }
  auVar3 = func_0x00f78af4();
  *auVar3._0_8_ = auVar3._8_4_;
  *(undefined8 *)(auVar3._0_8_ + 2) = uVar2;
  return auVar3;
}



// ============================================================
// RVA: 0x16548ec | Core.Networking.EventStanding.GetRootAsEventStanding
// ============================================================

undefined1  [16]
Core_Networking_EventStanding__GetRootAsEventStanding(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  if (param_1 != 0) {
    iVar1 = /*FlatBuffers.ByteBuffer$$GetInt*/ func_0x016ccdec(param_1,*(undefined4 *)(param_1 + 0x18),0);
    auVar2._0_8_ = param_2 & 0xffffffff00000000 | (ulong)(uint)(*(int *)(param_1 + 0x18) + iVar1);
    auVar2._8_8_ = param_1;
    return auVar2;
  }
  auVar2 = func_0x00f78af4();
  *auVar2._0_8_ = auVar2._8_4_;
  *(undefined8 *)(auVar2._0_8_ + 2) = param_3;
  return auVar2;
}



// ============================================================
// RVA: 0x1654930 | Core.Networking.EventStanding.__init
// ============================================================

void Core_Networking_EventStanding____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x165493c | Core.Networking.EventStanding.get_SyncId
// ============================================================

/* WARNING: Possible PIC construction at 0x016cce70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0293870c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01654ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01654b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01654b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01654b50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01654b3c) */
/* WARNING: Removing unreachable block (ram,0x01654b24) */
/* WARNING: Removing unreachable block (ram,0x01654acc) */
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
/* WARNING: Removing unreachable block (ram,0x01654b54) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_EventStanding__get_SyncId
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                )

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *****pppppuVar4;
  undefined1 *puVar5;
  undefined8 *****pppppuVar6;
  short sVar7;
  undefined4 uVar10;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 uVar16;
  short sVar8;
  short sVar9;
  int iVar11;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  dword *pdVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  int *piVar29;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar30;
  ulong unaff_x22;
  undefined8 *****pppppuVar31;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined1 *puVar32;
  undefined *puVar33;
  float extraout_s0;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  ulong auStack_1f0 [4];
  undefined1 auStack_1d0 [12];
  int iStack_1c4;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ****ppppuStack_100;
  undefined *puStack_f8;
  undefined8 ****ppppuStack_b0;
  undefined *puStack_a8;
  undefined8 ****ppppuStack_90;
  undefined *puStack_88;
  undefined8 ****ppppuStack_70;
  undefined *puStack_68;
  undefined8 ****ppppuStack_50;
  undefined *puStack_48;
  undefined8 ****ppppuStack_30;
  undefined *puStack_28;
  
  uVar14 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,4,0);
  if ((int)uVar14 == 0) {
    return uVar14;
  }
  if (*(long *)(param_1 + 2) != 0) {
    uVar14 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + (int)uVar14,4);
    return uVar14;
  }
  piVar15 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_EventStanding__get_BattleScore;
  ppppuStack_30 = (undefined8 ****)&stack0xfffffffffffffff0;
  uVar14 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar15,6,0);
  if ((int)uVar14 == 0) {
    return uVar14;
  }
  lVar25 = *(long *)(piVar15 + 2);
  if (lVar25 != 0) {
    uVar13 = *piVar15 + (int)uVar14;
    puVar2 = &stack0xffffffffffffffe0;
    pppppuVar4 = (undefined8 *****)ppppuStack_30;
    puVar33 = puStack_28;
code_r0x016cccfc:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(int **)(puVar2 + -0x18) = param_1;
    *(undefined8 ******)(puVar2 + -0x10) = pppppuVar4;
    *(undefined **)(puVar2 + -8) = puVar33;
    uVar21 = 1;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar25,(ulong)uVar13,1);
    if ((*(long *)(lVar25 + 0x10) == 0) ||
       (lVar27 = *(long *)(*(long *)(lVar25 + 0x10) + 0x10), lVar27 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar13 < *(uint *)(lVar27 + 0x18)) {
      return (ulong)*(byte *)(lVar27 + (int)uVar13 + 0x20);
    }
    uVar16 = func_0x00f78b24();
    auVar35 = func_0x00f78ac0(uVar16,0);
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(ulong *)(puVar2 + -0x48) = unaff_x21;
    *(long *)(puVar2 + -0x40) = lVar25;
    *(ulong *)(puVar2 + -0x38) = (ulong)uVar13;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
    plVar17 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
    lVar25 = *(long *)(auVar35._0_8_ + 0x10);
    if ((lVar25 != 0) && (plVar17 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (**(code **)(*plVar17 + 0x348))
                         (plVar17,*(undefined8 *)(lVar25 + 0x10),auVar35._8_8_,uVar21,
                          *(undefined8 *)(*plVar17 + 0x350));
      return uVar14;
    }
    auVar35 = func_0x00f78af4();
    *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x30;
    *(undefined **)(puVar2 + -0x58) = &FlatBuffers_ByteBuffer__GetShort;
    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar35._0_8_,auVar35._8_8_,2);
    return (ulong)(uint)(int)sVar7;
  }
  piVar15 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Networking_EventStanding__get_TimeStamp;
  ppppuStack_50 = &ppppuStack_30;
  uVar14 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar15,8,0);
  if ((int)uVar14 == 0) {
    return uVar14;
  }
  if (*(long *)(piVar15 + 2) != 0) {
    uVar14 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar15 + 2),*piVar15 + (int)uVar14,4);
    return uVar14;
  }
  piVar15 = (int *)func_0x00f78af4();
  puStack_68 = &Core_Networking_EventStanding__get_SplinePosition;
  ppppuStack_70 = &ppppuStack_50;
  uVar14 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar15,10,0);
  if ((int)uVar14 == 0) {
    return uVar14;
  }
  uVar26 = *(ulong *)(piVar15 + 2);
  if (uVar26 == 0) {
    param_1 = (int *)func_0x00f78af4();
    puVar2 = &stack0xffffffffffffff60;
    puStack_88 = &Core_Networking_EventStanding__get_Dnf;
    pppppuVar4 = &ppppuStack_90;
    uVar21 = 0;
    ppppuStack_90 = &ppppuStack_70;
    uVar14 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0xc);
    if ((int)uVar14 == 0) {
      return uVar14;
    }
    lVar25 = *(long *)(param_1 + 2);
    if (lVar25 != 0) {
      uVar13 = *param_1 + (int)uVar14;
      puVar33 = &UNK_01654acc;
      goto code_r0x016cccfc;
    }
    auVar35 = func_0x00f78af4();
    piVar15 = auVar35._0_8_;
    puVar3 = &stack0xffffffffffffff10;
    puStack_a8 = &Core_Networking_EventStanding__CreateEventStanding;
    pppppuVar6 = &ppppuStack_b0;
    ppppuStack_b0 = pppppuVar4;
    if (piVar15 != (int *)0x0) {
      puVar33 = &UNK_01654b24;
      piVar29 = piVar15;
      unaff_x21 = param_5;
      unaff_x22 = auVar35._8_8_;
code_r0x016ce2a4:
      uVar16 = 0;
      pppppuVar4 = (undefined8 *****)(puVar3 + -0x30);
      *(ulong *)(puVar3 + -0x30) = unaff_x22;
      *(ulong *)(puVar3 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar3 + -0x20) = uVar21;
      *(int **)(puVar3 + -0x18) = piVar29;
      *(undefined8 ******)(puVar3 + -0x10) = pppppuVar6;
      *(undefined **)(puVar3 + -8) = puVar33;
      unaff_x20 = (long *)((long)&MACH_HEADER.cputype + 1);
      unaff_x21 = 0x3eb5000;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100);
        bRam0000000003eb5cd7 = 1;
      }
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar15);
      if (*(long *)(piVar15 + 10) != 0) {
        if (*(int *)(*(long *)(piVar15 + 10) + 0x18) < 5) {
          uVar21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
          *(undefined8 *)(piVar15 + 10) = uVar21;
        }
        piVar15[0xc] = 5;
        uVar14 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar15);
        piVar15[0xd] = (int)uVar14;
        return uVar14;
      }
      auVar35 = func_0x00f78af4();
      param_1 = piVar15;
      pppppuVar6 = (undefined8 *****)(puVar3 + -0x10);
      puVar33 = &FlatBuffers_FlatBufferBuilder__Slot;
code_r0x016ce380:
      do {
        piVar15 = auVar35._8_8_;
        *(long **)((long)pppppuVar4 + -0x20) = unaff_x20;
        *(int **)((long)pppppuVar4 + -0x18) = param_1;
        *(undefined8 ******)((long)pppppuVar4 + -0x10) = pppppuVar6;
        *(undefined **)((long)pppppuVar4 + -8) = puVar33;
        puVar32 = (undefined1 *)((long)pppppuVar4 + -0x10);
        uVar13 = auVar35._8_4_;
        if ((int)uVar13 < *(int *)(auVar35._0_8_ + 0x30)) {
          unaff_x20 = *(long **)(auVar35._0_8_ + 0x28);
          uVar14 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
          if (unaff_x20 == (long *)0x0) goto code_r0x016ce410;
          if (uVar13 < *(uint *)(unaff_x20 + 3)) {
            *(int *)((long)unaff_x20 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar14;
            return uVar14;
          }
        }
        else {
          func_0x00f78a24(0x3d22738);
          piVar15 = (int *)func_0x00f78aec();
          uVar21 = func_0x00f78a24(0x3d6ceb8);
          uVar16 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar15,uVar21);
          uVar21 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(piVar15,uVar21);
code_r0x016ce410:
          func_0x00f78af4();
        }
        uVar21 = func_0x00f78b24();
        puVar33 = &FlatBuffers_FlatBufferBuilder__AddBool;
        auVar35 = func_0x00f78ac0(uVar21,0);
        pdVar20 = auVar35._8_8_;
        auVar34._8_8_ = uVar16;
        auVar34._0_8_ = auVar35._0_8_;
        pppppuVar4 = (undefined8 *****)((long)pppppuVar4 + -0x20);
        param_1 = piVar15;
code_r0x016ce420:
        uVar14 = auVar34._0_8_;
        auVar35._8_8_ = pdVar20;
        auVar35._0_8_ = uVar14;
        *(ulong *)((long)pppppuVar4 + -0x30) = unaff_x22;
        *(ulong *)((long)pppppuVar4 + -0x28) = unaff_x21;
        *(long **)((long)pppppuVar4 + -0x20) = unaff_x20;
        *(int **)((long)pppppuVar4 + -0x18) = param_1;
        *(undefined1 **)((long)pppppuVar4 + -0x10) = puVar32;
        *(undefined **)((long)pppppuVar4 + -8) = puVar33;
        if ((auVar34._8_4_ == (int)param_4) && (*(char *)(uVar14 + 0x48) == '\0')) {
          return uVar14;
        }
        uVar16 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar14,1);
        /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar14,auVar34._8_8_);
        unaff_x20 = *(long **)((long)pppppuVar4 + -0x20);
        param_1 = *(int **)((long)pppppuVar4 + -0x18);
        unaff_x22 = *(ulong *)((long)pppppuVar4 + -0x30);
        unaff_x21 = *(ulong *)((long)pppppuVar4 + -0x28);
        pppppuVar6 = *(undefined8 ******)((long)pppppuVar4 + -0x10);
        puVar33 = *(undefined **)((long)pppppuVar4 + -8);
      } while( true );
    }
    uVar14 = func_0x00f78af4();
    ppppuStack_100 = pppppuVar6;
    if (uVar14 != 0) {
      puStack_f8 = &Core_Networking_EventStanding__AddSplinePosition;
      if (extraout_s0 == 0.0 && *(char *)(uVar14 + 0x48) == '\0') {
        return uVar14;
      }
      uVar16 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar14,4);
      /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,uVar14);
      auVar35._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 3);
      auVar35._0_8_ = uVar14;
      pppppuVar4 = (undefined8 *****)&stack0xffffffffffffff10;
      pppppuVar6 = (undefined8 *****)ppppuStack_100;
      puVar33 = puStack_f8;
      goto code_r0x016ce380;
    }
    pppppuVar6 = &ppppuStack_100;
    puStack_f8 = &Core_Networking_EventStanding__AddSplinePosition;
    auVar35 = func_0x00f78af4();
    uVar14 = auVar35._0_8_;
    if (uVar14 != 0) {
      param_4 = 0;
      if ((auVar35._8_4_ == 0) && (*(char *)(uVar14 + 0x48) == '\0')) {
        return uVar14;
      }
      uVar16 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar14,4,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar14,auVar35._8_8_);
      auVar35._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 2);
      auVar35._0_8_ = uVar14;
      puVar33 = &Core_Networking_EventStanding__AddTimeStamp;
      pppppuVar4 = &ppppuStack_100;
      goto code_r0x016ce380;
    }
    pppppuVar6 = (undefined8 *****)&stack0xfffffffffffffef0;
    auVar35 = func_0x00f78af4();
    uVar14 = auVar35._0_8_;
    if (uVar14 != 0) {
      param_4 = 0;
      if ((auVar35._8_4_ == 0) && (*(char *)(uVar14 + 0x48) == '\0')) {
        return uVar14;
      }
      uVar16 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar14,4,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar14,auVar35._8_8_);
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar14;
      puVar33 = &Core_Networking_EventStanding__AddSyncId;
      pppppuVar4 = (undefined8 *****)&stack0xfffffffffffffef0;
      goto code_r0x016ce380;
    }
    pppppuVar4 = (undefined8 *****)&stack0xfffffffffffffee0;
    puVar32 = &stack0xfffffffffffffee0;
    puVar33 = &Core_Networking_EventStanding__AddDnf;
    auVar34 = func_0x00f78af4();
    if (auVar34._0_8_ != 0) {
      pdVar20 = &MACH_HEADER.cputype;
      param_4 = 0;
      goto code_r0x016ce420;
    }
    pppppuVar6 = (undefined8 *****)&stack0xfffffffffffffed0;
    auVar35 = func_0x00f78af4();
    uVar14 = auVar35._0_8_;
    if (uVar14 != 0) {
      param_4 = 0;
      if ((auVar35._8_4_ == 0) && (*(char *)(uVar14 + 0x48) == '\0')) {
        return uVar14;
      }
      uVar16 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar14,1,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar14,auVar35._8_8_);
      auVar35._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      auVar35._0_8_ = uVar14;
      puVar33 = &Core_Networking_EventStanding__AddBattleScore;
      pppppuVar4 = (undefined8 *****)&stack0xfffffffffffffed0;
      goto code_r0x016ce380;
    }
    lVar25 = func_0x00f78af4();
    puVar3 = &stack0xfffffffffffffea0;
    pppppuVar6 = (undefined8 *****)&stack0xfffffffffffffeb0;
    uVar21 = 0x3eb5000;
    if ((bRam0000000003eb57f1 & 1) == 0) {
      func_0x00f78a20(0x3d3f080);
      bRam0000000003eb57f1 = 1;
    }
    if (lVar25 == 0) {
      puVar33 = &Core_Networking_EventStanding__StartEventStanding;
      piVar15 = (int *)func_0x00f78af4();
      if (piVar15 == (int *)0x0) {
        lVar25 = func_0x00f78af4();
        return *(ulong *)(lVar25 + 8);
      }
      piVar29 = (int *)0x0;
      goto code_r0x016ce2a4;
    }
    uVar14 = 0x3eb5000;
    if ((bRam0000000003eb5cd8 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,0);
      bRam0000000003eb5cd8 = 1;
    }
    if (-1 < *(int *)(lVar25 + 0x30)) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar25,4,0);
      /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar25,0);
      uVar14 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar25);
      unaff_x21 = (ulong)*(uint *)(lVar25 + 0x30);
      uVar13 = *(uint *)(lVar25 + 0x30) - 1;
      if (-2 < (int)uVar13) {
        uVar13 = 0xffffffff;
      }
      unaff_x22 = (ulong)uVar13;
      do {
        uVar1 = (int)unaff_x21 - 1;
        unaff_x21 = (ulong)uVar1;
        iVar24 = (int)uVar14;
        if ((int)uVar1 < 0) goto code_r0x016ceb30;
        lVar27 = *(long *)(lVar25 + 0x28);
        if (lVar27 == 0) goto code_r0x016ced84;
        if (*(uint *)(lVar27 + 0x18) <= uVar1) goto code_r0x016ced88;
      } while (*(int *)(lVar27 + (ulong)uVar1 * 4 + 0x20) == 0);
      unaff_x22 = unaff_x21 + 8;
      do {
        uVar26 = unaff_x22 - 8;
        if (*(uint *)(lVar27 + 0x18) <= uVar26) goto code_r0x016ced88;
        iVar11 = *(int *)(lVar27 + unaff_x22 * 4);
        sVar7 = 0;
        if (iVar11 != 0) {
          sVar7 = (short)uVar14 - (short)iVar11;
        }
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar25,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar25,(int)sVar7);
        lVar27 = *(long *)(lVar25 + 0x28);
        if (lVar27 == 0) goto code_r0x016ced84;
        if (*(uint *)(lVar27 + 0x18) <= uVar26) goto code_r0x016ced88;
        *(undefined4 *)(lVar27 + unaff_x22 * 4) = 0;
        unaff_x22 = unaff_x22 - 1;
        uVar13 = uVar1;
      } while (0 < (long)uVar26);
code_r0x016ceb30:
      uVar10 = *(undefined4 *)(lVar25 + 0x34);
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar25,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar25,(int)(short)((short)uVar14 - (short)uVar10));
      uVar13 = uVar13 * 2 + 6;
      unaff_x21 = (ulong)uVar13;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar25,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar25,(int)(short)uVar13);
      unaff_x22 = (ulong)*(uint *)(lVar25 + 0x40);
      if (0 < (int)*(uint *)(lVar25 + 0x40)) {
        uVar26 = 0;
        do {
          lVar27 = *(long *)(lVar25 + 0x18);
          if (((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0)) ||
             (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto code_r0x016ced84;
          if (*(uint *)(lVar28 + 0x18) <= uVar26) goto code_r0x016ced88;
          uVar1 = *(int *)(*(long *)(lVar27 + 0x10) + 0x18) - *(int *)(lVar28 + uVar26 * 4 + 0x20);
          unaff_x21 = (ulong)uVar1;
          uVar13 = *(uint *)(lVar25 + 0x10);
          unaff_x22 = (ulong)uVar13;
          sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar27,unaff_x21,2);
          if (*(long *)(lVar25 + 0x18) == 0) goto code_r0x016ced84;
          sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar25 + 0x18),unaff_x22,2);
          if (sVar7 == sVar8) {
            if (sVar7 < 3) {
code_r0x016cec64:
              unaff_x21 = *(ulong *)(lVar25 + 0x38);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar26) goto code_r0x016ced88;
              iVar11 = *(int *)(unaff_x21 + uVar26 * 4 + 0x20);
              if (iVar11 == 0) {
                unaff_x22 = (ulong)*(uint *)(lVar25 + 0x40);
                goto code_r0x016cecac;
              }
              unaff_x21 = *(ulong *)(lVar25 + 0x18);
              if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
              iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar24;
              *(int *)(lVar25 + 0x10) = iVar12;
              iVar11 = iVar11 - iVar24;
              goto code_r0x016ced3c;
            }
            iVar11 = 2;
            while( true ) {
              if (*(long *)(lVar25 + 0x18) == 0) goto code_r0x016ced84;
              sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar25 + 0x18),uVar1 + iVar11,2);
              if (*(long *)(lVar25 + 0x18) == 0) goto code_r0x016ced84;
              sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar25 + 0x18),uVar13 + iVar11,2);
              if (sVar8 != sVar9) break;
              iVar11 = iVar11 + 2;
              if (sVar7 <= iVar11) goto code_r0x016cec64;
            }
          }
          uVar26 = uVar26 + 1;
          unaff_x22 = (ulong)*(int *)(lVar25 + 0x40);
        } while ((long)uVar26 < (long)unaff_x22);
      }
      unaff_x21 = *(ulong *)(lVar25 + 0x38);
      if (unaff_x21 == 0) {
code_r0x016ced84:
        func_0x00f78af4();
      }
      else {
code_r0x016cecac:
        if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
          unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
          lVar27 = *(long *)(lVar25 + 0x38);
          if (lVar27 == 0) goto code_r0x016ced84;
          /*System.Array$$Copy*/ func_0x0292c49c(lVar27,unaff_x21,*(undefined4 *)(lVar27 + 0x18),0);
          *(ulong *)(lVar25 + 0x38) = unaff_x21;
          unaff_x22 = (ulong)*(uint *)(lVar25 + 0x40);
        }
        uVar13 = (uint)unaff_x22;
        *(uint *)(lVar25 + 0x40) = uVar13 + 1;
        uVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar25);
        if (unaff_x21 == 0) goto code_r0x016ced84;
        if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
          *(undefined4 *)(unaff_x21 + (long)(int)uVar13 * 4 + 0x20) = uVar10;
          unaff_x21 = *(ulong *)(lVar25 + 0x18);
          if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
            iVar12 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
            iVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar25);
            iVar12 = iVar12 - iVar24;
            iVar11 = iVar11 - iVar24;
code_r0x016ced3c:
            /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar12,4);
            /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar12,4,(long)iVar11);
            *(undefined4 *)(lVar25 + 0x30) = 0xffffffff;
            return uVar14;
          }
          goto code_r0x016ced84;
        }
      }
code_r0x016ced88:
      uVar21 = func_0x00f78b24();
      func_0x00f78ac0(uVar21,0);
    }
    func_0x00f78a24(0x3d22a38);
    uVar21 = func_0x00f78aec();
    uVar16 = func_0x00f78a24(0x3d6cea8);
    iVar24 = 0;
    /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar21,uVar16);
    uVar16 = func_0x00f78a24(0x3d56a30);
    auVar37 = func_0x00f78ac0(uVar21,uVar16);
    puVar32 = &stack0xfffffffffffffe60;
    lVar25 = *(long *)(auVar37._0_8_ + 0x18);
    iStack_1c4 = iVar24;
    uStack_1c0 = unaff_x22;
    uStack_1b8 = unaff_x21;
    uStack_1b0 = uVar14;
    uStack_1a8 = uVar21;
    if ((lVar25 != 0) && (*(long *)(lVar25 + 0x10) != 0)) {
      iVar11 = *(int *)(*(long *)(lVar25 + 0x10) + 0x18) - auVar37._8_4_;
      iVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar25,iVar11,4);
      lVar25 = *(long *)(auVar37._0_8_ + 0x18);
      if (lVar25 != 0) {
        uVar14 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar25,(iVar11 - iVar12) + iVar24,2);
        if ((uVar14 & 0xffff) != 0) {
          return uVar14;
        }
        goto code_r0x016cee5c;
      }
    }
    func_0x00f78af4();
code_r0x016cee5c:
    uVar21 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_1c4,0);
    uVar16 = func_0x00f78a24(0x3d6ce88);
    uVar18 = func_0x00f78a24(0x3d66338);
    lVar25 = /*System.String$$Concat*/ func_0x029be39c(uVar16,uVar21,uVar18,0);
    func_0x00f78a24(0x3d22a38);
    uVar14 = func_0x00f78aec();
    uVar16 = 0;
    /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar14,lVar25);
    uVar21 = func_0x00f78a24(0x3d56a50);
    puVar33 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar35 = func_0x00f78ac0(uVar14,uVar21);
    puVar5 = auStack_1d0;
    do {
      uVar26 = auVar35._8_8_;
      lVar27 = auVar35._0_8_;
      *(ulong *)(puVar5 + -0x20) = uVar14;
      *(long *)(puVar5 + -0x18) = lVar25;
      *(undefined1 **)(puVar5 + -0x10) = puVar32;
      *(undefined **)(puVar5 + -8) = puVar33;
      puVar32 = puVar5 + -0x10;
      if ((int)uVar16 == 0) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar27,*(undefined4 *)(lVar27 + 0x20),4);
        uVar14 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar27,uVar26);
code_r0x016cef70:
        if (*(long *)(lVar27 + 0x18) != 0) {
          *(undefined4 *)(*(long *)(lVar27 + 0x18) + 0x18) = *(undefined4 *)(lVar27 + 0x10);
          return uVar14;
        }
      }
      else if (lVar27 != 0) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar27,*(undefined4 *)(lVar27 + 0x20),8);
        /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar27,uVar26);
        if ((*(long *)(lVar27 + 0x18) != 0) &&
           (lVar25 = *(long *)(*(long *)(lVar27 + 0x18) + 0x10), lVar25 != 0)) {
          uVar26 = (ulong)(uint)(*(int *)(lVar25 + 0x18) - *(int *)(lVar27 + 0x10));
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar27,4,0);
          uVar14 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar27,uVar26);
          goto code_r0x016cef70;
        }
      }
      puVar33 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar35 = func_0x00f78af4();
      uVar16 = 0;
      puVar5 = puVar5 + -0x20;
      lVar25 = lVar27;
      uVar14 = uVar26;
    } while( true );
  }
  uVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(uVar26,*piVar15 + (int)uVar14,4);
  uVar14 = *(ulong *)(uVar26 + 0x30);
  if (uVar14 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar14 + 0x18) != 0) {
    *(undefined4 *)(uVar14 + 0x20) = uVar10;
    uVar22 = *(ulong *)(uVar26 + 0x28);
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar14;
    uVar21 = 0;
    pppppuVar6 = (undefined8 *****)&stack0xffffffffffffff80;
    uVar14 = 4;
    pppppuVar4 = &ppppuStack_70;
    puVar33 = &UNK_016cce74;
    goto code_r0x029387b8;
  }
  uVar21 = func_0x00f78b24();
  uVar26 = func_0x00f78ac0(uVar21,0);
  puStack_88 = &FlatBuffers_ByteBuffer__GetDouble;
  uVar23 = 8;
  ppppuStack_90 = &ppppuStack_70;
  uVar21 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634();
  uVar14 = *(ulong *)(uVar26 + 0x40);
  if (uVar14 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar14 + 0x18) != 0) {
    *(undefined8 *)(uVar14 + 0x20) = uVar21;
    uVar22 = *(ulong *)(uVar26 + 0x38);
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar14;
    uVar21 = 0;
    pppppuVar6 = (undefined8 *****)&stack0xffffffffffffff60;
    uVar14 = 8;
    pppppuVar4 = &ppppuStack_90;
    puVar33 = &UNK_016cceec;
    goto code_r0x029387b8;
  }
  uVar21 = func_0x00f78b24();
  auVar35 = func_0x00f78ac0(uVar21,0);
  puVar33 = auVar35._0_8_;
  puStack_a8 = &FlatBuffers_ByteBuffer__PutByteArray;
  pppppuVar31 = (undefined8 *****)0x3eb5000;
  ppppuStack_b0 = &ppppuStack_90;
  if ((bRam0000000003eb5cd1 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd1 = 1;
  }
  if (uVar23 == 0) {
code_r0x016ccfdc:
    func_0x00f78af4();
code_r0x016ccfe0:
    func_0x00f78a24(0x3d1fce8);
    uVar16 = func_0x00f78aec();
    uVar21 = 0x3d6a458;
code_r0x016cd01c:
    uVar21 = func_0x00f78a24(uVar21);
    unaff_x20 = (long *)0x0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar16,uVar21);
  }
  else {
    if (*(long *)(uVar23 + 0x18) == 0) goto code_r0x016ccfe0;
    if ((int)*(long *)(uVar23 + 0x18) < auVar35._8_4_) {
      func_0x00f78a24(0x3d1fce8);
      uVar16 = func_0x00f78aec();
      uVar21 = 0x3d72a70;
      goto code_r0x016cd01c;
    }
    pppppuVar31 = (undefined8 *****)0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) != '\0') {
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(puVar33,0,auVar35._8_8_);
      if (*(long *)(puVar33 + 0x10) != 0) {
        uVar22 = *(ulong *)(*(long *)(puVar33 + 0x10) + 0x10);
        auVar36._8_8_ = 0;
        auVar36._0_8_ = uVar23;
        uVar21 = 0;
        pppppuVar6 = (undefined8 *****)&stack0xffffffffffffff60;
        uVar14 = auVar35._8_8_;
        pppppuVar4 = (undefined8 *****)ppppuStack_b0;
        puVar33 = puStack_a8;
        goto code_r0x029387b8;
      }
      goto code_r0x016ccfdc;
    }
    func_0x00f78a24(0x3d238c8);
    uVar16 = func_0x00f78aec();
    uVar21 = func_0x00f78a24(0x3d69698);
    unaff_x20 = (long *)0x0;
    /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar16,uVar21);
  }
  uVar21 = func_0x00f78a24(0x3d52cf8);
  auVar35 = func_0x00f78ac0(uVar16,uVar21);
  uVar26 = auVar35._8_8_;
  unaff_x21 = auVar35._0_8_;
  pppppuVar6 = &ppppuStack_100;
  pppppuVar4 = (undefined8 *****)&stack0xffffffffffffff20;
  unaff_x22 = 0x3eb5000;
  ppppuStack_100 = pppppuVar31;
  puStack_f8 = puVar33;
  if ((bRam0000000003eb5cd2 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    func_0x00f78a20(0x3d23210);
    bRam0000000003eb5cd2 = 1;
  }
  if (auVar35._8_4_ == 0) {
    func_0x00f78a24(0x3d1fce8);
    uVar26 = func_0x00f78aec();
    uVar21 = func_0x00f78a24(0x3d6a458);
    uVar14 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar26,uVar21);
code_r0x016cd1bc:
    uVar21 = func_0x00f78a24(0x3d52d00);
    func_0x00f78ac0(uVar26,uVar21);
  }
  else {
    unaff_x22 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
      func_0x00f78a24(0x3d238c8);
      uVar26 = func_0x00f78aec();
      uVar21 = func_0x00f78a24(0x3d69698);
      uVar14 = 0;
      /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar26,uVar21);
      goto code_r0x016cd1bc;
    }
    uVar14 = uVar26;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,0);
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      puVar30 = *(undefined8 **)(*(long *)(unaff_x21 + 0x10) + 0x10);
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
      uVar21 = func_0x00f76cf0(*puVar30);
      uVar16 = func_0x00faf4d8(puVar30,uVar21,0);
                    /* WARNING: Could not recover jumptable at 0x033034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*(code *)PTR_DAT_03c8cea0)(uVar16,unaff_x20,(int)uVar21 * auVar35._8_4_);
      return uVar14;
    }
  }
  auVar35 = func_0x00f78af4();
  uVar22 = auVar35._8_8_;
  lVar25 = auVar35._0_8_;
  if ((bRam0000000003eb5cd3 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd3 = 1;
  }
  if (uVar22 == 0) {
code_r0x016cd29c:
    func_0x00f78af4();
  }
  else if ((int)uVar14 <= *(int *)(uVar22 + 0x18)) {
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') goto code_r0x016cd33c;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar25,0,uVar14);
    if (*(long *)(lVar25 + 0x10) != 0) {
      auVar36._8_4_ = *(undefined4 *)(lVar25 + 0x18);
      auVar36._0_8_ = *(undefined8 *)(*(long *)(lVar25 + 0x10) + 0x10);
      auVar36._12_4_ = 0;
      uVar21 = 0;
      puVar33 = &FlatBuffers_ByteBuffer__CopyByteArray;
code_r0x029387b8:
      do {
        uVar23 = auVar36._8_8_;
        lVar25 = auVar36._0_8_;
        *(ulong *)((long)pppppuVar6 + -0x40) = unaff_x24;
        *(ulong *)((long)pppppuVar6 + -0x38) = unaff_x23;
        *(ulong *)((long)pppppuVar6 + -0x30) = unaff_x22;
        *(ulong *)((long)pppppuVar6 + -0x28) = unaff_x21;
        *(long **)((long)pppppuVar6 + -0x20) = unaff_x20;
        *(ulong *)((long)pppppuVar6 + -0x18) = uVar26;
        *(undefined8 ******)((long)pppppuVar6 + -0x10) = pppppuVar4;
        *(undefined **)((long)pppppuVar6 + -8) = puVar33;
        if (lVar25 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar16 = func_0x00f78aec();
          uVar21 = 0x3d7b990;
code_r0x02938884:
          uVar21 = func_0x00f78a24(uVar21);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar16,uVar21,0);
          uVar21 = func_0x00f78a24(0x3d52be0);
          func_0x00f78ac0(uVar16,uVar21);
code_r0x029388b0:
          uVar21 = func_0x00f78a24(0x3d70548);
          uVar16 = /*Locale$$GetText*/ func_0x02af42b4(uVar21,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar18 = func_0x00f78aec();
          uVar21 = 0x3d7b998;
code_r0x02938954:
          auVar36._8_8_ = unaff_x22;
          auVar36._0_8_ = unaff_x23;
          uVar19 = func_0x00f78a24(uVar21);
          uVar21 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar18,uVar19,uVar16);
        }
        else {
          unaff_x21 = uVar22;
          if (uVar22 == 0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar16 = func_0x00f78aec();
            uVar21 = 0x3d78c30;
            goto code_r0x02938884;
          }
          unaff_x22 = uVar23;
          if (auVar36._8_4_ < 0) goto code_r0x029388b0;
          iVar24 = (int)uVar21;
          if (iVar24 < 0) {
            uVar21 = func_0x00f78a24(0x3d70548);
            uVar16 = /*Locale$$GetText*/ func_0x02af42b4(uVar21,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar18 = func_0x00f78aec();
            uVar21 = 0x3d78c38;
            goto code_r0x02938954;
          }
          iVar11 = (int)uVar14;
          if (iVar11 < 0) {
            uVar21 = func_0x00f78a24(0x3d70548);
            uVar16 = /*Locale$$GetText*/ func_0x02af42b4(uVar21,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar18 = func_0x00f78aec();
            uVar21 = 0x3d78638;
            goto code_r0x02938954;
          }
          uVar26 = func_0x00f836d8(lVar25,uVar23,uVar22);
          if (((uVar26 & 1) != 0) ||
             ((iVar12 = /*System.Buffer$$ByteLength*/ func_0x0294274c(lVar25), auVar36._8_4_ <= iVar12 - iVar11 &&
              (uVar26 = /*System.Buffer$$ByteLength*/ func_0x0294274c(uVar22), iVar24 <= (int)uVar26 - iVar11)))) {
            return uVar26;
          }
          uVar16 = func_0x00f78a24(0x3d70ad8);
          uVar16 = /*Locale$$GetText*/ func_0x02af42b4(uVar16,0);
          func_0x00f78a24(0x3d1fce8);
          uVar18 = func_0x00f78aec();
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar18,uVar16,0);
        }
        uVar19 = func_0x00f78a24(0x3d52be0);
        uVar13 = func_0x00f78ac0(uVar18,uVar19);
        *(long *)((long)pppppuVar6 + -0x70) = auVar36._8_8_;
        *(ulong *)((long)pppppuVar6 + -0x68) = unaff_x21;
        *(undefined8 *)((long)pppppuVar6 + -0x60) = uVar18;
        *(undefined8 *)((long)pppppuVar6 + -0x58) = uVar16;
        *(undefined1 **)((long)pppppuVar6 + -0x50) = (undefined1 *)((long)pppppuVar6 + -0x10);
        *(undefined **)((long)pppppuVar6 + -0x48) = &Mono_Math_BigInteger__GenerateRandom;
        if ((bRam0000000003eb8f4c & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          bRam0000000003eb8f4c = 1;
        }
        if (((*(ushort *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x20 = (long *)/*Mono.Math.BigInteger$$get_Rng*/ func_0x02938598();
        *(ulong *)((long)pppppuVar6 + -0x80) = unaff_x24;
        *(long *)((long)pppppuVar6 + -0x78) = auVar36._0_8_;
        *(undefined8 *)((long)pppppuVar6 + -0x70) = *(undefined8 *)((long)pppppuVar6 + -0x70);
        *(undefined8 *)((long)pppppuVar6 + -0x68) = *(undefined8 *)((long)pppppuVar6 + -0x68);
        *(undefined8 *)((long)pppppuVar6 + -0x60) = *(undefined8 *)((long)pppppuVar6 + -0x60);
        *(undefined8 *)((long)pppppuVar6 + -0x58) = *(undefined8 *)((long)pppppuVar6 + -0x58);
        *(undefined8 *)((long)pppppuVar6 + -0x50) = *(undefined8 *)((long)pppppuVar6 + -0x50);
        *(undefined8 *)((long)pppppuVar6 + -0x48) = *(undefined8 *)((long)pppppuVar6 + -0x48);
        pppppuVar4 = (undefined8 *****)((long)pppppuVar6 + -0x50);
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
        uVar26 = func_0x00f78aec(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078);
        uVar22 = (ulong)(uVar1 + 1);
        /*Mono.Math.BigInteger$$.ctor*/ func_0x029379ec();
        unaff_x21 = (ulong)(uVar1 << 2);
        unaff_x22 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,unaff_x21);
        uVar23 = 0x3d20078;
        if (unaff_x20 != (long *)0x0) {
          uVar22 = *(ulong *)(*unaff_x20 + 0x1a0);
          (**(code **)(*unaff_x20 + 0x198))(unaff_x20,unaff_x22);
          uVar23 = unaff_x22;
          if (uVar26 != 0) {
            uVar22 = *(ulong *)(uVar26 + 0x18);
            auVar36._8_8_ = 0;
            auVar36._0_8_ = unaff_x22;
            uVar21 = 0;
            puVar33 = &UNK_02938710;
            pppppuVar6 = (undefined8 *****)((long)pppppuVar6 + -0x80);
            uVar14 = unaff_x21;
            goto code_r0x029387b8;
          }
        }
        unaff_x22 = uVar23;
        func_0x00f78af4();
        uVar16 = func_0x00f78b24();
        puVar33 = &System_Buffer__BlockCopy;
        auVar36 = func_0x00f78ac0(uVar16,0);
        pppppuVar6 = (undefined8 *****)((long)pppppuVar6 + -0x80);
      } while( true );
    }
    goto code_r0x016cd29c;
  }
  uVar21 = func_0x00f78a24(0x3d22910);
  uVar21 = func_0x00f78ae0(uVar21,&stack0xfffffffffffffecc);
  func_0x00055e5c(uVar22);
  uVar16 = func_0x00f78a24(0x3d22910);
  uVar16 = func_0x00f78ae0(uVar16,&stack0xfffffffffffffec8);
  uVar18 = func_0x00f78a24(0x3d72a68);
  uVar21 = /*System.String$$Format*/ func_0x029bcac4(uVar18,uVar21,uVar16,0);
  func_0x00f78a24(0x3d1fce8);
  uVar16 = func_0x00f78aec();
  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar16,uVar21,0);
  uVar21 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar16,uVar21);
code_r0x016cd33c:
  func_0x00f78a24(0x3d238c8);
  uVar21 = func_0x00f78aec();
  uVar16 = func_0x00f78a24(0x3d69698);
  /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar21,uVar16,0);
  uVar16 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar21,uVar16);
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
  lVar25 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, int>_TypeInfo*/ uRam0000000003d1c590);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(lVar25,uRam0000000003d30160);
  uVar21 = /*bool_var*/ uRam0000000003d19080;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar21,0);
  if (lVar25 != 0) {
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar25,uVar21,1,uRam0000000003d30168);
    uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*float_var*/ uRam0000000003d19e28,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar25,uVar21,4,uRam0000000003d30168);
    uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*double_var*/ uRam0000000003d19388,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar25,uVar21,8,uRam0000000003d30168);
    uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*sbyte_var*/ uRam0000000003d19d88,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar25,uVar21,1,uRam0000000003d30168);
    uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*byte_var*/ uRam0000000003d190e0,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar25,uVar21,1,uRam0000000003d30168);
    uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*short_var*/ uRam0000000003d198b0,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar25,uVar21,2,uRam0000000003d30168);
    uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ushort_var*/ uRam0000000003d1a0a8,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar25,uVar21,2,uRam0000000003d30168);
    uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*int_var*/ uRam0000000003d198c0,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar25,uVar21,4,uRam0000000003d30168);
    uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*uint_var*/ uRam0000000003d1a0b8,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar25,uVar21,4,uRam0000000003d30168);
    uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ulong_var*/ uRam0000000003d1a0c8,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar25,uVar21,8,uRam0000000003d30168);
    uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*long_var*/ uRam0000000003d198d0,0);
    uVar14 = /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar25,uVar21,8,uRam0000000003d30168);
    **(long **)(/*FlatBuffers.ByteBuffer_TypeInfo*/ lRam0000000003d203b0 + 0xb8) = lVar25;
    return uVar14;
  }
  lVar25 = func_0x00f78af4();
  return *(ulong *)(lVar25 + 0x10);
}



// ============================================================
// RVA: 0x1654990 | Core.Networking.EventStanding.get_BattleScore
// ============================================================

/* WARNING: Possible PIC construction at 0x016cce70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0293870c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01654ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01654b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01654b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01654b50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01654b3c) */
/* WARNING: Removing unreachable block (ram,0x01654b24) */
/* WARNING: Removing unreachable block (ram,0x01654acc) */
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
/* WARNING: Removing unreachable block (ram,0x01654b54) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_EventStanding__get_BattleScore
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                )

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *****pppppuVar5;
  short sVar6;
  undefined4 uVar9;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  short sVar7;
  short sVar8;
  int iVar10;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  dword *pdVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  int *unaff_x19;
  int *piVar28;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar29;
  ulong unaff_x22;
  undefined8 *****pppppuVar30;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 *****unaff_x29;
  undefined8 *****pppppuVar31;
  undefined *unaff_x30;
  undefined *puVar32;
  float extraout_s0;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  ulong auStack_1d0 [4];
  undefined1 auStack_1b0 [12];
  int iStack_1a4;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 ****ppppuStack_e0;
  undefined *puStack_d8;
  undefined8 ****ppppuStack_90;
  undefined *puStack_88;
  undefined8 ****ppppuStack_70;
  undefined *puStack_68;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  undefined8 **ppuStack_30;
  undefined *puStack_28;
  
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  lVar24 = *(long *)(param_1 + 2);
  if (lVar24 != 0) {
    uVar12 = *param_1 + (int)uVar13;
    puVar2 = (undefined1 *)register0x00000008;
code_r0x016cccfc:
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(int **)(puVar2 + -0x18) = unaff_x19;
    *(undefined8 ******)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    uVar20 = 1;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar24,(ulong)uVar12,1);
    if ((*(long *)(lVar24 + 0x10) == 0) ||
       (lVar26 = *(long *)(*(long *)(lVar24 + 0x10) + 0x10), lVar26 == 0)) {
      func_0x00f78af4();
    }
    else if (uVar12 < *(uint *)(lVar26 + 0x18)) {
      return (ulong)*(byte *)(lVar26 + (int)uVar12 + 0x20);
    }
    uVar15 = func_0x00f78b24();
    auVar34 = func_0x00f78ac0(uVar15,0);
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(ulong *)(puVar2 + -0x48) = unaff_x21;
    *(long *)(puVar2 + -0x40) = lVar24;
    *(ulong *)(puVar2 + -0x38) = (ulong)uVar12;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_ByteBuffer__GetStringUTF8;
    plVar16 = (long *)/*System.Text.Encoding$$get_UTF8*/ func_0x02abb130(0);
    lVar24 = *(long *)(auVar34._0_8_ + 0x10);
    if ((lVar24 != 0) && (plVar16 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x016ccdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (**(code **)(*plVar16 + 0x348))
                         (plVar16,*(undefined8 *)(lVar24 + 0x10),auVar34._8_8_,uVar20,
                          *(undefined8 *)(*plVar16 + 0x350));
      return uVar13;
    }
    auVar34 = func_0x00f78af4();
    *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x30;
    *(undefined **)(puVar2 + -0x58) = &FlatBuffers_ByteBuffer__GetShort;
    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(auVar34._0_8_,auVar34._8_8_,2);
    return (ulong)(uint)(int)sVar6;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_EventStanding__get_TimeStamp;
  ppuStack_30 = (undefined8 **)&stack0xfffffffffffffff0;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,8,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  if (*(long *)(piVar14 + 2) != 0) {
    uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(piVar14 + 2),*piVar14 + (int)uVar13,4);
    return uVar13;
  }
  piVar14 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Networking_EventStanding__get_SplinePosition;
  pppuStack_50 = &ppuStack_30;
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,10,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  uVar25 = *(ulong *)(piVar14 + 2);
  if (uVar25 == 0) {
    unaff_x19 = (int *)func_0x00f78af4();
    puVar2 = &stack0xffffffffffffff80;
    puStack_68 = &Core_Networking_EventStanding__get_Dnf;
    unaff_x29 = &ppppuStack_70;
    uVar20 = 0;
    ppppuStack_70 = &pppuStack_50;
    uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(unaff_x19,0xc);
    if ((int)uVar13 == 0) {
      return uVar13;
    }
    lVar24 = *(long *)(unaff_x19 + 2);
    if (lVar24 != 0) {
      uVar12 = *unaff_x19 + (int)uVar13;
      unaff_x30 = &UNK_01654acc;
      goto code_r0x016cccfc;
    }
    auVar34 = func_0x00f78af4();
    piVar14 = auVar34._0_8_;
    puVar3 = &stack0xffffffffffffff30;
    puStack_88 = &Core_Networking_EventStanding__CreateEventStanding;
    pppppuVar31 = &ppppuStack_90;
    ppppuStack_90 = unaff_x29;
    if (piVar14 != (int *)0x0) {
      puVar32 = &UNK_01654b24;
      piVar28 = piVar14;
      unaff_x21 = param_5;
      unaff_x22 = auVar34._8_8_;
code_r0x016ce2a4:
      uVar15 = 0;
      pppppuVar5 = (undefined8 *****)(puVar3 + -0x30);
      *(ulong *)(puVar3 + -0x30) = unaff_x22;
      *(ulong *)(puVar3 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar3 + -0x20) = uVar20;
      *(int **)(puVar3 + -0x18) = piVar28;
      *(undefined8 ******)(puVar3 + -0x10) = pppppuVar31;
      *(undefined **)(puVar3 + -8) = puVar32;
      unaff_x20 = (long *)((long)&MACH_HEADER.cputype + 1);
      unaff_x21 = 0x3eb5000;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100);
        bRam0000000003eb5cd7 = 1;
      }
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar14);
      if (*(long *)(piVar14 + 10) != 0) {
        if (*(int *)(*(long *)(piVar14 + 10) + 0x18) < 5) {
          uVar20 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
          *(undefined8 *)(piVar14 + 10) = uVar20;
        }
        piVar14[0xc] = 5;
        uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar14);
        piVar14[0xd] = (int)uVar13;
        return uVar13;
      }
      auVar34 = func_0x00f78af4();
      unaff_x19 = piVar14;
      pppppuVar31 = (undefined8 *****)(puVar3 + -0x10);
      puVar32 = &FlatBuffers_FlatBufferBuilder__Slot;
code_r0x016ce380:
      do {
        piVar14 = auVar34._8_8_;
        *(long **)((long)pppppuVar5 + -0x20) = unaff_x20;
        *(int **)((long)pppppuVar5 + -0x18) = unaff_x19;
        *(undefined8 ******)((long)pppppuVar5 + -0x10) = pppppuVar31;
        *(undefined **)((long)pppppuVar5 + -8) = puVar32;
        puVar2 = (undefined1 *)((long)pppppuVar5 + -0x10);
        uVar12 = auVar34._8_4_;
        if ((int)uVar12 < *(int *)(auVar34._0_8_ + 0x30)) {
          unaff_x20 = *(long **)(auVar34._0_8_ + 0x28);
          uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
          if (unaff_x20 == (long *)0x0) goto code_r0x016ce410;
          if (uVar12 < *(uint *)(unaff_x20 + 3)) {
            *(int *)((long)unaff_x20 + (long)(int)uVar12 * 4 + 0x20) = (int)uVar13;
            return uVar13;
          }
        }
        else {
          func_0x00f78a24(0x3d22738);
          piVar14 = (int *)func_0x00f78aec();
          uVar20 = func_0x00f78a24(0x3d6ceb8);
          uVar15 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar14,uVar20);
          uVar20 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(piVar14,uVar20);
code_r0x016ce410:
          func_0x00f78af4();
        }
        uVar20 = func_0x00f78b24();
        puVar32 = &FlatBuffers_FlatBufferBuilder__AddBool;
        auVar34 = func_0x00f78ac0(uVar20,0);
        pdVar19 = auVar34._8_8_;
        auVar33._8_8_ = uVar15;
        auVar33._0_8_ = auVar34._0_8_;
        pppppuVar5 = (undefined8 *****)((long)pppppuVar5 + -0x20);
        unaff_x19 = piVar14;
code_r0x016ce420:
        uVar13 = auVar33._0_8_;
        auVar34._8_8_ = pdVar19;
        auVar34._0_8_ = uVar13;
        *(ulong *)((long)pppppuVar5 + -0x30) = unaff_x22;
        *(ulong *)((long)pppppuVar5 + -0x28) = unaff_x21;
        *(long **)((long)pppppuVar5 + -0x20) = unaff_x20;
        *(int **)((long)pppppuVar5 + -0x18) = unaff_x19;
        *(undefined1 **)((long)pppppuVar5 + -0x10) = puVar2;
        *(undefined **)((long)pppppuVar5 + -8) = puVar32;
        if ((auVar33._8_4_ == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
          return uVar13;
        }
        uVar15 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
        /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,auVar33._8_8_);
        unaff_x20 = *(long **)((long)pppppuVar5 + -0x20);
        unaff_x19 = *(int **)((long)pppppuVar5 + -0x18);
        unaff_x22 = *(ulong *)((long)pppppuVar5 + -0x30);
        unaff_x21 = *(ulong *)((long)pppppuVar5 + -0x28);
        pppppuVar31 = *(undefined8 ******)((long)pppppuVar5 + -0x10);
        puVar32 = *(undefined **)((long)pppppuVar5 + -8);
      } while( true );
    }
    uVar13 = func_0x00f78af4();
    ppppuStack_e0 = pppppuVar31;
    if (uVar13 != 0) {
      puStack_d8 = &Core_Networking_EventStanding__AddSplinePosition;
      if (extraout_s0 == 0.0 && *(char *)(uVar13 + 0x48) == '\0') {
        return uVar13;
      }
      uVar15 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4);
      /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,uVar13);
      auVar34._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 3);
      auVar34._0_8_ = uVar13;
      pppppuVar5 = (undefined8 *****)&stack0xffffffffffffff30;
      pppppuVar31 = (undefined8 *****)ppppuStack_e0;
      puVar32 = puStack_d8;
      goto code_r0x016ce380;
    }
    pppppuVar31 = &ppppuStack_e0;
    puStack_d8 = &Core_Networking_EventStanding__AddSplinePosition;
    auVar34 = func_0x00f78af4();
    uVar13 = auVar34._0_8_;
    if (uVar13 != 0) {
      param_4 = 0;
      if ((auVar34._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
        return uVar13;
      }
      uVar15 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar13,auVar34._8_8_);
      auVar34._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 2);
      auVar34._0_8_ = uVar13;
      puVar32 = &Core_Networking_EventStanding__AddTimeStamp;
      pppppuVar5 = &ppppuStack_e0;
      goto code_r0x016ce380;
    }
    pppppuVar31 = (undefined8 *****)&stack0xffffffffffffff10;
    auVar34 = func_0x00f78af4();
    uVar13 = auVar34._0_8_;
    if (uVar13 != 0) {
      param_4 = 0;
      if ((auVar34._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
        return uVar13;
      }
      uVar15 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar13,auVar34._8_8_);
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar13;
      puVar32 = &Core_Networking_EventStanding__AddSyncId;
      pppppuVar5 = (undefined8 *****)&stack0xffffffffffffff10;
      goto code_r0x016ce380;
    }
    pppppuVar5 = (undefined8 *****)&stack0xffffffffffffff00;
    puVar2 = &stack0xffffffffffffff00;
    puVar32 = &Core_Networking_EventStanding__AddDnf;
    auVar33 = func_0x00f78af4();
    if (auVar33._0_8_ != 0) {
      pdVar19 = &MACH_HEADER.cputype;
      param_4 = 0;
      goto code_r0x016ce420;
    }
    pppppuVar31 = (undefined8 *****)&stack0xfffffffffffffef0;
    auVar34 = func_0x00f78af4();
    uVar13 = auVar34._0_8_;
    if (uVar13 != 0) {
      param_4 = 0;
      if ((auVar34._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
        return uVar13;
      }
      uVar15 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar13,auVar34._8_8_);
      auVar34._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      auVar34._0_8_ = uVar13;
      puVar32 = &Core_Networking_EventStanding__AddBattleScore;
      pppppuVar5 = (undefined8 *****)&stack0xfffffffffffffef0;
      goto code_r0x016ce380;
    }
    lVar24 = func_0x00f78af4();
    puVar3 = &stack0xfffffffffffffec0;
    pppppuVar31 = (undefined8 *****)&stack0xfffffffffffffed0;
    uVar20 = 0x3eb5000;
    if ((bRam0000000003eb57f1 & 1) == 0) {
      func_0x00f78a20(0x3d3f080);
      bRam0000000003eb57f1 = 1;
    }
    if (lVar24 == 0) {
      puVar32 = &Core_Networking_EventStanding__StartEventStanding;
      piVar14 = (int *)func_0x00f78af4();
      if (piVar14 == (int *)0x0) {
        lVar24 = func_0x00f78af4();
        return *(ulong *)(lVar24 + 8);
      }
      piVar28 = (int *)0x0;
      goto code_r0x016ce2a4;
    }
    uVar13 = 0x3eb5000;
    if ((bRam0000000003eb5cd8 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,0);
      bRam0000000003eb5cd8 = 1;
    }
    if (-1 < *(int *)(lVar24 + 0x30)) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar24,4,0);
      /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar24,0);
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar24);
      unaff_x21 = (ulong)*(uint *)(lVar24 + 0x30);
      uVar12 = *(uint *)(lVar24 + 0x30) - 1;
      if (-2 < (int)uVar12) {
        uVar12 = 0xffffffff;
      }
      unaff_x22 = (ulong)uVar12;
      do {
        uVar1 = (int)unaff_x21 - 1;
        unaff_x21 = (ulong)uVar1;
        iVar23 = (int)uVar13;
        if ((int)uVar1 < 0) goto code_r0x016ceb30;
        lVar26 = *(long *)(lVar24 + 0x28);
        if (lVar26 == 0) goto code_r0x016ced84;
        if (*(uint *)(lVar26 + 0x18) <= uVar1) goto code_r0x016ced88;
      } while (*(int *)(lVar26 + (ulong)uVar1 * 4 + 0x20) == 0);
      unaff_x22 = unaff_x21 + 8;
      do {
        uVar25 = unaff_x22 - 8;
        if (*(uint *)(lVar26 + 0x18) <= uVar25) goto code_r0x016ced88;
        iVar10 = *(int *)(lVar26 + unaff_x22 * 4);
        sVar6 = 0;
        if (iVar10 != 0) {
          sVar6 = (short)uVar13 - (short)iVar10;
        }
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar24,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar24,(int)sVar6);
        lVar26 = *(long *)(lVar24 + 0x28);
        if (lVar26 == 0) goto code_r0x016ced84;
        if (*(uint *)(lVar26 + 0x18) <= uVar25) goto code_r0x016ced88;
        *(undefined4 *)(lVar26 + unaff_x22 * 4) = 0;
        unaff_x22 = unaff_x22 - 1;
        uVar12 = uVar1;
      } while (0 < (long)uVar25);
code_r0x016ceb30:
      uVar9 = *(undefined4 *)(lVar24 + 0x34);
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar24,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar24,(int)(short)((short)uVar13 - (short)uVar9));
      uVar12 = uVar12 * 2 + 6;
      unaff_x21 = (ulong)uVar12;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar24,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar24,(int)(short)uVar12);
      unaff_x22 = (ulong)*(uint *)(lVar24 + 0x40);
      if (0 < (int)*(uint *)(lVar24 + 0x40)) {
        uVar25 = 0;
        do {
          lVar26 = *(long *)(lVar24 + 0x18);
          if (((lVar26 == 0) || (*(long *)(lVar26 + 0x10) == 0)) ||
             (lVar27 = *(long *)(lVar24 + 0x38), lVar27 == 0)) goto code_r0x016ced84;
          if (*(uint *)(lVar27 + 0x18) <= uVar25) goto code_r0x016ced88;
          uVar1 = *(int *)(*(long *)(lVar26 + 0x10) + 0x18) - *(int *)(lVar27 + uVar25 * 4 + 0x20);
          unaff_x21 = (ulong)uVar1;
          uVar12 = *(uint *)(lVar24 + 0x10);
          unaff_x22 = (ulong)uVar12;
          sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar26,unaff_x21,2);
          if (*(long *)(lVar24 + 0x18) == 0) goto code_r0x016ced84;
          sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar24 + 0x18),unaff_x22,2);
          if (sVar6 == sVar7) {
            if (sVar6 < 3) {
code_r0x016cec64:
              unaff_x21 = *(ulong *)(lVar24 + 0x38);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar25) goto code_r0x016ced88;
              iVar10 = *(int *)(unaff_x21 + uVar25 * 4 + 0x20);
              if (iVar10 == 0) {
                unaff_x22 = (ulong)*(uint *)(lVar24 + 0x40);
                goto code_r0x016cecac;
              }
              unaff_x21 = *(ulong *)(lVar24 + 0x18);
              if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
              iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar23;
              *(int *)(lVar24 + 0x10) = iVar11;
              iVar10 = iVar10 - iVar23;
              goto code_r0x016ced3c;
            }
            iVar10 = 2;
            while( true ) {
              if (*(long *)(lVar24 + 0x18) == 0) goto code_r0x016ced84;
              sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar24 + 0x18),uVar1 + iVar10,2);
              if (*(long *)(lVar24 + 0x18) == 0) goto code_r0x016ced84;
              sVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar24 + 0x18),uVar12 + iVar10,2);
              if (sVar7 != sVar8) break;
              iVar10 = iVar10 + 2;
              if (sVar6 <= iVar10) goto code_r0x016cec64;
            }
          }
          uVar25 = uVar25 + 1;
          unaff_x22 = (ulong)*(int *)(lVar24 + 0x40);
        } while ((long)uVar25 < (long)unaff_x22);
      }
      unaff_x21 = *(ulong *)(lVar24 + 0x38);
      if (unaff_x21 == 0) {
code_r0x016ced84:
        func_0x00f78af4();
      }
      else {
code_r0x016cecac:
        if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
          unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
          lVar26 = *(long *)(lVar24 + 0x38);
          if (lVar26 == 0) goto code_r0x016ced84;
          /*System.Array$$Copy*/ func_0x0292c49c(lVar26,unaff_x21,*(undefined4 *)(lVar26 + 0x18),0);
          *(ulong *)(lVar24 + 0x38) = unaff_x21;
          unaff_x22 = (ulong)*(uint *)(lVar24 + 0x40);
        }
        uVar12 = (uint)unaff_x22;
        *(uint *)(lVar24 + 0x40) = uVar12 + 1;
        uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar24);
        if (unaff_x21 == 0) goto code_r0x016ced84;
        if (uVar12 < *(uint *)(unaff_x21 + 0x18)) {
          *(undefined4 *)(unaff_x21 + (long)(int)uVar12 * 4 + 0x20) = uVar9;
          unaff_x21 = *(ulong *)(lVar24 + 0x18);
          if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
            iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
            iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar24);
            iVar11 = iVar11 - iVar23;
            iVar10 = iVar10 - iVar23;
code_r0x016ced3c:
            /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar11,4);
            /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar11,4,(long)iVar10);
            *(undefined4 *)(lVar24 + 0x30) = 0xffffffff;
            return uVar13;
          }
          goto code_r0x016ced84;
        }
      }
code_r0x016ced88:
      uVar20 = func_0x00f78b24();
      func_0x00f78ac0(uVar20,0);
    }
    func_0x00f78a24(0x3d22a38);
    uVar20 = func_0x00f78aec();
    uVar15 = func_0x00f78a24(0x3d6cea8);
    iVar23 = 0;
    /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar20,uVar15);
    uVar15 = func_0x00f78a24(0x3d56a30);
    auVar36 = func_0x00f78ac0(uVar20,uVar15);
    puVar2 = &stack0xfffffffffffffe80;
    lVar24 = *(long *)(auVar36._0_8_ + 0x18);
    iStack_1a4 = iVar23;
    uStack_1a0 = unaff_x22;
    uStack_198 = unaff_x21;
    uStack_190 = uVar13;
    uStack_188 = uVar20;
    if ((lVar24 != 0) && (*(long *)(lVar24 + 0x10) != 0)) {
      iVar10 = *(int *)(*(long *)(lVar24 + 0x10) + 0x18) - auVar36._8_4_;
      iVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar24,iVar10,4);
      lVar24 = *(long *)(auVar36._0_8_ + 0x18);
      if (lVar24 != 0) {
        uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar24,(iVar10 - iVar11) + iVar23,2);
        if ((uVar13 & 0xffff) != 0) {
          return uVar13;
        }
        goto code_r0x016cee5c;
      }
    }
    func_0x00f78af4();
code_r0x016cee5c:
    uVar20 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_1a4,0);
    uVar15 = func_0x00f78a24(0x3d6ce88);
    uVar17 = func_0x00f78a24(0x3d66338);
    lVar24 = /*System.String$$Concat*/ func_0x029be39c(uVar15,uVar20,uVar17,0);
    func_0x00f78a24(0x3d22a38);
    uVar13 = func_0x00f78aec();
    uVar15 = 0;
    /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar24);
    uVar20 = func_0x00f78a24(0x3d56a50);
    puVar32 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar34 = func_0x00f78ac0(uVar13,uVar20);
    puVar4 = auStack_1b0;
    do {
      uVar25 = auVar34._8_8_;
      lVar26 = auVar34._0_8_;
      *(ulong *)(puVar4 + -0x20) = uVar13;
      *(long *)(puVar4 + -0x18) = lVar24;
      *(undefined1 **)(puVar4 + -0x10) = puVar2;
      *(undefined **)(puVar4 + -8) = puVar32;
      puVar2 = puVar4 + -0x10;
      if ((int)uVar15 == 0) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar26,*(undefined4 *)(lVar26 + 0x20),4);
        uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar26,uVar25);
code_r0x016cef70:
        if (*(long *)(lVar26 + 0x18) != 0) {
          *(undefined4 *)(*(long *)(lVar26 + 0x18) + 0x18) = *(undefined4 *)(lVar26 + 0x10);
          return uVar13;
        }
      }
      else if (lVar26 != 0) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar26,*(undefined4 *)(lVar26 + 0x20),8);
        /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar26,uVar25);
        if ((*(long *)(lVar26 + 0x18) != 0) &&
           (lVar24 = *(long *)(*(long *)(lVar26 + 0x18) + 0x10), lVar24 != 0)) {
          uVar25 = (ulong)(uint)(*(int *)(lVar24 + 0x18) - *(int *)(lVar26 + 0x10));
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar26,4,0);
          uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar26,uVar25);
          goto code_r0x016cef70;
        }
      }
      puVar32 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar34 = func_0x00f78af4();
      uVar15 = 0;
      puVar4 = puVar4 + -0x20;
      lVar24 = lVar26;
      uVar13 = uVar25;
    } while( true );
  }
  uVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(uVar25,*piVar14 + (int)uVar13,4);
  uVar13 = *(ulong *)(uVar25 + 0x30);
  if (uVar13 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar13 + 0x18) != 0) {
    *(undefined4 *)(uVar13 + 0x20) = uVar9;
    uVar21 = *(ulong *)(uVar25 + 0x28);
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar13;
    uVar20 = 0;
    pppppuVar5 = (undefined8 *****)&stack0xffffffffffffffa0;
    uVar13 = 4;
    pppppuVar31 = (undefined8 *****)&pppuStack_50;
    puVar32 = &UNK_016cce74;
    goto code_r0x029387b8;
  }
  uVar20 = func_0x00f78b24();
  uVar25 = func_0x00f78ac0(uVar20,0);
  puStack_68 = &FlatBuffers_ByteBuffer__GetDouble;
  uVar22 = 8;
  ppppuStack_70 = &pppuStack_50;
  uVar20 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634();
  uVar13 = *(ulong *)(uVar25 + 0x40);
  if (uVar13 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar13 + 0x18) != 0) {
    *(undefined8 *)(uVar13 + 0x20) = uVar20;
    uVar21 = *(ulong *)(uVar25 + 0x38);
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar13;
    uVar20 = 0;
    pppppuVar5 = (undefined8 *****)&stack0xffffffffffffff80;
    uVar13 = 8;
    pppppuVar31 = &ppppuStack_70;
    puVar32 = &UNK_016cceec;
    goto code_r0x029387b8;
  }
  uVar20 = func_0x00f78b24();
  auVar34 = func_0x00f78ac0(uVar20,0);
  puVar32 = auVar34._0_8_;
  puStack_88 = &FlatBuffers_ByteBuffer__PutByteArray;
  pppppuVar30 = (undefined8 *****)0x3eb5000;
  ppppuStack_90 = &ppppuStack_70;
  if ((bRam0000000003eb5cd1 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd1 = 1;
  }
  if (uVar22 == 0) {
code_r0x016ccfdc:
    func_0x00f78af4();
code_r0x016ccfe0:
    func_0x00f78a24(0x3d1fce8);
    uVar15 = func_0x00f78aec();
    uVar20 = 0x3d6a458;
code_r0x016cd01c:
    uVar20 = func_0x00f78a24(uVar20);
    unaff_x20 = (long *)0x0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar15,uVar20);
  }
  else {
    if (*(long *)(uVar22 + 0x18) == 0) goto code_r0x016ccfe0;
    if ((int)*(long *)(uVar22 + 0x18) < auVar34._8_4_) {
      func_0x00f78a24(0x3d1fce8);
      uVar15 = func_0x00f78aec();
      uVar20 = 0x3d72a70;
      goto code_r0x016cd01c;
    }
    pppppuVar30 = (undefined8 *****)0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) != '\0') {
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(puVar32,0,auVar34._8_8_);
      if (*(long *)(puVar32 + 0x10) != 0) {
        uVar21 = *(ulong *)(*(long *)(puVar32 + 0x10) + 0x10);
        auVar35._8_8_ = 0;
        auVar35._0_8_ = uVar22;
        uVar20 = 0;
        pppppuVar5 = (undefined8 *****)&stack0xffffffffffffff80;
        uVar13 = auVar34._8_8_;
        pppppuVar31 = (undefined8 *****)ppppuStack_90;
        puVar32 = puStack_88;
        goto code_r0x029387b8;
      }
      goto code_r0x016ccfdc;
    }
    func_0x00f78a24(0x3d238c8);
    uVar15 = func_0x00f78aec();
    uVar20 = func_0x00f78a24(0x3d69698);
    unaff_x20 = (long *)0x0;
    /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar15,uVar20);
  }
  uVar20 = func_0x00f78a24(0x3d52cf8);
  auVar34 = func_0x00f78ac0(uVar15,uVar20);
  uVar25 = auVar34._8_8_;
  unaff_x21 = auVar34._0_8_;
  pppppuVar5 = &ppppuStack_e0;
  pppppuVar31 = (undefined8 *****)&stack0xffffffffffffff40;
  unaff_x22 = 0x3eb5000;
  ppppuStack_e0 = pppppuVar30;
  puStack_d8 = puVar32;
  if ((bRam0000000003eb5cd2 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    func_0x00f78a20(0x3d23210);
    bRam0000000003eb5cd2 = 1;
  }
  if (auVar34._8_4_ == 0) {
    func_0x00f78a24(0x3d1fce8);
    uVar25 = func_0x00f78aec();
    uVar20 = func_0x00f78a24(0x3d6a458);
    uVar13 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar25,uVar20);
code_r0x016cd1bc:
    uVar20 = func_0x00f78a24(0x3d52d00);
    func_0x00f78ac0(uVar25,uVar20);
  }
  else {
    unaff_x22 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
      func_0x00f78a24(0x3d238c8);
      uVar25 = func_0x00f78aec();
      uVar20 = func_0x00f78a24(0x3d69698);
      uVar13 = 0;
      /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar25,uVar20);
      goto code_r0x016cd1bc;
    }
    uVar13 = uVar25;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,0);
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      puVar29 = *(undefined8 **)(*(long *)(unaff_x21 + 0x10) + 0x10);
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
      uVar20 = func_0x00f76cf0(*puVar29);
      uVar15 = func_0x00faf4d8(puVar29,uVar20,0);
                    /* WARNING: Could not recover jumptable at 0x033034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)PTR_DAT_03c8cea0)(uVar15,unaff_x20,(int)uVar20 * auVar34._8_4_);
      return uVar13;
    }
  }
  auVar34 = func_0x00f78af4();
  uVar21 = auVar34._8_8_;
  lVar24 = auVar34._0_8_;
  if ((bRam0000000003eb5cd3 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd3 = 1;
  }
  if (uVar21 == 0) {
code_r0x016cd29c:
    func_0x00f78af4();
  }
  else if ((int)uVar13 <= *(int *)(uVar21 + 0x18)) {
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') goto code_r0x016cd33c;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar24,0,uVar13);
    if (*(long *)(lVar24 + 0x10) != 0) {
      auVar35._8_4_ = *(undefined4 *)(lVar24 + 0x18);
      auVar35._0_8_ = *(undefined8 *)(*(long *)(lVar24 + 0x10) + 0x10);
      auVar35._12_4_ = 0;
      uVar20 = 0;
      puVar32 = &FlatBuffers_ByteBuffer__CopyByteArray;
code_r0x029387b8:
      do {
        uVar22 = auVar35._8_8_;
        lVar24 = auVar35._0_8_;
        *(ulong *)((long)pppppuVar5 + -0x40) = unaff_x24;
        *(ulong *)((long)pppppuVar5 + -0x38) = unaff_x23;
        *(ulong *)((long)pppppuVar5 + -0x30) = unaff_x22;
        *(ulong *)((long)pppppuVar5 + -0x28) = unaff_x21;
        *(long **)((long)pppppuVar5 + -0x20) = unaff_x20;
        *(ulong *)((long)pppppuVar5 + -0x18) = uVar25;
        *(undefined8 ******)((long)pppppuVar5 + -0x10) = pppppuVar31;
        *(undefined **)((long)pppppuVar5 + -8) = puVar32;
        if (lVar24 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar15 = func_0x00f78aec();
          uVar20 = 0x3d7b990;
code_r0x02938884:
          uVar20 = func_0x00f78a24(uVar20);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar20,0);
          uVar20 = func_0x00f78a24(0x3d52be0);
          func_0x00f78ac0(uVar15,uVar20);
code_r0x029388b0:
          uVar20 = func_0x00f78a24(0x3d70548);
          uVar15 = /*Locale$$GetText*/ func_0x02af42b4(uVar20,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar17 = func_0x00f78aec();
          uVar20 = 0x3d7b998;
code_r0x02938954:
          auVar35._8_8_ = unaff_x22;
          auVar35._0_8_ = unaff_x23;
          uVar18 = func_0x00f78a24(uVar20);
          uVar20 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar17,uVar18,uVar15);
        }
        else {
          unaff_x21 = uVar21;
          if (uVar21 == 0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar15 = func_0x00f78aec();
            uVar20 = 0x3d78c30;
            goto code_r0x02938884;
          }
          unaff_x22 = uVar22;
          if (auVar35._8_4_ < 0) goto code_r0x029388b0;
          iVar23 = (int)uVar20;
          if (iVar23 < 0) {
            uVar20 = func_0x00f78a24(0x3d70548);
            uVar15 = /*Locale$$GetText*/ func_0x02af42b4(uVar20,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar17 = func_0x00f78aec();
            uVar20 = 0x3d78c38;
            goto code_r0x02938954;
          }
          iVar10 = (int)uVar13;
          if (iVar10 < 0) {
            uVar20 = func_0x00f78a24(0x3d70548);
            uVar15 = /*Locale$$GetText*/ func_0x02af42b4(uVar20,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar17 = func_0x00f78aec();
            uVar20 = 0x3d78638;
            goto code_r0x02938954;
          }
          uVar25 = func_0x00f836d8(lVar24,uVar22,uVar21);
          if (((uVar25 & 1) != 0) ||
             ((iVar11 = /*System.Buffer$$ByteLength*/ func_0x0294274c(lVar24), auVar35._8_4_ <= iVar11 - iVar10 &&
              (uVar25 = /*System.Buffer$$ByteLength*/ func_0x0294274c(uVar21), iVar23 <= (int)uVar25 - iVar10)))) {
            return uVar25;
          }
          uVar15 = func_0x00f78a24(0x3d70ad8);
          uVar15 = /*Locale$$GetText*/ func_0x02af42b4(uVar15,0);
          func_0x00f78a24(0x3d1fce8);
          uVar17 = func_0x00f78aec();
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar17,uVar15,0);
        }
        uVar18 = func_0x00f78a24(0x3d52be0);
        uVar12 = func_0x00f78ac0(uVar17,uVar18);
        *(long *)((long)pppppuVar5 + -0x70) = auVar35._8_8_;
        *(ulong *)((long)pppppuVar5 + -0x68) = unaff_x21;
        *(undefined8 *)((long)pppppuVar5 + -0x60) = uVar17;
        *(undefined8 *)((long)pppppuVar5 + -0x58) = uVar15;
        *(undefined1 **)((long)pppppuVar5 + -0x50) = (undefined1 *)((long)pppppuVar5 + -0x10);
        *(undefined **)((long)pppppuVar5 + -0x48) = &Mono_Math_BigInteger__GenerateRandom;
        if ((bRam0000000003eb8f4c & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          bRam0000000003eb8f4c = 1;
        }
        if (((*(ushort *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x20 = (long *)/*Mono.Math.BigInteger$$get_Rng*/ func_0x02938598();
        *(ulong *)((long)pppppuVar5 + -0x80) = unaff_x24;
        *(long *)((long)pppppuVar5 + -0x78) = auVar35._0_8_;
        *(undefined8 *)((long)pppppuVar5 + -0x70) = *(undefined8 *)((long)pppppuVar5 + -0x70);
        *(undefined8 *)((long)pppppuVar5 + -0x68) = *(undefined8 *)((long)pppppuVar5 + -0x68);
        *(undefined8 *)((long)pppppuVar5 + -0x60) = *(undefined8 *)((long)pppppuVar5 + -0x60);
        *(undefined8 *)((long)pppppuVar5 + -0x58) = *(undefined8 *)((long)pppppuVar5 + -0x58);
        *(undefined8 *)((long)pppppuVar5 + -0x50) = *(undefined8 *)((long)pppppuVar5 + -0x50);
        *(undefined8 *)((long)pppppuVar5 + -0x48) = *(undefined8 *)((long)pppppuVar5 + -0x48);
        pppppuVar31 = (undefined8 *****)((long)pppppuVar5 + -0x50);
        if ((bRam0000000003eb8f4b & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          func_0x00f78a20(0x3d1eda0);
          bRam0000000003eb8f4b = 1;
        }
        uVar1 = (int)uVar12 >> 5;
        unaff_x23 = (ulong)(uVar12 & 0x1f);
        if ((uVar12 & 0x1f) != 0) {
          uVar1 = uVar1 + 1;
        }
        unaff_x24 = (ulong)uVar1;
        uVar25 = func_0x00f78aec(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078);
        uVar21 = (ulong)(uVar1 + 1);
        /*Mono.Math.BigInteger$$.ctor*/ func_0x029379ec();
        unaff_x21 = (ulong)(uVar1 << 2);
        unaff_x22 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,unaff_x21);
        uVar22 = 0x3d20078;
        if (unaff_x20 != (long *)0x0) {
          uVar21 = *(ulong *)(*unaff_x20 + 0x1a0);
          (**(code **)(*unaff_x20 + 0x198))(unaff_x20,unaff_x22);
          uVar22 = unaff_x22;
          if (uVar25 != 0) {
            uVar21 = *(ulong *)(uVar25 + 0x18);
            auVar35._8_8_ = 0;
            auVar35._0_8_ = unaff_x22;
            uVar20 = 0;
            puVar32 = &UNK_02938710;
            pppppuVar5 = (undefined8 *****)((long)pppppuVar5 + -0x80);
            uVar13 = unaff_x21;
            goto code_r0x029387b8;
          }
        }
        unaff_x22 = uVar22;
        func_0x00f78af4();
        uVar15 = func_0x00f78b24();
        puVar32 = &System_Buffer__BlockCopy;
        auVar35 = func_0x00f78ac0(uVar15,0);
        pppppuVar5 = (undefined8 *****)((long)pppppuVar5 + -0x80);
      } while( true );
    }
    goto code_r0x016cd29c;
  }
  uVar20 = func_0x00f78a24(0x3d22910);
  uVar20 = func_0x00f78ae0(uVar20,&stack0xfffffffffffffeec);
  func_0x00055e5c(uVar21);
  uVar15 = func_0x00f78a24(0x3d22910);
  uVar15 = func_0x00f78ae0(uVar15,&stack0xfffffffffffffee8);
  uVar17 = func_0x00f78a24(0x3d72a68);
  uVar20 = /*System.String$$Format*/ func_0x029bcac4(uVar17,uVar20,uVar15,0);
  func_0x00f78a24(0x3d1fce8);
  uVar15 = func_0x00f78aec();
  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar15,uVar20,0);
  uVar20 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar15,uVar20);
code_r0x016cd33c:
  func_0x00f78a24(0x3d238c8);
  uVar20 = func_0x00f78aec();
  uVar15 = func_0x00f78a24(0x3d69698);
  /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar20,uVar15,0);
  uVar15 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar20,uVar15);
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
  lVar24 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<Type, int>_TypeInfo*/ uRam0000000003d1c590);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(lVar24,uRam0000000003d30160);
  uVar20 = /*bool_var*/ uRam0000000003d19080;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar20 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar20,0);
  if (lVar24 != 0) {
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar24,uVar20,1,uRam0000000003d30168);
    uVar20 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*float_var*/ uRam0000000003d19e28,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar24,uVar20,4,uRam0000000003d30168);
    uVar20 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*double_var*/ uRam0000000003d19388,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar24,uVar20,8,uRam0000000003d30168);
    uVar20 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*sbyte_var*/ uRam0000000003d19d88,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar24,uVar20,1,uRam0000000003d30168);
    uVar20 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*byte_var*/ uRam0000000003d190e0,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar24,uVar20,1,uRam0000000003d30168);
    uVar20 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*short_var*/ uRam0000000003d198b0,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar24,uVar20,2,uRam0000000003d30168);
    uVar20 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ushort_var*/ uRam0000000003d1a0a8,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar24,uVar20,2,uRam0000000003d30168);
    uVar20 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*int_var*/ uRam0000000003d198c0,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar24,uVar20,4,uRam0000000003d30168);
    uVar20 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*uint_var*/ uRam0000000003d1a0b8,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar24,uVar20,4,uRam0000000003d30168);
    uVar20 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ulong_var*/ uRam0000000003d1a0c8,0);
    /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar24,uVar20,8,uRam0000000003d30168);
    uVar20 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*long_var*/ uRam0000000003d198d0,0);
    uVar13 = /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar24,uVar20,8,uRam0000000003d30168);
    **(long **)(/*FlatBuffers.ByteBuffer_TypeInfo*/ lRam0000000003d203b0 + 0xb8) = lVar24;
    return uVar13;
  }
  lVar24 = func_0x00f78af4();
  return *(ulong *)(lVar24 + 0x10);
}



// ============================================================
// RVA: 0x16549e4 | Core.Networking.EventStanding.get_TimeStamp
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1654a38 | Core.Networking.EventStanding.get_SplinePosition
// ============================================================

/* WARNING: Possible PIC construction at 0x016cce70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016ccee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0293870c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01654b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01654b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01654b50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01654b3c) */
/* WARNING: Removing unreachable block (ram,0x01654b24) */
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
/* WARNING: Removing unreachable block (ram,0x01654b54) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */
/* WARNING: Type propagation algorithm not settling */

ulong Core_Networking_EventStanding__get_SplinePosition
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                )

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *******pppppppuVar4;
  short sVar5;
  int iVar8;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  undefined4 uVar9;
  int *piVar15;
  short sVar6;
  short sVar7;
  int iVar10;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  dword *pdVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 *puVar27;
  ulong unaff_x22;
  undefined8 *******pppppppuVar28;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined1 *puVar29;
  undefined8 *******pppppppuVar30;
  undefined *puVar31;
  float extraout_s0;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  ulong auStack_190 [4];
  undefined1 auStack_170 [12];
  int iStack_164;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 *******pppppppuStack_a0;
  undefined *puStack_98;
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  undefined8 *******pppppppuStack_30;
  undefined *puStack_28;
  
  uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,10,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  uVar24 = *(ulong *)(param_1 + 2);
  if (uVar24 == 0) {
    piVar14 = (int *)func_0x00f78af4();
    puStack_28 = &Core_Networking_EventStanding__get_Dnf;
    uVar23 = 0;
    pppppppuStack_30 = (undefined8 *******)&stack0xfffffffffffffff0;
    uVar13 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar14,0xc);
    if ((int)uVar13 == 0) {
      return uVar13;
    }
    if (*(long *)(piVar14 + 2) != 0) {
      iVar8 = /*FlatBuffers.ByteBuffer$$Get*/ func_0x016cccfc(*(long *)(piVar14 + 2),*piVar14 + (int)uVar13,0);
      return (ulong)(iVar8 != 0);
    }
    auVar33 = func_0x00f78af4();
    piVar15 = auVar33._0_8_;
    puVar2 = &stack0xffffffffffffff70;
    puStack_48 = &Core_Networking_EventStanding__CreateEventStanding;
    pppppppuVar30 = &pppppppuStack_50;
    pppppppuStack_50 = &pppppppuStack_30;
    if (piVar15 != (int *)0x0) {
      puVar31 = &UNK_01654b24;
      piVar14 = piVar15;
      unaff_x21 = param_5;
      unaff_x22 = auVar33._8_8_;
code_r0x016ce2a4:
      uVar17 = 0;
      pppppppuVar4 = (undefined8 *******)(puVar2 + -0x30);
      *(ulong *)(puVar2 + -0x30) = unaff_x22;
      *(ulong *)(puVar2 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x20) = uVar23;
      *(int **)(puVar2 + -0x18) = piVar14;
      *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar30;
      *(undefined **)(puVar2 + -8) = puVar31;
      unaff_x20 = (long *)((long)&MACH_HEADER.cputype + 1);
      unaff_x21 = 0x3eb5000;
      if ((bRam0000000003eb5cd7 & 1) == 0) {
        func_0x00f78a20(0x3d1f100);
        bRam0000000003eb5cd7 = 1;
      }
      /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar15);
      if (*(long *)(piVar15 + 10) != 0) {
        if (*(int *)(*(long *)(piVar15 + 10) + 0x18) < 5) {
          uVar23 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
          *(undefined8 *)(piVar15 + 10) = uVar23;
        }
        piVar15[0xc] = 5;
        uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar15);
        piVar15[0xd] = (int)uVar13;
        return uVar13;
      }
      auVar33 = func_0x00f78af4();
      piVar14 = piVar15;
      pppppppuVar30 = (undefined8 *******)(puVar2 + -0x10);
      puVar31 = &FlatBuffers_FlatBufferBuilder__Slot;
code_r0x016ce380:
      do {
        piVar15 = auVar33._8_8_;
        *(long **)((long)pppppppuVar4 + -0x20) = unaff_x20;
        *(int **)((long)pppppppuVar4 + -0x18) = piVar14;
        *(undefined8 ********)((long)pppppppuVar4 + -0x10) = pppppppuVar30;
        *(undefined **)((long)pppppppuVar4 + -8) = puVar31;
        puVar29 = (undefined1 *)((long)pppppppuVar4 + -0x10);
        uVar12 = auVar33._8_4_;
        if ((int)uVar12 < *(int *)(auVar33._0_8_ + 0x30)) {
          unaff_x20 = *(long **)(auVar33._0_8_ + 0x28);
          uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
          if (unaff_x20 == (long *)0x0) goto code_r0x016ce410;
          if (uVar12 < *(uint *)(unaff_x20 + 3)) {
            *(int *)((long)unaff_x20 + (long)(int)uVar12 * 4 + 0x20) = (int)uVar13;
            return uVar13;
          }
        }
        else {
          func_0x00f78a24(0x3d22738);
          piVar15 = (int *)func_0x00f78aec();
          uVar23 = func_0x00f78a24(0x3d6ceb8);
          uVar17 = 0;
          /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar15,uVar23);
          uVar23 = func_0x00f78a24(0x3d56a58);
          func_0x00f78ac0(piVar15,uVar23);
code_r0x016ce410:
          func_0x00f78af4();
        }
        uVar23 = func_0x00f78b24();
        puVar31 = &FlatBuffers_FlatBufferBuilder__AddBool;
        auVar33 = func_0x00f78ac0(uVar23,0);
        pdVar20 = auVar33._8_8_;
        auVar32._8_8_ = uVar17;
        auVar32._0_8_ = auVar33._0_8_;
        pppppppuVar4 = (undefined8 *******)((long)pppppppuVar4 + -0x20);
        piVar14 = piVar15;
code_r0x016ce420:
        uVar13 = auVar32._0_8_;
        auVar33._8_8_ = pdVar20;
        auVar33._0_8_ = uVar13;
        *(ulong *)((long)pppppppuVar4 + -0x30) = unaff_x22;
        *(ulong *)((long)pppppppuVar4 + -0x28) = unaff_x21;
        *(long **)((long)pppppppuVar4 + -0x20) = unaff_x20;
        *(int **)((long)pppppppuVar4 + -0x18) = piVar14;
        *(undefined1 **)((long)pppppppuVar4 + -0x10) = puVar29;
        *(undefined **)((long)pppppppuVar4 + -8) = puVar31;
        if ((auVar32._8_4_ == (int)param_4) && (*(char *)(uVar13 + 0x48) == '\0')) {
          return uVar13;
        }
        uVar17 = 0;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1);
        /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar13,auVar32._8_8_);
        unaff_x20 = *(long **)((long)pppppppuVar4 + -0x20);
        piVar14 = *(int **)((long)pppppppuVar4 + -0x18);
        unaff_x22 = *(ulong *)((long)pppppppuVar4 + -0x30);
        unaff_x21 = *(ulong *)((long)pppppppuVar4 + -0x28);
        pppppppuVar30 = *(undefined8 ********)((long)pppppppuVar4 + -0x10);
        puVar31 = *(undefined **)((long)pppppppuVar4 + -8);
      } while( true );
    }
    uVar13 = func_0x00f78af4();
    pppppppuStack_a0 = pppppppuVar30;
    if (uVar13 != 0) {
      puStack_98 = &Core_Networking_EventStanding__AddSplinePosition;
      if (extraout_s0 == 0.0 && *(char *)(uVar13 + 0x48) == '\0') {
        return uVar13;
      }
      uVar17 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4);
      /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,uVar13);
      auVar33._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 3);
      auVar33._0_8_ = uVar13;
      pppppppuVar4 = (undefined8 *******)&stack0xffffffffffffff70;
      pppppppuVar30 = pppppppuStack_a0;
      puVar31 = puStack_98;
      goto code_r0x016ce380;
    }
    pppppppuVar30 = &pppppppuStack_a0;
    puStack_98 = &Core_Networking_EventStanding__AddSplinePosition;
    auVar33 = func_0x00f78af4();
    uVar13 = auVar33._0_8_;
    if (uVar13 != 0) {
      param_4 = 0;
      if ((auVar33._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
        return uVar13;
      }
      uVar17 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar13,auVar33._8_8_);
      auVar33._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 2);
      auVar33._0_8_ = uVar13;
      puVar31 = &Core_Networking_EventStanding__AddTimeStamp;
      pppppppuVar4 = &pppppppuStack_a0;
      goto code_r0x016ce380;
    }
    pppppppuVar30 = (undefined8 *******)&stack0xffffffffffffff50;
    auVar33 = func_0x00f78af4();
    uVar13 = auVar33._0_8_;
    if (uVar13 != 0) {
      param_4 = 0;
      if ((auVar33._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
        return uVar13;
      }
      uVar17 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,4,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar13,auVar33._8_8_);
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar13;
      puVar31 = &Core_Networking_EventStanding__AddSyncId;
      pppppppuVar4 = (undefined8 *******)&stack0xffffffffffffff50;
      goto code_r0x016ce380;
    }
    pppppppuVar4 = (undefined8 *******)&stack0xffffffffffffff40;
    puVar29 = &stack0xffffffffffffff40;
    puVar31 = &Core_Networking_EventStanding__AddDnf;
    auVar32 = func_0x00f78af4();
    if (auVar32._0_8_ != 0) {
      pdVar20 = &MACH_HEADER.cputype;
      param_4 = 0;
      goto code_r0x016ce420;
    }
    pppppppuVar30 = (undefined8 *******)&stack0xffffffffffffff30;
    auVar33 = func_0x00f78af4();
    uVar13 = auVar33._0_8_;
    if (uVar13 != 0) {
      param_4 = 0;
      if ((auVar33._8_4_ == 0) && (*(char *)(uVar13 + 0x48) == '\0')) {
        return uVar13;
      }
      uVar17 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar13,1,0,0,0);
      /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar13,auVar33._8_8_);
      auVar33._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 1);
      auVar33._0_8_ = uVar13;
      puVar31 = &Core_Networking_EventStanding__AddBattleScore;
      pppppppuVar4 = (undefined8 *******)&stack0xffffffffffffff30;
      goto code_r0x016ce380;
    }
    lVar16 = func_0x00f78af4();
    puVar2 = &stack0xffffffffffffff00;
    pppppppuVar30 = (undefined8 *******)&stack0xffffffffffffff10;
    uVar23 = 0x3eb5000;
    if ((bRam0000000003eb57f1 & 1) == 0) {
      func_0x00f78a20(0x3d3f080);
      bRam0000000003eb57f1 = 1;
    }
    if (lVar16 == 0) {
      puVar31 = &Core_Networking_EventStanding__StartEventStanding;
      piVar15 = (int *)func_0x00f78af4();
      if (piVar15 == (int *)0x0) {
        lVar16 = func_0x00f78af4();
        return *(ulong *)(lVar16 + 8);
      }
      piVar14 = (int *)0x0;
      goto code_r0x016ce2a4;
    }
    uVar13 = 0x3eb5000;
    if ((bRam0000000003eb5cd8 & 1) == 0) {
      func_0x00f78a20(0x3d1f100,0);
      bRam0000000003eb5cd8 = 1;
    }
    if (-1 < *(int *)(lVar16 + 0x30)) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
      /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,0);
      uVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
      unaff_x21 = (ulong)*(uint *)(lVar16 + 0x30);
      uVar12 = *(uint *)(lVar16 + 0x30) - 1;
      if (-2 < (int)uVar12) {
        uVar12 = 0xffffffff;
      }
      unaff_x22 = (ulong)uVar12;
      do {
        uVar1 = (int)unaff_x21 - 1;
        unaff_x21 = (ulong)uVar1;
        iVar8 = (int)uVar13;
        if ((int)uVar1 < 0) goto code_r0x016ceb30;
        lVar25 = *(long *)(lVar16 + 0x28);
        if (lVar25 == 0) goto code_r0x016ced84;
        if (*(uint *)(lVar25 + 0x18) <= uVar1) goto code_r0x016ced88;
      } while (*(int *)(lVar25 + (ulong)uVar1 * 4 + 0x20) == 0);
      unaff_x22 = unaff_x21 + 8;
      do {
        uVar24 = unaff_x22 - 8;
        if (*(uint *)(lVar25 + 0x18) <= uVar24) goto code_r0x016ced88;
        iVar10 = *(int *)(lVar25 + unaff_x22 * 4);
        sVar5 = 0;
        if (iVar10 != 0) {
          sVar5 = (short)uVar13 - (short)iVar10;
        }
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)sVar5);
        lVar25 = *(long *)(lVar16 + 0x28);
        if (lVar25 == 0) goto code_r0x016ced84;
        if (*(uint *)(lVar25 + 0x18) <= uVar24) goto code_r0x016ced88;
        *(undefined4 *)(lVar25 + unaff_x22 * 4) = 0;
        unaff_x22 = unaff_x22 - 1;
        uVar12 = uVar1;
      } while (0 < (long)uVar24);
code_r0x016ceb30:
      uVar9 = *(undefined4 *)(lVar16 + 0x34);
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)(short)((short)uVar13 - (short)uVar9));
      uVar12 = uVar12 * 2 + 6;
      unaff_x21 = (ulong)uVar12;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar16,(int)(short)uVar12);
      unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
      if (0 < (int)*(uint *)(lVar16 + 0x40)) {
        uVar24 = 0;
        do {
          lVar25 = *(long *)(lVar16 + 0x18);
          if (((lVar25 == 0) || (*(long *)(lVar25 + 0x10) == 0)) ||
             (lVar26 = *(long *)(lVar16 + 0x38), lVar26 == 0)) goto code_r0x016ced84;
          if (*(uint *)(lVar26 + 0x18) <= uVar24) goto code_r0x016ced88;
          uVar1 = *(int *)(*(long *)(lVar25 + 0x10) + 0x18) - *(int *)(lVar26 + uVar24 * 4 + 0x20);
          unaff_x21 = (ulong)uVar1;
          uVar12 = *(uint *)(lVar16 + 0x10);
          unaff_x22 = (ulong)uVar12;
          sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar25,unaff_x21,2);
          if (*(long *)(lVar16 + 0x18) == 0) goto code_r0x016ced84;
          sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),unaff_x22,2);
          if (sVar5 == sVar6) {
            if (sVar5 < 3) {
code_r0x016cec64:
              unaff_x21 = *(ulong *)(lVar16 + 0x38);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar24) goto code_r0x016ced88;
              iVar10 = *(int *)(unaff_x21 + uVar24 * 4 + 0x20);
              if (iVar10 == 0) {
                unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
                goto code_r0x016cecac;
              }
              unaff_x21 = *(ulong *)(lVar16 + 0x18);
              if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
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
              sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar16 + 0x18),uVar12 + iVar10,2);
              if (sVar6 != sVar7) break;
              iVar10 = iVar10 + 2;
              if (sVar5 <= iVar10) goto code_r0x016cec64;
            }
          }
          uVar24 = uVar24 + 1;
          unaff_x22 = (ulong)*(int *)(lVar16 + 0x40);
        } while ((long)uVar24 < (long)unaff_x22);
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
          lVar25 = *(long *)(lVar16 + 0x38);
          if (lVar25 == 0) goto code_r0x016ced84;
          /*System.Array$$Copy*/ func_0x0292c49c(lVar25,unaff_x21,*(undefined4 *)(lVar25 + 0x18),0);
          *(ulong *)(lVar16 + 0x38) = unaff_x21;
          unaff_x22 = (ulong)*(uint *)(lVar16 + 0x40);
        }
        uVar12 = (uint)unaff_x22;
        *(uint *)(lVar16 + 0x40) = uVar12 + 1;
        uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar16);
        if (unaff_x21 == 0) goto code_r0x016ced84;
        if (uVar12 < *(uint *)(unaff_x21 + 0x18)) {
          *(undefined4 *)(unaff_x21 + (long)(int)uVar12 * 4 + 0x20) = uVar9;
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
            return uVar13;
          }
          goto code_r0x016ced84;
        }
      }
code_r0x016ced88:
      uVar23 = func_0x00f78b24();
      func_0x00f78ac0(uVar23,0);
    }
    func_0x00f78a24(0x3d22a38);
    uVar23 = func_0x00f78aec();
    uVar17 = func_0x00f78a24(0x3d6cea8);
    iVar8 = 0;
    /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar23,uVar17);
    uVar17 = func_0x00f78a24(0x3d56a30);
    auVar35 = func_0x00f78ac0(uVar23,uVar17);
    puVar29 = &stack0xfffffffffffffec0;
    lVar16 = *(long *)(auVar35._0_8_ + 0x18);
    iStack_164 = iVar8;
    uStack_160 = unaff_x22;
    uStack_158 = unaff_x21;
    uStack_150 = uVar13;
    uStack_148 = uVar23;
    if ((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) {
      iVar10 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) - auVar35._8_4_;
      iVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,iVar10,4);
      lVar16 = *(long *)(auVar35._0_8_ + 0x18);
      if (lVar16 != 0) {
        uVar13 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,(iVar10 - iVar11) + iVar8,2);
        if ((uVar13 & 0xffff) != 0) {
          return uVar13;
        }
        goto code_r0x016cee5c;
      }
    }
    func_0x00f78af4();
code_r0x016cee5c:
    uVar23 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_164,0);
    uVar17 = func_0x00f78a24(0x3d6ce88);
    uVar18 = func_0x00f78a24(0x3d66338);
    lVar16 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar23,uVar18,0);
    func_0x00f78a24(0x3d22a38);
    uVar13 = func_0x00f78aec();
    uVar17 = 0;
    /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,lVar16);
    uVar23 = func_0x00f78a24(0x3d56a50);
    puVar31 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar33 = func_0x00f78ac0(uVar13,uVar23);
    puVar3 = auStack_170;
    do {
      uVar24 = auVar33._8_8_;
      lVar25 = auVar33._0_8_;
      *(ulong *)(puVar3 + -0x20) = uVar13;
      *(long *)(puVar3 + -0x18) = lVar16;
      *(undefined1 **)(puVar3 + -0x10) = puVar29;
      *(undefined **)(puVar3 + -8) = puVar31;
      puVar29 = puVar3 + -0x10;
      if ((int)uVar17 == 0) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar25,*(undefined4 *)(lVar25 + 0x20),4);
        uVar13 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar25,uVar24);
code_r0x016cef70:
        if (*(long *)(lVar25 + 0x18) != 0) {
          *(undefined4 *)(*(long *)(lVar25 + 0x18) + 0x18) = *(undefined4 *)(lVar25 + 0x10);
          return uVar13;
        }
      }
      else if (lVar25 != 0) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar25,*(undefined4 *)(lVar25 + 0x20),8);
        /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar25,uVar24);
        if ((*(long *)(lVar25 + 0x18) != 0) &&
           (lVar16 = *(long *)(*(long *)(lVar25 + 0x18) + 0x10), lVar16 != 0)) {
          uVar24 = (ulong)(uint)(*(int *)(lVar16 + 0x18) - *(int *)(lVar25 + 0x10));
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar25,4,0);
          uVar13 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar25,uVar24);
          goto code_r0x016cef70;
        }
      }
      puVar31 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar33 = func_0x00f78af4();
      uVar17 = 0;
      puVar3 = puVar3 + -0x20;
      lVar16 = lVar25;
      uVar13 = uVar24;
    } while( true );
  }
  uVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(uVar24,*param_1 + (int)uVar13,4);
  uVar13 = *(ulong *)(uVar24 + 0x30);
  if (uVar13 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar13 + 0x18) != 0) {
    *(undefined4 *)(uVar13 + 0x20) = uVar9;
    uVar21 = *(ulong *)(uVar24 + 0x28);
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar13;
    uVar23 = 0;
    pppppppuVar4 = (undefined8 *******)&stack0xffffffffffffffe0;
    uVar13 = 4;
    pppppppuVar30 = (undefined8 *******)&stack0xfffffffffffffff0;
    puVar31 = &UNK_016cce74;
    goto code_r0x029387b8;
  }
  uVar23 = func_0x00f78b24();
  uVar24 = func_0x00f78ac0(uVar23,0);
  puStack_28 = &FlatBuffers_ByteBuffer__GetDouble;
  uVar22 = 8;
  pppppppuStack_30 = (undefined8 *******)&stack0xfffffffffffffff0;
  uVar23 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634();
  uVar13 = *(ulong *)(uVar24 + 0x40);
  if (uVar13 == 0) {
    func_0x00f78af4();
  }
  else if (*(int *)(uVar13 + 0x18) != 0) {
    *(undefined8 *)(uVar13 + 0x20) = uVar23;
    uVar21 = *(ulong *)(uVar24 + 0x38);
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar13;
    uVar23 = 0;
    pppppppuVar4 = (undefined8 *******)&stack0xffffffffffffffc0;
    uVar13 = 8;
    pppppppuVar30 = &pppppppuStack_30;
    puVar31 = &UNK_016cceec;
    goto code_r0x029387b8;
  }
  uVar23 = func_0x00f78b24();
  auVar33 = func_0x00f78ac0(uVar23,0);
  puVar31 = auVar33._0_8_;
  puStack_48 = &FlatBuffers_ByteBuffer__PutByteArray;
  pppppppuVar28 = (undefined8 *******)0x3eb5000;
  pppppppuStack_50 = &pppppppuStack_30;
  if ((bRam0000000003eb5cd1 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd1 = 1;
  }
  if (uVar22 == 0) {
code_r0x016ccfdc:
    func_0x00f78af4();
code_r0x016ccfe0:
    func_0x00f78a24(0x3d1fce8);
    uVar17 = func_0x00f78aec();
    uVar23 = 0x3d6a458;
code_r0x016cd01c:
    uVar23 = func_0x00f78a24(uVar23);
    unaff_x20 = (long *)0x0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar17,uVar23);
  }
  else {
    if (*(long *)(uVar22 + 0x18) == 0) goto code_r0x016ccfe0;
    if ((int)*(long *)(uVar22 + 0x18) < auVar33._8_4_) {
      func_0x00f78a24(0x3d1fce8);
      uVar17 = func_0x00f78aec();
      uVar23 = 0x3d72a70;
      goto code_r0x016cd01c;
    }
    pppppppuVar28 = (undefined8 *******)0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) != '\0') {
      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(puVar31,0,auVar33._8_8_);
      if (*(long *)(puVar31 + 0x10) != 0) {
        uVar21 = *(ulong *)(*(long *)(puVar31 + 0x10) + 0x10);
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar22;
        uVar23 = 0;
        pppppppuVar4 = (undefined8 *******)&stack0xffffffffffffffc0;
        uVar13 = auVar33._8_8_;
        pppppppuVar30 = pppppppuStack_50;
        puVar31 = puStack_48;
        goto code_r0x029387b8;
      }
      goto code_r0x016ccfdc;
    }
    func_0x00f78a24(0x3d238c8);
    uVar17 = func_0x00f78aec();
    uVar23 = func_0x00f78a24(0x3d69698);
    unaff_x20 = (long *)0x0;
    /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar17,uVar23);
  }
  uVar23 = func_0x00f78a24(0x3d52cf8);
  auVar33 = func_0x00f78ac0(uVar17,uVar23);
  uVar24 = auVar33._8_8_;
  unaff_x21 = auVar33._0_8_;
  pppppppuVar4 = &pppppppuStack_a0;
  pppppppuVar30 = (undefined8 *******)&stack0xffffffffffffff80;
  unaff_x22 = 0x3eb5000;
  pppppppuStack_a0 = pppppppuVar28;
  puStack_98 = puVar31;
  if ((bRam0000000003eb5cd2 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    func_0x00f78a20(0x3d23210);
    bRam0000000003eb5cd2 = 1;
  }
  if (auVar33._8_4_ == 0) {
    func_0x00f78a24(0x3d1fce8);
    uVar24 = func_0x00f78aec();
    uVar23 = func_0x00f78a24(0x3d6a458);
    uVar13 = 0;
    /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar24,uVar23);
code_r0x016cd1bc:
    uVar23 = func_0x00f78a24(0x3d52d00);
    func_0x00f78ac0(uVar24,uVar23);
  }
  else {
    unaff_x22 = 0x3d201a0;
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') {
      func_0x00f78a24(0x3d238c8);
      uVar24 = func_0x00f78aec();
      uVar23 = func_0x00f78a24(0x3d69698);
      uVar13 = 0;
      /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar24,uVar23);
      goto code_r0x016cd1bc;
    }
    uVar13 = uVar24;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,0);
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      puVar27 = *(undefined8 **)(*(long *)(unaff_x21 + 0x10) + 0x10);
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
      uVar23 = func_0x00f76cf0(*puVar27);
      uVar17 = func_0x00faf4d8(puVar27,uVar23,0);
                    /* WARNING: Could not recover jumptable at 0x033034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)PTR_DAT_03c8cea0)(uVar17,unaff_x20,(int)uVar23 * auVar33._8_4_);
      return uVar13;
    }
  }
  auVar33 = func_0x00f78af4();
  uVar21 = auVar33._8_8_;
  lVar16 = auVar33._0_8_;
  if ((bRam0000000003eb5cd3 & 1) == 0) {
    func_0x00f78a20(0x3d201a0);
    bRam0000000003eb5cd3 = 1;
  }
  if (uVar21 == 0) {
code_r0x016cd29c:
    func_0x00f78af4();
  }
  else if ((int)uVar13 <= *(int *)(uVar21 + 0x18)) {
    if (((*(ushort *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(char **)(/*System.BitConverter_TypeInfo*/ lRam0000000003d201a0 + 0xb8) == '\0') goto code_r0x016cd33c;
    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(lVar16,0,uVar13);
    if (*(long *)(lVar16 + 0x10) != 0) {
      auVar34._8_4_ = *(undefined4 *)(lVar16 + 0x18);
      auVar34._0_8_ = *(undefined8 *)(*(long *)(lVar16 + 0x10) + 0x10);
      auVar34._12_4_ = 0;
      uVar23 = 0;
      puVar31 = &FlatBuffers_ByteBuffer__CopyByteArray;
code_r0x029387b8:
      do {
        uVar22 = auVar34._8_8_;
        lVar16 = auVar34._0_8_;
        *(ulong *)((long)pppppppuVar4 + -0x40) = unaff_x24;
        *(ulong *)((long)pppppppuVar4 + -0x38) = unaff_x23;
        *(ulong *)((long)pppppppuVar4 + -0x30) = unaff_x22;
        *(ulong *)((long)pppppppuVar4 + -0x28) = unaff_x21;
        *(long **)((long)pppppppuVar4 + -0x20) = unaff_x20;
        *(ulong *)((long)pppppppuVar4 + -0x18) = uVar24;
        *(undefined8 ********)((long)pppppppuVar4 + -0x10) = pppppppuVar30;
        *(undefined **)((long)pppppppuVar4 + -8) = puVar31;
        if (lVar16 == 0) {
          func_0x00f78a24(0x3d1fcf0);
          uVar17 = func_0x00f78aec();
          uVar23 = 0x3d7b990;
code_r0x02938884:
          uVar23 = func_0x00f78a24(uVar23);
          /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar17,uVar23,0);
          uVar23 = func_0x00f78a24(0x3d52be0);
          func_0x00f78ac0(uVar17,uVar23);
code_r0x029388b0:
          uVar23 = func_0x00f78a24(0x3d70548);
          uVar17 = /*Locale$$GetText*/ func_0x02af42b4(uVar23,0);
          func_0x00f78a24(0x3d1fcf8);
          uVar18 = func_0x00f78aec();
          uVar23 = 0x3d7b998;
code_r0x02938954:
          auVar34._8_8_ = unaff_x22;
          auVar34._0_8_ = unaff_x23;
          uVar19 = func_0x00f78a24(uVar23);
          uVar23 = 0;
          /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x029207d0(uVar18,uVar19,uVar17);
        }
        else {
          unaff_x21 = uVar21;
          if (uVar21 == 0) {
            func_0x00f78a24(0x3d1fcf0);
            uVar17 = func_0x00f78aec();
            uVar23 = 0x3d78c30;
            goto code_r0x02938884;
          }
          unaff_x22 = uVar22;
          if (auVar34._8_4_ < 0) goto code_r0x029388b0;
          iVar8 = (int)uVar23;
          if (iVar8 < 0) {
            uVar23 = func_0x00f78a24(0x3d70548);
            uVar17 = /*Locale$$GetText*/ func_0x02af42b4(uVar23,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar18 = func_0x00f78aec();
            uVar23 = 0x3d78c38;
            goto code_r0x02938954;
          }
          iVar10 = (int)uVar13;
          if (iVar10 < 0) {
            uVar23 = func_0x00f78a24(0x3d70548);
            uVar17 = /*Locale$$GetText*/ func_0x02af42b4(uVar23,0);
            func_0x00f78a24(0x3d1fcf8);
            uVar18 = func_0x00f78aec();
            uVar23 = 0x3d78638;
            goto code_r0x02938954;
          }
          uVar24 = func_0x00f836d8(lVar16,uVar22,uVar21);
          if (((uVar24 & 1) != 0) ||
             ((iVar11 = /*System.Buffer$$ByteLength*/ func_0x0294274c(lVar16), auVar34._8_4_ <= iVar11 - iVar10 &&
              (uVar24 = /*System.Buffer$$ByteLength*/ func_0x0294274c(uVar21), iVar8 <= (int)uVar24 - iVar10)))) {
            return uVar24;
          }
          uVar17 = func_0x00f78a24(0x3d70ad8);
          uVar17 = /*Locale$$GetText*/ func_0x02af42b4(uVar17,0);
          func_0x00f78a24(0x3d1fce8);
          uVar18 = func_0x00f78aec();
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar18,uVar17,0);
        }
        uVar19 = func_0x00f78a24(0x3d52be0);
        uVar12 = func_0x00f78ac0(uVar18,uVar19);
        *(long *)((long)pppppppuVar4 + -0x70) = auVar34._8_8_;
        *(ulong *)((long)pppppppuVar4 + -0x68) = unaff_x21;
        *(undefined8 *)((long)pppppppuVar4 + -0x60) = uVar18;
        *(undefined8 *)((long)pppppppuVar4 + -0x58) = uVar17;
        *(undefined1 **)((long)pppppppuVar4 + -0x50) = (undefined1 *)((long)pppppppuVar4 + -0x10);
        *(undefined **)((long)pppppppuVar4 + -0x48) = &Mono_Math_BigInteger__GenerateRandom;
        if ((bRam0000000003eb8f4c & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          bRam0000000003eb8f4c = 1;
        }
        if (((*(ushort *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        unaff_x20 = (long *)/*Mono.Math.BigInteger$$get_Rng*/ func_0x02938598();
        *(ulong *)((long)pppppppuVar4 + -0x80) = unaff_x24;
        *(long *)((long)pppppppuVar4 + -0x78) = auVar34._0_8_;
        *(undefined8 *)((long)pppppppuVar4 + -0x70) = *(undefined8 *)((long)pppppppuVar4 + -0x70);
        *(undefined8 *)((long)pppppppuVar4 + -0x68) = *(undefined8 *)((long)pppppppuVar4 + -0x68);
        *(undefined8 *)((long)pppppppuVar4 + -0x60) = *(undefined8 *)((long)pppppppuVar4 + -0x60);
        *(undefined8 *)((long)pppppppuVar4 + -0x58) = *(undefined8 *)((long)pppppppuVar4 + -0x58);
        *(undefined8 *)((long)pppppppuVar4 + -0x50) = *(undefined8 *)((long)pppppppuVar4 + -0x50);
        *(undefined8 *)((long)pppppppuVar4 + -0x48) = *(undefined8 *)((long)pppppppuVar4 + -0x48);
        pppppppuVar30 = (undefined8 *******)((long)pppppppuVar4 + -0x50);
        if ((bRam0000000003eb8f4b & 1) == 0) {
          func_0x00f78a20(0x3d20078);
          func_0x00f78a20(0x3d1eda0);
          bRam0000000003eb8f4b = 1;
        }
        uVar1 = (int)uVar12 >> 5;
        unaff_x23 = (ulong)(uVar12 & 0x1f);
        if ((uVar12 & 0x1f) != 0) {
          uVar1 = uVar1 + 1;
        }
        unaff_x24 = (ulong)uVar1;
        uVar24 = func_0x00f78aec(/*Mono.Math.BigInteger_TypeInfo*/ lRam0000000003d20078);
        uVar21 = (ulong)(uVar1 + 1);
        /*Mono.Math.BigInteger$$.ctor*/ func_0x029379ec();
        unaff_x21 = (ulong)(uVar1 << 2);
        unaff_x22 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,unaff_x21);
        uVar22 = 0x3d20078;
        if (unaff_x20 == (long *)0x0) {
code_r0x029387a8:
          unaff_x22 = uVar22;
          func_0x00f78af4();
          uVar17 = func_0x00f78b24();
          puVar31 = &System_Buffer__BlockCopy;
          auVar34 = func_0x00f78ac0(uVar17,0);
          pppppppuVar4 = (undefined8 *******)((long)pppppppuVar4 + -0x80);
          goto code_r0x029387b8;
        }
        uVar21 = *(ulong *)(*unaff_x20 + 0x1a0);
        (**(code **)(*unaff_x20 + 0x198))(unaff_x20,unaff_x22);
        uVar22 = unaff_x22;
        if (uVar24 == 0) goto code_r0x029387a8;
        uVar21 = *(ulong *)(uVar24 + 0x18);
        auVar34._8_8_ = 0;
        auVar34._0_8_ = unaff_x22;
        uVar23 = 0;
        puVar31 = &UNK_02938710;
        pppppppuVar4 = (undefined8 *******)((long)pppppppuVar4 + -0x80);
        uVar13 = unaff_x21;
      } while( true );
    }
    goto code_r0x016cd29c;
  }
  uVar23 = func_0x00f78a24(0x3d22910);
  uVar23 = func_0x00f78ae0(uVar23,&stack0xffffffffffffff2c);
  func_0x00055e5c(uVar21);
  uVar17 = func_0x00f78a24(0x3d22910);
  uVar17 = func_0x00f78ae0(uVar17,&stack0xffffffffffffff28);
  uVar18 = func_0x00f78a24(0x3d72a68);
  uVar23 = /*System.String$$Format*/ func_0x029bcac4(uVar18,uVar23,uVar17,0);
  func_0x00f78a24(0x3d1fce8);
  uVar17 = func_0x00f78aec();
  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar17,uVar23,0);
  uVar23 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar17,uVar23);
code_r0x016cd33c:
  func_0x00f78a24(0x3d238c8);
  uVar23 = func_0x00f78aec();
  uVar17 = func_0x00f78a24(0x3d69698);
  /*System.NotImplementedException$$.ctor*/ func_0x02950308(uVar23,uVar17,0);
  uVar17 = func_0x00f78a24(0x3d52cf0);
  func_0x00f78ac0(uVar23,uVar17);
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
  uVar23 = /*bool_var*/ uRam0000000003d19080;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar23,0);
  if (lVar16 == 0) {
    lVar16 = func_0x00f78af4();
    return *(ulong *)(lVar16 + 0x10);
  }
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar23,1,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*float_var*/ uRam0000000003d19e28,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar23,4,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*double_var*/ uRam0000000003d19388,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar23,8,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*sbyte_var*/ uRam0000000003d19d88,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar23,1,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*byte_var*/ uRam0000000003d190e0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar23,1,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*short_var*/ uRam0000000003d198b0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar23,2,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ushort_var*/ uRam0000000003d1a0a8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar23,2,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*int_var*/ uRam0000000003d198c0,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar23,4,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*uint_var*/ uRam0000000003d1a0b8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar23,4,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*ulong_var*/ uRam0000000003d1a0c8,0);
  /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar23,8,uRam0000000003d30168);
  uVar23 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*long_var*/ uRam0000000003d198d0,0);
  uVar13 = /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Add*/ func_0x01ece6d0(lVar16,uVar23,8,uRam0000000003d30168);
  **(long **)(/*FlatBuffers.ByteBuffer_TypeInfo*/ lRam0000000003d203b0 + 0xb8) = lVar16;
  return uVar13;
}



// ============================================================
// RVA: 0x1654a90 | Core.Networking.EventStanding.get_Dnf
// ============================================================

/* WARNING: Possible PIC construction at 0x01654b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01654b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01654b50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01654b3c) */
/* WARNING: Removing unreachable block (ram,0x01654b24) */
/* WARNING: Removing unreachable block (ram,0x01654b54) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_EventStanding__get_Dnf
                (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5
                )

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 ***pppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  dword *pdVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar23;
  undefined1 ***pppuVar24;
  undefined1 **ppuVar25;
  undefined *puVar26;
  float extraout_s0;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  ulong auStack_170 [4];
  undefined1 auStack_150 [12];
  int iStack_144;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined1 *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar19 = 0;
  uVar12 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0xc);
  if ((int)uVar12 == 0) {
    return uVar12;
  }
  if (*(long *)(param_1 + 2) != 0) {
    iVar8 = /*FlatBuffers.ByteBuffer$$Get*/ func_0x016cccfc(*(long *)(param_1 + 2),*param_1 + (int)uVar12,0);
    return (ulong)(iVar8 != 0);
  }
  auVar27 = func_0x00f78af4();
  piVar13 = auVar27._0_8_;
  puVar2 = &stack0xffffffffffffff90;
  puStack_28 = &Core_Networking_EventStanding__CreateEventStanding;
  ppuVar25 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if (piVar13 != (int *)0x0) {
    puVar26 = &UNK_01654b24;
    piVar22 = piVar13;
    unaff_x21 = param_5;
    unaff_x22 = auVar27._8_8_;
code_r0x016ce2a4:
    uVar14 = 0;
    pppuVar3 = (undefined1 ***)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = uVar19;
    *(int **)(puVar2 + -0x18) = piVar22;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar25;
    *(undefined **)(puVar2 + -8) = puVar26;
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar13);
    if (*(long *)(piVar13 + 10) != 0) {
      if (*(int *)(*(long *)(piVar13 + 10) + 0x18) < 5) {
        uVar19 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(piVar13 + 10) = uVar19;
      }
      piVar13[0xc] = 5;
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar13);
      piVar13[0xd] = (int)uVar12;
      return uVar12;
    }
    auVar27 = func_0x00f78af4();
    param_1 = piVar13;
    pppuVar24 = (undefined1 ***)(puVar2 + -0x10);
    puVar26 = &FlatBuffers_FlatBufferBuilder__Slot;
code_r0x016ce380:
    do {
      piVar13 = auVar27._8_8_;
      *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
      *(int **)((long)pppuVar3 + -0x18) = param_1;
      *(undefined1 ****)((long)pppuVar3 + -0x10) = pppuVar24;
      *(undefined **)((long)pppuVar3 + -8) = puVar26;
      puVar4 = (undefined1 *)((long)pppuVar3 + -0x10);
      uVar17 = auVar27._8_4_;
      if ((int)uVar17 < *(int *)(auVar27._0_8_ + 0x30)) {
        unaff_x20 = *(long *)(auVar27._0_8_ + 0x28);
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        if (unaff_x20 == 0) goto code_r0x016ce410;
        if (uVar17 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar17 * 4 + 0x20) = (int)uVar12;
          return uVar12;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        piVar13 = (int *)func_0x00f78aec();
        uVar19 = func_0x00f78a24(0x3d6ceb8);
        uVar14 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(piVar13,uVar19);
        uVar19 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(piVar13,uVar19);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar19 = func_0x00f78b24();
      puVar26 = &FlatBuffers_FlatBufferBuilder__AddBool;
      auVar27 = func_0x00f78ac0(uVar19,0);
      pdVar18 = auVar27._8_8_;
      auVar28._8_8_ = uVar14;
      auVar28._0_8_ = auVar27._0_8_;
      pppuVar3 = (undefined1 ***)((long)pppuVar3 + -0x20);
      param_1 = piVar13;
code_r0x016ce420:
      uVar12 = auVar28._0_8_;
      auVar27._8_8_ = pdVar18;
      auVar27._0_8_ = uVar12;
      *(ulong *)((long)pppuVar3 + -0x30) = unaff_x22;
      *(ulong *)((long)pppuVar3 + -0x28) = unaff_x21;
      *(long *)((long)pppuVar3 + -0x20) = unaff_x20;
      *(int **)((long)pppuVar3 + -0x18) = param_1;
      *(undefined1 **)((long)pppuVar3 + -0x10) = puVar4;
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
      pppuVar24 = (undefined1 ***)*(undefined1 ***)((long)pppuVar3 + -0x10);
      puVar26 = *(undefined **)((long)pppuVar3 + -8);
    } while( true );
  }
  uVar12 = func_0x00f78af4();
  ppuStack_80 = ppuVar25;
  if (uVar12 != 0) {
    puStack_78 = &Core_Networking_EventStanding__AddSplinePosition;
    if (extraout_s0 == 0.0 && *(char *)(uVar12 + 0x48) == '\0') {
      return uVar12;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,4);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,uVar12);
    auVar27._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 3);
    auVar27._0_8_ = uVar12;
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffff90;
    pppuVar24 = (undefined1 ***)ppuStack_80;
    puVar26 = puStack_78;
    goto code_r0x016ce380;
  }
  pppuVar24 = &ppuStack_80;
  puStack_78 = &Core_Networking_EventStanding__AddSplinePosition;
  auVar27 = func_0x00f78af4();
  uVar12 = auVar27._0_8_;
  if (uVar12 != 0) {
    param_4 = 0;
    if ((auVar27._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar12,auVar27._8_8_);
    auVar27._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 2);
    auVar27._0_8_ = uVar12;
    puVar26 = &Core_Networking_EventStanding__AddTimeStamp;
    pppuVar3 = &ppuStack_80;
    goto code_r0x016ce380;
  }
  pppuVar24 = (undefined1 ***)&stack0xffffffffffffff70;
  auVar27 = func_0x00f78af4();
  uVar12 = auVar27._0_8_;
  if (uVar12 != 0) {
    param_4 = 0;
    if ((auVar27._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar12,auVar27._8_8_);
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar12;
    puVar26 = &Core_Networking_EventStanding__AddSyncId;
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffff70;
    goto code_r0x016ce380;
  }
  pppuVar3 = (undefined1 ***)&stack0xffffffffffffff60;
  puVar4 = &stack0xffffffffffffff60;
  puVar26 = &Core_Networking_EventStanding__AddDnf;
  auVar28 = func_0x00f78af4();
  if (auVar28._0_8_ != 0) {
    pdVar18 = &MACH_HEADER.cputype;
    param_4 = 0;
    goto code_r0x016ce420;
  }
  pppuVar24 = (undefined1 ***)&stack0xffffffffffffff50;
  auVar27 = func_0x00f78af4();
  uVar12 = auVar27._0_8_;
  if (uVar12 != 0) {
    param_4 = 0;
    if ((auVar27._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar12,auVar27._8_8_);
    auVar27._8_8_ = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    auVar27._0_8_ = uVar12;
    puVar26 = &Core_Networking_EventStanding__AddBattleScore;
    pppuVar3 = (undefined1 ***)&stack0xffffffffffffff50;
    goto code_r0x016ce380;
  }
  lVar15 = func_0x00f78af4();
  puVar2 = &stack0xffffffffffffff20;
  ppuVar25 = (undefined1 **)&stack0xffffffffffffff30;
  uVar19 = 0x3eb5000;
  if ((bRam0000000003eb57f1 & 1) == 0) {
    func_0x00f78a20(0x3d3f080);
    bRam0000000003eb57f1 = 1;
  }
  if (lVar15 == 0) {
    puVar26 = &Core_Networking_EventStanding__StartEventStanding;
    piVar13 = (int *)func_0x00f78af4();
    if (piVar13 == (int *)0x0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
    piVar22 = (int *)0x0;
    goto code_r0x016ce2a4;
  }
  uVar12 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar15 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,0);
    uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
    unaff_x21 = (ulong)*(uint *)(lVar15 + 0x30);
    uVar17 = *(uint *)(lVar15 + 0x30) - 1;
    if (-2 < (int)uVar17) {
      uVar17 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar17;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar8 = (int)uVar12;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar20 = *(long *)(lVar15 + 0x28);
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
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)sVar5);
      lVar20 = *(long *)(lVar15 + 0x28);
      if (lVar20 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar20 + 0x18) <= uVar23) goto code_r0x016ced88;
      *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar17 = uVar1;
    } while (0 < (long)uVar23);
code_r0x016ceb30:
    uVar9 = *(undefined4 *)(lVar15 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)(short)((short)uVar12 - (short)uVar9));
    uVar17 = uVar17 * 2 + 6;
    unaff_x21 = (ulong)uVar17;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)(short)uVar17);
    unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
    if (0 < (int)*(uint *)(lVar15 + 0x40)) {
      uVar23 = 0;
      do {
        lVar20 = *(long *)(lVar15 + 0x18);
        if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
           (lVar21 = *(long *)(lVar15 + 0x38), lVar21 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar21 + 0x18) <= uVar23) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) - *(int *)(lVar21 + uVar23 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar17 = *(uint *)(lVar15 + 0x10);
        unaff_x22 = (ulong)uVar17;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
        if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),unaff_x22,2);
        if (sVar5 == sVar6) {
          if (sVar5 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar15 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar23) goto code_r0x016ced88;
            iVar10 = *(int *)(unaff_x21 + uVar23 * 4 + 0x20);
            if (iVar10 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar15 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar8;
            *(int *)(lVar15 + 0x10) = iVar11;
            iVar10 = iVar10 - iVar8;
            goto code_r0x016ced3c;
          }
          iVar10 = 2;
          while( true ) {
            if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),uVar1 + iVar10,2);
            if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),uVar17 + iVar10,2);
            if (sVar6 != sVar7) break;
            iVar10 = iVar10 + 2;
            if (sVar5 <= iVar10) goto code_r0x016cec64;
          }
        }
        uVar23 = uVar23 + 1;
        unaff_x22 = (ulong)*(int *)(lVar15 + 0x40);
      } while ((long)uVar23 < (long)unaff_x22);
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
        lVar20 = *(long *)(lVar15 + 0x38);
        if (lVar20 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
        *(ulong *)(lVar15 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar15 + 0x40);
      }
      uVar17 = (uint)unaff_x22;
      *(uint *)(lVar15 + 0x40) = uVar17 + 1;
      uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar17 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar17 * 4 + 0x20) = uVar9;
        unaff_x21 = *(ulong *)(lVar15 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar11 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar10 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
          iVar11 = iVar11 - iVar8;
          iVar10 = iVar10 - iVar8;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar11,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar11,4,(long)iVar10);
          *(undefined4 *)(lVar15 + 0x30) = 0xffffffff;
          return uVar12;
        }
        goto code_r0x016ced84;
      }
    }
code_r0x016ced88:
    uVar19 = func_0x00f78b24();
    func_0x00f78ac0(uVar19,0);
  }
  func_0x00f78a24(0x3d22a38);
  uVar19 = func_0x00f78aec();
  uVar14 = func_0x00f78a24(0x3d6cea8);
  iVar8 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar19,uVar14);
  uVar14 = func_0x00f78a24(0x3d56a30);
  auVar29 = func_0x00f78ac0(uVar19,uVar14);
  puStack_118 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar25 = &puStack_120;
  lVar15 = *(long *)(auVar29._0_8_ + 0x18);
  iStack_144 = iVar8;
  uStack_140 = unaff_x22;
  uStack_138 = unaff_x21;
  uStack_130 = uVar12;
  uStack_128 = uVar19;
  puStack_120 = &stack0xffffffffffffff30;
  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
    iVar10 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - auVar29._8_4_;
    iVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,iVar10,4);
    lVar15 = *(long *)(auVar29._0_8_ + 0x18);
    if (lVar15 != 0) {
      uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,(iVar10 - iVar11) + iVar8,2);
      if ((uVar12 & 0xffff) != 0) {
        return uVar12;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar19 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_144,0);
  uVar14 = func_0x00f78a24(0x3d6ce88);
  uVar16 = func_0x00f78a24(0x3d66338);
  lVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar19,uVar16,0);
  func_0x00f78a24(0x3d22a38);
  uVar12 = func_0x00f78aec();
  uVar14 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar15);
  uVar19 = func_0x00f78a24(0x3d56a50);
  puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar27 = func_0x00f78ac0(uVar12,uVar19);
  puVar4 = auStack_150;
  do {
    uVar23 = auVar27._8_8_;
    lVar20 = auVar27._0_8_;
    *(ulong *)(puVar4 + -0x20) = uVar12;
    *(long *)(puVar4 + -0x18) = lVar15;
    *(undefined1 ***)(puVar4 + -0x10) = ppuVar25;
    *(undefined **)(puVar4 + -8) = puVar26;
    ppuVar25 = (undefined1 **)(puVar4 + -0x10);
    if ((int)uVar14 == 0) {
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
         (lVar15 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar15 != 0)) {
        uVar23 = (ulong)(uint)(*(int *)(lVar15 + 0x18) - *(int *)(lVar20 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
        uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar23);
        goto code_r0x016cef70;
      }
    }
    puVar26 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar27 = func_0x00f78af4();
    uVar14 = 0;
    puVar4 = puVar4 + -0x20;
    lVar15 = lVar20;
    uVar12 = uVar23;
  } while( true );
}



// ============================================================
// RVA: 0x1654ae4 | Core.Networking.EventStanding.CreateEventStanding
// ============================================================

/* WARNING: Possible PIC construction at 0x01654b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01654b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01654b50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01654b3c) */
/* WARNING: Removing unreachable block (ram,0x01654b24) */
/* WARNING: Removing unreachable block (ram,0x01654b54) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_EventStanding__CreateEventStanding
                (long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  short sVar5;
  undefined4 uVar8;
  short sVar6;
  short sVar7;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  int iVar18;
  long unaff_x20;
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
  ulong auStack_150 [4];
  undefined1 auStack_130 [12];
  int iStack_124;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  puVar2 = &stack0xffffffffffffffb0;
  puVar4 = &stack0xfffffffffffffff0;
  if (param_1 != 0) {
    puVar22 = (undefined *)0x1654b24;
    lVar13 = param_1;
    unaff_x21 = param_5;
    unaff_x22 = param_2;
code_r0x016ce2a4:
    uVar11 = 0;
    ppuVar3 = (undefined1 **)(puVar2 + -0x30);
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = param_3;
    *(long *)(puVar2 + -0x18) = lVar13;
    *(undefined1 **)(puVar2 + -0x10) = puVar4;
    *(undefined **)(puVar2 + -8) = puVar22;
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 5) {
        uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(param_1 + 0x28) = uVar11;
      }
      *(undefined4 *)(param_1 + 0x30) = 5;
      uVar19 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar19;
      return uVar19;
    }
    auVar24 = func_0x00f78af4();
    unaff_x19 = param_1;
    ppuVar21 = (undefined1 **)(puVar2 + -0x10);
    puVar22 = &FlatBuffers_FlatBufferBuilder__Slot;
code_r0x016ce380:
    do {
      lVar13 = auVar24._8_8_;
      *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
      *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
      *(undefined1 ***)((long)ppuVar3 + -0x10) = ppuVar21;
      *(undefined **)((long)ppuVar3 + -8) = puVar22;
      puVar4 = (undefined1 *)((long)ppuVar3 + -0x10);
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
        lVar13 = func_0x00f78aec();
        uVar12 = func_0x00f78a24(0x3d6ceb8);
        uVar11 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(lVar13,uVar12);
        uVar12 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(lVar13,uVar12);
code_r0x016ce410:
        func_0x00f78af4();
      }
      uVar12 = func_0x00f78b24();
      puVar22 = &FlatBuffers_FlatBufferBuilder__AddBool;
      auVar24 = func_0x00f78ac0(uVar12,0);
      uVar12 = auVar24._8_8_;
      auVar23._8_8_ = uVar11;
      auVar23._0_8_ = auVar24._0_8_;
      ppuVar3 = (undefined1 **)((long)ppuVar3 + -0x20);
      unaff_x19 = lVar13;
code_r0x016ce420:
      uVar19 = auVar23._0_8_;
      auVar24._8_8_ = uVar12;
      auVar24._0_8_ = uVar19;
      *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
      *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
      *(long *)((long)ppuVar3 + -0x20) = unaff_x20;
      *(long *)((long)ppuVar3 + -0x18) = unaff_x19;
      *(undefined1 **)((long)ppuVar3 + -0x10) = puVar4;
      *(undefined **)((long)ppuVar3 + -8) = puVar22;
      if ((auVar23._8_4_ == (int)param_4) && (*(char *)(uVar19 + 0x48) == '\0')) {
        return uVar19;
      }
      uVar11 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar19,auVar23._8_8_);
      unaff_x20 = *(long *)((long)ppuVar3 + -0x20);
      unaff_x19 = *(long *)((long)ppuVar3 + -0x18);
      unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
      unaff_x21 = *(ulong *)((long)ppuVar3 + -0x28);
      ppuVar21 = (undefined1 **)*(undefined1 **)((long)ppuVar3 + -0x10);
      puVar22 = *(undefined **)((long)ppuVar3 + -8);
    } while( true );
  }
  uVar19 = func_0x00f78af4();
  puStack_60 = puVar4;
  if (uVar19 != 0) {
    puStack_58 = &Core_Networking_EventStanding__AddSplinePosition;
    if (extraout_s0 == 0.0 && *(char *)(uVar19 + 0x48) == '\0') {
      return uVar19;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,4);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(extraout_s0,uVar19);
    auVar24._8_8_ = 3;
    auVar24._0_8_ = uVar19;
    ppuVar3 = (undefined1 **)&stack0xffffffffffffffb0;
    ppuVar21 = (undefined1 **)puStack_60;
    puVar22 = puStack_58;
    goto code_r0x016ce380;
  }
  ppuVar21 = &puStack_60;
  puStack_58 = &Core_Networking_EventStanding__AddSplinePosition;
  auVar24 = func_0x00f78af4();
  uVar19 = auVar24._0_8_;
  if (uVar19 != 0) {
    param_4 = 0;
    if ((auVar24._8_4_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
      return uVar19;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(uVar19,auVar24._8_8_);
    auVar24._8_8_ = 2;
    auVar24._0_8_ = uVar19;
    puVar22 = &Core_Networking_EventStanding__AddTimeStamp;
    ppuVar3 = &puStack_60;
    goto code_r0x016ce380;
  }
  ppuVar21 = (undefined1 **)&stack0xffffffffffffff90;
  auVar24 = func_0x00f78af4();
  uVar19 = auVar24._0_8_;
  if (uVar19 != 0) {
    param_4 = 0;
    if ((auVar24._8_4_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
      return uVar19;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar19,auVar24._8_8_);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar19;
    puVar22 = &Core_Networking_EventStanding__AddSyncId;
    ppuVar3 = (undefined1 **)&stack0xffffffffffffff90;
    goto code_r0x016ce380;
  }
  ppuVar3 = (undefined1 **)&stack0xffffffffffffff80;
  puVar4 = &stack0xffffffffffffff80;
  puVar22 = &Core_Networking_EventStanding__AddDnf;
  auVar23 = func_0x00f78af4();
  if (auVar23._0_8_ != 0) {
    uVar12 = 4;
    param_4 = 0;
    goto code_r0x016ce420;
  }
  ppuVar21 = (undefined1 **)&stack0xffffffffffffff70;
  auVar24 = func_0x00f78af4();
  uVar19 = auVar24._0_8_;
  if (uVar19 != 0) {
    param_4 = 0;
    if ((auVar24._8_4_ == 0) && (*(char *)(uVar19 + 0x48) == '\0')) {
      return uVar19;
    }
    uVar11 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar19,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar19,auVar24._8_8_);
    auVar24._8_8_ = 1;
    auVar24._0_8_ = uVar19;
    puVar22 = &Core_Networking_EventStanding__AddBattleScore;
    ppuVar3 = (undefined1 **)&stack0xffffffffffffff70;
    goto code_r0x016ce380;
  }
  lVar13 = func_0x00f78af4();
  puVar2 = &stack0xffffffffffffff40;
  puVar4 = &stack0xffffffffffffff50;
  param_3 = 0x3eb5000;
  if ((bRam0000000003eb57f1 & 1) == 0) {
    func_0x00f78a20(0x3d3f080);
    bRam0000000003eb57f1 = 1;
  }
  if (lVar13 == 0) {
    puVar22 = &Core_Networking_EventStanding__StartEventStanding;
    param_1 = func_0x00f78af4();
    if (param_1 == 0) {
      lVar13 = func_0x00f78af4();
      return *(ulong *)(lVar13 + 8);
    }
    lVar13 = 0;
    goto code_r0x016ce2a4;
  }
  uVar19 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar13 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar13,0);
    uVar19 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
    unaff_x21 = (ulong)*(uint *)(lVar13 + 0x30);
    uVar15 = *(uint *)(lVar13 + 0x30) - 1;
    if (-2 < (int)uVar15) {
      uVar15 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar15;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar18 = (int)uVar19;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar16 = *(long *)(lVar13 + 0x28);
      if (lVar16 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar16 + 0x18) <= uVar1) goto code_r0x016ced88;
    } while (*(int *)(lVar16 + (ulong)uVar1 * 4 + 0x20) == 0);
    unaff_x22 = unaff_x21 + 8;
    do {
      uVar20 = unaff_x22 - 8;
      if (*(uint *)(lVar16 + 0x18) <= uVar20) goto code_r0x016ced88;
      iVar9 = *(int *)(lVar16 + unaff_x22 * 4);
      sVar5 = 0;
      if (iVar9 != 0) {
        sVar5 = (short)uVar19 - (short)iVar9;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)sVar5);
      lVar16 = *(long *)(lVar13 + 0x28);
      if (lVar16 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar16 + 0x18) <= uVar20) goto code_r0x016ced88;
      *(undefined4 *)(lVar16 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar15 = uVar1;
    } while (0 < (long)uVar20);
code_r0x016ceb30:
    uVar8 = *(undefined4 *)(lVar13 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)((short)uVar19 - (short)uVar8));
    uVar15 = uVar15 * 2 + 6;
    unaff_x21 = (ulong)uVar15;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)uVar15);
    unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
    if (0 < (int)*(uint *)(lVar13 + 0x40)) {
      uVar20 = 0;
      do {
        lVar16 = *(long *)(lVar13 + 0x18);
        if (((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) ||
           (lVar17 = *(long *)(lVar13 + 0x38), lVar17 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar17 + 0x18) <= uVar20) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar16 + 0x10) + 0x18) - *(int *)(lVar17 + uVar20 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar15 = *(uint *)(lVar13 + 0x10);
        unaff_x22 = (ulong)uVar15;
        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar16,unaff_x21,2);
        if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),unaff_x22,2);
        if (sVar5 == sVar6) {
          if (sVar5 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar13 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar20) goto code_r0x016ced88;
            iVar9 = *(int *)(unaff_x21 + uVar20 * 4 + 0x20);
            if (iVar9 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar13 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar18;
            *(int *)(lVar13 + 0x10) = iVar10;
            iVar9 = iVar9 - iVar18;
            goto code_r0x016ced3c;
          }
          iVar9 = 2;
          while( true ) {
            if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),uVar1 + iVar9,2);
            if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),uVar15 + iVar9,2);
            if (sVar6 != sVar7) break;
            iVar9 = iVar9 + 2;
            if (sVar5 <= iVar9) goto code_r0x016cec64;
          }
        }
        uVar20 = uVar20 + 1;
        unaff_x22 = (ulong)*(int *)(lVar13 + 0x40);
      } while ((long)uVar20 < (long)unaff_x22);
    }
    unaff_x21 = *(ulong *)(lVar13 + 0x38);
    if (unaff_x21 == 0) {
code_r0x016ced84:
      func_0x00f78af4();
    }
    else {
code_r0x016cecac:
      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
        lVar16 = *(long *)(lVar13 + 0x38);
        if (lVar16 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar16,unaff_x21,*(undefined4 *)(lVar16 + 0x18),0);
        *(ulong *)(lVar13 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
      }
      uVar15 = (uint)unaff_x22;
      *(uint *)(lVar13 + 0x40) = uVar15 + 1;
      uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar15 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar15 * 4 + 0x20) = uVar8;
        unaff_x21 = *(ulong *)(lVar13 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
          iVar10 = iVar10 - iVar18;
          iVar9 = iVar9 - iVar18;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
          *(undefined4 *)(lVar13 + 0x30) = 0xffffffff;
          return uVar19;
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
  auVar25 = func_0x00f78ac0(uVar11,uVar12);
  puStack_f8 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar3 = &puStack_100;
  lVar13 = *(long *)(auVar25._0_8_ + 0x18);
  iStack_124 = iVar18;
  uStack_120 = unaff_x22;
  uStack_118 = unaff_x21;
  uStack_110 = uVar19;
  uStack_108 = uVar11;
  puStack_100 = &stack0xffffffffffffff50;
  if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
    iVar9 = *(int *)(*(long *)(lVar13 + 0x10) + 0x18) - auVar25._8_4_;
    iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar13,iVar9,4);
    lVar13 = *(long *)(auVar25._0_8_ + 0x18);
    if (lVar13 != 0) {
      uVar19 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar13,(iVar9 - iVar10) + iVar18,2);
      if ((uVar19 & 0xffff) != 0) {
        return uVar19;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_124,0);
  uVar12 = func_0x00f78a24(0x3d6ce88);
  uVar14 = func_0x00f78a24(0x3d66338);
  lVar13 = /*System.String$$Concat*/ func_0x029be39c(uVar12,uVar11,uVar14,0);
  func_0x00f78a24(0x3d22a38);
  uVar19 = func_0x00f78aec();
  uVar12 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar19,lVar13);
  uVar11 = func_0x00f78a24(0x3d56a50);
  puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar24 = func_0x00f78ac0(uVar19,uVar11);
  puVar4 = auStack_130;
  do {
    uVar20 = auVar24._8_8_;
    lVar16 = auVar24._0_8_;
    *(ulong *)(puVar4 + -0x20) = uVar19;
    *(long *)(puVar4 + -0x18) = lVar13;
    *(undefined1 ***)(puVar4 + -0x10) = ppuVar3;
    *(undefined **)(puVar4 + -8) = puVar22;
    ppuVar3 = (undefined1 **)(puVar4 + -0x10);
    if ((int)uVar12 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),4);
      uVar19 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar20);
code_r0x016cef70:
      if (*(long *)(lVar16 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar16 + 0x18) + 0x18) = *(undefined4 *)(lVar16 + 0x10);
        return uVar19;
      }
    }
    else if (lVar16 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,*(undefined4 *)(lVar16 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar16,uVar20);
      if ((*(long *)(lVar16 + 0x18) != 0) &&
         (lVar13 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10), lVar13 != 0)) {
        uVar20 = (ulong)(uint)(*(int *)(lVar13 + 0x18) - *(int *)(lVar16 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar16,4,0);
        uVar19 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar16,uVar20);
        goto code_r0x016cef70;
      }
    }
    puVar22 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar24 = func_0x00f78af4();
    uVar12 = 0;
    puVar4 = puVar4 + -0x20;
    lVar13 = lVar16;
    uVar19 = uVar20;
  } while( true );
}



// ============================================================
// RVA: 0x1654b80 | Core.Networking.EventStanding.AddSplinePosition
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_EventStanding__AddSplinePosition
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
  undefined1 **ppuVar20;
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
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  
  if (param_2 != 0) {
    if (param_1 == 0.0 && *(char *)(param_2 + 0x48) == '\0') {
      return param_2;
    }
    lVar16 = 3;
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4);
    /*FlatBuffers.FlatBufferBuilder$$PutFloat*/ func_0x016cde24(param_1,param_2);
    puVar2 = (undefined1 *)register0x00000008;
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
  unaff_x29 = &stack0xfffffffffffffff0;
  auVar22 = func_0x00f78af4();
  param_2 = auVar22._0_8_;
  if (param_2 != 0) {
    param_5 = 0;
    if ((auVar22._8_4_ == 0) && (*(char *)(param_2 + 0x48) == '\0')) {
      return param_2;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_2,auVar22._8_8_);
    lVar16 = 2;
    unaff_x30 = &Core_Networking_EventStanding__AddTimeStamp;
    puVar2 = &stack0xfffffffffffffff0;
    goto code_r0x016ce380;
  }
  unaff_x29 = &stack0xffffffffffffffe0;
  auVar22 = func_0x00f78af4();
  param_2 = auVar22._0_8_;
  if (param_2 != 0) {
    param_5 = 0;
    if ((auVar22._8_4_ == 0) && (*(char *)(param_2 + 0x48) == '\0')) {
      return param_2;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_2,auVar22._8_8_);
    lVar16 = 0;
    unaff_x30 = &Core_Networking_EventStanding__AddSyncId;
    puVar2 = &stack0xffffffffffffffe0;
    goto code_r0x016ce380;
  }
  puVar2 = &stack0xffffffffffffffd0;
  puVar19 = &stack0xffffffffffffffd0;
  puVar21 = &Core_Networking_EventStanding__AddDnf;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ != 0) {
    lVar16 = 4;
    param_5 = 0;
    goto code_r0x016ce420;
  }
  unaff_x29 = &stack0xffffffffffffffc0;
  auVar22 = func_0x00f78af4();
  param_2 = auVar22._0_8_;
  if (param_2 != 0) {
    param_5 = 0;
    if ((auVar22._8_4_ == 0) && (*(char *)(param_2 + 0x48) == '\0')) {
      return param_2;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_2,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_2,auVar22._8_8_);
    lVar16 = 1;
    unaff_x30 = &Core_Networking_EventStanding__AddBattleScore;
    puVar2 = &stack0xffffffffffffffc0;
    goto code_r0x016ce380;
  }
  lVar16 = func_0x00f78af4();
  if ((bRam0000000003eb57f1 & 1) == 0) {
    func_0x00f78a20(0x3d3f080);
    bRam0000000003eb57f1 = 1;
  }
  if (lVar16 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar16 = func_0x00f78af4();
      return *(ulong *)(lVar16 + 8);
    }
    uVar13 = 0;
    puVar2 = &stack0xffffffffffffff60;
    unaff_x29 = &stack0xffffffffffffff80;
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 5) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar13;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 5;
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
        uVar1 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20);
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
  puStack_a8 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar20 = &puStack_b0;
  lVar16 = *(long *)(auVar24._0_8_ + 0x18);
  iStack_d4 = iVar17;
  uStack_d0 = unaff_x22;
  uStack_c8 = unaff_x21;
  uStack_c0 = uVar9;
  uStack_b8 = uVar13;
  puStack_b0 = &stack0xffffffffffffffa0;
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
  uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_d4,0);
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
  puVar2 = auStack_e0;
  do {
    uVar18 = auVar22._8_8_;
    lVar14 = auVar22._0_8_;
    *(ulong *)(puVar2 + -0x20) = uVar9;
    *(long *)(puVar2 + -0x18) = lVar16;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar20;
    *(undefined **)(puVar2 + -8) = puVar21;
    ppuVar20 = (undefined1 **)(puVar2 + -0x10);
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



// ============================================================
// RVA: 0x1654ba0 | Core.Networking.EventStanding.AddTimeStamp
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_EventStanding__AddTimeStamp
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
  undefined1 **ppuVar20;
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
  undefined1 *puStack_a0;
  undefined *puStack_98;
  
  if (param_1 != 0) {
    param_4 = 0;
    lVar16 = 2;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(param_1,param_2);
    puVar2 = (undefined1 *)register0x00000008;
code_r0x016ce380:
    do {
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(long *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(undefined **)(puVar2 + -8) = unaff_x30;
      puVar19 = puVar2 + -0x10;
      uVar12 = (uint)lVar16;
      if ((int)uVar12 < *(int *)(param_1 + 0x30)) {
        unaff_x20 = *(long *)(param_1 + 0x28);
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
      param_1 = auVar22._0_8_;
      *(ulong *)(puVar2 + -0x30) = unaff_x22;
      *(ulong *)(puVar2 + -0x28) = unaff_x21;
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(long *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = puVar19;
      *(undefined **)(puVar2 + -8) = puVar21;
      if ((auVar22._8_4_ == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
        return param_1;
      }
      uVar13 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,auVar22._8_8_);
      unaff_x29 = *(undefined1 **)(puVar2 + -0x10);
      unaff_x30 = *(undefined **)(puVar2 + -8);
      unaff_x20 = *(long *)(puVar2 + -0x20);
      unaff_x19 = *(long *)(puVar2 + -0x18);
      unaff_x22 = *(ulong *)(puVar2 + -0x30);
      unaff_x21 = *(ulong *)(puVar2 + -0x28);
    } while( true );
  }
  unaff_x29 = &stack0xfffffffffffffff0;
  auVar22 = func_0x00f78af4();
  param_1 = auVar22._0_8_;
  if (param_1 != 0) {
    param_4 = 0;
    if ((auVar22._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_1,auVar22._8_8_);
    lVar16 = 0;
    unaff_x30 = &Core_Networking_EventStanding__AddSyncId;
    puVar2 = &stack0xfffffffffffffff0;
    goto code_r0x016ce380;
  }
  puVar2 = &stack0xffffffffffffffe0;
  puVar19 = &stack0xffffffffffffffe0;
  puVar21 = &Core_Networking_EventStanding__AddDnf;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ != 0) {
    lVar16 = 4;
    param_4 = 0;
    goto code_r0x016ce420;
  }
  unaff_x29 = &stack0xffffffffffffffd0;
  auVar22 = func_0x00f78af4();
  param_1 = auVar22._0_8_;
  if (param_1 != 0) {
    param_4 = 0;
    if ((auVar22._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,auVar22._8_8_);
    lVar16 = 1;
    unaff_x30 = &Core_Networking_EventStanding__AddBattleScore;
    puVar2 = &stack0xffffffffffffffd0;
    goto code_r0x016ce380;
  }
  lVar16 = func_0x00f78af4();
  if ((bRam0000000003eb57f1 & 1) == 0) {
    func_0x00f78a20(0x3d3f080);
    bRam0000000003eb57f1 = 1;
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
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 5) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar13;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 5;
      uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
      *(int *)(unaff_x19 + 0x34) = (int)uVar9;
      return uVar9;
    }
    unaff_x30 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar22 = func_0x00f78af4();
    lVar16 = auVar22._8_8_;
    param_1 = auVar22._0_8_;
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
        uVar1 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - *(int *)(lVar15 + uVar18 * 4 + 0x20);
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
  ppuVar20 = &puStack_a0;
  lVar16 = *(long *)(auVar24._0_8_ + 0x18);
  iStack_c4 = iVar17;
  uStack_c0 = unaff_x22;
  uStack_b8 = unaff_x21;
  uStack_b0 = uVar9;
  uStack_a8 = uVar13;
  puStack_a0 = &stack0xffffffffffffffb0;
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
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar20;
    *(undefined **)(puVar2 + -8) = puVar21;
    ppuVar20 = (undefined1 **)(puVar2 + -0x10);
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



// ============================================================
// RVA: 0x1654bc4 | Core.Networking.EventStanding.AddSyncId
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_EventStanding__AddSyncId
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
  undefined1 **ppuVar20;
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
  undefined1 *puStack_90;
  undefined *puStack_88;
  
  if (param_1 != 0) {
    param_4 = 0;
    lVar17 = 0;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(param_1,param_2);
    puVar3 = (undefined1 *)register0x00000008;
code_r0x016ce380:
    do {
      *(long *)(puVar3 + -0x20) = unaff_x20;
      *(long *)(puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
      *(undefined **)(puVar3 + -8) = unaff_x30;
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
      uVar14 = 0;
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
  puVar21 = &Core_Networking_EventStanding__AddDnf;
  auVar22 = func_0x00f78af4();
  if (auVar22._0_8_ != 0) {
    lVar17 = 4;
    param_4 = 0;
    puVar2 = &stack0xfffffffffffffff0;
    goto code_r0x016ce420;
  }
  unaff_x29 = &stack0xffffffffffffffe0;
  auVar22 = func_0x00f78af4();
  param_1 = auVar22._0_8_;
  if (param_1 != 0) {
    param_4 = 0;
    if ((auVar22._8_4_ == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,auVar22._8_8_);
    lVar17 = 1;
    unaff_x30 = &Core_Networking_EventStanding__AddBattleScore;
    puVar3 = &stack0xffffffffffffffe0;
    goto code_r0x016ce380;
  }
  lVar17 = func_0x00f78af4();
  if ((bRam0000000003eb57f1 & 1) == 0) {
    func_0x00f78a20(0x3d3f080);
    bRam0000000003eb57f1 = 1;
  }
  if (lVar17 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar17 = func_0x00f78af4();
      return *(ulong *)(lVar17 + 8);
    }
    uVar14 = 0;
    puVar3 = &stack0xffffffffffffff80;
    unaff_x29 = &stack0xffffffffffffffa0;
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 5) {
        uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar14;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 5;
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
        uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - *(int *)(lVar16 + uVar19 * 4 + 0x20);
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
  puStack_88 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar20 = &puStack_90;
  lVar17 = *(long *)(auVar24._0_8_ + 0x18);
  iStack_b4 = iVar18;
  uStack_b0 = unaff_x22;
  uStack_a8 = unaff_x21;
  uStack_a0 = uVar10;
  uStack_98 = uVar14;
  puStack_90 = &stack0xffffffffffffffc0;
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
  uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_b4,0);
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
  puVar3 = auStack_c0;
  do {
    uVar19 = auVar22._8_8_;
    lVar15 = auVar22._0_8_;
    *(ulong *)(puVar3 + -0x20) = uVar10;
    *(long *)(puVar3 + -0x18) = lVar17;
    *(undefined1 ***)(puVar3 + -0x10) = ppuVar20;
    *(undefined **)(puVar3 + -8) = puVar21;
    ppuVar20 = (undefined1 **)(puVar3 + -0x10);
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



// ============================================================
// RVA: 0x1654be8 | Core.Networking.EventStanding.AddDnf
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_EventStanding__AddDnf
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
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  int iVar17;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined1 *puVar19;
  undefined1 **ppuVar20;
  undefined *unaff_x30;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  ulong auStack_d0 [4];
  undefined1 auStack_b0 [12];
  int iStack_a4;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined *puStack_18;
  
  if (param_1 != 0) {
    uVar14 = 4;
    param_4 = 0;
    puVar2 = (undefined1 *)register0x00000008;
    lVar10 = unaff_x19;
    goto code_r0x016ce420;
  }
  puVar19 = &stack0xfffffffffffffff0;
  auVar22 = func_0x00f78af4();
  uVar9 = auVar22._0_8_;
  if (uVar9 != 0) {
    param_4 = 0;
    puStack_18 = &Core_Networking_EventStanding__AddBattleScore;
    if ((auVar22._8_4_ == 0) && (*(char *)(uVar9 + 0x48) == '\0')) {
      return uVar9;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar9,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(uVar9,auVar22._8_8_);
    auVar22._8_8_ = 1;
    auVar22._0_8_ = uVar9;
    puVar2 = &stack0xfffffffffffffff0;
code_r0x016ce380:
    do {
      lVar10 = auVar22._8_8_;
      *(long *)(puVar2 + -0x20) = unaff_x20;
      *(long *)(puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar2 + -0x10) = puVar19;
      *(undefined **)(puVar2 + -8) = puStack_18;
      unaff_x29 = puVar2 + -0x10;
      uVar13 = auVar22._8_4_;
      if ((int)uVar13 < *(int *)(auVar22._0_8_ + 0x30)) {
        unaff_x20 = *(long *)(auVar22._0_8_ + 0x28);
        uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
        param_2 = uVar14;
        if (unaff_x20 == 0) goto code_r0x016ce410;
        if (uVar13 < *(uint *)(unaff_x20 + 0x18)) {
          *(int *)(unaff_x20 + (long)(int)uVar13 * 4 + 0x20) = (int)uVar9;
          return uVar9;
        }
      }
      else {
        func_0x00f78a24(0x3d22738);
        lVar10 = func_0x00f78aec();
        uVar14 = func_0x00f78a24(0x3d6ceb8);
        param_2 = 0;
        /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(lVar10,uVar14);
        uVar14 = func_0x00f78a24(0x3d56a58);
        func_0x00f78ac0(lVar10,uVar14);
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
      *(long *)(puVar2 + -0x18) = lVar10;
      *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
      *(undefined **)(puVar2 + -8) = unaff_x30;
      if (((int)param_2 == (int)param_4) && (*(char *)(param_1 + 0x48) == '\0')) {
        return param_1;
      }
      uVar14 = 0;
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1);
      /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(param_1,param_2);
      puVar19 = *(undefined1 **)(puVar2 + -0x10);
      puStack_18 = *(undefined **)(puVar2 + -8);
      unaff_x20 = *(long *)(puVar2 + -0x20);
      unaff_x19 = *(long *)(puVar2 + -0x18);
      unaff_x22 = *(ulong *)(puVar2 + -0x30);
      unaff_x21 = *(ulong *)(puVar2 + -0x28);
    } while( true );
  }
  lVar10 = func_0x00f78af4();
  if ((bRam0000000003eb57f1 & 1) == 0) {
    func_0x00f78a20(0x3d3f080);
    bRam0000000003eb57f1 = 1;
  }
  if (lVar10 == 0) {
    unaff_x19 = func_0x00f78af4();
    if (unaff_x19 == 0) {
      lVar10 = func_0x00f78af4();
      return *(ulong *)(lVar10 + 8);
    }
    uVar14 = 0;
    puVar2 = &stack0xffffffffffffff90;
    puVar19 = &stack0xffffffffffffffb0;
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 5) {
        uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar14;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 5;
      uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(unaff_x19);
      *(int *)(unaff_x19 + 0x34) = (int)uVar9;
      return uVar9;
    }
    puStack_18 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar22 = func_0x00f78af4();
    goto code_r0x016ce380;
  }
  uVar9 = 0x3eb5000;
  if ((bRam0000000003eb5cd8 & 1) == 0) {
    func_0x00f78a20(0x3d1f100,0);
    bRam0000000003eb5cd8 = 1;
  }
  if (-1 < *(int *)(lVar10 + 0x30)) {
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar10,4,0);
    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar10,0);
    uVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar10);
    unaff_x21 = (ulong)*(uint *)(lVar10 + 0x30);
    uVar13 = *(uint *)(lVar10 + 0x30) - 1;
    if (-2 < (int)uVar13) {
      uVar13 = 0xffffffff;
    }
    unaff_x22 = (ulong)uVar13;
    do {
      uVar1 = (int)unaff_x21 - 1;
      unaff_x21 = (ulong)uVar1;
      iVar17 = (int)uVar9;
      if ((int)uVar1 < 0) goto code_r0x016ceb30;
      lVar15 = *(long *)(lVar10 + 0x28);
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
        sVar3 = (short)uVar9 - (short)iVar7;
      }
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar10,2,0);
      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar10,(int)sVar3);
      lVar15 = *(long *)(lVar10 + 0x28);
      if (lVar15 == 0) goto code_r0x016ced84;
      if (*(uint *)(lVar15 + 0x18) <= uVar18) goto code_r0x016ced88;
      *(undefined4 *)(lVar15 + unaff_x22 * 4) = 0;
      unaff_x22 = unaff_x22 - 1;
      uVar13 = uVar1;
    } while (0 < (long)uVar18);
code_r0x016ceb30:
    uVar6 = *(undefined4 *)(lVar10 + 0x34);
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar10,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar10,(int)(short)((short)uVar9 - (short)uVar6));
    uVar13 = uVar13 * 2 + 6;
    unaff_x21 = (ulong)uVar13;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar10,2,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar10,(int)(short)uVar13);
    unaff_x22 = (ulong)*(uint *)(lVar10 + 0x40);
    if (0 < (int)*(uint *)(lVar10 + 0x40)) {
      uVar18 = 0;
      do {
        lVar15 = *(long *)(lVar10 + 0x18);
        if (((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) ||
           (lVar16 = *(long *)(lVar10 + 0x38), lVar16 == 0)) goto code_r0x016ced84;
        if (*(uint *)(lVar16 + 0x18) <= uVar18) goto code_r0x016ced88;
        uVar1 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - *(int *)(lVar16 + uVar18 * 4 + 0x20);
        unaff_x21 = (ulong)uVar1;
        uVar13 = *(uint *)(lVar10 + 0x10);
        unaff_x22 = (ulong)uVar13;
        sVar3 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,unaff_x21,2);
        if (*(long *)(lVar10 + 0x18) == 0) goto code_r0x016ced84;
        sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar10 + 0x18),unaff_x22,2);
        if (sVar3 == sVar4) {
          if (sVar3 < 3) {
code_r0x016cec64:
            unaff_x21 = *(ulong *)(lVar10 + 0x38);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar18) goto code_r0x016ced88;
            iVar7 = *(int *)(unaff_x21 + uVar18 * 4 + 0x20);
            if (iVar7 == 0) {
              unaff_x22 = (ulong)*(uint *)(lVar10 + 0x40);
              goto code_r0x016cecac;
            }
            unaff_x21 = *(ulong *)(lVar10 + 0x18);
            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
            iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar17;
            *(int *)(lVar10 + 0x10) = iVar8;
            iVar7 = iVar7 - iVar17;
            goto code_r0x016ced3c;
          }
          iVar7 = 2;
          while( true ) {
            if (*(long *)(lVar10 + 0x18) == 0) goto code_r0x016ced84;
            sVar4 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar10 + 0x18),uVar1 + iVar7,2);
            if (*(long *)(lVar10 + 0x18) == 0) goto code_r0x016ced84;
            sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar10 + 0x18),uVar13 + iVar7,2);
            if (sVar4 != sVar5) break;
            iVar7 = iVar7 + 2;
            if (sVar3 <= iVar7) goto code_r0x016cec64;
          }
        }
        uVar18 = uVar18 + 1;
        unaff_x22 = (ulong)*(int *)(lVar10 + 0x40);
      } while ((long)uVar18 < (long)unaff_x22);
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
        lVar15 = *(long *)(lVar10 + 0x38);
        if (lVar15 == 0) goto code_r0x016ced84;
        /*System.Array$$Copy*/ func_0x0292c49c(lVar15,unaff_x21,*(undefined4 *)(lVar15 + 0x18),0);
        *(ulong *)(lVar10 + 0x38) = unaff_x21;
        unaff_x22 = (ulong)*(uint *)(lVar10 + 0x40);
      }
      uVar13 = (uint)unaff_x22;
      *(uint *)(lVar10 + 0x40) = uVar13 + 1;
      uVar6 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar10);
      if (unaff_x21 == 0) goto code_r0x016ced84;
      if (uVar13 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined4 *)(unaff_x21 + (long)(int)uVar13 * 4 + 0x20) = uVar6;
        unaff_x21 = *(ulong *)(lVar10 + 0x18);
        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
          iVar8 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
          iVar7 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar10);
          iVar8 = iVar8 - iVar17;
          iVar7 = iVar7 - iVar17;
code_r0x016ced3c:
          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar8,4);
          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar8,4,(long)iVar7);
          *(undefined4 *)(lVar10 + 0x30) = 0xffffffff;
          return uVar9;
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
  puStack_78 = &FlatBuffers_FlatBufferBuilder__Required;
  ppuVar20 = &puStack_80;
  lVar10 = *(long *)(auVar23._0_8_ + 0x18);
  iStack_a4 = iVar17;
  uStack_a0 = unaff_x22;
  uStack_98 = unaff_x21;
  uStack_90 = uVar9;
  uStack_88 = uVar14;
  puStack_80 = &stack0xffffffffffffffd0;
  if ((lVar10 != 0) && (*(long *)(lVar10 + 0x10) != 0)) {
    iVar7 = *(int *)(*(long *)(lVar10 + 0x10) + 0x18) - auVar23._8_4_;
    iVar8 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar10,iVar7,4);
    lVar10 = *(long *)(auVar23._0_8_ + 0x18);
    if (lVar10 != 0) {
      uVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar10,(iVar7 - iVar8) + iVar17,2);
      if ((uVar9 & 0xffff) != 0) {
        return uVar9;
      }
      goto code_r0x016cee5c;
    }
  }
  func_0x00f78af4();
code_r0x016cee5c:
  uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_a4,0);
  uVar11 = func_0x00f78a24(0x3d6ce88);
  uVar12 = func_0x00f78a24(0x3d66338);
  lVar10 = /*System.String$$Concat*/ func_0x029be39c(uVar11,uVar14,uVar12,0);
  func_0x00f78a24(0x3d22a38);
  uVar9 = func_0x00f78aec();
  uVar11 = 0;
  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar9,lVar10);
  uVar14 = func_0x00f78a24(0x3d56a50);
  puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
  auVar22 = func_0x00f78ac0(uVar9,uVar14);
  puVar2 = auStack_b0;
  do {
    uVar18 = auVar22._8_8_;
    lVar15 = auVar22._0_8_;
    *(ulong *)(puVar2 + -0x20) = uVar9;
    *(long *)(puVar2 + -0x18) = lVar10;
    *(undefined1 ***)(puVar2 + -0x10) = ppuVar20;
    *(undefined **)(puVar2 + -8) = puVar21;
    ppuVar20 = (undefined1 **)(puVar2 + -0x10);
    if ((int)uVar11 == 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),4);
      uVar9 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar18);
code_r0x016cef70:
      if (*(long *)(lVar15 + 0x18) != 0) {
        *(undefined4 *)(*(long *)(lVar15 + 0x18) + 0x18) = *(undefined4 *)(lVar15 + 0x10);
        return uVar9;
      }
    }
    else if (lVar15 != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,*(undefined4 *)(lVar15 + 0x20),8);
      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar15,uVar18);
      if ((*(long *)(lVar15 + 0x18) != 0) &&
         (lVar10 = *(long *)(*(long *)(lVar15 + 0x18) + 0x10), lVar10 != 0)) {
        uVar18 = (ulong)(uint)(*(int *)(lVar10 + 0x18) - *(int *)(lVar15 + 0x10));
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,4,0);
        uVar9 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,uVar18);
        goto code_r0x016cef70;
      }
    }
    puVar21 = &FlatBuffers_FlatBufferBuilder__Finish;
    auVar22 = func_0x00f78af4();
    uVar11 = 0;
    puVar2 = puVar2 + -0x20;
    lVar10 = lVar15;
    uVar9 = uVar18;
  } while( true );
}



// ============================================================
// RVA: 0x1654c0c | Core.Networking.EventStanding.AddBattleScore
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_EventStanding__AddBattleScore
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
    uVar16 = 1;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,1,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutByte*/ func_0x016cdbcc(param_1,param_2);
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
  if ((bRam0000000003eb57f1 & 1) == 0) {
    func_0x00f78a20(0x3d3f080);
    bRam0000000003eb57f1 = 1;
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
    unaff_x20 = 5;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 5) {
        uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 5;
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
// RVA: 0x1654c30 | Core.Networking.EventStanding.EndEventStanding
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_EventStanding__EndEventStanding
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
  
  if ((bRam0000000003eb57f1 & 1) == 0) {
    func_0x00f78a20(0x3d3f080);
    bRam0000000003eb57f1 = 1;
  }
  if (param_1 == 0) {
    lVar15 = func_0x00f78af4();
    if (lVar15 == 0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
    uVar11 = 0;
    puVar20 = &stack0xffffffffffffffd0;
    lVar16 = 5;
    uVar10 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar15);
    if (*(long *)(lVar15 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar15 + 0x28) + 0x18) < 5) {
        uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
        *(undefined8 *)(lVar15 + 0x28) = uVar10;
      }
      *(undefined4 *)(lVar15 + 0x30) = 5;
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
// RVA: 0x1654c7c | Core.Networking.EventStanding.StartEventStanding
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Networking_EventStanding__StartEventStanding
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
  lVar7 = 5;
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 5) {
      uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,5);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
    }
    *(undefined4 *)(param_1 + 0x30) = 5;
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



