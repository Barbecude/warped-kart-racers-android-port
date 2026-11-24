// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Networking.SessionKartVisuals

// ============================================================
// RVA: 0x1653a54 | Core.Networking.SessionKartVisuals.__assign
// ============================================================

undefined1  [16]
Core_Networking_SessionKartVisuals____assign
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
// RVA: 0x1662060 | Core.Networking.SessionKartVisuals.get_ByteBuffer
// ============================================================

undefined8 Core_Networking_SessionKartVisuals__get_ByteBuffer(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// ============================================================
// RVA: 0x1662068 | Core.Networking.SessionKartVisuals.GetRootAsSessionKartVisuals
// ============================================================

undefined1  [16] Core_Networking_SessionKartVisuals__GetRootAsSessionKartVisuals(long param_1)

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
// RVA: 0x1662074 | Core.Networking.SessionKartVisuals.GetRootAsSessionKartVisuals
// ============================================================

undefined1  [16]
Core_Networking_SessionKartVisuals__GetRootAsSessionKartVisuals
          (long param_1,ulong param_2,undefined8 param_3)

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
// RVA: 0x16620b8 | Core.Networking.SessionKartVisuals.__init
// ============================================================

void Core_Networking_SessionKartVisuals____init
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



// ============================================================
// RVA: 0x16620c4 | Core.Networking.SessionKartVisuals.get_Character
// ============================================================

/* WARNING: Possible PIC construction at 0x016623b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01662410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016623fc) */
/* WARNING: Removing unreachable block (ram,0x016623e4) */
/* WARNING: Removing unreachable block (ram,0x016623cc) */
/* WARNING: Removing unreachable block (ram,0x016623b4) */
/* WARNING: Removing unreachable block (ram,0x01662414) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__get_Character
                (int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 *****pppppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined8 *****unaff_x29;
  undefined8 *****pppppuVar23;
  undefined8 *****pppppuVar24;
  undefined *unaff_x30;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_290 [4];
  undefined1 auStack_270 [12];
  int iStack_264;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 ****ppppuStack_240;
  undefined *puStack_238;
  ulong uStack_1f8;
  undefined8 ****appppuStack_1f0 [18];
  undefined8 ****ppppuStack_110;
  undefined *puStack_108;
  undefined8 ****ppppuStack_f0;
  undefined *puStack_e8;
  undefined8 ****ppppuStack_d0;
  undefined *puStack_c8;
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
  
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,4,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(param_1 + 2);
  if (lVar19 != 0) {
    iVar22 = *param_1 + (int)uVar11;
FlatBuffers_ByteBuffer__GetShort:
    *(undefined8 ******)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar22,2);
    return (ulong)(uint)(int)sVar5;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_SessionKartVisuals__get_Kart;
  ppppuStack_30 = (undefined8 ****)&stack0xfffffffffffffff0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,6,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = (undefined8 *****)ppppuStack_30;
    unaff_x30 = puStack_28;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Networking_SessionKartVisuals__get_Glider;
  ppppuStack_50 = &ppppuStack_30;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,8,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x29 = (undefined8 *****)ppppuStack_50;
    unaff_x30 = puStack_48;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_68 = &Core_Networking_SessionKartVisuals__get_Antenna;
  ppppuStack_70 = &ppppuStack_50;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,10,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    unaff_x29 = (undefined8 *****)ppppuStack_70;
    unaff_x30 = puStack_68;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_88 = &Core_Networking_SessionKartVisuals__get_Wheels;
  ppppuStack_90 = &ppppuStack_70;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0xc,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
    unaff_x29 = (undefined8 *****)ppppuStack_90;
    unaff_x30 = puStack_88;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_a8 = &Core_Networking_SessionKartVisuals__get_Extra1;
  ppppuStack_b0 = &ppppuStack_90;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0xe,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff60;
    unaff_x29 = (undefined8 *****)ppppuStack_b0;
    unaff_x30 = puStack_a8;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_c8 = &Core_Networking_SessionKartVisuals__get_Extra2;
  ppppuStack_d0 = &ppppuStack_b0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x10,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff40;
    unaff_x29 = (undefined8 *****)ppppuStack_d0;
    unaff_x30 = puStack_c8;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_e8 = &Core_Networking_SessionKartVisuals__get_Extra3;
  uVar17 = 0;
  ppppuStack_f0 = &ppppuStack_d0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x12);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff20;
    unaff_x29 = (undefined8 *****)ppppuStack_f0;
    unaff_x30 = puStack_e8;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  auVar26 = func_0x00f78af4();
  lVar19 = auVar26._0_8_;
  pppppuVar3 = (undefined8 *****)&stack0xfffffffffffffea0;
  puVar2 = &stack0xfffffffffffffea0;
  puStack_108 = &Core_Networking_SessionKartVisuals__CreateSessionKartVisuals;
  pppppuVar24 = &ppppuStack_110;
  ppppuStack_110 = &ppppuStack_f0;
  if (lVar19 != 0) {
    puVar25 = &UNK_016623b4;
    unaff_x21 = uVar17;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    lVar20 = auVar26._0_8_;
    uVar14 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = auVar26._8_8_;
    *(long *)(puVar2 + -0x18) = lVar19;
    *(undefined8 ******)(puVar2 + -0x10) = pppppuVar24;
    *(undefined **)(puVar2 + -8) = puVar25;
    puVar4 = puVar2 + -0x10;
    lVar19 = 8;
    uVar13 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar20);
    if (*(long *)(lVar20 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar20 + 0x28) + 0x18) < 8) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(lVar20 + 0x28) = uVar13;
      }
      *(undefined4 *)(lVar20 + 0x30) = 8;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
      *(int *)(lVar20 + 0x34) = (int)uVar11;
      return uVar11;
    }
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar27 = func_0x00f78af4();
    pppppuVar3 = (undefined8 *****)(puVar2 + -0x30);
    goto code_r0x016ce380;
  }
  puVar25 = &Core_Networking_SessionKartVisuals__AddExtra3;
  auVar26 = func_0x00f78af4();
  if (auVar26._0_8_ == 0) {
    pppppuVar3 = appppuStack_1f0 + 0x10;
    pppppuVar23 = appppuStack_1f0 + 0x10;
    appppuStack_1f0[0x11] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra3;
    puVar25 = &Core_Networking_SessionKartVisuals__AddExtra2;
    appppuStack_1f0[0x10] = pppppuVar24;
    auVar26 = func_0x00f78af4();
    if (auVar26._0_8_ == 0) {
      pppppuVar3 = appppuStack_1f0 + 0xe;
      pppppuVar23 = appppuStack_1f0 + 0xe;
      appppuStack_1f0[0xf] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra2;
      puVar25 = &Core_Networking_SessionKartVisuals__AddExtra1;
      appppuStack_1f0[0xe] = appppuStack_1f0 + 0x10;
      auVar26 = func_0x00f78af4();
      if (auVar26._0_8_ == 0) {
        pppppuVar3 = appppuStack_1f0 + 0xc;
        pppppuVar23 = appppuStack_1f0 + 0xc;
        appppuStack_1f0[0xd] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra1;
        puVar25 = &Core_Networking_SessionKartVisuals__AddWheels;
        appppuStack_1f0[0xc] = appppuStack_1f0 + 0xe;
        auVar26 = func_0x00f78af4();
        if (auVar26._0_8_ == 0) {
          pppppuVar3 = appppuStack_1f0 + 10;
          pppppuVar23 = appppuStack_1f0 + 10;
          appppuStack_1f0[0xb] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddWheels;
          puVar25 = &Core_Networking_SessionKartVisuals__AddAntenna;
          appppuStack_1f0[10] = appppuStack_1f0 + 0xc;
          auVar26 = func_0x00f78af4();
          if (auVar26._0_8_ == 0) {
            pppppuVar3 = appppuStack_1f0 + 8;
            pppppuVar23 = appppuStack_1f0 + 8;
            appppuStack_1f0[9] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddAntenna;
            puVar25 = &Core_Networking_SessionKartVisuals__AddGlider;
            appppuStack_1f0[8] = appppuStack_1f0 + 10;
            auVar26 = func_0x00f78af4();
            if (auVar26._0_8_ == 0) {
              pppppuVar3 = appppuStack_1f0 + 6;
              pppppuVar23 = appppuStack_1f0 + 6;
              appppuStack_1f0[7] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddGlider;
              puVar25 = &Core_Networking_SessionKartVisuals__AddKart;
              appppuStack_1f0[6] = appppuStack_1f0 + 8;
              auVar26 = func_0x00f78af4();
              if (auVar26._0_8_ == 0) {
                pppppuVar3 = appppuStack_1f0 + 4;
                pppppuVar23 = appppuStack_1f0 + 4;
                appppuStack_1f0[5] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddKart;
                puVar25 = &Core_Networking_SessionKartVisuals__AddCharacter;
                appppuStack_1f0[4] = appppuStack_1f0 + 6;
                auVar26 = func_0x00f78af4();
                if (auVar26._0_8_ == 0) {
                  appppuStack_1f0[3] =
                       (undefined8 ****)&Core_Networking_SessionKartVisuals__AddCharacter;
                  appppuStack_1f0[2] = appppuStack_1f0 + 4;
                  lVar19 = func_0x00f78af4();
                  puVar2 = &stack0xfffffffffffffe00;
                  appppuStack_1f0[1] =
                       (undefined8 ****)&Core_Networking_SessionKartVisuals__EndSessionKartVisuals;
                  pppppuVar24 = appppuStack_1f0;
                  appppuStack_1f0[0] = appppuStack_1f0 + 2;
                  if ((bRam0000000003eb5869 & 1) == 0) {
                    appppuStack_1f0[0] = appppuStack_1f0 + 2;
                    func_0x00f78a20(0x3d3f248);
                    bRam0000000003eb5869 = 1;
                  }
                  if (lVar19 == 0) {
                    puVar25 = &Core_Networking_SessionKartVisuals__StartSessionKartVisuals;
                    lVar19 = func_0x00f78af4();
                    auVar26._8_8_ = 0x3eb5000;
                    auVar26._0_8_ = lVar19;
                    if (lVar19 == 0) {
                      lVar19 = func_0x00f78af4();
                      return *(ulong *)(lVar19 + 8);
                    }
                    lVar19 = 0;
                    goto code_r0x016ce2a4;
                  }
                  uVar11 = 0x3eb5000;
                  if ((bRam0000000003eb5cd8 & 1) == 0) {
                    func_0x00f78a20(0x3d1f100,0);
                    bRam0000000003eb5cd8 = 1;
                  }
                  if (-1 < *(int *)(lVar19 + 0x30)) {
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,0);
                    uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                    unaff_x21 = (ulong)*(uint *)(lVar19 + 0x30);
                    uVar16 = *(uint *)(lVar19 + 0x30) - 1;
                    if (-2 < (int)uVar16) {
                      uVar16 = 0xffffffff;
                    }
                    unaff_x22 = (ulong)uVar16;
                    do {
                      uVar1 = (int)unaff_x21 - 1;
                      unaff_x21 = (ulong)uVar1;
                      iVar22 = (int)uVar11;
                      if ((int)uVar1 < 0) goto code_r0x016ceb30;
                      lVar20 = *(long *)(lVar19 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
                    } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
                    unaff_x22 = unaff_x21 + 8;
                    do {
                      uVar17 = unaff_x22 - 8;
                      if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
                      iVar9 = *(int *)(lVar20 + unaff_x22 * 4);
                      sVar5 = 0;
                      if (iVar9 != 0) {
                        sVar5 = (short)uVar11 - (short)iVar9;
                      }
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)sVar5);
                      lVar20 = *(long *)(lVar19 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
                      *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
                      unaff_x22 = unaff_x22 - 1;
                      uVar16 = uVar1;
                    } while (0 < (long)uVar17);
code_r0x016ceb30:
                    uVar8 = *(undefined4 *)(lVar19 + 0x34);
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)((short)uVar11 - (short)uVar8));
                    uVar16 = uVar16 * 2 + 6;
                    unaff_x21 = (ulong)uVar16;
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)uVar16);
                    unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                    if (0 < (int)*(uint *)(lVar19 + 0x40)) {
                      uVar17 = 0;
                      do {
                        lVar20 = *(long *)(lVar19 + 0x18);
                        if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                           (lVar21 = *(long *)(lVar19 + 0x38), lVar21 == 0)) goto code_r0x016ced84;
                        if (*(uint *)(lVar21 + 0x18) <= uVar17) goto code_r0x016ced88;
                        uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                                *(int *)(lVar21 + uVar17 * 4 + 0x20);
                        unaff_x21 = (ulong)uVar1;
                        uVar16 = *(uint *)(lVar19 + 0x10);
                        unaff_x22 = (ulong)uVar16;
                        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                        if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),unaff_x22,2);
                        if (sVar5 == sVar6) {
                          if (sVar5 < 3) {
code_r0x016cec64:
                            unaff_x21 = *(ulong *)(lVar19 + 0x38);
                            if (unaff_x21 == 0) goto code_r0x016ced84;
                            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar17) goto code_r0x016ced88;
                            iVar9 = *(int *)(unaff_x21 + uVar17 * 4 + 0x20);
                            if (iVar9 == 0) {
                              unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                              goto code_r0x016cecac;
                            }
                            unaff_x21 = *(ulong *)(lVar19 + 0x18);
                            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                            goto code_r0x016ced84;
                            iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar22;
                            *(int *)(lVar19 + 0x10) = iVar10;
                            iVar9 = iVar9 - iVar22;
                            goto code_r0x016ced3c;
                          }
                          iVar9 = 2;
                          while( true ) {
                            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar1 + iVar9,2);
                            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar16 + iVar9,2);
                            if (sVar6 != sVar7) break;
                            iVar9 = iVar9 + 2;
                            if (sVar5 <= iVar9) goto code_r0x016cec64;
                          }
                        }
                        uVar17 = uVar17 + 1;
                        unaff_x22 = (ulong)*(int *)(lVar19 + 0x40);
                      } while ((long)uVar17 < (long)unaff_x22);
                    }
                    unaff_x21 = *(ulong *)(lVar19 + 0x38);
                    if (unaff_x21 == 0) {
code_r0x016ced84:
                      func_0x00f78af4();
                    }
                    else {
code_r0x016cecac:
                      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                        lVar20 = *(long *)(lVar19 + 0x38);
                        if (lVar20 == 0) goto code_r0x016ced84;
                        /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                        *(ulong *)(lVar19 + 0x38) = unaff_x21;
                        unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                      }
                      uVar16 = (uint)unaff_x22;
                      *(uint *)(lVar19 + 0x40) = uVar16 + 1;
                      uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                      if (unaff_x21 == 0) goto code_r0x016ced84;
                      if (uVar16 < *(uint *)(unaff_x21 + 0x18)) {
                        *(undefined4 *)(unaff_x21 + (long)(int)uVar16 * 4 + 0x20) = uVar8;
                        unaff_x21 = *(ulong *)(lVar19 + 0x18);
                        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                          iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                          iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                          iVar10 = iVar10 - iVar22;
                          iVar9 = iVar9 - iVar22;
code_r0x016ced3c:
                          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                          *(undefined4 *)(lVar19 + 0x30) = 0xffffffff;
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
                  iVar22 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar14);
                  uVar14 = func_0x00f78a24(0x3d56a30);
                  auVar28 = func_0x00f78ac0(uVar13,uVar14);
                  puStack_238 = &FlatBuffers_FlatBufferBuilder__Required;
                  pppppuVar24 = &ppppuStack_240;
                  lVar19 = *(long *)(auVar28._0_8_ + 0x18);
                  iStack_264 = iVar22;
                  uStack_260 = unaff_x22;
                  uStack_258 = unaff_x21;
                  uStack_250 = uVar11;
                  uStack_248 = uVar13;
                  ppppuStack_240 = appppuStack_1f0;
                  if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
                    iVar9 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - auVar28._8_4_;
                    iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar9,4);
                    lVar19 = *(long *)(auVar28._0_8_ + 0x18);
                    if (lVar19 != 0) {
                      uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,(iVar9 - iVar10) + iVar22,2);
                      if ((uVar11 & 0xffff) != 0) {
                        return uVar11;
                      }
                      goto code_r0x016cee5c;
                    }
                  }
                  func_0x00f78af4();
code_r0x016cee5c:
                  uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_264,0);
                  uVar14 = func_0x00f78a24(0x3d6ce88);
                  uVar15 = func_0x00f78a24(0x3d66338);
                  lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar13,uVar15,0);
                  func_0x00f78a24(0x3d22a38);
                  uVar11 = func_0x00f78aec();
                  uVar14 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar19);
                  uVar13 = func_0x00f78a24(0x3d56a50);
                  puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
                  auVar26 = func_0x00f78ac0(uVar11,uVar13);
                  puVar4 = auStack_270;
                  do {
                    uVar17 = auVar26._8_8_;
                    lVar20 = auVar26._0_8_;
                    *(ulong *)(puVar4 + -0x20) = uVar11;
                    *(long *)(puVar4 + -0x18) = lVar19;
                    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
                    *(undefined **)(puVar4 + -8) = puVar25;
                    pppppuVar24 = (undefined8 *****)(puVar4 + -0x10);
                    if ((int)uVar14 == 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
                      uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar17);
code_r0x016cef70:
                      if (*(long *)(lVar20 + 0x18) != 0) {
                        *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) =
                             *(undefined4 *)(lVar20 + 0x10);
                        return uVar11;
                      }
                    }
                    else if (lVar20 != 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
                      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar17);
                      if ((*(long *)(lVar20 + 0x18) != 0) &&
                         (lVar19 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar19 != 0)) {
                        uVar17 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar20 + 0x10));
                        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                        uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar17);
                        goto code_r0x016cef70;
                      }
                    }
                    puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
                    auVar26 = func_0x00f78af4();
                    uVar14 = 0;
                    puVar4 = puVar4 + -0x20;
                    lVar19 = lVar20;
                    uVar11 = uVar17;
                  } while( true );
                }
                uVar13 = 0;
              }
              else {
                uVar13 = 1;
              }
            }
            else {
              uVar13 = 2;
            }
          }
          else {
            uVar13 = 3;
          }
        }
        else {
          uVar13 = 4;
        }
      }
      else {
        uVar13 = 5;
      }
    }
    else {
      uVar13 = 6;
    }
  }
  else {
    uVar13 = 7;
    pppppuVar23 = pppppuVar24;
  }
  uVar11 = auVar26._0_8_;
  auVar27._8_8_ = uVar13;
  auVar27._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)pppppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)pppppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)pppppuVar3 + -0x18) = piVar12;
  *(undefined8 ******)((long)pppppuVar3 + -0x10) = pppppuVar23;
  *(undefined **)((long)pppppuVar3 + -8) = puVar25;
  if ((auVar26._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar11,auVar26._8_8_);
  puVar4 = *(undefined1 **)((long)pppppuVar3 + -0x10);
  puVar25 = *(undefined **)((long)pppppuVar3 + -8);
  lVar19 = *(long *)((long)pppppuVar3 + -0x20);
  lVar20 = *(long *)((long)pppppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x30);
  uVar13 = *(undefined8 *)((long)pppppuVar3 + -0x28);
code_r0x016ce380:
  do {
    uVar15 = auVar27._8_8_;
    *(long *)((long)pppppuVar3 + -0x20) = lVar19;
    *(long *)((long)pppppuVar3 + -0x18) = lVar20;
    *(undefined1 **)((long)pppppuVar3 + -0x10) = puVar4;
    *(undefined **)((long)pppppuVar3 + -8) = puVar25;
    uVar16 = auVar27._8_4_;
    if ((int)uVar16 < *(int *)(auVar27._0_8_ + 0x30)) {
      lVar19 = *(long *)(auVar27._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar18 = uVar14;
      if (lVar19 == 0) goto code_r0x016ce410;
      if (uVar16 < *(uint *)(lVar19 + 0x18)) {
        *(int *)(lVar19 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar15 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar18 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar15,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar15,uVar14);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar14 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar14,0);
    uVar11 = auVar27._0_8_;
    *(ulong *)((long)pppppuVar3 + -0x50) = unaff_x22;
    *(undefined8 *)((long)pppppuVar3 + -0x48) = uVar13;
    *(long *)((long)pppppuVar3 + -0x40) = lVar19;
    *(undefined8 *)((long)pppppuVar3 + -0x38) = uVar15;
    *(undefined1 **)((long)pppppuVar3 + -0x30) = (undefined1 *)((long)pppppuVar3 + -0x10);
    *(undefined **)((long)pppppuVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar18 == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar18);
    puVar4 = *(undefined1 **)((long)pppppuVar3 + -0x30);
    puVar25 = *(undefined **)((long)pppppuVar3 + -0x28);
    lVar19 = *(long *)((long)pppppuVar3 + -0x40);
    lVar20 = *(long *)((long)pppppuVar3 + -0x38);
    unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x50);
    uVar13 = *(undefined8 *)((long)pppppuVar3 + -0x48);
    pppppuVar3 = (undefined8 *****)((long)pppppuVar3 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x1662118 | Core.Networking.SessionKartVisuals.get_Kart
// ============================================================

/* WARNING: Possible PIC construction at 0x016623b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01662410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016623fc) */
/* WARNING: Removing unreachable block (ram,0x016623e4) */
/* WARNING: Removing unreachable block (ram,0x016623cc) */
/* WARNING: Removing unreachable block (ram,0x016623b4) */
/* WARNING: Removing unreachable block (ram,0x01662414) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__get_Kart
                (int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 *****pppppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined8 *****unaff_x29;
  undefined8 *****pppppuVar23;
  undefined8 *****pppppuVar24;
  undefined *unaff_x30;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_270 [4];
  undefined1 auStack_250 [12];
  int iStack_244;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 ****ppppuStack_220;
  undefined *puStack_218;
  ulong uStack_1d8;
  undefined8 ****appppuStack_1d0 [18];
  undefined8 ****ppppuStack_f0;
  undefined *puStack_e8;
  undefined8 ****ppppuStack_d0;
  undefined *puStack_c8;
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
  
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,6,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(param_1 + 2);
  if (lVar19 != 0) {
    iVar22 = *param_1 + (int)uVar11;
FlatBuffers_ByteBuffer__GetShort:
    *(undefined8 ******)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar22,2);
    return (ulong)(uint)(int)sVar5;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_SessionKartVisuals__get_Glider;
  ppppuStack_30 = (undefined8 ****)&stack0xfffffffffffffff0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,8,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = (undefined8 *****)ppppuStack_30;
    unaff_x30 = puStack_28;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Networking_SessionKartVisuals__get_Antenna;
  ppppuStack_50 = &ppppuStack_30;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,10,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x29 = (undefined8 *****)ppppuStack_50;
    unaff_x30 = puStack_48;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_68 = &Core_Networking_SessionKartVisuals__get_Wheels;
  ppppuStack_70 = &ppppuStack_50;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0xc,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    unaff_x29 = (undefined8 *****)ppppuStack_70;
    unaff_x30 = puStack_68;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_88 = &Core_Networking_SessionKartVisuals__get_Extra1;
  ppppuStack_90 = &ppppuStack_70;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0xe,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
    unaff_x29 = (undefined8 *****)ppppuStack_90;
    unaff_x30 = puStack_88;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_a8 = &Core_Networking_SessionKartVisuals__get_Extra2;
  ppppuStack_b0 = &ppppuStack_90;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x10,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff60;
    unaff_x29 = (undefined8 *****)ppppuStack_b0;
    unaff_x30 = puStack_a8;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_c8 = &Core_Networking_SessionKartVisuals__get_Extra3;
  uVar17 = 0;
  ppppuStack_d0 = &ppppuStack_b0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x12);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff40;
    unaff_x29 = (undefined8 *****)ppppuStack_d0;
    unaff_x30 = puStack_c8;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  auVar26 = func_0x00f78af4();
  lVar19 = auVar26._0_8_;
  pppppuVar3 = (undefined8 *****)&stack0xfffffffffffffec0;
  puVar2 = &stack0xfffffffffffffec0;
  puStack_e8 = &Core_Networking_SessionKartVisuals__CreateSessionKartVisuals;
  pppppuVar24 = &ppppuStack_f0;
  ppppuStack_f0 = &ppppuStack_d0;
  if (lVar19 != 0) {
    puVar25 = &UNK_016623b4;
    unaff_x21 = uVar17;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    lVar20 = auVar26._0_8_;
    uVar14 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = auVar26._8_8_;
    *(long *)(puVar2 + -0x18) = lVar19;
    *(undefined8 ******)(puVar2 + -0x10) = pppppuVar24;
    *(undefined **)(puVar2 + -8) = puVar25;
    puVar4 = puVar2 + -0x10;
    lVar19 = 8;
    uVar13 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar20);
    if (*(long *)(lVar20 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar20 + 0x28) + 0x18) < 8) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(lVar20 + 0x28) = uVar13;
      }
      *(undefined4 *)(lVar20 + 0x30) = 8;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
      *(int *)(lVar20 + 0x34) = (int)uVar11;
      return uVar11;
    }
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar27 = func_0x00f78af4();
    pppppuVar3 = (undefined8 *****)(puVar2 + -0x30);
    goto code_r0x016ce380;
  }
  puVar25 = &Core_Networking_SessionKartVisuals__AddExtra3;
  auVar26 = func_0x00f78af4();
  if (auVar26._0_8_ == 0) {
    pppppuVar3 = appppuStack_1d0 + 0x10;
    pppppuVar23 = appppuStack_1d0 + 0x10;
    appppuStack_1d0[0x11] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra3;
    puVar25 = &Core_Networking_SessionKartVisuals__AddExtra2;
    appppuStack_1d0[0x10] = pppppuVar24;
    auVar26 = func_0x00f78af4();
    if (auVar26._0_8_ == 0) {
      pppppuVar3 = appppuStack_1d0 + 0xe;
      pppppuVar23 = appppuStack_1d0 + 0xe;
      appppuStack_1d0[0xf] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra2;
      puVar25 = &Core_Networking_SessionKartVisuals__AddExtra1;
      appppuStack_1d0[0xe] = appppuStack_1d0 + 0x10;
      auVar26 = func_0x00f78af4();
      if (auVar26._0_8_ == 0) {
        pppppuVar3 = appppuStack_1d0 + 0xc;
        pppppuVar23 = appppuStack_1d0 + 0xc;
        appppuStack_1d0[0xd] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra1;
        puVar25 = &Core_Networking_SessionKartVisuals__AddWheels;
        appppuStack_1d0[0xc] = appppuStack_1d0 + 0xe;
        auVar26 = func_0x00f78af4();
        if (auVar26._0_8_ == 0) {
          pppppuVar3 = appppuStack_1d0 + 10;
          pppppuVar23 = appppuStack_1d0 + 10;
          appppuStack_1d0[0xb] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddWheels;
          puVar25 = &Core_Networking_SessionKartVisuals__AddAntenna;
          appppuStack_1d0[10] = appppuStack_1d0 + 0xc;
          auVar26 = func_0x00f78af4();
          if (auVar26._0_8_ == 0) {
            pppppuVar3 = appppuStack_1d0 + 8;
            pppppuVar23 = appppuStack_1d0 + 8;
            appppuStack_1d0[9] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddAntenna;
            puVar25 = &Core_Networking_SessionKartVisuals__AddGlider;
            appppuStack_1d0[8] = appppuStack_1d0 + 10;
            auVar26 = func_0x00f78af4();
            if (auVar26._0_8_ == 0) {
              pppppuVar3 = appppuStack_1d0 + 6;
              pppppuVar23 = appppuStack_1d0 + 6;
              appppuStack_1d0[7] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddGlider;
              puVar25 = &Core_Networking_SessionKartVisuals__AddKart;
              appppuStack_1d0[6] = appppuStack_1d0 + 8;
              auVar26 = func_0x00f78af4();
              if (auVar26._0_8_ == 0) {
                pppppuVar3 = appppuStack_1d0 + 4;
                pppppuVar23 = appppuStack_1d0 + 4;
                appppuStack_1d0[5] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddKart;
                puVar25 = &Core_Networking_SessionKartVisuals__AddCharacter;
                appppuStack_1d0[4] = appppuStack_1d0 + 6;
                auVar26 = func_0x00f78af4();
                if (auVar26._0_8_ == 0) {
                  appppuStack_1d0[3] =
                       (undefined8 ****)&Core_Networking_SessionKartVisuals__AddCharacter;
                  appppuStack_1d0[2] = appppuStack_1d0 + 4;
                  lVar19 = func_0x00f78af4();
                  puVar2 = &stack0xfffffffffffffe20;
                  appppuStack_1d0[1] =
                       (undefined8 ****)&Core_Networking_SessionKartVisuals__EndSessionKartVisuals;
                  pppppuVar24 = appppuStack_1d0;
                  appppuStack_1d0[0] = appppuStack_1d0 + 2;
                  if ((bRam0000000003eb5869 & 1) == 0) {
                    appppuStack_1d0[0] = appppuStack_1d0 + 2;
                    func_0x00f78a20(0x3d3f248);
                    bRam0000000003eb5869 = 1;
                  }
                  if (lVar19 == 0) {
                    puVar25 = &Core_Networking_SessionKartVisuals__StartSessionKartVisuals;
                    lVar19 = func_0x00f78af4();
                    auVar26._8_8_ = 0x3eb5000;
                    auVar26._0_8_ = lVar19;
                    if (lVar19 == 0) {
                      lVar19 = func_0x00f78af4();
                      return *(ulong *)(lVar19 + 8);
                    }
                    lVar19 = 0;
                    goto code_r0x016ce2a4;
                  }
                  uVar11 = 0x3eb5000;
                  if ((bRam0000000003eb5cd8 & 1) == 0) {
                    func_0x00f78a20(0x3d1f100,0);
                    bRam0000000003eb5cd8 = 1;
                  }
                  if (-1 < *(int *)(lVar19 + 0x30)) {
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,0);
                    uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                    unaff_x21 = (ulong)*(uint *)(lVar19 + 0x30);
                    uVar16 = *(uint *)(lVar19 + 0x30) - 1;
                    if (-2 < (int)uVar16) {
                      uVar16 = 0xffffffff;
                    }
                    unaff_x22 = (ulong)uVar16;
                    do {
                      uVar1 = (int)unaff_x21 - 1;
                      unaff_x21 = (ulong)uVar1;
                      iVar22 = (int)uVar11;
                      if ((int)uVar1 < 0) goto code_r0x016ceb30;
                      lVar20 = *(long *)(lVar19 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
                    } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
                    unaff_x22 = unaff_x21 + 8;
                    do {
                      uVar17 = unaff_x22 - 8;
                      if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
                      iVar9 = *(int *)(lVar20 + unaff_x22 * 4);
                      sVar5 = 0;
                      if (iVar9 != 0) {
                        sVar5 = (short)uVar11 - (short)iVar9;
                      }
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)sVar5);
                      lVar20 = *(long *)(lVar19 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
                      *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
                      unaff_x22 = unaff_x22 - 1;
                      uVar16 = uVar1;
                    } while (0 < (long)uVar17);
code_r0x016ceb30:
                    uVar8 = *(undefined4 *)(lVar19 + 0x34);
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)((short)uVar11 - (short)uVar8));
                    uVar16 = uVar16 * 2 + 6;
                    unaff_x21 = (ulong)uVar16;
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)uVar16);
                    unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                    if (0 < (int)*(uint *)(lVar19 + 0x40)) {
                      uVar17 = 0;
                      do {
                        lVar20 = *(long *)(lVar19 + 0x18);
                        if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                           (lVar21 = *(long *)(lVar19 + 0x38), lVar21 == 0)) goto code_r0x016ced84;
                        if (*(uint *)(lVar21 + 0x18) <= uVar17) goto code_r0x016ced88;
                        uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                                *(int *)(lVar21 + uVar17 * 4 + 0x20);
                        unaff_x21 = (ulong)uVar1;
                        uVar16 = *(uint *)(lVar19 + 0x10);
                        unaff_x22 = (ulong)uVar16;
                        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                        if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),unaff_x22,2);
                        if (sVar5 == sVar6) {
                          if (sVar5 < 3) {
code_r0x016cec64:
                            unaff_x21 = *(ulong *)(lVar19 + 0x38);
                            if (unaff_x21 == 0) goto code_r0x016ced84;
                            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar17) goto code_r0x016ced88;
                            iVar9 = *(int *)(unaff_x21 + uVar17 * 4 + 0x20);
                            if (iVar9 == 0) {
                              unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                              goto code_r0x016cecac;
                            }
                            unaff_x21 = *(ulong *)(lVar19 + 0x18);
                            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                            goto code_r0x016ced84;
                            iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar22;
                            *(int *)(lVar19 + 0x10) = iVar10;
                            iVar9 = iVar9 - iVar22;
                            goto code_r0x016ced3c;
                          }
                          iVar9 = 2;
                          while( true ) {
                            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar1 + iVar9,2);
                            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar16 + iVar9,2);
                            if (sVar6 != sVar7) break;
                            iVar9 = iVar9 + 2;
                            if (sVar5 <= iVar9) goto code_r0x016cec64;
                          }
                        }
                        uVar17 = uVar17 + 1;
                        unaff_x22 = (ulong)*(int *)(lVar19 + 0x40);
                      } while ((long)uVar17 < (long)unaff_x22);
                    }
                    unaff_x21 = *(ulong *)(lVar19 + 0x38);
                    if (unaff_x21 == 0) {
code_r0x016ced84:
                      func_0x00f78af4();
                    }
                    else {
code_r0x016cecac:
                      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                        lVar20 = *(long *)(lVar19 + 0x38);
                        if (lVar20 == 0) goto code_r0x016ced84;
                        /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                        *(ulong *)(lVar19 + 0x38) = unaff_x21;
                        unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                      }
                      uVar16 = (uint)unaff_x22;
                      *(uint *)(lVar19 + 0x40) = uVar16 + 1;
                      uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                      if (unaff_x21 == 0) goto code_r0x016ced84;
                      if (uVar16 < *(uint *)(unaff_x21 + 0x18)) {
                        *(undefined4 *)(unaff_x21 + (long)(int)uVar16 * 4 + 0x20) = uVar8;
                        unaff_x21 = *(ulong *)(lVar19 + 0x18);
                        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                          iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                          iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                          iVar10 = iVar10 - iVar22;
                          iVar9 = iVar9 - iVar22;
code_r0x016ced3c:
                          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                          *(undefined4 *)(lVar19 + 0x30) = 0xffffffff;
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
                  iVar22 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar14);
                  uVar14 = func_0x00f78a24(0x3d56a30);
                  auVar28 = func_0x00f78ac0(uVar13,uVar14);
                  puStack_218 = &FlatBuffers_FlatBufferBuilder__Required;
                  pppppuVar24 = &ppppuStack_220;
                  lVar19 = *(long *)(auVar28._0_8_ + 0x18);
                  iStack_244 = iVar22;
                  uStack_240 = unaff_x22;
                  uStack_238 = unaff_x21;
                  uStack_230 = uVar11;
                  uStack_228 = uVar13;
                  ppppuStack_220 = appppuStack_1d0;
                  if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
                    iVar9 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - auVar28._8_4_;
                    iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar9,4);
                    lVar19 = *(long *)(auVar28._0_8_ + 0x18);
                    if (lVar19 != 0) {
                      uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,(iVar9 - iVar10) + iVar22,2);
                      if ((uVar11 & 0xffff) != 0) {
                        return uVar11;
                      }
                      goto code_r0x016cee5c;
                    }
                  }
                  func_0x00f78af4();
code_r0x016cee5c:
                  uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_244,0);
                  uVar14 = func_0x00f78a24(0x3d6ce88);
                  uVar15 = func_0x00f78a24(0x3d66338);
                  lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar13,uVar15,0);
                  func_0x00f78a24(0x3d22a38);
                  uVar11 = func_0x00f78aec();
                  uVar14 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar19);
                  uVar13 = func_0x00f78a24(0x3d56a50);
                  puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
                  auVar26 = func_0x00f78ac0(uVar11,uVar13);
                  puVar4 = auStack_250;
                  do {
                    uVar17 = auVar26._8_8_;
                    lVar20 = auVar26._0_8_;
                    *(ulong *)(puVar4 + -0x20) = uVar11;
                    *(long *)(puVar4 + -0x18) = lVar19;
                    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
                    *(undefined **)(puVar4 + -8) = puVar25;
                    pppppuVar24 = (undefined8 *****)(puVar4 + -0x10);
                    if ((int)uVar14 == 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
                      uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar17);
code_r0x016cef70:
                      if (*(long *)(lVar20 + 0x18) != 0) {
                        *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) =
                             *(undefined4 *)(lVar20 + 0x10);
                        return uVar11;
                      }
                    }
                    else if (lVar20 != 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
                      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar17);
                      if ((*(long *)(lVar20 + 0x18) != 0) &&
                         (lVar19 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar19 != 0)) {
                        uVar17 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar20 + 0x10));
                        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                        uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar17);
                        goto code_r0x016cef70;
                      }
                    }
                    puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
                    auVar26 = func_0x00f78af4();
                    uVar14 = 0;
                    puVar4 = puVar4 + -0x20;
                    lVar19 = lVar20;
                    uVar11 = uVar17;
                  } while( true );
                }
                uVar13 = 0;
              }
              else {
                uVar13 = 1;
              }
            }
            else {
              uVar13 = 2;
            }
          }
          else {
            uVar13 = 3;
          }
        }
        else {
          uVar13 = 4;
        }
      }
      else {
        uVar13 = 5;
      }
    }
    else {
      uVar13 = 6;
    }
  }
  else {
    uVar13 = 7;
    pppppuVar23 = pppppuVar24;
  }
  uVar11 = auVar26._0_8_;
  auVar27._8_8_ = uVar13;
  auVar27._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)pppppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)pppppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)pppppuVar3 + -0x18) = piVar12;
  *(undefined8 ******)((long)pppppuVar3 + -0x10) = pppppuVar23;
  *(undefined **)((long)pppppuVar3 + -8) = puVar25;
  if ((auVar26._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar11,auVar26._8_8_);
  puVar4 = *(undefined1 **)((long)pppppuVar3 + -0x10);
  puVar25 = *(undefined **)((long)pppppuVar3 + -8);
  lVar19 = *(long *)((long)pppppuVar3 + -0x20);
  lVar20 = *(long *)((long)pppppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x30);
  uVar13 = *(undefined8 *)((long)pppppuVar3 + -0x28);
code_r0x016ce380:
  do {
    uVar15 = auVar27._8_8_;
    *(long *)((long)pppppuVar3 + -0x20) = lVar19;
    *(long *)((long)pppppuVar3 + -0x18) = lVar20;
    *(undefined1 **)((long)pppppuVar3 + -0x10) = puVar4;
    *(undefined **)((long)pppppuVar3 + -8) = puVar25;
    uVar16 = auVar27._8_4_;
    if ((int)uVar16 < *(int *)(auVar27._0_8_ + 0x30)) {
      lVar19 = *(long *)(auVar27._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar18 = uVar14;
      if (lVar19 == 0) goto code_r0x016ce410;
      if (uVar16 < *(uint *)(lVar19 + 0x18)) {
        *(int *)(lVar19 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar15 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar18 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar15,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar15,uVar14);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar14 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar14,0);
    uVar11 = auVar27._0_8_;
    *(ulong *)((long)pppppuVar3 + -0x50) = unaff_x22;
    *(undefined8 *)((long)pppppuVar3 + -0x48) = uVar13;
    *(long *)((long)pppppuVar3 + -0x40) = lVar19;
    *(undefined8 *)((long)pppppuVar3 + -0x38) = uVar15;
    *(undefined1 **)((long)pppppuVar3 + -0x30) = (undefined1 *)((long)pppppuVar3 + -0x10);
    *(undefined **)((long)pppppuVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar18 == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar18);
    puVar4 = *(undefined1 **)((long)pppppuVar3 + -0x30);
    puVar25 = *(undefined **)((long)pppppuVar3 + -0x28);
    lVar19 = *(long *)((long)pppppuVar3 + -0x40);
    lVar20 = *(long *)((long)pppppuVar3 + -0x38);
    unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x50);
    uVar13 = *(undefined8 *)((long)pppppuVar3 + -0x48);
    pppppuVar3 = (undefined8 *****)((long)pppppuVar3 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x166216c | Core.Networking.SessionKartVisuals.get_Glider
// ============================================================

/* WARNING: Possible PIC construction at 0x016623b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01662410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016623fc) */
/* WARNING: Removing unreachable block (ram,0x016623e4) */
/* WARNING: Removing unreachable block (ram,0x016623cc) */
/* WARNING: Removing unreachable block (ram,0x016623b4) */
/* WARNING: Removing unreachable block (ram,0x01662414) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__get_Glider
                (int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 *****pppppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined8 *****unaff_x29;
  undefined8 *****pppppuVar23;
  undefined8 *****pppppuVar24;
  undefined *unaff_x30;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_250 [4];
  undefined1 auStack_230 [12];
  int iStack_224;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 ****ppppuStack_200;
  undefined *puStack_1f8;
  ulong uStack_1b8;
  undefined8 ****appppuStack_1b0 [18];
  undefined8 ****ppppuStack_d0;
  undefined *puStack_c8;
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
  
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,8,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(param_1 + 2);
  if (lVar19 != 0) {
    iVar22 = *param_1 + (int)uVar11;
FlatBuffers_ByteBuffer__GetShort:
    *(undefined8 ******)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar22,2);
    return (ulong)(uint)(int)sVar5;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_SessionKartVisuals__get_Antenna;
  ppppuStack_30 = (undefined8 ****)&stack0xfffffffffffffff0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,10,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = (undefined8 *****)ppppuStack_30;
    unaff_x30 = puStack_28;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Networking_SessionKartVisuals__get_Wheels;
  ppppuStack_50 = &ppppuStack_30;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0xc,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x29 = (undefined8 *****)ppppuStack_50;
    unaff_x30 = puStack_48;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_68 = &Core_Networking_SessionKartVisuals__get_Extra1;
  ppppuStack_70 = &ppppuStack_50;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0xe,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    unaff_x29 = (undefined8 *****)ppppuStack_70;
    unaff_x30 = puStack_68;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_88 = &Core_Networking_SessionKartVisuals__get_Extra2;
  ppppuStack_90 = &ppppuStack_70;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x10,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
    unaff_x29 = (undefined8 *****)ppppuStack_90;
    unaff_x30 = puStack_88;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_a8 = &Core_Networking_SessionKartVisuals__get_Extra3;
  uVar17 = 0;
  ppppuStack_b0 = &ppppuStack_90;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x12);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff60;
    unaff_x29 = (undefined8 *****)ppppuStack_b0;
    unaff_x30 = puStack_a8;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  auVar26 = func_0x00f78af4();
  lVar19 = auVar26._0_8_;
  pppppuVar3 = (undefined8 *****)&stack0xfffffffffffffee0;
  puVar2 = &stack0xfffffffffffffee0;
  puStack_c8 = &Core_Networking_SessionKartVisuals__CreateSessionKartVisuals;
  pppppuVar24 = &ppppuStack_d0;
  ppppuStack_d0 = &ppppuStack_b0;
  if (lVar19 != 0) {
    puVar25 = &UNK_016623b4;
    unaff_x21 = uVar17;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    lVar20 = auVar26._0_8_;
    uVar14 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = auVar26._8_8_;
    *(long *)(puVar2 + -0x18) = lVar19;
    *(undefined8 ******)(puVar2 + -0x10) = pppppuVar24;
    *(undefined **)(puVar2 + -8) = puVar25;
    puVar4 = puVar2 + -0x10;
    lVar19 = 8;
    uVar13 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar20);
    if (*(long *)(lVar20 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar20 + 0x28) + 0x18) < 8) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(lVar20 + 0x28) = uVar13;
      }
      *(undefined4 *)(lVar20 + 0x30) = 8;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
      *(int *)(lVar20 + 0x34) = (int)uVar11;
      return uVar11;
    }
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar27 = func_0x00f78af4();
    pppppuVar3 = (undefined8 *****)(puVar2 + -0x30);
    goto code_r0x016ce380;
  }
  puVar25 = &Core_Networking_SessionKartVisuals__AddExtra3;
  auVar26 = func_0x00f78af4();
  if (auVar26._0_8_ == 0) {
    pppppuVar3 = appppuStack_1b0 + 0x10;
    pppppuVar23 = appppuStack_1b0 + 0x10;
    appppuStack_1b0[0x11] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra3;
    puVar25 = &Core_Networking_SessionKartVisuals__AddExtra2;
    appppuStack_1b0[0x10] = pppppuVar24;
    auVar26 = func_0x00f78af4();
    if (auVar26._0_8_ == 0) {
      pppppuVar3 = appppuStack_1b0 + 0xe;
      pppppuVar23 = appppuStack_1b0 + 0xe;
      appppuStack_1b0[0xf] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra2;
      puVar25 = &Core_Networking_SessionKartVisuals__AddExtra1;
      appppuStack_1b0[0xe] = appppuStack_1b0 + 0x10;
      auVar26 = func_0x00f78af4();
      if (auVar26._0_8_ == 0) {
        pppppuVar3 = appppuStack_1b0 + 0xc;
        pppppuVar23 = appppuStack_1b0 + 0xc;
        appppuStack_1b0[0xd] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra1;
        puVar25 = &Core_Networking_SessionKartVisuals__AddWheels;
        appppuStack_1b0[0xc] = appppuStack_1b0 + 0xe;
        auVar26 = func_0x00f78af4();
        if (auVar26._0_8_ == 0) {
          pppppuVar3 = appppuStack_1b0 + 10;
          pppppuVar23 = appppuStack_1b0 + 10;
          appppuStack_1b0[0xb] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddWheels;
          puVar25 = &Core_Networking_SessionKartVisuals__AddAntenna;
          appppuStack_1b0[10] = appppuStack_1b0 + 0xc;
          auVar26 = func_0x00f78af4();
          if (auVar26._0_8_ == 0) {
            pppppuVar3 = appppuStack_1b0 + 8;
            pppppuVar23 = appppuStack_1b0 + 8;
            appppuStack_1b0[9] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddAntenna;
            puVar25 = &Core_Networking_SessionKartVisuals__AddGlider;
            appppuStack_1b0[8] = appppuStack_1b0 + 10;
            auVar26 = func_0x00f78af4();
            if (auVar26._0_8_ == 0) {
              pppppuVar3 = appppuStack_1b0 + 6;
              pppppuVar23 = appppuStack_1b0 + 6;
              appppuStack_1b0[7] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddGlider;
              puVar25 = &Core_Networking_SessionKartVisuals__AddKart;
              appppuStack_1b0[6] = appppuStack_1b0 + 8;
              auVar26 = func_0x00f78af4();
              if (auVar26._0_8_ == 0) {
                pppppuVar3 = appppuStack_1b0 + 4;
                pppppuVar23 = appppuStack_1b0 + 4;
                appppuStack_1b0[5] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddKart;
                puVar25 = &Core_Networking_SessionKartVisuals__AddCharacter;
                appppuStack_1b0[4] = appppuStack_1b0 + 6;
                auVar26 = func_0x00f78af4();
                if (auVar26._0_8_ == 0) {
                  appppuStack_1b0[3] =
                       (undefined8 ****)&Core_Networking_SessionKartVisuals__AddCharacter;
                  appppuStack_1b0[2] = appppuStack_1b0 + 4;
                  lVar19 = func_0x00f78af4();
                  puVar2 = &stack0xfffffffffffffe40;
                  appppuStack_1b0[1] =
                       (undefined8 ****)&Core_Networking_SessionKartVisuals__EndSessionKartVisuals;
                  pppppuVar24 = appppuStack_1b0;
                  appppuStack_1b0[0] = appppuStack_1b0 + 2;
                  if ((bRam0000000003eb5869 & 1) == 0) {
                    appppuStack_1b0[0] = appppuStack_1b0 + 2;
                    func_0x00f78a20(0x3d3f248);
                    bRam0000000003eb5869 = 1;
                  }
                  if (lVar19 == 0) {
                    puVar25 = &Core_Networking_SessionKartVisuals__StartSessionKartVisuals;
                    lVar19 = func_0x00f78af4();
                    auVar26._8_8_ = 0x3eb5000;
                    auVar26._0_8_ = lVar19;
                    if (lVar19 == 0) {
                      lVar19 = func_0x00f78af4();
                      return *(ulong *)(lVar19 + 8);
                    }
                    lVar19 = 0;
                    goto code_r0x016ce2a4;
                  }
                  uVar11 = 0x3eb5000;
                  if ((bRam0000000003eb5cd8 & 1) == 0) {
                    func_0x00f78a20(0x3d1f100,0);
                    bRam0000000003eb5cd8 = 1;
                  }
                  if (-1 < *(int *)(lVar19 + 0x30)) {
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,0);
                    uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                    unaff_x21 = (ulong)*(uint *)(lVar19 + 0x30);
                    uVar16 = *(uint *)(lVar19 + 0x30) - 1;
                    if (-2 < (int)uVar16) {
                      uVar16 = 0xffffffff;
                    }
                    unaff_x22 = (ulong)uVar16;
                    do {
                      uVar1 = (int)unaff_x21 - 1;
                      unaff_x21 = (ulong)uVar1;
                      iVar22 = (int)uVar11;
                      if ((int)uVar1 < 0) goto code_r0x016ceb30;
                      lVar20 = *(long *)(lVar19 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
                    } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
                    unaff_x22 = unaff_x21 + 8;
                    do {
                      uVar17 = unaff_x22 - 8;
                      if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
                      iVar9 = *(int *)(lVar20 + unaff_x22 * 4);
                      sVar5 = 0;
                      if (iVar9 != 0) {
                        sVar5 = (short)uVar11 - (short)iVar9;
                      }
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)sVar5);
                      lVar20 = *(long *)(lVar19 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
                      *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
                      unaff_x22 = unaff_x22 - 1;
                      uVar16 = uVar1;
                    } while (0 < (long)uVar17);
code_r0x016ceb30:
                    uVar8 = *(undefined4 *)(lVar19 + 0x34);
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)((short)uVar11 - (short)uVar8));
                    uVar16 = uVar16 * 2 + 6;
                    unaff_x21 = (ulong)uVar16;
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)uVar16);
                    unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                    if (0 < (int)*(uint *)(lVar19 + 0x40)) {
                      uVar17 = 0;
                      do {
                        lVar20 = *(long *)(lVar19 + 0x18);
                        if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                           (lVar21 = *(long *)(lVar19 + 0x38), lVar21 == 0)) goto code_r0x016ced84;
                        if (*(uint *)(lVar21 + 0x18) <= uVar17) goto code_r0x016ced88;
                        uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                                *(int *)(lVar21 + uVar17 * 4 + 0x20);
                        unaff_x21 = (ulong)uVar1;
                        uVar16 = *(uint *)(lVar19 + 0x10);
                        unaff_x22 = (ulong)uVar16;
                        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                        if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),unaff_x22,2);
                        if (sVar5 == sVar6) {
                          if (sVar5 < 3) {
code_r0x016cec64:
                            unaff_x21 = *(ulong *)(lVar19 + 0x38);
                            if (unaff_x21 == 0) goto code_r0x016ced84;
                            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar17) goto code_r0x016ced88;
                            iVar9 = *(int *)(unaff_x21 + uVar17 * 4 + 0x20);
                            if (iVar9 == 0) {
                              unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                              goto code_r0x016cecac;
                            }
                            unaff_x21 = *(ulong *)(lVar19 + 0x18);
                            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                            goto code_r0x016ced84;
                            iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar22;
                            *(int *)(lVar19 + 0x10) = iVar10;
                            iVar9 = iVar9 - iVar22;
                            goto code_r0x016ced3c;
                          }
                          iVar9 = 2;
                          while( true ) {
                            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar1 + iVar9,2);
                            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar16 + iVar9,2);
                            if (sVar6 != sVar7) break;
                            iVar9 = iVar9 + 2;
                            if (sVar5 <= iVar9) goto code_r0x016cec64;
                          }
                        }
                        uVar17 = uVar17 + 1;
                        unaff_x22 = (ulong)*(int *)(lVar19 + 0x40);
                      } while ((long)uVar17 < (long)unaff_x22);
                    }
                    unaff_x21 = *(ulong *)(lVar19 + 0x38);
                    if (unaff_x21 == 0) {
code_r0x016ced84:
                      func_0x00f78af4();
                    }
                    else {
code_r0x016cecac:
                      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                        lVar20 = *(long *)(lVar19 + 0x38);
                        if (lVar20 == 0) goto code_r0x016ced84;
                        /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                        *(ulong *)(lVar19 + 0x38) = unaff_x21;
                        unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                      }
                      uVar16 = (uint)unaff_x22;
                      *(uint *)(lVar19 + 0x40) = uVar16 + 1;
                      uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                      if (unaff_x21 == 0) goto code_r0x016ced84;
                      if (uVar16 < *(uint *)(unaff_x21 + 0x18)) {
                        *(undefined4 *)(unaff_x21 + (long)(int)uVar16 * 4 + 0x20) = uVar8;
                        unaff_x21 = *(ulong *)(lVar19 + 0x18);
                        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                          iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                          iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                          iVar10 = iVar10 - iVar22;
                          iVar9 = iVar9 - iVar22;
code_r0x016ced3c:
                          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                          *(undefined4 *)(lVar19 + 0x30) = 0xffffffff;
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
                  iVar22 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar14);
                  uVar14 = func_0x00f78a24(0x3d56a30);
                  auVar28 = func_0x00f78ac0(uVar13,uVar14);
                  puStack_1f8 = &FlatBuffers_FlatBufferBuilder__Required;
                  pppppuVar24 = &ppppuStack_200;
                  lVar19 = *(long *)(auVar28._0_8_ + 0x18);
                  iStack_224 = iVar22;
                  uStack_220 = unaff_x22;
                  uStack_218 = unaff_x21;
                  uStack_210 = uVar11;
                  uStack_208 = uVar13;
                  ppppuStack_200 = appppuStack_1b0;
                  if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
                    iVar9 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - auVar28._8_4_;
                    iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar9,4);
                    lVar19 = *(long *)(auVar28._0_8_ + 0x18);
                    if (lVar19 != 0) {
                      uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,(iVar9 - iVar10) + iVar22,2);
                      if ((uVar11 & 0xffff) != 0) {
                        return uVar11;
                      }
                      goto code_r0x016cee5c;
                    }
                  }
                  func_0x00f78af4();
code_r0x016cee5c:
                  uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_224,0);
                  uVar14 = func_0x00f78a24(0x3d6ce88);
                  uVar15 = func_0x00f78a24(0x3d66338);
                  lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar13,uVar15,0);
                  func_0x00f78a24(0x3d22a38);
                  uVar11 = func_0x00f78aec();
                  uVar14 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar19);
                  uVar13 = func_0x00f78a24(0x3d56a50);
                  puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
                  auVar26 = func_0x00f78ac0(uVar11,uVar13);
                  puVar4 = auStack_230;
                  do {
                    uVar17 = auVar26._8_8_;
                    lVar20 = auVar26._0_8_;
                    *(ulong *)(puVar4 + -0x20) = uVar11;
                    *(long *)(puVar4 + -0x18) = lVar19;
                    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
                    *(undefined **)(puVar4 + -8) = puVar25;
                    pppppuVar24 = (undefined8 *****)(puVar4 + -0x10);
                    if ((int)uVar14 == 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
                      uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar17);
code_r0x016cef70:
                      if (*(long *)(lVar20 + 0x18) != 0) {
                        *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) =
                             *(undefined4 *)(lVar20 + 0x10);
                        return uVar11;
                      }
                    }
                    else if (lVar20 != 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
                      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar17);
                      if ((*(long *)(lVar20 + 0x18) != 0) &&
                         (lVar19 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar19 != 0)) {
                        uVar17 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar20 + 0x10));
                        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                        uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar17);
                        goto code_r0x016cef70;
                      }
                    }
                    puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
                    auVar26 = func_0x00f78af4();
                    uVar14 = 0;
                    puVar4 = puVar4 + -0x20;
                    lVar19 = lVar20;
                    uVar11 = uVar17;
                  } while( true );
                }
                uVar13 = 0;
              }
              else {
                uVar13 = 1;
              }
            }
            else {
              uVar13 = 2;
            }
          }
          else {
            uVar13 = 3;
          }
        }
        else {
          uVar13 = 4;
        }
      }
      else {
        uVar13 = 5;
      }
    }
    else {
      uVar13 = 6;
    }
  }
  else {
    uVar13 = 7;
    pppppuVar23 = pppppuVar24;
  }
  uVar11 = auVar26._0_8_;
  auVar27._8_8_ = uVar13;
  auVar27._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)pppppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)pppppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)pppppuVar3 + -0x18) = piVar12;
  *(undefined8 ******)((long)pppppuVar3 + -0x10) = pppppuVar23;
  *(undefined **)((long)pppppuVar3 + -8) = puVar25;
  if ((auVar26._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar11,auVar26._8_8_);
  puVar4 = *(undefined1 **)((long)pppppuVar3 + -0x10);
  puVar25 = *(undefined **)((long)pppppuVar3 + -8);
  lVar19 = *(long *)((long)pppppuVar3 + -0x20);
  lVar20 = *(long *)((long)pppppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x30);
  uVar13 = *(undefined8 *)((long)pppppuVar3 + -0x28);
code_r0x016ce380:
  do {
    uVar15 = auVar27._8_8_;
    *(long *)((long)pppppuVar3 + -0x20) = lVar19;
    *(long *)((long)pppppuVar3 + -0x18) = lVar20;
    *(undefined1 **)((long)pppppuVar3 + -0x10) = puVar4;
    *(undefined **)((long)pppppuVar3 + -8) = puVar25;
    uVar16 = auVar27._8_4_;
    if ((int)uVar16 < *(int *)(auVar27._0_8_ + 0x30)) {
      lVar19 = *(long *)(auVar27._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar18 = uVar14;
      if (lVar19 == 0) goto code_r0x016ce410;
      if (uVar16 < *(uint *)(lVar19 + 0x18)) {
        *(int *)(lVar19 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar15 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar18 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar15,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar15,uVar14);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar14 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar14,0);
    uVar11 = auVar27._0_8_;
    *(ulong *)((long)pppppuVar3 + -0x50) = unaff_x22;
    *(undefined8 *)((long)pppppuVar3 + -0x48) = uVar13;
    *(long *)((long)pppppuVar3 + -0x40) = lVar19;
    *(undefined8 *)((long)pppppuVar3 + -0x38) = uVar15;
    *(undefined1 **)((long)pppppuVar3 + -0x30) = (undefined1 *)((long)pppppuVar3 + -0x10);
    *(undefined **)((long)pppppuVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar18 == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar18);
    puVar4 = *(undefined1 **)((long)pppppuVar3 + -0x30);
    puVar25 = *(undefined **)((long)pppppuVar3 + -0x28);
    lVar19 = *(long *)((long)pppppuVar3 + -0x40);
    lVar20 = *(long *)((long)pppppuVar3 + -0x38);
    unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x50);
    uVar13 = *(undefined8 *)((long)pppppuVar3 + -0x48);
    pppppuVar3 = (undefined8 *****)((long)pppppuVar3 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x16621c0 | Core.Networking.SessionKartVisuals.get_Antenna
// ============================================================

/* WARNING: Possible PIC construction at 0x016623b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01662410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016623fc) */
/* WARNING: Removing unreachable block (ram,0x016623e4) */
/* WARNING: Removing unreachable block (ram,0x016623cc) */
/* WARNING: Removing unreachable block (ram,0x016623b4) */
/* WARNING: Removing unreachable block (ram,0x01662414) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__get_Antenna
                (int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 *****pppppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined8 *****unaff_x29;
  undefined8 *****pppppuVar23;
  undefined8 *****pppppuVar24;
  undefined *unaff_x30;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_230 [4];
  undefined1 auStack_210 [12];
  int iStack_204;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ****ppppuStack_1e0;
  undefined *puStack_1d8;
  ulong uStack_198;
  undefined8 ****appppuStack_190 [18];
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
  
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,10,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(param_1 + 2);
  if (lVar19 != 0) {
    iVar22 = *param_1 + (int)uVar11;
FlatBuffers_ByteBuffer__GetShort:
    *(undefined8 ******)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar22,2);
    return (ulong)(uint)(int)sVar5;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_SessionKartVisuals__get_Wheels;
  ppppuStack_30 = (undefined8 ****)&stack0xfffffffffffffff0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0xc,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = (undefined8 *****)ppppuStack_30;
    unaff_x30 = puStack_28;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Networking_SessionKartVisuals__get_Extra1;
  ppppuStack_50 = &ppppuStack_30;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0xe,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x29 = (undefined8 *****)ppppuStack_50;
    unaff_x30 = puStack_48;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_68 = &Core_Networking_SessionKartVisuals__get_Extra2;
  ppppuStack_70 = &ppppuStack_50;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x10,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    unaff_x29 = (undefined8 *****)ppppuStack_70;
    unaff_x30 = puStack_68;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_88 = &Core_Networking_SessionKartVisuals__get_Extra3;
  uVar17 = 0;
  ppppuStack_90 = &ppppuStack_70;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x12);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
    unaff_x29 = (undefined8 *****)ppppuStack_90;
    unaff_x30 = puStack_88;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  auVar26 = func_0x00f78af4();
  lVar19 = auVar26._0_8_;
  pppppuVar3 = (undefined8 *****)&stack0xffffffffffffff00;
  puVar2 = &stack0xffffffffffffff00;
  puStack_a8 = &Core_Networking_SessionKartVisuals__CreateSessionKartVisuals;
  pppppuVar24 = &ppppuStack_b0;
  ppppuStack_b0 = &ppppuStack_90;
  if (lVar19 != 0) {
    puVar25 = &UNK_016623b4;
    unaff_x21 = uVar17;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    lVar20 = auVar26._0_8_;
    uVar14 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = auVar26._8_8_;
    *(long *)(puVar2 + -0x18) = lVar19;
    *(undefined8 ******)(puVar2 + -0x10) = pppppuVar24;
    *(undefined **)(puVar2 + -8) = puVar25;
    puVar4 = puVar2 + -0x10;
    lVar19 = 8;
    uVar13 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar20);
    if (*(long *)(lVar20 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar20 + 0x28) + 0x18) < 8) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(lVar20 + 0x28) = uVar13;
      }
      *(undefined4 *)(lVar20 + 0x30) = 8;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
      *(int *)(lVar20 + 0x34) = (int)uVar11;
      return uVar11;
    }
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar27 = func_0x00f78af4();
    pppppuVar3 = (undefined8 *****)(puVar2 + -0x30);
    goto code_r0x016ce380;
  }
  puVar25 = &Core_Networking_SessionKartVisuals__AddExtra3;
  auVar26 = func_0x00f78af4();
  if (auVar26._0_8_ == 0) {
    pppppuVar3 = appppuStack_190 + 0x10;
    pppppuVar23 = appppuStack_190 + 0x10;
    appppuStack_190[0x11] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra3;
    puVar25 = &Core_Networking_SessionKartVisuals__AddExtra2;
    appppuStack_190[0x10] = pppppuVar24;
    auVar26 = func_0x00f78af4();
    if (auVar26._0_8_ == 0) {
      pppppuVar3 = appppuStack_190 + 0xe;
      pppppuVar23 = appppuStack_190 + 0xe;
      appppuStack_190[0xf] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra2;
      puVar25 = &Core_Networking_SessionKartVisuals__AddExtra1;
      appppuStack_190[0xe] = appppuStack_190 + 0x10;
      auVar26 = func_0x00f78af4();
      if (auVar26._0_8_ == 0) {
        pppppuVar3 = appppuStack_190 + 0xc;
        pppppuVar23 = appppuStack_190 + 0xc;
        appppuStack_190[0xd] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra1;
        puVar25 = &Core_Networking_SessionKartVisuals__AddWheels;
        appppuStack_190[0xc] = appppuStack_190 + 0xe;
        auVar26 = func_0x00f78af4();
        if (auVar26._0_8_ == 0) {
          pppppuVar3 = appppuStack_190 + 10;
          pppppuVar23 = appppuStack_190 + 10;
          appppuStack_190[0xb] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddWheels;
          puVar25 = &Core_Networking_SessionKartVisuals__AddAntenna;
          appppuStack_190[10] = appppuStack_190 + 0xc;
          auVar26 = func_0x00f78af4();
          if (auVar26._0_8_ == 0) {
            pppppuVar3 = appppuStack_190 + 8;
            pppppuVar23 = appppuStack_190 + 8;
            appppuStack_190[9] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddAntenna;
            puVar25 = &Core_Networking_SessionKartVisuals__AddGlider;
            appppuStack_190[8] = appppuStack_190 + 10;
            auVar26 = func_0x00f78af4();
            if (auVar26._0_8_ == 0) {
              pppppuVar3 = appppuStack_190 + 6;
              pppppuVar23 = appppuStack_190 + 6;
              appppuStack_190[7] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddGlider;
              puVar25 = &Core_Networking_SessionKartVisuals__AddKart;
              appppuStack_190[6] = appppuStack_190 + 8;
              auVar26 = func_0x00f78af4();
              if (auVar26._0_8_ == 0) {
                pppppuVar3 = appppuStack_190 + 4;
                pppppuVar23 = appppuStack_190 + 4;
                appppuStack_190[5] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddKart;
                puVar25 = &Core_Networking_SessionKartVisuals__AddCharacter;
                appppuStack_190[4] = appppuStack_190 + 6;
                auVar26 = func_0x00f78af4();
                if (auVar26._0_8_ == 0) {
                  appppuStack_190[3] =
                       (undefined8 ****)&Core_Networking_SessionKartVisuals__AddCharacter;
                  appppuStack_190[2] = appppuStack_190 + 4;
                  lVar19 = func_0x00f78af4();
                  puVar2 = &stack0xfffffffffffffe60;
                  appppuStack_190[1] =
                       (undefined8 ****)&Core_Networking_SessionKartVisuals__EndSessionKartVisuals;
                  pppppuVar24 = appppuStack_190;
                  appppuStack_190[0] = appppuStack_190 + 2;
                  if ((bRam0000000003eb5869 & 1) == 0) {
                    appppuStack_190[0] = appppuStack_190 + 2;
                    func_0x00f78a20(0x3d3f248);
                    bRam0000000003eb5869 = 1;
                  }
                  if (lVar19 == 0) {
                    puVar25 = &Core_Networking_SessionKartVisuals__StartSessionKartVisuals;
                    lVar19 = func_0x00f78af4();
                    auVar26._8_8_ = 0x3eb5000;
                    auVar26._0_8_ = lVar19;
                    if (lVar19 == 0) {
                      lVar19 = func_0x00f78af4();
                      return *(ulong *)(lVar19 + 8);
                    }
                    lVar19 = 0;
                    goto code_r0x016ce2a4;
                  }
                  uVar11 = 0x3eb5000;
                  if ((bRam0000000003eb5cd8 & 1) == 0) {
                    func_0x00f78a20(0x3d1f100,0);
                    bRam0000000003eb5cd8 = 1;
                  }
                  if (-1 < *(int *)(lVar19 + 0x30)) {
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,0);
                    uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                    unaff_x21 = (ulong)*(uint *)(lVar19 + 0x30);
                    uVar16 = *(uint *)(lVar19 + 0x30) - 1;
                    if (-2 < (int)uVar16) {
                      uVar16 = 0xffffffff;
                    }
                    unaff_x22 = (ulong)uVar16;
                    do {
                      uVar1 = (int)unaff_x21 - 1;
                      unaff_x21 = (ulong)uVar1;
                      iVar22 = (int)uVar11;
                      if ((int)uVar1 < 0) goto code_r0x016ceb30;
                      lVar20 = *(long *)(lVar19 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
                    } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
                    unaff_x22 = unaff_x21 + 8;
                    do {
                      uVar17 = unaff_x22 - 8;
                      if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
                      iVar9 = *(int *)(lVar20 + unaff_x22 * 4);
                      sVar5 = 0;
                      if (iVar9 != 0) {
                        sVar5 = (short)uVar11 - (short)iVar9;
                      }
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)sVar5);
                      lVar20 = *(long *)(lVar19 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
                      *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
                      unaff_x22 = unaff_x22 - 1;
                      uVar16 = uVar1;
                    } while (0 < (long)uVar17);
code_r0x016ceb30:
                    uVar8 = *(undefined4 *)(lVar19 + 0x34);
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)((short)uVar11 - (short)uVar8));
                    uVar16 = uVar16 * 2 + 6;
                    unaff_x21 = (ulong)uVar16;
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)uVar16);
                    unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                    if (0 < (int)*(uint *)(lVar19 + 0x40)) {
                      uVar17 = 0;
                      do {
                        lVar20 = *(long *)(lVar19 + 0x18);
                        if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                           (lVar21 = *(long *)(lVar19 + 0x38), lVar21 == 0)) goto code_r0x016ced84;
                        if (*(uint *)(lVar21 + 0x18) <= uVar17) goto code_r0x016ced88;
                        uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                                *(int *)(lVar21 + uVar17 * 4 + 0x20);
                        unaff_x21 = (ulong)uVar1;
                        uVar16 = *(uint *)(lVar19 + 0x10);
                        unaff_x22 = (ulong)uVar16;
                        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                        if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),unaff_x22,2);
                        if (sVar5 == sVar6) {
                          if (sVar5 < 3) {
code_r0x016cec64:
                            unaff_x21 = *(ulong *)(lVar19 + 0x38);
                            if (unaff_x21 == 0) goto code_r0x016ced84;
                            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar17) goto code_r0x016ced88;
                            iVar9 = *(int *)(unaff_x21 + uVar17 * 4 + 0x20);
                            if (iVar9 == 0) {
                              unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                              goto code_r0x016cecac;
                            }
                            unaff_x21 = *(ulong *)(lVar19 + 0x18);
                            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                            goto code_r0x016ced84;
                            iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar22;
                            *(int *)(lVar19 + 0x10) = iVar10;
                            iVar9 = iVar9 - iVar22;
                            goto code_r0x016ced3c;
                          }
                          iVar9 = 2;
                          while( true ) {
                            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar1 + iVar9,2);
                            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar16 + iVar9,2);
                            if (sVar6 != sVar7) break;
                            iVar9 = iVar9 + 2;
                            if (sVar5 <= iVar9) goto code_r0x016cec64;
                          }
                        }
                        uVar17 = uVar17 + 1;
                        unaff_x22 = (ulong)*(int *)(lVar19 + 0x40);
                      } while ((long)uVar17 < (long)unaff_x22);
                    }
                    unaff_x21 = *(ulong *)(lVar19 + 0x38);
                    if (unaff_x21 == 0) {
code_r0x016ced84:
                      func_0x00f78af4();
                    }
                    else {
code_r0x016cecac:
                      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                        lVar20 = *(long *)(lVar19 + 0x38);
                        if (lVar20 == 0) goto code_r0x016ced84;
                        /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                        *(ulong *)(lVar19 + 0x38) = unaff_x21;
                        unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                      }
                      uVar16 = (uint)unaff_x22;
                      *(uint *)(lVar19 + 0x40) = uVar16 + 1;
                      uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                      if (unaff_x21 == 0) goto code_r0x016ced84;
                      if (uVar16 < *(uint *)(unaff_x21 + 0x18)) {
                        *(undefined4 *)(unaff_x21 + (long)(int)uVar16 * 4 + 0x20) = uVar8;
                        unaff_x21 = *(ulong *)(lVar19 + 0x18);
                        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                          iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                          iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                          iVar10 = iVar10 - iVar22;
                          iVar9 = iVar9 - iVar22;
code_r0x016ced3c:
                          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                          *(undefined4 *)(lVar19 + 0x30) = 0xffffffff;
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
                  iVar22 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar14);
                  uVar14 = func_0x00f78a24(0x3d56a30);
                  auVar28 = func_0x00f78ac0(uVar13,uVar14);
                  puStack_1d8 = &FlatBuffers_FlatBufferBuilder__Required;
                  pppppuVar24 = &ppppuStack_1e0;
                  lVar19 = *(long *)(auVar28._0_8_ + 0x18);
                  iStack_204 = iVar22;
                  uStack_200 = unaff_x22;
                  uStack_1f8 = unaff_x21;
                  uStack_1f0 = uVar11;
                  uStack_1e8 = uVar13;
                  ppppuStack_1e0 = appppuStack_190;
                  if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
                    iVar9 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - auVar28._8_4_;
                    iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar9,4);
                    lVar19 = *(long *)(auVar28._0_8_ + 0x18);
                    if (lVar19 != 0) {
                      uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,(iVar9 - iVar10) + iVar22,2);
                      if ((uVar11 & 0xffff) != 0) {
                        return uVar11;
                      }
                      goto code_r0x016cee5c;
                    }
                  }
                  func_0x00f78af4();
code_r0x016cee5c:
                  uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_204,0);
                  uVar14 = func_0x00f78a24(0x3d6ce88);
                  uVar15 = func_0x00f78a24(0x3d66338);
                  lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar13,uVar15,0);
                  func_0x00f78a24(0x3d22a38);
                  uVar11 = func_0x00f78aec();
                  uVar14 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar19);
                  uVar13 = func_0x00f78a24(0x3d56a50);
                  puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
                  auVar26 = func_0x00f78ac0(uVar11,uVar13);
                  puVar4 = auStack_210;
                  do {
                    uVar17 = auVar26._8_8_;
                    lVar20 = auVar26._0_8_;
                    *(ulong *)(puVar4 + -0x20) = uVar11;
                    *(long *)(puVar4 + -0x18) = lVar19;
                    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
                    *(undefined **)(puVar4 + -8) = puVar25;
                    pppppuVar24 = (undefined8 *****)(puVar4 + -0x10);
                    if ((int)uVar14 == 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
                      uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar17);
code_r0x016cef70:
                      if (*(long *)(lVar20 + 0x18) != 0) {
                        *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) =
                             *(undefined4 *)(lVar20 + 0x10);
                        return uVar11;
                      }
                    }
                    else if (lVar20 != 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
                      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar17);
                      if ((*(long *)(lVar20 + 0x18) != 0) &&
                         (lVar19 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar19 != 0)) {
                        uVar17 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar20 + 0x10));
                        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                        uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar17);
                        goto code_r0x016cef70;
                      }
                    }
                    puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
                    auVar26 = func_0x00f78af4();
                    uVar14 = 0;
                    puVar4 = puVar4 + -0x20;
                    lVar19 = lVar20;
                    uVar11 = uVar17;
                  } while( true );
                }
                uVar13 = 0;
              }
              else {
                uVar13 = 1;
              }
            }
            else {
              uVar13 = 2;
            }
          }
          else {
            uVar13 = 3;
          }
        }
        else {
          uVar13 = 4;
        }
      }
      else {
        uVar13 = 5;
      }
    }
    else {
      uVar13 = 6;
    }
  }
  else {
    uVar13 = 7;
    pppppuVar23 = pppppuVar24;
  }
  uVar11 = auVar26._0_8_;
  auVar27._8_8_ = uVar13;
  auVar27._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)pppppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)pppppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)pppppuVar3 + -0x18) = piVar12;
  *(undefined8 ******)((long)pppppuVar3 + -0x10) = pppppuVar23;
  *(undefined **)((long)pppppuVar3 + -8) = puVar25;
  if ((auVar26._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar11,auVar26._8_8_);
  puVar4 = *(undefined1 **)((long)pppppuVar3 + -0x10);
  puVar25 = *(undefined **)((long)pppppuVar3 + -8);
  lVar19 = *(long *)((long)pppppuVar3 + -0x20);
  lVar20 = *(long *)((long)pppppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x30);
  uVar13 = *(undefined8 *)((long)pppppuVar3 + -0x28);
code_r0x016ce380:
  do {
    uVar15 = auVar27._8_8_;
    *(long *)((long)pppppuVar3 + -0x20) = lVar19;
    *(long *)((long)pppppuVar3 + -0x18) = lVar20;
    *(undefined1 **)((long)pppppuVar3 + -0x10) = puVar4;
    *(undefined **)((long)pppppuVar3 + -8) = puVar25;
    uVar16 = auVar27._8_4_;
    if ((int)uVar16 < *(int *)(auVar27._0_8_ + 0x30)) {
      lVar19 = *(long *)(auVar27._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar18 = uVar14;
      if (lVar19 == 0) goto code_r0x016ce410;
      if (uVar16 < *(uint *)(lVar19 + 0x18)) {
        *(int *)(lVar19 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar15 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar18 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar15,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar15,uVar14);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar14 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar14,0);
    uVar11 = auVar27._0_8_;
    *(ulong *)((long)pppppuVar3 + -0x50) = unaff_x22;
    *(undefined8 *)((long)pppppuVar3 + -0x48) = uVar13;
    *(long *)((long)pppppuVar3 + -0x40) = lVar19;
    *(undefined8 *)((long)pppppuVar3 + -0x38) = uVar15;
    *(undefined1 **)((long)pppppuVar3 + -0x30) = (undefined1 *)((long)pppppuVar3 + -0x10);
    *(undefined **)((long)pppppuVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar18 == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar18);
    puVar4 = *(undefined1 **)((long)pppppuVar3 + -0x30);
    puVar25 = *(undefined **)((long)pppppuVar3 + -0x28);
    lVar19 = *(long *)((long)pppppuVar3 + -0x40);
    lVar20 = *(long *)((long)pppppuVar3 + -0x38);
    unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x50);
    uVar13 = *(undefined8 *)((long)pppppuVar3 + -0x48);
    pppppuVar3 = (undefined8 *****)((long)pppppuVar3 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x1662214 | Core.Networking.SessionKartVisuals.get_Wheels
// ============================================================

/* WARNING: Possible PIC construction at 0x016623b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01662410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016623fc) */
/* WARNING: Removing unreachable block (ram,0x016623e4) */
/* WARNING: Removing unreachable block (ram,0x016623cc) */
/* WARNING: Removing unreachable block (ram,0x016623b4) */
/* WARNING: Removing unreachable block (ram,0x01662414) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__get_Wheels
                (int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 *****pppppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined8 *****unaff_x29;
  undefined8 *****pppppuVar23;
  undefined8 *****pppppuVar24;
  undefined *unaff_x30;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_210 [4];
  undefined1 auStack_1f0 [12];
  int iStack_1e4;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ****ppppuStack_1c0;
  undefined *puStack_1b8;
  ulong uStack_178;
  undefined8 ****appppuStack_170 [18];
  undefined8 ****ppppuStack_90;
  undefined *puStack_88;
  undefined8 ****ppppuStack_70;
  undefined *puStack_68;
  undefined8 ****ppppuStack_50;
  undefined *puStack_48;
  undefined8 ****ppppuStack_30;
  undefined *puStack_28;
  
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0xc,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(param_1 + 2);
  if (lVar19 != 0) {
    iVar22 = *param_1 + (int)uVar11;
FlatBuffers_ByteBuffer__GetShort:
    *(undefined8 ******)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar22,2);
    return (ulong)(uint)(int)sVar5;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_SessionKartVisuals__get_Extra1;
  ppppuStack_30 = (undefined8 ****)&stack0xfffffffffffffff0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0xe,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = (undefined8 *****)ppppuStack_30;
    unaff_x30 = puStack_28;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Networking_SessionKartVisuals__get_Extra2;
  ppppuStack_50 = &ppppuStack_30;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x10,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x29 = (undefined8 *****)ppppuStack_50;
    unaff_x30 = puStack_48;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_68 = &Core_Networking_SessionKartVisuals__get_Extra3;
  uVar17 = 0;
  ppppuStack_70 = &ppppuStack_50;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x12);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
    unaff_x29 = (undefined8 *****)ppppuStack_70;
    unaff_x30 = puStack_68;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  auVar26 = func_0x00f78af4();
  lVar19 = auVar26._0_8_;
  pppppuVar3 = (undefined8 *****)&stack0xffffffffffffff20;
  puVar2 = &stack0xffffffffffffff20;
  puStack_88 = &Core_Networking_SessionKartVisuals__CreateSessionKartVisuals;
  pppppuVar24 = &ppppuStack_90;
  ppppuStack_90 = &ppppuStack_70;
  if (lVar19 != 0) {
    puVar25 = &UNK_016623b4;
    unaff_x21 = uVar17;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    lVar20 = auVar26._0_8_;
    uVar14 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = auVar26._8_8_;
    *(long *)(puVar2 + -0x18) = lVar19;
    *(undefined8 ******)(puVar2 + -0x10) = pppppuVar24;
    *(undefined **)(puVar2 + -8) = puVar25;
    puVar4 = puVar2 + -0x10;
    lVar19 = 8;
    uVar13 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar20);
    if (*(long *)(lVar20 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar20 + 0x28) + 0x18) < 8) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(lVar20 + 0x28) = uVar13;
      }
      *(undefined4 *)(lVar20 + 0x30) = 8;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
      *(int *)(lVar20 + 0x34) = (int)uVar11;
      return uVar11;
    }
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar27 = func_0x00f78af4();
    pppppuVar3 = (undefined8 *****)(puVar2 + -0x30);
    goto code_r0x016ce380;
  }
  puVar25 = &Core_Networking_SessionKartVisuals__AddExtra3;
  auVar26 = func_0x00f78af4();
  if (auVar26._0_8_ == 0) {
    pppppuVar3 = appppuStack_170 + 0x10;
    pppppuVar23 = appppuStack_170 + 0x10;
    appppuStack_170[0x11] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra3;
    puVar25 = &Core_Networking_SessionKartVisuals__AddExtra2;
    appppuStack_170[0x10] = pppppuVar24;
    auVar26 = func_0x00f78af4();
    if (auVar26._0_8_ == 0) {
      pppppuVar3 = appppuStack_170 + 0xe;
      pppppuVar23 = appppuStack_170 + 0xe;
      appppuStack_170[0xf] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra2;
      puVar25 = &Core_Networking_SessionKartVisuals__AddExtra1;
      appppuStack_170[0xe] = appppuStack_170 + 0x10;
      auVar26 = func_0x00f78af4();
      if (auVar26._0_8_ == 0) {
        pppppuVar3 = appppuStack_170 + 0xc;
        pppppuVar23 = appppuStack_170 + 0xc;
        appppuStack_170[0xd] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra1;
        puVar25 = &Core_Networking_SessionKartVisuals__AddWheels;
        appppuStack_170[0xc] = appppuStack_170 + 0xe;
        auVar26 = func_0x00f78af4();
        if (auVar26._0_8_ == 0) {
          pppppuVar3 = appppuStack_170 + 10;
          pppppuVar23 = appppuStack_170 + 10;
          appppuStack_170[0xb] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddWheels;
          puVar25 = &Core_Networking_SessionKartVisuals__AddAntenna;
          appppuStack_170[10] = appppuStack_170 + 0xc;
          auVar26 = func_0x00f78af4();
          if (auVar26._0_8_ == 0) {
            pppppuVar3 = appppuStack_170 + 8;
            pppppuVar23 = appppuStack_170 + 8;
            appppuStack_170[9] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddAntenna;
            puVar25 = &Core_Networking_SessionKartVisuals__AddGlider;
            appppuStack_170[8] = appppuStack_170 + 10;
            auVar26 = func_0x00f78af4();
            if (auVar26._0_8_ == 0) {
              pppppuVar3 = appppuStack_170 + 6;
              pppppuVar23 = appppuStack_170 + 6;
              appppuStack_170[7] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddGlider;
              puVar25 = &Core_Networking_SessionKartVisuals__AddKart;
              appppuStack_170[6] = appppuStack_170 + 8;
              auVar26 = func_0x00f78af4();
              if (auVar26._0_8_ == 0) {
                pppppuVar3 = appppuStack_170 + 4;
                pppppuVar23 = appppuStack_170 + 4;
                appppuStack_170[5] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddKart;
                puVar25 = &Core_Networking_SessionKartVisuals__AddCharacter;
                appppuStack_170[4] = appppuStack_170 + 6;
                auVar26 = func_0x00f78af4();
                if (auVar26._0_8_ == 0) {
                  appppuStack_170[3] =
                       (undefined8 ****)&Core_Networking_SessionKartVisuals__AddCharacter;
                  appppuStack_170[2] = appppuStack_170 + 4;
                  lVar19 = func_0x00f78af4();
                  puVar2 = &stack0xfffffffffffffe80;
                  appppuStack_170[1] =
                       (undefined8 ****)&Core_Networking_SessionKartVisuals__EndSessionKartVisuals;
                  pppppuVar24 = appppuStack_170;
                  appppuStack_170[0] = appppuStack_170 + 2;
                  if ((bRam0000000003eb5869 & 1) == 0) {
                    appppuStack_170[0] = appppuStack_170 + 2;
                    func_0x00f78a20(0x3d3f248);
                    bRam0000000003eb5869 = 1;
                  }
                  if (lVar19 == 0) {
                    puVar25 = &Core_Networking_SessionKartVisuals__StartSessionKartVisuals;
                    lVar19 = func_0x00f78af4();
                    auVar26._8_8_ = 0x3eb5000;
                    auVar26._0_8_ = lVar19;
                    if (lVar19 == 0) {
                      lVar19 = func_0x00f78af4();
                      return *(ulong *)(lVar19 + 8);
                    }
                    lVar19 = 0;
                    goto code_r0x016ce2a4;
                  }
                  uVar11 = 0x3eb5000;
                  if ((bRam0000000003eb5cd8 & 1) == 0) {
                    func_0x00f78a20(0x3d1f100,0);
                    bRam0000000003eb5cd8 = 1;
                  }
                  if (-1 < *(int *)(lVar19 + 0x30)) {
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,0);
                    uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                    unaff_x21 = (ulong)*(uint *)(lVar19 + 0x30);
                    uVar16 = *(uint *)(lVar19 + 0x30) - 1;
                    if (-2 < (int)uVar16) {
                      uVar16 = 0xffffffff;
                    }
                    unaff_x22 = (ulong)uVar16;
                    do {
                      uVar1 = (int)unaff_x21 - 1;
                      unaff_x21 = (ulong)uVar1;
                      iVar22 = (int)uVar11;
                      if ((int)uVar1 < 0) goto code_r0x016ceb30;
                      lVar20 = *(long *)(lVar19 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
                    } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
                    unaff_x22 = unaff_x21 + 8;
                    do {
                      uVar17 = unaff_x22 - 8;
                      if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
                      iVar9 = *(int *)(lVar20 + unaff_x22 * 4);
                      sVar5 = 0;
                      if (iVar9 != 0) {
                        sVar5 = (short)uVar11 - (short)iVar9;
                      }
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)sVar5);
                      lVar20 = *(long *)(lVar19 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
                      *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
                      unaff_x22 = unaff_x22 - 1;
                      uVar16 = uVar1;
                    } while (0 < (long)uVar17);
code_r0x016ceb30:
                    uVar8 = *(undefined4 *)(lVar19 + 0x34);
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)((short)uVar11 - (short)uVar8));
                    uVar16 = uVar16 * 2 + 6;
                    unaff_x21 = (ulong)uVar16;
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)uVar16);
                    unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                    if (0 < (int)*(uint *)(lVar19 + 0x40)) {
                      uVar17 = 0;
                      do {
                        lVar20 = *(long *)(lVar19 + 0x18);
                        if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                           (lVar21 = *(long *)(lVar19 + 0x38), lVar21 == 0)) goto code_r0x016ced84;
                        if (*(uint *)(lVar21 + 0x18) <= uVar17) goto code_r0x016ced88;
                        uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                                *(int *)(lVar21 + uVar17 * 4 + 0x20);
                        unaff_x21 = (ulong)uVar1;
                        uVar16 = *(uint *)(lVar19 + 0x10);
                        unaff_x22 = (ulong)uVar16;
                        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                        if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),unaff_x22,2);
                        if (sVar5 == sVar6) {
                          if (sVar5 < 3) {
code_r0x016cec64:
                            unaff_x21 = *(ulong *)(lVar19 + 0x38);
                            if (unaff_x21 == 0) goto code_r0x016ced84;
                            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar17) goto code_r0x016ced88;
                            iVar9 = *(int *)(unaff_x21 + uVar17 * 4 + 0x20);
                            if (iVar9 == 0) {
                              unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                              goto code_r0x016cecac;
                            }
                            unaff_x21 = *(ulong *)(lVar19 + 0x18);
                            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                            goto code_r0x016ced84;
                            iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar22;
                            *(int *)(lVar19 + 0x10) = iVar10;
                            iVar9 = iVar9 - iVar22;
                            goto code_r0x016ced3c;
                          }
                          iVar9 = 2;
                          while( true ) {
                            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar1 + iVar9,2);
                            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar16 + iVar9,2);
                            if (sVar6 != sVar7) break;
                            iVar9 = iVar9 + 2;
                            if (sVar5 <= iVar9) goto code_r0x016cec64;
                          }
                        }
                        uVar17 = uVar17 + 1;
                        unaff_x22 = (ulong)*(int *)(lVar19 + 0x40);
                      } while ((long)uVar17 < (long)unaff_x22);
                    }
                    unaff_x21 = *(ulong *)(lVar19 + 0x38);
                    if (unaff_x21 == 0) {
code_r0x016ced84:
                      func_0x00f78af4();
                    }
                    else {
code_r0x016cecac:
                      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                        lVar20 = *(long *)(lVar19 + 0x38);
                        if (lVar20 == 0) goto code_r0x016ced84;
                        /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                        *(ulong *)(lVar19 + 0x38) = unaff_x21;
                        unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                      }
                      uVar16 = (uint)unaff_x22;
                      *(uint *)(lVar19 + 0x40) = uVar16 + 1;
                      uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                      if (unaff_x21 == 0) goto code_r0x016ced84;
                      if (uVar16 < *(uint *)(unaff_x21 + 0x18)) {
                        *(undefined4 *)(unaff_x21 + (long)(int)uVar16 * 4 + 0x20) = uVar8;
                        unaff_x21 = *(ulong *)(lVar19 + 0x18);
                        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                          iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                          iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                          iVar10 = iVar10 - iVar22;
                          iVar9 = iVar9 - iVar22;
code_r0x016ced3c:
                          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                          *(undefined4 *)(lVar19 + 0x30) = 0xffffffff;
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
                  iVar22 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar14);
                  uVar14 = func_0x00f78a24(0x3d56a30);
                  auVar28 = func_0x00f78ac0(uVar13,uVar14);
                  puStack_1b8 = &FlatBuffers_FlatBufferBuilder__Required;
                  pppppuVar24 = &ppppuStack_1c0;
                  lVar19 = *(long *)(auVar28._0_8_ + 0x18);
                  iStack_1e4 = iVar22;
                  uStack_1e0 = unaff_x22;
                  uStack_1d8 = unaff_x21;
                  uStack_1d0 = uVar11;
                  uStack_1c8 = uVar13;
                  ppppuStack_1c0 = appppuStack_170;
                  if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
                    iVar9 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - auVar28._8_4_;
                    iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar9,4);
                    lVar19 = *(long *)(auVar28._0_8_ + 0x18);
                    if (lVar19 != 0) {
                      uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,(iVar9 - iVar10) + iVar22,2);
                      if ((uVar11 & 0xffff) != 0) {
                        return uVar11;
                      }
                      goto code_r0x016cee5c;
                    }
                  }
                  func_0x00f78af4();
code_r0x016cee5c:
                  uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_1e4,0);
                  uVar14 = func_0x00f78a24(0x3d6ce88);
                  uVar15 = func_0x00f78a24(0x3d66338);
                  lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar13,uVar15,0);
                  func_0x00f78a24(0x3d22a38);
                  uVar11 = func_0x00f78aec();
                  uVar14 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar19);
                  uVar13 = func_0x00f78a24(0x3d56a50);
                  puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
                  auVar26 = func_0x00f78ac0(uVar11,uVar13);
                  puVar4 = auStack_1f0;
                  do {
                    uVar17 = auVar26._8_8_;
                    lVar20 = auVar26._0_8_;
                    *(ulong *)(puVar4 + -0x20) = uVar11;
                    *(long *)(puVar4 + -0x18) = lVar19;
                    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
                    *(undefined **)(puVar4 + -8) = puVar25;
                    pppppuVar24 = (undefined8 *****)(puVar4 + -0x10);
                    if ((int)uVar14 == 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
                      uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar17);
code_r0x016cef70:
                      if (*(long *)(lVar20 + 0x18) != 0) {
                        *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) =
                             *(undefined4 *)(lVar20 + 0x10);
                        return uVar11;
                      }
                    }
                    else if (lVar20 != 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
                      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar17);
                      if ((*(long *)(lVar20 + 0x18) != 0) &&
                         (lVar19 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar19 != 0)) {
                        uVar17 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar20 + 0x10));
                        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                        uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar17);
                        goto code_r0x016cef70;
                      }
                    }
                    puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
                    auVar26 = func_0x00f78af4();
                    uVar14 = 0;
                    puVar4 = puVar4 + -0x20;
                    lVar19 = lVar20;
                    uVar11 = uVar17;
                  } while( true );
                }
                uVar13 = 0;
              }
              else {
                uVar13 = 1;
              }
            }
            else {
              uVar13 = 2;
            }
          }
          else {
            uVar13 = 3;
          }
        }
        else {
          uVar13 = 4;
        }
      }
      else {
        uVar13 = 5;
      }
    }
    else {
      uVar13 = 6;
    }
  }
  else {
    uVar13 = 7;
    pppppuVar23 = pppppuVar24;
  }
  uVar11 = auVar26._0_8_;
  auVar27._8_8_ = uVar13;
  auVar27._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)pppppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)pppppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)pppppuVar3 + -0x18) = piVar12;
  *(undefined8 ******)((long)pppppuVar3 + -0x10) = pppppuVar23;
  *(undefined **)((long)pppppuVar3 + -8) = puVar25;
  if ((auVar26._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar11,auVar26._8_8_);
  puVar4 = *(undefined1 **)((long)pppppuVar3 + -0x10);
  puVar25 = *(undefined **)((long)pppppuVar3 + -8);
  lVar19 = *(long *)((long)pppppuVar3 + -0x20);
  lVar20 = *(long *)((long)pppppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x30);
  uVar13 = *(undefined8 *)((long)pppppuVar3 + -0x28);
code_r0x016ce380:
  do {
    uVar15 = auVar27._8_8_;
    *(long *)((long)pppppuVar3 + -0x20) = lVar19;
    *(long *)((long)pppppuVar3 + -0x18) = lVar20;
    *(undefined1 **)((long)pppppuVar3 + -0x10) = puVar4;
    *(undefined **)((long)pppppuVar3 + -8) = puVar25;
    uVar16 = auVar27._8_4_;
    if ((int)uVar16 < *(int *)(auVar27._0_8_ + 0x30)) {
      lVar19 = *(long *)(auVar27._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar18 = uVar14;
      if (lVar19 == 0) goto code_r0x016ce410;
      if (uVar16 < *(uint *)(lVar19 + 0x18)) {
        *(int *)(lVar19 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar15 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar18 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar15,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar15,uVar14);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar14 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar14,0);
    uVar11 = auVar27._0_8_;
    *(ulong *)((long)pppppuVar3 + -0x50) = unaff_x22;
    *(undefined8 *)((long)pppppuVar3 + -0x48) = uVar13;
    *(long *)((long)pppppuVar3 + -0x40) = lVar19;
    *(undefined8 *)((long)pppppuVar3 + -0x38) = uVar15;
    *(undefined1 **)((long)pppppuVar3 + -0x30) = (undefined1 *)((long)pppppuVar3 + -0x10);
    *(undefined **)((long)pppppuVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar18 == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar18);
    puVar4 = *(undefined1 **)((long)pppppuVar3 + -0x30);
    puVar25 = *(undefined **)((long)pppppuVar3 + -0x28);
    lVar19 = *(long *)((long)pppppuVar3 + -0x40);
    lVar20 = *(long *)((long)pppppuVar3 + -0x38);
    unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x50);
    uVar13 = *(undefined8 *)((long)pppppuVar3 + -0x48);
    pppppuVar3 = (undefined8 *****)((long)pppppuVar3 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x1662268 | Core.Networking.SessionKartVisuals.get_Extra1
// ============================================================

/* WARNING: Possible PIC construction at 0x016623b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01662410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016623fc) */
/* WARNING: Removing unreachable block (ram,0x016623e4) */
/* WARNING: Removing unreachable block (ram,0x016623cc) */
/* WARNING: Removing unreachable block (ram,0x016623b4) */
/* WARNING: Removing unreachable block (ram,0x01662414) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__get_Extra1
                (int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined8 *****pppppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined8 *****unaff_x29;
  undefined8 *****pppppuVar23;
  undefined8 *****pppppuVar24;
  undefined *unaff_x30;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_1f0 [4];
  undefined1 auStack_1d0 [12];
  int iStack_1c4;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ****ppppuStack_1a0;
  undefined *puStack_198;
  ulong uStack_158;
  undefined8 ****appppuStack_150 [18];
  undefined8 ****ppppuStack_70;
  undefined *puStack_68;
  undefined8 ****ppppuStack_50;
  undefined *puStack_48;
  undefined8 ****ppppuStack_30;
  undefined *puStack_28;
  
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0xe,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(param_1 + 2);
  if (lVar19 != 0) {
    iVar22 = *param_1 + (int)uVar11;
FlatBuffers_ByteBuffer__GetShort:
    *(undefined8 ******)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar22,2);
    return (ulong)(uint)(int)sVar5;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_SessionKartVisuals__get_Extra2;
  ppppuStack_30 = (undefined8 ****)&stack0xfffffffffffffff0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x10,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = (undefined8 *****)ppppuStack_30;
    unaff_x30 = puStack_28;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_48 = &Core_Networking_SessionKartVisuals__get_Extra3;
  uVar17 = 0;
  ppppuStack_50 = &ppppuStack_30;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x12);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x29 = (undefined8 *****)ppppuStack_50;
    unaff_x30 = puStack_48;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  auVar26 = func_0x00f78af4();
  lVar19 = auVar26._0_8_;
  pppppuVar3 = (undefined8 *****)&stack0xffffffffffffff40;
  puVar2 = &stack0xffffffffffffff40;
  puStack_68 = &Core_Networking_SessionKartVisuals__CreateSessionKartVisuals;
  pppppuVar24 = &ppppuStack_70;
  ppppuStack_70 = &ppppuStack_50;
  if (lVar19 != 0) {
    puVar25 = &UNK_016623b4;
    unaff_x21 = uVar17;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    lVar20 = auVar26._0_8_;
    uVar14 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = auVar26._8_8_;
    *(long *)(puVar2 + -0x18) = lVar19;
    *(undefined8 ******)(puVar2 + -0x10) = pppppuVar24;
    *(undefined **)(puVar2 + -8) = puVar25;
    puVar4 = puVar2 + -0x10;
    lVar19 = 8;
    uVar13 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar20);
    if (*(long *)(lVar20 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar20 + 0x28) + 0x18) < 8) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(lVar20 + 0x28) = uVar13;
      }
      *(undefined4 *)(lVar20 + 0x30) = 8;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
      *(int *)(lVar20 + 0x34) = (int)uVar11;
      return uVar11;
    }
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar27 = func_0x00f78af4();
    pppppuVar3 = (undefined8 *****)(puVar2 + -0x30);
    goto code_r0x016ce380;
  }
  puVar25 = &Core_Networking_SessionKartVisuals__AddExtra3;
  auVar26 = func_0x00f78af4();
  if (auVar26._0_8_ == 0) {
    pppppuVar3 = appppuStack_150 + 0x10;
    pppppuVar23 = appppuStack_150 + 0x10;
    appppuStack_150[0x11] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra3;
    puVar25 = &Core_Networking_SessionKartVisuals__AddExtra2;
    appppuStack_150[0x10] = pppppuVar24;
    auVar26 = func_0x00f78af4();
    if (auVar26._0_8_ == 0) {
      pppppuVar3 = appppuStack_150 + 0xe;
      pppppuVar23 = appppuStack_150 + 0xe;
      appppuStack_150[0xf] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra2;
      puVar25 = &Core_Networking_SessionKartVisuals__AddExtra1;
      appppuStack_150[0xe] = appppuStack_150 + 0x10;
      auVar26 = func_0x00f78af4();
      if (auVar26._0_8_ == 0) {
        pppppuVar3 = appppuStack_150 + 0xc;
        pppppuVar23 = appppuStack_150 + 0xc;
        appppuStack_150[0xd] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddExtra1;
        puVar25 = &Core_Networking_SessionKartVisuals__AddWheels;
        appppuStack_150[0xc] = appppuStack_150 + 0xe;
        auVar26 = func_0x00f78af4();
        if (auVar26._0_8_ == 0) {
          pppppuVar3 = appppuStack_150 + 10;
          pppppuVar23 = appppuStack_150 + 10;
          appppuStack_150[0xb] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddWheels;
          puVar25 = &Core_Networking_SessionKartVisuals__AddAntenna;
          appppuStack_150[10] = appppuStack_150 + 0xc;
          auVar26 = func_0x00f78af4();
          if (auVar26._0_8_ == 0) {
            pppppuVar3 = appppuStack_150 + 8;
            pppppuVar23 = appppuStack_150 + 8;
            appppuStack_150[9] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddAntenna;
            puVar25 = &Core_Networking_SessionKartVisuals__AddGlider;
            appppuStack_150[8] = appppuStack_150 + 10;
            auVar26 = func_0x00f78af4();
            if (auVar26._0_8_ == 0) {
              pppppuVar3 = appppuStack_150 + 6;
              pppppuVar23 = appppuStack_150 + 6;
              appppuStack_150[7] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddGlider;
              puVar25 = &Core_Networking_SessionKartVisuals__AddKart;
              appppuStack_150[6] = appppuStack_150 + 8;
              auVar26 = func_0x00f78af4();
              if (auVar26._0_8_ == 0) {
                pppppuVar3 = appppuStack_150 + 4;
                pppppuVar23 = appppuStack_150 + 4;
                appppuStack_150[5] = (undefined8 ****)&Core_Networking_SessionKartVisuals__AddKart;
                puVar25 = &Core_Networking_SessionKartVisuals__AddCharacter;
                appppuStack_150[4] = appppuStack_150 + 6;
                auVar26 = func_0x00f78af4();
                if (auVar26._0_8_ == 0) {
                  appppuStack_150[3] =
                       (undefined8 ****)&Core_Networking_SessionKartVisuals__AddCharacter;
                  appppuStack_150[2] = appppuStack_150 + 4;
                  lVar19 = func_0x00f78af4();
                  puVar2 = &stack0xfffffffffffffea0;
                  appppuStack_150[1] =
                       (undefined8 ****)&Core_Networking_SessionKartVisuals__EndSessionKartVisuals;
                  pppppuVar24 = appppuStack_150;
                  appppuStack_150[0] = appppuStack_150 + 2;
                  if ((bRam0000000003eb5869 & 1) == 0) {
                    appppuStack_150[0] = appppuStack_150 + 2;
                    func_0x00f78a20(0x3d3f248);
                    bRam0000000003eb5869 = 1;
                  }
                  if (lVar19 == 0) {
                    puVar25 = &Core_Networking_SessionKartVisuals__StartSessionKartVisuals;
                    lVar19 = func_0x00f78af4();
                    auVar26._8_8_ = 0x3eb5000;
                    auVar26._0_8_ = lVar19;
                    if (lVar19 == 0) {
                      lVar19 = func_0x00f78af4();
                      return *(ulong *)(lVar19 + 8);
                    }
                    lVar19 = 0;
                    goto code_r0x016ce2a4;
                  }
                  uVar11 = 0x3eb5000;
                  if ((bRam0000000003eb5cd8 & 1) == 0) {
                    func_0x00f78a20(0x3d1f100,0);
                    bRam0000000003eb5cd8 = 1;
                  }
                  if (-1 < *(int *)(lVar19 + 0x30)) {
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,0);
                    uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                    unaff_x21 = (ulong)*(uint *)(lVar19 + 0x30);
                    uVar16 = *(uint *)(lVar19 + 0x30) - 1;
                    if (-2 < (int)uVar16) {
                      uVar16 = 0xffffffff;
                    }
                    unaff_x22 = (ulong)uVar16;
                    do {
                      uVar1 = (int)unaff_x21 - 1;
                      unaff_x21 = (ulong)uVar1;
                      iVar22 = (int)uVar11;
                      if ((int)uVar1 < 0) goto code_r0x016ceb30;
                      lVar20 = *(long *)(lVar19 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
                    } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
                    unaff_x22 = unaff_x21 + 8;
                    do {
                      uVar17 = unaff_x22 - 8;
                      if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
                      iVar9 = *(int *)(lVar20 + unaff_x22 * 4);
                      sVar5 = 0;
                      if (iVar9 != 0) {
                        sVar5 = (short)uVar11 - (short)iVar9;
                      }
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)sVar5);
                      lVar20 = *(long *)(lVar19 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
                      *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
                      unaff_x22 = unaff_x22 - 1;
                      uVar16 = uVar1;
                    } while (0 < (long)uVar17);
code_r0x016ceb30:
                    uVar8 = *(undefined4 *)(lVar19 + 0x34);
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)((short)uVar11 - (short)uVar8));
                    uVar16 = uVar16 * 2 + 6;
                    unaff_x21 = (ulong)uVar16;
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)uVar16);
                    unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                    if (0 < (int)*(uint *)(lVar19 + 0x40)) {
                      uVar17 = 0;
                      do {
                        lVar20 = *(long *)(lVar19 + 0x18);
                        if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                           (lVar21 = *(long *)(lVar19 + 0x38), lVar21 == 0)) goto code_r0x016ced84;
                        if (*(uint *)(lVar21 + 0x18) <= uVar17) goto code_r0x016ced88;
                        uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                                *(int *)(lVar21 + uVar17 * 4 + 0x20);
                        unaff_x21 = (ulong)uVar1;
                        uVar16 = *(uint *)(lVar19 + 0x10);
                        unaff_x22 = (ulong)uVar16;
                        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                        if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),unaff_x22,2);
                        if (sVar5 == sVar6) {
                          if (sVar5 < 3) {
code_r0x016cec64:
                            unaff_x21 = *(ulong *)(lVar19 + 0x38);
                            if (unaff_x21 == 0) goto code_r0x016ced84;
                            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar17) goto code_r0x016ced88;
                            iVar9 = *(int *)(unaff_x21 + uVar17 * 4 + 0x20);
                            if (iVar9 == 0) {
                              unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                              goto code_r0x016cecac;
                            }
                            unaff_x21 = *(ulong *)(lVar19 + 0x18);
                            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                            goto code_r0x016ced84;
                            iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar22;
                            *(int *)(lVar19 + 0x10) = iVar10;
                            iVar9 = iVar9 - iVar22;
                            goto code_r0x016ced3c;
                          }
                          iVar9 = 2;
                          while( true ) {
                            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar1 + iVar9,2);
                            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar16 + iVar9,2);
                            if (sVar6 != sVar7) break;
                            iVar9 = iVar9 + 2;
                            if (sVar5 <= iVar9) goto code_r0x016cec64;
                          }
                        }
                        uVar17 = uVar17 + 1;
                        unaff_x22 = (ulong)*(int *)(lVar19 + 0x40);
                      } while ((long)uVar17 < (long)unaff_x22);
                    }
                    unaff_x21 = *(ulong *)(lVar19 + 0x38);
                    if (unaff_x21 == 0) {
code_r0x016ced84:
                      func_0x00f78af4();
                    }
                    else {
code_r0x016cecac:
                      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                        lVar20 = *(long *)(lVar19 + 0x38);
                        if (lVar20 == 0) goto code_r0x016ced84;
                        /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                        *(ulong *)(lVar19 + 0x38) = unaff_x21;
                        unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                      }
                      uVar16 = (uint)unaff_x22;
                      *(uint *)(lVar19 + 0x40) = uVar16 + 1;
                      uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                      if (unaff_x21 == 0) goto code_r0x016ced84;
                      if (uVar16 < *(uint *)(unaff_x21 + 0x18)) {
                        *(undefined4 *)(unaff_x21 + (long)(int)uVar16 * 4 + 0x20) = uVar8;
                        unaff_x21 = *(ulong *)(lVar19 + 0x18);
                        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                          iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                          iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                          iVar10 = iVar10 - iVar22;
                          iVar9 = iVar9 - iVar22;
code_r0x016ced3c:
                          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                          *(undefined4 *)(lVar19 + 0x30) = 0xffffffff;
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
                  iVar22 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar14);
                  uVar14 = func_0x00f78a24(0x3d56a30);
                  auVar28 = func_0x00f78ac0(uVar13,uVar14);
                  puStack_198 = &FlatBuffers_FlatBufferBuilder__Required;
                  pppppuVar24 = &ppppuStack_1a0;
                  lVar19 = *(long *)(auVar28._0_8_ + 0x18);
                  iStack_1c4 = iVar22;
                  uStack_1c0 = unaff_x22;
                  uStack_1b8 = unaff_x21;
                  uStack_1b0 = uVar11;
                  uStack_1a8 = uVar13;
                  ppppuStack_1a0 = appppuStack_150;
                  if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
                    iVar9 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - auVar28._8_4_;
                    iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar9,4);
                    lVar19 = *(long *)(auVar28._0_8_ + 0x18);
                    if (lVar19 != 0) {
                      uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,(iVar9 - iVar10) + iVar22,2);
                      if ((uVar11 & 0xffff) != 0) {
                        return uVar11;
                      }
                      goto code_r0x016cee5c;
                    }
                  }
                  func_0x00f78af4();
code_r0x016cee5c:
                  uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_1c4,0);
                  uVar14 = func_0x00f78a24(0x3d6ce88);
                  uVar15 = func_0x00f78a24(0x3d66338);
                  lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar13,uVar15,0);
                  func_0x00f78a24(0x3d22a38);
                  uVar11 = func_0x00f78aec();
                  uVar14 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar19);
                  uVar13 = func_0x00f78a24(0x3d56a50);
                  puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
                  auVar26 = func_0x00f78ac0(uVar11,uVar13);
                  puVar4 = auStack_1d0;
                  do {
                    uVar17 = auVar26._8_8_;
                    lVar20 = auVar26._0_8_;
                    *(ulong *)(puVar4 + -0x20) = uVar11;
                    *(long *)(puVar4 + -0x18) = lVar19;
                    *(undefined8 ******)(puVar4 + -0x10) = pppppuVar24;
                    *(undefined **)(puVar4 + -8) = puVar25;
                    pppppuVar24 = (undefined8 *****)(puVar4 + -0x10);
                    if ((int)uVar14 == 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
                      uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar17);
code_r0x016cef70:
                      if (*(long *)(lVar20 + 0x18) != 0) {
                        *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) =
                             *(undefined4 *)(lVar20 + 0x10);
                        return uVar11;
                      }
                    }
                    else if (lVar20 != 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
                      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar17);
                      if ((*(long *)(lVar20 + 0x18) != 0) &&
                         (lVar19 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar19 != 0)) {
                        uVar17 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar20 + 0x10));
                        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                        uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar17);
                        goto code_r0x016cef70;
                      }
                    }
                    puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
                    auVar26 = func_0x00f78af4();
                    uVar14 = 0;
                    puVar4 = puVar4 + -0x20;
                    lVar19 = lVar20;
                    uVar11 = uVar17;
                  } while( true );
                }
                uVar13 = 0;
              }
              else {
                uVar13 = 1;
              }
            }
            else {
              uVar13 = 2;
            }
          }
          else {
            uVar13 = 3;
          }
        }
        else {
          uVar13 = 4;
        }
      }
      else {
        uVar13 = 5;
      }
    }
    else {
      uVar13 = 6;
    }
  }
  else {
    uVar13 = 7;
    pppppuVar23 = pppppuVar24;
  }
  uVar11 = auVar26._0_8_;
  auVar27._8_8_ = uVar13;
  auVar27._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)pppppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)pppppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)pppppuVar3 + -0x18) = piVar12;
  *(undefined8 ******)((long)pppppuVar3 + -0x10) = pppppuVar23;
  *(undefined **)((long)pppppuVar3 + -8) = puVar25;
  if ((auVar26._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar11,auVar26._8_8_);
  puVar4 = *(undefined1 **)((long)pppppuVar3 + -0x10);
  puVar25 = *(undefined **)((long)pppppuVar3 + -8);
  lVar19 = *(long *)((long)pppppuVar3 + -0x20);
  lVar20 = *(long *)((long)pppppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x30);
  uVar13 = *(undefined8 *)((long)pppppuVar3 + -0x28);
code_r0x016ce380:
  do {
    uVar15 = auVar27._8_8_;
    *(long *)((long)pppppuVar3 + -0x20) = lVar19;
    *(long *)((long)pppppuVar3 + -0x18) = lVar20;
    *(undefined1 **)((long)pppppuVar3 + -0x10) = puVar4;
    *(undefined **)((long)pppppuVar3 + -8) = puVar25;
    uVar16 = auVar27._8_4_;
    if ((int)uVar16 < *(int *)(auVar27._0_8_ + 0x30)) {
      lVar19 = *(long *)(auVar27._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar18 = uVar14;
      if (lVar19 == 0) goto code_r0x016ce410;
      if (uVar16 < *(uint *)(lVar19 + 0x18)) {
        *(int *)(lVar19 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar15 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar18 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar15,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar15,uVar14);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar14 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar14,0);
    uVar11 = auVar27._0_8_;
    *(ulong *)((long)pppppuVar3 + -0x50) = unaff_x22;
    *(undefined8 *)((long)pppppuVar3 + -0x48) = uVar13;
    *(long *)((long)pppppuVar3 + -0x40) = lVar19;
    *(undefined8 *)((long)pppppuVar3 + -0x38) = uVar15;
    *(undefined1 **)((long)pppppuVar3 + -0x30) = (undefined1 *)((long)pppppuVar3 + -0x10);
    *(undefined **)((long)pppppuVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar18 == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar18);
    puVar4 = *(undefined1 **)((long)pppppuVar3 + -0x30);
    puVar25 = *(undefined **)((long)pppppuVar3 + -0x28);
    lVar19 = *(long *)((long)pppppuVar3 + -0x40);
    lVar20 = *(long *)((long)pppppuVar3 + -0x38);
    unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x50);
    uVar13 = *(undefined8 *)((long)pppppuVar3 + -0x48);
    pppppuVar3 = (undefined8 *****)((long)pppppuVar3 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x16622bc | Core.Networking.SessionKartVisuals.get_Extra2
// ============================================================

/* WARNING: Possible PIC construction at 0x016623b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01662410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016623fc) */
/* WARNING: Removing unreachable block (ram,0x016623e4) */
/* WARNING: Removing unreachable block (ram,0x016623cc) */
/* WARNING: Removing unreachable block (ram,0x016623b4) */
/* WARNING: Removing unreachable block (ram,0x01662414) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__get_Extra2
                (int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *****pppppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 **unaff_x29;
  undefined1 *****pppppuVar23;
  undefined1 *****pppppuVar24;
  undefined *unaff_x30;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  ulong auStack_1d0 [4];
  undefined1 auStack_1b0 [12];
  int iStack_1a4;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined1 ****ppppuStack_180;
  undefined *puStack_178;
  ulong uStack_138;
  undefined1 ****appppuStack_130 [18];
  undefined1 ***pppuStack_50;
  undefined *puStack_48;
  undefined1 **ppuStack_30;
  undefined *puStack_28;
  
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0x10,0);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(param_1 + 2);
  if (lVar19 != 0) {
    iVar22 = *param_1 + (int)uVar11;
FlatBuffers_ByteBuffer__GetShort:
    *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar22,2);
    return (ulong)(uint)(int)sVar5;
  }
  piVar12 = (int *)func_0x00f78af4();
  puStack_28 = &Core_Networking_SessionKartVisuals__get_Extra3;
  uVar17 = 0;
  ppuStack_30 = (undefined1 **)&stack0xfffffffffffffff0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar12,0x12);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  lVar19 = *(long *)(piVar12 + 2);
  if (lVar19 != 0) {
    iVar22 = *piVar12 + (int)uVar11;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = ppuStack_30;
    unaff_x30 = puStack_28;
    goto FlatBuffers_ByteBuffer__GetShort;
  }
  auVar26 = func_0x00f78af4();
  lVar19 = auVar26._0_8_;
  pppppuVar3 = (undefined1 *****)&stack0xffffffffffffff60;
  puVar2 = &stack0xffffffffffffff60;
  puStack_48 = &Core_Networking_SessionKartVisuals__CreateSessionKartVisuals;
  pppppuVar24 = (undefined1 *****)&pppuStack_50;
  pppuStack_50 = &ppuStack_30;
  if (lVar19 != 0) {
    puVar25 = &UNK_016623b4;
    unaff_x21 = uVar17;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    lVar20 = auVar26._0_8_;
    uVar14 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = auVar26._8_8_;
    *(long *)(puVar2 + -0x18) = lVar19;
    *(undefined1 ******)(puVar2 + -0x10) = pppppuVar24;
    *(undefined **)(puVar2 + -8) = puVar25;
    puVar4 = puVar2 + -0x10;
    lVar19 = 8;
    uVar13 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar20);
    if (*(long *)(lVar20 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar20 + 0x28) + 0x18) < 8) {
        uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(lVar20 + 0x28) = uVar13;
      }
      *(undefined4 *)(lVar20 + 0x30) = 8;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar20);
      *(int *)(lVar20 + 0x34) = (int)uVar11;
      return uVar11;
    }
    puVar25 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar27 = func_0x00f78af4();
    pppppuVar3 = (undefined1 *****)(puVar2 + -0x30);
    goto code_r0x016ce380;
  }
  puVar25 = &Core_Networking_SessionKartVisuals__AddExtra3;
  auVar26 = func_0x00f78af4();
  if (auVar26._0_8_ == 0) {
    pppppuVar3 = appppuStack_130 + 0x10;
    pppppuVar23 = appppuStack_130 + 0x10;
    appppuStack_130[0x11] = (undefined1 ****)&Core_Networking_SessionKartVisuals__AddExtra3;
    puVar25 = &Core_Networking_SessionKartVisuals__AddExtra2;
    appppuStack_130[0x10] = (undefined1 ****)pppppuVar24;
    auVar26 = func_0x00f78af4();
    if (auVar26._0_8_ == 0) {
      pppppuVar3 = appppuStack_130 + 0xe;
      pppppuVar23 = appppuStack_130 + 0xe;
      appppuStack_130[0xf] = (undefined1 ****)&Core_Networking_SessionKartVisuals__AddExtra2;
      puVar25 = &Core_Networking_SessionKartVisuals__AddExtra1;
      appppuStack_130[0xe] = (undefined1 ****)(appppuStack_130 + 0x10);
      auVar26 = func_0x00f78af4();
      if (auVar26._0_8_ == 0) {
        pppppuVar3 = appppuStack_130 + 0xc;
        pppppuVar23 = appppuStack_130 + 0xc;
        appppuStack_130[0xd] = (undefined1 ****)&Core_Networking_SessionKartVisuals__AddExtra1;
        puVar25 = &Core_Networking_SessionKartVisuals__AddWheels;
        appppuStack_130[0xc] = (undefined1 ****)(appppuStack_130 + 0xe);
        auVar26 = func_0x00f78af4();
        if (auVar26._0_8_ == 0) {
          pppppuVar3 = appppuStack_130 + 10;
          pppppuVar23 = appppuStack_130 + 10;
          appppuStack_130[0xb] = (undefined1 ****)&Core_Networking_SessionKartVisuals__AddWheels;
          puVar25 = &Core_Networking_SessionKartVisuals__AddAntenna;
          appppuStack_130[10] = (undefined1 ****)(appppuStack_130 + 0xc);
          auVar26 = func_0x00f78af4();
          if (auVar26._0_8_ == 0) {
            pppppuVar3 = appppuStack_130 + 8;
            pppppuVar23 = appppuStack_130 + 8;
            appppuStack_130[9] = (undefined1 ****)&Core_Networking_SessionKartVisuals__AddAntenna;
            puVar25 = &Core_Networking_SessionKartVisuals__AddGlider;
            appppuStack_130[8] = (undefined1 ****)(appppuStack_130 + 10);
            auVar26 = func_0x00f78af4();
            if (auVar26._0_8_ == 0) {
              pppppuVar3 = appppuStack_130 + 6;
              pppppuVar23 = appppuStack_130 + 6;
              appppuStack_130[7] = (undefined1 ****)&Core_Networking_SessionKartVisuals__AddGlider;
              puVar25 = &Core_Networking_SessionKartVisuals__AddKart;
              appppuStack_130[6] = (undefined1 ****)(appppuStack_130 + 8);
              auVar26 = func_0x00f78af4();
              if (auVar26._0_8_ == 0) {
                pppppuVar3 = appppuStack_130 + 4;
                pppppuVar23 = appppuStack_130 + 4;
                appppuStack_130[5] = (undefined1 ****)&Core_Networking_SessionKartVisuals__AddKart;
                puVar25 = &Core_Networking_SessionKartVisuals__AddCharacter;
                appppuStack_130[4] = (undefined1 ****)(appppuStack_130 + 6);
                auVar26 = func_0x00f78af4();
                if (auVar26._0_8_ == 0) {
                  appppuStack_130[3] =
                       (undefined1 ****)&Core_Networking_SessionKartVisuals__AddCharacter;
                  appppuStack_130[2] = (undefined1 ****)(appppuStack_130 + 4);
                  lVar19 = func_0x00f78af4();
                  puVar2 = &stack0xfffffffffffffec0;
                  appppuStack_130[1] =
                       (undefined1 ****)&Core_Networking_SessionKartVisuals__EndSessionKartVisuals;
                  pppppuVar24 = appppuStack_130;
                  appppuStack_130[0] = (undefined1 ****)(appppuStack_130 + 2);
                  if ((bRam0000000003eb5869 & 1) == 0) {
                    appppuStack_130[0] = (undefined1 ****)(appppuStack_130 + 2);
                    func_0x00f78a20(0x3d3f248);
                    bRam0000000003eb5869 = 1;
                  }
                  if (lVar19 == 0) {
                    puVar25 = &Core_Networking_SessionKartVisuals__StartSessionKartVisuals;
                    lVar19 = func_0x00f78af4();
                    auVar26._8_8_ = 0x3eb5000;
                    auVar26._0_8_ = lVar19;
                    if (lVar19 == 0) {
                      lVar19 = func_0x00f78af4();
                      return *(ulong *)(lVar19 + 8);
                    }
                    lVar19 = 0;
                    goto code_r0x016ce2a4;
                  }
                  uVar11 = 0x3eb5000;
                  if ((bRam0000000003eb5cd8 & 1) == 0) {
                    func_0x00f78a20(0x3d1f100,0);
                    bRam0000000003eb5cd8 = 1;
                  }
                  if (-1 < *(int *)(lVar19 + 0x30)) {
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,0);
                    uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                    unaff_x21 = (ulong)*(uint *)(lVar19 + 0x30);
                    uVar16 = *(uint *)(lVar19 + 0x30) - 1;
                    if (-2 < (int)uVar16) {
                      uVar16 = 0xffffffff;
                    }
                    unaff_x22 = (ulong)uVar16;
                    do {
                      uVar1 = (int)unaff_x21 - 1;
                      unaff_x21 = (ulong)uVar1;
                      iVar22 = (int)uVar11;
                      if ((int)uVar1 < 0) goto code_r0x016ceb30;
                      lVar20 = *(long *)(lVar19 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
                    } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
                    unaff_x22 = unaff_x21 + 8;
                    do {
                      uVar17 = unaff_x22 - 8;
                      if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
                      iVar9 = *(int *)(lVar20 + unaff_x22 * 4);
                      sVar5 = 0;
                      if (iVar9 != 0) {
                        sVar5 = (short)uVar11 - (short)iVar9;
                      }
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)sVar5);
                      lVar20 = *(long *)(lVar19 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
                      *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
                      unaff_x22 = unaff_x22 - 1;
                      uVar16 = uVar1;
                    } while (0 < (long)uVar17);
code_r0x016ceb30:
                    uVar8 = *(undefined4 *)(lVar19 + 0x34);
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)((short)uVar11 - (short)uVar8));
                    uVar16 = uVar16 * 2 + 6;
                    unaff_x21 = (ulong)uVar16;
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar19,(int)(short)uVar16);
                    unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                    if (0 < (int)*(uint *)(lVar19 + 0x40)) {
                      uVar17 = 0;
                      do {
                        lVar20 = *(long *)(lVar19 + 0x18);
                        if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                           (lVar21 = *(long *)(lVar19 + 0x38), lVar21 == 0)) goto code_r0x016ced84;
                        if (*(uint *)(lVar21 + 0x18) <= uVar17) goto code_r0x016ced88;
                        uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                                *(int *)(lVar21 + uVar17 * 4 + 0x20);
                        unaff_x21 = (ulong)uVar1;
                        uVar16 = *(uint *)(lVar19 + 0x10);
                        unaff_x22 = (ulong)uVar16;
                        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                        if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),unaff_x22,2);
                        if (sVar5 == sVar6) {
                          if (sVar5 < 3) {
code_r0x016cec64:
                            unaff_x21 = *(ulong *)(lVar19 + 0x38);
                            if (unaff_x21 == 0) goto code_r0x016ced84;
                            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar17) goto code_r0x016ced88;
                            iVar9 = *(int *)(unaff_x21 + uVar17 * 4 + 0x20);
                            if (iVar9 == 0) {
                              unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                              goto code_r0x016cecac;
                            }
                            unaff_x21 = *(ulong *)(lVar19 + 0x18);
                            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                            goto code_r0x016ced84;
                            iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar22;
                            *(int *)(lVar19 + 0x10) = iVar10;
                            iVar9 = iVar9 - iVar22;
                            goto code_r0x016ced3c;
                          }
                          iVar9 = 2;
                          while( true ) {
                            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar1 + iVar9,2);
                            if (*(long *)(lVar19 + 0x18) == 0) goto code_r0x016ced84;
                            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x18),uVar16 + iVar9,2);
                            if (sVar6 != sVar7) break;
                            iVar9 = iVar9 + 2;
                            if (sVar5 <= iVar9) goto code_r0x016cec64;
                          }
                        }
                        uVar17 = uVar17 + 1;
                        unaff_x22 = (ulong)*(int *)(lVar19 + 0x40);
                      } while ((long)uVar17 < (long)unaff_x22);
                    }
                    unaff_x21 = *(ulong *)(lVar19 + 0x38);
                    if (unaff_x21 == 0) {
code_r0x016ced84:
                      func_0x00f78af4();
                    }
                    else {
code_r0x016cecac:
                      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                        lVar20 = *(long *)(lVar19 + 0x38);
                        if (lVar20 == 0) goto code_r0x016ced84;
                        /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                        *(ulong *)(lVar19 + 0x38) = unaff_x21;
                        unaff_x22 = (ulong)*(uint *)(lVar19 + 0x40);
                      }
                      uVar16 = (uint)unaff_x22;
                      *(uint *)(lVar19 + 0x40) = uVar16 + 1;
                      uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                      if (unaff_x21 == 0) goto code_r0x016ced84;
                      if (uVar16 < *(uint *)(unaff_x21 + 0x18)) {
                        *(undefined4 *)(unaff_x21 + (long)(int)uVar16 * 4 + 0x20) = uVar8;
                        unaff_x21 = *(ulong *)(lVar19 + 0x18);
                        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                          iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                          iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
                          iVar10 = iVar10 - iVar22;
                          iVar9 = iVar9 - iVar22;
code_r0x016ced3c:
                          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                          *(undefined4 *)(lVar19 + 0x30) = 0xffffffff;
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
                  iVar22 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar13,uVar14);
                  uVar14 = func_0x00f78a24(0x3d56a30);
                  auVar28 = func_0x00f78ac0(uVar13,uVar14);
                  puStack_178 = &FlatBuffers_FlatBufferBuilder__Required;
                  pppppuVar24 = &ppppuStack_180;
                  lVar19 = *(long *)(auVar28._0_8_ + 0x18);
                  iStack_1a4 = iVar22;
                  uStack_1a0 = unaff_x22;
                  uStack_198 = unaff_x21;
                  uStack_190 = uVar11;
                  uStack_188 = uVar13;
                  ppppuStack_180 = (undefined1 ****)appppuStack_130;
                  if ((lVar19 != 0) && (*(long *)(lVar19 + 0x10) != 0)) {
                    iVar9 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - auVar28._8_4_;
                    iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,iVar9,4);
                    lVar19 = *(long *)(auVar28._0_8_ + 0x18);
                    if (lVar19 != 0) {
                      uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,(iVar9 - iVar10) + iVar22,2);
                      if ((uVar11 & 0xffff) != 0) {
                        return uVar11;
                      }
                      goto code_r0x016cee5c;
                    }
                  }
                  func_0x00f78af4();
code_r0x016cee5c:
                  uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_1a4,0);
                  uVar14 = func_0x00f78a24(0x3d6ce88);
                  uVar15 = func_0x00f78a24(0x3d66338);
                  lVar19 = /*System.String$$Concat*/ func_0x029be39c(uVar14,uVar13,uVar15,0);
                  func_0x00f78a24(0x3d22a38);
                  uVar11 = func_0x00f78aec();
                  uVar14 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar19);
                  uVar13 = func_0x00f78a24(0x3d56a50);
                  puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
                  auVar26 = func_0x00f78ac0(uVar11,uVar13);
                  puVar4 = auStack_1b0;
                  do {
                    uVar17 = auVar26._8_8_;
                    lVar20 = auVar26._0_8_;
                    *(ulong *)(puVar4 + -0x20) = uVar11;
                    *(long *)(puVar4 + -0x18) = lVar19;
                    *(undefined1 ******)(puVar4 + -0x10) = pppppuVar24;
                    *(undefined **)(puVar4 + -8) = puVar25;
                    pppppuVar24 = (undefined1 *****)(puVar4 + -0x10);
                    if ((int)uVar14 == 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
                      uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar17);
code_r0x016cef70:
                      if (*(long *)(lVar20 + 0x18) != 0) {
                        *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) =
                             *(undefined4 *)(lVar20 + 0x10);
                        return uVar11;
                      }
                    }
                    else if (lVar20 != 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
                      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar17);
                      if ((*(long *)(lVar20 + 0x18) != 0) &&
                         (lVar19 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar19 != 0)) {
                        uVar17 = (ulong)(uint)(*(int *)(lVar19 + 0x18) - *(int *)(lVar20 + 0x10));
                        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                        uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar17);
                        goto code_r0x016cef70;
                      }
                    }
                    puVar25 = &FlatBuffers_FlatBufferBuilder__Finish;
                    auVar26 = func_0x00f78af4();
                    uVar14 = 0;
                    puVar4 = puVar4 + -0x20;
                    lVar19 = lVar20;
                    uVar11 = uVar17;
                  } while( true );
                }
                uVar13 = 0;
              }
              else {
                uVar13 = 1;
              }
            }
            else {
              uVar13 = 2;
            }
          }
          else {
            uVar13 = 3;
          }
        }
        else {
          uVar13 = 4;
        }
      }
      else {
        uVar13 = 5;
      }
    }
    else {
      uVar13 = 6;
    }
  }
  else {
    uVar13 = 7;
    pppppuVar23 = pppppuVar24;
  }
  uVar11 = auVar26._0_8_;
  auVar27._8_8_ = uVar13;
  auVar27._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)pppppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)pppppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)pppppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)pppppuVar3 + -0x18) = piVar12;
  *(undefined1 ******)((long)pppppuVar3 + -0x10) = pppppuVar23;
  *(undefined **)((long)pppppuVar3 + -8) = puVar25;
  if ((auVar26._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar14 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar11,auVar26._8_8_);
  puVar4 = *(undefined1 **)((long)pppppuVar3 + -0x10);
  puVar25 = *(undefined **)((long)pppppuVar3 + -8);
  lVar19 = *(long *)((long)pppppuVar3 + -0x20);
  lVar20 = *(long *)((long)pppppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x30);
  uVar13 = *(undefined8 *)((long)pppppuVar3 + -0x28);
code_r0x016ce380:
  do {
    uVar15 = auVar27._8_8_;
    *(long *)((long)pppppuVar3 + -0x20) = lVar19;
    *(long *)((long)pppppuVar3 + -0x18) = lVar20;
    *(undefined1 **)((long)pppppuVar3 + -0x10) = puVar4;
    *(undefined **)((long)pppppuVar3 + -8) = puVar25;
    uVar16 = auVar27._8_4_;
    if ((int)uVar16 < *(int *)(auVar27._0_8_ + 0x30)) {
      lVar19 = *(long *)(auVar27._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar18 = uVar14;
      if (lVar19 == 0) goto code_r0x016ce410;
      if (uVar16 < *(uint *)(lVar19 + 0x18)) {
        *(int *)(lVar19 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar15 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6ceb8);
      uVar18 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar15,uVar14);
      uVar14 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar15,uVar14);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar14 = func_0x00f78b24();
    auVar27 = func_0x00f78ac0(uVar14,0);
    uVar11 = auVar27._0_8_;
    *(ulong *)((long)pppppuVar3 + -0x50) = unaff_x22;
    *(undefined8 *)((long)pppppuVar3 + -0x48) = uVar13;
    *(long *)((long)pppppuVar3 + -0x40) = lVar19;
    *(undefined8 *)((long)pppppuVar3 + -0x38) = uVar15;
    *(undefined1 **)((long)pppppuVar3 + -0x30) = (undefined1 *)((long)pppppuVar3 + -0x10);
    *(undefined **)((long)pppppuVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar18 == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar14 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar18);
    puVar4 = *(undefined1 **)((long)pppppuVar3 + -0x30);
    puVar25 = *(undefined **)((long)pppppuVar3 + -0x28);
    lVar19 = *(long *)((long)pppppuVar3 + -0x40);
    lVar20 = *(long *)((long)pppppuVar3 + -0x38);
    unaff_x22 = *(ulong *)((long)pppppuVar3 + -0x50);
    uVar13 = *(undefined8 *)((long)pppppuVar3 + -0x48);
    pppppuVar3 = (undefined1 *****)((long)pppppuVar3 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x1662310 | Core.Networking.SessionKartVisuals.get_Extra3
// ============================================================

/* WARNING: Possible PIC construction at 0x016623b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01662410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016623fc) */
/* WARNING: Removing unreachable block (ram,0x016623e4) */
/* WARNING: Removing unreachable block (ram,0x016623cc) */
/* WARNING: Removing unreachable block (ram,0x016623b4) */
/* WARNING: Removing unreachable block (ram,0x01662414) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__get_Extra3
                (int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 ****ppppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  undefined1 ****ppppuVar22;
  undefined1 ****ppppuVar23;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  ulong auStack_1b0 [4];
  undefined1 auStack_190 [12];
  int iStack_184;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined1 ***pppuStack_160;
  undefined *puStack_158;
  ulong uStack_118;
  undefined1 ***apppuStack_110 [18];
  undefined1 **ppuStack_30;
  undefined *puStack_28;
  
  uVar17 = 0;
  uVar11 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(param_1,0x12);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  if (*(long *)(param_1 + 2) != 0) {
    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(param_1 + 2),*param_1 + (int)uVar11,2);
    return (ulong)(uint)(int)sVar5;
  }
  auVar25 = func_0x00f78af4();
  lVar14 = auVar25._0_8_;
  ppppuVar3 = (undefined1 ****)&stack0xffffffffffffff80;
  puVar2 = &stack0xffffffffffffff80;
  puStack_28 = &Core_Networking_SessionKartVisuals__CreateSessionKartVisuals;
  ppppuVar23 = (undefined1 ****)&ppuStack_30;
  ppuStack_30 = (undefined1 **)&stack0xfffffffffffffff0;
  if (lVar14 != 0) {
    puVar24 = &UNK_016623b4;
    unaff_x21 = uVar17;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    lVar19 = auVar25._0_8_;
    uVar13 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = auVar25._8_8_;
    *(long *)(puVar2 + -0x18) = lVar14;
    *(undefined1 *****)(puVar2 + -0x10) = ppppuVar23;
    *(undefined **)(puVar2 + -8) = puVar24;
    puVar4 = puVar2 + -0x10;
    lVar14 = 8;
    uVar12 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar19);
    if (*(long *)(lVar19 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar19 + 0x28) + 0x18) < 8) {
        uVar12 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(lVar19 + 0x28) = uVar12;
      }
      *(undefined4 *)(lVar19 + 0x30) = 8;
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar19);
      *(int *)(lVar19 + 0x34) = (int)uVar11;
      return uVar11;
    }
    puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar26 = func_0x00f78af4();
    ppppuVar3 = (undefined1 ****)(puVar2 + -0x30);
    goto code_r0x016ce380;
  }
  puVar24 = &Core_Networking_SessionKartVisuals__AddExtra3;
  auVar25 = func_0x00f78af4();
  if (auVar25._0_8_ == 0) {
    ppppuVar3 = apppuStack_110 + 0x10;
    ppppuVar22 = apppuStack_110 + 0x10;
    apppuStack_110[0x11] = (undefined1 ***)&Core_Networking_SessionKartVisuals__AddExtra3;
    puVar24 = &Core_Networking_SessionKartVisuals__AddExtra2;
    apppuStack_110[0x10] = (undefined1 ***)ppppuVar23;
    auVar25 = func_0x00f78af4();
    if (auVar25._0_8_ == 0) {
      ppppuVar3 = apppuStack_110 + 0xe;
      ppppuVar22 = apppuStack_110 + 0xe;
      apppuStack_110[0xf] = (undefined1 ***)&Core_Networking_SessionKartVisuals__AddExtra2;
      puVar24 = &Core_Networking_SessionKartVisuals__AddExtra1;
      apppuStack_110[0xe] = (undefined1 ***)(apppuStack_110 + 0x10);
      auVar25 = func_0x00f78af4();
      if (auVar25._0_8_ == 0) {
        ppppuVar3 = apppuStack_110 + 0xc;
        ppppuVar22 = apppuStack_110 + 0xc;
        apppuStack_110[0xd] = (undefined1 ***)&Core_Networking_SessionKartVisuals__AddExtra1;
        puVar24 = &Core_Networking_SessionKartVisuals__AddWheels;
        apppuStack_110[0xc] = (undefined1 ***)(apppuStack_110 + 0xe);
        auVar25 = func_0x00f78af4();
        if (auVar25._0_8_ == 0) {
          ppppuVar3 = apppuStack_110 + 10;
          ppppuVar22 = apppuStack_110 + 10;
          apppuStack_110[0xb] = (undefined1 ***)&Core_Networking_SessionKartVisuals__AddWheels;
          puVar24 = &Core_Networking_SessionKartVisuals__AddAntenna;
          apppuStack_110[10] = (undefined1 ***)(apppuStack_110 + 0xc);
          auVar25 = func_0x00f78af4();
          if (auVar25._0_8_ == 0) {
            ppppuVar3 = apppuStack_110 + 8;
            ppppuVar22 = apppuStack_110 + 8;
            apppuStack_110[9] = (undefined1 ***)&Core_Networking_SessionKartVisuals__AddAntenna;
            puVar24 = &Core_Networking_SessionKartVisuals__AddGlider;
            apppuStack_110[8] = (undefined1 ***)(apppuStack_110 + 10);
            auVar25 = func_0x00f78af4();
            if (auVar25._0_8_ == 0) {
              ppppuVar3 = apppuStack_110 + 6;
              ppppuVar22 = apppuStack_110 + 6;
              apppuStack_110[7] = (undefined1 ***)&Core_Networking_SessionKartVisuals__AddGlider;
              puVar24 = &Core_Networking_SessionKartVisuals__AddKart;
              apppuStack_110[6] = (undefined1 ***)(apppuStack_110 + 8);
              auVar25 = func_0x00f78af4();
              if (auVar25._0_8_ == 0) {
                ppppuVar3 = apppuStack_110 + 4;
                ppppuVar22 = apppuStack_110 + 4;
                apppuStack_110[5] = (undefined1 ***)&Core_Networking_SessionKartVisuals__AddKart;
                puVar24 = &Core_Networking_SessionKartVisuals__AddCharacter;
                apppuStack_110[4] = (undefined1 ***)(apppuStack_110 + 6);
                auVar25 = func_0x00f78af4();
                if (auVar25._0_8_ == 0) {
                  apppuStack_110[3] =
                       (undefined1 ***)&Core_Networking_SessionKartVisuals__AddCharacter;
                  apppuStack_110[2] = (undefined1 ***)(apppuStack_110 + 4);
                  lVar14 = func_0x00f78af4();
                  puVar2 = &stack0xfffffffffffffee0;
                  apppuStack_110[1] =
                       (undefined1 ***)&Core_Networking_SessionKartVisuals__EndSessionKartVisuals;
                  ppppuVar23 = apppuStack_110;
                  apppuStack_110[0] = (undefined1 ***)(apppuStack_110 + 2);
                  if ((bRam0000000003eb5869 & 1) == 0) {
                    apppuStack_110[0] = (undefined1 ***)(apppuStack_110 + 2);
                    func_0x00f78a20(0x3d3f248);
                    bRam0000000003eb5869 = 1;
                  }
                  if (lVar14 == 0) {
                    puVar24 = &Core_Networking_SessionKartVisuals__StartSessionKartVisuals;
                    lVar14 = func_0x00f78af4();
                    auVar25._8_8_ = 0x3eb5000;
                    auVar25._0_8_ = lVar14;
                    if (lVar14 == 0) {
                      lVar14 = func_0x00f78af4();
                      return *(ulong *)(lVar14 + 8);
                    }
                    lVar14 = 0;
                    goto code_r0x016ce2a4;
                  }
                  uVar11 = 0x3eb5000;
                  if ((bRam0000000003eb5cd8 & 1) == 0) {
                    func_0x00f78a20(0x3d1f100,0);
                    bRam0000000003eb5cd8 = 1;
                  }
                  if (-1 < *(int *)(lVar14 + 0x30)) {
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,4,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar14,0);
                    uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar14);
                    unaff_x21 = (ulong)*(uint *)(lVar14 + 0x30);
                    uVar16 = *(uint *)(lVar14 + 0x30) - 1;
                    if (-2 < (int)uVar16) {
                      uVar16 = 0xffffffff;
                    }
                    unaff_x22 = (ulong)uVar16;
                    do {
                      uVar1 = (int)unaff_x21 - 1;
                      unaff_x21 = (ulong)uVar1;
                      iVar21 = (int)uVar11;
                      if ((int)uVar1 < 0) goto code_r0x016ceb30;
                      lVar19 = *(long *)(lVar14 + 0x28);
                      if (lVar19 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar19 + 0x18) <= uVar1) goto code_r0x016ced88;
                    } while (*(int *)(lVar19 + (ulong)uVar1 * 4 + 0x20) == 0);
                    unaff_x22 = unaff_x21 + 8;
                    do {
                      uVar17 = unaff_x22 - 8;
                      if (*(uint *)(lVar19 + 0x18) <= uVar17) goto code_r0x016ced88;
                      iVar9 = *(int *)(lVar19 + unaff_x22 * 4);
                      sVar5 = 0;
                      if (iVar9 != 0) {
                        sVar5 = (short)uVar11 - (short)iVar9;
                      }
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,2,0);
                      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar14,(int)sVar5);
                      lVar19 = *(long *)(lVar14 + 0x28);
                      if (lVar19 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar19 + 0x18) <= uVar17) goto code_r0x016ced88;
                      *(undefined4 *)(lVar19 + unaff_x22 * 4) = 0;
                      unaff_x22 = unaff_x22 - 1;
                      uVar16 = uVar1;
                    } while (0 < (long)uVar17);
code_r0x016ceb30:
                    uVar8 = *(undefined4 *)(lVar14 + 0x34);
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar14,(int)(short)((short)uVar11 - (short)uVar8));
                    uVar16 = uVar16 * 2 + 6;
                    unaff_x21 = (ulong)uVar16;
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar14,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar14,(int)(short)uVar16);
                    unaff_x22 = (ulong)*(uint *)(lVar14 + 0x40);
                    if (0 < (int)*(uint *)(lVar14 + 0x40)) {
                      uVar17 = 0;
                      do {
                        lVar19 = *(long *)(lVar14 + 0x18);
                        if (((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) ||
                           (lVar20 = *(long *)(lVar14 + 0x38), lVar20 == 0)) goto code_r0x016ced84;
                        if (*(uint *)(lVar20 + 0x18) <= uVar17) goto code_r0x016ced88;
                        uVar1 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) -
                                *(int *)(lVar20 + uVar17 * 4 + 0x20);
                        unaff_x21 = (ulong)uVar1;
                        uVar16 = *(uint *)(lVar14 + 0x10);
                        unaff_x22 = (ulong)uVar16;
                        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,unaff_x21,2);
                        if (*(long *)(lVar14 + 0x18) == 0) goto code_r0x016ced84;
                        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar14 + 0x18),unaff_x22,2);
                        if (sVar5 == sVar6) {
                          if (sVar5 < 3) {
code_r0x016cec64:
                            unaff_x21 = *(ulong *)(lVar14 + 0x38);
                            if (unaff_x21 == 0) goto code_r0x016ced84;
                            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar17) goto code_r0x016ced88;
                            iVar9 = *(int *)(unaff_x21 + uVar17 * 4 + 0x20);
                            if (iVar9 == 0) {
                              unaff_x22 = (ulong)*(uint *)(lVar14 + 0x40);
                              goto code_r0x016cecac;
                            }
                            unaff_x21 = *(ulong *)(lVar14 + 0x18);
                            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                            goto code_r0x016ced84;
                            iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar21;
                            *(int *)(lVar14 + 0x10) = iVar10;
                            iVar9 = iVar9 - iVar21;
                            goto code_r0x016ced3c;
                          }
                          iVar9 = 2;
                          while( true ) {
                            if (*(long *)(lVar14 + 0x18) == 0) goto code_r0x016ced84;
                            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar14 + 0x18),uVar1 + iVar9,2);
                            if (*(long *)(lVar14 + 0x18) == 0) goto code_r0x016ced84;
                            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar14 + 0x18),uVar16 + iVar9,2);
                            if (sVar6 != sVar7) break;
                            iVar9 = iVar9 + 2;
                            if (sVar5 <= iVar9) goto code_r0x016cec64;
                          }
                        }
                        uVar17 = uVar17 + 1;
                        unaff_x22 = (ulong)*(int *)(lVar14 + 0x40);
                      } while ((long)uVar17 < (long)unaff_x22);
                    }
                    unaff_x21 = *(ulong *)(lVar14 + 0x38);
                    if (unaff_x21 == 0) {
code_r0x016ced84:
                      func_0x00f78af4();
                    }
                    else {
code_r0x016cecac:
                      if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
                        unaff_x21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
                        lVar19 = *(long *)(lVar14 + 0x38);
                        if (lVar19 == 0) goto code_r0x016ced84;
                        /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
                        *(ulong *)(lVar14 + 0x38) = unaff_x21;
                        unaff_x22 = (ulong)*(uint *)(lVar14 + 0x40);
                      }
                      uVar16 = (uint)unaff_x22;
                      *(uint *)(lVar14 + 0x40) = uVar16 + 1;
                      uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar14);
                      if (unaff_x21 == 0) goto code_r0x016ced84;
                      if (uVar16 < *(uint *)(unaff_x21 + 0x18)) {
                        *(undefined4 *)(unaff_x21 + (long)(int)uVar16 * 4 + 0x20) = uVar8;
                        unaff_x21 = *(ulong *)(lVar14 + 0x18);
                        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                          iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                          iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar14);
                          iVar10 = iVar10 - iVar21;
                          iVar9 = iVar9 - iVar21;
code_r0x016ced3c:
                          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                          *(undefined4 *)(lVar14 + 0x30) = 0xffffffff;
                          return uVar11;
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
                  iVar21 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,uVar13);
                  uVar13 = func_0x00f78a24(0x3d56a30);
                  auVar27 = func_0x00f78ac0(uVar12,uVar13);
                  puStack_158 = &FlatBuffers_FlatBufferBuilder__Required;
                  ppppuVar23 = &pppuStack_160;
                  lVar14 = *(long *)(auVar27._0_8_ + 0x18);
                  iStack_184 = iVar21;
                  uStack_180 = unaff_x22;
                  uStack_178 = unaff_x21;
                  uStack_170 = uVar11;
                  uStack_168 = uVar12;
                  pppuStack_160 = (undefined1 ***)apppuStack_110;
                  if ((lVar14 != 0) && (*(long *)(lVar14 + 0x10) != 0)) {
                    iVar9 = *(int *)(*(long *)(lVar14 + 0x10) + 0x18) - auVar27._8_4_;
                    iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,iVar9,4);
                    lVar14 = *(long *)(auVar27._0_8_ + 0x18);
                    if (lVar14 != 0) {
                      uVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar14,(iVar9 - iVar10) + iVar21,2);
                      if ((uVar11 & 0xffff) != 0) {
                        return uVar11;
                      }
                      goto code_r0x016cee5c;
                    }
                  }
                  func_0x00f78af4();
code_r0x016cee5c:
                  uVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_184,0);
                  uVar13 = func_0x00f78a24(0x3d6ce88);
                  uVar15 = func_0x00f78a24(0x3d66338);
                  lVar14 = /*System.String$$Concat*/ func_0x029be39c(uVar13,uVar12,uVar15,0);
                  func_0x00f78a24(0x3d22a38);
                  uVar11 = func_0x00f78aec();
                  uVar13 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,lVar14);
                  uVar12 = func_0x00f78a24(0x3d56a50);
                  puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
                  auVar25 = func_0x00f78ac0(uVar11,uVar12);
                  puVar4 = auStack_190;
                  do {
                    uVar17 = auVar25._8_8_;
                    lVar19 = auVar25._0_8_;
                    *(ulong *)(puVar4 + -0x20) = uVar11;
                    *(long *)(puVar4 + -0x18) = lVar14;
                    *(undefined1 *****)(puVar4 + -0x10) = ppppuVar23;
                    *(undefined **)(puVar4 + -8) = puVar24;
                    ppppuVar23 = (undefined1 ****)(puVar4 + -0x10);
                    if ((int)uVar13 == 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),4);
                      uVar11 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar17);
code_r0x016cef70:
                      if (*(long *)(lVar19 + 0x18) != 0) {
                        *(undefined4 *)(*(long *)(lVar19 + 0x18) + 0x18) =
                             *(undefined4 *)(lVar19 + 0x10);
                        return uVar11;
                      }
                    }
                    else if (lVar19 != 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),8);
                      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar17);
                      if ((*(long *)(lVar19 + 0x18) != 0) &&
                         (lVar14 = *(long *)(*(long *)(lVar19 + 0x18) + 0x10), lVar14 != 0)) {
                        uVar17 = (ulong)(uint)(*(int *)(lVar14 + 0x18) - *(int *)(lVar19 + 0x10));
                        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
                        uVar11 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,uVar17);
                        goto code_r0x016cef70;
                      }
                    }
                    puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
                    auVar25 = func_0x00f78af4();
                    uVar13 = 0;
                    puVar4 = puVar4 + -0x20;
                    lVar14 = lVar19;
                    uVar11 = uVar17;
                  } while( true );
                }
                uVar12 = 0;
              }
              else {
                uVar12 = 1;
              }
            }
            else {
              uVar12 = 2;
            }
          }
          else {
            uVar12 = 3;
          }
        }
        else {
          uVar12 = 4;
        }
      }
      else {
        uVar12 = 5;
      }
    }
    else {
      uVar12 = 6;
    }
  }
  else {
    uVar12 = 7;
    ppppuVar22 = ppppuVar23;
  }
  uVar11 = auVar25._0_8_;
  auVar26._8_8_ = uVar12;
  auVar26._0_8_ = uVar11;
  param_4 = 0;
  *(ulong *)((long)ppppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)ppppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppppuVar3 + -0x20) = unaff_x20;
  *(int **)((long)ppppuVar3 + -0x18) = param_1;
  *(undefined1 *****)((long)ppppuVar3 + -0x10) = ppppuVar22;
  *(undefined **)((long)ppppuVar3 + -8) = puVar24;
  if ((auVar25._8_4_ == 0) && (*(char *)(uVar11 + 0x48) == '\0')) {
    return uVar11;
  }
  uVar13 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar11,auVar25._8_8_);
  puVar4 = *(undefined1 **)((long)ppppuVar3 + -0x10);
  puVar24 = *(undefined **)((long)ppppuVar3 + -8);
  lVar14 = *(long *)((long)ppppuVar3 + -0x20);
  lVar19 = *(long *)((long)ppppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)ppppuVar3 + -0x30);
  uVar12 = *(undefined8 *)((long)ppppuVar3 + -0x28);
code_r0x016ce380:
  do {
    uVar15 = auVar26._8_8_;
    *(long *)((long)ppppuVar3 + -0x20) = lVar14;
    *(long *)((long)ppppuVar3 + -0x18) = lVar19;
    *(undefined1 **)((long)ppppuVar3 + -0x10) = puVar4;
    *(undefined **)((long)ppppuVar3 + -8) = puVar24;
    uVar16 = auVar26._8_4_;
    if ((int)uVar16 < *(int *)(auVar26._0_8_ + 0x30)) {
      lVar14 = *(long *)(auVar26._0_8_ + 0x28);
      uVar11 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar18 = uVar13;
      if (lVar14 == 0) goto code_r0x016ce410;
      if (uVar16 < *(uint *)(lVar14 + 0x18)) {
        *(int *)(lVar14 + (long)(int)uVar16 * 4 + 0x20) = (int)uVar11;
        return uVar11;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar15 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6ceb8);
      uVar18 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar15,uVar13);
      uVar13 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar15,uVar13);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar13 = func_0x00f78b24();
    auVar26 = func_0x00f78ac0(uVar13,0);
    uVar11 = auVar26._0_8_;
    *(ulong *)((long)ppppuVar3 + -0x50) = unaff_x22;
    *(undefined8 *)((long)ppppuVar3 + -0x48) = uVar12;
    *(long *)((long)ppppuVar3 + -0x40) = lVar14;
    *(undefined8 *)((long)ppppuVar3 + -0x38) = uVar15;
    *(undefined1 **)((long)ppppuVar3 + -0x30) = (undefined1 *)((long)ppppuVar3 + -0x10);
    *(undefined **)((long)ppppuVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar18 == (int)param_4) && (*(char *)(uVar11 + 0x48) == '\0')) {
      return uVar11;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar11,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar11,uVar18);
    puVar4 = *(undefined1 **)((long)ppppuVar3 + -0x30);
    puVar24 = *(undefined **)((long)ppppuVar3 + -0x28);
    lVar14 = *(long *)((long)ppppuVar3 + -0x40);
    lVar19 = *(long *)((long)ppppuVar3 + -0x38);
    unaff_x22 = *(ulong *)((long)ppppuVar3 + -0x50);
    uVar12 = *(undefined8 *)((long)ppppuVar3 + -0x48);
    ppppuVar3 = (undefined1 ****)((long)ppppuVar3 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x1662364 | Core.Networking.SessionKartVisuals.CreateSessionKartVisuals
// ============================================================

/* WARNING: Possible PIC construction at 0x016623b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016623f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01662410: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016623fc) */
/* WARNING: Removing unreachable block (ram,0x016623e4) */
/* WARNING: Removing unreachable block (ram,0x016623cc) */
/* WARNING: Removing unreachable block (ram,0x016623b4) */
/* WARNING: Removing unreachable block (ram,0x01662414) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__CreateSessionKartVisuals
                (long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined ****ppppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 unaff_x19;
  int iVar19;
  undefined8 unaff_x20;
  ulong uVar20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar21;
  undefined ****ppppuVar22;
  undefined ****ppppuVar23;
  undefined *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  ulong auStack_190 [4];
  undefined1 auStack_170 [12];
  int iStack_164;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined ***pppuStack_140;
  undefined *puStack_138;
  undefined ***apppuStack_f0 [18];
  
  ppppuVar3 = (undefined ****)&stack0xffffffffffffffa0;
  puVar2 = &stack0xffffffffffffffa0;
  ppppuVar23 = (undefined ****)&stack0xfffffffffffffff0;
  if (param_1 != 0) {
    puVar24 = (undefined *)0x16623b4;
    lVar13 = param_1;
    unaff_x21 = param_3;
    unaff_x22 = param_4;
code_r0x016ce2a4:
    uVar12 = 0;
    *(ulong *)(puVar2 + -0x30) = unaff_x22;
    *(ulong *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = param_2;
    *(long *)(puVar2 + -0x18) = lVar13;
    *(undefined *****)(puVar2 + -0x10) = ppppuVar23;
    *(undefined **)(puVar2 + -8) = puVar24;
    puVar4 = puVar2 + -0x10;
    lVar13 = 8;
    uVar11 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 8) {
        uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(param_1 + 0x28) = uVar11;
      }
      *(undefined4 *)(param_1 + 0x30) = 8;
      uVar20 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(param_1);
      *(int *)(param_1 + 0x34) = (int)uVar20;
      return uVar20;
    }
    puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
    auVar25 = func_0x00f78af4();
    ppppuVar3 = (undefined ****)(puVar2 + -0x30);
    goto code_r0x016ce380;
  }
  puVar24 = &Core_Networking_SessionKartVisuals__AddExtra3;
  auVar26 = func_0x00f78af4();
  if (auVar26._0_8_ == 0) {
    ppppuVar3 = apppuStack_f0 + 0x10;
    ppppuVar22 = apppuStack_f0 + 0x10;
    apppuStack_f0[0x11] = (undefined ***)&Core_Networking_SessionKartVisuals__AddExtra3;
    puVar24 = &Core_Networking_SessionKartVisuals__AddExtra2;
    apppuStack_f0[0x10] = (undefined ***)ppppuVar23;
    auVar26 = func_0x00f78af4();
    if (auVar26._0_8_ == 0) {
      ppppuVar3 = apppuStack_f0 + 0xe;
      ppppuVar22 = apppuStack_f0 + 0xe;
      apppuStack_f0[0xf] = (undefined ***)&Core_Networking_SessionKartVisuals__AddExtra2;
      puVar24 = &Core_Networking_SessionKartVisuals__AddExtra1;
      apppuStack_f0[0xe] = (undefined ***)(apppuStack_f0 + 0x10);
      auVar26 = func_0x00f78af4();
      if (auVar26._0_8_ == 0) {
        ppppuVar3 = apppuStack_f0 + 0xc;
        ppppuVar22 = apppuStack_f0 + 0xc;
        apppuStack_f0[0xd] = (undefined ***)&Core_Networking_SessionKartVisuals__AddExtra1;
        puVar24 = &Core_Networking_SessionKartVisuals__AddWheels;
        apppuStack_f0[0xc] = (undefined ***)(apppuStack_f0 + 0xe);
        auVar26 = func_0x00f78af4();
        if (auVar26._0_8_ == 0) {
          ppppuVar3 = apppuStack_f0 + 10;
          ppppuVar22 = apppuStack_f0 + 10;
          apppuStack_f0[0xb] = (undefined ***)&Core_Networking_SessionKartVisuals__AddWheels;
          puVar24 = &Core_Networking_SessionKartVisuals__AddAntenna;
          apppuStack_f0[10] = (undefined ***)(apppuStack_f0 + 0xc);
          auVar26 = func_0x00f78af4();
          if (auVar26._0_8_ == 0) {
            ppppuVar3 = apppuStack_f0 + 8;
            ppppuVar22 = apppuStack_f0 + 8;
            apppuStack_f0[9] = (undefined ***)&Core_Networking_SessionKartVisuals__AddAntenna;
            puVar24 = &Core_Networking_SessionKartVisuals__AddGlider;
            apppuStack_f0[8] = (undefined ***)(apppuStack_f0 + 10);
            auVar26 = func_0x00f78af4();
            if (auVar26._0_8_ == 0) {
              ppppuVar3 = apppuStack_f0 + 6;
              ppppuVar22 = apppuStack_f0 + 6;
              apppuStack_f0[7] = (undefined ***)&Core_Networking_SessionKartVisuals__AddGlider;
              puVar24 = &Core_Networking_SessionKartVisuals__AddKart;
              apppuStack_f0[6] = (undefined ***)(apppuStack_f0 + 8);
              auVar26 = func_0x00f78af4();
              if (auVar26._0_8_ == 0) {
                ppppuVar3 = apppuStack_f0 + 4;
                ppppuVar22 = apppuStack_f0 + 4;
                apppuStack_f0[5] = (undefined ***)&Core_Networking_SessionKartVisuals__AddKart;
                puVar24 = &Core_Networking_SessionKartVisuals__AddCharacter;
                apppuStack_f0[4] = (undefined ***)(apppuStack_f0 + 6);
                auVar26 = func_0x00f78af4();
                if (auVar26._0_8_ == 0) {
                  apppuStack_f0[3] =
                       (undefined ***)&Core_Networking_SessionKartVisuals__AddCharacter;
                  apppuStack_f0[2] = (undefined ***)(apppuStack_f0 + 4);
                  lVar13 = func_0x00f78af4();
                  puVar2 = &stack0xffffffffffffff00;
                  apppuStack_f0[1] =
                       (undefined ***)&Core_Networking_SessionKartVisuals__EndSessionKartVisuals;
                  ppppuVar23 = apppuStack_f0;
                  param_2 = 0x3eb5000;
                  apppuStack_f0[0] = (undefined ***)(apppuStack_f0 + 2);
                  if ((bRam0000000003eb5869 & 1) == 0) {
                    apppuStack_f0[0] = (undefined ***)(apppuStack_f0 + 2);
                    func_0x00f78a20(0x3d3f248);
                    bRam0000000003eb5869 = 1;
                  }
                  if (lVar13 == 0) {
                    puVar24 = &Core_Networking_SessionKartVisuals__StartSessionKartVisuals;
                    param_1 = func_0x00f78af4();
                    if (param_1 == 0) {
                      lVar13 = func_0x00f78af4();
                      return *(ulong *)(lVar13 + 8);
                    }
                    lVar13 = 0;
                    goto code_r0x016ce2a4;
                  }
                  uVar20 = 0x3eb5000;
                  if ((bRam0000000003eb5cd8 & 1) == 0) {
                    func_0x00f78a20(0x3d1f100,0);
                    bRam0000000003eb5cd8 = 1;
                  }
                  if (-1 < *(int *)(lVar13 + 0x30)) {
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,4,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar13,0);
                    uVar20 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar13);
                    unaff_x21 = (ulong)*(uint *)(lVar13 + 0x30);
                    uVar15 = *(uint *)(lVar13 + 0x30) - 1;
                    if (-2 < (int)uVar15) {
                      uVar15 = 0xffffffff;
                    }
                    unaff_x22 = (ulong)uVar15;
                    do {
                      uVar1 = (int)unaff_x21 - 1;
                      unaff_x21 = (ulong)uVar1;
                      iVar19 = (int)uVar20;
                      if ((int)uVar1 < 0) goto code_r0x016ceb30;
                      lVar17 = *(long *)(lVar13 + 0x28);
                      if (lVar17 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar17 + 0x18) <= uVar1) goto code_r0x016ced88;
                    } while (*(int *)(lVar17 + (ulong)uVar1 * 4 + 0x20) == 0);
                    unaff_x22 = unaff_x21 + 8;
                    do {
                      uVar21 = unaff_x22 - 8;
                      if (*(uint *)(lVar17 + 0x18) <= uVar21) goto code_r0x016ced88;
                      iVar9 = *(int *)(lVar17 + unaff_x22 * 4);
                      sVar5 = 0;
                      if (iVar9 != 0) {
                        sVar5 = (short)uVar20 - (short)iVar9;
                      }
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
                      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)sVar5);
                      lVar17 = *(long *)(lVar13 + 0x28);
                      if (lVar17 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar17 + 0x18) <= uVar21) goto code_r0x016ced88;
                      *(undefined4 *)(lVar17 + unaff_x22 * 4) = 0;
                      unaff_x22 = unaff_x22 - 1;
                      uVar15 = uVar1;
                    } while (0 < (long)uVar21);
code_r0x016ceb30:
                    uVar8 = *(undefined4 *)(lVar13 + 0x34);
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)((short)uVar20 - (short)uVar8));
                    uVar15 = uVar15 * 2 + 6;
                    unaff_x21 = (ulong)uVar15;
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar13,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar13,(int)(short)uVar15);
                    unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
                    if (0 < (int)*(uint *)(lVar13 + 0x40)) {
                      uVar21 = 0;
                      do {
                        lVar17 = *(long *)(lVar13 + 0x18);
                        if (((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) ||
                           (lVar18 = *(long *)(lVar13 + 0x38), lVar18 == 0)) goto code_r0x016ced84;
                        if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x016ced88;
                        uVar1 = *(int *)(*(long *)(lVar17 + 0x10) + 0x18) -
                                *(int *)(lVar18 + uVar21 * 4 + 0x20);
                        unaff_x21 = (ulong)uVar1;
                        uVar15 = *(uint *)(lVar13 + 0x10);
                        unaff_x22 = (ulong)uVar15;
                        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar17,unaff_x21,2);
                        if (*(long *)(lVar13 + 0x18) == 0) goto code_r0x016ced84;
                        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar13 + 0x18),unaff_x22,2);
                        if (sVar5 == sVar6) {
                          if (sVar5 < 3) {
code_r0x016cec64:
                            unaff_x21 = *(ulong *)(lVar13 + 0x38);
                            if (unaff_x21 == 0) goto code_r0x016ced84;
                            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar21) goto code_r0x016ced88;
                            iVar9 = *(int *)(unaff_x21 + uVar21 * 4 + 0x20);
                            if (iVar9 == 0) {
                              unaff_x22 = (ulong)*(uint *)(lVar13 + 0x40);
                              goto code_r0x016cecac;
                            }
                            unaff_x21 = *(ulong *)(lVar13 + 0x18);
                            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                            goto code_r0x016ced84;
                            iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar19;
                            *(int *)(lVar13 + 0x10) = iVar10;
                            iVar9 = iVar9 - iVar19;
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
                        uVar21 = uVar21 + 1;
                        unaff_x22 = (ulong)*(int *)(lVar13 + 0x40);
                      } while ((long)uVar21 < (long)unaff_x22);
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
                        lVar17 = *(long *)(lVar13 + 0x38);
                        if (lVar17 == 0) goto code_r0x016ced84;
                        /*System.Array$$Copy*/ func_0x0292c49c(lVar17,unaff_x21,*(undefined4 *)(lVar17 + 0x18),0);
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
                          iVar10 = iVar10 - iVar19;
                          iVar9 = iVar9 - iVar19;
code_r0x016ced3c:
                          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                          *(undefined4 *)(lVar13 + 0x30) = 0xffffffff;
                          return uVar20;
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
                  iVar19 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar11,uVar12);
                  uVar12 = func_0x00f78a24(0x3d56a30);
                  auVar27 = func_0x00f78ac0(uVar11,uVar12);
                  puStack_138 = &FlatBuffers_FlatBufferBuilder__Required;
                  ppppuVar23 = &pppuStack_140;
                  lVar13 = *(long *)(auVar27._0_8_ + 0x18);
                  iStack_164 = iVar19;
                  uStack_160 = unaff_x22;
                  uStack_158 = unaff_x21;
                  uStack_150 = uVar20;
                  uStack_148 = uVar11;
                  pppuStack_140 = (undefined ***)apppuStack_f0;
                  if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
                    iVar9 = *(int *)(*(long *)(lVar13 + 0x10) + 0x18) - auVar27._8_4_;
                    iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar13,iVar9,4);
                    lVar13 = *(long *)(auVar27._0_8_ + 0x18);
                    if (lVar13 != 0) {
                      uVar20 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar13,(iVar9 - iVar10) + iVar19,2);
                      if ((uVar20 & 0xffff) != 0) {
                        return uVar20;
                      }
                      goto code_r0x016cee5c;
                    }
                  }
                  func_0x00f78af4();
code_r0x016cee5c:
                  uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_164,0);
                  uVar12 = func_0x00f78a24(0x3d6ce88);
                  uVar14 = func_0x00f78a24(0x3d66338);
                  lVar13 = /*System.String$$Concat*/ func_0x029be39c(uVar12,uVar11,uVar14,0);
                  func_0x00f78a24(0x3d22a38);
                  uVar20 = func_0x00f78aec();
                  uVar12 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar20,lVar13);
                  uVar11 = func_0x00f78a24(0x3d56a50);
                  puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
                  auVar26 = func_0x00f78ac0(uVar20,uVar11);
                  puVar4 = auStack_170;
                  do {
                    uVar21 = auVar26._8_8_;
                    lVar17 = auVar26._0_8_;
                    *(ulong *)(puVar4 + -0x20) = uVar20;
                    *(long *)(puVar4 + -0x18) = lVar13;
                    *(undefined *****)(puVar4 + -0x10) = ppppuVar23;
                    *(undefined **)(puVar4 + -8) = puVar24;
                    ppppuVar23 = (undefined ****)(puVar4 + -0x10);
                    if ((int)uVar12 == 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,*(undefined4 *)(lVar17 + 0x20),4);
                      uVar20 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar17,uVar21);
code_r0x016cef70:
                      if (*(long *)(lVar17 + 0x18) != 0) {
                        *(undefined4 *)(*(long *)(lVar17 + 0x18) + 0x18) =
                             *(undefined4 *)(lVar17 + 0x10);
                        return uVar20;
                      }
                    }
                    else if (lVar17 != 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,*(undefined4 *)(lVar17 + 0x20),8);
                      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar17,uVar21);
                      if ((*(long *)(lVar17 + 0x18) != 0) &&
                         (lVar13 = *(long *)(*(long *)(lVar17 + 0x18) + 0x10), lVar13 != 0)) {
                        uVar21 = (ulong)(uint)(*(int *)(lVar13 + 0x18) - *(int *)(lVar17 + 0x10));
                        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,4,0);
                        uVar20 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar17,uVar21);
                        goto code_r0x016cef70;
                      }
                    }
                    puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
                    auVar26 = func_0x00f78af4();
                    uVar12 = 0;
                    puVar4 = puVar4 + -0x20;
                    lVar13 = lVar17;
                    uVar20 = uVar21;
                  } while( true );
                }
                uVar11 = 0;
              }
              else {
                uVar11 = 1;
              }
            }
            else {
              uVar11 = 2;
            }
          }
          else {
            uVar11 = 3;
          }
        }
        else {
          uVar11 = 4;
        }
      }
      else {
        uVar11 = 5;
      }
    }
    else {
      uVar11 = 6;
    }
  }
  else {
    uVar11 = 7;
    ppppuVar22 = ppppuVar23;
  }
  uVar20 = auVar26._0_8_;
  auVar25._8_8_ = uVar11;
  auVar25._0_8_ = uVar20;
  param_4 = 0;
  *(ulong *)((long)ppppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)ppppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppppuVar3 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppppuVar3 + -0x18) = unaff_x19;
  *(undefined *****)((long)ppppuVar3 + -0x10) = ppppuVar22;
  *(undefined **)((long)ppppuVar3 + -8) = puVar24;
  if ((auVar26._8_4_ == 0) && (*(char *)(uVar20 + 0x48) == '\0')) {
    return uVar20;
  }
  uVar12 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar20,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar20,auVar26._8_8_);
  puVar4 = *(undefined1 **)((long)ppppuVar3 + -0x10);
  puVar24 = *(undefined **)((long)ppppuVar3 + -8);
  lVar13 = *(long *)((long)ppppuVar3 + -0x20);
  param_1 = *(long *)((long)ppppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)ppppuVar3 + -0x30);
  uVar11 = *(undefined8 *)((long)ppppuVar3 + -0x28);
code_r0x016ce380:
  do {
    uVar14 = auVar25._8_8_;
    *(long *)((long)ppppuVar3 + -0x20) = lVar13;
    *(long *)((long)ppppuVar3 + -0x18) = param_1;
    *(undefined1 **)((long)ppppuVar3 + -0x10) = puVar4;
    *(undefined **)((long)ppppuVar3 + -8) = puVar24;
    uVar15 = auVar25._8_4_;
    if ((int)uVar15 < *(int *)(auVar25._0_8_ + 0x30)) {
      lVar13 = *(long *)(auVar25._0_8_ + 0x28);
      uVar20 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar16 = uVar12;
      if (lVar13 == 0) goto code_r0x016ce410;
      if (uVar15 < *(uint *)(lVar13 + 0x18)) {
        *(int *)(lVar13 + (long)(int)uVar15 * 4 + 0x20) = (int)uVar20;
        return uVar20;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar14 = func_0x00f78aec();
      uVar12 = func_0x00f78a24(0x3d6ceb8);
      uVar16 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar14,uVar12);
      uVar12 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar14,uVar12);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar12 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar12,0);
    uVar20 = auVar25._0_8_;
    *(ulong *)((long)ppppuVar3 + -0x50) = unaff_x22;
    *(undefined8 *)((long)ppppuVar3 + -0x48) = uVar11;
    *(long *)((long)ppppuVar3 + -0x40) = lVar13;
    *(undefined8 *)((long)ppppuVar3 + -0x38) = uVar14;
    *(undefined1 **)((long)ppppuVar3 + -0x30) = (undefined1 *)((long)ppppuVar3 + -0x10);
    *(undefined **)((long)ppppuVar3 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar16 == (int)param_4) && (*(char *)(uVar20 + 0x48) == '\0')) {
      return uVar20;
    }
    uVar12 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar20,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar20,uVar16);
    puVar4 = *(undefined1 **)((long)ppppuVar3 + -0x30);
    puVar24 = *(undefined **)((long)ppppuVar3 + -0x28);
    lVar13 = *(long *)((long)ppppuVar3 + -0x40);
    param_1 = *(long *)((long)ppppuVar3 + -0x38);
    unaff_x22 = *(ulong *)((long)ppppuVar3 + -0x50);
    uVar11 = *(undefined8 *)((long)ppppuVar3 + -0x48);
    ppppuVar3 = (undefined ****)((long)ppppuVar3 + -0x20);
  } while( true );
}



// ============================================================
// RVA: 0x1662438 | Core.Networking.SessionKartVisuals.AddExtra3
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__AddExtra3
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 unaff_x19;
  int iVar19;
  undefined8 unaff_x20;
  long lVar20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar21;
  undefined1 **unaff_x29;
  undefined1 ***pppuVar22;
  undefined *unaff_x30;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
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
  undefined1 *puStack_70;
  undefined *puStack_68;
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
  
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = param_1;
  if (param_1 == 0) {
    ppuVar3 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x29 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x30 = &Core_Networking_SessionKartVisuals__AddExtra2;
    auVar24 = func_0x00f78af4();
    if (auVar24._0_8_ == 0) {
      ppuVar3 = &puStack_20;
      unaff_x29 = &puStack_20;
      puStack_18 = &Core_Networking_SessionKartVisuals__AddExtra2;
      unaff_x30 = &Core_Networking_SessionKartVisuals__AddExtra1;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar24 = func_0x00f78af4();
      if (auVar24._0_8_ == 0) {
        ppuVar3 = &puStack_30;
        unaff_x29 = &puStack_30;
        puStack_28 = &Core_Networking_SessionKartVisuals__AddExtra1;
        unaff_x30 = &Core_Networking_SessionKartVisuals__AddWheels;
        puStack_30 = (undefined1 *)&puStack_20;
        auVar24 = func_0x00f78af4();
        if (auVar24._0_8_ == 0) {
          ppuVar3 = &puStack_40;
          unaff_x29 = &puStack_40;
          puStack_38 = &Core_Networking_SessionKartVisuals__AddWheels;
          unaff_x30 = &Core_Networking_SessionKartVisuals__AddAntenna;
          puStack_40 = (undefined1 *)&puStack_30;
          auVar24 = func_0x00f78af4();
          if (auVar24._0_8_ == 0) {
            ppuVar3 = &puStack_50;
            unaff_x29 = &puStack_50;
            puStack_48 = &Core_Networking_SessionKartVisuals__AddAntenna;
            unaff_x30 = &Core_Networking_SessionKartVisuals__AddGlider;
            puStack_50 = (undefined1 *)&puStack_40;
            auVar24 = func_0x00f78af4();
            if (auVar24._0_8_ == 0) {
              ppuVar3 = &puStack_60;
              unaff_x29 = &puStack_60;
              puStack_58 = &Core_Networking_SessionKartVisuals__AddGlider;
              unaff_x30 = &Core_Networking_SessionKartVisuals__AddKart;
              puStack_60 = (undefined1 *)&puStack_50;
              auVar24 = func_0x00f78af4();
              if (auVar24._0_8_ == 0) {
                ppuVar3 = &puStack_70;
                unaff_x29 = &puStack_70;
                puStack_68 = &Core_Networking_SessionKartVisuals__AddKart;
                unaff_x30 = &Core_Networking_SessionKartVisuals__AddCharacter;
                puStack_70 = (undefined1 *)&puStack_60;
                auVar24 = func_0x00f78af4();
                if (auVar24._0_8_ == 0) {
                  puStack_78 = &Core_Networking_SessionKartVisuals__AddCharacter;
                  puStack_80 = (undefined1 *)&puStack_70;
                  lVar11 = func_0x00f78af4();
                  puStack_88 = &Core_Networking_SessionKartVisuals__EndSessionKartVisuals;
                  puStack_90 = (undefined1 *)&puStack_80;
                  if ((bRam0000000003eb5869 & 1) == 0) {
                    puStack_90 = (undefined1 *)&puStack_80;
                    func_0x00f78a20(0x3d3f248);
                    bRam0000000003eb5869 = 1;
                  }
                  if (lVar11 == 0) {
                    lVar11 = func_0x00f78af4();
                    if (lVar11 == 0) {
                      lVar11 = func_0x00f78af4();
                      return *(ulong *)(lVar11 + 8);
                    }
                    uVar17 = 0;
                    puVar2 = &stack0xffffffffffffff30;
                    puVar4 = &stack0xffffffffffffff50;
                    lVar20 = 8;
                    uVar15 = 0x3eb5000;
                    if ((bRam0000000003eb5cd7 & 1) == 0) {
                      func_0x00f78a20(0x3d1f100);
                      bRam0000000003eb5cd7 = 1;
                    }
                    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar11);
                    if (*(long *)(lVar11 + 0x28) != 0) {
                      if (*(int *)(*(long *)(lVar11 + 0x28) + 0x18) < 8) {
                        uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
                        *(undefined8 *)(lVar11 + 0x28) = uVar15;
                      }
                      *(undefined4 *)(lVar11 + 0x30) = 8;
                      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                      *(int *)(lVar11 + 0x34) = (int)uVar12;
                      return uVar12;
                    }
                    puVar23 = &FlatBuffers_FlatBufferBuilder__Slot;
                    auVar25 = func_0x00f78af4();
                    goto code_r0x016ce380;
                  }
                  uVar12 = 0x3eb5000;
                  if ((bRam0000000003eb5cd8 & 1) == 0) {
                    func_0x00f78a20(0x3d1f100,0);
                    bRam0000000003eb5cd8 = 1;
                  }
                  if (-1 < *(int *)(lVar11 + 0x30)) {
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,0);
                    uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                    unaff_x21 = (ulong)*(uint *)(lVar11 + 0x30);
                    uVar14 = *(uint *)(lVar11 + 0x30) - 1;
                    if (-2 < (int)uVar14) {
                      uVar14 = 0xffffffff;
                    }
                    unaff_x22 = (ulong)uVar14;
                    do {
                      uVar1 = (int)unaff_x21 - 1;
                      unaff_x21 = (ulong)uVar1;
                      iVar19 = (int)uVar12;
                      if ((int)uVar1 < 0) goto code_r0x016ceb30;
                      lVar20 = *(long *)(lVar11 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
                    } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
                    unaff_x22 = unaff_x21 + 8;
                    do {
                      uVar21 = unaff_x22 - 8;
                      if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
                      iVar9 = *(int *)(lVar20 + unaff_x22 * 4);
                      sVar5 = 0;
                      if (iVar9 != 0) {
                        sVar5 = (short)uVar12 - (short)iVar9;
                      }
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
                      /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar5);
                      lVar20 = *(long *)(lVar11 + 0x28);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
                      *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
                      unaff_x22 = unaff_x22 - 1;
                      uVar14 = uVar1;
                    } while (0 < (long)uVar21);
code_r0x016ceb30:
                    uVar8 = *(undefined4 *)(lVar11 + 0x34);
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)((short)uVar12 - (short)uVar8));
                    uVar14 = uVar14 * 2 + 6;
                    unaff_x21 = (ulong)uVar14;
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)uVar14);
                    unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                    if (0 < (int)*(uint *)(lVar11 + 0x40)) {
                      uVar21 = 0;
                      do {
                        lVar20 = *(long *)(lVar11 + 0x18);
                        if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                           (lVar18 = *(long *)(lVar11 + 0x38), lVar18 == 0)) goto code_r0x016ced84;
                        if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x016ced88;
                        uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                                *(int *)(lVar18 + uVar21 * 4 + 0x20);
                        unaff_x21 = (ulong)uVar1;
                        uVar14 = *(uint *)(lVar11 + 0x10);
                        unaff_x22 = (ulong)uVar14;
                        sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                        if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
                        if (sVar5 == sVar6) {
                          if (sVar5 < 3) {
code_r0x016cec64:
                            unaff_x21 = *(ulong *)(lVar11 + 0x38);
                            if (unaff_x21 == 0) goto code_r0x016ced84;
                            if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar21) goto code_r0x016ced88;
                            iVar9 = *(int *)(unaff_x21 + uVar21 * 4 + 0x20);
                            if (iVar9 == 0) {
                              unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                              goto code_r0x016cecac;
                            }
                            unaff_x21 = *(ulong *)(lVar11 + 0x18);
                            if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                            goto code_r0x016ced84;
                            iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar19;
                            *(int *)(lVar11 + 0x10) = iVar10;
                            iVar9 = iVar9 - iVar19;
                            goto code_r0x016ced3c;
                          }
                          iVar9 = 2;
                          while( true ) {
                            if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                            sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar1 + iVar9,2);
                            if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                            sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar14 + iVar9,2);
                            if (sVar6 != sVar7) break;
                            iVar9 = iVar9 + 2;
                            if (sVar5 <= iVar9) goto code_r0x016cec64;
                          }
                        }
                        uVar21 = uVar21 + 1;
                        unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
                      } while ((long)uVar21 < (long)unaff_x22);
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
                        lVar20 = *(long *)(lVar11 + 0x38);
                        if (lVar20 == 0) goto code_r0x016ced84;
                        /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                        *(ulong *)(lVar11 + 0x38) = unaff_x21;
                        unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                      }
                      uVar14 = (uint)unaff_x22;
                      *(uint *)(lVar11 + 0x40) = uVar14 + 1;
                      uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                      if (unaff_x21 == 0) goto code_r0x016ced84;
                      if (uVar14 < *(uint *)(unaff_x21 + 0x18)) {
                        *(undefined4 *)(unaff_x21 + (long)(int)uVar14 * 4 + 0x20) = uVar8;
                        unaff_x21 = *(ulong *)(lVar11 + 0x18);
                        if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                          iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                          iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                          iVar10 = iVar10 - iVar19;
                          iVar9 = iVar9 - iVar19;
code_r0x016ced3c:
                          /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                          /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                          *(undefined4 *)(lVar11 + 0x30) = 0xffffffff;
                          return uVar12;
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
                  uVar17 = func_0x00f78a24(0x3d6cea8);
                  iVar19 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar17);
                  uVar17 = func_0x00f78a24(0x3d56a30);
                  auVar26 = func_0x00f78ac0(uVar15,uVar17);
                  puStack_d8 = &FlatBuffers_FlatBufferBuilder__Required;
                  pppuVar22 = &ppuStack_e0;
                  lVar11 = *(long *)(auVar26._0_8_ + 0x18);
                  iStack_104 = iVar19;
                  uStack_100 = unaff_x22;
                  uStack_f8 = unaff_x21;
                  uStack_f0 = uVar12;
                  uStack_e8 = uVar15;
                  ppuStack_e0 = &puStack_90;
                  if ((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) {
                    iVar9 = *(int *)(*(long *)(lVar11 + 0x10) + 0x18) - auVar26._8_4_;
                    iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,iVar9,4);
                    lVar11 = *(long *)(auVar26._0_8_ + 0x18);
                    if (lVar11 != 0) {
                      uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,(iVar9 - iVar10) + iVar19,2);
                      if ((uVar12 & 0xffff) != 0) {
                        return uVar12;
                      }
                      goto code_r0x016cee5c;
                    }
                  }
                  func_0x00f78af4();
code_r0x016cee5c:
                  uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_104,0);
                  uVar17 = func_0x00f78a24(0x3d6ce88);
                  uVar13 = func_0x00f78a24(0x3d66338);
                  lVar11 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar15,uVar13,0);
                  func_0x00f78a24(0x3d22a38);
                  uVar12 = func_0x00f78aec();
                  uVar17 = 0;
                  /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar11);
                  uVar15 = func_0x00f78a24(0x3d56a50);
                  puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
                  auVar24 = func_0x00f78ac0(uVar12,uVar15);
                  puVar4 = auStack_110;
                  do {
                    uVar21 = auVar24._8_8_;
                    lVar20 = auVar24._0_8_;
                    *(ulong *)(puVar4 + -0x20) = uVar12;
                    *(long *)(puVar4 + -0x18) = lVar11;
                    *(undefined1 ****)(puVar4 + -0x10) = pppuVar22;
                    *(undefined **)(puVar4 + -8) = puVar23;
                    pppuVar22 = (undefined1 ***)(puVar4 + -0x10);
                    if ((int)uVar17 == 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
                      uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
code_r0x016cef70:
                      if (*(long *)(lVar20 + 0x18) != 0) {
                        *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) =
                             *(undefined4 *)(lVar20 + 0x10);
                        return uVar12;
                      }
                    }
                    else if (lVar20 != 0) {
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
                      /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
                      if ((*(long *)(lVar20 + 0x18) != 0) &&
                         (lVar11 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar11 != 0)) {
                        uVar21 = (ulong)(uint)(*(int *)(lVar11 + 0x18) - *(int *)(lVar20 + 0x10));
                        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                        uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar21);
                        goto code_r0x016cef70;
                      }
                    }
                    puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
                    auVar24 = func_0x00f78af4();
                    uVar17 = 0;
                    puVar4 = puVar4 + -0x20;
                    lVar11 = lVar20;
                    uVar12 = uVar21;
                  } while( true );
                }
                uVar15 = 0;
              }
              else {
                uVar15 = 1;
              }
            }
            else {
              uVar15 = 2;
            }
          }
          else {
            uVar15 = 3;
          }
        }
        else {
          uVar15 = 4;
        }
      }
      else {
        uVar15 = 5;
      }
    }
    else {
      uVar15 = 6;
    }
  }
  else {
    uVar15 = 7;
    ppuVar3 = (undefined1 **)register0x00000008;
  }
  uVar12 = auVar24._0_8_;
  auVar25._8_8_ = uVar15;
  auVar25._0_8_ = uVar12;
  param_4 = 0;
  *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppuVar3 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar3 + -8) = unaff_x30;
  if ((auVar24._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
    return uVar12;
  }
  uVar17 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar12,auVar24._8_8_);
  puVar4 = *(undefined1 **)((long)ppuVar3 + -0x10);
  puVar23 = *(undefined **)((long)ppuVar3 + -8);
  lVar20 = *(long *)((long)ppuVar3 + -0x20);
  lVar11 = *(long *)((long)ppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
  uVar15 = *(undefined8 *)((long)ppuVar3 + -0x28);
  puVar2 = (undefined1 *)ppuVar3;
code_r0x016ce380:
  do {
    uVar13 = auVar25._8_8_;
    *(long *)(puVar2 + -0x20) = lVar20;
    *(long *)(puVar2 + -0x18) = lVar11;
    *(undefined1 **)(puVar2 + -0x10) = puVar4;
    *(undefined **)(puVar2 + -8) = puVar23;
    uVar14 = auVar25._8_4_;
    if ((int)uVar14 < *(int *)(auVar25._0_8_ + 0x30)) {
      lVar20 = *(long *)(auVar25._0_8_ + 0x28);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar16 = uVar17;
      if (lVar20 == 0) goto code_r0x016ce410;
      if (uVar14 < *(uint *)(lVar20 + 0x18)) {
        *(int *)(lVar20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar12;
        return uVar12;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar13 = func_0x00f78aec();
      uVar17 = func_0x00f78a24(0x3d6ceb8);
      uVar16 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar13,uVar17);
      uVar17 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar13,uVar17);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar17 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar17,0);
    uVar12 = auVar25._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = uVar15;
    *(long *)(puVar2 + -0x40) = lVar20;
    *(undefined8 *)(puVar2 + -0x38) = uVar13;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar16 == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar17 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,uVar16);
    puVar4 = *(undefined1 **)(puVar2 + -0x30);
    puVar23 = *(undefined **)(puVar2 + -0x28);
    lVar20 = *(long *)(puVar2 + -0x40);
    lVar11 = *(long *)(puVar2 + -0x38);
    unaff_x22 = *(ulong *)(puVar2 + -0x50);
    uVar15 = *(undefined8 *)(puVar2 + -0x48);
    puVar2 = puVar2 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x166245c | Core.Networking.SessionKartVisuals.AddExtra2
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__AddExtra2
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 unaff_x19;
  int iVar19;
  undefined8 unaff_x20;
  long lVar20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar21;
  undefined1 **unaff_x29;
  undefined1 ***pppuVar22;
  undefined *unaff_x30;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  ulong auStack_120 [4];
  undefined1 auStack_100 [12];
  int iStack_f4;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
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
  
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = param_1;
  if (param_1 == 0) {
    ppuVar3 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x29 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x30 = &Core_Networking_SessionKartVisuals__AddExtra1;
    auVar24 = func_0x00f78af4();
    if (auVar24._0_8_ == 0) {
      ppuVar3 = &puStack_20;
      unaff_x29 = &puStack_20;
      puStack_18 = &Core_Networking_SessionKartVisuals__AddExtra1;
      unaff_x30 = &Core_Networking_SessionKartVisuals__AddWheels;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar24 = func_0x00f78af4();
      if (auVar24._0_8_ == 0) {
        ppuVar3 = &puStack_30;
        unaff_x29 = &puStack_30;
        puStack_28 = &Core_Networking_SessionKartVisuals__AddWheels;
        unaff_x30 = &Core_Networking_SessionKartVisuals__AddAntenna;
        puStack_30 = (undefined1 *)&puStack_20;
        auVar24 = func_0x00f78af4();
        if (auVar24._0_8_ == 0) {
          ppuVar3 = &puStack_40;
          unaff_x29 = &puStack_40;
          puStack_38 = &Core_Networking_SessionKartVisuals__AddAntenna;
          unaff_x30 = &Core_Networking_SessionKartVisuals__AddGlider;
          puStack_40 = (undefined1 *)&puStack_30;
          auVar24 = func_0x00f78af4();
          if (auVar24._0_8_ == 0) {
            ppuVar3 = &puStack_50;
            unaff_x29 = &puStack_50;
            puStack_48 = &Core_Networking_SessionKartVisuals__AddGlider;
            unaff_x30 = &Core_Networking_SessionKartVisuals__AddKart;
            puStack_50 = (undefined1 *)&puStack_40;
            auVar24 = func_0x00f78af4();
            if (auVar24._0_8_ == 0) {
              ppuVar3 = &puStack_60;
              unaff_x29 = &puStack_60;
              puStack_58 = &Core_Networking_SessionKartVisuals__AddKart;
              unaff_x30 = &Core_Networking_SessionKartVisuals__AddCharacter;
              puStack_60 = (undefined1 *)&puStack_50;
              auVar24 = func_0x00f78af4();
              if (auVar24._0_8_ == 0) {
                puStack_68 = &Core_Networking_SessionKartVisuals__AddCharacter;
                puStack_70 = (undefined1 *)&puStack_60;
                lVar11 = func_0x00f78af4();
                puStack_78 = &Core_Networking_SessionKartVisuals__EndSessionKartVisuals;
                puStack_80 = (undefined1 *)&puStack_70;
                if ((bRam0000000003eb5869 & 1) == 0) {
                  puStack_80 = (undefined1 *)&puStack_70;
                  func_0x00f78a20(0x3d3f248);
                  bRam0000000003eb5869 = 1;
                }
                if (lVar11 == 0) {
                  lVar11 = func_0x00f78af4();
                  if (lVar11 == 0) {
                    lVar11 = func_0x00f78af4();
                    return *(ulong *)(lVar11 + 8);
                  }
                  uVar17 = 0;
                  puVar2 = &stack0xffffffffffffff40;
                  puVar4 = &stack0xffffffffffffff60;
                  lVar20 = 8;
                  uVar15 = 0x3eb5000;
                  if ((bRam0000000003eb5cd7 & 1) == 0) {
                    func_0x00f78a20(0x3d1f100);
                    bRam0000000003eb5cd7 = 1;
                  }
                  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar11);
                  if (*(long *)(lVar11 + 0x28) != 0) {
                    if (*(int *)(*(long *)(lVar11 + 0x28) + 0x18) < 8) {
                      uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
                      *(undefined8 *)(lVar11 + 0x28) = uVar15;
                    }
                    *(undefined4 *)(lVar11 + 0x30) = 8;
                    uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                    *(int *)(lVar11 + 0x34) = (int)uVar12;
                    return uVar12;
                  }
                  puVar23 = &FlatBuffers_FlatBufferBuilder__Slot;
                  auVar25 = func_0x00f78af4();
                  goto code_r0x016ce380;
                }
                uVar12 = 0x3eb5000;
                if ((bRam0000000003eb5cd8 & 1) == 0) {
                  func_0x00f78a20(0x3d1f100,0);
                  bRam0000000003eb5cd8 = 1;
                }
                if (-1 < *(int *)(lVar11 + 0x30)) {
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
                  /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,0);
                  uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                  unaff_x21 = (ulong)*(uint *)(lVar11 + 0x30);
                  uVar14 = *(uint *)(lVar11 + 0x30) - 1;
                  if (-2 < (int)uVar14) {
                    uVar14 = 0xffffffff;
                  }
                  unaff_x22 = (ulong)uVar14;
                  do {
                    uVar1 = (int)unaff_x21 - 1;
                    unaff_x21 = (ulong)uVar1;
                    iVar19 = (int)uVar12;
                    if ((int)uVar1 < 0) goto code_r0x016ceb30;
                    lVar20 = *(long *)(lVar11 + 0x28);
                    if (lVar20 == 0) goto code_r0x016ced84;
                    if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
                  } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
                  unaff_x22 = unaff_x21 + 8;
                  do {
                    uVar21 = unaff_x22 - 8;
                    if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
                    iVar9 = *(int *)(lVar20 + unaff_x22 * 4);
                    sVar5 = 0;
                    if (iVar9 != 0) {
                      sVar5 = (short)uVar12 - (short)iVar9;
                    }
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
                    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar5);
                    lVar20 = *(long *)(lVar11 + 0x28);
                    if (lVar20 == 0) goto code_r0x016ced84;
                    if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
                    *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
                    unaff_x22 = unaff_x22 - 1;
                    uVar14 = uVar1;
                  } while (0 < (long)uVar21);
code_r0x016ceb30:
                  uVar8 = *(undefined4 *)(lVar11 + 0x34);
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
                  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)((short)uVar12 - (short)uVar8));
                  uVar14 = uVar14 * 2 + 6;
                  unaff_x21 = (ulong)uVar14;
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
                  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)uVar14);
                  unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                  if (0 < (int)*(uint *)(lVar11 + 0x40)) {
                    uVar21 = 0;
                    do {
                      lVar20 = *(long *)(lVar11 + 0x18);
                      if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                         (lVar18 = *(long *)(lVar11 + 0x38), lVar18 == 0)) goto code_r0x016ced84;
                      if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x016ced88;
                      uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                              *(int *)(lVar18 + uVar21 * 4 + 0x20);
                      unaff_x21 = (ulong)uVar1;
                      uVar14 = *(uint *)(lVar11 + 0x10);
                      unaff_x22 = (ulong)uVar14;
                      sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                      if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                      sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
                      if (sVar5 == sVar6) {
                        if (sVar5 < 3) {
code_r0x016cec64:
                          unaff_x21 = *(ulong *)(lVar11 + 0x38);
                          if (unaff_x21 == 0) goto code_r0x016ced84;
                          if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar21) goto code_r0x016ced88;
                          iVar9 = *(int *)(unaff_x21 + uVar21 * 4 + 0x20);
                          if (iVar9 == 0) {
                            unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                            goto code_r0x016cecac;
                          }
                          unaff_x21 = *(ulong *)(lVar11 + 0x18);
                          if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                          goto code_r0x016ced84;
                          iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar19;
                          *(int *)(lVar11 + 0x10) = iVar10;
                          iVar9 = iVar9 - iVar19;
                          goto code_r0x016ced3c;
                        }
                        iVar9 = 2;
                        while( true ) {
                          if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                          sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar1 + iVar9,2);
                          if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                          sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar14 + iVar9,2);
                          if (sVar6 != sVar7) break;
                          iVar9 = iVar9 + 2;
                          if (sVar5 <= iVar9) goto code_r0x016cec64;
                        }
                      }
                      uVar21 = uVar21 + 1;
                      unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
                    } while ((long)uVar21 < (long)unaff_x22);
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
                      lVar20 = *(long *)(lVar11 + 0x38);
                      if (lVar20 == 0) goto code_r0x016ced84;
                      /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                      *(ulong *)(lVar11 + 0x38) = unaff_x21;
                      unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                    }
                    uVar14 = (uint)unaff_x22;
                    *(uint *)(lVar11 + 0x40) = uVar14 + 1;
                    uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (uVar14 < *(uint *)(unaff_x21 + 0x18)) {
                      *(undefined4 *)(unaff_x21 + (long)(int)uVar14 * 4 + 0x20) = uVar8;
                      unaff_x21 = *(ulong *)(lVar11 + 0x18);
                      if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                        iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                        iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                        iVar10 = iVar10 - iVar19;
                        iVar9 = iVar9 - iVar19;
code_r0x016ced3c:
                        /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                        /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                        *(undefined4 *)(lVar11 + 0x30) = 0xffffffff;
                        return uVar12;
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
                uVar17 = func_0x00f78a24(0x3d6cea8);
                iVar19 = 0;
                /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar17);
                uVar17 = func_0x00f78a24(0x3d56a30);
                auVar26 = func_0x00f78ac0(uVar15,uVar17);
                puStack_c8 = &FlatBuffers_FlatBufferBuilder__Required;
                pppuVar22 = &ppuStack_d0;
                lVar11 = *(long *)(auVar26._0_8_ + 0x18);
                iStack_f4 = iVar19;
                uStack_f0 = unaff_x22;
                uStack_e8 = unaff_x21;
                uStack_e0 = uVar12;
                uStack_d8 = uVar15;
                ppuStack_d0 = &puStack_80;
                if ((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) {
                  iVar9 = *(int *)(*(long *)(lVar11 + 0x10) + 0x18) - auVar26._8_4_;
                  iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,iVar9,4);
                  lVar11 = *(long *)(auVar26._0_8_ + 0x18);
                  if (lVar11 != 0) {
                    uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,(iVar9 - iVar10) + iVar19,2);
                    if ((uVar12 & 0xffff) != 0) {
                      return uVar12;
                    }
                    goto code_r0x016cee5c;
                  }
                }
                func_0x00f78af4();
code_r0x016cee5c:
                uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_f4,0);
                uVar17 = func_0x00f78a24(0x3d6ce88);
                uVar13 = func_0x00f78a24(0x3d66338);
                lVar11 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar15,uVar13,0);
                func_0x00f78a24(0x3d22a38);
                uVar12 = func_0x00f78aec();
                uVar17 = 0;
                /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar11);
                uVar15 = func_0x00f78a24(0x3d56a50);
                puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
                auVar24 = func_0x00f78ac0(uVar12,uVar15);
                puVar4 = auStack_100;
                do {
                  uVar21 = auVar24._8_8_;
                  lVar20 = auVar24._0_8_;
                  *(ulong *)(puVar4 + -0x20) = uVar12;
                  *(long *)(puVar4 + -0x18) = lVar11;
                  *(undefined1 ****)(puVar4 + -0x10) = pppuVar22;
                  *(undefined **)(puVar4 + -8) = puVar23;
                  pppuVar22 = (undefined1 ***)(puVar4 + -0x10);
                  if ((int)uVar17 == 0) {
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
                    uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
code_r0x016cef70:
                    if (*(long *)(lVar20 + 0x18) != 0) {
                      *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) =
                           *(undefined4 *)(lVar20 + 0x10);
                      return uVar12;
                    }
                  }
                  else if (lVar20 != 0) {
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
                    /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
                    if ((*(long *)(lVar20 + 0x18) != 0) &&
                       (lVar11 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar11 != 0)) {
                      uVar21 = (ulong)(uint)(*(int *)(lVar11 + 0x18) - *(int *)(lVar20 + 0x10));
                      /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                      uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar21);
                      goto code_r0x016cef70;
                    }
                  }
                  puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
                  auVar24 = func_0x00f78af4();
                  uVar17 = 0;
                  puVar4 = puVar4 + -0x20;
                  lVar11 = lVar20;
                  uVar12 = uVar21;
                } while( true );
              }
              uVar15 = 0;
            }
            else {
              uVar15 = 1;
            }
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          uVar15 = 3;
        }
      }
      else {
        uVar15 = 4;
      }
    }
    else {
      uVar15 = 5;
    }
  }
  else {
    uVar15 = 6;
    ppuVar3 = (undefined1 **)register0x00000008;
  }
  uVar12 = auVar24._0_8_;
  auVar25._8_8_ = uVar15;
  auVar25._0_8_ = uVar12;
  param_4 = 0;
  *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppuVar3 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar3 + -8) = unaff_x30;
  if ((auVar24._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
    return uVar12;
  }
  uVar17 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar12,auVar24._8_8_);
  puVar4 = *(undefined1 **)((long)ppuVar3 + -0x10);
  puVar23 = *(undefined **)((long)ppuVar3 + -8);
  lVar20 = *(long *)((long)ppuVar3 + -0x20);
  lVar11 = *(long *)((long)ppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
  uVar15 = *(undefined8 *)((long)ppuVar3 + -0x28);
  puVar2 = (undefined1 *)ppuVar3;
code_r0x016ce380:
  do {
    uVar13 = auVar25._8_8_;
    *(long *)(puVar2 + -0x20) = lVar20;
    *(long *)(puVar2 + -0x18) = lVar11;
    *(undefined1 **)(puVar2 + -0x10) = puVar4;
    *(undefined **)(puVar2 + -8) = puVar23;
    uVar14 = auVar25._8_4_;
    if ((int)uVar14 < *(int *)(auVar25._0_8_ + 0x30)) {
      lVar20 = *(long *)(auVar25._0_8_ + 0x28);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar16 = uVar17;
      if (lVar20 == 0) goto code_r0x016ce410;
      if (uVar14 < *(uint *)(lVar20 + 0x18)) {
        *(int *)(lVar20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar12;
        return uVar12;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar13 = func_0x00f78aec();
      uVar17 = func_0x00f78a24(0x3d6ceb8);
      uVar16 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar13,uVar17);
      uVar17 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar13,uVar17);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar17 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar17,0);
    uVar12 = auVar25._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = uVar15;
    *(long *)(puVar2 + -0x40) = lVar20;
    *(undefined8 *)(puVar2 + -0x38) = uVar13;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar16 == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar17 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,uVar16);
    puVar4 = *(undefined1 **)(puVar2 + -0x30);
    puVar23 = *(undefined **)(puVar2 + -0x28);
    lVar20 = *(long *)(puVar2 + -0x40);
    lVar11 = *(long *)(puVar2 + -0x38);
    unaff_x22 = *(ulong *)(puVar2 + -0x50);
    uVar15 = *(undefined8 *)(puVar2 + -0x48);
    puVar2 = puVar2 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x1662480 | Core.Networking.SessionKartVisuals.AddExtra1
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__AddExtra1
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 unaff_x19;
  int iVar19;
  undefined8 unaff_x20;
  long lVar20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar21;
  undefined1 **unaff_x29;
  undefined1 ***pppuVar22;
  undefined *unaff_x30;
  undefined *puVar23;
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
  undefined1 *puStack_40;
  undefined *puStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = param_1;
  if (param_1 == 0) {
    ppuVar3 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x29 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x30 = &Core_Networking_SessionKartVisuals__AddWheels;
    auVar24 = func_0x00f78af4();
    if (auVar24._0_8_ == 0) {
      ppuVar3 = &puStack_20;
      unaff_x29 = &puStack_20;
      puStack_18 = &Core_Networking_SessionKartVisuals__AddWheels;
      unaff_x30 = &Core_Networking_SessionKartVisuals__AddAntenna;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar24 = func_0x00f78af4();
      if (auVar24._0_8_ == 0) {
        ppuVar3 = &puStack_30;
        unaff_x29 = &puStack_30;
        puStack_28 = &Core_Networking_SessionKartVisuals__AddAntenna;
        unaff_x30 = &Core_Networking_SessionKartVisuals__AddGlider;
        puStack_30 = (undefined1 *)&puStack_20;
        auVar24 = func_0x00f78af4();
        if (auVar24._0_8_ == 0) {
          ppuVar3 = &puStack_40;
          unaff_x29 = &puStack_40;
          puStack_38 = &Core_Networking_SessionKartVisuals__AddGlider;
          unaff_x30 = &Core_Networking_SessionKartVisuals__AddKart;
          puStack_40 = (undefined1 *)&puStack_30;
          auVar24 = func_0x00f78af4();
          if (auVar24._0_8_ == 0) {
            ppuVar3 = &puStack_50;
            unaff_x29 = &puStack_50;
            puStack_48 = &Core_Networking_SessionKartVisuals__AddKart;
            unaff_x30 = &Core_Networking_SessionKartVisuals__AddCharacter;
            puStack_50 = (undefined1 *)&puStack_40;
            auVar24 = func_0x00f78af4();
            if (auVar24._0_8_ == 0) {
              puStack_58 = &Core_Networking_SessionKartVisuals__AddCharacter;
              puStack_60 = (undefined1 *)&puStack_50;
              lVar11 = func_0x00f78af4();
              puStack_68 = &Core_Networking_SessionKartVisuals__EndSessionKartVisuals;
              puStack_70 = (undefined1 *)&puStack_60;
              if ((bRam0000000003eb5869 & 1) == 0) {
                puStack_70 = (undefined1 *)&puStack_60;
                func_0x00f78a20(0x3d3f248);
                bRam0000000003eb5869 = 1;
              }
              if (lVar11 == 0) {
                lVar11 = func_0x00f78af4();
                if (lVar11 == 0) {
                  lVar11 = func_0x00f78af4();
                  return *(ulong *)(lVar11 + 8);
                }
                uVar17 = 0;
                puVar2 = &stack0xffffffffffffff50;
                puVar4 = &stack0xffffffffffffff70;
                lVar20 = 8;
                uVar15 = 0x3eb5000;
                if ((bRam0000000003eb5cd7 & 1) == 0) {
                  func_0x00f78a20(0x3d1f100);
                  bRam0000000003eb5cd7 = 1;
                }
                /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar11);
                if (*(long *)(lVar11 + 0x28) != 0) {
                  if (*(int *)(*(long *)(lVar11 + 0x28) + 0x18) < 8) {
                    uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
                    *(undefined8 *)(lVar11 + 0x28) = uVar15;
                  }
                  *(undefined4 *)(lVar11 + 0x30) = 8;
                  uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                  *(int *)(lVar11 + 0x34) = (int)uVar12;
                  return uVar12;
                }
                puVar23 = &FlatBuffers_FlatBufferBuilder__Slot;
                auVar25 = func_0x00f78af4();
                goto code_r0x016ce380;
              }
              uVar12 = 0x3eb5000;
              if ((bRam0000000003eb5cd8 & 1) == 0) {
                func_0x00f78a20(0x3d1f100,0);
                bRam0000000003eb5cd8 = 1;
              }
              if (-1 < *(int *)(lVar11 + 0x30)) {
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
                /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,0);
                uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                unaff_x21 = (ulong)*(uint *)(lVar11 + 0x30);
                uVar14 = *(uint *)(lVar11 + 0x30) - 1;
                if (-2 < (int)uVar14) {
                  uVar14 = 0xffffffff;
                }
                unaff_x22 = (ulong)uVar14;
                do {
                  uVar1 = (int)unaff_x21 - 1;
                  unaff_x21 = (ulong)uVar1;
                  iVar19 = (int)uVar12;
                  if ((int)uVar1 < 0) goto code_r0x016ceb30;
                  lVar20 = *(long *)(lVar11 + 0x28);
                  if (lVar20 == 0) goto code_r0x016ced84;
                  if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
                } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
                unaff_x22 = unaff_x21 + 8;
                do {
                  uVar21 = unaff_x22 - 8;
                  if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
                  iVar9 = *(int *)(lVar20 + unaff_x22 * 4);
                  sVar5 = 0;
                  if (iVar9 != 0) {
                    sVar5 = (short)uVar12 - (short)iVar9;
                  }
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
                  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar5);
                  lVar20 = *(long *)(lVar11 + 0x28);
                  if (lVar20 == 0) goto code_r0x016ced84;
                  if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
                  *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
                  unaff_x22 = unaff_x22 - 1;
                  uVar14 = uVar1;
                } while (0 < (long)uVar21);
code_r0x016ceb30:
                uVar8 = *(undefined4 *)(lVar11 + 0x34);
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
                /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)((short)uVar12 - (short)uVar8));
                uVar14 = uVar14 * 2 + 6;
                unaff_x21 = (ulong)uVar14;
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
                /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)uVar14);
                unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                if (0 < (int)*(uint *)(lVar11 + 0x40)) {
                  uVar21 = 0;
                  do {
                    lVar20 = *(long *)(lVar11 + 0x18);
                    if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                       (lVar18 = *(long *)(lVar11 + 0x38), lVar18 == 0)) goto code_r0x016ced84;
                    if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x016ced88;
                    uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                            *(int *)(lVar18 + uVar21 * 4 + 0x20);
                    unaff_x21 = (ulong)uVar1;
                    uVar14 = *(uint *)(lVar11 + 0x10);
                    unaff_x22 = (ulong)uVar14;
                    sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                    if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
                    if (sVar5 == sVar6) {
                      if (sVar5 < 3) {
code_r0x016cec64:
                        unaff_x21 = *(ulong *)(lVar11 + 0x38);
                        if (unaff_x21 == 0) goto code_r0x016ced84;
                        if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar21) goto code_r0x016ced88;
                        iVar9 = *(int *)(unaff_x21 + uVar21 * 4 + 0x20);
                        if (iVar9 == 0) {
                          unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                          goto code_r0x016cecac;
                        }
                        unaff_x21 = *(ulong *)(lVar11 + 0x18);
                        if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                        goto code_r0x016ced84;
                        iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar19;
                        *(int *)(lVar11 + 0x10) = iVar10;
                        iVar9 = iVar9 - iVar19;
                        goto code_r0x016ced3c;
                      }
                      iVar9 = 2;
                      while( true ) {
                        if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                        sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar1 + iVar9,2);
                        if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                        sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar14 + iVar9,2);
                        if (sVar6 != sVar7) break;
                        iVar9 = iVar9 + 2;
                        if (sVar5 <= iVar9) goto code_r0x016cec64;
                      }
                    }
                    uVar21 = uVar21 + 1;
                    unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
                  } while ((long)uVar21 < (long)unaff_x22);
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
                    lVar20 = *(long *)(lVar11 + 0x38);
                    if (lVar20 == 0) goto code_r0x016ced84;
                    /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                    *(ulong *)(lVar11 + 0x38) = unaff_x21;
                    unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                  }
                  uVar14 = (uint)unaff_x22;
                  *(uint *)(lVar11 + 0x40) = uVar14 + 1;
                  uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                  if (unaff_x21 == 0) goto code_r0x016ced84;
                  if (uVar14 < *(uint *)(unaff_x21 + 0x18)) {
                    *(undefined4 *)(unaff_x21 + (long)(int)uVar14 * 4 + 0x20) = uVar8;
                    unaff_x21 = *(ulong *)(lVar11 + 0x18);
                    if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                      iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                      iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                      iVar10 = iVar10 - iVar19;
                      iVar9 = iVar9 - iVar19;
code_r0x016ced3c:
                      /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                      /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                      *(undefined4 *)(lVar11 + 0x30) = 0xffffffff;
                      return uVar12;
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
              uVar17 = func_0x00f78a24(0x3d6cea8);
              iVar19 = 0;
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar17);
              uVar17 = func_0x00f78a24(0x3d56a30);
              auVar26 = func_0x00f78ac0(uVar15,uVar17);
              puStack_b8 = &FlatBuffers_FlatBufferBuilder__Required;
              pppuVar22 = &ppuStack_c0;
              lVar11 = *(long *)(auVar26._0_8_ + 0x18);
              iStack_e4 = iVar19;
              uStack_e0 = unaff_x22;
              uStack_d8 = unaff_x21;
              uStack_d0 = uVar12;
              uStack_c8 = uVar15;
              ppuStack_c0 = &puStack_70;
              if ((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) {
                iVar9 = *(int *)(*(long *)(lVar11 + 0x10) + 0x18) - auVar26._8_4_;
                iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,iVar9,4);
                lVar11 = *(long *)(auVar26._0_8_ + 0x18);
                if (lVar11 != 0) {
                  uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,(iVar9 - iVar10) + iVar19,2);
                  if ((uVar12 & 0xffff) != 0) {
                    return uVar12;
                  }
                  goto code_r0x016cee5c;
                }
              }
              func_0x00f78af4();
code_r0x016cee5c:
              uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_e4,0);
              uVar17 = func_0x00f78a24(0x3d6ce88);
              uVar13 = func_0x00f78a24(0x3d66338);
              lVar11 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar15,uVar13,0);
              func_0x00f78a24(0x3d22a38);
              uVar12 = func_0x00f78aec();
              uVar17 = 0;
              /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar11);
              uVar15 = func_0x00f78a24(0x3d56a50);
              puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar24 = func_0x00f78ac0(uVar12,uVar15);
              puVar4 = auStack_f0;
              do {
                uVar21 = auVar24._8_8_;
                lVar20 = auVar24._0_8_;
                *(ulong *)(puVar4 + -0x20) = uVar12;
                *(long *)(puVar4 + -0x18) = lVar11;
                *(undefined1 ****)(puVar4 + -0x10) = pppuVar22;
                *(undefined **)(puVar4 + -8) = puVar23;
                pppuVar22 = (undefined1 ***)(puVar4 + -0x10);
                if ((int)uVar17 == 0) {
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
                  uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
code_r0x016cef70:
                  if (*(long *)(lVar20 + 0x18) != 0) {
                    *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) =
                         *(undefined4 *)(lVar20 + 0x10);
                    return uVar12;
                  }
                }
                else if (lVar20 != 0) {
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
                  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
                  if ((*(long *)(lVar20 + 0x18) != 0) &&
                     (lVar11 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar11 != 0)) {
                    uVar21 = (ulong)(uint)(*(int *)(lVar11 + 0x18) - *(int *)(lVar20 + 0x10));
                    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                    uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar21);
                    goto code_r0x016cef70;
                  }
                }
                puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
                auVar24 = func_0x00f78af4();
                uVar17 = 0;
                puVar4 = puVar4 + -0x20;
                lVar11 = lVar20;
                uVar12 = uVar21;
              } while( true );
            }
            uVar15 = 0;
          }
          else {
            uVar15 = 1;
          }
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        uVar15 = 3;
      }
    }
    else {
      uVar15 = 4;
    }
  }
  else {
    uVar15 = 5;
    ppuVar3 = (undefined1 **)register0x00000008;
  }
  uVar12 = auVar24._0_8_;
  auVar25._8_8_ = uVar15;
  auVar25._0_8_ = uVar12;
  param_4 = 0;
  *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppuVar3 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar3 + -8) = unaff_x30;
  if ((auVar24._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
    return uVar12;
  }
  uVar17 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar12,auVar24._8_8_);
  puVar4 = *(undefined1 **)((long)ppuVar3 + -0x10);
  puVar23 = *(undefined **)((long)ppuVar3 + -8);
  lVar20 = *(long *)((long)ppuVar3 + -0x20);
  lVar11 = *(long *)((long)ppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
  uVar15 = *(undefined8 *)((long)ppuVar3 + -0x28);
  puVar2 = (undefined1 *)ppuVar3;
code_r0x016ce380:
  do {
    uVar13 = auVar25._8_8_;
    *(long *)(puVar2 + -0x20) = lVar20;
    *(long *)(puVar2 + -0x18) = lVar11;
    *(undefined1 **)(puVar2 + -0x10) = puVar4;
    *(undefined **)(puVar2 + -8) = puVar23;
    uVar14 = auVar25._8_4_;
    if ((int)uVar14 < *(int *)(auVar25._0_8_ + 0x30)) {
      lVar20 = *(long *)(auVar25._0_8_ + 0x28);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar16 = uVar17;
      if (lVar20 == 0) goto code_r0x016ce410;
      if (uVar14 < *(uint *)(lVar20 + 0x18)) {
        *(int *)(lVar20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar12;
        return uVar12;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar13 = func_0x00f78aec();
      uVar17 = func_0x00f78a24(0x3d6ceb8);
      uVar16 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar13,uVar17);
      uVar17 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar13,uVar17);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar17 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar17,0);
    uVar12 = auVar25._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = uVar15;
    *(long *)(puVar2 + -0x40) = lVar20;
    *(undefined8 *)(puVar2 + -0x38) = uVar13;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar16 == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar17 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,uVar16);
    puVar4 = *(undefined1 **)(puVar2 + -0x30);
    puVar23 = *(undefined **)(puVar2 + -0x28);
    lVar20 = *(long *)(puVar2 + -0x40);
    lVar11 = *(long *)(puVar2 + -0x38);
    unaff_x22 = *(ulong *)(puVar2 + -0x50);
    uVar15 = *(undefined8 *)(puVar2 + -0x48);
    puVar2 = puVar2 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x16624a4 | Core.Networking.SessionKartVisuals.AddWheels
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__AddWheels
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 unaff_x19;
  int iVar19;
  undefined8 unaff_x20;
  long lVar20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar21;
  undefined1 **unaff_x29;
  undefined1 ***pppuVar22;
  undefined *unaff_x30;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
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
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = param_1;
  if (param_1 == 0) {
    ppuVar3 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x29 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x30 = &Core_Networking_SessionKartVisuals__AddAntenna;
    auVar24 = func_0x00f78af4();
    if (auVar24._0_8_ == 0) {
      ppuVar3 = &puStack_20;
      unaff_x29 = &puStack_20;
      puStack_18 = &Core_Networking_SessionKartVisuals__AddAntenna;
      unaff_x30 = &Core_Networking_SessionKartVisuals__AddGlider;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar24 = func_0x00f78af4();
      if (auVar24._0_8_ == 0) {
        ppuVar3 = &puStack_30;
        unaff_x29 = &puStack_30;
        puStack_28 = &Core_Networking_SessionKartVisuals__AddGlider;
        unaff_x30 = &Core_Networking_SessionKartVisuals__AddKart;
        puStack_30 = (undefined1 *)&puStack_20;
        auVar24 = func_0x00f78af4();
        if (auVar24._0_8_ == 0) {
          ppuVar3 = &puStack_40;
          unaff_x29 = &puStack_40;
          puStack_38 = &Core_Networking_SessionKartVisuals__AddKart;
          unaff_x30 = &Core_Networking_SessionKartVisuals__AddCharacter;
          puStack_40 = (undefined1 *)&puStack_30;
          auVar24 = func_0x00f78af4();
          if (auVar24._0_8_ == 0) {
            puStack_48 = &Core_Networking_SessionKartVisuals__AddCharacter;
            puStack_50 = (undefined1 *)&puStack_40;
            lVar11 = func_0x00f78af4();
            puStack_58 = &Core_Networking_SessionKartVisuals__EndSessionKartVisuals;
            puStack_60 = (undefined1 *)&puStack_50;
            if ((bRam0000000003eb5869 & 1) == 0) {
              puStack_60 = (undefined1 *)&puStack_50;
              func_0x00f78a20(0x3d3f248);
              bRam0000000003eb5869 = 1;
            }
            if (lVar11 == 0) {
              lVar11 = func_0x00f78af4();
              if (lVar11 == 0) {
                lVar11 = func_0x00f78af4();
                return *(ulong *)(lVar11 + 8);
              }
              uVar17 = 0;
              puVar2 = &stack0xffffffffffffff60;
              puVar4 = &stack0xffffffffffffff80;
              lVar20 = 8;
              uVar15 = 0x3eb5000;
              if ((bRam0000000003eb5cd7 & 1) == 0) {
                func_0x00f78a20(0x3d1f100);
                bRam0000000003eb5cd7 = 1;
              }
              /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar11);
              if (*(long *)(lVar11 + 0x28) != 0) {
                if (*(int *)(*(long *)(lVar11 + 0x28) + 0x18) < 8) {
                  uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
                  *(undefined8 *)(lVar11 + 0x28) = uVar15;
                }
                *(undefined4 *)(lVar11 + 0x30) = 8;
                uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                *(int *)(lVar11 + 0x34) = (int)uVar12;
                return uVar12;
              }
              puVar23 = &FlatBuffers_FlatBufferBuilder__Slot;
              auVar25 = func_0x00f78af4();
              goto code_r0x016ce380;
            }
            uVar12 = 0x3eb5000;
            if ((bRam0000000003eb5cd8 & 1) == 0) {
              func_0x00f78a20(0x3d1f100,0);
              bRam0000000003eb5cd8 = 1;
            }
            if (-1 < *(int *)(lVar11 + 0x30)) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
              /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,0);
              uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
              unaff_x21 = (ulong)*(uint *)(lVar11 + 0x30);
              uVar14 = *(uint *)(lVar11 + 0x30) - 1;
              if (-2 < (int)uVar14) {
                uVar14 = 0xffffffff;
              }
              unaff_x22 = (ulong)uVar14;
              do {
                uVar1 = (int)unaff_x21 - 1;
                unaff_x21 = (ulong)uVar1;
                iVar19 = (int)uVar12;
                if ((int)uVar1 < 0) goto code_r0x016ceb30;
                lVar20 = *(long *)(lVar11 + 0x28);
                if (lVar20 == 0) goto code_r0x016ced84;
                if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
              } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
              unaff_x22 = unaff_x21 + 8;
              do {
                uVar21 = unaff_x22 - 8;
                if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
                iVar9 = *(int *)(lVar20 + unaff_x22 * 4);
                sVar5 = 0;
                if (iVar9 != 0) {
                  sVar5 = (short)uVar12 - (short)iVar9;
                }
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
                /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar5);
                lVar20 = *(long *)(lVar11 + 0x28);
                if (lVar20 == 0) goto code_r0x016ced84;
                if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
                *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
                unaff_x22 = unaff_x22 - 1;
                uVar14 = uVar1;
              } while (0 < (long)uVar21);
code_r0x016ceb30:
              uVar8 = *(undefined4 *)(lVar11 + 0x34);
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)((short)uVar12 - (short)uVar8));
              uVar14 = uVar14 * 2 + 6;
              unaff_x21 = (ulong)uVar14;
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)uVar14);
              unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
              if (0 < (int)*(uint *)(lVar11 + 0x40)) {
                uVar21 = 0;
                do {
                  lVar20 = *(long *)(lVar11 + 0x18);
                  if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                     (lVar18 = *(long *)(lVar11 + 0x38), lVar18 == 0)) goto code_r0x016ced84;
                  if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x016ced88;
                  uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                          *(int *)(lVar18 + uVar21 * 4 + 0x20);
                  unaff_x21 = (ulong)uVar1;
                  uVar14 = *(uint *)(lVar11 + 0x10);
                  unaff_x22 = (ulong)uVar14;
                  sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                  if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                  sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
                  if (sVar5 == sVar6) {
                    if (sVar5 < 3) {
code_r0x016cec64:
                      unaff_x21 = *(ulong *)(lVar11 + 0x38);
                      if (unaff_x21 == 0) goto code_r0x016ced84;
                      if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar21) goto code_r0x016ced88;
                      iVar9 = *(int *)(unaff_x21 + uVar21 * 4 + 0x20);
                      if (iVar9 == 0) {
                        unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                        goto code_r0x016cecac;
                      }
                      unaff_x21 = *(ulong *)(lVar11 + 0x18);
                      if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                      goto code_r0x016ced84;
                      iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar19;
                      *(int *)(lVar11 + 0x10) = iVar10;
                      iVar9 = iVar9 - iVar19;
                      goto code_r0x016ced3c;
                    }
                    iVar9 = 2;
                    while( true ) {
                      if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                      sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar1 + iVar9,2);
                      if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                      sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar14 + iVar9,2);
                      if (sVar6 != sVar7) break;
                      iVar9 = iVar9 + 2;
                      if (sVar5 <= iVar9) goto code_r0x016cec64;
                    }
                  }
                  uVar21 = uVar21 + 1;
                  unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
                } while ((long)uVar21 < (long)unaff_x22);
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
                  lVar20 = *(long *)(lVar11 + 0x38);
                  if (lVar20 == 0) goto code_r0x016ced84;
                  /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                  *(ulong *)(lVar11 + 0x38) = unaff_x21;
                  unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                }
                uVar14 = (uint)unaff_x22;
                *(uint *)(lVar11 + 0x40) = uVar14 + 1;
                uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                if (unaff_x21 == 0) goto code_r0x016ced84;
                if (uVar14 < *(uint *)(unaff_x21 + 0x18)) {
                  *(undefined4 *)(unaff_x21 + (long)(int)uVar14 * 4 + 0x20) = uVar8;
                  unaff_x21 = *(ulong *)(lVar11 + 0x18);
                  if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                    iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                    iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                    iVar10 = iVar10 - iVar19;
                    iVar9 = iVar9 - iVar19;
code_r0x016ced3c:
                    /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                    /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                    *(undefined4 *)(lVar11 + 0x30) = 0xffffffff;
                    return uVar12;
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
            uVar17 = func_0x00f78a24(0x3d6cea8);
            iVar19 = 0;
            /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar17);
            uVar17 = func_0x00f78a24(0x3d56a30);
            auVar26 = func_0x00f78ac0(uVar15,uVar17);
            puStack_a8 = &FlatBuffers_FlatBufferBuilder__Required;
            pppuVar22 = &ppuStack_b0;
            lVar11 = *(long *)(auVar26._0_8_ + 0x18);
            iStack_d4 = iVar19;
            uStack_d0 = unaff_x22;
            uStack_c8 = unaff_x21;
            uStack_c0 = uVar12;
            uStack_b8 = uVar15;
            ppuStack_b0 = &puStack_60;
            if ((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) {
              iVar9 = *(int *)(*(long *)(lVar11 + 0x10) + 0x18) - auVar26._8_4_;
              iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,iVar9,4);
              lVar11 = *(long *)(auVar26._0_8_ + 0x18);
              if (lVar11 != 0) {
                uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,(iVar9 - iVar10) + iVar19,2);
                if ((uVar12 & 0xffff) != 0) {
                  return uVar12;
                }
                goto code_r0x016cee5c;
              }
            }
            func_0x00f78af4();
code_r0x016cee5c:
            uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_d4,0);
            uVar17 = func_0x00f78a24(0x3d6ce88);
            uVar13 = func_0x00f78a24(0x3d66338);
            lVar11 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar15,uVar13,0);
            func_0x00f78a24(0x3d22a38);
            uVar12 = func_0x00f78aec();
            uVar17 = 0;
            /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar11);
            uVar15 = func_0x00f78a24(0x3d56a50);
            puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar24 = func_0x00f78ac0(uVar12,uVar15);
            puVar4 = auStack_e0;
            do {
              uVar21 = auVar24._8_8_;
              lVar20 = auVar24._0_8_;
              *(ulong *)(puVar4 + -0x20) = uVar12;
              *(long *)(puVar4 + -0x18) = lVar11;
              *(undefined1 ****)(puVar4 + -0x10) = pppuVar22;
              *(undefined **)(puVar4 + -8) = puVar23;
              pppuVar22 = (undefined1 ***)(puVar4 + -0x10);
              if ((int)uVar17 == 0) {
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
                uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
code_r0x016cef70:
                if (*(long *)(lVar20 + 0x18) != 0) {
                  *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) = *(undefined4 *)(lVar20 + 0x10);
                  return uVar12;
                }
              }
              else if (lVar20 != 0) {
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
                /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
                if ((*(long *)(lVar20 + 0x18) != 0) &&
                   (lVar11 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar11 != 0)) {
                  uVar21 = (ulong)(uint)(*(int *)(lVar11 + 0x18) - *(int *)(lVar20 + 0x10));
                  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                  uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar21);
                  goto code_r0x016cef70;
                }
              }
              puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
              auVar24 = func_0x00f78af4();
              uVar17 = 0;
              puVar4 = puVar4 + -0x20;
              lVar11 = lVar20;
              uVar12 = uVar21;
            } while( true );
          }
          uVar15 = 0;
        }
        else {
          uVar15 = 1;
        }
      }
      else {
        uVar15 = 2;
      }
    }
    else {
      uVar15 = 3;
    }
  }
  else {
    uVar15 = 4;
    ppuVar3 = (undefined1 **)register0x00000008;
  }
  uVar12 = auVar24._0_8_;
  auVar25._8_8_ = uVar15;
  auVar25._0_8_ = uVar12;
  param_4 = 0;
  *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppuVar3 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar3 + -8) = unaff_x30;
  if ((auVar24._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
    return uVar12;
  }
  uVar17 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar12,auVar24._8_8_);
  puVar4 = *(undefined1 **)((long)ppuVar3 + -0x10);
  puVar23 = *(undefined **)((long)ppuVar3 + -8);
  lVar20 = *(long *)((long)ppuVar3 + -0x20);
  lVar11 = *(long *)((long)ppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
  uVar15 = *(undefined8 *)((long)ppuVar3 + -0x28);
  puVar2 = (undefined1 *)ppuVar3;
code_r0x016ce380:
  do {
    uVar13 = auVar25._8_8_;
    *(long *)(puVar2 + -0x20) = lVar20;
    *(long *)(puVar2 + -0x18) = lVar11;
    *(undefined1 **)(puVar2 + -0x10) = puVar4;
    *(undefined **)(puVar2 + -8) = puVar23;
    uVar14 = auVar25._8_4_;
    if ((int)uVar14 < *(int *)(auVar25._0_8_ + 0x30)) {
      lVar20 = *(long *)(auVar25._0_8_ + 0x28);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar16 = uVar17;
      if (lVar20 == 0) goto code_r0x016ce410;
      if (uVar14 < *(uint *)(lVar20 + 0x18)) {
        *(int *)(lVar20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar12;
        return uVar12;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar13 = func_0x00f78aec();
      uVar17 = func_0x00f78a24(0x3d6ceb8);
      uVar16 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar13,uVar17);
      uVar17 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar13,uVar17);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar17 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar17,0);
    uVar12 = auVar25._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = uVar15;
    *(long *)(puVar2 + -0x40) = lVar20;
    *(undefined8 *)(puVar2 + -0x38) = uVar13;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar16 == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar17 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,uVar16);
    puVar4 = *(undefined1 **)(puVar2 + -0x30);
    puVar23 = *(undefined **)(puVar2 + -0x28);
    lVar20 = *(long *)(puVar2 + -0x40);
    lVar11 = *(long *)(puVar2 + -0x38);
    unaff_x22 = *(ulong *)(puVar2 + -0x50);
    uVar15 = *(undefined8 *)(puVar2 + -0x48);
    puVar2 = puVar2 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x16624c8 | Core.Networking.SessionKartVisuals.AddAntenna
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__AddAntenna
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 unaff_x19;
  int iVar19;
  undefined8 unaff_x20;
  long lVar20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar21;
  undefined1 **unaff_x29;
  undefined1 ***pppuVar22;
  undefined *unaff_x30;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
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
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = param_1;
  if (param_1 == 0) {
    ppuVar3 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x29 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x30 = &Core_Networking_SessionKartVisuals__AddGlider;
    auVar24 = func_0x00f78af4();
    if (auVar24._0_8_ == 0) {
      ppuVar3 = &puStack_20;
      unaff_x29 = &puStack_20;
      puStack_18 = &Core_Networking_SessionKartVisuals__AddGlider;
      unaff_x30 = &Core_Networking_SessionKartVisuals__AddKart;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar24 = func_0x00f78af4();
      if (auVar24._0_8_ == 0) {
        ppuVar3 = &puStack_30;
        unaff_x29 = &puStack_30;
        puStack_28 = &Core_Networking_SessionKartVisuals__AddKart;
        unaff_x30 = &Core_Networking_SessionKartVisuals__AddCharacter;
        puStack_30 = (undefined1 *)&puStack_20;
        auVar24 = func_0x00f78af4();
        if (auVar24._0_8_ == 0) {
          puStack_38 = &Core_Networking_SessionKartVisuals__AddCharacter;
          puStack_40 = (undefined1 *)&puStack_30;
          lVar11 = func_0x00f78af4();
          puStack_48 = &Core_Networking_SessionKartVisuals__EndSessionKartVisuals;
          puStack_50 = (undefined1 *)&puStack_40;
          if ((bRam0000000003eb5869 & 1) == 0) {
            puStack_50 = (undefined1 *)&puStack_40;
            func_0x00f78a20(0x3d3f248);
            bRam0000000003eb5869 = 1;
          }
          if (lVar11 == 0) {
            lVar11 = func_0x00f78af4();
            if (lVar11 == 0) {
              lVar11 = func_0x00f78af4();
              return *(ulong *)(lVar11 + 8);
            }
            uVar17 = 0;
            puVar2 = &stack0xffffffffffffff70;
            puVar4 = &stack0xffffffffffffff90;
            lVar20 = 8;
            uVar15 = 0x3eb5000;
            if ((bRam0000000003eb5cd7 & 1) == 0) {
              func_0x00f78a20(0x3d1f100);
              bRam0000000003eb5cd7 = 1;
            }
            /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar11);
            if (*(long *)(lVar11 + 0x28) != 0) {
              if (*(int *)(*(long *)(lVar11 + 0x28) + 0x18) < 8) {
                uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
                *(undefined8 *)(lVar11 + 0x28) = uVar15;
              }
              *(undefined4 *)(lVar11 + 0x30) = 8;
              uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
              *(int *)(lVar11 + 0x34) = (int)uVar12;
              return uVar12;
            }
            puVar23 = &FlatBuffers_FlatBufferBuilder__Slot;
            auVar25 = func_0x00f78af4();
            goto code_r0x016ce380;
          }
          uVar12 = 0x3eb5000;
          if ((bRam0000000003eb5cd8 & 1) == 0) {
            func_0x00f78a20(0x3d1f100,0);
            bRam0000000003eb5cd8 = 1;
          }
          if (-1 < *(int *)(lVar11 + 0x30)) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
            /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,0);
            uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
            unaff_x21 = (ulong)*(uint *)(lVar11 + 0x30);
            uVar14 = *(uint *)(lVar11 + 0x30) - 1;
            if (-2 < (int)uVar14) {
              uVar14 = 0xffffffff;
            }
            unaff_x22 = (ulong)uVar14;
            do {
              uVar1 = (int)unaff_x21 - 1;
              unaff_x21 = (ulong)uVar1;
              iVar19 = (int)uVar12;
              if ((int)uVar1 < 0) goto code_r0x016ceb30;
              lVar20 = *(long *)(lVar11 + 0x28);
              if (lVar20 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
            } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
            unaff_x22 = unaff_x21 + 8;
            do {
              uVar21 = unaff_x22 - 8;
              if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
              iVar9 = *(int *)(lVar20 + unaff_x22 * 4);
              sVar5 = 0;
              if (iVar9 != 0) {
                sVar5 = (short)uVar12 - (short)iVar9;
              }
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
              /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar5);
              lVar20 = *(long *)(lVar11 + 0x28);
              if (lVar20 == 0) goto code_r0x016ced84;
              if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
              *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
              unaff_x22 = unaff_x22 - 1;
              uVar14 = uVar1;
            } while (0 < (long)uVar21);
code_r0x016ceb30:
            uVar8 = *(undefined4 *)(lVar11 + 0x34);
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)((short)uVar12 - (short)uVar8));
            uVar14 = uVar14 * 2 + 6;
            unaff_x21 = (ulong)uVar14;
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)uVar14);
            unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
            if (0 < (int)*(uint *)(lVar11 + 0x40)) {
              uVar21 = 0;
              do {
                lVar20 = *(long *)(lVar11 + 0x18);
                if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                   (lVar18 = *(long *)(lVar11 + 0x38), lVar18 == 0)) goto code_r0x016ced84;
                if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x016ced88;
                uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                        *(int *)(lVar18 + uVar21 * 4 + 0x20);
                unaff_x21 = (ulong)uVar1;
                uVar14 = *(uint *)(lVar11 + 0x10);
                unaff_x22 = (ulong)uVar14;
                sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
                if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
                if (sVar5 == sVar6) {
                  if (sVar5 < 3) {
code_r0x016cec64:
                    unaff_x21 = *(ulong *)(lVar11 + 0x38);
                    if (unaff_x21 == 0) goto code_r0x016ced84;
                    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar21) goto code_r0x016ced88;
                    iVar9 = *(int *)(unaff_x21 + uVar21 * 4 + 0x20);
                    if (iVar9 == 0) {
                      unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                      goto code_r0x016cecac;
                    }
                    unaff_x21 = *(ulong *)(lVar11 + 0x18);
                    if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0))
                    goto code_r0x016ced84;
                    iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar19;
                    *(int *)(lVar11 + 0x10) = iVar10;
                    iVar9 = iVar9 - iVar19;
                    goto code_r0x016ced3c;
                  }
                  iVar9 = 2;
                  while( true ) {
                    if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                    sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar1 + iVar9,2);
                    if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                    sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar14 + iVar9,2);
                    if (sVar6 != sVar7) break;
                    iVar9 = iVar9 + 2;
                    if (sVar5 <= iVar9) goto code_r0x016cec64;
                  }
                }
                uVar21 = uVar21 + 1;
                unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
              } while ((long)uVar21 < (long)unaff_x22);
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
                lVar20 = *(long *)(lVar11 + 0x38);
                if (lVar20 == 0) goto code_r0x016ced84;
                /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
                *(ulong *)(lVar11 + 0x38) = unaff_x21;
                unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
              }
              uVar14 = (uint)unaff_x22;
              *(uint *)(lVar11 + 0x40) = uVar14 + 1;
              uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
              if (unaff_x21 == 0) goto code_r0x016ced84;
              if (uVar14 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined4 *)(unaff_x21 + (long)(int)uVar14 * 4 + 0x20) = uVar8;
                unaff_x21 = *(ulong *)(lVar11 + 0x18);
                if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                  iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                  iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                  iVar10 = iVar10 - iVar19;
                  iVar9 = iVar9 - iVar19;
code_r0x016ced3c:
                  /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                  /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                  *(undefined4 *)(lVar11 + 0x30) = 0xffffffff;
                  return uVar12;
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
          uVar17 = func_0x00f78a24(0x3d6cea8);
          iVar19 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar17);
          uVar17 = func_0x00f78a24(0x3d56a30);
          auVar26 = func_0x00f78ac0(uVar15,uVar17);
          puStack_98 = &FlatBuffers_FlatBufferBuilder__Required;
          pppuVar22 = &ppuStack_a0;
          lVar11 = *(long *)(auVar26._0_8_ + 0x18);
          iStack_c4 = iVar19;
          uStack_c0 = unaff_x22;
          uStack_b8 = unaff_x21;
          uStack_b0 = uVar12;
          uStack_a8 = uVar15;
          ppuStack_a0 = &puStack_50;
          if ((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) {
            iVar9 = *(int *)(*(long *)(lVar11 + 0x10) + 0x18) - auVar26._8_4_;
            iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,iVar9,4);
            lVar11 = *(long *)(auVar26._0_8_ + 0x18);
            if (lVar11 != 0) {
              uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,(iVar9 - iVar10) + iVar19,2);
              if ((uVar12 & 0xffff) != 0) {
                return uVar12;
              }
              goto code_r0x016cee5c;
            }
          }
          func_0x00f78af4();
code_r0x016cee5c:
          uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_c4,0);
          uVar17 = func_0x00f78a24(0x3d6ce88);
          uVar13 = func_0x00f78a24(0x3d66338);
          lVar11 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar15,uVar13,0);
          func_0x00f78a24(0x3d22a38);
          uVar12 = func_0x00f78aec();
          uVar17 = 0;
          /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar11);
          uVar15 = func_0x00f78a24(0x3d56a50);
          puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar24 = func_0x00f78ac0(uVar12,uVar15);
          puVar4 = auStack_d0;
          do {
            uVar21 = auVar24._8_8_;
            lVar20 = auVar24._0_8_;
            *(ulong *)(puVar4 + -0x20) = uVar12;
            *(long *)(puVar4 + -0x18) = lVar11;
            *(undefined1 ****)(puVar4 + -0x10) = pppuVar22;
            *(undefined **)(puVar4 + -8) = puVar23;
            pppuVar22 = (undefined1 ***)(puVar4 + -0x10);
            if ((int)uVar17 == 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
              uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
code_r0x016cef70:
              if (*(long *)(lVar20 + 0x18) != 0) {
                *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) = *(undefined4 *)(lVar20 + 0x10);
                return uVar12;
              }
            }
            else if (lVar20 != 0) {
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
              /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
              if ((*(long *)(lVar20 + 0x18) != 0) &&
                 (lVar11 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar11 != 0)) {
                uVar21 = (ulong)(uint)(*(int *)(lVar11 + 0x18) - *(int *)(lVar20 + 0x10));
                /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
                uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar21);
                goto code_r0x016cef70;
              }
            }
            puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
            auVar24 = func_0x00f78af4();
            uVar17 = 0;
            puVar4 = puVar4 + -0x20;
            lVar11 = lVar20;
            uVar12 = uVar21;
          } while( true );
        }
        uVar15 = 0;
      }
      else {
        uVar15 = 1;
      }
    }
    else {
      uVar15 = 2;
    }
  }
  else {
    uVar15 = 3;
    ppuVar3 = (undefined1 **)register0x00000008;
  }
  uVar12 = auVar24._0_8_;
  auVar25._8_8_ = uVar15;
  auVar25._0_8_ = uVar12;
  param_4 = 0;
  *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppuVar3 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar3 + -8) = unaff_x30;
  if ((auVar24._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
    return uVar12;
  }
  uVar17 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar12,auVar24._8_8_);
  puVar4 = *(undefined1 **)((long)ppuVar3 + -0x10);
  puVar23 = *(undefined **)((long)ppuVar3 + -8);
  lVar20 = *(long *)((long)ppuVar3 + -0x20);
  lVar11 = *(long *)((long)ppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
  uVar15 = *(undefined8 *)((long)ppuVar3 + -0x28);
  puVar2 = (undefined1 *)ppuVar3;
code_r0x016ce380:
  do {
    uVar13 = auVar25._8_8_;
    *(long *)(puVar2 + -0x20) = lVar20;
    *(long *)(puVar2 + -0x18) = lVar11;
    *(undefined1 **)(puVar2 + -0x10) = puVar4;
    *(undefined **)(puVar2 + -8) = puVar23;
    uVar14 = auVar25._8_4_;
    if ((int)uVar14 < *(int *)(auVar25._0_8_ + 0x30)) {
      lVar20 = *(long *)(auVar25._0_8_ + 0x28);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar16 = uVar17;
      if (lVar20 == 0) goto code_r0x016ce410;
      if (uVar14 < *(uint *)(lVar20 + 0x18)) {
        *(int *)(lVar20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar12;
        return uVar12;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar13 = func_0x00f78aec();
      uVar17 = func_0x00f78a24(0x3d6ceb8);
      uVar16 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar13,uVar17);
      uVar17 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar13,uVar17);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar17 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar17,0);
    uVar12 = auVar25._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = uVar15;
    *(long *)(puVar2 + -0x40) = lVar20;
    *(undefined8 *)(puVar2 + -0x38) = uVar13;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar16 == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar17 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,uVar16);
    puVar4 = *(undefined1 **)(puVar2 + -0x30);
    puVar23 = *(undefined **)(puVar2 + -0x28);
    lVar20 = *(long *)(puVar2 + -0x40);
    lVar11 = *(long *)(puVar2 + -0x38);
    unaff_x22 = *(ulong *)(puVar2 + -0x50);
    uVar15 = *(undefined8 *)(puVar2 + -0x48);
    puVar2 = puVar2 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x16624ec | Core.Networking.SessionKartVisuals.AddGlider
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__AddGlider
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 unaff_x19;
  int iVar19;
  undefined8 unaff_x20;
  long lVar20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar21;
  undefined1 **unaff_x29;
  undefined1 ***pppuVar22;
  undefined *unaff_x30;
  undefined *puVar23;
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
  
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = param_1;
  if (param_1 == 0) {
    ppuVar3 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x29 = (undefined1 **)&stack0xfffffffffffffff0;
    unaff_x30 = &Core_Networking_SessionKartVisuals__AddKart;
    auVar24 = func_0x00f78af4();
    if (auVar24._0_8_ == 0) {
      ppuVar3 = &puStack_20;
      unaff_x29 = &puStack_20;
      puStack_18 = &Core_Networking_SessionKartVisuals__AddKart;
      unaff_x30 = &Core_Networking_SessionKartVisuals__AddCharacter;
      puStack_20 = &stack0xfffffffffffffff0;
      auVar24 = func_0x00f78af4();
      if (auVar24._0_8_ == 0) {
        puStack_28 = &Core_Networking_SessionKartVisuals__AddCharacter;
        puStack_30 = (undefined1 *)&puStack_20;
        lVar11 = func_0x00f78af4();
        puStack_38 = &Core_Networking_SessionKartVisuals__EndSessionKartVisuals;
        puStack_40 = (undefined1 *)&puStack_30;
        if ((bRam0000000003eb5869 & 1) == 0) {
          puStack_40 = (undefined1 *)&puStack_30;
          func_0x00f78a20(0x3d3f248);
          bRam0000000003eb5869 = 1;
        }
        if (lVar11 == 0) {
          lVar11 = func_0x00f78af4();
          if (lVar11 == 0) {
            lVar11 = func_0x00f78af4();
            return *(ulong *)(lVar11 + 8);
          }
          uVar17 = 0;
          puVar2 = &stack0xffffffffffffff80;
          puVar4 = &stack0xffffffffffffffa0;
          lVar20 = 8;
          uVar15 = 0x3eb5000;
          if ((bRam0000000003eb5cd7 & 1) == 0) {
            func_0x00f78a20(0x3d1f100);
            bRam0000000003eb5cd7 = 1;
          }
          /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar11);
          if (*(long *)(lVar11 + 0x28) != 0) {
            if (*(int *)(*(long *)(lVar11 + 0x28) + 0x18) < 8) {
              uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
              *(undefined8 *)(lVar11 + 0x28) = uVar15;
            }
            *(undefined4 *)(lVar11 + 0x30) = 8;
            uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
            *(int *)(lVar11 + 0x34) = (int)uVar12;
            return uVar12;
          }
          puVar23 = &FlatBuffers_FlatBufferBuilder__Slot;
          auVar25 = func_0x00f78af4();
          goto code_r0x016ce380;
        }
        uVar12 = 0x3eb5000;
        if ((bRam0000000003eb5cd8 & 1) == 0) {
          func_0x00f78a20(0x3d1f100,0);
          bRam0000000003eb5cd8 = 1;
        }
        if (-1 < *(int *)(lVar11 + 0x30)) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,4,0);
          /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar11,0);
          uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
          unaff_x21 = (ulong)*(uint *)(lVar11 + 0x30);
          uVar14 = *(uint *)(lVar11 + 0x30) - 1;
          if (-2 < (int)uVar14) {
            uVar14 = 0xffffffff;
          }
          unaff_x22 = (ulong)uVar14;
          do {
            uVar1 = (int)unaff_x21 - 1;
            unaff_x21 = (ulong)uVar1;
            iVar19 = (int)uVar12;
            if ((int)uVar1 < 0) goto code_r0x016ceb30;
            lVar20 = *(long *)(lVar11 + 0x28);
            if (lVar20 == 0) goto code_r0x016ced84;
            if (*(uint *)(lVar20 + 0x18) <= uVar1) goto code_r0x016ced88;
          } while (*(int *)(lVar20 + (ulong)uVar1 * 4 + 0x20) == 0);
          unaff_x22 = unaff_x21 + 8;
          do {
            uVar21 = unaff_x22 - 8;
            if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
            iVar9 = *(int *)(lVar20 + unaff_x22 * 4);
            sVar5 = 0;
            if (iVar9 != 0) {
              sVar5 = (short)uVar12 - (short)iVar9;
            }
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
            /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)sVar5);
            lVar20 = *(long *)(lVar11 + 0x28);
            if (lVar20 == 0) goto code_r0x016ced84;
            if (*(uint *)(lVar20 + 0x18) <= uVar21) goto code_r0x016ced88;
            *(undefined4 *)(lVar20 + unaff_x22 * 4) = 0;
            unaff_x22 = unaff_x22 - 1;
            uVar14 = uVar1;
          } while (0 < (long)uVar21);
code_r0x016ceb30:
          uVar8 = *(undefined4 *)(lVar11 + 0x34);
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)((short)uVar12 - (short)uVar8));
          uVar14 = uVar14 * 2 + 6;
          unaff_x21 = (ulong)uVar14;
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar11,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar11,(int)(short)uVar14);
          unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
          if (0 < (int)*(uint *)(lVar11 + 0x40)) {
            uVar21 = 0;
            do {
              lVar20 = *(long *)(lVar11 + 0x18);
              if (((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) ||
                 (lVar18 = *(long *)(lVar11 + 0x38), lVar18 == 0)) goto code_r0x016ced84;
              if (*(uint *)(lVar18 + 0x18) <= uVar21) goto code_r0x016ced88;
              uVar1 = *(int *)(*(long *)(lVar20 + 0x10) + 0x18) -
                      *(int *)(lVar18 + uVar21 * 4 + 0x20);
              unaff_x21 = (ulong)uVar1;
              uVar14 = *(uint *)(lVar11 + 0x10);
              unaff_x22 = (ulong)uVar14;
              sVar5 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar20,unaff_x21,2);
              if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
              sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),unaff_x22,2);
              if (sVar5 == sVar6) {
                if (sVar5 < 3) {
code_r0x016cec64:
                  unaff_x21 = *(ulong *)(lVar11 + 0x38);
                  if (unaff_x21 == 0) goto code_r0x016ced84;
                  if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar21) goto code_r0x016ced88;
                  iVar9 = *(int *)(unaff_x21 + uVar21 * 4 + 0x20);
                  if (iVar9 == 0) {
                    unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
                    goto code_r0x016cecac;
                  }
                  unaff_x21 = *(ulong *)(lVar11 + 0x18);
                  if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x10) == 0)) goto code_r0x016ced84;
                  iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar19;
                  *(int *)(lVar11 + 0x10) = iVar10;
                  iVar9 = iVar9 - iVar19;
                  goto code_r0x016ced3c;
                }
                iVar9 = 2;
                while( true ) {
                  if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                  sVar6 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar1 + iVar9,2);
                  if (*(long *)(lVar11 + 0x18) == 0) goto code_r0x016ced84;
                  sVar7 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar11 + 0x18),uVar14 + iVar9,2);
                  if (sVar6 != sVar7) break;
                  iVar9 = iVar9 + 2;
                  if (sVar5 <= iVar9) goto code_r0x016cec64;
                }
              }
              uVar21 = uVar21 + 1;
              unaff_x22 = (ulong)*(int *)(lVar11 + 0x40);
            } while ((long)uVar21 < (long)unaff_x22);
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
              lVar20 = *(long *)(lVar11 + 0x38);
              if (lVar20 == 0) goto code_r0x016ced84;
              /*System.Array$$Copy*/ func_0x0292c49c(lVar20,unaff_x21,*(undefined4 *)(lVar20 + 0x18),0);
              *(ulong *)(lVar11 + 0x38) = unaff_x21;
              unaff_x22 = (ulong)*(uint *)(lVar11 + 0x40);
            }
            uVar14 = (uint)unaff_x22;
            *(uint *)(lVar11 + 0x40) = uVar14 + 1;
            uVar8 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
            if (unaff_x21 == 0) goto code_r0x016ced84;
            if (uVar14 < *(uint *)(unaff_x21 + 0x18)) {
              *(undefined4 *)(unaff_x21 + (long)(int)uVar14 * 4 + 0x20) = uVar8;
              unaff_x21 = *(ulong *)(lVar11 + 0x18);
              if ((unaff_x21 != 0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
                iVar10 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
                iVar9 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar11);
                iVar10 = iVar10 - iVar19;
                iVar9 = iVar9 - iVar19;
code_r0x016ced3c:
                /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar10,4);
                /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar10,4,(long)iVar9);
                *(undefined4 *)(lVar11 + 0x30) = 0xffffffff;
                return uVar12;
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
        uVar17 = func_0x00f78a24(0x3d6cea8);
        iVar19 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar15,uVar17);
        uVar17 = func_0x00f78a24(0x3d56a30);
        auVar26 = func_0x00f78ac0(uVar15,uVar17);
        puStack_88 = &FlatBuffers_FlatBufferBuilder__Required;
        pppuVar22 = &ppuStack_90;
        lVar11 = *(long *)(auVar26._0_8_ + 0x18);
        iStack_b4 = iVar19;
        uStack_b0 = unaff_x22;
        uStack_a8 = unaff_x21;
        uStack_a0 = uVar12;
        uStack_98 = uVar15;
        ppuStack_90 = &puStack_40;
        if ((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) {
          iVar9 = *(int *)(*(long *)(lVar11 + 0x10) + 0x18) - auVar26._8_4_;
          iVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,iVar9,4);
          lVar11 = *(long *)(auVar26._0_8_ + 0x18);
          if (lVar11 != 0) {
            uVar12 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar11,(iVar9 - iVar10) + iVar19,2);
            if ((uVar12 & 0xffff) != 0) {
              return uVar12;
            }
            goto code_r0x016cee5c;
          }
        }
        func_0x00f78af4();
code_r0x016cee5c:
        uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_b4,0);
        uVar17 = func_0x00f78a24(0x3d6ce88);
        uVar13 = func_0x00f78a24(0x3d66338);
        lVar11 = /*System.String$$Concat*/ func_0x029be39c(uVar17,uVar15,uVar13,0);
        func_0x00f78a24(0x3d22a38);
        uVar12 = func_0x00f78aec();
        uVar17 = 0;
        /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar12,lVar11);
        uVar15 = func_0x00f78a24(0x3d56a50);
        puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar24 = func_0x00f78ac0(uVar12,uVar15);
        puVar4 = auStack_c0;
        do {
          uVar21 = auVar24._8_8_;
          lVar20 = auVar24._0_8_;
          *(ulong *)(puVar4 + -0x20) = uVar12;
          *(long *)(puVar4 + -0x18) = lVar11;
          *(undefined1 ****)(puVar4 + -0x10) = pppuVar22;
          *(undefined **)(puVar4 + -8) = puVar23;
          pppuVar22 = (undefined1 ***)(puVar4 + -0x10);
          if ((int)uVar17 == 0) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),4);
            uVar12 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
code_r0x016cef70:
            if (*(long *)(lVar20 + 0x18) != 0) {
              *(undefined4 *)(*(long *)(lVar20 + 0x18) + 0x18) = *(undefined4 *)(lVar20 + 0x10);
              return uVar12;
            }
          }
          else if (lVar20 != 0) {
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,*(undefined4 *)(lVar20 + 0x20),8);
            /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar20,uVar21);
            if ((*(long *)(lVar20 + 0x18) != 0) &&
               (lVar11 = *(long *)(*(long *)(lVar20 + 0x18) + 0x10), lVar11 != 0)) {
              uVar21 = (ulong)(uint)(*(int *)(lVar11 + 0x18) - *(int *)(lVar20 + 0x10));
              /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar20,4,0);
              uVar12 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar20,uVar21);
              goto code_r0x016cef70;
            }
          }
          puVar23 = &FlatBuffers_FlatBufferBuilder__Finish;
          auVar24 = func_0x00f78af4();
          uVar17 = 0;
          puVar4 = puVar4 + -0x20;
          lVar11 = lVar20;
          uVar12 = uVar21;
        } while( true );
      }
      uVar15 = 0;
    }
    else {
      uVar15 = 1;
    }
  }
  else {
    uVar15 = 2;
    ppuVar3 = (undefined1 **)register0x00000008;
  }
  uVar12 = auVar24._0_8_;
  auVar25._8_8_ = uVar15;
  auVar25._0_8_ = uVar12;
  param_4 = 0;
  *(ulong *)((long)ppuVar3 + -0x30) = unaff_x22;
  *(ulong *)((long)ppuVar3 + -0x28) = unaff_x21;
  *(undefined8 *)((long)ppuVar3 + -0x20) = unaff_x20;
  *(undefined8 *)((long)ppuVar3 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppuVar3 + -0x10) = unaff_x29;
  *(undefined **)((long)ppuVar3 + -8) = unaff_x30;
  if ((auVar24._8_4_ == 0) && (*(char *)(uVar12 + 0x48) == '\0')) {
    return uVar12;
  }
  uVar17 = 0;
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar12,auVar24._8_8_);
  puVar4 = *(undefined1 **)((long)ppuVar3 + -0x10);
  puVar23 = *(undefined **)((long)ppuVar3 + -8);
  lVar20 = *(long *)((long)ppuVar3 + -0x20);
  lVar11 = *(long *)((long)ppuVar3 + -0x18);
  unaff_x22 = *(ulong *)((long)ppuVar3 + -0x30);
  uVar15 = *(undefined8 *)((long)ppuVar3 + -0x28);
  puVar2 = (undefined1 *)ppuVar3;
code_r0x016ce380:
  do {
    uVar13 = auVar25._8_8_;
    *(long *)(puVar2 + -0x20) = lVar20;
    *(long *)(puVar2 + -0x18) = lVar11;
    *(undefined1 **)(puVar2 + -0x10) = puVar4;
    *(undefined **)(puVar2 + -8) = puVar23;
    uVar14 = auVar25._8_4_;
    if ((int)uVar14 < *(int *)(auVar25._0_8_ + 0x30)) {
      lVar20 = *(long *)(auVar25._0_8_ + 0x28);
      uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar16 = uVar17;
      if (lVar20 == 0) goto code_r0x016ce410;
      if (uVar14 < *(uint *)(lVar20 + 0x18)) {
        *(int *)(lVar20 + (long)(int)uVar14 * 4 + 0x20) = (int)uVar12;
        return uVar12;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar13 = func_0x00f78aec();
      uVar17 = func_0x00f78a24(0x3d6ceb8);
      uVar16 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar13,uVar17);
      uVar17 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar13,uVar17);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar17 = func_0x00f78b24();
    auVar25 = func_0x00f78ac0(uVar17,0);
    uVar12 = auVar25._0_8_;
    *(ulong *)(puVar2 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x48) = uVar15;
    *(long *)(puVar2 + -0x40) = lVar20;
    *(undefined8 *)(puVar2 + -0x38) = uVar13;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar16 == (int)param_4) && (*(char *)(uVar12 + 0x48) == '\0')) {
      return uVar12;
    }
    uVar17 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar12,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar12,uVar16);
    puVar4 = *(undefined1 **)(puVar2 + -0x30);
    puVar23 = *(undefined **)(puVar2 + -0x28);
    lVar20 = *(long *)(puVar2 + -0x40);
    lVar11 = *(long *)(puVar2 + -0x38);
    unaff_x22 = *(ulong *)(puVar2 + -0x50);
    uVar15 = *(undefined8 *)(puVar2 + -0x48);
    puVar2 = puVar2 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x1662510 | Core.Networking.SessionKartVisuals.AddKart
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__AddKart
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
    unaff_x30 = &Core_Networking_SessionKartVisuals__AddCharacter;
    auVar23 = func_0x00f78af4();
    if (auVar23._0_8_ == 0) {
      puStack_18 = &Core_Networking_SessionKartVisuals__AddCharacter;
      puStack_20 = &stack0xfffffffffffffff0;
      lVar9 = func_0x00f78af4();
      puStack_28 = &Core_Networking_SessionKartVisuals__EndSessionKartVisuals;
      puStack_30 = (undefined1 *)&puStack_20;
      if ((bRam0000000003eb5869 & 1) == 0) {
        puStack_30 = (undefined1 *)&puStack_20;
        func_0x00f78a20(0x3d3f248);
        bRam0000000003eb5869 = 1;
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
        lVar18 = 8;
        uVar13 = 0x3eb5000;
        if ((bRam0000000003eb5cd7 & 1) == 0) {
          func_0x00f78a20(0x3d1f100);
          bRam0000000003eb5cd7 = 1;
        }
        /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar9);
        if (*(long *)(lVar9 + 0x28) != 0) {
          if (*(int *)(*(long *)(lVar9 + 0x28) + 0x18) < 8) {
            uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
            *(undefined8 *)(lVar9 + 0x28) = uVar13;
          }
          *(undefined4 *)(lVar9 + 0x30) = 8;
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
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
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
  /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar10,2,0,0,0);
  /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(uVar10,auVar23._8_8_);
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
// RVA: 0x1662534 | Core.Networking.SessionKartVisuals.AddCharacter
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__AddCharacter
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
    uVar16 = 0;
    if (((int)param_2 == 0) && (*(char *)(param_1 + 0x48) == '\0')) {
      return param_1;
    }
    uVar13 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(param_1,2,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(param_1,param_2);
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
  if ((bRam0000000003eb5869 & 1) == 0) {
    func_0x00f78a20(0x3d3f248);
    bRam0000000003eb5869 = 1;
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
    unaff_x20 = 8;
    unaff_x21 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(unaff_x19);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      if (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) < 8) {
        uVar16 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar16;
      }
      *(undefined4 *)(unaff_x19 + 0x30) = 8;
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
// RVA: 0x1662558 | Core.Networking.SessionKartVisuals.EndSessionKartVisuals
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Core_Networking_SessionKartVisuals__EndSessionKartVisuals
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
  
  if ((bRam0000000003eb5869 & 1) == 0) {
    func_0x00f78a20(0x3d3f248);
    bRam0000000003eb5869 = 1;
  }
  if (param_1 == 0) {
    lVar15 = func_0x00f78af4();
    if (lVar15 == 0) {
      lVar15 = func_0x00f78af4();
      return *(ulong *)(lVar15 + 8);
    }
    uVar11 = 0;
    puVar20 = &stack0xffffffffffffffd0;
    lVar16 = 8;
    uVar10 = 0x3eb5000;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(lVar15);
    if (*(long *)(lVar15 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar15 + 0x28) + 0x18) < 8) {
        uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
        *(undefined8 *)(lVar15 + 0x28) = uVar10;
      }
      *(undefined4 *)(lVar15 + 0x30) = 8;
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
// RVA: 0x16625a4 | Core.Networking.SessionKartVisuals.StartSessionKartVisuals
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ce334) */

long Core_Networking_SessionKartVisuals__StartSessionKartVisuals
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
  lVar7 = 8;
  uVar8 = 0x3eb5000;
  if ((bRam0000000003eb5cd7 & 1) == 0) {
    func_0x00f78a20(0x3d1f100);
    bRam0000000003eb5cd7 = 1;
  }
  /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x18) < 8) {
      uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,8);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
    }
    *(undefined4 *)(param_1 + 0x30) = 8;
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



