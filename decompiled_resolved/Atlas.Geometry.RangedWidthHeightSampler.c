// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Geometry.RangedWidthHeightSampler

// ============================================================
// RVA: 0x14e0250 | Atlas.Geometry.RangedWidthHeightSampler.Init
// ============================================================

undefined8
Atlas_Geometry_RangedWidthHeightSampler__Init
          (long param_1,long param_2,float *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  float fVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  
  uVar5 = (undefined4)((ulong)param_4 >> 0x20);
  iVar4 = (int)param_4;
  *(long *)(param_1 + 0x10) = param_2;
  *(float **)(param_1 + 0x18) = param_3;
  *(float *)(param_1 + 0x28) = 1.0 / (float)iVar4;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x18);
    *(int *)(param_1 + 0x20) = iVar1;
    if (param_3 != (float *)0x0) {
      if ((int)param_3[6] < iVar1) {
        *(float *)(param_1 + 0x20) = param_3[6];
      }
      *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
      /*UnityEngine.Random$$InitState*/ func_0x032526cc(param_5,0);
      auVar7 = /*UnityEngine.Random$$get_state*/ func_0x0325270c(0);
      *(undefined1 (*) [16])(param_1 + 0x40) = auVar7;
      return auVar7._0_8_;
    }
  }
  auVar8 = func_0x00f78af4();
  lVar3 = auVar8._0_8_;
  fVar6 = *(float *)(lVar3 + 0x28);
  if (cRam0000000003ca3502 == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca3502 = '\x01';
  }
  fVar6 = fVar6 * (float)auVar8._8_4_;
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar2 = -fVar6;
  if (fVar6 != INFINITY) {
    fVar2 = fVar6;
  }
  if (*(int *)(lVar3 + 0x3c) < (int)fVar2) {
    /*Atlas.Geometry.RangedWidthHeightSampler$$NextOffsets*/ func_0x014e03b4(lVar3);
    *(int *)(lVar3 + 0x3c) = (int)fVar2;
  }
  *param_3 = *(float *)(lVar3 + 0x2c) +
             (fVar6 - (float)(int)fVar6) * (*(float *)(lVar3 + 0x34) - *(float *)(lVar3 + 0x2c));
  *(float *)CONCAT44(uVar5,iVar4) =
       *(float *)(lVar3 + 0x30) +
       (fVar6 - (float)(int)fVar6) * (*(float *)(lVar3 + 0x38) - *(float *)(lVar3 + 0x30));
  return 1;
}



// ============================================================
// RVA: 0x14e02c4 | Atlas.Geometry.RangedWidthHeightSampler.TryGetNext
// ============================================================

undefined8
Atlas_Geometry_RangedWidthHeightSampler__TryGetNext
          (long param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x28);
  if (cRam0000000003ca3502 == '\0') {
    func_0x00f78a20(0x3d232c0);
    cRam0000000003ca3502 = '\x01';
  }
  fVar2 = fVar2 * (float)param_2;
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  fVar1 = -fVar2;
  if (fVar2 != INFINITY) {
    fVar1 = fVar2;
  }
  if (*(int *)(param_1 + 0x3c) < (int)fVar1) {
    /*Atlas.Geometry.RangedWidthHeightSampler$$NextOffsets*/ func_0x014e03b4(param_1);
    *(int *)(param_1 + 0x3c) = (int)fVar1;
  }
  *param_3 = *(float *)(param_1 + 0x2c) +
             (fVar2 - (float)(int)fVar2) * (*(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x2c))
  ;
  *param_4 = *(float *)(param_1 + 0x30) +
             (fVar2 - (float)(int)fVar2) * (*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x30))
  ;
  return 1;
}



// ============================================================
// RVA: 0x14e03b4 | Atlas.Geometry.RangedWidthHeightSampler.NextOffsets
// ============================================================

/* WARNING: Possible PIC construction at 0x014e03f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e03f8) */
/* WARNING: Removing unreachable block (ram,0x014e0404) */
/* WARNING: Removing unreachable block (ram,0x014e0414) */
/* WARNING: Removing unreachable block (ram,0x014e0434) */

undefined4
Atlas_Geometry_RangedWidthHeightSampler__NextOffsets
          (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 extraout_s0;
  undefined1 auVar4 [16];
  
  *(undefined8 *)(param_3 + 0x2c) = *(undefined8 *)(param_3 + 0x34);
  lVar2 = *(long *)(param_3 + 0x10);
  if (lVar2 == 0) {
    func_0x00f78af4();
  }
  else if (*(uint *)(param_3 + 0x24) < *(uint *)(lVar2 + 0x18)) {
    lVar2 = lVar2 + (long)(int)*(uint *)(param_3 + 0x24) * 8;
    uVar3 = *(undefined4 *)(lVar2 + 0x20);
    param_2 = *(undefined4 *)(lVar2 + 0x24);
    goto code_r0x014e0190;
  }
  uVar1 = func_0x00f78b24();
  param_3 = func_0x00f78ac0(uVar1,0);
  uVar3 = extraout_s0;
code_r0x014e0190:
  /*UnityEngine.Random$$set_state*/ func_0x0325279c(*(undefined8 *)*(undefined1 (*) [16])(param_3 + 0x40),
                  *(undefined8 *)(param_3 + 0x48),0);
  uVar3 = /*UnityEngine.Random$$Range*/ func_0x03252854(uVar3,param_2,0);
  auVar4 = /*UnityEngine.Random$$get_state*/ func_0x0325270c(0);
  *(undefined1 (*) [16])(param_3 + 0x40) = auVar4;
  return uVar3;
}



// ============================================================
// RVA: 0x14e0458 | Atlas.Geometry.RangedWidthHeightSampler.PickFromRange
// ============================================================

undefined4
Atlas_Geometry_RangedWidthHeightSampler__PickFromRange
          (undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  /*UnityEngine.Random$$set_state*/ func_0x0325279c(*(undefined8 *)*(undefined1 (*) [16])(param_3 + 0x40),
                  *(undefined8 *)(param_3 + 0x48),0);
  uVar1 = /*UnityEngine.Random$$Range*/ func_0x03252854(param_1,param_2,0);
  auVar2 = /*UnityEngine.Random$$get_state*/ func_0x0325270c(0);
  *(undefined1 (*) [16])(param_3 + 0x40) = auVar2;
  return uVar1;
}



// ============================================================
// RVA: 0x14e0460 | Atlas.Geometry.RangedWidthHeightSampler..ctor
// ============================================================

void Atlas_Geometry_RangedWidthHeightSampler___ctor(void)

{
  return;
}



