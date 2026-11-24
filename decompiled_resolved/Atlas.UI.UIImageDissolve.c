// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIImageDissolve

// ============================================================
// RVA: 0x151b5c8 | Atlas.UI.UIImageDissolve.Awake
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_UIImageDissolve__Awake(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4dee & 1) == 0) {
    func_0x00f78a20(0x3d23298);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4dee = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar3 + 0x338))(plVar3,*(undefined8 *)(*plVar3 + 0x340));
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    iVar1 = /*UnityEngine.Application$$get_isPlaying*/ func_0x0321862c(0);
    if (iVar1 == 0) {
      return;
    }
    plVar3 = *(long **)(param_1 + 0x18);
    if (plVar3 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar3 + 0x338))(plVar3,*(undefined8 *)(*plVar3 + 0x340));
      uVar4 = func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(uVar4,uVar7,0);
                    /* WARNING: Could not recover jumptable at 0x0151b6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x348))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x350));
      return;
    }
  }
  lVar5 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_UIImageDissolve__Update;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4def & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d255a0);
    bRam0000000003eb4def = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uVar7 = *(undefined8 *)(lVar5 + 0x18);
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
  if ((uVar2 & 1) == 0) {
    plVar3 = *(long **)(lVar5 + 0x18);
    if (plVar3 == (long *)0x0) {
code_r0x0151b8d4:
      lVar6 = func_0x00f78af4();
      puStack_78 = &Atlas_UI_UIImageDissolve___ctor;
      *(undefined4 *)(lVar6 + 0x24) = 0x3f800000;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = uVar7;
      lStack_88 = lVar5;
      ppuStack_80 = &puStack_40;
      /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0xff7fffff,0xff7fffff,0xff7fffff,0xff7fffff,&uStack_a0,0);
      *(undefined8 *)(lVar6 + 0x34) = uStack_98;
      *(undefined8 *)(lVar6 + 0x2c) = uStack_a0;
      /*UnityEngine.MonoBehaviour$$.ctor*/ func_0x03248424(lVar6,0);
      return;
    }
    uVar7 = (**(code **)(*plVar3 + 0x338))(plVar3,*(undefined8 *)(*plVar3 + 0x340));
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar7,0,0);
    if ((uVar2 & 1) == 0) {
      fVar8 = *(float *)(lVar5 + 0x20);
      if (*(char *)(lVar5 + 0x28) == '\0') {
        uVar9 = 0;
        uVar10 = 0xbf800000;
      }
      else {
        fVar8 = 1.0 - fVar8;
        uVar9 = 0x3f800000;
        uVar10 = 0x3f800000;
      }
      /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(fVar8,*(undefined4 *)(lVar5 + 0x24),uVar9,uVar10,&uStack_70,0);
      fVar8 = (float)uStack_70 - *(float *)(lVar5 + 0x2c);
      fVar11 = uStack_70._4_4_ - *(float *)(lVar5 + 0x30);
      fVar12 = (float)uStack_68 - *(float *)(lVar5 + 0x34);
      fVar13 = uStack_68._4_4_ - *(float *)(lVar5 + 0x38);
      if (_UNK_033f8490 <= fVar13 * fVar13 + fVar12 * fVar12 + fVar8 * fVar8 + fVar11 * fVar11) {
        *(float *)(lVar5 + 0x2c) = (float)uStack_70;
        *(float *)(lVar5 + 0x30) = uStack_70._4_4_;
        *(float *)(lVar5 + 0x34) = (float)uStack_68;
        *(float *)(lVar5 + 0x38) = uStack_68._4_4_;
        plVar3 = *(long **)(lVar5 + 0x18);
        if (plVar3 != (long *)0x0) {
          lVar6 = (**(code **)(*plVar3 + 0x338))(plVar3,*(undefined8 *)(*plVar3 + 0x340));
          uVar7 = 0x3d255a0;
          if (((*(ushort *)(/*Atlas.UI.UIImageDissolve_TypeInfo*/ lRam0000000003d255a0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.UIImageDissolve_TypeInfo*/ lRam0000000003d255a0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar5 = 0;
          if (lVar6 != 0) {
            /*UnityEngine.Material$$SetVector*/ func_0x0323af88(uStack_70 & 0xffffffff,uStack_70._4_4_,(float)uStack_68,uStack_68._4_4_,
                            lVar6,**(undefined4 **)(/*Atlas.UI.UIImageDissolve_TypeInfo*/ lRam0000000003d255a0 + 0xb8),0);
            return;
          }
        }
        goto code_r0x0151b8d4;
      }
    }
  }
  return;
}



// ============================================================
// RVA: 0x151b70c | Atlas.UI.UIImageDissolve.Update
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_UIImageDissolve__Update(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb4def & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d255a0);
    bRam0000000003eb4def = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,0,0);
  if ((uVar1 & 1) == 0) {
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 == (long *)0x0) {
LAB_0151b8d4:
      lVar3 = func_0x00f78af4();
      puStack_48 = &Atlas_UI_UIImageDissolve___ctor;
      *(undefined4 *)(lVar3 + 0x24) = 0x3f800000;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = uVar4;
      lStack_58 = param_1;
      puStack_50 = &stack0xfffffffffffffff0;
      /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0xff7fffff,0xff7fffff,0xff7fffff,0xff7fffff,&uStack_70,0);
      *(undefined8 *)(lVar3 + 0x34) = uStack_68;
      *(undefined8 *)(lVar3 + 0x2c) = uStack_70;
      /*UnityEngine.MonoBehaviour$$.ctor*/ func_0x03248424(lVar3,0);
      return;
    }
    uVar4 = (**(code **)(*plVar2 + 0x338))(plVar2,*(undefined8 *)(*plVar2 + 0x340));
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
      fVar5 = *(float *)(param_1 + 0x20);
      if (*(char *)(param_1 + 0x28) == '\0') {
        uVar6 = 0;
        uVar7 = 0xbf800000;
      }
      else {
        fVar5 = 1.0 - fVar5;
        uVar6 = 0x3f800000;
        uVar7 = 0x3f800000;
      }
      /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(fVar5,*(undefined4 *)(param_1 + 0x24),uVar6,uVar7,&uStack_40,0);
      fVar5 = (float)uStack_40 - *(float *)(param_1 + 0x2c);
      fVar8 = uStack_40._4_4_ - *(float *)(param_1 + 0x30);
      fVar9 = (float)uStack_38 - *(float *)(param_1 + 0x34);
      fVar10 = uStack_38._4_4_ - *(float *)(param_1 + 0x38);
      if (_UNK_033f8490 <= fVar10 * fVar10 + fVar9 * fVar9 + fVar5 * fVar5 + fVar8 * fVar8) {
        *(float *)(param_1 + 0x2c) = (float)uStack_40;
        *(float *)(param_1 + 0x30) = uStack_40._4_4_;
        *(float *)(param_1 + 0x34) = (float)uStack_38;
        *(float *)(param_1 + 0x38) = uStack_38._4_4_;
        plVar2 = *(long **)(param_1 + 0x18);
        if (plVar2 != (long *)0x0) {
          lVar3 = (**(code **)(*plVar2 + 0x338))(plVar2,*(undefined8 *)(*plVar2 + 0x340));
          uVar4 = 0x3d255a0;
          if (((*(ushort *)(/*Atlas.UI.UIImageDissolve_TypeInfo*/ lRam0000000003d255a0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.UIImageDissolve_TypeInfo*/ lRam0000000003d255a0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          param_1 = 0;
          if (lVar3 != 0) {
            /*UnityEngine.Material$$SetVector*/ func_0x0323af88(uStack_40 & 0xffffffff,uStack_40._4_4_,(float)uStack_38,uStack_38._4_4_,
                            lVar3,**(undefined4 **)(/*Atlas.UI.UIImageDissolve_TypeInfo*/ lRam0000000003d255a0 + 0xb8),0);
            return;
          }
        }
        goto LAB_0151b8d4;
      }
    }
  }
  return;
}



// ============================================================
// RVA: 0x151b8d8 | Atlas.UI.UIImageDissolve..ctor
// ============================================================

void Atlas_UI_UIImageDissolve___ctor(long param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  uStack_30 = 0;
  uStack_28 = 0;
  /*UnityEngine.Vector4$$.ctor*/ func_0x0327cb40(0xff7fffff,0xff7fffff,0xff7fffff,0xff7fffff,&uStack_30,0);
  *(undefined8 *)(param_1 + 0x34) = uStack_28;
  *(undefined8 *)(param_1 + 0x2c) = uStack_30;
  /*UnityEngine.MonoBehaviour$$.ctor*/ func_0x03248424(param_1,0);
  return;
}



// ============================================================
// RVA: 0x151b93c | Atlas.UI.UIImageDissolve..cctor
// ============================================================

void Atlas_UI_UIImageDissolve___cctor(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000003eb4df0 & 1) == 0) {
    func_0x00f78a20(0x3d255a0);
    func_0x00f78a20(0x3d76f70);
    bRam0000000003eb4df0 = 1;
  }
  uVar1 = /*UnityEngine.Shader$$PropertyToID*/ func_0x03261878(/*STR('_DissolveParams')*/ uRam0000000003d76f70,0);
  **(undefined4 **)(/*Atlas.UI.UIImageDissolve_TypeInfo*/ lRam0000000003d255a0 + 0xb8) = uVar1;
  return;
}



