// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Rendering.ColumnUvAnimatorBehaviour

// ============================================================
// RVA: 0x1570e08 | Atlas.Rendering.ColumnUvAnimatorBehaviour.Awake
// ============================================================

ulong Atlas_Rendering_ColumnUvAnimatorBehaviour__Awake(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float extraout_s0;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  if ((bRam0000000003eb503a & 1) == 0) {
    func_0x00f78a20(0x3d53530);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb503a = 1;
  }
  uVar4 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_1,uRam0000000003d53530);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  if (iVar2 != 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      lVar6 = func_0x00f78af4();
      if (0 < *(int *)(lVar6 + 0x18)) {
        *(float *)(lVar6 + 0x3c) = 1.0 / (float)*(int *)(lVar6 + 0x18);
      }
      uVar5 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(*(undefined8 *)(lVar6 + 0x28),0);
      *(int *)(lVar6 + 0x38) = (int)uVar5;
      return uVar5;
    }
    uVar4 = /*UnityEngine.Renderer$$get_material*/ func_0x0325be64(*(long *)(param_1 + 0x48),0);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
  }
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
  if (0 < *(int *)(param_1 + 0x18)) {
    *(float *)(param_1 + 0x3c) = 1.0 / (float)*(int *)(param_1 + 0x18);
  }
  uVar3 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(*(undefined8 *)(param_1 + 0x28),0);
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  puVar1 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar1 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar1 + -8) = unaff_x30;
    uVar4 = 0x3d23990;
    if ((bRam0000000003eb503c & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb503c = 1;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
    if ((uVar5 & 1) != 0) {
      return uVar5;
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x38);
      fVar10 = *(float *)(param_1 + 0x3c) * (float)*(int *)(param_1 + 0x40);
      uVar9 = 0x3f800000;
      uVar11 = 0;
      uVar4 = *(undefined8 *)(puVar1 + -0x30);
      uVar7 = *(undefined8 *)(puVar1 + -0x28);
      *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
      *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
      *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
      uVar8 = /*UnityEngine.Color$$op_Implicit*/ func_0x03223740(0x3f800000,0,uVar3,0);
      *(undefined8 *)(puVar1 + -0x30) = uVar4;
      *(undefined8 *)(puVar1 + -0x28) = uVar7;
      *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
      *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
      *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
      *(undefined4 *)(puVar1 + -0x40) = uVar8;
      *(undefined4 *)(puVar1 + -0x3c) = uVar9;
      *(float *)(puVar1 + -0x38) = fVar10;
      *(undefined4 *)(puVar1 + -0x34) = uVar11;
      if (pcRam0000000003ebfd28 == (code *)0x0) {
        pcRam0000000003ebfd28 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)"
                                    );
      }
      uVar5 = (*pcRam0000000003ebfd28)(lVar6,uVar3,puVar1 + -0x40);
      return uVar5;
    }
    lVar6 = func_0x00f78af4();
    *(undefined8 *)(puVar1 + -0x70) = unaff_d9;
    *(undefined8 *)(puVar1 + -0x68) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x60) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x58) = 0x3d23990;
    *(undefined8 *)(puVar1 + -0x50) = uVar7;
    *(long *)(puVar1 + -0x48) = param_1;
    *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x38) = &Atlas_Rendering_ColumnUvAnimatorBehaviour__Update;
    if ((bRam0000000003eb503b & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb503b = 1;
    }
    uVar7 = *(undefined8 *)(lVar6 + 0x48);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
    if ((int)uVar5 != 0) {
      if (*(long *)(lVar6 + 0x48) == 0) {
code_r0x0157113c:
        uVar5 = func_0x00f78af4();
        *(undefined8 *)(puVar1 + -0xa0) = 0x3d23990;
        *(undefined8 *)(puVar1 + -0x98) = uVar4;
        *(undefined8 *)(puVar1 + -0x90) = uVar7;
        *(long *)(puVar1 + -0x88) = lVar6;
        *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x40;
        *(undefined **)(puVar1 + -0x78) = &Atlas_Rendering_ColumnUvAnimatorBehaviour___ctor;
        if ((bRam0000000003eb503d & 1) == 0) {
          func_0x00f78a20(0x3d777e0);
          bRam0000000003eb503d = 1;
        }
        *(undefined4 *)(uVar5 + 0x18) = 1;
        *(undefined4 *)(uVar5 + 0x24) = 0x3f800000;
        *(undefined8 *)(uVar5 + 0x28) = /*STR('_ToonMap_ST')*/ uRam0000000003d777e0;
        *(undefined4 *)(uVar5 + 0x3c) = 0x3f800000;
        *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar1 + -0xa0);
        *(undefined8 *)(puVar1 + -0x98) = *(undefined8 *)(puVar1 + -0x98);
        *(undefined8 *)(puVar1 + -0x90) = *(undefined8 *)(puVar1 + -0x90);
        *(undefined8 *)(puVar1 + -0x88) = *(undefined8 *)(puVar1 + -0x88);
        *(undefined8 *)(puVar1 + -0x80) = *(undefined8 *)(puVar1 + -0x80);
        *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0x78);
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return uVar5;
      }
      uVar7 = /*UnityEngine.Renderer$$get_material*/ func_0x0325be64(*(long *)(lVar6 + 0x48),0);
      uVar4 = *(undefined8 *)(lVar6 + 0x30);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,uVar4,0);
      if ((int)uVar5 != 0) {
        if (*(long *)(lVar6 + 0x48) == 0) goto code_r0x0157113c;
        uVar5 = /*UnityEngine.Renderer$$get_material*/ func_0x0325be64(*(long *)(lVar6 + 0x48),0);
        *(ulong *)(lVar6 + 0x30) = uVar5;
      }
    }
    if (*(int *)(lVar6 + 0x18) < 1) {
      return uVar5;
    }
    fVar10 = *(float *)(lVar6 + 0x44);
    uVar5 = /*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    fVar10 = fVar10 + extraout_s0;
    *(float *)(lVar6 + 0x44) = fVar10;
    if (fVar10 < *(float *)(lVar6 + 0x24)) {
      return uVar5;
    }
    iVar2 = 0;
    if (*(int *)(lVar6 + 0x40) + 1 < *(int *)(lVar6 + 0x18)) {
      iVar2 = *(int *)(lVar6 + 0x40) + 1;
    }
    *(int *)(lVar6 + 0x40) = iVar2;
    *(float *)(lVar6 + 0x44) = fVar10 - *(float *)(lVar6 + 0x24);
    unaff_x29 = *(undefined8 *)(puVar1 + -0x40);
    unaff_x30 = *(undefined8 *)(puVar1 + -0x38);
    unaff_x20 = *(undefined8 *)(puVar1 + -0x50);
    unaff_x19 = *(undefined8 *)(puVar1 + -0x48);
    unaff_x22 = *(undefined8 *)(puVar1 + -0x60);
    unaff_x21 = *(undefined8 *)(puVar1 + -0x58);
    unaff_d9 = *(undefined8 *)(puVar1 + -0x70);
    unaff_d8 = *(undefined8 *)(puVar1 + -0x68);
    puVar1 = puVar1 + -0x30;
    param_1 = lVar6;
  } while( true );
}



// ============================================================
// RVA: 0x1570efc | Atlas.Rendering.ColumnUvAnimatorBehaviour.UpdateDerived
// ============================================================

void Atlas_Rendering_ColumnUvAnimatorBehaviour__UpdateDerived(long param_1)

{
  undefined4 uVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    *(float *)(param_1 + 0x3c) = 1.0 / (float)*(int *)(param_1 + 0x18);
  }
  uVar1 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(*(undefined8 *)(param_1 + 0x28),0);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1570f44 | Atlas.Rendering.ColumnUvAnimatorBehaviour.UpdateUVs
// ============================================================

ulong Atlas_Rendering_ColumnUvAnimatorBehaviour__UpdateUVs(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar5;
  undefined8 unaff_x21;
  undefined8 uVar6;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float extraout_s0;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar6 = 0x3d23990;
    if ((bRam0000000003eb503c & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb503c = 1;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      return uVar3;
    }
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x38);
      fVar9 = *(float *)(param_1 + 0x3c) * (float)*(int *)(param_1 + 0x40);
      uVar8 = 0x3f800000;
      uVar10 = 0;
      uVar6 = *(undefined8 *)((long)register0x00000008 + -0x30);
      uVar5 = *(undefined8 *)((long)register0x00000008 + -0x28);
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      uVar7 = /*UnityEngine.Color$$op_Implicit*/ func_0x03223740(0x3f800000,0,uVar2,0);
      *(undefined8 *)((long)register0x00000008 + -0x30) = uVar6;
      *(undefined8 *)((long)register0x00000008 + -0x28) = uVar5;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      *(undefined4 *)((long)register0x00000008 + -0x40) = uVar7;
      *(undefined4 *)((long)register0x00000008 + -0x3c) = uVar8;
      *(float *)((long)register0x00000008 + -0x38) = fVar9;
      *(undefined4 *)((long)register0x00000008 + -0x34) = uVar10;
      if (pcRam0000000003ebfd28 == (code *)0x0) {
        pcRam0000000003ebfd28 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)"
                                    );
      }
      uVar3 = (*pcRam0000000003ebfd28)(lVar4,uVar2,(undefined1 *)((long)register0x00000008 + -0x40))
      ;
      return uVar3;
    }
    lVar4 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3d23990;
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar5;
    *(long *)((long)register0x00000008 + -0x48) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) =
         &Atlas_Rendering_ColumnUvAnimatorBehaviour__Update;
    if ((bRam0000000003eb503b & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb503b = 1;
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x48);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
    if ((int)uVar3 != 0) {
      if (*(long *)(lVar4 + 0x48) == 0) {
code_r0x0157113c:
        uVar3 = func_0x00f78af4();
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3d23990;
        *(undefined8 *)((long)register0x00000008 + -0x98) = uVar6;
        *(undefined8 *)((long)register0x00000008 + -0x90) = uVar5;
        *(long *)((long)register0x00000008 + -0x88) = lVar4;
        *(undefined1 **)((long)register0x00000008 + -0x80) =
             (undefined1 *)((long)register0x00000008 + -0x40);
        *(undefined **)((long)register0x00000008 + -0x78) =
             &Atlas_Rendering_ColumnUvAnimatorBehaviour___ctor;
        if ((bRam0000000003eb503d & 1) == 0) {
          func_0x00f78a20(0x3d777e0);
          bRam0000000003eb503d = 1;
        }
        *(undefined4 *)(uVar3 + 0x18) = 1;
        *(undefined4 *)(uVar3 + 0x24) = 0x3f800000;
        *(undefined8 *)(uVar3 + 0x28) = /*STR('_ToonMap_ST')*/ uRam0000000003d777e0;
        *(undefined4 *)(uVar3 + 0x3c) = 0x3f800000;
        *(undefined8 *)((long)register0x00000008 + -0xa0) =
             *(undefined8 *)((long)register0x00000008 + -0xa0);
        *(undefined8 *)((long)register0x00000008 + -0x98) =
             *(undefined8 *)((long)register0x00000008 + -0x98);
        *(undefined8 *)((long)register0x00000008 + -0x90) =
             *(undefined8 *)((long)register0x00000008 + -0x90);
        *(undefined8 *)((long)register0x00000008 + -0x88) =
             *(undefined8 *)((long)register0x00000008 + -0x88);
        *(undefined8 *)((long)register0x00000008 + -0x80) =
             *(undefined8 *)((long)register0x00000008 + -0x80);
        *(undefined8 *)((long)register0x00000008 + -0x78) =
             *(undefined8 *)((long)register0x00000008 + -0x78);
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
      uVar5 = /*UnityEngine.Renderer$$get_material*/ func_0x0325be64(*(long *)(lVar4 + 0x48),0);
      uVar6 = *(undefined8 *)(lVar4 + 0x30);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,uVar6,0);
      if ((int)uVar3 != 0) {
        if (*(long *)(lVar4 + 0x48) == 0) goto code_r0x0157113c;
        uVar3 = /*UnityEngine.Renderer$$get_material*/ func_0x0325be64(*(long *)(lVar4 + 0x48),0);
        *(ulong *)(lVar4 + 0x30) = uVar3;
      }
    }
    if (*(int *)(lVar4 + 0x18) < 1) {
      return uVar3;
    }
    fVar9 = *(float *)(lVar4 + 0x44);
    uVar3 = /*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    fVar9 = fVar9 + extraout_s0;
    *(float *)(lVar4 + 0x44) = fVar9;
    if (fVar9 < *(float *)(lVar4 + 0x24)) {
      return uVar3;
    }
    iVar1 = 0;
    if (*(int *)(lVar4 + 0x40) + 1 < *(int *)(lVar4 + 0x18)) {
      iVar1 = *(int *)(lVar4 + 0x40) + 1;
    }
    *(int *)(lVar4 + 0x40) = iVar1;
    *(float *)(lVar4 + 0x44) = fVar9 - *(float *)(lVar4 + 0x24);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x38);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x48);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x68);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    param_1 = lVar4;
  } while( true );
}



// ============================================================
// RVA: 0x1570ffc | Atlas.Rendering.ColumnUvAnimatorBehaviour.Update
// ============================================================

ulong Atlas_Rendering_ColumnUvAnimatorBehaviour__Update(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float extraout_s0;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  
  do {
    lVar5 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb503b & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb503b = 1;
    }
    uVar7 = *(undefined8 *)(lVar5 + 0x48);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,0,0);
    if ((int)uVar6 != 0) {
      if (*(long *)(lVar5 + 0x48) == 0) {
LAB_0157113c:
        uVar6 = func_0x00f78af4();
        *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3d23990;
        *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x60) = uVar7;
        *(long *)((long)register0x00000008 + -0x58) = lVar5;
        *(undefined1 **)((long)register0x00000008 + -0x50) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)register0x00000008 + -0x48) =
             &Atlas_Rendering_ColumnUvAnimatorBehaviour___ctor;
        if ((bRam0000000003eb503d & 1) == 0) {
          func_0x00f78a20(0x3d777e0);
          bRam0000000003eb503d = 1;
        }
        *(undefined4 *)(uVar6 + 0x18) = 1;
        *(undefined4 *)(uVar6 + 0x24) = 0x3f800000;
        *(undefined8 *)(uVar6 + 0x28) = /*STR('_ToonMap_ST')*/ uRam0000000003d777e0;
        *(undefined4 *)(uVar6 + 0x3c) = 0x3f800000;
        *(undefined8 *)((long)register0x00000008 + -0x70) =
             *(undefined8 *)((long)register0x00000008 + -0x70);
        *(undefined8 *)((long)register0x00000008 + -0x68) =
             *(undefined8 *)((long)register0x00000008 + -0x68);
        *(undefined8 *)((long)register0x00000008 + -0x60) =
             *(undefined8 *)((long)register0x00000008 + -0x60);
        *(undefined8 *)((long)register0x00000008 + -0x58) =
             *(undefined8 *)((long)register0x00000008 + -0x58);
        *(undefined8 *)((long)register0x00000008 + -0x50) =
             *(undefined8 *)((long)register0x00000008 + -0x50);
        *(undefined8 *)((long)register0x00000008 + -0x48) =
             *(undefined8 *)((long)register0x00000008 + -0x48);
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
      uVar7 = /*UnityEngine.Renderer$$get_material*/ func_0x0325be64(*(long *)(lVar5 + 0x48),0);
      unaff_x21 = *(undefined8 *)(lVar5 + 0x30);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar7,unaff_x21,0);
      if ((int)uVar6 != 0) {
        if (*(long *)(lVar5 + 0x48) == 0) goto LAB_0157113c;
        uVar6 = /*UnityEngine.Renderer$$get_material*/ func_0x0325be64(*(long *)(lVar5 + 0x48),0);
        *(ulong *)(lVar5 + 0x30) = uVar6;
      }
    }
    if (*(int *)(lVar5 + 0x18) < 1) {
      return uVar6;
    }
    fVar11 = *(float *)(lVar5 + 0x44);
    uVar6 = /*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    fVar11 = fVar11 + extraout_s0;
    *(float *)(lVar5 + 0x44) = fVar11;
    if (fVar11 < *(float *)(lVar5 + 0x24)) {
      return uVar6;
    }
    iVar1 = 0;
    if (*(int *)(lVar5 + 0x40) + 1 < *(int *)(lVar5 + 0x18)) {
      iVar1 = *(int *)(lVar5 + 0x40) + 1;
    }
    *(int *)(lVar5 + 0x40) = iVar1;
    *(float *)(lVar5 + 0x44) = fVar11 - *(float *)(lVar5 + 0x24);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x21 = 0x3d23990;
    if ((bRam0000000003eb503c & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb503c = 1;
    }
    unaff_x20 = *(undefined8 *)(lVar5 + 0x30);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(unaff_x20,0,0);
    if ((uVar6 & 1) != 0) {
      return uVar6;
    }
    lVar4 = *(long *)(lVar5 + 0x30);
    if (lVar4 != 0) {
      uVar3 = *(undefined4 *)(lVar5 + 0x38);
      fVar11 = *(float *)(lVar5 + 0x3c) * (float)*(int *)(lVar5 + 0x40);
      uVar9 = 0x3f800000;
      uVar10 = 0;
      uVar7 = *(undefined8 *)((long)register0x00000008 + -0x30);
      uVar2 = *(undefined8 *)((long)register0x00000008 + -0x28);
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      uVar8 = /*UnityEngine.Color$$op_Implicit*/ func_0x03223740(0x3f800000,0,uVar3,0);
      *(undefined8 *)((long)register0x00000008 + -0x30) = uVar7;
      *(undefined8 *)((long)register0x00000008 + -0x28) = uVar2;
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
      *(float *)((long)register0x00000008 + -0x38) = fVar11;
      *(undefined4 *)((long)register0x00000008 + -0x34) = uVar10;
      if (pcRam0000000003ebfd28 == (code *)0x0) {
        pcRam0000000003ebfd28 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)"
                                    );
      }
      uVar6 = (*pcRam0000000003ebfd28)(lVar4,uVar3,(undefined1 *)((long)register0x00000008 + -0x40))
      ;
      return uVar6;
    }
    unaff_x30 = Atlas_Rendering_ColumnUvAnimatorBehaviour__Update;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x19 = lVar5;
  } while( true );
}



// ============================================================
// RVA: 0x1571140 | Atlas.Rendering.ColumnUvAnimatorBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Rendering_ColumnUvAnimatorBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb503d & 1) == 0) {
    func_0x00f78a20(0x3d777e0);
    bRam0000000003eb503d = 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x28) = /*STR('_ToonMap_ST')*/ uRam0000000003d777e0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
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



