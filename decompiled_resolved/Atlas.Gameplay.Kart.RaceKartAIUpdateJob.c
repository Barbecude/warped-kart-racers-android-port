// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.RaceKartAIUpdateJob

// ============================================================
// RVA: 0x14d55f8 | Atlas.Gameplay.Kart.RaceKartAIUpdateJob.Execute
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_RaceKartAIUpdateJob__Execute(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 extraout_x1;
  undefined8 *puVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  if ((bRam0000000003eb4ba6 & 1) == 0) {
    func_0x00f78a20(0x3d24090);
    bRam0000000003eb4ba6 = 1;
  }
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_138 = 0;
  uStack_13c = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_154 = 0;
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_88 = param_1[0x13];
  uStack_90 = param_1[0x12];
  uStack_78 = param_1[0x15];
  uStack_80 = param_1[0x14];
  uStack_70 = *(undefined4 *)(param_1 + 0x16);
  uStack_98 = (uint)param_1[0x11];
  uStack_94 = (undefined4)((ulong)param_1[0x11] >> 0x20);
  uStack_a0 = (undefined4)param_1[0x10];
  uStack_9c = (undefined4)((ulong)param_1[0x10] >> 0x20);
  Atlas_Gameplay_Kart_KartAIInputData__Reset((long)&uStack_a8 + 4,0);
  uStack_a0 = 0x3f800000;
  if (*(char *)((long)param_1 + 0xf9) == '\0') {
    if (uStack_90._5_1_ != '\0') {
      uStack_120 = CONCAT44(uStack_120._4_4_,0xffffffff);
    }
    uVar5 = *(undefined4 *)(param_1 + 0x17);
    fVar6 = *(float *)((long)param_1 + 0xbc);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    uVar8 = *(undefined4 *)((long)param_1 + 0xc4);
    if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar4 = &uStack_120;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x17);
    fVar6 = *(float *)((long)param_1 + 0xbc);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    uVar8 = *(undefined4 *)((long)param_1 + 0xc4);
    uStack_154 = 0xffffffff;
    if (((*(byte *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar4 = (undefined8 *)&uStack_154;
  }
  uVar5 = /*Atlas.Gameplay.RaceSplineBurstHelpers$$GetTrackCoords*/ func_0x014d8710(uVar5,fVar6,uVar7,uVar8,param_1 + 0x3c,(ulong)&uStack_120 | 8,
                          (ulong)&uStack_120 | 4,puVar4,(long)&uStack_130 + 4,&uStack_130,
                          (long)&uStack_138 + 4,(long)&uStack_128 + 4,&uStack_128,&uStack_138,
                          &uStack_13c,&uStack_150,0);
  uVar1 = uStack_f0;
  uStack_f0 = CONCAT44(uVar5,(undefined4)uStack_f0);
  uVar2 = uStack_f0;
  uStack_e8 = CONCAT44(uStack_e8._4_4_,fVar6);
  uStack_f0._0_2_ = (ushort)uVar1;
  uStack_f0._3_5_ = SUB85(uVar2,3);
  if ((fVar6 <= _UNK_033f8510) || (_UNK_033f8514 <= fVar6)) {
    uStack_f0._2_1_ = SUB81(uVar1,2);
    if ((_UNK_033f8518 <= fVar6) || (uStack_f0._2_1_ == '\0')) {
      bVar3 = true;
      if ((uStack_f0._2_1_ != '\0') && (bVar3 = false, !NAN(fVar6) && !NAN(_UNK_033f8518))) {
        bVar3 = fVar6 < _UNK_033f8518;
      }
      if ((bVar3) && (_UNK_033f851c < fVar6)) {
        uStack_f0._0_3_ = CONCAT12(1,(ushort)uStack_f0);
        uStack_110 = CONCAT44(uStack_110._4_4_ + -1,(undefined4)uStack_110);
        uVar2 = uStack_f0;
      }
    }
    else {
      uStack_110 = CONCAT44(uStack_110._4_4_ + 1,(undefined4)uStack_110);
      uStack_f0._0_3_ = (uint3)(ushort)uStack_f0;
      uVar2 = uStack_f0;
    }
  }
  else if ((*(char *)((long)param_1 + 0x101) != '\0') || (*(char *)((long)param_1 + 0x102) != '\0'))
  {
    uStack_f0._0_3_ = CONCAT12(1,(ushort)uStack_f0);
    uVar2 = uStack_f0;
  }
  uStack_f0 = uVar2;
  uStack_120 = CONCAT44((int)((ulong)uStack_130 >> 0x20),uStack_138._4_4_);
  uStack_100 = CONCAT44((undefined4)uStack_138,uStack_13c);
  uStack_118 = CONCAT44(uStack_118._4_4_,(undefined4)uStack_130);
  uStack_108 = CONCAT44((undefined4)uStack_128,uStack_128._4_4_);
  if (*(char *)((long)param_1 + 0xf9) == '\0') {
    /*Atlas.Gameplay.Kart.RaceKartAIUpdateJob$$ApplySteering*/ func_0x014d596c(param_1,extraout_x1,uStack_138._4_4_,&uStack_120);
    uStack_178 = param_1[0x58];
    uStack_180 = param_1[0x57];
    uStack_168 = param_1[0x5a];
    uStack_170 = param_1[0x59];
    uStack_160 = *(undefined4 *)(param_1 + 0x5b);
    uStack_1b8 = param_1[0x50];
    uStack_1c0 = param_1[0x4f];
    uStack_1a8 = param_1[0x52];
    uStack_1b0 = param_1[0x51];
    uStack_198 = param_1[0x54];
    uStack_1a0 = param_1[0x53];
    uStack_188 = param_1[0x56];
    uStack_190 = param_1[0x55];
    /*Atlas.Gameplay.Kart.RaceKartAIUpdateJob$$UpdateUseUsable*/ func_0x014d5fac(param_1,&uStack_1c0,&uStack_120);
    if ((uStack_98 & 0xff) == 0) {
      /*Atlas.Gameplay.Kart.RaceKartAIUpdateJob$$TryHopBoost*/ func_0x014d6438(*(undefined4 *)((long)param_1 + 0x104),param_1,&uStack_120);
    }
    if ((uStack_98 & 0xff) == 0) {
      uStack_1e8 = param_1[0x58];
      uStack_1f0 = param_1[0x57];
      uStack_1d8 = param_1[0x5a];
      uStack_1e0 = param_1[0x59];
      uStack_1d0 = *(undefined4 *)(param_1 + 0x5b);
      uStack_228 = param_1[0x50];
      uStack_230 = param_1[0x4f];
      uStack_218 = param_1[0x52];
      uStack_220 = param_1[0x51];
      uStack_208 = param_1[0x54];
      uStack_210 = param_1[0x53];
      uStack_1f8 = param_1[0x56];
      uStack_200 = param_1[0x55];
      /*Atlas.Gameplay.Kart.RaceKartAIUpdateJob$$ApplyHoppingUsables*/ func_0x014d64b8(param_1,&uStack_230,&uStack_120);
    }
    uVar5 = *(undefined4 *)((long)param_1 + 0xfc);
    /*Atlas.Gameplay.Kart.RaceKartAIUpdateJob$$CheckReroute*/ func_0x014d66d0(uVar5,param_1,&uStack_120);
    /*Atlas.Gameplay.Kart.RaceKartAIUpdateJob$$CheckForStuckAI*/ func_0x014d6724(uVar5,param_1,&uStack_120);
  }
  _memmove(param_1[0x5c],&uStack_120,0xb4);
  return;
}



// ============================================================
// RVA: 0x14d596c | Atlas.Gameplay.Kart.RaceKartAIUpdateJob.ApplySteering
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAIUpdateJob__ApplySteering
               (float param_1,long param_2,undefined8 param_3,uint param_4,uint *param_5)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000003eb4ba7 & 1) == 0) {
    func_0x00f78a20(0x3d24090);
    bRam0000000003eb4ba7 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uVar14 = param_5[3];
  if (uVar14 == param_4) {
    param_5[3] = 0xffffffff;
    param_5[4] = 0xffffffff;
    uVar14 = 0xffffffff;
  }
  if (*(char *)(param_2 + 0x120) != '\0') {
    param_5[0x1f] = 0;
    return;
  }
  if ((param_1 < 5.0) && (-1 < (int)uVar14)) {
    param_5[1] = param_5[2];
    param_5[2] = param_5[4];
    *param_5 = uVar14;
    param_5[8] = *(uint *)(*(long *)(param_2 + 0x1f0) + (ulong)uVar14 * 0x20 + 8);
    param_5[9] = 0;
    param_5[3] = 0xffffffff;
    param_5[4] = 0xffffffff;
  }
  if ((int)*param_5 < 0) {
    return;
  }
  if (*(char *)((long)param_5 + 0x95) == '\0') {
code_r0x014d5aa8:
    fVar10 = *(float *)(param_2 + 0xb4) * *(float *)(param_2 + 0x110) + *(float *)(param_2 + 0x114);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar10 = (float)param_5[9] + fVar10;
    iVar4 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar10,0);
    fVar11 = 0.0;
    if (iVar4 == 0 && 0.0 <= fVar10) {
      fVar11 = fVar10;
    }
    uVar14 = param_5[10];
    cVar2 = *(char *)(param_2 + 0xfa);
    uVar1 = *(undefined4 *)(param_2 + 0x2dc);
    if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*Atlas.Gameplay.RaceSplineBurstHelpers$$TryGetPointOnTrack*/ func_0x014d9510(fVar11,uVar14,param_2 + 0x1e0,param_5,&uStack_90,cVar2 == '\0',uVar1,0);
    *(undefined8 *)(param_5 + 0xf) = uStack_90;
    param_5[0x11] = (uint)(float)uStack_88;
    param_5[0x12] = (uint)uStack_88._4_4_;
    fVar10 = (float)uStack_90 - *(float *)(param_2 + 0xb8);
    fVar12 = (float)uStack_88 - *(float *)(param_2 + 0xc0);
    fVar13 = uStack_88._4_4_ - *(float *)(param_2 + 0xc4);
  }
  else {
    fVar12 = (float)param_5[0x11] - *(float *)(param_2 + 0xc0);
    fVar13 = (float)param_5[0x12] - *(float *)(param_2 + 0xc4);
    fVar10 = (float)*(undefined8 *)(param_5 + 0xf) - (float)*(undefined8 *)(param_2 + 0xb8);
    fVar11 = (float)((ulong)*(undefined8 *)(param_5 + 0xf) >> 0x20) -
             (float)((ulong)*(undefined8 *)(param_2 + 0xb8) >> 0x20);
    if (fVar13 * fVar13 + fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11 <=
        *(float *)(param_2 + 400)) {
      *(undefined1 *)((long)param_5 + 0x95) = 0;
      goto code_r0x014d5aa8;
    }
  }
  if (cRam0000000003ca34fc == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca34fc = '\x01';
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) == 0) ||
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) != 0)) {
    bVar3 = false;
  }
  else {
    func_0x00f78ad0();
    bVar3 = cRam0000000003ca34fc == '\0';
  }
  fVar11 = 1.0 / SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar10 * fVar10 + 0.0);
  fVar10 = fVar10 * fVar11;
  fVar16 = fVar11 * 0.0;
  fVar12 = fVar12 * fVar11;
  fVar13 = fVar13 * fVar11;
  param_5[0x13] = (uint)fVar10;
  param_5[0x14] = (uint)fVar16;
  param_5[0x15] = (uint)fVar12;
  param_5[0x16] = (uint)fVar13;
  fVar17 = *(float *)(param_2 + 0xd8);
  fVar11 = *(float *)(param_2 + 0xe0);
  fVar15 = *(float *)(param_2 + 0xe4);
  if (bVar3) {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca34fc = '\x01';
  }
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar7 = 1.0;
  fVar9 = 1.0;
  fVar8 = 1.0 / SQRT(fVar15 * fVar15 + fVar11 * fVar11 + fVar17 * fVar17 + 0.0);
  fVar15 = fVar13 * fVar15 * fVar8 +
           fVar12 * fVar11 * fVar8 + fVar10 * fVar17 * fVar8 + fVar16 * fVar8 * 0.0;
  fVar11 = fVar13 * *(float *)(param_2 + 0xf4) +
           fVar12 * *(float *)(param_2 + 0xf0) +
           fVar10 * *(float *)(param_2 + 0xe8) + fVar16 * *(float *)(param_2 + 0xec);
  cVar2 = *(char *)(param_2 + 0xf8);
  fVar12 = ABS(fVar15);
  fVar10 = *(float *)(param_2 + 0x118);
  bVar3 = true;
  if ((0.0 <= fVar11) && (bVar3 = false, !NAN(fVar10) && !NAN(fVar12))) {
    bVar3 = fVar10 < fVar12;
  }
  if (bVar3) {
    fVar13 = *(float *)(param_2 + 0x124) * *(float *)(param_2 + 0xfc);
    if (fVar15 == 0.0 || 0.0 > fVar15) {
      fVar9 = 0.0;
    }
    if (0.0 <= fVar15) {
      fVar7 = 0.0;
    }
    fVar16 = (fVar9 - fVar7) * ((fVar12 - fVar10) / (*(float *)(param_2 + 0x11c) - fVar10));
    param_5[0x1f] = (uint)fVar16;
    fVar10 = *(float *)(param_2 + 0x7c);
    if (fVar13 < ABS(fVar16 - fVar10)) {
      fVar16 = fVar16 - fVar10;
      fVar17 = 1.0;
      if (fVar16 == 0.0 || 0.0 > fVar16) {
        fVar17 = 0.0;
      }
      fVar7 = 1.0;
      if (0.0 <= fVar16) {
        fVar7 = 0.0;
      }
      fVar16 = fVar10 + fVar13 * (fVar17 - fVar7);
      param_5[0x1f] = (uint)fVar16;
    }
    iVar4 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar16,0);
    fVar10 = 1.0;
    if (fVar16 <= 1.0 && iVar4 == 0) {
      fVar10 = fVar16;
    }
    iVar4 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar10,0);
    fVar13 = -1.0;
    if (iVar4 == 0 && -1.0 <= fVar10) {
      fVar13 = fVar10;
    }
    param_5[0x1f] = (uint)fVar13;
    if (cVar2 == '\0') {
      bVar3 = true;
      if ((0.0 <= fVar11) && (bVar3 = false, !NAN(*(float *)(param_2 + 0x128)) && !NAN(fVar12))) {
        bVar3 = *(float *)(param_2 + 0x128) < fVar12;
      }
      if (bVar3) {
        if (*(char *)((long)param_5 + 0x31) == '\0') {
          uVar5 = /*Atlas.Gameplay.Kart.RaceKartAIUpdateJob$$IsDriftingStateRequirementsMet*/ func_0x014d69a4(*(undefined4 *)(param_2 + 300),*(undefined4 *)(param_2 + 0x130),
                                  fVar13,*(undefined4 *)(param_2 + 0x134),
                                  *(undefined4 *)(param_2 + 0x138));
          *(undefined1 *)((long)param_5 + 0x31) = 1;
          if (((int)uVar5 != 0) &&
             (iVar4 = /*Atlas.Gameplay.Kart.RaceKartAIUpdateJob$$PassRoll*/ func_0x014d6970(*(undefined4 *)(param_2 + 0x13c),uVar5,
                                      *(undefined4 *)(param_2 + 0x170)), iVar4 != 0)) {
            *(undefined2 *)(param_5 + 0x22) = 0x101;
          }
        }
      }
      else {
        *(undefined1 *)((long)param_5 + 0x31) = 0;
      }
    }
    else {
code_r0x014d5dcc:
      *(undefined1 *)((long)param_5 + 0x89) = 1;
      fVar13 = *(float *)(param_2 + 0x140);
      fVar10 = fVar13;
      if (fVar15 <= 0.0) {
        fVar10 = -fVar13;
      }
      fVar16 = *(float *)(param_2 + 0x128);
      if ((fVar12 < fVar16) || (fVar10 <= 0.0)) {
        fVar17 = fVar12;
        if (fVar10 <= 0.0) {
          fVar17 = -fVar12;
        }
        fVar16 = (fVar17 - fVar16) / (0.0 - fVar16);
        iVar4 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar16,0);
        fVar10 = 1.0;
        if (fVar16 <= 1.0 && iVar4 == 0) {
          fVar10 = fVar16;
        }
        iVar4 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar10,0);
        fVar16 = 0.0;
        if (iVar4 == 0 && 0.0 <= fVar10) {
          fVar16 = fVar10;
        }
        pfVar6 = (float *)(param_2 + 0x14c);
      }
      else {
        fVar16 = (fVar12 - fVar16) / (*(float *)(param_2 + 0x150) - fVar16);
        iVar4 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar16,0);
        fVar10 = 1.0;
        if (iVar4 == 0 && fVar16 <= 1.0) {
          fVar10 = fVar16;
        }
        iVar4 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar10,0);
        fVar16 = 0.0;
        if (iVar4 == 0 && 0.0 <= fVar10) {
          fVar16 = fVar10;
        }
        pfVar6 = (float *)(param_2 + 0x144);
      }
      fVar13 = fVar13 * (*(float *)(param_2 + 0x148) +
                        (*pfVar6 - *(float *)(param_2 + 0x148)) * fVar16);
      param_5[0x1f] = (uint)fVar13;
      fVar10 = 1.0;
      fVar16 = 1.0;
      if (fVar15 == 0.0 || 0.0 > fVar15) {
        fVar16 = 0.0;
      }
      if (0.0 <= fVar15) {
        fVar10 = 0.0;
      }
      if (((fVar16 - fVar10) * *(float *)(param_2 + 0x140) < 0.0) &&
         (*(float *)(param_2 + 0x158) < fVar12)) {
        fVar10 = (float)param_5[0xb] + *(float *)(param_2 + 0xfc);
        param_5[0xb] = (uint)fVar10;
        if (*(float *)(param_2 + 0x154) < fVar10) {
          fVar10 = *(float *)(param_2 + 0x128);
          *(undefined1 *)((long)param_5 + 0x89) = 0;
          bVar3 = true;
          if ((0.0 <= fVar11) && (bVar3 = false, !NAN(fVar10) && !NAN(fVar12))) {
            bVar3 = fVar10 < fVar12;
          }
          if (bVar3) {
            param_5[0x1f] = (uint)-fVar13;
            *(undefined1 *)((long)param_5 + 0x31) = 0;
          }
          else {
            param_5[0x1f] = 0;
          }
        }
        goto code_r0x014d5f70;
      }
    }
  }
  else if (cVar2 != '\0') goto code_r0x014d5dcc;
  param_5[0xb] = 0;
code_r0x014d5f70:
  param_5[10] = (uint)((float)param_5[10] +
                      *(float *)(param_2 + 0x15c) * *(float *)(param_2 + 0x160));
  if ((char)param_5[0x25] == '\0') {
    *(undefined1 *)(param_5 + 0x25) = 1;
    param_5[10] = param_5[0xd];
  }
  return;
}



// ============================================================
// RVA: 0x14d5fac | Atlas.Gameplay.Kart.RaceKartAIUpdateJob.UpdateUseUsable
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAIUpdateJob__UpdateUseUsable
               (long param_1,long param_2,long param_3)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  if (0.0 <= *(float *)(param_3 + 0x8c)) {
    return;
  }
  if (*(char *)(param_1 + 0x174) == '\0') {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x178);
  if (iVar4 == 4) {
    fVar15 = 0.0;
    if (*(float *)(param_2 + 0x40) <
        (float)((ulong)*(undefined8 *)(param_1 + 0xf0) >> 0x20) *
        (float)((ulong)*(undefined8 *)(param_3 + 0x54) >> 0x20) +
        (float)*(undefined8 *)(param_1 + 0xf0) * (float)*(undefined8 *)(param_3 + 0x54) +
        (float)*(undefined8 *)(param_1 + 0xe8) * (float)*(undefined8 *)(param_3 + 0x4c) +
        (float)((ulong)*(undefined8 *)(param_1 + 0xe8) >> 0x20) *
        (float)((ulong)*(undefined8 *)(param_3 + 0x4c) >> 0x20)) {
      fVar15 = *(float *)(param_3 + 0x90) + *(float *)(param_1 + 0xfc);
    }
    *(float *)(param_3 + 0x90) = fVar15;
    if (fVar15 < *(float *)(param_2 + 0x3c)) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x2dc);
    uVar2 = uVar3 ^ uVar3 << 0xd;
    uVar2 = uVar2 ^ uVar2 >> 0x11;
    *(uint *)(param_1 + 0x2dc) = uVar2 ^ uVar2 << 5;
    uVar6 = /*Atlas.Gameplay.Kart.RaceKartAIUpdateJob$$PassRoll*/ func_0x014d6970(*(undefined4 *)(param_2 + 0x34),param_1,(ulong)uVar3 * 10000 >> 0x20);
    if ((uVar6 & 1) != 0) {
      *(undefined1 *)(param_3 + 0x8a) = 1;
      *(undefined4 *)(param_3 + 0x8c) = *(undefined4 *)(param_2 + 0x38);
      *(undefined4 *)(param_3 + 0x90) = 0;
      return;
    }
    uVar11 = *(undefined4 *)(param_2 + 0x38);
  }
  else {
    fVar15 = *(float *)(param_1 + 0xb8);
    fVar16 = *(float *)(param_1 + 0xbc);
    fVar17 = *(float *)(param_1 + 0xc0);
    fVar18 = *(float *)(param_1 + 0xc4);
    if (iVar4 == 1) {
      uVar3 = *(uint *)(param_1 + 0x2dc);
      uVar2 = uVar3 ^ uVar3 << 0xd;
      uVar2 = uVar2 ^ uVar2 >> 0x11;
      *(uint *)(param_1 + 0x2dc) = uVar2 ^ uVar2 << 5;
      uVar5 = Atlas_Gameplay_Kart_KartAIUsablesParametersBurst__GetChance(param_2,1,0);
      uVar6 = /*Atlas.Gameplay.Kart.RaceKartAIUpdateJob$$PassRoll*/ func_0x014d6970(uVar5,(ulong)uVar3 * 10000 >> 0x20);
      if ((uVar6 & 1) != 0) {
        iVar4 = *(int *)(param_1 + 0x17c);
        if (iVar4 < 1) {
          return;
        }
        lVar7 = 0;
        lVar8 = 0;
        fVar9 = *(float *)(param_2 + 0x1c);
        do {
          pfVar1 = (float *)(*(long *)(param_1 + 0x1c8) + lVar7);
          fVar21 = *pfVar1;
          fVar22 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar19 = pfVar1[3];
          fVar10 = fVar15 - fVar21;
          fVar12 = fVar16 - fVar22;
          fVar13 = fVar17 - fVar20;
          fVar14 = fVar18 - fVar19;
          if (fVar14 * fVar14 + fVar13 * fVar13 + fVar10 * fVar10 + fVar12 * fVar12 <= fVar9 * fVar9
             ) {
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar21 = fVar21 - fVar15;
            fVar22 = fVar22 - fVar16;
            fVar20 = fVar20 - fVar17;
            fVar19 = fVar19 - fVar18;
            fVar10 = 1.0 / SQRT(fVar19 * fVar19 +
                                fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22);
            if (*(float *)(param_2 + 0x18) <
                fVar19 * fVar10 * *(float *)(param_1 + 0xf4) +
                fVar20 * fVar10 * *(float *)(param_1 + 0xf0) +
                fVar21 * fVar10 * *(float *)(param_1 + 0xe8) +
                fVar22 * fVar10 * *(float *)(param_1 + 0xec)) {
              *(undefined1 *)(param_3 + 0x8a) = 1;
              uVar11 = *(undefined4 *)(param_2 + 0x20);
              goto code_r0x014d63e0;
            }
            iVar4 = *(int *)(param_1 + 0x17c);
          }
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x10;
          if (iVar4 <= lVar8) {
            return;
          }
        } while( true );
      }
    }
    else if (iVar4 == 0) {
      uVar3 = *(uint *)(param_1 + 0x2dc);
      uVar2 = uVar3 ^ uVar3 << 0xd;
      uVar2 = uVar2 ^ uVar2 >> 0x11;
      *(uint *)(param_1 + 0x2dc) = uVar2 ^ uVar2 << 5;
      uVar5 = Atlas_Gameplay_Kart_KartAIUsablesParametersBurst__GetChance(param_2,0,0);
      uVar6 = /*Atlas.Gameplay.Kart.RaceKartAIUpdateJob$$PassRoll*/ func_0x014d6970(uVar5,(ulong)uVar3 * 10000 >> 0x20);
      if ((uVar6 & 1) != 0) {
        iVar4 = *(int *)(param_1 + 0x17c);
        if (iVar4 < 1) {
          return;
        }
        lVar7 = 0;
        lVar8 = 0;
        fVar9 = *(float *)(param_2 + 8);
        do {
          pfVar1 = (float *)(*(long *)(param_1 + 0x1c8) + lVar7);
          fVar21 = *pfVar1;
          fVar22 = pfVar1[1];
          fVar20 = pfVar1[2];
          fVar19 = pfVar1[3];
          fVar10 = fVar15 - fVar21;
          fVar12 = fVar16 - fVar22;
          fVar13 = fVar17 - fVar20;
          fVar14 = fVar18 - fVar19;
          if (fVar14 * fVar14 + fVar13 * fVar13 + fVar10 * fVar10 + fVar12 * fVar12 <= fVar9 * fVar9
             ) {
            if (cRam0000000003ca34fc == '\0') {
              func_0x00f78a20(0x3d232c0);
              cRam0000000003ca34fc = '\x01';
            }
            if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            fVar21 = fVar21 - fVar15;
            fVar22 = fVar22 - fVar16;
            fVar20 = fVar20 - fVar17;
            fVar19 = fVar19 - fVar18;
            fVar10 = 1.0 / SQRT(fVar19 * fVar19 +
                                fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22);
            if (*(float *)(param_2 + 0x5c) <
                fVar19 * fVar10 * *(float *)(param_1 + 0xf4) +
                fVar20 * fVar10 * *(float *)(param_1 + 0xf0) +
                fVar21 * fVar10 * *(float *)(param_1 + 0xe8) +
                fVar22 * fVar10 * *(float *)(param_1 + 0xec)) {
              *(undefined1 *)(param_3 + 0x8a) = 1;
              uVar11 = *(undefined4 *)(param_2 + 0x10);
              goto code_r0x014d63e0;
            }
            iVar4 = *(int *)(param_1 + 0x17c);
          }
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x10;
          if (iVar4 <= lVar8) {
            return;
          }
        } while( true );
      }
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x2dc);
      uVar2 = uVar3 ^ uVar3 << 0xd;
      uVar2 = uVar2 ^ uVar2 >> 0x11;
      *(uint *)(param_1 + 0x2dc) = uVar2 ^ uVar2 << 5;
      uVar5 = Atlas_Gameplay_Kart_KartAIUsablesParametersBurst__GetChance(param_2,iVar4,0);
      iVar4 = /*Atlas.Gameplay.Kart.RaceKartAIUpdateJob$$PassRoll*/ func_0x014d6970(uVar5,(ulong)uVar3 * 10000 >> 0x20);
      if (iVar4 != 0) {
        *(undefined1 *)(param_3 + 0x8a) = 1;
      }
    }
    uVar11 = Atlas_Gameplay_Kart_KartAIUsablesParametersBurst__GetUseInterval
                       (param_2,*(undefined4 *)(param_1 + 0x178),0);
  }
code_r0x014d63e0:
  *(undefined4 *)(param_3 + 0x8c) = uVar11;
  return;
}



// ============================================================
// RVA: 0x14d6438 | Atlas.Gameplay.Kart.RaceKartAIUpdateJob.TryHopBoost
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAIUpdateJob__TryHopBoost(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xfa) == '\0') {
    cVar1 = *(char *)(param_1 + 0x100);
    if ((((*(char *)(param_1 + 0x101) != '\0' && cVar1 != '\0') &&
         (*(char *)(param_2 + 0x30) == '\0')) &&
        (iVar2 = /*Atlas.Gameplay.Kart.RaceKartAIUpdateJob$$PassRoll*/ func_0x014d6970((int)param_1,*(undefined4 *)(param_1 + 0x164)), iVar2 != 0)) &&
       ((*(undefined1 *)(param_2 + 0x88) = 1, *(char *)(param_2 + 0x89) != '\0' &&
        (iVar2 = /*Atlas.Gameplay.Kart.RaceKartAIUpdateJob$$PassRoll*/ func_0x014d6970(*(undefined4 *)(param_1 + 0x108),iVar2,
                                 *(undefined4 *)(param_1 + 0x168)), iVar2 != 0)))) {
      *(undefined1 *)(param_2 + 0x89) = 0;
    }
    *(char *)(param_2 + 0x30) = cVar1;
  }
  return;
}



// ============================================================
// RVA: 0x14d64b8 | Atlas.Gameplay.Kart.RaceKartAIUpdateJob.ApplyHoppingUsables
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAIUpdateJob__ApplyHoppingUsables
               (long param_1,long param_2,long param_3)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar5 = (int)param_1;
  if (*(char *)(param_1 + 0x16c) == '\0') {
    iVar7 = *(int *)(param_1 + 0x1d8);
    if (0 < iVar7) {
      uVar6 = 0;
      lVar8 = *(long *)(param_1 + 0x198);
      uVar9 = *(undefined4 *)(param_2 + 0xc);
      do {
        iVar5 = /*Atlas.Gameplay.Kart.RaceKartAIUpdateJob$$PassRoll*/ func_0x014d6970(uVar9,iVar5,*(undefined4 *)(lVar8 + uVar6 * 4));
        if (iVar5 != 0) {
          pfVar2 = (float *)(*(long *)(param_1 + 0x1a8) + uVar6 * 0x10);
          fVar10 = *(float *)(param_1 + 0xb8) - *pfVar2;
          fVar11 = *(float *)(param_1 + 0xbc) - pfVar2[1];
          fVar12 = *(float *)(param_1 + 0xc0) - pfVar2[2];
          fVar13 = *(float *)(param_1 + 0xc4) - pfVar2[3];
          fVar10 = fVar13 * fVar13 + fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11;
          bVar4 = true;
          if ((fVar10 <= 30.0) && (bVar4 = false, !NAN(fVar10))) {
            bVar4 = fVar10 < 24.0;
          }
          if (!bVar4) {
            pfVar3 = (float *)(*(long *)(param_1 + 0x1b8) + uVar6 * 0x10);
            if ((pfVar2[3] - *(float *)(param_1 + 0xc4)) * pfVar3[3] +
                (pfVar2[2] - *(float *)(param_1 + 0xc0)) * pfVar3[2] +
                (*pfVar2 - *(float *)(param_1 + 0xb8)) * *pfVar3 +
                (pfVar2[1] - *(float *)(param_1 + 0xbc)) * pfVar3[1] < 0.0) {
              *(undefined2 *)(param_3 + 0x88) = 1;
              break;
            }
            if (*(char *)(param_3 + 0x88) != '\0') break;
          }
        }
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulong)uVar1;
      } while ((int)uVar1 < iVar7);
    }
    if ((*(char *)(param_3 + 0x88) == '\0') &&
       (fVar10 = *(float *)(param_1 + 0x10c), (float)iVar7 < fVar10)) {
      lVar8 = *(long *)(param_1 + 0x198);
      uVar9 = *(undefined4 *)(param_2 + 0x60);
      do {
        iVar5 = /*Atlas.Gameplay.Kart.RaceKartAIUpdateJob$$PassRoll*/ func_0x014d6970(uVar9,iVar5,*(undefined4 *)(lVar8 + (long)iVar7 * 4));
        if (iVar5 != 0) {
          pfVar2 = (float *)(*(long *)(param_1 + 0x1a8) + (long)iVar7 * 0x10);
          fVar11 = *(float *)(param_1 + 0xb8) - *pfVar2;
          fVar12 = *(float *)(param_1 + 0xbc) - pfVar2[1];
          fVar13 = *(float *)(param_1 + 0xc0) - pfVar2[2];
          fVar14 = *(float *)(param_1 + 0xc4) - pfVar2[3];
          fVar11 = fVar14 * fVar14 + fVar13 * fVar13 + fVar11 * fVar11 + fVar12 * fVar12;
          bVar4 = true;
          if ((fVar11 <= 30.0) && (bVar4 = false, !NAN(fVar11))) {
            bVar4 = fVar11 < 24.0;
          }
          if ((!bVar4) &&
             (0.0 < (pfVar2[3] - *(float *)(param_1 + 0xc4)) * *(float *)(param_1 + 0xf4) +
                    (pfVar2[2] - *(float *)(param_1 + 0xc0)) * *(float *)(param_1 + 0xf0) +
                    (*pfVar2 - *(float *)(param_1 + 0xb8)) * *(float *)(param_1 + 0xe8) +
                    (pfVar2[1] - *(float *)(param_1 + 0xbc)) * *(float *)(param_1 + 0xec))) {
            *(undefined2 *)(param_3 + 0x88) = 1;
            return;
          }
        }
        iVar7 = iVar7 + 1;
      } while ((float)iVar7 < fVar10);
    }
  }
  return;
}



// ============================================================
// RVA: 0x14d66d0 | Atlas.Gameplay.Kart.RaceKartAIUpdateJob.CheckReroute
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAIUpdateJob__CheckReroute(float param_1,long param_2,long param_3)

{
  if (*(char *)(param_3 + 0x95) == '\0') {
    if (*(int *)(param_3 + 0xac) < 1) {
      param_1 = 0.0;
    }
    else {
      param_1 = *(float *)(param_3 + 0xb0) + param_1;
    }
    *(float *)(param_3 + 0xb0) = param_1;
    if (*(float *)(param_2 + 0x18c) < param_1) {
      *(undefined1 *)(param_3 + 0x95) = 1;
      *(undefined8 *)(param_3 + 0x44) = *(undefined8 *)(param_3 + 0xa4);
      *(undefined8 *)(param_3 + 0x3c) = *(undefined8 *)(param_3 + 0x9c);
      *(undefined8 *)(param_3 + 0xc) = 0xffffffffffffffff;
      return;
    }
  }
  return;
}



// ============================================================
// RVA: 0x14d6724 | Atlas.Gameplay.Kart.RaceKartAIUpdateJob.CheckForStuckAI
// ============================================================

void Atlas_Gameplay_Kart_RaceKartAIUpdateJob__CheckForStuckAI
               (float param_1,long param_2,int *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb4ba8 & 1) == 0) {
    func_0x00f78a20(0x3d24090);
    bRam0000000003eb4ba8 = 1;
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  if (*(char *)(param_2 + 0x180) == '\0') {
    param_3[0x26] = 0;
  }
  else {
    fVar3 = 0.0;
    if (*(float *)(param_2 + 0xb4) < *(float *)(param_2 + 0x184)) {
      fVar3 = (float)param_3[0x26] + param_1;
    }
    param_3[0x26] = (int)fVar3;
    if (*(float *)(param_2 + 0x188) < fVar3) {
      param_3[0x26] = 0;
      *(undefined1 *)(param_3 + 0x17) = 1;
      lVar1 = (long)*(int *)(*(long *)(param_2 + 0x1e0) + (long)param_3[1] * 0x34 + 0x14);
      param_3[2] = *(int *)(*(long *)(param_2 + 0x200) + lVar1 * 4);
      iVar4 = *(int *)(*(long *)(param_2 + 0x220) + lVar1 * 4);
      *param_3 = iVar4;
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x1f0) + (long)iVar4 * 0x20);
      uStack_c8 = puVar2[1];
      uStack_d0 = *puVar2;
      uStack_b8 = puVar2[3];
      uStack_c0 = puVar2[2];
      iVar4 = param_3[9];
      if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Atlas.Gameplay.RaceSplineBurstHelpers$$TryGetDistanceAlong*/ func_0x014d992c(iVar4,param_2 + 0x1e0,&uStack_d0,&uStack_a8,(long)&uStack_a0 + 4,0);
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x250) + (long)uStack_a0._4_4_ * 0x70);
      iVar4 = *(int *)(puVar2 + 1);
      fVar3 = *(float *)(puVar2 + 4);
      fVar5 = *(float *)((long)puVar2 + 0x24);
      fVar6 = *(float *)(puVar2 + 5);
      fVar7 = *(float *)(puVar2 + 8);
      fVar8 = *(float *)((long)puVar2 + 0x44);
      fVar9 = *(float *)(puVar2 + 9);
      *(undefined8 *)(param_3 + 0x18) = *puVar2;
      param_3[0x1a] = iVar4;
      if (cRam0000000003ca34fc == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca34fc = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fStack_94 = fVar3 * fVar9 - fVar6 * fVar7;
      fStack_98 = fVar6 * fVar8 - fVar5 * fVar9;
      fStack_90 = fVar5 * fVar7 - fVar3 * fVar8;
      fVar7 = 1.0 / SQRT(fStack_90 * fStack_90 + fStack_98 * fStack_98 + fStack_94 * fStack_94);
      fStack_98 = fStack_98 * fVar7;
      fStack_94 = fStack_94 * fVar7;
      fStack_90 = fStack_90 * fVar7;
      fStack_84 = fVar3 * fStack_94 - fVar5 * fStack_98;
      fStack_8c = fVar5 * fStack_90 - fVar6 * fStack_94;
      fStack_88 = fVar6 * fStack_98 - fVar3 * fStack_90;
      uStack_70 = 0;
      uStack_68 = 0;
      fStack_80 = fVar3;
      fStack_7c = fVar5;
      fStack_78 = fVar6;
      /*Unity.Mathematics.quaternion$$.ctor*/ func_0x030c5a04(&uStack_70,&fStack_98,0);
      *(undefined8 *)(param_3 + 0x1d) = uStack_68;
      *(undefined8 *)(param_3 + 0x1b) = uStack_70;
    }
  }
  return;
}



// ============================================================
// RVA: 0x14d6970 | Atlas.Gameplay.Kart.RaceKartAIUpdateJob.PassRoll
// ============================================================

bool Atlas_Gameplay_Kart_RaceKartAIUpdateJob__PassRoll(float param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  
  param_1 = param_1 * 100.0;
  fVar1 = -param_1;
  if (param_1 != INFINITY) {
    fVar1 = param_1;
  }
  return param_3 < (int)fVar1;
}



// ============================================================
// RVA: 0x14d69a4 | Atlas.Gameplay.Kart.RaceKartAIUpdateJob.IsDriftingStateRequirementsMet
// ============================================================

bool Atlas_Gameplay_Kart_RaceKartAIUpdateJob__IsDriftingStateRequirementsMet
               (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  return param_1 < ABS(param_3) && param_2 * param_5 < param_4;
}



