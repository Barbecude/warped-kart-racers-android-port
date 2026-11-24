// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Lighting.LightVolumeQueryJob

// ============================================================
// RVA: 0x14846d0 | Atlas.Lighting.LightVolumeQueryJob.Execute
// ============================================================

void Atlas_Lighting_LightVolumeQueryJob__Execute(long *param_1)

{
  undefined8 *puVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  float fStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  fStack_e4 = 0.0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  fStack_134 = 0.0;
  if (0 < (int)param_1[6]) {
    lVar3 = 0;
    lVar4 = 0;
    lVar5 = 0;
    do {
      uStack_88 = ((undefined8 *)(*param_1 + lVar3))[1];
      uStack_90 = *(undefined8 *)(*param_1 + lVar3);
      /*Atlas.Lighting.LightVolumeQueryJob$$SampleVolumes*/ func_0x01484844(&uStack_90,param_1 + 4,param_1 + 7,&uStack_e0,&fStack_e4);
      fVar2 = fStack_e4;
      if (1.0 <= fStack_e4) {
        /*Atlas.Lighting.LightVolumeQueryJob$$BlendLightVolumeParams*/ func_0x014849a4(fStack_e4,&uStack_e0);
      }
      else {
        /*Atlas.Lighting.LightVolumeQueryJob$$SampleVolumes*/ func_0x01484844(&uStack_90,param_1 + 2,(long)param_1 + 0x34,&uStack_130,&fStack_134);
        if (1.0 <= fStack_134) {
          /*Atlas.Lighting.LightVolumeQueryJob$$BlendLightVolumeParams*/ func_0x014849a4(&uStack_130);
        }
        else {
          /*Atlas.Lighting.LightVolumeQueryJob$$AddLightVolumeParams*/ func_0x014849d0(1.0 - fStack_134,&uStack_130,(long)param_1 + 0x3c);
        }
        /*Atlas.Lighting.LightVolumeQueryJob$$AddLightVolumeParams*/ func_0x014849d0(1.0 - fVar2,&uStack_e0,&uStack_130);
      }
      puVar1 = (undefined8 *)(param_1[0x10] + lVar4);
      *(undefined4 *)(puVar1 + 8) = uStack_a0;
      puVar1[5] = uStack_b8;
      puVar1[4] = uStack_c0;
      puVar1[7] = uStack_a8;
      puVar1[6] = uStack_b0;
      puVar1[1] = uStack_d8;
      *puVar1 = uStack_e0;
      puVar1[3] = uStack_c8;
      puVar1[2] = uStack_d0;
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x44;
      lVar3 = lVar3 + 0x10;
    } while (lVar5 < (int)param_1[6]);
  }
  return;
}



// ============================================================
// RVA: 0x1484844 | Atlas.Lighting.LightVolumeQueryJob.SampleVolumes
// ============================================================

void Atlas_Lighting_LightVolumeQueryJob__SampleVolumes
               (undefined8 param_1,long *param_2,int *param_3,undefined8 *param_4,float *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  
  *(undefined4 *)(param_4 + 8) = 0;
  param_4[5] = 0;
  param_4[4] = 0;
  param_4[7] = 0;
  param_4[6] = 0;
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  *param_5 = 0.0;
  if (0 < *param_3) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)(*param_2 + lVar3);
      uStack_b8 = puVar1[0xd];
      uStack_c0 = puVar1[0xc];
      uStack_a8 = puVar1[0xf];
      uStack_b0 = puVar1[0xe];
      uStack_98 = puVar1[0x11];
      uStack_a0 = puVar1[0x10];
      fStack_90 = *(float *)(puVar1 + 0x12);
      uStack_f8 = puVar1[5];
      uStack_100 = puVar1[4];
      uStack_e8 = puVar1[7];
      uStack_f0 = puVar1[6];
      uStack_d8 = puVar1[9];
      uStack_e0 = puVar1[8];
      uStack_c8 = puVar1[0xb];
      uStack_d0 = puVar1[10];
      uStack_118 = puVar1[1];
      uStack_120 = *puVar1;
      uStack_108 = puVar1[3];
      uStack_110 = puVar1[2];
      fVar5 = (float)/*Atlas.Lighting.LightVolumeQueryJob$$DistanceInsideVolume*/ func_0x01484a1c(param_1,&uStack_120);
      if (0.0 <= fVar5) {
        fVar5 = fVar5 * fStack_90;
        iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar5,0);
        fVar6 = 1.0;
        if (iVar2 == 0 && fVar5 <= 1.0) {
          fVar6 = fVar5;
        }
        iVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar6,0);
        fVar5 = 0.0;
        if (iVar2 == 0 && 0.0 <= fVar6) {
          fVar5 = fVar6;
        }
        /*Atlas.Lighting.LightVolumeQueryJob$$AddLightVolumeParams*/ func_0x014849d0(fVar5,param_4,&uStack_d0);
        *param_5 = *param_5 + fVar5;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x94;
    } while (lVar4 < *param_3);
  }
  return;
}



// ============================================================
// RVA: 0x14849a4 | Atlas.Lighting.LightVolumeQueryJob.BlendLightVolumeParams
// ============================================================

void Atlas_Lighting_LightVolumeQueryJob__BlendLightVolumeParams(float param_1,undefined8 *param_2)

{
  param_1 = 1.0 / param_1;
  param_2[1] = CONCAT44((float)((ulong)param_2[1] >> 0x20) * param_1,(float)param_2[1] * param_1);
  *param_2 = CONCAT44((float)((ulong)*param_2 >> 0x20) * param_1,(float)*param_2 * param_1);
  param_2[3] = CONCAT44((float)((ulong)param_2[3] >> 0x20) * param_1,(float)param_2[3] * param_1);
  param_2[2] = CONCAT44((float)((ulong)param_2[2] >> 0x20) * param_1,(float)param_2[2] * param_1);
  param_2[5] = CONCAT44((float)((ulong)param_2[5] >> 0x20) * param_1,(float)param_2[5] * param_1);
  param_2[4] = CONCAT44((float)((ulong)param_2[4] >> 0x20) * param_1,(float)param_2[4] * param_1);
  param_2[7] = CONCAT44((float)((ulong)param_2[7] >> 0x20) * param_1,(float)param_2[7] * param_1);
  param_2[6] = CONCAT44((float)((ulong)param_2[6] >> 0x20) * param_1,(float)param_2[6] * param_1);
  return;
}



// ============================================================
// RVA: 0x14849d0 | Atlas.Lighting.LightVolumeQueryJob.AddLightVolumeParams
// ============================================================

void Atlas_Lighting_LightVolumeQueryJob__AddLightVolumeParams
               (float param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  param_2[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) * param_1 +
                        (float)((ulong)param_2[1] >> 0x20),
                        (float)param_3[1] * param_1 + (float)param_2[1]);
  *param_2 = CONCAT44((float)((ulong)uVar1 >> 0x20) * param_1 + (float)((ulong)*param_2 >> 0x20),
                      (float)uVar1 * param_1 + (float)*param_2);
  uVar1 = param_3[2];
  param_2[3] = CONCAT44((float)((ulong)param_3[3] >> 0x20) * param_1 +
                        (float)((ulong)param_2[3] >> 0x20),
                        (float)param_3[3] * param_1 + (float)param_2[3]);
  param_2[2] = CONCAT44((float)((ulong)uVar1 >> 0x20) * param_1 + (float)((ulong)param_2[2] >> 0x20)
                        ,(float)uVar1 * param_1 + (float)param_2[2]);
  uVar1 = param_3[4];
  param_2[5] = CONCAT44((float)((ulong)param_3[5] >> 0x20) * param_1 +
                        (float)((ulong)param_2[5] >> 0x20),
                        (float)param_3[5] * param_1 + (float)param_2[5]);
  param_2[4] = CONCAT44((float)((ulong)uVar1 >> 0x20) * param_1 + (float)((ulong)param_2[4] >> 0x20)
                        ,(float)uVar1 * param_1 + (float)param_2[4]);
  uVar1 = param_3[6];
  param_2[7] = CONCAT44((float)((ulong)param_3[7] >> 0x20) * param_1 +
                        (float)((ulong)param_2[7] >> 0x20),
                        (float)param_3[7] * param_1 + (float)param_2[7]);
  param_2[6] = CONCAT44((float)((ulong)uVar1 >> 0x20) * param_1 + (float)((ulong)param_2[6] >> 0x20)
                        ,(float)uVar1 * param_1 + (float)param_2[6]);
  return;
}



// ============================================================
// RVA: 0x1484a1c | Atlas.Lighting.LightVolumeQueryJob.DistanceInsideVolume
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Atlas_Lighting_LightVolumeQueryJob__DistanceInsideVolume
                (undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  ulong uVar6;
  float fVar8;
  float fVar9;
  
  if (*(float *)((long)param_2 + 0x1c) == 0.0) {
    fVar4 = (float)*param_1 - (float)*param_2;
    fVar7 = (float)((ulong)*param_1 >> 0x20) - (float)((ulong)*param_2 >> 0x20);
    fVar8 = (float)param_1[1] - (float)param_2[1];
    fVar9 = (float)((ulong)param_1[1] >> 0x20) - (float)((ulong)param_2[1] >> 0x20);
    fVar5 = *(float *)((long)param_2 + 0x14) -
            ABS(fVar9 * (float)((ulong)param_2[7] >> 0x20) +
                fVar8 * (float)param_2[7] +
                fVar4 * (float)param_2[6] + fVar7 * (float)((ulong)param_2[6] >> 0x20));
    uVar6 = CONCAT44(fVar9 * (float)((ulong)param_2[9] >> 0x20) +
                     fVar8 * (float)param_2[9] +
                     fVar4 * (float)param_2[8] + fVar7 * (float)((ulong)param_2[8] >> 0x20),
                     fVar9 * (float)((ulong)param_2[5] >> 0x20) +
                     fVar8 * (float)param_2[5] +
                     fVar4 * (float)param_2[4] + fVar7 * (float)((ulong)param_2[4] >> 0x20)) &
            0x7fffffff7fffffff;
    fVar4 = *(float *)(param_2 + 2) - (float)uVar6;
    fVar7 = *(float *)(param_2 + 3) - (float)(uVar6 >> 0x20);
    bVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(0);
    bVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(0);
    uVar6 = CONCAT44(0x7f7fffff,fVar5);
    uVar6 = uVar6 ^ (uVar6 ^ CONCAT44(fVar7,fVar4)) &
                    CONCAT44(-(uint)((int)((uint)(byte)(-(fVar7 < 3.4028235e+38) | bVar2) << 0x1f) <
                                    0),
                             -(uint)((int)((uint)(byte)(-(fVar4 < fVar5) | bVar1) << 0x1f) < 0));
    fVar5 = (float)(uVar6 >> 0x20);
    iVar3 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar5,0);
    fVar4 = (float)uVar6;
    if (iVar3 == 0 && fVar5 <= fVar4) {
      fVar4 = fVar5;
    }
    return fVar4;
  }
  fVar4 = (float)*param_1 - (float)*param_2;
  fVar5 = (float)((ulong)*param_1 >> 0x20) - (float)((ulong)*param_2 >> 0x20);
  fVar7 = (float)param_1[1] - (float)param_2[1];
  fVar8 = (float)((ulong)param_1[1] >> 0x20) - (float)((ulong)param_2[1] >> 0x20);
  fVar5 = fVar8 * fVar8 + fVar7 * fVar7 + fVar4 * fVar4 + fVar5 * fVar5;
  fVar4 = _UNK_033f83cc;
  if (fVar5 <= *(float *)((long)param_2 + 0x14)) {
    if (cRam0000000003ca34fc == '\0') {
      func_0x00f78a20(0x3d232c0);
      cRam0000000003ca34fc = '\x01';
    }
    if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    fVar4 = SQRT(fVar5);
  }
  return *(float *)(param_2 + 2) - fVar4;
}



// ============================================================
// RVA: 0x1484a30 | Atlas.Lighting.LightVolumeQueryJob.DistanceInsideCuboidVolume
// ============================================================

float Atlas_Lighting_LightVolumeQueryJob__DistanceInsideCuboidVolume
                (undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  ulong uVar6;
  float fVar8;
  float fVar9;
  
  fVar4 = (float)*param_1 - (float)*param_2;
  fVar7 = (float)((ulong)*param_1 >> 0x20) - (float)((ulong)*param_2 >> 0x20);
  fVar8 = (float)param_1[1] - (float)param_2[1];
  fVar9 = (float)((ulong)param_1[1] >> 0x20) - (float)((ulong)param_2[1] >> 0x20);
  fVar5 = *(float *)((long)param_2 + 0x14) -
          ABS(fVar9 * (float)((ulong)param_2[7] >> 0x20) +
              fVar8 * (float)param_2[7] +
              fVar4 * (float)param_2[6] + fVar7 * (float)((ulong)param_2[6] >> 0x20));
  uVar6 = CONCAT44(fVar9 * (float)((ulong)param_2[9] >> 0x20) +
                   fVar8 * (float)param_2[9] +
                   fVar4 * (float)param_2[8] + fVar7 * (float)((ulong)param_2[8] >> 0x20),
                   fVar9 * (float)((ulong)param_2[5] >> 0x20) +
                   fVar8 * (float)param_2[5] +
                   fVar4 * (float)param_2[4] + fVar7 * (float)((ulong)param_2[4] >> 0x20)) &
          0x7fffffff7fffffff;
  fVar4 = *(float *)(param_2 + 2) - (float)uVar6;
  fVar7 = *(float *)(param_2 + 3) - (float)(uVar6 >> 0x20);
  bVar1 = /*System.Single$$IsNaN*/ func_0x029ba610(0);
  bVar2 = /*System.Single$$IsNaN*/ func_0x029ba610(0);
  uVar6 = CONCAT44(0x7f7fffff,fVar5);
  uVar6 = uVar6 ^ (uVar6 ^ CONCAT44(fVar7,fVar4)) &
                  CONCAT44(-(uint)((int)((uint)(byte)(-(fVar7 < 3.4028235e+38) | bVar2) << 0x1f) < 0
                                  ),-(uint)((int)((uint)(byte)(-(fVar4 < fVar5) | bVar1) << 0x1f) <
                                           0));
  fVar5 = (float)(uVar6 >> 0x20);
  iVar3 = /*System.Single$$IsNaN*/ func_0x029ba610(fVar5,0);
  fVar4 = (float)uVar6;
  if (iVar3 == 0 && fVar5 <= fVar4) {
    fVar4 = fVar5;
  }
  return fVar4;
}



// ============================================================
// RVA: 0x1484b58 | Atlas.Lighting.LightVolumeQueryJob.DistanceInsideSphereVolume
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Atlas_Lighting_LightVolumeQueryJob__DistanceInsideSphereVolume
                (undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)*param_1 - (float)*param_2;
  fVar2 = (float)((ulong)*param_1 >> 0x20) - (float)((ulong)*param_2 >> 0x20);
  fVar3 = (float)param_1[1] - (float)param_2[1];
  fVar4 = (float)((ulong)param_1[1] >> 0x20) - (float)((ulong)param_2[1] >> 0x20);
  fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
  fVar1 = _UNK_033f83cc;
  if (fVar2 <= *(float *)((long)param_2 + 0x14)) {
    if (cRam0000000003ca34fc == '\0') {
      func_0x00f78a20(0x3d232c0);
      cRam0000000003ca34fc = '\x01';
    }
    if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    fVar1 = SQRT(fVar2);
  }
  return *(float *)(param_2 + 2) - fVar1;
}



