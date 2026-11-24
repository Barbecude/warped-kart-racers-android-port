// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Rendering.CameraAdaptiveBlendShapesConfig

// ============================================================
// RVA: 0x15400f8 | Atlas.Rendering.CameraAdaptiveBlendShapesConfig.ConvertNamed
// ============================================================

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Rendering_CameraAdaptiveBlendShapesConfig__ConvertNamed
                (undefined1 param_1 [16],float param_2,float param_3,float param_4,ulong *param_5,
                long param_6)

{
  undefined1 auVar1 [16];
  undefined8 **ppuVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long extraout_x1;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *unaff_x23;
  long lVar14;
  ulong unaff_x24;
  ulong *puVar15;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  ulong uVar16;
  undefined8 *******pppppppuVar17;
  code *pcVar18;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar19;
  float extraout_s0_02;
  undefined4 uVar20;
  float extraout_s0_03;
  float extraout_s0_04;
  float fVar21;
  float extraout_s0_05;
  float fVar22;
  float fVar23;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong uVar24;
  float fVar25;
  ulong unaff_d10;
  ulong uVar26;
  ulong unaff_d11;
  ulong uVar27;
  undefined1 auVar28 [16];
  undefined8 *******pppppppuStack_e0;
  code *pcStack_d8;
  undefined8 *puStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong *puStack_b8;
  ulong uStack_b0;
  ulong *puStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 ******ppppppuStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar12 = 0x3eb4000;
  if ((bRam0000000003eb4f35 & 1) == 0) {
    func_0x00f78a20(0x3d1f6b8);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d1f6c8);
    bRam0000000003eb4f35 = 1;
  }
  if (param_5 == (ulong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar13 = param_5[3];
    uVar5 = func_0x00f78a34(/*Atlas.Rendering.CameraAdaptiveBlendShapes.Adjustment[]_TypeInfo*/ uRam0000000003d1f6b8,uVar13);
    if (0 < (int)uVar13) {
      uVar10 = 0;
      uVar11 = uVar13 & 0xffffffff;
      uStack_80 = uVar11;
      puStack_78 = param_5;
      uStack_70 = uVar5;
      do {
        if ((uint)param_5[3] <= uVar10) {
LAB_01540308:
          uVar7 = func_0x00f78b24();
          auVar28 = func_0x00f78ac0(uVar7,0);
          lVar6 = auVar28._0_8_;
          puStack_88 = &Atlas_Rendering_CameraAdaptiveBlendShapesConfig__ConvertNamed;
          puStack_d0 = unaff_x26;
          uStack_c8 = unaff_x25;
          uStack_c0 = unaff_x24;
          puStack_b8 = unaff_x23;
          uStack_b0 = uVar13;
          puStack_a8 = param_5;
          uStack_a0 = uVar12;
          lStack_98 = param_6;
          ppppppuStack_90 = (undefined8 ******)&stack0xfffffffffffffff0;
          if ((bRam0000000003eb4f34 & 1) == 0) {
            func_0x00f78a20(0x3d1f6c0);
            bRam0000000003eb4f34 = 1;
          }
          if (lVar6 == 0) {
            return 0;
          }
          uVar5 = *(ulong *)(lVar6 + 0x18);
          uVar12 = func_0x00f78a34(/*Atlas.Rendering.CameraAdaptiveBlendShapes.Clamped[]_TypeInfo*/ uRam0000000003d1f6c0,uVar5);
          if ((int)uVar5 < 1) {
            return uVar12;
          }
          uVar13 = 0;
          goto code_r0x0154038c;
        }
        unaff_x24 = param_5[uVar10 * 2 + 4];
        if ((unaff_x24 != 0) && (uVar16 = param_5[uVar10 * 2 + 5], uVar16 != 0)) {
          uVar5 = *(ulong *)(unaff_x24 + 0x18);
          uStack_68 = uVar10;
          uVar13 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar5);
          if (0 < (int)uVar5) {
            param_5 = (ulong *)0x0;
            unaff_x23 = (ulong *)(uVar5 & 0xffffffff);
            unaff_x26 = (undefined8 *)(unaff_x24 + 0x20);
            do {
              if ((ulong *)(ulong)*(uint *)(unaff_x24 + 0x18) <= param_5) goto LAB_01540308;
              if ((param_6 == 0) ||
                 (uVar3 = /*UnityEngine.Mesh$$GetBlendShapeIndex*/ func_0x032404c4(param_6,unaff_x26[(long)param_5],0), uVar13 == 0))
              goto LAB_01540304;
              if ((ulong *)(ulong)*(uint *)(uVar13 + 0x18) <= param_5) goto LAB_01540308;
              *(undefined4 *)(uVar13 + 0x20 + (long)param_5 * 4) = uVar3;
              param_5 = (ulong *)((long)param_5 + 1);
            } while (unaff_x23 != param_5);
          }
          unaff_x24 = *(ulong *)(uVar16 + 0x18);
          unaff_x23 = (ulong *)func_0x00f78a34(/*Atlas.Rendering.CameraAdaptiveBlendShapes.Target[]_TypeInfo*/ uRam0000000003d1f6c8,unaff_x24);
          if (0 < (int)unaff_x24) {
            uVar5 = 0;
            unaff_x24 = unaff_x24 & 0xffffffff;
            unaff_x26 = (undefined8 *)(uVar16 + 0x30);
            param_5 = unaff_x23 + 5;
            do {
              if (*(uint *)(uVar16 + 0x18) <= uVar5) goto LAB_01540308;
              if (param_6 == 0) goto LAB_01540304;
              uVar12 = (ulong)*(uint *)(unaff_x26 + -1);
              unaff_x25 = unaff_x26[-2];
              lVar6 = /*UnityEngine.Mesh$$GetBlendShapeIndex*/ func_0x032404c4(param_6,*unaff_x26,0);
              if (unaff_x23 == (ulong *)0x0) goto LAB_01540304;
              if ((uint)unaff_x23[3] <= uVar5) goto LAB_01540308;
              uVar12 = uVar12 | lVar6 << 0x20;
              param_5[-1] = unaff_x25;
              *param_5 = uVar12;
              uVar5 = uVar5 + 1;
              unaff_x26 = unaff_x26 + 3;
              param_5 = param_5 + 2;
            } while (unaff_x24 != uVar5);
          }
          if (uStack_70 == 0) {
LAB_01540304:
            func_0x00f78af4();
          }
          else if (uStack_68 < *(uint *)(uStack_70 + 0x18)) {
            lVar6 = uStack_70 + uStack_68 * 0x10;
            *(ulong *)(lVar6 + 0x20) = uVar13;
            *(ulong **)(lVar6 + 0x28) = unaff_x23;
            uVar5 = uStack_70;
            uVar10 = uStack_68;
            uVar11 = uStack_80;
            param_5 = puStack_78;
            goto LAB_015402d0;
          }
          goto LAB_01540308;
        }
LAB_015402d0:
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar11);
    }
  }
  return uVar5;
code_r0x0154038c:
  if (*(uint *)(lVar6 + 0x18) <= uVar13) {
code_r0x015403f4:
    uVar7 = func_0x00f78b24();
    lVar8 = func_0x00f78ac0(uVar7,0);
    auVar1._8_8_ = lVar8;
    auVar1._0_8_ = extraout_x1;
    ppuVar2 = (undefined8 **)&stack0xfffffffffffffee0;
    pcStack_d8 = Atlas_Rendering_CameraAdaptiveBlendShapesBehaviour__UpdateWithCamera;
    pppppppuVar17 = &pppppppuStack_e0;
    uVar16 = (ulong)(uint)extraout_s0_04;
    uVar11 = 0x3eb4000;
    uVar10 = 0x3d23990;
    pppppppuStack_e0 = &ppppppuStack_90;
    if ((bRam0000000003eb4f33 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f33 = 1;
    }
    fVar21 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    uVar24 = (ulong)(uint)fVar21;
    uVar26 = (ulong)(uint)param_2;
    uVar27 = (ulong)(uint)param_3;
    fVar19 = param_2;
    fVar23 = param_3;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0,0);
    if (iVar4 == 0) {
LAB_015404b4:
      fVar23 = param_3;
      fVar19 = param_2;
      lVar8 = *(long *)(lVar8 + 0x30);
      if (lVar8 == 0) {
        return 0;
      }
      ppuVar2 = &puStack_d0;
      uVar10 = uVar12;
      uVar11 = uVar5 & 0xffffffff;
      pppppppuVar17 = pppppppuStack_e0;
      pcVar18 = pcStack_d8;
      param_4 = extraout_s0_04;
      uVar16 = unaff_d8;
      uVar24 = unaff_d9;
      uVar26 = unaff_d10;
      uVar27 = unaff_d11;
      auVar1 = auVar28;
    }
    else {
      if ((extraout_x1 != 0) && (lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(extraout_x1,0), lVar9 != 0)) {
        fVar21 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar9,0);
        param_2 = fVar19;
        param_3 = fVar23;
        goto LAB_015404b4;
      }
      pcVar18 = Atlas_Rendering_CameraAdaptiveBlendShapesBehaviour__UpdateWithWorldPosition;
      lVar8 = func_0x00f78af4();
      lVar8 = *(long *)(lVar8 + 0x30);
      fVar21 = extraout_s0_05;
      if (lVar8 == 0) {
        return 0;
      }
    }
    *(ulong *)((long)ppuVar2 + -0x70) = uVar27;
    *(ulong *)((long)ppuVar2 + -0x68) = uVar26;
    *(ulong *)((long)ppuVar2 + -0x60) = uVar24;
    *(ulong *)((long)ppuVar2 + -0x58) = uVar16;
    *(undefined8 **)((long)ppuVar2 + -0x50) = unaff_x26;
    *(ulong *)((long)ppuVar2 + -0x48) = uVar12 + 0x20;
    *(long *)((long)ppuVar2 + -0x40) = lVar6 + 0x20;
    *(ulong *)((long)ppuVar2 + -0x38) = uVar13;
    *(ulong *)((long)ppuVar2 + -0x30) = uVar11;
    *(ulong *)((long)ppuVar2 + -0x28) = uVar10;
    *(undefined1 (*) [16])((long)ppuVar2 + -0x20) = auVar1;
    *(undefined8 ********)((long)ppuVar2 + -0x10) = pppppppuVar17;
    *(code **)((long)ppuVar2 + -8) = pcVar18;
    fVar25 = fVar19;
    fVar22 = fVar23;
    if ((bRam0000000003eb4f31 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f31 = 1;
    }
    uVar7 = *(undefined8 *)(lVar8 + 0x10);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar12 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
    if ((uVar12 & 1) != 0) {
      return uVar12;
    }
    uVar7 = *(undefined8 *)(lVar8 + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar12 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
    if ((uVar12 & 1) != 0) {
      return uVar12;
    }
    if ((*(long *)(lVar8 + 0x18) == 0) ||
       (lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar8 + 0x18),0), lVar6 == 0)) goto LAB_0153ff00;
    uVar12 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar6,0);
    *(float *)((long)ppuVar2 + -0x80) = fVar21 - extraout_s0;
    *(float *)((long)ppuVar2 + -0x7c) = fVar19 - fVar25;
    *(float *)((long)ppuVar2 + -0x78) = fVar23 - fVar22;
    if (0.0 <= param_4) {
      fVar21 = param_4 * param_4;
    }
    else {
      uVar12 = /*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0((undefined1 *)((long)ppuVar2 + -0x80),0);
      fVar21 = extraout_s0_00;
    }
    if (324.0 <= fVar21) {
      if (*(char *)(lVar8 + 0x30) != '\0') {
        return uVar12;
      }
      fVar21 = SQRT(fVar21);
      if (0.0 <= param_4) {
        fVar21 = param_4;
      }
    }
    else {
      fVar21 = SQRT(fVar21);
      if (0.0 <= param_4) {
        fVar21 = param_4;
      }
      if (*(char *)(lVar8 + 0x30) != '\0') {
        uVar12 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((fVar21 + -8.0) * -0.25 + 1.0,0);
        if ((1.0 <= extraout_s0_01) || (*(int *)(lVar8 + 0x34) < 1)) goto code_r0x0153fca4;
        iVar4 = 0;
        goto code_r0x0153fc68;
      }
    }
    if (*(long *)(lVar8 + 0x20) == 0) {
      return uVar12;
    }
    goto code_r0x0153fcd8;
  }
  if ((auVar28._8_8_ == 0) ||
     (uVar3 = /*UnityEngine.Mesh$$GetBlendShapeIndex*/ func_0x032404c4(auVar28._8_8_,*(undefined8 *)(lVar6 + 0x20 + uVar13 * 8),0),
     uVar12 == 0)) {
    func_0x00f78af4();
    goto code_r0x015403f4;
  }
  if (*(uint *)(uVar12 + 0x18) <= uVar13) goto code_r0x015403f4;
  *(undefined4 *)(uVar12 + 0x20 + uVar13 * 4) = uVar3;
  uVar13 = uVar13 + 1;
  if ((uVar5 & 0xffffffff) == uVar13) {
    return uVar12;
  }
  goto code_r0x0154038c;
  while( true ) {
    fVar19 = (float)/*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar8 + 0x10),iVar4,0);
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0153ff00;
    uVar12 = /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(extraout_s0_01 * fVar19,*(long *)(lVar8 + 0x10),iVar4,0);
    iVar4 = iVar4 + 1;
    if (*(int *)(lVar8 + 0x34) <= iVar4) break;
code_r0x0153fc68:
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0153ff00;
  }
code_r0x0153fca4:
  if ((*(long *)(lVar8 + 0x20) == 0) || (extraout_s0_01 <= 0.0)) {
    return uVar12;
  }
code_r0x0153fcd8:
  if (*(long *)(lVar8 + 0x18) != 0) {
    fVar23 = *(float *)((long)ppuVar2 + -0x80);
    fVar25 = *(float *)((long)ppuVar2 + -0x7c);
    fVar19 = *(float *)((long)ppuVar2 + -0x78);
    lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar8 + 0x18),0);
    if (lVar6 != 0) {
      fVar19 = fVar19 / fVar21;
      /*UnityEngine.Transform$$InverseTransformDirection*/ func_0x03276b34(fVar23 / fVar21,fVar25 / fVar21,fVar19,lVar6,0);
      uVar12 = _atan2f(fVar19);
      lVar6 = *(long *)(lVar8 + 0x28);
      if ((lVar6 != 0) && (0 < (int)*(ulong *)(lVar6 + 0x18))) {
        uVar5 = 0;
        uVar13 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        do {
          if (uVar13 <= uVar5) goto code_r0x0153fef4;
          if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0153ff00;
          uVar3 = *(undefined4 *)(lVar6 + 0x20 + uVar5 * 4);
          fVar21 = (float)/*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar8 + 0x10),uVar3,0);
          if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0153ff00;
          uVar20 = 0x42c80000;
          if (fVar21 <= 0.5) {
            uVar20 = 0;
          }
          uVar12 = /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(uVar20,*(long *)(lVar8 + 0x10),uVar3,0);
          uVar5 = uVar5 + 1;
          uVar13 = (ulong)*(uint *)(lVar6 + 0x18);
        } while ((long)uVar5 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
      lVar6 = *(long *)(lVar8 + 0x20);
      if (lVar6 != 0) {
        if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
          return uVar12;
        }
        uVar5 = 0;
        fVar21 = extraout_s0_02 * _UNK_033f8818;
        uVar13 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        while (uVar5 < uVar13) {
          lVar9 = lVar6 + uVar5 * 0x10;
          lVar14 = *(long *)(lVar9 + 0x20);
          if (lVar14 != 0) {
            lVar9 = *(long *)(lVar9 + 0x28);
            uVar13 = *(ulong *)(lVar14 + 0x18);
            fVar19 = 100.0;
            if (uVar13 != 0) {
              fVar19 = 0.0;
            }
            if (0 < (int)uVar13) {
              uVar10 = 0;
              do {
                if ((uVar13 & 0xffffffff) <= uVar10) goto code_r0x0153fef4;
                iVar4 = *(int *)(lVar14 + 0x20 + uVar10 * 4);
                if (-1 < iVar4) {
                  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0153ff00;
                  uVar12 = /*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar8 + 0x10),iVar4,0);
                  if (fVar19 < extraout_s0_03) {
                    fVar19 = extraout_s0_03;
                  }
                }
                uVar10 = uVar10 + 1;
                uVar13 = (ulong)*(uint *)(lVar14 + 0x18);
              } while ((long)uVar10 < (long)(int)*(uint *)(lVar14 + 0x18));
            }
            if (lVar9 == 0) goto LAB_0153ff00;
            if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
              uVar13 = 0;
              uVar10 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
              puVar15 = (ulong *)(lVar9 + 0x28);
              do {
                if (uVar10 <= uVar13) goto code_r0x0153fef4;
                uVar10 = *puVar15;
                if (-1 < (long)uVar10) {
                  fVar25 = *(float *)((long)puVar15 + -4);
                  fVar23 = (fVar21 - *(float *)(puVar15 + -1)) / (fVar25 - *(float *)(puVar15 + -1))
                  ;
                  if (1.0 < fVar23) {
                    fVar23 = 1.0 - (fVar21 - fVar25) / ((float)uVar10 - fVar25);
                  }
                  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0153ff00;
                  if (fVar23 <= 0.0) {
                    fVar23 = 0.0;
                  }
                  uVar12 = /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(fVar19 * fVar23,*(long *)(lVar8 + 0x10),uVar10 >> 0x20,0)
                  ;
                }
                uVar13 = uVar13 + 1;
                uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
                puVar15 = puVar15 + 2;
              } while ((long)uVar13 < (long)(int)*(uint *)(lVar9 + 0x18));
            }
          }
          uVar5 = uVar5 + 1;
          uVar13 = (ulong)*(uint *)(lVar6 + 0x18);
          if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar5) {
            return uVar12;
          }
        }
code_r0x0153fef4:
        uVar7 = func_0x00f78b24();
        func_0x00f78ac0(uVar7,0);
      }
    }
  }
LAB_0153ff00:
  uVar12 = func_0x00f78af4();
  *(undefined1 *)(uVar12 + 0x30) = 1;
  return uVar12;
}



// ============================================================
// RVA: 0x1540314 | Atlas.Rendering.CameraAdaptiveBlendShapesConfig.ConvertNamed
// ============================================================

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Rendering_CameraAdaptiveBlendShapesConfig__ConvertNamed
                (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                long param_6)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long extraout_x1;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar15;
  code *pcVar16;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar17;
  float extraout_s0_02;
  undefined4 uVar18;
  float extraout_s0_03;
  float extraout_s0_04;
  float fVar19;
  float extraout_s0_05;
  float fVar20;
  float fVar21;
  ulong unaff_d8;
  ulong uVar22;
  ulong unaff_d9;
  ulong uVar23;
  float fVar24;
  ulong unaff_d10;
  ulong uVar25;
  ulong unaff_d11;
  ulong uVar26;
  undefined8 *******pppppppuStack_60;
  code *pcStack_58;
  
  if ((bRam0000000003eb4f34 & 1) == 0) {
    func_0x00f78a20(0x3d1f6c0);
    bRam0000000003eb4f34 = 1;
  }
  if (param_5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar9 = *(ulong *)(param_5 + 0x18);
    uVar5 = func_0x00f78a34(/*Atlas.Rendering.CameraAdaptiveBlendShapes.Clamped[]_TypeInfo*/ uRam0000000003d1f6c0,uVar9);
    if (0 < (int)uVar9) {
      uVar11 = 0;
      lVar4 = param_5 + 0x20;
      do {
        if (*(uint *)(param_5 + 0x18) <= uVar11) {
LAB_015403f4:
          uVar6 = func_0x00f78b24();
          lVar7 = func_0x00f78ac0(uVar6,0);
          puVar1 = &stack0xffffffffffffff60;
          pcStack_58 = Atlas_Rendering_CameraAdaptiveBlendShapesBehaviour__UpdateWithCamera;
          pppppppuVar15 = &pppppppuStack_60;
          uVar22 = (ulong)(uint)extraout_s0_04;
          uVar10 = 0x3eb4000;
          uVar13 = 0x3d23990;
          pppppppuStack_60 = (undefined8 *******)&stack0xfffffffffffffff0;
          if ((bRam0000000003eb4f33 & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb4f33 = 1;
          }
          fVar19 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
          uVar23 = (ulong)(uint)fVar19;
          uVar25 = (ulong)(uint)param_2;
          uVar26 = (ulong)(uint)param_3;
          fVar17 = param_2;
          fVar21 = param_3;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0,0);
          if (iVar3 == 0) {
LAB_015404b4:
            fVar21 = param_3;
            fVar17 = param_2;
            lVar8 = *(long *)(lVar7 + 0x30);
            if (lVar8 == 0) {
              return 0;
            }
            puVar1 = &stack0xffffffffffffffb0;
            lVar7 = param_6;
            uVar13 = uVar5;
            uVar10 = uVar9 & 0xffffffff;
            pppppppuVar15 = pppppppuStack_60;
            pcVar16 = pcStack_58;
            param_4 = extraout_s0_04;
            uVar22 = unaff_d8;
            uVar23 = unaff_d9;
            uVar25 = unaff_d10;
            uVar26 = unaff_d11;
          }
          else {
            if ((extraout_x1 != 0) && (lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(extraout_x1,0), lVar8 != 0)) {
              fVar19 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0);
              param_2 = fVar17;
              param_3 = fVar21;
              goto LAB_015404b4;
            }
            pcVar16 = Atlas_Rendering_CameraAdaptiveBlendShapesBehaviour__UpdateWithWorldPosition;
            lVar8 = func_0x00f78af4();
            lVar8 = *(long *)(lVar8 + 0x30);
            param_5 = extraout_x1;
            fVar19 = extraout_s0_05;
            if (lVar8 == 0) {
              return 0;
            }
          }
          *(ulong *)(puVar1 + -0x70) = uVar26;
          *(ulong *)(puVar1 + -0x68) = uVar25;
          *(ulong *)(puVar1 + -0x60) = uVar23;
          *(ulong *)(puVar1 + -0x58) = uVar22;
          *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
          *(ulong *)(puVar1 + -0x48) = uVar5 + 0x20;
          *(long *)(puVar1 + -0x40) = lVar4;
          *(ulong *)(puVar1 + -0x38) = uVar11;
          *(ulong *)(puVar1 + -0x30) = uVar10;
          *(ulong *)(puVar1 + -0x28) = uVar13;
          *(long *)(puVar1 + -0x20) = param_5;
          *(long *)(puVar1 + -0x18) = lVar7;
          *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar15;
          *(code **)(puVar1 + -8) = pcVar16;
          fVar24 = fVar17;
          fVar20 = fVar21;
          if ((bRam0000000003eb4f31 & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb4f31 = 1;
          }
          uVar6 = *(undefined8 *)(lVar8 + 0x10);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
          if ((uVar5 & 1) != 0) {
            return uVar5;
          }
          uVar6 = *(undefined8 *)(lVar8 + 0x18);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
          if ((uVar5 & 1) != 0) {
            return uVar5;
          }
          if ((*(long *)(lVar8 + 0x18) == 0) ||
             (lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar8 + 0x18),0), lVar4 == 0)) goto LAB_0153ff00;
          uVar5 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar4,0);
          *(float *)(puVar1 + -0x80) = fVar19 - extraout_s0;
          *(float *)(puVar1 + -0x7c) = fVar17 - fVar24;
          *(float *)(puVar1 + -0x78) = fVar21 - fVar20;
          if (0.0 <= param_4) {
            fVar19 = param_4 * param_4;
          }
          else {
            uVar5 = /*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(puVar1 + -0x80,0);
            fVar19 = extraout_s0_00;
          }
          if (324.0 <= fVar19) {
            if (*(char *)(lVar8 + 0x30) != '\0') {
              return uVar5;
            }
            fVar19 = SQRT(fVar19);
            if (0.0 <= param_4) {
              fVar19 = param_4;
            }
          }
          else {
            fVar19 = SQRT(fVar19);
            if (0.0 <= param_4) {
              fVar19 = param_4;
            }
            if (*(char *)(lVar8 + 0x30) != '\0') {
              uVar5 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((fVar19 + -8.0) * -0.25 + 1.0,0);
              if ((1.0 <= extraout_s0_01) || (*(int *)(lVar8 + 0x34) < 1)) goto code_r0x0153fca4;
              iVar3 = 0;
              goto code_r0x0153fc68;
            }
          }
          if (*(long *)(lVar8 + 0x20) == 0) {
            return uVar5;
          }
          goto code_r0x0153fcd8;
        }
        if ((param_6 == 0) ||
           (uVar2 = /*UnityEngine.Mesh$$GetBlendShapeIndex*/ func_0x032404c4(param_6,*(undefined8 *)(lVar4 + uVar11 * 8),0), uVar5 == 0)) {
          func_0x00f78af4();
          goto LAB_015403f4;
        }
        if (*(uint *)(uVar5 + 0x18) <= uVar11) goto LAB_015403f4;
        *(undefined4 *)(uVar5 + 0x20 + uVar11 * 4) = uVar2;
        uVar11 = uVar11 + 1;
      } while ((uVar9 & 0xffffffff) != uVar11);
    }
  }
  return uVar5;
  while( true ) {
    fVar17 = (float)/*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar8 + 0x10),iVar3,0);
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0153ff00;
    uVar5 = /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(extraout_s0_01 * fVar17,*(long *)(lVar8 + 0x10),iVar3,0);
    iVar3 = iVar3 + 1;
    if (*(int *)(lVar8 + 0x34) <= iVar3) break;
code_r0x0153fc68:
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0153ff00;
  }
code_r0x0153fca4:
  if ((*(long *)(lVar8 + 0x20) == 0) || (extraout_s0_01 <= 0.0)) {
    return uVar5;
  }
code_r0x0153fcd8:
  if (*(long *)(lVar8 + 0x18) != 0) {
    fVar21 = *(float *)(puVar1 + -0x80);
    fVar24 = *(float *)(puVar1 + -0x7c);
    fVar17 = *(float *)(puVar1 + -0x78);
    lVar4 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar8 + 0x18),0);
    if (lVar4 != 0) {
      fVar17 = fVar17 / fVar19;
      /*UnityEngine.Transform$$InverseTransformDirection*/ func_0x03276b34(fVar21 / fVar19,fVar24 / fVar19,fVar17,lVar4,0);
      uVar5 = _atan2f(fVar17);
      lVar4 = *(long *)(lVar8 + 0x28);
      if ((lVar4 != 0) && (0 < (int)*(ulong *)(lVar4 + 0x18))) {
        uVar9 = 0;
        uVar11 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          if (uVar11 <= uVar9) goto code_r0x0153fef4;
          if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0153ff00;
          uVar2 = *(undefined4 *)(lVar4 + 0x20 + uVar9 * 4);
          fVar19 = (float)/*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar8 + 0x10),uVar2,0);
          if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0153ff00;
          uVar18 = 0x42c80000;
          if (fVar19 <= 0.5) {
            uVar18 = 0;
          }
          uVar5 = /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(uVar18,*(long *)(lVar8 + 0x10),uVar2,0);
          uVar9 = uVar9 + 1;
          uVar11 = (ulong)*(uint *)(lVar4 + 0x18);
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
      lVar4 = *(long *)(lVar8 + 0x20);
      if (lVar4 != 0) {
        if ((int)*(ulong *)(lVar4 + 0x18) < 1) {
          return uVar5;
        }
        uVar9 = 0;
        fVar19 = extraout_s0_02 * _UNK_033f8818;
        uVar11 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        while (uVar9 < uVar11) {
          lVar7 = lVar4 + uVar9 * 0x10;
          lVar12 = *(long *)(lVar7 + 0x20);
          if (lVar12 != 0) {
            lVar7 = *(long *)(lVar7 + 0x28);
            uVar11 = *(ulong *)(lVar12 + 0x18);
            fVar17 = 100.0;
            if (uVar11 != 0) {
              fVar17 = 0.0;
            }
            if (0 < (int)uVar11) {
              uVar13 = 0;
              do {
                if ((uVar11 & 0xffffffff) <= uVar13) goto code_r0x0153fef4;
                iVar3 = *(int *)(lVar12 + 0x20 + uVar13 * 4);
                if (-1 < iVar3) {
                  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0153ff00;
                  uVar5 = /*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar8 + 0x10),iVar3,0);
                  if (fVar17 < extraout_s0_03) {
                    fVar17 = extraout_s0_03;
                  }
                }
                uVar13 = uVar13 + 1;
                uVar11 = (ulong)*(uint *)(lVar12 + 0x18);
              } while ((long)uVar13 < (long)(int)*(uint *)(lVar12 + 0x18));
            }
            if (lVar7 == 0) goto LAB_0153ff00;
            if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
              uVar11 = 0;
              uVar13 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
              puVar14 = (ulong *)(lVar7 + 0x28);
              do {
                if (uVar13 <= uVar11) goto code_r0x0153fef4;
                uVar13 = *puVar14;
                if (-1 < (long)uVar13) {
                  fVar24 = *(float *)((long)puVar14 + -4);
                  fVar21 = (fVar19 - *(float *)(puVar14 + -1)) / (fVar24 - *(float *)(puVar14 + -1))
                  ;
                  if (1.0 < fVar21) {
                    fVar21 = 1.0 - (fVar19 - fVar24) / ((float)uVar13 - fVar24);
                  }
                  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0153ff00;
                  if (fVar21 <= 0.0) {
                    fVar21 = 0.0;
                  }
                  uVar5 = /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(fVar17 * fVar21,*(long *)(lVar8 + 0x10),uVar13 >> 0x20,0);
                }
                uVar11 = uVar11 + 1;
                uVar13 = (ulong)*(uint *)(lVar7 + 0x18);
                puVar14 = puVar14 + 2;
              } while ((long)uVar11 < (long)(int)*(uint *)(lVar7 + 0x18));
            }
          }
          uVar9 = uVar9 + 1;
          uVar11 = (ulong)*(uint *)(lVar4 + 0x18);
          if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar9) {
            return uVar5;
          }
        }
code_r0x0153fef4:
        uVar6 = func_0x00f78b24();
        func_0x00f78ac0(uVar6,0);
      }
    }
  }
LAB_0153ff00:
  uVar5 = func_0x00f78af4();
  *(undefined1 *)(uVar5 + 0x30) = 1;
  return uVar5;
}



// ============================================================
// RVA: 0x1540518 | Atlas.Rendering.CameraAdaptiveBlendShapesConfig.get_Adjustments
// ============================================================

undefined8 Atlas_Rendering_CameraAdaptiveBlendShapesConfig__get_Adjustments(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1540520 | Atlas.Rendering.CameraAdaptiveBlendShapesConfig.get_Clamped
// ============================================================

undefined8 Atlas_Rendering_CameraAdaptiveBlendShapesConfig__get_Clamped(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x1540528 | Atlas.Rendering.CameraAdaptiveBlendShapesConfig..ctor
// ============================================================

void Atlas_Rendering_CameraAdaptiveBlendShapesConfig___ctor(undefined8 param_1)

{
  if ((bRam0000000003ec0cc7 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec0cc7 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  /*UnityEngine.Object$$.ctor*/ func_0x032343d4(param_1,0);
  if (pcRam0000000003ec0cc8 == (code *)0x0) {
    pcRam0000000003ec0cc8 =
         (code *)func_0x00f789d4(
                                "UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)"
                                );
  }
                    /* WARNING: Could not recover jumptable at 0x0324fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ec0cc8)(param_1);
  return;
}



