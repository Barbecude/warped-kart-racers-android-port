// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.FollowCameraParams

// ============================================================
// RVA: 0x15862ec | Atlas.Gameplay.Kart.FollowCameraParams.get_FaceToVelocityRatio
// ============================================================

undefined4 Atlas_Gameplay_Kart_FollowCameraParams__get_FaceToVelocityRatio(undefined4 *param_1)

{
  return *param_1;
}



// ============================================================
// RVA: 0x15862f4 | Atlas.Gameplay.Kart.FollowCameraParams.get_YawDelay
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Atlas_Gameplay_Kart_FollowCameraParams__get_YawDelay(long param_1)

{
  return *(float *)(param_1 + 0x40) * _UNK_033f85c8;
}



// ============================================================
// RVA: 0x158630c | Atlas.Gameplay.Kart.FollowCameraParams.get_FieldOfView
// ============================================================

undefined4 Atlas_Gameplay_Kart_FollowCameraParams__get_FieldOfView(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x1586314 | Atlas.Gameplay.Kart.FollowCameraParams.get_DelayTo
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Atlas_Gameplay_Kart_FollowCameraParams__get_DelayTo(long param_1)

{
  return *(float *)(param_1 + 0x48) * _UNK_033f85c8;
}



// ============================================================
// RVA: 0x158632c | Atlas.Gameplay.Kart.FollowCameraParams.get_DelayFrom
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Atlas_Gameplay_Kart_FollowCameraParams__get_DelayFrom(long param_1)

{
  return *(float *)(param_1 + 0x50) * _UNK_033f85c8;
}



// ============================================================
// RVA: 0x1586344 | Atlas.Gameplay.Kart.FollowCameraParams.get_Ratio
// ============================================================

undefined4 Atlas_Gameplay_Kart_FollowCameraParams__get_Ratio(long param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// ============================================================
// RVA: 0x158634c | Atlas.Gameplay.Kart.FollowCameraParams.set_Ratio
// ============================================================

void Atlas_Gameplay_Kart_FollowCameraParams__set_Ratio(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 100) = param_1;
  return;
}



// ============================================================
// RVA: 0x1586354 | Atlas.Gameplay.Kart.FollowCameraParams.get_RampAdjustmentLerpFactor
// ============================================================

undefined4 Atlas_Gameplay_Kart_FollowCameraParams__get_RampAdjustmentLerpFactor(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// ============================================================
// RVA: 0x158635c | Atlas.Gameplay.Kart.FollowCameraParams.get_RampAdjustmentFromOffsetYAdjustment
// ============================================================

undefined4
Atlas_Gameplay_Kart_FollowCameraParams__get_RampAdjustmentFromOffsetYAdjustment(long param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



// ============================================================
// RVA: 0x1586364 | Atlas.Gameplay.Kart.FollowCameraParams.get_RampAdjustmentTargetOffsetYAdjustment
// ============================================================

undefined4
Atlas_Gameplay_Kart_FollowCameraParams__get_RampAdjustmentTargetOffsetYAdjustment(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x158636c | Atlas.Gameplay.Kart.FollowCameraParams.get_From
// ============================================================

void Atlas_Gameplay_Kart_FollowCameraParams__get_From(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x18);
  return;
}



// ============================================================
// RVA: 0x1586380 | Atlas.Gameplay.Kart.FollowCameraParams.get_Target
// ============================================================

void Atlas_Gameplay_Kart_FollowCameraParams__get_Target(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x30);
  return;
}



// ============================================================
// RVA: 0x1586394 | Atlas.Gameplay.Kart.FollowCameraParams.Lerp
// ============================================================

void Atlas_Gameplay_Kart_FollowCameraParams__Lerp
               (undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  /*Atlas.Gameplay.Kart.KartFollowCameraOffset$$Lerp*/ func_0x015cc508(&uStack_a8,param_3 + 1,param_4 + 1,0);
  uStack_68 = uStack_a0;
  uStack_70 = uStack_a8;
  uStack_60 = uStack_98;
  /*Atlas.Gameplay.Kart.KartFollowCameraOffset$$Lerp*/ func_0x015cc508(&uStack_c0,param_2,param_3 + 4,param_4 + 4,0);
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_80 = uStack_b0;
  uVar19 = *param_3;
  uVar23 = *param_4;
  fVar2 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(param_2,0);
  fVar18 = (float)uVar19;
  fVar22 = (float)((ulong)uVar19 >> 0x20);
  uVar19 = param_3[8];
  uVar20 = param_4[8];
  fVar3 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(param_2,0);
  uVar1 = param_3[7];
  uVar24 = param_4[7];
  fVar4 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(param_2,0);
  fVar14 = (float)uVar1;
  fVar16 = (float)((ulong)uVar1 >> 0x20);
  fVar10 = (float)uVar19;
  fVar12 = (float)((ulong)uVar19 >> 0x20);
  uVar19 = param_3[9];
  uVar21 = param_4[9];
  fVar5 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(param_2,0);
  uVar1 = param_3[10];
  uVar25 = param_4[10];
  fVar6 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(param_2,0);
  fVar11 = (float)uVar19;
  fVar13 = (float)((ulong)uVar19 >> 0x20);
  fVar15 = (float)uVar1;
  fVar17 = (float)((ulong)uVar1 >> 0x20);
  uVar7 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(*(undefined4 *)(param_3 + 0xb),*(undefined4 *)(param_4 + 0xb),param_2,0);
  uVar8 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(*(undefined4 *)((long)param_3 + 0x5c),
                          *(undefined4 *)((long)param_4 + 0x5c),param_2,0);
  uVar9 = /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(*(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_4 + 0xc),param_2,0);
  *param_1 = CONCAT44(fVar22 + ((float)((ulong)uVar23 >> 0x20) - fVar22) * fVar2,
                      fVar18 + ((float)uVar23 - fVar18) * fVar2);
  param_1[2] = uStack_68;
  param_1[1] = uStack_70;
  param_1[3] = uStack_60;
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[6] = uStack_80;
  param_1[8] = CONCAT44(fVar12 + ((float)((ulong)uVar20 >> 0x20) - fVar12) * fVar3,
                        fVar10 + ((float)uVar20 - fVar10) * fVar3);
  param_1[7] = CONCAT44(fVar16 + ((float)((ulong)uVar24 >> 0x20) - fVar16) * fVar4,
                        fVar14 + ((float)uVar24 - fVar14) * fVar4);
  param_1[10] = CONCAT44(fVar17 + ((float)((ulong)uVar25 >> 0x20) - fVar17) * fVar6,
                         fVar15 + ((float)uVar25 - fVar15) * fVar6);
  param_1[9] = CONCAT44(fVar13 + ((float)((ulong)uVar21 >> 0x20) - fVar13) * fVar5,
                        fVar11 + ((float)uVar21 - fVar11) * fVar5);
  *(undefined4 *)(param_1 + 0xb) = uVar7;
  *(undefined4 *)((long)param_1 + 0x5c) = uVar8;
  *(undefined4 *)(param_1 + 0xc) = uVar9;
  *(undefined4 *)((long)param_1 + 100) = 0;
  return;
}



// ============================================================
// RVA: 0x1586594 | Atlas.Gameplay.Kart.FollowCameraParams.Lerp
// ============================================================

void Atlas_Gameplay_Kart_FollowCameraParams__Lerp
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  Atlas_Gameplay_Kart_FollowCameraParams__Lerp(&uStack_88,*(undefined4 *)(param_3 + 100));
  param_1[9] = uStack_40;
  param_1[8] = uStack_48;
  param_1[0xb] = uStack_30;
  param_1[10] = uStack_38;
  param_1[0xc] = uStack_28;
  param_1[1] = uStack_80;
  *param_1 = uStack_88;
  param_1[3] = uStack_70;
  param_1[2] = uStack_78;
  param_1[5] = uStack_60;
  param_1[4] = uStack_68;
  param_1[7] = uStack_50;
  param_1[6] = uStack_58;
  return;
}



