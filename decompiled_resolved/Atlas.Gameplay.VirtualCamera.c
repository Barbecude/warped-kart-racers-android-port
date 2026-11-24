// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.VirtualCamera

// ============================================================
// RVA: 0x15282b8 | Atlas.Gameplay.VirtualCamera.get_FieldOfView
// ============================================================

undefined4 Atlas_Gameplay_VirtualCamera__get_FieldOfView(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x15282c0 | Atlas.Gameplay.VirtualCamera.set_FieldOfView
// ============================================================

/* WARNING: Possible PIC construction at 0x01528308: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0152830c) */
/* WARNING: Removing unreachable block (ram,0x01528314) */

void Atlas_Gameplay_VirtualCamera__set_FieldOfView(undefined4 param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar3 [16];
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  puVar1 = &stack0xfffffffffffffff0;
  *(undefined4 *)(param_2 + 0x18) = param_1;
  lVar2 = *(long *)(param_2 + 0x20);
  if (lVar2 == 0) {
    auVar3 = func_0x00f78af4();
    lVar2 = auVar3._8_8_;
    unaff_x19 = auVar3._0_8_;
    puStack_18 = &Atlas_Gameplay_VirtualCamera__Init;
    unaff_x29 = &puStack_20;
    *(long *)(unaff_x19 + 0x20) = lVar2;
    if (lVar2 == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      lVar2 = func_0x00f78af4();
      *(undefined8 *)(lVar2 + 0x40) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined1 *)(lVar2 + 0x30) = 0;
      return;
    }
    param_1 = *(undefined4 *)(unaff_x19 + 0x18);
    unaff_x30 = &UNK_0152830c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puStack_20 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (pcRam0000000003ebeae0 == (code *)0x0) {
    pcRam0000000003ebeae0 =
         (code *)func_0x00f789d4("UnityEngine.Camera::set_fieldOfView(System.Single)");
  }
                    /* WARNING: Could not recover jumptable at 0x0321d238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ebeae0)(param_1,lVar2);
  return;
}



// ============================================================
// RVA: 0x15282e4 | Atlas.Gameplay.VirtualCamera.Init
// ============================================================

void Atlas_Gameplay_VirtualCamera__Init(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  *(long *)(param_1 + 0x20) = param_2;
  if (param_2 != 0) {
    /*UnityEngine.Camera$$set_fieldOfView*/ func_0x0321d1ec(*(undefined4 *)(param_1 + 0x18),param_2,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar1 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x20),0);
      *(undefined8 *)(param_1 + 0x28) = uVar1;
      uVar1 = NEON_fmov(0xbf800000,4);
      *(undefined8 *)(param_1 + 0x34) = uVar1;
      return;
    }
  }
  lVar2 = func_0x00f78af4();
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined1 *)(lVar2 + 0x30) = 0;
  return;
}



// ============================================================
// RVA: 0x1528338 | Atlas.Gameplay.VirtualCamera.DeInit
// ============================================================

void Atlas_Gameplay_VirtualCamera__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



// ============================================================
// RVA: 0x1528348 | Atlas.Gameplay.VirtualCamera.StartTracking
// ============================================================

void Atlas_Gameplay_VirtualCamera__StartTracking(undefined4 param_1,long param_2,undefined8 param_3)

{
  *(undefined1 *)(param_2 + 0x30) = 1;
  *(undefined4 *)(param_2 + 0x34) = param_1;
  *(undefined4 *)(param_2 + 0x38) = param_1;
  *(undefined8 *)(param_2 + 0x40) = param_3;
  return;
}



// ============================================================
// RVA: 0x152835c | Atlas.Gameplay.VirtualCamera.StopTracking
// ============================================================

void Atlas_Gameplay_VirtualCamera__StopTracking(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



// ============================================================
// RVA: 0x1528364 | Atlas.Gameplay.VirtualCamera.LateUpdate
// ============================================================

undefined1  [16] Atlas_Gameplay_VirtualCamera__LateUpdate(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  if ((bRam0000000003eb4e6b & 1) == 0) {
    auVar9 = func_0x00f78a20(0x3d23990);
    bRam0000000003eb4e6b = 1;
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    return auVar9;
  }
  if (0.0 < *(float *)(param_1 + 0x38)) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
    if (iVar1 != 0) {
      fVar8 = *(float *)(param_1 + 0x38);
      fVar5 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
      *(float *)(param_1 + 0x38) = fVar8 - fVar5;
      /*UnityEngine.Mathf$$InverseLerp*/ func_0x0323d5e4(*(undefined4 *)(param_1 + 0x34),0);
      uVar6 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(0);
      if (*(long *)(param_1 + 0x40) != 0) {
        lVar4 = *(long *)(param_1 + 0x28);
        lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x40),0);
        if (lVar2 == 0) goto LAB_015285c4;
        fVar5 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0);
        lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
        if (lVar2 == 0) goto LAB_015285c4;
        fVar8 = (float)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0);
        fVar7 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340(uVar6,0);
        if (lVar4 == 0) goto LAB_015285c4;
        /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(fVar5 + fVar7 * (fVar8 - fVar5),lVar4,0);
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_015285c4;
        lVar4 = *(long *)(param_1 + 0x28);
        lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(param_1 + 0x40),0);
        if (lVar2 == 0) goto LAB_015285c4;
        uVar6 = /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar2,0);
        lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
        if (lVar2 == 0) goto LAB_015285c4;
        /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar2,0);
        /*UnityEngine.Quaternion$$Slerp*/ func_0x0325174c(uVar6,0);
        if (lVar4 == 0) goto LAB_015285c4;
        goto LAB_0152857c;
      }
      goto LAB_015285c4;
    }
  }
  lVar4 = *(long *)(param_1 + 0x28);
  lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
  if ((lVar2 != 0) && (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar2,0), lVar4 != 0)) {
    /*UnityEngine.Transform$$set_localPosition*/ func_0x03275128(lVar4,0);
    lVar4 = *(long *)(param_1 + 0x28);
    lVar2 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(param_1,0);
    if ((lVar2 != 0) && (/*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar2,0), lVar4 != 0)) {
LAB_0152857c:
      if (pcRam0000000003ec1998 == (code *)0x0) {
        pcRam0000000003ec1998 =
             (code *)func_0x00f789d4("UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)"
                                     ,0);
      }
      auVar9 = (*pcRam0000000003ec1998)(lVar4,&stack0xffffffffffffffd0);
      return auVar9;
    }
  }
LAB_015285c4:
  auVar10._0_8_ = func_0x00f78af4();
  uVar3 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(auVar10._0_8_ + 0x34) = uVar3;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar10._8_8_ = 0;
  return auVar10;
}



// ============================================================
// RVA: 0x15285c8 | Atlas.Gameplay.VirtualCamera..ctor
// ============================================================

undefined1  [16] Atlas_Gameplay_VirtualCamera___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x34) = uVar1;
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



