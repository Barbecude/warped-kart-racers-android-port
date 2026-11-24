// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.Services.ReplicatorProviderEsq.Extrapolator3

// ============================================================
// RVA: 0x1682e70 | Core.Services.ReplicatorProviderEsq.Extrapolator3..ctor
// ============================================================

void Core_Services_ReplicatorProviderEsq_Extrapolator3___ctor
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  /*System.Object$$.ctor*/ func_0x0294d018(param_4,0);
  fVar1 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  fVar3 = 0.0;
  fVar4 = fVar1;
  fVar2 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(float *)(param_4 + 0x38) = param_2;
  *(float *)(param_4 + 0x3c) = param_3;
  *(float *)(param_4 + 0x10) = fVar1;
  *(float *)(param_4 + 0x14) = param_2;
  *(undefined8 *)(param_4 + 0x58) = 0;
  *(undefined8 *)(param_4 + 0x60) = 0;
  *(undefined8 *)(param_4 + 0x40) = 0;
  *(undefined8 *)(param_4 + 0x48) = 0;
  *(undefined8 *)(param_4 + 0x50) = 0;
  *(float *)(param_4 + 0x18) = param_3;
  *(float *)(param_4 + 0x1c) = fVar2;
  *(float *)(param_4 + 0x20) = fVar3;
  *(float *)(param_4 + 0x24) = fVar4;
  *(float *)(param_4 + 0x28) = fVar1 + fVar2 * 0.0;
  *(float *)(param_4 + 0x2c) = param_2 + fVar3 * 0.0;
  *(float *)(param_4 + 0x30) = param_3 + fVar4 * 0.0;
  *(float *)(param_4 + 0x34) = fVar1;
  return;
}



// ============================================================
// RVA: 0x1682fc0 | Core.Services.ReplicatorProviderEsq.Extrapolator3.Reset
// ============================================================

void Core_Services_ReplicatorProviderEsq_Extrapolator3__Reset
               (double param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5,
               long param_6)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  
  fVar3 = param_2._0_4_;
  dVar1 = param_2._0_8_;
  fVar4 = param_3;
  fVar2 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(float *)(param_6 + 0x38) = param_4;
  *(float *)(param_6 + 0x3c) = param_5;
  *(float *)(param_6 + 0x10) = param_3;
  *(float *)(param_6 + 0x14) = param_4;
  dVar6 = dVar1 - param_1;
  *(double *)(param_6 + 0x58) = dVar6;
  *(double *)(param_6 + 0x60) = dVar6;
  *(double *)(param_6 + 0x40) = dVar1;
  *(double *)(param_6 + 0x48) = dVar6 + dVar1;
  *(double *)(param_6 + 0x50) = param_1;
  *(float *)(param_6 + 0x18) = param_5;
  *(float *)(param_6 + 0x1c) = fVar2;
  *(float *)(param_6 + 0x20) = fVar3;
  *(float *)(param_6 + 0x24) = fVar4;
  fVar5 = (float)dVar6;
  *(float *)(param_6 + 0x28) = param_3 + fVar2 * fVar5;
  *(float *)(param_6 + 0x2c) = param_4 + fVar3 * fVar5;
  *(float *)(param_6 + 0x30) = param_5 + fVar4 * fVar5;
  *(float *)(param_6 + 0x34) = param_3;
  return;
}



// ============================================================
// RVA: 0x1683058 | Core.Services.ReplicatorProviderEsq.Extrapolator3.ReadPosition
// ============================================================

bool Core_Services_ReplicatorProviderEsq_Extrapolator3__ReadPosition
               (double param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  
  dVar6 = *(double *)(param_2 + 0x40);
  dVar3 = dVar6;
  if (dVar6 <= param_1) {
    dVar3 = param_1;
  }
  dVar7 = *(double *)(param_2 + 0x48) + *(double *)(param_2 + 0x60);
  dVar4 = dVar7;
  if (dVar3 <= dVar7) {
    dVar4 = dVar3;
  }
  fVar5 = *(float *)(param_2 + 0x24);
  uVar9 = *(undefined8 *)(param_2 + 0x1c);
  *param_4 = uVar9;
  *(float *)(param_4 + 1) = fVar5;
  fVar10 = *(float *)(param_2 + 0x18);
  fVar1 = (float)(dVar4 - *(double *)(param_2 + 0x40));
  fVar8 = (float)uVar9 * fVar1;
  uVar9 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) +
                   (float)((ulong)uVar9 >> 0x20) * fVar1,
                   (float)*(undefined8 *)(param_2 + 0x10) + fVar8);
  *param_3 = uVar9;
  *(float *)(param_3 + 1) = fVar10 + fVar5 * fVar1;
  if (param_1 < dVar6 || dVar7 < dVar3) {
    uVar2 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    *(undefined4 *)param_4 = uVar2;
    *(int *)((long)param_4 + 4) = (int)uVar9;
    *(float *)(param_4 + 1) = fVar8;
  }
  return param_1 >= dVar6 && dVar7 >= dVar3;
}



// ============================================================
// RVA: 0x168338c | Core.Services.ReplicatorProviderEsq.Extrapolator3.AddSample
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Core_Services_ReplicatorProviderEsq_Extrapolator3__AddSample
          (double param_1,double param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8,long param_9)

{
  undefined8 uVar1;
  float fVar2;
  double dVar3;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  uVar1 = /*Core.Services.ReplicatorProviderEsq.Extrapolator3$$Estimates*/ func_0x01689d78();
  if ((int)uVar1 != 0) {
    *(float *)(param_9 + 0x34) = param_3;
    *(float *)(param_9 + 0x38) = param_4;
    *(float *)(param_9 + 0x3c) = param_5;
    *(double *)(param_9 + 0x50) = param_1;
    uStack_68 = 0;
    uStack_70 = 0;
    Core_Services_ReplicatorProviderEsq_Extrapolator3__ReadPosition
              (param_2,param_9,param_9 + 0x10,&uStack_70);
    dVar3 = *(double *)(param_9 + 0x60) + param_2;
    fVar2 = (float)(dVar3 - param_1);
    *(double *)(param_9 + 0x40) = param_2;
    *(double *)(param_9 + 0x48) = dVar3;
    param_3 = param_3 + param_6 * fVar2;
    param_4 = param_4 + param_7 * fVar2;
    param_5 = param_5 + param_8 * fVar2;
    *(float *)(param_9 + 0x28) = param_3;
    *(float *)(param_9 + 0x2c) = param_4;
    *(float *)(param_9 + 0x30) = param_5;
    if (_UNK_03408120 <= (double)ABS((float)(dVar3 - param_2))) {
      param_8 = (float)(1.0 / (dVar3 - param_2));
      param_6 = (param_3 - *(float *)(param_9 + 0x10)) * param_8;
      param_7 = (param_4 - *(float *)(param_9 + 0x14)) * param_8;
      param_8 = (param_5 - *(float *)(param_9 + 0x18)) * param_8;
    }
    *(float *)(param_9 + 0x1c) = param_6;
    *(float *)(param_9 + 0x20) = param_7;
    *(float *)(param_9 + 0x24) = param_8;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x16834b0 | Core.Services.ReplicatorProviderEsq.Extrapolator3.Reset
// ============================================================

void Core_Services_ReplicatorProviderEsq_Extrapolator3__Reset
               (double param_1,double param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,float param_8,long param_9)

{
  float fVar1;
  double dVar2;
  
  *(float *)(param_9 + 0x38) = param_4;
  *(float *)(param_9 + 0x3c) = param_5;
  *(float *)(param_9 + 0x10) = param_3;
  *(float *)(param_9 + 0x14) = param_4;
  dVar2 = param_2 - param_1;
  *(double *)(param_9 + 0x58) = dVar2;
  *(double *)(param_9 + 0x60) = dVar2;
  *(double *)(param_9 + 0x50) = param_1;
  *(double *)(param_9 + 0x40) = param_2;
  *(double *)(param_9 + 0x48) = dVar2 + param_2;
  *(float *)(param_9 + 0x18) = param_5;
  *(float *)(param_9 + 0x1c) = param_6;
  *(float *)(param_9 + 0x20) = param_7;
  *(float *)(param_9 + 0x24) = param_8;
  fVar1 = (float)dVar2;
  *(float *)(param_9 + 0x28) = param_3 + param_6 * fVar1;
  *(float *)(param_9 + 0x2c) = param_4 + param_7 * fVar1;
  *(float *)(param_9 + 0x30) = param_5 + param_8 * fVar1;
  *(float *)(param_9 + 0x34) = param_3;
  return;
}



// ============================================================
// RVA: 0x1689cb0 | Core.Services.ReplicatorProviderEsq.Extrapolator3.AddSample
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Core_Services_ReplicatorProviderEsq_Extrapolator3__AddSample
          (double param_1,double param_2,float param_3,float param_4,float param_5,long param_6)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  dVar4 = param_1 - *(double *)(param_6 + 0x50);
  dVar5 = (double)ABS((float)dVar4);
  if (dVar5 <= _UNK_03408120) {
    dVar4 = _UNK_03408120;
    fVar6 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    fVar7 = SUB84(dVar5,0);
    fVar3 = SUB84(dVar4,0);
  }
  else {
    fVar3 = (float)(1.0 / dVar4);
    fVar6 = (param_3 - *(float *)(param_6 + 0x34)) * fVar3;
    fVar7 = (param_4 - *(float *)(param_6 + 0x38)) * fVar3;
    fVar3 = (param_5 - *(float *)(param_6 + 0x3c)) * fVar3;
  }
  uVar1 = /*Core.Services.ReplicatorProviderEsq.Extrapolator3$$Estimates*/ func_0x01689d78();
  if ((int)uVar1 != 0) {
    *(float *)(param_6 + 0x34) = param_3;
    *(float *)(param_6 + 0x38) = param_4;
    *(float *)(param_6 + 0x3c) = param_5;
    *(double *)(param_6 + 0x50) = param_1;
    uStack_68 = 0;
    uStack_70 = 0;
    Core_Services_ReplicatorProviderEsq_Extrapolator3__ReadPosition
              (param_2,param_6,param_6 + 0x10,&uStack_70);
    dVar4 = *(double *)(param_6 + 0x60) + param_2;
    fVar2 = (float)(dVar4 - param_1);
    *(double *)(param_6 + 0x40) = param_2;
    *(double *)(param_6 + 0x48) = dVar4;
    param_3 = param_3 + fVar6 * fVar2;
    param_4 = param_4 + fVar7 * fVar2;
    param_5 = param_5 + fVar3 * fVar2;
    *(float *)(param_6 + 0x28) = param_3;
    *(float *)(param_6 + 0x2c) = param_4;
    *(float *)(param_6 + 0x30) = param_5;
    if (_UNK_03408120 <= (double)ABS((float)(dVar4 - param_2))) {
      fVar3 = (float)(1.0 / (dVar4 - param_2));
      fVar6 = (param_3 - *(float *)(param_6 + 0x10)) * fVar3;
      fVar7 = (param_4 - *(float *)(param_6 + 0x14)) * fVar3;
      fVar3 = (param_5 - *(float *)(param_6 + 0x18)) * fVar3;
    }
    *(float *)(param_6 + 0x1c) = fVar6;
    *(float *)(param_6 + 0x20) = fVar7;
    *(float *)(param_6 + 0x24) = fVar3;
  }
  return uVar1;
}



// ============================================================
// RVA: 0x1689d78 | Core.Services.ReplicatorProviderEsq.Extrapolator3.Estimates
// ============================================================

bool Core_Services_ReplicatorProviderEsq_Extrapolator3__Estimates
               (double param_1,double param_2,long param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  dVar2 = *(double *)(param_3 + 0x50);
  if (dVar2 < param_1) {
    dVar1 = param_2 - param_1;
    if (param_2 - param_1 <= 0.0) {
      dVar1 = 0.0;
    }
    auVar4 = *(undefined1 (*) [16])(param_3 + 0x58);
    auVar3._0_8_ = -(ulong)(auVar4._0_8_ < dVar1);
    auVar3._8_8_ = -(ulong)(auVar4._8_8_ < param_1 - dVar2);
    auVar5 = NEON_fmov(0x401c000000000000,8);
    auVar6._0_8_ = auVar4._0_8_ * auVar5._0_8_;
    auVar6._8_8_ = auVar4._8_8_ * auVar5._8_8_;
    auVar4 = auVar4 ^ (auVar4 ^ auVar6) & ~auVar3;
    auVar5 = NEON_fmov(0x3fc0000000000000,8);
    auVar6 = NEON_fmov(0x3fe0000000000000,8);
    auVar5 = auVar5 ^ (auVar5 ^ auVar6) & auVar3;
    *(double *)(param_3 + 0x60) = ((param_1 - dVar2) + auVar4._8_8_) * auVar5._8_8_;
    *(double *)(param_3 + 0x58) = (dVar1 + auVar4._0_8_) * auVar5._0_8_;
  }
  return dVar2 < param_1;
}



// ============================================================
// RVA: 0x1689dd0 | Core.Services.ReplicatorProviderEsq.Extrapolator3.ReadPosition
// ============================================================

void Core_Services_ReplicatorProviderEsq_Extrapolator3__ReadPosition
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_18 = 0;
  uStack_20 = 0;
  Core_Services_ReplicatorProviderEsq_Extrapolator3__ReadPosition(param_1,param_2,&uStack_20);
  return;
}



// ============================================================
// RVA: 0x1689df8 | Core.Services.ReplicatorProviderEsq.Extrapolator3.EstimateLatency
// ============================================================

undefined1  [16] Core_Services_ReplicatorProviderEsq_Extrapolator3__EstimateLatency(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 0x58);
  auVar1._8_8_ = 0;
  return auVar1;
}



// ============================================================
// RVA: 0x1689e00 | Core.Services.ReplicatorProviderEsq.Extrapolator3.EstimateUpdateTime
// ============================================================

undefined1  [16] Core_Services_ReplicatorProviderEsq_Extrapolator3__EstimateUpdateTime(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 0x60);
  auVar1._8_8_ = 0;
  return auVar1;
}



