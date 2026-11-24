// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Core.UI2.UIUtils

// ============================================================
// RVA: 0x2f85ac4 | Core.UI2.UIUtils.CalculatePreserveAspectRatioScale
// ============================================================

undefined1  [16]
Core_UI2_UIUtils__CalculatePreserveAspectRatioScale
          (float param_1,float param_2,float param_3,float param_4,int param_5)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  float fVar2;
  
  if (param_5 == 0) {
    /*UnityEngine.Vector2$$get_one*/ func_0x0327a9f8(0);
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  fVar2 = 1.0 / ((param_3 / param_4) / (param_1 / param_2));
  if (((param_5 != 1) || (fVar2 <= 1.0)) && ((param_5 != 2 || (1.0 <= fVar2)))) {
    return ZEXT416((uint)fVar2);
  }
  return ZEXT816(0x3f800000);
}



// ============================================================
// RVA: 0x2f90a68 | Core.UI2.UIUtils.TryGetScreenBehaviourFromGameObject
// ============================================================

/* WARNING: Possible PIC construction at 0x02f90ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f90c50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f90ad8) */
/* WARNING: Removing unreachable block (ram,0x02f90b30) */
/* WARNING: Removing unreachable block (ram,0x02f90adc) */
/* WARNING: Removing unreachable block (ram,0x02f90b48) */
/* WARNING: Removing unreachable block (ram,0x02f90b4c) */
/* WARNING: Removing unreachable block (ram,0x02f90b7c) */
/* WARNING: Removing unreachable block (ram,0x02f90b90) */
/* WARNING: Removing unreachable block (ram,0x02f90ba0) */
/* WARNING: Removing unreachable block (ram,0x02f90ba8) */
/* WARNING: Removing unreachable block (ram,0x02f90bac) */
/* WARNING: Removing unreachable block (ram,0x02f90bcc) */
/* WARNING: Removing unreachable block (ram,0x02f90bbc) */
/* WARNING: Removing unreachable block (ram,0x02f90be8) */
/* WARNING: Removing unreachable block (ram,0x02f90c18) */
/* WARNING: Removing unreachable block (ram,0x02f90c2c) */
/* WARNING: Removing unreachable block (ram,0x02f90c3c) */
/* WARNING: Removing unreachable block (ram,0x02f90c44) */
/* WARNING: Removing unreachable block (ram,0x02f90c48) */
/* WARNING: Removing unreachable block (ram,0x02f90bc4) */
/* WARNING: Removing unreachable block (ram,0x02f90bd0) */
/* WARNING: Removing unreachable block (ram,0x02f90ae0) */
/* WARNING: Removing unreachable block (ram,0x02f90b0c) */
/* WARNING: Removing unreachable block (ram,0x02f90b14) */
/* WARNING: Removing unreachable block (ram,0x02f90b18) */
/* WARNING: Removing unreachable block (ram,0x02f90c54) */
/* WARNING: Removing unreachable block (ram,0x02f90c5c) */

uint Core_UI2_UIUtils__TryGetScreenBehaviourFromGameObject(undefined8 param_1)

{
  uint uVar1;
  
  if ((bRam0000000003ebc6a4 & 1) == 0) {
    func_0x00f78a20(0x3d579c8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003ebc6a4 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(param_1,0);
  return uVar1 ^ 1;
}



// ============================================================
// RVA: 0x2f90b4c | Core.UI2.UIUtils.TryGetScreenLayerFromGameObject
// ============================================================

ulong Core_UI2_UIUtils__TryGetScreenLayerFromGameObject(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint auStack_74 [5];
  undefined8 uStack_60;
  undefined4 *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  long lStack_38;
  
  if ((bRam0000000003ebc6a5 & 1) == 0) {
    func_0x00f78a20(0x3d25608);
    bRam0000000003ebc6a5 = 1;
  }
  lStack_38 = 0;
  if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = Core_UI2_UIUtils__TryGetScreenBehaviourFromGameObject(param_1,&lStack_38);
  if ((int)uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    if (lStack_38 == 0) {
      uVar3 = func_0x00f78af4();
      auStack_74[1] = 0x3ebc000;
      auStack_74[2] = 0;
      auStack_74[3] = 0x3d25608;
      auStack_74[4] = 0;
      puStack_48 = &Core_UI2_UIUtils__GetScreenLayerFromGameObject;
      uStack_60 = param_1;
      puStack_58 = param_2;
      puStack_50 = &stack0xfffffffffffffff0;
      if ((bRam0000000003ebc6a6 & 1) == 0) {
        func_0x00f78a20(0x3d25608);
        bRam0000000003ebc6a6 = 1;
      }
      auStack_74[0] = 0;
      if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = Core_UI2_UIUtils__TryGetScreenLayerFromGameObject(uVar3,auStack_74);
      if (iVar1 == 0) {
        auStack_74[0] = 0;
      }
      return (ulong)auStack_74[0];
    }
    uVar4 = *(undefined4 *)(lStack_38 + 0x30);
  }
  *param_2 = uVar4;
  return uVar2;
}



// ============================================================
// RVA: 0x2f90bec | Core.UI2.UIUtils.GetScreenLayerFromGameObject
// ============================================================

undefined4 Core_UI2_UIUtils__GetScreenLayerFromGameObject(undefined8 param_1)

{
  int iVar1;
  undefined4 uStack_34;
  
  if ((bRam0000000003ebc6a6 & 1) == 0) {
    func_0x00f78a20(0x3d25608);
    bRam0000000003ebc6a6 = 1;
  }
  uStack_34 = 0;
  if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = Core_UI2_UIUtils__TryGetScreenLayerFromGameObject(param_1,&uStack_34);
  if (iVar1 == 0) {
    uStack_34 = 0;
  }
  return uStack_34;
}



// ============================================================
// RVA: 0x2f90c74 | Core.UI2.UIUtils.CalculateCentredSTCoordsForScaleFactor
// ============================================================

void Core_UI2_UIUtils__CalculateCentredSTCoordsForScaleFactor(void)

{
  return;
}



// ============================================================
// RVA: 0x2f90ca0 | Core.UI2.UIUtils.GetSizeFormattedProgressString
// ============================================================

/* WARNING: Possible PIC construction at 0x02f911ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f91344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f913ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f91490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f91608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f91494) */
/* WARNING: Removing unreachable block (ram,0x02f914bc) */
/* WARNING: Removing unreachable block (ram,0x02f914c0) */
/* WARNING: Removing unreachable block (ram,0x032e06b4) */
/* WARNING: Removing unreachable block (ram,0x02f9149c) */
/* WARNING: Removing unreachable block (ram,0x02f914dc) */
/* WARNING: Removing unreachable block (ram,0x02f914e0) */
/* WARNING: Removing unreachable block (ram,0x02f9150c) */
/* WARNING: Removing unreachable block (ram,0x02f91520) */
/* WARNING: Removing unreachable block (ram,0x02f91530) */
/* WARNING: Removing unreachable block (ram,0x02f91594) */
/* WARNING: Removing unreachable block (ram,0x02f91548) */
/* WARNING: Removing unreachable block (ram,0x02f91550) */
/* WARNING: Removing unreachable block (ram,0x02f91598) */
/* WARNING: Removing unreachable block (ram,0x02f915d8) */
/* WARNING: Removing unreachable block (ram,0x02f915ec) */
/* WARNING: Removing unreachable block (ram,0x02f915f8) */
/* WARNING: Removing unreachable block (ram,0x02f91600) */
/* WARNING: Removing unreachable block (ram,0x02f91604) */
/* WARNING: Removing unreachable block (ram,0x02f91558) */
/* WARNING: Removing unreachable block (ram,0x02f914a0) */
/* WARNING: Removing unreachable block (ram,0x032e06c8) */
/* WARNING: Removing unreachable block (ram,0x02f913f0) */
/* WARNING: Removing unreachable block (ram,0x02f91348) */
/* WARNING: Removing unreachable block (ram,0x02f913a4) */
/* WARNING: Removing unreachable block (ram,0x02f913d4) */
/* WARNING: Removing unreachable block (ram,0x02f913dc) */
/* WARNING: Removing unreachable block (ram,0x02f913e0) */
/* WARNING: Removing unreachable block (ram,0x02f9135c) */
/* WARNING: Removing unreachable block (ram,0x02f9138c) */
/* WARNING: Removing unreachable block (ram,0x02f91394) */
/* WARNING: Removing unreachable block (ram,0x02f91398) */
/* WARNING: Removing unreachable block (ram,0x02f913e8) */
/* WARNING: Removing unreachable block (ram,0x02f911f0) */
/* WARNING: Removing unreachable block (ram,0x02f9160c) */
/* WARNING: Removing unreachable block (ram,0x02f91654) */
/* WARNING: Removing unreachable block (ram,0x02f91680) */

undefined1  [16]
Core_UI2_UIUtils__GetSizeFormattedProgressString
          (uint param_1,uint param_2,uint param_3,undefined4 param_4,long param_5,long param_6)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long extraout_x1;
  undefined8 *extraout_x8;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  ulong extraout_d0;
  undefined1 auVar21 [16];
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  ulong unaff_d14;
  ulong unaff_d15;
  undefined1 *puVar3;
  
  puVar12 = &stack0xfffffffffffffff0;
  uVar24 = (ulong)param_1;
  lVar11 = 0x3d24dd8;
  if ((bRam0000000003ebc6a7 & 1) == 0) {
    func_0x00f78a20(0x3d24dd8);
    func_0x00f78a20(0x3d66810);
    func_0x00f78a20(0x3d68478);
    func_0x00f78a20(0x3d67c80);
    bRam0000000003ebc6a7 = 1;
  }
  plVar5 = (long *)func_0x00f78aec(/*System.Text.StringBuilder_TypeInfo*/ uRam0000000003d24dd8);
  /*System.Text.StringBuilder$$.ctor*/ func_0x029d178c(plVar5,0);
  if (plVar5 != (long *)0x0) {
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(plVar5,/*STR('<size=')*/ uRam0000000003d68478,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d3984(param_1,plVar5,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(plVar5,/*STR('%>')*/ uRam0000000003d66810,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d385c(plVar5,param_5,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(plVar5,/*STR('</size>/')*/ uRam0000000003d67c80,0);
    /*System.Text.StringBuilder$$Append*/ func_0x029d385c(plVar5,param_6,0);
                    /* WARNING: Could not recover jumptable at 0x02f90dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar21 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    return auVar21;
  }
  puVar13 = &Core_UI2_UIUtils__TransformBoundsTo;
  auVar21 = func_0x00f78af4();
  lVar9 = 0;
  puVar2 = &stack0xffffffffffffffb0;
  puVar7 = extraout_x8;
code_r0x02f90dc8:
  do {
    lVar8 = auVar21._0_8_;
    *(ulong *)(puVar2 + -0x80) = unaff_d15;
    *(ulong *)(puVar2 + -0x78) = unaff_d14;
    *(ulong *)(puVar2 + -0x70) = unaff_d13;
    *(ulong *)(puVar2 + -0x68) = unaff_d12;
    *(ulong *)(puVar2 + -0x60) = unaff_d11;
    *(ulong *)(puVar2 + -0x58) = unaff_d10;
    *(ulong *)(puVar2 + -0x50) = unaff_d9;
    *(ulong *)(puVar2 + -0x48) = uVar24;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(long *)(puVar2 + -0x30) = lVar11;
    *(long *)(puVar2 + -0x28) = lVar9;
    *(long *)(puVar2 + -0x20) = param_5;
    *(long *)(puVar2 + -0x18) = param_6;
    *(undefined1 **)(puVar2 + -0x10) = puVar12;
    *(undefined **)(puVar2 + -8) = puVar13;
    unaff_x23 = 0x3ebc000;
    if ((bRam0000000003ebc6a8 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d25608);
      bRam0000000003ebc6a8 = 1;
    }
    *(undefined8 *)(puVar2 + -0xb8) = 0;
    *(undefined8 *)(puVar2 + -0xc0) = 0;
    *(undefined8 *)(puVar2 + -0xa8) = 0;
    *(undefined8 *)(puVar2 + -0xb0) = 0;
    *(undefined8 *)(puVar2 + -0xd8) = 0;
    *(undefined8 *)(puVar2 + -0xe0) = 0;
    *(undefined8 *)(puVar2 + -200) = 0;
    *(undefined8 *)(puVar2 + -0xd0) = 0;
    *(undefined8 *)(puVar2 + -0x90) = 0;
    *(undefined8 *)(puVar2 + -0x88) = 0;
    *(undefined8 *)(puVar2 + -0x98) = 0;
    if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_5 = 0;
    iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0);
    if (iVar4 == 0) {
code_r0x02f91008:
      uVar6 = *(undefined8 *)*(undefined1 (*) [16])(puVar2 + -0x98);
      auVar21 = *(undefined1 (*) [16])(puVar2 + -0x98);
      puVar7[1] = *(undefined8 *)(puVar2 + -0x90);
      *puVar7 = uVar6;
      puVar7[2] = *(undefined8 *)(puVar2 + -0x88);
      return auVar21;
    }
    lVar11 = 0x3d25608;
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar8 == 0) {
code_r0x02f91040:
      func_0x00f78af4();
    }
    else {
      param_5 = 0;
      /*UnityEngine.RectTransform$$GetWorldCorners*/ func_0x032556ac(lVar8,**(undefined8 **)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xb8));
      if (auVar21._8_8_ == 0) goto code_r0x02f91040;
      /*UnityEngine.Transform$$get_worldToLocalMatrix*/ func_0x03275f38(puVar2 + -0xe0,auVar21._8_8_,0);
      lVar9 = 0;
      uVar10 = 0;
      unaff_d11 = 0x7f7fffff;
      unaff_d9 = 0xff7fffff;
      unaff_d10 = 0xff7fffff;
      *(undefined4 *)(puVar2 + -0xe4) = 0xff7fffff;
      unaff_d12 = 0x7f7fffff;
      unaff_d13 = 0x7f7fffff;
      while( true ) {
        auVar21._8_8_ = lVar9;
        auVar21._0_8_ = uVar10;
        if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = **(long **)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xb8);
        if (lVar8 == 0) goto code_r0x02f91040;
        if (*(uint *)(lVar8 + 0x18) <= uVar10) break;
        lVar8 = lVar8 + lVar9;
        uVar22 = *(uint *)(lVar8 + 0x24);
        uVar23 = *(uint *)(lVar8 + 0x28);
        uVar20 = /*UnityEngine.Matrix4x4$$MultiplyPoint3x4*/ func_0x0323e604(*(undefined4 *)(lVar8 + 0x20),puVar2 + -0xe0,0);
        unaff_d14 = uVar20 & 0xffffffff;
        unaff_d15 = (ulong)uVar22;
        uVar24 = (ulong)uVar23;
        param_3 = uVar23;
        uVar14 = /*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar20,(int)unaff_d13,0);
        unaff_d13 = (ulong)uVar14;
        uVar15 = /*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar22,(int)unaff_d12,0);
        unaff_d12 = (ulong)uVar15;
        uVar16 = /*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar23,(int)unaff_d11,0);
        unaff_d11 = (ulong)uVar16;
        uVar17 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(uVar20 & 0xffffffff,*(undefined4 *)(puVar2 + -0xe4),0);
        *(undefined4 *)(puVar2 + -0xe4) = uVar17;
        uVar22 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(uVar22,(int)unaff_d10,0);
        unaff_d10 = (ulong)uVar22;
        param_2 = (uint)unaff_d9;
        uVar23 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(uVar23,0);
        unaff_d9 = (ulong)uVar23;
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0xc;
        if (uVar10 == 4) {
          uVar17 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
          /*UnityEngine.Bounds$$.ctor*/ func_0x0321b354(uVar14,uVar15,uVar16,uVar17,param_2,param_3,puVar2 + -0x98,0);
          /*UnityEngine.Bounds$$Encapsulate*/ func_0x0321b704(*(undefined4 *)(puVar2 + -0xe4),uVar22,uVar23,puVar2 + -0x98,0);
          goto code_r0x02f91008;
        }
      }
    }
    uVar6 = func_0x00f78b24();
    lVar8 = func_0x00f78ac0(uVar6,0);
    *(ulong *)(puVar2 + -0x140) = unaff_d11;
    *(ulong *)(puVar2 + -0x138) = unaff_d10;
    *(ulong *)(puVar2 + -0x130) = unaff_d9;
    *(ulong *)(puVar2 + -0x128) = uVar24;
    *(undefined8 *)(puVar2 + -0x120) = 0x3d25608;
    *(undefined1 (*) [16])(puVar2 + -0x118) = auVar21;
    *(undefined8 **)(puVar2 + -0x108) = puVar7;
    *(undefined1 **)(puVar2 + -0x100) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0xf8) = &Core_UI2_UIUtils__NormalizeScrollDistance;
    puVar12 = puVar2 + -0x100;
    uVar24 = extraout_d0 & 0xffffffff;
    uVar6 = 0x3ebc000;
    if ((bRam0000000003ebc6a9 & 1) == 0) {
      func_0x00f78a20(0x3d53528);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d25608);
      bRam0000000003ebc6a9 = 1;
    }
    *(undefined8 *)(puVar2 + -0x158) = 0;
    *(undefined8 *)(puVar2 + -0x150) = 0;
    *(undefined8 *)(puVar2 + -0x148) = 0;
    *(undefined8 *)(puVar2 + -0x170) = 0;
    *(undefined8 *)(puVar2 + -0x168) = 0;
    *(undefined8 *)(puVar2 + -0x160) = 0;
    *(undefined4 *)(puVar2 + -0x188) = 0;
    *(undefined8 *)(puVar2 + -0x198) = 0;
    *(undefined8 *)(puVar2 + -400) = 0;
    *(undefined8 *)(puVar2 + -0x1a8) = 0;
    *(undefined8 *)(puVar2 + -0x1a0) = 0;
    if (lVar8 != 0) {
      lVar11 = 0x3d23990;
      lVar9 = *(long *)(lVar8 + 0x38);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      param_5 = 0;
      uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0);
      if ((uVar10 & 1) == 0) {
        lVar9 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar8,uRam0000000003d53528);
      }
      uVar6 = 0;
      if (lVar9 != 0) {
        uVar17 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar9,0);
        *(undefined4 *)(puVar2 + -0x180) = uVar17;
        *(uint *)(puVar2 + -0x17c) = param_2;
        *(uint *)(puVar2 + -0x178) = param_3;
        *(undefined4 *)(puVar2 + -0x174) = param_4;
        uVar15 = /*UnityEngine.Rect$$get_center*/ func_0x032534e8(puVar2 + -0x180,0);
        unaff_d9 = (ulong)uVar15;
        unaff_d10 = (ulong)param_2;
        uVar14 = param_2;
        uVar17 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar9,0);
        *(undefined4 *)(puVar2 + -0x180) = uVar17;
        *(uint *)(puVar2 + -0x17c) = uVar14;
        *(uint *)(puVar2 + -0x178) = param_3;
        *(undefined4 *)(puVar2 + -0x174) = param_4;
        param_4 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(puVar2 + -0x180,0);
        param_3 = 0;
        /*UnityEngine.Bounds$$.ctor*/ func_0x0321b354(uVar15,puVar2 + -0x158,0);
        param_5 = *(long *)(lVar8 + 0x18);
        auVar21._8_8_ = lVar9;
        auVar21._0_8_ = param_5;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_5,0,0);
        if ((uVar10 & 1) == 0) {
          *(undefined8 *)(puVar2 + -0x1a8) = 0;
          *(undefined8 *)(puVar2 + -0x1a0) = 0;
          *(undefined8 *)(puVar2 + -0x198) = 0;
          *(undefined8 *)(puVar2 + -0x168) = *(undefined8 *)(puVar2 + -0x1a0);
          *(undefined8 *)(puVar2 + -0x170) = *(undefined8 *)(puVar2 + -0x1a8);
          *(undefined8 *)(puVar2 + -0x160) = *(undefined8 *)(puVar2 + -0x198);
          uVar17 = /*UnityEngine.Bounds$$get_size*/ func_0x0321b508(puVar2 + -0x170,0);
          *(undefined4 *)(puVar2 + -400) = uVar17;
          *(uint *)(puVar2 + -0x18c) = param_2;
          *(uint *)(puVar2 + -0x188) = param_3;
          fVar18 = (float)/*UnityEngine.Vector3$$get_Item*/ func_0x0327b458(puVar2 + -400,extraout_x1,0);
          uVar17 = /*UnityEngine.Bounds$$get_size*/ func_0x0321b508(puVar2 + -0x158,0);
          *(undefined4 *)(puVar2 + -400) = uVar17;
          *(uint *)(puVar2 + -0x18c) = param_2;
          *(uint *)(puVar2 + -0x188) = param_3;
          fVar19 = (float)/*UnityEngine.Vector3$$get_Item*/ func_0x0327b458(puVar2 + -400,extraout_x1,0);
          return ZEXT416((uint)((float)extraout_d0 / (fVar18 - fVar19)));
        }
        if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar7 = (undefined8 *)(puVar2 + -0x1a8);
        puVar13 = &UNK_02f911f0;
        puVar2 = puVar2 + -0x1b0;
        param_6 = extraout_x1;
        goto code_r0x02f90dc8;
      }
    }
    auVar1._8_8_ = uVar6;
    auVar1._0_8_ = extraout_x1;
    puVar13 = &Core_UI2_UIUtils__ScrollTargetNormalizedPosition;
    auVar21 = func_0x00f78af4();
    puVar3 = puVar2 + -0x1b0;
    while( true ) {
      lVar9 = auVar21._8_8_;
      param_6 = auVar21._0_8_;
      puVar2 = puVar3 + -0x80;
      *(ulong *)(puVar3 + -0x50) = unaff_d9;
      *(ulong *)(puVar3 + -0x48) = uVar24;
      *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
      *(long *)(puVar3 + -0x30) = lVar11;
      *(long *)(puVar3 + -0x28) = auVar1._8_8_;
      *(long *)(puVar3 + -0x20) = lVar8;
      *(long *)(puVar3 + -0x18) = auVar1._0_8_;
      *(undefined1 **)(puVar3 + -0x10) = puVar12;
      *(undefined **)(puVar3 + -8) = puVar13;
      puVar12 = puVar3 + -0x10;
      uVar6 = 0x3ebc000;
      lVar8 = param_5;
      if ((bRam0000000003ebc6aa & 1) == 0) {
        func_0x00f78a20(0x3d53528);
        func_0x00f78a20(0x3d25608);
        bRam0000000003ebc6aa = 1;
      }
      *(undefined8 *)(puVar3 + -0x78) = 0;
      *(undefined8 *)(puVar3 + -0x70) = 0;
      *(undefined8 *)(puVar3 + -0x68) = 0;
      if ((param_6 != 0) &&
         ((lVar11 = *(long *)(param_6 + 0x38), lVar11 != 0 ||
          (lVar11 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_6,uRam0000000003d53528), uVar6 = 0, lVar11 != 0)))) break;
      auVar21 = func_0x00f78af4();
      *(undefined8 *)(puVar3 + -0xc0) = unaff_x24;
      *(undefined8 *)(puVar3 + -0xb8) = unaff_x23;
      *(undefined8 *)(puVar3 + -0xb0) = uVar6;
      *(long *)(puVar3 + -0xa8) = lVar9;
      *(long *)(puVar3 + -0xa0) = param_5;
      *(long *)(puVar3 + -0x98) = param_6;
      *(undefined1 **)(puVar3 + -0x90) = puVar12;
      *(undefined **)(puVar3 + -0x88) = &Core_UI2_UIUtils__SnapToCenter;
      puVar12 = puVar3 + -0x90;
      lVar11 = 0x3ebc000;
      unaff_x23 = 0x3d25608;
      if ((bRam0000000003ebc6ab & 1) == 0) {
        func_0x00f78a20(0x3d25608);
        bRam0000000003ebc6ab = 1;
      }
      if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar13 = &UNK_02f91494;
      puVar3 = puVar3 + -0xc0;
      param_5 = lVar8;
      auVar1 = auVar21;
    }
    auVar21._8_8_ = lVar11;
    auVar21._0_8_ = lVar9;
    unaff_x23 = 0x3d25608;
    uVar17 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar11,0);
    *(undefined4 *)(puVar3 + -0x60) = uVar17;
    *(uint *)(puVar3 + -0x5c) = param_2;
    *(uint *)(puVar3 + -0x58) = param_3;
    *(undefined4 *)(puVar3 + -0x54) = param_4;
    if (((*(byte *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar7 = (undefined8 *)(puVar3 + -0x78);
    puVar13 = &UNK_02f91348;
  } while( true );
}



// ============================================================
// RVA: 0x2f90dc8 | Core.UI2.UIUtils.TransformBoundsTo
// ============================================================

/* WARNING: Possible PIC construction at 0x02f913ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f91490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f91608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f91494) */
/* WARNING: Removing unreachable block (ram,0x02f914bc) */
/* WARNING: Removing unreachable block (ram,0x02f914c0) */
/* WARNING: Removing unreachable block (ram,0x032e06b4) */
/* WARNING: Removing unreachable block (ram,0x02f9149c) */
/* WARNING: Removing unreachable block (ram,0x02f914dc) */
/* WARNING: Removing unreachable block (ram,0x02f914e0) */
/* WARNING: Removing unreachable block (ram,0x02f9150c) */
/* WARNING: Removing unreachable block (ram,0x02f91520) */
/* WARNING: Removing unreachable block (ram,0x02f91530) */
/* WARNING: Removing unreachable block (ram,0x02f91594) */
/* WARNING: Removing unreachable block (ram,0x02f91548) */
/* WARNING: Removing unreachable block (ram,0x02f91550) */
/* WARNING: Removing unreachable block (ram,0x02f91598) */
/* WARNING: Removing unreachable block (ram,0x02f915d8) */
/* WARNING: Removing unreachable block (ram,0x02f915ec) */
/* WARNING: Removing unreachable block (ram,0x02f915f8) */
/* WARNING: Removing unreachable block (ram,0x02f91600) */
/* WARNING: Removing unreachable block (ram,0x02f91604) */
/* WARNING: Removing unreachable block (ram,0x02f91558) */
/* WARNING: Removing unreachable block (ram,0x02f914a0) */
/* WARNING: Removing unreachable block (ram,0x032e06c8) */
/* WARNING: Removing unreachable block (ram,0x02f913f0) */
/* WARNING: Removing unreachable block (ram,0x02f9160c) */
/* WARNING: Removing unreachable block (ram,0x02f91654) */
/* WARNING: Removing unreachable block (ram,0x02f91680) */

undefined1  [16]
Core_UI2_UIUtils__TransformBoundsTo
          (undefined8 *param_1,undefined1 param_2 [16],float param_3,uint param_4,undefined4 param_5
          ,ulong param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *extraout_x1;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 unaff_x24;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  ulong extraout_d0;
  undefined4 uVar23;
  uint uVar24;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  undefined1 auVar25 [16];
  undefined1 auStack_f0 [12];
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar3 = auStack_f0;
  puVar14 = &stack0xfffffffffffffff0;
  uVar13 = 0x3ebc000;
  if ((bRam0000000003ebc6a8 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25608);
    bRam0000000003ebc6a8 = 1;
  }
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar9 = 0;
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_6,0);
  if (iVar4 != 0) {
    lVar12 = 0x3d25608;
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (param_6 != 0) {
      lVar9 = 0;
      /*UnityEngine.RectTransform$$GetWorldCorners*/ func_0x032556ac(param_6,**(undefined8 **)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xb8));
      if (param_7 != 0) {
        /*UnityEngine.Transform$$get_worldToLocalMatrix*/ func_0x03275f38(&uStack_e0,param_7,0);
        param_7 = 0;
        param_6 = 0;
        uVar17 = 0x7f7fffff;
        unaff_d11 = 0x7f7fffff;
        unaff_d9 = 0xff7fffff;
        unaff_d10 = 0xff7fffff;
        uStack_e4 = 0xff7fffff;
        uVar16 = uVar17;
        do {
          if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar10 = **(long **)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xb8);
          if (lVar10 == 0) goto LAB_02f91040;
          if (*(uint *)(lVar10 + 0x18) <= param_6) goto LAB_02f91044;
          uVar23 = *(undefined4 *)(param_7 + lVar10 + 0x24);
          uVar24 = *(uint *)(param_7 + lVar10 + 0x28);
          uVar22 = /*UnityEngine.Matrix4x4$$MultiplyPoint3x4*/ func_0x0323e604(*(undefined4 *)(param_7 + lVar10 + 0x20),uVar23,&uStack_e0,0);
          unaff_d8 = (ulong)uVar24;
          param_4 = uVar24;
          uVar16 = /*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar22,uVar16,0);
          uVar17 = /*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar23,uVar17,0);
          uVar18 = /*UnityEngine.Mathf$$Min*/ func_0x0323cce0(uVar24,(int)unaff_d11,0);
          unaff_d11 = (ulong)uVar18;
          uStack_e4 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(uVar22 & 0xffffffff,uStack_e4,0);
          uVar19 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(uVar23,(int)unaff_d10,0);
          unaff_d10 = (ulong)uVar19;
          param_3 = (float)unaff_d9;
          uVar24 = /*UnityEngine.Mathf$$Max*/ func_0x0323ccf8(uVar24,0);
          unaff_d9 = (ulong)uVar24;
          param_6 = param_6 + 1;
          param_7 = param_7 + 0xc;
        } while (param_6 != 4);
        uVar23 = /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
        /*UnityEngine.Bounds$$.ctor*/ func_0x0321b354(uVar16,uVar17,uVar18,uVar23,param_3,param_4,&uStack_98,0);
        /*UnityEngine.Bounds$$Encapsulate*/ func_0x0321b704(uStack_e4,uVar19,uVar24,&uStack_98,0);
        goto LAB_02f91008;
      }
    }
LAB_02f91040:
    func_0x00f78af4();
LAB_02f91044:
    uVar5 = func_0x00f78b24();
    puVar15 = &Core_UI2_UIUtils__NormalizeScrollDistance;
    uVar5 = func_0x00f78ac0(uVar5,0);
    auVar25._8_8_ = param_6;
    auVar25._0_8_ = uVar5;
    puVar8 = extraout_x1;
    uVar22 = extraout_d0;
    do {
      lVar10 = auVar25._0_8_;
      *(ulong *)(puVar3 + -0x50) = unaff_d11;
      *(ulong *)(puVar3 + -0x48) = unaff_d10;
      *(ulong *)(puVar3 + -0x40) = unaff_d9;
      *(ulong *)(puVar3 + -0x38) = unaff_d8;
      *(long *)(puVar3 + -0x30) = lVar12;
      *(long *)(puVar3 + -0x28) = auVar25._8_8_;
      *(long *)(puVar3 + -0x20) = param_7;
      *(undefined8 **)(puVar3 + -0x18) = param_1;
      *(undefined1 **)(puVar3 + -0x10) = puVar14;
      *(undefined **)(puVar3 + -8) = puVar15;
      puVar14 = puVar3 + -0x10;
      uVar5 = 0x3ebc000;
      if ((bRam0000000003ebc6a9 & 1) == 0) {
        func_0x00f78a20(0x3d53528);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d25608);
        bRam0000000003ebc6a9 = 1;
      }
      *(undefined8 *)(puVar3 + -0x68) = 0;
      *(undefined8 *)(puVar3 + -0x60) = 0;
      *(undefined8 *)(puVar3 + -0x58) = 0;
      *(undefined8 *)(puVar3 + -0x80) = 0;
      *(undefined8 *)(puVar3 + -0x78) = 0;
      *(undefined8 *)(puVar3 + -0x70) = 0;
      *(undefined4 *)(puVar3 + -0x98) = 0;
      *(undefined8 *)(puVar3 + -0xa8) = 0;
      *(undefined8 *)(puVar3 + -0xa0) = 0;
      *(undefined8 *)(puVar3 + -0xb8) = 0;
      *(undefined8 *)(puVar3 + -0xb0) = 0;
      if (lVar10 != 0) {
        lVar12 = 0x3d23990;
        lVar11 = *(long *)(lVar10 + 0x38);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar9 = 0;
        uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0);
        if ((uVar6 & 1) == 0) {
          lVar11 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar10,uRam0000000003d53528);
        }
        uVar5 = 0;
        if (lVar11 != 0) {
          uVar16 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar11,0);
          *(undefined4 *)(puVar3 + -0x90) = uVar16;
          *(float *)(puVar3 + -0x8c) = param_3;
          *(uint *)(puVar3 + -0x88) = param_4;
          *(undefined4 *)(puVar3 + -0x84) = param_5;
          uVar16 = /*UnityEngine.Rect$$get_center*/ func_0x032534e8(puVar3 + -0x90,0);
          fVar20 = param_3;
          uVar17 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar11,0);
          *(undefined4 *)(puVar3 + -0x90) = uVar17;
          *(float *)(puVar3 + -0x8c) = fVar20;
          *(uint *)(puVar3 + -0x88) = param_4;
          *(undefined4 *)(puVar3 + -0x84) = param_5;
          uVar17 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(puVar3 + -0x90,0);
          uVar23 = 0;
          /*UnityEngine.Bounds$$.ctor*/ func_0x0321b354(uVar16,param_3,0,uVar17,fVar20,0,puVar3 + -0x68,0);
          uVar13 = *(undefined8 *)(lVar10 + 0x18);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0,0);
          if ((uVar6 & 1) == 0) {
            *(undefined8 *)(puVar3 + -0xb8) = 0;
            *(undefined8 *)(puVar3 + -0xb0) = 0;
            *(undefined8 *)(puVar3 + -0xa8) = 0;
          }
          else {
            if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            Core_UI2_UIUtils__TransformBoundsTo(puVar3 + -0xb8,uVar13,lVar11);
          }
          *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0xb0);
          *(undefined8 *)(puVar3 + -0x80) = *(undefined8 *)(puVar3 + -0xb8);
          *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0xa8);
          uVar16 = /*UnityEngine.Bounds$$get_size*/ func_0x0321b508(puVar3 + -0x80,0);
          *(undefined4 *)(puVar3 + -0xa0) = uVar16;
          *(float *)(puVar3 + -0x9c) = param_3;
          *(undefined4 *)(puVar3 + -0x98) = uVar23;
          fVar20 = (float)/*UnityEngine.Vector3$$get_Item*/ func_0x0327b458(puVar3 + -0xa0,puVar8,0);
          uVar16 = /*UnityEngine.Bounds$$get_size*/ func_0x0321b508(puVar3 + -0x68,0);
          *(undefined4 *)(puVar3 + -0xa0) = uVar16;
          *(float *)(puVar3 + -0x9c) = param_3;
          *(undefined4 *)(puVar3 + -0x98) = uVar23;
          fVar21 = (float)/*UnityEngine.Vector3$$get_Item*/ func_0x0327b458(puVar3 + -0xa0,puVar8,0);
          return ZEXT416((uint)((float)uVar22 / (fVar20 - fVar21)));
        }
      }
      auVar2._8_8_ = uVar5;
      auVar2._0_8_ = puVar8;
      puVar15 = &Core_UI2_UIUtils__ScrollTargetNormalizedPosition;
      auVar25 = func_0x00f78af4();
      puVar8 = puVar3 + -0xc0;
      param_7 = lVar9;
      lVar9 = lVar10;
      while( true ) {
        uVar7 = auVar25._8_8_;
        param_1 = auVar25._0_8_;
        puVar3 = puVar8 + -0x80;
        *(ulong *)(puVar8 + -0x50) = unaff_d9;
        *(ulong *)(puVar8 + -0x48) = uVar22 & 0xffffffff;
        *(undefined8 *)(puVar8 + -0x40) = unaff_x24;
        *(undefined8 *)(puVar8 + -0x38) = uVar13;
        *(long *)(puVar8 + -0x30) = lVar12;
        *(long *)(puVar8 + -0x28) = auVar2._8_8_;
        *(long *)(puVar8 + -0x20) = lVar9;
        *(long *)(puVar8 + -0x18) = auVar2._0_8_;
        *(undefined1 **)(puVar8 + -0x10) = puVar14;
        *(undefined **)(puVar8 + -8) = puVar15;
        puVar14 = puVar8 + -0x10;
        uVar5 = 0x3ebc000;
        lVar9 = param_7;
        if ((bRam0000000003ebc6aa & 1) == 0) {
          func_0x00f78a20(0x3d53528);
          func_0x00f78a20(0x3d25608);
          bRam0000000003ebc6aa = 1;
        }
        *(undefined8 *)(puVar8 + -0x78) = 0;
        *(undefined8 *)(puVar8 + -0x70) = 0;
        *(undefined8 *)(puVar8 + -0x68) = 0;
        if ((param_1 != (undefined8 *)0x0) &&
           ((lVar12 = param_1[7], lVar12 != 0 ||
            (lVar12 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_1,uRam0000000003d53528), uVar5 = 0, lVar12 != 0))))
        break;
        auVar25 = func_0x00f78af4();
        *(undefined8 *)(puVar8 + -0xc0) = unaff_x24;
        *(undefined8 *)(puVar8 + -0xb8) = uVar13;
        *(undefined8 *)(puVar8 + -0xb0) = uVar5;
        *(undefined8 *)(puVar8 + -0xa8) = uVar7;
        *(long *)(puVar8 + -0xa0) = param_7;
        *(undefined8 **)(puVar8 + -0x98) = param_1;
        *(undefined1 **)(puVar8 + -0x90) = puVar14;
        *(undefined **)(puVar8 + -0x88) = &Core_UI2_UIUtils__SnapToCenter;
        puVar14 = puVar8 + -0x90;
        lVar12 = 0x3ebc000;
        uVar13 = 0x3d25608;
        if ((bRam0000000003ebc6ab & 1) == 0) {
          func_0x00f78a20(0x3d25608);
          bRam0000000003ebc6ab = 1;
        }
        if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar15 = &UNK_02f91494;
        puVar8 = puVar8 + -0xc0;
        param_7 = lVar9;
        auVar2 = auVar25;
      }
      uVar13 = 0x3d25608;
      uVar16 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar12,0);
      *(undefined4 *)(puVar8 + -0x60) = uVar16;
      *(float *)(puVar8 + -0x5c) = param_3;
      *(uint *)(puVar8 + -0x58) = param_4;
      *(undefined4 *)(puVar8 + -0x54) = param_5;
      if (((*(byte *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      Core_UI2_UIUtils__TransformBoundsTo(puVar8 + -0x78,uVar7,lVar12);
      fVar20 = (float)/*UnityEngine.Rect$$get_center*/ func_0x032534e8(puVar8 + -0x60,0);
      if ((int)param_7 == 1) {
        fVar21 = param_3;
        /*UnityEngine.Bounds$$get_center*/ func_0x0321b3d8(puVar8 + -0x78,0);
        fVar20 = param_3 - fVar21;
        uVar18 = /*UnityEngine.UI.ScrollRect$$get_verticalNormalizedPosition*/ func_0x032e0560(param_1,0);
        if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar8 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        param_3 = fVar21;
      }
      else {
        fVar21 = (float)/*UnityEngine.Bounds$$get_center*/ func_0x0321b3d8(puVar8 + -0x78,0);
        fVar20 = fVar20 - fVar21;
        uVar18 = /*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(param_1,0);
        if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar8 = (undefined1 *)0x0;
      }
      unaff_d9 = (ulong)uVar18;
      uVar22 = (ulong)(uint)fVar20;
      puVar15 = &UNK_02f913f0;
      unaff_d8 = uVar22;
    } while( true );
  }
LAB_02f91008:
  auVar1._8_8_ = uStack_90;
  auVar1._0_8_ = uStack_98;
  param_1[1] = uStack_90;
  *param_1 = uStack_98;
  param_1[2] = uStack_88;
  return auVar1;
}



// ============================================================
// RVA: 0x2f91050 | Core.UI2.UIUtils.NormalizeScrollDistance
// ============================================================

/* WARNING: Possible PIC construction at 0x02f91490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f91608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f91494) */
/* WARNING: Removing unreachable block (ram,0x02f914bc) */
/* WARNING: Removing unreachable block (ram,0x02f914c0) */
/* WARNING: Removing unreachable block (ram,0x032e06b4) */
/* WARNING: Removing unreachable block (ram,0x02f9149c) */
/* WARNING: Removing unreachable block (ram,0x02f914dc) */
/* WARNING: Removing unreachable block (ram,0x02f914e0) */
/* WARNING: Removing unreachable block (ram,0x02f9150c) */
/* WARNING: Removing unreachable block (ram,0x02f91520) */
/* WARNING: Removing unreachable block (ram,0x02f91530) */
/* WARNING: Removing unreachable block (ram,0x02f91594) */
/* WARNING: Removing unreachable block (ram,0x02f91548) */
/* WARNING: Removing unreachable block (ram,0x02f91550) */
/* WARNING: Removing unreachable block (ram,0x02f91598) */
/* WARNING: Removing unreachable block (ram,0x02f915d8) */
/* WARNING: Removing unreachable block (ram,0x02f915ec) */
/* WARNING: Removing unreachable block (ram,0x02f915f8) */
/* WARNING: Removing unreachable block (ram,0x02f91600) */
/* WARNING: Removing unreachable block (ram,0x02f91604) */
/* WARNING: Removing unreachable block (ram,0x02f91558) */
/* WARNING: Removing unreachable block (ram,0x02f914a0) */
/* WARNING: Removing unreachable block (ram,0x032e06c8) */
/* WARNING: Removing unreachable block (ram,0x02f9160c) */
/* WARNING: Removing unreachable block (ram,0x02f91654) */
/* WARNING: Removing unreachable block (ram,0x02f91680) */

undefined1  [16]
Core_UI2_UIUtils__NormalizeScrollDistance
          (float param_1,float param_2,undefined4 param_3,undefined4 param_4,long param_5,
          undefined8 param_6,long param_7)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 unaff_x22;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 unaff_d9;
  undefined1 auVar15 [16];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar8 = &stack0xfffffffffffffff0;
  uVar4 = 0x3ebc000;
  if ((bRam0000000003ebc6a9 & 1) == 0) {
    func_0x00f78a20(0x3d53528);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25608);
    bRam0000000003ebc6a9 = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  if (param_5 != 0) {
    unaff_x22 = 0x3d23990;
    lVar5 = *(long *)(param_5 + 0x38);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_7 = 0;
    uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0);
    if ((uVar2 & 1) == 0) {
      lVar5 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_5,uRam0000000003d53528);
    }
    uVar4 = 0;
    if (lVar5 != 0) {
      uStack_90 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar5,0);
      fStack_8c = param_2;
      uStack_88 = param_3;
      uStack_84 = param_4;
      uVar10 = /*UnityEngine.Rect$$get_center*/ func_0x032534e8(&uStack_90,0);
      fVar12 = param_2;
      uStack_90 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar5,0);
      fStack_8c = fVar12;
      uStack_88 = param_3;
      uStack_84 = param_4;
      uVar11 = /*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_90,0);
      uVar14 = 0;
      /*UnityEngine.Bounds$$.ctor*/ func_0x0321b354(uVar10,param_2,0,uVar11,fVar12,0,&uStack_68,0);
      uVar4 = *(undefined8 *)(param_5 + 0x18);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
      }
      else {
        if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        Core_UI2_UIUtils__TransformBoundsTo(&uStack_b8,uVar4,lVar5);
      }
      uStack_78 = uStack_b0;
      uStack_80 = uStack_b8;
      uStack_70 = uStack_a8;
      uVar10 = /*UnityEngine.Bounds$$get_size*/ func_0x0321b508(&uStack_80,0);
      uStack_a0 = CONCAT44(param_2,uVar10);
      uStack_98 = uVar14;
      fVar12 = (float)/*UnityEngine.Vector3$$get_Item*/ func_0x0327b458(&uStack_a0,param_6,0);
      uVar10 = /*UnityEngine.Bounds$$get_size*/ func_0x0321b508(&uStack_68,0);
      uStack_a0 = CONCAT44(param_2,uVar10);
      uStack_98 = uVar14;
      fVar13 = (float)/*UnityEngine.Vector3$$get_Item*/ func_0x0327b458(&uStack_a0,param_6,0);
      return ZEXT416((uint)(param_1 / (fVar12 - fVar13)));
    }
  }
  puVar9 = &Core_UI2_UIUtils__ScrollTargetNormalizedPosition;
  auVar15 = func_0x00f78af4();
  puVar1 = auStack_c0;
  while( true ) {
    uVar3 = auVar15._8_8_;
    lVar5 = auVar15._0_8_;
    *(undefined8 *)(puVar1 + -0x50) = unaff_d9;
    *(ulong *)(puVar1 + -0x48) = (ulong)(uint)param_1;
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = uVar4;
    *(long *)(puVar1 + -0x20) = param_5;
    *(undefined8 *)(puVar1 + -0x18) = param_6;
    *(undefined1 **)(puVar1 + -0x10) = puVar8;
    *(undefined **)(puVar1 + -8) = puVar9;
    uVar6 = 0x3ebc000;
    param_5 = param_7;
    if ((bRam0000000003ebc6aa & 1) == 0) {
      func_0x00f78a20(0x3d53528);
      func_0x00f78a20(0x3d25608);
      bRam0000000003ebc6aa = 1;
    }
    *(undefined8 *)(puVar1 + -0x78) = 0;
    *(undefined8 *)(puVar1 + -0x70) = 0;
    *(undefined8 *)(puVar1 + -0x68) = 0;
    if ((lVar5 != 0) &&
       ((lVar7 = *(long *)(lVar5 + 0x38), lVar7 != 0 ||
        (lVar7 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar5,uRam0000000003d53528), uVar6 = 0, lVar7 != 0)))) break;
    auVar15 = func_0x00f78af4();
    uVar4 = auVar15._8_8_;
    param_6 = auVar15._0_8_;
    *(undefined8 *)(puVar1 + -0xc0) = unaff_x24;
    *(undefined8 *)(puVar1 + -0xb8) = unaff_x23;
    *(undefined8 *)(puVar1 + -0xb0) = uVar6;
    *(undefined8 *)(puVar1 + -0xa8) = uVar3;
    *(long *)(puVar1 + -0xa0) = param_7;
    *(long *)(puVar1 + -0x98) = lVar5;
    *(undefined1 **)(puVar1 + -0x90) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x88) = &Core_UI2_UIUtils__SnapToCenter;
    puVar8 = puVar1 + -0x90;
    unaff_x22 = 0x3ebc000;
    unaff_x23 = 0x3d25608;
    if ((bRam0000000003ebc6ab & 1) == 0) {
      func_0x00f78a20(0x3d25608);
      bRam0000000003ebc6ab = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar9 = &UNK_02f91494;
    puVar1 = puVar1 + -0xc0;
    param_7 = param_5;
  }
  uVar10 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar7,0);
  *(undefined4 *)(puVar1 + -0x60) = uVar10;
  *(float *)(puVar1 + -0x5c) = param_2;
  *(undefined4 *)(puVar1 + -0x58) = param_3;
  *(undefined4 *)(puVar1 + -0x54) = param_4;
  if (((*(byte *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  Core_UI2_UIUtils__TransformBoundsTo(puVar1 + -0x78,uVar3,lVar7);
  fVar12 = (float)/*UnityEngine.Rect$$get_center*/ func_0x032534e8(puVar1 + -0x60,0);
  if ((int)param_7 == 1) {
    fVar12 = param_2;
    /*UnityEngine.Bounds$$get_center*/ func_0x0321b3d8(puVar1 + -0x78,0);
    param_2 = param_2 - fVar12;
    fVar12 = (float)/*UnityEngine.UI.ScrollRect$$get_verticalNormalizedPosition*/ func_0x032e0560(lVar5,0);
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = 1;
  }
  else {
    param_2 = (float)/*UnityEngine.Bounds$$get_center*/ func_0x0321b3d8(puVar1 + -0x78,0);
    param_2 = fVar12 - param_2;
    fVar12 = (float)/*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(lVar5,0);
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar4 = 0;
  }
  fVar13 = (float)Core_UI2_UIUtils__NormalizeScrollDistance(param_2,lVar5,uVar4);
  auVar15 = /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(fVar12 - fVar13,0,0x3f800000,0);
  return auVar15;
}



// ============================================================
// RVA: 0x2f91280 | Core.UI2.UIUtils.ScrollTargetNormalizedPosition
// ============================================================

/* WARNING: Possible PIC construction at 0x02f91608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f9160c) */
/* WARNING: Removing unreachable block (ram,0x02f91654) */
/* WARNING: Removing unreachable block (ram,0x02f91680) */

undefined1  [16]
Core_UI2_UIUtils__ScrollTargetNormalizedPosition
          (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,long param_5,
          undefined8 param_6,long param_7)

{
  undefined1 *puVar1;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 **ppuVar8;
  undefined *puVar9;
  float fVar10;
  float fVar11;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar12 [16];
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  float fVar14;
  float fVar15;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long *plVar2;
  undefined1 auVar13 [16];
  
  lVar3 = param_7;
  if ((bRam0000000003ebc6aa & 1) == 0) {
    func_0x00f78a20(0x3d53528);
    func_0x00f78a20(0x3d25608);
    bRam0000000003ebc6aa = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  if ((param_5 != 0) &&
     ((lVar7 = *(long *)(param_5 + 0x38), lVar7 != 0 ||
      (lVar7 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_5,uRam0000000003d53528), lVar7 != 0)))) {
    uStack_60 = /*UnityEngine.RectTransform$$get_rect*/ func_0x0325491c(lVar7,0);
    fStack_5c = param_2;
    uStack_58 = param_3;
    uStack_54 = param_4;
    if (((*(byte *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    Core_UI2_UIUtils__TransformBoundsTo(&uStack_78,param_6,lVar7);
    fVar10 = (float)/*UnityEngine.Rect$$get_center*/ func_0x032534e8(&uStack_60,0);
    if ((int)param_7 == 1) {
      fVar10 = param_2;
      /*UnityEngine.Bounds$$get_center*/ func_0x0321b3d8(&uStack_78,0);
      param_2 = param_2 - fVar10;
      fVar10 = (float)/*UnityEngine.UI.ScrollRect$$get_verticalNormalizedPosition*/ func_0x032e0560(param_5,0);
      if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = 1;
    }
    else {
      param_2 = (float)/*UnityEngine.Bounds$$get_center*/ func_0x0321b3d8(&uStack_78,0);
      param_2 = fVar10 - param_2;
      fVar10 = (float)/*UnityEngine.UI.ScrollRect$$get_horizontalNormalizedPosition*/ func_0x032e0454(param_5,0);
      if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = 0;
    }
    fVar11 = (float)Core_UI2_UIUtils__NormalizeScrollDistance(param_2,param_5,uVar5);
    /*UnityEngine.Mathf$$Clamp*/ func_0x0323d318(fVar10 - fVar11,0,0x3f800000,0);
    auVar12._4_4_ = extraout_var;
    auVar12._0_4_ = extraout_s0;
    auVar12._8_8_ = extraout_var_02;
    return auVar12;
  }
  auVar16 = func_0x00f78af4();
  plVar2 = auVar16._0_8_;
  puStack_88 = &Core_UI2_UIUtils__SnapToCenter;
  ppuVar8 = &puStack_90;
  uVar5 = 0x3ebc000;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam0000000003ebc6ab & 1) == 0) {
    func_0x00f78a20(0x3d25608);
    bRam0000000003ebc6ab = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  Core_UI2_UIUtils__ScrollTargetNormalizedPosition(plVar2,auVar16._8_8_,lVar3);
  if ((int)lVar3 == 1) {
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032e06d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x448))(plVar2,1,*(undefined8 *)(*plVar2 + 0x450));
      auVar13._4_4_ = extraout_var_01;
      auVar13._0_4_ = extraout_s0_01;
      auVar13._8_8_ = extraout_var_04;
      return auVar13;
    }
  }
  else if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032e06c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x448))(plVar2,0,*(undefined8 *)(*plVar2 + 0x450));
    auVar17._4_4_ = extraout_var_00;
    auVar17._0_4_ = extraout_s0_00;
    auVar17._8_8_ = extraout_var_03;
    return auVar17;
  }
  puVar9 = &Core_UI2_UIUtils__GetWorldRect;
  lVar7 = func_0x00f78af4();
  puVar1 = &stack0xffffffffffffff40;
  do {
    *(undefined8 *)(puVar1 + -0x30) = uVar5;
    *(long *)(puVar1 + -0x28) = auVar16._8_8_;
    *(long *)(puVar1 + -0x20) = lVar3;
    *(long *)(puVar1 + -0x18) = auVar16._0_8_;
    *(undefined1 ***)(puVar1 + -0x10) = ppuVar8;
    *(undefined **)(puVar1 + -8) = puVar9;
    if ((bRam0000000003ebc6ac & 1) == 0) {
      func_0x00f78a20(0x3d1f5e0);
      bRam0000000003ebc6ac = 1;
    }
    lVar3 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,4);
    lVar6 = 0x3ebc000;
    if ((lVar7 == 0) || (/*UnityEngine.RectTransform$$GetWorldCorners*/ func_0x032556ac(lVar7,lVar3,0), lVar6 = lVar3, lVar3 == 0)) {
      func_0x00f78af4();
    }
    else if ((*(uint *)(lVar3 + 0x18) != 0) && (2 < *(uint *)(lVar3 + 0x18))) {
      fVar10 = *(float *)(lVar3 + 0x20);
      fVar11 = *(float *)(lVar3 + 0x24);
      fVar14 = *(float *)(lVar3 + 0x38);
      fVar15 = *(float *)(lVar3 + 0x3c);
      *(undefined8 *)(puVar1 + -0x40) = 0;
      *(undefined8 *)(puVar1 + -0x38) = 0;
      /*UnityEngine.Rect$$.ctor*/ func_0x0325348c(fVar10,fVar11,fVar14 - fVar10,fVar15 - fVar11,puVar1 + -0x40,0);
      return ZEXT416(*(uint *)(puVar1 + -0x40));
    }
    uVar4 = func_0x00f78b24();
    auVar17 = func_0x00f78ac0(uVar4,0);
    lVar3 = auVar17._0_8_;
    *(undefined8 *)(puVar1 + -0x80) = unaff_d9;
    *(undefined8 *)(puVar1 + -0x78) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x70) = uVar5;
    *(undefined8 *)(puVar1 + -0x68) = 0x3d1f5e0;
    *(long *)(puVar1 + -0x60) = lVar6;
    *(long *)(puVar1 + -0x58) = lVar7;
    *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x48) = &Core_UI2_UIUtils__RectContainsRectHorizontally;
    ppuVar8 = (undefined1 **)(puVar1 + -0x50);
    auVar16._8_8_ = 0x3ebc000;
    auVar16._0_8_ = auVar17._8_8_;
    uVar5 = 0x3d25608;
    if ((bRam0000000003ebc6ad & 1) == 0) {
      func_0x00f78a20(0x3d25608);
      bRam0000000003ebc6ad = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar9 = &UNK_02f9160c;
    puVar1 = puVar1 + -0xa0;
    lVar7 = lVar3;
  } while( true );
}



// ============================================================
// RVA: 0x2f91424 | Core.UI2.UIUtils.SnapToCenter
// ============================================================

/* WARNING: Possible PIC construction at 0x02f91608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f9160c) */
/* WARNING: Removing unreachable block (ram,0x02f91654) */
/* WARNING: Removing unreachable block (ram,0x02f91680) */

undefined1  [16] Core_UI2_UIUtils__SnapToCenter(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  float fVar9;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar14 [16];
  undefined1 auVar10 [16];
  
  uVar6 = 0x3ebc000;
  if ((bRam0000000003ebc6ab & 1) == 0) {
    func_0x00f78a20(0x3d25608);
    bRam0000000003ebc6ab = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  Core_UI2_UIUtils__ScrollTargetNormalizedPosition(param_1,param_2,param_3);
  if ((int)param_3 == 1) {
    if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032e06d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x448))(param_1,1,*(undefined8 *)(*param_1 + 0x450));
      auVar10._4_4_ = extraout_var_00;
      auVar10._0_4_ = extraout_s0_00;
      auVar10._8_8_ = extraout_var_02;
      return auVar10;
    }
  }
  else if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032e06c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x448))(param_1,0,*(undefined8 *)(*param_1 + 0x450));
    auVar14._4_4_ = extraout_var;
    auVar14._0_4_ = extraout_s0;
    auVar14._8_8_ = extraout_var_01;
    return auVar14;
  }
  puVar8 = &Core_UI2_UIUtils__GetWorldRect;
  lVar2 = func_0x00f78af4();
  puVar1 = &stack0xffffffffffffffc0;
  do {
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x40);
    *(undefined8 *)(puVar1 + -0x30) = uVar6;
    *(undefined8 *)(puVar1 + -0x28) = param_2;
    *(long *)(puVar1 + -0x20) = param_3;
    *(long **)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar7;
    *(undefined **)(puVar1 + -8) = puVar8;
    if ((bRam0000000003ebc6ac & 1) == 0) {
      func_0x00f78a20(0x3d1f5e0);
      bRam0000000003ebc6ac = 1;
    }
    lVar3 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,4);
    lVar5 = 0x3ebc000;
    if ((lVar2 == 0) || (/*UnityEngine.RectTransform$$GetWorldCorners*/ func_0x032556ac(lVar2,lVar3,0), lVar5 = lVar3, lVar3 == 0)) {
      func_0x00f78af4();
    }
    else if ((*(uint *)(lVar3 + 0x18) != 0) && (2 < *(uint *)(lVar3 + 0x18))) {
      fVar9 = *(float *)(lVar3 + 0x20);
      fVar11 = *(float *)(lVar3 + 0x24);
      fVar12 = *(float *)(lVar3 + 0x38);
      fVar13 = *(float *)(lVar3 + 0x3c);
      *(undefined8 *)(puVar1 + -0x40) = 0;
      *(undefined8 *)(puVar1 + -0x38) = 0;
      /*UnityEngine.Rect$$.ctor*/ func_0x0325348c(fVar9,fVar11,fVar12 - fVar9,fVar13 - fVar11,puVar1 + -0x40,0);
      return ZEXT416(*(uint *)(puVar1 + -0x40));
    }
    uVar4 = func_0x00f78b24();
    auVar14 = func_0x00f78ac0(uVar4,0);
    param_1 = auVar14._8_8_;
    param_3 = auVar14._0_8_;
    *(undefined8 *)(puVar1 + -0x80) = unaff_d9;
    *(undefined8 *)(puVar1 + -0x78) = unaff_d8;
    *(undefined8 *)(puVar1 + -0x70) = uVar6;
    *(undefined8 *)(puVar1 + -0x68) = 0x3d1f5e0;
    *(long *)(puVar1 + -0x60) = lVar5;
    *(long *)(puVar1 + -0x58) = lVar2;
    *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x48) = &Core_UI2_UIUtils__RectContainsRectHorizontally;
    param_2 = 0x3ebc000;
    uVar6 = 0x3d25608;
    if ((bRam0000000003ebc6ad & 1) == 0) {
      func_0x00f78a20(0x3d25608);
      bRam0000000003ebc6ad = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar8 = &UNK_02f9160c;
    puVar1 = puVar1 + -0xa0;
    lVar2 = param_3;
  } while( true );
}



// ============================================================
// RVA: 0x2f914e0 | Core.UI2.UIUtils.GetWorldRect
// ============================================================

undefined1  [16]
Core_UI2_UIUtils__GetWorldRect
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          long param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar5;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar6 [16];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000003ebc6ac & 1) == 0) {
    func_0x00f78a20(0x3d1f5e0);
    bRam0000000003ebc6ac = 1;
  }
  lVar2 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,4);
  if ((param_5 == 0) || (/*UnityEngine.RectTransform$$GetWorldCorners*/ func_0x032556ac(param_5,lVar2,0), lVar2 == 0)) {
    func_0x00f78af4();
  }
  else if ((*(uint *)(lVar2 + 0x18) != 0) && (2 < *(uint *)(lVar2 + 0x18))) {
    uStack_40 = 0;
    uStack_38 = 0;
    /*UnityEngine.Rect$$.ctor*/ func_0x0325348c(*(float *)(lVar2 + 0x20),*(float *)(lVar2 + 0x24),
                    *(float *)(lVar2 + 0x38) - *(float *)(lVar2 + 0x20),
                    *(float *)(lVar2 + 0x3c) - *(float *)(lVar2 + 0x24),&uStack_40,0);
    return ZEXT416((uint)uStack_40);
  }
  uVar3 = func_0x00f78b24();
  auVar6 = func_0x00f78ac0(uVar3,0);
  if ((bRam0000000003ebc6ad & 1) == 0) {
    func_0x00f78a20(0x3d25608);
    bRam0000000003ebc6ad = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_90 = Core_UI2_UIUtils__GetWorldRect(auVar6._0_8_);
  uStack_8c = param_2;
  uStack_88 = param_3;
  uStack_84 = param_4;
  uStack_a0 = Core_UI2_UIUtils__GetWorldRect(auVar6._8_8_);
  uStack_9c = param_2;
  uStack_98 = param_3;
  uStack_94 = param_4;
  uVar4 = /*UnityEngine.Rect$$get_xMin*/ func_0x03253524(&uStack_a0,0);
  /*UnityEngine.Rect$$get_center*/ func_0x032534e8(&uStack_a0,0);
  iVar1 = /*UnityEngine.Rect$$Contains*/ func_0x032535ec(uVar4,&uStack_90,0);
  uVar4 = extraout_s0;
  uVar5 = extraout_var;
  uVar3 = extraout_var_01;
  if (iVar1 != 0) {
    uVar4 = /*UnityEngine.Rect$$get_xMax*/ func_0x03253544(&uStack_a0,0);
    /*UnityEngine.Rect$$get_center*/ func_0x032534e8(&uStack_a0,0);
    /*UnityEngine.Rect$$Contains*/ func_0x032535ec(uVar4,&uStack_90,0);
    uVar4 = extraout_s0_00;
    uVar5 = extraout_var_00;
    uVar3 = extraout_var_02;
  }
  auVar6._4_4_ = uVar5;
  auVar6._0_4_ = uVar4;
  auVar6._8_8_ = uVar3;
  return auVar6;
}



// ============================================================
// RVA: 0x2f915a4 | Core.UI2.UIUtils.RectContainsRectHorizontally
// ============================================================

void Core_UI2_UIUtils__RectContainsRectHorizontally
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if ((bRam0000000003ebc6ad & 1) == 0) {
    func_0x00f78a20(0x3d25608);
    bRam0000000003ebc6ad = 1;
  }
  if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uStack_50 = Core_UI2_UIUtils__GetWorldRect(param_5);
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  uStack_60 = Core_UI2_UIUtils__GetWorldRect(param_6);
  uStack_5c = param_2;
  uStack_58 = param_3;
  uStack_54 = param_4;
  uVar2 = /*UnityEngine.Rect$$get_xMin*/ func_0x03253524(&uStack_60,0);
  /*UnityEngine.Rect$$get_center*/ func_0x032534e8(&uStack_60,0);
  iVar1 = /*UnityEngine.Rect$$Contains*/ func_0x032535ec(uVar2,&uStack_50,0);
  if (iVar1 != 0) {
    uVar2 = /*UnityEngine.Rect$$get_xMax*/ func_0x03253544(&uStack_60,0);
    /*UnityEngine.Rect$$get_center*/ func_0x032534e8(&uStack_60,0);
    /*UnityEngine.Rect$$Contains*/ func_0x032535ec(uVar2,&uStack_50,0);
  }
  return;
}



// ============================================================
// RVA: 0x2f91698 | Core.UI2.UIUtils..cctor
// ============================================================

void Core_UI2_UIUtils___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003ebc6ae & 1) == 0) {
    func_0x00f78a20(0x3d25608);
    func_0x00f78a20(0x3d1f5e0);
    bRam0000000003ebc6ae = 1;
  }
  uVar1 = func_0x00f78a34(/*UnityEngine.Vector3[]_TypeInfo*/ uRam0000000003d1f5e0,4);
  **(undefined8 **)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xb8) = uVar1;
  return;
}



