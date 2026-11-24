// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Rendering.ScrollingUvBehaviour

// ============================================================
// RVA: 0x14eeee4 | Atlas.Rendering.ScrollingUvBehaviour.Start
// ============================================================

long Atlas_Rendering_ScrollingUvBehaviour__Start(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000003eb4c59 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c59 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0x38) == '\0') {
      if (lVar2 == 0) goto LAB_014eef9c;
      uVar3 = /*UnityEngine.Renderer$$get_sharedMaterial*/ func_0x0325bea4(lVar2,0);
    }
    else {
      if (lVar2 == 0) {
LAB_014eef9c:
        lVar2 = func_0x00f78af4();
        if ((bRam0000000003eb4c5a & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4c5a = 1;
        }
        if (*(char *)(lVar2 + 0x20) == '\0') {
          fVar5 = *(float *)(lVar2 + 0x48);
          fVar8 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
          fVar5 = fVar5 + fVar8;
        }
        else {
          fVar5 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
        }
        *(float *)(lVar2 + 0x48) = fVar5;
        uVar3 = *(undefined8 *)(lVar2 + 0x30);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
        if (iVar1 == 0) {
          uVar3 = *(undefined8 *)(lVar2 + 0x50);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
          if ((int)lVar4 == 0) {
            return lVar4;
          }
          lVar4 = *(long *)(lVar2 + 0x50);
          if (lVar4 != 0) {
            uVar6 = *(undefined4 *)(lVar2 + 0x58);
            /*UnityEngine.Color$$op_Implicit*/ func_0x03223740(0x3f800000,0,uVar6,0);
            if (pcRam0000000003ebfd28 == (code *)0x0) {
              pcRam0000000003ebfd28 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)"
                                          );
            }
            lVar2 = (*pcRam0000000003ebfd28)(lVar4,uVar6,&stack0xffffffffffffff90);
            return lVar2;
          }
        }
        else {
          lVar4 = *(long *)(lVar2 + 0x30);
          if (lVar4 != 0) {
            fVar8 = *(float *)(lVar2 + 0x48);
            fVar9 = *(float *)(lVar2 + 0x18);
            fVar5 = *(float *)(lVar2 + 0x1c);
            uStack_88 = *(undefined8 *)(lVar4 + 0xe0);
            uStack_90 = *(undefined8 *)(lVar4 + 0xd8);
            uVar6 = /*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_90,0);
            lVar2 = *(long *)(lVar2 + 0x30);
            if (lVar2 != 0) {
              uStack_88 = *(undefined8 *)(lVar2 + 0xe0);
              uStack_90 = *(undefined8 *)(lVar2 + 0xd8);
              uVar7 = /*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_90,0);
              uStack_a0 = 0;
              uStack_98 = 0;
              /*UnityEngine.Rect$$.ctor*/ func_0x03253480(fVar9 * fVar8,fVar8 * fVar5,uVar6,uVar7,&uStack_a0,0);
              lVar2 = /*UnityEngine.UI.RawImage$$set_uvRect*/ func_0x032db428(uStack_a0 & 0xffffffff,uStack_a0._4_4_,(undefined4)uStack_98,
                                      uStack_98._4_4_,lVar4,0);
              return lVar2;
            }
          }
        }
        lVar2 = func_0x00f78af4();
        if ((bRam0000000003eb4c5b & 1) == 0) {
          func_0x00f78a20(0x3d777e0);
          bRam0000000003eb4c5b = 1;
        }
        uVar3 = NEON_fmov(0x3f800000,4);
        *(undefined8 *)(lVar2 + 0x18) = uVar3;
        *(undefined1 *)(lVar2 + 0x38) = 1;
        *(undefined8 *)(lVar2 + 0x40) = /*STR('_ToonMap_ST')*/ uRam0000000003d777e0;
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return lVar2;
      }
      uVar3 = /*UnityEngine.Renderer$$get_material*/ func_0x0325be64(lVar2,0);
    }
    *(undefined8 *)(param_1 + 0x50) = uVar3;
  }
  lVar2 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(*(undefined8 *)(param_1 + 0x40),0);
  *(int *)(param_1 + 0x58) = (int)lVar2;
  return lVar2;
}



// ============================================================
// RVA: 0x14eefa0 | Atlas.Rendering.ScrollingUvBehaviour.Update
// ============================================================

long Atlas_Rendering_ScrollingUvBehaviour__Update(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4c5a & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c5a = 1;
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar5 = *(float *)(param_1 + 0x48);
    fVar8 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    fVar5 = fVar5 + fVar8;
  }
  else {
    fVar5 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
  }
  *(float *)(param_1 + 0x48) = fVar5;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if (iVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
    if ((int)lVar4 == 0) {
      return lVar4;
    }
    lVar4 = *(long *)(param_1 + 0x50);
    if (lVar4 != 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x58);
      /*UnityEngine.Color$$op_Implicit*/ func_0x03223740(0x3f800000,0,uVar6,0);
      if (pcRam0000000003ebfd28 == (code *)0x0) {
        pcRam0000000003ebfd28 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)"
                                    );
      }
      lVar4 = (*pcRam0000000003ebfd28)(lVar4,uVar6,&stack0xffffffffffffffc0);
      return lVar4;
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      fVar8 = *(float *)(param_1 + 0x48);
      fVar9 = *(float *)(param_1 + 0x18);
      fVar5 = *(float *)(param_1 + 0x1c);
      uStack_58 = *(undefined8 *)(lVar4 + 0xe0);
      uStack_60 = *(undefined8 *)(lVar4 + 0xd8);
      uVar6 = /*UnityEngine.Rect$$get_width*/ func_0x03253564(&uStack_60,0);
      lVar2 = *(long *)(param_1 + 0x30);
      if (lVar2 != 0) {
        uStack_58 = *(undefined8 *)(lVar2 + 0xe0);
        uStack_60 = *(undefined8 *)(lVar2 + 0xd8);
        uVar7 = /*UnityEngine.Rect$$get_height*/ func_0x03253574(&uStack_60,0);
        uStack_70 = 0;
        uStack_68 = 0;
        /*UnityEngine.Rect$$.ctor*/ func_0x03253480(fVar9 * fVar8,fVar8 * fVar5,uVar6,uVar7,&uStack_70,0);
        lVar4 = /*UnityEngine.UI.RawImage$$set_uvRect*/ func_0x032db428(uStack_70 & 0xffffffff,uStack_70._4_4_,(undefined4)uStack_68,
                                uStack_68._4_4_,lVar4,0);
        return lVar4;
      }
    }
  }
  lVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4c5b & 1) == 0) {
    func_0x00f78a20(0x3d777e0);
    bRam0000000003eb4c5b = 1;
  }
  uVar3 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(lVar4 + 0x18) = uVar3;
  *(undefined1 *)(lVar4 + 0x38) = 1;
  *(undefined8 *)(lVar4 + 0x40) = /*STR('_ToonMap_ST')*/ uRam0000000003d777e0;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return lVar4;
}



// ============================================================
// RVA: 0x14ef150 | Atlas.Rendering.ScrollingUvBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_Rendering_ScrollingUvBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4c5b & 1) == 0) {
    func_0x00f78a20(0x3d777e0);
    bRam0000000003eb4c5b = 1;
  }
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined8 *)(param_1 + 0x40) = /*STR('_ToonMap_ST')*/ uRam0000000003d777e0;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



