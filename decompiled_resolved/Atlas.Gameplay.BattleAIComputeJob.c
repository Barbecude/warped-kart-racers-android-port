// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.BattleAIComputeJob

// ============================================================
// RVA: 0x15391c4 | Atlas.Gameplay.BattleAIComputeJob.Execute
// ============================================================

void Atlas_Gameplay_BattleAIComputeJob__Execute(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar15 = param_1[1];
  uVar11 = *param_1;
  if (((0 < *(int *)(param_1 + 4)) &&
      (fVar20 = *(float *)(param_1 + 5) * *(float *)(param_1 + 8) + *(float *)((long)param_1 + 0x3c)
      , 0.0 < fVar20)) &&
     (lVar4 = (long)*(int *)((long)param_1 + 0x24),
     *(int *)((long)param_1 + 0x24) < *(int *)(param_1 + 4))) {
    bVar2 = 1;
    uVar12 = *(undefined8 *)((long)param_1 + 0x2c);
    uVar16 = *(undefined8 *)((long)param_1 + 0x34);
    do {
      puVar3 = (undefined8 *)(param_1[2] + lVar4 * 0x10);
      uVar15 = puVar3[1];
      uVar11 = *puVar3;
      if (cRam0000000003ca34fc == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca34fc = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar10 = (float)uVar12;
      fVar5 = fVar10 - (float)uVar11;
      fVar13 = (float)((ulong)uVar12 >> 0x20);
      fVar18 = (float)((ulong)uVar11 >> 0x20);
      fVar6 = fVar13 - fVar18;
      fVar14 = (float)uVar16;
      fVar7 = fVar14 - (float)uVar15;
      fVar17 = (float)((ulong)uVar16 >> 0x20);
      fVar19 = (float)((ulong)uVar15 >> 0x20);
      fVar8 = fVar17 - fVar19;
      fVar5 = fVar5 * fVar5;
      fVar6 = fVar6 * fVar6;
      fVar7 = fVar7 * fVar7;
      fVar8 = fVar8 * fVar8;
      auVar9._4_4_ = fVar6;
      auVar9._0_4_ = fVar5;
      auVar9._8_4_ = fVar7;
      auVar9._12_4_ = fVar8;
      auVar1._4_4_ = fVar6;
      auVar1._0_4_ = fVar5;
      auVar1._8_4_ = fVar7;
      auVar1._12_4_ = fVar8;
      auVar9 = NEON_ext(auVar9,auVar1,8,1);
      fVar5 = SQRT(fVar8 + auVar9._0_4_ + fVar5 + fVar6);
      if (!(bool)(fVar5 <= fVar20 | bVar2)) {
        fVar6 = fVar20 / fVar5;
        uVar11 = CONCAT44(fVar13 + (fVar18 - fVar13) * fVar6,
                          fVar10 + ((float)uVar11 - fVar10) * fVar6);
        uVar15 = CONCAT44(fVar17 + (fVar19 - fVar17) * fVar6,
                          fVar14 + ((float)uVar15 - fVar14) * fVar6);
      }
      fVar20 = fVar20 - fVar5;
      if (fVar20 <= 0.0) break;
      bVar2 = 0;
      lVar4 = lVar4 + 1;
      uVar12 = uVar11;
      uVar16 = uVar15;
    } while (lVar4 < *(int *)(param_1 + 4));
  }
  puVar3 = (undefined8 *)param_1[9];
  puVar3[1] = uVar15;
  *puVar3 = uVar11;
  return;
}



