// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.KartAI

// ============================================================
// RVA: 0x15b9f08 | Atlas.Gameplay.Kart.KartAI.get_InputData
// ============================================================

undefined1  [16] Atlas_Gameplay_Kart_KartAI__get_InputData(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



// ============================================================
// RVA: 0x15b9f14 | Atlas.Gameplay.Kart.KartAI.Init
// ============================================================

void Atlas_Gameplay_Kart_KartAI__Init
               (long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined1 *)(param_1 + 0x44) = param_4;
  return;
}



// ============================================================
// RVA: 0x15b9f20 | Atlas.Gameplay.Kart.KartAI.PostInit
// ============================================================

void Atlas_Gameplay_Kart_KartAI__PostInit(void)

{
  return;
}



// ============================================================
// RVA: 0x15b9f24 | Atlas.Gameplay.Kart.KartAI.DeInit
// ============================================================

void Atlas_Gameplay_Kart_KartAI__DeInit(void)

{
  return;
}



// ============================================================
// RVA: 0x15b9f28 | Atlas.Gameplay.Kart.KartAI.OnFinishGame
// ============================================================

void Atlas_Gameplay_Kart_KartAI__OnFinishGame(void)

{
  return;
}



// ============================================================
// RVA: 0x15b9f2c | Atlas.Gameplay.Kart.KartAI.OnResetPosition
// ============================================================

void Atlas_Gameplay_Kart_KartAI__OnResetPosition(void)

{
  return;
}



// ============================================================
// RVA: 0x15b9f30 | Atlas.Gameplay.Kart.KartAI.UpdateTimers
// ============================================================

/* WARNING: Removing unreachable block (ram,0x015bab88) */
/* WARNING: Removing unreachable block (ram,0x015bab98) */

void Atlas_Gameplay_Kart_KartAI__UpdateTimers(long param_1,long *param_2,long param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
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
  undefined1 auVar25 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  int aiStack_178 [28];
  int iStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  
  if ((bRam0000000003eb52b0 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb52b0 = 1;
  }
  if (param_2 != (long *)0x0) {
    fVar22 = *(float *)(param_1 + 0x40);
    lVar8 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_015b9fc8;
        }
        piVar10 = piVar10 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(param_2,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,0);
LAB_015b9fc8:
    fVar12 = (float)(*(code *)*puVar4)(param_2,puVar4[1]);
    fVar22 = fVar22 - fVar12;
    fVar12 = -1.0;
    if (0.0 <= fVar22) {
      fVar12 = fVar22;
    }
    *(float *)(param_1 + 0x40) = fVar12;
    return;
  }
  auVar25 = func_0x00f78af4();
  lVar8 = auVar25._0_8_;
  if ((bRam0000000003eb52b1 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22c68);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb52b1 = 1;
  }
  uStack_100 = 0;
  uStack_f8 = 0;
  lStack_f0 = 0;
  iStack_108 = 0;
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xb8) + 0x10);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar11,0);
  if (((0.0 < *(float *)(lVar8 + 0x40)) || (*(long *)(lVar8 + 0x38) == 0)) ||
     (lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar5 == 0)) {
    aiStack_178[0] = 0x479;
    iStack_108 = 1;
    goto code_r0x015ba44c;
  }
  uVar9 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar5,0);
  if ((((uVar9 & 1) == 0) || (*(long *)(lVar8 + 0x30) == 0)) ||
     (*(long *)(*(long *)(lVar8 + 0x30) + 0x130) == 0)) goto code_r0x015baa94;
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x00f78af4();
code_r0x015baba4:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15baba8);
    (*pcVar1)();
  }
  lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if (lVar5 == 0) {
    func_0x00f78af4();
    goto code_r0x015baba4;
  }
  lVar5 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar5,0);
  fVar12 = *(float *)(lVar5 + 0x140);
  fVar19 = *(float *)(lVar5 + 0x144);
  fVar22 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar5 + 0x13c),0);
  if (*(long *)(lVar8 + 0x38) == 0) {
    func_0x00f78af4();
    goto code_r0x015baba4;
  }
  lVar6 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38);
  if (lVar6 == 0) {
    func_0x00f78af4();
    goto code_r0x015baba4;
  }
  lVar6 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(lVar6,0);
  if (lVar6 == 0) {
    func_0x00f78af4();
    goto code_r0x015baba4;
  }
  plVar7 = *(long **)(lVar6 + 0x30);
  if (plVar7 == (long *)0x0) {
    func_0x00f78af4();
    goto code_r0x015baba4;
  }
  uVar2 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
  switch(uVar2) {
  case 0:
    if (param_3 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar23 = *(float *)(param_3 + 0x10);
    iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar23 = fVar23 * 100.0;
    fVar24 = -fVar23;
    if (fVar23 != INFINITY) {
      fVar24 = fVar23;
    }
    if ((int)fVar24 <= iVar3) {
      uVar2 = *(undefined4 *)(param_3 + 0x1c);
      break;
    }
    if (*(long *)(lVar8 + 0x30) == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    lVar6 = *(long *)(*(long *)(lVar8 + 0x30) + 0x130);
    if (lVar6 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar24 = *(float *)(param_3 + 0x18);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_190,lVar6,uRam0000000003d3ae20);
    uStack_f8 = uStack_188;
    uStack_100 = uStack_190;
    lStack_f0 = lStack_180;
    do {
      do {
        do {
          uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_100,uRam0000000003d328d0);
          if ((uVar9 & 1) == 0) goto code_r0x015ba3dc;
        } while (lStack_f0 == *(long *)(lVar8 + 0x38));
        if (lStack_f0 == 0) {
          func_0x00f78af4();
          goto code_r0x015baba4;
        }
        if (*(long *)(lStack_f0 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x015baba4;
        }
        lVar6 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(*(long *)(lStack_f0 + 0x10),0);
        fVar23 = *(float *)(lVar6 + 0x140);
        fVar21 = *(float *)(lVar6 + 0x144);
        fVar13 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar6 + 0x13c),0);
        fVar16 = fVar23;
        fVar17 = fVar21;
        fVar14 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        fVar18 = fVar12;
        fVar20 = fVar19;
        fVar15 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar22,0);
      } while (fVar24 * fVar24 <
               (fVar20 - fVar17) * (fVar20 - fVar17) +
               (fVar15 - fVar14) * (fVar15 - fVar14) + (fVar18 - fVar16) * (fVar18 - fVar16));
      fVar23 = fVar23 - fVar12;
      fVar21 = fVar21 - fVar19;
      fVar16 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar13 - fVar22,0);
      if (cRam0000000003ca34fc == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca34fc = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar17 = fVar21 * fVar21 + fVar16 * fVar16 + fVar23 * fVar23;
      fVar18 = 1.0 / SQRT(fVar17);
      fVar16 = fVar16 * fVar18;
      fVar23 = fVar23 * fVar18;
      fVar21 = fVar21 * fVar18;
      if (fVar17 <= 1.1754944e-38) {
        fVar21 = 0.0;
        fVar23 = 0.0;
        fVar16 = 0.0;
      }
    } while (fVar21 * *(float *)(lVar5 + 0x120) +
             fVar16 * *(float *)(lVar5 + 0x118) + fVar23 * *(float *)(lVar5 + 0x11c) <=
             *(float *)(param_3 + 0x70));
    if (((*(long *)(lVar8 + 0x38) != 0) &&
        (lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar5 != 0)) &&
       (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar5,0), iVar3 != 0)) {
      *(undefined1 *)(lVar8 + 0x1e) = 1;
    }
code_r0x015ba3dc:
    aiStack_178[iStack_108] = 0x1c1;
    iStack_108 = iStack_108 + 1;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_100,uRam0000000003d328c8);
    if ((iStack_108 != 0) && (aiStack_178[iStack_108 + -1] == 0x1c1)) {
      iStack_108 = iStack_108 + -1;
    }
    uVar2 = *(undefined4 *)(param_3 + 0x1c);
code_r0x015ba980:
    *(undefined4 *)(lVar8 + 0x40) = uVar2;
    aiStack_178[iStack_108] = 0x479;
    goto code_r0x015baaa4;
  case 1:
    if (param_3 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar23 = *(float *)(param_3 + 0x20);
    iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar23 = fVar23 * 100.0;
    fVar24 = -fVar23;
    if (fVar23 != INFINITY) {
      fVar24 = fVar23;
    }
    if (iVar3 < (int)fVar24) {
      if (*(long *)(lVar8 + 0x30) == 0) {
        func_0x00f78af4();
        goto code_r0x015baba4;
      }
      lVar6 = *(long *)(*(long *)(lVar8 + 0x30) + 0x130);
      if (lVar6 == 0) {
        func_0x00f78af4();
        goto code_r0x015baba4;
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 == 0) {
        func_0x00f78af4();
        goto code_r0x015baba4;
      }
      fVar24 = *(float *)(param_3 + 0x2c);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_190,lVar6,uRam0000000003d3ae20);
      uStack_f8 = uStack_188;
      uStack_100 = uStack_190;
      lStack_f0 = lStack_180;
      do {
        do {
          do {
            uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_100,uRam0000000003d328d0);
            if ((uVar9 & 1) == 0) goto code_r0x015ba920;
          } while (lStack_f0 == *(long *)(lVar8 + 0x38));
          if (lStack_f0 == 0) {
            func_0x00f78af4();
            goto code_r0x015baba4;
          }
          if (*(long *)(lStack_f0 + 0x10) == 0) {
            func_0x00f78af4();
            goto code_r0x015baba4;
          }
          lVar6 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(*(long *)(lStack_f0 + 0x10),0);
          fVar23 = *(float *)(lVar6 + 0x140);
          fVar21 = *(float *)(lVar6 + 0x144);
          fVar13 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar6 + 0x13c),0);
          fVar16 = fVar23;
          fVar17 = fVar21;
          fVar14 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
          fVar18 = fVar12;
          fVar20 = fVar19;
          fVar15 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar22,0);
        } while (fVar24 * fVar24 <
                 (fVar20 - fVar17) * (fVar20 - fVar17) +
                 (fVar15 - fVar14) * (fVar15 - fVar14) + (fVar18 - fVar16) * (fVar18 - fVar16));
        fVar23 = fVar23 - fVar12;
        fVar21 = fVar21 - fVar19;
        fVar16 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar13 - fVar22,0);
        if (cRam0000000003ca34fc == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar17 = fVar21 * fVar21 + fVar16 * fVar16 + fVar23 * fVar23;
        fVar18 = 1.0 / SQRT(fVar17);
        fVar16 = fVar16 * fVar18;
        fVar23 = fVar23 * fVar18;
        fVar21 = fVar21 * fVar18;
        if (fVar17 <= 1.1754944e-38) {
          fVar21 = 0.0;
          fVar23 = 0.0;
          fVar16 = 0.0;
        }
      } while (fVar21 * *(float *)(lVar5 + 0x120) +
               fVar16 * *(float *)(lVar5 + 0x118) + fVar23 * *(float *)(lVar5 + 0x11c) <=
               *(float *)(param_3 + 0x74));
      if (((*(long *)(lVar8 + 0x38) != 0) &&
          (lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar5 != 0)) &&
         (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar5,0), iVar3 != 0)) {
        *(undefined1 *)(lVar8 + 0x1e) = 1;
      }
code_r0x015ba920:
      aiStack_178[iStack_108] = 0x38d;
      iStack_108 = iStack_108 + 1;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_100,uRam0000000003d328c8);
      if ((iStack_108 != 0) && (aiStack_178[iStack_108 + -1] == 0x38d)) {
        iStack_108 = iStack_108 + -1;
      }
      uVar2 = *(undefined4 *)(param_3 + 0x24);
      goto code_r0x015ba980;
    }
    uVar2 = *(undefined4 *)(param_3 + 0x24);
    break;
  case 2:
    if (param_3 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar12 = *(float *)(param_3 + 0x30);
    iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar12 = fVar12 * 100.0;
    fVar22 = -fVar12;
    if (fVar12 != INFINITY) {
      fVar22 = fVar12;
    }
    if (((iVar3 < (int)fVar22) && (*(long *)(lVar8 + 0x38) != 0)) &&
       ((lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar5 != 0 &&
        (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar5,0), iVar3 != 0)))) {
      *(undefined1 *)(lVar8 + 0x1e) = 1;
    }
    uVar2 = *(undefined4 *)(param_3 + 0x34);
    break;
  case 3:
    if (param_3 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar12 = *(float *)(param_3 + 0x38);
    iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar12 = fVar12 * 100.0;
    fVar22 = -fVar12;
    if (fVar12 != INFINITY) {
      fVar22 = fVar12;
    }
    if ((((iVar3 < (int)fVar22) && (*(long *)(lVar8 + 0x38) != 0)) &&
        (lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar5 != 0)) &&
       (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar5,0), iVar3 != 0)) {
      *(undefined1 *)(lVar8 + 0x1e) = 1;
    }
    uVar2 = *(undefined4 *)(param_3 + 0x3c);
    break;
  case 4:
    if (*(long *)(lVar8 + 0x38) == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if (lVar5 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    lVar5 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar5,0);
    if (param_3 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar22 = 0.0;
    if (*(float *)(param_3 + 0x78) <
        (float)((ulong)*(undefined8 *)(lVar5 + 0x11c) >> 0x20) *
        (float)((ulong)*(undefined8 *)(lVar8 + 0x54) >> 0x20) +
        *(float *)(lVar5 + 0x118) * *(float *)(lVar8 + 0x50) +
        (float)*(undefined8 *)(lVar5 + 0x11c) * (float)*(undefined8 *)(lVar8 + 0x54)) {
      if (auVar25._8_8_ == 0) {
        func_0x00f78af4();
        goto code_r0x015baba4;
      }
      fVar22 = *(float *)(lVar8 + 0x48);
      fVar12 = (float)func_0x0001bd10(0,/*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618,auVar25._8_8_);
      fVar22 = fVar22 + fVar12;
    }
    *(float *)(lVar8 + 0x48) = fVar22;
    if (*(float *)(param_3 + 0x4c) <= fVar22) {
      fVar12 = *(float *)(param_3 + 0x40);
      iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
      fVar12 = fVar12 * 100.0;
      fVar22 = -fVar12;
      if (fVar12 != INFINITY) {
        fVar22 = fVar12;
      }
      if ((int)fVar22 <= iVar3) {
        uVar2 = *(undefined4 *)(param_3 + 0x44);
        break;
      }
      if (((*(long *)(lVar8 + 0x38) != 0) &&
          (lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar5 != 0)) &&
         (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar5,0), iVar3 != 0)) {
        *(undefined1 *)(lVar8 + 0x1e) = 1;
      }
      *(undefined4 *)(lVar8 + 0x40) = *(undefined4 *)(param_3 + 0x44);
      *(undefined4 *)(lVar8 + 0x48) = 0;
    }
    goto code_r0x015baa94;
  case 5:
    if (param_3 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar12 = *(float *)(param_3 + 0x50);
    iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar12 = fVar12 * 100.0;
    fVar22 = -fVar12;
    if (fVar12 != INFINITY) {
      fVar22 = fVar12;
    }
    if (((iVar3 < (int)fVar22) && (*(long *)(lVar8 + 0x38) != 0)) &&
       ((lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar5 != 0 &&
        (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar5,0), iVar3 != 0)))) {
      *(undefined1 *)(lVar8 + 0x1e) = 1;
    }
    uVar2 = *(undefined4 *)(param_3 + 0x54);
    break;
  case 6:
    if (param_3 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar12 = *(float *)(param_3 + 0x58);
    iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar12 = fVar12 * 100.0;
    fVar22 = -fVar12;
    if (fVar12 != INFINITY) {
      fVar22 = fVar12;
    }
    if ((((iVar3 < (int)fVar22) && (*(long *)(lVar8 + 0x38) != 0)) &&
        (lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar5 != 0)) &&
       (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar5,0), iVar3 != 0)) {
      *(undefined1 *)(lVar8 + 0x1e) = 1;
    }
    uVar2 = *(undefined4 *)(param_3 + 0x5c);
    break;
  case 7:
    if (param_3 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar12 = *(float *)(param_3 + 0x60);
    iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar12 = fVar12 * 100.0;
    fVar22 = -fVar12;
    if (fVar12 != INFINITY) {
      fVar22 = fVar12;
    }
    if (((iVar3 < (int)fVar22) && (*(long *)(lVar8 + 0x38) != 0)) &&
       ((lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x38), lVar5 != 0 &&
        (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar5,0), iVar3 != 0)))) {
      *(undefined1 *)(lVar8 + 0x1e) = 1;
    }
    uVar2 = *(undefined4 *)(param_3 + 100);
    break;
  default:
    goto code_r0x015baa94;
  }
  *(undefined4 *)(lVar8 + 0x40) = uVar2;
code_r0x015baa94:
  aiStack_178[iStack_108] = 0x479;
code_r0x015baaa4:
  iStack_108 = iStack_108 + 1;
code_r0x015ba44c:
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar11,0);
  return;
}



// ============================================================
// RVA: 0x15ba000 | Atlas.Gameplay.Kart.KartAI.UpdateUseUsable
// ============================================================

/* WARNING: Removing unreachable block (ram,0x015bab88) */
/* WARNING: Removing unreachable block (ram,0x015bab98) */

void Atlas_Gameplay_Kart_KartAI__UpdateUseUsable(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
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
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  int aiStack_138 [28];
  int iStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  if ((bRam0000000003eb52b1 & 1) == 0) {
    func_0x00f78a20(0x3d328c8);
    func_0x00f78a20(0x3d328d0);
    func_0x00f78a20(0x3d328d8);
    func_0x00f78a20(0x3d22618);
    func_0x00f78a20(0x3d22c68);
    func_0x00f78a20(0x3d3ae20);
    bRam0000000003eb52b1 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  iStack_c8 = 0;
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xb8) + 0x10);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar8,0);
  if (((0.0 < *(float *)(param_1 + 0x40)) || (*(long *)(param_1 + 0x38) == 0)) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x38), lVar4 == 0)) {
    aiStack_138[0] = 0x479;
    iStack_c8 = 1;
    goto code_r0x015ba44c;
  }
  uVar5 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar4,0);
  if ((((uVar5 & 1) == 0) || (*(long *)(param_1 + 0x30) == 0)) ||
     (*(long *)(*(long *)(param_1 + 0x30) + 0x130) == 0)) goto LAB_015baa94;
  if (*(long *)(param_1 + 0x38) == 0) {
    func_0x00f78af4();
code_r0x015baba4:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x15baba8);
    (*pcVar1)();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
  if (lVar4 == 0) {
    func_0x00f78af4();
    goto code_r0x015baba4;
  }
  lVar4 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar4,0);
  fVar15 = *(float *)(lVar4 + 0x140);
  fVar17 = *(float *)(lVar4 + 0x144);
  fVar9 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar4 + 0x13c),0);
  if (*(long *)(param_1 + 0x38) == 0) {
    func_0x00f78af4();
    goto code_r0x015baba4;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x38);
  if (lVar6 == 0) {
    func_0x00f78af4();
    goto code_r0x015baba4;
  }
  lVar6 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CurHeldUsable*/ func_0x015e1b30(lVar6,0);
  if (lVar6 == 0) {
    func_0x00f78af4();
    goto code_r0x015baba4;
  }
  plVar7 = *(long **)(lVar6 + 0x30);
  if (plVar7 == (long *)0x0) {
    func_0x00f78af4();
    goto code_r0x015baba4;
  }
  uVar2 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
  switch(uVar2) {
  case 0:
    if (param_3 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar20 = *(float *)(param_3 + 0x10);
    iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar20 = fVar20 * 100.0;
    fVar21 = -fVar20;
    if (fVar20 != INFINITY) {
      fVar21 = fVar20;
    }
    if ((int)fVar21 <= iVar3) {
      uVar2 = *(undefined4 *)(param_3 + 0x1c);
      break;
    }
    if (*(long *)(param_1 + 0x30) == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x130);
    if (lVar6 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if (lVar6 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar21 = *(float *)(param_3 + 0x18);
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_150,lVar6,uRam0000000003d3ae20);
    uStack_b8 = uStack_148;
    uStack_c0 = uStack_150;
    lStack_b0 = lStack_140;
    do {
      do {
        do {
          uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c0,uRam0000000003d328d0);
          if ((uVar5 & 1) == 0) goto code_r0x015ba3dc;
        } while (lStack_b0 == *(long *)(param_1 + 0x38));
        if (lStack_b0 == 0) {
          func_0x00f78af4();
          goto code_r0x015baba4;
        }
        if (*(long *)(lStack_b0 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x015baba4;
        }
        lVar6 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(*(long *)(lStack_b0 + 0x10),0);
        fVar20 = *(float *)(lVar6 + 0x140);
        fVar19 = *(float *)(lVar6 + 0x144);
        fVar10 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar6 + 0x13c),0);
        fVar13 = fVar20;
        fVar14 = fVar19;
        fVar11 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        fVar16 = fVar15;
        fVar18 = fVar17;
        fVar12 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar9,0);
      } while (fVar21 * fVar21 <
               (fVar18 - fVar14) * (fVar18 - fVar14) +
               (fVar12 - fVar11) * (fVar12 - fVar11) + (fVar16 - fVar13) * (fVar16 - fVar13));
      fVar20 = fVar20 - fVar15;
      fVar19 = fVar19 - fVar17;
      fVar13 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar10 - fVar9,0);
      if (cRam0000000003ca34fc == '\0') {
        func_0x00f78a20(0x3d232c0);
        cRam0000000003ca34fc = '\x01';
      }
      if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      fVar14 = fVar19 * fVar19 + fVar13 * fVar13 + fVar20 * fVar20;
      fVar16 = 1.0 / SQRT(fVar14);
      fVar13 = fVar13 * fVar16;
      fVar20 = fVar20 * fVar16;
      fVar19 = fVar19 * fVar16;
      if (fVar14 <= 1.1754944e-38) {
        fVar19 = 0.0;
        fVar20 = 0.0;
        fVar13 = 0.0;
      }
    } while (fVar19 * *(float *)(lVar4 + 0x120) +
             fVar13 * *(float *)(lVar4 + 0x118) + fVar20 * *(float *)(lVar4 + 0x11c) <=
             *(float *)(param_3 + 0x70));
    if (((*(long *)(param_1 + 0x38) != 0) &&
        (lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x38), lVar4 != 0)) &&
       (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar4,0), iVar3 != 0)) {
      *(undefined1 *)(param_1 + 0x1e) = 1;
    }
code_r0x015ba3dc:
    aiStack_138[iStack_c8] = 0x1c1;
    iStack_c8 = iStack_c8 + 1;
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,uRam0000000003d328c8);
    if ((iStack_c8 != 0) && (aiStack_138[iStack_c8 + -1] == 0x1c1)) {
      iStack_c8 = iStack_c8 + -1;
    }
    uVar2 = *(undefined4 *)(param_3 + 0x1c);
code_r0x015ba980:
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    aiStack_138[iStack_c8] = 0x479;
    goto code_r0x015baaa4;
  case 1:
    if (param_3 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar20 = *(float *)(param_3 + 0x20);
    iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar20 = fVar20 * 100.0;
    fVar21 = -fVar20;
    if (fVar20 != INFINITY) {
      fVar21 = fVar20;
    }
    if (iVar3 < (int)fVar21) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x00f78af4();
        goto code_r0x015baba4;
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x130);
      if (lVar6 == 0) {
        func_0x00f78af4();
        goto code_r0x015baba4;
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 == 0) {
        func_0x00f78af4();
        goto code_r0x015baba4;
      }
      fVar21 = *(float *)(param_3 + 0x2c);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_150,lVar6,uRam0000000003d3ae20);
      uStack_b8 = uStack_148;
      uStack_c0 = uStack_150;
      lStack_b0 = lStack_140;
      do {
        do {
          do {
            uVar5 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c0,uRam0000000003d328d0);
            if ((uVar5 & 1) == 0) goto code_r0x015ba920;
          } while (lStack_b0 == *(long *)(param_1 + 0x38));
          if (lStack_b0 == 0) {
            func_0x00f78af4();
            goto code_r0x015baba4;
          }
          if (*(long *)(lStack_b0 + 0x10) == 0) {
            func_0x00f78af4();
            goto code_r0x015baba4;
          }
          lVar6 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(*(long *)(lStack_b0 + 0x10),0);
          fVar20 = *(float *)(lVar6 + 0x140);
          fVar19 = *(float *)(lVar6 + 0x144);
          fVar10 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(*(undefined4 *)(lVar6 + 0x13c),0);
          fVar13 = fVar20;
          fVar14 = fVar19;
          fVar11 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
          fVar16 = fVar15;
          fVar18 = fVar17;
          fVar12 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar9,0);
        } while (fVar21 * fVar21 <
                 (fVar18 - fVar14) * (fVar18 - fVar14) +
                 (fVar12 - fVar11) * (fVar12 - fVar11) + (fVar16 - fVar13) * (fVar16 - fVar13));
        fVar20 = fVar20 - fVar15;
        fVar19 = fVar19 - fVar17;
        fVar13 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(fVar10 - fVar9,0);
        if (cRam0000000003ca34fc == '\0') {
          func_0x00f78a20(0x3d232c0);
          cRam0000000003ca34fc = '\x01';
        }
        if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        fVar14 = fVar19 * fVar19 + fVar13 * fVar13 + fVar20 * fVar20;
        fVar16 = 1.0 / SQRT(fVar14);
        fVar13 = fVar13 * fVar16;
        fVar20 = fVar20 * fVar16;
        fVar19 = fVar19 * fVar16;
        if (fVar14 <= 1.1754944e-38) {
          fVar19 = 0.0;
          fVar20 = 0.0;
          fVar13 = 0.0;
        }
      } while (fVar19 * *(float *)(lVar4 + 0x120) +
               fVar13 * *(float *)(lVar4 + 0x118) + fVar20 * *(float *)(lVar4 + 0x11c) <=
               *(float *)(param_3 + 0x74));
      if (((*(long *)(param_1 + 0x38) != 0) &&
          (lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x38), lVar4 != 0)) &&
         (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar4,0), iVar3 != 0)) {
        *(undefined1 *)(param_1 + 0x1e) = 1;
      }
code_r0x015ba920:
      aiStack_138[iStack_c8] = 0x38d;
      iStack_c8 = iStack_c8 + 1;
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,uRam0000000003d328c8);
      if ((iStack_c8 != 0) && (aiStack_138[iStack_c8 + -1] == 0x38d)) {
        iStack_c8 = iStack_c8 + -1;
      }
      uVar2 = *(undefined4 *)(param_3 + 0x24);
      goto code_r0x015ba980;
    }
    uVar2 = *(undefined4 *)(param_3 + 0x24);
    break;
  case 2:
    if (param_3 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar15 = *(float *)(param_3 + 0x30);
    iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar15 = fVar15 * 100.0;
    fVar9 = -fVar15;
    if (fVar15 != INFINITY) {
      fVar9 = fVar15;
    }
    if (((iVar3 < (int)fVar9) && (*(long *)(param_1 + 0x38) != 0)) &&
       ((lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x38), lVar4 != 0 &&
        (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar4,0), iVar3 != 0)))) {
      *(undefined1 *)(param_1 + 0x1e) = 1;
    }
    uVar2 = *(undefined4 *)(param_3 + 0x34);
    break;
  case 3:
    if (param_3 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar15 = *(float *)(param_3 + 0x38);
    iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar15 = fVar15 * 100.0;
    fVar9 = -fVar15;
    if (fVar15 != INFINITY) {
      fVar9 = fVar15;
    }
    if ((((iVar3 < (int)fVar9) && (*(long *)(param_1 + 0x38) != 0)) &&
        (lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x38), lVar4 != 0)) &&
       (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar4,0), iVar3 != 0)) {
      *(undefined1 *)(param_1 + 0x1e) = 1;
    }
    uVar2 = *(undefined4 *)(param_3 + 0x3c);
    break;
  case 4:
    if (*(long *)(param_1 + 0x38) == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
    if (lVar4 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    lVar4 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar4,0);
    if (param_3 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar9 = 0.0;
    if (*(float *)(param_3 + 0x78) <
        (float)((ulong)*(undefined8 *)(lVar4 + 0x11c) >> 0x20) *
        (float)((ulong)*(undefined8 *)(param_1 + 0x54) >> 0x20) +
        *(float *)(lVar4 + 0x118) * *(float *)(param_1 + 0x50) +
        (float)*(undefined8 *)(lVar4 + 0x11c) * (float)*(undefined8 *)(param_1 + 0x54)) {
      if (param_2 == 0) {
        func_0x00f78af4();
        goto code_r0x015baba4;
      }
      fVar9 = *(float *)(param_1 + 0x48);
      fVar15 = (float)func_0x0001bd10(0,/*Core.Application.IUpdateParams_TypeInfo*/ uRam0000000003d22618,param_2);
      fVar9 = fVar9 + fVar15;
    }
    *(float *)(param_1 + 0x48) = fVar9;
    if (*(float *)(param_3 + 0x4c) <= fVar9) {
      fVar15 = *(float *)(param_3 + 0x40);
      iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
      fVar15 = fVar15 * 100.0;
      fVar9 = -fVar15;
      if (fVar15 != INFINITY) {
        fVar9 = fVar15;
      }
      if ((int)fVar9 <= iVar3) {
        uVar2 = *(undefined4 *)(param_3 + 0x44);
        break;
      }
      if (((*(long *)(param_1 + 0x38) != 0) &&
          (lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x38), lVar4 != 0)) &&
         (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar4,0), iVar3 != 0)) {
        *(undefined1 *)(param_1 + 0x1e) = 1;
      }
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_3 + 0x44);
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    goto LAB_015baa94;
  case 5:
    if (param_3 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar15 = *(float *)(param_3 + 0x50);
    iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar15 = fVar15 * 100.0;
    fVar9 = -fVar15;
    if (fVar15 != INFINITY) {
      fVar9 = fVar15;
    }
    if (((iVar3 < (int)fVar9) && (*(long *)(param_1 + 0x38) != 0)) &&
       ((lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x38), lVar4 != 0 &&
        (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar4,0), iVar3 != 0)))) {
      *(undefined1 *)(param_1 + 0x1e) = 1;
    }
    uVar2 = *(undefined4 *)(param_3 + 0x54);
    break;
  case 6:
    if (param_3 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar15 = *(float *)(param_3 + 0x58);
    iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar15 = fVar15 * 100.0;
    fVar9 = -fVar15;
    if (fVar15 != INFINITY) {
      fVar9 = fVar15;
    }
    if ((((iVar3 < (int)fVar9) && (*(long *)(param_1 + 0x38) != 0)) &&
        (lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x38), lVar4 != 0)) &&
       (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar4,0), iVar3 != 0)) {
      *(undefined1 *)(param_1 + 0x1e) = 1;
    }
    uVar2 = *(undefined4 *)(param_3 + 0x5c);
    break;
  case 7:
    if (param_3 == 0) {
      func_0x00f78af4();
      goto code_r0x015baba4;
    }
    fVar15 = *(float *)(param_3 + 0x60);
    iVar3 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
    fVar15 = fVar15 * 100.0;
    fVar9 = -fVar15;
    if (fVar15 != INFINITY) {
      fVar9 = fVar15;
    }
    if (((iVar3 < (int)fVar9) && (*(long *)(param_1 + 0x38) != 0)) &&
       ((lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x38), lVar4 != 0 &&
        (iVar3 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar4,0), iVar3 != 0)))) {
      *(undefined1 *)(param_1 + 0x1e) = 1;
    }
    uVar2 = *(undefined4 *)(param_3 + 100);
    break;
  default:
    goto LAB_015baa94;
  }
  *(undefined4 *)(param_1 + 0x40) = uVar2;
LAB_015baa94:
  aiStack_138[iStack_c8] = 0x479;
code_r0x015baaa4:
  iStack_c8 = iStack_c8 + 1;
code_r0x015ba44c:
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar8,0);
  return;
}



// ============================================================
// RVA: 0x15bad18 | Atlas.Gameplay.Kart.KartAI.PassRoll
// ============================================================

bool Atlas_Gameplay_Kart_KartAI__PassRoll(float param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
  param_1 = param_1 * 100.0;
  fVar1 = -param_1;
  if (param_1 != INFINITY) {
    fVar1 = param_1;
  }
  return iVar2 < (int)fVar1;
}



// ============================================================
// RVA: 0x15bad74 | Atlas.Gameplay.Kart.KartAI.TryFireUsable
// ============================================================

void Atlas_Gameplay_Kart_KartAI__TryFireUsable(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (((*(long *)(param_1 + 0x38) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x38), lVar2 != 0)) &&
     (iVar1 = /*Atlas.Gameplay.Kart.KartUsableManager$$get_CanStartUseLocal*/ func_0x015e1b38(lVar2,0), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  return;
}



// ============================================================
// RVA: 0x15badb4 | Atlas.Gameplay.Kart.KartAI.ApplyHopping
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Gameplay_Kart_KartAI__ApplyHopping(long param_1)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  
  if ((bRam0000000003eb52b2 & 1) == 0) {
    func_0x00f78a20(0x3d53510);
    func_0x00f78a20(0x3d22c68);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb52b2 = 1;
  }
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  if (((*(byte *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xb8) + 0x18);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar6,0);
  if (*(long *)(param_1 + 0x38) == 0) {
    func_0x00f78af4();
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
    if (lVar3 == 0) {
      func_0x00f78af4();
    }
    else {
      lVar3 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar3,0);
      if ((*(char *)(lVar3 + 0x3c) == '\0') ||
         (bVar1 = *(byte *)(param_1 + 0x44), *(byte *)(param_1 + 0x44) = bVar1 ^ 1, bVar1 != 0))
      goto LAB_015baf70;
      if (*(long *)(param_1 + 0x38) == 0) {
        func_0x00f78af4();
      }
      else {
        lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
        if (lVar4 != 0) {
          lVar4 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Suspension*/ func_0x015d2144(lVar4,0);
          fVar10 = *(float *)(lVar4 + 0x14);
          uVar8 = *(undefined4 *)(lVar3 + 0x144);
          /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c((char)*(undefined4 *)(lVar3 + 0x13c),*(undefined4 *)(lVar3 + 0x140),uVar8,
                          0);
          uVar7 = *(undefined4 *)(lVar3 + 0x11c);
          uVar9 = *(undefined4 *)(lVar3 + 0x120);
          /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c((char)*(undefined4 *)(lVar3 + 0x118),uVar7,uVar9,0);
          uVar5 = /*UnityEngine.Physics$$Raycast*/ func_0x0329ffb4(extraout_b0,fVar10 + _UNK_033f8aa8,uVar8,
                                  CONCAT13(extraout_var_01,
                                           CONCAT12(extraout_var_00,
                                                    CONCAT11(extraout_var,extraout_b0_00))),uVar7,
                                  uVar9,0x40800000,&uStack_80,0);
          if ((uVar5 & 1) != 0) {
            lVar3 = /*UnityEngine.RaycastHit$$get_collider*/ func_0x032a1e30(&uStack_80,0);
            if (lVar3 == 0) {
              func_0x00f78af4();
              goto code_r0x015bafc4;
            }
            lVar3 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar3,uRam0000000003d53510);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar3,0,0);
            if ((uVar5 & 1) == 0) {
              if (lVar3 == 0) {
                func_0x00f78af4();
                goto code_r0x015bafc4;
              }
              if (*(char *)(lVar3 + 0x20) != '\0') {
                *(undefined1 *)(param_1 + 0x1c) = 1;
              }
            }
          }
LAB_015baf70:
          /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$EndSample*/ func_0x03250f64(uVar6,0);
          return;
        }
        func_0x00f78af4();
      }
    }
  }
code_r0x015bafc4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x15bafc8);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x15bb030 | Atlas.Gameplay.Kart.KartAI.TryHopBoost
// ============================================================

void Atlas_Gameplay_Kart_KartAI__TryHopBoost(float param_1,long param_2)

{
  int iVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  if ((*(long *)(param_2 + 0x38) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_2 + 0x38) + 0x10), lVar5 != 0)) {
    lVar5 = /*Atlas.Gameplay.Kart.KartPhysics$$get_LngForce*/ func_0x015d214c(lVar5,0);
    if ((*(long *)(param_2 + 0x38) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_2 + 0x38) + 0x10), lVar7 != 0)) {
      iVar1 = *(int *)(lVar5 + 0x44);
      lVar5 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar7,0);
      if ((*(char *)(lVar5 + 0x3c) != '\0' && 0 < iVar1) && (*(char *)(param_2 + 0x4c) == '\0')) {
        iVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
        param_1 = param_1 * 100.0;
        fVar2 = -param_1;
        if (param_1 != INFINITY) {
          fVar2 = param_1;
        }
        if (iVar4 < (int)fVar2) {
          *(undefined2 *)(param_2 + 0x1c) = 1;
        }
      }
      *(bool *)(param_2 + 0x4c) = 0 < iVar1;
      return;
    }
  }
  auVar9 = func_0x00f78af4();
  lVar5 = auVar9._0_8_;
  if ((bRam0000000003eb52b3 & 1) == 0) {
    func_0x00f78a20(0x3d22c68);
    bRam0000000003eb52b3 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xb8) + 0x20);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar8,0);
  if (*(long *)(lVar5 + 0x38) == 0) {
    func_0x00f78af4();
  }
  else {
    lVar7 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if (lVar7 != 0) {
      uVar6 = /*Atlas.Gameplay.Kart.KartPhysics$$get_HopInvuln*/ func_0x015d21ac(lVar7,0);
      if (((((uVar6 & 1) == 0) && (*(long *)(lVar5 + 0x30) != 0)) && (*(long *)(lVar5 + 0x38) != 0))
         && ((lVar7 = *(long *)(*(long *)(lVar5 + 0x30) + 0xa0), lVar7 != 0 &&
             (/*Atlas.Gameplay.Kart.KartAI$$TryHopOverRicochet*/ func_0x015bb248(lVar5,auVar9._8_8_,lVar7), *(char *)(lVar5 + 0x1c) == '\0')))) {
        /*Atlas.Gameplay.Kart.KartAI$$TryHopOverTurd*/ func_0x015bb654(lVar5,auVar9._8_8_,lVar7);
      }
      if (pcRam0000000003ec05a0 == (code *)0x0) {
        pcRam0000000003ec05a0 =
             (code *)func_0x00f789d4(
                                    "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec05a0)(uVar8);
      return;
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x15bb1f4);
  (*pcVar3)();
}



// ============================================================
// RVA: 0x15bb100 | Atlas.Gameplay.Kart.KartAI.ApplyHoppingUsables
// ============================================================

void Atlas_Gameplay_Kart_KartAI__ApplyHoppingUsables(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000003eb52b3 & 1) == 0) {
    func_0x00f78a20(0x3d22c68);
    bRam0000000003eb52b3 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xb8) + 0x20);
  /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar4,0);
  if (*(long *)(param_1 + 0x38) == 0) {
    func_0x00f78af4();
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
    if (lVar2 != 0) {
      uVar3 = /*Atlas.Gameplay.Kart.KartPhysics$$get_HopInvuln*/ func_0x015d21ac(lVar2,0);
      if (((((uVar3 & 1) == 0) && (*(long *)(param_1 + 0x30) != 0)) &&
          (*(long *)(param_1 + 0x38) != 0)) &&
         (lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0xa0), lVar2 != 0)) {
        /*Atlas.Gameplay.Kart.KartAI$$TryHopOverRicochet*/ func_0x015bb248(param_1,param_2,lVar2);
        if (*(char *)(param_1 + 0x1c) == '\0') {
          /*Atlas.Gameplay.Kart.KartAI$$TryHopOverTurd*/ func_0x015bb654(param_1,param_2,lVar2);
        }
      }
      if (pcRam0000000003ec05a0 == (code *)0x0) {
        pcRam0000000003ec05a0 =
             (code *)func_0x00f789d4(
                                    "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000003ec05a0)(uVar4);
      return;
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x15bb1f4);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x15bb248 | Atlas.Gameplay.Kart.KartAI.TryHopOverRicochet
// ============================================================

void Atlas_Gameplay_Kart_KartAI__TryHopOverRicochet(long param_1,long param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  
  if ((bRam0000000003eb52b4 & 1) == 0) {
    func_0x00f78a20(0x3d432e8);
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d3a7d0);
    func_0x00f78a20(0x3d244c0);
    bRam0000000003eb52b4 = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  if (param_3 != 0) {
    lVar5 = /*Core.Actors.ActorManager$$FindActorGroup<RicochetProjectile>*/ func_0x0171e69c(param_3,uRam0000000003d432e8);
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x10) == 0) goto LAB_015bb560;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,*(long *)(lVar5 + 0x10),uRam0000000003d3a7d0);
      uStack_a8 = uStack_c0;
      uStack_b0 = uStack_c8;
      plStack_a0 = plStack_b8;
      do {
        do {
          do {
            do {
              do {
                uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_b0,uRam0000000003d325c8);
                plVar1 = plStack_a0;
                if ((uVar6 & 1) == 0) goto LAB_015bb528;
              } while (plStack_a0 == (long *)0x0);
            } while (((*(byte *)(*plStack_a0 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.RicochetProjectile_TypeInfo*/ lRam0000000003d244c0 + 300)) ||
                     (*(long *)(*(long *)(*plStack_a0 + 200) +
                                (ulong)*(byte *)(/*Atlas.Gameplay.Usables.RicochetProjectile_TypeInfo*/ lRam0000000003d244c0 + 300) * 8 + -8) !=
                      /*Atlas.Gameplay.Usables.RicochetProjectile_TypeInfo*/ lRam0000000003d244c0)) || ((char)plStack_a0[3] == '\0'));
            if (param_2 == 0) goto LAB_015bb564;
            fVar15 = *(float *)(param_2 + 0x68);
            iVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
            fVar15 = fVar15 * 100.0;
            dVar11 = (double)fVar15;
            dVar14 = -dVar11;
            dVar9 = dVar14;
            if (fVar15 != INFINITY) {
              dVar9 = dVar11;
            }
          } while ((int)dVar9 <= iVar4);
          lVar5 = /*Atlas.Gameplay.Usables.RicochetProjectile$$get_RicochetBehaviour*/ func_0x014e4268(plVar1,0);
          fVar12 = SUB84(dVar14,0);
          fVar15 = SUB84(dVar11,0);
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x015bb5b8;
          }
          lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x015bb5b8;
          }
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
          fVar7 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
          if (*(long *)(param_1 + 0x38) == 0) {
            func_0x00f78af4();
            goto code_r0x015bb5b8;
          }
          lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x015bb5b8;
          }
          lVar5 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar5,0);
          fVar7 = *(float *)(lVar5 + 0x13c) - fVar7;
          fVar15 = *(float *)(lVar5 + 0x140) - fVar15;
          fVar12 = *(float *)(lVar5 + 0x144) - fVar12;
          fVar10 = fVar12 * fVar12;
          fVar15 = fVar10 + fVar7 * fVar7 + fVar15 * fVar15;
          bVar3 = true;
          if ((fVar15 <= 30.0) && (bVar3 = false, !NAN(fVar15))) {
            bVar3 = fVar15 < 24.0;
          }
        } while (bVar3);
        lVar5 = /*Atlas.Gameplay.Usables.RicochetProjectile$$get_RicochetBehaviour*/ func_0x014e4268(plVar1,0);
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x015bb5b8;
        }
        lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x015bb5b8;
        }
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
        fVar15 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        if (*(long *)(param_1 + 0x38) == 0) {
          func_0x00f78af4();
          goto code_r0x015bb5b8;
        }
        lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x015bb5b8;
        }
        fVar7 = fVar10;
        fVar13 = fVar12;
        lVar5 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar5,0);
        fVar16 = *(float *)(lVar5 + 0x13c);
        fVar17 = *(float *)(lVar5 + 0x140);
        fVar18 = *(float *)(lVar5 + 0x144);
        lVar5 = /*Atlas.Gameplay.Usables.RicochetProjectile$$get_RicochetBehaviour*/ func_0x014e4268(plVar1,0);
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x015bb5b8;
        }
        if (*(long *)(lVar5 + 0x50) == 0) {
          func_0x00f78af4();
          goto code_r0x015bb5b8;
        }
        /*UnityEngine.Rigidbody$$get_velocity*/ func_0x032a20f4(*(long *)(lVar5 + 0x50),0);
        fVar8 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        if ((fVar12 - fVar18) * fVar13 + (fVar15 - fVar16) * fVar8 + (fVar10 - fVar17) * fVar7 < 0.0
           ) {
          *(undefined2 *)(param_1 + 0x1c) = 1;
          break;
        }
      } while (*(char *)(param_1 + 0x1c) == '\0');
LAB_015bb528:
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_b0,uRam0000000003d325c0);
    }
    return;
  }
LAB_015bb560:
  func_0x00f78af4();
LAB_015bb564:
  func_0x00f78af4();
code_r0x015bb5b8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x15bb5bc);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x15bb654 | Atlas.Gameplay.Kart.KartAI.TryHopOverTurd
// ============================================================

void Atlas_Gameplay_Kart_KartAI__TryHopOverTurd(long param_1,long param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  
  if ((bRam0000000003eb52b5 & 1) == 0) {
    func_0x00f78a20(0x3d432d8);
    func_0x00f78a20(0x3d325c0);
    func_0x00f78a20(0x3d325c8);
    func_0x00f78a20(0x3d325d0);
    func_0x00f78a20(0x3d21c08);
    func_0x00f78a20(0x3d3a7d0);
    bRam0000000003eb52b5 = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  if (param_3 != 0) {
    lVar5 = /*Core.Actors.ActorManager$$FindActorGroup<RicochetProjectile>*/ func_0x0171e69c(param_3,uRam0000000003d432d8);
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x10) == 0) goto LAB_015bb964;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_c8,*(long *)(lVar5 + 0x10),uRam0000000003d3a7d0);
      uStack_a8 = uStack_c0;
      uStack_b0 = uStack_c8;
      plStack_a0 = plStack_b8;
      do {
        do {
          do {
            do {
              do {
                uVar6 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_b0,uRam0000000003d325c8);
                plVar1 = plStack_a0;
                if ((uVar6 & 1) == 0) goto LAB_015bb92c;
              } while (plStack_a0 == (long *)0x0);
            } while (((*(byte *)(*plStack_a0 + 300) < *(byte *)(/*Atlas.Gameplay.Usables.GoldenTurdProjectile_TypeInfo*/ lRam0000000003d21c08 + 300)) ||
                     (*(long *)(*(long *)(*plStack_a0 + 200) +
                                (ulong)*(byte *)(/*Atlas.Gameplay.Usables.GoldenTurdProjectile_TypeInfo*/ lRam0000000003d21c08 + 300) * 8 + -8) !=
                      /*Atlas.Gameplay.Usables.GoldenTurdProjectile_TypeInfo*/ lRam0000000003d21c08)) || ((char)plStack_a0[3] == '\0'));
            if (param_2 == 0) goto LAB_015bb968;
            fVar14 = *(float *)(param_2 + 0x6c);
            iVar4 = /*UnityEngine.Random$$Range*/ func_0x032528a0(0,&UNK_00002710,0);
            fVar14 = fVar14 * 100.0;
            dVar11 = (double)fVar14;
            dVar13 = -dVar11;
            dVar9 = dVar13;
            if (fVar14 != INFINITY) {
              dVar9 = dVar11;
            }
          } while ((int)dVar9 <= iVar4);
          lVar5 = /*Atlas.Gameplay.Usables.GoldenTurdProjectile$$get_GoldenTurdProjectileBehaviour*/ func_0x015b3d30(plVar1);
          fVar12 = SUB84(dVar13,0);
          fVar14 = SUB84(dVar11,0);
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x015bb9bc;
          }
          lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x015bb9bc;
          }
          /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
          fVar8 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
          if (*(long *)(param_1 + 0x38) == 0) {
            func_0x00f78af4();
            goto code_r0x015bb9bc;
          }
          lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x015bb9bc;
          }
          lVar5 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar5,0);
          fVar8 = *(float *)(lVar5 + 0x13c) - fVar8;
          fVar14 = *(float *)(lVar5 + 0x140) - fVar14;
          fVar12 = *(float *)(lVar5 + 0x144) - fVar12;
          fVar10 = fVar12 * fVar12;
          fVar14 = fVar10 + fVar8 * fVar8 + fVar14 * fVar14;
          bVar3 = true;
          if ((fVar14 <= 30.0) && (bVar3 = false, !NAN(fVar14))) {
            bVar3 = fVar14 < 24.0;
          }
        } while (bVar3);
        lVar5 = /*Atlas.Gameplay.Usables.GoldenTurdProjectile$$get_GoldenTurdProjectileBehaviour*/ func_0x015b3d30(plVar1);
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x015bb9bc;
        }
        lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar5,0);
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x015bb9bc;
        }
        /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
        fVar14 = (float)/*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c2650(0);
        if (*(long *)(param_1 + 0x38) == 0) {
          func_0x00f78af4();
          goto code_r0x015bb9bc;
        }
        lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x015bb9bc;
        }
        lVar5 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar5,0);
        if (*(long *)(param_1 + 0x38) == 0) {
          func_0x00f78af4();
          goto code_r0x015bb9bc;
        }
        lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x015bb9bc;
        }
        fVar8 = *(float *)(lVar5 + 0x13c);
        fVar15 = *(float *)(lVar5 + 0x140);
        fVar16 = *(float *)(lVar5 + 0x144);
        lVar5 = /*Atlas.Gameplay.Kart.KartPhysics$$get_Body*/ func_0x015c3028(lVar7,0);
        if (0.0 < (fVar12 - fVar16) * *(float *)(lVar5 + 0x108) +
                  (fVar14 - fVar8) * *(float *)(lVar5 + 0x100) +
                  (fVar10 - fVar15) * *(float *)(lVar5 + 0x104)) {
          *(undefined2 *)(param_1 + 0x1c) = 1;
          break;
        }
      } while (*(char *)(param_1 + 0x1c) == '\0');
LAB_015bb92c:
      /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_b0,uRam0000000003d325c0);
    }
    return;
  }
LAB_015bb964:
  func_0x00f78af4();
LAB_015bb968:
  func_0x00f78af4();
code_r0x015bb9bc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x15bb9c0);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x15bba50 | Atlas.Gameplay.Kart.KartAI.GetRoll
// ============================================================

void Atlas_Gameplay_Kart_KartAI__GetRoll(void)

{
  if (pcRam0000000003ec06a8 == (code *)0x0) {
    pcRam0000000003ec06a8 =
         (code *)func_0x00f789d4("UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)");
  }
                    /* WARNING: Could not recover jumptable at 0x032528ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec06a8)(0,&UNK_00002710);
  return;
}



// ============================================================
// RVA: 0x15bba60 | Atlas.Gameplay.Kart.KartAI..ctor
// ============================================================

void Atlas_Gameplay_Kart_KartAI___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x15bba68 | Atlas.Gameplay.Kart.KartAI..cctor
// ============================================================

void Atlas_Gameplay_Kart_KartAI___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb52b6 & 1) == 0) {
    func_0x00f78a20(0x3d22c68);
    func_0x00f78a20(0x3d6eea0);
    func_0x00f78a20(0x3d6ee98);
    func_0x00f78a20(0x3d6eeb8);
    func_0x00f78a20(0x3d6eeb0);
    func_0x00f78a20(0x3d6eea8);
    bRam0000000003eb52b6 = 1;
  }
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('KartAI.Update()')*/ uRam0000000003d6eea8,1,0,0,0);
  **(undefined8 **)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xb8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('KartAI.UpdateSpeedModifier()')*/ uRam0000000003d6eeb0,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xb8) + 8) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('KartAI.UpdateUseUsable()')*/ uRam0000000003d6eeb8,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xb8) + 0x10) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('KartAI.ApplyHopping()')*/ uRam0000000003d6ee98,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xb8) + 0x18) = uVar1;
  uVar1 = /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$CreateMarker*/ func_0x03250e74(/*STR('KartAI.ApplyHoppingUsables()')*/ uRam0000000003d6eea0,1,0,0,0);
  *(undefined8 *)(*(long *)(/*Atlas.Gameplay.Kart.KartAI_TypeInfo*/ lRam0000000003d22c68 + 0xb8) + 0x20) = uVar1;
  return;
}



