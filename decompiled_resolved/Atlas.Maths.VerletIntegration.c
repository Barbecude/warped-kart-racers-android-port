// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Maths.VerletIntegration

// ============================================================
// RVA: 0x152773c | Atlas.Maths.VerletIntegration.get_CurrentValue
// ============================================================

undefined4 Atlas_Maths_VerletIntegration__get_CurrentValue(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ============================================================
// RVA: 0x1527748 | Atlas.Maths.VerletIntegration.get_EndValue
// ============================================================

undefined4 Atlas_Maths_VerletIntegration__get_EndValue(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1527754 | Atlas.Maths.VerletIntegration.set_Damping
// ============================================================

void Atlas_Maths_VerletIntegration__set_Damping(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}



// ============================================================
// RVA: 0x152775c | Atlas.Maths.VerletIntegration.set_Stiffness
// ============================================================

void Atlas_Maths_VerletIntegration__set_Stiffness(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}



// ============================================================
// RVA: 0x1527764 | Atlas.Maths.VerletIntegration.Init
// ============================================================

void Atlas_Maths_VerletIntegration__Init
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_7 + 0x24) = param_1;
  *(undefined4 *)(param_7 + 0x28) = param_2;
  *(undefined4 *)(param_7 + 0x2c) = param_3;
  *(undefined4 *)(param_7 + 0x30) = param_4;
  *(undefined4 *)(param_7 + 0x34) = param_5;
  *(undefined4 *)(param_7 + 0x38) = param_6;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_7 + 0x3c) = uVar1;
  *(undefined4 *)(param_7 + 0x40) = param_2;
  *(undefined4 *)(param_7 + 0x44) = param_3;
  return;
}



// ============================================================
// RVA: 0x152779c | Atlas.Maths.VerletIntegration.UpdateEndValue
// ============================================================

void Atlas_Maths_VerletIntegration__UpdateEndValue
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  *(undefined4 *)(param_4 + 0x18) = param_1;
  *(undefined4 *)(param_4 + 0x1c) = param_2;
  *(undefined4 *)(param_4 + 0x20) = param_3;
  return;
}



// ============================================================
// RVA: 0x15277a8 | Atlas.Maths.VerletIntegration.UpdateEndValue
// ============================================================

void Atlas_Maths_VerletIntegration__UpdateEndValue
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7)

{
  *(undefined4 *)(param_7 + 0x18) = param_1;
  *(undefined4 *)(param_7 + 0x1c) = param_2;
  *(undefined4 *)(param_7 + 0x20) = param_3;
  *(undefined4 *)(param_7 + 0x30) = param_4;
  *(undefined4 *)(param_7 + 0x34) = param_5;
  *(undefined4 *)(param_7 + 0x38) = param_6;
  return;
}



// ============================================================
// RVA: 0x15277bc | Atlas.Maths.VerletIntegration.UpdateCurrentValue
// ============================================================

void Atlas_Maths_VerletIntegration__UpdateCurrentValue
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  *(undefined4 *)(param_4 + 0x24) = param_1;
  *(undefined4 *)(param_4 + 0x28) = param_2;
  *(undefined4 *)(param_4 + 0x2c) = param_3;
  return;
}



// ============================================================
// RVA: 0x15277c8 | Atlas.Maths.VerletIntegration.Evaluate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Maths_VerletIntegration__Evaluate(float param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar4 = *(float *)(param_2 + 0x2c);
  fVar5 = *(float *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x24);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  uVar12 = *(undefined8 *)(param_2 + 0x3c);
  fVar16 = *(float *)(param_2 + 0x44);
  fVar9 = _UNK_033f8750;
  if (param_1 <= _UNK_033f8750) {
    fVar9 = param_1 + _UNK_033f85d0;
  }
  fVar10 = (float)(int)(param_1 / fVar9);
  if (0.0 < fVar10) {
    fVar14 = *(float *)(param_2 + 0x14);
    fVar15 = -*(float *)(param_2 + 0x10);
    fVar18 = 0.0;
    iVar1 = 1;
    fVar17 = fVar16;
    do {
      fVar3 = param_1 - fVar9 * fVar18;
      if (fVar10 + -1.0 != fVar18) {
        fVar3 = fVar9;
      }
      fVar19 = fVar3 * fVar3 * 0.5;
      fVar4 = fVar4 + fVar3 * fVar5 + fVar17 * fVar19;
      fVar6 = (float)uVar7;
      fVar8 = (float)((ulong)uVar7 >> 0x20);
      fVar16 = fVar5 * fVar15 - fVar14 * (fVar4 - *(float *)(param_2 + 0x20));
      fVar20 = fVar3 * 0.5;
      fVar11 = (float)uVar12;
      fVar13 = (float)((ulong)uVar12 >> 0x20);
      fVar18 = fVar6 * fVar3 + fVar11 * fVar19 + (float)uVar2;
      fVar3 = fVar8 * fVar3 + fVar13 * fVar19 + (float)((ulong)uVar2 >> 0x20);
      uVar2 = CONCAT44(fVar3,fVar18);
      fVar18 = fVar6 * fVar15 - (fVar18 - (float)*(undefined8 *)(param_2 + 0x18)) * fVar14;
      fVar3 = fVar8 * fVar15 -
              (fVar3 - (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20)) * fVar14;
      uVar12 = CONCAT44(fVar3,fVar18);
      uVar7 = CONCAT44(fVar8 + (fVar13 + fVar3) * fVar20,fVar6 + (fVar11 + fVar18) * fVar20);
      fVar5 = fVar5 + fVar20 * (fVar17 + fVar16);
      fVar18 = (float)iVar1;
      iVar1 = iVar1 + 1;
      fVar17 = fVar16;
    } while (fVar18 < fVar10);
  }
  *(undefined8 *)(param_2 + 0x24) = uVar2;
  *(float *)(param_2 + 0x2c) = fVar4;
  *(undefined8 *)(param_2 + 0x30) = uVar7;
  *(float *)(param_2 + 0x38) = fVar5;
  *(undefined8 *)(param_2 + 0x3c) = uVar12;
  *(float *)(param_2 + 0x44) = fVar16;
  return;
}



// ============================================================
// RVA: 0x15278ec | Atlas.Maths.VerletIntegration.EvaluateFixed
// ============================================================

void Atlas_Maths_VerletIntegration__EvaluateFixed(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar3 = param_1 * 0.5;
  fVar4 = *(float *)(param_2 + 0x38);
  fVar5 = fVar3 * param_1;
  fVar2 = *(float *)(param_2 + 0x2c) + fVar4 * param_1 + fVar5 * *(float *)(param_2 + 0x44);
  fVar6 = (float)*(undefined8 *)(param_2 + 0x30);
  fVar7 = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
  fVar8 = (float)*(undefined8 *)(param_2 + 0x3c);
  fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 0x3c) >> 0x20);
  fVar1 = (float)*(undefined8 *)(param_2 + 0x24) + fVar6 * param_1 + fVar8 * fVar5;
  fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) + fVar7 * param_1 + fVar9 * fVar5;
  *(ulong *)(param_2 + 0x24) = CONCAT44(fVar5,fVar1);
  *(float *)(param_2 + 0x2c) = fVar2;
  fVar10 = *(float *)(param_2 + 0x14);
  fVar11 = -*(float *)(param_2 + 0x10);
  fVar2 = fVar4 * fVar11 - fVar10 * (fVar2 - *(float *)(param_2 + 0x20));
  fVar1 = fVar6 * fVar11 - (fVar1 - (float)*(undefined8 *)(param_2 + 0x18)) * fVar10;
  fVar5 = fVar7 * fVar11 -
          (fVar5 - (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20)) * fVar10;
  *(ulong *)(param_2 + 0x30) =
       CONCAT44(fVar7 + (fVar9 + fVar5) * fVar3,fVar6 + (fVar8 + fVar1) * fVar3);
  *(float *)(param_2 + 0x38) = fVar4 + fVar3 * (*(float *)(param_2 + 0x44) + fVar2);
  *(ulong *)(param_2 + 0x3c) = CONCAT44(fVar5,fVar1);
  *(float *)(param_2 + 0x44) = fVar2;
  return;
}



// ============================================================
// RVA: 0x1527998 | Atlas.Maths.VerletIntegration..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
Atlas_Maths_VerletIntegration___ctor
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined8 *)(param_4 + 0x10) = _UNK_033f87a8;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x18) = uVar1;
  *(undefined4 *)(param_4 + 0x1c) = param_2;
  *(undefined4 *)(param_4 + 0x20) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x24) = uVar1;
  *(undefined4 *)(param_4 + 0x28) = param_2;
  *(undefined4 *)(param_4 + 0x2c) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x30) = uVar1;
  *(undefined4 *)(param_4 + 0x34) = param_2;
  *(undefined4 *)(param_4 + 0x38) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_4 + 0x3c) = uVar1;
  *(undefined4 *)(param_4 + 0x40) = param_2;
  *(undefined4 *)(param_4 + 0x44) = param_3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  return auVar2;
}



