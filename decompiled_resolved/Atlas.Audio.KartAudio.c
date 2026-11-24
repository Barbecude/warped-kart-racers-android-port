// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Audio.KartAudio

// ============================================================
// RVA: 0x15b4160 | Atlas.Audio.KartAudio.ThrowWeaponSpeech
// ============================================================

/* WARNING: Possible PIC construction at 0x0145b028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145b924) */
/* WARNING: Removing unreachable block (ram,0x0145b8cc) */
/* WARNING: Removing unreachable block (ram,0x0145b8d0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e8) */
/* WARNING: Removing unreachable block (ram,0x0145b8ec) */
/* WARNING: Removing unreachable block (ram,0x0145b8f0) */
/* WARNING: Removing unreachable block (ram,0x0145b660) */
/* WARNING: Removing unreachable block (ram,0x0145b664) */
/* WARNING: Removing unreachable block (ram,0x0145b3ac) */
/* WARNING: Removing unreachable block (ram,0x0145b3b0) */
/* WARNING: Removing unreachable block (ram,0x0145b1dc) */
/* WARNING: Removing unreachable block (ram,0x0145b1e0) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145b02c) */
/* WARNING: Removing unreachable block (ram,0x0145b030) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Audio_KartAudio__ThrowWeaponSpeech
                  (undefined1 param_1 [16],uint param_2,undefined4 param_3,dword *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  dword **ppdVar5;
  ulong *puVar6;
  int iVar7;
  undefined8 uVar8;
  dword *pdVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 *puVar13;
  dword *pdVar14;
  long lVar15;
  dword *extraout_x1;
  long lVar16;
  ulong extraout_x1_00;
  uint uVar17;
  dword *pdVar18;
  dword dVar19;
  dword *pdVar20;
  dword *pdVar21;
  dword *pdVar22;
  dword *pdVar23;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar25;
  undefined8 *******pppppppuVar26;
  undefined *puVar27;
  int iVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  ulong extraout_d0;
  uint uVar33;
  undefined4 uVar34;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  dword *pdStack_410;
  long lStack_408;
  undefined8 *******pppppppuStack_400;
  code *pcStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  dword *pdStack_3d0;
  dword *pdStack_3c8;
  undefined8 *******pppppppuStack_3c0;
  code *pcStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  undefined8 *******pppppppuStack_360;
  code *pcStack_358;
  ulong uStack_350;
  ulong uStack_348;
  undefined8 *******pppppppuStack_300;
  code *pcStack_2f8;
  dword *pdStack_2f0;
  dword *pdStack_2e8;
  dword *pdStack_2e0;
  long lStack_2d8;
  undefined8 *******pppppppuStack_2d0;
  code *pcStack_2c8;
  dword *pdStack_2c0;
  dword *pdStack_2b8;
  dword *pdStack_2b0;
  dword *pdStack_2a8;
  undefined8 *******pppppppuStack_2a0;
  code *pcStack_298;
  ulong uStack_290;
  ulong uStack_288;
  undefined8 *******pppppppuStack_240;
  code *pcStack_238;
  undefined8 *******pppppppuStack_1e0;
  code *pcStack_1d8;
  undefined8 *******pppppppuStack_180;
  code *pcStack_178;
  undefined8 *******pppppppuStack_140;
  code *pcStack_138;
  undefined8 *******pppppppuStack_d0;
  code *pcStack_c8;
  undefined8 *******pppppppuStack_70;
  code *pcStack_68;
  
  lVar15 = *(long *)(param_4 + 0x24);
  if (lVar15 == 0) {
    pdVar18 = (dword *)func_0x00f78af4();
    if (*(char *)(pdVar18 + 0x18) == '\0') {
      *(undefined1 *)(pdVar18 + 0x18) = 1;
      *(undefined1 *)((long)pdVar18 + 0x61) = 1;
      return pdVar18;
    }
    return pdVar18;
  }
  pdVar18 = (dword *)0x0;
  puVar6 = (ulong *)&stack0xffffffffffffffa0;
  if ((bRam0000000003eb47d9 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47d9 = 1;
  }
  if (param_4 != (dword *)0x0) {
    pdVar18 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_4,0);
    if ((int)pdVar18 == 0) {
      return pdVar18;
    }
    pdVar18 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_4,0);
    lVar10 = 0x28;
    if ((int)pdVar18 == 0) {
      lVar10 = 0x30;
    }
    pdVar20 = *(dword **)(lVar15 + lVar10);
    if (pdVar20 == (dword *)0x0) {
      return pdVar18;
    }
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    pdVar22 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
    lVar15 = *(long *)(param_4 + 0x2e);
    uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf00);
    uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
    uVar8 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar35._8_8_ = uVar24;
    auVar35._0_8_ = uVar8;
    pdVar18 = (dword *)((long)&MACH_HEADER.filetype + 2);
    puVar27 = (undefined *)0x145b02c;
    pppppppuVar26 = (undefined8 *******)&stack0xfffffffffffffff0;
    goto code_r0x014fe3e8;
  }
  auVar35 = func_0x00f78af4();
  param_4 = auVar35._8_8_;
  puVar6 = (ulong *)&stack0xffffffffffffff40;
  pcStack_68 = Atlas_Audio_AtlasAudioManager__SpeakPickupUsable;
  pppppppuStack_70 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb47da & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47da = 1;
  }
  if (param_4 != (dword *)0x0) {
    pdVar18 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_4,0);
    if ((int)pdVar18 != 0) {
      pdVar18 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_4,0);
      lVar15 = 0x28;
      if ((int)pdVar18 == 0) {
        lVar15 = 0x30;
      }
      pdVar20 = *(dword **)(auVar35._0_8_ + lVar15);
      if (pdVar20 != (dword *)0x0) {
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        pdVar22 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x360);
        lVar15 = *(long *)(param_4 + 0x2e);
        uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf00);
        uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x360);
        uVar8 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
        auVar35._8_8_ = uVar24;
        auVar35._0_8_ = uVar8;
        pdVar18 = (dword *)0x0;
        puVar27 = (undefined *)0x145b1dc;
        pppppppuVar26 = &pppppppuStack_70;
        goto code_r0x014fe3e8;
      }
    }
    return pdVar18;
  }
  auVar35 = func_0x00f78af4();
  pdVar20 = auVar35._8_8_;
  param_4 = auVar35._0_8_;
  puVar6 = (ulong *)&stack0xfffffffffffffed0;
  pcStack_c8 = Atlas_Audio_AtlasAudioManager__SpeakCollision;
  pdVar22 = param_4;
  pdVar9 = pdVar18;
  pppppppuStack_d0 = &pppppppuStack_70;
  if ((bRam0000000003eb47db & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    pdVar22 = (dword *)func_0x00f78a20(0x3d24b48);
    bRam0000000003eb47db = 1;
  }
  uVar33 = (uint)pdVar9;
  if ((int)pdVar18 < 2) {
    return pdVar22;
  }
  if (pdVar20 != (dword *)0x0) {
    pdVar22 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar20,0);
    if ((int)pdVar22 == 0) {
      return pdVar22;
    }
    if ((float)param_4[0x1c] <= 3.0) {
      return pdVar22;
    }
    pdVar22 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar20,0);
    lVar15 = 0x28;
    if ((int)pdVar22 == 0) {
      lVar15 = 0x30;
    }
    lVar15 = *(long *)((long)param_4 + lVar15);
    if (lVar15 == 0) {
      param_4[0x1c] = 0;
      return pdVar22;
    }
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf00);
    uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x1d8);
    uVar8 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar35._8_8_ = uVar24;
    auVar35._0_8_ = uVar8;
    puVar27 = (undefined *)0x145b3ac;
    pdVar22 = pdVar18;
    pppppppuVar26 = &pppppppuStack_d0;
    goto code_r0x014fe3e8;
  }
  auVar35 = func_0x00f78af4();
  lVar15 = auVar35._8_8_;
  auVar36._8_8_ = lVar15;
  auVar36._0_8_ = param_4;
  pcStack_138 = Atlas_Audio_AtlasAudioManager__SpeakWinOrLose;
  pppppppuStack_140 = &pppppppuStack_d0;
  uVar17 = uVar33;
  if ((bRam0000000003eb47dd & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb47dd = 1;
  }
  if (lVar15 == 0) {
    pdVar22 = (dword *)func_0x00f78af4();
    puVar6 = (ulong *)&stack0xfffffffffffffe30;
    pcStack_178 = Atlas_Audio_AtlasAudioManager__SpeakIntro;
    pdVar18 = pdVar22;
    pppppppuStack_180 = &pppppppuStack_140;
    if ((bRam0000000003eb47de & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d3bf08);
      func_0x00f78a20(0x3d3bf00);
      func_0x00f78a20(0x3d1de10);
      pdVar18 = (dword *)func_0x00f78a20(0x3d24b48);
      bRam0000000003eb47de = 1;
    }
    param_4 = *(dword **)(pdVar22 + 0x12);
    if ((param_4 == (dword *)0x0) || (pdVar20 = *(dword **)(pdVar22 + 10), pdVar20 == (dword *)0x0))
    {
      return pdVar18;
    }
    unaff_x24 = 0x3d1ff28;
    pdVar18 = param_4;
    if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
      func_0x00f78ad0();
      pdVar18 = *(dword **)(pdVar22 + 0x12);
      if (pdVar18 == (dword *)0x0) {
        auVar36 = func_0x00f78af4();
        pdVar9 = auVar36._8_8_;
        pdVar20 = auVar36._0_8_;
        ppdVar5 = (dword **)&stack0xfffffffffffffdd0;
        pcStack_1d8 = Atlas_Audio_AtlasAudioManager__SpeakOvertake;
        pppppppuVar25 = &pppppppuStack_1e0;
        pdVar21 = (dword *)0x3eb4000;
        pdVar18 = pdVar20;
        pppppppuStack_1e0 = &pppppppuStack_180;
        if ((bRam0000000003eb47df & 1) == 0) {
          pdVar18 = (dword *)func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47df = 1;
        }
        if (pdVar20[0x14] != 0) {
          return pdVar18;
        }
        lVar15 = *(long *)(pdVar20 + 0x1a);
        if (lVar15 == 0) {
          return pdVar18;
        }
        if ((int)(*(uint *)(lVar15 + 0x18) - 1) <= (int)uVar17) {
          return pdVar18;
        }
        if ((uint)((long)(int)uVar17 + 1) < *(uint *)(lVar15 + 0x18)) {
          lVar15 = *(long *)(lVar15 + ((long)(int)uVar17 + 1) * 8 + 0x20);
          if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x10), lVar15 != 0)) &&
             (pdVar9 != (dword *)0x0)) {
            pdVar18 = *(dword **)(lVar15 + 0x70);
            uVar11 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar9,0);
            if ((uVar11 & 1) == 0) {
              if (pdVar18 == (dword *)0x0) goto code_r0x0145b92c;
              pdVar22 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(pdVar18,0);
              if ((int)pdVar22 == 0) {
                return pdVar22;
              }
            }
            if (((*(long *)(pdVar9 + 0x2e) != 0) &&
                (uVar29 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(pdVar9 + 0x2e),0), pdVar18 != (dword *)0x0)) &&
               (*(long *)(pdVar18 + 0x2e) != 0)) {
              unaff_d9 = (ulong)param_2;
              uVar33 = param_2;
              uVar34 = param_3;
              uVar30 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(pdVar18 + 0x2e),0);
              fVar31 = (float)/*UnityEngine.Vector3$$Distance*/ func_0x0327bcbc(uVar29,param_2,param_3,uVar30,uVar33,uVar34,0);
              unaff_x23 = 0x3d1ff28;
              if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
                func_0x00f78ad0();
              }
              lVar15 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
              if (*(float *)(lVar15 + 0x31c) <= fVar31 || pdVar18 == pdVar9) {
                return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
              }
              fVar31 = (float)pdVar20[0x1d];
              unaff_d8 = (ulong)(uint)fVar31;
              if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
                func_0x00f78ad0();
                lVar15 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
              }
              if (fVar31 < *(float *)(lVar15 + 0x318)) {
                return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
              }
              pdVar21 = *(dword **)(pdVar20 + 10);
              if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
                func_0x00f78ad0();
              }
              if (pdVar21 != (dword *)0x0) {
                pdVar20 = *(dword **)(pdVar9 + 0x2e);
                iVar28 = pdVar9[0x60];
                pdVar22 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
                iVar7 = 0;
                param_4 = &MACH_HEADER.cputype;
                pcVar4 = (code *)&UNK_0145b8cc;
                pdVar14 = pdVar22;
                pdVar23 = pdVar21;
                uVar29 = 0;
                goto code_r0x014fe2a8;
              }
            }
          }
code_r0x0145b92c:
          func_0x00f78af4();
        }
        uVar8 = func_0x00f78b24();
        auVar35 = func_0x00f78ac0(uVar8,0);
        param_4 = auVar35._8_8_;
        pdVar18 = auVar35._0_8_;
        puVar6 = &uStack_290;
        pcStack_238 = Atlas_Audio_AtlasAudioManager__SpeakRespawning;
        pdVar20 = (dword *)0x3eb4000;
        uStack_290 = unaff_d9;
        uStack_288 = unaff_d8;
        pppppppuStack_240 = pppppppuVar25;
        if ((bRam0000000003eb47e0 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e0 = 1;
        }
        if (param_4 != (dword *)0x0) {
          pdVar22 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_4,0);
          lVar15 = 0x28;
          if ((int)pdVar22 == 0) {
            lVar15 = 0x30;
          }
          pdVar20 = *(dword **)((long)pdVar18 + lVar15);
          if (pdVar20 == (dword *)0x0) {
            return pdVar22;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(pdVar18 + 0x12) != 0) {
            pdVar22 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            lVar15 = *(long *)(*(long *)(pdVar18 + 0x12) + 0xb8);
            uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf00);
            uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar8 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar35._8_8_ = uVar24;
            auVar35._0_8_ = uVar8;
            pdVar18 = (dword *)((long)&MACH_HEADER.cputype + 1);
            puVar27 = (undefined *)0x145ba68;
            pppppppuVar26 = &pppppppuStack_240;
            goto code_r0x014fe3e8;
          }
        }
        unaff_x24 = 0x3d1ff28;
        pdVar22 = (dword *)func_0x00f78af4();
        pdStack_2c0 = pdVar21;
        pdStack_2b8 = pdVar18;
        pdStack_2b0 = pdVar20;
        pdStack_2a8 = param_4;
        pppppppuStack_2a0 = &pppppppuStack_240;
        pcStack_298 = Atlas_Audio_AtlasAudioManager__SpeakShield;
        pdVar18 = pdVar22;
        if ((bRam0000000003eb47e1 & 1) == 0) {
          pdVar18 = (dword *)func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e1 = 1;
        }
        lVar15 = *(long *)(pdVar22 + 0x12);
        if (lVar15 == 0) {
          return pdVar18;
        }
        pdVar21 = *(dword **)(pdVar22 + 10);
        lVar10 = lVar15;
        pppppppuVar25 = pppppppuStack_2a0;
        pcVar4 = pcStack_298;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) == 0) ||
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] != 0)) {
joined_r0x0145bba8:
          auVar36._8_8_ = lVar15;
          auVar36._0_8_ = pdStack_2a8;
          pppppppuStack_2a0 = pppppppuVar25;
          pcStack_298 = pcVar4;
          if (pdVar21 != (dword *)0x0) {
            pdVar22 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            pdVar14 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            pdVar20 = *(dword **)(lVar10 + 0xb8);
            iVar28 = *(int *)(lVar10 + 0x180);
            iVar7 = 10;
            param_4 = (dword *)((long)&MACH_HEADER.magic + 1);
            ppdVar5 = (dword **)&uStack_290;
            pdVar9 = pdStack_2b0;
            pdVar18 = pdStack_2b8;
            pdVar23 = pdStack_2c0;
            uVar29 = _UNK_033f813c;
            goto code_r0x014fe2a8;
          }
        }
        else {
          func_0x00f78ad0();
          lVar10 = *(long *)(pdVar22 + 0x12);
          pppppppuVar25 = pppppppuStack_2a0;
          pcVar4 = pcStack_298;
          if (lVar10 != 0) goto joined_r0x0145bba8;
        }
        auVar35 = func_0x00f78af4();
        lVar10 = auVar35._8_8_;
        pdStack_2f0 = (dword *)0x3d1ff28;
        pcStack_2c8 = Atlas_Audio_AtlasAudioManager__SpeakOffRoad;
        pdStack_2e8 = pdVar22;
        pdStack_2e0 = pdVar21;
        lStack_2d8 = lVar15;
        pppppppuStack_2d0 = &pppppppuStack_2a0;
        if ((bRam0000000003eb47e2 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          bRam0000000003eb47e2 = 1;
        }
        if (lVar10 != 0) {
          pdVar18 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar10,0);
          if ((int)pdVar18 == 0) {
            return pdVar18;
          }
          pdVar21 = *(dword **)(auVar35._0_8_ + 0x28);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar36._8_8_ = lVar10;
          auVar36._0_8_ = lStack_2d8;
          lVar15 = *(long *)(auVar35._0_8_ + 0x48);
          if ((lVar15 != 0) && (pdVar21 != (dword *)0x0)) {
            pdVar22 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            pdVar14 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            pdVar20 = *(dword **)(lVar15 + 0xb8);
            iVar28 = *(int *)(lVar15 + 0x180);
            uVar29 = 0;
            iVar7 = 6;
            param_4 = (dword *)((long)&MACH_HEADER.magic + 3);
            ppdVar5 = &pdStack_2c0;
            pdVar9 = pdStack_2e0;
            pdVar18 = pdStack_2e8;
            pdVar23 = pdStack_2f0;
            pppppppuVar25 = pppppppuStack_2d0;
            pcVar4 = pcStack_2c8;
            goto code_r0x014fe2a8;
          }
        }
        auVar35 = func_0x00f78af4();
        param_4 = auVar35._8_8_;
        puVar6 = &uStack_350;
        pcStack_2f8 = Atlas_Audio_AtlasAudioManager__SpeakSneer;
        uStack_350 = unaff_d9;
        uStack_348 = unaff_d8;
        pppppppuStack_300 = &pppppppuStack_2d0;
        if ((bRam0000000003eb47e3 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e3 = 1;
        }
        if (param_4 != (dword *)0x0) {
          pdVar18 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_4,0);
          lVar15 = 0x28;
          if ((int)pdVar18 == 0) {
            lVar15 = 0x30;
          }
          pdVar20 = *(dword **)(auVar35._0_8_ + lVar15);
          if (pdVar20 == (dword *)0x0) {
            return pdVar18;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          lVar15 = *(long *)(auVar35._0_8_ + 0x48);
          if (lVar15 != 0) {
            pdVar22 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            lVar15 = *(long *)(lVar15 + 0xb8);
            uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf00);
            uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar8 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar35._8_8_ = uVar24;
            auVar35._0_8_ = uVar8;
            pdVar18 = (dword *)((long)&MACH_HEADER.filetype + 3);
            puVar27 = (undefined *)0x145bdac;
            pppppppuVar26 = &pppppppuStack_300;
            goto code_r0x014fe3e8;
          }
        }
        auVar37 = func_0x00f78af4();
        param_4 = auVar37._8_8_;
        lVar15 = auVar37._0_8_;
        puVar6 = &uStack_3b0;
        pcStack_358 = Atlas_Audio_AtlasAudioManager__SpeakIncoming;
        pppppppuVar26 = &pppppppuStack_360;
        pdVar20 = (dword *)0x3eb4000;
        uStack_3b0 = unaff_d9;
        uStack_3a8 = unaff_d8;
        pppppppuStack_360 = &pppppppuStack_300;
        if ((bRam0000000003eb47e4 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d3bf08);
          func_0x00f78a20(0x3d3bf00);
          func_0x00f78a20(0x3d1de10);
          func_0x00f78a20(0x3d24b48);
          bRam0000000003eb47e4 = 1;
        }
        if (param_4 != (dword *)0x0) {
          pdVar18 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(param_4,0);
          lVar10 = 0x28;
          if ((int)pdVar18 == 0) {
            lVar10 = 0x30;
          }
          pdVar20 = *(dword **)(lVar15 + lVar10);
          if (pdVar20 == (dword *)0x0) {
            return pdVar18;
          }
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          if (*(long *)(lVar15 + 0x48) != 0) {
            pdVar22 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
            lVar15 = *(long *)(*(long *)(lVar15 + 0x48) + 0xb8);
            uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf00);
            uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
            uVar8 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
            auVar35._8_8_ = uVar24;
            auVar35._0_8_ = uVar8;
            pdVar18 = (dword *)((long)&MACH_HEADER.ncmds + 1);
            puVar27 = (undefined *)0x145bf54;
            goto code_r0x014fe3e8;
          }
        }
        unaff_x24 = 0x3d1ff28;
        lVar10 = func_0x00f78af4();
        auVar36._8_8_ = extraout_x1;
        auVar36._0_8_ = lVar10;
        ppdVar5 = (dword **)&uStack_3f0;
        uStack_3e0 = 0x3d1ff28;
        pcStack_3b8 = Atlas_Audio_AtlasAudioManager__RandomAISpeech;
        pppppppuVar25 = &pppppppuStack_3c0;
        uStack_3f0 = unaff_d9;
        uStack_3e8 = unaff_d8;
        pdStack_3d0 = pdVar20;
        pppppppuStack_3c0 = pppppppuVar26;
        if ((bRam0000000003eb47e5 & 1) == 0) {
          lStack_3d8 = lVar15;
          pdStack_3c8 = param_4;
          func_0x00f78a20(0x3d1ff28);
          auVar37._8_8_ = pdStack_3c8;
          auVar37._0_8_ = lStack_3d8;
          bRam0000000003eb47e5 = 1;
        }
        pdStack_3c8 = auVar37._8_8_;
        lStack_3d8 = auVar37._0_8_;
        unaff_d8 = extraout_d0 & 0xffffffff;
        if (extraout_x1 == (dword *)0x0) {
LAB_0145c21c:
          pdStack_3c8 = auVar37._8_8_;
          lStack_3d8 = auVar37._0_8_;
          fVar31 = (float)func_0x00f78af4();
          pcStack_3f8 = Atlas_Audio_AtlasAudioManager__SetMusicVolume;
          uStack_420 = unaff_d9;
          uStack_418 = unaff_d8;
          pdStack_410 = extraout_x1;
          lStack_408 = lVar10;
          pppppppuStack_400 = pppppppuVar25;
          if ((bRam0000000003eb47e6 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            func_0x00f78a20(0x3d24568);
            bRam0000000003eb47e6 = 1;
          }
          if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uStack_428 = /*FMODUnity.RuntimeManager$$get_StudioSystem*/ func_0x016e20e0(0);
          if (((*(byte *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x133) >> 2 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          fVar32 = _UNK_033f8148;
          if (fVar31 != 0.0) {
            fVar32 = fVar31;
          }
          fVar31 = INFINITY;
          if (fVar32 != -INFINITY) {
            fVar31 = ABS(SQRT(fVar32));
          }
          pdVar18 = (dword *)/*FMOD.Studio.System$$setParameterByName*/ func_0x016f69b4(fVar31,&uStack_428,
                                             *(undefined8 *)
                                              (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x388),1,0)
          ;
          return pdVar18;
        }
        iVar7 = /*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(extraout_x1,0);
        if ((iVar7 != 0) && (pdVar18 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(extraout_x1,0), (int)pdVar18 == 0))
        {
          return pdVar18;
        }
        auVar37._8_8_ = pdStack_3c8;
        auVar37._0_8_ = lStack_3d8;
        if (*(long *)(lVar10 + 0x30) == 0) goto LAB_0145c21c;
        pdVar18 = (dword *)/*Atlas.Audio.SpeechManager$$IsPlaying*/ func_0x014ff334(*(long *)(lVar10 + 0x30),0);
        if ((((ulong)pdVar18 & 1) != 0) || (*(int *)(lVar10 + 0x50) != 1)) {
          return pdVar18;
        }
        pdVar23 = (dword *)0x3d1ff28;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          func_0x00f78ad0();
        }
        lVar15 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
        if (*(float *)(lVar15 + 0x30) <= (float)extraout_d0) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        }
        if (0.0 <= *(float *)(lVar10 + 0x88)) {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        }
        if ((char)extraout_x1[0xe] == '\0') {
          return /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        }
        fVar31 = *(float *)(lVar10 + 0x8c);
        unaff_d8 = (ulong)(uint)fVar31;
        pdVar18 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
        if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
          pdVar18 = (dword *)func_0x00f78ad0();
          lVar15 = *(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e);
        }
        if (fVar31 <= *(float *)(lVar15 + 800)) {
          return pdVar18;
        }
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,3,0);
        if (iVar7 == 2) {
          pdVar21 = *(dword **)(lVar10 + 0x30);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar3._8_8_ = pdStack_3c8;
          auVar3._0_8_ = lStack_3d8;
          auVar37._8_8_ = pdStack_3c8;
          auVar37._0_8_ = lStack_3d8;
          lVar15 = *(long *)(lVar10 + 0x48);
          if ((lVar15 == 0) || (auVar37 = auVar3, pdVar21 == (dword *)0x0)) goto LAB_0145c21c;
          pdVar22 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
          pdVar14 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
          pdVar20 = *(dword **)(lVar15 + 0xb8);
          iVar28 = *(int *)(lVar15 + 0x180);
          uVar29 = 0x3f800000;
          iVar7 = 6;
        }
        else if (iVar7 == 1) {
          pdVar21 = *(dword **)(lVar10 + 0x30);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar37._8_8_ = pdStack_3c8;
          auVar37._0_8_ = lStack_3d8;
          if (pdVar21 == (dword *)0x0) goto LAB_0145c21c;
          pdVar20 = *(dword **)(extraout_x1 + 0x2e);
          iVar28 = extraout_x1[0x60];
          pdVar22 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
          uVar29 = 0;
          iVar7 = 1;
          pdVar14 = pdVar22;
        }
        else {
          if (iVar7 != 0) {
            if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
              func_0x00f78ad0();
            }
            pdVar18 = /*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28;
            *(undefined4 *)(lVar10 + 0x88) =
                 *(undefined4 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x34);
            return pdVar18;
          }
          pdVar21 = *(dword **)(lVar10 + 0x30);
          if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
            func_0x00f78ad0();
          }
          auVar37._8_8_ = pdStack_3c8;
          auVar37._0_8_ = lStack_3d8;
          if (pdVar21 == (dword *)0x0) goto LAB_0145c21c;
          pdVar20 = *(dword **)(extraout_x1 + 0x2e);
          iVar28 = extraout_x1[0x60];
          pdVar22 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x378);
          uVar29 = 0;
          iVar7 = 0;
          pdVar14 = pdVar22;
        }
        param_4 = &MACH_HEADER.cputype;
        pcVar4 = (code *)&LAB_0145c1e0;
        pdVar9 = extraout_x1;
        pdVar18 = pdVar21;
        goto code_r0x014fe2a8;
      }
    }
    pdVar22 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350);
    lVar15 = *(long *)(pdVar18 + 0x2e);
    uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d3bf00);
    uVar24 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310);
    uVar8 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    auVar35._8_8_ = uVar24;
    auVar35._0_8_ = uVar8;
    pdVar18 = (dword *)((long)&MACH_HEADER.magic + 1);
    puVar27 = (undefined *)0x145b660;
    pppppppuVar26 = &pppppppuStack_180;
code_r0x014fe3e8:
    lVar10 = auVar35._0_8_;
    *(long *)((long)puVar6 + -0x30) = lVar15;
    *(dword **)((long)puVar6 + -0x28) = pdVar22;
    *(dword **)((long)puVar6 + -0x20) = pdVar20;
    *(dword **)((long)puVar6 + -0x18) = param_4;
    *(undefined8 ********)((long)puVar6 + -0x10) = pppppppuVar26;
    *(undefined **)((long)puVar6 + -8) = puVar27;
    pdVar20 = (dword *)/*System.Object$$.ctor*/ func_0x0294d018(lVar10,0);
    *(long *)(lVar10 + 0x10) = auVar35._8_8_;
    *(float *)(lVar10 + 0x18) = (float)(int)pdVar18;
    return pdVar20;
  }
  pdVar20 = (dword *)/*Atlas.Audio.KartAudio$$get_IsPlayer*/ func_0x015bbed4(lVar15,0);
  if ((int)pdVar20 == 0) {
    return pdVar20;
  }
  uVar29 = 0x40000000;
  if (8 < uVar33) {
    uVar29 = 0x40400000;
  }
  uVar34 = 0x3f800000;
  if (3 < uVar33) {
    uVar34 = uVar29;
  }
  uVar29 = 0;
  if (1 < (int)uVar33) {
    uVar29 = uVar34;
  }
  /*Atlas.Audio.KartAudio$$OnRaceFinished*/ func_0x015c133c(lVar15,0);
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  pdVar20 = (dword *)/*Core.Audio.AudioManager$$SetGlobalParameter*/ func_0x01639e60(uVar29,auVar35._0_8_,
                                     *(undefined8 *)
                                      (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x370),0,0);
  pdVar21 = *(dword **)(auVar35._0_8_ + 0x28);
  if (pdVar21 == (dword *)0x0) {
    return pdVar20;
  }
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  pdVar20 = *(dword **)(lVar15 + 0xb8);
  iVar28 = *(int *)(lVar15 + 0x180);
  pdVar22 = *(dword **)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x370);
  iVar7 = 0;
  param_4 = (dword *)((long)&MACH_HEADER.magic + 1);
  ppdVar5 = (dword **)&stack0xfffffffffffffed0;
  pdVar14 = (dword *)0x0;
  pdVar9 = (dword *)0x0;
  pdVar23 = (dword *)0x3eb4000;
  pppppppuVar25 = pppppppuStack_140;
  pcVar4 = pcStack_138;
  uVar29 = 0;
code_r0x014fe2a8:
  lVar15 = auVar36._8_8_;
  auVar38._8_8_ = lVar15;
  auVar38._0_8_ = pdVar21;
  puVar6 = (ulong *)((long)ppdVar5 + -0x70);
  *(ulong *)((long)ppdVar5 + -0x70) = unaff_d9;
  *(ulong *)((long)ppdVar5 + -0x68) = unaff_d8;
  *(undefined8 *)((long)ppdVar5 + -0x60) = unaff_x28;
  *(undefined8 *)((long)ppdVar5 + -0x58) = unaff_x27;
  *(undefined8 *)((long)ppdVar5 + -0x50) = unaff_x26;
  *(undefined8 *)((long)ppdVar5 + -0x48) = unaff_x25;
  *(undefined8 *)((long)ppdVar5 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppdVar5 + -0x38) = unaff_x23;
  *(dword **)((long)ppdVar5 + -0x30) = pdVar23;
  *(dword **)((long)ppdVar5 + -0x28) = pdVar18;
  *(dword **)((long)ppdVar5 + -0x20) = pdVar9;
  *(long *)((long)ppdVar5 + -0x18) = auVar36._0_8_;
  *(undefined8 ********)((long)ppdVar5 + -0x10) = pppppppuVar25;
  *(code **)((long)ppdVar5 + -8) = pcVar4;
  pdVar18 = pdVar22;
  if ((bRam0000000003eb4cd9 & 1) == 0) {
    func_0x00f78a20(0x3d3bf08);
    func_0x00f78a20(0x3d3bf00);
    func_0x00f78a20(0x3d1de10);
    func_0x00f78a20(0x3d24b48);
    bRam0000000003eb4cd9 = 1;
  }
  if (pdVar14 == (dword *)0x0) {
    pdVar9 = (dword *)0x0;
  }
  else {
    pdVar9 = (dword *)func_0x00f78aec(/*System.Collections.Generic.List<SpeechParam>_TypeInfo*/ uRam0000000003d1de10);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(pdVar9,uRam0000000003d3bf00);
    lVar10 = func_0x00f78aec(/*Atlas.Audio.SpeechParam_TypeInfo*/ uRam0000000003d24b48);
    /*System.Object$$.ctor*/ func_0x0294d018(lVar10,0);
    *(dword **)(lVar10 + 0x10) = pdVar14;
    *(float *)(lVar10 + 0x18) = (float)iVar7;
    if (pdVar9 == (dword *)0x0) {
      puVar27 = &Atlas_Audio_SpeechParam___ctor;
      auVar35 = func_0x00f78af4();
      pppppppuVar26 = (undefined8 *******)((long)ppdVar5 + -0x10);
      goto code_r0x014fe3e8;
    }
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(pdVar9,lVar10,uRam0000000003d3bf08);
  }
  uVar8 = *(undefined8 *)((long)ppdVar5 + -0x50);
  uVar1 = *(undefined8 *)((long)ppdVar5 + -0x48);
  uVar24 = *(undefined8 *)((long)ppdVar5 + -0x60);
  uVar2 = *(undefined8 *)((long)ppdVar5 + -0x58);
  *(undefined8 *)((long)ppdVar5 + -0x50) = *(undefined8 *)((long)ppdVar5 + -0x70);
  *(undefined8 *)((long)ppdVar5 + -0x48) = *(undefined8 *)((long)ppdVar5 + -0x68);
  *(undefined8 *)((long)ppdVar5 + -0x40) = *(undefined8 *)((long)ppdVar5 + -0x40);
  *(undefined8 *)((long)ppdVar5 + -0x38) = *(undefined8 *)((long)ppdVar5 + -0x38);
  *(undefined8 *)((long)ppdVar5 + -0x30) = *(undefined8 *)((long)ppdVar5 + -0x30);
  *(undefined8 *)((long)ppdVar5 + -0x28) = *(undefined8 *)((long)ppdVar5 + -0x28);
  *(undefined8 *)((long)ppdVar5 + -0x20) = *(undefined8 *)((long)ppdVar5 + -0x20);
  *(undefined8 *)((long)ppdVar5 + -0x18) = *(undefined8 *)((long)ppdVar5 + -0x18);
  *(undefined8 *)((long)ppdVar5 + -0x10) = *(undefined8 *)((long)ppdVar5 + -0x10);
  *(undefined8 *)((long)ppdVar5 + -8) = *(undefined8 *)((long)ppdVar5 + -8);
  *(int *)((long)ppdVar5 + -0x54) = (int)param_4;
  pdVar14 = pdVar22;
  pdVar23 = pdVar20;
  pdVar18 = pdVar9;
  if ((bRam0000000003eb4cda & 1) == 0) {
    func_0x00f78a20(iVar28,uVar29,0x3d3da38);
    bRam0000000003eb4cda = 1;
  }
  if ((char)pdVar21[0xd] == '\0') {
code_r0x014fe49c:
    pdVar18 = (dword *)((long)ppdVar5 + -0x54);
    puVar27 = &UNK_014fe4b4;
    pdVar14 = pdVar22;
    pdVar23 = pdVar9;
  }
  else {
    if (*(long *)(pdVar21 + 4) != 0) {
      if (*(char *)(*(long *)(pdVar21 + 4) + 0xcb) == '\0') {
        return (dword *)0x0;
      }
      goto code_r0x014fe49c;
    }
    puVar27 = &Atlas_Audio_SpeechManager__CheckSpeechRules;
    auVar38 = func_0x00f78af4();
  }
  lVar16 = auVar38._8_8_;
  lVar10 = auVar38._0_8_;
  *(undefined8 *)((long)ppdVar5 + -0xc0) = uVar24;
  *(undefined8 *)((long)ppdVar5 + -0xb8) = uVar2;
  *(undefined8 *)((long)ppdVar5 + -0xb0) = uVar8;
  *(undefined8 *)((long)ppdVar5 + -0xa8) = uVar1;
  *(undefined8 *)((long)ppdVar5 + -0xa0) = 0x3eb4000;
  *(long *)((long)ppdVar5 + -0x98) = lVar15;
  *(dword **)((long)ppdVar5 + -0x90) = pdVar22;
  *(dword **)((long)ppdVar5 + -0x88) = pdVar21;
  *(dword **)((long)ppdVar5 + -0x80) = pdVar20;
  *(dword **)((long)ppdVar5 + -0x78) = pdVar9;
  *(undefined1 **)((long)ppdVar5 + -0x70) = (undefined1 *)((long)ppdVar5 + -0x10);
  *(undefined **)((long)ppdVar5 + -0x68) = puVar27;
  if ((bRam0000000003eb4cde & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30020);
    func_0x00f78a20(0x3d30028);
    func_0x00f78a20(0x3d32f50);
    func_0x00f78a20(0x3d32f58);
    func_0x00f78a20(0x3d32f60);
    func_0x00f78a20(0x3d3bf10);
    func_0x00f78a20(0x3d269f8);
    bRam0000000003eb4cde = 1;
  }
  *(undefined8 *)((long)ppdVar5 + -0xe0) = 0;
  *(undefined8 *)((long)ppdVar5 + -0xd8) = 0;
  *(undefined8 *)((long)ppdVar5 + -0xd0) = 0;
  *(undefined4 *)((long)ppdVar5 + -0xe4) = 0;
  if (*(long *)(lVar10 + 0x10) == 0) goto code_r0x014fe8f8;
  if (*(char *)(*(long *)(lVar10 + 0x10) + 0x90) != '\0') {
    return (dword *)0x0;
  }
  if (lVar16 == 0) goto code_r0x014fe8f8;
  uVar11 = /*Atlas.Audio.KartAudio$$IsFarAI*/ func_0x015c1344(lVar16,0);
  if ((uVar11 & 1) != 0) {
    return (dword *)0x0;
  }
  if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
    func_0x00f78ad0();
  }
  iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(pdVar14,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x350),0
                         );
  if (iVar7 != 0) {
    if (pdVar23 == (dword *)0x0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)ppdVar5 + -0x100),pdVar23,uRam0000000003d3bf10);
    *(undefined8 *)((long)ppdVar5 + -0xd8) = *(undefined8 *)((long)ppdVar5 + -0xf8);
    *(undefined8 *)((long)ppdVar5 + -0xe0) = *(undefined8 *)((long)ppdVar5 + -0x100);
    *(undefined8 *)((long)ppdVar5 + -0xd0) = *(undefined8 *)((long)ppdVar5 + -0xf0);
    while (uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)ppdVar5 + -0xe0),uRam0000000003d32f58),
          (uVar11 & 1) != 0) {
      lVar15 = *(long *)((long)ppdVar5 + -0xd0);
      if (lVar15 == 0) {
        func_0x00f78af4();
        goto code_r0x014fe900;
      }
      uVar8 = *(undefined8 *)(lVar15 + 0x10);
      if (((*(ushort *)((long)/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28[0x38] == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar8,*(undefined8 *)
                                      (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ pdRam0000000003d1ff28 + 0x2e) + 0x310),0);
      if ((uVar11 & 1) != 0) {
        fVar32 = *(float *)(lVar15 + 0x18);
        fVar31 = -fVar32;
        if (fVar32 != INFINITY) {
          fVar31 = fVar32;
        }
        *(int *)((long)ppdVar5 + -0xe4) = (int)fVar31;
        plVar12 = (long *)func_0x00f78ae0(/*Atlas.Audio.AtlasAudioManager.RaceEvent_TypeInfo*/ uRam0000000003d269f8,(undefined1 *)((long)ppdVar5 + -0xe4)
                                         );
        if (plVar12 == (long *)0x0) goto code_r0x014fe8fc;
        uVar8 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        puVar13 = (undefined4 *)func_0x00f78ae4(plVar12);
        *(undefined4 *)((long)ppdVar5 + -0xe4) = *puVar13;
        pdVar14 = (dword *)/*System.String$$Concat*/ func_0x029bdb88(pdVar14,uVar8,0);
      }
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)ppdVar5 + -0xe0),uRam0000000003d32f50);
  }
  if (*(long *)(lVar10 + 0x28) == 0) goto code_r0x014fe8f8;
  iVar7 = /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$ContainsKey*/ func_0x01ef3924(*(long *)(lVar10 + 0x28),pdVar14,uRam0000000003d30020);
  if (iVar7 == 0) {
code_r0x014fe888:
    pdVar18 = (dword *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (*(long *)(lVar10 + 0x28) == 0) goto code_r0x014fe8f8;
    /*System.Collections.Generic.Dictionary<string, SpeechRulesDefinition.SpeechRule>$$get_Item*/ func_0x01ef35d0(*(long *)(lVar10 + 0x28),pdVar14,uRam0000000003d30028);
    if ((extraout_x1_00 & 0xff00000000) == 0) {
      if (*pdVar18 - 1 < 2) {
        dVar19 = 4;
        goto code_r0x014fe860;
      }
    }
    else {
      dVar19 = 1;
code_r0x014fe860:
      *pdVar18 = dVar19;
    }
    iVar7 = (int)extraout_x1_00;
    if (iVar7 == 3) {
      if ((*(long *)(lVar16 + 0xa0) == 0) ||
         (lVar15 = *(long *)(*(long *)(lVar16 + 0xa0) + 0x90), lVar15 == 0)) {
code_r0x014fe8f8:
        func_0x00f78af4();
code_r0x014fe8fc:
        func_0x00f78af4();
code_r0x014fe900:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x14fe904);
        (*pcVar4)();
      }
      iVar7 = /*Atlas.Gameplay.Player.GameContextPlayer$$get_CurrentLap*/ func_0x015a35a4(lVar15,0);
      if (1 < iVar7) {
        iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,4,0);
        return (dword *)(ulong)(iVar7 < 3);
      }
      uVar11 = 2;
    }
    else {
      uVar11 = extraout_x1_00;
      if (iVar7 != 2) {
        if (iVar7 == 0) {
          pdVar18 = (dword *)/*Atlas.Audio.KartAudio$$ShouldISpeak*/ func_0x015c1368(lVar16,0);
          return pdVar18;
        }
        goto code_r0x014fe888;
      }
    }
    iVar7 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,uVar11,0);
    pdVar18 = (dword *)(ulong)(iVar7 == 0);
  }
  return pdVar18;
}



// ============================================================
// RVA: 0x15b96a8 | Atlas.Audio.KartAudio.OpenPortal
// ============================================================

/* WARNING: Possible PIC construction at 0x015b9790: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015b9794) */
/* WARNING: Removing unreachable block (ram,0x015b97cc) */
/* WARNING: Removing unreachable block (ram,0x015b97d0) */
/* WARNING: Removing unreachable block (ram,0x015b97d8) */
/* WARNING: Removing unreachable block (ram,0x015b97e0) */
/* WARNING: Removing unreachable block (ram,0x015b97a8) */
/* WARNING: Removing unreachable block (ram,0x015b97ac) */
/* WARNING: Removing unreachable block (ram,0x015b97b4) */
/* WARNING: Removing unreachable block (ram,0x015b97bc) */
/* WARNING: Removing unreachable block (ram,0x015b97ec) */
/* WARNING: Removing unreachable block (ram,0x015b9800) */
/* WARNING: Removing unreachable block (ram,0x015b97c8) */

undefined1  [16] Atlas_Audio_KartAudio__OpenPortal(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 extraout_x1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((bRam0000000003eb52d5 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb52d5 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x150);
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar2 != 0) {
    auVar3._0_8_ = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar2,*(undefined8 *)
                                          (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x278),
                                   uRam0000000003d2fb00);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_2,0,0);
    if ((uVar1 & 1) == 0) {
      param_2 = *(undefined8 *)(param_1 + 0xb8);
    }
    if (auVar3._0_8_ != 0) {
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,auVar3._0_8_,param_2,0);
      auVar3._8_8_ = extraout_x1;
      return auVar3;
    }
  }
  auVar4._0_8_ = func_0x00f78af4();
  auVar4._8_8_ = 0;
  return auVar4;
}



// ============================================================
// RVA: 0x15bbed4 | Atlas.Audio.KartAudio.get_IsPlayer
// ============================================================

bool Atlas_Audio_KartAudio__get_IsPlayer(long param_1)

{
  return *(char *)(param_1 + 0x38) == '\0';
}



// ============================================================
// RVA: 0x15bbee4 | Atlas.Audio.KartAudio.get_IsAI
// ============================================================

undefined1 Atlas_Audio_KartAudio__get_IsAI(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x15bbeec | Atlas.Audio.KartAudio.get_AudioManager
// ============================================================

undefined8 Atlas_Audio_KartAudio__get_AudioManager(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x15bbef4 | Atlas.Audio.KartAudio.get_Ranking
// ============================================================

undefined4 Atlas_Audio_KartAudio__get_Ranking(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc0);
}



// ============================================================
// RVA: 0x15bbefc | Atlas.Audio.KartAudio.get_DistanceFromPlayer
// ============================================================

undefined4 Atlas_Audio_KartAudio__get_DistanceFromPlayer(long param_1)

{
  return *(undefined4 *)(param_1 + 0x184);
}



// ============================================================
// RVA: 0x15bbf04 | Atlas.Audio.KartAudio.get_Velocity
// ============================================================

undefined4 Atlas_Audio_KartAudio__get_Velocity(long param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}



// ============================================================
// RVA: 0x15bbf10 | Atlas.Audio.KartAudio.get_KartComposite
// ============================================================

undefined8 Atlas_Audio_KartAudio__get_KartComposite(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x15bbf18 | Atlas.Audio.KartAudio.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bca84 | Atlas.Audio.KartAudio.PostInit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bcbc8 | Atlas.Audio.KartAudio.Deinit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bd068 | Atlas.Audio.KartAudio.StopShieldImmediate
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bd16c | Atlas.Audio.KartAudio.StopAmbience
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bd214 | Atlas.Audio.KartAudio.GetEnginePath
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bd378 | Atlas.Audio.KartAudio.StartEngine
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bd5fc | Atlas.Audio.KartAudio.EventExists
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bd6d8 | Atlas.Audio.KartAudio.SetRpm
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bd784 | Atlas.Audio.KartAudio.InitSurfaces
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bd8cc | Atlas.Audio.KartAudio.StartAmbience
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bd980 | Atlas.Audio.KartAudio.Update
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bdce4 | Atlas.Audio.KartAudio.SetAirborne
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bde88 | Atlas.Audio.KartAudio.HandleSlipSlide
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bdfcc | Atlas.Audio.KartAudio.HandleSurfaces
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15be188 | Atlas.Audio.KartAudio.HandleElevation
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15be1f4 | Atlas.Audio.KartAudio.HandleGliding
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15be478 | Atlas.Audio.KartAudio.HandleScraping
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15be5c0 | Atlas.Audio.KartAudio.HandleEvents
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15be77c | Atlas.Audio.KartAudio.HandleAmbience
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15be8e4 | Atlas.Audio.KartAudio.HandleShield
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bea18 | Atlas.Audio.KartAudio.DoDrifting
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bedb8 | Atlas.Audio.KartAudio.CalcDistanceFromPlayer
// ============================================================

/* WARNING: Possible PIC construction at 0x015bf7c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bf958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bf998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bfab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015c0238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015c0448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bff74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015c044c) */
/* WARNING: Removing unreachable block (ram,0x015c0484) */
/* WARNING: Removing unreachable block (ram,0x015c0488) */
/* WARNING: Removing unreachable block (ram,0x015c0490) */
/* WARNING: Removing unreachable block (ram,0x015c0498) */
/* WARNING: Removing unreachable block (ram,0x015c0460) */
/* WARNING: Removing unreachable block (ram,0x015c0464) */
/* WARNING: Removing unreachable block (ram,0x015c046c) */
/* WARNING: Removing unreachable block (ram,0x015c0474) */
/* WARNING: Removing unreachable block (ram,0x015c04a4) */
/* WARNING: Removing unreachable block (ram,0x015c04b8) */
/* WARNING: Removing unreachable block (ram,0x015c0480) */
/* WARNING: Removing unreachable block (ram,0x015c023c) */
/* WARNING: Removing unreachable block (ram,0x015c0240) */
/* WARNING: Removing unreachable block (ram,0x015c0248) */
/* WARNING: Removing unreachable block (ram,0x015c0264) */
/* WARNING: Removing unreachable block (ram,0x015c027c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f0c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f34) */
/* WARNING: Removing unreachable block (ram,0x01ec9f40) */
/* WARNING: Removing unreachable block (ram,0x01ec9f48) */
/* WARNING: Removing unreachable block (ram,0x01ec9f64) */
/* WARNING: Removing unreachable block (ram,0x01ec9f6c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f78) */
/* WARNING: Removing unreachable block (ram,0x01ec9f80) */
/* WARNING: Removing unreachable block (ram,0x01ec9fac) */
/* WARNING: Removing unreachable block (ram,0x01ec9f8c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f98) */
/* WARNING: Removing unreachable block (ram,0x01ec9fbc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fd4) */
/* WARNING: Removing unreachable block (ram,0x01ec9fdc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fec) */
/* WARNING: Removing unreachable block (ram,0x01ec9ff8) */
/* WARNING: Removing unreachable block (ram,0x01eca008) */
/* WARNING: Removing unreachable block (ram,0x01eca00c) */
/* WARNING: Removing unreachable block (ram,0x01eca01c) */
/* WARNING: Removing unreachable block (ram,0x01eca030) */
/* WARNING: Removing unreachable block (ram,0x01eca038) */
/* WARNING: Removing unreachable block (ram,0x01eca058) */
/* WARNING: Removing unreachable block (ram,0x01eca060) */
/* WARNING: Removing unreachable block (ram,0x01eca06c) */
/* WARNING: Removing unreachable block (ram,0x01eca074) */
/* WARNING: Removing unreachable block (ram,0x01eca0a0) */
/* WARNING: Removing unreachable block (ram,0x01eca080) */
/* WARNING: Removing unreachable block (ram,0x01eca08c) */
/* WARNING: Removing unreachable block (ram,0x01eca0ac) */
/* WARNING: Removing unreachable block (ram,0x01eca10c) */
/* WARNING: Removing unreachable block (ram,0x01eca148) */
/* WARNING: Removing unreachable block (ram,0x01eca150) */
/* WARNING: Removing unreachable block (ram,0x01eca160) */
/* WARNING: Removing unreachable block (ram,0x01eca168) */
/* WARNING: Removing unreachable block (ram,0x01eca174) */
/* WARNING: Removing unreachable block (ram,0x01eca110) */
/* WARNING: Removing unreachable block (ram,0x01eca118) */
/* WARNING: Removing unreachable block (ram,0x01eca124) */
/* WARNING: Removing unreachable block (ram,0x01eca12c) */
/* WARNING: Removing unreachable block (ram,0x01eca188) */
/* WARNING: Removing unreachable block (ram,0x01eca190) */
/* WARNING: Removing unreachable block (ram,0x01eca1b0) */
/* WARNING: Removing unreachable block (ram,0x01eca1bc) */
/* WARNING: Removing unreachable block (ram,0x01eca0c4) */
/* WARNING: Removing unreachable block (ram,0x01eca1e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0cc) */
/* WARNING: Removing unreachable block (ram,0x01eca1ec) */
/* WARNING: Removing unreachable block (ram,0x01eca1f8) */
/* WARNING: Removing unreachable block (ram,0x01eca250) */
/* WARNING: Removing unreachable block (ram,0x01eca298) */
/* WARNING: Removing unreachable block (ram,0x01eca270) */
/* WARNING: Removing unreachable block (ram,0x01eca2b0) */
/* WARNING: Removing unreachable block (ram,0x01eca278) */
/* WARNING: Removing unreachable block (ram,0x01eca2b4) */
/* WARNING: Removing unreachable block (ram,0x01eca2e8) */
/* WARNING: Removing unreachable block (ram,0x01eca2cc) */
/* WARNING: Removing unreachable block (ram,0x01eca284) */
/* WARNING: Removing unreachable block (ram,0x01eca29c) */
/* WARNING: Removing unreachable block (ram,0x01eca0d8) */
/* WARNING: Removing unreachable block (ram,0x01eca0e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0ec) */
/* WARNING: Removing unreachable block (ram,0x015bf99c) */
/* WARNING: Removing unreachable block (ram,0x015bf95c) */
/* WARNING: Removing unreachable block (ram,0x015bff78) */
/* WARNING: Removing unreachable block (ram,0x015bff7c) */
/* WARNING: Removing unreachable block (ram,0x015bff94) */
/* WARNING: Removing unreachable block (ram,0x015bff9c) */
/* WARNING: Removing unreachable block (ram,0x015bffa4) */
/* WARNING: Removing unreachable block (ram,0x015bffcc) */
/* WARNING: Removing unreachable block (ram,0x015bfff0) */
/* WARNING: Removing unreachable block (ram,0x01ec8614) */
/* WARNING: Removing unreachable block (ram,0x01ec863c) */
/* WARNING: Removing unreachable block (ram,0x01ec8664) */
/* WARNING: Removing unreachable block (ram,0x01ec867c) */
/* WARNING: Removing unreachable block (ram,0x01ec86a0) */
/* WARNING: Removing unreachable block (ram,0x01ec86c0) */
/* WARNING: Removing unreachable block (ram,0x01ec86cc) */
/* WARNING: Removing unreachable block (ram,0x01ec870c) */
/* WARNING: Removing unreachable block (ram,0x01ec8710) */
/* WARNING: Removing unreachable block (ram,0x01ec8734) */
/* WARNING: Removing unreachable block (ram,0x01ec87d0) */
/* WARNING: Removing unreachable block (ram,0x01ec875c) */
/* WARNING: Removing unreachable block (ram,0x01ec877c) */
/* WARNING: Removing unreachable block (ram,0x01ec8788) */
/* WARNING: Removing unreachable block (ram,0x01ec87e8) */
/* WARNING: Removing unreachable block (ram,0x01ec87ec) */
/* WARNING: Removing unreachable block (ram,0x01ec8810) */
/* WARNING: Removing unreachable block (ram,0x01ec881c) */
/* WARNING: Removing unreachable block (ram,0x01ec8828) */
/* WARNING: Removing unreachable block (ram,0x01ec8838) */
/* WARNING: Removing unreachable block (ram,0x01ec8840) */
/* WARNING: Removing unreachable block (ram,0x01ec8888) */
/* WARNING: Removing unreachable block (ram,0x01ec8894) */
/* WARNING: Removing unreachable block (ram,0x01ec8844) */
/* WARNING: Removing unreachable block (ram,0x01ec8854) */
/* WARNING: Removing unreachable block (ram,0x01ec887c) */
/* WARNING: Removing unreachable block (ram,0x01ec878c) */
/* WARNING: Removing unreachable block (ram,0x01ec87ac) */
/* WARNING: Removing unreachable block (ram,0x01ec87d4) */
/* WARNING: Removing unreachable block (ram,0x01ec86d0) */
/* WARNING: Removing unreachable block (ram,0x01ec86f8) */
/* WARNING: Removing unreachable block (ram,0x01ec86f0) */
/* WARNING: Removing unreachable block (ram,0x01ec86fc) */
/* WARNING: Removing unreachable block (ram,0x01ec864c) */
/* WARNING: Removing unreachable block (ram,0x01ec8620) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Audio_KartAudio__CalcDistanceFromPlayer
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4,
                undefined8 param_5,undefined8 param_6,long param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong extraout_x1;
  undefined8 uVar20;
  long lVar21;
  undefined8 *extraout_x8;
  long lVar22;
  undefined8 unaff_x21;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 ****ppppuVar23;
  undefined1 **ppuVar24;
  undefined *puVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 extraout_s0;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  ulong unaff_d9;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (*(long *)(param_4 + 0x90) != 0) {
    if (*(long *)(*(long *)(param_4 + 0x90) + 0x48) == 0) {
      return param_4;
    }
    if (*(long *)(param_4 + 0xb8) != 0) {
      uVar26 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(param_4 + 0xb8),0);
      if (((*(long *)(param_4 + 0x90) != 0) &&
          (lVar21 = *(long *)(*(long *)(param_4 + 0x90) + 0x48), lVar21 != 0)) &&
         (lVar21 = *(long *)(lVar21 + 0xb8), lVar21 != 0)) {
        uVar31 = param_3;
        uVar30 = param_2;
        uVar27 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar21,0);
        uVar9 = /*UnityEngine.Vector3$$Distance*/ func_0x0327bcbc(uVar26,param_2,param_3,uVar27,uVar30,uVar31,0);
        *(undefined4 *)(param_4 + 0x184) = extraout_s0;
        return uVar9;
      }
    }
  }
  auVar33 = func_0x00f78af4();
  uVar9 = auVar33._0_8_;
  fVar28 = *(float *)(auVar33._8_8_ + 0x5c);
  puStack_48 = &Atlas_Audio_KartAudio__HandleDriftHopBoost;
  uVar14 = (ulong)(uint)fVar28;
  uVar10 = uVar9;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb52c3 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    uVar10 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52c3 = 1;
  }
  if ((fVar28 <= *(float *)(uVar9 + 0x40)) || (*(char *)(uVar9 + 0x38) != '\0')) {
code_r0x015bf7e4:
    *(float *)(uVar9 + 0x40) = fVar28;
    return uVar10;
  }
  lVar21 = *(long *)(uVar9 + 0x150);
  uVar10 = 0x3d1ff28;
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar22 = 0;
  if (lVar21 != 0) {
    unaff_x23 = 0x3d2fb00;
    lVar21 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar21,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x220),
                             uRam0000000003d2fb00);
    if (lVar21 != 0) {
      unaff_x21 = *(undefined8 *)(uVar9 + 0xb8);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_7 = 0;
      /*Core.Audio.AudioEvent$$Play*/ func_0x01638d80((float)*(int *)(uVar9 + 0x158),lVar21,unaff_x21,
                      *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1a0));
    }
    lVar22 = *(long *)(uVar9 + 0x150);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar22 != 0) {
      uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar22,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2d8),
                               uRam0000000003d2fb00);
      if (uVar11 != 0) {
        lVar21 = *(long *)(uVar9 + 0xb8);
        puVar4 = &stack0xffffffffffffff70;
        ppuVar24 = &puStack_50;
        puVar25 = &UNK_015bf7cc;
        goto code_r0x01638d28;
      }
      if (*(long *)(uVar9 + 0x90) != 0) {
        uVar10 = Atlas_Audio_AtlasAudioManager__SpeakBoostPad
                           (*(undefined4 *)(uVar9 + 0x60),*(long *)(uVar9 + 0x90),uVar9,0);
        goto code_r0x015bf7e4;
      }
    }
  }
  auVar33 = func_0x00f78af4();
  uVar11 = auVar33._8_8_;
  uVar15 = auVar33._0_8_;
  uStack_c0 = 0x3d1ff28;
  puStack_98 = &Atlas_Audio_KartAudio__PlaySurface;
  uVar12 = uVar15;
  uStack_b8 = unaff_x21;
  lStack_b0 = lVar22;
  uStack_a8 = uVar9;
  ppuStack_a0 = &puStack_50;
  if ((bRam0000000003eb52d3 & 1) == 0) {
    uVar12 = func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb52d3 = 1;
  }
  if (*(char *)(uVar15 + 0x38) == '\0') {
    lVar21 = *(long *)(uVar15 + 0x90);
    if (lVar21 == 0) {
      func_0x00f78af4();
      puVar5 = &uStack_f0;
      uStack_f0 = 0x3d1ff28;
      puStack_c8 = &Atlas_Audio_KartAudio__ClearCollisionEventParameters;
      ppppuVar23 = &pppuStack_d0;
      lVar22 = 0x3eb5000;
      lStack_e8 = lVar21;
      pppuStack_d0 = &ppuStack_a0;
      if ((bRam0000000003eb52ca & 1) == 0) {
        uStack_e0 = uVar11;
        uStack_d8 = uVar15;
        func_0x00f78a20(0x3d1ff28);
        auVar33._8_8_ = uStack_e0;
        auVar33._0_8_ = uStack_d8;
        bRam0000000003eb52ca = 1;
      }
      uStack_e0 = auVar33._8_8_;
      uStack_d8 = auVar33._0_8_;
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
        auVar33._8_8_ = uStack_e0;
        auVar33._0_8_ = uStack_d8;
      }
      uStack_e0 = auVar33._8_8_;
      uStack_d8 = auVar33._0_8_;
      if (extraout_x1 != 0) {
        uVar20 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1a8);
        puVar25 = &UNK_015bf95c;
        uVar9 = extraout_x1;
        uVar11 = extraout_x1;
        uVar12 = 0x3d1ff28;
code_r0x01638fc8:
        uStack_e0 = auVar33._8_8_;
        uStack_d8 = auVar33._0_8_;
        *(ulong *)((long)puVar5 + -0x40) = unaff_d9;
        *(ulong *)((long)puVar5 + -0x38) = uVar14;
        *(ulong *)((long)puVar5 + -0x30) = uVar10;
        *(long *)((long)puVar5 + -0x28) = lVar22;
        *(ulong *)((long)puVar5 + -0x20) = uVar12;
        *(ulong *)((long)puVar5 + -0x18) = uVar11;
        *(undefined1 *****)((long)puVar5 + -0x10) = ppppuVar23;
        *(undefined **)((long)puVar5 + -8) = puVar25;
        iVar7 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(uVar9 + 0x28,0,0,0);
        if (iVar7 != 0) {
          /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(0,uVar9 + 0x28,uVar20,0,0);
        }
        return uVar9;
      }
      puVar25 = &Atlas_Audio_KartAudio__StopScraping;
      uVar11 = func_0x00f78af4();
      auVar33 = ZEXT816(0x3d1ff28) << 0x40;
      puVar2 = &uStack_f0;
      do {
        puVar5 = (undefined8 *)((long)puVar2 + -0x30);
        *(ulong *)((long)puVar2 + -0x30) = uVar10;
        *(long *)((long)puVar2 + -0x28) = lVar22;
        *(long *)((long)puVar2 + -0x20) = auVar33._8_8_;
        *(long *)((long)puVar2 + -0x18) = auVar33._0_8_;
        *(undefined1 *****)((long)puVar2 + -0x10) = ppppuVar23;
        *(undefined **)((long)puVar2 + -8) = puVar25;
        ppppuVar23 = (undefined1 ****)((long)puVar2 + -0x10);
        lVar22 = 0x3d1ff28;
        if ((bRam0000000003eb52cc & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52cc = 1;
        }
        lVar21 = *(long *)(uVar11 + 0x150);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar21 != 0) {
          uVar9 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar21,*(undefined8 *)
                                          (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x238),
                                  uRam0000000003d2fb00);
          if (uVar9 == 0) {
            *(undefined4 *)(uVar11 + 0x70) = 0xbf800000;
            return 0;
          }
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          auVar33._8_8_ = uStack_e0;
          auVar33._0_8_ = uStack_d8;
          uVar20 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1c8);
          puVar25 = &UNK_015bfab4;
          uVar12 = uVar9;
          goto code_r0x01638fc8;
        }
        auVar33 = func_0x00f78af4();
        lVar21 = auVar33._8_8_;
        uVar12 = auVar33._0_8_;
        *(ulong *)((long)puVar2 + -0x90) = unaff_d9;
        *(ulong *)((long)puVar2 + -0x88) = uVar14;
        *(undefined8 *)((long)puVar2 + -0x80) = unaff_x26;
        *(undefined8 *)((long)puVar2 + -0x78) = unaff_x25;
        *(undefined8 *)((long)puVar2 + -0x70) = unaff_x24;
        *(ulong *)((long)puVar2 + -0x68) = unaff_x23;
        *(ulong *)((long)puVar2 + -0x60) = uVar10;
        *(undefined8 *)((long)puVar2 + -0x58) = 0x3d1ff28;
        *(undefined8 *)((long)puVar2 + -0x50) = 0;
        *(ulong *)((long)puVar2 + -0x48) = uVar11;
        *(undefined1 *****)((long)puVar2 + -0x40) = ppppuVar23;
        *(undefined **)((long)puVar2 + -0x38) = &Atlas_Audio_KartAudio__OnCollisionEnter;
        lVar22 = 0x3eb5000;
        uVar9 = uVar12;
        if ((bRam0000000003eb52ce & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d578a8);
          uVar9 = func_0x00f78a20(0x3d23990);
          bRam0000000003eb52ce = 1;
        }
        fVar28 = _UNK_033f83fc;
        if (*(char *)(uVar12 + 0x50) == '\0') {
          return uVar9;
        }
        if (*(char *)(uVar12 + 0x38) != '\0') {
          return uVar9;
        }
        if (*(long *)(uVar12 + 0x90) != 0) {
          if (*(char *)(*(long *)(uVar12 + 0x90) + 0xcd) == '\0') {
            return uVar9;
          }
          if (*(float *)(uVar12 + 0x68) <= _UNK_033f83fc) {
            return uVar9;
          }
          if (*(int *)(lVar21 + 0x20) == 5) {
            return uVar9;
          }
          *(undefined4 *)(uVar12 + 0x68) = 0;
          if ((*(long *)(lVar21 + 8) != 0) &&
             (lVar13 = /*UnityEngine.Collision$$get_gameObject*/ func_0x0329ee78(*(long *)(lVar21 + 8),0), lVar13 != 0)) {
            lVar22 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar13,uRam0000000003d578a8);
            if (*(long *)(lVar21 + 8) != 0) {
              uVar26 = /*UnityEngine.Collision$$get_relativeVelocity*/ func_0x0329ede4(*(long *)(lVar21 + 8),0);
              *(undefined4 *)((long)puVar2 + -0xa0) = uVar26;
              *(float *)((long)puVar2 + -0x9c) = fVar28;
              *(undefined4 *)((long)puVar2 + -0x98) = param_3;
              uVar26 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc((undefined1 *)((long)puVar2 + -0xa0),0);
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              fVar28 = (float)/*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar26,*(undefined4 *)
                                                      (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8),0
                                             );
              uVar14 = (ulong)(uint)fVar28;
              fVar32 = *(float *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8);
              unaff_d9 = (ulong)(uint)fVar32;
              uVar10 = (ulong)((*(uint *)(lVar21 + 0x20) & 0xfffffffe) == 2);
              unaff_x25 = 0x3d23990;
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar9 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar22,0);
              if ((int)uVar9 == 0) {
                unaff_x23 = 1;
              }
              else {
                if (lVar22 == 0) goto code_r0x015bfd5c;
                unaff_x23 = (ulong)*(uint *)(lVar22 + 0x1c);
              }
              if (*(int *)(lVar21 + 0x20) == 0) {
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar9 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar22,0);
                if ((int)uVar9 != 0) {
                  if (lVar22 == 0) goto code_r0x015bfd5c;
                  fVar29 = 3.0;
                  if ((*(uint *)(lVar22 + 0x1c) & 0xfffffffe) == 8) goto code_r0x015bfce0;
                }
              }
              if (3 < *(int *)(lVar21 + 0x20) - 1U) {
                return uVar9;
              }
              fVar29 = (fVar28 / fVar32) * 3.0;
code_r0x015bfce0:
              uVar26 = 0;
              if (*(char *)(lVar21 + 0x1c) != '\0') {
                uVar26 = 0xbf800000;
              }
              *(undefined4 *)(uVar12 + 0x70) = uVar26;
              /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(fVar29,0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar22,0,0);
              uVar9 = /*Atlas.Audio.KartAudio$$PlayCollision*/ func_0x015bf31c(uVar12,unaff_x23);
              return uVar9;
            }
          }
        }
code_r0x015bfd5c:
        uVar11 = func_0x00f78af4();
        *(undefined1 **)((long)puVar2 + -0xc0) = (undefined1 *)((long)puVar2 + -0x40);
        *(undefined **)((long)puVar2 + -0xb8) = &Atlas_Audio_KartAudio__OnCollisionExit;
        if ((*(char *)(uVar11 + 0x50) == '\0') || (*(char *)(uVar11 + 0x38) != '\0')) {
          return uVar11;
        }
        if (*(long *)(uVar11 + 0x90) == 0) {
          auVar33 = func_0x00f78af4();
          uVar9 = auVar33._8_8_;
          uVar11 = auVar33._0_8_;
          puVar6 = (undefined1 *)((long)puVar2 + -0xf0);
          puVar3 = (undefined1 *)((long)puVar2 + -0xf0);
          *(ulong *)((long)puVar2 + -0xf0) = uVar10;
          *(long *)((long)puVar2 + -0xe8) = lVar22;
          *(long *)((long)puVar2 + -0xe0) = lVar21;
          *(ulong *)((long)puVar2 + -0xd8) = uVar12;
          *(undefined1 **)((long)puVar2 + -0xd0) = (undefined1 *)((long)puVar2 + -0xc0);
          *(undefined **)((long)puVar2 + -200) = &Atlas_Audio_KartAudio__OnTriggerEnter;
          puVar4 = (undefined1 *)((long)puVar2 + -0xd0);
          uVar20 = 0x3eb5000;
          uVar14 = uVar11;
          if ((bRam0000000003eb52cf & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            func_0x00f78a20(0x3d2e048);
            func_0x00f78a20(0x3d2e050);
            func_0x00f78a20(0x3d577c8);
            func_0x00f78a20(0x3d578c0);
            uVar14 = func_0x00f78a20(0x3d23990);
            bRam0000000003eb52cf = 1;
          }
          if (*(char *)(uVar11 + 0x50) == '\0') {
            return uVar14;
          }
          if (*(char *)(uVar11 + 0x38) != '\0') {
            return uVar14;
          }
          if (*(float *)(uVar11 + 100) <= _UNK_033f8140) {
            return uVar14;
          }
          *(undefined4 *)(uVar11 + 100) = 0;
          if ((uVar9 != 0) && (lVar21 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar9,0), lVar21 != 0)) {
            uVar20 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar21,uRam0000000003d578c0);
            lVar21 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar9,0);
            if (lVar21 == 0) goto code_r0x015c0060;
            uVar9 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar21,uRam0000000003d577c8);
            uVar14 = 0x3d23990;
            uVar12 = 0x3d23990;
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar20,0);
            if (iVar7 != 0) {
              puVar4 = *(undefined1 **)((long)puVar2 + -0xd0);
              puVar25 = *(undefined **)((long)puVar2 + -200);
              uVar9 = *(ulong *)((long)puVar2 + -0xe0);
              puVar3 = (undefined1 *)((long)puVar2 + -0xc0);
              uVar10 = *(ulong *)((long)puVar2 + -0xf0);
              uVar20 = *(undefined8 *)((long)puVar2 + -0xe8);
              uVar14 = uVar11;
              uVar11 = *(ulong *)((long)puVar2 + -0xd8);
              goto code_r0x015c0064;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar15 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar9,0);
            if ((int)uVar15 == 0) {
              return uVar15;
            }
            uVar10 = uVar14;
            if (uVar9 == 0) goto code_r0x015c0060;
            iVar7 = *(int *)(uVar9 + 0x60);
            if (iVar7 == 0) {
              if (*(char *)(uVar9 + 0x68) != '\0') {
                return uVar15;
              }
              uVar10 = uVar12;
              if (*(long *)(uVar11 + 0x90) == 0) goto code_r0x015c0060;
              if (*(char *)(*(long *)(uVar11 + 0x90) + 0xce) == '\0') {
                return uVar15;
              }
              lVar21 = *(long *)(uVar11 + 0x148);
              if (lVar21 == 0) goto code_r0x015c0060;
              puVar25 = &UNK_015bff78;
code_r0x01ec8898:
              *(undefined1 **)(puVar6 + -0x10) = puVar4;
              *(undefined **)(puVar6 + -8) = puVar25;
              if (lVar21 != 0) {
                uVar8 = (*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(uRam0000000003d2e050 + 0x18) + 0xc0) + 0x40
                                    ))();
                return (ulong)(~uVar8 >> 0x1f);
              }
              uVar10 = uRam0000000003d2e050;
              auVar33 = func_0x00f78af4(0,uVar9);
              lVar21 = auVar33._0_8_;
              *(undefined8 *)(puVar6 + -0x50) = unaff_x24;
              *(ulong *)(puVar6 + -0x48) = unaff_x23;
              *(ulong *)(puVar6 + -0x40) = uVar14;
              *(undefined8 *)(puVar6 + -0x38) = uVar20;
              *(ulong *)(puVar6 + -0x30) = uVar9;
              *(ulong *)(puVar6 + -0x28) = uVar11;
              *(undefined1 **)(puVar6 + -0x20) = puVar6 + -0x10;
              *(undefined **)(puVar6 + -0x18) =
                   &System_Collections_Generic_Dictionary_object__EventInstance___ContainsValue;
              plVar16 = (long *)(*(code *)**(undefined8 **)
                                            (*(long *)(*(long *)(uVar10 + 0x18) + 0xc0) + 0x68))();
              iVar7 = *(int *)(lVar21 + 0x20);
              if (iVar7 < 1) {
                return 0;
              }
              lVar22 = 0;
              uVar9 = 0;
              goto code_r0x01ec8914;
            }
            if (iVar7 == 2) {
              if (*(char *)(uVar9 + 0x50) != '\0') {
                return uVar15;
              }
              uVar10 = uVar12;
              if (*(long *)(uVar11 + 0x90) == 0) goto code_r0x015c0060;
              if (*(char *)(*(long *)(uVar11 + 0x90) + 0xd2) == '\0') {
                return uVar15;
              }
              lVar21 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar9,0);
              *(undefined8 *)((long)puVar2 + -0xf0) = *(undefined8 *)((long)puVar2 + -0xf0);
              *(undefined8 *)((long)puVar2 + -0xe8) = *(undefined8 *)((long)puVar2 + -0xe8);
              *(undefined8 *)((long)puVar2 + -0xe0) = *(undefined8 *)((long)puVar2 + -0xe0);
              *(undefined8 *)((long)puVar2 + -0xd8) = *(undefined8 *)((long)puVar2 + -0xd8);
              *(undefined8 *)((long)puVar2 + -0xd0) = *(undefined8 *)((long)puVar2 + -0xd0);
              *(undefined8 *)((long)puVar2 + -200) = *(undefined8 *)((long)puVar2 + -200);
              if ((bRam0000000003eb4876 & 1) == 0) {
                func_0x00f78a20(0x3d1ff30,lVar21,0);
                func_0x00f78a20(0x3d65d08);
                bRam0000000003eb4876 = 1;
              }
              uVar11 = *(ulong *)(uVar9 + 0xb0);
              if (uVar11 == 0) {
                uVar10 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*(undefined8 *)(uVar9 + 0x48),/*STR('')*/ uRam0000000003d65d08,0);
                if ((uVar10 & 1) == 0) {
                  uVar11 = *(ulong *)(uVar9 + 0xb0);
                }
                else {
                  uVar20 = *(undefined8 *)(uVar9 + 0x48);
                  uVar11 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
                  uVar10 = /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar11,uVar20,0,0,0);
                  *(ulong *)(uVar9 + 0xb0) = uVar11;
                }
                if (uVar11 == 0) {
                  return uVar10;
                }
              }
              ppuVar24 = *(undefined1 ***)((long)puVar2 + -0xd0);
              puVar25 = *(undefined **)((long)puVar2 + -200);
              lVar22 = *(long *)((long)puVar2 + -0xe0);
              uVar9 = *(ulong *)((long)puVar2 + -0xd8);
              puVar4 = (undefined1 *)((long)puVar2 + -0xc0);
              goto code_r0x01638d28;
            }
            if (iVar7 != 1) {
              return uVar15;
            }
            if (*(long *)(uVar11 + 0x90) != 0) {
              if (*(char *)(*(long *)(uVar11 + 0x90) + 0xd1) != '\0') {
                fVar28 = *(float *)(uVar11 + 0x74) * 100.0;
                *(float *)(uVar9 + 0xc0) = fVar28 * _UNK_033f82c0 + _UNK_033f82c4;
                *(float *)(uVar9 + 0xc4) = fVar28;
                return uVar9;
              }
              return uVar15;
            }
          }
code_r0x015c0060:
          puVar25 = &Atlas_Audio_KartAudio__PickupPickedUp;
          uVar14 = func_0x00f78af4();
code_r0x015c0064:
          *(ulong *)(puVar3 + -0x30) = uVar10;
          *(undefined8 *)(puVar3 + -0x28) = uVar20;
          *(ulong *)(puVar3 + -0x20) = uVar9;
          *(ulong *)(puVar3 + -0x18) = uVar11;
          *(undefined1 **)(puVar3 + -0x10) = puVar4;
          *(undefined **)(puVar3 + -8) = puVar25;
          uVar9 = uVar14;
          if ((bRam0000000003eb52d1 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            uVar9 = func_0x00f78a20(0x3d2fb00);
            bRam0000000003eb52d1 = 1;
          }
          if (*(char *)(uVar14 + 0x38) != '\0') {
            return uVar9;
          }
          lVar21 = *(long *)(uVar14 + 0x150);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if ((lVar21 != 0) &&
             (uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar21,*(undefined8 *)
                                               (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x230),
                                       uRam0000000003d2fb00), uVar11 != 0)) {
            lVar21 = *(long *)(uVar14 + 0xb8);
            ppuVar24 = *(undefined1 ***)(puVar3 + -0x10);
            puVar25 = *(undefined **)(puVar3 + -8);
            uVar9 = *(ulong *)(puVar3 + -0x18);
            puVar4 = puVar3;
            lVar22 = *(long *)(puVar3 + -0x20);
            goto code_r0x01638d28;
          }
          auVar33 = func_0x00f78af4();
          uVar9 = auVar33._8_8_;
          uVar11 = auVar33._0_8_;
          puVar6 = puVar3 + -0x60;
          *(ulong *)(puVar3 + -0x60) = uVar10;
          *(undefined8 *)(puVar3 + -0x58) = 0x3d1ff28;
          *(long *)(puVar3 + -0x50) = lVar21;
          *(ulong *)(puVar3 + -0x48) = uVar14;
          *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x38) = &Atlas_Audio_KartAudio__OnTriggerExit;
          puVar4 = puVar3 + -0x40;
          uVar20 = 0x3eb5000;
          uVar14 = uVar11;
          if ((bRam0000000003eb52d0 & 1) == 0) {
            func_0x00f78a20(0x3d2e050);
            func_0x00f78a20(0x3d2e058);
            func_0x00f78a20(0x3d2e060);
            func_0x00f78a20(0x3d577c8);
            uVar14 = func_0x00f78a20(0x3d23990);
            bRam0000000003eb52d0 = 1;
          }
          if ((*(char *)(uVar11 + 0x50) == '\0') || (*(char *)(uVar11 + 0x38) != '\0')) {
            return uVar14;
          }
          if ((uVar9 != 0) && (lVar21 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar9,0), lVar21 != 0)) {
            uVar9 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar21,uRam0000000003d577c8);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar14 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar9,0);
            if ((int)uVar14 == 0) {
              return uVar14;
            }
            if (uVar9 != 0) {
              if (*(int *)(uVar9 + 0x60) != 0) {
                return uVar14;
              }
              if (*(long *)(uVar11 + 0x90) != 0) {
                if (*(char *)(*(long *)(uVar11 + 0x90) + 0xce) == '\0') {
                  return uVar14;
                }
                lVar21 = *(long *)(uVar11 + 0x148);
                if (lVar21 != 0) {
                  puVar25 = &UNK_015c023c;
                  uVar14 = uVar10;
                  goto code_r0x01ec8898;
                }
              }
            }
          }
          uVar14 = func_0x00f78af4();
          *(ulong *)(puVar3 + -0x90) = uVar10;
          *(undefined8 *)(puVar3 + -0x88) = 0x3eb5000;
          *(ulong *)(puVar3 + -0x80) = uVar9;
          *(ulong *)(puVar3 + -0x78) = uVar11;
          *(undefined1 **)(puVar3 + -0x70) = puVar4;
          *(undefined **)(puVar3 + -0x68) = &Atlas_Audio_KartAudio__PlayVFXAudio;
          uVar9 = uVar14;
          if ((bRam0000000003eb52d4 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            uVar9 = func_0x00f78a20(0x3d2fb00);
            bRam0000000003eb52d4 = 1;
          }
          if (*(char *)(uVar14 + 0x38) == '\0') {
            lVar21 = *(long *)(uVar14 + 0x150);
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (lVar21 == 0) {
              auVar33 = func_0x00f78af4();
              lVar21 = auVar33._8_8_;
              uVar9 = auVar33._0_8_;
              puVar4 = puVar3 + -0xd0;
              *(undefined8 *)(puVar3 + -0xd0) = unaff_x24;
              *(ulong *)(puVar3 + -200) = unaff_x23;
              *(ulong *)(puVar3 + -0xc0) = uVar10;
              *(undefined8 *)(puVar3 + -0xb8) = 0x3d1ff28;
              *(undefined8 *)(puVar3 + -0xb0) = 0;
              *(ulong *)(puVar3 + -0xa8) = uVar14;
              *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x70;
              *(undefined **)(puVar3 + -0x98) = &Atlas_Audio_KartAudio__ExitPortal;
              ppuVar24 = (undefined1 **)(puVar3 + -0xa0);
              if ((bRam0000000003eb52d6 & 1) == 0) {
                func_0x00f78a20(0x3d1ff28);
                func_0x00f78a20(0x3d2fb00);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb52d6 = 1;
              }
              lVar22 = *(long *)(uVar9 + 0x150);
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (lVar22 != 0) {
                uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar22,*(undefined8 *)
                                                 (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x278),
                                         uRam0000000003d2fb00);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar21,0,0);
                if ((uVar10 & 1) == 0) {
                  lVar21 = *(long *)(uVar9 + 0xb8);
                }
                if (uVar11 != 0) {
                  puVar25 = &UNK_015c044c;
                  lVar22 = lVar21;
                  goto code_r0x01638d28;
                }
              }
              uVar9 = func_0x00f78af4();
              return uVar9;
            }
            uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar21,*(undefined8 *)
                                             (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x250),
                                     uRam0000000003d2fb00);
            uVar9 = 0;
            if (uVar11 != 0) {
              lVar21 = *(long *)(uVar14 + 0xb8);
              ppuVar24 = *(undefined1 ***)(puVar3 + -0x70);
              puVar25 = *(undefined **)(puVar3 + -0x68);
              uVar9 = *(ulong *)(puVar3 + -0x78);
              puVar4 = puVar3 + -0x60;
              lVar22 = *(long *)(puVar3 + -0x80);
              goto code_r0x01638d28;
            }
          }
          return uVar9;
        }
        if (*(char *)(*(long *)(uVar11 + 0x90) + 0xcd) == '\0') {
          return uVar11;
        }
        ppppuVar23 = *(undefined1 *****)((long)puVar2 + -0xc0);
        puVar25 = *(undefined **)((long)puVar2 + -0xb8);
        puVar2 = (undefined8 *)((long)puVar2 + -0xb0);
      } while( true );
    }
    if ((*(char *)(lVar21 + 0xc9) != '\0') &&
       (iVar7 = auVar33._8_4_, *(int *)(uVar15 + 0xb0) != iVar7)) {
      *(int *)(uVar15 + 0xb0) = iVar7;
      if (iVar7 == 0) {
        uVar11 = (ulong)(*(byte *)(uVar15 + 0x39) ^ 1);
      }
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Core.Audio.AudioManager$$SetGlobalParameter*/ func_0x01639e60((float)(int)uVar11,lVar21,
                      *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1e8),0,0);
      uVar11 = *(ulong *)(uVar15 + 0xe0);
      uVar12 = 0;
      if (uVar11 != 0) {
        lVar21 = *(long *)(uVar15 + 0xb8);
        puVar4 = &stack0xffffffffffffff70;
        uVar9 = uStack_a8;
        lVar22 = lStack_b0;
        ppuVar24 = ppuStack_a0;
        puVar25 = puStack_98;
code_r0x01638d28:
        *(long *)(puVar4 + -0x20) = lVar22;
        *(ulong *)(puVar4 + -0x18) = uVar9;
        *(undefined1 ***)(puVar4 + -0x10) = ppuVar24;
        *(undefined **)(puVar4 + -8) = puVar25;
        /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar11,lVar21,0);
        return uVar11;
      }
    }
  }
  return uVar12;
code_r0x01ec8914:
  lVar13 = *(long *)(lVar21 + 0x18);
  if (lVar13 == 0) {
code_r0x01ec898c:
    func_0x00f78af4();
code_r0x01ec8990:
    uVar20 = func_0x00f78b24();
    auVar34 = func_0x00f78ac0(uVar20,0);
    lVar13 = auVar34._8_8_;
    lVar17 = auVar34._0_8_;
    *(undefined8 *)(puVar6 + -0xa0) = unaff_x26;
    *(undefined8 *)(puVar6 + -0x98) = unaff_x25;
    *(undefined8 *)(puVar6 + -0x90) = unaff_x24;
    *(ulong *)(puVar6 + -0x88) = uVar9;
    *(long *)(puVar6 + -0x80) = lVar22;
    *(long **)(puVar6 + -0x78) = plVar16;
    *(undefined1 (*) [16])(puVar6 + -0x70) = auVar33;
    *(undefined1 **)(puVar6 + -0x60) = puVar6 + -0x20;
    *(undefined **)(puVar6 + -0x58) =
         &System_Collections_Generic_Dictionary_object__EventInstance___CopyTo;
    if (lVar13 == 0) goto code_r0x01ec8b28;
    uVar8 = (uint)uVar10;
    if (((int)uVar8 < 0) || (*(int *)(lVar13 + 0x18) < (int)uVar8)) goto code_r0x01ec8aa8;
    if (lVar17 == 0) goto code_r0x01ec8b24;
    uVar9 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_7 + 0x18) + 0xc0) + 0x90))(lVar17)
    ;
    if ((int)(*(int *)(lVar13 + 0x18) - uVar8) < (int)uVar9) {
      func_0x00f78a24(0x3d1fce8);
      uVar20 = func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d6bc10);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar20,uVar18,0);
      goto code_r0x01ec8b8c;
    }
    uVar1 = *(uint *)(lVar17 + 0x20);
    if ((int)uVar1 < 1) {
      return uVar9;
    }
    lVar21 = *(long *)(lVar17 + 0x18);
    if (lVar21 == 0) goto code_r0x01ec8b24;
    uVar14 = 0;
    puVar2 = (undefined8 *)(lVar21 + 0x30);
    goto code_r0x01ec8a24;
  }
  if (*(uint *)(lVar13 + 0x18) <= uVar9) goto code_r0x01ec8990;
  if (-1 < *(int *)(lVar13 + lVar22 + 0x20)) {
    if (plVar16 == (long *)0x0) goto code_r0x01ec898c;
    param_7 = *(long *)(*plVar16 + 0x1c0);
    uVar10 = auVar33._8_8_;
    uVar14 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(lVar13 + lVar22 + 0x30));
    if ((uVar14 & 1) != 0) {
      return 1;
    }
    iVar7 = *(int *)(lVar21 + 0x20);
  }
  uVar9 = uVar9 + 1;
  lVar22 = lVar22 + 0x18;
  if ((long)iVar7 <= (long)uVar9) {
    return 0;
  }
  goto code_r0x01ec8914;
code_r0x01ec8a24:
  uVar8 = (uint)uVar10;
  if (*(uint *)(lVar21 + 0x18) <= uVar14) {
code_r0x01ec8a9c:
    uVar20 = func_0x00f78b24();
    func_0x00f78ac0(uVar20,0);
code_r0x01ec8aa8:
    *(uint *)(puVar6 + -0xb0) = uVar8;
    uVar20 = func_0x00f78a24(0x3d22910);
    uVar20 = func_0x00f78ae0(uVar20,puVar6 + -0xb0);
    func_0x00f78a24(0x3d1fcf8);
    lVar13 = func_0x00f78aec();
    uVar18 = func_0x00f78a24(0x3d79a60);
    uVar19 = func_0x00f78a24(0x3d6de28);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(lVar13,uVar18,uVar20,uVar19,0);
    uVar20 = func_0x00f78a24(0x3d2f4b0);
    func_0x00f78ac0(lVar13,uVar20);
code_r0x01ec8b24:
    func_0x00f78af4();
    lVar21 = lVar13;
code_r0x01ec8b28:
    func_0x00f78a24(0x3d1fcf0);
    uVar20 = func_0x00f78aec();
    uVar18 = func_0x00f78a24(0x3d77d18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar20,uVar18,0);
    lVar13 = lVar21;
code_r0x01ec8b8c:
    uVar18 = func_0x00f78a24(0x3d2f4b0);
    auVar33 = func_0x00f78ac0(uVar20,uVar18);
    *(long *)(puVar6 + -0xd0) = lVar13;
    *(undefined8 *)(puVar6 + -200) = uVar20;
    *(undefined1 **)(puVar6 + -0xc0) = puVar6 + -0x60;
    *(undefined **)(puVar6 + -0xb8) =
         &System_Collections_Generic_Dictionary_object__EventInstance___GetEnumerator;
    *(undefined8 *)(puVar6 + -0xe0) = 0;
    *(undefined8 *)(puVar6 + -0xf8) = 0;
    *(undefined8 *)(puVar6 + -0x100) = 0;
    *(undefined8 *)(puVar6 + -0xe8) = 0;
    *(undefined8 *)(puVar6 + -0xf0) = 0;
    uVar9 = /*System.Collections.Generic.Dictionary.Enumerator<object, EventInstance>$$.ctor*/ func_0x01fd20e8(puVar6 + -0x100,auVar33._0_8_,2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(auVar33._8_8_ + 0x18) + 0xc0) + 0xb0));
    uVar20 = *(undefined8 *)(puVar6 + -0x100);
    uVar19 = *(undefined8 *)(puVar6 + -0xe8);
    uVar18 = *(undefined8 *)(puVar6 + -0xf0);
    extraout_x8[1] = *(undefined8 *)(puVar6 + -0xf8);
    *extraout_x8 = uVar20;
    extraout_x8[3] = uVar19;
    extraout_x8[2] = uVar18;
    extraout_x8[4] = *(undefined8 *)(puVar6 + -0xe0);
    return uVar9;
  }
  if (-1 < *(int *)(puVar2 + -2)) {
    uVar20 = puVar2[-1];
    uVar18 = *puVar2;
    *(undefined8 *)(puVar6 + -0xb0) = 0;
    *(undefined8 *)(puVar6 + -0xa8) = 0;
    uVar9 = /*System.Collections.Generic.KeyValuePair<object, EventInstance>$$.ctor*/ func_0x023181f4(puVar6 + -0xb0,uVar20,uVar18,
                            *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x18) + 0xc0) + 0xa0));
    if (*(uint *)(lVar13 + 0x18) <= uVar8) goto code_r0x01ec8a9c;
    lVar22 = lVar13 + (long)(int)uVar8 * 0x10;
    uVar10 = (ulong)(uVar8 + 1);
    uVar20 = *(undefined8 *)(puVar6 + -0xb0);
    *(undefined8 *)(lVar22 + 0x28) = *(undefined8 *)(puVar6 + -0xa8);
    *(undefined8 *)(lVar22 + 0x20) = uVar20;
  }
  uVar14 = uVar14 + 1;
  puVar2 = puVar2 + 3;
  if (uVar1 == uVar14) {
    return uVar9;
  }
  goto code_r0x01ec8a24;
}



// ============================================================
// RVA: 0x15bee58 | Atlas.Audio.KartAudio.HandleDriftHopBoost
// ============================================================

/* WARNING: Possible PIC construction at 0x015bf7c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bf958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bf998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bfab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015c0238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015c0448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bff74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015c044c) */
/* WARNING: Removing unreachable block (ram,0x015c0484) */
/* WARNING: Removing unreachable block (ram,0x015c0488) */
/* WARNING: Removing unreachable block (ram,0x015c0490) */
/* WARNING: Removing unreachable block (ram,0x015c0498) */
/* WARNING: Removing unreachable block (ram,0x015c0460) */
/* WARNING: Removing unreachable block (ram,0x015c0464) */
/* WARNING: Removing unreachable block (ram,0x015c046c) */
/* WARNING: Removing unreachable block (ram,0x015c0474) */
/* WARNING: Removing unreachable block (ram,0x015c04a4) */
/* WARNING: Removing unreachable block (ram,0x015c04b8) */
/* WARNING: Removing unreachable block (ram,0x015c0480) */
/* WARNING: Removing unreachable block (ram,0x015c023c) */
/* WARNING: Removing unreachable block (ram,0x015c0240) */
/* WARNING: Removing unreachable block (ram,0x015c0248) */
/* WARNING: Removing unreachable block (ram,0x015c0264) */
/* WARNING: Removing unreachable block (ram,0x015c027c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f0c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f34) */
/* WARNING: Removing unreachable block (ram,0x01ec9f40) */
/* WARNING: Removing unreachable block (ram,0x01ec9f48) */
/* WARNING: Removing unreachable block (ram,0x01ec9f64) */
/* WARNING: Removing unreachable block (ram,0x01ec9f6c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f78) */
/* WARNING: Removing unreachable block (ram,0x01ec9f80) */
/* WARNING: Removing unreachable block (ram,0x01ec9fac) */
/* WARNING: Removing unreachable block (ram,0x01ec9f8c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f98) */
/* WARNING: Removing unreachable block (ram,0x01ec9fbc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fd4) */
/* WARNING: Removing unreachable block (ram,0x01ec9fdc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fec) */
/* WARNING: Removing unreachable block (ram,0x01ec9ff8) */
/* WARNING: Removing unreachable block (ram,0x01eca008) */
/* WARNING: Removing unreachable block (ram,0x01eca00c) */
/* WARNING: Removing unreachable block (ram,0x01eca01c) */
/* WARNING: Removing unreachable block (ram,0x01eca030) */
/* WARNING: Removing unreachable block (ram,0x01eca038) */
/* WARNING: Removing unreachable block (ram,0x01eca058) */
/* WARNING: Removing unreachable block (ram,0x01eca060) */
/* WARNING: Removing unreachable block (ram,0x01eca06c) */
/* WARNING: Removing unreachable block (ram,0x01eca074) */
/* WARNING: Removing unreachable block (ram,0x01eca0a0) */
/* WARNING: Removing unreachable block (ram,0x01eca080) */
/* WARNING: Removing unreachable block (ram,0x01eca08c) */
/* WARNING: Removing unreachable block (ram,0x01eca0ac) */
/* WARNING: Removing unreachable block (ram,0x01eca10c) */
/* WARNING: Removing unreachable block (ram,0x01eca148) */
/* WARNING: Removing unreachable block (ram,0x01eca150) */
/* WARNING: Removing unreachable block (ram,0x01eca160) */
/* WARNING: Removing unreachable block (ram,0x01eca168) */
/* WARNING: Removing unreachable block (ram,0x01eca174) */
/* WARNING: Removing unreachable block (ram,0x01eca110) */
/* WARNING: Removing unreachable block (ram,0x01eca118) */
/* WARNING: Removing unreachable block (ram,0x01eca124) */
/* WARNING: Removing unreachable block (ram,0x01eca12c) */
/* WARNING: Removing unreachable block (ram,0x01eca188) */
/* WARNING: Removing unreachable block (ram,0x01eca190) */
/* WARNING: Removing unreachable block (ram,0x01eca1b0) */
/* WARNING: Removing unreachable block (ram,0x01eca1bc) */
/* WARNING: Removing unreachable block (ram,0x01eca0c4) */
/* WARNING: Removing unreachable block (ram,0x01eca1e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0cc) */
/* WARNING: Removing unreachable block (ram,0x01eca1ec) */
/* WARNING: Removing unreachable block (ram,0x01eca1f8) */
/* WARNING: Removing unreachable block (ram,0x01eca250) */
/* WARNING: Removing unreachable block (ram,0x01eca298) */
/* WARNING: Removing unreachable block (ram,0x01eca270) */
/* WARNING: Removing unreachable block (ram,0x01eca2b0) */
/* WARNING: Removing unreachable block (ram,0x01eca278) */
/* WARNING: Removing unreachable block (ram,0x01eca2b4) */
/* WARNING: Removing unreachable block (ram,0x01eca2e8) */
/* WARNING: Removing unreachable block (ram,0x01eca2cc) */
/* WARNING: Removing unreachable block (ram,0x01eca284) */
/* WARNING: Removing unreachable block (ram,0x01eca29c) */
/* WARNING: Removing unreachable block (ram,0x01eca0d8) */
/* WARNING: Removing unreachable block (ram,0x01eca0e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0ec) */
/* WARNING: Removing unreachable block (ram,0x015bf99c) */
/* WARNING: Removing unreachable block (ram,0x015bf95c) */
/* WARNING: Removing unreachable block (ram,0x015bff78) */
/* WARNING: Removing unreachable block (ram,0x015bff7c) */
/* WARNING: Removing unreachable block (ram,0x015bff94) */
/* WARNING: Removing unreachable block (ram,0x015bff9c) */
/* WARNING: Removing unreachable block (ram,0x015bffa4) */
/* WARNING: Removing unreachable block (ram,0x015bffcc) */
/* WARNING: Removing unreachable block (ram,0x015bfff0) */
/* WARNING: Removing unreachable block (ram,0x01ec8614) */
/* WARNING: Removing unreachable block (ram,0x01ec863c) */
/* WARNING: Removing unreachable block (ram,0x01ec8664) */
/* WARNING: Removing unreachable block (ram,0x01ec867c) */
/* WARNING: Removing unreachable block (ram,0x01ec86a0) */
/* WARNING: Removing unreachable block (ram,0x01ec86c0) */
/* WARNING: Removing unreachable block (ram,0x01ec86cc) */
/* WARNING: Removing unreachable block (ram,0x01ec870c) */
/* WARNING: Removing unreachable block (ram,0x01ec8710) */
/* WARNING: Removing unreachable block (ram,0x01ec8734) */
/* WARNING: Removing unreachable block (ram,0x01ec87d0) */
/* WARNING: Removing unreachable block (ram,0x01ec875c) */
/* WARNING: Removing unreachable block (ram,0x01ec877c) */
/* WARNING: Removing unreachable block (ram,0x01ec8788) */
/* WARNING: Removing unreachable block (ram,0x01ec87e8) */
/* WARNING: Removing unreachable block (ram,0x01ec87ec) */
/* WARNING: Removing unreachable block (ram,0x01ec8810) */
/* WARNING: Removing unreachable block (ram,0x01ec881c) */
/* WARNING: Removing unreachable block (ram,0x01ec8828) */
/* WARNING: Removing unreachable block (ram,0x01ec8838) */
/* WARNING: Removing unreachable block (ram,0x01ec8840) */
/* WARNING: Removing unreachable block (ram,0x01ec8888) */
/* WARNING: Removing unreachable block (ram,0x01ec8894) */
/* WARNING: Removing unreachable block (ram,0x01ec8844) */
/* WARNING: Removing unreachable block (ram,0x01ec8854) */
/* WARNING: Removing unreachable block (ram,0x01ec887c) */
/* WARNING: Removing unreachable block (ram,0x01ec878c) */
/* WARNING: Removing unreachable block (ram,0x01ec87ac) */
/* WARNING: Removing unreachable block (ram,0x01ec87d4) */
/* WARNING: Removing unreachable block (ram,0x01ec86d0) */
/* WARNING: Removing unreachable block (ram,0x01ec86f8) */
/* WARNING: Removing unreachable block (ram,0x01ec86f0) */
/* WARNING: Removing unreachable block (ram,0x01ec86fc) */
/* WARNING: Removing unreachable block (ram,0x01ec864c) */
/* WARNING: Removing unreachable block (ram,0x01ec8620) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Audio_KartAudio__HandleDriftHopBoost
                (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,ulong param_4,
                long param_5,undefined8 param_6,long param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong extraout_x1;
  undefined8 uVar19;
  undefined8 *extraout_x8;
  long lVar20;
  long lVar21;
  undefined8 unaff_x21;
  ulong uVar22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 ***pppuVar23;
  undefined1 *puVar24;
  undefined *puVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  ulong unaff_d9;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  fVar26 = *(float *)(param_5 + 0x5c);
  uVar13 = (ulong)(uint)fVar26;
  uVar9 = param_4;
  if ((bRam0000000003eb52c3 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    uVar9 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52c3 = 1;
  }
  if ((fVar26 <= *(float *)(param_4 + 0x40)) || (*(char *)(param_4 + 0x38) != '\0')) {
code_r0x015bf7e4:
    *(float *)(param_4 + 0x40) = fVar26;
    return uVar9;
  }
  lVar20 = *(long *)(param_4 + 0x150);
  uVar9 = 0x3d1ff28;
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar21 = 0;
  if (lVar20 != 0) {
    unaff_x23 = 0x3d2fb00;
    lVar20 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar20,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x220),
                             uRam0000000003d2fb00);
    if (lVar20 != 0) {
      unaff_x21 = *(undefined8 *)(param_4 + 0xb8);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_7 = 0;
      /*Core.Audio.AudioEvent$$Play*/ func_0x01638d80((float)*(int *)(param_4 + 0x158),lVar20,unaff_x21,
                      *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1a0));
    }
    lVar21 = *(long *)(param_4 + 0x150);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar21 != 0) {
      uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar21,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2d8),
                               uRam0000000003d2fb00);
      if (uVar10 != 0) {
        lVar20 = *(long *)(param_4 + 0xb8);
        puVar4 = &stack0xffffffffffffffb0;
        puVar24 = &stack0xfffffffffffffff0;
        puVar25 = &UNK_015bf7cc;
        goto code_r0x01638d28;
      }
      if (*(long *)(param_4 + 0x90) != 0) {
        uVar9 = Atlas_Audio_AtlasAudioManager__SpeakBoostPad
                          (*(undefined4 *)(param_4 + 0x60),*(long *)(param_4 + 0x90),param_4,0);
        goto code_r0x015bf7e4;
      }
    }
  }
  auVar30 = func_0x00f78af4();
  uVar10 = auVar30._8_8_;
  uVar22 = auVar30._0_8_;
  uStack_80 = 0x3d1ff28;
  puStack_58 = &Atlas_Audio_KartAudio__PlaySurface;
  uVar11 = uVar22;
  uStack_78 = unaff_x21;
  lStack_70 = lVar21;
  uStack_68 = param_4;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb52d3 & 1) == 0) {
    uVar11 = func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb52d3 = 1;
  }
  if (*(char *)(uVar22 + 0x38) == '\0') {
    lVar20 = *(long *)(uVar22 + 0x90);
    if (lVar20 == 0) {
      func_0x00f78af4();
      puVar5 = &uStack_b0;
      uStack_b0 = 0x3d1ff28;
      puStack_88 = &Atlas_Audio_KartAudio__ClearCollisionEventParameters;
      pppuVar23 = &ppuStack_90;
      lVar21 = 0x3eb5000;
      lStack_a8 = lVar20;
      ppuStack_90 = &puStack_60;
      if ((bRam0000000003eb52ca & 1) == 0) {
        uStack_a0 = uVar10;
        uStack_98 = uVar22;
        func_0x00f78a20(0x3d1ff28);
        auVar30._8_8_ = uStack_a0;
        auVar30._0_8_ = uStack_98;
        bRam0000000003eb52ca = 1;
      }
      uStack_a0 = auVar30._8_8_;
      uStack_98 = auVar30._0_8_;
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
        auVar30._8_8_ = uStack_a0;
        auVar30._0_8_ = uStack_98;
      }
      uStack_a0 = auVar30._8_8_;
      uStack_98 = auVar30._0_8_;
      if (extraout_x1 != 0) {
        uVar19 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1a8);
        puVar25 = &UNK_015bf95c;
        uVar10 = extraout_x1;
        uVar11 = extraout_x1;
        uVar22 = 0x3d1ff28;
code_r0x01638fc8:
        uStack_a0 = auVar30._8_8_;
        uStack_98 = auVar30._0_8_;
        *(ulong *)((long)puVar5 + -0x40) = unaff_d9;
        *(ulong *)((long)puVar5 + -0x38) = uVar13;
        *(ulong *)((long)puVar5 + -0x30) = uVar9;
        *(long *)((long)puVar5 + -0x28) = lVar21;
        *(ulong *)((long)puVar5 + -0x20) = uVar22;
        *(ulong *)((long)puVar5 + -0x18) = uVar11;
        *(undefined1 ****)((long)puVar5 + -0x10) = pppuVar23;
        *(undefined **)((long)puVar5 + -8) = puVar25;
        iVar7 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(uVar10 + 0x28,0,0,0);
        if (iVar7 != 0) {
          /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(0,uVar10 + 0x28,uVar19,0,0);
        }
        return uVar10;
      }
      puVar25 = &Atlas_Audio_KartAudio__StopScraping;
      uVar11 = func_0x00f78af4();
      auVar30 = ZEXT816(0x3d1ff28) << 0x40;
      puVar2 = &uStack_b0;
      do {
        puVar5 = (undefined8 *)((long)puVar2 + -0x30);
        *(ulong *)((long)puVar2 + -0x30) = uVar9;
        *(long *)((long)puVar2 + -0x28) = lVar21;
        *(long *)((long)puVar2 + -0x20) = auVar30._8_8_;
        *(long *)((long)puVar2 + -0x18) = auVar30._0_8_;
        *(undefined1 ****)((long)puVar2 + -0x10) = pppuVar23;
        *(undefined **)((long)puVar2 + -8) = puVar25;
        pppuVar23 = (undefined1 ***)((long)puVar2 + -0x10);
        lVar21 = 0x3d1ff28;
        if ((bRam0000000003eb52cc & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52cc = 1;
        }
        lVar20 = *(long *)(uVar11 + 0x150);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar20 != 0) {
          uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar20,*(undefined8 *)
                                           (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x238),
                                   uRam0000000003d2fb00);
          if (uVar10 == 0) {
            *(undefined4 *)(uVar11 + 0x70) = 0xbf800000;
            return 0;
          }
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          auVar30._8_8_ = uStack_a0;
          auVar30._0_8_ = uStack_98;
          uVar19 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1c8);
          puVar25 = &UNK_015bfab4;
          uVar22 = uVar10;
          goto code_r0x01638fc8;
        }
        auVar30 = func_0x00f78af4();
        lVar20 = auVar30._8_8_;
        uVar22 = auVar30._0_8_;
        *(ulong *)((long)puVar2 + -0x90) = unaff_d9;
        *(ulong *)((long)puVar2 + -0x88) = uVar13;
        *(undefined8 *)((long)puVar2 + -0x80) = unaff_x26;
        *(undefined8 *)((long)puVar2 + -0x78) = unaff_x25;
        *(undefined8 *)((long)puVar2 + -0x70) = unaff_x24;
        *(ulong *)((long)puVar2 + -0x68) = unaff_x23;
        *(ulong *)((long)puVar2 + -0x60) = uVar9;
        *(undefined8 *)((long)puVar2 + -0x58) = 0x3d1ff28;
        *(undefined8 *)((long)puVar2 + -0x50) = 0;
        *(ulong *)((long)puVar2 + -0x48) = uVar11;
        *(undefined1 ****)((long)puVar2 + -0x40) = pppuVar23;
        *(undefined **)((long)puVar2 + -0x38) = &Atlas_Audio_KartAudio__OnCollisionEnter;
        lVar21 = 0x3eb5000;
        uVar10 = uVar22;
        if ((bRam0000000003eb52ce & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d578a8);
          uVar10 = func_0x00f78a20(0x3d23990);
          bRam0000000003eb52ce = 1;
        }
        fVar26 = _UNK_033f83fc;
        if (*(char *)(uVar22 + 0x50) == '\0') {
          return uVar10;
        }
        if (*(char *)(uVar22 + 0x38) != '\0') {
          return uVar10;
        }
        if (*(long *)(uVar22 + 0x90) != 0) {
          if (*(char *)(*(long *)(uVar22 + 0x90) + 0xcd) == '\0') {
            return uVar10;
          }
          if (*(float *)(uVar22 + 0x68) <= _UNK_033f83fc) {
            return uVar10;
          }
          if (*(int *)(lVar20 + 0x20) == 5) {
            return uVar10;
          }
          *(undefined4 *)(uVar22 + 0x68) = 0;
          if ((*(long *)(lVar20 + 8) != 0) &&
             (lVar12 = /*UnityEngine.Collision$$get_gameObject*/ func_0x0329ee78(*(long *)(lVar20 + 8),0), lVar12 != 0)) {
            lVar21 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar12,uRam0000000003d578a8);
            if (*(long *)(lVar20 + 8) != 0) {
              uVar27 = /*UnityEngine.Collision$$get_relativeVelocity*/ func_0x0329ede4(*(long *)(lVar20 + 8),0);
              *(undefined4 *)((long)puVar2 + -0xa0) = uVar27;
              *(float *)((long)puVar2 + -0x9c) = fVar26;
              *(undefined4 *)((long)puVar2 + -0x98) = param_3;
              uVar27 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc((undefined1 *)((long)puVar2 + -0xa0),0);
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              fVar26 = (float)/*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar27,*(undefined4 *)
                                                      (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8),0
                                             );
              uVar13 = (ulong)(uint)fVar26;
              fVar29 = *(float *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8);
              unaff_d9 = (ulong)(uint)fVar29;
              uVar9 = (ulong)((*(uint *)(lVar20 + 0x20) & 0xfffffffe) == 2);
              unaff_x25 = 0x3d23990;
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar21,0);
              if ((int)uVar10 == 0) {
                unaff_x23 = 1;
              }
              else {
                if (lVar21 == 0) goto code_r0x015bfd5c;
                unaff_x23 = (ulong)*(uint *)(lVar21 + 0x1c);
              }
              if (*(int *)(lVar20 + 0x20) == 0) {
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar21,0);
                if ((int)uVar10 != 0) {
                  if (lVar21 == 0) goto code_r0x015bfd5c;
                  fVar28 = 3.0;
                  if ((*(uint *)(lVar21 + 0x1c) & 0xfffffffe) == 8) goto code_r0x015bfce0;
                }
              }
              if (3 < *(int *)(lVar20 + 0x20) - 1U) {
                return uVar10;
              }
              fVar28 = (fVar26 / fVar29) * 3.0;
code_r0x015bfce0:
              uVar27 = 0;
              if (*(char *)(lVar20 + 0x1c) != '\0') {
                uVar27 = 0xbf800000;
              }
              *(undefined4 *)(uVar22 + 0x70) = uVar27;
              /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(fVar28,0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar21,0,0);
              uVar9 = /*Atlas.Audio.KartAudio$$PlayCollision*/ func_0x015bf31c(uVar22,unaff_x23);
              return uVar9;
            }
          }
        }
code_r0x015bfd5c:
        uVar11 = func_0x00f78af4();
        *(undefined1 **)((long)puVar2 + -0xc0) = (undefined1 *)((long)puVar2 + -0x40);
        *(undefined **)((long)puVar2 + -0xb8) = &Atlas_Audio_KartAudio__OnCollisionExit;
        if ((*(char *)(uVar11 + 0x50) == '\0') || (*(char *)(uVar11 + 0x38) != '\0')) {
          return uVar11;
        }
        if (*(long *)(uVar11 + 0x90) == 0) {
          auVar30 = func_0x00f78af4();
          uVar13 = auVar30._8_8_;
          uVar11 = auVar30._0_8_;
          puVar6 = (undefined1 *)((long)puVar2 + -0xf0);
          puVar3 = (undefined1 *)((long)puVar2 + -0xf0);
          *(ulong *)((long)puVar2 + -0xf0) = uVar9;
          *(long *)((long)puVar2 + -0xe8) = lVar21;
          *(long *)((long)puVar2 + -0xe0) = lVar20;
          *(ulong *)((long)puVar2 + -0xd8) = uVar22;
          *(undefined1 **)((long)puVar2 + -0xd0) = (undefined1 *)((long)puVar2 + -0xc0);
          *(undefined **)((long)puVar2 + -200) = &Atlas_Audio_KartAudio__OnTriggerEnter;
          puVar24 = (undefined1 *)((long)puVar2 + -0xd0);
          uVar19 = 0x3eb5000;
          uVar10 = uVar11;
          if ((bRam0000000003eb52cf & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            func_0x00f78a20(0x3d2e048);
            func_0x00f78a20(0x3d2e050);
            func_0x00f78a20(0x3d577c8);
            func_0x00f78a20(0x3d578c0);
            uVar10 = func_0x00f78a20(0x3d23990);
            bRam0000000003eb52cf = 1;
          }
          if (*(char *)(uVar11 + 0x50) == '\0') {
            return uVar10;
          }
          if (*(char *)(uVar11 + 0x38) != '\0') {
            return uVar10;
          }
          if (*(float *)(uVar11 + 100) <= _UNK_033f8140) {
            return uVar10;
          }
          *(undefined4 *)(uVar11 + 100) = 0;
          if ((uVar13 != 0) && (lVar20 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar13,0), lVar20 != 0)) {
            uVar19 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar20,uRam0000000003d578c0);
            lVar20 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar13,0);
            if (lVar20 == 0) goto code_r0x015c0060;
            uVar13 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar20,uRam0000000003d577c8);
            uVar10 = 0x3d23990;
            uVar22 = 0x3d23990;
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar19,0);
            if (iVar7 != 0) {
              puVar24 = *(undefined1 **)((long)puVar2 + -0xd0);
              puVar25 = *(undefined **)((long)puVar2 + -200);
              uVar13 = *(ulong *)((long)puVar2 + -0xe0);
              puVar3 = (undefined1 *)((long)puVar2 + -0xc0);
              uVar9 = *(ulong *)((long)puVar2 + -0xf0);
              uVar19 = *(undefined8 *)((long)puVar2 + -0xe8);
              uVar22 = uVar11;
              uVar11 = *(ulong *)((long)puVar2 + -0xd8);
              goto code_r0x015c0064;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar14 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar13,0);
            if ((int)uVar14 == 0) {
              return uVar14;
            }
            uVar9 = uVar10;
            if (uVar13 == 0) goto code_r0x015c0060;
            iVar7 = *(int *)(uVar13 + 0x60);
            if (iVar7 == 0) {
              if (*(char *)(uVar13 + 0x68) != '\0') {
                return uVar14;
              }
              uVar9 = uVar22;
              if (*(long *)(uVar11 + 0x90) == 0) goto code_r0x015c0060;
              if (*(char *)(*(long *)(uVar11 + 0x90) + 0xce) == '\0') {
                return uVar14;
              }
              lVar20 = *(long *)(uVar11 + 0x148);
              if (lVar20 == 0) goto code_r0x015c0060;
              puVar25 = &UNK_015bff78;
code_r0x01ec8898:
              *(undefined1 **)(puVar6 + -0x10) = puVar24;
              *(undefined **)(puVar6 + -8) = puVar25;
              if (lVar20 != 0) {
                uVar8 = (*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(uRam0000000003d2e050 + 0x18) + 0xc0) + 0x40
                                    ))();
                return (ulong)(~uVar8 >> 0x1f);
              }
              uVar9 = uRam0000000003d2e050;
              auVar30 = func_0x00f78af4(0,uVar13);
              lVar20 = auVar30._0_8_;
              *(undefined8 *)(puVar6 + -0x50) = unaff_x24;
              *(ulong *)(puVar6 + -0x48) = unaff_x23;
              *(ulong *)(puVar6 + -0x40) = uVar10;
              *(undefined8 *)(puVar6 + -0x38) = uVar19;
              *(ulong *)(puVar6 + -0x30) = uVar13;
              *(ulong *)(puVar6 + -0x28) = uVar11;
              *(undefined1 **)(puVar6 + -0x20) = puVar6 + -0x10;
              *(undefined **)(puVar6 + -0x18) =
                   &System_Collections_Generic_Dictionary_object__EventInstance___ContainsValue;
              plVar15 = (long *)(*(code *)**(undefined8 **)
                                            (*(long *)(*(long *)(uVar9 + 0x18) + 0xc0) + 0x68))();
              iVar7 = *(int *)(lVar20 + 0x20);
              if (iVar7 < 1) {
                return 0;
              }
              lVar21 = 0;
              uVar13 = 0;
              goto code_r0x01ec8914;
            }
            if (iVar7 == 2) {
              if (*(char *)(uVar13 + 0x50) != '\0') {
                return uVar14;
              }
              uVar9 = uVar22;
              if (*(long *)(uVar11 + 0x90) == 0) goto code_r0x015c0060;
              if (*(char *)(*(long *)(uVar11 + 0x90) + 0xd2) == '\0') {
                return uVar14;
              }
              lVar20 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar13,0);
              *(undefined8 *)((long)puVar2 + -0xf0) = *(undefined8 *)((long)puVar2 + -0xf0);
              *(undefined8 *)((long)puVar2 + -0xe8) = *(undefined8 *)((long)puVar2 + -0xe8);
              *(undefined8 *)((long)puVar2 + -0xe0) = *(undefined8 *)((long)puVar2 + -0xe0);
              *(undefined8 *)((long)puVar2 + -0xd8) = *(undefined8 *)((long)puVar2 + -0xd8);
              *(undefined8 *)((long)puVar2 + -0xd0) = *(undefined8 *)((long)puVar2 + -0xd0);
              *(undefined8 *)((long)puVar2 + -200) = *(undefined8 *)((long)puVar2 + -200);
              if ((bRam0000000003eb4876 & 1) == 0) {
                func_0x00f78a20(0x3d1ff30,lVar20,0);
                func_0x00f78a20(0x3d65d08);
                bRam0000000003eb4876 = 1;
              }
              uVar10 = *(ulong *)(uVar13 + 0xb0);
              if (uVar10 == 0) {
                uVar9 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*(undefined8 *)(uVar13 + 0x48),/*STR('')*/ uRam0000000003d65d08,0);
                if ((uVar9 & 1) == 0) {
                  uVar10 = *(ulong *)(uVar13 + 0xb0);
                }
                else {
                  uVar19 = *(undefined8 *)(uVar13 + 0x48);
                  uVar10 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
                  uVar9 = /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar10,uVar19,0,0,0);
                  *(ulong *)(uVar13 + 0xb0) = uVar10;
                }
                if (uVar10 == 0) {
                  return uVar9;
                }
              }
              puVar24 = *(undefined1 **)((long)puVar2 + -0xd0);
              puVar25 = *(undefined **)((long)puVar2 + -200);
              lVar21 = *(long *)((long)puVar2 + -0xe0);
              param_4 = *(ulong *)((long)puVar2 + -0xd8);
              puVar4 = (undefined1 *)((long)puVar2 + -0xc0);
              goto code_r0x01638d28;
            }
            if (iVar7 != 1) {
              return uVar14;
            }
            if (*(long *)(uVar11 + 0x90) != 0) {
              if (*(char *)(*(long *)(uVar11 + 0x90) + 0xd1) != '\0') {
                fVar26 = *(float *)(uVar11 + 0x74) * 100.0;
                *(float *)(uVar13 + 0xc0) = fVar26 * _UNK_033f82c0 + _UNK_033f82c4;
                *(float *)(uVar13 + 0xc4) = fVar26;
                return uVar13;
              }
              return uVar14;
            }
          }
code_r0x015c0060:
          puVar25 = &Atlas_Audio_KartAudio__PickupPickedUp;
          uVar22 = func_0x00f78af4();
code_r0x015c0064:
          *(ulong *)(puVar3 + -0x30) = uVar9;
          *(undefined8 *)(puVar3 + -0x28) = uVar19;
          *(ulong *)(puVar3 + -0x20) = uVar13;
          *(ulong *)(puVar3 + -0x18) = uVar11;
          *(undefined1 **)(puVar3 + -0x10) = puVar24;
          *(undefined **)(puVar3 + -8) = puVar25;
          uVar13 = uVar22;
          if ((bRam0000000003eb52d1 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            uVar13 = func_0x00f78a20(0x3d2fb00);
            bRam0000000003eb52d1 = 1;
          }
          if (*(char *)(uVar22 + 0x38) != '\0') {
            return uVar13;
          }
          lVar20 = *(long *)(uVar22 + 0x150);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if ((lVar20 != 0) &&
             (uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar20,*(undefined8 *)
                                               (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x230),
                                       uRam0000000003d2fb00), uVar10 != 0)) {
            lVar20 = *(long *)(uVar22 + 0xb8);
            puVar24 = *(undefined1 **)(puVar3 + -0x10);
            puVar25 = *(undefined **)(puVar3 + -8);
            param_4 = *(ulong *)(puVar3 + -0x18);
            puVar4 = puVar3;
            lVar21 = *(long *)(puVar3 + -0x20);
            goto code_r0x01638d28;
          }
          auVar30 = func_0x00f78af4();
          uVar13 = auVar30._8_8_;
          uVar11 = auVar30._0_8_;
          puVar6 = puVar3 + -0x60;
          *(ulong *)(puVar3 + -0x60) = uVar9;
          *(undefined8 *)(puVar3 + -0x58) = 0x3d1ff28;
          *(long *)(puVar3 + -0x50) = lVar20;
          *(ulong *)(puVar3 + -0x48) = uVar22;
          *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x38) = &Atlas_Audio_KartAudio__OnTriggerExit;
          puVar24 = puVar3 + -0x40;
          uVar19 = 0x3eb5000;
          uVar10 = uVar11;
          if ((bRam0000000003eb52d0 & 1) == 0) {
            func_0x00f78a20(0x3d2e050);
            func_0x00f78a20(0x3d2e058);
            func_0x00f78a20(0x3d2e060);
            func_0x00f78a20(0x3d577c8);
            uVar10 = func_0x00f78a20(0x3d23990);
            bRam0000000003eb52d0 = 1;
          }
          if ((*(char *)(uVar11 + 0x50) == '\0') || (*(char *)(uVar11 + 0x38) != '\0')) {
            return uVar10;
          }
          if ((uVar13 != 0) && (lVar20 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar13,0), lVar20 != 0)) {
            uVar13 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar20,uRam0000000003d577c8);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar13,0);
            if ((int)uVar10 == 0) {
              return uVar10;
            }
            if (uVar13 != 0) {
              if (*(int *)(uVar13 + 0x60) != 0) {
                return uVar10;
              }
              if (*(long *)(uVar11 + 0x90) != 0) {
                if (*(char *)(*(long *)(uVar11 + 0x90) + 0xce) == '\0') {
                  return uVar10;
                }
                lVar20 = *(long *)(uVar11 + 0x148);
                if (lVar20 != 0) {
                  puVar25 = &UNK_015c023c;
                  uVar10 = uVar9;
                  goto code_r0x01ec8898;
                }
              }
            }
          }
          uVar22 = func_0x00f78af4();
          *(ulong *)(puVar3 + -0x90) = uVar9;
          *(undefined8 *)(puVar3 + -0x88) = 0x3eb5000;
          *(ulong *)(puVar3 + -0x80) = uVar13;
          *(ulong *)(puVar3 + -0x78) = uVar11;
          *(undefined1 **)(puVar3 + -0x70) = puVar24;
          *(undefined **)(puVar3 + -0x68) = &Atlas_Audio_KartAudio__PlayVFXAudio;
          uVar13 = uVar22;
          if ((bRam0000000003eb52d4 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            uVar13 = func_0x00f78a20(0x3d2fb00);
            bRam0000000003eb52d4 = 1;
          }
          if (*(char *)(uVar22 + 0x38) == '\0') {
            lVar20 = *(long *)(uVar22 + 0x150);
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (lVar20 == 0) {
              auVar30 = func_0x00f78af4();
              lVar20 = auVar30._8_8_;
              param_4 = auVar30._0_8_;
              puVar4 = puVar3 + -0xd0;
              *(undefined8 *)(puVar3 + -0xd0) = unaff_x24;
              *(ulong *)(puVar3 + -200) = unaff_x23;
              *(ulong *)(puVar3 + -0xc0) = uVar9;
              *(undefined8 *)(puVar3 + -0xb8) = 0x3d1ff28;
              *(undefined8 *)(puVar3 + -0xb0) = 0;
              *(ulong *)(puVar3 + -0xa8) = uVar22;
              *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x70;
              *(undefined **)(puVar3 + -0x98) = &Atlas_Audio_KartAudio__ExitPortal;
              puVar24 = puVar3 + -0xa0;
              if ((bRam0000000003eb52d6 & 1) == 0) {
                func_0x00f78a20(0x3d1ff28);
                func_0x00f78a20(0x3d2fb00);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb52d6 = 1;
              }
              lVar21 = *(long *)(param_4 + 0x150);
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (lVar21 != 0) {
                uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar21,*(undefined8 *)
                                                 (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x278),
                                         uRam0000000003d2fb00);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar20,0,0);
                if ((uVar9 & 1) == 0) {
                  lVar20 = *(long *)(param_4 + 0xb8);
                }
                if (uVar10 != 0) {
                  puVar25 = &UNK_015c044c;
                  lVar21 = lVar20;
                  goto code_r0x01638d28;
                }
              }
              uVar9 = func_0x00f78af4();
              return uVar9;
            }
            uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar20,*(undefined8 *)
                                             (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x250),
                                     uRam0000000003d2fb00);
            uVar13 = 0;
            if (uVar10 != 0) {
              lVar20 = *(long *)(uVar22 + 0xb8);
              puVar24 = *(undefined1 **)(puVar3 + -0x70);
              puVar25 = *(undefined **)(puVar3 + -0x68);
              param_4 = *(ulong *)(puVar3 + -0x78);
              puVar4 = puVar3 + -0x60;
              lVar21 = *(long *)(puVar3 + -0x80);
              goto code_r0x01638d28;
            }
          }
          return uVar13;
        }
        if (*(char *)(*(long *)(uVar11 + 0x90) + 0xcd) == '\0') {
          return uVar11;
        }
        pppuVar23 = *(undefined1 ****)((long)puVar2 + -0xc0);
        puVar25 = *(undefined **)((long)puVar2 + -0xb8);
        puVar2 = (undefined8 *)((long)puVar2 + -0xb0);
      } while( true );
    }
    if ((*(char *)(lVar20 + 0xc9) != '\0') &&
       (iVar7 = auVar30._8_4_, *(int *)(uVar22 + 0xb0) != iVar7)) {
      *(int *)(uVar22 + 0xb0) = iVar7;
      if (iVar7 == 0) {
        uVar10 = (ulong)(*(byte *)(uVar22 + 0x39) ^ 1);
      }
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Core.Audio.AudioManager$$SetGlobalParameter*/ func_0x01639e60((float)(int)uVar10,lVar20,
                      *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1e8),0,0);
      uVar10 = *(ulong *)(uVar22 + 0xe0);
      uVar11 = 0;
      if (uVar10 != 0) {
        lVar20 = *(long *)(uVar22 + 0xb8);
        puVar4 = &stack0xffffffffffffffb0;
        param_4 = uStack_68;
        lVar21 = lStack_70;
        puVar24 = puStack_60;
        puVar25 = puStack_58;
code_r0x01638d28:
        *(long *)(puVar4 + -0x20) = lVar21;
        *(ulong *)(puVar4 + -0x18) = param_4;
        *(undefined1 **)(puVar4 + -0x10) = puVar24;
        *(undefined **)(puVar4 + -8) = puVar25;
        /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar10,lVar20,0);
        return uVar10;
      }
    }
  }
  return uVar11;
code_r0x01ec8914:
  lVar12 = *(long *)(lVar20 + 0x18);
  if (lVar12 == 0) {
code_r0x01ec898c:
    func_0x00f78af4();
code_r0x01ec8990:
    uVar19 = func_0x00f78b24();
    auVar31 = func_0x00f78ac0(uVar19,0);
    lVar12 = auVar31._8_8_;
    lVar16 = auVar31._0_8_;
    *(undefined8 *)(puVar6 + -0xa0) = unaff_x26;
    *(undefined8 *)(puVar6 + -0x98) = unaff_x25;
    *(undefined8 *)(puVar6 + -0x90) = unaff_x24;
    *(ulong *)(puVar6 + -0x88) = uVar13;
    *(long *)(puVar6 + -0x80) = lVar21;
    *(long **)(puVar6 + -0x78) = plVar15;
    *(undefined1 (*) [16])(puVar6 + -0x70) = auVar30;
    *(undefined1 **)(puVar6 + -0x60) = puVar6 + -0x20;
    *(undefined **)(puVar6 + -0x58) =
         &System_Collections_Generic_Dictionary_object__EventInstance___CopyTo;
    if (lVar12 == 0) goto code_r0x01ec8b28;
    uVar8 = (uint)uVar9;
    if (((int)uVar8 < 0) || (*(int *)(lVar12 + 0x18) < (int)uVar8)) goto code_r0x01ec8aa8;
    if (lVar16 == 0) goto code_r0x01ec8b24;
    uVar13 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_7 + 0x18) + 0xc0) + 0x90))
                       (lVar16);
    if ((int)(*(int *)(lVar12 + 0x18) - uVar8) < (int)uVar13) {
      func_0x00f78a24(0x3d1fce8);
      uVar19 = func_0x00f78aec();
      uVar17 = func_0x00f78a24(0x3d6bc10);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar19,uVar17,0);
      goto code_r0x01ec8b8c;
    }
    uVar1 = *(uint *)(lVar16 + 0x20);
    if ((int)uVar1 < 1) {
      return uVar13;
    }
    lVar20 = *(long *)(lVar16 + 0x18);
    if (lVar20 == 0) goto code_r0x01ec8b24;
    uVar10 = 0;
    puVar2 = (undefined8 *)(lVar20 + 0x30);
    goto code_r0x01ec8a24;
  }
  if (*(uint *)(lVar12 + 0x18) <= uVar13) goto code_r0x01ec8990;
  if (-1 < *(int *)(lVar12 + lVar21 + 0x20)) {
    if (plVar15 == (long *)0x0) goto code_r0x01ec898c;
    param_7 = *(long *)(*plVar15 + 0x1c0);
    uVar9 = auVar30._8_8_;
    uVar10 = (**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(lVar12 + lVar21 + 0x30));
    if ((uVar10 & 1) != 0) {
      return 1;
    }
    iVar7 = *(int *)(lVar20 + 0x20);
  }
  uVar13 = uVar13 + 1;
  lVar21 = lVar21 + 0x18;
  if ((long)iVar7 <= (long)uVar13) {
    return 0;
  }
  goto code_r0x01ec8914;
code_r0x01ec8a24:
  uVar8 = (uint)uVar9;
  if (*(uint *)(lVar20 + 0x18) <= uVar10) {
code_r0x01ec8a9c:
    uVar19 = func_0x00f78b24();
    func_0x00f78ac0(uVar19,0);
code_r0x01ec8aa8:
    *(uint *)(puVar6 + -0xb0) = uVar8;
    uVar19 = func_0x00f78a24(0x3d22910);
    uVar19 = func_0x00f78ae0(uVar19,puVar6 + -0xb0);
    func_0x00f78a24(0x3d1fcf8);
    lVar12 = func_0x00f78aec();
    uVar17 = func_0x00f78a24(0x3d79a60);
    uVar18 = func_0x00f78a24(0x3d6de28);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(lVar12,uVar17,uVar19,uVar18,0);
    uVar19 = func_0x00f78a24(0x3d2f4b0);
    func_0x00f78ac0(lVar12,uVar19);
code_r0x01ec8b24:
    func_0x00f78af4();
    lVar20 = lVar12;
code_r0x01ec8b28:
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar17 = func_0x00f78a24(0x3d77d18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar17,0);
    lVar12 = lVar20;
code_r0x01ec8b8c:
    uVar17 = func_0x00f78a24(0x3d2f4b0);
    auVar30 = func_0x00f78ac0(uVar19,uVar17);
    *(long *)(puVar6 + -0xd0) = lVar12;
    *(undefined8 *)(puVar6 + -200) = uVar19;
    *(undefined1 **)(puVar6 + -0xc0) = puVar6 + -0x60;
    *(undefined **)(puVar6 + -0xb8) =
         &System_Collections_Generic_Dictionary_object__EventInstance___GetEnumerator;
    *(undefined8 *)(puVar6 + -0xe0) = 0;
    *(undefined8 *)(puVar6 + -0xf8) = 0;
    *(undefined8 *)(puVar6 + -0x100) = 0;
    *(undefined8 *)(puVar6 + -0xe8) = 0;
    *(undefined8 *)(puVar6 + -0xf0) = 0;
    uVar9 = /*System.Collections.Generic.Dictionary.Enumerator<object, EventInstance>$$.ctor*/ func_0x01fd20e8(puVar6 + -0x100,auVar30._0_8_,2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(auVar30._8_8_ + 0x18) + 0xc0) + 0xb0));
    uVar19 = *(undefined8 *)(puVar6 + -0x100);
    uVar18 = *(undefined8 *)(puVar6 + -0xe8);
    uVar17 = *(undefined8 *)(puVar6 + -0xf0);
    extraout_x8[1] = *(undefined8 *)(puVar6 + -0xf8);
    *extraout_x8 = uVar19;
    extraout_x8[3] = uVar18;
    extraout_x8[2] = uVar17;
    extraout_x8[4] = *(undefined8 *)(puVar6 + -0xe0);
    return uVar9;
  }
  if (-1 < *(int *)(puVar2 + -2)) {
    uVar19 = puVar2[-1];
    uVar17 = *puVar2;
    *(undefined8 *)(puVar6 + -0xb0) = 0;
    *(undefined8 *)(puVar6 + -0xa8) = 0;
    uVar13 = /*System.Collections.Generic.KeyValuePair<object, EventInstance>$$.ctor*/ func_0x023181f4(puVar6 + -0xb0,uVar19,uVar17,
                             *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x18) + 0xc0) + 0xa0));
    if (*(uint *)(lVar12 + 0x18) <= uVar8) goto code_r0x01ec8a9c;
    lVar21 = lVar12 + (long)(int)uVar8 * 0x10;
    uVar9 = (ulong)(uVar8 + 1);
    uVar19 = *(undefined8 *)(puVar6 + -0xb0);
    *(undefined8 *)(lVar21 + 0x28) = *(undefined8 *)(puVar6 + -0xa8);
    *(undefined8 *)(lVar21 + 0x20) = uVar19;
  }
  uVar10 = uVar10 + 1;
  puVar2 = puVar2 + 3;
  if (uVar1 == uVar10) {
    return uVar13;
  }
  goto code_r0x01ec8a24;
}



// ============================================================
// RVA: 0x15bee60 | Atlas.Audio.KartAudio.HandleAcceleration
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bf01c | Atlas.Audio.KartAudio.HandleAirborne
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bf088 | Atlas.Audio.KartAudio.UpdateParameters
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15bf31c | Atlas.Audio.KartAudio.PlayCollision
// ============================================================

/* WARNING: Possible PIC construction at 0x015bf408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bf5c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bf61c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fe4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145b920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145ba64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0145c1dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bf7c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bf958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bf998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bfab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015c0238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015c0448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bff74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bf4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bf584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bf4f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015bf588) */
/* WARNING: Removing unreachable block (ram,0x015bf594) */
/* WARNING: Removing unreachable block (ram,0x015bf59c) */
/* WARNING: Removing unreachable block (ram,0x015bf5a4) */
/* WARNING: Removing unreachable block (ram,0x015bf4b4) */
/* WARNING: Removing unreachable block (ram,0x015bf4b8) */
/* WARNING: Removing unreachable block (ram,0x015bf4c4) */
/* WARNING: Removing unreachable block (ram,0x015bff78) */
/* WARNING: Removing unreachable block (ram,0x015bff7c) */
/* WARNING: Removing unreachable block (ram,0x015bff94) */
/* WARNING: Removing unreachable block (ram,0x015bff9c) */
/* WARNING: Removing unreachable block (ram,0x015bffa4) */
/* WARNING: Removing unreachable block (ram,0x015bffcc) */
/* WARNING: Removing unreachable block (ram,0x015bfff0) */
/* WARNING: Removing unreachable block (ram,0x01ec8614) */
/* WARNING: Removing unreachable block (ram,0x01ec863c) */
/* WARNING: Removing unreachable block (ram,0x01ec8664) */
/* WARNING: Removing unreachable block (ram,0x01ec867c) */
/* WARNING: Removing unreachable block (ram,0x01ec86a0) */
/* WARNING: Removing unreachable block (ram,0x01ec86c0) */
/* WARNING: Removing unreachable block (ram,0x01ec86cc) */
/* WARNING: Removing unreachable block (ram,0x01ec870c) */
/* WARNING: Removing unreachable block (ram,0x01ec8710) */
/* WARNING: Removing unreachable block (ram,0x01ec8734) */
/* WARNING: Removing unreachable block (ram,0x01ec87d0) */
/* WARNING: Removing unreachable block (ram,0x01ec875c) */
/* WARNING: Removing unreachable block (ram,0x01ec877c) */
/* WARNING: Removing unreachable block (ram,0x01ec8788) */
/* WARNING: Removing unreachable block (ram,0x01ec87e8) */
/* WARNING: Removing unreachable block (ram,0x01ec87ec) */
/* WARNING: Removing unreachable block (ram,0x01ec8810) */
/* WARNING: Removing unreachable block (ram,0x01ec881c) */
/* WARNING: Removing unreachable block (ram,0x01ec8828) */
/* WARNING: Removing unreachable block (ram,0x01ec8838) */
/* WARNING: Removing unreachable block (ram,0x01ec8840) */
/* WARNING: Removing unreachable block (ram,0x01ec8888) */
/* WARNING: Removing unreachable block (ram,0x01ec8894) */
/* WARNING: Removing unreachable block (ram,0x01ec8844) */
/* WARNING: Removing unreachable block (ram,0x01ec8854) */
/* WARNING: Removing unreachable block (ram,0x01ec887c) */
/* WARNING: Removing unreachable block (ram,0x01ec878c) */
/* WARNING: Removing unreachable block (ram,0x01ec87ac) */
/* WARNING: Removing unreachable block (ram,0x01ec87d4) */
/* WARNING: Removing unreachable block (ram,0x01ec86d0) */
/* WARNING: Removing unreachable block (ram,0x01ec86f8) */
/* WARNING: Removing unreachable block (ram,0x01ec86f0) */
/* WARNING: Removing unreachable block (ram,0x01ec86fc) */
/* WARNING: Removing unreachable block (ram,0x01ec864c) */
/* WARNING: Removing unreachable block (ram,0x01ec8620) */
/* WARNING: Removing unreachable block (ram,0x015c044c) */
/* WARNING: Removing unreachable block (ram,0x015c0484) */
/* WARNING: Removing unreachable block (ram,0x015c0488) */
/* WARNING: Removing unreachable block (ram,0x015c0490) */
/* WARNING: Removing unreachable block (ram,0x015c0498) */
/* WARNING: Removing unreachable block (ram,0x015c0460) */
/* WARNING: Removing unreachable block (ram,0x015c0464) */
/* WARNING: Removing unreachable block (ram,0x015c046c) */
/* WARNING: Removing unreachable block (ram,0x015c0474) */
/* WARNING: Removing unreachable block (ram,0x015c04a4) */
/* WARNING: Removing unreachable block (ram,0x015c04b8) */
/* WARNING: Removing unreachable block (ram,0x015c0480) */
/* WARNING: Removing unreachable block (ram,0x015c023c) */
/* WARNING: Removing unreachable block (ram,0x015c0240) */
/* WARNING: Removing unreachable block (ram,0x015c0248) */
/* WARNING: Removing unreachable block (ram,0x015c0264) */
/* WARNING: Removing unreachable block (ram,0x015c027c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f0c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f34) */
/* WARNING: Removing unreachable block (ram,0x01ec9f40) */
/* WARNING: Removing unreachable block (ram,0x01ec9f48) */
/* WARNING: Removing unreachable block (ram,0x01ec9f64) */
/* WARNING: Removing unreachable block (ram,0x01ec9f6c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f78) */
/* WARNING: Removing unreachable block (ram,0x01ec9f80) */
/* WARNING: Removing unreachable block (ram,0x01ec9fac) */
/* WARNING: Removing unreachable block (ram,0x01ec9f8c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f98) */
/* WARNING: Removing unreachable block (ram,0x01ec9fbc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fd4) */
/* WARNING: Removing unreachable block (ram,0x01ec9fdc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fec) */
/* WARNING: Removing unreachable block (ram,0x01ec9ff8) */
/* WARNING: Removing unreachable block (ram,0x01eca008) */
/* WARNING: Removing unreachable block (ram,0x01eca00c) */
/* WARNING: Removing unreachable block (ram,0x01eca01c) */
/* WARNING: Removing unreachable block (ram,0x01eca030) */
/* WARNING: Removing unreachable block (ram,0x01eca038) */
/* WARNING: Removing unreachable block (ram,0x01eca058) */
/* WARNING: Removing unreachable block (ram,0x01eca060) */
/* WARNING: Removing unreachable block (ram,0x01eca06c) */
/* WARNING: Removing unreachable block (ram,0x01eca074) */
/* WARNING: Removing unreachable block (ram,0x01eca0a0) */
/* WARNING: Removing unreachable block (ram,0x01eca080) */
/* WARNING: Removing unreachable block (ram,0x01eca08c) */
/* WARNING: Removing unreachable block (ram,0x01eca0ac) */
/* WARNING: Removing unreachable block (ram,0x01eca10c) */
/* WARNING: Removing unreachable block (ram,0x01eca148) */
/* WARNING: Removing unreachable block (ram,0x01eca150) */
/* WARNING: Removing unreachable block (ram,0x01eca160) */
/* WARNING: Removing unreachable block (ram,0x01eca168) */
/* WARNING: Removing unreachable block (ram,0x01eca174) */
/* WARNING: Removing unreachable block (ram,0x01eca110) */
/* WARNING: Removing unreachable block (ram,0x01eca118) */
/* WARNING: Removing unreachable block (ram,0x01eca124) */
/* WARNING: Removing unreachable block (ram,0x01eca12c) */
/* WARNING: Removing unreachable block (ram,0x01eca188) */
/* WARNING: Removing unreachable block (ram,0x01eca190) */
/* WARNING: Removing unreachable block (ram,0x01eca1b0) */
/* WARNING: Removing unreachable block (ram,0x01eca1bc) */
/* WARNING: Removing unreachable block (ram,0x01eca0c4) */
/* WARNING: Removing unreachable block (ram,0x01eca1e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0cc) */
/* WARNING: Removing unreachable block (ram,0x01eca1ec) */
/* WARNING: Removing unreachable block (ram,0x01eca1f8) */
/* WARNING: Removing unreachable block (ram,0x01eca250) */
/* WARNING: Removing unreachable block (ram,0x01eca298) */
/* WARNING: Removing unreachable block (ram,0x01eca270) */
/* WARNING: Removing unreachable block (ram,0x01eca2b0) */
/* WARNING: Removing unreachable block (ram,0x01eca278) */
/* WARNING: Removing unreachable block (ram,0x01eca2b4) */
/* WARNING: Removing unreachable block (ram,0x01eca2e8) */
/* WARNING: Removing unreachable block (ram,0x01eca2cc) */
/* WARNING: Removing unreachable block (ram,0x01eca284) */
/* WARNING: Removing unreachable block (ram,0x01eca29c) */
/* WARNING: Removing unreachable block (ram,0x01eca0d8) */
/* WARNING: Removing unreachable block (ram,0x01eca0e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0ec) */
/* WARNING: Removing unreachable block (ram,0x015bf99c) */
/* WARNING: Removing unreachable block (ram,0x015bf95c) */
/* WARNING: Removing unreachable block (ram,0x0145bf54) */
/* WARNING: Removing unreachable block (ram,0x0145bf58) */
/* WARNING: Removing unreachable block (ram,0x0145bdac) */
/* WARNING: Removing unreachable block (ram,0x0145bdb0) */
/* WARNING: Removing unreachable block (ram,0x0145ba68) */
/* WARNING: Removing unreachable block (ram,0x0145ba6c) */
/* WARNING: Removing unreachable block (ram,0x0145b924) */
/* WARNING: Removing unreachable block (ram,0x0145b8cc) */
/* WARNING: Removing unreachable block (ram,0x0145b8d0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e0) */
/* WARNING: Removing unreachable block (ram,0x0145b8e8) */
/* WARNING: Removing unreachable block (ram,0x0145b8ec) */
/* WARNING: Removing unreachable block (ram,0x0145b8f0) */
/* WARNING: Removing unreachable block (ram,0x0145b660) */
/* WARNING: Removing unreachable block (ram,0x0145b664) */
/* WARNING: Removing unreachable block (ram,0x014fe4b4) */
/* WARNING: Removing unreachable block (ram,0x014fe4b8) */
/* WARNING: Removing unreachable block (ram,0x014fe4c0) */
/* WARNING: Removing unreachable block (ram,0x014fe4cc) */
/* WARNING: Removing unreachable block (ram,0x014fe568) */
/* WARNING: Removing unreachable block (ram,0x014fe570) */
/* WARNING: Removing unreachable block (ram,0x014fe578) */
/* WARNING: Removing unreachable block (ram,0x014fe544) */
/* WARNING: Removing unreachable block (ram,0x014fe50c) */
/* WARNING: Removing unreachable block (ram,0x014fe534) */
/* WARNING: Removing unreachable block (ram,0x014fe4e4) */
/* WARNING: Removing unreachable block (ram,0x014fe4ec) */
/* WARNING: Removing unreachable block (ram,0x014fe560) */
/* WARNING: Removing unreachable block (ram,0x0145b3ac) */
/* WARNING: Removing unreachable block (ram,0x0145b3b0) */
/* WARNING: Removing unreachable block (ram,0x015bf620) */
/* WARNING: Removing unreachable block (ram,0x015bf644) */
/* WARNING: Removing unreachable block (ram,0x015bf64c) */
/* WARNING: Removing unreachable block (ram,0x015bf654) */
/* WARNING: Removing unreachable block (ram,0x015bf65c) */
/* WARNING: Removing unreachable block (ram,0x0145b258) */
/* WARNING: Removing unreachable block (ram,0x0145b290) */
/* WARNING: Removing unreachable block (ram,0x0145b2d4) */
/* WARNING: Removing unreachable block (ram,0x0145b2dc) */
/* WARNING: Removing unreachable block (ram,0x0145b414) */
/* WARNING: Removing unreachable block (ram,0x0145b444) */
/* WARNING: Removing unreachable block (ram,0x0145b458) */
/* WARNING: Removing unreachable block (ram,0x0145b558) */
/* WARNING: Removing unreachable block (ram,0x0145b588) */
/* WARNING: Removing unreachable block (ram,0x0145b5cc) */
/* WARNING: Removing unreachable block (ram,0x0145b5d4) */
/* WARNING: Removing unreachable block (ram,0x0145b6bc) */
/* WARNING: Removing unreachable block (ram,0x0145b5dc) */
/* WARNING: Removing unreachable block (ram,0x0145b5f0) */
/* WARNING: Removing unreachable block (ram,0x0145b6d8) */
/* WARNING: Removing unreachable block (ram,0x0145b6ec) */
/* WARNING: Removing unreachable block (ram,0x0145b724) */
/* WARNING: Removing unreachable block (ram,0x0145b738) */
/* WARNING: Removing unreachable block (ram,0x0145b75c) */
/* WARNING: Removing unreachable block (ram,0x0145b764) */
/* WARNING: Removing unreachable block (ram,0x0145b774) */
/* WARNING: Removing unreachable block (ram,0x0145b784) */
/* WARNING: Removing unreachable block (ram,0x0145b790) */
/* WARNING: Removing unreachable block (ram,0x0145b798) */
/* WARNING: Removing unreachable block (ram,0x0145b79c) */
/* WARNING: Removing unreachable block (ram,0x0145b7b0) */
/* WARNING: Removing unreachable block (ram,0x0145b7b4) */
/* WARNING: Removing unreachable block (ram,0x0145b7c4) */
/* WARNING: Removing unreachable block (ram,0x0145b7cc) */
/* WARNING: Removing unreachable block (ram,0x0145b7d8) */
/* WARNING: Removing unreachable block (ram,0x0145b7e0) */
/* WARNING: Removing unreachable block (ram,0x0145b82c) */
/* WARNING: Removing unreachable block (ram,0x0145b834) */
/* WARNING: Removing unreachable block (ram,0x0145b83c) */
/* WARNING: Removing unreachable block (ram,0x0145b844) */
/* WARNING: Removing unreachable block (ram,0x0145b848) */
/* WARNING: Removing unreachable block (ram,0x0145b84c) */
/* WARNING: Removing unreachable block (ram,0x0145b850) */
/* WARNING: Removing unreachable block (ram,0x0145b85c) */
/* WARNING: Removing unreachable block (ram,0x0145b864) */
/* WARNING: Removing unreachable block (ram,0x0145b870) */
/* WARNING: Removing unreachable block (ram,0x0145b874) */
/* WARNING: Removing unreachable block (ram,0x0145b878) */
/* WARNING: Removing unreachable block (ram,0x0145b87c) */
/* WARNING: Removing unreachable block (ram,0x0145b888) */
/* WARNING: Removing unreachable block (ram,0x0145b890) */
/* WARNING: Removing unreachable block (ram,0x0145b894) */
/* WARNING: Removing unreachable block (ram,0x0145b92c) */
/* WARNING: Removing unreachable block (ram,0x0145b930) */
/* WARNING: Removing unreachable block (ram,0x0145b96c) */
/* WARNING: Removing unreachable block (ram,0x0145b9b0) */
/* WARNING: Removing unreachable block (ram,0x0145b9b4) */
/* WARNING: Removing unreachable block (ram,0x0145b9cc) */
/* WARNING: Removing unreachable block (ram,0x0145bac4) */
/* WARNING: Removing unreachable block (ram,0x0145b9d8) */
/* WARNING: Removing unreachable block (ram,0x0145b9ec) */
/* WARNING: Removing unreachable block (ram,0x0145b9f4) */
/* WARNING: Removing unreachable block (ram,0x0145b9fc) */
/* WARNING: Removing unreachable block (ram,0x0145bae0) */
/* WARNING: Removing unreachable block (ram,0x0145bb04) */
/* WARNING: Removing unreachable block (ram,0x0145bb18) */
/* WARNING: Removing unreachable block (ram,0x0145bb88) */
/* WARNING: Removing unreachable block (ram,0x0145bb20) */
/* WARNING: Removing unreachable block (ram,0x0145bb38) */
/* WARNING: Removing unreachable block (ram,0x0145bb98) */
/* WARNING: Removing unreachable block (ram,0x0145bba4) */
/* WARNING: Removing unreachable block (ram,0x0145bb40) */
/* WARNING: Removing unreachable block (ram,0x0145bbac) */
/* WARNING: Removing unreachable block (ram,0x0145bbd4) */
/* WARNING: Removing unreachable block (ram,0x0145bbe8) */
/* WARNING: Removing unreachable block (ram,0x0145bbec) */
/* WARNING: Removing unreachable block (ram,0x0145bc6c) */
/* WARNING: Removing unreachable block (ram,0x0145bbfc) */
/* WARNING: Removing unreachable block (ram,0x0145bc14) */
/* WARNING: Removing unreachable block (ram,0x0145bc1c) */
/* WARNING: Removing unreachable block (ram,0x0145bc24) */
/* WARNING: Removing unreachable block (ram,0x0145bc2c) */
/* WARNING: Removing unreachable block (ram,0x0145bc7c) */
/* WARNING: Removing unreachable block (ram,0x0145bcb0) */
/* WARNING: Removing unreachable block (ram,0x0145bcf4) */
/* WARNING: Removing unreachable block (ram,0x0145bcf8) */
/* WARNING: Removing unreachable block (ram,0x0145bd10) */
/* WARNING: Removing unreachable block (ram,0x0145be08) */
/* WARNING: Removing unreachable block (ram,0x0145bd1c) */
/* WARNING: Removing unreachable block (ram,0x0145bd30) */
/* WARNING: Removing unreachable block (ram,0x0145bd38) */
/* WARNING: Removing unreachable block (ram,0x0145bd40) */
/* WARNING: Removing unreachable block (ram,0x0145be24) */
/* WARNING: Removing unreachable block (ram,0x0145be58) */
/* WARNING: Removing unreachable block (ram,0x0145be9c) */
/* WARNING: Removing unreachable block (ram,0x0145bea0) */
/* WARNING: Removing unreachable block (ram,0x0145beb8) */
/* WARNING: Removing unreachable block (ram,0x0145bfb0) */
/* WARNING: Removing unreachable block (ram,0x0145bec4) */
/* WARNING: Removing unreachable block (ram,0x0145bed8) */
/* WARNING: Removing unreachable block (ram,0x0145bee0) */
/* WARNING: Removing unreachable block (ram,0x0145bee8) */
/* WARNING: Removing unreachable block (ram,0x0145bfcc) */
/* WARNING: Removing unreachable block (ram,0x0145bffc) */
/* WARNING: Removing unreachable block (ram,0x0145c010) */
/* WARNING: Removing unreachable block (ram,0x0145c014) */
/* WARNING: Removing unreachable block (ram,0x0145c024) */
/* WARNING: Removing unreachable block (ram,0x0145c034) */
/* WARNING: Removing unreachable block (ram,0x0145c03c) */
/* WARNING: Removing unreachable block (ram,0x0145c048) */
/* WARNING: Removing unreachable block (ram,0x0145c054) */
/* WARNING: Removing unreachable block (ram,0x0145c068) */
/* WARNING: Removing unreachable block (ram,0x0145c070) */
/* WARNING: Removing unreachable block (ram,0x0145c078) */
/* WARNING: Removing unreachable block (ram,0x0145c080) */
/* WARNING: Removing unreachable block (ram,0x0145c084) */
/* WARNING: Removing unreachable block (ram,0x0145c088) */
/* WARNING: Removing unreachable block (ram,0x0145c08c) */
/* WARNING: Removing unreachable block (ram,0x0145c090) */
/* WARNING: Removing unreachable block (ram,0x0145c094) */
/* WARNING: Removing unreachable block (ram,0x0145c09c) */
/* WARNING: Removing unreachable block (ram,0x0145c0a8) */
/* WARNING: Removing unreachable block (ram,0x0145c0b0) */
/* WARNING: Removing unreachable block (ram,0x0145c0bc) */
/* WARNING: Removing unreachable block (ram,0x0145c0c0) */
/* WARNING: Removing unreachable block (ram,0x0145c0c4) */
/* WARNING: Removing unreachable block (ram,0x0145c0c8) */
/* WARNING: Removing unreachable block (ram,0x0145c138) */
/* WARNING: Removing unreachable block (ram,0x0145c148) */
/* WARNING: Removing unreachable block (ram,0x0145c150) */
/* WARNING: Removing unreachable block (ram,0x0145c158) */
/* WARNING: Removing unreachable block (ram,0x0145c160) */
/* WARNING: Removing unreachable block (ram,0x0145c164) */
/* WARNING: Removing unreachable block (ram,0x0145c0e0) */
/* WARNING: Removing unreachable block (ram,0x0145c18c) */
/* WARNING: Removing unreachable block (ram,0x0145c19c) */
/* WARNING: Removing unreachable block (ram,0x0145c1a4) */
/* WARNING: Removing unreachable block (ram,0x0145c1a8) */
/* WARNING: Removing unreachable block (ram,0x0145c1ac) */
/* WARNING: Removing unreachable block (ram,0x0145c0e8) */
/* WARNING: Removing unreachable block (ram,0x0145c1e0) */
/* WARNING: Removing unreachable block (ram,0x0145c1ec) */
/* WARNING: Removing unreachable block (ram,0x0145c1f4) */
/* WARNING: Removing unreachable block (ram,0x0145c1fc) */
/* WARNING: Removing unreachable block (ram,0x0145c208) */
/* WARNING: Removing unreachable block (ram,0x0145c0ec) */
/* WARNING: Removing unreachable block (ram,0x0145c0fc) */
/* WARNING: Removing unreachable block (ram,0x0145c104) */
/* WARNING: Removing unreachable block (ram,0x0145c108) */
/* WARNING: Removing unreachable block (ram,0x0145c21c) */
/* WARNING: Removing unreachable block (ram,0x0145c24c) */
/* WARNING: Removing unreachable block (ram,0x0145c26c) */
/* WARNING: Removing unreachable block (ram,0x0145c280) */
/* WARNING: Removing unreachable block (ram,0x0145c288) */
/* WARNING: Removing unreachable block (ram,0x0145c28c) */
/* WARNING: Removing unreachable block (ram,0x0145c2a4) */
/* WARNING: Removing unreachable block (ram,0x0145c2ac) */
/* WARNING: Removing unreachable block (ram,0x0145c2b4) */
/* WARNING: Removing unreachable block (ram,0x0145c2bc) */
/* WARNING: Removing unreachable block (ram,0x0145c2c0) */
/* WARNING: Removing unreachable block (ram,0x0145c2c8) */
/* WARNING: Removing unreachable block (ram,0x0145c2cc) */
/* WARNING: Removing unreachable block (ram,0x0145c2dc) */
/* WARNING: Removing unreachable block (ram,0x0145c2e0) */
/* WARNING: Removing unreachable block (ram,0x0145c2e8) */
/* WARNING: Removing unreachable block (ram,0x0145c2ec) */
/* WARNING: Removing unreachable block (ram,0x0145c10c) */
/* WARNING: Removing unreachable block (ram,0x0145c1d4) */
/* WARNING: Removing unreachable block (ram,0x0145bef0) */
/* WARNING: Removing unreachable block (ram,0x0145bd48) */
/* WARNING: Removing unreachable block (ram,0x0145bc30) */
/* WARNING: Removing unreachable block (ram,0x0145bb48) */
/* WARNING: Removing unreachable block (ram,0x0145ba04) */
/* WARNING: Removing unreachable block (ram,0x0145b898) */
/* WARNING: Removing unreachable block (ram,0x0145b740) */
/* WARNING: Removing unreachable block (ram,0x0145b6e4) */
/* WARNING: Removing unreachable block (ram,0x0145b5f8) */
/* WARNING: Removing unreachable block (ram,0x0145b5fc) */
/* WARNING: Removing unreachable block (ram,0x0145b45c) */
/* WARNING: Removing unreachable block (ram,0x0145b46c) */
/* WARNING: Removing unreachable block (ram,0x0145b480) */
/* WARNING: Removing unreachable block (ram,0x0145b484) */
/* WARNING: Removing unreachable block (ram,0x0145b488) */
/* WARNING: Removing unreachable block (ram,0x0145b48c) */
/* WARNING: Removing unreachable block (ram,0x0145b490) */
/* WARNING: Removing unreachable block (ram,0x0145b494) */
/* WARNING: Removing unreachable block (ram,0x0145b4b4) */
/* WARNING: Removing unreachable block (ram,0x0145b4bc) */
/* WARNING: Removing unreachable block (ram,0x0145b4c4) */
/* WARNING: Removing unreachable block (ram,0x0145b544) */
/* WARNING: Removing unreachable block (ram,0x0145b4e8) */
/* WARNING: Removing unreachable block (ram,0x0145b4f4) */
/* WARNING: Removing unreachable block (ram,0x0145b4fc) */
/* WARNING: Removing unreachable block (ram,0x0145b504) */
/* WARNING: Removing unreachable block (ram,0x014fe2a8) */
/* WARNING: Removing unreachable block (ram,0x014fe2f8) */
/* WARNING: Removing unreachable block (ram,0x014fe330) */
/* WARNING: Removing unreachable block (ram,0x014fe3a0) */
/* WARNING: Removing unreachable block (ram,0x014fe334) */
/* WARNING: Removing unreachable block (ram,0x014fe3e4) */
/* WARNING: Removing unreachable block (ram,0x014fe384) */
/* WARNING: Removing unreachable block (ram,0x014fe3a4) */
/* WARNING: Removing unreachable block (ram,0x014fe428) */
/* WARNING: Removing unreachable block (ram,0x014fe470) */
/* WARNING: Removing unreachable block (ram,0x014fe484) */
/* WARNING: Removing unreachable block (ram,0x014fe48c) */
/* WARNING: Removing unreachable block (ram,0x014fe5a4) */
/* WARNING: Removing unreachable block (ram,0x014fe494) */
/* WARNING: Removing unreachable block (ram,0x014fe584) */
/* WARNING: Removing unreachable block (ram,0x014fe588) */
/* WARNING: Removing unreachable block (ram,0x014fe49c) */
/* WARNING: Removing unreachable block (ram,0x014fe5a8) */
/* WARNING: Removing unreachable block (ram,0x014fe5e8) */
/* WARNING: Removing unreachable block (ram,0x014fe650) */
/* WARNING: Removing unreachable block (ram,0x014fe664) */
/* WARNING: Removing unreachable block (ram,0x014fe66c) */
/* WARNING: Removing unreachable block (ram,0x014fe670) */
/* WARNING: Removing unreachable block (ram,0x014fe6a4) */
/* WARNING: Removing unreachable block (ram,0x014fe6b8) */
/* WARNING: Removing unreachable block (ram,0x014fe6c0) */
/* WARNING: Removing unreachable block (ram,0x014fe6c8) */
/* WARNING: Removing unreachable block (ram,0x014fe7e4) */
/* WARNING: Removing unreachable block (ram,0x014fe6e0) */
/* WARNING: Removing unreachable block (ram,0x014fe6e4) */
/* WARNING: Removing unreachable block (ram,0x014fe720) */
/* WARNING: Removing unreachable block (ram,0x014fe724) */
/* WARNING: Removing unreachable block (ram,0x014fe7ec) */
/* WARNING: Removing unreachable block (ram,0x014fe800) */
/* WARNING: Removing unreachable block (ram,0x014fe808) */
/* WARNING: Removing unreachable block (ram,0x014fe820) */
/* WARNING: Removing unreachable block (ram,0x014fe828) */
/* WARNING: Removing unreachable block (ram,0x014fe84c) */
/* WARNING: Removing unreachable block (ram,0x014fe85c) */
/* WARNING: Removing unreachable block (ram,0x014fe844) */
/* WARNING: Removing unreachable block (ram,0x014fe860) */
/* WARNING: Removing unreachable block (ram,0x014fe864) */
/* WARNING: Removing unreachable block (ram,0x014fe898) */
/* WARNING: Removing unreachable block (ram,0x014fe8a0) */
/* WARNING: Removing unreachable block (ram,0x014fe8f8) */
/* WARNING: Removing unreachable block (ram,0x014fe8a8) */
/* WARNING: Removing unreachable block (ram,0x014fe8d4) */
/* WARNING: Removing unreachable block (ram,0x014fe8b8) */
/* WARNING: Removing unreachable block (ram,0x014fe86c) */
/* WARNING: Removing unreachable block (ram,0x014fe890) */
/* WARNING: Removing unreachable block (ram,0x014fe8dc) */
/* WARNING: Removing unreachable block (ram,0x014fe874) */
/* WARNING: Removing unreachable block (ram,0x014fe888) */
/* WARNING: Removing unreachable block (ram,0x014fe878) */
/* WARNING: Removing unreachable block (ram,0x014fe734) */
/* WARNING: Removing unreachable block (ram,0x014fe8f0) */
/* WARNING: Removing unreachable block (ram,0x014fe73c) */
/* WARNING: Removing unreachable block (ram,0x014fe74c) */
/* WARNING: Removing unreachable block (ram,0x014fe754) */
/* WARNING: Removing unreachable block (ram,0x014fe75c) */
/* WARNING: Removing unreachable block (ram,0x014fe774) */
/* WARNING: Removing unreachable block (ram,0x014fe784) */
/* WARNING: Removing unreachable block (ram,0x014fe788) */
/* WARNING: Removing unreachable block (ram,0x014fe78c) */
/* WARNING: Removing unreachable block (ram,0x014fe8fc) */
/* WARNING: Removing unreachable block (ram,0x014fe900) */
/* WARNING: Removing unreachable block (ram,0x014fe7a8) */
/* WARNING: Removing unreachable block (ram,0x014fe680) */
/* WARNING: Removing unreachable block (ram,0x014fe684) */
/* WARNING: Removing unreachable block (ram,0x0145b2e0) */
/* WARNING: Removing unreachable block (ram,0x0145b2f0) */
/* WARNING: Removing unreachable block (ram,0x0145b2f8) */
/* WARNING: Removing unreachable block (ram,0x0145b2fc) */
/* WARNING: Removing unreachable block (ram,0x0145b300) */
/* WARNING: Removing unreachable block (ram,0x0145b318) */
/* WARNING: Removing unreachable block (ram,0x0145b3f0) */
/* WARNING: Removing unreachable block (ram,0x0145b3f4) */
/* WARNING: Removing unreachable block (ram,0x0145b324) */
/* WARNING: Removing unreachable block (ram,0x0145b338) */
/* WARNING: Removing unreachable block (ram,0x0145b340) */
/* WARNING: Removing unreachable block (ram,0x0145b348) */
/* WARNING: Removing unreachable block (ram,0x014fe3e8) */
/* WARNING: Removing unreachable block (ram,0x015bf5c8) */
/* WARNING: Removing unreachable block (ram,0x015bf40c) */
/* WARNING: Removing unreachable block (ram,0x015bf41c) */
/* WARNING: Removing unreachable block (ram,0x015bf424) */
/* WARNING: Removing unreachable block (ram,0x015bf42c) */
/* WARNING: Removing unreachable block (ram,0x015bf478) */
/* WARNING: Removing unreachable block (ram,0x015bf4c8) */
/* WARNING: Removing unreachable block (ram,0x015bf4cc) */
/* WARNING: Removing unreachable block (ram,0x015bf4d4) */
/* WARNING: Removing unreachable block (ram,0x015bf4dc) */
/* WARNING: Removing unreachable block (ram,0x015bf484) */
/* WARNING: Removing unreachable block (ram,0x015bf488) */
/* WARNING: Removing unreachable block (ram,0x015bf490) */
/* WARNING: Removing unreachable block (ram,0x015bf498) */
/* WARNING: Removing unreachable block (ram,0x015bf44c) */
/* WARNING: Removing unreachable block (ram,0x015bf458) */
/* WARNING: Removing unreachable block (ram,0x015bf460) */
/* WARNING: Removing unreachable block (ram,0x015bf468) */
/* WARNING: Removing unreachable block (ram,0x015bf5b4) */
/* WARNING: Removing unreachable block (ram,0x015bf4f8) */
/* WARNING: Removing unreachable block (ram,0x015bf500) */
/* WARNING: Removing unreachable block (ram,0x015bf504) */
/* WARNING: Removing unreachable block (ram,0x015bf50c) */
/* WARNING: Removing unreachable block (ram,0x015bf528) */
/* WARNING: Removing unreachable block (ram,0x015bf5d0) */
/* WARNING: Removing unreachable block (ram,0x015bf5d8) */
/* WARNING: Removing unreachable block (ram,0x015bf5e8) */
/* WARNING: Removing unreachable block (ram,0x015bf5f4) */
/* WARNING: Removing unreachable block (ram,0x015bf5fc) */
/* WARNING: Removing unreachable block (ram,0x015bf604) */
/* WARNING: Removing unreachable block (ram,0x015bf52c) */
/* WARNING: Removing unreachable block (ram,0x015bf538) */
/* WARNING: Removing unreachable block (ram,0x015bf540) */
/* WARNING: Removing unreachable block (ram,0x015bf548) */
/* WARNING: Removing unreachable block (ram,0x015bf558) */
/* WARNING: Removing unreachable block (ram,0x015bf560) */
/* WARNING: Removing unreachable block (ram,0x015bf574) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Audio_KartAudio__PlayCollision
                (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,ulong param_4,
                ulong param_5,undefined8 param_6,long param_7,ulong param_8,undefined8 param_9,
                undefined8 param_10,undefined8 param_11)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong extraout_x1;
  undefined8 uVar19;
  long lVar20;
  undefined8 *extraout_x8;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 *******pppppppuVar26;
  undefined *puVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  ulong extraout_d0;
  ulong unaff_d8;
  float fVar31;
  ulong unaff_d9;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *******pppppppuStack_80;
  undefined *puStack_78;
  
  auVar32._8_8_ = param_7;
  auVar32._0_8_ = param_4;
  puVar2 = (undefined8 *)&stack0xffffffffffffff90;
  pppppppuVar26 = (undefined8 *******)&stack0xfffffffffffffff0;
  uVar23 = 0x3eb5000;
  uVar10 = param_4;
  lVar20 = param_7;
  if ((bRam0000000003eb52cd & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d2df40);
    func_0x00f78a20(0x3d2df48);
    uVar10 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52cd = 1;
  }
  if (*(long *)(param_4 + 0x90) != 0) {
    if (((int)param_7 != 1) && (*(char *)(*(long *)(param_4 + 0x90) + 0xcd) == '\0')) {
      return uVar10;
    }
    lVar24 = *(long *)(param_4 + 0x150);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar23 = 0;
    if (lVar24 != 0) {
      uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar24,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x238),
                               uRam0000000003d2fb00);
      if (uVar10 == 0) {
        return 0;
      }
      puVar27 = (undefined *)0x15bf40c;
      uVar23 = uVar10;
      goto code_r0x015bf8e4;
    }
  }
  uVar10 = func_0x00f78af4();
  puStack_78 = &Atlas_Audio_KartAudio__SetBoosting;
  unaff_d8 = extraout_d0 & 0xffffffff;
  uVar11 = uVar10;
  pppppppuStack_80 = pppppppuVar26;
  if ((bRam0000000003eb52c3 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    uVar11 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52c3 = 1;
  }
  if (((float)extraout_d0 <= *(float *)(uVar10 + 0x40)) || (*(char *)(uVar10 + 0x38) != '\0')) {
code_r0x015bf7e4:
    *(float *)(uVar10 + 0x40) = (float)extraout_d0;
    return uVar11;
  }
  lVar24 = *(long *)(uVar10 + 0x150);
  param_8 = 0x3d1ff28;
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar22 = 0;
  if (lVar24 != 0) {
    lVar24 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar24,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x220),
                             uRam0000000003d2fb00);
    if (lVar24 != 0) {
      param_10 = *(undefined8 *)(uVar10 + 0xb8);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar20 = 0;
      /*Core.Audio.AudioEvent$$Play*/ func_0x01638d80((float)*(int *)(uVar10 + 0x158),lVar24,param_10,
                      *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1a0));
    }
    lVar22 = *(long *)(uVar10 + 0x150);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_5 = 0x3d2fb00;
    if (lVar22 != 0) {
      uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar22,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2d8),
                               uRam0000000003d2fb00);
      if (uVar11 != 0) {
        lVar20 = *(long *)(uVar10 + 0xb8);
        puVar5 = &stack0xffffffffffffff40;
        pppppppuVar26 = &pppppppuStack_80;
        puVar27 = &UNK_015bf7cc;
        goto code_r0x01638d28;
      }
      param_5 = 0x3d2fb00;
      if (*(long *)(uVar10 + 0x90) != 0) {
        uVar11 = Atlas_Audio_AtlasAudioManager__SpeakBoostPad
                           (*(undefined4 *)(uVar10 + 0x60),*(long *)(uVar10 + 0x90),uVar10,0);
        goto code_r0x015bf7e4;
      }
    }
  }
  auVar32 = func_0x00f78af4();
  uVar9 = auVar32._8_4_;
  uVar21 = auVar32._0_8_;
  puVar2 = &uStack_f0;
  uStack_f0 = 0x3d1ff28;
  puStack_c8 = &Atlas_Audio_KartAudio__PlaySurface;
  pppppppuVar26 = &pppppppuStack_d0;
  uVar12 = uVar21;
  uStack_e8 = param_10;
  lStack_e0 = lVar22;
  uStack_d8 = uVar10;
  pppppppuStack_d0 = &pppppppuStack_80;
  if ((bRam0000000003eb52d3 & 1) == 0) {
    uVar12 = func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb52d3 = 1;
  }
  if (*(char *)(uVar21 + 0x38) == '\0') {
    lVar24 = *(long *)(uVar21 + 0x90);
    if (lVar24 == 0) {
      puVar27 = &Atlas_Audio_KartAudio__ClearCollisionEventParameters;
      func_0x00f78af4();
      param_10 = 0;
      uVar10 = extraout_x1;
code_r0x015bf8e4:
      puVar6 = (undefined1 *)((long)puVar2 + -0x30);
      *(ulong *)((long)puVar2 + -0x30) = param_8;
      *(undefined8 *)((long)puVar2 + -0x28) = param_10;
      *(long *)((long)puVar2 + -0x20) = auVar32._8_8_;
      *(long *)((long)puVar2 + -0x18) = auVar32._0_8_;
      *(undefined8 ********)((long)puVar2 + -0x10) = pppppppuVar26;
      *(undefined **)((long)puVar2 + -8) = puVar27;
      puVar5 = (undefined1 *)((long)puVar2 + -0x10);
      lVar24 = 0x3eb5000;
      if ((bRam0000000003eb52ca & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        bRam0000000003eb52ca = 1;
      }
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (uVar10 != 0) {
        uVar19 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1a8);
        puVar27 = &UNK_015bf95c;
        uVar11 = uVar10;
        uVar23 = 0x3d1ff28;
code_r0x01638fc8:
        *(ulong *)(puVar6 + -0x40) = unaff_d9;
        *(ulong *)(puVar6 + -0x38) = unaff_d8;
        *(ulong *)(puVar6 + -0x30) = param_8;
        *(long *)(puVar6 + -0x28) = lVar24;
        *(ulong *)(puVar6 + -0x20) = uVar23;
        *(ulong *)(puVar6 + -0x18) = uVar11;
        *(undefined1 **)(puVar6 + -0x10) = puVar5;
        *(undefined **)(puVar6 + -8) = puVar27;
        iVar8 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(uVar10 + 0x28,0,0,0);
        if (iVar8 != 0) {
          /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(0,uVar10 + 0x28,uVar19,0,0);
        }
        return uVar10;
      }
      puVar27 = &Atlas_Audio_KartAudio__StopScraping;
      uVar11 = func_0x00f78af4();
      auVar32 = ZEXT816(0x3d1ff28) << 0x40;
      puVar3 = (undefined1 *)((long)puVar2 + -0x30);
      do {
        puVar6 = puVar3 + -0x30;
        *(ulong *)(puVar3 + -0x30) = param_8;
        *(long *)(puVar3 + -0x28) = lVar24;
        *(long *)(puVar3 + -0x20) = auVar32._8_8_;
        *(long *)(puVar3 + -0x18) = auVar32._0_8_;
        *(undefined1 **)(puVar3 + -0x10) = puVar5;
        *(undefined **)(puVar3 + -8) = puVar27;
        puVar5 = puVar3 + -0x10;
        lVar24 = 0x3d1ff28;
        if ((bRam0000000003eb52cc & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52cc = 1;
        }
        lVar22 = *(long *)(uVar11 + 0x150);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar22 != 0) {
          uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar22,*(undefined8 *)
                                           (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x238),
                                   uRam0000000003d2fb00);
          if (uVar10 == 0) {
            *(undefined4 *)(uVar11 + 0x70) = 0xbf800000;
            return 0;
          }
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar19 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1c8);
          puVar27 = &UNK_015bfab4;
          uVar23 = uVar10;
          goto code_r0x01638fc8;
        }
        auVar32 = func_0x00f78af4();
        lVar22 = auVar32._8_8_;
        uVar12 = auVar32._0_8_;
        *(ulong *)(puVar3 + -0x90) = unaff_d9;
        *(ulong *)(puVar3 + -0x88) = unaff_d8;
        *(undefined8 *)(puVar3 + -0x80) = param_11;
        *(ulong *)(puVar3 + -0x78) = uVar23;
        *(undefined8 *)(puVar3 + -0x70) = param_9;
        *(ulong *)(puVar3 + -0x68) = param_5;
        *(ulong *)(puVar3 + -0x60) = param_8;
        *(undefined8 *)(puVar3 + -0x58) = 0x3d1ff28;
        *(undefined8 *)(puVar3 + -0x50) = 0;
        *(ulong *)(puVar3 + -0x48) = uVar11;
        *(undefined1 **)(puVar3 + -0x40) = puVar5;
        *(undefined **)(puVar3 + -0x38) = &Atlas_Audio_KartAudio__OnCollisionEnter;
        lVar24 = 0x3eb5000;
        uVar10 = uVar12;
        if ((bRam0000000003eb52ce & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d578a8);
          uVar10 = func_0x00f78a20(0x3d23990);
          bRam0000000003eb52ce = 1;
        }
        fVar29 = _UNK_033f83fc;
        if (*(char *)(uVar12 + 0x50) == '\0') {
          return uVar10;
        }
        if (*(char *)(uVar12 + 0x38) != '\0') {
          return uVar10;
        }
        if (*(long *)(uVar12 + 0x90) != 0) {
          if (*(char *)(*(long *)(uVar12 + 0x90) + 0xcd) == '\0') {
            return uVar10;
          }
          if (*(float *)(uVar12 + 0x68) <= _UNK_033f83fc) {
            return uVar10;
          }
          if (*(int *)(lVar22 + 0x20) == 5) {
            return uVar10;
          }
          *(undefined4 *)(uVar12 + 0x68) = 0;
          if ((*(long *)(lVar22 + 8) != 0) &&
             (lVar13 = /*UnityEngine.Collision$$get_gameObject*/ func_0x0329ee78(*(long *)(lVar22 + 8),0), lVar13 != 0)) {
            lVar24 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar13,uRam0000000003d578a8);
            if (*(long *)(lVar22 + 8) != 0) {
              uVar28 = /*UnityEngine.Collision$$get_relativeVelocity*/ func_0x0329ede4(*(long *)(lVar22 + 8),0);
              *(undefined4 *)(puVar3 + -0xa0) = uVar28;
              *(float *)(puVar3 + -0x9c) = fVar29;
              *(undefined4 *)(puVar3 + -0x98) = param_3;
              uVar28 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(puVar3 + -0xa0,0);
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              fVar29 = (float)/*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar28,*(undefined4 *)
                                                      (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8),0
                                             );
              unaff_d8 = (ulong)(uint)fVar29;
              fVar31 = *(float *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8);
              unaff_d9 = (ulong)(uint)fVar31;
              param_8 = (ulong)((*(uint *)(lVar22 + 0x20) & 0xfffffffe) == 2);
              uVar23 = 0x3d23990;
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar24,0);
              if ((int)uVar10 == 0) {
                param_5 = 1;
              }
              else {
                if (lVar24 == 0) goto code_r0x015bfd5c;
                param_5 = (ulong)*(uint *)(lVar24 + 0x1c);
              }
              if (*(int *)(lVar22 + 0x20) == 0) {
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar24,0);
                if ((int)uVar10 != 0) {
                  if (lVar24 == 0) goto code_r0x015bfd5c;
                  fVar30 = 3.0;
                  if ((*(uint *)(lVar24 + 0x1c) & 0xfffffffe) == 8) goto code_r0x015bfce0;
                }
              }
              if (3 < *(int *)(lVar22 + 0x20) - 1U) {
                return uVar10;
              }
              fVar30 = (fVar29 / fVar31) * 3.0;
code_r0x015bfce0:
              uVar28 = 0;
              if (*(char *)(lVar22 + 0x1c) != '\0') {
                uVar28 = 0xbf800000;
              }
              *(undefined4 *)(uVar12 + 0x70) = uVar28;
              /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(fVar30,0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar24,0,0);
              uVar23 = Atlas_Audio_KartAudio__PlayCollision(uVar12,param_5);
              return uVar23;
            }
          }
        }
code_r0x015bfd5c:
        uVar11 = func_0x00f78af4();
        *(undefined1 **)(puVar3 + -0xc0) = puVar3 + -0x40;
        *(undefined **)(puVar3 + -0xb8) = &Atlas_Audio_KartAudio__OnCollisionExit;
        if ((*(char *)(uVar11 + 0x50) == '\0') || (*(char *)(uVar11 + 0x38) != '\0')) {
          return uVar11;
        }
        if (*(long *)(uVar11 + 0x90) == 0) {
          auVar32 = func_0x00f78af4();
          uVar10 = auVar32._8_8_;
          uVar21 = auVar32._0_8_;
          puVar7 = puVar3 + -0xf0;
          puVar4 = puVar3 + -0xf0;
          *(ulong *)(puVar3 + -0xf0) = param_8;
          *(long *)(puVar3 + -0xe8) = lVar24;
          *(long *)(puVar3 + -0xe0) = lVar22;
          *(ulong *)(puVar3 + -0xd8) = uVar12;
          *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0xc0;
          *(undefined **)(puVar3 + -200) = &Atlas_Audio_KartAudio__OnTriggerEnter;
          puVar5 = puVar3 + -0xd0;
          uVar19 = 0x3eb5000;
          uVar11 = uVar21;
          if ((bRam0000000003eb52cf & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            func_0x00f78a20(0x3d2e048);
            func_0x00f78a20(0x3d2e050);
            func_0x00f78a20(0x3d577c8);
            func_0x00f78a20(0x3d578c0);
            uVar11 = func_0x00f78a20(0x3d23990);
            bRam0000000003eb52cf = 1;
          }
          if (*(char *)(uVar21 + 0x50) == '\0') {
            return uVar11;
          }
          if (*(char *)(uVar21 + 0x38) != '\0') {
            return uVar11;
          }
          if (*(float *)(uVar21 + 100) <= _UNK_033f8140) {
            return uVar11;
          }
          *(undefined4 *)(uVar21 + 100) = 0;
          if ((uVar10 != 0) && (lVar24 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar10,0), lVar24 != 0)) {
            uVar19 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar24,uRam0000000003d578c0);
            lVar24 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar10,0);
            if (lVar24 == 0) goto code_r0x015c0060;
            uVar10 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar24,uRam0000000003d577c8);
            uVar11 = 0x3d23990;
            uVar12 = 0x3d23990;
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar19,0);
            if (iVar8 != 0) {
              puVar5 = *(undefined1 **)(puVar3 + -0xd0);
              puVar27 = *(undefined **)(puVar3 + -200);
              uVar10 = *(ulong *)(puVar3 + -0xe0);
              puVar4 = puVar3 + -0xc0;
              param_8 = *(ulong *)(puVar3 + -0xf0);
              uVar19 = *(undefined8 *)(puVar3 + -0xe8);
              uVar12 = uVar21;
              uVar21 = *(ulong *)(puVar3 + -0xd8);
              goto code_r0x015c0064;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar14 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar10,0);
            if ((int)uVar14 == 0) {
              return uVar14;
            }
            param_8 = uVar11;
            if (uVar10 == 0) goto code_r0x015c0060;
            iVar8 = *(int *)(uVar10 + 0x60);
            if (iVar8 == 0) {
              if (*(char *)(uVar10 + 0x68) != '\0') {
                return uVar14;
              }
              param_8 = uVar12;
              if (*(long *)(uVar21 + 0x90) == 0) goto code_r0x015c0060;
              if (*(char *)(*(long *)(uVar21 + 0x90) + 0xce) == '\0') {
                return uVar14;
              }
              lVar24 = *(long *)(uVar21 + 0x148);
              if (lVar24 == 0) goto code_r0x015c0060;
              puVar27 = &UNK_015bff78;
code_r0x01ec8898:
              *(undefined1 **)(puVar7 + -0x10) = puVar5;
              *(undefined **)(puVar7 + -8) = puVar27;
              if (lVar24 != 0) {
                uVar9 = (*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(uRam0000000003d2e050 + 0x18) + 0xc0) + 0x40
                                    ))();
                return (ulong)(~uVar9 >> 0x1f);
              }
              uVar12 = uRam0000000003d2e050;
              auVar32 = func_0x00f78af4(0,uVar10);
              lVar24 = auVar32._0_8_;
              *(undefined8 *)(puVar7 + -0x50) = param_9;
              *(ulong *)(puVar7 + -0x48) = param_5;
              *(ulong *)(puVar7 + -0x40) = uVar11;
              *(undefined8 *)(puVar7 + -0x38) = uVar19;
              *(ulong *)(puVar7 + -0x30) = uVar10;
              *(ulong *)(puVar7 + -0x28) = uVar21;
              *(undefined1 **)(puVar7 + -0x20) = puVar7 + -0x10;
              *(undefined **)(puVar7 + -0x18) =
                   &System_Collections_Generic_Dictionary_object__EventInstance___ContainsValue;
              plVar15 = (long *)(*(code *)**(undefined8 **)
                                            (*(long *)(*(long *)(uVar12 + 0x18) + 0xc0) + 0x68))();
              iVar8 = *(int *)(lVar24 + 0x20);
              if (iVar8 < 1) {
                return 0;
              }
              lVar22 = 0;
              uVar10 = 0;
              goto code_r0x01ec8914;
            }
            if (iVar8 == 2) {
              if (*(char *)(uVar10 + 0x50) != '\0') {
                return uVar14;
              }
              param_8 = uVar12;
              if (*(long *)(uVar21 + 0x90) == 0) goto code_r0x015c0060;
              if (*(char *)(*(long *)(uVar21 + 0x90) + 0xd2) == '\0') {
                return uVar14;
              }
              lVar20 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar10,0);
              *(undefined8 *)(puVar3 + -0xf0) = *(undefined8 *)(puVar3 + -0xf0);
              *(undefined8 *)(puVar3 + -0xe8) = *(undefined8 *)(puVar3 + -0xe8);
              *(undefined8 *)(puVar3 + -0xe0) = *(undefined8 *)(puVar3 + -0xe0);
              *(undefined8 *)(puVar3 + -0xd8) = *(undefined8 *)(puVar3 + -0xd8);
              *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0xd0);
              *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -200);
              if ((bRam0000000003eb4876 & 1) == 0) {
                func_0x00f78a20(0x3d1ff30,lVar20,0);
                func_0x00f78a20(0x3d65d08);
                bRam0000000003eb4876 = 1;
              }
              uVar11 = *(ulong *)(uVar10 + 0xb0);
              if (uVar11 == 0) {
                uVar23 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*(undefined8 *)(uVar10 + 0x48),/*STR('')*/ uRam0000000003d65d08,0);
                if ((uVar23 & 1) == 0) {
                  uVar11 = *(ulong *)(uVar10 + 0xb0);
                }
                else {
                  uVar19 = *(undefined8 *)(uVar10 + 0x48);
                  uVar11 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
                  uVar23 = /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar11,uVar19,0,0,0);
                  *(ulong *)(uVar10 + 0xb0) = uVar11;
                }
                if (uVar11 == 0) {
                  return uVar23;
                }
              }
              pppppppuVar26 = *(undefined8 ********)(puVar3 + -0xd0);
              puVar27 = *(undefined **)(puVar3 + -200);
              lVar22 = *(long *)(puVar3 + -0xe0);
              uVar10 = *(ulong *)(puVar3 + -0xd8);
              puVar5 = puVar3 + -0xc0;
              goto code_r0x01638d28;
            }
            if (iVar8 != 1) {
              return uVar14;
            }
            if (*(long *)(uVar21 + 0x90) != 0) {
              if (*(char *)(*(long *)(uVar21 + 0x90) + 0xd1) != '\0') {
                fVar29 = *(float *)(uVar21 + 0x74) * 100.0;
                *(float *)(uVar10 + 0xc0) = fVar29 * _UNK_033f82c0 + _UNK_033f82c4;
                *(float *)(uVar10 + 0xc4) = fVar29;
                return uVar10;
              }
              return uVar14;
            }
          }
code_r0x015c0060:
          puVar27 = &Atlas_Audio_KartAudio__PickupPickedUp;
          uVar12 = func_0x00f78af4();
code_r0x015c0064:
          *(ulong *)(puVar4 + -0x30) = param_8;
          *(undefined8 *)(puVar4 + -0x28) = uVar19;
          *(ulong *)(puVar4 + -0x20) = uVar10;
          *(ulong *)(puVar4 + -0x18) = uVar21;
          *(undefined1 **)(puVar4 + -0x10) = puVar5;
          *(undefined **)(puVar4 + -8) = puVar27;
          uVar10 = uVar12;
          if ((bRam0000000003eb52d1 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            uVar10 = func_0x00f78a20(0x3d2fb00);
            bRam0000000003eb52d1 = 1;
          }
          if (*(char *)(uVar12 + 0x38) != '\0') {
            return uVar10;
          }
          lVar24 = *(long *)(uVar12 + 0x150);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if ((lVar24 != 0) &&
             (uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar24,*(undefined8 *)
                                               (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x230),
                                       uRam0000000003d2fb00), uVar11 != 0)) {
            lVar20 = *(long *)(uVar12 + 0xb8);
            pppppppuVar26 = *(undefined8 ********)(puVar4 + -0x10);
            puVar27 = *(undefined **)(puVar4 + -8);
            uVar10 = *(ulong *)(puVar4 + -0x18);
            puVar5 = puVar4;
            lVar22 = *(long *)(puVar4 + -0x20);
            goto code_r0x01638d28;
          }
          auVar32 = func_0x00f78af4();
          uVar10 = auVar32._8_8_;
          uVar21 = auVar32._0_8_;
          puVar7 = puVar4 + -0x60;
          *(ulong *)(puVar4 + -0x60) = param_8;
          *(undefined8 *)(puVar4 + -0x58) = 0x3d1ff28;
          *(long *)(puVar4 + -0x50) = lVar24;
          *(ulong *)(puVar4 + -0x48) = uVar12;
          *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
          *(undefined **)(puVar4 + -0x38) = &Atlas_Audio_KartAudio__OnTriggerExit;
          puVar5 = puVar4 + -0x40;
          uVar19 = 0x3eb5000;
          uVar11 = uVar21;
          if ((bRam0000000003eb52d0 & 1) == 0) {
            func_0x00f78a20(0x3d2e050);
            func_0x00f78a20(0x3d2e058);
            func_0x00f78a20(0x3d2e060);
            func_0x00f78a20(0x3d577c8);
            uVar11 = func_0x00f78a20(0x3d23990);
            bRam0000000003eb52d0 = 1;
          }
          if ((*(char *)(uVar21 + 0x50) == '\0') || (*(char *)(uVar21 + 0x38) != '\0')) {
            return uVar11;
          }
          if ((uVar10 != 0) && (lVar24 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar10,0), lVar24 != 0)) {
            uVar10 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar24,uRam0000000003d577c8);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar11 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar10,0);
            if ((int)uVar11 == 0) {
              return uVar11;
            }
            if (uVar10 != 0) {
              if (*(int *)(uVar10 + 0x60) != 0) {
                return uVar11;
              }
              if (*(long *)(uVar21 + 0x90) != 0) {
                if (*(char *)(*(long *)(uVar21 + 0x90) + 0xce) == '\0') {
                  return uVar11;
                }
                lVar24 = *(long *)(uVar21 + 0x148);
                if (lVar24 != 0) {
                  puVar27 = &UNK_015c023c;
                  uVar11 = param_8;
                  goto code_r0x01ec8898;
                }
              }
            }
          }
          uVar12 = func_0x00f78af4();
          *(ulong *)(puVar4 + -0x90) = param_8;
          *(undefined8 *)(puVar4 + -0x88) = 0x3eb5000;
          *(ulong *)(puVar4 + -0x80) = uVar10;
          *(ulong *)(puVar4 + -0x78) = uVar21;
          *(undefined1 **)(puVar4 + -0x70) = puVar5;
          *(undefined **)(puVar4 + -0x68) = &Atlas_Audio_KartAudio__PlayVFXAudio;
          uVar23 = uVar12;
          if ((bRam0000000003eb52d4 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            uVar23 = func_0x00f78a20(0x3d2fb00);
            bRam0000000003eb52d4 = 1;
          }
          if (*(char *)(uVar12 + 0x38) == '\0') {
            lVar20 = *(long *)(uVar12 + 0x150);
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (lVar20 == 0) {
              auVar32 = func_0x00f78af4();
              lVar20 = auVar32._8_8_;
              uVar10 = auVar32._0_8_;
              puVar5 = puVar4 + -0xd0;
              *(undefined8 *)(puVar4 + -0xd0) = param_9;
              *(ulong *)(puVar4 + -200) = param_5;
              *(ulong *)(puVar4 + -0xc0) = param_8;
              *(undefined8 *)(puVar4 + -0xb8) = 0x3d1ff28;
              *(undefined8 *)(puVar4 + -0xb0) = 0;
              *(ulong *)(puVar4 + -0xa8) = uVar12;
              *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x70;
              *(undefined **)(puVar4 + -0x98) = &Atlas_Audio_KartAudio__ExitPortal;
              pppppppuVar26 = (undefined8 *******)(puVar4 + -0xa0);
              if ((bRam0000000003eb52d6 & 1) == 0) {
                func_0x00f78a20(0x3d1ff28);
                func_0x00f78a20(0x3d2fb00);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb52d6 = 1;
              }
              lVar24 = *(long *)(uVar10 + 0x150);
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (lVar24 != 0) {
                uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar24,*(undefined8 *)
                                                 (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x278),
                                         uRam0000000003d2fb00);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar23 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar20,0,0);
                if ((uVar23 & 1) == 0) {
                  lVar20 = *(long *)(uVar10 + 0xb8);
                }
                if (uVar11 != 0) {
                  puVar27 = &UNK_015c044c;
                  lVar22 = lVar20;
                  goto code_r0x01638d28;
                }
              }
              uVar23 = func_0x00f78af4();
              return uVar23;
            }
            uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar20,*(undefined8 *)
                                             (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x250),
                                     uRam0000000003d2fb00);
            uVar23 = 0;
            if (uVar11 != 0) {
              lVar20 = *(long *)(uVar12 + 0xb8);
              pppppppuVar26 = *(undefined8 ********)(puVar4 + -0x70);
              puVar27 = *(undefined **)(puVar4 + -0x68);
              uVar10 = *(ulong *)(puVar4 + -0x78);
              puVar5 = puVar4 + -0x60;
              lVar22 = *(long *)(puVar4 + -0x80);
              goto code_r0x01638d28;
            }
          }
          return uVar23;
        }
        if (*(char *)(*(long *)(uVar11 + 0x90) + 0xcd) == '\0') {
          return uVar11;
        }
        puVar5 = *(undefined1 **)(puVar3 + -0xc0);
        puVar27 = *(undefined **)(puVar3 + -0xb8);
        puVar3 = puVar3 + -0xb0;
      } while( true );
    }
    if ((*(char *)(lVar24 + 0xc9) != '\0') && (*(uint *)(uVar21 + 0xb0) != uVar9)) {
      *(uint *)(uVar21 + 0xb0) = uVar9;
      if (uVar9 == 0) {
        uVar9 = *(byte *)(uVar21 + 0x39) ^ 1;
      }
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Core.Audio.AudioManager$$SetGlobalParameter*/ func_0x01639e60((float)(int)uVar9,lVar24,
                      *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1e8),0,0);
      uVar11 = *(ulong *)(uVar21 + 0xe0);
      uVar12 = 0;
      if (uVar11 != 0) {
        lVar20 = *(long *)(uVar21 + 0xb8);
        puVar5 = &stack0xffffffffffffff40;
        uVar10 = uStack_d8;
        lVar22 = lStack_e0;
        pppppppuVar26 = pppppppuStack_d0;
        puVar27 = puStack_c8;
code_r0x01638d28:
        *(long *)(puVar5 + -0x20) = lVar22;
        *(ulong *)(puVar5 + -0x18) = uVar10;
        *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar26;
        *(undefined **)(puVar5 + -8) = puVar27;
        /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar11,lVar20,0);
        return uVar11;
      }
    }
  }
  return uVar12;
code_r0x01ec8914:
  lVar13 = *(long *)(lVar24 + 0x18);
  if (lVar13 == 0) {
code_r0x01ec898c:
    func_0x00f78af4();
code_r0x01ec8990:
    uVar19 = func_0x00f78b24();
    auVar33 = func_0x00f78ac0(uVar19,0);
    lVar13 = auVar33._8_8_;
    lVar16 = auVar33._0_8_;
    *(undefined8 *)(puVar7 + -0xa0) = param_11;
    *(ulong *)(puVar7 + -0x98) = uVar23;
    *(undefined8 *)(puVar7 + -0x90) = param_9;
    *(ulong *)(puVar7 + -0x88) = uVar10;
    *(long *)(puVar7 + -0x80) = lVar22;
    *(long **)(puVar7 + -0x78) = plVar15;
    *(undefined1 (*) [16])(puVar7 + -0x70) = auVar32;
    *(undefined1 **)(puVar7 + -0x60) = puVar7 + -0x20;
    *(undefined **)(puVar7 + -0x58) =
         &System_Collections_Generic_Dictionary_object__EventInstance___CopyTo;
    if (lVar13 == 0) goto code_r0x01ec8b28;
    uVar9 = (uint)uVar12;
    if (((int)uVar9 < 0) || (*(int *)(lVar13 + 0x18) < (int)uVar9)) goto code_r0x01ec8aa8;
    if (lVar16 == 0) goto code_r0x01ec8b24;
    uVar23 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar20 + 0x18) + 0xc0) + 0x90))(lVar16)
    ;
    if ((int)(*(int *)(lVar13 + 0x18) - uVar9) < (int)uVar23) {
      func_0x00f78a24(0x3d1fce8);
      uVar19 = func_0x00f78aec();
      uVar17 = func_0x00f78a24(0x3d6bc10);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar19,uVar17,0);
      goto code_r0x01ec8b8c;
    }
    uVar1 = *(uint *)(lVar16 + 0x20);
    if ((int)uVar1 < 1) {
      return uVar23;
    }
    lVar24 = *(long *)(lVar16 + 0x18);
    if (lVar24 == 0) goto code_r0x01ec8b24;
    uVar10 = 0;
    puVar25 = (undefined8 *)(lVar24 + 0x30);
    goto code_r0x01ec8a24;
  }
  if (*(uint *)(lVar13 + 0x18) <= uVar10) goto code_r0x01ec8990;
  if (-1 < *(int *)(lVar13 + lVar22 + 0x20)) {
    if (plVar15 == (long *)0x0) goto code_r0x01ec898c;
    lVar20 = *(long *)(*plVar15 + 0x1c0);
    uVar12 = auVar32._8_8_;
    uVar11 = (**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(lVar13 + lVar22 + 0x30));
    if ((uVar11 & 1) != 0) {
      return 1;
    }
    iVar8 = *(int *)(lVar24 + 0x20);
  }
  uVar10 = uVar10 + 1;
  lVar22 = lVar22 + 0x18;
  if ((long)iVar8 <= (long)uVar10) {
    return 0;
  }
  goto code_r0x01ec8914;
code_r0x01ec8a24:
  uVar9 = (uint)uVar12;
  if (*(uint *)(lVar24 + 0x18) <= uVar10) {
code_r0x01ec8a9c:
    uVar19 = func_0x00f78b24();
    func_0x00f78ac0(uVar19,0);
code_r0x01ec8aa8:
    *(uint *)(puVar7 + -0xb0) = uVar9;
    uVar19 = func_0x00f78a24(0x3d22910);
    uVar19 = func_0x00f78ae0(uVar19,puVar7 + -0xb0);
    func_0x00f78a24(0x3d1fcf8);
    lVar13 = func_0x00f78aec();
    uVar17 = func_0x00f78a24(0x3d79a60);
    uVar18 = func_0x00f78a24(0x3d6de28);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(lVar13,uVar17,uVar19,uVar18,0);
    uVar19 = func_0x00f78a24(0x3d2f4b0);
    func_0x00f78ac0(lVar13,uVar19);
code_r0x01ec8b24:
    func_0x00f78af4();
    lVar24 = lVar13;
code_r0x01ec8b28:
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar17 = func_0x00f78a24(0x3d77d18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar17,0);
    lVar13 = lVar24;
code_r0x01ec8b8c:
    uVar17 = func_0x00f78a24(0x3d2f4b0);
    auVar32 = func_0x00f78ac0(uVar19,uVar17);
    *(long *)(puVar7 + -0xd0) = lVar13;
    *(undefined8 *)(puVar7 + -200) = uVar19;
    *(undefined1 **)(puVar7 + -0xc0) = puVar7 + -0x60;
    *(undefined **)(puVar7 + -0xb8) =
         &System_Collections_Generic_Dictionary_object__EventInstance___GetEnumerator;
    *(undefined8 *)(puVar7 + -0xe0) = 0;
    *(undefined8 *)(puVar7 + -0xf8) = 0;
    *(undefined8 *)(puVar7 + -0x100) = 0;
    *(undefined8 *)(puVar7 + -0xe8) = 0;
    *(undefined8 *)(puVar7 + -0xf0) = 0;
    uVar23 = /*System.Collections.Generic.Dictionary.Enumerator<object, EventInstance>$$.ctor*/ func_0x01fd20e8(puVar7 + -0x100,auVar32._0_8_,2,
                             *(undefined8 *)
                              (*(long *)(*(long *)(auVar32._8_8_ + 0x18) + 0xc0) + 0xb0));
    uVar19 = *(undefined8 *)(puVar7 + -0x100);
    uVar18 = *(undefined8 *)(puVar7 + -0xe8);
    uVar17 = *(undefined8 *)(puVar7 + -0xf0);
    extraout_x8[1] = *(undefined8 *)(puVar7 + -0xf8);
    *extraout_x8 = uVar19;
    extraout_x8[3] = uVar18;
    extraout_x8[2] = uVar17;
    extraout_x8[4] = *(undefined8 *)(puVar7 + -0xe0);
    return uVar23;
  }
  if (-1 < *(int *)(puVar25 + -2)) {
    uVar19 = puVar25[-1];
    uVar17 = *puVar25;
    *(undefined8 *)(puVar7 + -0xb0) = 0;
    *(undefined8 *)(puVar7 + -0xa8) = 0;
    uVar23 = /*System.Collections.Generic.KeyValuePair<object, EventInstance>$$.ctor*/ func_0x023181f4(puVar7 + -0xb0,uVar19,uVar17,
                             *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x18) + 0xc0) + 0xa0));
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto code_r0x01ec8a9c;
    lVar22 = lVar13 + (long)(int)uVar9 * 0x10;
    uVar12 = (ulong)(uVar9 + 1);
    uVar19 = *(undefined8 *)(puVar7 + -0xb0);
    *(undefined8 *)(lVar22 + 0x28) = *(undefined8 *)(puVar7 + -0xa8);
    *(undefined8 *)(lVar22 + 0x20) = uVar19;
  }
  uVar10 = uVar10 + 1;
  puVar25 = puVar25 + 3;
  if (uVar1 == uVar10) {
    return uVar23;
  }
  goto code_r0x01ec8a24;
}



// ============================================================
// RVA: 0x15bf694 | Atlas.Audio.KartAudio.SetBoosting
// ============================================================

/* WARNING: Possible PIC construction at 0x015bf7c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bf958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bf998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bfab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015c0238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015c0448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bff74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015c044c) */
/* WARNING: Removing unreachable block (ram,0x015c0484) */
/* WARNING: Removing unreachable block (ram,0x015c0488) */
/* WARNING: Removing unreachable block (ram,0x015c0490) */
/* WARNING: Removing unreachable block (ram,0x015c0498) */
/* WARNING: Removing unreachable block (ram,0x015c0460) */
/* WARNING: Removing unreachable block (ram,0x015c0464) */
/* WARNING: Removing unreachable block (ram,0x015c046c) */
/* WARNING: Removing unreachable block (ram,0x015c0474) */
/* WARNING: Removing unreachable block (ram,0x015c04a4) */
/* WARNING: Removing unreachable block (ram,0x015c04b8) */
/* WARNING: Removing unreachable block (ram,0x015c0480) */
/* WARNING: Removing unreachable block (ram,0x015c023c) */
/* WARNING: Removing unreachable block (ram,0x015c0240) */
/* WARNING: Removing unreachable block (ram,0x015c0248) */
/* WARNING: Removing unreachable block (ram,0x015c0264) */
/* WARNING: Removing unreachable block (ram,0x015c027c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f0c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f34) */
/* WARNING: Removing unreachable block (ram,0x01ec9f40) */
/* WARNING: Removing unreachable block (ram,0x01ec9f48) */
/* WARNING: Removing unreachable block (ram,0x01ec9f64) */
/* WARNING: Removing unreachable block (ram,0x01ec9f6c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f78) */
/* WARNING: Removing unreachable block (ram,0x01ec9f80) */
/* WARNING: Removing unreachable block (ram,0x01ec9fac) */
/* WARNING: Removing unreachable block (ram,0x01ec9f8c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f98) */
/* WARNING: Removing unreachable block (ram,0x01ec9fbc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fd4) */
/* WARNING: Removing unreachable block (ram,0x01ec9fdc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fec) */
/* WARNING: Removing unreachable block (ram,0x01ec9ff8) */
/* WARNING: Removing unreachable block (ram,0x01eca008) */
/* WARNING: Removing unreachable block (ram,0x01eca00c) */
/* WARNING: Removing unreachable block (ram,0x01eca01c) */
/* WARNING: Removing unreachable block (ram,0x01eca030) */
/* WARNING: Removing unreachable block (ram,0x01eca038) */
/* WARNING: Removing unreachable block (ram,0x01eca058) */
/* WARNING: Removing unreachable block (ram,0x01eca060) */
/* WARNING: Removing unreachable block (ram,0x01eca06c) */
/* WARNING: Removing unreachable block (ram,0x01eca074) */
/* WARNING: Removing unreachable block (ram,0x01eca0a0) */
/* WARNING: Removing unreachable block (ram,0x01eca080) */
/* WARNING: Removing unreachable block (ram,0x01eca08c) */
/* WARNING: Removing unreachable block (ram,0x01eca0ac) */
/* WARNING: Removing unreachable block (ram,0x01eca10c) */
/* WARNING: Removing unreachable block (ram,0x01eca148) */
/* WARNING: Removing unreachable block (ram,0x01eca150) */
/* WARNING: Removing unreachable block (ram,0x01eca160) */
/* WARNING: Removing unreachable block (ram,0x01eca168) */
/* WARNING: Removing unreachable block (ram,0x01eca174) */
/* WARNING: Removing unreachable block (ram,0x01eca110) */
/* WARNING: Removing unreachable block (ram,0x01eca118) */
/* WARNING: Removing unreachable block (ram,0x01eca124) */
/* WARNING: Removing unreachable block (ram,0x01eca12c) */
/* WARNING: Removing unreachable block (ram,0x01eca188) */
/* WARNING: Removing unreachable block (ram,0x01eca190) */
/* WARNING: Removing unreachable block (ram,0x01eca1b0) */
/* WARNING: Removing unreachable block (ram,0x01eca1bc) */
/* WARNING: Removing unreachable block (ram,0x01eca0c4) */
/* WARNING: Removing unreachable block (ram,0x01eca1e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0cc) */
/* WARNING: Removing unreachable block (ram,0x01eca1ec) */
/* WARNING: Removing unreachable block (ram,0x01eca1f8) */
/* WARNING: Removing unreachable block (ram,0x01eca250) */
/* WARNING: Removing unreachable block (ram,0x01eca298) */
/* WARNING: Removing unreachable block (ram,0x01eca270) */
/* WARNING: Removing unreachable block (ram,0x01eca2b0) */
/* WARNING: Removing unreachable block (ram,0x01eca278) */
/* WARNING: Removing unreachable block (ram,0x01eca2b4) */
/* WARNING: Removing unreachable block (ram,0x01eca2e8) */
/* WARNING: Removing unreachable block (ram,0x01eca2cc) */
/* WARNING: Removing unreachable block (ram,0x01eca284) */
/* WARNING: Removing unreachable block (ram,0x01eca29c) */
/* WARNING: Removing unreachable block (ram,0x01eca0d8) */
/* WARNING: Removing unreachable block (ram,0x01eca0e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0ec) */
/* WARNING: Removing unreachable block (ram,0x015bf99c) */
/* WARNING: Removing unreachable block (ram,0x015bf95c) */
/* WARNING: Removing unreachable block (ram,0x015bff78) */
/* WARNING: Removing unreachable block (ram,0x015bff7c) */
/* WARNING: Removing unreachable block (ram,0x015bff94) */
/* WARNING: Removing unreachable block (ram,0x015bff9c) */
/* WARNING: Removing unreachable block (ram,0x015bffa4) */
/* WARNING: Removing unreachable block (ram,0x015bffcc) */
/* WARNING: Removing unreachable block (ram,0x015bfff0) */
/* WARNING: Removing unreachable block (ram,0x01ec8614) */
/* WARNING: Removing unreachable block (ram,0x01ec863c) */
/* WARNING: Removing unreachable block (ram,0x01ec8664) */
/* WARNING: Removing unreachable block (ram,0x01ec867c) */
/* WARNING: Removing unreachable block (ram,0x01ec86a0) */
/* WARNING: Removing unreachable block (ram,0x01ec86c0) */
/* WARNING: Removing unreachable block (ram,0x01ec86cc) */
/* WARNING: Removing unreachable block (ram,0x01ec870c) */
/* WARNING: Removing unreachable block (ram,0x01ec8710) */
/* WARNING: Removing unreachable block (ram,0x01ec8734) */
/* WARNING: Removing unreachable block (ram,0x01ec87d0) */
/* WARNING: Removing unreachable block (ram,0x01ec875c) */
/* WARNING: Removing unreachable block (ram,0x01ec877c) */
/* WARNING: Removing unreachable block (ram,0x01ec8788) */
/* WARNING: Removing unreachable block (ram,0x01ec87e8) */
/* WARNING: Removing unreachable block (ram,0x01ec87ec) */
/* WARNING: Removing unreachable block (ram,0x01ec8810) */
/* WARNING: Removing unreachable block (ram,0x01ec881c) */
/* WARNING: Removing unreachable block (ram,0x01ec8828) */
/* WARNING: Removing unreachable block (ram,0x01ec8838) */
/* WARNING: Removing unreachable block (ram,0x01ec8840) */
/* WARNING: Removing unreachable block (ram,0x01ec8888) */
/* WARNING: Removing unreachable block (ram,0x01ec8894) */
/* WARNING: Removing unreachable block (ram,0x01ec8844) */
/* WARNING: Removing unreachable block (ram,0x01ec8854) */
/* WARNING: Removing unreachable block (ram,0x01ec887c) */
/* WARNING: Removing unreachable block (ram,0x01ec878c) */
/* WARNING: Removing unreachable block (ram,0x01ec87ac) */
/* WARNING: Removing unreachable block (ram,0x01ec87d4) */
/* WARNING: Removing unreachable block (ram,0x01ec86d0) */
/* WARNING: Removing unreachable block (ram,0x01ec86f8) */
/* WARNING: Removing unreachable block (ram,0x01ec86f0) */
/* WARNING: Removing unreachable block (ram,0x01ec86fc) */
/* WARNING: Removing unreachable block (ram,0x01ec864c) */
/* WARNING: Removing unreachable block (ram,0x01ec8620) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Audio_KartAudio__SetBoosting
                (float param_1,undefined1 param_2 [16],undefined4 param_3,ulong param_4,
                undefined8 param_5,undefined8 param_6,long param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong extraout_x1;
  undefined8 uVar19;
  undefined8 *extraout_x8;
  long lVar20;
  long lVar21;
  undefined8 unaff_x21;
  ulong uVar22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 ***pppuVar23;
  undefined1 *puVar24;
  undefined *puVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong unaff_d9;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 **ppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  uVar13 = (ulong)(uint)param_1;
  uVar9 = param_4;
  if ((bRam0000000003eb52c3 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    uVar9 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52c3 = 1;
  }
  if ((param_1 <= *(float *)(param_4 + 0x40)) || (*(char *)(param_4 + 0x38) != '\0')) {
LAB_015bf7e4:
    *(float *)(param_4 + 0x40) = param_1;
    return uVar9;
  }
  lVar20 = *(long *)(param_4 + 0x150);
  uVar9 = 0x3d1ff28;
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar21 = 0;
  if (lVar20 != 0) {
    unaff_x23 = 0x3d2fb00;
    lVar20 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar20,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x220),
                             uRam0000000003d2fb00);
    if (lVar20 != 0) {
      unaff_x21 = *(undefined8 *)(param_4 + 0xb8);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_7 = 0;
      /*Core.Audio.AudioEvent$$Play*/ func_0x01638d80((float)*(int *)(param_4 + 0x158),lVar20,unaff_x21,
                      *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1a0));
    }
    lVar21 = *(long *)(param_4 + 0x150);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar21 != 0) {
      uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar21,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2d8),
                               uRam0000000003d2fb00);
      if (uVar10 != 0) {
        lVar20 = *(long *)(param_4 + 0xb8);
        puVar4 = &stack0xffffffffffffffb0;
        puVar24 = &stack0xfffffffffffffff0;
        puVar25 = (undefined *)0x15bf7cc;
        goto code_r0x01638d28;
      }
      if (*(long *)(param_4 + 0x90) != 0) {
        uVar9 = Atlas_Audio_AtlasAudioManager__SpeakBoostPad
                          (*(undefined4 *)(param_4 + 0x60),*(long *)(param_4 + 0x90),param_4,0);
        goto LAB_015bf7e4;
      }
    }
  }
  auVar30 = func_0x00f78af4();
  uVar10 = auVar30._8_8_;
  uVar22 = auVar30._0_8_;
  uStack_80 = 0x3d1ff28;
  puStack_58 = &Atlas_Audio_KartAudio__PlaySurface;
  uVar11 = uVar22;
  uStack_78 = unaff_x21;
  lStack_70 = lVar21;
  uStack_68 = param_4;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb52d3 & 1) == 0) {
    uVar11 = func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb52d3 = 1;
  }
  if (*(char *)(uVar22 + 0x38) == '\0') {
    lVar20 = *(long *)(uVar22 + 0x90);
    if (lVar20 == 0) {
      func_0x00f78af4();
      puVar5 = &uStack_b0;
      uStack_b0 = 0x3d1ff28;
      puStack_88 = &Atlas_Audio_KartAudio__ClearCollisionEventParameters;
      pppuVar23 = &ppuStack_90;
      lVar21 = 0x3eb5000;
      lStack_a8 = lVar20;
      ppuStack_90 = &puStack_60;
      if ((bRam0000000003eb52ca & 1) == 0) {
        uStack_a0 = uVar10;
        uStack_98 = uVar22;
        func_0x00f78a20(0x3d1ff28);
        auVar30._8_8_ = uStack_a0;
        auVar30._0_8_ = uStack_98;
        bRam0000000003eb52ca = 1;
      }
      uStack_a0 = auVar30._8_8_;
      uStack_98 = auVar30._0_8_;
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
        auVar30._8_8_ = uStack_a0;
        auVar30._0_8_ = uStack_98;
      }
      uStack_a0 = auVar30._8_8_;
      uStack_98 = auVar30._0_8_;
      if (extraout_x1 != 0) {
        uVar19 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1a8);
        puVar25 = &UNK_015bf95c;
        uVar10 = extraout_x1;
        uVar11 = extraout_x1;
        uVar22 = 0x3d1ff28;
code_r0x01638fc8:
        uStack_a0 = auVar30._8_8_;
        uStack_98 = auVar30._0_8_;
        *(ulong *)((long)puVar5 + -0x40) = unaff_d9;
        *(ulong *)((long)puVar5 + -0x38) = uVar13;
        *(ulong *)((long)puVar5 + -0x30) = uVar9;
        *(long *)((long)puVar5 + -0x28) = lVar21;
        *(ulong *)((long)puVar5 + -0x20) = uVar22;
        *(ulong *)((long)puVar5 + -0x18) = uVar11;
        *(undefined1 ****)((long)puVar5 + -0x10) = pppuVar23;
        *(undefined **)((long)puVar5 + -8) = puVar25;
        iVar7 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(uVar10 + 0x28,0,0,0);
        if (iVar7 != 0) {
          /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(0,uVar10 + 0x28,uVar19,0,0);
        }
        return uVar10;
      }
      puVar25 = &Atlas_Audio_KartAudio__StopScraping;
      uVar11 = func_0x00f78af4();
      auVar30 = ZEXT816(0x3d1ff28) << 0x40;
      puVar2 = &uStack_b0;
      do {
        puVar5 = (undefined8 *)((long)puVar2 + -0x30);
        *(ulong *)((long)puVar2 + -0x30) = uVar9;
        *(long *)((long)puVar2 + -0x28) = lVar21;
        *(long *)((long)puVar2 + -0x20) = auVar30._8_8_;
        *(long *)((long)puVar2 + -0x18) = auVar30._0_8_;
        *(undefined1 ****)((long)puVar2 + -0x10) = pppuVar23;
        *(undefined **)((long)puVar2 + -8) = puVar25;
        pppuVar23 = (undefined1 ***)((long)puVar2 + -0x10);
        lVar21 = 0x3d1ff28;
        if ((bRam0000000003eb52cc & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52cc = 1;
        }
        lVar20 = *(long *)(uVar11 + 0x150);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar20 != 0) {
          uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar20,*(undefined8 *)
                                           (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x238),
                                   uRam0000000003d2fb00);
          if (uVar10 == 0) {
            *(undefined4 *)(uVar11 + 0x70) = 0xbf800000;
            return 0;
          }
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          auVar30._8_8_ = uStack_a0;
          auVar30._0_8_ = uStack_98;
          uVar19 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1c8);
          puVar25 = &UNK_015bfab4;
          uVar22 = uVar10;
          goto code_r0x01638fc8;
        }
        auVar30 = func_0x00f78af4();
        lVar20 = auVar30._8_8_;
        uVar22 = auVar30._0_8_;
        *(ulong *)((long)puVar2 + -0x90) = unaff_d9;
        *(ulong *)((long)puVar2 + -0x88) = uVar13;
        *(undefined8 *)((long)puVar2 + -0x80) = unaff_x26;
        *(undefined8 *)((long)puVar2 + -0x78) = unaff_x25;
        *(undefined8 *)((long)puVar2 + -0x70) = unaff_x24;
        *(ulong *)((long)puVar2 + -0x68) = unaff_x23;
        *(ulong *)((long)puVar2 + -0x60) = uVar9;
        *(undefined8 *)((long)puVar2 + -0x58) = 0x3d1ff28;
        *(undefined8 *)((long)puVar2 + -0x50) = 0;
        *(ulong *)((long)puVar2 + -0x48) = uVar11;
        *(undefined1 ****)((long)puVar2 + -0x40) = pppuVar23;
        *(undefined **)((long)puVar2 + -0x38) = &Atlas_Audio_KartAudio__OnCollisionEnter;
        lVar21 = 0x3eb5000;
        uVar10 = uVar22;
        if ((bRam0000000003eb52ce & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d578a8);
          uVar10 = func_0x00f78a20(0x3d23990);
          bRam0000000003eb52ce = 1;
        }
        fVar27 = _UNK_033f83fc;
        if (*(char *)(uVar22 + 0x50) == '\0') {
          return uVar10;
        }
        if (*(char *)(uVar22 + 0x38) != '\0') {
          return uVar10;
        }
        if (*(long *)(uVar22 + 0x90) != 0) {
          if (*(char *)(*(long *)(uVar22 + 0x90) + 0xcd) == '\0') {
            return uVar10;
          }
          if (*(float *)(uVar22 + 0x68) <= _UNK_033f83fc) {
            return uVar10;
          }
          if (*(int *)(lVar20 + 0x20) == 5) {
            return uVar10;
          }
          *(undefined4 *)(uVar22 + 0x68) = 0;
          if ((*(long *)(lVar20 + 8) != 0) &&
             (lVar12 = /*UnityEngine.Collision$$get_gameObject*/ func_0x0329ee78(*(long *)(lVar20 + 8),0), lVar12 != 0)) {
            lVar21 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar12,uRam0000000003d578a8);
            if (*(long *)(lVar20 + 8) != 0) {
              uVar26 = /*UnityEngine.Collision$$get_relativeVelocity*/ func_0x0329ede4(*(long *)(lVar20 + 8),0);
              *(undefined4 *)((long)puVar2 + -0xa0) = uVar26;
              *(float *)((long)puVar2 + -0x9c) = fVar27;
              *(undefined4 *)((long)puVar2 + -0x98) = param_3;
              uVar26 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc((undefined1 *)((long)puVar2 + -0xa0),0);
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              fVar27 = (float)/*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar26,*(undefined4 *)
                                                      (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8),0
                                             );
              uVar13 = (ulong)(uint)fVar27;
              fVar29 = *(float *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8);
              unaff_d9 = (ulong)(uint)fVar29;
              uVar9 = (ulong)((*(uint *)(lVar20 + 0x20) & 0xfffffffe) == 2);
              unaff_x25 = 0x3d23990;
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar21,0);
              if ((int)uVar10 == 0) {
                unaff_x23 = 1;
              }
              else {
                if (lVar21 == 0) goto code_r0x015bfd5c;
                unaff_x23 = (ulong)*(uint *)(lVar21 + 0x1c);
              }
              if (*(int *)(lVar20 + 0x20) == 0) {
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar21,0);
                if ((int)uVar10 != 0) {
                  if (lVar21 == 0) goto code_r0x015bfd5c;
                  fVar28 = 3.0;
                  if ((*(uint *)(lVar21 + 0x1c) & 0xfffffffe) == 8) goto code_r0x015bfce0;
                }
              }
              if (3 < *(int *)(lVar20 + 0x20) - 1U) {
                return uVar10;
              }
              fVar28 = (fVar27 / fVar29) * 3.0;
code_r0x015bfce0:
              uVar26 = 0;
              if (*(char *)(lVar20 + 0x1c) != '\0') {
                uVar26 = 0xbf800000;
              }
              *(undefined4 *)(uVar22 + 0x70) = uVar26;
              /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(fVar28,0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar21,0,0);
              uVar9 = Atlas_Audio_KartAudio__PlayCollision(uVar22,unaff_x23);
              return uVar9;
            }
          }
        }
code_r0x015bfd5c:
        uVar11 = func_0x00f78af4();
        *(undefined1 **)((long)puVar2 + -0xc0) = (undefined1 *)((long)puVar2 + -0x40);
        *(undefined **)((long)puVar2 + -0xb8) = &Atlas_Audio_KartAudio__OnCollisionExit;
        if ((*(char *)(uVar11 + 0x50) == '\0') || (*(char *)(uVar11 + 0x38) != '\0')) {
          return uVar11;
        }
        if (*(long *)(uVar11 + 0x90) == 0) {
          auVar30 = func_0x00f78af4();
          uVar13 = auVar30._8_8_;
          uVar11 = auVar30._0_8_;
          puVar6 = (undefined1 *)((long)puVar2 + -0xf0);
          puVar3 = (undefined1 *)((long)puVar2 + -0xf0);
          *(ulong *)((long)puVar2 + -0xf0) = uVar9;
          *(long *)((long)puVar2 + -0xe8) = lVar21;
          *(long *)((long)puVar2 + -0xe0) = lVar20;
          *(ulong *)((long)puVar2 + -0xd8) = uVar22;
          *(undefined1 **)((long)puVar2 + -0xd0) = (undefined1 *)((long)puVar2 + -0xc0);
          *(undefined **)((long)puVar2 + -200) = &Atlas_Audio_KartAudio__OnTriggerEnter;
          puVar24 = (undefined1 *)((long)puVar2 + -0xd0);
          uVar19 = 0x3eb5000;
          uVar10 = uVar11;
          if ((bRam0000000003eb52cf & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            func_0x00f78a20(0x3d2e048);
            func_0x00f78a20(0x3d2e050);
            func_0x00f78a20(0x3d577c8);
            func_0x00f78a20(0x3d578c0);
            uVar10 = func_0x00f78a20(0x3d23990);
            bRam0000000003eb52cf = 1;
          }
          if (*(char *)(uVar11 + 0x50) == '\0') {
            return uVar10;
          }
          if (*(char *)(uVar11 + 0x38) != '\0') {
            return uVar10;
          }
          if (*(float *)(uVar11 + 100) <= _UNK_033f8140) {
            return uVar10;
          }
          *(undefined4 *)(uVar11 + 100) = 0;
          if ((uVar13 != 0) && (lVar20 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar13,0), lVar20 != 0)) {
            uVar19 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar20,uRam0000000003d578c0);
            lVar20 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar13,0);
            if (lVar20 == 0) goto code_r0x015c0060;
            uVar13 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar20,uRam0000000003d577c8);
            uVar10 = 0x3d23990;
            uVar22 = 0x3d23990;
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar19,0);
            if (iVar7 != 0) {
              puVar24 = *(undefined1 **)((long)puVar2 + -0xd0);
              puVar25 = *(undefined **)((long)puVar2 + -200);
              uVar13 = *(ulong *)((long)puVar2 + -0xe0);
              puVar3 = (undefined1 *)((long)puVar2 + -0xc0);
              uVar9 = *(ulong *)((long)puVar2 + -0xf0);
              uVar19 = *(undefined8 *)((long)puVar2 + -0xe8);
              uVar22 = uVar11;
              uVar11 = *(ulong *)((long)puVar2 + -0xd8);
              goto code_r0x015c0064;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar14 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar13,0);
            if ((int)uVar14 == 0) {
              return uVar14;
            }
            uVar9 = uVar10;
            if (uVar13 == 0) goto code_r0x015c0060;
            iVar7 = *(int *)(uVar13 + 0x60);
            if (iVar7 == 0) {
              if (*(char *)(uVar13 + 0x68) != '\0') {
                return uVar14;
              }
              uVar9 = uVar22;
              if (*(long *)(uVar11 + 0x90) == 0) goto code_r0x015c0060;
              if (*(char *)(*(long *)(uVar11 + 0x90) + 0xce) == '\0') {
                return uVar14;
              }
              lVar20 = *(long *)(uVar11 + 0x148);
              if (lVar20 == 0) goto code_r0x015c0060;
              puVar25 = &UNK_015bff78;
code_r0x01ec8898:
              *(undefined1 **)(puVar6 + -0x10) = puVar24;
              *(undefined **)(puVar6 + -8) = puVar25;
              if (lVar20 != 0) {
                uVar8 = (*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(uRam0000000003d2e050 + 0x18) + 0xc0) + 0x40
                                    ))();
                return (ulong)(~uVar8 >> 0x1f);
              }
              uVar9 = uRam0000000003d2e050;
              auVar30 = func_0x00f78af4(0,uVar13);
              lVar20 = auVar30._0_8_;
              *(undefined8 *)(puVar6 + -0x50) = unaff_x24;
              *(ulong *)(puVar6 + -0x48) = unaff_x23;
              *(ulong *)(puVar6 + -0x40) = uVar10;
              *(undefined8 *)(puVar6 + -0x38) = uVar19;
              *(ulong *)(puVar6 + -0x30) = uVar13;
              *(ulong *)(puVar6 + -0x28) = uVar11;
              *(undefined1 **)(puVar6 + -0x20) = puVar6 + -0x10;
              *(undefined **)(puVar6 + -0x18) =
                   &System_Collections_Generic_Dictionary_object__EventInstance___ContainsValue;
              plVar15 = (long *)(*(code *)**(undefined8 **)
                                            (*(long *)(*(long *)(uVar9 + 0x18) + 0xc0) + 0x68))();
              iVar7 = *(int *)(lVar20 + 0x20);
              if (iVar7 < 1) {
                return 0;
              }
              lVar21 = 0;
              uVar13 = 0;
              goto code_r0x01ec8914;
            }
            if (iVar7 == 2) {
              if (*(char *)(uVar13 + 0x50) != '\0') {
                return uVar14;
              }
              uVar9 = uVar22;
              if (*(long *)(uVar11 + 0x90) == 0) goto code_r0x015c0060;
              if (*(char *)(*(long *)(uVar11 + 0x90) + 0xd2) == '\0') {
                return uVar14;
              }
              lVar20 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar13,0);
              *(undefined8 *)((long)puVar2 + -0xf0) = *(undefined8 *)((long)puVar2 + -0xf0);
              *(undefined8 *)((long)puVar2 + -0xe8) = *(undefined8 *)((long)puVar2 + -0xe8);
              *(undefined8 *)((long)puVar2 + -0xe0) = *(undefined8 *)((long)puVar2 + -0xe0);
              *(undefined8 *)((long)puVar2 + -0xd8) = *(undefined8 *)((long)puVar2 + -0xd8);
              *(undefined8 *)((long)puVar2 + -0xd0) = *(undefined8 *)((long)puVar2 + -0xd0);
              *(undefined8 *)((long)puVar2 + -200) = *(undefined8 *)((long)puVar2 + -200);
              if ((bRam0000000003eb4876 & 1) == 0) {
                func_0x00f78a20(0x3d1ff30,lVar20,0);
                func_0x00f78a20(0x3d65d08);
                bRam0000000003eb4876 = 1;
              }
              uVar10 = *(ulong *)(uVar13 + 0xb0);
              if (uVar10 == 0) {
                uVar9 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*(undefined8 *)(uVar13 + 0x48),/*STR('')*/ uRam0000000003d65d08,0);
                if ((uVar9 & 1) == 0) {
                  uVar10 = *(ulong *)(uVar13 + 0xb0);
                }
                else {
                  uVar19 = *(undefined8 *)(uVar13 + 0x48);
                  uVar10 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
                  uVar9 = /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar10,uVar19,0,0,0);
                  *(ulong *)(uVar13 + 0xb0) = uVar10;
                }
                if (uVar10 == 0) {
                  return uVar9;
                }
              }
              puVar24 = *(undefined1 **)((long)puVar2 + -0xd0);
              puVar25 = *(undefined **)((long)puVar2 + -200);
              lVar21 = *(long *)((long)puVar2 + -0xe0);
              param_4 = *(ulong *)((long)puVar2 + -0xd8);
              puVar4 = (undefined1 *)((long)puVar2 + -0xc0);
              goto code_r0x01638d28;
            }
            if (iVar7 != 1) {
              return uVar14;
            }
            if (*(long *)(uVar11 + 0x90) != 0) {
              if (*(char *)(*(long *)(uVar11 + 0x90) + 0xd1) != '\0') {
                fVar27 = *(float *)(uVar11 + 0x74) * 100.0;
                *(float *)(uVar13 + 0xc0) = fVar27 * _UNK_033f82c0 + _UNK_033f82c4;
                *(float *)(uVar13 + 0xc4) = fVar27;
                return uVar13;
              }
              return uVar14;
            }
          }
code_r0x015c0060:
          puVar25 = &Atlas_Audio_KartAudio__PickupPickedUp;
          uVar22 = func_0x00f78af4();
code_r0x015c0064:
          *(ulong *)(puVar3 + -0x30) = uVar9;
          *(undefined8 *)(puVar3 + -0x28) = uVar19;
          *(ulong *)(puVar3 + -0x20) = uVar13;
          *(ulong *)(puVar3 + -0x18) = uVar11;
          *(undefined1 **)(puVar3 + -0x10) = puVar24;
          *(undefined **)(puVar3 + -8) = puVar25;
          uVar13 = uVar22;
          if ((bRam0000000003eb52d1 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            uVar13 = func_0x00f78a20(0x3d2fb00);
            bRam0000000003eb52d1 = 1;
          }
          if (*(char *)(uVar22 + 0x38) != '\0') {
            return uVar13;
          }
          lVar20 = *(long *)(uVar22 + 0x150);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if ((lVar20 != 0) &&
             (uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar20,*(undefined8 *)
                                               (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x230),
                                       uRam0000000003d2fb00), uVar10 != 0)) {
            lVar20 = *(long *)(uVar22 + 0xb8);
            puVar24 = *(undefined1 **)(puVar3 + -0x10);
            puVar25 = *(undefined **)(puVar3 + -8);
            param_4 = *(ulong *)(puVar3 + -0x18);
            puVar4 = puVar3;
            lVar21 = *(long *)(puVar3 + -0x20);
            goto code_r0x01638d28;
          }
          auVar30 = func_0x00f78af4();
          uVar13 = auVar30._8_8_;
          uVar11 = auVar30._0_8_;
          puVar6 = puVar3 + -0x60;
          *(ulong *)(puVar3 + -0x60) = uVar9;
          *(undefined8 *)(puVar3 + -0x58) = 0x3d1ff28;
          *(long *)(puVar3 + -0x50) = lVar20;
          *(ulong *)(puVar3 + -0x48) = uVar22;
          *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x38) = &Atlas_Audio_KartAudio__OnTriggerExit;
          puVar24 = puVar3 + -0x40;
          uVar19 = 0x3eb5000;
          uVar10 = uVar11;
          if ((bRam0000000003eb52d0 & 1) == 0) {
            func_0x00f78a20(0x3d2e050);
            func_0x00f78a20(0x3d2e058);
            func_0x00f78a20(0x3d2e060);
            func_0x00f78a20(0x3d577c8);
            uVar10 = func_0x00f78a20(0x3d23990);
            bRam0000000003eb52d0 = 1;
          }
          if ((*(char *)(uVar11 + 0x50) == '\0') || (*(char *)(uVar11 + 0x38) != '\0')) {
            return uVar10;
          }
          if ((uVar13 != 0) && (lVar20 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar13,0), lVar20 != 0)) {
            uVar13 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar20,uRam0000000003d577c8);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar13,0);
            if ((int)uVar10 == 0) {
              return uVar10;
            }
            if (uVar13 != 0) {
              if (*(int *)(uVar13 + 0x60) != 0) {
                return uVar10;
              }
              if (*(long *)(uVar11 + 0x90) != 0) {
                if (*(char *)(*(long *)(uVar11 + 0x90) + 0xce) == '\0') {
                  return uVar10;
                }
                lVar20 = *(long *)(uVar11 + 0x148);
                if (lVar20 != 0) {
                  puVar25 = &UNK_015c023c;
                  uVar10 = uVar9;
                  goto code_r0x01ec8898;
                }
              }
            }
          }
          uVar22 = func_0x00f78af4();
          *(ulong *)(puVar3 + -0x90) = uVar9;
          *(undefined8 *)(puVar3 + -0x88) = 0x3eb5000;
          *(ulong *)(puVar3 + -0x80) = uVar13;
          *(ulong *)(puVar3 + -0x78) = uVar11;
          *(undefined1 **)(puVar3 + -0x70) = puVar24;
          *(undefined **)(puVar3 + -0x68) = &Atlas_Audio_KartAudio__PlayVFXAudio;
          uVar13 = uVar22;
          if ((bRam0000000003eb52d4 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            uVar13 = func_0x00f78a20(0x3d2fb00);
            bRam0000000003eb52d4 = 1;
          }
          if (*(char *)(uVar22 + 0x38) == '\0') {
            lVar20 = *(long *)(uVar22 + 0x150);
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (lVar20 == 0) {
              auVar30 = func_0x00f78af4();
              lVar20 = auVar30._8_8_;
              param_4 = auVar30._0_8_;
              puVar4 = puVar3 + -0xd0;
              *(undefined8 *)(puVar3 + -0xd0) = unaff_x24;
              *(ulong *)(puVar3 + -200) = unaff_x23;
              *(ulong *)(puVar3 + -0xc0) = uVar9;
              *(undefined8 *)(puVar3 + -0xb8) = 0x3d1ff28;
              *(undefined8 *)(puVar3 + -0xb0) = 0;
              *(ulong *)(puVar3 + -0xa8) = uVar22;
              *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x70;
              *(undefined **)(puVar3 + -0x98) = &Atlas_Audio_KartAudio__ExitPortal;
              puVar24 = puVar3 + -0xa0;
              if ((bRam0000000003eb52d6 & 1) == 0) {
                func_0x00f78a20(0x3d1ff28);
                func_0x00f78a20(0x3d2fb00);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb52d6 = 1;
              }
              lVar21 = *(long *)(param_4 + 0x150);
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (lVar21 != 0) {
                uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar21,*(undefined8 *)
                                                 (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x278),
                                         uRam0000000003d2fb00);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar9 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar20,0,0);
                if ((uVar9 & 1) == 0) {
                  lVar20 = *(long *)(param_4 + 0xb8);
                }
                if (uVar10 != 0) {
                  puVar25 = &UNK_015c044c;
                  lVar21 = lVar20;
                  goto code_r0x01638d28;
                }
              }
              uVar9 = func_0x00f78af4();
              return uVar9;
            }
            uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar20,*(undefined8 *)
                                             (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x250),
                                     uRam0000000003d2fb00);
            uVar13 = 0;
            if (uVar10 != 0) {
              lVar20 = *(long *)(uVar22 + 0xb8);
              puVar24 = *(undefined1 **)(puVar3 + -0x70);
              puVar25 = *(undefined **)(puVar3 + -0x68);
              param_4 = *(ulong *)(puVar3 + -0x78);
              puVar4 = puVar3 + -0x60;
              lVar21 = *(long *)(puVar3 + -0x80);
              goto code_r0x01638d28;
            }
          }
          return uVar13;
        }
        if (*(char *)(*(long *)(uVar11 + 0x90) + 0xcd) == '\0') {
          return uVar11;
        }
        pppuVar23 = *(undefined1 ****)((long)puVar2 + -0xc0);
        puVar25 = *(undefined **)((long)puVar2 + -0xb8);
        puVar2 = (undefined8 *)((long)puVar2 + -0xb0);
      } while( true );
    }
    if ((*(char *)(lVar20 + 0xc9) != '\0') &&
       (iVar7 = auVar30._8_4_, *(int *)(uVar22 + 0xb0) != iVar7)) {
      *(int *)(uVar22 + 0xb0) = iVar7;
      if (iVar7 == 0) {
        uVar10 = (ulong)(*(byte *)(uVar22 + 0x39) ^ 1);
      }
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Core.Audio.AudioManager$$SetGlobalParameter*/ func_0x01639e60((float)(int)uVar10,lVar20,
                      *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1e8),0,0);
      uVar10 = *(ulong *)(uVar22 + 0xe0);
      uVar11 = 0;
      if (uVar10 != 0) {
        lVar20 = *(long *)(uVar22 + 0xb8);
        puVar4 = &stack0xffffffffffffffb0;
        param_4 = uStack_68;
        lVar21 = lStack_70;
        puVar24 = puStack_60;
        puVar25 = puStack_58;
code_r0x01638d28:
        *(long *)(puVar4 + -0x20) = lVar21;
        *(ulong *)(puVar4 + -0x18) = param_4;
        *(undefined1 **)(puVar4 + -0x10) = puVar24;
        *(undefined **)(puVar4 + -8) = puVar25;
        /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar10,lVar20,0);
        return uVar10;
      }
    }
  }
  return uVar11;
code_r0x01ec8914:
  lVar12 = *(long *)(lVar20 + 0x18);
  if (lVar12 == 0) {
code_r0x01ec898c:
    func_0x00f78af4();
code_r0x01ec8990:
    uVar19 = func_0x00f78b24();
    auVar31 = func_0x00f78ac0(uVar19,0);
    lVar12 = auVar31._8_8_;
    lVar16 = auVar31._0_8_;
    *(undefined8 *)(puVar6 + -0xa0) = unaff_x26;
    *(undefined8 *)(puVar6 + -0x98) = unaff_x25;
    *(undefined8 *)(puVar6 + -0x90) = unaff_x24;
    *(ulong *)(puVar6 + -0x88) = uVar13;
    *(long *)(puVar6 + -0x80) = lVar21;
    *(long **)(puVar6 + -0x78) = plVar15;
    *(undefined1 (*) [16])(puVar6 + -0x70) = auVar30;
    *(undefined1 **)(puVar6 + -0x60) = puVar6 + -0x20;
    *(undefined **)(puVar6 + -0x58) =
         &System_Collections_Generic_Dictionary_object__EventInstance___CopyTo;
    if (lVar12 == 0) goto code_r0x01ec8b28;
    uVar8 = (uint)uVar9;
    if (((int)uVar8 < 0) || (*(int *)(lVar12 + 0x18) < (int)uVar8)) goto code_r0x01ec8aa8;
    if (lVar16 == 0) goto code_r0x01ec8b24;
    uVar13 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_7 + 0x18) + 0xc0) + 0x90))
                       (lVar16);
    if ((int)(*(int *)(lVar12 + 0x18) - uVar8) < (int)uVar13) {
      func_0x00f78a24(0x3d1fce8);
      uVar19 = func_0x00f78aec();
      uVar17 = func_0x00f78a24(0x3d6bc10);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar19,uVar17,0);
      goto code_r0x01ec8b8c;
    }
    uVar1 = *(uint *)(lVar16 + 0x20);
    if ((int)uVar1 < 1) {
      return uVar13;
    }
    lVar20 = *(long *)(lVar16 + 0x18);
    if (lVar20 == 0) goto code_r0x01ec8b24;
    uVar10 = 0;
    puVar2 = (undefined8 *)(lVar20 + 0x30);
    goto code_r0x01ec8a24;
  }
  if (*(uint *)(lVar12 + 0x18) <= uVar13) goto code_r0x01ec8990;
  if (-1 < *(int *)(lVar12 + lVar21 + 0x20)) {
    if (plVar15 == (long *)0x0) goto code_r0x01ec898c;
    param_7 = *(long *)(*plVar15 + 0x1c0);
    uVar9 = auVar30._8_8_;
    uVar10 = (**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(lVar12 + lVar21 + 0x30));
    if ((uVar10 & 1) != 0) {
      return 1;
    }
    iVar7 = *(int *)(lVar20 + 0x20);
  }
  uVar13 = uVar13 + 1;
  lVar21 = lVar21 + 0x18;
  if ((long)iVar7 <= (long)uVar13) {
    return 0;
  }
  goto code_r0x01ec8914;
code_r0x01ec8a24:
  uVar8 = (uint)uVar9;
  if (*(uint *)(lVar20 + 0x18) <= uVar10) {
code_r0x01ec8a9c:
    uVar19 = func_0x00f78b24();
    func_0x00f78ac0(uVar19,0);
code_r0x01ec8aa8:
    *(uint *)(puVar6 + -0xb0) = uVar8;
    uVar19 = func_0x00f78a24(0x3d22910);
    uVar19 = func_0x00f78ae0(uVar19,puVar6 + -0xb0);
    func_0x00f78a24(0x3d1fcf8);
    lVar12 = func_0x00f78aec();
    uVar17 = func_0x00f78a24(0x3d79a60);
    uVar18 = func_0x00f78a24(0x3d6de28);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(lVar12,uVar17,uVar19,uVar18,0);
    uVar19 = func_0x00f78a24(0x3d2f4b0);
    func_0x00f78ac0(lVar12,uVar19);
code_r0x01ec8b24:
    func_0x00f78af4();
    lVar20 = lVar12;
code_r0x01ec8b28:
    func_0x00f78a24(0x3d1fcf0);
    uVar19 = func_0x00f78aec();
    uVar17 = func_0x00f78a24(0x3d77d18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar19,uVar17,0);
    lVar12 = lVar20;
code_r0x01ec8b8c:
    uVar17 = func_0x00f78a24(0x3d2f4b0);
    auVar30 = func_0x00f78ac0(uVar19,uVar17);
    *(long *)(puVar6 + -0xd0) = lVar12;
    *(undefined8 *)(puVar6 + -200) = uVar19;
    *(undefined1 **)(puVar6 + -0xc0) = puVar6 + -0x60;
    *(undefined **)(puVar6 + -0xb8) =
         &System_Collections_Generic_Dictionary_object__EventInstance___GetEnumerator;
    *(undefined8 *)(puVar6 + -0xe0) = 0;
    *(undefined8 *)(puVar6 + -0xf8) = 0;
    *(undefined8 *)(puVar6 + -0x100) = 0;
    *(undefined8 *)(puVar6 + -0xe8) = 0;
    *(undefined8 *)(puVar6 + -0xf0) = 0;
    uVar9 = /*System.Collections.Generic.Dictionary.Enumerator<object, EventInstance>$$.ctor*/ func_0x01fd20e8(puVar6 + -0x100,auVar30._0_8_,2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(auVar30._8_8_ + 0x18) + 0xc0) + 0xb0));
    uVar19 = *(undefined8 *)(puVar6 + -0x100);
    uVar18 = *(undefined8 *)(puVar6 + -0xe8);
    uVar17 = *(undefined8 *)(puVar6 + -0xf0);
    extraout_x8[1] = *(undefined8 *)(puVar6 + -0xf8);
    *extraout_x8 = uVar19;
    extraout_x8[3] = uVar18;
    extraout_x8[2] = uVar17;
    extraout_x8[4] = *(undefined8 *)(puVar6 + -0xe0);
    return uVar9;
  }
  if (-1 < *(int *)(puVar2 + -2)) {
    uVar19 = puVar2[-1];
    uVar17 = *puVar2;
    *(undefined8 *)(puVar6 + -0xb0) = 0;
    *(undefined8 *)(puVar6 + -0xa8) = 0;
    uVar13 = /*System.Collections.Generic.KeyValuePair<object, EventInstance>$$.ctor*/ func_0x023181f4(puVar6 + -0xb0,uVar19,uVar17,
                             *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x18) + 0xc0) + 0xa0));
    if (*(uint *)(lVar12 + 0x18) <= uVar8) goto code_r0x01ec8a9c;
    lVar21 = lVar12 + (long)(int)uVar8 * 0x10;
    uVar9 = (ulong)(uVar8 + 1);
    uVar19 = *(undefined8 *)(puVar6 + -0xb0);
    *(undefined8 *)(lVar21 + 0x28) = *(undefined8 *)(puVar6 + -0xa8);
    *(undefined8 *)(lVar21 + 0x20) = uVar19;
  }
  uVar10 = uVar10 + 1;
  puVar2 = puVar2 + 3;
  if (uVar1 == uVar10) {
    return uVar13;
  }
  goto code_r0x01ec8a24;
}



// ============================================================
// RVA: 0x15bf804 | Atlas.Audio.KartAudio.PlaySurface
// ============================================================

/* WARNING: Possible PIC construction at 0x015bf958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bf998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bfab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015c0238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015c0448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bff74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015c044c) */
/* WARNING: Removing unreachable block (ram,0x015c0484) */
/* WARNING: Removing unreachable block (ram,0x015c0488) */
/* WARNING: Removing unreachable block (ram,0x015c0490) */
/* WARNING: Removing unreachable block (ram,0x015c0498) */
/* WARNING: Removing unreachable block (ram,0x015c0460) */
/* WARNING: Removing unreachable block (ram,0x015c0464) */
/* WARNING: Removing unreachable block (ram,0x015c046c) */
/* WARNING: Removing unreachable block (ram,0x015c0474) */
/* WARNING: Removing unreachable block (ram,0x015c04a4) */
/* WARNING: Removing unreachable block (ram,0x015c04b8) */
/* WARNING: Removing unreachable block (ram,0x015c0480) */
/* WARNING: Removing unreachable block (ram,0x015c023c) */
/* WARNING: Removing unreachable block (ram,0x015c0240) */
/* WARNING: Removing unreachable block (ram,0x015c0248) */
/* WARNING: Removing unreachable block (ram,0x015c0264) */
/* WARNING: Removing unreachable block (ram,0x015c027c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f0c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f34) */
/* WARNING: Removing unreachable block (ram,0x01ec9f40) */
/* WARNING: Removing unreachable block (ram,0x01ec9f48) */
/* WARNING: Removing unreachable block (ram,0x01ec9f64) */
/* WARNING: Removing unreachable block (ram,0x01ec9f6c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f78) */
/* WARNING: Removing unreachable block (ram,0x01ec9f80) */
/* WARNING: Removing unreachable block (ram,0x01ec9fac) */
/* WARNING: Removing unreachable block (ram,0x01ec9f8c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f98) */
/* WARNING: Removing unreachable block (ram,0x01ec9fbc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fd4) */
/* WARNING: Removing unreachable block (ram,0x01ec9fdc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fec) */
/* WARNING: Removing unreachable block (ram,0x01ec9ff8) */
/* WARNING: Removing unreachable block (ram,0x01eca008) */
/* WARNING: Removing unreachable block (ram,0x01eca00c) */
/* WARNING: Removing unreachable block (ram,0x01eca01c) */
/* WARNING: Removing unreachable block (ram,0x01eca030) */
/* WARNING: Removing unreachable block (ram,0x01eca038) */
/* WARNING: Removing unreachable block (ram,0x01eca058) */
/* WARNING: Removing unreachable block (ram,0x01eca060) */
/* WARNING: Removing unreachable block (ram,0x01eca06c) */
/* WARNING: Removing unreachable block (ram,0x01eca074) */
/* WARNING: Removing unreachable block (ram,0x01eca0a0) */
/* WARNING: Removing unreachable block (ram,0x01eca080) */
/* WARNING: Removing unreachable block (ram,0x01eca08c) */
/* WARNING: Removing unreachable block (ram,0x01eca0ac) */
/* WARNING: Removing unreachable block (ram,0x01eca10c) */
/* WARNING: Removing unreachable block (ram,0x01eca148) */
/* WARNING: Removing unreachable block (ram,0x01eca150) */
/* WARNING: Removing unreachable block (ram,0x01eca160) */
/* WARNING: Removing unreachable block (ram,0x01eca168) */
/* WARNING: Removing unreachable block (ram,0x01eca174) */
/* WARNING: Removing unreachable block (ram,0x01eca110) */
/* WARNING: Removing unreachable block (ram,0x01eca118) */
/* WARNING: Removing unreachable block (ram,0x01eca124) */
/* WARNING: Removing unreachable block (ram,0x01eca12c) */
/* WARNING: Removing unreachable block (ram,0x01eca188) */
/* WARNING: Removing unreachable block (ram,0x01eca190) */
/* WARNING: Removing unreachable block (ram,0x01eca1b0) */
/* WARNING: Removing unreachable block (ram,0x01eca1bc) */
/* WARNING: Removing unreachable block (ram,0x01eca0c4) */
/* WARNING: Removing unreachable block (ram,0x01eca1e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0cc) */
/* WARNING: Removing unreachable block (ram,0x01eca1ec) */
/* WARNING: Removing unreachable block (ram,0x01eca1f8) */
/* WARNING: Removing unreachable block (ram,0x01eca250) */
/* WARNING: Removing unreachable block (ram,0x01eca298) */
/* WARNING: Removing unreachable block (ram,0x01eca270) */
/* WARNING: Removing unreachable block (ram,0x01eca2b0) */
/* WARNING: Removing unreachable block (ram,0x01eca278) */
/* WARNING: Removing unreachable block (ram,0x01eca2b4) */
/* WARNING: Removing unreachable block (ram,0x01eca2e8) */
/* WARNING: Removing unreachable block (ram,0x01eca2cc) */
/* WARNING: Removing unreachable block (ram,0x01eca284) */
/* WARNING: Removing unreachable block (ram,0x01eca29c) */
/* WARNING: Removing unreachable block (ram,0x01eca0d8) */
/* WARNING: Removing unreachable block (ram,0x01eca0e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0ec) */
/* WARNING: Removing unreachable block (ram,0x015bf99c) */
/* WARNING: Removing unreachable block (ram,0x015bf95c) */
/* WARNING: Removing unreachable block (ram,0x015bff78) */
/* WARNING: Removing unreachable block (ram,0x015bff7c) */
/* WARNING: Removing unreachable block (ram,0x015bff94) */
/* WARNING: Removing unreachable block (ram,0x015bff9c) */
/* WARNING: Removing unreachable block (ram,0x015bffa4) */
/* WARNING: Removing unreachable block (ram,0x015bffcc) */
/* WARNING: Removing unreachable block (ram,0x015bfff0) */
/* WARNING: Removing unreachable block (ram,0x01ec8614) */
/* WARNING: Removing unreachable block (ram,0x01ec863c) */
/* WARNING: Removing unreachable block (ram,0x01ec8664) */
/* WARNING: Removing unreachable block (ram,0x01ec867c) */
/* WARNING: Removing unreachable block (ram,0x01ec86a0) */
/* WARNING: Removing unreachable block (ram,0x01ec86c0) */
/* WARNING: Removing unreachable block (ram,0x01ec86cc) */
/* WARNING: Removing unreachable block (ram,0x01ec870c) */
/* WARNING: Removing unreachable block (ram,0x01ec8710) */
/* WARNING: Removing unreachable block (ram,0x01ec8734) */
/* WARNING: Removing unreachable block (ram,0x01ec87d0) */
/* WARNING: Removing unreachable block (ram,0x01ec875c) */
/* WARNING: Removing unreachable block (ram,0x01ec877c) */
/* WARNING: Removing unreachable block (ram,0x01ec8788) */
/* WARNING: Removing unreachable block (ram,0x01ec87e8) */
/* WARNING: Removing unreachable block (ram,0x01ec87ec) */
/* WARNING: Removing unreachable block (ram,0x01ec8810) */
/* WARNING: Removing unreachable block (ram,0x01ec881c) */
/* WARNING: Removing unreachable block (ram,0x01ec8828) */
/* WARNING: Removing unreachable block (ram,0x01ec8838) */
/* WARNING: Removing unreachable block (ram,0x01ec8840) */
/* WARNING: Removing unreachable block (ram,0x01ec8888) */
/* WARNING: Removing unreachable block (ram,0x01ec8894) */
/* WARNING: Removing unreachable block (ram,0x01ec8844) */
/* WARNING: Removing unreachable block (ram,0x01ec8854) */
/* WARNING: Removing unreachable block (ram,0x01ec887c) */
/* WARNING: Removing unreachable block (ram,0x01ec878c) */
/* WARNING: Removing unreachable block (ram,0x01ec87ac) */
/* WARNING: Removing unreachable block (ram,0x01ec87d4) */
/* WARNING: Removing unreachable block (ram,0x01ec86d0) */
/* WARNING: Removing unreachable block (ram,0x01ec86f8) */
/* WARNING: Removing unreachable block (ram,0x01ec86f0) */
/* WARNING: Removing unreachable block (ram,0x01ec86fc) */
/* WARNING: Removing unreachable block (ram,0x01ec864c) */
/* WARNING: Removing unreachable block (ram,0x01ec8620) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Audio_KartAudio__PlaySurface
                (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,ulong param_4,
                uint param_5,undefined8 param_6,long param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong extraout_x1;
  undefined8 *extraout_x8;
  long unaff_x19;
  ulong uVar17;
  undefined8 unaff_x20;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 *puVar21;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 **ppuVar22;
  undefined1 *puVar23;
  undefined *unaff_x30;
  undefined *puVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  ulong unaff_d8;
  float fVar28;
  ulong unaff_d9;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  uVar8 = param_4;
  if ((bRam0000000003eb52d3 & 1) == 0) {
    uVar8 = func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb52d3 = 1;
  }
  if (*(char *)(param_4 + 0x38) == '\0') {
    lVar19 = *(long *)(param_4 + 0x90);
    if (lVar19 == 0) {
      func_0x00f78af4();
      puVar4 = &stack0xffffffffffffffa0;
      puStack_38 = &Atlas_Audio_KartAudio__ClearCollisionEventParameters;
      ppuVar22 = &puStack_40;
      lVar19 = 0x3eb5000;
      puStack_40 = &stack0xfffffffffffffff0;
      if ((bRam0000000003eb52ca & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        bRam0000000003eb52ca = 1;
      }
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (extraout_x1 != 0) {
        uVar16 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1a8);
        puVar24 = &UNK_015bf95c;
        uVar8 = extraout_x1;
        uVar10 = extraout_x1;
        uVar9 = 0x3d1ff28;
code_r0x01638fc8:
        *(ulong *)(puVar4 + -0x40) = unaff_d9;
        *(ulong *)(puVar4 + -0x38) = unaff_d8;
        *(ulong *)(puVar4 + -0x30) = unaff_x22;
        *(long *)(puVar4 + -0x28) = lVar19;
        *(ulong *)(puVar4 + -0x20) = uVar9;
        *(ulong *)(puVar4 + -0x18) = uVar10;
        *(undefined1 ***)(puVar4 + -0x10) = ppuVar22;
        *(undefined **)(puVar4 + -8) = puVar24;
        iVar6 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(uVar8 + 0x28,0,0,0);
        if (iVar6 != 0) {
          /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(0,uVar8 + 0x28,uVar16,0,0);
        }
        return uVar8;
      }
      puVar24 = &Atlas_Audio_KartAudio__StopScraping;
      uVar10 = func_0x00f78af4();
      auVar29 = ZEXT816(0x3d1ff28) << 0x40;
      puVar3 = &stack0xffffffffffffffa0;
      do {
        puVar4 = puVar3 + -0x30;
        *(ulong *)(puVar3 + -0x30) = unaff_x22;
        *(long *)(puVar3 + -0x28) = lVar19;
        *(long *)(puVar3 + -0x20) = auVar29._8_8_;
        *(long *)(puVar3 + -0x18) = auVar29._0_8_;
        *(undefined1 ***)(puVar3 + -0x10) = ppuVar22;
        *(undefined **)(puVar3 + -8) = puVar24;
        ppuVar22 = (undefined1 **)(puVar3 + -0x10);
        lVar19 = 0x3d1ff28;
        if ((bRam0000000003eb52cc & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52cc = 1;
        }
        lVar18 = *(long *)(uVar10 + 0x150);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar18 != 0) {
          uVar8 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar18,*(undefined8 *)
                                          (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x238),
                                  uRam0000000003d2fb00);
          if (uVar8 == 0) {
            *(undefined4 *)(uVar10 + 0x70) = 0xbf800000;
            return 0;
          }
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar16 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1c8);
          puVar24 = &UNK_015bfab4;
          uVar9 = uVar8;
          goto code_r0x01638fc8;
        }
        auVar29 = func_0x00f78af4();
        lVar18 = auVar29._8_8_;
        uVar9 = auVar29._0_8_;
        *(ulong *)(puVar3 + -0x90) = unaff_d9;
        *(ulong *)(puVar3 + -0x88) = unaff_d8;
        *(undefined8 *)(puVar3 + -0x80) = unaff_x26;
        *(undefined8 *)(puVar3 + -0x78) = unaff_x25;
        *(undefined8 *)(puVar3 + -0x70) = unaff_x24;
        *(ulong *)(puVar3 + -0x68) = unaff_x23;
        *(ulong *)(puVar3 + -0x60) = unaff_x22;
        *(undefined8 *)(puVar3 + -0x58) = 0x3d1ff28;
        *(undefined8 *)(puVar3 + -0x50) = 0;
        *(ulong *)(puVar3 + -0x48) = uVar10;
        *(undefined1 ***)(puVar3 + -0x40) = ppuVar22;
        *(undefined **)(puVar3 + -0x38) = &Atlas_Audio_KartAudio__OnCollisionEnter;
        lVar19 = 0x3eb5000;
        uVar8 = uVar9;
        if ((bRam0000000003eb52ce & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          func_0x00f78a20(0x3d578a8);
          uVar8 = func_0x00f78a20(0x3d23990);
          bRam0000000003eb52ce = 1;
        }
        fVar26 = _UNK_033f83fc;
        if (*(char *)(uVar9 + 0x50) == '\0') {
          return uVar8;
        }
        if (*(char *)(uVar9 + 0x38) != '\0') {
          return uVar8;
        }
        if (*(long *)(uVar9 + 0x90) != 0) {
          if (*(char *)(*(long *)(uVar9 + 0x90) + 0xcd) == '\0') {
            return uVar8;
          }
          if (*(float *)(uVar9 + 0x68) <= _UNK_033f83fc) {
            return uVar8;
          }
          if (*(int *)(lVar18 + 0x20) == 5) {
            return uVar8;
          }
          *(undefined4 *)(uVar9 + 0x68) = 0;
          if ((*(long *)(lVar18 + 8) != 0) &&
             (lVar11 = /*UnityEngine.Collision$$get_gameObject*/ func_0x0329ee78(*(long *)(lVar18 + 8),0), lVar11 != 0)) {
            lVar19 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar11,uRam0000000003d578a8);
            if (*(long *)(lVar18 + 8) != 0) {
              uVar25 = /*UnityEngine.Collision$$get_relativeVelocity*/ func_0x0329ede4(*(long *)(lVar18 + 8),0);
              *(undefined4 *)(puVar3 + -0xa0) = uVar25;
              *(float *)(puVar3 + -0x9c) = fVar26;
              *(undefined4 *)(puVar3 + -0x98) = param_3;
              uVar25 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(puVar3 + -0xa0,0);
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              fVar26 = (float)/*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar25,*(undefined4 *)
                                                      (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8),0
                                             );
              unaff_d8 = (ulong)(uint)fVar26;
              fVar28 = *(float *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8);
              unaff_d9 = (ulong)(uint)fVar28;
              unaff_x22 = (ulong)((*(uint *)(lVar18 + 0x20) & 0xfffffffe) == 2);
              unaff_x25 = 0x3d23990;
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar19,0);
              if ((int)uVar8 == 0) {
                unaff_x23 = 1;
              }
              else {
                if (lVar19 == 0) goto code_r0x015bfd5c;
                unaff_x23 = (ulong)*(uint *)(lVar19 + 0x1c);
              }
              if (*(int *)(lVar18 + 0x20) == 0) {
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar19,0);
                if ((int)uVar8 != 0) {
                  if (lVar19 == 0) goto code_r0x015bfd5c;
                  fVar27 = 3.0;
                  if ((*(uint *)(lVar19 + 0x1c) & 0xfffffffe) == 8) goto code_r0x015bfce0;
                }
              }
              if (3 < *(int *)(lVar18 + 0x20) - 1U) {
                return uVar8;
              }
              fVar27 = (fVar26 / fVar28) * 3.0;
code_r0x015bfce0:
              uVar25 = 0;
              if (*(char *)(lVar18 + 0x1c) != '\0') {
                uVar25 = 0xbf800000;
              }
              *(undefined4 *)(uVar9 + 0x70) = uVar25;
              /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(fVar27,0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar19,0,0);
              uVar8 = Atlas_Audio_KartAudio__PlayCollision(uVar9,unaff_x23);
              return uVar8;
            }
          }
        }
code_r0x015bfd5c:
        uVar10 = func_0x00f78af4();
        *(undefined1 **)(puVar3 + -0xc0) = puVar3 + -0x40;
        *(undefined **)(puVar3 + -0xb8) = &Atlas_Audio_KartAudio__OnCollisionExit;
        if ((*(char *)(uVar10 + 0x50) == '\0') || (*(char *)(uVar10 + 0x38) != '\0')) {
          return uVar10;
        }
        if (*(long *)(uVar10 + 0x90) == 0) {
          auVar29 = func_0x00f78af4();
          uVar8 = auVar29._8_8_;
          uVar17 = auVar29._0_8_;
          puVar5 = puVar3 + -0xf0;
          puVar2 = puVar3 + -0xf0;
          *(ulong *)(puVar3 + -0xf0) = unaff_x22;
          *(long *)(puVar3 + -0xe8) = lVar19;
          *(long *)(puVar3 + -0xe0) = lVar18;
          *(ulong *)(puVar3 + -0xd8) = uVar9;
          *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0xc0;
          *(undefined **)(puVar3 + -200) = &Atlas_Audio_KartAudio__OnTriggerEnter;
          puVar23 = puVar3 + -0xd0;
          uVar16 = 0x3eb5000;
          uVar10 = uVar17;
          if ((bRam0000000003eb52cf & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            func_0x00f78a20(0x3d2e048);
            func_0x00f78a20(0x3d2e050);
            func_0x00f78a20(0x3d577c8);
            func_0x00f78a20(0x3d578c0);
            uVar10 = func_0x00f78a20(0x3d23990);
            bRam0000000003eb52cf = 1;
          }
          if (*(char *)(uVar17 + 0x50) == '\0') {
            return uVar10;
          }
          if (*(char *)(uVar17 + 0x38) != '\0') {
            return uVar10;
          }
          if (*(float *)(uVar17 + 100) <= _UNK_033f8140) {
            return uVar10;
          }
          *(undefined4 *)(uVar17 + 100) = 0;
          if ((uVar8 != 0) && (lVar19 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar8,0), lVar19 != 0)) {
            uVar16 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar19,uRam0000000003d578c0);
            lVar19 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar8,0);
            if (lVar19 == 0) goto code_r0x015c0060;
            uVar8 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar19,uRam0000000003d577c8);
            uVar10 = 0x3d23990;
            uVar9 = 0x3d23990;
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar16,0);
            if (iVar6 != 0) {
              puVar23 = *(undefined1 **)(puVar3 + -0xd0);
              puVar24 = *(undefined **)(puVar3 + -200);
              uVar8 = *(ulong *)(puVar3 + -0xe0);
              puVar2 = puVar3 + -0xc0;
              unaff_x22 = *(ulong *)(puVar3 + -0xf0);
              uVar16 = *(undefined8 *)(puVar3 + -0xe8);
              uVar10 = uVar17;
              uVar17 = *(ulong *)(puVar3 + -0xd8);
              goto code_r0x015c0064;
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar12 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar8,0);
            if ((int)uVar12 == 0) {
              return uVar12;
            }
            unaff_x22 = uVar10;
            if (uVar8 == 0) goto code_r0x015c0060;
            iVar6 = *(int *)(uVar8 + 0x60);
            if (iVar6 == 0) {
              if (*(char *)(uVar8 + 0x68) != '\0') {
                return uVar12;
              }
              unaff_x22 = uVar9;
              if (*(long *)(uVar17 + 0x90) == 0) goto code_r0x015c0060;
              if (*(char *)(*(long *)(uVar17 + 0x90) + 0xce) == '\0') {
                return uVar12;
              }
              lVar19 = *(long *)(uVar17 + 0x148);
              if (lVar19 == 0) goto code_r0x015c0060;
              puVar24 = &UNK_015bff78;
code_r0x01ec8898:
              *(undefined1 **)(puVar5 + -0x10) = puVar23;
              *(undefined **)(puVar5 + -8) = puVar24;
              if (lVar19 != 0) {
                uVar7 = (*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(uRam0000000003d2e050 + 0x18) + 0xc0) + 0x40
                                    ))();
                return (ulong)(~uVar7 >> 0x1f);
              }
              uVar9 = uRam0000000003d2e050;
              auVar29 = func_0x00f78af4(0,uVar8);
              lVar19 = auVar29._0_8_;
              *(undefined8 *)(puVar5 + -0x50) = unaff_x24;
              *(ulong *)(puVar5 + -0x48) = unaff_x23;
              *(ulong *)(puVar5 + -0x40) = uVar10;
              *(undefined8 *)(puVar5 + -0x38) = uVar16;
              *(ulong *)(puVar5 + -0x30) = uVar8;
              *(ulong *)(puVar5 + -0x28) = uVar17;
              *(undefined1 **)(puVar5 + -0x20) = puVar5 + -0x10;
              *(undefined **)(puVar5 + -0x18) =
                   &System_Collections_Generic_Dictionary_object__EventInstance___ContainsValue;
              plVar13 = (long *)(*(code *)**(undefined8 **)
                                            (*(long *)(*(long *)(uVar9 + 0x18) + 0xc0) + 0x68))();
              iVar6 = *(int *)(lVar19 + 0x20);
              if (iVar6 < 1) {
                return 0;
              }
              lVar18 = 0;
              uVar8 = 0;
              goto code_r0x01ec8914;
            }
            if (iVar6 == 2) {
              if (*(char *)(uVar8 + 0x50) != '\0') {
                return uVar12;
              }
              unaff_x22 = uVar9;
              if (*(long *)(uVar17 + 0x90) == 0) goto code_r0x015c0060;
              if (*(char *)(*(long *)(uVar17 + 0x90) + 0xd2) == '\0') {
                return uVar12;
              }
              uVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar8,0);
              *(undefined8 *)(puVar3 + -0xf0) = *(undefined8 *)(puVar3 + -0xf0);
              *(undefined8 *)(puVar3 + -0xe8) = *(undefined8 *)(puVar3 + -0xe8);
              *(undefined8 *)(puVar3 + -0xe0) = *(undefined8 *)(puVar3 + -0xe0);
              *(undefined8 *)(puVar3 + -0xd8) = *(undefined8 *)(puVar3 + -0xd8);
              *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0xd0);
              *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -200);
              if ((bRam0000000003eb4876 & 1) == 0) {
                func_0x00f78a20(0x3d1ff30,uVar16,0);
                func_0x00f78a20(0x3d65d08);
                bRam0000000003eb4876 = 1;
              }
              uVar9 = *(ulong *)(uVar8 + 0xb0);
              if (uVar9 == 0) {
                uVar10 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*(undefined8 *)(uVar8 + 0x48),/*STR('')*/ uRam0000000003d65d08,0);
                if ((uVar10 & 1) == 0) {
                  uVar9 = *(ulong *)(uVar8 + 0xb0);
                }
                else {
                  uVar20 = *(undefined8 *)(uVar8 + 0x48);
                  uVar9 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
                  uVar10 = /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar9,uVar20,0,0,0);
                  *(ulong *)(uVar8 + 0xb0) = uVar9;
                }
                if (uVar9 == 0) {
                  return uVar10;
                }
              }
              unaff_x29 = *(undefined1 **)(puVar3 + -0xd0);
              unaff_x30 = *(undefined **)(puVar3 + -200);
              unaff_x20 = *(undefined8 *)(puVar3 + -0xe0);
              unaff_x19 = *(long *)(puVar3 + -0xd8);
              puVar3 = puVar3 + -0xc0;
              goto code_r0x01638d28;
            }
            if (iVar6 != 1) {
              return uVar12;
            }
            if (*(long *)(uVar17 + 0x90) != 0) {
              if (*(char *)(*(long *)(uVar17 + 0x90) + 0xd1) != '\0') {
                fVar26 = *(float *)(uVar17 + 0x74) * 100.0;
                *(float *)(uVar8 + 0xc0) = fVar26 * _UNK_033f82c0 + _UNK_033f82c4;
                *(float *)(uVar8 + 0xc4) = fVar26;
                return uVar8;
              }
              return uVar12;
            }
          }
code_r0x015c0060:
          puVar24 = &Atlas_Audio_KartAudio__PickupPickedUp;
          uVar10 = func_0x00f78af4();
code_r0x015c0064:
          *(ulong *)(puVar2 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar2 + -0x28) = uVar16;
          *(ulong *)(puVar2 + -0x20) = uVar8;
          *(ulong *)(puVar2 + -0x18) = uVar17;
          *(undefined1 **)(puVar2 + -0x10) = puVar23;
          *(undefined **)(puVar2 + -8) = puVar24;
          uVar8 = uVar10;
          if ((bRam0000000003eb52d1 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            uVar8 = func_0x00f78a20(0x3d2fb00);
            bRam0000000003eb52d1 = 1;
          }
          if (*(char *)(uVar10 + 0x38) != '\0') {
            return uVar8;
          }
          lVar19 = *(long *)(uVar10 + 0x150);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if ((lVar19 != 0) &&
             (uVar9 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar19,*(undefined8 *)
                                              (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x230),
                                      uRam0000000003d2fb00), uVar9 != 0)) {
            uVar16 = *(undefined8 *)(uVar10 + 0xb8);
            unaff_x29 = *(undefined1 **)(puVar2 + -0x10);
            unaff_x30 = *(undefined **)(puVar2 + -8);
            unaff_x19 = *(long *)(puVar2 + -0x18);
            puVar3 = puVar2;
            unaff_x20 = *(undefined8 *)(puVar2 + -0x20);
            goto code_r0x01638d28;
          }
          auVar29 = func_0x00f78af4();
          uVar8 = auVar29._8_8_;
          uVar17 = auVar29._0_8_;
          puVar5 = puVar2 + -0x60;
          *(ulong *)(puVar2 + -0x60) = unaff_x22;
          *(undefined8 *)(puVar2 + -0x58) = 0x3d1ff28;
          *(long *)(puVar2 + -0x50) = lVar19;
          *(ulong *)(puVar2 + -0x48) = uVar10;
          *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x38) = &Atlas_Audio_KartAudio__OnTriggerExit;
          puVar23 = puVar2 + -0x40;
          uVar16 = 0x3eb5000;
          uVar10 = uVar17;
          if ((bRam0000000003eb52d0 & 1) == 0) {
            func_0x00f78a20(0x3d2e050);
            func_0x00f78a20(0x3d2e058);
            func_0x00f78a20(0x3d2e060);
            func_0x00f78a20(0x3d577c8);
            uVar10 = func_0x00f78a20(0x3d23990);
            bRam0000000003eb52d0 = 1;
          }
          if ((*(char *)(uVar17 + 0x50) == '\0') || (*(char *)(uVar17 + 0x38) != '\0')) {
            return uVar10;
          }
          if ((uVar8 != 0) && (lVar19 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar8,0), lVar19 != 0)) {
            uVar8 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar19,uRam0000000003d577c8);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar8,0);
            if ((int)uVar10 == 0) {
              return uVar10;
            }
            if (uVar8 != 0) {
              if (*(int *)(uVar8 + 0x60) != 0) {
                return uVar10;
              }
              if (*(long *)(uVar17 + 0x90) != 0) {
                if (*(char *)(*(long *)(uVar17 + 0x90) + 0xce) == '\0') {
                  return uVar10;
                }
                lVar19 = *(long *)(uVar17 + 0x148);
                if (lVar19 != 0) {
                  puVar24 = &UNK_015c023c;
                  uVar10 = unaff_x22;
                  goto code_r0x01ec8898;
                }
              }
            }
          }
          uVar10 = func_0x00f78af4();
          *(ulong *)(puVar2 + -0x90) = unaff_x22;
          *(undefined8 *)(puVar2 + -0x88) = 0x3eb5000;
          *(ulong *)(puVar2 + -0x80) = uVar8;
          *(ulong *)(puVar2 + -0x78) = uVar17;
          *(undefined1 **)(puVar2 + -0x70) = puVar23;
          *(undefined **)(puVar2 + -0x68) = &Atlas_Audio_KartAudio__PlayVFXAudio;
          uVar8 = uVar10;
          if ((bRam0000000003eb52d4 & 1) == 0) {
            func_0x00f78a20(0x3d1ff28);
            uVar8 = func_0x00f78a20(0x3d2fb00);
            bRam0000000003eb52d4 = 1;
          }
          if (*(char *)(uVar10 + 0x38) == '\0') {
            lVar19 = *(long *)(uVar10 + 0x150);
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (lVar19 == 0) {
              auVar29 = func_0x00f78af4();
              uVar16 = auVar29._8_8_;
              unaff_x19 = auVar29._0_8_;
              puVar3 = puVar2 + -0xd0;
              *(undefined8 *)(puVar2 + -0xd0) = unaff_x24;
              *(ulong *)(puVar2 + -200) = unaff_x23;
              *(ulong *)(puVar2 + -0xc0) = unaff_x22;
              *(undefined8 *)(puVar2 + -0xb8) = 0x3d1ff28;
              *(undefined8 *)(puVar2 + -0xb0) = 0;
              *(ulong *)(puVar2 + -0xa8) = uVar10;
              *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
              *(undefined **)(puVar2 + -0x98) = &Atlas_Audio_KartAudio__ExitPortal;
              unaff_x29 = puVar2 + -0xa0;
              if ((bRam0000000003eb52d6 & 1) == 0) {
                func_0x00f78a20(0x3d1ff28);
                func_0x00f78a20(0x3d2fb00);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb52d6 = 1;
              }
              lVar19 = *(long *)(unaff_x19 + 0x150);
              if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (lVar19 != 0) {
                uVar9 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar19,*(undefined8 *)
                                                (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x278),
                                        uRam0000000003d2fb00);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,0,0);
                if ((uVar8 & 1) == 0) {
                  uVar16 = *(undefined8 *)(unaff_x19 + 0xb8);
                }
                if (uVar9 != 0) {
                  unaff_x30 = &UNK_015c044c;
                  unaff_x20 = uVar16;
                  goto code_r0x01638d28;
                }
              }
              uVar8 = func_0x00f78af4();
              return uVar8;
            }
            uVar9 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar19,*(undefined8 *)
                                            (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x250),
                                    uRam0000000003d2fb00);
            uVar8 = 0;
            if (uVar9 != 0) {
              uVar16 = *(undefined8 *)(uVar10 + 0xb8);
              unaff_x29 = *(undefined1 **)(puVar2 + -0x70);
              unaff_x30 = *(undefined **)(puVar2 + -0x68);
              unaff_x19 = *(long *)(puVar2 + -0x78);
              puVar3 = puVar2 + -0x60;
              unaff_x20 = *(undefined8 *)(puVar2 + -0x80);
              goto code_r0x01638d28;
            }
          }
          return uVar8;
        }
        if (*(char *)(*(long *)(uVar10 + 0x90) + 0xcd) == '\0') {
          return uVar10;
        }
        ppuVar22 = *(undefined1 ***)(puVar3 + -0xc0);
        puVar24 = *(undefined **)(puVar3 + -0xb8);
        puVar3 = puVar3 + -0xb0;
      } while( true );
    }
    if ((*(char *)(lVar19 + 0xc9) != '\0') && (*(uint *)(param_4 + 0xb0) != param_5)) {
      *(uint *)(param_4 + 0xb0) = param_5;
      if (param_5 == 0) {
        param_5 = *(byte *)(param_4 + 0x39) ^ 1;
      }
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Core.Audio.AudioManager$$SetGlobalParameter*/ func_0x01639e60((float)(int)param_5,lVar19,
                      *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1e8),0,0);
      uVar9 = *(ulong *)(param_4 + 0xe0);
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar16 = *(undefined8 *)(param_4 + 0xb8);
        puVar3 = (undefined1 *)register0x00000008;
code_r0x01638d28:
        *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
        *(long *)(puVar3 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
        *(undefined **)(puVar3 + -8) = unaff_x30;
        /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar9,uVar16,0);
        return uVar9;
      }
    }
  }
  return uVar8;
code_r0x01ec8914:
  lVar11 = *(long *)(lVar19 + 0x18);
  if (lVar11 == 0) {
code_r0x01ec898c:
    func_0x00f78af4();
code_r0x01ec8990:
    uVar16 = func_0x00f78b24();
    auVar30 = func_0x00f78ac0(uVar16,0);
    lVar11 = auVar30._8_8_;
    lVar14 = auVar30._0_8_;
    *(undefined8 *)(puVar5 + -0xa0) = unaff_x26;
    *(undefined8 *)(puVar5 + -0x98) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x90) = unaff_x24;
    *(ulong *)(puVar5 + -0x88) = uVar8;
    *(long *)(puVar5 + -0x80) = lVar18;
    *(long **)(puVar5 + -0x78) = plVar13;
    *(undefined1 (*) [16])(puVar5 + -0x70) = auVar29;
    *(undefined1 **)(puVar5 + -0x60) = puVar5 + -0x20;
    *(undefined **)(puVar5 + -0x58) =
         &System_Collections_Generic_Dictionary_object__EventInstance___CopyTo;
    if (lVar11 == 0) goto code_r0x01ec8b28;
    uVar7 = (uint)uVar9;
    if (((int)uVar7 < 0) || (*(int *)(lVar11 + 0x18) < (int)uVar7)) goto code_r0x01ec8aa8;
    if (lVar14 == 0) goto code_r0x01ec8b24;
    uVar8 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_7 + 0x18) + 0xc0) + 0x90))(lVar14)
    ;
    if ((int)(*(int *)(lVar11 + 0x18) - uVar7) < (int)uVar8) {
      func_0x00f78a24(0x3d1fce8);
      uVar16 = func_0x00f78aec();
      uVar20 = func_0x00f78a24(0x3d6bc10);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar16,uVar20,0);
      goto code_r0x01ec8b8c;
    }
    uVar1 = *(uint *)(lVar14 + 0x20);
    if ((int)uVar1 < 1) {
      return uVar8;
    }
    lVar19 = *(long *)(lVar14 + 0x18);
    if (lVar19 == 0) goto code_r0x01ec8b24;
    uVar10 = 0;
    puVar21 = (undefined8 *)(lVar19 + 0x30);
    goto code_r0x01ec8a24;
  }
  if (*(uint *)(lVar11 + 0x18) <= uVar8) goto code_r0x01ec8990;
  if (-1 < *(int *)(lVar11 + lVar18 + 0x20)) {
    if (plVar13 == (long *)0x0) goto code_r0x01ec898c;
    param_7 = *(long *)(*plVar13 + 0x1c0);
    uVar9 = auVar29._8_8_;
    uVar10 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(lVar11 + lVar18 + 0x30));
    if ((uVar10 & 1) != 0) {
      return 1;
    }
    iVar6 = *(int *)(lVar19 + 0x20);
  }
  uVar8 = uVar8 + 1;
  lVar18 = lVar18 + 0x18;
  if ((long)iVar6 <= (long)uVar8) {
    return 0;
  }
  goto code_r0x01ec8914;
code_r0x01ec8a24:
  uVar7 = (uint)uVar9;
  if (*(uint *)(lVar19 + 0x18) <= uVar10) {
code_r0x01ec8a9c:
    uVar16 = func_0x00f78b24();
    func_0x00f78ac0(uVar16,0);
code_r0x01ec8aa8:
    *(uint *)(puVar5 + -0xb0) = uVar7;
    uVar16 = func_0x00f78a24(0x3d22910);
    uVar16 = func_0x00f78ae0(uVar16,puVar5 + -0xb0);
    func_0x00f78a24(0x3d1fcf8);
    lVar11 = func_0x00f78aec();
    uVar20 = func_0x00f78a24(0x3d79a60);
    uVar15 = func_0x00f78a24(0x3d6de28);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(lVar11,uVar20,uVar16,uVar15,0);
    uVar16 = func_0x00f78a24(0x3d2f4b0);
    func_0x00f78ac0(lVar11,uVar16);
code_r0x01ec8b24:
    func_0x00f78af4();
    lVar19 = lVar11;
code_r0x01ec8b28:
    func_0x00f78a24(0x3d1fcf0);
    uVar16 = func_0x00f78aec();
    uVar20 = func_0x00f78a24(0x3d77d18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar16,uVar20,0);
    lVar11 = lVar19;
code_r0x01ec8b8c:
    uVar20 = func_0x00f78a24(0x3d2f4b0);
    auVar29 = func_0x00f78ac0(uVar16,uVar20);
    *(long *)(puVar5 + -0xd0) = lVar11;
    *(undefined8 *)(puVar5 + -200) = uVar16;
    *(undefined1 **)(puVar5 + -0xc0) = puVar5 + -0x60;
    *(undefined **)(puVar5 + -0xb8) =
         &System_Collections_Generic_Dictionary_object__EventInstance___GetEnumerator;
    *(undefined8 *)(puVar5 + -0xe0) = 0;
    *(undefined8 *)(puVar5 + -0xf8) = 0;
    *(undefined8 *)(puVar5 + -0x100) = 0;
    *(undefined8 *)(puVar5 + -0xe8) = 0;
    *(undefined8 *)(puVar5 + -0xf0) = 0;
    uVar8 = /*System.Collections.Generic.Dictionary.Enumerator<object, EventInstance>$$.ctor*/ func_0x01fd20e8(puVar5 + -0x100,auVar29._0_8_,2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(auVar29._8_8_ + 0x18) + 0xc0) + 0xb0));
    uVar16 = *(undefined8 *)(puVar5 + -0x100);
    uVar15 = *(undefined8 *)(puVar5 + -0xe8);
    uVar20 = *(undefined8 *)(puVar5 + -0xf0);
    extraout_x8[1] = *(undefined8 *)(puVar5 + -0xf8);
    *extraout_x8 = uVar16;
    extraout_x8[3] = uVar15;
    extraout_x8[2] = uVar20;
    extraout_x8[4] = *(undefined8 *)(puVar5 + -0xe0);
    return uVar8;
  }
  if (-1 < *(int *)(puVar21 + -2)) {
    uVar16 = puVar21[-1];
    uVar20 = *puVar21;
    *(undefined8 *)(puVar5 + -0xb0) = 0;
    *(undefined8 *)(puVar5 + -0xa8) = 0;
    uVar8 = /*System.Collections.Generic.KeyValuePair<object, EventInstance>$$.ctor*/ func_0x023181f4(puVar5 + -0xb0,uVar16,uVar20,
                            *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x18) + 0xc0) + 0xa0));
    if (*(uint *)(lVar11 + 0x18) <= uVar7) goto code_r0x01ec8a9c;
    lVar18 = lVar11 + (long)(int)uVar7 * 0x10;
    uVar9 = (ulong)(uVar7 + 1);
    uVar16 = *(undefined8 *)(puVar5 + -0xb0);
    *(undefined8 *)(lVar18 + 0x28) = *(undefined8 *)(puVar5 + -0xa8);
    *(undefined8 *)(lVar18 + 0x20) = uVar16;
  }
  uVar10 = uVar10 + 1;
  puVar21 = puVar21 + 3;
  if (uVar1 == uVar10) {
    return uVar8;
  }
  goto code_r0x01ec8a24;
}



// ============================================================
// RVA: 0x15bf8e4 | Atlas.Audio.KartAudio.ClearCollisionEventParameters
// ============================================================

/* WARNING: Possible PIC construction at 0x015bf958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bf998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bfab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015c0238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015c0448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bff74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015c044c) */
/* WARNING: Removing unreachable block (ram,0x015c0484) */
/* WARNING: Removing unreachable block (ram,0x015c0488) */
/* WARNING: Removing unreachable block (ram,0x015c0490) */
/* WARNING: Removing unreachable block (ram,0x015c0498) */
/* WARNING: Removing unreachable block (ram,0x015c0460) */
/* WARNING: Removing unreachable block (ram,0x015c0464) */
/* WARNING: Removing unreachable block (ram,0x015c046c) */
/* WARNING: Removing unreachable block (ram,0x015c0474) */
/* WARNING: Removing unreachable block (ram,0x015c04a4) */
/* WARNING: Removing unreachable block (ram,0x015c04b8) */
/* WARNING: Removing unreachable block (ram,0x015c0480) */
/* WARNING: Removing unreachable block (ram,0x015c023c) */
/* WARNING: Removing unreachable block (ram,0x015c0240) */
/* WARNING: Removing unreachable block (ram,0x015c0248) */
/* WARNING: Removing unreachable block (ram,0x015c0264) */
/* WARNING: Removing unreachable block (ram,0x015c027c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f0c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f34) */
/* WARNING: Removing unreachable block (ram,0x01ec9f40) */
/* WARNING: Removing unreachable block (ram,0x01ec9f48) */
/* WARNING: Removing unreachable block (ram,0x01ec9f64) */
/* WARNING: Removing unreachable block (ram,0x01ec9f6c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f78) */
/* WARNING: Removing unreachable block (ram,0x01ec9f80) */
/* WARNING: Removing unreachable block (ram,0x01ec9fac) */
/* WARNING: Removing unreachable block (ram,0x01ec9f8c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f98) */
/* WARNING: Removing unreachable block (ram,0x01ec9fbc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fd4) */
/* WARNING: Removing unreachable block (ram,0x01ec9fdc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fec) */
/* WARNING: Removing unreachable block (ram,0x01ec9ff8) */
/* WARNING: Removing unreachable block (ram,0x01eca008) */
/* WARNING: Removing unreachable block (ram,0x01eca00c) */
/* WARNING: Removing unreachable block (ram,0x01eca01c) */
/* WARNING: Removing unreachable block (ram,0x01eca030) */
/* WARNING: Removing unreachable block (ram,0x01eca038) */
/* WARNING: Removing unreachable block (ram,0x01eca058) */
/* WARNING: Removing unreachable block (ram,0x01eca060) */
/* WARNING: Removing unreachable block (ram,0x01eca06c) */
/* WARNING: Removing unreachable block (ram,0x01eca074) */
/* WARNING: Removing unreachable block (ram,0x01eca0a0) */
/* WARNING: Removing unreachable block (ram,0x01eca080) */
/* WARNING: Removing unreachable block (ram,0x01eca08c) */
/* WARNING: Removing unreachable block (ram,0x01eca0ac) */
/* WARNING: Removing unreachable block (ram,0x01eca10c) */
/* WARNING: Removing unreachable block (ram,0x01eca148) */
/* WARNING: Removing unreachable block (ram,0x01eca150) */
/* WARNING: Removing unreachable block (ram,0x01eca160) */
/* WARNING: Removing unreachable block (ram,0x01eca168) */
/* WARNING: Removing unreachable block (ram,0x01eca174) */
/* WARNING: Removing unreachable block (ram,0x01eca110) */
/* WARNING: Removing unreachable block (ram,0x01eca118) */
/* WARNING: Removing unreachable block (ram,0x01eca124) */
/* WARNING: Removing unreachable block (ram,0x01eca12c) */
/* WARNING: Removing unreachable block (ram,0x01eca188) */
/* WARNING: Removing unreachable block (ram,0x01eca190) */
/* WARNING: Removing unreachable block (ram,0x01eca1b0) */
/* WARNING: Removing unreachable block (ram,0x01eca1bc) */
/* WARNING: Removing unreachable block (ram,0x01eca0c4) */
/* WARNING: Removing unreachable block (ram,0x01eca1e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0cc) */
/* WARNING: Removing unreachable block (ram,0x01eca1ec) */
/* WARNING: Removing unreachable block (ram,0x01eca1f8) */
/* WARNING: Removing unreachable block (ram,0x01eca250) */
/* WARNING: Removing unreachable block (ram,0x01eca298) */
/* WARNING: Removing unreachable block (ram,0x01eca270) */
/* WARNING: Removing unreachable block (ram,0x01eca2b0) */
/* WARNING: Removing unreachable block (ram,0x01eca278) */
/* WARNING: Removing unreachable block (ram,0x01eca2b4) */
/* WARNING: Removing unreachable block (ram,0x01eca2e8) */
/* WARNING: Removing unreachable block (ram,0x01eca2cc) */
/* WARNING: Removing unreachable block (ram,0x01eca284) */
/* WARNING: Removing unreachable block (ram,0x01eca29c) */
/* WARNING: Removing unreachable block (ram,0x01eca0d8) */
/* WARNING: Removing unreachable block (ram,0x01eca0e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0ec) */
/* WARNING: Removing unreachable block (ram,0x015bf99c) */
/* WARNING: Removing unreachable block (ram,0x015bf95c) */
/* WARNING: Removing unreachable block (ram,0x015bff78) */
/* WARNING: Removing unreachable block (ram,0x015bff7c) */
/* WARNING: Removing unreachable block (ram,0x015bff94) */
/* WARNING: Removing unreachable block (ram,0x015bff9c) */
/* WARNING: Removing unreachable block (ram,0x015bffa4) */
/* WARNING: Removing unreachable block (ram,0x015bffcc) */
/* WARNING: Removing unreachable block (ram,0x015bfff0) */
/* WARNING: Removing unreachable block (ram,0x01ec8614) */
/* WARNING: Removing unreachable block (ram,0x01ec863c) */
/* WARNING: Removing unreachable block (ram,0x01ec8664) */
/* WARNING: Removing unreachable block (ram,0x01ec867c) */
/* WARNING: Removing unreachable block (ram,0x01ec86a0) */
/* WARNING: Removing unreachable block (ram,0x01ec86c0) */
/* WARNING: Removing unreachable block (ram,0x01ec86cc) */
/* WARNING: Removing unreachable block (ram,0x01ec870c) */
/* WARNING: Removing unreachable block (ram,0x01ec8710) */
/* WARNING: Removing unreachable block (ram,0x01ec8734) */
/* WARNING: Removing unreachable block (ram,0x01ec87d0) */
/* WARNING: Removing unreachable block (ram,0x01ec875c) */
/* WARNING: Removing unreachable block (ram,0x01ec877c) */
/* WARNING: Removing unreachable block (ram,0x01ec8788) */
/* WARNING: Removing unreachable block (ram,0x01ec87e8) */
/* WARNING: Removing unreachable block (ram,0x01ec87ec) */
/* WARNING: Removing unreachable block (ram,0x01ec8810) */
/* WARNING: Removing unreachable block (ram,0x01ec881c) */
/* WARNING: Removing unreachable block (ram,0x01ec8828) */
/* WARNING: Removing unreachable block (ram,0x01ec8838) */
/* WARNING: Removing unreachable block (ram,0x01ec8840) */
/* WARNING: Removing unreachable block (ram,0x01ec8888) */
/* WARNING: Removing unreachable block (ram,0x01ec8894) */
/* WARNING: Removing unreachable block (ram,0x01ec8844) */
/* WARNING: Removing unreachable block (ram,0x01ec8854) */
/* WARNING: Removing unreachable block (ram,0x01ec887c) */
/* WARNING: Removing unreachable block (ram,0x01ec878c) */
/* WARNING: Removing unreachable block (ram,0x01ec87ac) */
/* WARNING: Removing unreachable block (ram,0x01ec87d4) */
/* WARNING: Removing unreachable block (ram,0x01ec86d0) */
/* WARNING: Removing unreachable block (ram,0x01ec86f8) */
/* WARNING: Removing unreachable block (ram,0x01ec86f0) */
/* WARNING: Removing unreachable block (ram,0x01ec86fc) */
/* WARNING: Removing unreachable block (ram,0x01ec864c) */
/* WARNING: Removing unreachable block (ram,0x01ec8620) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Audio_KartAudio__ClearCollisionEventParameters
                (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
                undefined8 param_4,ulong param_5,undefined8 param_6,long param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *extraout_x8;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  ulong unaff_x22;
  ulong uVar20;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 *puVar21;
  undefined8 unaff_x26;
  undefined1 *puVar22;
  undefined *puVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  ulong unaff_d8;
  float fVar27;
  ulong unaff_d9;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  puVar4 = &stack0xffffffffffffffd0;
  puVar22 = &stack0xfffffffffffffff0;
  lVar18 = 0x3eb5000;
  if ((bRam0000000003eb52ca & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    bRam0000000003eb52ca = 1;
  }
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (param_5 != 0) {
    uVar16 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1a8);
    puVar23 = (undefined *)0x15bf95c;
    uVar8 = param_5;
    uVar10 = 0x3d1ff28;
code_r0x01638fc8:
    *(ulong *)(puVar4 + -0x40) = unaff_d9;
    *(ulong *)(puVar4 + -0x38) = unaff_d8;
    *(ulong *)(puVar4 + -0x30) = unaff_x22;
    *(long *)(puVar4 + -0x28) = lVar18;
    *(ulong *)(puVar4 + -0x20) = uVar10;
    *(ulong *)(puVar4 + -0x18) = uVar8;
    *(undefined1 **)(puVar4 + -0x10) = puVar22;
    *(undefined **)(puVar4 + -8) = puVar23;
    iVar6 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(param_5 + 0x28,0,0,0);
    if (iVar6 != 0) {
      /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(0,param_5 + 0x28,uVar16,0,0);
    }
    return param_5;
  }
  puVar23 = &Atlas_Audio_KartAudio__StopScraping;
  uVar8 = func_0x00f78af4();
  auVar28 = ZEXT816(0x3d1ff28) << 0x40;
  puVar3 = &stack0xffffffffffffffd0;
  do {
    puVar4 = puVar3 + -0x30;
    *(ulong *)(puVar3 + -0x30) = unaff_x22;
    *(long *)(puVar3 + -0x28) = lVar18;
    *(long *)(puVar3 + -0x20) = auVar28._8_8_;
    *(long *)(puVar3 + -0x18) = auVar28._0_8_;
    *(undefined1 **)(puVar3 + -0x10) = puVar22;
    *(undefined **)(puVar3 + -8) = puVar23;
    puVar22 = puVar3 + -0x10;
    lVar18 = 0x3d1ff28;
    if ((bRam0000000003eb52cc & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d2fb00);
      bRam0000000003eb52cc = 1;
    }
    lVar17 = *(long *)(uVar8 + 0x150);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar17 != 0) {
      param_5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar17,*(undefined8 *)
                                        (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x238),
                                uRam0000000003d2fb00);
      if (param_5 == 0) {
        *(undefined4 *)(uVar8 + 0x70) = 0xbf800000;
        return 0;
      }
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar16 = *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1c8);
      puVar23 = &UNK_015bfab4;
      uVar10 = param_5;
      goto code_r0x01638fc8;
    }
    auVar28 = func_0x00f78af4();
    lVar17 = auVar28._8_8_;
    uVar10 = auVar28._0_8_;
    *(ulong *)(puVar3 + -0x90) = unaff_d9;
    *(ulong *)(puVar3 + -0x88) = unaff_d8;
    *(undefined8 *)(puVar3 + -0x80) = unaff_x26;
    *(undefined8 *)(puVar3 + -0x78) = unaff_x25;
    *(undefined8 *)(puVar3 + -0x70) = unaff_x24;
    *(ulong *)(puVar3 + -0x68) = unaff_x23;
    *(ulong *)(puVar3 + -0x60) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x58) = 0x3d1ff28;
    *(undefined8 *)(puVar3 + -0x50) = 0;
    *(ulong *)(puVar3 + -0x48) = uVar8;
    *(undefined1 **)(puVar3 + -0x40) = puVar22;
    *(undefined **)(puVar3 + -0x38) = &Atlas_Audio_KartAudio__OnCollisionEnter;
    lVar18 = 0x3eb5000;
    uVar8 = uVar10;
    if ((bRam0000000003eb52ce & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d578a8);
      uVar8 = func_0x00f78a20(0x3d23990);
      bRam0000000003eb52ce = 1;
    }
    fVar25 = _UNK_033f83fc;
    if (*(char *)(uVar10 + 0x50) == '\0') {
      return uVar8;
    }
    if (*(char *)(uVar10 + 0x38) != '\0') {
      return uVar8;
    }
    if (*(long *)(uVar10 + 0x90) != 0) {
      if (*(char *)(*(long *)(uVar10 + 0x90) + 0xcd) == '\0') {
        return uVar8;
      }
      if (*(float *)(uVar10 + 0x68) <= _UNK_033f83fc) {
        return uVar8;
      }
      if (*(int *)(lVar17 + 0x20) == 5) {
        return uVar8;
      }
      *(undefined4 *)(uVar10 + 0x68) = 0;
      if ((*(long *)(lVar17 + 8) != 0) &&
         (lVar9 = /*UnityEngine.Collision$$get_gameObject*/ func_0x0329ee78(*(long *)(lVar17 + 8),0), lVar9 != 0)) {
        lVar18 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar9,uRam0000000003d578a8);
        if (*(long *)(lVar17 + 8) != 0) {
          uVar24 = /*UnityEngine.Collision$$get_relativeVelocity*/ func_0x0329ede4(*(long *)(lVar17 + 8),0);
          *(undefined4 *)(puVar3 + -0xa0) = uVar24;
          *(float *)(puVar3 + -0x9c) = fVar25;
          *(undefined4 *)(puVar3 + -0x98) = param_3;
          uVar24 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc(puVar3 + -0xa0,0);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          fVar25 = (float)/*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar24,*(undefined4 *)
                                                  (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8),0);
          unaff_d8 = (ulong)(uint)fVar25;
          fVar27 = *(float *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8);
          unaff_d9 = (ulong)(uint)fVar27;
          unaff_x22 = (ulong)((*(uint *)(lVar17 + 0x20) & 0xfffffffe) == 2);
          unaff_x25 = 0x3d23990;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar18,0);
          if ((int)uVar8 == 0) {
            unaff_x23 = 1;
          }
          else {
            if (lVar18 == 0) goto code_r0x015bfd5c;
            unaff_x23 = (ulong)*(uint *)(lVar18 + 0x1c);
          }
          if (*(int *)(lVar17 + 0x20) == 0) {
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar18,0);
            if ((int)uVar8 != 0) {
              if (lVar18 == 0) goto code_r0x015bfd5c;
              fVar26 = 3.0;
              if ((*(uint *)(lVar18 + 0x1c) & 0xfffffffe) == 8) goto code_r0x015bfce0;
            }
          }
          if (3 < *(int *)(lVar17 + 0x20) - 1U) {
            return uVar8;
          }
          fVar26 = (fVar25 / fVar27) * 3.0;
code_r0x015bfce0:
          uVar24 = 0;
          if (*(char *)(lVar17 + 0x1c) != '\0') {
            uVar24 = 0xbf800000;
          }
          *(undefined4 *)(uVar10 + 0x70) = uVar24;
          /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(fVar26,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar18,0,0);
          uVar8 = Atlas_Audio_KartAudio__PlayCollision(uVar10,unaff_x23);
          return uVar8;
        }
      }
    }
code_r0x015bfd5c:
    uVar8 = func_0x00f78af4();
    *(undefined1 **)(puVar3 + -0xc0) = puVar3 + -0x40;
    *(undefined **)(puVar3 + -0xb8) = &Atlas_Audio_KartAudio__OnCollisionExit;
    if ((*(char *)(uVar8 + 0x50) == '\0') || (*(char *)(uVar8 + 0x38) != '\0')) {
      return uVar8;
    }
    if (*(long *)(uVar8 + 0x90) == 0) {
      auVar28 = func_0x00f78af4();
      uVar8 = auVar28._8_8_;
      uVar12 = auVar28._0_8_;
      puVar5 = puVar3 + -0xf0;
      puVar2 = puVar3 + -0xf0;
      *(ulong *)(puVar3 + -0xf0) = unaff_x22;
      *(long *)(puVar3 + -0xe8) = lVar18;
      *(long *)(puVar3 + -0xe0) = lVar17;
      *(ulong *)(puVar3 + -0xd8) = uVar10;
      *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0xc0;
      *(undefined **)(puVar3 + -200) = &Atlas_Audio_KartAudio__OnTriggerEnter;
      puVar22 = puVar3 + -0xd0;
      uVar16 = 0x3eb5000;
      uVar10 = uVar12;
      if ((bRam0000000003eb52cf & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d2e048);
        func_0x00f78a20(0x3d2e050);
        func_0x00f78a20(0x3d577c8);
        func_0x00f78a20(0x3d578c0);
        uVar10 = func_0x00f78a20(0x3d23990);
        bRam0000000003eb52cf = 1;
      }
      if (*(char *)(uVar12 + 0x50) == '\0') {
        return uVar10;
      }
      if (*(char *)(uVar12 + 0x38) != '\0') {
        return uVar10;
      }
      if (*(float *)(uVar12 + 100) <= _UNK_033f8140) {
        return uVar10;
      }
      *(undefined4 *)(uVar12 + 100) = 0;
      if ((uVar8 == 0) || (lVar18 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar8,0), lVar18 == 0)) {
code_r0x015c0060:
        puVar23 = &Atlas_Audio_KartAudio__PickupPickedUp;
        uVar10 = func_0x00f78af4();
code_r0x015c0064:
        *(ulong *)(puVar2 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x28) = uVar16;
        *(ulong *)(puVar2 + -0x20) = uVar8;
        *(ulong *)(puVar2 + -0x18) = uVar12;
        *(undefined1 **)(puVar2 + -0x10) = puVar22;
        *(undefined **)(puVar2 + -8) = puVar23;
        uVar8 = uVar10;
        if ((bRam0000000003eb52d1 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          uVar8 = func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52d1 = 1;
        }
        if (*(char *)(uVar10 + 0x38) != '\0') {
          return uVar8;
        }
        lVar18 = *(long *)(uVar10 + 0x150);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((lVar18 != 0) &&
           (uVar12 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar18,*(undefined8 *)
                                             (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x230),
                                     uRam0000000003d2fb00), uVar12 != 0)) {
          uVar16 = *(undefined8 *)(uVar10 + 0xb8);
          puVar22 = *(undefined1 **)(puVar2 + -0x10);
          puVar23 = *(undefined **)(puVar2 + -8);
          lVar18 = *(long *)(puVar2 + -0x18);
          puVar3 = puVar2;
          uVar19 = *(undefined8 *)(puVar2 + -0x20);
          goto code_r0x01638d28;
        }
        auVar28 = func_0x00f78af4();
        uVar8 = auVar28._8_8_;
        uVar12 = auVar28._0_8_;
        puVar5 = puVar2 + -0x60;
        *(ulong *)(puVar2 + -0x60) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x58) = 0x3d1ff28;
        *(long *)(puVar2 + -0x50) = lVar18;
        *(ulong *)(puVar2 + -0x48) = uVar10;
        *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
        *(undefined **)(puVar2 + -0x38) = &Atlas_Audio_KartAudio__OnTriggerExit;
        puVar22 = puVar2 + -0x40;
        uVar16 = 0x3eb5000;
        uVar10 = uVar12;
        if ((bRam0000000003eb52d0 & 1) == 0) {
          func_0x00f78a20(0x3d2e050);
          func_0x00f78a20(0x3d2e058);
          func_0x00f78a20(0x3d2e060);
          func_0x00f78a20(0x3d577c8);
          uVar10 = func_0x00f78a20(0x3d23990);
          bRam0000000003eb52d0 = 1;
        }
        if ((*(char *)(uVar12 + 0x50) == '\0') || (*(char *)(uVar12 + 0x38) != '\0')) {
          return uVar10;
        }
        if ((uVar8 != 0) && (lVar18 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar8,0), lVar18 != 0)) {
          uVar8 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar18,uRam0000000003d577c8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar8,0);
          if ((int)uVar10 == 0) {
            return uVar10;
          }
          if (uVar8 != 0) {
            if (*(int *)(uVar8 + 0x60) != 0) {
              return uVar10;
            }
            if (*(long *)(uVar12 + 0x90) != 0) {
              if (*(char *)(*(long *)(uVar12 + 0x90) + 0xce) == '\0') {
                return uVar10;
              }
              lVar18 = *(long *)(uVar12 + 0x148);
              if (lVar18 != 0) {
                puVar23 = &UNK_015c023c;
                uVar10 = unaff_x22;
                goto code_r0x01ec8898;
              }
            }
          }
        }
        uVar10 = func_0x00f78af4();
        *(ulong *)(puVar2 + -0x90) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x88) = 0x3eb5000;
        *(ulong *)(puVar2 + -0x80) = uVar8;
        *(ulong *)(puVar2 + -0x78) = uVar12;
        *(undefined1 **)(puVar2 + -0x70) = puVar22;
        *(undefined **)(puVar2 + -0x68) = &Atlas_Audio_KartAudio__PlayVFXAudio;
        uVar8 = uVar10;
        if ((bRam0000000003eb52d4 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          uVar8 = func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52d4 = 1;
        }
        if (*(char *)(uVar10 + 0x38) == '\0') {
          lVar18 = *(long *)(uVar10 + 0x150);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar18 == 0) {
            auVar28 = func_0x00f78af4();
            uVar16 = auVar28._8_8_;
            lVar18 = auVar28._0_8_;
            puVar3 = puVar2 + -0xd0;
            *(undefined8 *)(puVar2 + -0xd0) = unaff_x24;
            *(ulong *)(puVar2 + -200) = unaff_x23;
            *(ulong *)(puVar2 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar2 + -0xb8) = 0x3d1ff28;
            *(undefined8 *)(puVar2 + -0xb0) = 0;
            *(ulong *)(puVar2 + -0xa8) = uVar10;
            *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
            *(undefined **)(puVar2 + -0x98) = &Atlas_Audio_KartAudio__ExitPortal;
            puVar22 = puVar2 + -0xa0;
            if ((bRam0000000003eb52d6 & 1) == 0) {
              func_0x00f78a20(0x3d1ff28);
              func_0x00f78a20(0x3d2fb00);
              func_0x00f78a20(0x3d23990);
              bRam0000000003eb52d6 = 1;
            }
            lVar17 = *(long *)(lVar18 + 0x150);
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (lVar17 != 0) {
              uVar12 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar17,*(undefined8 *)
                                               (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x278),
                                       uRam0000000003d2fb00);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,0,0);
              if ((uVar8 & 1) == 0) {
                uVar16 = *(undefined8 *)(lVar18 + 0xb8);
              }
              if (uVar12 != 0) {
                puVar23 = &UNK_015c044c;
                uVar19 = uVar16;
                goto code_r0x01638d28;
              }
            }
            uVar8 = func_0x00f78af4();
            return uVar8;
          }
          uVar12 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar18,*(undefined8 *)
                                           (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x250),
                                   uRam0000000003d2fb00);
          uVar8 = 0;
          if (uVar12 != 0) {
            uVar16 = *(undefined8 *)(uVar10 + 0xb8);
            puVar22 = *(undefined1 **)(puVar2 + -0x70);
            puVar23 = *(undefined **)(puVar2 + -0x68);
            lVar18 = *(long *)(puVar2 + -0x78);
            puVar3 = puVar2 + -0x60;
            uVar19 = *(undefined8 *)(puVar2 + -0x80);
code_r0x01638d28:
            *(undefined8 *)(puVar3 + -0x20) = uVar19;
            *(long *)(puVar3 + -0x18) = lVar18;
            *(undefined1 **)(puVar3 + -0x10) = puVar22;
            *(undefined **)(puVar3 + -8) = puVar23;
            /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar12,uVar16,0);
            return uVar12;
          }
        }
        return uVar8;
      }
      uVar16 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar18,uRam0000000003d578c0);
      lVar18 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar8,0);
      if (lVar18 == 0) goto code_r0x015c0060;
      uVar8 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar18,uRam0000000003d577c8);
      uVar10 = 0x3d23990;
      uVar20 = 0x3d23990;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar16,0);
      if (iVar6 != 0) {
        puVar22 = *(undefined1 **)(puVar3 + -0xd0);
        puVar23 = *(undefined **)(puVar3 + -200);
        uVar8 = *(ulong *)(puVar3 + -0xe0);
        puVar2 = puVar3 + -0xc0;
        unaff_x22 = *(ulong *)(puVar3 + -0xf0);
        uVar16 = *(undefined8 *)(puVar3 + -0xe8);
        uVar10 = uVar12;
        uVar12 = *(ulong *)(puVar3 + -0xd8);
        goto code_r0x015c0064;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar8,0);
      if ((int)uVar11 == 0) {
        return uVar11;
      }
      unaff_x22 = uVar10;
      if (uVar8 == 0) goto code_r0x015c0060;
      iVar6 = *(int *)(uVar8 + 0x60);
      if (iVar6 != 0) {
        if (iVar6 == 2) {
          if (*(char *)(uVar8 + 0x50) != '\0') {
            return uVar11;
          }
          unaff_x22 = uVar20;
          if (*(long *)(uVar12 + 0x90) != 0) {
            if (*(char *)(*(long *)(uVar12 + 0x90) + 0xd2) == '\0') {
              return uVar11;
            }
            uVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar8,0);
            *(undefined8 *)(puVar3 + -0xf0) = *(undefined8 *)(puVar3 + -0xf0);
            *(undefined8 *)(puVar3 + -0xe8) = *(undefined8 *)(puVar3 + -0xe8);
            *(undefined8 *)(puVar3 + -0xe0) = *(undefined8 *)(puVar3 + -0xe0);
            *(undefined8 *)(puVar3 + -0xd8) = *(undefined8 *)(puVar3 + -0xd8);
            *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0xd0);
            *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -200);
            if ((bRam0000000003eb4876 & 1) == 0) {
              func_0x00f78a20(0x3d1ff30,uVar16,0);
              func_0x00f78a20(0x3d65d08);
              bRam0000000003eb4876 = 1;
            }
            uVar12 = *(ulong *)(uVar8 + 0xb0);
            if (uVar12 == 0) {
              uVar10 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*(undefined8 *)(uVar8 + 0x48),/*STR('')*/ uRam0000000003d65d08,0);
              if ((uVar10 & 1) == 0) {
                uVar12 = *(ulong *)(uVar8 + 0xb0);
              }
              else {
                uVar19 = *(undefined8 *)(uVar8 + 0x48);
                uVar12 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
                uVar10 = /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar12,uVar19,0,0,0);
                *(ulong *)(uVar8 + 0xb0) = uVar12;
              }
              if (uVar12 == 0) {
                return uVar10;
              }
            }
            puVar22 = *(undefined1 **)(puVar3 + -0xd0);
            puVar23 = *(undefined **)(puVar3 + -200);
            uVar19 = *(undefined8 *)(puVar3 + -0xe0);
            lVar18 = *(long *)(puVar3 + -0xd8);
            puVar3 = puVar3 + -0xc0;
            goto code_r0x01638d28;
          }
        }
        else {
          if (iVar6 != 1) {
            return uVar11;
          }
          if (*(long *)(uVar12 + 0x90) != 0) {
            if (*(char *)(*(long *)(uVar12 + 0x90) + 0xd1) != '\0') {
              fVar25 = *(float *)(uVar12 + 0x74) * 100.0;
              *(float *)(uVar8 + 0xc0) = fVar25 * _UNK_033f82c0 + _UNK_033f82c4;
              *(float *)(uVar8 + 0xc4) = fVar25;
              return uVar8;
            }
            return uVar11;
          }
        }
        goto code_r0x015c0060;
      }
      if (*(char *)(uVar8 + 0x68) != '\0') {
        return uVar11;
      }
      unaff_x22 = uVar20;
      if (*(long *)(uVar12 + 0x90) == 0) goto code_r0x015c0060;
      if (*(char *)(*(long *)(uVar12 + 0x90) + 0xce) == '\0') {
        return uVar11;
      }
      lVar18 = *(long *)(uVar12 + 0x148);
      if (lVar18 == 0) goto code_r0x015c0060;
      puVar23 = &UNK_015bff78;
code_r0x01ec8898:
      *(undefined1 **)(puVar5 + -0x10) = puVar22;
      *(undefined **)(puVar5 + -8) = puVar23;
      if (lVar18 != 0) {
        uVar7 = (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(uRam0000000003d2e050 + 0x18) + 0xc0) + 0x40))();
        return (ulong)(~uVar7 >> 0x1f);
      }
      uVar20 = uRam0000000003d2e050;
      auVar28 = func_0x00f78af4(0,uVar8);
      lVar18 = auVar28._0_8_;
      *(undefined8 *)(puVar5 + -0x50) = unaff_x24;
      *(ulong *)(puVar5 + -0x48) = unaff_x23;
      *(ulong *)(puVar5 + -0x40) = uVar10;
      *(undefined8 *)(puVar5 + -0x38) = uVar16;
      *(ulong *)(puVar5 + -0x30) = uVar8;
      *(ulong *)(puVar5 + -0x28) = uVar12;
      *(undefined1 **)(puVar5 + -0x20) = puVar5 + -0x10;
      *(undefined **)(puVar5 + -0x18) =
           &System_Collections_Generic_Dictionary_object__EventInstance___ContainsValue;
      plVar13 = (long *)(*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(uVar20 + 0x18) + 0xc0) + 0x68))();
      iVar6 = *(int *)(lVar18 + 0x20);
      if (iVar6 < 1) {
        return 0;
      }
      lVar17 = 0;
      uVar8 = 0;
      break;
    }
    if (*(char *)(*(long *)(uVar8 + 0x90) + 0xcd) == '\0') {
      return uVar8;
    }
    puVar22 = *(undefined1 **)(puVar3 + -0xc0);
    puVar23 = *(undefined **)(puVar3 + -0xb8);
    puVar3 = puVar3 + -0xb0;
  } while( true );
code_r0x01ec8914:
  lVar9 = *(long *)(lVar18 + 0x18);
  if (lVar9 == 0) {
code_r0x01ec898c:
    func_0x00f78af4();
code_r0x01ec8990:
    uVar16 = func_0x00f78b24();
    auVar29 = func_0x00f78ac0(uVar16,0);
    lVar9 = auVar29._8_8_;
    lVar14 = auVar29._0_8_;
    *(undefined8 *)(puVar5 + -0xa0) = unaff_x26;
    *(undefined8 *)(puVar5 + -0x98) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x90) = unaff_x24;
    *(ulong *)(puVar5 + -0x88) = uVar8;
    *(long *)(puVar5 + -0x80) = lVar17;
    *(long **)(puVar5 + -0x78) = plVar13;
    *(undefined1 (*) [16])(puVar5 + -0x70) = auVar28;
    *(undefined1 **)(puVar5 + -0x60) = puVar5 + -0x20;
    *(undefined **)(puVar5 + -0x58) =
         &System_Collections_Generic_Dictionary_object__EventInstance___CopyTo;
    if (lVar9 == 0) goto code_r0x01ec8b28;
    uVar7 = (uint)uVar20;
    if (((int)uVar7 < 0) || (*(int *)(lVar9 + 0x18) < (int)uVar7)) goto code_r0x01ec8aa8;
    if (lVar14 == 0) goto code_r0x01ec8b24;
    uVar8 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_7 + 0x18) + 0xc0) + 0x90))(lVar14)
    ;
    if ((int)(*(int *)(lVar9 + 0x18) - uVar7) < (int)uVar8) {
      func_0x00f78a24(0x3d1fce8);
      uVar16 = func_0x00f78aec();
      uVar19 = func_0x00f78a24(0x3d6bc10);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar16,uVar19,0);
      goto code_r0x01ec8b8c;
    }
    uVar1 = *(uint *)(lVar14 + 0x20);
    if ((int)uVar1 < 1) {
      return uVar8;
    }
    lVar18 = *(long *)(lVar14 + 0x18);
    if (lVar18 == 0) goto code_r0x01ec8b24;
    uVar10 = 0;
    puVar21 = (undefined8 *)(lVar18 + 0x30);
    goto code_r0x01ec8a24;
  }
  if (*(uint *)(lVar9 + 0x18) <= uVar8) goto code_r0x01ec8990;
  if (-1 < *(int *)(lVar9 + lVar17 + 0x20)) {
    if (plVar13 == (long *)0x0) goto code_r0x01ec898c;
    param_7 = *(long *)(*plVar13 + 0x1c0);
    uVar20 = auVar28._8_8_;
    uVar10 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(lVar9 + lVar17 + 0x30));
    if ((uVar10 & 1) != 0) {
      return 1;
    }
    iVar6 = *(int *)(lVar18 + 0x20);
  }
  uVar8 = uVar8 + 1;
  lVar17 = lVar17 + 0x18;
  if ((long)iVar6 <= (long)uVar8) {
    return 0;
  }
  goto code_r0x01ec8914;
code_r0x01ec8a24:
  uVar7 = (uint)uVar20;
  if (*(uint *)(lVar18 + 0x18) <= uVar10) {
code_r0x01ec8a9c:
    uVar16 = func_0x00f78b24();
    func_0x00f78ac0(uVar16,0);
code_r0x01ec8aa8:
    *(uint *)(puVar5 + -0xb0) = uVar7;
    uVar16 = func_0x00f78a24(0x3d22910);
    uVar16 = func_0x00f78ae0(uVar16,puVar5 + -0xb0);
    func_0x00f78a24(0x3d1fcf8);
    lVar9 = func_0x00f78aec();
    uVar19 = func_0x00f78a24(0x3d79a60);
    uVar15 = func_0x00f78a24(0x3d6de28);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(lVar9,uVar19,uVar16,uVar15,0);
    uVar16 = func_0x00f78a24(0x3d2f4b0);
    func_0x00f78ac0(lVar9,uVar16);
code_r0x01ec8b24:
    func_0x00f78af4();
    lVar18 = lVar9;
code_r0x01ec8b28:
    func_0x00f78a24(0x3d1fcf0);
    uVar16 = func_0x00f78aec();
    uVar19 = func_0x00f78a24(0x3d77d18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar16,uVar19,0);
    lVar9 = lVar18;
code_r0x01ec8b8c:
    uVar19 = func_0x00f78a24(0x3d2f4b0);
    auVar28 = func_0x00f78ac0(uVar16,uVar19);
    *(long *)(puVar5 + -0xd0) = lVar9;
    *(undefined8 *)(puVar5 + -200) = uVar16;
    *(undefined1 **)(puVar5 + -0xc0) = puVar5 + -0x60;
    *(undefined **)(puVar5 + -0xb8) =
         &System_Collections_Generic_Dictionary_object__EventInstance___GetEnumerator;
    *(undefined8 *)(puVar5 + -0xe0) = 0;
    *(undefined8 *)(puVar5 + -0xf8) = 0;
    *(undefined8 *)(puVar5 + -0x100) = 0;
    *(undefined8 *)(puVar5 + -0xe8) = 0;
    *(undefined8 *)(puVar5 + -0xf0) = 0;
    uVar8 = /*System.Collections.Generic.Dictionary.Enumerator<object, EventInstance>$$.ctor*/ func_0x01fd20e8(puVar5 + -0x100,auVar28._0_8_,2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(auVar28._8_8_ + 0x18) + 0xc0) + 0xb0));
    uVar16 = *(undefined8 *)(puVar5 + -0x100);
    uVar15 = *(undefined8 *)(puVar5 + -0xe8);
    uVar19 = *(undefined8 *)(puVar5 + -0xf0);
    extraout_x8[1] = *(undefined8 *)(puVar5 + -0xf8);
    *extraout_x8 = uVar16;
    extraout_x8[3] = uVar15;
    extraout_x8[2] = uVar19;
    extraout_x8[4] = *(undefined8 *)(puVar5 + -0xe0);
    return uVar8;
  }
  if (-1 < *(int *)(puVar21 + -2)) {
    uVar16 = puVar21[-1];
    uVar19 = *puVar21;
    *(undefined8 *)(puVar5 + -0xb0) = 0;
    *(undefined8 *)(puVar5 + -0xa8) = 0;
    uVar8 = /*System.Collections.Generic.KeyValuePair<object, EventInstance>$$.ctor*/ func_0x023181f4(puVar5 + -0xb0,uVar16,uVar19,
                            *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x18) + 0xc0) + 0xa0));
    if (*(uint *)(lVar9 + 0x18) <= uVar7) goto code_r0x01ec8a9c;
    lVar17 = lVar9 + (long)(int)uVar7 * 0x10;
    uVar20 = (ulong)(uVar7 + 1);
    uVar16 = *(undefined8 *)(puVar5 + -0xb0);
    *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(puVar5 + -0xa8);
    *(undefined8 *)(lVar17 + 0x20) = uVar16;
  }
  uVar10 = uVar10 + 1;
  puVar21 = puVar21 + 3;
  if (uVar1 == uVar10) {
    return uVar8;
  }
  goto code_r0x01ec8a24;
}



// ============================================================
// RVA: 0x15bf9ec | Atlas.Audio.KartAudio.StopScraping
// ============================================================

/* WARNING: Possible PIC construction at 0x015c0238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015c0448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bff74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015c044c) */
/* WARNING: Removing unreachable block (ram,0x015c0484) */
/* WARNING: Removing unreachable block (ram,0x015c0488) */
/* WARNING: Removing unreachable block (ram,0x015c0490) */
/* WARNING: Removing unreachable block (ram,0x015c0498) */
/* WARNING: Removing unreachable block (ram,0x015c0460) */
/* WARNING: Removing unreachable block (ram,0x015c0464) */
/* WARNING: Removing unreachable block (ram,0x015c046c) */
/* WARNING: Removing unreachable block (ram,0x015c0474) */
/* WARNING: Removing unreachable block (ram,0x015c04a4) */
/* WARNING: Removing unreachable block (ram,0x015c04b8) */
/* WARNING: Removing unreachable block (ram,0x015c0480) */
/* WARNING: Removing unreachable block (ram,0x015c023c) */
/* WARNING: Removing unreachable block (ram,0x015c0240) */
/* WARNING: Removing unreachable block (ram,0x015c0248) */
/* WARNING: Removing unreachable block (ram,0x015c0264) */
/* WARNING: Removing unreachable block (ram,0x015c027c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f0c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f34) */
/* WARNING: Removing unreachable block (ram,0x01ec9f40) */
/* WARNING: Removing unreachable block (ram,0x01ec9f48) */
/* WARNING: Removing unreachable block (ram,0x01ec9f64) */
/* WARNING: Removing unreachable block (ram,0x01ec9f6c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f78) */
/* WARNING: Removing unreachable block (ram,0x01ec9f80) */
/* WARNING: Removing unreachable block (ram,0x01ec9fac) */
/* WARNING: Removing unreachable block (ram,0x01ec9f8c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f98) */
/* WARNING: Removing unreachable block (ram,0x01ec9fbc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fd4) */
/* WARNING: Removing unreachable block (ram,0x01ec9fdc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fec) */
/* WARNING: Removing unreachable block (ram,0x01ec9ff8) */
/* WARNING: Removing unreachable block (ram,0x01eca008) */
/* WARNING: Removing unreachable block (ram,0x01eca00c) */
/* WARNING: Removing unreachable block (ram,0x01eca01c) */
/* WARNING: Removing unreachable block (ram,0x01eca030) */
/* WARNING: Removing unreachable block (ram,0x01eca038) */
/* WARNING: Removing unreachable block (ram,0x01eca058) */
/* WARNING: Removing unreachable block (ram,0x01eca060) */
/* WARNING: Removing unreachable block (ram,0x01eca06c) */
/* WARNING: Removing unreachable block (ram,0x01eca074) */
/* WARNING: Removing unreachable block (ram,0x01eca0a0) */
/* WARNING: Removing unreachable block (ram,0x01eca080) */
/* WARNING: Removing unreachable block (ram,0x01eca08c) */
/* WARNING: Removing unreachable block (ram,0x01eca0ac) */
/* WARNING: Removing unreachable block (ram,0x01eca10c) */
/* WARNING: Removing unreachable block (ram,0x01eca148) */
/* WARNING: Removing unreachable block (ram,0x01eca150) */
/* WARNING: Removing unreachable block (ram,0x01eca160) */
/* WARNING: Removing unreachable block (ram,0x01eca168) */
/* WARNING: Removing unreachable block (ram,0x01eca174) */
/* WARNING: Removing unreachable block (ram,0x01eca110) */
/* WARNING: Removing unreachable block (ram,0x01eca118) */
/* WARNING: Removing unreachable block (ram,0x01eca124) */
/* WARNING: Removing unreachable block (ram,0x01eca12c) */
/* WARNING: Removing unreachable block (ram,0x01eca188) */
/* WARNING: Removing unreachable block (ram,0x01eca190) */
/* WARNING: Removing unreachable block (ram,0x01eca1b0) */
/* WARNING: Removing unreachable block (ram,0x01eca1bc) */
/* WARNING: Removing unreachable block (ram,0x01eca0c4) */
/* WARNING: Removing unreachable block (ram,0x01eca1e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0cc) */
/* WARNING: Removing unreachable block (ram,0x01eca1ec) */
/* WARNING: Removing unreachable block (ram,0x01eca1f8) */
/* WARNING: Removing unreachable block (ram,0x01eca250) */
/* WARNING: Removing unreachable block (ram,0x01eca298) */
/* WARNING: Removing unreachable block (ram,0x01eca270) */
/* WARNING: Removing unreachable block (ram,0x01eca2b0) */
/* WARNING: Removing unreachable block (ram,0x01eca278) */
/* WARNING: Removing unreachable block (ram,0x01eca2b4) */
/* WARNING: Removing unreachable block (ram,0x01eca2e8) */
/* WARNING: Removing unreachable block (ram,0x01eca2cc) */
/* WARNING: Removing unreachable block (ram,0x01eca284) */
/* WARNING: Removing unreachable block (ram,0x01eca29c) */
/* WARNING: Removing unreachable block (ram,0x01eca0d8) */
/* WARNING: Removing unreachable block (ram,0x01eca0e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0ec) */
/* WARNING: Removing unreachable block (ram,0x015bff78) */
/* WARNING: Removing unreachable block (ram,0x015bff7c) */
/* WARNING: Removing unreachable block (ram,0x015bff94) */
/* WARNING: Removing unreachable block (ram,0x015bff9c) */
/* WARNING: Removing unreachable block (ram,0x015bffa4) */
/* WARNING: Removing unreachable block (ram,0x015bffcc) */
/* WARNING: Removing unreachable block (ram,0x015bfff0) */
/* WARNING: Removing unreachable block (ram,0x01ec8614) */
/* WARNING: Removing unreachable block (ram,0x01ec863c) */
/* WARNING: Removing unreachable block (ram,0x01ec8664) */
/* WARNING: Removing unreachable block (ram,0x01ec867c) */
/* WARNING: Removing unreachable block (ram,0x01ec86a0) */
/* WARNING: Removing unreachable block (ram,0x01ec86c0) */
/* WARNING: Removing unreachable block (ram,0x01ec86cc) */
/* WARNING: Removing unreachable block (ram,0x01ec870c) */
/* WARNING: Removing unreachable block (ram,0x01ec8710) */
/* WARNING: Removing unreachable block (ram,0x01ec8734) */
/* WARNING: Removing unreachable block (ram,0x01ec87d0) */
/* WARNING: Removing unreachable block (ram,0x01ec875c) */
/* WARNING: Removing unreachable block (ram,0x01ec877c) */
/* WARNING: Removing unreachable block (ram,0x01ec8788) */
/* WARNING: Removing unreachable block (ram,0x01ec87e8) */
/* WARNING: Removing unreachable block (ram,0x01ec87ec) */
/* WARNING: Removing unreachable block (ram,0x01ec8810) */
/* WARNING: Removing unreachable block (ram,0x01ec881c) */
/* WARNING: Removing unreachable block (ram,0x01ec8828) */
/* WARNING: Removing unreachable block (ram,0x01ec8838) */
/* WARNING: Removing unreachable block (ram,0x01ec8840) */
/* WARNING: Removing unreachable block (ram,0x01ec8888) */
/* WARNING: Removing unreachable block (ram,0x01ec8894) */
/* WARNING: Removing unreachable block (ram,0x01ec8844) */
/* WARNING: Removing unreachable block (ram,0x01ec8854) */
/* WARNING: Removing unreachable block (ram,0x01ec887c) */
/* WARNING: Removing unreachable block (ram,0x01ec878c) */
/* WARNING: Removing unreachable block (ram,0x01ec87ac) */
/* WARNING: Removing unreachable block (ram,0x01ec87d4) */
/* WARNING: Removing unreachable block (ram,0x01ec86d0) */
/* WARNING: Removing unreachable block (ram,0x01ec86f8) */
/* WARNING: Removing unreachable block (ram,0x01ec86f0) */
/* WARNING: Removing unreachable block (ram,0x01ec86fc) */
/* WARNING: Removing unreachable block (ram,0x01ec864c) */
/* WARNING: Removing unreachable block (ram,0x01ec8620) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Audio_KartAudio__StopScraping
                (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,ulong param_4,
                undefined8 param_5,undefined8 param_6,long param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *extraout_x8;
  long lVar15;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar16;
  long unaff_x21;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong unaff_x22;
  ulong uVar19;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 *puVar20;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined1 *puVar21;
  undefined8 unaff_x30;
  undefined *puVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  ulong unaff_d8;
  float fVar26;
  ulong unaff_d9;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  auVar27._8_8_ = unaff_x20;
  auVar27._0_8_ = unaff_x19;
  do {
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = auVar27._8_8_;
    *(long *)((long)register0x00000008 + -0x18) = auVar27._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb52cc & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d2fb00);
      bRam0000000003eb52cc = 1;
    }
    lVar16 = *(long *)(param_4 + 0x150);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar16 != 0) {
      lVar16 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar16,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x238),
                               uRam0000000003d2fb00);
      uVar7 = 0;
      if (lVar16 != 0) {
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = /*Core.Audio.AudioEvent$$SetParameter*/ func_0x01638fc8(0,lVar16,*(undefined8 *)
                                          (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1c8),0,0);
      }
      *(undefined4 *)(param_4 + 0x70) = 0xbf800000;
      return uVar7;
    }
    auVar27 = func_0x00f78af4();
    lVar16 = auVar27._8_8_;
    uVar9 = auVar27._0_8_;
    *(ulong *)((long)register0x00000008 + -0x90) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x88) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3d1ff28;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(ulong *)((long)register0x00000008 + -0x48) = param_4;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &Atlas_Audio_KartAudio__OnCollisionEnter;
    unaff_x21 = 0x3eb5000;
    uVar7 = uVar9;
    if ((bRam0000000003eb52ce & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d578a8);
      uVar7 = func_0x00f78a20(0x3d23990);
      bRam0000000003eb52ce = 1;
    }
    fVar24 = _UNK_033f83fc;
    if (*(char *)(uVar9 + 0x50) == '\0') {
      return uVar7;
    }
    if (*(char *)(uVar9 + 0x38) != '\0') {
      return uVar7;
    }
    if (*(long *)(uVar9 + 0x90) != 0) {
      if (*(char *)(*(long *)(uVar9 + 0x90) + 0xcd) == '\0') {
        return uVar7;
      }
      if (*(float *)(uVar9 + 0x68) <= _UNK_033f83fc) {
        return uVar7;
      }
      if (*(int *)(lVar16 + 0x20) == 5) {
        return uVar7;
      }
      *(undefined4 *)(uVar9 + 0x68) = 0;
      if ((*(long *)(lVar16 + 8) != 0) &&
         (lVar8 = /*UnityEngine.Collision$$get_gameObject*/ func_0x0329ee78(*(long *)(lVar16 + 8),0), lVar8 != 0)) {
        unaff_x21 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar8,uRam0000000003d578a8);
        if (*(long *)(lVar16 + 8) != 0) {
          uVar23 = /*UnityEngine.Collision$$get_relativeVelocity*/ func_0x0329ede4(*(long *)(lVar16 + 8),0);
          *(undefined4 *)((long)register0x00000008 + -0xa0) = uVar23;
          *(float *)((long)register0x00000008 + -0x9c) = fVar24;
          *(undefined4 *)((long)register0x00000008 + -0x98) = param_3;
          uVar23 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc((undefined1 *)((long)register0x00000008 + -0xa0),0);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          fVar24 = (float)/*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar23,*(undefined4 *)
                                                  (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8),0);
          unaff_d8 = (ulong)(uint)fVar24;
          fVar26 = *(float *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8);
          unaff_d9 = (ulong)(uint)fVar26;
          unaff_x22 = (ulong)((*(uint *)(lVar16 + 0x20) & 0xfffffffe) == 2);
          unaff_x25 = 0x3d23990;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(unaff_x21,0);
          if ((int)uVar7 == 0) {
            unaff_x23 = 1;
          }
          else {
            if (unaff_x21 == 0) goto code_r0x015bfd5c;
            unaff_x23 = (ulong)*(uint *)(unaff_x21 + 0x1c);
          }
          if (*(int *)(lVar16 + 0x20) == 0) {
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(unaff_x21,0);
            if ((int)uVar7 != 0) {
              if (unaff_x21 == 0) goto code_r0x015bfd5c;
              fVar25 = 3.0;
              if ((*(uint *)(unaff_x21 + 0x1c) & 0xfffffffe) == 8) goto code_r0x015bfce0;
            }
          }
          if (3 < *(int *)(lVar16 + 0x20) - 1U) {
            return uVar7;
          }
          fVar25 = (fVar24 / fVar26) * 3.0;
code_r0x015bfce0:
          uVar23 = 0;
          if (*(char *)(lVar16 + 0x1c) != '\0') {
            uVar23 = 0xbf800000;
          }
          *(undefined4 *)(uVar9 + 0x70) = uVar23;
          /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(fVar25,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
          uVar7 = Atlas_Audio_KartAudio__PlayCollision(uVar9,unaff_x23);
          return uVar7;
        }
      }
    }
code_r0x015bfd5c:
    param_4 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0xb8) = &Atlas_Audio_KartAudio__OnCollisionExit;
    if ((*(char *)(param_4 + 0x50) == '\0') || (*(char *)(param_4 + 0x38) != '\0')) {
      return param_4;
    }
    if (*(long *)(param_4 + 0x90) == 0) {
      auVar27 = func_0x00f78af4();
      uVar7 = auVar27._8_8_;
      uVar11 = auVar27._0_8_;
      puVar4 = (undefined1 *)((long)register0x00000008 + -0xf0);
      puVar2 = (undefined1 *)((long)register0x00000008 + -0xf0);
      *(ulong *)((long)register0x00000008 + -0xf0) = unaff_x22;
      *(long *)((long)register0x00000008 + -0xe8) = unaff_x21;
      *(long *)((long)register0x00000008 + -0xe0) = lVar16;
      *(ulong *)((long)register0x00000008 + -0xd8) = uVar9;
      *(undefined1 **)((long)register0x00000008 + -0xd0) =
           (undefined1 *)((long)register0x00000008 + -0xc0);
      *(undefined **)((long)register0x00000008 + -200) = &Atlas_Audio_KartAudio__OnTriggerEnter;
      puVar21 = (undefined1 *)((long)register0x00000008 + -0xd0);
      uVar17 = 0x3eb5000;
      uVar9 = uVar11;
      if ((bRam0000000003eb52cf & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d2e048);
        func_0x00f78a20(0x3d2e050);
        func_0x00f78a20(0x3d577c8);
        func_0x00f78a20(0x3d578c0);
        uVar9 = func_0x00f78a20(0x3d23990);
        bRam0000000003eb52cf = 1;
      }
      if (*(char *)(uVar11 + 0x50) == '\0') {
        return uVar9;
      }
      if (*(char *)(uVar11 + 0x38) != '\0') {
        return uVar9;
      }
      if (*(float *)(uVar11 + 100) <= _UNK_033f8140) {
        return uVar9;
      }
      *(undefined4 *)(uVar11 + 100) = 0;
      if ((uVar7 == 0) || (lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar7,0), lVar16 == 0)) {
code_r0x015c0060:
        puVar22 = &Atlas_Audio_KartAudio__PickupPickedUp;
        uVar9 = func_0x00f78af4();
code_r0x015c0064:
        *(ulong *)(puVar2 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x28) = uVar17;
        *(ulong *)(puVar2 + -0x20) = uVar7;
        *(ulong *)(puVar2 + -0x18) = uVar11;
        *(undefined1 **)(puVar2 + -0x10) = puVar21;
        *(undefined **)(puVar2 + -8) = puVar22;
        uVar7 = uVar9;
        if ((bRam0000000003eb52d1 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          uVar7 = func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52d1 = 1;
        }
        if (*(char *)(uVar9 + 0x38) != '\0') {
          return uVar7;
        }
        lVar16 = *(long *)(uVar9 + 0x150);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((lVar16 != 0) &&
           (uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar16,*(undefined8 *)
                                             (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x230),
                                     uRam0000000003d2fb00), uVar11 != 0)) {
          uVar17 = *(undefined8 *)(uVar9 + 0xb8);
          puVar21 = *(undefined1 **)(puVar2 + -0x10);
          puVar22 = *(undefined **)(puVar2 + -8);
          lVar16 = *(long *)(puVar2 + -0x18);
          puVar3 = puVar2;
          uVar18 = *(undefined8 *)(puVar2 + -0x20);
          goto code_r0x01638d28;
        }
        auVar27 = func_0x00f78af4();
        uVar7 = auVar27._8_8_;
        uVar11 = auVar27._0_8_;
        puVar4 = puVar2 + -0x60;
        *(ulong *)(puVar2 + -0x60) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x58) = 0x3d1ff28;
        *(long *)(puVar2 + -0x50) = lVar16;
        *(ulong *)(puVar2 + -0x48) = uVar9;
        *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
        *(undefined **)(puVar2 + -0x38) = &Atlas_Audio_KartAudio__OnTriggerExit;
        puVar21 = puVar2 + -0x40;
        uVar17 = 0x3eb5000;
        uVar9 = uVar11;
        if ((bRam0000000003eb52d0 & 1) == 0) {
          func_0x00f78a20(0x3d2e050);
          func_0x00f78a20(0x3d2e058);
          func_0x00f78a20(0x3d2e060);
          func_0x00f78a20(0x3d577c8);
          uVar9 = func_0x00f78a20(0x3d23990);
          bRam0000000003eb52d0 = 1;
        }
        if ((*(char *)(uVar11 + 0x50) == '\0') || (*(char *)(uVar11 + 0x38) != '\0')) {
          return uVar9;
        }
        if ((uVar7 != 0) && (lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar7,0), lVar16 != 0)) {
          uVar7 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar16,uRam0000000003d577c8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar9 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar7,0);
          if ((int)uVar9 == 0) {
            return uVar9;
          }
          if (uVar7 != 0) {
            if (*(int *)(uVar7 + 0x60) != 0) {
              return uVar9;
            }
            if (*(long *)(uVar11 + 0x90) != 0) {
              if (*(char *)(*(long *)(uVar11 + 0x90) + 0xce) == '\0') {
                return uVar9;
              }
              lVar16 = *(long *)(uVar11 + 0x148);
              if (lVar16 != 0) {
                puVar22 = &UNK_015c023c;
                uVar9 = unaff_x22;
                goto code_r0x01ec8898;
              }
            }
          }
        }
        uVar9 = func_0x00f78af4();
        *(ulong *)(puVar2 + -0x90) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x88) = 0x3eb5000;
        *(ulong *)(puVar2 + -0x80) = uVar7;
        *(ulong *)(puVar2 + -0x78) = uVar11;
        *(undefined1 **)(puVar2 + -0x70) = puVar21;
        *(undefined **)(puVar2 + -0x68) = &Atlas_Audio_KartAudio__PlayVFXAudio;
        uVar7 = uVar9;
        if ((bRam0000000003eb52d4 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          uVar7 = func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52d4 = 1;
        }
        if (*(char *)(uVar9 + 0x38) == '\0') {
          lVar16 = *(long *)(uVar9 + 0x150);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar16 == 0) {
            auVar27 = func_0x00f78af4();
            uVar17 = auVar27._8_8_;
            lVar16 = auVar27._0_8_;
            puVar3 = puVar2 + -0xd0;
            *(undefined8 *)(puVar2 + -0xd0) = unaff_x24;
            *(ulong *)(puVar2 + -200) = unaff_x23;
            *(ulong *)(puVar2 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar2 + -0xb8) = 0x3d1ff28;
            *(undefined8 *)(puVar2 + -0xb0) = 0;
            *(ulong *)(puVar2 + -0xa8) = uVar9;
            *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
            *(undefined **)(puVar2 + -0x98) = &Atlas_Audio_KartAudio__ExitPortal;
            puVar21 = puVar2 + -0xa0;
            if ((bRam0000000003eb52d6 & 1) == 0) {
              func_0x00f78a20(0x3d1ff28);
              func_0x00f78a20(0x3d2fb00);
              func_0x00f78a20(0x3d23990);
              bRam0000000003eb52d6 = 1;
            }
            lVar8 = *(long *)(lVar16 + 0x150);
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (lVar8 != 0) {
              uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar8,*(undefined8 *)
                                              (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x278),
                                       uRam0000000003d2fb00);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
              if ((uVar7 & 1) == 0) {
                uVar17 = *(undefined8 *)(lVar16 + 0xb8);
              }
              if (uVar11 != 0) {
                puVar22 = &UNK_015c044c;
                uVar18 = uVar17;
                goto code_r0x01638d28;
              }
            }
            uVar7 = func_0x00f78af4();
            return uVar7;
          }
          uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar16,*(undefined8 *)
                                           (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x250),
                                   uRam0000000003d2fb00);
          uVar7 = 0;
          if (uVar11 != 0) {
            uVar17 = *(undefined8 *)(uVar9 + 0xb8);
            puVar21 = *(undefined1 **)(puVar2 + -0x70);
            puVar22 = *(undefined **)(puVar2 + -0x68);
            lVar16 = *(long *)(puVar2 + -0x78);
            puVar3 = puVar2 + -0x60;
            uVar18 = *(undefined8 *)(puVar2 + -0x80);
code_r0x01638d28:
            *(undefined8 *)(puVar3 + -0x20) = uVar18;
            *(long *)(puVar3 + -0x18) = lVar16;
            *(undefined1 **)(puVar3 + -0x10) = puVar21;
            *(undefined **)(puVar3 + -8) = puVar22;
            /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar11,uVar17,0);
            return uVar11;
          }
        }
        return uVar7;
      }
      uVar17 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar16,uRam0000000003d578c0);
      lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar7,0);
      if (lVar16 == 0) goto code_r0x015c0060;
      uVar7 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar16,uRam0000000003d577c8);
      uVar9 = 0x3d23990;
      uVar19 = 0x3d23990;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar17,0);
      if (iVar5 != 0) {
        puVar21 = *(undefined1 **)((long)register0x00000008 + -0xd0);
        puVar22 = *(undefined **)((long)register0x00000008 + -200);
        uVar7 = *(ulong *)((long)register0x00000008 + -0xe0);
        puVar2 = (undefined1 *)((long)register0x00000008 + -0xc0);
        unaff_x22 = *(ulong *)((long)register0x00000008 + -0xf0);
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0xe8);
        uVar9 = uVar11;
        uVar11 = *(ulong *)((long)register0x00000008 + -0xd8);
        goto code_r0x015c0064;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar7,0);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      unaff_x22 = uVar9;
      if (uVar7 == 0) goto code_r0x015c0060;
      iVar5 = *(int *)(uVar7 + 0x60);
      if (iVar5 != 0) {
        if (iVar5 == 2) {
          if (*(char *)(uVar7 + 0x50) != '\0') {
            return uVar10;
          }
          unaff_x22 = uVar19;
          if (*(long *)(uVar11 + 0x90) != 0) {
            if (*(char *)(*(long *)(uVar11 + 0x90) + 0xd2) == '\0') {
              return uVar10;
            }
            uVar17 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar7,0);
            *(undefined8 *)((long)register0x00000008 + -0xf0) =
                 *(undefined8 *)((long)register0x00000008 + -0xf0);
            *(undefined8 *)((long)register0x00000008 + -0xe8) =
                 *(undefined8 *)((long)register0x00000008 + -0xe8);
            *(undefined8 *)((long)register0x00000008 + -0xe0) =
                 *(undefined8 *)((long)register0x00000008 + -0xe0);
            *(undefined8 *)((long)register0x00000008 + -0xd8) =
                 *(undefined8 *)((long)register0x00000008 + -0xd8);
            *(undefined8 *)((long)register0x00000008 + -0xd0) =
                 *(undefined8 *)((long)register0x00000008 + -0xd0);
            *(undefined8 *)((long)register0x00000008 + -200) =
                 *(undefined8 *)((long)register0x00000008 + -200);
            if ((bRam0000000003eb4876 & 1) == 0) {
              func_0x00f78a20(0x3d1ff30,uVar17,0);
              func_0x00f78a20(0x3d65d08);
              bRam0000000003eb4876 = 1;
            }
            uVar11 = *(ulong *)(uVar7 + 0xb0);
            if (uVar11 == 0) {
              uVar9 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*(undefined8 *)(uVar7 + 0x48),/*STR('')*/ uRam0000000003d65d08,0);
              if ((uVar9 & 1) == 0) {
                uVar11 = *(ulong *)(uVar7 + 0xb0);
              }
              else {
                uVar18 = *(undefined8 *)(uVar7 + 0x48);
                uVar11 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
                uVar9 = /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar11,uVar18,0,0,0);
                *(ulong *)(uVar7 + 0xb0) = uVar11;
              }
              if (uVar11 == 0) {
                return uVar9;
              }
            }
            puVar21 = *(undefined1 **)((long)register0x00000008 + -0xd0);
            puVar22 = *(undefined **)((long)register0x00000008 + -200);
            uVar18 = *(undefined8 *)((long)register0x00000008 + -0xe0);
            lVar16 = *(long *)((long)register0x00000008 + -0xd8);
            puVar3 = (undefined1 *)((long)register0x00000008 + -0xc0);
            goto code_r0x01638d28;
          }
        }
        else {
          if (iVar5 != 1) {
            return uVar10;
          }
          if (*(long *)(uVar11 + 0x90) != 0) {
            if (*(char *)(*(long *)(uVar11 + 0x90) + 0xd1) != '\0') {
              fVar24 = *(float *)(uVar11 + 0x74) * 100.0;
              *(float *)(uVar7 + 0xc0) = fVar24 * _UNK_033f82c0 + _UNK_033f82c4;
              *(float *)(uVar7 + 0xc4) = fVar24;
              return uVar7;
            }
            return uVar10;
          }
        }
        goto code_r0x015c0060;
      }
      if (*(char *)(uVar7 + 0x68) != '\0') {
        return uVar10;
      }
      unaff_x22 = uVar19;
      if (*(long *)(uVar11 + 0x90) == 0) goto code_r0x015c0060;
      if (*(char *)(*(long *)(uVar11 + 0x90) + 0xce) == '\0') {
        return uVar10;
      }
      lVar16 = *(long *)(uVar11 + 0x148);
      if (lVar16 == 0) goto code_r0x015c0060;
      puVar22 = &UNK_015bff78;
code_r0x01ec8898:
      *(undefined1 **)(puVar4 + -0x10) = puVar21;
      *(undefined **)(puVar4 + -8) = puVar22;
      if (lVar16 != 0) {
        uVar6 = (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(uRam0000000003d2e050 + 0x18) + 0xc0) + 0x40))();
        return (ulong)(~uVar6 >> 0x1f);
      }
      uVar19 = uRam0000000003d2e050;
      auVar27 = func_0x00f78af4(0,uVar7);
      lVar16 = auVar27._0_8_;
      *(undefined8 *)(puVar4 + -0x50) = unaff_x24;
      *(ulong *)(puVar4 + -0x48) = unaff_x23;
      *(ulong *)(puVar4 + -0x40) = uVar9;
      *(undefined8 *)(puVar4 + -0x38) = uVar17;
      *(ulong *)(puVar4 + -0x30) = uVar7;
      *(ulong *)(puVar4 + -0x28) = uVar11;
      *(undefined1 **)(puVar4 + -0x20) = puVar4 + -0x10;
      *(undefined **)(puVar4 + -0x18) =
           &System_Collections_Generic_Dictionary_object__EventInstance___ContainsValue;
      plVar12 = (long *)(*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(uVar19 + 0x18) + 0xc0) + 0x68))();
      iVar5 = *(int *)(lVar16 + 0x20);
      if (iVar5 < 1) {
        return 0;
      }
      lVar8 = 0;
      uVar7 = 0;
      break;
    }
    if (*(char *)(*(long *)(param_4 + 0x90) + 0xcd) == '\0') {
      return param_4;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  } while( true );
code_r0x01ec8914:
  lVar15 = *(long *)(lVar16 + 0x18);
  if (lVar15 == 0) {
code_r0x01ec898c:
    func_0x00f78af4();
code_r0x01ec8990:
    uVar17 = func_0x00f78b24();
    auVar28 = func_0x00f78ac0(uVar17,0);
    lVar15 = auVar28._8_8_;
    lVar13 = auVar28._0_8_;
    *(undefined8 *)(puVar4 + -0xa0) = unaff_x26;
    *(undefined8 *)(puVar4 + -0x98) = unaff_x25;
    *(undefined8 *)(puVar4 + -0x90) = unaff_x24;
    *(ulong *)(puVar4 + -0x88) = uVar7;
    *(long *)(puVar4 + -0x80) = lVar8;
    *(long **)(puVar4 + -0x78) = plVar12;
    *(undefined1 (*) [16])(puVar4 + -0x70) = auVar27;
    *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x20;
    *(undefined **)(puVar4 + -0x58) =
         &System_Collections_Generic_Dictionary_object__EventInstance___CopyTo;
    if (lVar15 == 0) goto code_r0x01ec8b28;
    uVar6 = (uint)uVar19;
    if (((int)uVar6 < 0) || (*(int *)(lVar15 + 0x18) < (int)uVar6)) goto code_r0x01ec8aa8;
    if (lVar13 == 0) goto code_r0x01ec8b24;
    uVar7 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_7 + 0x18) + 0xc0) + 0x90))(lVar13)
    ;
    if ((int)(*(int *)(lVar15 + 0x18) - uVar6) < (int)uVar7) {
      func_0x00f78a24(0x3d1fce8);
      uVar17 = func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d6bc10);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar17,uVar18,0);
      goto code_r0x01ec8b8c;
    }
    uVar1 = *(uint *)(lVar13 + 0x20);
    if ((int)uVar1 < 1) {
      return uVar7;
    }
    lVar16 = *(long *)(lVar13 + 0x18);
    if (lVar16 == 0) goto code_r0x01ec8b24;
    uVar9 = 0;
    puVar20 = (undefined8 *)(lVar16 + 0x30);
    goto code_r0x01ec8a24;
  }
  if (*(uint *)(lVar15 + 0x18) <= uVar7) goto code_r0x01ec8990;
  if (-1 < *(int *)(lVar15 + lVar8 + 0x20)) {
    if (plVar12 == (long *)0x0) goto code_r0x01ec898c;
    param_7 = *(long *)(*plVar12 + 0x1c0);
    uVar19 = auVar27._8_8_;
    uVar9 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(lVar15 + lVar8 + 0x30));
    if ((uVar9 & 1) != 0) {
      return 1;
    }
    iVar5 = *(int *)(lVar16 + 0x20);
  }
  uVar7 = uVar7 + 1;
  lVar8 = lVar8 + 0x18;
  if ((long)iVar5 <= (long)uVar7) {
    return 0;
  }
  goto code_r0x01ec8914;
code_r0x01ec8a24:
  uVar6 = (uint)uVar19;
  if (*(uint *)(lVar16 + 0x18) <= uVar9) {
code_r0x01ec8a9c:
    uVar17 = func_0x00f78b24();
    func_0x00f78ac0(uVar17,0);
code_r0x01ec8aa8:
    *(uint *)(puVar4 + -0xb0) = uVar6;
    uVar17 = func_0x00f78a24(0x3d22910);
    uVar17 = func_0x00f78ae0(uVar17,puVar4 + -0xb0);
    func_0x00f78a24(0x3d1fcf8);
    lVar15 = func_0x00f78aec();
    uVar18 = func_0x00f78a24(0x3d79a60);
    uVar14 = func_0x00f78a24(0x3d6de28);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(lVar15,uVar18,uVar17,uVar14,0);
    uVar17 = func_0x00f78a24(0x3d2f4b0);
    func_0x00f78ac0(lVar15,uVar17);
code_r0x01ec8b24:
    func_0x00f78af4();
    lVar16 = lVar15;
code_r0x01ec8b28:
    func_0x00f78a24(0x3d1fcf0);
    uVar17 = func_0x00f78aec();
    uVar18 = func_0x00f78a24(0x3d77d18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar17,uVar18,0);
    lVar15 = lVar16;
code_r0x01ec8b8c:
    uVar18 = func_0x00f78a24(0x3d2f4b0);
    auVar27 = func_0x00f78ac0(uVar17,uVar18);
    *(long *)(puVar4 + -0xd0) = lVar15;
    *(undefined8 *)(puVar4 + -200) = uVar17;
    *(undefined1 **)(puVar4 + -0xc0) = puVar4 + -0x60;
    *(undefined **)(puVar4 + -0xb8) =
         &System_Collections_Generic_Dictionary_object__EventInstance___GetEnumerator;
    *(undefined8 *)(puVar4 + -0xe0) = 0;
    *(undefined8 *)(puVar4 + -0xf8) = 0;
    *(undefined8 *)(puVar4 + -0x100) = 0;
    *(undefined8 *)(puVar4 + -0xe8) = 0;
    *(undefined8 *)(puVar4 + -0xf0) = 0;
    uVar7 = /*System.Collections.Generic.Dictionary.Enumerator<object, EventInstance>$$.ctor*/ func_0x01fd20e8(puVar4 + -0x100,auVar27._0_8_,2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(auVar27._8_8_ + 0x18) + 0xc0) + 0xb0));
    uVar17 = *(undefined8 *)(puVar4 + -0x100);
    uVar14 = *(undefined8 *)(puVar4 + -0xe8);
    uVar18 = *(undefined8 *)(puVar4 + -0xf0);
    extraout_x8[1] = *(undefined8 *)(puVar4 + -0xf8);
    *extraout_x8 = uVar17;
    extraout_x8[3] = uVar14;
    extraout_x8[2] = uVar18;
    extraout_x8[4] = *(undefined8 *)(puVar4 + -0xe0);
    return uVar7;
  }
  if (-1 < *(int *)(puVar20 + -2)) {
    uVar17 = puVar20[-1];
    uVar18 = *puVar20;
    *(undefined8 *)(puVar4 + -0xb0) = 0;
    *(undefined8 *)(puVar4 + -0xa8) = 0;
    uVar7 = /*System.Collections.Generic.KeyValuePair<object, EventInstance>$$.ctor*/ func_0x023181f4(puVar4 + -0xb0,uVar17,uVar18,
                            *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x18) + 0xc0) + 0xa0));
    if (*(uint *)(lVar15 + 0x18) <= uVar6) goto code_r0x01ec8a9c;
    lVar8 = lVar15 + (long)(int)uVar6 * 0x10;
    uVar19 = (ulong)(uVar6 + 1);
    uVar17 = *(undefined8 *)(puVar4 + -0xb0);
    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(puVar4 + -0xa8);
    *(undefined8 *)(lVar8 + 0x20) = uVar17;
  }
  uVar9 = uVar9 + 1;
  puVar20 = puVar20 + 3;
  if (uVar1 == uVar9) {
    return uVar7;
  }
  goto code_r0x01ec8a24;
}



// ============================================================
// RVA: 0x15bfad0 | Atlas.Audio.KartAudio.OnCollisionEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x015c0238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015c0448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bff74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015c044c) */
/* WARNING: Removing unreachable block (ram,0x015c0484) */
/* WARNING: Removing unreachable block (ram,0x015c0488) */
/* WARNING: Removing unreachable block (ram,0x015c0490) */
/* WARNING: Removing unreachable block (ram,0x015c0498) */
/* WARNING: Removing unreachable block (ram,0x015c0460) */
/* WARNING: Removing unreachable block (ram,0x015c0464) */
/* WARNING: Removing unreachable block (ram,0x015c046c) */
/* WARNING: Removing unreachable block (ram,0x015c0474) */
/* WARNING: Removing unreachable block (ram,0x015c04a4) */
/* WARNING: Removing unreachable block (ram,0x015c04b8) */
/* WARNING: Removing unreachable block (ram,0x015c0480) */
/* WARNING: Removing unreachable block (ram,0x015c023c) */
/* WARNING: Removing unreachable block (ram,0x015c0240) */
/* WARNING: Removing unreachable block (ram,0x015c0248) */
/* WARNING: Removing unreachable block (ram,0x015c0264) */
/* WARNING: Removing unreachable block (ram,0x015c027c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f0c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f34) */
/* WARNING: Removing unreachable block (ram,0x01ec9f40) */
/* WARNING: Removing unreachable block (ram,0x01ec9f48) */
/* WARNING: Removing unreachable block (ram,0x01ec9f64) */
/* WARNING: Removing unreachable block (ram,0x01ec9f6c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f78) */
/* WARNING: Removing unreachable block (ram,0x01ec9f80) */
/* WARNING: Removing unreachable block (ram,0x01ec9fac) */
/* WARNING: Removing unreachable block (ram,0x01ec9f8c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f98) */
/* WARNING: Removing unreachable block (ram,0x01ec9fbc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fd4) */
/* WARNING: Removing unreachable block (ram,0x01ec9fdc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fec) */
/* WARNING: Removing unreachable block (ram,0x01ec9ff8) */
/* WARNING: Removing unreachable block (ram,0x01eca008) */
/* WARNING: Removing unreachable block (ram,0x01eca00c) */
/* WARNING: Removing unreachable block (ram,0x01eca01c) */
/* WARNING: Removing unreachable block (ram,0x01eca030) */
/* WARNING: Removing unreachable block (ram,0x01eca038) */
/* WARNING: Removing unreachable block (ram,0x01eca058) */
/* WARNING: Removing unreachable block (ram,0x01eca060) */
/* WARNING: Removing unreachable block (ram,0x01eca06c) */
/* WARNING: Removing unreachable block (ram,0x01eca074) */
/* WARNING: Removing unreachable block (ram,0x01eca0a0) */
/* WARNING: Removing unreachable block (ram,0x01eca080) */
/* WARNING: Removing unreachable block (ram,0x01eca08c) */
/* WARNING: Removing unreachable block (ram,0x01eca0ac) */
/* WARNING: Removing unreachable block (ram,0x01eca10c) */
/* WARNING: Removing unreachable block (ram,0x01eca148) */
/* WARNING: Removing unreachable block (ram,0x01eca150) */
/* WARNING: Removing unreachable block (ram,0x01eca160) */
/* WARNING: Removing unreachable block (ram,0x01eca168) */
/* WARNING: Removing unreachable block (ram,0x01eca174) */
/* WARNING: Removing unreachable block (ram,0x01eca110) */
/* WARNING: Removing unreachable block (ram,0x01eca118) */
/* WARNING: Removing unreachable block (ram,0x01eca124) */
/* WARNING: Removing unreachable block (ram,0x01eca12c) */
/* WARNING: Removing unreachable block (ram,0x01eca188) */
/* WARNING: Removing unreachable block (ram,0x01eca190) */
/* WARNING: Removing unreachable block (ram,0x01eca1b0) */
/* WARNING: Removing unreachable block (ram,0x01eca1bc) */
/* WARNING: Removing unreachable block (ram,0x01eca0c4) */
/* WARNING: Removing unreachable block (ram,0x01eca1e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0cc) */
/* WARNING: Removing unreachable block (ram,0x01eca1ec) */
/* WARNING: Removing unreachable block (ram,0x01eca1f8) */
/* WARNING: Removing unreachable block (ram,0x01eca250) */
/* WARNING: Removing unreachable block (ram,0x01eca298) */
/* WARNING: Removing unreachable block (ram,0x01eca270) */
/* WARNING: Removing unreachable block (ram,0x01eca2b0) */
/* WARNING: Removing unreachable block (ram,0x01eca278) */
/* WARNING: Removing unreachable block (ram,0x01eca2b4) */
/* WARNING: Removing unreachable block (ram,0x01eca2e8) */
/* WARNING: Removing unreachable block (ram,0x01eca2cc) */
/* WARNING: Removing unreachable block (ram,0x01eca284) */
/* WARNING: Removing unreachable block (ram,0x01eca29c) */
/* WARNING: Removing unreachable block (ram,0x01eca0d8) */
/* WARNING: Removing unreachable block (ram,0x01eca0e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0ec) */
/* WARNING: Removing unreachable block (ram,0x015bff78) */
/* WARNING: Removing unreachable block (ram,0x015bff7c) */
/* WARNING: Removing unreachable block (ram,0x015bff94) */
/* WARNING: Removing unreachable block (ram,0x015bff9c) */
/* WARNING: Removing unreachable block (ram,0x015bffa4) */
/* WARNING: Removing unreachable block (ram,0x015bffcc) */
/* WARNING: Removing unreachable block (ram,0x015bfff0) */
/* WARNING: Removing unreachable block (ram,0x01ec8614) */
/* WARNING: Removing unreachable block (ram,0x01ec863c) */
/* WARNING: Removing unreachable block (ram,0x01ec8664) */
/* WARNING: Removing unreachable block (ram,0x01ec867c) */
/* WARNING: Removing unreachable block (ram,0x01ec86a0) */
/* WARNING: Removing unreachable block (ram,0x01ec86c0) */
/* WARNING: Removing unreachable block (ram,0x01ec86cc) */
/* WARNING: Removing unreachable block (ram,0x01ec870c) */
/* WARNING: Removing unreachable block (ram,0x01ec8710) */
/* WARNING: Removing unreachable block (ram,0x01ec8734) */
/* WARNING: Removing unreachable block (ram,0x01ec87d0) */
/* WARNING: Removing unreachable block (ram,0x01ec875c) */
/* WARNING: Removing unreachable block (ram,0x01ec877c) */
/* WARNING: Removing unreachable block (ram,0x01ec8788) */
/* WARNING: Removing unreachable block (ram,0x01ec87e8) */
/* WARNING: Removing unreachable block (ram,0x01ec87ec) */
/* WARNING: Removing unreachable block (ram,0x01ec8810) */
/* WARNING: Removing unreachable block (ram,0x01ec881c) */
/* WARNING: Removing unreachable block (ram,0x01ec8828) */
/* WARNING: Removing unreachable block (ram,0x01ec8838) */
/* WARNING: Removing unreachable block (ram,0x01ec8840) */
/* WARNING: Removing unreachable block (ram,0x01ec8888) */
/* WARNING: Removing unreachable block (ram,0x01ec8894) */
/* WARNING: Removing unreachable block (ram,0x01ec8844) */
/* WARNING: Removing unreachable block (ram,0x01ec8854) */
/* WARNING: Removing unreachable block (ram,0x01ec887c) */
/* WARNING: Removing unreachable block (ram,0x01ec878c) */
/* WARNING: Removing unreachable block (ram,0x01ec87ac) */
/* WARNING: Removing unreachable block (ram,0x01ec87d4) */
/* WARNING: Removing unreachable block (ram,0x01ec86d0) */
/* WARNING: Removing unreachable block (ram,0x01ec86f8) */
/* WARNING: Removing unreachable block (ram,0x01ec86f0) */
/* WARNING: Removing unreachable block (ram,0x01ec86fc) */
/* WARNING: Removing unreachable block (ram,0x01ec864c) */
/* WARNING: Removing unreachable block (ram,0x01ec8620) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Audio_KartAudio__OnCollisionEnter
                (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
                undefined8 param_4,undefined8 param_5,undefined8 param_6,long param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *extraout_x8;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  ulong unaff_x22;
  ulong uVar19;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 *puVar20;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar21;
  code *unaff_x30;
  undefined *puVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  ulong unaff_d8;
  float fVar26;
  ulong unaff_d9;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  auVar27._8_8_ = param_5;
  auVar27._0_8_ = param_4;
  do {
    lVar17 = auVar27._8_8_;
    uVar9 = auVar27._0_8_;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar15 = 0x3eb5000;
    uVar7 = uVar9;
    if ((bRam0000000003eb52ce & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d578a8);
      uVar7 = func_0x00f78a20(0x3d23990);
      bRam0000000003eb52ce = 1;
    }
    fVar24 = _UNK_033f83fc;
    if (*(char *)(uVar9 + 0x50) == '\0') {
      return uVar7;
    }
    if (*(char *)(uVar9 + 0x38) != '\0') {
      return uVar7;
    }
    if (*(long *)(uVar9 + 0x90) != 0) {
      if (*(char *)(*(long *)(uVar9 + 0x90) + 0xcd) == '\0') {
        return uVar7;
      }
      if (*(float *)(uVar9 + 0x68) <= _UNK_033f83fc) {
        return uVar7;
      }
      if (*(int *)(lVar17 + 0x20) == 5) {
        return uVar7;
      }
      *(undefined4 *)(uVar9 + 0x68) = 0;
      if ((*(long *)(lVar17 + 8) != 0) &&
         (lVar8 = /*UnityEngine.Collision$$get_gameObject*/ func_0x0329ee78(*(long *)(lVar17 + 8),0), lVar8 != 0)) {
        lVar15 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar8,uRam0000000003d578a8);
        if (*(long *)(lVar17 + 8) != 0) {
          uVar23 = /*UnityEngine.Collision$$get_relativeVelocity*/ func_0x0329ede4(*(long *)(lVar17 + 8),0);
          *(undefined4 *)((long)register0x00000008 + -0x70) = uVar23;
          *(float *)((long)register0x00000008 + -0x6c) = fVar24;
          *(undefined4 *)((long)register0x00000008 + -0x68) = param_3;
          uVar23 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc((undefined1 *)((long)register0x00000008 + -0x70),0);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          fVar24 = (float)/*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar23,*(undefined4 *)
                                                  (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8),0);
          unaff_d8 = (ulong)(uint)fVar24;
          fVar26 = *(float *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8);
          unaff_d9 = (ulong)(uint)fVar26;
          unaff_x22 = (ulong)((*(uint *)(lVar17 + 0x20) & 0xfffffffe) == 2);
          unaff_x25 = 0x3d23990;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar15,0);
          if ((int)uVar7 == 0) {
            unaff_x23 = 1;
          }
          else {
            if (lVar15 == 0) goto code_r0x015bfd5c;
            unaff_x23 = (ulong)*(uint *)(lVar15 + 0x1c);
          }
          if (*(int *)(lVar17 + 0x20) == 0) {
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar15,0);
            if ((int)uVar7 != 0) {
              if (lVar15 == 0) goto code_r0x015bfd5c;
              fVar25 = 3.0;
              if ((*(uint *)(lVar15 + 0x1c) & 0xfffffffe) == 8) goto code_r0x015bfce0;
            }
          }
          if (3 < *(int *)(lVar17 + 0x20) - 1U) {
            return uVar7;
          }
          fVar25 = (fVar24 / fVar26) * 3.0;
code_r0x015bfce0:
          uVar23 = 0;
          if (*(char *)(lVar17 + 0x1c) != '\0') {
            uVar23 = 0xbf800000;
          }
          *(undefined4 *)(uVar9 + 0x70) = uVar23;
          /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(fVar25,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar15,0,0);
          uVar7 = Atlas_Audio_KartAudio__PlayCollision(uVar9,unaff_x23);
          return uVar7;
        }
      }
    }
code_r0x015bfd5c:
    unaff_x19 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &Atlas_Audio_KartAudio__OnCollisionExit;
    if ((*(char *)(unaff_x19 + 0x50) == '\0') || (*(char *)(unaff_x19 + 0x38) != '\0')) {
      return unaff_x19;
    }
    if (*(long *)(unaff_x19 + 0x90) == 0) {
      auVar27 = func_0x00f78af4();
      uVar7 = auVar27._8_8_;
      uVar11 = auVar27._0_8_;
      puVar4 = (undefined1 *)((long)register0x00000008 + -0xc0);
      puVar2 = (undefined1 *)((long)register0x00000008 + -0xc0);
      *(ulong *)((long)register0x00000008 + -0xc0) = unaff_x22;
      *(long *)((long)register0x00000008 + -0xb8) = lVar15;
      *(long *)((long)register0x00000008 + -0xb0) = lVar17;
      *(ulong *)((long)register0x00000008 + -0xa8) = uVar9;
      *(undefined1 **)((long)register0x00000008 + -0xa0) =
           (undefined1 *)((long)register0x00000008 + -0x90);
      *(undefined **)((long)register0x00000008 + -0x98) = &Atlas_Audio_KartAudio__OnTriggerEnter;
      puVar21 = (undefined1 *)((long)register0x00000008 + -0xa0);
      uVar16 = 0x3eb5000;
      uVar9 = uVar11;
      if ((bRam0000000003eb52cf & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d2e048);
        func_0x00f78a20(0x3d2e050);
        func_0x00f78a20(0x3d577c8);
        func_0x00f78a20(0x3d578c0);
        uVar9 = func_0x00f78a20(0x3d23990);
        bRam0000000003eb52cf = 1;
      }
      if (*(char *)(uVar11 + 0x50) == '\0') {
        return uVar9;
      }
      if (*(char *)(uVar11 + 0x38) != '\0') {
        return uVar9;
      }
      if (*(float *)(uVar11 + 100) <= _UNK_033f8140) {
        return uVar9;
      }
      *(undefined4 *)(uVar11 + 100) = 0;
      if ((uVar7 == 0) || (lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar7,0), lVar15 == 0)) {
code_r0x015c0060:
        puVar22 = &Atlas_Audio_KartAudio__PickupPickedUp;
        uVar9 = func_0x00f78af4();
code_r0x015c0064:
        *(ulong *)(puVar2 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x28) = uVar16;
        *(ulong *)(puVar2 + -0x20) = uVar7;
        *(ulong *)(puVar2 + -0x18) = uVar11;
        *(undefined1 **)(puVar2 + -0x10) = puVar21;
        *(undefined **)(puVar2 + -8) = puVar22;
        uVar7 = uVar9;
        if ((bRam0000000003eb52d1 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          uVar7 = func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52d1 = 1;
        }
        if (*(char *)(uVar9 + 0x38) != '\0') {
          return uVar7;
        }
        lVar15 = *(long *)(uVar9 + 0x150);
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((lVar15 != 0) &&
           (uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar15,*(undefined8 *)
                                             (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x230),
                                     uRam0000000003d2fb00), uVar11 != 0)) {
          uVar16 = *(undefined8 *)(uVar9 + 0xb8);
          puVar21 = *(undefined1 **)(puVar2 + -0x10);
          puVar22 = *(undefined **)(puVar2 + -8);
          lVar15 = *(long *)(puVar2 + -0x18);
          puVar3 = puVar2;
          uVar18 = *(undefined8 *)(puVar2 + -0x20);
          goto code_r0x01638d28;
        }
        auVar27 = func_0x00f78af4();
        uVar7 = auVar27._8_8_;
        uVar11 = auVar27._0_8_;
        puVar4 = puVar2 + -0x60;
        *(ulong *)(puVar2 + -0x60) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x58) = 0x3d1ff28;
        *(long *)(puVar2 + -0x50) = lVar15;
        *(ulong *)(puVar2 + -0x48) = uVar9;
        *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
        *(undefined **)(puVar2 + -0x38) = &Atlas_Audio_KartAudio__OnTriggerExit;
        puVar21 = puVar2 + -0x40;
        uVar16 = 0x3eb5000;
        uVar9 = uVar11;
        if ((bRam0000000003eb52d0 & 1) == 0) {
          func_0x00f78a20(0x3d2e050);
          func_0x00f78a20(0x3d2e058);
          func_0x00f78a20(0x3d2e060);
          func_0x00f78a20(0x3d577c8);
          uVar9 = func_0x00f78a20(0x3d23990);
          bRam0000000003eb52d0 = 1;
        }
        if ((*(char *)(uVar11 + 0x50) == '\0') || (*(char *)(uVar11 + 0x38) != '\0')) {
          return uVar9;
        }
        if ((uVar7 != 0) && (lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar7,0), lVar15 != 0)) {
          uVar7 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar15,uRam0000000003d577c8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar9 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar7,0);
          if ((int)uVar9 == 0) {
            return uVar9;
          }
          if (uVar7 != 0) {
            if (*(int *)(uVar7 + 0x60) != 0) {
              return uVar9;
            }
            if (*(long *)(uVar11 + 0x90) != 0) {
              if (*(char *)(*(long *)(uVar11 + 0x90) + 0xce) == '\0') {
                return uVar9;
              }
              lVar15 = *(long *)(uVar11 + 0x148);
              if (lVar15 != 0) {
                puVar22 = &UNK_015c023c;
                uVar9 = unaff_x22;
                goto code_r0x01ec8898;
              }
            }
          }
        }
        uVar9 = func_0x00f78af4();
        *(ulong *)(puVar2 + -0x90) = unaff_x22;
        *(undefined8 *)(puVar2 + -0x88) = 0x3eb5000;
        *(ulong *)(puVar2 + -0x80) = uVar7;
        *(ulong *)(puVar2 + -0x78) = uVar11;
        *(undefined1 **)(puVar2 + -0x70) = puVar21;
        *(undefined **)(puVar2 + -0x68) = &Atlas_Audio_KartAudio__PlayVFXAudio;
        uVar7 = uVar9;
        if ((bRam0000000003eb52d4 & 1) == 0) {
          func_0x00f78a20(0x3d1ff28);
          uVar7 = func_0x00f78a20(0x3d2fb00);
          bRam0000000003eb52d4 = 1;
        }
        if (*(char *)(uVar9 + 0x38) == '\0') {
          lVar15 = *(long *)(uVar9 + 0x150);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (lVar15 == 0) {
            auVar27 = func_0x00f78af4();
            uVar16 = auVar27._8_8_;
            lVar15 = auVar27._0_8_;
            puVar3 = puVar2 + -0xd0;
            *(undefined8 *)(puVar2 + -0xd0) = unaff_x24;
            *(ulong *)(puVar2 + -200) = unaff_x23;
            *(ulong *)(puVar2 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar2 + -0xb8) = 0x3d1ff28;
            *(undefined8 *)(puVar2 + -0xb0) = 0;
            *(ulong *)(puVar2 + -0xa8) = uVar9;
            *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
            *(undefined **)(puVar2 + -0x98) = &Atlas_Audio_KartAudio__ExitPortal;
            puVar21 = puVar2 + -0xa0;
            if ((bRam0000000003eb52d6 & 1) == 0) {
              func_0x00f78a20(0x3d1ff28);
              func_0x00f78a20(0x3d2fb00);
              func_0x00f78a20(0x3d23990);
              bRam0000000003eb52d6 = 1;
            }
            lVar17 = *(long *)(lVar15 + 0x150);
            if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (lVar17 != 0) {
              uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar17,*(undefined8 *)
                                               (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x278),
                                       uRam0000000003d2fb00);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,0,0);
              if ((uVar7 & 1) == 0) {
                uVar16 = *(undefined8 *)(lVar15 + 0xb8);
              }
              if (uVar11 != 0) {
                puVar22 = &UNK_015c044c;
                uVar18 = uVar16;
                goto code_r0x01638d28;
              }
            }
            uVar7 = func_0x00f78af4();
            return uVar7;
          }
          uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar15,*(undefined8 *)
                                           (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x250),
                                   uRam0000000003d2fb00);
          uVar7 = 0;
          if (uVar11 != 0) {
            uVar16 = *(undefined8 *)(uVar9 + 0xb8);
            puVar21 = *(undefined1 **)(puVar2 + -0x70);
            puVar22 = *(undefined **)(puVar2 + -0x68);
            lVar15 = *(long *)(puVar2 + -0x78);
            puVar3 = puVar2 + -0x60;
            uVar18 = *(undefined8 *)(puVar2 + -0x80);
code_r0x01638d28:
            *(undefined8 *)(puVar3 + -0x20) = uVar18;
            *(long *)(puVar3 + -0x18) = lVar15;
            *(undefined1 **)(puVar3 + -0x10) = puVar21;
            *(undefined **)(puVar3 + -8) = puVar22;
            /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar11,uVar16,0);
            return uVar11;
          }
        }
        return uVar7;
      }
      uVar16 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar15,uRam0000000003d578c0);
      lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar7,0);
      if (lVar15 == 0) goto code_r0x015c0060;
      uVar7 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar15,uRam0000000003d577c8);
      uVar9 = 0x3d23990;
      uVar19 = 0x3d23990;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar16,0);
      if (iVar5 != 0) {
        puVar21 = *(undefined1 **)((long)register0x00000008 + -0xa0);
        puVar22 = *(undefined **)((long)register0x00000008 + -0x98);
        uVar7 = *(ulong *)((long)register0x00000008 + -0xb0);
        puVar2 = (undefined1 *)((long)register0x00000008 + -0x90);
        unaff_x22 = *(ulong *)((long)register0x00000008 + -0xc0);
        uVar16 = *(undefined8 *)((long)register0x00000008 + -0xb8);
        uVar9 = uVar11;
        uVar11 = *(ulong *)((long)register0x00000008 + -0xa8);
        goto code_r0x015c0064;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar7,0);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      unaff_x22 = uVar9;
      if (uVar7 == 0) goto code_r0x015c0060;
      iVar5 = *(int *)(uVar7 + 0x60);
      if (iVar5 != 0) {
        if (iVar5 == 2) {
          if (*(char *)(uVar7 + 0x50) != '\0') {
            return uVar10;
          }
          unaff_x22 = uVar19;
          if (*(long *)(uVar11 + 0x90) != 0) {
            if (*(char *)(*(long *)(uVar11 + 0x90) + 0xd2) == '\0') {
              return uVar10;
            }
            uVar16 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar7,0);
            *(undefined8 *)((long)register0x00000008 + -0xc0) =
                 *(undefined8 *)((long)register0x00000008 + -0xc0);
            *(undefined8 *)((long)register0x00000008 + -0xb8) =
                 *(undefined8 *)((long)register0x00000008 + -0xb8);
            *(undefined8 *)((long)register0x00000008 + -0xb0) =
                 *(undefined8 *)((long)register0x00000008 + -0xb0);
            *(undefined8 *)((long)register0x00000008 + -0xa8) =
                 *(undefined8 *)((long)register0x00000008 + -0xa8);
            *(undefined8 *)((long)register0x00000008 + -0xa0) =
                 *(undefined8 *)((long)register0x00000008 + -0xa0);
            *(undefined8 *)((long)register0x00000008 + -0x98) =
                 *(undefined8 *)((long)register0x00000008 + -0x98);
            if ((bRam0000000003eb4876 & 1) == 0) {
              func_0x00f78a20(0x3d1ff30,uVar16,0);
              func_0x00f78a20(0x3d65d08);
              bRam0000000003eb4876 = 1;
            }
            uVar11 = *(ulong *)(uVar7 + 0xb0);
            if (uVar11 == 0) {
              uVar9 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*(undefined8 *)(uVar7 + 0x48),/*STR('')*/ uRam0000000003d65d08,0);
              if ((uVar9 & 1) == 0) {
                uVar11 = *(ulong *)(uVar7 + 0xb0);
              }
              else {
                uVar18 = *(undefined8 *)(uVar7 + 0x48);
                uVar11 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
                uVar9 = /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar11,uVar18,0,0,0);
                *(ulong *)(uVar7 + 0xb0) = uVar11;
              }
              if (uVar11 == 0) {
                return uVar9;
              }
            }
            puVar21 = *(undefined1 **)((long)register0x00000008 + -0xa0);
            puVar22 = *(undefined **)((long)register0x00000008 + -0x98);
            uVar18 = *(undefined8 *)((long)register0x00000008 + -0xb0);
            lVar15 = *(long *)((long)register0x00000008 + -0xa8);
            puVar3 = (undefined1 *)((long)register0x00000008 + -0x90);
            goto code_r0x01638d28;
          }
        }
        else {
          if (iVar5 != 1) {
            return uVar10;
          }
          if (*(long *)(uVar11 + 0x90) != 0) {
            if (*(char *)(*(long *)(uVar11 + 0x90) + 0xd1) != '\0') {
              fVar24 = *(float *)(uVar11 + 0x74) * 100.0;
              *(float *)(uVar7 + 0xc0) = fVar24 * _UNK_033f82c0 + _UNK_033f82c4;
              *(float *)(uVar7 + 0xc4) = fVar24;
              return uVar7;
            }
            return uVar10;
          }
        }
        goto code_r0x015c0060;
      }
      if (*(char *)(uVar7 + 0x68) != '\0') {
        return uVar10;
      }
      unaff_x22 = uVar19;
      if (*(long *)(uVar11 + 0x90) == 0) goto code_r0x015c0060;
      if (*(char *)(*(long *)(uVar11 + 0x90) + 0xce) == '\0') {
        return uVar10;
      }
      lVar15 = *(long *)(uVar11 + 0x148);
      if (lVar15 == 0) goto code_r0x015c0060;
      puVar22 = &UNK_015bff78;
code_r0x01ec8898:
      *(undefined1 **)(puVar4 + -0x10) = puVar21;
      *(undefined **)(puVar4 + -8) = puVar22;
      if (lVar15 != 0) {
        uVar6 = (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(uRam0000000003d2e050 + 0x18) + 0xc0) + 0x40))();
        return (ulong)(~uVar6 >> 0x1f);
      }
      uVar19 = uRam0000000003d2e050;
      auVar27 = func_0x00f78af4(0,uVar7);
      lVar15 = auVar27._0_8_;
      *(undefined8 *)(puVar4 + -0x50) = unaff_x24;
      *(ulong *)(puVar4 + -0x48) = unaff_x23;
      *(ulong *)(puVar4 + -0x40) = uVar9;
      *(undefined8 *)(puVar4 + -0x38) = uVar16;
      *(ulong *)(puVar4 + -0x30) = uVar7;
      *(ulong *)(puVar4 + -0x28) = uVar11;
      *(undefined1 **)(puVar4 + -0x20) = puVar4 + -0x10;
      *(undefined **)(puVar4 + -0x18) =
           &System_Collections_Generic_Dictionary_object__EventInstance___ContainsValue;
      plVar12 = (long *)(*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(uVar19 + 0x18) + 0xc0) + 0x68))();
      iVar5 = *(int *)(lVar15 + 0x20);
      if (iVar5 < 1) {
        return 0;
      }
      lVar17 = 0;
      uVar7 = 0;
      break;
    }
    if (*(char *)(*(long *)(unaff_x19 + 0x90) + 0xcd) == '\0') {
      return unaff_x19;
    }
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(long *)((long)register0x00000008 + -0xa8) = lVar15;
    *(long *)((long)register0x00000008 + -0xa0) = lVar17;
    *(ulong *)((long)register0x00000008 + -0x98) = uVar9;
    *(undefined8 *)((long)register0x00000008 + -0x90) =
         *(undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x90);
    unaff_x21 = 0x3d1ff28;
    if ((bRam0000000003eb52cc & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d2fb00);
      bRam0000000003eb52cc = 1;
    }
    lVar15 = *(long *)(unaff_x19 + 0x150);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar15 != 0) {
      lVar15 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar15,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x238),
                               uRam0000000003d2fb00);
      uVar7 = 0;
      if (lVar15 != 0) {
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = /*Core.Audio.AudioEvent$$SetParameter*/ func_0x01638fc8(0,lVar15,*(undefined8 *)
                                          (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1c8),0,0);
      }
      *(undefined4 *)(unaff_x19 + 0x70) = 0xbf800000;
      return uVar7;
    }
    unaff_x30 = Atlas_Audio_KartAudio__OnCollisionEnter;
    auVar27 = func_0x00f78af4();
    unaff_x20 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  } while( true );
code_r0x01ec8914:
  lVar8 = *(long *)(lVar15 + 0x18);
  if (lVar8 == 0) {
code_r0x01ec898c:
    func_0x00f78af4();
code_r0x01ec8990:
    uVar16 = func_0x00f78b24();
    auVar28 = func_0x00f78ac0(uVar16,0);
    lVar8 = auVar28._8_8_;
    lVar13 = auVar28._0_8_;
    *(undefined8 *)(puVar4 + -0xa0) = unaff_x26;
    *(undefined8 *)(puVar4 + -0x98) = unaff_x25;
    *(undefined8 *)(puVar4 + -0x90) = unaff_x24;
    *(ulong *)(puVar4 + -0x88) = uVar7;
    *(long *)(puVar4 + -0x80) = lVar17;
    *(long **)(puVar4 + -0x78) = plVar12;
    *(undefined1 (*) [16])(puVar4 + -0x70) = auVar27;
    *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x20;
    *(undefined **)(puVar4 + -0x58) =
         &System_Collections_Generic_Dictionary_object__EventInstance___CopyTo;
    if (lVar8 == 0) goto code_r0x01ec8b28;
    uVar6 = (uint)uVar19;
    if (((int)uVar6 < 0) || (*(int *)(lVar8 + 0x18) < (int)uVar6)) goto code_r0x01ec8aa8;
    if (lVar13 == 0) goto code_r0x01ec8b24;
    uVar7 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_7 + 0x18) + 0xc0) + 0x90))(lVar13)
    ;
    if ((int)(*(int *)(lVar8 + 0x18) - uVar6) < (int)uVar7) {
      func_0x00f78a24(0x3d1fce8);
      uVar16 = func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d6bc10);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar16,uVar18,0);
      goto code_r0x01ec8b8c;
    }
    uVar1 = *(uint *)(lVar13 + 0x20);
    if ((int)uVar1 < 1) {
      return uVar7;
    }
    lVar15 = *(long *)(lVar13 + 0x18);
    if (lVar15 == 0) goto code_r0x01ec8b24;
    uVar9 = 0;
    puVar20 = (undefined8 *)(lVar15 + 0x30);
    goto code_r0x01ec8a24;
  }
  if (*(uint *)(lVar8 + 0x18) <= uVar7) goto code_r0x01ec8990;
  if (-1 < *(int *)(lVar8 + lVar17 + 0x20)) {
    if (plVar12 == (long *)0x0) goto code_r0x01ec898c;
    param_7 = *(long *)(*plVar12 + 0x1c0);
    uVar19 = auVar27._8_8_;
    uVar9 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(lVar8 + lVar17 + 0x30));
    if ((uVar9 & 1) != 0) {
      return 1;
    }
    iVar5 = *(int *)(lVar15 + 0x20);
  }
  uVar7 = uVar7 + 1;
  lVar17 = lVar17 + 0x18;
  if ((long)iVar5 <= (long)uVar7) {
    return 0;
  }
  goto code_r0x01ec8914;
code_r0x01ec8a24:
  uVar6 = (uint)uVar19;
  if (*(uint *)(lVar15 + 0x18) <= uVar9) {
code_r0x01ec8a9c:
    uVar16 = func_0x00f78b24();
    func_0x00f78ac0(uVar16,0);
code_r0x01ec8aa8:
    *(uint *)(puVar4 + -0xb0) = uVar6;
    uVar16 = func_0x00f78a24(0x3d22910);
    uVar16 = func_0x00f78ae0(uVar16,puVar4 + -0xb0);
    func_0x00f78a24(0x3d1fcf8);
    lVar8 = func_0x00f78aec();
    uVar18 = func_0x00f78a24(0x3d79a60);
    uVar14 = func_0x00f78a24(0x3d6de28);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(lVar8,uVar18,uVar16,uVar14,0);
    uVar16 = func_0x00f78a24(0x3d2f4b0);
    func_0x00f78ac0(lVar8,uVar16);
code_r0x01ec8b24:
    func_0x00f78af4();
    lVar15 = lVar8;
code_r0x01ec8b28:
    func_0x00f78a24(0x3d1fcf0);
    uVar16 = func_0x00f78aec();
    uVar18 = func_0x00f78a24(0x3d77d18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar16,uVar18,0);
    lVar8 = lVar15;
code_r0x01ec8b8c:
    uVar18 = func_0x00f78a24(0x3d2f4b0);
    auVar27 = func_0x00f78ac0(uVar16,uVar18);
    *(long *)(puVar4 + -0xd0) = lVar8;
    *(undefined8 *)(puVar4 + -200) = uVar16;
    *(undefined1 **)(puVar4 + -0xc0) = puVar4 + -0x60;
    *(undefined **)(puVar4 + -0xb8) =
         &System_Collections_Generic_Dictionary_object__EventInstance___GetEnumerator;
    *(undefined8 *)(puVar4 + -0xe0) = 0;
    *(undefined8 *)(puVar4 + -0xf8) = 0;
    *(undefined8 *)(puVar4 + -0x100) = 0;
    *(undefined8 *)(puVar4 + -0xe8) = 0;
    *(undefined8 *)(puVar4 + -0xf0) = 0;
    uVar7 = /*System.Collections.Generic.Dictionary.Enumerator<object, EventInstance>$$.ctor*/ func_0x01fd20e8(puVar4 + -0x100,auVar27._0_8_,2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(auVar27._8_8_ + 0x18) + 0xc0) + 0xb0));
    uVar16 = *(undefined8 *)(puVar4 + -0x100);
    uVar14 = *(undefined8 *)(puVar4 + -0xe8);
    uVar18 = *(undefined8 *)(puVar4 + -0xf0);
    extraout_x8[1] = *(undefined8 *)(puVar4 + -0xf8);
    *extraout_x8 = uVar16;
    extraout_x8[3] = uVar14;
    extraout_x8[2] = uVar18;
    extraout_x8[4] = *(undefined8 *)(puVar4 + -0xe0);
    return uVar7;
  }
  if (-1 < *(int *)(puVar20 + -2)) {
    uVar16 = puVar20[-1];
    uVar18 = *puVar20;
    *(undefined8 *)(puVar4 + -0xb0) = 0;
    *(undefined8 *)(puVar4 + -0xa8) = 0;
    uVar7 = /*System.Collections.Generic.KeyValuePair<object, EventInstance>$$.ctor*/ func_0x023181f4(puVar4 + -0xb0,uVar16,uVar18,
                            *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x18) + 0xc0) + 0xa0));
    if (*(uint *)(lVar8 + 0x18) <= uVar6) goto code_r0x01ec8a9c;
    lVar17 = lVar8 + (long)(int)uVar6 * 0x10;
    uVar19 = (ulong)(uVar6 + 1);
    uVar16 = *(undefined8 *)(puVar4 + -0xb0);
    *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(puVar4 + -0xa8);
    *(undefined8 *)(lVar17 + 0x20) = uVar16;
  }
  uVar9 = uVar9 + 1;
  puVar20 = puVar20 + 3;
  if (uVar1 == uVar9) {
    return uVar7;
  }
  goto code_r0x01ec8a24;
}



// ============================================================
// RVA: 0x15bfd60 | Atlas.Audio.KartAudio.OnCollisionExit
// ============================================================

/* WARNING: Possible PIC construction at 0x015c0238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015c0448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bff74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015c044c) */
/* WARNING: Removing unreachable block (ram,0x015c0484) */
/* WARNING: Removing unreachable block (ram,0x015c0488) */
/* WARNING: Removing unreachable block (ram,0x015c0490) */
/* WARNING: Removing unreachable block (ram,0x015c0498) */
/* WARNING: Removing unreachable block (ram,0x015c0460) */
/* WARNING: Removing unreachable block (ram,0x015c0464) */
/* WARNING: Removing unreachable block (ram,0x015c046c) */
/* WARNING: Removing unreachable block (ram,0x015c0474) */
/* WARNING: Removing unreachable block (ram,0x015c04a4) */
/* WARNING: Removing unreachable block (ram,0x015c04b8) */
/* WARNING: Removing unreachable block (ram,0x015c0480) */
/* WARNING: Removing unreachable block (ram,0x015c023c) */
/* WARNING: Removing unreachable block (ram,0x015c0240) */
/* WARNING: Removing unreachable block (ram,0x015c0248) */
/* WARNING: Removing unreachable block (ram,0x015c0264) */
/* WARNING: Removing unreachable block (ram,0x015c027c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f0c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f34) */
/* WARNING: Removing unreachable block (ram,0x01ec9f40) */
/* WARNING: Removing unreachable block (ram,0x01ec9f48) */
/* WARNING: Removing unreachable block (ram,0x01ec9f64) */
/* WARNING: Removing unreachable block (ram,0x01ec9f6c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f78) */
/* WARNING: Removing unreachable block (ram,0x01ec9f80) */
/* WARNING: Removing unreachable block (ram,0x01ec9fac) */
/* WARNING: Removing unreachable block (ram,0x01ec9f8c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f98) */
/* WARNING: Removing unreachable block (ram,0x01ec9fbc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fd4) */
/* WARNING: Removing unreachable block (ram,0x01ec9fdc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fec) */
/* WARNING: Removing unreachable block (ram,0x01ec9ff8) */
/* WARNING: Removing unreachable block (ram,0x01eca008) */
/* WARNING: Removing unreachable block (ram,0x01eca00c) */
/* WARNING: Removing unreachable block (ram,0x01eca01c) */
/* WARNING: Removing unreachable block (ram,0x01eca030) */
/* WARNING: Removing unreachable block (ram,0x01eca038) */
/* WARNING: Removing unreachable block (ram,0x01eca058) */
/* WARNING: Removing unreachable block (ram,0x01eca060) */
/* WARNING: Removing unreachable block (ram,0x01eca06c) */
/* WARNING: Removing unreachable block (ram,0x01eca074) */
/* WARNING: Removing unreachable block (ram,0x01eca0a0) */
/* WARNING: Removing unreachable block (ram,0x01eca080) */
/* WARNING: Removing unreachable block (ram,0x01eca08c) */
/* WARNING: Removing unreachable block (ram,0x01eca0ac) */
/* WARNING: Removing unreachable block (ram,0x01eca10c) */
/* WARNING: Removing unreachable block (ram,0x01eca148) */
/* WARNING: Removing unreachable block (ram,0x01eca150) */
/* WARNING: Removing unreachable block (ram,0x01eca160) */
/* WARNING: Removing unreachable block (ram,0x01eca168) */
/* WARNING: Removing unreachable block (ram,0x01eca174) */
/* WARNING: Removing unreachable block (ram,0x01eca110) */
/* WARNING: Removing unreachable block (ram,0x01eca118) */
/* WARNING: Removing unreachable block (ram,0x01eca124) */
/* WARNING: Removing unreachable block (ram,0x01eca12c) */
/* WARNING: Removing unreachable block (ram,0x01eca188) */
/* WARNING: Removing unreachable block (ram,0x01eca190) */
/* WARNING: Removing unreachable block (ram,0x01eca1b0) */
/* WARNING: Removing unreachable block (ram,0x01eca1bc) */
/* WARNING: Removing unreachable block (ram,0x01eca0c4) */
/* WARNING: Removing unreachable block (ram,0x01eca1e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0cc) */
/* WARNING: Removing unreachable block (ram,0x01eca1ec) */
/* WARNING: Removing unreachable block (ram,0x01eca1f8) */
/* WARNING: Removing unreachable block (ram,0x01eca250) */
/* WARNING: Removing unreachable block (ram,0x01eca298) */
/* WARNING: Removing unreachable block (ram,0x01eca270) */
/* WARNING: Removing unreachable block (ram,0x01eca2b0) */
/* WARNING: Removing unreachable block (ram,0x01eca278) */
/* WARNING: Removing unreachable block (ram,0x01eca2b4) */
/* WARNING: Removing unreachable block (ram,0x01eca2e8) */
/* WARNING: Removing unreachable block (ram,0x01eca2cc) */
/* WARNING: Removing unreachable block (ram,0x01eca284) */
/* WARNING: Removing unreachable block (ram,0x01eca29c) */
/* WARNING: Removing unreachable block (ram,0x01eca0d8) */
/* WARNING: Removing unreachable block (ram,0x01eca0e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0ec) */
/* WARNING: Removing unreachable block (ram,0x015bff78) */
/* WARNING: Removing unreachable block (ram,0x015bff7c) */
/* WARNING: Removing unreachable block (ram,0x015bff94) */
/* WARNING: Removing unreachable block (ram,0x015bff9c) */
/* WARNING: Removing unreachable block (ram,0x015bffa4) */
/* WARNING: Removing unreachable block (ram,0x015bffcc) */
/* WARNING: Removing unreachable block (ram,0x015bfff0) */
/* WARNING: Removing unreachable block (ram,0x01ec8614) */
/* WARNING: Removing unreachable block (ram,0x01ec863c) */
/* WARNING: Removing unreachable block (ram,0x01ec8664) */
/* WARNING: Removing unreachable block (ram,0x01ec867c) */
/* WARNING: Removing unreachable block (ram,0x01ec86a0) */
/* WARNING: Removing unreachable block (ram,0x01ec86c0) */
/* WARNING: Removing unreachable block (ram,0x01ec86cc) */
/* WARNING: Removing unreachable block (ram,0x01ec870c) */
/* WARNING: Removing unreachable block (ram,0x01ec8710) */
/* WARNING: Removing unreachable block (ram,0x01ec8734) */
/* WARNING: Removing unreachable block (ram,0x01ec87d0) */
/* WARNING: Removing unreachable block (ram,0x01ec875c) */
/* WARNING: Removing unreachable block (ram,0x01ec877c) */
/* WARNING: Removing unreachable block (ram,0x01ec8788) */
/* WARNING: Removing unreachable block (ram,0x01ec87e8) */
/* WARNING: Removing unreachable block (ram,0x01ec87ec) */
/* WARNING: Removing unreachable block (ram,0x01ec8810) */
/* WARNING: Removing unreachable block (ram,0x01ec881c) */
/* WARNING: Removing unreachable block (ram,0x01ec8828) */
/* WARNING: Removing unreachable block (ram,0x01ec8838) */
/* WARNING: Removing unreachable block (ram,0x01ec8840) */
/* WARNING: Removing unreachable block (ram,0x01ec8888) */
/* WARNING: Removing unreachable block (ram,0x01ec8894) */
/* WARNING: Removing unreachable block (ram,0x01ec8844) */
/* WARNING: Removing unreachable block (ram,0x01ec8854) */
/* WARNING: Removing unreachable block (ram,0x01ec887c) */
/* WARNING: Removing unreachable block (ram,0x01ec878c) */
/* WARNING: Removing unreachable block (ram,0x01ec87ac) */
/* WARNING: Removing unreachable block (ram,0x01ec87d4) */
/* WARNING: Removing unreachable block (ram,0x01ec86d0) */
/* WARNING: Removing unreachable block (ram,0x01ec86f8) */
/* WARNING: Removing unreachable block (ram,0x01ec86f0) */
/* WARNING: Removing unreachable block (ram,0x01ec86fc) */
/* WARNING: Removing unreachable block (ram,0x01ec864c) */
/* WARNING: Removing unreachable block (ram,0x01ec8620) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Audio_KartAudio__OnCollisionExit
                (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,ulong param_4,
                undefined8 param_5,undefined8 param_6,long param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *extraout_x8;
  long lVar15;
  undefined8 unaff_x19;
  long lVar16;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong unaff_x22;
  ulong uVar19;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 *puVar20;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar21;
  code *unaff_x30;
  undefined *puVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  ulong unaff_d8;
  float fVar26;
  ulong unaff_d9;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  auVar27._8_8_ = unaff_x20;
  auVar27._0_8_ = unaff_x19;
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if ((*(char *)(param_4 + 0x50) == '\0') || (*(char *)(param_4 + 0x38) != '\0')) {
      return param_4;
    }
    if (*(long *)(param_4 + 0x90) == 0) break;
    if (*(char *)(*(long *)(param_4 + 0x90) + 0xcd) == '\0') {
      return param_4;
    }
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = auVar27._8_8_;
    *(long *)((long)register0x00000008 + -0x18) = auVar27._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    if ((bRam0000000003eb52cc & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d2fb00);
      bRam0000000003eb52cc = 1;
    }
    lVar16 = *(long *)(param_4 + 0x150);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar16 != 0) {
      lVar16 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar16,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x238),
                               uRam0000000003d2fb00);
      uVar7 = 0;
      if (lVar16 != 0) {
        if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = /*Core.Audio.AudioEvent$$SetParameter*/ func_0x01638fc8(0,lVar16,*(undefined8 *)
                                          (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x1c8),0,0);
      }
      *(undefined4 *)(param_4 + 0x70) = 0xbf800000;
      return uVar7;
    }
    auVar27 = func_0x00f78af4();
    lVar16 = auVar27._8_8_;
    uVar9 = auVar27._0_8_;
    *(ulong *)((long)register0x00000008 + -0x90) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x88) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3d1ff28;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(ulong *)((long)register0x00000008 + -0x48) = param_4;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x38) = Atlas_Audio_KartAudio__OnCollisionEnter;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x40);
    unaff_x21 = 0x3eb5000;
    uVar7 = uVar9;
    if ((bRam0000000003eb52ce & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d578a8);
      uVar7 = func_0x00f78a20(0x3d23990);
      bRam0000000003eb52ce = 1;
    }
    fVar24 = _UNK_033f83fc;
    if (*(char *)(uVar9 + 0x50) == '\0') {
      return uVar7;
    }
    if (*(char *)(uVar9 + 0x38) != '\0') {
      return uVar7;
    }
    if (*(long *)(uVar9 + 0x90) != 0) {
      if (*(char *)(*(long *)(uVar9 + 0x90) + 0xcd) == '\0') {
        return uVar7;
      }
      if (*(float *)(uVar9 + 0x68) <= _UNK_033f83fc) {
        return uVar7;
      }
      if (*(int *)(lVar16 + 0x20) == 5) {
        return uVar7;
      }
      *(undefined4 *)(uVar9 + 0x68) = 0;
      if ((*(long *)(lVar16 + 8) != 0) &&
         (lVar8 = /*UnityEngine.Collision$$get_gameObject*/ func_0x0329ee78(*(long *)(lVar16 + 8),0), lVar8 != 0)) {
        unaff_x21 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar8,uRam0000000003d578a8);
        if (*(long *)(lVar16 + 8) != 0) {
          uVar23 = /*UnityEngine.Collision$$get_relativeVelocity*/ func_0x0329ede4(*(long *)(lVar16 + 8),0);
          *(undefined4 *)((long)register0x00000008 + -0xa0) = uVar23;
          *(float *)((long)register0x00000008 + -0x9c) = fVar24;
          *(undefined4 *)((long)register0x00000008 + -0x98) = param_3;
          uVar23 = /*UnityEngine.Vector3$$get_magnitude*/ func_0x0327bebc((undefined1 *)((long)register0x00000008 + -0xa0),0);
          if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          fVar24 = (float)/*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar23,*(undefined4 *)
                                                  (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8),0);
          unaff_d8 = (ulong)(uint)fVar24;
          fVar26 = *(float *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 8);
          unaff_d9 = (ulong)(uint)fVar26;
          unaff_x22 = (ulong)((*(uint *)(lVar16 + 0x20) & 0xfffffffe) == 2);
          unaff_x25 = 0x3d23990;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(unaff_x21,0);
          if ((int)uVar7 == 0) {
            unaff_x23 = 1;
          }
          else {
            if (unaff_x21 == 0) goto code_r0x015bfd5c;
            unaff_x23 = (ulong)*(uint *)(unaff_x21 + 0x1c);
          }
          if (*(int *)(lVar16 + 0x20) == 0) {
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(unaff_x21,0);
            if ((int)uVar7 != 0) {
              if (unaff_x21 == 0) goto code_r0x015bfd5c;
              fVar25 = 3.0;
              if ((*(uint *)(unaff_x21 + 0x1c) & 0xfffffffe) == 8) goto code_r0x015bfce0;
            }
          }
          if (3 < *(int *)(lVar16 + 0x20) - 1U) {
            return uVar7;
          }
          fVar25 = (fVar24 / fVar26) * 3.0;
code_r0x015bfce0:
          uVar23 = 0;
          if (*(char *)(lVar16 + 0x1c) != '\0') {
            uVar23 = 0xbf800000;
          }
          *(undefined4 *)(uVar9 + 0x70) = uVar23;
          /*UnityEngine.Mathf$$RoundToInt*/ func_0x0323d210(fVar25,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0,0);
          uVar7 = Atlas_Audio_KartAudio__PlayCollision(uVar9,unaff_x23);
          return uVar7;
        }
      }
    }
code_r0x015bfd5c:
    unaff_x30 = Atlas_Audio_KartAudio__OnCollisionExit;
    param_4 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  auVar28 = func_0x00f78af4();
  uVar7 = auVar28._8_8_;
  uVar11 = auVar28._0_8_;
  puVar4 = (undefined1 *)((long)register0x00000008 + -0x40);
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x40);
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x30) = auVar27._8_8_;
  *(long *)((long)register0x00000008 + -0x28) = auVar27._0_8_;
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x18) = &Atlas_Audio_KartAudio__OnTriggerEnter;
  puVar21 = (undefined1 *)((long)register0x00000008 + -0x20);
  uVar17 = 0x3eb5000;
  uVar9 = uVar11;
  if ((bRam0000000003eb52cf & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d2e048);
    func_0x00f78a20(0x3d2e050);
    func_0x00f78a20(0x3d577c8);
    func_0x00f78a20(0x3d578c0);
    uVar9 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb52cf = 1;
  }
  if (*(char *)(uVar11 + 0x50) == '\0') {
    return uVar9;
  }
  if (*(char *)(uVar11 + 0x38) != '\0') {
    return uVar9;
  }
  if (*(float *)(uVar11 + 100) <= _UNK_033f8140) {
    return uVar9;
  }
  *(undefined4 *)(uVar11 + 100) = 0;
  if ((uVar7 == 0) || (lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar7,0), lVar16 == 0)) {
code_r0x015c0060:
    puVar22 = &Atlas_Audio_KartAudio__PickupPickedUp;
    uVar9 = func_0x00f78af4();
  }
  else {
    uVar17 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar16,uRam0000000003d578c0);
    lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar7,0);
    if (lVar16 == 0) goto code_r0x015c0060;
    uVar7 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar16,uRam0000000003d577c8);
    uVar9 = 0x3d23990;
    uVar19 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar17,0);
    if (iVar5 == 0) {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar7,0);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      unaff_x22 = uVar9;
      if (uVar7 != 0) {
        iVar5 = *(int *)(uVar7 + 0x60);
        if (iVar5 == 0) {
          if (*(char *)(uVar7 + 0x68) != '\0') {
            return uVar10;
          }
          unaff_x22 = uVar19;
          if (*(long *)(uVar11 + 0x90) != 0) {
            if (*(char *)(*(long *)(uVar11 + 0x90) + 0xce) == '\0') {
              return uVar10;
            }
            lVar16 = *(long *)(uVar11 + 0x148);
            if (lVar16 != 0) {
              puVar22 = &UNK_015bff78;
              goto code_r0x01ec8898;
            }
          }
        }
        else if (iVar5 == 2) {
          if (*(char *)(uVar7 + 0x50) != '\0') {
            return uVar10;
          }
          unaff_x22 = uVar19;
          if (*(long *)(uVar11 + 0x90) != 0) {
            if (*(char *)(*(long *)(uVar11 + 0x90) + 0xd2) == '\0') {
              return uVar10;
            }
            uVar17 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(uVar7,0);
            *(undefined8 *)((long)register0x00000008 + -0x40) =
                 *(undefined8 *)((long)register0x00000008 + -0x40);
            *(undefined8 *)((long)register0x00000008 + -0x38) =
                 *(undefined8 *)((long)register0x00000008 + -0x38);
            *(undefined8 *)((long)register0x00000008 + -0x30) =
                 *(undefined8 *)((long)register0x00000008 + -0x30);
            *(undefined8 *)((long)register0x00000008 + -0x28) =
                 *(undefined8 *)((long)register0x00000008 + -0x28);
            *(undefined8 *)((long)register0x00000008 + -0x20) =
                 *(undefined8 *)((long)register0x00000008 + -0x20);
            *(undefined8 *)((long)register0x00000008 + -0x18) =
                 *(undefined8 *)((long)register0x00000008 + -0x18);
            if ((bRam0000000003eb4876 & 1) == 0) {
              func_0x00f78a20(0x3d1ff30,uVar17,0);
              func_0x00f78a20(0x3d65d08);
              bRam0000000003eb4876 = 1;
            }
            uVar11 = *(ulong *)(uVar7 + 0xb0);
            if (uVar11 == 0) {
              uVar9 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*(undefined8 *)(uVar7 + 0x48),/*STR('')*/ uRam0000000003d65d08,0);
              if ((uVar9 & 1) == 0) {
                uVar11 = *(ulong *)(uVar7 + 0xb0);
              }
              else {
                uVar18 = *(undefined8 *)(uVar7 + 0x48);
                uVar11 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
                uVar9 = /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar11,uVar18,0,0,0);
                *(ulong *)(uVar7 + 0xb0) = uVar11;
              }
              if (uVar11 == 0) {
                return uVar9;
              }
            }
            puVar21 = *(undefined1 **)((long)register0x00000008 + -0x20);
            puVar22 = *(undefined **)((long)register0x00000008 + -0x18);
            uVar18 = *(undefined8 *)((long)register0x00000008 + -0x30);
            lVar16 = *(long *)((long)register0x00000008 + -0x28);
            puVar3 = (undefined1 *)((long)register0x00000008 + -0x10);
            goto code_r0x01638d28;
          }
        }
        else {
          if (iVar5 != 1) {
            return uVar10;
          }
          if (*(long *)(uVar11 + 0x90) != 0) {
            if (*(char *)(*(long *)(uVar11 + 0x90) + 0xd1) == '\0') {
              return uVar10;
            }
            fVar24 = *(float *)(uVar11 + 0x74) * 100.0;
            *(float *)(uVar7 + 0xc0) = fVar24 * _UNK_033f82c0 + _UNK_033f82c4;
            *(float *)(uVar7 + 0xc4) = fVar24;
            return uVar7;
          }
        }
      }
      goto code_r0x015c0060;
    }
    puVar21 = *(undefined1 **)((long)register0x00000008 + -0x20);
    puVar22 = *(undefined **)((long)register0x00000008 + -0x18);
    uVar7 = *(ulong *)((long)register0x00000008 + -0x30);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0x40);
    uVar17 = *(undefined8 *)((long)register0x00000008 + -0x38);
    uVar9 = uVar11;
    uVar11 = *(ulong *)((long)register0x00000008 + -0x28);
  }
  *(ulong *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = uVar17;
  *(ulong *)(puVar2 + -0x20) = uVar7;
  *(ulong *)(puVar2 + -0x18) = uVar11;
  *(undefined1 **)(puVar2 + -0x10) = puVar21;
  *(undefined **)(puVar2 + -8) = puVar22;
  uVar7 = uVar9;
  if ((bRam0000000003eb52d1 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    uVar7 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52d1 = 1;
  }
  if (*(char *)(uVar9 + 0x38) != '\0') {
    return uVar7;
  }
  lVar16 = *(long *)(uVar9 + 0x150);
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((lVar16 != 0) &&
     (uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar16,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x230),
                               uRam0000000003d2fb00), uVar11 != 0)) {
    uVar17 = *(undefined8 *)(uVar9 + 0xb8);
    puVar21 = *(undefined1 **)(puVar2 + -0x10);
    puVar22 = *(undefined **)(puVar2 + -8);
    lVar16 = *(long *)(puVar2 + -0x18);
    puVar3 = puVar2;
    uVar18 = *(undefined8 *)(puVar2 + -0x20);
code_r0x01638d28:
    *(undefined8 *)(puVar3 + -0x20) = uVar18;
    *(long *)(puVar3 + -0x18) = lVar16;
    *(undefined1 **)(puVar3 + -0x10) = puVar21;
    *(undefined **)(puVar3 + -8) = puVar22;
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar11,uVar17,0);
    return uVar11;
  }
  auVar27 = func_0x00f78af4();
  uVar7 = auVar27._8_8_;
  uVar11 = auVar27._0_8_;
  puVar4 = puVar2 + -0x60;
  *(ulong *)(puVar2 + -0x60) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x58) = 0x3d1ff28;
  *(long *)(puVar2 + -0x50) = lVar16;
  *(ulong *)(puVar2 + -0x48) = uVar9;
  *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x38) = &Atlas_Audio_KartAudio__OnTriggerExit;
  puVar21 = puVar2 + -0x40;
  uVar17 = 0x3eb5000;
  uVar9 = uVar11;
  if ((bRam0000000003eb52d0 & 1) == 0) {
    func_0x00f78a20(0x3d2e050);
    func_0x00f78a20(0x3d2e058);
    func_0x00f78a20(0x3d2e060);
    func_0x00f78a20(0x3d577c8);
    uVar9 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb52d0 = 1;
  }
  if ((*(char *)(uVar11 + 0x50) == '\0') || (*(char *)(uVar11 + 0x38) != '\0')) {
    return uVar9;
  }
  if ((uVar7 != 0) && (lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar7,0), lVar16 != 0)) {
    uVar7 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar16,uRam0000000003d577c8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar9 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar7,0);
    if ((int)uVar9 == 0) {
      return uVar9;
    }
    if (uVar7 != 0) {
      if (*(int *)(uVar7 + 0x60) != 0) {
        return uVar9;
      }
      if (*(long *)(uVar11 + 0x90) != 0) {
        if (*(char *)(*(long *)(uVar11 + 0x90) + 0xce) == '\0') {
          return uVar9;
        }
        lVar16 = *(long *)(uVar11 + 0x148);
        if (lVar16 != 0) {
          puVar22 = &UNK_015c023c;
          uVar9 = unaff_x22;
code_r0x01ec8898:
          *(undefined1 **)(puVar4 + -0x10) = puVar21;
          *(undefined **)(puVar4 + -8) = puVar22;
          if (lVar16 != 0) {
            uVar6 = (*(code *)**(undefined8 **)
                                (*(long *)(*(long *)(uRam0000000003d2e050 + 0x18) + 0xc0) + 0x40))()
            ;
            return (ulong)(~uVar6 >> 0x1f);
          }
          uVar19 = uRam0000000003d2e050;
          auVar27 = func_0x00f78af4(0,uVar7);
          lVar16 = auVar27._0_8_;
          *(undefined8 *)(puVar4 + -0x50) = unaff_x24;
          *(ulong *)(puVar4 + -0x48) = unaff_x23;
          *(ulong *)(puVar4 + -0x40) = uVar9;
          *(undefined8 *)(puVar4 + -0x38) = uVar17;
          *(ulong *)(puVar4 + -0x30) = uVar7;
          *(ulong *)(puVar4 + -0x28) = uVar11;
          *(undefined1 **)(puVar4 + -0x20) = puVar4 + -0x10;
          *(undefined **)(puVar4 + -0x18) =
               &System_Collections_Generic_Dictionary_object__EventInstance___ContainsValue;
          plVar12 = (long *)(*(code *)**(undefined8 **)
                                        (*(long *)(*(long *)(uVar19 + 0x18) + 0xc0) + 0x68))();
          iVar5 = *(int *)(lVar16 + 0x20);
          if (0 < iVar5) {
            lVar8 = 0;
            uVar7 = 0;
            do {
              lVar15 = *(long *)(lVar16 + 0x18);
              if (lVar15 == 0) {
code_r0x01ec898c:
                func_0x00f78af4();
code_r0x01ec8990:
                uVar17 = func_0x00f78b24();
                auVar28 = func_0x00f78ac0(uVar17,0);
                lVar15 = auVar28._8_8_;
                lVar13 = auVar28._0_8_;
                *(undefined8 *)(puVar4 + -0xa0) = unaff_x26;
                *(undefined8 *)(puVar4 + -0x98) = unaff_x25;
                *(undefined8 *)(puVar4 + -0x90) = unaff_x24;
                *(ulong *)(puVar4 + -0x88) = uVar7;
                *(long *)(puVar4 + -0x80) = lVar8;
                *(long **)(puVar4 + -0x78) = plVar12;
                *(undefined1 (*) [16])(puVar4 + -0x70) = auVar27;
                *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x20;
                *(undefined **)(puVar4 + -0x58) =
                     &System_Collections_Generic_Dictionary_object__EventInstance___CopyTo;
                if (lVar15 == 0) goto code_r0x01ec8b28;
                uVar6 = (uint)uVar19;
                if (((int)uVar6 < 0) || (*(int *)(lVar15 + 0x18) < (int)uVar6))
                goto code_r0x01ec8aa8;
                if (lVar13 == 0) goto code_r0x01ec8b24;
                uVar7 = (*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(param_7 + 0x18) + 0xc0) + 0x90))(lVar13);
                if ((int)(*(int *)(lVar15 + 0x18) - uVar6) < (int)uVar7) {
                  func_0x00f78a24(0x3d1fce8);
                  uVar17 = func_0x00f78aec();
                  uVar18 = func_0x00f78a24(0x3d6bc10);
                  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar17,uVar18,0);
                  goto code_r0x01ec8b8c;
                }
                uVar1 = *(uint *)(lVar13 + 0x20);
                if ((int)uVar1 < 1) {
                  return uVar7;
                }
                lVar16 = *(long *)(lVar13 + 0x18);
                if (lVar16 == 0) goto code_r0x01ec8b24;
                uVar9 = 0;
                puVar20 = (undefined8 *)(lVar16 + 0x30);
                goto code_r0x01ec8a24;
              }
              if (*(uint *)(lVar15 + 0x18) <= uVar7) goto code_r0x01ec8990;
              if (-1 < *(int *)(lVar15 + lVar8 + 0x20)) {
                if (plVar12 == (long *)0x0) goto code_r0x01ec898c;
                param_7 = *(long *)(*plVar12 + 0x1c0);
                uVar19 = auVar27._8_8_;
                uVar9 = (**(code **)(*plVar12 + 0x1b8))
                                  (plVar12,*(undefined8 *)(lVar15 + lVar8 + 0x30));
                if ((uVar9 & 1) != 0) {
                  return 1;
                }
                iVar5 = *(int *)(lVar16 + 0x20);
              }
              uVar7 = uVar7 + 1;
              lVar8 = lVar8 + 0x18;
            } while ((long)uVar7 < (long)iVar5);
          }
          return 0;
        }
      }
    }
  }
  uVar9 = func_0x00f78af4();
  *(ulong *)(puVar2 + -0x90) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x88) = 0x3eb5000;
  *(ulong *)(puVar2 + -0x80) = uVar7;
  *(ulong *)(puVar2 + -0x78) = uVar11;
  *(undefined1 **)(puVar2 + -0x70) = puVar21;
  *(undefined **)(puVar2 + -0x68) = &Atlas_Audio_KartAudio__PlayVFXAudio;
  uVar7 = uVar9;
  if ((bRam0000000003eb52d4 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    uVar7 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52d4 = 1;
  }
  if (*(char *)(uVar9 + 0x38) == '\0') {
    lVar16 = *(long *)(uVar9 + 0x150);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar16 == 0) {
      auVar27 = func_0x00f78af4();
      uVar17 = auVar27._8_8_;
      lVar16 = auVar27._0_8_;
      puVar3 = puVar2 + -0xd0;
      *(undefined8 *)(puVar2 + -0xd0) = unaff_x24;
      *(ulong *)(puVar2 + -200) = unaff_x23;
      *(ulong *)(puVar2 + -0xc0) = unaff_x22;
      *(undefined8 *)(puVar2 + -0xb8) = 0x3d1ff28;
      *(undefined8 *)(puVar2 + -0xb0) = 0;
      *(ulong *)(puVar2 + -0xa8) = uVar9;
      *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
      *(undefined **)(puVar2 + -0x98) = &Atlas_Audio_KartAudio__ExitPortal;
      puVar21 = puVar2 + -0xa0;
      if ((bRam0000000003eb52d6 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d2fb00);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb52d6 = 1;
      }
      lVar8 = *(long *)(lVar16 + 0x150);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar8 != 0) {
        uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar8,*(undefined8 *)
                                        (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x278),
                                 uRam0000000003d2fb00);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
        if ((uVar7 & 1) == 0) {
          uVar17 = *(undefined8 *)(lVar16 + 0xb8);
        }
        if (uVar11 != 0) {
          puVar22 = &UNK_015c044c;
          uVar18 = uVar17;
          goto code_r0x01638d28;
        }
      }
      uVar7 = func_0x00f78af4();
      return uVar7;
    }
    uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar16,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x250),
                             uRam0000000003d2fb00);
    uVar7 = 0;
    if (uVar11 != 0) {
      uVar17 = *(undefined8 *)(uVar9 + 0xb8);
      puVar21 = *(undefined1 **)(puVar2 + -0x70);
      puVar22 = *(undefined **)(puVar2 + -0x68);
      lVar16 = *(long *)(puVar2 + -0x78);
      puVar3 = puVar2 + -0x60;
      uVar18 = *(undefined8 *)(puVar2 + -0x80);
      goto code_r0x01638d28;
    }
  }
  return uVar7;
code_r0x01ec8a24:
  uVar6 = (uint)uVar19;
  if (*(uint *)(lVar16 + 0x18) <= uVar9) {
code_r0x01ec8a9c:
    uVar17 = func_0x00f78b24();
    func_0x00f78ac0(uVar17,0);
code_r0x01ec8aa8:
    *(uint *)(puVar4 + -0xb0) = uVar6;
    uVar17 = func_0x00f78a24(0x3d22910);
    uVar17 = func_0x00f78ae0(uVar17,puVar4 + -0xb0);
    func_0x00f78a24(0x3d1fcf8);
    lVar15 = func_0x00f78aec();
    uVar18 = func_0x00f78a24(0x3d79a60);
    uVar14 = func_0x00f78a24(0x3d6de28);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(lVar15,uVar18,uVar17,uVar14,0);
    uVar17 = func_0x00f78a24(0x3d2f4b0);
    func_0x00f78ac0(lVar15,uVar17);
code_r0x01ec8b24:
    func_0x00f78af4();
    lVar16 = lVar15;
code_r0x01ec8b28:
    func_0x00f78a24(0x3d1fcf0);
    uVar17 = func_0x00f78aec();
    uVar18 = func_0x00f78a24(0x3d77d18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar17,uVar18,0);
    lVar15 = lVar16;
code_r0x01ec8b8c:
    uVar18 = func_0x00f78a24(0x3d2f4b0);
    auVar27 = func_0x00f78ac0(uVar17,uVar18);
    *(long *)(puVar4 + -0xd0) = lVar15;
    *(undefined8 *)(puVar4 + -200) = uVar17;
    *(undefined1 **)(puVar4 + -0xc0) = puVar4 + -0x60;
    *(undefined **)(puVar4 + -0xb8) =
         &System_Collections_Generic_Dictionary_object__EventInstance___GetEnumerator;
    *(undefined8 *)(puVar4 + -0xe0) = 0;
    *(undefined8 *)(puVar4 + -0xf8) = 0;
    *(undefined8 *)(puVar4 + -0x100) = 0;
    *(undefined8 *)(puVar4 + -0xe8) = 0;
    *(undefined8 *)(puVar4 + -0xf0) = 0;
    uVar7 = /*System.Collections.Generic.Dictionary.Enumerator<object, EventInstance>$$.ctor*/ func_0x01fd20e8(puVar4 + -0x100,auVar27._0_8_,2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(auVar27._8_8_ + 0x18) + 0xc0) + 0xb0));
    uVar17 = *(undefined8 *)(puVar4 + -0x100);
    uVar14 = *(undefined8 *)(puVar4 + -0xe8);
    uVar18 = *(undefined8 *)(puVar4 + -0xf0);
    extraout_x8[1] = *(undefined8 *)(puVar4 + -0xf8);
    *extraout_x8 = uVar17;
    extraout_x8[3] = uVar14;
    extraout_x8[2] = uVar18;
    extraout_x8[4] = *(undefined8 *)(puVar4 + -0xe0);
    return uVar7;
  }
  if (-1 < *(int *)(puVar20 + -2)) {
    uVar17 = puVar20[-1];
    uVar18 = *puVar20;
    *(undefined8 *)(puVar4 + -0xb0) = 0;
    *(undefined8 *)(puVar4 + -0xa8) = 0;
    uVar7 = /*System.Collections.Generic.KeyValuePair<object, EventInstance>$$.ctor*/ func_0x023181f4(puVar4 + -0xb0,uVar17,uVar18,
                            *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x18) + 0xc0) + 0xa0));
    if (*(uint *)(lVar15 + 0x18) <= uVar6) goto code_r0x01ec8a9c;
    lVar8 = lVar15 + (long)(int)uVar6 * 0x10;
    uVar19 = (ulong)(uVar6 + 1);
    uVar17 = *(undefined8 *)(puVar4 + -0xb0);
    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(puVar4 + -0xa8);
    *(undefined8 *)(lVar8 + 0x20) = uVar17;
  }
  uVar9 = uVar9 + 1;
  puVar20 = puVar20 + 3;
  if (uVar1 == uVar9) {
    return uVar7;
  }
  goto code_r0x01ec8a24;
}



// ============================================================
// RVA: 0x15bfd9c | Atlas.Audio.KartAudio.OnTriggerEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x015c0238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015c0448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015bff74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015c044c) */
/* WARNING: Removing unreachable block (ram,0x015c0484) */
/* WARNING: Removing unreachable block (ram,0x015c0488) */
/* WARNING: Removing unreachable block (ram,0x015c0490) */
/* WARNING: Removing unreachable block (ram,0x015c0498) */
/* WARNING: Removing unreachable block (ram,0x015c0460) */
/* WARNING: Removing unreachable block (ram,0x015c0464) */
/* WARNING: Removing unreachable block (ram,0x015c046c) */
/* WARNING: Removing unreachable block (ram,0x015c0474) */
/* WARNING: Removing unreachable block (ram,0x015c04a4) */
/* WARNING: Removing unreachable block (ram,0x015c04b8) */
/* WARNING: Removing unreachable block (ram,0x015c0480) */
/* WARNING: Removing unreachable block (ram,0x015c023c) */
/* WARNING: Removing unreachable block (ram,0x015c0240) */
/* WARNING: Removing unreachable block (ram,0x015c0248) */
/* WARNING: Removing unreachable block (ram,0x015c0264) */
/* WARNING: Removing unreachable block (ram,0x015c027c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f0c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f34) */
/* WARNING: Removing unreachable block (ram,0x01ec9f40) */
/* WARNING: Removing unreachable block (ram,0x01ec9f48) */
/* WARNING: Removing unreachable block (ram,0x01ec9f64) */
/* WARNING: Removing unreachable block (ram,0x01ec9f6c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f78) */
/* WARNING: Removing unreachable block (ram,0x01ec9f80) */
/* WARNING: Removing unreachable block (ram,0x01ec9fac) */
/* WARNING: Removing unreachable block (ram,0x01ec9f8c) */
/* WARNING: Removing unreachable block (ram,0x01ec9f98) */
/* WARNING: Removing unreachable block (ram,0x01ec9fbc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fd4) */
/* WARNING: Removing unreachable block (ram,0x01ec9fdc) */
/* WARNING: Removing unreachable block (ram,0x01ec9fec) */
/* WARNING: Removing unreachable block (ram,0x01ec9ff8) */
/* WARNING: Removing unreachable block (ram,0x01eca008) */
/* WARNING: Removing unreachable block (ram,0x01eca00c) */
/* WARNING: Removing unreachable block (ram,0x01eca01c) */
/* WARNING: Removing unreachable block (ram,0x01eca030) */
/* WARNING: Removing unreachable block (ram,0x01eca038) */
/* WARNING: Removing unreachable block (ram,0x01eca058) */
/* WARNING: Removing unreachable block (ram,0x01eca060) */
/* WARNING: Removing unreachable block (ram,0x01eca06c) */
/* WARNING: Removing unreachable block (ram,0x01eca074) */
/* WARNING: Removing unreachable block (ram,0x01eca0a0) */
/* WARNING: Removing unreachable block (ram,0x01eca080) */
/* WARNING: Removing unreachable block (ram,0x01eca08c) */
/* WARNING: Removing unreachable block (ram,0x01eca0ac) */
/* WARNING: Removing unreachable block (ram,0x01eca10c) */
/* WARNING: Removing unreachable block (ram,0x01eca148) */
/* WARNING: Removing unreachable block (ram,0x01eca150) */
/* WARNING: Removing unreachable block (ram,0x01eca160) */
/* WARNING: Removing unreachable block (ram,0x01eca168) */
/* WARNING: Removing unreachable block (ram,0x01eca174) */
/* WARNING: Removing unreachable block (ram,0x01eca110) */
/* WARNING: Removing unreachable block (ram,0x01eca118) */
/* WARNING: Removing unreachable block (ram,0x01eca124) */
/* WARNING: Removing unreachable block (ram,0x01eca12c) */
/* WARNING: Removing unreachable block (ram,0x01eca188) */
/* WARNING: Removing unreachable block (ram,0x01eca190) */
/* WARNING: Removing unreachable block (ram,0x01eca1b0) */
/* WARNING: Removing unreachable block (ram,0x01eca1bc) */
/* WARNING: Removing unreachable block (ram,0x01eca0c4) */
/* WARNING: Removing unreachable block (ram,0x01eca1e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0cc) */
/* WARNING: Removing unreachable block (ram,0x01eca1ec) */
/* WARNING: Removing unreachable block (ram,0x01eca1f8) */
/* WARNING: Removing unreachable block (ram,0x01eca250) */
/* WARNING: Removing unreachable block (ram,0x01eca298) */
/* WARNING: Removing unreachable block (ram,0x01eca270) */
/* WARNING: Removing unreachable block (ram,0x01eca2b0) */
/* WARNING: Removing unreachable block (ram,0x01eca278) */
/* WARNING: Removing unreachable block (ram,0x01eca2b4) */
/* WARNING: Removing unreachable block (ram,0x01eca2e8) */
/* WARNING: Removing unreachable block (ram,0x01eca2cc) */
/* WARNING: Removing unreachable block (ram,0x01eca284) */
/* WARNING: Removing unreachable block (ram,0x01eca29c) */
/* WARNING: Removing unreachable block (ram,0x01eca0d8) */
/* WARNING: Removing unreachable block (ram,0x01eca0e8) */
/* WARNING: Removing unreachable block (ram,0x01eca0ec) */
/* WARNING: Removing unreachable block (ram,0x015bff78) */
/* WARNING: Removing unreachable block (ram,0x015bff7c) */
/* WARNING: Removing unreachable block (ram,0x015bff94) */
/* WARNING: Removing unreachable block (ram,0x015bff9c) */
/* WARNING: Removing unreachable block (ram,0x015bffa4) */
/* WARNING: Removing unreachable block (ram,0x015bffcc) */
/* WARNING: Removing unreachable block (ram,0x015bfff0) */
/* WARNING: Removing unreachable block (ram,0x01ec8614) */
/* WARNING: Removing unreachable block (ram,0x01ec863c) */
/* WARNING: Removing unreachable block (ram,0x01ec8664) */
/* WARNING: Removing unreachable block (ram,0x01ec867c) */
/* WARNING: Removing unreachable block (ram,0x01ec86a0) */
/* WARNING: Removing unreachable block (ram,0x01ec86c0) */
/* WARNING: Removing unreachable block (ram,0x01ec86cc) */
/* WARNING: Removing unreachable block (ram,0x01ec870c) */
/* WARNING: Removing unreachable block (ram,0x01ec8710) */
/* WARNING: Removing unreachable block (ram,0x01ec8734) */
/* WARNING: Removing unreachable block (ram,0x01ec87d0) */
/* WARNING: Removing unreachable block (ram,0x01ec875c) */
/* WARNING: Removing unreachable block (ram,0x01ec877c) */
/* WARNING: Removing unreachable block (ram,0x01ec8788) */
/* WARNING: Removing unreachable block (ram,0x01ec87e8) */
/* WARNING: Removing unreachable block (ram,0x01ec87ec) */
/* WARNING: Removing unreachable block (ram,0x01ec8810) */
/* WARNING: Removing unreachable block (ram,0x01ec881c) */
/* WARNING: Removing unreachable block (ram,0x01ec8828) */
/* WARNING: Removing unreachable block (ram,0x01ec8838) */
/* WARNING: Removing unreachable block (ram,0x01ec8840) */
/* WARNING: Removing unreachable block (ram,0x01ec8888) */
/* WARNING: Removing unreachable block (ram,0x01ec8894) */
/* WARNING: Removing unreachable block (ram,0x01ec8844) */
/* WARNING: Removing unreachable block (ram,0x01ec8854) */
/* WARNING: Removing unreachable block (ram,0x01ec887c) */
/* WARNING: Removing unreachable block (ram,0x01ec878c) */
/* WARNING: Removing unreachable block (ram,0x01ec87ac) */
/* WARNING: Removing unreachable block (ram,0x01ec87d4) */
/* WARNING: Removing unreachable block (ram,0x01ec86d0) */
/* WARNING: Removing unreachable block (ram,0x01ec86f8) */
/* WARNING: Removing unreachable block (ram,0x01ec86f0) */
/* WARNING: Removing unreachable block (ram,0x01ec86fc) */
/* WARNING: Removing unreachable block (ram,0x01ec864c) */
/* WARNING: Removing unreachable block (ram,0x01ec8620) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Audio_KartAudio__OnTriggerEnter
                (ulong param_1,ulong param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *extraout_x8;
  long lVar14;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar15;
  long lVar16;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 *puVar17;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined1 *puVar18;
  undefined *unaff_x30;
  undefined *puVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  puVar3 = &stack0xffffffffffffffd0;
  puVar18 = &stack0xfffffffffffffff0;
  uVar6 = param_1;
  if ((bRam0000000003eb52cf & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d2e048);
    func_0x00f78a20(0x3d2e050);
    func_0x00f78a20(0x3d577c8);
    func_0x00f78a20(0x3d578c0);
    uVar6 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb52cf = 1;
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    return uVar6;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return uVar6;
  }
  if (*(float *)(param_1 + 100) <= _UNK_033f8140) {
    return uVar6;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  uVar8 = 0x3eb5000;
  if ((param_2 == 0) || (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0), lVar7 == 0)) {
LAB_015c0060:
    unaff_x21 = uVar8;
    unaff_x20 = param_2;
    unaff_x30 = &Atlas_Audio_KartAudio__PickupPickedUp;
    uVar6 = func_0x00f78af4();
    puVar2 = &stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x29 = puVar18;
  }
  else {
    uVar8 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar7,uRam0000000003d578c0);
    lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0);
    if (lVar7 == 0) goto LAB_015c0060;
    param_2 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar7,uRam0000000003d577c8);
    uVar13 = 0x3d23990;
    uVar15 = 0x3d23990;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar8,0);
    puVar2 = (undefined1 *)register0x00000008;
    uVar6 = param_1;
    if (iVar4 == 0) {
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_2,0);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      unaff_x22 = uVar13;
      if (param_2 != 0) {
        iVar4 = *(int *)(param_2 + 0x60);
        if (iVar4 == 0) {
          if (*(char *)(param_2 + 0x68) != '\0') {
            return uVar6;
          }
          unaff_x22 = uVar15;
          if (*(long *)(param_1 + 0x90) != 0) {
            if (*(char *)(*(long *)(param_1 + 0x90) + 0xce) == '\0') {
              return uVar6;
            }
            lVar7 = *(long *)(param_1 + 0x148);
            if (lVar7 != 0) {
              puVar19 = &UNK_015bff78;
              goto code_r0x01ec8898;
            }
          }
        }
        else if (iVar4 == 2) {
          if (*(char *)(param_2 + 0x50) != '\0') {
            return uVar6;
          }
          unaff_x22 = uVar15;
          if (*(long *)(param_1 + 0x90) != 0) {
            if (*(char *)(*(long *)(param_1 + 0x90) + 0xd2) == '\0') {
              return uVar6;
            }
            uVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_2,0);
            if ((bRam0000000003eb4876 & 1) == 0) {
              func_0x00f78a20(0x3d1ff30,uVar6,0);
              func_0x00f78a20(0x3d65d08);
              bRam0000000003eb4876 = 1;
            }
            uVar9 = *(ulong *)(param_2 + 0xb0);
            if (uVar9 == 0) {
              uVar10 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*(undefined8 *)(param_2 + 0x48),/*STR('')*/ uRam0000000003d65d08,0);
              if ((uVar10 & 1) == 0) {
                uVar9 = *(ulong *)(param_2 + 0xb0);
              }
              else {
                uVar8 = *(undefined8 *)(param_2 + 0x48);
                uVar9 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
                uVar10 = /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar9,uVar8,0,0,0);
                *(ulong *)(param_2 + 0xb0) = uVar9;
              }
              if (uVar9 == 0) {
                return uVar10;
              }
            }
            goto code_r0x01638d28;
          }
        }
        else {
          if (iVar4 != 1) {
            return uVar6;
          }
          if (*(long *)(param_1 + 0x90) != 0) {
            if (*(char *)(*(long *)(param_1 + 0x90) + 0xd1) == '\0') {
              return uVar6;
            }
            fVar20 = *(float *)(param_1 + 0x74) * 100.0;
            *(float *)(param_2 + 0xc0) = fVar20 * _UNK_033f82c0 + _UNK_033f82c4;
            *(float *)(param_2 + 0xc4) = fVar20;
            return param_2;
          }
        }
      }
      goto LAB_015c0060;
    }
  }
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(ulong *)(puVar2 + -0x20) = unaff_x20;
  *(ulong *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  uVar9 = uVar6;
  if ((bRam0000000003eb52d1 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    uVar9 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52d1 = 1;
  }
  if (*(char *)(uVar6 + 0x38) != '\0') {
    return uVar9;
  }
  lVar7 = *(long *)(uVar6 + 0x150);
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((lVar7 != 0) &&
     (uVar9 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar7,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x230),
                              uRam0000000003d2fb00), uVar9 != 0)) {
    uVar6 = *(ulong *)(uVar6 + 0xb8);
    unaff_x29 = *(undefined1 **)(puVar2 + -0x10);
    unaff_x30 = *(undefined **)(puVar2 + -8);
    unaff_x19 = *(ulong *)(puVar2 + -0x18);
    register0x00000008 = (BADSPACEBASE *)puVar2;
    unaff_x20 = *(ulong *)(puVar2 + -0x20);
code_r0x01638d28:
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar9,uVar6,0);
    return uVar9;
  }
  auVar21 = func_0x00f78af4();
  param_2 = auVar21._8_8_;
  param_1 = auVar21._0_8_;
  puVar3 = puVar2 + -0x60;
  *(undefined8 *)(puVar2 + -0x60) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x58) = 0x3d1ff28;
  *(long *)(puVar2 + -0x50) = lVar7;
  *(ulong *)(puVar2 + -0x48) = uVar6;
  *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x38) = &Atlas_Audio_KartAudio__OnTriggerExit;
  puVar18 = puVar2 + -0x40;
  uVar8 = 0x3eb5000;
  uVar6 = param_1;
  if ((bRam0000000003eb52d0 & 1) == 0) {
    func_0x00f78a20(0x3d2e050);
    func_0x00f78a20(0x3d2e058);
    func_0x00f78a20(0x3d2e060);
    func_0x00f78a20(0x3d577c8);
    uVar6 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb52d0 = 1;
  }
  if ((*(char *)(param_1 + 0x50) == '\0') || (*(char *)(param_1 + 0x38) != '\0')) {
    return uVar6;
  }
  if ((param_2 != 0) && (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0), lVar7 != 0)) {
    param_2 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar7,uRam0000000003d577c8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_2,0);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if (param_2 != 0) {
      if (*(int *)(param_2 + 0x60) != 0) {
        return uVar6;
      }
      if (*(long *)(param_1 + 0x90) != 0) {
        if (*(char *)(*(long *)(param_1 + 0x90) + 0xce) == '\0') {
          return uVar6;
        }
        lVar7 = *(long *)(param_1 + 0x148);
        if (lVar7 != 0) {
          puVar19 = &UNK_015c023c;
          uVar13 = unaff_x22;
code_r0x01ec8898:
          *(undefined1 **)(puVar3 + -0x10) = puVar18;
          *(undefined **)(puVar3 + -8) = puVar19;
          if (lVar7 != 0) {
            uVar5 = (*(code *)**(undefined8 **)
                                (*(long *)(*(long *)(uRam0000000003d2e050 + 0x18) + 0xc0) + 0x40))()
            ;
            return (ulong)(~uVar5 >> 0x1f);
          }
          uVar6 = uRam0000000003d2e050;
          auVar21 = func_0x00f78af4(0,param_2);
          lVar7 = auVar21._0_8_;
          *(undefined8 *)(puVar3 + -0x50) = unaff_x24;
          *(undefined8 *)(puVar3 + -0x48) = unaff_x23;
          *(undefined8 *)(puVar3 + -0x40) = uVar13;
          *(undefined8 *)(puVar3 + -0x38) = uVar8;
          *(ulong *)(puVar3 + -0x30) = param_2;
          *(ulong *)(puVar3 + -0x28) = param_1;
          *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x18) =
               &System_Collections_Generic_Dictionary_object__EventInstance___ContainsValue;
          plVar11 = (long *)(*(code *)**(undefined8 **)
                                        (*(long *)(*(long *)(uVar6 + 0x18) + 0xc0) + 0x68))();
          iVar4 = *(int *)(lVar7 + 0x20);
          if (0 < iVar4) {
            lVar16 = 0;
            uVar9 = 0;
            do {
              lVar14 = *(long *)(lVar7 + 0x18);
              if (lVar14 == 0) {
code_r0x01ec898c:
                func_0x00f78af4();
code_r0x01ec8990:
                uVar8 = func_0x00f78b24();
                auVar22 = func_0x00f78ac0(uVar8,0);
                lVar14 = auVar22._8_8_;
                lVar12 = auVar22._0_8_;
                *(undefined8 *)(puVar3 + -0xa0) = unaff_x26;
                *(undefined8 *)(puVar3 + -0x98) = unaff_x25;
                *(undefined8 *)(puVar3 + -0x90) = unaff_x24;
                *(ulong *)(puVar3 + -0x88) = uVar9;
                *(long *)(puVar3 + -0x80) = lVar16;
                *(long **)(puVar3 + -0x78) = plVar11;
                *(undefined1 (*) [16])(puVar3 + -0x70) = auVar21;
                *(undefined1 **)(puVar3 + -0x60) = puVar3 + -0x20;
                *(undefined **)(puVar3 + -0x58) =
                     &System_Collections_Generic_Dictionary_object__EventInstance___CopyTo;
                if (lVar14 == 0) goto code_r0x01ec8b28;
                uVar5 = (uint)uVar6;
                if (((int)uVar5 < 0) || (*(int *)(lVar14 + 0x18) < (int)uVar5))
                goto code_r0x01ec8aa8;
                if (lVar12 == 0) goto code_r0x01ec8b24;
                uVar9 = (*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x90))(lVar12);
                if ((int)(*(int *)(lVar14 + 0x18) - uVar5) < (int)uVar9) {
                  func_0x00f78a24(0x3d1fce8);
                  uVar8 = func_0x00f78aec();
                  uVar13 = func_0x00f78a24(0x3d6bc10);
                  /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar13,0);
                  goto code_r0x01ec8b8c;
                }
                uVar1 = *(uint *)(lVar12 + 0x20);
                if ((int)uVar1 < 1) {
                  return uVar9;
                }
                lVar7 = *(long *)(lVar12 + 0x18);
                if (lVar7 == 0) goto code_r0x01ec8b24;
                uVar10 = 0;
                puVar17 = (undefined8 *)(lVar7 + 0x30);
                goto code_r0x01ec8a24;
              }
              if (*(uint *)(lVar14 + 0x18) <= uVar9) goto code_r0x01ec8990;
              if (-1 < *(int *)(lVar14 + lVar16 + 0x20)) {
                if (plVar11 == (long *)0x0) goto code_r0x01ec898c;
                param_4 = *(long *)(*plVar11 + 0x1c0);
                uVar6 = auVar21._8_8_;
                uVar10 = (**(code **)(*plVar11 + 0x1b8))
                                   (plVar11,*(undefined8 *)(lVar14 + lVar16 + 0x30));
                if ((uVar10 & 1) != 0) {
                  return 1;
                }
                iVar4 = *(int *)(lVar7 + 0x20);
              }
              uVar9 = uVar9 + 1;
              lVar16 = lVar16 + 0x18;
            } while ((long)uVar9 < (long)iVar4);
          }
          return 0;
        }
      }
    }
  }
  uVar10 = func_0x00f78af4();
  *(undefined8 *)(puVar2 + -0x90) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x88) = 0x3eb5000;
  *(ulong *)(puVar2 + -0x80) = param_2;
  *(ulong *)(puVar2 + -0x78) = param_1;
  *(undefined1 **)(puVar2 + -0x70) = puVar18;
  *(undefined **)(puVar2 + -0x68) = &Atlas_Audio_KartAudio__PlayVFXAudio;
  uVar6 = uVar10;
  if ((bRam0000000003eb52d4 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    uVar6 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52d4 = 1;
  }
  if (*(char *)(uVar10 + 0x38) == '\0') {
    lVar7 = *(long *)(uVar10 + 0x150);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 == 0) {
      auVar21 = func_0x00f78af4();
      uVar6 = auVar21._8_8_;
      unaff_x19 = auVar21._0_8_;
      register0x00000008 = (BADSPACEBASE *)(puVar2 + -0xd0);
      *(undefined8 *)(puVar2 + -0xd0) = unaff_x24;
      *(undefined8 *)(puVar2 + -200) = unaff_x23;
      *(undefined8 *)(puVar2 + -0xc0) = unaff_x22;
      *(undefined8 *)(puVar2 + -0xb8) = 0x3d1ff28;
      *(undefined8 *)(puVar2 + -0xb0) = 0;
      *(ulong *)(puVar2 + -0xa8) = uVar10;
      *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
      *(undefined **)(puVar2 + -0x98) = &Atlas_Audio_KartAudio__ExitPortal;
      unaff_x29 = puVar2 + -0xa0;
      if ((bRam0000000003eb52d6 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d2fb00);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb52d6 = 1;
      }
      lVar7 = *(long *)(unaff_x19 + 0x150);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar7 != 0) {
        uVar9 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar7,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x278),
                                uRam0000000003d2fb00);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
        if ((uVar10 & 1) == 0) {
          uVar6 = *(ulong *)(unaff_x19 + 0xb8);
        }
        if (uVar9 != 0) {
          unaff_x30 = &UNK_015c044c;
          unaff_x20 = uVar6;
          goto code_r0x01638d28;
        }
      }
      uVar6 = func_0x00f78af4();
      return uVar6;
    }
    uVar9 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar7,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x250),
                            uRam0000000003d2fb00);
    uVar6 = 0;
    if (uVar9 != 0) {
      uVar6 = *(ulong *)(uVar10 + 0xb8);
      unaff_x29 = *(undefined1 **)(puVar2 + -0x70);
      unaff_x30 = *(undefined **)(puVar2 + -0x68);
      unaff_x19 = *(ulong *)(puVar2 + -0x78);
      register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x60);
      unaff_x20 = *(ulong *)(puVar2 + -0x80);
      goto code_r0x01638d28;
    }
  }
  return uVar6;
code_r0x01ec8a24:
  uVar5 = (uint)uVar6;
  if (*(uint *)(lVar7 + 0x18) <= uVar10) {
code_r0x01ec8a9c:
    uVar8 = func_0x00f78b24();
    func_0x00f78ac0(uVar8,0);
code_r0x01ec8aa8:
    *(uint *)(puVar3 + -0xb0) = uVar5;
    uVar8 = func_0x00f78a24(0x3d22910);
    uVar8 = func_0x00f78ae0(uVar8,puVar3 + -0xb0);
    func_0x00f78a24(0x3d1fcf8);
    lVar14 = func_0x00f78aec();
    uVar13 = func_0x00f78a24(0x3d79a60);
    uVar15 = func_0x00f78a24(0x3d6de28);
    /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(lVar14,uVar13,uVar8,uVar15,0);
    uVar8 = func_0x00f78a24(0x3d2f4b0);
    func_0x00f78ac0(lVar14,uVar8);
code_r0x01ec8b24:
    func_0x00f78af4();
    lVar7 = lVar14;
code_r0x01ec8b28:
    func_0x00f78a24(0x3d1fcf0);
    uVar8 = func_0x00f78aec();
    uVar13 = func_0x00f78a24(0x3d77d18);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar8,uVar13,0);
    lVar14 = lVar7;
code_r0x01ec8b8c:
    uVar13 = func_0x00f78a24(0x3d2f4b0);
    auVar21 = func_0x00f78ac0(uVar8,uVar13);
    *(long *)(puVar3 + -0xd0) = lVar14;
    *(undefined8 *)(puVar3 + -200) = uVar8;
    *(undefined1 **)(puVar3 + -0xc0) = puVar3 + -0x60;
    *(undefined **)(puVar3 + -0xb8) =
         &System_Collections_Generic_Dictionary_object__EventInstance___GetEnumerator;
    *(undefined8 *)(puVar3 + -0xe0) = 0;
    *(undefined8 *)(puVar3 + -0xf8) = 0;
    *(undefined8 *)(puVar3 + -0x100) = 0;
    *(undefined8 *)(puVar3 + -0xe8) = 0;
    *(undefined8 *)(puVar3 + -0xf0) = 0;
    uVar6 = /*System.Collections.Generic.Dictionary.Enumerator<object, EventInstance>$$.ctor*/ func_0x01fd20e8(puVar3 + -0x100,auVar21._0_8_,2,
                            *(undefined8 *)
                             (*(long *)(*(long *)(auVar21._8_8_ + 0x18) + 0xc0) + 0xb0));
    uVar8 = *(undefined8 *)(puVar3 + -0x100);
    uVar15 = *(undefined8 *)(puVar3 + -0xe8);
    uVar13 = *(undefined8 *)(puVar3 + -0xf0);
    extraout_x8[1] = *(undefined8 *)(puVar3 + -0xf8);
    *extraout_x8 = uVar8;
    extraout_x8[3] = uVar15;
    extraout_x8[2] = uVar13;
    extraout_x8[4] = *(undefined8 *)(puVar3 + -0xe0);
    return uVar6;
  }
  if (-1 < *(int *)(puVar17 + -2)) {
    uVar8 = puVar17[-1];
    uVar13 = *puVar17;
    *(undefined8 *)(puVar3 + -0xb0) = 0;
    *(undefined8 *)(puVar3 + -0xa8) = 0;
    uVar9 = /*System.Collections.Generic.KeyValuePair<object, EventInstance>$$.ctor*/ func_0x023181f4(puVar3 + -0xb0,uVar8,uVar13,
                            *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0xa0));
    if (*(uint *)(lVar14 + 0x18) <= uVar5) goto code_r0x01ec8a9c;
    lVar16 = lVar14 + (long)(int)uVar5 * 0x10;
    uVar6 = (ulong)(uVar5 + 1);
    uVar8 = *(undefined8 *)(puVar3 + -0xb0);
    *(undefined8 *)(lVar16 + 0x28) = *(undefined8 *)(puVar3 + -0xa8);
    *(undefined8 *)(lVar16 + 0x20) = uVar8;
  }
  uVar10 = uVar10 + 1;
  puVar17 = puVar17 + 3;
  if (uVar1 == uVar10) {
    return uVar9;
  }
  goto code_r0x01ec8a24;
}



// ============================================================
// RVA: 0x15c0064 | Atlas.Audio.KartAudio.PickupPickedUp
// ============================================================

/* WARNING: Possible PIC construction at 0x015c0448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015c044c) */
/* WARNING: Removing unreachable block (ram,0x015c0484) */
/* WARNING: Removing unreachable block (ram,0x015c0488) */
/* WARNING: Removing unreachable block (ram,0x015c0490) */
/* WARNING: Removing unreachable block (ram,0x015c0498) */
/* WARNING: Removing unreachable block (ram,0x015c0460) */
/* WARNING: Removing unreachable block (ram,0x015c0464) */
/* WARNING: Removing unreachable block (ram,0x015c046c) */
/* WARNING: Removing unreachable block (ram,0x015c0474) */
/* WARNING: Removing unreachable block (ram,0x015c04a4) */
/* WARNING: Removing unreachable block (ram,0x015c04b8) */
/* WARNING: Removing unreachable block (ram,0x015c0480) */

ulong Atlas_Audio_KartAudio__PickupPickedUp
                (ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  ulong unaff_x19;
  long unaff_x20;
  long lVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar19 [16];
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  uVar7 = param_1;
  if ((bRam0000000003eb52d1 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    uVar7 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52d1 = 1;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return uVar7;
  }
  lVar15 = *(long *)(param_1 + 0x150);
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((lVar15 != 0) &&
     (uVar7 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar15,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x230)
                              ,uRam0000000003d2fb00), uVar7 != 0)) {
    lVar15 = *(long *)(param_1 + 0xb8);
    puVar4 = (undefined1 *)register0x00000008;
    goto code_r0x01638d28;
  }
  auVar19 = func_0x00f78af4();
  unaff_x20 = auVar19._8_8_;
  unaff_x19 = auVar19._0_8_;
  puStack_38 = &Atlas_Audio_KartAudio__OnTriggerExit;
  unaff_x29 = &puStack_40;
  uVar7 = unaff_x19;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb52d0 & 1) == 0) {
    func_0x00f78a20(0x3d2e050);
    func_0x00f78a20(0x3d2e058);
    func_0x00f78a20(0x3d2e060);
    func_0x00f78a20(0x3d577c8);
    uVar7 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb52d0 = 1;
  }
  if ((*(char *)(unaff_x19 + 0x50) == '\0') || (*(char *)(unaff_x19 + 0x38) != '\0')) {
    return uVar7;
  }
  if ((unaff_x20 != 0) && (lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x20,0), lVar15 != 0)) {
    unaff_x20 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar15,uRam0000000003d577c8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(unaff_x20,0);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (unaff_x20 != 0) {
      if (*(int *)(unaff_x20 + 0x60) != 0) {
        return uVar7;
      }
      if (*(long *)(unaff_x19 + 0x90) != 0) {
        if (*(char *)(*(long *)(unaff_x19 + 0x90) + 0xce) == '\0') {
          return uVar7;
        }
        if (*(long *)(unaff_x19 + 0x148) != 0) {
          uVar7 = /*System.Collections.Generic.Dictionary<object, EventInstance>$$ContainsKey*/ func_0x01ec8898(*(long *)(unaff_x19 + 0x148),unaff_x20,uRam0000000003d2e050);
          if ((int)uVar7 == 0) {
            return uVar7;
          }
          if (*(long *)(unaff_x19 + 0x148) != 0) {
            lVar15 = *(long *)(unaff_x19 + 0x90);
            uVar8 = /*System.Collections.Generic.Dictionary<object, EventInstance>$$get_Item*/ func_0x01ec854c(*(long *)(unaff_x19 + 0x148),unaff_x20,uRam0000000003d2e060);
            if (lVar15 != 0) {
              Atlas_Audio_AtlasAudioManager__StopReverb(lVar15,uVar8,0);
              lVar15 = *(long *)(unaff_x19 + 0x148);
              if (lVar15 != 0) {
                puStack_98 = (undefined *)lRam0000000003d2e058;
                if (unaff_x20 != 0) {
                  if (*(long *)(lVar15 + 0x10) == 0) {
                    return 0;
                  }
                  plVar16 = *(long **)(lVar15 + 0x30);
                  if (plVar16 == (long *)0x0) {
code_r0x01eca1e8:
                    func_0x00f78af4();
                  }
                  else {
                    lVar17 = *(long *)(*(long *)(*(long *)(lRam0000000003d2e058 + 0x18) + 0xc0) +
                                      0xe0);
                    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
                      func_0x00fac028(lVar17);
                    }
                    lVar12 = *plVar16;
                    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12a);
                    if (uVar7 != 0) {
                      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == lVar17) {
                          puVar10 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                          goto code_r0x01ec9fbc;
                        }
                        piVar14 = piVar14 + 4;
                        uVar7 = uVar7 - 1;
                      } while (uVar7 != 0);
                    }
                    puVar10 = (undefined8 *)func_0x00fac1f0(plVar16,lVar17,1);
code_r0x01ec9fbc:
                    uVar5 = (*(code *)*puVar10)(plVar16,unaff_x20,puVar10[1]);
                    lVar17 = *(long *)(lVar15 + 0x10);
                    if (lVar17 == 0) goto code_r0x01eca1e8;
                    uVar5 = uVar5 & 0x7fffffff;
                    uVar1 = *(uint *)(lVar17 + 0x18);
                    iVar6 = 0;
                    if (uVar1 != 0) {
                      iVar6 = (int)uVar5 / (int)uVar1;
                    }
                    uVar3 = uVar5 - iVar6 * uVar1;
                    if (uVar3 < uVar1) {
                      uVar1 = *(uint *)(lVar17 + (long)(ulong)uVar3 * 4 + 0x20);
                      if ((int)uVar1 < 0) {
                        return 0;
                      }
                      lVar17 = *(long *)(lVar15 + 0x18);
                      uVar18 = 0xffffffff;
                      puStack_a0 = (undefined1 *)(ulong)uVar3;
                      while (lVar17 != 0) {
                        if (*(uint *)(lVar17 + 0x18) <= uVar1) goto code_r0x01eca1ec;
                        uVar7 = (ulong)uVar1;
                        if (*(uint *)(lVar17 + uVar7 * 0x18 + 0x20) == uVar5) {
                          plVar16 = *(long **)(lVar15 + 0x30);
                          if (plVar16 == (long *)0x0) break;
                          uVar8 = *(undefined8 *)(lVar17 + uVar7 * 0x18 + 0x28);
                          lVar17 = *(long *)(*(long *)(*(long *)((long)puStack_98 + 0x18) + 0xc0) +
                                            0xe0);
                          if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
                            func_0x00fac028(lVar17);
                          }
                          lVar12 = *plVar16;
                          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                          if (uVar13 != 0) {
                            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar14 + -2) == lVar17) {
                                puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                                goto code_r0x01eca0ac;
                              }
                              piVar14 = piVar14 + 4;
                              uVar13 = uVar13 - 1;
                            } while (uVar13 != 0);
                          }
                          puVar10 = (undefined8 *)func_0x00fac1f0(plVar16,lVar17,0);
code_r0x01eca0ac:
                          param_4 = puVar10[1];
                          iVar6 = (*(code *)*puVar10)(plVar16,uVar8,unaff_x20);
                          if (iVar6 != 0) {
                            if ((int)uVar18 < 0) {
                              lVar17 = *(long *)(lVar15 + 0x18);
                              if (lVar17 == 0) break;
                              uVar5 = (uint)*(undefined8 *)(lVar17 + 0x18);
                              if (uVar5 <= uVar1) goto code_r0x01eca1ec;
                              lVar12 = *(long *)(lVar15 + 0x10);
                              if (lVar12 == 0) break;
                              if (*(uint *)(lVar12 + 0x18) <= (uint)puStack_a0)
                              goto code_r0x01eca1ec;
                              *(undefined4 *)(lVar12 + (long)puStack_a0 * 4 + 0x20) =
                                   *(undefined4 *)(lVar17 + uVar7 * 0x18 + 0x24);
                            }
                            else {
                              lVar17 = *(long *)(lVar15 + 0x18);
                              if (lVar17 == 0) break;
                              uVar5 = (uint)*(undefined8 *)(lVar17 + 0x18);
                              if ((uVar5 <= uVar1) || (uVar5 <= uVar18)) goto code_r0x01eca1ec;
                              *(undefined4 *)(lVar17 + 0x20 + (ulong)uVar18 * 0x18 + 4) =
                                   *(undefined4 *)(lVar17 + 0x20 + uVar7 * 0x18 + 4);
                            }
                            if (uVar5 <= uVar1) goto code_r0x01eca1ec;
                            lVar17 = lVar17 + uVar7 * 0x18;
                            uVar2 = *(undefined4 *)(lVar15 + 0x28);
                            *(undefined4 *)(lVar17 + 0x20) = 0xffffffff;
                            *(undefined4 *)(lVar17 + 0x24) = uVar2;
                            *(undefined8 *)(lVar17 + 0x28) = 0;
                            lVar17 = *(long *)(lVar15 + 0x18);
                            if (lVar17 == 0) break;
                            if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                              *(undefined8 *)(lVar17 + uVar7 * 0x18 + 0x30) = 0;
                              *(uint *)(lVar15 + 0x28) = uVar1;
                              *(int *)(lVar15 + 0x2c) = *(int *)(lVar15 + 0x2c) + 1;
                              *(int *)(lVar15 + 0x24) = *(int *)(lVar15 + 0x24) + 1;
                              return 1;
                            }
                            goto code_r0x01eca1ec;
                          }
                          lVar17 = *(long *)(lVar15 + 0x18);
                          if (lVar17 == 0) break;
                        }
                        if (*(uint *)(lVar17 + 0x18) <= uVar1) goto code_r0x01eca1ec;
                        uVar3 = *(uint *)(lVar17 + uVar7 * 0x18 + 0x24);
                        uVar18 = uVar1;
                        uVar1 = uVar3;
                        if ((int)uVar3 < 0) {
                          return 0;
                        }
                      }
                      goto code_r0x01eca1e8;
                    }
                  }
code_r0x01eca1ec:
                  uVar8 = func_0x00f78b24();
                  func_0x00f78ac0(uVar8,0);
                }
                func_0x00f78a24(0x3d1fcf0);
                uVar8 = func_0x00f78aec();
                uVar11 = func_0x00f78a24(0x3d79fc0);
                puVar10 = (undefined8 *)0x0;
                /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar8,uVar11);
                uVar11 = func_0x00f78a24(0x3d2f4d8);
                lVar15 = func_0x00f78ac0(uVar8,uVar11);
                if (lVar15 != 0) {
                  uVar5 = (*(code *)**(undefined8 **)
                                      (*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x40))();
                  if ((int)uVar5 < 0) {
                    *puVar10 = 0;
code_r0x01eca29c:
                    return (ulong)(~uVar5 >> 0x1f);
                  }
                  lVar15 = *(long *)(lVar15 + 0x18);
                  if (lVar15 != 0) {
                    if (uVar5 < *(uint *)(lVar15 + 0x18)) {
                      *puVar10 = *(undefined8 *)(lVar15 + (ulong)uVar5 * 0x18 + 0x30);
                      goto code_r0x01eca29c;
                    }
                    goto code_r0x01eca2b4;
                  }
                }
                func_0x00f78af4();
code_r0x01eca2b4:
                uVar8 = func_0x00f78b24();
                lVar15 = func_0x00f78ac0(uVar8,0);
                if (lVar15 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01eca2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar7 = (*(code *)**(undefined8 **)
                                      (*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x48))();
                  return uVar7;
                }
                func_0x00f78af4();
                return 0;
              }
            }
          }
        }
      }
    }
  }
  uVar9 = func_0x00f78af4();
  uVar13 = uVar9;
  if ((bRam0000000003eb52d4 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    uVar13 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52d4 = 1;
  }
  if (*(char *)(uVar9 + 0x38) == '\0') {
    lVar15 = *(long *)(uVar9 + 0x150);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar15 == 0) {
      auVar19 = func_0x00f78af4();
      lVar15 = auVar19._8_8_;
      unaff_x19 = auVar19._0_8_;
      puVar4 = &stack0xffffffffffffff30;
      puStack_98 = &Atlas_Audio_KartAudio__ExitPortal;
      unaff_x29 = &puStack_a0;
      puStack_a0 = &stack0xffffffffffffff90;
      if ((bRam0000000003eb52d6 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d2fb00);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb52d6 = 1;
      }
      lVar17 = *(long *)(unaff_x19 + 0x150);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar17 != 0) {
        uVar7 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar17,*(undefined8 *)
                                        (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x278),
                                uRam0000000003d2fb00);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar13 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar15,0,0);
        if ((uVar13 & 1) == 0) {
          lVar15 = *(long *)(unaff_x19 + 0xb8);
        }
        if (uVar7 != 0) {
          unaff_x30 = &UNK_015c044c;
          unaff_x20 = lVar15;
          goto code_r0x01638d28;
        }
      }
      uVar7 = func_0x00f78af4();
      return uVar7;
    }
    uVar7 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar15,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x250),
                            uRam0000000003d2fb00);
    uVar13 = 0;
    if (uVar7 != 0) {
      lVar15 = *(long *)(uVar9 + 0xb8);
      unaff_x30 = &Atlas_Audio_KartAudio__PlayVFXAudio;
      puVar4 = &stack0xffffffffffffffa0;
code_r0x01638d28:
      *(long *)(puVar4 + -0x20) = unaff_x20;
      *(ulong *)(puVar4 + -0x18) = unaff_x19;
      *(undefined1 ***)(puVar4 + -0x10) = unaff_x29;
      *(undefined **)(puVar4 + -8) = unaff_x30;
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar7,lVar15,0);
      return uVar7;
    }
  }
  return uVar13;
}



// ============================================================
// RVA: 0x15c0124 | Atlas.Audio.KartAudio.OnTriggerExit
// ============================================================

/* WARNING: Possible PIC construction at 0x015c0448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015c044c) */
/* WARNING: Removing unreachable block (ram,0x015c0484) */
/* WARNING: Removing unreachable block (ram,0x015c0488) */
/* WARNING: Removing unreachable block (ram,0x015c0490) */
/* WARNING: Removing unreachable block (ram,0x015c0498) */
/* WARNING: Removing unreachable block (ram,0x015c0460) */
/* WARNING: Removing unreachable block (ram,0x015c0464) */
/* WARNING: Removing unreachable block (ram,0x015c046c) */
/* WARNING: Removing unreachable block (ram,0x015c0474) */
/* WARNING: Removing unreachable block (ram,0x015c04a4) */
/* WARNING: Removing unreachable block (ram,0x015c04b8) */
/* WARNING: Removing unreachable block (ram,0x015c0480) */

ulong Atlas_Audio_KartAudio__OnTriggerExit
                (ulong param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  undefined1 **ppuVar19;
  undefined *puVar20;
  undefined1 auVar21 [16];
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  ppuVar19 = (undefined1 **)&stack0xfffffffffffffff0;
  uVar7 = param_1;
  if ((bRam0000000003eb52d0 & 1) == 0) {
    func_0x00f78a20(0x3d2e050);
    func_0x00f78a20(0x3d2e058);
    func_0x00f78a20(0x3d2e060);
    func_0x00f78a20(0x3d577c8);
    uVar7 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb52d0 = 1;
  }
  if ((*(char *)(param_1 + 0x50) == '\0') || (*(char *)(param_1 + 0x38) != '\0')) {
    return uVar7;
  }
  if ((param_2 != 0) && (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_2,0), lVar8 != 0)) {
    param_2 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar8,uRam0000000003d577c8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_2,0);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    if (param_2 != 0) {
      if (*(int *)(param_2 + 0x60) != 0) {
        return uVar7;
      }
      if (*(long *)(param_1 + 0x90) != 0) {
        if (*(char *)(*(long *)(param_1 + 0x90) + 0xce) == '\0') {
          return uVar7;
        }
        if (*(long *)(param_1 + 0x148) != 0) {
          uVar7 = /*System.Collections.Generic.Dictionary<object, EventInstance>$$ContainsKey*/ func_0x01ec8898(*(long *)(param_1 + 0x148),param_2,uRam0000000003d2e050);
          if ((int)uVar7 == 0) {
            return uVar7;
          }
          if (*(long *)(param_1 + 0x148) != 0) {
            lVar8 = *(long *)(param_1 + 0x90);
            uVar9 = /*System.Collections.Generic.Dictionary<object, EventInstance>$$get_Item*/ func_0x01ec854c(*(long *)(param_1 + 0x148),param_2,uRam0000000003d2e060);
            if (lVar8 != 0) {
              Atlas_Audio_AtlasAudioManager__StopReverb(lVar8,uVar9,0);
              lVar8 = *(long *)(param_1 + 0x148);
              if (lVar8 != 0) {
                puStack_68 = (undefined *)lRam0000000003d2e058;
                if (param_2 != 0) {
                  if (*(long *)(lVar8 + 0x10) == 0) {
                    return 0;
                  }
                  plVar16 = *(long **)(lVar8 + 0x30);
                  if (plVar16 == (long *)0x0) {
code_r0x01eca1e8:
                    func_0x00f78af4();
                  }
                  else {
                    lVar17 = *(long *)(*(long *)(*(long *)(lRam0000000003d2e058 + 0x18) + 0xc0) +
                                      0xe0);
                    if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
                      func_0x00fac028(lVar17);
                    }
                    lVar13 = *plVar16;
                    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12a);
                    if (uVar7 != 0) {
                      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar15 + -2) == lVar17) {
                          puVar11 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                          goto code_r0x01ec9fbc;
                        }
                        piVar15 = piVar15 + 4;
                        uVar7 = uVar7 - 1;
                      } while (uVar7 != 0);
                    }
                    puVar11 = (undefined8 *)func_0x00fac1f0(plVar16,lVar17,1);
code_r0x01ec9fbc:
                    uVar5 = (*(code *)*puVar11)(plVar16,param_2,puVar11[1]);
                    lVar17 = *(long *)(lVar8 + 0x10);
                    if (lVar17 == 0) goto code_r0x01eca1e8;
                    uVar5 = uVar5 & 0x7fffffff;
                    uVar1 = *(uint *)(lVar17 + 0x18);
                    iVar6 = 0;
                    if (uVar1 != 0) {
                      iVar6 = (int)uVar5 / (int)uVar1;
                    }
                    uVar3 = uVar5 - iVar6 * uVar1;
                    if (uVar3 < uVar1) {
                      uVar1 = *(uint *)(lVar17 + (long)(ulong)uVar3 * 4 + 0x20);
                      if ((int)uVar1 < 0) {
                        return 0;
                      }
                      lVar17 = *(long *)(lVar8 + 0x18);
                      uVar18 = 0xffffffff;
                      puStack_70 = (undefined1 *)(ulong)uVar3;
                      while (lVar17 != 0) {
                        if (*(uint *)(lVar17 + 0x18) <= uVar1) goto code_r0x01eca1ec;
                        uVar7 = (ulong)uVar1;
                        if (*(uint *)(lVar17 + uVar7 * 0x18 + 0x20) == uVar5) {
                          plVar16 = *(long **)(lVar8 + 0x30);
                          if (plVar16 == (long *)0x0) break;
                          uVar9 = *(undefined8 *)(lVar17 + uVar7 * 0x18 + 0x28);
                          lVar17 = *(long *)(*(long *)(*(long *)((long)puStack_68 + 0x18) + 0xc0) +
                                            0xe0);
                          if ((*(ushort *)(lVar17 + 0x132) & 1) == 0) {
                            func_0x00fac028(lVar17);
                          }
                          lVar13 = *plVar16;
                          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
                          if (uVar14 != 0) {
                            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar15 + -2) == lVar17) {
                                puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                                goto code_r0x01eca0ac;
                              }
                              piVar15 = piVar15 + 4;
                              uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                          }
                          puVar11 = (undefined8 *)func_0x00fac1f0(plVar16,lVar17,0);
code_r0x01eca0ac:
                          param_4 = puVar11[1];
                          iVar6 = (*(code *)*puVar11)(plVar16,uVar9,param_2);
                          if (iVar6 != 0) {
                            if ((int)uVar18 < 0) {
                              lVar17 = *(long *)(lVar8 + 0x18);
                              if (lVar17 == 0) break;
                              uVar5 = (uint)*(undefined8 *)(lVar17 + 0x18);
                              if (uVar5 <= uVar1) goto code_r0x01eca1ec;
                              lVar13 = *(long *)(lVar8 + 0x10);
                              if (lVar13 == 0) break;
                              if (*(uint *)(lVar13 + 0x18) <= (uint)puStack_70)
                              goto code_r0x01eca1ec;
                              *(undefined4 *)(lVar13 + (long)puStack_70 * 4 + 0x20) =
                                   *(undefined4 *)(lVar17 + uVar7 * 0x18 + 0x24);
                            }
                            else {
                              lVar17 = *(long *)(lVar8 + 0x18);
                              if (lVar17 == 0) break;
                              uVar5 = (uint)*(undefined8 *)(lVar17 + 0x18);
                              if ((uVar5 <= uVar1) || (uVar5 <= uVar18)) goto code_r0x01eca1ec;
                              *(undefined4 *)(lVar17 + 0x20 + (ulong)uVar18 * 0x18 + 4) =
                                   *(undefined4 *)(lVar17 + 0x20 + uVar7 * 0x18 + 4);
                            }
                            if (uVar5 <= uVar1) goto code_r0x01eca1ec;
                            lVar17 = lVar17 + uVar7 * 0x18;
                            uVar2 = *(undefined4 *)(lVar8 + 0x28);
                            *(undefined4 *)(lVar17 + 0x20) = 0xffffffff;
                            *(undefined4 *)(lVar17 + 0x24) = uVar2;
                            *(undefined8 *)(lVar17 + 0x28) = 0;
                            lVar17 = *(long *)(lVar8 + 0x18);
                            if (lVar17 == 0) break;
                            if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                              *(undefined8 *)(lVar17 + uVar7 * 0x18 + 0x30) = 0;
                              *(uint *)(lVar8 + 0x28) = uVar1;
                              *(int *)(lVar8 + 0x2c) = *(int *)(lVar8 + 0x2c) + 1;
                              *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
                              return 1;
                            }
                            goto code_r0x01eca1ec;
                          }
                          lVar17 = *(long *)(lVar8 + 0x18);
                          if (lVar17 == 0) break;
                        }
                        if (*(uint *)(lVar17 + 0x18) <= uVar1) goto code_r0x01eca1ec;
                        uVar3 = *(uint *)(lVar17 + uVar7 * 0x18 + 0x24);
                        uVar18 = uVar1;
                        uVar1 = uVar3;
                        if ((int)uVar3 < 0) {
                          return 0;
                        }
                      }
                      goto code_r0x01eca1e8;
                    }
                  }
code_r0x01eca1ec:
                  uVar9 = func_0x00f78b24();
                  func_0x00f78ac0(uVar9,0);
                }
                func_0x00f78a24(0x3d1fcf0);
                uVar9 = func_0x00f78aec();
                uVar12 = func_0x00f78a24(0x3d79fc0);
                puVar11 = (undefined8 *)0x0;
                /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar9,uVar12);
                uVar12 = func_0x00f78a24(0x3d2f4d8);
                lVar8 = func_0x00f78ac0(uVar9,uVar12);
                if (lVar8 != 0) {
                  uVar5 = (*(code *)**(undefined8 **)
                                      (*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x40))();
                  if ((int)uVar5 < 0) {
                    *puVar11 = 0;
code_r0x01eca29c:
                    return (ulong)(~uVar5 >> 0x1f);
                  }
                  lVar8 = *(long *)(lVar8 + 0x18);
                  if (lVar8 != 0) {
                    if (uVar5 < *(uint *)(lVar8 + 0x18)) {
                      *puVar11 = *(undefined8 *)(lVar8 + (ulong)uVar5 * 0x18 + 0x30);
                      goto code_r0x01eca29c;
                    }
                    goto code_r0x01eca2b4;
                  }
                }
                func_0x00f78af4();
code_r0x01eca2b4:
                uVar9 = func_0x00f78b24();
                lVar8 = func_0x00f78ac0(uVar9,0);
                if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01eca2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar7 = (*(code *)**(undefined8 **)
                                      (*(long *)(*(long *)(param_4 + 0x18) + 0xc0) + 0x48))();
                  return uVar7;
                }
                func_0x00f78af4();
                return 0;
              }
            }
          }
        }
      }
    }
  }
  uVar14 = func_0x00f78af4();
  uVar7 = uVar14;
  if ((bRam0000000003eb52d4 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    uVar7 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52d4 = 1;
  }
  if (*(char *)(uVar14 + 0x38) == '\0') {
    lVar8 = *(long *)(uVar14 + 0x150);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 == 0) {
      auVar21 = func_0x00f78af4();
      lVar8 = auVar21._8_8_;
      param_1 = auVar21._0_8_;
      puVar4 = &stack0xffffffffffffff60;
      puStack_68 = &Atlas_Audio_KartAudio__ExitPortal;
      ppuVar19 = &puStack_70;
      puStack_70 = &stack0xffffffffffffffc0;
      if ((bRam0000000003eb52d6 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d2fb00);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb52d6 = 1;
      }
      lVar17 = *(long *)(param_1 + 0x150);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar17 != 0) {
        uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar17,*(undefined8 *)
                                         (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x278),
                                 uRam0000000003d2fb00);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
        if ((uVar7 & 1) == 0) {
          lVar8 = *(long *)(param_1 + 0xb8);
        }
        if (uVar10 != 0) {
          puVar20 = &UNK_015c044c;
          param_2 = lVar8;
          goto code_r0x01638d28;
        }
      }
      uVar7 = func_0x00f78af4();
      return uVar7;
    }
    uVar10 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar8,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x250),
                             uRam0000000003d2fb00);
    uVar7 = 0;
    if (uVar10 != 0) {
      lVar8 = *(long *)(uVar14 + 0xb8);
      puVar20 = &Atlas_Audio_KartAudio__PlayVFXAudio;
      puVar4 = &stack0xffffffffffffffd0;
code_r0x01638d28:
      *(long *)(puVar4 + -0x20) = param_2;
      *(ulong *)(puVar4 + -0x18) = param_1;
      *(undefined1 ***)(puVar4 + -0x10) = ppuVar19;
      *(undefined **)(puVar4 + -8) = puVar20;
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar10,lVar8,0);
      return uVar10;
    }
  }
  return uVar7;
}



// ============================================================
// RVA: 0x15c02a0 | Atlas.Audio.KartAudio.PlayVFXAudio
// ============================================================

/* WARNING: Possible PIC construction at 0x015c0448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015c044c) */
/* WARNING: Removing unreachable block (ram,0x015c0484) */
/* WARNING: Removing unreachable block (ram,0x015c0488) */
/* WARNING: Removing unreachable block (ram,0x015c0490) */
/* WARNING: Removing unreachable block (ram,0x015c0498) */
/* WARNING: Removing unreachable block (ram,0x015c0460) */
/* WARNING: Removing unreachable block (ram,0x015c0464) */
/* WARNING: Removing unreachable block (ram,0x015c046c) */
/* WARNING: Removing unreachable block (ram,0x015c0474) */
/* WARNING: Removing unreachable block (ram,0x015c04a4) */
/* WARNING: Removing unreachable block (ram,0x015c04b8) */
/* WARNING: Removing unreachable block (ram,0x015c0480) */

long Atlas_Audio_KartAudio__PlayVFXAudio(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar6 [16];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  lVar2 = param_1;
  if ((bRam0000000003eb52d4 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    lVar2 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52d4 = 1;
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    lVar2 = *(long *)(param_1 + 0x150);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar2 == 0) {
      auVar6 = func_0x00f78af4();
      uVar5 = auVar6._8_8_;
      unaff_x19 = auVar6._0_8_;
      puVar1 = &stack0xffffffffffffff90;
      puStack_38 = &Atlas_Audio_KartAudio__ExitPortal;
      unaff_x29 = &puStack_40;
      puStack_40 = &stack0xfffffffffffffff0;
      if ((bRam0000000003eb52d6 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        func_0x00f78a20(0x3d2fb00);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb52d6 = 1;
      }
      lVar2 = *(long *)(unaff_x19 + 0x150);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar2 != 0) {
        lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar2,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x278),
                                uRam0000000003d2fb00);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
        if ((uVar4 & 1) == 0) {
          uVar5 = *(undefined8 *)(unaff_x19 + 0xb8);
        }
        if (lVar3 != 0) {
          unaff_x30 = &UNK_015c044c;
          unaff_x20 = uVar5;
          goto code_r0x01638d28;
        }
      }
      lVar2 = func_0x00f78af4();
      return lVar2;
    }
    lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar2,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x250),
                            uRam0000000003d2fb00);
    lVar2 = 0;
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0xb8);
      puVar1 = (undefined1 *)register0x00000008;
code_r0x01638d28:
      *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
      *(long *)(puVar1 + -0x18) = unaff_x19;
      *(undefined1 ***)(puVar1 + -0x10) = unaff_x29;
      *(undefined **)(puVar1 + -8) = unaff_x30;
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar3,uVar5,0);
      return lVar3;
    }
  }
  return lVar2;
}



// ============================================================
// RVA: 0x15c0360 | Atlas.Audio.KartAudio.ExitPortal
// ============================================================

/* WARNING: Possible PIC construction at 0x015c0448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015c044c) */
/* WARNING: Removing unreachable block (ram,0x015c0484) */
/* WARNING: Removing unreachable block (ram,0x015c0488) */
/* WARNING: Removing unreachable block (ram,0x015c0490) */
/* WARNING: Removing unreachable block (ram,0x015c0498) */
/* WARNING: Removing unreachable block (ram,0x015c0460) */
/* WARNING: Removing unreachable block (ram,0x015c0464) */
/* WARNING: Removing unreachable block (ram,0x015c046c) */
/* WARNING: Removing unreachable block (ram,0x015c0474) */
/* WARNING: Removing unreachable block (ram,0x015c04a4) */
/* WARNING: Removing unreachable block (ram,0x015c04b8) */
/* WARNING: Removing unreachable block (ram,0x015c0480) */

long Atlas_Audio_KartAudio__ExitPortal(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000003eb52d6 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb52d6 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x150);
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar2 != 0) {
    lVar2 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar2,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x278),
                            uRam0000000003d2fb00);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_2,0,0);
    if ((uVar1 & 1) == 0) {
      param_2 = *(undefined8 *)(param_1 + 0xb8);
    }
    if (lVar2 != 0) {
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar2,param_2,0);
      return lVar2;
    }
  }
  lVar2 = func_0x00f78af4();
  return lVar2;
}



// ============================================================
// RVA: 0x15c04d8 | Atlas.Audio.KartAudio.GetCharacterId
// ============================================================

undefined4 Atlas_Audio_KartAudio__GetCharacterId(long param_1)

{
  return *(undefined4 *)(param_1 + 0x180);
}



// ============================================================
// RVA: 0x15c04e0 | Atlas.Audio.KartAudio.GetTransform
// ============================================================

undefined8 Atlas_Audio_KartAudio__GetTransform(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



// ============================================================
// RVA: 0x15c04e8 | Atlas.Audio.KartAudio.SetRanking
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c0534 | Atlas.Audio.KartAudio.StartShieldFilter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c05f0 | Atlas.Audio.KartAudio.StopShieldFilter
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c0650 | Atlas.Audio.KartAudio.StartShield
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c08dc | Atlas.Audio.KartAudio.ShieldTimeout
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c0a24 | Atlas.Audio.KartAudio.StopShield
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c0ba8 | Atlas.Audio.KartAudio.PlaySpinOut
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c0c60 | Atlas.Audio.KartAudio.OnUsableHit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c0c84 | Atlas.Audio.KartAudio.HitByWeaponSpeech
// ============================================================

/* WARNING: Possible PIC construction at 0x015c0d18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015c0f7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015c0d1c) */
/* WARNING: Removing unreachable block (ram,0x015c0d20) */
/* WARNING: Removing unreachable block (ram,0x015c0d40) */
/* WARNING: Removing unreachable block (ram,0x01638fc8) */
/* WARNING: Removing unreachable block (ram,0x01639000) */
/* WARNING: Removing unreachable block (ram,0x01639018) */
/* WARNING: Removing unreachable block (ram,0x015c0f80) */
/* WARNING: Removing unreachable block (ram,0x015c0f88) */
/* WARNING: Removing unreachable block (ram,0x015c0fa0) */
/* WARNING: Removing unreachable block (ram,0x01638aa8) */

long Atlas_Audio_KartAudio__HitByWeaponSpeech(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_x22;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  undefined *puVar8;
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 **ppuStack_40;
  undefined *puStack_38;
  
  plVar1 = (long *)&stack0xffffffffffffffd0;
  if ((bRam0000000003eb52de & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52de = 1;
  }
  lVar5 = *(long *)(param_1 + 0x150);
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((lVar5 == 0) ||
     (lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2b8),
                              uRam0000000003d2fb00), lVar3 == 0)) {
    lVar4 = func_0x00f78af4();
    puStack_38 = &Atlas_Audio_KartAudio__StartShuffle;
    lVar3 = lVar4;
    lStack_50 = lVar5;
    lStack_48 = param_1;
    ppuStack_40 = (undefined8 **)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb52df & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      lVar3 = func_0x00f78a20(0x3d2fb00);
      bRam0000000003eb52df = 1;
    }
    if (*(char *)(lVar4 + 0x38) != '\0') {
      return lVar3;
    }
    lVar5 = *(long *)(lVar4 + 0x150);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((lVar5 != 0) &&
       (lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2c8),
                                uRam0000000003d2fb00), lVar3 != 0)) {
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar3,0,0);
      return lVar3;
    }
    lVar4 = func_0x00f78af4();
    lStack_70 = 0x3d1ff28;
    puStack_58 = &Atlas_Audio_KartAudio__StopShuffleCancelled;
    lVar3 = lVar4;
    lStack_68 = lVar5;
    ppuStack_60 = &ppuStack_40;
    if ((bRam0000000003eb52e0 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      lVar3 = func_0x00f78a20(0x3d2fb00);
      bRam0000000003eb52e0 = 1;
    }
    if (*(char *)(lVar4 + 0x38) != '\0') {
      return lVar3;
    }
    lVar5 = *(long *)(lVar4 + 0x150);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((lVar5 == 0) ||
       (lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2c8),
                                uRam0000000003d2fb00), lVar3 == 0)) {
      param_1 = func_0x00f78af4();
      plVar1 = (long *)&stack0xffffffffffffff60;
      puStack_78 = &Atlas_Audio_KartAudio__StopShuffleEquipped;
      pppuVar7 = &ppuStack_80;
      lVar5 = param_1;
      ppuStack_80 = &ppuStack_60;
      if ((bRam0000000003eb52e1 & 1) == 0) {
        func_0x00f78a20(0x3d1ff28);
        lVar5 = func_0x00f78a20(0x3d2fb00);
        bRam0000000003eb52e1 = 1;
      }
      if (*(char *)(param_1 + 0x38) != '\0') {
        return lVar5;
      }
      lVar5 = *(long *)(param_1 + 0x150);
      if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar5 != 0) {
        unaff_x22 = 0x3d2fb00;
        lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,*(undefined8 *)
                                       (*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2c8),
                                uRam0000000003d2fb00);
        if (lVar3 != 0) {
          puVar8 = &UNK_015c0f80;
          goto code_r0x01638a28;
        }
      }
      lVar5 = func_0x00f78af4();
      return lVar5;
    }
    plVar1 = &lStack_50;
    param_1 = lStack_68;
    lVar5 = lStack_70;
    pppuVar7 = (undefined8 ***)ppuStack_60;
    puVar8 = puStack_58;
  }
  else {
    pppuVar7 = (undefined8 ***)&stack0xfffffffffffffff0;
    puVar8 = (undefined *)0x15c0d1c;
  }
code_r0x01638a28:
  *(undefined8 *)((long)plVar1 + -0x30) = unaff_x22;
  *(undefined8 *)((long)plVar1 + -0x28) = 0x3d1ff28;
  *(long *)((long)plVar1 + -0x20) = lVar5;
  *(long *)((long)plVar1 + -0x18) = param_1;
  *(undefined8 ****)((long)plVar1 + -0x10) = pppuVar7;
  *(undefined **)((long)plVar1 + -8) = puVar8;
  if ((bRam0000000003eb56ac & 1) == 0) {
    func_0x00f78a20(0x3d24568,0,0);
    bRam0000000003eb56ac = 1;
  }
  lVar5 = lVar3 + 0x28;
  iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar5,0);
  if (iVar2 != 0) {
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*FMODUnity.RuntimeManager$$DetachInstanceFromGameObject*/ func_0x016e9cb4(uVar6,0);
    /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(lVar5,*(byte *)(lVar3 + 0x31) ^ 1,0);
    /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar5,0);
    /*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(lVar5,0);
  }
  return lVar3;
}



// ============================================================
// RVA: 0x15c0d6c | Atlas.Audio.KartAudio.StartShuffle
// ============================================================

/* WARNING: Possible PIC construction at 0x015c0f7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015c0f80) */
/* WARNING: Removing unreachable block (ram,0x015c0f88) */
/* WARNING: Removing unreachable block (ram,0x015c0fa0) */
/* WARNING: Removing unreachable block (ram,0x01638aa8) */

long Atlas_Audio_KartAudio__StartShuffle(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  undefined *puVar8;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  undefined8 **ppuStack_30;
  undefined *puStack_28;
  
  lVar3 = param_1;
  if ((bRam0000000003eb52df & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    lVar3 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52df = 1;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x150);
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((lVar3 != 0) &&
     (lVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar3,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2c8),
                              uRam0000000003d2fb00), lVar4 != 0)) {
    /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar4,0,0);
    return lVar4;
  }
  lVar5 = func_0x00f78af4();
  lStack_40 = 0x3d1ff28;
  puStack_28 = &Atlas_Audio_KartAudio__StopShuffleCancelled;
  lVar4 = lVar5;
  lStack_38 = lVar3;
  ppuStack_30 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb52e0 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    lVar4 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52e0 = 1;
  }
  if (*(char *)(lVar5 + 0x38) != '\0') {
    return lVar4;
  }
  lVar3 = *(long *)(lVar5 + 0x150);
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((lVar3 != 0) &&
     (lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar3,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2c8),
                              uRam0000000003d2fb00), lVar3 != 0)) {
    puVar1 = &stack0xffffffffffffffe0;
    lVar4 = lStack_38;
    lVar5 = lStack_40;
    pppuVar7 = (undefined8 ***)ppuStack_30;
    puVar8 = puStack_28;
code_r0x01638a28:
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(long *)(puVar1 + -0x20) = lVar5;
    *(long *)(puVar1 + -0x18) = lVar4;
    *(undefined8 ****)(puVar1 + -0x10) = pppuVar7;
    *(undefined **)(puVar1 + -8) = puVar8;
    if ((bRam0000000003eb56ac & 1) == 0) {
      func_0x00f78a20(0x3d24568,0,0);
      bRam0000000003eb56ac = 1;
    }
    lVar4 = lVar3 + 0x28;
    iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar4,0);
    if (iVar2 != 0) {
      uVar6 = *(undefined8 *)(lVar3 + 0x28);
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*FMODUnity.RuntimeManager$$DetachInstanceFromGameObject*/ func_0x016e9cb4(uVar6,0);
      /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(lVar4,*(byte *)(lVar3 + 0x31) ^ 1,0);
      /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar4,0);
      /*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(lVar4,0);
    }
    return lVar3;
  }
  lVar4 = func_0x00f78af4();
  puVar1 = &stack0xffffffffffffff90;
  puStack_48 = &Atlas_Audio_KartAudio__StopShuffleEquipped;
  pppuVar7 = &ppuStack_50;
  lVar3 = lVar4;
  ppuStack_50 = &ppuStack_30;
  if ((bRam0000000003eb52e1 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    lVar3 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52e1 = 1;
  }
  if (*(char *)(lVar4 + 0x38) != '\0') {
    return lVar3;
  }
  lVar5 = *(long *)(lVar4 + 0x150);
  unaff_x21 = 0x3d1ff28;
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar5 != 0) {
    unaff_x22 = 0x3d2fb00;
    lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2c8),
                            uRam0000000003d2fb00);
    if (lVar3 != 0) {
      puVar8 = &UNK_015c0f80;
      goto code_r0x01638a28;
    }
  }
  lVar3 = func_0x00f78af4();
  return lVar3;
}



// ============================================================
// RVA: 0x15c0e1c | Atlas.Audio.KartAudio.StopShuffleCancelled
// ============================================================

/* WARNING: Possible PIC construction at 0x015c0f7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015c0f80) */
/* WARNING: Removing unreachable block (ram,0x015c0f88) */
/* WARNING: Removing unreachable block (ram,0x015c0fa0) */
/* WARNING: Removing unreachable block (ram,0x01638af0) */
/* WARNING: Removing unreachable block (ram,0x01638aa8) */

long Atlas_Audio_KartAudio__StopShuffleCancelled(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar4;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  lVar3 = param_1;
  if ((bRam0000000003eb52e0 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    lVar3 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52e0 = 1;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x150);
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((lVar3 != 0) &&
     (lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar3,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2c8),
                              uRam0000000003d2fb00), lVar3 != 0)) {
code_r0x01638a28:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb56ac & 1) == 0) {
      func_0x00f78a20(0x3d24568,0,0);
      bRam0000000003eb56ac = 1;
    }
    lVar1 = lVar3 + 0x28;
    iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar1,0);
    if (iVar2 != 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x28);
      if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*FMODUnity.RuntimeManager$$DetachInstanceFromGameObject*/ func_0x016e9cb4(uVar4,0);
      /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(lVar1,*(byte *)(lVar3 + 0x31) ^ 1,0);
      /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar1,0);
      /*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(lVar1,0);
    }
    return lVar3;
  }
  unaff_x19 = func_0x00f78af4();
  puStack_28 = &Atlas_Audio_KartAudio__StopShuffleEquipped;
  unaff_x29 = &puStack_30;
  lVar3 = unaff_x19;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb52e1 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    lVar3 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52e1 = 1;
  }
  if (*(char *)(unaff_x19 + 0x38) != '\0') {
    return lVar3;
  }
  unaff_x20 = *(long *)(unaff_x19 + 0x150);
  unaff_x21 = 0x3d1ff28;
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (unaff_x20 != 0) {
    unaff_x22 = 0x3d2fb00;
    lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(unaff_x20,
                            *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2c8),
                            uRam0000000003d2fb00);
    if (lVar3 != 0) {
      unaff_x30 = &UNK_015c0f80;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
      goto code_r0x01638a28;
    }
  }
  lVar3 = func_0x00f78af4();
  return lVar3;
}



// ============================================================
// RVA: 0x15c0ed0 | Atlas.Audio.KartAudio.StopShuffleEquipped
// ============================================================

long Atlas_Audio_KartAudio__StopShuffleEquipped(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  if ((bRam0000000003eb52e1 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    lVar1 = func_0x00f78a20(0x3d2fb00);
    bRam0000000003eb52e1 = 1;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return lVar1;
  }
  lVar1 = *(long *)(param_1 + 0x150);
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((lVar1 != 0) &&
     (lVar1 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar1,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2c8),
                              uRam0000000003d2fb00), lVar1 != 0)) {
    /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar1,0,0);
    if ((*(long *)(param_1 + 0x150) != 0) &&
       (lVar1 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(param_1 + 0x150),
                                *(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x2a0),
                                uRam0000000003d2fb00), lVar1 != 0)) {
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar1,0,0);
      return lVar1;
    }
  }
  lVar1 = func_0x00f78af4();
  return lVar1;
}



// ============================================================
// RVA: 0x15c0fb8 | Atlas.Audio.KartAudio.OnWeaponHit
// ============================================================

void Atlas_Audio_KartAudio__OnWeaponHit(void)

{
  return;
}



// ============================================================
// RVA: 0x15c0fbc | Atlas.Audio.KartAudio.LaserStrike
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c1120 | Atlas.Audio.KartAudio.StopLaserCrackle
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c11c8 | Atlas.Audio.KartAudio.WeaponTargetted
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c133c | Atlas.Audio.KartAudio.OnRaceFinished
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x15c1344 | Atlas.Audio.KartAudio.IsFarAI
// ============================================================

bool Atlas_Audio_KartAudio__IsFarAI(long param_1)

{
  if (*(char *)(param_1 + 0x38) != '\0') {
    return 20.0 < *(float *)(param_1 + 0x184);
  }
  return false;
}



// ============================================================
// RVA: 0x15c1368 | Atlas.Audio.KartAudio.ShouldISpeak
// ============================================================

long Atlas_Audio_KartAudio__ShouldISpeak(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    lVar2 = func_0x00f78af4();
    if ((bRam0000000003eb52e6 & 1) == 0) {
      func_0x00f78a20(0x3d1ff28);
      func_0x00f78a20(0x3d30648);
      func_0x00f78a20(0x3d2df38);
      func_0x00f78a20(0x3d2e040);
      func_0x00f78a20(0x3d2df30);
      func_0x00f78a20(0x3d30640);
      func_0x00f78a20(0x3d1c670);
      func_0x00f78a20(0x3d1c170);
      func_0x00f78a20(0x3d1c150);
      func_0x00f78a20(0x3d22ef8);
      bRam0000000003eb52e6 = 1;
    }
    uVar3 = func_0x00f78aec(/*Atlas.Audio.LerpFloat_TypeInfo*/ uRam0000000003d22ef8);
    /*Atlas.Audio.LerpFloat$$.ctor*/ func_0x01483c18(0,0,0x40200000,uVar3,0);
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    uVar3 = func_0x00f78aec(/*Atlas.Audio.LerpFloat_TypeInfo*/ uRam0000000003d22ef8);
    /*Atlas.Audio.LerpFloat$$.ctor*/ func_0x01483c18(0,0,0x40a00000,uVar3,0);
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
    uVar3 = func_0x00f78aec(/*Atlas.Audio.LerpFloat_TypeInfo*/ uRam0000000003d22ef8);
    /*Atlas.Audio.LerpFloat$$.ctor*/ func_0x01483c18(0,0,0x40000000,uVar3,0);
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    uVar3 = func_0x00f78aec(/*Atlas.Audio.LerpFloat_TypeInfo*/ uRam0000000003d22ef8);
    /*Atlas.Audio.LerpFloat$$.ctor*/ func_0x01483c18(0,0,0x41200000,uVar3,0);
    *(undefined8 *)(lVar2 + 0x28) = uVar3;
    *(undefined4 *)(lVar2 + 0x5c) = 0x40a00000;
    *(undefined4 *)(lVar2 + 0x70) = 0xbf800000;
    *(undefined4 *)(lVar2 + 0xc0) = 0xffffffff;
    lVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<KartAudio.EngineType, string>_TypeInfo*/ uRam0000000003d1c670);
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(lVar4,uRam0000000003d30640);
    if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar4 != 0) {
      /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar4,3,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x38),
                      uRam0000000003d30648);
      /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar4,1,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x40),
                      uRam0000000003d30648);
      /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar4,4,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x48),
                      uRam0000000003d30648);
      /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar4,0,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x50),
                      uRam0000000003d30648);
      /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar4,5,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x58),
                      uRam0000000003d30648);
      /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar4,2,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x60),
                      uRam0000000003d30648);
      *(long *)(lVar2 + 0x138) = lVar4;
      lVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<AestheticSurfaceType, float>_TypeInfo*/ uRam0000000003d1c150);
      /*System.Collections.Generic.Dictionary<Int32Enum, float>$$.ctor*/ func_0x01ea9bf0(lVar4,uRam0000000003d2df30);
      if (lVar4 != 0) {
        /*System.Collections.Generic.Dictionary<Int32Enum, float>$$Add*/ func_0x01eaa120(0x40400000,lVar4,1,uRam0000000003d2df38);
        /*System.Collections.Generic.Dictionary<Int32Enum, float>$$Add*/ func_0x01eaa120(0x40000000,lVar4,5,uRam0000000003d2df38);
        *(long *)(lVar2 + 0x140) = lVar4;
        uVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<AudioTrigger, EventInstance>_TypeInfo*/ uRam0000000003d1c170);
        /*System.Collections.Generic.Dictionary<object, EventInstance>$$.ctor*/ func_0x01ec80e0(uVar3,uRam0000000003d2e040);
        *(undefined8 *)(lVar2 + 0x148) = uVar3;
        *(undefined4 *)(lVar2 + 0x168) = 0x43c80000;
        *(undefined4 *)(lVar2 + 0x188) = 100;
        return lVar2;
      }
    }
    lVar2 = func_0x00f78af4();
    if ((bRam0000000003eb52e7 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb52e7 = 1;
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
    if (iVar1 == 0) {
      return 0;
    }
    lVar2 = *(long *)(lVar2 + 0x18);
    if (lVar2 == 0) {
      lVar2 = func_0x00f78af4();
      return *(long *)(lVar2 + 0x10);
    }
    if (pcRam0000000003ebf190 == (code *)0x0) {
      pcRam0000000003ebf190 = (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()");
    }
                    /* WARNING: Could not recover jumptable at 0x03227a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (*pcRam0000000003ebf190)(lVar2);
    return lVar2;
  }
  if (*(char *)(*(long *)(param_1 + 0x90) + 0x90) == '\0') {
    iVar1 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,100,0);
    if (*(int *)(param_1 + 0x188) < iVar1) {
      return 0;
    }
    if ((*(char *)(param_1 + 0x38) == '\0') || (*(float *)(param_1 + 0x184) <= 20.0)) {
      return 1;
    }
  }
  return 0;
}



// ============================================================
// RVA: 0x15c13e0 | Atlas.Audio.KartAudio..ctor
// ============================================================

undefined1  [16] Atlas_Audio_KartAudio___ctor(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong extraout_x1;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb52e6 & 1) == 0) {
    func_0x00f78a20(0x3d1ff28);
    func_0x00f78a20(0x3d30648);
    func_0x00f78a20(0x3d2df38);
    func_0x00f78a20(0x3d2e040);
    func_0x00f78a20(0x3d2df30);
    func_0x00f78a20(0x3d30640);
    func_0x00f78a20(0x3d1c670);
    func_0x00f78a20(0x3d1c170);
    func_0x00f78a20(0x3d1c150);
    func_0x00f78a20(0x3d22ef8);
    bRam0000000003eb52e6 = 1;
  }
  uVar2 = func_0x00f78aec(/*Atlas.Audio.LerpFloat_TypeInfo*/ uRam0000000003d22ef8);
  /*Atlas.Audio.LerpFloat$$.ctor*/ func_0x01483c18(0,0,0x40200000,uVar2,0);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar2 = func_0x00f78aec(/*Atlas.Audio.LerpFloat_TypeInfo*/ uRam0000000003d22ef8);
  /*Atlas.Audio.LerpFloat$$.ctor*/ func_0x01483c18(0,0,0x40a00000,uVar2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar2 = func_0x00f78aec(/*Atlas.Audio.LerpFloat_TypeInfo*/ uRam0000000003d22ef8);
  /*Atlas.Audio.LerpFloat$$.ctor*/ func_0x01483c18(0,0,0x40000000,uVar2,0);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar2 = func_0x00f78aec(/*Atlas.Audio.LerpFloat_TypeInfo*/ uRam0000000003d22ef8);
  /*Atlas.Audio.LerpFloat$$.ctor*/ func_0x01483c18(0,0,0x41200000,uVar2,0);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x70) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  lVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<KartAudio.EngineType, string>_TypeInfo*/ uRam0000000003d1c670);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(lVar3,uRam0000000003d30640);
  if (((*(ushort *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar3 != 0) {
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar3,3,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x38),
                    uRam0000000003d30648);
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar3,1,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x40),
                    uRam0000000003d30648);
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar3,4,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x48),
                    uRam0000000003d30648);
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar3,0,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x50),
                    uRam0000000003d30648);
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar3,5,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x58),
                    uRam0000000003d30648);
    /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(lVar3,2,*(undefined8 *)(*(long *)(/*Atlas.Audio.AudioConsts_TypeInfo*/ lRam0000000003d1ff28 + 0xb8) + 0x60),
                    uRam0000000003d30648);
    *(long *)(param_1 + 0x138) = lVar3;
    lVar3 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<AestheticSurfaceType, float>_TypeInfo*/ uRam0000000003d1c150);
    /*System.Collections.Generic.Dictionary<Int32Enum, float>$$.ctor*/ func_0x01ea9bf0(lVar3,uRam0000000003d2df30);
    if (lVar3 != 0) {
      /*System.Collections.Generic.Dictionary<Int32Enum, float>$$Add*/ func_0x01eaa120(0x40400000,lVar3,1,uRam0000000003d2df38);
      /*System.Collections.Generic.Dictionary<Int32Enum, float>$$Add*/ func_0x01eaa120(0x40000000,lVar3,5,uRam0000000003d2df38);
      *(long *)(param_1 + 0x140) = lVar3;
      uVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<AudioTrigger, EventInstance>_TypeInfo*/ uRam0000000003d1c170);
      /*System.Collections.Generic.Dictionary<object, EventInstance>$$.ctor*/ func_0x01ec80e0(uVar2,uRam0000000003d2e040);
      *(undefined8 *)(param_1 + 0x148) = uVar2;
      *(undefined4 *)(param_1 + 0x168) = 0x43c80000;
      *(undefined4 *)(param_1 + 0x188) = 100;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_1;
      return auVar5;
    }
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb52e7 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb52e7 = 1;
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
  if (iVar1 != 0) {
    lVar3 = *(long *)(lVar3 + 0x18);
    if (lVar3 != 0) {
      if (pcRam0000000003ebf190 == (code *)0x0) {
        pcRam0000000003ebf190 = (code *)func_0x00f789d4("UnityEngine.Component::get_gameObject()");
      }
                    /* WARNING: Could not recover jumptable at 0x03227a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar6 = (*pcRam0000000003ebf190)(lVar3);
      return auVar6;
    }
    auVar6 = func_0x00f78af4();
    auVar4._8_8_ = auVar6._8_8_;
    auVar4._0_8_ = *(undefined8 *)(auVar6._0_8_ + 0x10);
    return auVar4;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = extraout_x1;
  return auVar6 << 0x40;
}



