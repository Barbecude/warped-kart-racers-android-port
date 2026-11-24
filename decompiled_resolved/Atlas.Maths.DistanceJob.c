// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Maths.DistanceJob

// ============================================================
// RVA: 0x15807a8 | Atlas.Maths.DistanceJob.Execute
// ============================================================

void Atlas_Maths_DistanceJob__Execute(float *param_1)

{
  float *pfVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar2 = param_1[6];
  if (0 < (int)fVar2) {
    lVar3 = 0;
    do {
      pfVar1 = (float *)(*(long *)(param_1 + 4) + lVar3 * 4);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar8 = pfVar1[3];
      fVar7 = *param_1;
      fVar9 = param_1[1];
      fVar10 = param_1[2];
      fVar11 = param_1[3];
      if (cRam0000000003ca34fc == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca34fc = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(float *)(*(long *)(param_1 + 8) + lVar3) =
           SQRT((fVar11 - fVar8) * (fVar11 - fVar8) +
                (fVar10 - fVar6) * (fVar10 - fVar6) +
                (fVar7 - fVar4) * (fVar7 - fVar4) + (fVar9 - fVar5) * (fVar9 - fVar5));
      lVar3 = lVar3 + 4;
    } while ((ulong)(uint)fVar2 * 4 - lVar3 != 0);
  }
  return;
}



