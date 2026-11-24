// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Rendering.UvAnimatorBehaviour

// ============================================================
// RVA: 0x1526cd8 | Atlas.Rendering.UvAnimatorBehaviour.Awake
// ============================================================

ulong Atlas_Rendering_UvAnimatorBehaviour__Awake(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar10;
  undefined8 unaff_x21;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar12;
  undefined *unaff_x30;
  undefined4 uVar13;
  float extraout_s0;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  puVar1 = &stack0xffffffffffffffd0;
  puVar12 = &stack0xfffffffffffffff0;
  uVar5 = 0x3d53530;
  uVar11 = 0x3d23990;
  if ((bRam0000000003eb4e61 & 1) == 0) {
    func_0x00f78a20(0x3d53530);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e61 = 1;
  }
  lVar4 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_1,uRam0000000003d53530);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
  if (iVar2 != 0) {
    if (lVar4 == 0) {
      unaff_x30 = &Atlas_Rendering_UvAnimatorBehaviour__UpdateUVs;
      lVar4 = func_0x00f78af4();
      unaff_x20 = 0;
      goto code_r0x01526da0;
    }
    uVar5 = /*UnityEngine.Renderer$$get_material*/ func_0x0325be64(lVar4,0);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
  }
  uVar3 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(*(undefined8 *)(param_1 + 0x28),0);
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  puVar1 = (undefined1 *)register0x00000008;
  lVar4 = param_1;
  param_1 = unaff_x19;
  uVar11 = unaff_x21;
  uVar5 = unaff_x22;
  puVar12 = unaff_x29;
code_r0x01526da0:
  while( true ) {
    *(undefined8 *)(puVar1 + -0x30) = uVar5;
    *(undefined8 *)(puVar1 + -0x28) = uVar11;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar12;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    uVar11 = 0x3d23990;
    if ((bRam0000000003eb4e62 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4e62 = 1;
    }
    uVar10 = *(undefined8 *)(lVar4 + 0x30);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar10,0,0);
    if ((((uVar6 & 1) != 0) || (lVar9 = *(long *)(lVar4 + 0x18), lVar9 == 0)) ||
       (*(long *)(lVar9 + 0x18) == 0)) {
      return uVar6;
    }
    if (*(uint *)(lVar4 + 0x3c) < (uint)*(long *)(lVar9 + 0x18)) {
      lVar7 = *(long *)(lVar4 + 0x30);
      if (lVar7 != 0) {
        uVar3 = *(undefined4 *)(lVar4 + 0x38);
        lVar9 = lVar9 + (long)(int)*(uint *)(lVar4 + 0x3c) * 0x10;
        uVar15 = *(undefined4 *)(lVar9 + 0x28);
        uVar16 = *(undefined4 *)(lVar9 + 0x2c);
        uVar13 = *(undefined4 *)(lVar9 + 0x20);
        uVar14 = *(undefined4 *)(lVar9 + 0x24);
        uVar5 = *(undefined8 *)(puVar1 + -0x30);
        uVar11 = *(undefined8 *)(puVar1 + -0x28);
        *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
        *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
        *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
        *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
        uVar13 = /*UnityEngine.Color$$op_Implicit*/ func_0x03223740(uVar13,0,uVar3,0);
        *(undefined8 *)(puVar1 + -0x30) = uVar5;
        *(undefined8 *)(puVar1 + -0x28) = uVar11;
        *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
        *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
        *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
        *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
        *(undefined4 *)(puVar1 + -0x40) = uVar13;
        *(undefined4 *)(puVar1 + -0x3c) = uVar14;
        *(undefined4 *)(puVar1 + -0x38) = uVar15;
        *(undefined4 *)(puVar1 + -0x34) = uVar16;
        if (pcRam0000000003ebfd28 == (code *)0x0) {
          pcRam0000000003ebfd28 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)"
                                      );
        }
        uVar6 = (*pcRam0000000003ebfd28)(lVar7,uVar3,puVar1 + -0x40);
        return uVar6;
      }
    }
    else {
      uVar8 = func_0x00f78b24();
      func_0x00f78ac0(uVar8,0);
    }
    lVar9 = func_0x00f78af4();
    *(undefined8 *)(puVar1 + -0x60) = unaff_d9;
    *(undefined8 *)(puVar1 + -0x58) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x50) = uVar10;
    *(long *)(puVar1 + -0x48) = lVar4;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x38) = &Atlas_Rendering_UvAnimatorBehaviour__Update;
    fVar17 = *(float *)(lVar9 + 0x40);
    uVar6 = /*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    fVar17 = fVar17 + extraout_s0;
    *(float *)(lVar9 + 0x40) = fVar17;
    if (fVar17 < *(float *)(lVar9 + 0x20)) break;
    iVar2 = *(int *)(lVar9 + 0x3c) + 1;
    *(int *)(lVar9 + 0x3c) = iVar2;
    if (*(long *)(lVar9 + 0x18) == 0) {
      uVar6 = func_0x00f78af4();
      *(undefined8 *)(puVar1 + -0x90) = uVar5;
      *(undefined8 *)(puVar1 + -0x88) = 0x3d23990;
      *(undefined8 *)(puVar1 + -0x80) = uVar10;
      *(long *)(puVar1 + -0x78) = lVar9;
      *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x40;
      *(undefined **)(puVar1 + -0x68) = &Atlas_Rendering_UvAnimatorBehaviour___ctor;
      if ((bRam0000000003eb4e63 & 1) == 0) {
        func_0x00f78a20(0x3d76d08);
        bRam0000000003eb4e63 = 1;
      }
      *(undefined4 *)(uVar6 + 0x20) = 0x3f800000;
      *(undefined8 *)(uVar6 + 0x28) = /*STR('_BaseMap_ST')*/ uRam0000000003d76d08;
      *(undefined8 *)(puVar1 + -0x90) = *(undefined8 *)(puVar1 + -0x90);
      *(undefined8 *)(puVar1 + -0x88) = *(undefined8 *)(puVar1 + -0x88);
      *(undefined8 *)(puVar1 + -0x80) = *(undefined8 *)(puVar1 + -0x80);
      *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0x78);
      *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)(puVar1 + -0x70);
      *(undefined8 *)(puVar1 + -0x68) = *(undefined8 *)(puVar1 + -0x68);
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return uVar6;
    }
    if (*(int *)(*(long *)(lVar9 + 0x18) + 0x18) <= iVar2) {
      *(undefined4 *)(lVar9 + 0x3c) = 0;
    }
    *(float *)(lVar9 + 0x40) = fVar17 - *(float *)(lVar9 + 0x20);
    puVar12 = *(undefined1 **)(puVar1 + -0x40);
    unaff_x30 = *(undefined **)(puVar1 + -0x38);
    unaff_x20 = *(undefined8 *)(puVar1 + -0x50);
    param_1 = *(long *)(puVar1 + -0x48);
    unaff_d9 = *(undefined8 *)(puVar1 + -0x60);
    unaff_d8 = *(undefined8 *)(puVar1 + -0x58);
    puVar1 = puVar1 + -0x30;
    lVar4 = lVar9;
  }
  return uVar6;
}



// ============================================================
// RVA: 0x1526da0 | Atlas.Rendering.UvAnimatorBehaviour.UpdateUVs
// ============================================================

ulong Atlas_Rendering_UvAnimatorBehaviour__UpdateUVs(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined4 uVar8;
  float extraout_s0;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x21 = 0x3d23990;
    if ((bRam0000000003eb4e62 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4e62 = 1;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
    if ((((uVar3 & 1) != 0) || (lVar6 = *(long *)(param_1 + 0x18), lVar6 == 0)) ||
       (*(long *)(lVar6 + 0x18) == 0)) {
      return uVar3;
    }
    if (*(uint *)(param_1 + 0x3c) < (uint)*(long *)(lVar6 + 0x18)) {
      lVar4 = *(long *)(param_1 + 0x30);
      if (lVar4 != 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x38);
        lVar6 = lVar6 + (long)(int)*(uint *)(param_1 + 0x3c) * 0x10;
        uVar10 = *(undefined4 *)(lVar6 + 0x28);
        uVar11 = *(undefined4 *)(lVar6 + 0x2c);
        uVar8 = *(undefined4 *)(lVar6 + 0x20);
        uVar9 = *(undefined4 *)(lVar6 + 0x24);
        uVar7 = *(undefined8 *)((long)register0x00000008 + -0x30);
        uVar5 = *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        uVar8 = /*UnityEngine.Color$$op_Implicit*/ func_0x03223740(uVar8,0,uVar2,0);
        *(undefined8 *)((long)register0x00000008 + -0x30) = uVar7;
        *(undefined8 *)((long)register0x00000008 + -0x28) = uVar5;
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        *(undefined4 *)((long)register0x00000008 + -0x40) = uVar8;
        *(undefined4 *)((long)register0x00000008 + -0x3c) = uVar9;
        *(undefined4 *)((long)register0x00000008 + -0x38) = uVar10;
        *(undefined4 *)((long)register0x00000008 + -0x34) = uVar11;
        if (pcRam0000000003ebfd28 == (code *)0x0) {
          pcRam0000000003ebfd28 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)"
                                      );
        }
        uVar3 = (*pcRam0000000003ebfd28)
                          (lVar4,uVar2,(undefined1 *)((long)register0x00000008 + -0x40));
        return uVar3;
      }
    }
    else {
      uVar5 = func_0x00f78b24();
      func_0x00f78ac0(uVar5,0);
    }
    lVar6 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar7;
    *(long *)((long)register0x00000008 + -0x48) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) = &Atlas_Rendering_UvAnimatorBehaviour__Update
    ;
    fVar12 = *(float *)(lVar6 + 0x40);
    uVar3 = /*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    fVar12 = fVar12 + extraout_s0;
    *(float *)(lVar6 + 0x40) = fVar12;
    if (fVar12 < *(float *)(lVar6 + 0x20)) break;
    iVar1 = *(int *)(lVar6 + 0x3c) + 1;
    *(int *)(lVar6 + 0x3c) = iVar1;
    if (*(long *)(lVar6 + 0x18) == 0) {
      uVar3 = func_0x00f78af4();
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3d23990;
      *(undefined8 *)((long)register0x00000008 + -0x80) = uVar7;
      *(long *)((long)register0x00000008 + -0x78) = lVar6;
      *(undefined1 **)((long)register0x00000008 + -0x70) =
           (undefined1 *)((long)register0x00000008 + -0x40);
      *(undefined **)((long)register0x00000008 + -0x68) =
           &Atlas_Rendering_UvAnimatorBehaviour___ctor;
      if ((bRam0000000003eb4e63 & 1) == 0) {
        func_0x00f78a20(0x3d76d08);
        bRam0000000003eb4e63 = 1;
      }
      *(undefined4 *)(uVar3 + 0x20) = 0x3f800000;
      *(undefined8 *)(uVar3 + 0x28) = /*STR('_BaseMap_ST')*/ uRam0000000003d76d08;
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)((long)register0x00000008 + -0x70);
      *(undefined8 *)((long)register0x00000008 + -0x68) =
           *(undefined8 *)((long)register0x00000008 + -0x68);
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return uVar3;
    }
    if (*(int *)(*(long *)(lVar6 + 0x18) + 0x18) <= iVar1) {
      *(undefined4 *)(lVar6 + 0x3c) = 0;
    }
    *(float *)(lVar6 + 0x40) = fVar12 - *(float *)(lVar6 + 0x20);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x48);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x58);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_1 = lVar6;
  }
  return uVar3;
}



// ============================================================
// RVA: 0x1526e74 | Atlas.Rendering.UvAnimatorBehaviour.Update
// ============================================================

ulong Atlas_Rendering_UvAnimatorBehaviour__Update(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined4 uVar9;
  float extraout_s0;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  while( true ) {
    lVar6 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    fVar13 = *(float *)(lVar6 + 0x40);
    uVar7 = /*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    fVar13 = fVar13 + extraout_s0;
    *(float *)(lVar6 + 0x40) = fVar13;
    if (fVar13 < *(float *)(lVar6 + 0x20)) {
      return uVar7;
    }
    iVar1 = *(int *)(lVar6 + 0x3c) + 1;
    *(int *)(lVar6 + 0x3c) = iVar1;
    if (*(long *)(lVar6 + 0x18) == 0) break;
    if (*(int *)(*(long *)(lVar6 + 0x18) + 0x18) <= iVar1) {
      *(undefined4 *)(lVar6 + 0x3c) = 0;
    }
    *(float *)(lVar6 + 0x40) = fVar13 - *(float *)(lVar6 + 0x20);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x21 = 0x3d23990;
    if ((bRam0000000003eb4e62 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4e62 = 1;
    }
    unaff_x20 = *(undefined8 *)(lVar6 + 0x30);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar7 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x20,0,0);
    if ((((uVar7 & 1) != 0) || (lVar8 = *(long *)(lVar6 + 0x18), lVar8 == 0)) ||
       (*(long *)(lVar8 + 0x18) == 0)) {
      return uVar7;
    }
    if (*(uint *)(lVar6 + 0x3c) < (uint)*(long *)(lVar8 + 0x18)) {
      lVar4 = *(long *)(lVar6 + 0x30);
      if (lVar4 != 0) {
        uVar3 = *(undefined4 *)(lVar6 + 0x38);
        lVar8 = lVar8 + (long)(int)*(uint *)(lVar6 + 0x3c) * 0x10;
        uVar11 = *(undefined4 *)(lVar8 + 0x28);
        uVar12 = *(undefined4 *)(lVar8 + 0x2c);
        uVar9 = *(undefined4 *)(lVar8 + 0x20);
        uVar10 = *(undefined4 *)(lVar8 + 0x24);
        uVar5 = *(undefined8 *)((long)register0x00000008 + -0x30);
        uVar2 = *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        uVar9 = /*UnityEngine.Color$$op_Implicit*/ func_0x03223740(uVar9,0,uVar3,0);
        *(undefined8 *)((long)register0x00000008 + -0x30) = uVar5;
        *(undefined8 *)((long)register0x00000008 + -0x28) = uVar2;
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        *(undefined4 *)((long)register0x00000008 + -0x40) = uVar9;
        *(undefined4 *)((long)register0x00000008 + -0x3c) = uVar10;
        *(undefined4 *)((long)register0x00000008 + -0x38) = uVar11;
        *(undefined4 *)((long)register0x00000008 + -0x34) = uVar12;
        if (pcRam0000000003ebfd28 == (code *)0x0) {
          pcRam0000000003ebfd28 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)"
                                      );
        }
        uVar7 = (*pcRam0000000003ebfd28)
                          (lVar4,uVar3,(undefined1 *)((long)register0x00000008 + -0x40));
        return uVar7;
      }
    }
    else {
      uVar5 = func_0x00f78b24();
      func_0x00f78ac0(uVar5,0);
    }
    unaff_x30 = Atlas_Rendering_UvAnimatorBehaviour__Update;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x19 = lVar6;
  }
  uVar7 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x48) = lVar6;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) = &Atlas_Rendering_UvAnimatorBehaviour___ctor;
  if ((bRam0000000003eb4e63 & 1) == 0) {
    func_0x00f78a20(0x3d76d08);
    bRam0000000003eb4e63 = 1;
  }
  *(undefined4 *)(uVar7 + 0x20) = 0x3f800000;
  *(undefined8 *)(uVar7 + 0x28) = /*STR('_BaseMap_ST')*/ uRam0000000003d76d08;
  *(undefined8 *)((long)register0x00000008 + -0x60) =
       *(undefined8 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x58) =
       *(undefined8 *)((long)register0x00000008 + -0x58);
  *(undefined8 *)((long)register0x00000008 + -0x50) =
       *(undefined8 *)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0x48) =
       *(undefined8 *)((long)register0x00000008 + -0x48);
  *(undefined8 *)((long)register0x00000008 + -0x40) =
       *(undefined8 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x38) =
       *(undefined8 *)((long)register0x00000008 + -0x38);
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return uVar7;
}



// ============================================================
// RVA: 0x1526efc | Atlas.Rendering.UvAnimatorBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Rendering_UvAnimatorBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb4e63 & 1) == 0) {
    func_0x00f78a20(0x3d76d08);
    bRam0000000003eb4e63 = 1;
  }
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x28) = /*STR('_BaseMap_ST')*/ uRam0000000003d76d08;
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



