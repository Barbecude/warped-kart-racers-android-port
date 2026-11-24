// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.RaceSplineBurstHelpers

// ============================================================
// RVA: 0x14d8710 | Atlas.Gameplay.RaceSplineBurstHelpers.GetTrackCoords
// ============================================================

undefined4
Atlas_Gameplay_RaceSplineBurstHelpers__GetTrackCoords
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,long param_5,
          int *param_6,uint *param_7,int *param_8,uint *param_9,int *param_10,int *param_11,
          undefined4 *param_12,undefined4 *param_13,float *param_14,float *param_15,
          undefined8 *param_16)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  uStack_a8 = param_1;
  uStack_a4 = param_2;
  uStack_a0 = param_3;
  uStack_9c = param_4;
  if ((bRam0000000003eb4bb3 & 1) == 0) {
    func_0x00f78a20(0x3d24090);
    func_0x00f78a20(0x3d265d0);
    func_0x00f78a20(0x3d265e8);
    bRam0000000003eb4bb3 = 1;
  }
  uVar5 = **(undefined4 **)(/*Unity.Mathematics.float2_TypeInfo*/ lRam0000000003d265d0 + 0xb8);
  uStack_b0 = 0x7f7fffff;
  uStack_ac = 0x7f7fffff;
  uVar4 = **(undefined8 **)(/*Unity.Mathematics.float4_TypeInfo*/ lRam0000000003d265e8 + 0xb8);
  param_16[1] = (*(undefined8 **)(/*Unity.Mathematics.float4_TypeInfo*/ lRam0000000003d265e8 + 0xb8))[1];
  *param_16 = uVar4;
  *param_11 = *param_8;
  *param_9 = 0xffffffff;
  *param_10 = -1;
  *param_12 = 0xffffffff;
  *param_13 = 0xffffffff;
  *param_14 = 0.0;
  *param_15 = 0.0;
  if (*param_8 < 0) {
    if (((int)*param_7 < 0) || (iVar2 = *param_6, iVar2 < 0)) {
      if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*Atlas.Gameplay.RaceSplineBurstHelpers$$FindClosestKnot*/ func_0x014d9298(param_1,param_2,param_3,param_4,param_5);
      if ((int)uVar3 < 0) {
        return uVar5;
      }
      if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
    }
    else {
      if (((*(ushort *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Atlas.Gameplay.RaceSplineBurstHelpers$$FindClosestPolylineFromKnot*/ func_0x014d8ee4(param_5,iVar2,&uStack_a8,&uStack_ac,param_11,param_9,param_10,param_12,
                      param_13,param_14,&uStack_b0,param_16);
      uVar3 = (ulong)*param_7;
    }
    /*Atlas.Gameplay.RaceSplineBurstHelpers$$FindClosestPolylineFromKnot*/ func_0x014d8ee4(param_5,uVar3,&uStack_a8,&uStack_ac,param_11,param_9,param_10,param_12,param_13,
                    param_14,&uStack_b0,param_16);
  }
  else {
    *param_10 = *param_6;
    *param_9 = *param_7;
    puVar1 = (undefined8 *)(*(long *)(param_5 + 0x10) + (long)*param_8 * 0x20);
    uStack_c8 = puVar1[1];
    uStack_d0 = *puVar1;
    uStack_b8 = puVar1[3];
    uStack_c0 = puVar1[2];
    if (((*(byte *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    /*Atlas.Gameplay.RaceSplineBurstHelpers$$TryGetClosestPoint*/ func_0x014d8b08(param_1,param_2,param_3,param_4,param_5,&uStack_d0,param_16,&uStack_ac,param_14,
                    param_12,param_13);
  }
  *param_15 = *(float *)(*(long *)(param_5 + 0x10) + (long)*param_11 * 0x20 + 8) - *param_14;
  return uStack_ac;
}



// ============================================================
// RVA: 0x14d8b08 | Atlas.Gameplay.RaceSplineBurstHelpers.TryGetClosestPoint
// ============================================================

undefined8
Atlas_Gameplay_RaceSplineBurstHelpers__TryGetClosestPoint
          (float param_1,float param_2,float param_3,float param_4,long param_5,long param_6,
          float *param_7,float *param_8,float *param_9,int *param_10,int *param_11)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_ac;
  
  if ((bRam0000000003eb4bb4 & 1) == 0) {
    func_0x00f78a20(0x3d232d8);
    bRam0000000003eb4bb4 = 1;
  }
  iVar3 = *(int *)(param_6 + 0xc);
  uVar4 = (ulong)iVar3;
  pfVar2 = (float *)(*(long *)(param_5 + 0x70) + uVar4 * 0x70);
  fStack_c0 = *pfVar2;
  fStack_c4 = pfVar2[1];
  fStack_c8 = pfVar2[2];
  fStack_cc = pfVar2[3];
  uVar1 = iVar3 + 1;
  if ((int)uVar1 < *(int *)(param_6 + 0x10)) {
    fStack_ac = 3.4028235e+38;
    do {
      if (((*(ushort *)(/*Atlas.Maths.Math4d_TypeInfo*/ lRam0000000003d232d8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Maths.Math4d_TypeInfo*/ lRam0000000003d232d8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar6 = param_2;
      fVar17 = param_3;
      fVar7 = param_4;
      fVar5 = (float)/*Atlas.Maths.Math4d$$NearestPointOnLineSegment*/ func_0x01493768(param_1,0);
      fVar8 = (fVar6 - param_2) * 4.0;
      fVar8 = (fVar7 - param_4) * (fVar7 - param_4) +
              (fVar17 - param_3) * (fVar17 - param_3) +
              (fVar5 - param_1) * (fVar5 - param_1) + fVar8 * fVar8;
      if (fVar8 < fStack_ac) {
        uVar4 = (ulong)uVar1;
        fStack_cc = fVar7;
        fStack_c8 = fVar17;
        fStack_c4 = fVar6;
        fStack_c0 = fVar5;
        fStack_ac = fVar8;
      }
      iVar3 = (int)uVar4;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < *(int *)(param_6 + 0x10));
  }
  *param_10 = iVar3 + -1;
  *param_11 = iVar3;
  pfVar2 = (float *)(*(long *)(param_5 + 0x70) + (long)*param_10 * 0x70);
  fVar6 = *pfVar2;
  fVar7 = pfVar2[1];
  fVar5 = pfVar2[2];
  fVar8 = pfVar2[3];
  fVar15 = pfVar2[8];
  fVar16 = pfVar2[9];
  fVar14 = pfVar2[10];
  fVar13 = pfVar2[0xb];
  fVar12 = pfVar2[0xc];
  fVar11 = pfVar2[0xd];
  fVar10 = pfVar2[0xe];
  fVar9 = pfVar2[0xf];
  fVar17 = pfVar2[0x16];
  if (cRam0000000003ca34fc == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca34fc = '\x01';
  }
  fVar9 = (param_4 - fVar8) * fVar9 +
          (param_3 - fVar5) * fVar10 + (param_1 - fVar6) * fVar12 + (param_2 - fVar7) * fVar11;
  fVar10 = (fStack_c4 - param_2) * 4.0;
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar11 = 1.0;
  if (fVar9 == 0.0 || 0.0 > fVar9) {
    fVar11 = 0.0;
  }
  fVar12 = 1.0;
  if (0.0 <= fVar9) {
    fVar12 = 0.0;
  }
  *param_8 = SQRT((fStack_cc - param_4) * (fStack_cc - param_4) +
                  (fStack_c8 - param_3) * (fStack_c8 - param_3) +
                  (fStack_c0 - param_1) * (fStack_c0 - param_1) + fVar10 * fVar10) *
             (fVar11 - fVar12);
  fVar17 = (param_4 - fVar8) * fVar13 +
           (param_3 - fVar5) * fVar14 + (param_1 - fVar6) * fVar15 + (param_2 - fVar7) * fVar16 +
           fVar17;
  *param_9 = fVar17;
  if ((*(char *)(param_6 + 0x18) != '\0') && (*(float *)(param_6 + 8) < fVar17)) {
    *param_9 = fVar17 - *(float *)(param_6 + 8);
  }
  *param_7 = fStack_c0;
  param_7[1] = fStack_c4;
  param_7[2] = fStack_c8;
  param_7[3] = fStack_cc;
  return 1;
}



// ============================================================
// RVA: 0x14d8ee4 | Atlas.Gameplay.RaceSplineBurstHelpers.FindClosestPolylineFromKnot
// ============================================================

void Atlas_Gameplay_RaceSplineBurstHelpers__FindClosestPolylineFromKnot
               (long *param_1,uint param_2,undefined4 *param_3,float *param_4,int *param_5,
               uint *param_6,uint *param_7,undefined4 *param_8,undefined4 *param_9,
               undefined4 *param_10,float *param_11,undefined8 *param_12)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
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
  
  if ((bRam0000000003eb4bb5 & 1) == 0) {
    func_0x00f78a20(0x3d24090);
    bRam0000000003eb4bb5 = 1;
  }
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[1])) {
    lVar10 = *param_1 + (ulong)param_2 * 0x34;
    iVar2 = *(int *)(lVar10 + 0x14);
    iVar9 = *(int *)(lVar10 + 0x18);
    iVar3 = *(int *)(lVar10 + 0x1c);
    iVar4 = *(int *)(lVar10 + 0x20);
    if (iVar2 < iVar9) {
      lVar10 = 0;
      bVar6 = false;
      do {
        iVar5 = *(int *)(param_1[8] + (long)iVar2 * 4 + lVar10 * 4);
        puVar1 = (undefined8 *)(param_1[2] + (long)iVar5 * 0x20);
        uStack_c8 = puVar1[1];
        uStack_d0 = *puVar1;
        uStack_b8 = puVar1[3];
        uStack_c0 = puVar1[2];
        uVar11 = *param_3;
        uVar12 = param_3[1];
        uVar14 = param_3[2];
        uVar15 = param_3[3];
        if (((*(byte *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        Atlas_Gameplay_RaceSplineBurstHelpers__TryGetClosestPoint
                  (uVar11,uVar12,uVar14,uVar15,param_1,&uStack_d0,&uStack_f0,&uStack_d8,
                   (long)&uStack_d8 + 4,(long)&uStack_e0 + 4,&uStack_e0);
        bVar6 = (bool)(lVar10 == 0 | bVar6);
        fVar13 = -6.0;
        if (lVar10 != 0) {
          fVar13 = 0.0;
        }
        fVar7 = (float)uStack_d8;
        fVar13 = fVar13 + ABS((float)uStack_d8);
        iVar8 = /*System.Single$$IsNaN*/ func_0x029ba610(0,0);
        if (iVar8 == 0 && fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        if (((lVar10 != 0) || (bVar6)) && (fVar13 < ABS(*param_11))) {
          *param_11 = fVar13;
          *param_4 = fVar7;
          *param_5 = iVar5;
          *param_8 = uStack_e0._4_4_;
          *param_9 = (undefined4)uStack_e0;
          *param_10 = uStack_d8._4_4_;
          *param_6 = param_2;
          *param_7 = *(uint *)(param_1[4] + (long)iVar2 * 4 + lVar10 * 4);
          param_12[1] = uStack_e8;
          *param_12 = uStack_f0;
        }
        lVar10 = lVar10 + 1;
      } while (iVar9 - iVar2 != (int)lVar10);
    }
    if (iVar3 < iVar4) {
      lVar10 = 0;
      bVar6 = false;
      do {
        iVar2 = *(int *)(param_1[0xc] + (long)iVar3 * 4 + lVar10 * 4);
        puVar1 = (undefined8 *)(param_1[2] + (long)iVar2 * 0x20);
        uStack_108 = puVar1[1];
        uStack_110 = *puVar1;
        uStack_f8 = puVar1[3];
        uStack_100 = puVar1[2];
        uVar11 = *param_3;
        uVar12 = param_3[1];
        uVar14 = param_3[2];
        uVar15 = param_3[3];
        if (((*(byte *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        Atlas_Gameplay_RaceSplineBurstHelpers__TryGetClosestPoint
                  (uVar11,uVar12,uVar14,uVar15,param_1,&uStack_110,&uStack_130,&uStack_118,
                   (long)&uStack_118 + 4,(long)&uStack_120 + 4,&uStack_120);
        bVar6 = (bool)(lVar10 == 0 | bVar6);
        fVar13 = -6.0;
        if (lVar10 != 0) {
          fVar13 = 6.0;
        }
        fVar7 = (float)uStack_118;
        fVar13 = fVar13 + ABS((float)uStack_118);
        iVar9 = /*System.Single$$IsNaN*/ func_0x029ba610(0,0);
        if (iVar9 == 0 && fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        if (((lVar10 != 0) || (bVar6)) && (fVar13 < ABS(*param_11))) {
          *param_11 = fVar13;
          *param_4 = fVar7;
          *param_5 = iVar2;
          *param_8 = uStack_120._4_4_;
          *param_9 = (undefined4)uStack_120;
          *param_10 = uStack_118._4_4_;
          *param_6 = *(uint *)(param_1[10] + (long)iVar3 * 4 + lVar10 * 4);
          *param_7 = param_2;
          param_12[1] = uStack_128;
          *param_12 = uStack_130;
        }
        lVar10 = lVar10 + 1;
      } while (iVar4 - iVar3 != (int)lVar10);
    }
  }
  return;
}



// ============================================================
// RVA: 0x14d9298 | Atlas.Gameplay.RaceSplineBurstHelpers.FindClosestKnot
// ============================================================

int Atlas_Gameplay_RaceSplineBurstHelpers__FindClosestKnot
              (float param_1,float param_2,float param_3,float param_4,undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  undefined1 auStack_f8 [4];
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam0000000003eb4bb6 & 1) == 0) {
    func_0x00f78a20(0x3d32df8);
    func_0x00f78a20(0x3d32e00);
    func_0x00f78a20(0x3d32e08);
    func_0x00f78a20(0x3d3e310);
    bRam0000000003eb4bb6 = 1;
  }
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b8 = param_5[1];
  uStack_c0 = *param_5;
  /*Unity.Collections.NativeArray<RaceKnotBurst>$$GetEnumerator*/ func_0x025fe9a0(&uStack_a8,&uStack_c0,uRam0000000003d3e310);
  iVar10 = 0;
  iVar9 = -1;
  fVar4 = 3.4028235e+38;
  while (uVar3 = /*Unity.Collections.NativeArray.Enumerator<RaceKnotBurst>$$MoveNext*/ func_0x01f7159c(&uStack_a8,uRam0000000003d32e00), (uVar3 & 1) != 0) {
    /*Unity.Collections.NativeArray.Enumerator<RaceKnotBurst>$$get_Current*/ func_0x01f715c4(auStack_f8,&uStack_a8,uRam0000000003d32e08);
    lVar5 = (long)iStack_e4;
    fVar12 = (fStack_f0 + (fStack_f0 - param_2) * 4.0) - param_2;
    fVar12 = (fStack_e8 - param_4) * (fStack_e8 - param_4) +
             (fStack_ec - param_3) * (fStack_ec - param_3) +
             (fStack_f4 - param_1) * (fStack_f4 - param_1) + fVar12 * fVar12;
    iVar6 = iVar10;
    if (fVar4 <= fVar12) {
      fVar12 = fVar4;
      iVar6 = iVar9;
    }
    iVar9 = iVar6;
    fVar4 = fVar12;
    if (iStack_e4 < iStack_e0) {
      do {
        lVar7 = param_5[2] + (long)*(int *)(param_5[8] + lVar5 * 4) * 0x20;
        iVar6 = *(int *)(lVar7 + 0xc);
        iVar1 = *(int *)(lVar7 + 0x14);
        uVar11 = 0xc;
        if (iVar1 < 0xd) {
          uVar11 = 2;
        }
        iVar2 = 0;
        if (uVar11 != 0) {
          iVar2 = iVar1 / (int)uVar11;
        }
        if (iVar2 < 2) {
          iVar2 = 1;
        }
        lVar7 = (ulong)uVar11 - 1;
        do {
          iVar6 = iVar6 + iVar2;
          pfVar8 = (float *)(param_5[0xe] + (long)iVar6 * 0x70);
          fVar12 = (pfVar8[1] + (pfVar8[1] - param_2) * 4.0) - param_2;
          fVar12 = (pfVar8[3] - param_4) * (pfVar8[3] - param_4) +
                   (pfVar8[2] - param_3) * (pfVar8[2] - param_3) +
                   (*pfVar8 - param_1) * (*pfVar8 - param_1) + fVar12 * fVar12;
          iVar1 = iVar10;
          if (fVar4 <= fVar12) {
            fVar12 = fVar4;
            iVar1 = iVar9;
          }
          iVar9 = iVar1;
          fVar4 = fVar12;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        lVar5 = lVar5 + 1;
      } while (lVar5 != iStack_e0);
    }
    iVar10 = iVar10 + 1;
  }
  /*Unity.Collections.NativeArray.Enumerator<RaceKnotBurst>$$Dispose*/ func_0x01f71598(&uStack_a8,uRam0000000003d32df8);
  return iVar9;
}



// ============================================================
// RVA: 0x14d9510 | Atlas.Gameplay.RaceSplineBurstHelpers.TryGetPointOnTrack
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint Atlas_Gameplay_RaceSplineBurstHelpers__TryGetPointOnTrack
               (float param_1,float param_2,long *param_3,uint *param_4,undefined8 *param_5,
               undefined8 param_6,undefined4 param_7)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_f0;
  int iStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  float fStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  
  if ((bRam0000000003eb4bb7 & 1) == 0) {
    func_0x00f78a20(0x3d24090);
    func_0x00f78a20(0x3d265e8);
    bRam0000000003eb4bb7 = 1;
  }
  fStack_a8 = 0.0;
  uStack_b0 = 0;
  uVar16 = **(undefined8 **)(/*Unity.Mathematics.float4_TypeInfo*/ lRam0000000003d265e8 + 0xb8);
  param_5[1] = (*(undefined8 **)(/*Unity.Mathematics.float4_TypeInfo*/ lRam0000000003d265e8 + 0xb8))[1];
  *param_5 = uVar16;
  uVar6 = param_4[3];
  uVar2 = *param_4;
  if (uVar6 == uVar2) {
    param_4[3] = 0xffffffff;
    param_4[4] = 0xffffffff;
    uVar6 = 0xffffffff;
  }
  if ((int)uVar2 < 0) goto LAB_014d9874;
  lVar9 = param_3[2];
  puVar8 = (undefined8 *)(lVar9 + (ulong)uVar2 * 0x20);
  uStack_88 = puVar8[3];
  fStack_98 = (float)puVar8[1];
  iStack_94 = (int)((ulong)puVar8[1] >> 0x20);
  iStack_a0 = (int)*puVar8;
  uStack_9c = (undefined4)((ulong)*puVar8 >> 0x20);
  iStack_90 = (int)puVar8[2];
  uStack_8c = (undefined4)((ulong)puVar8[2] >> 0x20);
  if (param_1 <= fStack_98) {
    if ((-1 < (int)param_4[4]) && (-1 < (int)uVar6)) {
      piVar1 = (int *)(lVar9 + (ulong)uVar6 * 0x20);
      uStack_f0 = *(undefined8 *)(piVar1 + 1);
      iStack_e8 = (int)*(undefined8 *)(piVar1 + 3);
      uStack_88 = *(undefined8 *)(piVar1 + 6);
      uStack_dc = (undefined4)uStack_88;
      uStack_d8 = (undefined4)((ulong)uStack_88 >> 0x20);
      iStack_e4 = (int)*(undefined8 *)(piVar1 + 4);
      uStack_e0 = (undefined4)((ulong)*(undefined8 *)(piVar1 + 4) >> 0x20);
      if (*piVar1 != iStack_a0) {
        param_1 = 1.0;
      }
      iStack_94 = iStack_e8;
      uStack_9c = (undefined4)uStack_f0;
      fStack_98 = (float)((ulong)uStack_f0 >> 0x20);
      iStack_a0 = *piVar1;
      iStack_90 = iStack_e4;
      uStack_8c = uStack_e0;
    }
  }
  else {
    param_1 = param_1 - fStack_98;
    if ((int)uVar6 < 0) {
      puVar7 = param_4 + 2;
LAB_014d9664:
      uVar6 = *puVar7;
      fVar20 = param_1;
      do {
        param_1 = fVar20;
        puVar8 = (undefined8 *)(*param_3 + (long)(int)uVar6 * 0x34);
        uStack_f0 = *puVar8;
        iStack_e8 = (int)puVar8[1];
        iStack_e4 = (int)((ulong)puVar8[1] >> 0x20);
        uStack_d8 = (undefined4)puVar8[3];
        uStack_d4 = (undefined4)((ulong)puVar8[3] >> 0x20);
        uStack_e0 = (undefined4)puVar8[2];
        uStack_dc = (undefined4)((ulong)puVar8[2] >> 0x20);
        uStack_c8 = puVar8[5];
        uStack_d0 = puVar8[4];
        uStack_c0 = *(undefined4 *)(puVar8 + 6);
        if (((*(byte *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar5 = /*Atlas.Gameplay.RaceSplineBurstHelpers$$GetNextPolylineIndex*/ func_0x014d98a4(param_3,&uStack_f0,param_6,param_7);
        uVar6 = *(uint *)(param_3[4] + (long)iVar5 * 4);
        param_4[4] = uVar6;
        uVar3 = *(uint *)(param_3[8] + (long)iVar5 * 4);
        param_4[3] = uVar3;
        puVar8 = (undefined8 *)(param_3[2] + (long)(int)uVar3 * 0x20);
        uStack_88 = puVar8[3];
        fStack_98 = (float)puVar8[1];
        iStack_94 = (int)((ulong)puVar8[1] >> 0x20);
        iStack_a0 = (int)*puVar8;
        uStack_9c = (undefined4)((ulong)*puVar8 >> 0x20);
        iStack_90 = (int)puVar8[2];
        uStack_8c = (undefined4)((ulong)puVar8[2] >> 0x20);
        fVar20 = param_1 - fStack_98;
      } while (fStack_98 < param_1 - fStack_98);
    }
    else {
      puVar8 = (undefined8 *)(lVar9 + (ulong)uVar6 * 0x20);
      uStack_88 = puVar8[3];
      fStack_98 = (float)puVar8[1];
      iStack_94 = (int)((ulong)puVar8[1] >> 0x20);
      iStack_a0 = (int)*puVar8;
      uStack_9c = (undefined4)((ulong)*puVar8 >> 0x20);
      iStack_90 = (int)puVar8[2];
      uStack_8c = (undefined4)((ulong)puVar8[2] >> 0x20);
      if (fStack_98 < param_1) {
        puVar7 = param_4 + 4;
        goto LAB_014d9664;
      }
    }
    if (fStack_98 < param_1) {
      param_1 = fStack_98;
    }
  }
  iStack_a4 = iStack_94;
  if (((*(byte *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*Atlas.Gameplay.RaceSplineBurstHelpers$$TryGetDistanceAlong*/ func_0x014d992c(param_1,param_3,&iStack_a0,&uStack_b0,&iStack_a4);
  fVar20 = ABS(param_2);
  if (_UNK_033f7d88 < (double)fVar20) {
    iVar5 = iStack_90;
    if (iStack_a4 + 1 < iStack_90) {
      iVar5 = iStack_a4 + 1;
    }
    lVar9 = param_3[0xe] + (long)iStack_a4 * 0x70;
    fVar11 = *(float *)(lVar9 + 0x38);
    lVar10 = param_3[0xe] + (long)iVar5 * 0x70;
    fVar18 = *(float *)(lVar10 + 0x38);
    fVar17 = (param_1 - *(float *)(lVar9 + 0x58)) * *(float *)(lVar10 + 100);
    bVar4 = 0.0 <= param_2;
    fVar19 = *(float *)(lVar9 + 0x54) +
             (*(float *)(lVar10 + 0x54) - *(float *)(lVar9 + 0x54)) * fVar17;
    if (param_2 == 0.0 || !bVar4) {
      fVar19 = *(float *)(lVar9 + 0x50) +
               (*(float *)(lVar10 + 0x50) - *(float *)(lVar9 + 0x50)) * fVar17;
    }
    fVar12 = 1.0;
    fVar15 = fVar12;
    if (param_2 == 0.0 || !bVar4) {
      fVar15 = 0.0;
    }
    if (bVar4) {
      fVar12 = 0.0;
    }
    uVar16 = *(undefined8 *)(lVar10 + 0x30);
    fVar13 = (float)*(undefined8 *)(lVar9 + 0x30);
    fVar14 = (float)((ulong)*(undefined8 *)(lVar9 + 0x30) >> 0x20);
    iVar5 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar20,0);
    if (iVar5 == 0 && fVar20 <= fVar19) {
      fVar19 = fVar20;
    }
    iVar5 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar19,0);
    fVar20 = 0.0;
    if (iVar5 == 0 && 0.0 <= fVar19) {
      fVar20 = fVar19;
    }
    fVar20 = (fVar15 - fVar12) * fVar20;
    uStack_b0 = CONCAT44((float)((ulong)uStack_b0 >> 0x20) +
                         (fVar14 + ((float)((ulong)uVar16 >> 0x20) - fVar14) * fVar17) * fVar20,
                         (float)uStack_b0 + (fVar13 + ((float)uVar16 - fVar13) * fVar17) * fVar20);
    fStack_a8 = fStack_a8 + (fVar11 + (fVar18 - fVar11) * fVar17) * fVar20;
  }
  *param_5 = uStack_b0;
  *(float *)(param_5 + 1) = fStack_a8;
  *(undefined4 *)((long)param_5 + 0xc) = 0x3f800000;
LAB_014d9874:
  return ~uVar2 >> 0x1f;
}



// ============================================================
// RVA: 0x14d98a4 | Atlas.Gameplay.RaceSplineBurstHelpers.GetNextPolylineIndex
// ============================================================

ulong Atlas_Gameplay_RaceSplineBurstHelpers__GetNextPolylineIndex
                (long param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(param_2 + 0x14);
  iVar2 = *(int *)(param_2 + 0x18);
  if ((int)uVar1 < iVar2) {
    uVar5 = 0;
    uVar7 = (long)(int)uVar1;
    do {
      if (*(char *)(*(long *)(param_1 + 0x80) + uVar7) != '\0') {
        return uVar7;
      }
      uVar5 = *(int *)(*(long *)(param_1 + 0x30) + uVar7 * 4) + uVar5;
      uVar7 = uVar7 + 1;
    } while (iVar2 != (int)uVar7);
    if ((param_3 & 1) != 0) {
      lVar4 = 0;
      uVar7 = (ulong)param_4 * (ulong)uVar5 >> 0x20;
      do {
        iVar3 = *(int *)(*(long *)(param_1 + 0x30) + (long)(int)uVar1 * 4 + lVar4 * 4);
        iVar6 = (int)uVar7;
        uVar7 = (ulong)(uint)(iVar6 - iVar3);
        if (iVar6 < iVar3) {
          return (ulong)(uVar1 + (int)lVar4);
        }
        lVar4 = lVar4 + 1;
      } while ((uVar1 - iVar2) + (int)lVar4 != 0);
    }
  }
  return (ulong)uVar1;
}



// ============================================================
// RVA: 0x14d992c | Atlas.Gameplay.RaceSplineBurstHelpers.TryGetDistanceAlong
// ============================================================

undefined8
Atlas_Gameplay_RaceSplineBurstHelpers__TryGetDistanceAlong
          (float param_1,long param_2,long param_3,undefined8 *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar2 = *(int *)(param_3 + 0xc);
  puVar3 = (undefined8 *)(*(long *)(param_2 + 0x70) + (long)iVar2 * 0x70);
  uVar5 = *(undefined4 *)(puVar3 + 1);
  *param_4 = *puVar3;
  *(undefined4 *)(param_4 + 1) = uVar5;
  *param_5 = iVar2;
  iVar2 = iVar2 + -1;
  fVar7 = 0.0;
  do {
    fVar6 = fVar7;
    iVar1 = iVar2 + 2;
    if (*(int *)(param_3 + 0x10) < iVar1) {
      return 1;
    }
    lVar4 = *(long *)(param_2 + 0x70);
    fVar7 = fVar6 + *(float *)(lVar4 + (long)iVar1 * 0x70 + 0x6c);
    iVar2 = iVar2 + 1;
  } while (fVar7 < param_1);
  fVar7 = (param_1 - fVar6) * (1.0 / (fVar7 - fVar6));
  puVar3 = (undefined8 *)(lVar4 + (long)iVar2 * 0x70);
  fVar6 = *(float *)(puVar3 + 1);
  lVar4 = lVar4 + (long)iVar1 * 0x70;
  fVar8 = *(float *)(lVar4 + 0x18);
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  uVar10 = *puVar3;
  *param_4 = CONCAT44((float)((ulong)uVar10 >> 0x20) + (float)((ulong)uVar9 >> 0x20) * fVar7,
                      (float)uVar10 + (float)uVar9 * fVar7);
  *(float *)(param_4 + 1) = fVar6 + fVar7 * fVar8;
  *param_5 = iVar2;
  return 1;
}



// ============================================================
// RVA: 0x14d99e0 | Atlas.Gameplay.RaceSplineBurstHelpers..ctor
// ============================================================

void Atlas_Gameplay_RaceSplineBurstHelpers___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x14d99e8 | Atlas.Gameplay.RaceSplineBurstHelpers..cctor
// ============================================================

void Atlas_Gameplay_RaceSplineBurstHelpers___cctor(void)

{
  if ((bRam0000000003eb4bb8 & 1) == 0) {
    func_0x00f78a20(0x3d24090);
    bRam0000000003eb4bb8 = 1;
  }
  **(undefined4 **)(/*Atlas.Gameplay.RaceSplineBurstHelpers_TypeInfo*/ lRam0000000003d24090 + 0xb8) = 0xd12310cd;
  return;
}



