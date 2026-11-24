// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Rendering.CameraAdaptiveBlendShapes

// ============================================================
// RVA: 0x153fa9c | Atlas.Rendering.CameraAdaptiveBlendShapes.set_DisableBlendShapesOverDistance
// ============================================================

void Atlas_Rendering_CameraAdaptiveBlendShapes__set_DisableBlendShapesOverDistance
               (long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x30) = param_2;
  return;
}



// ============================================================
// RVA: 0x153faa4 | Atlas.Rendering.CameraAdaptiveBlendShapes.Init
// ============================================================

void Atlas_Rendering_CameraAdaptiveBlendShapes__Init
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  *(long *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(undefined8 *)(param_1 + 0x28) = param_5;
  if ((param_2 != 0) && (lVar2 = /*UnityEngine.SkinnedMeshRenderer$$get_sharedMesh*/ func_0x03265bd4(param_2,0), lVar2 != 0)) {
    uVar1 = /*UnityEngine.Mesh$$get_blendShapeCount*/ func_0x032403f4(lVar2,0);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    return;
  }
  lVar2 = func_0x00f78af4();
  *(undefined4 *)(lVar2 + 0x34) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  return;
}



// ============================================================
// RVA: 0x153faec | Atlas.Rendering.CameraAdaptiveBlendShapes.DeInit
// ============================================================

void Atlas_Rendering_CameraAdaptiveBlendShapes__DeInit(long param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// ============================================================
// RVA: 0x153fafc | Atlas.Rendering.CameraAdaptiveBlendShapes.Update
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_Rendering_CameraAdaptiveBlendShapes__Update
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  
  fVar11 = param_2;
  fVar12 = param_3;
  if ((bRam0000000003eb4f31 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f31 = 1;
  }
  uVar6 = *(undefined8 *)(param_5 + 0x10);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar6 = *(undefined8 *)(param_5 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if ((*(long *)(param_5 + 0x18) == 0) ||
     (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_5 + 0x18),0), lVar3 == 0)) goto LAB_0153ff00;
  fStack_80 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar3,0);
  fStack_80 = param_1 - fStack_80;
  fStack_7c = param_2 - fVar11;
  fStack_78 = param_3 - fVar12;
  if (0.0 <= param_4) {
    fVar11 = param_4 * param_4;
  }
  else {
    fVar11 = (float)/*UnityEngine.Vector3$$get_sqrMagnitude*/ func_0x0327bbe0(&fStack_80,0);
  }
  if (324.0 <= fVar11) {
    if (*(char *)(param_5 + 0x30) != '\0') {
      return;
    }
    fVar11 = SQRT(fVar11);
    if (0.0 <= param_4) {
      fVar11 = param_4;
    }
code_r0x0153fccc:
    if (*(long *)(param_5 + 0x20) == 0) {
      return;
    }
  }
  else {
    fVar11 = SQRT(fVar11);
    if (0.0 <= param_4) {
      fVar11 = param_4;
    }
    if (*(char *)(param_5 + 0x30) == '\0') goto code_r0x0153fccc;
    fVar12 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((fVar11 + -8.0) * -0.25 + 1.0,0);
    if ((fVar12 < 1.0) && (0 < *(int *)(param_5 + 0x34))) {
      iVar5 = 0;
      do {
        if (*(long *)(param_5 + 0x10) == 0) goto LAB_0153ff00;
        fVar13 = (float)/*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(param_5 + 0x10),iVar5,0);
        if (*(long *)(param_5 + 0x10) == 0) goto LAB_0153ff00;
        /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(fVar12 * fVar13,*(long *)(param_5 + 0x10),iVar5,0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_5 + 0x34));
    }
    if (*(long *)(param_5 + 0x20) == 0) {
      return;
    }
    if (fVar12 <= 0.0) {
      return;
    }
  }
  fVar15 = fStack_78;
  fVar13 = fStack_7c;
  fVar12 = fStack_80;
  if ((*(long *)(param_5 + 0x18) != 0) &&
     (lVar3 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_5 + 0x18),0), lVar3 != 0)) {
    fVar15 = fVar15 / fVar11;
    /*UnityEngine.Transform$$InverseTransformDirection*/ func_0x03276b34(fVar12 / fVar11,fVar13 / fVar11,fVar15,lVar3,0);
    fVar11 = (float)_atan2f(fVar15);
    lVar3 = *(long *)(param_5 + 0x28);
    if ((lVar3 != 0) && (0 < (int)*(ulong *)(lVar3 + 0x18))) {
      uVar2 = 0;
      uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar2) goto code_r0x0153fef4;
        if (*(long *)(param_5 + 0x10) == 0) goto LAB_0153ff00;
        uVar1 = *(undefined4 *)(lVar3 + 0x20 + uVar2 * 4);
        fVar12 = (float)/*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(param_5 + 0x10),uVar1,0);
        if (*(long *)(param_5 + 0x10) == 0) goto LAB_0153ff00;
        uVar14 = 0x42c80000;
        if (fVar12 <= 0.5) {
          uVar14 = 0;
        }
        /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(uVar14,*(long *)(param_5 + 0x10),uVar1,0);
        uVar2 = uVar2 + 1;
        uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
      } while ((long)uVar2 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    lVar3 = *(long *)(param_5 + 0x20);
    if (lVar3 != 0) {
      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
        uVar2 = 0;
        fVar11 = fVar11 * _UNK_033f8818;
        uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar4 <= uVar2) goto code_r0x0153fef4;
          lVar7 = lVar3 + uVar2 * 0x10;
          lVar8 = *(long *)(lVar7 + 0x20);
          if (lVar8 != 0) {
            lVar7 = *(long *)(lVar7 + 0x28);
            uVar4 = *(ulong *)(lVar8 + 0x18);
            fVar12 = 100.0;
            if (uVar4 != 0) {
              fVar12 = 0.0;
            }
            if (0 < (int)uVar4) {
              uVar9 = 0;
              do {
                if ((uVar4 & 0xffffffff) <= uVar9) goto code_r0x0153fef4;
                iVar5 = *(int *)(lVar8 + 0x20 + uVar9 * 4);
                if (-1 < iVar5) {
                  if (*(long *)(param_5 + 0x10) == 0) goto LAB_0153ff00;
                  fVar13 = (float)/*UnityEngine.SkinnedMeshRenderer$$GetBlendShapeWeight*/ func_0x03265cf4(*(long *)(param_5 + 0x10),iVar5,0);
                  if (fVar12 < fVar13) {
                    fVar12 = fVar13;
                  }
                }
                uVar9 = uVar9 + 1;
                uVar4 = (ulong)*(uint *)(lVar8 + 0x18);
              } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
            }
            if (lVar7 == 0) goto LAB_0153ff00;
            if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
              uVar4 = 0;
              uVar9 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
              puVar10 = (ulong *)(lVar7 + 0x28);
              do {
                if (uVar9 <= uVar4) goto code_r0x0153fef4;
                uVar9 = *puVar10;
                if (-1 < (long)uVar9) {
                  fVar15 = *(float *)((long)puVar10 + -4);
                  fVar13 = (fVar11 - *(float *)(puVar10 + -1)) / (fVar15 - *(float *)(puVar10 + -1))
                  ;
                  if (1.0 < fVar13) {
                    fVar13 = 1.0 - (fVar11 - fVar15) / ((float)uVar9 - fVar15);
                  }
                  if (*(long *)(param_5 + 0x10) == 0) goto LAB_0153ff00;
                  if (fVar13 <= 0.0) {
                    fVar13 = 0.0;
                  }
                  /*UnityEngine.SkinnedMeshRenderer$$SetBlendShapeWeight*/ func_0x03265d44(fVar12 * fVar13,*(long *)(param_5 + 0x10),uVar9 >> 0x20,0);
                }
                uVar4 = uVar4 + 1;
                uVar9 = (ulong)*(uint *)(lVar7 + 0x18);
                puVar10 = puVar10 + 2;
              } while ((long)uVar4 < (long)(int)*(uint *)(lVar7 + 0x18));
            }
          }
          uVar2 = uVar2 + 1;
          uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
        } while ((long)uVar2 < (long)(int)*(uint *)(lVar3 + 0x18));
      }
      return;
    }
  }
LAB_0153ff00:
  lVar3 = func_0x00f78af4();
  *(undefined1 *)(lVar3 + 0x30) = 1;
  return;
code_r0x0153fef4:
  uVar6 = func_0x00f78b24();
  func_0x00f78ac0(uVar6,0);
  goto LAB_0153ff00;
}



// ============================================================
// RVA: 0x153ff04 | Atlas.Rendering.CameraAdaptiveBlendShapes..ctor
// ============================================================

void Atlas_Rendering_CameraAdaptiveBlendShapes___ctor(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



