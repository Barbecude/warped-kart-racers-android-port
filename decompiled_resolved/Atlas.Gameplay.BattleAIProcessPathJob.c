// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.BattleAIProcessPathJob

// ============================================================
// RVA: 0x15397d8 | Atlas.Gameplay.BattleAIProcessPathJob.Execute
// ============================================================

void Atlas_Gameplay_BattleAIProcessPathJob__Execute(float *param_1)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
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
  float fVar23;
  float fVar24;
  
  fVar6 = param_1[8];
  if ((int)fVar6 < 3) {
    if (0 < (int)fVar6) {
      lVar1 = 0;
      do {
        lVar3 = *(long *)(param_1 + 10);
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 4) + lVar1);
        ((undefined8 *)(lVar3 + lVar1))[1] = ((undefined8 *)(*(long *)(param_1 + 4) + lVar1))[1];
        *(undefined8 *)(lVar3 + lVar1) = uVar10;
        lVar1 = lVar1 + 0x10;
      } while ((ulong)(uint)fVar6 * 0x10 - lVar1 != 0);
    }
  }
  else {
    lVar1 = 0;
    uVar4 = (ulong)((int)fVar6 - 1);
    fVar5 = 1.4013e-45;
    do {
      lVar3 = *(long *)(param_1 + 4);
      pfVar2 = (float *)(lVar3 + lVar1);
      fVar20 = *pfVar2;
      fVar19 = pfVar2[1];
      fVar7 = param_1[1];
      fVar9 = *param_1 - fVar20;
      fVar11 = fVar7 - fVar19;
      uVar10 = *(undefined8 *)(param_1 + 2);
      fVar23 = (float)*(undefined8 *)(pfVar2 + 2);
      fVar13 = (float)uVar10 - fVar23;
      fVar24 = (float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20);
      fVar16 = (float)((ulong)uVar10 >> 0x20) - fVar24;
      if (fVar16 * fVar16 + fVar13 * fVar13 + fVar9 * fVar9 + fVar11 * fVar11 < param_1[9]) {
        pfVar2 = (float *)(*(long *)(param_1 + 10) + lVar1);
        *pfVar2 = *param_1;
        pfVar2[1] = fVar7;
        *(undefined8 *)(pfVar2 + 2) = uVar10;
        fVar6 = fVar5;
        break;
      }
      if (lVar1 == 0) {
        fVar22 = *(float *)(lVar3 + 0x24) - *(float *)(lVar3 + 0x14);
        fVar17 = *(float *)(lVar3 + 0x28) - *(float *)(lVar3 + 0x18);
        fVar7 = *(float *)(lVar3 + 0x10) - fVar20;
        fVar11 = *(float *)(lVar3 + 0x18) - fVar23;
        fVar8 = (*(float *)(lVar3 + 0x14) - fVar19) * 0.0;
        fVar9 = fVar8 - fVar7;
        fVar8 = fVar11 - fVar8;
        fVar7 = fVar7 * 0.0 - fVar11 * 0.0;
        fVar16 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(float *)(lVar3 + 0x20) - *(float *)(lVar3 + 0x10),0);
        fVar11 = fVar7;
        fVar13 = fVar9;
        fVar21 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar8,0);
        if (cRam0000000003ca34fc == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar12 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
        fVar15 = 1.0 / SQRT(fVar12);
        fVar8 = fVar8 * fVar15;
        fVar7 = fVar7 * fVar15;
        fVar9 = fVar9 * fVar15;
        if (fVar12 <= 1.1754944e-38) {
          fVar9 = 0.0;
          fVar7 = 0.0;
          fVar8 = 0.0;
        }
        fVar12 = -3.5;
        if (fVar17 * fVar13 + fVar16 * fVar21 + fVar22 * fVar11 <= 0.0) {
          fVar12 = 3.5;
        }
        fVar9 = fVar12 * fVar9;
        fVar20 = fVar20 + fVar12 * fVar8;
        pfVar2 = *(float **)(param_1 + 10);
        fVar19 = fVar19 + fVar12 * fVar7;
      }
      else if (uVar4 * 0x10 - lVar1 == 0) {
        pfVar2 = (float *)(lVar3 + (uVar4 - 1) * 0x10);
        fVar11 = *pfVar2;
        fVar13 = pfVar2[1];
        fVar7 = pfVar2[2];
        pfVar2 = (float *)(lVar3 + (uVar4 - 2) * 0x10);
        fVar16 = *pfVar2;
        fVar21 = pfVar2[1];
        fVar22 = pfVar2[2];
        if (cRam0000000003ca34fc == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar9 = fVar20 - fVar11;
        fVar17 = fVar23 - fVar7;
        fVar14 = (fVar19 - fVar13) * 0.0;
        fVar12 = fVar14 - fVar9;
        fVar14 = fVar17 - fVar14;
        fVar18 = fVar9 * 0.0 - fVar17 * 0.0;
        fVar8 = fVar12 * fVar12 + fVar14 * fVar14 + fVar18 * fVar18;
        fVar9 = 1.0 / SQRT(fVar8);
        fVar15 = fVar14 * fVar9;
        fVar17 = fVar18 * fVar9;
        fVar9 = fVar12 * fVar9;
        if (fVar8 <= 1.1754944e-38) {
          fVar9 = 0.0;
          fVar17 = 0.0;
          fVar15 = 0.0;
        }
        fVar8 = -3.5;
        if (fVar12 * (fVar7 - fVar22) + (fVar11 - fVar16) * fVar14 + (fVar13 - fVar21) * fVar18 <=
            0.0) {
          fVar8 = 3.5;
        }
        fVar9 = fVar8 * fVar9;
        fVar20 = fVar20 + fVar8 * fVar15;
        fVar19 = fVar19 + fVar8 * fVar17;
        pfVar2 = (float *)(*(long *)(param_1 + 10) + uVar4 * 0x10);
      }
      else {
        lVar3 = lVar3 + lVar1;
        fVar7 = *(float *)(lVar3 + -0x10);
        fVar21 = *(float *)(lVar3 + -0xc);
        fVar9 = *(float *)(lVar3 + -8);
        fVar11 = *(float *)(lVar3 + 0x10);
        fVar13 = *(float *)(lVar3 + 0x14);
        fVar16 = *(float *)(lVar3 + 0x18);
        if (cRam0000000003ca34fc == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar7 = fVar20 - fVar7;
        fVar9 = fVar23 - fVar9;
        fVar11 = fVar11 - fVar20;
        fVar13 = fVar13 - fVar19;
        fVar16 = fVar16 - fVar23;
        fVar22 = (fVar19 - fVar21) * 0.0;
        fVar21 = fVar22 - fVar7;
        fVar22 = fVar9 - fVar22;
        fVar8 = fVar7 * 0.0 - fVar9 * 0.0;
        fVar7 = fVar13 * 0.0;
        fVar22 = fVar22 + ((fVar16 - fVar7) - fVar22) * 0.5;
        fVar8 = fVar8 + ((fVar11 * 0.0 - fVar16 * 0.0) - fVar8) * 0.5;
        fVar21 = fVar21 + ((fVar7 - fVar11) - fVar21) * 0.5;
        fVar12 = fVar21 * fVar21 + fVar22 * fVar22 + fVar8 * fVar8;
        fVar9 = 1.0 / SQRT(fVar12);
        fVar17 = fVar22 * fVar9;
        fVar7 = fVar8 * fVar9;
        fVar9 = fVar21 * fVar9;
        if (fVar12 <= 1.1754944e-38) {
          fVar9 = 0.0;
          fVar7 = 0.0;
          fVar17 = 0.0;
        }
        fVar12 = -3.5;
        if (fVar16 * fVar21 + fVar11 * fVar22 + fVar13 * fVar8 <= 0.0) {
          fVar12 = 3.5;
        }
        fVar9 = fVar12 * fVar9;
        fVar20 = fVar20 + fVar12 * fVar17;
        fVar19 = fVar19 + fVar12 * fVar7;
        pfVar2 = (float *)(*(long *)(param_1 + 10) + lVar1);
      }
      *pfVar2 = fVar20;
      pfVar2[1] = fVar19;
      *(ulong *)(pfVar2 + 2) = CONCAT44(fVar24 + 0.0,fVar23 + fVar9);
      fVar5 = (float)((int)fVar5 + 1);
      lVar1 = lVar1 + 0x10;
    } while ((ulong)(uint)fVar6 * 0x10 - lVar1 != 0);
  }
  **(float **)(param_1 + 0xe) = fVar6;
  return;
}



