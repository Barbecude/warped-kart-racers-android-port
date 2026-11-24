// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.PingPongAnimationBehaviour

// ============================================================
// RVA: 0x14bb6e8 | Atlas.Gameplay.PingPongAnimationBehaviour.Awake
// ============================================================

/* WARNING: Possible PIC construction at 0x014bb704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014bb708) */
/* WARNING: Removing unreachable block (ram,0x014bb82c) */
/* WARNING: Removing unreachable block (ram,0x014bb86c) */
/* WARNING: Removing unreachable block (ram,0x014bb870) */
/* WARNING: Removing unreachable block (ram,0x014bb874) */
/* WARNING: Removing unreachable block (ram,0x014bb8cc) */
/* WARNING: Removing unreachable block (ram,0x014bb878) */
/* WARNING: Removing unreachable block (ram,0x014bb84c) */
/* WARNING: Removing unreachable block (ram,0x014bb894) */
/* WARNING: Removing unreachable block (ram,0x014bb854) */
/* WARNING: Removing unreachable block (ram,0x014bb858) */
/* WARNING: Removing unreachable block (ram,0x014bb85c) */
/* WARNING: Removing unreachable block (ram,0x014bb8b8) */
/* WARNING: Removing unreachable block (ram,0x014bb8dc) */
/* WARNING: Removing unreachable block (ram,0x014bb860) */
/* WARNING: Removing unreachable block (ram,0x014bb888) */
/* WARNING: Removing unreachable block (ram,0x014bb8f0) */
/* WARNING: Removing unreachable block (ram,0x014bb8fc) */
/* WARNING: Removing unreachable block (ram,0x014bb90c) */
/* WARNING: Removing unreachable block (ram,0x014bb93c) */
/* WARNING: Removing unreachable block (ram,0x014bb944) */
/* WARNING: Removing unreachable block (ram,0x014bb978) */
/* WARNING: Removing unreachable block (ram,0x014bb984) */
/* WARNING: Removing unreachable block (ram,0x014bb9d8) */
/* WARNING: Removing unreachable block (ram,0x014bb98c) */
/* WARNING: Removing unreachable block (ram,0x014bb9e8) */
/* WARNING: Removing unreachable block (ram,0x014bb99c) */
/* WARNING: Removing unreachable block (ram,0x03275bf0) */
/* WARNING: Removing unreachable block (ram,0x03275c18) */
/* WARNING: Removing unreachable block (ram,0x03275c2c) */

void Atlas_Gameplay_PingPongAnimationBehaviour__Awake(long param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_s3;
  undefined8 uStack_60;
  float fStack_58;
  
  *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 100) * *(float *)(param_1 + 0x60);
  *(ulong *)(param_1 + 0x74) =
       CONCAT44(*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x48),
                *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x6c) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x24) - (float)*(undefined8 *)(param_1 + 0x18));
  *(ulong *)(param_1 + 0x7c) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_1 + 0x4c) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x58) - (float)*(undefined8 *)(param_1 + 0x4c));
  fVar1 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0((undefined8 *)(param_1 + 0x6c),0);
  *(bool *)(param_1 + 0xa4) = 0.0 < fVar1;
  fVar1 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(param_1 + 0x78,0);
  *(bool *)(param_1 + 0xa6) = 0.0 < fVar1;
  fStack_58 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x38);
  uStack_60 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x3c) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                       (float)*(undefined8 *)(param_1 + 0x3c) -
                       (float)*(undefined8 *)(param_1 + 0x30));
  fVar1 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_60,0);
  *(bool *)(param_1 + 0xa5) = 0.0 < fVar1;
  if (0.0 < fVar1) {
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    uVar4 = *(undefined4 *)(param_1 + 0x38);
    uVar2 = /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(*(undefined4 *)(param_1 + 0x30),0);
    *(undefined4 *)(param_1 + 0x84) = uVar2;
    *(undefined4 *)(param_1 + 0x88) = uVar3;
    *(undefined4 *)(param_1 + 0x8c) = uVar4;
    *(undefined4 *)(param_1 + 0x90) = in_s3;
    uVar3 = *(undefined4 *)(param_1 + 0x40);
    uVar4 = *(undefined4 *)(param_1 + 0x44);
    uVar2 = /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(*(undefined4 *)(param_1 + 0x3c),0);
    *(undefined4 *)(param_1 + 0x94) = uVar2;
    *(undefined4 *)(param_1 + 0x98) = uVar3;
    *(undefined4 *)(param_1 + 0x9c) = uVar4;
    *(undefined4 *)(param_1 + 0xa0) = in_s3;
  }
  return;
}



// ============================================================
// RVA: 0x14bb71c | Atlas.Gameplay.PingPongAnimationBehaviour.UpdateDerived
// ============================================================

void Atlas_Gameplay_PingPongAnimationBehaviour__UpdateDerived(long param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_s3;
  undefined8 uStack_40;
  float fStack_38;
  
  *(ulong *)(param_1 + 0x74) =
       CONCAT44(*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x48),
                *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x6c) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x24) - (float)*(undefined8 *)(param_1 + 0x18));
  *(ulong *)(param_1 + 0x7c) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_1 + 0x4c) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x58) - (float)*(undefined8 *)(param_1 + 0x4c));
  fVar1 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0((undefined8 *)(param_1 + 0x6c),0);
  *(bool *)(param_1 + 0xa4) = 0.0 < fVar1;
  fVar1 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(param_1 + 0x78,0);
  *(bool *)(param_1 + 0xa6) = 0.0 < fVar1;
  fStack_38 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x38);
  uStack_40 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x3c) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                       (float)*(undefined8 *)(param_1 + 0x3c) -
                       (float)*(undefined8 *)(param_1 + 0x30));
  fVar1 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_40,0);
  *(bool *)(param_1 + 0xa5) = 0.0 < fVar1;
  if (0.0 < fVar1) {
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    uVar4 = *(undefined4 *)(param_1 + 0x38);
    uVar2 = /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(*(undefined4 *)(param_1 + 0x30),0);
    *(undefined4 *)(param_1 + 0x84) = uVar2;
    *(undefined4 *)(param_1 + 0x88) = uVar3;
    *(undefined4 *)(param_1 + 0x8c) = uVar4;
    *(undefined4 *)(param_1 + 0x90) = in_s3;
    uVar3 = *(undefined4 *)(param_1 + 0x40);
    uVar4 = *(undefined4 *)(param_1 + 0x44);
    uVar2 = /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(*(undefined4 *)(param_1 + 0x3c),0);
    *(undefined4 *)(param_1 + 0x94) = uVar2;
    *(undefined4 *)(param_1 + 0x98) = uVar3;
    *(undefined4 *)(param_1 + 0x9c) = uVar4;
    *(undefined4 *)(param_1 + 0xa0) = in_s3;
  }
  return;
}



// ============================================================
// RVA: 0x14bb82c | Atlas.Gameplay.PingPongAnimationBehaviour.UpdateTransform
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_PingPongAnimationBehaviour__UpdateTransform
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined4 param_4,
               long param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  ulong uVar7;
  undefined8 uStack_80;
  float fStack_78;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_5 + 0x68) == 2) {
    if (param_1 < 0.5) {
      fVar4 = param_1 * 16.0 * param_1 * param_1;
      goto LAB_014bb888;
    }
    uVar2 = 0x40a00000;
code_r0x014bb8dc:
    fVar4 = (float)_powf(2.0 - (param_1 + param_1),uVar2);
    uStack_30 = (ulong)(uint)(fVar4 * -0.5 + 1.0);
  }
  else if (*(int *)(param_5 + 0x68) == 1) {
    if (0.5 <= param_1) {
      uVar2 = 0x40400000;
      goto code_r0x014bb8dc;
    }
    fVar4 = param_1 * 4.0;
LAB_014bb888:
    uStack_30 = (ulong)(uint)(fVar4 * param_1 * param_1);
  }
  else {
    fVar4 = (float)_cosf(param_1 * _UNK_033f84b4);
    uStack_30 = (ulong)(uint)((fVar4 + -1.0) * -0.5);
  }
  uStack_28 = 0;
  if (*(char *)(param_5 + 0xa4) != '\0') {
    lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
    if (lVar1 == 0) goto Atlas_Gameplay_PingPongAnimationBehaviour__UpdateDerived;
    fVar6 = (float)uStack_30;
    fVar4 = (float)((ulong)*(undefined8 *)(param_5 + 0x18) >> 0x20) +
            (float)((ulong)*(undefined8 *)(param_5 + 0x6c) >> 0x20) * fVar6;
    uVar7 = uStack_30;
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(CONCAT44(fVar4,(float)*(undefined8 *)(param_5 + 0x18) +
                                   (float)*(undefined8 *)(param_5 + 0x6c) * fVar6),fVar4,
                    *(float *)(param_5 + 0x20) + fVar6 * *(float *)(param_5 + 0x74),lVar1,0);
    param_4 = (undefined4)uVar7;
  }
  if (*(char *)(param_5 + 0xa5) != '\0') {
    lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
    param_4 = *(undefined4 *)(param_5 + 0x90);
    /*UnityEngine.Quaternion$$LerpUnclamped*/ func_0x03251914(*(undefined4 *)(param_5 + 0x84),*(undefined4 *)(param_5 + 0x88),
                    *(undefined4 *)(param_5 + 0x8c),param_4,*(undefined4 *)(param_5 + 0x94),
                    *(undefined4 *)(param_5 + 0x98),*(undefined4 *)(param_5 + 0x9c),
                    *(undefined4 *)(param_5 + 0xa0),0);
    if (lVar1 == 0) goto Atlas_Gameplay_PingPongAnimationBehaviour__UpdateDerived;
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar1,0);
  }
  if (*(char *)(param_5 + 0xa6) == '\0') {
    return;
  }
  lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_5,0);
  if (lVar1 != 0) {
    fVar4 = (float)uStack_30;
    uStack_30 = CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x48) >> 0x20) +
                         (float)((ulong)*(undefined8 *)(param_5 + 0x78) >> 0x20) * fVar4,
                         (float)*(undefined8 *)(param_5 + 0x48) +
                         (float)*(undefined8 *)(param_5 + 0x78) * fVar4);
    uStack_28 = CONCAT44(uStack_28._4_4_,
                         *(float *)(param_5 + 0x50) + fVar4 * *(float *)(param_5 + 0x80));
    if (pcRam0000000003ec19a8 == (code *)0x0) {
      pcRam0000000003ec19a8 =
           (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    (*pcRam0000000003ec19a8)(lVar1,&uStack_30);
    return;
  }
Atlas_Gameplay_PingPongAnimationBehaviour__UpdateDerived:
  lVar1 = func_0x00f78af4();
  *(ulong *)(lVar1 + 0x74) =
       CONCAT44(*(float *)(lVar1 + 0x54) - *(float *)(lVar1 + 0x48),
                *(float *)(lVar1 + 0x2c) - *(float *)(lVar1 + 0x20));
  *(undefined8 *)(lVar1 + 0x6c) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x24) >> 0x20) -
                (float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20),
                (float)*(undefined8 *)(lVar1 + 0x24) - (float)*(undefined8 *)(lVar1 + 0x18));
  *(ulong *)(lVar1 + 0x7c) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x58) >> 0x20) -
                (float)((ulong)*(undefined8 *)(lVar1 + 0x4c) >> 0x20),
                (float)*(undefined8 *)(lVar1 + 0x58) - (float)*(undefined8 *)(lVar1 + 0x4c));
  fVar4 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0((undefined8 *)(lVar1 + 0x6c),0);
  *(bool *)(lVar1 + 0xa4) = 0.0 < fVar4;
  fVar4 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(lVar1 + 0x78,0);
  *(bool *)(lVar1 + 0xa6) = 0.0 < fVar4;
  fStack_78 = *(float *)(lVar1 + 0x44) - *(float *)(lVar1 + 0x38);
  uStack_80 = CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x3c) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(lVar1 + 0x30) >> 0x20),
                       (float)*(undefined8 *)(lVar1 + 0x3c) - (float)*(undefined8 *)(lVar1 + 0x30));
  fVar4 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_80,0);
  *(bool *)(lVar1 + 0xa5) = 0.0 < fVar4;
  if (0.0 < fVar4) {
    uVar3 = *(undefined4 *)(lVar1 + 0x34);
    uVar5 = *(undefined4 *)(lVar1 + 0x38);
    uVar2 = /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(*(undefined4 *)(lVar1 + 0x30),0);
    *(undefined4 *)(lVar1 + 0x84) = uVar2;
    *(undefined4 *)(lVar1 + 0x88) = uVar3;
    *(undefined4 *)(lVar1 + 0x8c) = uVar5;
    *(undefined4 *)(lVar1 + 0x90) = param_4;
    uVar3 = *(undefined4 *)(lVar1 + 0x40);
    uVar5 = *(undefined4 *)(lVar1 + 0x44);
    uVar2 = /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(*(undefined4 *)(lVar1 + 0x3c),0);
    *(undefined4 *)(lVar1 + 0x94) = uVar2;
    *(undefined4 *)(lVar1 + 0x98) = uVar3;
    *(undefined4 *)(lVar1 + 0x9c) = uVar5;
    *(undefined4 *)(lVar1 + 0xa0) = param_4;
  }
  return;
}



// ============================================================
// RVA: 0x14bb9ec | Atlas.Gameplay.PingPongAnimationBehaviour.OnValidate
// ============================================================

void Atlas_Gameplay_PingPongAnimationBehaviour__OnValidate(long param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_s3;
  undefined8 uStack_40;
  float fStack_38;
  
  *(ulong *)(param_1 + 0x74) =
       CONCAT44(*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x48),
                *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x6c) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x24) - (float)*(undefined8 *)(param_1 + 0x18));
  *(ulong *)(param_1 + 0x7c) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_1 + 0x4c) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x58) - (float)*(undefined8 *)(param_1 + 0x4c));
  fVar1 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0((undefined8 *)(param_1 + 0x6c),0);
  *(bool *)(param_1 + 0xa4) = 0.0 < fVar1;
  fVar1 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(param_1 + 0x78,0);
  *(bool *)(param_1 + 0xa6) = 0.0 < fVar1;
  fStack_38 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x38);
  uStack_40 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x3c) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                       (float)*(undefined8 *)(param_1 + 0x3c) -
                       (float)*(undefined8 *)(param_1 + 0x30));
  fVar1 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_40,0);
  *(bool *)(param_1 + 0xa5) = 0.0 < fVar1;
  if (0.0 < fVar1) {
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    uVar4 = *(undefined4 *)(param_1 + 0x38);
    uVar2 = /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(*(undefined4 *)(param_1 + 0x30),0);
    *(undefined4 *)(param_1 + 0x84) = uVar2;
    *(undefined4 *)(param_1 + 0x88) = uVar3;
    *(undefined4 *)(param_1 + 0x8c) = uVar4;
    *(undefined4 *)(param_1 + 0x90) = in_s3;
    uVar3 = *(undefined4 *)(param_1 + 0x40);
    uVar4 = *(undefined4 *)(param_1 + 0x44);
    uVar2 = /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(*(undefined4 *)(param_1 + 0x3c),0);
    *(undefined4 *)(param_1 + 0x94) = uVar2;
    *(undefined4 *)(param_1 + 0x98) = uVar3;
    *(undefined4 *)(param_1 + 0x9c) = uVar4;
    *(undefined4 *)(param_1 + 0xa0) = in_s3;
  }
  return;
}



// ============================================================
// RVA: 0x14bb9f0 | Atlas.Gameplay.PingPongAnimationBehaviour.LateUpdate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_PingPongAnimationBehaviour__LateUpdate(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 in_s3;
  ulong uVar8;
  undefined8 uStack_80;
  float fStack_78;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  fVar4 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  if (*(char *)(param_1 + 0xac) == '\0') {
    fVar4 = fVar4 + *(float *)(param_1 + 0xa8);
    *(float *)(param_1 + 0xa8) = fVar4;
    if (*(float *)(param_1 + 100) < fVar4) {
      fVar4 = fVar4 - (fVar4 - *(float *)(param_1 + 100));
      uVar2 = 1;
      goto LAB_014bba50;
    }
  }
  else {
    fVar4 = *(float *)(param_1 + 0xa8) - fVar4;
    *(float *)(param_1 + 0xa8) = fVar4;
    if (fVar4 < 0.0) {
      uVar2 = 0;
      fVar4 = fVar4 - fVar4;
LAB_014bba50:
      *(float *)(param_1 + 0xa8) = fVar4;
      *(undefined1 *)(param_1 + 0xac) = uVar2;
    }
  }
  fVar4 = fVar4 / *(float *)(param_1 + 100);
  if (*(int *)(param_1 + 0x68) == 2) {
    if (fVar4 < 0.5) {
      fVar6 = fVar4 * 16.0 * fVar4 * fVar4;
      goto LAB_014bb888;
    }
    uVar3 = 0x40a00000;
code_r0x014bb8dc:
    fVar4 = (float)_powf(2.0 - (fVar4 + fVar4),uVar3);
    uStack_30 = (ulong)(uint)(fVar4 * -0.5 + 1.0);
  }
  else if (*(int *)(param_1 + 0x68) == 1) {
    if (0.5 <= fVar4) {
      uVar3 = 0x40400000;
      goto code_r0x014bb8dc;
    }
    fVar6 = fVar4 * 4.0;
LAB_014bb888:
    uStack_30 = (ulong)(uint)(fVar6 * fVar4 * fVar4);
  }
  else {
    fVar4 = (float)_cosf(fVar4 * _UNK_033f84b4);
    uStack_30 = (ulong)(uint)((fVar4 + -1.0) * -0.5);
  }
  uStack_28 = 0;
  if (*(char *)(param_1 + 0xa4) != '\0') {
    lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
    if (lVar1 == 0) goto Atlas_Gameplay_PingPongAnimationBehaviour__UpdateDerived;
    fVar6 = (float)uStack_30;
    fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) +
            (float)((ulong)*(undefined8 *)(param_1 + 0x6c) >> 0x20) * fVar6;
    uVar8 = uStack_30;
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(CONCAT44(fVar4,(float)*(undefined8 *)(param_1 + 0x18) +
                                   (float)*(undefined8 *)(param_1 + 0x6c) * fVar6),fVar4,
                    *(float *)(param_1 + 0x20) + fVar6 * *(float *)(param_1 + 0x74),lVar1,0);
    in_s3 = (undefined4)uVar8;
  }
  if (*(char *)(param_1 + 0xa5) != '\0') {
    lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
    in_s3 = *(undefined4 *)(param_1 + 0x90);
    /*UnityEngine.Quaternion$$LerpUnclamped*/ func_0x03251914(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88),
                    *(undefined4 *)(param_1 + 0x8c),in_s3,*(undefined4 *)(param_1 + 0x94),
                    *(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c),
                    *(undefined4 *)(param_1 + 0xa0),0);
    if (lVar1 == 0) goto Atlas_Gameplay_PingPongAnimationBehaviour__UpdateDerived;
    /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar1,0);
  }
  if (*(char *)(param_1 + 0xa6) == '\0') {
    return;
  }
  lVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
  if (lVar1 != 0) {
    fVar4 = (float)uStack_30;
    uStack_30 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) +
                         (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) * fVar4,
                         (float)*(undefined8 *)(param_1 + 0x48) +
                         (float)*(undefined8 *)(param_1 + 0x78) * fVar4);
    uStack_28 = CONCAT44(uStack_28._4_4_,
                         *(float *)(param_1 + 0x50) + fVar4 * *(float *)(param_1 + 0x80));
    if (pcRam0000000003ec19a8 == (code *)0x0) {
      pcRam0000000003ec19a8 =
           (code *)func_0x00f789d4("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)"
                                   ,0);
    }
    (*pcRam0000000003ec19a8)(lVar1,&uStack_30);
    return;
  }
Atlas_Gameplay_PingPongAnimationBehaviour__UpdateDerived:
  lVar1 = func_0x00f78af4();
  *(ulong *)(lVar1 + 0x74) =
       CONCAT44(*(float *)(lVar1 + 0x54) - *(float *)(lVar1 + 0x48),
                *(float *)(lVar1 + 0x2c) - *(float *)(lVar1 + 0x20));
  *(undefined8 *)(lVar1 + 0x6c) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x24) >> 0x20) -
                (float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20),
                (float)*(undefined8 *)(lVar1 + 0x24) - (float)*(undefined8 *)(lVar1 + 0x18));
  *(ulong *)(lVar1 + 0x7c) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x58) >> 0x20) -
                (float)((ulong)*(undefined8 *)(lVar1 + 0x4c) >> 0x20),
                (float)*(undefined8 *)(lVar1 + 0x58) - (float)*(undefined8 *)(lVar1 + 0x4c));
  fVar4 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0((undefined8 *)(lVar1 + 0x6c),0);
  *(bool *)(lVar1 + 0xa4) = 0.0 < fVar4;
  fVar4 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(lVar1 + 0x78,0);
  *(bool *)(lVar1 + 0xa6) = 0.0 < fVar4;
  fStack_78 = *(float *)(lVar1 + 0x44) - *(float *)(lVar1 + 0x38);
  uStack_80 = CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x3c) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(lVar1 + 0x30) >> 0x20),
                       (float)*(undefined8 *)(lVar1 + 0x3c) - (float)*(undefined8 *)(lVar1 + 0x30));
  fVar4 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&uStack_80,0);
  *(bool *)(lVar1 + 0xa5) = 0.0 < fVar4;
  if (0.0 < fVar4) {
    uVar5 = *(undefined4 *)(lVar1 + 0x34);
    uVar7 = *(undefined4 *)(lVar1 + 0x38);
    uVar3 = /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(*(undefined4 *)(lVar1 + 0x30),0);
    *(undefined4 *)(lVar1 + 0x84) = uVar3;
    *(undefined4 *)(lVar1 + 0x88) = uVar5;
    *(undefined4 *)(lVar1 + 0x8c) = uVar7;
    *(undefined4 *)(lVar1 + 0x90) = in_s3;
    uVar5 = *(undefined4 *)(lVar1 + 0x40);
    uVar7 = *(undefined4 *)(lVar1 + 0x44);
    uVar3 = /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(*(undefined4 *)(lVar1 + 0x3c),0);
    *(undefined4 *)(lVar1 + 0x94) = uVar3;
    *(undefined4 *)(lVar1 + 0x98) = uVar5;
    *(undefined4 *)(lVar1 + 0x9c) = uVar7;
    *(undefined4 *)(lVar1 + 0xa0) = in_s3;
  }
  return;
}



// ============================================================
// RVA: 0x14bba70 | Atlas.Gameplay.PingPongAnimationBehaviour.EaseInOutCubic
// ============================================================

float Atlas_Gameplay_PingPongAnimationBehaviour__EaseInOutCubic(float param_1)

{
  float fVar1;
  
  if (param_1 < 0.5) {
    return param_1 * 4.0 * param_1 * param_1;
  }
  fVar1 = (float)_powf(2.0 - (param_1 + param_1),0x40400000);
  return fVar1 * -0.5 + 1.0;
}



// ============================================================
// RVA: 0x14bbac4 | Atlas.Gameplay.PingPongAnimationBehaviour.EaseInOutQuint
// ============================================================

float Atlas_Gameplay_PingPongAnimationBehaviour__EaseInOutQuint(float param_1)

{
  float fVar1;
  
  if (param_1 < 0.5) {
    return param_1 * 16.0 * param_1 * param_1 * param_1 * param_1;
  }
  fVar1 = (float)_powf(2.0 - (param_1 + param_1),0x40a00000);
  return fVar1 * -0.5 + 1.0;
}



// ============================================================
// RVA: 0x14bbb20 | Atlas.Gameplay.PingPongAnimationBehaviour.EaseInOutSine
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Atlas_Gameplay_PingPongAnimationBehaviour__EaseInOutSine(float param_1)

{
  float fVar1;
  
  fVar1 = (float)_cosf(param_1 * _UNK_033f84b4);
  return (fVar1 + -1.0) * -0.5;
}



// ============================================================
// RVA: 0x14bbb50 | Atlas.Gameplay.PingPongAnimationBehaviour..ctor
// ============================================================

undefined1  [16]
Atlas_Gameplay_PingPongAnimationBehaviour___ctor
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          ulong param_5)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_5 + 0x18) = uVar1;
  *(undefined4 *)(param_5 + 0x1c) = param_2;
  *(undefined4 *)(param_5 + 0x20) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_5 + 0x24) = uVar1;
  *(undefined4 *)(param_5 + 0x28) = param_2;
  *(undefined4 *)(param_5 + 0x2c) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_5 + 0x30) = uVar1;
  *(undefined4 *)(param_5 + 0x34) = param_2;
  *(undefined4 *)(param_5 + 0x38) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_5 + 0x3c) = uVar1;
  *(undefined4 *)(param_5 + 0x40) = param_2;
  *(undefined4 *)(param_5 + 0x44) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  *(undefined4 *)(param_5 + 0x48) = uVar1;
  *(undefined4 *)(param_5 + 0x4c) = param_2;
  *(undefined4 *)(param_5 + 0x50) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  *(undefined4 *)(param_5 + 0x54) = uVar1;
  *(undefined4 *)(param_5 + 0x58) = param_2;
  *(undefined4 *)(param_5 + 0x5c) = param_3;
  *(undefined4 *)(param_5 + 100) = 0x3f800000;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_5 + 0x6c) = uVar1;
  *(undefined4 *)(param_5 + 0x70) = param_2;
  *(undefined4 *)(param_5 + 0x74) = param_3;
  uVar1 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  *(undefined4 *)(param_5 + 0x78) = uVar1;
  *(undefined4 *)(param_5 + 0x7c) = param_2;
  *(undefined4 *)(param_5 + 0x80) = param_3;
  uVar1 = /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
  *(undefined4 *)(param_5 + 0x84) = uVar1;
  *(undefined4 *)(param_5 + 0x88) = param_2;
  *(undefined4 *)(param_5 + 0x8c) = param_3;
  *(undefined4 *)(param_5 + 0x90) = param_4;
  uVar1 = /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
  *(undefined4 *)(param_5 + 0x94) = uVar1;
  *(undefined4 *)(param_5 + 0x98) = param_2;
  *(undefined4 *)(param_5 + 0x9c) = param_3;
  *(undefined4 *)(param_5 + 0xa0) = param_4;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_5;
  return auVar2;
}



