// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartFollowCameraOffset

// ============================================================
// RVA: 0x15cc398 | Atlas.Gameplay.Kart.KartFollowCameraOffset.Rotation
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Atlas_Gameplay_Kart_KartFollowCameraOffset__Rotation(undefined4 param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  fStack_30 = (float)/*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14)
                                     ,param_1,0);
  fStack_30 = fStack_30 * _UNK_033f850c;
  fStack_2c = _UNK_033f850c * 0.0;
  fStack_28 = _UNK_033f850c * 0.0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (pcRam0000000003ec0670 == (code *)0x0) {
    pcRam0000000003ec0670 =
         (code *)func_0x00f789d4(
                                "UnityEngine.Quaternion::Internal_FromEulerRad_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&)"
                                );
  }
  (*pcRam0000000003ec0670)(&fStack_30,&uStack_40);
  return (undefined4)uStack_40;
}



// ============================================================
// RVA: 0x15cc3c4 | Atlas.Gameplay.Kart.KartFollowCameraOffset.Position
// ============================================================

undefined1  [16]
Atlas_Gameplay_Kart_KartFollowCameraOffset__Position(undefined4 param_1,undefined4 *param_2)

{
  /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(param_2[2],param_2[3],param_1,0);
  /*UnityEngine.Mathf$$Lerp*/ func_0x0323d358(*param_2,param_2[1],param_1,0);
  return ZEXT816(0);
}



// ============================================================
// RVA: 0x15cc508 | Atlas.Gameplay.Kart.KartFollowCameraOffset.Lerp
// ============================================================

void Atlas_Gameplay_Kart_KartFollowCameraOffset__Lerp
               (undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  
  uVar4 = *param_3;
  uVar11 = *param_4;
  fVar1 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(param_2,0);
  uVar5 = param_3[1];
  uVar13 = param_4[1];
  fVar2 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(param_2,0);
  fVar6 = (float)uVar4;
  fVar7 = (float)((ulong)uVar4 >> 0x20);
  fVar8 = (float)uVar5;
  fVar9 = (float)((ulong)uVar5 >> 0x20);
  uVar4 = param_3[2];
  uVar5 = param_4[2];
  fVar3 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(param_2,0);
  fVar10 = (float)uVar4;
  fVar12 = (float)((ulong)uVar4 >> 0x20);
  param_1[1] = CONCAT44(fVar9 + ((float)((ulong)uVar13 >> 0x20) - fVar9) * fVar2,
                        fVar8 + ((float)uVar13 - fVar8) * fVar2);
  *param_1 = CONCAT44(fVar7 + ((float)((ulong)uVar11 >> 0x20) - fVar7) * fVar1,
                      fVar6 + ((float)uVar11 - fVar6) * fVar1);
  param_1[2] = CONCAT44(fVar12 + ((float)((ulong)uVar5 >> 0x20) - fVar12) * fVar3,
                        fVar10 + ((float)uVar5 - fVar10) * fVar3);
  return;
}



