// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Rendering.CameraAdaptiveBlendShapesBehaviour

// ============================================================
// RVA: 0x153ff14 | Atlas.Rendering.CameraAdaptiveBlendShapesBehaviour.set_DisableBlendShapesOverDistance
// ============================================================

void Atlas_Rendering_CameraAdaptiveBlendShapesBehaviour__set_DisableBlendShapesOverDistance
               (long param_1,undefined1 param_2)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x30) + 0x30) = param_2;
  }
  return;
}



// ============================================================
// RVA: 0x153ff24 | Atlas.Rendering.CameraAdaptiveBlendShapesBehaviour.Awake
// ============================================================

/* WARNING: Possible PIC construction at 0x0154006c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01540098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015400cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0154009c) */
/* WARNING: Removing unreachable block (ram,0x01540070) */
/* WARNING: Removing unreachable block (ram,0x01540078) */
/* WARNING: Removing unreachable block (ram,0x01540084) */
/* WARNING: Removing unreachable block (ram,0x015400d0) */
/* WARNING: Removing unreachable block (ram,0x0153faa4) */
/* WARNING: Removing unreachable block (ram,0x0153fabc) */
/* WARNING: Removing unreachable block (ram,0x0153fae8) */
/* WARNING: Removing unreachable block (ram,0x0153fad0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Rendering_CameraAdaptiveBlendShapesBehaviour__Awake
                (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined1 auVar1 [16];
  undefined8 **ppuVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long extraout_x1;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *unaff_x23;
  long lVar16;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  ulong uVar17;
  undefined8 *******pppppppuVar18;
  undefined *puVar19;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar20;
  float extraout_s0_02;
  undefined4 uVar21;
  float extraout_s0_03;
  float extraout_s0_04;
  float fVar22;
  float extraout_s0_05;
  float fVar23;
  float fVar24;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong uVar25;
  float fVar26;
  ulong unaff_d10;
  ulong uVar27;
  ulong unaff_d11;
  ulong uVar28;
  undefined1 auVar29 [16];
  undefined8 *******pppppppuStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong *puStack_e8;
  ulong uStack_e0;
  ulong *puStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  ulong *puStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4f32 & 1) == 0) {
    func_0x00f78a20(0x3d204d0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f32 = 1;
  }
  uVar12 = *(undefined8 *)(param_5 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
  if ((uVar5 & 1) != 0) {
    return uVar5;
  }
  uVar12 = *(undefined8 *)(param_5 + 0x20);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
  if ((uVar5 & 1) != 0) {
    return uVar5;
  }
  if (*(long *)(param_5 + 0x18) != 0) {
    uVar12 = /*UnityEngine.SkinnedMeshRenderer$$get_sharedMesh*/ func_0x03265bd4(*(long *)(param_5 + 0x18),0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
    if ((uVar5 & 1) != 0) {
      return uVar5;
    }
    uVar12 = *(undefined8 *)(param_5 + 0x28);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar12,0);
    if (iVar3 == 0) {
      uVar5 = func_0x00f78aec(/*Atlas.Rendering.CameraAdaptiveBlendShapes_TypeInfo*/ uRam0000000003d204d0);
      *(undefined1 *)(uVar5 + 0x30) = 1;
      return uVar5;
    }
    if ((*(long *)(param_5 + 0x28) != 0) && (*(long *)(param_5 + 0x18) != 0)) {
      uVar13 = *(undefined8 *)(*(long *)(param_5 + 0x28) + 0x18);
      uVar12 = /*UnityEngine.SkinnedMeshRenderer$$get_sharedMesh*/ func_0x03265bd4(*(long *)(param_5 + 0x18),0);
      auVar29._8_8_ = uVar12;
      auVar29._0_8_ = uVar13;
      puStack_38 = &UNK_01540070;
      goto code_r0x015400f8;
    }
  }
  puStack_38 = &Atlas_Rendering_CameraAdaptiveBlendShapesConfig__ConvertNamed;
  auVar29 = func_0x00f78af4();
code_r0x015400f8:
  lVar8 = auVar29._8_8_;
  puVar14 = auVar29._0_8_;
  uVar5 = 0x3eb4000;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f35 & 1) == 0) {
    func_0x00f78a20(0x3d1f6b8);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d1f6c8);
    bRam0000000003eb4f35 = 1;
  }
  if (puVar14 == (ulong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar15 = puVar14[3];
    uVar6 = func_0x00f78a34(/*Atlas.Rendering.CameraAdaptiveBlendShapes.Adjustment[]_TypeInfo*/ uRam0000000003d1f6b8,uVar15);
    if (0 < (int)uVar15) {
      uVar10 = 0;
      uVar11 = uVar15 & 0xffffffff;
      uStack_b0 = uVar11;
      puStack_a8 = puVar14;
      uStack_a0 = uVar6;
      do {
        if ((uint)puVar14[3] <= uVar10) {
code_r0x01540308:
          uVar12 = func_0x00f78b24();
          auVar29 = func_0x00f78ac0(uVar12,0);
          lVar7 = auVar29._0_8_;
          puStack_b8 = &Atlas_Rendering_CameraAdaptiveBlendShapesConfig__ConvertNamed;
          puStack_100 = unaff_x26;
          uStack_f8 = unaff_x25;
          uStack_f0 = unaff_x24;
          puStack_e8 = unaff_x23;
          uStack_e0 = uVar15;
          puStack_d8 = puVar14;
          uStack_d0 = uVar5;
          lStack_c8 = lVar8;
          ppppppuStack_c0 = &pppppuStack_40;
          if ((bRam0000000003eb4f34 & 1) == 0) {
            func_0x00f78a20(0x3d1f6c0);
            bRam0000000003eb4f34 = 1;
          }
          if (lVar7 == 0) {
            return 0;
          }
          uVar6 = *(ulong *)(lVar7 + 0x18);
          uVar5 = func_0x00f78a34(/*Atlas.Rendering.CameraAdaptiveBlendShapes.Clamped[]_TypeInfo*/ uRam0000000003d1f6c0,uVar6);
          if ((int)uVar6 < 1) {
            return uVar5;
          }
          uVar15 = 0;
          goto code_r0x0154038c;
        }
        unaff_x24 = puVar14[uVar10 * 2 + 4];
        if ((unaff_x24 != 0) && (uVar17 = puVar14[uVar10 * 2 + 5], uVar17 != 0)) {
          uVar6 = *(ulong *)(unaff_x24 + 0x18);
          uStack_98 = uVar10;
          uVar15 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,uVar6);
          if (0 < (int)uVar6) {
            puVar14 = (ulong *)0x0;
            unaff_x23 = (ulong *)(uVar6 & 0xffffffff);
            unaff_x26 = (undefined8 *)(unaff_x24 + 0x20);
            do {
              if ((ulong *)(ulong)*(uint *)(unaff_x24 + 0x18) <= puVar14) goto code_r0x01540308;
              if ((lVar8 == 0) ||
                 (uVar4 = /*UnityEngine.Mesh$$GetBlendShapeIndex*/ func_0x032404c4(lVar8,unaff_x26[(long)puVar14],0), uVar15 == 0))
              goto code_r0x01540304;
              if ((ulong *)(ulong)*(uint *)(uVar15 + 0x18) <= puVar14) goto code_r0x01540308;
              *(undefined4 *)(uVar15 + 0x20 + (long)puVar14 * 4) = uVar4;
              puVar14 = (ulong *)((long)puVar14 + 1);
            } while (unaff_x23 != puVar14);
          }
          unaff_x24 = *(ulong *)(uVar17 + 0x18);
          unaff_x23 = (ulong *)func_0x00f78a34(/*Atlas.Rendering.CameraAdaptiveBlendShapes.Target[]_TypeInfo*/ uRam0000000003d1f6c8,unaff_x24);
          if (0 < (int)unaff_x24) {
            uVar6 = 0;
            unaff_x24 = unaff_x24 & 0xffffffff;
            unaff_x26 = (undefined8 *)(uVar17 + 0x30);
            puVar14 = unaff_x23 + 5;
            do {
              if (*(uint *)(uVar17 + 0x18) <= uVar6) goto code_r0x01540308;
              if (lVar8 == 0) goto code_r0x01540304;
              uVar5 = (ulong)*(uint *)(unaff_x26 + -1);
              unaff_x25 = unaff_x26[-2];
              lVar7 = /*UnityEngine.Mesh$$GetBlendShapeIndex*/ func_0x032404c4(lVar8,*unaff_x26,0);
              if (unaff_x23 == (ulong *)0x0) goto code_r0x01540304;
              if ((uint)unaff_x23[3] <= uVar6) goto code_r0x01540308;
              uVar5 = uVar5 | lVar7 << 0x20;
              puVar14[-1] = unaff_x25;
              *puVar14 = uVar5;
              uVar6 = uVar6 + 1;
              unaff_x26 = unaff_x26 + 3;
              puVar14 = puVar14 + 2;
            } while (unaff_x24 != uVar6);
          }
          if (uStack_a0 == 0) {
code_r0x01540304:
            func_0x00f78af4();
          }
          else if (uStack_98 < *(uint *)(uStack_a0 + 0x18)) {
            lVar7 = uStack_a0 + uStack_98 * 0x10;
            *(ulong *)(lVar7 + 0x20) = uVar15;
            *(ulong **)(lVar7 + 0x28) = unaff_x23;
            uVar6 = uStack_a0;
            uVar10 = uStack_98;
            uVar11 = uStack_b0;
            puVar14 = puStack_a8;
            goto code_r0x015402d0;
          }
          goto code_r0x01540308;
        }
code_r0x015402d0:
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar11);
    }
  }
  return uVar6;
code_r0x0154038c:
  if (*(uint *)(lVar7 + 0x18) <= uVar15) {
code_r0x015403f4:
    uVar12 = func_0x00f78b24();
    lVar8 = func_0x00f78ac0(uVar12,0);
    auVar1._8_8_ = lVar8;
    auVar1._0_8_ = extraout_x1;
    ppuVar2 = (undefined8 **)&stack0xfffffffffffffeb0;
    puStack_108 = &Atlas_Rendering_CameraAdaptiveBlendShapesBehaviour__UpdateWithCamera;
    pppppppuVar18 = &pppppppuStack_110;
    uVar17 = (ulong)(uint)extraout_s0_04;
    uVar11 = 0x3eb4000;
    uVar10 = 0x3d23990;
    pppppppuStack_110 = &ppppppuStack_c0;
    if ((bRam0000000003eb4f33 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f33 = 1;
    }
    fVar22 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    uVar25 = (ulong)(uint)fVar22;
    uVar27 = (ulong)(uint)param_2;
    uVar28 = (ulong)(uint)param_3;
    fVar20 = param_2;
    fVar24 = param_3;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(extraout_x1,0,0);
    if (iVar3 == 0) {
code_r0x015404b4:
      fVar24 = param_3;
      fVar20 = param_2;
      lVar8 = *(long *)(lVar8 + 0x30);
      if (lVar8 == 0) {
        return 0;
      }
      ppuVar2 = &puStack_100;
      uVar10 = uVar5;
      uVar11 = uVar6 & 0xffffffff;
      pppppppuVar18 = pppppppuStack_110;
      puVar19 = puStack_108;
      param_4 = extraout_s0_04;
      uVar17 = unaff_d8;
      uVar25 = unaff_d9;
      uVar27 = unaff_d10;
      uVar28 = unaff_d11;
      auVar1 = auVar29;
    }
    else {
      if ((extraout_x1 != 0) && (lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(extraout_x1,0), lVar9 != 0)) {
        fVar22 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar9,0);
        param_2 = fVar20;
        param_3 = fVar24;
        goto code_r0x015404b4;
      }
      puVar19 = &Atlas_Rendering_CameraAdaptiveBlendShapesBehaviour__UpdateWithWorldPosition;
      lVar8 = func_0x00f78af4();
      lVar8 = *(long *)(lVar8 + 0x30);
      fVar22 = extraout_s0_05;
      if (lVar8 == 0) {
        return 0;
      }
    }
    *(ulong *)((long)ppuVar2 + -0x70) = uVar28;
    *(ulong *)((long)ppuVar2 + -0x68) = uVar27;
    *(ulong *)((long)ppuVar2 + -0x60) = uVar25;
    *(ulong *)((long)ppuVar2 + -0x58) = uVar17;
    *(undefined8 **)((long)ppuVar2 + -0x50) = unaff_x26;
    *(ulong *)((long)ppuVar2 + -0x48) = uVar5 + 0x20;
    *(long *)((long)ppuVar2 + -0x40) = lVar7 + 0x20;
    *(ulong *)((long)ppuVar2 + -0x38) = uVar15;
    *(ulong *)((long)ppuVar2 + -0x30) = uVar11;
    *(ulong *)((long)ppuVar2 + -0x28) = uVar10;
    *(undefined1 (*) [16])((long)ppuVar2 + -0x20) = auVar1;
    *(undefined8 ********)((long)ppuVar2 + -0x10) = pppppppuVar18;
    *(undefined **)((long)ppuVar2 + -8) = puVar19;
    fVar26 = fVar20;
    fVar23 = fVar24;
    if ((bRam0000000003eb4f31 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f31 = 1;
    }
    uVar12 = *(undefined8 *)(lVar8 + 0x10);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
    if ((uVar5 & 1) != 0) {
      return uVar5;
    }
    uVar12 = *(undefined8 *)(lVar8 + 0x18);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
    if ((uVar5 & 1) != 0) {
      return uVar5;
    }
    if ((*(long *)(lVar8 + 0x18) == 0) ||
       (lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar8 + 0x18),0), lVar7 == 0)) goto LAB_0153ff00;
    uVar5 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar7,0);
    *(float *)((long)ppuVar2 + -0x80) = fVar22 - extraout_s0;
    *(float *)((long)ppuVar2 + -0x7c) = fVar20 - fVar26;
    *(float *)((long)ppuVar2 + -0x78) = fVar24 - fVar23;
    if (0.0 <= param_4) {
      fVar22 = param_4 * param_4;
    }
    else {
      uVar5 = /*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0((undefined1 *)((long)ppuVar2 + -0x80),0);
      fVar22 = extraout_s0_00;
    }
    if (324.0 <= fVar22) {
      if (*(char *)(lVar8 + 0x30) != '\0') {
        return uVar5;
      }
      fVar22 = SQRT(fVar22);
      if (0.0 <= param_4) {
        fVar22 = param_4;
      }
    }
    else {
      fVar22 = SQRT(fVar22);
      if (0.0 <= param_4) {
        fVar22 = param_4;
      }
      if (*(char *)(lVar8 + 0x30) != '\0') {
        uVar5 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((fVar22 + -8.0) * -0.25 + 1.0,0);
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
  if ((auVar29._8_8_ == 0) ||
     (uVar4 = /*UnityEngine.Mesh$$GetBlendShapeIndex*/ func_0x032404c4(auVar29._8_8_,*(undefined8 *)(lVar7 + 0x20 + uVar15 * 8),0),
     uVar5 == 0)) {
    func_0x00f78af4();
    goto code_r0x015403f4;
  }
  if (*(uint *)(uVar5 + 0x18) <= uVar15) goto code_r0x015403f4;
  *(undefined4 *)(uVar5 + 0x20 + uVar15 * 4) = uVar4;
  uVar15 = uVar15 + 1;
  if ((uVar6 & 0xffffffff) == uVar15) {
    return uVar5;
  }
  goto code_r0x0154038c;
  while( true ) {
    fVar20 = (float)/*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar8 + 0x10),iVar3,0);
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0153ff00;
    uVar5 = /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(extraout_s0_01 * fVar20,*(long *)(lVar8 + 0x10),iVar3,0);
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
    fVar24 = *(float *)((long)ppuVar2 + -0x80);
    fVar26 = *(float *)((long)ppuVar2 + -0x7c);
    fVar20 = *(float *)((long)ppuVar2 + -0x78);
    lVar7 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar8 + 0x18),0);
    if (lVar7 != 0) {
      fVar20 = fVar20 / fVar22;
      /*UnityEngine.Transform$$InverseTransformDirection*/ func_0x03276b34(fVar24 / fVar22,fVar26 / fVar22,fVar20,lVar7,0);
      uVar5 = _atan2f(fVar20);
      lVar7 = *(long *)(lVar8 + 0x28);
      if ((lVar7 != 0) && (0 < (int)*(ulong *)(lVar7 + 0x18))) {
        uVar6 = 0;
        uVar15 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar15 <= uVar6) goto code_r0x0153fef4;
          if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0153ff00;
          uVar4 = *(undefined4 *)(lVar7 + 0x20 + uVar6 * 4);
          fVar22 = (float)/*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar8 + 0x10),uVar4,0);
          if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0153ff00;
          uVar21 = 0x42c80000;
          if (fVar22 <= 0.5) {
            uVar21 = 0;
          }
          uVar5 = /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(uVar21,*(long *)(lVar8 + 0x10),uVar4,0);
          uVar6 = uVar6 + 1;
          uVar15 = (ulong)*(uint *)(lVar7 + 0x18);
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      lVar7 = *(long *)(lVar8 + 0x20);
      if (lVar7 != 0) {
        if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
          return uVar5;
        }
        uVar6 = 0;
        fVar22 = extraout_s0_02 * _UNK_033f8818;
        uVar15 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        while (uVar6 < uVar15) {
          lVar9 = lVar7 + uVar6 * 0x10;
          lVar16 = *(long *)(lVar9 + 0x20);
          if (lVar16 != 0) {
            lVar9 = *(long *)(lVar9 + 0x28);
            uVar15 = *(ulong *)(lVar16 + 0x18);
            fVar20 = 100.0;
            if (uVar15 != 0) {
              fVar20 = 0.0;
            }
            if (0 < (int)uVar15) {
              uVar10 = 0;
              do {
                if ((uVar15 & 0xffffffff) <= uVar10) goto code_r0x0153fef4;
                iVar3 = *(int *)(lVar16 + 0x20 + uVar10 * 4);
                if (-1 < iVar3) {
                  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0153ff00;
                  uVar5 = /*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar8 + 0x10),iVar3,0);
                  if (fVar20 < extraout_s0_03) {
                    fVar20 = extraout_s0_03;
                  }
                }
                uVar10 = uVar10 + 1;
                uVar15 = (ulong)*(uint *)(lVar16 + 0x18);
              } while ((long)uVar10 < (long)(int)*(uint *)(lVar16 + 0x18));
            }
            if (lVar9 == 0) goto LAB_0153ff00;
            if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
              uVar15 = 0;
              uVar10 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
              puVar14 = (ulong *)(lVar9 + 0x28);
              do {
                if (uVar10 <= uVar15) goto code_r0x0153fef4;
                uVar10 = *puVar14;
                if (-1 < (long)uVar10) {
                  fVar26 = *(float *)((long)puVar14 + -4);
                  fVar24 = (fVar22 - *(float *)(puVar14 + -1)) / (fVar26 - *(float *)(puVar14 + -1))
                  ;
                  if (1.0 < fVar24) {
                    fVar24 = 1.0 - (fVar22 - fVar26) / ((float)uVar10 - fVar26);
                  }
                  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0153ff00;
                  if (fVar24 <= 0.0) {
                    fVar24 = 0.0;
                  }
                  uVar5 = /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(fVar20 * fVar24,*(long *)(lVar8 + 0x10),uVar10 >> 0x20,0);
                }
                uVar15 = uVar15 + 1;
                uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
                puVar14 = puVar14 + 2;
              } while ((long)uVar15 < (long)(int)*(uint *)(lVar9 + 0x18));
            }
          }
          uVar6 = uVar6 + 1;
          uVar15 = (ulong)*(uint *)(lVar7 + 0x18);
          if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar6) {
            return uVar5;
          }
        }
code_r0x0153fef4:
        uVar12 = func_0x00f78b24();
        func_0x00f78ac0(uVar12,0);
      }
    }
  }
LAB_0153ff00:
  uVar5 = func_0x00f78af4();
  *(undefined1 *)(uVar5 + 0x30) = 1;
  return uVar5;
}



// ============================================================
// RVA: 0x1540400 | Atlas.Rendering.CameraAdaptiveBlendShapesBehaviour.UpdateWithCamera
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Rendering_CameraAdaptiveBlendShapesBehaviour__UpdateWithCamera
               (float param_1,float param_2,float param_3,float param_4,long param_5,long param_6)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar9;
  undefined8 unaff_x23;
  long lVar10;
  undefined8 unaff_x24;
  ulong uVar11;
  ulong *puVar12;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float extraout_s0;
  float fVar18;
  ulong unaff_d8;
  ulong unaff_d9;
  float fVar19;
  ulong unaff_d10;
  ulong unaff_d11;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar4 = (ulong)(uint)param_1;
  if ((bRam0000000003eb4f33 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f33 = 1;
  }
  fVar17 = (float)/*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
  uVar7 = (ulong)(uint)fVar17;
  fVar14 = param_2;
  fVar15 = param_3;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_6,0,0);
  if (iVar3 == 0) {
LAB_015404b4:
    fVar15 = param_3;
    fVar14 = param_2;
    lVar6 = *(long *)(param_5 + 0x30);
    if (lVar6 == 0) {
      return;
    }
  }
  else {
    if ((param_6 != 0) && (lVar6 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_6,0), lVar6 != 0)) {
      fVar17 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar6,0);
      param_2 = fVar14;
      param_3 = fVar15;
      goto LAB_015404b4;
    }
    param_1 = param_4;
    unaff_x30 = &Atlas_Rendering_CameraAdaptiveBlendShapesBehaviour__UpdateWithWorldPosition;
    lVar6 = func_0x00f78af4();
    lVar6 = *(long *)(lVar6 + 0x30);
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    unaff_x19 = param_5;
    unaff_x20 = param_6;
    unaff_x21 = 0x3d23990;
    unaff_x22 = 0x3eb4000;
    unaff_x29 = puVar1;
    fVar17 = extraout_s0;
    unaff_d8 = uVar4;
    unaff_d9 = uVar7;
    unaff_d10 = (ulong)(uint)param_2;
    unaff_d11 = (ulong)(uint)param_3;
    if (lVar6 == 0) {
      return;
    }
  }
  *(ulong *)((long)register0x00000008 + -0x70) = unaff_d11;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_d10;
  *(ulong *)((long)register0x00000008 + -0x60) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x58) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  fVar19 = fVar14;
  fVar18 = fVar15;
  if ((bRam0000000003eb4f31 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f31 = 1;
  }
  uVar8 = *(undefined8 *)(lVar6 + 0x10);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar8 = *(undefined8 *)(lVar6 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar8,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if ((*(long *)(lVar6 + 0x18) == 0) ||
     (lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar6 + 0x18),0), lVar5 == 0)) goto LAB_0153ff00;
  fVar13 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar5,0);
  *(float *)((long)register0x00000008 + -0x80) = fVar17 - fVar13;
  *(float *)((long)register0x00000008 + -0x7c) = fVar14 - fVar19;
  *(float *)((long)register0x00000008 + -0x78) = fVar15 - fVar18;
  if (0.0 <= param_1) {
    fVar17 = param_1 * param_1;
  }
  else {
    fVar17 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0((undefined1 *)((long)register0x00000008 + -0x80),0);
  }
  if (324.0 <= fVar17) {
    if (*(char *)(lVar6 + 0x30) != '\0') {
      return;
    }
    fVar17 = SQRT(fVar17);
    if (0.0 <= param_1) {
      fVar17 = param_1;
    }
code_r0x0153fccc:
    if (*(long *)(lVar6 + 0x20) == 0) {
      return;
    }
  }
  else {
    fVar17 = SQRT(fVar17);
    if (0.0 <= param_1) {
      fVar17 = param_1;
    }
    if (*(char *)(lVar6 + 0x30) == '\0') goto code_r0x0153fccc;
    fVar14 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((fVar17 + -8.0) * -0.25 + 1.0,0);
    if ((fVar14 < 1.0) && (0 < *(int *)(lVar6 + 0x34))) {
      iVar3 = 0;
      do {
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_0153ff00;
        fVar15 = (float)/*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar6 + 0x10),iVar3,0);
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_0153ff00;
        /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(fVar14 * fVar15,*(long *)(lVar6 + 0x10),iVar3,0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar6 + 0x34));
    }
    if (*(long *)(lVar6 + 0x20) == 0) {
      return;
    }
    if (fVar14 <= 0.0) {
      return;
    }
  }
  if (*(long *)(lVar6 + 0x18) != 0) {
    fVar15 = *(float *)((long)register0x00000008 + -0x80);
    fVar19 = *(float *)((long)register0x00000008 + -0x7c);
    fVar14 = *(float *)((long)register0x00000008 + -0x78);
    lVar5 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar6 + 0x18),0);
    if (lVar5 != 0) {
      fVar14 = fVar14 / fVar17;
      /*UnityEngine.Transform$$InverseTransformDirection*/ func_0x03276b34(fVar15 / fVar17,fVar19 / fVar17,fVar14,lVar5,0);
      fVar17 = (float)_atan2f(fVar14);
      lVar5 = *(long *)(lVar6 + 0x28);
      if ((lVar5 != 0) && (0 < (int)*(ulong *)(lVar5 + 0x18))) {
        uVar4 = 0;
        uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar4) goto code_r0x0153fef4;
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_0153ff00;
          uVar2 = *(undefined4 *)(lVar5 + 0x20 + uVar4 * 4);
          fVar14 = (float)/*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar6 + 0x10),uVar2,0);
          if (*(long *)(lVar6 + 0x10) == 0) goto LAB_0153ff00;
          uVar16 = 0x42c80000;
          if (fVar14 <= 0.5) {
            uVar16 = 0;
          }
          /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(uVar16,*(long *)(lVar6 + 0x10),uVar2,0);
          uVar4 = uVar4 + 1;
          uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
      lVar5 = *(long *)(lVar6 + 0x20);
      if (lVar5 != 0) {
        if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
          uVar4 = 0;
          fVar17 = fVar17 * _UNK_033f8818;
          uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
          do {
            if (uVar7 <= uVar4) goto code_r0x0153fef4;
            lVar9 = lVar5 + uVar4 * 0x10;
            lVar10 = *(long *)(lVar9 + 0x20);
            if (lVar10 != 0) {
              lVar9 = *(long *)(lVar9 + 0x28);
              uVar7 = *(ulong *)(lVar10 + 0x18);
              fVar14 = 100.0;
              if (uVar7 != 0) {
                fVar14 = 0.0;
              }
              if (0 < (int)uVar7) {
                uVar11 = 0;
                do {
                  if ((uVar7 & 0xffffffff) <= uVar11) goto code_r0x0153fef4;
                  iVar3 = *(int *)(lVar10 + 0x20 + uVar11 * 4);
                  if (-1 < iVar3) {
                    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_0153ff00;
                    fVar15 = (float)/*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar6 + 0x10),iVar3,0);
                    if (fVar14 < fVar15) {
                      fVar14 = fVar15;
                    }
                  }
                  uVar11 = uVar11 + 1;
                  uVar7 = (ulong)*(uint *)(lVar10 + 0x18);
                } while ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x18));
              }
              if (lVar9 == 0) goto LAB_0153ff00;
              if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
                uVar7 = 0;
                uVar11 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
                puVar12 = (ulong *)(lVar9 + 0x28);
                do {
                  if (uVar11 <= uVar7) goto code_r0x0153fef4;
                  uVar11 = *puVar12;
                  if (-1 < (long)uVar11) {
                    fVar19 = *(float *)((long)puVar12 + -4);
                    fVar15 = (fVar17 - *(float *)(puVar12 + -1)) /
                             (fVar19 - *(float *)(puVar12 + -1));
                    if (1.0 < fVar15) {
                      fVar15 = 1.0 - (fVar17 - fVar19) / ((float)uVar11 - fVar19);
                    }
                    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_0153ff00;
                    if (fVar15 <= 0.0) {
                      fVar15 = 0.0;
                    }
                    /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(fVar14 * fVar15,*(long *)(lVar6 + 0x10),uVar11 >> 0x20,0);
                  }
                  uVar7 = uVar7 + 1;
                  uVar11 = (ulong)*(uint *)(lVar9 + 0x18);
                  puVar12 = puVar12 + 2;
                } while ((long)uVar7 < (long)(int)*(uint *)(lVar9 + 0x18));
              }
            }
            uVar4 = uVar4 + 1;
            uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
          } while ((long)uVar4 < (long)(int)*(uint *)(lVar5 + 0x18));
        }
        return;
      }
    }
  }
LAB_0153ff00:
  lVar6 = func_0x00f78af4();
  *(undefined1 *)(lVar6 + 0x30) = 1;
  return;
code_r0x0153fef4:
  uVar8 = func_0x00f78b24();
  func_0x00f78ac0(uVar8,0);
  goto LAB_0153ff00;
}



// ============================================================
// RVA: 0x1540500 | Atlas.Rendering.CameraAdaptiveBlendShapesBehaviour.UpdateWithWorldPosition
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Rendering_CameraAdaptiveBlendShapesBehaviour__UpdateWithWorldPosition
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  
  lVar4 = *(long *)(param_5 + 0x30);
  if (lVar4 == 0) {
    return;
  }
  fVar12 = param_2;
  fVar13 = param_3;
  if ((bRam0000000003eb4f31 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f31 = 1;
  }
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar7 = *(undefined8 *)(lVar4 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if ((*(long *)(lVar4 + 0x18) == 0) ||
     (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar4 + 0x18),0), lVar3 == 0)) goto LAB_0153ff00;
  fStack_80 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar3,0);
  fStack_80 = param_1 - fStack_80;
  fStack_7c = param_2 - fVar12;
  fStack_78 = param_3 - fVar13;
  if (0.0 <= param_4) {
    fVar12 = param_4 * param_4;
  }
  else {
    fVar12 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&fStack_80,0);
  }
  if (324.0 <= fVar12) {
    if (*(char *)(lVar4 + 0x30) != '\0') {
      return;
    }
    fVar12 = SQRT(fVar12);
    if (0.0 <= param_4) {
      fVar12 = param_4;
    }
code_r0x0153fccc:
    if (*(long *)(lVar4 + 0x20) == 0) {
      return;
    }
  }
  else {
    fVar12 = SQRT(fVar12);
    if (0.0 <= param_4) {
      fVar12 = param_4;
    }
    if (*(char *)(lVar4 + 0x30) == '\0') goto code_r0x0153fccc;
    fVar13 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((fVar12 + -8.0) * -0.25 + 1.0,0);
    if ((fVar13 < 1.0) && (0 < *(int *)(lVar4 + 0x34))) {
      iVar6 = 0;
      do {
        if (*(long *)(lVar4 + 0x10) == 0) goto LAB_0153ff00;
        fVar14 = (float)/*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar4 + 0x10),iVar6,0);
        if (*(long *)(lVar4 + 0x10) == 0) goto LAB_0153ff00;
        /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(fVar13 * fVar14,*(long *)(lVar4 + 0x10),iVar6,0);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar4 + 0x34));
    }
    if (*(long *)(lVar4 + 0x20) == 0) {
      return;
    }
    if (fVar13 <= 0.0) {
      return;
    }
  }
  fVar16 = fStack_78;
  fVar14 = fStack_7c;
  fVar13 = fStack_80;
  if ((*(long *)(lVar4 + 0x18) != 0) &&
     (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar4 + 0x18),0), lVar3 != 0)) {
    fVar16 = fVar16 / fVar12;
    /*UnityEngine.Transform$$InverseTransformDirection*/ func_0x03276b34(fVar13 / fVar12,fVar14 / fVar12,fVar16,lVar3,0);
    fVar12 = (float)_atan2f(fVar16);
    lVar3 = *(long *)(lVar4 + 0x28);
    if ((lVar3 != 0) && (0 < (int)*(ulong *)(lVar3 + 0x18))) {
      uVar2 = 0;
      uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar2) goto code_r0x0153fef4;
        if (*(long *)(lVar4 + 0x10) == 0) goto LAB_0153ff00;
        uVar1 = *(undefined4 *)(lVar3 + 0x20 + uVar2 * 4);
        fVar13 = (float)/*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar4 + 0x10),uVar1,0);
        if (*(long *)(lVar4 + 0x10) == 0) goto LAB_0153ff00;
        uVar15 = 0x42c80000;
        if (fVar13 <= 0.5) {
          uVar15 = 0;
        }
        /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(uVar15,*(long *)(lVar4 + 0x10),uVar1,0);
        uVar2 = uVar2 + 1;
        uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
      } while ((long)uVar2 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    lVar3 = *(long *)(lVar4 + 0x20);
    if (lVar3 != 0) {
      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
        uVar2 = 0;
        fVar12 = fVar12 * _UNK_033f8818;
        uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar5 <= uVar2) goto code_r0x0153fef4;
          lVar8 = lVar3 + uVar2 * 0x10;
          lVar9 = *(long *)(lVar8 + 0x20);
          if (lVar9 != 0) {
            lVar8 = *(long *)(lVar8 + 0x28);
            uVar5 = *(ulong *)(lVar9 + 0x18);
            fVar13 = 100.0;
            if (uVar5 != 0) {
              fVar13 = 0.0;
            }
            if (0 < (int)uVar5) {
              uVar10 = 0;
              do {
                if ((uVar5 & 0xffffffff) <= uVar10) goto code_r0x0153fef4;
                iVar6 = *(int *)(lVar9 + 0x20 + uVar10 * 4);
                if (-1 < iVar6) {
                  if (*(long *)(lVar4 + 0x10) == 0) goto LAB_0153ff00;
                  fVar14 = (float)/*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(lVar4 + 0x10),iVar6,0);
                  if (fVar13 < fVar14) {
                    fVar13 = fVar14;
                  }
                }
                uVar10 = uVar10 + 1;
                uVar5 = (ulong)*(uint *)(lVar9 + 0x18);
              } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
            }
            if (lVar8 == 0) goto LAB_0153ff00;
            if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
              uVar5 = 0;
              uVar10 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
              puVar11 = (ulong *)(lVar8 + 0x28);
              do {
                if (uVar10 <= uVar5) goto code_r0x0153fef4;
                uVar10 = *puVar11;
                if (-1 < (long)uVar10) {
                  fVar16 = *(float *)((long)puVar11 + -4);
                  fVar14 = (fVar12 - *(float *)(puVar11 + -1)) / (fVar16 - *(float *)(puVar11 + -1))
                  ;
                  if (1.0 < fVar14) {
                    fVar14 = 1.0 - (fVar12 - fVar16) / ((float)uVar10 - fVar16);
                  }
                  if (*(long *)(lVar4 + 0x10) == 0) goto LAB_0153ff00;
                  if (fVar14 <= 0.0) {
                    fVar14 = 0.0;
                  }
                  /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(fVar13 * fVar14,*(long *)(lVar4 + 0x10),uVar10 >> 0x20,0);
                }
                uVar5 = uVar5 + 1;
                uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
                puVar11 = puVar11 + 2;
              } while ((long)uVar5 < (long)(int)*(uint *)(lVar8 + 0x18));
            }
          }
          uVar2 = uVar2 + 1;
          uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
        } while ((long)uVar2 < (long)(int)*(uint *)(lVar3 + 0x18));
      }
      return;
    }
  }
LAB_0153ff00:
  lVar4 = func_0x00f78af4();
  *(undefined1 *)(lVar4 + 0x30) = 1;
  return;
code_r0x0153fef4:
  uVar7 = func_0x00f78b24();
  func_0x00f78ac0(uVar7,0);
  goto LAB_0153ff00;
}



// ============================================================
// RVA: 0x1540510 | Atlas.Rendering.CameraAdaptiveBlendShapesBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Rendering_CameraAdaptiveBlendShapesBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
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



