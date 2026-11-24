// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.Kart.CharacterVisualBehaviour

// ============================================================
// RVA: 0x156f310 | Atlas.Gameplay.Kart.CharacterVisualBehaviour.get_RightHandAttachTransform
// ============================================================

undefined8 Atlas_Gameplay_Kart_CharacterVisualBehaviour__get_RightHandAttachTransform(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x156f318 | Atlas.Gameplay.Kart.CharacterVisualBehaviour.get_LeftHandAttachTransform
// ============================================================

undefined8 Atlas_Gameplay_Kart_CharacterVisualBehaviour__get_LeftHandAttachTransform(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x156f320 | Atlas.Gameplay.Kart.CharacterVisualBehaviour.get_CameraAdaptiveBlendShapesBehaviour
// ============================================================

undefined8
Atlas_Gameplay_Kart_CharacterVisualBehaviour__get_CameraAdaptiveBlendShapesBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x156f328 | Atlas.Gameplay.Kart.CharacterVisualBehaviour.get_HasOwnSteeringWheel
// ============================================================

undefined1 Atlas_Gameplay_Kart_CharacterVisualBehaviour__get_HasOwnSteeringWheel(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x156f330 | Atlas.Gameplay.Kart.CharacterVisualBehaviour.get_KartAnimatorOverride
// ============================================================

undefined8 Atlas_Gameplay_Kart_CharacterVisualBehaviour__get_KartAnimatorOverride(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x156f338 | Atlas.Gameplay.Kart.CharacterVisualBehaviour.get_AnimFinished
// ============================================================

undefined8 Atlas_Gameplay_Kart_CharacterVisualBehaviour__get_AnimFinished(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000003eb5023 & 1) == 0) {
    func_0x00f78a20(0x3d20668);
    bRam0000000003eb5023 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.CharacterVisualBehaviour_TypeInfo*/ lRam0000000003d20668 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.CharacterVisualBehaviour_TypeInfo*/ lRam0000000003d20668 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar3 != 0) {
    uVar1 = **(undefined4 **)(/*Atlas.Gameplay.Kart.CharacterVisualBehaviour_TypeInfo*/ lRam0000000003d20668 + 0xb8);
    if (pcRam0000000003ebe430 == (code *)0x0) {
      pcRam0000000003ebe430 =
           (code *)func_0x00f789d4("UnityEngine.Animator::GetBoolID(System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*pcRam0000000003ebe430)(lVar3,uVar1);
    return uVar2;
  }
  lVar3 = func_0x00f78af4();
  return *(undefined8 *)(lVar3 + 0x48);
}



// ============================================================
// RVA: 0x156f3bc | Atlas.Gameplay.Kart.CharacterVisualBehaviour.get_DizzyParticleSystem
// ============================================================

undefined8 Atlas_Gameplay_Kart_CharacterVisualBehaviour__get_DizzyParticleSystem(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x156f3c4 | Atlas.Gameplay.Kart.CharacterVisualBehaviour.UpdateBlendShapesWithCamera
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Gameplay_Kart_CharacterVisualBehaviour__UpdateBlendShapesWithCamera
                (float param_1,float param_2,float param_3,float param_4,long param_5,long param_6)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x22;
  long lVar11;
  undefined8 unaff_x23;
  long lVar12;
  undefined8 unaff_x24;
  ulong uVar13;
  ulong *puVar14;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar15;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar16;
  float extraout_s0_02;
  undefined4 uVar17;
  float extraout_s0_03;
  float fVar18;
  float extraout_s0_04;
  float fVar19;
  float fVar20;
  ulong unaff_d8;
  ulong unaff_d9;
  float fVar21;
  ulong unaff_d10;
  ulong unaff_d11;
  undefined1 auVar22 [12];
  
  uVar4 = (ulong)(uint)param_1;
  if ((bRam0000000003eb5024 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5024 = 1;
  }
  uVar9 = *(undefined8 *)(param_5 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar9,0,0);
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  lVar7 = *(long *)(param_5 + 0x30);
  if (lVar7 == 0) {
    auVar22 = func_0x00f78af4();
    if ((bRam0000000003eb5025 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5025 = 1;
    }
    uVar9 = *(undefined8 *)(auVar22._0_8_ + 0x48);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar9,0);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    lVar7 = *(long *)(auVar22._0_8_ + 0x48);
    if (auVar22._8_4_ == 0) {
      if (lVar7 != 0) {
        if (pcRam0000000003ec2158 == (code *)0x0) {
          pcRam0000000003ec2158 =
               (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)"
                                       ,0);
        }
                    /* WARNING: Could not recover jumptable at 0x03298a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*pcRam0000000003ec2158)(lVar7,1,1);
        return uVar4;
      }
    }
    else if (lVar7 != 0) {
      if (pcRam0000000003ec2148 == (code *)0x0) {
        pcRam0000000003ec2148 =
             (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Play(System.Boolean)",0);
      }
                    /* WARNING: Could not recover jumptable at 0x03298910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*pcRam0000000003ec2148)(lVar7,1);
      return uVar4;
    }
    lVar7 = func_0x00f78af4();
    if ((bRam0000000003eb5026 & 1) == 0) {
      func_0x00f78a20(0x3d20668);
      bRam0000000003eb5026 = 1;
    }
    lVar7 = *(long *)(lVar7 + 0x18);
    if (((*(ushort *)(/*Atlas.Gameplay.Kart.CharacterVisualBehaviour_TypeInfo*/ lRam0000000003d20668 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Gameplay.Kart.CharacterVisualBehaviour_TypeInfo*/ lRam0000000003d20668 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar7 == 0) {
      uVar4 = func_0x00f78af4();
      if ((bRam0000000003eb5027 & 1) == 0) {
        func_0x00f78a20(0x3d20028);
        bRam0000000003eb5027 = 1;
      }
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if ((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) == 0) {
        return uVar4;
      }
      if (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) != 0) {
        return uVar4;
      }
      func_0x00f78ad0();
      return uVar4;
    }
    uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.CharacterVisualBehaviour_TypeInfo*/ lRam0000000003d20668 + 0xb8) + 4);
    if (pcRam0000000003ebe460 == (code *)0x0) {
      pcRam0000000003ebe460 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*pcRam0000000003ebe460)(lVar7,uVar1);
    return uVar4;
  }
  puVar2 = &stack0xffffffffffffffb0;
  puVar15 = &stack0xfffffffffffffff0;
  uVar10 = 0x3eb4000;
  uVar9 = 0x3d23990;
  if ((bRam0000000003eb4f33 & 1) == 0) {
    func_0x00f78a20(0x3d23990,param_6,0);
    bRam0000000003eb4f33 = 1;
  }
  fVar18 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  uVar6 = (ulong)(uint)fVar18;
  uVar8 = (ulong)(uint)param_2;
  uVar13 = (ulong)(uint)param_3;
  fVar16 = param_2;
  fVar20 = param_3;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_6,0,0);
  if (iVar3 == 0) {
code_r0x015404b4:
    fVar20 = param_3;
    fVar16 = param_2;
    lVar5 = *(long *)(lVar7 + 0x30);
    puVar2 = (undefined1 *)register0x00000008;
    lVar7 = unaff_x19;
    param_6 = unaff_x20;
    uVar9 = unaff_x21;
    uVar10 = unaff_x22;
    puVar15 = unaff_x29;
    uVar4 = unaff_d8;
    uVar6 = unaff_d9;
    uVar8 = unaff_d10;
    uVar13 = unaff_d11;
    if (lVar5 == 0) {
      return 0;
    }
  }
  else {
    if ((param_6 != 0) && (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_6,0), lVar5 != 0)) {
      fVar18 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
      param_2 = fVar16;
      param_3 = fVar20;
      goto code_r0x015404b4;
    }
    param_1 = param_4;
    unaff_x30 = &Atlas_Rendering_CameraAdaptiveBlendShapesBehaviour__UpdateWithWorldPosition;
    lVar5 = func_0x00f78af4();
    lVar5 = *(long *)(lVar5 + 0x30);
    fVar18 = extraout_s0_04;
    if (lVar5 == 0) {
      return 0;
    }
  }
  *(ulong *)(puVar2 + -0x70) = uVar13;
  *(ulong *)(puVar2 + -0x68) = uVar8;
  *(ulong *)(puVar2 + -0x60) = uVar6;
  *(ulong *)(puVar2 + -0x58) = uVar4;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x30) = uVar10;
  *(undefined8 *)(puVar2 + -0x28) = uVar9;
  *(long *)(puVar2 + -0x20) = param_6;
  *(long *)(puVar2 + -0x18) = lVar7;
  *(undefined1 **)(puVar2 + -0x10) = puVar15;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  fVar21 = fVar16;
  fVar19 = fVar20;
  if ((bRam0000000003eb4f31 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f31 = 1;
  }
  uVar9 = *(undefined8 *)(lVar5 + 0x10);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
    return uVar4;
  }
  uVar9 = *(undefined8 *)(lVar5 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
    return uVar4;
  }
  if ((*(long *)(lVar5 + 0x18) == 0) ||
     (lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar5 + 0x18),0), lVar7 == 0)) goto code_r0x0153ff00;
  uVar4 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar7,0);
  *(float *)(puVar2 + -0x80) = fVar18 - extraout_s0;
  *(float *)(puVar2 + -0x7c) = fVar16 - fVar21;
  *(float *)(puVar2 + -0x78) = fVar20 - fVar19;
  if (0.0 <= param_1) {
    fVar18 = param_1 * param_1;
  }
  else {
    uVar4 = /*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(puVar2 + -0x80,0);
    fVar18 = extraout_s0_00;
  }
  if (324.0 <= fVar18) {
    if (*(char *)(lVar5 + 0x30) != '\0') {
      return uVar4;
    }
    fVar18 = SQRT(fVar18);
    if (0.0 <= param_1) {
      fVar18 = param_1;
    }
code_r0x0153fccc:
    if (*(long *)(lVar5 + 0x20) == 0) {
      return uVar4;
    }
  }
  else {
    fVar18 = SQRT(fVar18);
    if (0.0 <= param_1) {
      fVar18 = param_1;
    }
    if (*(char *)(lVar5 + 0x30) == '\0') goto code_r0x0153fccc;
    uVar4 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((fVar18 + -8.0) * -0.25 + 1.0,0);
    if ((extraout_s0_01 < 1.0) && (0 < *(int *)(lVar5 + 0x34))) {
      iVar3 = 0;
      do {
        if (*(long *)(lVar5 + 0x10) == 0) goto code_r0x0153ff00;
        fVar16 = (float)/*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar5 + 0x10),iVar3,0);
        if (*(long *)(lVar5 + 0x10) == 0) goto code_r0x0153ff00;
        uVar4 = /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(extraout_s0_01 * fVar16,*(long *)(lVar5 + 0x10),iVar3,0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar5 + 0x34));
    }
    if (*(long *)(lVar5 + 0x20) == 0) {
      return uVar4;
    }
    if (extraout_s0_01 <= 0.0) {
      return uVar4;
    }
  }
  if (*(long *)(lVar5 + 0x18) != 0) {
    fVar20 = *(float *)(puVar2 + -0x80);
    fVar21 = *(float *)(puVar2 + -0x7c);
    fVar16 = *(float *)(puVar2 + -0x78);
    lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar5 + 0x18),0);
    if (lVar7 != 0) {
      fVar16 = fVar16 / fVar18;
      /*UnityEngine.Transform$$InverseTransformDirection*/ func_0x03276b34(fVar20 / fVar18,fVar21 / fVar18,fVar16,lVar7,0);
      uVar4 = _atan2f(fVar16);
      lVar7 = *(long *)(lVar5 + 0x28);
      if ((lVar7 != 0) && (0 < (int)*(ulong *)(lVar7 + 0x18))) {
        uVar6 = 0;
        uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar8 <= uVar6) goto code_r0x0153fef4;
          if (*(long *)(lVar5 + 0x10) == 0) goto code_r0x0153ff00;
          uVar1 = *(undefined4 *)(lVar7 + 0x20 + uVar6 * 4);
          fVar18 = (float)/*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar5 + 0x10),uVar1,0);
          if (*(long *)(lVar5 + 0x10) == 0) goto code_r0x0153ff00;
          uVar17 = 0x42c80000;
          if (fVar18 <= 0.5) {
            uVar17 = 0;
          }
          uVar4 = /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(uVar17,*(long *)(lVar5 + 0x10),uVar1,0);
          uVar6 = uVar6 + 1;
          uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      lVar7 = *(long *)(lVar5 + 0x20);
      if (lVar7 != 0) {
        if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
          uVar6 = 0;
          fVar18 = extraout_s0_02 * _UNK_033f8818;
          uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          do {
            if (uVar8 <= uVar6) goto code_r0x0153fef4;
            lVar11 = lVar7 + uVar6 * 0x10;
            lVar12 = *(long *)(lVar11 + 0x20);
            if (lVar12 != 0) {
              lVar11 = *(long *)(lVar11 + 0x28);
              uVar8 = *(ulong *)(lVar12 + 0x18);
              fVar16 = 100.0;
              if (uVar8 != 0) {
                fVar16 = 0.0;
              }
              if (0 < (int)uVar8) {
                uVar13 = 0;
                do {
                  if ((uVar8 & 0xffffffff) <= uVar13) goto code_r0x0153fef4;
                  iVar3 = *(int *)(lVar12 + 0x20 + uVar13 * 4);
                  if (-1 < iVar3) {
                    if (*(long *)(lVar5 + 0x10) == 0) goto code_r0x0153ff00;
                    uVar4 = /*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar5 + 0x10),iVar3,0);
                    if (fVar16 < extraout_s0_03) {
                      fVar16 = extraout_s0_03;
                    }
                  }
                  uVar13 = uVar13 + 1;
                  uVar8 = (ulong)*(uint *)(lVar12 + 0x18);
                } while ((long)uVar13 < (long)(int)*(uint *)(lVar12 + 0x18));
              }
              if (lVar11 == 0) goto code_r0x0153ff00;
              if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
                uVar8 = 0;
                uVar13 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
                puVar14 = (ulong *)(lVar11 + 0x28);
                do {
                  if (uVar13 <= uVar8) goto code_r0x0153fef4;
                  uVar13 = *puVar14;
                  if (-1 < (long)uVar13) {
                    fVar21 = *(float *)((long)puVar14 + -4);
                    fVar20 = (fVar18 - *(float *)(puVar14 + -1)) /
                             (fVar21 - *(float *)(puVar14 + -1));
                    if (1.0 < fVar20) {
                      fVar20 = 1.0 - (fVar18 - fVar21) / ((float)uVar13 - fVar21);
                    }
                    if (*(long *)(lVar5 + 0x10) == 0) goto code_r0x0153ff00;
                    if (fVar20 <= 0.0) {
                      fVar20 = 0.0;
                    }
                    uVar4 = /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(fVar16 * fVar20,*(long *)(lVar5 + 0x10),uVar13 >> 0x20,0
                                           );
                  }
                  uVar8 = uVar8 + 1;
                  uVar13 = (ulong)*(uint *)(lVar11 + 0x18);
                  puVar14 = puVar14 + 2;
                } while ((long)uVar8 < (long)(int)*(uint *)(lVar11 + 0x18));
              }
            }
            uVar6 = uVar6 + 1;
            uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
          } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
        }
        return uVar4;
      }
    }
  }
code_r0x0153ff00:
  uVar4 = func_0x00f78af4();
  *(undefined1 *)(uVar4 + 0x30) = 1;
  return uVar4;
code_r0x0153fef4:
  uVar9 = func_0x00f78b24();
  func_0x00f78ac0(uVar9,0);
  goto code_r0x0153ff00;
}



// ============================================================
// RVA: 0x156f47c | Atlas.Gameplay.Kart.CharacterVisualBehaviour.InvulnChanged
// ============================================================

undefined1  [16]
Atlas_Gameplay_Kart_CharacterVisualBehaviour__InvulnChanged(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000003eb5025 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5025 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar3,0);
  if (auVar4._0_4_ == 0) {
    return auVar4;
  }
  lVar2 = *(long *)(param_1 + 0x48);
  if (param_2 == 0) {
    if (lVar2 != 0) {
      if (pcRam0000000003ec2158 == (code *)0x0) {
        pcRam0000000003ec2158 =
             (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)"
                                     ,0);
      }
                    /* WARNING: Could not recover jumptable at 0x03298a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar4 = (*pcRam0000000003ec2158)(lVar2,1,1);
      return auVar4;
    }
  }
  else if (lVar2 != 0) {
    if (pcRam0000000003ec2148 == (code *)0x0) {
      pcRam0000000003ec2148 =
           (code *)func_0x00f789d4("UnityEngine.ParticleSystem::Play(System.Boolean)",0);
    }
                    /* WARNING: Could not recover jumptable at 0x03298910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (*pcRam0000000003ec2148)(lVar2,1);
    return auVar4;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb5026 & 1) == 0) {
    func_0x00f78a20(0x3d20668);
    bRam0000000003eb5026 = 1;
  }
  lVar2 = *(long *)(lVar2 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.CharacterVisualBehaviour_TypeInfo*/ lRam0000000003d20668 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.CharacterVisualBehaviour_TypeInfo*/ lRam0000000003d20668 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.CharacterVisualBehaviour_TypeInfo*/ lRam0000000003d20668 + 0xb8) + 4);
    if (pcRam0000000003ebe460 == (code *)0x0) {
      pcRam0000000003ebe460 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (*pcRam0000000003ebe460)(lVar2,uVar1);
    return auVar4;
  }
  auVar4._0_8_ = func_0x00f78af4();
  if ((bRam0000000003eb5027 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb5027 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar4._8_8_ = 0;
  return auVar4;
}



// ============================================================
// RVA: 0x156f534 | Atlas.Gameplay.Kart.CharacterVisualBehaviour.TriggerReactAngry
// ============================================================

undefined1  [16] Atlas_Gameplay_Kart_CharacterVisualBehaviour__TriggerReactAngry(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb5026 & 1) == 0) {
    func_0x00f78a20(0x3d20668);
    bRam0000000003eb5026 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.CharacterVisualBehaviour_TypeInfo*/ lRam0000000003d20668 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.CharacterVisualBehaviour_TypeInfo*/ lRam0000000003d20668 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.CharacterVisualBehaviour_TypeInfo*/ lRam0000000003d20668 + 0xb8) + 4);
    if (pcRam0000000003ebe460 == (code *)0x0) {
      pcRam0000000003ebe460 =
           (code *)func_0x00f789d4("UnityEngine.Animator::SetTriggerID(System.Int32)");
    }
                    /* WARNING: Could not recover jumptable at 0x0320d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar3 = (*pcRam0000000003ebe460)(lVar2,uVar1);
    return auVar3;
  }
  auVar3._0_8_ = func_0x00f78af4();
  if ((bRam0000000003eb5027 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb5027 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar3._8_8_ = 0;
  return auVar3;
}



// ============================================================
// RVA: 0x156f5b8 | Atlas.Gameplay.Kart.CharacterVisualBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_Kart_CharacterVisualBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb5027 & 1) == 0) {
    func_0x00f78a20(0x3d20028);
    bRam0000000003eb5027 = 1;
  }
  if (((*(ushort *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Gameplay.Kart.BaseVisualBehaviour_TypeInfo*/ lRam0000000003d20028 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



// ============================================================
// RVA: 0x156f624 | Atlas.Gameplay.Kart.CharacterVisualBehaviour..cctor
// ============================================================

void Atlas_Gameplay_Kart_CharacterVisualBehaviour___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb5028 & 1) == 0) {
    func_0x00f78a20(0x3d20668);
    func_0x00f78a20(0x3d719b8);
    func_0x00f78a20(0x3d68f40);
    bRam0000000003eb5028 = 1;
  }
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('AnimFinished')*/ uRam0000000003d68f40,0);
  **(undefined4 **)(/*Atlas.Gameplay.Kart.CharacterVisualBehaviour_TypeInfo*/ lRam0000000003d20668 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('ReactAngry')*/ uRam0000000003d719b8,0);
  *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.CharacterVisualBehaviour_TypeInfo*/ lRam0000000003d20668 + 0xb8) + 4) = uVar1;
  return;
}



