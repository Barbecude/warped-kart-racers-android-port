// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Maths.DistanceArrayJob

// ============================================================
// RVA: 0x1580610 | Atlas.Maths.DistanceArrayJob.Execute
// ============================================================

void Atlas_Maths_DistanceArrayJob__Execute(long *param_1)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar7 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    uVar8 = 0;
    iVar9 = 0;
    lVar11 = uVar7 - 2;
    lVar10 = 0x1c;
    do {
      lVar3 = *param_1;
      pfVar1 = (float *)(lVar3 + uVar8 * 0x10);
      fVar13 = *pfVar1;
      fVar14 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar16 = pfVar1[3];
      lVar4 = param_1[2];
      if (uVar8 != 0) {
        uVar5 = 0;
        uVar6 = uVar8;
        do {
          *(undefined4 *)(lVar4 + (long)(iVar9 + (int)uVar5) * 4) =
               *(undefined4 *)(lVar4 + (long)(int)uVar6 * 4);
          uVar5 = uVar5 + 1;
          uVar6 = (ulong)((int)uVar6 + uVar2);
        } while (uVar8 != uVar5);
        iVar9 = iVar9 + (int)uVar5;
      }
      *(undefined4 *)(lVar4 + (long)iVar9 * 4) = 0;
      uVar8 = uVar8 + 1;
      if (uVar8 < uVar7) {
        iVar9 = iVar9 + 2;
        lVar4 = lVar10;
        lVar12 = lVar11;
        while( true ) {
          pfVar1 = (float *)(lVar3 + lVar4);
          fVar17 = pfVar1[-3];
          fVar18 = pfVar1[-2];
          fVar19 = pfVar1[-1];
          fVar20 = *pfVar1;
          if (cRam0000000003ca34fc == '\0') {
            func_0x00f78a20(0x3d232c0);
            cRam0000000003ca34fc = '\x01';
          }
          if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          *(float *)(param_1[2] + (long)(iVar9 + -1) * 4) =
               SQRT((fVar20 - fVar16) * (fVar20 - fVar16) +
                    (fVar19 - fVar15) * (fVar19 - fVar15) +
                    (fVar17 - fVar13) * (fVar17 - fVar13) + (fVar18 - fVar14) * (fVar18 - fVar14));
          if (lVar12 == 0) break;
          lVar3 = *param_1;
          lVar4 = lVar4 + 0x10;
          lVar12 = lVar12 + -1;
          iVar9 = iVar9 + 1;
        }
      }
      else {
        iVar9 = iVar9 + 1;
      }
      lVar10 = lVar10 + 0x10;
      lVar11 = lVar11 + -1;
    } while (uVar8 != uVar7);
  }
  return;
}



